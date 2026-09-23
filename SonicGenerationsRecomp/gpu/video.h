#pragma once

#include <cstdint>
#include <memory>
#include <gpu/render_backend.h>

// ---------------------------------------------------------------------------
// GPU layer.
//
// Sonic Generations (Xbox 360) renders through the Xenos GPU. The title
// imports the low-level Vd* interface (ring buffer management) from the
// kernel; the drawing API itself is linked into the game executable and
// feeds PM4 packets into the ring buffer.
//
// This layer provides:
//   * Implementations for the Vd* imports (see kernel/imports.cpp).
//   * A frame/present lifecycle (Video::Present) used by the game loop.
//   * A pluggable render backend interface (IRenderBackend) so the actual
//     translation of Xenos state to a modern API (D3D12/Vulkan via plume,
//     as done by Unleashed Recompiled) can be slotted in later together
//     with the recompiled shaders (see docs/ROADMAP.md).
//
// The default backend is NullBackend: it keeps the guest alive and records
// statistics but does not submit any GPU work. This is intentional until
// the shader pipeline (XenosRecomp) and the command translation land.

// ---------------------------------------------------------------------------
// Vd* import surface (defined in video.cpp, hooked in kernel/imports.cpp).
// ---------------------------------------------------------------------------

bool VdQueryVideoMode(XVIDEO_MODE* vm);
void VdSwap();
void VdInitializeEngines();
void VdShutdownEngines();
void VdInitializeRingBuffer();
void VdInitializeScalerCommandBuffer();
void VdGetSystemCommandBuffer(be<uint32_t>* outPtr, be<uint32_t>* outSize);
void VdSetSystemCommandBufferGpuIdentifierAddress(uint32_t address);
void VdEnableRingBufferRPtrWriteBack(uint32_t address);
void VdSetGraphicsInterruptCallback(uint32_t callback, uint32_t param);
void VdCallGraphicsNotificationRoutines();
void VdEnableDisableClockGating(uint32_t enable);
bool VdPersistDisplay(uint32_t a1, uint32_t* a2);
void VdGetCurrentDisplayInformation();
uint32_t VdGetCurrentDisplayGamma();
void VdQueryVideoFlags(be<uint32_t>* flags);
void VdSetDisplayMode(uint32_t width, uint32_t height, uint32_t refreshRate, uint32_t videoStandard);
void VdSetDisplayModeOverride();
bool VdIsHSIOTrainingSucceeded();
void VdRetrainEDRAM();
void VdRetrainEDRAMWorker();

// ---------------------------------------------------------------------------

struct Video
{
    static bool Init();
    static void Shutdown();

    // Host window was resized.
    static void OnResize(uint32_t width, uint32_t height);

    // Presents the current frame (wired to VdSwap).
    static void Present();

    static const VideoMode& GetMode();
    static void SetMode(const VideoMode& mode);

    static const FrameStats& GetStats();
    static IRenderBackend* GetBackend();

    // Registers a custom backend (e.g. the future D3D12/Vulkan layer).
    // Takes ownership. Must be called before Video::Init().
    static void SetBackend(std::unique_ptr<IRenderBackend> backend);

    static inline uint32_t s_viewportWidth = 1280;
    static inline uint32_t s_viewportHeight = 720;
};
