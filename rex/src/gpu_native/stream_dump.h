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
//   packets.txt     one line per frame plus the whole-run histogram;
//   memory.bin      the guest-memory regions the stream referenced -- shader
//                   microcode (IM_LOAD), constant blocks (LOAD_ALU_CONSTANT) and
//                   indirect buffers. Without them a replay can read headers but
//                   not the data the headers point at, which is exactly the part
//                   the renderer needs. See memory_sidecar.h for the format.
//   stream-raw.bin  every drained dword, appended and flushed as it arrives.
//                   A frame file only appears when a swap closes the frame, and
//                   the runs that need looking at are the ones that hang before
//                   the first swap -- so the bytes are also kept here, one line
//                   per drain is written to packets.txt, and both are flushed
//                   immediately instead of at shutdown. A run that is killed
//                   while the guest is stuck still leaves its data behind, which
//                   is the difference between a diagnosis and a screenshot.
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
#include "memory_sidecar.h"

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
        /// Total size of the guest-memory regions kept in memory.bin. Bounded so
        /// a broken stream cannot make the recorder eat all memory.
        size_t maxCaptureBytes = 32u << 20;
        /// Total size of stream-raw.bin. Bounded for the same reason as the raw
        /// frames, and big enough for the first seconds of a boot.
        size_t maxStreamBytes = 64u << 20;
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
        uint64_t capturedRegions = 0;
        uint64_t capturedBytes = 0;
        uint64_t capturesSkipped = 0;   // over the capture cap
        uint64_t capturesFailed = 0;    // unreadable guest memory
        uint64_t streamBytes = 0;       // drained bytes kept in stream-raw.bin
    };

    StreamDump() = default;
    explicit StreamDump(Config config) : config_(config), capture_(config.maxCaptureBytes) {}
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
    /// Writes memory.bin if anything was captured. Called by Close(); exposed so
    /// a test can check the sidecar without ending the run.
    bool WriteMemorySidecar(std::string& error);
    const MemoryCapture& capture() const noexcept { return capture_; }

private:
    void StartFrame();
    void FinishFrame(bool hadSwap);
    void WriteReportLine(const std::string& line);
    /// Appends the drained dwords, in guest byte order, to the current frame.
    void AppendDrainedBytes(const DrainInfo& drain);
    void AppendStreamBytes(const DrainInfo& drain);
    std::string DescribePacket(const pm4::Header& header, pm4::Action action,
                               std::span<const uint32_t> payload) const;
    std::string FrameHistogram() const;

    /// Guest-memory regions the stream referenced, kept for the replay.
    void CaptureRegion(uint32_t address, size_t bytes);

    Config config_{};
    MemoryCapture capture_;
    GuestMemory* memory_ = nullptr;
    std::filesystem::path directory_;
    std::ofstream report_;
    /// Raw bytes of the frame currently being assembled, in guest byte order.
    std::vector<uint8_t> frameBytes_;
    /// Every drained byte, written and flushed as it arrives, so a run that is
    /// killed before its first swap still leaves the stream behind.
    std::ofstream stream_;
    bool streamCapped_ = false;
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
