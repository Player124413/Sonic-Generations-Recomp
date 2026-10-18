#pragma once

#include <cstddef>
#include <cstdint>
#include <filesystem>
#include <span>
#include <vector>

namespace GuestGpu
{
    // -----------------------------------------------------------------------
    // ETC2 texture transcoding (Android / mobile Vulkan path).
    //
    // Most Android GPUs cannot sample BC (DXT/S3TC) textures, but ETC2 is
    // mandatory in Vulkan-capable Android devices. The guest texture path
    // (resource_conversion.cpp) already decodes Xenos BC1/BC2/BC3 surfaces to
    // tightly packed RGBA8. This module re-encodes that RGBA8 into ETC2 so it
    // can be uploaded as VK_FORMAT_ETC2_*_SRGB_BLOCK: 4 bit/texel instead of
    // 32 bit/texel, i.e. ~8x less texture memory and memory bandwidth.
    //
    // Encoder profile (ETC2, Khronos Data Format Specification):
    //   * RGB blocks:   Individual and Differential colour modes, both flip
    //                   orientations, all 8 modifier tables, per-pixel index
    //                   optimisation, endpoint search around the sub-block
    //                   average. T/H/Planar modes are never emitted.
    //   * Alpha blocks: EAC alpha (all 16 modifier tables, multiplier search)
    //                   followed by an opaque-style RGB block.
    // Width/height do not need to be multiples of four; edge texels are
    // replicated for padding exactly like the Vulkan block layout expects.
    //
    // The decoder implements the same modes (Individual/Differential + EAC).
    // It exists for host tests and for a future software fallback; it rejects
    // T/H/Planar blocks instead of mis-decoding them. Real devices decode
    // every ETC2 mode in hardware, so this does not limit uploads.
    //
    // This module has no Vulkan or guest-memory dependency and is unit
    // tested on the host (tests/texture_transcode_tests.cpp).
    // -----------------------------------------------------------------------

    enum class Etc2Kind : uint32_t
    {
        Rgb = 0,  // VK_FORMAT_ETC2_R8G8B8_SRGB_BLOCK,     8 bytes / 4x4 block
        Rgba = 1, // VK_FORMAT_ETC2_R8G8B8A8_SRGB_BLOCK,  16 bytes / 4x4 block
    };

    constexpr size_t Etc2BlockBytes(Etc2Kind kind) noexcept
    {
        return kind == Etc2Kind::Rgba ? 16 : 8;
    }

    constexpr size_t Etc2DataSize(uint32_t width, uint32_t height, Etc2Kind kind) noexcept
    {
        if (!width || !height)
            return 0;
        return size_t((width + 3) / 4) * size_t((height + 3) / 4) * Etc2BlockBytes(kind);
    }

    // Encodes tightly packed RGBA8 (width*height*4 bytes) to ETC2.
    // Transactional: output is unchanged on failure.
    bool EncodeEtc2(uint32_t width, uint32_t height, std::span<const uint8_t> rgba,
        Etc2Kind kind, std::vector<uint8_t>& output) noexcept;

    // Decodes ETC2 data produced by EncodeEtc2 back to tightly packed RGBA8.
    // Transactional: output is unchanged on failure.
    bool DecodeEtc2(uint32_t width, uint32_t height, std::span<const uint8_t> data,
        Etc2Kind kind, std::vector<uint8_t>& output) noexcept;

    // True when every alpha texel is opaque (RGB ETC2 is then sufficient).
    bool IsOpaque(uint32_t width, uint32_t height, std::span<const uint8_t> rgba) noexcept;

    // FNV-1a 64-bit hash of texture contents; used for transcode cache keys.
    uint64_t TextureContentHash(std::span<const uint8_t> bytes) noexcept;

    // -----------------------------------------------------------------------
    // On-disk ETC2 transcode cache. Encoding a 1024x1024 texture costs tens
    // of milliseconds of CPU time; the result is cached under a content key
    // so each unique texture is encoded once per install, not once per run.
    // File format: "SGEC" magic, version, width, height, kind, payload.
    // Any mismatch (size, magic, dimensions) is a cache miss, never an error.
    // -----------------------------------------------------------------------
    class Etc2DiskCache
    {
    public:
        explicit Etc2DiskCache(std::filesystem::path directory);

        // Key must be TextureContentHash of the RGBA input combined with the
        // dimensions (see MakeKey). Returns false on a miss.
        bool Load(uint64_t key, uint32_t width, uint32_t height, Etc2Kind kind,
            std::vector<uint8_t>& output) const;
        void Store(uint64_t key, uint32_t width, uint32_t height, Etc2Kind kind,
            std::span<const uint8_t> data) const;

        static uint64_t MakeKey(uint64_t contentHash, uint32_t width, uint32_t height,
            Etc2Kind kind) noexcept;

    private:
        std::filesystem::path Directory;
    };
}
