// Models generated weak aliases and strong original bodies, not a real GPU.
#include "mock_originals.h"
std::atomic<unsigned> originalCalls{0};
void MutateLikeOriginal(PPCContext& ctx, uint8_t* base)
{
    ctx.r3.u64 = ctx.r4.u64;
    ctx.r1.u64 += 16;
    ctx.r9.u64 ^= 0x1122334455667788ull;
    ctx.lr ^= 0x100;
    ctx.ctr.u64 += 1;
    ctx.f1.f64 = 123.5;
    ctx.f31.f64 = -12.25;
    base[0] ^= 0x5A;
}
#define SONIC_GPU_ENTRY(name, symbol) \
    __attribute__((alias("__imp__" #symbol))) PPC_WEAK_FUNC(symbol); \
    PPC_FUNC_IMPL(__imp__##symbol) \
    { \
        ++originalCalls; \
        MutateLikeOriginal(ctx, base); \
    }
#include <gpu/guest_entries.inc>
#undef SONIC_GPU_ENTRY

PPCFunc* GetMappedEntry(size_t index)
{
    static PPCFunc* entries[] = {
#define SONIC_GPU_ENTRY(name, symbol) symbol,
#include <gpu/guest_entries.inc>
#undef SONIC_GPU_ENTRY
    };
    return entries[index];
}
