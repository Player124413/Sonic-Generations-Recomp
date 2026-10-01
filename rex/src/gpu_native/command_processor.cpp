#include "command_processor.h"

#include <cstdio>

namespace sonic::rex_host::gpu {
namespace {

/// A 2 MB ring is already forty times what the guest asks for; anything larger is
/// a corrupt VdInitializeRingBuffer, not a bigger ring.
constexpr uint32_t kMaxRingSizeLog2 = 18;

uint32_t GuestDword(std::span<const uint8_t> bytes, size_t offset) noexcept {
    return (uint32_t(bytes[offset]) << 24) | (uint32_t(bytes[offset + 1]) << 16) |
           (uint32_t(bytes[offset + 2]) << 8) | uint32_t(bytes[offset + 3]);
}

} // namespace

void CommandProcessor::InitializeRingBuffer(uint32_t pointer, uint32_t sizeLog2) noexcept {
    if (!pointer || sizeLog2 == 0 || sizeLog2 > kMaxRingSizeLog2) {
        // Refuse a ring we cannot address instead of walking wild memory.
        initialized_ = false;
        ++stats_.invalidRingInitializations;
        return;
    }
    ringBase_ = pointer;
    // size_log2 counts 8-byte units; the pointer itself is a dword index.
    ringMaskDwords_ = (uint32_t(1) << (sizeLog2 + 1)) - 1;
    readPointer_ = 0;
    writePointer_.store(0, std::memory_order_release);
    initialized_ = true;
}

void CommandProcessor::EnableReadPointerWriteBack(uint32_t pointer, uint32_t blockSizeLog2) noexcept {
    // block_size_log2 is the log2 of quadwords between writebacks; the guest is
    // free to ignore our pacing, so we simply write back after each drain.
    (void)blockSizeLog2;
    readPointerWriteback_ = pointer;
}

void CommandProcessor::OnWritePointer(uint32_t value) noexcept {
    ++stats_.kicks;
    writePointer_.store(value, std::memory_order_release);
}

bool CommandProcessor::HasWork() const noexcept {
    if (!initialized_) return false;
    const uint32_t write = writePointer_.load(std::memory_order_acquire);
    return ((write - readPointer_) & ringMaskDwords_) != 0;
}

void CommandProcessor::MarkVblank() noexcept {
    ++vblankCount_;
    if (interrupts_) interrupts_->DispatchInterrupt(0, 2);
}

void CommandProcessor::RingSource::Begin(uint32_t readIndex, uint32_t count) noexcept {
    index_ = readIndex;
    end_ = readIndex + count;  // absolute dword index, count dwords ahead
    blockWords_ = 0;
    blockPosition_ = 0;
}

bool CommandProcessor::RingSource::Refill() noexcept {
    CommandProcessor& owner = owner_;
    if (index_ >= end_ || !owner.memory_) return false;
    const uint32_t ringBytes = (owner.ringMaskDwords_ + 1) * 4;
    const uint32_t ringOffset = (index_ & owner.ringMaskDwords_) * 4;
    uint32_t bytes = uint32_t(block_.size());
    if (bytes > ringBytes - ringOffset) bytes = ringBytes - ringOffset;
    if (bytes > (end_ - index_) * 4) bytes = (end_ - index_) * 4;
    bytes &= ~3u;
    if (!bytes) return false;
    if (!owner.memory_->Read(owner.ringBase_ + ringOffset, std::span<uint8_t>(block_.data(), bytes)))
        return false;
    blockWords_ = bytes / 4;
    blockPosition_ = 0;
    return true;
}

bool CommandProcessor::RingSource::ReadDword(uint32_t& value) noexcept {
    if (index_ >= end_) return false;
    if (blockPosition_ >= blockWords_ && !Refill()) return false;
    value = GuestDword(block_, size_t(blockPosition_) * 4);
    ++blockPosition_;
    ++index_;
    return true;
}

pm4::PacketSource* CommandProcessor::RingSource::OpenIndirect(uint32_t guestAddress,
                                                              uint32_t length) {
    return owner_.TakeIndirectSource(guestAddress, length);
}

void CommandProcessor::IndirectSource::Begin(uint32_t physicalAddress, uint32_t lengthDwords) noexcept {
    physical_ = physicalAddress;
    index_ = 0;
    end_ = lengthDwords;
}

bool CommandProcessor::IndirectSource::ReadDword(uint32_t& value) noexcept {
    if (index_ >= end_ || !owner_.memory_) return false;
    uint8_t bytes[4];
    if (!owner_.memory_->Read(physical_ + index_ * 4, std::span<uint8_t>(bytes, 4))) return false;
    value = GuestDword(bytes, 0);
    ++index_;
    return true;
}

pm4::PacketSource* CommandProcessor::IndirectSource::OpenIndirect(uint32_t guestAddress,
                                                                  uint32_t length) {
    return owner_.TakeIndirectSource(guestAddress, length);
}

pm4::PacketSource* CommandProcessor::TakeIndirectSource(uint32_t guestAddress,
                                                        uint32_t lengthDwords) noexcept {
    if (lengthDwords == 0 || indirectUsed_ >= indirect_.size()) return nullptr;
    // The GPU sees CPU addresses masked into its window; this is the hardware
    // mapping, not a host guess.
    const uint32_t physical = guestAddress & 0x1FFFFFFFu;
    // Follow only what we can actually read: an unmapped buffer must be counted
    // as not executed instead of silently producing an empty walk.
    uint8_t probe[4];
    if (!memory_ || !memory_->Read(physical, std::span<uint8_t>(probe, 4))) return nullptr;
    IndirectSource& source = indirect_[indirectUsed_++];
    source.Begin(physical, lengthDwords);
    return &source;
}

void CommandProcessor::Sink::OnRegisterWrite(uint32_t index, uint32_t value) {
    owner_.registers_.Write(index, value, RegisterFile::WriteOrigin::kPacket);
    if (owner_.observer_) owner_.observer_->OnRegisterWrite(index, value);
}

void CommandProcessor::Sink::OnPacket(const pm4::Header& header, pm4::Action action,
                                      std::span<const uint32_t> payload) {
    if (owner_.observer_) owner_.observer_->OnPacket(header, action, payload);
    switch (action) {
    case pm4::Action::Present:
        // The decoder already verified the token signature and size.
        owner_.drainHadSwap_ = true;
        if (payload.size() < 4) break;
        ++owner_.stats_.swaps;
        if (owner_.presenter_)
            owner_.presenter_->OnSwap(payload[1], payload[2], payload[3]);
        break;
    case pm4::Action::Interrupt:
        // Type-3 INTERRUPT carries a CPU mask; the guest waits on those CPUs.
        if (payload.empty()) break;
        for (uint32_t cpu = 0; cpu < 6; ++cpu) {
            if (!(payload[0] & (1u << cpu))) continue;
            ++owner_.stats_.interrupts;
            if (owner_.interrupts_) owner_.interrupts_->DispatchInterrupt(1, cpu);
        }
        break;
    case pm4::Action::IndirectBuffer:
        // Following the buffer is the walker's job; reaching here without a
        // payload means the packet was too large to expose.
        if (payload.size() < 2) ++owner_.stats_.unsupportedPackets;
        break;
    case pm4::Action::Wait:
        // WAIT_* needs register and memory polling; until it is implemented the
        // command is counted and the stream continues, never silently ignored.
        ++owner_.stats_.unsupportedPackets;
        break;
    case pm4::Action::Draw:
    case pm4::Action::MemoryWrite:
    case pm4::Action::EventWrite:
    case pm4::Action::ConditionalExec:
    case pm4::Action::ShaderLoad:
    case pm4::Action::StateSet:
        ++owner_.stats_.unsupportedPackets;
        break;
    case pm4::Action::RegisterWrite:
    case pm4::Action::Unsupported:
    case pm4::Action::Count:
        break;
    }
    (void)header;
}

void CommandProcessor::Tick() noexcept {
    if (!initialized_ || !memory_) return;
    const uint32_t write = writePointer_.load(std::memory_order_acquire);
    const uint32_t available = (write - readPointer_) & ringMaskDwords_;
    if (!available) return;
    ++stats_.drains;
    indirectUsed_ = 0;
    drainHadSwap_ = false;
    ring_.Begin(readPointer_, available);
    Sink sink(*this);
    pm4::Limits limits;
    limits.maxPackets = available;  // one packet per dword is the absolute ceiling
    limits.maxPayloadWords = 4096;
    const pm4::Stats walked = pm4::Walk(ring_, sink, limits);
    stats_.packets += walked.packets;
    stats_.registerWrites += walked.registerWrites;
    stats_.unsupportedPackets += walked.Of(pm4::Action::Unsupported);
    if (walked.indirectNotFollowed) ++stats_.unmappedIndirect;
    stats_.unmappedIndirect += walked.emptyIndirectBuffers;
    if (walked.truncated) {
        // The guest is still writing this packet: stop at the last complete one
        // so nothing is executed half-built and nothing is lost.
        ++stats_.truncatedDrains;
        readPointer_ = (readPointer_ + uint32_t(walked.completedWords)) & ringMaskDwords_;
    } else {
        readPointer_ = write;
    }
    if (readPointerWriteback_) {
        if (memory_->Write32(readPointerWriteback_, readPointer_)) ++stats_.readPointerWrites;
    }
    if (observer_) {
        DrainInfo drain;
        drain.ringBase = ringBase_;
        drain.ringMaskDwords = ringMaskDwords_;
        drain.readPointer = (write - available) & ringMaskDwords_;
        drain.availableWords = available;
        drain.completedWords = walked.truncated ? uint32_t(walked.completedWords) : available;
        drain.truncated = walked.truncated;
        drain.hadSwap = drainHadSwap_;
        observer_->OnDrain(drain);
    }
}

std::string CommandProcessor::Stats::Format() const {
    std::string text;
    char line[192];
    std::snprintf(line, sizeof(line),
                  "kicks=%llu drains=%llu packets=%llu register_writes=%llu swaps=%llu "
                  "interrupts=%llu read_pointer_writes=%llu\n",
                  (unsigned long long)kicks, (unsigned long long)drains,
                  (unsigned long long)packets, (unsigned long long)registerWrites,
                  (unsigned long long)swaps, (unsigned long long)interrupts,
                  (unsigned long long)readPointerWrites);
    text += line;
    std::snprintf(line, sizeof(line),
                  "truncated_drains=%llu unsupported_packets=%llu unmapped_indirect=%llu "
                  "invalid_ring_initializations=%llu\n",
                  (unsigned long long)truncatedDrains, (unsigned long long)unsupportedPackets,
                  (unsigned long long)unmappedIndirect,
                  (unsigned long long)invalidRingInitializations);
    text += line;
    return text;
}

} // namespace sonic::rex_host::gpu
