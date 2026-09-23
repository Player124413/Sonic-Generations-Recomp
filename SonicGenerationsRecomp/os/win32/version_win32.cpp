#include <windows.h>
#include <os/version.h>

os::version::OSVersion os::version::GetOSVersion()
{
    OSVersion result{};
    // ntdll is process-owned. No leaked LoadLibrary handle or SDK-internal type.
    using QueryVersion = LONG (WINAPI*)(OSVERSIONINFOW*);
    const auto module = GetModuleHandleW(L"ntdll.dll");
    const auto query = module ? reinterpret_cast<QueryVersion>(GetProcAddress(module, "RtlGetVersion")) : nullptr;
    OSVERSIONINFOW version{};
    version.dwOSVersionInfoSize = sizeof(version);
    if (query && query(&version) == 0)
    {
        result.Major = version.dwMajorVersion;
        result.Minor = version.dwMinorVersion;
        result.Build = version.dwBuildNumber;
    }
    return result;
}
