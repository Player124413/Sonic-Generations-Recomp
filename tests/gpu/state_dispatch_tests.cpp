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

int main()
{
    struct Entry { PPCFunc* replacement; PPCFunc* original; };
    const Entry entries[] = {
#define SONIC_STATE(name, symbol, offset, mask, shift, low, high, writesR4) {symbol, __imp__##symbol},
#include <gpu/state_dispatch.inc>
#undef SONIC_STATE
    };
    uint64_t seed = 0x123456789ABCDEF0ull;
    const auto random = [&]() { seed ^= seed << 13; seed ^= seed >> 7; seed ^= seed << 17; return seed; };
    alignas(64) std::array<uint8_t, 0x5000> actualMemory{}, expectedMemory{};
    for (bool enabled : {false, true})
    {
        GuestGpu::EnableStateReplacement(enabled);
        for (const auto& entry : entries)
            for (int iteration = 0; iteration < 1000; ++iteration)
            {
                for (auto& byte : actualMemory) byte = uint8_t(random());
                expectedMemory = actualMemory;
                PPCContext actual{};
                actual.r3.u64 = 0xABCD000000001000ull; // upper bits must stay unchanged
                actual.r4.u64 = random(); actual.r11.u64 = random(); actual.lr = random();
                PPCContext expected;
                std::memcpy(&expected, &actual, sizeof(actual));
                entry.original(expected, expectedMemory.data());
                entry.replacement(actual, actualMemory.data());
                CHECK(std::memcmp(&actual, &expected, sizeof(actual)) == 0);
                CHECK(actualMemory == expectedMemory);
            }
    }
    GuestGpu::EnableStateReplacement(false);
    std::puts("Three state replacements match original PPC memory/registers across 6000 randomized cases");
}
