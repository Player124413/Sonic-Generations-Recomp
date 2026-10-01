#include "native_vulkan_api.h"

#include <cstring>

#include "native_log.h"

#if defined(VK_USE_PLATFORM_WIN32_KHR)
#include <windows.h>
#else
// The plugin is a Windows binary; this branch exists so the file can be
// syntax-checked on a host without Windows headers. It never links on other
// platforms.
namespace {
HMODULE LoadLibraryW(const wchar_t*) { return nullptr; }
void* GetProcAddress(HMODULE, const char*) { return nullptr; }
BOOL FreeLibrary(HMODULE) { return 0; }
}  // namespace
#endif

namespace sonic::rex_host::gpu::vk {
namespace {

/// Resolves through `resolver` and reports the first missing symbol, so a
/// driver (or a stale header/driver pair) that lacks something is a clear
/// message instead of a null call later.
template <typename T>
bool Resolve(PFN_vkVoidFunction (*resolver)(void*, const char*), void* handle, T& function,
             const char* name, std::string& error) {
    function = reinterpret_cast<T>(resolver(handle, name));
    if (!function) {
        error = std::string("vulkan-1.dll has no ") + name;
        return false;
    }
    return true;
}

PFN_vkVoidFunction InstanceResolver(void* instance, const char* name) {
    return vkGetInstanceProcAddr(reinterpret_cast<VkInstance>(instance), name);
}

PFN_vkVoidFunction DeviceResolver(void* device, const char* name) {
    return vkGetDeviceProcAddr(reinterpret_cast<VkDevice>(device), name);
}

/// The instance-level entry points. vkGetInstanceProcAddr(instance, ...) also
/// resolves global functions, but they were already fetched from the loader.
bool LoadInstanceFunctions(void* instance, Api& api, std::string& error) {
    const auto resolve = [instance, &error](auto& function, const char* name) {
        return Resolve(InstanceResolver, instance, function, name, error);
    };
    return resolve(api.DestroyInstance, "vkDestroyInstance") &&
           resolve(api.EnumeratePhysicalDevices, "vkEnumeratePhysicalDevices") &&
           resolve(api.GetPhysicalDeviceProperties, "vkGetPhysicalDeviceProperties") &&
           resolve(api.GetPhysicalDeviceFeatures, "vkGetPhysicalDeviceFeatures") &&
           resolve(api.GetPhysicalDeviceQueueFamilyProperties,
                   "vkGetPhysicalDeviceQueueFamilyProperties") &&
           resolve(api.GetPhysicalDeviceMemoryProperties, "vkGetPhysicalDeviceMemoryProperties") &&
           resolve(api.GetPhysicalDeviceSurfaceSupportKHR, "vkGetPhysicalDeviceSurfaceSupportKHR") &&
           resolve(api.GetPhysicalDeviceSurfaceCapabilitiesKHR,
                   "vkGetPhysicalDeviceSurfaceCapabilitiesKHR") &&
           resolve(api.GetPhysicalDeviceSurfaceFormatsKHR,
                   "vkGetPhysicalDeviceSurfaceFormatsKHR") &&
           resolve(api.GetPhysicalDeviceSurfacePresentModesKHR,
                   "vkGetPhysicalDeviceSurfacePresentModesKHR") &&
           resolve(api.DestroySurfaceKHR, "vkDestroySurfaceKHR") &&
           resolve(api.CreateWin32SurfaceKHR, "vkCreateWin32SurfaceKHR") &&
           resolve(api.GetDeviceProcAddr, "vkGetDeviceProcAddr") &&
           resolve(api.CreateDevice, "vkCreateDevice");
}

bool LoadDeviceFunctions(void* device, Api& api, std::string& error) {
    const auto resolve = [device, &error](auto& function, const char* name) {
        return Resolve(DeviceResolver, device, function, name, error);
    };
    return resolve(api.GetDeviceQueue, "vkGetDeviceQueue") &&
           resolve(api.DestroyDevice, "vkDestroyDevice") &&
           resolve(api.DeviceWaitIdle, "vkDeviceWaitIdle") &&
           resolve(api.AllocateMemory, "vkAllocateMemory") &&
           resolve(api.FreeMemory, "vkFreeMemory") && resolve(api.MapMemory, "vkMapMemory") &&
           resolve(api.UnmapMemory, "vkUnmapMemory") &&
           resolve(api.CreateBuffer, "vkCreateBuffer") &&
           resolve(api.DestroyBuffer, "vkDestroyBuffer") &&
           resolve(api.BindBufferMemory, "vkBindBufferMemory") &&
           resolve(api.GetBufferMemoryRequirements, "vkGetBufferMemoryRequirements") &&
           resolve(api.CreateImage, "vkCreateImage") &&
           resolve(api.DestroyImage, "vkDestroyImage") &&
           resolve(api.BindImageMemory, "vkBindImageMemory") &&
           resolve(api.GetImageMemoryRequirements, "vkGetImageMemoryRequirements") &&
           resolve(api.CreateImageView, "vkCreateImageView") &&
           resolve(api.DestroyImageView, "vkDestroyImageView") &&
           resolve(api.CreateCommandPool, "vkCreateCommandPool") &&
           resolve(api.DestroyCommandPool, "vkDestroyCommandPool") &&
           resolve(api.ResetCommandPool, "vkResetCommandPool") &&
           resolve(api.AllocateCommandBuffers, "vkAllocateCommandBuffers") &&
           resolve(api.FreeCommandBuffers, "vkFreeCommandBuffers") &&
           resolve(api.BeginCommandBuffer, "vkBeginCommandBuffer") &&
           resolve(api.EndCommandBuffer, "vkEndCommandBuffer") &&
           resolve(api.CmdPipelineBarrier, "vkCmdPipelineBarrier") &&
           resolve(api.CmdClearColorImage, "vkCmdClearColorImage") &&
           resolve(api.CmdCopyBufferToImage, "vkCmdCopyBufferToImage") &&
           resolve(api.CmdCopyImageToBuffer, "vkCmdCopyImageToBuffer") &&
           resolve(api.CmdBlitImage, "vkCmdBlitImage") &&
           resolve(api.CmdBeginRenderPass, "vkCmdBeginRenderPass") &&
           resolve(api.CmdEndRenderPass, "vkCmdEndRenderPass") &&
           resolve(api.CreateSemaphore, "vkCreateSemaphore") &&
           resolve(api.DestroySemaphore, "vkDestroySemaphore") &&
           resolve(api.CreateFence, "vkCreateFence") &&
           resolve(api.DestroyFence, "vkDestroyFence") &&
           resolve(api.WaitForFences, "vkWaitForFences") &&
           resolve(api.ResetFences, "vkResetFences") &&
           resolve(api.QueueSubmit, "vkQueueSubmit") &&
           resolve(api.QueuePresentKHR, "vkQueuePresentKHR") &&
           resolve(api.CreateRenderPass, "vkCreateRenderPass") &&
           resolve(api.DestroyRenderPass, "vkDestroyRenderPass") &&
           resolve(api.CreateFramebuffer, "vkCreateFramebuffer") &&
           resolve(api.DestroyFramebuffer, "vkDestroyFramebuffer") &&
           resolve(api.CreateSwapchainKHR, "vkCreateSwapchainKHR") &&
           resolve(api.DestroySwapchainKHR, "vkDestroySwapchainKHR") &&
           resolve(api.GetSwapchainImagesKHR, "vkGetSwapchainImagesKHR") &&
           resolve(api.AcquireNextImageKHR, "vkAcquireNextImageKHR");
}

}  // namespace

bool Api::Load(std::string& error) {
    if (handle_) return true;
    HMODULE handle = LoadLibraryW(L"vulkan-1.dll");
    if (!handle) {
        error = "cannot load vulkan-1.dll (no Vulkan runtime installed)";
        return false;
    }
    const auto get_instance_proc_addr = reinterpret_cast<PFN_vkGetInstanceProcAddr>(
        GetProcAddress(handle, "vkGetInstanceProcAddr"));
    if (!get_instance_proc_addr) {
        FreeLibrary(handle);
        error = "vulkan-1.dll has no vkGetInstanceProcAddr";
        return false;
    }
    // The global entry points have to come from the loader: vkGetInstanceProcAddr
    // with a null instance is only allowed to return them by the specification.
    GetInstanceProcAddr = get_instance_proc_addr;
    const auto resolve = [&error](PFN_vkVoidFunction (*resolver)(void*, const char*), void* object,
                                  auto& function, const char* name) {
        return Resolve(resolver, object, function, name, error);
    };
    const auto instance_resolver = [](void*, const char* name) {
        return vkGetInstanceProcAddr(nullptr, name);
    };
    if (!resolve(instance_resolver, nullptr, CreateInstance, "vkCreateInstance") ||
        !resolve(instance_resolver, nullptr, EnumerateInstanceExtensionProperties,
                 "vkEnumerateInstanceExtensionProperties")) {
        FreeLibrary(handle);
        handle_ = nullptr;
        return false;
    }
    handle_ = handle;
    return true;
}

bool Api::LoadInstance(VkInstance instance, std::string& error) {
    if (!handle_) {
        error = "Vulkan was not loaded";
        return false;
    }
    return LoadInstanceFunctions(instance, *this, error);
}

bool Api::LoadDevice(VkDevice device, std::string& error) {
    if (!handle_) {
        error = "Vulkan was not loaded";
        return false;
    }
    return LoadDeviceFunctions(device, *this, error);
}

void Api::Unload() noexcept {
    if (handle_) FreeLibrary(handle_);
    handle_ = nullptr;
    GetInstanceProcAddr = nullptr;
    CreateInstance = nullptr;
    EnumerateInstanceExtensionProperties = nullptr;
    DestroyInstance = nullptr;
    EnumeratePhysicalDevices = nullptr;
    GetPhysicalDeviceProperties = nullptr;
    GetPhysicalDeviceFeatures = nullptr;
    GetPhysicalDeviceQueueFamilyProperties = nullptr;
    GetPhysicalDeviceMemoryProperties = nullptr;
    GetPhysicalDeviceSurfaceSupportKHR = nullptr;
    GetPhysicalDeviceSurfaceCapabilitiesKHR = nullptr;
    GetPhysicalDeviceSurfaceFormatsKHR = nullptr;
    GetPhysicalDeviceSurfacePresentModesKHR = nullptr;
    DestroySurfaceKHR = nullptr;
    CreateWin32SurfaceKHR = nullptr;
    GetDeviceProcAddr = nullptr;
    CreateDevice = nullptr;
    GetDeviceQueue = nullptr;
    DestroyDevice = nullptr;
    DeviceWaitIdle = nullptr;
    AllocateMemory = nullptr;
    FreeMemory = nullptr;
    MapMemory = nullptr;
    UnmapMemory = nullptr;
    CreateBuffer = nullptr;
    DestroyBuffer = nullptr;
    BindBufferMemory = nullptr;
    GetBufferMemoryRequirements = nullptr;
    CreateImage = nullptr;
    DestroyImage = nullptr;
    BindImageMemory = nullptr;
    GetImageMemoryRequirements = nullptr;
    CreateImageView = nullptr;
    DestroyImageView = nullptr;
    CreateCommandPool = nullptr;
    DestroyCommandPool = nullptr;
    ResetCommandPool = nullptr;
    AllocateCommandBuffers = nullptr;
    FreeCommandBuffers = nullptr;
    BeginCommandBuffer = nullptr;
    EndCommandBuffer = nullptr;
    CmdPipelineBarrier = nullptr;
    CmdClearColorImage = nullptr;
    CmdCopyBufferToImage = nullptr;
    CmdCopyImageToBuffer = nullptr;
    CmdBlitImage = nullptr;
    CmdBeginRenderPass = nullptr;
    CmdEndRenderPass = nullptr;
    CreateSemaphore = nullptr;
    DestroySemaphore = nullptr;
    CreateFence = nullptr;
    DestroyFence = nullptr;
    WaitForFences = nullptr;
    ResetFences = nullptr;
    QueueSubmit = nullptr;
    QueuePresentKHR = nullptr;
    CreateRenderPass = nullptr;
    DestroyRenderPass = nullptr;
    CreateFramebuffer = nullptr;
    DestroyFramebuffer = nullptr;
    CreateSwapchainKHR = nullptr;
    DestroySwapchainKHR = nullptr;
    GetSwapchainImagesKHR = nullptr;
    AcquireNextImageKHR = nullptr;
}

}  // namespace sonic::rex_host::gpu::vk
