#pragma once
#include "gpu_capture.h"
#include <gpu/native_commands.h>
#include <optional>

namespace sonic::rex_host {
// CPU side of native replay. Original D3D calls still execute after this method.
// Returned batches own their resource bytes; they do not retain SDK pointers.
class NativeGpuBridge {
public:
    NativeGpuBridge() { stream_.Enable(true, true); }
    std::optional<GuestGpu::NativeBatch> Capture(GpuEntry entry, const CaptureArguments& args,
                                               GuestGpu::MemoryView memory);
private:
    GuestGpu::CommandStream stream_;
};
}
