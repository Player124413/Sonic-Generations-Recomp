#pragma once

#include <rex/cvar.h>

// On Android: applies the phone-friendly graphics cvars (docs/ANDROID.md) once, after the GPU plugin
// has registered them and before the guest starts. A no-op on other platforms.
void ConfigureAndroidGpuDefaults();

// The switch above, so a phone that prefers the SDK's defaults (or a machine with a strong GPU) can
// turn the whole set off.
REXCVAR_DECLARE(bool, sg_android_defaults);
