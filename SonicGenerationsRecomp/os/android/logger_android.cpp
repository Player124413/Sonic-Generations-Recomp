#include <os/logger.h>

#ifdef __ANDROID__
#include <android/log.h>

void os::logger::Init()
{
}

void os::logger::Log(const std::string_view str, ELogType type, const char* func)
{
    const android_LogPriority priority = type == ELogType::Error ? ANDROID_LOG_ERROR
        : type == ELogType::Warning ? ANDROID_LOG_WARN
        : ANDROID_LOG_INFO;
    if (func && *func && std::string_view(func) != "*")
        __android_log_print(priority, "SonicGen", "[%s] %.*s", func, int(str.size()), str.data());
    else
        __android_log_print(priority, "SonicGen", "%.*s", int(str.size()), str.data());
}
#endif
