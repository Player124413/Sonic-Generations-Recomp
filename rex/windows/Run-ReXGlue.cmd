@echo off
setlocal
cd /d "%~dp0"
if not exist "assets\default.xex" (
  echo Put your installed Xbox 360 game files in assets next to this EXE.
  echo This new host does not provide ISO extraction yet.
  pause
  exit /b 2
)
if not exist diagnostics mkdir diagnostics
if not defined SONIC_REX_GRAPHICS_MODE set "SONIC_REX_GRAPHICS_MODE=reference"
"%~dp0SonicGenerationsRecomp-ReXGlue.exe" > "diagnostics\rex-runtime.log" 2>&1
set "result=%errorlevel%"
> "diagnostics\rex-exit-code.txt" echo %result%
echo Exit code: %result%
echo Visible rendering: ReXGlue Xenos/Vulkan reference.
echo Keyboard: move WASD/arrows, jump Space, pause Enter, back Backspace, camera IJKL.
echo Rebind keys in game with F4, or edit assets\rex-runtime.toml.
if "%SONIC_REX_NATIVE_RENDER%"=="offscreen" echo Native offscreen results: assets\rex-cache\native\latest-session.txt
pause
exit /b %result%
