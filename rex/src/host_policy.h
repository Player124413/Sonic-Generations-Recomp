#pragma once
#include <filesystem>
#include <stdexcept>
#include <string_view>

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
} // namespace sonic::rex_host
