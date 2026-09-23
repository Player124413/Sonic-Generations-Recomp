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
    enum class ImageKind { Rgba8, Depth32 };
    // Initial host graphics profile: one RGBA8 target, D32 depth, one vertex
    // stream and no shader descriptors/push constants. This is not the game's
    // shader ABI. Real compiled SPIR-V is mandatory; there are no dummy shaders.
    struct GraphicsPipelineInfo
    {
        std::span<const uint32_t> vertexShader, fragmentShader;
        uint32_t vertexStride = 0;
        std::span<const VkVertexInputAttributeDescription> attributes;
        VkCullModeFlags cullMode = VK_CULL_MODE_NONE;
        VkFrontFace frontFace = VK_FRONT_FACE_COUNTER_CLOCKWISE;
        bool depthTest = false, depthWrite = false;
        VkCompareOp depthCompare = VK_COMPARE_OP_LESS_OR_EQUAL;
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
        Resource CreateGraphicsPipeline(const GraphicsPipelineInfo& info);
        bool DrawIndexed(Resource pipeline, Resource color, Resource depth,
            Resource vertices, Resource indices, uint32_t count, VkIndexType indexType,
            const std::array<float, 4>& clearColor);
        bool Destroy(Resource id);
        bool WriteBuffer(Resource id, std::span<const uint8_t> data);
        bool ReadBuffer(Resource id, std::span<uint8_t> data);
        bool CopyBuffer(Resource source, Resource destination, size_t bytes);
        bool UploadRgba(Resource image, std::span<const uint8_t> data);
        bool ClearColor(Resource image, const std::array<float, 4>& color);
        bool ClearDepth(Resource image, float depth);
        bool ReadImage(Resource image, std::vector<uint8_t>& out);

        // WSI displays an explicit host clear until game shaders/resolve are wired.
        // It is not a game frame and never increments a draw-call counter.
        bool ResizeSwapchain(uint32_t width, uint32_t height);
        bool PresentClear(const std::array<float, 4>& color);
        bool SwapchainNeedsResize() const;
    private:
        struct Impl;
        std::unique_ptr<Impl> impl;
    };
}
