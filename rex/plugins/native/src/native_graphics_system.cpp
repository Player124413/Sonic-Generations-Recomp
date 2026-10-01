#include "native_graphics_system.h"

#include <rex/filesystem.h>
#include <rex/system/function_dispatcher.h>
#include <rex/system/kernel_state.h>
#include <rex/system/xmemory.h>
#include <rex/system/xtypes.h>
#include <rex/ui/presenter.h>
#include <rex/ui/windowed_app_context.h>

// The SDK's X_STATUS_SUCCESS / X_STATUS_UNSUCCESSFUL macros expand to
// `((X_STATUS)0x...)`, and bare `X_STATUS` must resolve here too: our namespace
// is not rex::system.
using rex::X_STATUS;

#include <algorithm>
#include <chrono>
#include <cstdlib>
#include <string_view>
#include <thread>

#include "native_log.h"
#include "native_vulkan_core.h"

namespace sonic::rex_host::gpu {
namespace {
// GPU registers live in a 64 KiB window at 0x7FC80000; the guest addresses a
// register as (address & 0xFFFF) / 4, which is the index our register file uses.
constexpr uint32_t kGpuMmioBase = 0x7FC80000;
constexpr uint32_t kGpuMmioMask = 0xFFFF0000;
constexpr uint32_t kGpuMmioSize = 0x0000FFFF;
}  // namespace

//------------------------------------------------------------------------------
// Swap sink
//------------------------------------------------------------------------------
void NativeGraphicsSystem::SwapSink::OnSwap(uint32_t frontbufferAddress, uint32_t width,
                                            uint32_t height) {
    address_.store(frontbufferAddress, std::memory_order_relaxed);
    width_.store(width, std::memory_order_relaxed);
    height_.store(height, std::memory_order_relaxed);
    frames_.fetch_add(1, std::memory_order_acq_rel);
    owner_.OnGuestFrame(frontbufferAddress, width, height);
}

NativeGraphicsSystem::SwapSink::Frame NativeGraphicsSystem::SwapSink::LastFrame() const noexcept {
    Frame frame;
    frame.index = frames_.load(std::memory_order_acquire);
    frame.frontbufferAddress = address_.load(std::memory_order_relaxed);
    frame.width = width_.load(std::memory_order_relaxed);
    frame.height = height_.load(std::memory_order_relaxed);
    return frame;
}

//------------------------------------------------------------------------------
// Interrupts
//------------------------------------------------------------------------------
void NativeGraphicsSystem::Interrupts::DispatchInterrupt(uint32_t source, uint32_t cpu) {
    count_.fetch_add(1, std::memory_order_acq_rel);
    owner_.DispatchInterruptToGuest(source, cpu);
}

//------------------------------------------------------------------------------
// Setup
//------------------------------------------------------------------------------
NativeGraphicsSystem::NativeGraphicsSystem() {
    processor_.SetMemory(&memory_);
    processor_.SetPresenter(&swapSink_);
    processor_.SetInterrupts(&interrupts_);
}

NativeGraphicsSystem::~NativeGraphicsSystem() { Shutdown(); }

rex::X_STATUS NativeGraphicsSystem::SetupPresentation(rex::ui::WindowedAppContext* app_context) {
    if (presenter_) return X_STATUS_SUCCESS;
    // Our own Vulkan device: instance, adapter, queue. The renderer will use the
    // same device, because the guest's frame is rendered into the image the
    // presenter paints from.
    vulkan_ = std::make_shared<vk::Core>();
    std::string error;
    if (!vulkan_->Initialize(error)) {
        Log("Vulkan is not available: %s", error.c_str());
        vulkan_.reset();
        return X_STATUS_UNSUCCESSFUL;
    }
    provider_ = std::make_unique<NativeGraphicsProvider>(vulkan_);
    // Presenter creation happens on the UI thread, like the SDK's own graphics
    // systems do, because it is the thread that will own the surface.
    auto create = [this]() {
        presenter_.reset(static_cast<NativePresenter*>(
            provider_->CreatePresenter(rex::ui::Presenter::FatalErrorHostGpuLossCallback)
                .release()));
    };
    if (app_context) {
        app_context->CallInUIThreadSynchronous(create);
    } else {
        create();
    }
    if (!presenter_) {
        Log("the Vulkan presenter could not be created");
        provider_.reset();
        vulkan_->Shutdown();
        vulkan_.reset();
        return X_STATUS_UNSUCCESSFUL;
    }
    presenter_->SetFrameSource(&frameSource_);
    Log("presenting through our own Vulkan device (%s)", vulkan_->adapterName().c_str());
    return X_STATUS_SUCCESS;
}

rex::X_STATUS NativeGraphicsSystem::SetupGuestGpu(
    rex::runtime::FunctionDispatcher* function_dispatcher, rex::system::KernelState* kernel_state) {
    if (!function_dispatcher || !function_dispatcher->memory()) {
        Log("SetupGuestGpu without a memory subsystem");
        return X_STATUS_UNSUCCESSFUL;
    }
    if (guestGpuReady_) return X_STATUS_SUCCESS;
    dispatcher_ = function_dispatcher;
    memory_.SetMemory(function_dispatcher->memory());
    frameSource_.SetMemory(&memory_);

    // Headless vsync pacing is ours; with no presentation the guest must still
    // see vblanks or the D3D present path waits forever.
    StartVblankWorker(kernel_state);
    StartGpuWorker(kernel_state);

    if (!function_dispatcher->memory()->AddVirtualMappedRange(
            kGpuMmioBase, kGpuMmioMask, kGpuMmioSize, this,
            reinterpret_cast<rex::runtime::MMIOReadCallback>(ReadRegisterThunk),
            reinterpret_cast<rex::runtime::MMIOWriteCallback>(WriteRegisterThunk))) {
        Log("cannot register the GPU MMIO window at %08X", kGpuMmioBase);
        StopGpuWorker();
        StopVblankWorker();
        return X_STATUS_UNSUCCESSFUL;
    }
    // The state feed is what makes a draw decodable at all: the D3D driver writes
    // most render state as SET_CONSTANT blocks, which are not Type-0 writes.
    processor_.SetRenderState(&renderState_);
    if (presenter_) presenter_->SetRenderState(&renderState_);
    StartStreamDump();
    guestGpuReady_ = true;
    Log("guest GPU up: MMIO %08X, ring/writeback driven by the guest", kGpuMmioBase);
    return X_STATUS_SUCCESS;
}

void NativeGraphicsSystem::StartStreamDump() {
    const char* requested = std::getenv("SONIC_REX_GPU_DUMP");
    if (!requested || std::string_view(requested) != "1") return;
    // The same cache root the rest of the host uses, so everything a bug report
    // needs is in one place next to the executable.
    const std::filesystem::path directory =
        rex::filesystem::GetExecutableFolder() / "assets" / "rex-cache" / "gpu-dump";
    std::string error;
    streamDump_.SetMemory(&memory_);
    if (!streamDump_.Open(directory, error)) {
        Log("cannot record the command stream: %s", error.c_str());
        return;
    }
    processor_.SetObserver(&streamDump_);
    Log("recording the guest command stream into %s (raw frames + decoded reports)",
        directory.string().c_str());
}

void NativeGraphicsSystem::SetVideoMode(uint32_t width, uint32_t height, uint32_t refreshHz) {
    RegisterFile::VideoMode mode;
    mode.displayWidth = width;
    mode.displayHeight = height;
    mode.refreshRateHz = std::max(1u, refreshHz);
    processor_.registers().SetVideoMode(mode);
}

void NativeGraphicsSystem::StartVblankWorker(rex::system::KernelState* kernel_state) {
    if (!kernel_state || vblankRunning_.load(std::memory_order_acquire)) return;
    vblankRunning_.store(true, std::memory_order_release);
    vblankThread_ = std::make_unique<rex::system::XHostThread>(kernel_state, 128 * 1024, 0, [this]() {
        // The guest's own refresh rate paces the interrupt, so a guest that
        // waits for vertical blank sees the frame rate it configured.
        const uint32_t refresh = std::max(1u, processor_.registers().GetVideoMode().refreshRateHz);
        const auto interval = std::chrono::microseconds(1000000 / refresh);
        auto next = std::chrono::steady_clock::now();
        while (vblankRunning_.load(std::memory_order_acquire)) {
            processor_.MarkVblank();
            next += interval;
            std::this_thread::sleep_until(next);
        }
        return 0;
    });
    vblankThread_->set_name("Sonic GPU vblank");
    vblankThread_->Create();
}

void NativeGraphicsSystem::StopVblankWorker() {
    vblankRunning_.store(false, std::memory_order_release);
    if (vblankThread_) {
        vblankThread_->Wait(0 /* wait_reason */, 0 /* processor_mode */, 0 /* alertable */,
                            nullptr /* no timeout: join */);
        vblankThread_.reset();
    }
}

void NativeGraphicsSystem::StartGpuWorker(rex::system::KernelState* kernel_state) {
    if (!kernel_state || workerRunning_.load(std::memory_order_acquire)) return;
    workerRunning_.store(true, std::memory_order_release);
    workerThread_ = std::make_unique<rex::system::XHostThread>(
        kernel_state, 128 * 1024, 0, [this]() {
            while (workerRunning_.load(std::memory_order_acquire)) {
                processor_.Tick();
                std::unique_lock<std::mutex> lock(workerMutex_);
                workerSignal_.wait_for(lock, std::chrono::milliseconds(1), [this]() {
                    return !workerRunning_.load(std::memory_order_acquire) || workerWakeup_;
                });
                workerWakeup_ = false;
            }
            return 0;
        });
    workerThread_->set_name("Sonic GPU command processor");
    workerThread_->Create();
}

void NativeGraphicsSystem::StopGpuWorker() {
    {
        std::lock_guard<std::mutex> lock(workerMutex_);
        workerRunning_.store(false, std::memory_order_release);
        workerWakeup_ = true;
    }
    workerSignal_.notify_all();
    if (workerThread_) {
        workerThread_->Wait(0, 0, 0, nullptr);
        workerThread_.reset();
    }
}

void NativeGraphicsSystem::WakeGpuWorker() {
    {
        std::lock_guard<std::mutex> lock(workerMutex_);
        workerWakeup_ = true;
    }
    workerSignal_.notify_one();
}

//------------------------------------------------------------------------------
// Guest GPU services (the Vd* exports reach these)
//------------------------------------------------------------------------------
void NativeGraphicsSystem::InitializeRingBuffer(uint32_t ptr, uint32_t size_log2) {
    processor_.InitializeRingBuffer(ptr, size_log2);
    Log("ring buffer at %08X, size log2 %u", ptr, size_log2);
    WakeGpuWorker();
}

void NativeGraphicsSystem::EnableReadPointerWriteBack(uint32_t ptr, uint32_t block_size_log2) {
    processor_.EnableReadPointerWriteBack(ptr, block_size_log2);
    // Without this the guest GPU thread spins on its own read pointer and the
    // game hangs; the guest asked for it, so it must be honoured.
    Log("read pointer writeback at %08X, block log2 %u", ptr, block_size_log2);
}

void NativeGraphicsSystem::SetInterruptCallback(uint32_t callback, uint32_t user_data) {
    interruptCallback_ = callback;
    interruptData_ = user_data;
    Log("interrupt callback %08X, user data %08X", callback, user_data);
}

void NativeGraphicsSystem::InitializeShaderStorage(const std::filesystem::path& cache_root,
                                                   uint32_t title_id, bool blocking) {
    // Shader translation is ours and does not exist yet; the cache would be a
    // promise we cannot keep, so nothing is created here.
    (void)cache_root;
    (void)title_id;
    (void)blocking;
}

void NativeGraphicsSystem::Shutdown() {
    if (!guestGpuReady_ && !vblankThread_ && !workerThread_ && !presenter_) return;
    // Stop the threads that enter the guest, then detach the device's sinks, and
    // only then let the presenter go: it is the last user of the Vulkan device.
    StopGpuWorker();
    StopVblankWorker();
    processor_.SetInterrupts(nullptr);
    processor_.SetPresenter(nullptr);
    processor_.SetObserver(nullptr);
    processor_.SetRenderState(nullptr);
    processor_.SetMemory(nullptr);
    guestGpuReady_ = false;
    if (presenter_) {
        frameSource_.SetMemory(nullptr);
        const NativePresenter::Stats stats = presenter_->GetStats();
        Log("guest GPU down after %llu swapped frames, %llu interrupts, %llu presents,",
            static_cast<unsigned long long>(swapSink_.FrameCount()),
            static_cast<unsigned long long>(interrupts_.count()),
            static_cast<unsigned long long>(stats.presents));
        Log("  %llu frames read from guest memory, %llu refused, %llu refreshes had no frame",
            static_cast<unsigned long long>(frameSource_.GetStats().framesRead),
            static_cast<unsigned long long>(frameSource_.GetStats().framesRefused),
            static_cast<unsigned long long>(stats.refreshesWithoutFrame));
        Log("  renderer feed: %llu draws (%llu vertices), %llu shader uploads, %llu frames with draws but no state",
            static_cast<unsigned long long>(stats.drawsSeen),
            static_cast<unsigned long long>(stats.verticesSeen),
            static_cast<unsigned long long>(stats.shaderUploadsSeen),
            static_cast<unsigned long long>(stats.drawsWithNoState));
        processor_.SetObserver(nullptr);
        streamDump_.Close();
        if (streamDump_.GetStats().drains) Log("  %s", streamDump_.Summary().c_str());
        // What the device understood of the guest's frames. This is the number
        // that has to grow before the picture can be ours: a frame with draws and
        // no decoded state is a frame the renderer cannot draw.
        Log("  %s", renderState_.FormatStats().c_str());
        for (const gpu::FrameSummary& frame : renderState_.frames())
            Log("  frame %llu: draws=%llu vertices=%llu state_blocks=%llu shaders=%llu mem_writes=%llu",
                static_cast<unsigned long long>(frame.index),
                static_cast<unsigned long long>(frame.draws),
                static_cast<unsigned long long>(frame.vertices),
                static_cast<unsigned long long>(frame.constantBlocks),
                static_cast<unsigned long long>(frame.shaderUploads),
                static_cast<unsigned long long>(frame.memoryWrites));
        presenter_.reset();
    }
    provider_.reset();
    if (vulkan_) {
        vulkan_->Shutdown();
        vulkan_.reset();
    }
}

//------------------------------------------------------------------------------
// Interrupt entry
//------------------------------------------------------------------------------
void NativeGraphicsSystem::DispatchInterruptToGuest(uint32_t source, uint32_t cpu) {
    if (!interruptCallback_ || !dispatcher_) return;
    auto* thread = rex::system::XThread::GetCurrentThread();
    if (!thread) return;
    // The guest callback takes (source, user_data); the CPU index decides which
    // guest CPU takes the interrupt, and the guest tells us when it is -1.
    if (cpu == 0xFFFFFFFF) cpu = 2;
    thread->SetActiveCpu(uint8_t(cpu));
    uint64_t arguments[] = {source, interruptData_};
    dispatcher_->ExecuteInterrupt(thread->thread_state(), interruptCallback_, arguments, 2);
}

//------------------------------------------------------------------------------
// Swap -> presenter
//------------------------------------------------------------------------------
void NativeGraphicsSystem::OnGuestFrame(uint32_t frontbufferAddress, uint32_t width,
                                        uint32_t height) {
    if (!presenter_) return;
    const RegisterFile::VideoMode mode = processor_.registers().GetVideoMode();
    // The display aspect ratio comes from the video mode, not from the front
    // buffer: a title that renders 640x480 with 16:9 output is anamorphic.
    if (!presenter_->OnGuestFrame(frontbufferAddress, width, height,
                                  std::max(1u, mode.displayWidth),
                                  std::max(1u, mode.displayHeight))) {
        Log("frame %ux%u at %08X could not be refreshed", width, height, frontbufferAddress);
    }
}

//------------------------------------------------------------------------------
// MMIO
//------------------------------------------------------------------------------
uint32_t NativeGraphicsSystem::ReadRegisterThunk(void* ppc_context, NativeGraphicsSystem* self,
                                                 uint32_t addr) {
    (void)ppc_context;
    return self->ReadRegister(addr);
}

void NativeGraphicsSystem::WriteRegisterThunk(void* ppc_context, NativeGraphicsSystem* self,
                                              uint32_t addr, uint32_t value) {
    (void)ppc_context;
    self->WriteRegister(addr, value);
}

uint32_t NativeGraphicsSystem::ReadRegister(uint32_t address) {
    return processor_.registers().Read((address & 0xFFFF) / 4);
}

void NativeGraphicsSystem::WriteRegister(uint32_t address, uint32_t value) {
    const uint32_t index = (address & 0xFFFF) / 4;
    if (index == kCpRbWptr) {
        // The guest kicks the command processor through MMIO; a packet writing
        // this register must never be treated as a kick, which is why the
        // register file keeps the origin.
        processor_.registers().Write(index, value, RegisterFile::WriteOrigin::kMmio);
        processor_.OnWritePointer(value);
        WakeGpuWorker();
        return;
    }
    processor_.registers().Write(index, value, RegisterFile::WriteOrigin::kMmio);
}

}  // namespace sonic::rex_host::gpu
