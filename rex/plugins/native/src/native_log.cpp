#include "native_log.h"

#if defined(_MSC_VER) && !defined(_CRT_SECURE_NO_WARNINGS)
#define _CRT_SECURE_NO_WARNINGS 1
#endif

#include <rex/filesystem.h>

#include <chrono>
#include <cstdarg>
#include <cstdint>
#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <ctime>
#include <mutex>
#include <string>
#include <vector>
#include <atomic>

#if defined(_WIN32)
#ifndef WIN32_LEAN_AND_MEAN
#define WIN32_LEAN_AND_MEAN
#endif
#ifndef NOMINMAX
#define NOMINMAX
#endif
#include <windows.h>
#endif

namespace sonic::rex_host::gpu {
namespace {

std::mutex& LogMutex() {
    static std::mutex mutex;
    return mutex;
}

std::filesystem::path& LogPathStorage() {
    static std::filesystem::path path;
    return path;
}

/// The file is opened once, on first use. A failure to create it is not fatal:
/// the plugin must never be unable to start because of its own diagnostics.
std::FILE* LogFile() {
    static std::FILE* file = nullptr;
    static bool tried = false;
    if (!tried) {
        tried = true;
        const char* override_path = std::getenv("SONIC_REX_NATIVE_LOG");
        std::filesystem::path path;
        if (override_path && *override_path) {
            path = std::filesystem::path(override_path);
        } else {
            path = rex::filesystem::GetExecutableFolder() / "diagnostics" / "native-gpu.log";
        }
        std::error_code error;
        if (path.has_parent_path()) std::filesystem::create_directories(path.parent_path(), error);
        file = std::fopen(path.string().c_str(), "ab");
        LogPathStorage() = path;
    }
    return file;
}

std::string& StageStorage() {
    static std::string stage = "startup";
    return stage;
}

/// The last lines, kept in memory: the crash report carries them, which is what
/// turns "it crashed" into "it crashed in this step".
std::vector<std::string>& RecentLines() {
    static std::vector<std::string> lines;
    return lines;
}

constexpr size_t kRecentLineCount = 24;

unsigned long CurrentThreadId() {
#if defined(_WIN32)
    return GetCurrentThreadId();
#else
    return 0;
#endif
}

std::string Timestamp() {
    const auto now = std::chrono::system_clock::now();
    const std::time_t seconds = std::chrono::system_clock::to_time_t(now);
    std::tm local{};
#if defined(_WIN32)
    localtime_s(&local, &seconds);
#else
    localtime_r(&seconds, &local);
#endif
    const auto milliseconds =
        std::chrono::duration_cast<std::chrono::milliseconds>(now.time_since_epoch()).count() % 1000;
    char buffer[64];
    std::snprintf(buffer, sizeof(buffer), "%02d:%02d:%02d.%03d", local.tm_hour, local.tm_min,
                  local.tm_sec, int(milliseconds));
    return std::string(buffer);
}

/// Names the module an address belongs to and the offset inside it, which is the
/// most useful thing to have without symbols: "rexgpu-native.dll+0x2f41".
std::string DescribeAddress(void* address) {
#if defined(_WIN32)
    HMODULE module = nullptr;
    if (GetModuleHandleExW(GET_MODULE_HANDLE_EX_FLAG_FROM_ADDRESS |
                               GET_MODULE_HANDLE_EX_FLAG_UNCHANGED_REFCOUNT,
                           reinterpret_cast<LPCWSTR>(address), &module) &&
        module) {
        wchar_t path[MAX_PATH]{};
        const DWORD length = GetModuleFileNameW(module, path, MAX_PATH);
        std::string name = "unresolved module";
        if (length) {
            const wchar_t* base = path;
            for (const wchar_t* cursor = path; *cursor; ++cursor) {
                if (*cursor == L'\\' || *cursor == L'/') base = cursor + 1;
            }
            char narrow[MAX_PATH]{};
            const int written = WideCharToMultiByte(CP_UTF8, 0, base, -1, narrow, MAX_PATH, nullptr,
                                                    nullptr);
            if (written > 0) name.assign(narrow);
        }
        const uint64_t base_address = reinterpret_cast<uint64_t>(module);
        const uint64_t offset = reinterpret_cast<uint64_t>(address) - base_address;
        char line[512];
        std::snprintf(line, sizeof(line), "%s+0x%llX", name.c_str(),
                      static_cast<unsigned long long>(offset));
        return std::string(line);
    }
#endif
    char line[64];
    std::snprintf(line, sizeof(line), "%p", address);
    return std::string(line);
}

void WriteLine(const std::string& line) {
    if (std::FILE* file = LogFile()) {
        std::fwrite(line.data(), 1, line.size(), file);
        std::fputc('\n', file);
        std::fflush(file);
    }
    std::fprintf(stderr, "%s\n", line.c_str());
    std::fflush(stderr);
    auto& recent = RecentLines();
    recent.push_back(line);
    if (recent.size() > kRecentLineCount) recent.erase(recent.begin());
}

#if defined(_WIN32)
/// The module this code lives in. Only exceptions inside it are interesting:
/// the runtime below us uses first-chance exceptions for page probing, and
/// logging those would bury the one that matters.
HMODULE& OwnModule() {
    static HMODULE module = nullptr;
    return module;
}

bool IsOwnAddress(const void* address) {
    if (!address) return false;
    HMODULE module = nullptr;
    if (!GetModuleHandleExW(GET_MODULE_HANDLE_EX_FLAG_FROM_ADDRESS |
                                GET_MODULE_HANDLE_EX_FLAG_UNCHANGED_REFCOUNT,
                            reinterpret_cast<LPCWSTR>(address), &module) ||
        !module) {
        return false;
    }
    return module == OwnModule();
}

#if defined(_M_X64)
uint64_t InstructionPointer(const CONTEXT* context) { return context ? context->Rip : 0; }
#elif defined(_M_ARM64)
uint64_t InstructionPointer(const CONTEXT* context) { return context ? context->Pc : 0; }
#else
uint64_t InstructionPointer(const CONTEXT* context) { (void)context; return 0; }
#endif

/// First-chance exceptions are reported before anything can swallow them: an
/// access violation inside our own DLL is written to the log with its exact
/// instruction pointer and the step it happened in, even if the process then
/// survives it or dies somewhere else entirely.
LONG CALLBACK FirstChanceHandler(EXCEPTION_POINTERS* exception) {
    if (!exception || !exception->ExceptionRecord || !exception->ContextRecord) {
        return EXCEPTION_CONTINUE_SEARCH;
    }
    const EXCEPTION_RECORD* record = exception->ExceptionRecord;
    switch (record->ExceptionCode) {
    case EXCEPTION_ACCESS_VIOLATION:
    case EXCEPTION_ILLEGAL_INSTRUCTION:
    case EXCEPTION_PRIV_INSTRUCTION:
    case EXCEPTION_INT_DIVIDE_BY_ZERO:
    case EXCEPTION_STACK_OVERFLOW:
        break;
    default:
        return EXCEPTION_CONTINUE_SEARCH;
    }
    void* instruction = reinterpret_cast<void*>(InstructionPointer(exception->ContextRecord));
    if (!IsOwnAddress(instruction) && !IsOwnAddress(record->ExceptionAddress)) {
        return EXCEPTION_CONTINUE_SEARCH;
    }
    // Faulting while already reporting would recurse forever.
    static std::atomic<bool> inside{false};
    if (inside.exchange(true, std::memory_order_acq_rel)) return EXCEPTION_CONTINUE_SEARCH;
    std::unique_lock<std::mutex> lock(LogMutex(), std::try_to_lock);
    if (lock.owns_lock()) {
        char line[512];
        std::snprintf(line, sizeof(line), "[sonic-gpu] FIRST-CHANCE 0x%08lX in %s; step: %s",
                      static_cast<unsigned long>(record->ExceptionCode),
                      DescribeAddress(instruction).c_str(), StageStorage().c_str());
        WriteLine(line);
        if (record->ExceptionCode == EXCEPTION_ACCESS_VIOLATION &&
            record->NumberParameters >= 2) {
            const char* kind = record->ExceptionInformation[0] == 0   ? "reading"
                               : record->ExceptionInformation[0] == 1 ? "writing"
                                                                       : "executing";
            std::snprintf(line, sizeof(line), "[sonic-gpu]   while %s address 0x%llX", kind,
                          static_cast<unsigned long long>(record->ExceptionInformation[1]));
            WriteLine(line);
        }
    }
    inside.store(false, std::memory_order_release);
    return EXCEPTION_CONTINUE_SEARCH;
}

LONG WINAPI CrashHandler(EXCEPTION_POINTERS* exception) {
    std::lock_guard<std::mutex> lock(LogMutex());
    const EXCEPTION_RECORD* record = exception ? exception->ExceptionRecord : nullptr;
    const char* exception_name = "unknown";
    if (record) {
        switch (record->ExceptionCode) {
        case EXCEPTION_ACCESS_VIOLATION: exception_name = "access violation"; break;
        case EXCEPTION_ILLEGAL_INSTRUCTION: exception_name = "illegal instruction"; break;
        case EXCEPTION_STACK_OVERFLOW: exception_name = "stack overflow"; break;
        case EXCEPTION_INT_DIVIDE_BY_ZERO: exception_name = "integer divide by zero"; break;
        case EXCEPTION_BREAKPOINT: exception_name = "breakpoint"; break;
        case EXCEPTION_IN_PAGE_ERROR: exception_name = "in-page error"; break;
        case EXCEPTION_PRIV_INSTRUCTION: exception_name = "privileged instruction"; break;
        default: break;
        }
    }
    char line[1024];
    std::snprintf(line, sizeof(line),
                  "[sonic-gpu] CRASH %s (0x%08lX) at %s; step: %s",
                  exception_name, record ? static_cast<unsigned long>(record->ExceptionCode) : 0ul,
                  DescribeAddress(record ? record->ExceptionAddress : nullptr).c_str(),
                  StageStorage().c_str());
    WriteLine(line);
    if (record && record->ExceptionCode == EXCEPTION_ACCESS_VIOLATION &&
        record->NumberParameters >= 2) {
        const char* kind = record->ExceptionInformation[0] == 0   ? "reading"
                           : record->ExceptionInformation[0] == 1 ? "writing"
                                                                   : "executing";
        std::snprintf(line, sizeof(line), "[sonic-gpu] CRASH while %s address 0x%llX", kind,
                      static_cast<unsigned long long>(record->ExceptionInformation[1]));
        WriteLine(line);
    }
    WriteLine("[sonic-gpu] last lines before the crash:");
    for (const std::string& recent : RecentLines()) WriteLine("    " + recent);
    return EXCEPTION_CONTINUE_SEARCH;
}
#endif

}  // namespace

void Log(const char* format, ...) {
    char message[1024];
    va_list arguments;
    va_start(arguments, format);
    std::vsnprintf(message, sizeof(message), format, arguments);
    va_end(arguments);

    char line[1200];
    std::snprintf(line, sizeof(line), "[sonic-gpu %s t%lu] %s", Timestamp().c_str(),
                  CurrentThreadId(), message);
    std::lock_guard<std::mutex> lock(LogMutex());
    WriteLine(line);
}

void LogSetContext(const char* stage) {
    std::lock_guard<std::mutex> lock(LogMutex());
    StageStorage() = stage ? stage : "";
}

const char* LogContext() { return StageStorage().c_str(); }

std::filesystem::path LogPath() {
    std::lock_guard<std::mutex> lock(LogMutex());
    (void)LogFile();  // the path is only known once the file is opened
    return LogPathStorage();
}

void InstallCrashHandler() {
#if defined(_WIN32)
    static bool installed = false;
    std::lock_guard<std::mutex> lock(LogMutex());
    if (installed) return;
    installed = true;
    HMODULE module = nullptr;
    // The address-of-a-function to LPCWSTR conversion is what the flag expects;
    // going through the pointer-sized integer keeps the cast explicit instead of
    // relying on the compiler to accept the direct form.
    const LPCWSTR self = reinterpret_cast<LPCWSTR>(reinterpret_cast<uintptr_t>(&InstallCrashHandler));
    if (GetModuleHandleExW(GET_MODULE_HANDLE_EX_FLAG_FROM_ADDRESS |
                               GET_MODULE_HANDLE_EX_FLAG_UNCHANGED_REFCOUNT,
                           self, &module)) {
        OwnModule() = module;
    }
    // Vectored, so it also sees exceptions that the runtime handles itself; the
    // handler ignores everything that is not inside our DLL.
    AddVectoredExceptionHandler(1, FirstChanceHandler);
    SetUnhandledExceptionFilter(CrashHandler);
#endif
}

}  // namespace sonic::rex_host::gpu
