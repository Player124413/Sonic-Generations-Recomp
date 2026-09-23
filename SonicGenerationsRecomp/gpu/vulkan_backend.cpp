#include <gpu/vulkan_backend.h>
#include <SDL.h>
#include <SDL_vulkan.h>
#include <algorithm>
#include <array>
#include <cstdio>
#include <new>
#include <bit>
#include <cmath>

VulkanBackend::VulkanBackend(SDL_Window* w, bool enableValidation, bool enableGameDraws) : window(w), validation(enableValidation), drawEnabled(enableGameDraws) {}
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
    frameReady = false;
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
    color = newColor; depth = newDepth; resize = false; frameReady=false;
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
    frameReady = false;
    if (!host.IsReady()) return GuestGpu::SubmissionResult::Unsupported;
    if (batch.errors.Any() || batch.draws.empty() || batch.draws.size() > GuestGpu::CommandStream::MaxDraws)
        return GuestGpu::SubmissionResult::Incomplete;
    frameReady = false;
    struct PreparedDraw
    {
        std::vector<VkVertexInputAttributeDescription> attributes;
        std::vector<HostGpu::GameTextureBinding> textures;
        std::array<uint8_t,320> shared{};
        HostGpu::GraphicsPipelineInfo pipeline;
        HostGpu::GameDrawBindings bindings;
    };
    std::vector<PreparedDraw> prepared(batch.draws.size());
    const bool graphics = drawEnabled && std::any_of(batch.draws.begin(),batch.draws.end(),[](const auto& d){return d.state.VertexShader() || d.state.PixelShader();});
    if(graphics && (!host.SupportsGenerationsAbi() || !width || !height))
    { Fail("Native draw requires Vulkan 1.2 buffer device address, scalar layout and descriptor indexing features"); return GuestGpu::SubmissionResult::Unsupported; }
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
    if(graphics)
    {
        const auto firstTarget=batch.draws.front().state.ColorTargets()[0];
        for(size_t n=0;n<batch.draws.size();++n)
        {
            const auto& d=batch.draws[n]; auto& plan=prepared[n];
            const auto vs=nextShaders.find(d.vertexShader.hash), ps=nextShaders.find(d.pixelShader.hash);
            const auto targets=d.state.ColorTargets();
            const auto state=HostGpu::DecodeFixedState(d.state);
            if(d.kind!=GuestGpu::DrawKind::IndexedVertices || d.arguments[0]!=4 || !d.indices.count || d.indices.count%3 ||
                vs==nextShaders.end() || ps==nextShaders.end() || !d.resources.captured ||
                !d.vertexShader.reflectionValid || !d.pixelShader.reflectionValid || d.vertexShader.samplerMask ||
                !d.vertexShader.packedBooleansSupported || !d.pixelShader.packedBooleansSupported ||
                !firstTarget || targets[0]!=firstTarget || targets[1] || targets[2] || targets[3] ||
                ((d.state.words[10372/4]>>16)&15) || ((d.state.words[10368/4]>>16)&3) ||
                d.state.DepthTarget()!=batch.draws.front().state.DepthTarget() ||
                ((state.depth.depthTestEnable || state.depth.depthWriteEnable) && !d.state.DepthTarget()) || state.requiresStencil || state.requiresAlphaTest || state.requiresAlphaToCoverage ||
                state.unsupportedRasterBits || state.invalidBlend || d.resources.vertices.size()!=1 || d.resources.vertices[0].stream!=0)
            { Fail("Draw outside supported profile: indexed triangles, one target, one stream, 2D pixel textures, no stencil/MSAA/alpha test"); return GuestGpu::SubmissionResult::Incomplete; }
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
                if(!selected || selected->stream || selected->method)
                { Fail("Missing or unsupported native vertex declaration input"); return GuestGpu::SubmissionResult::Incomplete; }
                VkFormat format=VK_FORMAT_UNDEFINED;
                switch(selected->type)
                {
                    case 0x2C83A4: format=VK_FORMAT_R32_SFLOAT; break;
                    case 0x2C23A5: format=VK_FORMAT_R32G32_SFLOAT; break;
                    case 0x2A23B9: format=VK_FORMAT_R32G32B32_SFLOAT; break;
                    case 0x1A23A6: format=VK_FORMAT_R32G32B32A32_SFLOAT; break;
                    default: Fail("Native vertex format unsupported by current draw profile"); return GuestGpu::SubmissionResult::Incomplete;
                }
                plan.attributes.push_back({loc,0,format,selected->offset});
            }
            if(plan.attributes.empty()) { Fail("Procedural vertex input not supported yet"); return GuestGpu::SubmissionResult::Incomplete; }
            const auto viewport=d.state.Viewport(); const auto scissor=d.state.Scissor();
            if(viewport[0]!=0 || viewport[1]!=0 || viewport[2]!=float(width) || viewport[3]!=float(height) ||
                !std::isfinite(viewport[4]) || !std::isfinite(viewport[5]) || viewport[4]<0 || viewport[5]>1 || viewport[4]>viewport[5] ||
                scissor[0]<0 || scissor[1]<0 || scissor[2]<scissor[0] || scissor[3]<scissor[1] ||
                uint32_t(scissor[2])>width || uint32_t(scissor[3])>height)
            { Fail("Native draw requires full-sized viewport and bounded scissor"); return GuestGpu::SubmissionResult::Incomplete; }
            plan.bindings.viewport={viewport[0],viewport[1],viewport[2],viewport[3],viewport[4],viewport[5]};
            plan.bindings.scissor={{scissor[0],scissor[1]},{uint32_t(scissor[2]-scissor[0]),uint32_t(scissor[3]-scissor[1])}};
            plan.bindings.baseVertex=std::bit_cast<int32_t>(d.arguments[1]);
            const auto& vertices=d.resources.vertices[0];
            for(size_t i=0;i<hostIndices[n].size();i+=d.indices.stride)
            {
                uint32_t index=0; for(uint32_t b=0;b<d.indices.stride;++b) index|=uint32_t(hostIndices[n][i+b])<<(8*b);
                const int64_t vertex=int64_t(index)+plan.bindings.baseVertex;
                if(vertex<0 || uint64_t(vertex)>=vertices.bytes.size()/vertices.stride)
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
            write(280,std::bit_cast<uint32_t>(1.0f/float(width))); write(284,std::bit_cast<uint32_t>(-1.0f/float(height)));
            plan.pipeline.vertexShader=vs->second.words; plan.pipeline.fragmentShader=ps->second.words;
            plan.pipeline.vertexEntry=vs->second.entryPoint.c_str(); plan.pipeline.fragmentEntry=ps->second.entryPoint.c_str();
            plan.pipeline.generationsAbi=true; plan.pipeline.preserveTargets=true; plan.pipeline.vertexStride=vertices.stride;
            plan.pipeline.attributes=plan.attributes; plan.pipeline.cullMode=state.raster.cullMode;
            plan.pipeline.frontFace=state.raster.frontFace; plan.pipeline.depthTest=state.depth.depthTestEnable;
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
        pipelines.reserve(batch.draws.size());
        for(auto& plan:prepared)
        {
            const auto pipeline=host.CreateGraphicsPipeline(plan.pipeline);
            if(!pipeline) { Fail(host.Error()); ReleaseDrawResources(); return GuestGpu::SubmissionResult::Incomplete; }
            drawResources.push_back(pipeline); pipelines.push_back(pipeline);
        }
        if(!host.ClearColor(color,{0,0,0,1}) || !host.ClearDepth(depth,1))
        { Fail(host.Error()); ReleaseDrawResources(); return GuestGpu::SubmissionResult::Incomplete; }
    }
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
        auto id = Upload(constants, graphics ? VK_BUFFER_USAGE_STORAGE_BUFFER_BIT | VK_BUFFER_USAGE_SHADER_DEVICE_ADDRESS_BIT : VK_BUFFER_USAGE_UNIFORM_BUFFER_BIT);
        if (!id) { ReleaseDrawResources(); return GuestGpu::SubmissionResult::Incomplete; }
        drawResources.push_back(id);
        auto& plan=prepared[n]; plan.bindings.constants=id;
        HostGpu::Resource vertexBuffer=0,indexBuffer=0;
        if(graphics)
        {
            id=Upload(plan.shared,VK_BUFFER_USAGE_STORAGE_BUFFER_BIT | VK_BUFFER_USAGE_SHADER_DEVICE_ADDRESS_BIT);
            if(!id) { ReleaseDrawResources(); return GuestGpu::SubmissionResult::Incomplete; }
            drawResources.push_back(id); plan.bindings.shared=id;
        }
        if (draw.kind == GuestGpu::DrawKind::IndexedVertices && !draw.indices.bytes.empty())
        {
            id = Upload(hostIndices[n], VK_BUFFER_USAGE_INDEX_BUFFER_BIT);
            indexBuffer=id;
            if (!id) { ReleaseDrawResources(); return GuestGpu::SubmissionResult::Incomplete; }
            drawResources.push_back(id);
        }
        for (const auto& vertex : draw.resources.vertices)
        {
            id = Upload(vertex.bytes, VK_BUFFER_USAGE_VERTEX_BUFFER_BIT);
            vertexBuffer=id;
            if (!id) { ReleaseDrawResources(); return GuestGpu::SubmissionResult::Incomplete; }
            drawResources.push_back(id);
        }
        for (const auto& texture : draw.resources.textures)
        {
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
            if(!host.DrawIndexed(pipelines[n],color,depth,vertexBuffer,indexBuffer,draw.indices.count,
                draw.indices.stride==2 ? VK_INDEX_TYPE_UINT16:VK_INDEX_TYPE_UINT32,{0,0,0,1},&plan.bindings))
            { Fail(host.Error()); ReleaseDrawResources(); return GuestGpu::SubmissionResult::Incomplete; }
        }
    }
    frameReady=graphics;
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
    if ((resize || host.SwapchainNeedsResize()) && !RecreateTargets()) return;
    if (window)
    {
        const bool ok=frameReady ? host.PresentImage(color) : host.PresentClear({0,0,0,1});
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
