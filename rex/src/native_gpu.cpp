#include "native_gpu.h"
#include "native_gpu_bridge.h"
#include "guest_memory.h"
#include <gpu/vulkan_backend.h>
#include <atomic>
#include <cfenv>
#include <chrono>
#include <immintrin.h>
#include <cstdlib>
#include <cstdio>
#include <fstream>
#include <memory>
#include <mutex>
#include <string_view>

namespace sonic::rex_host {
namespace {
std::mutex mutex;
std::atomic<bool> enabled{false};
std::unique_ptr<NativeGpuBridge> bridge;
std::unique_ptr<VulkanBackend> backend;
std::filesystem::path directory;
uint64_t batches = 0, submitted = 0, rejected = 0;
unsigned images = 0;
bool initialized = false;
// Native conversion/driver work must not leak FP flags or rounding mode into
// the guest's live PPC execution on the same thread (including FTZ/DAZ).
struct HostFloatScope {
    std::fenv_t saved{};
    unsigned mxcsr = _mm_getcsr();
    HostFloatScope() { std::feholdexcept(&saved); std::fesetround(FE_TONEAREST); }
    ~HostFloatScope() { std::fesetenv(&saved); _mm_setcsr(mxcsr); }
};

void WriteBmp(const std::filesystem::path& path, uint32_t w, uint32_t h, std::span<const uint8_t> rgba) {
    if (!w || !h || uint64_t(w) * h * 4 != rgba.size() || rgba.size() > UINT32_MAX - 54)
        throw std::runtime_error("Native readback dimensions disagree with backbuffer");
    std::ofstream file(path, std::ios::binary | std::ios::trunc);
    auto put16 = [&](uint16_t v) { file.put(char(v)); file.put(char(v >> 8)); };
    auto put32 = [&](uint32_t v) { put16(uint16_t(v)); put16(uint16_t(v >> 16)); };
    put16(0x4D42); put32(uint32_t(rgba.size()) + 54); put32(0); put32(54);
    put32(40); put32(w); put32(uint32_t(-int64_t(h))); put16(1); put16(32);
    put32(0); put32(uint32_t(rgba.size())); put32(0); put32(0); put32(0); put32(0);
    for (size_t i = 0; i < rgba.size(); i += 4) {
        file.put(char(rgba[i + 2])); file.put(char(rgba[i + 1]));
        file.put(char(rgba[i])); file.put(char(rgba[i + 3]));
    }
    file.flush();
    if (!file) throw std::runtime_error("Cannot write native frame BMP");
}
}
void InitializeNativeGpu(const std::filesystem::path& cacheDirectory) {
    const char* requested = std::getenv("SONIC_REX_NATIVE_RENDER");
    if (!requested || !*requested || std::string_view(requested) == "off") return;
    if (std::string_view(requested) != "offscreen")
        throw std::invalid_argument("SONIC_REX_NATIVE_RENDER must be off or offscreen; native replacement is not enabled");
    std::lock_guard lock(mutex);
    if (enabled.load()) return;
    const auto run = std::chrono::system_clock::now().time_since_epoch().count();
    directory = cacheDirectory / "native" / ("run-" + std::to_string(run) + "-" + std::to_string(GetCurrentProcessId()));
    std::filesystem::create_directories(directory);
    std::ofstream latest(cacheDirectory / "native" / "latest-session.txt", std::ios::trunc);
    latest << directory.filename().string() << '\n';
    if (!latest) throw std::runtime_error("Cannot write native session marker");
    bridge = std::make_unique<NativeGpuBridge>();
    backend = std::make_unique<VulkanBackend>(nullptr, false, true);
    batches = submitted = rejected = 0; images = 0; initialized = false;
    enabled.store(true, std::memory_order_release);
    std::fputs("[native] Offscreen Sonic Vulkan replay enabled; Xenos remains the visible reference.\n", stderr);
}
void CaptureNativeGpu(GpuEntry entry, const CaptureArguments& args, uint8_t* base) noexcept {
    if (!enabled.load(std::memory_order_acquire)) return;
    HostFloatScope floatScope;
    try {
        std::lock_guard lock(mutex);
        if (!enabled.load(std::memory_order_relaxed)) return;
        // Lazy init on guest GPU thread; never invoke SDL or touch the SDK window.
        if (!initialized) {
            if (!backend->Init(VideoMode{})) throw std::runtime_error(backend->GetLastError());
            initialized = true;
        }
        auto batch = bridge->Capture(entry, args, {{}, ReadGuestMemory, base});
        if (!batch) return;
        ++batches;
        const auto result = backend->SubmitGuestBatch(*batch);
        const bool success = result == GuestGpu::SubmissionResult::Submitted;
        if (success) ++submitted; else ++rejected;
        if (batches <= 16 || batches % 60 == 0) {
            const auto stats = backend->GetHostStats();
            std::fprintf(stderr, "[native] batch=%llu result=%u draws=%zu submitted=%llu rejected=%llu vkDraws=%llu payload=%zu error=%s\n",
                (unsigned long long)batches, unsigned(result), batch->draws.size(),
                (unsigned long long)submitted, (unsigned long long)rejected,
                (unsigned long long)stats.indexedDraws, batch->payloadBytes, backend->GetLastError().c_str());
            for (size_t i = 0; !success && i < batch->draws.size() && i < 4; ++i) {
                const auto& d = batch->draws[i];
                std::fprintf(stderr, "[native] draw=%zu VS=%016llX/%u PS=%016llX/%u resources=%u\n", i,
                    (unsigned long long)d.vertexShader.hash, unsigned(d.vertexShader.status),
                    (unsigned long long)d.pixelShader.hash, unsigned(d.pixelShader.status), unsigned(d.resources.status));
            }
            std::ofstream report(directory / "status.txt", std::ios::trunc);
            report << "batches=" << batches << "\nsubmitted=" << submitted << "\nrejected=" << rejected
                   << "\nvulkan_draws=" << stats.indexedDraws << "\nlast_error=" << backend->GetLastError() << '\n';
        }
        // Bound diagnostics: at most eight actual Vulkan readbacks, not placeholders.
        if (success && images < 8 && (submitted == 1 || submitted % 60 == 0)) {
            std::vector<uint8_t> rgba;
            if (backend->ReadDiagnosticFrame(rgba)) {
                WriteBmp(directory / ("frame-" + std::to_string(submitted) + ".bmp"),
                    batch->backbuffer.width, batch->backbuffer.height, rgba);
                ++images;
            }
        }
    } catch (const std::exception& error) {
        enabled.store(false, std::memory_order_release);
        std::fprintf(stderr, "[native] Disabled after error: %s. Xenos stays active.\n", error.what());
    } catch (...) {
        enabled.store(false, std::memory_order_release);
        std::fputs("[native] Disabled after unexpected failure; Xenos stays active.\n", stderr);
    }
}
void ShutdownNativeGpu() noexcept {
    enabled.store(false, std::memory_order_release);
    std::lock_guard lock(mutex);
    backend.reset(); bridge.reset(); initialized = false;
}
}
