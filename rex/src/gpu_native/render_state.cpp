#include "render_state.h"

#include <algorithm>
#include <cstdio>

namespace sonic::rex_host::gpu {
namespace {

// Register indices the renderer reads. Xenos register map facts; the same
// indices appear in the hardware register table.
constexpr uint32_t kRbSurfaceInfo = 0x2000;
constexpr uint32_t kRbColorInfo = 0x2001;
constexpr uint32_t kRbDepthInfo = 0x2002;
constexpr uint32_t kPaScWindowScissorTl = 0x2081;
constexpr uint32_t kPaScWindowScissorBr = 0x2082;
constexpr uint32_t kSqPsProgram = 0x21F6;
constexpr uint32_t kSqVsProgram = 0x21F7;

constexpr uint32_t kConstantTableAluBase = 0x4000;
constexpr uint32_t kConstantTableFetchBase = 0x4800;
constexpr uint32_t kConstantTableBoolBase = 0x4900;
constexpr uint32_t kConstantTableLoopBase = 0x4908;
constexpr uint32_t kConstantTableRegisterBase = 0x2000;

// VGT_DRAW_INITIATOR, bit for bit.
constexpr uint32_t kPrimitiveTypeMask = 0x3F;
constexpr uint32_t kSourceSelectShift = 6;
constexpr uint32_t kMajorModeShift = 8;
constexpr uint32_t kIndexSizeBit = 0x800;      // bit 11: 1 = 32-bit indices
constexpr uint32_t kNumIndicesShift = 16;

// VGT_DMA_SIZE.
constexpr uint32_t kDmaSizeWordMask = 0xFFFFFF;
constexpr uint32_t kDmaSwapModeShift = 30;

// Source select values.
constexpr uint32_t kSourceDma = 0;
constexpr uint32_t kSourceImmediate = 1;
constexpr uint32_t kSourceAutoIndex = 2;

// Primitive types from 0x10 on use the explicit major mode regardless of the
// mode field (Xenos hardware fact).
constexpr uint32_t kExplicitMajorModeForceStart = 0x10;

uint32_t Bits(uint32_t value, uint32_t shift, uint32_t width) noexcept {
    return (value >> shift) & ((uint32_t(1) << width) - 1);
}

} // namespace

uint32_t ConstantTableBase(ConstantTable table) noexcept {
    switch (table) {
    case ConstantTable::kAlu: return kConstantTableAluBase;
    case ConstantTable::kFetch: return kConstantTableFetchBase;
    case ConstantTable::kBool: return kConstantTableBoolBase;
    case ConstantTable::kLoop: return kConstantTableLoopBase;
    case ConstantTable::kRegisters: return kConstantTableRegisterBase;
    case ConstantTable::kUnknown: break;
    }
    return 0;
}

ConstantTable ConstantTableFromType(uint32_t type) noexcept {
    switch (type) {
    case 0: return ConstantTable::kAlu;
    case 1: return ConstantTable::kFetch;
    case 2: return ConstantTable::kBool;
    case 3: return ConstantTable::kLoop;
    case 4: return ConstantTable::kRegisters;
    default: return ConstantTable::kUnknown;
    }
}

void RenderState::WriteRegister(uint32_t index, uint32_t value) noexcept {
    registers_.Write(index, value, RegisterFile::WriteOrigin::kPacket);
    // Every source counts: a constant block is also registers being written, and
    // reporting only Type-0 writes would under-report the state a frame carries.
    ++stats_.registerWrites;
    ++current_.registerWrites;
    stats_.bytesOfStateWritten += 4;
}

void RenderState::OnRegisterWrite(uint32_t index, uint32_t value) noexcept {
    WriteRegister(index, value);
}

void RenderState::OnConstantBlock(std::span<const uint32_t> payload) noexcept {
    if (payload.empty()) return;
    const uint32_t offsetType = payload[0];
    const uint32_t index = offsetType & 0x7FF;
    const ConstantTable table = ConstantTableFromType((offsetType >> 16) & 0xFF);
    const uint32_t base = ConstantTableBase(table);
    if (base == 0) {
        // Never place an unknown block at a plausible address: that would write
        // shader constants over render state and look like a corrupt frame.
        ++stats_.unknownConstantTables;
        dropReason_ = "unknown constant table";
        return;
    }
    const size_t dwords = std::min(payload.size() - 1, config_.maxConstantDwordsPerBlock);
    ++stats_.constantBlocks;
    ++current_.constantBlocks;
    stats_.constantDwords += dwords;
    current_.constantDwords += dwords;
    for (size_t i = 0; i < dwords; ++i) WriteRegister(base + index + uint32_t(i), payload[1 + i]);
}

void RenderState::OnFlatConstantBlock(std::span<const uint32_t> payload) noexcept {
    if (payload.empty()) return;
    const uint32_t index = payload[0] & 0xFFFF;
    const size_t dwords = std::min(payload.size() - 1, config_.maxConstantDwordsPerBlock);
    ++stats_.constantBlocks;
    ++current_.constantBlocks;
    stats_.constantDwords += dwords;
    current_.constantDwords += dwords;
    for (size_t i = 0; i < dwords; ++i) WriteRegister(index + uint32_t(i), payload[1 + i]);
}

void RenderState::OnConstantBlockFromMemory(uint32_t tableBase, uint32_t index, uint32_t dwords,
                                            std::span<const uint32_t> values) noexcept {
    if (tableBase == 0 || values.empty()) {
        ++stats_.unknownConstantTables;
        return;
    }
    const size_t count = std::min({size_t(dwords), values.size(), config_.maxConstantDwordsPerBlock});
    ++stats_.constantBlocks;
    ++current_.constantBlocks;
    stats_.constantDwords += count;
    current_.constantDwords += count;
    for (size_t i = 0; i < count; ++i) WriteRegister(tableBase + index + uint32_t(i), values[i]);
}

void RenderState::CountDrop(const char* reason) noexcept {
    ++stats_.drawsDropped;
    ++current_.drawsDropped;
    dropReason_ = reason;
}

void RenderState::PushDraw(DrawCall&& draw) noexcept {
    if (draws_.size() >= config_.maxDrawsPerFrame) {
        CountDrop("draw queue full");
        return;
    }
    draws_.push_back(std::move(draw));
}

void RenderState::OnDraw(uint32_t opcode, std::span<const uint32_t> payload) noexcept {
    // DRAW_INDX carries a viz query token before VGT_DRAW_INITIATOR; the other
    // form does not. *_BIN opcodes are deliberately not decoded: their payload
    // layout is not verified here, and guessing it would produce draws with
    // invented geometry.
    const bool hasVizToken = opcode == 0x22;  // DRAW_INDX
    const bool known = hasVizToken || opcode == 0x36;  // or DRAW_INDX_2
    if (!known) {
        ++stats_.unsupportedDrawOpcodes;
        dropReason_ = "unverified draw opcode";
        return;
    }
    DrawCall draw;
    draw.opcode = opcode;
    size_t next = 0;
    if (hasVizToken) {
        if (payload.size() < 2) {
            CountDrop("draw packet too small for the viz token and initiator");
            return;
        }
        draw.vizQueryCondition = payload[0];
        next = 1;
    } else if (payload.empty()) {
        CountDrop("draw packet too small for VGT_DRAW_INITIATOR");
        return;
    }
    draw.drawInitiator = payload[next++];
    draw.primitiveType = draw.drawInitiator & kPrimitiveTypeMask;
    draw.sourceSelect = Bits(draw.drawInitiator, kSourceSelectShift, 2);
    draw.majorMode = Bits(draw.drawInitiator, kMajorModeShift, 2);
    draw.numIndices = draw.drawInitiator >> kNumIndicesShift;
    draw.majorModeExplicit = draw.majorMode != 0 || draw.primitiveType >= kExplicitMajorModeForceStart;

    switch (draw.sourceSelect) {
    case kSourceDma: {
        // Indexed draw: VGT_DMA_BASE then VGT_DMA_SIZE follow the initiator.
        if (payload.size() < next + 2) {
            CountDrop("indexed draw packet too small for the index buffer");
            return;
        }
        const uint32_t base = payload[next++];
        const uint32_t size = payload[next++];
        draw.indexed = true;
        draw.indexBuffer.index32 = (draw.drawInitiator & kIndexSizeBit) != 0;
        draw.indexBuffer.guestBase = base & ~(draw.indexBuffer.index32 ? 3u : 1u);
        draw.indexBuffer.numWords = size & kDmaSizeWordMask;
        draw.indexBuffer.swapMode = Bits(size, kDmaSwapModeShift, 2);
        draw.indexBuffer.lengthBytes = draw.indexBuffer.numWords * (draw.indexBuffer.index32 ? 4u : 2u);
    } break;
    case kSourceAutoIndex:
        // Auto draw: the vertex shader gets sequential indices; no buffer.
        draw.indexed = false;
        break;
    default:
        // kImmediate needs the immediate index data decoded from the packet and
        // an invalid source cannot be executed at all. Both are counted, because
        // a dropped draw that nobody counts looks like geometry that the game
        // simply does not have.
        ++stats_.unsupportedSourceSelect;
        dropReason_ = draw.sourceSelect == kSourceImmediate ? "immediate indices"
                                                            : "invalid source select";
        return;
    }

    const DrawTargetState target = Target();
    draw.surfaceInfo = ReadRegister(kRbSurfaceInfo);
    draw.colorInfo = ReadRegister(kRbColorInfo);
    draw.depthInfo = ReadRegister(kRbDepthInfo);
    draw.windowScissorTl = ReadRegister(kPaScWindowScissorTl);
    draw.windowScissorBr = ReadRegister(kPaScWindowScissorBr);
    draw.vertexShaderAddress = target.vertexShaderAddress;
    draw.pixelShaderAddress = target.pixelShaderAddress;
    ++stats_.draws;
    ++current_.draws;
    current_.vertices += draw.numIndices;
    PushDraw(std::move(draw));
}

void RenderState::OnShaderUpload(std::span<const uint32_t> payload) noexcept {
    if (payload.size() < 2) {
        ++stats_.shaderUploadsUnreadable;
        return;
    }
    const uint32_t addressType = payload[0];
    ShaderProgram program;
    program.stage = (addressType & 1) ? ShaderProgram::Stage::kPixel
                                      : ShaderProgram::Stage::kVertex;
    program.address = addressType & ~uint32_t(3);
    const uint32_t startSize = payload[1];
    const uint32_t start = startSize >> 16;
    program.dwords = startSize & 0xFFFF;
    if (start != 0) {
        // The hardware requires start == 0; a nonzero start means we do not know
        // which part of the program is being loaded.
        ++stats_.shaderUploadsUnreadable;
        dropReason_ = "shader upload with a nonzero start";
        return;
    }
    if (program.dwords > config_.maxShaderDwords) {
        program.dwords = uint32_t(config_.maxShaderDwords);
        ++stats_.shaderUploadsTruncated;
    }
    if (shaderUploads_.size() >= config_.maxShaderUploadsPerFrame) {
        CountDrop("shader upload queue full");
        return;
    }
    ++stats_.shaderUploads;
    ++current_.shaderUploads;
    if (program.stage == ShaderProgram::Stage::kVertex) {
        WriteRegister(kSqVsProgram, program.address);
    } else {
        WriteRegister(kSqPsProgram, program.address);
    }
    shaderUploads_.push_back(std::move(program));
}

void RenderState::OnShaderUploadImmediate(std::span<const uint32_t> payload) noexcept {
    if (payload.size() < 2) {
        ++stats_.shaderUploadsUnreadable;
        return;
    }
    const uint32_t addressType = payload[0];
    ShaderProgram program;
    program.stage = (addressType & 1) ? ShaderProgram::Stage::kPixel
                                      : ShaderProgram::Stage::kVertex;
    program.address = addressType & ~uint32_t(3);
    program.immediate = true;
    const uint32_t startSize = payload[1];
    if ((startSize >> 16) != 0) {
        ++stats_.shaderUploadsUnreadable;
        dropReason_ = "immediate shader upload with a nonzero start";
        return;
    }
    const uint32_t declared = startSize & 0xFFFF;
    const size_t available = payload.size() - 2;
    const size_t count = std::min({size_t(declared), available, config_.maxShaderDwords});
    if (count < declared) ++stats_.shaderUploadsTruncated;
    program.dwords = uint32_t(count);
    program.words.assign(payload.begin() + 2, payload.begin() + 2 + count);
    if (shaderUploads_.size() >= config_.maxShaderUploadsPerFrame) {
        CountDrop("shader upload queue full");
        return;
    }
    ++stats_.shaderUploads;
    ++current_.shaderUploads;
    // The renderer keys on program addresses, so every upload form publishes the
    // address it was loaded at, not only the from-memory form.
    if (program.stage == ShaderProgram::Stage::kVertex) {
        WriteRegister(kSqVsProgram, program.address);
    } else {
        WriteRegister(kSqPsProgram, program.address);
    }
    shaderUploads_.push_back(std::move(program));
}

void RenderState::OnMemoryWrite(std::span<const uint32_t> payload) noexcept {
    if (payload.size() < 2) {
        ++stats_.memoryWritesUnsupported;
        dropReason_ = "memory write without data";
        return;
    }
    if (memoryWrites_.size() >= config_.maxMemoryWritesPerFrame) {
        CountDrop("memory write queue full");
        return;
    }
    MemoryWrite write;
    write.address = payload[0];
    const size_t count = std::min(payload.size() - 1, config_.maxMemoryWriteDwords);
    if (count < payload.size() - 1) {
        ++stats_.memoryWritesTruncated;
        dropReason_ = "memory write longer than the configured cap";
    }
    write.values.assign(payload.begin() + 1, payload.begin() + 1 + count);
    stats_.memoryWrites += 1;
    stats_.memoryWriteDwords += count;
    ++current_.memoryWrites;
    memoryWrites_.push_back(std::move(write));
}

FrameSummary RenderState::EndFrame() noexcept {
    lastFrame_ = current_;
    lastFrame_.index = frameIndex_++;
    frames_.push_back(lastFrame_);
    if (frames_.size() > config_.maxFrames) frames_.erase(frames_.begin());
    ++stats_.frames;
    if (!draws_.empty() && dropReason_[0] == '\0') dropReason_ = "draws were never taken by a renderer";
    if (!draws_.empty()) {
        // Not taken means they never reached a renderer. Counted as dropped work
        // rather than forgotten, so the gap is visible in the report.
        stats_.drawsDropped += draws_.size();
    }
    draws_.clear();
    shaderUploads_.clear();
    memoryWrites_.clear();
    current_ = FrameSummary{};
    return lastFrame_;
}

std::vector<DrawCall> RenderState::TakeDraws() {
    std::vector<DrawCall> taken;
    taken.swap(draws_);
    return taken;
}

std::vector<ShaderProgram> RenderState::TakeShaderUploads() {
    std::vector<ShaderProgram> taken;
    taken.swap(shaderUploads_);
    return taken;
}

std::vector<MemoryWrite> RenderState::TakeMemoryWrites() {
    std::vector<MemoryWrite> taken;
    taken.swap(memoryWrites_);
    return taken;
}

RenderState::DrawTargetState RenderState::Target() const noexcept {
    DrawTargetState state;
    const uint32_t surfaceInfo = ReadRegister(kRbSurfaceInfo);
    state.surfacePitchPixels = surfaceInfo & 0x3FFF;
    state.msaaSamples = Bits(surfaceInfo, 16, 2);
    const uint32_t colorInfo = ReadRegister(kRbColorInfo);
    state.colorBaseTiles = (colorInfo & 0x7FF) | ((colorInfo >> 11) & 1) << 11;
    state.colorFormat = Bits(colorInfo, 16, 4);
    state.colorValid = state.colorBaseTiles != 0;
    const uint32_t depthInfo = ReadRegister(kRbDepthInfo);
    state.depthBaseTiles = (depthInfo & 0x7FF) | ((depthInfo >> 11) & 1) << 11;
    state.depthFormat = Bits(depthInfo, 16, 1);
    state.depthValid = state.depthBaseTiles != 0;
    const uint32_t tl = ReadRegister(kPaScWindowScissorTl);
    const uint32_t br = ReadRegister(kPaScWindowScissorBr);
    state.scissorLeft = tl & 0x3FFF;
    state.scissorTop = Bits(tl, 16, 14);
    state.scissorRight = br & 0x3FFF;
    state.scissorBottom = Bits(br, 16, 14);
    // A scissor with no area is "not set": the guest never wrote it, and 0x0 is
    // what an untouched register reads as. The renderer must not clip everything
    // away because of a register nobody wrote.
    state.scissorValid = state.scissorRight > state.scissorLeft &&
                         state.scissorBottom > state.scissorTop;
    state.vertexShaderAddress = ReadRegister(kSqVsProgram);
    state.pixelShaderAddress = ReadRegister(kSqPsProgram);
    return state;
}

std::string RenderState::FormatStats() const {
    char line[512];
    std::snprintf(line, sizeof(line),
                  "state: writes=%llu blocks=%llu dwords=%llu unknown_tables=%llu "
                  "draws=%llu dropped=%llu no_source=%llu shaders=%llu mem_writes=%llu "
                  "frames=%llu last_drop=%s",
                  static_cast<unsigned long long>(stats_.registerWrites),
                  static_cast<unsigned long long>(stats_.constantBlocks),
                  static_cast<unsigned long long>(stats_.constantDwords),
                  static_cast<unsigned long long>(stats_.unknownConstantTables),
                  static_cast<unsigned long long>(stats_.draws),
                  static_cast<unsigned long long>(stats_.drawsDropped),
                  static_cast<unsigned long long>(stats_.unsupportedSourceSelect),
                  static_cast<unsigned long long>(stats_.shaderUploads),
                  static_cast<unsigned long long>(stats_.memoryWrites),
                  static_cast<unsigned long long>(stats_.frames), dropReason_);
    return std::string(line);
}

} // namespace sonic::rex_host::gpu
