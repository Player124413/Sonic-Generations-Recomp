@echo off
setlocal
cd /d "%~dp0"
rem Records the guest's own D3D calls so a missing picture can be explained offline.
rem
rem What it writes: assets\rex-cache\gpu-capture.bin -- the hooked entry points
rem (draws, clears, resolves, the swap) with their raw arguments and the device
rem state each of them used. It is read by rex\tools\decode_gpu_capture.py, which
rem prints what the frame path decided from those arguments: whether a resolve
rem writes the frontbuffer the swap selects, and whether any resolve uses a mode
rem this renderer refuses. That is the difference between "nothing was captured"
rem and "everything was captured and refused", and it needs no second run.
rem
rem Rendering stays the ReXGlue Xenos reference here, so the picture works while
rem the capture is being recorded: the capture is about what the guest asks for,
rem not about what our renderer does with it. The capture stops by itself after
rem 4096 entries, which is the first frames -- exactly the ones that matter.
if not exist "assets\default.xex" (
  echo Put your installed Xbox 360 game files in assets next to this EXE.
  echo This new host does not provide ISO extraction yet.
  pause
  exit /b 2
)

if not defined SONIC_REX_GRAPHICS_MODE set "SONIC_REX_GRAPHICS_MODE=reference"
set "SONIC_REX_GPU_CAPTURE=1"
echo Graphics: ReXGlue Xenos/Vulkan reference ^(the picture works^).
echo   environment: SONIC_REX_GRAPHICS_MODE=%SONIC_REX_GRAPHICS_MODE% SONIC_REX_GPU_CAPTURE=1
echo Capture: assets\rex-cache\gpu-capture.bin ^(up to 4096 entries^)
echo Play for a few seconds - the first frames are what gets recorded - then quit.
call "%~dp0Run-ReXGlue.cmd"
set "result=%errorlevel%"
echo.
if exist "assets\rex-cache\gpu-capture.bin" (
  for %%F in ("assets\rex-cache\gpu-capture.bin") do echo Capture written: %%~zF bytes
  echo Send that file back, or decode it here:
  echo   python rex\tools\decode_gpu_capture.py assets\rex-cache\gpu-capture.bin
) else (
  echo No capture was written: the guest never issued a hooked GPU call
  echo ^(see diagnostics\rex-runtime.log for what it did instead^).
)
exit /b %result%
