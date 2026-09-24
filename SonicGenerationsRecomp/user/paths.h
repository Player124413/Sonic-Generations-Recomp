#pragma once

#include <filesystem>

extern std::filesystem::path g_executableRoot;

std::filesystem::path BuildUserPath();
const std::filesystem::path& GetUserPath();

inline std::filesystem::path GetGamePath()
{
    // Never embed a build runner's source directory in a distributed binary.
    // Game resources, configuration and saves live in assets beside the EXE.
    return GetUserPath();
}

inline std::filesystem::path GetSavePath([[maybe_unused]] bool checkForMods = false)
{
    return GetUserPath() / "save";
}

// Returned file name may not necessarily be equal to SYS-DATA.
inline std::filesystem::path GetSaveFilePath()
{
    return GetSavePath() / "SYS-DATA";
}
