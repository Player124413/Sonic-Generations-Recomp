#pragma once
#include "xdm.h"
#include "xam.h"
#include <vector>

// Immutable guest-record snapshot; aliases share a synchronized cursor.
struct XamSnapshotEnumerator final : KernelObject
{
    XamSnapshotEnumerator(uint32_t stride,uint32_t fetch,std::vector<uint8_t> records);
    uint32_t Read(void* buffer,uint32_t bytes,uint32_t& count);
private:
    std::mutex mutex;
    uint32_t stride, fetch;
    size_t position=0;
    const std::vector<uint8_t> records;
};
uint32_t XamSessionCreateHandle(be<uint32_t>* handle);
uint32_t XamSessionRefObjByHandle(uint32_t handle,be<uint32_t>* object);
uint32_t XamUserCreateStatsEnumerator(uint32_t userIndex,uint32_t titleId,uint32_t xuidCount,
    uint64_t* xuids,uint32_t views,uint32_t* spec,uint32_t owner,uint32_t buffer,be<uint32_t>* handle);
