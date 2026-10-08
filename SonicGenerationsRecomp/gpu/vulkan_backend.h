#pragma once
#include <gpu/native_render_report.h>
#include <gpu/render_backend.h>
#include <gpu/shader_cache.h>
#include <gpu/vulkan_host.h>
#include <gpu/vulkan_state.h>
#include <cstdio>
#include <mutex>
#include <map>

struct SDL_Window;

// Vulkan resource/WSI backend with opt-in bounded direct-frame native draws.
// Color, depth and resolve replay; a guest multisampled target is drawn once per
// pixel and a guest format without an image here is drawn as RGBA8 -- both are
// counted in GetNativeRenderReport() instead of being silently assumed away.
class VulkanBackend final : public IRenderBackend
{
public:
    explicit VulkanBackend(SDL_Window* window = nullptr, bool validation = false, bool enableGameDraws = false);
    ~VulkanBackend() override;
    // Win32 presentation without SDL. When ReXGlue owns the window it hands us
    // the native handles instead of an SDL_Window, so the backend builds the
    // surface itself (vkCreateWin32SurfaceKHR) and never asks SDL for instance
    // extensions. The handles are borrowed and must outlive the backend; the
    // device is created with them, so this has to happen before Init().
    void SetWin32Surface(void* hwnd, void* hinstance);
    // A presentation surface is configured (an SDL window or a Win32 HWND).
    bool HasPresentationSurface() const { return window != nullptr || win32Hwnd != nullptr; }
    // The last submitted frame is ready for Present().
    bool HasPresentableFrame() const;
    // Size of the frame the guest's last swap produced (0,0 when there is none).
    void GetPresentableFrameSize(uint32_t& outWidth, uint32_t& outHeight) const;
    // The host swapchain is out of date (resized or suboptimal).
    bool SwapchainNeedsResize() const;
    // Target size in pixels; (0,0) until a surface or an explicit Resize says so.
    void GetTargetSize(uint32_t& outWidth, uint32_t& outHeight) const;
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
    // What the native replay did: guest targets drawn exactly or approximately,
    // frames that reached a presentable image, and every refusal by reason. This
    // is the only honest answer to "how close is this to replacing the reference
    // renderer", so it is a first-class result, not a log line.
    GuestGpu::NativeRenderReport GetNativeRenderReport() const;
    // Read only a successfully submitted diagnostic frame; never stale contents.
    bool ReadDiagnosticFrame(std::vector<uint8_t>& rgba);
private:
    bool Fail(const std::string& error);
    bool RecreateTargets();
    HostGpu::Resource Upload(std::span<const uint8_t> bytes, VkBufferUsageFlags usage);
    void ReleaseDrawResources();
    GuestGpu::SubmissionResult SubmitNativeFrame(const GuestGpu::NativeBatch& batch);
    void ResetNativeTargets();
    // Refusals are counted where they are decided, so the count and the log line
    // cannot disagree about what happened.
    void NoteRefusal(const char* reason)
    {
        const size_t known = nativeReport.refusals.size();
        nativeReport.NoteRefusal(reason);
        // Every distinct reason is said once, where a black window can be read:
        // a refused frame that is only counted is a mystery until the report is
        // opened, and the report is written by a run that already ended.
        if (nativeReport.refusals.size() != known)
            std::fprintf(stderr, "Vulkan backend: frame refused: %s\n",
                         nativeReport.refusals.back().first.c_str());
    }
    struct SurfaceImage { GuestGpu::NativeSurface descriptor; HostGpu::Resource color=0, depth=0; bool initialized=false; };
    struct DepthImage { GuestGpu::NativeSurface descriptor; HostGpu::Resource image=0; bool depthInitialized=false, stencilInitialized=false; };
    std::map<uint32_t,DepthImage> nativeDepths;
    struct ResolvedImage { GuestGpu::NativeTexture descriptor; HostGpu::Resource image=0; };
    std::map<uint32_t,SurfaceImage> nativeSurfaces;
    std::map<uint32_t,ResolvedImage> nativeTextures; // physical base, not a host/guest object pointer
    HostGpu::Resource frameImage=0;
    bool nativeReplay=false;
    // Native replay invokes the existing validated draw path under the same lock.
    mutable std::recursive_mutex mutex;
    SDL_Window* window;
    // Borrowed Win32 window handles (see SetWin32Surface); null unless the host
    // chose the non-SDL presentation path.
    void* win32Hwnd = nullptr;
    void* win32Hinstance = nullptr;
    bool validation;
    bool drawEnabled = false, frameReady = false;
    // The first present and the first refused present are the two facts a black
    // window needs explained; after that they are counters (host stats, report).
    bool presentLogged = false, presentFailureLogged = false;
    HostGpu::VulkanHost host;
    GuestGpu::ShaderCache shaderCache;
    std::map<uint64_t, GuestGpu::ShaderModule> resolvedShaders;
    uint32_t width = 0, height = 0;
    // Guest frontbuffer size of the frame in frameImage; the swapchain may be a
    // different size, so the presenter and the diagnostics need both.
    uint32_t frameWidth = 0, frameHeight = 0;
    bool resize = true;
    HostGpu::Resource color = 0, depth = 0;
    std::vector<HostGpu::Resource> drawResources;
    std::vector<HostGpu::VulkanFixedState> states;
    GuestGpu::NativeRenderReport nativeReport;
    std::string error;
};
