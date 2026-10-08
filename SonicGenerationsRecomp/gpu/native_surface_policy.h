#pragma once
// What a guest render target costs this renderer.
//
// A Xenos surface describes itself with a sample count and a format field, and
// this renderer draws single-sample into one RGBA8 colour image and one depth
// image. A surface is therefore never simply "supported" or "unsupported": it is
// somewhere between the two, and the difference has to be named in the report
// instead of hidden behind a silent approximation. This is the whole reason this
// policy lives in its own header -- it is the decision, and it is testable
// without a GPU.
#include <cstdint>

namespace GuestGpu
{
    // Xenos MsaaSamples: 0 = 1x, 1 = 2x, 2 = 4x. Nothing defines 3, so a surface
    // that asks for it is not a surface this renderer understands.
    inline constexpr uint32_t kMaxGuestSamples = 2;
    // ColourRenderTargetFormat: 0 = 8_8_8_8, 1 = 8_8_8_8_GAMMA, 2 = 2_10_10_10,
    // 3 = 2_10_10_10_FLOAT, 4..7 = 16/32-bit integer and float variants.
    inline constexpr uint32_t kColorFormat_8_8_8_8 = 0;
    // DepthRenderTargetFormat: 0 = D24S8, 1 = D24FS8 (20e4 float).
    inline constexpr uint32_t kDepthFormat_D24S8 = 0;
    inline constexpr uint32_t kDepthFormat_D24FS8 = 1;
    // Bits of the surface info word this renderer understands: the EDRAM tile
    // base and the format field. Anything else means the surface is described by
    // something unsupported, and guessing would be worse than refusing.
    inline constexpr uint32_t kSurfaceInfoKnownBits = 0xFFFu | (0xFu << 16);

    // A guest resolve goes from an EDRAM render target to a texture, and the two
    // need not agree on size: a title that renders below the display resolution
    // resolves up into it, which is a scale and not an error.
    constexpr bool ResolveScales(uint32_t sourceWidth, uint32_t sourceHeight,
                                 uint32_t destinationWidth, uint32_t destinationHeight) noexcept
    {
        return sourceWidth != destinationWidth || sourceHeight != destinationHeight;
    }

    enum class SurfaceFidelity : uint32_t { Exact, Degraded, Unsupported };

    inline const char* SurfaceFidelityName(SurfaceFidelity fidelity)
    {
        switch (fidelity)
        {
        case SurfaceFidelity::Exact: return "exact";
        case SurfaceFidelity::Degraded: return "degraded";
        case SurfaceFidelity::Unsupported: break;
        }
        return "unsupported";
    }

    struct SurfaceAcceptance
    {
        SurfaceFidelity fidelity = SurfaceFidelity::Unsupported;
        uint32_t samples = 0;  // as the guest asked for it
        uint32_t format = 0;   // as the guest declared it

        bool accepted() const { return fidelity != SurfaceFidelity::Unsupported; }
        bool multisampled() const { return samples != 0; }
    };

    // Colour targets. Every defined sample count is drawn once per pixel, which
    // is what the guest's own resolve produces from a single sample -- the frame
    // is right and only the antialiasing is missing. A format this renderer has
    // no image for is drawn as RGBA8.
    constexpr SurfaceAcceptance AcceptColorSurface(uint32_t samples, uint32_t format) noexcept
    {
        SurfaceAcceptance result;
        result.samples = samples;
        result.format = format;
        if (samples > kMaxGuestSamples) return result;
        result.fidelity = (samples || format != kColorFormat_8_8_8_8)
                              ? SurfaceFidelity::Degraded
                              : SurfaceFidelity::Exact;
        return result;
    }

    // Depth targets. The guest's declared format says which precision it wanted,
    // not which buffer exists here: both 24-bit formats are drawn into one
    // depth/stencil image, so D24FS8 loses its floating-point distribution over
    // [0, 2) but keeps its comparisons.
    constexpr SurfaceAcceptance AcceptDepthSurface(uint32_t samples, uint32_t format) noexcept
    {
        SurfaceAcceptance result;
        result.samples = samples;
        result.format = format;
        if (samples > kMaxGuestSamples || format > kDepthFormat_D24FS8) return result;
        result.fidelity = (samples || format != kDepthFormat_D24S8)
                              ? SurfaceFidelity::Degraded
                              : SurfaceFidelity::Exact;
        return result;
    }
}
