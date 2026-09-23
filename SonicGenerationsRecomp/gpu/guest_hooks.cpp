#include <gpu/guest_hooks.h>
#include <gpu/native_commands.h>
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

    void CaptureDraw(GuestGpu::DrawKind kind, const PPCContext& ctx, const uint8_t* base)
    {
        auto& stream = GuestGpu::GetCommandStream();
        if (!stream.IsEnabled()) return;
        const auto memory = base ? std::span<const uint8_t>(base, PPC_MEMORY_SIZE) : std::span<const uint8_t>();
        stream.Capture({memory}, ctx.r3.u32, kind,
                       {ctx.r4.u32, ctx.r5.u32, ctx.r6.u32, ctx.r7.u32});
    }

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
// entire context unchanged. Optional capture reads only the known device prefix;
// indexed capture also owns bounded index bytes. No guessed ABI is marshalled.
#define SONIC_GPU_ENTRY(name, symbol) \
    PPC_FUNC_IMPL(__imp__##symbol); \
    PPC_FUNC(symbol) \
    { \
        const bool observe = enabled.load(std::memory_order_relaxed); \
        if constexpr (GuestGpu::Entry::name == GuestGpu::Entry::DrawVertices || \
                      GuestGpu::Entry::name == GuestGpu::Entry::DrawIndexedVertices) \
            CaptureDraw(GuestGpu::Entry::name == GuestGpu::Entry::DrawVertices \
                    ? GuestGpu::DrawKind::Vertices : GuestGpu::DrawKind::IndexedVertices, ctx, base); \
        if constexpr (GuestGpu::Entry::name == GuestGpu::Entry::Clear) \
        { \
            auto& stream=GuestGpu::GetCommandStream(); \
            if(stream.IsEnabled()) \
                stream.CaptureClear({base ? std::span<const uint8_t>(base,PPC_MEMORY_SIZE) : std::span<const uint8_t>()}, \
                    ctx.r3.u32,ctx.r4.u32,ctx.r5.u32,ctx.r6.u32,float(ctx.f1.f64),ctx.r8.u32); \
        } \
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
