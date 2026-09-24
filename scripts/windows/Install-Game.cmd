@echo off
setlocal
if "%~1"=="" (
  call "%~dp0Launcher.cmd"
  exit /b
)
"%~dp0SonicGenerationsRecomp.exe" --install "%~f1"
set "result=%errorlevel%"
echo Install exit code: %result%
pause
exit /b %result%
