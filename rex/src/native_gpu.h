#pragma once
#include "gpu_capture.h"
#include "host_policy.h"

// The translator's renderer and device (SonicGenerationsRecomp/gpu/vulkan_backend.h)
// lives at global scope, so the forward declaration must too: declaring it inside
// the namespace would shadow it with a second, incomplete type.
class VulkanBackend;

namespace sonic::rex_host {

// What the translator does with the frames it renders for the guest.
enum class NativeRenderMode {
    // The translator is not running; the reference GPU remains the renderer.
    Off,
    // Every guest frame is replayed a second time into an offscreen image and
    // never presented (diagnostic; SONIC_REX_NATIVE_RENDER=offscreen).
    Offscreen,
    // The translated frame is what the window shows: the window's presenter is
    // ours and the reference GPU, while still running the guest device services,
    // is not connected to a surface (SONIC_REX_GRAPHICS_MODE=translate).
    Present,
};

// Starts the translator for the requested graphics mode, or for the diagnostic
// offscreen replay. Idempotent, and never fatal: a knob that cannot be honoured
// disables the translator instead of killing a play session.
void InitializeNativeGpu(const std::filesystem::path& cacheDirectory, GraphicsMode graphicsMode);

// Null unless the translator is running. Looked up per call by the presenter:
// the translator is shut down before the window is destroyed, so a cached
// reference would be dangling exactly when the window tears itself down.
VulkanBackend* GetNativeGpuBackend();
NativeRenderMode GetNativeRenderMode();

// Where a completed frame goes when the translator is presenting. The window's
// presenter installs this, so the translator carries no SDK types and no
// knowledge of who presents: it reports a frame, and returns whether that frame
// was accepted. Called on the guest thread.
using PresentableFrameCallback = bool (*)(void* user, uint32_t width, uint32_t height);
void SetPresentableFrameCallback(PresentableFrameCallback callback, void* user);

void CaptureNativeGpu(GpuEntry entry, const CaptureArguments& args, uint8_t* base) noexcept;
void ShutdownNativeGpu() noexcept;

}  // namespace sonic::rex_host
