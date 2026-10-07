"""Keep the package path from regressing to the official D3D12-only ZIP."""
from pathlib import Path
import json
import unittest

ROOT = Path(__file__).resolve().parents[2]


class VulkanSdkGateTests(unittest.TestCase):
    def test_recipe(self):
        pins = json.loads((ROOT / "rex/dependencies.json").read_text(encoding='utf-8'))["sdk"]
        self.assertEqual(pins["windows_cmake_options"], {"REXGLUE_USE_VULKAN": "ON", "REXGLUE_USE_D3D12": "OFF"})
        workflow = (ROOT / ".github/workflows/windows-rexglue.yml").read_text(encoding='utf-8')
        self.assertIn("-DREXGLUE_USE_VULKAN=ON -DREXGLUE_USE_D3D12=OFF", workflow)
        self.assertNotIn("Invoke-WebRequest $url -OutFile sdk.zip", workflow)
        # The probe of the packaged plugin runs before the package is uploaded,
        # and it runs through Start-Process so that a probe whose exit code is
        # checked cannot become the step's own exit code.
        probe = "Start-Process -FilePath ./package-rex/rex_vulkan_plugin_tests.exe"
        self.assertIn(probe, workflow)
        self.assertLess(workflow.index(probe),
                        workflow.index("name: windows-x64-rexglue-reference-candidate"))

    def test_runtime_failure_is_not_replaced_by_a_teardown_assumption(self):
        workflow = (ROOT / ".github/workflows/windows-rexglue.yml").read_text(encoding='utf-8')
        self.assertNotIn("$baselineExit", workflow)
        self.assertNotIn("pin_gpu_plugin_lifetime.py", workflow)
        self.assertIn("ctest --test-dir build-rex-contract", workflow)
        self.assertIn("steps.contracts.outcome == 'failure'", workflow)
        self.assertLess(workflow.index("uses: actions/cache/save@"), workflow.index("id: contracts"))

    def test_probe_uses_the_wide_crt_required_by_sdk_paths(self):
        source = (ROOT / "rex/tests/vulkan_plugin_tests.cpp").read_text(encoding='utf-8')
        self.assertIn("int wmain()", source)
        self.assertNotIn("int main()", source)
        self.assertIn("GetModuleFileNameW", source)
        self.assertIn("rex::filesystem::GetExecutablePath()", source)
        self.assertNotIn("_set_invalid_parameter_handler", source)

    def test_factory_not_only_help(self):
        source = (ROOT / "rex/tests/vulkan_plugin_tests.cpp").read_text(encoding='utf-8')
        self.assertIn('LoadGpuPlugin("xenos", "vulkan")', source)
        self.assertIn("if (!graphics)", source)
        cmake = (ROOT / "rex/CMakeLists.txt").read_text(encoding='utf-8')
        self.assertIn("if(NOT REXGLUE_USE_VULKAN)", cmake)
        self.assertIn("add_test(NAME rex_vulkan_plugin COMMAND rex_vulkan_plugin_tests)", cmake)


if __name__ == "__main__":
    unittest.main()
