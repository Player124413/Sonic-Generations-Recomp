#include "memory_image.h"

#include <algorithm>
#include <cstring>

namespace sonic::rex_host::gpu {
namespace {

constexpr uint32_t PageOf(uint32_t address) noexcept { return address >> MemoryImage::kPageShift; }
constexpr uint32_t OffsetInPage(uint32_t address) noexcept {
    return address & (MemoryImage::kPageSize - 1);
}

}  // namespace

bool MemoryImage::Capture(uint32_t address, std::span<const uint8_t> bytes) {
    return WriteBytes(address, bytes);
}

bool MemoryImage::WriteBytes(uint32_t address, std::span<const uint8_t> bytes) {
    const uint32_t physical = address & kAddressMask;
    if (bytes.empty()) return true;
    if (physical >= kPhysicalSize || bytes.size() > kPhysicalSize - physical) return false;
    AddRange(physical, uint32_t(bytes.size()));
    size_t written = 0;
    while (written < bytes.size()) {
        const uint32_t at = physical + uint32_t(written);
        const uint32_t page = PageOf(at);
        const uint32_t offset = OffsetInPage(at);
        const size_t chunk = std::min<size_t>(bytes.size() - written, kPageSize - offset);
        auto [it, inserted] = pages_.try_emplace(page, std::vector<uint8_t>(kPageSize, 0));
        if (inserted) capturedBytes_ += kPageSize;
        std::memcpy(it->second.data() + offset, bytes.data() + written, chunk);
        written += chunk;
    }
    return true;
}

void MemoryImage::AddRange(uint32_t address, uint32_t length) {
    if (!length) return;
    covered_.emplace_back(address, length);
    std::sort(covered_.begin(), covered_.end());
    std::vector<std::pair<uint32_t, uint32_t>> merged;
    merged.reserve(covered_.size());
    for (const auto& range : covered_) {
        if (!merged.empty() && uint64_t(merged.back().first) + merged.back().second >=
                                   uint64_t(range.first)) {
            const uint64_t end = std::max<uint64_t>(uint64_t(merged.back().first) +
                                                        merged.back().second,
                                                    uint64_t(range.first) + range.second);
            merged.back().second = uint32_t(end - merged.back().first);
            continue;
        }
        merged.push_back(range);
    }
    covered_.swap(merged);
}

uint32_t MemoryImage::CoveredLength(uint32_t address, uint32_t limit) const noexcept {
    for (const auto& range : covered_) {
        if (address < range.first) continue;
        const uint64_t offset = uint64_t(address) - range.first;
        if (offset >= range.second) continue;
        return uint32_t(std::min<uint64_t>(limit, range.second - offset));
    }
    return 0;
}

bool MemoryImage::Read(uint32_t physicalAddress, std::span<uint8_t> destination) {
    ++reads_;
    if (destination.empty()) return true;
    const uint32_t physical = physicalAddress & kAddressMask;
    if (physical >= kPhysicalSize || destination.size() > kPhysicalSize - physical) {
        ++readFailures_;
        return false;
    }
    // Every byte must be covered before a single one is copied: half a shader is
    // not a shader, and a partially filled buffer is worse than a refusal.
    if (CoveredLength(physical, uint32_t(destination.size())) != destination.size()) {
        ++readFailures_;
        return false;
    }
    size_t copied = 0;
    while (copied < destination.size()) {
        const uint32_t at = physical + uint32_t(copied);
        const auto it = pages_.find(PageOf(at));
        if (it == pages_.end()) {  // cannot happen when the range is covered
            ++readFailures_;
            return false;
        }
        const uint32_t offset = OffsetInPage(at);
        const size_t chunk = std::min<size_t>(destination.size() - copied, kPageSize - offset);
        std::memcpy(destination.data() + copied, it->second.data() + offset, chunk);
        copied += chunk;
    }
    return true;
}

bool MemoryImage::Write32(uint32_t physicalAddress, uint32_t value) {
    ++writes_;
    // Guest byte order: the guest reads these words back big-endian.
    const uint8_t bytes[4] = {uint8_t(value >> 24), uint8_t(value >> 16), uint8_t(value >> 8),
                              uint8_t(value)};
    return WriteBytes(physicalAddress, std::span<const uint8_t>(bytes, 4));
}

uint32_t MemoryImage::ReadableBytes(uint32_t address, uint32_t limit) const noexcept {
    const uint32_t physical = address & kAddressMask;
    if (physical >= kPhysicalSize) return 0;
    return CoveredLength(physical, std::min<uint32_t>(limit, kPhysicalSize - physical));
}

}  // namespace sonic::rex_host::gpu
