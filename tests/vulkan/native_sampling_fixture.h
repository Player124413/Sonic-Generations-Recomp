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
    // Native D24S8 is an independent EDRAM allocation, not a D32 proxy tied
    // to one color target. Test actual depth rejection and stencil preservation.
    constexpr uint32_t depthResource=0x6080;
    f.Surface(depthResource,8); f.Word(depthResource+40,22); // D24S8 texture format
    const auto ds=ReadSurface({f.memory},depthResource);
    CHECK(ds.status==ConversionResult::Success);
    auto depthBatch=batch;
    const auto attach=[&](auto& command) {
        command.state.words[12808/4]=depthResource;
        command.state.words[10376/4]=ds.descriptor[1];
        command.targets.surfaces[4]=ds;
    };
    attach(depthBatch.clears.back()); attach(depthBatch.draws[0]); attach(depthBatch.resolves.back());
    depthBatch.clears.back().flags=0x31;
    depthBatch.clears.back().depth=0.75f; depthBatch.clears.back().stencil=3;
    auto& depthState=depthBatch.draws[0].state;
    const auto render=[&](const NativeBatch& input,std::array<uint8_t,4> expected) {
        CHECK(backend.SubmitGuestBatch(input)==SubmissionResult::Submitted);
        CHECK(backend.ReadDiagnosticFrame(pixels)); pixel(32,24,expected);
        pixel(0,0,{0,255,0,255});
    };
    const std::array<bool,8> depthPass{false,true,false,true,false,true,false,true};
    for(uint32_t compare=0;compare<8;++compare) {
        depthState.words[10548/4]=2 | (compare<<4);
        render(depthBatch,depthPass[compare] ? std::array<uint8_t,4>{255,0,0,255} : std::array<uint8_t,4>{0,255,0,255});
    }
    // First draw writes 0.5; a second LESS draw at the same depth must fail.
    depthState.words[10548/4]=2|4|(1<<4);
    auto twoDraws=depthBatch;
    twoDraws.draws.push_back(twoDraws.draws[0]); twoDraws.draws.back().sequence=5;
    twoDraws.resolves.back().sequence=6;
    twoDraws.draws.back().state.words[(1920+4096)/4]=0; // black instead of red if it passes
    render(twoDraws,{255,0,0,255});
    twoDraws.draws.back().state.words[10548/4]=2|(3<<4); // LEQUAL must pass stored depth
    render(twoDraws,{0,0,0,255});
    // Stencil equality, compare mask, then write mask and LOAD across draws.
    depthState.words[10548/4]=1|(2<<8);
    depthState.words[10496/4]=0x00FFFF03;
    render(depthBatch,{255,0,0,255});
    depthState.words[10496/4]=0x00FFFF04;
    render(depthBatch,{0,255,0,255});
    depthState.words[10496/4]=0x00FF0F13; // mask hides the high reference bit
    render(depthBatch,{255,0,0,255});
    auto stencilBatch=depthBatch;
    stencilBatch.draws[0].state.words[10548/4]=1|(7<<8)|(2<<14); // ALWAYS, REPLACE on pass
    stencilBatch.draws[0].state.words[10496/4]=0x000FFF17; // write low nibble only -> 7
    stencilBatch.draws.push_back(stencilBatch.draws[0]);
    stencilBatch.draws.back().sequence=5; stencilBatch.resolves.back().sequence=6;
    stencilBatch.draws.back().state.words[10548/4]=1|(2<<8);
    stencilBatch.draws.back().state.words[10496/4]=0x0000FF07;
    stencilBatch.draws.back().state.words[(1920+4096)/4]=0;
    render(stencilBatch,{0,0,0,255});
    // Depth-only clear between stencil write and test must retain the stencil.
    auto depthOnly=stencilBatch.clears.back(); depthOnly.flags=0x10; depthOnly.sequence=5;
    stencilBatch.clears.push_back(depthOnly);
    stencilBatch.draws.back().sequence=6; stencilBatch.resolves.back().sequence=7;
    render(stencilBatch,{0,0,0,255});
    // Partial depth clear must retain stencil both inside and outside its region.
    stencilBatch.clears.back().rectangle={24,16,40,32};
    render(stencilBatch,{0,0,0,255}); pixel(20,24,{0,0,0,255});
    // Partial stencil clear must preserve the remainder of that same aspect.
    stencilBatch.clears.back().flags=0x20; stencilBatch.clears.back().stencil=8;
    stencilBatch.draws.back().state.words[10496/4]=0x0000FF08;
    render(stencilBatch,{0,0,0,255}); pixel(20,24,{255,0,0,255});
    // A partial depth-only clear changes the depth test only in its rectangle.
    auto partialDepth=twoDraws;
    auto cut=partialDepth.clears.back(); cut.flags=0x10; cut.depth=0.25f;
    cut.rectangle={24,16,40,32}; cut.sequence=5;
    partialDepth.clears.push_back(cut);
    partialDepth.draws.back().sequence=6; partialDepth.resolves.back().sequence=7;
    render(partialDepth,{255,0,0,255}); pixel(20,24,{0,0,0,255});
    // The first draw wrote depth while B was bound. Rebinding A must retain it.
    auto switched=twoDraws;
    auto& second=switched.draws.back();
    second.state.words[10548/4]=2|(1<<4);
    second.targets.surfaces[0]=switched.clears[0].targets.surfaces[0];
    second.state.words[12792/4]=f.SurfaceA;
    second.state.words[10372/4]=second.targets.surfaces[0].descriptor[1];
    switched.resolves.back().targets=second.targets;
    switched.resolves.back().state=second.state;
    switched.resolves.back().destination=ReadTexture({f.memory},f.TextureA);
    switched.backbuffer=switched.resolves.back().destination;
    CHECK(backend.SubmitGuestBatch(switched)==SubmissionResult::Submitted);
    CHECK(backend.ReadDiagnosticFrame(pixels)); pixel(32,24,{0,0,255,255});
    // The other face has independent compare/masks when two-sided is enabled.
    for(uint32_t clockwise=0;clockwise<2;++clockwise) {
        depthState.words[10568/4]=clockwise ? 4 : 0;
        depthState.words[10548/4]=1|128|(2<<8)|(2<<20);
        depthState.words[10496/4]=0x00FFFF03;
        depthState.words[10492/4]=0x00FFFF03;
        render(depthBatch,{255,0,0,255});
        depthState.words[10496/4]=0x00FFFF04;
        depthState.words[10492/4]=0x00FFFF04;
        render(depthBatch,{0,255,0,255});
    }
    depthState.words[10496/4]=0x00FFFF03;
    depthState.words[10492/4]=0x00FFFF04;
    depthState.words[10568/4]=0;
    CHECK(backend.SubmitGuestBatch(depthBatch)==SubmissionResult::Submitted);
    CHECK(backend.ReadDiagnosticFrame(pixels)); const auto frontRed=pixels[(24*64+32)*4];
    depthState.words[10568/4]=4;
    CHECK(backend.SubmitGuestBatch(depthBatch)==SubmissionResult::Submitted);
    CHECK(backend.ReadDiagnosticFrame(pixels)); CHECK(pixels[(24*64+32)*4]==255-frontRed);
    auto unsupportedDepth=depthBatch;
    for(auto* descriptor:{&unsupportedDepth.clears.back().targets.surfaces[4],
                         &unsupportedDepth.draws[0].targets.surfaces[4],
                         &unsupportedDepth.resolves.back().targets.surfaces[4]}) {
        descriptor->format=1; descriptor->descriptor[1]|=1<<16; // D24FS8 is not D24S8
    }
    for(auto* commandState:{&unsupportedDepth.clears.back().state,&unsupportedDepth.draws[0].state,&unsupportedDepth.resolves.back().state})
        commandState->words[10376/4]|=1<<16;
    CHECK(backend.SubmitGuestBatch(unsupportedDepth)==SubmissionResult::Incomplete);
    CHECK(!backend.ReadDiagnosticFrame(pixels));
    // No synthetic depth initialization after the failed frame invalidates state.
    auto undefinedDepth=depthBatch; undefinedDepth.clears.back().flags=1;
    CHECK(backend.SubmitGuestBatch(undefinedDepth)==SubmissionResult::Incomplete);
    CHECK(!backend.ReadDiagnosticFrame(pixels));
    undefinedDepth=depthBatch; undefinedDepth.clears.back().flags=0x21; // stencil initialized, depth isn't
    undefinedDepth.draws[0].state.words[10548/4]=2|(1<<4);
    CHECK(backend.SubmitGuestBatch(undefinedDepth)==SubmissionResult::Incomplete);
    undefinedDepth=depthBatch; undefinedDepth.clears.back().flags=0x11; // depth initialized, stencil isn't
    CHECK(backend.SubmitGuestBatch(undefinedDepth)==SubmissionResult::Incomplete);
    undefinedDepth=depthBatch; undefinedDepth.clears.back().rectangle={24,16,40,32};
    // Initialize color separately so this checks the depth/stencil aspect guard.
    auto colorInit=undefinedDepth.clears.back(); colorInit.flags=1; colorInit.rectangle={0,0,64,64};
    colorInit.sequence=3; undefinedDepth.clears.back().sequence=4;
    undefinedDepth.clears.push_back(colorInit);
    undefinedDepth.draws[0].sequence=5; undefinedDepth.resolves.back().sequence=6;
    CHECK(backend.SubmitGuestBatch(undefinedDepth)==SubmissionResult::Incomplete);
    std::puts("Native D24S8 depth compares/writes, stencil masks, preserved aspects and two-sided state passed");
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
