// NativeXRenderer for Sonic Generations: the game side of native_x_renderer/.
//
// The library replaces the drawing done through the game's XDK Direct3D library with host rendering
// on DiligentCore (Vulkan); the SDK's Xenos emulation stays as the reference and the fallback. The
// library holds everything that is the same in every game; this directory holds what is specific to
// Sonic Generations:
//
//   sonic_generations_hooks.inc   one line per D3D entry point the profile has mapped (steps 1-2 of
//                                 native_x_renderer/docs/integrating-a-game.md)
//   sonic_generations_nxr.cpp     the D3D device layout (native_x_renderer::Profile) and Initialize()
//
// Both are compiled into the executable, not into an archive: the generated functions are weak, and a
// strong definition inside an archive member is not guaranteed to be pulled in.
//
// Built only with -DSONIC_REX_NATIVE_X_RENDERER=ON (rex/CMakeLists.txt); the Xenos path does not know
// this file exists.

#pragma once

#include <native_x_renderer/native_x_renderer.h>

#include <filesystem>

namespace rex::system {
class IGraphicsSystem;
}
namespace rex::ui {
class Window;
}
namespace rex {
class ReXApp;
}

namespace sonic::rex_host::native_x {

// Sonic Generations' D3D library, as far as it is mapped. Fields that are not known yet stay
// native_x_renderer::kUnknown: the library then logs which of them a feature needs and leaves that
// feature off, instead of guessing. See docs/native-x-renderer-sonic-generations.md for the evidence
// behind every value and for how to derive the next one.
const native_x_renderer::Profile& Profile();

// native_x_renderer::Initialize() with this game's profile, the runtime's graphics system, the app's
// window and the runtime's cache directory. Call it once, before the guest starts (ReXApp::OnPostSetup).
// It reads the library's cvars (--native_x_renderer, --native_x_renderer_trace, ...) and logs what it
// decided; with none of them set it changes nothing and the Xenos path draws.
void Initialize(rex::system::IGraphicsSystem* graphics, rex::ui::Window* window,
                const std::filesystem::path& cache_root);

}  // namespace sonic::rex_host::native_x
