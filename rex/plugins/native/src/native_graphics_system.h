#pragma once
// Our own guest GPU: the plugin the runtime loads instead of rexgpu-xenos.
//
// Boundary (decided and documented in docs/OWN_GPU_PLAN.md): the rendering code
// is ours. From the SDK this file uses only the plugin ABI, guest memory, the
// thread/interrupt entry points and the windowed app context -- no graphics
// implementation, no Xenos command processor, no Xenos presenter.
#include <rex/system/interfaces/graphics.h>
#include <rex/system/xthread.h>

#include <atomic>
#include <condition_variable>
#include <cstdint>
#include <memory>
#include <mutex>

#include "gpu_native/command_processor.h"
#include "gpu_native/render_state.h"
#include "gpu_native/stream_dump.h"
#include "native_frame_source.h"
#include "native_vulkan_presenter.h"
#include "sdk_guest_memory.h"

namespace rex::runtime {
class FunctionDispatcher;
}
namespace rex::ui {
class WindowedAppContext;
}

namespace sonic::rex_host::gpu {
namespace vk {
class Core;
}

/// The device the runtime talks to. It owns one command processor, one Vulkan
/// device shared by the renderer and the presenter, and the threads the guest
/// expects to exist: one pacing vertical blanks and one draining the ring.
class NativeGraphicsSystem final : public rex::system::IGraphicsSystem {
public:
    NativeGraphicsSystem();
    ~NativeGraphicsSystem() override;

    rex::X_STATUS SetupPresentation(rex::ui::WindowedAppContext* app_context) override;
    rex::X_STATUS SetupGuestGpu(rex::runtime::FunctionDispatcher* function_dispatcher,
                                rex::system::KernelState* kernel_state) override;
    bool has_presentation() const override { return presenter_ != nullptr; }
    rex::ui::GraphicsProvider* provider() const override { return provider_.get(); }
    rex::ui::Presenter* presenter() const override { return presenter_.get(); }

    void SetInterruptCallback(uint32_t callback, uint32_t user_data) override;
    void InitializeRingBuffer(uint32_t ptr, uint32_t size_log2) override;
    void EnableReadPointerWriteBack(uint32_t ptr, uint32_t block_size_log2) override;
    void InitializeShaderStorage(const std::filesystem::path& cache_root, uint32_t title_id,
                                 bool blocking) override;
    void Shutdown() override;

    /// The device itself, so the host and the tests can ask what it is doing.
    CommandProcessor& processor() noexcept { return processor_; }
    auto& swap_sink() noexcept { return swapSink_; }
    NativePresenter* native_presenter() const noexcept { return presenter_.get(); }
    GuestFrontbufferSource& frame_source() noexcept { return frameSource_; }
    uint64_t InterruptCount() const noexcept { return interrupts_.count(); }
    /// Registers the device reads back synthetically (vblank counter and the like)
    /// before SetupGuestGpu has run. The device owns its video mode; the runtime
    /// hands us no display information, so ours is the default 1280x720.
    void SetVideoMode(uint32_t width, uint32_t height, uint32_t refreshHz);

    /// SONIC_REX_GPU_DUMP=1: record the real command stream the guest issues into
    /// assets/rex-cache/gpu-dump. This is how renderer development gets the data
    /// the in-game probe cannot see.
    void StartStreamDump();
    StreamDump& stream_dump() noexcept { return streamDump_; }
    /// The renderer's state feed: constant blocks, draws, shader uploads and the
    /// guest memory writes the GPU is asked to perform. The presenter renders from
    /// it, and its counters are what says how much of a frame is understood.
    gpu::RenderState& render_state() noexcept { return renderState_; }

private:
    /// The guest swapped a frame: hand it to the presenter with the display
    /// aspect ratio the video mode describes. Called from the GPU worker thread.
    void OnGuestFrame(uint32_t frontbufferAddress, uint32_t width, uint32_t height);

    /// Interrupt entry: the guest registered a callback through
    /// VdSetGraphicsInterruptCallback, and both the swap path and the vblank
    /// worker enter the guest through it.
    class Interrupts final : public InterruptDispatcher {
    public:
        explicit Interrupts(NativeGraphicsSystem& owner) noexcept : owner_(owner) {}
        void DispatchInterrupt(uint32_t source, uint32_t cpu) override;
        uint64_t count() const noexcept { return count_.load(std::memory_order_acquire); }

    private:
        NativeGraphicsSystem& owner_;
        std::atomic<uint64_t> count_{0};
    };

    /// The swap sink the command processor reports frames to.
    class SwapSink final : public SwapPresenter {
    public:
        explicit SwapSink(NativeGraphicsSystem& owner) noexcept : owner_(owner) {}
        void OnSwap(uint32_t frontbufferAddress, uint32_t width, uint32_t height) override;
        uint64_t FrameCount() const noexcept { return frames_.load(std::memory_order_acquire); }
        struct Frame {
            uint32_t frontbufferAddress = 0;
            uint32_t width = 0;
            uint32_t height = 0;
            uint64_t index = 0;
        };
        Frame LastFrame() const noexcept;

    private:
        NativeGraphicsSystem& owner_;
        std::atomic<uint64_t> frames_{0};
        std::atomic<uint32_t> address_{0}, width_{0}, height_{0};
    };

    /// Called on the guest-visible thread that takes the interrupt.
    void DispatchInterruptToGuest(uint32_t source, uint32_t cpu);

    static uint32_t ReadRegisterThunk(void* ppc_context, NativeGraphicsSystem* self, uint32_t addr);
    static void WriteRegisterThunk(void* ppc_context, NativeGraphicsSystem* self, uint32_t addr,
                                   uint32_t value);
    uint32_t ReadRegister(uint32_t address);
    void WriteRegister(uint32_t address, uint32_t value);

    void StartVblankWorker(rex::system::KernelState* kernel_state);
    void StopVblankWorker();
    /// The guest only sets the write pointer and waits for the read pointer, so
    /// somebody has to drain the ring: a device without this worker stops the
    /// game at its first swap.
    void StartGpuWorker(rex::system::KernelState* kernel_state);
    void StopGpuWorker();
    void WakeGpuWorker();
    /// The first drain's raw words: what the guest asked for before anything it
    /// can see happened.
    void LogFirstDrain();
    /// Counters every few seconds, including when nothing moved -- the absence of
    /// progress is the report.
    void LogHeartbeat();

    SdkGuestMemory memory_;
    GuestFrontbufferSource frameSource_;
    /// Declared before the command processor's user: the processor points at it.
    gpu::RenderState renderState_;
    StreamDump streamDump_;
    SwapSink swapSink_{*this};
    Interrupts interrupts_{*this};
    CommandProcessor processor_;
    std::shared_ptr<vk::Core> vulkan_;
    std::unique_ptr<NativeGraphicsProvider> provider_;
    std::unique_ptr<NativePresenter> presenter_;
    rex::runtime::FunctionDispatcher* dispatcher_ = nullptr;
    uint32_t interruptCallback_ = 0;
    uint32_t interruptData_ = 0;
    bool guestGpuReady_ = false;

    // Guest register traffic, counted rather than sampled: the first few
    // accesses are not enough to tell "never touched" from "polled forever".
    std::atomic<uint64_t> mmioReads_{0};
    std::atomic<uint64_t> mmioWrites_{0};
    std::atomic<uint64_t> ringKicks_{0};
    std::atomic<uint32_t> mmioReadsLogged_{0};
    bool firstDrainLogged_ = false;
    std::atomic<uint32_t> mmioWritesLogged_{0};

    // Both workers are SDK-owned threads (they must be visible to the guest);
    // the loop conditions are ours.
    std::atomic<bool> vblankRunning_{false};
    std::unique_ptr<rex::system::XHostThread> vblankThread_;
    std::atomic<bool> workerRunning_{false};
    std::unique_ptr<rex::system::XHostThread> workerThread_;
    std::mutex workerMutex_;
    std::condition_variable workerSignal_;
    bool workerWakeup_ = false;
};

}  // namespace sonic::rex_host::gpu
