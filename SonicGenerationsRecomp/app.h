#pragma once

#include <user/config.h>
#include <vector>
#include <string>

class App
{
public:
    static inline bool s_isInit;
    static inline bool s_isLoading;
    static inline bool s_isExitRequested;

    static inline ELanguage s_language;

    static inline double s_deltaTime;
    static inline double s_time = 0.0;

    static void Restart(std::vector<std::string> restartArgs = {});
    static void Exit();
};

// Requested by the host window when the user closes it.
void App_RequestExit();
