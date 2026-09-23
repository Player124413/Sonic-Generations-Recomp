#include <gpu/state_dispatch.h>
#include <cpu/ppc_context.h>
#include <atomic>

namespace
{
    std::atomic<bool> replacementEnabled{false};
    struct StateEntry
    {
        uint32_t offset, mask, shift;
        uint64_t lowDirty, highDirty;
        bool writesR4;
    };
    // Data-driven host dispatch table. These fields have differential tests
    // against the checked-in generated PPC, not just hand-written expectations.
    constexpr StateEntry table[] = {
#define SONIC_STATE(name, symbol, offset, mask, shift, low, high, writesR4) {offset, mask, shift, low, high, writesR4},
#include "state_dispatch.inc"
#undef SONIC_STATE
    };
    enum StateIndex {
#define SONIC_STATE(name, symbol, offset, mask, shift, low, high, writesR4) name,
#include "state_dispatch.inc"
#undef SONIC_STATE
    };
    void Apply(const StateEntry& entry, PPCContext& ctx, uint8_t* base)
    {
        const uint32_t address = ctx.r3.u32 + entry.offset;
        const uint32_t word = (PPC_LOAD_U32(address) & ~entry.mask) |
                              ((ctx.r4.u32 << entry.shift) & entry.mask);
        if (entry.writesR4) ctx.r4.u64 = (ctx.r4.u64 & 0xFFFFFFFF00000000ull) | word;
        PPC_STORE_U32(address, word);
        ctx.r11.u64 = PPC_LOAD_U64(ctx.r3.u32 + 16) | entry.lowDirty;
        PPC_STORE_U64(ctx.r3.u32 + 16, ctx.r11.u64);
        // Match both writes of the original depth-compare leaf, including its
        // dirty flags and volatile register results. Other registers stay intact.
        if (entry.highDirty)
        {
            ctx.r11.u64 |= entry.highDirty;
            PPC_STORE_U64(ctx.r3.u32 + 16, ctx.r11.u64);
        }
    }
}
void GuestGpu::EnableStateReplacement(bool enabled) noexcept
{
    replacementEnabled.store(enabled, std::memory_order_relaxed);
}
#define SONIC_STATE(name, symbol, offset, mask, shift, low, high, writesR4) \
    PPC_FUNC_IMPL(__imp__##symbol); \
    PPC_FUNC(symbol) \
    { \
        if (replacementEnabled.load(std::memory_order_relaxed)) Apply(table[name], ctx, base); \
        else __imp__##symbol(ctx, base); \
    }
#include "state_dispatch.inc"
#undef SONIC_STATE
