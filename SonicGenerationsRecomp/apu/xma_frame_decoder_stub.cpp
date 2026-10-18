// XMA frame decoder stub, linked when SONIC_GENERATIONS_ENABLE_XMA_FRAMES=OFF
// (default on Android/ARM64 until the pinned FFmpeg fork gains an ARM config).
// Decode reports no PCM: XMA-voiced audio stays silent instead of failing
// the whole title. All other audio paths are unaffected.
#include "xma_frame_decoder.h"

namespace xma
{
    struct FrameDecoder::Impl
    {
    };

    FrameDecoder::FrameDecoder(int, int) : impl(std::make_unique<Impl>())
    {
    }

    FrameDecoder::~FrameDecoder() = default;

    std::vector<float> FrameDecoder::Decode(std::span<const uint8_t>, uint32_t)
    {
        return {};
    }
}
