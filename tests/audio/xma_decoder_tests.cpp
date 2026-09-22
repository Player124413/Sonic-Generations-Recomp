#include <apu/xma_frame_decoder.h>
#include <iostream>
#include <stdexcept>
int main() {
    for (int rate : {24000, 32000, 44100, 48000}) {
        for (int channels : {1, 2}) {
            xma::FrameDecoder decoder(rate, channels);
            // Invalid packet lengths must be rejected before native bitreader.
            try { decoder.Decode({}, 0); return 1; }
            catch (const std::invalid_argument&) {}
            // A prefix advertising another length must fail, not produce PCM.
            const uint8_t malformed[] = {0, 0};
            try { decoder.Decode(malformed, 16); return 2; }
            catch (const std::runtime_error&) {}
        }
    }
    try { xma::FrameDecoder invalid(48000, 6); return 3; }
    catch (const std::invalid_argument&) {}
    std::cout << "Pinned XMAFRAMES opens at every hardware rate/layout; invalid frames rejected\n";
}
