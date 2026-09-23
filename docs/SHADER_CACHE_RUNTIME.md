# Uploaded cache: runtime integration and validation

The published `SonicGenerationsRecomp/gpu/shader_cache.cpp` contains 6,404
entries, 6,664,669 compressed bytes and 40,866,697 SMOL-V bytes after Zstd decode.
The nine-column layout is now confirmed against the cache writer in the pinned
Player124413/XenosRecomp fork (`034c1fb`): hash, DXIL offset/size, SPIR-V offset/size,
AIR offset/size, specialization-constant mask, source filename. The index retains
the specialization mask; AIR fields are unused by Vulkan. The generated file is
unchanged. This replaces the old incompatible two-field hash/span placeholder.

`gpu/shader_cache_data.cpp` wraps the generated arrays with their actual compiled
bounds. `ShaderCache` verifies declared counts, one exact bounded Zstd frame,
strictly ordered hashes and contiguous non-overlapping module ranges. It owns
its decoded storage and index, supports binary-search hash lookup and decodes
individual SMOL-V modules into owned SPIR-V words. Decode is read-only after
initialization; failed reloads clear the old index rather than silently keeping
stale shaders. Missing hashes and malformed data fail explicitly. Packed module
offsets are not necessarily dword-aligned; aligned header/input copies are used
for the pinned SMOL-V decoder (verified with ASan/UBSan).

Local decoding and structural inspection of the actual cache found:

- 484 vertex and 5,920 fragment modules;
- all 6,404 use physical storage-buffer addressing;
- the first entry point is `shaderMain`, not `main` (the loader retains each name);
- 5,728 modules decorate descriptors at set0/binding0 and set3/binding0;
- 544 modules decorate descriptors at set2/binding0;
- no directly decorated descriptor at set4/binding3 was observed. The pinned
  fork uses packed booleans, not our historical extra-bank patch. This does not
  establish correct packing from native device state; see [TOOLCHAIN.md](TOOLCHAIN.md).

Vulkan backend initialization now loads the cache and reports its size. The
loader does not yet select modules from guest shader bindings or create game
pipelines. Constants, descriptor-array allocation, boolean ABI, vertex
reflection/declarations and game render-target/draw integration still need work.
The fixture pipeline must not consume these modules: it lacks their required
features and pipeline layout. Loading this cache does not make the game playable.

## Tests

```
git submodule update --init tools/XenosRecomp
git -C tools/XenosRecomp submodule update --init thirdparty/smol-v thirdparty/zstd
cmake -S tests/shader_cache -B build-shader-cache -DCMAKE_BUILD_TYPE=Release
cmake --build build-shader-cache --parallel 2
ctest --test-dir build-shader-cache --output-on-failure
```

These compile the actual uploaded C++ cache, decode every entry, inspect bounded
SPIR-V instructions and test missing hashes, corrupt frames, bad ranges/counts,
duplicate hashes and malformed instructions. Structural inspection is **not**
a full validator or complete type/layout reflection. The dedicated CI workflow
also runs `spirv-val --target-env vulkan1.2 --scalar-block-layout` on every module.
That validation assumes scalar layout support; it does not enable this feature
on the current host device and does not establish correct game rendering.

Optionally pass a build-directory path to `shader_cache_tests` to export decoded
modules for validation. These are generated game-derived assets: do not commit
or publish another copy. No dump is made by normal runtime initialization.

## Native shader binding resolution

The snapshot now includes the setters' shader slots: PS at device+13044
(`82DB1D18`), VS at device+13048 (`82DB1F20`). These were just outside the old
13,044-byte prefix; it is now 13,052 bytes. This is still not a synthetic device.

Native constructors split the original XenosRecomp input container:

| Stage | Constructor / initializer | Virtual container | Physical-data pointer | Native resource type |
|---|---|---|---|---|
| PS | `82DB25E0` / `82DB1CE0` | object+40 | object+24 | 7 |
| VS | `82DB27C8` / `82DB26D0` | object+872 | object+32 | 6 |

The reader concatenates exact guest virtual/physical bytes (without endian
conversion), with validated sizes and a 4 MiB scratch cap. XXH3 is the pinned
XenosRecomp algorithm over the entire container, not just GPU instructions or
a native object address. Shader magic, stage flag, native resource type,
reserved header fields, alignment and 32-bit memory bounds are checked.
No synthetic shader address is substituted and no guest data is rewritten.

With Vulkan resource capture enabled, identities are captured before the original
draw. The backend resolves them from the uploaded cache and verifies the decoded
SPIR-V stage. Missing hashes, mismatched stages and partially bound pairs stop the
batch before resource uploads. Decoded modules are deduplicated by hash within
the batch with a 64 MiB word budget; entry names and specialization masks are
retained. Fully unbound batches may still exercise the existing upload-only path.

Tests guard initializer/setter PPC instruction evidence, split-container hashing,
mutation after capture, malformed addresses/sizes, stage mismatch and actual-cache
lookup in the Vulkan backend. The last test uses fabricated binding IDs paired
with real cache hashes; it is not proof of a match during a real game launch.
Native resource mutation / in-place creation paths may require additional capture
hooks if reconstruction no longer matches an original container; the current
behavior is an explicit missing-hash failure, never arbitrary shader selection.

**Still not connected:** descriptor allocation and writes, reflected vertex
layouts, game shader pipeline creation, render-target/resolve semantics and guest
`vkCmdDraw*`. Successful resolution currently returns `ResourcesUploaded`, not
`Submitted`, and is not evidence of game playability.

## Direct-frame consumer

The experimental `SONIC_VULKAN_DIRECT_DRAW=1` path now creates Vulkan pipelines
from resolved cache modules, binds 24-byte address constants and 2D/sampler
descriptors, and issues indexed commands. See [VULKAN.md](VULKAN.md) for its
strict single-target/float-vertex profile and its missing native target/resolve
and Clear semantics. Successful cache validation still does not imply shader
profile support, verified in-game bindings or playability.
