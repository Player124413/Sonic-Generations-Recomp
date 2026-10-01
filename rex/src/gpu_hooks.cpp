#include "gpu_capture.h"
#include "guest_memory.h"
#include "pm4.h"
#ifdef SONIC_REX_NATIVE_RENDERER
#include "native_gpu.h"
#endif
#include <rex/hook.h>
#include <bit>
#include <atomic>
#include <cstdio>
#include <cstdlib>
#include <array>
#include <fstream>
#include <memory>
#include <mutex>
#include <string_view>
#ifndef WIN32_LEAN_AND_MEAN
#define WIN32_LEAN_AND_MEAN
#endif
#ifndef NOMINMAX
#define NOMINMAX
#endif
#include <windows.h>

namespace sonic::rex_host {
namespace {
std::mutex captureMutex;
std::ofstream captureFile;
std::unique_ptr<GpuCaptureWriter> captureWriter;
std::atomic<bool> captureEnabled{false};

// --- Command-stream probe ---------------------------------------------------
// Read-only instrumentation for building our own renderer: VdSwap leaves a swap
// token in the primary ring buffer, so the swap helper's arguments reveal where
// the real PM4 stream lives. Nothing here writes guest memory, and every read is
// bounded, so it is safe to leave enabled while playing.
std::mutex pm4Mutex;
std::atomic<bool> pm4Enabled{false};
std::filesystem::path pm4Directory;
unsigned pm4Dumps = 0;
constexpr unsigned kMaxPm4Dumps = 8;
/// Every swap helper call is logged with its raw arguments before the scan. If
/// the token is not among them -- the reason the first attempt produced no
/// dumps at all -- this file still says what the arguments actually are, which
/// is the only way to find the stream without guessing.
constexpr unsigned kMaxArgumentLogs = 32;
unsigned pm4ArgumentLogs = 0;
constexpr size_t kScanWords = 256;          // 1 KiB per candidate argument
constexpr size_t kRingWindowWords = 2048;   // 8 KiB of stream before the token
constexpr size_t kLoggedPackets = 64;
/// How many "this argument is not the stream" lines are written. Without them a
/// run that finds nothing says nothing, which is what happened on the first
/// attempt.
constexpr unsigned kMaxScanLogs = 32;
unsigned pm4ScanLogs = 0;

/// Counts what the guest actually issues and keeps the first packets readable.
struct ProbeSink final : pm4::Sink {
    std::array<uint64_t, 128> opcodes{};
    std::string logged;
    void OnRegisterWrite(uint32_t index, uint32_t value) override {
        ++opcodes[static_cast<size_t>(0x7F)];
        char line[64];
        std::snprintf(line, sizeof(line), "reg %04X = %08X\n", index, value);
        if (opcodes[static_cast<size_t>(0x7F)] <= kLoggedPackets) logged += line;
    }
    void OnPacket(const pm4::Header& header, pm4::Action action,
                  std::span<const uint32_t> payload) override {
        if (action == pm4::Action::Present && payload.size() >= 4) {
            char line[96];
            std::snprintf(line, sizeof(line), "swap frontbuffer=%08X %ux%u\n",
                          payload[1], payload[2], payload[3]);
            logged += line;
            return;
        }
        if (header.type != pm4::PacketType::kType3) return;
        const size_t slot = header.opcode & 0x7F;
        ++opcodes[slot];
        if (opcodes[slot] <= kLoggedPackets) {
            char line[96];
            std::snprintf(line, sizeof(line), "type3 %s count=%u predicate=%s\n",
                          pm4::OpcodeName(header.opcode), header.count,
                          header.predicate ? "yes" : "no");
            logged += line;
        }
    }
    std::string Summary() const {
        std::string text;
        for (uint32_t slot = 0; slot < opcodes.size(); ++slot) {
            if (!opcodes[slot]) continue;
            char line[72];
            std::snprintf(line, sizeof(line), "opcode %02X %s = %llu\n", slot,
                          slot == 0x7F ? "type0/1/2" : pm4::OpcodeName(slot),
                          (unsigned long long)opcodes[slot]);
            text += line;
        }
        return text;
    }
};

void ProbeSwapCommandStream(const CaptureArguments& args, uint8_t* base) noexcept {
    if (!pm4Enabled.load(std::memory_order_acquire) || !base) return;
    const auto read = [base](uint32_t address, std::span<uint8_t> destination) {
        return ReadGuestMemory(base, address, destination);
    };
    {
        // Arguments first, unconditionally: a swap call we cannot decode is
        // still evidence, and a silent probe was the previous bug.
        std::lock_guard lock(pm4Mutex);
        if (pm4ArgumentLogs < kMaxArgumentLogs) {
            std::string line = "swap";
            for (size_t index = 0; index < args.size(); ++index) {
                char argument[24];
                std::snprintf(argument, sizeof(argument), " r%zu=%08X", index + 3,
                              uint32_t(args[index]));
                line += argument;
            }
            line += "\n";
            std::fputs(("[pm4] " + line).c_str(), stderr);
            std::error_code error;
            std::filesystem::create_directories(pm4Directory, error);
            std::ofstream log(pm4Directory / "arguments.txt", std::ios::app);
            log << line;
            ++pm4ArgumentLogs;
            if (pm4ArgumentLogs == kMaxArgumentLogs) {
                std::fputs("[pm4] argument log cap reached\n", stderr);
                std::ofstream tail(pm4Directory / "arguments.txt", std::ios::app);
                tail << "cap reached\n";
            }
        }
    }
    for (size_t index = 0; index < args.size(); ++index) {
        const uint32_t candidate = uint32_t(args[index]);
        if (!candidate || (candidate & 3u)) continue;
        const auto found = pm4::ProbeSwapToken(candidate, kScanWords, read);
        if (!found.found) {
            // Say what the scan saw. A lead that dead-ends silently costs a
            // whole test run; a line in the log costs nothing.
            std::lock_guard lock(pm4Mutex);
            if (pm4ScanLogs < kMaxScanLogs) {
                ++pm4ScanLogs;
                char line[160];
                std::snprintf(line, sizeof(line),
                              "[pm4] arg%zu %08X: %u dwords readable, no swap token\n", index,
                              candidate, found.wordsRead);
                std::fputs(line, stderr);
                std::error_code error;
                std::filesystem::create_directories(pm4Directory, error);
                std::ofstream log(pm4Directory / "arguments.txt", std::ios::app);
                log << line;
            }
            continue;
        }
        // Found: the dump path below decides what to do with it.
        const uint32_t tokenAddress = candidate + found.signatureIndex * 4u;
        const size_t windowWords = kRingWindowWords < size_t(tokenAddress / 4u)
                                       ? kRingWindowWords : size_t(tokenAddress / 4u);
        const uint32_t start = tokenAddress - uint32_t(windowWords * 4);
        std::vector<uint8_t> window(windowWords * 4 + 16);
        // Chunked: the window usually runs past what the guest has committed,
        // and a partial window still decodes into most of the frame.
        const size_t bytesRead = ReadGuestMemoryChunked(base, start, window);
        const bool complete = bytesRead == window.size();
        std::lock_guard lock(pm4Mutex);
        char line[176];
        std::snprintf(line, sizeof(line),
                      "[pm4] swap token at arg%zu %08X: frontbuffer=%08X %ux%u window=%s\n",
                      index, candidate, found.token.frontbufferAddress, found.token.width,
                      found.token.height, complete ? "captured" : "partial");
        std::fputs(line, stderr);
        if (pm4Dumps >= kMaxPm4Dumps) {
            if (pm4Dumps == kMaxPm4Dumps) {
                ++pm4Dumps;
                std::fputs("[pm4] dump cap reached; further swaps are only counted\n", stderr);
            }
            return;
        }
        std::error_code error;
        std::filesystem::create_directories(pm4Directory, error);
        char name[32];
        std::snprintf(name, sizeof(name), "swap-%03u.bin", pm4Dumps);
        const auto path = pm4Directory / name;
        std::ofstream file(path, std::ios::binary | std::ios::trunc);
        if (!file) {
            std::fputs("[pm4] cannot write the command-stream dump\n", stderr);
            return;
        }
        file.write(reinterpret_cast<const char*>(window.data()), std::streamsize(window.size()));
        file.flush();
        ProbeSink sink;
        if (complete) {
            // Decoding the captured window with our own decoder is the whole
            // point: it tells us which opcodes our command processor must grow.
            pm4::BigEndianDwordSource source(window);
            pm4::Limits limits;
            limits.maxPayloadWords = 4096;
            const pm4::Stats stats = pm4::Walk(source, sink, limits);
            std::ofstream report(std::filesystem::path(path).replace_extension(".txt"),
                                 std::ios::trunc);
            report << "argument index: " << index << "\n"
                   << "token address: " << tokenAddress << "\n"
                   << stats.Format() << sink.Summary() << "\nfirst packets:\n" << sink.logged;
        }
        ++pm4Dumps;
        return;
    }
}
}
void InitializeGpuCapture(const std::filesystem::path& cacheDirectory) {
    // Enabled by SONIC_REX_PM4_DUMP=1, or by dropping an "enable" file into
    // assets/rex-cache/pm4 for people who would rather not touch their
    // environment. Both paths land in the same read-only probe.
    const char* dump = std::getenv("SONIC_REX_PM4_DUMP");
    const bool marker = std::filesystem::exists(cacheDirectory / "pm4" / "enable");
    if (dump && *dump && std::string_view(dump) != "1") {
        std::fputs("[pm4] SONIC_REX_PM4_DUMP must be 1; the probe stays off\n", stderr);
    } else if ((dump && *dump) || marker) {
        pm4Directory = cacheDirectory / "pm4";
        std::error_code error;
        std::filesystem::create_directories(pm4Directory, error);
        pm4Enabled.store(true, std::memory_order_release);
        char line[512];
        std::snprintf(line, sizeof(line),
                      "[pm4] Command-stream probe enabled; dumps go to %s "
                      "(enable=env or file)\n",
                      pm4Directory.string().c_str());
        std::fputs(line, stderr);
    }
    const char* value = std::getenv("SONIC_REX_GPU_CAPTURE");
    if (!value || std::string_view(value) != "1") return;
    std::lock_guard lock(captureMutex);
    if (captureWriter) return;
    std::filesystem::create_directories(cacheDirectory);
    captureFile.open(cacheDirectory / "gpu-capture.bin", std::ios::binary | std::ios::trunc);
    if (!captureFile) throw std::runtime_error("Cannot open assets/rex-cache/gpu-capture.bin");
    captureWriter = std::make_unique<GpuCaptureWriter>(captureFile);
    captureEnabled.store(true, std::memory_order_release);
}
void CaptureGpuEntry(GpuEntry entry, const CaptureArguments& args, uint8_t* base) noexcept {
    if (!captureEnabled.load(std::memory_order_acquire)) return;
    try {
        std::lock_guard lock(captureMutex);
        if (!captureEnabled.load(std::memory_order_relaxed)) return;
        const auto reader = [base](uint32_t address, std::span<uint8_t> destination) {
            return ReadGuestMemory(base, address, destination);
        };
        if (!captureWriter->Record(entry, args, reader) ||
            captureWriter->Count() == GpuCaptureWriter::MaxRecords)
            captureEnabled.store(false, std::memory_order_release);
    } catch (...) {
        captureEnabled.store(false, std::memory_order_release);
        std::fputs("[gpu-capture] Capture failed; reference GPU remains active.\n", stderr);
    }
}
}

namespace sonic::rex_host {
void ObserveGpuEntry(GpuEntry entry, const CaptureArguments& args, uint8_t* base) noexcept {
    CaptureGpuEntry(entry, args, base);
#ifdef SONIC_REX_NATIVE_RENDERER
    CaptureNativeGpu(entry, args, base);
#endif
}
void ObserveGpuEntryAfter(GpuEntry entry, const CaptureArguments& args, uint8_t* base) noexcept {
    // The kernel writes the swap token while the swap call runs, so it only
    // exists afterwards. Every other entry skips this with a single branch.
    if (entry == GpuEntry::SwapHelper) ProbeSwapCommandStream(args, base);
}
}

// Strong public hooks override only generated weak aliases. Never replace the
// __imp__ bodies or suppress their GPU/fence/ring-buffer side effects.
#define SONIC_GPU_ENTRY(name, symbol) \
    REX_EXTERN(__imp__##symbol); \
    REX_HOOK_RAW(symbol) { \
        const sonic::rex_host::CaptureArguments args{ \
            ctx.r3.u64, ctx.r4.u64, ctx.r5.u64, ctx.r6.u64, ctx.r7.u64, \
            ctx.r8.u64, ctx.r9.u64, ctx.r10.u64, std::bit_cast<uint64_t>(ctx.f1.f64)}; \
        sonic::rex_host::ObserveGpuEntry(sonic::rex_host::GpuEntry::name, args, base); \
        __imp__##symbol(ctx, base); \
        sonic::rex_host::ObserveGpuEntryAfter(sonic::rex_host::GpuEntry::name, args, base); \
    }
#include "../../SonicGenerationsRecomp/gpu/guest_entries.inc"
#undef SONIC_GPU_ENTRY
