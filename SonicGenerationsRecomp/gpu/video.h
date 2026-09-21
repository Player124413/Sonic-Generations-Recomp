#pragma once

#include <cstdint>
#include <memory>

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

struct VideoMode
{
    uint32_t width = 1280;
    uint32_t height = 720;
    bool isInterlaced = false;
    bool isWidescreen = true;
    bool isHighDefinition = true;
    float refreshRate = 60.0f;
};

// Backend-agnostic description of one submitted frame. The future
// translation layer will fill this from the Xenos ring buffer.
struct FrameStats
{
    uint64_t presentCount = 0;
    uint64_t packetsRead = 0;
    uint64_t drawCalls = 0;
};

class IRenderBackend
{
public:
    virtual ~IRenderBackend() = default;

    virtual const char* GetName() const = 0;
    virtual bool Init(const VideoMode& mode) = 0;
    virtual void Shutdown() = 0;

    // Called from the present path (VdSwap). Backends flush/swap here.
    virtual void Present() = 0;

    // Resize notification (host window changed size).
    virtual void Resize(uint32_t width, uint32_t height) = 0;
};

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
