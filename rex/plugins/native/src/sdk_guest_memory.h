#pragma once
// Guest memory as the ReXGlue runtime sees it.
//
// The command processor never touches SDK types: it reads and writes guest
// physical memory through this adapter, which keeps the device testable off
// Windows and keeps the SDK dependency to one file.
#include <rex/system/xmemory.h>

#include <cstdint>
#include <span>

#include "gpu_native/command_processor.h"

namespace sonic::rex_host::gpu {

/// Translates guest physical addresses through the runtime's memory map. Reads
/// are copied out (never referenced) so the command processor cannot hold a
/// pointer into guest memory across a guest thread switch.
class SdkGuestMemory final : public GuestMemory {
public:
    explicit SdkGuestMemory(rex::memory::Memory* memory) noexcept : memory_(memory) {}
    void SetMemory(rex::memory::Memory* memory) noexcept { memory_ = memory; }

    bool Read(uint32_t physicalAddress, std::span<uint8_t> destination) override;
    /// Guest byte order: the guest reads these words back big-endian.
    bool Write32(uint32_t physicalAddress, uint32_t value) override;

private:
    rex::memory::Memory* memory_ = nullptr;
};

}  // namespace sonic::rex_host::gpu
