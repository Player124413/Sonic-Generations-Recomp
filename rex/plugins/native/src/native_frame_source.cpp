#include "native_frame_source.h"

#include <cstring>

#include "native_log.h"

namespace sonic::rex_host::gpu {
namespace {
constexpr uint32_t kRefusalsToLog = 8;
}  // namespace

bool GuestFrontbufferSource::ReadFrontbuffer(uint32_t physicalAddress, uint32_t width,
                                             uint32_t height, std::span<uint8_t> destination) {
    const size_t expected = size_t(width) * size_t(height) * 4u;
    if (!memory_ || !physicalAddress || !expected || destination.size() != expected) {
        ++stats_.framesRefused;
        if (refusalsLogged_ < kRefusalsToLog) {
            ++refusalsLogged_;
            Log("front buffer %ux%u at %08X refused (%zu bytes are not %zu)", width, height,
                physicalAddress, destination.size(), expected);
        }
        return false;
    }
    if (!memory_->Read(physicalAddress, destination)) {
        ++stats_.framesRefused;
        if (refusalsLogged_ < kRefusalsToLog) {
            ++refusalsLogged_;
            Log("front buffer %ux%u at %08X is not readable guest memory", width, height,
                physicalAddress);
        }
        return false;
    }
    ++stats_.framesRead;
    return true;
}

}  // namespace sonic::rex_host::gpu
