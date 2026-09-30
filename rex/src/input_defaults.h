#pragma once
#include <cstdint>

namespace sonic::rex_host {

struct InputDefaultsReport {
    uint32_t applied = 0;        // our value won because nothing else was chosen
    uint32_t kept_explicit = 0;  // the user already set it; left untouched
    uint32_t rejected = 0;       // the SDK refused the name or the value
};

/// Enables the SDK's keyboard/mouse pad emulation and applies the layout in
/// kKeyboardDefaults, but never overrides a setting the user already chose in
/// assets/rex-runtime.toml, a REX_* environment variable, the command line, or
/// the F4 overlay. Must run before the SDK builds the input system, i.e. from
/// ReXApp::OnPreSetup.
InputDefaultsReport ApplyKeyboardInputDefaults();

/// True when the keyboard driver is enabled, so the game will see a pad.
bool KeyboardInputEnabled();

} // namespace sonic::rex_host
