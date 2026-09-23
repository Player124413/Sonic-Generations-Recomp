#include <gpu/state_tables.h>
#include <gpu/state_dispatch.h>
#include <cpu/ppc_context.h>
#include <cstdio>
#include <cstdlib>
#include <cstring>

#define CHECK(x) do { if (!(x)) std::abort(); } while(false)
static unsigned originalCalls = 0;
static bool enabled = false;
// This test checks only initializer forwarding/fail-closed behavior. Real
// table contents and leaf replacements have their own suites.
namespace GuestGpu { void EnableStateReplacement(bool value) noexcept { enabled = value; } }
PPC_FUNC_IMPL(__imp__sub_82DC2A50)
{
    ++originalCalls;
    ctx.r3.u64 = 0xFEDCBA9876543210ull;
    ctx.r11.u64 = 0xFFFFFFFFFFFFFFFFull;
    ctx.lr = 0xABCDEF01;
}
int main()
{
    PPCContext actual{};
    actual.r3.u64 = 0x1000;
    PPCContext expected;
    std::memcpy(&expected, &actual, sizeof(actual));
    __imp__sub_82DC2A50(expected, nullptr);
    GuestGpu::EnableStateTableAudit(false);
    sub_82DC2A50(actual, nullptr);
    CHECK(originalCalls == 2 && std::memcmp(&actual, &expected, sizeof(actual)) == 0);
    CHECK(GuestGpu::GetStateTableAuditCounters().rejectedDevices == 0);
    GuestGpu::EnableStateReplacement(true);
    GuestGpu::EnableStateTableAudit(true);
    actual.r3.u64 = 0x1000;
    sub_82DC2A50(actual, nullptr); // unbacked memory: fail closed, no guest reads
    CHECK(originalCalls == 3 && std::memcmp(&actual, &expected, sizeof(actual)) == 0);
    CHECK(!enabled);
    CHECK(GuestGpu::GetStateTableAuditCounters().rejectedDevices == 1);
    CHECK(GuestGpu::GetStateTableAuditCounters().initializedDevices == 0);
    GuestGpu::EnableStateTableAudit(false);
    std::puts("Table initializer forwards once, preserves context and disables replacements on invalid memory");
}
