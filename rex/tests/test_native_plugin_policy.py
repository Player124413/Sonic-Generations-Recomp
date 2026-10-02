"""Our own GPU plugin must stay ours, and must stay loadable by the runtime.

The boundary is a decision, not a preference: the rendering code is ours, and
the only SDK graphics code that may appear in the plugin is the interface it
implements. These tests pin the parts of that contract a compiler cannot: the
ABI exports, the MMIO window, the kick path, the shutdown order, the absence of
the SDK's Xenos implementation from the plugin's includes and link line, and the
fact that the presenter and the stream recorder are ours as well.
"""
import re
import unittest
from pathlib import Path

ROOT = Path(__file__).resolve().parents[2]
PLUGIN = ROOT / 'rex/plugins/native'
MAIN = (PLUGIN / 'src/plugin_main.cpp').read_text(encoding='utf-8')
SYSTEM_HEADER = (PLUGIN / 'src/native_graphics_system.h').read_text(encoding='utf-8')
SYSTEM = (PLUGIN / 'src/native_graphics_system.cpp').read_text(encoding='utf-8')
MEMORY = (PLUGIN / 'src/sdk_guest_memory.cpp').read_text(encoding='utf-8')
PRESENTER_HEADER = (PLUGIN / 'src/native_vulkan_presenter.h').read_text(encoding='utf-8')
PRESENTER = (PLUGIN / 'src/native_vulkan_presenter.cpp').read_text(encoding='utf-8')
VULKAN_API_HEADER = (PLUGIN / 'src/native_vulkan_api.h').read_text(encoding='utf-8')
VULKAN_API = (PLUGIN / 'src/native_vulkan_api.cpp').read_text(encoding='utf-8')
VULKAN_CORE_HEADER = (PLUGIN / 'src/native_vulkan_core.h').read_text(encoding='utf-8')
FRAME_SOURCE = (PLUGIN / 'src/native_frame_source.cpp').read_text(encoding='utf-8')
LOGIC = (PLUGIN / 'src/presenter_logic.h').read_text(encoding='utf-8')
DEVICE_DUMP = (ROOT / 'rex/src/gpu_native/stream_dump.cpp').read_text(encoding='utf-8')
DEVICE_DUMP_HEADER = (ROOT / 'rex/src/gpu_native/stream_dump.h').read_text(encoding='utf-8')
COMMAND_PROCESSOR = (ROOT / 'rex/src/gpu_native/command_processor.cpp').read_text(encoding='utf-8')
CMAKE = (PLUGIN / 'CMakeLists.txt').read_text(encoding='utf-8')
HOST_CMAKE = (ROOT / 'rex/CMakeLists.txt').read_text(encoding='utf-8')
SOURCES = (MAIN, SYSTEM_HEADER, SYSTEM, MEMORY, PRESENTER_HEADER, PRESENTER, VULKAN_API_HEADER,
           VULKAN_API, VULKAN_CORE_HEADER, FRAME_SOURCE, LOGIC)


class NativePluginAbiTests(unittest.TestCase):
    def test_exports_the_two_symbols_the_loader_requires(self):
        self.assertIn('REX_GPU_PLUGIN_EXPORT uint32_t rex_gpu_abi_version(void)', MAIN)
        self.assertIn('rex::system::IGraphicsSystem* rex_gpu_create(', MAIN)
        self.assertIn('abi_version != rex::system::kGpuPluginAbiVersion', MAIN)
        self.assertIn('info->backend', MAIN)

    def test_a_backend_we_do_not_ship_is_refused_not_faked(self):
        # This plugin is Vulkan-only. A D3D12 request must fail the factory rather
        # than return a system that cannot draw.
        self.assertIn('backend != "vulkan"', MAIN)
        self.assertIn('return nullptr;', MAIN)

    def test_the_plugin_implements_the_interface_without_the_sdk_implementation(self):
        for source in SOURCES:
            self.assertNotIn('#include <rex/graphics/', source,
                             'the plugin must not include the SDK Xenos implementation')
            self.assertNotIn('#include "rex/graphics/', source)
        self.assertIn('class NativeGraphicsSystem final : public rex::system::IGraphicsSystem',
                      SYSTEM_HEADER)
        for pure_virtual in ('SetupPresentation', 'SetupGuestGpu', 'has_presentation', 'Shutdown'):
            self.assertIn(pure_virtual, SYSTEM_HEADER)
        # The provider and the presenter are ours now, and handing them to the
        # runtime is what makes the window ours rather than the SDK plugin's.
        self.assertIn('rex::ui::GraphicsProvider* provider() const override { return provider_.get(); }',
                      SYSTEM_HEADER)
        self.assertIn('rex::ui::Presenter* presenter() const override { return presenter_.get(); }',
                      SYSTEM_HEADER)
        self.assertIn('bool has_presentation() const override { return presenter_ != nullptr; }',
                      SYSTEM_HEADER)

    def test_vulkan_is_resolved_by_us_not_by_an_import_library(self):
        # The plugin loads vulkan-1.dll itself; VK_NO_PROTOTYPES means a missing
        # entry point is a compile error, and the loader can never be the thing
        # that draws for us.
        self.assertIn('VK_NO_PROTOTYPES', VULKAN_API_HEADER)
        self.assertIn('LoadLibraryW(L"vulkan-1.dll")', VULKAN_API)
        self.assertIn('GetProcAddress(handle, "vkGetInstanceProcAddr")', VULKAN_API)
        for entry in ('vkCreateInstance', 'vkQueueSubmit', 'vkQueuePresentKHR',
                      'vkCreateSwapchainKHR', 'vkAcquireNextImageKHR'):
            self.assertIn(f'"{entry}"', VULKAN_API)

    def test_the_presenter_is_a_real_rex_ui_presenter(self):
        self.assertIn('class NativePresenter final : public rex::ui::Presenter', PRESENTER_HEADER)
        for override in ('GetSupportedSurfaceTypes', 'CaptureGuestOutput',
                         'ConnectOrReconnectPaintingToSurfaceFromUIThread',
                         'DisconnectPaintingFromSurfaceFromUIThreadImpl',
                         'RefreshGuestOutputImpl', 'PaintAndPresentImpl'):
            self.assertIn(override, PRESENTER_HEADER)
        # The swap path is ours end to end: the sink counts the frame, the
        # presenter refreshes the guest output with it, and the paint is a clear
        # plus a letterboxed blit.
        self.assertIn('RefreshGuestOutput(', PRESENTER)
        self.assertIn('vkCmdBlitImage' if False else 'CmdBlitImage', PRESENTER)
        self.assertIn('FitGuestOutputRect(', PRESENTER)
        self.assertIn('kLetterboxClear', PRESENTER)

    def test_the_stream_recorder_is_the_device_not_the_host_hook(self):
        # The host probe only sees the swap helper's arguments, so the real
        # command stream can only be recorded where it is walked: in our device.
        self.assertIn('SetObserver(&streamDump_)', SYSTEM)
        self.assertIn('class StreamDump final : public PacketObserver', DEVICE_DUMP_HEADER)
        self.assertIn('OnDrain(const DrainInfo& drain) override', DEVICE_DUMP_HEADER)
        self.assertIn('SONIC_REX_GPU_DUMP', SYSTEM)
        self.assertIn("gpu-dump", SYSTEM)
        # The command processor has to report both what it executed and the ring
        # geometry, otherwise the recorder cannot copy the raw bytes.
        self.assertIn('observer_->OnDrain(drain);', COMMAND_PROCESSOR)
        self.assertIn('drain.ringBase = ringBase_;', COMMAND_PROCESSOR)


class NativePluginDeviceTests(unittest.TestCase):
    def test_register_window_is_the_guest_gpu_window(self):
        self.assertIn('constexpr uint32_t kGpuMmioBase = 0x7FC80000;', SYSTEM)
        self.assertIn('constexpr uint32_t kGpuMmioMask = 0xFFFF0000;', SYSTEM)
        self.assertIn('constexpr uint32_t kGpuMmioSize = 0x0000FFFF;', SYSTEM)
        self.assertIn('AddVirtualMappedRange(', SYSTEM)

    def test_the_write_pointer_kick_only_comes_from_mmio(self):
        # A Type-0 packet writing CP_RB_WPTR is not a host kick; the register file
        # records the origin and the command processor only reacts to MMIO.
        self.assertIn('index == kCpRbWptr', SYSTEM)
        self.assertIn('RegisterFile::WriteOrigin::kMmio', SYSTEM)
        self.assertIn('processor_.OnWritePointer(value);', SYSTEM)

    def test_vblank_and_interrupts_reach_the_guest(self):
        self.assertIn('processor_.MarkVblank();', SYSTEM)
        self.assertIn('XThread::GetCurrentThread()', SYSTEM)
        self.assertIn('SetActiveCpu(uint8_t(cpu))', SYSTEM)
        self.assertIn('ExecuteInterrupt(thread->thread_state(), interruptCallback_, arguments, 2)',
                      SYSTEM)
        self.assertIn('if (cpu == 0xFFFFFFFF) cpu = 2;', SYSTEM)

    def test_shutdown_stops_the_worker_before_releasing_the_device(self):
        body = SYSTEM[SYSTEM.index('void NativeGraphicsSystem::Shutdown'):]
        self.assertLess(body.index('StopVblankWorker();'), body.index('processor_.SetInterrupts'),
                        'the vblank worker must stop before the device loses its sinks')
        for detach in ('processor_.SetInterrupts(nullptr);', 'processor_.SetPresenter(nullptr);',
                       'processor_.SetMemory(nullptr);'):
            self.assertIn(detach, body)

    def test_the_swap_path_feeds_our_presenter_from_the_guest_frame(self):
        # A frame that silently disappears here would be a black window with no
        # explanation in the log.
        self.assertIn('owner_.OnGuestFrame(frontbufferAddress, width, height);', SYSTEM)
        self.assertIn('void NativeGraphicsSystem::OnGuestFrame(', SYSTEM)
        self.assertIn('presenter_->OnGuestFrame(frontbufferAddress, width, height,', SYSTEM)
        self.assertIn('std::max(1u, mode.displayHeight))) {', SYSTEM)
        self.assertIn('presenter_->SetFrameSource(&frameSource_);', SYSTEM)

    def test_the_command_processor_is_drained_by_a_guest_visible_worker(self):
        # The guest only sets the write pointer and waits for the read pointer: a
        # device that nobody drains stops the game at the first swap.
        self.assertIn('processor_.Tick();', SYSTEM)
        self.assertIn('StartGpuWorker(kernel_state);', SYSTEM)
        self.assertIn('WakeGpuWorker();', SYSTEM)
        shutdown = SYSTEM[SYSTEM.index('void NativeGraphicsSystem::Shutdown'):]
        self.assertLess(shutdown.index('StopGpuWorker();'),
                        shutdown.index('processor_.SetPresenter(nullptr);'))

    def test_one_vulkan_device_is_shared_by_renderer_and_presenter(self):
        # The renderer will draw into the image the presenter shows, so a second
        # device (or a second queue family by accident) would be a copy per frame.
        self.assertIn('vulkan_ = std::make_shared<vk::Core>();', SYSTEM)
        self.assertIn('vulkan_->Initialize(error)', SYSTEM)
        self.assertIn('provider_ = std::make_unique<NativeGraphicsProvider>(vulkan_);', SYSTEM)

    def test_guest_memory_is_read_only_through_the_runtime(self):
        # Physical addresses only, and writes keep guest byte order.
        self.assertIn('kPhysicalMask = 0x1FFFFFFF', MEMORY)
        self.assertIn('TranslatePhysical<uint8_t*>', MEMORY)
        self.assertIn('destination[0] = uint8_t(value >> 24);', MEMORY)


class NativePluginBuildTests(unittest.TestCase):
    def test_the_target_is_named_after_the_plugin_the_loader_looks_for(self):
        self.assertIn('add_library(rexgpu-native SHARED', CMAKE)
        self.assertIn('OUTPUT_NAME "rexgpu-native"', CMAKE)
        self.assertIn('PREFIX ""', CMAKE)
        self.assertIn('target_link_libraries(rexgpu-native PRIVATE sonic_rex_gpu_device '
                      'rex::runtime Vulkan::Headers)', CMAKE)
        # Vulkan headers only: the loader is resolved through our own entry-point
        # table, so the plugin needs no import library and no Vulkan SDK to link.
        self.assertNotIn('Vulkan::Vulkan', CMAKE)
        for source in ('src/native_vulkan_api.cpp', 'src/native_vulkan_core.cpp',
                       'src/native_vulkan_presenter.cpp', 'src/native_frame_source.cpp'):
            self.assertIn(source, CMAKE)

    def test_it_is_opt_in_and_the_host_can_still_load_xenos(self):
        self.assertIn('option(SONIC_REX_BUILD_NATIVE_PLUGIN', HOST_CMAKE)
        self.assertIn('SONIC_REX_BUILD_NATIVE_PLUGIN "Build our own rexgpu-native GPU plugin" OFF',
                      HOST_CMAKE)
        self.assertIn('set(SONIC_REX_GPU_PLUGINS "xenos" CACHE STRING', HOST_CMAKE,
                      'xenos stays the default until our plugin is finished')
        self.assertIn('rexglue_configure_target(SonicGenerationsRecomp-ReXGlue GPU_PLUGINS '
                      '${SONIC_REX_GPU_PLUGINS})', HOST_CMAKE)

    def test_the_device_stays_free_of_the_plugin(self):
        # The dependency has one direction: the plugin uses the device. If the
        # device started including plugin or SDK code it would stop being testable
        # on a plain compiler.
        for source in (ROOT / 'rex/src/gpu_native').glob('*'):
            if source.suffix not in ('.h', '.cpp'):
                continue
            text = source.read_text(encoding='utf-8')
            self.assertNotIn('#include <rex/', text,
                             f'{source.name} pulled an SDK header into the device')
            self.assertNotIn('plugins/native', text)

    def test_no_stale_references_to_a_removed_helper(self):
        pattern = re.compile(r'^#\s*include\s+["<].*rex_device\.cmake', re.MULTILINE)
        self.assertIsNone(pattern.search(CMAKE))


    def test_the_native_dump_launcher_uses_our_device_and_records_the_ring(self):
        # The swap-helper probe can never yield a stream: VdSwap gets a fixed
        # 64-word buffer. The stream is the ring, and only our device sees it, so
        # the launcher for a data run has to start our device and the recorder.
        script = (ROOT / 'rex/windows/Run-Native-GPU-Dump.cmd').read_text(encoding='utf-8')
        self.assertIn('set "SONIC_REX_GRAPHICS_MODE=native"', script)
        self.assertIn('set "SONIC_REX_GPU_DUMP=1"', script)
        self.assertIn('rexgpu-native.dll', script)
        # No hidden fallback to the reference renderer: without the plugin the
        # run stops and says so.
        self.assertNotIn('SONIC_REX_GRAPHICS_MODE=reference', script)
        self.assertIn('assets\\rex-cache\\gpu-dump', script)
        # A package that predates the plugin must be fixable by dropping the DLL
        # artifact next to the EXE, and the script has to say so instead of just
        # refusing to start.
        self.assertIn('rexgpu-native-plugin', script)
        self.assertIn('plugins\\rexgpu-native.dll', script)

    def test_the_plugin_is_built_with_its_dependencies_and_verified(self):
        # The plugin is its own CMake project. Without the vcpkg toolchain
        # find_package(Vulkan) finds nothing, the configure fails, and a
        # continue-on-error step hides it -- which is how a package shipped with
        # no DLL while its marker artifact claimed the plugin had built. The
        # workflow must wire the same dependencies the game host gets, and check
        # that the DLL really exists before calling the build good.
        workflow = (ROOT / '.github/workflows/windows-rexglue.yml').read_text(encoding='utf-8')
        self.assertIn('"-DCMAKE_TOOLCHAIN_FILE=$env:VCPKG_INSTALLATION_ROOT/scripts/buildsystems/vcpkg.cmake"', workflow)
        self.assertIn('-DVCPKG_TARGET_TRIPLET=x64-windows', workflow)
        self.assertIn("if (-not $dll) {", workflow)
        self.assertIn('::error title=rexgpu-native build failed::', workflow)
        self.assertIn('::error title=rexgpu-native configure failed::', workflow)
        # The DLL travels as its own small artifact, so the user does not have to
        # re-download the whole package to pick up one file.
        self.assertIn('name: rexgpu-native-plugin', workflow)
        self.assertIn('path: native-plugin/rexgpu-native.dll', workflow)
        # A package without the plugin is reported as an error, not a log line.
        self.assertIn('package without our GPU plugin', workflow)
        # The DLL is located, not assumed: a target defined in a subdirectory gets
        # its output in that subdirectory's directory for Visual Studio, which is
        # how the build "succeeded" while the DLL was nowhere the steps looked.
        self.assertIn("Get-ChildItem -Path build-rex-plugin -Recurse -Filter 'rexgpu-native.dll'", workflow)
        self.assertIn('Copy-Item $dll.FullName native-plugin/rexgpu-native.dll -Force', workflow)
        self.assertIn('path: native-plugin/rexgpu-native.dll', workflow)
        plugin_cmake = (ROOT / 'rex/plugins/native/CMakeLists.txt').read_text(encoding='utf-8')
        self.assertIn('"RUNTIME_OUTPUT_DIRECTORY_${config}" "${CMAKE_BINARY_DIR}/${config}"', plugin_cmake)
        # And the docs must point at it instead of the probe.
        plan = (ROOT / 'docs/OWN_GPU_PLAN.md').read_text(encoding='utf-8')
        self.assertIn('Run-Native-GPU-Dump.cmd', plan)
        readme = (ROOT / 'rex/README.md').read_text(encoding='utf-8')
        self.assertIn('Run-Native-GPU-Dump.cmd', readme)


    def test_state_and_draws_are_decoded_by_our_device(self):
        # The D3D driver writes render state as SET_CONSTANT blocks, not as Type-0
        # register writes, so a device that only understood Type-0 would see draws
        # with no state at all and report them as unsupported.
        device = (ROOT / 'rex/src/gpu_native/command_processor.cpp').read_text(encoding='utf-8')
        self.assertIn('renderState_->OnConstantBlock(payload)', device)
        self.assertIn('renderState_->OnFlatConstantBlock(payload)', device)
        self.assertIn('renderState_->OnConstantBlockFromMemory(base, index, dwords, words)', device)
        self.assertIn('renderState_->OnDraw(header.opcode, payload)', device)
        self.assertIn('memory_->Write32(address + uint32_t(i - 1) * 4, payload[i])', device)
        header = (ROOT / 'rex/src/gpu_native/command_processor.h').read_text(encoding='utf-8')
        self.assertIn('void SetRenderState(RenderState* renderState) noexcept', header)
        self.assertIn('RenderState* renderState_ = nullptr;', header)
        # The state is closed by the swap, after the presenter has seen the frame.
        present_case = device[device.index('case pm4::Action::Present:'):]
        self.assertLess(present_case.index('presenter_->OnSwap'),
                        present_case.index('renderState_->EndFrame()'))

    def test_the_render_state_feed_is_wired_into_the_plugin(self):
        system = (ROOT / 'rex/plugins/native/src/native_graphics_system.cpp').read_text(encoding='utf-8')
        self.assertIn('processor_.SetRenderState(&renderState_);', system)
        self.assertIn('presenter_->SetRenderState(&renderState_);', system)
        self.assertIn('renderState_.FormatStats()', system)
        presenter = (ROOT / 'rex/plugins/native/src/native_vulkan_presenter.cpp').read_text(encoding='utf-8')
        # The renderer is the consumer: it takes the frame's draws and counts them.
        self.assertIn('renderState_->TakeDraws()', presenter)
        self.assertIn('renderState_->TakeShaderUploads()', presenter)
        self.assertIn('stats_.drawsSeen += draws.size();', presenter)
        self.assertIn('++stats_.drawsWithNoState;', presenter)

    def test_render_state_has_its_own_build_and_test_target(self):
        cmake = (ROOT / 'rex/CMakeLists.txt').read_text(encoding='utf-8')
        self.assertIn('src/gpu_native/render_state.cpp', cmake)
        self.assertIn('add_test(NAME rex_render_state COMMAND rex_render_state_tests)', cmake)
        self.assertTrue((ROOT / 'rex/tests/render_state_tests.cpp').is_file())


    def test_the_plugin_never_links_the_vulkan_loader(self):
        # The plugin resolves vulkan-1.dll itself and links no import library, so
        # a call to a Vulkan entry point as a global is not a link error -- it is
        # an undefined symbol, which is how the Windows build failed once:
        # "undefined symbol: vkGetInstanceProcAddr". VK_NO_PROTOTYPES is what turns
        # that into a compile error, and the only resolver is our own table.
        cmake = (ROOT / 'rex/plugins/native/CMakeLists.txt').read_text(encoding='utf-8')
        self.assertIn('target_compile_definitions(rexgpu-native PRIVATE VK_NO_PROTOTYPES=1)', cmake)
        header = (ROOT / 'rex/plugins/native/src/native_vulkan_api.h').read_text(encoding='utf-8')
        guard = header.index('#define VK_NO_PROTOTYPES 1')
        self.assertLess(guard, header.index('#include <vulkan/vulkan.h>'))
        api = (ROOT / 'rex/plugins/native/src/native_vulkan_api.cpp').read_text(encoding='utf-8')
        # Names appear as strings for the resolver; a call would appear with an
        # opening parenthesis right after the name.
        self.assertNotIn('vkGetInstanceProcAddr(', api.split('namespace sonic')[0])
        self.assertNotIn('vkGetDeviceProcAddr(', api)
        # Every table is resolved through a pointer we hold: the loader's entry
        # point for globals, the instance's for instance and device functions.
        self.assertIn('Resolve(api.GetInstanceProcAddr, instance, function, name, error)', api)
        self.assertIn('Resolve(api.GetDeviceProcAddr, device, function, name, error)', api)
        # Function pointers cannot be reinterpret-cast without a warning, so the
        # conversion goes through a bit copy -- and GetProcAddress returns the
        # real FARPROC type, in the stub too.
        self.assertIn('GetInstanceProcAddr = FunctionCast<PFN_vkGetInstanceProcAddr>(entry);', api)
        stub = (ROOT / 'rex/tools/winstub/windows.h').read_text(encoding='utf-8')
        self.assertIn('typedef long long (*FARPROC)();', stub)
        self.assertIn('static inline FARPROC GetProcAddress(HMODULE, const char*)', stub)

    def test_the_workflow_has_no_unterminated_powershell_strings(self):
        # A missing closing quote in a run: block does not break YAML, it breaks
        # the shell script -- and the only way to see it is a CI run whose error
        # is about an unrelated-looking command.
        workflow = (ROOT / '.github/workflows/windows-rexglue.yml').read_text(encoding='utf-8')
        for number, line in enumerate(workflow.splitlines(), 1):
            stripped = line.strip()
            if not stripped or stripped.startswith('#') or '@\'' in stripped:
                continue
            if '${{' in stripped or '`' in stripped:
                continue
            if stripped.count('"') % 2:
                self.fail(f'line {number} has an odd number of quotes: {stripped[:100]}')

if __name__ == '__main__':
    unittest.main()
