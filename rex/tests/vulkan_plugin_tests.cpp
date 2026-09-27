#include <rex/logging.h>
#include <rex/system/gpu_plugin.h>
#include <cstdio>

int main() {
    rex::InitLogging();
    auto graphics = rex::system::LoadGpuPlugin("xenos", "vulkan");
    if (!graphics) {
        std::fputs("FAIL: packaged rexgpu-xenos cannot create Vulkan graphics. "
                   "Use the matching Vulkan-enabled SDK/runtime, not the official D3D12-only Windows ZIP.\n", stderr);
        rex::ShutdownLogging();
        return 1;
    }
    graphics.reset();
    std::puts("PASS: staged rexgpu-xenos Vulkan factory and ABI. Device initialization/game boot were NOT tested.");
    rex::ShutdownLogging();
    return 0;
}
