#include <stdafx.h>
#include "file_handle.h"
#include "file_system.h"
#include <cpu/ppc_context.h>
#include <kernel/function.h>
#include <kernel/heap.h>
#include <kernel/memory.h>
#include <kernel/xdm.h>
#include <os/logger.h>

#undef STATUS_SUCCESS
static constexpr uint32_t STATUS_SUCCESS = 0x00000000;

// ---------------------------------------------------------------------------
// NT file system layer.
//
// Sonic Generations routes all file I/O through the xboxkrnl NT imports (its
// statically linked XDK file API calls into them), so this layer is the real
// file backend of the runtime. Paths arrive as ANSI object names of the form
//     \Device\Harddisk0\Partition1\<root>:\<rest>
// or rooted names such as "game:\work\file.ar". They are mapped onto the
// installed game directory through FileSystem::ResolvePath (roots are
// registered by kernel/xam.cpp during boot).
// ---------------------------------------------------------------------------

#undef STATUS_NO_MORE_FILES
static constexpr uint32_t STATUS_NO_MORE_FILES = 0x80000006;
#undef STATUS_NO_SUCH_FILE
static constexpr uint32_t STATUS_NO_SUCH_FILE = 0xC000000F;
#undef STATUS_OBJECT_NAME_INVALID
static constexpr uint32_t STATUS_OBJECT_NAME_INVALID = 0xC0000033;
#undef STATUS_NOT_IMPLEMENTED
static constexpr uint32_t STATUS_NOT_IMPLEMENTED = 0xC0000002;
#undef STATUS_INVALID_HANDLE
static constexpr uint32_t STATUS_INVALID_HANDLE = 0xC0000008;
#undef STATUS_INVALID_PARAMETER
static constexpr uint32_t STATUS_INVALID_PARAMETER = 0xC000000D;
#undef STATUS_NOT_SUPPORTED
static constexpr uint32_t STATUS_NOT_SUPPORTED = 0xC00000BB;

// NtCreateFile/NtOpenFile create dispositions.
constexpr uint32_t FILE_SUPERSEDE = 0;
constexpr uint32_t FILE_OPEN = 1;
constexpr uint32_t FILE_CREATE = 2;
constexpr uint32_t FILE_OPEN_IF = 3;
constexpr uint32_t FILE_OVERWRITE = 4;
constexpr uint32_t FILE_OVERWRITE_IF = 5;

// FileInformationClass values.
constexpr uint32_t FileBasicInformation = 4;
constexpr uint32_t FileStandardInformation = 5;
constexpr uint32_t FilePositionInformation = 14;
constexpr uint32_t FileDispositionInformation = 13;
constexpr uint32_t FileEndOfFileInformation = 20;
constexpr uint32_t FileDirectoryInformation = 1;
constexpr uint32_t FileFullDirectoryInformation = 2;
constexpr uint32_t FileNamesInformation = 12;

// Converts a guest ANSI object name into a host path.
static std::filesystem::path ResolveObjectName(XANSI_STRING* name)
{
    if (!name || !name->Buffer)
        return {};

    const char* raw = name->Buffer.get();
    uint32_t length = name->Length.get();
    std::string path(raw, length);

    // Strip NT device prefixes; the remainder starts at the content root.
    static constexpr const char* prefixes[] =
    {
        "\\Device\\Harddisk0\\Partition1\\",
        "\\Device\\Harddisk0\\Partition0\\",
        "\\Device\\FixedCache\\",
        "\\Device\\Flash\\",
        "\\??\\",
    };

    std::replace(path.begin(), path.end(), '/', '\\');

    for (auto* prefix : prefixes)
    {
        std::string lower = path;
        std::transform(lower.begin(), lower.end(), lower.begin(), ::tolower);
        std::string prefixLower = prefix;
        std::transform(prefixLower.begin(), prefixLower.end(), prefixLower.begin(), ::tolower);

        if (lower.starts_with(prefixLower))
        {
            path = path.substr(strlen(prefix));
            break;
        }
    }

    return FileSystem::ResolvePath(path, false);
}

static FileHandle* OpenHostFile(const std::filesystem::path& hostPath, uint32_t desiredAccess,
    uint32_t createDisposition, bool failIfExists, bool directory)
{
    std::error_code ec;
    bool exists = std::filesystem::exists(hostPath, ec);

    if (directory)
    {
        std::filesystem::create_directories(hostPath, ec);
        auto* handle = CreateKernelObject<FileHandle>();
        handle->path = hostPath;
        return handle;
    }

    switch (createDisposition)
    {
    case FILE_CREATE:
        if (exists)
            return nullptr;
        break;
    case FILE_OPEN:
        if (!exists)
            return nullptr;
        break;
    case FILE_SUPERSEDE:
    case FILE_OVERWRITE:
    case FILE_OVERWRITE_IF:
    case FILE_OPEN_IF:
        break;
    default:
        return nullptr;
    }

    std::ios::openmode mode = std::ios::binary;
    if (desiredAccess & (0x80000000 /* GENERIC_READ */ | 0x0001 /* FILE_READ_DATA */))
        mode |= std::ios::in;
    if (desiredAccess & 0x40000000 /* GENERIC_WRITE */)
    {
        mode |= std::ios::out;
        if (!exists || createDisposition == FILE_SUPERSEDE || createDisposition == FILE_CREATE ||
            createDisposition == FILE_OVERWRITE || createDisposition == FILE_OVERWRITE_IF)
            mode |= std::ios::trunc;
    }

    // fstream cannot express "in|out|trunc" append-less create for read-only
    // requests on missing files; ensure the file exists first for write modes.
    if ((mode & std::ios::out) && !exists)
    {
        std::ofstream touch(hostPath, std::ios::binary | std::ios::trunc);
        if (!touch)
            return nullptr;
    }

    std::fstream stream(hostPath, mode);
    if (!stream.is_open())
        return nullptr;

    auto* handle = CreateKernelObject<FileHandle>();
    handle->stream = std::move(stream);
    handle->path = hostPath;
    return handle;
}

uint32_t NtCreateFile(be<uint32_t>* fileHandle, uint32_t desiredAccess,
    XOBJECT_ATTRIBUTES* attributes, XIO_STATUS_BLOCK* ioStatusBlock,
    uint64_t* allocationSize, uint32_t fileAttributes, uint32_t shareAccess,
    uint32_t createDisposition, uint32_t createOptions, void* eaBuffer, uint32_t eaLength)
{
    auto hostPath = ResolveObjectName(attributes ? attributes->Name.get() : nullptr);
    if (hostPath.empty())
    {
        if (ioStatusBlock)
            ioStatusBlock->Status = STATUS_OBJECT_NAME_INVALID;
        return STATUS_OBJECT_NAME_INVALID;
    }

    bool directory = (createOptions & 0x00000040 /* FILE_DIRECTORY_FILE */) != 0;
    auto* handle = OpenHostFile(hostPath, desiredAccess, createDisposition, false, directory);
    if (!handle)
    {
        if (ioStatusBlock)
        {
            ioStatusBlock->Status = STATUS_NO_SUCH_FILE;
            ioStatusBlock->Information = 0;
        }
        return STATUS_NO_SUCH_FILE;
    }

    if (fileHandle)
        *fileHandle = GetKernelHandle(handle);

    if (ioStatusBlock)
    {
        ioStatusBlock->Status = STATUS_SUCCESS;
        ioStatusBlock->Information = 1; // FILE_OPENED
    }

    LOGF_UTILITY("NtCreateFile \"{}\" -> {}", hostPath.string().c_str(), GetKernelHandle(handle));
    return STATUS_SUCCESS;
}

uint32_t NtOpenFile(be<uint32_t>* fileHandle, uint32_t desiredAccess,
    XOBJECT_ATTRIBUTES* attributes, XIO_STATUS_BLOCK* ioStatusBlock,
    uint32_t shareAccess, uint32_t openOptions)
{
    return NtCreateFile(fileHandle, desiredAccess, attributes, ioStatusBlock,
        nullptr, 0, shareAccess, FILE_OPEN, openOptions, nullptr, 0);
}

static FileHandle* GetFile(uint32_t handle)
{
    if (!IsKernelObject(handle))
        return nullptr;
    return GetKernelObject<FileHandle>(handle);
}

int32_t NtReadFile(uint32_t handle, uint32_t event, uint32_t apcRoutine,
    uint32_t apcContext, XIO_STATUS_BLOCK* ioStatusBlock, void* buffer,
    uint32_t length, be<uint32_t>* byteOffset)
{
    auto* file = GetFile(handle);
    if (!file)
        return STATUS_INVALID_HANDLE;

    std::streampos previous = file->stream.tellg();
    if (byteOffset)
        file->stream.seekg(*byteOffset, std::ios::beg);

    file->stream.read((char*)buffer, length);
    uint32_t read = uint32_t(file->stream.gcount());
    file->stream.clear();

    if (byteOffset)
        *byteOffset = be<uint32_t>(uint32_t(file->stream.tellg()));
    else
        file->stream.seekg(previous);

    if (ioStatusBlock)
    {
        ioStatusBlock->Status = STATUS_SUCCESS;
        ioStatusBlock->Information = read;
    }

    return STATUS_SUCCESS;
}

int32_t NtWriteFile(uint32_t handle, uint32_t event, uint32_t apcRoutine,
    uint32_t apcContext, XIO_STATUS_BLOCK* ioStatusBlock, void* buffer,
    uint32_t length, be<uint32_t>* byteOffset)
{
    auto* file = GetFile(handle);
    if (!file)
        return STATUS_INVALID_HANDLE;

    std::streampos previous = file->stream.tellp();
    if (byteOffset)
        file->stream.seekp(*byteOffset, std::ios::beg);

    file->stream.write((const char*)buffer, length);
    file->stream.flush();

    if (byteOffset)
        *byteOffset = be<uint32_t>(uint32_t(file->stream.tellp()));
    else
        file->stream.seekp(previous);

    if (ioStatusBlock)
    {
        ioStatusBlock->Status = STATUS_SUCCESS;
        ioStatusBlock->Information = length;
    }

    return STATUS_SUCCESS;
}

struct XFILE_SEGMENT_ELEMENT
{
    be<uint32_t> buffer;
};

int32_t NtReadFileScatter(uint32_t handle, uint32_t event, uint32_t apcRoutine,
    uint32_t apcContext, XIO_STATUS_BLOCK* ioStatusBlock, XFILE_SEGMENT_ELEMENT* segments,
    uint32_t length, be<uint32_t>* byteOffset)
{
    std::vector<uint8_t> contiguous(length);
    uint32_t status = NtReadFile(handle, event, apcRoutine, apcContext,
        ioStatusBlock, contiguous.data(), length, byteOffset);

    if (status != STATUS_SUCCESS)
        return status;

    uint32_t read = ioStatusBlock ? ioStatusBlock->Information.get() : length;
    uint32_t copied = 0;
    for (uint32_t i = 0; copied < read; i++)
    {
        uint32_t dest = segments[i].buffer.get() & ~1u;
        uint32_t chunk = std::min<uint32_t>(read - copied, 0x10000);
        memcpy(g_memory.Translate(dest), contiguous.data() + copied, chunk);
        copied += chunk;
    }

    return STATUS_SUCCESS;
}

int32_t NtWriteFileGather(uint32_t handle, uint32_t event, uint32_t apcRoutine,
    uint32_t apcContext, XIO_STATUS_BLOCK* ioStatusBlock, XFILE_SEGMENT_ELEMENT* segments,
    uint32_t length, be<uint32_t>* byteOffset)
{
    std::vector<uint8_t> contiguous(length);

    uint32_t copied = 0;
    for (uint32_t i = 0; copied < length; i++)
    {
        uint32_t src = segments[i].buffer.get() & ~1u;
        uint32_t chunk = std::min<uint32_t>(length - copied, 0x10000);
        memcpy(contiguous.data() + copied, g_memory.Translate(src), chunk);
        copied += chunk;
    }

    return NtWriteFile(handle, event, apcRoutine, apcContext,
        ioStatusBlock, contiguous.data(), length, byteOffset);
}

uint32_t NtFlushBuffersFile(uint32_t handle, XIO_STATUS_BLOCK* ioStatusBlock)
{
    auto* file = GetFile(handle);
    if (!file)
        return STATUS_INVALID_HANDLE;

    file->stream.flush();

    if (ioStatusBlock)
        ioStatusBlock->Status = STATUS_SUCCESS;

    return STATUS_SUCCESS;
}

// FILE_STANDARD_INFORMATION
struct XFILE_STANDARD_INFORMATION
{
    be<uint64_t> AllocationSize;
    be<uint64_t> EndOfFile;
    be<uint32_t> NumberOfLinks;
    be<uint32_t> DeletePending;
    be<uint32_t> Directory;
};

// FILE_POSITION_INFORMATION
struct XFILE_POSITION_INFORMATION
{
    be<uint64_t> CurrentByteOffset;
};

// FILE_END_OF_FILE_INFORMATION
struct XFILE_END_OF_FILE_INFORMATION
{
    be<uint64_t> EndOfFile;
};

uint32_t NtQueryInformationFile(uint32_t handle, XIO_STATUS_BLOCK* ioStatusBlock,
    void* fileInformation, uint32_t length, uint32_t fileInformationClass)
{
    auto* file = GetFile(handle);
    if (!file)
        return STATUS_INVALID_HANDLE;

    std::error_code ec;
    switch (fileInformationClass)
    {
    case FileStandardInformation:
    {
        if (length < sizeof(XFILE_STANDARD_INFORMATION))
            return STATUS_INVALID_PARAMETER;

        auto* info = (XFILE_STANDARD_INFORMATION*)fileInformation;
        uint64_t size = std::filesystem::file_size(file->path, ec);
        info->AllocationSize = size;
        info->EndOfFile = size;
        info->NumberOfLinks = 1;
        info->DeletePending = 0;
        info->Directory = std::filesystem::is_directory(file->path, ec) ? 1 : 0;
        break;
    }

    case FilePositionInformation:
    {
        if (length < sizeof(XFILE_POSITION_INFORMATION))
            return STATUS_INVALID_PARAMETER;

        auto* info = (XFILE_POSITION_INFORMATION*)fileInformation;
        std::streampos pos = file->stream.is_open() ? file->stream.tellg() : std::streampos(0);
        if (pos == std::streampos(-1))
            pos = file->stream.tellp();
        info->CurrentByteOffset = uint64_t(pos);
        break;
    }

    case FileBasicInformation:
        // Timestamps are not tracked; zeroed data is accepted by the title.
        memset(fileInformation, 0, length);
        break;

    default:
        LOGF_UTILITY("NtQueryInformationFile unhandled class {}", fileInformationClass);
        return STATUS_NOT_IMPLEMENTED;
    }

    if (ioStatusBlock)
    {
        ioStatusBlock->Status = STATUS_SUCCESS;
        ioStatusBlock->Information = length;
    }

    return STATUS_SUCCESS;
}

uint32_t NtSetInformationFile(uint32_t handle, XIO_STATUS_BLOCK* ioStatusBlock,
    void* fileInformation, uint32_t length, uint32_t fileInformationClass)
{
    auto* file = GetFile(handle);
    if (!file)
        return STATUS_INVALID_HANDLE;

    switch (fileInformationClass)
    {
    case FilePositionInformation:
    {
        auto* info = (XFILE_POSITION_INFORMATION*)fileInformation;
        file->stream.seekg(info->CurrentByteOffset.get(), std::ios::beg);
        file->stream.seekp(info->CurrentByteOffset.get(), std::ios::beg);
        break;
    }

    case FileEndOfFileInformation:
    {
        // Truncation/extension is not required for the title's save data;
        // log and succeed.
        LOG_UTILITY("NtSetInformationFile(FileEndOfFileInformation)");
        break;
    }

    case FileDispositionInformation:
        LOG_UTILITY("NtSetInformationFile(FileDispositionInformation)");
        break;

    default:
        LOGF_UTILITY("NtSetInformationFile unhandled class {}", fileInformationClass);
        return STATUS_NOT_IMPLEMENTED;
    }

    if (ioStatusBlock)
        ioStatusBlock->Status = STATUS_SUCCESS;

    return STATUS_SUCCESS;
}

// FILE_DIRECTORY_INFORMATION
struct XFILE_DIRECTORY_INFORMATION
{
    be<uint32_t> NextEntryOffset;
    be<uint32_t> FileIndex;
    be<uint64_t> CreationTime;
    be<uint64_t> LastAccessTime;
    be<uint64_t> LastWriteTime;
    be<uint64_t> ChangeTime;
    be<uint64_t> EndOfFile;
    be<uint64_t> AllocationSize;
    be<uint32_t> FileAttributes;
    be<uint32_t> FileNameLength;
    // char FileName[1];
};

uint32_t NtQueryDirectoryFile(uint32_t handle, uint32_t event, uint32_t apcRoutine,
    uint32_t apcContext, XIO_STATUS_BLOCK* ioStatusBlock, void* fileInformation,
    uint32_t length, uint32_t fileInformationClass, uint32_t returnSingleEntry,
    XANSI_STRING* fileName, uint32_t restartScan)
{
    auto* file = GetFile(handle);
    if (!file)
        return STATUS_INVALID_HANDLE;

    std::error_code ec;
    if (restartScan || !file->dirScanActive)
    {
        file->dirEntries.clear();
        file->dirCursor = 0;
        file->dirScanActive = true;

        std::string pattern;
        if (fileName && fileName->Buffer)
            pattern.assign(fileName->Buffer.get(), fileName->Length.get());

        for (auto& entry : std::filesystem::directory_iterator(file->path, ec))
        {
            std::string name = (const char*)entry.path().filename().u8string().c_str();
            if (pattern.empty() || pattern == "*" || pattern == "*.*")
                file->dirEntries.push_back(name);
            else
            {
                // Simple wildcard match on the suffix.
                if (pattern[0] == '*' && name.ends_with(pattern.substr(1)))
                    file->dirEntries.push_back(name);
                else if (pattern.back() == '*' && name.starts_with(pattern.substr(0, pattern.size() - 1)))
                    file->dirEntries.push_back(name);
                else if (name == pattern)
                    file->dirEntries.push_back(name);
            }
        }

        std::sort(file->dirEntries.begin(), file->dirEntries.end());
    }

    if (file->dirCursor >= file->dirEntries.size())
    {
        if (ioStatusBlock)
            ioStatusBlock->Status = STATUS_NO_MORE_FILES;
        return STATUS_NO_MORE_FILES;
    }

    uint32_t written = 0;
    uint8_t* out = (uint8_t*)fileInformation;
    uint32_t previousOffset = 0;

    while (file->dirCursor < file->dirEntries.size())
    {
        const auto& name = file->dirEntries[file->dirCursor];
        uint32_t nameBytes = uint32_t(name.size());
        uint32_t entrySize = uint32_t(offsetof(XFILE_DIRECTORY_INFORMATION, FileNameLength) + 4 + nameBytes);
        entrySize = (entrySize + 7) & ~7u;

        if (written + entrySize > length)
            break;

        auto* entry = (XFILE_DIRECTORY_INFORMATION*)(out + written);
        memset(entry, 0, entrySize);

        auto hostPath = file->path / name;
        bool isDir = std::filesystem::is_directory(hostPath, ec);
        uint64_t size = isDir ? 0 : std::filesystem::file_size(hostPath, ec);

        entry->FileIndex = uint32_t(file->dirCursor);
        entry->EndOfFile = size;
        entry->AllocationSize = size;
        entry->FileAttributes = isDir ? 0x10 /* FILE_ATTRIBUTE_DIRECTORY */ : 0x80 /* FILE_ATTRIBUTE_NORMAL */;
        entry->FileNameLength = nameBytes;
        memcpy((char*)entry + offsetof(XFILE_DIRECTORY_INFORMATION, FileNameLength) + 4, name.data(), nameBytes);

        if (written)
            ((XFILE_DIRECTORY_INFORMATION*)(out + previousOffset))->NextEntryOffset = written - previousOffset;
        previousOffset = written;

        written += entrySize;
        file->dirCursor++;

        if (returnSingleEntry)
            break;
    }

    if (ioStatusBlock)
    {
        ioStatusBlock->Status = STATUS_SUCCESS;
        ioStatusBlock->Information = written;
    }

    return STATUS_SUCCESS;
}

// FILE_NETWORK_OPEN_INFORMATION
struct XFILE_NETWORK_OPEN_INFORMATION
{
    be<uint64_t> CreationTime;
    be<uint64_t> LastAccessTime;
    be<uint64_t> LastWriteTime;
    be<uint64_t> ChangeTime;
    be<uint64_t> AllocationSize;
    be<uint64_t> EndOfFile;
    be<uint32_t> FileAttributes;
};

uint32_t NtQueryFullAttributesFile(XOBJECT_ATTRIBUTES* attributes, void* fileInformation)
{
    auto hostPath = ResolveObjectName(attributes ? attributes->Name.get() : nullptr);
    std::error_code ec;

    if (hostPath.empty() || !std::filesystem::exists(hostPath, ec))
        return STATUS_NO_SUCH_FILE;

    auto* info = (XFILE_NETWORK_OPEN_INFORMATION*)fileInformation;
    memset(info, 0, sizeof(*info));

    bool isDir = std::filesystem::is_directory(hostPath, ec);
    uint64_t size = isDir ? 0 : std::filesystem::file_size(hostPath, ec);
    info->AllocationSize = size;
    info->EndOfFile = size;
    info->FileAttributes = isDir ? 0x10 : 0x80;

    return STATUS_SUCCESS;
}

uint32_t NtQueryVolumeInformationFile(uint32_t handle, XIO_STATUS_BLOCK* ioStatusBlock,
    void* fsInformation, uint32_t length, uint32_t fsInformationClass)
{
    // FILE_FS_SIZE_INFORMATION: sectors, bytes per sector, total/free clusters.
    struct XFILE_FS_SIZE_INFORMATION
    {
        be<uint64_t> TotalAllocationUnits;
        be<uint64_t> AvailableAllocationUnits;
        be<uint32_t> SectorsPerAllocationUnit;
        be<uint32_t> BytesPerSector;
        be<uint32_t> AvailableAllocationUnitsPart2;
    };

    if (fsInformationClass == 3 /* FileFsSizeInformation */ && length >= 24)
    {
        auto* info = (be<uint32_t>*)fsInformation;
        // Plenty of free space as far as the title is concerned.
        memset(fsInformation, 0, length);
        ((XFILE_FS_SIZE_INFORMATION*)fsInformation)->TotalAllocationUnits = 0x100000;
        ((XFILE_FS_SIZE_INFORMATION*)fsInformation)->AvailableAllocationUnits = 0x80000;
        ((XFILE_FS_SIZE_INFORMATION*)fsInformation)->SectorsPerAllocationUnit = 8;
        ((XFILE_FS_SIZE_INFORMATION*)fsInformation)->BytesPerSector = 512;
        (void)info;
    }
    else
    {
        LOGF_UTILITY("NtQueryVolumeInformationFile unhandled class {}", fsInformationClass);
        memset(fsInformation, 0, length);
    }

    if (ioStatusBlock)
        ioStatusBlock->Status = STATUS_SUCCESS;

    return STATUS_SUCCESS;
}

uint32_t NtDuplicateObject(uint32_t sourceHandle, be<uint32_t>* targetHandle,
    uint32_t options)
{
    // Xbox 360 ABI has three arguments (not desktop NT's five).
    if(options & ~3u) return STATUS_INVALID_PARAMETER;
    if(!targetHandle) return (options&1) ? (KernelObjects::Close(sourceHandle) ? 0 : 0xC0000008) : STATUS_INVALID_PARAMETER;
    uint32_t destination=0;
    const auto status=KernelObjects::Duplicate(sourceHandle,destination,(options&1)!=0);
    *targetHandle=destination;
    return status;
}

// ---------------------------------------------------------------------------
// Virtual memory: guest allocations live in the user heap (kernel/heap.cpp).
// ---------------------------------------------------------------------------

uint32_t NtAllocateVirtualMemory(be<uint32_t>* baseAddress, uint32_t zeroBits,
    be<uint32_t>* regionSize, uint32_t allocationType, uint32_t protect)
{
    uint32_t size = regionSize ? regionSize->get() : 0;
    if (size == 0)
        return STATUS_INVALID_PARAMETER;

    void* memory = g_userHeap.Alloc(size);
    uint32_t guest = g_memory.MapVirtual(memory);

    if (baseAddress)
        *baseAddress = guest;
    if (regionSize)
        *regionSize = g_userHeap.Size(memory);

    LOGF_UTILITY("NtAllocateVirtualMemory 0x{:X} -> 0x{:08X}", size, guest);
    return STATUS_SUCCESS;
}

uint32_t NtFreeVirtualMemory(be<uint32_t>* baseAddress, be<uint32_t>* regionSize, uint32_t freeType)
{
    if (baseAddress && *baseAddress)
    {
        g_userHeap.Free(g_memory.Translate(baseAddress->get()));
        *baseAddress = 0;
    }

    if (regionSize)
        *regionSize = 0;

    return STATUS_SUCCESS;
}

struct XMEMORY_BASIC_INFORMATION
{
    be<uint32_t> BaseAddress;
    be<uint32_t> AllocationBase;
    be<uint32_t> AllocationProtect;
    be<uint32_t> RegionSize;
    be<uint32_t> State;
    be<uint32_t> Protect;
    be<uint32_t> Type;
};

uint32_t NtQueryVirtualMemory(uint32_t baseAddress, be<uint32_t>* allocationBase,
    be<uint32_t>* regionSize, be<uint32_t>* allocationProtect)
{
    if (allocationBase)
        *allocationBase = baseAddress;
    if (regionSize)
        *regionSize = 0x1000;
    if (allocationProtect)
        *allocationProtect = 0x04; // PAGE_READWRITE
    return STATUS_SUCCESS;
}
