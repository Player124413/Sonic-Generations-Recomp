#pragma once

#include <cstdint>
#include <xbox.h>

struct XFILE_SEGMENT_ELEMENT;

// ---------------------------------------------------------------------------
// NT file/virtual-memory primitives (xboxkrnl). Implemented in nt_file.cpp.
// Sonic Generations performs all of its file I/O through these imports.
// ---------------------------------------------------------------------------

uint32_t NtCreateFile(be<uint32_t>* fileHandle, uint32_t desiredAccess, XOBJECT_ATTRIBUTES* attributes, XIO_STATUS_BLOCK* ioStatusBlock, uint64_t* allocationSize, uint32_t fileAttributes, uint32_t shareAccess, uint32_t createDisposition, uint32_t createOptions, void* eaBuffer, uint32_t eaLength);

uint32_t NtOpenFile(be<uint32_t>* fileHandle, uint32_t desiredAccess, XOBJECT_ATTRIBUTES* attributes, XIO_STATUS_BLOCK* ioStatusBlock, uint32_t shareAccess, uint32_t openOptions);

int32_t NtReadFile(uint32_t handle, uint32_t event, uint32_t apcRoutine, uint32_t apcContext, XIO_STATUS_BLOCK* ioStatusBlock, void* buffer, uint32_t length, be<uint32_t>* byteOffset);

int32_t NtWriteFile(uint32_t handle, uint32_t event, uint32_t apcRoutine, uint32_t apcContext, XIO_STATUS_BLOCK* ioStatusBlock, void* buffer, uint32_t length, be<uint32_t>* byteOffset);

int32_t NtReadFileScatter(uint32_t handle, uint32_t event, uint32_t apcRoutine, uint32_t apcContext, XIO_STATUS_BLOCK* ioStatusBlock, XFILE_SEGMENT_ELEMENT* segments, uint32_t length, be<uint32_t>* byteOffset);

int32_t NtWriteFileGather(uint32_t handle, uint32_t event, uint32_t apcRoutine, uint32_t apcContext, XIO_STATUS_BLOCK* ioStatusBlock, XFILE_SEGMENT_ELEMENT* segments, uint32_t length, be<uint32_t>* byteOffset);

uint32_t NtFlushBuffersFile(uint32_t handle, XIO_STATUS_BLOCK* ioStatusBlock);

uint32_t NtQueryInformationFile(uint32_t handle, XIO_STATUS_BLOCK* ioStatusBlock, void* fileInformation, uint32_t length, uint32_t fileInformationClass);

uint32_t NtSetInformationFile(uint32_t handle, XIO_STATUS_BLOCK* ioStatusBlock, void* fileInformation, uint32_t length, uint32_t fileInformationClass);

uint32_t NtQueryDirectoryFile(uint32_t handle, uint32_t event, uint32_t apcRoutine, uint32_t apcContext, XIO_STATUS_BLOCK* ioStatusBlock, void* fileInformation, uint32_t length, uint32_t fileInformationClass, uint32_t returnSingleEntry, XANSI_STRING* fileName, uint32_t restartScan);

uint32_t NtQueryFullAttributesFile(XOBJECT_ATTRIBUTES* attributes, void* fileInformation);

uint32_t NtQueryVolumeInformationFile(uint32_t handle, XIO_STATUS_BLOCK* ioStatusBlock, void* fsInformation, uint32_t length, uint32_t fsInformationClass);

uint32_t NtDuplicateObject(uint32_t sourceHandle, be<uint32_t>* targetHandle, uint32_t desiredAccess, uint32_t handleAttributes, uint32_t options);

uint32_t NtAllocateVirtualMemory(be<uint32_t>* baseAddress, uint32_t zeroBits, be<uint32_t>* regionSize, uint32_t allocationType, uint32_t protect);

uint32_t NtFreeVirtualMemory(be<uint32_t>* baseAddress, be<uint32_t>* regionSize, uint32_t freeType);

uint32_t NtQueryVirtualMemory(uint32_t baseAddress, be<uint32_t>* allocationBase, be<uint32_t>* regionSize, be<uint32_t>* allocationProtect);;
