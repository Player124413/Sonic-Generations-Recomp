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
}
