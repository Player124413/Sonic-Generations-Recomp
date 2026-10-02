@echo off
setlocal
cd /d "%~dp0"
rem Runs the game on OUR graphics device and records the real command stream
rem out of the ring buffer. Nothing here draws a picture yet: the window shows
rem guest memory at the front-buffer address from the swap token, and the point
rem of the run is the stream, not the image.
rem
rem Why this and not the swap-helper probe: VdSwap receives a fixed 64-word
rem buffer, so its arguments only ever hold one swap token. The ring buffer is
rem the stream, and only our device knows where it is (VdInitializeRingBuffer /
rem VdEnableRingBufferRPtrWriteBack hand it the base, size and writeback
rem address), so the recorder lives inside the device.
rem
rem It writes to assets\rex-cache\gpu-dump:
rem   packets.txt    per-frame lines plus a run-wide opcode histogram
rem   frame-NNN.txt  our own decoder's reading of one frame: packets, payloads
rem   frame-NNN.bin  the raw guest bytes of that frame, for offline replay
if not exist "assets\default.xex" (
  echo Put your installed Xbox 360 game files in assets next to this EXE.
  echo This new host does not provide ISO extraction yet.
  pause
  exit /b 2
)

rem The plugin has to sit next to the executable: the SDK loads rexgpu-<name>
rem from there and nowhere else. It is shipped inside the reference package and
rem also as its own small artifact, so a package that predates the plugin can be
rem fixed by dropping one file here instead of downloading everything again.
if not exist "rexgpu-native.dll" if exist "plugins\rexgpu-native.dll" (
  echo Using rexgpu-native.dll from plugins\ and copying it next to the EXE.
  copy /y "plugins\rexgpu-native.dll" "rexgpu-native.dll" >nul
)
if not exist "rexgpu-native.dll" if exist "build-rex-plugin\Release\rexgpu-native.dll" (
  echo Using rexgpu-native.dll from your local build and copying it next to the EXE.
  copy /y "build-rex-plugin\Release\rexgpu-native.dll" "rexgpu-native.dll" >nul
)
if not exist "rexgpu-native.dll" (
  echo rexgpu-native.dll is not next to this EXE.
  echo.
  echo Where to get it:
  echo   1. GitHub -^> Actions -^> "Windows ReXGlue migration" -^> newest green
  echo      run -^> Artifacts -^> "rexgpu-native-plugin" ^(small, this DLL only^);
  echo   2. or the whole "windows-x64-rexglue-reference-candidate" package, which
  echo      contains it as well.
  echo Unpack the DLL next to this file ^(or into a "plugins" subfolder^) and
  echo run this script again. Without the plugin the game would fall back to the
  echo SDK Xenos renderer, which is exactly what this run must not do.
  pause
  exit /b 2
)

set "SONIC_REX_GRAPHICS_MODE=native"
set "SONIC_REX_GPU_DUMP=1"
if not exist "assets\rex-cache\gpu-dump" mkdir "assets\rex-cache\gpu-dump"
echo Graphics: OUR device (rexgpu-native.dll), no Xenos
echo Stream recorder: ON
echo   environment: SONIC_REX_GPU_DUMP=1
echo Output: assets\rex-cache\gpu-dump\ (packets.txt, frame-NNN.txt/.bin)
echo Play until a few frames have been shown, then quit and send those files.
call "%~dp0Run-ReXGlue.cmd"
set "result=%errorlevel%"
echo.
echo Recorder output:
dir /b "assets\rex-cache\gpu-dump" 2>nul
if not exist "assets\rex-cache\gpu-dump\packets.txt" (
  echo No packets.txt: the device never saw a ring kick.
)
rem The host writes its own log into diagnostics\rex-runtime.log (Run-ReXGlue.cmd
rem redirects the executable's output there), and our device writes
rem diagnostics\native-gpu.log. Printing both tails here means one screenshot or
rem one file answers most questions about a run that died early.
echo.
echo Last lines of diagnostics\native-gpu.log (our device's own log):
powershell -NoProfile -ExecutionPolicy Bypass -Command "if (Test-Path 'diagnostics\native-gpu.log') { Get-Content 'diagnostics\native-gpu.log' -Tail 30 } else { 'the plugin never wrote it: it did not start' }"
echo.
echo Last lines of diagnostics\rex-runtime.log (the host's log):
powershell -NoProfile -ExecutionPolicy Bypass -Command "if (Test-Path 'diagnostics\rex-runtime.log') { Get-Content 'diagnostics\rex-runtime.log' -Tail 30 } else { 'the host wrote no log in this run' }"
exit /b %result%
