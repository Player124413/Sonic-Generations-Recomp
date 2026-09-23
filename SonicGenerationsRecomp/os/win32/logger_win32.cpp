#include <windows.h>
#include <fmt/format.h>
#include <os/logger.h>
#include <os/process.h>

#define FOREGROUND_WHITE  (FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE)
#define FOREGROUND_YELLOW (FOREGROUND_RED | FOREGROUND_GREEN)

static HANDLE g_hStandardOutput;

void os::logger::Init()
{
    g_hStandardOutput = GetStdHandle(STD_OUTPUT_HANDLE);
}

void os::logger::Log(const std::string_view str, ELogType type, const char* func)
{
    const DWORD outputType = GetFileType(g_hStandardOutput);
    const bool redirected = outputType == FILE_TYPE_PIPE || outputType == FILE_TYPE_DISK;
    if (!os::process::g_consoleVisible && !redirected)
        return;

    switch (type)
    {
        case ELogType::Utility:
            SetConsoleTextAttribute(g_hStandardOutput, FOREGROUND_GREEN | FOREGROUND_INTENSITY);
            break;

        case ELogType::Warning:
            SetConsoleTextAttribute(g_hStandardOutput, FOREGROUND_YELLOW | FOREGROUND_INTENSITY);
            break;

        case ELogType::Error:
            SetConsoleTextAttribute(g_hStandardOutput, FOREGROUND_RED | FOREGROUND_INTENSITY);
            break;

        default:
            SetConsoleTextAttribute(g_hStandardOutput, FOREGROUND_WHITE);
            break;
    }

    if (func)
    {
        fmt::println("[{}] {}", func, str);
    }
    else
    {
        fmt::println("{}", str);
    }

    SetConsoleTextAttribute(g_hStandardOutput, FOREGROUND_WHITE);
}
