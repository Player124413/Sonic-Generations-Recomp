#pragma once
// The guest's current frame, read the way the GPU sees it.
//
// A swap token names a guest physical address, a width and a height, and the
// Xbox 360 front buffer at that address is 8_8_8_8 RGBA. This is the bridge
// between the command processor's view of that token and the presenter, kept
// separate from both so the read can later be replaced by the renderer's own
// resolve of EDRAM instead of a copy of guest memory.
#include <cstdint>
#include <span>

#include "gpu_native/command_processor.h"
#include "native_vulkan_presenter.h"

namespace sonic::rex_host::gpu {

class GuestFrontbufferSource final : public GuestFrameSource {
public:
    void SetMemory(GuestMemory* memory) noexcept { memory_ = memory; }

    /// Reads a tightly packed 8_8_8_8 frame into `destination`, which must be
    /// exactly width * height * 4 bytes. False when the guest has nothing
    /// readable there, which is a normal state before the first frame is
    /// rendered -- not an error.
    bool ReadFrontbuffer(uint32_t physicalAddress, uint32_t width, uint32_t height,
                         std::span<uint8_t> destination) override;

    struct Stats {
        uint64_t framesRead = 0;
        uint64_t framesRefused = 0;
    };
    Stats GetStats() const noexcept { return stats_; }

private:
    GuestMemory* memory_ = nullptr;
    Stats stats_{};
    /// The first refusals are logged with their reason; a title that never
    /// renders has thousands of them and must not flood the log.
    uint32_t refusalsLogged_ = 0;
};

}  // namespace sonic::rex_host::gpu
