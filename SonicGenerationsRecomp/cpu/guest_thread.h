#pragma once

#include <kernel/xdm.h>

#include <array>
#include <cstdint>
#include <thread>
#include <condition_variable>
#include <ppc/ppc_recomp_shared.h>

// Use pthreads directly on macOS to be able to increase default stack size.
#ifdef __APPLE__
#define USE_PTHREAD 1
#endif

#ifdef USE_PTHREAD
#include <pthread.h>
#endif

#define CURRENT_THREAD_HANDLE uint32_t(-2)

struct GuestThreadContext
{
    PPCContext ppcContext{};
    uint8_t* thread = nullptr;

    GuestThreadContext(uint32_t cpuNumber, uint32_t guestBody=0);
    ~GuestThreadContext();
};

struct GuestThreadParams
{
    uint32_t function;
    uint32_t value;
    uint32_t flags;
};

struct GuestThreadHandle : KernelObject
{
    GuestThreadParams params;
    std::atomic<bool> suspended;
    std::atomic<bool> completed{false};
    std::mutex completionMutex;
    std::condition_variable completionChanged;
    bool external=false;
    void Complete();
    void OnRegistered() override;
#ifdef USE_PTHREAD
    pthread_t thread;
#else
    std::thread thread;
#endif

    GuestThreadHandle(const GuestThreadParams& params, bool external=false);
    ~GuestThreadHandle() override;

    uint32_t GetThreadId() const;

    uint32_t Wait(uint32_t timeout) override;
};

struct GuestThread
{
    static uint32_t Start(const GuestThreadParams& params);
    static GuestThreadHandle* Start(const GuestThreadParams& params, uint32_t* threadId);

    static uint32_t GetCurrentThreadId();
    static void SetLastError(uint32_t error);

#ifdef _WIN32
    static void SetThreadName(uint32_t threadId, const char* name);
#endif
};
