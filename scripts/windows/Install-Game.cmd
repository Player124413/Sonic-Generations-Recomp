@echo off
setlocal
if "%~1"=="" (
  echo Drag your game dump folder or ISO onto this file.
  pause
  exit /b 2
)
"%~dp0SonicGenerationsRecomp.exe" --install "%~f1"
set "result=%errorlevel%"
echo Install exit code: %result%
pause
exit /b %result%
