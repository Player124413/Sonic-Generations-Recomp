# Vulkan resource, transfer and presentation backend

## What runs on Vulkan now

This is an opt-in **real Vulkan backend**, not an implementation of all game
rendering. It owns a Vulkan instance/device/graphics queue and implements:

- GPU buffers with bounded allocations, host staging, device-local preference,
  upload/copy/readback, and non-coherent memory flush/invalidate handling.
- RGBA8 sampled/color-attachment images and D32 depth images, layout transitions,
  color/depth clears, texture uploads and byte-verified readback paths.
- Command pool/buffer recording, `vkQueueSubmit`, fences and completion-before-
  destruction. This reference path is synchronous, not a high-performance queue.
- A real descriptor-free graphics profile: SPIR-V shader modules, pipeline
  layout/render pass, vertex input, depth/cull state, framebuffer, dynamic
  viewport/scissor and `vkCmdDrawIndexed`. The test renders an original triangle
  fixture and verifies both color and depth pixels via readback. It is **not**
  the game's graphics pipeline ABI or a fallback shader for the game.
- SDL Vulkan surface, swapchain acquire, transfer clear, presentation semaphores,
  `vkQueuePresentKHR`, out-of-date/suboptimal handling and swapchain recreation.
- Guest snapshot constant-bank/index uploads to actual Vulkan buffers. The
  result is **ResourcesUploaded**, never Submitted: no game draw is issued yet.
- A host state translation dispatch table for depth/raster/alpha state and
  blend-factor/op conversion. Unsupported behavior remains explicitly marked.

The window currently shows a **black host clear**, not a game image. The host
color/depth working images are not yet mapped to guest render-target resources.
The game shader cache, vertex layouts/data, texture tiling/formats, shader descriptor
layouts, clears/resolves, complete state and command-list replay remain to be
connected before graphics pipelines and `vkCmdDraw*` can execute the game.
Do not interpret transfer/present counters as rendered game frames.

## Three real guest state replacements

`gpu/state_dispatch.inc` declares verified replacements for:

| Entry | Function | Effect retained in native device |
|---|---|---|
| `82DA8D28` | Depth-write enable | bit 2 of +10548; dirty bit 0x800 at +16 |
| `82DA8D58` | Depth comparison | bits 4..6 of +10548; dirty bits 0x800/0x20000 |
| `82DA85C0` | Culling/orientation | bits 0..2 of +10568; dirty bit 0x40 |

On successful Vulkan backend initialization, the **existing PPC function
mapping resolves these entries to host implementations** rather than forwarding
to the original functions. They preserve native memory and volatile register
results, so unported SDK code still sees the same state. With Vulkan disabled,
they forward to the originals. `Video::Init` explicitly anchors their object
file in the runtime library.

The standalone test build extracts the exact original function bodies from
`ppc_recomp.270.cpp` and `.271.cpp`, then compares replacements and originals
across 6000 randomized enabled/disabled cases, including the entire PPCContext
and device-memory region. Generated PPC files are not modified.

This is a **partial state-function replacement**, not a completed replacement of
all render/sampler dispatch tables. The location and ABI of those complete
native tables remain unproven. No Unleashed device layout or invented guest
function address is written into Generations memory.

## Build and select

Install Vulkan headers/loader and SDL2 development packages (on Debian/Ubuntu:
`libvulkan-dev libsdl2-dev`; a working Vulkan ICD is also required). For the full
runtime use its supported Clang toolchain and normal dependencies, adding:

```sh
cmake -S . -B build -DCMAKE_CXX_COMPILER=clang++ -DCMAKE_C_COMPILER=clang \
  -DSONIC_GENERATIONS_ENABLE_VULKAN=ON
cmake --build build
SONIC_RENDER_BACKEND=vulkan ./build/SonicGenerationsRecomp/SonicGenerationsRecomp
```

`SONIC_RENDER_BACKEND` must be set **before window creation**. `vulkan` enables
native capture and the three state replacements automatically. `null` (or an
unset variable) retains the previous default. Requesting Vulkan without a
Vulkan-enabled build fails explicitly, without silently selecting NullBackend.
Set `SONIC_VULKAN_VALIDATION=1` to require `VK_LAYER_KHRONOS_validation`.
Missing layers/drivers are initialization errors, not successful emulation.

The implementation targets ordinary Linux/Windows Vulkan + SDL. The new GPU
execution workflow tests Linux Mesa lavapipe. Windows Vulkan WSI and macOS
portability extensions are not established by that test. D3D12 is not added.

## Tests without game files or shaders

```sh
cmake -S tests/vulkan -B build-vulkan -DCMAKE_BUILD_TYPE=Debug
cmake --build build-vulkan --parallel 2
# Requires the validation layer and a graphics-capable Vulkan ICD:
./build-vulkan/vulkan_host_tests
# Requires a display; software CI uses Xvfb:
xvfb-run -a ./build-vulkan/vulkan_host_tests --wsi
```

Tests additionally require `glslang-tools` to compile their small original GLSL
fixtures into build-directory SPIR-V. These shaders never ship in the runtime.
The initial graphics profile accepts descriptor-free SPIR-V 1.0, one vertex
stream (float2/float4 attributes), triangle lists, RGBA8 + D32 and no blending.
Unsupported descriptor/push-constant shaders are refused, not substituted.

The tests execute actual Vulkan calls (including an indexed triangle draw),
compare buffer, image and rasterized color/depth readbacks,
check memory/handle limits, repeated initialization/destruction, native index
and constant uploads, swapchain presentation/resizing and validation error
counts. They fail if no Vulkan device/layer is available (no success-by-skip).
CI enables synchronization validation. Mesa lavapipe is a software Vulkan
implementation; this is not a test on a physical GPU or an in-game run.

The sandbox may lack a loader/ICD. In that case syntax compilation and the
CPU-only state tests are not substitutes for the Vulkan execution workflow.

## Bounds and remaining limitations

- Maximum 512 live resources, 64 MiB per allocation, 256 MiB total owned
  buffer/image allocations. Driver-internal/swapchain allocations are outside
  this accounting. Host handle IDs are not reused, including across re-init.
- Queue submission/presentation is deliberately serialized. Resize requests are
  consumed by the presentation path; no resources are freed while in flight.
- Captured native index bytes are uploaded unchanged, with four-byte transfer
  padding. Xenos index endianness must be resolved before binding them for draws.
- Float banks are uploaded in explicit little-endian word order, but descriptor
  ABI, boolean constants and shader bindings are still unresolved.
- The native SDK is not entirely bypassed; its existing unfinished Vd paths can
  still prevent reaching draw/present. The backend does not fix those paths by
  returning fabricated success.
- The standalone Vulkan test builds the backend and its SDL integration, not the
  full recompiled executable. Full-runtime linkage and real-game validation are
  separate requirements.

Reference architecture: hedge-dev/UnleashedRecomp's `gpu/video.cpp` (host state
handlers and resource/queue lifecycle). This implementation uses Vulkan directly;
it does not transplant Unleashed's title-specific GuestDevice. Xenos encoding
cross-checks: xenia-project/xenia `src/xenia/gpu/registers.h` and `xenos.h`.

## Validation history

The first execution run passed resource readbacks but synchronization validation
caught a swapchain acquire/layout-transition write-after-read hazard. The acquire
wait and initial transition now form a full execution dependency; the subsequent
resource + WSI run passed with zero validation errors. The tests retain this check.
