#pragma once
#include <cstddef>
#include <cstdint>
#include <span>
#include <string>
#include <vector>

// Nine-column generator ABI confirmed against Player124413/XenosRecomp
// 034c1fb, XenosRecomp/main.cpp's cache writer. Generated file is unchanged.
struct ShaderCacheEntry
{
    uint64_t hash;
    uint32_t dxilOffset, dxilSize, spirvOffset, spirvSize;
    uint32_t airOffset, airSize, specConstantsMask;
    const char* source;
};
extern ShaderCacheEntry g_shaderCacheEntries[];
extern const uint8_t g_compressedSpirvCache[];
extern const size_t g_shaderCacheEntryCount, g_spirvCacheCompressedSize, g_spirvCacheDecompressedSize;

namespace GuestGpu
{
    struct ShaderCacheData
    {
        std::span<const ShaderCacheEntry> entries;
        std::span<const uint8_t> compressed;
        size_t declaredCount = 0, declaredCompressedSize = 0, decodedSize = 0;
    };
    ShaderCacheData GetEmbeddedShaderCache() noexcept;
    struct ShaderIndex { uint64_t hash; uint32_t offset, size, specConstantsMask; };
    struct ShaderBinding { uint32_t id, set, binding, storage; };
    struct ShaderModule
    {
        uint64_t hash = 0;
        std::string entryPoint;
        uint32_t stage = 0; // SPIR-V ExecutionModel, 0=vertex, 4=fragment
        bool bufferDeviceAddress = false;
        std::vector<uint32_t> words, capabilities, inputLocations;
        std::vector<ShaderBinding> bindings;
    };
    // Structural inspection, NOT a replacement for SPIRV-Tools validation or
    // type/offset reflection. Entry names come from the modules, not a hardcoded main.
    bool InspectShader(std::span<const uint32_t> words, ShaderModule& result, std::string& error);
    class ShaderCache
    {
    public:
        // Fail closed: a failed reload clears the previous cache. Initialize
        // with consumer threads stopped. Decode is then read-only/thread-safe.
        bool Initialize(ShaderCacheData data, std::string& error);
        bool Decode(uint64_t hash, ShaderModule& module, std::string& error) const;
        std::span<const ShaderIndex> Entries() const noexcept { return index; }
    private:
        std::vector<ShaderIndex> index;
        std::vector<uint8_t> smolv;
    };
}
