#pragma once
#include <gpu/render_backend.h>
#include <gpu/shader_cache.h>
#include <gpu/vulkan_host.h>
#include <gpu/vulkan_state.h>
#include <mutex>
#include <map>

struct SDL_Window;

// Real Vulkan resource/transfer/WSI backend. Game graphics pipelines are not yet
// wired: uploads are reported separately from draws, and Present clears only.
class VulkanBackend final : public IRenderBackend
{
public:
    explicit VulkanBackend(SDL_Window* window = nullptr, bool validation = false, bool enableGameDraws = false);
    ~VulkanBackend() override;
    const char* GetName() const override { return "vulkan-transfer"; }
    bool Init(const VideoMode& mode) override;
    void Shutdown() override;
    GuestGpu::SubmissionResult SubmitGuestBatch(const GuestGpu::NativeBatch& batch) override;
    void Present() override;
    void Resize(uint32_t width, uint32_t height) override;
    HostGpu::VulkanStats GetHostStats() const;
    std::string GetLastError() const;
private:
    bool Fail(const std::string& error);
    bool RecreateTargets();
    HostGpu::Resource Upload(std::span<const uint8_t> bytes, VkBufferUsageFlags usage);
    void ReleaseDrawResources();
    mutable std::mutex mutex;
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
