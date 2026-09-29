#define WIN32_LEAN_AND_MEAN
#define NOMINMAX
#include <windows.h>
#include <rex/filesystem.h>
#include <array>
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
// ReXGlue 0.10.0 GetExecutablePath uses _get_wpgmptr. Microsoft requires a
// wide CRT entry point; using main aborts before LoadLibrary is even reached.
// The real SDK application uses wWinMain; this console probe must use wmain.
int wmain() {
    try {
        Stage("initializing logging");
        rex::InitLogging();
        Stage("checking wide-CRT executable path against Win32");
        std::array<wchar_t, 32768> modulePath{};
        const DWORD length = GetModuleFileNameW(nullptr, modulePath.data(), DWORD(modulePath.size()));
        if (!length || length >= modulePath.size() ||
            !std::filesystem::equivalent(std::filesystem::path(modulePath.data()), rex::filesystem::GetExecutablePath())) {
            Stage("FAIL: SDK executable path does not match the process image");
            rex::ShutdownLogging();
            return 1;
        }
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
