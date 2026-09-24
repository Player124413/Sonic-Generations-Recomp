#pragma once
#include <cstdint>
#include <memory>
#include <vector>

struct KernelObject;
namespace KernelObjects
{
    // Only types with implemented guest bodies are exported.
    enum class Type : uint32_t { Unknown=0, Event=0xE, Semaphore=0x17, Thread=0x1B };
    uint32_t TypeAddress(Type type);
    uint32_t AllocateBody(Type type, uint32_t bytes);
    void FreeBody(uint32_t body);
    void Register(std::shared_ptr<KernelObject> object);
    std::shared_ptr<KernelObject> Acquire(uint32_t handle);
    std::shared_ptr<KernelObject> AcquireBody(uint32_t body);
    bool Close(uint32_t handle);
    uint32_t Duplicate(uint32_t source, uint32_t& destination, bool closeSource);
    uint32_t Reference(uint32_t handle, uint32_t type, uint32_t& body);
    bool ReferenceBody(uint32_t body);
    bool Dereference(uint32_t body);
    void SetCurrentThread(KernelObject* object);
    KernelObject* CurrentThread();

    // Host argument conversion pins objects until the complete imported call
    // returns, including blocking waits. Nested guest callbacks get own scopes.
    struct CallScope
    {
        CallScope();
        ~CallScope();
        CallScope(const CallScope&)=delete;
        CallScope& operator=(const CallScope&)=delete;
        CallScope* previous;
        bool invalid=false;
        std::vector<std::shared_ptr<KernelObject>> pins;
    };
    KernelObject* Pin(uint32_t handleOrBody);
    void InvalidArgument();
}
