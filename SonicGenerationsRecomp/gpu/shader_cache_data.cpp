#include <gpu/shader_cache.h>
#include <iterator>
// Include rather than separately compile the generated TU so span bounds come
// from actual array sizes, not potentially stale generated size declarations.
#include "shader_cache.cpp"
GuestGpu::ShaderCacheData GuestGpu::GetEmbeddedShaderCache() noexcept
{
    return {g_shaderCacheEntries, g_compressedSpirvCache, g_shaderCacheEntryCount,
        g_spirvCacheCompressedSize, g_spirvCacheDecompressedSize};
}
