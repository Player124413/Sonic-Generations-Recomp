#pragma once
#include <rex/rex_app.h>
#include <rex/runtime.h>
#include <rex/filesystem.h>
#include <rex/system/gpu_plugin.h>
#include <cstdlib>
#include "graphics_bridge.h"
#include "host_policy.h"

namespace sonic::rex_host {
class SonicApp final : public rex::ReXApp {
public:
    using rex::ReXApp::ReXApp;
    static std::unique_ptr<rex::ui::WindowedApp> Create(rex::ui::WindowedAppContext& context) {
        return std::make_unique<SonicApp>(context, "SonicGenerationsRecomp-ReXGlue", PPCImageConfig);
    }
    void OnPreSetup(rex::RuntimeConfig& config) override {
        const char* requested = std::getenv("SONIC_REX_GRAPHICS_MODE");
        const auto mode = ParseGraphicsMode(requested ? requested : "");
        // Explicit Vulkan selection: Windows must not default to the SDK's D3D12 backend.
        auto original = rex::system::LoadGpuPlugin("xenos", "vulkan");
        if (!original) throw std::runtime_error("Cannot load the ReXGlue Xenos Vulkan plugin");
        config.gpu_plugin.clear();
        if (mode == GraphicsMode::Forward)
            config.graphics = std::make_unique<GraphicsBridge>(std::move(original));
        else
            config.graphics = std::move(original);
        // Intentionally leave audio_factory, input_factory, kernel_init and
        // tool_mode untouched. ReXApp configures those to the SDK defaults.
    }
    void OnConfigurePaths(rex::PathConfig& paths) override {
        const auto local = BuildPaths(rex::filesystem::GetExecutableFolder());
        paths.game_data_root = local.game;
        paths.user_data_root = local.user;
        paths.update_data_root = local.update;
        paths.cache_root = local.cache;
        paths.metadata_root = local.metadata;
        paths.config_path = local.config;
    }
};
} // namespace sonic::rex_host
