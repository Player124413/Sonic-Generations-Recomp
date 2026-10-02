#pragma once
// Offline replay of a recorded command stream through our own GPU device.
//
// Why this exists: the renderer has to be written against the stream the game
// actually produces, and waiting for a Windows run for every decoder change
// makes that work both slow and blind. A recording (SONIC_REX_GPU_DUMP=1) is a
// self-contained artifact -- raw ring bytes per frame plus the guest-memory
// regions the stream references (memory.bin) -- so the same bytes can be fed
// back into the same CommandProcessor, RenderState and walker that run in the
// game, here, on any host, with no SDK and no GPU.
//
// What a replay proves and what it does not:
//   * it proves the decoder executes the recorded stream: packets, register
//     writes, constant blocks, draws, shader uploads, memory writes, swaps;
//   * it proves nothing about the image, because rasterisation does not exist
//     yet -- the numbers here are the contract the renderer has to satisfy.
#include <cstdint>
#include <filesystem>
#include <span>
#include <string>
#include <vector>

#include "memory_image.h"
#include "memory_sidecar.h"
#include "render_state.h"

namespace sonic::rex_host::gpu {

struct ReplayOptions {
    /// Where the recorded ring bytes are placed in the image. Only the replay
    /// uses this address; the guest's own ring base is recorded separately.
    uint32_t ringBase = 0x10000000;
    /// Ring size as VdInitializeRingBuffer takes it (log2 of 8-byte units). A
    /// larger frame is streamed through the ring in chunks, exactly as the guest
    /// streams it, so the walker's truncation and resume paths are exercised.
    uint32_t ringSizeLog2 = 14;
    /// Safety bound: a stream that never drains must not hang the tool.
    size_t maxSteps = 1u << 20;
    /// Replay at most this many frames from a directory (0 = all recorded ones).
    size_t maxFrames = 0;
    /// Write a re-decode of the stream next to the recording.
    bool writeReport = true;
};

/// What one replayed frame produced. The renderer's requirements are these
/// numbers: a frame with draws but no decoded state cannot be drawn.
struct ReplayFrameResult {
    uint64_t index = 0;
    uint64_t bytes = 0;
    uint64_t packets = 0;
    uint64_t registerWrites = 0;
    uint64_t draws = 0;
    uint64_t vertices = 0;
    uint64_t constantBlocks = 0;
    uint64_t shaderUploads = 0;
    uint64_t memoryWrites = 0;
    uint64_t swaps = 0;
    uint64_t unsupported = 0;
};

struct ReplayResult {
    bool ok = false;
    std::string error;
    /// Dump files replayed, in order.
    std::vector<std::filesystem::path> files;
    uint64_t frames = 0;
    uint64_t bytes = 0;
    uint64_t packets = 0;
    uint64_t registerWrites = 0;
    uint64_t draws = 0;
    uint64_t vertices = 0;
    uint64_t constantBlocks = 0;
    uint64_t shaderUploads = 0;
    uint64_t memoryWrites = 0;
    uint64_t swaps = 0;
    uint64_t unsupported = 0;
    uint64_t truncatedDrains = 0;
    uint64_t indirectNotFollowed = 0;
    uint64_t sidecarRegions = 0;
    uint64_t sidecarBytes = 0;
    bool sidecarPresent = false;
    std::vector<ReplayFrameResult> perFrame;
    /// Opcode histogram of the replayed stream (Type-3 opcodes, 128 entries).
    std::vector<uint64_t> opcodes;
    /// Register indices written, index 0..0xFFFF of the flat register space, so
    /// the renderer work can be ordered by what the stream actually touches.
    std::vector<uint64_t> registers;
    /// The human-readable report: what the device understood, per frame and in
    /// total, plus which opcodes are still unexecutable.
    std::string Report() const;
};

/// Replays one raw frame file's bytes (guest byte order) through a fresh device.
/// `memory` (optional) supplies the guest-memory regions a recording captured;
/// without it, packets that read guest memory are counted as unsupported, which
/// is the honest result rather than zeros.
ReplayResult ReplayFrameBytes(std::span<const uint8_t> bytes, const ReplayOptions& options = {},
                              MemoryImage* memory = nullptr);

/// Replays a recording directory: memory.bin (if present) and every
/// frame-NNN.bin in order. Writes replay-report.txt into the directory when
/// enabled.
ReplayResult ReplayDumpDirectory(const std::filesystem::path& directory,
                                 const ReplayOptions& options = {});

}  // namespace sonic::rex_host::gpu
