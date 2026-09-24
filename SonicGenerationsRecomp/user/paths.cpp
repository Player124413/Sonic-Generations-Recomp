#include "paths.h"
#include <iterator>

#ifdef _WIN32
#include <Windows.h>
#elif defined(__APPLE__)
#include <CoreFoundation/CFBundle.h>
#include <mach-o/dyld.h>
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
    // The entire installation travels with the runtime. Never depend on CWD,
    // a per-user storage directory, or the legacy portable.txt marker.
    return g_executableRoot / "assets";
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
