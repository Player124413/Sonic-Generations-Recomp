#pragma once
#include <gpu/native_commands.h>
#include <bit>
#include <vector>

// Synthetic descriptors matching guarded PPC constructor/reader instructions.
// No title assets and no inferred host object pointers.
struct NativeFrameFixture
{
    static constexpr uint32_t Device=0x1000, SurfaceA=0x6000, SurfaceB=0x6040;
    static constexpr uint32_t TextureA=0x6100, TextureB=0x6140, Rect=0x6200, Color=0x6240;
    std::vector<uint8_t> memory=std::vector<uint8_t>(0x8000);
    GuestGpu::CommandStream stream;
    void Word(uint32_t at,uint32_t value)
    { for(unsigned i=0;i<4;++i) memory.at(at+i)=uint8_t(value>>(24-i*8)); }
    void Surface(uint32_t address,uint32_t tile)
    {
        Word(address,4); Word(address+24,(64<<18)|80); Word(address+28,tile);
        Word(address+36,(63<<18)|(63<<3)); Word(address+40,6); Word(address+44,4*5120);
    }
    void Texture(uint32_t address,uint32_t physical)
    {
        Word(address,0x100003); Word(address+28,2|(2<<22)); Word(address+32,physical|6);
        Word(address+36,63|(63<<13)); Word(address+40,(0|(1<<3)|(2<<6)|(3<<9))<<1);
        Word(address+48,1<<9);
    }
    NativeFrameFixture()
    {
        Surface(SurfaceA,0); Surface(SurfaceB,4);
        Texture(TextureA,0x100000); Texture(TextureB,0x110000);
        Word(Device+13008,std::bit_cast<uint32_t>(64.f)); Word(Device+13012,std::bit_cast<uint32_t>(64.f));
        Word(Rect+8,64); Word(Rect+12,64);
        stream.Enable(true,true);
    }
    GuestGpu::CaptureResult Clear(uint32_t surface,std::array<float,4> color)
    {
        Word(Device+12792,surface);
        uint32_t info=0; for(unsigned i=0;i<4;++i) info=(info<<8)|memory.at(surface+28+i);
        Word(Device+10372,info);
        for(unsigned i=0;i<4;++i) Word(Color+i*4,std::bit_cast<uint32_t>(color[i]));
        return stream.CaptureClear({memory},Device,1,Rect,Color,1,0);
    }
    GuestGpu::CaptureResult Resolve(uint32_t surface,uint32_t texture)
    {
        Word(Device+12792,surface);
        uint32_t info=0; for(unsigned i=0;i<4;++i) info=(info<<8)|memory.at(surface+28+i);
        Word(Device+10372,info);
        return stream.CaptureResolve({memory},Device,{0,0,texture,0,0,0});
    }
    GuestGpu::NativeBatch Frame(uint32_t backbuffer)
    { stream.SelectBackbuffer({memory},Device,backbuffer); return stream.Drain(); }
};
