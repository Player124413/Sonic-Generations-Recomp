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
- Guest snapshot constants, endian-converted indices/vertex streams and decoded
  2D texture uploads to actual Vulkan buffers/images. The
  result is **ResourcesUploaded**, never Submitted: no game draw is issued yet.
- A host state translation dispatch table for depth/raster/alpha state and
  blend-factor/op conversion. Unsupported behavior remains explicitly marked.

The window currently shows a **black host clear**, not a game image. The host
color/depth working images are not yet mapped to guest render-target resources.
The game shader cache, vertex declarations, complete texture formats/mips, shader
descriptor layouts, clears/resolves, complete state and command-list replay remain to be
connected before graphics pipelines and `vkCmdDraw*` can execute the game.
Do not interpret transfer/present counters as rendered game frames.

## Native resource upload path

Vulkan enables owned resource capture; plain `SONIC_GPU_CAPTURE=1` keeps the
previous state/index-only observation behavior. Before the original draw, the
capture takes bounded copies from CPU descriptors rather than guessing a CPU
alias for a GPU physical address:

- `82DAA9E8`: vertex resource pointers at +12812+4*stream, fetch pairs at
  +1776+8*(17-stream), stride bytes at +12880+stream (in dwords). The profile
  handles streams 0..15, current byte offsets and four Xenos endian modes.
- `82DA6DC0`: texture fetches at +1152+24*slot; CPU base address recovered from
  resource+32, validated against the GPU fetch address. No synthetic physical
  memory alias is introduced.
- `82DA7E60`: index width from flags bit31 and endian from bits29..30. A sliced
  16-bit index buffer supports no swap or 8-in-16; modes requiring neighbouring
  dwords fail explicitly instead of incorrectly swapping an unaligned slice.

`resource_conversion.cpp` supports unsigned base-level 2D RGBA8/R8/BC1/BC2/BC3,
linear pitch, 2D tiling, endian conversion, BC decompression and component
swizzles (including constant zero/one). R8 follows Xenos component replication.
Packed mip tails, mip chains, arrays/cubes/3D, signed/gamma/exponent formats and
swapped R8 are rejected; no mip truncation, checkerboard or placeholder texture
is substituted. Sampler descriptors are **not** wired by this upload path.

Retained bytes share the existing 8 MiB batch budget; temporary texture source
copies are bounded separately. Failed resource capture retains a per-draw
status/slot, not partial owned resources. The backend preflights the whole batch
and emits a diagnostic before any uploads for rejected resources. Copies are
owned until batch consumption, and synchronous Vulkan submissions complete
before resource destruction. This is deliberately not yet a persistent cache.

CPU tests compare tiled addressing with an independent macro/micro formula,
check endian modes, BC colors/alpha, pitch/padding, budgets and immutable native
capture. Vulkan tests exercise capture-to-buffer/image transfers, converted
index/vertex triangle input and BC texture pixel readback. These are synthetic
fixtures through production code, **not a real game launch**.

## Confirmed shader ABI gap

The pinned XenosRecomp (`990d03b`) uses three 64-bit buffer device addresses in
its SPIR-V push constants: vertex constants, pixel constants, shared constants.
Shared offsets 0/64/128 select 2D/3D/cube descriptor indices, offset192 selects
samplers, and 256/260/264/272 hold packed booleans, swapped texcoords, half-pixel
offset and alpha threshold. Descriptor heaps are in spaces0..3. The Generations
patch adds the separate 32-byte hardware boolean bank at b3/space4.

The workflow output is also not raw SPIR-V: its cache contains SMOL-V encoded
modules in a Zstd-compressed blob indexed by XXH3 hashes. The current cache seam
and descriptor-free host pipeline do not implement this ABI. Buffer device
address features, descriptor indexing/layouts, decompression/hash lookup,
reflection-driven vertex declarations and boolean packing still need wiring.
Do not pass this cache to the fixture pipeline or claim shaders alone suffice.
Reference: `tools/XenosRecomp/XenosRecomp/{shader_common.h,shader_recompiler.cpp,main.cpp}`
and `patches/xenos-generations-booleans.patch`.

## Verified native state dispatch

`sub_82DC2A50` establishes the layout below for both native device creation
paths (`82DC3690` and `82DC3178`). Offsets are bytes from the device pointer:

| Table | Entries | Setter offsets | Opaque metadata offsets | Source template |
|---|---:|---|---|---|
| Render | 101 | 64..467 | 548..951 | `0x83790798` |
| Sampler | 20 | 468..547 | 952..1031 | `0x83790C58` |

Each source record is 12 bytes: metadata at +0, setter address at +4,
default value at +8. The initializer copies the first two fields and invokes
the setters with defaults. Render defaults use r3=device/r4=value; sampler
defaults use r3=device/r4=slot/r5=value, repeated for 26 slots. Metadata
semantics are not established; these words are **not assumed to be getters**.

`gpu/state_dispatch.inc` contains **25 render leaf replacements**, including
native depth, stencil, raster and alpha word updates. `sampler_dispatch.inc`
contains **3 sampler address U/V/W replacements**. Entries whose semantic name
is uncertain retain address-based names. These implement exact native word
updates, dirty writes and volatile-register effects, not a complete mapping of
all those states into Vulkan pipeline objects.

On successful Vulkan backend initialization, the existing PPC function mapping
resolves these addresses to strong host implementations. Native table addresses
stay unchanged; unsupported functions still execute their original PPC bodies.
Sampler slots outside 0..25 also use their original functions. With Vulkan
disabled, all replacements forward to originals. `Video::Init` anchors the
replacement and initializer-hook object files in the runtime library.

After the original initializer returns, a read-only audit compares all 121
setter pointers and metadata words to their native templates, checks setter
alignment/code range, and counts slots pointing to known replacements. On
failure it logs the first rejection and disables replacements (until explicitly
re-enabled by initialization); it never fabricates or repairs guest tables.
The audit preserves the original initializer's context/results. Counters report
observed slots, not rendered frames or full semantic coverage. This runtime
audit has unit tests but has **not yet been exercised by a real game launch**.

Standalone differential tests extract exact original bodies from generated
`ppc_recomp.270.cpp` through `.272.cpp` and compare the entire PPCContext and
memory across **69,200** enabled/disabled cases. Additional tests cover table
bounds, mismatches, opaque metadata, hook forwarding/fail-closed behavior and
instruction evidence in the original initializer. Generated PPC is unchanged.

This confirms table layout and replaces a tested subset of native leaves;
it does **not** implement all 121 dispatch entries or complete guest rendering.
No Unleashed device layout or invented guest function addresses are written.

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
native capture, the verified state replacements and table audit automatically. `null` (or an
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
