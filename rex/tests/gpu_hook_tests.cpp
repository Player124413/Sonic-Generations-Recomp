#include "gpu_capture.h"
#include <rex/hook.h>
#include <array>
#include <cstdio>
#include <cstdlib>
#include <cstring>

namespace {
std::array<unsigned char, sizeof(PPCContext)> expected{};
unsigned calls = 0, failures = 0;
sonic::rex_host::GpuEntry selected{};
void Original(sonic::rex_host::GpuEntry entry, PPCContext& ctx, uint8_t* base) {
    if (entry != selected || base != nullptr || std::memcmp(expected.data(), &ctx, sizeof(ctx))) ++failures;
    ++calls;
    ctx.r3.u64 = 0xFEDCBA9876543210; // Original's full return value must survive.
}
}
#define SONIC_GPU_ENTRY(name, symbol) \
    REX_EXTERN(symbol); \
    REX_HOOK_RAW(__imp__##symbol) { Original(sonic::rex_host::GpuEntry::name, ctx, base); }
#include "../../SonicGenerationsRecomp/gpu/guest_entries.inc"
#undef SONIC_GPU_ENTRY
int main() {
    const auto cache = std::filesystem::current_path() / "gpu-hook-test-cache";
    // First disabled, then real capture enabled (null base must be rejected).
    for (unsigned mode = 0; mode != 2; ++mode) {
        if (mode) {
            _putenv_s("SONIC_REX_GPU_CAPTURE", "1");
            sonic::rex_host::InitializeGpuCapture(cache);
        }
        PPCContext ctx{};
        ctx.r3.u64 = 0x12345678;
        ctx.r4.u64 = 0xFFEEDDCCBBAA9988;
        ctx.r5.u64 = 7; ctx.r6.u64 = 8; ctx.r7.u64 = 9;
        ctx.r8.u64 = 10; ctx.r9.u64 = 11; ctx.r10.u64 = 12;
        ctx.r1.u64 = 0xA0001000; ctx.lr = 0x82012345;
        ctx.f1.f64 = 0.25;
#define SONIC_GPU_ENTRY(name, symbol) \
        selected = sonic::rex_host::GpuEntry::name; \
        std::memcpy(expected.data(), &ctx, sizeof(ctx)); \
        symbol(ctx, nullptr); \
        if (ctx.r3.u64 != 0xFEDCBA9876543210) ++failures;
#include "../../SonicGenerationsRecomp/gpu/guest_entries.inc"
#undef SONIC_GPU_ENTRY
    }
    if (calls != 2 * unsigned(sonic::rex_host::GpuEntry::Count)) ++failures;
    if (failures) std::fprintf(stderr, "GPU hook failures: %u\n", failures);
    return failures ? 1 : 0;
}
