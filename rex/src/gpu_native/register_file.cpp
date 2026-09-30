#include "register_file.h"

#include <algorithm>

namespace sonic::rex_host::gpu {

uint32_t RegisterFile::Read(uint32_t index) const noexcept {
    switch (index) {
    case kRbEdramTiming:
        return kEdramTimingValue;
    case kRbBcControl:
        return kBcControlValue;
    case kD1ModeVCounter:
        return std::min(videoMode_.displayHeight, 0x0FFFu);
    case kInterruptStatus:
        return 1u;  // vblank is always pending; D3D's present path waits on it
    case kAvivoD1ModeViewportSize:
        return (std::min(videoMode_.displayWidth, 0x0FFFu) << 16) |
               std::min(videoMode_.displayHeight, 0x0FFFu);
    default:
        break;
    }
    if (index < kRegisterCount) return values_[index];
    const auto it = extended_.find(index);
    return it != extended_.end() ? it->second : 0u;
}

void RegisterFile::Write(uint32_t index, uint32_t value, WriteOrigin origin) noexcept {
    if (index >= kRegisterCount) {
        // Preserve instead of dropping: packet logic may read these back.
        extended_.insert_or_assign(index, value);
        ++extendedWrites_;
        return;
    }
    values_[index] = value;
    if (index == kCpRbWptr && origin == WriteOrigin::kMmio && writePointerSink_) {
        writePointerSink_->OnWritePointer(value);
    }
}

uint32_t RegisterFile::Raw(uint32_t index) const noexcept {
    if (index < kRegisterCount) return values_[index];
    const auto it = extended_.find(index);
    return it != extended_.end() ? it->second : 0u;
}

} // namespace sonic::rex_host::gpu
