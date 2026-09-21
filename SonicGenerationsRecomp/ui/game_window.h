#pragma once

#include <SDL.h>
#include <cstdint>

// Minimal host window wrapper (SDL2). The full options/UI layer from
// Unleashed Recompiled is intentionally not ported yet; see docs/ROADMAP.md.
class GameWindow
{
public:
    static inline SDL_Window* s_pWindow = nullptr;
    static inline int s_x = SDL_WINDOWPOS_CENTERED;
    static inline int s_y = SDL_WINDOWPOS_CENTERED;
    static inline int s_width = 1280;
    static inline int s_height = 720;
    static inline bool s_isFocused = true;

    static const char* GetTitle();
    static void SetTitle(const char* title = nullptr);

    static bool IsFullscreen();
    static bool SetFullscreen(bool isEnabled);

    static SDL_Rect GetDimensions();
    static void GetSizeInPixels(int* w, int* h);
    static void SetDimensions(int w, int h, int x = SDL_WINDOWPOS_CENTERED, int y = SDL_WINDOWPOS_CENTERED);

    static void Init(const char* sdlVideoDriver = nullptr);
    static void Update();
    static void Shutdown();
};
