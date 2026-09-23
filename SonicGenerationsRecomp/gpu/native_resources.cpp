#include <gpu/native_resources.h>
#include <gpu/native_commands.h>
#include <new>
#include <utility>

namespace
{
    uint32_t Word(const uint8_t* p)
    { return (uint32_t(p[0]) << 24) | (uint32_t(p[1]) << 16) | (uint32_t(p[2]) << 8) | p[3]; }
    // Exact address translation performed by sub_82DAA9E8 / sub_82DA6DC0.
    uint32_t GpuAddress(uint32_t cpu)
    { return (cpu & 0x1FFFFFFF) + (((cpu >> 20) + 512) & 4096); }
}
GuestGpu::DrawResources GuestGpu::ReadDrawResources(MemoryView memory, const NativeState& state, size_t budget) noexcept
{
    DrawResources result;
    result.captured = true;
    const auto fail = [&](ConversionResult status) {
        result.status = status;
        result.vertices.clear(); result.textures.clear(); result.payloadBytes = 0;
        return std::move(result);
    };
    try
    {
        result.vertices.reserve(16); result.textures.reserve(NativeState::TextureCount);
        for (uint32_t stream = 0; stream < 16; ++stream)
        {
            const uint32_t resource = state.words[12812 / 4 + stream];
            if (!resource) continue;
            result.failedSlot = stream;
            std::array<uint8_t, 32> header{};
            if ((resource & 3) || !memory.Copy(resource, header)) return fail(ConversionResult::Truncated);
            const size_t fetch = (1776 + (17 - stream) * 8) / 4;
            const uint32_t addressWord = state.words[fetch], sizeWord = state.words[fetch + 1];
            if ((addressWord & 3) != 3 || (sizeWord & 0xFC000000)) return fail(ConversionResult::Unsupported);
            const uint32_t original = Word(header.data() + 24) & ~3u;
            const uint32_t physical = GpuAddress(original);
            const uint32_t bound = addressWord & ~3u;
            const uint32_t size = sizeWord & 0x03FFFFFC;
            const uint32_t allocation = Word(header.data() + 28) & 0x03FFFFFC;
            if (bound < physical || uint64_t(bound - physical) + size > allocation ||
                uint64_t(original) + (bound - physical) + size > (uint64_t{1} << 32))
                return fail(ConversionResult::InvalidLayout);
            if (size > budget - result.payloadBytes) return fail(ConversionResult::TooLarge);
            const uint32_t strideWord = state.words[(12880 + stream) / 4];
            VertexSnapshot vertex;
            vertex.stream = stream; vertex.resource = resource;
            vertex.stride = ((strideWord >> (24 - (stream % 4) * 8)) & 255) * 4;
            if (!vertex.stride || !size) return fail(ConversionResult::Unsupported);
            vertex.bytes.resize(size);
            if (!memory.Copy(original + (bound - physical), vertex.bytes)) return fail(ConversionResult::Truncated);
            if (!SwapResourceBytes(vertex.bytes, Endian(sizeWord & 3))) return fail(ConversionResult::InvalidLayout);
            result.payloadBytes += size;
            result.vertices.push_back(std::move(vertex));
        }
        result.failedTexture = true;
        for (uint32_t slot = 0; slot < NativeState::TextureCount; ++slot)
        {
            const uint32_t resource = state.words[12896 / 4 + slot];
            if (!resource) continue;
            result.failedSlot = slot;
            std::array<uint32_t, 6> fetch{};
            state.TextureFetch(slot, fetch);
            TextureLayout layout;
            auto status = TextureLayout::Decode(fetch, layout);
            if (status != ConversionResult::Success) return fail(status);
            const uint64_t decoded = uint64_t(layout.width) * layout.height * 4;
            if (decoded > budget - result.payloadBytes) return fail(ConversionResult::TooLarge);
            std::array<uint8_t, 52> header{};
            if ((resource & 3) || !memory.Copy(resource, header)) return fail(ConversionResult::Truncated);
            const uint32_t original = Word(header.data() + 32) & ~4095u;
            if (GpuAddress(original) != (fetch[1] & ~4095u)) return fail(ConversionResult::InvalidLayout);
            size_t extent = 0;
            status = TextureSourceExtent(layout, extent);
            if (status != ConversionResult::Success) return fail(status);
            // Bound transient source allocations too, independently of retained RGBA.
            if (extent > CommandStream::MaxPayloadBytes) return fail(ConversionResult::TooLarge);
            std::vector<uint8_t> source(extent);
            if (!memory.Copy(original, source)) return fail(ConversionResult::Truncated);
            TextureSnapshot texture;
            texture.slot = slot; texture.resource = resource;
            texture.width = layout.width; texture.height = layout.height;
            status = ConvertTexture(layout, source, budget - result.payloadBytes, texture.rgba);
            if (status != ConversionResult::Success) return fail(status);
            result.payloadBytes += texture.rgba.size();
            result.textures.push_back(std::move(texture));
        }
    }
    catch (const std::bad_alloc&) { return fail(ConversionResult::AllocationFailure); }
    result.status = ConversionResult::Success;
    result.failedSlot = 0; result.failedTexture = false;
    return result;
}
