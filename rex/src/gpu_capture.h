#pragma once
#include <array>
#include <cstdint>
#include <filesystem>
#include <functional>
#include <iosfwd>
#include <span>

namespace sonic::rex_host {
enum class GpuEntry : uint32_t {
#define SONIC_GPU_ENTRY(name, symbol) name,
#include "../../SonicGenerationsRecomp/gpu/guest_entries.inc"
#undef SONIC_GPU_ENTRY
    Count
};
constexpr size_t DeviceSnapshotBytes = 13052; // Sonic, NOT Rayman's 0x3700 layout
using CaptureReader = std::function<bool(uint32_t, std::span<uint8_t>)>;
using CaptureArguments = std::array<uint64_t, 9>; // r3..r10, raw f1 bits
// Returns false for null-page, wraparound, MMIO and an alias-boundary crossing.
bool CaptureHostOffset(uint32_t address, size_t size, uint64_t& offset) noexcept;

// Explicit little-endian metadata, raw big-endian guest state. Never serialize
// host structs/pointers/padding. Bounded even if the game never reaches a swap.
class GpuCaptureWriter {
public:
    static constexpr uint32_t MaxRecords = 4096;
    explicit GpuCaptureWriter(std::ostream& output, uint32_t limit = MaxRecords);
    bool Record(GpuEntry entry, const CaptureArguments& args, const CaptureReader& reader);
    uint32_t Count() const noexcept { return count_; }
private:
    std::ostream& output_;
    uint32_t limit_, count_ = 0;
};
void InitializeGpuCapture(const std::filesystem::path& cacheDirectory);
void CaptureGpuEntry(GpuEntry entry, const CaptureArguments& args, uint8_t* base) noexcept;
}
