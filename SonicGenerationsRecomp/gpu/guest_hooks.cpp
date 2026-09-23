#include <gpu/guest_hooks.h>
#include <cpu/ppc_context.h>
#include <atomic>

namespace
{
    struct Counters
    {
        std::atomic<uint64_t> entered{0};
        std::atomic<uint64_t> returned{0};
    };
    std::array<Counters, static_cast<size_t>(GuestGpu::Entry::Count)> counters{};
    std::atomic<uint64_t> failedCreates{0};
    std::atomic<bool> enabled{false};
}

void GuestGpu::EnableObservation(bool enable) noexcept
{
    enabled.store(enable, std::memory_order_relaxed);
}

GuestGpu::Snapshot GuestGpu::GetSnapshot() noexcept
{
    Snapshot result;
    for (size_t i = 0; i < counters.size(); ++i)
    {
        result.entries[i].entered = counters[i].entered.load(std::memory_order_relaxed);
        result.entries[i].returned = counters[i].returned.load(std::memory_order_relaxed);
    }
    result.failedCreates = failedCreates.load(std::memory_order_relaxed);
    return result;
}

// Override the weak public alias, never the original __imp__ body. Forward the
// entire context unchanged; do not marshal a guessed ABI or read guest pointers.
#define SONIC_GPU_ENTRY(name, symbol) \
    PPC_FUNC_IMPL(__imp__##symbol); \
    PPC_FUNC(symbol) \
    { \
        const bool observe = enabled.load(std::memory_order_relaxed); \
        auto& counter = counters[static_cast<size_t>(GuestGpu::Entry::name)]; \
        if (observe) counter.entered.fetch_add(1, std::memory_order_relaxed); \
        __imp__##symbol(ctx, base); \
        if (observe) \
        { \
            counter.returned.fetch_add(1, std::memory_order_relaxed); \
            if (GuestGpu::Entry::name == GuestGpu::Entry::CreateDevice && \
                (ctx.r3.u32 & 0x80000000u) != 0) \
                failedCreates.fetch_add(1, std::memory_order_relaxed); \
        } \
    }
#include "guest_entries.inc"
#undef SONIC_GPU_ENTRY
