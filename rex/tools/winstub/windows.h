#pragma once
// Off-Windows stand-in for windows.h.
//
// It exists so Windows-only translation units can be syntax-checked on a Linux
// workstation before a push burns a Windows CI run. It is deliberately minimal:
// it declares only what those units touch, and it is never added to the include
// path of a real target. Tools must not make this look like a full Win32 header.
#include <cstddef>
#include <cstdint>
#include <cstdio>
#include <string>
#include <sys/types.h>

typedef void* HANDLE;
typedef unsigned long DWORD;
typedef unsigned short WORD;
typedef unsigned char BYTE;
typedef int BOOL;
// Opaque pointer types, as the real SDK declares them. Making these `void*`
// would hide exactly the class of bug that cost a Windows CI run: `HMODULE` and
// `void*` convert to each other silently here, but `FreeLibrary(void*)` is a
// hard error on Windows, because there `HMODULE` is `HINSTANCE__*`.
struct HINSTANCE__;
struct HWND__;
struct HMONITOR__;
struct HDC__;
typedef struct HINSTANCE__* HMODULE;
typedef struct HINSTANCE__* HINSTANCE;
typedef struct HWND__* HWND;
typedef struct HMONITOR__* HMONITOR;
typedef struct HDC__* HDC;
typedef void* LPVOID;
typedef const void* LPCVOID;
typedef size_t SIZE_T;
typedef size_t* PSIZE_T;
typedef long long LONGLONG;
typedef unsigned long long LARGE_INTEGER_t;

struct _LARGE_INTEGER {
  long long QuadPart;
};
typedef struct _LARGE_INTEGER LARGE_INTEGER;

static inline void* GetCurrentProcess() {
  return reinterpret_cast<void*>(static_cast<intptr_t>(-1));
}
static inline unsigned long GetCurrentProcessId() { return 0; }
static inline BOOL ReadProcessMemory(HANDLE, LPCVOID, LPVOID, SIZE_T, PSIZE_T copied) {
  if (copied) *copied = 0;
  return 0;
}
static inline BOOL WriteProcessMemory(HANDLE, LPVOID, LPCVOID, SIZE_T, PSIZE_T written) {
  if (written) *written = 0;
  return 0;
}
static inline DWORD GetLastError() { return 0; }
static inline void OutputDebugStringA(const char*) {}

#define WINAPI
#define APIENTRY
#define MAX_PATH 260
#define TRUE 1
#define FALSE 0
#define EXCEPTION_EXECUTE_HANDLER 1
#define __declspec(x)
#define WINBASEAPI
#define DLLEXPORT

// --- added for the Vulkan WSI and loader entry points the GPU plugin uses ----
typedef const wchar_t* LPCWSTR;
typedef wchar_t* LPWSTR;
typedef const char* LPCSTR;
typedef char* LPSTR;
typedef unsigned long long UINT64;
typedef long long INT64;
typedef unsigned int UINT;
typedef unsigned int UINT32;
typedef int INT32;
typedef unsigned short USHORT;
typedef float FLOAT;

struct SECURITY_ATTRIBUTES {
  DWORD nLength;
  LPVOID lpSecurityDescriptor;
  BOOL bInheritHandle;
};

// FARPROC, exactly as the real SDK declares it: a pointer to a function with no
// prototype. Returning void* here would make the plugin's function-pointer casts
// look fine locally and fail to convert on Windows.
typedef long long (*FARPROC)();
static inline HMODULE LoadLibraryW(const wchar_t*) { return nullptr; }
static inline HMODULE LoadLibraryA(const char*) { return nullptr; }
static inline HMODULE GetModuleHandleW(const wchar_t*) { return nullptr; }
static inline FARPROC GetProcAddress(HMODULE, const char*) { return nullptr; }
static inline BOOL FreeLibrary(HMODULE) { return 0; }

// --- Win32 API families, for the SDK headers that ask which family this is ---
#define WINAPI_PARTITION_DESKTOP 1
#define WINAPI_PARTITION_GAMES 1
#define WINAPI_FAMILY_PARTITION(partitions) 1

// --- Exception handling, module lookup and thread identity -------------------
// The plugin's diagnostics need these: it installs a crash handler, asks which
// module an address belongs to, and reports the faulting thread. Declaring them
// here is what lets the Windows-only path be compiled at all off Windows --
// without them the `#if defined(_WIN32)` block is skipped in silence, which is
// how a Windows-only syntax error survives every local check.
typedef long LONG;
typedef unsigned long ULONG;
typedef unsigned long long ULONGLONG;
// Pointer-sized integer, as Win64 declares it: the fault address in an access
// violation arrives in ExceptionInformation.
typedef unsigned long long ULONG_PTR;
typedef void* PVOID;
typedef const void* LPCVOID;
typedef unsigned long DWORD;
typedef const wchar_t* LPCWCH;
typedef const char* LPCCH;
typedef int* LPINT;
#define CALLBACK
#ifndef WINAPI
#define WINAPI
#endif

#define EXCEPTION_ACCESS_VIOLATION 0xC0000005L
#define EXCEPTION_BREAKPOINT 0x80000003L
#define EXCEPTION_ILLEGAL_INSTRUCTION 0xC000001DL
#define EXCEPTION_IN_PAGE_ERROR 0xC0000006L
#define EXCEPTION_INT_DIVIDE_BY_ZERO 0xC0000094L
#define EXCEPTION_PRIV_INSTRUCTION 0xC0000096L
#define EXCEPTION_STACK_OVERFLOW 0xC00000FDL
#define EXCEPTION_MAXIMUM_PARAMETERS 15
#define EXCEPTION_CONTINUE_SEARCH 0
#define EXCEPTION_CONTINUE_EXECUTION (-1L)
#define EXCEPTION_EXECUTE_HANDLER 1

struct _EXCEPTION_RECORD {
  DWORD ExceptionCode;
  DWORD ExceptionFlags;
  struct _EXCEPTION_RECORD* ExceptionRecord;
  PVOID ExceptionAddress;
  DWORD NumberParameters;
  ULONG_PTR ExceptionInformation[EXCEPTION_MAXIMUM_PARAMETERS];
};
typedef struct _EXCEPTION_RECORD EXCEPTION_RECORD;

struct _CONTEXT {
  ULONGLONG Rip;
};
typedef struct _CONTEXT CONTEXT;

struct _EXCEPTION_POINTERS {
  EXCEPTION_RECORD* ExceptionRecord;
  CONTEXT* ContextRecord;
};
typedef struct _EXCEPTION_POINTERS EXCEPTION_POINTERS;

typedef LONG(CALLBACK* PVECTORED_EXCEPTION_HANDLER)(EXCEPTION_POINTERS*);
typedef LONG(CALLBACK* LPTOP_LEVEL_EXCEPTION_FILTER)(EXCEPTION_POINTERS*);

static inline PVOID AddVectoredExceptionHandler(ULONG, PVECTORED_EXCEPTION_HANDLER) {
  return nullptr;
}
static inline LPTOP_LEVEL_EXCEPTION_FILTER SetUnhandledExceptionFilter(
    LPTOP_LEVEL_EXCEPTION_FILTER) {
  return nullptr;
}
#define GET_MODULE_HANDLE_EX_FLAG_FROM_ADDRESS 0x00000004
#define GET_MODULE_HANDLE_EX_FLAG_UNCHANGED_REFCOUNT 0x00000002
static inline BOOL GetModuleHandleExW(DWORD, LPCWSTR, HMODULE* module) {
  if (module) *module = nullptr;
  return 0;
}
static inline DWORD GetModuleFileNameW(HMODULE, LPWSTR, DWORD) { return 0; }
#define CP_UTF8 65001
static inline int WideCharToMultiByte(UINT, DWORD, LPCWCH, int, LPSTR, int, LPCCH, BOOL*) {
  return 0;
}
static inline DWORD GetCurrentThreadId() { return 0; }
