#include <rex/logging.h>
#include <rex/system/gpu_plugin.h>
#include <cstdio>
#include <exception>

namespace {
void Stage(const char* message) {
    // CTest captures stdout through a pipe: flush explicitly so a fail-fast
    // during CRT/DLL teardown cannot erase evidence of a successful factory.
    std::fprintf(stderr, "[vulkan-plugin-test] %s\n", message);
    std::fflush(stderr);
}
}
int main() {
    try {
        Stage("initializing logging");
        rex::InitLogging();
        Stage("loading DLL and creating Vulkan graphics");
        auto graphics = rex::system::LoadGpuPlugin("xenos", "vulkan");
        if (!graphics) {
            Stage("FAIL: staged plugin cannot create Vulkan graphics");
            rex::ShutdownLogging();
            return 1;
        }
        Stage("factory succeeded; destroying uninitialized graphics object");
        graphics.reset();
        Stage("graphics destroyed; shutting down logging");
        rex::ShutdownLogging();
        Stage("factory/ABI/destruction passed; no device/game boot tested");
        Stage("CRT_TEARDOWN_BEGIN");
        return 0;
    } catch (const std::exception& error) {
        std::fprintf(stderr, "[vulkan-plugin-test] exception: %s\n", error.what());
        std::fflush(stderr);
        return 1;
    }
}
