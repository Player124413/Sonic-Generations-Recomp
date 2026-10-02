#pragma once
// Guest memory image for offline replay.
//
// Why this exists: a recorded frame is only the ring buffer. Everything the
// stream points at -- shader microcode (IM_LOAD), constant blocks
// (LOAD_ALU_CONSTANT) and indirect buffers -- lives elsewhere in guest memory,
// and reading it is what turns a recorded byte stream into something the device
// can execute. This image is that "elsewhere": sparse, bounded, and honest about
// what it does not have, because a read of memory nobody captured must fail
// rather than quietly return zeros (zeroed constants would draw garbage at the
// origin instead of showing up as a missing capture).
//
// It is also the only guest memory implementation outside the SDK adapter, so
// the replay runs without ReXGlue, on any host, in any test.
#include <cstdint>
#include <map>
#include <utility>
#include <span>
#include <vector>

#include "command_processor.h"

namespace sonic::rex_host::gpu {

/// Sparse guest physical memory in guest byte order: dwords are stored
/// big-endian, exactly as the guest and the GPU see them.
class MemoryImage final : public GuestMemory {
public:
    static constexpr uint32_t kPageShift = 12;
    static constexpr uint32_t kPageSize = uint32_t(1) << kPageShift;
    /// Guest physical addresses are 29 bits; the top bits are address space
    /// flags that the guest's own CpuToGpu strips.
    static constexpr uint32_t kAddressMask = 0x1FFFFFFFu;
    static constexpr uint32_t kPhysicalSize = kAddressMask + 1;

    /// Copies `bytes` into the image at `address` (guest byte order). Used to
    /// preload the ring and the sidecar regions a recording captured.
    bool Capture(uint32_t address, std::span<const uint8_t> bytes);

    /// True only when every byte of the requested range was captured or written.
    /// A partial read is a failure: half a shader is not a shader. A page exists
    /// as soon as any byte of it was captured, so the captured ranges are tracked
    /// separately -- returning the zeros of a touched page would be exactly the
    /// silent-zero behaviour this class exists to avoid.
    bool Read(uint32_t physicalAddress, std::span<uint8_t> destination) override;
    bool Write32(uint32_t physicalAddress, uint32_t value) override;

    /// Number of dwords readable at `address` before the first missing byte, so a
    /// report can say how much of a stream was executable.
    uint32_t ReadableBytes(uint32_t address, uint32_t limit) const noexcept;

    size_t capturedBytes() const noexcept { return capturedBytes_; }
    size_t pages() const noexcept { return pages_.size(); }
    uint64_t reads() const noexcept { return reads_; }
    uint64_t readFailures() const noexcept { return readFailures_; }
    uint64_t writes() const noexcept { return writes_; }

private:
    bool WriteBytes(uint32_t address, std::span<const uint8_t> bytes);
    /// Length of the covered run starting at `address`, at most `limit` bytes.
    uint32_t CoveredLength(uint32_t address, uint32_t limit) const noexcept;
    /// Adds [address, address + length) to the covered ranges, merging neighbours.
    void AddRange(uint32_t address, uint32_t length);

    /// Page index -> 4 KiB of guest bytes. A page exists only if something
    /// captured or wrote it.
    std::map<uint32_t, std::vector<uint8_t>> pages_;
    /// [address, length) pairs, sorted and merged. Page granularity is storage;
    /// this is what "readable" means.
    std::vector<std::pair<uint32_t, uint32_t>> covered_;
    size_t capturedBytes_ = 0;
    uint64_t reads_ = 0;
    uint64_t readFailures_ = 0;
    uint64_t writes_ = 0;
};

}  // namespace sonic::rex_host::gpu
