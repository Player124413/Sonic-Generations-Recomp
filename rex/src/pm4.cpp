#include "pm4.h"
#include <array>
#include <cstdio>
#include <vector>

namespace sonic::rex_host::pm4 {
namespace {
constexpr uint32_t kTypeShift = 30;
constexpr uint32_t kCountMask = 0x3FFFu;
constexpr uint32_t kType0IndexMask = 0x7FFFu;
constexpr uint32_t kType0OneIndexBit = 15;
constexpr uint32_t kType1IndexMask = 0x7FFu;
constexpr uint32_t kOpcodeMask = 0x7Fu;
constexpr uint32_t kOpcodeShift = 8;
constexpr uint32_t kPredicateBit = 1;

/// Hard ceiling independent of Limits, so a caller cannot ask for an unbounded
/// stack buffer.
constexpr uint32_t kMaxPayloadBufferWords = 1024;

class PayloadReader {
public:
    PayloadReader(PacketSource& source, const Limits& limits) noexcept
        : source_(source), capacity_(limits.maxPayloadWords < kMaxPayloadBufferWords
                                        ? limits.maxPayloadWords
                                        : kMaxPayloadBufferWords) {}

    /// Reads up to `count` words. Returns false when the source ended early.
    bool Read(uint32_t count) noexcept {
        read_ = 0;
        overflow_ = count > capacity_;
        for (uint32_t i = 0; i < count; ++i) {
            uint32_t value = 0;
            if (!source_.ReadDword(value)) { truncated_ = true; return false; }
            if (i < capacity_) buffer_[read_++] = value;
        }
        return true;
    }
    void Discard(uint32_t count) noexcept {
        for (uint32_t i = 0; i < count; ++i) {
            uint32_t value = 0;
            if (!source_.ReadDword(value)) { truncated_ = true; return; }
        }
    }
    std::span<const uint32_t> Words() const noexcept {
        // A packet larger than the buffer is reported as "payload unavailable"
        // rather than as a partial payload that a renderer could misread.
        return overflow_ ? std::span<const uint32_t>() : std::span<const uint32_t>(buffer_.data(), read_);
    }
    bool truncated() const noexcept { return truncated_; }

private:
    PacketSource& source_;
    uint32_t capacity_;
    std::array<uint32_t, kMaxPayloadBufferWords> buffer_{};
    uint32_t read_ = 0;
    bool overflow_ = false;
    bool truncated_ = false;
};

bool ShouldStop(const Stats& stats, const Limits& limits) noexcept {
    return stats.packets >= limits.maxPackets || stats.registerWrites >= limits.maxRegisterWrites;
}

void WalkSource(PacketSource& source, Sink& sink, const Limits& limits, Stats& stats,
                uint32_t depth, uint32_t& indirectUsed, uint64_t& consumed,
                uint64_t& completed) noexcept {
    while (!ShouldStop(stats, limits)) {
        uint32_t word = 0;
        if (!source.ReadDword(word)) return;
        // A zero word is padding, not a Type 0 write of register 0. Ring space the
        // guest has not filled yet is zeroed, and treating each zero as a header
        // would consume the next word as its value: the whole stream would shift
        // and the device would write registers the guest never wrote. The
        // reference processor returns early on a zero packet for the same reason.
        if (word == 0) {
            ++stats.packets;
            ++stats.nops;
            consumed += 1;
            completed += 1;
            continue;
        }
        const Header header = DecodeHeader(word);
        const uint32_t count = PayloadWords(header);
        ++stats.packets;
        stats.payloadWords += count;
        consumed += 1 + count;
        if (header.predicate) ++stats.predicates;

        switch (header.type) {
        case PacketType::kType0: {
            const Action action = Action::RegisterWrite;
            if (header.writeOneIndex) {
                for (uint32_t i = 0; i < count; ++i) {
                    uint32_t value = 0;
                    if (!source.ReadDword(value)) { stats.truncated = true; return; }
                    sink.OnRegisterWrite(header.index, value);
                    ++stats.registerWrites;
                }
            } else {
                for (uint32_t i = 0; i < count; ++i) {
                    uint32_t value = 0;
                    if (!source.ReadDword(value)) { stats.truncated = true; return; }
                    sink.OnRegisterWrite(header.index + i, value);
                    ++stats.registerWrites;
                }
            }
            ++stats.perAction[static_cast<size_t>(action)];
            sink.OnPacket(header, action, {});
            completed += 1 + count;
            break;
        }
        case PacketType::kType1: {
            uint32_t first = 0, second = 0;
            if (!source.ReadDword(first) || !source.ReadDword(second)) {
                stats.truncated = true;
                return;
            }
            sink.OnRegisterWrite(header.index, first);
            sink.OnRegisterWrite(header.index2, second);
            stats.registerWrites += 2;
            ++stats.perAction[static_cast<size_t>(Action::RegisterWrite)];
            sink.OnPacket(header, Action::RegisterWrite, {});
            completed += 1 + count;
            break;
        }
        case PacketType::kType2:
            ++stats.nops;
            ++stats.perAction[static_cast<size_t>(Action::Unsupported)];
            sink.OnPacket(header, Action::Unsupported, {});
            completed += 1 + count;
            break;
        case PacketType::kType3: {
            Action action = ClassifyOpcode(header.opcode);
            PayloadReader payload(source, limits);
            const bool read = payload.Read(count);
            if (!read && !payload.truncated()) {
                // Larger than the walker buffer: the payload was consumed but is
                // not exposed, so classification must not depend on its content.
                if (action == Action::Present) action = Action::Unsupported;
            }
            if (payload.truncated()) { stats.truncated = true; return; }
            const auto words = payload.Words();
            if (header.predicate && header.opcode == static_cast<uint32_t>(Opcode::kXeSwap)) {
                // A predicated swap is never valid; presenting it would advance
                // the frame on a packet the guest wanted skipped.
                action = Action::Unsupported;
            }
            if (action == Action::Present &&
                (words.empty() || words[0] != kSwapSignature)) {
                // Only the real VdSwap token may present. Anything else on
                // opcode 0x64 is counted, not shown.
                action = Action::Unsupported;
            }
            ++stats.perAction[static_cast<size_t>(action)];
            sink.OnPacket(header, action, words);
            if (action == Action::IndirectBuffer) {
                const uint32_t address = words.empty() ? 0 : words[0];
                const uint32_t length = words.size() > 1 ? (words[1] & 0xFFFFFu) : 0;
                ++stats.indirectBuffers;
                ++indirectUsed;
                if (depth >= limits.maxIndirectDepth || indirectUsed > limits.maxIndirectBuffers) {
                    stats.limitsHit = true;
                    return;
                }
                PacketSource* nested = source.OpenIndirect(address, length);
                if (!nested) {
                    stats.indirectNotFollowed = true;
                } else {
                    // Words of another buffer are not the walked source's words.
                    uint64_t nestedConsumed = 0, nestedCompleted = 0;
                    WalkSource(*nested, sink, limits, stats, depth + 1, indirectUsed,
                               nestedConsumed, nestedCompleted);
                    if (nestedConsumed == 0) ++stats.emptyIndirectBuffers;
                }
            }
            completed += 1 + count;
            break;
        }
        }
    }
    if (ShouldStop(stats, limits)) stats.limitsHit = true;
}
} // namespace

uint32_t MakePacketType0(uint32_t index, uint32_t count, bool oneIndex) noexcept {
    const uint32_t bounded = count < 1 ? 1 : (count > 0x4000 ? 0x4000 : count);
    return (((bounded - 1) & kCountMask) << 16) | (oneIndex ? (1u << kType0OneIndexBit) : 0u) |
           (index & kType0IndexMask);
}

uint32_t MakePacketType1(uint32_t index1, uint32_t index2) noexcept {
    return (1u << kTypeShift) | ((index2 & kType1IndexMask) << 11) | (index1 & kType1IndexMask);
}

uint32_t MakePacketType2() noexcept {
    return 2u << kTypeShift;
}

uint32_t MakePacketType3(uint32_t opcode, uint32_t count, bool predicate) noexcept {
    const uint32_t bounded = count < 1 ? 1 : (count > 0x4000 ? 0x4000 : count);
    return (3u << kTypeShift) | (((bounded - 1) & kCountMask) << 16) |
           ((opcode & kOpcodeMask) << kOpcodeShift) | (predicate ? kPredicateBit : 0u);
}

const char* ActionName(Action value) noexcept {
    switch (value) {
    case Action::RegisterWrite: return "register_write";
    case Action::Draw: return "draw";
    case Action::Present: return "present";
    case Action::Wait: return "wait";
    case Action::IndirectBuffer: return "indirect_buffer";
    case Action::MemoryWrite: return "memory_write";
    case Action::Interrupt: return "interrupt";
    case Action::EventWrite: return "event_write";
    case Action::ShaderLoad: return "shader_load";
    case Action::StateSet: return "state_set";
    case Action::ConditionalExec: return "conditional_exec";
    case Action::Unsupported: return "unsupported";
    case Action::Count: break;
    }
    return "unknown";
}

const char* OpcodeName(uint32_t opcode) noexcept {
    switch (static_cast<Opcode>(opcode)) {
    case Opcode::kNop: return "NOP";
    case Opcode::kIndirectBuffer: return "INDIRECT_BUFFER";
    case Opcode::kIndirectBufferPfd: return "INDIRECT_BUFFER_PFD";
    case Opcode::kWaitForIdle: return "WAIT_FOR_IDLE";
    case Opcode::kWaitRegMem: return "WAIT_REG_MEM";
    case Opcode::kWaitRegEq: return "WAIT_REG_EQ";
    case Opcode::kWaitRegGte: return "WAIT_REG_GTE";
    case Opcode::kWaitUntilRead: return "WAIT_UNTIL_READ";
    case Opcode::kWaitIbPfdComplete: return "WAIT_IB_PFD_COMPLETE";
    case Opcode::kRegRmw: return "REG_RMW";
    case Opcode::kRegToMem: return "REG_TO_MEM";
    case Opcode::kMemWrite: return "MEM_WRITE";
    case Opcode::kMemWriteCntr: return "MEM_WRITE_CNTR";
    case Opcode::kCondExec: return "COND_EXEC";
    case Opcode::kCondWrite: return "COND_WRITE";
    case Opcode::kEventWrite: return "EVENT_WRITE";
    case Opcode::kEventWriteShd: return "EVENT_WRITE_SHD";
    case Opcode::kEventWriteCfl: return "EVENT_WRITE_CFL";
    case Opcode::kEventWriteExt: return "EVENT_WRITE_EXT";
    case Opcode::kEventWriteZpd: return "EVENT_WRITE_ZPD";
    case Opcode::kDrawIndx: return "DRAW_INDX";
    case Opcode::kDrawIndx2: return "DRAW_INDX_2";
    case Opcode::kDrawIndxBin: return "DRAW_INDX_BIN";
    case Opcode::kDrawIndx2Bin: return "DRAW_INDX_2_BIN";
    case Opcode::kVizQuery: return "VIZ_QUERY";
    case Opcode::kSetState: return "SET_STATE";
    case Opcode::kSetConstant: return "SET_CONSTANT";
    case Opcode::kSetConstant2: return "SET_CONSTANT2";
    case Opcode::kSetShaderConstants: return "SET_SHADER_CONSTANTS";
    case Opcode::kLoadAluConstant: return "LOAD_ALU_CONSTANT";
    case Opcode::kImLoad: return "IM_LOAD";
    case Opcode::kImLoadImmediate: return "IM_LOAD_IMMEDIATE";
    case Opcode::kLoadConstantContext: return "LOAD_CONSTANT_CONTEXT";
    case Opcode::kInvalidateState: return "INVALIDATE_STATE";
    case Opcode::kSetShaderBases: return "SET_SHADER_BASES";
    case Opcode::kSetBinBaseOffset: return "SET_BIN_BASE_OFFSET";
    case Opcode::kSetBinMask: return "SET_BIN_MASK";
    case Opcode::kSetBinSelect: return "SET_BIN_SELECT";
    case Opcode::kContextUpdate: return "CONTEXT_UPDATE";
    case Opcode::kInterrupt: return "INTERRUPT";
    case Opcode::kXeSwap: return "XE_SWAP";
    case Opcode::kImStore: return "IM_STORE";
    case Opcode::kMeInit: return "ME_INIT";
    case Opcode::kSetBinMaskLo: return "SET_BIN_MASK_LO";
    case Opcode::kSetBinMaskHi: return "SET_BIN_MASK_HI";
    case Opcode::kSetBinSelectLo: return "SET_BIN_SELECT_LO";
    case Opcode::kSetBinSelectHi: return "SET_BIN_SELECT_HI";
    }
    return "UNKNOWN";
}

Action ClassifyOpcode(uint32_t opcode) noexcept {
    switch (static_cast<Opcode>(opcode)) {
    case Opcode::kDrawIndx:
    case Opcode::kDrawIndx2:
    case Opcode::kDrawIndxBin:
    case Opcode::kDrawIndx2Bin:
        return Action::Draw;
    case Opcode::kXeSwap:
        return Action::Present;
    case Opcode::kWaitForIdle:
    case Opcode::kWaitRegMem:
    case Opcode::kWaitRegEq:
    case Opcode::kWaitRegGte:
    case Opcode::kWaitUntilRead:
    case Opcode::kWaitIbPfdComplete:
        return Action::Wait;
    case Opcode::kIndirectBuffer:
    case Opcode::kIndirectBufferPfd:
        return Action::IndirectBuffer;
    case Opcode::kRegRmw:
    case Opcode::kRegToMem:
    case Opcode::kMemWrite:
    case Opcode::kMemWriteCntr:
    case Opcode::kCondWrite:
        return Action::MemoryWrite;
    case Opcode::kInterrupt:
        return Action::Interrupt;
    case Opcode::kEventWrite:
    case Opcode::kEventWriteShd:
    case Opcode::kEventWriteCfl:
    case Opcode::kEventWriteExt:
    case Opcode::kEventWriteZpd:
        return Action::EventWrite;
    case Opcode::kCondExec:
        return Action::ConditionalExec;
    case Opcode::kImLoad:
    case Opcode::kImLoadImmediate:
    case Opcode::kImStore:
    case Opcode::kMeInit:
        return Action::ShaderLoad;
    case Opcode::kSetState:
    case Opcode::kSetConstant:
    case Opcode::kSetConstant2:
    case Opcode::kSetShaderConstants:
    case Opcode::kLoadAluConstant:
    case Opcode::kLoadConstantContext:
    case Opcode::kSetShaderBases:
    case Opcode::kSetBinBaseOffset:
    case Opcode::kSetBinMask:
    case Opcode::kSetBinSelect:
    case Opcode::kContextUpdate:
    case Opcode::kInvalidateState:
    case Opcode::kSetBinMaskLo:
    case Opcode::kSetBinMaskHi:
    case Opcode::kSetBinSelectLo:
    case Opcode::kSetBinSelectHi:
    case Opcode::kVizQuery:
        return Action::StateSet;
    case Opcode::kNop:
        return Action::Unsupported;
    }
    return Action::Unsupported;
}

Header DecodeHeader(uint32_t word) noexcept {
    Header header;
    header.type = static_cast<PacketType>(word >> kTypeShift);
    switch (header.type) {
    case PacketType::kType0:
        header.count = ((word >> 16) & kCountMask) + 1;
        header.index = word & kType0IndexMask;
        header.writeOneIndex = ((word >> kType0OneIndexBit) & 1u) != 0;
        break;
    case PacketType::kType1:
        header.count = 2;
        header.index = word & kType1IndexMask;
        header.index2 = (word >> 11) & kType1IndexMask;
        break;
    case PacketType::kType2:
        header.count = 0;
        break;
    case PacketType::kType3:
        header.count = ((word >> 16) & kCountMask) + 1;
        header.opcode = (word >> kOpcodeShift) & kOpcodeMask;
        header.predicate = (word & kPredicateBit) != 0;
        break;
    }
    return header;
}

uint32_t PayloadWords(const Header& header) noexcept {
    switch (header.type) {
    case PacketType::kType0:
    case PacketType::kType3:
        return header.count;
    case PacketType::kType1:
        return 2;
    case PacketType::kType2:
        return 0;
    }
    return 0;
}

Stats Walk(PacketSource& source, Sink& sink, const Limits& limits) noexcept {
    Stats stats;
    uint32_t indirectUsed = 0;
    WalkSource(source, sink, limits, stats, 1, indirectUsed, stats.consumedWords,
               stats.completedWords);
    return stats;
}

std::string Stats::Format() const {
    std::string text;
    char line[128];
    std::snprintf(line, sizeof(line), "packets=%llu executed=%llu unsupported=%llu\n",
                  (unsigned long long)packets, (unsigned long long)Executed(),
                  (unsigned long long)Of(Action::Unsupported));
    text += line;
    for (uint32_t i = 0; i < static_cast<uint32_t>(Action::Count); ++i) {
        const auto action = static_cast<Action>(i);
        if (action == Action::Unsupported || perAction[i] == 0) continue;
        text += std::string(ActionName(action)) + "=" + std::to_string(perAction[i]) + "\n";
    }
    std::snprintf(line, sizeof(line),
                  "register_writes=%llu payload_words=%llu indirect_buffers=%llu predicates=%llu\n",
                  (unsigned long long)registerWrites, (unsigned long long)payloadWords,
                  (unsigned long long)indirectBuffers, (unsigned long long)predicates);
    text += line;
    text += std::string("consumed_words=") + std::to_string(consumedWords) +
            " completed_words=" + std::to_string(completedWords) + "\n";
    text += std::string("empty_indirect_buffers=") + std::to_string(emptyIndirectBuffers) + "\n";
    text += std::string("truncated=") + (truncated ? "yes" : "no") +
            " limits_hit=" + (limitsHit ? "yes" : "no") +
            " indirect_not_followed=" + (indirectNotFollowed ? "yes" : "no") + "\n";
    return text;
}

bool BigEndianDwordSource::ReadDword(uint32_t& value) noexcept {
    if (offset_ + 4 > bytes_.size()) return false;
    value = (uint32_t(bytes_[offset_]) << 24) | (uint32_t(bytes_[offset_ + 1]) << 16) |
            (uint32_t(bytes_[offset_ + 2]) << 8) | uint32_t(bytes_[offset_ + 3]);
    offset_ += 4;
    return true;
}

uint64_t BigEndianDwordSource::Remaining() const noexcept {
    return (bytes_.size() - offset_) / 4;
}

uint32_t SwapGuestDword(std::span<const uint8_t> bytes, size_t offset) noexcept {
    if (offset + 4 > bytes.size()) return 0;
    return (uint32_t(bytes[offset]) << 24) | (uint32_t(bytes[offset + 1]) << 16) |
           (uint32_t(bytes[offset + 2]) << 8) | uint32_t(bytes[offset + 3]);
}

bool ParseSwapTokenAt(std::span<const uint32_t> words, size_t signatureIndex, SwapToken& token) noexcept {
    if (signatureIndex == 0 || signatureIndex + 3 >= words.size()) return false;
    if (words[signatureIndex] != kSwapSignature) return false;
    const Header header = DecodeHeader(words[signatureIndex - 1]);
    if (header.type != PacketType::kType3) return false;
    if (header.opcode != static_cast<uint32_t>(Opcode::kXeSwap)) return false;
    // The kernel writes signature, frontbuffer, width and height.
    if (header.count < 4) return false;
    const uint32_t frontbuffer = words[signatureIndex + 1];
    const uint32_t width = words[signatureIndex + 2];
    const uint32_t height = words[signatureIndex + 3];
    // A swap of nothing at an impossible size is a corrupted token, not a frame.
    if (frontbuffer == 0 || width == 0 || width > 8192 || height == 0 || height > 8192) return false;
    token.frontbufferAddress = frontbuffer;
    token.width = width;
    token.height = height;
    token.offset = signatureIndex;
    return true;
}

bool FindSwapToken(std::span<const uint32_t> words, SwapToken& token) noexcept {
    for (size_t i = 1; i + 3 < words.size(); ++i) {
        if (words[i] != kSwapSignature) continue;
        if (ParseSwapTokenAt(words, i, token)) return true;
    }
    return false;
}

SwapProbeResult ProbeSwapToken(uint32_t guestAddress, size_t words,
    const std::function<bool(uint32_t, std::span<uint8_t>)>& read) noexcept {
    SwapProbeResult result;
    if (guestAddress == 0 || words == 0) return result;
    // Dword by dword, stopping at the first unreadable one. Guest buffers are
    // often a few hundred bytes inside a much larger address space, and a single
    // large read would fail on the first page the guest has not committed --
    // which is what made a live probe report "no token" while the token was in
    // the very first dword of the buffer it was pointed at.
    std::vector<uint8_t> bytes(words * 4);
    uint32_t readable = 0;
    for (size_t index = 0; index < words; ++index) {
        std::span<uint8_t> word(bytes.data() + index * 4, 4);
        if (!read(guestAddress + uint32_t(index) * 4u, word)) break;
        ++readable;
    }
    result.wordsRead = readable;
    if (!readable) return result;
    std::vector<uint32_t> dwords(readable);
    for (size_t i = 0; i < readable; ++i) dwords[i] = SwapGuestDword(bytes, i * 4);
    SwapToken token;
    if (!FindSwapToken(dwords, token)) return result;
    result.found = true;
    result.token = token;
    result.signatureIndex = static_cast<uint32_t>(token.offset);
    return result;
}

} // namespace sonic::rex_host::pm4
