#pragma once
#include <cstdint>
#include <cstdio>
#include <string>
#include <string_view>
#include <vector>

namespace sonic::rex_host {

/// Why a captured guest draw could not be executed by the native renderer.
/// This is the ledger that decides whether Xenos can be removed: the ratio of
/// Supported to all draws is exactly the fraction of the game's rendering the
/// native renderer can reproduce today.
enum class DrawSupport : uint32_t {
    Supported = 0,
    VertexShaderUnresolved,
    PixelShaderUnresolved,
    ResourcesUnsupported,
    BackendRefused,
    Count,
};

inline const char* DrawSupportName(DrawSupport value) {
    switch (value) {
    case DrawSupport::Supported: return "supported";
    case DrawSupport::VertexShaderUnresolved: return "vertex_shader_unresolved";
    case DrawSupport::PixelShaderUnresolved: return "pixel_shader_unresolved";
    case DrawSupport::ResourcesUnsupported: return "resources_unsupported";
    case DrawSupport::BackendRefused: return "backend_refused";
    case DrawSupport::Count: break;
    }
    return "unknown";
}

/// A classification the runtime can produce without the renderer's internals:
/// a batch that failed has per-draw shader and resource statuses to explain it.
inline DrawSupport ClassifyDraw(bool vertexShaderResolved, bool pixelShaderResolved,
                                bool resourcesCaptured) {
    if (!vertexShaderResolved) return DrawSupport::VertexShaderUnresolved;
    if (!pixelShaderResolved) return DrawSupport::PixelShaderUnresolved;
    if (!resourcesCaptured) return DrawSupport::ResourcesUnsupported;
    return DrawSupport::BackendRefused;
}

struct Coverage {
    uint64_t frames = 0;      // guest frames observed
    uint64_t draws = 0;       // draws the native renderer attempted
    uint64_t clears = 0;
    uint64_t resolves = 0;
    uint64_t skippedFrames = 0;  // sampled out or empty, never submitted
    uint64_t submissions = 0;
    uint64_t perReason[static_cast<size_t>(DrawSupport::Count)]{};

    void Record(DrawSupport reason) {
        ++draws;
        ++perReason[static_cast<size_t>(reason)];
    }
    uint64_t Supported() const {
        return perReason[static_cast<size_t>(DrawSupport::Supported)];
    }
    /// 0 when nothing was attempted, so a report cannot claim success from an
    /// empty session.
    double SupportedRatio() const {
        return draws ? double(Supported()) / double(draws) : 0.0;
    }
    uint64_t Reason(DrawSupport reason) const {
        return perReason[static_cast<size_t>(reason)];
    }

    std::string Format() const {
        std::string text;
        text += "frames=" + std::to_string(frames) + "\n";
        text += "draws=" + std::to_string(draws) + "\n";
        text += "supported=" + std::to_string(Supported()) + "\n";
        char ratio[32];
        std::snprintf(ratio, sizeof(ratio), "%.4f", SupportedRatio());
        text += std::string("supported_ratio=") + ratio + "\n";
        for (uint32_t i = 0; i < static_cast<uint32_t>(DrawSupport::Count); ++i) {
            const auto reason = static_cast<DrawSupport>(i);
            if (reason == DrawSupport::Supported) continue;
            text += std::string(DrawSupportName(reason)) + "=" +
                    std::to_string(perReason[i]) + "\n";
        }
        text += "clears=" + std::to_string(clears) + "\n";
        text += "resolves=" + std::to_string(resolves) + "\n";
        text += "skipped_frames=" + std::to_string(skippedFrames) + "\n";
        text += "submissions=" + std::to_string(submissions) + "\n";
        text += "note=this ratio is what a Xenos-free renderer would show today; "
                "every unsupported draw would be missing from the frame\n";
        return text;
    }
};

/// Reads back a formatted report. Used by tests and by anyone inspecting a
/// coverage file, so a truncated or hand-edited file cannot be read as success.
inline bool ParseCoverage(std::string_view text, Coverage& out) {
    out = Coverage{};
    uint64_t supported = 0;
    bool haveDraws = false;
    size_t start = 0;
    while (start < text.size()) {
        const size_t end = text.find('\n', start);
        const std::string_view line =
            text.substr(start, end == std::string_view::npos ? std::string_view::npos : end - start);
        const size_t equals = line.find('=');
        if (equals != std::string_view::npos) {
            const std::string_view key = line.substr(0, equals);
            const std::string_view value = line.substr(equals + 1);
            uint64_t number = 0;
            bool isNumber = !value.empty();
            for (const char digit : value) {
                if (digit < '0' || digit > '9') { isNumber = false; break; }
                number = number * 10 + uint64_t(digit - '0');
            }
            if (isNumber) {
                if (key == "frames") out.frames = number;
                else if (key == "draws") { out.draws = number; haveDraws = true; }
                else if (key == "supported") {
                    // Also the Supported bucket, so the total still has to add up.
                    out.perReason[static_cast<size_t>(DrawSupport::Supported)] = number;
                    supported = number;
                }
                else if (key == "clears") out.clears = number;
                else if (key == "resolves") out.resolves = number;
                else if (key == "skipped_frames") out.skippedFrames = number;
                else if (key == "submissions") out.submissions = number;
                else {
                    for (uint32_t i = 0; i < static_cast<uint32_t>(DrawSupport::Count); ++i) {
                        const auto reason = static_cast<DrawSupport>(i);
                        if (reason != DrawSupport::Supported && key == DrawSupportName(reason)) {
                            out.perReason[i] = number;
                        }
                    }
                }
            }
        }
        if (end == std::string_view::npos) break;
        start = end + 1;
    }
    // Reject a report whose per-reason counts contradict its own total.
    uint64_t sum = 0;
    for (uint64_t count : out.perReason) sum += count;
    if (!haveDraws || sum != out.draws || supported != out.Supported()) return false;
    return true;
}

} // namespace sonic::rex_host
