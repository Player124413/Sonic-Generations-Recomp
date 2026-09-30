#include "graphics_bridge.h"
#include "host_policy.h"
#include "input_defaults.h"
#include "native_coverage.h"
#include <cstdio>
#include <cmath>
#include <iterator>
#include <string>
#include <rex/cvar.h>

namespace {
int failures=0;
#define CHECK(condition) do { if(!(condition)) { std::fprintf(stderr,"FAIL %d: %s\n",__LINE__,#condition); ++failures; } } while(false)
struct State {
    unsigned presentation=0, guest=0, shutdown=0, interrupts=0, rings=0, writebacks=0, storage=0, destroyed=0;
    uint32_t callback=0, data=0, ring=0, ringSize=0, read=0, readSize=0, title=0;
    bool ready=false, blocking=false;
    rex::X_STATUS status=0xC0000001u;
    rex::ui::WindowedAppContext* context=nullptr;
    rex::runtime::FunctionDispatcher* dispatcher=nullptr;
    rex::system::KernelState* kernel=nullptr;
    std::filesystem::path cache;
};
class Reference final : public rex::system::IGraphicsSystem {
public:
    explicit Reference(State& s) : s_(s) {}
    ~Reference() override { ++s_.destroyed; }
    rex::X_STATUS SetupPresentation(rex::ui::WindowedAppContext* c) override {
        ++s_.presentation; s_.context=c; return s_.status;
    }
    rex::X_STATUS SetupGuestGpu(rex::runtime::FunctionDispatcher* d,rex::system::KernelState* k) override {
        ++s_.guest; s_.dispatcher=d; s_.kernel=k; return s_.status;
    }
    bool has_presentation() const override { return s_.ready; }
    rex::ui::GraphicsProvider* provider() const override {
        return reinterpret_cast<rex::ui::GraphicsProvider*>(&s_);
    }
    rex::ui::Presenter* presenter() const override {
        return reinterpret_cast<rex::ui::Presenter*>(&s_);
    }
    void SetInterruptCallback(uint32_t callback,uint32_t data) override {
        ++s_.interrupts; s_.callback=callback; s_.data=data;
    }
    void InitializeRingBuffer(uint32_t ring,uint32_t size) override {
        ++s_.rings; s_.ring=ring; s_.ringSize=size;
    }
    void EnableReadPointerWriteBack(uint32_t read,uint32_t size) override {
        ++s_.writebacks; s_.read=read; s_.readSize=size;
    }
    void InitializeShaderStorage(const std::filesystem::path& cache,uint32_t title,bool blocking) override {
        ++s_.storage; s_.cache=cache; s_.title=title; s_.blocking=blocking;
    }
    void Shutdown() override { ++s_.shutdown; }
private: State& s_;
};
}
int main() {
    using namespace sonic::rex_host;
    State s;
    {
        GraphicsBridge bridge(std::make_unique<Reference>(s));
        auto* context=reinterpret_cast<rex::ui::WindowedAppContext*>(&s);
        auto* dispatcher=reinterpret_cast<rex::runtime::FunctionDispatcher*>(&s);
        auto* kernel=reinterpret_cast<rex::system::KernelState*>(&s);
        CHECK(bridge.SetupPresentation(context)==0xC0000001u);
        CHECK(s.presentation==1 && s.context==context);
        CHECK(bridge.SetupGuestGpu(dispatcher,kernel)==0xC0000001u);
        CHECK(s.guest==1 && s.dispatcher==dispatcher && s.kernel==kernel);
        CHECK(!bridge.has_presentation()); s.ready=true; CHECK(bridge.has_presentation());
        CHECK(bridge.provider()==reinterpret_cast<rex::ui::GraphicsProvider*>(&s));
        CHECK(bridge.presenter()==reinterpret_cast<rex::ui::Presenter*>(&s));
        bridge.SetInterruptCallback(0x83680000,0x82000000);
        bridge.InitializeRingBuffer(0xA0000000,19);
        bridge.EnableReadPointerWriteBack(0xA0010000,7);
        bridge.InitializeShaderStorage("assets/rex-cache",0x53450848,true);
        CHECK(s.interrupts==1 && s.callback==0x83680000 && s.data==0x82000000);
        CHECK(s.rings==1 && s.ring==0xA0000000 && s.ringSize==19);
        CHECK(s.writebacks==1 && s.read==0xA0010000 && s.readSize==7);
        CHECK(s.storage==1 && s.cache=="assets/rex-cache" && s.title==0x53450848 && s.blocking);
        // The SDK's combined setup helper must propagate errors, not report success.
        s.ready=false;
        CHECK(bridge.Setup(dispatcher,kernel,context,true)==0xC0000001u);
        CHECK(s.presentation==2 && s.guest==1);
        s.status=0;
        CHECK(bridge.Setup(dispatcher,kernel,context,true)==0);
        CHECK(s.presentation==3 && s.guest==2);
        bridge.Shutdown(); bridge.Shutdown(); CHECK(s.shutdown==1);
    }
    CHECK(s.shutdown==1 && s.destroyed==1);
    try { GraphicsBridge invalid(nullptr); CHECK(false); }
    catch(const std::invalid_argument&) {}
    CHECK(ParseGraphicsMode("")==GraphicsMode::Reference);
    CHECK(ParseGraphicsMode("reference")==GraphicsMode::Reference);
    CHECK(ParseGraphicsMode("forward")==GraphicsMode::Forward);
    for(const char* mode : {"shadow","native","d3d12","typo"}) {
        try { ParseGraphicsMode(mode); CHECK(false); } catch(const std::invalid_argument&) {}
    }
    const auto root=std::filesystem::path("C:/runtime with spaces");
    const auto paths=BuildPaths(root);
    CHECK(paths.game==root/"assets");
    CHECK(paths.user==root/"assets/rex-user");
    CHECK(paths.config==root/"assets/rex-runtime.toml");
    CHECK(paths.update==root/"assets/update" && paths.cache==root/"assets/rex-cache");
    // Keyboard layout: verifiable without a window, a pad or the guest.
    const auto tokens=SplitInputBinding(" W , Up ,, ");
    CHECK(tokens.size()==2 && tokens[0]=="W" && tokens[1]=="Up");
    CHECK(SplitInputBinding("").empty());
    CHECK(DuplicateBareInputKeys().empty());
    for(const auto& entry : kKeyboardDefaults) {
        if(entry.name=="mnk_mode") continue;
        for(const auto token : SplitInputBinding(entry.value))
            CHECK(!InputKeyIsReserved(token));
    }
    // Contract with the pinned SDK: every name and value must be accepted by the
    // real cvar registry, otherwise the layout silently loses keys.
    const auto expected=uint32_t(std::size(kKeyboardDefaults));
    const auto applied=ApplyKeyboardInputDefaults();
    CHECK(applied.rejected==0);
    CHECK(applied.kept_explicit==0);
    CHECK(applied.applied==expected);
    CHECK(KeyboardInputEnabled());
    CHECK(rex::cvar::GetFlagByName("keybind_a")=="Space");
    CHECK(rex::cvar::GetFlagByName("keybind_lstick_up")=="W,Up");
    // A value the player set must survive a re-apply: our defaults never fight
    // an explicit choice from the config file, the environment or the overlay.
    CHECK(rex::cvar::SetFlagByName("keybind_a","K"));
    const auto second=ApplyKeyboardInputDefaults();
    CHECK(second.applied==0 && second.rejected==0 && second.kept_explicit==expected);
    CHECK(rex::cvar::GetFlagByName("keybind_a")=="K");
    // Native diagnostics cost control: sampling and readback are opt in, and a
    // typo is rejected instead of silently replaying every frame.
    CHECK(ParseNativeFrameStride("")==1);
    CHECK(ParseNativeFrameStride("1")==1);
    CHECK(ParseNativeFrameStride("30")==30);
    CHECK(ParseNativeFrameStride("1000000")==1000000);
    for(const char* bad : {"0","00","-1","1.5","1e3","abc"," 30","30 ","1000001","99999999999"}) {
        try { ParseNativeFrameStride(bad); CHECK(false); } catch(const std::invalid_argument&) {}
    }
    CHECK(!ParseNativeReadback(""));
    CHECK(!ParseNativeReadback("0"));
    CHECK(!ParseNativeReadback("false"));
    CHECK(ParseNativeReadback("1"));
    CHECK(ParseNativeReadback("true"));
    for(const char* bad : {"yes","2","TRUE"}) {
        try { ParseNativeReadback(bad); CHECK(false); } catch(const std::invalid_argument&) {}
    }
    // The Xenos-free decision is driven by this ledger, so its arithmetic and
    // its round trip have to be exact.
    CHECK(ClassifyDraw(true,true,true)==DrawSupport::BackendRefused);
    CHECK(ClassifyDraw(false,true,true)==DrawSupport::VertexShaderUnresolved);
    CHECK(ClassifyDraw(true,false,true)==DrawSupport::PixelShaderUnresolved);
    CHECK(ClassifyDraw(true,true,false)==DrawSupport::ResourcesUnsupported);
    {
        Coverage empty;
        CHECK(empty.SupportedRatio()==0.0); // no draws must never read as 100%
        Coverage c;
        c.frames=3; c.clears=4; c.resolves=1; c.skippedFrames=2; c.submissions=1;
        c.Record(DrawSupport::Supported);
        c.Record(DrawSupport::Supported);
        c.Record(DrawSupport::VertexShaderUnresolved);
        c.Record(DrawSupport::BackendRefused);
        CHECK(c.draws==4 && c.Supported()==2);
        CHECK(std::abs(c.SupportedRatio()-0.5)<1e-9);
        const std::string text=c.Format();
        Coverage parsed;
        CHECK(ParseCoverage(text,parsed));
        CHECK(parsed.frames==3 && parsed.draws==4 && parsed.Supported()==2);
        CHECK(parsed.Reason(DrawSupport::VertexShaderUnresolved)==1);
        CHECK(parsed.Reason(DrawSupport::PixelShaderUnresolved)==0);
        CHECK(parsed.Reason(DrawSupport::BackendRefused)==1);
        CHECK(parsed.clears==4 && parsed.resolves==1 && parsed.skippedFrames==2 && parsed.submissions==1);
        CHECK(text.find("supported_ratio=0.5000")!=std::string::npos);
        CHECK(text.find("Xenos-free")!=std::string::npos);
        // A truncated or doctored file must not be readable as success.
        // A fully supported session legitimately has no reason lines; a count
        // that does not add up does not.
        CHECK(ParseCoverage("frames=1\ndraws=2\nsupported=2\n",parsed) && parsed.Supported()==2);
        CHECK(!ParseCoverage("frames=1\ndraws=2\nsupported=1\n",parsed));
        CHECK(!ParseCoverage("draws=2\n",parsed));
        CHECK(!ParseCoverage("draws=2\nsupported=2\nvertex_shader_unresolved=1\nbackend_refused=0\n",parsed));
        CHECK(ParseCoverage("",parsed)==false);
    }
    return failures ? 1 : 0;
}
