// Android: phone-friendly GPU settings for the Xenos path, applied before the guest starts.
//
// The phone GPU is a tile-based renderer (Adreno, Mali): every intermediate copy and every resolve of
// the emulated EDRAM costs more there than on a desktop GPU, so the defaults that are harmless on a PC
// (full resolution, multisampling, a large texture cache) are what makes the Android build lag. This
// picks the cheap end of the SDK's own graphics cvars. It is a default, not a lock: each value can be
// changed in the config file or on the command line, and turning sg_android_defaults off leaves the
// SDK's defaults untouched.
//
// It does not fix the graphics: those are separate bugs of the emulation path, see docs/ANDROID.md.

#include "sg_android.h"

#include <rex/cvar.h>
#include <rex/logging.h>
#include <rex/platform.h>

REXCVAR_DEFINE_BOOL(sg_android_defaults, true, "Sonic Generations",
    "Android: apply phone-friendly GPU settings (resolution scale 1, no MSAA, a smaller texture cache, "
    "60 FPS cap) before the game starts. Off: the SDK's graphics defaults are used as they are.")
    .lifecycle(rex::cvar::Lifecycle::kRequiresRestart);

#if REX_PLATFORM_ANDROID

namespace {

struct Setting {
  const char* name;
  const char* value;
};

// Chosen for a phone GPU, in the order they matter for a frame.
constexpr Setting kAndroidSettings[] = {
    // The scene renders at the game's own size; the presenter scales to the screen.
    {"resolution_scale", "1"},
    {"draw_resolution_scale_x", "1"},
    {"draw_resolution_scale_y", "1"},
    // Multisampling is resolved per EDRAM surface: the most expensive thing in this path on a TBDR GPU.
    {"native_2x_msaa", "false"},
    // The texture cache competes with the game for the phone's memory.
    {"texture_cache_memory_limit_render_to_texture", "256"},
    // The console's 30 FPS is the cheapest frame; sg_frame_rate can still ask for 60.
    {"gpu_guest_fps_limit", "60"},
};

}  // namespace

void ConfigureAndroidGpuDefaults() {
  if (!REXCVAR_GET(sg_android_defaults)) {
    REXLOG_INFO("[android] sg_android_defaults=false: the SDK's graphics defaults are used as they are");
    return;
  }
  for (const Setting& setting : kAndroidSettings) {
    const std::string previous = rex::cvar::GetFlagByName(setting.name);
    // An empty string means the cvar is not registered (a plugin that did not load, or a renamed one):
    // say so instead of pretending the value was applied.
    if (previous.empty()) {
      REXLOG_WARN("[android] {} is not registered; skipped", setting.name);
      continue;
    }
    if (previous != setting.value && rex::cvar::SetFlagByName(setting.name, setting.value)) {
      REXLOG_INFO("[android] {}: {} -> {}", setting.name, previous, setting.value);
    }
  }
}

#else

void ConfigureAndroidGpuDefaults() {}

#endif
