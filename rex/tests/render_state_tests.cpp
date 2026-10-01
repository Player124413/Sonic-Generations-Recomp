// Contract tests for the state and geometry feed of our renderer.
//
// These are the packets the Xbox 360 D3D driver actually uses: render state goes
// through SET_CONSTANT / SET_CONSTANT2 / SET_SHADER_CONSTANTS blocks, shader
// constants are loaded from guest memory with LOAD_ALU_CONSTANT, shader bytecode
// arrives as IM_LOAD / IM_LOAD_IMMEDIATE, and draws carry the index buffer
// description inline. A device that only understood Type-0 register writes would
// see draws with no state at all, so each of these is checked with a stream that
// is built here and decoded by the real device.
#include "gpu_native/command_processor.h"

#include <cstdio>
#include <cstring>
#include <span>
#include <vector>

using namespace sonic::rex_host;
using namespace sonic::rex_host::gpu;

namespace {
int failures = 0;
#define CHECK(condition)                                                     \
    do {                                                                     \
        if (!(condition)) {                                                  \
            std::printf("FAIL %s:%d: %s\n", __FILE__, __LINE__, #condition); \
            ++failures;                                                      \
        }                                                                    \
    } while (0)

/// Guest memory in guest byte order, so a byte-order mistake shows up as a wrong
/// value rather than as a plausible one.
class TestMemory final : public GuestMemory {
public:
    explicit TestMemory(size_t size) : bytes_(size, 0) {}
    bool Read(uint32_t address, std::span<uint8_t> destination) override {
        if (uint64_t(address) + destination.size() > bytes_.size()) return false;
        std::memcpy(destination.data(), bytes_.data() + address, destination.size());
        return true;
    }
    bool Write32(uint32_t address, uint32_t value) override {
        if (uint64_t(address) + 4 > bytes_.size()) return false;
        Store(address, value);
        return true;
    }
    void Store(uint32_t address, uint32_t value) {
        bytes_[address] = uint8_t(value >> 24);
        bytes_[address + 1] = uint8_t(value >> 16);
        bytes_[address + 2] = uint8_t(value >> 8);
        bytes_[address + 3] = uint8_t(value);
    }
    uint32_t Load(uint32_t address) const {
        return (uint32_t(bytes_[address]) << 24) | (uint32_t(bytes_[address + 1]) << 16) |
               (uint32_t(bytes_[address + 2]) << 8) | uint32_t(bytes_[address + 3]);
    }
    void WriteStream(uint32_t address, const std::vector<uint32_t>& words) {
        for (size_t i = 0; i < words.size(); ++i) Store(address + uint32_t(i * 4), words[i]);
    }

private:
    std::vector<uint8_t> bytes_;
};

struct RecordingPresenter final : SwapPresenter {
    uint32_t frames = 0, lastAddress = 0;
    void OnSwap(uint32_t frontbufferAddress, uint32_t, uint32_t) override {
        ++frames;
        lastAddress = frontbufferAddress;
    }
};

/// A device with the render state feed attached, exactly as the plugin wires it.
struct Device {
    Device() : memory(1u << 20) {
        processor.SetMemory(&memory);
        processor.SetPresenter(&presenter);
        processor.SetRenderState(&state);
        processor.registers().SetVideoMode({1280, 720, 60});
        processor.InitializeRingBuffer(ringBase, 12);
        ringMask = (uint32_t(1) << 13) - 1;
    }
    void WriteRingDword(uint32_t dwordIndex, uint32_t value) {
        const uint32_t ringBytes = (ringMask + 1) * 4;
        memory.Store(ringBase + (dwordIndex * 4) % ringBytes, value);
    }
    void Submit(const std::vector<uint32_t>& words) {
        for (const uint32_t word : words) WriteRingDword(writeOffset_++, word);
        processor.OnWritePointer(writeOffset_);
        processor.Tick();
    }
    TestMemory memory;
    RecordingPresenter presenter;
    RenderState state;
    CommandProcessor processor;
    uint32_t ringBase = 0x10000;
    uint32_t ringMask = 0;
    uint32_t writeOffset_ = 0;
};

uint32_t DrawInitiator(uint32_t primitive, uint32_t source, uint32_t majorMode, bool index32,
                       uint32_t numIndices) {
    return (primitive & 0x3F) | ((source & 3) << 6) | ((majorMode & 3) << 8) |
           (index32 ? 0x800u : 0u) | ((numIndices & 0xFFFF) << 16);
}

void TestConstantTablesWriteRegisters() {
    Device device;
    // SET_CONSTANT type 4 (REGISTERS): the render state block. Index is the
    // register offset from 0x2000, the values follow.
    const uint32_t rbSurfaceInfo = 0x2000;
    const uint32_t rbColorInfo = 0x2001;
    device.Submit({pm4::MakePacketType3(0x2D, 4), (4u << 16) | (rbSurfaceInfo - 0x2000),
                   1280u | (1u << 16),  // pitch 1280, 2x MSAA
                   (7u << 0) | (2u << 16),  // color base 7 tiles, format 2
                   0x00000044});
    CHECK(device.state.ReadRegister(rbSurfaceInfo) == (1280u | (1u << 16)));
    CHECK(device.state.ReadRegister(rbColorInfo) == ((7u) | (2u << 16)));
    CHECK(device.state.ReadRegister(0x2002) == 0x44);
    CHECK(device.state.stats().constantBlocks == 1);
    CHECK(device.state.stats().constantDwords == 3);

    // SET_CONSTANT2 / SET_SHADER_CONSTANTS use a flat 16-bit index and no table.
    const uint32_t scissorTl = 0x2081;
    device.Submit({pm4::MakePacketType3(0x55, 3), scissorTl, (10u << 0) | (20u << 16),
                   (100u << 0) | (60u << 16)});
    CHECK(device.state.ReadRegister(scissorTl) == ((10u) | (20u << 16)));
    CHECK(device.state.ReadRegister(0x2082) == ((100u) | (60u << 16)));
    const auto target = device.state.Target();
    CHECK(target.scissorValid);
    CHECK(target.scissorLeft == 10 && target.scissorTop == 20);
    CHECK(target.scissorRight == 100 && target.scissorBottom == 60);
    CHECK(target.surfacePitchPixels == 1280);
    CHECK(target.msaaSamples == 1);
    CHECK(target.colorBaseTiles == 7);
    CHECK(target.colorFormat == 2);

    // An unknown table type must never be written somewhere plausible.
    const uint32_t before = device.state.ReadRegister(0x4000);
    device.Submit({pm4::MakePacketType3(0x2D, 2), (9u << 16) | 3, 0xDEADBEEF});
    CHECK(device.state.ReadRegister(0x4000) == before);
    CHECK(device.state.stats().unknownConstantTables == 1);

    // ALU / FETCH / BOOL / LOOP blocks land in their own tables.
    device.Submit({pm4::MakePacketType3(0x2D, 3), (0u << 16) | 2 /* ALU dword 2 */, 0x3F800000,
                   0x40000000});
    CHECK(device.state.ReadRegister(0x4002) == 0x3F800000);
    CHECK(device.state.ReadRegister(0x4003) == 0x40000000);
    device.Submit({pm4::MakePacketType3(0x2D, 2), (1u << 16) | 6 /* FETCH dword 6 */, 0x12345678});
    CHECK(device.state.ReadRegister(0x4806) == 0x12345678);
    device.Submit({pm4::MakePacketType3(0x2D, 2), (2u << 16) | 1, 0x0000000F});
    CHECK(device.state.ReadRegister(0x4901) == 0x0000000F);
    device.Submit({pm4::MakePacketType3(0x2D, 2), (3u << 16) | 0, 0x00000003});
    CHECK(device.state.ReadRegister(0x4908) == 0x00000003);
}

void TestLoadAluConstantReadsGuestMemory() {
    Device device;
    device.memory.WriteStream(0x2000, {0x11111111, 0x22222222, 0x33333333});
    // LOAD_ALU_CONSTANT: address, (type << 16) | index, (size_dwords & 0xFFF).
    device.Submit({pm4::MakePacketType3(0x2F, 4), 0x2000, (0u << 16) | 4, 3, 0x00000000});
    CHECK(device.state.ReadRegister(0x4004) == 0x11111111);
    CHECK(device.state.ReadRegister(0x4005) == 0x22222222);
    CHECK(device.state.ReadRegister(0x4006) == 0x33333333);
    CHECK(device.state.stats().constantDwords == 3);

    // Unreadable constants are counted, never silently zeroed.
    const uint64_t blocks = device.state.stats().constantBlocks;
    device.Submit({pm4::MakePacketType3(0x2F, 4), 0x00F00000, (0u << 16) | 0, 4, 0x00000000});
    CHECK(device.state.stats().constantBlocks == blocks);
    CHECK(device.processor.GetStats().unsupportedPackets >= 1);
}

void TestDrawPacketsDecodeGeometry() {
    Device device;
    // Auto-index draw: no index buffer, indices come from the vertex shader.
    device.Submit({pm4::MakePacketType3(0x36, 1), DrawInitiator(4 /*triangle list*/, 2, 0, false, 36)});
    CHECK(device.state.draws().size() == 1);
    const DrawCall& autoDraw = device.state.draws()[0];
    CHECK(autoDraw.primitiveType == 4);
    CHECK(autoDraw.sourceSelect == 2);
    CHECK(!autoDraw.indexed);
    CHECK(autoDraw.numIndices == 36);
    // Implicit major mode stays implicit for a primitive type below 0x10: the
    // primitive type itself decides how vertices are assembled.
    CHECK(!autoDraw.majorModeExplicit);

    // Indexed draw: DRAW_INDX carries a viz token before VGT_DRAW_INITIATOR, then
    // VGT_DMA_BASE and VGT_DMA_SIZE.
    device.Submit({pm4::MakePacketType3(0x22, 4), 0 /* viz token */,
                   DrawInitiator(6 /*triangle strip*/, 0, 0, false, 100), 0x3000,
                   100u /* words */ | (0u << 30)});
    CHECK(device.state.draws().size() == 2);
    const DrawCall& indexed = device.state.draws()[1];
    CHECK(indexed.indexed);
    CHECK(indexed.indexBuffer.guestBase == 0x3000);
    CHECK(indexed.indexBuffer.numWords == 100);
    CHECK(indexed.indexBuffer.lengthBytes == 200);
    CHECK(!indexed.indexBuffer.index32);
    CHECK(indexed.numIndices == 100);

    // 32-bit indices double the byte length; the base is word-aligned.
    device.Submit({pm4::MakePacketType3(0x22, 4), 0,
                   DrawInitiator(4, 0, 0, true, 8), 0x3002, 8u | (1u << 30)});
    const DrawCall& wide = device.state.draws()[2];
    CHECK(wide.indexBuffer.index32);
    CHECK(wide.indexBuffer.guestBase == 0x3000);
    CHECK(wide.indexBuffer.lengthBytes == 32);
    CHECK(wide.indexBuffer.swapMode == 1);
    CHECK(device.state.stats().draws == 3);
    CHECK(device.state.stats().unsupportedSourceSelect == 0);

    // Immediate indices are not implemented and must be counted, not drawn.
    device.Submit({pm4::MakePacketType3(0x36, 1), DrawInitiator(4, 1, 0, false, 3)});
    CHECK(device.state.stats().unsupportedSourceSelect == 1);
    CHECK(device.state.draws().size() == 3);

    // A draw whose payload cannot describe the draw is dropped and counted: this
    // one claims a DMA index buffer but carries no base or size.
    device.Submit({pm4::MakePacketType3(0x36, 1), DrawInitiator(4, 0, 0, false, 3)});
    CHECK(device.state.stats().drawsDropped == 1);
    CHECK(device.state.draws().size() == 3);

    // The unverified *_BIN opcodes are counted instead of guessed at.
    device.Submit({pm4::MakePacketType3(0x35, 1), DrawInitiator(4, 2, 0, false, 3)});
    CHECK(device.state.stats().unsupportedDrawOpcodes == 1);
}

void TestDrawSnapshotAndFrameAccounting() {
    Device device;
    device.Submit({pm4::MakePacketType3(0x55, 3), 0x2000, (640u << 0) | (2u << 16), 0});
    device.Submit({pm4::MakePacketType3(0x36, 1), DrawInitiator(2 /*line list*/, 2, 1, false, 12)});
    CHECK(device.state.draws()[0].surfaceInfo == (640u | (2u << 16)));
    CHECK(device.state.draws()[0].majorMode == 1);
    CHECK(device.state.draws()[0].majorModeExplicit);

    // A swap closes the frame: draws are accounted and the queue is cleared.
    device.Submit({pm4::MakePacketType3(0x64, 4), pm4::kSwapSignature, 0x400000, 640, 480});
    CHECK(device.presenter.frames == 1);
    CHECK(device.state.frames().size() == 1);
    const FrameSummary& frame = device.state.lastFrame();
    CHECK(frame.draws == 1);
    CHECK(frame.vertices == 12);
    // Register writes from every source: the register block (3) plus the scissor
    // pair (2), not only Type-0 packets.
    // Register writes from every source, including the constant block: the
    // scissor pair arrived as SET_CONSTANT2, not as a Type-0 packet.
    CHECK(frame.registerWrites == 2);
    CHECK(frame.constantBlocks == 1);
    CHECK(frame.constantDwords == 2);
    CHECK(device.state.draws().empty());
    CHECK(device.state.stats().frames == 1);

    // A second frame accumulates on its own.
    device.Submit({pm4::MakePacketType3(0x36, 1), DrawInitiator(4, 2, 0, false, 6)});
    device.Submit({pm4::MakePacketType3(0x36, 1), DrawInitiator(4, 2, 0, false, 6)});
    device.Submit({pm4::MakePacketType3(0x64, 4), pm4::kSwapSignature, 0x400000, 640, 480});
    CHECK(device.state.frames().size() == 2);
    CHECK(device.state.frames()[1].draws == 2);
    CHECK(device.state.frames()[1].vertices == 12);
}

void TestShaderUploadsAreCopied() {
    Device device;
    device.memory.WriteStream(0x3000, {0xAABBCCDD, 0x11223344});
    // IM_LOAD: stage 0 (vertex) address 0x3000, then start 0 and size 2 dwords.
    device.Submit({pm4::MakePacketType3(0x27, 2), 0x3000, 2});
    CHECK(device.state.shaderUploads().size() == 1);
    const ShaderProgram& fromMemory = device.state.shaderUploads()[0];
    CHECK(fromMemory.stage == ShaderProgram::Stage::kVertex);
    CHECK(fromMemory.immediate);
    CHECK(fromMemory.dwords == 2);
    CHECK(fromMemory.words.size() == 2);
    CHECK(fromMemory.words[0] == 0xAABBCCDD);
    CHECK(fromMemory.words[1] == 0x11223344);
    // The program address is visible as state, which is what the renderer keys on.
    CHECK(device.state.Target().vertexShaderAddress == 0x3000);

    // IM_LOAD_IMMEDIATE: the instructions are in the packet itself.
    device.Submit({pm4::MakePacketType3(0x2B, 4), 0x3000u | 1 /* pixel shader */, 2, 0x00000001, 0x00000002});
    CHECK(device.state.shaderUploads().size() == 2);
    const ShaderProgram& immediate = device.state.shaderUploads()[1];
    CHECK(immediate.stage == ShaderProgram::Stage::kPixel);
    CHECK(immediate.immediate);
    CHECK(immediate.words.size() == 2);
    CHECK(immediate.words[0] == 1 && immediate.words[1] == 2);
    CHECK(device.state.Target().pixelShaderAddress == 0x3000);
    CHECK(device.state.stats().shaderUploads == 2);

    // A nonzero start is unreadable state: counted, not reinterpreted.
    device.Submit({pm4::MakePacketType3(0x2B, 3), 0, (4u << 16) | 2, 0xDEAD});
    CHECK(device.state.stats().shaderUploadsUnreadable == 1);
    CHECK(device.state.shaderUploads().size() == 2);
}

void TestMemoryWritesReachGuestMemory() {
    Device device;
    // PM4_MEM_WRITE: address, then the values the GPU must store. The guest polls
    // this memory, so the store has to happen.
    device.Submit({pm4::MakePacketType3(0x3D, 3), 0x5000, 0xCAFEBABE, 0x00000001});
    CHECK(device.memory.Load(0x5000) == 0xCAFEBABE);
    CHECK(device.memory.Load(0x5004) == 0x00000001);
    CHECK(device.state.stats().memoryWrites == 1);
    CHECK(device.state.stats().memoryWriteDwords == 2);
    CHECK(device.processor.GetStats().memoryWrites == 2);
    const auto writes = device.state.TakeMemoryWrites();
    CHECK(writes.size() == 1);
    CHECK(writes[0].address == 0x5000);
    CHECK(writes[0].values.size() == 2);
    CHECK(device.state.stats().memoryWrites == 1);  // take() does not recount
}

void TestRendererTakesDraws() {
    Device device;
    device.Submit({pm4::MakePacketType3(0x36, 1), DrawInitiator(4, 2, 0, false, 9)});
    auto draws = device.state.TakeDraws();
    CHECK(draws.size() == 1);
    CHECK(draws[0].numIndices == 9);
    CHECK(device.state.draws().empty());
    device.Submit({pm4::MakePacketType3(0x64, 4), pm4::kSwapSignature, 0x400000, 640, 480});
    // Taken draws are not counted as dropped at the end of the frame.
    CHECK(device.state.lastFrame().draws == 1);
    CHECK(device.state.stats().drawsDropped == 0);
}

void TestCapsAreVisible() {
    RenderState::Config config;
    config.maxDrawsPerFrame = 2;
    config.maxMemoryWriteDwords = 1;
    Device device;
    device.processor.SetRenderState(nullptr);
    RenderState state(config);
    device.processor.SetRenderState(&state);
    for (int i = 0; i < 5; ++i)
        device.Submit({pm4::MakePacketType3(0x36, 1), DrawInitiator(4, 2, 0, false, 3)});
    CHECK(state.draws().size() == 2);
    CHECK(state.stats().drawsDropped == 3);
    device.Submit({pm4::MakePacketType3(0x3D, 4), 0x6000, 1, 2, 3});
    CHECK(state.stats().memoryWritesTruncated == 1);
    CHECK(state.TakeMemoryWrites()[0].values.size() == 1);
}

} // namespace

int main() {
    std::setvbuf(stdout, nullptr, _IONBF, 0);
    TestConstantTablesWriteRegisters();
    TestLoadAluConstantReadsGuestMemory();
    TestDrawPacketsDecodeGeometry();
    TestDrawSnapshotAndFrameAccounting();
    TestShaderUploadsAreCopied();
    TestMemoryWritesReachGuestMemory();
    TestRendererTakesDraws();
    TestCapsAreVisible();
    if (failures) {
        std::printf("render state: %d failure(s)\n", failures);
        return 1;
    }
    std::puts("render state (constant blocks, draws, shaders, mem writes): all checks passed");
    return 0;
}
