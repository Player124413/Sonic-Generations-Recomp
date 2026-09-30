#include "sdk_guest_memory.h"

#include <algorithm>
#include <cstring>

namespace sonic::rex_host::gpu {
namespace {
// Addresses the command processor deals with are guest physical: the top bits
// are address space flags, exactly as the guest's own CpuToGpu strips them.
constexpr uint32_t kPhysicalMask = 0x1FFFFFFF;
constexpr uint32_t kPhysicalSize = kPhysicalMask + 1;
}  // namespace

bool SdkGuestMemory::Read(uint32_t physicalAddress, std::span<uint8_t> destination) {
    if (!memory_ || destination.empty()) return false;
    const uint32_t address = physicalAddress & kPhysicalMask;
    if (address >= kPhysicalSize || destination.size() > kPhysicalSize - address) return false;
    const uint8_t* source = memory_->TranslatePhysical<const uint8_t*>(address);
    if (!source) return false;
    std::memcpy(destination.data(), source, destination.size());
    return true;
}

bool SdkGuestMemory::Write32(uint32_t physicalAddress, uint32_t value) {
    if (!memory_) return false;
    const uint32_t address = physicalAddress & kPhysicalMask;
    if (address >= kPhysicalSize || sizeof(value) > kPhysicalSize - address) return false;
    uint8_t* destination = memory_->TranslatePhysical<uint8_t*>(address);
    if (!destination) return false;
    destination[0] = uint8_t(value >> 24);
    destination[1] = uint8_t(value >> 16);
    destination[2] = uint8_t(value >> 8);
    destination[3] = uint8_t(value);
    return true;
}

}  // namespace sonic::rex_host::gpu
