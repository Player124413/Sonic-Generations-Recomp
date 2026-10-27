#pragma once

#include <rex/cvar.h>

#include <filesystem>

#include "renderer.h"

namespace sonic::rex_host::native_renderer {

// Brings the native renderer up once, after the runtime exists and before the guest starts, when
// sg_native_renderer is on; otherwise the SDK's Xenos plugin keeps drawing. Never fails the run: no
// driver means a warning and the working path. `cache_root` is where shader and pipeline caches go.
void Start(const std::filesystem::path& cache_root);
void Stop();

}  // namespace sonic::rex_host::native_renderer

REXCVAR_DECLARE(bool, sg_native_renderer);
