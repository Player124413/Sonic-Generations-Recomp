#pragma once

#include <filesystem>

#define USER_DIRECTORY "SonicGenerationsRecomp"

extern std::filesystem::path g_executableRoot;

bool CheckPortable();
std::filesystem::path BuildUserPath();
const std::filesystem::path& GetUserPath();

inline std::filesystem::path GetGamePath()
{
    // Never embed a build runner's source directory in a distributed binary.
    // portable.txt selects the executable directory; otherwise use user storage.
    return GetUserPath();
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
