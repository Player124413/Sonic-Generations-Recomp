#include <apu/xma_decoder.h>
#include <iostream>
#include <stdexcept>
extern "C" {
#include <libavcodec/avcodec.h>
}
int main()
{
    if (!avcodec_find_decoder(AV_CODEC_ID_XMA1) || !avcodec_find_decoder(AV_CODEC_ID_XMA2))
        return 1;
    for (int test = 0; test < 4; ++test)
    {
        xma::DecoderConfig config;
        if (test == 1) config.channels = 0;
        if (test == 2) config.sampleRate = -1;
        if (test == 3) config.extraData.resize(65537);
        try { xma::Decoder decoder(config); return 2; }
        catch (const std::invalid_argument&) { }
    }
    // Deliberately invalid extradata must be rejected by libavcodec. This
    // exercises cleanup of partially constructed decoder resources.
    for (bool xma2 : {false, true})
    {
        xma::DecoderConfig config;
        config.xma2 = xma2;
        config.extraData = {0};
        try { xma::Decoder decoder(config); return 3; }
        catch (const std::runtime_error&) { }
    }
    std::cout << "XMA codec availability and invalid-input tests passed\n";
}
