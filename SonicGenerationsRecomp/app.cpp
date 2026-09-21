#include <stdafx.h>
#include "app.h"
#include <os/process.h>
#include <os/logger.h>
#include <user/config.h>

void App_RequestExit()
{
    App::s_isExitRequested = true;
}

void App::Restart(std::vector<std::string> restartArgs)
{
    os::process::StartProcess(os::process::GetExecutablePath(), restartArgs, os::process::GetWorkingDirectory());
    Exit();
}

void App::Exit()
{
    Config::Save();

#ifdef _WIN32
    timeEndPeriod(1);
#endif

    std::_Exit(0);
}
