#pragma once

#include <gpu/native_resources.h>
#include <gpu/shader_bindings.h>
#include <array>
#include <atomic>
#include <cstddef>
#include <cstdint>
#include <mutex>
#include <span>
#include <vector>

namespace GuestGpu
{
    // A view of already accessible guest memory, not a virtual-memory mapper.
    // The runtime uses the same accessibility contract as the generated PPC.
    struct MemoryView
    {
        std::span<const uint8_t> bytes;
        bool Copy(uint32_t address, std::span<uint8_t> destination) const noexcept;
    };

    // Snapshot of the known prefix, NOT a replacement native device layout.
    // Preserve raw bits (including constants/NaNs); never write it back to guest.
    struct NativeState
    {
        static constexpr size_t ByteSize = 13052;
        // Pointer slots up to the viewport block, not a validated API stage limit.
        static constexpr size_t TextureCount = 26;
        std::array<uint32_t, ByteSize / 4> words{}; // host-endian words

        static bool Read(MemoryView memory, uint32_t device, NativeState& out) noexcept;
        std::array<uint32_t, 4> ColorTargets() const noexcept;
        uint32_t DepthTarget() const noexcept { return words[12808 / 4]; }
        uint32_t VertexShader() const noexcept { return words[13048 / 4]; }
        uint32_t PixelShader() const noexcept { return words[13044 / 4]; }
        uint32_t IndexBuffer() const noexcept { return words[12788 / 4]; }
        std::array<uint32_t, TextureCount> Textures() const noexcept;
        std::array<float, 6> Viewport() const noexcept;
        std::array<int32_t, 4> Scissor() const noexcept;
        // Two banks emitted to Xenos registers 0x4000 and 0x4400 respectively.
        // Invalid indices fail rather than silently alias another state region.
        bool FloatConstant(size_t bank, size_t index, std::array<float, 4>& out) const noexcept;
        bool TextureFetch(size_t slot, std::array<uint32_t, 6>& out) const noexcept;
    };

    enum class ResourceReadResult { Success, InvalidMemory, TooLarge, AllocationFailure };
    struct IndexSnapshot
    {
        static constexpr size_t MaxBytes = 256 * 1024;
        uint32_t resource = 0;
        uint32_t flags = 0;
        uint32_t start = 0;
        uint32_t count = 0;
        uint32_t stride = 0;
        // Exact guest bytes, NOT host-endian index values. Keep native flags
        // until the backend translates Xenos endian/swap mode explicitly.
        std::vector<uint8_t> bytes;
        static ResourceReadResult Read(MemoryView memory, uint32_t resource,
            uint32_t start, uint32_t count, size_t budget, IndexSnapshot& out) noexcept;
    };

    enum class DrawKind { Vertices, IndexedVertices };
    struct NativeDraw
    {
        uint64_t sequence = 0;
        uint32_t device = 0;
        DrawKind kind{};
        std::array<uint32_t, 4> arguments{}; // unmodified entry r4..r7
        NativeState state;
        NativeShaderIdentity vertexShader, pixelShader;
        DrawResources resources; // owned, opt-in native resource capture
        IndexSnapshot indices; // owned only for indexed draws
    };

    struct NativeClear
    {
        uint64_t sequence = 0;
        uint32_t device = 0, flags = 0, stencil = 0;
        NativeState state;
        std::array<int32_t,4> rectangle{};
        std::array<float,4> color{};
        float depth = 1;
    };

    struct CaptureErrors
    {
        uint64_t invalidMemory = 0;
        uint64_t overflow = 0;
        uint64_t allocationFailure = 0;
        uint64_t resourceLimit = 0;
        bool Any() const noexcept { return invalidMemory || overflow || allocationFailure || resourceLimit; }
    };
    struct NativeBatch
    {
        std::vector<NativeDraw> draws;
        std::vector<NativeClear> clears;
        CaptureErrors errors;
        size_t payloadBytes = 0;
        // Only two SDK draw paths are covered. Binding addresses are identifiers,
        // NOT necessarily retained resources; see DrawResources::captured.
        // Never treat this partial batch as a ready-to-render command list.
        static constexpr bool CompleteCoverage = false;
    };
    enum class CaptureResult { Disabled, Captured, InvalidMemory, Overflow, AllocationFailure, ResourceLimit };
    enum class SubmissionResult { Unsupported, Incomplete, ResourcesUploaded, Submitted };

    class CommandStream
    {
    public:
        static constexpr size_t MaxDraws = 128;
        static constexpr size_t MaxPayloadBytes = 8 * 1024 * 1024;
        explicit CommandStream(size_t capacity = MaxDraws) noexcept;
        // Clears pending draws/errors; sequence remains process-lifetime monotonic.
        // Lifecycle changes must be made while guest producer threads are stopped.
        void Enable(bool enable, bool captureResources = false);
        bool IsEnabled() const noexcept { return enabled.load(std::memory_order_relaxed); }
        CaptureResult Capture(MemoryView memory, uint32_t device, DrawKind kind,
                              std::array<uint32_t, 4> arguments) noexcept;
        CaptureResult CaptureClear(MemoryView memory, uint32_t device, uint32_t flags,
            uint32_t rectangle, uint32_t color, float depth, uint32_t stencil) noexcept;
        NativeBatch Drain(); // moves ownership to caller; no backend under mutex
    private:
        std::mutex mutex;
        const size_t capacity;
        std::atomic<bool> enabled{false};
        bool resourceCapture = false;
        uint64_t sequence = 0;
        NativeBatch pending;
    };

    // Shared by guest hooks and Video's present lifecycle.
    CommandStream& GetCommandStream();
}
