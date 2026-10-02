// Contract tests for the offline replay of a recorded command stream.
//
// Why this matters: the renderer is written against the stream the game really
// produces, and waiting for a Windows run for every decoder change makes that
// work blind. A recording is a self-contained artifact (raw ring bytes per frame
// plus the guest-memory regions the stream references), and these tests pin the
// contract that makes it replayable: the image refuses reads it did not capture
// instead of returning zeros, the sidecar round-trips, and a synthetic stream
// carrying every packet class the renderer needs comes out of the replay with
// the right numbers.
#include "gpu_native/memory_image.h"
#include "gpu_native/memory_sidecar.h"
#include "gpu_native/replay.h"

#include <cstdio>
#include <cstring>
#include <filesystem>
#include <fstream>
#include <functional>
#include <span>
#include <string>
#include <vector>

using namespace sonic::rex_host;
using namespace sonic::rex_host::gpu;

namespace {
int failures = 0;
#define CHECK(condition)                                                     \
    do {                                                                     \
        if (!(condition)) {                                                  \
            std::printf("FAIL %s:%d: %s\n", __FILE__, __LINE__, #condition); \
            ++failures;                                                      \
        }                                                                    \
    } while (0)

/// Appends a packet and every word it needs, in guest byte order.
class StreamBuilder {
public:
    void Type0(uint32_t index, const std::vector<uint32_t>& values) {
        words_.push_back(pm4::MakePacketType0(index, uint32_t(values.size())));
        for (uint32_t value : values) words_.push_back(value);
    }
    void Type3(uint32_t opcode, const std::vector<uint32_t>& payload) {
        words_.push_back(pm4::MakePacketType3(opcode, uint32_t(payload.size())));
        for (uint32_t value : payload) words_.push_back(value);
    }
    /// Big-endian guest bytes of the stream, which is what a recording contains.
    std::vector<uint8_t> Bytes() const {
        std::vector<uint8_t> bytes;
        bytes.reserve(words_.size() * 4);
        for (uint32_t word : words_) {
            bytes.push_back(uint8_t(word >> 24));
            bytes.push_back(uint8_t(word >> 16));
            bytes.push_back(uint8_t(word >> 8));
            bytes.push_back(uint8_t(word));
        }
        return bytes;
    }
    size_t dwords() const { return words_.size(); }

private:
    std::vector<uint32_t> words_;
};

std::vector<uint8_t> GuestBytes(const std::vector<uint32_t>& words) {
    std::vector<uint8_t> bytes;
    bytes.reserve(words.size() * 4);
    for (uint32_t word : words) {
        bytes.push_back(uint8_t(word >> 24));
        bytes.push_back(uint8_t(word >> 16));
        bytes.push_back(uint8_t(word >> 8));
        bytes.push_back(uint8_t(word));
    }
    return bytes;
}

uint32_t DrawInitiator(uint32_t primitive, uint32_t source, uint32_t majorMode, bool index32,
                       uint32_t numIndices) {
    return (primitive & 0x3F) | ((source & 3) << 6) | ((majorMode & 3) << 8) |
           (index32 ? 0x800u : 0u) | ((numIndices & 0xFFFF) << 16);
}

/// A stream that uses every packet class the renderer has to handle: registers,
/// constant blocks, constants read from guest memory, an indirect buffer, a
/// shader upload, a draw, a GPU memory write and a swap.
StreamBuilder RealisticStream(uint32_t shaderAddress, uint32_t constantAddress,
                              uint32_t indirectAddress, uint32_t frontbuffer) {
    StreamBuilder stream;
    // Render state as the D3D driver writes it: a REGISTERS table block.
    stream.Type3(0x2D, {(4u << 16) | 0x000, 1280u | (0u << 16), 7u | (2u << 16), 0x00000044});
    // An ALU constant block written inline.
    stream.Type3(0x2D, {(0u << 16) | 2, 0x3F800000, 0x40000000});
    // A constant block read from guest memory.
    stream.Type3(0x2F, {constantAddress, (0u << 16) | 8, 3, 0x00000000});
    // An indirect buffer holding two more register writes.
    stream.Type3(0x3F, {indirectAddress, 3u | (0u << 16)});
    // Shader upload from guest memory.
    stream.Type3(0x27, {shaderAddress, 8u | (0u << 16)});
    // An indexed draw.
    stream.Type3(0x22, {0, DrawInitiator(4, 0, 0, false, 36), 0x4000, 36u});
    // The GPU is asked to write a value back into guest memory.
    stream.Type3(0x3D, {0x0000A000, 0xDEADBEEF});
    // VdSwap: the signature, the front buffer and its size.
    stream.Type3(0x64, {pm4::kSwapSignature, frontbuffer, 1280, 720});
    return stream;
}

void TestMemoryImageIsHonestAboutWhatItHas() {
    MemoryImage image;
    const std::vector<uint32_t> words = {0x11223344, 0xAABBCCDD};
    CHECK(image.Capture(0x2000, GuestBytes(words)));
    std::vector<uint32_t> read(2, 0);
    CHECK(image.Read(0x2000, std::span<uint8_t>(reinterpret_cast<uint8_t*>(read.data()), 8)));
    // The image stores guest byte order, so a value written by a packet comes
    // back as the guest would see it.
    CHECK(image.ReadableBytes(0x2000, 64) == 8);
    // A read that crosses into memory nobody captured must fail, not zero-fill:
    // zeros would draw garbage at the origin instead of showing a missing capture.
    std::vector<uint8_t> across(16, 0xAB);
    CHECK(!image.Read(0x2000 + 4, std::span<uint8_t>(across.data(), 8)));
    CHECK(image.readFailures() == 1);
    // PM4_MEM_WRITE lands in the image as guest byte order too.
    CHECK(image.Write32(0x2000, 0x01020304));
    std::vector<uint8_t> bytes(4, 0);
    CHECK(image.Read(0x2000, std::span<uint8_t>(bytes.data(), 4)));
    CHECK(bytes[0] == 0x01 && bytes[1] == 0x02 && bytes[2] == 0x03 && bytes[3] == 0x04);
}

void TestSidecarRoundTrips() {
    MemoryCapture capture;
    const std::vector<uint32_t> shader = {0x00000001, 0x00000002, 0x00000003};
    const std::vector<uint8_t> shaderBytes = GuestBytes(shader);
    const std::function<bool(uint32_t, std::span<uint8_t>)> read = [&shaderBytes](
                                                                        uint32_t,
                                                                        std::span<uint8_t> destination) {
        std::memcpy(destination.data(), shaderBytes.data(), destination.size());
        return true;
    };
    CHECK(capture.Capture(0x3000, shaderBytes.size(), read));
    CHECK(capture.regionCount() == 1);
    // Capturing the same region again is a no-op, not a duplicate.
    CHECK(capture.Capture(0x3000, shaderBytes.size(), read));
    CHECK(capture.regionCount() == 1);
    CHECK(capture.Contains(0x3004, 4));
    CHECK(!capture.Contains(0x3000, 64));

    const std::filesystem::path path =
        std::filesystem::temp_directory_path() / "sonic-replay-sidecar.bin";
    std::string error;
    CHECK(capture.Write(path, error));
    MemoryImage image;
    uint32_t regions = 0;
    CHECK(MemoryCapture::Load(path, image, error, &regions));
    CHECK(regions == 1);
    std::vector<uint8_t> readBack(4, 0);
    CHECK(image.Read(0x3004, std::span<uint8_t>(readBack.data(), 4)));
    CHECK(readBack[3] == 0x02);
    std::filesystem::remove(path);

    // A damaged file is an error with a reason, never a crash or a silent pass.
    std::ofstream damaged(path, std::ios::binary | std::ios::trunc);
    damaged << "NOTMAGIC";
    damaged.close();
    MemoryImage other;
    CHECK(!MemoryCapture::Load(path, other, error));
    CHECK(error.find("magic") != std::string::npos);
    std::filesystem::remove(path);
}

void TestReplayExecutesEveryPacketClass() {
    const uint32_t shaderAddress = 0x00003000;
    const uint32_t constantAddress = 0x00004000;
    const uint32_t indirectAddress = 0x00005000;
    const uint32_t frontbuffer = 0x00100000;

    MemoryImage image;
    // The shader microcode: IM_LOAD's size field is start | size, so the low
    // word is the dword count.
    // IM_LOAD declares the shader's dword count in the low half of its second
    // payload word, so the captured region has to cover exactly what it reads.
    CHECK(image.Capture(shaderAddress, GuestBytes({0x00000001, 0x00000002, 0x00000003,
                                                   0x00000004, 0x00000005, 0x00000006,
                                                   0x00000007, 0x00000008})));
    CHECK(image.Capture(constantAddress, GuestBytes({0x3F800000, 0x40000000, 0x40400000})));
    // The indirect buffer: two Type-0 register writes.
    const StreamBuilder indirect = [] {
        StreamBuilder builder;
        builder.Type0(0x2081, {0x0014000A, 0x003C0064});
        return builder;
    }();
    CHECK(image.Capture(indirectAddress, indirect.Bytes()));

    const StreamBuilder stream =
        RealisticStream(shaderAddress, constantAddress, indirectAddress, frontbuffer);
    const std::vector<uint8_t> bytes = stream.Bytes();
    const ReplayResult result = ReplayFrameBytes(bytes, {}, &image);
    CHECK(result.ok);
    if (!result.ok) {
        std::printf("  replay error: %s\n", result.error.c_str());
        return;
    }
    CHECK(result.frames == 1);
    CHECK(result.swaps == 1);
    CHECK(result.draws == 1);
    CHECK(result.vertices == 36);
    // Three state blocks: the REGISTERS table, the inline ALU block, and the
    // block read from guest memory with LOAD_ALU_CONSTANT.
    CHECK(result.constantBlocks == 3);
    CHECK(result.shaderUploads == 1);
    CHECK(result.memoryWrites == 1);
    // Type-0 register writes come from the indirect buffer; constant blocks are
    // register writes in hardware terms but arrive as SET_CONSTANT payloads and
    // are counted as state blocks, not as Type-0 traffic.
    CHECK(result.registerWrites == 2);
    CHECK(result.registers[0x2081] == 1 && result.registers[0x2082] == 1);
    CHECK(result.unsupported == 0);
    CHECK(result.truncatedDrains == 0);
    CHECK(result.indirectNotFollowed == 0);
    CHECK(result.registers[0x2081] == 1);
    CHECK(result.opcodes[0x3F] == 1);
    CHECK(result.opcodes[0x64] == 1);
    // The swap payload is what the renderer will be handed a frame with.
    CHECK(result.perFrame.size() == 1);
    if (!result.perFrame.empty()) {
        CHECK(result.perFrame.front().draws == 1);
        CHECK(result.perFrame.front().swaps == 1);
        CHECK(result.perFrame.front().bytes == bytes.size());
    }
    // The report has to name the opcodes a renderer has to implement.
    const std::string report = result.Report();
    CHECK(report.find("opcodes the stream used") != std::string::npos);
    CHECK(report.find("INDIRECT_BUFFER") != std::string::npos);
    CHECK(report.find("XE_SWAP") != std::string::npos);
    CHECK(report.find("registers written") != std::string::npos);
}

void TestReplayReportsMissingGuestMemory() {
    // Without the sidecar the stream still decodes, but the packets that read
    // guest memory must show up as unsupported instead of silently succeeding.
    const StreamBuilder stream = RealisticStream(0x3000, 0x4000, 0x5000, 0x100000);
    const ReplayResult result = ReplayFrameBytes(stream.Bytes());
    CHECK(result.ok);
    CHECK(result.shaderUploads == 0);
    CHECK(result.unsupported >= 2);  // the shader upload and the constant block
    CHECK(result.draws == 1);        // the draw itself needs no guest memory
}

void TestReplayStreamsFramesLargerThanTheRing() {
    // A frame far bigger than the replay ring has to survive the ring wrap: the
    // guest streams commands the same way, and a walker that loses packets on
    // wrap would lose real geometry.
    StreamBuilder stream;
    for (uint32_t index = 0; index < 4000; ++index) {
        stream.Type3(0x55, {0x2081u + (index % 4), index});
    }
    stream.Type3(0x36, {DrawInitiator(4, 2, 0, false, 3)});
    stream.Type3(0x64, {pm4::kSwapSignature, 0x100000, 1280, 720});
    const std::vector<uint8_t> bytes = stream.Bytes();
    CHECK(bytes.size() > (uint32_t(1) << (12 + 1)) * 4u);  // bigger than a log2 12 ring

    ReplayOptions options;
    options.ringSizeLog2 = 12;
    const ReplayResult result = ReplayFrameBytes(bytes, options);
    CHECK(result.ok);
    CHECK(result.draws == 1);
    CHECK(result.swaps == 1);
    CHECK(result.constantBlocks == 4000);
    CHECK(result.unsupported == 0);
}

void TestDirectoryReplayWritesTheReport() {
    const std::filesystem::path directory =
        std::filesystem::temp_directory_path() / "sonic-replay-directory";
    std::error_code code;
    std::filesystem::remove_all(directory, code);
    std::filesystem::create_directories(directory, code);

    MemoryImage sidecarImage;
    CHECK(sidecarImage.Capture(0x3000, GuestBytes({1, 2, 3, 4, 5, 6, 7, 8})));
    CHECK(sidecarImage.Capture(0x4000, GuestBytes({0x3F800000})));
    MemoryCapture sidecar;
    CHECK(sidecar.Capture(0x3000, 8 * 4, [&sidecarImage](uint32_t address,
                                                         std::span<uint8_t> destination) {
        return sidecarImage.Read(address, destination);
    }));
    CHECK(sidecar.Capture(0x4000, 4, [&sidecarImage](uint32_t address,
                                                     std::span<uint8_t> destination) {
        return sidecarImage.Read(address, destination);
    }));
    std::string error;
    CHECK(sidecar.Write(directory / "memory.bin", error));

    const StreamBuilder stream = RealisticStream(0x3000, 0x4000, 0x5000, 0x100000);
    std::ofstream frame(directory / "frame-000.bin", std::ios::binary | std::ios::trunc);
    const std::vector<uint8_t> bytes = stream.Bytes();
    frame.write(reinterpret_cast<const char*>(bytes.data()), std::streamsize(bytes.size()));
    frame.close();

    const ReplayResult result = ReplayDumpDirectory(directory);
    CHECK(result.ok);
    CHECK(result.frames == 1);
    CHECK(result.sidecarPresent);
    CHECK(result.sidecarRegions == 2);
    CHECK(result.draws == 1);
    CHECK(result.shaderUploads == 1);
    CHECK(std::filesystem::exists(directory / "replay-report.txt"));
    std::ifstream report(directory / "replay-report.txt");
    std::string text((std::istreambuf_iterator<char>(report)), std::istreambuf_iterator<char>());
    CHECK(text.find("guest_memory_sidecar=yes") != std::string::npos);
    CHECK(text.find("draws=1") != std::string::npos);
    std::filesystem::remove_all(directory, code);

    // A directory with no recording says so instead of reporting zeros.
    const ReplayResult empty = ReplayDumpDirectory(directory);
    CHECK(!empty.ok);
    CHECK(empty.error.find("does not exist") != std::string::npos ||
          empty.error.find("no frame-") != std::string::npos);
}

}  // namespace

int main() {
    TestMemoryImageIsHonestAboutWhatItHas();
    TestSidecarRoundTrips();
    TestReplayExecutesEveryPacketClass();
    TestReplayReportsMissingGuestMemory();
    TestReplayStreamsFramesLargerThanTheRing();
    TestDirectoryReplayWritesTheReport();
    if (failures) {
        std::printf("%d replay check(s) failed\n", failures);
        return 1;
    }
    std::printf("replay checks passed\n");
    return 0;
}
