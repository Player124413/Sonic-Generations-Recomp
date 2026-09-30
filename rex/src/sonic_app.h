#pragma once
#include <rex/rex_app.h>
#include <rex/runtime.h>
#include <rex/filesystem.h>
#include <rex/system/gpu_plugin.h>
#include <cstdlib>
#include "graphics_bridge.h"
#include "host_policy.h"
#include "input_defaults.h"
#include "gpu_capture.h"
#ifdef SONIC_REX_NATIVE_RENDERER
#include "native_gpu.h"
#endif

namespace sonic::rex_host {
class SonicApp final : public rex::ReXApp {
public:
    explicit SonicApp(rex::ui::WindowedAppContext& context)
        : rex::ReXApp(context, "SonicGenerationsRecomp-ReXGlue", PPCImageConfig) {}
    static std::unique_ptr<rex::ui::WindowedApp> Create(rex::ui::WindowedAppContext& context) {
        return std::make_unique<SonicApp>(context);
    }
    void OnPreSetup(rex::RuntimeConfig& config) override {
        // Runs before Runtime::Setup builds the input system, so the keyboard
        // driver and its layout are in place when the guest first polls a pad.
        // An explicit choice by the player always wins.
        ApplyKeyboardInputDefaults();
        InitializeGpuCapture(BuildPaths(rex::filesystem::GetExecutableFolder()).cache);
#ifdef SONIC_REX_NATIVE_RENDERER
        InitializeNativeGpu(BuildPaths(rex::filesystem::GetExecutableFolder()).cache);
#endif
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
#ifdef SONIC_REX_NATIVE_RENDERER
    void OnShutdown() override { ShutdownNativeGpu(); }
#endif
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
