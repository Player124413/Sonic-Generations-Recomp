#include <stdafx.h>
#include "object_manager.h"
#include "xdm.h"
#include <limits>

namespace
{
// Guest layout offsets from Xenia kernel/xobject.h (licenses/Xenia-BSD.txt).
// Lifecycle runs in HLE. Unknown fields and optional guest callbacks are not
// invented: these descriptors support identity, dispatcher offset and pool tag,
// not executing native Xbox kernel allocation/deletion routines.
struct GuestType
{
    be<uint32_t> constructor{}, destructor{}, unknown08{}, unknown0C{}, unknown10{};
    be<uint32_t> dispatcherOffset{}, poolTag{};
};
struct GuestHeader
{
    be<uint32_t> pointers{}, handles{};
    uint8_t nameOffset=0, handleOffset=0, quotaOffset=0, flags=0;
    be<uint32_t> createInfo{}, type{}, reserved{};
};
static_assert(sizeof(GuestType)==0x1C && offsetof(GuestType,poolTag)==0x18);
static_assert(sizeof(GuestHeader)==0x18 && offsetof(GuestHeader,type)==0x10);
struct Record
{
    std::shared_ptr<KernelObject> object;
    uint32_t handles=1, references=0;
};
struct Registry
{
    std::mutex mutex;
    uint64_t next=0xF8000004;
    std::map<uint32_t,std::shared_ptr<Record>> handles;
    std::map<uint32_t,std::weak_ptr<Record>> bodies;
    std::map<uint32_t,std::shared_ptr<Record>> references;
    std::map<KernelObjects::Type,uint32_t> types;
};
// Process-lifetime owner, like guest memory. Do not join unfinished title
// threads or touch other translation units' globals during static teardown.
Registry& State() { static auto* state=new Registry; return *state; }
thread_local KernelObjects::CallScope* scope=nullptr;
thread_local KernelObject* currentThread=nullptr;
void Counts(const Record& record)
{
    if(!record.object->ownsBody) return;
    auto* header=static_cast<GuestHeader*>(g_memory.Translate(record.object->guestBody))-1;
    header->pointers=record.handles+record.references;
    header->handles=record.handles;
}
std::shared_ptr<Record> Find(Registry& state,uint32_t handle)
{
    if(handle==0xFFFFFFFEu && currentThread)
    {
        auto found=state.bodies.find(currentThread->guestBody);
        return found==state.bodies.end() ? nullptr : found->second.lock();
    }
    auto found=state.handles.find(handle);
    return found==state.handles.end() ? nullptr : found->second;
}
bool AddReference(Registry& state,const std::shared_ptr<Record>& record)
{
    if(!record || !record->object->ownsBody ||
       record->references==UINT32_MAX-record->handles) return false;
    state.references.emplace(record->object->guestBody,record);
    ++record->references; Counts(*record); return true;
}
}

uint32_t KernelObjects::TypeAddress(Type type)
{
    uint32_t tag;
    switch(type)
    {
    case Type::Event: tag=0x4576656E; break; // Even
    case Type::Semaphore: tag=0x53656D61; break; // Sema
    case Type::Thread: tag=0x54687265; break; // Thre
    default: return 0;
    }
    auto& state=State(); std::lock_guard lock(state.mutex);
    if(auto found=state.types.find(type); found!=state.types.end()) return found->second;
    auto* memory=g_userHeap.Alloc(sizeof(GuestType));
    if(!memory) throw std::bad_alloc();
    auto* descriptor=new(memory) GuestType{};
    descriptor->poolTag=tag;
    const auto address=g_memory.MapVirtual(descriptor);
    try { state.types.emplace(type,address); }
    catch(...) { g_userHeap.Free(memory); throw; }
    return address;
}
uint32_t KernelObjects::AllocateBody(Type type,uint32_t bytes)
{
    const auto descriptor=TypeAddress(type);
    if(!descriptor || bytes>UINT32_MAX-sizeof(GuestHeader)) throw std::bad_alloc();
    auto* memory=g_userHeap.Alloc(sizeof(GuestHeader)+bytes);
    if(!memory) throw std::bad_alloc();
    std::memset(memory,0,sizeof(GuestHeader)+bytes);
    auto* header=new(memory) GuestHeader{};
    header->type=descriptor;
    return g_memory.MapVirtual(header+1);
}
void KernelObjects::FreeBody(uint32_t body)
{
    if(body) g_userHeap.Free(static_cast<GuestHeader*>(g_memory.Translate(body))-1);
}
void KernelObjects::Register(std::shared_ptr<KernelObject> object)
{
    auto record=std::make_shared<Record>(); record->object=std::move(object);
    auto& state=State(); std::lock_guard lock(state.mutex);
    if(state.next>0xFFFFFFF8ull) throw std::bad_alloc();
    const auto handle=uint32_t(state.next); state.next+=4; // never recycle stale IDs
    if(record->object->guestBody) state.bodies.insert_or_assign(record->object->guestBody,record);
    try { state.handles.emplace(handle,record); }
    catch(...) { state.bodies.erase(record->object->guestBody); throw; }
    record->object->handle=handle; Counts(*record);
}
std::shared_ptr<KernelObject> KernelObjects::Acquire(uint32_t handle)
{
    auto& state=State(); std::lock_guard lock(state.mutex);
    auto record=Find(state,handle);
    return record ? record->object : nullptr;
}
std::shared_ptr<KernelObject> KernelObjects::AcquireBody(uint32_t body)
{
    auto& state=State(); std::lock_guard lock(state.mutex);
    auto found=state.bodies.find(body);
    auto record=found==state.bodies.end() ? nullptr : found->second.lock();
    return record ? record->object : nullptr;
}
bool KernelObjects::Close(uint32_t handle)
{
    std::shared_ptr<Record> record;
    {
        auto& state=State(); std::lock_guard lock(state.mutex);
        auto found=state.handles.find(handle);
        if(found==state.handles.end()) return false; // pseudo-handles cannot be closed
        record=found->second; state.handles.erase(found);
        --record->handles; Counts(*record);
        if(!record->handles && !record->references) state.bodies.erase(record->object->guestBody);
    } // destruction, file close and thread cleanup must be outside registry lock
    return true;
}
uint32_t KernelObjects::Duplicate(uint32_t source,uint32_t& destination,bool closeSource)
{
    destination=0;
    auto& state=State(); std::lock_guard lock(state.mutex);
    auto record=Find(state,source);
    if(!record) return 0xC0000008;
    if(state.next>0xFFFFFFF8ull || record->handles>=UINT32_MAX-record->references) return 0xC000009A;
    destination=uint32_t(state.next);
    state.handles.emplace(destination,record); state.next+=4; ++record->handles;
    if(closeSource && state.handles.erase(source)) --record->handles;
    Counts(*record); return 0;
}
uint32_t KernelObjects::Reference(uint32_t handle,uint32_t type,uint32_t& body)
{
    body=0;
    auto& state=State(); std::lock_guard lock(state.mutex);
    auto record=Find(state,handle);
    if(!record) return 0xC0000008;
    if(!record->object->ownsBody) return 0xC0000002; // unsupported body, not a host pointer
    const auto expected=state.types.at(record->object->guestType);
    if(type && type!=expected) return 0xC0000024;
    if(!AddReference(state,record)) return 0xC000009A;
    body=record->object->guestBody; return 0;
}
bool KernelObjects::ReferenceBody(uint32_t body)
{
    auto& state=State(); std::lock_guard lock(state.mutex);
    auto found=state.bodies.find(body);
    return found!=state.bodies.end() && AddReference(state,found->second.lock());
}
bool KernelObjects::Dereference(uint32_t body)
{
    std::shared_ptr<Record> record;
    {
        auto& state=State(); std::lock_guard lock(state.mutex);
        auto found=state.references.find(body);
        if(found==state.references.end()) return false;
        record=found->second;
        --record->references; Counts(*record);
        if(!record->references)
        {
            state.references.erase(found);
            if(!record->handles) state.bodies.erase(body);
        }
    }
    return true;
}
void KernelObjects::SetCurrentThread(KernelObject* object) { currentThread=object; }
KernelObject* KernelObjects::CurrentThread() { return currentThread; }
KernelObjects::CallScope::CallScope() : previous(scope) { scope=this; }
KernelObjects::CallScope::~CallScope() { scope=previous; }
void KernelObjects::InvalidArgument() { if(scope) scope->invalid=true; }
KernelObject* KernelObjects::Pin(uint32_t value)
{
    auto object=Acquire(value);
    if(!object) object=AcquireBody(value);
    auto* pointer=object.get();
    if(scope && object) scope->pins.push_back(std::move(object));
    return pointer;
}
