// Test the linked SDL's actual Windows Vulkan hook, without requiring a GPU,
// Vulkan SDK, driver, or game data on the build runner. A deliberately missing
// loader must reach SDL_LoadObject, rather than SDL's "not configured" branch.
#define SDL_MAIN_HANDLED
#include <SDL.h>
#include <SDL_vulkan.h>
#include <cstdio>
#include <cstring>

int main(int argc, char** argv)
{
    const bool dummy = argc == 2 && std::strcmp(argv[1], "--dummy") == 0;
    SDL_SetMainReady();
    SDL_setenv("SDL_VIDEODRIVER", dummy ? "dummy" : "windows", 1);
    if (SDL_Init(SDL_INIT_VIDEO) != 0)
    {
        std::fprintf(stderr, "SDL video initialization failed: %s\n", SDL_GetError());
        return 1;
    }
    // This is a relative path with a deliberately absent parent, not a bare
    // DLL name that Windows could accidentally resolve via its search path.
    const char* missing = ".\\sonic-sdl-probe-no-such-directory\\missing-vulkan-probe.dll";
    SDL_ClearError();
    const int result = SDL_Vulkan_LoadLibrary(missing);
    const char* error = SDL_GetError();
    const bool reachedLoader = std::strstr(error, "missing-vulkan-probe.dll") != nullptr;
    const bool unsupported = std::strstr(error, "No dynamic Vulkan support") != nullptr;
    std::printf("Driver: %s; loader result: %d; diagnostic: %s\n",
        SDL_GetCurrentVideoDriver(), result, error);
    // Dummy must exercise the unsupported branch; Windows must exercise the
    // DLL-loading branch. Checking the sentinel avoids OS-localized messages.
    const bool passed = result < 0 && (dummy ? unsupported && !reachedLoader : reachedLoader && !unsupported);
    if (result == 0)
        SDL_Vulkan_UnloadLibrary();
    SDL_Quit();
    if (!passed)
        std::fprintf(stderr, "Unexpected SDL Vulkan hook behavior. Windows builds need sdl2[vulkan].\n");
    return passed ? 0 : 1;
}
