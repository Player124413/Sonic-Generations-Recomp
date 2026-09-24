@echo off
setlocal
cd /d "%~dp0"
if not exist diagnostics mkdir diagnostics
"%~dp0SonicGenerationsRecomp.exe" --audit-imports > "diagnostics\imports.log" 2>&1
set "result=%errorlevel%"
> "diagnostics\imports.exit-code.txt" echo %result%
echo Audit exit code: %result%
echo Report: diagnostics\imports.log
echo This checks bindings, not implementation completeness or gameplay.
pause
exit /b %result%
