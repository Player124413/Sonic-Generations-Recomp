#pragma once
#include <filesystem>
#include <stdexcept>
#include <string>
#include <string_view>
#include <utility>
#include <vector>

namespace sonic::rex_host {
enum class GraphicsMode { Reference, Forward };
inline GraphicsMode ParseGraphicsMode(std::string_view mode) {
    if (mode.empty() || mode == "reference") return GraphicsMode::Reference;
    if (mode == "forward") return GraphicsMode::Forward;
    throw std::invalid_argument("SONIC_REX_GRAPHICS_MODE must be reference or forward; shadow/native are not implemented");
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
} // namespace sonic::rex_host
