#include "xma_stream.h"
#include <algorithm>
#include <cmath>
#include <stdexcept>
#include <utility>

namespace {
constexpr uint32_t PacketBits = 2048 * 8;
uint32_t Mask(unsigned bits) { return bits == 32 ? ~0u : (uint32_t(1) << bits) - 1; }
uint32_t FirstBit(std::span<uint8_t> p) {
    return (((uint32_t(p[0]) & 3) << 13) | (uint32_t(p[1]) << 5) | (p[2] >> 3)) + 32;
}
void Require(bool value, const char* text) { if (!value) throw std::runtime_error(text); }
}
xma::ContextView::ContextView(std::span<uint8_t> data) : bytes(data) {
    Require(data.size() == 64, "XMA context size must be 64");
}
uint32_t xma::ContextView::Get(unsigned word, unsigned shift, unsigned bits) const {
    Require(word < 16 && bits > 0 && bits <= 32 && shift + bits <= 32, "Invalid XMA field");
    const auto* p = bytes.data() + word * 4;
    return ((uint32_t(p[0]) << 24 | uint32_t(p[1]) << 16 | uint32_t(p[2]) << 8 | p[3]) >> shift) & Mask(bits);
}
void xma::ContextView::Set(unsigned word, unsigned shift, unsigned bits, uint32_t value) {
    Require(bits > 0 && bits <= 32 && shift + bits <= 32, "Invalid XMA field");
    auto v = (Get(word) & ~(Mask(bits) << shift)) | ((value & Mask(bits)) << shift);
    auto* p = bytes.data() + word * 4;
    p[0] = uint8_t(v >> 24); p[1] = uint8_t(v >> 16); p[2] = uint8_t(v >> 8); p[3] = uint8_t(v);
}
xma::Stream::Stream(DecodeFrame testDecoder) : decodeOverride(std::move(testDecoder)) {}
void xma::Stream::Reset() {
    decoder.reset(); rate = channels = 0;
    frameBits = frameLength = frameStart = skipPackets = 0;
    moving = continuation = afterFrame = loopRestart = false;
    pcm.clear(); pcmOffset = 0; frame.fill(0);
}
bool xma::Stream::Packet(ContextView& c, const Memory& memory, std::span<uint8_t>& packet) {
    auto current = c.Get(4, 31, 1);
    if (!c.Get(0, 20 + current, 1)) return false;
    auto count = c.Get(current, 0, 12);
    auto offset = c.Get(2, 0, 26);
    Require(count && offset / PacketBits < count, "XMA input offset outside buffer");
    uint64_t ptr = uint64_t(c.Get(5 + current)) + (offset / PacketBits) * 2048;
    Require(ptr && ptr + 2048 <= (uint64_t(1) << 32), "XMA input address overflow");
    packet = memory(uint32_t(ptr), 2048);
    Require(packet.size() == 2048, "XMA input memory inaccessible");
    c.Set(4, 26, 5, packet[2] & 7);
    return true;
}
bool xma::Stream::MovePacket(ContextView& c, const Memory& memory, bool isContinuation) {
    std::span<uint8_t> packet;
    // At most two input buffers (4095 packets each). Do not recurse over
    // packets without starting frames: Windows has a small default stack.
    for (unsigned traversal = 0; traversal < 8192; ++traversal) {
        if (!moving) {
            if (!Packet(c, memory, packet)) return false;
            skipPackets = uint32_t(packet[3]) + 1;
            moving = true;
            continuation = isContinuation;
        }
        while (skipPackets) {
            auto current = c.Get(4, 31, 1);
            if (!c.Get(0, 20 + current, 1)) return false;
            auto count = c.Get(current, 0, 12);
            Require(count > 0, "XMA valid input buffer has no packets");
            auto nextPacket = c.Get(2, 0, 26) / PacketBits + 1;
            --skipPackets;
            if (nextPacket >= count) {
                c.Set(0, 20 + current, 1, 0);
                c.Set(4, 31, 1, current ^ 1);
                c.Set(2, 0, 26, 0);
            } else {
                c.Set(2, 0, 26, nextPacket * PacketBits);
            }
        }
        if (!Packet(c, memory, packet)) return false;
        uint32_t start = continuation ? 32 : FirstBit(packet);
        moving = false;
        if (start >= PacketBits) continue;
        c.Set(2, 0, 26, (c.Get(2, 0, 26) / PacketBits) * PacketBits + start);
        return true;
    }
    throw std::runtime_error("XMA packet traversal limit exceeded");
}
bool xma::Stream::ReadFrame(ContextView& c, const Memory& memory) {
    if (afterFrame) {
        if (!MovePacket(c, memory, false)) return false;
        afterFrame = false;
    }
    if (moving && !MovePacket(c, memory, continuation)) return false;
    std::span<uint8_t> packet;
    if (!Packet(c, memory, packet)) return false;
    uint32_t offset = c.Get(2, 0, 26);
    if (!frameBits) {
        frame.fill(0);
        if (offset % PacketBits == 0) {
            auto first = FirstBit(packet);
            if (first >= PacketBits) {
                afterFrame = true;
                return ReadFrame(c, memory);
            }
            offset += first;
            c.Set(2, 0, 26, offset);
        }
        frameStart = offset;
    }
    // Copy bits into one bounded frame buffer. A frame may span packets and
    // non-contiguous input buffers, including a split 15-bit length prefix.
    while (!frameLength || frameBits < frameLength) {
        if (!Packet(c, memory, packet)) return false;
        offset = c.Get(2, 0, 26);
        uint32_t within = offset % PacketBits;
        uint32_t wanted = (frameLength ? frameLength : 15) - frameBits;
        auto count = std::min(wanted, PacketBits - within);
        for (uint32_t i = 0; i < count; ++i) {
            auto bit = (packet[(within + i) / 8] >> (7 - (within + i) % 8)) & 1;
            frame[(frameBits + i) / 8] |= uint8_t(bit << (7 - (frameBits + i) % 8));
        }
        frameBits += count;
        if (!frameLength && frameBits == 15) {
            frameLength = uint32_t(frame[0]) * 128 + (frame[1] >> 1);
            Require(frameLength >= 16 && frameLength < 32767, "Invalid XMA frame bit length");
        }
        if (within + count == PacketBits) {
            // Keep cursor in the old packet until MovePacket has read its skip.
            c.Set(2, 0, 26, offset + count - 1);
            if (frameLength && frameBits == frameLength) {
                afterFrame = true;
                break;
            }
            if (!MovePacket(c, memory, true)) return false;
        } else {
            c.Set(2, 0, 26, offset + count);
        }
    }
    return true;
}
void xma::Stream::FinishFrame(ContextView& c, const Memory&) {
    bool follows = (frame[(frameLength - 1) / 8] >> (7 - (frameLength - 1) % 8)) & 1;
    afterFrame = afterFrame || !follows;
    auto loops = c.Get(0, 12, 8);
    if (loops && frameStart == c.Get(4, 0, 26)) {
        Require(c.Get(3, 0, 26) <= c.Get(4, 0, 26), "XMA loop crosses backwards buffer boundary");
        if (loops != 255) c.Set(0, 12, 8, loops - 1);
        c.Set(2, 0, 26, c.Get(3, 0, 26));
        afterFrame = moving = false;
        loopRestart = true;
    }
    frameBits = frameLength = 0;
}
void xma::Stream::Work(std::span<uint8_t> context, const Memory& memory) {
    ContextView c(context);
    if (!c.Get(1, 31, 1)) return;
    static constexpr int Rates[] = {24000, 32000, 44100, 48000};
    int newRate = Rates[c.Get(1, 27, 2)], newChannels = 1 + c.Get(1, 29, 1);
    if (rate != newRate || channels != newChannels) {
        Require(pcm.empty() && !frameBits, "XMA format changed with pending samples");
        if (!decodeOverride) decoder = std::make_unique<FrameDecoder>(newRate, newChannels);
        rate = newRate; channels = newChannels;
    }
    uint32_t blocks = c.Get(0, 22, 5);
    uint32_t read = c.Get(9, 0, 5), write = c.Get(0, 27, 5);
    Require(blocks && read < blocks && write < blocks, "Invalid XMA output ring");
    auto output = memory(c.Get(7), size_t(blocks) * 256);
    Require(output.size() == size_t(blocks) * 256, "XMA output memory inaccessible");
    auto freeBlocks = write < read ? read - write : blocks - write + read;
    // Limit each kick to the programmed number of 128-sample subframes.
    // A zero quota means no work, not 'decode forever'.
    uint32_t quota = c.Get(1, 20, 4);
    unsigned frameBudget = 8192; // Corrupt/zero-output looping input cannot hang host.
    while (quota && freeBlocks >= uint32_t(channels)) {
        if (pcmOffset == pcm.size()) {
            pcm.clear(); pcmOffset = 0;
            if (!frameBudget--) throw std::runtime_error("XMA frame progress limit exceeded");
            if (!ReadFrame(c, memory)) break;
            auto raw = std::span<const uint8_t>(frame.data(), (frameLength + 7) / 8);
            pcm = decodeOverride ? decodeOverride(raw, frameLength, rate, channels) : decoder->Decode(raw, frameLength);
            Require(pcm.size() == size_t(512 * channels), "XMA decoder returned wrong sample count");
            uint32_t skip = c.Get(1, 24, 3);
            c.Set(1, 24, 3, skip > 4 ? skip - 4 : 0);
            if (loopRestart) {
                // Loop starts at a subframe, after any overlap-preroll skip.
                skip = std::max(skip, c.Get(1, 12, 2) + c.Get(1, 17, 3));
                loopRestart = false;
            }
            uint32_t end = 4;
            if (c.Get(0, 12, 8) && frameStart == c.Get(4, 0, 26))
                end = std::min(4u, c.Get(1, 14, 3) + 1);
            pcm.resize(size_t(end) * 128 * channels);
            pcmOffset = std::min<size_t>(pcm.size(), size_t(skip) * 128 * channels);
            FinishFrame(c, memory);
            if (pcmOffset == pcm.size()) continue;
        }
        for (int i = 0; i < 128 * channels; ++i) {
            float value = pcm[pcmOffset++];
            if (!std::isfinite(value)) value = 0;
            int16_t sample = static_cast<int16_t>(std::lrint(std::clamp(value, -1.0f, 1.0f) * 32767.0f));
            size_t pos = (size_t(write) * 256 + size_t(i) * 2) % output.size();
            output[pos] = uint8_t(uint16_t(sample) >> 8);
            output[(pos + 1) % output.size()] = uint8_t(sample);
        }
        write = (write + channels) % blocks;
        freeBlocks -= channels;
        --quota;
        c.Set(0, 27, 5, write);
        if (!freeBlocks) c.Set(1, 31, 1, 0);
    }
    // Preserve partially decoded PCM across kicks when the ring is full.
    if (pcmOffset == pcm.size()) { pcm.clear(); pcmOffset = 0; }
    if (!c.Get(0, 20, 2) && pcm.empty() && !frameBits) c.Set(1, 31, 1, 0);
}
