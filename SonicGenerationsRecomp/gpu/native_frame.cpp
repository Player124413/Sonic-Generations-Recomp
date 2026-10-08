#include <gpu/vulkan_backend.h>
#include <algorithm>
#include <cmath>
#include <new>
#include <set>

using namespace GuestGpu;

namespace
{
// sub_82DBF460, 0x82DBF4B8..0x82DBF59C: truncate viewport components
// individually, intersect the explicit rectangle with viewport and enabled
// scissor, then skip empty intersections. Do not apply stale disabled scissor.
bool ClearRectangle(const NativeClear& clear, uint32_t width, uint32_t height, VkRect2D& out)
{
    const auto v = clear.state.Viewport();
    if (std::any_of(v.begin(), v.begin()+4, [](float f) { return !std::isfinite(f); }) ||
        v[0] < 0 || v[1] < 0 || v[2] <= 0 || v[3] <= 0 ||
        double(v[0])+v[2] > width || double(v[1])+v[3] > height) return false;
    std::array<int32_t,4> r{int32_t(v[0]), int32_t(v[1]), int32_t(v[0])+int32_t(v[2]), int32_t(v[1])+int32_t(v[3])};
    const auto intersect = [&](const std::array<int32_t,4>& clip) {
        r[0]=std::max(r[0],clip[0]); r[1]=std::max(r[1],clip[1]);
        r[2]=std::min(r[2],clip[2]); r[3]=std::min(r[3],clip[3]);
    };
    intersect(clear.rectangle);
    if (clear.state.words[12264/4]) intersect(clear.state.Scissor());
    if (r[2]<=r[0] || r[3]<=r[1]) { out={}; return true; }
    out={{r[0],r[1]}, {uint32_t(r[2]-r[0]),uint32_t(r[3]-r[1])}};
    return true;
}
bool FullRectangle(const VkRect2D& r, uint32_t width, uint32_t height)
{ return !r.offset.x && !r.offset.y && r.extent.width==width && r.extent.height==height; }
}


void VulkanBackend::ResetNativeTargets()
{
    for(auto& [key,surface]:nativeSurfaces)
    { host.Destroy(surface.color); host.Destroy(surface.depth); }
    for(auto& [key,depth]:nativeDepths) host.Destroy(depth.image);
    nativeDepths.clear();
    for(auto& [key,texture]:nativeTextures) host.Destroy(texture.image);
    nativeSurfaces.clear(); nativeTextures.clear(); frameImage=0; frameReady=false;
}

GuestGpu::SubmissionResult VulkanBackend::SubmitNativeFrame(const NativeBatch& batch)
{
    std::lock_guard lock(mutex);
    frameReady=false; frameImage=0; frameWidth=frameHeight=0;
    auto reject=[&](const char* reason) {
        Fail(reason); ResetNativeTargets(); return SubmissionResult::Incomplete;
    };
    try
    {
        if(!host.IsReady() || batch.errors.Any() || !batch.hasBackbuffer ||
           batch.backbuffer.status!=ConversionResult::Success)
            return reject("Native frame requires valid capture and an explicit guest backbuffer");
        struct Event { uint64_t sequence; unsigned kind; size_t index; };
        std::vector<Event> events;
        for(size_t i=0;i<batch.draws.size();++i) events.push_back({batch.draws[i].sequence,0,i});
        for(size_t i=0;i<batch.clears.size();++i) events.push_back({batch.clears[i].sequence,1,i});
        for(size_t i=0;i<batch.resolves.size();++i) events.push_back({batch.resolves[i].sequence,2,i});
        if(events.size()>CommandStream::MaxDraws) return reject("Native command limit exceeded");
        std::sort(events.begin(),events.end(),[](auto a,auto b){return a.sequence<b.sequence;});
        for(size_t i=1;i<events.size();++i)
            if(events[i-1].sequence==events[i].sequence) return reject("Duplicate native command sequence");
        // Validate surfaces and resolve views before executing any commands.
        std::vector<VkRect2D> clearRectangles(batch.clears.size());
        auto surfacePlan=nativeSurfaces;
        auto texturePlan=nativeTextures;
        auto depthPlan=nativeDepths;
        auto validate=[&](const NativeTargets& targets,const NativeState& state,uint32_t device) {
            if(!targets.captured || device!=batch.presentDevice) return false;
            const auto& s=targets.surfaces[0];
            if(!s.resource || s.resource!=state.ColorTargets()[0] || s.status!=ConversionResult::Success ||
               (s.descriptor[1]&~4095u) || state.words[10372/4]!=s.descriptor[1] || s.samples || s.format || !s.tileCount || s.baseTile>=2048 || s.tileCount>2048-s.baseTile ||
               !s.width || !s.height || s.width>8192 || s.height>8192) return false;
            const auto& d=targets.surfaces[4];
            if(d.resource!=state.DepthTarget()) return false;
            if(d.resource) {
                // D24S8 is fixed-point. D24FS8 is 20e4 floating point, not D32.
                if(d.status!=ConversionResult::Success || d.samples || d.format ||
                   (d.descriptor[1]&~4095u) || state.words[10376/4]!=d.descriptor[1] ||
                   !d.tileCount || d.baseTile>=2048 || d.tileCount>2048-d.baseTile ||
                   d.width!=s.width || d.height!=s.height) return false;
                for(const auto& [base,entry]:depthPlan) {
                    const auto& prior=entry.descriptor;
                    if(d.baseTile<base+prior.tileCount && base<d.baseTile+d.tileCount &&
                       (base!=d.baseTile || d.descriptor!=prior.descriptor)) return false;
                }
                for(const auto& [base,entry]:surfacePlan)
                    if(d.baseTile<base+entry.descriptor.tileCount && base<d.baseTile+d.tileCount) return false;
                if(!depthPlan.contains(d.baseTile)) {
                    if(depthPlan.size()>=32) return false;
                    depthPlan.emplace(d.baseTile,DepthImage{d});
                }
            }
            for(const auto& [base,entry]:depthPlan)
                if(s.baseTile<base+entry.descriptor.tileCount && base<s.baseTile+s.tileCount) return false;
            for(size_t i=1;i<4;++i) if(state.ColorTargets()[i] || targets.surfaces[i].resource) return false;
            for(const auto& [base,entry]:surfacePlan)
            {
                const auto& prior=entry.descriptor;
                const bool overlap=s.baseTile<base+prior.tileCount && base<s.baseTile+s.tileCount;
                if(overlap && (s.baseTile!=base || s.descriptor!=prior.descriptor)) return false;
            }
            if(!surfacePlan.contains(s.baseTile))
            {
                if(surfacePlan.size()>=32) return false;
                surfacePlan.emplace(s.baseTile,SurfaceImage{s});
            }
            return true;
        };
        for(const auto& e:events)
        {
            if(e.kind==0)
            {
                const auto& draw=batch.draws[e.index];
                if(!validate(draw.targets,draw.state,draw.device)) return reject("Unsupported native draw target or EDRAM alias");
                if(!surfacePlan.at(draw.targets.surfaces[0].baseTile).initialized)
                    return reject("Native draw reads undefined EDRAM contents");
                const auto fixed=HostGpu::DecodeFixedState(draw.state);
                const auto& d=draw.targets.surfaces[4];
                if(fixed.depth.depthTestEnable || fixed.depth.depthWriteEnable || fixed.requiresStencil) {
                    if(!d.resource) return reject("Depth/stencil state requires a native attachment");
                    const auto& planned=depthPlan.at(d.baseTile);
                    if(((fixed.depth.depthTestEnable || fixed.depth.depthWriteEnable) && !planned.depthInitialized) ||
                       (fixed.requiresStencil && !planned.stencilInitialized))
                        return reject("Native draw reads undefined depth/stencil contents");
                }
            }
            else if(e.kind==1)
            {
                const auto& clear=batch.clears[e.index]; const auto& s=clear.targets.surfaces[0];
                auto& rectangle=clearRectangles[e.index];
                if(!validate(clear.targets,clear.state,clear.device) || !clear.flags || (clear.flags & ~0x31u) ||
                   !ClearRectangle(clear,s.width,s.height,rectangle) ||
                   ((clear.flags & 1) && std::any_of(clear.color.begin(),clear.color.end(),[](float f){return !std::isfinite(f); })))
                    return reject("Invalid native single-sample color clear");
                const bool full=FullRectangle(rectangle,s.width,s.height);
                if(clear.flags & 1) {
                    auto& initialized=surfacePlan.at(s.baseTile).initialized;
                    if(rectangle.extent.width && rectangle.extent.height && !initialized && !full)
                        return reject("Partial clear cannot initialize the whole native surface");
                    initialized=initialized || full;
                }
                if(clear.flags & 0x30) {
                    const auto& d=clear.targets.surfaces[4];
                    if(!d.resource || ((clear.flags & 0x10) &&
                       (!std::isfinite(clear.depth) || clear.depth<0 || clear.depth>1)))
                        return reject("Depth/stencil clear requires a valid D24S8 target");
                    auto& initialized=depthPlan.at(d.baseTile);
                    const bool nonempty=rectangle.extent.width && rectangle.extent.height;
                    if(nonempty && !full && (((clear.flags & 0x10) && !initialized.depthInitialized) ||
                       ((clear.flags & 0x20) && !initialized.stencilInitialized)))
                        return reject("Partial clear cannot initialize an undefined depth/stencil aspect");
                    if(clear.flags & 0x10) initialized.depthInitialized|=full;
                    if(clear.flags & 0x20) initialized.stencilInitialized|=full;
                }
            }
            else
            {
                const auto& resolve=batch.resolves[e.index]; const auto& s=resolve.targets.surfaces[0];
                const auto& t=resolve.destination;
                if(!validate(resolve.targets,resolve.state,resolve.device) || resolve.flags || resolve.rectangle ||
                   resolve.point || resolve.mip || resolve.slice || t.status!=ConversionResult::Success ||
                   t.width!=s.width || t.height!=s.height || !t.physical)
                    return reject("Resolve requires full RGBA8 level-zero, single-sample color copy without side effects");
                if(!surfacePlan.at(s.baseTile).initialized) return reject("Resolve reads undefined EDRAM contents");
                TextureLayout layout; size_t bytes=0;
                if(TextureLayout::Decode(t.fetch,layout)!=ConversionResult::Success ||
                   TextureSourceExtent(layout,bytes)!=ConversionResult::Success || uint64_t(t.physical)+bytes>(uint64_t{1}<<32))
                    return reject("Invalid resolve destination footprint");
                for(const auto& [base,entry]:texturePlan)
                {
                    TextureLayout other; size_t otherBytes=0;
                    if(TextureLayout::Decode(entry.descriptor.fetch,other)!=ConversionResult::Success ||
                       TextureSourceExtent(other,otherBytes)!=ConversionResult::Success)
                        return reject("Invalid cached resolve footprint");
                    if(base!=t.physical && uint64_t(t.physical)<uint64_t(base)+otherBytes && uint64_t(base)<uint64_t(t.physical)+bytes)
                        return reject("Overlapping resolve destinations are unsupported");
                }
                auto found=texturePlan.find(t.physical);
                if(found!=texturePlan.end() && !SameTextureStorage(found->second.descriptor,t.fetch))
                    return reject("Resolve destination aliases an incompatible texture view");
                if(found==texturePlan.end())
                {
                    if(texturePlan.size()>=32) return reject("Native resolve texture limit exceeded");
                    texturePlan.emplace(t.physical,ResolvedImage{t});
                }
            }
        }
        auto selected=texturePlan.find(batch.backbuffer.physical);
        if(selected==texturePlan.end() || !SameTextureStorage(selected->second.descriptor,batch.backbuffer.fetch))
            return reject("Guest backbuffer has no matching resolved image");

        // The original diagnostic targets are never used for native presentation.
        // Reuse the existing shader/resource validator for each draw, but replay
        // into the selected persistent surface, with LOAD and no synthetic clear.
        for(const auto& e:events)
        {
            const NativeTargets& targets=e.kind==0 ? batch.draws[e.index].targets :
                e.kind==1 ? batch.clears[e.index].targets : batch.resolves[e.index].targets;
            const auto& s=targets.surfaces[0];
            auto [it,inserted]=nativeSurfaces.try_emplace(s.baseTile,SurfaceImage{s});
            auto& surface=it->second;
            if(inserted)
            {
                surface.color=host.CreateImage(s.width,s.height,HostGpu::ImageKind::Rgba8);
                // Attachment required by the current pipeline ABI, not a guest depth surface.
                surface.depth=host.CreateImage(s.width,s.height,HostGpu::ImageKind::Depth32);
                if(!surface.color || !surface.depth || !host.ClearDepth(surface.depth,1))
                    return reject("Native surface allocation failed");
            }
            const auto& d=targets.surfaces[4];
            HostGpu::Resource guestDepth=0;
            if(d.resource) {
                auto [di,created]=nativeDepths.try_emplace(d.baseTile,DepthImage{d});
                if(created) di->second.image=host.CreateImage(d.width,d.height,HostGpu::ImageKind::Depth24Stencil8);
                guestDepth=di->second.image;
                if(!guestDepth) return reject("Native D24S8 allocation/format unsupported");
            }
            if(e.kind==1)
            {
                const auto& clear=batch.clears[e.index];
                const auto& rectangle=clearRectangles[e.index];
                if(clear.flags & 1) {
                    if(!host.ClearColorRegion(surface.color,clear.color,rectangle)) return reject("Native surface clear failed");
                    surface.initialized=surface.initialized || FullRectangle(rectangle,s.width,s.height);
                }
                if(clear.flags & 0x30) {
                    const auto aspects=((clear.flags & 0x10) ? VK_IMAGE_ASPECT_DEPTH_BIT : 0) |
                        ((clear.flags & 0x20) ? VK_IMAGE_ASPECT_STENCIL_BIT : 0);
                    if(!host.ClearDepthStencilRegion(guestDepth,clear.depth,clear.stencil,aspects,rectangle)) return reject("Native depth/stencil clear failed");
                    auto& initialized=nativeDepths.at(d.baseTile);
                    if(clear.flags & 0x10) initialized.depthInitialized|=FullRectangle(rectangle,s.width,s.height);
                    if(clear.flags & 0x20) initialized.stencilInitialized|=FullRectangle(rectangle,s.width,s.height);
                }
            }
            else if(e.kind==2)
            {
                const auto& t=batch.resolves[e.index].destination;
                auto [dest,newTexture]=nativeTextures.try_emplace(t.physical,ResolvedImage{t});
                if(newTexture) dest->second.image=host.CreateImage(t.width,t.height,HostGpu::ImageKind::Rgba8);
                if(!dest->second.image || !host.CopyImage(surface.color,dest->second.image))
                    return reject("Native surface-to-texture resolve failed");
            }
            else
            {
                if(!surface.initialized) return reject("Native draw target must be initialized by a guest clear");
                struct Restore
                {
                    VulkanBackend& backend; HostGpu::Resource c,d; uint32_t w,h;
                    ~Restore() { backend.color=c; backend.depth=d; backend.width=w; backend.height=h; backend.nativeReplay=false; }
                } restore{*this,color,depth,width,height};
                color=surface.color; depth=guestDepth ? guestDepth : surface.depth; width=s.width; height=s.height; nativeReplay=true;
                NativeBatch draw; draw.draws.push_back(batch.draws[e.index]); draw.payloadBytes=batch.draws[e.index].resources.payloadBytes;
                if(SubmitGuestBatch(draw)!=SubmissionResult::Submitted) return reject("Native target draw failed validation/submission");
            }
        }
        frameImage=nativeTextures.at(batch.backbuffer.physical).image;
        frameWidth=batch.backbuffer.width; frameHeight=batch.backbuffer.height;
        frameReady=true;
        return SubmissionResult::Submitted;
    }
    catch(const std::bad_alloc&) { return reject("Native frame allocation failed"); }
}
