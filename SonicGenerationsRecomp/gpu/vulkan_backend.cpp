// The Win32 surface is created from native handles, and vulkan_win32.h expects
// windows.h to be included before it, so the platform types come first: the
// header below pulls in vulkan.h.
#if defined(_WIN32)
#ifndef WIN32_LEAN_AND_MEAN
#define WIN32_LEAN_AND_MEAN
#endif
#ifndef NOMINMAX
#define NOMINMAX
#endif
#include <windows.h>
#endif
#include <gpu/vulkan_backend.h>
#ifndef SONIC_VULKAN_HEADLESS
#include <SDL.h>
#include <SDL_vulkan.h>
#endif
#include <algorithm>
#include <array>
#include <cstdio>
#include <new>
#include <bit>
#include <cmath>
#include <set>

VulkanBackend::VulkanBackend(SDL_Window* w, bool enableValidation, bool enableGameDraws) : window(w), validation(enableValidation), drawEnabled(enableGameDraws) {}
VulkanBackend::~VulkanBackend() { Shutdown(); }
void VulkanBackend::SetWin32Surface(void* hwnd, void* hinstance)
{
    std::lock_guard lock(mutex);
    // The surface is part of the instance the device is created from, so a
    // surface that arrives after Init() cannot be attached: say so instead of
    // rendering into nothing. The window's presenter connects before the guest
    // starts, which is what makes the normal order surface-then-Init.
    if (host.IsReady())
    {
        Fail("The Win32 surface must be set before the device is created");
        return;
    }
    win32Hwnd = hwnd; win32Hinstance = hinstance;
}
bool VulkanBackend::HasPresentableFrame() const { std::lock_guard lock(mutex); return frameReady; }
void VulkanBackend::GetPresentableFrameSize(uint32_t& outWidth, uint32_t& outHeight) const
{
    std::lock_guard lock(mutex);
    outWidth = frameWidth; outHeight = frameHeight;
}
bool VulkanBackend::SwapchainNeedsResize() const { std::lock_guard lock(mutex); return host.IsReady() && host.SwapchainNeedsResize(); }
void VulkanBackend::GetTargetSize(uint32_t& outWidth, uint32_t& outHeight) const
{
    std::lock_guard lock(mutex);
    outWidth = width; outHeight = height;
}
bool VulkanBackend::Fail(const std::string& text)
{
    if (error != text) std::fprintf(stderr, "Vulkan backend: %s\n", text.c_str());
    error = text;
    return false;
}
bool VulkanBackend::Init(const VideoMode& mode)
{
    return InitWithShaderCache(mode,GuestGpu::GetEmbeddedShaderCache());
}
bool VulkanBackend::InitWithShaderCache(const VideoMode& mode,GuestGpu::ShaderCacheData cache)
{
    std::lock_guard lock(mutex);
    host.Shutdown(); drawResources.clear(); states.clear(); color = depth = 0;
    nativeSurfaces.clear(); nativeTextures.clear(); frameImage=0;
    frameWidth = frameHeight = 0;
    shaderCache = {};
    resolvedShaders.clear();
    // A new device is a new report: counts from a previous session would make the
    // ratio meaningless, which is the one number the report exists for.
    nativeReport = {};
    frameReady = false;
    error.clear(); width = mode.width; height = mode.height; resize = true;
    std::vector<const char*> extensions;
    HostGpu::VulkanConfig config;
    config.validation = validation;
    if (window)
    {
#ifdef SONIC_VULKAN_HEADLESS
        return Fail("Headless Vulkan backend cannot own an SDL window");
#else
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
#endif
    }
    else if (win32Hwnd)
    {
#if defined(VK_USE_PLATFORM_WIN32_KHR)
        // ReXGlue owns the window, so SDL is not asked for anything here: the
        // instance enables the two platform surface extensions, and the surface
        // is created from the HWND once the instance exists. The size comes from
        // the window's presenter (Resize before Init), not from SDL.
        static const char* const kSurfaceExtensions[] = {
            VK_KHR_SURFACE_EXTENSION_NAME, VK_KHR_WIN32_SURFACE_EXTENSION_NAME};
        extensions.assign(kSurfaceExtensions, kSurfaceExtensions + 2);
        config.instanceExtensions = extensions;
        const void* hwnd = win32Hwnd;
        const void* hinstance = win32Hinstance;
        config.createSurface = [hwnd, hinstance](VkInstance instance) -> VkSurfaceKHR {
            // Fetched per instance: the loader only exposes it once the instance
            // enabled VK_KHR_win32_surface, which the config above does.
            auto create = reinterpret_cast<PFN_vkCreateWin32SurfaceKHR>(
                vkGetInstanceProcAddr(instance, "vkCreateWin32SurfaceKHR"));
            if (!create)
            {
                std::fputs("Vulkan backend: vkCreateWin32SurfaceKHR is unavailable\n", stderr);
                return VK_NULL_HANDLE;
            }
            VkWin32SurfaceCreateInfoKHR info{VK_STRUCTURE_TYPE_WIN32_SURFACE_CREATE_INFO_KHR};
            info.hinstance = static_cast<HINSTANCE>(const_cast<void*>(hinstance));
            info.hwnd = static_cast<HWND>(const_cast<void*>(hwnd));
            VkSurfaceKHR surface = VK_NULL_HANDLE;
            return create(instance, &info, nullptr, &surface) == VK_SUCCESS ? surface : VK_NULL_HANDLE;
        };
#else
        return Fail("The Win32 presentation surface needs VK_USE_PLATFORM_WIN32_KHR");
#endif
    }
    std::string cacheError;
    if (!shaderCache.Initialize(cache, cacheError))
        return Fail("Shader cache initialization failed: " + cacheError);
    std::fprintf(stderr, "Loaded %zu indexed game shaders (Zstd/SMOL-V); this does not create game pipelines.\n",
        shaderCache.Entries().size());
    if (!host.Init(config)) { const auto message = host.Error(); host.Shutdown(); return Fail(message); }
    if (width && height && !RecreateTargets()) { host.Shutdown(); return false; }
    std::fprintf(stderr, "Vulkan device: %s. Game ABI: %s; mode: %s.\n", host.AdapterName().c_str(),
        host.SupportsGenerationsAbi() ? "supported" : "unavailable", drawEnabled ? "experimental direct-frame draw" : "resource uploads");
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
    nativeSurfaces.clear(); nativeTextures.clear(); frameImage=0;
    // Nothing is presentable after the device is gone: a presenter that outlives
    // the renderer must find "no frame", not the previous frame's handle.
    frameReady = false; frameWidth = frameHeight = 0;
    shaderCache = {};
    resolvedShaders.clear();
}
bool VulkanBackend::RecreateTargets()
{
    if (!width || !height) return false;
    if (HasPresentationSurface() && !host.ResizeSwapchain(width, height)) return Fail(host.Error());
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
    color = newColor; depth = newDepth; resize = false; frameReady=false; frameWidth = frameHeight = 0;
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
    if(drawEnabled && batch.nativeTargets) return SubmitNativeFrame(batch);
    std::lock_guard lock(mutex);
    frameReady = false;
    if(!nativeReplay) frameImage=0;
    if (!host.IsReady()) return GuestGpu::SubmissionResult::Unsupported;
    if (batch.errors.Any() || batch.draws.empty() || batch.draws.size() + batch.clears.size() > GuestGpu::CommandStream::MaxDraws)
        return GuestGpu::SubmissionResult::Incomplete;
    frameReady = false;
    struct PreparedDraw
    {
        std::vector<VkVertexInputAttributeDescription> attributes;
        std::vector<VkVertexInputBindingDescription> vertexBindings;
        std::vector<HostGpu::GameVertexBinding> vertexBuffers;
        std::vector<HostGpu::GameTextureBinding> textures;
        std::array<uint8_t,320> shared{};
        HostGpu::GraphicsPipelineInfo pipeline;
        HostGpu::GameDrawBindings bindings;
    };
    std::vector<PreparedDraw> prepared(batch.draws.size());
    const bool graphics = drawEnabled && std::any_of(batch.draws.begin(),batch.draws.end(),[](const auto& d){return d.state.VertexShader() || d.state.PixelShader();});
    if(graphics && (!host.SupportsGenerationsAbi() || !width || !height))
    { Fail("Native draw requires Vulkan 1.2 buffer device address, scalar layout and descriptor indexing features"); return GuestGpu::SubmissionResult::Unsupported; }
    // Clear ordering shares the draw sequence. Until native render-target
    // mapping exists, only full clears of this batch's single proxy pair are
    // representable. Reject partial/MRT/stencil clears, never silently drop them.
    if(!batch.clears.empty())
    {
        if(!graphics) return GuestGpu::SubmissionResult::Incomplete;
        std::set<uint64_t> sequences;
        for(const auto& draw:batch.draws) if(!sequences.insert(draw.sequence).second)
            return GuestGpu::SubmissionResult::Incomplete;
        uint64_t previous=0;
        bool first=true;
        for(const auto& clear:batch.clears)
        {
            const auto& target=batch.draws.front();
            const auto viewport=clear.state.Viewport();
            const auto scissor=clear.state.Scissor();
            if(!sequences.insert(clear.sequence).second || (!first && clear.sequence<=previous) ||
               clear.device!=target.device || (clear.flags&~0x11u) ||
               clear.state.ColorTargets()!=target.state.ColorTargets() ||
               clear.state.DepthTarget()!=target.state.DepthTarget() ||
               ((clear.flags&0x10) && !clear.state.DepthTarget()) ||
               clear.rectangle!=std::array<int32_t,4>{0,0,int32_t(width),int32_t(height)} ||
               viewport[0]!=0 || viewport[1]!=0 || viewport[2]!=float(width) || viewport[3]!=float(height) ||
               (clear.state.words[12264/4] && scissor!=clear.rectangle) ||
               !std::isfinite(clear.depth) || clear.depth<0 || clear.depth>1 ||
               std::any_of(clear.color.begin(),clear.color.end(),[](float c){return !std::isfinite(c);}))
            { Fail("Clear outside supported full-target color/depth profile"); return GuestGpu::SubmissionResult::Incomplete; }
            previous=clear.sequence; first=false;
        }
    }
    size_t total = 0;
    std::map<uint64_t, GuestGpu::ShaderModule> nextShaders;
    size_t shaderBytes = 0;
    constexpr size_t MaxDecodedShaderBytes = 64 * 1024 * 1024;
    std::vector<std::vector<uint8_t>> hostIndices(batch.draws.size());
    std::vector<uint32_t> indexCounts(batch.draws.size()), indexStrides(batch.draws.size());
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
        if (draw.kind != GuestGpu::DrawKind::IndexedVertices)
        {
            if(draw.kind!=GuestGpu::DrawKind::Vertices) return GuestGpu::SubmissionResult::Incomplete;
            if(graphics)
            {
                if(draw.resources.vertices.empty()) return GuestGpu::SubmissionResult::Incomplete;
                const auto status=GuestGpu::BuildSequentialIndices(draw.arguments[1],draw.arguments[2],
                    UINT32_MAX, // referenced streams are checked after shader/declaration matching
                    std::min(GuestGpu::IndexSnapshot::MaxBytes,GuestGpu::CommandStream::MaxPayloadBytes-total),hostIndices[n]);
                if(status!=GuestGpu::ConversionResult::Success)
                { Fail("DrawVertices range or index budget invalid"); return GuestGpu::SubmissionResult::Incomplete; }
                indexCounts[n]=draw.arguments[2]; indexStrides[n]=4;
                total+=hostIndices[n].size();
            }
            continue;
        }
        indexCounts[n]=draw.indices.count; indexStrides[n]=draw.indices.stride;
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
    if(graphics)
    {
        const auto firstTarget=batch.draws.front().state.ColorTargets()[0];
        for(size_t n=0;n<batch.draws.size();++n)
        {
            const auto& d=batch.draws[n]; auto& plan=prepared[n];
            const auto vs=nextShaders.find(d.vertexShader.hash), ps=nextShaders.find(d.pixelShader.hash);
            const auto targets=d.state.ColorTargets();
            const auto state=HostGpu::DecodeFixedState(d.state);
            if(d.arguments[0]!=4 || !indexCounts[n] || indexCounts[n]%3 ||
                (d.kind==GuestGpu::DrawKind::IndexedVertices && !d.state.IndexBuffer()) || !d.state.words[12216/4] ||
                vs==nextShaders.end() || ps==nextShaders.end() || !d.resources.captured ||
                !d.vertexShader.reflectionValid || !d.pixelShader.reflectionValid || d.vertexShader.samplerMask ||
                !d.vertexShader.packedBooleansSupported || !d.pixelShader.packedBooleansSupported ||
                !firstTarget || targets[0]!=firstTarget || targets[1] || targets[2] || targets[3] ||
                ((d.state.words[10372/4]>>16)&15) || ((d.state.words[10368/4]>>16)&3) ||
                d.state.DepthTarget()!=batch.draws.front().state.DepthTarget() ||
                ((state.depth.depthTestEnable || state.depth.depthWriteEnable) && !d.state.DepthTarget()) || (state.requiresStencil && (!nativeReplay || !d.state.DepthTarget())) || state.requiresAlphaTest || state.requiresAlphaToCoverage ||
                state.unsupportedRasterBits || state.invalidBlend || d.resources.vertices.empty())
            { Fail("Draw outside supported profile: triangles, one target, per-vertex streams, 2D pixel textures, no unsupported stencil/MSAA/alpha test"); return GuestGpu::SubmissionResult::Incomplete; }
            for(auto factor:{state.blend[0].srcColorBlendFactor,state.blend[0].dstColorBlendFactor,state.blend[0].srcAlphaBlendFactor,state.blend[0].dstAlphaBlendFactor})
                if((factor>=VK_BLEND_FACTOR_CONSTANT_COLOR && factor<=VK_BLEND_FACTOR_ONE_MINUS_CONSTANT_ALPHA) || factor>=VK_BLEND_FACTOR_SRC1_COLOR)
                { Fail("Constant/dual-source blending unsupported"); return GuestGpu::SubmissionResult::Incomplete; }
            auto location=[](uint32_t usage,uint32_t index)->uint32_t {
                if(usage==0 && index==0) return 0;
                if(usage==3 && index==0) return 1;
                if(usage==6 && index==0) return 2;
                if(usage==7 && index==0) return 3;
                if(usage==5 && index<24) return index<4 ? index+4 : index+8;
                if(usage==10 && index<2) return index ? 11 : 8;
                if(usage==1 && index==0) return 10;
                return UINT32_MAX;
            };
            for(auto loc:vs->second.inputLocations)
            {
                const GuestGpu::NativeVertexElement* selected=nullptr;
                for(const auto& e:d.resources.declaration) if(location(e.usage,e.usageIndex)==loc)
                { if(selected) { Fail("Duplicate vertex declaration semantic"); return GuestGpu::SubmissionResult::Incomplete; } selected=&e; }
                if(!selected || selected->stream>=16 || selected->method)
                { Fail("Missing or unsupported native vertex declaration input"); return GuestGpu::SubmissionResult::Incomplete; }
                const auto format=HostGpu::DecodeVertexFormat(selected->type);
                if(format==VK_FORMAT_UNDEFINED)
                { Fail("Integer, packed or unknown vertex input requires an explicit shader ABI mapping"); return GuestGpu::SubmissionResult::Incomplete; }
                const auto vertex=std::find_if(d.resources.vertices.begin(),d.resources.vertices.end(),
                    [&](const auto& v){return v.stream==selected->stream;});
                const auto size=HostGpu::VertexFormatSize(format);
                if(vertex==d.resources.vertices.end() || selected->offset>vertex->stride || size>vertex->stride-selected->offset)
                { Fail("Missing vertex stream or attribute outside stream stride"); return GuestGpu::SubmissionResult::Incomplete; }
                if(std::none_of(plan.vertexBindings.begin(),plan.vertexBindings.end(),[&](const auto& b){return b.binding==selected->stream;}))
                    plan.vertexBindings.push_back({selected->stream,vertex->stride,VK_VERTEX_INPUT_RATE_VERTEX});
                plan.attributes.push_back({loc,selected->stream,format,selected->offset});
            }
            if(plan.attributes.empty()) { Fail("Procedural vertex input not supported yet"); return GuestGpu::SubmissionResult::Incomplete; }
            const auto viewport=d.state.Viewport();
            const auto scissor=d.state.words[12264/4] ? d.state.Scissor() : std::array<int32_t,4>{0,0,int32_t(width),int32_t(height)};
            if(std::any_of(viewport.begin(),viewport.end(),[](float value){return !std::isfinite(value);}) ||
                viewport[0]<0 || viewport[1]<0 || viewport[2]<=0 || viewport[3]<=0 ||
                double(viewport[0])+viewport[2]>width || double(viewport[1])+viewport[3]>height ||
                viewport[4]<0 || viewport[5]>1 || viewport[4]>viewport[5] ||
                scissor[0]<0 || scissor[1]<0 || scissor[2]<scissor[0] || scissor[3]<scissor[1] ||
                uint32_t(scissor[2])>width || uint32_t(scissor[3])>height)
            { Fail("Native draw requires a bounded finite viewport and enabled scissor"); return GuestGpu::SubmissionResult::Incomplete; }
            plan.bindings.viewport={viewport[0],viewport[1],viewport[2],viewport[3],viewport[4],viewport[5]};
            plan.bindings.scissor={{scissor[0],scissor[1]},{uint32_t(scissor[2]-scissor[0]),uint32_t(scissor[3]-scissor[1])}};
            plan.bindings.baseVertex=std::bit_cast<int32_t>(d.arguments[1]);
            size_t vertexCount=SIZE_MAX;
            for(const auto& binding:plan.vertexBindings) {
                const auto vertex=std::find_if(d.resources.vertices.begin(),d.resources.vertices.end(),[&](const auto& v){return v.stream==binding.binding;});
                vertexCount=std::min(vertexCount,vertex->bytes.size()/vertex->stride);
            }
            for(size_t i=0;i<hostIndices[n].size();i+=indexStrides[n])
            {
                uint32_t index=0; for(uint32_t b=0;b<indexStrides[n];++b) index|=uint32_t(hostIndices[n][i+b])<<(8*b);
                const int64_t vertex=int64_t(index)+plan.bindings.baseVertex;
                if(vertex<0 || uint64_t(vertex)>=vertexCount)
                { Fail("Native index references outside captured vertex stream"); return GuestGpu::SubmissionResult::Incomplete; }
            }
            for(uint32_t slot=0;slot<16;++slot) if(d.pixelShader.samplerMask & (1u<<slot))
            {
                const auto texture=std::find_if(d.resources.textures.begin(),d.resources.textures.end(),[&](const auto& t){return t.slot==slot;});
                std::array<uint32_t,6> fetch{}; d.state.TextureFetch(slot,fetch);
                const uint32_t u=(fetch[0]>>10)&7,v=(fetch[0]>>13)&7,mag=(fetch[3]>>19)&3,min=(fetch[3]>>21)&3;
                if(texture==d.resources.textures.end() || u>2 || v>2 || mag>1 || min!=mag || (fetch[3]&(7u<<25)))
                { Fail("Unbound texture or unsupported sampler state"); return GuestGpu::SubmissionResult::Incomplete; }
                plan.textures.push_back({slot,0,mag ? VK_FILTER_LINEAR:VK_FILTER_NEAREST,VkSamplerAddressMode(u),VkSamplerAddressMode(v)});
            }
            const auto write=[&](size_t off,uint32_t value){for(size_t i=0;i<4;++i) plan.shared[off+i]=uint8_t(value>>(8*i));};
            for(uint32_t slot=0;slot<16;++slot) {write(slot*4,slot);write(192+slot*4,slot);}
            write(256,(d.state.words[10112/4]&0xFFFF) | ((d.state.words[(10112+16)/4]&0xFFFF)<<16));
            write(280,std::bit_cast<uint32_t>(1.0f/viewport[2])); write(284,std::bit_cast<uint32_t>(-1.0f/viewport[3]));
            plan.pipeline.vertexShader=vs->second.words; plan.pipeline.fragmentShader=ps->second.words;
            plan.pipeline.vertexEntry=vs->second.entryPoint.c_str(); plan.pipeline.fragmentEntry=ps->second.entryPoint.c_str();
            plan.pipeline.generationsAbi=true; plan.pipeline.preserveTargets=true; plan.pipeline.vertexBindings=plan.vertexBindings;
            plan.pipeline.attributes=plan.attributes; plan.pipeline.cullMode=state.raster.cullMode;
            plan.pipeline.frontFace=state.raster.frontFace; plan.pipeline.depthTest=state.depth.depthTestEnable;
            plan.pipeline.depthKind=(nativeReplay && d.state.DepthTarget()) ? HostGpu::ImageKind::Depth24Stencil8 : HostGpu::ImageKind::Depth32;
            plan.pipeline.stencilTest=state.depth.stencilTestEnable;
            plan.pipeline.stencilFront=state.depth.front; plan.pipeline.stencilBack=state.depth.back;
            plan.pipeline.depthWrite=state.depth.depthWriteEnable; plan.pipeline.depthCompare=state.depth.depthCompareOp;
            plan.pipeline.blend=state.blend[0]; plan.pipeline.blend.colorWriteMask=d.state.words[10460/4]&15;
        }
    }
    ReleaseDrawResources();
    resolvedShaders = std::move(nextShaders);
    // Reserve before creating Vulkan handles, so push_back can't leak a new ID.
    drawResources.reserve(batch.draws.size() * (4 + 16 + GuestGpu::NativeState::TextureCount));
    states.reserve(batch.draws.size());
    std::vector<HostGpu::Resource> pipelines;
    if(graphics)
    {
        if(!nativeReplay && (resize || host.SwapchainNeedsResize()) && !RecreateTargets()) return GuestGpu::SubmissionResult::Incomplete;
        pipelines.reserve(batch.draws.size());
        for(auto& plan:prepared)
        {
            const auto pipeline=host.CreateGraphicsPipeline(plan.pipeline);
            if(!pipeline) { Fail(host.Error()); ReleaseDrawResources(); return GuestGpu::SubmissionResult::Incomplete; }
            drawResources.push_back(pipeline); pipelines.push_back(pipeline);
        }
        if(!nativeReplay && (!host.ClearColor(color,{0,0,0,1}) || !host.ClearDepth(depth,1)))
        { Fail(host.Error()); ReleaseDrawResources(); return GuestGpu::SubmissionResult::Incomplete; }
    }
    size_t nextClear=0;
    auto applyClear=[&](const GuestGpu::NativeClear& clear) {
        if(((clear.flags&1) && !host.ClearColor(color,clear.color)) ||
           ((clear.flags&0x10) && !host.ClearDepth(depth,clear.depth)))
        { Fail(host.Error()); return false; }
        return true;
    };
    for (size_t n = 0; n < batch.draws.size(); ++n)
    {
        const auto& draw = batch.draws[n];
        while(nextClear<batch.clears.size() && batch.clears[nextClear].sequence<draw.sequence)
            if(!applyClear(batch.clears[nextClear++]))
            { ReleaseDrawResources(); return GuestGpu::SubmissionResult::Incomplete; }
        states.push_back(HostGpu::DecodeFixedState(draw.state));
        std::array<uint8_t, 8192> constants{};
        for (size_t i = 0; i < constants.size() / 4; ++i)
        {
            const auto word = draw.state.words[1920 / 4 + i];
            for (size_t byte = 0; byte < 4; ++byte) constants[i * 4 + byte] = uint8_t(word >> (byte * 8));
        }
        auto id = Upload(constants, graphics ? VK_BUFFER_USAGE_STORAGE_BUFFER_BIT | VK_BUFFER_USAGE_SHADER_DEVICE_ADDRESS_BIT : VK_BUFFER_USAGE_UNIFORM_BUFFER_BIT);
        if (!id) { ReleaseDrawResources(); return GuestGpu::SubmissionResult::Incomplete; }
        drawResources.push_back(id);
        auto& plan=prepared[n]; plan.bindings.constants=id;
        plan.vertexBuffers.reserve(plan.vertexBindings.size());
        HostGpu::Resource indexBuffer=0;
        if(graphics)
        {
            id=Upload(plan.shared,VK_BUFFER_USAGE_STORAGE_BUFFER_BIT | VK_BUFFER_USAGE_SHADER_DEVICE_ADDRESS_BIT);
            if(!id) { ReleaseDrawResources(); return GuestGpu::SubmissionResult::Incomplete; }
            drawResources.push_back(id); plan.bindings.shared=id;
        }
        if (!hostIndices[n].empty())
        {
            id = Upload(hostIndices[n], VK_BUFFER_USAGE_INDEX_BUFFER_BIT);
            indexBuffer=id;
            if (!id) { ReleaseDrawResources(); return GuestGpu::SubmissionResult::Incomplete; }
            drawResources.push_back(id);
        }
        for (const auto& vertex : draw.resources.vertices)
        {
            id = Upload(vertex.bytes, VK_BUFFER_USAGE_VERTEX_BUFFER_BIT);
            if (!id) { ReleaseDrawResources(); return GuestGpu::SubmissionResult::Incomplete; }
            drawResources.push_back(id);
            if(graphics && std::any_of(plan.vertexBindings.begin(),plan.vertexBindings.end(),[&](const auto& b){return b.binding==vertex.stream;}))
                plan.vertexBuffers.push_back({vertex.stream,id});
        }
        for (const auto& texture : draw.resources.textures)
        {
            if(nativeReplay)
            {
                const auto found=nativeTextures.find(texture.physical);
                if(found!=nativeTextures.end())
                {
                    const auto& resolved=found->second;
                    if(!GuestGpu::SameTextureStorage(resolved.descriptor,texture.fetch) || resolved.descriptor.width!=texture.width ||
                       resolved.descriptor.height!=texture.height)
                    { Fail("Resolved texture view alias is unsupported"); ReleaseDrawResources(); return GuestGpu::SubmissionResult::Incomplete; }
                    for(auto& binding:plan.textures) if(binding.slot==texture.slot) binding.image=resolved.image;
                    continue; // sample the GPU resolve, never stale CPU capture bytes
                }
            }
            id = host.CreateImage(texture.width, texture.height, HostGpu::ImageKind::Rgba8);
            if (!id) { Fail(host.Error()); ReleaseDrawResources(); return GuestGpu::SubmissionResult::Incomplete; }
            drawResources.push_back(id);
            if(graphics) for(auto& binding:plan.textures) if(binding.slot==texture.slot) binding.image=id;
            if (!host.UploadRgba(id, texture.rgba))
            { Fail(host.Error()); ReleaseDrawResources(); return GuestGpu::SubmissionResult::Incomplete; }
        }
        if(graphics)
        {
            plan.bindings.textures=plan.textures;
            plan.bindings.vertices=plan.vertexBuffers;
            if(!host.DrawIndexed(pipelines[n],color,depth,0,indexBuffer,indexCounts[n],
                indexStrides[n]==2 ? VK_INDEX_TYPE_UINT16:VK_INDEX_TYPE_UINT32,{0,0,0,1},&plan.bindings))
            { Fail(host.Error()); ReleaseDrawResources(); return GuestGpu::SubmissionResult::Incomplete; }
        }
    }
    while(nextClear<batch.clears.size())
        if(!applyClear(batch.clears[nextClear++]))
        { ReleaseDrawResources(); return GuestGpu::SubmissionResult::Incomplete; }
    frameReady=graphics;
    if(graphics) { frameWidth=width; frameHeight=height; }
    return graphics ? GuestGpu::SubmissionResult::Submitted : GuestGpu::SubmissionResult::ResourcesUploaded;
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
    if(resize || host.SwapchainNeedsResize())
    {
        if(frameImage)
        {
            if(HasPresentationSurface() && !host.ResizeSwapchain(width,height)) { Fail(host.Error()); return; }
            resize=false;
        }
        else if(!RecreateTargets()) return;
    }
    if (HasPresentationSurface())
    {
        const bool ok=frameReady ? host.PresentImage(frameImage ? frameImage : color) : host.PresentClear({0,0,0,1});
        if(!ok && !host.SwapchainNeedsResize()) Fail(host.Error());
    }
    frameReady=false;
}
void VulkanBackend::Resize(uint32_t w, uint32_t h)
{
    std::lock_guard lock(mutex);
    width = w; height = h; resize = true;
}
HostGpu::VulkanStats VulkanBackend::GetHostStats() const { std::lock_guard lock(mutex); return host.Stats(); }
std::string VulkanBackend::GetLastError() const { std::lock_guard lock(mutex); return error; }
GuestGpu::NativeRenderReport VulkanBackend::GetNativeRenderReport() const
{
    // A copy: the renderer keeps counting while the report is being written, and
    // the host never holds this lock.
    std::lock_guard lock(mutex);
    return nativeReport;
}

bool VulkanBackend::ReadDiagnosticFrame(std::vector<uint8_t>& rgba)
{
    std::lock_guard lock(mutex);
    rgba.clear();
    if(!frameReady || !host.IsReady()) return false;
    if(!host.ReadImage(frameImage ? frameImage : color,rgba)) return Fail(host.Error());
    return true;
}
