#pragma once

#include <cstdint>
#include <filesystem>
#include <functional>
#include <string>

// ---------------------------------------------------------------------------
// Installer.
//
// Copies the Xbox 360 game files from a user-provided dump (an extracted
// folder or an ISO/XISO image) into the game directory and applies an
// optional title update (.xexp) to default.xex.
//
// This project does NOT ship any game data. You must own the game and dump
// it yourself (see docs/BUILDING.md).
// ---------------------------------------------------------------------------

struct InstallJournal
{
    enum class Result
    {
        Success,
        Cancelled,
        SourceNotFound,
        DefaultXexMissing,
        FileCopyFailed,
        PatchFailed,
        InvalidSource
    };

    uint64_t progressCounter = 0;
    uint64_t progressTotal = 0;
    Result lastResult = Result::Success;
    std::string lastErrorMessage;
};

struct Installer
{
    struct Input
    {
        // Folder containing default.xex, or an .iso/.xiso image.
        std::filesystem::path gameSource;
        // Optional title update (default.xexp). May be empty.
        std::filesystem::path updateSource;
    };

    using ProgressCallback = std::function<bool()>;

    // Returns true when a usable installation exists at `gameRoot`.
    // On success `modulePath` receives the path to default.xex.
    static bool checkGameInstall(const std::filesystem::path& gameRoot, std::filesystem::path& modulePath);

    // Installs/updates the game. Progress is reported through `journal`.
    static bool install(const Input& input, const std::filesystem::path& gameRoot,
        InstallJournal& journal, const ProgressCallback& callback = nullptr);
};
