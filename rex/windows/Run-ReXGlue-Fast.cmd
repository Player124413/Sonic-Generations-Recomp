@echo off
setlocal
cd /d "%~dp0"
rem An opt-in profile for the visible Xenos/Vulkan reference path. It only sets
rem environment variables for this run: assets\rex-runtime.toml and any value you
rem chose yourself (in that file, on the command line, or in the F4 overlay) still
rem win, because an environment variable never outranks them.
rem
rem vsync=false lets the guest vblank timer free-run (1 ms steps) instead of being
rem paced to the guest video mode's 60 Hz. That removes pacing hitches when the
rem machine can render faster than 60 FPS; it can also cause tearing, so compare
rem both scripts and keep whichever is smoother for you.
set "REX_VSYNC=false"
echo Reference path with vsync=false. ReXGlue also accepts these per-run knobs:
echo   REX_NATIVE_2X_MSAA=false            use native 2x MSAA (default true)
echo   REX_VULKAN_PIPELINE_CREATION_THREADS=N  pipeline threads, -1 = auto
echo   REX_VULKAN_ASYNC_SKIP_INCOMPLETE_FRAMES=false  wait for pipelines instead of skipping
echo   REX_PRESENT_EFFECT=fsr/bilinear      presenter upscaling of the guest output
echo See rex\README.md, section on performance, for what each one costs.
call "%~dp0Run-ReXGlue.cmd"
exit /b %errorlevel%
