@echo off
setlocal
cd /d "%~dp0"
rem Re-decodes a recording made by our own GPU device and writes the report.
rem
rem A recording (Run-Native-GPU-Dump.cmd) is: the raw ring bytes of every recorded
rem frame, plus memory.bin -- the guest bytes the stream reads (shader microcode,
rem constants, indirect buffers). This script feeds them back through the same
rem device that runs in the game, here, with no GPU and no game running, and
rem says what the device understood: draws, vertices, state blocks, shader
rem uploads, swaps, and every opcode or register the renderer still has to
rem implement.
rem
rem Output: assets\rex-cache\gpu-dump\replay-report.txt (and on screen).
set "DUMP=assets\rex-cache\gpu-dump"
if not exist "%DUMP%" (
  echo No recording in %DUMP%.
  echo Run Run-Native-GPU-Dump.cmd first: the replay reads what that run wrote.
  pause
  exit /b 2
)
if not exist "rex_gpu_replay.exe" (
  echo rex_gpu_replay.exe is not next to this EXE.
  echo It ships inside the "windows-x64-rexglue-reference-candidate" package ^(and
  echo in the "rexgpu-native-plugin" artifact next to the plugin DLL^).
  pause
  exit /b 2
)
rem Optional: replay only the first N frames (SONIC_REX_REPLAY_FRAMES=2).
if defined SONIC_REX_REPLAY_FRAMES (
  "%~dp0rex_gpu_replay.exe" "%DUMP%" --frames %SONIC_REX_REPLAY_FRAMES%
) else (
  "%~dp0rex_gpu_replay.exe" "%DUMP%"
)
set "result=%errorlevel%"
echo.
echo Report: %DUMP%\replay-report.txt
if not "%result%"=="0" echo Replay exit code: %result%
pause
exit /b %result%
