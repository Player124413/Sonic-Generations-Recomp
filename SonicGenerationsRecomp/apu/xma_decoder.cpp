#include "xma_decoder.h"
#include <limits>
#include <stdexcept>
#include <string>
#include <cstring>
extern "C" {
#include <libavcodec/avcodec.h>
#include <libavutil/error.h>
#include <libavutil/mem.h>
#include <libavutil/samplefmt.h>
}

namespace {
void check(int code)
{
    if (code >= 0) return;
    char message[AV_ERROR_MAX_STRING_SIZE]{};
    av_strerror(code, message, sizeof(message));
    throw std::runtime_error(std::string("XMA/FFmpeg: ") + message);
}
}
struct xma::Decoder::Impl
{
    AVCodecContext* context = nullptr;
    AVFrame* frame = nullptr;
    AVPacket* packet = nullptr;
    bool finished = false;
    ~Impl()
    {
        av_packet_free(&packet);
        av_frame_free(&frame);
        avcodec_free_context(&context);
    }
    void Receive(std::vector<PcmBlock>& output)
    {
        for (;;)
        {
            int status = avcodec_receive_frame(context, frame);
            if (status == AVERROR(EAGAIN) || status == AVERROR_EOF) return;
            check(status);
            const int channels = frame->ch_layout.nb_channels;
            if (channels < 1 || channels > 8 || frame->nb_samples < 0 ||
                (frame->format != AV_SAMPLE_FMT_FLTP && frame->format != AV_SAMPLE_FMT_FLT))
            {
                av_frame_unref(frame);
                throw std::runtime_error("Unexpected XMA PCM format");
            }
            PcmBlock block{frame->sample_rate, channels, {}};
            block.interleaved.resize(size_t(frame->nb_samples) * channels);
            for (int sample = 0; sample < frame->nb_samples; ++sample)
                for (int channel = 0; channel < channels; ++channel)
                    block.interleaved[size_t(sample) * channels + channel] =
                        frame->format == AV_SAMPLE_FMT_FLTP
                        ? reinterpret_cast<const float*>(frame->extended_data[channel])[sample]
                        : reinterpret_cast<const float*>(frame->extended_data[0])[size_t(sample) * channels + channel];
            av_frame_unref(frame);
            output.push_back(std::move(block));
        }
    }
};

xma::Decoder::Decoder(const DecoderConfig& config) : impl(std::make_unique<Impl>())
{
    if (config.channels < 1 || config.channels > 8 || config.sampleRate <= 0 ||
        config.sampleRate > 192000 || config.blockAlign <= 0 ||
        config.extraData.empty() || config.extraData.size() > 65536)
        throw std::invalid_argument("Invalid XMA configuration or missing codec extradata");
    const AVCodec* codec = avcodec_find_decoder(config.xma2 ? AV_CODEC_ID_XMA2 : AV_CODEC_ID_XMA1);
    if (!codec) throw std::runtime_error("FFmpeg was built without the requested XMA decoder");
    impl->context = avcodec_alloc_context3(codec);
    impl->frame = av_frame_alloc();
    impl->packet = av_packet_alloc();
    if (!impl->context || !impl->frame || !impl->packet) throw std::bad_alloc();
    auto* ctx = impl->context;
    ctx->sample_rate = config.sampleRate;
    av_channel_layout_default(&ctx->ch_layout, config.channels);
    ctx->block_align = config.blockAlign;
    ctx->extradata_size = static_cast<int>(config.extraData.size());
    ctx->extradata = static_cast<uint8_t*>(av_mallocz(config.extraData.size() + AV_INPUT_BUFFER_PADDING_SIZE));
    if (!ctx->extradata) throw std::bad_alloc();
    std::memcpy(ctx->extradata, config.extraData.data(), config.extraData.size());
    check(avcodec_open2(ctx, codec, nullptr));
}
xma::Decoder::~Decoder() = default;

std::vector<xma::PcmBlock> xma::Decoder::Decode(std::span<const uint8_t> bytes)
{
    if (impl->finished) throw std::logic_error("Reset decoder after Finish before submitting packets");
    if (bytes.empty() || bytes.size() > 16 * 1024 * 1024)
        throw std::invalid_argument("XMA packet size must be 1..16 MiB");
    av_packet_unref(impl->packet);
    check(av_new_packet(impl->packet, static_cast<int>(bytes.size())));
    std::memcpy(impl->packet->data, bytes.data(), bytes.size());
    std::vector<PcmBlock> output;
    int status = avcodec_send_packet(impl->context, impl->packet);
    if (status == AVERROR(EAGAIN))
    {
        impl->Receive(output);
        status = avcodec_send_packet(impl->context, impl->packet);
    }
    av_packet_unref(impl->packet);
    check(status);
    impl->Receive(output);
    return output;
}
std::vector<xma::PcmBlock> xma::Decoder::Finish()
{
    std::vector<PcmBlock> output;
    if (impl->finished) return output;
    int status = avcodec_send_packet(impl->context, nullptr);
    if (status == AVERROR(EAGAIN))
    {
        impl->Receive(output);
        status = avcodec_send_packet(impl->context, nullptr);
    }
    if (status != AVERROR_EOF) check(status);
    impl->finished = true;
    impl->Receive(output);
    return output;
}
void xma::Decoder::Reset()
{
    avcodec_flush_buffers(impl->context);
    av_frame_unref(impl->frame);
    av_packet_unref(impl->packet);
    impl->finished = false;
}
