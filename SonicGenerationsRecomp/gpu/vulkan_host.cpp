#include <gpu/vulkan_host.h>
#include <algorithm>
#include <atomic>
#include <cstdio>
#include <cmath>
#include <cstring>
#include <limits>
#include <unordered_map>

namespace HostGpu
{
struct VulkanHost::Impl
{
    static constexpr uint64_t MemoryBudget = 256ull * 1024 * 1024;
    static constexpr uint64_t MaxAllocation = 64ull * 1024 * 1024;
    static constexpr size_t MaxResources = 512;
    struct Buffer
    {
        VkDevice device{};
        VkBuffer buffer{};
        VkDeviceMemory memory{};
        VkDeviceSize size{}, allocation{};
        VkMemoryPropertyFlags properties{};
        VkBufferUsageFlags usage{};
        ~Buffer() { if (buffer) vkDestroyBuffer(device, buffer, nullptr); if (memory) vkFreeMemory(device, memory, nullptr); }
    };
    struct Image
    {
        VkDevice device{};
        VkImage image{};
        VkImageView view{};
        VkDeviceMemory memory{};
        VkDeviceSize allocation{};
        uint32_t width{}, height{};
        ImageKind kind{};
        VkImageLayout layout = VK_IMAGE_LAYOUT_UNDEFINED;
        VkImageAspectFlags Aspect() const { return kind == ImageKind::Rgba8 ? VK_IMAGE_ASPECT_COLOR_BIT : VK_IMAGE_ASPECT_DEPTH_BIT; }
        ~Image() { if (view) vkDestroyImageView(device, view, nullptr); if (image) vkDestroyImage(device, image, nullptr); if (memory) vkFreeMemory(device, memory, nullptr); }
    };
    std::atomic<uint64_t> validationErrors{0};
    VkDebugUtilsMessengerEXT messenger{};
    VkInstance instance{};
    VkPhysicalDevice physical{};
    VkPhysicalDeviceMemoryProperties memoryProperties{};
    VkDevice device{};
    VkQueue queue{};
    uint32_t queueFamily{};
    VkCommandPool pool{};
    VkCommandBuffer command{};
    VkFence fence{};
    VkSurfaceKHR surface{};
    VkSwapchainKHR swapchain{};
    std::vector<VkImage> swapImages;
    VkSemaphore acquired{}, rendered{};
    bool ready = false, failed = false, resizeNeeded = false;
    std::string error, adapter;
    VulkanStats stats;
    Resource nextId = 1;
    std::unordered_map<Resource, std::unique_ptr<Buffer>> buffers;
    std::unordered_map<Resource, std::unique_ptr<Image>> images;

    bool Fail(const std::string& text) { error = text; return false; }
    bool Check(VkResult result, const char* operation)
    {
        if (result == VK_SUCCESS) return true;
        if (result == VK_ERROR_DEVICE_LOST) failed = true;
        return Fail(std::string(operation) + " failed: VkResult=" + std::to_string(result));
    }
    bool Usable() { return (ready && !failed) || Fail("Vulkan device is not ready"); }
    uint32_t MemoryType(uint32_t bits, VkMemoryPropertyFlags required, VkMemoryPropertyFlags preferred)
    {
        for (int pass = 0; pass < 2; ++pass)
            for (uint32_t i = 0; i < memoryProperties.memoryTypeCount; ++i)
            {
                const auto flags = memoryProperties.memoryTypes[i].propertyFlags;
                if ((bits & (1u << i)) && (flags & required) == required &&
                    (pass || (flags & preferred) == preferred)) return i;
            }
        return UINT32_MAX;
    }
    bool Room(VkDeviceSize bytes)
    {
        return (bytes <= MaxAllocation && bytes <= MemoryBudget - stats.allocatedBytes) || Fail("Vulkan resource memory budget exceeded");
    }
    std::unique_ptr<Buffer> MakeBuffer(size_t bytes, VkBufferUsageFlags usage, bool hostVisible)
    {
        if (!Usable() || !bytes || !Room(bytes)) return {};
        auto b = std::make_unique<Buffer>();
        b->device = device; b->size = bytes; b->usage = usage;
        VkBufferCreateInfo info{VK_STRUCTURE_TYPE_BUFFER_CREATE_INFO};
        info.size = bytes; info.usage = usage; info.sharingMode = VK_SHARING_MODE_EXCLUSIVE;
        if (!Check(vkCreateBuffer(device, &info, nullptr, &b->buffer), "vkCreateBuffer")) return {};
        VkMemoryRequirements requirements;
        vkGetBufferMemoryRequirements(device, b->buffer, &requirements);
        if (!Room(requirements.size)) return {};
        const auto type = MemoryType(requirements.memoryTypeBits,
            hostVisible ? VK_MEMORY_PROPERTY_HOST_VISIBLE_BIT : 0,
            hostVisible ? VK_MEMORY_PROPERTY_HOST_COHERENT_BIT : VK_MEMORY_PROPERTY_DEVICE_LOCAL_BIT);
        if (type == UINT32_MAX) { Fail("No compatible buffer memory type"); return {}; }
        VkMemoryAllocateInfo alloc{VK_STRUCTURE_TYPE_MEMORY_ALLOCATE_INFO};
        alloc.allocationSize = requirements.size; alloc.memoryTypeIndex = type;
        if (!Check(vkAllocateMemory(device, &alloc, nullptr, &b->memory), "vkAllocateMemory(buffer)") ||
            !Check(vkBindBufferMemory(device, b->buffer, b->memory, 0), "vkBindBufferMemory")) return {};
        b->properties = memoryProperties.memoryTypes[type].propertyFlags;
        b->allocation = requirements.size;
        return b;
    }
    bool Begin()
    {
        if (!Usable() || !Check(vkWaitForFences(device, 1, &fence, VK_TRUE, UINT64_MAX), "vkWaitForFences") ||
            !Check(vkResetCommandBuffer(command, 0), "vkResetCommandBuffer")) return false;
        VkCommandBufferBeginInfo info{VK_STRUCTURE_TYPE_COMMAND_BUFFER_BEGIN_INFO};
        info.flags = VK_COMMAND_BUFFER_USAGE_ONE_TIME_SUBMIT_BIT;
        return Check(vkBeginCommandBuffer(command, &info), "vkBeginCommandBuffer");
    }
    bool Submit(bool wsi = false)
    {
        if (!Check(vkEndCommandBuffer(command), "vkEndCommandBuffer")) { failed = true; return false; }
        VkSubmitInfo info{VK_STRUCTURE_TYPE_SUBMIT_INFO};
        info.commandBufferCount = 1; info.pCommandBuffers = &command;
        // Acquire protects the first layout transition too, not just the clear.
        // A transfer-only wait with a TOP_OF_PIPE source barrier leaves a WSI
        // read -> layout-write hazard. The reference path uses a full wait.
        const VkPipelineStageFlags waitStage = VK_PIPELINE_STAGE_ALL_COMMANDS_BIT;
        if (wsi)
        {
            info.waitSemaphoreCount = 1; info.pWaitSemaphores = &acquired; info.pWaitDstStageMask = &waitStage;
            info.signalSemaphoreCount = 1; info.pSignalSemaphores = &rendered;
        }
        if (!Check(vkResetFences(device, 1, &fence), "vkResetFences") ||
            !Check(vkQueueSubmit(queue, 1, &info, fence), "vkQueueSubmit")) { failed = true; return false; }
        ++stats.submissions;
        if (!Check(vkWaitForFences(device, 1, &fence, VK_TRUE, UINT64_MAX), "vkWaitForFences(submission)"))
        {
            failed = true;
            vkDeviceWaitIdle(device); // quiesce before any caller frees staging resources
            return false;
        }
        return true;
    }
    void Transition(Image& image, VkImageLayout layout, VkAccessFlags access)
    {
        VkImageMemoryBarrier barrier{VK_STRUCTURE_TYPE_IMAGE_MEMORY_BARRIER};
        barrier.srcAccessMask = image.layout == VK_IMAGE_LAYOUT_UNDEFINED ? 0 : VK_ACCESS_MEMORY_READ_BIT | VK_ACCESS_MEMORY_WRITE_BIT;
        barrier.dstAccessMask = access;
        barrier.oldLayout = image.layout; barrier.newLayout = layout;
        barrier.srcQueueFamilyIndex = barrier.dstQueueFamilyIndex = VK_QUEUE_FAMILY_IGNORED;
        barrier.image = image.image;
        barrier.subresourceRange = {image.Aspect(), 0, 1, 0, 1};
        vkCmdPipelineBarrier(command, VK_PIPELINE_STAGE_ALL_COMMANDS_BIT, VK_PIPELINE_STAGE_TRANSFER_BIT,
            0, 0, nullptr, 0, nullptr, 1, &barrier);
        image.layout = layout;
    }
    Buffer* FindBuffer(Resource id)
    {
        auto it = buffers.find(id);
        if (it == buffers.end()) { Fail("Invalid/stale buffer handle"); return nullptr; }
        return it->second.get();
    }
    Image* FindImage(Resource id)
    {
        auto it = images.find(id);
        if (it == images.end()) { Fail("Invalid/stale image handle"); return nullptr; }
        return it->second.get();
    }
    bool Map(Buffer& b, void* data, size_t bytes, bool read)
    {
        if (!(b.properties & VK_MEMORY_PROPERTY_HOST_VISIBLE_BIT) || bytes > b.size)
            return Fail("Buffer mapping is not host-visible or exceeds its size");
        void* mapped = nullptr;
        if (!Check(vkMapMemory(device, b.memory, 0, VK_WHOLE_SIZE, 0, &mapped), "vkMapMemory")) return false;
        VkMappedMemoryRange range{VK_STRUCTURE_TYPE_MAPPED_MEMORY_RANGE};
        range.memory = b.memory; range.size = VK_WHOLE_SIZE;
        bool ok = true;
        if (read && !(b.properties & VK_MEMORY_PROPERTY_HOST_COHERENT_BIT))
            ok = Check(vkInvalidateMappedMemoryRanges(device, 1, &range), "vkInvalidateMappedMemoryRanges");
        if (ok && bytes)
        {
            if (read) std::memcpy(data, mapped, bytes);
            else std::memcpy(mapped, data, bytes);
        }
        if (!read && !(b.properties & VK_MEMORY_PROPERTY_HOST_COHERENT_BIT))
            ok = Check(vkFlushMappedMemoryRanges(device, 1, &range), "vkFlushMappedMemoryRanges");
        vkUnmapMemory(device, b.memory);
        return ok;
    }
    void Shutdown()
    {
        ready = false;
        if (device) vkDeviceWaitIdle(device);
        buffers.clear(); images.clear(); stats.allocatedBytes = 0;
        swapImages.clear();
        if (swapchain) vkDestroySwapchainKHR(device, swapchain, nullptr);
        if (acquired) vkDestroySemaphore(device, acquired, nullptr);
        if (rendered) vkDestroySemaphore(device, rendered, nullptr);
        if (fence) vkDestroyFence(device, fence, nullptr);
        if (pool) vkDestroyCommandPool(device, pool, nullptr);
        if (device) vkDestroyDevice(device, nullptr);
        if (surface) vkDestroySurfaceKHR(instance, surface, nullptr);
        if (messenger && instance)
        {
            auto destroy = reinterpret_cast<PFN_vkDestroyDebugUtilsMessengerEXT>(vkGetInstanceProcAddr(instance, "vkDestroyDebugUtilsMessengerEXT"));
            if (destroy) destroy(instance, messenger, nullptr);
        }
        messenger = {};
        if (instance) vkDestroyInstance(instance, nullptr);
        instance = {}; physical = {}; device = {}; queue = {}; pool = {}; command = {}; fence = {};
        surface = {}; swapchain = {}; acquired = {}; rendered = {};
        failed = false; resizeNeeded = false;
    }
    ~Impl() { Shutdown(); }
};

VulkanHost::VulkanHost() : impl(std::make_unique<Impl>()) {}
VulkanHost::~VulkanHost() = default;
bool VulkanHost::IsReady() const { return impl->ready && !impl->failed; }
const std::string& VulkanHost::Error() const { return impl->error; }
const std::string& VulkanHost::AdapterName() const { return impl->adapter; }
VulkanStats VulkanHost::Stats() const
{
    auto result = impl->stats;
    result.validationErrors = impl->validationErrors.load();
    return result;
}
void VulkanHost::Shutdown() { impl->Shutdown(); }

bool VulkanHost::Init(const VulkanConfig& config)
{
    auto& p = *impl;
    p.Shutdown(); p.error.clear(); p.adapter.clear(); p.stats = {}; p.validationErrors = 0;
    // Do not reset nextId: stale resource IDs must remain invalid after re-init.
    VkApplicationInfo app{VK_STRUCTURE_TYPE_APPLICATION_INFO};
    app.pApplicationName = "Sonic Generations Vulkan host"; app.apiVersion = VK_API_VERSION_1_0;
    VkInstanceCreateInfo info{VK_STRUCTURE_TYPE_INSTANCE_CREATE_INFO};
    info.pApplicationInfo = &app;
    std::vector<const char*> extensions(config.instanceExtensions.begin(), config.instanceExtensions.end());
    VkDebugUtilsMessengerCreateInfoEXT debug{VK_STRUCTURE_TYPE_DEBUG_UTILS_MESSENGER_CREATE_INFO_EXT};
    debug.messageSeverity = VK_DEBUG_UTILS_MESSAGE_SEVERITY_WARNING_BIT_EXT | VK_DEBUG_UTILS_MESSAGE_SEVERITY_ERROR_BIT_EXT;
    debug.messageType = VK_DEBUG_UTILS_MESSAGE_TYPE_GENERAL_BIT_EXT | VK_DEBUG_UTILS_MESSAGE_TYPE_VALIDATION_BIT_EXT | VK_DEBUG_UTILS_MESSAGE_TYPE_PERFORMANCE_BIT_EXT;
    debug.pUserData = &p;
    debug.pfnUserCallback = [](VkDebugUtilsMessageSeverityFlagBitsEXT severity, VkDebugUtilsMessageTypeFlagsEXT,
                              const VkDebugUtilsMessengerCallbackDataEXT* data, void* user) -> VkBool32 {
        if (severity & VK_DEBUG_UTILS_MESSAGE_SEVERITY_ERROR_BIT_EXT)
            ++static_cast<Impl*>(user)->validationErrors;
        std::fprintf(stderr, "Vulkan validation: %s\n", data->pMessage);
        return VK_FALSE;
    };
    if (config.validation)
    {
        if (std::none_of(extensions.begin(), extensions.end(), [](const char* x) { return std::strcmp(x, VK_EXT_DEBUG_UTILS_EXTENSION_NAME) == 0; }))
            extensions.push_back(VK_EXT_DEBUG_UTILS_EXTENSION_NAME);
        info.pNext = &debug;
    }
    info.enabledExtensionCount = uint32_t(extensions.size()); info.ppEnabledExtensionNames = extensions.data();
    const char* validation = "VK_LAYER_KHRONOS_validation";
    if (config.validation) { info.enabledLayerCount = 1; info.ppEnabledLayerNames = &validation; }
    if (!p.Check(vkCreateInstance(&info, nullptr, &p.instance), "vkCreateInstance")) return false;
    if (config.validation)
    {
        auto create = reinterpret_cast<PFN_vkCreateDebugUtilsMessengerEXT>(vkGetInstanceProcAddr(p.instance, "vkCreateDebugUtilsMessengerEXT"));
        if (!create || !p.Check(create(p.instance, &debug, nullptr, &p.messenger), "vkCreateDebugUtilsMessengerEXT")) return false;
    }
    if (config.createSurface)
    {
        p.surface = config.createSurface(p.instance);
        if (!p.surface) return p.Fail("Surface creation failed");
    }
    uint32_t count = 0;
    if (!p.Check(vkEnumeratePhysicalDevices(p.instance, &count, nullptr), "vkEnumeratePhysicalDevices") || !count)
        return p.Fail("No Vulkan physical device");
    std::vector<VkPhysicalDevice> devices(count);
    if (!p.Check(vkEnumeratePhysicalDevices(p.instance, &count, devices.data()), "vkEnumeratePhysicalDevices")) return false;
    for (auto candidate : devices)
    {
        uint32_t families = 0;
        vkGetPhysicalDeviceQueueFamilyProperties(candidate, &families, nullptr);
        std::vector<VkQueueFamilyProperties> properties(families);
        vkGetPhysicalDeviceQueueFamilyProperties(candidate, &families, properties.data());
        for (uint32_t i = 0; i < families; ++i)
        {
            VkBool32 present = VK_TRUE;
            if (p.surface && vkGetPhysicalDeviceSurfaceSupportKHR(candidate, i, p.surface, &present) != VK_SUCCESS) continue;
            if (properties[i].queueCount && (properties[i].queueFlags & VK_QUEUE_GRAPHICS_BIT) && present)
            { p.physical = candidate; p.queueFamily = i; break; }
        }
        if (p.physical) break;
    }
    if (!p.physical) return p.Fail("No graphics queue with required presentation support");
    VkPhysicalDeviceProperties properties;
    vkGetPhysicalDeviceProperties(p.physical, &properties); p.adapter = properties.deviceName;
    vkGetPhysicalDeviceMemoryProperties(p.physical, &p.memoryProperties);
    float priority = 1.0f;
    VkDeviceQueueCreateInfo queueInfo{VK_STRUCTURE_TYPE_DEVICE_QUEUE_CREATE_INFO};
    queueInfo.queueFamilyIndex = p.queueFamily; queueInfo.queueCount = 1; queueInfo.pQueuePriorities = &priority;
    VkDeviceCreateInfo deviceInfo{VK_STRUCTURE_TYPE_DEVICE_CREATE_INFO};
    deviceInfo.queueCreateInfoCount = 1; deviceInfo.pQueueCreateInfos = &queueInfo;
    const char* swapExtension = VK_KHR_SWAPCHAIN_EXTENSION_NAME;
    if (p.surface) { deviceInfo.enabledExtensionCount = 1; deviceInfo.ppEnabledExtensionNames = &swapExtension; }
    if (!p.Check(vkCreateDevice(p.physical, &deviceInfo, nullptr, &p.device), "vkCreateDevice")) return false;
    vkGetDeviceQueue(p.device, p.queueFamily, 0, &p.queue);
    VkCommandPoolCreateInfo poolInfo{VK_STRUCTURE_TYPE_COMMAND_POOL_CREATE_INFO};
    poolInfo.flags = VK_COMMAND_POOL_CREATE_RESET_COMMAND_BUFFER_BIT; poolInfo.queueFamilyIndex = p.queueFamily;
    if (!p.Check(vkCreateCommandPool(p.device, &poolInfo, nullptr, &p.pool), "vkCreateCommandPool")) return false;
    VkCommandBufferAllocateInfo allocate{VK_STRUCTURE_TYPE_COMMAND_BUFFER_ALLOCATE_INFO};
    allocate.commandPool = p.pool; allocate.level = VK_COMMAND_BUFFER_LEVEL_PRIMARY; allocate.commandBufferCount = 1;
    if (!p.Check(vkAllocateCommandBuffers(p.device, &allocate, &p.command), "vkAllocateCommandBuffers")) return false;
    VkFenceCreateInfo fenceInfo{VK_STRUCTURE_TYPE_FENCE_CREATE_INFO}; fenceInfo.flags = VK_FENCE_CREATE_SIGNALED_BIT;
    if (!p.Check(vkCreateFence(p.device, &fenceInfo, nullptr, &p.fence), "vkCreateFence")) return false;
    if (p.surface)
    {
        VkSemaphoreCreateInfo semaphoreInfo{VK_STRUCTURE_TYPE_SEMAPHORE_CREATE_INFO};
        if (!p.Check(vkCreateSemaphore(p.device, &semaphoreInfo, nullptr, &p.acquired), "vkCreateSemaphore(acquire)") ||
            !p.Check(vkCreateSemaphore(p.device, &semaphoreInfo, nullptr, &p.rendered), "vkCreateSemaphore(render)")) return false;
        p.resizeNeeded = true;
    }
    p.ready = true;
    return true;
}

Resource VulkanHost::CreateBuffer(size_t bytes, VkBufferUsageFlags usage, bool hostVisible)
{
    auto& p = *impl;
    if (p.buffers.size() + p.images.size() >= Impl::MaxResources || p.nextId == UINT64_MAX)
    { p.Fail("Vulkan resource handle limit exceeded"); return 0; }
    // Transfer bits are always available to the explicit upload/readback path.
    auto buffer = p.MakeBuffer(bytes, usage | VK_BUFFER_USAGE_TRANSFER_SRC_BIT | VK_BUFFER_USAGE_TRANSFER_DST_BIT, hostVisible);
    if (!buffer) return 0;
    const auto allocation = buffer->allocation;
    const auto id = p.nextId++;
    p.buffers.emplace(id, std::move(buffer));
    p.stats.allocatedBytes += allocation; ++p.stats.buffersCreated;
    return id;
}
Resource VulkanHost::CreateImage(uint32_t width, uint32_t height, ImageKind kind)
{
    auto& p = *impl;
    if (!p.Usable()) return 0;
    VkPhysicalDeviceProperties limits;
    vkGetPhysicalDeviceProperties(p.physical, &limits);
    if (!width || !height || width > limits.limits.maxImageDimension2D || height > limits.limits.maxImageDimension2D ||
        uint64_t(width) * height > Impl::MaxAllocation / 4 || p.buffers.size() + p.images.size() >= Impl::MaxResources || p.nextId == UINT64_MAX)
    { p.Fail("Invalid image size or resource limit exceeded"); return 0; }
    auto image = std::make_unique<Impl::Image>();
    image->device = p.device; image->width = width; image->height = height; image->kind = kind;
    const auto format = kind == ImageKind::Rgba8 ? VK_FORMAT_R8G8B8A8_UNORM : VK_FORMAT_D32_SFLOAT;
    VkFormatProperties features;
    vkGetPhysicalDeviceFormatProperties(p.physical, format, &features);
    const VkFormatFeatureFlags required = kind == ImageKind::Rgba8 ? VK_FORMAT_FEATURE_COLOR_ATTACHMENT_BIT | VK_FORMAT_FEATURE_SAMPLED_IMAGE_BIT : VK_FORMAT_FEATURE_DEPTH_STENCIL_ATTACHMENT_BIT;
    if ((features.optimalTilingFeatures & required) != required) { p.Fail("Unsupported image format"); return 0; }
    VkImageCreateInfo info{VK_STRUCTURE_TYPE_IMAGE_CREATE_INFO};
    info.imageType = VK_IMAGE_TYPE_2D; info.format = format; info.extent = {width, height, 1};
    info.mipLevels = info.arrayLayers = 1; info.samples = VK_SAMPLE_COUNT_1_BIT; info.tiling = VK_IMAGE_TILING_OPTIMAL;
    info.usage = VK_IMAGE_USAGE_TRANSFER_SRC_BIT | VK_IMAGE_USAGE_TRANSFER_DST_BIT |
        (kind == ImageKind::Rgba8 ? VK_IMAGE_USAGE_COLOR_ATTACHMENT_BIT | VK_IMAGE_USAGE_SAMPLED_BIT : VK_IMAGE_USAGE_DEPTH_STENCIL_ATTACHMENT_BIT);
    info.sharingMode = VK_SHARING_MODE_EXCLUSIVE;
    if (!p.Check(vkCreateImage(p.device, &info, nullptr, &image->image), "vkCreateImage")) return 0;
    VkMemoryRequirements requirements;
    vkGetImageMemoryRequirements(p.device, image->image, &requirements);
    if (!p.Room(requirements.size)) return 0;
    auto type = p.MemoryType(requirements.memoryTypeBits, 0, VK_MEMORY_PROPERTY_DEVICE_LOCAL_BIT);
    if (type == UINT32_MAX) { p.Fail("No compatible image memory type"); return 0; }
    VkMemoryAllocateInfo alloc{VK_STRUCTURE_TYPE_MEMORY_ALLOCATE_INFO};
    alloc.allocationSize = requirements.size; alloc.memoryTypeIndex = type;
    if (!p.Check(vkAllocateMemory(p.device, &alloc, nullptr, &image->memory), "vkAllocateMemory(image)") ||
        !p.Check(vkBindImageMemory(p.device, image->image, image->memory, 0), "vkBindImageMemory")) return 0;
    VkImageViewCreateInfo view{VK_STRUCTURE_TYPE_IMAGE_VIEW_CREATE_INFO};
    view.image = image->image; view.viewType = VK_IMAGE_VIEW_TYPE_2D; view.format = format;
    view.subresourceRange = {image->Aspect(), 0, 1, 0, 1};
    if (!p.Check(vkCreateImageView(p.device, &view, nullptr, &image->view), "vkCreateImageView")) return 0;
    image->allocation = requirements.size;
    const auto id = p.nextId++;
    p.images.emplace(id, std::move(image));
    p.stats.allocatedBytes += requirements.size; ++p.stats.imagesCreated;
    return id;
}
bool VulkanHost::Destroy(Resource id)
{
    auto& p = *impl;
    if (auto it = p.buffers.find(id); it != p.buffers.end())
    { p.stats.allocatedBytes -= it->second->allocation; p.buffers.erase(it); return true; }
    if (auto it = p.images.find(id); it != p.images.end())
    { p.stats.allocatedBytes -= it->second->allocation; p.images.erase(it); return true; }
    return p.Fail("Invalid/stale resource handle");
}
bool VulkanHost::WriteBuffer(Resource id, std::span<const uint8_t> data)
{
    auto& p = *impl;
    auto* b = p.FindBuffer(id);
    return p.Usable() && b && p.Map(*b, const_cast<uint8_t*>(data.data()), data.size(), false);
}
bool VulkanHost::ReadBuffer(Resource id, std::span<uint8_t> data)
{
    auto& p = *impl;
    auto* b = p.FindBuffer(id);
    return p.Usable() && b && p.Map(*b, data.data(), data.size(), true);
}
bool VulkanHost::CopyBuffer(Resource source, Resource destination, size_t bytes)
{
    auto& p = *impl;
    auto* src = p.FindBuffer(source); auto* dst = p.FindBuffer(destination);
    if (!src || !dst) return false;
    if (source == destination || !bytes || (bytes & 3) || bytes > src->size || bytes > dst->size)
        return p.Fail("Invalid buffer copy range/alignment");
    if (!p.Begin()) return false;
    VkBufferCopy copy{0, 0, bytes};
    vkCmdCopyBuffer(p.command, src->buffer, dst->buffer, 1, &copy);
    VkMemoryBarrier barrier{VK_STRUCTURE_TYPE_MEMORY_BARRIER};
    barrier.srcAccessMask = VK_ACCESS_TRANSFER_WRITE_BIT;
    barrier.dstAccessMask = VK_ACCESS_MEMORY_READ_BIT | VK_ACCESS_HOST_READ_BIT;
    vkCmdPipelineBarrier(p.command, VK_PIPELINE_STAGE_TRANSFER_BIT, VK_PIPELINE_STAGE_ALL_COMMANDS_BIT | VK_PIPELINE_STAGE_HOST_BIT,
        0, 1, &barrier, 0, nullptr, 0, nullptr);
    return p.Submit();
}
bool VulkanHost::ClearColor(Resource id, const std::array<float, 4>& color)
{
    auto& p = *impl; auto* image = p.FindImage(id);
    if (!image) return false;
    if (image->kind != ImageKind::Rgba8 || !std::all_of(color.begin(), color.end(), [](float x) { return std::isfinite(x); }))
        return p.Fail("Invalid color clear");
    if (!p.Begin()) return false;
    p.Transition(*image, VK_IMAGE_LAYOUT_TRANSFER_DST_OPTIMAL, VK_ACCESS_TRANSFER_WRITE_BIT);
    VkClearColorValue clear{}; std::copy(color.begin(), color.end(), clear.float32);
    const VkImageSubresourceRange range{VK_IMAGE_ASPECT_COLOR_BIT, 0, 1, 0, 1};
    vkCmdClearColorImage(p.command, image->image, image->layout, &clear, 1, &range);
    return p.Submit();
}
bool VulkanHost::ClearDepth(Resource id, float depth)
{
    auto& p = *impl; auto* image = p.FindImage(id);
    if (!image) return false;
    if (image->kind != ImageKind::Depth32 || !std::isfinite(depth) || depth < 0 || depth > 1)
        return p.Fail("Invalid depth clear");
    if (!p.Begin()) return false;
    p.Transition(*image, VK_IMAGE_LAYOUT_TRANSFER_DST_OPTIMAL, VK_ACCESS_TRANSFER_WRITE_BIT);
    const VkClearDepthStencilValue clear{depth, 0};
    const VkImageSubresourceRange range{VK_IMAGE_ASPECT_DEPTH_BIT, 0, 1, 0, 1};
    vkCmdClearDepthStencilImage(p.command, image->image, image->layout, &clear, 1, &range);
    return p.Submit();
}
bool VulkanHost::UploadRgba(Resource id, std::span<const uint8_t> data)
{
    auto& p = *impl; auto* image = p.FindImage(id);
    if (!image) return false;
    if (image->kind != ImageKind::Rgba8 || data.size() != uint64_t(image->width) * image->height * 4)
        return p.Fail("Invalid RGBA upload size/format");
    const auto staging = CreateBuffer(data.size(), VK_BUFFER_USAGE_TRANSFER_SRC_BIT, true);
    if (!staging) return false;
    bool ok = WriteBuffer(staging, data) && p.Begin();
    if (ok)
    {
        p.Transition(*image, VK_IMAGE_LAYOUT_TRANSFER_DST_OPTIMAL, VK_ACCESS_TRANSFER_WRITE_BIT);
        VkBufferImageCopy copy{};
        copy.imageSubresource = {VK_IMAGE_ASPECT_COLOR_BIT, 0, 0, 1}; copy.imageExtent = {image->width, image->height, 1};
        vkCmdCopyBufferToImage(p.command, p.FindBuffer(staging)->buffer, image->image, image->layout, 1, &copy);
        ok = p.Submit();
    }
    Destroy(staging);
    return ok;
}
bool VulkanHost::ReadImage(Resource id, std::vector<uint8_t>& out)
{
    auto& p = *impl; auto* image = p.FindImage(id);
    if (!image) return false;
    if (image->layout == VK_IMAGE_LAYOUT_UNDEFINED) return p.Fail("Cannot read an uninitialized image");
    std::vector<uint8_t> bytes(size_t(image->width) * image->height * 4);
    const auto staging = CreateBuffer(bytes.size(), VK_BUFFER_USAGE_TRANSFER_DST_BIT, true);
    if (!staging) return false;
    bool ok = p.Begin();
    if (ok)
    {
        p.Transition(*image, VK_IMAGE_LAYOUT_TRANSFER_SRC_OPTIMAL, VK_ACCESS_TRANSFER_READ_BIT);
        VkBufferImageCopy copy{};
        copy.imageSubresource = {image->Aspect(), 0, 0, 1}; copy.imageExtent = {image->width, image->height, 1};
        vkCmdCopyImageToBuffer(p.command, image->image, image->layout, p.FindBuffer(staging)->buffer, 1, &copy);
        VkMemoryBarrier barrier{VK_STRUCTURE_TYPE_MEMORY_BARRIER};
        barrier.srcAccessMask = VK_ACCESS_TRANSFER_WRITE_BIT; barrier.dstAccessMask = VK_ACCESS_HOST_READ_BIT;
        vkCmdPipelineBarrier(p.command, VK_PIPELINE_STAGE_TRANSFER_BIT, VK_PIPELINE_STAGE_HOST_BIT, 0, 1, &barrier, 0, nullptr, 0, nullptr);
        ok = p.Submit() && ReadBuffer(staging, bytes);
    }
    Destroy(staging);
    if (ok) out = std::move(bytes);
    return ok;
}

bool VulkanHost::ResizeSwapchain(uint32_t width, uint32_t height)
{
    auto& p = *impl;
    if (!p.Usable() || !p.surface) return p.Fail("No presentation surface");
    p.resizeNeeded = true;
    if (!width || !height) return false; // minimized, retry after a nonzero resize
    if (!p.Check(vkDeviceWaitIdle(p.device), "vkDeviceWaitIdle(resize)")) return false;
    VkSurfaceCapabilitiesKHR caps;
    if (!p.Check(vkGetPhysicalDeviceSurfaceCapabilitiesKHR(p.physical, p.surface, &caps), "vkGetPhysicalDeviceSurfaceCapabilitiesKHR")) return false;
    if (!(caps.supportedUsageFlags & VK_IMAGE_USAGE_TRANSFER_DST_BIT)) return p.Fail("Swapchain does not support transfer clears");
    uint32_t count = 0;
    if (!p.Check(vkGetPhysicalDeviceSurfaceFormatsKHR(p.physical, p.surface, &count, nullptr), "vkGetPhysicalDeviceSurfaceFormatsKHR") || !count)
        return p.Fail("No swapchain formats");
    std::vector<VkSurfaceFormatKHR> formats(count);
    if (!p.Check(vkGetPhysicalDeviceSurfaceFormatsKHR(p.physical, p.surface, &count, formats.data()), "vkGetPhysicalDeviceSurfaceFormatsKHR")) return false;
    auto format = formats.front();
    for (const auto& candidate : formats)
        if (candidate.format == VK_FORMAT_B8G8R8A8_UNORM && candidate.colorSpace == VK_COLOR_SPACE_SRGB_NONLINEAR_KHR)
            format = candidate;
    if (format.format == VK_FORMAT_UNDEFINED) format.format = VK_FORMAT_B8G8R8A8_UNORM;
    VkExtent2D extent = caps.currentExtent;
    if (extent.width == UINT32_MAX)
    {
        extent.width = std::clamp(width, caps.minImageExtent.width, caps.maxImageExtent.width);
        extent.height = std::clamp(height, caps.minImageExtent.height, caps.maxImageExtent.height);
    }
    if (!extent.width || !extent.height) return false;
    uint32_t imageCount = caps.minImageCount + 1;
    if (caps.maxImageCount) imageCount = std::min(imageCount, caps.maxImageCount);
    VkCompositeAlphaFlagBitsKHR alpha = VK_COMPOSITE_ALPHA_OPAQUE_BIT_KHR;
    for (auto candidate : {VK_COMPOSITE_ALPHA_OPAQUE_BIT_KHR, VK_COMPOSITE_ALPHA_PRE_MULTIPLIED_BIT_KHR,
                           VK_COMPOSITE_ALPHA_POST_MULTIPLIED_BIT_KHR, VK_COMPOSITE_ALPHA_INHERIT_BIT_KHR})
        if (caps.supportedCompositeAlpha & candidate) { alpha = candidate; break; }
    VkSwapchainCreateInfoKHR info{VK_STRUCTURE_TYPE_SWAPCHAIN_CREATE_INFO_KHR};
    info.surface = p.surface; info.minImageCount = imageCount;
    info.imageFormat = format.format; info.imageColorSpace = format.colorSpace; info.imageExtent = extent;
    info.imageArrayLayers = 1; info.imageUsage = VK_IMAGE_USAGE_TRANSFER_DST_BIT;
    info.imageSharingMode = VK_SHARING_MODE_EXCLUSIVE; info.preTransform = caps.currentTransform;
    info.compositeAlpha = alpha; info.presentMode = VK_PRESENT_MODE_FIFO_KHR; info.clipped = VK_TRUE;
    info.oldSwapchain = p.swapchain;
    VkSwapchainKHR replacement{};
    if (!p.Check(vkCreateSwapchainKHR(p.device, &info, nullptr, &replacement), "vkCreateSwapchainKHR")) return false;
    if (p.swapchain) vkDestroySwapchainKHR(p.device, p.swapchain, nullptr);
    p.swapchain = replacement;
    if (!p.Check(vkGetSwapchainImagesKHR(p.device, p.swapchain, &count, nullptr), "vkGetSwapchainImagesKHR")) { p.failed = true; return false; }
    p.swapImages.resize(count);
    if (!p.Check(vkGetSwapchainImagesKHR(p.device, p.swapchain, &count, p.swapImages.data()), "vkGetSwapchainImagesKHR")) { p.failed = true; return false; }
    // Reset semaphore state after out-of-date presentation, not merely the fence.
    if (p.acquired) vkDestroySemaphore(p.device, p.acquired, nullptr);
    if (p.rendered) vkDestroySemaphore(p.device, p.rendered, nullptr);
    p.acquired = {}; p.rendered = {};
    VkSemaphoreCreateInfo sem{VK_STRUCTURE_TYPE_SEMAPHORE_CREATE_INFO};
    if (!p.Check(vkCreateSemaphore(p.device, &sem, nullptr, &p.acquired), "vkCreateSemaphore(acquire)") ||
        !p.Check(vkCreateSemaphore(p.device, &sem, nullptr, &p.rendered), "vkCreateSemaphore(render)")) { p.failed = true; return false; }
    p.resizeNeeded = false;
    return true;
}
bool VulkanHost::SwapchainNeedsResize() const { return impl->resizeNeeded; }
bool VulkanHost::PresentClear(const std::array<float, 4>& color)
{
    auto& p = *impl;
    if (!p.Usable() || !p.swapchain || p.resizeNeeded) return false;
    if (!std::all_of(color.begin(), color.end(), [](float x) { return std::isfinite(x); })) return p.Fail("Invalid presentation clear color");
    uint32_t index = 0;
    auto result = vkAcquireNextImageKHR(p.device, p.swapchain, UINT64_MAX, p.acquired, VK_NULL_HANDLE, &index);
    if (result == VK_ERROR_OUT_OF_DATE_KHR) { p.resizeNeeded = true; return false; }
    const bool suboptimal = result == VK_SUBOPTIMAL_KHR;
    if (!suboptimal && !p.Check(result, "vkAcquireNextImageKHR")) return false;
    if (!p.Begin()) { p.failed = true; return false; } // acquired semaphore must not be reused
    VkImageMemoryBarrier barrier{VK_STRUCTURE_TYPE_IMAGE_MEMORY_BARRIER};
    barrier.dstAccessMask = VK_ACCESS_TRANSFER_WRITE_BIT;
    barrier.oldLayout = VK_IMAGE_LAYOUT_UNDEFINED; // explicitly discard old pixels
    barrier.newLayout = VK_IMAGE_LAYOUT_TRANSFER_DST_OPTIMAL;
    barrier.srcQueueFamilyIndex = barrier.dstQueueFamilyIndex = VK_QUEUE_FAMILY_IGNORED;
    barrier.image = p.swapImages.at(index); barrier.subresourceRange = {VK_IMAGE_ASPECT_COLOR_BIT, 0, 1, 0, 1};
    vkCmdPipelineBarrier(p.command, VK_PIPELINE_STAGE_ALL_COMMANDS_BIT, VK_PIPELINE_STAGE_TRANSFER_BIT,
        0, 0, nullptr, 0, nullptr, 1, &barrier);
    VkClearColorValue clear{}; std::copy(color.begin(), color.end(), clear.float32);
    vkCmdClearColorImage(p.command, barrier.image, VK_IMAGE_LAYOUT_TRANSFER_DST_OPTIMAL, &clear, 1, &barrier.subresourceRange);
    barrier.srcAccessMask = VK_ACCESS_TRANSFER_WRITE_BIT; barrier.dstAccessMask = 0;
    barrier.oldLayout = VK_IMAGE_LAYOUT_TRANSFER_DST_OPTIMAL; barrier.newLayout = VK_IMAGE_LAYOUT_PRESENT_SRC_KHR;
    vkCmdPipelineBarrier(p.command, VK_PIPELINE_STAGE_TRANSFER_BIT, VK_PIPELINE_STAGE_BOTTOM_OF_PIPE_BIT,
        0, 0, nullptr, 0, nullptr, 1, &barrier);
    if (!p.Submit(true)) return false;
    VkPresentInfoKHR present{VK_STRUCTURE_TYPE_PRESENT_INFO_KHR};
    present.waitSemaphoreCount = 1; present.pWaitSemaphores = &p.rendered;
    present.swapchainCount = 1; present.pSwapchains = &p.swapchain; present.pImageIndices = &index;
    result = vkQueuePresentKHR(p.queue, &present);
    // Graphics fence alone does not guarantee presentation consumed its semaphore.
    if (!p.Check(vkQueueWaitIdle(p.queue), "vkQueueWaitIdle(present)")) return false;
    if (result == VK_ERROR_OUT_OF_DATE_KHR || result == VK_SUBOPTIMAL_KHR || suboptimal) p.resizeNeeded = true;
    if (result == VK_ERROR_OUT_OF_DATE_KHR) return false;
    if (result != VK_SUBOPTIMAL_KHR && !p.Check(result, "vkQueuePresentKHR")) return false;
    ++p.stats.presents;
    return true;
}
} // namespace HostGpu
