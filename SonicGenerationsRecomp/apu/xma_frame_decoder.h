#pragma once
#include <cstdint>
#include <memory>
#include <span>
#include <vector>
namespace xma {
// Exactly one raw XMA frame, MSB-first, starting at bit zero. Keeps overlap
// history between frames; loop handling must preserve it (no flush per loop).
class FrameDecoder {
public:
    FrameDecoder(int sampleRate, int channels);
    ~FrameDecoder();
    FrameDecoder(const FrameDecoder&) = delete;
    FrameDecoder& operator=(const FrameDecoder&) = delete;
    std::vector<float> Decode(std::span<const uint8_t> bits, uint32_t bitCount);
private:
    struct Impl;
    std::unique_ptr<Impl> impl;
};
}
