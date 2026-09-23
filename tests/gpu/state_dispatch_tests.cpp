#include <gpu/state_dispatch.h>
#include <cpu/ppc_context.h>
#include <array>
#include <cstdio>
#include <cstdlib>
#include <cstring>

#define CHECK(x) do { if (!(x)) { std::fprintf(stderr, "FAIL %d: %s\n", __LINE__, #x); std::abort(); } } while(false)
#define SONIC_STATE(name, symbol, offset, mask, shift, low, high, writesR4) PPC_FUNC_IMPL(__imp__##symbol);
#include <gpu/state_dispatch.inc>
#undef SONIC_STATE
#define SONIC_SAMPLER(name, symbol, mask, shift) PPC_FUNC_IMPL(__imp__##symbol);
#include <gpu/sampler_dispatch.inc>
#undef SONIC_SAMPLER

int main()
{
    struct Entry { PPCFunc* replacement; PPCFunc* original; };
    const Entry entries[] = {
#define SONIC_STATE(name, symbol, offset, mask, shift, low, high, writesR4) {symbol, __imp__##symbol},
#include <gpu/state_dispatch.inc>
#undef SONIC_STATE
    };
    const Entry samplers[] = {
#define SONIC_SAMPLER(name, symbol, mask, shift) {symbol, __imp__##symbol},
#include <gpu/sampler_dispatch.inc>
#undef SONIC_SAMPLER
    };
    uint64_t seed = 0x123456789ABCDEF0ull;
    const auto random = [&]() { seed ^= seed << 13; seed ^= seed >> 7; seed ^= seed << 17; return seed; };
    alignas(64) std::array<uint8_t, 0x5000> actualMemory{}, expectedMemory{};
    size_t cases = 0;
    const auto compare = [&](const Entry& entry, uint64_t r4, uint64_t r5) {
        // Randomize dirty words independently of values left by previous calls.
        for (size_t i = 16; i < 32; ++i) actualMemory[0x1000 + i] = uint8_t(random());
        expectedMemory = actualMemory;
        PPCContext actual{};
        actual.r3.u64 = 0xABCD000000001000ull;
        actual.r4.u64 = r4; actual.r5.u64 = r5;
        actual.r8.u64 = random(); actual.r9.u64 = random(); actual.r10.u64 = random();
        actual.r11.u64 = random(); actual.lr = random();
        PPCContext expected;
        std::memcpy(&expected, &actual, sizeof(actual));
        entry.original(expected, expectedMemory.data());
        entry.replacement(actual, actualMemory.data());
        CHECK(std::memcmp(&actual, &expected, sizeof(actual)) == 0);
        CHECK(actualMemory == expectedMemory);
        ++cases;
    };
    for (bool enabled : {false, true})
    {
        GuestGpu::EnableStateReplacement(enabled);
        for (const auto& entry : entries)
        {
            for (auto& byte : actualMemory) byte = uint8_t(random());
            for (int iteration = 0; iteration < 1000; ++iteration) compare(entry, random(), random());
        }
        for (const auto& entry : samplers)
        {
            for (auto& byte : actualMemory) byte = uint8_t(random());
            // 26 legal slots and six out-of-profile slots exercise fallback.
            for (uint32_t slot = 0; slot < 32; ++slot)
                for (int iteration = 0; iteration < 100; ++iteration) compare(entry, slot, random());
        }
    }
    GuestGpu::EnableStateReplacement(false);
    std::printf("%zu render + %zu sampler replacements match original PPC in %zu differential cases\n",
                std::size(entries), std::size(samplers), cases);
}
