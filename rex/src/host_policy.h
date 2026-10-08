#pragma once
#include <filesystem>
#include <stdexcept>
#include <string>
#include <string_view>
#include <utility>
#include <vector>

namespace sonic::rex_host {
enum class GraphicsMode { Reference, Forward, Native, Translate };
inline GraphicsMode ParseGraphicsMode(std::string_view mode) {
    if (mode.empty() || mode == "reference") return GraphicsMode::Reference;
    if (mode == "forward") return GraphicsMode::Forward;
    // Our own GPU plugin. It renders nothing yet (the presenter shows the frame
    // the guest swapped, straight from guest memory), but it is a real device:
    // ring buffer, writeback, interrupts, swap and its own Vulkan presenter. It
    // is also the only way to record the real command stream (SONIC_REX_GPU_DUMP=1),
    // because our command processor is the component that walks it.
    if (mode == "native") return GraphicsMode::Native;
    // The SDK keeps running the guest GPU device, but the window shows the frame
    // our translation renderer produced: the translator (guest draw hooks ->
    // Vulkan) draws it and our presenter owns the window's swapchain.
    if (mode == "translate") return GraphicsMode::Translate;
    throw std::invalid_argument(
        "SONIC_REX_GRAPHICS_MODE must be reference, forward, native or translate; "
        "shadow is not implemented");
}
struct Paths {
    std::filesystem::path game, user, update, cache, metadata, config;
};
inline Paths BuildPaths(const std::filesystem::path& executableDirectory) {
    const auto assets = executableDirectory / "assets";
    // Do not overwrite the legacy runtime's save/SYS-DATA or config.toml.
    return {assets, assets / "rex-user", assets / "update", assets / "rex-cache",
            assets / "metadata", assets / "rex-runtime.toml"};
}

//=============================================================================
// Keyboard -> Xbox 360 pad
//=============================================================================
// The pinned SDK ships a keyboard/mouse driver that emulates a pad, but it is
// off by default. These values are applied only when the user has not chosen a
// setting through assets/rex-runtime.toml, a REX_* environment variable, the
// command line, or the SDK's own F4 settings overlay.
struct InputDefault {
    std::string_view name;     // cvar name in the SDK registry
    std::string_view value;    // cvar value, "A,B" means either key fires
    std::string_view purpose;  // what the key does in the game
};

// Reserved by the SDK UI: bind_debug_overlay (F3), bind_settings (F4),
// bind_achievements (F7), bind_console (Backtick), and the overlays' text
// fields. A gameplay bind must not take them.
inline constexpr std::string_view kReservedUiKeys[] = {"F3", "F4", "F7", "Backtick"};

inline constexpr InputDefault kKeyboardDefaults[] = {
    {"mnk_mode", "true", "keyboard/mouse emulate the pad"},
    {"keybind_lstick_up", "W,Up", "move up"},
    {"keybind_lstick_down", "S,Down", "move down"},
    {"keybind_lstick_left", "A,Left", "move left"},
    {"keybind_lstick_right", "D,Right", "move right"},
    // The d-pad shares the arrow keys with the left stick on purpose: the
    // driver matches modifiers exactly, so Shift+arrow is the d-pad and a bare
    // arrow is the stick.
    {"keybind_dpad_up", "Shift+Up", "menu up"},
    {"keybind_dpad_down", "Shift+Down", "menu down"},
    {"keybind_dpad_left", "Shift+Left", "menu left"},
    {"keybind_dpad_right", "Shift+Right", "menu right"},
    {"keybind_a", "Space", "jump / confirm"},
    {"keybind_b", "E", "action / cancel"},
    {"keybind_x", "X", "X button"},
    {"keybind_y", "C", "Y button"},
    {"keybind_left_shoulder", "Q", "left shoulder"},
    {"keybind_right_shoulder", "R", "right shoulder"},
    {"keybind_left_trigger", "1", "left trigger"},
    {"keybind_right_trigger", "3", "right trigger"},
    {"keybind_lstick_press", "F", "left stick press"},
    {"keybind_rstick_press", "V", "right stick press"},
    {"keybind_rstick_up", "I", "camera up"},
    {"keybind_rstick_down", "K", "camera down"},
    {"keybind_rstick_left", "J", "camera left"},
    {"keybind_rstick_right", "L", "camera right"},
    {"keybind_start", "Return", "pause / start"},
    {"keybind_back", "Backspace", "back"},
};

// "W,Up" -> {"W", "Up"}; spaces around a token are ignored, empty tokens dropped.
inline std::vector<std::string_view> SplitInputBinding(std::string_view value) {
    std::vector<std::string_view> tokens;
    size_t start = 0;
    while (start <= value.size()) {
        const size_t comma = value.find(',', start);
        std::string_view token = value.substr(start, comma == std::string_view::npos
                                                         ? std::string_view::npos
                                                         : comma - start);
        while (!token.empty() && token.front() == ' ') token.remove_prefix(1);
        while (!token.empty() && token.back() == ' ') token.remove_suffix(1);
        if (!token.empty()) tokens.push_back(token);
        if (comma == std::string_view::npos) break;
        start = comma + 1;
    }
    return tokens;
}

inline bool InputKeyIsReserved(std::string_view token) {
    for (const auto key : kReservedUiKeys) {
        if (token == key) return true;
    }
    return false;
}

// Two different actions sharing one modifier-less key would always fire
// together, which is a layout bug rather than a preference. Values that carry a
// "+" modifier prefix are exempt: that is how the d-pad shares the arrows.
inline std::vector<std::string> DuplicateBareInputKeys() {
    std::vector<std::string> conflicts;
    std::vector<std::pair<std::string_view, std::string_view>> seen;
    for (const auto& entry : kKeyboardDefaults) {
        if (entry.name == "mnk_mode") continue;
        for (const auto token : SplitInputBinding(entry.value)) {
            if (token.find('+') != std::string_view::npos) continue;
            for (const auto& [key, owner] : seen) {
                if (key == token && owner != entry.name) {
                    conflicts.emplace_back(std::string(token) + ": " + std::string(owner) + " and " +
                                           std::string(entry.name));
                }
            }
            seen.emplace_back(token, entry.name);
        }
    }
    return conflicts;
}

//=============================================================================
// Native diagnostics cost control
//=============================================================================
// SONIC_REX_NATIVE_RENDER=offscreen replays every guest frame a second time, on
// top of the Xenos renderer that draws the visible game, and the replay waits
// for its own GPU work. That is a deliberate diagnostic, not a faster path: two
// renderers cost roughly twice as much. Sampling frames keeps the same evidence
// at a fraction of the cost, so it can be left on while playing.
inline uint32_t ParseNativeFrameStride(std::string_view value) {
    if (value.empty()) return 1;
    uint32_t parsed = 0;
    for (const char digit : value) {
        if (digit < '0' || digit > '9')
            throw std::invalid_argument("SONIC_REX_NATIVE_FRAME_STRIDE must be a positive integer");
        parsed = parsed * 10 + uint32_t(digit - '0');
        if (parsed > 1000000)
            throw std::invalid_argument("SONIC_REX_NATIVE_FRAME_STRIDE must be at most 1000000");
    }
    if (parsed == 0)
        throw std::invalid_argument("SONIC_REX_NATIVE_FRAME_STRIDE must be at least 1");
    return parsed;
}
inline bool ParseNativeReadback(std::string_view value) {
    if (value.empty() || value == "0" || value == "false") return false;
    if (value == "1" || value == "true") return true;
    throw std::invalid_argument("SONIC_REX_NATIVE_READBACK must be 0 or 1");
}
} // namespace sonic::rex_host
