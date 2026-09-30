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
#include <cstdint>
#include <memory>

#include "gpu_native/command_processor.h"
#include "sdk_guest_memory.h"

namespace rex::runtime {
class FunctionDispatcher;
}
namespace rex::ui {
class GraphicsProvider;
class Presenter;
class WindowedAppContext;
}

namespace sonic::rex_host::gpu {

/// Presentation is our own Vulkan window; until it is wired this device counts
/// and exposes the frames the guest swaps, and says so rather than pretending a
/// presenter exists.
class NativeSwapSink final : public SwapPresenter {
public:
    struct Frame {
        uint32_t frontbufferAddress = 0;
        uint32_t width = 0;
        uint32_t height = 0;
        uint64_t index = 0;
    };
    void OnSwap(uint32_t frontbufferAddress, uint32_t width, uint32_t height) override;
    Frame LastFrame() const noexcept;
    uint64_t FrameCount() const noexcept { return frames_.load(std::memory_order_acquire); }

private:
    std::atomic<uint64_t> frames_{0};
    std::atomic<uint32_t> address_{0}, width_{0}, height_{0};
};

class NativeGraphicsSystem final : public rex::system::IGraphicsSystem {
public:
    NativeGraphicsSystem();
    ~NativeGraphicsSystem() override;

    rex::X_STATUS SetupPresentation(rex::ui::WindowedAppContext* app_context) override;
    rex::X_STATUS SetupGuestGpu(rex::runtime::FunctionDispatcher* function_dispatcher,
                                rex::system::KernelState* kernel_state) override;
    bool has_presentation() const override { return false; }
    rex::ui::GraphicsProvider* provider() const override { return nullptr; }
    rex::ui::Presenter* presenter() const override { return nullptr; }

    void SetInterruptCallback(uint32_t callback, uint32_t user_data) override;
    void InitializeRingBuffer(uint32_t ptr, uint32_t size_log2) override;
    void EnableReadPointerWriteBack(uint32_t ptr, uint32_t block_size_log2) override;
    void InitializeShaderStorage(const std::filesystem::path& cache_root, uint32_t title_id,
                                 bool blocking) override;
    void Shutdown() override;

    /// The device itself, so the host and the tests can ask what it is doing.
    CommandProcessor& processor() noexcept { return processor_; }
    NativeSwapSink& swap_sink() noexcept { return swapSink_; }
    uint64_t InterruptCount() const noexcept { return interrupts_.count(); }
    /// Registers the device reads back synthetically (vblank counter and the like)
    /// before SetupGuestGpu has run. The device owns its video mode; the runtime
    /// hands us no display information, so ours is the default 1280x720.
    void SetVideoMode(uint32_t width, uint32_t height, uint32_t refreshHz);

private:
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

    /// Called on the guest-visible thread that takes the interrupt.
    void DispatchInterruptToGuest(uint32_t source, uint32_t cpu);

    static uint32_t ReadRegisterThunk(void* ppc_context, NativeGraphicsSystem* self, uint32_t addr);
    static void WriteRegisterThunk(void* ppc_context, NativeGraphicsSystem* self, uint32_t addr,
                                   uint32_t value);
    uint32_t ReadRegister(uint32_t address);
    void WriteRegister(uint32_t address, uint32_t value);

    void StartVblankWorker(rex::system::KernelState* kernel_state);
    void StopVblankWorker();

    SdkGuestMemory memory_;
    NativeSwapSink swapSink_;
    Interrupts interrupts_{*this};
    CommandProcessor processor_;
    rex::runtime::FunctionDispatcher* dispatcher_ = nullptr;
    uint32_t interruptCallback_ = 0;
    uint32_t interruptData_ = 0;
    bool guestGpuReady_ = false;

    // The vblank worker is SDK-owned (it must be a guest-visible thread); the
    // loop condition is ours.
    std::atomic<bool> vblankRunning_{false};
    std::unique_ptr<rex::system::XHostThread> vblankThread_;
};

}  // namespace sonic::rex_host::gpu
