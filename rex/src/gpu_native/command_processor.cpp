#include "command_processor.h"

#include <algorithm>
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
    // The same counter the swap advances: D3D's fences count vblanks as well as
    // frames, and a counter that only moved on swaps would stall a wait issued
    // while the game is idle.
    ++stats_.gpuCounter;
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
    if (owner_.renderState_) {
        // The state feed owns the shadow register file: the renderer reads state
        // there, and a second copy would drift.
        owner_.renderState_->OnRegisterWrite(index, value);
    } else {
        owner_.registers_.Write(index, value, RegisterFile::WriteOrigin::kPacket);
    }
    if (owner_.observer_) owner_.observer_->OnRegisterWrite(index, value);
}

void CommandProcessor::ApplyConstantPacket(uint32_t opcode, std::span<const uint32_t> payload) noexcept {
    if (!renderState_) {
        ++stats_.unsupportedPackets;
        return;
    }
    switch (static_cast<pm4::Opcode>(opcode)) {
    case pm4::Opcode::kSetConstant:
        renderState_->OnConstantBlock(payload);
        break;
    case pm4::Opcode::kSetConstant2:
    case pm4::Opcode::kSetShaderConstants:
        renderState_->OnFlatConstantBlock(payload);
        break;
    case pm4::Opcode::kLoadAluConstant: {
        if (payload.size() < 3 || !memory_) {
            ++stats_.unsupportedPackets;
            break;
        }
        const uint32_t address = payload[0] & 0x3FFFFFFFu;
        const uint32_t offsetType = payload[1];
        const uint32_t index = offsetType & 0x7FF;
        const ConstantTable table = ConstantTableFromType((offsetType >> 16) & 0xFF);
        const uint32_t base = ConstantTableBase(table);
        const uint32_t declared = payload[2] & 0xFFF;
        const uint32_t cap = uint32_t(renderState_->config().maxConstantDwordsPerBlock);
        const uint32_t dwords = std::min(declared, cap);
        std::vector<uint8_t> bytes(size_t(dwords) * 4);
        if (dwords == 0 || !memory_->Read(address, std::span<uint8_t>(bytes.data(), bytes.size()))) {
            // Unreadable constants are counted, not silently zeroed: zeroed
            // matrices would draw garbage geometry at the origin.
            ++stats_.unsupportedPackets;
            break;
        }
        std::vector<uint32_t> words(dwords);
        for (uint32_t i = 0; i < dwords; ++i)
            words[i] = (uint32_t(bytes[i * 4]) << 24) | (uint32_t(bytes[i * 4 + 1]) << 16) |
                       (uint32_t(bytes[i * 4 + 2]) << 8) | uint32_t(bytes[i * 4 + 3]);
        renderState_->OnConstantBlockFromMemory(base, index, dwords, words);
    } break;
    default:
        ++stats_.unsupportedPackets;
        break;
    }
}

void CommandProcessor::ApplyShaderUpload(uint32_t opcode, std::span<const uint32_t> payload) noexcept {
    if (!renderState_ || payload.size() < 2) {
        ++stats_.unsupportedPackets;
        return;
    }
    if (static_cast<pm4::Opcode>(opcode) == pm4::Opcode::kImLoadImmediate) {
        renderState_->OnShaderUploadImmediate(payload);
        return;
    }
    // IM_LOAD: shader_type | address, start | size_dwords, bytecode in memory.
    const uint32_t address = payload[0] & ~uint32_t(3);
    const uint32_t declared = payload[1] & 0xFFFF;
    const uint32_t dwords = std::min(declared, uint32_t(renderState_->config().maxShaderDwords));
    std::vector<uint8_t> bytes(size_t(dwords) * 4);
    if (dwords == 0 || !memory_ || !memory_->Read(address, std::span<uint8_t>(bytes.data(), bytes.size()))) {
        ++stats_.unsupportedPackets;
        return;
    }
    // Keep the packet form the renderer expects: a two-word header, then the
    // instruction words copied out of guest memory before the guest reuses it.
    std::vector<uint32_t> synthetic;
    synthetic.reserve(size_t(dwords) + 2);
    synthetic.push_back(payload[0]);
    synthetic.push_back((uint32_t(0) << 16) | dwords);
    for (uint32_t i = 0; i < dwords; ++i)
        synthetic.push_back((uint32_t(bytes[i * 4]) << 24) | (uint32_t(bytes[i * 4 + 1]) << 16) |
                            (uint32_t(bytes[i * 4 + 2]) << 8) | uint32_t(bytes[i * 4 + 3]));
    renderState_->OnShaderUploadImmediate(synthetic);
}

void CommandProcessor::ApplyMemoryWrite(std::span<const uint32_t> payload) noexcept {
    if (!renderState_) {
        ++stats_.unsupportedPackets;
        return;
    }
    renderState_->OnMemoryWrite(payload);
    if (payload.size() < 2) return;
    const uint32_t address = payload[0];
    for (size_t i = 1; i < payload.size(); ++i) {
        if (!memory_ || !memory_->Write32(address + uint32_t(i - 1) * 4, payload[i])) {
            ++stats_.unreadableMemoryWrites;
            return;
        }
        ++stats_.memoryWrites;
        ++stats_.memoryWriteDwords;
    }
}

void CommandProcessor::Sink::OnPacket(const pm4::Header& header, pm4::Action action,
                                      std::span<const uint32_t> payload) {
    if (owner_.observer_) owner_.observer_->OnPacket(header, action, payload);
    switch (action) {
    case pm4::Action::Present:
        // The decoder already verified the token signature and size. The
        // presenter runs first: it is the renderer, and it consumes this frame's
        // draws and state before the frame is closed and counted.
        owner_.drainHadSwap_ = true;
        if (payload.size() < 4) break;
        ++owner_.stats_.swaps;
        ++owner_.stats_.gpuCounter;  // the guest's frame counter advances with the frame
        if (owner_.presenter_)
            owner_.presenter_->OnSwap(payload[1], payload[2], payload[3]);
        if (owner_.renderState_) owner_.renderState_->EndFrame();
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
        if (owner_.renderState_) {
            owner_.renderState_->OnDraw(header.opcode, payload);
        } else {
            ++owner_.stats_.unsupportedPackets;
        }
        break;
    case pm4::Action::StateSet:
        owner_.ApplyConstantPacket(header.opcode, payload);
        break;
    case pm4::Action::ShaderLoad:
        owner_.ApplyShaderUpload(header.opcode, payload);
        break;
    case pm4::Action::MemoryWrite:
        owner_.ApplyMemoryWrite(payload);
        break;
    case pm4::Action::EventWrite:
        owner_.ApplyEventWrite(header.opcode, payload);
        break;
    case pm4::Action::ConditionalExec:
        ++owner_.stats_.unsupportedPackets;
        break;
    case pm4::Action::RegisterWrite:
    case pm4::Action::Unsupported:
    case pm4::Action::Count:
        break;
    }
    (void)header;
}

namespace {

/// The byte order a writeback wants, from the low two bits of its address. The
/// Xenos register map defines these four modes; anything else keeps the value
/// as it is instead of guessing.
uint32_t GpuSwap(uint32_t value, uint32_t endianness) noexcept {
    switch (endianness & 3u) {
    case 1:  // 8-in-16: bytes inside each halfword
        return ((value & 0x00FF00FFu) << 8) | ((value & 0xFF00FF00u) >> 8);
    case 2:  // 8-in-32: the whole word
        return (value << 24) | ((value & 0x0000FF00u) << 8) | ((value & 0x00FF0000u) >> 8) |
               (value >> 24);
    case 3:  // 16-in-32: the halves
        return (value >> 16) | (value << 16);
    default:  // 0: as stored
        return value;
    }
}

/// Occlusion queries do not need real sample counts to be answered: D3D only
/// asks whether a query finished, and reports "everything passed" as fake
/// counts. The extents follow the same idea (US20060055701).
constexpr uint32_t kFakeOcclusionExtent = 8192;

}  // namespace

void CommandProcessor::ApplyEventWriteValue(uint32_t address, uint32_t value) {
    const uint32_t endianness = address & 3u;
    const uint32_t target = address & ~3u;
    const uint32_t stored = GpuSwap(value, endianness);
    if (!memory_ || !memory_->Write32(target, stored)) {
        ++stats_.eventWriteFailures;
        return;
    }
    ++stats_.eventWriteValues;
}

void CommandProcessor::ApplyEventWrite(uint32_t opcode, std::span<const uint32_t> payload) {
    using Opcode = pm4::Opcode;
    if (payload.empty()) {
        ++stats_.unsupportedPackets;
        return;
    }
    ++stats_.eventWrites;
    const uint32_t initiator = payload[0];
    // The hardware latches the initiator so the driver can read back what the
    // GPU last did; the same six bits go into the register file.
    registers_.Write(kVgtEventInitiator, initiator & 0x3Fu, RegisterFile::WriteOrigin::kPacket);
    switch (static_cast<Opcode>(opcode)) {
    case Opcode::kEventWriteShd: {
        if (payload.size() < 3) {
            ++stats_.unsupportedPackets;
            return;
        }
        // Bit 31 asks for the GPU's own counter instead of the payload value:
        // this is how D3D waits for "the GPU has reached frame N".
        const uint32_t value = (initiator >> 31) ? stats_.gpuCounter : payload[2];
        ApplyEventWriteValue(payload[1], value);
        return;
    }
    case Opcode::kEventWriteExt: {
        if (payload.size() < 2) {
            ++stats_.unsupportedPackets;
            return;
        }
        // Six 16-bit extent values (occlusion query screen extents). They are
        // read back as 16-bit guest values, so each pair is written as one
        // 32-bit word in guest byte order; the address's endianness bits are
        // part of the packet but the value the driver reads is the extent.
        const uint16_t extents[6] = {0, uint16_t(kFakeOcclusionExtent >> 3), 0,
                                    uint16_t(kFakeOcclusionExtent >> 3), 0, 1};
        const uint32_t base = payload[1] & ~3u;
        for (uint32_t pair = 0; pair < 3; ++pair) {
            const uint32_t word =
                (uint32_t(extents[pair * 2]) << 16) | uint32_t(extents[pair * 2 + 1]);
            ApplyEventWriteValue(base + pair * 4u, word);
        }
        return;
    }
    case Opcode::kEventWriteZpd:
        // Occlusion query begin/end. The sample-count writeback needs the
        // renderer's occlusion tracking, so nothing is written here; the packet
        // is answered (initiator latched) and counted, never silently dropped.
        return;
    case Opcode::kEventWrite:
        // Initiator only: the hardware has nothing else to write.
        return;
    case Opcode::kEventWriteCfl:
        // Cache flush; nothing to write back.
        return;
    default:
        ++stats_.unsupportedPackets;
        return;
    }
}

void CommandProcessor::Tick() noexcept {
    if (!initialized_ || !memory_) return;
    const uint32_t write = writePointer_.load(std::memory_order_acquire);
    const uint32_t available = (write - readPointer_) & ringMaskDwords_;
    if (!available) return;
    ++stats_.drains;
    indirectUsed_ = 0;
    drainHadSwap_ = false;
    if (stats_.drains == 1) {
        // Preserved for the log: the first thing the guest submits is what a
        // device that renders nothing can report most usefully.
        firstDrainAddress_ = ringBase_;
        firstDrainCount_ = std::min<uint32_t>(available, uint32_t(firstDrainWords_.size()));
        const uint32_t ringDwords = ringMaskDwords_ + 1;
        for (uint32_t index = 0; index < firstDrainCount_; ++index) {
            const uint32_t at = ringBase_ + ((readPointer_ + index) & ringMaskDwords_) * 4u;
            (void)ringDwords;
            uint8_t bytes[4] = {0, 0, 0, 0};
            if (!memory_ || !memory_->Read(at, std::span<uint8_t>(bytes, 4))) {
                firstDrainCount_ = index;
                break;
            }
            firstDrainWords_[index] = (uint32_t(bytes[0]) << 24) | (uint32_t(bytes[1]) << 16) |
                                      (uint32_t(bytes[2]) << 8) | uint32_t(bytes[3]);
        }
    }
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
        if (memory_->Write32(readPointerWriteback_, readPointer_)) {
            // The guest spins on this value: it is how D3D learns the GPU
            // consumed its commands. One line about the first write tells
            // whether the guest is being told anything at all, and whether the
            // address and the units are the ones it is polling.
            if (stats_.readPointerWrites == 0) {
                std::fprintf(stderr,
                             "[gpu] read pointer writeback: %08X -> %08X (ring %08X, mask %08X)\n",
                             readPointer_, readPointerWriteback_, ringBase_, ringMaskDwords_);
            }
            ++stats_.readPointerWrites;
        }
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
    std::snprintf(line, sizeof(line),
                  "event_writes=%llu event_write_values=%llu event_write_failures=%llu "
                  "gpu_counter=%u\n",
                  (unsigned long long)eventWrites, (unsigned long long)eventWriteValues,
                  (unsigned long long)eventWriteFailures, gpuCounter);
    text += line;
    return text;
}

} // namespace sonic::rex_host::gpu
