#pragma once
// The window's presenter for the translation renderer.
//
// In translate mode the SDK keeps providing the guest GPU services -- the ring
// buffer, the read pointer writeback, fences, interrupts, shader storage -- but
// it must not paint the window: the pixels have to come from our translator.
// The window asks the graphics system for a presenter and hands that presenter a
// surface, so this class is the only owner of a swapchain on the game window and
// it presents the frame the translator rendered for the guest's last swap.
//
// The SDK's own Xenos presenter stays internal to its graphics system in this
// mode: its command processor refreshes it, it is never connected to a surface,
// and therefore it never presents. That is what keeps one swapchain per HWND,
// which is what the platform requires.
#include <rex/ui/presenter.h>

#include <cstdint>
#include <functional>
#include <mutex>

// The translator's renderer and device lives at global scope
// (SonicGenerationsRecomp/gpu/vulkan_backend.h), and so must this declaration:
// inside the namespace it would declare a second, incomplete type and every call
// on it would fail to compile.
class VulkanBackend;

namespace sonic::rex_host {

class TranslatePresenter final : public rex::ui::Presenter {
public:
    TranslatePresenter(HostGpuLossCallback host_gpu_loss_callback);
    ~TranslatePresenter() override;

    // --- rex::ui::Presenter ------------------------------------------------
    rex::ui::Surface::TypeFlags GetSupportedSurfaceTypes() const override;
    bool CaptureGuestOutput(rex::ui::RawImage& image_out) override;

    // A translated frame is complete, on the guest thread. The base class owns
    // the mailbox and the paint cadence, so the notification goes through it:
    // with the guest-output paint mode the frame is presented right here, and
    // otherwise the UI thread is asked to paint. Returns whether the frame was
    // accepted.
    bool OnTranslatedFrame(uint32_t width, uint32_t height, uint32_t aspect_x, uint32_t aspect_y);

    struct Stats {
        uint64_t frames = 0;
        uint64_t presents = 0;
        uint64_t presentsWithoutFrame = 0;
        uint64_t presentsRefused = 0;
        uint64_t connects = 0;
        uint64_t unusableSurfaces = 0;
    };
    Stats GetStats() const;

    // The translator outlives the window's presenter and knows nothing about it
    // (it only reports frames through a plain callback), so the presenter
    // registers itself here for anything that needs the current one -- and clears
    // it when it is destroyed.
    static void SetCurrent(TranslatePresenter* presenter);
    static TranslatePresenter* Current();

protected:
    SurfacePaintConnectResult ConnectOrReconnectPaintingToSurfaceFromUIThread(
        rex::ui::Surface& surface, uint32_t surface_width, uint32_t surface_height,
        bool was_paintable, bool& is_vsync_implicit_out) override;
    void DisconnectPaintingFromSurfaceFromUIThreadImpl() override;
    bool RefreshGuestOutputImpl(uint32_t mailbox_index, uint32_t frontbuffer_width,
                                uint32_t frontbuffer_height,
                                std::function<bool(GuestOutputRefreshContext& context)> refresher,
                                bool& is_8bpc_out_ref) override;
    PaintResult PaintAndPresentImpl(bool execute_ui_drawers) override;

private:
    // The translator's report, installed as a plain function pointer so the
    // translator needs no SDK types and no pointer to this object.
    static bool OnFrameFromTranslator(void* user, uint32_t width, uint32_t height);

    // What the refresher has to say about a frame. The SDK's contract expects a
    // context because a presenter's frame normally travels through the mailbox as
    // an image; ours is already in the device's frame image, so the context
    // carries only the fact that the frame is complete -- which is exactly what
    // the paint flow needs to know.
    class FrameContext final : public GuestOutputRefreshContext {
    public:
        FrameContext() : GuestOutputRefreshContext(is_8bpc_) {}
        void SetFrameComplete() { frame_complete_ = true; }
        bool frame_complete() const { return frame_complete_; }
        bool is_8bpc() const { return is_8bpc_; }

    private:
        bool frame_complete_ = false;
        bool is_8bpc_ = false;
    };

    // The backend is looked up per call rather than held: the translator owns it
    // and frees it on shutdown, which may happen while the window still exists,
    // and a dangling reference must not be reachable from a paint.
    VulkanBackend* Backend() const;
    // One lock for the whole object: the guest thread refreshes frames and the UI
    // thread presents them, and the counters are read from both.
    mutable std::mutex mutex_;
    bool connected_ = false;
    uint32_t surfaceWidth_ = 0, surfaceHeight_ = 0;
    Stats stats_{};
    bool surfaceTypeRefusedLogged_ = false;
};

}  // namespace sonic::rex_host
