#include "memory_sidecar.h"

#include <algorithm>
#include <cstring>
#include <fstream>

namespace sonic::rex_host::gpu {
namespace {

constexpr char kMagic[8] = {'S', 'O', 'N', 'I', 'C', 'M', 'E', 'M'};
constexpr uint32_t kVersion = 1;
/// One record is a header plus bytes; a record claiming a huge length in a
/// damaged file must not make the loader allocate it.
constexpr uint32_t kMaxRecordBytes = 64u << 20;

void WriteU32(std::ostream& out, uint32_t value) {
    const uint8_t bytes[4] = {uint8_t(value), uint8_t(value >> 8), uint8_t(value >> 16),
                              uint8_t(value >> 24)};
    out.write(reinterpret_cast<const char*>(bytes), 4);
}

bool ReadU32(std::istream& in, uint32_t& value) {
    uint8_t bytes[4]{};
    if (!in.read(reinterpret_cast<char*>(bytes), 4)) return false;
    value = uint32_t(bytes[0]) | (uint32_t(bytes[1]) << 8) | (uint32_t(bytes[2]) << 16) |
            (uint32_t(bytes[3]) << 24);
    return true;
}

}  // namespace

bool MemoryCapture::Contains(uint32_t address, size_t bytes) const noexcept {
    for (const MemoryRegion& region : regions_) {
        if (address < region.address) continue;
        const uint64_t offset = uint64_t(address) - region.address;
        if (offset + bytes <= region.bytes.size()) return true;
    }
    return false;
}

bool MemoryCapture::Capture(uint32_t address, size_t bytes,
                            const std::function<bool(uint32_t, std::span<uint8_t>)>& read) {
    if (bytes == 0) return true;
    if (Contains(address, bytes)) return true;
    if (bytes > maxBytes_ || bytes_ + bytes > maxBytes_) {
        ++skipped_;
        return false;
    }
    MemoryRegion region;
    region.address = address;
    region.bytes.resize(bytes);
    if (!read(address, std::span<uint8_t>(region.bytes.data(), region.bytes.size()))) {
        ++failed_;
        return false;
    }
    bytes_ += bytes;
    regions_.push_back(std::move(region));
    return true;
}

void MemoryCapture::Clear() {
    regions_.clear();
    bytes_ = 0;
}

bool MemoryCapture::Write(const std::filesystem::path& path, std::string& error) const {
    if (regions_.empty()) return true;
    std::ofstream file(path, std::ios::binary | std::ios::trunc);
    if (!file) {
        error = "cannot write " + path.string();
        return false;
    }
    file.write(kMagic, sizeof(kMagic));
    WriteU32(file, kVersion);
    WriteU32(file, uint32_t(regions_.size()));
    for (const MemoryRegion& region : regions_) {
        WriteU32(file, region.address);
        WriteU32(file, uint32_t(region.bytes.size()));
        file.write(reinterpret_cast<const char*>(region.bytes.data()),
                   std::streamsize(region.bytes.size()));
    }
    file.flush();
    if (!file) {
        error = "writing " + path.string() + " failed";
        return false;
    }
    return true;
}

bool MemoryCapture::Load(const std::filesystem::path& path, MemoryImage& memory, std::string& error,
                         uint32_t* regionsOut) {
    std::ifstream file(path, std::ios::binary);
    if (!file) {
        error = "cannot read " + path.string();
        return false;
    }
    char magic[sizeof(kMagic)]{};
    if (!file.read(magic, sizeof(magic)) || std::memcmp(magic, kMagic, sizeof(kMagic)) != 0) {
        error = path.filename().string() + " is not a memory sidecar (bad magic)";
        return false;
    }
    uint32_t version = 0;
    uint32_t records = 0;
    if (!ReadU32(file, version) || !ReadU32(file, records)) {
        error = path.filename().string() + " is truncated";
        return false;
    }
    if (version != kVersion) {
        error = path.filename().string() + " has version " + std::to_string(version) +
                ", this build understands " + std::to_string(kVersion);
        return false;
    }
    std::vector<uint8_t> buffer;
    if (regionsOut) *regionsOut = records;
    for (uint32_t index = 0; index < records; ++index) {
        uint32_t address = 0;
        uint32_t length = 0;
        if (!ReadU32(file, address) || !ReadU32(file, length)) {
            error = path.filename().string() + " ends after " + std::to_string(index) +
                    " of " + std::to_string(records) + " regions";
            return false;
        }
        if (length > kMaxRecordBytes) {
            error = path.filename().string() + " has an implausible region of " +
                    std::to_string(length) + " bytes";
            return false;
        }
        buffer.resize(length);
        if (length && !file.read(reinterpret_cast<char*>(buffer.data()), length)) {
            error = path.filename().string() + " ends inside region " + std::to_string(index);
            return false;
        }
        if (!memory.Capture(address, std::span<const uint8_t>(buffer.data(), buffer.size()))) {
            error = path.filename().string() + " region " + std::to_string(index) +
                    " is outside guest physical memory";
            return false;
        }
    }
    return true;
}

}  // namespace sonic::rex_host::gpu
