#pragma once
#include "registers.h"

#include <cstdint>
#include <unordered_map>

namespace sonic::rex_host::gpu {

/// The guest-visible GPU register file. Storage and semantics are ours; only the
/// register indices and the handful of reset values come from the hardware
/// register map.
class RegisterFile {
public:
    /// The device window covers 0x4000 registers, and a few registers above it
    /// are written by PM4 packets, so they must be preserved rather than dropped.
    static constexpr uint32_t kRegisterCount = 0x5003;

    struct VideoMode {
        uint32_t displayWidth = 1280;
        uint32_t displayHeight = 720;
        uint32_t refreshRateHz = 60;
    };

    /// MMIO writes to CP_RB_WPTR must reach the command processor. Packet writes
    /// must not: a packet writing the write pointer is not a host kick.
    enum class WriteOrigin { kMmio, kPacket };
    class WritePointerSink {
    public:
        virtual ~WritePointerSink() = default;
        virtual void OnWritePointer(uint32_t value) noexcept = 0;
    };

    void SetVideoMode(VideoMode mode) noexcept { videoMode_ = mode; }
    VideoMode GetVideoMode() const noexcept { return videoMode_; }
    void SetWritePointerSink(WritePointerSink* sink) noexcept { writePointerSink_ = sink; }

    /// Guest-visible read: some registers report live display state instead of
    /// what was written, because D3D polls them.
    uint32_t Read(uint32_t index) const noexcept;
    void Write(uint32_t index, uint32_t value, WriteOrigin origin) noexcept;

    /// Raw stored value, without the synthetic reads. This is the shadow state a
    /// renderer needs.
    uint32_t Raw(uint32_t index) const noexcept;
    const uint32_t* RawValues() const noexcept { return values_; }
    uint64_t ExtendedWrites() const noexcept { return extendedWrites_; }

private:
    uint32_t values_[kRegisterCount]{};
    std::unordered_map<uint32_t, uint32_t> extended_;
    VideoMode videoMode_{};
    WritePointerSink* writePointerSink_ = nullptr;
    uint64_t extendedWrites_ = 0;
};

} // namespace sonic::rex_host::gpu
