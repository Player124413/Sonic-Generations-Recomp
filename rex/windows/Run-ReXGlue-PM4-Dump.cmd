@echo off
setlocal
cd /d "%~dp0"
rem Runs the game with the command-stream probe on. The probe only reads guest
rem memory: it does not change what the game renders, and the SDK Xenos path
rem stays in charge, so this run is still playable.
rem
rem It writes to assets\rex-cache\pm4:
rem   arguments.txt  every swap helper call with its raw arguments (always)
rem   swap-000.txt   the decoded packets around a real swap token (up to 8)
rem   swap-000.bin   the raw window those packets were decoded from
rem If only arguments.txt appears, the token was not among the arguments and
rem that file is the thing to send: it says where the stream actually is.
if not exist "assets\default.xex" (
  echo Put your installed Xbox 360 game files in assets next to this EXE.
  echo This new host does not provide ISO extraction yet.
  pause
  exit /b 2
)
set "SONIC_REX_PM4_DUMP=1"
if not exist "assets\rex-cache\pm4" mkdir "assets\rex-cache\pm4"
rem The marker file makes the probe survive any launcher that drops the
rem environment; either one enables it.
type nul > "assets\rex-cache\pm4\enable"
echo Command-stream probe: ON
echo   environment: SONIC_REX_PM4_DUMP=1
echo   marker:      assets\rex-cache\pm4\enable
echo Output: assets\rex-cache\pm4\ (arguments.txt, swap-NNN.txt/.bin)
echo Play until a few frames have been shown, then quit and send those files.
call "%~dp0Run-ReXGlue.cmd"
set "result=%errorlevel%"
echo.
echo Probe output:
dir /b "assets\rex-cache\pm4" 2>nul
exit /b %result%
