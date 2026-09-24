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
        result.declaration.clear(); result.vertices.clear(); result.textures.clear(); result.payloadBytes = 0;
        return std::move(result);
    };
    try
    {
        const uint32_t declaration=state.words[12216/4];
        if(declaration)
        {
            std::array<uint8_t,52> header{};
            if ((declaration & 3) || !memory.Copy(declaration,header)) return fail(ConversionResult::Truncated);
            const uint32_t count=Word(header.data()+24);
            if ((Word(header.data())&15)!=5 || !count || count>32 || uint64_t(declaration)+52+count*12>(uint64_t{1}<<32))
                return fail(ConversionResult::Unsupported);
            std::array<uint8_t,384> entries{};
            if(!memory.Copy(declaration+52,std::span(entries).first(count*12))) return fail(ConversionResult::Truncated);
            result.declaration.reserve(count);
            for(uint32_t i=0;i<count;++i)
            {
                const auto* e=entries.data()+i*12;
                result.declaration.push_back({uint32_t(e[0])*256+e[1],uint32_t(e[2])*256+e[3],Word(e+4),e[9],e[10],e[8]});
            }
        }
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
            texture.physical=fetch[1]&~4095u; texture.fetch=fetch;
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

GuestGpu::NativeSurface GuestGpu::ReadSurface(MemoryView memory,uint32_t resource) noexcept
{
    NativeSurface surface; surface.resource=resource;
    if(!resource) return surface;
    std::array<uint8_t,48> bytes{};
    if((resource&3) || !memory.Copy(resource,bytes))
    { surface.status=ConversionResult::Truncated; return surface; }
    if((Word(bytes.data())&15)!=4 || (Word(bytes.data())&0x40000000))
    { surface.status=ConversionResult::Unsupported; return surface; }
    for(size_t i=0;i<6;++i) surface.descriptor[i]=Word(bytes.data()+24+i*4);
    // Constructor 82DA6488 and GetSurfaceDesc 82DA6C98.
    surface.samples=(surface.descriptor[0]>>16)&3;
    surface.width=(surface.descriptor[3]>>18)+1;
    surface.height=((surface.descriptor[3]>>3)&32767)+1;
    surface.format=(surface.descriptor[1]>>16)&15;
    surface.baseTile=surface.descriptor[1]&4095;
    surface.tileCount=surface.descriptor[5]/5120;
    if(!surface.tileCount || surface.descriptor[5]%5120 || surface.baseTile>=2048 ||
       surface.tileCount>2048-surface.baseTile || surface.width>8192 || surface.height>8192)
        surface.status=ConversionResult::InvalidLayout;
    return surface;
}
GuestGpu::NativeTargets GuestGpu::ReadTargets(MemoryView memory,const NativeState& state) noexcept
{
    NativeTargets targets; targets.captured=true;
    auto colors=state.ColorTargets();
    for(size_t i=0;i<4;++i) targets.surfaces[i]=ReadSurface(memory,colors[i]);
    targets.surfaces[4]=ReadSurface(memory,state.DepthTarget());
    return targets;
}
GuestGpu::NativeTexture GuestGpu::ReadTexture(MemoryView memory,uint32_t resource) noexcept
{
    NativeTexture texture; texture.resource=resource;
    std::array<uint8_t,52> bytes{};
    if(!resource || (resource&3) || !memory.Copy(resource,bytes))
    { texture.status=ConversionResult::Truncated; return texture; }
    if((Word(bytes.data())&15)!=3) return texture;
    for(size_t i=0;i<6;++i) texture.fetch[i]=Word(bytes.data()+28+i*4);
    // Texture header keeps a CPU alias in the fetch address. Device binding
    // translates it to a GPU physical address (82DA6DC0).
    auto& address=texture.fetch[1];
    texture.physical=GpuAddress(address&~4095u);
    address=texture.physical|(address&4095);
    TextureLayout layout;
    texture.status=TextureLayout::Decode(texture.fetch,layout);
    texture.width=layout.width; texture.height=layout.height;
    if(texture.status==ConversionResult::Success &&
       (layout.format!=6 || layout.swizzle!=(0u|(1u<<3)|(2u<<6)|(3u<<9))))
        texture.status=ConversionResult::Unsupported;
    return texture;
}

bool GuestGpu::SameTextureStorage(const NativeTexture& texture,const std::array<uint32_t,6>& fetch) noexcept
{
    TextureLayout a,b;
    return texture.status==ConversionResult::Success && texture.physical==(fetch[1]&~4095u) &&
        TextureLayout::Decode(texture.fetch,a)==ConversionResult::Success &&
        TextureLayout::Decode(fetch,b)==ConversionResult::Success && a.width==b.width && a.height==b.height &&
        a.pitch==b.pitch && a.format==b.format && a.swizzle==b.swizzle && a.endian==b.endian && a.tiled==b.tiled;
}
