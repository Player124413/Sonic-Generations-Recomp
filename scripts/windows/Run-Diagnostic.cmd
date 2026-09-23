@echo off
setlocal
cd /d "%~dp0"
if not exist diagnostics mkdir diagnostics
set SONIC_RENDER_BACKEND=vulkan
set SONIC_VULKAN_DIRECT_DRAW=1
set SONIC_VULKAN_VALIDATION=0
echo Experimental runtime. Output: diagnostics\runtime.log
"%~dp0SonicGenerationsRecomp.exe" > "diagnostics\runtime.log" 2>&1
set "result=%errorlevel%"
> "diagnostics\exit-code.txt" echo %result%
echo Exit code: %result%
echo See diagnostics\runtime.log. This does not confirm game compatibility.
pause
exit /b %result%
