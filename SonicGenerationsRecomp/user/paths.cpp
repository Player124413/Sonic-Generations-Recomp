#include <stdafx.h>
#include "paths.h"
#include <os/logger.h>

#ifdef _WIN32
#include <ShlObj.h>
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

bool CheckPortable()
{
    std::error_code ec;
    return std::filesystem::exists(g_executableRoot / "portable.txt", ec);
}

std::filesystem::path BuildUserPath()
{
    if (CheckPortable())
        return g_executableRoot;

#ifdef _WIN32
    wchar_t* buffer;
    if (SUCCEEDED(SHGetKnownFolderPath(FOLDERID_LocalAppData, 0, nullptr, &buffer)))
    {
        std::filesystem::path path = buffer;
        CoTaskMemFree(buffer);
        return path / USER_DIRECTORY;
    }
#elif defined(__APPLE__)
    if (const char* home = std::getenv("HOME"))
        return std::filesystem::path(home) / "Library" / "Application Support" / USER_DIRECTORY;
#else
    if (const char* xdg = std::getenv("XDG_DATA_HOME"))
        return std::filesystem::path(xdg) / USER_DIRECTORY;

    if (const char* home = std::getenv("HOME"))
        return std::filesystem::path(home) / ".local" / "share" / USER_DIRECTORY;
#endif

    return g_executableRoot / USER_DIRECTORY;
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
