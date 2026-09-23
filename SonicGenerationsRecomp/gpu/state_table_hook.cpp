#include <gpu/state_tables.h>
#include <gpu/state_dispatch.h>
#include <cpu/ppc_context.h>
#include <atomic>
#include <cstdio>

namespace
{
    std::atomic<bool> enabled{false};
    std::atomic<uint64_t> initialized{0}, rejected{0}, renderSlots{0}, samplerSlots{0};
}
void GuestGpu::EnableStateTableAudit(bool value) noexcept { enabled.store(value, std::memory_order_relaxed); }
GuestGpu::TableAuditCounters GuestGpu::GetStateTableAuditCounters() noexcept
{
    return {initialized.load(std::memory_order_relaxed), rejected.load(std::memory_order_relaxed),
            renderSlots.load(std::memory_order_relaxed), samplerSlots.load(std::memory_order_relaxed)};
}
PPC_FUNC_IMPL(__imp__sub_82DC2A50);
PPC_FUNC(sub_82DC2A50)
{
    const bool audit = enabled.load(std::memory_order_relaxed);
    const uint32_t device = ctx.r3.u32;
    __imp__sub_82DC2A50(ctx, base); // initialize native tables/defaults exactly once
    if (!audit) return;
    using L = GuestGpu::StateTableLayout;
    GuestGpu::TableAudit result;
    if (!base || device < 4096 || (device & 3) || uint64_t(device) + L::PrefixSize > PPC_MEMORY_SIZE)
        result.status = GuestGpu::TableAuditStatus::Truncated;
    else
        result = GuestGpu::AuditStateTables({
            {base + device, L::PrefixSize},
            {base + L::RenderSource, L::RenderCount * L::RecordSize},
            {base + L::SamplerSource, L::SamplerCount * L::RecordSize}});
    if (result.status != GuestGpu::TableAuditStatus::Match)
    {
        // Do not "repair" an unknown device or claim that host rendering is ready.
        // Fall back to originals for all replacements for the rest of the session.
        GuestGpu::EnableStateReplacement(false);
        if (rejected.fetch_add(1, std::memory_order_relaxed) == 0)
            std::fprintf(stderr, "GPU state table audit rejected device %08X: status=%u sampler=%u slot=%zu expected=%08X actual=%08X. State replacements disabled.\n",
                device, unsigned(result.status), unsigned(result.sampler), result.slot, result.expected, result.actual);
        return;
    }
    initialized.fetch_add(1, std::memory_order_relaxed);
    renderSlots.fetch_add(result.renderReplacements, std::memory_order_relaxed);
    samplerSlots.fetch_add(result.samplerReplacements, std::memory_order_relaxed);
}
