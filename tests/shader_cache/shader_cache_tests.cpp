#include <gpu/shader_cache.h>
#include <cstdio>
#include <cstdlib>
#include <filesystem>
#include <fstream>
#include <map>
#define CHECK(x) do { if (!(x)) { std::fprintf(stderr,"FAIL %d: %s (%s)\n",__LINE__,#x,error.c_str()); std::abort(); } } while(false)
int main(int argc, char** argv)
{
    using namespace GuestGpu;
    const auto data = GetEmbeddedShaderCache();
    std::string error;
    ShaderCache cache;
    CHECK(cache.Initialize(data,error));
    CHECK(cache.Entries().size()==data.entries.size());
    // The supplied Generations cache has 6,404 modules. Matching its own size
    // declaration is insufficient: an accidentally truncated/replaced cache
    // must not silently qualify as complete title coverage.
    CHECK(data.entries.size()==6404);
    size_t dxilEntries=0;
    for(const auto& entry:data.entries) if(entry.dxilSize) ++dxilEntries;
    std::printf("Cache payloads: %zu SPIR-V, %zu DXIL (DXIL is not the Vulkan runtime path)\n",data.entries.size(),dxilEntries);
    for (size_t i=0;i<data.entries.size();++i)
        CHECK(cache.Entries()[i].specConstantsMask==data.entries[i].specConstantsMask);
    size_t vertices=0, fragments=0, addresses=0;
    std::map<std::pair<uint32_t,uint32_t>,size_t> bindings;
    std::map<uint32_t,size_t> capabilities;
    if(argc==2) std::filesystem::create_directories(argv[1]);
    for(const auto& entry:cache.Entries())
    {
        ShaderModule module;
        CHECK(cache.Decode(entry.hash,module,error));
        CHECK(module.hash==entry.hash && module.specializationMask==entry.specConstantsMask);
        ShaderModule wrongStage; wrongStage.hash=123;
        CHECK(!cache.DecodeStage(entry.hash, module.stage==0 ? 4 : 0, wrongStage, error));
        CHECK(wrongStage.hash==123);

        if (vertices+fragments==0) std::printf("First entry point: %s\n",module.entryPoint.c_str());
        vertices+=module.stage==0; fragments+=module.stage==4;
        addresses+=module.bufferDeviceAddress;
        for(auto capability:module.capabilities) ++capabilities[capability];
        for(const auto& b:module.bindings) ++bindings[{b.set,b.binding}];
        if(argc==2)
        {
            char name[32]; std::snprintf(name,sizeof(name),"%016llx.spv",static_cast<unsigned long long>(entry.hash));
            std::ofstream file(std::filesystem::path(argv[1])/name,std::ios::binary);
            file.write(reinterpret_cast<const char*>(module.words.data()),std::streamsize(module.words.size()*4));
            CHECK(file.good());
        }
    }
    std::printf("%zu shaders: %zu vertex, %zu fragment; %zu physical-address modules\n",cache.Entries().size(),vertices,fragments,addresses);
    for(const auto& [capability,count]:capabilities) std::printf("SPIR-V capability=%u: %zu modules\n",capability,count);
    for(const auto& [binding,count]:bindings) std::printf("set=%u binding=%u: %zu modules\n",binding.first,binding.second,count);
    ShaderModule untouched; untouched.hash=123;
    CHECK(!cache.Decode(0,untouched,error) && untouched.hash==123);
    ShaderCacheData bad=data; ++bad.declaredCount;
    CHECK(!cache.Initialize(bad,error) && cache.Entries().empty());
    bad=data; --bad.decodedSize;
    CHECK(!cache.Initialize(bad,error));
    auto entries=std::vector<ShaderCacheEntry>(data.entries.begin(),data.entries.end());
    entries[1].hash=entries[0].hash; bad=data; bad.entries=entries;
    CHECK(!cache.Initialize(bad,error));
    entries[1]=data.entries[1]; entries[0].spirvSize=UINT32_MAX;
    CHECK(!cache.Initialize(bad,error));
    auto compressed=std::vector<uint8_t>(data.compressed.begin(),data.compressed.end());
    compressed[0]=0; bad=data; bad.compressed=compressed;
    CHECK(!cache.Initialize(bad,error));
    CHECK(cache.Initialize(data,error));
    ShaderModule module;
    CHECK(cache.Decode(cache.Entries()[0].hash,module,error));
    auto words=module.words; words[5]=0;
    CHECK(!InspectShader(words,untouched,error) && untouched.hash==123);
    words=module.words; words.push_back(2u << 16);
    CHECK(!InspectShader(words,untouched,error));
    std::puts("Uploaded shader cache decode, lookup, structure and rejection tests passed");
}
