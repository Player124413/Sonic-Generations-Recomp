#include <stdafx.h>
#include <cpuid.h>
#include <apu/audio.h>
#include <apu/xma.h>
#include <cpu/guest_thread.h>
#include <gpu/video.h>
#include <hid/hid.h>
#include <install/installer.h>
#include <kernel/function.h>
#include <kernel/heap.h>
#include <kernel/memory.h>
#include <kernel/xam.h>
#include <kernel/xdbf.h>
#include <os/logger.h>
#include <os/process.h>
#include <ui/game_window.h>
#include <user/config.h>
#include <user/paths.h>

#include <file.h>
#include <xex.h>

// ---------------------------------------------------------------------------
// Sonic Generations (Xbox 360) recompilation runtime.
//
// Boot flow (mirrors Unleashed Recompiled):
//   1. Parse CLI, load config, optionally run the installer.
//   2. KiSystemStartup: heap init, mount game/save/DLC content roots.
//   3. LdrLoadModule: load default.xex image data into guest memory.
//   4. Start the guest at the XEX entry point on a recompiled PPC thread.
// ---------------------------------------------------------------------------

// XMA decoder MMIO window (reserved by the heap).
const size_t XMAIOBegin = 0x7FEA0000;
const size_t XMAIOEnd = XMAIOBegin + 0x0000FFFF;

Memory g_memory;
Heap g_userHeap;
XDBFWrapper g_xdbfWrapper;

void HostStartup()
{
#ifdef _WIN32
    CoInitializeEx(nullptr, COINIT_MULTITHREADED);
#endif

    hid::Init();
}

// Name inspired by NT's entry point.
void KiSystemStartup()
{
    if (g_memory.base == nullptr)
    {
        SDL_ShowSimpleMessageBox(SDL_MESSAGEBOX_ERROR, GameWindow::GetTitle(),
            "Failed to allocate guest memory (4 GiB).", GameWindow::s_pWindow);
        std::_Exit(1);
    }

    g_userHeap.Init();

    const auto gameContent = XamMakeContent(XCONTENTTYPE_RESERVED, "Game");
    const auto updateContent = XamMakeContent(XCONTENTTYPE_RESERVED, "Update");
    const std::string gamePath = (const char*)(GetGamePath() / "game").u8string().c_str();
    const std::string updatePath = (const char*)(GetGamePath() / "update").u8string().c_str();
    XamRegisterContent(gameContent, gamePath);
    XamRegisterContent(updateContent, updatePath);

    const auto saveFilePath = GetSaveFilePath();
    bool saveFileExists = std::filesystem::exists(saveFilePath);

    if (!saveFileExists)
    {
        // Copy base save data to modded save as fallback.
        std::error_code ec;
        std::filesystem::create_directories(saveFilePath.parent_path(), ec);

        if (!ec)
        {
            std::filesystem::copy_file(GetGamePath() / "save" / "SYS-DATA", saveFilePath, ec);
            saveFileExists = !ec;
        }
    }

    if (saveFileExists)
    {
        std::u8string savePathU8 = saveFilePath.parent_path().u8string();
        XamRegisterContent(XamMakeContent(XCONTENTTYPE_SAVEDATA, "SYS-DATA"), (const char*)savePathU8.c_str());
    }

    // Mount game
    XamContentCreateEx(0, "game", &gameContent, OPEN_EXISTING, nullptr, nullptr, 0, 0, nullptr);
    XamContentCreateEx(0, "update", &updateContent, OPEN_EXISTING, nullptr, nullptr, 0, 0, nullptr);

    // OS mounts game data to D:
    XamContentCreateEx(0, "D", &gameContent, OPEN_EXISTING, nullptr, nullptr, 0, 0, nullptr);

    std::error_code ec;
    for (auto& file : std::filesystem::directory_iterator(GetGamePath() / "dlc", ec))
    {
        if (file.is_directory())
        {
            std::u8string fileNameU8 = file.path().filename().u8string();
            std::u8string filePathU8 = file.path().u8string();
            XamRegisterContent(XamMakeContent(XCONTENTTYPE_DLC, (const char*)fileNameU8.c_str()), (const char*)filePathU8.c_str());
        }
    }

    XAudioInitializeSystem();
}

uint32_t LdrLoadModule(const std::filesystem::path& path)
{
    auto loadResult = LoadFile(path);
    if (loadResult.empty())
    {
        LOGFN_ERROR("Failed to load module: {}", path.string().c_str());
        assert(!"Failed to load module");
        return 0;
    }

    auto* header = reinterpret_cast<const Xex2Header*>(loadResult.data());
    auto* security = reinterpret_cast<const Xex2SecurityInfo*>(loadResult.data() + header->securityOffset);
    const auto* fileFormatInfo = reinterpret_cast<const Xex2OptFileFormatInfo*>(getOptHeaderPtr(loadResult.data(), XEX_HEADER_FILE_FORMAT_INFO));
    auto entry = *reinterpret_cast<const uint32_t*>(getOptHeaderPtr(loadResult.data(), XEX_HEADER_ENTRY_POINT));
    ByteSwapInplace(entry);

    auto srcData = loadResult.data() + header->headerSize;
    auto destData = reinterpret_cast<uint8_t*>(g_memory.Translate(security->loadAddress));

    if (fileFormatInfo->compressionType == XEX_COMPRESSION_NONE)
    {
        memcpy(destData, srcData, security->imageSize);
    }
    else if (fileFormatInfo->compressionType == XEX_COMPRESSION_BASIC)
    {
        auto* blocks = reinterpret_cast<const Xex2FileBasicCompressionBlock*>(fileFormatInfo + 1);
        const size_t numBlocks = (fileFormatInfo->infoSize / sizeof(Xex2FileBasicCompressionInfo)) - 1;

        for (size_t i = 0; i < numBlocks; i++)
        {
            memcpy(destData, srcData, blocks[i].dataSize);

            srcData += blocks[i].dataSize;
            destData += blocks[i].dataSize;

            memset(destData, 0, blocks[i].zeroSize);
            destData += blocks[i].zeroSize;
        }
    }
    else
    {
        assert(!"Unknown compression type.");
    }

    auto res = reinterpret_cast<const Xex2ResourceInfo*>(getOptHeaderPtr(loadResult.data(), XEX_HEADER_RESOURCE_INFO));

    g_xdbfWrapper = XDBFWrapper((uint8_t*)g_memory.Translate(res->offset.get()), res->sizeOfData);

    return entry;
}

#ifdef __x86_64__
__attribute__((constructor(101), target("no-avx,no-avx2"), noinline))
void init()
{
    uint32_t eax, ebx, ecx, edx;

    // Execute CPUID for processor info and feature bits.
    __get_cpuid(1, &eax, &ebx, &ecx, &edx);

    // Check for AVX support (the recompiled VMX code targets AVX).
    if ((ecx & (1 << 28)) == 0)
    {
        printf("[*] CPU does not support the AVX instruction set.\n");
        std::_Exit(1);
    }
}
#endif

static void PrintUsage()
{
    printf(
        "Sonic Generations (Xbox 360) Recompiled\n"
        "\n"
        "Usage:\n"
        "  SonicGenerationsRecomp                 Launch the game\n"
        "  SonicGenerationsRecomp --install <src> Install game files from a folder or .iso\n"
        "  SonicGenerationsRecomp --update <xexp> Title update to apply with --install\n"
        "  SonicGenerationsRecomp --check          Verify the installation\n"
        "\n"
        "You must own the game. No game data is included with this project.\n");
}

int main(int argc, char* argv[])
{
#ifdef _WIN32
    timeBeginPeriod(1);
#endif

    // Preserve diagnostics when stdout is redirected and the guest crashes.
    std::setvbuf(stdout, nullptr, _IONBF, 0);
    os::logger::Init();

    bool forceInstall = false;
    bool forceCheck = false;
    const char* installSource = nullptr;
    const char* updateSource = nullptr;
    const char* sdlVideoDriver = nullptr;

    for (uint32_t i = 1; i < argc; i++)
    {
        if (strcmp(argv[i], "--install") == 0 && (i + 1) < argc)
        {
            forceInstall = true;
            installSource = argv[++i];
        }
        else if (strcmp(argv[i], "--update") == 0 && (i + 1) < argc)
        {
            updateSource = argv[++i];
        }
        else if (strcmp(argv[i], "--check") == 0)
        {
            forceCheck = true;
        }
        else if (strcmp(argv[i], "--sdl-video-driver") == 0 && (i + 1) < argc)
        {
            sdlVideoDriver = argv[++i];
        }
        else if (strcmp(argv[i], "--help") == 0 || strcmp(argv[i], "-h") == 0)
        {
            PrintUsage();
            return 0;
        }
    }

    {
        // Set the current working directory to the executable's path.
        std::error_code ec;
        std::filesystem::current_path(g_executableRoot, ec);
    }

    Config::Load();

    std::filesystem::path modulePath;
    bool isGameInstalled = Installer::checkGameInstall(GetGamePath(), modulePath);

    if (forceCheck)
    {
        if (isGameInstalled)
        {
            printf("Installation OK: %s\n", modulePath.string().c_str());
            return 0;
        }

        printf("Game is not installed. Run with --install <path to dump/iso>.\n");
        return 1;
    }

    if (forceInstall || !isGameInstalled)
    {
        if (!forceInstall)
        {
            PrintUsage();
            printf("\nGame files not found at '%s'.\n", GetGamePath().string().c_str());
            return 1;
        }

        Installer::Input input;
        input.gameSource = installSource;
        if (updateSource)
            input.updateSource = updateSource;

        InstallJournal journal;
        printf("Installing game files from '%s'...\n", input.gameSource.string().c_str());

        if (!Installer::install(input, GetGamePath(), journal))
        {
            printf("Installation failed (%d): %s\n", int(journal.lastResult), journal.lastErrorMessage.c_str());
            return 1;
        }

        printf("Installation complete.\n");
        isGameInstalled = Installer::checkGameInstall(GetGamePath(), modulePath);
        if (!isGameInstalled)
            return 1;
    }

    HostStartup();
    GameWindow::Init(sdlVideoDriver);
    KiSystemStartup();

    if (!Video::Init())
    {
        LOGN_ERROR("Failed to initialise the render backend.");
        std::_Exit(1);
    }

    xma::Init();

    uint32_t entry = LdrLoadModule(modulePath);
    LOGFN("Entry point: 0x{:08X}", entry);

    GuestThread::Start({ entry, 0, 0 });

    return 0;
}
