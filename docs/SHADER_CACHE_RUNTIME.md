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
