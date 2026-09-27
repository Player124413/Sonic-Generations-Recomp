"""Keep the package path from regressing to the official D3D12-only ZIP."""
from pathlib import Path
import json
import unittest

ROOT = Path(__file__).resolve().parents[2]


class VulkanSdkGateTests(unittest.TestCase):
    def test_recipe(self):
        pins = json.loads((ROOT / "rex/dependencies.json").read_text())["sdk"]
        self.assertEqual(pins["windows_cmake_options"], {"REXGLUE_USE_VULKAN": "ON", "REXGLUE_USE_D3D12": "OFF"})
        workflow = (ROOT / ".github/workflows/windows-rexglue.yml").read_text()
        self.assertIn("-DREXGLUE_USE_VULKAN=ON -DREXGLUE_USE_D3D12=OFF", workflow)
        self.assertNotIn("Invoke-WebRequest $url -OutFile sdk.zip", workflow)
        self.assertLess(workflow.index("& ./package-rex/rex_vulkan_plugin_tests.exe"),
                        workflow.index("uses: actions/upload-artifact@"))

    def test_factory_not_only_help(self):
        source = (ROOT / "rex/tests/vulkan_plugin_tests.cpp").read_text()
        self.assertIn('LoadGpuPlugin("xenos", "vulkan")', source)
        self.assertIn("if (!graphics)", source)
        cmake = (ROOT / "rex/CMakeLists.txt").read_text()
        self.assertIn("if(NOT REXGLUE_USE_VULKAN)", cmake)
        self.assertIn("add_test(NAME rex_vulkan_plugin COMMAND rex_vulkan_plugin_tests)", cmake)


if __name__ == "__main__":
    unittest.main()
