#pragma once
#include "xdm.h"
#include <atomic>
#include <chrono>
#include <condition_variable>

// SignalState in guest RAM is the authoritative word, not a second host copy.
// Atomic operations preserve its big-endian encoding and support host waits.
class DispatcherSignal
{
    be<uint32_t>* word;
    mutable std::mutex waitMutex;
    mutable std::condition_variable changed;
    std::atomic_ref<uint32_t> Atomic() const { return std::atomic_ref<uint32_t>(word->value); }
public:
    explicit DispatcherSignal(be<uint32_t>& value) : word(&value) {}
    uint32_t load() const { return ByteSwap(Atomic().load()); }
    operator uint32_t() const { return load(); }
    uint32_t exchange(uint32_t value) { std::lock_guard lock(waitMutex); return ByteSwap(Atomic().exchange(ByteSwap(value))); }
    void operator=(uint32_t value) { std::lock_guard lock(waitMutex); Atomic().store(ByteSwap(value)); }
    template<class T> bool compare_exchange_strong(T& expected,T desired)
    {
        std::lock_guard lock(waitMutex);
        auto raw=ByteSwap(uint32_t(expected));
        const bool success=Atomic().compare_exchange_strong(raw,ByteSwap(uint32_t(desired)));
        expected=T(ByteSwap(raw)); return success;
    }
    template<class T> bool compare_exchange_weak(T& expected,T desired)
    { return compare_exchange_strong(expected,desired); }
    void wait(uint32_t value) const
    { std::unique_lock lock(waitMutex); changed.wait(lock,[&]{return load()!=value;}); }
    bool wait_until(uint32_t value,std::chrono::steady_clock::time_point deadline) const
    { std::unique_lock lock(waitMutex); return changed.wait_until(lock,deadline,[&]{return load()!=value;}); }
    void notify_one() { changed.notify_one(); }
    void notify_all() { changed.notify_all(); }
};

struct Event final : KernelObject, HostObject<XKEVENT>
{
    bool manualReset;
    DispatcherSignal signaled;

    Event(XKEVENT* header)
        : manualReset(!header->Type), signaled(header->SignalState)
    {
    }

    Event(bool manualReset, bool initialState)
        : KernelObject(KernelObjects::Type::Event,sizeof(XKEVENT)), manualReset(manualReset), signaled(static_cast<XKEVENT*>(g_memory.Translate(guestBody))->SignalState)
    {
        auto* body=static_cast<XKEVENT*>(g_memory.Translate(guestBody));
        body->Type=manualReset ? 0 : 1; body->SignalState=initialState;
    }

    uint32_t Wait(uint32_t timeout) override
    {
        const auto deadline=std::chrono::steady_clock::now()+std::chrono::milliseconds(timeout);
        for(;;)
        {
            if(manualReset) { if(signaled.load()) return STATUS_SUCCESS; }
            else
            {
                bool expected=true;
                if(signaled.compare_exchange_strong(expected,false)) return STATUS_SUCCESS;
            }
            if(!timeout) return STATUS_TIMEOUT;
            if(timeout==INFINITE) signaled.wait(0);
            else if(!signaled.wait_until(0,deadline)) return STATUS_TIMEOUT;
        }
    }

    bool Set()
    {
        const bool previous=signaled.exchange(1)!=0;

        if (manualReset)
            signaled.notify_all();
        else
            signaled.notify_one();

        return previous;
    }

    bool Reset()
    {
        return signaled.exchange(0)!=0;
    }
};



struct Semaphore final : KernelObject, HostObject<XKSEMAPHORE>
{
    DispatcherSignal count;
    uint32_t maximumCount;

    Semaphore(XKSEMAPHORE* semaphore)
        : count(semaphore->Header.SignalState), maximumCount(semaphore->Limit)
    {
    }

    Semaphore(uint32_t count, uint32_t maximumCount)
        : KernelObject(KernelObjects::Type::Semaphore,sizeof(XKSEMAPHORE)), count(static_cast<XKSEMAPHORE*>(g_memory.Translate(guestBody))->Header.SignalState), maximumCount(maximumCount)
    {
        auto* body=static_cast<XKSEMAPHORE*>(g_memory.Translate(guestBody));
        body->Header.Type=5; body->Header.SignalState=count; body->Limit=maximumCount;
    }

    uint32_t Wait(uint32_t timeout) override
    {
        const auto deadline=std::chrono::steady_clock::now()+std::chrono::milliseconds(timeout);
        for(;;)
        {
            auto current=count.load();
            while(current)
                if(count.compare_exchange_strong(current,current-1)) return STATUS_SUCCESS;
            if(!timeout) return STATUS_TIMEOUT;
            if(timeout==INFINITE) count.wait(0);
            else if(!count.wait_until(0,deadline)) return STATUS_TIMEOUT;
        }
    }

    uint32_t Release(uint32_t releaseCount, uint32_t* previousCount)
    {
        auto current=count.load();
        for(;;)
        {
            if(!releaseCount || releaseCount>INT32_MAX) return 0xC000000D;
            if(current>maximumCount || releaseCount>maximumCount-current)
                return 0xC0000047; // STATUS_SEMAPHORE_LIMIT_EXCEEDED
            const auto previous=current;
            if(count.compare_exchange_strong(current,current+releaseCount))
            {
                if(previousCount) *previousCount=previous;
                count.notify_all(); return 0;
            }
        }
    }
};
