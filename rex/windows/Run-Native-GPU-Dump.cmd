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
if not exist "rexgpu-native.dll" (
  echo rexgpu-native.dll is not next to this EXE.
  echo Build the plugin with -DSONIC_REX_BUILD_NATIVE_PLUGIN=ON and copy it here.
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
  echo No packets.txt: the device never saw a ring kick. The stderr log above
  echo says why it was not set up.
)
exit /b %result%
