// What the translator promises about guest render targets, and what it then
// reports about them. Both are decisions, not plumbing, so both are checked here:
// header-only, no device, no window, and no GPU vendor's driver behaviour in the
// answer.
#include <gpu/native_render_report.h>
#include <gpu/native_surface_policy.h>

#include <cstdio>
#include <string>

using namespace GuestGpu;

namespace
{
int failures = 0;

void Expect(bool condition, const char* what)
{
    if (condition) return;
    std::fprintf(stderr, "FAIL %s\n", what);
    ++failures;
}

void ExpectText(const std::string& text, const char* needle, const char* what)
{
    if (text.find(needle) != std::string::npos) return;
    std::fprintf(stderr, "FAIL %s (missing \"%s\")\n%s\n", what, needle, text.c_str());
    ++failures;
}

void PolicyAcceptsWhatItCanDraw()
{
    // The guest's ordinary frame: single-sample RGBA8 colour, D24S8 depth.
    const auto plainColor = AcceptColorSurface(0, kColorFormat_8_8_8_8);
    Expect(plainColor.accepted() && plainColor.fidelity == SurfaceFidelity::Exact,
           "single-sample RGBA8 colour is exact");
    const auto plainDepth = AcceptDepthSurface(0, kDepthFormat_D24S8);
    Expect(plainDepth.accepted() && plainDepth.fidelity == SurfaceFidelity::Exact,
           "single-sample D24S8 depth is exact");

    // MSAA is drawn, once per pixel: what the guest's own resolve would produce.
    for (uint32_t samples = 1; samples <= kMaxGuestSamples; ++samples)
    {
        const auto color = AcceptColorSurface(samples, kColorFormat_8_8_8_8);
        Expect(color.accepted() && color.fidelity == SurfaceFidelity::Degraded && color.multisampled(),
               "a multisampled colour target is drawn, and reported as degraded");
        const auto depth = AcceptDepthSurface(samples, kDepthFormat_D24S8);
        Expect(depth.accepted() && depth.fidelity == SurfaceFidelity::Degraded,
               "a multisampled depth target is drawn, and reported as degraded");
    }

    // A sample count the hardware does not define is not a target this renderer
    // can claim to draw, and guessing would be worse than refusing it.
    Expect(!AcceptColorSurface(kMaxGuestSamples + 1, kColorFormat_8_8_8_8).accepted(),
           "an undefined sample count is refused");
    Expect(!AcceptDepthSurface(kMaxGuestSamples + 1, kDepthFormat_D24S8).accepted(),
           "an undefined depth sample count is refused");

    // Formats this renderer has no image for are drawn as RGBA8 and named as
    // approximations -- 2_10_10_10, 16-bit and 32-bit float alike.
    for (uint32_t format : {1u, 2u, 3u, 4u, 5u, 6u, 7u})
    {
        const auto color = AcceptColorSurface(0, format);
        Expect(color.accepted() && color.fidelity == SurfaceFidelity::Degraded,
               "an approximated colour format is drawn, and reported as degraded");
        Expect(color.format == format, "the reported format is the guest's own");
    }
    // Depth has exactly two formats; anything else is a depth target this
    // renderer does not understand.
    Expect(AcceptDepthSurface(0, kDepthFormat_D24FS8).fidelity == SurfaceFidelity::Degraded,
           "D24FS8 depth is drawn with approximated precision");
    Expect(!AcceptDepthSurface(0, kDepthFormat_D24FS8 + 1).accepted(),
           "an unknown depth format is refused");

    // The known-bits mask is what lets the surface register be compared at all:
    // it must cover the tile base and the format field, and nothing else.
    Expect(kSurfaceInfoKnownBits == (0xFFFu | (0xFu << 16)),
           "the surface info mask is the tile base plus the format field");
    Expect(!(0x10u & ~kSurfaceInfoKnownBits) && !((0xFu << 16) & ~kSurfaceInfoKnownBits),
           "the format field is inside the known bits");
    Expect((0x1u << 20) & ~kSurfaceInfoKnownBits, "bits above the format field are not known");
}

void ReportNamesEveryRefusalOnce()
{
    NativeRenderReport report;
    report.colorExact = 3;
    report.colorMultisampled = 2;
    report.depthFormatApproximated = 1;
    report.framesRendered = 4;
    report.NoteRefusal("secondary colour targets (MRT) are not rendered yet");
    report.NoteRefusal("secondary colour targets (MRT) are not rendered yet");
    report.NoteRefusal("colour surface has unknown descriptor bits");
    Expect(report.Refusals() == 3, "refusals are counted across reasons");
    Expect(report.refusals.size() == 2, "the same reason is one entry");

    const std::string text = report.Format();
    ExpectText(text, "[native renderer]", "the section is labelled");
    ExpectText(text, "renderer_frames=4", "frames are reported");
    ExpectText(text, "renderer_color_exact=3", "exact colour targets are reported");
    ExpectText(text, "renderer_color_multisampled=2", "multisampled targets are reported");
    ExpectText(text, "renderer_depth_format_approximated=1", "depth approximations are reported");
    ExpectText(text, "renderer_refusals=3", "the refusal total is reported");
    // The most frequent reason comes first: it is the next thing to fix.
    const auto mrt = text.find("renderer_refusal=2 secondary colour targets");
    const auto bits = text.find("renderer_refusal=1 colour surface has unknown descriptor bits");
    Expect(mrt != std::string::npos && bits != std::string::npos,
           "each refusal is reported with its count and its reason");
    Expect(mrt < bits, "the most frequent refusal is listed first");

    // A refusal with no reason is reported as such instead of being dropped: a
    // missing reason is a bug in the reporting, and hiding it would hide the bug.
    NativeRenderReport unnamed;
    unnamed.NoteRefusal(nullptr);
    unnamed.NoteRefusal("");
    ExpectText(unnamed.Format(), "renderer_refusal=2 unspecified",
               "an unnamed refusal is reported as unspecified");

    // An empty report still prints the section: "nothing was drawn" and "nothing
    // was reported" must not look the same.
    const std::string empty = NativeRenderReport{}.Format();
    ExpectText(empty, "renderer_frames=0", "an empty report is still a report");
    ExpectText(empty, "renderer_refusals=0", "an empty report reports no refusals");
}
}

int main()
{
    PolicyAcceptsWhatItCanDraw();
    ReportNamesEveryRefusalOnce();
    if (failures)
    {
        std::fprintf(stderr, "native surface policy: %d check(s) failed\n", failures);
        return 1;
    }
    std::printf("native surface policy (MSAA, formats, refusal report): all checks passed\n");
    return 0;
}
