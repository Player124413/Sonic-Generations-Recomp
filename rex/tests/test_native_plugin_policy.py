"""Our own GPU plugin must stay ours, and must stay loadable by the runtime.

The boundary is a decision, not a preference: the rendering code is ours, and
the only SDK graphics code that may appear in the plugin is the interface it
implements. These tests pin the parts of that contract a compiler cannot: the
ABI exports, the MMIO window, the kick path, the shutdown order, and the absence
of the SDK's Xenos implementation from the plugin's includes and link line.
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
CMAKE = (PLUGIN / 'CMakeLists.txt').read_text(encoding='utf-8')
HOST_CMAKE = (ROOT / 'rex/CMakeLists.txt').read_text(encoding='utf-8')
SOURCES = (MAIN, SYSTEM_HEADER, SYSTEM, MEMORY)


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
        # provider()/presenter() may be null, and ours honestly are until our own
        # presenter exists.
        self.assertIn('rex::ui::GraphicsProvider* provider() const override { return nullptr; }',
                      SYSTEM_HEADER)
        self.assertIn('rex::ui::Presenter* presenter() const override { return nullptr; }',
                      SYSTEM_HEADER)


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
        self.assertIn('target_link_libraries(rexgpu-native PRIVATE sonic_rex_gpu_device rex::runtime)',
                      CMAKE)

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


if __name__ == '__main__':
    unittest.main()
