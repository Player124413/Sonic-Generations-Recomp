// Tests for our Vulkan presenter's arithmetic.
//
// The presenter itself needs a GPU and a window, so what is checked here is the
// part a wrong number turns into a visibly wrong picture: the letterbox
// rectangle, the swapchain extent and image count, and the bounds that keep a
// corrupt swap token from making the presenter allocate.
//
// Compiled standalone (no SDK, no Vulkan) so CI can run it anywhere. The CMake
// target is rex_presenter_logic_tests, and the manual command is:
// g++ -std=c++20 -Wall -Wextra -Werror -I rex/plugins/native/src -o t rex/tests/presenter_logic_tests.cpp
#include "presenter_logic.h"

#include <cstdint>
#include <cstdio>

using namespace sonic::rex_host::gpu;

namespace {

int failures = 0;

void Check(bool condition, const char* what) {
    if (condition) return;
    std::printf("FAIL %s\n", what);
    ++failures;
}

void TestLetterboxing() {
    // 16:9 guest output on a 16:9 window fills it exactly.
    PixelRect rect = FitGuestOutputRect(1280, 720, 16, 9, 1280, 720);
    Check(rect.x == 0 && rect.y == 0 && rect.width == 1280 && rect.height == 720,
          "16:9 into 16:9 fills the surface");

    // 4:3 on a 16:9 window: pillarboxed, centred, full height.
    rect = FitGuestOutputRect(640, 480, 4, 3, 1920, 1080);
    Check(rect.height == 1080, "4:3 keeps the full height");
    Check(rect.width == 1440, "4:3 width follows the aspect ratio");
    Check(rect.x == 240 && rect.y == 0, "4:3 is centred horizontally");

    // The display aspect ratio comes from the guest video mode, not from the
    // frame: 640x480 with 16:9 output must not be pillarboxed as 4:3.
    rect = FitGuestOutputRect(640, 480, 16, 9, 1920, 1080);
    Check(rect.width == 1920 && rect.height == 1080, "anamorphic 640x480 still fills 16:9");

    // 16:9 on a 4:3 window: letterboxed, centred vertically.
    rect = FitGuestOutputRect(1280, 720, 16, 9, 1024, 768);
    Check(rect.width == 1024, "16:9 uses the full width on 4:3");
    Check(rect.height == 576, "16:9 height follows the aspect ratio");
    Check(rect.y == 96 && rect.x == 0, "16:9 is centred vertically");

    // A missing aspect ratio falls back to the frame's own shape.
    rect = FitGuestOutputRect(320, 240, 0, 0, 640, 480);
    Check(rect.width == 640 && rect.height == 480, "no aspect ratio keeps the frame's shape");

    // Degenerate inputs produce an empty rectangle instead of a wild one.
    Check(FitGuestOutputRect(0, 0, 16, 9, 1920, 1080).width == 0, "no frame means no rectangle");
    Check(FitGuestOutputRect(1280, 720, 16, 9, 0, 0).width == 0, "no surface means no rectangle");

    // A one-pixel surface still yields a rectangle that fits inside it.
    rect = FitGuestOutputRect(1280, 720, 16, 9, 1, 1);
    Check(rect.width == 1 && rect.height == 1 && rect.x == 0 && rect.y == 0,
          "a one-pixel surface stays inside");
}

void TestSwapchainExtent() {
    // A defined current extent (the window system's answer) wins outright.
    PixelExtent extent = ChooseSwapchainExtent(1920, 1080, 8, 8, 16384, 16384, 640, 480);
    Check(extent.width == 1920 && extent.height == 1080, "current extent is authoritative");

    // Undefined extent: the surface size is clamped into the supported range.
    extent = ChooseSwapchainExtent(kUndefinedExtent, kUndefinedExtent, 8, 8, 1280, 720, 4000, 3000);
    Check(extent.width == 1280 && extent.height == 720, "surface size is clamped to the maximum");
    extent = ChooseSwapchainExtent(kUndefinedExtent, kUndefinedExtent, 64, 64, 0, 0, 1, 1);
    Check(extent.width == 64 && extent.height == 64, "surface size is raised to the minimum");
    extent = ChooseSwapchainExtent(kUndefinedExtent, kUndefinedExtent, 1, 1, 0, 0, 0, 0);
    Check(extent.width == 1 && extent.height == 1, "a zero surface never yields a zero extent");
}

void TestImageCount() {
    Check(ChooseSwapchainImageCount(2, 0, 3) == 3, "three images when the surface allows it");
    Check(ChooseSwapchainImageCount(2, 2, 3) == 2, "the surface maximum wins");
    // A surface that only allows the minimum still gets the minimum plus one
    // unless the maximum forbids it - one image would serialize present.
    Check(ChooseSwapchainImageCount(3, 0, 1) == 4, "at least minimum + 1 by default");
    Check(ChooseSwapchainImageCount(1, 1, 3) == 1, "a single-image surface is honoured");
    Check(ChooseSwapchainImageCount(0, 0, 0) == 1, "never zero images");
}

void TestFrontbufferBounds() {
    Check(FrontbufferFits(1280, 720, 1280u * 720u * 4u), "a normal frame fits its own size");
    Check(!FrontbufferFits(1280, 720, 1280u * 720u * 4u - 1), "a frame one byte too large is refused");
    Check(!FrontbufferFits(0, 720, size_t(1) << 30), "a frame without a width is refused");
    Check(!FrontbufferFits(kMaxFrontbufferDimension + 1, 1, size_t(1) << 40),
          "a frame wider than the limit is refused");
    // The multiplication must not overflow: 65535^2 * 4 overflows 32 bits.
    Check(!FrontbufferFits(65535, 65535, size_t(1) << 33), "an overflowing frame is refused");
    // The staging bound the presenter uses: 4K RGBA8 is the largest frame it
    // will look at, and a bigger token is refused rather than allocated.
    Check(FrontbufferFits(3840, 2160, kMaxFrontbufferBytes), "4K fits the staging bound");
    Check(!FrontbufferFits(4096, 4096, kMaxFrontbufferBytes - 1),
          "one byte past the staging bound is refused");
}

void TestSwapchainRetirement() {
    Check(SwapchainOutOfDate(-1000001004 /* VK_ERROR_OUT_OF_DATE_KHR */, -1000001004, 1000001003,
                             -1000000001 /* VK_ERROR_SURFACE_LOST_KHR */),
          "out of date means reconnect");
    Check(SwapchainOutOfDate(1000001003, -1000001004, 1000001003, -1000000001),
          "suboptimal means reconnect");
    Check(SwapchainOutOfDate(-1000000001, -1000001004, 1000001003, -1000000001),
          "surface lost means reconnect");
    Check(!SwapchainOutOfDate(0, -1000001004, 1000001003, -1000000001),
          "success does not mean reconnect");
    Check(!SwapchainOutOfDate(-1000000000, -1000001004, 1000001003, -1000000001),
          "device lost is not a reconnect");
}

void TestGuestOutputPresence() {
    Check(HasGuestOutput(0, UINT32_MAX), "slot zero is a frame");
    Check(HasGuestOutput(2, UINT32_MAX), "slot two is a frame");
    Check(!HasGuestOutput(UINT32_MAX, UINT32_MAX), "UINT32_MAX means no guest output");
}

}  // namespace

int main() {
    TestLetterboxing();
    TestSwapchainExtent();
    TestImageCount();
    TestFrontbufferBounds();
    TestSwapchainRetirement();
    TestGuestOutputPresence();
    if (failures) {
        std::printf("presenter arithmetic: %d checks failed\n", failures);
        return 1;
    }
    std::printf("presenter arithmetic (letterbox, extent, bounds): all checks passed\n");
    return 0;
}
