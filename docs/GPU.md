# Generations GPU: observation hooks

**NullBackend remains the default. An opt-in Vulkan backend now submits actual
resource transfers/clears and presents a host clear, not game rendering. A
separate host graphics profile also executes a pixel-verified indexed test draw.** See
[VULKAN.md](VULKAN.md) for host resources, submission, verified guest state
replacements, build options and tests. The eight observation hooks below retain
their original pass-through behavior.
They are a preparatory layer for the static-SDK approach used by UnleashedRecomp,
not a complete renderer or a demonstration that the game works.

## Implementation

`gpu/guest_entries.inc` lists eight Generations-specific boundaries.
`guest_hooks.cpp` overrides the generated weak public `sub_*` aliases and calls
the original `__imp__sub_*` bodies exactly once. It forwards the full PPCContext
without argument marshalling, preserves original return values and memory side
effects. Optional native capture reads the device prefix and bounded index data
(see below); ordinary observation still does not read guest pointers. No replacement device
is allocated and no unknown dispatch table is patched.

`Video::Init()` calls `GuestGpu::EnableObservation`, explicitly pulling the
hooks out of the runtime static library. Otherwise weak generated aliases may
satisfy linkage without loading the override object.

Enable counters with `SONIC_GPU_TRACE=1` before launching the executable
(PowerShell: `$env:SONIC_GPU_TRACE = '1'`). They are off by default.
`GuestGpu::GetSnapshot()` returns process-lifetime counters; nonzero counters
are logged on orderly video shutdown. Disabling observation never bypasses the
original code. `entered` counts attempts and `returned` counts normal returns,
not GPU completion. Only CreateDevice's return value is interpreted as HRESULT
for `failedCreates`. Concurrent snapshots are approximate; shutdown does not
join guest threads and in-flight calls may finish after its snapshot.

Do not use these numbers as frame draw counts: UP draws and other paths remain
unmapped. Existing Vd ring/system-buffer implementations are still incomplete.

## Shader-independent command preparation

`native_commands.{h,cpp}` now adds opt-in native state/resource capture to the
two mapped draw entrypoints. Enable it with `SONIC_GPU_CAPTURE=1` (independent
of `SONIC_GPU_TRACE`). The default remains disabled. It needs no compiled
shader archive or shader cache. Original SDK execution is still preserved.

- Copies the known 13044-byte device prefix **before** native draw processing,
  converts big-endian words to host integers and retains raw unknown fields.
- Exposes four color-target pointers, the depth target, index binding, the
  26 pointer slots before the viewport block, viewport/scissor, two 256-vector
  float constant banks and raw six-word texture fetch descriptors. The 26-slot
  prefix is not a declaration that all 26 API sampler indices are valid.
- Copies the requested index range using the observed native descriptor:
  flags at +0, data address at +24, 16/32-bit width from flag `0x80000000`, first
  index in r6 and count in r7. Index bytes retain native order and flags; endian
  swap mode is **not** guessed. The copy survives reuse of guest memory.
- Uses an ordered, mutex-protected queue with monotonically increasing sequence
  numbers and owned snapshots. Limits: 128 draws per batch, 256 KiB index data
  per draw, 8 MiB payload per batch. Overflows, invalid address ranges, resource
  limits and allocation failure are reported. Guest calls still execute.
- `Video::Present` drains before backend Present. A batch with capture errors
  is rejected without calling the backend. `IRenderBackend::SubmitGuestBatch`
  defaults to Unsupported; NullBackend therefore never reports these draws as
  submitted. Backend callbacks run outside the queue mutex. Batch references
  are valid only during the callback; asynchronous consumers must own copies.
- `FrameStats` separates captured draws/rejected batches/capture errors from
  actual draw calls. Disabling capture clears pending data. Configure capture
  with guest producer threads stopped; shutdown discards unpresented snapshots.

This is **command preparation, not Vulkan/D3D12 rendering**. It does not replace
render/sampler dispatch tables. It observes state changes made through setters
or directly in device memory, but pre-draw snapshots precede SDK lazy fixups.
Only two draw paths are covered (`NativeBatch::CompleteCoverage == false`).
UP draws, command-list replay, resolves/clears and vertex data are not captured.
Render-target/texture binding addresses are not retained host resources or
stable resource identities. Their data, resource lifetimes/formats/tiling and
shader bindings still require implementation. Backend consumers must not render
such a batch as if it were complete. The optional Vulkan backend now consumes these snapshots for resource uploads;
this does not make the partial batches ready for graphics draws. D3D12 is not added.

Memory reads check page-zero protection, alignment, 32-bit overflow and view
bounds. They assume guest pages are accessible as in the original PPC runtime;
this is not an OS page validator or a check of the allocation's logical size.
Guest application synchronization must protect the device while it is being
used. The original SDK can still fail in the unfinished Vd implementation.

Additional evidence: texture binding `82DA6DC0` stores at
`device + 4*(3224 + slot)` and updates fetch state at `(48 + slot)*24`;
index binding `82DAAB08` stores at +12788, read by `82DA7E60`; depth binding
`82DAB6B0` stores at +12808. The draw code flushes constant banks at +1920 and
+6016 to register bases 0x4000/0x4400. Regression tests check these anchors.

Compiled shaders **can be supplied later**. That does not defer all shader
work: native shader binding, hash/ABI agreement, constant-buffer mapping and
pipeline layout must still be recovered before the final artifacts can draw
the game. An empty cache must not be substituted with arbitrary shaders.

## Address evidence

Names describe observed behavior, not recovered original SDK symbol names.
Addresses come from this repository's Generations PPC, not from Unleashed.

| Boundary | Address | Evidence |
|---|---|---|
| CreateDevice | `82DB11C0` | Clears `*r8`; allocates `0x6080` bytes aligned to 128; calls constructor `82DC3108` and normal initialization `82DC3690`. Type in r4, flags r6, parameters r7, output r8. Failure path returns `0x8007000E`. |
| ReleaseDevice | `82DB0D38` | Atomic decrement at device+60; zero-reference path calls shutdown `82DC3248`. |
| Viewport pointer wrapper | `82DAB270` | Loads six floats from r4+0..20 and a word at +24; tail-calls `82DAAF88`. Not assumed to be PC D3DVIEWPORT9. |
| Scissor helper | `82DAA888` | Rectangle at r4; viewport clipping and stores at device+13028..13040. Also called internally. |
| Render target | `82DAB320` | Stores r5 at device+4*(3198+r4), then updates hardware state. |
| DrawVertices | `82DA7A48` | Captures primitive/start/count from r4/r5/r6; flushes dirty state; emits `0xC0012201` packets and writes command pointer at device+48. |
| DrawIndexedVertices | `82DA7E60` | Captures r4..r7; emits `0xC0032201` packets with index-buffer information and updates device+48. Full public ABI still needs validation. |
| Internal swap helper | `82DC48B0` | Calls VdSwap and updates device+48. **Not established as public Present.** No extra host present is injected. |

Sources: `ppc_recomp.270.cpp`, `.272.cpp`, `.273.cpp`, `.274.cpp`.
Engine callers in `.284.cpp` create both type 1 and type 2 devices; they are
not interchangeable roles. The earlier suggested `82A28D50` is a branch inside
`sub_82A28D18`, not a function entry, and is not hooked.

### Layout restrictions

Native allocation: **0x6080**, versus Unleashed's replacement GuestDevice
**0x5E00**. Observed native offsets (not a complete structure declaration):

- +48 command write pointer, +52 end, +56 allocation limit, +60 refcount.
- +12792 + index*4 render-target pointers.
- +13000..13020 viewport; +13028..13040 scissor.
- +17120 auxiliary 4800-byte command-buffer allocation.

Unleashed's `dirtyFlags[8]` at offset zero would overlap Generations' command
pointers/refcount. Do not transplant that layout while native methods remain
active. The native initializer now confirms 101 render setters at +64 and
20 sampler setters at +468; see [VULKAN.md](VULKAN.md) for templates, opaque
metadata arrays, replacement coverage and the runtime table audit.

UP candidates `82DA6F60` and `82DA7468` prepare guest allocations/pointers;
their begin/end protocol is not established and they are deliberately unhooked.
`82DC5018` wraps swap plus state changes; its public API identity is unconfirmed.

## Tests

```sh
git submodule update --init tools/XenonRecomp
git -C tools/XenonRecomp submodule update --init thirdparty/simde
cmake -S tests/gpu -B build-gpu -DCMAKE_BUILD_TYPE=Debug
cmake --build build-gpu --parallel 2
ctest --test-dir build-gpu --output-on-failure
```

The C++ suite uses the real PPCContext and mock generated weak aliases in a
separate static library. It checks function-table override selection, exactly
once forwarding, entire-context/memory equivalence, success/failure returns,
disabled counters, and concurrent counting. The Python suite checks instruction
anchors in actual generated sources. These observation tests do not execute the
real SDK. The separate state differential suite executes extracted real SDK leaf
bodies (not the full device initializer or game). The
new native-command suite also checks endian decoding, range/overflow rejection,
immutable index payloads, queue order/capacity/budget and default backend
rejection. The standalone suite can use GCC; this does not establish GCC support for the full
runtime. A separate workflow covers Linux Clang and Windows ClangCL.

## Remaining renderer work

Host Vulkan resource/transfer/WSI foundations and 28 leaf-state replacements
are now implemented; see [VULKAN.md](VULKAN.md). Remaining game rendering:

1. Complete state semantics, shader/stream/index bindings, resource lifetimes,
   constants, clears/resolves and UP protocols.
2. Validate the ABI and layout against real guest execution.
3. Implement host resources, ordered command submission through plume/Vulkan
   or D3D12, shader-cache integration and boolean constant buffers.
4. Keep replaced methods and native methods consistent; do not let native code
   access an incompatible synthetic device.
5. Check the full executable's link symbols and test real in-game frames.
   Mock linkage tests and import coverage do not prove rendering correctness.

Reference: https://github.com/hedge-dev/UnleashedRecomp,
`UnleashedRecomp/gpu/video.{h,cpp}`. This change does not transplant its
title-specific addresses, GuestDevice struct or renderer code.
