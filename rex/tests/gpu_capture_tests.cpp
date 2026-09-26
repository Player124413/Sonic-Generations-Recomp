#include "gpu_capture.h"
#include <algorithm>
#include <cstdio>
#include <sstream>
#include <stdexcept>
using namespace sonic::rex_host;
#define CHECK(x) do { if (!(x)) { std::fprintf(stderr, "line %d: %s\n", __LINE__, #x); return 1; } } while (0)
static uint32_t U32(const std::string& s, size_t offset) {
    uint32_t v = 0;
    for (unsigned i = 0; i < 4; ++i) v |= uint32_t(uint8_t(s.at(offset + i))) << (8 * i);
    return v;
}
int main() {
    uint64_t offset = 0;
    CHECK(!CaptureHostOffset(0, 4, offset));
    CHECK(!CaptureHostOffset(4095, 4, offset));
    CHECK(CaptureHostOffset(4096, 4, offset) && offset == 4096);
    CHECK(!CaptureHostOffset(0xFFFFFFFE, 4, offset));
    CHECK(!CaptureHostOffset(0x1000, SIZE_MAX, offset));
    CHECK(!CaptureHostOffset(0x7F000000, 4, offset));
    CHECK(!CaptureHostOffset(0x7EFFFFFE, 4, offset));
    CHECK(!CaptureHostOffset(0xDFFFFFFE, 4, offset));
    CHECK(CaptureHostOffset(0xDFFFFFFC, 4, offset) && offset == 0xDFFFFFFC);
    CHECK(CaptureHostOffset(0xE0000000, 4, offset) && offset == 0xE0001000);
    CHECK(CaptureHostOffset(0xFFFFFFFC, 4, offset) && offset == 0x100000FFCULL);
    std::ostringstream output(std::ios::binary);
    GpuCaptureWriter writer(output, 3);
    CaptureArguments args{0x12345678, 2, 3, 4, 5, 6, 7, 8, 0x7FF8000012345678};
    unsigned reads = 0;
    auto read = [&](uint32_t address, std::span<uint8_t> bytes) {
        ++reads;
        if (address != args[0] || bytes.size() != DeviceSnapshotBytes) throw std::runtime_error("bad read");
        std::fill(bytes.begin(), bytes.end(), 0xAB);
        return true;
    };
    CHECK(writer.Record(GpuEntry::CreateDevice, args, read));
    CHECK(reads == 0); // r3 here is NOT necessarily a device
    CHECK(writer.Record(GpuEntry::DrawIndexedVertices, args, read));
    CHECK(reads == 1);
    CHECK(writer.Record(GpuEntry::Resolve, args, [](auto, auto bytes) {
        std::fill(bytes.begin(), bytes.end(), 0xCC); return false;
    }));
    const auto data = output.str();
    CHECK(!writer.Record(GpuEntry::Clear, args, read) && reads == 1);
    CHECK(writer.Count() == 3 && data == output.str());
    CHECK(data.substr(0, 8) == "SGRXGPU1" && U32(data, 8) == 1 && U32(data, 12) == DeviceSnapshotBytes);
    CHECK(U32(data, 16) == 0x544E5645 && U32(data, 20) == 84);
    CHECK(U32(data, 32) == 0 && U32(data, 36) == args[0]);
    const size_t draw = 16 + 92, failed = draw + 92 + DeviceSnapshotBytes;
    CHECK(U32(data, draw + 8) == 1 && U32(data, draw + 16) == 1);
    CHECK(uint8_t(data.at(draw + 92)) == 0xAB);
    CHECK(U32(data, failed + 16) == 2 && U32(data, failed + 4) == 84);
    CHECK(data.size() == failed + 92); // no partial bytes from failed reader
    std::ostringstream broken;
    GpuCaptureWriter brokenWriter(broken);
    broken.setstate(std::ios::badbit);
    bool threw = false;
    try { brokenWriter.Record(GpuEntry::CreateDevice, args, {}); } catch (const std::runtime_error&) { threw = true; }
    CHECK(threw && brokenWriter.Count() == 0);
    std::ostringstream capped;
    GpuCaptureWriter cappedWriter(capped, UINT32_MAX);
    for (uint32_t i = 0; i < GpuCaptureWriter::MaxRecords; ++i)
        CHECK(cappedWriter.Record(GpuEntry::CreateDevice, args, {}));
    CHECK(!cappedWriter.Record(GpuEntry::CreateDevice, args, {}));
    std::puts("GPU capture format, bounds, memory aliases and failure handling passed");
}
