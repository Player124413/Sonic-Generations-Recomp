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
echo ReXGlue Xenos/Vulkan reference path. No native shadow rendering yet.
pause
exit /b %result%
