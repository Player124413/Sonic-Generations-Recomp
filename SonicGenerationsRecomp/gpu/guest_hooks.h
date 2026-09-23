#pragma once
#include <array>
#include <cstddef>
#include <cstdint>

namespace GuestGpu
{
    enum class Entry : size_t
    {
#define SONIC_GPU_ENTRY(name, symbol) name,
#include "guest_entries.inc"
#undef SONIC_GPU_ENTRY
        Count
    };
    struct EntryStats
    {
        uint64_t entered = 0;
        uint64_t returned = 0;
    };
    struct Snapshot
    {
        std::array<EntryStats, static_cast<size_t>(Entry::Count)> entries{};
        uint64_t failedCreates = 0;
    };
    // Explicit static-library link anchor. Original PPC bodies always execute.
    void EnableObservation(bool enable) noexcept;
    // Process-lifetime, atomic counters; concurrent snapshots are approximate.
    Snapshot GetSnapshot() noexcept;
}
