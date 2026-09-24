#pragma once

#include <vulkan/vulkan.h>
#include <array>
#include <cstdint>
#include <functional>
#include <memory>
#include <span>
#include <string>
#include <vector>

namespace HostGpu
{
    using Resource = uint64_t; // monotonically allocated, zero is invalid
    enum class ImageKind { Rgba8, Depth32, Depth24Stencil8 };
    // One RGBA8 target, D32/D24S8 depth and per-vertex streams. generationsAbi selects
    // the fork's BDA/push-constant + 2D image/sampler layout; otherwise this is
    // a descriptor-free fixture profile. No runtime fallback shaders.
    struct GraphicsPipelineInfo
    {
        std::span<const uint32_t> vertexShader, fragmentShader;
        uint32_t vertexStride = 0; // legacy single-binding shorthand
        std::span<const VkVertexInputBindingDescription> vertexBindings;
        std::span<const VkVertexInputAttributeDescription> attributes;
        VkCullModeFlags cullMode = VK_CULL_MODE_NONE;
        VkFrontFace frontFace = VK_FRONT_FACE_COUNTER_CLOCKWISE;
        bool generationsAbi = false;
        const char* vertexEntry = "main";
        const char* fragmentEntry = "main";
        uint32_t specialization = 0;
        bool preserveTargets = false;
        VkPipelineColorBlendAttachmentState blend{};
        ImageKind depthKind = ImageKind::Depth32;
        bool stencilTest = false;
        VkStencilOpState stencilFront{}, stencilBack{};
        bool depthTest = false, depthWrite = false;
        VkCompareOp depthCompare = VK_COMPARE_OP_LESS_OR_EQUAL;
    };
    struct GameTextureBinding
    {
        uint32_t slot = 0;
        Resource image = 0;
        VkFilter filter = VK_FILTER_NEAREST;
        VkSamplerAddressMode u = VK_SAMPLER_ADDRESS_MODE_REPEAT, v = VK_SAMPLER_ADDRESS_MODE_REPEAT;
    };
    struct GameVertexBinding { uint32_t stream=0; Resource buffer=0; };
    struct GameDrawBindings
    {
        Resource constants = 0, shared = 0;
        std::span<const GameTextureBinding> textures;
        std::span<const GameVertexBinding> vertices;
        VkViewport viewport{};
        VkRect2D scissor{};
        int32_t baseVertex = 0;
    };
    struct VulkanConfig
    {
        std::span<const char* const> instanceExtensions;
        // Optional WSI. Ownership of the returned surface transfers to the host.
        std::function<VkSurfaceKHR(VkInstance)> createSurface;
        bool validation = false; // explicitly requested layer must exist
    };
    struct VulkanStats
    {
        uint64_t submissions = 0;
        uint64_t presents = 0;
        uint64_t buffersCreated = 0;
        uint64_t imagesCreated = 0;
        uint64_t pipelinesCreated = 0;
        uint64_t indexedDraws = 0;
        uint64_t allocatedBytes = 0;
        uint64_t validationErrors = 0;
    };

    // Synchronous reference implementation: every submission is fence-complete
    // on return. Callers serialize access. No guest pointers or SDK layouts here.
    class VulkanHost
    {
    public:
        VulkanHost();
        ~VulkanHost();
        VulkanHost(const VulkanHost&) = delete;
        VulkanHost& operator=(const VulkanHost&) = delete;
        bool Init(const VulkanConfig& config = {});
        void Shutdown();
        bool IsReady() const;
        const std::string& Error() const;
        const std::string& AdapterName() const;
        VulkanStats Stats() const;

        Resource CreateBuffer(size_t bytes, VkBufferUsageFlags usage, bool hostVisible);
        Resource CreateImage(uint32_t width, uint32_t height, ImageKind kind);
        bool SupportsGenerationsAbi() const;
        Resource CreateGraphicsPipeline(const GraphicsPipelineInfo& info);
        bool DrawIndexed(Resource pipeline, Resource color, Resource depth,
            Resource vertices, Resource indices, uint32_t count, VkIndexType indexType,
            const std::array<float, 4>& clearColor, const GameDrawBindings* game = nullptr);
        bool Destroy(Resource id);
        bool WriteBuffer(Resource id, std::span<const uint8_t> data);
        bool ReadBuffer(Resource id, std::span<uint8_t> data);
        bool CopyBuffer(Resource source, Resource destination, size_t bytes);
        bool UploadRgba(Resource image, std::span<const uint8_t> data);
        bool CopyImage(Resource source,Resource destination); // equal-size, single-sample resolve/copy
        bool ClearColor(Resource image, const std::array<float, 4>& color);
        bool ClearColorRegion(Resource image, const std::array<float, 4>& color, const VkRect2D& rectangle);
        bool ClearDepth(Resource image, float depth);
        bool ClearDepthStencil(Resource image, float depth, uint32_t stencil, VkImageAspectFlags aspects);
        bool ClearDepthStencilRegion(Resource image, float depth, uint32_t stencil, VkImageAspectFlags aspects, const VkRect2D& rectangle);
        bool ReadImage(Resource image, std::vector<uint8_t>& out);

        // PresentImage blits a completed host target. It does not implement
        // native Xenos EDRAM resolves or select the guest backbuffer.
        bool ResizeSwapchain(uint32_t width, uint32_t height);
        bool PresentClear(const std::array<float, 4>& color);
        bool PresentImage(Resource image);
        bool SwapchainNeedsResize() const;
    private:
        bool ClearAttachmentRegion(Resource image, const VkClearValue& value, VkImageAspectFlags aspects, const VkRect2D& rectangle);
        bool PresentFrame(Resource image, const std::array<float, 4>& clear);
        struct Impl;
        std::unique_ptr<Impl> impl;
    };
}
