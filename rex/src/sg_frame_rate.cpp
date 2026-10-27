// Frame rate of Sonic Generations on ReXGlue: the console's 30 FPS, or 60.
//
// The game asks the guest GPU to present every second vblank ("li r11,2" at 0x82DC44E0, the
// presentation interval). ReXGlue's code generator hooks that instruction (sonicgenerations_manifest.toml,
// midasm_hook SgPresentationInterval) and calls SgPresentationInterval() with r11; the value written
// here is what the game presents with.
//
//   60        present as soon as the frame is drawn; the SDK's framerate_limit caps it at 60
//   vsync     one vblank of interval: present on every vblank. A frame that runs a little long then
//             waits for the next vblank, so a 60 FPS target can drop to 42 on a slow GPU
//   original  the console's 30 FPS (leave r11 alone)
//
// Ported from the working iOS port (Player124413/SonicGenerations-iOS, src/frame_rate.cpp).

#include "sg_frame_rate.h"

#include <rex/cvar.h>
#include <rex/logging.h>

#include <cstdint>

REXCVAR_DEFINE_STRING(sg_frame_rate, "60", "Sonic Generations",
    "Frame rate: 60, vsync, or original for the console's 30. 60 presents without waiting for "
    "a vblank and framerate_limit caps it at 60; vsync presents on every vblank (the Xenia "
    "\"60 FPS\" game patch).")
    .allowed({"60", "vsync", "original"})
    .lifecycle(rex::cvar::Lifecycle::kRequiresRestart);

namespace {

// Negative leaves the game's own presentation interval in r11. Set once on the startup thread,
// before any guest thread exists.
int64_t interval_override = -1;

}  // namespace

void ConfigureFrameRate() {
  const auto mode = rex::cvar::GetFlagByName("sg_frame_rate");
  if (mode == "original") {
    interval_override = -1;
  } else {
    interval_override = mode == "vsync" ? 1 : 0;
  }
  REXLOG_INFO("Frame rate: {}", mode == "original" ? "original (30)"
                                  : mode == "vsync" ? "60, vsync"
                                                    : "60, capped by framerate_limit");
}

// C++ linkage and PPCRegister& match ReXGlue's generated mid-assembly hook ABI.
void SgPresentationInterval(PPCRegister& r11) {
  if (interval_override >= 0) {
    r11.u64 = uint64_t(interval_override);
  }
}
