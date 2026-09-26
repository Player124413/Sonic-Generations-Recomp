#include "gpu_capture.h"
#include "guest_memory.h"
#ifdef SONIC_REX_NATIVE_RENDERER
#include "native_gpu.h"
#endif
#include <rex/hook.h>
#include <bit>
#include <atomic>
#include <cstdio>
#include <cstdlib>
#include <fstream>
#include <memory>
#include <mutex>
#include <string_view>
#ifndef WIN32_LEAN_AND_MEAN
#define WIN32_LEAN_AND_MEAN
#endif
#ifndef NOMINMAX
#define NOMINMAX
#endif
#include <windows.h>

namespace sonic::rex_host {
namespace {
std::mutex captureMutex;
std::ofstream captureFile;
std::unique_ptr<GpuCaptureWriter> captureWriter;
std::atomic<bool> captureEnabled{false};
}
void InitializeGpuCapture(const std::filesystem::path& cacheDirectory) {
    const char* value = std::getenv("SONIC_REX_GPU_CAPTURE");
    if (!value || std::string_view(value) != "1") return;
    std::lock_guard lock(captureMutex);
    if (captureWriter) return;
    std::filesystem::create_directories(cacheDirectory);
    captureFile.open(cacheDirectory / "gpu-capture.bin", std::ios::binary | std::ios::trunc);
    if (!captureFile) throw std::runtime_error("Cannot open assets/rex-cache/gpu-capture.bin");
    captureWriter = std::make_unique<GpuCaptureWriter>(captureFile);
    captureEnabled.store(true, std::memory_order_release);
}
void CaptureGpuEntry(GpuEntry entry, const CaptureArguments& args, uint8_t* base) noexcept {
    if (!captureEnabled.load(std::memory_order_acquire)) return;
    try {
        std::lock_guard lock(captureMutex);
        if (!captureEnabled.load(std::memory_order_relaxed)) return;
        const auto reader = [base](uint32_t address, std::span<uint8_t> destination) {
            return ReadGuestMemory(base, address, destination);
        };
        if (!captureWriter->Record(entry, args, reader) ||
            captureWriter->Count() == GpuCaptureWriter::MaxRecords)
            captureEnabled.store(false, std::memory_order_release);
    } catch (...) {
        captureEnabled.store(false, std::memory_order_release);
        std::fputs("[gpu-capture] Capture failed; reference GPU remains active.\n", stderr);
    }
}
}

namespace sonic::rex_host {
void ObserveGpuEntry(GpuEntry entry, const CaptureArguments& args, uint8_t* base) noexcept {
    CaptureGpuEntry(entry, args, base);
#ifdef SONIC_REX_NATIVE_RENDERER
    CaptureNativeGpu(entry, args, base);
#endif
}
}

// Strong public hooks override only generated weak aliases. Never replace the
// __imp__ bodies or suppress their GPU/fence/ring-buffer side effects.
#define SONIC_GPU_ENTRY(name, symbol) \
    REX_EXTERN(__imp__##symbol); \
    REX_HOOK_RAW(symbol) { \
        sonic::rex_host::ObserveGpuEntry(sonic::rex_host::GpuEntry::name, \
            {ctx.r3.u64, ctx.r4.u64, ctx.r5.u64, ctx.r6.u64, ctx.r7.u64, \
             ctx.r8.u64, ctx.r9.u64, ctx.r10.u64, std::bit_cast<uint64_t>(ctx.f1.f64)}, base); \
        __imp__##symbol(ctx, base); \
    }
#include "../../SonicGenerationsRecomp/gpu/guest_entries.inc"
#undef SONIC_GPU_ENTRY
