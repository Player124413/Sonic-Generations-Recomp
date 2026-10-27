#pragma once

#include <rex/ppc/context.h>

// Reads the sg_frame_rate cvar once, before the guest starts. The generated instruction hook below
// only reads the resulting value.
void ConfigureFrameRate();

// C++ linkage and PPCRegister& match ReXGlue's generated mid-assembly hook ABI
// (sonicgenerations_manifest.toml, midasm_hook SgPresentationInterval).
void SgPresentationInterval(PPCRegister& r11);
