#pragma once
#include "pm4.h"
#include "register_file.h"

#include <array>
#include <atomic>
#include <cstdint>
#include <span>
#include <string>
#include <vector>

namespace sonic::rex_host::gpu {

/// Guest physical memory as the guest sees it: big-endian. Translation stays on
/// the host side; the command processor never guesses an address.
class GuestMemory {
public:
    virtual ~GuestMemory() = default;
    virtual bool Read(uint32_t physicalAddress, std::span<uint8_t> destination) = 0;
    /// store_and_swap semantics: the value is written in guest byte order.
    virtual bool Write32(uint32_t physicalAddress, uint32_t value) = 0;
};

/// Where a completed frame goes. Presentation is our code, not the SDK's.
class SwapPresenter {
public:
    virtual ~SwapPresenter() = default;
    virtual void OnSwap(uint32_t frontbufferAddress, uint32_t width, uint32_t height) = 0;
};

/// The guest swap path and the vblank worker both enter the guest through the
/// interrupt callback it registered with VdSetGraphicsInterruptCallback.
class InterruptDispatcher {
public:
    virtual ~InterruptDispatcher() = default;
    virtual void DispatchInterrupt(uint32_t source, uint32_t cpu) = 0;
};

/// The guest-visible GPU device: ring buffer, register file, swap token handling
/// and read-pointer writeback. Everything here is our implementation; it uses
/// the SDK only for memory, threads and the interrupt entry point.
class CommandProcessor final : public RegisterFile::WritePointerSink {
public:
    /// The pool is fixed so an INDIRECT_BUFFER chain can never allocate without
    /// bound while the guest is streaming commands.
    CommandProcessor() noexcept : indirect_(kIndirectPool, IndirectSource{*this}) {}

    struct Stats {
        uint64_t kicks = 0;
        uint64_t drains = 0;
        uint64_t packets = 0;
        uint64_t registerWrites = 0;
        uint64_t swaps = 0;
        uint64_t interrupts = 0;
        uint64_t readPointerWrites = 0;
        uint64_t truncatedDrains = 0;
        uint64_t unsupportedPackets = 0;
        uint64_t unmappedIndirect = 0;
        uint64_t invalidRingInitializations = 0;
        std::string Format() const;
    };

    void SetMemory(GuestMemory* memory) noexcept { memory_ = memory; }
    void SetPresenter(SwapPresenter* presenter) noexcept { presenter_ = presenter; }
    void SetInterrupts(InterruptDispatcher* interrupts) noexcept { interrupts_ = interrupts; }
    RegisterFile& registers() noexcept { return registers_; }
    const RegisterFile& registers() const noexcept { return registers_; }

    /// VdInitializeRingBuffer: base pointer and log2 of the size in 8-byte units.
    void InitializeRingBuffer(uint32_t pointer, uint32_t sizeLog2) noexcept;
    /// VdEnableRingBufferRPtrWriteBack: where the guest waits for our progress.
    void EnableReadPointerWriteBack(uint32_t pointer, uint32_t blockSizeLog2) noexcept;
    /// MMIO write to CP_RB_WPTR. Called from the guest CPU thread.
    void OnWritePointer(uint32_t value) noexcept override;

    bool Initialized() const noexcept { return initialized_; }
    bool HasWork() const noexcept;
    /// Drains everything the write pointer allows. Called by our worker thread.
    void Tick() noexcept;
    /// Guest vblank, driven by the host's frame pacing.
    void MarkVblank() noexcept;

    uint32_t ReadPointer() const noexcept { return readPointer_; }
    uint32_t WritePointer() const noexcept { return writePointer_.load(std::memory_order_acquire); }
    uint64_t VblankCount() const noexcept { return vblankCount_; }
    const Stats& GetStats() const noexcept { return stats_; }

private:
    /// Ring buffer view: absolute dword indices inside a power-of-two ring.
    class RingSource final : public pm4::PacketSource {
    public:
        explicit RingSource(CommandProcessor& owner) noexcept : owner_(owner) {}
        void Begin(uint32_t readIndex, uint32_t count) noexcept;
        bool ReadDword(uint32_t& value) noexcept override;
        uint64_t Remaining() const noexcept override { return end_ - index_; }
        pm4::PacketSource* OpenIndirect(uint32_t guestAddress, uint32_t length) override;
    private:
        bool Refill() noexcept;
        CommandProcessor& owner_;
        uint32_t index_ = 0, end_ = 0;
        std::array<uint8_t, 512> block_{};
        uint32_t blockWords_ = 0, blockPosition_ = 0;
    };

    /// Guest command buffers reached through INDIRECT_BUFFER. Flat guest memory,
    /// no wrapping, bounded by the length the packet declares.
    class IndirectSource final : public pm4::PacketSource {
    public:
        explicit IndirectSource(CommandProcessor& owner) noexcept : owner_(owner) {}
        void Begin(uint32_t physicalAddress, uint32_t lengthDwords) noexcept;
        bool ReadDword(uint32_t& value) noexcept override;
        uint64_t Remaining() const noexcept override { return end_ - index_; }
        pm4::PacketSource* OpenIndirect(uint32_t guestAddress, uint32_t length) override;
    private:
        CommandProcessor& owner_;
        uint32_t physical_ = 0, index_ = 0, end_ = 0;
    };

    static constexpr size_t kIndirectPool = 16;
    class Sink final : public pm4::Sink {
    public:
        explicit Sink(CommandProcessor& owner) noexcept : owner_(owner) {}
        void OnRegisterWrite(uint32_t index, uint32_t value) override;
        void OnPacket(const pm4::Header& header, pm4::Action action,
                      std::span<const uint32_t> payload) override;
    private:
        CommandProcessor& owner_;
    };

    friend class RingSource;
    friend class IndirectSource;
    pm4::PacketSource* TakeIndirectSource(uint32_t guestAddress, uint32_t lengthDwords) noexcept;

    GuestMemory* memory_ = nullptr;
    SwapPresenter* presenter_ = nullptr;
    InterruptDispatcher* interrupts_ = nullptr;
    RegisterFile registers_;

    bool initialized_ = false;
    uint32_t ringBase_ = 0;
    uint32_t ringMaskDwords_ = 0;   // dwords in the ring minus one
    uint32_t readPointer_ = 0;
    std::atomic<uint32_t> writePointer_{0};
    uint32_t readPointerWriteback_ = 0;

    RingSource ring_{*this};
    std::vector<IndirectSource> indirect_;
    uint32_t indirectUsed_ = 0;

    uint64_t vblankCount_ = 0;
    Stats stats_{};
};

} // namespace sonic::rex_host::gpu
