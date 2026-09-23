#include <gpu/native_commands.h>
#include <cstdio>
#include <cstdlib>
#include <algorithm>
#define XXH_INLINE_ALL
#include <xxhash.h>
#define CHECK(x) do { if (!(x)) { std::fprintf(stderr,"FAIL %d: %s\n",__LINE__,#x); std::abort(); } } while(false)
using namespace GuestGpu;
static void Store(std::span<uint8_t> bytes, size_t offset, uint32_t value)
{ for(size_t i=0;i<4;++i) bytes[offset+i]=uint8_t(value>>(24-i*8)); }
int main()
{
    std::vector<uint8_t> memory(0xA000);
    constexpr uint32_t device=0x1000, resource=0x5000, physical=0x8000;
    for(uint32_t stage:{0u,4u})
    {
        std::fill(memory.begin(),memory.end(),0);
        std::array<uint8_t,80> container{};
        Store(container,0,0x102A1100 | (stage==0));
        Store(container,4,48); Store(container,8,32);
        for(size_t i=36;i<container.size();++i) container[i]=uint8_t(i*7);
        const uint32_t offset=stage==0?872:40;
        Store(memory,resource,stage==0?6:7);
        Store(memory,resource+(stage==0?32:24),physical);
        std::copy_n(container.begin(),48,memory.begin()+resource+offset);
        std::copy(container.begin()+48,container.end(),memory.begin()+physical);
        const auto hash=XXH3_64bits(container.data(),container.size());
        const auto identity=ReadShaderIdentity({memory},resource,stage);
        CHECK(identity.status==ShaderReadStatus::Success && identity.hash==hash && identity.stage==stage);
        Store(memory,device+(stage==0?13048:13044),resource);
        CommandStream stream; stream.Enable(true,true);
        CHECK(stream.Capture({memory},device,DrawKind::Vertices,{})==CaptureResult::Captured);
        auto batch=stream.Drain();
        const auto captured=stage==0?batch.draws[0].vertexShader:batch.draws[0].pixelShader;
        memory[physical]^=255;
        CHECK(captured.hash==hash);
        CHECK(ReadShaderIdentity({memory},resource,stage).hash!=hash);
        CHECK(ReadShaderIdentity({memory},resource,stage==0?4:0).status!=ShaderReadStatus::Success);
        Store(memory,resource+offset+4,UINT32_MAX);
        CHECK(ReadShaderIdentity({memory},resource,stage).status==ShaderReadStatus::TooLarge);
        Store(memory,resource+offset+4,48);
        Store(memory,resource+(stage==0?32:24),0xFFFFFFF0);
        CHECK(ReadShaderIdentity({memory},resource,stage).status==ShaderReadStatus::InvalidMemory);
        Store(memory,resource+offset,0);
        CHECK(ReadShaderIdentity({memory},resource,stage).status==ShaderReadStatus::InvalidContainer);
    }
    // Minimal bounded CTAB with sampler s2 and b0. Payload isn't a game shader.
    std::fill(memory.begin(),memory.end(),0);
    Store(memory,resource,7); Store(memory,resource+24,physical);
    const uint32_t base=resource+40;
    Store(memory,base,0x102A1100); Store(memory,base+4,160); Store(memory,base+8,32);
    Store(memory,base+16,36);
    Store(memory,base+40+12,2); Store(memory,base+40+16,28);
    Store(memory,base+68+4,(3u<<16)|2); Store(memory,base+68+8,1u<<16);
    Store(memory,base+88+4,0); Store(memory,base+88+8,1u<<16);
    auto reflected=ReadShaderIdentity({memory},resource,4);
    CHECK(reflected.status==ShaderReadStatus::Success && reflected.reflectionValid && reflected.samplerMask==4 && reflected.packedBooleansSupported);
    Store(memory,base+88+4,16);
    CHECK(!ReadShaderIdentity({memory},resource,4).packedBooleansSupported);
    Store(memory,base+88+4,0); Store(memory,base+88+8,65535u<<16);
    CHECK(!ReadShaderIdentity({memory},resource,4).packedBooleansSupported);
    Store(memory,base+68+4,(3u<<16)|16);
    CHECK(!ReadShaderIdentity({memory},resource,4).reflectionValid);
    Store(memory,base+40+16,UINT32_MAX);
    CHECK(!ReadShaderIdentity({memory},resource,4).reflectionValid);
    CHECK(ReadShaderIdentity({memory},0,0).status==ShaderReadStatus::Unbound);
    CHECK(ReadShaderIdentity({memory},resource+1,0).status==ShaderReadStatus::InvalidMemory);
    CHECK(ReadShaderIdentity({},resource,0).status==ShaderReadStatus::InvalidMemory);
    CHECK(ReadShaderIdentity({memory},0xFFFFFFF0,0).status==ShaderReadStatus::InvalidMemory);
    CHECK(ReadShaderIdentity({memory},resource,1).status==ShaderReadStatus::StageMismatch);
    std::puts("Native VS/PS split-container reconstruction, XXH3 identity and immutable binding capture passed");
}
