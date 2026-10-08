#pragma once
// What the renderer did with a frame, in numbers a reader can act on.
//
// A frame that is wrong and a frame that is missing look the same from inside the
// window, and "how much of this is exact" is the only honest answer to whether the
// translator can replace the reference renderer yet. So every surface it draws
// into is counted by how far it is from what is actually rendered, and every
// refused submission is counted by reason -- a refusal without a reason is a bug
// in the reporting, not a mystery for the reader.
//
// Pure data with a formatter, deliberately: it can be filled from the renderer,
// printed by the host, and tested without a GPU.
#include <algorithm>
#include <cstdint>
#include <string>
#include <utility>
#include <vector>

namespace GuestGpu
{
    struct NativeRenderReport
    {
        // Colour targets, by how far they are from the single-sample RGBA8 image
        // that was drawn.
        uint64_t colorExact = 0;
        uint64_t colorMultisampled = 0;
        uint64_t colorFormatApproximated = 0;
        // Depth targets, same idea. D24FS8 counts as approximated precision, not
        // as a failure: it is drawn, with the comparisons the guest asked for.
        uint64_t depthExact = 0;
        uint64_t depthMultisampled = 0;
        uint64_t depthFormatApproximated = 0;
        // Refused submissions, by reason, in the order they were first seen.
        std::vector<std::pair<std::string, uint64_t>> refusals;
        // Frames that reached a presentable image.
        uint64_t framesRendered = 0;
        // Guest resolves into a texture, and how many of them scaled -- the
        // fraction of the picture that goes through a blit rather than a copy.
        uint64_t resolves = 0;
        uint64_t resolvesScaled = 0;
        // Surfaces the guest never defined and this renderer had to initialize
        // itself. Drawing into undefined EDRAM used to refuse the frame; the
        // picture is worth more than the refusal, so the guest's silence is
        // counted here instead -- the count is how much of the frame may differ
        // from the console, and zero means none of it may.
        uint64_t colorInitialized = 0;
        uint64_t depthInitialized = 0;

        void NoteRefusal(const char* reason)
        {
            if (!reason || !*reason) reason = "unspecified";
            for (auto& [text, count] : refusals)
                if (text == reason)
                {
                    ++count;
                    return;
                }
            refusals.emplace_back(reason, 1);
        }

        uint64_t Refusals() const
        {
            uint64_t sum = 0;
            for (const auto& entry : refusals) sum += entry.second;
            return sum;
        }

        // The reasons sorted by how often they happened: the first line of this
        // list is the next thing to fix, which is the whole point of the report.
        std::vector<std::pair<std::string, uint64_t>> RefusalsByCount() const
        {
            std::vector<std::pair<std::string, uint64_t>> sorted = refusals;
            // Stable so equal counts keep the order they were first seen in.
            std::stable_sort(sorted.begin(), sorted.end(),
                             [](const auto& a, const auto& b) { return a.second > b.second; });
            return sorted;
        }

        std::string Format() const
        {
            std::string text;
            text += "[native renderer]\n";
            text += "renderer_frames=" + std::to_string(framesRendered) + "\n";
            text += "renderer_color_exact=" + std::to_string(colorExact) + "\n";
            text += "renderer_color_multisampled=" + std::to_string(colorMultisampled) + "\n";
            text += "renderer_color_format_approximated=" +
                    std::to_string(colorFormatApproximated) + "\n";
            text += "renderer_depth_exact=" + std::to_string(depthExact) + "\n";
            text += "renderer_depth_multisampled=" + std::to_string(depthMultisampled) + "\n";
            text += "renderer_depth_format_approximated=" +
                    std::to_string(depthFormatApproximated) + "\n";
            text += "renderer_resolves=" + std::to_string(resolves) + "\n";
            text += "renderer_resolves_scaled=" + std::to_string(resolvesScaled) + "\n";
            text += "renderer_color_initialized=" + std::to_string(colorInitialized) + "\n";
            text += "renderer_depth_initialized=" + std::to_string(depthInitialized) + "\n";
            text += "renderer_refusals=" + std::to_string(Refusals()) + "\n";
            for (const auto& [reason, count] : RefusalsByCount())
                text += "renderer_refusal=" + std::to_string(count) + " " + reason + "\n";
            return text;
        }
    };
}
