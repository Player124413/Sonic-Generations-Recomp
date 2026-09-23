#include <gpu/vulkan_host.h>
#include <gpu/vulkan_backend.h>
#include <gpu/vulkan_state.h>
#include <SDL.h>
#include <SDL_vulkan.h>
#include <bit>
#include <algorithm>
#include <array>
#include <cmath>
#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <limits>
#include <fstream>

#define CHECK(x) do { if (!(x)) { std::fprintf(stderr, "FAIL %d: %s\n", __LINE__, #x); std::exit(1); } } while (false)
using namespace HostGpu;

static void StateTests()
{
    GuestGpu::NativeState input;
    input.words[10548 / 4] = 2 | 4 | (3 << 4);
    input.words[10568 / 4] = 2 | 4;
    for (auto offset : {10552, 10584, 10588, 10592}) input.words[offset / 4] = 0x10001;
    auto state = DecodeFixedState(input);
    CHECK(state.depth.depthTestEnable && state.depth.depthWriteEnable);
    CHECK(state.depth.depthCompareOp == VK_COMPARE_OP_LESS_OR_EQUAL);
    CHECK(state.raster.cullMode == VK_CULL_MODE_BACK_BIT);
    CHECK(state.raster.frontFace == VK_FRONT_FACE_CLOCKWISE);
    CHECK(!state.blend[0].blendEnable && !state.invalidBlend);
    CHECK(!state.unsupportedRasterBits && !state.requiresStencil);
    input.words[10552 / 4] = 6 | (7 << 8) | (1 << 16) | (4 << 21);
    state = DecodeFixedState(input);
    CHECK(state.blend[0].blendEnable);
    CHECK(state.blend[0].srcColorBlendFactor == VK_BLEND_FACTOR_SRC_ALPHA);
    CHECK(state.blend[0].dstColorBlendFactor == VK_BLEND_FACTOR_ONE_MINUS_SRC_ALPHA);
    CHECK(state.blend[0].alphaBlendOp == VK_BLEND_OP_REVERSE_SUBTRACT);
    input.words[10552 / 4] = 31;
    input.words[10548 / 4] |= 1;
    input.words[10556 / 4] = 8 | 16;
    input.words[10568 / 4] |= (1 << 15);
    state = DecodeFixedState(input);
    CHECK(state.invalidBlend && state.requiresStencil && state.requiresAlphaTest && state.requiresAlphaToCoverage);
    CHECK(state.unsupportedRasterBits == (1 << 15));
}
static std::vector<uint32_t> ReadShader(const char* name)
{
    const std::string path = std::string(VULKAN_TEST_SHADER_DIRECTORY) + "/" + name;
    std::ifstream file(path, std::ios::binary | std::ios::ate);
    CHECK(file.good());
    const auto size = file.tellg();
    CHECK(size > 0 && size % 4 == 0);
    std::vector<uint32_t> words(size_t(size) / 4);
    file.seekg(0); file.read(reinterpret_cast<char*>(words.data()), size);
    CHECK(file.good());
    return words;
}
static void GraphicsTests(VulkanHost& host)
{
    const auto vs = ReadShader("triangle.vert.spv"), fs = ReadShader("triangle.frag.spv");
    struct Vertex { float x, y, r, g, b, a; };
    const std::array<Vertex, 3> vertices{{{-0.8f, -0.8f, 1, 0, 0, 1}, {0.8f, -0.8f, 1, 0, 0, 1}, {0, 0.8f, 1, 0, 0, 1}}};
    const std::array<uint16_t, 3> indices{0, 1, 2};
    const auto vb = host.CreateBuffer(sizeof(vertices), VK_BUFFER_USAGE_VERTEX_BUFFER_BIT, true);
    const auto ib = host.CreateBuffer(sizeof(indices), VK_BUFFER_USAGE_INDEX_BUFFER_BIT, true);
    CHECK(vb && ib);
    std::vector<uint8_t> vertexBytes(reinterpret_cast<const uint8_t*>(vertices.data()),
        reinterpret_cast<const uint8_t*>(vertices.data()) + sizeof(vertices));
    // Encode guest big-endian float words independently of the converter.
    for (size_t offset=0; offset<vertexBytes.size(); offset+=4)
    {
        uint32_t word; std::memcpy(&word,vertexBytes.data()+offset,4);
        for (size_t byte=0;byte<4;++byte) vertexBytes[offset+byte]=uint8_t(word>>(24-byte*8));
    }
    CHECK(GuestGpu::SwapResourceBytes(vertexBytes, GuestGpu::Endian::Swap8In32));
    std::vector<uint8_t> indexBytes;
    CHECK(GuestGpu::ConvertIndices(std::array<uint8_t,6>{0,0,0,1,0,2}, 1u<<29, 2, indexBytes) == GuestGpu::ConversionResult::Success);
    CHECK(host.WriteBuffer(vb, vertexBytes));
    CHECK(host.WriteBuffer(ib, indexBytes));
    const auto color = host.CreateImage(32, 32, ImageKind::Rgba8);
    const auto depth = host.CreateImage(32, 32, ImageKind::Depth32);
    CHECK(color && depth);
    GuestGpu::NativeState native;
    native.words[10548 / 4] = 2 | 4 | (1 << 4); // depth test/write, LESS
    const auto state = DecodeFixedState(native);
    const std::array<VkVertexInputAttributeDescription, 2> attributes{{{0, 0, VK_FORMAT_R32G32_SFLOAT, 0}, {1, 0, VK_FORMAT_R32G32B32A32_SFLOAT, 8}}};
    GraphicsPipelineInfo info;
    info.vertexStride = sizeof(Vertex); info.attributes = attributes;
    CHECK(!host.CreateGraphicsPipeline(info)); // no dummy-shader success
    info.vertexShader = vs; info.fragmentShader = fs;
    info.depthTest = state.depth.depthTestEnable; info.depthWrite = state.depth.depthWriteEnable;
    info.depthCompare = state.depth.depthCompareOp; info.cullMode = state.raster.cullMode;
    info.frontFace = state.raster.frontFace;
    const auto pipeline = host.CreateGraphicsPipeline(info);
    CHECK(pipeline);
    CHECK(host.DrawIndexed(pipeline, color, depth, vb, ib, 3, VK_INDEX_TYPE_UINT16, {0, 0, 0, 1}));
    CHECK(!host.DrawIndexed(pipeline, color, depth, vb, ib, 6, VK_INDEX_TYPE_UINT16, {0, 0, 0, 1}));
    CHECK(host.Stats().indexedDraws == 1 && host.Stats().pipelinesCreated == 1);
    std::vector<uint8_t> pixels;
    CHECK(host.ReadImage(color, pixels));
    const size_t center = (16 * 32 + 16) * 4;
    CHECK(pixels[center] == 255 && pixels[center + 1] == 0 && pixels[center + 2] == 0 && pixels[center + 3] == 255);
    CHECK(pixels[0] == 0 && pixels[1] == 0 && pixels[2] == 0 && pixels[3] == 255);
    CHECK(host.ReadImage(depth, pixels));
    float centerDepth, cornerDepth;
    std::memcpy(&centerDepth, pixels.data() + center, 4);
    std::memcpy(&cornerDepth, pixels.data(), 4);
    CHECK(centerDepth == 0.5f && cornerDepth == 1.0f);
    CHECK(host.Destroy(vb) && host.Destroy(ib) && host.Destroy(color) && host.Destroy(depth) && host.Destroy(pipeline));
    CHECK(!host.DrawIndexed(pipeline, color, depth, vb, ib, 3, VK_INDEX_TYPE_UINT16, {0, 0, 0, 1}));
    std::puts("Actual vkCmdDrawIndexed: triangle color/depth readback matches expected pixels");
}
static void GameAbiTests(VulkanHost& host, bool present = false)
{
    // This is an ABI fixture, not a replacement for any game shader.
    CHECK(host.SupportsGenerationsAbi());
    auto vs=ReadShader("game_abi.vert.spv"), ps=ReadShader("game_abi.frag.spv");
    const std::array<float,6> vertices{-0.8f,-0.8f,0.8f,-0.8f,0,0.8f};
    const std::array<uint16_t,3> indices{0,1,2};
    auto vb=host.CreateBuffer(sizeof(vertices),VK_BUFFER_USAGE_VERTEX_BUFFER_BIT,true);
    auto ib=host.CreateBuffer(sizeof(indices),VK_BUFFER_USAGE_INDEX_BUFFER_BIT,true);
    auto constants=host.CreateBuffer(8192,VK_BUFFER_USAGE_STORAGE_BUFFER_BIT|VK_BUFFER_USAGE_SHADER_DEVICE_ADDRESS_BIT,true);
    auto shared=host.CreateBuffer(320,VK_BUFFER_USAGE_STORAGE_BUFFER_BIT|VK_BUFFER_USAGE_SHADER_DEVICE_ADDRESS_BIT,true);
    auto color=host.CreateImage(32,32,ImageKind::Rgba8), depth=host.CreateImage(32,32,ImageKind::Depth32);
    auto texture=host.CreateImage(1,1,ImageKind::Rgba8);
    CHECK(vb && ib && constants && shared && color && depth && texture);
    CHECK(host.WriteBuffer(vb,{reinterpret_cast<const uint8_t*>(vertices.data()),sizeof(vertices)}));
    CHECK(host.WriteBuffer(ib,{reinterpret_cast<const uint8_t*>(indices.data()),sizeof(indices)}));
    std::array<uint8_t,8192> data{};
    const std::array<float,4> tint{0.5f,1,0.25f,1}; std::memcpy(data.data()+4096,tint.data(),16);
    CHECK(host.WriteBuffer(constants,data));
    std::array<uint8_t,320> sharedData{}; sharedData[0]=3; sharedData[192]=3; CHECK(host.WriteBuffer(shared,sharedData));
    CHECK(host.UploadRgba(texture,std::array<uint8_t,4>{255,128,0,255}));
    CHECK(host.ClearColor(color,{0,0,1,1}) && host.ClearDepth(depth,1));
    const std::array<VkVertexInputAttributeDescription,1> attributes{{{0,0,VK_FORMAT_R32G32_SFLOAT,0}}};
    GraphicsPipelineInfo info; info.vertexShader=vs; info.fragmentShader=ps; info.vertexStride=8;
    info.attributes=attributes; info.generationsAbi=true; info.preserveTargets=true; info.blend.colorWriteMask=15;
    auto pipeline=host.CreateGraphicsPipeline(info); CHECK(pipeline);
    const std::array<GameTextureBinding,1> textures{{{3,texture}}};
    GameDrawBindings game; game.constants=constants; game.shared=shared; game.textures=textures;
    game.viewport={0,0,32,32,0,1}; game.scissor={{0,0},{32,32}};
    CHECK(host.DrawIndexed(pipeline,color,depth,vb,ib,3,VK_INDEX_TYPE_UINT16,{0,0,0,1},&game));
    std::vector<uint8_t> result; CHECK(host.ReadImage(color,result));
    size_t center=(16*32+16)*4;
    CHECK(std::abs(int(result[center])-128)<=1 && result[center+1]==128 && result[center+2]==0 && result[center+3]==255);
    CHECK(result[0]==0 && result[1]==0 && result[2]==255); // LOAD, not per-draw clear
    if(present) { CHECK(host.PresentImage(color)); CHECK(host.Stats().presents==1); }
    const auto first=result; game.scissor={{0,0},{0,0}};
    CHECK(host.DrawIndexed(pipeline,color,depth,vb,ib,3,VK_INDEX_TYPE_UINT16,{1,0,0,1},&game));
    CHECK(host.ReadImage(color,result) && result==first);
    game.shared=vb;
    CHECK(!host.DrawIndexed(pipeline,color,depth,vb,ib,3,VK_INDEX_TYPE_UINT16,{0,0,0,1},&game));
    for(auto id:{pipeline,vb,ib,constants,shared,color,depth,texture}) CHECK(host.Destroy(id));
    std::puts("Game ABI: device-address constants, descriptor textures/samplers, push constants and indexed draw pixels passed");
}
static void NativeGameShaderDrawTest()
{
    GuestGpu::ShaderCache cache; std::string error;
    CHECK(cache.Initialize(GuestGpu::GetEmbeddedShaderCache(),error));
    GuestGpu::ShaderModule vs,ps;
    for(const auto& entry:cache.Entries())
    {
        GuestGpu::ShaderModule module; CHECK(cache.Decode(entry.hash,module,error));
        if(!module.bindings.empty()) continue;
        if(!vs.hash && module.stage==0 && !module.inputLocations.empty() &&
            std::all_of(module.inputLocations.begin(),module.inputLocations.end(),[](auto loc){return loc<=8 || loc==10 || loc==11;})) vs=std::move(module);
        else if(!ps.hash && module.stage==4 && module.inputLocations.empty()) ps=std::move(module);
        if(vs.hash && ps.hash) break;
    }
    CHECK(vs.hash && ps.hash);
    // Fabricated device snapshot, but genuine modules from the user's game cache.
    // This tests native-batch dispatch, not actual in-game object association.
    GuestGpu::NativeBatch batch; batch.draws.emplace_back(); auto& draw=batch.draws[0];
    draw.kind=GuestGpu::DrawKind::IndexedVertices; draw.arguments={4,0,0,3};
    draw.state.words[13048/4]=0x5000; draw.state.words[13044/4]=0x6000;
    draw.vertexShader={0x5000,0,vs.hash,GuestGpu::ShaderReadStatus::Success,0,true,true};
    draw.pixelShader={0x6000,4,ps.hash,GuestGpu::ShaderReadStatus::Success,0,true,true};
    draw.state.words[12812/4]=0x8000; draw.state.words[12788/4]=0x9000; draw.state.words[12216/4]=0xA000;
    draw.state.words[12792/4]=0x7000; draw.state.words[10460/4]=15;
    for(auto offset:{10552,10584,10588,10592}) draw.state.words[offset/4]=0x10001;
    const std::array<float,6> viewport{0,0,64,64,0,1};
    for(size_t i=0;i<6;++i) draw.state.words[13000/4+i]=std::bit_cast<uint32_t>(viewport[i]);
    draw.state.words[13028/4+2]=64; draw.state.words[13028/4+3]=64;
    draw.resources.captured=true; draw.resources.status=GuestGpu::ConversionResult::Success;
    GuestGpu::VertexSnapshot vertices; vertices.resource=0x8000; vertices.stride=uint32_t(vs.inputLocations.size())*16;
    vertices.bytes.resize(vertices.stride*3);
    for(size_t i=0;i<vs.inputLocations.size();++i)
    {
        auto loc=vs.inputLocations[i]; uint32_t usage=0,index=0;
        if(loc==1) usage=3; else if(loc==2) usage=6; else if(loc==3) usage=7;
        else if(loc>=4 && loc<=7) {usage=5;index=loc-4;}
        else if(loc==8 || loc==11) {usage=10;index=loc==11;}
        else if(loc==10) usage=1;
        draw.resources.declaration.push_back({0,uint32_t(i)*16,0x1A23A6,usage,index,0});
    }
    draw.resources.vertices.push_back(std::move(vertices));
    draw.indices.resource=0x9000; draw.indices.count=3; draw.indices.stride=2; draw.indices.bytes={0,0,1,0,2,0};
    draw.resources.payloadBytes=draw.resources.vertices[0].bytes.size(); batch.payloadBytes=draw.resources.payloadBytes+6;
    VulkanBackend backend(nullptr,true,true); CHECK(backend.Init(VideoMode{64,64}));
    CHECK(backend.SubmitGuestBatch(batch)==GuestGpu::SubmissionResult::Submitted);
    CHECK(backend.GetHostStats().indexedDraws==1 && backend.GetHostStats().pipelinesCreated==1);
    draw.sequence=1;
    GuestGpu::NativeClear clear;
    clear.state=draw.state; clear.device=draw.device; clear.flags=1;
    clear.rectangle={0,0,64,64}; clear.color={0,1,0,1};
    batch.clears.push_back(clear);
    CHECK(backend.SubmitGuestBatch(batch)==GuestGpu::SubmissionResult::Submitted);
    std::vector<uint8_t> pixels;
    CHECK(backend.ReadDiagnosticFrame(pixels) && pixels.size()==64*64*4);
    for(size_t i=0;i<pixels.size();i+=4)
        CHECK(pixels[i]==0 && pixels[i+1]==255 && pixels[i+2]==0 && pixels[i+3]==255);
    clear.sequence=2; clear.color={1,0,0,1}; batch.clears.push_back(clear);
    CHECK(backend.SubmitGuestBatch(batch)==GuestGpu::SubmissionResult::Submitted);
    CHECK(backend.ReadDiagnosticFrame(pixels));
    for(size_t i=0;i<pixels.size();i+=4)
        CHECK(pixels[i]==255 && pixels[i+1]==0 && pixels[i+2]==0 && pixels[i+3]==255);
    batch.clears[0].rectangle[2]=32; // partial clear must not become a full clear
    CHECK(backend.SubmitGuestBatch(batch)==GuestGpu::SubmissionResult::Incomplete);
    CHECK(!backend.ReadDiagnosticFrame(pixels) && pixels.empty());
    batch.clears[0].rectangle[2]=64;
    batch.clears[0].state.words[12264/4]=1;
    batch.clears[0].state.words[13036/4]=32; // enabled partial scissor
    CHECK(backend.SubmitGuestBatch(batch)==GuestGpu::SubmissionResult::Incomplete);
    batch.clears.clear();
    draw.resources.declaration.clear();
    CHECK(backend.SubmitGuestBatch(batch)==GuestGpu::SubmissionResult::Incomplete);
    CHECK(backend.GetHostStats().indexedDraws==3);
    backend.Shutdown(); CHECK(backend.GetHostStats().validationErrors==0 && backend.GetHostStats().allocatedBytes==0);
    std::puts("Native indexed batch submitted with genuine game cache VS/PS; unsupported declaration rejected");
}
static void BackendTests(SDL_Window* window)
{
    VulkanBackend backend(window, true);
    VideoMode mode; mode.width = 64; mode.height = 64;
    CHECK(backend.Init(mode));
    CHECK(backend.GetHostStats().imagesCreated == 2);
    // Actual capture -> immutable conversion -> Vulkan uploads, not manually
    // labelled host bytes. CPU descriptor pointers deliberately differ from data.
    std::vector<uint8_t> memory(0xB000);
    const auto store = [&](uint32_t address, uint32_t value) {
        for (int i=0;i<4;++i) memory.at(address+i)=uint8_t(value>>(24-i*8));
    };
    constexpr uint32_t device=0x1000;
    store(device+12788,0x5000); store(0x5000,1u<<29); store(0x5018,0x6000);
    memory[0x6003]=1; memory[0x6005]=2;
    store(device+12812,0x7000); store(0x7018,0x8003); store(0x701C,16|2);
    store(device+1776+17*8,0x8003); store(device+1780+17*8,16|2);
    store(device+12880,1u<<24);
    store(device+12896,0x9000); store(0x9020,0xA006);
    store(device+1152,2|(1<<22)); store(device+1156,0xA006);
    store(device+1160,1); store(device+1164,(0|(1<<3)|(2<<6)|(3<<9))<<1);
    store(device+1172,1<<9); memory[0xA000]=255; memory[0xA003]=255;
    GuestGpu::CommandStream stream;
    stream.Enable(true,true);
    CHECK(stream.Capture({memory},device,GuestGpu::DrawKind::IndexedVertices,{4,0,0,3})==GuestGpu::CaptureResult::Captured);
    auto batch=stream.Drain();
    CHECK(batch.draws[0].resources.status==GuestGpu::ConversionResult::Success);
    CHECK(batch.payloadBytes==6+16+8);
    const auto before = backend.GetHostStats();
    CHECK(backend.SubmitGuestBatch(batch) == GuestGpu::SubmissionResult::ResourcesUploaded);
    CHECK(backend.GetHostStats().submissions == before.submissions + 4); // constants + indices + vertex + texture
    const auto allocated = backend.GetHostStats().allocatedBytes;
    for (int i = 0; i < 5; ++i)
        CHECK(backend.SubmitGuestBatch(batch) == GuestGpu::SubmissionResult::ResourcesUploaded);
    CHECK(backend.GetHostStats().allocatedBytes == allocated); // no per-frame leak
    // Exercise stage-safe lookup with real uploaded modules. These fabricated
    // binding IDs test backend validation, not a real guest asset association.
    GuestGpu::ShaderCache probe;
    std::string shaderError;
    CHECK(probe.Initialize(GuestGpu::GetEmbeddedShaderCache(),shaderError));
    uint64_t vsHash=0, psHash=0;
    for(const auto& entry:probe.Entries())
    {
        GuestGpu::ShaderModule module;
        CHECK(probe.Decode(entry.hash,module,shaderError));
        if(module.stage==0 && !vsHash) vsHash=entry.hash;
        if(module.stage==4 && !psHash) psHash=entry.hash;
        if(vsHash && psHash) break;
    }
    CHECK(vsHash && psHash);
    batch.draws[0].state.words[13048/4]=0xB000;
    batch.draws[0].state.words[13044/4]=0xC000;
    batch.draws[0].vertexShader={0xB000,0,vsHash,GuestGpu::ShaderReadStatus::Success};
    batch.draws[0].pixelShader={0xC000,4,psHash,GuestGpu::ShaderReadStatus::Success};
    CHECK(backend.SubmitGuestBatch(batch)==GuestGpu::SubmissionResult::ResourcesUploaded);
    CHECK(backend.GetHostStats().indexedDraws==0); // lookup is not a graphics submission
    const auto beforeWrongStage=backend.GetHostStats().submissions;
    batch.draws[0].pixelShader.hash=vsHash;
    CHECK(backend.SubmitGuestBatch(batch)==GuestGpu::SubmissionResult::Incomplete);
    CHECK(backend.GetHostStats().submissions==beforeWrongStage);
    batch.draws[0].pixelShader.hash=0;
    CHECK(backend.SubmitGuestBatch(batch)==GuestGpu::SubmissionResult::Incomplete);
    CHECK(backend.GetHostStats().submissions==beforeWrongStage);
    batch.draws[0].state.words[13048/4]=batch.draws[0].state.words[13044/4]=0;
    batch.draws[0].vertexShader={}; batch.draws[0].pixelShader={};
    batch.draws[0].resources.status = GuestGpu::ConversionResult::Unsupported;
    const auto beforeRejected = backend.GetHostStats().submissions;
    CHECK(backend.SubmitGuestBatch(batch) == GuestGpu::SubmissionResult::Incomplete);
    CHECK(backend.GetHostStats().submissions == beforeRejected);
    CHECK(!backend.GetLastError().empty());
    batch.draws[0].resources.status = GuestGpu::ConversionResult::Success;
    batch.errors.overflow = 1;
    const auto oldSubmissions = backend.GetHostStats().submissions;
    CHECK(backend.SubmitGuestBatch(batch) == GuestGpu::SubmissionResult::Incomplete);
    CHECK(backend.GetHostStats().submissions == oldSubmissions);
    batch.errors = {};
    batch.draws[0].indices.stride = 8;
    CHECK(backend.SubmitGuestBatch(batch) == GuestGpu::SubmissionResult::Incomplete);
    for (int i = 0; i < 4; ++i) backend.Present();
    if (window) CHECK(backend.GetHostStats().presents == 4);
    backend.Resize(0, 0); backend.Present();
    if (window)
    {
        SDL_SetWindowSize(window, 96, 80);
        SDL_PumpEvents();
    }
    backend.Resize(96, 80); backend.Present();
    if (window) CHECK(backend.GetHostStats().presents == 5);
    backend.Shutdown(); backend.Shutdown();
    CHECK(backend.GetHostStats().allocatedBytes == 0);
    CHECK(backend.GetHostStats().validationErrors == 0);
}
int main(int argc, char** argv)
{
    StateTests();
    if (argc > 1 && std::strcmp(argv[1], "--wsi") == 0)
    {
        CHECK(SDL_Init(SDL_INIT_VIDEO) == 0);
        auto* window = SDL_CreateWindow("Vulkan WSI regression", SDL_WINDOWPOS_UNDEFINED, SDL_WINDOWPOS_UNDEFINED,
            64, 64, SDL_WINDOW_VULKAN | SDL_WINDOW_RESIZABLE);
        CHECK(window);
        unsigned count=0; CHECK(SDL_Vulkan_GetInstanceExtensions(window,&count,nullptr));
        std::vector<const char*> extensions(count); CHECK(SDL_Vulkan_GetInstanceExtensions(window,&count,extensions.data()));
        VulkanHost host; VulkanConfig config; config.validation=true; config.instanceExtensions=extensions;
        config.createSurface=[window](VkInstance instance) { VkSurfaceKHR surface{}; SDL_Vulkan_CreateSurface(window,instance,&surface); return surface; };
        CHECK(host.Init(config)); CHECK(host.ResizeSwapchain(64,64));
        GameAbiTests(host,true); host.Shutdown(); CHECK(host.Stats().validationErrors==0);
        BackendTests(window);
        SDL_DestroyWindow(window); SDL_Quit();
        std::puts("Vulkan WSI acquire/clear/submit/present/resize with validation passed");
        return 0;
    }
    VulkanHost host;
    VulkanConfig config; config.validation = true;
    if (!host.Init(config)) { std::fprintf(stderr, "%s\n", host.Error().c_str()); return 1; }
    std::printf("Vulkan adapter: %s\n", host.AdapterName().c_str());
    std::array<uint8_t, 256> source{}, returned{};
    for (size_t i = 0; i < source.size(); ++i) source[i] = uint8_t(i ^ 0xA5);
    auto upload = host.CreateBuffer(source.size(), VK_BUFFER_USAGE_TRANSFER_SRC_BIT, true);
    auto gpu = host.CreateBuffer(source.size(), VK_BUFFER_USAGE_INDEX_BUFFER_BIT, false);
    auto readback = host.CreateBuffer(source.size(), VK_BUFFER_USAGE_TRANSFER_DST_BIT, true);
    CHECK(upload && gpu && readback);
    CHECK(host.WriteBuffer(upload, source));
    CHECK(host.CopyBuffer(upload, gpu, source.size()));
    CHECK(host.CopyBuffer(gpu, readback, source.size()));
    CHECK(host.ReadBuffer(readback, returned) && returned == source);
    CHECK(!host.CopyBuffer(upload, gpu, 260));
    CHECK(!host.CopyBuffer(upload, upload, 4));
    CHECK(!host.CopyBuffer(upload, gpu, 3));
    CHECK(!host.CreateBuffer(0, VK_BUFFER_USAGE_VERTEX_BUFFER_BIT, false));
    CHECK(!host.CreateBuffer(size_t(65) * 1024 * 1024, VK_BUFFER_USAGE_VERTEX_BUFFER_BIT, false));
    CHECK(!host.CreateImage(0, 16, ImageKind::Rgba8));
    CHECK(!host.CreateImage(UINT32_MAX, UINT32_MAX, ImageKind::Rgba8));
    const auto color = host.CreateImage(16, 8, ImageKind::Rgba8);
    const auto depth = host.CreateImage(16, 8, ImageKind::Depth32);
    CHECK(color && depth);
    std::vector<uint8_t> pixels;
    CHECK(!host.ReadImage(color, pixels)); // undefined contents must not be consumed
    CHECK(host.ClearColor(color, {0.25f, 0.5f, 0.75f, 1.0f}));
    CHECK(host.ReadImage(color, pixels) && pixels.size() == 16 * 8 * 4);
    for (size_t i = 0; i < pixels.size(); i += 4)
    {
        CHECK(std::abs(int(pixels[i]) - 64) <= 1);
        CHECK(std::abs(int(pixels[i + 1]) - 128) <= 1);
        CHECK(std::abs(int(pixels[i + 2]) - 191) <= 1);
        CHECK(pixels[i + 3] == 255);
    }
    for (size_t i = 0; i < pixels.size(); ++i) pixels[i] = uint8_t(i * 37);
    CHECK(host.UploadRgba(color, pixels));
    std::vector<uint8_t> copied;
    CHECK(host.ReadImage(color, copied) && copied == pixels);
    // Xenos DXT1 conversion is consumed by a real VkImage and read back.
    GuestGpu::TextureLayout texture{16,8,32,18,0|(1<<3)|(2<<6)|(3<<9),GuestGpu::Endian::Swap8In16,false};
    size_t extent=0;
    CHECK(GuestGpu::TextureSourceExtent(texture,extent)==GuestGpu::ConversionResult::Success);
    std::vector<uint8_t> bc(extent,0);
    for (size_t y=0;y<2;++y) for(size_t x=0;x<4;++x) bc[y*256+x*8]=0xF8; // swapped RGB565 red
    std::vector<uint8_t> converted;
    CHECK(GuestGpu::ConvertTexture(texture,bc,16*8*4,converted)==GuestGpu::ConversionResult::Success);
    CHECK(host.UploadRgba(color,converted));
    CHECK(host.ReadImage(color,copied) && copied==converted);
    for(size_t i=0;i<copied.size();i+=4) CHECK(copied[i]==255 && copied[i+1]==0 && copied[i+2]==0 && copied[i+3]==255);
    CHECK(!host.UploadRgba(depth, pixels));
    CHECK(host.ClearDepth(depth, 0.375f));
    CHECK(host.ReadImage(depth, pixels));
    for (size_t i = 0; i < pixels.size(); i += 4)
    {
        float value; std::memcpy(&value, pixels.data() + i, sizeof(value));
        CHECK(value == 0.375f);
    }
    CHECK(!host.ClearDepth(depth, std::numeric_limits<float>::quiet_NaN()));
    CHECK(!host.ClearColor(depth, {0, 0, 0, 1}));
    CHECK(host.Destroy(upload) && host.Destroy(gpu) && host.Destroy(readback));
    CHECK(!host.Destroy(upload));
    CHECK(!host.ReadBuffer(upload, returned));
    CHECK(host.Destroy(color) && host.Destroy(depth));
    GraphicsTests(host);
    GameAbiTests(host);
    CHECK(host.Stats().submissions >= 7 && host.Stats().allocatedBytes == 0);
    host.Shutdown();
    CHECK(host.Stats().validationErrors == 0);
    CHECK(host.Init(config));
    auto replacement = host.CreateBuffer(256, VK_BUFFER_USAGE_VERTEX_BUFFER_BIT, true);
    CHECK(replacement && replacement != upload);
    CHECK(!host.ReadBuffer(upload, returned));
    host.Shutdown();
    CHECK(host.Stats().validationErrors == 0);
    BackendTests(nullptr);
    NativeGameShaderDrawTest();
    std::puts("Vulkan resources, readback, transfers, state translation and lifecycle with validation passed");
}
