#pragma once
#include <gpu/render_backend.h>
#include <gpu/shader_cache.h>
#include <gpu/vulkan_host.h>
#include <gpu/vulkan_state.h>
#include <mutex>
#include <map>

struct SDL_Window;

// Vulkan resource/WSI backend with opt-in bounded direct-frame native draws.
// Bounded native color/resolve replay; depth/MSAA and complete coverage remain open.
class VulkanBackend final : public IRenderBackend
{
public:
    explicit VulkanBackend(SDL_Window* window = nullptr, bool validation = false, bool enableGameDraws = false);
    ~VulkanBackend() override;
    const char* GetName() const override { return drawEnabled ? "vulkan-direct-draw" : "vulkan-transfer"; }
    bool Init(const VideoMode& mode) override;
    // Explicit cache dependency (e.g. a validated external cache or test fixture).
    // Input buffers are consumed synchronously; there is no shader fallback.
    bool InitWithShaderCache(const VideoMode& mode,GuestGpu::ShaderCacheData cache);
    void Shutdown() override;
    GuestGpu::SubmissionResult SubmitGuestBatch(const GuestGpu::NativeBatch& batch) override;
    void Present() override;
    void Resize(uint32_t width, uint32_t height) override;
    HostGpu::VulkanStats GetHostStats() const;
    std::string GetLastError() const;
    // Read only a successfully submitted diagnostic frame; never stale contents.
    bool ReadDiagnosticFrame(std::vector<uint8_t>& rgba);
private:
    bool Fail(const std::string& error);
    bool RecreateTargets();
    HostGpu::Resource Upload(std::span<const uint8_t> bytes, VkBufferUsageFlags usage);
    void ReleaseDrawResources();
    GuestGpu::SubmissionResult SubmitNativeFrame(const GuestGpu::NativeBatch& batch);
    void ResetNativeTargets();
    struct SurfaceImage { GuestGpu::NativeSurface descriptor; HostGpu::Resource color=0, depth=0; bool initialized=false; };
    struct ResolvedImage { GuestGpu::NativeTexture descriptor; HostGpu::Resource image=0; };
    std::map<uint32_t,SurfaceImage> nativeSurfaces;
    std::map<uint32_t,ResolvedImage> nativeTextures; // physical base, not a host/guest object pointer
    HostGpu::Resource frameImage=0;
    bool nativeReplay=false;
    // Native replay invokes the existing validated draw path under the same lock.
    mutable std::recursive_mutex mutex;
    SDL_Window* window;
    bool validation;
    bool drawEnabled = false, frameReady = false;
    HostGpu::VulkanHost host;
    GuestGpu::ShaderCache shaderCache;
    std::map<uint64_t, GuestGpu::ShaderModule> resolvedShaders;
    uint32_t width = 0, height = 0;
    bool resize = true;
    HostGpu::Resource color = 0, depth = 0;
    std::vector<HostGpu::Resource> drawResources;
    std::vector<HostGpu::VulkanFixedState> states;
    std::string error;
};
