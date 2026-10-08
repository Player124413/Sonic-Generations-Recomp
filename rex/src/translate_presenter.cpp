#include "translate_presenter.h"

#include "native_gpu.h"

#include <gpu/vulkan_backend.h>

#include <atomic>
#include <cstdarg>
#include <cstdio>
#include <string>
#include <vector>

#if defined(_WIN32)
// The Win32 surface carries the HWND and the instance the Vulkan surface is
// created from; nothing else about the window is needed here.
#include <rex/ui/surface_win.h>
#endif

namespace sonic::rex_host {
namespace {
// Read from the translator (guest thread) and written by the presenter's
// lifetime (UI thread): an atomic pointer keeps the lookup independent of the
// presenter's own lock, which the notification path must not need.
std::atomic<TranslatePresenter*> currentPresenter{nullptr};

void Log(const char* format, ...) {
    std::fputs("[translate] ", stderr);
    va_list arguments;
    va_start(arguments, format);
    std::vfprintf(stderr, format, arguments);
    va_end(arguments);
    std::fputc('\n', stderr);
}
}  // namespace

void TranslatePresenter::SetCurrent(TranslatePresenter* presenter) {
    currentPresenter.store(presenter, std::memory_order_release);
}

TranslatePresenter* TranslatePresenter::Current() {
    return currentPresenter.load(std::memory_order_acquire);
}

TranslatePresenter::TranslatePresenter(HostGpuLossCallback host_gpu_loss_callback)
    : Presenter(host_gpu_loss_callback) {
    // The base class needs its surface-independent state before anything is
    // drawn or connected, and a failure here means painting cannot work at all,
    // so it is not swallowed silently.
    if (!InitializeCommonSurfaceIndependent())
        Log("the presenter could not initialize its surface-independent state");
    SetCurrent(this);
    // The translator reports every completed frame here; it holds no pointer to
    // this object and no SDK types, so a frame that arrives after teardown is the
    // translator's business, not a dangling reference.
    SetPresentableFrameCallback(&TranslatePresenter::OnFrameFromTranslator, this);
    Log("presenter created; the window surface decides when frames can be shown");
}

TranslatePresenter::~TranslatePresenter() {
    // The translator outlives the window: stop handing it a presenter to notify.
    SetPresentableFrameCallback(nullptr, nullptr);
    SetCurrent(nullptr);
    const Stats stats = GetStats();
    Log("presenter gone: frames=%llu presents=%llu without_frame=%llu refused=%llu connects=%llu",
        (unsigned long long)stats.frames, (unsigned long long)stats.presents,
        (unsigned long long)stats.presentsWithoutFrame, (unsigned long long)stats.presentsRefused,
        (unsigned long long)stats.connects);
}

VulkanBackend* TranslatePresenter::Backend() const { return GetNativeGpuBackend(); }

bool TranslatePresenter::OnFrameFromTranslator(void* user, uint32_t width, uint32_t height) {
    // The guest frame's own aspect is the correct fallback: the display aspect
    // comes from the guest's video mode, which this path does not read yet.
    return static_cast<TranslatePresenter*>(user)->OnTranslatedFrame(width, height, width, height);
}

TranslatePresenter::Stats TranslatePresenter::GetStats() const {
    std::lock_guard lock(mutex_);
    return stats_;
}

rex::ui::Surface::TypeFlags TranslatePresenter::GetSupportedSurfaceTypes() const {
#if defined(_WIN32)
    // The window creates a Win32HwndSurface for us and our Vulkan surface is
    // built from its HWND; no other surface type can reach this swapchain.
    return rex::ui::Surface::kTypeFlag_Win32Hwnd;
#else
    return 0;
#endif
}

TranslatePresenter::SurfacePaintConnectResult
TranslatePresenter::ConnectOrReconnectPaintingToSurfaceFromUIThread(
    rex::ui::Surface& surface, uint32_t surface_width, uint32_t surface_height,
    bool was_paintable, bool& is_vsync_implicit_out) {
    (void)was_paintable;
#if defined(_WIN32)
    if (surface.GetType() != rex::ui::Surface::kTypeIndex_Win32Hwnd) {
        std::lock_guard lock(mutex_);
        ++stats_.unusableSurfaces;
        if (!surfaceTypeRefusedLogged_) {
            surfaceTypeRefusedLogged_ = true;
            Log("only a Win32 HWND surface can be presented to; this one is type %d",
                int(surface.GetType()));
        }
        return SurfacePaintConnectResult::kFailureSurfaceUnusable;
    }
    // A swapchain cannot be built for a surface without an area, and the base
    // class never calls this for a zero-area one; treat it as "try again later"
    // rather than as an unusable window.
    if (!surface_width || !surface_height) return SurfacePaintConnectResult::kFailure;

    VulkanBackend* backend = Backend();
    if (!backend) {
        // Without the translator there is nothing to present: refusing here is
        // what keeps the window from showing a stale or undefined image.
        Log("the translation renderer is not running; refusing the surface");
        return SurfacePaintConnectResult::kFailure;
    }
    const auto& win32_surface = static_cast<const rex::ui::Win32HwndSurface&>(surface);
    // The device is created with the surface, so this must be the first thing
    // that happens to the backend; the translator itself only starts rendering
    // once the window exists, which is why the order holds in practice.
    backend->SetWin32Surface(win32_surface.hwnd(), win32_surface.hinstance());
    backend->Resize(surface_width, surface_height);
    if (!backend->HasPresentationSurface()) {
        Log("the translator refused the surface: %s", backend->GetLastError().c_str());
        return SurfacePaintConnectResult::kFailure;
    }
    {
        std::lock_guard lock(mutex_);
        connected_ = true;
        surfaceWidth_ = surface_width;
        surfaceHeight_ = surface_height;
        ++stats_.connects;
    }
    // The host swapchain requests FIFO, so presenting throttles to the display.
    is_vsync_implicit_out = true;
    Log("painting connected: %ux%u HWND", surface_width, surface_height);
    return SurfacePaintConnectResult::kSuccess;
#else
    (void)surface; (void)surface_width; (void)surface_height; (void)is_vsync_implicit_out;
    return SurfacePaintConnectResult::kFailureSurfaceUnusable;
#endif
}

void TranslatePresenter::DisconnectPaintingFromSurfaceFromUIThreadImpl() {
    std::lock_guard lock(mutex_);
    connected_ = false;
    surfaceWidth_ = surfaceHeight_ = 0;
    Log("the window surface is gone; the translator keeps rendering into its own images");
}

bool TranslatePresenter::OnTranslatedFrame(uint32_t width, uint32_t height, uint32_t aspect_x,
                                           uint32_t aspect_y) {
    if (!width || !height) return false;
    // The frontbuffer size is what the paint flow positions and scales; the
    // display aspect ratio comes from the guest's video mode, and the frame's own
    // aspect is the correct fallback until that mode is read.
    if (!aspect_x || !aspect_y) {
        aspect_x = width;
        aspect_y = height;
    }
    return RefreshGuestOutput(width, height, aspect_x, aspect_y,
                              [this](GuestOutputRefreshContext& context) {
                                  static_cast<FrameContext&>(context).SetFrameComplete();
                                  return true;
                              });
}

bool TranslatePresenter::RefreshGuestOutputImpl(
    uint32_t mailbox_index, uint32_t frontbuffer_width, uint32_t frontbuffer_height,
    std::function<bool(GuestOutputRefreshContext& context)> refresher, bool& is_8bpc_out_ref) {
    // No mailbox image on purpose: the frame is the device's own image, so this
    // refresh has nothing to upload. The slot index is the SDK's bookkeeping.
    (void)mailbox_index;
    is_8bpc_out_ref = true;  // the guest output is 8_8_8_8
    FrameContext context;
    if (!refresher(context) || !context.frame_complete()) return false;
    std::lock_guard lock(mutex_);
    ++stats_.frames;
    if (!connected_) {
        // The frame is rendered and ready; there is simply no surface to show it
        // on, which is the normal state before the window connects.
        return false;
    }
    (void)frontbuffer_width;
    (void)frontbuffer_height;
    return true;
}

TranslatePresenter::PaintResult TranslatePresenter::PaintAndPresentImpl(bool execute_ui_drawers) {
    // Translate mode hands the app no graphics provider, so it creates no
    // immediate drawer and there is nothing to execute here. Claiming otherwise
    // would be a lie the frame cannot back up.
    (void)execute_ui_drawers;
    std::lock_guard lock(mutex_);
    if (!connected_) return PaintResult::kNotPresented;
    VulkanBackend* backend = Backend();
    if (!backend || !backend->HasPresentableFrame()) {
        // No renderer, or a repaint without a new frame: the previous frame was
        // already shown and there is nothing new to put on screen.
        ++stats_.presentsWithoutFrame;
        return PaintResult::kNotPresented;
    }
    const uint64_t before = backend->GetHostStats().presents;
    backend->Present();
    if (backend->GetHostStats().presents == before) {
        ++stats_.presentsRefused;
        return PaintResult::kNotPresented;
    }
    ++stats_.presents;
    return backend->SwapchainNeedsResize() ? PaintResult::kPresentedSuboptimal
                                           : PaintResult::kPresented;
}

bool TranslatePresenter::CaptureGuestOutput(rex::ui::RawImage& image_out) {
    // Read only a frame that was actually submitted; the backend refuses stale
    // contents, and so does this.
    VulkanBackend* backend = Backend();
    if (!backend) return false;
    std::vector<uint8_t> rgba;
    if (!backend->ReadDiagnosticFrame(rgba)) return false;
    uint32_t width = 0, height = 0;
    backend->GetPresentableFrameSize(width, height);
    if (!width || !height || rgba.size() != size_t(width) * size_t(height) * 4u) {
        Log("captured frame is %zu bytes, not %ux%u RGBX", rgba.size(), width, height);
        return false;
    }
    image_out.width = width;
    image_out.height = height;
    image_out.stride = size_t(width) * 4u;
    image_out.data = std::move(rgba);
    return true;
}

}  // namespace sonic::rex_host
