import importlib.util
from pathlib import Path
import tempfile
import unittest

spec = importlib.util.spec_from_file_location("loader_patch", Path(__file__).parents[1] / "patches/pin_gpu_plugin_lifetime.py")
patch = importlib.util.module_from_spec(spec)
spec.loader.exec_module(patch)


class LoaderPatchTests(unittest.TestCase):
    def test_exact_and_idempotent(self):
        with tempfile.TemporaryDirectory() as root:
            path = Path(root) / "src/system/gpu_plugin_loader.cpp"
            path.parent.mkdir(parents=True)
            path.write_text("prefix\n" + patch.BEFORE + "\nsuffix")
            self.assertTrue(patch.apply(root))
            self.assertEqual(path.read_text(), "prefix\n" + patch.AFTER + "\nsuffix")
            self.assertFalse(patch.apply(root))

    def test_reject_drift(self):
        with tempfile.TemporaryDirectory() as root:
            path = Path(root) / "src/system/gpu_plugin_loader.cpp"
            path.parent.mkdir(parents=True)
            path.write_text("different SDK version")
            with self.assertRaises(ValueError):
                patch.apply(root)
            self.assertEqual(path.read_text(), "different SDK version")


if __name__ == "__main__":
    unittest.main()
