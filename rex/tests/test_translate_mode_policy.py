"""The translate mode has to be honest about who draws the frame and who presents it.

The player asked for one thing in this mode: the picture on screen is drawn by our
renderer, not by the SDK's Xenos plugin. That claim is only worth anything if it is
structural -- if the presenter the window gets is ours, if the SDK's own presenter
is never connected to the window, and if the guest device services the game needs
still come from the SDK. These tests pin exactly those three things, plus the
reports that make a run that does not show a picture diagnosable at all.
"""
import unittest
from pathlib import Path

ROOT = Path(__file__).resolve().parents[2]
PRESENTER = ROOT / 'rex/src/translate_presenter.cpp'
PRESENTER_HEADER = ROOT / 'rex/src/translate_presenter.h'
GRAPHICS = ROOT / 'rex/src/translate_graphics.h'
APP = ROOT / 'rex/src/sonic_app.h'
POLICY = ROOT / 'rex/src/host_policy.h'
NATIVE = ROOT / 'rex/src/native_gpu.cpp'
BACKEND = ROOT / 'SonicGenerationsRecomp/gpu/vulkan_backend.cpp'
LAUNCHER = ROOT / 'rex/windows/Run-ReXGlue-Translate.cmd'


class TranslateModePolicyTests(unittest.TestCase):
    def test_the_mode_is_a_first_class_choice_with_a_named_error(self):
        policy = POLICY.read_text(encoding='utf-8')
        self.assertIn('enum class GraphicsMode { Reference, Forward, Native, Translate }', policy)
        self.assertIn('if (mode == "translate") return GraphicsMode::Translate;', policy)
        self.assertIn('reference, forward, native or translate', policy)

    def test_the_window_gets_our_presenter_and_the_guest_keeps_the_sdk(self):
        graphics = GRAPHICS.read_text(encoding='utf-8')
        # The guest GPU services stay the SDK's: the wrapper forwards them all.
        self.assertIn('original_->SetupGuestGpu(dispatcher, kernel)', graphics)
        self.assertIn('original_->InitializeRingBuffer(pointer, size)', graphics)
        self.assertIn('original_->EnableReadPointerWriteBack(pointer, blockSize)', graphics)
        # The presenter the app attaches to the window is ours...
        self.assertIn('presenter_ = std::make_unique<TranslatePresenter>(', graphics)
        # ...and no provider is handed out, because the SDK's immediate drawer
        # would record into a presenter that is not connected in this mode.
        self.assertIn('rex::ui::GraphicsProvider* provider() const override { return nullptr; }',
                      graphics)

    def test_the_presenter_only_accepts_the_surface_it_can_build_a_swapchain_for(self):
        presenter = PRESENTER.read_text(encoding='utf-8')
        self.assertIn('return rex::ui::Surface::kTypeFlag_Win32Hwnd;', presenter)
        self.assertIn('rex::ui::Surface::kTypeIndex_Win32Hwnd', presenter)
        # The Vulkan surface comes from the HWND the window hands us, exactly like
        # the SDK's own presenter builds it, so no new window plumbing is invented.
        self.assertIn('win32_surface.hwnd()', presenter)
        self.assertIn('win32_surface.hinstance()', presenter)
        self.assertIn('backend->SetWin32Surface(', presenter)
        # FIFO is what the host swapchain requests, and the SDK needs to know that
        # presenting is throttled by the display.
        self.assertIn('is_vsync_implicit_out = true;', presenter)

    def test_the_presenter_does_not_claim_to_be_the_sdk_renderer(self):
        # The SDK's Vulkan command processor downcasts the refresh context to its
        # own presenter type, so a foreign presenter must never be handed to it.
        # In this mode the command processor keeps talking to the SDK presenter,
        # which is never connected to a surface; our presenter is a separate
        # object that the window talks to.
        for path in (PRESENTER, PRESENTER_HEADER):
            text = path.read_text(encoding='utf-8')
            self.assertNotIn('ui/vulkan/presenter.h', text)
            self.assertNotIn('VulkanGuestOutputRefreshContext', text)
        # Our presenter builds its own refresh context (declared in the header,
        # used in the unit), which is the contract the refresher we pass is
        # written against.
        header = PRESENTER_HEADER.read_text(encoding='utf-8')
        presenter = PRESENTER.read_text(encoding='utf-8')
        self.assertIn('class FrameContext final : public GuestOutputRefreshContext', header)
        self.assertIn('FrameContext context;', presenter)

    def test_a_frame_is_presented_only_when_the_translator_drew_one(self):
        presenter = PRESENTER.read_text(encoding='utf-8')
        self.assertIn('if (!backend || !backend->HasPresentableFrame())', presenter)
        self.assertIn('backend->Present();', presenter)
        self.assertIn('++stats_.presents;', presenter)
        # The counters are read from two threads, so they are behind the lock.
        self.assertIn('std::lock_guard lock(mutex_);', presenter)

    def test_the_device_is_created_with_the_window_surface_not_before_it(self):
        native = NATIVE.read_text(encoding='utf-8')
        self.assertIn('if (!backend->HasPresentationSurface() || !targetWidth || !targetHeight)',
                      native)
        self.assertIn('++framesWithoutSurface;', native)
        # A surface that arrives after the device cannot be attached, so the
        # backend refuses it loudly instead of presenting nothing.
        backend = BACKEND.read_text(encoding='utf-8')
        self.assertIn('The Win32 surface must be set before the device is created', backend)
        self.assertIn('VK_KHR_WIN32_SURFACE_EXTENSION_NAME', backend)
        self.assertIn('vkCreateWin32SurfaceKHR', backend)

    def test_the_mode_is_wired_where_the_plugin_is_chosen(self):
        app = APP.read_text(encoding='utf-8')
        # translate keeps the SDK ("xenos") device: only the presenter changes.
        self.assertIn('LoadGpuPlugin(native ? "native" : "xenos", "vulkan")', app)
        self.assertIn('std::make_unique<TranslateGraphics>(std::move(original))', app)
        self.assertIn('SONIC_REX_GRAPHICS_MODE=translate', app)

    def test_the_reports_say_what_reached_the_window(self):
        native = NATIVE.read_text(encoding='utf-8')
        for field in ('mode=', 'presentable=', 'notified=', 'notify_refused=',
                      'frames_without_surface=', 'frames_without_presenter='):
            self.assertIn(field, native,
                          'a translate run must report what reached the window')
        self.assertIn('presentation: frame(s)=', native)

    def test_the_launcher_sets_the_mode_and_prints_its_reports(self):
        script = LAUNCHER.read_text(encoding='utf-8')
        self.assertIn('set "SONIC_REX_GRAPHICS_MODE=translate"', script)
        # No hidden fallback: the mode is the whole point of this launcher.
        self.assertNotIn('SONIC_REX_GRAPHICS_MODE=reference', script)
        self.assertIn('assets\\rex-cache\\native\\latest-session.txt', script)
        self.assertIn('status.txt', script)
        self.assertIn('coverage.txt', script)
        self.assertIn('diagnostics\\rex-runtime.log', script)


if __name__ == '__main__':
    unittest.main()
