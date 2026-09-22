#include "xma_frame_decoder.h"
#include <cstring>
#include <stdexcept>
#include <string>
extern "C" {
#include <libavcodec/avcodec.h>
#include <libavutil/error.h>
}
namespace {
void Check(int result) {
    if (result >= 0) return;
    char text[AV_ERROR_MAX_STRING_SIZE]{};
    av_strerror(result, text, sizeof(text));
    throw std::runtime_error(std::string("XMAFRAMES: ") + text);
}
}
struct xma::FrameDecoder::Impl {
    AVCodecContext* context = nullptr;
    AVPacket* packet = nullptr;
    AVFrame* frame = nullptr;
    int channels = 0;
    ~Impl() {
        av_packet_free(&packet);
        av_frame_free(&frame);
        avcodec_free_context(&context);
    }
};
xma::FrameDecoder::FrameDecoder(int rate, int channels) : impl(std::make_unique<Impl>()) {
    if ((channels != 1 && channels != 2) ||
        (rate != 24000 && rate != 32000 && rate != 44100 && rate != 48000))
        throw std::invalid_argument("Invalid XMA hardware rate/channels");
    auto* codec = avcodec_find_decoder(AV_CODEC_ID_XMAFRAMES);
    if (!codec) throw std::runtime_error("Pinned FFmpeg XMAFRAMES codec missing");
    impl->channels = channels;
    impl->context = avcodec_alloc_context3(codec);
    impl->packet = av_packet_alloc();
    impl->frame = av_frame_alloc();
    if (!impl->context || !impl->packet || !impl->frame) throw std::bad_alloc();
    impl->context->channels = channels;
    impl->context->sample_rate = rate;
    Check(avcodec_open2(impl->context, codec, nullptr));
}
xma::FrameDecoder::~FrameDecoder() = default;
std::vector<float> xma::FrameDecoder::Decode(std::span<const uint8_t> bytes, uint32_t bitCount) {
    if (bitCount < 16 || bitCount >= 32767 || bytes.size() != (bitCount + 7) / 8)
        throw std::invalid_argument("Invalid raw XMA frame length");
    if ((uint32_t(bytes[0]) * 128 + (bytes[1] >> 1)) != bitCount)
        throw std::runtime_error("XMA frame length prefix mismatch");
    av_packet_unref(impl->packet);
    Check(av_new_packet(impl->packet, int(bytes.size()) + 1));
    // First byte is Xenia decoder's padding descriptor: 3 start, 3 end, 2 spare.
    impl->packet->data[0] = uint8_t(((8 - (bitCount % 8)) % 8) << 2);
    std::memcpy(impl->packet->data + 1, bytes.data(), bytes.size());
    Check(avcodec_send_packet(impl->context, impl->packet));
    Check(avcodec_receive_frame(impl->context, impl->frame));
    auto* frame = impl->frame;
    if (frame->format != AV_SAMPLE_FMT_FLTP || frame->nb_samples != 512 ||
        frame->channels != impl->channels)
        throw std::runtime_error("Unexpected XMAFRAMES output layout");
    std::vector<float> result(size_t(512) * impl->channels);
    for (int i = 0; i < 512; ++i)
        for (int c = 0; c < impl->channels; ++c)
            result[size_t(i) * impl->channels + c] = reinterpret_cast<float*>(frame->extended_data[c])[i];
    av_frame_unref(frame);
    return result;
}
