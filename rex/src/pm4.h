#pragma once
// Our own command-stream front end. This is the foundation of the Xenos-free
// GPU: the guest builds PM4 packets in big-endian guest memory, and this module
// turns that byte stream into register writes, draws and swap tokens without any
// SDK graphics code involved.
//
// Facts encoded here are Xenos hardware facts (packet layout, opcodes), verified
// against the guest-visible contract of VdSwap / VdInitializeRingBuffer.
#include <cstddef>
#include <cstdint>
#include <functional>
#include <span>
#include <string>

namespace sonic::rex_host::pm4 {

enum class PacketType : uint32_t { kType0 = 0, kType1 = 1, kType2 = 2, kType3 = 3 };

/// What the renderer has to do with a packet. A packet we cannot execute yet is
/// counted as Unsupported instead of being dropped: a silent drop would look
/// exactly like a correct frame with missing geometry.
enum class Action : uint32_t {
    RegisterWrite = 0,
    Draw,
    Present,
    Wait,
    IndirectBuffer,
    MemoryWrite,
    Interrupt,
    EventWrite,
    ShaderLoad,
    StateSet,
    ConditionalExec,
    Unsupported,
    Count,
};
const char* ActionName(Action value) noexcept;

/// Opcodes are 7-bit in Type-3 packets (Xenos / PM4 hardware list).
enum class Opcode : uint32_t {
    kNop = 0x10,
    kIndirectBuffer = 0x3f,
    kIndirectBufferPfd = 0x37,
    kWaitForIdle = 0x26,
    kWaitRegMem = 0x3c,
    kWaitRegEq = 0x52,
    kWaitRegGte = 0x53,
    kWaitUntilRead = 0x5c,
    kWaitIbPfdComplete = 0x5d,
    kRegRmw = 0x21,
    kRegToMem = 0x3e,
    kMemWrite = 0x3d,
    kMemWriteCntr = 0x4f,
    kCondExec = 0x44,
    kCondWrite = 0x45,
    kEventWrite = 0x46,
    kEventWriteShd = 0x58,
    kEventWriteCfl = 0x59,
    kEventWriteExt = 0x5a,
    kEventWriteZpd = 0x5b,
    kDrawIndx = 0x22,
    kDrawIndx2 = 0x36,
    kDrawIndxBin = 0x34,
    kDrawIndx2Bin = 0x35,
    kVizQuery = 0x23,
    kSetState = 0x25,
    kSetConstant = 0x2d,
    kSetConstant2 = 0x55,
    kSetShaderConstants = 0x56,
    kLoadAluConstant = 0x2f,
    kImLoad = 0x27,
    kImLoadImmediate = 0x2b,
    kLoadConstantContext = 0x2e,
    kInvalidateState = 0x3b,
    kSetShaderBases = 0x4a,
    kSetBinBaseOffset = 0x4b,
    kSetBinMask = 0x50,
    kSetBinSelect = 0x51,
    kContextUpdate = 0x5e,
    kInterrupt = 0x54,
    /// VdSwap posts this token into the primary ring buffer to ask for a swap.
    kXeSwap = 0x64,
    kImStore = 0x2c,
    kMeInit = 0x48,
    kSetBinMaskLo = 0x60,
    kSetBinMaskHi = 0x61,
    kSetBinSelectLo = 0x62,
    kSetBinSelectHi = 0x63,
};
const char* OpcodeName(uint32_t opcode) noexcept;
Action ClassifyOpcode(uint32_t opcode) noexcept;

/// Packet encoders. The guest writes streams like these through VdSwap and the
/// D3D driver, and tests use them to build streams that must decode identically.
uint32_t MakePacketType0(uint32_t index, uint32_t count, bool oneIndex = false) noexcept;
uint32_t MakePacketType1(uint32_t index1, uint32_t index2) noexcept;
uint32_t MakePacketType2() noexcept;
uint32_t MakePacketType3(uint32_t opcode, uint32_t count, bool predicate = false) noexcept;

struct Header {
    PacketType type = PacketType::kType2;
    /// Number of dwords that follow the header.
    uint32_t count = 0;
    /// Type 0: first register. Type 1: the two registers are in index2.
    uint32_t index = 0;
    uint32_t index2 = 0;
    /// Type 0 bit 15: every data word goes to the same register.
    bool writeOneIndex = false;
    uint32_t opcode = 0;
    bool predicate = false;
};
static_assert(sizeof(Header) <= 40);

/// Every 32-bit word is a structurally valid header, so this cannot fail; it only
/// bounds the payload so a corrupt stream cannot ask for unbounded reads.
Header DecodeHeader(uint32_t word) noexcept;
uint32_t PayloadWords(const Header& header) noexcept;

/// The provider owns guest endianness: guest memory holds big-endian bytes, so
/// dwords returned here are the values the guest and the GPU see, not raw words.
class PacketSource {
public:
    virtual ~PacketSource() = default;
    virtual bool ReadDword(uint32_t& value) = 0;
    virtual uint64_t Remaining() const = 0;
    /// Resolves an INDIRECT_BUFFER target. Returning null means "not followed";
    /// the walker then reports the packet without reading guest memory itself.
    virtual PacketSource* OpenIndirect(uint32_t /*guestAddress*/, uint32_t /*length*/) { return nullptr; }
};

class Sink {
public:
    virtual ~Sink() = default;
    virtual void OnRegisterWrite(uint32_t index, uint32_t value) = 0;
    /// Payload is empty when the packet is larger than the walker's buffer;
    /// header.count still reports the true size.
    virtual void OnPacket(const Header& header, Action action,
                          std::span<const uint32_t> payload) = 0;
};

struct Limits {
    uint64_t maxPackets = 1u << 20;
    uint64_t maxRegisterWrites = 1u << 20;
    uint32_t maxIndirectDepth = 4;
    uint32_t maxIndirectBuffers = 64;
    uint32_t maxPayloadWords = 1024;
};

struct Stats {
    uint64_t packets = 0, registerWrites = 0, payloadWords = 0, indirectBuffers = 0;
    /// Dwords read from the walked source, and how many of those belong to
    /// packets that completed. A command processor must resume at the last
    /// complete packet, not at whatever a truncated read happened to consume.
    /// Irreversible packets (draws, presents, interrupts) are never reported
    /// when truncated, but Type-0 register writes are applied as they are read:
    /// the rewind makes the guest's final register state identical either way.
    uint64_t consumedWords = 0, completedWords = 0;
    uint64_t perAction[static_cast<size_t>(Action::Count)]{};
    uint64_t predicates = 0;   // packets carrying the predicate bit
    bool truncated = false;    // the source ended mid-packet
    bool limitsHit = false;    // a limit stopped the walk; the stream is untrusted
    bool indirectNotFollowed = false;
    /// Buffers we followed but that yielded nothing: unreadable memory, or a
    /// chain that failed before its first packet. Counted, never ignored.
    uint64_t emptyIndirectBuffers = 0;

    uint64_t Of(Action action) const { return perAction[static_cast<size_t>(action)]; }
    uint64_t Executed() const {
        return packets - Of(Action::Unsupported);
    }
    std::string Format() const;
};

Stats Walk(PacketSource& source, Sink& sink, const Limits& limits = {}) noexcept;

/// VdSwap writes this into the primary ring buffer: a Type-0 write of the
/// frontbuffer fetch constant, then a Type-3 0x64 packet whose first payload word
/// is the signature, followed by the frontbuffer physical address, width and
/// height, then NOPs. Nothing is presented unless the signature matches.
inline constexpr uint32_t kSwapSignature = 0x50415753u;  // 'S','W','A','P'

struct SwapToken {
    uint32_t frontbufferAddress = 0;
    uint32_t width = 0;
    uint32_t height = 0;
    /// Offset of the signature word inside the searched span.
    size_t offset = 0;
};

/// Searches guest-order dwords for a structurally valid swap token.
bool FindSwapToken(std::span<const uint32_t> words, SwapToken& token) noexcept;
/// Validates the token whose signature sits exactly at `signatureIndex`.
bool ParseSwapTokenAt(std::span<const uint32_t> words, size_t signatureIndex, SwapToken& token) noexcept;

/// Big-endian guest bytes -> guest-visible dwords. Bounded by the span.
class BigEndianDwordSource final : public PacketSource {
public:
    explicit BigEndianDwordSource(std::span<const uint8_t> bytes) noexcept : bytes_(bytes) {}
    bool ReadDword(uint32_t& value) noexcept override;
    uint64_t Remaining() const noexcept override;
    size_t WordsRead() const noexcept { return offset_ / 4; }
private:
    std::span<const uint8_t> bytes_;
    size_t offset_ = 0;
};
uint32_t SwapGuestDword(std::span<const uint8_t> bytes, size_t offset) noexcept;

struct SwapProbeResult {
    bool found = false;
    SwapToken token{};
    uint32_t signatureIndex = 0;
};
/// Reads the first `words` dwords at `guestAddress` through `read` and looks for
/// a swap token. Used by the diagnostic probe that captures real command streams.
SwapProbeResult ProbeSwapToken(uint32_t guestAddress, size_t words,
    const std::function<bool(uint32_t, std::span<uint8_t>)>& read) noexcept;

} // namespace sonic::rex_host::pm4
