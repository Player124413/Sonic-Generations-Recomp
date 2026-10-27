// The native renderer's entry point for the host: one cvar, one probe, no surprises for the Xenos path.
//
// The renderer is off unless the player asks for it (sg_native_renderer=true). Even then, today it only
// brings the device up and says what it found (docs/NATIVE_RENDERING.md, stage 3, step one): no drawing is
// taken away from Xenos until the renderer has a frame to show. A machine without a Vulkan driver gets a
// warning and keeps the working path.

#include "native_renderer.h"

#include <rex/logging.h>

#include <filesystem>

REXCVAR_DEFINE_BOOL(sg_native_renderer, false, "Sonic Generations",
    "Native renderer: draw the game's Direct3D calls through plume/Vulkan instead of emulating the "
    "Xbox 360 GPU. Today it brings the device up and reports it; drawing comes next, so the game still "
    "renders through Xenos until then.")
    .lifecycle(rex::cvar::Lifecycle::kRequiresRestart);

namespace sonic::rex_host::native_renderer {
namespace {

std::unique_ptr<Renderer> g_renderer;

}  // namespace

void Start(const std::filesystem::path& cache_root) {
  if (!REXCVAR_GET(sg_native_renderer)) {
    REXLOG_INFO("[native] sg_native_renderer=false: drawing through the SDK's Xenos plugin");
    return;
  }
  g_renderer = CreateRenderer();
  if (!g_renderer) {
    REXLOG_WARN("[native] this build has no native renderer backend; keeping Xenos");
    return;
  }
  const InitResult result = g_renderer->Initialize(cache_root);
  if (!result.available) {
    REXLOG_WARN("[native] {} is not available: {}; keeping Xenos", result.backend, result.error);
    g_renderer.reset();
    return;
  }
  REXLOG_INFO("[native] {} device ready: {} (drawing still goes through Xenos until the renderer has a frame)",
              result.backend, result.device);
}

void Stop() {
  if (g_renderer) {
    g_renderer->Shutdown();
    g_renderer.reset();
  }
}

}  // namespace sonic::rex_host::native_renderer
