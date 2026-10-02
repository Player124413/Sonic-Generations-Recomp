#pragma once
// Our Vulkan presenter.
//
// It is the piece the SDK's `IGraphicsSystem` requires so the host can put a
// window on screen: a provider, a presenter and a surface connection. All of it
// is ours -- the swapchain, the letterbox, the blit, the readback -- and it
// shares one VkDevice with the renderer, because the guest's frame is rendered
// into the image the presenter paints from.
//
// What happens per frame:
//   guest swap token -> our command processor -> OnGuestFrame(front buffer)
//   -> refresh: the frame source reads the guest front buffer into a staging
//      buffer, which is copied into the mailbox image the SDK's presenter
//      contract hands us;
//   -> paint: black clear + letterboxed blit into the swapchain image, present.
//
// Until the renderer resolves EDRAM into the front buffer, guest memory at that
// address holds whatever the game's own writes left there, and the presenter
// shows exactly that instead of inventing a picture.
#include "gpu_native/render_state.h"

#include <rex/ui/graphics_provider.h>
#include <rex/ui/presenter.h>

#include <array>
#include <cstddef>
#include <cstdint>
#include <memory>
#include <mutex>
#include <span>
#include <string>
#include <vector>

#include "native_vulkan_core.h"
#include "presenter_logic.h"

namespace sonic::rex_host::gpu {

/// The pixels of the guest's current frame, in host memory. Implemented by the
/// plugin against guest memory; kept separate so the presenter holds no guest
/// pointers and the readback can later be replaced by the renderer's own
/// resources.
class GuestFrameSource {
public:
    virtual ~GuestFrameSource() = default;
    /// Reads the front buffer at `physicalAddress` (8_8_8_8, tightly packed,
    /// `width` x `height`) into `destination`, which is exactly width*height*4
    /// bytes. Returns false when the guest has nothing usable there (unsupported
    /// format, unmapped memory).
    virtual bool ReadFrontbuffer(uint32_t physicalAddress, uint32_t width, uint32_t height,
                                 std::span<uint8_t> destination) = 0;
};

class NativePresenter;

class NativeGraphicsProvider final : public rex::ui::GraphicsProvider {
public:
    explicit NativeGraphicsProvider(std::shared_ptr<vk::Core> core) : core_(std::move(core)) {}
    std::unique_ptr<rex::ui::Presenter> CreatePresenter(
        rex::ui::Presenter::HostGpuLossCallback host_gpu_loss_callback) override;
    /// No immediate drawer yet: the SDK's overlays (console, settings menu) are
    /// not drawn in native mode, and returning null is the documented way to say
    /// so. The guest's own frame does not depend on it.
    std::unique_ptr<rex::ui::ImmediateDrawer> CreateImmediateDrawer() override { return nullptr; }

private:
    std::shared_ptr<vk::Core> core_;
};

class NativePresenter final : public rex::ui::Presenter {
    // The device and the command pool are created on demand: the presenter is
    // constructed before the window exists, and a Vulkan call with a null device
    // crashes inside the loader instead of returning an error.
public:
    explicit NativePresenter(std::shared_ptr<vk::Core> core,
                             HostGpuLossCallback host_gpu_loss_callback);
    ~NativePresenter() override;

    /// The guest swapped a frame: remember where it is and refresh the guest
    /// output, which paints and presents when the SDK's paint mode allows the
    /// guest output thread to present directly. Returns whether a frame was
    /// accepted.
    bool OnGuestFrame(uint32_t frontbufferAddress, uint32_t width, uint32_t height,
                      uint32_t displayAspectX, uint32_t displayAspectY);
    void SetFrameSource(GuestFrameSource* source) { frameSource_ = source; }
    /// The decoded frame the renderer consumes at swap time. Null means "no
    /// renderer feed", which is only valid in the plug-in's own unit checks.
    void SetRenderState(gpu::RenderState* state) noexcept { renderState_ = state; }

    struct Stats {
        uint64_t refreshes = 0;
        uint64_t refreshesWithoutFrame = 0;
        uint64_t presents = 0;
        uint64_t presentsWithoutGuestOutput = 0;
        uint64_t presentsSkipped = 0;
        uint64_t swapchainRecreations = 0;
        uint64_t uploadsSkipped = 0;
        /// What the decoded frame contained. These are consumed by the renderer
        /// before the frame is closed: a frame whose draws are never taken is a
        /// frame the renderer never saw, and it is reported as such.
        uint64_t drawsSeen = 0;
        uint64_t verticesSeen = 0;
        uint64_t shaderUploadsSeen = 0;
        uint64_t drawsWithNoState = 0;
    };
    Stats GetStats() const;

    // --- rex::ui::Presenter -------------------------------------------------
    // Surface and RawImage live in rex::ui, not in Presenter, so they are
    // qualified: this class is in sonic::rex_host::gpu.
    rex::ui::Surface::TypeFlags GetSupportedSurfaceTypes() const override;
    bool CaptureGuestOutput(rex::ui::RawImage& image_out) override;

protected:
    SurfacePaintConnectResult ConnectOrReconnectPaintingToSurfaceFromUIThread(
        rex::ui::Surface& new_surface, uint32_t new_surface_width, uint32_t new_surface_height,
        bool was_paintable, bool& is_vsync_implicit_out) override;
    void DisconnectPaintingFromSurfaceFromUIThreadImpl() override;
    bool RefreshGuestOutputImpl(
        uint32_t mailbox_index, uint32_t frontbuffer_width, uint32_t frontbuffer_height,
        std::function<bool(GuestOutputRefreshContext& context)> refresher,
        bool& is_8bpc_out_ref) override;
    PaintResult PaintAndPresentImpl(bool execute_ui_drawers) override;

private:
    /// The refresh context the SDK hands to the refresher callback. It carries
    /// the image the frame must end up in; the layout is ours (GENERAL), so the
    /// only thing the refresher has to do is fill it.
    class RefreshContext;

    /// Brings the device and the command pool up if they are not there yet.
    /// Called with deviceMutex_ held, from the surface connection and from a
    /// refresh, because either can happen first.
    bool EnsureDevice();

    /// One mailbox image. The base presenter owns the mailbox semantics (which
    /// image is writable, ready, acquired); we own the image behind each slot.
    struct GuestOutputImage {
        vk::Image image;
        bool everRefreshed = false;
    };

    struct PendingFrame {
        uint32_t address = 0;
        uint32_t width = 0;
        uint32_t height = 0;
        uint32_t aspectX = 0;
        uint32_t aspectY = 0;
        bool valid = false;
        size_t uploadBytes() const { return size_t(width) * size_t(height) * 4u; }
    };

    /// (Re)creates the mailbox image for `index` if it does not exist or does
    /// not have the right size. Called with deviceMutex_ held.
    bool EnsureGuestOutputImage(uint32_t index, uint32_t width, uint32_t height);
    void DestroyGuestOutputImages();
    /// Fills the context's image with the pending guest frame. Called with
    /// deviceMutex_ held by RefreshGuestOutputImpl.
    bool UploadPendingFrame(RefreshContext& context);
    bool CreateSwapchain(rex::ui::Surface& surface, uint32_t surfaceWidth, uint32_t surfaceHeight,
                         std::string& error);
    void DestroySwapchain();
    /// Shared body of the two swapchain creation paths (fresh surface and
    /// reconnection to the same one).
    bool CreateSwapchainForSurface(VkSurfaceKHR surface, uint32_t surfaceWidth,
                                   uint32_t surfaceHeight, std::string& error);

    std::shared_ptr<vk::Core> core_;
    HostGpuLossCallback hostGpuLossCallback_;
    GuestFrameSource* frameSource_ = nullptr;
    gpu::RenderState* renderState_ = nullptr;

    mutable std::mutex deviceMutex_;  // serializes all device use: refresh and paint
    VkCommandPool commandPool_ = VK_NULL_HANDLE;
    /// One persistent command buffer for the paint path: it is rewound through
    /// its pool after the previous frame's fence is waited for, so present costs
    /// no allocation.
    VkCommandBuffer paintCommands_ = VK_NULL_HANDLE;
    vk::Buffer staging_{};

    std::array<GuestOutputImage, kGuestOutputMailboxSize> mailbox_{};

    VkSurfaceKHR surface_ = VK_NULL_HANDLE;
    VkSwapchainKHR swapchain_ = VK_NULL_HANDLE;
    VkRenderPass renderPass_ = VK_NULL_HANDLE;
    VkFormat swapchainFormat_ = VK_FORMAT_UNDEFINED;
    VkPresentModeKHR presentMode_ = VK_PRESENT_MODE_FIFO_KHR;
    PixelExtent swapchainExtent_{};
    std::vector<VkImage> swapchainImages_;
    std::vector<VkImageView> swapchainViews_;
    std::vector<VkFramebuffer> swapchainFramebuffers_;
    VkSemaphore imageAvailable_ = VK_NULL_HANDLE;
    VkSemaphore renderFinished_ = VK_NULL_HANDLE;
    VkFence frameFence_ = VK_NULL_HANDLE;
    bool frameFencePending_ = false;
    bool swapchainOutdated_ = false;

    PendingFrame pending_;
    /// Written from the command-processor worker (OnGuestFrame) and read from the
    /// UI thread (GetStats), always under deviceMutex_ -- one lock for the whole
    /// object is the only version of this that can be reasoned about.
    Stats stats_{};
};

}  // namespace sonic::rex_host::gpu
