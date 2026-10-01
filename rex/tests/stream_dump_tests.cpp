// Tests for the command-stream recorder.
//
// The recorder is what renderer development actually depends on: it is the only
// component that sees the real ring buffer, so what it writes has to be the
// bytes the GPU saw, in order, including across the ring wrap -- and it has to
// stay bounded when a title streams far more than expected.
#include "gpu_native/stream_dump.h"

#include "pm4.h"

#include <cstdint>
#include <cstdio>
#include <filesystem>
#include <fstream>
#include <string>
#include <vector>

using namespace sonic::rex_host::gpu;
// The walker lives in a sibling namespace of the device.
namespace pm4 = sonic::rex_host::pm4;

namespace {

int failures = 0;

void Check(bool condition, const char* what) {
    if (condition) return;
    std::printf("FAIL %s\n", what);
    ++failures;
}

/// Guest memory with the layout the recorder reads: raw bytes at physical
/// addresses, no interpretation. Writes go through the same adapter as the
/// ring, so the test can build a stream in place.
class FakeMemory final : public GuestMemory {
public:
    void Resize(size_t bytes) { bytes_.assign(bytes, 0); }
    void WriteBytes(uint32_t address, std::span<const uint8_t> source) {
        for (size_t index = 0; index < source.size(); ++index) bytes_[address + index] = source[index];
    }
    bool Read(uint32_t physicalAddress, std::span<uint8_t> destination) override {
        if (size_t(physicalAddress) + destination.size() > bytes_.size()) return false;
        for (size_t index = 0; index < destination.size(); ++index)
            destination[index] = bytes_[physicalAddress + index];
        return true;
    }
    bool Write32(uint32_t physicalAddress, uint32_t value) override {
        if (size_t(physicalAddress) + 4 > bytes_.size()) return false;
        bytes_[physicalAddress + 0] = uint8_t(value >> 24);
        bytes_[physicalAddress + 1] = uint8_t(value >> 16);
        bytes_[physicalAddress + 2] = uint8_t(value >> 8);
        bytes_[physicalAddress + 3] = uint8_t(value);
        return true;
    }

private:
    std::vector<uint8_t> bytes_;
};

std::string ReadText(const std::filesystem::path& path) {
    std::ifstream file(path, std::ios::binary);
    return std::string((std::istreambuf_iterator<char>(file)), std::istreambuf_iterator<char>());
}

/// The command processor feeds its recorder through PacketObserver calls as it
/// walks; the test walks the same bytes with the same walker so the decoded
/// report is produced the way it is in the game.
class WalkAdapter final : public pm4::Sink {
public:
    explicit WalkAdapter(StreamDump& dump) : dump_(dump) {}
    void OnRegisterWrite(uint32_t index, uint32_t value) override {
        dump_.OnRegisterWrite(index, value);
    }
    void OnPacket(const pm4::Header& header, pm4::Action action,
                  std::span<const uint32_t> payload) override {
        dump_.OnPacket(header, action, payload);
    }

private:
    StreamDump& dump_;
};

void WalkInto(StreamDump& dump, std::span<const uint8_t> bytes) {
    WalkAdapter adapter(dump);
    pm4::BigEndianDwordSource source(bytes);
    pm4::Limits limits;
    limits.maxPayloadWords = 4096;
    pm4::Walk(source, adapter, limits);
}

std::vector<uint8_t> ReadBytes(const std::filesystem::path& path) {
    std::ifstream file(path, std::ios::binary);
    return std::vector<uint8_t>((std::istreambuf_iterator<char>(file)),
                                std::istreambuf_iterator<char>());
}

/// A stream that begins with a Type-0 write and ends with a XE_SWAP token,
/// exactly like the guest's own VdSwap produces.
std::vector<uint8_t> MakeFrameBytes() {
    std::vector<uint8_t> bytes;
    const auto push = [&bytes](uint32_t value) {
        bytes.push_back(uint8_t(value >> 24));
        bytes.push_back(uint8_t(value >> 16));
        bytes.push_back(uint8_t(value >> 8));
        bytes.push_back(uint8_t(value));
    };
    // Type-0 header: type 0 in the top two bits, count - 1 in bits 16..29, the
    // first register index in the low 15 bits.
    push((6u << 16) | 0x100u);
    for (uint32_t index = 0; index < 7; ++index) push(0x10000000u + index);
    // Type-3 header: opcode 0x64 (XE_SWAP) in bits 8..14, count in the low 14 bits.
    push(0xC0000000u | (0x64u << 8) | 4u);
    push(0x50415753u);              // 'SWAP'
    push(0x00001000u);              // front buffer
    push(640u);
    push(480u);
    return bytes;
}

void TestWritesTheRawFrameAndItsDecode() {
    const auto directory = std::filesystem::temp_directory_path() / "sonic-stream-dump-test";
    std::filesystem::remove_all(directory);
    FakeMemory memory;
    memory.Resize(1 << 16);
    const std::vector<uint8_t> frame = MakeFrameBytes();
    const uint32_t ringBase = 0x1000;
    memory.WriteBytes(ringBase, frame);

    StreamDump dump;
    dump.SetMemory(&memory);
    std::string error;
    Check(dump.Open(directory, error), "the dump opens its directory");
    Check(error.empty(), "opening reports no error");

    // The stream sits at the start of the ring; the swap ends the frame.
    DrainInfo drain;
    drain.ringBase = ringBase;
    drain.ringMaskDwords = 0x3FF;  // 1024 dwords
    drain.readPointer = 0;
    drain.availableWords = uint32_t(frame.size() / 4);
    drain.completedWords = drain.availableWords;
    drain.hadSwap = true;
    WalkInto(dump, frame);
    dump.OnDrain(drain);
    dump.Close();

    const std::vector<uint8_t> written = ReadBytes(directory / "frame-000.bin");
    Check(written == frame, "the raw frame file is byte-identical to the guest stream");
    const std::string report = ReadText(directory / "frame-000.txt");
    Check(report.find("action=present") != std::string::npos,
          "the decoded report names the swap packet");
    Check(report.find("50415753") != std::string::npos,
          "the decoded report shows the swap token signature");
    Check(report.find("type0") != std::string::npos, "the decoded report names the Type-0 write");
    Check(report.find("64 XE_SWAP") != std::string::npos,
          "the histogram names the swap opcode (0x64)");
    const std::string run = ReadText(directory / "packets.txt");
    Check(run.find("frame 0") != std::string::npos, "the run report lists the frame");
    Check(run.find("swaps=1") != std::string::npos, "the run report counts the swap");
    Check(dump.GetStats().framesWritten == 1, "one frame recorded");
}

void TestFollowsTheRingWrap() {
    const auto directory = std::filesystem::temp_directory_path() / "sonic-stream-dump-wrap";
    std::filesystem::remove_all(directory);
    FakeMemory memory;
    memory.Resize(1 << 16);
    StreamDump dump;
    dump.SetMemory(&memory);
    std::string error;
    Check(dump.Open(directory, error), "the wrap dump opens");

    // A 64-dword ring, with a 16-dword drain that starts at dword 56 and wraps
    // to dword 8: the recorder must write the two pieces in that order.
    const uint32_t ringBase = 0x2000;
    const uint32_t ringDwords = 64;
    std::vector<uint8_t> tail(8 * 4), head(8 * 4);
    for (size_t index = 0; index < tail.size(); ++index) tail[index] = uint8_t(0xA0 + index);
    for (size_t index = 0; index < head.size(); ++index) head[index] = uint8_t(0xB0 + index);
    memory.WriteBytes(ringBase + (ringDwords - 8) * 4, tail);  // 8 dwords before the wrap
    memory.WriteBytes(ringBase, head);                          // 8 dwords after it

    DrainInfo drain;
    drain.ringBase = ringBase;
    drain.ringMaskDwords = ringDwords - 1;
    drain.readPointer = ringDwords - 8;
    drain.availableWords = 16;
    drain.completedWords = 16;
    dump.OnDrain(drain);
    dump.Close();

    const std::vector<uint8_t> written = ReadBytes(directory / "frame-000.bin");
    Check(written.size() == 16 * 4, "a wrapped drain keeps all of its dwords");
    bool ordered = written.size() == tail.size() + head.size();
    for (size_t index = 0; ordered && index < tail.size(); ++index)
        ordered = written[index] == tail[index];
    for (size_t index = 0; ordered && index < head.size(); ++index)
        ordered = written[tail.size() + index] == head[index];
    Check(ordered, "the wrapped drain is written in the order the GPU consumes it");
}

void TestStaysWithinItsCaps() {
    const auto directory = std::filesystem::temp_directory_path() / "sonic-stream-dump-cap";
    std::filesystem::remove_all(directory);
    FakeMemory memory;
    memory.Resize(1 << 16);
    StreamDump::Config config;
    config.maxFrameBytes = 64;
    config.maxFrames = 1;
    StreamDump dump(config);
    dump.SetMemory(&memory);
    std::string error;
    Check(dump.Open(directory, error), "the capped dump opens");

    DrainInfo drain;
    drain.ringBase = 0x100;
    drain.ringMaskDwords = 0x3FF;
    drain.readPointer = 0;
    drain.availableWords = 1024;
    drain.completedWords = 1024;
    dump.OnDrain(drain);
    drain.hadSwap = true;
    drain.readPointer = 0;
    dump.OnDrain(drain);  // a second frame must not be written
    dump.Close();

    const std::vector<uint8_t> written = ReadBytes(directory / "frame-000.bin");
    Check(written.size() == 64, "the raw frame stops at the byte cap");
    const std::string report = ReadText(directory / "packets.txt");
    Check(report.find("truncated") != std::string::npos, "the report says the frame was truncated");
    Check(dump.GetStats().framesTruncated == 1, "the truncation is counted");
}

void TestUnreadableMemoryIsReportedNotSilent() {
    const auto directory = std::filesystem::temp_directory_path() / "sonic-stream-dump-bad";
    std::filesystem::remove_all(directory);
    FakeMemory memory;
    memory.Resize(1024);  // far smaller than the ring the drain describes
    StreamDump dump;
    dump.SetMemory(&memory);
    std::string error;
    Check(dump.Open(directory, error), "the dump opens with unreadable ring memory");

    DrainInfo drain;
    drain.ringBase = 0x8000;  // outside the fake memory
    drain.ringMaskDwords = 0x3FF;
    drain.readPointer = 0;
    drain.availableWords = 256;
    drain.completedWords = 256;
    drain.hadSwap = true;
    dump.OnDrain(drain);
    dump.Close();
    Check(dump.GetStats().framesTruncated == 1, "an unreadable drain is reported as truncated");
}

}  // namespace

int main() {
    TestWritesTheRawFrameAndItsDecode();
    TestFollowsTheRingWrap();
    TestStaysWithinItsCaps();
    TestUnreadableMemoryIsReportedNotSilent();
    if (failures) {
        std::printf("stream dump: %d checks failed\n", failures);
        return 1;
    }
    std::printf("stream dump (raw frames, wrap, caps): all checks passed\n");
    return 0;
}
