#include "../SonicGenerationsRecomp/user/paths.h"
#include <chrono>
#include <fstream>
#include <iostream>

int main(int argc, char** argv)
{
    namespace fs = std::filesystem;
    const auto originalCwd = fs::current_path();
    const auto originalRoot = g_executableRoot;
    const auto temporary = fs::temp_directory_path() /
        ("sonic-paths-" + std::to_string(std::chrono::steady_clock::now().time_since_epoch().count()));
    int failures = 0;
    auto check = [&](bool value, const char* name) {
        if (!value) { std::cerr << "FAIL: " << name << '\n'; ++failures; }
    };
    try
    {
        check(argc > 0 && fs::equivalent(originalRoot, fs::absolute(argv[0]).parent_path()),
            "root is the executable directory");
        fs::create_directories(temporary / "runtime with spaces");
        fs::create_directories(temporary / "other working directory");
        g_executableRoot = temporary / "runtime with spaces";
        fs::current_path(temporary / "other working directory");
        const auto expected = g_executableRoot / "assets";
        check(BuildUserPath() == expected, "assets beside runtime, not CWD");
        check(GetUserPath() == expected, "user data path");
        check(GetGamePath() == expected, "game path");
        check(GetSavePath() == expected / "save", "save directory");
        check(GetSaveFilePath() == expected / "save" / "SYS-DATA", "save file");
        std::ofstream(g_executableRoot / "portable.txt").close();
        check(BuildUserPath() == expected, "legacy marker does not change path");
        fs::current_path(temporary);
        check(GetGamePath() == expected, "changing CWD does not change game path");
        check(!fs::exists(expected), "path queries do not create or migrate data");
    }
    catch (const std::exception& error)
    {
        std::cerr << error.what() << '\n';
        ++failures;
    }
    fs::current_path(originalCwd);
    g_executableRoot = originalRoot;
    fs::remove_all(temporary);
    return failures ? 1 : 0;
}
