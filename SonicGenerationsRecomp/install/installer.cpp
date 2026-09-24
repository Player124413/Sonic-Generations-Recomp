#include <stdafx.h>
#include "installer.h"
#include <algorithm>
#include <cctype>
#include "iso_file_system.h"
#include <os/logger.h>
#include <xex_patcher.h>

bool Installer::checkGameInstall(const std::filesystem::path& gameRoot, std::filesystem::path& modulePath)
{
    std::error_code ec;
    auto xex = gameRoot / "default.xex";
    if (std::filesystem::exists(xex, ec))
    {
        modulePath = xex;
        return true;
    }

    return false;
}

bool Installer::install(const Input& input, const std::filesystem::path& gameRoot,
    InstallJournal& journal, const ProgressCallback& callback)
{
    std::error_code ec;

    if (!std::filesystem::exists(input.gameSource, ec))
    {
        journal.lastResult = InstallJournal::Result::SourceNotFound;
        journal.lastErrorMessage = input.gameSource.string();
        return false;
    }

    auto extension = input.gameSource.extension().string();
    std::transform(extension.begin(), extension.end(), extension.begin(),
        [](unsigned char c) { return char(std::tolower(c)); });
    bool isImage = extension == ".iso" || extension == ".xiso";

    if (isImage)
    {
        auto iso = ISOFileSystem::create(input.gameSource);
        if (!iso || iso->empty())
        {
            journal.lastResult = InstallJournal::Result::InvalidSource;
            journal.lastErrorMessage = "Failed to open ISO image.";
            return false;
        }

        for (const auto& [path, entry] : iso->fileMap)
        {
            if (callback && !callback())
            {
                journal.lastResult = InstallJournal::Result::Cancelled;
                return false;
            }

            size_t size = std::get<1>(entry);
            std::vector<uint8_t> data(size);
            if (size && !iso->load(path, data.data(), size))
            {
                journal.lastResult = InstallJournal::Result::FileCopyFailed;
                journal.lastErrorMessage = path;
                return false;
            }

            auto destination = gameRoot / path;
            std::filesystem::create_directories(destination.parent_path(), ec);

            std::ofstream out(destination, std::ios::binary | std::ios::trunc);
            if (!out)
            {
                journal.lastResult = InstallJournal::Result::FileCopyFailed;
                journal.lastErrorMessage = destination.string();
                return false;
            }

            out.write((const char*)data.data(), data.size());
            journal.progressCounter += size;
        }
    }
    else
    {
        for (auto it = std::filesystem::recursive_directory_iterator(input.gameSource, ec);
            it != std::filesystem::recursive_directory_iterator(); it.increment(ec))
        {
            if (callback && !callback())
            {
                journal.lastResult = InstallJournal::Result::Cancelled;
                return false;
            }

            auto relative = std::filesystem::relative(it->path(), input.gameSource, ec);
            auto destination = gameRoot / relative;

            if (it->is_directory(ec))
            {
                std::filesystem::create_directories(destination, ec);
                continue;
            }

            std::filesystem::create_directories(destination.parent_path(), ec);
            std::filesystem::copy_file(it->path(), destination,
                std::filesystem::copy_options::overwrite_existing, ec);

            if (ec)
            {
                journal.lastResult = InstallJournal::Result::FileCopyFailed;
                journal.lastErrorMessage = ec.message();
                return false;
            }

            journal.progressCounter += std::filesystem::file_size(it->path(), ec);
        }
    }

    // Validate the executable.
    auto xexPath = gameRoot / "default.xex";
    if (!std::filesystem::exists(xexPath, ec))
    {
        journal.lastResult = InstallJournal::Result::DefaultXexMissing;
        journal.lastErrorMessage = xexPath.string();
        return false;
    }

    // Apply title update if provided.
    if (!input.updateSource.empty())
    {
        auto patchPath = input.updateSource;

        std::ifstream xexFile(xexPath, std::ios::binary);
        std::vector<uint8_t> xexBytes((std::istreambuf_iterator<char>(xexFile)), {});

        std::ifstream patchFile(patchPath, std::ios::binary);
        std::vector<uint8_t> patchBytes((std::istreambuf_iterator<char>(patchFile)), {});

        std::vector<uint8_t> patchedBytes;
        if (XexPatcher::apply(xexBytes.data(), xexBytes.size(), patchBytes.data(),
            patchBytes.size(), patchedBytes, true) != XexPatcher::Result::Success)
        {
            journal.lastResult = InstallJournal::Result::PatchFailed;
            journal.lastErrorMessage = patchPath.string();
            return false;
        }

        std::ofstream patched(xexPath, std::ios::binary | std::ios::trunc);
        patched.write((const char*)patchedBytes.data(), patchedBytes.size());
    }

    journal.lastResult = InstallJournal::Result::Success;
    return true;
}
