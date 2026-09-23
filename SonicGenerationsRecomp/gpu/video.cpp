#include <stdafx.h>
#include <gpu/video.h>
#include <gpu/guest_hooks.h>
#include <os/logger.h>

// ---------------------------------------------------------------------------
// Null backend: keeps the guest alive without touching a real GPU.
// Replace via Video::SetBackend() once the Xenos translation layer is ready.
// ---------------------------------------------------------------------------
class NullBackend final : public IRenderBackend
{
public:
    const char* GetName() const override { return "null"; }

    bool Init(const VideoMode& mode) override
    {
        LOGFN("Null render backend initialised ({}x{}). No GPU work will be submitted.", mode.width, mode.height);
        return true;
    }

    void Shutdown() override {}

    void Present() override {}

    void Resize(uint32_t width, uint32_t height) override
    {
        LOGFN_UTILITY("Resize to {}x{}", width, height);
    }
};

static std::unique_ptr<IRenderBackend> g_backend;
static VideoMode g_mode;
static FrameStats g_stats;

void Video::SetBackend(std::unique_ptr<IRenderBackend> backend)
{
    g_backend = std::move(backend);
}

bool Video::Init()
{
    const char* trace = std::getenv("SONIC_GPU_TRACE");
    GuestGpu::EnableObservation(trace && std::strcmp(trace, "1") == 0);

    if (!g_backend)
        g_backend = std::make_unique<NullBackend>();

    s_viewportWidth = g_mode.width;
    s_viewportHeight = g_mode.height;

    return g_backend->Init(g_mode);
}

void Video::Shutdown()
{
    GuestGpu::EnableObservation(false);
    const auto snapshot = GuestGpu::GetSnapshot();
#define SONIC_GPU_ENTRY(name, symbol) \
    { \
        const auto& entry = snapshot.entries[static_cast<size_t>(GuestGpu::Entry::name)]; \
        if (entry.entered != 0) \
            LOGFN("GPU observation " #name ": {} entered, {} returned (not rendered)", entry.entered, entry.returned); \
    }
#include <gpu/guest_entries.inc>
#undef SONIC_GPU_ENTRY
    if (snapshot.failedCreates != 0)
        LOGFN("GPU observation: {} failed device creation calls", snapshot.failedCreates);


    if (g_backend)
        g_backend->Shutdown();
}

void Video::OnResize(uint32_t width, uint32_t height)
{
    if (g_backend)
        g_backend->Resize(width, height);
}

void Video::Present()
{
    ++g_stats.presentCount;

    if (g_backend)
        g_backend->Present();
}

const VideoMode& Video::GetMode()
{
    return g_mode;
}

void Video::SetMode(const VideoMode& mode)
{
    g_mode = mode;
    s_viewportWidth = mode.width;
    s_viewportHeight = mode.height;
}

const FrameStats& Video::GetStats()
{
    return g_stats;
}

IRenderBackend* Video::GetBackend()
{
    return g_backend.get();
}

// ---------------------------------------------------------------------------
// Vd* kernel interface.
//
// These are hooked from kernel/imports.cpp (see GUEST_FUNCTION_HOOK table).
// The Xbox 360 display driver interface only needs to be emulated to the
// degree the title relies on it: mode queries, ring buffer bookkeeping and
// page flips. Actual command processing belongs to the render backend.
// ---------------------------------------------------------------------------

#include <xbox.h>

struct VdState
{
    bool enginesInitialised = false;
    bool ringBufferInitialised = false;
    uint32_t graphicsInterruptCallback = 0;
    VideoMode mode{};
};

static VdState g_vd;

bool VdQueryVideoMode(XVIDEO_MODE* vm)
{
    const auto& mode = Video::GetMode();

    memset(vm, 0, sizeof(XVIDEO_MODE));
    vm->DisplayWidth = mode.width;
    vm->DisplayHeight = mode.height;
    vm->IsInterlaced = mode.isInterlaced;
    vm->IsWidescreen = mode.isWidescreen;
    vm->IsHighDefinition = mode.isHighDefinition;
    // Refresh rate is a guest float (big-endian bit pattern produced by be<>).
    vm->RefreshRate = be<float>(mode.refreshRate).value;
    vm->VideoStandard = 1; // NTSC_M
    vm->Unknown4A = 0x4A;
    vm->Unknown01 = 0x01;
    return true;
}

void VdSwap()
{
    Video::Present();
}

void VdInitializeEngines()
{
    g_vd.enginesInitialised = true;
    LOG_UTILITY("VdInitializeEngines");
}

void VdShutdownEngines()
{
    g_vd.enginesInitialised = false;
    LOG_UTILITY("VdShutdownEngines");
}

void VdInitializeRingBuffer()
{
    // The title allocates and programs the PM4 ring buffer through this call
    // and MmAllocatePhysicalMemoryEx. Ring buffer contents will be consumed
    // by the future command translation layer.
    g_vd.ringBufferInitialised = true;
    LOG_UTILITY("VdInitializeRingBuffer");
}

void VdInitializeScalerCommandBuffer()
{
    LOG_UTILITY("VdInitializeScalerCommandBuffer");
}

void VdGetSystemCommandBuffer(be<uint32_t>* outPtr, be<uint32_t>* outSize)
{
    // Return a small guest allocation that stands in for the system command
    // buffer. The translation layer will replace this with a real buffer.
    if (outPtr)
        *outPtr = 0;
    if (outSize)
        *outSize = 0;
}

void VdSetSystemCommandBufferGpuIdentifierAddress(uint32_t address)
{
    LOGF_UTILITY("gpu identifier address 0x{:08X}", address);
}

void VdEnableRingBufferRPtrWriteBack(uint32_t address)
{
    LOGF_UTILITY("rptr writeback address 0x{:08X}", address);
}

void VdSetGraphicsInterruptCallback(uint32_t callback, uint32_t param)
{
    g_vd.graphicsInterruptCallback = callback;
    LOGF_UTILITY("callback 0x{:08X} param 0x{:08X}", callback, param);
}

void VdCallGraphicsNotificationRoutines()
{
    LOG_UTILITY("VdCallGraphicsNotificationRoutines");
}

void VdEnableDisableClockGating(uint32_t enable)
{
    LOGF_UTILITY("enable {}", enable);
}

bool VdPersistDisplay(uint32_t a1, uint32_t* a2)
{
    if (a2)
        *a2 = 0;
    return false;
}

void VdGetCurrentDisplayInformation()
{
    LOG_UTILITY("VdGetCurrentDisplayInformation");
}

uint32_t VdGetCurrentDisplayGamma()
{
    return be<float>(2.2f).value;
}

void VdQueryVideoFlags(be<uint32_t>* flags)
{
    if (flags)
        *flags = 0;
}

void VdSetDisplayMode(uint32_t width, uint32_t height, uint32_t refreshRate, uint32_t videoStandard)
{
    auto mode = Video::GetMode();
    if (width)
        mode.width = width;
    if (height)
        mode.height = height;
    Video::SetMode(mode);

    LOGFN_UTILITY("VdSetDisplayMode {}x{}", width, height);
}

void VdSetDisplayModeOverride()
{
    LOG_UTILITY("VdSetDisplayModeOverride");
}

bool VdIsHSIOTrainingSucceeded()
{
    return true;
}

void VdRetrainEDRAM()
{
    LOG_UTILITY("VdRetrainEDRAM");
}

void VdRetrainEDRAMWorker()
{
    LOG_UTILITY("VdRetrainEDRAMWorker");
}
