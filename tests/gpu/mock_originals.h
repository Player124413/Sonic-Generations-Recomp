#pragma once
#include <cpu/ppc_context.h>
#include <atomic>
extern std::atomic<unsigned> originalCalls;
void MutateLikeOriginal(PPCContext& ctx, uint8_t* base);
PPCFunc* GetMappedEntry(size_t index);
