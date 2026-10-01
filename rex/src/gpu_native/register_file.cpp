#include "register_file.h"

#include <algorithm>

namespace sonic::rex_host::gpu {

RegisterFile::VideoMode RegisterFile::ReadVideoMode() const noexcept {
    VideoMode mode;
    mode.displayWidth = displayWidth_.load(std::memory_order_relaxed);
    mode.displayHeight = displayHeight_.load(std::memory_order_relaxed);
    mode.refreshRateHz = refreshRateHz_.load(std::memory_order_relaxed);
    return mode;
}

uint32_t RegisterFile::Read(uint32_t index) const {
    switch (index) {
    case kRbEdramTiming:
        return kEdramTimingValue;
    case kRbBcControl:
        return kBcControlValue;
    case kD1ModeVCounter:
        return std::min(displayHeight_.load(std::memory_order_relaxed), 0x0FFFu);
    case kInterruptStatus:
        return 1u;  // vblank is always pending; D3D's present path waits on it
    case kAvivoD1ModeViewportSize: {
        const VideoMode mode = ReadVideoMode();
        return (std::min(mode.displayWidth, 0x0FFFu) << 16) |
               std::min(mode.displayHeight, 0x0FFFu);
    }
    default:
        break;
    }
    if (index < kRegisterCount) return values_[index].load(std::memory_order_relaxed);
    std::lock_guard<std::mutex> lock(extendedMutex_);
    const auto it = extended_.find(index);
    return it != extended_.end() ? it->second : 0u;
}

void RegisterFile::Write(uint32_t index, uint32_t value, WriteOrigin origin) {
    if (index >= kRegisterCount) {
        // Preserve instead of dropping: packet logic may read these back.
        {
            std::lock_guard<std::mutex> lock(extendedMutex_);
            extended_.insert_or_assign(index, value);
        }
        extendedWrites_.fetch_add(1, std::memory_order_relaxed);
        return;
    }
    values_[index].store(value, std::memory_order_relaxed);
    if (index == kCpRbWptr && origin == WriteOrigin::kMmio && writePointerSink_) {
        writePointerSink_->OnWritePointer(value);
    }
}

uint32_t RegisterFile::Raw(uint32_t index) const {
    if (index < kRegisterCount) return values_[index].load(std::memory_order_relaxed);
    std::lock_guard<std::mutex> lock(extendedMutex_);
    const auto it = extended_.find(index);
    return it != extended_.end() ? it->second : 0u;
}

uint64_t RegisterFile::ExtendedWrites() const noexcept {
    return extendedWrites_.load(std::memory_order_relaxed);
}

} // namespace sonic::rex_host::gpu
