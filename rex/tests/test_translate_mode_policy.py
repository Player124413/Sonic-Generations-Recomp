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
NATIVE_FRAME = ROOT / 'SonicGenerationsRecomp/gpu/native_frame.cpp'
SURFACE_POLICY = ROOT / 'SonicGenerationsRecomp/gpu/native_surface_policy.h'
REPORT = ROOT / 'SonicGenerationsRecomp/gpu/native_render_report.h'
CMAKE = ROOT / 'rex/CMakeLists.txt'
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
        self.assertIn('if (!backendOwner->HasPresentationSurface() || !targetWidth || !targetHeight)',
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

    def test_the_frame_notification_cannot_deadlock_against_the_present_path(self):
        # The presenter reaches the translator through GetNativeGpuBackend() while
        # it presents, and it presents *inside* the frame notification -- which the
        # capture path invokes. One lock for both would be a self-deadlock on the
        # first presented frame, which looks exactly like the game freezing.
        native = NATIVE.read_text(encoding='utf-8')
        self.assertIn('std::mutex publishMutex;', native)
        self.assertIn('std::lock_guard publish(publishMutex);', native)
        # The callback is taken under the publish lock and called after it is gone.
        taken = native.index('notify = presentableFrame;')
        called = native.index('if (notify(notifyUser, frameWidth, frameHeight))')
        released = native.index('}', taken)
        self.assertLess(taken, released)
        self.assertLess(released, called, 'the callback must run with no lock held')

    def test_the_presenter_never_touches_a_freed_device(self):
        # The window outlives the translator's shutdown, so the device object is
        # kept alive and unpublished instead of deleted: a late present then finds
        # "nothing to present" rather than freed memory.
        native = NATIVE.read_text(encoding='utf-8')
        self.assertIn('std::unique_ptr<VulkanBackend> backendOwner;', native)
        self.assertIn('VulkanBackend* backend = nullptr;', native)
        self.assertIn('backendOwner->Shutdown();', native)
        self.assertNotIn('backend.reset();', native)
        # And the backend itself stops reporting a frame once its device is gone.
        backend = BACKEND.read_text(encoding='utf-8')
        shutdown = backend.index('void VulkanBackend::Shutdown()')
        self.assertIn('frameReady = false; frameWidth = frameHeight = 0;',
                      backend[shutdown:shutdown + 600])

    def test_a_guest_multisampled_target_is_drawn_and_counted_not_refused(self):
        # MSAA used to be a refusal, which means whole frames were thrown away for
        # a property that costs image quality and not correctness: this renderer
        # draws single-sample, so a multisampled target drawn once per pixel *is*
        # what the guest's own resolve produces. The decision lives in the policy
        # header and the backend must ask it rather than test the fields itself.
        policy = SURFACE_POLICY.read_text(encoding='utf-8')
        self.assertIn('if (samples > kMaxGuestSamples) return result;', policy)
        self.assertIn('kMaxGuestSamples = 2', policy)
        self.assertIn('SurfaceFidelity::Degraded', policy)
        frame = NATIVE_FRAME.read_text(encoding='utf-8')
        self.assertIn('AcceptColorSurface(s.samples,s.format)', frame)
        self.assertIn('AcceptDepthSurface(d.samples,d.format)', frame)
        self.assertIn('++nativeReport.colorMultisampled;', frame)
        self.assertIn('++nativeReport.depthFormatApproximated;', frame)
        # The descriptor mask has to admit the format field, or a non-default
        # format stays refused one check earlier than the policy that accepts it.
        self.assertIn('s.descriptor[1]&~kSurfaceInfoKnownBits', frame)
        self.assertIn('kSurfaceInfoKnownBits = 0xFFFu | (0xFu << 16)', policy)

    def test_every_refusal_says_what_it_refused_and_is_counted(self):
        # A refusal with no reason is a bug in the reporting: the run then says
        # how many draws failed and never what to fix.
        frame = NATIVE_FRAME.read_text(encoding='utf-8')
        self.assertIn('void NoteRefusal(const char* reason)', (ROOT / 'SonicGenerationsRecomp/gpu/vulkan_backend.h').read_text(encoding='utf-8'))
        self.assertIn('NoteRefusal(reason);', frame)
        self.assertIn('const char* reason = "the native frame was refused without a reason";', frame)
        self.assertIn('if(!validate(draw.targets,draw.state,draw.device)) return reject(reason);', frame)
        # The two refusals that will dominate a first run name the feature, so the
        # next step is readable off the report instead of guessed.
        self.assertIn('a draw into multiple colour targets (MRT) is not rendered yet', frame)
        self.assertIn('the colour surface has descriptor bits this renderer does not know', frame)

    def test_the_reports_carry_the_renderer_numbers(self):
        native = NATIVE.read_text(encoding='utf-8')
        self.assertIn('backendOwner->GetNativeRenderReport().Format()', native)
        self.assertIn('top_refusal=', native)
        self.assertIn('renderer_refusals=', native)
        # And the decision the C++ test exercises is built in every contract build,
        # including the GPU-free ones.
        cmake = CMAKE.read_text(encoding='utf-8')
        self.assertIn('add_test(NAME rex_native_surface_policy COMMAND rex_native_surface_policy_tests)', cmake)
        self.assertIn('tests/native_surface_policy_tests.cpp', cmake)

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
