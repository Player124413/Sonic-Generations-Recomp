#include <gpu/vulkan_state.h>

namespace HostGpu
{
namespace
{
    // Xenos encodings, independently represented (not PC D3DRS enum values).
    bool Factor(uint32_t value, VkBlendFactor& result)
    {
        switch (value)
        {
        case 0: result = VK_BLEND_FACTOR_ZERO; break;
        case 1: result = VK_BLEND_FACTOR_ONE; break;
        case 4: result = VK_BLEND_FACTOR_SRC_COLOR; break;
        case 5: result = VK_BLEND_FACTOR_ONE_MINUS_SRC_COLOR; break;
        case 6: result = VK_BLEND_FACTOR_SRC_ALPHA; break;
        case 7: result = VK_BLEND_FACTOR_ONE_MINUS_SRC_ALPHA; break;
        case 8: result = VK_BLEND_FACTOR_DST_COLOR; break;
        case 9: result = VK_BLEND_FACTOR_ONE_MINUS_DST_COLOR; break;
        case 10: result = VK_BLEND_FACTOR_DST_ALPHA; break;
        case 11: result = VK_BLEND_FACTOR_ONE_MINUS_DST_ALPHA; break;
        case 12: result = VK_BLEND_FACTOR_CONSTANT_COLOR; break;
        case 13: result = VK_BLEND_FACTOR_ONE_MINUS_CONSTANT_COLOR; break;
        case 14: result = VK_BLEND_FACTOR_CONSTANT_ALPHA; break;
        case 15: result = VK_BLEND_FACTOR_ONE_MINUS_CONSTANT_ALPHA; break;
        case 16: result = VK_BLEND_FACTOR_SRC_ALPHA_SATURATE; break;
        default: return false;
        }
        return true;
    }
    bool Operation(uint32_t value, VkBlendOp& result)
    {
        constexpr VkBlendOp operations[] = {VK_BLEND_OP_ADD, VK_BLEND_OP_SUBTRACT, VK_BLEND_OP_MIN, VK_BLEND_OP_MAX, VK_BLEND_OP_REVERSE_SUBTRACT};
        if (value >= std::size(operations)) return false;
        result = operations[value]; return true;
    }
    void Depth(uint32_t value, VulkanFixedState& state)
    {
        constexpr VkCompareOp compare[] = {VK_COMPARE_OP_NEVER, VK_COMPARE_OP_LESS, VK_COMPARE_OP_EQUAL, VK_COMPARE_OP_LESS_OR_EQUAL,
            VK_COMPARE_OP_GREATER, VK_COMPARE_OP_NOT_EQUAL, VK_COMPARE_OP_GREATER_OR_EQUAL, VK_COMPARE_OP_ALWAYS};
        state.depth.depthTestEnable = (value >> 1) & 1;
        state.depth.depthWriteEnable = (value >> 2) & 1;
        state.depth.depthCompareOp = compare[(value >> 4) & 7];
        state.depth.minDepthBounds = 0; state.depth.maxDepthBounds = 1;
        state.requiresStencil = (value & 1) != 0;
        state.depth.stencilTestEnable = state.requiresStencil;
        // Xenos StencilOp 0..7 matches Vulkan's KEEP..DECREMENT_AND_WRAP.
        const auto face = [&](unsigned shift) {
            VkStencilOpState s{};
            s.compareOp = compare[(value >> shift) & 7];
            s.failOp = VkStencilOp((value >> (shift+3)) & 7);
            s.passOp = VkStencilOp((value >> (shift+6)) & 7);
            s.depthFailOp = VkStencilOp((value >> (shift+9)) & 7);
            return s;
        };
        state.depth.front = face(8);
        state.depth.back = (value & 128) ? face(20) : state.depth.front;
    }
    void Raster(uint32_t value, VulkanFixedState& state)
    {
        state.raster.polygonMode = VK_POLYGON_MODE_FILL; state.raster.lineWidth = 1;
        state.raster.cullMode = ((value & 1) ? VK_CULL_MODE_FRONT_BIT : 0) | ((value & 2) ? VK_CULL_MODE_BACK_BIT : 0);
        // Literal native orientation. Final viewport/clip-space transform is not
        // established yet, so this alone is not a ready graphics pipeline.
        state.raster.frontFace = (value & 4) ? VK_FRONT_FACE_CLOCKWISE : VK_FRONT_FACE_COUNTER_CLOCKWISE;
        state.unsupportedRasterBits = value & ~7u;
    }
    void Color(uint32_t value, VulkanFixedState& state)
    {
        state.requiresAlphaTest = (value & 8) != 0;
        state.requiresAlphaToCoverage = (value & 16) != 0;
    }
}
VulkanFixedState DecodeFixedState(const GuestGpu::NativeState& native)
{
    VulkanFixedState result;
    // Verified Generations device offsets -> host handlers. No synthetic PPC
    // addresses are written into unknown guest memory.
    struct Entry { size_t offset; void (*apply)(uint32_t, VulkanFixedState&); };
    constexpr Entry dispatch[] = {{10548, Depth}, {10556, Color}, {10568, Raster}};
    for (auto entry : dispatch) entry.apply(native.words[entry.offset / 4], result);
    // Native setters 82DA8FA8..82DA9060 store BE byte lanes of
    // RB_STENCILREFMASK at +10496 (front), +10492 (back).
    const auto masks = [](VkStencilOpState& face, uint32_t word) {
        face.reference=word & 255; face.compareMask=(word >> 8) & 255; face.writeMask=(word >> 16) & 255;
    };
    masks(result.depth.front,native.words[10496/4]);
    masks(result.depth.back,native.words[(native.words[10548/4]&128) ? 10492/4 : 10496/4]);
    constexpr size_t blends[] = {10552, 10584, 10588, 10592};
    for (size_t i = 0; i < std::size(blends); ++i)
    {
        const uint32_t word = native.words[blends[i] / 4];
        auto& b = result.blend[i];
        // Native SDK encodes disabled blending as ONE/ZERO/ADD in each lane.
        b.blendEnable = word != 0x00010001;
        // Write masks are intentionally not guessed; pipeline wiring must supply
        // them from the recovered mask register before use (zero by default).
        result.invalidBlend |= !Factor(word & 31, b.srcColorBlendFactor);
        result.invalidBlend |= !Factor((word >> 8) & 31, b.dstColorBlendFactor);
        result.invalidBlend |= !Factor((word >> 16) & 31, b.srcAlphaBlendFactor);
        result.invalidBlend |= !Factor((word >> 24) & 31, b.dstAlphaBlendFactor);
        result.invalidBlend |= !Operation((word >> 5) & 7, b.colorBlendOp);
        result.invalidBlend |= !Operation((word >> 21) & 7, b.alphaBlendOp);
    }
    return result;
}
}

VkFormat HostGpu::DecodeVertexFormat(uint32_t type) noexcept
{
    // Xbox SDK encodings cross-checked with UnleashedRecomp video.h/video.cpp.
    switch(type)
    {
    case 0x2C83A4: return VK_FORMAT_R32_SFLOAT;
    case 0x2C23A5: return VK_FORMAT_R32G32_SFLOAT;
    case 0x2A23B9: return VK_FORMAT_R32G32B32_SFLOAT;
    case 0x1A23A6: return VK_FORMAT_R32G32B32A32_SFLOAT;
    case 0x182886: return VK_FORMAT_B8G8R8A8_UNORM;
    case 0x1A2086: case 0x1A2186: return VK_FORMAT_R8G8B8A8_UNORM;
    case 0x2C2159: return VK_FORMAT_R16G16_SNORM;
    case 0x1A215A: return VK_FORMAT_R16G16B16A16_SNORM;
    case 0x2C2059: return VK_FORMAT_R16G16_UNORM;
    case 0x1A205A: return VK_FORMAT_R16G16B16A16_UNORM;
    case 0x2C235F: return VK_FORMAT_R16G16_SFLOAT;
    case 0x1A2360: return VK_FORMAT_R16G16B16A16_SFLOAT;
    default: return VK_FORMAT_UNDEFINED;
    }
}
uint32_t HostGpu::VertexFormatSize(VkFormat format) noexcept
{
    switch(format)
    {
    case VK_FORMAT_R32_SFLOAT: case VK_FORMAT_B8G8R8A8_UNORM:
    case VK_FORMAT_R8G8B8A8_UNORM: case VK_FORMAT_R16G16_SNORM:
    case VK_FORMAT_R16G16_UNORM: case VK_FORMAT_R16G16_SFLOAT: return 4;
    case VK_FORMAT_R32G32_SFLOAT: case VK_FORMAT_R16G16B16A16_SNORM:
    case VK_FORMAT_R16G16B16A16_UNORM: case VK_FORMAT_R16G16B16A16_SFLOAT: return 8;
    case VK_FORMAT_R32G32B32_SFLOAT: return 12;
    case VK_FORMAT_R32G32B32A32_SFLOAT: return 16;
    default: return 0;
    }
}
