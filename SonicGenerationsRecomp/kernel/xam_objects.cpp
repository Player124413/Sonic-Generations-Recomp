#include <stdafx.h>
#ifdef _WIN32
#include <ntstatus.h>
#endif
#include "xam_objects.h"
#include "function.h"
#include "object_imports.h"
#include <condition_variable>
#include <deque>

namespace
{
struct NotificationListener;
struct NotificationBus
{
    std::mutex mutex;
    std::vector<std::weak_ptr<NotificationListener>> listeners;
};
NotificationBus& Bus() { static NotificationBus bus; return bus; }
struct NotificationListener final : KernelObject
{
    const uint64_t mask;
    const uint32_t maxVersion;
    std::mutex mutex;
    std::condition_variable changed;
    std::deque<std::pair<uint32_t,uint32_t>> queue;
    NotificationListener(uint64_t mask,uint32_t version) : mask(mask),maxVersion(version) {}
    void OnRegistered() override
    {
        auto self=std::dynamic_pointer_cast<NotificationListener>(KernelObjects::Acquire(handle));
        auto& bus=Bus(); std::lock_guard lock(bus.mutex);
        std::erase_if(bus.listeners,[](const auto& value){return value.expired();});
        bus.listeners.push_back(self);
    }
    void Enqueue(uint32_t id,uint32_t value)
    {
        // Xbox XNotificationKey: local ID[15:0], version[24:16], mask index[30:25].
        // See Xenia kernel/xnotifylistener.h; never shift a signed 32-bit 1.
        const auto area=MSG_AREA(id), version=MSG_VERSION(id);
        if(!(mask&(uint64_t{1}<<area)) || version>maxVersion) return;
        { std::lock_guard lock(mutex); queue.emplace_back(id,value); }
        changed.notify_all();
    }
    uint32_t Wait(uint32_t timeout) override
    {
        std::unique_lock lock(mutex);
        if(timeout==INFINITE) changed.wait(lock,[&]{return !queue.empty();});
        else if(!changed.wait_for(lock,std::chrono::milliseconds(timeout),[&]{return !queue.empty();}))
            return STATUS_TIMEOUT;
        return 0;
    }
};
struct SessionObject final : KernelObject {};
}
uint32_t XamNotifyCreateListener(uint64_t mask,uint32_t maxVersion)
{
    return GetKernelHandle(CreateKernelObject<NotificationListener>(mask,maxVersion));
}
void XamNotifyEnqueueEvent(uint32_t id,uint32_t value)
{
    std::vector<std::shared_ptr<NotificationListener>> listeners;
    {
        auto& bus=Bus(); std::lock_guard lock(bus.mutex);
        std::erase_if(bus.listeners,[](const auto& listener){return listener.expired();});
        for(auto& weak:bus.listeners) if(auto listener=weak.lock()) listeners.push_back(std::move(listener));
    }
    // Close may run concurrently. Strong snapshots protect queue operations;
    // no destructors or queue locks are taken under the bus lock.
    for(auto& listener:listeners) listener->Enqueue(id,value);
}
bool XNotifyGetNext(uint32_t handle,uint32_t filter,be<uint32_t>* id,be<uint32_t>* value)
{
    if(value) *value=0;
    if(!id) return false;
    *id=0;
    auto listener=std::dynamic_pointer_cast<NotificationListener>(KernelObjects::Acquire(handle));
    if(!listener) return false;
    std::lock_guard lock(listener->mutex);
    auto found=listener->queue.begin();
    if(filter) found=std::find_if(found,listener->queue.end(),[&](auto entry){return entry.first==filter;});
    if(found==listener->queue.end()) return false;
    *id=found->first; if(value) *value=found->second;
    listener->queue.erase(found); return true;
}
XamSnapshotEnumerator::XamSnapshotEnumerator(uint32_t stride,uint32_t fetch,std::vector<uint8_t> records)
    : stride(stride),fetch(fetch),records(std::move(records))
{
    if(!stride || !fetch || this->records.size()%stride) throw std::invalid_argument("invalid XAM record snapshot");
}
uint32_t XamSnapshotEnumerator::Read(void* buffer,uint32_t bytes,uint32_t& count)
{
    count=0;
    if(!buffer) return 87;
    if(bytes<stride) return 122;
    std::lock_guard lock(mutex);
    if(position==records.size()) return 18;
    count=uint32_t(std::min({size_t(fetch),size_t(bytes/stride),(records.size()-position)/stride}));
    const auto copied=size_t(count)*stride;
    std::memcpy(buffer,records.data()+position,copied);
    position+=copied; return 0;
}
uint32_t XamEnumerate(uint32_t handle,uint32_t flags,void* buffer,uint32_t bytes,
                      be<uint32_t>* count,XXOVERLAPPED* overlapped)
{
    if(count) *count=0;
    auto enumerator=std::dynamic_pointer_cast<XamSnapshotEnumerator>(KernelObjects::Acquire(handle));
    if(!enumerator) return 6;
    if(flags) return 87;
    if(overlapped)
    {
        // Built-in snapshots complete immediately. Event/polling completion is
        // supported; an APC must not run on a fabricated or arbitrary thread.
        if(overlapped->pCompletionRoutine) return 50;
        std::shared_ptr<Event> event;
        if(overlapped->hEvent)
        {
            event=std::dynamic_pointer_cast<Event>(KernelObjects::Acquire(overlapped->hEvent));
            if(!event) return 6;
        }
        auto* current=KernelObjects::CurrentThread();
        overlapped->InternalContext=ByteSwap(current ? current->handle : uint32_t(0));
        std::atomic_ref<uint32_t>(overlapped->Error.value).store(ByteSwap(uint32_t(997)),std::memory_order_release);
        uint32_t resultCount=0;
        const auto result=enumerator->Read(buffer,bytes,resultCount);
        overlapped->Length=resultCount;
        overlapped->dwExtendedError=result ? (0x80070000u | result) : 0;
        std::atomic_ref<uint32_t>(overlapped->Error.value).store(ByteSwap(result),std::memory_order_release);
        if(event)
        {
            event->Set();
            ++g_keSetEventGeneration; g_keSetEventGeneration.notify_all();
        }
        return 997; // accepted overlapped operation, result in the completion block
    }
    uint32_t resultCount=0;
    auto result=enumerator->Read(buffer,bytes,resultCount);
    if(count) *count=resultCount;
    return result;
}
uint32_t XamSessionCreateHandle(be<uint32_t>* handle)
{
    if(!handle) return 87;
    *handle=GetKernelHandle(CreateKernelObject<SessionObject>()); return 0;
}
uint32_t XamSessionRefObjByHandle(uint32_t handle,be<uint32_t>* object)
{
    if(!object) return 87;
    *object=0;
    auto session=std::dynamic_pointer_cast<SessionObject>(KernelObjects::Acquire(handle));
    // The private session body ABI isn't implemented. A handle is not a body.
    return session ? 50 : 6;
}
uint32_t XamUserCreateStatsEnumerator(uint32_t userIndex,uint32_t titleId,uint32_t xuidCount,
    uint64_t* xuids,uint32_t views,uint32_t* spec,uint32_t owner,uint32_t buffer,be<uint32_t>* handle)
{
    if(!handle) return 87;
    *handle=0;
    return 50; // no statistics provider/record ABI; never return a dummy enumerator
}
GUEST_FUNCTION_HOOK(__imp__XamNotifyCreateListener,XamNotifyCreateListener);
GUEST_FUNCTION_HOOK(__imp__XNotifyGetNext,XNotifyGetNext);
GUEST_FUNCTION_HOOK(__imp__XamEnumerate,XamEnumerate);
GUEST_FUNCTION_HOOK(__imp__XamSessionCreateHandle,XamSessionCreateHandle);
GUEST_FUNCTION_HOOK(__imp__XamSessionRefObjByHandle,XamSessionRefObjByHandle);
GUEST_FUNCTION_HOOK(__imp__XamUserCreateStatsEnumerator,XamUserCreateStatsEnumerator);
