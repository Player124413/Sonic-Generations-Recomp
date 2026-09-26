#include "native_gpu_bridge.h"
#include <bit>
namespace sonic::rex_host {
std::optional<GuestGpu::NativeBatch> NativeGpuBridge::Capture(
    GpuEntry entry, const CaptureArguments& a, GuestGpu::MemoryView memory) {
    const auto u = [&](size_t i) { return uint32_t(a[i]); };
    switch (entry) {
    case GpuEntry::DrawVertices:
    case GpuEntry::DrawIndexedVertices:
        stream_.Capture(memory, u(0), entry == GpuEntry::DrawVertices ?
            GuestGpu::DrawKind::Vertices : GuestGpu::DrawKind::IndexedVertices,
            {u(1), u(2), u(3), u(4)});
        break;
    case GpuEntry::Clear:
        stream_.CaptureClear(memory, u(0), u(1), u(2), u(3),
            float(std::bit_cast<double>(a[8])), u(5));
        break;
    case GpuEntry::Resolve:
        stream_.CaptureResolve(memory, u(0), {u(1), u(2), u(3), u(4), u(5), u(6)});
        break;
    case GpuEntry::SwapHelper:
        stream_.SelectBackbuffer(memory, u(0), u(1));
        return stream_.Drain();
    default: break;
    }
    return std::nullopt;
}
}
