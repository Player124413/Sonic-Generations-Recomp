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
    size_t vertices=0, fragments=0, addresses=0;
    std::map<std::pair<uint32_t,uint32_t>,size_t> bindings;
    if(argc==2) std::filesystem::create_directories(argv[1]);
    for(const auto& entry:cache.Entries())
    {
        ShaderModule module;
        CHECK(cache.Decode(entry.hash,module,error));
        CHECK(module.hash==entry.hash);
        if (vertices+fragments==0) std::printf("First entry point: %s\n",module.entryPoint.c_str());
        vertices+=module.stage==0; fragments+=module.stage==4;
        addresses+=module.bufferDeviceAddress;
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
