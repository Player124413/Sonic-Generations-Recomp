#include "native_gpu_bridge.h"
#include <algorithm>
#include <bit>
#include <cstdio>
#include <cstring>
#include <vector>
using namespace sonic::rex_host;
#define CHECK(x) do { if (!(x)) { std::fprintf(stderr, "line %d: %s\n", __LINE__, #x); return 1; } } while (0)
namespace {
struct Memory { std::vector<uint8_t> bytes = std::vector<uint8_t>(65536); unsigned reads = 0; };
bool Read(const void* context, uint32_t address, std::span<uint8_t> out) noexcept {
    auto& mem = *static_cast<Memory*>(const_cast<void*>(context));
    ++mem.reads;
    if (address > mem.bytes.size() || out.size() > mem.bytes.size() - address) return false;
    std::copy_n(mem.bytes.begin() + address, out.size(), out.begin()); return true;
}
}
int main() {
    Memory memory;
    GuestGpu::MemoryView view{{}, Read, &memory};
    std::array<uint8_t, 8> scratch{};
    CHECK(!view.Copy(0, scratch) && memory.reads == 0);
    CHECK(!view.Copy(0xFFFFFFFC, scratch) && memory.reads == 0);
    CHECK(view.Copy(4096, scratch) && memory.reads == 1);
    CHECK(!view.Copy(65535, scratch) && memory.reads == 2);
    NativeGpuBridge bridge;
    CaptureArguments args{4096, 4, 0, 3};
    CHECK(!bridge.Capture(GpuEntry::CreateDevice, args, view));
    CHECK(!bridge.Capture(GpuEntry::DrawVertices, args, view));
    auto batch = bridge.Capture(GpuEntry::SwapHelper, {4096, 0}, view);
    CHECK(batch && batch->draws.size() == 1 && batch->nativeTargets);
    CHECK(batch->draws[0].arguments[0] == 4 && batch->draws[0].arguments[2] == 3);
    CHECK(batch->draws[0].kind == GuestGpu::DrawKind::Vertices);
    CHECK(batch->draws[0].resources.captured);
    // A bad swap/backbuffer is a rejected batch, not silently a valid frame.
    CHECK(batch->hasBackbuffer && batch->backbuffer.status != GuestGpu::ConversionResult::Success);
    auto empty = bridge.Capture(GpuEntry::SwapHelper, {4096, 0}, view);
    CHECK(empty && empty->draws.empty());
    CHECK(!bridge.Capture(GpuEntry::DrawVertices, {0xFFFF0000, 4, 0, 3}, view));
    auto bad = bridge.Capture(GpuEntry::SwapHelper, {4096, 0}, view);
    CHECK(bad && bad->errors.invalidMemory == 1);
    CHECK(!bridge.Capture(GpuEntry::Clear,
        {4096, 0x10, 20000, 0, 123, 7, 0, 0, std::bit_cast<uint64_t>(0.25)}, view));
    CHECK(!bridge.Capture(GpuEntry::Resolve, {4096, 1, 2, 3, 4, 5, 6}, view));
    auto commands = bridge.Capture(GpuEntry::SwapHelper, {4096, 0}, view);
    CHECK(commands && commands->clears.size() == 1 && commands->resolves.size() == 1);
    CHECK(commands->clears[0].depth == 0.25f && commands->clears[0].stencil == 7);
    const auto& resolve = commands->resolves[0];
    CHECK(resolve.flags == 1 && resolve.rectangle == 2 && resolve.point == 4 && resolve.mip == 5 && resolve.slice == 6);
    CHECK(commands->clears[0].sequence < resolve.sequence);
    // Span users (legacy runtime) keep their existing behavior.
    GuestGpu::MemoryView legacy{memory.bytes};
    CHECK(legacy.Copy(4096, scratch));
    CHECK(!legacy.Copy(65535, scratch));
    std::puts("Native bridge: sparse SDK reader, ownership, dispatch, drain and rejection passed");
}
