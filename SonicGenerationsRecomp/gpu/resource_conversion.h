#pragma once
#include <array>
#include <cstddef>
#include <cstdint>
#include <span>
#include <vector>

namespace GuestGpu
{
    // Xenos hardware encodings, not Vulkan enums or a blanket big-endian swap.
    enum class Endian : uint32_t { None, Swap8In16, Swap8In32, Swap16In32 };
    enum class ConversionResult { Success, Unsupported, InvalidLayout, Truncated, TooLarge, AllocationFailure };
    constexpr const char* ConversionResultName(ConversionResult value) noexcept
    {
        switch (value)
        {
        case ConversionResult::Success: return "success";
        case ConversionResult::Unsupported: return "unsupported format, mip/dimension or endian profile";
        case ConversionResult::InvalidLayout: return "invalid descriptor layout";
        case ConversionResult::Truncated: return "source outside accessible memory view";
        case ConversionResult::TooLarge: return "resource capture budget exceeded";
        case ConversionResult::AllocationFailure: return "host allocation failed";
        }
        return "unknown conversion result";
    }
    bool SwapResourceBytes(std::span<uint8_t> bytes, Endian endian) noexcept;
    ConversionResult ConvertIndices(std::span<const uint8_t> source, uint32_t flags,
        uint32_t stride, std::vector<uint8_t>& output) noexcept;

    // DrawVertices uses a start vertex and count, not a guest index buffer.
    // Lower to relative uint32 indices; the start remains Vulkan baseVertex.
    ConversionResult BuildSequentialIndices(uint32_t first, uint32_t count,
        uint32_t vertexCount, size_t budget, std::vector<uint8_t>& output) noexcept;

    struct TextureLayout
    {
        uint32_t width = 0, height = 0, pitch = 0;
        uint32_t format = 0, swizzle = 0;
        Endian endian{};
        bool tiled = false;
        // Base-level 2D unsigned normalized profile. Other dimensions, signed
        // formats, exponent adjustment, packed tails and mip chains fail closed.
        static ConversionResult Decode(const std::array<uint32_t, 6>& fetch, TextureLayout& out) noexcept;
    };
    // Byte offset of a block in a 2D Xenos tiled surface. Pitch is in blocks,
    // aligned to 32; callers validate bounds and bytesPerBlockLog2 <= 4.
    uint64_t TiledBlockOffset(uint32_t x, uint32_t y, uint32_t pitch, uint32_t bytesPerBlockLog2) noexcept;
    // RGBA8, R8, BC1, BC2 and BC3 -> tightly packed unsigned RGBA8, including
    // endian conversion, untile, BC decompression and fetch component swizzle.
    // Transactional: output is unchanged on failure. Limit is decoded byte size.
    ConversionResult ConvertTexture(const TextureLayout& layout, std::span<const uint8_t> source,
        size_t budget, std::vector<uint8_t>& output) noexcept;
    ConversionResult TextureSourceExtent(const TextureLayout& layout, size_t& bytes) noexcept;
}
