#pragma once
// Register indices the guest D3D driver and the GPU agree on: the GPU register
// block is a 64 KiB MMIO window at 0x7FC80000, and the index is
// (address & 0xFFFF) / 4. These are hardware facts from the Xenos register map,
// not SDK code.
#include <cstdint>

namespace sonic::rex_host::gpu {

inline constexpr uint32_t kCpRbWptr = 0x01C5;  // CP_RB_WPTR, kicks the command processor
inline constexpr uint32_t kRbEdramTiming = 0x0F00;
inline constexpr uint32_t kRbBcControl = 0x0F01;
inline constexpr uint32_t kAvivoD1GrphPrimarySurfaceAddress = 0x1844;
inline constexpr uint32_t kD1ModeVCounter = 0x194C;
inline constexpr uint32_t kInterruptStatus = 0x1951;  // bit 0 = vblank
inline constexpr uint32_t kAvivoD1ModeViewportSize = 0x1961;

/// Values the guest reads back and that have to look like a live display, or
/// D3D's present path waits forever.
inline constexpr uint32_t kEdramTimingValue = 0x08100748u;
inline constexpr uint32_t kBcControlValue = 0x0000200Eu;

} // namespace sonic::rex_host::gpu
