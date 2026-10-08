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
// The session lock guards everything below it (counters, the bridge, the device
// in use). The backend publish lock guards only what other threads may look up
// while a frame is being captured: the backend pointer and the frame callback.
// They must stay separate -- the presenter's present path reaches
// GetNativeGpuBackend(), and it runs *inside* the frame notification, which the
// capture path invokes with the session lock held. One lock there would be a
// self-deadlock on the first presented frame.
std::mutex mutex;
std::mutex publishMutex;
std::atomic<bool> enabled{false};
NativeRenderMode renderMode = NativeRenderMode::Off;
PresentableFrameCallback presentableFrame = nullptr;
void* presentableFrameUser = nullptr;
std::unique_ptr<NativeGpuBridge> bridge;
// Owned forever once created: the window's presenter may hold the published
// pointer, so shutting down disables the backend instead of freeing it. A
// presenter that presents after shutdown then calls into a live object that
// reports "nothing to present", not into freed memory.
std::unique_ptr<VulkanBackend> backendOwner;
VulkanBackend* backend = nullptr;
std::filesystem::path directory;
uint64_t batches = 0, submitted = 0, rejected = 0, skipped = 0;
uint64_t replayMicros = 0, replayMaxMicros = 0;
// Presentation counters. In translate mode the interesting number is not how
// many frames were rendered but how many reached the window: a frame that was
// rendered and not shown is a frame the player never saw.
uint64_t presentableFrames = 0, notifiedFrames = 0, notifyRefused = 0, framesWithoutSurface = 0,
         framesWithoutPresenter = 0;
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
void InitializeNativeGpu(const std::filesystem::path& cacheDirectory, GraphicsMode graphicsMode) {
    const char* requested = std::getenv("SONIC_REX_NATIVE_RENDER");
    const bool offscreenRequested = requested && *requested && std::string_view(requested) != "off";
    NativeRenderMode mode = NativeRenderMode::Off;
    if (graphicsMode == GraphicsMode::Translate) {
        // In translate mode the translated frame is the visible one, so an
        // offscreen replay request would be a contradiction, not an addition.
        if (offscreenRequested)
            std::fputs("[native] SONIC_REX_NATIVE_RENDER is ignored in translate mode: "
                       "the translated frame is presented\n", stderr);
        mode = NativeRenderMode::Present;
    } else if (offscreenRequested) {
        // A typo in a diagnostic knob must not be able to kill a play session, so
        // the mode turns itself off with a message instead of failing the whole app.
        mode = NativeRenderMode::Offscreen;
    }
    if (mode == NativeRenderMode::Off) {
        if (offscreenRequested && std::string_view(requested) != "offscreen")
            std::fputs("[native] SONIC_REX_NATIVE_RENDER must be off or offscreen; "
                       "the translator stays off\n", stderr);
        return;
    }
    uint32_t stride = 1;
    bool readback = false;
    if (mode == NativeRenderMode::Offscreen) {
        try {
            const char* strideText = std::getenv("SONIC_REX_NATIVE_FRAME_STRIDE");
            stride = ParseNativeFrameStride(strideText ? strideText : "");
            const char* readbackText = std::getenv("SONIC_REX_NATIVE_READBACK");
            readback = ParseNativeReadback(readbackText ? readbackText : "");
        } catch (const std::invalid_argument& error) {
            std::fprintf(stderr, "[native] %s. Offscreen replay stays off; Xenos remains the renderer.\n", error.what());
            return;
        }
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
    if (!backendOwner) backendOwner = std::make_unique<VulkanBackend>(nullptr, false, true);
    {
        std::lock_guard publish(publishMutex);
        backend = backendOwner.get();
        // A previous session's presenter must not be notified by this one.
        presentableFrame = nullptr;
        presentableFrameUser = nullptr;
    }
    batches = submitted = rejected = skipped = 0;
    replayMicros = replayMaxMicros = 0; images = 0; initialized = false;
    presentableFrames = notifiedFrames = notifyRefused = framesWithoutSurface = framesWithoutPresenter = 0;
    frameStride = stride; readbackEnabled = readback;
    renderMode = mode;
    coverage = Coverage{};
    enabled.store(true, std::memory_order_release);
    if (mode == NativeRenderMode::Present) {
        // Everything the player needs to know about this mode, in the order it
        // becomes true: our renderer draws, the window's presenter shows it, and
        // the SDK keeps running the guest device underneath.
        std::fprintf(stderr,
            "[native] Translation renderer active (SONIC_REX_GRAPHICS_MODE=translate): the frame the "
            "player sees is drawn by our Vulkan translator and presented by our window presenter. "
            "The SDK still runs the guest GPU device services. Reports: %s\n",
            directory.string().c_str());
    } else {
        std::fprintf(stderr,
            "[native] Offscreen Sonic Vulkan replay enabled (every %u frame(s), readback %s); "
            "Xenos remains the visible reference. Every replayed frame is a second full render, "
            "so a larger stride costs less.\n",
            frameStride, readbackEnabled ? "on" : "off");
    }
}
void CaptureNativeGpu(GpuEntry entry, const CaptureArguments& args, uint8_t* base) noexcept {
    if (!enabled.load(std::memory_order_acquire)) return;
    HostFloatScope floatScope;
    try {
        std::lock_guard lock(mutex);
        if (!enabled.load(std::memory_order_relaxed)) return;
        // Lazy init on guest GPU thread; never invoke SDL or touch the SDK window.
        if (!initialized) {
            if (renderMode == NativeRenderMode::Present) {
                // The device is created with the window surface, so presenting is
                // decided by whether the window's presenter has handed us one
                // yet. Before that the frames are counted, not rendered: creating
                // a presentation-less device first would mean never being able to
                // show anything, because the surface belongs to the instance.
                uint32_t targetWidth = 0, targetHeight = 0;
                backendOwner->GetTargetSize(targetWidth, targetHeight);
                if (!backendOwner->HasPresentationSurface() || !targetWidth || !targetHeight) {
                    ++framesWithoutSurface;
                    return;
                }
                if (!backendOwner->Init(VideoMode{targetWidth, targetHeight}))
                    throw std::runtime_error(backendOwner->GetLastError());
            } else if (!backendOwner->Init(VideoMode{})) {
                throw std::runtime_error(backendOwner->GetLastError());
            }
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
        const auto result = backendOwner->SubmitGuestBatch(*batch);
        const bool success = result == GuestGpu::SubmissionResult::Submitted;
        if (success) ++submitted; else ++rejected;
        if (success && renderMode == NativeRenderMode::Present && backendOwner->HasPresentableFrame()) {
            // The guest's swap produced a frame. The window's presenter owns the
            // paint cadence (vsync, paint mode, surface state), so the frame is
            // handed to it instead of presenting here: with the guest-output
            // paint mode this presents on this thread, otherwise the UI thread
            // presents it on the next paint.
            ++presentableFrames;
            uint32_t frameWidth = 0, frameHeight = 0;
            backendOwner->GetPresentableFrameSize(frameWidth, frameHeight);
            PresentableFrameCallback notify = nullptr;
            void* notifyUser = nullptr;
            {
                // Taken under the publish lock and then released: the presenter's
                // present path looks the backend up under this same lock.
                std::lock_guard publish(publishMutex);
                notify = presentableFrame;
                notifyUser = presentableFrameUser;
            }
            if (notify) {
                if (notify(notifyUser, frameWidth, frameHeight))
                    ++notifiedFrames;
                else
                    ++notifyRefused;
            } else {
                // Normal for the first frames: the window exists before the
                // guest device does, but the presenter is created by the app.
                ++framesWithoutPresenter;
            }
        }
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
            const auto stats = backendOwner->GetHostStats();
            std::fprintf(stderr, "[native] batch=%llu result=%u draws=%zu submitted=%llu rejected=%llu vkDraws=%llu presents=%llu payload=%zu error=%s\n",
                (unsigned long long)batches, unsigned(result), batch->draws.size(),
                (unsigned long long)submitted, (unsigned long long)rejected,
                (unsigned long long)stats.indexedDraws, (unsigned long long)stats.presents,
                batch->payloadBytes, backendOwner->GetLastError().c_str());
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
            if (backendOwner->ReadDiagnosticFrame(rgba)) {
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
VulkanBackend* GetNativeGpuBackend() {
    std::lock_guard publish(publishMutex);
    return backend;
}

NativeRenderMode GetNativeRenderMode() { return renderMode; }

void SetPresentableFrameCallback(PresentableFrameCallback callback, void* user) {
    std::lock_guard publish(publishMutex);
    presentableFrame = callback;
    presentableFrameUser = user;
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
    if (renderMode == NativeRenderMode::Present) {
        // The window outlives this call, so stop publishing what the presenter
        // looks up: it then presents nothing instead of touching a released
        // device.
        {
            std::lock_guard publish(publishMutex);
            presentableFrame = nullptr;
            presentableFrameUser = nullptr;
            backend = nullptr;
        }
        std::fprintf(stderr,
            "[native] presentation: frame(s)=%llu presentable=%llu notified=%llu refused=%llu "
            "no_surface=%llu no_presenter=%llu\n",
            (unsigned long long)batches, (unsigned long long)presentableFrames,
            (unsigned long long)notifiedFrames, (unsigned long long)notifyRefused,
            (unsigned long long)framesWithoutSurface, (unsigned long long)framesWithoutPresenter);
    }
    // What the renderer did, at the end of the run, where a reader will look: the
    // refusal that fired most often is the next thing to fix.
    if (backendOwner) {
        const auto renderer = backendOwner->GetNativeRenderReport();
        if (renderer.framesRendered || renderer.Refusals()) {
            std::fprintf(stderr, "[native] renderer: frames=%llu refusals=%llu exact_color=%llu "
                "multisampled_color=%llu exact_depth=%llu\n",
                (unsigned long long)renderer.framesRendered, (unsigned long long)renderer.Refusals(),
                (unsigned long long)renderer.colorExact, (unsigned long long)renderer.colorMultisampled,
                (unsigned long long)renderer.depthExact);
            if (const auto top = renderer.RefusalsByCount(); !top.empty())
                std::fprintf(stderr, "[native] renderer: most refused: %llu x %s\n",
                    (unsigned long long)top.front().second, top.front().first.c_str());
        }
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
    if (backendOwner) backendOwner->Shutdown();
    bridge.reset(); initialized = false;
}

// Helpers stay in the anonymous namespace they were declared in: a definition
// outside it would satisfy the header but leave the internal declaration that the
// callers above resolve to undefined, which only the linker ever notices.
namespace {
void WriteCoverage() {
    std::ofstream file(directory / "coverage.txt", std::ios::trunc);
    file << coverage.Format();
    // The renderer's own numbers: which guest targets it drew exactly, which it
    // approximated (multisampling, formats it has no image for), and why it
    // refused the rest. Without this the report says how many draws failed and
    // never what to fix, which is how a blocked renderer stays blocked.
    if (backendOwner) file << backendOwner->GetNativeRenderReport().Format();
    if (!file) std::fputs("[native] Cannot write coverage.txt\n", stderr);
}

void WriteStatus() {
    WriteCoverage();
    const auto stats = backendOwner->GetHostStats();
    const auto renderer = backendOwner->GetNativeRenderReport();
    std::ofstream report(directory / "status.txt", std::ios::trunc);
    report << "mode=" << (renderMode == NativeRenderMode::Present ? "present"
                          : renderMode == NativeRenderMode::Offscreen ? "offscreen" : "off") << "\n"
           << "frames=" << batches << "\nreplayed=" << submitted << "\nskipped=" << skipped
           << "\nrejected=" << rejected << "\nstride=" << frameStride
           << "\nreadback=" << (readbackEnabled ? 1 : 0)
           << "\npresentable=" << presentableFrames << "\nnotified=" << notifiedFrames
           << "\nnotify_refused=" << notifyRefused
           << "\nframes_without_surface=" << framesWithoutSurface
           << "\nframes_without_presenter=" << framesWithoutPresenter
           << "\naverage_replay_ms=" << (submitted ? double(replayMicros) / 1000.0 / double(submitted) : 0.0)
           << "\nmax_replay_ms=" << double(replayMaxMicros) / 1000.0
           << "\nvulkan_draws=" << stats.indexedDraws
           // The one number that answers "did the player see anything": host
           // presents. Draws and rendered frames can be healthy while the window
           // stays black, so it belongs in the report, not only in a log line.
           << "\nrenderer_presents=" << stats.presents
           << "\nrenderer_frames=" << renderer.framesRendered
           << "\nrenderer_resolves=" << renderer.resolves
           << "\nrenderer_resolves_scaled=" << renderer.resolvesScaled
           << "\nrenderer_color_initialized=" << renderer.colorInitialized
           << "\nrenderer_depth_initialized=" << renderer.depthInitialized
           << "\nrenderer_refusals=" << renderer.Refusals()
           << "\nrenderer_color_multisampled=" << renderer.colorMultisampled
           << "\nrenderer_color_format_approximated=" << renderer.colorFormatApproximated
           << "\nrenderer_depth_multisampled=" << renderer.depthMultisampled
           << "\nrenderer_depth_format_approximated=" << renderer.depthFormatApproximated
           << (renderMode == NativeRenderMode::Present
                   ? "\nnote=the frame on screen is the one this renderer drew"
                   : "\nnote=every replayed frame is a second full render on top of Xenos")
           << "\nlast_error=" << backendOwner->GetLastError() << '\n';
    // Answer "why is nothing on screen" before it is asked: the most frequent
    // refusal is the next thing to fix.
    if (const auto top = renderer.RefusalsByCount(); !top.empty())
        report << "top_refusal=" << top.front().second << ' ' << top.front().first << '\n';
}
}  // namespace
}
