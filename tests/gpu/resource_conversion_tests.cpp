#include <gpu/resource_conversion.h>
#include <gpu/native_commands.h>
#include <algorithm>
#include <array>
#include <cstdio>
#include <cstdlib>

#define CHECK(x) do { if (!(x)) { std::fprintf(stderr,"FAIL %d: %s\n",__LINE__,#x); std::abort(); } } while(false)
using namespace GuestGpu;
constexpr uint32_t Identity = 0 | (1 << 3) | (2 << 6) | (3 << 9);
static uint64_t ReferenceTiled(uint32_t x, uint32_t y, uint32_t pitch, uint32_t log)
{
    // Independent macro/micro formulation used by XGAddress2DTiledOffset /
    // crunch, rather than the production bank/pipe bit decomposition.
    uint64_t macro = (uint64_t(x >> 5) + uint64_t(y >> 5) * (pitch >> 5)) << (log + 7);
    uint64_t micro = ((x & 7) + ((y & 6) << 2)) << log;
    uint64_t offset = macro + ((micro & ~15ull) << 1) + (micro & 15) + ((y & 8) << (log + 3)) + ((y & 1) << 4);
    return ((offset & ~511ull) << 3) + ((offset & 448) << 2) + (offset & 63) + ((y & 16) << 7) + (((((y & 8) >> 2) + (x >> 3)) & 3) << 6);
}
static void ConversionTests()
{
    for (uint32_t log = 0; log <= 4; ++log)
        for (uint32_t pitch : {32u, 64u, 96u, 256u})
            for (uint32_t y = 0; y < 96; ++y)
                for (uint32_t x = 0; x < pitch; ++x)
                    CHECK(TiledBlockOffset(x,y,pitch,log) == ReferenceTiled(x,y,pitch,log));
    for (uint32_t mode = 0; mode < 4; ++mode)
    {
        std::vector<uint8_t> a{0,1,2,3,4,5,6,7};
        CHECK(SwapResourceBytes(a, Endian(mode)));
        const uint32_t mask[] = {0,1,3,2};
        for (uint32_t i = 0; i < 8; ++i) CHECK(a[i] == (i ^ mask[mode]));
        CHECK(SwapResourceBytes(a, Endian(mode)));
        for (uint32_t i = 0; i < 8; ++i) CHECK(a[i] == i);
    }
    std::vector<uint8_t> output{99};
    const std::array<uint8_t,6> indices{0,0,0,1,1,2};
    CHECK(ConvertIndices(indices,1u<<29,2,output) == ConversionResult::Success);
    CHECK((output == std::vector<uint8_t>{0,0,1,0,2,1}));
    const auto saved = output;
    CHECK(ConvertIndices(indices,2u<<29,2,output) == ConversionResult::Unsupported && output == saved);
    CHECK(ConvertIndices(indices,0,4,output) == ConversionResult::InvalidLayout && output == saved);
    for (bool tiled : {false,true})
        for (uint32_t mode = 0; mode < 4; ++mode)
        {
            TextureLayout l{37,35,64,6,Identity,Endian(mode),tiled};
            size_t size = 0;
            CHECK(TextureSourceExtent(l,size) == ConversionResult::Success);
            std::vector<uint8_t> source(size,0xEF), expected(l.width*l.height*4);
            for (uint32_t y=0;y<l.height;++y) for (uint32_t x=0;x<l.width;++x)
            {
                std::array<uint8_t,4> pixel{uint8_t(x),uint8_t(y),uint8_t(x^y),255};
                std::copy(pixel.begin(),pixel.end(),expected.begin()+(y*l.width+x)*4);
                CHECK(SwapResourceBytes(pixel,l.endian));
                size_t off=tiled?size_t(ReferenceTiled(x,y,64,2)):(y*64+x)*4;
                std::copy(pixel.begin(),pixel.end(),source.begin()+off);
            }
            CHECK(ConvertTexture(l,source,expected.size(),output) == ConversionResult::Success && output==expected);
            CHECK(ConvertTexture(l,std::span(source).first(source.size()-1),expected.size(),output) == ConversionResult::Truncated && output==expected);
            CHECK(ConvertTexture(l,source,1,output) == ConversionResult::TooLarge && output==expected);
        }
    for (uint32_t format : {18u,19u,20u})
    {
        TextureLayout l{4,4,32,format,Identity,Endian::None,false};
        std::vector<uint8_t> source(format==18?8:16,0);
        const size_t color = format==18?0:8;
        source[color+1]=0xF8; source[color+2]=31;
        for (size_t i=4;i<8;++i) source[color+i]=0xE4;
        if (format==19) std::fill_n(source.begin(),8,0xF0);
        if (format==20) { source[0]=255; source[1]=0; source[2]=8; }
        CHECK(ConvertTexture(l,source,64,output)==ConversionResult::Success);
        CHECK(output[0]==255 && output[1]==0 && output[2]==0);
        CHECK(output[4]==0 && output[6]==255);
        CHECK(output[8]==170 && output[10]==85 && output[12]==85 && output[14]==170);
        if (format==19) CHECK(output[3]==0 && output[7]==255);
        if (format==20) CHECK(output[3]==255 && output[7]==0);
        if (format==18)
        {
            source[0]=source[1]=0; source[2]=source[3]=255; source[4]=255;
            CHECK(ConvertTexture(l,source,64,output)==ConversionResult::Success && output[3]==0);
        }
    }
    TextureLayout r8{1,1,32,2,Identity,Endian::None,false};
    CHECK(ConvertTexture(r8,std::array<uint8_t,1>{37},4,output)==ConversionResult::Success);
    CHECK((output==std::vector<uint8_t>{37,37,37,37}));
    std::array<uint32_t,6> fetch{2u | (2u<<22),6u,36u|(34u<<13),Identity<<1,0,1u<<9};
    TextureLayout decoded;
    CHECK(TextureLayout::Decode(fetch,decoded)==ConversionResult::Success && decoded.width==37 && decoded.height==35);
    for (auto field : {1,3,4,5})
    {
        auto unsupported=fetch;
        unsupported[field] |= field==1 ? 1<<10 : field==3 ? 1 : field==4 ? 1<<6 : 1<<11;
        CHECK(TextureLayout::Decode(unsupported,decoded)==ConversionResult::Unsupported);
    }
}
static void CaptureTests()
{
    constexpr uint32_t device=0x1000, vertex=0x5000, data=0x6000, texture=0x7000, texels=0x8000;
    std::vector<uint8_t> memory(0x9000);
    const auto store=[&](uint32_t address,uint32_t value){for(int i=0;i<4;++i)memory.at(address+i)=uint8_t(value>>(24-i*8));};
    constexpr uint32_t declaration=0x5800;
    store(device+12216,declaration); store(declaration,0x100005); store(declaration+24,1);
    store(declaration+52,0); store(declaration+56,0x2C83A4); store(declaration+60,0);
    store(device+12812,vertex); store(vertex+24,data|3); store(vertex+28,32|2);
    store(device+1776+17*8,(data+4)|3); store(device+1780+17*8,28|2);
    store(device+12880,1u<<24); // stream0 stride=4, big-endian byte array
    for (uint32_t i=0;i<32;++i) memory[data+i]=uint8_t(i);
    store(device+12896,texture); store(texture+32,texels|6);
    store(device+1152,2|(1<<22)); store(device+1156,texels|6);
    store(device+1160,1); store(device+1164,Identity<<1); store(device+1172,1<<9);
    const std::array<uint8_t,8> colors{255,0,0,255,0,255,0,255};
    std::copy(colors.begin(),colors.end(),memory.begin()+texels);
    CommandStream stream;
    stream.Enable(true,true);
    CHECK(stream.Capture({memory},device,DrawKind::Vertices,{4,0,2,0})==CaptureResult::Captured);
    std::fill(memory.begin()+data,memory.begin()+data+32,0);
    std::fill(memory.begin()+texels,memory.begin()+texels+8,0);
    auto batch=stream.Drain();
    CHECK(batch.draws.size()==1 && batch.payloadBytes==36);
    const auto& r=batch.draws[0].resources;
    CHECK(r.captured && r.status==ConversionResult::Success && r.vertices.size()==1 && r.textures.size()==1);
    CHECK(r.declaration.size()==1 && r.declaration[0].type==0x2C83A4 && r.declaration[0].stream==0 && r.declaration[0].offset==0);
    store(declaration+56,0xFFFFFFFF);
    CHECK(r.declaration[0].type==0x2C83A4); // immutable capture
    CHECK(r.vertices[0].stride==4 && r.vertices[0].bytes[0]==7 && r.vertices[0].bytes[3]==4);
    CHECK(std::equal(colors.begin(),colors.end(),r.textures[0].rgba.begin()));
    auto failed=ReadDrawResources({memory},batch.draws[0].state,1);
    CHECK(failed.status==ConversionResult::TooLarge && failed.payloadBytes==0 && failed.vertices.empty());
    store(device+1168,1<<6); // no silent mip truncation
    stream.Capture({memory},device,DrawKind::Vertices,{});
    auto bad=stream.Drain();
    CHECK(bad.draws[0].resources.status==ConversionResult::Unsupported && bad.draws[0].resources.failedTexture);
    CHECK(bad.payloadBytes==0);
}
static void SequentialIndexTests()
{
    std::vector<uint8_t> bytes{0xAA};
    CHECK(BuildSequentialIndices(2,3,5,12,bytes)==ConversionResult::Success);
    CHECK((bytes==std::vector<uint8_t>{0,0,0,0,1,0,0,0,2,0,0,0}));
    const auto original=bytes;
    CHECK(BuildSequentialIndices(2,3,4,12,bytes)==ConversionResult::InvalidLayout);
    CHECK(BuildSequentialIndices(0,0,4,12,bytes)==ConversionResult::InvalidLayout);
    CHECK(BuildSequentialIndices(UINT32_MAX,2,UINT32_MAX,12,bytes)==ConversionResult::InvalidLayout);
    CHECK(BuildSequentialIndices(0,4,4,15,bytes)==ConversionResult::TooLarge);
    CHECK(bytes==original);
}
int main()
{
    ConversionTests(); CaptureTests(); SequentialIndexTests();
    std::puts("Resource endian, tiled/linear RGBA/BC, bounded native vertex/texture ownership tests passed");
}
