#include <os/process.h>

#ifdef __ANDROID__
#include <limits.h>
#include <unistd.h>

std::filesystem::path os::process::GetExecutablePath()
{
    // On Android /proc/self/exe is the app zygote (app_process); it carries
    // no useful game path, so report empty like an unknown location.
    return {};
}

std::filesystem::path os::process::GetExecutableRoot()
{
    return {};
}

std::filesystem::path os::process::GetWorkingDirectory()
{
    char cwd[PATH_MAX] = {};
    if (getcwd(cwd, sizeof(cwd)) != nullptr)
        return std::filesystem::path(std::u8string_view(reinterpret_cast<const char8_t*>(cwd)));
    return {};
}

bool os::process::SetWorkingDirectory(const std::filesystem::path& path)
{
    return chdir(path.c_str()) == 0;
}

bool os::process::StartProcess(const std::filesystem::path&, const std::vector<std::string>&, std::filesystem::path)
{
    // No subprocess spawning inside an Android app sandbox.
    return false;
}

void os::process::CheckConsole()
{
    g_consoleVisible = false;
}

void os::process::ShowConsole()
{
}
#endif
