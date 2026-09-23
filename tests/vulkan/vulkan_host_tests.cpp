#include <gpu/vulkan_host.h>
#include <gpu/vulkan_backend.h>
#include <gpu/vulkan_state.h>
#include <SDL.h>
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
    std::puts("Vulkan resources, readback, transfers, state translation and lifecycle with validation passed");
}
