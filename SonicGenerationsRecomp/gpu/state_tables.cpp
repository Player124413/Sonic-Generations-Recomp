#include <gpu/state_tables.h>
#include <ppc/ppc_config.h>
#include <algorithm>
#include <iterator>

namespace
{
    constexpr uint32_t Address(const char* symbol)
    {
        uint32_t result = 0;
        for (size_t i = 4; symbol[i]; ++i)
            result = (result << 4) | uint32_t(symbol[i] <= '9' ? symbol[i] - '0' : symbol[i] - 'A' + 10);
        return result;
    }
    constexpr uint32_t renderReplacements[] = {
#define SONIC_STATE(name, symbol, offset, mask, shift, low, high, writesR4) Address(#symbol),
#include "state_dispatch.inc"
#undef SONIC_STATE
    };
    constexpr uint32_t samplerReplacements[] = {
#define SONIC_SAMPLER(name, symbol, mask, shift) Address(#symbol),
#include "sampler_dispatch.inc"
#undef SONIC_SAMPLER
    };
    uint32_t Read(std::span<const uint8_t> bytes, size_t offset)
    {
        return (uint32_t(bytes[offset]) << 24) | (uint32_t(bytes[offset + 1]) << 16) |
               (uint32_t(bytes[offset + 2]) << 8) | bytes[offset + 3];
    }
}
GuestGpu::TableAudit GuestGpu::AuditStateTables(StateTableView tables) noexcept
{
    using L = StateTableLayout;
    TableAudit result;
    if (tables.device.size() < L::PrefixSize || tables.renderSource.size() < L::RenderCount * L::RecordSize ||
        tables.samplerSource.size() < L::SamplerCount * L::RecordSize)
    { result.status = TableAuditStatus::Truncated; return result; }
    for (bool sampler : {false, true})
    {
        const auto source = sampler ? tables.samplerSource : tables.renderSource;
        const auto count = sampler ? L::SamplerCount : L::RenderCount;
        const auto setters = sampler ? L::SamplerSetters : L::RenderSetters;
        const auto metadata = sampler ? L::SamplerMetadata : L::RenderMetadata;
        for (size_t i = 0; i < count; ++i)
        {
            result.sampler = sampler; result.slot = i;
            const auto expected = Read(source, i * L::RecordSize + 4);
            result.expected = expected; result.actual = Read(tables.device, setters + i * 4);
            if ((expected & 3) || expected < PPC_CODE_BASE || expected >= PPC_CODE_BASE + PPC_CODE_SIZE)
            { result.status = TableAuditStatus::InvalidSetter; return result; }
            if (result.actual != expected)
            { result.status = TableAuditStatus::SetterMismatch; return result; }
            result.expected = Read(source, i * L::RecordSize);
            result.actual = Read(tables.device, metadata + i * 4);
            if (result.actual != result.expected)
            { result.status = TableAuditStatus::MetadataMismatch; return result; }
            if (sampler)
                result.samplerReplacements += std::find(std::begin(samplerReplacements), std::end(samplerReplacements), expected) != std::end(samplerReplacements);
            else
                result.renderReplacements += std::find(std::begin(renderReplacements), std::end(renderReplacements), expected) != std::end(renderReplacements);
        }
    }
    result.sampler = false; result.slot = 0; result.expected = result.actual = 0;
    return result;
}
