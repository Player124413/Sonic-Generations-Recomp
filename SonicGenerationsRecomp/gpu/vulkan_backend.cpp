#include <gpu/vulkan_backend.h>
#include <SDL.h>
#include <SDL_vulkan.h>
#include <algorithm>
#include <array>
#include <cstdio>
#include <new>

VulkanBackend::VulkanBackend(SDL_Window* w, bool enableValidation) : window(w), validation(enableValidation) {}
VulkanBackend::~VulkanBackend() { Shutdown(); }
bool VulkanBackend::Fail(const std::string& text)
{
    if (error != text) std::fprintf(stderr, "Vulkan backend: %s\n", text.c_str());
    error = text;
    return false;
}
bool VulkanBackend::Init(const VideoMode& mode)
{
    std::lock_guard lock(mutex);
    host.Shutdown(); drawResources.clear(); states.clear(); color = depth = 0;
    shaderCache = {};
    resolvedShaders.clear();
    error.clear(); width = mode.width; height = mode.height; resize = true;
    std::vector<const char*> extensions;
    HostGpu::VulkanConfig config;
    config.validation = validation;
    if (window)
    {
        if (!(SDL_GetWindowFlags(window) & SDL_WINDOW_VULKAN)) return Fail("Window was not created with SDL_WINDOW_VULKAN");
        unsigned count = 0;
        if (!SDL_Vulkan_GetInstanceExtensions(window, &count, nullptr)) return Fail(SDL_GetError());
        extensions.resize(count);
        if (!SDL_Vulkan_GetInstanceExtensions(window, &count, extensions.data())) return Fail(SDL_GetError());
        config.instanceExtensions = extensions;
        config.createSurface = [this](VkInstance instance) {
            VkSurfaceKHR surface{};
            return SDL_Vulkan_CreateSurface(window, instance, &surface) ? surface : VK_NULL_HANDLE;
        };
        int w = 0, h = 0;
        SDL_Vulkan_GetDrawableSize(window, &w, &h);
        width = uint32_t(std::max(0, w)); height = uint32_t(std::max(0, h));
    }
    std::string cacheError;
    if (!shaderCache.Initialize(GuestGpu::GetEmbeddedShaderCache(), cacheError))
        return Fail("Shader cache initialization failed: " + cacheError);
    std::fprintf(stderr, "Loaded %zu indexed game shaders (Zstd/SMOL-V); this does not create game pipelines.\n",
        shaderCache.Entries().size());
    if (!host.Init(config)) { const auto message = host.Error(); host.Shutdown(); return Fail(message); }
    if (width && height && !RecreateTargets()) { host.Shutdown(); return false; }
    std::fprintf(stderr, "Vulkan device: %s. Resources/transfers active; game graphics pipelines are not implemented.\n", host.AdapterName().c_str());
    return true;
}
void VulkanBackend::ReleaseDrawResources()
{
    for (auto id : drawResources) host.Destroy(id);
    drawResources.clear(); states.clear(); resolvedShaders.clear();
}
void VulkanBackend::Shutdown()
{
    std::lock_guard lock(mutex);
    // Host waits idle before freeing every resource, including exceptional paths.
    host.Shutdown(); drawResources.clear(); states.clear(); color = depth = 0;
    shaderCache = {};
    resolvedShaders.clear();
}
bool VulkanBackend::RecreateTargets()
{
    if (!width || !height) return false;
    if (window && !host.ResizeSwapchain(width, height)) return Fail(host.Error());
    const auto newColor = host.CreateImage(width, height, HostGpu::ImageKind::Rgba8);
    if (!newColor) return Fail(host.Error());
    const auto newDepth = host.CreateImage(width, height, HostGpu::ImageKind::Depth32);
    if (!newDepth) { host.Destroy(newColor); return Fail(host.Error()); }
    if (!host.ClearColor(newColor, {0, 0, 0, 1}) || !host.ClearDepth(newDepth, 1.0f))
    {
        host.Destroy(newColor); host.Destroy(newDepth);
        return Fail(host.Error());
    }
    if (color) host.Destroy(color);
    if (depth) host.Destroy(depth);
    color = newColor; depth = newDepth; resize = false;
    return true;
}
HostGpu::Resource VulkanBackend::Upload(std::span<const uint8_t> bytes, VkBufferUsageFlags usage)
{
    // Vulkan buffer-copy ranges are four-byte aligned. Padding is not draw data.
    const size_t padded = (bytes.size() + 3) & ~size_t(3);
    if (!padded) return 0;
    std::vector<uint8_t> upload(padded, 0);
    std::copy(bytes.begin(), bytes.end(), upload.begin());
    const auto staging = host.CreateBuffer(padded, VK_BUFFER_USAGE_TRANSFER_SRC_BIT, true);
    if (!staging) { Fail(host.Error()); return 0; }
    const auto destination = host.CreateBuffer(padded, usage, false);
    if (!destination) { host.Destroy(staging); Fail(host.Error()); return 0; }
    const bool ok = host.WriteBuffer(staging, upload) && host.CopyBuffer(staging, destination, padded);
    host.Destroy(staging); // CopyBuffer is fence-complete, no pending GPU use
    if (!ok) { host.Destroy(destination); Fail(host.Error()); return 0; }
    return destination;
}
GuestGpu::SubmissionResult VulkanBackend::SubmitGuestBatch(const GuestGpu::NativeBatch& batch)
try
{
    std::lock_guard lock(mutex);
    if (!host.IsReady()) return GuestGpu::SubmissionResult::Unsupported;
    if (batch.errors.Any() || batch.draws.empty() || batch.draws.size() > GuestGpu::CommandStream::MaxDraws)
        return GuestGpu::SubmissionResult::Incomplete;
    size_t total = 0;
    std::map<uint64_t, GuestGpu::ShaderModule> nextShaders;
    size_t shaderBytes = 0;
    constexpr size_t MaxDecodedShaderBytes = 64 * 1024 * 1024;
    std::vector<std::vector<uint8_t>> hostIndices(batch.draws.size());
    // Validate and convert the whole batch before beginning its uploads.
    for (size_t n = 0; n < batch.draws.size(); ++n)
    {
        const auto& draw = batch.draws[n];
        if (draw.resources.captured)
        {
            // Resolve actual native bindings, never select a fixture shader or
            // the first module in the cache. Unbound batches remain upload-only.
            if (draw.state.VertexShader() || draw.state.PixelShader())
            {
                for (const auto* shader : {&draw.vertexShader, &draw.pixelShader})
                {
                    const bool vertex = shader == &draw.vertexShader;
                    const uint32_t expectedResource = vertex ? draw.state.VertexShader() : draw.state.PixelShader();
                    if (shader->status != GuestGpu::ShaderReadStatus::Success || !expectedResource ||
                        shader->resource != expectedResource || shader->stage != (vertex ? 0u : 4u))
                    {
                        Fail(vertex ? "Invalid/unbound native vertex shader" : "Invalid/unbound native pixel shader");
                        return GuestGpu::SubmissionResult::Incomplete;
                    }
                    const auto found = nextShaders.find(shader->hash);
                    if (found != nextShaders.end())
                    {
                        if (found->second.stage != shader->stage)
                        { Fail("Same shader hash bound to different stages"); return GuestGpu::SubmissionResult::Incomplete; }
                        continue;
                    }
                    GuestGpu::ShaderModule module;
                    std::string reason;
                    if (!shaderCache.DecodeStage(shader->hash, shader->stage, module, reason))
                    {
                        Fail(std::string(vertex ? "Vertex shader: " : "Pixel shader: ") + reason +
                            " (hash=" + std::to_string(shader->hash) + ")");
                        return GuestGpu::SubmissionResult::Incomplete;
                    }
                    const size_t size = module.words.size() * sizeof(uint32_t);
                    if (size > MaxDecodedShaderBytes - shaderBytes)
                    { Fail("Decoded shader batch budget exceeded"); return GuestGpu::SubmissionResult::Incomplete; }
                    shaderBytes += size;
                    nextShaders.emplace(shader->hash, std::move(module));
                }
            }

            if (draw.resources.status != GuestGpu::ConversionResult::Success)
            {
                Fail("Native resource conversion rejected " + std::string(draw.resources.failedTexture ? "texture slot " : "vertex stream ") +
                    std::to_string(draw.resources.failedSlot) + ": " + GuestGpu::ConversionResultName(draw.resources.status));
                return GuestGpu::SubmissionResult::Incomplete;
            }
            if (draw.resources.vertices.size() > 16 || draw.resources.textures.size() > GuestGpu::NativeState::TextureCount)
                return GuestGpu::SubmissionResult::Incomplete;
            uint32_t vertexSlots = 0, textureSlots = 0;
            for (const auto& vertex : draw.resources.vertices)
            {
                if (vertex.stream >= 16 || !vertex.stride || vertex.bytes.empty() ||
                    vertex.resource != draw.state.words[12812 / 4 + vertex.stream] || (vertexSlots & (1u << vertex.stream)))
                    return GuestGpu::SubmissionResult::Incomplete;
                vertexSlots |= 1u << vertex.stream;
                if (vertex.bytes.size() > GuestGpu::CommandStream::MaxPayloadBytes - total) return GuestGpu::SubmissionResult::Incomplete;
                total += vertex.bytes.size();
            }
            for (const auto& texture : draw.resources.textures)
            {
                if (texture.slot >= GuestGpu::NativeState::TextureCount || !texture.width || !texture.height ||
                    texture.width > 8192 || texture.height > 8192 ||
                    texture.rgba.size() != uint64_t(texture.width) * texture.height * 4 ||
                    texture.resource != draw.state.words[12896 / 4 + texture.slot] || (textureSlots & (1u << texture.slot)))
                    return GuestGpu::SubmissionResult::Incomplete;
                textureSlots |= 1u << texture.slot;
                if (texture.rgba.size() > GuestGpu::CommandStream::MaxPayloadBytes - total) return GuestGpu::SubmissionResult::Incomplete;
                total += texture.rgba.size();
            }
        }
        else if (!draw.resources.vertices.empty() || !draw.resources.textures.empty()) return GuestGpu::SubmissionResult::Incomplete;
        if (draw.kind != GuestGpu::DrawKind::IndexedVertices) continue;
        const auto& index = draw.indices;
        if ((index.stride != 2 && index.stride != 4) || index.bytes.size() != uint64_t(index.count) * index.stride ||
            index.bytes.size() > GuestGpu::IndexSnapshot::MaxBytes || index.count != draw.arguments[3] ||
            index.start != draw.arguments[2] || index.resource != draw.state.IndexBuffer()) return GuestGpu::SubmissionResult::Incomplete;
        const auto converted = GuestGpu::ConvertIndices(index.bytes, index.flags, index.stride, hostIndices[n]);
        if (converted != GuestGpu::ConversionResult::Success)
        {
            Fail(std::string("Index conversion rejected: ") + GuestGpu::ConversionResultName(converted));
            return GuestGpu::SubmissionResult::Incomplete;
        }
        total += index.bytes.size();
        if (total > GuestGpu::CommandStream::MaxPayloadBytes) return GuestGpu::SubmissionResult::Incomplete;
    }
    ReleaseDrawResources();
    resolvedShaders = std::move(nextShaders);
    // Reserve before creating Vulkan handles, so push_back can't leak a new ID.
    drawResources.reserve(batch.draws.size() * (2 + 16 + GuestGpu::NativeState::TextureCount));
    states.reserve(batch.draws.size());
    for (size_t n = 0; n < batch.draws.size(); ++n)
    {
        const auto& draw = batch.draws[n];
        states.push_back(HostGpu::DecodeFixedState(draw.state));
        std::array<uint8_t, 8192> constants{};
        for (size_t i = 0; i < constants.size() / 4; ++i)
        {
            const auto word = draw.state.words[1920 / 4 + i];
            for (size_t byte = 0; byte < 4; ++byte) constants[i * 4 + byte] = uint8_t(word >> (byte * 8));
        }
        auto id = Upload(constants, VK_BUFFER_USAGE_UNIFORM_BUFFER_BIT);
        if (!id) { ReleaseDrawResources(); return GuestGpu::SubmissionResult::Incomplete; }
        drawResources.push_back(id);
        if (draw.kind == GuestGpu::DrawKind::IndexedVertices && !draw.indices.bytes.empty())
        {
            id = Upload(hostIndices[n], VK_BUFFER_USAGE_INDEX_BUFFER_BIT);
            if (!id) { ReleaseDrawResources(); return GuestGpu::SubmissionResult::Incomplete; }
            drawResources.push_back(id);
        }
        for (const auto& vertex : draw.resources.vertices)
        {
            id = Upload(vertex.bytes, VK_BUFFER_USAGE_VERTEX_BUFFER_BIT);
            if (!id) { ReleaseDrawResources(); return GuestGpu::SubmissionResult::Incomplete; }
            drawResources.push_back(id);
        }
        for (const auto& texture : draw.resources.textures)
        {
            id = host.CreateImage(texture.width, texture.height, HostGpu::ImageKind::Rgba8);
            if (!id) { Fail(host.Error()); ReleaseDrawResources(); return GuestGpu::SubmissionResult::Incomplete; }
            drawResources.push_back(id);
            if (!host.UploadRgba(id, texture.rgba))
            { Fail(host.Error()); ReleaseDrawResources(); return GuestGpu::SubmissionResult::Incomplete; }
        }
    }
    // Actual vkQueueSubmit transfers occurred, but NO vkCmdDraw was recorded.
    // Missing shaders, vertex resources and complete state remain a draw barrier.
    return GuestGpu::SubmissionResult::ResourcesUploaded;
}
catch (const std::bad_alloc&)
{
    std::lock_guard lock(mutex);
    ReleaseDrawResources();
    Fail("Host allocation failed while preparing resource uploads");
    return GuestGpu::SubmissionResult::Incomplete;
}
void VulkanBackend::Present()
{
    std::lock_guard lock(mutex);
    if (!host.IsReady() || !width || !height) return;
    if ((resize || host.SwapchainNeedsResize()) && !RecreateTargets()) return;
    if (window && !host.PresentClear({0, 0, 0, 1}) && !host.SwapchainNeedsResize()) Fail(host.Error());
}
void VulkanBackend::Resize(uint32_t w, uint32_t h)
{
    std::lock_guard lock(mutex);
    width = w; height = h; resize = true;
}
HostGpu::VulkanStats VulkanBackend::GetHostStats() const { std::lock_guard lock(mutex); return host.Stats(); }
std::string VulkanBackend::GetLastError() const { std::lock_guard lock(mutex); return error; }
