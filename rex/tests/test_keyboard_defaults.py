"""Guards the keyboard defaults before the Windows build ever runs.

The SDK accepts key names it knows and rejects the rest, so a typo in a binding
is a dead key for the player. Parsing the table here keeps that visible without
a Windows machine, a window or a pad.
"""
import re
import unittest
from pathlib import Path

ROOT = Path(__file__).resolve().parents[2]
HEADER = ROOT / 'rex/src/host_policy.h'

# Names accepted by rex::ui::ParseVirtualKey in the pinned SDK.
NAMED_KEYS = {
    'Backspace', 'Tab', 'Return', 'Shift', 'Control', 'Escape', 'Space', 'Backtick',
    'Up', 'Down', 'Left', 'Right', 'Insert', 'Delete', 'Home', 'End', 'PageUp', 'PageDown',
}
MODIFIERS = {'Shift', 'Ctrl', 'Control', 'Alt'}
RESERVED = {'F3', 'F4', 'F7', 'Backtick'}


def parse_defaults():
    text = HEADER.read_text()
    block = re.search(r'kKeyboardDefaults\[\] = \{(.*?)\n\};', text, re.S)
    assert block, 'kKeyboardDefaults table is missing'
    entries = []
    for name, value, purpose in re.findall(
            r'\{"([a-z_0-9]+)",\s*"([^"]*)",\s*"([^"]*)"\}', block[1]):
        entries.append((name, value, purpose))
    return entries


def tokens(value):
    return [token.strip() for token in value.split(',') if token.strip()]


def bare(token):
    return token.split('+')[-1]


class KeyboardDefaultsTests(unittest.TestCase):
    def setUp(self):
        self.defaults = dict((name, value) for name, value, _ in parse_defaults())

    def test_table_is_parsed_and_not_empty(self):
        self.assertGreater(len(self.defaults), 10)
        self.assertEqual(self.defaults.get('mnk_mode'), 'true')

    def test_every_key_name_is_known_to_the_sdk(self):
        for name, value in self.defaults.items():
            if name == 'mnk_mode':
                continue
            for token in tokens(value):
                head = token.split('+')[0]
                if head in MODIFIERS:
                    token = token.split('+', 1)[1]
                with self.subTest(binding=name, token=token):
                    self.assertTrue(re.fullmatch(r'[A-Z]', token) or re.fullmatch(r'[0-9]', token)
                                    or token in NAMED_KEYS, f'{token} is not a known key name')

    def test_gameplay_never_steals_a_reserved_ui_key(self):
        for name, value in self.defaults.items():
            if name == 'mnk_mode':
                continue
            for token in tokens(value):
                self.assertNotIn(bare(token), RESERVED, f'{name} takes {token}')

    def test_no_key_fires_two_actions_at_once(self):
        # A modifier-less key bound to two actions always fires both. The d-pad
        # shares the arrow keys with the left stick, but only under Shift, which
        # the driver matches exactly.
        owners = {}
        for name, value in self.defaults.items():
            if name == 'mnk_mode' or '+ ' in value:
                continue
            for token in tokens(value):
                if '+' in token:
                    continue
                owners.setdefault(token, []).append(name)
        clashes = {key: names for key, names in owners.items() if len(names) > 1}
        self.assertEqual(clashes, {})

    def test_essential_controls_are_reachable_from_the_keyboard(self):
        for binding in ('keybind_lstick_up', 'keybind_lstick_down', 'keybind_lstick_left',
                        'keybind_lstick_right', 'keybind_a', 'keybind_start', 'keybind_back',
                        'keybind_rstick_left', 'keybind_rstick_right'):
            with self.subTest(binding=binding):
                self.assertTrue(tokens(self.defaults.get(binding, '')), f'{binding} has no keys')

    def test_movement_accepts_wasd_and_arrows(self):
        self.assertIn('W', tokens(self.defaults['keybind_lstick_up']))
        self.assertIn('Up', tokens(self.defaults['keybind_lstick_up']))
        self.assertIn('Left', tokens(self.defaults['keybind_lstick_left']))
        self.assertIn('A', tokens(self.defaults['keybind_lstick_left']))

    def test_jump_and_confirm_are_space(self):
        self.assertIn('Space', tokens(self.defaults['keybind_a']))

    def test_layout_is_applied_before_the_input_system_exists(self):
        app = (ROOT / 'rex/src/sonic_app.h').read_text()
        call = app.index('ApplyKeyboardInputDefaults()')
        # Runtime::Setup builds the input system from config_; OnPreSetup runs
        # before that, and nothing may clear the plugin/graphics afterwards.
        self.assertIn('void OnPreSetup(rex::RuntimeConfig& config) override', app)
        self.assertLess(call, app.index('LoadGpuPlugin'))

    def test_defaults_never_override_an_explicit_choice(self):
        source = (ROOT / 'rex/src/input_defaults.cpp').read_text()
        self.assertIn('rex::cvar::GetFlagSource', source)
        self.assertIn('rex::cvar::Source::kDefault', source)
        self.assertNotIn('REXCVAR_SET', source)  # direct writes would skip precedence


if __name__ == '__main__':
    unittest.main()
