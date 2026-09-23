#include <gpu/native_commands.h>
#include <gpu/render_backend.h>
#include <bit>
#include <cstdio>
#include <cstdlib>
#include <thread>

#define CHECK(condition) do { if (!(condition)) { \
    std::fprintf(stderr, "FAIL line %d: %s\n", __LINE__, #condition); std::abort(); \
} } while (false)
using namespace GuestGpu;
constexpr uint32_t Device = 0x1000;
static void Store(std::vector<uint8_t>& memory, size_t offset, uint32_t value)
{
    for (size_t i = 0; i < 4; ++i) memory.at(Device + offset + i) = uint8_t(value >> (24 - i * 8));
}
struct RejectingBackend final : IRenderBackend
{
    const char* GetName() const override { return "test"; }
    bool Init(const VideoMode&) override { return true; }
    void Shutdown() override {}
    void Present() override {}
    void Resize(uint32_t, uint32_t) override {}
};
static void TestClearOrdering()
{
    std::vector<uint8_t> memory(Device+NativeState::ByteSize);
    Store(memory,100,0); Store(memory,104,0); Store(memory,108,1280); Store(memory,112,720);
    Store(memory,120,std::bit_cast<uint32_t>(0.25f));
    Store(memory,124,std::bit_cast<uint32_t>(0.5f));
    Store(memory,128,std::bit_cast<uint32_t>(0.75f));
    Store(memory,132,std::bit_cast<uint32_t>(1.0f));
    CommandStream stream(3);
    CHECK(stream.CaptureClear({memory},Device,0x11,Device+100,Device+120,0.5f,0)==CaptureResult::Disabled);
    stream.Enable(true);
    CHECK(stream.CaptureClear({memory},Device,0x11,Device+100,Device+120,0.5f,0)==CaptureResult::Captured);
    CHECK(stream.Capture({memory},Device,DrawKind::Vertices,{4,0,3,0})==CaptureResult::Captured);
    CHECK(stream.CaptureClear({memory},Device,0x10,Device+100,0,0.25f,0)==CaptureResult::Captured);
    auto batch=stream.Drain();
    CHECK(batch.clears.size()==2 && batch.draws.size()==1 && !batch.errors.Any());
    CHECK(batch.clears[0].sequence<batch.draws[0].sequence && batch.draws[0].sequence<batch.clears[1].sequence);
    CHECK(batch.clears[0].rectangle[2]==1280 && batch.clears[0].rectangle[3]==720);
    CHECK(batch.clears[0].color[0]==0.25f && batch.clears[0].color[3]==1.0f);
    CHECK(batch.clears[1].depth==0.25f);
    Store(memory,120,0);
    CHECK(batch.clears[0].color[0]==0.25f); // owned snapshot
    CHECK(stream.CaptureClear({memory},Device,1,0,Device+120,1,0)==CaptureResult::InvalidMemory);
    CHECK(stream.Drain().errors.invalidMemory==1);
    for(int i=0;i<3;++i)
        CHECK(stream.CaptureClear({memory},Device,0x10,Device+100,0,1,0)==CaptureResult::Captured);
    CHECK(stream.Capture({memory},Device,DrawKind::Vertices,{})==CaptureResult::Overflow);
    CHECK(stream.Drain().errors.overflow==1);
    stream.CaptureClear({memory},Device,0x10,Device+100,0,1,0);
    stream.Enable(false);
    CHECK(stream.Drain().clears.empty());
}
int main()
{
    TestClearOrdering();
    std::vector<uint8_t> memory(Device + NativeState::ByteSize);
    Store(memory, 12792, 0x12345678);
    Store(memory, 12804, 0xCAFEBABE);
    Store(memory, 12808, 0x80010000);
    Store(memory, 12788, 0x81010000);
    Store(memory, 12896 + 25 * 4, 0xDEADBEEF);
    Store(memory, 13000 + 2 * 4, std::bit_cast<uint32_t>(1280.0f));
    Store(memory, 13028, std::bit_cast<uint32_t>(int32_t{-20}));
    Store(memory, 1920, std::bit_cast<uint32_t>(1.5f));
    Store(memory, 6016 + 255 * 16 + 12, 0x7FC01234); // retain NaN payload
    Store(memory, 1152 + 25 * 24 + 20, 0x1234ABCD);
    NativeState state;
    CHECK(NativeState::Read({memory}, Device, state));
    CHECK(state.ColorTargets()[0] == 0x12345678);
    CHECK(state.ColorTargets()[3] == 0xCAFEBABE);
    CHECK(state.DepthTarget() == 0x80010000);
    CHECK(state.IndexBuffer() == 0x81010000);
    CHECK(state.Textures()[25] == 0xDEADBEEF);
    CHECK(state.Viewport()[2] == 1280.0f);
    CHECK(state.Scissor()[0] == -20);
    std::array<float, 4> constant{};
    CHECK(state.FloatConstant(0, 0, constant) && constant[0] == 1.5f);
    CHECK(state.FloatConstant(1, 255, constant));
    CHECK(std::bit_cast<uint32_t>(constant[3]) == 0x7FC01234);
    CHECK(!state.FloatConstant(2, 0, constant));
    CHECK(!state.FloatConstant(0, 256, constant));
    std::array<uint32_t, 6> fetch{};
    CHECK(state.TextureFetch(25, fetch) && fetch[5] == 0x1234ABCD);
    CHECK(!state.TextureFetch(26, fetch));
    CHECK(!NativeState::Read({memory}, 0, state));
    CHECK(!NativeState::Read({memory}, 4, state));
    CHECK(!NativeState::Read({memory}, Device + 1, state));
    CHECK(!NativeState::Read({memory}, 0xFFFFF000u, state));
    CHECK(!NativeState::Read({std::span<const uint8_t>(memory).first(memory.size() - 1)}, Device, state));
    CHECK(!NativeState::Read({}, Device, state));
    CHECK(state.ColorTargets()[0] == 0x12345678); // failed reads leave output unchanged

    // Index descriptor/data are separate allocations, not part of the device.
    const uint32_t indexResource = uint32_t(memory.size());
    const uint32_t indexData = indexResource + 32;
    memory.resize(indexData + 64);
    Store(memory, indexResource - Device, 0); // 16-bit indices
    Store(memory, indexResource - Device + 24, indexData);
    for (size_t i = 0; i < 64; ++i) memory[indexData + i] = uint8_t(i);
    Store(memory, 12788, indexResource);
    IndexSnapshot indices;
    CHECK(IndexSnapshot::Read({memory}, indexResource, 2, 6, 64, indices) == ResourceReadResult::Success);
    CHECK(indices.stride == 2 && indices.bytes.size() == 12 && indices.bytes[0] == 4);
    CHECK(IndexSnapshot::Read({memory}, indexResource, 2, 6, 1, indices) == ResourceReadResult::TooLarge);
    CHECK(IndexSnapshot::Read({memory}, indexResource, UINT32_MAX, 1, 64, indices) == ResourceReadResult::InvalidMemory);
    CHECK(IndexSnapshot::Read({memory}, indexResource, 0, UINT32_MAX, SIZE_MAX, indices) == ResourceReadResult::TooLarge);
    Store(memory, indexResource - Device, 0x80000000u);
    CHECK(IndexSnapshot::Read({memory}, indexResource, 2, 6, 64, indices) == ResourceReadResult::Success);
    CHECK(indices.stride == 4 && indices.bytes.size() == 24 && indices.bytes[0] == 8);
    CHECK(IndexSnapshot::Read({memory}, indexResource, 16, 1, 64, indices) == ResourceReadResult::InvalidMemory);
    Store(memory, indexResource - Device, 0);

    CommandStream stream(2);
    CHECK(stream.Capture({}, 0, DrawKind::Vertices, {}) == CaptureResult::Disabled);
    stream.Enable(true);
    CHECK(stream.Capture({}, 0, DrawKind::Vertices, {}) == CaptureResult::InvalidMemory);
    CHECK(stream.Capture({memory}, Device, DrawKind::Vertices, {4, 2, 6, 0}) == CaptureResult::Captured);
    Store(memory, 12792, 0x11111111);
    CHECK(stream.Capture({memory}, Device, DrawKind::IndexedVertices, {4, 0, 2, 6}) == CaptureResult::Captured);
    CHECK(stream.Capture({memory}, Device, DrawKind::Vertices, {}) == CaptureResult::Overflow);
    auto batch = stream.Drain();
    CHECK(batch.draws.size() == 2);
    CHECK(batch.draws[0].state.ColorTargets()[0] == 0x12345678);
    CHECK(batch.draws[1].state.ColorTargets()[0] == 0x11111111);
    CHECK(batch.draws[0].sequence + 1 == batch.draws[1].sequence);
    CHECK(batch.draws[1].arguments[3] == 6);
    CHECK(batch.draws[1].kind == DrawKind::IndexedVertices);
    CHECK(batch.payloadBytes == 12);
    CHECK(batch.draws[1].indices.bytes[0] == 4);
    memory[indexData + 4] = 255;
    CHECK(batch.draws[1].indices.bytes[0] == 4); // resource reuse cannot change queued bytes

    CHECK(batch.errors.invalidMemory == 1 && batch.errors.overflow == 1);
    CHECK(!NativeBatch::CompleteCoverage);
    RejectingBackend backend;
    CHECK(backend.SubmitGuestBatch(batch) == SubmissionResult::Unsupported);
    const auto empty = stream.Drain();
    CHECK(empty.draws.empty() && !empty.errors.Any());
    CHECK(stream.Capture({memory}, Device, DrawKind::Vertices, {}) == CaptureResult::Captured);
    stream.Enable(false);
    CHECK(stream.Drain().draws.empty());

    CommandStream concurrent;
    concurrent.Enable(true);
    std::vector<std::thread> threads;
    for (int t = 0; t < 4; ++t) threads.emplace_back([&] {
        for (int i = 0; i < 32; ++i)
            CHECK(concurrent.Capture({memory}, Device, DrawKind::Vertices, {}) == CaptureResult::Captured);
    });
    for (auto& thread : threads) thread.join();
    const auto collected = concurrent.Drain();
    CHECK(collected.draws.size() == 128 && !collected.errors.Any());
    for (size_t i = 0; i < collected.draws.size(); ++i) CHECK(collected.draws[i].sequence == i);
    CHECK(concurrent.Capture({memory}, Device, DrawKind::Vertices, {}) == CaptureResult::Captured);
    CHECK(concurrent.Drain().draws[0].sequence == 128);
    memory.resize(indexData + IndexSnapshot::MaxBytes);
    Store(memory, indexResource - Device, 0x80000000u);
    CommandStream budget;
    budget.Enable(true);
    for (size_t i = 0; i < CommandStream::MaxPayloadBytes / IndexSnapshot::MaxBytes; ++i)
        CHECK(budget.Capture({memory}, Device, DrawKind::IndexedVertices, {4, 0, 0, 65536}) == CaptureResult::Captured);
    CHECK(budget.Capture({memory}, Device, DrawKind::IndexedVertices, {4, 0, 0, 1}) == CaptureResult::ResourceLimit);
    const auto limited = budget.Drain();
    CHECK(limited.payloadBytes == CommandStream::MaxPayloadBytes && limited.errors.resourceLimit == 1);
    CHECK(budget.Capture({memory}, Device, DrawKind::IndexedVertices, {4, 0, 0, 1}) == CaptureResult::Captured);
    std::puts("Native state decoding, bounds, ownership, queue and backend rejection tests passed");
}
