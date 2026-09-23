#pragma once
#include <cstdint>
#include <cstddef>

namespace GuestGpu
{
    struct MemoryView;
    enum class ShaderReadStatus { Unbound, Success, InvalidMemory, InvalidContainer, StageMismatch, TooLarge, AllocationFailure };
    struct NativeShaderIdentity
    {
        uint32_t resource = 0;
        uint32_t stage = 0; // SPIR-V ExecutionModel: vertex=0, fragment=4
        uint64_t hash = 0;  // XXH3 of exact original container bytes, not GPU code alone
        ShaderReadStatus status = ShaderReadStatus::Unbound;
        uint32_t samplerMask = 0;
        bool reflectionValid = false;
        bool packedBooleansSupported = true;
    };
    // Reconstruct the container split by native constructors. Never change the
    // resource or guess an address in the shader cache. Bound scratch allocation.
    NativeShaderIdentity ReadShaderIdentity(MemoryView memory, uint32_t resource, uint32_t stage) noexcept;
    constexpr size_t MaxShaderContainerBytes = 4 * 1024 * 1024;
}
