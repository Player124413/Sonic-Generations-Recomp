#include <gpu/vulkan_state.h>
#include <gpu/vulkan_host.h>
#include <gpu/shader_cache.h>
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
    struct Pipeline
    {
        VkDevice device{};
        VkPipeline pipeline{};
        VkPipelineLayout layout{};
        VkRenderPass pass{};
        uint32_t stride{};
        bool game = false, preserve = false;
        std::array<VkDescriptorSetLayout, 4> sets{};
        ~Pipeline()
        {
            if (pipeline) vkDestroyPipeline(device, pipeline, nullptr);
            if (layout) vkDestroyPipelineLayout(device, layout, nullptr);
            if (pass) vkDestroyRenderPass(device, pass, nullptr);
            for (auto set : sets) if (set) vkDestroyDescriptorSetLayout(device, set, nullptr);
        }
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
    bool gameAbi = false;
    VkExtent2D swapExtent{};
    VkFormat swapFormat{};
    bool ready = false, failed = false, resizeNeeded = false;
    std::string error, adapter;
    VulkanStats stats;
    Resource nextId = 1;
    std::unordered_map<Resource, std::unique_ptr<Buffer>> buffers;
    std::unordered_map<Resource, std::unique_ptr<Image>> images;
    std::unordered_map<Resource, std::unique_ptr<Pipeline>> pipelines;

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
        if ((usage & VK_BUFFER_USAGE_SHADER_DEVICE_ADDRESS_BIT) && !gameAbi) { Fail("Buffer device address ABI unavailable"); return {}; }
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
        VkMemoryAllocateFlagsInfo flags{VK_STRUCTURE_TYPE_MEMORY_ALLOCATE_FLAGS_INFO};
        flags.flags = VK_MEMORY_ALLOCATE_DEVICE_ADDRESS_BIT;
        VkMemoryAllocateInfo alloc{VK_STRUCTURE_TYPE_MEMORY_ALLOCATE_INFO};
        if (usage & VK_BUFFER_USAGE_SHADER_DEVICE_ADDRESS_BIT) alloc.pNext = &flags;
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
        vkCmdPipelineBarrier(command, VK_PIPELINE_STAGE_ALL_COMMANDS_BIT,
            (access & VK_ACCESS_SHADER_READ_BIT) ? VK_PIPELINE_STAGE_VERTEX_SHADER_BIT | VK_PIPELINE_STAGE_FRAGMENT_SHADER_BIT : VK_PIPELINE_STAGE_TRANSFER_BIT,
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
        pipelines.clear(); buffers.clear(); images.clear(); stats.allocatedBytes = 0;
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
        failed = false; resizeNeeded = false; gameAbi = false;
    }
    ~Impl() { Shutdown(); }
};

VulkanHost::VulkanHost() : impl(std::make_unique<Impl>()) {}
VulkanHost::~VulkanHost() = default;
bool VulkanHost::SupportsGenerationsAbi() const { return impl->gameAbi; }
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
    app.pApplicationName = "Sonic Generations Vulkan host"; app.apiVersion = VK_API_VERSION_1_2;
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
    VkPhysicalDeviceFeatures available{}, enabled{};
    vkGetPhysicalDeviceFeatures(p.physical, &available);
    enabled.robustBufferAccess = available.robustBufferAccess;
    VkPhysicalDeviceVulkan12Features supported12{VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_VULKAN_1_2_FEATURES};
    VkPhysicalDeviceFeatures2 features{VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_FEATURES_2};
    features.pNext = &supported12;
    vkGetPhysicalDeviceFeatures2(p.physical, &features);
    VkPhysicalDeviceVulkan12Features enabled12{VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_VULKAN_1_2_FEATURES};
    p.gameAbi = properties.apiVersion >= VK_API_VERSION_1_2 && properties.limits.maxPerStageDescriptorSampledImages >= 32 &&
        properties.limits.maxPerStageDescriptorSamplers >= 32 && available.shaderInt64 && available.shaderClipDistance &&
        available.shaderSampledImageArrayDynamicIndexing && supported12.bufferDeviceAddress &&
        supported12.scalarBlockLayout && supported12.runtimeDescriptorArray &&
        supported12.descriptorBindingPartiallyBound && supported12.shaderSampledImageArrayNonUniformIndexing;
    if (p.gameAbi)
    {
        enabled.shaderClipDistance = enabled.shaderInt64 = enabled.shaderSampledImageArrayDynamicIndexing = VK_TRUE;
        enabled12.bufferDeviceAddress = enabled12.scalarBlockLayout = enabled12.runtimeDescriptorArray = VK_TRUE;
        enabled12.descriptorBindingPartiallyBound = enabled12.shaderSampledImageArrayNonUniformIndexing = VK_TRUE;
    }

    VkDeviceCreateInfo deviceInfo{VK_STRUCTURE_TYPE_DEVICE_CREATE_INFO};
    deviceInfo.pEnabledFeatures = &enabled;
    if (p.gameAbi) deviceInfo.pNext = &enabled12;
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
    if (p.buffers.size() + p.images.size() + p.pipelines.size() >= Impl::MaxResources || p.nextId == UINT64_MAX)
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
        uint64_t(width) * height > Impl::MaxAllocation / 4 || p.buffers.size() + p.images.size() + p.pipelines.size() >= Impl::MaxResources || p.nextId == UINT64_MAX)
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
namespace
{
    bool SimpleShader(std::span<const uint32_t> words)
    {
        if (words.size() < 5 || words.size() > 256 * 1024 || words[0] != 0x07230203u || words[1] != 0x00010000u || words[4] != 0) return false;
        for (size_t offset = 5; offset < words.size();)
        {
            const uint32_t count = words[offset] >> 16, opcode = words[offset] & 0xFFFF;
            if (!count || count > words.size() - offset) return false;
            // This descriptor-free profile cannot satisfy a game's shader ABI.
            if (opcode == 71 && count >= 3 && (words[offset + 2] == 33 || words[offset + 2] == 34)) return false;
            if (opcode == 59 && count >= 4 && words[offset + 3] == 9) return false; // push constant variable
            offset += count;
        }
        return true;
    }
    struct ShaderModule
    {
        VkDevice device{};
        VkShaderModule module{};
        ~ShaderModule() { if (module) vkDestroyShaderModule(device, module, nullptr); }
    };
}
Resource VulkanHost::CreateGraphicsPipeline(const GraphicsPipelineInfo& input)
{
    auto& p = *impl;
    if (!p.Usable()) return 0;
    VkPhysicalDeviceProperties limits;
    vkGetPhysicalDeviceProperties(p.physical, &limits);
    if ((input.cullMode & ~uint32_t(VK_CULL_MODE_FRONT_AND_BACK)) ||
        (input.frontFace != VK_FRONT_FACE_CLOCKWISE && input.frontFace != VK_FRONT_FACE_COUNTER_CLOCKWISE) ||
        uint32_t(input.depthCompare) > uint32_t(VK_COMPARE_OP_ALWAYS))
    { p.Fail("Invalid graphics state enum"); return 0; }
    GuestGpu::ShaderModule vsInfo, psInfo;
    std::string shaderError;
    bool validShaders = SimpleShader(input.vertexShader) && SimpleShader(input.fragmentShader);
    if (input.generationsAbi)
    {
        validShaders = p.gameAbi && GuestGpu::InspectShader(input.vertexShader, vsInfo, shaderError) &&
            GuestGpu::InspectShader(input.fragmentShader, psInfo, shaderError) && vsInfo.stage == 0 && psInfo.stage == 4 &&
            input.vertexEntry && input.fragmentEntry && vsInfo.entryPoint == input.vertexEntry && psInfo.entryPoint == input.fragmentEntry;
        for (const auto* module : {&vsInfo, &psInfo})
            for (const auto& binding : module->bindings)
                validShaders &= (binding.set == 0 || binding.set == 3) && binding.binding == 0 && binding.storage == 0;
    }
    if (!validShaders || !input.vertexStride ||
        input.vertexStride > limits.limits.maxVertexInputBindingStride || input.attributes.empty() || input.attributes.size() > 32 ||
        p.buffers.size() + p.images.size() + p.pipelines.size() >= Impl::MaxResources || p.nextId == UINT64_MAX)
    { p.Fail("Invalid/unsupported graphics shader ABI or pipeline input"); return 0; }
    uint32_t locations = 0;
    for (const auto& attribute : input.attributes)
    {
        const uint32_t bytes = VertexFormatSize(attribute.format);
        if(!bytes) { p.Fail("Unsupported vertex format"); return 0; }
        VkFormatProperties properties{};
        vkGetPhysicalDeviceFormatProperties(p.physical,attribute.format,&properties);
        if (!bytes || !(properties.bufferFeatures & VK_FORMAT_FEATURE_VERTEX_BUFFER_BIT) || attribute.binding != 0 || attribute.location >= 32 || (locations & (1u << attribute.location)) ||
            attribute.offset > input.vertexStride || bytes > input.vertexStride - attribute.offset ||
            attribute.offset > limits.limits.maxVertexInputAttributeOffset)
        { p.Fail("Unsupported vertex attribute in initial graphics profile"); return 0; }
        locations |= 1u << attribute.location;
    }
    ShaderModule vertex{p.device}, fragment{p.device};
    VkShaderModuleCreateInfo shader{VK_STRUCTURE_TYPE_SHADER_MODULE_CREATE_INFO};
    shader.codeSize = input.vertexShader.size_bytes(); shader.pCode = input.vertexShader.data();
    if (!p.Check(vkCreateShaderModule(p.device, &shader, nullptr, &vertex.module), "vkCreateShaderModule(vertex)")) return 0;
    shader.codeSize = input.fragmentShader.size_bytes(); shader.pCode = input.fragmentShader.data();
    if (!p.Check(vkCreateShaderModule(p.device, &shader, nullptr, &fragment.module), "vkCreateShaderModule(fragment)")) return 0;
    auto pipeline = std::make_unique<Impl::Pipeline>(); pipeline->device = p.device; pipeline->stride = input.vertexStride;
    pipeline->game = input.generationsAbi; pipeline->preserve = input.preserveTargets;
    if (pipeline->game)
    {
        for (uint32_t set = 0; set < 4; ++set)
        {
            VkDescriptorSetLayoutBinding binding{};
            binding.binding = 0; binding.descriptorCount = 32;
            binding.descriptorType = set == 3 ? VK_DESCRIPTOR_TYPE_SAMPLER : VK_DESCRIPTOR_TYPE_SAMPLED_IMAGE;
            binding.stageFlags = VK_SHADER_STAGE_VERTEX_BIT | VK_SHADER_STAGE_FRAGMENT_BIT;
            VkDescriptorBindingFlags flag = VK_DESCRIPTOR_BINDING_PARTIALLY_BOUND_BIT;
            VkDescriptorSetLayoutBindingFlagsCreateInfo flags{VK_STRUCTURE_TYPE_DESCRIPTOR_SET_LAYOUT_BINDING_FLAGS_CREATE_INFO};
            flags.bindingCount = 1; flags.pBindingFlags = &flag;
            VkDescriptorSetLayoutCreateInfo info{VK_STRUCTURE_TYPE_DESCRIPTOR_SET_LAYOUT_CREATE_INFO};
            if (set == 0 || set == 3) { info.bindingCount = 1; info.pBindings = &binding; info.pNext = &flags; }
            if (!p.Check(vkCreateDescriptorSetLayout(p.device, &info, nullptr, &pipeline->sets[set]), "vkCreateDescriptorSetLayout")) return 0;
        }
    }
    const VkPushConstantRange push{VK_SHADER_STAGE_VERTEX_BIT | VK_SHADER_STAGE_FRAGMENT_BIT, 0, 24};
    VkPipelineLayoutCreateInfo layout{VK_STRUCTURE_TYPE_PIPELINE_LAYOUT_CREATE_INFO};
    if (pipeline->game)
    {
        layout.setLayoutCount = 4; layout.pSetLayouts = pipeline->sets.data();
        layout.pushConstantRangeCount = 1; layout.pPushConstantRanges = &push;
    }
    if (!p.Check(vkCreatePipelineLayout(p.device, &layout, nullptr, &pipeline->layout), "vkCreatePipelineLayout")) return 0;
    std::array<VkAttachmentDescription, 2> attachments{};
    attachments[0].format = VK_FORMAT_R8G8B8A8_UNORM;
    attachments[0].samples = VK_SAMPLE_COUNT_1_BIT;
    attachments[0].loadOp = input.preserveTargets ? VK_ATTACHMENT_LOAD_OP_LOAD : VK_ATTACHMENT_LOAD_OP_CLEAR; attachments[0].storeOp = VK_ATTACHMENT_STORE_OP_STORE;
    attachments[0].stencilLoadOp = VK_ATTACHMENT_LOAD_OP_DONT_CARE; attachments[0].stencilStoreOp = VK_ATTACHMENT_STORE_OP_DONT_CARE;
    attachments[0].initialLayout = attachments[0].finalLayout = VK_IMAGE_LAYOUT_COLOR_ATTACHMENT_OPTIMAL;
    attachments[1] = attachments[0]; attachments[1].format = VK_FORMAT_D32_SFLOAT;
    attachments[1].initialLayout = attachments[1].finalLayout = VK_IMAGE_LAYOUT_DEPTH_STENCIL_ATTACHMENT_OPTIMAL;
    const VkAttachmentReference color{0, VK_IMAGE_LAYOUT_COLOR_ATTACHMENT_OPTIMAL}, depth{1, VK_IMAGE_LAYOUT_DEPTH_STENCIL_ATTACHMENT_OPTIMAL};
    VkSubpassDescription subpass{}; subpass.pipelineBindPoint = VK_PIPELINE_BIND_POINT_GRAPHICS;
    subpass.colorAttachmentCount = 1; subpass.pColorAttachments = &color; subpass.pDepthStencilAttachment = &depth;
    VkRenderPassCreateInfo pass{VK_STRUCTURE_TYPE_RENDER_PASS_CREATE_INFO};
    pass.attachmentCount = uint32_t(attachments.size()); pass.pAttachments = attachments.data();
    pass.subpassCount = 1; pass.pSubpasses = &subpass;
    if (!p.Check(vkCreateRenderPass(p.device, &pass, nullptr, &pipeline->pass), "vkCreateRenderPass")) return 0;
    std::array<VkPipelineShaderStageCreateInfo, 2> stages{};
    for (auto& stage : stages) { stage.sType = VK_STRUCTURE_TYPE_PIPELINE_SHADER_STAGE_CREATE_INFO; stage.pName = "main"; }
    stages[0].pName = input.vertexEntry; stages[1].pName = input.fragmentEntry;
    const VkSpecializationMapEntry specEntry{0, 0, sizeof(uint32_t)};
    const VkSpecializationInfo spec{1, &specEntry, sizeof(uint32_t), &input.specialization};
    if (pipeline->game) for (auto& stage : stages) stage.pSpecializationInfo = &spec;
    stages[0].stage = VK_SHADER_STAGE_VERTEX_BIT; stages[0].module = vertex.module;
    stages[1].stage = VK_SHADER_STAGE_FRAGMENT_BIT; stages[1].module = fragment.module;
    const VkVertexInputBindingDescription binding{0, input.vertexStride, VK_VERTEX_INPUT_RATE_VERTEX};
    VkPipelineVertexInputStateCreateInfo vi{VK_STRUCTURE_TYPE_PIPELINE_VERTEX_INPUT_STATE_CREATE_INFO};
    vi.vertexBindingDescriptionCount = 1; vi.pVertexBindingDescriptions = &binding;
    vi.vertexAttributeDescriptionCount = uint32_t(input.attributes.size()); vi.pVertexAttributeDescriptions = input.attributes.data();
    VkPipelineInputAssemblyStateCreateInfo assembly{VK_STRUCTURE_TYPE_PIPELINE_INPUT_ASSEMBLY_STATE_CREATE_INFO};
    assembly.topology = VK_PRIMITIVE_TOPOLOGY_TRIANGLE_LIST;
    VkPipelineViewportStateCreateInfo viewport{VK_STRUCTURE_TYPE_PIPELINE_VIEWPORT_STATE_CREATE_INFO};
    viewport.viewportCount = viewport.scissorCount = 1;
    VkPipelineRasterizationStateCreateInfo raster{VK_STRUCTURE_TYPE_PIPELINE_RASTERIZATION_STATE_CREATE_INFO};
    raster.polygonMode = VK_POLYGON_MODE_FILL; raster.lineWidth = 1; raster.cullMode = input.cullMode; raster.frontFace = input.frontFace;
    VkPipelineMultisampleStateCreateInfo samples{VK_STRUCTURE_TYPE_PIPELINE_MULTISAMPLE_STATE_CREATE_INFO};
    samples.rasterizationSamples = VK_SAMPLE_COUNT_1_BIT;
    VkPipelineDepthStencilStateCreateInfo ds{VK_STRUCTURE_TYPE_PIPELINE_DEPTH_STENCIL_STATE_CREATE_INFO};
    ds.depthTestEnable = input.depthTest; ds.depthWriteEnable = input.depthWrite; ds.depthCompareOp = input.depthCompare;
    VkPipelineColorBlendAttachmentState blend{}; blend.colorWriteMask = 15;
    if (pipeline->game) blend = input.blend;
    VkPipelineColorBlendStateCreateInfo colorBlend{VK_STRUCTURE_TYPE_PIPELINE_COLOR_BLEND_STATE_CREATE_INFO};
    colorBlend.attachmentCount = 1; colorBlend.pAttachments = &blend;
    constexpr VkDynamicState dynamicStates[] = {VK_DYNAMIC_STATE_VIEWPORT, VK_DYNAMIC_STATE_SCISSOR};
    VkPipelineDynamicStateCreateInfo dynamic{VK_STRUCTURE_TYPE_PIPELINE_DYNAMIC_STATE_CREATE_INFO};
    dynamic.dynamicStateCount = 2; dynamic.pDynamicStates = dynamicStates;
    VkGraphicsPipelineCreateInfo info{VK_STRUCTURE_TYPE_GRAPHICS_PIPELINE_CREATE_INFO};
    info.stageCount = 2; info.pStages = stages.data(); info.pVertexInputState = &vi; info.pInputAssemblyState = &assembly;
    info.pViewportState = &viewport; info.pRasterizationState = &raster; info.pMultisampleState = &samples;
    info.pDepthStencilState = &ds; info.pColorBlendState = &colorBlend; info.pDynamicState = &dynamic;
    info.layout = pipeline->layout; info.renderPass = pipeline->pass;
    if (!p.Check(vkCreateGraphicsPipelines(p.device, VK_NULL_HANDLE, 1, &info, nullptr, &pipeline->pipeline), "vkCreateGraphicsPipelines")) return 0;
    const auto id = p.nextId++;
    p.pipelines.emplace(id, std::move(pipeline)); ++p.stats.pipelinesCreated;
    return id;
}
bool VulkanHost::DrawIndexed(Resource pipelineId, Resource colorId, Resource depthId,
    Resource verticesId, Resource indicesId, uint32_t count, VkIndexType indexType, const std::array<float, 4>& clearColor, const GameDrawBindings* game)
{
    auto& p = *impl;
    if (!p.Usable()) return false;
    auto it = p.pipelines.find(pipelineId);
    if (it == p.pipelines.end()) return p.Fail("Invalid/stale graphics pipeline");
    auto& pipeline = *it->second;
    auto* color = p.FindImage(colorId); auto* depth = p.FindImage(depthId);
    auto* vertices = p.FindBuffer(verticesId); auto* indices = p.FindBuffer(indicesId);
    if (!color || !depth || !vertices || !indices) return false;
    const uint32_t indexSize = indexType == VK_INDEX_TYPE_UINT16 ? 2 : indexType == VK_INDEX_TYPE_UINT32 ? 4 : 0;
    if (color->kind != ImageKind::Rgba8 || depth->kind != ImageKind::Depth32 || color->width != depth->width || color->height != depth->height ||
        !indexSize || !count || count % 3 || uint64_t(count) * indexSize > indices->size || vertices->size < pipeline.stride ||
        !(vertices->usage & VK_BUFFER_USAGE_VERTEX_BUFFER_BIT) || !(indices->usage & VK_BUFFER_USAGE_INDEX_BUFFER_BIT) ||
        !std::all_of(clearColor.begin(), clearColor.end(), [](float x) { return std::isfinite(x); }))
        return p.Fail("Invalid indexed draw range, target, or vertex/index resource");
    if (pipeline.game != (game != nullptr)) return p.Fail("Graphics pipeline/bindings ABI mismatch");
    if (pipeline.preserve && (color->layout == VK_IMAGE_LAYOUT_UNDEFINED || depth->layout == VK_IMAGE_LAYOUT_UNDEFINED))
        return p.Fail("Cannot load undefined render targets");
    struct Descriptors
    {
        VkDevice device;
        VkDescriptorPool pool{};
        std::array<VkSampler, 32> samplers{};
        ~Descriptors() { if (pool) vkDestroyDescriptorPool(device, pool, nullptr); for(auto s:samplers) if(s) vkDestroySampler(device,s,nullptr); }
    } descriptors{p.device};
    std::array<VkDescriptorSet,4> sets{};
    std::array<uint64_t,3> addresses{};
    std::vector<Impl::Image*> sampled;
    if (game)
    {
        auto* constants=p.FindBuffer(game->constants); auto* shared=p.FindBuffer(game->shared);
        if (!constants || !shared || constants->size < 8192 || shared->size < 320 ||
            !(constants->usage & VK_BUFFER_USAGE_SHADER_DEVICE_ADDRESS_BIT) || !(shared->usage & VK_BUFFER_USAGE_SHADER_DEVICE_ADDRESS_BIT))
            return p.Fail("Missing shader-address constant buffers");
        const auto& v=game->viewport; const auto& r=game->scissor;
        if (!std::isfinite(v.x)||!std::isfinite(v.y)||!std::isfinite(v.width)||!std::isfinite(v.height)||
            !std::isfinite(v.minDepth)||!std::isfinite(v.maxDepth)||v.width<=0||v.height<=0||
            v.minDepth<0||v.maxDepth>1||v.minDepth>v.maxDepth||r.offset.x<0||r.offset.y<0||
            uint64_t(r.offset.x)+r.extent.width>color->width||uint64_t(r.offset.y)+r.extent.height>color->height)
            return p.Fail("Invalid game viewport/scissor");
        VkBufferDeviceAddressInfo address{VK_STRUCTURE_TYPE_BUFFER_DEVICE_ADDRESS_INFO};
        address.buffer=constants->buffer; addresses[0]=vkGetBufferDeviceAddress(p.device,&address); addresses[1]=addresses[0]+4096;
        address.buffer=shared->buffer; addresses[2]=vkGetBufferDeviceAddress(p.device,&address);
        if (!addresses[0] || !addresses[2]) return p.Fail("Zero shader buffer address");
        const VkDescriptorPoolSize sizes[]={{VK_DESCRIPTOR_TYPE_SAMPLED_IMAGE,32},{VK_DESCRIPTOR_TYPE_SAMPLER,32}};
        VkDescriptorPoolCreateInfo pool{VK_STRUCTURE_TYPE_DESCRIPTOR_POOL_CREATE_INFO};
        pool.maxSets=4; pool.poolSizeCount=2; pool.pPoolSizes=sizes;
        if (!p.Check(vkCreateDescriptorPool(p.device,&pool,nullptr,&descriptors.pool),"vkCreateDescriptorPool")) return false;
        VkDescriptorSetAllocateInfo allocate{VK_STRUCTURE_TYPE_DESCRIPTOR_SET_ALLOCATE_INFO};
        allocate.descriptorPool=descriptors.pool; allocate.descriptorSetCount=4; allocate.pSetLayouts=pipeline.sets.data();
        if (!p.Check(vkAllocateDescriptorSets(p.device,&allocate,sets.data()),"vkAllocateDescriptorSets")) return false;
        uint32_t slots=0;
        for (const auto& texture:game->textures)
        {
            if (texture.slot>=32 || (slots & (1u<<texture.slot)) || texture.image==colorId || texture.image==depthId ||
                (texture.filter!=VK_FILTER_NEAREST && texture.filter!=VK_FILTER_LINEAR) ||
                uint32_t(texture.u)>uint32_t(VK_SAMPLER_ADDRESS_MODE_CLAMP_TO_EDGE) || uint32_t(texture.v)>uint32_t(VK_SAMPLER_ADDRESS_MODE_CLAMP_TO_EDGE))
                return p.Fail("Invalid sampled image binding or render feedback loop");
            slots |= 1u<<texture.slot;
            auto* image=p.FindImage(texture.image);
            if (!image || image->kind!=ImageKind::Rgba8 || image->layout==VK_IMAGE_LAYOUT_UNDEFINED) return p.Fail("Invalid/uninitialized sampled image");
            VkSamplerCreateInfo sampler{VK_STRUCTURE_TYPE_SAMPLER_CREATE_INFO};
            sampler.minFilter=sampler.magFilter=texture.filter; sampler.mipmapMode=VK_SAMPLER_MIPMAP_MODE_NEAREST;
            sampler.addressModeU=texture.u; sampler.addressModeV=texture.v; sampler.addressModeW=VK_SAMPLER_ADDRESS_MODE_CLAMP_TO_EDGE;
            if (!p.Check(vkCreateSampler(p.device,&sampler,nullptr,&descriptors.samplers[texture.slot]),"vkCreateSampler")) return false;
            const VkDescriptorImageInfo imageInfo{VK_NULL_HANDLE,image->view,VK_IMAGE_LAYOUT_SHADER_READ_ONLY_OPTIMAL};
            const VkDescriptorImageInfo samplerInfo{descriptors.samplers[texture.slot],VK_NULL_HANDLE,VK_IMAGE_LAYOUT_UNDEFINED};
            VkWriteDescriptorSet writes[2]{};
            for (auto& write:writes) { write.sType=VK_STRUCTURE_TYPE_WRITE_DESCRIPTOR_SET; write.dstArrayElement=texture.slot; write.descriptorCount=1; }
            writes[0].dstSet=sets[0]; writes[0].descriptorType=VK_DESCRIPTOR_TYPE_SAMPLED_IMAGE; writes[0].pImageInfo=&imageInfo;
            writes[1].dstSet=sets[3]; writes[1].descriptorType=VK_DESCRIPTOR_TYPE_SAMPLER; writes[1].pImageInfo=&samplerInfo;
            vkUpdateDescriptorSets(p.device,2,writes,0,nullptr);
            sampled.push_back(image);
        }
    }
    const VkImageView views[] = {color->view, depth->view};
    VkFramebufferCreateInfo fi{VK_STRUCTURE_TYPE_FRAMEBUFFER_CREATE_INFO};
    fi.renderPass = pipeline.pass; fi.attachmentCount = 2; fi.pAttachments = views;
    fi.width = color->width; fi.height = color->height; fi.layers = 1;
    VkFramebuffer framebuffer{};
    if (!p.Check(vkCreateFramebuffer(p.device, &fi, nullptr, &framebuffer), "vkCreateFramebuffer")) return false;
    bool ok = p.Begin();
    if (ok)
    {
        for(auto* image:sampled) p.Transition(*image,VK_IMAGE_LAYOUT_SHADER_READ_ONLY_OPTIMAL,VK_ACCESS_SHADER_READ_BIT);
        for (auto* image : {color, depth})
        {
            VkImageMemoryBarrier barrier{VK_STRUCTURE_TYPE_IMAGE_MEMORY_BARRIER};
            barrier.srcAccessMask = image->layout == VK_IMAGE_LAYOUT_UNDEFINED ? 0 : VK_ACCESS_MEMORY_READ_BIT | VK_ACCESS_MEMORY_WRITE_BIT;
            barrier.dstAccessMask = image == color ? VK_ACCESS_COLOR_ATTACHMENT_READ_BIT | VK_ACCESS_COLOR_ATTACHMENT_WRITE_BIT : VK_ACCESS_DEPTH_STENCIL_ATTACHMENT_READ_BIT | VK_ACCESS_DEPTH_STENCIL_ATTACHMENT_WRITE_BIT;
            barrier.oldLayout = image->layout;
            barrier.newLayout = image == color ? VK_IMAGE_LAYOUT_COLOR_ATTACHMENT_OPTIMAL : VK_IMAGE_LAYOUT_DEPTH_STENCIL_ATTACHMENT_OPTIMAL;
            barrier.srcQueueFamilyIndex = barrier.dstQueueFamilyIndex = VK_QUEUE_FAMILY_IGNORED;
            barrier.image = image->image; barrier.subresourceRange = {image->Aspect(), 0, 1, 0, 1};
            vkCmdPipelineBarrier(p.command, VK_PIPELINE_STAGE_ALL_COMMANDS_BIT,
                VK_PIPELINE_STAGE_COLOR_ATTACHMENT_OUTPUT_BIT | VK_PIPELINE_STAGE_EARLY_FRAGMENT_TESTS_BIT | VK_PIPELINE_STAGE_LATE_FRAGMENT_TESTS_BIT,
                0, 0, nullptr, 0, nullptr, 1, &barrier);
            image->layout = barrier.newLayout;
        }
        VkClearValue clears[2]{};
        std::copy(clearColor.begin(), clearColor.end(), clears[0].color.float32);
        clears[1].depthStencil = {1.0f, 0};
        VkRenderPassBeginInfo begin{VK_STRUCTURE_TYPE_RENDER_PASS_BEGIN_INFO};
        begin.renderPass = pipeline.pass; begin.framebuffer = framebuffer;
        begin.renderArea.extent = {color->width, color->height}; begin.clearValueCount = 2; begin.pClearValues = clears;
        vkCmdBeginRenderPass(p.command, &begin, VK_SUBPASS_CONTENTS_INLINE);
        vkCmdBindPipeline(p.command, VK_PIPELINE_BIND_POINT_GRAPHICS, pipeline.pipeline);
        if (game)
        {
            vkCmdBindDescriptorSets(p.command,VK_PIPELINE_BIND_POINT_GRAPHICS,pipeline.layout,0,4,sets.data(),0,nullptr);
            vkCmdPushConstants(p.command,pipeline.layout,VK_SHADER_STAGE_VERTEX_BIT|VK_SHADER_STAGE_FRAGMENT_BIT,0,24,addresses.data());
        }
        const VkDeviceSize offset = 0;
        vkCmdBindVertexBuffers(p.command, 0, 1, &vertices->buffer, &offset);
        vkCmdBindIndexBuffer(p.command, indices->buffer, 0, indexType);
        const VkViewport viewport=game ? game->viewport : VkViewport{0, 0, float(color->width), float(color->height), 0, 1};
        const VkRect2D scissor=game ? game->scissor : VkRect2D{{0, 0}, {color->width, color->height}};
        vkCmdSetViewport(p.command, 0, 1, &viewport); vkCmdSetScissor(p.command, 0, 1, &scissor);
        vkCmdDrawIndexed(p.command, count, 1, 0, game ? game->baseVertex : 0, 0);
        vkCmdEndRenderPass(p.command);
        ok = p.Submit();
        if (ok) ++p.stats.indexedDraws;
    }
    vkDestroyFramebuffer(p.device, framebuffer, nullptr);
    return ok;
}
bool VulkanHost::Destroy(Resource id)
{
    auto& p = *impl;
    if (auto it = p.buffers.find(id); it != p.buffers.end())
    { p.stats.allocatedBytes -= it->second->allocation; p.buffers.erase(it); return true; }
    if (auto it = p.images.find(id); it != p.images.end())
    { p.stats.allocatedBytes -= it->second->allocation; p.images.erase(it); return true; }
    if (auto it = p.pipelines.find(id); it != p.pipelines.end())
    { p.pipelines.erase(it); return true; }
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
    p.swapchain = replacement; p.swapExtent = extent; p.swapFormat = format.format;
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
bool VulkanHost::PresentClear(const std::array<float, 4>& color) { return PresentFrame(0,color); }
bool VulkanHost::PresentImage(Resource image) { return image ? PresentFrame(image,{0,0,0,1}) : impl->Fail("Invalid presentation image"); }
bool VulkanHost::PresentFrame(Resource sourceId, const std::array<float, 4>& color)
{
    auto& p = *impl;
    if (!p.Usable() || !p.swapchain || p.resizeNeeded) return false;
    if (!std::all_of(color.begin(), color.end(), [](float x) { return std::isfinite(x); })) return p.Fail("Invalid presentation clear color");
    Impl::Image* source=nullptr;
    if (sourceId)
    {
        source=p.FindImage(sourceId);
        if (!source || source->kind!=ImageKind::Rgba8 || source->layout==VK_IMAGE_LAYOUT_UNDEFINED) return p.Fail("Invalid image for presentation");
        VkFormatProperties src{}, dst{};
        vkGetPhysicalDeviceFormatProperties(p.physical,VK_FORMAT_R8G8B8A8_UNORM,&src);
        vkGetPhysicalDeviceFormatProperties(p.physical,p.swapFormat,&dst);
        if (!(src.optimalTilingFeatures & VK_FORMAT_FEATURE_BLIT_SRC_BIT) || !(dst.optimalTilingFeatures & VK_FORMAT_FEATURE_BLIT_DST_BIT))
            return p.Fail("Swapchain image blit unsupported");
    }
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
    if (source)
    {
        p.Transition(*source,VK_IMAGE_LAYOUT_TRANSFER_SRC_OPTIMAL,VK_ACCESS_TRANSFER_READ_BIT);
        VkImageBlit blit{};
        blit.srcSubresource=blit.dstSubresource={VK_IMAGE_ASPECT_COLOR_BIT,0,0,1};
        blit.srcOffsets[1]={int32_t(source->width),int32_t(source->height),1};
        blit.dstOffsets[1]={int32_t(p.swapExtent.width),int32_t(p.swapExtent.height),1};
        vkCmdBlitImage(p.command,source->image,source->layout,barrier.image,VK_IMAGE_LAYOUT_TRANSFER_DST_OPTIMAL,1,&blit,VK_FILTER_NEAREST);
    }
    else vkCmdClearColorImage(p.command, barrier.image, VK_IMAGE_LAYOUT_TRANSFER_DST_OPTIMAL, &clear, 1, &barrier.subresourceRange);
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
