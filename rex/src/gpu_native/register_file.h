#pragma once
#include "registers.h"

#include <array>
#include <atomic>
#include <cstdint>
#include <mutex>
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

    void SetVideoMode(VideoMode mode) noexcept {
        displayWidth_.store(mode.displayWidth, std::memory_order_relaxed);
        displayHeight_.store(mode.displayHeight, std::memory_order_relaxed);
        refreshRateHz_.store(mode.refreshRateHz, std::memory_order_relaxed);
    }
    VideoMode GetVideoMode() const noexcept { return ReadVideoMode(); }
    void SetWritePointerSink(WritePointerSink* sink) noexcept { writePointerSink_ = sink; }

    /// Guest-visible read: some registers report live display state instead of
    /// what was written, because D3D polls them.
    ///
    /// The guest writes registers from its own CPU thread through MMIO while the
    /// command processor writes them from the GPU worker, so every access is
    /// atomic (or taken under the mutex for the out-of-window map). The methods
    /// are no longer `const noexcept`-qualified for that reason: they mutate the
    /// atomic storage and may block on the mutex.
    uint32_t Read(uint32_t index) const;
    void Write(uint32_t index, uint32_t value, WriteOrigin origin);

    /// Raw stored value, without the synthetic reads. This is the shadow state a
    /// renderer needs.
    uint32_t Raw(uint32_t index) const;
    uint64_t ExtendedWrites() const noexcept;

private:
    /// The video mode is read by `Read` as one consistent snapshot: three
    /// separate atomics could be observed from three different modes.
    VideoMode ReadVideoMode() const noexcept;

    std::array<std::atomic<uint32_t>, kRegisterCount> values_{};
    mutable std::mutex extendedMutex_;
    std::unordered_map<uint32_t, uint32_t> extended_;
    std::atomic<uint32_t> displayWidth_{1280};
    std::atomic<uint32_t> displayHeight_{720};
    std::atomic<uint32_t> refreshRateHz_{60};
    WritePointerSink* writePointerSink_ = nullptr;
    std::atomic<uint64_t> extendedWrites_{0};
};

} // namespace sonic::rex_host::gpu
