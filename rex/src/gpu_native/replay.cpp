#include "replay.h"

#include <algorithm>
#include <cstdio>
#include <fstream>
#include <system_error>

#include "command_processor.h"
#include "pm4.h"
#include "register_file.h"

namespace sonic::rex_host::gpu {
namespace {

constexpr uint32_t kOpcodeSlots = 128;
constexpr uint32_t kRegisterSlots = 0x10000;
/// Report at most this many register indices, highest count first.
constexpr size_t kRegisterIndicesInReport = 64;

/// Counts what the stream asked for, independent of what the device could
/// execute: this histogram is the list the renderer is written against.
class ReplayObserver final : public PacketObserver {
public:
    void OnRegisterWrite(uint32_t index, uint32_t /*value*/) override {
        if (index < kRegisterSlots) ++registers[index];
    }
    void OnPacket(const pm4::Header& header, pm4::Action /*action*/,
                  std::span<const uint32_t> /*payload*/) override {
        if (header.type == pm4::PacketType::kType3 && header.opcode < kOpcodeSlots) {
            ++opcodes[header.opcode];
        }
    }
    void OnDrain(const DrainInfo& /*drain*/) override {}

    std::vector<uint64_t> opcodes = std::vector<uint64_t>(kOpcodeSlots, 0);
    std::vector<uint64_t> registers = std::vector<uint64_t>(kRegisterSlots, 0);
};

/// Records the frames the guest swapped, in order. The renderer's entry point is
/// this list: one swap, one frame.
class ReplaySwapSink final : public SwapPresenter {
public:
    struct Frame {
        uint32_t address = 0;
        uint32_t width = 0;
        uint32_t height = 0;
    };
    void OnSwap(uint32_t frontbufferAddress, uint32_t width, uint32_t height) override {
        frames.push_back(Frame{frontbufferAddress, width, height});
    }
    std::vector<Frame> frames;
};

std::string Hex(uint32_t value, int digits = 8) {
    char text[16];
    std::snprintf(text, sizeof(text), "%0*X", digits, value);
    return text;
}

std::string FrameLine(const ReplayFrameResult& frame) {
    char line[320];
    std::snprintf(line, sizeof(line),
                  "frame %llu: %llu bytes, %llu packets, %llu register writes, %llu draws "
                  "(%llu vertices), %llu constant blocks, %llu shader uploads, %llu memory "
                  "writes, %llu swaps, %llu unsupported",
                  (unsigned long long)frame.index, (unsigned long long)frame.bytes,
                  (unsigned long long)frame.packets, (unsigned long long)frame.registerWrites,
                  (unsigned long long)frame.draws, (unsigned long long)frame.vertices,
                  (unsigned long long)frame.constantBlocks,
                  (unsigned long long)frame.shaderUploads,
                  (unsigned long long)frame.memoryWrites, (unsigned long long)frame.swaps,
                  (unsigned long long)frame.unsupported);
    return line;
}

/// How many dwords a frame is fed in. Half the ring keeps the slack between the
/// write pointer and a truncated packet's resume point.
uint32_t FeedChunkDwords(uint32_t ringDwords) {
    const uint32_t half = ringDwords / 2;
    return half ? half : ringDwords;
}

/// Places `dwords` of guest bytes at the ring position `absoluteDword`, wrapping
/// the way the guest's own writes do. Returns false if the image refused them.
bool PlaceInRing(MemoryImage& image, uint32_t ringBase, uint32_t ringMask,
                 uint32_t absoluteDword, std::span<const uint8_t> bytes) {
    const uint32_t ringDwords = ringMask + 1;
    uint32_t index = absoluteDword & ringMask;
    size_t offset = 0;
    while (offset < bytes.size()) {
        const uint32_t dwordsHere =
            std::min<uint32_t>(uint32_t((bytes.size() - offset) / 4), ringDwords - index);
        if (dwordsHere == 0) return false;
        if (!image.Capture(ringBase + index * 4u, bytes.subspan(offset, size_t(dwordsHere) * 4)))
            return false;
        offset += size_t(dwordsHere) * 4u;
        index = (index + dwordsHere) & ringMask;
    }
    return true;
}

}  // namespace

std::string ReplayResult::Report() const {
    std::string text;
    char line[320];
    std::snprintf(line, sizeof(line), "frames=%llu bytes=%llu packets=%llu register_writes=%llu\n",
                  (unsigned long long)frames, (unsigned long long)bytes,
                  (unsigned long long)packets, (unsigned long long)registerWrites);
    text += line;
    std::snprintf(line, sizeof(line),
                  "draws=%llu vertices=%llu constant_blocks=%llu shader_uploads=%llu "
                  "memory_writes=%llu swaps=%llu\n",
                  (unsigned long long)draws, (unsigned long long)vertices,
                  (unsigned long long)constantBlocks, (unsigned long long)shaderUploads,
                  (unsigned long long)memoryWrites, (unsigned long long)swaps);
    text += line;
    std::snprintf(line, sizeof(line),
                  "unsupported=%llu truncated_drains=%llu indirect_not_followed=%llu\n",
                  (unsigned long long)unsupported, (unsigned long long)truncatedDrains,
                  (unsigned long long)indirectNotFollowed);
    text += line;
    std::snprintf(line, sizeof(line), "guest_memory_sidecar=%s regions=%llu bytes=%llu\n",
                  sidecarPresent ? "yes" : "no", (unsigned long long)sidecarRegions,
                  (unsigned long long)sidecarBytes);
    text += line;
    text += "\nper frame:\n";
    for (const ReplayFrameResult& frame : perFrame) text += "  " + FrameLine(frame) + "\n";
    text += "\nopcodes the stream used (Type-3):\n";
    bool anyOpcode = false;
    for (uint32_t opcode = 0; opcode < opcodes.size(); ++opcode) {
        if (!opcodes[opcode]) continue;
        anyOpcode = true;
        const std::string index = Hex(opcode, 2);
        std::snprintf(line, sizeof(line), "  %s %s = %llu\n", index.c_str(),
                      pm4::OpcodeName(opcode), (unsigned long long)opcodes[opcode]);
        text += line;
    }
    if (!anyOpcode) text += "  (none)\n";
    // The register indices are what says which parts of the hardware state the
    // stream really relies on; renderer work can be ordered by this list.
    text += "\nregisters written (index = count), highest first:\n";
    std::vector<uint32_t> order;
    for (uint32_t index = 0; index < registers.size(); ++index) {
        if (registers[index]) order.push_back(index);
    }
    std::sort(order.begin(), order.end(), [this](uint32_t left, uint32_t right) {
        return registers[left] > registers[right];
    });
    for (size_t position = 0; position < order.size() && position < kRegisterIndicesInReport;
         ++position) {
        const std::string index = Hex(order[position], 4);
        std::snprintf(line, sizeof(line), "  %s = %llu\n", index.c_str(),
                      (unsigned long long)registers[order[position]]);
        text += line;
    }
    if (order.size() > kRegisterIndicesInReport) {
        std::snprintf(line, sizeof(line), "  ... and %llu more indices\n",
                      (unsigned long long)(order.size() - kRegisterIndicesInReport));
        text += line;
    }
    return text;
}

ReplayResult ReplayFrameBytes(std::span<const uint8_t> bytes, const ReplayOptions& options,
                              MemoryImage* memory) {
    ReplayResult result;
    if (bytes.empty()) {
        result.error = "the frame is empty";
        return result;
    }
    if (bytes.size() % 4) {
        result.error = "the frame is not a whole number of dwords";
        return result;
    }
    MemoryImage owned;
    MemoryImage& image = memory ? *memory : owned;

    RenderState::Config stateConfig;
    stateConfig.maxFrames = 64;  // enough summaries for a recorded run's frames
    RenderState state(stateConfig);
    ReplayObserver observer;
    ReplaySwapSink sink;
    CommandProcessor processor;
    processor.SetMemory(&image);
    processor.SetRenderState(&state);
    processor.SetPresenter(&sink);
    processor.SetObserver(&observer);
    processor.InitializeRingBuffer(options.ringBase, options.ringSizeLog2);
    if (!processor.ringInitialized()) {
        result.error = "the replay ring could not be initialized";
        return result;
    }
    const uint32_t ringDwords = uint32_t(1) << (options.ringSizeLog2 + 1);
    const uint32_t ringMask = ringDwords - 1;
    const uint32_t chunkDwords = FeedChunkDwords(ringDwords);
    const uint32_t totalDwords = uint32_t(bytes.size() / 4);

    // The frame is streamed through the ring the way the guest streams it, so a
    // packet that does not fit in one chunk is resumed after the walker rewinds
    // to its start -- the same path a live ring exercises.
    uint32_t fed = 0;
    size_t steps = 0;
    while (fed < totalDwords && steps < options.maxSteps) {
        const uint32_t chunk = std::min(chunkDwords, totalDwords - fed);
        if (!PlaceInRing(image, options.ringBase, ringMask, fed,
                         bytes.subspan(size_t(fed) * 4u, size_t(chunk) * 4u))) {
            result.error = "the ring bytes could not be placed in the image";
            return result;
        }
        fed += chunk;
        processor.OnWritePointer(fed & ringMask);
        processor.Tick();
        ++steps;
    }
    // Anything the last chunk left in flight still has to be executed.
    while (processor.HasWork() && steps < options.maxSteps) {
        processor.Tick();
        ++steps;
    }

    const CommandProcessor::Stats& device = processor.GetStats();
    const RenderState::Stats& decoded = state.stats();
    result.ok = true;
    result.frames = 1;
    result.bytes = bytes.size();
    result.packets = device.packets;
    result.registerWrites = device.registerWrites;
    result.draws = decoded.draws;
    result.constantBlocks = decoded.constantBlocks;
    result.shaderUploads = decoded.shaderUploads;
    result.memoryWrites = decoded.memoryWrites;
    result.swaps = device.swaps;
    result.unsupported = device.unsupportedPackets + decoded.shaderUploadsUnreadable;
    result.truncatedDrains = device.truncatedDrains;
    result.indirectNotFollowed = device.unmappedIndirect;
    result.opcodes = std::move(observer.opcodes);
    result.registers = std::move(observer.registers);

    for (const FrameSummary& summary : state.frames()) {
        ReplayFrameResult frame;
        frame.index = summary.index;
        frame.draws = summary.draws;
        frame.vertices = summary.vertices;
        frame.constantBlocks = summary.constantBlocks;
        frame.shaderUploads = summary.shaderUploads;
        frame.memoryWrites = summary.memoryWrites;
        frame.registerWrites = summary.registerWrites;
        result.vertices += summary.vertices;
        result.perFrame.push_back(frame);
    }
    const bool closedBySwap = !result.perFrame.empty();
    if (!closedBySwap) {
        // No swap closed a frame: the draws still happened, and a report that
        // hides them would say the frame was empty.
        ReplayFrameResult frame;
        frame.draws = decoded.draws;
        frame.constantBlocks = decoded.constantBlocks;
        frame.shaderUploads = decoded.shaderUploads;
        frame.memoryWrites = decoded.memoryWrites;
        result.perFrame.push_back(frame);
    }
    // The bytes of the file belong to its first frame; the rest share it.
    result.perFrame.front().bytes = result.bytes;
    result.perFrame.front().packets = result.packets;
    result.perFrame.front().swaps = result.swaps;
    result.perFrame.front().unsupported = result.unsupported;
    return result;
}

ReplayResult ReplayDumpDirectory(const std::filesystem::path& directory,
                                 const ReplayOptions& options) {
    ReplayResult result;
    std::error_code code;
    if (!std::filesystem::exists(directory, code)) {
        result.error = directory.string() + " does not exist";
        return result;
    }
    // The sidecar first: the stream reads from it, so it has to be in place.
    MemoryImage memory;
    const std::filesystem::path sidecar = directory / "memory.bin";
    if (std::filesystem::exists(sidecar, code)) {
        std::string error;
        uint32_t regions = 0;
        if (!MemoryCapture::Load(sidecar, memory, error, &regions)) {
            result.error = error;
            return result;
        }
        result.sidecarPresent = true;
        result.sidecarRegions = regions;
        result.sidecarBytes = memory.capturedBytes();
    }
    // Frame files in name order: frame-000.bin, frame-001.bin, ...
    std::vector<std::filesystem::path> frames;
    for (const auto& entry : std::filesystem::directory_iterator(directory, code)) {
        if (!entry.is_regular_file()) continue;
        const std::string name = entry.path().filename().string();
        if (name.rfind("frame-", 0) == 0 && entry.path().extension() == ".bin") {
            frames.push_back(entry.path());
        }
    }
    std::sort(frames.begin(), frames.end());
    if (frames.empty()) {
        result.error = directory.string() + " has no frame-NNN.bin files";
        return result;
    }
    if (options.maxFrames && frames.size() > options.maxFrames) frames.resize(options.maxFrames);

    result.ok = true;
    result.opcodes.assign(kOpcodeSlots, 0);
    result.registers.assign(kRegisterSlots, 0);
    for (const std::filesystem::path& file : frames) {
        std::ifstream input(file, std::ios::binary);
        if (!input) {
            result.ok = false;
            result.error = "cannot read " + file.string();
            return result;
        }
        const std::vector<uint8_t> bytes((std::istreambuf_iterator<char>(input)),
                                         std::istreambuf_iterator<char>());
        ReplayResult frame = ReplayFrameBytes(bytes, options, &memory);
        if (!frame.ok) {
            result.ok = false;
            result.error = file.filename().string() + ": " + frame.error;
            return result;
        }
        result.files.push_back(file);
        result.frames += 1;
        result.bytes += frame.bytes;
        result.packets += frame.packets;
        result.registerWrites += frame.registerWrites;
        result.draws += frame.draws;
        result.vertices += frame.vertices;
        result.constantBlocks += frame.constantBlocks;
        result.shaderUploads += frame.shaderUploads;
        result.memoryWrites += frame.memoryWrites;
        result.swaps += frame.swaps;
        result.unsupported += frame.unsupported;
        result.truncatedDrains += frame.truncatedDrains;
        result.indirectNotFollowed += frame.indirectNotFollowed;
        for (ReplayFrameResult summary : frame.perFrame) {
            summary.index = result.perFrame.size();
            result.perFrame.push_back(summary);
        }
        for (size_t index = 0; index < result.opcodes.size(); ++index) {
            result.opcodes[index] += frame.opcodes[index];
        }
        for (size_t index = 0; index < result.registers.size(); ++index) {
            result.registers[index] += frame.registers[index];
        }
    }
    if (options.writeReport) {
        std::ofstream report(directory / "replay-report.txt", std::ios::trunc);
        if (report) {
            report << "# re-decoded by our own device from the recorded ring bytes "
                      "(rex_gpu_replay)\n";
            report << result.Report();
        }
    }
    return result;
}

}  // namespace sonic::rex_host::gpu
