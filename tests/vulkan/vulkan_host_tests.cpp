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
static void BackendTests(SDL_Window* window)
{
    VulkanBackend backend(window, true);
    VideoMode mode; mode.width = 64; mode.height = 64;
    CHECK(backend.Init(mode));
    CHECK(backend.GetHostStats().imagesCreated == 2);
    GuestGpu::NativeBatch batch;
    GuestGpu::NativeDraw draw;
    draw.kind = GuestGpu::DrawKind::IndexedVertices;
    draw.arguments = {4, 0, 0, 3};
    draw.state.words[12788 / 4] = 0x1234;
    draw.indices.resource = 0x1234;
    draw.indices.stride = 2; draw.indices.count = 3;
    draw.indices.bytes = {0, 0, 0, 1, 0, 2};
    batch.draws.push_back(std::move(draw)); batch.payloadBytes = 6;
    const auto before = backend.GetHostStats();
    CHECK(backend.SubmitGuestBatch(batch) == GuestGpu::SubmissionResult::ResourcesUploaded);
    CHECK(backend.GetHostStats().submissions == before.submissions + 2); // constants + index copies
    const auto allocated = backend.GetHostStats().allocatedBytes;
    for (int i = 0; i < 5; ++i)
        CHECK(backend.SubmitGuestBatch(batch) == GuestGpu::SubmissionResult::ResourcesUploaded);
    CHECK(backend.GetHostStats().allocatedBytes == allocated); // no per-frame leak
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
