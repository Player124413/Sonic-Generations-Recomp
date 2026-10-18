#include <os/media.h>

#ifdef __ANDROID__
bool os::media::IsExternalMediaPlaying()
{
    return false;
}
#endif
