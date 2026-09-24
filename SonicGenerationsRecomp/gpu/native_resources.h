#pragma once
#include <gpu/resource_conversion.h>

namespace GuestGpu
{
    struct MemoryView;
    struct NativeState;
    struct NativeSurface
    {
        uint32_t resource=0, width=0, height=0, samples=0, format=0;
        uint32_t baseTile=0, tileCount=0;
        std::array<uint32_t,6> descriptor{}; // words 24..44, excludes refcounts
        ConversionResult status=ConversionResult::Success;
        bool operator==(const NativeSurface&) const = default;
    };
    struct NativeTargets
    {
        bool captured=false;
        std::array<NativeSurface,5> surfaces{}; // color 0..3, depth
    };
    struct NativeTexture
    {
        uint32_t resource=0, width=0, height=0, physical=0;
        std::array<uint32_t,6> fetch{};
        ConversionResult status=ConversionResult::Unsupported;
        bool operator==(const NativeTexture&) const = default;
    };
    bool SameTextureStorage(const NativeTexture& texture,const std::array<uint32_t,6>& fetch) noexcept;
    NativeSurface ReadSurface(MemoryView memory,uint32_t resource) noexcept;
    NativeTexture ReadTexture(MemoryView memory,uint32_t resource) noexcept;
    NativeTargets ReadTargets(MemoryView memory,const NativeState& state) noexcept;
    struct VertexSnapshot
    {
        uint32_t stream = 0, resource = 0, stride = 0;
        std::vector<uint8_t> bytes; // endian-converted, from current stream offset
    };
    struct TextureSnapshot
    {
        uint32_t slot = 0, resource = 0, width = 0, height = 0;
        uint32_t physical=0;
        std::array<uint32_t,6> fetch{};
        std::vector<uint8_t> rgba;
    };
    struct NativeVertexElement
    {
        uint32_t stream, offset, type, usage, usageIndex, method;
    };
    struct DrawResources
    {
        bool captured = false;
        ConversionResult status = ConversionResult::Unsupported;
        uint32_t failedSlot = 0;
        bool failedTexture = false;
        size_t payloadBytes = 0;
        std::vector<NativeVertexElement> declaration;
        std::vector<VertexSnapshot> vertices;
        std::vector<TextureSnapshot> textures;
    };
    // Uses original CPU descriptor addresses, never guesses a CPU mapping from
    // a GPU physical address. Captures before original draw/resource mutation.
    DrawResources ReadDrawResources(MemoryView memory, const NativeState& state, size_t budget) noexcept;
}
