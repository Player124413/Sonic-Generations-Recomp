#include <gpu/guest_hooks.h>
#include "mock_originals.h"
#include <cstdlib>
#include <cstdio>
#include <cstring>
#include <thread>
#include <vector>

#define CHECK(condition) do { if (!(condition)) { \
    std::fprintf(stderr, "FAIL line %d: %s\n", __LINE__, #condition); std::abort(); \
} } while (false)

static void CallAndCheck(size_t entry, uint32_t status)
{
    PPCContext actual{};
    actual.r3.u64 = 0x1234567887654321ull;
    actual.r4.u64 = status;
    actual.r9.u64 = 0xabcdef;
    actual.r1.u64 = 0x1000;
    actual.lr = 0xdeadbeef;
    actual.f1.f64 = 1.0;
    PPCContext expected;
    std::memcpy(&expected, &actual, sizeof(actual));
    uint8_t memory = 0xAB, expectedMemory = memory;
    MutateLikeOriginal(expected, &expectedMemory);
    GetMappedEntry(entry)(actual, &memory);
    CHECK(std::memcmp(&actual, &expected, sizeof(actual)) == 0);
    CHECK(memory == expectedMemory);
}

int main()
{
    constexpr size_t count = static_cast<size_t>(GuestGpu::Entry::Count);
    GuestGpu::EnableObservation(false);
    for (size_t i = 0; i < count; ++i) CallAndCheck(i, 0);
    CHECK(originalCalls == count);
    for (const auto& e : GuestGpu::GetSnapshot().entries)
        CHECK(e.entered == 0 && e.returned == 0);
    GuestGpu::EnableObservation(true);
    for (size_t i = 0; i < count; ++i) CallAndCheck(i, 0);
    for (size_t i = 0; i < count; ++i) CallAndCheck(i, 0x8007000Eu);
    CHECK(originalCalls == count * 3);
    auto stats = GuestGpu::GetSnapshot();
    for (const auto& e : stats.entries) CHECK(e.entered == 2 && e.returned == 2);
    CHECK(stats.failedCreates == 1);
    std::vector<std::thread> workers;
    for (int t = 0; t < 4; ++t) workers.emplace_back([] {
        for (int n = 0; n < 1000; ++n)
            CallAndCheck(static_cast<size_t>(GuestGpu::Entry::DrawVertices), 0);
    });
    for (auto& thread : workers) thread.join();
    const auto draw = GuestGpu::GetSnapshot().entries[static_cast<size_t>(GuestGpu::Entry::DrawVertices)];
    CHECK(draw.entered == 4002 && draw.returned == 4002);
    CHECK(originalCalls == count * 3 + 4000);
    GuestGpu::EnableObservation(false);
    CallAndCheck(static_cast<size_t>(GuestGpu::Entry::CreateDevice), 0x8007000Eu);
    CHECK(GuestGpu::GetSnapshot().failedCreates == 1);
    CHECK(originalCalls == count * 3 + 4001);
    std::puts("GPU pass-through, weak-alias link and concurrent counter tests passed");
}
