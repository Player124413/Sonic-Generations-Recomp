#include "stream_dump.h"

#include <algorithm>
#include <cstdio>
#include <system_error>

namespace sonic::rex_host::gpu {
namespace {

std::string Hex(uint32_t value, int digits = 8) {
    char text[16];
    std::snprintf(text, sizeof(text), "%0*X", digits, value);
    return text;
}

const char* ActionLabel(pm4::Action action) {
    switch (action) {
    case pm4::Action::RegisterWrite: return "register_write";
    case pm4::Action::Draw: return "draw";
    case pm4::Action::Present: return "present";
    case pm4::Action::Wait: return "wait";
    case pm4::Action::IndirectBuffer: return "indirect_buffer";
    case pm4::Action::MemoryWrite: return "memory_write";
    case pm4::Action::Interrupt: return "interrupt";
    case pm4::Action::EventWrite: return "event_write";
    case pm4::Action::ShaderLoad: return "shader_load";
    case pm4::Action::StateSet: return "state_set";
    case pm4::Action::ConditionalExec: return "conditional_exec";
    case pm4::Action::Unsupported: return "unsupported";
    default: return "?";
    }
}

}  // namespace

bool StreamDump::Open(const std::filesystem::path& directory, std::string& error) {
    if (report_.is_open()) return true;
    std::error_code code;
    std::filesystem::create_directories(directory, code);
    if (code) {
        error = "cannot create " + directory.string() + ": " + code.message();
        return false;
    }
    directory_ = directory;
    report_.open(directory / "packets.txt", std::ios::trunc);
    if (!report_) {
        error = "cannot write " + (directory / "packets.txt").string();
        return false;
    }
    WriteReportLine("# command-stream dump from our own GPU device (SONIC_REX_GPU_DUMP=1)");
    WriteReportLine("# frame-NNN.bin is the raw guest byte stream drained between two swaps,");
    WriteReportLine("# in guest byte order, so it can be replayed through our own PM4 walker.");
    WriteReportLine("# frame-NNN.txt decodes that stream: opcode histogram and first packets.");
    StartFrame();
    return true;
}

void StreamDump::Close() {
    if (!report_.is_open()) return;
    FinishFrame(false);
    report_ << "\n# totals: drains=" << stats_.drains << " packets=" << stats_.packets
            << " swaps=" << stats_.swaps << " register_writes=" << stats_.registerWrites
            << " frames_written=" << stats_.framesWritten
            << " frames_truncated=" << stats_.framesTruncated
            << " frames_skipped=" << stats_.framesSkipped << "\n";
    report_ << "# opcode histogram (whole run, opcode 7F = Type-0/1 writes):\n";
    for (uint32_t opcode = 0; opcode < 128; ++opcode) {
        if (!opcodeCounts_[opcode]) continue;
        report_ << "#   opcode " << Hex(opcode, 2) << " " << pm4::OpcodeName(opcode)
                << " = " << opcodeCounts_[opcode] << "\n";
    }
    report_.flush();
    report_.close();
}

void StreamDump::StartFrame() {
    frameBytes_.clear();
    frameLog_.clear();
    packetsLogged_ = 0;
    frameTruncated_ = false;
    frameHadSwap_ = false;
    frameTruncatedLogged_ = false;
    for (uint64_t& count : frameCounts_) count = 0;
}

void StreamDump::FinishFrame(bool hadSwap) {
    if (!report_.is_open()) return;
    // Nothing was drained and nothing was collected: no frame to write, but the
    // index must still advance so files stay ordered in time.
    // A frame that could not be copied still has to leave a trace: silent
    // nothing is exactly the failure mode this recorder exists to remove.
    const bool hasContent = !frameBytes_.empty() || !frameLog_.empty() || frameTruncated_;
    if (!hasContent && !hadSwap) return;
    const bool withinCap = stats_.framesWritten < config_.maxFrames;
    if (hasContent && !withinCap) {
        ++stats_.framesSkipped;
        WriteReportLine("frame " + std::to_string(frameIndex_) + ": skipped (frame cap reached)");
        ++frameIndex_;
        StartFrame();
        return;
    }
    if (hasContent) {
        char name[32];
        std::snprintf(name, sizeof(name), "frame-%03llu",
                      static_cast<unsigned long long>(stats_.framesWritten));
        const std::filesystem::path binary = directory_ / (std::string(name) + ".bin");
        std::ofstream file(binary, std::ios::binary | std::ios::trunc);
        if (file) {
            file.write(reinterpret_cast<const char*>(frameBytes_.data()),
                       std::streamsize(frameBytes_.size()));
            file.flush();
            stats_.bytesWritten += frameBytes_.size();
        }
        std::ofstream text(directory_ / (std::string(name) + ".txt"), std::ios::trunc);
        if (text) {
            text << "frame " << frameIndex_ << "\n"
                 << "raw bytes: " << frameBytes_.size()
                 << (frameTruncated_ ? " (truncated at the frame cap)" : "") << "\n"
                 << FrameHistogram() << "\nfirst packets:\n"
                 << frameLog_;
        }
        report_ << "frame " << frameIndex_ << ": " << frameBytes_.size() << " bytes"
                << (frameTruncated_ ? " (truncated)" : "") << " -> " << name << ".bin/.txt\n";
        ++stats_.framesWritten;
        if (frameTruncated_) ++stats_.framesTruncated;
        for (uint32_t opcode = 0; opcode < 128; ++opcode) opcodeCounts_[opcode] += frameCounts_[opcode];
    }
    ++frameIndex_;
    StartFrame();
}

void StreamDump::WriteReportLine(const std::string& line) {
    if (report_.is_open()) report_ << line << "\n";
}

void StreamDump::AppendDrainedBytes(const DrainInfo& drain) {
    if (!memory_ || !drain.completedWords) return;
    const uint32_t ringDwords = drain.ringMaskDwords + 1;
    uint32_t remaining = drain.completedWords;
    uint32_t index = drain.readPointer & drain.ringMaskDwords;
    while (remaining) {
        const uint32_t contiguous = std::min(remaining, ringDwords - index);
        const size_t bytes = size_t(contiguous) * 4u;
        const size_t room = frameBytes_.size() < config_.maxFrameBytes
                                ? config_.maxFrameBytes - frameBytes_.size()
                                : 0;
        const size_t take = std::min(bytes, room);
        if (!take) {
            frameTruncated_ = true;
            break;
        }
        const size_t at = frameBytes_.size();
        frameBytes_.resize(at + take);
        if (!memory_->Read(drain.ringBase + index * 4u,
                           std::span<uint8_t>(frameBytes_.data() + at, take))) {
            frameBytes_.resize(at);
            frameTruncated_ = true;
            break;
        }
        if (take != bytes) {
            frameTruncated_ = true;
            break;
        }
        remaining -= contiguous;
        index = (index + contiguous) & drain.ringMaskDwords;
    }
}

void StreamDump::OnRegisterWrite(uint32_t index, uint32_t value) {
    ++stats_.registerWrites;
    ++frameCounts_[0x7F];
    if (packetsLogged_ >= config_.loggedPacketsPerFrame) return;
    ++packetsLogged_;
    frameLog_ += "  reg " + Hex(index, 4) + " = " + Hex(value) + "\n";
}

void StreamDump::OnPacket(const pm4::Header& header, pm4::Action action,
                          std::span<const uint32_t> payload) {
    ++stats_.packets;
    if (action == pm4::Action::Present) {
        ++stats_.swaps;
        frameHadSwap_ = true;
    }
    if (header.type == pm4::PacketType::kType3) ++frameCounts_[header.opcode & 0x7F];
    if (packetsLogged_ >= config_.loggedPacketsPerFrame) return;
    ++packetsLogged_;
    frameLog_ += DescribePacket(header, action, payload);
}

std::string StreamDump::DescribePacket(const pm4::Header& header, pm4::Action action,
                                       std::span<const uint32_t> payload) const {
    std::string line = "  ";
    switch (header.type) {
    case pm4::PacketType::kType0: line += "type0 regs from " + Hex(header.index, 4); break;
    case pm4::PacketType::kType1:
        line += "type1 " + Hex(header.index, 4) + "/" + Hex(header.index2, 4);
        break;
    case pm4::PacketType::kType2: line += "type2"; break;
    case pm4::PacketType::kType3:
        line += "type3 " + std::string(pm4::OpcodeName(header.opcode)) + " (" +
                Hex(header.opcode, 2) + ")";
        break;
    }
    line += " count=" + std::to_string(header.count) + " action=" + ActionLabel(action);
    if (header.predicate) line += " predicate";
    if (!payload.empty()) {
        const size_t shown = std::min(payload.size(), config_.payloadWordsInReport);
        line += " payload:";
        for (size_t index = 0; index < shown; ++index) line += " " + Hex(payload[index]);
        if (shown < payload.size())
            line += " ... (" + std::to_string(payload.size() - shown) + " more)";
    } else if (header.count) {
        // The walker reports an empty payload for packets larger than its
        // buffer: say so instead of looking like a packet without data.
        line += " payload: not captured (" + std::to_string(header.count) + " dwords)";
    }
    line += "\n";
    return line;
}

void StreamDump::OnDrain(const DrainInfo& drain) {
    ++stats_.drains;
    AppendDrainedBytes(drain);
    if (frameTruncated_ && !frameTruncatedLogged_) {
        frameTruncatedLogged_ = true;
        WriteReportLine("# frame " + std::to_string(frameIndex_) +
                        " reached the raw size cap; the rest of it is not recorded");
    }
    if (drain.hadSwap) FinishFrame(true);
}

std::string StreamDump::FrameHistogram() const {
    std::string text = "opcodes in this frame:\n";
    for (uint32_t opcode = 0; opcode < 128; ++opcode) {
        if (!frameCounts_[opcode]) continue;
        text += "  " + Hex(opcode, 2) + " " + pm4::OpcodeName(opcode) + " = " +
                std::to_string(frameCounts_[opcode]) + "\n";
    }
    return text;
}

std::string StreamDump::Summary() const {
    if (!report_.is_open()) return "command-stream dump: off";
    return "command-stream dump: " + directory_.string() + ", drains=" +
           std::to_string(stats_.drains) + " packets=" + std::to_string(stats_.packets) +
           " swaps=" + std::to_string(stats_.swaps) +
           " frames=" + std::to_string(stats_.framesWritten) +
           " bytes=" + std::to_string(stats_.bytesWritten);
}

}  // namespace sonic::rex_host::gpu
