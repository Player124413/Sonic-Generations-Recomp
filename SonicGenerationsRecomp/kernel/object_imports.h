#pragma once
#include "dispatcher_objects.h"
#include <cpu/guest_thread.h>
extern std::atomic<uint32_t> g_keSetEventGeneration;
uint32_t GuestTimeoutToMilliseconds(be<int64_t>* timeout);
uint32_t NtClose(uint32_t handle);
uint32_t ObReferenceObjectByHandle(uint32_t handle, uint32_t objectType, be<uint32_t>* object);
void ObReferenceObject(uint32_t body);
void ObDereferenceObject(uint32_t body);
uint32_t NtWaitForSingleObjectEx(uint32_t Handle, uint32_t WaitMode, uint32_t Alertable, be<int64_t>* Timeout);
uint32_t NtCreateEvent(be<uint32_t>* handle, void* objAttributes, uint32_t eventType, uint32_t initialState);
uint32_t NtCreateSemaphore(be<uint32_t>* Handle, XOBJECT_ATTRIBUTES* ObjectAttributes, uint32_t InitialCount, uint32_t MaximumCount);
uint32_t NtSetEvent(uint32_t eventHandle, uint32_t* previousState);
uint32_t NtClearEvent(uint32_t eventHandle, uint32_t* previousState);
uint32_t NtReleaseSemaphore(uint32_t semaphoreHandle, uint32_t ReleaseCount, int32_t* PreviousCount);
bool KeSetEvent(XKEVENT* pEvent, uint32_t Increment, bool Wait);
bool KeResetEvent(XKEVENT* pEvent);
uint32_t KeWaitForSingleObject(XDISPATCHER_HEADER* Object, uint32_t WaitReason, uint32_t WaitMode, bool Alertable, be<int64_t>* Timeout);
uint32_t KeReleaseSemaphore(XKSEMAPHORE* semaphore, uint32_t increment, uint32_t adjustment, uint32_t wait);
void KeInitializeSemaphore(XKSEMAPHORE* semaphore, uint32_t count, uint32_t limit);
uint32_t NtResumeThread(uint32_t threadHandle, uint32_t* suspendCount);
uint32_t KeResumeThread(GuestThreadHandle* object);
uint32_t NtSuspendThread(uint32_t threadHandle, uint32_t* suspendCount);
uint32_t NtDuplicateObject(uint32_t sourceHandle, be<uint32_t>* targetHandle, uint32_t options);
