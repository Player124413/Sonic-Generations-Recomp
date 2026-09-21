#include <stdafx.h>
#include <user/config.h>
#include <user/paths.h>

#include <fstream>
#include <sstream>

namespace Config
{
    ConfigValue<EGraphicsBackend> GraphicsBackend(EGraphicsBackend::Null);
    ConfigValue<uint32_t> WindowWidth(1280);
    ConfigValue<uint32_t> WindowHeight(720);
    ConfigValue<bool> Fullscreen(false);

    ConfigValue<EChannelConfiguration> ChannelConfiguration(EChannelConfiguration::Stereo);
    ConfigValue<float> MasterVolume(1.0f);

    ConfigValue<bool> AllowBackgroundInput(false);
    ConfigValue<bool> Vibration(true);
    ConfigValue<SDL_Scancode> Key_A(SDL_SCANCODE_S);
    ConfigValue<SDL_Scancode> Key_B(SDL_SCANCODE_D);
    ConfigValue<SDL_Scancode> Key_X(SDL_SCANCODE_A);
    ConfigValue<SDL_Scancode> Key_Y(SDL_SCANCODE_W);
    ConfigValue<SDL_Scancode> Key_DPadUp(SDL_SCANCODE_UNKNOWN);
    ConfigValue<SDL_Scancode> Key_DPadDown(SDL_SCANCODE_UNKNOWN);
    ConfigValue<SDL_Scancode> Key_DPadLeft(SDL_SCANCODE_UNKNOWN);
    ConfigValue<SDL_Scancode> Key_DPadRight(SDL_SCANCODE_UNKNOWN);
    ConfigValue<SDL_Scancode> Key_Start(SDL_SCANCODE_RETURN);
    ConfigValue<SDL_Scancode> Key_Back(SDL_SCANCODE_BACKSPACE);
    ConfigValue<SDL_Scancode> Key_LeftTrigger(SDL_SCANCODE_1);
    ConfigValue<SDL_Scancode> Key_RightTrigger(SDL_SCANCODE_3);
    ConfigValue<SDL_Scancode> Key_LeftBumper(SDL_SCANCODE_Q);
    ConfigValue<SDL_Scancode> Key_RightBumper(SDL_SCANCODE_E);
    ConfigValue<SDL_Scancode> Key_LeftStickUp(SDL_SCANCODE_UP);
    ConfigValue<SDL_Scancode> Key_LeftStickDown(SDL_SCANCODE_DOWN);
    ConfigValue<SDL_Scancode> Key_LeftStickLeft(SDL_SCANCODE_LEFT);
    ConfigValue<SDL_Scancode> Key_LeftStickRight(SDL_SCANCODE_RIGHT);
    ConfigValue<SDL_Scancode> Key_RightStickUp(SDL_SCANCODE_UNKNOWN);
    ConfigValue<SDL_Scancode> Key_RightStickDown(SDL_SCANCODE_UNKNOWN);
    ConfigValue<SDL_Scancode> Key_RightStickLeft(SDL_SCANCODE_UNKNOWN);
    ConfigValue<SDL_Scancode> Key_RightStickRight(SDL_SCANCODE_UNKNOWN);

    ConfigValue<ELanguage> Language(ELanguage::English);
    ConfigValue<uint32_t> FPSLimit(60);

    // ------------------------------------------------------------------------
    // serialisation helpers
    // ------------------------------------------------------------------------

    template <typename T, typename = void>
    struct ValueIO
    {
        static void Write(std::ostream& out, const T& value) { out << value; }
        static bool Read(const std::string& text, T& value)
        {
            std::istringstream stream(text);
            stream >> value;
            return !stream.fail();
        }
    };

    template <>
    struct ValueIO<bool>
    {
        static void Write(std::ostream& out, const bool& value) { out << (value ? "true" : "false"); }
        static bool Read(const std::string& text, bool& value)
        {
            if (text == "true" || text == "1") { value = true; return true; }
            if (text == "false" || text == "0") { value = false; return true; }
            return false;
        }
    };

    template <typename E>
    struct ValueIO<E, std::enable_if_t<std::is_enum_v<E>>>
    {
        static void Write(std::ostream& out, const E& value) { out << uint32_t(value); }
        static bool Read(const std::string& text, E& value)
        {
            uint32_t raw{};
            std::istringstream stream(text);
            stream >> raw;
            if (stream.fail())
                return false;
            value = E(raw);
            return true;
        }
    };

    struct Entry
    {
        const char* section;
        const char* name;
        void* target;
        void (*write)(std::ostream&, const void*);
        void (*read)(const std::string&, void*);
    };

    template <typename T>
    Entry MakeEntry(const char* section, const char* name, ConfigValue<T>& value)
    {
        return {
            section, name, &value,
            [](std::ostream& out, const void* target)
            {
                ValueIO<T>::Write(out, static_cast<const ConfigValue<T>*>(target)->Value);
            },
            [](const std::string& text, void* target)
            {
                T parsed{};
                if (ValueIO<T>::Read(text, parsed))
                    static_cast<ConfigValue<T>*>(target)->Value = parsed;
            },
        };
    }

    static std::vector<Entry> BuildEntries()
    {
        return {
            MakeEntry("Video", "GraphicsBackend", GraphicsBackend),
            MakeEntry("Video", "WindowWidth", WindowWidth),
            MakeEntry("Video", "WindowHeight", WindowHeight),
            MakeEntry("Video", "Fullscreen", Fullscreen),

            MakeEntry("Audio", "ChannelConfiguration", ChannelConfiguration),
            MakeEntry("Audio", "MasterVolume", MasterVolume),

            MakeEntry("Input", "AllowBackgroundInput", AllowBackgroundInput),
            MakeEntry("Input", "Vibration", Vibration),
            MakeEntry("Bindings", "Key_A", Key_A),
            MakeEntry("Bindings", "Key_B", Key_B),
            MakeEntry("Bindings", "Key_X", Key_X),
            MakeEntry("Bindings", "Key_Y", Key_Y),
            MakeEntry("Bindings", "Key_DPadUp", Key_DPadUp),
            MakeEntry("Bindings", "Key_DPadDown", Key_DPadDown),
            MakeEntry("Bindings", "Key_DPadLeft", Key_DPadLeft),
            MakeEntry("Bindings", "Key_DPadRight", Key_DPadRight),
            MakeEntry("Bindings", "Key_Start", Key_Start),
            MakeEntry("Bindings", "Key_Back", Key_Back),
            MakeEntry("Bindings", "Key_LeftTrigger", Key_LeftTrigger),
            MakeEntry("Bindings", "Key_RightTrigger", Key_RightTrigger),
            MakeEntry("Bindings", "Key_LeftBumper", Key_LeftBumper),
            MakeEntry("Bindings", "Key_RightBumper", Key_RightBumper),
            MakeEntry("Bindings", "Key_LeftStickUp", Key_LeftStickUp),
            MakeEntry("Bindings", "Key_LeftStickDown", Key_LeftStickDown),
            MakeEntry("Bindings", "Key_LeftStickLeft", Key_LeftStickLeft),
            MakeEntry("Bindings", "Key_LeftStickRight", Key_LeftStickRight),
            MakeEntry("Bindings", "Key_RightStickUp", Key_RightStickUp),
            MakeEntry("Bindings", "Key_RightStickDown", Key_RightStickDown),
            MakeEntry("Bindings", "Key_RightStickLeft", Key_RightStickLeft),
            MakeEntry("Bindings", "Key_RightStickRight", Key_RightStickRight),

            MakeEntry("Game", "Language", Language),
            MakeEntry("Game", "FPSLimit", FPSLimit),
        };
    }

    std::string Load()
    {
        std::string path = (GetUserPath() / "config.toml").string();

        std::ifstream in(path);
        if (!in)
            return path;

        auto entries = BuildEntries();
        std::unordered_map<std::string, Entry*> map;
        for (auto& entry : entries)
            map[std::string(entry.section) + "." + entry.name] = &entry;

        std::string line;
        std::string section;
        while (std::getline(in, line))
        {
            // strip comments
            if (auto hash = line.find('#'); hash != std::string::npos)
                line = line.substr(0, hash);

            // trim
            auto begin = line.find_first_not_of(" \t\r\n");
            auto end = line.find_last_not_of(" \t\r\n");
            if (begin == std::string::npos)
                continue;
            line = line.substr(begin, end - begin + 1);

            if (line.front() == '[' && line.back() == ']')
            {
                section = line.substr(1, line.size() - 2);
                continue;
            }

            auto equals = line.find('=');
            if (equals == std::string::npos)
                continue;

            std::string name = line.substr(0, equals);
            std::string value = line.substr(equals + 1);

            auto trimSmall = [](std::string& text)
            {
                auto b = text.find_first_not_of(" \t");
                auto e = text.find_last_not_of(" \t");
                text = (b == std::string::npos) ? std::string() : text.substr(b, e - b + 1);
            };

            trimSmall(name);
            trimSmall(value);

            // strip optional quotes
            if (value.size() >= 2 && value.front() == '"' && value.back() == '"')
                value = value.substr(1, value.size() - 2);

            auto found = map.find(section + "." + name);
            if (found != map.end())
                found->second->read(value, found->second->target);
        }

        // Sanity clamps.
        if (FPSLimit < FPS_MIN)
            FPSLimit = FPS_MIN;
        if (FPSLimit > FPS_MAX)
            FPSLimit = FPS_MAX;
        if (MasterVolume < 0.0f)
            MasterVolume = 0.0f;
        if (MasterVolume > 1.0f)
            MasterVolume = 1.0f;

        return path;
    }

    void Save()
    {
        std::string path = (GetUserPath() / "config.toml").string();

        std::ofstream out(path, std::ios::trunc);
        if (!out)
            return;

        auto entries = BuildEntries();

        const char* currentSection = "";
        for (auto& entry : entries)
        {
            if (strcmp(currentSection, entry.section) != 0)
            {
                if (*currentSection)
                    out << "\n";
                out << "[" << entry.section << "]\n";
                currentSection = entry.section;
            }

            out << entry.name << " = ";
            entry.write(out, entry.target);
            out << "\n";
        }
    }
}
