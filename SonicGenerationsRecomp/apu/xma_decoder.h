#pragma once
#include <cstdint>
#include <memory>
#include <span>
#include <vector>

namespace xma
{
// Host-side decoder only. Guest context/MMIO translation must supply these
// parameters and packets; this class does not guess stream headers.
struct DecoderConfig
{
    bool xma2 = true;
    int sampleRate = 48000;
    int channels = 2;
    int blockAlign = 2048;
    std::vector<uint8_t> extraData; // FFmpeg XMA codec extradata, not a RIFF file
};
struct PcmBlock
{
    int sampleRate;
    int channels;
    std::vector<float> interleaved; // Native endian; NOT guest BE planar output
};
class Decoder
{
public:
    explicit Decoder(const DecoderConfig& config);
    ~Decoder();
    Decoder(const Decoder&) = delete;
    Decoder& operator=(const Decoder&) = delete;
    // One instance per stream, serialized by caller. Errors throw runtime_error.
    std::vector<PcmBlock> Decode(std::span<const uint8_t> packet);
    std::vector<PcmBlock> Finish();
    void Reset();
private:
    struct Impl;
    std::unique_ptr<Impl> impl;
};
}
