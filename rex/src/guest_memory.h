#pragma once
#include "gpu_capture.h"
#ifndef WIN32_LEAN_AND_MEAN
#define WIN32_LEAN_AND_MEAN
#endif
#ifndef NOMINMAX
#define NOMINMAX
#endif
#include <windows.h>
namespace sonic::rex_host {
inline bool ReadGuestMemory(const void* base, uint32_t address, std::span<uint8_t> destination) noexcept {
    uint64_t offset;
    if (!base || !CaptureHostOffset(address, destination.size(), offset)) return false;
    SIZE_T copied = 0;
    return ReadProcessMemory(GetCurrentProcess(), static_cast<const uint8_t*>(base) + offset,
        destination.data(), destination.size(), &copied) && copied == destination.size();
}

/// Reads as much as the guest has actually committed, in small chunks, and
/// reports how much that was. A guest buffer is often a short reservation inside
/// a mostly unmapped region: one large ReadProcessMemory fails outright at the
/// first uncommitted page, which is how a live probe reported "nothing there"
/// while the data it wanted sat in the first dword. A short read is a fact about
/// the guest mapping, not an error here.
inline size_t ReadGuestMemoryChunked(const void* base, uint32_t address,
                                     std::span<uint8_t> destination,
                                     size_t chunkBytes = 256) noexcept {
    size_t read = 0;
    while (read < destination.size()) {
        const size_t chunk = std::min(chunkBytes, destination.size() - read);
        if (!ReadGuestMemory(base, address + uint32_t(read), destination.subspan(read, chunk))) break;
        read += chunk;
    }
    return read;
}
}
