#pragma once
#include <array>
#include <algorithm>
#include <cstdint>
#include <span>
#include <stdexcept>
#include <string>
#include "xma_stream.h"

namespace xma {
// Register layout researched by Xenia (BSD), src/xenia/apu/xma_register_table.inc
// and xma_context.h. Guest contexts are BE; MMIO register words are LE.
class Device {
public:
    static constexpr uint32_t ContextCount = 320, ContextSize = 64;
    static constexpr uint32_t ContextBytes = ContextCount * ContextSize;
    void SetMemory(Stream::Memory translator) { translate = std::move(translator); }
    void SetDecoderForTests(Stream::DecodeFrame decode) { testDecoder = std::move(decode); }
    const std::string& LastError(uint32_t id) const { return errors.at(id); }
    bool HasIncompleteFrame(uint32_t id) const {
        const auto& stream = streams.at(id);
        return stream && stream->HasIncompleteFrame();
    }
    void Init(uint32_t guestAddress, std::span<uint8_t> contextMemory) {
        if (!guestAddress || (guestAddress & 255) || contextMemory.size() != ContextBytes ||
            uint64_t(guestAddress) + ContextBytes > (uint64_t(1) << 32))
            throw std::invalid_argument("XMA context array must be 256-byte aligned and contain 320 contexts");
        address = guestAddress;
        memory = contextMemory;
        std::fill(memory.begin(), memory.end(), 0);
        allocated.fill(false);
        for (auto& stream : streams) stream.reset();
        for (auto& error : errors) error.clear();
        registers.fill(0);
        registers[0x600] = guestAddress;
        registers[0x607] = 1;
    }
    uint32_t Allocate() {
        if (memory.empty()) return 0;
        for (uint32_t i = 0; i < ContextCount; ++i) {
            if (!allocated[i]) {
                allocated[i] = true;
                streams[i] = std::make_unique<Stream>(testDecoder);
                errors[i].clear();
                std::fill_n(memory.data() + i * ContextSize, ContextSize, 0);
                return address + i * ContextSize;
            }
        }
        return 0;
    }
    bool Release(uint32_t ptr) {
        if (ptr < address || uint64_t(ptr) >= uint64_t(address) + ContextBytes ||
            ((ptr - address) % ContextSize)) return false;
        uint32_t id = (ptr - address) / ContextSize;
        if (!allocated[id]) return false;
        allocated[id] = false;
        streams[id].reset();
        errors[id].clear();
        std::fill_n(memory.data() + id * ContextSize, ContextSize, 0);
        return true;
    }
    uint32_t Read(uint32_t offset) {
        CheckOffset(offset);
        const uint32_t reg = offset / 4;
        if (reg == 0x606) {
            registers[reg] = registers[0x607];
            registers[0x607] = (registers[0x607] + 1) % ContextCount;
        }
        return registers[reg];
    }
    void Write(uint32_t offset, uint32_t value) {
        CheckOffset(offset);
        uint32_t reg = offset / 4;
        if (reg == 0x600 && value != address)
            throw std::runtime_error("Relocating XMA context array is unsupported");
        if (reg == 0x606 || reg == 0x607) return; // status, not guest-owned
        registers[reg] = value;
        if (reg >= 0x650 && reg < 0x65A) {
            for (uint32_t bit = 0; bit < 32; ++bit) {
                uint32_t id = (reg - 0x650) * 32 + bit;
                if ((value & (uint32_t(1) << bit)) && allocated[id]) {
                    if (!errors[id].empty()) continue; // clear/release resets failure
                    try {
                        streams[id]->Work(memory.subspan(id * ContextSize, ContextSize), translate);
                    } catch (const std::exception& error) {
                        // Keep errors in context status, not across guest C ABI.
                        errors[id] = error.what();
                        SetWord(id, 2, Word(id, 2) | (1u << 26));
                        SetWord(id, 1, Word(id, 1) & ~(1u << 31));
                    }
                }
            }
        } else if (reg >= 0x6A0 && reg < 0x6AA) {
            for (uint32_t bit = 0; bit < 32; ++bit) {
                uint32_t id = (reg - 0x6A0) * 32 + bit;
                if ((value & (uint32_t(1) << bit)) && allocated[id]) {
                    streams[id]->Reset();
                    errors[id].clear();
                    SetWord(id, 2, Word(id, 2) & 0x03FFFFFF);
                    SetWord(id, 0, Word(id, 0) & ~((3u << 20) | (31u << 27)));
                    SetWord(id, 1, Word(id, 1) & ~(1u << 31));
                    SetWord(id, 9, Word(id, 9) & ~31u);
                }
            }
        }
        // Kicks complete synchronously under the runtime mutex; lock groups
        // (0x690..0x699) are thus already quiescent when this function returns.
    }
private:
    void CheckOffset(uint32_t offset) const {
        if ((offset & 3) || offset >= 0x10000)
            throw std::out_of_range("Invalid XMA register offset");
    }
    uint32_t Word(uint32_t id, uint32_t index) const {
        const auto* p = memory.data() + id * ContextSize + index * 4;
        return uint32_t(p[0]) << 24 | uint32_t(p[1]) << 16 | uint32_t(p[2]) << 8 | p[3];
    }
    void SetWord(uint32_t id, uint32_t index, uint32_t value) {
        auto* p = memory.data() + id * ContextSize + index * 4;
        p[0] = uint8_t(value >> 24); p[1] = uint8_t(value >> 16);
        p[2] = uint8_t(value >> 8); p[3] = uint8_t(value);
    }
    Stream::Memory translate;
    Stream::DecodeFrame testDecoder;
    std::array<std::unique_ptr<Stream>, ContextCount> streams;
    std::array<std::string, ContextCount> errors;
    uint32_t address = 0;
    std::span<uint8_t> memory;
    std::array<bool, ContextCount> allocated{};
    std::array<uint32_t, 0x4000> registers{};
};
}
