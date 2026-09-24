#include <stdafx.h>
#include "xdm.h"
#include "freelist.h"

Mutex g_kernelLock;

void DestroyKernelObject(KernelObject* obj)
{
    if(obj) KernelObjects::Close(obj->handle);
}

uint32_t GetKernelHandle(const KernelObject* obj)
{
    assert(obj != GetInvalidKernelObject());
    return obj ? obj->handle : 0;
}

void DestroyKernelObject(uint32_t handle)
{
    KernelObjects::Close(handle);
}

bool IsKernelObject(uint32_t handle)
{
    return bool(KernelObjects::Acquire(handle));
}

bool IsKernelObject(void* obj)
{
    return obj && g_memory.IsInMemoryRange(obj) && IsKernelObject(g_memory.MapVirtual(obj));
}

bool IsInvalidKernelObject(void* obj)
{
    return obj == GetInvalidKernelObject();
}
