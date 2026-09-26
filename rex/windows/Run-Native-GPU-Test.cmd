@echo off
setlocal
cd /d "%~dp0"
set "SONIC_REX_GRAPHICS_MODE=reference"
set "SONIC_REX_NATIVE_RENDER=offscreen"
echo Visible game: ReXGlue Xenos/Vulkan reference.
echo Native Vulkan: offscreen resource/shader replay, NOT a replacement window.
echo Successful native readbacks: assets\rex-cache\native\run-*\frame-*.bmp
echo Current session: assets\rex-cache\native\latest-session.txt
echo Status: assets\rex-cache\native\run-*\status.txt and diagnostics\rex-runtime.log
call "%~dp0Run-ReXGlue.cmd"
exit /b %errorlevel%
