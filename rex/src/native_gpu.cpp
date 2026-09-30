#include "native_gpu.h"
#include "native_gpu_bridge.h"
#include "native_coverage.h"
#include "guest_memory.h"
// Cost knobs live with the rest of the host policy; the parsers are inline there
// and must stay reachable from this translation unit (the game build compiles it
// on Windows, the contract build does not).
#include "host_policy.h"
#include <gpu/vulkan_backend.h>
#include <algorithm>
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
uint64_t batches = 0, submitted = 0, rejected = 0, skipped = 0;
uint64_t replayMicros = 0, replayMaxMicros = 0;
unsigned images = 0;
uint32_t frameStride = 1;
bool readbackEnabled = false;
bool initialized = false;
Coverage coverage;

void WriteStatus();
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
    // A typo in a diagnostic knob must not be able to kill a play session, so the
    // mode turns itself off with a message instead of failing the whole app.
    uint32_t stride = 1;
    bool readback = false;
    try {
        const char* strideText = std::getenv("SONIC_REX_NATIVE_FRAME_STRIDE");
        stride = ParseNativeFrameStride(strideText ? strideText : "");
        const char* readbackText = std::getenv("SONIC_REX_NATIVE_READBACK");
        readback = ParseNativeReadback(readbackText ? readbackText : "");
    } catch (const std::invalid_argument& error) {
        std::fprintf(stderr, "[native] %s. Offscreen replay stays off; Xenos remains the renderer.\n", error.what());
        return;
    }
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
    batches = submitted = rejected = skipped = 0;
    replayMicros = replayMaxMicros = 0; images = 0; initialized = false;
    frameStride = stride; readbackEnabled = readback;
    coverage = Coverage{};
    enabled.store(true, std::memory_order_release);
    std::fprintf(stderr,
        "[native] Offscreen Sonic Vulkan replay enabled (every %u frame(s), readback %s); "
        "Xenos remains the visible reference. Every replayed frame is a second full render, "
        "so a larger stride costs less.\n",
        frameStride, readbackEnabled ? "on" : "off");
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
        ++coverage.frames;
        // Sampling happens after the stream drained, so skipped frames release
        // their memory instead of piling up behind the replay.
        if (frameStride > 1 && (batches - 1) % frameStride != 0) return;
        // Nothing to render: do not open a submission, a fence wait or a readback.
        if (batch->draws.empty() && batch->clears.empty() && batch->resolves.empty()) {
            ++skipped;
            ++coverage.skippedFrames;
            return;
        }
        const auto started = std::chrono::steady_clock::now();
        const auto result = backend->SubmitGuestBatch(*batch);
        const bool success = result == GuestGpu::SubmissionResult::Submitted;
        if (success) ++submitted; else ++rejected;
        // Ledger for the Xenos-free decision: a resolved shader/resource pair
        // still refused by the backend means missing renderer features, not a
        // missing resource.
        for (const auto& draw : batch->draws) {
            coverage.Record(success ? DrawSupport::Supported
                : ClassifyDraw(draw.vertexShader.status == GuestGpu::ShaderReadStatus::Success,
                               draw.pixelShader.status == GuestGpu::ShaderReadStatus::Success,
                               draw.resources.captured));
        }
        coverage.clears += batch->clears.size();
        coverage.resolves += batch->resolves.size();
        coverage.submissions += success ? 1 : 0;
        const auto elapsed = std::chrono::duration_cast<std::chrono::microseconds>(
            std::chrono::steady_clock::now() - started).count();
        replayMicros += uint64_t(elapsed);
        replayMaxMicros = std::max(replayMaxMicros, uint64_t(elapsed));
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
            WriteStatus();
        }
        // Bound diagnostics: at most eight actual Vulkan readbacks, not placeholders,
        // and only when asked, because each one waits for the GPU.
        if (readbackEnabled && success && images < 8 && (submitted == 1 || submitted % 60 == 0)) {
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
    try {
        if (initialized) WriteStatus();
    } catch (...) {}

    // Coverage summary: the number that decides whether the native renderer can
    // replace Xenos yet.
    if (coverage.draws) {
        std::fprintf(stderr,
            "[native] coverage: draws=%llu supported=%llu (%.2f%%) vs_unresolved=%llu "
            "ps_unresolved=%llu resources=%llu backend=%llu\n",
            (unsigned long long)coverage.draws, (unsigned long long)coverage.Supported(),
            coverage.SupportedRatio() * 100.0,
            (unsigned long long)coverage.Reason(DrawSupport::VertexShaderUnresolved),
            (unsigned long long)coverage.Reason(DrawSupport::PixelShaderUnresolved),
            (unsigned long long)coverage.Reason(DrawSupport::ResourcesUnsupported),
            (unsigned long long)coverage.Reason(DrawSupport::BackendRefused));
    }
    // Final cost report: the number that decides whether this diagnostic can be
    // left on while playing.
    if (batches) {
        const double replayed = double(submitted ? submitted : 1);
        std::fprintf(stderr,
            "[native] frames=%llu replayed=%llu skipped=%llu rejected=%llu average=%.2fms max=%.2fms "
            "stride=%u\n",
            (unsigned long long)batches, (unsigned long long)submitted, (unsigned long long)skipped,
            (unsigned long long)rejected, double(replayMicros) / 1000.0 / replayed,
            double(replayMaxMicros) / 1000.0, frameStride);
    }
    backend.reset(); bridge.reset(); initialized = false;
}

// Helpers stay in the anonymous namespace they were declared in: a definition
// outside it would satisfy the header but leave the internal declaration that the
// callers above resolve to undefined, which only the linker ever notices.
namespace {
void WriteCoverage() {
    std::ofstream file(directory / "coverage.txt", std::ios::trunc);
    file << coverage.Format();
    if (!file) std::fputs("[native] Cannot write coverage.txt\n", stderr);
}

void WriteStatus() {
    WriteCoverage();
    const auto stats = backend->GetHostStats();
    std::ofstream report(directory / "status.txt", std::ios::trunc);
    report << "frames=" << batches << "\nreplayed=" << submitted << "\nskipped=" << skipped
           << "\nrejected=" << rejected << "\nstride=" << frameStride
           << "\nreadback=" << (readbackEnabled ? 1 : 0)
           << "\naverage_replay_ms=" << (submitted ? double(replayMicros) / 1000.0 / double(submitted) : 0.0)
           << "\nmax_replay_ms=" << double(replayMaxMicros) / 1000.0
           << "\nvulkan_draws=" << stats.indexedDraws
           << "\nnote=every replayed frame is a second full render on top of Xenos"
           << "\nlast_error=" << backend->GetLastError() << '\n';
}
}  // namespace
}
