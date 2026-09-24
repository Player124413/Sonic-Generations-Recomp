#include <gpu/resource_conversion.h>
#include <algorithm>
#include <new>
#include <utility>

using namespace GuestGpu;
bool GuestGpu::SwapResourceBytes(std::span<uint8_t> bytes, Endian endian) noexcept
{
    const auto mode = uint32_t(endian);
    if (mode > 3) return false;
    const size_t group = mode == 0 ? 1 : mode == 1 ? 2 : 4;
    if (bytes.size() % group) return false;
    const size_t mask = mode == 0 ? 0 : mode == 1 ? 1 : mode == 2 ? 3 : 2;
    for (size_t i = 0; i < bytes.size(); ++i)
        if ((i ^ mask) > i) std::swap(bytes[i], bytes[i ^ mask]);
    return true;
}
ConversionResult GuestGpu::ConvertIndices(std::span<const uint8_t> source, uint32_t flags,
    uint32_t stride, std::vector<uint8_t>& output) noexcept
{
    const auto endian = Endian((flags >> 29) & 3);
    if ((stride != 2 && stride != 4) || stride != ((flags >> 31) ? 4u : 2u) || source.size() % stride)
        return ConversionResult::InvalidLayout;
    // A sliced 16-bit stream may start/end in the middle of a swapped dword.
    // These modes require capturing aligned neighbours, not swapping the slice.
    if (stride == 2 && uint32_t(endian) > 1) return ConversionResult::Unsupported;
    try
    {
        std::vector<uint8_t> result(source.begin(), source.end());
        if (!SwapResourceBytes(result, endian)) return ConversionResult::InvalidLayout;
        output = std::move(result);
    }
    catch (const std::bad_alloc&) { return ConversionResult::AllocationFailure; }
    return ConversionResult::Success;
}
ConversionResult TextureLayout::Decode(const std::array<uint32_t, 6>& f, TextureLayout& out) noexcept
{
    if ((f[0] & 3) != 2 || ((f[5] >> 9) & 3) != 1 || (f[1] & (1 << 10)) ||
        (f[0] & 0x3FC) || (f[3] & (1u | (63u << 13) | (1u << 31))) ||
        (f[4] & 0x3FC) || (f[5] & ((1 << 11) | 4))) return ConversionResult::Unsupported;
    TextureLayout result;
    result.width = (f[2] & 8191) + 1;
    result.height = ((f[2] >> 13) & 8191) + 1;
    result.pitch = ((f[0] >> 22) & 511) * 32;
    result.tiled = (f[0] >> 31) != 0;
    result.format = f[1] & 63;
    result.endian = Endian((f[1] >> 6) & 3);
    result.swizzle = (f[3] >> 1) & 4095;
    size_t extent;
    const auto status = TextureSourceExtent(result, extent);
    if (status == ConversionResult::Success) out = result;
    return status;
}
uint64_t GuestGpu::TiledBlockOffset(uint32_t x, uint32_t y, uint32_t pitch, uint32_t logBytes) noexcept
{
    // Bit decomposition documented by Xenia texture_address.h (BSD-3-Clause).
    // Outer macro tile, inner 1x2 block pair, then pipe/bank interleave.
    const uint64_t outer = (uint64_t(y >> 5) * (pitch >> 5) + (x >> 5)) << 6;
    const uint64_t inner = ((y >> 1) & 7) * 8 + (x & 7);
    const uint64_t address = (outer | inner) << logBytes;
    const uint32_t pipe = ((x >> 3) & 3) ^ (((y >> 3) & 1) << 1);
    return ((y & 1) << 4) | (pipe << 6) | (((y >> 4) & 1) << 11) |
        (address & 15) | (((address >> 4) & 1) << 5) |
        (((address >> 5) & 7) << 8) | ((address >> 8) << 12);
}
namespace
{
    struct Blocks { uint32_t width, height, pitch, bytes, logBytes, edge; };
    ConversionResult Describe(const TextureLayout& l, Blocks& b)
    {
        if (!l.width || !l.height || l.width > 8192 || l.height > 8192 ||
            (l.swizzle & ~4095u) || !l.pitch || l.pitch < l.width || l.pitch > 16352 || (l.pitch & 31) || uint32_t(l.endian) > 3)
            return ConversionResult::InvalidLayout;
        for (uint32_t c = 0; c < 4; ++c)
            if (((l.swizzle >> (3 * c)) & 7) > 5) return ConversionResult::Unsupported;
        b.edge = 1;
        switch (l.format)
        {
        case 2: b.bytes = 1; b.logBytes = 0; break; // k_8
        case 6: b.bytes = 4; b.logBytes = 2; break; // k_8_8_8_8
        case 18: b.edge = 4; b.bytes = 8; b.logBytes = 3; break; // DXT1
        case 19: case 20: b.edge = 4; b.bytes = 16; b.logBytes = 4; break; // DXT2_3 / DXT4_5
        default: return ConversionResult::Unsupported;
        }
        // R8 swap modes reorder pixels across blocks, not bytes within a block.
        if (b.bytes == 1 && l.endian != Endian::None) return ConversionResult::Unsupported;
        b.width = (l.width + b.edge - 1) / b.edge;
        b.height = (l.height + b.edge - 1) / b.edge;
        b.pitch = l.pitch / b.edge;
        if (l.tiled) b.pitch = (b.pitch + 31) & ~31u;
        else b.pitch = ((b.pitch * b.bytes + 255) & ~255u) / b.bytes;
        return ConversionResult::Success;
    }
    uint64_t Offset(const TextureLayout& l, const Blocks& b, uint32_t x, uint32_t y)
    { return l.tiled ? TiledBlockOffset(x, y, b.pitch, b.logBytes) : (uint64_t(y) * b.pitch + x) * b.bytes; }
    using Color = std::array<uint8_t, 4>;
    uint32_t U16(const uint8_t* p) { return p[0] | (uint32_t(p[1]) << 8); }
    Color Rgb565(uint32_t c)
    {
        const uint32_t r = c >> 11, g = (c >> 5) & 63, b = c & 31;
        return {uint8_t((r << 3) | (r >> 2)), uint8_t((g << 2) | (g >> 4)), uint8_t((b << 3) | (b >> 2)), 255};
    }
    void DecodeBlock(const uint8_t* bytes, uint32_t format, std::array<Color, 16>& pixels)
    {
        if (format == 6) { std::copy_n(bytes, 4, pixels[0].begin()); return; }
        if (format == 2) { pixels[0] = {bytes[0], bytes[0], bytes[0], bytes[0]}; return; }
        const auto* c = bytes + (format == 18 ? 0 : 8);
        const uint32_t a = U16(c), b = U16(c + 2);
        std::array<Color, 4> colors{Rgb565(a), Rgb565(b), Color{}, Color{}};
        for (size_t k = 0; k < 3; ++k)
        {
            colors[2][k] = uint8_t(a > b || format != 18 ? (2 * colors[0][k] + colors[1][k]) / 3 : (colors[0][k] + colors[1][k]) / 2);
            colors[3][k] = uint8_t(a > b || format != 18 ? (colors[0][k] + 2 * colors[1][k]) / 3 : 0);
        }
        colors[2][3] = 255; colors[3][3] = a > b || format != 18 ? 255 : 0;
        std::array<uint8_t, 8> alpha{bytes[0], bytes[1]};
        uint64_t alphaBits = 0;
        if (format == 20)
        {
            if (alpha[0] > alpha[1])
                for (int i = 1; i <= 6; ++i) alpha[i + 1] = uint8_t(((7 - i) * alpha[0] + i * alpha[1]) / 7);
            else
            {
                for (int i = 1; i <= 4; ++i) alpha[i + 1] = uint8_t(((5 - i) * alpha[0] + i * alpha[1]) / 5);
                alpha[6] = 0; alpha[7] = 255;
            }
            for (int i = 0; i < 6; ++i) alphaBits |= uint64_t(bytes[2 + i]) << (8 * i);
        }
        for (size_t i = 0; i < 16; ++i)
        {
            pixels[i] = colors[(c[4 + i / 4] >> (2 * (i % 4))) & 3];
            if (format == 19) pixels[i][3] = uint8_t(((bytes[i / 2] >> (4 * (i % 2))) & 15) * 17);
            if (format == 20) pixels[i][3] = alpha[(alphaBits >> (3 * i)) & 7];
        }
    }
}
ConversionResult GuestGpu::TextureSourceExtent(const TextureLayout& l, size_t& bytes) noexcept
{
    Blocks b{};
    const auto status = Describe(l, b);
    if (status != ConversionResult::Success) return status;
    uint64_t end = 0;
    // Tiled addresses are not monotonic inside a tile; last pixel is not max.
    if (l.tiled)
        for (uint32_t y = 0; y < b.height; ++y)
            for (uint32_t x = 0; x < b.width; ++x) end = std::max(end, Offset(l, b, x, y) + b.bytes);
    else end = Offset(l, b, b.width - 1, b.height - 1) + b.bytes;
    if (end > SIZE_MAX) return ConversionResult::TooLarge;
    bytes = size_t(end);
    return ConversionResult::Success;
}
ConversionResult GuestGpu::ConvertTexture(const TextureLayout& l, std::span<const uint8_t> source,
    size_t budget, std::vector<uint8_t>& output) noexcept
{
    Blocks b{};
    auto status = Describe(l, b);
    if (status != ConversionResult::Success) return status;
    const uint64_t size = uint64_t(l.width) * l.height * 4;
    if (size > budget || size > SIZE_MAX) return ConversionResult::TooLarge;
    size_t extent = 0;
    status = TextureSourceExtent(l, extent);
    if (status != ConversionResult::Success) return status;
    if (source.size() < extent) return ConversionResult::Truncated;
    try
    {
        std::vector<uint8_t> result(size_t(size), 0);
        for (uint32_t y = 0; y < b.height; ++y)
            for (uint32_t x = 0; x < b.width; ++x)
            {
                std::array<uint8_t, 16> block{};
                std::copy_n(source.data() + size_t(Offset(l, b, x, y)), b.bytes, block.data());
                if (!SwapResourceBytes({block.data(), b.bytes}, l.endian)) return ConversionResult::InvalidLayout;
                std::array<Color, 16> pixels{};
                DecodeBlock(block.data(), l.format, pixels);
                for (uint32_t dy = 0; dy < b.edge && y * b.edge + dy < l.height; ++dy)
                    for (uint32_t dx = 0; dx < b.edge && x * b.edge + dx < l.width; ++dx)
                    {
                        const auto& pixel = pixels[dy * b.edge + dx];
                        const size_t offset = (size_t(y * b.edge + dy) * l.width + x * b.edge + dx) * 4;
                        for (uint32_t c = 0; c < 4; ++c)
                        {
                            const uint32_t component = (l.swizzle >> (c * 3)) & 7;
                            result[offset + c] = component < 4 ? pixel[component] : component == 4 ? 0 : 255;
                        }
                    }
            }
        output = std::move(result);
    }
    catch (const std::bad_alloc&) { return ConversionResult::AllocationFailure; }
    return ConversionResult::Success;
}

GuestGpu::ConversionResult GuestGpu::BuildSequentialIndices(uint32_t first,
    uint32_t count, uint32_t vertexCount, size_t budget, std::vector<uint8_t>& output) noexcept
{
    if(!count || first>INT32_MAX || uint64_t(first)+count>vertexCount)
        return ConversionResult::InvalidLayout;
    if(uint64_t(count)*4>budget) return ConversionResult::TooLarge;
    try
    {
        std::vector<uint8_t> indices(size_t(count)*4);
        for(uint32_t i=0;i<count;++i)
            for(size_t byte=0;byte<4;++byte) indices[size_t(i)*4+byte]=uint8_t(i>>(byte*8));
        output=std::move(indices);
        return ConversionResult::Success;
    }
    catch(const std::bad_alloc&) { return ConversionResult::AllocationFailure; }
}
