#include "../../rex/src/native_gpu_bridge.h"
#include "../gpu/native_frame_fixture.h"
#include <gpu/vulkan_backend.h>
#include <algorithm>
#include <cstdio>
using namespace sonic::rex_host;
#define CHECK(x) do { if (!(x)) { std::fprintf(stderr, "line %d: %s\n", __LINE__, #x); return 1; } } while (0)
int main() {
    NativeFrameFixture fixture;
    const auto read = [](const void* context, uint32_t address, std::span<uint8_t> out) noexcept {
        const auto& bytes = static_cast<const NativeFrameFixture*>(context)->memory;
        if (address > bytes.size() || out.size() > bytes.size() - address) return false;
        std::copy_n(bytes.begin() + address, out.size(), out.begin()); return true;
    };
    GuestGpu::MemoryView memory{{}, read, &fixture};
    NativeGpuBridge bridge;
    // These fixture calls populate guest descriptors/color/viewport only;
    // their separate CommandStream is not submitted to this backend.
    fixture.Clear(fixture.SurfaceA, {0.25f, 0.5f, 0.75f, 1});
    CHECK(!bridge.Capture(GpuEntry::Clear,
        {fixture.Device, 1, fixture.Rect, fixture.Color, 0, 0, 0, 0, std::bit_cast<uint64_t>(1.0)}, memory));
    fixture.Resolve(fixture.SurfaceA, fixture.TextureA);
    CHECK(!bridge.Capture(GpuEntry::Resolve, {fixture.Device, 0, 0, fixture.TextureA}, memory));
    auto frame = bridge.Capture(GpuEntry::SwapHelper, {fixture.Device, fixture.TextureA}, memory);
    CHECK(frame && frame->clears.size() == 1 && frame->resolves.size() == 1);
    // Prove replay no longer needs the SDK memory after capture.
    std::fill(fixture.memory.begin(), fixture.memory.end(), 0);
    VulkanBackend backend(nullptr, true, true);
    VideoMode mode; mode.width = mode.height = 64;
    if (!backend.Init(mode)) { std::fprintf(stderr, "%s\n", backend.GetLastError().c_str()); return 1; }
    const auto result = backend.SubmitGuestBatch(*frame);
    if (result != GuestGpu::SubmissionResult::Submitted) {
        std::fprintf(stderr, "%s\n", backend.GetLastError().c_str()); return 1;
    }
    std::vector<uint8_t> rgba;
    CHECK(backend.ReadDiagnosticFrame(rgba) && rgba.size() == 64 * 64 * 4);
    for (size_t i = 0; i < rgba.size(); i += 4) {
        CHECK(rgba[i] >= 63 && rgba[i] <= 64);
        CHECK(rgba[i + 1] >= 127 && rgba[i + 1] <= 128);
        CHECK(rgba[i + 2] >= 191 && rgba[i + 2] <= 192);
        CHECK(rgba[i + 3] == 255);
    }
    CHECK(backend.GetHostStats().submissions > 0 && backend.GetHostStats().validationErrors == 0);
    std::puts("ReX bridge -> owned Sonic resources -> Vulkan clear/resolve -> readback passed");
}
