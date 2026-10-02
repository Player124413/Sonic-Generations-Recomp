#pragma once
// Our Vulkan device: instance, adapter, device, queue and the few resource
// helpers the presenter and (later) the renderer share.
//
// The renderer will draw into resources allocated here, and the presenter
// presents images allocated here, so there is exactly one device and one queue
// family in the plugin. Nothing in this file comes from the SDK.
#include <vulkan/vulkan.h>

#include <cstdint>
#include <string>
#include <vector>

#include "native_vulkan_api.h"

namespace sonic::rex_host::gpu::vk {

/// Owned resource with the device it must be destroyed with, so a helper can
/// never outlive its device silently.
struct Buffer {
    VkBuffer buffer = VK_NULL_HANDLE;
    VkDeviceMemory memory = VK_NULL_HANDLE;
    VkDeviceSize size = 0;
    void* mapped = nullptr;
};

struct Image {
    VkImage image = VK_NULL_HANDLE;
    VkDeviceMemory memory = VK_NULL_HANDLE;
    VkImageView view = VK_NULL_HANDLE;
    VkDeviceSize size = 0;
    uint32_t width = 0;
    uint32_t height = 0;
    VkFormat format = VK_FORMAT_UNDEFINED;
};

class Core {
public:
    Core() = default;
    Core(const Core&) = delete;
    Core& operator=(const Core&) = delete;
    ~Core();

    /// Loads Vulkan, creates the instance (with the extensions the platform's
    /// presentation needs) and picks an adapter. Returns false and fills `error`
    /// with a reason the log can show verbatim.
    bool Initialize(std::string& error);
    /// Creates the device and the queues. Separate from Initialize because the
    /// presenter only needs a device once it has a surface connection.
    bool CreateDevice(std::string& error);
    bool initialized() const noexcept { return device_ != VK_NULL_HANDLE; }
    void Shutdown() noexcept;

    Api& api() noexcept { return api_; }
    const Api& api() const noexcept { return api_; }
    VkInstance instance() const noexcept { return instance_; }
    VkPhysicalDevice physicalDevice() const noexcept { return physicalDevice_; }
    VkDevice device() const noexcept { return device_; }
    const VkPhysicalDeviceProperties& properties() const noexcept { return properties_; }
    const VkPhysicalDeviceMemoryProperties& memoryProperties() const noexcept {
        return memoryProperties_;
    }
    uint32_t graphicsQueueFamily() const noexcept { return graphicsQueueFamily_; }
    VkQueue graphicsQueue() const noexcept { return graphicsQueue_; }
    uint32_t presentQueueFamily() const noexcept { return presentQueueFamily_; }
    VkQueue presentQueue() const noexcept { return presentQueue_; }
    const std::string& adapterName() const noexcept { return adapterName_; }
    bool hasWin32SurfaceExtension() const noexcept { return hasWin32Surface_; }

    /// Whether a queue family can present to `surface`; the presenter needs this
    /// before it can create a swapchain for it.
    bool SupportsPresentation(VkSurfaceKHR surface, uint32_t queueFamily,
                              bool& supported) const noexcept;

    uint32_t FindMemoryType(uint32_t typeBits, VkMemoryPropertyFlags properties) const noexcept;

    bool CreateBuffer(VkDeviceSize size, VkBufferUsageFlags usage, VkMemoryPropertyFlags properties,
                      Buffer& buffer, std::string& error) const;
    void DestroyBuffer(Buffer& buffer) const noexcept;
    /// A 2D color image with a view, in VK_IMAGE_LAYOUT_UNDEFINED. The caller
    /// owns the layout; the presenter uses GENERAL for the guest output images.
    bool CreateImage(uint32_t width, uint32_t height, VkFormat format, VkImageUsageFlags usage,
                     Image& image, std::string& error) const;
    void DestroyImage(Image& image) const noexcept;

    bool CreateCommandPool(VkCommandPool& pool, std::string& error) const;
    /// Allocates and begins a one-time command buffer from `pool`.
    bool BeginCommands(VkCommandPool pool, VkCommandBuffer& commands, std::string& error) const;
    /// Begins recording into a command buffer that already exists (the paint path
    /// keeps one for the lifetime of a swapchain).
    bool BeginRecording(VkCommandBuffer commands, std::string& error) const;
    bool EndCommands(VkCommandBuffer commands, std::string& error) const;
    /// Submits and waits for completion, then frees nothing (the caller frees).
    bool SubmitAndWait(VkCommandBuffer commands, std::string& error) const;
    /// A barrier inside a command buffer, used when an image's contents are
    /// written by a copy and then read by a blit.
    void ImageBarrier(VkCommandBuffer commands, VkImage image, VkImageLayout oldLayout,
                      VkImageLayout newLayout, VkAccessFlags sourceAccess,
                      VkAccessFlags destinationAccess, VkPipelineStageFlags sourceStage,
                      VkPipelineStageFlags destinationStage) const noexcept;

private:
    bool ChooseAdapter(std::string& error);
    /// Refuses a device-level call when there is no device yet. The presenter is
    /// built before the device (the device needs the window's surface), so this
    /// is a normal state, not a programming error -- but calling into Vulkan with
    /// a null device is an access violation, not a failed call.
    bool DeviceRequired(std::string& error, const char* what) const;

    mutable Api api_;
    VkInstance instance_ = VK_NULL_HANDLE;
    VkPhysicalDevice physicalDevice_ = VK_NULL_HANDLE;
    VkDevice device_ = VK_NULL_HANDLE;
    VkPhysicalDeviceProperties properties_{};
    VkPhysicalDeviceMemoryProperties memoryProperties_{};
    uint32_t graphicsQueueFamily_ = 0;
    uint32_t presentQueueFamily_ = 0;
    VkQueue graphicsQueue_ = VK_NULL_HANDLE;
    VkQueue presentQueue_ = VK_NULL_HANDLE;
    std::string adapterName_;
    bool hasWin32Surface_ = false;
};

}  // namespace sonic::rex_host::gpu::vk
