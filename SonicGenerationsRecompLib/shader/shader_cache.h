#pragma once

#include <cstdint>
#include <span>

// ---------------------------------------------------------------------------
// Shader cache seam.
//
// The Xbox 360 shader binaries used by the title are translated to HLSL by
// XenosRecomp and compiled to DXIL/SPIR-V with DXC (see tools/XenosRecomp).
// The generated cache is linked in here once the shaders are built; until
// then the cache is empty and the render backend has nothing to draw with.
//
// Integration steps (see docs/ROADMAP.md):
//   1. Extract the title's shader archive (shader.ar) from your dump.
//   2. Run XenosRecomp (target `XenosRecomp` in tools/) to produce
//      SonicGenerationsRecompLib/shader/shader_cache.cpp.
//   3. Define SONIC_GENERATIONS_HAVE_SHADER_CACHE in the Lib target.
// ---------------------------------------------------------------------------

struct ShaderCacheEntry
{
    uint64_t hash;
    std::span<const uint8_t> blob;
};

class ShaderCache
{
public:
    static bool IsAvailable();
    static size_t GetSize();
    static const ShaderCacheEntry* Find(uint64_t hash);
};
