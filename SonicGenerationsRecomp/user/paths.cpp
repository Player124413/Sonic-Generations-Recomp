#include "paths.h"
#include <iterator>

#ifdef _WIN32
#include <Windows.h>
#elif defined(__APPLE__)
#include <CoreFoundation/CFBundle.h>
#include <mach-o/dyld.h>
#elif defined(__ANDROID__)
#include <SDL_system.h>
#endif

std::filesystem::path g_executableRoot;

static std::filesystem::path GetExecutableRoot()
{
    std::error_code ec;
    std::filesystem::path result;

#ifdef _WIN32
    wchar_t buffer[32768];
    GetModuleFileNameW(nullptr, buffer, std::size(buffer));
    result = buffer;
#elif defined(__APPLE__)
    char buffer[32768];
    uint32_t size = std::size(buffer);
    _NSGetExecutablePath(buffer, &size);
    result = std::filesystem::weakly_canonical(buffer, ec);
#else
    result = std::filesystem::read_symlink("/proc/self/exe", ec);
#endif

    return result.parent_path();
}

std::filesystem::path BuildUserPath()
{
#if defined(__ANDROID__)
    // Android apps have no writable executable directory. Game data,
    // config.toml, saves and the ETC2 cache live in internal app storage
    // under the same "assets" layout the desktop build uses beside the EXE.
    // SDL must be initialised before this is called (it is: the guest only
    // reaches paths through startup code that runs after SDL_Init).
    if (const char* internal = SDL_AndroidGetInternalStoragePath())
        return std::filesystem::path(internal) / "assets";
    return std::filesystem::path("assets");
#else
    // The entire installation travels with the runtime. Never depend on CWD,
    // a per-user storage directory, or the legacy portable.txt marker.
    return g_executableRoot / "assets";
#endif
}

const std::filesystem::path& GetUserPath()
{
    static std::filesystem::path userPath = BuildUserPath();
    return userPath;
}

struct PathsInit
{
    PathsInit()
    {
        g_executableRoot = GetExecutableRoot();
    }
};

static PathsInit g_pathsInit;
