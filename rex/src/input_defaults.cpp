#include "input_defaults.h"
#include "host_policy.h"
#include <cstdio>
#include <string>
#include <rex/cvar.h>

namespace sonic::rex_host {
namespace {

// A value the user chose is stored under a higher-priority source than the
// compiled-in default. Setting those would silently discard their choice,
// because a runtime write outranks the config file.
bool ChosenByUser(std::string_view name) {
    return rex::cvar::GetFlagSource(std::string(name)) != rex::cvar::Source::kDefault;
}

} // namespace

bool KeyboardInputEnabled() {
    return rex::cvar::GetFlagByName("mnk_mode") == "true";
}

InputDefaultsReport ApplyKeyboardInputDefaults() {
    InputDefaultsReport report;
    for (const auto& entry : kKeyboardDefaults) {
        if (ChosenByUser(entry.name)) {
            ++report.kept_explicit;
            continue;
        }
        if (!rex::cvar::SetFlagByName(entry.name, entry.value)) {
            // A missing name means the pinned SDK no longer exposes it, so the
            // layout is broken rather than merely unused. Say so instead of
            // letting the player discover it with a dead key.
            ++report.rejected;
            std::fprintf(stderr, "[input] Rejected %.*s = %.*s (%s); this SDK build does not accept it\n",
                         int(entry.name.size()), entry.name.data(), int(entry.value.size()),
                         entry.value.data(), std::string(entry.purpose).c_str());
            continue;
        }
        ++report.applied;
    }
    std::fprintf(stderr,
                 "[input] Keyboard pad emulation %s: applied %u default(s), kept %u explicit, "
                 "%u rejected\n",
                 KeyboardInputEnabled() ? "enabled" : "disabled", report.applied,
                 report.kept_explicit, report.rejected);
    if (!KeyboardInputEnabled()) {
        std::fputs("[input] Keyboard control is off. Set mnk_mode = true in "
                   "assets/rex-runtime.toml to turn it on.\n",
                   stderr);
    } else {
        std::fputs("[input] Move: WASD or arrows | Jump: Space | Start: Enter | Back: Backspace | "
                   "Camera: IJKL | Rebind in game with F4\n",
                   stderr);
    }
    return report;
}

} // namespace sonic::rex_host
