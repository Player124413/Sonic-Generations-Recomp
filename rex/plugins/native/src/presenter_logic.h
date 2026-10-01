#pragma once
// Presentation arithmetic, kept free of Vulkan, the SDK and the platform on
// purpose: this is the part of the presenter that can be tested without a GPU,
// and the part where a wrong number is visible as a stretched or cropped frame
// rather than as a crash.
//
// The presenter uses these helpers for the guest output rectangle, the swapchain
// extent and the image count. `rex/tests/presenter_logic_tests.cpp` covers them,
// including the overflow cases.
#include <algorithm>
#include <cstddef>
#include <cstdint>

namespace sonic::rex_host::gpu {

/// A rectangle in surface pixels.
struct PixelRect {
    int32_t x = 0;
    int32_t y = 0;
    uint32_t width = 0;
    uint32_t height = 0;
};

struct PixelExtent {
    uint32_t width = 0;
    uint32_t height = 0;
};

/// The largest front buffer edge the presenter accepts, so a corrupt swap token
/// cannot make us allocate an absurd image. 4096 covers every Xbox 360 display
/// mode with room to spare (1920x1080 is the largest the platform defines).
inline constexpr uint32_t kMaxFrontbufferDimension = 4096;
/// The largest frame the presenter will stage in host memory, so a corrupt token
/// cannot make it allocate gigabytes: 4K RGBA8 is 32 MiB.
inline constexpr size_t kMaxFrontbufferBytes = size_t(4096) * size_t(4096) * 4u;
inline constexpr uint32_t kUndefinedExtent = 0xFFFFFFFFu;

/// Whether a front buffer of this size can be read into a staging buffer of
/// `availableBytes`. Width and height are guest-supplied, so the multiply is
/// done in 64 bits and rejected unless the whole frame fits.
inline bool FrontbufferFits(uint32_t width, uint32_t height, size_t availableBytes) {
    if (!width || !height) return false;
    if (width > kMaxFrontbufferDimension || height > kMaxFrontbufferDimension) return false;
    const uint64_t bytes = uint64_t(width) * uint64_t(height) * 4ull;
    return bytes <= uint64_t(availableBytes);
}

/// The rectangle inside a `surfaceWidth` x `surfaceHeight` surface that shows an
/// image of `imageWidth` x `imageHeight` with the display aspect ratio
/// `aspectX`:`aspectY`, centred, with integer pixels and the aspect ratio
/// preserved. A black frame remains around it (the letterbox).
///
/// The display aspect ratio comes from the guest, not from the image: a title
/// that renders 1280x720 has a 16:9 display aspect ratio, while 640x480 with a
/// 16:9 ratio is anamorphic and must not be pillarboxed to 4:3.
inline PixelRect FitGuestOutputRect(uint32_t imageWidth, uint32_t imageHeight, uint32_t aspectX,
                                    uint32_t aspectY, uint32_t surfaceWidth,
                                    uint32_t surfaceHeight) {
    PixelRect rect{};
    if (!surfaceWidth || !surfaceHeight || !imageWidth || !imageHeight) return rect;
    if (!aspectX || !aspectY) {
        aspectX = imageWidth;
        aspectY = imageHeight;
    }
    const double displayAspect = double(aspectX) / double(aspectY);
    const double surfaceAspect = double(surfaceWidth) / double(surfaceHeight);
    // Clamp in double space before casting: a nonsense aspect ratio must not
    // overflow uint32_t.
    double width = 0.0;
    double height = 0.0;
    if (surfaceAspect > displayAspect) {
        // The surface is wider than the guest display: the height is the limit
        // and the black bars go to the left and right.
        height = double(surfaceHeight);
        width = double(surfaceHeight) * displayAspect;
    } else {
        width = double(surfaceWidth);
        height = double(surfaceWidth) / displayAspect;
    }
    if (width > double(surfaceWidth)) width = double(surfaceWidth);
    if (height > double(surfaceHeight)) height = double(surfaceHeight);
    if (!(width >= 1.0)) width = 1.0;
    if (!(height >= 1.0)) height = 1.0;
    rect.width = uint32_t(width + 0.5);
    rect.height = uint32_t(height + 0.5);
    // Integer centring; a one-pixel bias to the top-left keeps the rectangle
    // inside the surface for odd differences.
    rect.x = int32_t((surfaceWidth - rect.width) / 2);
    rect.y = int32_t((surfaceHeight - rect.height) / 2);
    return rect;
}

/// The number of swapchain images to request: one more than the surface
/// minimum, so the CPU is not blocked on the image the presentation engine
/// holds, clamped to what the surface allows (`maxImageCount` of 0 means
/// unlimited).
inline uint32_t ChooseSwapchainImageCount(uint32_t minImageCount, uint32_t maxImageCount,
                                          uint32_t desired) {
    uint32_t count = std::max(std::max(desired, minImageCount), minImageCount + 1u);
    if (maxImageCount != 0) count = std::min(count, maxImageCount);
    return std::max(count, 1u);
}

/// One component of the swapchain extent: a surface that reports a defined
/// current extent is authoritative (the window system tells us the physical
/// size); otherwise the requested size is brought into the supported range.
inline uint32_t ClampExtentComponent(uint32_t value, uint32_t minimum, uint32_t maximum) {
    if (!value) value = minimum;
    if (maximum != 0 && maximum >= minimum && value > maximum) value = maximum;
    return std::max(value, minimum);
}

inline PixelExtent ChooseSwapchainExtent(uint32_t capsCurrentWidth, uint32_t capsCurrentHeight,
                                        uint32_t capsMinWidth, uint32_t capsMinHeight,
                                        uint32_t capsMaxWidth, uint32_t capsMaxHeight,
                                        uint32_t surfaceWidth, uint32_t surfaceHeight) {
    if (capsCurrentWidth != kUndefinedExtent && capsCurrentHeight != kUndefinedExtent) {
        return PixelExtent{capsCurrentWidth, capsCurrentHeight};
    }
    return PixelExtent{
        ClampExtentComponent(surfaceWidth, capsMinWidth, capsMaxWidth),
        ClampExtentComponent(surfaceHeight, capsMinHeight, capsMaxHeight),
    };
}

/// Whether a Vulkan result means the surface connection has to be rebuilt
/// rather than retried as is. Kept as raw int32_t so this header stays free of
/// Vulkan headers; the presenter passes VkResult values in.
inline bool SwapchainOutOfDate(int32_t vkResult, int32_t outOfDate, int32_t suboptimal,
                              int32_t surfaceLost) {
    return vkResult == outOfDate || vkResult == suboptimal || vkResult == surfaceLost;
}

/// The base presenter encodes "no guest output" as UINT32_MAX, which means the
/// paint is a black clear instead of a blit.
inline bool HasGuestOutput(uint32_t mailboxIndexOrMax, uint32_t maxValue) {
    return mailboxIndexOrMax != maxValue;
}

}  // namespace sonic::rex_host::gpu
