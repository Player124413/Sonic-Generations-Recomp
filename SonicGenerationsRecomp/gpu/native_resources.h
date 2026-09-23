#pragma once
#include <gpu/resource_conversion.h>

namespace GuestGpu
{
    struct MemoryView;
    struct NativeState;
    struct VertexSnapshot
    {
        uint32_t stream = 0, resource = 0, stride = 0;
        std::vector<uint8_t> bytes; // endian-converted, from current stream offset
    };
    struct TextureSnapshot
    {
        uint32_t slot = 0, resource = 0, width = 0, height = 0;
        std::vector<uint8_t> rgba;
    };
    struct DrawResources
    {
        bool captured = false;
        ConversionResult status = ConversionResult::Unsupported;
        uint32_t failedSlot = 0;
        bool failedTexture = false;
        size_t payloadBytes = 0;
        std::vector<VertexSnapshot> vertices;
        std::vector<TextureSnapshot> textures;
    };
    // Uses original CPU descriptor addresses, never guesses a CPU mapping from
    // a GPU physical address. Captures before original draw/resource mutation.
    DrawResources ReadDrawResources(MemoryView memory, const NativeState& state, size_t budget) noexcept;
}
