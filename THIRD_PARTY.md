# Third-party components

This project (Sonic Generations Recompiled) is licensed under the GNU General
Public License v3.0 — see `COPYING`. It contains code derived from the
following projects:

## Unleashed Recompiled (hedge-dev/UnleashedRecomp)

License: GNU GPL v3.0
Copyright (c) hedge-dev and contributors

Portions of the runtime layer are derived from Unleashed Recompiled,
including (with adaptation):

- `SonicGenerationsRecomp/kernel/` — Xbox 360 kernel object model, heap,
  memory, XAM content/user/notification services, guest/host call marshalling
  (`function.h`), import hook infrastructure.
- `SonicGenerationsRecomp/cpu/` — guest thread model, guest stack variables,
  PPC context threading.
- `SonicGenerationsRecomp/apu/` — XAudio render driver bridge (SDL backend).
- `SonicGenerationsRecomp/hid/` — SDL input translation to XAMINPUT.
- `SonicGenerationsRecomp/install/iso_file_system.*` — XISO reader (itself
  derived from Xenia, BSD-2-Clause, see below).
- `SonicGenerationsRecomp/os/`, `user/paths.*`, `mutex.h`, `framework.h`,
  `xxHashMap.h` — platform helpers.
- `tools/o1heap/` — from Unleashed Recompiled's thirdparty (MIT, see below).
- `tools/x_decompress/`, `tools/file_to_c/`, `tools/fshasher/` — helper tools.

## XenonRecomp (hedge-dev/XenonRecomp) — submodule `tools/XenonRecomp`

License: MIT
Copyright (c) 2025 hedge-dev and contributors

Xbox 360 → C++ recompiler, XenonAnalyse, XenonUtils (XEX parsing, patching,
`xbox.h` guest type definitions). Export name tables in
`XenonUtils/xbox/*.inc` are derived from the Xenia project (BSD-2-Clause).

## XenosRecomp (hedge-dev/XenosRecomp) — submodule `tools/XenosRecomp`

License: MIT
Copyright (c) 2025 hedge-dev and contributors

Xbox 360 shader binary → HLSL recompiler (future shader pipeline).

## Xenia: Xbox 360 Emulator Research Project

License: BSD-2-Clause
Copyright 2021 Ben Vanik. All rights reserved.

Portions of XISO handling and Xbox 360 export tables.

## o1heap

License: MIT
Copyright (c) 2020-2022 Dmitry (Konstantin) Stepanov

Bundled in `tools/o1heap/`; used as the guest heap allocator.

## SDL2, fmt, toml++, xxHash, simde

Provided via submodules/system packages:

- SDL2 — zlib license (libsdl-org/SDL)
- fmt — MIT (fmtlib/fmt) — via XenonRecomp's thirdparty
- toml++ — MIT (marzer/tomlplusplus) — via XenonRecomp's thirdparty
- xxHash — BSD-2-Clause (Cyan4973/xxHash) — via XenonRecomp's thirdparty
- simde — MIT — via XenonRecomp's thirdparty

## Game data

Sonic Generations (Xbox 360) game data is NOT included and NOT distributed
with this project. You must own the game and provide your own dump.

## Xenia FFmpeg XMAFRAMES fork

- Source: https://github.com/xenia-project/FFmpeg
- Pinned commit: `15ece0882e8d5875051ff5b73c5a8326f7cee9f5`
- Location: `tools/ffmpeg-xma` (submodule)
- License: LGPL-2.1-or-later for the enabled configuration (`CONFIG_GPL=0`,
  `CONFIG_NONFREE=0`); see `COPYING.LGPLv2.1`, `LICENSE.md` in the submodule.
- Used for raw XMA frame decoding; statically linked, not the system FFmpeg.
- Distributors must comply with the applicable source/relinking requirements.
  Source lists in `cmake/XmaFFmpegSources.cmake` follow its premake manifests.

The guest register/context layout was researched using Xenia's BSD-licensed
`src/xenia/apu/xma_context.h`, `xma_context.cc` and `xma_register_table.inc`.
No copyrighted game audio is included in this repository.

## Optional Vulkan host backend

Vulkan headers/loader and the installed Vulkan ICD are system dependencies, not
vendored into this repository. Khronos Vulkan-Headers and Vulkan-Loader use
Apache-2.0 (see their upstream LICENSE files); driver licensing varies by ICD.
The CI software ICD is Mesa lavapipe (Mesa license notices apply).

Xenos register/enum encodings were cross-checked against Xenia's BSD-licensed
`src/xenia/gpu/registers.h` and `xenos.h` (Ben Vanik and contributors). The Vulkan
state mapping is independently expressed; no Xenia register structs are copied.
UnleashedRecomp is the architecture reference, not the source of Generations'
device offsets or function addresses.


## Guest XEX module/export layouts

`kernel/xex_module.cpp` uses the guest LDR layout and monitor/timestamp export
semantics researched in Xenia's `src/xenia/kernel/xmodule.h` and
`src/xenia/kernel/xboxkrnl/xboxkrnl_module.cc` (BSD-licensed; Ben Vanik and
contributors). See `licenses/Xenia-BSD.txt` and `docs/XEX_IMPORT_BINDING.md`.
The separately compiled runtime decoder uses the pinned XenonRecomp source;
it does not replace or modify the CPU generation tool.


## ReXGlue migration target (optional, Windows)

`rex/` consumes the official ReXGlue SDK 0.10.0, commit
`f5337cdc947ff6d4c4196737e2c807a48f2a1fc2` (BSD-3-Clause, includes Xenia-derived
work). See `licenses/ReXGlue-BSD-3-Clause.txt` and the SDK's own third-party
notices/source dependencies at https://github.com/rexglue/rexglue-sdk/tree/v0.10.0.
The workflow verifies the Windows SDK archive SHA256 recorded in
`rex/dependencies.json` and retains its share directory/notices when packaging.

The optional game-build candidate is generated Sonic PPC from the user's
reference repository at the commit recorded in that JSON, not a new SDK
implementation. It is fetched externally, not copied into this checkout.
Compatibility with the official SDK and redistribution obligations of the
complete final package must not be inferred from the forwarding contract test.
No Plume code/dependency has been added at this stage.
