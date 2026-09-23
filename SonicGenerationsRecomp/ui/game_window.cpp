#include <stdafx.h>
#include <ui/game_window.h>
#include <gpu/video.h>
#ifdef SONIC_GENERATIONS_ENABLE_VULKAN
#include <SDL_vulkan.h>
#endif
#include <os/logger.h>
#include <user/config.h>

static std::string g_windowTitle = "Sonic Generations Recompiled";

const char* GameWindow::GetTitle()
{
    return g_windowTitle.c_str();
}

void GameWindow::SetTitle(const char* title)
{
    g_windowTitle = title ? title : "Sonic Generations Recompiled";

    if (s_pWindow)
        SDL_SetWindowTitle(s_pWindow, g_windowTitle.c_str());
}

bool GameWindow::IsFullscreen()
{
    return s_pWindow && (SDL_GetWindowFlags(s_pWindow) & SDL_WINDOW_FULLSCREEN) != 0;
}

bool GameWindow::SetFullscreen(bool isEnabled)
{
    if (!s_pWindow)
        return false;

    return SDL_SetWindowFullscreen(s_pWindow, isEnabled ? SDL_WINDOW_FULLSCREEN_DESKTOP : 0) == 0;
}

SDL_Rect GameWindow::GetDimensions()
{
    SDL_Rect rect{};
    if (s_pWindow)
        SDL_GetWindowPosition(s_pWindow, &rect.x, &rect.y), SDL_GetWindowSize(s_pWindow, &rect.w, &rect.h);
    return rect;
}

void GameWindow::GetSizeInPixels(int* w, int* h)
{
    if (s_pWindow)
    {
#ifdef SONIC_GENERATIONS_ENABLE_VULKAN
        if (SDL_GetWindowFlags(s_pWindow) & SDL_WINDOW_VULKAN)
            SDL_Vulkan_GetDrawableSize(s_pWindow, w, h);
        else
#endif
            SDL_GL_GetDrawableSize(s_pWindow, w, h);
    }
    else
    {
        if (w) *w = s_width;
        if (h) *h = s_height;
    }
}

void GameWindow::SetDimensions(int w, int h, int x, int y)
{
    s_width = w;
    s_height = h;
    s_x = x;
    s_y = y;

    if (s_pWindow)
    {
        SDL_SetWindowSize(s_pWindow, w, h);
        SDL_SetWindowPosition(s_pWindow, x, y);
    }
}

void GameWindow::Init(const char* sdlVideoDriver)
{
    if (sdlVideoDriver)
        SDL_setenv("SDL_VIDEODRIVER", sdlVideoDriver, 1);

    if (SDL_InitSubSystem(SDL_INIT_VIDEO | SDL_INIT_GAMECONTROLLER) < 0)
    {
        LOGFN_ERROR("Failed to init SDL video subsystem: {}", SDL_GetError());
        return;
    }

    s_width = Config::WindowWidth;
    s_height = Config::WindowHeight;

    uint32_t flags = SDL_WINDOW_RESIZABLE | SDL_WINDOW_ALLOW_HIGHDPI;
#ifdef SONIC_GENERATIONS_ENABLE_VULKAN
    const char* requested = std::getenv("SONIC_RENDER_BACKEND");
    if (requested && std::strcmp(requested, "vulkan") == 0)
        flags |= SDL_WINDOW_VULKAN;
#endif
    if (Config::Fullscreen)
        flags |= SDL_WINDOW_FULLSCREEN_DESKTOP;

    s_pWindow = SDL_CreateWindow(GetTitle(), s_x, s_y, s_width, s_height, flags);
    if (!s_pWindow)
        LOGFN_ERROR("Failed to create window: {}", SDL_GetError());
}

void GameWindow::Update()
{
    // Pump and dispatch window events. Kept deliberately small.
    SDL_Event event;
    while (SDL_PollEvent(&event))
    {
        switch (event.type)
        {
        case SDL_WINDOWEVENT:
            switch (event.window.event)
            {
            case SDL_WINDOWEVENT_SIZE_CHANGED:
                s_width = event.window.data1;
                s_height = event.window.data2;
                {
                    int pixelWidth = 0, pixelHeight = 0;
                    GetSizeInPixels(&pixelWidth, &pixelHeight);
                    Video::OnResize(uint32_t(std::max(0, pixelWidth)), uint32_t(std::max(0, pixelHeight)));
                }
                break;

            case SDL_WINDOWEVENT_MINIMIZED:
                Video::OnResize(0, 0);
                break;

            case SDL_WINDOWEVENT_RESTORED:
                {
                    int w = 0, h = 0;
                    GetSizeInPixels(&w, &h);
                    Video::OnResize(uint32_t(std::max(0, w)), uint32_t(std::max(0, h)));
                }
                break;

            case SDL_WINDOWEVENT_FOCUS_GAINED:
                s_isFocused = true;
                break;

            case SDL_WINDOWEVENT_FOCUS_LOST:
                s_isFocused = false;
                break;
            }
            break;

        case SDL_QUIT:
            extern void App_RequestExit();
            App_RequestExit();
            break;
        }
    }
}

void GameWindow::Shutdown()
{
    if (s_pWindow)
    {
        SDL_DestroyWindow(s_pWindow);
        s_pWindow = nullptr;
    }

    SDL_QuitSubSystem(SDL_INIT_VIDEO | SDL_INIT_GAMECONTROLLER);
}
