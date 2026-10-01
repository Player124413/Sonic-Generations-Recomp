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
typedef void* HMODULE;
typedef void* HWND;
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
typedef void* HINSTANCE;
typedef void* HMONITOR;
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

static inline HMODULE LoadLibraryW(const wchar_t*) { return nullptr; }
static inline HMODULE LoadLibraryA(const char*) { return nullptr; }
static inline HMODULE GetModuleHandleW(const wchar_t*) { return nullptr; }
static inline void* GetProcAddress(HMODULE, const char*) { return nullptr; }
static inline BOOL FreeLibrary(HMODULE) { return 0; }

// --- Win32 API families, for the SDK headers that ask which family this is ---
#define WINAPI_PARTITION_DESKTOP 1
#define WINAPI_PARTITION_GAMES 1
#define WINAPI_FAMILY_PARTITION(partitions) 1
