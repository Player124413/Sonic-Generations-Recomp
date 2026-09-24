#pragma once
#include <smolv.h>

// Original ABI test shaders, never shipped as substitutes for game modules.
// Encode through the same SMOL-V/Zstd envelope consumed by the real backend.
struct SamplingShaderCache
{
    static constexpr uint64_t Vertex=0xF100000000000001ull, Pixel=Vertex+1;
    std::array<ShaderCacheEntry,2> entries{};
    std::vector<uint8_t> compressed;
    size_t decodedBytes=0;
    SamplingShaderCache()
    {
        std::vector<uint8_t> packed;
        size_t i=0;
        for(auto name:{"game_abi.vert.spv","game_abi.frag.spv"})
        {
            auto words=ReadShader(name);
            smolv::ByteArray encoded;
            CHECK(smolv::Encode(words.data(),words.size()*4,encoded));
            entries[i]={Vertex+i,0,0,uint32_t(packed.size()),uint32_t(encoded.size()),0,0,0,nullptr};
            packed.insert(packed.end(),encoded.begin(),encoded.end()); ++i;
        }
        CHECK(!packed.empty() && packed.size()<128*1024);
        decodedBytes=packed.size();
        // Zstandard single-segment frame with a four-byte content size and one
        // final raw block. No extra encoder/library and no alternate loader.
        compressed={0x28,0xB5,0x2F,0xFD,0xA0};
        for(unsigned b=0;b<4;++b) compressed.push_back(uint8_t(decodedBytes>>(8*b)));
        const auto block=(uint32_t(decodedBytes)<<3)|1;
        for(unsigned b=0;b<3;++b) compressed.push_back(uint8_t(block>>(8*b)));
        compressed.insert(compressed.end(),packed.begin(),packed.end());
    }
    GuestGpu::ShaderCacheData Data() const
    { return {entries,compressed,entries.size(),compressed.size(),decodedBytes}; }
};
static void NativeResolvedSamplingTests(SDL_Window* window)
{
    using namespace GuestGpu;
    SamplingShaderCache shaders;
    VulkanBackend backend(window,true,true);
    CHECK(backend.InitWithShaderCache(VideoMode{64,64},shaders.Data()));
    NativeFrameFixture f;
    CHECK(f.Clear(f.SurfaceA,{1,0,0,1})==CaptureResult::Captured);
    CHECK(f.Resolve(f.SurfaceA,f.TextureA)==CaptureResult::Captured);
    CHECK(f.Clear(f.SurfaceA,{0,0,1,1})==CaptureResult::Captured);
    CHECK(f.Clear(f.SurfaceB,{0,1,0,1})==CaptureResult::Captured);
    CHECK(f.Resolve(f.SurfaceB,f.TextureB)==CaptureResult::Captured);
    auto batch=f.Frame(f.TextureB);
    batch.resolves.back().sequence=5;
    NativeDraw draw;
    draw.kind=DrawKind::IndexedVertices; draw.sequence=4; draw.device=f.Device; draw.arguments={4,0,0,3};
    draw.state=batch.clears.back().state; draw.targets=batch.clears.back().targets;
    draw.state.words[13048/4]=0x7000; draw.state.words[13044/4]=0x7040;
    draw.vertexShader={0x7000,0,SamplingShaderCache::Vertex,ShaderReadStatus::Success,0,true,true};
    draw.pixelShader={0x7040,4,SamplingShaderCache::Pixel,ShaderReadStatus::Success,1,true,true};
    draw.state.words[12812/4]=0x7100; draw.state.words[12788/4]=0x7200; draw.state.words[12216/4]=0x7300;
    draw.state.words[10460/4]=15;
    for(auto offset:{10552,10584,10588,10592}) draw.state.words[offset/4]=0x10001;
    const std::array<float,6> viewport{16,8,32,40,0,1};
    for(size_t i=0;i<viewport.size();++i) draw.state.words[13000/4+i]=std::bit_cast<uint32_t>(viewport[i]);
    // A disabled scissor must not clip to stale/invalid rectangle contents.
    draw.state.words[12264/4]=0;
    for(size_t i=0;i<4;++i) draw.state.words[13028/4+i]=uint32_t(-10);
    for(size_t i=0;i<4;++i) draw.state.words[(1920+4096)/4+i]=std::bit_cast<uint32_t>(1.f);
    draw.resources.captured=true; draw.resources.status=ConversionResult::Success;
    draw.resources.declaration.push_back({0,0,0x2C23A5,0,0,0});
    VertexSnapshot vertices; vertices.resource=0x7100; vertices.stride=8;
    const std::array<float,6> triangle{-1,-1,3,-1,-1,3};
    vertices.bytes.resize(sizeof(triangle)); std::memcpy(vertices.bytes.data(),triangle.data(),sizeof(triangle));
    draw.resources.vertices.push_back(std::move(vertices));
    draw.indices.resource=0x7200; draw.indices.count=3; draw.indices.stride=2; draw.indices.bytes={0,0,1,0,2,0};
    const auto source=ReadTexture({f.memory},f.TextureA);
    CHECK(source.status==ConversionResult::Success);
    TextureSnapshot texture;
    texture.slot=0; texture.resource=f.TextureA; texture.width=64; texture.height=64;
    texture.physical=source.physical; texture.fetch=source.fetch;
    texture.fetch[0]|=(2<<10)|(2<<13); // clamp sampler doesn't change texture storage identity
    texture.rgba.resize(64*64*4);
    for(size_t i=0;i<texture.rgba.size();i+=4) {texture.rgba[i+2]=255;texture.rgba[i+3]=255;}
    draw.state.words[12896/4]=f.TextureA;
    for(size_t i=0;i<6;++i) draw.state.words[1152/4+i]=texture.fetch[i];
    draw.resources.textures.push_back(std::move(texture));
    draw.resources.payloadBytes=sizeof(triangle)+64*64*4;
    batch.draws.push_back(std::move(draw));
    CHECK(backend.SubmitGuestBatch(batch)==SubmissionResult::Submitted);
    std::vector<uint8_t> pixels;
    CHECK(backend.ReadDiagnosticFrame(pixels) && pixels.size()==64*64*4);
    const auto pixel=[&](unsigned x,unsigned y,std::array<uint8_t,4> expected) {
        for(size_t c=0;c<4;++c) CHECK(pixels[(y*64+x)*4+c]==expected[c]);
    };
    pixel(32,24,{255,0,0,255}); // resolved A, not blue CPU snapshot or post-resolve clear
    pixel(0,0,{0,255,0,255}); // outside the offset viewport, B clear survives
    pixel(55,24,{0,255,0,255});
    if(window) { backend.Present(); CHECK(backend.GetHostStats().presents==1); }
    auto clipped=batch;
    auto& state=clipped.draws[0].state;
    state.words[12264/4]=1;
    const std::array<uint32_t,4> scissor{32,16,48,40};
    for(size_t i=0;i<4;++i) state.words[13028/4+i]=scissor[i];
    CHECK(backend.SubmitGuestBatch(clipped)==SubmissionResult::Submitted);
    CHECK(backend.ReadDiagnosticFrame(pixels));
    pixel(24,24,{0,255,0,255}); pixel(40,24,{255,0,0,255});
    clipped.draws[0].state.words[13008/4]=std::bit_cast<uint32_t>(80.f); // exceeds target
    CHECK(backend.SubmitGuestBatch(clipped)==SubmissionResult::Incomplete);
    CHECK(!backend.ReadDiagnosticFrame(pixels) && pixels.empty());
    batch.draws[0].pixelShader.hash++; // no fixture/first-entry fallback on unknown hash
    CHECK(backend.SubmitGuestBatch(batch)==SubmissionResult::Incomplete);
    CHECK(!backend.ReadDiagnosticFrame(pixels));
    CHECK(backend.GetHostStats().validationErrors==0);
    backend.Shutdown(); CHECK(backend.GetHostStats().allocatedBytes==0);
    std::puts("Native resolve -> sampled descriptor -> viewport/scissor draw -> second resolve/backbuffer pixels passed");
}
