#include "native_graphics_system.h"

#include <rex/system/kernel_state.h>
#include <rex/system/xmemory.h>
#include <rex/system/xtypes.h>

#include <algorithm>
#include <chrono>
#include <cstdarg>
#include <cstdio>
#include <thread>

namespace sonic::rex_host::gpu {
namespace {
// GPU registers live in a 64 KiB window at 0x7FC80000; the guest addresses a
// register as (address & 0xFFFF) / 4, which is the index our register file uses.
constexpr uint32_t kGpuMmioBase = 0x7FC80000;
constexpr uint32_t kGpuMmioMask = 0xFFFF0000;
constexpr uint32_t kGpuMmioSize = 0x0000FFFF;

void Log(const char* format, ...) {
    // The runtime's logging macros are SDK internals; a plain stderr line keeps
    // this plugin free of SDK logging dependencies while staying visible in the
    // launcher's diagnostics log.
    va_list arguments;
    va_start(arguments, format);
    std::fputs("[rexgpu-native] ", stderr);
    std::vfprintf(stderr, format, arguments);
    std::fputs("\n", stderr);
    va_end(arguments);
}
}  // namespace

//------------------------------------------------------------------------------
// Swap sink
//------------------------------------------------------------------------------
void NativeSwapSink::OnSwap(uint32_t frontbufferAddress, uint32_t width, uint32_t height) {
    address_.store(frontbufferAddress, std::memory_order_relaxed);
    width_.store(width, std::memory_order_relaxed);
    height_.store(height, std::memory_order_relaxed);
    frames_.fetch_add(1, std::memory_order_acq_rel);
}

NativeSwapSink::Frame NativeSwapSink::LastFrame() const noexcept {
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
    // Presentation is not ours yet: returning success here would make the host
    // claim a window it cannot show. Say no, name the reason, and keep the guest
    // GPU usable -- SetupGuestGpu runs either way, exactly like a headless SDK
    // provider.
    (void)app_context;
    Log("presentation is not implemented yet; the guest GPU runs without a window");
    return X_STATUS_UNSUCCESSFUL;
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

    // Headless vsync pacing is ours; with no presentation the guest must still
    // see vblanks or the D3D present path waits forever.
    StartVblankWorker(kernel_state);

    if (!function_dispatcher->memory()->AddVirtualMappedRange(
            kGpuMmioBase, kGpuMmioMask, kGpuMmioSize, this,
            reinterpret_cast<rex::runtime::MMIOReadCallback>(ReadRegisterThunk),
            reinterpret_cast<rex::runtime::MMIOWriteCallback>(WriteRegisterThunk))) {
        Log("cannot register the GPU MMIO window at %08X", kGpuMmioBase);
        StopVblankWorker();
        return X_STATUS_UNSUCCESSFUL;
    }
    guestGpuReady_ = true;
    Log("guest GPU up: MMIO %08X, ring/writeback driven by the guest", kGpuMmioBase);
    return X_STATUS_SUCCESS;
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
    vblankThread_ = std::make_unique<rex::system::XHostThread>(
        kernel_state, 128 * 1024, 0, [this]() {
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
        vblankThread_->Wait(0, 0, 0, nullptr);
        vblankThread_.reset();
    }
}

//------------------------------------------------------------------------------
// Guest GPU services (the Vd* exports reach these)
//------------------------------------------------------------------------------
void NativeGraphicsSystem::InitializeRingBuffer(uint32_t ptr, uint32_t size_log2) {
    processor_.InitializeRingBuffer(ptr, size_log2);
    Log("ring buffer at %08X, size log2 %u", ptr, size_log2);
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
    if (!guestGpuReady_ && !vblankThread_) return;
    StopVblankWorker();
    processor_.SetInterrupts(nullptr);
    processor_.SetPresenter(nullptr);
    processor_.SetMemory(nullptr);
    guestGpuReady_ = false;
    Log("guest GPU down after %llu swapped frames, %llu interrupts",
        static_cast<unsigned long long>(swapSink_.FrameCount()),
        static_cast<unsigned long long>(interrupts_.count()));
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
        return;
    }
    processor_.registers().Write(index, value, RegisterFile::WriteOrigin::kMmio);
}

}  // namespace sonic::rex_host::gpu
