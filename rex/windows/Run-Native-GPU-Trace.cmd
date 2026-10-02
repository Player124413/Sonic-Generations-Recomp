@echo off
setlocal
cd /d "%~dp0"
rem Runs the game on OUR graphics device under the Windows debugger and records
rem every exception with a stack, so a crash is located instead of guessed:
rem
rem   diagnostics\native-gpu-trace.log   EXCEPTION lines plus STACK frames
rem   diagnostics\native-gpu.log         our device's own log (steps, first-chance
rem                                      faults inside our DLL, crash report)
rem   diagnostics\rex-runtime.log        the host's log
rem
rem Why the debugger: an access violation that the process cannot survive leaves
rem no report from inside it, and a GUI host has no console to print one. The
rem supervisor here is a debugger, so it sees the exception before anything can
rem swallow it, and it walks the stack of the faulting thread.
rem
rem The run is not limited in time (SONIC_CRASH_TRACE_SECONDS=-1): play until it
rem crashes, then send diagnostics\native-gpu-trace.log.
if not exist "assets\default.xex" (
  echo Put your installed Xbox 360 game files in assets next to this EXE.
  pause
  exit /b 2
)

if not exist "rexgpu-native.dll" if exist "plugins\rexgpu-native.dll" (
  echo Using rexgpu-native.dll from plugins\ and copying it next to the EXE.
  copy /y "plugins\rexgpu-native.dll" "rexgpu-native.dll" >nul
)
if not exist "rexgpu-native.dll" (
  echo rexgpu-native.dll is not next to this EXE.
  echo Unpack the "rexgpu-native-plugin" artifact next to this file ^(or into a
  echo "plugins" subfolder^) and run this script again.
  pause
  exit /b 2
)
if not exist "windows_crash_trace.exe" (
  echo windows_crash_trace.exe is not next to this EXE.
  echo It ships inside the "windows-x64-rexglue-reference-candidate" package,
  echo next to this script.
  pause
  exit /b 2
)

set "SONIC_REX_GRAPHICS_MODE=native"
set "SONIC_REX_GPU_DUMP=1"
set "SONIC_CRASH_TRACE_SECONDS=-1"
if not exist diagnostics mkdir diagnostics
echo Graphics: OUR device (rexgpu-native.dll), no Xenos
echo Supervisor: windows_crash_trace.exe (the debugger reports the crash)
echo Output: diagnostics\native-gpu-trace.log
echo Play until it crashes, then quit and send that file.
"%~dp0windows_crash_trace.exe" "%~dp0SonicGenerationsRecomp-ReXGlue.exe" > "diagnostics\native-gpu-trace.log" 2>&1
set "result=%errorlevel%"
> "diagnostics\native-gpu-trace-exit.txt" echo %result%
echo.
echo Exit code: %result%
echo.
echo Last lines of diagnostics\native-gpu-trace.log:
powershell -NoProfile -ExecutionPolicy Bypass -Command "if (Test-Path 'diagnostics\native-gpu-trace.log') { Get-Content 'diagnostics\native-gpu-trace.log' -Tail 60 } else { 'the log was not written' }"
echo.
echo Last lines of diagnostics\native-gpu.log (our device's own log):
powershell -NoProfile -ExecutionPolicy Bypass -Command "if (Test-Path 'diagnostics\native-gpu.log') { Get-Content 'diagnostics\native-gpu.log' -Tail 25 } else { 'the plugin never wrote it: it did not start' }"
pause
exit /b %result%
