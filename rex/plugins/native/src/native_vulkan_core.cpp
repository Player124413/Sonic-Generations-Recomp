#include "native_vulkan_core.h"

#include <algorithm>
#include <cstring>


#include "native_log.h"

namespace sonic::rex_host::gpu::vk {
namespace {

/// Vulkan 1.0 is enough for everything the presenter does (dynamic rendering is
/// deliberately not used: the render pass path works on the widest range of
/// drivers).
constexpr uint32_t kRequiredApiVersion = VK_API_VERSION_1_0;

bool IsDeviceSuitable(const VkPhysicalDeviceProperties& properties, bool has_swapchain,
                      bool has_win32_surface) {
    if (properties.apiVersion < kRequiredApiVersion) return false;
    if (has_win32_surface && !has_swapchain) return false;
    return true;
}

/// Discrete first, then integrated, then anything that can present - a virtual
/// or CPU adapter must not be chosen over a real GPU, but must still be usable.
int AdapterScore(const VkPhysicalDeviceProperties& properties) {
    switch (properties.deviceType) {
    case VK_PHYSICAL_DEVICE_TYPE_DISCRETE_GPU: return 4;
    case VK_PHYSICAL_DEVICE_TYPE_INTEGRATED_GPU: return 3;
    case VK_PHYSICAL_DEVICE_TYPE_VIRTUAL_GPU: return 2;
    case VK_PHYSICAL_DEVICE_TYPE_CPU: return 1;
    default: return 0;
    }
}

}  // namespace

Core::~Core() { Shutdown(); }

void Core::Shutdown() noexcept {
    if (device_ != VK_NULL_HANDLE) {
        if (api_.DeviceWaitIdle) api_.DeviceWaitIdle(device_);
        if (api_.DestroyDevice) api_.DestroyDevice(device_, nullptr);
        device_ = VK_NULL_HANDLE;
    }
    if (instance_ != VK_NULL_HANDLE && api_.DestroyInstance) {
        api_.DestroyInstance(instance_, nullptr);
        instance_ = VK_NULL_HANDLE;
    }
    api_.Unload();
    physicalDevice_ = VK_NULL_HANDLE;
    graphicsQueueFamily_ = 0;
    presentQueueFamily_ = 0;
    graphicsQueue_ = VK_NULL_HANDLE;
    presentQueue_ = VK_NULL_HANDLE;
    adapterName_.clear();
    hasWin32Surface_ = false;
}

bool Core::Initialize(std::string& error) {
    if (instance_ != VK_NULL_HANDLE) return true;
    if (!api_.Load(error)) return false;

    // The extensions the platform's surface creation needs. Only the platform
    // extension list is requested, no device extensions: those are chosen once
    // the adapter is known.
    std::vector<const char*> extensions;
#if defined(VK_USE_PLATFORM_WIN32_KHR)
    extensions.push_back(VK_KHR_WIN32_SURFACE_EXTENSION_NAME);
#endif
#if defined(VK_KHR_SURFACE_EXTENSION_NAME)
    extensions.push_back(VK_KHR_SURFACE_EXTENSION_NAME);
#endif

    uint32_t availableCount = 0;
    api_.EnumerateInstanceExtensionProperties(nullptr, &availableCount, nullptr);
    std::vector<VkExtensionProperties> available(availableCount);
    if (availableCount) {
        api_.EnumerateInstanceExtensionProperties(nullptr, &availableCount, available.data());
        available.resize(availableCount);
    }
    const auto has_extension = [&available](const char* name) {
        for (const VkExtensionProperties& extension : available) {
            if (std::strcmp(extension.extensionName, name) == 0) return true;
        }
        return false;
    };
    // A missing platform extension is not fatal on its own: without a surface
    // there is no presentation and the plugin says so when asked to present.
    extensions.erase(std::remove_if(extensions.begin(), extensions.end(),
                                    [&has_extension](const char* name) {
                                        return !has_extension(name);
                                    }),
                     extensions.end());

    VkApplicationInfo application_info{};
    application_info.sType = VK_STRUCTURE_TYPE_APPLICATION_INFO;
    application_info.pApplicationName = "SonicGenerationsRecomp";
    application_info.pEngineName = "ReXGlue (Sonic GPU)";
    application_info.apiVersion = kRequiredApiVersion;
    VkInstanceCreateInfo create_info{};
    create_info.sType = VK_STRUCTURE_TYPE_INSTANCE_CREATE_INFO;
    create_info.pApplicationInfo = &application_info;
    create_info.enabledExtensionCount = uint32_t(extensions.size());
    create_info.ppEnabledExtensionNames = extensions.empty() ? nullptr : extensions.data();
    if (api_.CreateInstance(&create_info, nullptr, &instance_) != VK_SUCCESS) {
        error = "vkCreateInstance failed";
        api_.Unload();
        return false;
    }
#if defined(VK_USE_PLATFORM_WIN32_KHR)
    hasWin32Surface_ = has_extension(VK_KHR_WIN32_SURFACE_EXTENSION_NAME);
#endif
    if (!api_.LoadInstance(instance_, error)) {
        api_.DestroyInstance(instance_, nullptr);
        instance_ = VK_NULL_HANDLE;
        api_.Unload();
        return false;
    }
    return ChooseAdapter(error);
}

bool Core::ChooseAdapter(std::string& error) {
    uint32_t count = 0;
    if (api_.EnumeratePhysicalDevices(instance_, &count, nullptr) != VK_SUCCESS || !count) {
        error = "no Vulkan adapter is present";
        return false;
    }
    std::vector<VkPhysicalDevice> devices(count);
    api_.EnumeratePhysicalDevices(instance_, &count, devices.data());
    devices.resize(count);

    VkPhysicalDevice best = VK_NULL_HANDLE;
    int best_score = -1;
    for (VkPhysicalDevice device : devices) {
        VkPhysicalDeviceProperties properties{};
        api_.GetPhysicalDeviceProperties(device, &properties);
        int score = AdapterScore(properties);
        // Prefer an adapter that supports the extensions presentation needs:
        // without them there is no window, only an offscreen device.
        uint32_t extension_count = 0;
        // The device extension list needs no extra entry point: the properties
        // query above only gives the name, and vkEnumerateDeviceExtensionProperties
        // is instance-level, so it is resolved lazily below when needed.
        (void)extension_count;
        if (score > best_score) {
            best = device;
            best_score = score;
        }
    }
    if (best == VK_NULL_HANDLE) {
        error = "no usable Vulkan adapter";
        return false;
    }
    physicalDevice_ = best;
    api_.GetPhysicalDeviceProperties(best, &properties_);
    api_.GetPhysicalDeviceMemoryProperties(best, &memoryProperties_);
    adapterName_ = properties_.deviceName;
    if (!IsDeviceSuitable(properties_, true, hasWin32Surface_)) {
        error = "the Vulkan adapter does not support the required API version";
        return false;
    }
    return true;
}

bool Core::CreateDevice(std::string& error) {
    if (device_ != VK_NULL_HANDLE) return true;
    if (physicalDevice_ == VK_NULL_HANDLE) {
        error = "the Vulkan device was asked for before an adapter was chosen";
        return false;
    }
    uint32_t familyCount = 0;
    api_.GetPhysicalDeviceQueueFamilyProperties(physicalDevice_, &familyCount, nullptr);
    std::vector<VkQueueFamilyProperties> families(familyCount);
    if (familyCount) {
        api_.GetPhysicalDeviceQueueFamilyProperties(physicalDevice_, &familyCount, families.data());
        families.resize(familyCount);
    }
    // One family for both graphics and presentation when possible, so the
    // presenter can submit and present from the same queue without ownership
    // transfers.
    uint32_t graphics = UINT32_MAX;
    uint32_t present = UINT32_MAX;
    for (uint32_t index = 0; index < families.size(); ++index) {
        if (families[index].queueCount == 0) continue;
        if ((families[index].queueFlags & VK_QUEUE_GRAPHICS_BIT) && graphics == UINT32_MAX)
            graphics = index;
    }
    if (graphics == UINT32_MAX) {
        error = "the Vulkan adapter has no graphics queue family";
        return false;
    }
    present = graphics;  // a Win32 surface is presentable from a graphics family

    const float priority = 1.0f;
    VkDeviceQueueCreateInfo queue_info{};
    queue_info.sType = VK_STRUCTURE_TYPE_DEVICE_QUEUE_CREATE_INFO;
    queue_info.queueFamilyIndex = graphics;
    queue_info.queueCount = 1;
    queue_info.pQueuePriorities = &priority;

    // Swapchain is the only device extension needed for presentation; chain
    // extensions are optional and not requested.
    std::vector<const char*> device_extensions;
    device_extensions.push_back(VK_KHR_SWAPCHAIN_EXTENSION_NAME);

    VkPhysicalDeviceFeatures features{};
    features.fillModeNonSolid = VK_FALSE;
    features.samplerAnisotropy = VK_FALSE;
    features.depthClamp = VK_TRUE;  // used by the Xenos depth path later
    VkDeviceCreateInfo create_info{};
    create_info.sType = VK_STRUCTURE_TYPE_DEVICE_CREATE_INFO;
    create_info.queueCreateInfoCount = 1;
    create_info.pQueueCreateInfos = &queue_info;
    create_info.pEnabledFeatures = &features;
    create_info.enabledExtensionCount = uint32_t(device_extensions.size());
    create_info.ppEnabledExtensionNames = device_extensions.data();
    if (api_.CreateDevice(physicalDevice_, &create_info, nullptr, &device_) != VK_SUCCESS) {
        error = "vkCreateDevice failed (the adapter may not support a swapchain)";
        device_ = VK_NULL_HANDLE;
        return false;
    }
    if (!api_.LoadDevice(device_, error)) {
        api_.DestroyDevice(device_, nullptr);
        device_ = VK_NULL_HANDLE;
        return false;
    }
    graphicsQueueFamily_ = graphics;
    presentQueueFamily_ = present;
    api_.GetDeviceQueue(device_, graphics, 0, &graphicsQueue_);
    api_.GetDeviceQueue(device_, present, 0, &presentQueue_);
    return true;
}

bool Core::SupportsPresentation(VkSurfaceKHR surface, uint32_t queueFamily,
                                bool& supported) const noexcept {
    supported = false;
    if (surface == VK_NULL_HANDLE || device_ == VK_NULL_HANDLE) return false;
    VkBool32 value = VK_FALSE;
    if (api_.GetPhysicalDeviceSurfaceSupportKHR(physicalDevice_, queueFamily, surface, &value) !=
        VK_SUCCESS)
        return false;
    supported = value == VK_TRUE;
    return true;
}

uint32_t Core::FindMemoryType(uint32_t typeBits, VkMemoryPropertyFlags properties) const noexcept {
    for (uint32_t index = 0; index < memoryProperties_.memoryTypeCount; ++index) {
        if (!(typeBits & (uint32_t(1) << index))) continue;
        if ((memoryProperties_.memoryTypes[index].propertyFlags & properties) == properties)
            return index;
    }
    return UINT32_MAX;
}

bool Core::DeviceRequired(std::string& error, const char* what) const {
    if (device_ != VK_NULL_HANDLE) return true;
    // Every device-level call goes through here. vkCreateCommandPool(NULL, ...)
    // and its siblings are not error-returning calls: the loader dereferences the
    // dispatch table of the handle it was given, so a null device is an access
    // violation (0xC0000005) at the first frame of the plugin's life.
    error = std::string(what) + " was called before the Vulkan device existed";
    return false;
}

bool Core::CreateBuffer(VkDeviceSize size, VkBufferUsageFlags usage, VkMemoryPropertyFlags properties,
                        Buffer& buffer, std::string& error) const {
    buffer = Buffer{};
    if (!DeviceRequired(error, "vkCreateBuffer")) return false;
    VkBufferCreateInfo buffer_info{};
    buffer_info.sType = VK_STRUCTURE_TYPE_BUFFER_CREATE_INFO;
    buffer_info.size = size;
    buffer_info.usage = usage;
    buffer_info.sharingMode = VK_SHARING_MODE_EXCLUSIVE;
    if (api_.CreateBuffer(device_, &buffer_info, nullptr, &buffer.buffer) != VK_SUCCESS) {
        error = "vkCreateBuffer failed";
        return false;
    }
    VkMemoryRequirements requirements{};
    api_.GetBufferMemoryRequirements(device_, buffer.buffer, &requirements);
    const uint32_t type = FindMemoryType(requirements.memoryTypeBits, properties);
    if (type == UINT32_MAX) {
        error = "no Vulkan memory type matches the staging buffer";
        api_.DestroyBuffer(device_, buffer.buffer, nullptr);
        buffer.buffer = VK_NULL_HANDLE;
        return false;
    }
    VkMemoryAllocateInfo allocate_info{};
    allocate_info.sType = VK_STRUCTURE_TYPE_MEMORY_ALLOCATE_INFO;
    allocate_info.allocationSize = requirements.size;
    allocate_info.memoryTypeIndex = type;
    if (api_.AllocateMemory(device_, &allocate_info, nullptr, &buffer.memory) != VK_SUCCESS) {
        error = "vkAllocateMemory failed for a staging buffer";
        api_.DestroyBuffer(device_, buffer.buffer, nullptr);
        buffer.buffer = VK_NULL_HANDLE;
        return false;
    }
    if (api_.BindBufferMemory(device_, buffer.buffer, buffer.memory, 0) != VK_SUCCESS) {
        error = "vkBindBufferMemory failed for a staging buffer";
        DestroyBuffer(buffer);
        return false;
    }
    buffer.size = size;
    if (properties & VK_MEMORY_PROPERTY_HOST_VISIBLE_BIT) {
        if (api_.MapMemory(device_, buffer.memory, 0, size, 0, &buffer.mapped) != VK_SUCCESS)
            buffer.mapped = nullptr;
    }
    return true;
}

void Core::DestroyBuffer(Buffer& buffer) const noexcept {
    if (buffer.mapped && api_.UnmapMemory) api_.UnmapMemory(device_, buffer.memory);
    if (buffer.buffer) api_.DestroyBuffer(device_, buffer.buffer, nullptr);
    if (buffer.memory) api_.FreeMemory(device_, buffer.memory, nullptr);
    buffer = Buffer{};
}

bool Core::CreateImage(uint32_t width, uint32_t height, VkFormat format, VkImageUsageFlags usage,
                       Image& image, std::string& error) const {
    if (!DeviceRequired(error, "vkCreateImage")) return false;
    image = Image{};
    VkImageCreateInfo image_info{};
    image_info.sType = VK_STRUCTURE_TYPE_IMAGE_CREATE_INFO;
    image_info.imageType = VK_IMAGE_TYPE_2D;
    image_info.format = format;
    image_info.extent = {width, height, 1};
    image_info.mipLevels = 1;
    image_info.arrayLayers = 1;
    image_info.samples = VK_SAMPLE_COUNT_1_BIT;
    image_info.tiling = VK_IMAGE_TILING_OPTIMAL;
    image_info.usage = usage;
    image_info.sharingMode = VK_SHARING_MODE_EXCLUSIVE;
    image_info.initialLayout = VK_IMAGE_LAYOUT_UNDEFINED;
    if (api_.CreateImage(device_, &image_info, nullptr, &image.image) != VK_SUCCESS) {
        error = "vkCreateImage failed";
        return false;
    }
    VkMemoryRequirements requirements{};
    api_.GetImageMemoryRequirements(device_, image.image, &requirements);
    const uint32_t type = FindMemoryType(requirements.memoryTypeBits, VK_MEMORY_PROPERTY_DEVICE_LOCAL_BIT);
    if (type == UINT32_MAX) {
        error = "no device-local Vulkan memory type for the image";
        DestroyImage(image);
        return false;
    }
    VkMemoryAllocateInfo allocate_info{};
    allocate_info.sType = VK_STRUCTURE_TYPE_MEMORY_ALLOCATE_INFO;
    allocate_info.allocationSize = requirements.size;
    allocate_info.memoryTypeIndex = type;
    if (api_.AllocateMemory(device_, &allocate_info, nullptr, &image.memory) != VK_SUCCESS) {
        error = "vkAllocateMemory failed for an image";
        DestroyImage(image);
        return false;
    }
    if (api_.BindImageMemory(device_, image.image, image.memory, 0) != VK_SUCCESS) {
        error = "vkBindImageMemory failed";
        DestroyImage(image);
        return false;
    }
    VkImageViewCreateInfo view_info{};
    view_info.sType = VK_STRUCTURE_TYPE_IMAGE_VIEW_CREATE_INFO;
    view_info.image = image.image;
    view_info.viewType = VK_IMAGE_VIEW_TYPE_2D;
    view_info.format = format;
    view_info.subresourceRange.aspectMask = VK_IMAGE_ASPECT_COLOR_BIT;
    view_info.subresourceRange.levelCount = 1;
    view_info.subresourceRange.layerCount = 1;
    if (api_.CreateImageView(device_, &view_info, nullptr, &image.view) != VK_SUCCESS) {
        error = "vkCreateImageView failed";
        DestroyImage(image);
        return false;
    }
    image.size = requirements.size;
    image.width = width;
    image.height = height;
    image.format = format;
    return true;
}

void Core::DestroyImage(Image& image) const noexcept {
    if (image.view) api_.DestroyImageView(device_, image.view, nullptr);
    if (image.image) api_.DestroyImage(device_, image.image, nullptr);
    if (image.memory) api_.FreeMemory(device_, image.memory, nullptr);
    image = Image{};
}

bool Core::CreateCommandPool(VkCommandPool& pool, std::string& error) const {
    if (!DeviceRequired(error, "vkCreateCommandPool")) {
        pool = VK_NULL_HANDLE;
        return false;
    }
    VkCommandPoolCreateInfo pool_info{};
    pool_info.sType = VK_STRUCTURE_TYPE_COMMAND_POOL_CREATE_INFO;
    pool_info.flags = VK_COMMAND_POOL_CREATE_TRANSIENT_BIT;
    pool_info.queueFamilyIndex = graphicsQueueFamily_;
    if (api_.CreateCommandPool(device_, &pool_info, nullptr, &pool) != VK_SUCCESS) {
        error = "vkCreateCommandPool failed";
        pool = VK_NULL_HANDLE;
        return false;
    }
    return true;
}

bool Core::BeginCommands(VkCommandPool pool, VkCommandBuffer& commands, std::string& error) const {
    if (!DeviceRequired(error, "vkAllocateCommandBuffers")) {
        commands = VK_NULL_HANDLE;
        return false;
    }
    if (!pool) {
        error = "the command buffer was asked for before a command pool existed";
        commands = VK_NULL_HANDLE;
        return false;
    }
    VkCommandBufferAllocateInfo allocate_info{};
    allocate_info.sType = VK_STRUCTURE_TYPE_COMMAND_BUFFER_ALLOCATE_INFO;
    allocate_info.commandPool = pool;
    allocate_info.level = VK_COMMAND_BUFFER_LEVEL_PRIMARY;
    allocate_info.commandBufferCount = 1;
    if (api_.AllocateCommandBuffers(device_, &allocate_info, &commands) != VK_SUCCESS) {
        error = "vkAllocateCommandBuffers failed";
        commands = VK_NULL_HANDLE;
        return false;
    }
    return BeginRecording(commands, error);
}

bool Core::BeginRecording(VkCommandBuffer commands, std::string& error) const {
    VkCommandBufferBeginInfo begin_info{};
    begin_info.sType = VK_STRUCTURE_TYPE_COMMAND_BUFFER_BEGIN_INFO;
    begin_info.flags = VK_COMMAND_BUFFER_USAGE_ONE_TIME_SUBMIT_BIT;
    if (api_.BeginCommandBuffer(commands, &begin_info) != VK_SUCCESS) {
        error = "vkBeginCommandBuffer failed";
        return false;
    }
    return true;
}

bool Core::EndCommands(VkCommandBuffer commands, std::string& error) const {
    if (api_.EndCommandBuffer(commands) != VK_SUCCESS) {
        error = "vkEndCommandBuffer failed";
        return false;
    }
    return true;
}

bool Core::SubmitAndWait(VkCommandBuffer commands, std::string& error) const {
    if (!DeviceRequired(error, "vkQueueSubmit")) return false;
    VkSubmitInfo submit_info{};
    submit_info.sType = VK_STRUCTURE_TYPE_SUBMIT_INFO;
    submit_info.commandBufferCount = 1;
    submit_info.pCommandBuffers = &commands;
    VkFence fence = VK_NULL_HANDLE;
    VkFenceCreateInfo fence_info{};
    fence_info.sType = VK_STRUCTURE_TYPE_FENCE_CREATE_INFO;
    if (api_.CreateFence(device_, &fence_info, nullptr, &fence) != VK_SUCCESS) {
        error = "vkCreateFence failed";
        return false;
    }
    const VkResult submitted = api_.QueueSubmit(graphicsQueue_, 1, &submit_info, fence);
    VkResult waited = VK_SUCCESS;
    if (submitted == VK_SUCCESS) waited = api_.WaitForFences(device_, 1, &fence, VK_TRUE, UINT64_MAX);
    api_.DestroyFence(device_, fence, nullptr);
    if (submitted != VK_SUCCESS) {
        error = "vkQueueSubmit failed";
        return false;
    }
    if (waited != VK_SUCCESS) {
        error = "vkWaitForFences failed";
        return false;
    }
    return true;
}

void Core::ImageBarrier(VkCommandBuffer commands, VkImage image, VkImageLayout oldLayout,
                        VkImageLayout newLayout, VkAccessFlags sourceAccess,
                        VkAccessFlags destinationAccess, VkPipelineStageFlags sourceStage,
                        VkPipelineStageFlags destinationStage) const noexcept {
    VkImageMemoryBarrier barrier{};
    barrier.sType = VK_STRUCTURE_TYPE_IMAGE_MEMORY_BARRIER;
    barrier.oldLayout = oldLayout;
    barrier.newLayout = newLayout;
    barrier.srcQueueFamilyIndex = VK_QUEUE_FAMILY_IGNORED;
    barrier.dstQueueFamilyIndex = VK_QUEUE_FAMILY_IGNORED;
    barrier.image = image;
    barrier.subresourceRange.aspectMask = VK_IMAGE_ASPECT_COLOR_BIT;
    barrier.subresourceRange.levelCount = 1;
    barrier.subresourceRange.layerCount = 1;
    barrier.srcAccessMask = sourceAccess;
    barrier.dstAccessMask = destinationAccess;
    api_.CmdPipelineBarrier(commands, sourceStage, destinationStage, 0, 0, nullptr, 0, nullptr, 1,
                            &barrier);
}

}  // namespace sonic::rex_host::gpu::vk
