// Contract tests for our own GPU device: register file, ring buffer, swap token,
// interrupt dispatch and read-pointer writeback. No SDK code is involved, which
// is exactly what makes this the replacement path rather than a wrapper.
#include "gpu_native/command_processor.h"

#include <cstdio>
#include <cstring>
#include <span>
#include <vector>

using namespace sonic::rex_host;
using namespace sonic::rex_host::gpu;

namespace {
int failures = 0;
#define CHECK(condition)                                                     \
    do {                                                                     \
        if (!(condition)) {                                                  \
            std::printf("FAIL %s:%d: %s\n", __FILE__, __LINE__, #condition); \
            ++failures;                                                      \
        }                                                                    \
    } while (0)

/// Guest memory as a byte array. Reads and writes use guest byte order, so a
/// mistake in the byte order shows up as a wrong register value or a missing
/// swap rather than as a subtly wrong picture.
class TestMemory final : public GuestMemory {
public:
    explicit TestMemory(size_t size) : bytes_(size, 0) {}
    bool Read(uint32_t address, std::span<uint8_t> destination) override {
        if (uint64_t(address) + destination.size() > bytes_.size()) return false;
        std::memcpy(destination.data(), bytes_.data() + address, destination.size());
        return true;
    }
    bool Write32(uint32_t address, uint32_t value) override {
        if (uint64_t(address) + 4 > bytes_.size()) return false;
        Store(address, value);
        return true;
    }
    void Store(uint32_t address, uint32_t value) {
        bytes_[address] = uint8_t(value >> 24);
        bytes_[address + 1] = uint8_t(value >> 16);
        bytes_[address + 2] = uint8_t(value >> 8);
        bytes_[address + 3] = uint8_t(value);
    }
    uint32_t Load(uint32_t address) const {
        return (uint32_t(bytes_[address]) << 24) | (uint32_t(bytes_[address + 1]) << 16) |
               (uint32_t(bytes_[address + 2]) << 8) | uint32_t(bytes_[address + 3]);
    }
    void WriteStream(uint32_t address, const std::vector<uint32_t>& words) {
        for (size_t i = 0; i < words.size(); ++i) Store(address + uint32_t(i * 4), words[i]);
    }
    size_t bytes() const { return bytes_.size(); }

private:
    std::vector<uint8_t> bytes_;
};

struct RecordingPresenter final : SwapPresenter {
    uint32_t frames = 0, lastAddress = 0, lastWidth = 0, lastHeight = 0;
    void OnSwap(uint32_t frontbufferAddress, uint32_t width, uint32_t height) override {
        ++frames;
        lastAddress = frontbufferAddress;
        lastWidth = width;
        lastHeight = height;
    }
};

struct RecordingInterrupts final : InterruptDispatcher {
    std::vector<std::pair<uint32_t, uint32_t>> dispatched;
    void DispatchInterrupt(uint32_t source, uint32_t cpu) override {
        dispatched.emplace_back(source, cpu);
    }
    bool Saw(uint32_t source, uint32_t cpu) const {
        for (const auto& entry : dispatched)
            if (entry.first == source && entry.second == cpu) return true;
        return false;
    }
};

std::vector<uint32_t> SwapTokenStream(uint32_t frontbuffer, uint32_t width, uint32_t height) {
    std::vector<uint32_t> words{pm4::MakePacketType0(0x0480, 6), 0, 0, 0, 0, 0, 0,
                                pm4::MakePacketType3(0x64, 4), pm4::kSwapSignature, frontbuffer,
                                width, height};
    while (words.size() < 64) words.push_back(pm4::MakePacketType2());
    return words;
}

/// Everything a command processor needs, wired to a fake guest.
struct Device {
    explicit Device(size_t memorySize = 1u << 20)
        : memory(memorySize), processor() {
        processor.SetMemory(&memory);
        processor.SetPresenter(&presenter);
        processor.SetInterrupts(&interrupts);
        processor.registers().SetVideoMode({1280, 720, 60});
    }
    TestMemory memory;
    RecordingPresenter presenter;
    RecordingInterrupts interrupts;
    CommandProcessor processor;

    /// Guest-side write into the ring, wrapping exactly like the hardware ring.
    void WriteRingDword(uint32_t dwordIndex, uint32_t value) {
        const uint32_t ringBytes = (ringMask + 1) * 4;
        memory.Store(ringBase + (dwordIndex * 4) % ringBytes, value);
    }
    /// The guest posts commands, then kicks CP_RB_WPTR.
    void Submit(const std::vector<uint32_t>& words) {
        for (const uint32_t word : words) WriteRingDword(writeOffset_++, word);
    }
    uint32_t writeOffset() const { return writeOffset_; }
    void Kick() { processor.OnWritePointer(writeOffset_); }
    uint32_t Mask() const { return ringMask; }
    uint32_t ringBase = 0;
    uint32_t ringMask = 0xFFFF;
    uint32_t writeOffset_ = 0;

    void Initialize(uint32_t base, uint32_t sizeLog2) {
        ringBase = base;
        ringMask = (uint32_t(1) << (sizeLog2 + 1)) - 1;
        processor.InitializeRingBuffer(base, sizeLog2);
    }
};

void TestRegisterFileReadSemantics() {
    RegisterFile file;
    file.SetVideoMode({1920, 1080, 60});
    file.Write(0x1234, 0xCAFEBABE, RegisterFile::WriteOrigin::kMmio);
    CHECK(file.Read(0x1234) == 0xCAFEBABE);
    CHECK(file.Read(kRbEdramTiming) == kEdramTimingValue);
    CHECK(file.Read(kRbBcControl) == kBcControlValue);
    CHECK(file.Read(kInterruptStatus) == 1);
    CHECK(file.Read(kD1ModeVCounter) == 1080);
    CHECK(file.Read(kAvivoD1ModeViewportSize) == ((1920u << 16) | 1080u));
    // A register nobody wrote reads as zero, including above the file.
    CHECK(file.Read(0x4321) == 0);
    CHECK(file.Read(0x9000) == 0);
    // Writes above the window are preserved instead of dropped.
    file.Write(0x9000, 0x11223344, RegisterFile::WriteOrigin::kPacket);
    CHECK(file.Read(0x9000) == 0x11223344);
    CHECK(file.Raw(0x9000) == 0x11223344);
    CHECK(file.ExtendedWrites() == 1);
    // The viewport register reports the live display, not the stored value.
    file.Write(kAvivoD1ModeViewportSize, 0x11111111, RegisterFile::WriteOrigin::kMmio);
    CHECK(file.Read(kAvivoD1ModeViewportSize) == ((1920u << 16) | 1080u));
    CHECK(file.Raw(kAvivoD1ModeViewportSize) == 0x11111111u);
}

void TestWritePointerKickOnlyFromMmio() {
    Device device;
    device.Initialize(0x1000, 4);
    int kicks = 0;
    struct Counter final : RegisterFile::WritePointerSink {
        int* count = nullptr;
        void OnWritePointer(uint32_t) noexcept override { ++*count; }
    };
    Counter counter;
    counter.count = &kicks;
    device.processor.registers().SetWritePointerSink(&counter);
    device.processor.registers().Write(kCpRbWptr, 16, RegisterFile::WriteOrigin::kMmio);
    CHECK(kicks == 1);
    // A packet writing the write pointer is not a host kick.
    device.processor.registers().Write(kCpRbWptr, 32, RegisterFile::WriteOrigin::kPacket);
    CHECK(kicks == 1);
    device.processor.registers().SetWritePointerSink(nullptr);
}

void TestDrainAppliesRegisterWrites() {
    Device device;
    device.Initialize(0x2000, 8);
    device.Submit({pm4::MakePacketType0(0x0500, 2), 0x11111111, 0x22222222,
                   pm4::MakePacketType1(0x0600, 0x0601), 0x33333333, 0x44444444});
    // Posted data alone is not work: the guest has to kick the write pointer.
    CHECK(!device.processor.HasWork());
    device.Kick();
    CHECK(device.processor.HasWork());
    device.processor.Tick();
    CHECK(!device.processor.HasWork());
    CHECK(device.processor.registers().Raw(0x0500) == 0x11111111u);
    CHECK(device.processor.registers().Raw(0x0501) == 0x22222222u);
    CHECK(device.processor.registers().Raw(0x0600) == 0x33333333u);
    CHECK(device.processor.registers().Raw(0x0601) == 0x44444444u);
    CHECK(device.processor.GetStats().drains == 1);
    CHECK(device.processor.GetStats().registerWrites == 4);
    CHECK(device.processor.GetStats().kicks == 1);
}

void TestReadPointerWriteback() {
    Device device;
    device.Initialize(0x3000, 8);
    const uint32_t writebackAddress = 0x8000;
    device.processor.EnableReadPointerWriteBack(writebackAddress, 2);
    device.Submit({pm4::MakePacketType0(0x0500, 1), 0xABCDEF01});
    device.Kick();
    CHECK(device.memory.Load(writebackAddress) == 0);
    device.processor.Tick();
    // The guest waits for this value, so it must be exactly our read pointer.
    CHECK(device.memory.Load(writebackAddress) == device.processor.ReadPointer());
    CHECK(device.processor.GetStats().readPointerWrites == 1);
}

void TestWritebackIsOptIn() {
    // Until VdEnableRingBufferRPtrWriteBack runs, the guest has not told us
    // where to publish progress, so the device must not write anywhere.
    Device device;
    device.Initialize(0x3800, 8);
    device.Submit({pm4::MakePacketType0(0x0500, 1), 0x00C0FFEE});
    device.Kick();
    device.processor.Tick();
    CHECK(device.processor.registers().Raw(0x0500) == 0x00C0FFEEu);
    CHECK(device.processor.GetStats().readPointerWrites == 0);
    // Enabling it later is honoured on the next drain without replaying state.
    device.processor.EnableReadPointerWriteBack(0x8100, 3);
    device.Submit({pm4::MakePacketType0(0x0501, 1), 0x00C0FFEF});
    device.Kick();
    device.processor.Tick();
    CHECK(device.memory.Load(0x8100) == device.processor.ReadPointer());
    CHECK(device.processor.GetStats().readPointerWrites == 1);
    CHECK(device.processor.GetStats().drains == 2);
}

void TestSwapPresentsThroughOurPresenter() {
    Device device;
    device.Initialize(0x4000, 8);
    const uint32_t frontbuffer = 0x00100000;
    device.Submit(SwapTokenStream(frontbuffer, 1280, 720));
    device.Kick();
    device.processor.Tick();
    CHECK(device.presenter.frames == 1);
    CHECK(device.presenter.lastAddress == frontbuffer);
    CHECK(device.presenter.lastWidth == 1280 && device.presenter.lastHeight == 720);
    CHECK(device.processor.GetStats().swaps == 1);
}

void TestBogusSwapDoesNotPresent() {
    Device device;
    device.Initialize(0x5000, 8);
    device.Submit({pm4::MakePacketType3(0x64, 4), 0xDEADBEEF, 0x1000, 1280, 720});
    device.Kick();
    device.processor.Tick();
    CHECK(device.presenter.frames == 0);
    // It is still accounted for, so an unimplemented command cannot hide.
    CHECK(device.processor.GetStats().unsupportedPackets >= 1);
}

void TestInterruptPacketDispatchesPerCpu() {
    Device device;
    device.Initialize(0x6000, 8);
    device.Submit({pm4::MakePacketType3(0x54, 1), 0b000101u});
    device.Kick();
    device.processor.Tick();
    CHECK(device.interrupts.Saw(1, 0));
    CHECK(device.interrupts.Saw(1, 2));
    CHECK(!device.interrupts.Saw(1, 1));
    CHECK(device.processor.GetStats().interrupts == 2);
}

void TestVblankDispatchesTheGuestCallback() {
    Device device;
    device.Initialize(0x7000, 8);
    device.processor.MarkVblank();
    device.processor.MarkVblank();
    CHECK(device.processor.VblankCount() == 2);
    CHECK(device.interrupts.Saw(0, 2));
}

void TestTruncatedPacketIsNotExecutedAndResumes() {
    Device device;
    device.Initialize(0x8000, 8);
    // The guest posted a header promising three dwords but only wrote one.
    device.Submit({pm4::MakePacketType0(0x0900, 3), 0xDEAD0001});
    device.Kick();
    device.processor.Tick();
    CHECK(device.processor.GetStats().truncatedDrains == 1);
    // The incomplete packet is not consumed: it will be re-read from the start.
    CHECK(device.processor.ReadPointer() == 0);
    CHECK(device.processor.ReadPointer() != device.processor.WritePointer());
    // The guest finishes the packet and kicks again: nothing is lost, and the
    // re-execution leaves the same final register state.
    device.Submit({0xDEAD0002, 0xDEAD0003});
    device.Kick();
    device.processor.Tick();
    CHECK(device.processor.registers().Raw(0x0900) == 0xDEAD0001u);
    CHECK(device.processor.registers().Raw(0x0901) == 0xDEAD0002u);
    CHECK(device.processor.registers().Raw(0x0902) == 0xDEAD0003u);
    CHECK(device.processor.ReadPointer() == device.processor.WritePointer());
}

void TestRingWrapsAround() {
    // A small ring forces the wrap: the guest's stream crosses the end and
    // continues at the base.
    Device device;
    device.Initialize(0x9000, 3);  // 64 bytes = 16 dwords
    const uint32_t mask = device.Mask();
    CHECK(mask == 15);
    device.Submit({pm4::MakePacketType0(0x0A00, 1), 0xAAAA0001,
                   pm4::MakePacketType0(0x0A01, 1), 0xAAAA0002});
    device.Kick();
    device.processor.Tick();
    CHECK(device.processor.registers().Raw(0x0A00) == 0xAAAA0001u);
    CHECK(device.processor.registers().Raw(0x0A01) == 0xAAAA0002u);

    // Write past the end so the next stream wraps, then check again.
    device.Submit({pm4::MakePacketType0(0x0A02, 1), 0xAAAA0003,
                   pm4::MakePacketType0(0x0A03, 1), 0xAAAA0004,
                   pm4::MakePacketType0(0x0A04, 1), 0xAAAA0005});
    device.Kick();
    device.processor.Tick();
    CHECK(device.processor.registers().Raw(0x0A02) == 0xAAAA0003u);
    CHECK(device.processor.registers().Raw(0x0A03) == 0xAAAA0004u);
    CHECK(device.processor.registers().Raw(0x0A04) == 0xAAAA0005u);
    CHECK(device.processor.ReadPointer() == device.processor.WritePointer());
    CHECK(device.processor.GetStats().truncatedDrains == 0);
}

void TestIndirectBufferIsExecuted() {
    Device device;
    device.Initialize(0xB000, 8);
    const uint32_t commandBuffer = 0x40000;
    device.memory.WriteStream(commandBuffer,
                              {pm4::MakePacketType0(0x0B00, 1), 0x12345678});
    device.Submit({pm4::MakePacketType3(0x3F, 2), commandBuffer, 2});
    device.Kick();
    device.processor.Tick();
    CHECK(device.processor.registers().Raw(0x0B00) == 0x12345678u);
    CHECK(device.processor.GetStats().unmappedIndirect == 0);
    // The GPU window masks guest CPU addresses; the CP must do the same, so a
    // packet pointing at the virtual alias must reach the same buffer.
    device.memory.WriteStream(commandBuffer, {pm4::MakePacketType0(0x0B01, 1), 0x87654321});
    device.Submit({pm4::MakePacketType3(0x3F, 2), commandBuffer | 0x80000000u, 2});
    device.Kick();
    device.processor.Tick();
    CHECK(device.processor.registers().Raw(0x0B01) == 0x87654321u);
}

void TestUnreadableIndirectBufferIsCounted() {
    Device device;
    device.Initialize(0xC000, 8);
    // Outside the fake guest memory: the CP must count it, not crash or hang.
    device.Submit({pm4::MakePacketType3(0x3F, 2), 0xFFFFFF00, 4});
    device.Kick();
    device.processor.Tick();
    CHECK(device.processor.GetStats().unmappedIndirect == 1);
    CHECK(device.processor.ReadPointer() == device.processor.WritePointer());
}

void TestInvalidRingIsRefused() {
    Device device;
    device.processor.InitializeRingBuffer(0, 8);
    CHECK(!device.processor.Initialized());
    device.processor.InitializeRingBuffer(0x1000, 0);
    CHECK(!device.processor.Initialized());
    device.processor.InitializeRingBuffer(0x1000, 31);
    CHECK(!device.processor.Initialized());
    CHECK(device.processor.GetStats().invalidRingInitializations == 3);
    device.processor.Tick();  // must be harmless before initialization
    CHECK(device.processor.GetStats().drains == 0);
}

void TestEmptyKickDoesNothing() {
    Device device;
    device.Initialize(0xD000, 8);
    device.Kick();
    CHECK(!device.processor.HasWork());
    device.processor.Tick();
    CHECK(device.processor.GetStats().drains == 0);
    CHECK(device.processor.GetStats().kicks == 1);
}

void TestStatsFormatIsComplete() {
    Device device;
    device.Initialize(0xE000, 8);
    device.Submit(SwapTokenStream(0x00A00000, 640, 480));
    device.Kick();
    device.processor.Tick();
    const std::string text = device.processor.GetStats().Format();
    CHECK(text.find("kicks=1") != std::string::npos);
    CHECK(text.find("swaps=1") != std::string::npos);
    CHECK(text.find("truncated_drains=0") != std::string::npos);
    CHECK(text.find("unmapped_indirect=0") != std::string::npos);
}
} // namespace

int main() {
    std::setvbuf(stdout, nullptr, _IONBF, 0);
    TestRegisterFileReadSemantics();
    TestWritePointerKickOnlyFromMmio();
    TestDrainAppliesRegisterWrites();
    TestReadPointerWriteback();
    TestWritebackIsOptIn();
    TestSwapPresentsThroughOurPresenter();
    TestBogusSwapDoesNotPresent();
    TestInterruptPacketDispatchesPerCpu();
    TestVblankDispatchesTheGuestCallback();
    TestTruncatedPacketIsNotExecutedAndResumes();
    TestRingWrapsAround();
    TestIndirectBufferIsExecuted();
    TestUnreadableIndirectBufferIsCounted();
    TestInvalidRingIsRefused();
    TestEmptyKickDoesNothing();
    TestStatsFormatIsComplete();
    if (failures) {
        std::printf("gpu device: %d failure(s)\n", failures);
        return 1;
    }
    std::puts("native GPU device (register file + command processor): all checks passed");
    return 0;
}
