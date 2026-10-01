#pragma once
// Geometry and state feed for our renderer.
//
// Why this exists: the first version of the device executed register writes and
// the swap token and counted everything else as unsupported. That is not a
// renderer, and worse, it is not even the state a renderer would read. On the
// Xbox 360 the D3D driver writes most render state through SET_CONSTANT /
// SET_CONSTANT2 / SET_SHADER_CONSTANTS packets (a block index plus the values),
// loads vertex/pixel shader constants from guest memory with LOAD_ALU_CONSTANT,
// and uploads shader bytecode with IM_LOAD / IM_LOAD_IMMEDIATE. None of that
// arrives as a Type-0 register write, so a device that only understands Type-0
// sees draws with no state at all.
//
// Everything here is decoded from the packet payloads themselves and stored in
// our own register space. The block table bases and payload layouts are Xenos
// hardware facts (verified against the guest-visible contract in the pinned SDK
// headers), not SDK code.
#include "register_file.h"

#include <array>
#include <cstdint>
#include <span>
#include <string>
#include <vector>

namespace sonic::rex_host::gpu {

/// Where SET_CONSTANT blocks land in the flat register space. The same table is
/// what the hardware uses: constants are just registers with different names.
enum class ConstantTable : uint32_t {
    kAlu = 0,        // shader float constants, 4 dwords per vec4 slot
    kFetch = 1,      // texture fetch constants, 6 dwords per texture
    kBool = 2,       // shader bool constants, 32 bits per register
    kLoop = 3,       // shader loop constants
    kRegisters = 4,  // the render state registers themselves
    kUnknown = 0xFF,
};

/// Table base in the register space, or 0 for an unknown table (which must be
/// counted and skipped, never written somewhere plausible-looking).
uint32_t ConstantTableBase(ConstantTable table) noexcept;
ConstantTable ConstantTableFromType(uint32_t type) noexcept;

/// Index buffer as the packet describes it. Guest memory is big-endian; the swap
/// mode is a property of the buffer, not of our reads.
struct IndexBufferInfo {
    uint32_t guestBase = 0;
    uint32_t numWords = 0;
    uint32_t lengthBytes = 0;
    uint32_t swapMode = 0;
    bool index32 = false;
};

/// One draw. Deliberately a value snapshot: the renderer consumes draw calls
/// after the guest has moved on, so anything it reads later from live registers
/// would be the state of a different draw.
struct DrawCall {
    uint32_t opcode = 0;
    uint32_t vizQueryCondition = 0;
    uint32_t drawInitiator = 0;
    uint32_t primitiveType = 0;
    uint32_t sourceSelect = 0;
    uint32_t majorMode = 0;
    uint32_t numIndices = 0;
    bool indexed = false;
    bool majorModeExplicit = false;
    IndexBufferInfo indexBuffer{};
    // State at issue time.
    uint32_t surfaceInfo = 0;
    uint32_t colorInfo = 0;
    uint32_t depthInfo = 0;
    uint32_t windowScissorTl = 0;
    uint32_t windowScissorBr = 0;
    uint32_t vertexShaderAddress = 0;
    uint32_t pixelShaderAddress = 0;
    uint32_t vertexShaderDwords = 0;
    uint32_t pixelShaderDwords = 0;
};

/// Shader bytecode upload. Xenos has two forms: from guest memory and inline.
struct ShaderProgram {
    enum class Stage : uint32_t { kVertex = 0, kPixel = 1 };
    Stage stage = Stage::kVertex;
    uint32_t address = 0;       // guest address (memory form)
    uint32_t dwords = 0;
    bool immediate = false;     // payload words instead of guest memory
    std::vector<uint32_t> words;  // only filled for the immediate form
};

/// Guest memory writes the GPU is asked to perform (PM4_MEM_WRITE). The guest
/// polls this memory, so these are not optional: dropping them hangs the guest.
struct MemoryWrite {
    uint32_t address = 0;
    std::vector<uint32_t> values;
};

/// What one frame asked for. Kept small on purpose: the renderer pulls the draw
/// list, and the counters stay available for diagnostics.
struct FrameSummary {
    uint64_t index = 0;
    uint64_t draws = 0;
    uint64_t drawsDropped = 0;
    uint64_t vertices = 0;
    uint64_t shaderUploads = 0;
    uint64_t memoryWrites = 0;
    uint64_t registerWrites = 0;
    uint64_t constantBlocks = 0;
    uint64_t constantDwords = 0;
};

/// Bounded storage for the per-frame command list. A frame that asks for more
/// than this is a bug (or a corrupt stream), and it must be visible as dropped
/// work, not as a silent allocation.
class RenderState {
public:
    struct Config {
        size_t maxDrawsPerFrame = 16384;
        size_t maxShaderDwords = 4096;   // per upload; longer uploads are truncated and counted
        size_t maxMemoryWritesPerFrame = 4096;
        size_t maxMemoryWriteDwords = 4096;
        size_t maxConstantDwordsPerBlock = 4096;
        size_t maxShaderUploadsPerFrame = 4096;
        size_t maxFrames = 8;
    };

    struct Stats {
        uint64_t registerWrites = 0;
        uint64_t constantBlocks = 0;
        uint64_t constantDwords = 0;
        uint64_t unknownConstantTables = 0;
        uint64_t draws = 0;
        uint64_t drawsDropped = 0;          // queue full
        uint64_t unsupportedSourceSelect = 0;  // immediate indices, invalid
        uint64_t shaderUploads = 0;
        uint64_t shaderUploadsTruncated = 0;
        uint64_t shaderUploadsUnreadable = 0;
        uint64_t memoryWrites = 0;
        uint64_t memoryWriteDwords = 0;
        uint64_t memoryWritesUnsupported = 0;
        uint64_t memoryWritesTruncated = 0;
        uint64_t unsupportedDrawOpcodes = 0;
        uint64_t frames = 0;
        uint64_t bytesOfStateWritten = 0;   // diagnostic: payload dwords applied
    };

    RenderState() = default;
    explicit RenderState(Config config) : config_(config) {}

    /// A register write from any source (Type-0 packet or a constant block).
    /// The caller is responsible for the register file write itself; this class
    /// keeps the shadow state and the counters.
    void OnRegisterWrite(uint32_t index, uint32_t value) noexcept;

    /// SET_CONSTANT: payload[0] is (type << 16) | index, followed by the values.
    void OnConstantBlock(std::span<const uint32_t> payload) noexcept;
    /// SET_CONSTANT2 and SET_SHADER_CONSTANTS: payload[0] is a flat index into the
    /// register space, followed by the values.
    void OnFlatConstantBlock(std::span<const uint32_t> payload) noexcept;
    /// LOAD_ALU_CONSTANT: address, (type << 16) | index, (size_dwords & 0xFFF).
    /// The values live in guest memory and are read by the device, not here.
    void OnConstantBlockFromMemory(uint32_t tableBase, uint32_t index, uint32_t dwords,
                                   std::span<const uint32_t> values) noexcept;

    /// DRAW_INDX / DRAW_INDX_2 / *_BIN. The payload layout is the hardware one:
    /// DRAW_INDX carries a viz query token first, both forms then carry
    /// VGT_DRAW_INITIATOR and, for indexed draws, VGT_DMA_BASE and VGT_DMA_SIZE.
    void OnDraw(uint32_t opcode, std::span<const uint32_t> payload) noexcept;

    /// IM_LOAD: shader_type | address, then start | size_dwords.
    void OnShaderUpload(std::span<const uint32_t> payload) noexcept;
    /// IM_LOAD_IMMEDIATE: shader_type | address, start | size_dwords, then the
    /// instruction words inline in the packet.
    void OnShaderUploadImmediate(std::span<const uint32_t> payload) noexcept;

    /// PM4_MEM_WRITE: address, then the values the GPU must store. The device
    /// performs the store; this class records what was asked for.
    void OnMemoryWrite(std::span<const uint32_t> payload) noexcept;

    /// A swap closes the frame: the draw list is handed to the renderer and the
    /// per-frame counters move into FrameSummary.
    FrameSummary EndFrame() noexcept;

    /// Takes the draws of the current frame and clears the list. The renderer
    /// calls this once per frame; anything not taken is dropped at EndFrame.
    std::vector<DrawCall> TakeDraws();

    const std::vector<DrawCall>& draws() const noexcept { return draws_; }
    const std::vector<ShaderProgram>& shaderUploads() const noexcept { return shaderUploads_; }
    const std::vector<MemoryWrite>& memoryWrites() const noexcept { return memoryWrites_; }
    std::vector<ShaderProgram> TakeShaderUploads();
    std::vector<MemoryWrite> TakeMemoryWrites();

    /// Shadow register value as written, without synthetic reads.
    uint32_t ReadRegister(uint32_t index) const noexcept { return registers_.Raw(index); }
    const RegisterFile& registers() const noexcept { return registers_; }
    RegisterFile& registers() noexcept { return registers_; }

    const Config& config() const noexcept { return config_; }
    const Stats& stats() const noexcept { return stats_; }
    /// Counters of the frame being built. The renderer reads them at swap time,
    /// before EndFrame moves them into lastFrame().
    const FrameSummary& currentFrame() const noexcept { return current_; }
    const FrameSummary& lastFrame() const noexcept { return lastFrame_; }
    /// Frames finished so far, oldest first, bounded by Config::maxFrames.
    const std::vector<FrameSummary>& frames() const noexcept { return frames_; }
    const char* LastDropReason() const noexcept { return dropReason_; }

    /// Register indices the renderer reads on every frame, named so the renderer
    /// does not have to keep its own copy of the map.
    struct DrawTargetState {
        uint32_t surfacePitchPixels = 0;
        uint32_t msaaSamples = 0;
        uint32_t colorBaseTiles = 0;
        uint32_t colorFormat = 0;
        uint32_t depthBaseTiles = 0;
        uint32_t depthFormat = 0;
        uint32_t scissorLeft = 0, scissorTop = 0, scissorRight = 0, scissorBottom = 0;
        uint32_t vertexShaderAddress = 0, pixelShaderAddress = 0;
        bool colorValid = false, depthValid = false, scissorValid = false;
    };
    DrawTargetState Target() const noexcept;
    std::string FormatStats() const;

private:
    void WriteRegister(uint32_t index, uint32_t value) noexcept;
    void PushDraw(DrawCall&& draw) noexcept;
    void CountDrop(const char* reason) noexcept;

    Config config_{};
    RegisterFile registers_;
    std::vector<DrawCall> draws_;
    std::vector<ShaderProgram> shaderUploads_;
    std::vector<MemoryWrite> memoryWrites_;
    std::vector<FrameSummary> frames_;
    FrameSummary current_{};
    FrameSummary lastFrame_{};
    Stats stats_{};
    const char* dropReason_ = "none";
    uint64_t frameIndex_ = 0;
};

} // namespace sonic::rex_host::gpu
