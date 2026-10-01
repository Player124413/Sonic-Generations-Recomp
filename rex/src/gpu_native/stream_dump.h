#pragma once
// Command-stream recorder for our own GPU device.
//
// Why this exists: the renderer has to be written against the stream the game
// actually produces. The probe in the host hooks only sees the arguments of the
// swap helper (which is where a *copy* of the swap token lives, not the frame's
// draw commands), so the only component that can record the real stream is the
// command processor itself -- it is handed the ring buffer by
// VdInitializeRingBuffer and it walks every packet the guest issues.
//
// What is recorded, per frame (the dwords between two swaps):
//   frame-NNN.bin   the raw guest bytes of the ring as the GPU saw them, in
//                   guest byte order, so a replay can feed them straight back
//                   into our own decoder;
//   frame-NNN.txt   the opcode histogram and the first packets, decoded;
//   packets.txt     one line per frame plus the whole-run histogram.
//
// This is a development instrument: it is off unless asked for, it caps every
// buffer it grows, and it copies bytes -- it never writes guest memory.
#include <cstddef>
#include <cstdint>
#include <filesystem>
#include <fstream>
#include <string>
#include <vector>

#include "command_processor.h"

namespace sonic::rex_host::gpu {

class StreamDump final : public PacketObserver {
public:
    struct Config {
        /// How many packets are decoded into the text report per frame.
        size_t loggedPacketsPerFrame = 256;
        /// The largest raw frame the dump will keep; a frame bigger than this is
        /// truncated at a packet boundary and the report says so.
        size_t maxFrameBytes = 4u << 20;
        /// How many frames are written out before the dump stops recording.
        size_t maxFrames = 8;
        /// The tail of each packet is decoded into the report, not the whole
        /// payload: a SET_STATE or IM_LOAD packet can be tens of kilobytes.
        size_t payloadWordsInReport = 16;
    };

    struct Stats {
        uint64_t drains = 0;
        uint64_t packets = 0;
        uint64_t swaps = 0;
        uint64_t framesWritten = 0;
        uint64_t framesTruncated = 0;
        uint64_t registerWrites = 0;
        uint64_t bytesWritten = 0;
        uint64_t framesSkipped = 0;  // after the frame cap
    };

    StreamDump() = default;
    explicit StreamDump(Config config) : config_(config) {}
    ~StreamDump() override { Close(); }

    /// The recorder copies raw ring bytes through the same adapter the walker
    /// uses; without it the decoded report still works.
    void SetMemory(GuestMemory* memory) noexcept { memory_ = memory; }

    /// Opens the report in `directory` (creating it) and starts a new frame. The
    /// raw frames are only written when the run actually produces swaps.
    bool Open(const std::filesystem::path& directory, std::string& error);
    /// Writes the run report and closes. Safe to call twice.
    void Close();
    bool opened() const noexcept { return report_.is_open(); }
    const std::filesystem::path& directory() const noexcept { return directory_; }

    // --- PacketObserver ----------------------------------------------------
    void OnRegisterWrite(uint32_t index, uint32_t value) override;
    void OnPacket(const pm4::Header& header, pm4::Action action,
                  std::span<const uint32_t> payload) override;
    void OnDrain(const DrainInfo& drain) override;

    Stats GetStats() const noexcept { return stats_; }
    /// One line for the log: what was recorded and where.
    std::string Summary() const;

private:
    void StartFrame();
    void FinishFrame(bool hadSwap);
    void WriteReportLine(const std::string& line);
    /// Appends the drained dwords, in guest byte order, to the current frame.
    void AppendDrainedBytes(const DrainInfo& drain);
    std::string DescribePacket(const pm4::Header& header, pm4::Action action,
                               std::span<const uint32_t> payload) const;
    std::string FrameHistogram() const;

    Config config_{};
    GuestMemory* memory_ = nullptr;
    std::filesystem::path directory_;
    std::ofstream report_;
    /// Raw bytes of the frame currently being assembled, in guest byte order.
    std::vector<uint8_t> frameBytes_;
    std::string frameLog_;
    size_t packetsLogged_ = 0;
    bool frameTruncated_ = false;
    bool frameTruncatedLogged_ = false;
    bool frameHadSwap_ = false;
    uint64_t frameIndex_ = 0;
    uint64_t frameCounts_[128]{};
    uint64_t opcodeCounts_[128]{};
    Stats stats_{};
};

}  // namespace sonic::rex_host::gpu
