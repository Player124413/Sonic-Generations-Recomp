// NativeXRenderer for Sonic Generations: the D3D device layout and Initialize().
//
// Everything here is a statement about this executable, so every number needs evidence. The evidence
// lives in docs/native-x-renderer-sonic-generations.md (the packets a function builds, the offsets it
// reads and writes, its callers), and tools/nxr/ regenerates it from ppc/. Nothing is filled in from
// another game's numbers: an offset that is not known here stays native_x_renderer::kUnknown, and the
// library then says which feature it had to leave off.

#include "sonic_generations_nxr.h"

#include <native_x_renderer/hooks.h>

#include <rex/logging.h>

#include <filesystem>

// One line per D3D entry point this executable has. Empty until step 1 of the bring-up has mapped
// them: see the .inc file. A hook runs the original function; when no NativeXRenderer feature is on it
// is one predictable branch plus that call.
#include "sonic_generations_hooks.inc"

namespace sonic::rex_host::native_x {
namespace {

native_x_renderer::Profile MakeProfile() {
  native_x_renderer::Profile profile;
  profile.game = "Sonic Generations (Xbox 360)";
  // Read it from your own dump: `node tools/xex/xdkver.mjs assets/default.xex` (recomp-tools). It is
  // written to the log and decides which XDK reference in native_x_renderer/docs/xdk-d3d-reference.md
  // is the closest starting point for the device layout.
  profile.xdk_version = "";
  // The console's video mode the game was written for. Sonic Generations renders 1280x720 and lets the
  // Xenos scaler stretch to whatever the video mode is; the host renderer scales from this.
  profile.output_width = 1280;
  profile.output_height = 720;
  // The Resolve call that copies the finished scene, for the renderer's antialiasing: 0 = not mapped
  // yet, so no antialiasing is applied. Find it with the trace (docs/native-x-renderer-...md, step 3).
  profile.scene_resolve_caller = 0;
  // Sonic Generations has no widescreen/ultrawide hooks in this port yet, so the renderer keeps the
  // 16:9 image and the presenter letterboxes it.
  profile.widens_cameras = false;

  // D3D device layout (native_x_renderer::DeviceLayout): all kUnknown until mapped.
  //
  // What the scan of the generated code already shows (docs/native-x-renderer-sonic-generations.md):
  //   * sub_82DC85F0 is the draw path: it is the only function that flushes the dirty masks
  //     (`ld r4,16(r31)`, `ld r11,40(r31)`), writes the register shadow through sub_82DB5790 and
  //     sub_82DB5400, loads fetch and float constants and ends with the DRAW_INDX_2 packet at
  //     0x82DC8C5C. Reading its flush is step 1 of the bring-up: it gives every offset below at once.
  //   * the device pointer is r3/r31 of that function, and 23756 is the ring-buffer field it keeps in
  //     r30 (`addi r30,r3,23756`) — a starting point for command_buffer_write.
  // These are observations from one function, not a layout: they are recorded here so the next step
  // starts from them, not so that they can be copied into the fields below.

  // Resource object layout (native_x_renderer::ObjectLayout): all kUnknown until mapped. SetTexture and
  // SetRenderTarget read it; the trace prints what it can once these are known.

  return profile;
}

}  // namespace

const native_x_renderer::Profile& Profile() {
  static const native_x_renderer::Profile profile = MakeProfile();
  return profile;
}

void Initialize(rex::system::IGraphicsSystem* graphics, rex::ui::Window* window,
                const std::filesystem::path& cache_root) {
  REXLOG_INFO("[nxr] {}", native_x_renderer::Describe());
  native_x_renderer::Initialize(Profile(), graphics, window, cache_root);
  // Say plainly which of the two paths draws, instead of leaving the player to guess why the picture
  // looks the way it does.
  if (native_x_renderer::Renders()) {
    REXLOG_INFO("[nxr] NativeXRenderer draws; the Xenos emulation feeds synchronization only");
  } else {
    REXLOG_INFO(
        "[nxr] NativeXRenderer is loaded but not drawing (--native_x_renderer=true turns it on); "
        "the SDK's Xenos plugin draws");
  }
}

}  // namespace sonic::rex_host::native_x
