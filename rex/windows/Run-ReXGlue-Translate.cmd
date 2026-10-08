@echo off
setlocal
cd /d "%~dp0"
rem Runs the game with OUR translation renderer on screen.
rem
rem What is ours here: the draw calls are captured from the guest's own D3D
rem functions, translated to Vulkan and presented by our presenter, which owns
rem the window's swapchain. The SDK keeps running the guest GPU device (ring
rem buffer, fences, interrupts, shader storage) -- that is what keeps the game
rem itself behaving as it does in reference mode -- but its renderer is not
rem connected to the window in this mode.
rem
rem What to expect:
rem   the game's picture, drawn by our renderer, with no Xenos frame on screen;
rem   no SDK overlays yet (console/menu), because this mode hands the app no
rem   immediate drawer.
rem If the window stays black, the run is still useful: the reports below say
rem how many frames were rendered, how many reached the window and why draws were
rem refused.
if not exist "assets\default.xex" (
  echo Put your installed Xbox 360 game files in assets next to this EXE.
  echo This new host does not provide ISO extraction yet.
  pause
  exit /b 2
)

set "SONIC_REX_GRAPHICS_MODE=translate"
echo Graphics: OUR translation renderer (Vulkan), our presenter owns the window.
echo   environment: SONIC_REX_GRAPHICS_MODE=translate
echo Reports: assets\rex-cache\native\latest-session.txt then status.txt/coverage.txt
echo Play until a few frames have been drawn, then quit and send those files.
echo If the picture is wrong or missing, the same files still say what happened.
call "%~dp0Run-ReXGlue.cmd"
set "result=%errorlevel%"
echo.
echo Translation report:
if exist "assets\rex-cache\native\latest-session.txt" (
  set /p SESSION=<"assets\rex-cache\native\latest-session.txt"
  call :show_report "%SESSION%"
) else (
  echo No session directory: the translator never started ^(see the host log below^).
)
echo.
echo Last lines of diagnostics\rex-runtime.log (the host's own log):
powershell -NoProfile -ExecutionPolicy Bypass -Command "if (Test-Path 'diagnostics\rex-runtime.log') { Get-Content 'diagnostics\rex-runtime.log' -Tail 40 } else { 'the host wrote no log in this run' }"
exit /b %result%

:show_report
set "dir=assets\rex-cache\native\%~1"
if exist "%dir%\status.txt" (
  powershell -NoProfile -ExecutionPolicy Bypass -Command "Get-Content '%dir%\status.txt'"
) else (
  echo %dir%\status.txt is missing.
)
if exist "%dir%\coverage.txt" (
  echo --- coverage ---
  powershell -NoProfile -ExecutionPolicy Bypass -Command "Get-Content '%dir%\coverage.txt'"
)
exit /b 0
