#pragma once

#include <filesystem>

#define USER_DIRECTORY "SonicGenerationsRecomp"

#ifndef GAME_INSTALL_DIRECTORY
#define GAME_INSTALL_DIRECTORY "."
#endif

extern std::filesystem::path g_executableRoot;

bool CheckPortable();
std::filesystem::path BuildUserPath();
const std::filesystem::path& GetUserPath();

inline std::filesystem::path GetGamePath()
{
#ifdef __APPLE__
    // On macOS the app bundle itself must not be modified, so game files
    // are installed to the user directory instead of next to the app.
    return GetUserPath();
#else
    return GAME_INSTALL_DIRECTORY;
#endif
}

inline std::filesystem::path GetSavePath(bool checkForMods = false)
{
    return GetUserPath() / "save";
}

// Returned file name may not necessarily be equal to SYS-DATA.
inline std::filesystem::path GetSaveFilePath()
{
    return GetSavePath() / "SYS-DATA";
}
