#include <stdafx.h>
#include "xam_content_registry.h"
#include "xam_objects.h"
#include "function.h"


namespace
{
std::array<std::unordered_map<std::string,XHOSTCONTENT_DATA>,3> content;
std::unordered_map<std::string,std::string> roots;
bool ValidContent(const XCONTENT_DATA& data)
{
    return data.dwContentType>=1 && data.dwContentType<=content.size() &&
        std::memchr(data.szFileName,0,sizeof(data.szFileName));
}
}
std::recursive_mutex& XamContentMutex() { static std::recursive_mutex mutex; return mutex; }
std::string XamGetRootPath(const std::string_view& root)
{
    std::lock_guard lock(XamContentMutex());
    auto found=roots.find(std::string(root));
    return found==roots.end() ? std::string{} : found->second;
}
void XamRootCreate(const std::string_view& root,const std::string_view& path)
{
    std::lock_guard lock(XamContentMutex()); roots.insert_or_assign(std::string(root),std::string(path));
}
bool XamRootClose(std::string_view root)
{ std::lock_guard lock(XamContentMutex()); return roots.erase(std::string(root))!=0; }
XCONTENT_DATA XamMakeContent(uint32_t type,const std::string_view& name)
{
    XCONTENT_DATA data{}; data.DeviceID=1; data.dwContentType=type;
    std::memcpy(data.szFileName,name.data(),std::min(name.size(),sizeof(data.szFileName)-1));
    return data;
}
void XamRegisterContent(const XCONTENT_DATA& data,const std::string_view& root)
{
    if(!ValidContent(data)) return;
    std::lock_guard lock(XamContentMutex());
    auto& entry=content[data.dwContentType-1].emplace(std::string(data.szFileName),XHOSTCONTENT_DATA{data}).first->second;
    entry.szRoot=root;
}
void XamRegisterContent(uint32_t type,const std::string_view name,const std::string_view& root)
{ XamRegisterContent(XamMakeContent(type,name),root); }
bool XamFindContentRoot(const XCONTENT_DATA& data,std::string& root)
{
    if(!ValidContent(data)) return false;
    std::lock_guard lock(XamContentMutex());
    auto& registry=content[data.dwContentType-1];
    auto found=registry.find(std::string(data.szFileName));
    if(found==registry.end()) return false;
    root=found->second.szRoot; return true;
}
uint32_t XamContentCreateEnumerator(uint32_t user,uint32_t device,uint32_t type,uint32_t flags,
    uint32_t fetch,be<uint32_t>* bufferSize,be<uint32_t>* handle)
{
    if(bufferSize) *bufferSize=0;
    if(handle) *handle=0;
    if(!handle || type<1 || type>content.size() || !fetch || fetch>UINT32_MAX/sizeof(XCONTENT_DATA)) return 87;
    if(user!=0) return 1317;
    std::vector<uint8_t> snapshot;
    {
        std::lock_guard lock(XamContentMutex());
        for(const auto& [key,entry]:content[type-1])
        {
            if(device && entry.DeviceID!=device) continue;
            const auto offset=snapshot.size(); snapshot.resize(offset+sizeof(XCONTENT_DATA),0);
            // Copy only the guest POD fields; never std::string or host padding.
            std::memcpy(snapshot.data()+offset,static_cast<const XCONTENT_DATA*>(&entry),
                offsetof(XCONTENT_DATA,szFileName)+sizeof(entry.szFileName));
        }
    }
    *handle=GetKernelHandle(CreateKernelObject<XamSnapshotEnumerator>(sizeof(XCONTENT_DATA),fetch,std::move(snapshot)));
    if(bufferSize) *bufferSize=fetch*sizeof(XCONTENT_DATA);
    return 0;
}
GUEST_FUNCTION_HOOK(__imp__XamContentCreateEnumerator,XamContentCreateEnumerator);
