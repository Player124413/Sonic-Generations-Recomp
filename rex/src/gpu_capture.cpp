#include "gpu_capture.h"
#include <algorithm>
#include <ostream>
#include <stdexcept>

namespace sonic::rex_host {
bool CaptureHostOffset(uint32_t address, size_t size, uint64_t& offset) noexcept {
    const uint64_t end = uint64_t(address) + size;
    if (address < 4096 || size > (uint64_t{1} << 32) - address ||
        (address < 0x80000000u && end > 0x7F000000u) ||
        (address < 0xE0000000u && end > 0xE0000000u)) return false;
    // Exact convention of the pinned generated Windows REX_RAW_ADDR macro.
    offset = uint64_t(address) + (address >= 0xE0000000u ? 0x1000u : 0u);
    return true;
}
namespace {
void Put32(std::ostream& out, uint32_t value) {
    const std::array<char, 4> bytes{char(value), char(value >> 8), char(value >> 16), char(value >> 24)};
    out.write(bytes.data(), bytes.size());
}
void Put64(std::ostream& out, uint64_t value) {
    Put32(out, uint32_t(value)); Put32(out, uint32_t(value >> 32));
}
bool NeedsState(GpuEntry entry) {
    return entry == GpuEntry::DrawVertices || entry == GpuEntry::DrawIndexedVertices ||
           entry == GpuEntry::Clear || entry == GpuEntry::Resolve || entry == GpuEntry::SwapHelper;
}
}
GpuCaptureWriter::GpuCaptureWriter(std::ostream& output, uint32_t limit)
    : output_(output), limit_(std::min(limit, MaxRecords)) {
    output_.write("SGRXGPU1", 8);
    Put32(output_, 1); Put32(output_, DeviceSnapshotBytes);
    if (!output_) throw std::runtime_error("GPU capture header write failed");
}
bool GpuCaptureWriter::Record(GpuEntry entry, const CaptureArguments& args, const CaptureReader& reader) {
    if (count_ >= limit_) return false;
    if (entry >= GpuEntry::Count) throw std::invalid_argument("Invalid GPU capture entry");
    std::array<uint8_t, DeviceSnapshotBytes> state{};
    const bool wanted = NeedsState(entry);
    const bool valid = wanted && reader && reader(uint32_t(args[0]), state);
    // Record tag, payload bytes, sequence, entry, status (0=no state, 1=valid,
    // 2=unreadable). Failed reads never expose partial guest bytes.
    Put32(output_, 0x544E5645); // EVNT
    Put32(output_, 12 + 9 * 8 + (valid ? DeviceSnapshotBytes : 0));
    Put32(output_, count_); Put32(output_, uint32_t(entry));
    Put32(output_, wanted ? (valid ? 1 : 2) : 0);
    for (auto arg : args) Put64(output_, arg);
    if (valid) output_.write(reinterpret_cast<const char*>(state.data()), state.size());
    if (!output_) throw std::runtime_error("GPU capture record write failed");
    ++count_;
    if (entry == GpuEntry::SwapHelper || count_ == limit_) {
        output_.flush();
        if (!output_) throw std::runtime_error("GPU capture flush failed");
    }
    return true;
}
}
