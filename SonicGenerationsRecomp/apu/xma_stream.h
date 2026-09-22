#pragma once
#include "xma_frame_decoder.h"
#include <array>
#include <functional>
#include <span>
#include <memory>
#include <vector>
namespace xma {
// BE word view avoids implementation-defined C++ bitfield layout.
class ContextView {
public:
    explicit ContextView(std::span<uint8_t> bytes);
    uint32_t Get(unsigned word, unsigned shift = 0, unsigned bits = 32) const;
    void Set(unsigned word, unsigned shift, unsigned bits, uint32_t value);
private:
    std::span<uint8_t> bytes;
};
class Stream {
public:
    using Memory = std::function<std::span<uint8_t>(uint32_t, size_t)>;
    using DecodeFrame = std::function<std::vector<float>(std::span<const uint8_t>, uint32_t, int, int)>;
    // Injectable decoder permits deterministic transport tests, without game data.
    explicit Stream(DecodeFrame testDecoder = {});
    void Work(std::span<uint8_t> context, const Memory& memory);
    void Reset();
private:
    bool Packet(ContextView& c, const Memory& memory, std::span<uint8_t>& packet);
    bool MovePacket(ContextView& c, const Memory& memory, bool continuation);
    bool ReadFrame(ContextView& c, const Memory& memory);
    void FinishFrame(ContextView& c, const Memory& memory);
    std::unique_ptr<FrameDecoder> decoder;
    DecodeFrame decodeOverride;
    int rate = 0, channels = 0;
    std::array<uint8_t, 4096> frame{};
    uint32_t frameBits = 0, frameLength = 0, frameStart = 0;
    uint32_t skipPackets = 0;
    bool moving = false, continuation = false, afterFrame = false;
    bool loopRestart = false;
    std::vector<float> pcm;
    size_t pcmOffset = 0;
};
}
