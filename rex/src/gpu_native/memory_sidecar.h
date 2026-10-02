#pragma once
// Guest-memory sidecar for a recorded command stream.
//
// Why this exists: the raw frames a recording writes are only the ring buffer.
// The packets in them point at guest memory -- shader microcode (IM_LOAD),
// constant blocks (LOAD_ALU_CONSTANT), indirect buffers -- and a replay that
// cannot read those regions is not a replay: it decodes headers and then reports
// the interesting packets as unsupported. The capture collects exactly the
// regions a stream referenced, once each, under a size cap, and writes them next
// to the frames in a documented format.
//
// Format of memory.bin (host byte order, little-endian, not guest memory):
//   char     magic[8]   "SONICMEM"
//   uint32   version    1
//   uint32   records
//   records: uint32 address, uint32 length, then `length` guest bytes
//
// A recorder that finds nothing to capture writes no file, and a replay that
// finds no file still decodes the stream (and says which reads it lacked).
#include <cstdint>
#include <filesystem>
#include <functional>
#include <span>
#include <string>
#include <vector>

#include "memory_image.h"

namespace sonic::rex_host::gpu {

/// One captured guest-memory region, in guest byte order.
struct MemoryRegion {
    uint32_t address = 0;
    std::vector<uint8_t> bytes;
};

/// Accumulates the guest-memory regions a stream referenced, bounded in total
/// size so a hostile or broken stream cannot make the recorder eat all memory.
class MemoryCapture {
public:
    /// `maxBytes` bounds the total size of everything captured; the recorder
    /// passes its configured limit.
    explicit MemoryCapture(size_t maxBytes = 32u << 20) : maxBytes_(maxBytes) {}

    /// Reads a region through `read` (guest byte order) and keeps it. Regions
    /// already fully captured are skipped; a region that would exceed the cap is
    /// counted in `skipped()` instead of being truncated silently.
    bool Capture(uint32_t address, size_t bytes,
                 const std::function<bool(uint32_t, std::span<uint8_t>)>& read);
    bool Contains(uint32_t address, size_t bytes) const noexcept;

    void Clear();
    size_t bytes() const noexcept { return bytes_; }
    /// How many regions were kept.
    size_t regionCount() const noexcept { return regions_.size(); }
    uint64_t skipped() const noexcept { return skipped_; }
    uint64_t failed() const noexcept { return failed_; }
    size_t maxBytes() const noexcept { return maxBytes_; }
    const std::vector<MemoryRegion>& regions() const noexcept { return regions_; }

    /// Writes the sidecar. A capture with no regions writes nothing and returns
    /// true: "there was nothing to capture" is not a failure.
    bool Write(const std::filesystem::path& path, std::string& error) const;
    /// Reads a sidecar into the image. Returns false only for a damaged or
    /// unreadable file; a missing file is reported by the caller. `regionsOut`
    /// receives the record count, which is what a report quotes.
    static bool Load(const std::filesystem::path& path, MemoryImage& memory, std::string& error,
                     uint32_t* regionsOut = nullptr);

private:
    std::vector<MemoryRegion> regions_;
    size_t bytes_ = 0;
    size_t maxBytes_ = 32u << 20;
    uint64_t skipped_ = 0;
    uint64_t failed_ = 0;
};

}  // namespace sonic::rex_host::gpu
