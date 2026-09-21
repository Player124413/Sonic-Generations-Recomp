#pragma once

#include <kernel/xdm.h>
#include <filesystem>
#include <fstream>
#include <map>
#include <string>
#include <vector>

// Shared file/directory handle objects used by the NT file layer
// (kernel/io/nt_file.cpp) and the XFile-level helpers (file_system.cpp).

struct FileHandle : KernelObject
{
    std::fstream stream;
    std::filesystem::path path;

    // Directory enumeration state (NtQueryDirectoryFile).
    std::vector<std::string> dirEntries;
    size_t dirCursor = 0;
    bool dirScanActive = false;
};

struct FindHandle : KernelObject
{
    std::error_code ec;
    std::map<std::string, std::pair<size_t, bool>> searchResult; // name -> (size, isDirectory)
    decltype(searchResult)::iterator iterator;
};
