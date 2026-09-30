@echo off
setlocal
cd /d "%~dp0"
set "SONIC_REX_GRAPHICS_MODE=reference"
set "SONIC_REX_NATIVE_RENDER=offscreen"
rem Replaying every frame means rendering the whole frame a second time on top of
rem the visible Xenos renderer, which costs roughly twice as much GPU work. One
rem frame in thirty keeps the diagnostics usable while playing. Set the variables
rem before calling this script to override them.
if not defined SONIC_REX_NATIVE_FRAME_STRIDE set "SONIC_REX_NATIVE_FRAME_STRIDE=30"
if not defined SONIC_REX_NATIVE_READBACK set "SONIC_REX_NATIVE_READBACK=1"
echo Visible game: ReXGlue Xenos/Vulkan reference.
echo Native Vulkan: offscreen replay of 1 frame in %SONIC_REX_NATIVE_FRAME_STRIDE%, NOT a replacement window.
echo Readback: %SONIC_REX_NATIVE_READBACK% (each readback waits for the GPU; 0 is cheaper)
echo Successful native readbacks: assets\rex-cache\native\run-*\frame-*.bmp
echo Cost report per session: diagnostics\rex-runtime.log ([native] frames=... average=...ms)
echo Current session: assets\rex-cache\native\latest-session.txt
echo Status: assets\rex-cache\native\run-*\status.txt
call "%~dp0Run-ReXGlue.cmd"
exit /b %errorlevel%
