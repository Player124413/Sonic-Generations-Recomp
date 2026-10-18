#include <os/user.h>

#ifdef __ANDROID__
bool os::user::IsDarkTheme()
{
    // The launcher uses a dark theme; there is no per-user host query here.
    return true;
}
#endif
