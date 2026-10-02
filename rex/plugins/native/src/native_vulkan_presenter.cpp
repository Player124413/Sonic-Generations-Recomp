#include "native_vulkan_presenter.h"

#include <rex/ui/surface.h>
#include <rex/ui/surface_win.h>

#include <algorithm>
#include <cstring>

#include "native_log.h"

namespace sonic::rex_host::gpu {
namespace {

/// Shown when there is no guest frame to display: the window must be visibly
/// ours and must not look like a game frame that failed to draw.
constexpr float kNoFrameClear[4] = {0.035f, 0.055f, 0.16f, 1.0f};
constexpr float kLetterboxClear[4] = {0.0f, 0.0f, 0.0f, 1.0f};

VkImageSubresourceRange ColorRange() {
    VkImageSubresourceRange range{};
    range.aspectMask = VK_IMAGE_ASPECT_COLOR_BIT;
    range.baseMipLevel = 0;
    range.levelCount = 1;
    range.baseArrayLayer = 0;
    range.layerCount = 1;
    return range;
}

/// The swapchain format, preferring a plain UNORM target: the guest output is
/// UNORM and an sRGB swapchain format would silently apply a transfer function.
VkFormat ChooseSwapchainFormat(const std::vector<VkSurfaceFormatKHR>& formats) {
    const VkFormat preferred[] = {VK_FORMAT_B8G8R8A8_UNORM, VK_FORMAT_R8G8B8A8_UNORM,
                                  VK_FORMAT_B8G8R8A8_SRGB, VK_FORMAT_R8G8B8A8_SRGB};
    for (VkFormat candidate : preferred) {
        for (const VkSurfaceFormatKHR& format : formats) {
            if (format.format == candidate) return candidate;
        }
    }
    return formats.empty() ? VK_FORMAT_B8G8R8A8_UNORM : formats.front().format;
}

/// A present mode that does not stall the guest output thread: that thread also
/// answers the guest's read pointer, so waiting for vertical blank there would
/// pace the whole game.
VkPresentModeKHR ChoosePresentMode(const std::vector<VkPresentModeKHR>& modes) {
    const VkPresentModeKHR preferred[] = {VK_PRESENT_MODE_MAILBOX_KHR,
                                          VK_PRESENT_MODE_IMMEDIATE_KHR,
                                          VK_PRESENT_MODE_FIFO_RELAXED_KHR,
                                          VK_PRESENT_MODE_FIFO_KHR};
    for (VkPresentModeKHR candidate : preferred) {
        for (VkPresentModeKHR mode : modes) {
            if (mode == candidate) return mode;
        }
    }
    return VK_PRESENT_MODE_FIFO_KHR;
}

const char* PresentModeName(VkPresentModeKHR mode) {
    switch (mode) {
    case VK_PRESENT_MODE_MAILBOX_KHR: return "mailbox";
    case VK_PRESENT_MODE_IMMEDIATE_KHR: return "immediate";
    case VK_PRESENT_MODE_FIFO_RELAXED_KHR: return "fifo_relaxed";
    case VK_PRESENT_MODE_FIFO_KHR: return "fifo";
    default: return "other";
    }
}

const char* FormatName(VkFormat format) {
    switch (format) {
    case VK_FORMAT_B8G8R8A8_UNORM: return "B8G8R8A8_UNORM";
    case VK_FORMAT_R8G8B8A8_UNORM: return "R8G8B8A8_UNORM";
    case VK_FORMAT_B8G8R8A8_SRGB: return "B8G8R8A8_SRGB";
    case VK_FORMAT_R8G8B8A8_SRGB: return "R8G8B8A8_SRGB";
    default: return "other";
    }
}

}  // namespace

/// The context the SDK's refresh callback receives. The image layout is ours
/// (GENERAL) and stays that way for the whole mailbox lifetime, so a refresher
/// only has to fill the image.
class NativePresenter::RefreshContext final : public GuestOutputRefreshContext {
public:
    RefreshContext(VkImage image, uint32_t width, uint32_t height)
        : GuestOutputRefreshContext(is_8bpc_), image_(image), width_(width), height_(height) {}

    VkImage image() const { return image_; }
    uint32_t width() const { return width_; }
    uint32_t height() const { return height_; }
    bool is_8bpc() const { return is_8bpc_; }

private:
    bool is_8bpc_ = false;
    VkImage image_ = VK_NULL_HANDLE;
    uint32_t width_ = 0;
    uint32_t height_ = 0;
};

std::unique_ptr<rex::ui::Presenter> NativeGraphicsProvider::CreatePresenter(
    rex::ui::Presenter::HostGpuLossCallback host_gpu_loss_callback) {
    return std::make_unique<NativePresenter>(core_, host_gpu_loss_callback);
}

NativePresenter::NativePresenter(std::shared_ptr<vk::Core> core,
                                 HostGpuLossCallback host_gpu_loss_callback)
    : Presenter(host_gpu_loss_callback), core_(std::move(core)),
      hostGpuLossCallback_(std::move(host_gpu_loss_callback)) {
    // The base class needs this before anything is drawn or connected.
    if (!InitializeCommonSurfaceIndependent()) {
        Log("the presenter could not initialize its common surface-independent state");
    }
    std::string error;
    if (!core_->CreateCommandPool(commandPool_, error)) Log("command pool: %s", error.c_str());
}

NativePresenter::~NativePresenter() {
    DestroySwapchain();
    // Everything else the device owns must be idle before its resources go away.
    if (core_ && core_->device() != VK_NULL_HANDLE) core_->api().DeviceWaitIdle(core_->device());
    DestroyGuestOutputImages();
    if (core_ && core_->device() != VK_NULL_HANDLE) {
        vk::Core& core = *core_;
        if (paintCommands_ && commandPool_)
            core.api().FreeCommandBuffers(core.device(), commandPool_, 1, &paintCommands_);
        if (commandPool_) core.api().DestroyCommandPool(core.device(), commandPool_, nullptr);
        if (imageAvailable_) core.api().DestroySemaphore(core.device(), imageAvailable_, nullptr);
        if (renderFinished_) core.api().DestroySemaphore(core.device(), renderFinished_, nullptr);
        if (frameFence_) core.api().DestroyFence(core.device(), frameFence_, nullptr);
        core.DestroyBuffer(staging_);
    }
}

NativePresenter::Stats NativePresenter::GetStats() const {
    std::lock_guard<std::mutex> lock(deviceMutex_);
    return stats_;
}

rex::ui::Surface::TypeFlags NativePresenter::GetSupportedSurfaceTypes() const {
    rex::ui::Surface::TypeFlags types = 0;
#if defined(VK_USE_PLATFORM_WIN32_KHR)
    if (core_ && core_->hasWin32SurfaceExtension()) types |= rex::ui::Surface::kTypeFlag_Win32Hwnd;
#endif
    return types;
}

bool NativePresenter::EnsureGuestOutputImage(uint32_t index, uint32_t width, uint32_t height) {
    if (index >= mailbox_.size()) return false;
    GuestOutputImage& slot = mailbox_[index];
    if (slot.image.image && slot.image.width == width && slot.image.height == height) return true;
    if (slot.image.image) {
        // The previous image may still be in flight; the caller holds
        // deviceMutex_, so waiting for the device is the honest way to know
        // nothing references it anymore.
        core_->api().DeviceWaitIdle(core_->device());
        core_->DestroyImage(slot.image);
        slot.everRefreshed = false;
    }
    std::string error;
    if (!core_->CreateImage(width, height, VK_FORMAT_R8G8B8A8_UNORM,
                            VK_IMAGE_USAGE_TRANSFER_DST_BIT | VK_IMAGE_USAGE_TRANSFER_SRC_BIT |
                                VK_IMAGE_USAGE_SAMPLED_BIT,
                            slot.image, error)) {
        Log("guest output image %ux%u: %s", width, height, error.c_str());
        return false;
    }
    // The image is created in UNDEFINED and every write is a transfer; putting
    // it in GENERAL now means the copy and the blit never need a layout change
    // that depends on the previous frame.
    VkCommandBuffer commands = VK_NULL_HANDLE;
    if (core_->BeginCommands(commandPool_, commands, error)) {
        core_->ImageBarrier(commands, slot.image.image, VK_IMAGE_LAYOUT_UNDEFINED,
                            VK_IMAGE_LAYOUT_GENERAL, 0, VK_ACCESS_TRANSFER_WRITE_BIT,
                            VK_PIPELINE_STAGE_TOP_OF_PIPE_BIT, VK_PIPELINE_STAGE_TRANSFER_BIT);
        if (core_->EndCommands(commands, error)) core_->SubmitAndWait(commands, error);
        core_->api().FreeCommandBuffers(core_->device(), commandPool_, 1, &commands);
    }
    return slot.image.image != VK_NULL_HANDLE;
}

void NativePresenter::DestroyGuestOutputImages() {
    for (GuestOutputImage& slot : mailbox_) {
        if (slot.image.image) core_->DestroyImage(slot.image);
        slot.everRefreshed = false;
    }
}

bool NativePresenter::CreateSwapchainForSurface(VkSurfaceKHR surface, uint32_t surfaceWidth,
                                               uint32_t surfaceHeight, std::string& error) {
    vk::Api& api = core_->api();
    const VkPhysicalDevice physical = core_->physicalDevice();
    const VkDevice device = core_->device();

    VkSurfaceCapabilitiesKHR capabilities{};
    if (api.GetPhysicalDeviceSurfaceCapabilitiesKHR(physical, surface, &capabilities) != VK_SUCCESS) {
        error = "vkGetPhysicalDeviceSurfaceCapabilitiesKHR failed";
        return false;
    }
    uint32_t formatCount = 0;
    api.GetPhysicalDeviceSurfaceFormatsKHR(physical, surface, &formatCount, nullptr);
    std::vector<VkSurfaceFormatKHR> formats(formatCount);
    if (formatCount) {
        api.GetPhysicalDeviceSurfaceFormatsKHR(physical, surface, &formatCount, formats.data());
        formats.resize(formatCount);
    }
    uint32_t modeCount = 0;
    api.GetPhysicalDeviceSurfacePresentModesKHR(physical, surface, &modeCount, nullptr);
    std::vector<VkPresentModeKHR> modes(modeCount);
    if (modeCount) {
        api.GetPhysicalDeviceSurfacePresentModesKHR(physical, surface, &modeCount, modes.data());
        modes.resize(modeCount);
    }
    if (formats.empty()) {
        error = "the surface reports no format";
        return false;
    }

    const VkFormat format = ChooseSwapchainFormat(formats);
    const VkPresentModeKHR presentMode = ChoosePresentMode(modes);
    const PixelExtent extent = ChooseSwapchainExtent(
        capabilities.currentExtent.width, capabilities.currentExtent.height,
        capabilities.minImageExtent.width, capabilities.minImageExtent.height,
        capabilities.maxImageExtent.width, capabilities.maxImageExtent.height, surfaceWidth,
        surfaceHeight);
    if (!extent.width || !extent.height) {
        error = "the surface has no area";
        return false;
    }
    const uint32_t imageCount =
        ChooseSwapchainImageCount(capabilities.minImageCount, capabilities.maxImageCount, 3);

    VkSwapchainCreateInfoKHR create_info{};
    create_info.sType = VK_STRUCTURE_TYPE_SWAPCHAIN_CREATE_INFO_KHR;
    create_info.surface = surface;
    create_info.minImageCount = imageCount;
    create_info.imageFormat = format;
    create_info.imageColorSpace = formats.front().colorSpace;
    create_info.imageExtent = {extent.width, extent.height};
    create_info.imageArrayLayers = 1;
    // TRANSFER_DST is what the paint path needs: it blits the guest output into
    // the acquired image.
    create_info.imageUsage = VK_IMAGE_USAGE_TRANSFER_DST_BIT | VK_IMAGE_USAGE_COLOR_ATTACHMENT_BIT;
    create_info.imageSharingMode = VK_SHARING_MODE_EXCLUSIVE;
    create_info.preTransform = capabilities.currentTransform;
    create_info.compositeAlpha = VK_COMPOSITE_ALPHA_OPAQUE_BIT_KHR;
    create_info.presentMode = presentMode;
    create_info.clipped = VK_TRUE;
    create_info.oldSwapchain = VK_NULL_HANDLE;

    VkSwapchainKHR swapchain = VK_NULL_HANDLE;
    const VkResult created = api.CreateSwapchainKHR(device, &create_info, nullptr, &swapchain);
    if (created != VK_SUCCESS) {
        error = "vkCreateSwapchainKHR failed";
        return false;
    }

    // Render pass: the acquired image is the attachment, cleared by the paint
    // command, and left in PRESENT_SRC for the presentation engine.
    VkAttachmentDescription attachment{};
    attachment.format = format;
    attachment.samples = VK_SAMPLE_COUNT_1_BIT;
    attachment.loadOp = VK_ATTACHMENT_LOAD_OP_CLEAR;
    attachment.storeOp = VK_ATTACHMENT_STORE_OP_STORE;
    attachment.stencilLoadOp = VK_ATTACHMENT_LOAD_OP_DONT_CARE;
    attachment.stencilStoreOp = VK_ATTACHMENT_STORE_OP_DONT_CARE;
    attachment.initialLayout = VK_IMAGE_LAYOUT_UNDEFINED;
    attachment.finalLayout = VK_IMAGE_LAYOUT_PRESENT_SRC_KHR;
    VkAttachmentReference color_attachment{};
    color_attachment.attachment = 0;
    color_attachment.layout = VK_IMAGE_LAYOUT_COLOR_ATTACHMENT_OPTIMAL;
    VkSubpassDescription subpass{};
    subpass.pipelineBindPoint = VK_PIPELINE_BIND_POINT_GRAPHICS;
    subpass.colorAttachmentCount = 1;
    subpass.pColorAttachments = &color_attachment;
    VkSubpassDependency dependencies[2]{};
    dependencies[0].srcSubpass = VK_SUBPASS_EXTERNAL;
    dependencies[0].dstSubpass = 0;
    dependencies[0].srcStageMask = VK_PIPELINE_STAGE_COLOR_ATTACHMENT_OUTPUT_BIT;
    dependencies[0].dstStageMask = VK_PIPELINE_STAGE_COLOR_ATTACHMENT_OUTPUT_BIT |
                                   VK_PIPELINE_STAGE_TRANSFER_BIT;
    dependencies[0].srcAccessMask = VK_ACCESS_MEMORY_READ_BIT;
    dependencies[0].dstAccessMask = VK_ACCESS_COLOR_ATTACHMENT_WRITE_BIT |
                                    VK_ACCESS_TRANSFER_WRITE_BIT;
    dependencies[1].srcSubpass = 0;
    dependencies[1].dstSubpass = VK_SUBPASS_EXTERNAL;
    dependencies[1].srcStageMask = VK_PIPELINE_STAGE_COLOR_ATTACHMENT_OUTPUT_BIT |
                                   VK_PIPELINE_STAGE_TRANSFER_BIT;
    dependencies[1].dstStageMask = VK_PIPELINE_STAGE_BOTTOM_OF_PIPE_BIT;
    dependencies[1].srcAccessMask = VK_ACCESS_TRANSFER_WRITE_BIT;
    dependencies[1].dstAccessMask = VK_ACCESS_MEMORY_READ_BIT;
    VkRenderPassCreateInfo render_pass_info{};
    render_pass_info.sType = VK_STRUCTURE_TYPE_RENDER_PASS_CREATE_INFO;
    render_pass_info.attachmentCount = 1;
    render_pass_info.pAttachments = &attachment;
    render_pass_info.subpassCount = 1;
    render_pass_info.pSubpasses = &subpass;
    render_pass_info.dependencyCount = 2;
    render_pass_info.pDependencies = dependencies;
    VkRenderPass render_pass = VK_NULL_HANDLE;
    if (api.CreateRenderPass(device, &render_pass_info, nullptr, &render_pass) != VK_SUCCESS) {
        api.DestroySwapchainKHR(device, swapchain, nullptr);
        error = "vkCreateRenderPass failed";
        return false;
    }

    uint32_t swapchainImageCount = 0;
    api.GetSwapchainImagesKHR(device, swapchain, &swapchainImageCount, nullptr);
    std::vector<VkImage> images(swapchainImageCount);
    if (swapchainImageCount) {
        if (api.GetSwapchainImagesKHR(device, swapchain, &swapchainImageCount, images.data()) !=
            VK_SUCCESS) {
            api.DestroyRenderPass(device, render_pass, nullptr);
            api.DestroySwapchainKHR(device, swapchain, nullptr);
            error = "vkGetSwapchainImagesKHR failed";
            return false;
        }
        images.resize(swapchainImageCount);
    }
    if (images.empty()) {
        api.DestroyRenderPass(device, render_pass, nullptr);
        api.DestroySwapchainKHR(device, swapchain, nullptr);
        error = "the swapchain has no images";
        return false;
    }

    std::vector<VkImageView> views;
    std::vector<VkFramebuffer> framebuffers;
    views.reserve(images.size());
    framebuffers.reserve(images.size());
    for (VkImage image : images) {
        VkImageViewCreateInfo view_info{};
        view_info.sType = VK_STRUCTURE_TYPE_IMAGE_VIEW_CREATE_INFO;
        view_info.image = image;
        view_info.viewType = VK_IMAGE_VIEW_TYPE_2D;
        view_info.format = format;
        view_info.subresourceRange = ColorRange();
        VkImageView view = VK_NULL_HANDLE;
        if (api.CreateImageView(device, &view_info, nullptr, &view) != VK_SUCCESS) {
            error = "vkCreateImageView failed for a swapchain image";
            break;
        }
        VkFramebufferCreateInfo framebuffer_info{};
        framebuffer_info.sType = VK_STRUCTURE_TYPE_FRAMEBUFFER_CREATE_INFO;
        framebuffer_info.renderPass = render_pass;
        framebuffer_info.attachmentCount = 1;
        framebuffer_info.pAttachments = &view;
        framebuffer_info.width = extent.width;
        framebuffer_info.height = extent.height;
        framebuffer_info.layers = 1;
        VkFramebuffer framebuffer = VK_NULL_HANDLE;
        if (api.CreateFramebuffer(device, &framebuffer_info, nullptr, &framebuffer) != VK_SUCCESS) {
            api.DestroyImageView(device, view, nullptr);
            error = "vkCreateFramebuffer failed";
            break;
        }
        views.push_back(view);
        framebuffers.push_back(framebuffer);
    }
    if (views.size() != images.size()) {
        for (VkFramebuffer framebuffer : framebuffers)
            api.DestroyFramebuffer(device, framebuffer, nullptr);
        for (VkImageView view : views) api.DestroyImageView(device, view, nullptr);
        api.DestroyRenderPass(device, render_pass, nullptr);
        api.DestroySwapchainKHR(device, swapchain, nullptr);
        return false;
    }

    // Only now the old objects can go: everything above may have failed.
    DestroySwapchain();
    surface_ = surface;
    swapchain_ = swapchain;
    renderPass_ = render_pass;
    swapchainFormat_ = format;
    presentMode_ = presentMode;
    swapchainExtent_ = extent;
    swapchainImages_ = std::move(images);
    swapchainViews_ = std::move(views);
    swapchainFramebuffers_ = std::move(framebuffers);
    swapchainOutdated_ = false;
    ++stats_.swapchainRecreations;
    Log("swapchain %ux%u, %u images, %s, %s", extent.width, extent.height,
        uint32_t(swapchainImages_.size()), FormatName(format), PresentModeName(presentMode));
    return true;
}

bool NativePresenter::CreateSwapchain(rex::ui::Surface& surface, uint32_t surfaceWidth,
                                     uint32_t surfaceHeight, std::string& error) {
    VkSurfaceKHR vulkanSurface = VK_NULL_HANDLE;
#if defined(VK_USE_PLATFORM_WIN32_KHR)
    if (surface.GetType() != rex::ui::Surface::kTypeIndex_Win32Hwnd) {
        error = "the presenter was given a surface type it cannot present to";
        return false;
    }
    const auto& win32_surface = static_cast<const rex::ui::Win32HwndSurface&>(surface);
    VkWin32SurfaceCreateInfoKHR create_info{};
    create_info.sType = VK_STRUCTURE_TYPE_WIN32_SURFACE_CREATE_INFO_KHR;
    create_info.hinstance = win32_surface.hinstance();
    create_info.hwnd = win32_surface.hwnd();
    if (core_->api().CreateWin32SurfaceKHR(core_->instance(), &create_info, nullptr,
                                           &vulkanSurface) != VK_SUCCESS) {
        error = "vkCreateWin32SurfaceKHR failed";
        return false;
    }
#else
    (void)surface;
    error = "the Vulkan presenter is a Windows build";
    return false;
#endif
    bool supported = false;
    if (!core_->SupportsPresentation(vulkanSurface, core_->presentQueueFamily(), supported) ||
        !supported) {
        core_->api().DestroySurfaceKHR(core_->instance(), vulkanSurface, nullptr);
        error = "the queue family cannot present to this window";
        return false;
    }
    if (!CreateSwapchainForSurface(vulkanSurface, surfaceWidth, surfaceHeight, error)) {
        core_->api().DestroySurfaceKHR(core_->instance(), vulkanSurface, nullptr);
        return false;
    }
    return true;
}

void NativePresenter::DestroySwapchain() {
    if (!core_ || core_->device() == VK_NULL_HANDLE) {
        surface_ = VK_NULL_HANDLE;
        return;
    }
    vk::Api& api = core_->api();
    const VkDevice device = core_->device();
    for (VkFramebuffer framebuffer : swapchainFramebuffers_)
        api.DestroyFramebuffer(device, framebuffer, nullptr);
    for (VkImageView view : swapchainViews_) api.DestroyImageView(device, view, nullptr);
    swapchainFramebuffers_.clear();
    swapchainViews_.clear();
    swapchainImages_.clear();
    if (renderPass_) {
        api.DestroyRenderPass(device, renderPass_, nullptr);
        renderPass_ = VK_NULL_HANDLE;
    }
    if (swapchain_) {
        api.DestroySwapchainKHR(device, swapchain_, nullptr);
        swapchain_ = VK_NULL_HANDLE;
    }
    if (surface_) {
        api.DestroySurfaceKHR(core_->instance(), surface_, nullptr);
        surface_ = VK_NULL_HANDLE;
    }
    swapchainExtent_ = {};
    swapchainFormat_ = VK_FORMAT_UNDEFINED;
}

NativePresenter::SurfacePaintConnectResult
NativePresenter::ConnectOrReconnectPaintingToSurfaceFromUIThread(
    rex::ui::Surface& new_surface, uint32_t new_surface_width, uint32_t new_surface_height,
    bool was_paintable, bool& is_vsync_implicit_out) {
    (void)was_paintable;
    std::lock_guard<std::mutex> lock(deviceMutex_);
    if (core_->device() == VK_NULL_HANDLE) {
        std::string error;
        if (!core_->CreateDevice(error)) {
            Log("cannot present: %s", error.c_str());
            return SurfacePaintConnectResult::kFailure;
        }
    }
    if (!commandPool_) {
        std::string error;
        if (!core_->CreateCommandPool(commandPool_, error)) {
            Log("cannot present: %s", error.c_str());
            return SurfacePaintConnectResult::kFailure;
        }
    }
    if (!paintCommands_) {
        std::string error;
        VkCommandBuffer commands = VK_NULL_HANDLE;
        if (!core_->BeginCommands(commandPool_, commands, error)) {
            Log("cannot present: %s", error.c_str());
            return SurfacePaintConnectResult::kFailure;
        }
        // BeginCommands already started recording; an empty buffer is valid and
        // finish it so the recording state matches what paint expects.
        core_->EndCommands(commands, error);
        paintCommands_ = commands;
    }
    if (!(GetSupportedSurfaceTypes() &
          (rex::ui::Surface::TypeFlags(1) << new_surface.GetType()))) {
        return SurfacePaintConnectResult::kFailureSurfaceUnusable;
    }
    // A swapchain can only be built for a surface that has an area; the base
    // class never calls this for a zero-area one.
    if (!new_surface_width || !new_surface_height) return SurfacePaintConnectResult::kFailure;

    std::string error;
    // Reconnection to the same surface: recreate in place, which is what a
    // resize or an outdated swapchain needs.
    if (surface_) {
        rex::ui::Surface::TypeFlags surface_types =
            rex::ui::Surface::TypeFlags(1) << new_surface.GetType();
        if (GetSupportedSurfaceTypes() & surface_types) {
            VkSurfaceKHR vulkanSurface = surface_;
            surface_ = VK_NULL_HANDLE;  // CreateSwapchainForSurface destroys the old swapchain
            if (CreateSwapchainForSurface(vulkanSurface, new_surface_width, new_surface_height,
                                          error)) {
                is_vsync_implicit_out = presentMode_ == VK_PRESENT_MODE_FIFO_KHR;
                return SurfacePaintConnectResult::kSuccess;
            }
            // Keep the surface: reconnection failed, retry later.
            surface_ = vulkanSurface;
            swapchain_ = VK_NULL_HANDLE;
            swapchainOutdated_ = true;
            Log("swapchain reconnection failed: %s", error.c_str());
            return SurfacePaintConnectResult::kFailure;
        }
        DestroySwapchain();
    }
    if (!CreateSwapchain(new_surface, new_surface_width, new_surface_height, error)) {
        Log("cannot present: %s", error.c_str());
        return SurfacePaintConnectResult::kFailure;
    }
    is_vsync_implicit_out = presentMode_ == VK_PRESENT_MODE_FIFO_KHR;
    return SurfacePaintConnectResult::kSuccess;
}

void NativePresenter::DisconnectPaintingFromSurfaceFromUIThreadImpl() {
    std::lock_guard<std::mutex> lock(deviceMutex_);
    if (core_ && core_->device() != VK_NULL_HANDLE) core_->api().DeviceWaitIdle(core_->device());
    DestroySwapchain();
    swapchainOutdated_ = false;
}

bool NativePresenter::OnGuestFrame(uint32_t frontbufferAddress, uint32_t width, uint32_t height,
                                   uint32_t displayAspectX, uint32_t displayAspectY) {
    // Consume what the device decoded before the frame is closed. Rasterising
    // needs pipelines and translated shaders, which this presenter does not have
    // yet, so the draws are taken and counted here rather than drawn: a frame
    // whose draws are never taken would be accounted as dropped work, and the
    // count is the contract the rasteriser has to satisfy.
    if (renderState_) {
        const gpu::FrameSummary& frame = renderState_->currentFrame();
        const std::vector<gpu::DrawCall> draws = renderState_->TakeDraws();
        const std::vector<gpu::ShaderProgram> uploads = renderState_->TakeShaderUploads();
        {
            std::lock_guard<std::mutex> lock(deviceMutex_);
            stats_.drawsSeen += draws.size();
            for (const gpu::DrawCall& draw : draws) stats_.verticesSeen += draw.numIndices;
            stats_.shaderUploadsSeen += uploads.size();
            if (!draws.empty() && frame.constantBlocks == 0) ++stats_.drawsWithNoState;
        }
    }
    if (!frontbufferAddress || !FrontbufferFits(width, height, kMaxFrontbufferBytes)) {
        Log("ignoring a swap token with an unusable frame %ux%u at %08X", width, height,
            frontbufferAddress);
        return false;
    }
    {
        std::lock_guard<std::mutex> lock(deviceMutex_);
        PendingFrame frame;
        frame.address = frontbufferAddress;
        frame.width = width;
        frame.height = height;
        frame.aspectX = displayAspectX;
        frame.aspectY = displayAspectY;
        frame.valid = true;
        pending_ = frame;
    }
    // The base class owns the mailbox and decides where the refresh runs; the
    // refresher only has to fill the image it is given.
    const bool refreshed = RefreshGuestOutput(
        width, height, displayAspectX, displayAspectY,
        [this](GuestOutputRefreshContext& context) {
            return UploadPendingFrame(static_cast<RefreshContext&>(context));
        });
    return refreshed;
}

bool NativePresenter::RefreshGuestOutputImpl(
    uint32_t mailbox_index, uint32_t frontbuffer_width, uint32_t frontbuffer_height,
    std::function<bool(GuestOutputRefreshContext& context)> refresher, bool& is_8bpc_out_ref) {
    is_8bpc_out_ref = true;  // the guest output is 8_8_8_8
    std::lock_guard<std::mutex> lock(deviceMutex_);
    if (!EnsureGuestOutputImage(mailbox_index, frontbuffer_width, frontbuffer_height)) {
        ++stats_.refreshesWithoutFrame;
        return false;
    }
    GuestOutputImage& slot = mailbox_[mailbox_index];
    RefreshContext context(slot.image.image, frontbuffer_width, frontbuffer_height);
    const bool succeeded = refresher(context);
    if (succeeded) {
        slot.everRefreshed = true;
        ++stats_.refreshes;
    }
    return succeeded;
}

bool NativePresenter::UploadPendingFrame(RefreshContext& context) {
    const PendingFrame frame = pending_;
    const uint32_t width = context.width();
    const uint32_t height = context.height();
    std::string error;
    VkCommandBuffer commands = VK_NULL_HANDLE;
    if (!core_->BeginCommands(commandPool_, commands, error)) {
        Log("refresh command buffer: %s", error.c_str());
        return false;
    }
    bool uploaded = false;
    // The frame must be the one this mailbox image is sized for: a token that
    // changed size mid-refresh would otherwise be copied into the wrong image.
    const bool frameMatches = frame.valid && frameSource_ && frame.width == width &&
                              frame.height == height &&
                              FrontbufferFits(frame.width, frame.height, kMaxFrontbufferBytes) &&
                              FrontbufferFits(width, height, kMaxFrontbufferBytes);
    if (!frameMatches && frame.valid && frameSource_) {
        Log("front buffer %ux%u does not match the %ux%u guest output image", frame.width,
            frame.height, width, height);
    }
    if (frameMatches) {
        if (!staging_.buffer || staging_.size < frame.uploadBytes()) {
            core_->DestroyBuffer(staging_);
            if (!core_->CreateBuffer(frame.uploadBytes(), VK_BUFFER_USAGE_TRANSFER_SRC_BIT,
                                     VK_MEMORY_PROPERTY_HOST_VISIBLE_BIT |
                                         VK_MEMORY_PROPERTY_HOST_COHERENT_BIT,
                                     staging_, error)) {
                Log("staging buffer: %s", error.c_str());
            }
        }
        if (staging_.buffer && staging_.mapped) {
            std::span<uint8_t> destination(static_cast<uint8_t*>(staging_.mapped),
                                           frame.uploadBytes());
            uploaded = frameSource_->ReadFrontbuffer(frame.address, frame.width, frame.height,
                                                     destination);
            if (uploaded) {
                VkBufferImageCopy copy{};
                copy.imageSubresource = {VK_IMAGE_ASPECT_COLOR_BIT, 0, 0, 1};
                copy.imageExtent = {width, height, 1};
                core_->api().CmdCopyBufferToImage(commands, staging_.buffer, context.image(),
                                                    VK_IMAGE_LAYOUT_GENERAL, 1, &copy);
                // Make the copy visible to the blit that reads the image later,
                // and keep it in GENERAL so the paint path needs no transition.
                core_->ImageBarrier(commands, context.image(), VK_IMAGE_LAYOUT_GENERAL,
                                    VK_IMAGE_LAYOUT_GENERAL, VK_ACCESS_TRANSFER_WRITE_BIT,
                                    VK_ACCESS_TRANSFER_READ_BIT | VK_ACCESS_SHADER_READ_BIT,
                                    VK_PIPELINE_STAGE_TRANSFER_BIT,
                                    VK_PIPELINE_STAGE_TRANSFER_BIT |
                                        VK_PIPELINE_STAGE_FRAGMENT_SHADER_BIT);
            }
        }
    }
    if (!uploaded) {
        // Nothing the guest can show (yet): a uniform colour still proves the
        // path end to end and cannot be mistaken for a rendered frame.
        ++stats_.uploadsSkipped;
        VkClearColorValue clear{};
        std::memcpy(clear.float32, kNoFrameClear, sizeof(kNoFrameClear));
        const VkImageSubresourceRange range = ColorRange();
        core_->api().CmdClearColorImage(commands, context.image(), VK_IMAGE_LAYOUT_GENERAL, &clear, 1,
                                        &range);
    }
    const bool recorded = core_->EndCommands(commands, error);
    const bool submitted = recorded && core_->SubmitAndWait(commands, error);
    core_->api().FreeCommandBuffers(core_->device(), commandPool_, 1, &commands);
    if (!submitted) {
        Log("refresh submit: %s", error.c_str());
        return false;
    }
    return true;
}

NativePresenter::PaintResult NativePresenter::PaintAndPresentImpl(bool execute_ui_drawers) {
    (void)execute_ui_drawers;  // the plugin has no UI drawers of its own
    vk::Api& api = core_->api();
    const VkDevice device = core_->device();
    std::lock_guard<std::mutex> lock(deviceMutex_);
    if (swapchain_ == VK_NULL_HANDLE || renderPass_ == VK_NULL_HANDLE || !paintCommands_) {
        ++stats_.presentsSkipped;
        return PaintResult::kNotPresentedConnectionOutdated;
    }
    if (swapchainOutdated_) {
        ++stats_.presentsSkipped;
        return PaintResult::kNotPresentedConnectionOutdated;
    }
    // One frame in flight: waiting for the fence here means every resource the
    // previous paint touched (including the acquired image) is free again.
    if (frameFencePending_) {
        const VkResult waited = api.WaitForFences(device, 1, &frameFence_, VK_TRUE, UINT64_MAX);
        frameFencePending_ = false;
        if (waited != VK_SUCCESS) {
            Log("waiting for the previous present failed (%d)", int32_t(waited));
            return PaintResult::kGpuLostResponsible;
        }
    }
    if (!imageAvailable_) {
        VkSemaphoreCreateInfo semaphore_info{};
        semaphore_info.sType = VK_STRUCTURE_TYPE_SEMAPHORE_CREATE_INFO;
        VkFenceCreateInfo fence_info{};
        fence_info.sType = VK_STRUCTURE_TYPE_FENCE_CREATE_INFO;
        if (api.CreateSemaphore(device, &semaphore_info, nullptr, &imageAvailable_) != VK_SUCCESS ||
            api.CreateSemaphore(device, &semaphore_info, nullptr, &renderFinished_) != VK_SUCCESS ||
            api.CreateFence(device, &fence_info, nullptr, &frameFence_) != VK_SUCCESS) {
            Log("cannot create the presentation synchronization objects");
            return PaintResult::kNotPresented;
        }
    }

    uint32_t imageIndex = 0;
    const VkResult acquired =
        api.AcquireNextImageKHR(device, swapchain_, UINT64_MAX, imageAvailable_, VK_NULL_HANDLE,
                                &imageIndex);
    if (acquired == VK_ERROR_OUT_OF_DATE_KHR || acquired == VK_ERROR_SURFACE_LOST_KHR) {
        swapchainOutdated_ = true;
        ++stats_.presentsSkipped;
        return PaintResult::kNotPresentedConnectionOutdated;
    }
    if (acquired != VK_SUCCESS && acquired != VK_SUBOPTIMAL_KHR) {
        if (acquired == VK_ERROR_DEVICE_LOST) return PaintResult::kGpuLostResponsible;
        ++stats_.presentsSkipped;
        return PaintResult::kNotPresented;
    }

    // Which guest output image to show, and with which geometry.
    uint32_t mailboxIndex = UINT32_MAX;
    GuestOutputProperties properties;
    GuestOutputPaintConfig paintConfig;
    {
        std::unique_lock<std::mutex> consume =
            ConsumeGuestOutput(mailboxIndex, &properties, &paintConfig);
    }
    const GuestOutputImage* guestOutput =
        HasGuestOutput(mailboxIndex, UINT32_MAX) && mailboxIndex < mailbox_.size() &&
                mailbox_[mailboxIndex].everRefreshed
            ? &mailbox_[mailboxIndex]
            : nullptr;
    if (!guestOutput) ++stats_.presentsWithoutGuestOutput;

    std::string error;
    if (api.ResetCommandPool(device, commandPool_, 0) != VK_SUCCESS) {
        ++stats_.presentsSkipped;
        return PaintResult::kNotPresented;
    }
    if (!core_->BeginRecording(paintCommands_, error)) {
        Log("paint command buffer: %s", error.c_str());
        ++stats_.presentsSkipped;
        return PaintResult::kNotPresented;
    }

    VkClearValue clear{};
    if (guestOutput) {
        std::memcpy(clear.color.float32, kLetterboxClear, sizeof(kLetterboxClear));
    } else {
        std::memcpy(clear.color.float32, kNoFrameClear, sizeof(kNoFrameClear));
    }
    VkRenderPassBeginInfo render_pass_begin{};
    render_pass_begin.sType = VK_STRUCTURE_TYPE_RENDER_PASS_BEGIN_INFO;
    render_pass_begin.renderPass = renderPass_;
    render_pass_begin.framebuffer = swapchainFramebuffers_[imageIndex];
    render_pass_begin.renderArea.extent = {swapchainExtent_.width, swapchainExtent_.height};
    render_pass_begin.clearValueCount = 1;
    render_pass_begin.pClearValues = &clear;
    api.CmdBeginRenderPass(paintCommands_, &render_pass_begin, VK_SUBPASS_CONTENTS_INLINE);

    if (guestOutput && properties.IsActive()) {
        const PixelRect rect = FitGuestOutputRect(
            properties.frontbuffer_width, properties.frontbuffer_height,
            properties.display_aspect_ratio_x, properties.display_aspect_ratio_y,
            swapchainExtent_.width, swapchainExtent_.height);
        if (rect.width && rect.height) {
            // The guest output is scaled to the letterboxed rectangle with a
            // bilinear blit; no sampler, no shader, no pipeline -- the paint is
            // a plain transfer, which is all the guest frame needs until the
            // renderer draws into the swapchain itself.
            VkImageBlit blit{};
            blit.srcSubresource = {VK_IMAGE_ASPECT_COLOR_BIT, 0, 0, 1};
            blit.srcOffsets[1] = {int32_t(properties.frontbuffer_width),
                                  int32_t(properties.frontbuffer_height), 1};
            blit.dstSubresource = {VK_IMAGE_ASPECT_COLOR_BIT, 0, 0, 1};
            blit.dstOffsets[0] = {rect.x, rect.y, 0};
            blit.dstOffsets[1] = {rect.x + int32_t(rect.width), rect.y + int32_t(rect.height), 1};
            api.CmdBlitImage(paintCommands_, guestOutput->image.image, VK_IMAGE_LAYOUT_GENERAL,
                             swapchainImages_[imageIndex], VK_IMAGE_LAYOUT_COLOR_ATTACHMENT_OPTIMAL,
                             1, &blit, VK_FILTER_LINEAR);
        }
    }
    api.CmdEndRenderPass(paintCommands_);
    if (!core_->EndCommands(paintCommands_, error)) {
        Log("paint command buffer end: %s", error.c_str());
        ++stats_.presentsSkipped;
        return PaintResult::kNotPresented;
    }

    VkPipelineStageFlags waitStage = VK_PIPELINE_STAGE_COLOR_ATTACHMENT_OUTPUT_BIT;
    VkSubmitInfo submit{};
    submit.sType = VK_STRUCTURE_TYPE_SUBMIT_INFO;
    submit.waitSemaphoreCount = 1;
    submit.pWaitSemaphores = &imageAvailable_;
    submit.pWaitDstStageMask = &waitStage;
    submit.commandBufferCount = 1;
    submit.pCommandBuffers = &paintCommands_;
    submit.signalSemaphoreCount = 1;
    submit.pSignalSemaphores = &renderFinished_;
    if (api.QueueSubmit(core_->graphicsQueue(), 1, &submit, frameFence_) != VK_SUCCESS) {
        Log("present submit failed");
        ++stats_.presentsSkipped;
        return PaintResult::kNotPresented;
    }
    frameFencePending_ = true;

    VkPresentInfoKHR present{};
    present.sType = VK_STRUCTURE_TYPE_PRESENT_INFO_KHR;
    present.waitSemaphoreCount = 1;
    present.pWaitSemaphores = &renderFinished_;
    present.swapchainCount = 1;
    present.pSwapchains = &swapchain_;
    present.pImageIndices = &imageIndex;
    const VkResult presented = api.QueuePresentKHR(core_->presentQueue(), &present);
    if (presented == VK_ERROR_OUT_OF_DATE_KHR || presented == VK_ERROR_SURFACE_LOST_KHR) {
        swapchainOutdated_ = true;
        ++stats_.presentsSkipped;
        return PaintResult::kNotPresentedConnectionOutdated;
    }
    if (presented == VK_SUBOPTIMAL_KHR) {
        swapchainOutdated_ = true;
        ++stats_.presents;
        return PaintResult::kPresentedSuboptimal;
    }
    if (presented != VK_SUCCESS) {
        Log("vkQueuePresentKHR failed (%d)", int32_t(presented));
        ++stats_.presentsSkipped;
        return PaintResult::kNotPresented;
    }
    ++stats_.presents;
    return PaintResult::kPresented;
}

bool NativePresenter::CaptureGuestOutput(rex::ui::RawImage& image_out) {
    vk::Api& api = core_->api();
    const VkDevice device = core_->device();
    std::lock_guard<std::mutex> lock(deviceMutex_);
    if (device == VK_NULL_HANDLE) return false;

    uint32_t mailboxIndex = UINT32_MAX;
    uint32_t width = 0;
    uint32_t height = 0;
    {
        GuestOutputProperties properties;
        std::unique_lock<std::mutex> consume =
            ConsumeGuestOutput(mailboxIndex, &properties, nullptr);
        if (!HasGuestOutput(mailboxIndex, UINT32_MAX) || mailboxIndex >= mailbox_.size() ||
            !mailbox_[mailboxIndex].everRefreshed || !properties.IsActive()) {
            return false;
        }
        width = properties.frontbuffer_width;
        height = properties.frontbuffer_height;
    }
    const GuestOutputImage& guestOutput = mailbox_[mailboxIndex];
    VkBuffer buffer = VK_NULL_HANDLE;
    VkDeviceMemory memory = VK_NULL_HANDLE;
    const VkDeviceSize size = VkDeviceSize(width) * height * 4u;
    std::string error;
    vk::Buffer readback;
    if (!core_->CreateBuffer(size, VK_BUFFER_USAGE_TRANSFER_DST_BIT,
                             VK_MEMORY_PROPERTY_HOST_VISIBLE_BIT |
                                 VK_MEMORY_PROPERTY_HOST_COHERENT_BIT,
                             readback, error)) {
        Log("capture buffer: %s", error.c_str());
        return false;
    }
    buffer = readback.buffer;
    memory = readback.memory;

    bool copied = false;
    VkCommandBuffer commands = VK_NULL_HANDLE;
    if (core_->BeginCommands(commandPool_, commands, error)) {
        VkBufferImageCopy region{};
        region.imageSubresource = {VK_IMAGE_ASPECT_COLOR_BIT, 0, 0, 1};
        region.imageExtent = {width, height, 1};
        api.CmdCopyImageToBuffer(commands, guestOutput.image.image, VK_IMAGE_LAYOUT_GENERAL, buffer,
                                 1, &region);
        copied = core_->EndCommands(commands, error) && core_->SubmitAndWait(commands, error);
        api.FreeCommandBuffers(device, commandPool_, 1, &commands);
    }
    if (copied && readback.mapped) {
        const uint8_t* source = static_cast<const uint8_t*>(readback.mapped);
        image_out.width = width;
        image_out.height = height;
        image_out.stride = size_t(width) * 4u;
        image_out.data.resize(size_t(width) * height * 4u);
        for (size_t pixel = 0; pixel < size_t(width) * height; ++pixel) {
            // The mailbox image is R8G8B8A8; RawImage is R8 G8 B8 X8.
            image_out.data[pixel * 4 + 0] = source[pixel * 4 + 0];
            image_out.data[pixel * 4 + 1] = source[pixel * 4 + 1];
            image_out.data[pixel * 4 + 2] = source[pixel * 4 + 2];
            image_out.data[pixel * 4 + 3] = 0xFF;
        }
    }
    core_->DestroyBuffer(readback);
    (void)memory;
    return copied;
}

}  // namespace sonic::rex_host::gpu
