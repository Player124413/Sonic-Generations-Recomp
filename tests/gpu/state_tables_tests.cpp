#include <gpu/state_tables.h>
#include <array>
#include <cstdio>
#include <cstdlib>
#include <vector>

#define CHECK(x) do { if (!(x)) { std::fprintf(stderr, "FAIL %d: %s\n", __LINE__, #x); std::abort(); } } while(false)
using L = GuestGpu::StateTableLayout;
static void Store(std::span<uint8_t> bytes, size_t offset, uint32_t value)
{
    for (size_t i = 0; i < 4; ++i) bytes[offset + i] = uint8_t(value >> (24 - i * 8));
}
int main()
{
    std::array<uint8_t, L::PrefixSize + 16> device{};
    std::array<uint8_t, L::RenderCount * L::RecordSize> render{};
    std::array<uint8_t, L::SamplerCount * L::RecordSize> sampler{};
    for (bool isSampler : {false, true})
    {
        const auto count = isSampler ? L::SamplerCount : L::RenderCount;
        const auto setters = isSampler ? L::SamplerSetters : L::RenderSetters;
        const auto metadata = isSampler ? L::SamplerMetadata : L::RenderMetadata;
        const std::span<uint8_t> source = isSampler ? std::span<uint8_t>(sampler) : std::span<uint8_t>(render);
        for (size_t i = 0; i < count; ++i)
        {
            uint32_t address = 0x82480000;
            if (i == 0) address = isSampler ? 0x82DAA5D8 : 0x82DA8D28;
            if (isSampler && i == count - 1) address = 0x82DAA678;
            const uint32_t opaque = 0xDEADBEEF ^ uint32_t(i);
            Store(source, i * 12, opaque); Store(source, i * 12 + 4, address);
            Store(source, i * 12 + 8, uint32_t(i + 1)); // defaults are not pointers
            Store(device, setters + i * 4, address); Store(device, metadata + i * 4, opaque);
        }
    }
    Store(device, 48, 0xAABBCCDD); Store(device, 60, 1); // ring pointer/refcount, not dispatch
    const auto original = device;
    auto audit = GuestGpu::AuditStateTables({device, render, sampler});
    CHECK(audit.status == GuestGpu::TableAuditStatus::Match);
    CHECK(audit.renderReplacements == 1 && audit.samplerReplacements == 2);
    CHECK(device == original);
    Store(device, L::SamplerSetters + 19 * 4, 0x82480000);
    audit = GuestGpu::AuditStateTables({device, render, sampler});
    CHECK(audit.status == GuestGpu::TableAuditStatus::SetterMismatch && audit.sampler && audit.slot == 19);
    device = original;
    Store(device, L::RenderMetadata + 100 * 4, 0);
    audit = GuestGpu::AuditStateTables({device, render, sampler});
    CHECK(audit.status == GuestGpu::TableAuditStatus::MetadataMismatch && !audit.sampler && audit.slot == 100);
    device = original;
    for (uint32_t invalid : {0u, 0x82480002u, 0xFFFFFFFFu, 0x83695200u})
    {
        Store(render, 4, invalid); Store(device, L::RenderSetters, invalid);
        CHECK(GuestGpu::AuditStateTables({device, render, sampler}).status == GuestGpu::TableAuditStatus::InvalidSetter);
    }
    Store(render, 4, 0x82DA8D28); device = original;
    CHECK(GuestGpu::AuditStateTables({std::span(device).first(L::PrefixSize - 1), render, sampler}).status == GuestGpu::TableAuditStatus::Truncated);
    CHECK(GuestGpu::AuditStateTables({device, std::span(render).first(render.size() - 1), sampler}).status == GuestGpu::TableAuditStatus::Truncated);
    CHECK(GuestGpu::AuditStateTables({device, render, std::span(sampler).first(sampler.size() - 1)}).status == GuestGpu::TableAuditStatus::Truncated);
    CHECK(GuestGpu::AuditStateTables({}).status == GuestGpu::TableAuditStatus::Truncated);
    std::puts("101 render + 20 sampler table layout, bounds, metadata and fallback audit tests passed");
}
