// Contract tests for our own command-stream front end. These run without any
// SDK graphics code, because that is the point: this module must be able to read
// a real guest command stream on its own.
#include "pm4.h"

#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <memory>
#include <string>
#include <utility>
#include <vector>

using namespace sonic::rex_host::pm4;

namespace {
int failures = 0;
#define CHECK(condition)                                                       \
    do {                                                                       \
        if (!(condition)) {                                                    \
            std::printf("FAIL %s:%d: %s\n", __FILE__, __LINE__, #condition);   \
            ++failures;                                                        \
        }                                                                      \
    } while (0)

uint32_t MakeType0(uint32_t index, uint32_t count, bool oneIndex = false) {
    return (((count - 1) & 0x3FFF) << 16) | (oneIndex ? 0x8000u : 0u) | (index & 0x7FFF);
}
uint32_t MakeType1(uint32_t index1, uint32_t index2) {
    return (1u << 30) | ((index2 & 0x7FF) << 11) | (index1 & 0x7FF);
}
uint32_t MakeType2() { return 2u << 30; }
uint32_t MakeType3(uint32_t opcode, uint32_t count, bool predicate = false) {
    return (3u << 30) | (((count - 1) & 0x3FFF) << 16) | ((opcode & 0x7F) << 8) |
           (predicate ? 1u : 0u);
}

class VecSource final : public PacketSource {
public:
    explicit VecSource(std::vector<uint32_t> words) : words_(std::move(words)) {}
    void FollowIndirectWith(std::vector<uint32_t> words) {
        indirect_ = std::move(words);
        followIndirect_ = true;
    }
    bool ReadDword(uint32_t& value) override {
        if (position_ >= words_.size()) return false;
        value = words_[position_++];
        return true;
    }
    uint64_t Remaining() const override { return words_.size() - position_; }
    PacketSource* OpenIndirect(uint32_t address, uint32_t length) override {
        if (!followIndirect_ || address != kIndirectAddress || length != indirect_.size()) return nullptr;
        opened_.push_back(std::make_unique<VecSource>(indirect_));
        return opened_.back().get();
    }
    static constexpr uint32_t kIndirectAddress = 0x12340000u;

private:
    std::vector<uint32_t> words_;
    std::vector<uint32_t> indirect_;
    bool followIndirect_ = false;
    size_t position_ = 0;
    std::vector<std::unique_ptr<VecSource>> opened_;
};

struct RecordingSink final : Sink {
    std::vector<std::pair<uint32_t, uint32_t>> writes;
    std::vector<std::pair<Action, std::vector<uint32_t>>> packets;
    std::vector<std::vector<uint32_t>> presentPayloads;
    void OnRegisterWrite(uint32_t index, uint32_t value) override { writes.emplace_back(index, value); }
    void OnPacket(const Header&, Action action, std::span<const uint32_t> payload) override {
        packets.emplace_back(action, std::vector<uint32_t>(payload.begin(), payload.end()));
        if (action == Action::Present)
            presentPayloads.emplace_back(payload.begin(), payload.end());
    }
    uint32_t Count(Action action) const {
        uint32_t total = 0;
        for (const auto& packet : packets) if (packet.first == action) ++total;
        return total;
    }
};

std::vector<uint8_t> ToGuestBytes(const std::vector<uint32_t>& words) {
    std::vector<uint8_t> bytes;
    bytes.reserve(words.size() * 4);
    for (uint32_t word : words) {
        bytes.push_back(uint8_t(word >> 24));
        bytes.push_back(uint8_t(word >> 16));
        bytes.push_back(uint8_t(word >> 8));
        bytes.push_back(uint8_t(word));
    }
    return bytes;
}

std::vector<uint32_t> SwapTokenStream(uint32_t frontbuffer, uint32_t width, uint32_t height) {
    // Exactly what VdSwap composes: the frontbuffer fetch constant, the token,
    // then NOPs to fill the reserved 64 dwords.
    std::vector<uint32_t> words{MakeType0(0x0480, 6), 0, 0, 0, 0, 0, 0,
                                MakeType3(0x64, 4), kSwapSignature, frontbuffer, width, height};
    while (words.size() < 64) words.push_back(MakeType2());
    return words;
}

void TestHeaderDecoding() {
    const Header basic = DecodeHeader(MakeType0(0x1234, 3));
    CHECK(basic.type == PacketType::kType0);
    CHECK(basic.count == 3);
    CHECK(basic.index == 0x1234);
    CHECK(!basic.writeOneIndex);
    CHECK(PayloadWords(basic) == 3);

    const Header oneIndex = DecodeHeader(MakeType0(0x20, 2, true));
    CHECK(oneIndex.writeOneIndex);

    const Header pair = DecodeHeader(MakeType1(0x300, 0x301));
    CHECK(pair.type == PacketType::kType1);
    CHECK(pair.index == 0x300 && pair.index2 == 0x301);
    CHECK(PayloadWords(pair) == 2);

    const Header nop = DecodeHeader(MakeType2());
    CHECK(nop.type == PacketType::kType2 && PayloadWords(nop) == 0);

    const Header draw = DecodeHeader(MakeType3(0x22, 5));
    CHECK(draw.type == PacketType::kType3 && draw.opcode == 0x22 && draw.count == 5);
    CHECK(!draw.predicate);
    CHECK(DecodeHeader(MakeType3(0x22, 5, true)).predicate);
    // The largest payload a header can describe.
    CHECK(DecodeHeader(MakeType3(0x22, 0x4000)).count == 0x4000);
}

void TestWalkEmitsRegisterWrites() {
    VecSource source({MakeType0(0x100, 2), 0xAAAA1111, 0xBBBB2222,
                      MakeType1(0x200, 0x201), 0xCCCC3333, 0xDDDD4444,
                      MakeType2(),
                      MakeType3(0x2D, 2), 0x1, 0x2});
    RecordingSink sink;
    const Stats stats = Walk(source, sink);
    CHECK(stats.truncated == false);
    CHECK(stats.limitsHit == false);
    CHECK(stats.registerWrites == 4);
    CHECK(sink.writes.size() == 4);
    CHECK(sink.writes[0] == std::make_pair(0x100u, 0xAAAA1111u));
    CHECK(sink.writes[1] == std::make_pair(0x101u, 0xBBBB2222u));
    CHECK(sink.writes[2] == std::make_pair(0x200u, 0xCCCC3333u));
    CHECK(sink.writes[3] == std::make_pair(0x201u, 0xDDDD4444u));
    CHECK(stats.Of(Action::RegisterWrite) == 2);
    CHECK(stats.Of(Action::StateSet) == 1);
    CHECK(stats.packets == 4);
}

void TestWriteOneIndexRepeats() {
    VecSource source({MakeType0(0x77, 3, true), 0x1, 0x2, 0x3});
    RecordingSink sink;
    Walk(source, sink);
    CHECK(sink.writes.size() == 3);
    CHECK(sink.writes[0].first == 0x77 && sink.writes[1].first == 0x77 && sink.writes[2].first == 0x77);
    CHECK(sink.writes[2].second == 3);
}

void TestGuestEndianness() {
    const std::vector<uint32_t> words{MakeType0(0x0100, 1), 0xDEADBEEF};
    const auto bytes = ToGuestBytes(words);
    // The signature check below only works if the swap is real.
    BigEndianDwordSource source(bytes);
    RecordingSink sink;
    const Stats stats = Walk(source, sink);
    CHECK(stats.truncated == false);
    CHECK(sink.writes.size() == 1);
    CHECK(sink.writes[0] == std::make_pair(0x100u, 0xDEADBEEFu));
    std::vector<uint8_t> signature{0x50, 0x41, 0x57, 0x53};
    CHECK(SwapGuestDword(signature, 0) == kSwapSignature);
    CHECK(SwapGuestDword(signature, 1) == 0);  // out of range reads nothing
}

void TestTruncatedStreamIsReported() {
    VecSource source({MakeType0(0x100, 4), 0x1, 0x2});
    RecordingSink sink;
    const Stats stats = Walk(source, sink);
    CHECK(stats.truncated);
    CHECK(stats.registerWrites == 2);  // the two words that really existed
    CHECK(stats.packets == 1);
}

void TestSwapTokenPresents() {
    VecSource source(SwapTokenStream(0x0BADC0DE, 1280, 720));
    RecordingSink sink;
    const Stats stats = Walk(source, sink);
    CHECK(stats.Of(Action::Present) == 1);
    CHECK(stats.Of(Action::Unsupported) > 0);  // the NOP fill is not executed work
    CHECK(sink.Count(Action::Present) == 1);
    CHECK(sink.presentPayloads.size() == 1);
    const auto& payload = sink.presentPayloads.front();
    CHECK(payload.size() == 4);
    CHECK(payload[0] == kSwapSignature);
    CHECK(payload[1] == 0x0BADC0DEu && payload[2] == 1280 && payload[3] == 720);
}

void TestBogusSwapNeverPresents() {
    // Opcode 0x64 without the signature is not a frame.
    VecSource bogus({MakeType3(0x64, 4), 0xDEADBEEF, 0, 1280, 720});
    RecordingSink sink;
    Walk(bogus, sink);
    CHECK(sink.Count(Action::Present) == 0);

    // A predicated swap is skipped by hardware and must not present either.
    auto predicated = SwapTokenStream(0x1000, 640, 480);
    predicated[7] = MakeType3(0x64, 4, true);
    VecSource source(predicated);
    RecordingSink sink2;
    const Stats stats = Walk(source, sink2);
    CHECK(sink2.Count(Action::Present) == 0);
    CHECK(stats.Of(Action::Unsupported) >= 1);

    // A token that claims an impossible size is corruption, not a frame.
    SwapToken token;
    auto broken = SwapTokenStream(0x1000, 0, 480);
    CHECK(!FindSwapToken(std::span<const uint32_t>(broken), token));
    auto huge = SwapTokenStream(0x1000, 1280, 65535);
    CHECK(!FindSwapToken(std::span<const uint32_t>(huge), token));
    auto good = SwapTokenStream(0x1000, 1280, 720);
    CHECK(FindSwapToken(std::span<const uint32_t>(good), token));
    CHECK(token.frontbufferAddress == 0x1000 && token.width == 1280 && token.height == 720);
}

void TestIndirectBufferRecursion() {
    auto nested = SwapTokenStream(0x00C0FFEE, 1920, 1080);
    VecSource source({MakeType3(0x3F, 2), VecSource::kIndirectAddress, uint32_t(nested.size())});
    source.FollowIndirectWith(nested);
    RecordingSink sink;
    const Stats stats = Walk(source, sink);
    CHECK(stats.indirectBuffers == 1);
    CHECK(!stats.indirectNotFollowed);
    CHECK(stats.Of(Action::Present) == 1);
    CHECK(sink.Count(Action::Present) == 1);

    // An indirect buffer we cannot resolve must be visible, not silently skipped.
    VecSource unresolved({MakeType3(0x3F, 2), 0x00100000, 16});
    RecordingSink sink2;
    const Stats stats2 = Walk(unresolved, sink2);
    CHECK(stats2.indirectNotFollowed);
    CHECK(stats2.Of(Action::IndirectBuffer) == 1);
}

void TestIndirectDepthLimitStops() {
    // A chain deeper than the limit must stop with a limit flag instead of
    // walking guest memory indefinitely.
    const auto nested = SwapTokenStream(0x00A00000, 640, 480);
    VecSource source({MakeType3(0x3F, 2), VecSource::kIndirectAddress, uint32_t(nested.size())});
    source.FollowIndirectWith(nested);
    Limits limits;
    limits.maxIndirectDepth = 1;
    RecordingSink sink;
    const Stats stats = Walk(source, sink, limits);
    CHECK(stats.limitsHit);
    CHECK(stats.indirectBuffers == 1);
    CHECK(sink.Count(Action::Present) == 0);  // nothing below the limit executed
}

void TestIndirectBudgetStops() {
    const auto nested = SwapTokenStream(0x00A00000, 640, 480);
    VecSource source({MakeType3(0x3F, 2), VecSource::kIndirectAddress, uint32_t(nested.size()),
                      MakeType3(0x3F, 2), VecSource::kIndirectAddress, uint32_t(nested.size())});
    source.FollowIndirectWith(nested);
    Limits limits;
    limits.maxIndirectBuffers = 1;
    RecordingSink sink;
    const Stats stats = Walk(source, sink, limits);
    CHECK(stats.limitsHit);
    CHECK(stats.Of(Action::IndirectBuffer) == 2);
    CHECK(stats.Of(Action::Present) == 1);  // only the first buffer ran
}

void TestLimitsStopTheWalk() {
    std::vector<uint32_t> words;
    for (int i = 0; i < 100; ++i) {
        words.push_back(MakeType0(0x10, 1));
        words.push_back(uint32_t(i));
    }
    VecSource source(words);
    RecordingSink sink;
    Limits limits;
    limits.maxRegisterWrites = 10;
    const Stats stats = Walk(source, sink, limits);
    CHECK(stats.limitsHit);
    CHECK(stats.registerWrites == 10);
    CHECK(sink.writes.size() == 10);
}

void TestOversizedPacketIsNotMisread() {
    // A packet whose payload exceeds the walker buffer is consumed, but reported
    // without payload, and can never present or draw from partial data.
    std::vector<uint32_t> words{MakeType3(0x64, 8), kSwapSignature, 0x1000, 1280, 720, 0, 0, 0, 0};
    VecSource source(words);
    RecordingSink sink;
    Limits limits;
    limits.maxPayloadWords = 4;
    const Stats stats = Walk(source, sink, limits);
    CHECK(!stats.truncated);
    CHECK(sink.Count(Action::Present) == 0);
    CHECK(stats.Of(Action::Unsupported) == 1);
}

void TestOpcodeAndActionNames() {
    CHECK(std::strcmp(OpcodeName(0x22), "DRAW_INDX") == 0);
    CHECK(std::strcmp(OpcodeName(0x64), "XE_SWAP") == 0);
    CHECK(std::strcmp(OpcodeName(0x7F), "UNKNOWN") == 0);
    CHECK(ClassifyOpcode(0x22) == Action::Draw);
    CHECK(ClassifyOpcode(0x3F) == Action::IndirectBuffer);
    CHECK(ClassifyOpcode(0x54) == Action::Interrupt);
    CHECK(ClassifyOpcode(0x3C) == Action::Wait);
    CHECK(ClassifyOpcode(0x3D) == Action::MemoryWrite);
    CHECK(ClassifyOpcode(0x46) == Action::EventWrite);
    CHECK(ClassifyOpcode(0x2B) == Action::ShaderLoad);
    CHECK(ClassifyOpcode(0x2D) == Action::StateSet);
    CHECK(ClassifyOpcode(0x44) == Action::ConditionalExec);
    CHECK(ClassifyOpcode(0x10) == Action::Unsupported);
    CHECK(ClassifyOpcode(0x7A) == Action::Unsupported);
    CHECK(std::strcmp(ActionName(Action::Present), "present") == 0);
    CHECK(std::strcmp(ActionName(Action::Unsupported), "unsupported") == 0);
}

void TestStatsReporting() {
    VecSource source(SwapTokenStream(0x2000, 1280, 720));
    RecordingSink sink;
    const Stats stats = Walk(source, sink);
    const std::string text = stats.Format();
    CHECK(text.find("packets=") != std::string::npos);
    CHECK(text.find("unsupported=") != std::string::npos);
    CHECK(text.find("present=1") != std::string::npos);
    CHECK(text.find("truncated=no") != std::string::npos);
    CHECK(text.find("limits_hit=no") != std::string::npos);
}

void TestProbeFindsRealToken() {
    const auto stream = SwapTokenStream(0x0F000000, 1280, 720);
    const auto bytes = ToGuestBytes(stream);
    // The probe reads guest bytes, so it must find the token only because the
    // big-endian swap is correct.
    const auto reader = [&bytes](uint32_t address, std::span<uint8_t> destination) {
        if (address != 0x03000000u || destination.size() > bytes.size()) return false;
        std::memcpy(destination.data(), bytes.data(), destination.size());
        return true;
    };
    const SwapProbeResult found = ProbeSwapToken(0x03000000u, 64, reader);
    CHECK(found.found);
    CHECK(found.token.frontbufferAddress == 0x0F000000u);
    CHECK(found.token.width == 1280 && found.token.height == 720);
    CHECK(found.signatureIndex == 8);  // six fetch words follow the Type-0 header

    const auto failing = [](uint32_t, std::span<uint8_t>) { return false; };
    CHECK(!ProbeSwapToken(0x03000000u, 64, failing).found);
    CHECK(!ProbeSwapToken(0, 64, reader).found);
    CHECK(!ProbeSwapToken(0x03000000u, 0, reader).found);
}
} // namespace

int main() {
    // Never lose a failure message when a later check aborts the process.
    std::setvbuf(stdout, nullptr, _IONBF, 0);
    TestHeaderDecoding();
    TestWalkEmitsRegisterWrites();
    TestWriteOneIndexRepeats();
    TestGuestEndianness();
    TestTruncatedStreamIsReported();
    TestSwapTokenPresents();
    TestBogusSwapNeverPresents();
    TestIndirectBufferRecursion();
    TestIndirectDepthLimitStops();
    TestIndirectBudgetStops();
    TestLimitsStopTheWalk();
    TestOversizedPacketIsNotMisread();
    TestOpcodeAndActionNames();
    TestStatsReporting();
    TestProbeFindsRealToken();
    if (failures) {
        std::printf("pm4: %d failure(s)\n", failures);
        return 1;
    }
    std::puts("pm4 command-stream decoder: all checks passed");
    return 0;
}
