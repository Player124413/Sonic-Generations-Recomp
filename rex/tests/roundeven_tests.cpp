#include "roundeven.h"
#include <bit>
#include <cfenv>
#include <cmath>
#include <cstdint>
#include <cstdio>
#include <initializer_list>

static float Reference(float input) {
    const auto bits=std::bit_cast<uint32_t>(input);
    if((bits&0x7FFFFFFF)>=0x4B000000) return input;
    const double magnitude=std::fabs(double(input));
    const double integral=std::floor(magnitude);
    const double fraction=magnitude-integral;
    const bool up=fraction>0.5 || (fraction==0.5 && (uint32_t(integral)&1));
    return std::copysign(float(integral+(up ? 1.0 : 0.0)),input);
}
int main() {
    const auto original=std::fegetround();
    unsigned failures=0;
    auto check=[&](float value, float expected) {
        const auto result=sonic::rex_host::RoundEvenFloat(value);
        if(std::bit_cast<uint32_t>(result)!=std::bit_cast<uint32_t>(expected)) ++failures;
#ifdef _WIN32
        float (*volatile linkedSymbol)(float) = &roundevenf;
        if(std::bit_cast<uint32_t>(linkedSymbol(value))!=std::bit_cast<uint32_t>(expected)) ++failures;
#endif
    };
    for(int mode : {FE_TONEAREST,FE_DOWNWARD,FE_UPWARD,FE_TOWARDZERO}) {
        if(std::fesetround(mode)) { ++failures; continue; }
        for(float v : {0.0f,-0.0f,0.5f,-0.5f,1.5f,-1.5f,2.5f,-2.5f,3.5f,-3.5f,
                        0.49999997f,0.50000006f,8388607.5f,8388608.0f}) check(v,Reference(v));
        for(uint32_t bits : {0x00000001u,0x80000001u,0x007FFFFFu,0x807FFFFFu,
                              0x7F800000u,0xFF800000u,0x7FC01234u,0xFFC01234u}) {
            const float v=std::bit_cast<float>(bits); check(v,Reference(v));
        }
        uint32_t state=0x9E3779B9;
        for(unsigned i=0;i<100000;++i) {
            state^=state<<13; state^=state>>17; state^=state<<5;
            const float v=std::bit_cast<float>(state); check(v,Reference(v));
        }
        if(std::fegetround()!=mode) ++failures;
    }
    std::fesetround(original);
    if(failures) std::fprintf(stderr,"roundeven failures: %u\n",failures);
    return failures ? 1 : 0;
}
