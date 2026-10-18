#include <os/version.h>

#ifdef __ANDROID__
#include <android/api-level.h>

os::version::OSVersion os::version::GetOSVersion()
{
    OSVersion version{};
    version.Major = uint32_t(android_get_device_api_level());
    return version;
}
#endif
