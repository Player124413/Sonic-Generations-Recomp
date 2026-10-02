// Diagnostic supervisor only: preserves the debuggee exit status, never repairs
// or suppresses exceptions. Does not link ReXGlue or load any GPU DLL itself.
#define WIN32_LEAN_AND_MEAN
#define NOMINMAX
#include <windows.h>
#include <dbghelp.h>
#include <cstdio>
#include <cstdint>
#include <cstdlib>
#include <string>

namespace {
void Module(HANDLE process, HANDLE file, void* base) {
    wchar_t path[32768]{};
    if (file) GetFinalPathNameByHandleW(file, path, 32768, FILE_NAME_NORMALIZED);
    std::fprintf(stderr, "MODULE %p %ls\n", base, path);
    SymLoadModuleExW(process, file, *path ? path : nullptr, nullptr,
                    reinterpret_cast<DWORD64>(base), 0, nullptr, 0);
    if (file) CloseHandle(file);
}
void Stack(HANDLE process, DWORD threadId) {
    HANDLE thread = OpenThread(THREAD_GET_CONTEXT | THREAD_QUERY_INFORMATION, FALSE, threadId);
    if (!thread) { std::fprintf(stderr, "OpenThread error=%lu\n", GetLastError()); return; }
    CONTEXT context{};
    context.ContextFlags = CONTEXT_FULL;
    if (!GetThreadContext(thread, &context)) {
        std::fprintf(stderr, "GetThreadContext error=%lu\n", GetLastError()); CloseHandle(thread); return;
    }
    STACKFRAME64 frame{};
    frame.AddrPC = {context.Rip, 0, AddrModeFlat};
    frame.AddrStack = {context.Rsp, 0, AddrModeFlat};
    frame.AddrFrame = {context.Rbp, 0, AddrModeFlat};
    for (unsigned i = 0; i < 48 && frame.AddrPC.Offset; ++i) {
        alignas(SYMBOL_INFO) char storage[sizeof(SYMBOL_INFO) + MAX_SYM_NAME]{};
        auto* symbol = reinterpret_cast<SYMBOL_INFO*>(storage);
        symbol->SizeOfStruct = sizeof(SYMBOL_INFO); symbol->MaxNameLen = MAX_SYM_NAME;
        DWORD64 displacement = 0;
        IMAGEHLP_MODULE64 module{}; module.SizeOfStruct = sizeof(module);
        SymGetModuleInfo64(process, frame.AddrPC.Offset, &module);
        if (SymFromAddr(process, frame.AddrPC.Offset, &displacement, symbol))
            std::fprintf(stderr, "STACK %02u %016llx %s!%s+0x%llx\n", i,
                (unsigned long long)frame.AddrPC.Offset, module.ModuleName, symbol->Name,
                (unsigned long long)displacement);
        else
            std::fprintf(stderr, "STACK %02u %016llx %s+0x%llx\n", i,
                (unsigned long long)frame.AddrPC.Offset, module.ModuleName,
                (unsigned long long)(frame.AddrPC.Offset - module.BaseOfImage));
        if (!StackWalk64(IMAGE_FILE_MACHINE_AMD64, process, thread, &frame, &context,
                        nullptr, SymFunctionTableAccess64, SymGetModuleBase64, nullptr)) break;
    }
    CloseHandle(thread);
}
}
int wmain(int argc, wchar_t** argv) {
    if (argc < 2) {
        std::fputs("Usage: windows_crash_trace.exe <test.exe> [arguments...]\n", stderr);
        std::fputs("  SONIC_CRASH_TRACE_SECONDS=<n>  stop the debuggee after n seconds.\n", stderr);
        std::fputs("                                 Unset or 0: 45 (the CI default); negative: no limit.\n",
                   stderr);
        return 2;
    }
    SetErrorMode(SEM_FAILCRITICALERRORS | SEM_NOGPFAULTERRORBOX);
    std::wstring command = L"\"" + std::wstring(argv[1]) + L"\"";
    for (int index = 2; index < argc; ++index) {
        command += L" \"";
        command += argv[index];
        command += L"\"";
    }
    STARTUPINFOW start{}; start.cb = sizeof(start);
    PROCESS_INFORMATION process{};
    if (!CreateProcessW(argv[1], command.data(), nullptr, nullptr, FALSE,
                        DEBUG_ONLY_THIS_PROCESS, nullptr, nullptr, &start, &process)) {
        std::fprintf(stderr, "CreateProcess error=%lu\n", GetLastError()); return 2;
    }
    SymSetOptions(SYMOPT_UNDNAME | SYMOPT_DEFERRED_LOADS | SYMOPT_FAIL_CRITICAL_ERRORS);
    SymInitialize(process.hProcess, nullptr, FALSE);
    // The default keeps the contract tests bounded; a real game run needs to be
    // allowed to reach its crash, so the limit is a switch (negative = no limit,
    // 0 is treated as "unset").
    long long seconds = 45;
    if (const char* configured = std::getenv("SONIC_CRASH_TRACE_SECONDS")) {
        seconds = std::atoll(configured);
        if (seconds == 0) seconds = 45;  // 0 is the unset spelling, not a deadline
    }
    const ULONGLONG start_tick = GetTickCount64();
    const ULONGLONG deadline = seconds > 0 ? start_tick + ULONGLONG(seconds) * 1000 : 0;
    std::fprintf(stderr, "SUPERVISOR %ls (limit %lld s)\n", argv[1], seconds);
    DWORD result = 2;
    bool done = false, initialBreakpoint = true;
    while (!done) {
        DEBUG_EVENT event{};
        if (!WaitForDebugEvent(&event, 1000)) {
            if (GetLastError() == ERROR_SEM_TIMEOUT &&
                (deadline == 0 || GetTickCount64() < deadline)) {
                continue;
            }
            std::fputs("Debugger wait failed or timed out\n", stderr);
            TerminateProcess(process.hProcess, 2); break;
        }
        DWORD disposition = DBG_CONTINUE;
        switch (event.dwDebugEventCode) {
        case CREATE_PROCESS_DEBUG_EVENT:
            Module(process.hProcess, event.u.CreateProcessInfo.hFile, event.u.CreateProcessInfo.lpBaseOfImage); break;
        case LOAD_DLL_DEBUG_EVENT:
            Module(process.hProcess, event.u.LoadDll.hFile, event.u.LoadDll.lpBaseOfDll); break;
        case UNLOAD_DLL_DEBUG_EVENT:
            std::fprintf(stderr, "UNLOAD %p\n", event.u.UnloadDll.lpBaseOfDll);
            SymUnloadModule64(process.hProcess, reinterpret_cast<DWORD64>(event.u.UnloadDll.lpBaseOfDll)); break;
        case EXCEPTION_DEBUG_EVENT: {
            const auto& exception = event.u.Exception.ExceptionRecord;
            if (exception.ExceptionCode == EXCEPTION_BREAKPOINT && initialBreakpoint) {
                initialBreakpoint = false; break;
            }
            std::fprintf(stderr, "EXCEPTION code=%08lx address=%p firstChance=%lu", exception.ExceptionCode,
                         exception.ExceptionAddress, event.u.Exception.dwFirstChance);
            for (DWORD i = 0; i < exception.NumberParameters && i < EXCEPTION_MAXIMUM_PARAMETERS; ++i)
                std::fprintf(stderr, " parameter[%lu]=%llx", i, (unsigned long long)exception.ExceptionInformation[i]);
            std::fputc('\n', stderr);
            Stack(process.hProcess, event.dwThreadId);
            disposition = DBG_EXCEPTION_NOT_HANDLED;
            break;
        }
        case EXIT_PROCESS_DEBUG_EVENT:
            result = event.u.ExitProcess.dwExitCode; done = true;
            std::fprintf(stderr, "PROCESS_EXIT %08lx\n", result); break;
        default: break;
        }
        std::fflush(stderr);
        ContinueDebugEvent(event.dwProcessId, event.dwThreadId, disposition);
        if (!done && deadline != 0 && GetTickCount64() >= deadline) {
            std::fputs("Debugger deadline reached; stopping the debuggee\n", stderr);
            TerminateProcess(process.hProcess, 2);
            break;
        }
    }
    SymCleanup(process.hProcess);
    CloseHandle(process.hThread); CloseHandle(process.hProcess);
    return static_cast<int>(result);
}
