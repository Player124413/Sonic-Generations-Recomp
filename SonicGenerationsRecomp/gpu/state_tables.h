#pragma once
#include <cstddef>
#include <cstdint>
#include <span>

namespace GuestGpu
{
    // Proven from sub_82DC2A50's two initialization loops. Metadata is kept
    // opaque: a copied word is not assumed to be a getter function pointer.
    struct StateTableLayout
    {
        static constexpr size_t RenderCount = 101, SamplerCount = 20;
        static constexpr size_t RenderSetters = 64, SamplerSetters = 468;
        static constexpr size_t RenderMetadata = 548, SamplerMetadata = 952;
        static constexpr size_t PrefixSize = 1032, RecordSize = 12;
        static constexpr uint32_t RenderSource = 0x83790798, SamplerSource = 0x83790C58;
    };
    struct StateTableView
    {
        std::span<const uint8_t> device, renderSource, samplerSource;
    };
    enum class TableAuditStatus { Match, Truncated, InvalidSetter, SetterMismatch, MetadataMismatch };
    struct TableAudit
    {
        TableAuditStatus status = TableAuditStatus::Match;
        bool sampler = false;
        size_t slot = 0;
        uint32_t expected = 0, actual = 0;
        size_t renderReplacements = 0, samplerReplacements = 0;
    };
    TableAudit AuditStateTables(StateTableView tables) noexcept;

    struct TableAuditCounters
    {
        uint64_t initializedDevices = 0, rejectedDevices = 0;
        uint64_t renderReplacementSlots = 0, samplerReplacementSlots = 0;
    };
    // Explicit link anchor for the initializer hook. Invoke with producers stopped.
    void EnableStateTableAudit(bool enable) noexcept;
    TableAuditCounters GetStateTableAuditCounters() noexcept;
}
