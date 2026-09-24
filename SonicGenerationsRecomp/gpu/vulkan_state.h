#pragma once
#include <gpu/native_commands.h>
#include <vulkan/vulkan.h>

namespace HostGpu
{
    // Host-side state dispatch/translation, not a transplanted GuestDevice table.
    // Unknown or shader-dependent behavior is reported, never silently enabled.
    struct VulkanFixedState
    {
        VkPipelineRasterizationStateCreateInfo raster{VK_STRUCTURE_TYPE_PIPELINE_RASTERIZATION_STATE_CREATE_INFO};
        VkPipelineDepthStencilStateCreateInfo depth{VK_STRUCTURE_TYPE_PIPELINE_DEPTH_STENCIL_STATE_CREATE_INFO};
        std::array<VkPipelineColorBlendAttachmentState, 4> blend{};
        uint32_t unsupportedRasterBits = 0;
        bool requiresStencil = false;
        bool requiresAlphaTest = false;
        bool requiresAlphaToCoverage = false;
        bool invalidBlend = false;
    };
    // Float-compatible Xbox declaration types only. Integer/packed types need
    // shader-interface-aware conversion and are deliberately not reinterpreted.
    VkFormat DecodeVertexFormat(uint32_t nativeType) noexcept;
    uint32_t VertexFormatSize(VkFormat format) noexcept;
    VulkanFixedState DecodeFixedState(const GuestGpu::NativeState& native);
}
