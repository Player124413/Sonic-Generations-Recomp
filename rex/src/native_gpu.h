#pragma once
#include "gpu_capture.h"
namespace sonic::rex_host {
void InitializeNativeGpu(const std::filesystem::path& cacheDirectory);
void CaptureNativeGpu(GpuEntry entry, const CaptureArguments& args, uint8_t* base) noexcept;
void ShutdownNativeGpu() noexcept;
}
