#include "ppc_recomp_shared.h"

__attribute__((alias("__imp__sub_832ECFA8"))) PPC_WEAK_FUNC(sub_832ECFA8);
PPC_FUNC_IMPL(__imp__sub_832ECFA8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// bl 0x832f8758
	ctx.lr = 0x832ECFB8;
	sub_832F8758(ctx, base);
	// bl 0x82d9f640
	ctx.lr = 0x832ECFBC;
	sub_82D9F640(ctx, base);
	// lis r10,-31823
	ctx.r10.s64 = -2085552128;
	// lis r11,-31823
	ctx.r11.s64 = -2085552128;
	// lwz r9,-31200(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + -31200);
	// cmplw cr6,r3,r9
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r9.u32, ctx.xer);
	// bge cr6,0x832ecfdc
	if (!ctx.cr6.lt) goto loc_832ECFDC;
	// lwz r9,-31196(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + -31196);
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// stw r9,-31196(r11)
	PPC_STORE_U32(ctx.r11.u32 + -31196, ctx.r9.u32);
loc_832ECFDC:
	// stw r3,-31200(r10)
	PPC_STORE_U32(ctx.r10.u32 + -31200, ctx.r3.u32);
	// lwz r11,-31196(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -31196);
	// stw r3,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r3.u32);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bl 0x832f8798
	ctx.lr = 0x832ECFF0;
	sub_832F8798(ctx, base);
	// ld r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_832ED004"))) PPC_WEAK_FUNC(sub_832ED004);
PPC_FUNC_IMPL(__imp__sub_832ED004) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832ED008"))) PPC_WEAK_FUNC(sub_832ED008);
PPC_FUNC_IMPL(__imp__sub_832ED008) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31823
	ctx.r11.s64 = -2085552128;
	// li r31,1
	ctx.r31.s64 = 1;
	// addi r8,r11,-31304
	ctx.r8.s64 = ctx.r11.s64 + -31304;
	// li r11,0
	ctx.r11.s64 = 0;
loc_832ED028:
	// mfmsr r9
	ctx.r9.u64 = ctx.msr;
	// mtmsrd r13,1
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// lwarx r10,0,r8
	ctx.reserved.u32 = *(uint32_t*)(base + ctx.r8.u32);
	ctx.r10.u64 = __builtin_bswap32(ctx.reserved.u32);
	// stwcx. r11,0,r8
	ctx.cr0.lt = 0;
	ctx.cr0.gt = 0;
	ctx.cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ctx.r8.u32), ctx.reserved.s32, __builtin_bswap32(ctx.r11.s32));
	ctx.cr0.so = ctx.xer.so;
	// mtmsrd r9,1
	ctx.msr = (ctx.r9.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// bne 0x832ed028
	if (!ctx.cr0.eq) goto loc_832ED028;
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x832ed060
	if (!ctx.cr6.eq) goto loc_832ED060;
	// lis r11,-32210
	ctx.r11.s64 = -2110914560;
	// addi r3,r11,-29008
	ctx.r3.s64 = ctx.r11.s64 + -29008;
	// bl 0x832f8608
	ctx.lr = 0x832ED058;
	sub_832F8608(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x832ed0a4
	goto loc_832ED0A4;
loc_832ED060:
	// lis r11,-31844
	ctx.r11.s64 = -2086928384;
	// lwz r11,-30004(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -30004);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// blt cr6,0x832ed090
	if (ctx.cr6.lt) goto loc_832ED090;
	// beq cr6,0x832ed094
	if (ctx.cr6.eq) goto loc_832ED094;
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// blt cr6,0x832ed090
	if (ctx.cr6.lt) goto loc_832ED090;
	// lis r11,-32210
	ctx.r11.s64 = -2110914560;
	// addi r3,r11,-29052
	ctx.r3.s64 = ctx.r11.s64 + -29052;
	// bl 0x832f8608
	ctx.lr = 0x832ED088;
	sub_832F8608(ctx, base);
	// li r31,0
	ctx.r31.s64 = 0;
	// b 0x832ed094
	goto loc_832ED094;
loc_832ED090:
	// bl 0x832ecf50
	ctx.lr = 0x832ED094;
	sub_832ECF50(ctx, base);
loc_832ED094:
	// li r3,-1
	ctx.r3.s64 = -1;
	// bl 0x832f5ac8
	ctx.lr = 0x832ED09C;
	sub_832F5AC8(ctx, base);
	// bl 0x832f86f0
	ctx.lr = 0x832ED0A0;
	sub_832F86F0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_832ED0A4:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_832ED0B8"))) PPC_WEAK_FUNC(sub_832ED0B8);
PPC_FUNC_IMPL(__imp__sub_832ED0B8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// bl 0x832ecfa8
	ctx.lr = 0x832ED0C8;
	sub_832ECFA8(ctx, base);
	// mulli r10,r3,60
	ctx.r10.s64 = ctx.r3.s64 * 60;
	// li r11,1000
	ctx.r11.s64 = 1000;
	// rotlwi r9,r3,0
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r3.u32, 0);
	// divd r11,r10,r11
	ctx.r11.s64 = ctx.r10.s64 / ctx.r11.s64;
	// li r10,60
	ctx.r10.s64 = 60;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// mulli r11,r11,1000
	ctx.r11.s64 = ctx.r11.s64 * 1000;
	// divd r11,r11,r10
	ctx.r11.s64 = ctx.r11.s64 / ctx.r10.s64;
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// subf r11,r9,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r9.s64;
	// addic. r3,r11,1
	ctx.xer.ca = ctx.r11.u32 > 4294967294;
	ctx.r3.s64 = ctx.r11.s64 + 1;
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x832ed100
	if (!ctx.cr0.eq) goto loc_832ED100;
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x832ed10c
	goto loc_832ED10C;
loc_832ED100:
	// cmplwi cr6,r3,17
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 17, ctx.xer);
	// ble cr6,0x832ed10c
	if (!ctx.cr6.gt) goto loc_832ED10C;
	// li r3,17
	ctx.r3.s64 = 17;
loc_832ED10C:
	// bl 0x82d9f510
	ctx.lr = 0x832ED110;
	sub_82D9F510(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_832ED120"))) PPC_WEAK_FUNC(sub_832ED120);
PPC_FUNC_IMPL(__imp__sub_832ED120) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x833a01a8
	ctx.lr = 0x832ED128;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r28,-31823
	ctx.r28.s64 = -2085552128;
	// lis r11,-31823
	ctx.r11.s64 = -2085552128;
	// addi r30,r11,-31256
	ctx.r30.s64 = ctx.r11.s64 + -31256;
	// lwz r11,-31248(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + -31248);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x832ed190
	if (!ctx.cr6.eq) goto loc_832ED190;
	// lis r29,-31823
	ctx.r29.s64 = -2085552128;
	// lis r31,-31823
	ctx.r31.s64 = -2085552128;
loc_832ED14C:
	// bl 0x832ed0b8
	ctx.lr = 0x832ED150;
	sub_832ED0B8(ctx, base);
	// lwz r11,-31268(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -31268);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,-31268(r31)
	PPC_STORE_U32(ctx.r31.u32 + -31268, ctx.r11.u32);
	// bl 0x832f57b0
	ctx.lr = 0x832ED160;
	sub_832F57B0(ctx, base);
	// lwz r3,-31204(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + -31204);
	// bl 0x833be618
	ctx.lr = 0x832ED168;
	sub_833BE618(ctx, base);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x832ed184
	if (ctx.cr6.eq) goto loc_832ED184;
	// lwz r3,4(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x832ED184;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_832ED184:
	// lwz r11,-31248(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + -31248);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x832ed14c
	if (ctx.cr6.eq) goto loc_832ED14C;
loc_832ED190:
	// li r11,1
	ctx.r11.s64 = 1;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r11,12(r30)
	PPC_STORE_U32(ctx.r30.u32 + 12, ctx.r11.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x833a01f8
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832ED1A4"))) PPC_WEAK_FUNC(sub_832ED1A4);
PPC_FUNC_IMPL(__imp__sub_832ED1A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832ED1A8"))) PPC_WEAK_FUNC(sub_832ED1A8);
PPC_FUNC_IMPL(__imp__sub_832ED1A8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31823
	ctx.r11.s64 = -2085552128;
	// addi r31,r11,-31240
	ctx.r31.s64 = ctx.r11.s64 + -31240;
	// lwz r11,-31240(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -31240);
	// b 0x832ed1d4
	goto loc_832ED1D4;
loc_832ED1C8:
	// bl 0x832ed0b8
	ctx.lr = 0x832ED1CC;
	sub_832ED0B8(ctx, base);
	// bl 0x832f57c0
	ctx.lr = 0x832ED1D0;
	sub_832F57C0(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
loc_832ED1D4:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x832ed1c8
	if (ctx.cr6.eq) goto loc_832ED1C8;
	// li r11,1
	ctx.r11.s64 = 1;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_832ED1FC"))) PPC_WEAK_FUNC(sub_832ED1FC);
PPC_FUNC_IMPL(__imp__sub_832ED1FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832ED200"))) PPC_WEAK_FUNC(sub_832ED200);
PPC_FUNC_IMPL(__imp__sub_832ED200) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31823
	ctx.r11.s64 = -2085552128;
	// lis r10,-31953
	ctx.r10.s64 = -2094071808;
	// addi r31,r11,-31204
	ctx.r31.s64 = ctx.r11.s64 + -31204;
	// li r7,4
	ctx.r7.s64 = 4;
	// addi r8,r31,-20
	ctx.r8.s64 = ctx.r31.s64 + -20;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r10,-12000
	ctx.r5.s64 = ctx.r10.s64 + -12000;
	// li r4,12288
	ctx.r4.s64 = 12288;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x833be0d0
	ctx.lr = 0x832ED238;
	sub_833BE0D0(ctx, base);
	// lis r11,-31823
	ctx.r11.s64 = -2085552128;
	// stw r3,-31220(r11)
	PPC_STORE_U32(ctx.r11.u32 + -31220, ctx.r3.u32);
	// lwz r11,-31220(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -31220);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x832ed260
	if (!ctx.cr6.eq) goto loc_832ED260;
	// lis r11,-32210
	ctx.r11.s64 = -2110914560;
	// addi r3,r11,-28784
	ctx.r3.s64 = ctx.r11.s64 + -28784;
loc_832ED254:
	// bl 0x832f8608
	ctx.lr = 0x832ED258;
	sub_832F8608(ctx, base);
	// li r3,-1
	ctx.r3.s64 = -1;
	// b 0x832ed2e0
	goto loc_832ED2E0;
loc_832ED260:
	// lis r11,-31953
	ctx.r11.s64 = -2094071808;
	// addi r8,r31,-12
	ctx.r8.s64 = ctx.r31.s64 + -12;
	// li r7,4
	ctx.r7.s64 = 4;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r11,-11864
	ctx.r5.s64 = ctx.r11.s64 + -11864;
	// li r4,12288
	ctx.r4.s64 = 12288;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x833be0d0
	ctx.lr = 0x832ED280;
	sub_833BE0D0(ctx, base);
	// lis r11,-31823
	ctx.r11.s64 = -2085552128;
	// stw r3,-31212(r11)
	PPC_STORE_U32(ctx.r11.u32 + -31212, ctx.r3.u32);
	// lwz r11,-31212(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -31212);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x832ed2a0
	if (!ctx.cr6.eq) goto loc_832ED2A0;
	// lis r11,-32210
	ctx.r11.s64 = -2110914560;
	// addi r3,r11,-28856
	ctx.r3.s64 = ctx.r11.s64 + -28856;
	// b 0x832ed254
	goto loc_832ED254;
loc_832ED2A0:
	// lis r11,-31953
	ctx.r11.s64 = -2094071808;
	// addi r8,r31,-4
	ctx.r8.s64 = ctx.r31.s64 + -4;
	// li r7,4
	ctx.r7.s64 = 4;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r11,-13368
	ctx.r5.s64 = ctx.r11.s64 + -13368;
	// lis r4,1
	ctx.r4.s64 = 65536;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x833be0d0
	ctx.lr = 0x832ED2C0;
	sub_833BE0D0(ctx, base);
	// stw r3,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r3.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x832ed2dc
	if (!ctx.cr6.eq) goto loc_832ED2DC;
	// lis r11,-32210
	ctx.r11.s64 = -2110914560;
	// addi r3,r11,-28928
	ctx.r3.s64 = ctx.r11.s64 + -28928;
	// b 0x832ed254
	goto loc_832ED254;
loc_832ED2DC:
	// li r3,0
	ctx.r3.s64 = 0;
loc_832ED2E0:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_832ED2F4"))) PPC_WEAK_FUNC(sub_832ED2F4);
PPC_FUNC_IMPL(__imp__sub_832ED2F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832ED2F8"))) PPC_WEAK_FUNC(sub_832ED2F8);
PPC_FUNC_IMPL(__imp__sub_832ED2F8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x833a01ac
	ctx.lr = 0x832ED300;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31823
	ctx.r11.s64 = -2085552128;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r31,r11,-31204
	ctx.r31.s64 = ctx.r11.s64 + -31204;
	// addi r8,r31,-96
	ctx.r8.s64 = ctx.r31.s64 + -96;
loc_832ED314:
	// mfmsr r9
	ctx.r9.u64 = ctx.msr;
	// mtmsrd r13,1
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// lwarx r10,0,r8
	ctx.reserved.u32 = *(uint32_t*)(base + ctx.r8.u32);
	ctx.r10.u64 = __builtin_bswap32(ctx.reserved.u32);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stwcx. r10,0,r8
	ctx.cr0.lt = 0;
	ctx.cr0.gt = 0;
	ctx.cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ctx.r8.u32), ctx.reserved.s32, __builtin_bswap32(ctx.r10.s32));
	ctx.cr0.so = ctx.xer.so;
	// mtmsrd r9,1
	ctx.msr = (ctx.r9.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// bne 0x832ed314
	if (!ctx.cr0.eq) goto loc_832ED314;
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// cmpwi cr6,r10,1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 1, ctx.xer);
	// bne cr6,0x832ed48c
	if (!ctx.cr6.eq) goto loc_832ED48C;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,-44(r31)
	PPC_STORE_U32(ctx.r31.u32 + -44, ctx.r11.u32);
	// stw r11,-40(r31)
	PPC_STORE_U32(ctx.r31.u32 + -40, ctx.r11.u32);
	// stw r11,-28(r31)
	PPC_STORE_U32(ctx.r31.u32 + -28, ctx.r11.u32);
	// stw r11,-24(r31)
	PPC_STORE_U32(ctx.r31.u32 + -24, ctx.r11.u32);
	// stw r11,-64(r31)
	PPC_STORE_U32(ctx.r31.u32 + -64, ctx.r11.u32);
	// bl 0x832f53f8
	ctx.lr = 0x832ED358;
	sub_832F53F8(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x832f5320
	ctx.lr = 0x832ED364;
	sub_832F5320(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x832f5338
	ctx.lr = 0x832ED370;
	sub_832F5338(ctx, base);
	// lis r11,-31953
	ctx.r11.s64 = -2094071808;
	// addi r3,r11,-13544
	ctx.r3.s64 = ctx.r11.s64 + -13544;
	// bl 0x832f5508
	ctx.lr = 0x832ED37C;
	sub_832F5508(ctx, base);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// bne cr6,0x832ed3b4
	if (!ctx.cr6.eq) goto loc_832ED3B4;
	// li r11,2
	ctx.r11.s64 = 2;
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r11,-92(r31)
	PPC_STORE_U32(ctx.r31.u32 + -92, ctx.r11.u32);
	// li r9,-15
	ctx.r9.s64 = -15;
	// li r11,5
	ctx.r11.s64 = 5;
	// stw r10,-88(r31)
	PPC_STORE_U32(ctx.r31.u32 + -88, ctx.r10.u32);
	// stw r9,-84(r31)
	PPC_STORE_U32(ctx.r31.u32 + -84, ctx.r9.u32);
	// li r10,3
	ctx.r10.s64 = 3;
	// stw r11,-80(r31)
	PPC_STORE_U32(ctx.r31.u32 + -80, ctx.r11.u32);
	// stw r11,-76(r31)
	PPC_STORE_U32(ctx.r31.u32 + -76, ctx.r11.u32);
	// stw r10,-72(r31)
	PPC_STORE_U32(ctx.r31.u32 + -72, ctx.r10.u32);
	// b 0x832ed3c4
	goto loc_832ED3C4;
loc_832ED3B4:
	// addi r3,r31,-92
	ctx.r3.s64 = ctx.r31.s64 + -92;
	// li r5,24
	ctx.r5.s64 = 24;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x833a1390
	ctx.lr = 0x832ED3C4;
	sub_833A1390(ctx, base);
loc_832ED3C4:
	// bl 0x832ed200
	ctx.lr = 0x832ED3C8;
	sub_832ED200(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bge 0x832ed3dc
	if (!ctx.cr0.lt) goto loc_832ED3DC;
loc_832ED3D0:
	// bl 0x832eccb8
	ctx.lr = 0x832ED3D4;
	sub_832ECCB8(ctx, base);
	// bl 0x832f5488
	ctx.lr = 0x832ED3D8;
	sub_832F5488(ctx, base);
	// b 0x832ed48c
	goto loc_832ED48C;
loc_832ED3DC:
	// bl 0x832ece60
	ctx.lr = 0x832ED3E0;
	sub_832ECE60(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x832ed3d0
	if (ctx.cr0.lt) goto loc_832ED3D0;
	// lwz r3,-88(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -88);
	// bl 0x832f8d58
	ctx.lr = 0x832ED3F0;
	sub_832F8D58(ctx, base);
	// lis r29,-31823
	ctx.r29.s64 = -2085552128;
	// lwz r4,-80(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + -80);
	// lwz r3,-31220(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + -31220);
	// bl 0x82da0be8
	ctx.lr = 0x832ED400;
	sub_82DA0BE8(ctx, base);
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// bne cr6,0x832ed414
	if (!ctx.cr6.eq) goto loc_832ED414;
	// lis r11,-32210
	ctx.r11.s64 = -2110914560;
	// addi r3,r11,-29128
	ctx.r3.s64 = ctx.r11.s64 + -29128;
	// bl 0x832f8608
	ctx.lr = 0x832ED414;
	sub_832F8608(ctx, base);
loc_832ED414:
	// lis r30,-31823
	ctx.r30.s64 = -2085552128;
	// lwz r4,-76(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + -76);
	// lwz r3,-31212(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + -31212);
	// bl 0x82da0be8
	ctx.lr = 0x832ED424;
	sub_82DA0BE8(ctx, base);
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// bne cr6,0x832ed438
	if (!ctx.cr6.eq) goto loc_832ED438;
	// lis r11,-32210
	ctx.r11.s64 = -2110914560;
	// addi r3,r11,-29208
	ctx.r3.s64 = ctx.r11.s64 + -29208;
	// bl 0x832f8608
	ctx.lr = 0x832ED438;
	sub_832F8608(ctx, base);
loc_832ED438:
	// lwz r4,-72(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + -72);
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x82da0be8
	ctx.lr = 0x832ED444;
	sub_82DA0BE8(ctx, base);
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// bne cr6,0x832ed458
	if (!ctx.cr6.eq) goto loc_832ED458;
	// lis r11,-32210
	ctx.r11.s64 = -2110914560;
	// addi r3,r11,-29288
	ctx.r3.s64 = ctx.r11.s64 + -29288;
	// bl 0x832f8608
	ctx.lr = 0x832ED458;
	sub_832F8608(ctx, base);
loc_832ED458:
	// lwz r3,-76(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -76);
	// bl 0x832f8dc0
	ctx.lr = 0x832ED460;
	sub_832F8DC0(ctx, base);
	// lwz r3,-31220(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + -31220);
	// bl 0x833be618
	ctx.lr = 0x832ED468;
	sub_833BE618(ctx, base);
	// lwz r3,-31212(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + -31212);
	// bl 0x833be618
	ctx.lr = 0x832ED470;
	sub_833BE618(ctx, base);
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x833be618
	ctx.lr = 0x832ED478;
	sub_833BE618(ctx, base);
	// lis r11,-31953
	ctx.r11.s64 = -2094071808;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r11,-13496
	ctx.r4.s64 = ctx.r11.s64 + -13496;
	// li r3,6
	ctx.r3.s64 = 6;
	// bl 0x832f56b0
	ctx.lr = 0x832ED48C;
	sub_832F56B0(ctx, base);
loc_832ED48C:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x833a01fc
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832ED494"))) PPC_WEAK_FUNC(sub_832ED494);
PPC_FUNC_IMPL(__imp__sub_832ED494) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832ED498"))) PPC_WEAK_FUNC(sub_832ED498);
PPC_FUNC_IMPL(__imp__sub_832ED498) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x833a01ac
	ctx.lr = 0x832ED4A0;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31823
	ctx.r11.s64 = -2085552128;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// li r30,1
	ctx.r30.s64 = 1;
	// addi r8,r11,-31304
	ctx.r8.s64 = ctx.r11.s64 + -31304;
loc_832ED4B8:
	// mfmsr r9
	ctx.r9.u64 = ctx.msr;
	// mtmsrd r13,1
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// lwarx r10,0,r8
	ctx.reserved.u32 = *(uint32_t*)(base + ctx.r8.u32);
	ctx.r10.u64 = __builtin_bswap32(ctx.reserved.u32);
	// stwcx. r30,0,r8
	ctx.cr0.lt = 0;
	ctx.cr0.gt = 0;
	ctx.cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ctx.r8.u32), ctx.reserved.s32, __builtin_bswap32(ctx.r30.s32));
	ctx.cr0.so = ctx.xer.so;
	// mtmsrd r9,1
	ctx.msr = (ctx.r9.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// bne 0x832ed4b8
	if (!ctx.cr0.eq) goto loc_832ED4B8;
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x832ed4f0
	if (ctx.cr6.eq) goto loc_832ED4F0;
	// lis r11,-32210
	ctx.r11.s64 = -2110914560;
	// addi r3,r11,-28676
	ctx.r3.s64 = ctx.r11.s64 + -28676;
	// bl 0x832f8608
	ctx.lr = 0x832ED4E8;
	sub_832F8608(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x832ed54c
	goto loc_832ED54C;
loc_832ED4F0:
	// bl 0x832f8678
	ctx.lr = 0x832ED4F4;
	sub_832F8678(ctx, base);
	// addi r11,r31,-1
	ctx.r11.s64 = ctx.r31.s64 + -1;
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// xori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 ^ 1;
	// addi r3,r11,1
	ctx.r3.s64 = ctx.r11.s64 + 1;
	// bl 0x832f5ac8
	ctx.lr = 0x832ED50C;
	sub_832F5AC8(ctx, base);
	// lis r11,-31844
	ctx.r11.s64 = -2086928384;
	// stw r31,-30004(r11)
	PPC_STORE_U32(ctx.r11.u32 + -30004, ctx.r31.u32);
	// lwz r11,-30004(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -30004);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// blt cr6,0x832ed540
	if (ctx.cr6.lt) goto loc_832ED540;
	// beq cr6,0x832ed548
	if (ctx.cr6.eq) goto loc_832ED548;
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// blt cr6,0x832ed540
	if (ctx.cr6.lt) goto loc_832ED540;
	// lis r11,-32210
	ctx.r11.s64 = -2110914560;
	// addi r3,r11,-28716
	ctx.r3.s64 = ctx.r11.s64 + -28716;
	// bl 0x832f8608
	ctx.lr = 0x832ED538;
	sub_832F8608(ctx, base);
	// li r30,0
	ctx.r30.s64 = 0;
	// b 0x832ed548
	goto loc_832ED548;
loc_832ED540:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x832ed2f8
	ctx.lr = 0x832ED548;
	sub_832ED2F8(ctx, base);
loc_832ED548:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
loc_832ED54C:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x833a01fc
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832ED554"))) PPC_WEAK_FUNC(sub_832ED554);
PPC_FUNC_IMPL(__imp__sub_832ED554) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832ED558"))) PPC_WEAK_FUNC(sub_832ED558);
PPC_FUNC_IMPL(__imp__sub_832ED558) {
	PPC_FUNC_PROLOGUE();
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// b 0x832f8608
	sub_832F8608(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832ED560"))) PPC_WEAK_FUNC(sub_832ED560);
PPC_FUNC_IMPL(__imp__sub_832ED560) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31823
	ctx.r11.s64 = -2085552128;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r8,1
	ctx.r8.s64 = 1;
	// addi r7,r11,-31192
	ctx.r7.s64 = ctx.r11.s64 + -31192;
loc_832ED584:
	// mfmsr r9
	ctx.r9.u64 = ctx.msr;
	// mtmsrd r13,1
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// lwarx r10,0,r7
	ctx.reserved.u32 = *(uint32_t*)(base + ctx.r7.u32);
	ctx.r10.u64 = __builtin_bswap32(ctx.reserved.u32);
	// stwcx. r8,0,r7
	ctx.cr0.lt = 0;
	ctx.cr0.gt = 0;
	ctx.cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ctx.r7.u32), ctx.reserved.s32, __builtin_bswap32(ctx.r8.s32));
	ctx.cr0.so = ctx.xer.so;
	// mtmsrd r9,1
	ctx.msr = (ctx.r9.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// bne 0x832ed584
	if (!ctx.cr0.eq) goto loc_832ED584;
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x832ed5b8
	if (ctx.cr6.eq) goto loc_832ED5B8;
	// lis r11,-32210
	ctx.r11.s64 = -2110914560;
	// addi r3,r11,-28472
	ctx.r3.s64 = ctx.r11.s64 + -28472;
	// bl 0x832f8608
	ctx.lr = 0x832ED5B4;
	sub_832F8608(ctx, base);
	// b 0x832ed630
	goto loc_832ED630;
loc_832ED5B8:
	// bl 0x832fb140
	ctx.lr = 0x832ED5BC;
	sub_832FB140(ctx, base);
	// lis r11,-31953
	ctx.r11.s64 = -2094071808;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r11,-10920
	ctx.r3.s64 = ctx.r11.s64 + -10920;
	// bl 0x832fb9b0
	ctx.lr = 0x832ED5CC;
	sub_832FB9B0(ctx, base);
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
	// lis r10,-32210
	ctx.r10.s64 = -2110914560;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r10,-28480
	ctx.r3.s64 = ctx.r10.s64 + -28480;
	// addi r4,r11,-15568
	ctx.r4.s64 = ctx.r11.s64 + -15568;
	// bl 0x832fc260
	ctx.lr = 0x832ED5E4;
	sub_832FC260(ctx, base);
	// bl 0x832f9908
	ctx.lr = 0x832ED5E8;
	sub_832F9908(ctx, base);
	// lis r11,-32210
	ctx.r11.s64 = -2110914560;
	// lis r10,-31952
	ctx.r10.s64 = -2094006272;
	// addi r30,r11,-28488
	ctx.r30.s64 = ctx.r11.s64 + -28488;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r4,r10,-30760
	ctx.r4.s64 = ctx.r10.s64 + -30760;
	// bl 0x832fc260
	ctx.lr = 0x832ED604;
	sub_832FC260(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x832fbd38
	ctx.lr = 0x832ED60C;
	sub_832FBD38(ctx, base);
	// bl 0x832ecc98
	ctx.lr = 0x832ED610;
	sub_832ECC98(ctx, base);
	// bl 0x832eca50
	ctx.lr = 0x832ED614;
	sub_832ECA50(ctx, base);
	// bl 0x832fb040
	ctx.lr = 0x832ED618;
	sub_832FB040(ctx, base);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x832ed628
	if (ctx.cr6.eq) goto loc_832ED628;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// b 0x832ed62c
	goto loc_832ED62C;
loc_832ED628:
	// li r3,0
	ctx.r3.s64 = 0;
loc_832ED62C:
	// bl 0x832f9818
	ctx.lr = 0x832ED630;
	sub_832F9818(ctx, base);
loc_832ED630:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_832ED648"))) PPC_WEAK_FUNC(sub_832ED648);
PPC_FUNC_IMPL(__imp__sub_832ED648) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// bl 0x832efb98
	ctx.lr = 0x832ED658;
	sub_832EFB98(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x832ed670
	if (ctx.cr0.eq) goto loc_832ED670;
	// lis r11,-32210
	ctx.r11.s64 = -2110914560;
	// addi r3,r11,-28296
	ctx.r3.s64 = ctx.r11.s64 + -28296;
loc_832ED668:
	// bl 0x832f8608
	ctx.lr = 0x832ED66C;
	sub_832F8608(ctx, base);
	// b 0x832ed6c0
	goto loc_832ED6C0;
loc_832ED670:
	// lis r11,-31823
	ctx.r11.s64 = -2085552128;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r7,r11,-31192
	ctx.r7.s64 = ctx.r11.s64 + -31192;
loc_832ED67C:
	// mfmsr r9
	ctx.r9.u64 = ctx.msr;
	// mtmsrd r13,1
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// lwarx r10,0,r7
	ctx.reserved.u32 = *(uint32_t*)(base + ctx.r7.u32);
	ctx.r10.u64 = __builtin_bswap32(ctx.reserved.u32);
	// stwcx. r8,0,r7
	ctx.cr0.lt = 0;
	ctx.cr0.gt = 0;
	ctx.cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ctx.r7.u32), ctx.reserved.s32, __builtin_bswap32(ctx.r8.s32));
	ctx.cr0.so = ctx.xer.so;
	// mtmsrd r9,1
	ctx.msr = (ctx.r9.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// bne 0x832ed67c
	if (!ctx.cr0.eq) goto loc_832ED67C;
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x832ed6ac
	if (!ctx.cr6.eq) goto loc_832ED6AC;
	// lis r11,-32210
	ctx.r11.s64 = -2110914560;
	// addi r3,r11,-28392
	ctx.r3.s64 = ctx.r11.s64 + -28392;
	// b 0x832ed668
	goto loc_832ED668;
loc_832ED6AC:
	// bl 0x832fb098
	ctx.lr = 0x832ED6B0;
	sub_832FB098(ctx, base);
	// bl 0x832eca88
	ctx.lr = 0x832ED6B4;
	sub_832ECA88(ctx, base);
	// bl 0x832ecca0
	ctx.lr = 0x832ED6B8;
	sub_832ECCA0(ctx, base);
	// bl 0x832fb1b8
	ctx.lr = 0x832ED6BC;
	sub_832FB1B8(ctx, base);
	// bl 0x832face0
	ctx.lr = 0x832ED6C0;
	sub_832FACE0(ctx, base);
loc_832ED6C0:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_832ED6D0"))) PPC_WEAK_FUNC(sub_832ED6D0);
PPC_FUNC_IMPL(__imp__sub_832ED6D0) {
	PPC_FUNC_PROLOGUE();
	// b 0x832ecfa8
	sub_832ECFA8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832ED6D4"))) PPC_WEAK_FUNC(sub_832ED6D4);
PPC_FUNC_IMPL(__imp__sub_832ED6D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832ED6D8"))) PPC_WEAK_FUNC(sub_832ED6D8);
PPC_FUNC_IMPL(__imp__sub_832ED6D8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-31823
	ctx.r10.s64 = -2085552128;
	// lis r7,-32210
	ctx.r7.s64 = -2110914560;
	// addi r11,r10,-31188
	ctx.r11.s64 = ctx.r10.s64 + -31188;
	// addi r7,r7,-28120
	ctx.r7.s64 = ctx.r7.s64 + -28120;
	// addi r6,r11,4
	ctx.r6.s64 = ctx.r11.s64 + 4;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// stw r7,-31188(r10)
	PPC_STORE_U32(ctx.r10.u32 + -31188, ctx.r7.u32);
	// li r11,1
	ctx.r11.s64 = 1;
loc_832ED708:
	// mfmsr r8
	ctx.r8.u64 = ctx.msr;
	// mtmsrd r13,1
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// lwarx r9,0,r6
	ctx.reserved.u32 = *(uint32_t*)(base + ctx.r6.u32);
	ctx.r9.u64 = __builtin_bswap32(ctx.reserved.u32);
	// stwcx. r11,0,r6
	ctx.cr0.lt = 0;
	ctx.cr0.gt = 0;
	ctx.cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ctx.r6.u32), ctx.reserved.s32, __builtin_bswap32(ctx.r11.s32));
	ctx.cr0.so = ctx.xer.so;
	// mtmsrd r8,1
	ctx.msr = (ctx.r8.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// bne 0x832ed708
	if (!ctx.cr0.eq) goto loc_832ED708;
	// mr r11,r9
	ctx.r11.u64 = ctx.r9.u64;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x832ed740
	if (ctx.cr6.eq) goto loc_832ED740;
	// lis r11,-32210
	ctx.r11.s64 = -2110914560;
	// addi r3,r11,-28032
	ctx.r3.s64 = ctx.r11.s64 + -28032;
	// bl 0x832f8608
	ctx.lr = 0x832ED738;
	sub_832F8608(ctx, base);
	// li r3,-1
	ctx.r3.s64 = -1;
	// b 0x832ed750
	goto loc_832ED750;
loc_832ED740:
	// bl 0x832fd150
	ctx.lr = 0x832ED744;
	sub_832FD150(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x832fe7e0
	ctx.lr = 0x832ED74C;
	sub_832FE7E0(ctx, base);
	// bl 0x832fdb68
	ctx.lr = 0x832ED750;
	sub_832FDB68(ctx, base);
loc_832ED750:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_832ED764"))) PPC_WEAK_FUNC(sub_832ED764);
PPC_FUNC_IMPL(__imp__sub_832ED764) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832ED768"))) PPC_WEAK_FUNC(sub_832ED768);
PPC_FUNC_IMPL(__imp__sub_832ED768) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// bl 0x832efb98
	ctx.lr = 0x832ED778;
	sub_832EFB98(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x832ed794
	if (ctx.cr0.eq) goto loc_832ED794;
	// lis r11,-32210
	ctx.r11.s64 = -2110914560;
	// addi r3,r11,-27864
	ctx.r3.s64 = ctx.r11.s64 + -27864;
loc_832ED788:
	// bl 0x832f8608
	ctx.lr = 0x832ED78C;
	sub_832F8608(ctx, base);
	// li r3,-1
	ctx.r3.s64 = -1;
	// b 0x832ed7e8
	goto loc_832ED7E8;
loc_832ED794:
	// lis r11,-31823
	ctx.r11.s64 = -2085552128;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r7,r11,-31184
	ctx.r7.s64 = ctx.r11.s64 + -31184;
loc_832ED7A0:
	// mfmsr r9
	ctx.r9.u64 = ctx.msr;
	// mtmsrd r13,1
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// lwarx r10,0,r7
	ctx.reserved.u32 = *(uint32_t*)(base + ctx.r7.u32);
	ctx.r10.u64 = __builtin_bswap32(ctx.reserved.u32);
	// stwcx. r8,0,r7
	ctx.cr0.lt = 0;
	ctx.cr0.gt = 0;
	ctx.cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ctx.r7.u32), ctx.reserved.s32, __builtin_bswap32(ctx.r8.s32));
	ctx.cr0.so = ctx.xer.so;
	// mtmsrd r9,1
	ctx.msr = (ctx.r9.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// bne 0x832ed7a0
	if (!ctx.cr0.eq) goto loc_832ED7A0;
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x832ed7d0
	if (!ctx.cr6.eq) goto loc_832ED7D0;
	// lis r11,-32210
	ctx.r11.s64 = -2110914560;
	// addi r3,r11,-27960
	ctx.r3.s64 = ctx.r11.s64 + -27960;
	// b 0x832ed788
	goto loc_832ED788;
loc_832ED7D0:
	// bl 0x832fd228
	ctx.lr = 0x832ED7D4;
	sub_832FD228(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x832fd150
	ctx.lr = 0x832ED7DC;
	sub_832FD150(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x832fe7e0
	ctx.lr = 0x832ED7E4;
	sub_832FE7E0(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
loc_832ED7E8:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_832ED7F8"))) PPC_WEAK_FUNC(sub_832ED7F8);
PPC_FUNC_IMPL(__imp__sub_832ED7F8) {
	PPC_FUNC_PROLOGUE();
	// cmpwi cr6,r4,-3
	ctx.cr6.compare<int32_t>(ctx.r4.s32, -3, ctx.xer);
	// beq cr6,0x832ed834
	if (ctx.cr6.eq) goto loc_832ED834;
	// cmpwi cr6,r4,-2
	ctx.cr6.compare<int32_t>(ctx.r4.s32, -2, ctx.xer);
	// beq cr6,0x832ed828
	if (ctx.cr6.eq) goto loc_832ED828;
	// cmpwi cr6,r4,-1
	ctx.cr6.compare<int32_t>(ctx.r4.s32, -1, ctx.xer);
	// beq cr6,0x832ed81c
	if (ctx.cr6.eq) goto loc_832ED81C;
	// lis r11,-32210
	ctx.r11.s64 = -2110914560;
	// addi r3,r11,-27532
	ctx.r3.s64 = ctx.r11.s64 + -27532;
	// b 0x832ed83c
	goto loc_832ED83C;
loc_832ED81C:
	// lis r11,-32210
	ctx.r11.s64 = -2110914560;
	// addi r3,r11,-27552
	ctx.r3.s64 = ctx.r11.s64 + -27552;
	// b 0x832ed83c
	goto loc_832ED83C;
loc_832ED828:
	// lis r11,-32210
	ctx.r11.s64 = -2110914560;
	// addi r3,r11,-27576
	ctx.r3.s64 = ctx.r11.s64 + -27576;
	// b 0x832ed83c
	goto loc_832ED83C;
loc_832ED834:
	// lis r11,-32210
	ctx.r11.s64 = -2110914560;
	// addi r3,r11,-27600
	ctx.r3.s64 = ctx.r11.s64 + -27600;
loc_832ED83C:
	// b 0x832ff8c8
	sub_832FF8C8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832ED840"))) PPC_WEAK_FUNC(sub_832ED840);
PPC_FUNC_IMPL(__imp__sub_832ED840) {
	PPC_FUNC_PROLOGUE();
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x832ed85c
	if (!ctx.cr6.eq) goto loc_832ED85C;
	// lis r11,-32210
	ctx.r11.s64 = -2110914560;
	// lis r10,-32210
	ctx.r10.s64 = -2110914560;
	// addi r4,r11,-27464
	ctx.r4.s64 = ctx.r11.s64 + -27464;
	// addi r3,r10,-27376
	ctx.r3.s64 = ctx.r10.s64 + -27376;
	// b 0x832ee598
	sub_832EE598(ctx, base);
	return;
loc_832ED85C:
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x832ed87c
	if (!ctx.cr6.eq) goto loc_832ED87C;
	// lis r11,-32210
	ctx.r11.s64 = -2110914560;
	// lis r10,-32210
	ctx.r10.s64 = -2110914560;
	// addi r4,r11,-27508
	ctx.r4.s64 = ctx.r11.s64 + -27508;
	// addi r3,r10,-27388
	ctx.r3.s64 = ctx.r10.s64 + -27388;
	// b 0x832ee598
	sub_832EE598(ctx, base);
	return;
loc_832ED87C:
	// lwz r10,32(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r11.u32);
	// stw r11,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r11.u32);
	// stw r11,24(r3)
	PPC_STORE_U32(ctx.r3.u32 + 24, ctx.r11.u32);
	// stw r10,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r10.u32);
	// stw r11,40(r3)
	PPC_STORE_U32(ctx.r3.u32 + 40, ctx.r11.u32);
	// stw r11,44(r3)
	PPC_STORE_U32(ctx.r3.u32 + 44, ctx.r11.u32);
	// stw r11,48(r3)
	PPC_STORE_U32(ctx.r3.u32 + 48, ctx.r11.u32);
	// stw r11,52(r3)
	PPC_STORE_U32(ctx.r3.u32 + 52, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_832ED8A8"))) PPC_WEAK_FUNC(sub_832ED8A8);
PPC_FUNC_IMPL(__imp__sub_832ED8A8) {
	PPC_FUNC_PROLOGUE();
	// mr r11,r5
	ctx.r11.u64 = ctx.r5.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x832ed8c8
	if (!ctx.cr6.eq) goto loc_832ED8C8;
	// lis r11,-32210
	ctx.r11.s64 = -2110914560;
	// lis r10,-32210
	ctx.r10.s64 = -2110914560;
	// addi r4,r11,-27464
	ctx.r4.s64 = ctx.r11.s64 + -27464;
	// addi r3,r10,-27292
	ctx.r3.s64 = ctx.r10.s64 + -27292;
	// b 0x832ee598
	sub_832EE598(ctx, base);
	return;
loc_832ED8C8:
	// lwz r10,4(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x832ed8e8
	if (!ctx.cr6.eq) goto loc_832ED8E8;
	// lis r11,-32210
	ctx.r11.s64 = -2110914560;
	// lis r10,-32210
	ctx.r10.s64 = -2110914560;
	// addi r4,r11,-27508
	ctx.r4.s64 = ctx.r11.s64 + -27508;
	// addi r3,r10,-27304
	ctx.r3.s64 = ctx.r10.s64 + -27304;
	// b 0x832ee598
	sub_832EE598(ctx, base);
	return;
loc_832ED8E8:
	// lwz r9,32(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne cr6,0x832ed908
	if (!ctx.cr6.eq) goto loc_832ED908;
	// lis r11,-32210
	ctx.r11.s64 = -2110914560;
	// lis r10,-32210
	ctx.r10.s64 = -2110914560;
	// addi r4,r11,-27328
	ctx.r4.s64 = ctx.r11.s64 + -27328;
	// addi r3,r10,-27340
	ctx.r3.s64 = ctx.r10.s64 + -27340;
	// b 0x832ee598
	sub_832EE598(ctx, base);
	return;
loc_832ED908:
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// bne cr6,0x832ed994
	if (!ctx.cr6.eq) goto loc_832ED994;
	// lwz r8,36(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 36);
	// lwz r7,20(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// lwz r10,16(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// subf r8,r7,r8
	ctx.r8.s64 = ctx.r8.s64 - ctx.r7.s64;
	// add r9,r8,r9
	ctx.r9.u64 = ctx.r8.u64 + ctx.r9.u64;
	// cmpw cr6,r10,r9
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r9.s32, ctx.xer);
	// blt cr6,0x832ed930
	if (ctx.cr6.lt) goto loc_832ED930;
	// mr r10,r9
	ctx.r10.u64 = ctx.r9.u64;
loc_832ED930:
	// cmpw cr6,r10,r11
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r11.s32, ctx.xer);
	// stw r10,4(r6)
	PPC_STORE_U32(ctx.r6.u32 + 4, ctx.r10.u32);
	// bge cr6,0x832ed940
	if (!ctx.cr6.lt) goto loc_832ED940;
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
loc_832ED940:
	// stw r11,4(r6)
	PPC_STORE_U32(ctx.r6.u32 + 4, ctx.r11.u32);
	// lwz r10,20(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// lwz r9,28(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 28);
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// stw r10,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r10.u32);
	// lwz r9,32(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// lwz r8,16(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// lwz r10,20(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwz r10,40(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 40);
	// divw r7,r11,r9
	ctx.r7.s32 = ctx.r11.s32 / ctx.r9.s32;
	// mullw r9,r7,r9
	ctx.r9.s64 = int64_t(ctx.r7.s32) * int64_t(ctx.r9.s32);
	// subf r11,r9,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r9.s64;
	// stw r11,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r11.u32);
	// lwz r11,4(r6)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + 4);
	// subf r11,r11,r8
	ctx.r11.s64 = ctx.r8.s64 - ctx.r11.s64;
	// stw r11,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r11.u32);
	// lwz r11,4(r6)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + 4);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stw r11,40(r3)
	PPC_STORE_U32(ctx.r3.u32 + 40, ctx.r11.u32);
	// blr 
	return;
loc_832ED994:
	// cmpwi cr6,r4,1
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 1, ctx.xer);
	// bne cr6,0x832eda20
	if (!ctx.cr6.eq) goto loc_832EDA20;
	// lwz r8,36(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 36);
	// lwz r7,24(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// lwz r10,12(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// subf r8,r7,r8
	ctx.r8.s64 = ctx.r8.s64 - ctx.r7.s64;
	// add r9,r8,r9
	ctx.r9.u64 = ctx.r8.u64 + ctx.r9.u64;
	// cmpw cr6,r10,r9
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r9.s32, ctx.xer);
	// blt cr6,0x832ed9bc
	if (ctx.cr6.lt) goto loc_832ED9BC;
	// mr r10,r9
	ctx.r10.u64 = ctx.r9.u64;
loc_832ED9BC:
	// cmpw cr6,r10,r11
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r11.s32, ctx.xer);
	// stw r10,4(r6)
	PPC_STORE_U32(ctx.r6.u32 + 4, ctx.r10.u32);
	// bge cr6,0x832ed9cc
	if (!ctx.cr6.lt) goto loc_832ED9CC;
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
loc_832ED9CC:
	// stw r11,4(r6)
	PPC_STORE_U32(ctx.r6.u32 + 4, ctx.r11.u32);
	// lwz r10,28(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 28);
	// lwz r9,24(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// stw r10,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r10.u32);
	// lwz r10,48(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// lwz r9,24(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// lwz r7,32(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// add r11,r9,r11
	ctx.r11.u64 = ctx.r9.u64 + ctx.r11.u64;
	// lwz r8,12(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// divw r9,r11,r7
	ctx.r9.s32 = ctx.r11.s32 / ctx.r7.s32;
	// mullw r9,r9,r7
	ctx.r9.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r7.s32);
	// subf r11,r9,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r9.s64;
	// stw r11,24(r3)
	PPC_STORE_U32(ctx.r3.u32 + 24, ctx.r11.u32);
	// lwz r11,4(r6)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + 4);
	// subf r11,r11,r8
	ctx.r11.s64 = ctx.r8.s64 - ctx.r11.s64;
	// stw r11,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r11.u32);
	// lwz r11,4(r6)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + 4);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stw r11,48(r3)
	PPC_STORE_U32(ctx.r3.u32 + 48, ctx.r11.u32);
	// blr 
	return;
loc_832EDA20:
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,4(r6)
	PPC_STORE_U32(ctx.r6.u32 + 4, ctx.r11.u32);
	// stw r11,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r11.u32);
	// lwz r11,56(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 56);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lwz r3,60(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 60);
	// li r4,-3
	ctx.r4.s64 = -3;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_832EDA48"))) PPC_WEAK_FUNC(sub_832EDA48);
PPC_FUNC_IMPL(__imp__sub_832EDA48) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x832eda84
	if (!ctx.cr6.eq) goto loc_832EDA84;
	// lis r11,-32210
	ctx.r11.s64 = -2110914560;
	// lis r10,-32210
	ctx.r10.s64 = -2110914560;
	// addi r4,r11,-27464
	ctx.r4.s64 = ctx.r11.s64 + -27464;
	// addi r3,r10,-27268
	ctx.r3.s64 = ctx.r10.s64 + -27268;
loc_832EDA7C:
	// bl 0x832ee598
	ctx.lr = 0x832EDA80;
	sub_832EE598(ctx, base);
	// b 0x832edbd4
	goto loc_832EDBD4;
loc_832EDA84:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x832edaa4
	if (!ctx.cr6.eq) goto loc_832EDAA4;
	// lis r11,-32210
	ctx.r11.s64 = -2110914560;
	// lis r10,-32210
	ctx.r10.s64 = -2110914560;
	// addi r4,r11,-27508
	ctx.r4.s64 = ctx.r11.s64 + -27508;
	// addi r3,r10,-27280
	ctx.r3.s64 = ctx.r10.s64 + -27280;
	// b 0x832eda7c
	goto loc_832EDA7C;
loc_832EDAA4:
	// lwz r9,4(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// ble cr6,0x832edbd4
	if (!ctx.cr6.gt) goto loc_832EDBD4;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x832edbd4
	if (ctx.cr6.eq) goto loc_832EDBD4;
	// cmpwi cr6,r4,1
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 1, ctx.xer);
	// bne cr6,0x832edb84
	if (!ctx.cr6.eq) goto loc_832EDB84;
	// lwz r11,64(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 64);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x832edae0
	if (ctx.cr6.eq) goto loc_832EDAE0;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r3,68(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 68);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x832EDAE0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_832EDAE0:
	// lwz r4,0(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r8,28(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// lwz r10,36(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// subf r11,r8,r4
	ctx.r11.s64 = ctx.r4.s64 - ctx.r8.s64;
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// bge cr6,0x832edb20
	if (!ctx.cr6.lt) goto loc_832EDB20;
	// lwz r9,4(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// subf r10,r11,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r11.s64;
	// cmpw cr6,r9,r10
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r10.s32, ctx.xer);
	// blt cr6,0x832edb0c
	if (ctx.cr6.lt) goto loc_832EDB0C;
	// mr r9,r10
	ctx.r9.u64 = ctx.r10.u64;
loc_832EDB0C:
	// lwz r10,32(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// mr r5,r9
	ctx.r5.u64 = ctx.r9.u64;
	// add r10,r10,r8
	ctx.r10.u64 = ctx.r10.u64 + ctx.r8.u64;
	// add r3,r10,r11
	ctx.r3.u64 = ctx.r10.u64 + ctx.r11.u64;
	// bl 0x833a1390
	ctx.lr = 0x832EDB20;
	sub_833A1390(ctx, base);
loc_832EDB20:
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// lwz r3,28(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// lwz r9,0(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// subf r8,r3,r11
	ctx.r8.s64 = ctx.r11.s64 - ctx.r3.s64;
	// lwz r10,32(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// add r9,r8,r9
	ctx.r9.u64 = ctx.r8.u64 + ctx.r9.u64;
	// cmpw cr6,r9,r10
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r10.s32, ctx.xer);
	// ble cr6,0x832edb60
	if (!ctx.cr6.gt) goto loc_832EDB60;
	// subf r10,r10,r9
	ctx.r10.s64 = ctx.r9.s64 - ctx.r10.s64;
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// blt cr6,0x832edb50
	if (ctx.cr6.lt) goto loc_832EDB50;
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
loc_832EDB50:
	// subf r10,r11,r3
	ctx.r10.s64 = ctx.r3.s64 - ctx.r11.s64;
	// mr r5,r11
	ctx.r5.u64 = ctx.r11.u64;
	// add r4,r10,r9
	ctx.r4.u64 = ctx.r10.u64 + ctx.r9.u64;
	// bl 0x833a1390
	ctx.lr = 0x832EDB60;
	sub_833A1390(ctx, base);
loc_832EDB60:
	// lwz r9,4(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// lwz r10,12(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// lwz r11,52(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// stw r10,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r10.u32);
	// lwz r10,4(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r11,52(r31)
	PPC_STORE_U32(ctx.r31.u32 + 52, ctx.r11.u32);
	// b 0x832edbd4
	goto loc_832EDBD4;
loc_832EDB84:
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// bne cr6,0x832edbac
	if (!ctx.cr6.eq) goto loc_832EDBAC;
	// lwz r10,16(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// lwz r11,44(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 44);
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// stw r10,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r10.u32);
	// lwz r10,4(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r11,44(r31)
	PPC_STORE_U32(ctx.r31.u32 + 44, ctx.r11.u32);
	// b 0x832edbd4
	goto loc_832EDBD4;
loc_832EDBAC:
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r11.u32);
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
	// lwz r11,56(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x832edbd4
	if (ctx.cr6.eq) goto loc_832EDBD4;
	// li r4,-3
	ctx.r4.s64 = -3;
	// lwz r3,60(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 60);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x832EDBD4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_832EDBD4:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_832EDBEC"))) PPC_WEAK_FUNC(sub_832EDBEC);
PPC_FUNC_IMPL(__imp__sub_832EDBEC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832EDBF0"))) PPC_WEAK_FUNC(sub_832EDBF0);
PPC_FUNC_IMPL(__imp__sub_832EDBF0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x832edc2c
	if (!ctx.cr6.eq) goto loc_832EDC2C;
	// lis r11,-32210
	ctx.r11.s64 = -2110914560;
	// lis r10,-32210
	ctx.r10.s64 = -2110914560;
	// addi r4,r11,-27464
	ctx.r4.s64 = ctx.r11.s64 + -27464;
	// addi r3,r10,-27232
	ctx.r3.s64 = ctx.r10.s64 + -27232;
loc_832EDC24:
	// bl 0x832ee598
	ctx.lr = 0x832EDC28;
	sub_832EE598(ctx, base);
	// b 0x832eddb4
	goto loc_832EDDB4;
loc_832EDC2C:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x832edc4c
	if (!ctx.cr6.eq) goto loc_832EDC4C;
	// lis r11,-32210
	ctx.r11.s64 = -2110914560;
	// lis r10,-32210
	ctx.r10.s64 = -2110914560;
	// addi r4,r11,-27508
	ctx.r4.s64 = ctx.r11.s64 + -27508;
	// addi r3,r10,-27244
	ctx.r3.s64 = ctx.r10.s64 + -27244;
	// b 0x832edc24
	goto loc_832EDC24;
loc_832EDC4C:
	// lwz r11,32(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x832edc6c
	if (!ctx.cr6.eq) goto loc_832EDC6C;
	// lis r11,-32210
	ctx.r11.s64 = -2110914560;
	// lis r10,-32210
	ctx.r10.s64 = -2110914560;
	// addi r4,r11,-27328
	ctx.r4.s64 = ctx.r11.s64 + -27328;
	// addi r3,r10,-27256
	ctx.r3.s64 = ctx.r10.s64 + -27256;
	// b 0x832edc24
	goto loc_832EDC24;
loc_832EDC6C:
	// lwz r9,4(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// ble cr6,0x832eddb4
	if (!ctx.cr6.gt) goto loc_832EDDB4;
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x832eddb4
	if (ctx.cr6.eq) goto loc_832EDDB4;
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// bne cr6,0x832edd08
	if (!ctx.cr6.eq) goto loc_832EDD08;
	// lwz r8,28(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// lwz r7,20(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// subf r8,r8,r10
	ctx.r8.s64 = ctx.r10.s64 - ctx.r8.s64;
	// subf r10,r9,r7
	ctx.r10.s64 = ctx.r7.s64 - ctx.r9.s64;
	// divw r9,r8,r11
	ctx.r9.s32 = ctx.r8.s32 / ctx.r11.s32;
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// mullw r9,r9,r11
	ctx.r9.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r11.s32);
	// divw r7,r10,r11
	ctx.r7.s32 = ctx.r10.s32 / ctx.r11.s32;
	// subf r9,r9,r8
	ctx.r9.s64 = ctx.r8.s64 - ctx.r9.s64;
	// mullw r11,r7,r11
	ctx.r11.s64 = int64_t(ctx.r7.s32) * int64_t(ctx.r11.s32);
	// subf r11,r11,r10
	ctx.r11.s64 = ctx.r10.s64 - ctx.r11.s64;
	// cmpw cr6,r11,r9
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r9.s32, ctx.xer);
	// bne cr6,0x832edcd8
	if (!ctx.cr6.eq) goto loc_832EDCD8;
	// lwz r10,16(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// stw r11,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r11.u32);
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stw r11,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r11.u32);
	// b 0x832edcf4
	goto loc_832EDCF4;
loc_832EDCD8:
	// lwz r11,56(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x832edcf4
	if (ctx.cr6.eq) goto loc_832EDCF4;
	// li r4,-3
	ctx.r4.s64 = -3;
	// lwz r3,60(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 60);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x832EDCF4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_832EDCF4:
	// lwz r11,40(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// lwz r10,4(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// subf r11,r10,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r10.s64;
	// stw r11,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r11.u32);
	// b 0x832eddb4
	goto loc_832EDDB4;
loc_832EDD08:
	// cmpwi cr6,r4,1
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 1, ctx.xer);
	// bne cr6,0x832edd8c
	if (!ctx.cr6.eq) goto loc_832EDD8C;
	// lwz r8,28(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// lwz r7,24(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// subf r8,r8,r10
	ctx.r8.s64 = ctx.r10.s64 - ctx.r8.s64;
	// subf r10,r9,r7
	ctx.r10.s64 = ctx.r7.s64 - ctx.r9.s64;
	// divw r9,r8,r11
	ctx.r9.s32 = ctx.r8.s32 / ctx.r11.s32;
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// mullw r9,r9,r11
	ctx.r9.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r11.s32);
	// divw r7,r10,r11
	ctx.r7.s32 = ctx.r10.s32 / ctx.r11.s32;
	// subf r9,r9,r8
	ctx.r9.s64 = ctx.r8.s64 - ctx.r9.s64;
	// mullw r11,r7,r11
	ctx.r11.s64 = int64_t(ctx.r7.s32) * int64_t(ctx.r11.s32);
	// subf r11,r11,r10
	ctx.r11.s64 = ctx.r10.s64 - ctx.r11.s64;
	// cmpw cr6,r11,r9
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r9.s32, ctx.xer);
	// bne cr6,0x832edd5c
	if (!ctx.cr6.eq) goto loc_832EDD5C;
	// lwz r10,12(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// stw r11,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r11.u32);
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stw r11,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r11.u32);
	// b 0x832edd78
	goto loc_832EDD78;
loc_832EDD5C:
	// lwz r11,56(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x832edd78
	if (ctx.cr6.eq) goto loc_832EDD78;
	// li r4,-3
	ctx.r4.s64 = -3;
	// lwz r3,60(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 60);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x832EDD78;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_832EDD78:
	// lwz r11,48(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// lwz r10,4(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// subf r11,r10,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r10.s64;
	// stw r11,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r11.u32);
	// b 0x832eddb4
	goto loc_832EDDB4;
loc_832EDD8C:
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
	// stw r11,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r11.u32);
	// lwz r11,56(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x832eddb4
	if (ctx.cr6.eq) goto loc_832EDDB4;
	// li r4,-3
	ctx.r4.s64 = -3;
	// lwz r3,60(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 60);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x832EDDB4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_832EDDB4:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_832EDDCC"))) PPC_WEAK_FUNC(sub_832EDDCC);
PPC_FUNC_IMPL(__imp__sub_832EDDCC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832EDDD0"))) PPC_WEAK_FUNC(sub_832EDDD0);
PPC_FUNC_IMPL(__imp__sub_832EDDD0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-31823
	ctx.r10.s64 = -2085552128;
	// lis r11,-32210
	ctx.r11.s64 = -2110914560;
	// addi r11,r11,-27696
	ctx.r11.s64 = ctx.r11.s64 + -27696;
	// stw r11,-31180(r10)
	PPC_STORE_U32(ctx.r10.u32 + -31180, ctx.r11.u32);
	// bl 0x832f7c38
	ctx.lr = 0x832EDDF8;
	sub_832F7C38(ctx, base);
	// bl 0x832f7d18
	ctx.lr = 0x832EDDFC;
	sub_832F7D18(ctx, base);
	// lis r30,-31823
	ctx.r30.s64 = -2085552128;
	// lwz r31,-31176(r30)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r30.u32 + -31176);
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// bne cr6,0x832ede20
	if (!ctx.cr6.eq) goto loc_832EDE20;
	// lis r11,-31814
	ctx.r11.s64 = -2084962304;
	// li r5,27648
	ctx.r5.s64 = 27648;
	// addi r3,r11,-14464
	ctx.r3.s64 = ctx.r11.s64 + -14464;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x833a2b30
	ctx.lr = 0x832EDE20;
	sub_833A2B30(ctx, base);
loc_832EDE20:
	// addi r11,r31,1
	ctx.r11.s64 = ctx.r31.s64 + 1;
	// stw r11,-31176(r30)
	PPC_STORE_U32(ctx.r30.u32 + -31176, ctx.r11.u32);
	// bl 0x832f7d58
	ctx.lr = 0x832EDE2C;
	sub_832F7D58(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_832EDE44"))) PPC_WEAK_FUNC(sub_832EDE44);
PPC_FUNC_IMPL(__imp__sub_832EDE44) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832EDE48"))) PPC_WEAK_FUNC(sub_832EDE48);
PPC_FUNC_IMPL(__imp__sub_832EDE48) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// bl 0x832f7d18
	ctx.lr = 0x832EDE58;
	sub_832F7D18(ctx, base);
	// lis r10,-31823
	ctx.r10.s64 = -2085552128;
	// lwz r11,-31176(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -31176);
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,-31176(r10)
	PPC_STORE_U32(ctx.r10.u32 + -31176, ctx.r11.u32);
	// bne 0x832ede80
	if (!ctx.cr0.eq) goto loc_832EDE80;
	// lis r11,-31814
	ctx.r11.s64 = -2084962304;
	// li r5,27648
	ctx.r5.s64 = 27648;
	// addi r3,r11,-14464
	ctx.r3.s64 = ctx.r11.s64 + -14464;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x833a2b30
	ctx.lr = 0x832EDE80;
	sub_833A2B30(ctx, base);
loc_832EDE80:
	// bl 0x832f7d58
	ctx.lr = 0x832EDE84;
	sub_832F7D58(ctx, base);
	// bl 0x832f7cb0
	ctx.lr = 0x832EDE88;
	sub_832F7CB0(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_832EDE98"))) PPC_WEAK_FUNC(sub_832EDE98);
PPC_FUNC_IMPL(__imp__sub_832EDE98) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x832f7d18
	ctx.lr = 0x832EDEB0;
	sub_832F7D18(ctx, base);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne cr6,0x832eded0
	if (!ctx.cr6.eq) goto loc_832EDED0;
	// lis r11,-32210
	ctx.r11.s64 = -2110914560;
	// lis r10,-32210
	ctx.r10.s64 = -2110914560;
	// addi r4,r11,-27464
	ctx.r4.s64 = ctx.r11.s64 + -27464;
	// addi r3,r10,-27476
	ctx.r3.s64 = ctx.r10.s64 + -27476;
loc_832EDEC8:
	// bl 0x832ee598
	ctx.lr = 0x832EDECC;
	sub_832EE598(ctx, base);
	// b 0x832edf08
	goto loc_832EDF08;
loc_832EDED0:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x832edef0
	if (!ctx.cr6.eq) goto loc_832EDEF0;
	// lis r11,-32210
	ctx.r11.s64 = -2110914560;
	// lis r10,-32210
	ctx.r10.s64 = -2110914560;
	// addi r4,r11,-27508
	ctx.r4.s64 = ctx.r11.s64 + -27508;
	// addi r3,r10,-27520
	ctx.r3.s64 = ctx.r10.s64 + -27520;
	// b 0x832edec8
	goto loc_832EDEC8;
loc_832EDEF0:
	// li r5,72
	ctx.r5.s64 = 72;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x833a2b30
	ctx.lr = 0x832EDF00;
	sub_833A2B30(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
loc_832EDF08:
	// bl 0x832f7d58
	ctx.lr = 0x832EDF0C;
	sub_832F7D58(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_832EDF20"))) PPC_WEAK_FUNC(sub_832EDF20);
PPC_FUNC_IMPL(__imp__sub_832EDF20) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x832f7d18
	ctx.lr = 0x832EDF38;
	sub_832F7D18(ctx, base);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne cr6,0x832edf5c
	if (!ctx.cr6.eq) goto loc_832EDF5C;
	// lis r11,-32210
	ctx.r11.s64 = -2110914560;
	// lis r10,-32210
	ctx.r10.s64 = -2110914560;
	// addi r4,r11,-27464
	ctx.r4.s64 = ctx.r11.s64 + -27464;
	// addi r3,r10,-27424
	ctx.r3.s64 = ctx.r10.s64 + -27424;
loc_832EDF50:
	// bl 0x832ee598
	ctx.lr = 0x832EDF54;
	sub_832EE598(ctx, base);
	// li r31,0
	ctx.r31.s64 = 0;
	// b 0x832edf80
	goto loc_832EDF80;
loc_832EDF5C:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x832edf7c
	if (!ctx.cr6.eq) goto loc_832EDF7C;
	// lis r11,-32210
	ctx.r11.s64 = -2110914560;
	// lis r10,-32210
	ctx.r10.s64 = -2110914560;
	// addi r4,r11,-27508
	ctx.r4.s64 = ctx.r11.s64 + -27508;
	// addi r3,r10,-27436
	ctx.r3.s64 = ctx.r10.s64 + -27436;
	// b 0x832edf50
	goto loc_832EDF50;
loc_832EDF7C:
	// lwz r31,8(r31)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
loc_832EDF80:
	// bl 0x832f7d58
	ctx.lr = 0x832EDF84;
	sub_832F7D58(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_832EDF9C"))) PPC_WEAK_FUNC(sub_832EDF9C);
PPC_FUNC_IMPL(__imp__sub_832EDF9C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832EDFA0"))) PPC_WEAK_FUNC(sub_832EDFA0);
PPC_FUNC_IMPL(__imp__sub_832EDFA0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x833a01ac
	ctx.lr = 0x832EDFA8;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// bl 0x832f7d18
	ctx.lr = 0x832EDFBC;
	sub_832F7D18(ctx, base);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne cr6,0x832edfdc
	if (!ctx.cr6.eq) goto loc_832EDFDC;
	// lis r11,-32210
	ctx.r11.s64 = -2110914560;
	// lis r10,-32210
	ctx.r10.s64 = -2110914560;
	// addi r4,r11,-27464
	ctx.r4.s64 = ctx.r11.s64 + -27464;
	// addi r3,r10,-27400
	ctx.r3.s64 = ctx.r10.s64 + -27400;
loc_832EDFD4:
	// bl 0x832ee598
	ctx.lr = 0x832EDFD8;
	sub_832EE598(ctx, base);
	// b 0x832ee004
	goto loc_832EE004;
loc_832EDFDC:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x832edffc
	if (!ctx.cr6.eq) goto loc_832EDFFC;
	// lis r11,-32210
	ctx.r11.s64 = -2110914560;
	// lis r10,-32210
	ctx.r10.s64 = -2110914560;
	// addi r4,r11,-27508
	ctx.r4.s64 = ctx.r11.s64 + -27508;
	// addi r3,r10,-27412
	ctx.r3.s64 = ctx.r10.s64 + -27412;
	// b 0x832edfd4
	goto loc_832EDFD4;
loc_832EDFFC:
	// stw r30,56(r31)
	PPC_STORE_U32(ctx.r31.u32 + 56, ctx.r30.u32);
	// stw r29,60(r31)
	PPC_STORE_U32(ctx.r31.u32 + 60, ctx.r29.u32);
loc_832EE004:
	// bl 0x832f7d58
	ctx.lr = 0x832EE008;
	sub_832F7D58(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x833a01fc
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832EE010"))) PPC_WEAK_FUNC(sub_832EE010);
PPC_FUNC_IMPL(__imp__sub_832EE010) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x832f7d18
	ctx.lr = 0x832EE028;
	sub_832F7D18(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x832ed840
	ctx.lr = 0x832EE030;
	sub_832ED840(ctx, base);
	// bl 0x832f7d58
	ctx.lr = 0x832EE034;
	sub_832F7D58(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_832EE048"))) PPC_WEAK_FUNC(sub_832EE048);
PPC_FUNC_IMPL(__imp__sub_832EE048) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// bl 0x832f7d18
	ctx.lr = 0x832EE068;
	sub_832F7D18(ctx, base);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne cr6,0x832ee088
	if (!ctx.cr6.eq) goto loc_832EE088;
	// lis r11,-32210
	ctx.r11.s64 = -2110914560;
	// lis r10,-32210
	ctx.r10.s64 = -2110914560;
	// addi r4,r11,-27464
	ctx.r4.s64 = ctx.r11.s64 + -27464;
	// addi r3,r10,-27352
	ctx.r3.s64 = ctx.r10.s64 + -27352;
loc_832EE080:
	// bl 0x832ee598
	ctx.lr = 0x832EE084;
	sub_832EE598(ctx, base);
	// b 0x832ee0e4
	goto loc_832EE0E4;
loc_832EE088:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x832ee0a8
	if (!ctx.cr6.eq) goto loc_832EE0A8;
	// lis r11,-32210
	ctx.r11.s64 = -2110914560;
	// lis r10,-32210
	ctx.r10.s64 = -2110914560;
	// addi r4,r11,-27508
	ctx.r4.s64 = ctx.r11.s64 + -27508;
	// addi r3,r10,-27364
	ctx.r3.s64 = ctx.r10.s64 + -27364;
	// b 0x832ee080
	goto loc_832EE080;
loc_832EE0A8:
	// cmpwi cr6,r30,1
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 1, ctx.xer);
	// bne cr6,0x832ee0b8
	if (!ctx.cr6.eq) goto loc_832EE0B8;
	// lwz r31,12(r31)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// b 0x832ee0e8
	goto loc_832EE0E8;
loc_832EE0B8:
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// bne cr6,0x832ee0c8
	if (!ctx.cr6.eq) goto loc_832EE0C8;
	// lwz r31,16(r31)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// b 0x832ee0e8
	goto loc_832EE0E8;
loc_832EE0C8:
	// lwz r11,56(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x832ee0e4
	if (ctx.cr6.eq) goto loc_832EE0E4;
	// li r4,-3
	ctx.r4.s64 = -3;
	// lwz r3,60(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 60);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x832EE0E4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_832EE0E4:
	// li r31,0
	ctx.r31.s64 = 0;
loc_832EE0E8:
	// bl 0x832f7d58
	ctx.lr = 0x832EE0EC;
	sub_832F7D58(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_832EE108"))) PPC_WEAK_FUNC(sub_832EE108);
PPC_FUNC_IMPL(__imp__sub_832EE108) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x833a01a8
	ctx.lr = 0x832EE110;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// mr r28,r6
	ctx.r28.u64 = ctx.r6.u64;
	// bl 0x832f7d18
	ctx.lr = 0x832EE128;
	sub_832F7D18(ctx, base);
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x832ed8a8
	ctx.lr = 0x832EE13C;
	sub_832ED8A8(ctx, base);
	// bl 0x832f7d58
	ctx.lr = 0x832EE140;
	sub_832F7D58(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x833a01f8
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832EE148"))) PPC_WEAK_FUNC(sub_832EE148);
PPC_FUNC_IMPL(__imp__sub_832EE148) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x833a01ac
	ctx.lr = 0x832EE150;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// bl 0x832f7d18
	ctx.lr = 0x832EE164;
	sub_832F7D18(ctx, base);
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x832eda48
	ctx.lr = 0x832EE174;
	sub_832EDA48(ctx, base);
	// bl 0x832f7d58
	ctx.lr = 0x832EE178;
	sub_832F7D58(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x833a01fc
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832EE180"))) PPC_WEAK_FUNC(sub_832EE180);
PPC_FUNC_IMPL(__imp__sub_832EE180) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x833a01ac
	ctx.lr = 0x832EE188;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// bl 0x832f7d18
	ctx.lr = 0x832EE19C;
	sub_832F7D18(ctx, base);
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x832edbf0
	ctx.lr = 0x832EE1AC;
	sub_832EDBF0(ctx, base);
	// bl 0x832f7d58
	ctx.lr = 0x832EE1B0;
	sub_832F7D58(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x833a01fc
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832EE1B8"))) PPC_WEAK_FUNC(sub_832EE1B8);
PPC_FUNC_IMPL(__imp__sub_832EE1B8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x833a01a8
	ctx.lr = 0x832EE1C0;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// mr r28,r6
	ctx.r28.u64 = ctx.r6.u64;
	// bl 0x832f7d18
	ctx.lr = 0x832EE1D8;
	sub_832F7D18(ctx, base);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne cr6,0x832ee1fc
	if (!ctx.cr6.eq) goto loc_832EE1FC;
	// lis r11,-32210
	ctx.r11.s64 = -2110914560;
	// lis r10,-32210
	ctx.r10.s64 = -2110914560;
	// addi r4,r11,-27464
	ctx.r4.s64 = ctx.r11.s64 + -27464;
	// addi r3,r10,-27208
	ctx.r3.s64 = ctx.r10.s64 + -27208;
loc_832EE1F0:
	// bl 0x832ee598
	ctx.lr = 0x832EE1F4;
	sub_832EE598(ctx, base);
	// li r31,0
	ctx.r31.s64 = 0;
	// b 0x832ee2a4
	goto loc_832EE2A4;
loc_832EE1FC:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x832ee21c
	if (!ctx.cr6.eq) goto loc_832EE21C;
	// lis r11,-32210
	ctx.r11.s64 = -2110914560;
	// lis r10,-32210
	ctx.r10.s64 = -2110914560;
	// addi r4,r11,-27508
	ctx.r4.s64 = ctx.r11.s64 + -27508;
	// addi r3,r10,-27220
	ctx.r3.s64 = ctx.r10.s64 + -27220;
	// b 0x832ee1f0
	goto loc_832EE1F0;
loc_832EE21C:
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// bne cr6,0x832ee238
	if (!ctx.cr6.eq) goto loc_832EE238;
	// lwz r11,36(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// lwz r9,20(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// subf r9,r9,r11
	ctx.r9.s64 = ctx.r11.s64 - ctx.r9.s64;
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// b 0x832ee250
	goto loc_832EE250;
loc_832EE238:
	// cmpwi cr6,r30,1
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 1, ctx.xer);
	// bne cr6,0x832ee274
	if (!ctx.cr6.eq) goto loc_832EE274;
	// lwz r11,36(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// lwz r9,24(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// subf r9,r9,r11
	ctx.r9.s64 = ctx.r11.s64 - ctx.r9.s64;
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
loc_832EE250:
	// lwz r10,32(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// add r30,r9,r10
	ctx.r30.u64 = ctx.r9.u64 + ctx.r10.u64;
	// cmpw cr6,r11,r30
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r30.s32, ctx.xer);
	// bge cr6,0x832ee264
	if (!ctx.cr6.lt) goto loc_832EE264;
	// mr r30,r11
	ctx.r30.u64 = ctx.r11.u64;
loc_832EE264:
	// cmpw cr6,r30,r29
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r29.s32, ctx.xer);
	// blt cr6,0x832ee294
	if (ctx.cr6.lt) goto loc_832EE294;
	// mr r30,r29
	ctx.r30.u64 = ctx.r29.u64;
	// b 0x832ee294
	goto loc_832EE294;
loc_832EE274:
	// lwz r11,56(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// li r30,0
	ctx.r30.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x832ee294
	if (ctx.cr6.eq) goto loc_832EE294;
	// li r4,-3
	ctx.r4.s64 = -3;
	// lwz r3,60(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 60);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x832EE294;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_832EE294:
	// subf r11,r30,r29
	ctx.r11.s64 = ctx.r29.s64 - ctx.r30.s64;
	// stw r30,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r30.u32);
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r31,r11,27,31,31
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
loc_832EE2A4:
	// bl 0x832f7d58
	ctx.lr = 0x832EE2A8;
	sub_832F7D58(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x833a01f8
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832EE2B4"))) PPC_WEAK_FUNC(sub_832EE2B4);
PPC_FUNC_IMPL(__imp__sub_832EE2B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832EE2B8"))) PPC_WEAK_FUNC(sub_832EE2B8);
PPC_FUNC_IMPL(__imp__sub_832EE2B8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x832f7d18
	ctx.lr = 0x832EE2D0;
	sub_832F7D18(ctx, base);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne cr6,0x832ee2f4
	if (!ctx.cr6.eq) goto loc_832EE2F4;
	// lis r11,-32210
	ctx.r11.s64 = -2110914560;
	// lis r10,-32210
	ctx.r10.s64 = -2110914560;
	// addi r4,r11,-27464
	ctx.r4.s64 = ctx.r11.s64 + -27464;
	// addi r3,r10,-27184
	ctx.r3.s64 = ctx.r10.s64 + -27184;
loc_832EE2E8:
	// bl 0x832ee598
	ctx.lr = 0x832EE2EC;
	sub_832EE598(ctx, base);
	// li r31,0
	ctx.r31.s64 = 0;
	// b 0x832ee318
	goto loc_832EE318;
loc_832EE2F4:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x832ee314
	if (!ctx.cr6.eq) goto loc_832EE314;
	// lis r11,-32210
	ctx.r11.s64 = -2110914560;
	// lis r10,-32210
	ctx.r10.s64 = -2110914560;
	// addi r4,r11,-27508
	ctx.r4.s64 = ctx.r11.s64 + -27508;
	// addi r3,r10,-27196
	ctx.r3.s64 = ctx.r10.s64 + -27196;
	// b 0x832ee2e8
	goto loc_832EE2E8;
loc_832EE314:
	// lwz r31,28(r31)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
loc_832EE318:
	// bl 0x832f7d58
	ctx.lr = 0x832EE31C;
	sub_832F7D58(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_832EE334"))) PPC_WEAK_FUNC(sub_832EE334);
PPC_FUNC_IMPL(__imp__sub_832EE334) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832EE338"))) PPC_WEAK_FUNC(sub_832EE338);
PPC_FUNC_IMPL(__imp__sub_832EE338) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x832f7d18
	ctx.lr = 0x832EE350;
	sub_832F7D18(ctx, base);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne cr6,0x832ee374
	if (!ctx.cr6.eq) goto loc_832EE374;
	// lis r11,-32210
	ctx.r11.s64 = -2110914560;
	// lis r10,-32210
	ctx.r10.s64 = -2110914560;
	// addi r4,r11,-27464
	ctx.r4.s64 = ctx.r11.s64 + -27464;
	// addi r3,r10,-27160
	ctx.r3.s64 = ctx.r10.s64 + -27160;
loc_832EE368:
	// bl 0x832ee598
	ctx.lr = 0x832EE36C;
	sub_832EE598(ctx, base);
	// li r31,0
	ctx.r31.s64 = 0;
	// b 0x832ee398
	goto loc_832EE398;
loc_832EE374:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x832ee394
	if (!ctx.cr6.eq) goto loc_832EE394;
	// lis r11,-32210
	ctx.r11.s64 = -2110914560;
	// lis r10,-32210
	ctx.r10.s64 = -2110914560;
	// addi r4,r11,-27508
	ctx.r4.s64 = ctx.r11.s64 + -27508;
	// addi r3,r10,-27172
	ctx.r3.s64 = ctx.r10.s64 + -27172;
	// b 0x832ee368
	goto loc_832EE368;
loc_832EE394:
	// lwz r31,32(r31)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
loc_832EE398:
	// bl 0x832f7d58
	ctx.lr = 0x832EE39C;
	sub_832F7D58(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_832EE3B4"))) PPC_WEAK_FUNC(sub_832EE3B4);
PPC_FUNC_IMPL(__imp__sub_832EE3B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832EE3B8"))) PPC_WEAK_FUNC(sub_832EE3B8);
PPC_FUNC_IMPL(__imp__sub_832EE3B8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x832f7d18
	ctx.lr = 0x832EE3D0;
	sub_832F7D18(ctx, base);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne cr6,0x832ee3f4
	if (!ctx.cr6.eq) goto loc_832EE3F4;
	// lis r11,-32210
	ctx.r11.s64 = -2110914560;
	// lis r10,-32210
	ctx.r10.s64 = -2110914560;
	// addi r4,r11,-27464
	ctx.r4.s64 = ctx.r11.s64 + -27464;
	// addi r3,r10,-27136
	ctx.r3.s64 = ctx.r10.s64 + -27136;
loc_832EE3E8:
	// bl 0x832ee598
	ctx.lr = 0x832EE3EC;
	sub_832EE598(ctx, base);
	// li r31,0
	ctx.r31.s64 = 0;
	// b 0x832ee418
	goto loc_832EE418;
loc_832EE3F4:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x832ee414
	if (!ctx.cr6.eq) goto loc_832EE414;
	// lis r11,-32210
	ctx.r11.s64 = -2110914560;
	// lis r10,-32210
	ctx.r10.s64 = -2110914560;
	// addi r4,r11,-27508
	ctx.r4.s64 = ctx.r11.s64 + -27508;
	// addi r3,r10,-27148
	ctx.r3.s64 = ctx.r10.s64 + -27148;
	// b 0x832ee3e8
	goto loc_832EE3E8;
loc_832EE414:
	// lwz r31,36(r31)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
loc_832EE418:
	// bl 0x832f7d58
	ctx.lr = 0x832EE41C;
	sub_832F7D58(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_832EE434"))) PPC_WEAK_FUNC(sub_832EE434);
PPC_FUNC_IMPL(__imp__sub_832EE434) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832EE438"))) PPC_WEAK_FUNC(sub_832EE438);
PPC_FUNC_IMPL(__imp__sub_832EE438) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x833a01ac
	ctx.lr = 0x832EE440;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// bl 0x832f7d18
	ctx.lr = 0x832EE454;
	sub_832F7D18(ctx, base);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne cr6,0x832ee478
	if (!ctx.cr6.eq) goto loc_832EE478;
	// lis r11,-32210
	ctx.r11.s64 = -2110914560;
	// lis r10,-32210
	ctx.r10.s64 = -2110914560;
	// addi r4,r11,-27464
	ctx.r4.s64 = ctx.r11.s64 + -27464;
	// addi r3,r10,-27112
	ctx.r3.s64 = ctx.r10.s64 + -27112;
loc_832EE46C:
	// bl 0x832ee598
	ctx.lr = 0x832EE470;
	sub_832EE598(ctx, base);
	// li r31,0
	ctx.r31.s64 = 0;
	// b 0x832ee4ac
	goto loc_832EE4AC;
loc_832EE478:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x832ee498
	if (!ctx.cr6.eq) goto loc_832EE498;
	// lis r11,-32210
	ctx.r11.s64 = -2110914560;
	// lis r10,-32210
	ctx.r10.s64 = -2110914560;
	// addi r4,r11,-27508
	ctx.r4.s64 = ctx.r11.s64 + -27508;
	// addi r3,r10,-27124
	ctx.r3.s64 = ctx.r10.s64 + -27124;
	// b 0x832ee46c
	goto loc_832EE46C;
loc_832EE498:
	// addi r11,r30,5
	ctx.r11.s64 = ctx.r30.s64 + 5;
	// rlwinm r11,r11,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r11,r29
	ctx.r11.u64 = ctx.r11.u64 + ctx.r29.u64;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r31,r11,r31
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r31.u32);
loc_832EE4AC:
	// bl 0x832f7d58
	ctx.lr = 0x832EE4B0;
	sub_832F7D58(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x833a01fc
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832EE4BC"))) PPC_WEAK_FUNC(sub_832EE4BC);
PPC_FUNC_IMPL(__imp__sub_832EE4BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832EE4C0"))) PPC_WEAK_FUNC(sub_832EE4C0);
PPC_FUNC_IMPL(__imp__sub_832EE4C0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x833a01a8
	ctx.lr = 0x832EE4C8;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// bl 0x832f7d18
	ctx.lr = 0x832EE4DC;
	sub_832F7D18(ctx, base);
	// lis r11,-31814
	ctx.r11.s64 = -2084962304;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r11,r11,-14464
	ctx.r11.s64 = ctx.r11.s64 + -14464;
	// mr r10,r8
	ctx.r10.u64 = ctx.r8.u64;
	// addi r9,r11,4
	ctx.r9.s64 = ctx.r11.s64 + 4;
loc_832EE4F0:
	// lwz r7,0(r9)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// beq cr6,0x832ee510
	if (ctx.cr6.eq) goto loc_832EE510;
	// addi r9,r9,72
	ctx.r9.s64 = ctx.r9.s64 + 72;
	// addi r7,r11,27652
	ctx.r7.s64 = ctx.r11.s64 + 27652;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpw cr6,r9,r7
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r7.s32, ctx.xer);
	// blt cr6,0x832ee4f0
	if (ctx.cr6.lt) goto loc_832EE4F0;
loc_832EE510:
	// cmpwi cr6,r10,384
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 384, ctx.xer);
	// bne cr6,0x832ee520
	if (!ctx.cr6.eq) goto loc_832EE520;
	// mr r31,r8
	ctx.r31.u64 = ctx.r8.u64;
	// b 0x832ee574
	goto loc_832EE574;
loc_832EE520:
	// mulli r10,r10,72
	ctx.r10.s64 = ctx.r10.s64 * 72;
	// add r31,r10,r11
	ctx.r31.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lis r9,-31844
	ctx.r9.s64 = -2086928384;
	// lis r7,-32210
	ctx.r7.s64 = -2110914560;
	// stw r31,60(r31)
	PPC_STORE_U32(ctx.r31.u32 + 60, ctx.r31.u32);
	// lis r6,-31953
	ctx.r6.s64 = -2094071808;
	// addi r9,r9,-30000
	ctx.r9.s64 = ctx.r9.s64 + -30000;
	// addi r7,r7,-27616
	ctx.r7.s64 = ctx.r7.s64 + -27616;
	// stw r30,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r30.u32);
	// li r5,1
	ctx.r5.s64 = 1;
	// stw r29,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r29.u32);
	// addi r6,r6,-10248
	ctx.r6.s64 = ctx.r6.s64 + -10248;
	// stw r28,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r28.u32);
	// stw r5,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r5.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r7,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r7.u32);
	// stw r6,56(r31)
	PPC_STORE_U32(ctx.r31.u32 + 56, ctx.r6.u32);
	// stw r8,64(r31)
	PPC_STORE_U32(ctx.r31.u32 + 64, ctx.r8.u32);
	// stw r8,68(r31)
	PPC_STORE_U32(ctx.r31.u32 + 68, ctx.r8.u32);
	// stwx r9,r10,r11
	PPC_STORE_U32(ctx.r10.u32 + ctx.r11.u32, ctx.r9.u32);
	// bl 0x832ed840
	ctx.lr = 0x832EE574;
	sub_832ED840(ctx, base);
loc_832EE574:
	// bl 0x832f7d58
	ctx.lr = 0x832EE578;
	sub_832F7D58(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x833a01f8
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832EE584"))) PPC_WEAK_FUNC(sub_832EE584);
PPC_FUNC_IMPL(__imp__sub_832EE584) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832EE588"))) PPC_WEAK_FUNC(sub_832EE588);
PPC_FUNC_IMPL(__imp__sub_832EE588) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32210
	ctx.r11.s64 = -2110914560;
	// addi r3,r11,-27084
	ctx.r3.s64 = ctx.r11.s64 + -27084;
	// b 0x832ff8c8
	sub_832FF8C8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832EE594"))) PPC_WEAK_FUNC(sub_832EE594);
PPC_FUNC_IMPL(__imp__sub_832EE594) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832EE598"))) PPC_WEAK_FUNC(sub_832EE598);
PPC_FUNC_IMPL(__imp__sub_832EE598) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// li r4,64
	ctx.r4.s64 = 64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x832ff8e8
	ctx.lr = 0x832EE5BC;
	sub_832FF8E8(ctx, base);
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// li r4,64
	ctx.r4.s64 = 64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x832ff978
	ctx.lr = 0x832EE5CC;
	sub_832FF978(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x832ff8c8
	ctx.lr = 0x832EE5D4;
	sub_832FF8C8(ctx, base);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_832EE5E8"))) PPC_WEAK_FUNC(sub_832EE5E8);
PPC_FUNC_IMPL(__imp__sub_832EE5E8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x832ee604
	if (!ctx.cr6.eq) goto loc_832EE604;
	// lis r11,-32210
	ctx.r11.s64 = -2110914560;
	// lis r10,-32210
	ctx.r10.s64 = -2110914560;
	// addi r4,r11,-27464
	ctx.r4.s64 = ctx.r11.s64 + -27464;
	// addi r3,r10,-26892
	ctx.r3.s64 = ctx.r10.s64 + -26892;
	// b 0x832ee598
	sub_832EE598(ctx, base);
	return;
loc_832EE604:
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x832ee624
	if (!ctx.cr6.eq) goto loc_832EE624;
	// lis r11,-32210
	ctx.r11.s64 = -2110914560;
	// lis r10,-32210
	ctx.r10.s64 = -2110914560;
	// addi r4,r11,-27508
	ctx.r4.s64 = ctx.r11.s64 + -27508;
	// addi r3,r10,-26904
	ctx.r3.s64 = ctx.r10.s64 + -26904;
	// b 0x832ee598
	sub_832EE598(ctx, base);
	return;
loc_832EE624:
	// lwz r10,4(r5)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r5.u32 + 4);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// blelr cr6
	if (!ctx.cr6.gt) return;
	// lwz r11,0(r5)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// bne cr6,0x832ee660
	if (!ctx.cr6.eq) goto loc_832EE660;
	// lwz r11,28(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 28);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lwz r3,32(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// li r4,-3
	ctx.r4.s64 = -3;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
loc_832EE660:
	// cmpwi cr6,r4,1
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 1, ctx.xer);
	// bne cr6,0x832ee6d4
	if (!ctx.cr6.eq) goto loc_832EE6D4;
	// lwz r11,16(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// lwz r8,12(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// subf r10,r10,r11
	ctx.r10.s64 = ctx.r11.s64 - ctx.r10.s64;
	// lwz r11,24(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// subfic r9,r10,0
	ctx.xer.ca = ctx.r10.u32 <= 0;
	ctx.r9.s64 = 0 - ctx.r10.s64;
	// rlwinm r9,r10,1,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0x1;
	// addme r9,r9
	temp.u64 = ctx.r9.u32 + ctx.xer.ca + 0xFFFFFFFF;
	ctx.xer.ca = temp.u64 >> 32;
	ctx.r9.u64 = temp.u32;
	// and r9,r9,r10
	ctx.r9.u64 = ctx.r9.u64 & ctx.r10.u64;
	// stw r9,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r9.u32);
	// lwz r10,4(r5)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r5.u32 + 4);
	// add r10,r8,r10
	ctx.r10.u64 = ctx.r8.u64 + ctx.r10.u64;
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// blt cr6,0x832ee6a0
	if (ctx.cr6.lt) goto loc_832EE6A0;
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
loc_832EE6A0:
	// lwz r10,20(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// stw r11,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r11.u32);
	// lwz r11,0(r5)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// subf r11,r10,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r10.s64;
	// cmpw cr6,r9,r11
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r11.s32, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lwz r11,28(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 28);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lwz r3,32(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// li r4,-3
	ctx.r4.s64 = -3;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
loc_832EE6D4:
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,4(r5)
	PPC_STORE_U32(ctx.r5.u32 + 4, ctx.r11.u32);
	// stw r11,0(r5)
	PPC_STORE_U32(ctx.r5.u32 + 0, ctx.r11.u32);
	// lwz r11,28(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 28);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lwz r3,32(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// li r4,-3
	ctx.r4.s64 = -3;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_832EE6FC"))) PPC_WEAK_FUNC(sub_832EE6FC);
PPC_FUNC_IMPL(__imp__sub_832EE6FC) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_832EE700"))) PPC_WEAK_FUNC(sub_832EE700);
PPC_FUNC_IMPL(__imp__sub_832EE700) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// bl 0x832f7c38
	ctx.lr = 0x832EE718;
	sub_832F7C38(ctx, base);
	// bl 0x832f7d18
	ctx.lr = 0x832EE71C;
	sub_832F7D18(ctx, base);
	// lis r30,-31823
	ctx.r30.s64 = -2085552128;
	// lwz r31,-31172(r30)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r30.u32 + -31172);
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// bne cr6,0x832ee740
	if (!ctx.cr6.eq) goto loc_832EE740;
	// lis r11,-31814
	ctx.r11.s64 = -2084962304;
	// li r5,1728
	ctx.r5.s64 = 1728;
	// addi r3,r11,-16192
	ctx.r3.s64 = ctx.r11.s64 + -16192;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x833a2b30
	ctx.lr = 0x832EE740;
	sub_833A2B30(ctx, base);
loc_832EE740:
	// addi r11,r31,1
	ctx.r11.s64 = ctx.r31.s64 + 1;
	// stw r11,-31172(r30)
	PPC_STORE_U32(ctx.r30.u32 + -31172, ctx.r11.u32);
	// bl 0x832f7d58
	ctx.lr = 0x832EE74C;
	sub_832F7D58(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_832EE764"))) PPC_WEAK_FUNC(sub_832EE764);
PPC_FUNC_IMPL(__imp__sub_832EE764) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832EE768"))) PPC_WEAK_FUNC(sub_832EE768);
PPC_FUNC_IMPL(__imp__sub_832EE768) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// bl 0x832f7d18
	ctx.lr = 0x832EE778;
	sub_832F7D18(ctx, base);
	// lis r10,-31823
	ctx.r10.s64 = -2085552128;
	// lwz r11,-31172(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -31172);
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,-31172(r10)
	PPC_STORE_U32(ctx.r10.u32 + -31172, ctx.r11.u32);
	// bne 0x832ee7a0
	if (!ctx.cr0.eq) goto loc_832EE7A0;
	// lis r11,-31814
	ctx.r11.s64 = -2084962304;
	// li r5,1728
	ctx.r5.s64 = 1728;
	// addi r3,r11,-16192
	ctx.r3.s64 = ctx.r11.s64 + -16192;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x833a2b30
	ctx.lr = 0x832EE7A0;
	sub_833A2B30(ctx, base);
loc_832EE7A0:
	// bl 0x832f7d58
	ctx.lr = 0x832EE7A4;
	sub_832F7D58(ctx, base);
	// bl 0x832f7cb0
	ctx.lr = 0x832EE7A8;
	sub_832F7CB0(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_832EE7B8"))) PPC_WEAK_FUNC(sub_832EE7B8);
PPC_FUNC_IMPL(__imp__sub_832EE7B8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x832f7d18
	ctx.lr = 0x832EE7D0;
	sub_832F7D18(ctx, base);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne cr6,0x832ee7f0
	if (!ctx.cr6.eq) goto loc_832EE7F0;
	// lis r11,-32210
	ctx.r11.s64 = -2110914560;
	// lis r10,-32210
	ctx.r10.s64 = -2110914560;
	// addi r4,r11,-27464
	ctx.r4.s64 = ctx.r11.s64 + -27464;
	// addi r3,r10,-27060
	ctx.r3.s64 = ctx.r10.s64 + -27060;
loc_832EE7E8:
	// bl 0x832ee598
	ctx.lr = 0x832EE7EC;
	sub_832EE598(ctx, base);
	// b 0x832ee828
	goto loc_832EE828;
loc_832EE7F0:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x832ee810
	if (!ctx.cr6.eq) goto loc_832EE810;
	// lis r11,-32210
	ctx.r11.s64 = -2110914560;
	// lis r10,-32210
	ctx.r10.s64 = -2110914560;
	// addi r4,r11,-27508
	ctx.r4.s64 = ctx.r11.s64 + -27508;
	// addi r3,r10,-27072
	ctx.r3.s64 = ctx.r10.s64 + -27072;
	// b 0x832ee7e8
	goto loc_832EE7E8;
loc_832EE810:
	// li r5,36
	ctx.r5.s64 = 36;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x833a2b30
	ctx.lr = 0x832EE820;
	sub_833A2B30(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
loc_832EE828:
	// bl 0x832f7d58
	ctx.lr = 0x832EE82C;
	sub_832F7D58(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_832EE840"))) PPC_WEAK_FUNC(sub_832EE840);
PPC_FUNC_IMPL(__imp__sub_832EE840) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x832f7d18
	ctx.lr = 0x832EE858;
	sub_832F7D18(ctx, base);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne cr6,0x832ee87c
	if (!ctx.cr6.eq) goto loc_832EE87C;
	// lis r11,-32210
	ctx.r11.s64 = -2110914560;
	// lis r10,-32210
	ctx.r10.s64 = -2110914560;
	// addi r4,r11,-27464
	ctx.r4.s64 = ctx.r11.s64 + -27464;
	// addi r3,r10,-27036
	ctx.r3.s64 = ctx.r10.s64 + -27036;
loc_832EE870:
	// bl 0x832ee598
	ctx.lr = 0x832EE874;
	sub_832EE598(ctx, base);
	// li r31,0
	ctx.r31.s64 = 0;
	// b 0x832ee8a0
	goto loc_832EE8A0;
loc_832EE87C:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x832ee89c
	if (!ctx.cr6.eq) goto loc_832EE89C;
	// lis r11,-32210
	ctx.r11.s64 = -2110914560;
	// lis r10,-32210
	ctx.r10.s64 = -2110914560;
	// addi r4,r11,-27508
	ctx.r4.s64 = ctx.r11.s64 + -27508;
	// addi r3,r10,-27048
	ctx.r3.s64 = ctx.r10.s64 + -27048;
	// b 0x832ee870
	goto loc_832EE870;
loc_832EE89C:
	// lwz r31,8(r31)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
loc_832EE8A0:
	// bl 0x832f7d58
	ctx.lr = 0x832EE8A4;
	sub_832F7D58(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_832EE8BC"))) PPC_WEAK_FUNC(sub_832EE8BC);
PPC_FUNC_IMPL(__imp__sub_832EE8BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832EE8C0"))) PPC_WEAK_FUNC(sub_832EE8C0);
PPC_FUNC_IMPL(__imp__sub_832EE8C0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x833a01ac
	ctx.lr = 0x832EE8C8;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// bl 0x832f7d18
	ctx.lr = 0x832EE8DC;
	sub_832F7D18(ctx, base);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne cr6,0x832ee8fc
	if (!ctx.cr6.eq) goto loc_832EE8FC;
	// lis r11,-32210
	ctx.r11.s64 = -2110914560;
	// lis r10,-32210
	ctx.r10.s64 = -2110914560;
	// addi r4,r11,-27464
	ctx.r4.s64 = ctx.r11.s64 + -27464;
	// addi r3,r10,-27012
	ctx.r3.s64 = ctx.r10.s64 + -27012;
loc_832EE8F4:
	// bl 0x832ee598
	ctx.lr = 0x832EE8F8;
	sub_832EE598(ctx, base);
	// b 0x832ee924
	goto loc_832EE924;
loc_832EE8FC:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x832ee91c
	if (!ctx.cr6.eq) goto loc_832EE91C;
	// lis r11,-32210
	ctx.r11.s64 = -2110914560;
	// lis r10,-32210
	ctx.r10.s64 = -2110914560;
	// addi r4,r11,-27508
	ctx.r4.s64 = ctx.r11.s64 + -27508;
	// addi r3,r10,-27024
	ctx.r3.s64 = ctx.r10.s64 + -27024;
	// b 0x832ee8f4
	goto loc_832EE8F4;
loc_832EE91C:
	// stw r30,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r30.u32);
	// stw r29,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r29.u32);
loc_832EE924:
	// bl 0x832f7d58
	ctx.lr = 0x832EE928;
	sub_832F7D58(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x833a01fc
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832EE930"))) PPC_WEAK_FUNC(sub_832EE930);
PPC_FUNC_IMPL(__imp__sub_832EE930) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x832f7d18
	ctx.lr = 0x832EE948;
	sub_832F7D18(ctx, base);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne cr6,0x832ee968
	if (!ctx.cr6.eq) goto loc_832EE968;
	// lis r11,-32210
	ctx.r11.s64 = -2110914560;
	// lis r10,-32210
	ctx.r10.s64 = -2110914560;
	// addi r4,r11,-27464
	ctx.r4.s64 = ctx.r11.s64 + -27464;
	// addi r3,r10,-26988
	ctx.r3.s64 = ctx.r10.s64 + -26988;
loc_832EE960:
	// bl 0x832ee598
	ctx.lr = 0x832EE964;
	sub_832EE598(ctx, base);
	// b 0x832ee998
	goto loc_832EE998;
loc_832EE968:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x832ee988
	if (!ctx.cr6.eq) goto loc_832EE988;
	// lis r11,-32210
	ctx.r11.s64 = -2110914560;
	// lis r10,-32210
	ctx.r10.s64 = -2110914560;
	// addi r4,r11,-27508
	ctx.r4.s64 = ctx.r11.s64 + -27508;
	// addi r3,r10,-27000
	ctx.r3.s64 = ctx.r10.s64 + -27000;
	// b 0x832ee960
	goto loc_832EE960;
loc_832EE988:
	// lwz r11,24(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r10,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r10.u32);
	// stw r11,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r11.u32);
loc_832EE998:
	// bl 0x832f7d58
	ctx.lr = 0x832EE99C;
	sub_832F7D58(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_832EE9B0"))) PPC_WEAK_FUNC(sub_832EE9B0);
PPC_FUNC_IMPL(__imp__sub_832EE9B0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// bl 0x832f7d18
	ctx.lr = 0x832EE9D0;
	sub_832F7D18(ctx, base);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne cr6,0x832ee9f0
	if (!ctx.cr6.eq) goto loc_832EE9F0;
	// lis r11,-32210
	ctx.r11.s64 = -2110914560;
	// lis r10,-32210
	ctx.r10.s64 = -2110914560;
	// addi r4,r11,-27464
	ctx.r4.s64 = ctx.r11.s64 + -27464;
	// addi r3,r10,-26964
	ctx.r3.s64 = ctx.r10.s64 + -26964;
loc_832EE9E8:
	// bl 0x832ee598
	ctx.lr = 0x832EE9EC;
	sub_832EE598(ctx, base);
	// b 0x832eea44
	goto loc_832EEA44;
loc_832EE9F0:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x832eea10
	if (!ctx.cr6.eq) goto loc_832EEA10;
	// lis r11,-32210
	ctx.r11.s64 = -2110914560;
	// lis r10,-32210
	ctx.r10.s64 = -2110914560;
	// addi r4,r11,-27508
	ctx.r4.s64 = ctx.r11.s64 + -27508;
	// addi r3,r10,-26976
	ctx.r3.s64 = ctx.r10.s64 + -26976;
	// b 0x832ee9e8
	goto loc_832EE9E8;
loc_832EEA10:
	// cmpwi cr6,r30,1
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 1, ctx.xer);
	// bne cr6,0x832eea20
	if (!ctx.cr6.eq) goto loc_832EEA20;
	// lwz r31,12(r31)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// b 0x832eea48
	goto loc_832EEA48;
loc_832EEA20:
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// beq cr6,0x832eea44
	if (ctx.cr6.eq) goto loc_832EEA44;
	// lwz r11,28(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x832eea44
	if (ctx.cr6.eq) goto loc_832EEA44;
	// li r4,-3
	ctx.r4.s64 = -3;
	// lwz r3,32(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x832EEA44;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_832EEA44:
	// li r31,0
	ctx.r31.s64 = 0;
loc_832EEA48:
	// bl 0x832f7d58
	ctx.lr = 0x832EEA4C;
	sub_832F7D58(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_832EEA68"))) PPC_WEAK_FUNC(sub_832EEA68);
PPC_FUNC_IMPL(__imp__sub_832EEA68) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x833a01a8
	ctx.lr = 0x832EEA70;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// mr r30,r6
	ctx.r30.u64 = ctx.r6.u64;
	// bl 0x832f7d18
	ctx.lr = 0x832EEA88;
	sub_832F7D18(ctx, base);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne cr6,0x832eeaa8
	if (!ctx.cr6.eq) goto loc_832EEAA8;
	// lis r11,-32210
	ctx.r11.s64 = -2110914560;
	// lis r10,-32210
	ctx.r10.s64 = -2110914560;
	// addi r4,r11,-27464
	ctx.r4.s64 = ctx.r11.s64 + -27464;
	// addi r3,r10,-26940
	ctx.r3.s64 = ctx.r10.s64 + -26940;
loc_832EEAA0:
	// bl 0x832ee598
	ctx.lr = 0x832EEAA4;
	sub_832EE598(ctx, base);
	// b 0x832eeb54
	goto loc_832EEB54;
loc_832EEAA8:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x832eeac8
	if (!ctx.cr6.eq) goto loc_832EEAC8;
	// lis r11,-32210
	ctx.r11.s64 = -2110914560;
	// lis r10,-32210
	ctx.r10.s64 = -2110914560;
	// addi r4,r11,-27508
	ctx.r4.s64 = ctx.r11.s64 + -27508;
	// addi r3,r10,-26952
	ctx.r3.s64 = ctx.r10.s64 + -26952;
	// b 0x832eeaa0
	goto loc_832EEAA0;
loc_832EEAC8:
	// cmpwi cr6,r28,0
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// bne cr6,0x832eeae0
	if (!ctx.cr6.eq) goto loc_832EEAE0;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r11.u32);
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
	// b 0x832eeb54
	goto loc_832EEB54;
loc_832EEAE0:
	// cmpwi cr6,r28,1
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 1, ctx.xer);
	// bne cr6,0x832eeb2c
	if (!ctx.cr6.eq) goto loc_832EEB2C;
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// cmpw cr6,r11,r29
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r29.s32, ctx.xer);
	// blt cr6,0x832eeaf8
	if (ctx.cr6.lt) goto loc_832EEAF8;
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
loc_832EEAF8:
	// stw r11,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r11.u32);
	// lwz r10,16(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// lwz r9,20(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// stw r10,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r10.u32);
	// lwz r9,12(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// lwz r10,16(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stw r11,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r11.u32);
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// subf r11,r11,r9
	ctx.r11.s64 = ctx.r9.s64 - ctx.r11.s64;
	// stw r11,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r11.u32);
	// b 0x832eeb54
	goto loc_832EEB54;
loc_832EEB2C:
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
	// stw r11,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r11.u32);
	// lwz r11,28(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x832eeb54
	if (ctx.cr6.eq) goto loc_832EEB54;
	// li r4,-3
	ctx.r4.s64 = -3;
	// lwz r3,32(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x832EEB54;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_832EEB54:
	// bl 0x832f7d58
	ctx.lr = 0x832EEB58;
	sub_832F7D58(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x833a01f8
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832EEB60"))) PPC_WEAK_FUNC(sub_832EEB60);
PPC_FUNC_IMPL(__imp__sub_832EEB60) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x833a01ac
	ctx.lr = 0x832EEB68;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// bl 0x832f7d18
	ctx.lr = 0x832EEB7C;
	sub_832F7D18(ctx, base);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// bne cr6,0x832eeb9c
	if (!ctx.cr6.eq) goto loc_832EEB9C;
	// lis r11,-32210
	ctx.r11.s64 = -2110914560;
	// lis r10,-32210
	ctx.r10.s64 = -2110914560;
	// addi r4,r11,-27464
	ctx.r4.s64 = ctx.r11.s64 + -27464;
	// addi r3,r10,-26916
	ctx.r3.s64 = ctx.r10.s64 + -26916;
loc_832EEB94:
	// bl 0x832ee598
	ctx.lr = 0x832EEB98;
	sub_832EE598(ctx, base);
	// b 0x832eec0c
	goto loc_832EEC0C;
loc_832EEB9C:
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x832eebbc
	if (!ctx.cr6.eq) goto loc_832EEBBC;
	// lis r11,-32210
	ctx.r11.s64 = -2110914560;
	// lis r10,-32210
	ctx.r10.s64 = -2110914560;
	// addi r4,r11,-27508
	ctx.r4.s64 = ctx.r11.s64 + -27508;
	// addi r3,r10,-26928
	ctx.r3.s64 = ctx.r10.s64 + -26928;
	// b 0x832eeb94
	goto loc_832EEB94;
loc_832EEBBC:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x832eec0c
	if (!ctx.cr6.gt) goto loc_832EEC0C;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x832eec0c
	if (ctx.cr6.eq) goto loc_832EEC0C;
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// beq cr6,0x832eec0c
	if (ctx.cr6.eq) goto loc_832EEC0C;
	// cmpwi cr6,r29,1
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 1, ctx.xer);
	// beq cr6,0x832eec0c
	if (ctx.cr6.eq) goto loc_832EEC0C;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// lwz r11,28(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 28);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x832eec0c
	if (ctx.cr6.eq) goto loc_832EEC0C;
	// li r4,-3
	ctx.r4.s64 = -3;
	// lwz r3,32(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 32);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x832EEC0C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_832EEC0C:
	// bl 0x832f7d58
	ctx.lr = 0x832EEC10;
	sub_832F7D58(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x833a01fc
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832EEC18"))) PPC_WEAK_FUNC(sub_832EEC18);
PPC_FUNC_IMPL(__imp__sub_832EEC18) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x833a01ac
	ctx.lr = 0x832EEC20;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// bl 0x832f7d18
	ctx.lr = 0x832EEC34;
	sub_832F7D18(ctx, base);
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x832ee5e8
	ctx.lr = 0x832EEC44;
	sub_832EE5E8(ctx, base);
	// bl 0x832f7d58
	ctx.lr = 0x832EEC48;
	sub_832F7D58(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x833a01fc
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832EEC50"))) PPC_WEAK_FUNC(sub_832EEC50);
PPC_FUNC_IMPL(__imp__sub_832EEC50) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x833a01a8
	ctx.lr = 0x832EEC58;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// mr r28,r6
	ctx.r28.u64 = ctx.r6.u64;
	// bl 0x832f7d18
	ctx.lr = 0x832EEC70;
	sub_832F7D18(ctx, base);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne cr6,0x832eec94
	if (!ctx.cr6.eq) goto loc_832EEC94;
	// lis r11,-32210
	ctx.r11.s64 = -2110914560;
	// lis r10,-32210
	ctx.r10.s64 = -2110914560;
	// addi r4,r11,-27464
	ctx.r4.s64 = ctx.r11.s64 + -27464;
	// addi r3,r10,-26868
	ctx.r3.s64 = ctx.r10.s64 + -26868;
loc_832EEC88:
	// bl 0x832ee598
	ctx.lr = 0x832EEC8C;
	sub_832EE598(ctx, base);
	// li r31,0
	ctx.r31.s64 = 0;
	// b 0x832eed08
	goto loc_832EED08;
loc_832EEC94:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x832eecb4
	if (!ctx.cr6.eq) goto loc_832EECB4;
	// lis r11,-32210
	ctx.r11.s64 = -2110914560;
	// lis r10,-32210
	ctx.r10.s64 = -2110914560;
	// addi r4,r11,-27508
	ctx.r4.s64 = ctx.r11.s64 + -27508;
	// addi r3,r10,-26880
	ctx.r3.s64 = ctx.r10.s64 + -26880;
	// b 0x832eec88
	goto loc_832EEC88;
loc_832EECB4:
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// beq cr6,0x832eecf8
	if (ctx.cr6.eq) goto loc_832EECF8;
	// cmpwi cr6,r30,1
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 1, ctx.xer);
	// bne cr6,0x832eecd8
	if (!ctx.cr6.eq) goto loc_832EECD8;
	// lwz r30,12(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// cmpw cr6,r30,r29
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r29.s32, ctx.xer);
	// blt cr6,0x832eecf8
	if (ctx.cr6.lt) goto loc_832EECF8;
	// mr r30,r29
	ctx.r30.u64 = ctx.r29.u64;
	// b 0x832eecf8
	goto loc_832EECF8;
loc_832EECD8:
	// lwz r11,28(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// li r30,0
	ctx.r30.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x832eecf8
	if (ctx.cr6.eq) goto loc_832EECF8;
	// li r4,-3
	ctx.r4.s64 = -3;
	// lwz r3,32(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x832EECF8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_832EECF8:
	// subf r11,r30,r29
	ctx.r11.s64 = ctx.r29.s64 - ctx.r30.s64;
	// stw r30,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r30.u32);
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r31,r11,27,31,31
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
loc_832EED08:
	// bl 0x832f7d58
	ctx.lr = 0x832EED0C;
	sub_832F7D58(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x833a01f8
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832EED18"))) PPC_WEAK_FUNC(sub_832EED18);
PPC_FUNC_IMPL(__imp__sub_832EED18) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x832f7d18
	ctx.lr = 0x832EED30;
	sub_832F7D18(ctx, base);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne cr6,0x832eed54
	if (!ctx.cr6.eq) goto loc_832EED54;
	// lis r11,-32210
	ctx.r11.s64 = -2110914560;
	// lis r10,-32210
	ctx.r10.s64 = -2110914560;
	// addi r4,r11,-27464
	ctx.r4.s64 = ctx.r11.s64 + -27464;
	// addi r3,r10,-26844
	ctx.r3.s64 = ctx.r10.s64 + -26844;
loc_832EED48:
	// bl 0x832ee598
	ctx.lr = 0x832EED4C;
	sub_832EE598(ctx, base);
	// li r31,0
	ctx.r31.s64 = 0;
	// b 0x832eed78
	goto loc_832EED78;
loc_832EED54:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x832eed74
	if (!ctx.cr6.eq) goto loc_832EED74;
	// lis r11,-32210
	ctx.r11.s64 = -2110914560;
	// lis r10,-32210
	ctx.r10.s64 = -2110914560;
	// addi r4,r11,-27508
	ctx.r4.s64 = ctx.r11.s64 + -27508;
	// addi r3,r10,-26856
	ctx.r3.s64 = ctx.r10.s64 + -26856;
	// b 0x832eed48
	goto loc_832EED48;
loc_832EED74:
	// lwz r31,24(r31)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
loc_832EED78:
	// bl 0x832f7d58
	ctx.lr = 0x832EED7C;
	sub_832F7D58(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_832EED94"))) PPC_WEAK_FUNC(sub_832EED94);
PPC_FUNC_IMPL(__imp__sub_832EED94) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832EED98"))) PPC_WEAK_FUNC(sub_832EED98);
PPC_FUNC_IMPL(__imp__sub_832EED98) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// bl 0x832f7d18
	ctx.lr = 0x832EEDB8;
	sub_832F7D18(ctx, base);
	// lis r11,-31814
	ctx.r11.s64 = -2084962304;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r11,r11,-16192
	ctx.r11.s64 = ctx.r11.s64 + -16192;
	// addi r9,r11,4
	ctx.r9.s64 = ctx.r11.s64 + 4;
loc_832EEDC8:
	// lwz r8,0(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq cr6,0x832eede8
	if (ctx.cr6.eq) goto loc_832EEDE8;
	// addi r9,r9,36
	ctx.r9.s64 = ctx.r9.s64 + 36;
	// addi r8,r11,1732
	ctx.r8.s64 = ctx.r11.s64 + 1732;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpw cr6,r9,r8
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r8.s32, ctx.xer);
	// blt cr6,0x832eedc8
	if (ctx.cr6.lt) goto loc_832EEDC8;
loc_832EEDE8:
	// cmpwi cr6,r10,48
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 48, ctx.xer);
	// bne cr6,0x832eedf8
	if (!ctx.cr6.eq) goto loc_832EEDF8;
	// li r30,0
	ctx.r30.s64 = 0;
	// b 0x832eee48
	goto loc_832EEE48;
loc_832EEDF8:
	// mulli r10,r10,36
	ctx.r10.s64 = ctx.r10.s64 * 36;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lis r10,-31844
	ctx.r10.s64 = -2086928384;
	// lis r8,-31953
	ctx.r8.s64 = -2094071808;
	// stw r11,32(r11)
	PPC_STORE_U32(ctx.r11.u32 + 32, ctx.r11.u32);
	// addi r10,r10,-29952
	ctx.r10.s64 = ctx.r10.s64 + -29952;
	// lis r9,-32210
	ctx.r9.s64 = -2110914560;
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// addi r10,r8,-6776
	ctx.r10.s64 = ctx.r8.s64 + -6776;
	// addi r9,r9,-27100
	ctx.r9.s64 = ctx.r9.s64 + -27100;
	// stw r30,20(r11)
	PPC_STORE_U32(ctx.r11.u32 + 20, ctx.r30.u32);
	// li r7,1
	ctx.r7.s64 = 1;
	// stw r31,24(r11)
	PPC_STORE_U32(ctx.r11.u32 + 24, ctx.r31.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// stw r9,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r9.u32);
	// stw r7,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r7.u32);
	// mr r30,r11
	ctx.r30.u64 = ctx.r11.u64;
	// stw r10,28(r11)
	PPC_STORE_U32(ctx.r11.u32 + 28, ctx.r10.u32);
	// stw r31,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r31.u32);
	// stw r8,16(r11)
	PPC_STORE_U32(ctx.r11.u32 + 16, ctx.r8.u32);
loc_832EEE48:
	// bl 0x832f7d58
	ctx.lr = 0x832EEE4C;
	sub_832F7D58(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_832EEE68"))) PPC_WEAK_FUNC(sub_832EEE68);
PPC_FUNC_IMPL(__imp__sub_832EEE68) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32210
	ctx.r11.s64 = -2110914560;
	// addi r3,r11,-26816
	ctx.r3.s64 = ctx.r11.s64 + -26816;
	// b 0x832ff8c8
	sub_832FF8C8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832EEE74"))) PPC_WEAK_FUNC(sub_832EEE74);
PPC_FUNC_IMPL(__imp__sub_832EEE74) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832EEE78"))) PPC_WEAK_FUNC(sub_832EEE78);
PPC_FUNC_IMPL(__imp__sub_832EEE78) {
	PPC_FUNC_PROLOGUE();
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x832eee94
	if (!ctx.cr6.eq) goto loc_832EEE94;
	// lis r11,-32210
	ctx.r11.s64 = -2110914560;
	// lis r10,-32210
	ctx.r10.s64 = -2110914560;
	// addi r4,r11,-27464
	ctx.r4.s64 = ctx.r11.s64 + -27464;
	// addi r3,r10,-26720
	ctx.r3.s64 = ctx.r10.s64 + -26720;
	// b 0x832ee598
	sub_832EE598(ctx, base);
	return;
loc_832EEE94:
	// lbz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 4);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x832eeeb4
	if (!ctx.cr0.eq) goto loc_832EEEB4;
	// lis r11,-32210
	ctx.r11.s64 = -2110914560;
	// lis r10,-32210
	ctx.r10.s64 = -2110914560;
	// addi r4,r11,-27508
	ctx.r4.s64 = ctx.r11.s64 + -27508;
	// addi r3,r10,-26732
	ctx.r3.s64 = ctx.r10.s64 + -26732;
	// b 0x832ee598
	sub_832EE598(ctx, base);
	return;
loc_832EEEB4:
	// lwz r8,12(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// li r11,0
	ctx.r11.s64 = 0;
	// lwz r10,16(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// mr r9,r11
	ctx.r9.u64 = ctx.r11.u64;
	// addic. r10,r10,-1
	ctx.xer.ca = ctx.r10.u32 > 0;
	ctx.r10.s64 = ctx.r10.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// stw r8,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r8.u32);
	// ble 0x832eeefc
	if (!ctx.cr0.gt) goto loc_832EEEFC;
	// addi r10,r8,8
	ctx.r10.s64 = ctx.r8.s64 + 8;
loc_832EEED4:
	// addi r7,r10,8
	ctx.r7.s64 = ctx.r10.s64 + 8;
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r11.u32);
	// stw r11,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r11.u32);
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// stw r7,-8(r10)
	PPC_STORE_U32(ctx.r10.u32 + -8, ctx.r7.u32);
	// addi r10,r10,16
	ctx.r10.s64 = ctx.r10.s64 + 16;
	// lwz r7,16(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// addi r7,r7,-1
	ctx.r7.s64 = ctx.r7.s64 + -1;
	// cmpw cr6,r9,r7
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r7.s32, ctx.xer);
	// blt cr6,0x832eeed4
	if (ctx.cr6.lt) goto loc_832EEED4;
loc_832EEEFC:
	// rlwinm r10,r9,4,0,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 4) & 0xFFFFFFF0;
	// add r10,r10,r8
	ctx.r10.u64 = ctx.r10.u64 + ctx.r8.u64;
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r11.u32);
	// stw r11,8(r10)
	PPC_STORE_U32(ctx.r10.u32 + 8, ctx.r11.u32);
	// stw r11,12(r10)
	PPC_STORE_U32(ctx.r10.u32 + 12, ctx.r11.u32);
	// addi r10,r3,24
	ctx.r10.s64 = ctx.r3.s64 + 24;
	// stw r11,24(r3)
	PPC_STORE_U32(ctx.r3.u32 + 24, ctx.r11.u32);
	// stw r11,28(r3)
	PPC_STORE_U32(ctx.r3.u32 + 28, ctx.r11.u32);
	// stw r11,32(r3)
	PPC_STORE_U32(ctx.r3.u32 + 32, ctx.r11.u32);
	// stw r11,36(r3)
	PPC_STORE_U32(ctx.r3.u32 + 36, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_832EEF28"))) PPC_WEAK_FUNC(sub_832EEF28);
PPC_FUNC_IMPL(__imp__sub_832EEF28) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// mr r30,r6
	ctx.r30.u64 = ctx.r6.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x832eef68
	if (!ctx.cr6.eq) goto loc_832EEF68;
	// lis r11,-32210
	ctx.r11.s64 = -2110914560;
	// lis r10,-32210
	ctx.r10.s64 = -2110914560;
	// addi r4,r11,-27464
	ctx.r4.s64 = ctx.r11.s64 + -27464;
	// addi r3,r10,-26672
	ctx.r3.s64 = ctx.r10.s64 + -26672;
loc_832EEF60:
	// bl 0x832ee598
	ctx.lr = 0x832EEF64;
	sub_832EE598(ctx, base);
	// b 0x832ef034
	goto loc_832EF034;
loc_832EEF68:
	// lbz r10,4(r3)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r3.u32 + 4);
	// cmplwi r10,0
	ctx.cr0.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne 0x832eef88
	if (!ctx.cr0.eq) goto loc_832EEF88;
	// lis r11,-32210
	ctx.r11.s64 = -2110914560;
	// lis r10,-32210
	ctx.r10.s64 = -2110914560;
	// addi r4,r11,-27508
	ctx.r4.s64 = ctx.r11.s64 + -27508;
	// addi r3,r10,-26684
	ctx.r3.s64 = ctx.r10.s64 + -26684;
	// b 0x832eef60
	goto loc_832EEF60;
loc_832EEF88:
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt cr6,0x832ef00c
	if (ctx.cr6.lt) goto loc_832EF00C;
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// bge cr6,0x832ef00c
	if (!ctx.cr6.lt) goto loc_832EF00C;
	// addi r11,r11,6
	ctx.r11.s64 = ctx.r11.s64 + 6;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r31,r11,r3
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r3.u32);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x832ef028
	if (ctx.cr6.eq) goto loc_832EF028;
	// ld r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r31.u32 + 8);
	// std r10,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r10.u64);
	// lwz r9,84(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmpw cr6,r9,r4
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r4.s32, ctx.xer);
	// bgt cr6,0x832eefdc
	if (ctx.cr6.gt) goto loc_832EEFDC;
	// std r10,0(r30)
	PPC_STORE_U64(ctx.r30.u32 + 0, ctx.r10.u64);
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// stwx r10,r11,r3
	PPC_STORE_U32(ctx.r11.u32 + ctx.r3.u32, ctx.r10.u32);
	// lwz r11,20(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// stw r31,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r31.u32);
	// b 0x832ef034
	goto loc_832EF034;
loc_832EEFDC:
	// lbz r11,5(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 5);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// bne cr6,0x832ef028
	if (!ctx.cr6.eq) goto loc_832EF028;
	// addi r6,r1,88
	ctx.r6.s64 = ctx.r1.s64 + 88;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x832f0da8
	ctx.lr = 0x832EEFF8;
	sub_832F0DA8(ctx, base);
	// ld r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// ld r10,88(r1)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// std r11,0(r30)
	PPC_STORE_U64(ctx.r30.u32 + 0, ctx.r11.u64);
	// std r10,8(r31)
	PPC_STORE_U64(ctx.r31.u32 + 8, ctx.r10.u64);
	// b 0x832ef034
	goto loc_832EF034;
loc_832EF00C:
	// lwz r11,40(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 40);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x832ef028
	if (ctx.cr6.eq) goto loc_832EF028;
	// li r4,-3
	ctx.r4.s64 = -3;
	// lwz r3,44(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 44);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x832EF028;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_832EF028:
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
	// stw r11,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r11.u32);
loc_832EF034:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_832EF04C"))) PPC_WEAK_FUNC(sub_832EF04C);
PPC_FUNC_IMPL(__imp__sub_832EF04C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832EF050"))) PPC_WEAK_FUNC(sub_832EF050);
PPC_FUNC_IMPL(__imp__sub_832EF050) {
	PPC_FUNC_PROLOGUE();
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x832ef06c
	if (!ctx.cr6.eq) goto loc_832EF06C;
	// lis r11,-32210
	ctx.r11.s64 = -2110914560;
	// lis r10,-32210
	ctx.r10.s64 = -2110914560;
	// addi r4,r11,-27464
	ctx.r4.s64 = ctx.r11.s64 + -27464;
	// addi r3,r10,-26648
	ctx.r3.s64 = ctx.r10.s64 + -26648;
	// b 0x832ee598
	sub_832EE598(ctx, base);
	return;
loc_832EF06C:
	// lbz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 4);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x832ef08c
	if (!ctx.cr0.eq) goto loc_832EF08C;
	// lis r11,-32210
	ctx.r11.s64 = -2110914560;
	// lis r10,-32210
	ctx.r10.s64 = -2110914560;
	// addi r4,r11,-27508
	ctx.r4.s64 = ctx.r11.s64 + -27508;
	// addi r3,r10,-26660
	ctx.r3.s64 = ctx.r10.s64 + -26660;
	// b 0x832ee598
	sub_832EE598(ctx, base);
	return;
loc_832EF08C:
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// blt cr6,0x832ef164
	if (ctx.cr6.lt) goto loc_832EF164;
	// cmpwi cr6,r4,4
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 4, ctx.xer);
	// bge cr6,0x832ef164
	if (!ctx.cr6.lt) goto loc_832EF164;
	// lwz r6,4(r5)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r5.u32 + 4);
	// cmpwi cr6,r6,0
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// blelr cr6
	if (!ctx.cr6.gt) return;
	// lwz r7,0(r5)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// addi r11,r4,6
	ctx.r11.s64 = ctx.r4.s64 + 6;
	// li r10,0
	ctx.r10.s64 = 0;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r9,r11,r3
	ctx.r9.u64 = ctx.r11.u64 + ctx.r3.u64;
	// lwzx r11,r11,r3
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r3.u32);
	// b 0x832ef0d8
	goto loc_832EF0D8;
loc_832EF0CC:
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// mr r9,r11
	ctx.r9.u64 = ctx.r11.u64;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
loc_832EF0D8:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x832ef0cc
	if (!ctx.cr6.eq) goto loc_832EF0CC;
	// lbz r11,5(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 5);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// bne cr6,0x832ef114
	if (!ctx.cr6.eq) goto loc_832EF114;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x832ef114
	if (ctx.cr6.eq) goto loc_832EF114;
	// lwz r8,8(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// lwz r11,12(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// add r8,r8,r11
	ctx.r8.u64 = ctx.r8.u64 + ctx.r11.u64;
	// cmplw cr6,r8,r7
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r7.u32, ctx.xer);
	// bne cr6,0x832ef114
	if (!ctx.cr6.eq) goto loc_832EF114;
	// add r11,r11,r6
	ctx.r11.u64 = ctx.r11.u64 + ctx.r6.u64;
	// stw r11,12(r10)
	PPC_STORE_U32(ctx.r10.u32 + 12, ctx.r11.u32);
	// blr 
	return;
loc_832EF114:
	// lwz r11,20(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x832ef13c
	if (!ctx.cr6.eq) goto loc_832EF13C;
	// lwz r11,40(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 40);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lwz r3,44(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 44);
	// li r4,-3
	ctx.r4.s64 = -3;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
loc_832EF13C:
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// li r8,0
	ctx.r8.s64 = 0;
	// stw r10,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r10.u32);
	// stw r8,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r8.u32);
	// lwz r10,0(r5)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// stw r10,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r10.u32);
	// lwz r10,4(r5)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r5.u32 + 4);
	// stw r10,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r10.u32);
	// stw r11,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r11.u32);
	// blr 
	return;
loc_832EF164:
	// lwz r11,40(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 40);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lwz r3,44(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 44);
	// li r4,-3
	ctx.r4.s64 = -3;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_832EF180"))) PPC_WEAK_FUNC(sub_832EF180);
PPC_FUNC_IMPL(__imp__sub_832EF180) {
	PPC_FUNC_PROLOGUE();
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x832ef19c
	if (!ctx.cr6.eq) goto loc_832EF19C;
	// lis r11,-32210
	ctx.r11.s64 = -2110914560;
	// lis r10,-32210
	ctx.r10.s64 = -2110914560;
	// addi r4,r11,-27464
	ctx.r4.s64 = ctx.r11.s64 + -27464;
	// addi r3,r10,-26624
	ctx.r3.s64 = ctx.r10.s64 + -26624;
	// b 0x832ee598
	sub_832EE598(ctx, base);
	return;
loc_832EF19C:
	// lbz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 4);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x832ef1bc
	if (!ctx.cr0.eq) goto loc_832EF1BC;
	// lis r11,-32210
	ctx.r11.s64 = -2110914560;
	// lis r10,-32210
	ctx.r10.s64 = -2110914560;
	// addi r4,r11,-27508
	ctx.r4.s64 = ctx.r11.s64 + -27508;
	// addi r3,r10,-26636
	ctx.r3.s64 = ctx.r10.s64 + -26636;
	// b 0x832ee598
	sub_832EE598(ctx, base);
	return;
loc_832EF1BC:
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// blt cr6,0x832ef284
	if (ctx.cr6.lt) goto loc_832EF284;
	// cmpwi cr6,r4,4
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 4, ctx.xer);
	// bge cr6,0x832ef284
	if (!ctx.cr6.lt) goto loc_832EF284;
	// lwz r8,4(r5)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r5.u32 + 4);
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// blelr cr6
	if (!ctx.cr6.gt) return;
	// lwz r9,0(r5)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// addi r11,r4,6
	ctx.r11.s64 = ctx.r4.s64 + 6;
	// lbz r7,5(r3)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r3.u32 + 5);
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// cmplwi cr6,r7,1
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 1, ctx.xer);
	// lwzx r11,r10,r3
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r3.u32);
	// bne cr6,0x832ef22c
	if (!ctx.cr6.eq) goto loc_832EF22C;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x832ef22c
	if (ctx.cr6.eq) goto loc_832EF22C;
	// lwz r7,8(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// add r8,r9,r8
	ctx.r8.u64 = ctx.r9.u64 + ctx.r8.u64;
	// cmplw cr6,r8,r7
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r7.u32, ctx.xer);
	// bne cr6,0x832ef22c
	if (!ctx.cr6.eq) goto loc_832EF22C;
	// stw r9,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r9.u32);
	// lwz r9,12(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// lwz r10,4(r5)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r5.u32 + 4);
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// stw r10,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r10.u32);
	// blr 
	return;
loc_832EF22C:
	// lwz r11,20(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x832ef254
	if (!ctx.cr6.eq) goto loc_832EF254;
	// lwz r11,40(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 40);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lwz r3,44(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 44);
	// li r4,-3
	ctx.r4.s64 = -3;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
loc_832EF254:
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// li r8,0
	ctx.r8.s64 = 0;
	// stw r9,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r9.u32);
	// stw r8,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r8.u32);
	// lwz r9,0(r5)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// stw r9,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r9.u32);
	// lwz r9,4(r5)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r5.u32 + 4);
	// stw r9,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r9.u32);
	// lwzx r9,r10,r3
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r3.u32);
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// stwx r11,r10,r3
	PPC_STORE_U32(ctx.r10.u32 + ctx.r3.u32, ctx.r11.u32);
	// blr 
	return;
loc_832EF284:
	// lwz r11,40(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 40);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lwz r3,44(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 44);
	// li r4,-3
	ctx.r4.s64 = -3;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_832EF2A0"))) PPC_WEAK_FUNC(sub_832EF2A0);
PPC_FUNC_IMPL(__imp__sub_832EF2A0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// bl 0x832f7c38
	ctx.lr = 0x832EF2B8;
	sub_832F7C38(ctx, base);
	// bl 0x832f7d18
	ctx.lr = 0x832EF2BC;
	sub_832F7D18(ctx, base);
	// lis r30,-31823
	ctx.r30.s64 = -2085552128;
	// lwz r31,-31168(r30)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r30.u32 + -31168);
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// bne cr6,0x832ef2e0
	if (!ctx.cr6.eq) goto loc_832EF2E0;
	// lis r11,-31814
	ctx.r11.s64 = -2084962304;
	// li r5,4608
	ctx.r5.s64 = 4608;
	// addi r3,r11,-20800
	ctx.r3.s64 = ctx.r11.s64 + -20800;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x833a2b30
	ctx.lr = 0x832EF2E0;
	sub_833A2B30(ctx, base);
loc_832EF2E0:
	// addi r11,r31,1
	ctx.r11.s64 = ctx.r31.s64 + 1;
	// stw r11,-31168(r30)
	PPC_STORE_U32(ctx.r30.u32 + -31168, ctx.r11.u32);
	// bl 0x832f7d58
	ctx.lr = 0x832EF2EC;
	sub_832F7D58(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_832EF304"))) PPC_WEAK_FUNC(sub_832EF304);
PPC_FUNC_IMPL(__imp__sub_832EF304) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832EF308"))) PPC_WEAK_FUNC(sub_832EF308);
PPC_FUNC_IMPL(__imp__sub_832EF308) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// bl 0x832f7d18
	ctx.lr = 0x832EF318;
	sub_832F7D18(ctx, base);
	// lis r10,-31823
	ctx.r10.s64 = -2085552128;
	// lwz r11,-31168(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -31168);
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,-31168(r10)
	PPC_STORE_U32(ctx.r10.u32 + -31168, ctx.r11.u32);
	// bne 0x832ef340
	if (!ctx.cr0.eq) goto loc_832EF340;
	// lis r11,-31814
	ctx.r11.s64 = -2084962304;
	// li r5,4608
	ctx.r5.s64 = 4608;
	// addi r3,r11,-20800
	ctx.r3.s64 = ctx.r11.s64 + -20800;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x833a2b30
	ctx.lr = 0x832EF340;
	sub_833A2B30(ctx, base);
loc_832EF340:
	// bl 0x832f7d58
	ctx.lr = 0x832EF344;
	sub_832F7D58(ctx, base);
	// bl 0x832f7cb0
	ctx.lr = 0x832EF348;
	sub_832F7CB0(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_832EF358"))) PPC_WEAK_FUNC(sub_832EF358);
PPC_FUNC_IMPL(__imp__sub_832EF358) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x832f7d18
	ctx.lr = 0x832EF370;
	sub_832F7D18(ctx, base);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne cr6,0x832ef390
	if (!ctx.cr6.eq) goto loc_832EF390;
	// lis r11,-32210
	ctx.r11.s64 = -2110914560;
	// lis r10,-32210
	ctx.r10.s64 = -2110914560;
	// addi r4,r11,-27464
	ctx.r4.s64 = ctx.r11.s64 + -27464;
	// addi r3,r10,-26792
	ctx.r3.s64 = ctx.r10.s64 + -26792;
loc_832EF388:
	// bl 0x832ee598
	ctx.lr = 0x832EF38C;
	sub_832EE598(ctx, base);
	// b 0x832ef3c8
	goto loc_832EF3C8;
loc_832EF390:
	// lbz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 4);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x832ef3b0
	if (!ctx.cr0.eq) goto loc_832EF3B0;
	// lis r11,-32210
	ctx.r11.s64 = -2110914560;
	// lis r10,-32210
	ctx.r10.s64 = -2110914560;
	// addi r4,r11,-27508
	ctx.r4.s64 = ctx.r11.s64 + -27508;
	// addi r3,r10,-26804
	ctx.r3.s64 = ctx.r10.s64 + -26804;
	// b 0x832ef388
	goto loc_832EF388;
loc_832EF3B0:
	// li r5,48
	ctx.r5.s64 = 48;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x833a2b30
	ctx.lr = 0x832EF3C0;
	sub_833A2B30(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stb r11,4(r31)
	PPC_STORE_U8(ctx.r31.u32 + 4, ctx.r11.u8);
loc_832EF3C8:
	// bl 0x832f7d58
	ctx.lr = 0x832EF3CC;
	sub_832F7D58(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_832EF3E0"))) PPC_WEAK_FUNC(sub_832EF3E0);
PPC_FUNC_IMPL(__imp__sub_832EF3E0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x832f7d18
	ctx.lr = 0x832EF3F8;
	sub_832F7D18(ctx, base);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne cr6,0x832ef41c
	if (!ctx.cr6.eq) goto loc_832EF41C;
	// lis r11,-32210
	ctx.r11.s64 = -2110914560;
	// lis r10,-32210
	ctx.r10.s64 = -2110914560;
	// addi r4,r11,-27464
	ctx.r4.s64 = ctx.r11.s64 + -27464;
	// addi r3,r10,-26768
	ctx.r3.s64 = ctx.r10.s64 + -26768;
loc_832EF410:
	// bl 0x832ee598
	ctx.lr = 0x832EF414;
	sub_832EE598(ctx, base);
	// li r31,0
	ctx.r31.s64 = 0;
	// b 0x832ef440
	goto loc_832EF440;
loc_832EF41C:
	// lbz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 4);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x832ef43c
	if (!ctx.cr0.eq) goto loc_832EF43C;
	// lis r11,-32210
	ctx.r11.s64 = -2110914560;
	// lis r10,-32210
	ctx.r10.s64 = -2110914560;
	// addi r4,r11,-27508
	ctx.r4.s64 = ctx.r11.s64 + -27508;
	// addi r3,r10,-26780
	ctx.r3.s64 = ctx.r10.s64 + -26780;
	// b 0x832ef410
	goto loc_832EF410;
loc_832EF43C:
	// lwz r31,8(r31)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
loc_832EF440:
	// bl 0x832f7d58
	ctx.lr = 0x832EF444;
	sub_832F7D58(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_832EF45C"))) PPC_WEAK_FUNC(sub_832EF45C);
PPC_FUNC_IMPL(__imp__sub_832EF45C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832EF460"))) PPC_WEAK_FUNC(sub_832EF460);
PPC_FUNC_IMPL(__imp__sub_832EF460) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x833a01ac
	ctx.lr = 0x832EF468;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// bl 0x832f7d18
	ctx.lr = 0x832EF47C;
	sub_832F7D18(ctx, base);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne cr6,0x832ef49c
	if (!ctx.cr6.eq) goto loc_832EF49C;
	// lis r11,-32210
	ctx.r11.s64 = -2110914560;
	// lis r10,-32210
	ctx.r10.s64 = -2110914560;
	// addi r4,r11,-27464
	ctx.r4.s64 = ctx.r11.s64 + -27464;
	// addi r3,r10,-26744
	ctx.r3.s64 = ctx.r10.s64 + -26744;
loc_832EF494:
	// bl 0x832ee598
	ctx.lr = 0x832EF498;
	sub_832EE598(ctx, base);
	// b 0x832ef4c4
	goto loc_832EF4C4;
loc_832EF49C:
	// lbz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 4);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x832ef4bc
	if (!ctx.cr0.eq) goto loc_832EF4BC;
	// lis r11,-32210
	ctx.r11.s64 = -2110914560;
	// lis r10,-32210
	ctx.r10.s64 = -2110914560;
	// addi r4,r11,-27508
	ctx.r4.s64 = ctx.r11.s64 + -27508;
	// addi r3,r10,-26756
	ctx.r3.s64 = ctx.r10.s64 + -26756;
	// b 0x832ef494
	goto loc_832EF494;
loc_832EF4BC:
	// stw r30,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r30.u32);
	// stw r29,44(r31)
	PPC_STORE_U32(ctx.r31.u32 + 44, ctx.r29.u32);
loc_832EF4C4:
	// bl 0x832f7d58
	ctx.lr = 0x832EF4C8;
	sub_832F7D58(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x833a01fc
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832EF4D0"))) PPC_WEAK_FUNC(sub_832EF4D0);
PPC_FUNC_IMPL(__imp__sub_832EF4D0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x832f7d18
	ctx.lr = 0x832EF4E8;
	sub_832F7D18(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x832eee78
	ctx.lr = 0x832EF4F0;
	sub_832EEE78(ctx, base);
	// bl 0x832f7d58
	ctx.lr = 0x832EF4F4;
	sub_832F7D58(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_832EF508"))) PPC_WEAK_FUNC(sub_832EF508);
PPC_FUNC_IMPL(__imp__sub_832EF508) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// bl 0x832f7d18
	ctx.lr = 0x832EF528;
	sub_832F7D18(ctx, base);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne cr6,0x832ef548
	if (!ctx.cr6.eq) goto loc_832EF548;
	// lis r11,-32210
	ctx.r11.s64 = -2110914560;
	// lis r10,-32210
	ctx.r10.s64 = -2110914560;
	// addi r4,r11,-27464
	ctx.r4.s64 = ctx.r11.s64 + -27464;
	// addi r3,r10,-26696
	ctx.r3.s64 = ctx.r10.s64 + -26696;
loc_832EF540:
	// bl 0x832ee598
	ctx.lr = 0x832EF544;
	sub_832EE598(ctx, base);
	// b 0x832ef5c4
	goto loc_832EF5C4;
loc_832EF548:
	// lbz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 4);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x832ef568
	if (!ctx.cr0.eq) goto loc_832EF568;
	// lis r11,-32210
	ctx.r11.s64 = -2110914560;
	// lis r10,-32210
	ctx.r10.s64 = -2110914560;
	// addi r4,r11,-27508
	ctx.r4.s64 = ctx.r11.s64 + -27508;
	// addi r3,r10,-26708
	ctx.r3.s64 = ctx.r10.s64 + -26708;
	// b 0x832ef540
	goto loc_832EF540;
loc_832EF568:
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// blt cr6,0x832ef5a8
	if (ctx.cr6.lt) goto loc_832EF5A8;
	// cmpwi cr6,r30,4
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 4, ctx.xer);
	// bge cr6,0x832ef5a8
	if (!ctx.cr6.lt) goto loc_832EF5A8;
	// addi r11,r30,6
	ctx.r11.s64 = ctx.r30.s64 + 6;
	// li r10,0
	ctx.r10.s64 = 0;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r11,r31
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r31.u32);
	// b 0x832ef598
	goto loc_832EF598;
loc_832EF58C:
	// lwz r9,12(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
loc_832EF598:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x832ef58c
	if (!ctx.cr6.eq) goto loc_832EF58C;
	// mr r31,r10
	ctx.r31.u64 = ctx.r10.u64;
	// b 0x832ef5c8
	goto loc_832EF5C8;
loc_832EF5A8:
	// lwz r11,40(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x832ef5c4
	if (ctx.cr6.eq) goto loc_832EF5C4;
	// li r4,-3
	ctx.r4.s64 = -3;
	// lwz r3,44(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 44);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x832EF5C4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_832EF5C4:
	// li r31,0
	ctx.r31.s64 = 0;
loc_832EF5C8:
	// bl 0x832f7d58
	ctx.lr = 0x832EF5CC;
	sub_832F7D58(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_832EF5E8"))) PPC_WEAK_FUNC(sub_832EF5E8);
PPC_FUNC_IMPL(__imp__sub_832EF5E8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x833a01a8
	ctx.lr = 0x832EF5F0;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// mr r28,r6
	ctx.r28.u64 = ctx.r6.u64;
	// bl 0x832f7d18
	ctx.lr = 0x832EF608;
	sub_832F7D18(ctx, base);
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x832eef28
	ctx.lr = 0x832EF61C;
	sub_832EEF28(ctx, base);
	// bl 0x832f7d58
	ctx.lr = 0x832EF620;
	sub_832F7D58(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x833a01f8
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832EF628"))) PPC_WEAK_FUNC(sub_832EF628);
PPC_FUNC_IMPL(__imp__sub_832EF628) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x833a01ac
	ctx.lr = 0x832EF630;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// bl 0x832f7d18
	ctx.lr = 0x832EF644;
	sub_832F7D18(ctx, base);
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x832ef050
	ctx.lr = 0x832EF654;
	sub_832EF050(ctx, base);
	// bl 0x832f7d58
	ctx.lr = 0x832EF658;
	sub_832F7D58(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x833a01fc
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832EF660"))) PPC_WEAK_FUNC(sub_832EF660);
PPC_FUNC_IMPL(__imp__sub_832EF660) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x833a01ac
	ctx.lr = 0x832EF668;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// bl 0x832f7d18
	ctx.lr = 0x832EF67C;
	sub_832F7D18(ctx, base);
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x832ef180
	ctx.lr = 0x832EF68C;
	sub_832EF180(ctx, base);
	// bl 0x832f7d58
	ctx.lr = 0x832EF690;
	sub_832F7D58(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x833a01fc
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832EF698"))) PPC_WEAK_FUNC(sub_832EF698);
PPC_FUNC_IMPL(__imp__sub_832EF698) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x833a01a8
	ctx.lr = 0x832EF6A0;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// mr r29,r6
	ctx.r29.u64 = ctx.r6.u64;
	// bl 0x832f7d18
	ctx.lr = 0x832EF6B8;
	sub_832F7D18(ctx, base);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne cr6,0x832ef6d8
	if (!ctx.cr6.eq) goto loc_832EF6D8;
	// lis r11,-32210
	ctx.r11.s64 = -2110914560;
	// lis r10,-32210
	ctx.r10.s64 = -2110914560;
	// addi r4,r11,-27464
	ctx.r4.s64 = ctx.r11.s64 + -27464;
	// addi r3,r10,-26600
	ctx.r3.s64 = ctx.r10.s64 + -26600;
loc_832EF6D0:
	// bl 0x832ee598
	ctx.lr = 0x832EF6D4;
	sub_832EE598(ctx, base);
	// b 0x832ef780
	goto loc_832EF780;
loc_832EF6D8:
	// lbz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 4);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x832ef6f8
	if (!ctx.cr0.eq) goto loc_832EF6F8;
	// lis r11,-32210
	ctx.r11.s64 = -2110914560;
	// lis r10,-32210
	ctx.r10.s64 = -2110914560;
	// addi r4,r11,-27508
	ctx.r4.s64 = ctx.r11.s64 + -27508;
	// addi r3,r10,-26612
	ctx.r3.s64 = ctx.r10.s64 + -26612;
	// b 0x832ef6d0
	goto loc_832EF6D0;
loc_832EF6F8:
	// li r11,0
	ctx.r11.s64 = 0;
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// stw r11,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r11.u32);
	// blt cr6,0x832ef764
	if (ctx.cr6.lt) goto loc_832EF764;
	// cmpwi cr6,r30,4
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 4, ctx.xer);
	// bge cr6,0x832ef764
	if (!ctx.cr6.lt) goto loc_832EF764;
	// addi r11,r30,6
	ctx.r11.s64 = ctx.r30.s64 + 6;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r11,r31
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r31.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x832ef780
	if (ctx.cr6.eq) goto loc_832EF780;
	// ld r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r11.u32 + 8);
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// stw r11,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r11.u32);
	// lbz r10,5(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 5);
	// cmplwi cr6,r10,1
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 1, ctx.xer);
	// bne cr6,0x832ef754
	if (!ctx.cr6.eq) goto loc_832EF754;
	// srawi r10,r11,31
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x7FFFFFFF) != 0);
	ctx.r10.s64 = ctx.r11.s32 >> 31;
	// rlwinm r9,r28,1,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 1) & 0x1;
	// subfc r11,r28,r11
	ctx.xer.ca = ctx.r11.u32 >= ctx.r28.u32;
	ctx.r11.s64 = ctx.r11.s64 - ctx.r28.s64;
	// adde r31,r9,r10
	temp.u8 = (ctx.r9.u32 + ctx.r10.u32 < ctx.r9.u32) | (ctx.r9.u32 + ctx.r10.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r31.u64 = ctx.r9.u64 + ctx.r10.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// b 0x832ef784
	goto loc_832EF784;
loc_832EF754:
	// subf r11,r11,r28
	ctx.r11.s64 = ctx.r28.s64 - ctx.r11.s64;
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r31,r11,27,31,31
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// b 0x832ef784
	goto loc_832EF784;
loc_832EF764:
	// lwz r11,40(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x832ef780
	if (ctx.cr6.eq) goto loc_832EF780;
	// li r4,-3
	ctx.r4.s64 = -3;
	// lwz r3,44(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 44);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x832EF780;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_832EF780:
	// li r31,0
	ctx.r31.s64 = 0;
loc_832EF784:
	// bl 0x832f7d58
	ctx.lr = 0x832EF788;
	sub_832F7D58(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x833a01f8
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832EF794"))) PPC_WEAK_FUNC(sub_832EF794);
PPC_FUNC_IMPL(__imp__sub_832EF794) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832EF798"))) PPC_WEAK_FUNC(sub_832EF798);
PPC_FUNC_IMPL(__imp__sub_832EF798) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// bl 0x832f7d18
	ctx.lr = 0x832EF7B8;
	sub_832F7D18(ctx, base);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne cr6,0x832ef7dc
	if (!ctx.cr6.eq) goto loc_832EF7DC;
	// lis r11,-32210
	ctx.r11.s64 = -2110914560;
	// lis r10,-32210
	ctx.r10.s64 = -2110914560;
	// addi r4,r11,-27464
	ctx.r4.s64 = ctx.r11.s64 + -27464;
	// addi r3,r10,-26576
	ctx.r3.s64 = ctx.r10.s64 + -26576;
loc_832EF7D0:
	// bl 0x832ee598
	ctx.lr = 0x832EF7D4;
	sub_832EE598(ctx, base);
	// li r31,0
	ctx.r31.s64 = 0;
	// b 0x832ef824
	goto loc_832EF824;
loc_832EF7DC:
	// lbz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 4);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x832ef7fc
	if (!ctx.cr0.eq) goto loc_832EF7FC;
	// lis r11,-32210
	ctx.r11.s64 = -2110914560;
	// lis r10,-32210
	ctx.r10.s64 = -2110914560;
	// addi r4,r11,-27508
	ctx.r4.s64 = ctx.r11.s64 + -27508;
	// addi r3,r10,-26588
	ctx.r3.s64 = ctx.r10.s64 + -26588;
	// b 0x832ef7d0
	goto loc_832EF7D0;
loc_832EF7FC:
	// addi r11,r30,6
	ctx.r11.s64 = ctx.r30.s64 + 6;
	// li r10,0
	ctx.r10.s64 = 0;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r11,r31
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r31.u32);
	// b 0x832ef818
	goto loc_832EF818;
loc_832EF810:
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
loc_832EF818:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x832ef810
	if (!ctx.cr6.eq) goto loc_832EF810;
	// mr r31,r10
	ctx.r31.u64 = ctx.r10.u64;
loc_832EF824:
	// bl 0x832f7d58
	ctx.lr = 0x832EF828;
	sub_832F7D58(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_832EF844"))) PPC_WEAK_FUNC(sub_832EF844);
PPC_FUNC_IMPL(__imp__sub_832EF844) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832EF848"))) PPC_WEAK_FUNC(sub_832EF848);
PPC_FUNC_IMPL(__imp__sub_832EF848) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x833a01a8
	ctx.lr = 0x832EF850;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// bl 0x832f7d18
	ctx.lr = 0x832EF864;
	sub_832F7D18(ctx, base);
	// lis r11,-31814
	ctx.r11.s64 = -2084962304;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r11,r11,-20800
	ctx.r11.s64 = ctx.r11.s64 + -20800;
	// addi r9,r11,4
	ctx.r9.s64 = ctx.r11.s64 + 4;
loc_832EF874:
	// lbz r8,0(r9)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r9.u32 + 0);
	// cmplwi r8,0
	ctx.cr0.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq 0x832ef894
	if (ctx.cr0.eq) goto loc_832EF894;
	// addi r9,r9,48
	ctx.r9.s64 = ctx.r9.s64 + 48;
	// addi r8,r11,4612
	ctx.r8.s64 = ctx.r11.s64 + 4612;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpw cr6,r9,r8
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r8.s32, ctx.xer);
	// blt cr6,0x832ef874
	if (ctx.cr6.lt) goto loc_832EF874;
loc_832EF894:
	// cmpwi cr6,r10,96
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 96, ctx.xer);
	// bne cr6,0x832ef8a4
	if (!ctx.cr6.eq) goto loc_832EF8A4;
	// li r31,0
	ctx.r31.s64 = 0;
	// b 0x832ef8f8
	goto loc_832EF8F8;
loc_832EF8A4:
	// mulli r10,r10,48
	ctx.r10.s64 = ctx.r10.s64 * 48;
	// add r31,r10,r11
	ctx.r31.u64 = ctx.r10.u64 + ctx.r11.u64;
	// srawi r9,r28,4
	ctx.xer.ca = (ctx.r28.s32 < 0) & ((ctx.r28.u32 & 0xF) != 0);
	ctx.r9.s64 = ctx.r28.s32 >> 4;
	// lis r8,-31844
	ctx.r8.s64 = -2086928384;
	// stw r31,44(r31)
	PPC_STORE_U32(ctx.r31.u32 + 44, ctx.r31.u32);
	// addze r9,r9
	temp.s64 = ctx.r9.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r9.u32;
	ctx.r9.s64 = temp.s64;
	// addi r8,r8,-29904
	ctx.r8.s64 = ctx.r8.s64 + -29904;
	// lis r6,-31953
	ctx.r6.s64 = -2094071808;
	// stw r9,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r9.u32);
	// lis r7,-32210
	ctx.r7.s64 = -2110914560;
	// stwx r8,r10,r11
	PPC_STORE_U32(ctx.r10.u32 + ctx.r11.u32, ctx.r8.u32);
	// li r9,1
	ctx.r9.s64 = 1;
	// stw r29,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r29.u32);
	// addi r7,r7,-26832
	ctx.r7.s64 = ctx.r7.s64 + -26832;
	// stb r30,5(r31)
	PPC_STORE_U8(ctx.r31.u32 + 5, ctx.r30.u8);
	// addi r10,r6,-4504
	ctx.r10.s64 = ctx.r6.s64 + -4504;
	// stb r9,4(r31)
	PPC_STORE_U8(ctx.r31.u32 + 4, ctx.r9.u8);
	// stw r7,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r7.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r10,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r10.u32);
	// bl 0x832eee78
	ctx.lr = 0x832EF8F8;
	sub_832EEE78(ctx, base);
loc_832EF8F8:
	// bl 0x832f7d58
	ctx.lr = 0x832EF8FC;
	sub_832F7D58(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x833a01f8
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832EF908"))) PPC_WEAK_FUNC(sub_832EF908);
PPC_FUNC_IMPL(__imp__sub_832EF908) {
	PPC_FUNC_PROLOGUE();
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// b 0x832ffa40
	sub_832FFA40(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832EF910"))) PPC_WEAK_FUNC(sub_832EF910);
PPC_FUNC_IMPL(__imp__sub_832EF910) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// bl 0x832f6790
	ctx.lr = 0x832EF920;
	sub_832F6790(ctx, base);
	// bl 0x832ffce8
	ctx.lr = 0x832EF924;
	sub_832FFCE8(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_832EF938"))) PPC_WEAK_FUNC(sub_832EF938);
PPC_FUNC_IMPL(__imp__sub_832EF938) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// bl 0x832ffd60
	ctx.lr = 0x832EF948;
	sub_832FFD60(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_832EF95C"))) PPC_WEAK_FUNC(sub_832EF95C);
PPC_FUNC_IMPL(__imp__sub_832EF95C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832EF960"))) PPC_WEAK_FUNC(sub_832EF960);
PPC_FUNC_IMPL(__imp__sub_832EF960) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-31823
	ctx.r10.s64 = -2085552128;
	// lis r11,-32210
	ctx.r11.s64 = -2110914560;
	// addi r11,r11,-26488
	ctx.r11.s64 = ctx.r11.s64 + -26488;
	// stw r11,-31164(r10)
	PPC_STORE_U32(ctx.r10.u32 + -31164, ctx.r11.u32);
	// bl 0x832ff8d0
	ctx.lr = 0x832EF984;
	sub_832FF8D0(ctx, base);
	// lis r31,-31823
	ctx.r31.s64 = -2085552128;
	// lwz r11,-31160(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -31160);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x832efa84
	if (!ctx.cr6.eq) goto loc_832EFA84;
	// bl 0x832f8678
	ctx.lr = 0x832EF998;
	sub_832F8678(ctx, base);
	// bl 0x82c10e98
	ctx.lr = 0x832EF99C;
	sub_82C10E98(ctx, base);
	// bl 0x832ef2a0
	ctx.lr = 0x832EF9A0;
	sub_832EF2A0(ctx, base);
	// bl 0x832eddd0
	ctx.lr = 0x832EF9A4;
	sub_832EDDD0(ctx, base);
	// bl 0x832ee700
	ctx.lr = 0x832EF9A8;
	sub_832EE700(ctx, base);
	// bl 0x832ff9f8
	ctx.lr = 0x832EF9AC;
	sub_832FF9F8(ctx, base);
	// bl 0x832f41e8
	ctx.lr = 0x832EF9B0;
	sub_832F41E8(ctx, base);
	// bl 0x83300000
	ctx.lr = 0x832EF9B4;
	sub_83300000(ctx, base);
	// bl 0x832ffe50
	ctx.lr = 0x832EF9B8;
	sub_832FFE50(ctx, base);
	// bl 0x832ff060
	ctx.lr = 0x832EF9BC;
	sub_832FF060(ctx, base);
	// bl 0x832efbb0
	ctx.lr = 0x832EF9C0;
	sub_832EFBB0(ctx, base);
	// bl 0x832f53f8
	ctx.lr = 0x832EF9C4;
	sub_832F53F8(ctx, base);
	// lis r11,-31953
	ctx.r11.s64 = -2094071808;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r11,-1784
	ctx.r3.s64 = ctx.r11.s64 + -1784;
	// bl 0x82c10e98
	ctx.lr = 0x832EF9D4;
	sub_82C10E98(ctx, base);
	// lis r11,-31953
	ctx.r11.s64 = -2094071808;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r11,-1784
	ctx.r3.s64 = ctx.r11.s64 + -1784;
	// bl 0x832efcd0
	ctx.lr = 0x832EF9E4;
	sub_832EFCD0(ctx, base);
	// lis r11,-31814
	ctx.r11.s64 = -2084962304;
	// li r5,6272
	ctx.r5.s64 = 6272;
	// addi r3,r11,-27072
	ctx.r3.s64 = ctx.r11.s64 + -27072;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x833a2b30
	ctx.lr = 0x832EF9F8;
	sub_833A2B30(ctx, base);
	// lis r11,-32210
	ctx.r11.s64 = -2110914560;
	// lis r10,-31953
	ctx.r10.s64 = -2094071808;
	// addi r7,r11,-26368
	ctx.r7.s64 = ctx.r11.s64 + -26368;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r10,-1776
	ctx.r5.s64 = ctx.r10.s64 + -1776;
	// li r4,1
	ctx.r4.s64 = 1;
	// li r3,2
	ctx.r3.s64 = 2;
	// bl 0x832f59f0
	ctx.lr = 0x832EFA18;
	sub_832F59F0(ctx, base);
	// lis r11,-32210
	ctx.r11.s64 = -2110914560;
	// lis r10,-31953
	ctx.r10.s64 = -2094071808;
	// addi r6,r11,-26384
	ctx.r6.s64 = ctx.r11.s64 + -26384;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r10,-1736
	ctx.r4.s64 = ctx.r10.s64 + -1736;
	// li r3,4
	ctx.r3.s64 = 4;
	// bl 0x832f5858
	ctx.lr = 0x832EFA34;
	sub_832F5858(ctx, base);
	// lis r11,-31823
	ctx.r11.s64 = -2085552128;
	// lis r10,-32210
	ctx.r10.s64 = -2110914560;
	// lis r9,-32041
	ctx.r9.s64 = -2099838976;
	// addi r6,r10,-26404
	ctx.r6.s64 = ctx.r10.s64 + -26404;
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r3,-31144(r11)
	PPC_STORE_U32(ctx.r11.u32 + -31144, ctx.r3.u32);
	// addi r4,r9,-9592
	ctx.r4.s64 = ctx.r9.s64 + -9592;
	// li r3,5
	ctx.r3.s64 = 5;
	// bl 0x832f5858
	ctx.lr = 0x832EFA58;
	sub_832F5858(ctx, base);
	// lis r10,-31823
	ctx.r10.s64 = -2085552128;
	// lis r9,-31823
	ctx.r9.s64 = -2085552128;
	// lis r8,-31823
	ctx.r8.s64 = -2085552128;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,-31140(r10)
	PPC_STORE_U32(ctx.r10.u32 + -31140, ctx.r11.u32);
	// stw r3,-31152(r9)
	PPC_STORE_U32(ctx.r9.u32 + -31152, ctx.r3.u32);
	// li r3,60
	ctx.r3.s64 = 60;
	// stw r11,-31148(r8)
	PPC_STORE_U32(ctx.r8.u32 + -31148, ctx.r11.u32);
	// bl 0x832f6710
	ctx.lr = 0x832EFA7C;
	sub_832F6710(ctx, base);
	// bl 0x82c10e98
	ctx.lr = 0x832EFA80;
	sub_82C10E98(ctx, base);
	// lwz r11,-31160(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -31160);
loc_832EFA84:
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,-31160(r31)
	PPC_STORE_U32(ctx.r31.u32 + -31160, ctx.r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_832EFAA0"))) PPC_WEAK_FUNC(sub_832EFAA0);
PPC_FUNC_IMPL(__imp__sub_832EFAA0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x833a01ac
	ctx.lr = 0x832EFAA8;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-31823
	ctx.r10.s64 = -2085552128;
	// lwz r11,-31160(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -31160);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bgt cr6,0x832efacc
	if (ctx.cr6.gt) goto loc_832EFACC;
	// lis r11,-32210
	ctx.r11.s64 = -2110914560;
	// addi r3,r11,-26304
	ctx.r3.s64 = ctx.r11.s64 + -26304;
	// bl 0x832f5288
	ctx.lr = 0x832EFAC8;
	sub_832F5288(ctx, base);
	// b 0x832efb90
	goto loc_832EFB90;
loc_832EFACC:
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,-31160(r10)
	PPC_STORE_U32(ctx.r10.u32 + -31160, ctx.r11.u32);
	// bne 0x832efb90
	if (!ctx.cr0.eq) goto loc_832EFB90;
	// bl 0x832f6e00
	ctx.lr = 0x832EFADC;
	sub_832F6E00(ctx, base);
	// bl 0x832ff828
	ctx.lr = 0x832EFAE0;
	sub_832FF828(ctx, base);
	// bl 0x832fff38
	ctx.lr = 0x832EFAE4;
	sub_832FFF38(ctx, base);
	// bl 0x832f4238
	ctx.lr = 0x832EFAE8;
	sub_832F4238(ctx, base);
	// bl 0x832efc38
	ctx.lr = 0x832EFAEC;
	sub_832EFC38(ctx, base);
	// bl 0x82c10e98
	ctx.lr = 0x832EFAF0;
	sub_82C10E98(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// li r3,2
	ctx.r3.s64 = 2;
	// bl 0x832f5930
	ctx.lr = 0x832EFAFC;
	sub_832F5930(ctx, base);
	// lis r11,-31823
	ctx.r11.s64 = -2085552128;
	// li r3,4
	ctx.r3.s64 = 4;
	// lwz r4,-31144(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + -31144);
	// bl 0x832f5930
	ctx.lr = 0x832EFB0C;
	sub_832F5930(ctx, base);
	// lis r11,-31823
	ctx.r11.s64 = -2085552128;
	// li r3,5
	ctx.r3.s64 = 5;
	// lwz r4,-31152(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + -31152);
	// bl 0x832f5930
	ctx.lr = 0x832EFB1C;
	sub_832F5930(ctx, base);
	// bl 0x832f5488
	ctx.lr = 0x832EFB20;
	sub_832F5488(ctx, base);
	// bl 0x83300058
	ctx.lr = 0x832EFB24;
	sub_83300058(ctx, base);
	// bl 0x832ff9f8
	ctx.lr = 0x832EFB28;
	sub_832FF9F8(ctx, base);
	// bl 0x832ee768
	ctx.lr = 0x832EFB2C;
	sub_832EE768(ctx, base);
	// bl 0x832ede48
	ctx.lr = 0x832EFB30;
	sub_832EDE48(ctx, base);
	// bl 0x832ef308
	ctx.lr = 0x832EFB34;
	sub_832EF308(ctx, base);
	// bl 0x82c10e98
	ctx.lr = 0x832EFB38;
	sub_82C10E98(ctx, base);
	// li r31,1024
	ctx.r31.s64 = 1024;
loc_832EFB3C:
	// bl 0x832f8758
	ctx.lr = 0x832EFB40;
	sub_832F8758(ctx, base);
	// bl 0x832f8798
	ctx.lr = 0x832EFB44;
	sub_832F8798(ctx, base);
	// addic. r31,r31,-1
	ctx.xer.ca = ctx.r31.u32 > 0;
	ctx.r31.s64 = ctx.r31.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// bne 0x832efb3c
	if (!ctx.cr0.eq) goto loc_832EFB3C;
	// bl 0x832f86f0
	ctx.lr = 0x832EFB50;
	sub_832F86F0(ctx, base);
	// lis r11,-31814
	ctx.r11.s64 = -2084962304;
	// addi r30,r11,-27072
	ctx.r30.s64 = ctx.r11.s64 + -27072;
	// lis r11,-32210
	ctx.r11.s64 = -2110914560;
	// mr r31,r30
	ctx.r31.u64 = ctx.r30.u64;
	// addi r29,r11,-26352
	ctx.r29.s64 = ctx.r11.s64 + -26352;
loc_832EFB64:
	// lbz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 0);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x832efb80
	if (ctx.cr0.eq) goto loc_832EFB80;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x832f5288
	ctx.lr = 0x832EFB78;
	sub_832F5288(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x832f6dc8
	ctx.lr = 0x832EFB80;
	sub_832F6DC8(ctx, base);
loc_832EFB80:
	// addi r31,r31,196
	ctx.r31.s64 = ctx.r31.s64 + 196;
	// addi r11,r30,6272
	ctx.r11.s64 = ctx.r30.s64 + 6272;
	// cmpw cr6,r31,r11
	ctx.cr6.compare<int32_t>(ctx.r31.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x832efb64
	if (ctx.cr6.lt) goto loc_832EFB64;
loc_832EFB90:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x833a01fc
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832EFB98"))) PPC_WEAK_FUNC(sub_832EFB98);
PPC_FUNC_IMPL(__imp__sub_832EFB98) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-31823
	ctx.r11.s64 = -2085552128;
	// lwz r11,-31160(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -31160);
	// addic r10,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// subfe r3,r10,r11
	temp.u8 = (~ctx.r10.u32 + ctx.r11.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r3.u64 = ~ctx.r10.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_832EFBAC"))) PPC_WEAK_FUNC(sub_832EFBAC);
PPC_FUNC_IMPL(__imp__sub_832EFBAC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832EFBB0"))) PPC_WEAK_FUNC(sub_832EFBB0);
PPC_FUNC_IMPL(__imp__sub_832EFBB0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-31823
	ctx.r10.s64 = -2085552128;
	// lis r11,-32210
	ctx.r11.s64 = -2110914560;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r11,r11,-26152
	ctx.r11.s64 = ctx.r11.s64 + -26152;
	// stw r11,-31136(r10)
	PPC_STORE_U32(ctx.r10.u32 + -31136, ctx.r11.u32);
	// bl 0x82c10e98
	ctx.lr = 0x832EFBD8;
	sub_82C10E98(ctx, base);
	// lis r31,-31823
	ctx.r31.s64 = -2085552128;
	// lwz r11,-31132(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -31132);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x832efc14
	if (!ctx.cr6.eq) goto loc_832EFC14;
	// bl 0x832f8678
	ctx.lr = 0x832EFBEC;
	sub_832F8678(ctx, base);
	// lis r11,-31815
	ctx.r11.s64 = -2085027840;
	// lis r5,0
	ctx.r5.s64 = 0;
	// addi r3,r11,2112
	ctx.r3.s64 = ctx.r11.s64 + 2112;
	// ori r5,r5,36352
	ctx.r5.u64 = ctx.r5.u64 | 36352;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x833a2b30
	ctx.lr = 0x832EFC04;
	sub_833A2B30(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x832efcd0
	ctx.lr = 0x832EFC10;
	sub_832EFCD0(ctx, base);
	// lwz r11,-31132(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -31132);
loc_832EFC14:
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r11,-31132(r31)
	PPC_STORE_U32(ctx.r31.u32 + -31132, ctx.r11.u32);
	// bl 0x82c10e98
	ctx.lr = 0x832EFC24;
	sub_82C10E98(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_832EFC38"))) PPC_WEAK_FUNC(sub_832EFC38);
PPC_FUNC_IMPL(__imp__sub_832EFC38) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-31823
	ctx.r10.s64 = -2085552128;
	// lwz r11,-31132(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -31132);
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,-31132(r10)
	PPC_STORE_U32(ctx.r10.u32 + -31132, ctx.r11.u32);
	// bne 0x832efcb8
	if (!ctx.cr0.eq) goto loc_832EFCB8;
	// lis r11,-31815
	ctx.r11.s64 = -2085027840;
	// addi r30,r11,2112
	ctx.r30.s64 = ctx.r11.s64 + 2112;
	// mr r31,r30
	ctx.r31.u64 = ctx.r30.u64;
loc_832EFC6C:
	// lbz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 0);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// bne cr6,0x832efc80
	if (!ctx.cr6.eq) goto loc_832EFC80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x832f04c8
	ctx.lr = 0x832EFC80;
	sub_832F04C8(ctx, base);
loc_832EFC80:
	// addis r11,r30,1
	ctx.r11.s64 = ctx.r30.s64 + 65536;
	// addi r31,r31,568
	ctx.r31.s64 = ctx.r31.s64 + 568;
	// addi r11,r11,-29184
	ctx.r11.s64 = ctx.r11.s64 + -29184;
	// cmpw cr6,r31,r11
	ctx.cr6.compare<int32_t>(ctx.r31.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x832efc6c
	if (ctx.cr6.lt) goto loc_832EFC6C;
	// lis r5,0
	ctx.r5.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// ori r5,r5,36352
	ctx.r5.u64 = ctx.r5.u64 | 36352;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x833a2b30
	ctx.lr = 0x832EFCA8;
	sub_833A2B30(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x832efcd0
	ctx.lr = 0x832EFCB4;
	sub_832EFCD0(ctx, base);
	// bl 0x832f86f0
	ctx.lr = 0x832EFCB8;
	sub_832F86F0(ctx, base);
loc_832EFCB8:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_832EFCD0"))) PPC_WEAK_FUNC(sub_832EFCD0);
PPC_FUNC_IMPL(__imp__sub_832EFCD0) {
	PPC_FUNC_PROLOGUE();
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x832efcf4
	if (!ctx.cr6.eq) goto loc_832EFCF4;
	// lis r9,-31823
	ctx.r9.s64 = -2085552128;
	// lis r8,-31823
	ctx.r8.s64 = -2085552128;
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,-31128(r9)
	PPC_STORE_U32(ctx.r9.u32 + -31128, ctx.r11.u32);
	// stw r10,-31124(r8)
	PPC_STORE_U32(ctx.r8.u32 + -31124, ctx.r10.u32);
	// blr 
	return;
loc_832EFCF4:
	// lis r11,-31823
	ctx.r11.s64 = -2085552128;
	// lis r10,-31823
	ctx.r10.s64 = -2085552128;
	// stw r3,-31128(r11)
	PPC_STORE_U32(ctx.r11.u32 + -31128, ctx.r3.u32);
	// stw r4,-31124(r10)
	PPC_STORE_U32(ctx.r10.u32 + -31124, ctx.r4.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_832EFD08"))) PPC_WEAK_FUNC(sub_832EFD08);
PPC_FUNC_IMPL(__imp__sub_832EFD08) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// std r4,24(r1)
	PPC_STORE_U64(ctx.r1.u32 + 24, ctx.r4.u64);
	// std r5,32(r1)
	PPC_STORE_U64(ctx.r1.u32 + 32, ctx.r5.u64);
	// std r6,40(r1)
	PPC_STORE_U64(ctx.r1.u32 + 40, ctx.r6.u64);
	// std r7,48(r1)
	PPC_STORE_U64(ctx.r1.u32 + 48, ctx.r7.u64);
	// std r8,56(r1)
	PPC_STORE_U64(ctx.r1.u32 + 56, ctx.r8.u64);
	// std r9,64(r1)
	PPC_STORE_U64(ctx.r1.u32 + 64, ctx.r9.u64);
	// std r10,72(r1)
	PPC_STORE_U64(ctx.r1.u32 + 72, ctx.r10.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// stw r3,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r3.u32);
	// lis r11,-31815
	ctx.r11.s64 = -2085027840;
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// addi r31,r11,1856
	ctx.r31.s64 = ctx.r11.s64 + 1856;
	// addi r11,r1,136
	ctx.r11.s64 = ctx.r1.s64 + 136;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r4,256
	ctx.r4.s64 = 256;
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r11.u32);
	// lwz r6,80(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x832ff9f0
	ctx.lr = 0x832EFD60;
	sub_832FF9F0(ctx, base);
	// lis r11,-31823
	ctx.r11.s64 = -2085552128;
	// lwz r10,-31128(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + -31128);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x832efd88
	if (ctx.cr6.eq) goto loc_832EFD88;
	// lwz r11,-31128(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -31128);
	// lis r10,-31823
	ctx.r10.s64 = -2085552128;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r3,-31124(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + -31124);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x832EFD88;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_832EFD88:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_832EFD9C"))) PPC_WEAK_FUNC(sub_832EFD9C);
PPC_FUNC_IMPL(__imp__sub_832EFD9C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832EFDA0"))) PPC_WEAK_FUNC(sub_832EFDA0);
PPC_FUNC_IMPL(__imp__sub_832EFDA0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x833a01a8
	ctx.lr = 0x832EFDA8;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x832efdcc
	if (!ctx.cr6.eq) goto loc_832EFDCC;
	// lis r11,-32210
	ctx.r11.s64 = -2110914560;
	// addi r3,r11,-26024
	ctx.r3.s64 = ctx.r11.s64 + -26024;
	// bl 0x832efd08
	ctx.lr = 0x832EFDC4;
	sub_832EFD08(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x832efebc
	goto loc_832EFEBC;
loc_832EFDCC:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82c10e98
	ctx.lr = 0x832EFDD4;
	sub_82C10E98(ctx, base);
	// lis r11,-31815
	ctx.r11.s64 = -2085027840;
	// li r29,0
	ctx.r29.s64 = 0;
	// addi r10,r11,2112
	ctx.r10.s64 = ctx.r11.s64 + 2112;
	// mr r31,r29
	ctx.r31.u64 = ctx.r29.u64;
	// mr r9,r29
	ctx.r9.u64 = ctx.r29.u64;
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
loc_832EFDEC:
	// lbz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// cmplwi r8,0
	ctx.cr0.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq 0x832efe14
	if (ctx.cr0.eq) goto loc_832EFE14;
	// addis r8,r10,1
	ctx.r8.s64 = ctx.r10.s64 + 65536;
	// addi r11,r11,568
	ctx.r11.s64 = ctx.r11.s64 + 568;
	// addi r8,r8,-29184
	ctx.r8.s64 = ctx.r8.s64 + -29184;
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// cmpw cr6,r11,r8
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r8.s32, ctx.xer);
	// blt cr6,0x832efdec
	if (ctx.cr6.lt) goto loc_832EFDEC;
	// b 0x832efe20
	goto loc_832EFE20;
loc_832EFE14:
	// mulli r11,r9,568
	ctx.r11.s64 = ctx.r9.s64 * 568;
	// add. r31,r11,r10
	ctx.r31.u64 = ctx.r11.u64 + ctx.r10.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// bne 0x832efe30
	if (!ctx.cr0.eq) goto loc_832EFE30;
loc_832EFE20:
	// lis r11,-32210
	ctx.r11.s64 = -2110914560;
	// addi r3,r11,-26072
	ctx.r3.s64 = ctx.r11.s64 + -26072;
	// bl 0x832efd08
	ctx.lr = 0x832EFE2C;
	sub_832EFD08(ctx, base);
	// b 0x832efeb0
	goto loc_832EFEB0;
loc_832EFE30:
	// li r5,568
	ctx.r5.s64 = 568;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x833a2b30
	ctx.lr = 0x832EFE40;
	sub_833A2B30(ctx, base);
	// stw r30,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r30.u32);
	// stb r29,1(r31)
	PPC_STORE_U8(ctx.r31.u32 + 1, ctx.r29.u8);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r11,36(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x832EFE60;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r11,36(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x832EFE7C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// add r11,r28,r3
	ctx.r11.u64 = ctx.r28.u64 + ctx.r3.u64;
	// li r10,10
	ctx.r10.s64 = 10;
	// rlwinm r9,r11,3,0,28
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// stw r11,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r11.u32);
	// li r11,16
	ctx.r11.s64 = 16;
	// divw r9,r9,r10
	ctx.r9.s32 = ctx.r9.s32 / ctx.r10.s32;
	// addi r10,r31,48
	ctx.r10.s64 = ctx.r31.s64 + 48;
	// stw r9,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r9.u32);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
loc_832EFEA0:
	// stwu r29,32(r10)
	ea = 32 + ctx.r10.u32;
	PPC_STORE_U32(ea, ctx.r29.u32);
	ctx.r10.u32 = ea;
	// bdnz 0x832efea0
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_832EFEA0;
	// li r11,1
	ctx.r11.s64 = 1;
	// stb r11,0(r31)
	PPC_STORE_U8(ctx.r31.u32 + 0, ctx.r11.u8);
loc_832EFEB0:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82c10e98
	ctx.lr = 0x832EFEB8;
	sub_82C10E98(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_832EFEBC:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x833a01f8
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832EFEC4"))) PPC_WEAK_FUNC(sub_832EFEC4);
PPC_FUNC_IMPL(__imp__sub_832EFEC4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832EFEC8"))) PPC_WEAK_FUNC(sub_832EFEC8);
PPC_FUNC_IMPL(__imp__sub_832EFEC8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x832efefc
	if (!ctx.cr6.eq) goto loc_832EFEFC;
	// lis r11,-32210
	ctx.r11.s64 = -2110914560;
	// addi r3,r11,-25932
	ctx.r3.s64 = ctx.r11.s64 + -25932;
	// bl 0x832efd08
	ctx.lr = 0x832EFEF4;
	sub_832EFD08(ctx, base);
loc_832EFEF4:
	// li r3,-1
	ctx.r3.s64 = -1;
	// b 0x832f000c
	goto loc_832F000C;
loc_832EFEFC:
	// lwz r11,36(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 36);
	// cmpwi cr6,r11,16
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 16, ctx.xer);
	// bge cr6,0x832efef4
	if (!ctx.cr6.lt) goto loc_832EFEF4;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// bne cr6,0x832eff20
	if (!ctx.cr6.eq) goto loc_832EFF20;
	// lis r11,-32210
	ctx.r11.s64 = -2110914560;
	// addi r3,r11,-25976
	ctx.r3.s64 = ctx.r11.s64 + -25976;
	// bl 0x832efd08
	ctx.lr = 0x832EFF1C;
	sub_832EFD08(ctx, base);
	// b 0x832efef4
	goto loc_832EFEF4;
loc_832EFF20:
	// lwz r11,28(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 28);
	// lis r9,32767
	ctx.r9.s64 = 2147418112;
	// li r30,0
	ctx.r30.s64 = 0;
	// addi r8,r11,15
	ctx.r8.s64 = ctx.r11.s64 + 15;
	// ori r3,r9,65535
	ctx.r3.u64 = ctx.r9.u64 | 65535;
	// srawi r9,r8,4
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0xF) != 0);
	ctx.r9.s64 = ctx.r8.s32 >> 4;
	// addze r9,r9
	temp.s64 = ctx.r9.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r9.u32;
	ctx.r9.s64 = temp.s64;
	// rlwinm r9,r9,4,0,27
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 4) & 0xFFFFFFF0;
	// subf r9,r9,r8
	ctx.r9.s64 = ctx.r8.s64 - ctx.r9.s64;
	// rlwinm r9,r9,5,0,26
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 5) & 0xFFFFFFE0;
	// add r9,r9,r10
	ctx.r9.u64 = ctx.r9.u64 + ctx.r10.u64;
	// lwz r9,56(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + 56);
	// cmpw cr6,r9,r3
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r3.s32, ctx.xer);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// beq cr6,0x832eff60
	if (ctx.cr6.eq) goto loc_832EFF60;
	// addi r3,r9,1
	ctx.r3.s64 = ctx.r9.s64 + 1;
loc_832EFF60:
	// rlwinm r11,r11,5,0,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 5) & 0xFFFFFFE0;
	// mr r9,r4
	ctx.r9.u64 = ctx.r4.u64;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// addi r11,r11,56
	ctx.r11.s64 = ctx.r11.s64 + 56;
	// stw r3,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r3.u32);
	// stw r4,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r4.u32);
loc_832EFF78:
	// lbz r8,0(r9)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r9.u32 + 0);
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// bne cr6,0x832eff78
	if (!ctx.cr6.eq) goto loc_832EFF78;
	// subf r9,r4,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r4.s64;
	// stw r30,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r30.u32);
	// addi r8,r9,-1
	ctx.r8.s64 = ctx.r9.s64 + -1;
	// mr r9,r30
	ctx.r9.u64 = ctx.r30.u64;
	// rotlwi. r8,r8,0
	ctx.r8.u64 = __builtin_rotateleft32(ctx.r8.u32, 0);
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq 0x832effbc
	if (ctx.cr0.eq) goto loc_832EFFBC;
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
loc_832EFFA4:
	// lbzx r8,r9,r4
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r9.u32 + ctx.r4.u32);
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// lwz r31,8(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// add r8,r8,r31
	ctx.r8.u64 = ctx.r8.u64 + ctx.r31.u64;
	// stw r8,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r8.u32);
	// bdnz 0x832effa4
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_832EFFA4;
loc_832EFFBC:
	// stw r7,20(r11)
	PPC_STORE_U32(ctx.r11.u32 + 20, ctx.r7.u32);
	// stw r6,16(r11)
	PPC_STORE_U32(ctx.r11.u32 + 16, ctx.r6.u32);
	// stw r5,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r5.u32);
	// stw r30,24(r11)
	PPC_STORE_U32(ctx.r11.u32 + 24, ctx.r30.u32);
	// stw r30,28(r11)
	PPC_STORE_U32(ctx.r11.u32 + 28, ctx.r30.u32);
	// lwz r11,36(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 36);
	// lbz r8,1(r10)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + 1);
	// lwz r9,28(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 28);
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// srawi r7,r9,4
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0xF) != 0);
	ctx.r7.s64 = ctx.r9.s32 >> 4;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addze r7,r7
	temp.s64 = ctx.r7.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r7.u32;
	ctx.r7.s64 = temp.s64;
	// stw r11,36(r10)
	PPC_STORE_U32(ctx.r10.u32 + 36, ctx.r11.u32);
	// cmplwi cr6,r8,1
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 1, ctx.xer);
	// rlwinm r11,r7,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 4) & 0xFFFFFFF0;
	// subf r11,r11,r9
	ctx.r11.s64 = ctx.r9.s64 - ctx.r11.s64;
	// stw r11,28(r10)
	PPC_STORE_U32(ctx.r10.u32 + 28, ctx.r11.u32);
	// bne cr6,0x832f000c
	if (!ctx.cr6.eq) goto loc_832F000C;
	// li r11,2
	ctx.r11.s64 = 2;
	// stb r11,1(r10)
	PPC_STORE_U8(ctx.r10.u32 + 1, ctx.r11.u8);
loc_832F000C:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_832F0024"))) PPC_WEAK_FUNC(sub_832F0024);
PPC_FUNC_IMPL(__imp__sub_832F0024) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832F0028"))) PPC_WEAK_FUNC(sub_832F0028);
PPC_FUNC_IMPL(__imp__sub_832F0028) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31823
	ctx.r11.s64 = -2085552128;
	// lwz r10,-31120(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + -31120);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lwz r11,-31120(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -31120);
	// lis r10,-31823
	ctx.r10.s64 = -2085552128;
	// lis r9,-31823
	ctx.r9.s64 = -2085552128;
	// lwz r4,-31112(r10)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + -31112);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// lwz r3,-31116(r9)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r9.u32 + -31116);
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_832F0054"))) PPC_WEAK_FUNC(sub_832F0054);
PPC_FUNC_IMPL(__imp__sub_832F0054) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_832F0058"))) PPC_WEAK_FUNC(sub_832F0058);
PPC_FUNC_IMPL(__imp__sub_832F0058) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x833011a8
	ctx.lr = 0x832F0070;
	sub_833011A8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x832efda0
	ctx.lr = 0x832F0078;
	sub_832EFDA0(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x833026b8
	ctx.lr = 0x832F0080;
	sub_833026B8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_832F0098"))) PPC_WEAK_FUNC(sub_832F0098);
PPC_FUNC_IMPL(__imp__sub_832F0098) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// bl 0x833011a8
	ctx.lr = 0x832F00B8;
	sub_833011A8(ctx, base);
	// stw r30,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r30.u32);
	// bl 0x833026b8
	ctx.lr = 0x832F00C0;
	sub_833026B8(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_832F00D8"))) PPC_WEAK_FUNC(sub_832F00D8);
PPC_FUNC_IMPL(__imp__sub_832F00D8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x833a01a4
	ctx.lr = 0x832F00E0;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// mr r28,r6
	ctx.r28.u64 = ctx.r6.u64;
	// mr r27,r7
	ctx.r27.u64 = ctx.r7.u64;
	// bl 0x833011a8
	ctx.lr = 0x832F00FC;
	sub_833011A8(ctx, base);
	// mr r7,r27
	ctx.r7.u64 = ctx.r27.u64;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x832efec8
	ctx.lr = 0x832F0114;
	sub_832EFEC8(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x833026b8
	ctx.lr = 0x832F011C;
	sub_833026B8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x833a01f4
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832F0128"))) PPC_WEAK_FUNC(sub_832F0128);
PPC_FUNC_IMPL(__imp__sub_832F0128) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x833011a8
	ctx.lr = 0x832F0140;
	sub_833011A8(ctx, base);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne cr6,0x832f0158
	if (!ctx.cr6.eq) goto loc_832F0158;
	// lis r11,-32210
	ctx.r11.s64 = -2110914560;
	// addi r3,r11,-25888
	ctx.r3.s64 = ctx.r11.s64 + -25888;
	// bl 0x832efd08
	ctx.lr = 0x832F0154;
	sub_832EFD08(ctx, base);
	// b 0x832f0170
	goto loc_832F0170;
loc_832F0158:
	// lbz r11,1(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 1);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x832f0170
	if (!ctx.cr0.eq) goto loc_832F0170;
	// stw r11,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r11.u32);
	// stw r11,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r11.u32);
	// stw r11,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r11.u32);
loc_832F0170:
	// bl 0x833026b8
	ctx.lr = 0x832F0174;
	sub_833026B8(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_832F0188"))) PPC_WEAK_FUNC(sub_832F0188);
PPC_FUNC_IMPL(__imp__sub_832F0188) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// bl 0x833011a8
	ctx.lr = 0x832F01A8;
	sub_833011A8(ctx, base);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne cr6,0x832f01c0
	if (!ctx.cr6.eq) goto loc_832F01C0;
	// lis r11,-32210
	ctx.r11.s64 = -2110914560;
	// addi r3,r11,-25844
	ctx.r3.s64 = ctx.r11.s64 + -25844;
	// bl 0x832efd08
	ctx.lr = 0x832F01BC;
	sub_832EFD08(ctx, base);
	// b 0x832f01d4
	goto loc_832F01D4;
loc_832F01C0:
	// cmpwi cr6,r30,1
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 1, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// beq cr6,0x832f01d0
	if (ctx.cr6.eq) goto loc_832F01D0;
	// li r11,0
	ctx.r11.s64 = 0;
loc_832F01D0:
	// stb r11,4(r31)
	PPC_STORE_U8(ctx.r31.u32 + 4, ctx.r11.u8);
loc_832F01D4:
	// bl 0x833026b8
	ctx.lr = 0x832F01D8;
	sub_833026B8(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_832F01F0"))) PPC_WEAK_FUNC(sub_832F01F0);
PPC_FUNC_IMPL(__imp__sub_832F01F0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// bl 0x833011a8
	ctx.lr = 0x832F0208;
	sub_833011A8(ctx, base);
	// lis r11,-31815
	ctx.r11.s64 = -2085027840;
	// addi r30,r11,2112
	ctx.r30.s64 = ctx.r11.s64 + 2112;
	// mr r31,r30
	ctx.r31.u64 = ctx.r30.u64;
loc_832F0214:
	// lbz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 0);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// bne cr6,0x832f0228
	if (!ctx.cr6.eq) goto loc_832F0228;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83301418
	ctx.lr = 0x832F0228;
	sub_83301418(ctx, base);
loc_832F0228:
	// addis r11,r30,1
	ctx.r11.s64 = ctx.r30.s64 + 65536;
	// addi r31,r31,568
	ctx.r31.s64 = ctx.r31.s64 + 568;
	// addi r11,r11,-29184
	ctx.r11.s64 = ctx.r11.s64 + -29184;
	// cmpw cr6,r31,r11
	ctx.cr6.compare<int32_t>(ctx.r31.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x832f0214
	if (ctx.cr6.lt) goto loc_832F0214;
	// bl 0x833026b8
	ctx.lr = 0x832F0240;
	sub_833026B8(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_832F0258"))) PPC_WEAK_FUNC(sub_832F0258);
PPC_FUNC_IMPL(__imp__sub_832F0258) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x833011a8
	ctx.lr = 0x832F0270;
	sub_833011A8(ctx, base);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne cr6,0x832f028c
	if (!ctx.cr6.eq) goto loc_832F028C;
	// lis r11,-32210
	ctx.r11.s64 = -2110914560;
	// addi r3,r11,-25800
	ctx.r3.s64 = ctx.r11.s64 + -25800;
	// bl 0x832efd08
	ctx.lr = 0x832F0284;
	sub_832EFD08(ctx, base);
	// li r31,-1
	ctx.r31.s64 = -1;
	// b 0x832f0294
	goto loc_832F0294;
loc_832F028C:
	// lbz r11,1(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 1);
	// extsb r31,r11
	ctx.r31.s64 = ctx.r11.s8;
loc_832F0294:
	// bl 0x833026b8
	ctx.lr = 0x832F0298;
	sub_833026B8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_832F02B0"))) PPC_WEAK_FUNC(sub_832F02B0);
PPC_FUNC_IMPL(__imp__sub_832F02B0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x833011a8
	ctx.lr = 0x832F02C8;
	sub_833011A8(ctx, base);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne cr6,0x832f02e4
	if (!ctx.cr6.eq) goto loc_832F02E4;
	// lis r11,-32210
	ctx.r11.s64 = -2110914560;
	// addi r3,r11,-25756
	ctx.r3.s64 = ctx.r11.s64 + -25756;
	// bl 0x832efd08
	ctx.lr = 0x832F02DC;
	sub_832EFD08(ctx, base);
	// li r31,-1
	ctx.r31.s64 = -1;
	// b 0x832f02e8
	goto loc_832F02E8;
loc_832F02E4:
	// lwz r31,36(r31)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
loc_832F02E8:
	// bl 0x833026b8
	ctx.lr = 0x832F02EC;
	sub_833026B8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_832F0304"))) PPC_WEAK_FUNC(sub_832F0304);
PPC_FUNC_IMPL(__imp__sub_832F0304) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832F0308"))) PPC_WEAK_FUNC(sub_832F0308);
PPC_FUNC_IMPL(__imp__sub_832F0308) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// bl 0x833011a8
	ctx.lr = 0x832F0328;
	sub_833011A8(ctx, base);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// bne cr6,0x832f0340
	if (!ctx.cr6.eq) goto loc_832F0340;
	// lis r11,-32210
	ctx.r11.s64 = -2110914560;
	// addi r3,r11,-25668
	ctx.r3.s64 = ctx.r11.s64 + -25668;
	// bl 0x832efd08
	ctx.lr = 0x832F033C;
	sub_832EFD08(ctx, base);
	// b 0x832f036c
	goto loc_832F036C;
loc_832F0340:
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// blt cr6,0x832f035c
	if (ctx.cr6.lt) goto loc_832F035C;
	// lwz r11,24(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 24);
	// cmpw cr6,r31,r11
	ctx.cr6.compare<int32_t>(ctx.r31.s32, ctx.r11.s32, ctx.xer);
	// bgt cr6,0x832f035c
	if (ctx.cr6.gt) goto loc_832F035C;
	// stw r31,20(r30)
	PPC_STORE_U32(ctx.r30.u32 + 20, ctx.r31.u32);
	// b 0x832f036c
	goto loc_832F036C;
loc_832F035C:
	// lis r11,-32210
	ctx.r11.s64 = -2110914560;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r11,-25712
	ctx.r3.s64 = ctx.r11.s64 + -25712;
	// bl 0x832efd08
	ctx.lr = 0x832F036C;
	sub_832EFD08(ctx, base);
loc_832F036C:
	// bl 0x833026b8
	ctx.lr = 0x832F0370;
	sub_833026B8(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_832F0388"))) PPC_WEAK_FUNC(sub_832F0388);
PPC_FUNC_IMPL(__imp__sub_832F0388) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// bl 0x833011a8
	ctx.lr = 0x832F03A8;
	sub_833011A8(ctx, base);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne cr6,0x832f03c0
	if (!ctx.cr6.eq) goto loc_832F03C0;
	// lis r11,-32210
	ctx.r11.s64 = -2110914560;
	// addi r3,r11,-25624
	ctx.r3.s64 = ctx.r11.s64 + -25624;
	// bl 0x832efd08
	ctx.lr = 0x832F03BC;
	sub_832EFD08(ctx, base);
	// b 0x832f03c4
	goto loc_832F03C4;
loc_832F03C0:
	// stb r30,3(r31)
	PPC_STORE_U8(ctx.r31.u32 + 3, ctx.r30.u8);
loc_832F03C4:
	// bl 0x833026b8
	ctx.lr = 0x832F03C8;
	sub_833026B8(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_832F03E0"))) PPC_WEAK_FUNC(sub_832F03E0);
PPC_FUNC_IMPL(__imp__sub_832F03E0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// bl 0x833011a8
	ctx.lr = 0x832F0400;
	sub_833011A8(ctx, base);
	// lis r7,32767
	ctx.r7.s64 = 2147418112;
	// li r6,0
	ctx.r6.s64 = 0;
	// ori r7,r7,65535
	ctx.r7.u64 = ctx.r7.u64 | 65535;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x832efec8
	ctx.lr = 0x832F041C;
	sub_832EFEC8(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x833026b8
	ctx.lr = 0x832F0424;
	sub_833026B8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_832F0440"))) PPC_WEAK_FUNC(sub_832F0440);
PPC_FUNC_IMPL(__imp__sub_832F0440) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x833011a8
	ctx.lr = 0x832F045C;
	sub_833011A8(ctx, base);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne cr6,0x832f0474
	if (!ctx.cr6.eq) goto loc_832F0474;
	// lis r11,-32210
	ctx.r11.s64 = -2110914560;
	// addi r3,r11,-25580
	ctx.r3.s64 = ctx.r11.s64 + -25580;
	// bl 0x832efd08
	ctx.lr = 0x832F0470;
	sub_832EFD08(ctx, base);
	// b 0x832f04ac
	goto loc_832F04AC;
loc_832F0474:
	// lwz r3,40(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// li r30,0
	ctx.r30.s64 = 0;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x832f048c
	if (ctx.cr6.eq) goto loc_832F048C;
	// bl 0x832f4fc8
	ctx.lr = 0x832F0488;
	sub_832F4FC8(ctx, base);
	// stb r30,2(r31)
	PPC_STORE_U8(ctx.r31.u32 + 2, ctx.r30.u8);
loc_832F048C:
	// lbz r11,1(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 1);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x832f04ac
	if (ctx.cr0.eq) goto loc_832F04AC;
	// stb r30,1(r31)
	PPC_STORE_U8(ctx.r31.u32 + 1, ctx.r30.u8);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r30,44(r31)
	PPC_STORE_U32(ctx.r31.u32 + 44, ctx.r30.u32);
	// bl 0x832f0128
	ctx.lr = 0x832F04A8;
	sub_832F0128(ctx, base);
	// stw r30,52(r31)
	PPC_STORE_U32(ctx.r31.u32 + 52, ctx.r30.u32);
loc_832F04AC:
	// bl 0x833026b8
	ctx.lr = 0x832F04B0;
	sub_833026B8(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_832F04C8"))) PPC_WEAK_FUNC(sub_832F04C8);
PPC_FUNC_IMPL(__imp__sub_832F04C8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x833011a8
	ctx.lr = 0x832F04E0;
	sub_833011A8(ctx, base);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x832f0508
	if (ctx.cr6.eq) goto loc_832F0508;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x832f0440
	ctx.lr = 0x832F04F0;
	sub_832F0440(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// li r5,568
	ctx.r5.s64 = 568;
	// li r4,0
	ctx.r4.s64 = 0;
	// stb r11,0(r31)
	PPC_STORE_U8(ctx.r31.u32 + 0, ctx.r11.u8);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x833a2b30
	ctx.lr = 0x832F0508;
	sub_833A2B30(ctx, base);
loc_832F0508:
	// bl 0x833026b8
	ctx.lr = 0x832F050C;
	sub_833026B8(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_832F0520"))) PPC_WEAK_FUNC(sub_832F0520);
PPC_FUNC_IMPL(__imp__sub_832F0520) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x833011a8
	ctx.lr = 0x832F0538;
	sub_833011A8(ctx, base);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne cr6,0x832f0550
	if (!ctx.cr6.eq) goto loc_832F0550;
	// lis r11,-32210
	ctx.r11.s64 = -2110914560;
	// addi r3,r11,-25536
	ctx.r3.s64 = ctx.r11.s64 + -25536;
	// bl 0x832efd08
	ctx.lr = 0x832F054C;
	sub_832EFD08(ctx, base);
	// b 0x832f057c
	goto loc_832F057C;
loc_832F0550:
	// lbz r11,1(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 1);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x832f0564
	if (ctx.cr0.eq) goto loc_832F0564;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x832f0440
	ctx.lr = 0x832F0564;
	sub_832F0440(ctx, base);
loc_832F0564:
	// lwz r11,36(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// li r11,2
	ctx.r11.s64 = 2;
	// bgt cr6,0x832f0578
	if (ctx.cr6.gt) goto loc_832F0578;
	// li r11,1
	ctx.r11.s64 = 1;
loc_832F0578:
	// stb r11,1(r31)
	PPC_STORE_U8(ctx.r31.u32 + 1, ctx.r11.u8);
loc_832F057C:
	// bl 0x833026b8
	ctx.lr = 0x832F0580;
	sub_833026B8(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_832F0594"))) PPC_WEAK_FUNC(sub_832F0594);
PPC_FUNC_IMPL(__imp__sub_832F0594) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832F0598"))) PPC_WEAK_FUNC(sub_832F0598);
PPC_FUNC_IMPL(__imp__sub_832F0598) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// std r30,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r30.u64);
	// std r31,-8(r1)
	PPC_STORE_U64(ctx.r1.u32 + -8, ctx.r31.u64);
	// lis r9,-31815
	ctx.r9.s64 = -2085027840;
	// lis r11,-31815
	ctx.r11.s64 = -2085027840;
	// lis r10,-31815
	ctx.r10.s64 = -2085027840;
	// addi r8,r11,-24416
	ctx.r8.s64 = ctx.r11.s64 + -24416;
	// addi r31,r10,-24704
	ctx.r31.s64 = ctx.r10.s64 + -24704;
	// lwz r11,-24448(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + -24448);
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// srawi r10,r11,4
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0xF) != 0);
	ctx.r10.s64 = ctx.r11.s32 >> 4;
	// addze r10,r10
	temp.s64 = ctx.r10.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r10.u32;
	ctx.r10.s64 = temp.s64;
	// rlwinm r10,r10,4,0,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 4) & 0xFFFFFFF0;
	// subf r10,r10,r11
	ctx.r10.s64 = ctx.r11.s64 - ctx.r10.s64;
	// rlwinm r11,r10,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 4) & 0xFFFFFFF0;
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// bne cr6,0x832f05e8
	if (!ctx.cr6.eq) goto loc_832F05E8;
	// rlwinm r31,r3,1,0,30
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 1) & 0xFFFFFFFE;
	// lhzx r30,r31,r8
	ctx.r30.u64 = PPC_LOAD_U16(ctx.r31.u32 + ctx.r8.u32);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// sthx r30,r31,r8
	PPC_STORE_U16(ctx.r31.u32 + ctx.r8.u32, ctx.r30.u16);
loc_832F05E8:
	// rlwinm r31,r3,1,0,30
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 1) & 0xFFFFFFFE;
	// stw r5,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r5.u32);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stw r6,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r6.u32);
	// stw r7,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r7.u32);
	// stb r3,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r3.u8);
	// stb r4,1(r11)
	PPC_STORE_U8(ctx.r11.u32 + 1, ctx.r4.u8);
	// lhzx r8,r31,r8
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r31.u32 + ctx.r8.u32);
	// stw r10,-24448(r9)
	PPC_STORE_U32(ctx.r9.u32 + -24448, ctx.r10.u32);
	// sth r8,2(r11)
	PPC_STORE_U16(ctx.r11.u32 + 2, ctx.r8.u16);
	// ld r30,-16(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// ld r31,-8(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_832F061C"))) PPC_WEAK_FUNC(sub_832F061C);
PPC_FUNC_IMPL(__imp__sub_832F061C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832F0620"))) PPC_WEAK_FUNC(sub_832F0620);
PPC_FUNC_IMPL(__imp__sub_832F0620) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x832f0684
	if (ctx.cr6.eq) goto loc_832F0684;
	// lbz r11,2(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 2);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x832f0684
	if (!ctx.cr0.eq) goto loc_832F0684;
	// lis r11,-31815
	ctx.r11.s64 = -2085027840;
	// lwz r11,-24444(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -24444);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x832f0668
	if (!ctx.cr6.eq) goto loc_832F0668;
	// lwz r4,36(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 36);
	// lwz r3,32(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// bl 0x82c10e98
	ctx.lr = 0x832F0668;
	sub_82C10E98(ctx, base);
loc_832F0668:
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x832F0684;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_832F0684:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_832F0698"))) PPC_WEAK_FUNC(sub_832F0698);
PPC_FUNC_IMPL(__imp__sub_832F0698) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r7,-1
	ctx.r7.s64 = -1;
	// li r6,-1
	ctx.r6.s64 = -1;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,5
	ctx.r3.s64 = 5;
	// bl 0x832f0598
	ctx.lr = 0x832F06C4;
	sub_832F0598(ctx, base);
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// bne cr6,0x832f06e0
	if (!ctx.cr6.eq) goto loc_832F06E0;
	// lis r11,-32210
	ctx.r11.s64 = -2110914560;
	// addi r3,r11,-25408
	ctx.r3.s64 = ctx.r11.s64 + -25408;
	// bl 0x832ffa40
	ctx.lr = 0x832F06D8;
	sub_832FFA40(ctx, base);
	// li r3,-3
	ctx.r3.s64 = -3;
	// b 0x832f0770
	goto loc_832F0770;
loc_832F06E0:
	// lbz r11,1(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 1);
	// extsb r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x832f076c
	if (ctx.cr6.eq) goto loc_832F076C;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bne cr6,0x832f0704
	if (!ctx.cr6.eq) goto loc_832F0704;
	// li r11,1
	ctx.r11.s64 = 1;
	// stb r11,1(r31)
	PPC_STORE_U8(ctx.r31.u32 + 1, ctx.r11.u8);
	// b 0x832f076c
	goto loc_832F076C;
loc_832F0704:
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x832f0724
	if (!ctx.cr6.eq) goto loc_832F0724;
	// lis r11,-32210
	ctx.r11.s64 = -2110914560;
	// addi r3,r11,-25452
	ctx.r3.s64 = ctx.r11.s64 + -25452;
	// bl 0x832ffa40
	ctx.lr = 0x832F071C;
	sub_832FFA40(ctx, base);
	// li r3,-1
	ctx.r3.s64 = -1;
	// b 0x832f0770
	goto loc_832F0770;
loc_832F0724:
	// bl 0x832f4fc8
	ctx.lr = 0x832F0728;
	sub_832F4FC8(ctx, base);
	// bl 0x82c10e98
	ctx.lr = 0x832F072C;
	sub_82C10E98(ctx, base);
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// bl 0x832f45a8
	ctx.lr = 0x832F0734;
	sub_832F45A8(ctx, base);
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// subf r11,r11,r3
	ctx.r11.s64 = ctx.r3.s64 - ctx.r11.s64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r11.u32);
	// bl 0x832f0620
	ctx.lr = 0x832F0748;
	sub_832F0620(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// stb r11,1(r31)
	PPC_STORE_U8(ctx.r31.u32 + 1, ctx.r11.u8);
	// bl 0x82c10e98
	ctx.lr = 0x832F0754;
	sub_82C10E98(ctx, base);
	// li r7,-1
	ctx.r7.s64 = -1;
	// li r6,-1
	ctx.r6.s64 = -1;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// li r3,5
	ctx.r3.s64 = 5;
	// bl 0x832f0598
	ctx.lr = 0x832F076C;
	sub_832F0598(ctx, base);
loc_832F076C:
	// lwz r3,16(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
loc_832F0770:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_832F0784"))) PPC_WEAK_FUNC(sub_832F0784);
PPC_FUNC_IMPL(__imp__sub_832F0784) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832F0788"))) PPC_WEAK_FUNC(sub_832F0788);
PPC_FUNC_IMPL(__imp__sub_832F0788) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r3,4(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// bl 0x832f4510
	ctx.lr = 0x832F07A8;
	sub_832F4510(ctx, base);
	// cmpwi cr6,r3,4
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 4, ctx.xer);
	// bne cr6,0x832f07c0
	if (!ctx.cr6.eq) goto loc_832F07C0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x832f0620
	ctx.lr = 0x832F07B8;
	sub_832F0620(ctx, base);
	// li r11,4
	ctx.r11.s64 = 4;
	// b 0x832f08a8
	goto loc_832F08A8;
loc_832F07C0:
	// lbz r11,1(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 1);
	// cmplwi cr6,r11,2
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 2, ctx.xer);
	// bne cr6,0x832f0864
	if (!ctx.cr6.eq) goto loc_832F0864;
	// lis r11,32767
	ctx.r11.s64 = 2147418112;
	// lwz r10,12(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// ori r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 65535;
	// cmpw cr6,r10,r11
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r11.s32, ctx.xer);
	// bne cr6,0x832f0818
	if (!ctx.cr6.eq) goto loc_832F0818;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// bl 0x832f4268
	ctx.lr = 0x832F07E8;
	sub_832F4268(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x832f0818
	if (ctx.cr0.eq) goto loc_832F0818;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// bl 0x832f4d58
	ctx.lr = 0x832F07F8;
	sub_832F4D58(ctx, base);
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// cmpw cr6,r3,r11
	ctx.cr6.compare<int32_t>(ctx.r3.s32, ctx.r11.s32, ctx.xer);
	// bgt cr6,0x832f0818
	if (ctx.cr6.gt) goto loc_832F0818;
	// li r11,3
	ctx.r11.s64 = 3;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stb r11,1(r31)
	PPC_STORE_U8(ctx.r31.u32 + 1, ctx.r11.u8);
	// bl 0x832f0620
	ctx.lr = 0x832F0814;
	sub_832F0620(ctx, base);
	// b 0x832f08ac
	goto loc_832F08AC;
loc_832F0818:
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// bl 0x832f4510
	ctx.lr = 0x832F0820;
	sub_832F4510(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r30,16(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// stb r11,1(r31)
	PPC_STORE_U8(ctx.r31.u32 + 1, ctx.r11.u8);
	// bl 0x832f45a8
	ctx.lr = 0x832F0834;
	sub_832F45A8(ctx, base);
	// lbz r10,1(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 1);
	// subf r11,r30,r3
	ctx.r11.s64 = ctx.r3.s64 - ctx.r30.s64;
	// extsb r10,r10
	ctx.r10.s64 = ctx.r10.s8;
	// stw r11,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r11.u32);
	// cmpwi cr6,r10,3
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 3, ctx.xer);
	// beq cr6,0x832f0854
	if (ctx.cr6.eq) goto loc_832F0854;
	// cmpwi cr6,r10,4
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 4, ctx.xer);
	// bne cr6,0x832f0864
	if (!ctx.cr6.eq) goto loc_832F0864;
loc_832F0854:
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r11.u32);
	// bl 0x832f0620
	ctx.lr = 0x832F0864;
	sub_832F0620(ctx, base);
loc_832F0864:
	// lbz r11,3(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 3);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// bne cr6,0x832f08ac
	if (!ctx.cr6.eq) goto loc_832F08AC;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// bl 0x832f4510
	ctx.lr = 0x832F0878;
	sub_832F4510(ctx, base);
	// cmpwi cr6,r3,1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 1, ctx.xer);
	// bne cr6,0x832f08ac
	if (!ctx.cr6.eq) goto loc_832F08AC;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// bl 0x832f45a8
	ctx.lr = 0x832F0888;
	sub_832F45A8(ctx, base);
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// subf r11,r11,r3
	ctx.r11.s64 = ctx.r3.s64 - ctx.r11.s64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r11.u32);
	// bl 0x832f0620
	ctx.lr = 0x832F089C;
	sub_832F0620(ctx, base);
	// li r10,0
	ctx.r10.s64 = 0;
	// li r11,1
	ctx.r11.s64 = 1;
	// stb r10,3(r31)
	PPC_STORE_U8(ctx.r31.u32 + 3, ctx.r10.u8);
loc_832F08A8:
	// stb r11,1(r31)
	PPC_STORE_U8(ctx.r31.u32 + 1, ctx.r11.u8);
loc_832F08AC:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_832F08C4"))) PPC_WEAK_FUNC(sub_832F08C4);
PPC_FUNC_IMPL(__imp__sub_832F08C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832F08C8"))) PPC_WEAK_FUNC(sub_832F08C8);
PPC_FUNC_IMPL(__imp__sub_832F08C8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32210
	ctx.r11.s64 = -2110914560;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r30,r11,-25492
	ctx.r30.s64 = ctx.r11.s64 + -25492;
loc_832F08E8:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne cr6,0x832f08fc
	if (!ctx.cr6.eq) goto loc_832F08FC;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x832ffa40
	ctx.lr = 0x832F08F8;
	sub_832FFA40(ctx, base);
	// b 0x832f090c
	goto loc_832F090C;
loc_832F08FC:
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// bl 0x832f4268
	ctx.lr = 0x832F0904;
	sub_832F4268(ctx, base);
	// cmpwi cr6,r3,1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 1, ctx.xer);
	// beq cr6,0x832f0928
	if (ctx.cr6.eq) goto loc_832F0928;
loc_832F090C:
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// bl 0x832f42a0
	ctx.lr = 0x832F0914;
	sub_832F42A0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x832f0928
	if (ctx.cr0.eq) goto loc_832F0928;
	// bl 0x832ffd60
	ctx.lr = 0x832F0920;
	sub_832FFD60(ctx, base);
	// bl 0x832f6790
	ctx.lr = 0x832F0924;
	sub_832F6790(ctx, base);
	// b 0x832f08e8
	goto loc_832F08E8;
loc_832F0928:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_832F0940"))) PPC_WEAK_FUNC(sub_832F0940);
PPC_FUNC_IMPL(__imp__sub_832F0940) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x832f09b0
	if (ctx.cr6.lt) goto loc_832F09B0;
	// cmpwi cr6,r3,256
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 256, ctx.xer);
	// bge cr6,0x832f09b0
	if (!ctx.cr6.lt) goto loc_832F09B0;
	// lis r11,-31815
	ctx.r11.s64 = -2085027840;
	// rlwinm r10,r3,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r11,r11,-24352
	ctx.r11.s64 = ctx.r11.s64 + -24352;
	// lwzx r11,r10,r11
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x832f09b0
	if (ctx.cr6.eq) goto loc_832F09B0;
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bgt cr6,0x832f098c
	if (ctx.cr6.gt) goto loc_832F098C;
	// lis r11,-32210
	ctx.r11.s64 = -2110914560;
	// addi r3,r11,-25296
	ctx.r3.s64 = ctx.r11.s64 + -25296;
	// b 0x832f09b8
	goto loc_832F09B8;
loc_832F098C:
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// blt cr6,0x832f09a4
	if (ctx.cr6.lt) goto loc_832F09A4;
	// cmpw cr6,r4,r11
	ctx.cr6.compare<int32_t>(ctx.r4.s32, ctx.r11.s32, ctx.xer);
	// bge cr6,0x832f09a4
	if (!ctx.cr6.lt) goto loc_832F09A4;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x832f09c0
	goto loc_832F09C0;
loc_832F09A4:
	// lis r11,-32210
	ctx.r11.s64 = -2110914560;
	// addi r3,r11,-25332
	ctx.r3.s64 = ctx.r11.s64 + -25332;
	// b 0x832f09b8
	goto loc_832F09B8;
loc_832F09B0:
	// lis r11,-32210
	ctx.r11.s64 = -2110914560;
	// addi r3,r11,-25372
	ctx.r3.s64 = ctx.r11.s64 + -25372;
loc_832F09B8:
	// bl 0x832ffa40
	ctx.lr = 0x832F09BC;
	sub_832FFA40(ctx, base);
	// li r3,-3
	ctx.r3.s64 = -3;
loc_832F09C0:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_832F09D0"))) PPC_WEAK_FUNC(sub_832F09D0);
PPC_FUNC_IMPL(__imp__sub_832F09D0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r7,-1
	ctx.r7.s64 = -1;
	// li r6,-1
	ctx.r6.s64 = -1;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,3
	ctx.r3.s64 = 3;
	// bl 0x832f0598
	ctx.lr = 0x832F0A00;
	sub_832F0598(ctx, base);
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x832f0a74
	if (ctx.cr6.eq) goto loc_832F0A74;
	// mr r3,r5
	ctx.r3.u64 = ctx.r5.u64;
	// bl 0x832f08c8
	ctx.lr = 0x832F0A10;
	sub_832F08C8(ctx, base);
	// lbz r11,1(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 1);
	// cmplwi cr6,r11,2
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 2, ctx.xer);
	// bne cr6,0x832f0a24
	if (!ctx.cr6.eq) goto loc_832F0A24;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x832f0698
	ctx.lr = 0x832F0A24;
	sub_832F0698(ctx, base);
loc_832F0A24:
	// lwz r30,4(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x832f0a4c
	if (ctx.cr6.eq) goto loc_832F0A4C;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stb r11,0(r31)
	PPC_STORE_U8(ctx.r31.u32 + 0, ctx.r11.u8);
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// bl 0x832f5088
	ctx.lr = 0x832F0A44;
	sub_832F5088(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x832f50f8
	ctx.lr = 0x832F0A4C;
	sub_832F50F8(ctx, base);
loc_832F0A4C:
	// li r5,52
	ctx.r5.s64 = 52;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x833a2b30
	ctx.lr = 0x832F0A5C;
	sub_833A2B30(ctx, base);
	// li r7,-1
	ctx.r7.s64 = -1;
	// li r6,-1
	ctx.r6.s64 = -1;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// li r3,3
	ctx.r3.s64 = 3;
	// bl 0x832f0598
	ctx.lr = 0x832F0A74;
	sub_832F0598(ctx, base);
loc_832F0A74:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_832F0A8C"))) PPC_WEAK_FUNC(sub_832F0A8C);
PPC_FUNC_IMPL(__imp__sub_832F0A8C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832F0A90"))) PPC_WEAK_FUNC(sub_832F0A90);
PPC_FUNC_IMPL(__imp__sub_832F0A90) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// bl 0x832f8758
	ctx.lr = 0x832F0AA8;
	sub_832F8758(ctx, base);
	// bl 0x82c10e98
	ctx.lr = 0x832F0AAC;
	sub_82C10E98(ctx, base);
	// lis r11,-31815
	ctx.r11.s64 = -2085027840;
	// addi r30,r11,-23328
	ctx.r30.s64 = ctx.r11.s64 + -23328;
	// mr r31,r30
	ctx.r31.u64 = ctx.r30.u64;
loc_832F0AB8:
	// lbz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 0);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// bne cr6,0x832f0acc
	if (!ctx.cr6.eq) goto loc_832F0ACC;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x832f0788
	ctx.lr = 0x832F0ACC;
	sub_832F0788(ctx, base);
loc_832F0ACC:
	// addi r31,r31,52
	ctx.r31.s64 = ctx.r31.s64 + 52;
	// addi r11,r30,832
	ctx.r11.s64 = ctx.r30.s64 + 832;
	// cmpw cr6,r31,r11
	ctx.cr6.compare<int32_t>(ctx.r31.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x832f0ab8
	if (ctx.cr6.lt) goto loc_832F0AB8;
	// bl 0x82c10e98
	ctx.lr = 0x832F0AE0;
	sub_82C10E98(ctx, base);
	// bl 0x832f8798
	ctx.lr = 0x832F0AE4;
	sub_832F8798(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_832F0AFC"))) PPC_WEAK_FUNC(sub_832F0AFC);
PPC_FUNC_IMPL(__imp__sub_832F0AFC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832F0B00"))) PPC_WEAK_FUNC(sub_832F0B00);
PPC_FUNC_IMPL(__imp__sub_832F0B00) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x833a0194
	ctx.lr = 0x832F0B08;
	__savegprlr_23(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r25,r5
	ctx.r25.u64 = ctx.r5.u64;
	// mr r24,r6
	ctx.r24.u64 = ctx.r6.u64;
	// mr r23,r7
	ctx.r23.u64 = ctx.r7.u64;
	// mr r28,r8
	ctx.r28.u64 = ctx.r8.u64;
	// mr r27,r9
	ctx.r27.u64 = ctx.r9.u64;
	// bl 0x832f0940
	ctx.lr = 0x832F0B2C;
	sub_832F0940(ctx, base);
	// mr. r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r26.s32, 0, ctx.xer);
	// bge 0x832f0b5c
	if (!ctx.cr0.lt) goto loc_832F0B5C;
	// li r10,0
	ctx.r10.s64 = 0;
	// cmplwi cr6,r25,0
	ctx.cr6.compare<uint32_t>(ctx.r25.u32, 0, ctx.xer);
	// beq cr6,0x832f0b44
	if (ctx.cr6.eq) goto loc_832F0B44;
	// stb r10,0(r25)
	PPC_STORE_U8(ctx.r25.u32 + 0, ctx.r10.u8);
loc_832F0B44:
	// li r11,-1
	ctx.r11.s64 = -1;
	// stw r10,0(r24)
	PPC_STORE_U32(ctx.r24.u32 + 0, ctx.r10.u32);
	// stw r11,0(r23)
	PPC_STORE_U32(ctx.r23.u32 + 0, ctx.r11.u32);
	// stw r11,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r11.u32);
	// stw r11,0(r27)
	PPC_STORE_U32(ctx.r27.u32 + 0, ctx.r11.u32);
	// b 0x832f0c8c
	goto loc_832F0C8C;
loc_832F0B5C:
	// lis r11,-31815
	ctx.r11.s64 = -2085027840;
	// rlwinm r10,r30,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r11,r11,-24352
	ctx.r11.s64 = ctx.r11.s64 + -24352;
	// lwzx r29,r10,r11
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// lbz r11,15(r29)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r29.u32 + 15);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// bne cr6,0x832f0c1c
	if (!ctx.cr6.eq) goto loc_832F0C1C;
	// lwz r9,280(r29)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r29.u32 + 280);
	// addi r10,r29,280
	ctx.r10.s64 = ctx.r29.s64 + 280;
	// srawi r11,r9,11
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x7FF) != 0);
	ctx.r11.s64 = ctx.r9.s32 >> 11;
	// addze r11,r11
	temp.s64 = ctx.r11.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r11.u32;
	ctx.r11.s64 = temp.s64;
	// srawi r8,r9,11
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x7FF) != 0);
	ctx.r8.s64 = ctx.r9.s32 >> 11;
	// addze r8,r8
	temp.s64 = ctx.r8.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r8.u32;
	ctx.r8.s64 = temp.s64;
	// rlwinm r8,r8,11,0,20
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 11) & 0xFFFFF800;
	// subf. r9,r8,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r8.s64;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// ble 0x832f0ba0
	if (!ctx.cr0.gt) goto loc_832F0BA0;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
loc_832F0BA0:
	// mr r30,r11
	ctx.r30.u64 = ctx.r11.u64;
	// addi r9,r10,4
	ctx.r9.s64 = ctx.r10.s64 + 4;
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// ble cr6,0x832f0be8
	if (!ctx.cr6.gt) goto loc_832F0BE8;
	// mr r11,r9
	ctx.r11.u64 = ctx.r9.u64;
	// mtctr r31
	ctx.ctr.u64 = ctx.r31.u64;
loc_832F0BB8:
	// lwz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// srawi r10,r8,11
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x7FF) != 0);
	ctx.r10.s64 = ctx.r8.s32 >> 11;
	// addze r10,r10
	temp.s64 = ctx.r10.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r10.u32;
	ctx.r10.s64 = temp.s64;
	// srawi r7,r8,11
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x7FF) != 0);
	ctx.r7.s64 = ctx.r8.s32 >> 11;
	// addze r7,r7
	temp.s64 = ctx.r7.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r7.u32;
	ctx.r7.s64 = temp.s64;
	// rlwinm r7,r7,11,0,20
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 11) & 0xFFFFF800;
	// subf. r8,r7,r8
	ctx.r8.s64 = ctx.r8.s64 - ctx.r7.s64;
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// ble 0x832f0bdc
	if (!ctx.cr0.gt) goto loc_832F0BDC;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
loc_832F0BDC:
	// add r30,r10,r30
	ctx.r30.u64 = ctx.r10.u64 + ctx.r30.u64;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x832f0bb8
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_832F0BB8;
loc_832F0BE8:
	// rlwinm r11,r31,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r8,r11,r9
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r9.u32);
	// srawi r10,r8,11
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x7FF) != 0);
	ctx.r10.s64 = ctx.r8.s32 >> 11;
	// addze r10,r10
	temp.s64 = ctx.r10.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r10.u32;
	ctx.r10.s64 = temp.s64;
	// srawi r7,r8,11
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x7FF) != 0);
	ctx.r7.s64 = ctx.r8.s32 >> 11;
	// addze r7,r7
	temp.s64 = ctx.r7.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r7.u32;
	ctx.r7.s64 = temp.s64;
	// rlwinm r7,r7,11,0,20
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 11) & 0xFFFFF800;
	// subf. r8,r7,r8
	ctx.r8.s64 = ctx.r8.s64 - ctx.r7.s64;
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// ble 0x832f0c10
	if (!ctx.cr0.gt) goto loc_832F0C10;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
loc_832F0C10:
	// stw r10,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r10.u32);
	// lwzx r11,r11,r9
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r9.u32);
	// b 0x832f0c58
	goto loc_832F0C58;
loc_832F0C1C:
	// addi r11,r29,280
	ctx.r11.s64 = ctx.r29.s64 + 280;
	// lhz r30,280(r29)
	ctx.r30.u64 = PPC_LOAD_U16(ctx.r29.u32 + 280);
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// addi r10,r11,2
	ctx.r10.s64 = ctx.r11.s64 + 2;
	// ble cr6,0x832f0c44
	if (!ctx.cr6.gt) goto loc_832F0C44;
	// addi r11,r10,-2
	ctx.r11.s64 = ctx.r10.s64 + -2;
	// mtctr r31
	ctx.ctr.u64 = ctx.r31.u64;
loc_832F0C38:
	// lhzu r9,2(r11)
	ea = 2 + ctx.r11.u32;
	ctx.r9.u64 = PPC_LOAD_U16(ea);
	ctx.r11.u32 = ea;
	// add r30,r9,r30
	ctx.r30.u64 = ctx.r9.u64 + ctx.r30.u64;
	// bdnz 0x832f0c38
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_832F0C38;
loc_832F0C44:
	// rlwinm r11,r31,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 1) & 0xFFFFFFFE;
	// lhzx r9,r11,r10
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r11.u32 + ctx.r10.u32);
	// stw r9,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r9.u32);
	// lhzx r11,r11,r10
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r11.u32 + ctx.r10.u32);
	// rotlwi r11,r11,11
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 11);
loc_832F0C58:
	// stw r11,0(r27)
	PPC_STORE_U32(ctx.r27.u32 + 0, ctx.r11.u32);
	// cmplwi cr6,r25,0
	ctx.cr6.compare<uint32_t>(ctx.r25.u32, 0, ctx.xer);
	// beq cr6,0x832f0c78
	if (ctx.cr6.eq) goto loc_832F0C78;
	// li r6,256
	ctx.r6.s64 = 256;
	// addi r5,r29,16
	ctx.r5.s64 = ctx.r29.s64 + 16;
	// li r4,256
	ctx.r4.s64 = 256;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x832ff918
	ctx.lr = 0x832F0C78;
	sub_832FF918(ctx, base);
loc_832F0C78:
	// lwz r11,272(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 272);
	// stw r11,0(r24)
	PPC_STORE_U32(ctx.r24.u32 + 0, ctx.r11.u32);
	// lwz r11,276(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 276);
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + ctx.r30.u64;
	// stw r11,0(r23)
	PPC_STORE_U32(ctx.r23.u32 + 0, ctx.r11.u32);
loc_832F0C8C:
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x833a01e4
	__restgprlr_23(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832F0C98"))) PPC_WEAK_FUNC(sub_832F0C98);
PPC_FUNC_IMPL(__imp__sub_832F0C98) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x832f8758
	ctx.lr = 0x832F0CB0;
	sub_832F8758(ctx, base);
	// lis r11,-31815
	ctx.r11.s64 = -2085027840;
	// rlwinm r10,r31,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r11,r11,-24352
	ctx.r11.s64 = ctx.r11.s64 + -24352;
	// lwzx r31,r10,r11
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// bl 0x832f8798
	ctx.lr = 0x832F0CC4;
	sub_832F8798(ctx, base);
	// addi r3,r31,16
	ctx.r3.s64 = ctx.r31.s64 + 16;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_832F0CDC"))) PPC_WEAK_FUNC(sub_832F0CDC);
PPC_FUNC_IMPL(__imp__sub_832F0CDC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832F0CE0"))) PPC_WEAK_FUNC(sub_832F0CE0);
PPC_FUNC_IMPL(__imp__sub_832F0CE0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// bl 0x832f8758
	ctx.lr = 0x832F0CF8;
	sub_832F8758(ctx, base);
	// lis r11,-31815
	ctx.r11.s64 = -2085027840;
	// addi r30,r11,-23328
	ctx.r30.s64 = ctx.r11.s64 + -23328;
	// mr r31,r30
	ctx.r31.u64 = ctx.r30.u64;
loc_832F0D04:
	// lbz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 0);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// bne cr6,0x832f0d18
	if (!ctx.cr6.eq) goto loc_832F0D18;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x832f09d0
	ctx.lr = 0x832F0D18;
	sub_832F09D0(ctx, base);
loc_832F0D18:
	// addi r31,r31,52
	ctx.r31.s64 = ctx.r31.s64 + 52;
	// addi r11,r30,832
	ctx.r11.s64 = ctx.r30.s64 + 832;
	// cmpw cr6,r31,r11
	ctx.cr6.compare<int32_t>(ctx.r31.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x832f0d04
	if (ctx.cr6.lt) goto loc_832F0D04;
	// bl 0x832f8798
	ctx.lr = 0x832F0D2C;
	sub_832F8798(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_832F0D44"))) PPC_WEAK_FUNC(sub_832F0D44);
PPC_FUNC_IMPL(__imp__sub_832F0D44) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832F0D48"))) PPC_WEAK_FUNC(sub_832F0D48);
PPC_FUNC_IMPL(__imp__sub_832F0D48) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x833a01a0
	ctx.lr = 0x832F0D50;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// mr r28,r6
	ctx.r28.u64 = ctx.r6.u64;
	// mr r27,r7
	ctx.r27.u64 = ctx.r7.u64;
	// mr r26,r8
	ctx.r26.u64 = ctx.r8.u64;
	// bl 0x832f8758
	ctx.lr = 0x832F0D70;
	sub_832F8758(ctx, base);
	// addi r9,r1,80
	ctx.r9.s64 = ctx.r1.s64 + 80;
	// mr r8,r26
	ctx.r8.u64 = ctx.r26.u64;
	// mr r7,r27
	ctx.r7.u64 = ctx.r27.u64;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x832f0b00
	ctx.lr = 0x832F0D90;
	sub_832F0B00(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x832f8798
	ctx.lr = 0x832F0D98;
	sub_832F8798(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x833a01f0
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832F0DA4"))) PPC_WEAK_FUNC(sub_832F0DA4);
PPC_FUNC_IMPL(__imp__sub_832F0DA4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832F0DA8"))) PPC_WEAK_FUNC(sub_832F0DA8);
PPC_FUNC_IMPL(__imp__sub_832F0DA8) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// stw r11,0(r5)
	PPC_STORE_U32(ctx.r5.u32 + 0, ctx.r11.u32);
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// stw r11,4(r5)
	PPC_STORE_U32(ctx.r5.u32 + 4, ctx.r11.u32);
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// stw r11,4(r6)
	PPC_STORE_U32(ctx.r6.u32 + 4, ctx.r11.u32);
	// lwz r11,4(r5)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 4);
	// cmpw cr6,r11,r4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r4.s32, ctx.xer);
	// ble cr6,0x832f0dd0
	if (!ctx.cr6.gt) goto loc_832F0DD0;
	// stw r4,4(r5)
	PPC_STORE_U32(ctx.r5.u32 + 4, ctx.r4.u32);
loc_832F0DD0:
	// lwz r11,4(r6)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + 4);
	// lwz r10,4(r5)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r5.u32 + 4);
	// subf. r11,r10,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r10.s64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,4(r6)
	PPC_STORE_U32(ctx.r6.u32 + 4, ctx.r11.u32);
	// bne 0x832f0dec
	if (!ctx.cr0.eq) goto loc_832F0DEC;
	// li r11,0
	ctx.r11.s64 = 0;
	// b 0x832f0df8
	goto loc_832F0DF8;
loc_832F0DEC:
	// lwz r10,4(r5)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r5.u32 + 4);
	// lwz r11,0(r5)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
loc_832F0DF8:
	// stw r11,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_832F0E00"))) PPC_WEAK_FUNC(sub_832F0E00);
PPC_FUNC_IMPL(__imp__sub_832F0E00) {
	PPC_FUNC_PROLOGUE();
	// lbz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 0);
	// lis r10,-31844
	ctx.r10.s64 = -2086928384;
	// lbz r9,1(r3)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r3.u32 + 1);
	// extsb r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	// lbz r8,2(r3)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r3.u32 + 2);
	// addi r7,r10,-29792
	ctx.r7.s64 = ctx.r10.s64 + -29792;
	// lbz r10,3(r3)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r3.u32 + 3);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lbz r6,4(r3)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r3.u32 + 4);
	// extsb r9,r9
	ctx.r9.s64 = ctx.r9.s8;
	// lbz r5,5(r3)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r3.u32 + 5);
	// lbz r4,6(r3)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r3.u32 + 6);
	// extsb r8,r8
	ctx.r8.s64 = ctx.r8.s8;
	// rlwinm r3,r9,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r8,r8,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r11,r7
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r7.u32);
	// extsb r10,r10
	ctx.r10.s64 = ctx.r10.s8;
	// extsb r6,r6
	ctx.r6.s64 = ctx.r6.s8;
	// rlwinm r9,r11,4,0,27
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// lwzx r11,r3,r7
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + ctx.r7.u32);
	// rlwinm r3,r10,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r10,r8,r7
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r7.u32);
	// rlwinm r8,r6,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r9,r11
	ctx.r11.u64 = ctx.r9.u64 + ctx.r11.u64;
	// extsb r6,r5
	ctx.r6.s64 = ctx.r5.s8;
	// rlwinm r11,r11,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// lwzx r9,r3,r7
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + ctx.r7.u32);
	// rlwinm r6,r6,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lwzx r10,r8,r7
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r7.u32);
	// extsb r8,r4
	ctx.r8.s64 = ctx.r4.s8;
	// rlwinm r11,r11,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// rlwinm r8,r8,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// lwzx r9,r6,r7
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r6.u32 + ctx.r7.u32);
	// rlwinm r11,r11,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lwzx r10,r8,r7
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r7.u32);
	// rlwinm r11,r11,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// rlwinm r11,r11,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// add r3,r11,r10
	ctx.r3.u64 = ctx.r11.u64 + ctx.r10.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_832F0EAC"))) PPC_WEAK_FUNC(sub_832F0EAC);
PPC_FUNC_IMPL(__imp__sub_832F0EAC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832F0EB0"))) PPC_WEAK_FUNC(sub_832F0EB0);
PPC_FUNC_IMPL(__imp__sub_832F0EB0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x833a01a4
	ctx.lr = 0x832F0EB8;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// stw r11,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r11.u32);
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// stw r11,4(r6)
	PPC_STORE_U32(ctx.r6.u32 + 4, ctx.r11.u32);
	// mr r30,r6
	ctx.r30.u64 = ctx.r6.u64;
	// lwz r10,4(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r31,r11
	ctx.r31.u64 = ctx.r11.u64;
	// add r29,r10,r11
	ctx.r29.u64 = ctx.r10.u64 + ctx.r11.u64;
	// cmplw cr6,r11,r29
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r29.u32, ctx.xer);
	// bge cr6,0x832f0f60
	if (!ctx.cr6.lt) goto loc_832F0F60;
loc_832F0EEC:
	// li r5,7
	ctx.r5.s64 = 7;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x833a31f0
	ctx.lr = 0x832F0EFC;
	sub_833A31F0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x832f0f40
	if (ctx.cr0.eq) goto loc_832F0F40;
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// beq cr6,0x832f0f24
	if (ctx.cr6.eq) goto loc_832F0F24;
	// li r5,7
	ctx.r5.s64 = 7;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x833a31f0
	ctx.lr = 0x832F0F1C;
	sub_833A31F0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x832f0f60
	if (ctx.cr0.eq) goto loc_832F0F60;
loc_832F0F24:
	// addi r3,r31,8
	ctx.r3.s64 = ctx.r31.s64 + 8;
	// bl 0x832f0e00
	ctx.lr = 0x832F0F2C;
	sub_832F0E00(ctx, base);
	// add r11,r3,r31
	ctx.r11.u64 = ctx.r3.u64 + ctx.r31.u64;
	// addi r31,r11,16
	ctx.r31.s64 = ctx.r11.s64 + 16;
	// cmplw cr6,r31,r29
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r29.u32, ctx.xer);
	// blt cr6,0x832f0eec
	if (ctx.cr6.lt) goto loc_832F0EEC;
	// b 0x832f0f54
	goto loc_832F0F54;
loc_832F0F40:
	// addi r11,r31,16
	ctx.r11.s64 = ctx.r31.s64 + 16;
	// addi r3,r31,8
	ctx.r3.s64 = ctx.r31.s64 + 8;
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
	// bl 0x832f0e00
	ctx.lr = 0x832F0F50;
	sub_832F0E00(ctx, base);
	// stw r3,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r3.u32);
loc_832F0F54:
	// cmplw cr6,r31,r29
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r29.u32, ctx.xer);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// blt cr6,0x832f0f64
	if (ctx.cr6.lt) goto loc_832F0F64;
loc_832F0F60:
	// li r3,0
	ctx.r3.s64 = 0;
loc_832F0F64:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x833a01f4
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832F0F6C"))) PPC_WEAK_FUNC(sub_832F0F6C);
PPC_FUNC_IMPL(__imp__sub_832F0F6C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832F0F70"))) PPC_WEAK_FUNC(sub_832F0F70);
PPC_FUNC_IMPL(__imp__sub_832F0F70) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x833a01a4
	ctx.lr = 0x832F0F78;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x832f0f98
	if (!ctx.cr6.eq) goto loc_832F0F98;
	// lis r11,-32210
	ctx.r11.s64 = -2110914560;
	// addi r3,r11,-24820
	ctx.r3.s64 = ctx.r11.s64 + -24820;
	// bl 0x833026b0
	ctx.lr = 0x832F0F90;
	sub_833026B0(ctx, base);
	// li r3,-1
	ctx.r3.s64 = -1;
	// b 0x832f1014
	goto loc_832F1014;
loc_832F0F98:
	// lbz r11,1(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 1);
	// extsb r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// blt cr6,0x832f1010
	if (ctx.cr6.lt) goto loc_832F1010;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bgt cr6,0x832f1010
	if (ctx.cr6.gt) goto loc_832F1010;
	// lwz r30,8(r3)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x83301640
	ctx.lr = 0x832F0FBC;
	sub_83301640(ctx, base);
	// mr. r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// li r29,0
	ctx.r29.s64 = 0;
	// li r31,0
	ctx.r31.s64 = 0;
	// ble 0x832f1008
	if (!ctx.cr0.gt) goto loc_832F1008;
loc_832F0FCC:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x83301650
	ctx.lr = 0x832F0FD8;
	sub_83301650(ctx, base);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x83301678
	ctx.lr = 0x832F0FE8;
	sub_83301678(ctx, base);
	// mullw r11,r3,r27
	ctx.r11.s64 = int64_t(ctx.r3.s32) * int64_t(ctx.r27.s32);
	// mulli r11,r11,18
	ctx.r11.s64 = ctx.r11.s64 * 18;
	// srawi r11,r11,5
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1F) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 5;
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// addze r11,r11
	temp.s64 = ctx.r11.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r11.u32;
	ctx.r11.s64 = temp.s64;
	// cmpw cr6,r31,r28
	ctx.cr6.compare<int32_t>(ctx.r31.s32, ctx.r28.s32, ctx.xer);
	// add r29,r11,r29
	ctx.r29.u64 = ctx.r11.u64 + ctx.r29.u64;
	// blt cr6,0x832f0fcc
	if (ctx.cr6.lt) goto loc_832F0FCC;
loc_832F1008:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// b 0x832f1014
	goto loc_832F1014;
loc_832F1010:
	// li r3,0
	ctx.r3.s64 = 0;
loc_832F1014:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x833a01f4
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832F101C"))) PPC_WEAK_FUNC(sub_832F101C);
PPC_FUNC_IMPL(__imp__sub_832F101C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832F1020"))) PPC_WEAK_FUNC(sub_832F1020);
PPC_FUNC_IMPL(__imp__sub_832F1020) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,432(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 432);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x832f1050
	if (ctx.cr6.eq) goto loc_832F1050;
	// lbz r11,1(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 1);
	// cmplwi cr6,r11,2
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 2, ctx.xer);
	// bne cr6,0x832f11a0
	if (!ctx.cr6.eq) goto loc_832F11A0;
loc_832F1050:
	// lwz r11,656(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 656);
	// li r30,0
	ctx.r30.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x832f109c
	if (ctx.cr6.eq) goto loc_832F109C;
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// bl 0x83301690
	ctx.lr = 0x832F1068;
	sub_83301690(ctx, base);
	// lwz r11,656(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 656);
	// addi r5,r3,-1
	ctx.r5.s64 = ctx.r3.s64 + -1;
	// lwz r4,448(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 448);
	// lwz r3,660(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 660);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x832F1080;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r3,448(r31)
	PPC_STORE_U32(ctx.r31.u32 + 448, ctx.r3.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bge 0x832f10a8
	if (!ctx.cr0.lt) goto loc_832F10A8;
	// stb r30,436(r31)
	PPC_STORE_U8(ctx.r31.u32 + 436, ctx.r30.u8);
	// stb r30,437(r31)
	PPC_STORE_U8(ctx.r31.u32 + 437, ctx.r30.u8);
	// stb r30,439(r31)
	PPC_STORE_U8(ctx.r31.u32 + 439, ctx.r30.u8);
	// b 0x832f10a8
	goto loc_832F10A8;
loc_832F109C:
	// lwz r11,448(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 448);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,448(r31)
	PPC_STORE_U32(ctx.r31.u32 + 448, ctx.r11.u32);
loc_832F10A8:
	// lbz r11,439(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 439);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// bne cr6,0x832f10d0
	if (!ctx.cr6.eq) goto loc_832F10D0;
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// bl 0x83301690
	ctx.lr = 0x832F10BC;
	sub_83301690(ctx, base);
	// lwz r11,448(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 448);
	// cmpw cr6,r11,r3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r3.s32, ctx.xer);
	// blt cr6,0x832f10f4
	if (ctx.cr6.lt) goto loc_832F10F4;
	// stw r30,448(r31)
	PPC_STORE_U32(ctx.r31.u32 + 448, ctx.r30.u32);
	// b 0x832f10f4
	goto loc_832F10F4;
loc_832F10D0:
	// lbz r11,436(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 436);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// bne cr6,0x832f10f4
	if (!ctx.cr6.eq) goto loc_832F10F4;
	// lwz r11,448(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 448);
	// lwz r10,460(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 460);
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// blt cr6,0x832f10f4
	if (ctx.cr6.lt) goto loc_832F10F4;
	// lwz r11,456(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 456);
	// stw r11,448(r31)
	PPC_STORE_U32(ctx.r31.u32 + 448, ctx.r11.u32);
loc_832F10F4:
	// lbz r11,437(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 437);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// bne cr6,0x832f1198
	if (!ctx.cr6.eq) goto loc_832F1198;
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// bl 0x83301690
	ctx.lr = 0x832F1108;
	sub_83301690(ctx, base);
	// lwz r11,448(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 448);
	// cmpw cr6,r11,r3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r3.s32, ctx.xer);
	// bge cr6,0x832f1198
	if (!ctx.cr6.lt) goto loc_832F1198;
	// bl 0x82c10e98
	ctx.lr = 0x832F1118;
	sub_82C10E98(ctx, base);
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r30,448(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 448);
	// bl 0x83301710
	ctx.lr = 0x832F1124;
	sub_83301710(ctx, base);
	// cmplwi cr6,r3,1
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 1, ctx.xer);
	// blt cr6,0x832f1144
	if (ctx.cr6.lt) goto loc_832F1144;
	// bne cr6,0x832f1190
	if (!ctx.cr6.eq) goto loc_832F1190;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// bl 0x832f4550
	ctx.lr = 0x832F113C;
	sub_832F4550(ctx, base);
	// li r4,-1
	ctx.r4.s64 = -1;
	// b 0x832f1180
	goto loc_832F1180;
loc_832F1144:
	// addi r6,r1,84
	ctx.r6.s64 = ctx.r1.s64 + 84;
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x833016d8
	ctx.lr = 0x832F1158;
	sub_833016D8(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// srawi r11,r11,11
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x7FF) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 11;
	// addze r4,r11
	temp.s64 = ctx.r11.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r11.u32;
	ctx.r4.s64 = temp.s64;
	// bl 0x832f4550
	ctx.lr = 0x832F116C;
	sub_832F4550(ctx, base);
	// lwz r10,84(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// srawi r11,r11,11
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x7FF) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 11;
	// addze r4,r11
	temp.s64 = ctx.r11.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r11.u32;
	ctx.r4.s64 = temp.s64;
loc_832F1180:
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// bl 0x832f4628
	ctx.lr = 0x832F1188;
	sub_832F4628(ctx, base);
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// bl 0x832f4e48
	ctx.lr = 0x832F1190;
	sub_832F4E48(ctx, base);
loc_832F1190:
	// bl 0x82c10e98
	ctx.lr = 0x832F1194;
	sub_82C10E98(ctx, base);
	// b 0x832f11a0
	goto loc_832F11A0;
loc_832F1198:
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// bl 0x83301848
	ctx.lr = 0x832F11A0;
	sub_83301848(ctx, base);
loc_832F11A0:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_832F11B8"))) PPC_WEAK_FUNC(sub_832F11B8);
PPC_FUNC_IMPL(__imp__sub_832F11B8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x833a01ac
	ctx.lr = 0x832F11C0;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r3,12(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// bl 0x832f5028
	ctx.lr = 0x832F11D0;
	sub_832F5028(ctx, base);
	// lwz r3,148(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 148);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,20(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x832F11E4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lbz r11,3(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 3);
	// li r30,0
	ctx.r30.s64 = 0;
	// extsb. r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble 0x832f1220
	if (!ctx.cr0.gt) goto loc_832F1220;
	// addi r29,r31,148
	ctx.r29.s64 = ctx.r31.s64 + 148;
loc_832F11F8:
	// lwzu r3,4(r29)
	ea = 4 + ctx.r29.u32;
	ctx.r3.u64 = PPC_LOAD_U32(ea);
	ctx.r29.u32 = ea;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,20(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x832F120C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lbz r11,3(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 3);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// extsb r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	// cmpw cr6,r30,r11
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x832f11f8
	if (ctx.cr6.lt) goto loc_832F11F8;
loc_832F1220:
	// lwz r11,480(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 480);
	// lwz r6,476(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 476);
	// rldicr r7,r11,11,63
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r11.u64, 11) & 0xFFFFFFFFFFFFFFFF;
	// lwz r5,472(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 472);
	// lwz r4,468(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 468);
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// bl 0x832f4de0
	ctx.lr = 0x832F123C;
	sub_832F4DE0(ctx, base);
	// lwz r11,284(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 284);
	// lis r5,32767
	ctx.r5.s64 = 2147418112;
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// srawi r11,r11,1
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 1;
	// ori r5,r5,65535
	ctx.r5.u64 = ctx.r5.u64 | 65535;
	// addze r4,r11
	temp.s64 = ctx.r11.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r11.u32;
	ctx.r4.s64 = temp.s64;
	// bl 0x832f4d20
	ctx.lr = 0x832F1258;
	sub_832F4D20(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// bl 0x832f4550
	ctx.lr = 0x832F1264;
	sub_832F4550(ctx, base);
	// li r4,3
	ctx.r4.s64 = 3;
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// bl 0x832f4628
	ctx.lr = 0x832F1270;
	sub_832F4628(ctx, base);
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// bl 0x832f4e48
	ctx.lr = 0x832F1278;
	sub_832F4E48(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// bl 0x83301628
	ctx.lr = 0x832F1284;
	sub_83301628(ctx, base);
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// bl 0x833015b8
	ctx.lr = 0x832F128C;
	sub_833015B8(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x833a01fc
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832F1294"))) PPC_WEAK_FUNC(sub_832F1294);
PPC_FUNC_IMPL(__imp__sub_832F1294) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832F1298"))) PPC_WEAK_FUNC(sub_832F1298);
PPC_FUNC_IMPL(__imp__sub_832F1298) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x833a01a0
	ctx.lr = 0x832F12A0;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r26,-1
	ctx.r26.s64 = -1;
	// addi r27,r3,16
	ctx.r27.s64 = ctx.r3.s64 + 16;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// clrldi r26,r26,1
	ctx.r26.u64 = ctx.r26.u64 & 0x7FFFFFFFFFFFFFFF;
	// bne cr6,0x832f12c8
	if (!ctx.cr6.eq) goto loc_832F12C8;
	// lis r11,-32210
	ctx.r11.s64 = -2110914560;
	// addi r3,r11,-24876
	ctx.r3.s64 = ctx.r11.s64 + -24876;
	// bl 0x833026b0
	ctx.lr = 0x832F12C4;
	sub_833026B0(ctx, base);
	// b 0x832f1394
	goto loc_832F1394;
loc_832F12C8:
	// lbz r11,1(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 1);
	// extsb r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// blt cr6,0x832f12f0
	if (ctx.cr6.lt) goto loc_832F12F0;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bgt cr6,0x832f12f0
	if (ctx.cr6.gt) goto loc_832F12F0;
	// lwz r3,8(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// bl 0x83301640
	ctx.lr = 0x832F12E8;
	sub_83301640(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// b 0x832f12f4
	goto loc_832F12F4;
loc_832F12F0:
	// li r31,0
	ctx.r31.s64 = 0;
loc_832F12F4:
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// ble cr6,0x832f1394
	if (!ctx.cr6.gt) goto loc_832F1394;
	// lwz r3,0(r27)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// bl 0x832f64a8
	ctx.lr = 0x832F1304;
	sub_832F64A8(ctx, base);
	// mr. r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// ble 0x832f1394
	if (!ctx.cr0.gt) goto loc_832F1394;
	// li r29,1
	ctx.r29.s64 = 1;
	// cmpwi cr6,r31,1
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 1, ctx.xer);
	// ble cr6,0x832f133c
	if (!ctx.cr6.gt) goto loc_832F133C;
	// addi r30,r27,4
	ctx.r30.s64 = ctx.r27.s64 + 4;
loc_832F131C:
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// bl 0x832f64a8
	ctx.lr = 0x832F1324;
	sub_832F64A8(ctx, base);
	// cmpw cr6,r28,r3
	ctx.cr6.compare<int32_t>(ctx.r28.s32, ctx.r3.s32, ctx.xer);
	// bne cr6,0x832f1394
	if (!ctx.cr6.eq) goto loc_832F1394;
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// cmpw cr6,r29,r31
	ctx.cr6.compare<int32_t>(ctx.r29.s32, ctx.r31.s32, ctx.xer);
	// blt cr6,0x832f131c
	if (ctx.cr6.lt) goto loc_832F131C;
loc_832F133C:
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// ble cr6,0x832f1394
	if (!ctx.cr6.gt) goto loc_832F1394;
	// mr r30,r27
	ctx.r30.u64 = ctx.r27.u64;
	// mr r29,r31
	ctx.r29.u64 = ctx.r31.u64;
loc_832F134C:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r3,12(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// bl 0x832ff768
	ctx.lr = 0x832F1358;
	sub_832FF768(ctx, base);
	// cmpd cr6,r26,r3
	ctx.cr6.compare<int64_t>(ctx.r26.s64, ctx.r3.s64, ctx.xer);
	// blt cr6,0x832f1364
	if (ctx.cr6.lt) goto loc_832F1364;
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
loc_832F1364:
	// addic. r29,r29,-1
	ctx.xer.ca = ctx.r29.u32 > 0;
	ctx.r29.s64 = ctx.r29.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// bne 0x832f134c
	if (!ctx.cr0.eq) goto loc_832F134C;
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// ble cr6,0x832f1394
	if (!ctx.cr6.gt) goto loc_832F1394;
	// addi r30,r27,-4
	ctx.r30.s64 = ctx.r27.s64 + -4;
loc_832F137C:
	// lwzu r11,4(r30)
	ea = 4 + ctx.r30.u32;
	ctx.r11.u64 = PPC_LOAD_U32(ea);
	ctx.r30.u32 = ea;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// lwz r3,12(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// bl 0x832ff7c0
	ctx.lr = 0x832F138C;
	sub_832FF7C0(ctx, base);
	// addic. r31,r31,-1
	ctx.xer.ca = ctx.r31.u32 > 0;
	ctx.r31.s64 = ctx.r31.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// bne 0x832f137c
	if (!ctx.cr0.eq) goto loc_832F137C;
loc_832F1394:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x833a01f0
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832F139C"))) PPC_WEAK_FUNC(sub_832F139C);
PPC_FUNC_IMPL(__imp__sub_832F139C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832F13A0"))) PPC_WEAK_FUNC(sub_832F13A0);
PPC_FUNC_IMPL(__imp__sub_832F13A0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x833a01a8
	ctx.lr = 0x832F13A8;
	__savegprlr_28(ctx, base);
	// stfd f29,-64(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -64, ctx.f29.u64);
	// stfd f30,-56(r1)
	PPC_STORE_U64(ctx.r1.u32 + -56, ctx.f30.u64);
	// stfd f31,-48(r1)
	PPC_STORE_U64(ctx.r1.u32 + -48, ctx.f31.u64);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,644(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 644);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r28,-1
	ctx.r28.s64 = -1;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x832f1440
	if (!ctx.cr6.gt) goto loc_832F1440;
	// stw r11,640(r3)
	PPC_STORE_U32(ctx.r3.u32 + 640, ctx.r11.u32);
	// li r30,0
	ctx.r30.s64 = 0;
	// lwz r3,8(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// bl 0x83301690
	ctx.lr = 0x832F13DC;
	sub_83301690(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// ble 0x832f152c
	if (!ctx.cr0.gt) goto loc_832F152C;
loc_832F13E4:
	// addi r6,r1,84
	ctx.r6.s64 = ctx.r1.s64 + 84;
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x83301698
	ctx.lr = 0x832F13F8;
	sub_83301698(ctx, base);
	// lwz r11,640(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 640);
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// blt cr6,0x832f1428
	if (ctx.cr6.lt) goto loc_832F1428;
	// subf r11,r10,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r10.s64;
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// stw r11,640(r31)
	PPC_STORE_U32(ctx.r31.u32 + 640, ctx.r11.u32);
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// bl 0x83301690
	ctx.lr = 0x832F141C;
	sub_83301690(ctx, base);
	// cmpw cr6,r30,r3
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r3.s32, ctx.xer);
	// blt cr6,0x832f13e4
	if (ctx.cr6.lt) goto loc_832F13E4;
	// b 0x832f152c
	goto loc_832F152C;
loc_832F1428:
	// lwz r10,652(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 652);
	// mr r28,r30
	ctx.r28.u64 = ctx.r30.u64;
	// lwz r11,644(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 644);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stw r11,652(r31)
	PPC_STORE_U32(ctx.r31.u32 + 652, ctx.r11.u32);
	// b 0x832f152c
	goto loc_832F152C;
loc_832F1440:
	// lis r11,-32230
	ctx.r11.s64 = -2112225280;
	// lfs f30,648(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 648);
	ctx.f30.f64 = double(temp.f32);
	// lfs f29,24284(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 24284);
	ctx.f29.f64 = double(temp.f32);
	// fcmpu cr6,f30,f29
	ctx.cr6.compare(ctx.f30.f64, ctx.f29.f64);
	// beq cr6,0x832f1528
	if (ctx.cr6.eq) goto loc_832F1528;
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// li r29,0
	ctx.r29.s64 = 0;
	// li r30,0
	ctx.r30.s64 = 0;
	// bl 0x83301690
	ctx.lr = 0x832F1464;
	sub_83301690(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// ble 0x832f152c
	if (!ctx.cr0.gt) goto loc_832F152C;
loc_832F146C:
	// addi r6,r1,84
	ctx.r6.s64 = ctx.r1.s64 + 84;
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// fmr f31,f29
	ctx.fpscr.disableFlushMode();
	ctx.f31.f64 = ctx.f29.f64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x83301698
	ctx.lr = 0x832F1484;
	sub_83301698(ctx, base);
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x832f14c0
	if (ctx.cr6.eq) goto loc_832F14C0;
	// extsw r8,r11
	ctx.r8.s64 = ctx.r11.s32;
	// extsw r9,r10
	ctx.r9.s64 = ctx.r10.s32;
	// std r8,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r8.u64);
	// lfd f0,88(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// std r9,96(r1)
	PPC_STORE_U64(ctx.r1.u32 + 96, ctx.r9.u64);
	// lfd f13,96(r1)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 96);
	// fcfid f13,f13
	ctx.f13.f64 = double(ctx.f13.s64);
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// frsp f13,f13
	ctx.f13.f64 = double(float(ctx.f13.f64));
	// frsp f0,f0
	ctx.f0.f64 = double(float(ctx.f0.f64));
	// fdivs f31,f13,f0
	ctx.f31.f64 = double(float(ctx.f13.f64 / ctx.f0.f64));
loc_832F14C0:
	// fcmpu cr6,f30,f31
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f30.f64, ctx.f31.f64);
	// blt cr6,0x832f14e8
	if (ctx.cr6.lt) goto loc_832F14E8;
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// fsubs f30,f30,f31
	ctx.f30.f64 = double(float(ctx.f30.f64 - ctx.f31.f64));
	// add r29,r29,r10
	ctx.r29.u64 = ctx.r29.u64 + ctx.r10.u64;
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// bl 0x83301690
	ctx.lr = 0x832F14DC;
	sub_83301690(ctx, base);
	// cmpw cr6,r30,r3
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r3.s32, ctx.xer);
	// blt cr6,0x832f146c
	if (ctx.cr6.lt) goto loc_832F146C;
	// b 0x832f152c
	goto loc_832F152C;
loc_832F14E8:
	// extsw r11,r11
	ctx.r11.s64 = ctx.r11.s32;
	// lwz r10,652(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 652);
	// mr r28,r30
	ctx.r28.u64 = ctx.r30.u64;
	// std r11,96(r1)
	PPC_STORE_U64(ctx.r1.u32 + 96, ctx.r11.u64);
	// lfd f0,96(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 96);
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// frsp f0,f0
	ctx.f0.f64 = double(float(ctx.f0.f64));
	// fmuls f0,f0,f30
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f30.f64));
	// fctiwz f0,f0
	ctx.f0.s64 = (ctx.f0.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f0.f64));
	// stfd f0,96(r1)
	PPC_STORE_U64(ctx.r1.u32 + 96, ctx.f0.u64);
	// lwz r11,100(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// add r10,r10,r29
	ctx.r10.u64 = ctx.r10.u64 + ctx.r29.u64;
	// stw r11,640(r31)
	PPC_STORE_U32(ctx.r31.u32 + 640, ctx.r11.u32);
	// stw r10,652(r31)
	PPC_STORE_U32(ctx.r31.u32 + 652, ctx.r10.u32);
	// b 0x832f152c
	goto loc_832F152C;
loc_832F1528:
	// lwz r28,452(r31)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r31.u32 + 452);
loc_832F152C:
	// lwz r11,640(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 640);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// bne cr6,0x832f1540
	if (!ctx.cr6.eq) goto loc_832F1540;
	// li r11,0
	ctx.r11.s64 = 0;
loc_832F1540:
	// stb r11,6(r31)
	PPC_STORE_U8(ctx.r31.u32 + 6, ctx.r11.u8);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// lfd f29,-64(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f29.u64 = PPC_LOAD_U64(ctx.r1.u32 + -64);
	// lfd f30,-56(r1)
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -56);
	// lfd f31,-48(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -48);
	// b 0x833a01f8
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832F155C"))) PPC_WEAK_FUNC(sub_832F155C);
PPC_FUNC_IMPL(__imp__sub_832F155C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832F1560"))) PPC_WEAK_FUNC(sub_832F1560);
PPC_FUNC_IMPL(__imp__sub_832F1560) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x833a019c
	ctx.lr = 0x832F1568;
	__savegprlr_25(ctx, base);
	// stfd f30,-80(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -80, ctx.f30.u64);
	// stfd f31,-72(r1)
	PPC_STORE_U64(ctx.r1.u32 + -72, ctx.f31.u64);
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lbz r11,6(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 6);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// bne cr6,0x832f17e8
	if (!ctx.cr6.eq) goto loc_832F17E8;
	// lwz r29,452(r3)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r3.u32 + 452);
	// li r26,0
	ctx.r26.s64 = 0;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// lwz r3,8(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r27,r26
	ctx.r27.u64 = ctx.r26.u64;
	// bl 0x833016d8
	ctx.lr = 0x832F15A4;
	sub_833016D8(ctx, base);
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// lfs f30,12452(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12452);
	ctx.f30.f64 = double(temp.f32);
	// lbz r11,437(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 437);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x832f1698
	if (ctx.cr0.eq) goto loc_832F1698;
	// lwz r11,444(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 444);
	// addi r6,r1,88
	ctx.r6.s64 = ctx.r1.s64 + 88;
	// addi r5,r1,92
	ctx.r5.s64 = ctx.r1.s64 + 92;
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r28,r11,-1
	ctx.r28.s64 = ctx.r11.s64 + -1;
	// bl 0x83301698
	ctx.lr = 0x832F15D4;
	sub_83301698(ctx, base);
	// lwz r11,88(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x832f1624
	if (ctx.cr6.eq) goto loc_832F1624;
	// extsw r11,r11
	ctx.r11.s64 = ctx.r11.s32;
	// lwz r10,640(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 640);
	// lwz r9,92(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// std r11,104(r1)
	PPC_STORE_U64(ctx.r1.u32 + 104, ctx.r11.u64);
	// lfd f0,104(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 104);
	// subf r11,r10,r9
	ctx.r11.s64 = ctx.r9.s64 - ctx.r10.s64;
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// extsw r11,r11
	ctx.r11.s64 = ctx.r11.s32;
	// frsp f0,f0
	ctx.f0.f64 = double(float(ctx.f0.f64));
	// std r11,104(r1)
	PPC_STORE_U64(ctx.r1.u32 + 104, ctx.r11.u64);
	// lfd f13,104(r1)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 104);
	// fcfid f13,f13
	ctx.f13.f64 = double(ctx.f13.s64);
	// frsp f13,f13
	ctx.f13.f64 = double(float(ctx.f13.f64));
	// fdivs f0,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 / ctx.f0.f64));
	// fcmpu cr6,f0,f30
	ctx.cr6.compare(ctx.f0.f64, ctx.f30.f64);
	// bge cr6,0x832f1624
	if (!ctx.cr6.lt) goto loc_832F1624;
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
loc_832F1624:
	// lbz r11,436(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 436);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// bne cr6,0x832f1640
	if (!ctx.cr6.eq) goto loc_832F1640;
	// lwz r3,460(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 460);
	// lwz r11,452(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 452);
	// cmpw cr6,r11,r3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r3.s32, ctx.xer);
	// ble cr6,0x832f1648
	if (!ctx.cr6.gt) goto loc_832F1648;
loc_832F1640:
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// bl 0x83301690
	ctx.lr = 0x832F1648;
	sub_83301690(ctx, base);
loc_832F1648:
	// add r11,r28,r29
	ctx.r11.u64 = ctx.r28.u64 + ctx.r29.u64;
	// cmpw cr6,r11,r3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r3.s32, ctx.xer);
	// ble cr6,0x832f1658
	if (!ctx.cr6.gt) goto loc_832F1658;
	// subf r28,r29,r3
	ctx.r28.s64 = ctx.r3.s64 - ctx.r29.s64;
loc_832F1658:
	// li r30,1
	ctx.r30.s64 = 1;
	// cmpwi cr6,r28,1
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 1, ctx.xer);
	// blt cr6,0x832f1694
	if (ctx.cr6.lt) goto loc_832F1694;
loc_832F1664:
	// addi r6,r1,96
	ctx.r6.s64 = ctx.r1.s64 + 96;
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addi r5,r1,100
	ctx.r5.s64 = ctx.r1.s64 + 100;
	// add r4,r30,r29
	ctx.r4.u64 = ctx.r30.u64 + ctx.r29.u64;
	// bl 0x833016d8
	ctx.lr = 0x832F1678;
	sub_833016D8(ctx, base);
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r11,96(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// cmpw cr6,r30,r28
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r28.s32, ctx.xer);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// ble cr6,0x832f1664
	if (!ctx.cr6.gt) goto loc_832F1664;
loc_832F1694:
	// add r29,r28,r29
	ctx.r29.u64 = ctx.r28.u64 + ctx.r29.u64;
loc_832F1698:
	// stw r29,448(r31)
	PPC_STORE_U32(ctx.r31.u32 + 448, ctx.r29.u32);
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// bl 0x83301638
	ctx.lr = 0x832F16A4;
	sub_83301638(ctx, base);
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// fmr f31,f1
	ctx.fpscr.disableFlushMode();
	ctx.f31.f64 = ctx.f1.f64;
	// mr r29,r26
	ctx.r29.u64 = ctx.r26.u64;
	// mr r30,r26
	ctx.r30.u64 = ctx.r26.u64;
	// bl 0x83301640
	ctx.lr = 0x832F16B8;
	sub_83301640(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// ble 0x832f1768
	if (!ctx.cr0.gt) goto loc_832F1768;
	// fdivs f31,f30,f31
	ctx.fpscr.disableFlushMode();
	ctx.f31.f64 = double(float(ctx.f30.f64 / ctx.f31.f64));
loc_832F16C4:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// bl 0x83301650
	ctx.lr = 0x832F16D0;
	sub_83301650(ctx, base);
	// extsw r11,r3
	ctx.r11.s64 = ctx.r3.s32;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// std r11,104(r1)
	PPC_STORE_U64(ctx.r1.u32 + 104, ctx.r11.u64);
	// lfd f0,104(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 104);
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// frsp f0,f0
	ctx.f0.f64 = double(float(ctx.f0.f64));
	// fmuls f0,f0,f31
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f31.f64));
	// fctiwz f0,f0
	ctx.f0.s64 = (ctx.f0.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f0.f64));
	// stfd f0,112(r1)
	PPC_STORE_U64(ctx.r1.u32 + 112, ctx.f0.u64);
	// lwz r11,116(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// addi r11,r11,31
	ctx.r11.s64 = ctx.r11.s64 + 31;
	// srawi r11,r11,5
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1F) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 5;
	// addze r11,r11
	temp.s64 = ctx.r11.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r11.u32;
	ctx.r11.s64 = temp.s64;
	// rlwinm r28,r11,5,0,26
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 5) & 0xFFFFFFE0;
	// bl 0x83301678
	ctx.lr = 0x832F1710;
	sub_83301678(ctx, base);
	// lwz r11,640(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 640);
	// srawi r10,r28,5
	ctx.xer.ca = (ctx.r28.s32 < 0) & ((ctx.r28.u32 & 0x1F) != 0);
	ctx.r10.s64 = ctx.r28.s32 >> 5;
	// divw r25,r11,r28
	ctx.r25.s32 = ctx.r11.s32 / ctx.r28.s32;
	// addze r10,r10
	temp.s64 = ctx.r10.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r10.u32;
	ctx.r10.s64 = temp.s64;
	// mullw r9,r25,r28
	ctx.r9.s64 = int64_t(ctx.r25.s32) * int64_t(ctx.r28.s32);
	// stw r9,640(r31)
	PPC_STORE_U32(ctx.r31.u32 + 640, ctx.r9.u32);
	// divw r9,r11,r28
	ctx.r9.s32 = ctx.r11.s32 / ctx.r28.s32;
	// mullw r10,r3,r10
	ctx.r10.s64 = int64_t(ctx.r3.s32) * int64_t(ctx.r10.s32);
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// mullw r9,r9,r28
	ctx.r9.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r28.s32);
	// mulli r28,r10,18
	ctx.r28.s64 = ctx.r10.s64 * 18;
	// subf r27,r9,r11
	ctx.r27.s64 = ctx.r11.s64 - ctx.r9.s64;
	// bl 0x83301718
	ctx.lr = 0x832F1744;
	sub_83301718(ctx, base);
	// addi r11,r28,16
	ctx.r11.s64 = ctx.r28.s64 + 16;
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// mullw r11,r11,r25
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r25.s32);
	// add r11,r3,r11
	ctx.r11.u64 = ctx.r3.u64 + ctx.r11.u64;
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// add r29,r11,r29
	ctx.r29.u64 = ctx.r11.u64 + ctx.r29.u64;
	// bl 0x83301640
	ctx.lr = 0x832F1760;
	sub_83301640(ctx, base);
	// cmpw cr6,r30,r3
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r3.s32, ctx.xer);
	// blt cr6,0x832f16c4
	if (ctx.cr6.lt) goto loc_832F16C4;
loc_832F1768:
	// lwz r10,652(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 652);
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// subf r10,r27,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r27.s64;
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// add r11,r29,r11
	ctx.r11.u64 = ctx.r29.u64 + ctx.r11.u64;
	// stw r10,652(r31)
	PPC_STORE_U32(ctx.r31.u32 + 652, ctx.r10.u32);
	// srawi r10,r11,11
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x7FF) != 0);
	ctx.r10.s64 = ctx.r11.s32 >> 11;
	// addze r30,r10
	temp.s64 = ctx.r10.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r10.u32;
	ctx.r30.s64 = temp.s64;
	// srawi r10,r11,11
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x7FF) != 0);
	ctx.r10.s64 = ctx.r11.s32 >> 11;
	// addze r10,r10
	temp.s64 = ctx.r10.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r10.u32;
	ctx.r10.s64 = temp.s64;
	// rlwinm r10,r10,11,0,20
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 11) & 0xFFFFF800;
	// subf r4,r10,r11
	ctx.r4.s64 = ctx.r11.s64 - ctx.r10.s64;
	// bl 0x83301720
	ctx.lr = 0x832F179C;
	sub_83301720(ctx, base);
	// lwz r3,148(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 148);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,20(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x832F17B0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// bl 0x832f4550
	ctx.lr = 0x832F17BC;
	sub_832F4550(ctx, base);
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// srawi r11,r11,11
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x7FF) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 11;
	// addze r4,r11
	temp.s64 = ctx.r11.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r11.u32;
	ctx.r4.s64 = temp.s64;
	// bl 0x832f4628
	ctx.lr = 0x832F17D8;
	sub_832F4628(ctx, base);
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// bl 0x832f4e48
	ctx.lr = 0x832F17E0;
	sub_832F4E48(ctx, base);
	// stb r26,6(r31)
	PPC_STORE_U8(ctx.r31.u32 + 6, ctx.r26.u8);
	// stw r26,640(r31)
	PPC_STORE_U32(ctx.r31.u32 + 640, ctx.r26.u32);
loc_832F17E8:
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// lfd f30,-80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -80);
	// lfd f31,-72(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -72);
	// b 0x833a01ec
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832F17F8"))) PPC_WEAK_FUNC(sub_832F17F8);
PPC_FUNC_IMPL(__imp__sub_832F17F8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x833a01a0
	ctx.lr = 0x832F1800;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r11,r4,63
	ctx.r11.s64 = ctx.r4.s64 + 63;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// rlwinm r28,r11,0,0,25
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFC0;
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// subf r11,r28,r4
	ctx.r11.s64 = ctx.r4.s64 - ctx.r28.s64;
	// add r27,r11,r5
	ctx.r27.u64 = ctx.r11.u64 + ctx.r5.u64;
	// ble cr6,0x832f186c
	if (!ctx.cr6.gt) goto loc_832F186C;
	// lbz r11,3(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 3);
	// extsb r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	// cmpw cr6,r11,r7
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r7.s32, ctx.xer);
	// ble cr6,0x832f1838
	if (!ctx.cr6.gt) goto loc_832F1838;
loc_832F1830:
	// li r3,-1
	ctx.r3.s64 = -1;
	// b 0x832f190c
	goto loc_832F190C;
loc_832F1838:
	// li r9,0
	ctx.r9.s64 = 0;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x832f1908
	if (!ctx.cr6.gt) goto loc_832F1908;
	// addi r11,r6,-4
	ctx.r11.s64 = ctx.r6.s64 + -4;
	// addi r10,r31,12
	ctx.r10.s64 = ctx.r31.s64 + 12;
loc_832F184C:
	// lwzu r8,4(r11)
	ea = 4 + ctx.r11.u32;
	ctx.r8.u64 = PPC_LOAD_U32(ea);
	ctx.r11.u32 = ea;
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// stwu r8,4(r10)
	ea = 4 + ctx.r10.u32;
	PPC_STORE_U32(ea, ctx.r8.u32);
	ctx.r10.u32 = ea;
	// lbz r8,3(r31)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r31.u32 + 3);
	// extsb r8,r8
	ctx.r8.s64 = ctx.r8.s8;
	// cmpw cr6,r9,r8
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r8.s32, ctx.xer);
	// blt cr6,0x832f184c
	if (ctx.cr6.lt) goto loc_832F184C;
	// b 0x832f1908
	goto loc_832F1908;
loc_832F186C:
	// lwz r11,628(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 628);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x832f1880
	if (!ctx.cr6.eq) goto loc_832F1880;
	// li r30,16640
	ctx.r30.s64 = 16640;
	// b 0x832f1894
	goto loc_832F1894;
loc_832F1880:
	// lbz r11,2(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 2);
	// extsb r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	// mulli r11,r11,16576
	ctx.r11.s64 = ctx.r11.s64 * 16576;
	// addi r11,r11,127
	ctx.r11.s64 = ctx.r11.s64 + 127;
	// rlwinm r30,r11,0,0,25
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFC0;
loc_832F1894:
	// lbz r11,3(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 3);
	// li r26,0
	ctx.r26.s64 = 0;
	// extsb. r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble 0x832f1908
	if (!ctx.cr0.gt) goto loc_832F1908;
	// addi r29,r31,16
	ctx.r29.s64 = ctx.r31.s64 + 16;
loc_832F18A8:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// subf. r27,r30,r27
	ctx.r27.s64 = ctx.r27.s64 - ctx.r30.s64;
	ctx.cr0.compare<int32_t>(ctx.r27.s32, 0, ctx.xer);
	// add r28,r30,r28
	ctx.r28.u64 = ctx.r30.u64 + ctx.r28.u64;
	// blt 0x832f1830
	if (ctx.cr0.lt) goto loc_832F1830;
	// lwz r11,628(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 628);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x832f18d0
	if (!ctx.cr6.eq) goto loc_832F18D0;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x832f71c8
	ctx.lr = 0x832F18CC;
	sub_832F71C8(ctx, base);
	// b 0x832f18e4
	goto loc_832F18E4;
loc_832F18D0:
	// lbz r11,2(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 2);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// extsb r3,r11
	ctx.r3.s64 = ctx.r11.s8;
	// bl 0x832f7188
	ctx.lr = 0x832F18E4;
	sub_832F7188(ctx, base);
loc_832F18E4:
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// stw r3,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r3.u32);
	// beq 0x832f1830
	if (ctx.cr0.eq) goto loc_832F1830;
	// lbz r11,3(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 3);
	// addi r26,r26,1
	ctx.r26.s64 = ctx.r26.s64 + 1;
	// addi r29,r29,4
	ctx.r29.s64 = ctx.r29.s64 + 4;
	// extsb r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	// cmpw cr6,r26,r11
	ctx.cr6.compare<int32_t>(ctx.r26.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x832f18a8
	if (ctx.cr6.lt) goto loc_832F18A8;
loc_832F1908:
	// li r3,0
	ctx.r3.s64 = 0;
loc_832F190C:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x833a01f0
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832F1914"))) PPC_WEAK_FUNC(sub_832F1914);
PPC_FUNC_IMPL(__imp__sub_832F1914) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832F1918"))) PPC_WEAK_FUNC(sub_832F1918);
PPC_FUNC_IMPL(__imp__sub_832F1918) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r3,8(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// bl 0x83301640
	ctx.lr = 0x832F1938;
	sub_83301640(ctx, base);
	// lbz r11,3(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 3);
	// extsb r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	// cmpw cr6,r3,r11
	ctx.cr6.compare<int32_t>(ctx.r3.s32, ctx.r11.s32, ctx.xer);
	// ble cr6,0x832f195c
	if (!ctx.cr6.gt) goto loc_832F195C;
	// lis r11,-32210
	ctx.r11.s64 = -2110914560;
	// addi r3,r11,-24672
	ctx.r3.s64 = ctx.r11.s64 + -24672;
	// bl 0x833026b0
	ctx.lr = 0x832F1954;
	sub_833026B0(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x832f1984
	goto loc_832F1984;
loc_832F195C:
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// ble cr6,0x832f1980
	if (!ctx.cr6.gt) goto loc_832F1980;
	// addi r31,r31,148
	ctx.r31.s64 = ctx.r31.s64 + 148;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
loc_832F196C:
	// lwz r3,-132(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -132);
	// lwzu r4,4(r31)
	ea = 4 + ctx.r31.u32;
	ctx.r4.u64 = PPC_LOAD_U32(ea);
	ctx.r31.u32 = ea;
	// bl 0x832f7220
	ctx.lr = 0x832F1978;
	sub_832F7220(ctx, base);
	// addic. r30,r30,-1
	ctx.xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// bne 0x832f196c
	if (!ctx.cr0.eq) goto loc_832F196C;
loc_832F1980:
	// li r3,1
	ctx.r3.s64 = 1;
loc_832F1984:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_832F199C"))) PPC_WEAK_FUNC(sub_832F199C);
PPC_FUNC_IMPL(__imp__sub_832F199C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832F19A0"))) PPC_WEAK_FUNC(sub_832F19A0);
PPC_FUNC_IMPL(__imp__sub_832F19A0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x833a01a8
	ctx.lr = 0x832F19A8;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x832f19c8
	if (!ctx.cr6.eq) goto loc_832F19C8;
	// lis r11,-32210
	ctx.r11.s64 = -2110914560;
	// addi r3,r11,-24600
	ctx.r3.s64 = ctx.r11.s64 + -24600;
	// bl 0x833026b0
	ctx.lr = 0x832F19C4;
	sub_833026B0(ctx, base);
	// b 0x832f1a5c
	goto loc_832F1A5C;
loc_832F19C8:
	// lbz r11,3(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 3);
	// li r28,0
	ctx.r28.s64 = 0;
	// extsb. r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// mr r30,r28
	ctx.r30.u64 = ctx.r28.u64;
	// ble 0x832f19fc
	if (!ctx.cr0.gt) goto loc_832F19FC;
	// addi r29,r31,12
	ctx.r29.s64 = ctx.r31.s64 + 12;
loc_832F19E0:
	// lwzu r3,4(r29)
	ea = 4 + ctx.r29.u32;
	ctx.r3.u64 = PPC_LOAD_U32(ea);
	ctx.r29.u32 = ea;
	// bl 0x832f63e0
	ctx.lr = 0x832F19E8;
	sub_832F63E0(ctx, base);
	// lbz r11,3(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 3);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// extsb r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	// cmpw cr6,r30,r11
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x832f19e0
	if (ctx.cr6.lt) goto loc_832F19E0;
loc_832F19FC:
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x832f1a0c
	if (ctx.cr6.eq) goto loc_832F1A0C;
	// bl 0x832f4ec8
	ctx.lr = 0x832F1A0C;
	sub_832F4EC8(ctx, base);
loc_832F1A0C:
	// bl 0x82c10e98
	ctx.lr = 0x832F1A10;
	sub_82C10E98(ctx, base);
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x832f1a20
	if (ctx.cr6.eq) goto loc_832F1A20;
	// bl 0x83301610
	ctx.lr = 0x832F1A20;
	sub_83301610(ctx, base);
loc_832F1A20:
	// lwz r11,484(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 484);
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// bne cr6,0x832f1a4c
	if (!ctx.cr6.eq) goto loc_832F1A4C;
	// lwz r3,148(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 148);
	// stw r28,148(r31)
	PPC_STORE_U32(ctx.r31.u32 + 148, ctx.r28.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x832f1a4c
	if (ctx.cr6.eq) goto loc_832F1A4C;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x832F1A4C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_832F1A4C:
	// stw r28,148(r31)
	PPC_STORE_U32(ctx.r31.u32 + 148, ctx.r28.u32);
	// stb r28,1(r31)
	PPC_STORE_U8(ctx.r31.u32 + 1, ctx.r28.u8);
	// stw r28,432(r31)
	PPC_STORE_U32(ctx.r31.u32 + 432, ctx.r28.u32);
	// bl 0x82c10e98
	ctx.lr = 0x832F1A5C;
	sub_82C10E98(ctx, base);
loc_832F1A5C:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x833a01f8
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832F1A64"))) PPC_WEAK_FUNC(sub_832F1A64);
PPC_FUNC_IMPL(__imp__sub_832F1A64) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832F1A68"))) PPC_WEAK_FUNC(sub_832F1A68);
PPC_FUNC_IMPL(__imp__sub_832F1A68) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x833011a8
	ctx.lr = 0x832F1A80;
	sub_833011A8(ctx, base);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne cr6,0x832f1a9c
	if (!ctx.cr6.eq) goto loc_832F1A9C;
	// lis r11,-32210
	ctx.r11.s64 = -2110914560;
	// addi r3,r11,-25088
	ctx.r3.s64 = ctx.r11.s64 + -25088;
	// bl 0x833026b0
	ctx.lr = 0x832F1A94;
	sub_833026B0(ctx, base);
	// li r31,-1
	ctx.r31.s64 = -1;
	// b 0x832f1aa4
	goto loc_832F1AA4;
loc_832F1A9C:
	// lbz r11,1(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 1);
	// extsb r31,r11
	ctx.r31.s64 = ctx.r11.s8;
loc_832F1AA4:
	// bl 0x833026b8
	ctx.lr = 0x832F1AA8;
	sub_833026B8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_832F1AC0"))) PPC_WEAK_FUNC(sub_832F1AC0);
PPC_FUNC_IMPL(__imp__sub_832F1AC0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x833a01a8
	ctx.lr = 0x832F1AC8;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// bl 0x833011a8
	ctx.lr = 0x832F1ADC;
	sub_833011A8(ctx, base);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne cr6,0x832f1af4
	if (!ctx.cr6.eq) goto loc_832F1AF4;
	// lis r11,-32210
	ctx.r11.s64 = -2110914560;
	// addi r3,r11,-25048
	ctx.r3.s64 = ctx.r11.s64 + -25048;
	// bl 0x833026b0
	ctx.lr = 0x832F1AF0;
	sub_833026B0(ctx, base);
	// b 0x832f1b84
	goto loc_832F1B84;
loc_832F1AF4:
	// li r29,0
	ctx.r29.s64 = 0;
	// lwz r3,16(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// stw r29,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r29.u32);
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// stw r29,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r29.u32);
	// bl 0x832f6470
	ctx.lr = 0x832F1B10;
	sub_832F6470(ctx, base);
	// lwz r3,16(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// bl 0x832f6418
	ctx.lr = 0x832F1B18;
	sub_832F6418(ctx, base);
	// lwz r9,80(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmpwi cr6,r9,1
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 1, ctx.xer);
	// bne cr6,0x832f1b34
	if (!ctx.cr6.eq) goto loc_832F1B34;
	// lwz r11,636(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 636);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x832f1b34
	if (!ctx.cr6.gt) goto loc_832F1B34;
	// mr r9,r11
	ctx.r9.u64 = ctx.r11.u64;
loc_832F1B34:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x832f1b78
	if (ctx.cr6.eq) goto loc_832F1B78;
	// cmpwi cr6,r9,1
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 1, ctx.xer);
	// bgt cr6,0x832f1b4c
	if (ctx.cr6.gt) goto loc_832F1B4C;
	// stw r29,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r29.u32);
	// b 0x832f1b78
	goto loc_832F1B78;
loc_832F1B4C:
	// lwz r11,632(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 632);
	// cmpwi cr6,r3,3
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 3, ctx.xer);
	// lwz r10,84(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
	// beq cr6,0x832f1b6c
	if (ctx.cr6.eq) goto loc_832F1B6C;
	// cmpwi cr6,r3,4
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 4, ctx.xer);
	// bne cr6,0x832f1b78
	if (!ctx.cr6.eq) goto loc_832F1B78;
loc_832F1B6C:
	// lwz r10,652(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 652);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
loc_832F1B78:
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// beq cr6,0x832f1b84
	if (ctx.cr6.eq) goto loc_832F1B84;
	// stw r9,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r9.u32);
loc_832F1B84:
	// bl 0x833026b8
	ctx.lr = 0x832F1B88;
	sub_833026B8(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x833a01f8
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832F1B90"))) PPC_WEAK_FUNC(sub_832F1B90);
PPC_FUNC_IMPL(__imp__sub_832F1B90) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// bl 0x833011a8
	ctx.lr = 0x832F1BB0;
	sub_833011A8(ctx, base);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne cr6,0x832f1bcc
	if (!ctx.cr6.eq) goto loc_832F1BCC;
	// lis r11,-32210
	ctx.r11.s64 = -2110914560;
	// addi r3,r11,-24956
	ctx.r3.s64 = ctx.r11.s64 + -24956;
loc_832F1BC0:
	// bl 0x833026b0
	ctx.lr = 0x832F1BC4;
	sub_833026B0(ctx, base);
	// li r31,0
	ctx.r31.s64 = 0;
	// b 0x832f1bec
	goto loc_832F1BEC;
loc_832F1BCC:
	// cmpwi cr6,r30,32
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 32, ctx.xer);
	// blt cr6,0x832f1be0
	if (ctx.cr6.lt) goto loc_832F1BE0;
	// lis r11,-32210
	ctx.r11.s64 = -2110914560;
	// addi r3,r11,-25008
	ctx.r3.s64 = ctx.r11.s64 + -25008;
	// b 0x832f1bc0
	goto loc_832F1BC0;
loc_832F1BE0:
	// addi r11,r30,4
	ctx.r11.s64 = ctx.r30.s64 + 4;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r31,r11,r31
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r31.u32);
loc_832F1BEC:
	// bl 0x833026b8
	ctx.lr = 0x832F1BF0;
	sub_833026B8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_832F1C0C"))) PPC_WEAK_FUNC(sub_832F1C0C);
PPC_FUNC_IMPL(__imp__sub_832F1C0C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832F1C10"))) PPC_WEAK_FUNC(sub_832F1C10);
PPC_FUNC_IMPL(__imp__sub_832F1C10) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// bl 0x833011a8
	ctx.lr = 0x832F1C30;
	sub_833011A8(ctx, base);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne cr6,0x832f1c48
	if (!ctx.cr6.eq) goto loc_832F1C48;
	// lis r11,-32210
	ctx.r11.s64 = -2110914560;
	// addi r3,r11,-24916
	ctx.r3.s64 = ctx.r11.s64 + -24916;
	// bl 0x833026b0
	ctx.lr = 0x832F1C44;
	sub_833026B0(ctx, base);
	// b 0x832f1c4c
	goto loc_832F1C4C;
loc_832F1C48:
	// stb r30,437(r31)
	PPC_STORE_U8(ctx.r31.u32 + 437, ctx.r30.u8);
loc_832F1C4C:
	// bl 0x833026b8
	ctx.lr = 0x832F1C50;
	sub_833026B8(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_832F1C68"))) PPC_WEAK_FUNC(sub_832F1C68);
PPC_FUNC_IMPL(__imp__sub_832F1C68) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x833a01a8
	ctx.lr = 0x832F1C70;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,484(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 484);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x832f1c8c
	if (ctx.cr6.eq) goto loc_832F1C8C;
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x832f1d4c
	if (!ctx.cr6.eq) goto loc_832F1D4C;
loc_832F1C8C:
	// lbz r11,437(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 437);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x832f1cb0
	if (!ctx.cr0.eq) goto loc_832F1CB0;
	// lbz r11,436(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 436);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x832f1cb0
	if (!ctx.cr0.eq) goto loc_832F1CB0;
	// lbz r11,439(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 439);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x832f1d4c
	if (ctx.cr0.eq) goto loc_832F1D4C;
loc_832F1CB0:
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// bl 0x833000f0
	ctx.lr = 0x832F1CB8;
	sub_833000F0(ctx, base);
	// cmpwi cr6,r3,2
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 2, ctx.xer);
	// bne cr6,0x832f1d4c
	if (!ctx.cr6.eq) goto loc_832F1D4C;
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// bl 0x83301710
	ctx.lr = 0x832F1CC8;
	sub_83301710(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x832f1d4c
	if (!ctx.cr0.eq) goto loc_832F1D4C;
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// bl 0x83301640
	ctx.lr = 0x832F1CD8;
	sub_83301640(ctx, base);
	// mr. r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// li r30,0
	ctx.r30.s64 = 0;
	// ble 0x832f1d08
	if (!ctx.cr0.gt) goto loc_832F1D08;
	// addi r29,r31,16
	ctx.r29.s64 = ctx.r31.s64 + 16;
loc_832F1CE8:
	// lwz r3,0(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// bl 0x832f6418
	ctx.lr = 0x832F1CF0;
	sub_832F6418(ctx, base);
	// cmpwi cr6,r3,5
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 5, ctx.xer);
	// bne cr6,0x832f1d08
	if (!ctx.cr6.eq) goto loc_832F1D08;
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// addi r29,r29,4
	ctx.r29.s64 = ctx.r29.s64 + 4;
	// cmpw cr6,r30,r28
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r28.s32, ctx.xer);
	// blt cr6,0x832f1ce8
	if (ctx.cr6.lt) goto loc_832F1CE8;
loc_832F1D08:
	// cmpw cr6,r30,r28
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r28.s32, ctx.xer);
	// bne cr6,0x832f1d4c
	if (!ctx.cr6.eq) goto loc_832F1D4C;
	// lis r11,-32210
	ctx.r11.s64 = -2110914560;
	// addi r3,r11,-24520
	ctx.r3.s64 = ctx.r11.s64 + -24520;
	// bl 0x833026b0
	ctx.lr = 0x832F1D1C;
	sub_833026B0(ctx, base);
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r3,16(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// bl 0x832f6470
	ctx.lr = 0x832F1D2C;
	sub_832F6470(ctx, base);
	// lwz r10,632(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 632);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stw r11,632(r31)
	PPC_STORE_U32(ctx.r31.u32 + 632, ctx.r11.u32);
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// stw r11,636(r31)
	PPC_STORE_U32(ctx.r31.u32 + 636, ctx.r11.u32);
	// bl 0x832f1918
	ctx.lr = 0x832F1D4C;
	sub_832F1918(ctx, base);
loc_832F1D4C:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x833a01f8
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832F1D54"))) PPC_WEAK_FUNC(sub_832F1D54);
PPC_FUNC_IMPL(__imp__sub_832F1D54) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832F1D58"))) PPC_WEAK_FUNC(sub_832F1D58);
PPC_FUNC_IMPL(__imp__sub_832F1D58) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// bl 0x833011a8
	ctx.lr = 0x832F1D78;
	sub_833011A8(ctx, base);
	// bl 0x82c10e98
	ctx.lr = 0x832F1D7C;
	sub_82C10E98(ctx, base);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne cr6,0x832f1d98
	if (!ctx.cr6.eq) goto loc_832F1D98;
	// lis r11,-32210
	ctx.r11.s64 = -2110914560;
	// addi r3,r11,-24712
	ctx.r3.s64 = ctx.r11.s64 + -24712;
loc_832F1D8C:
	// bl 0x833026b0
	ctx.lr = 0x832F1D90;
	sub_833026B0(ctx, base);
	// li r31,0
	ctx.r31.s64 = 0;
	// b 0x832f1db8
	goto loc_832F1DB8;
loc_832F1D98:
	// cmpwi cr6,r30,32
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 32, ctx.xer);
	// blt cr6,0x832f1dac
	if (ctx.cr6.lt) goto loc_832F1DAC;
	// lis r11,-32210
	ctx.r11.s64 = -2110914560;
	// addi r3,r11,-24764
	ctx.r3.s64 = ctx.r11.s64 + -24764;
	// b 0x832f1d8c
	goto loc_832F1D8C;
loc_832F1DAC:
	// addi r11,r30,125
	ctx.r11.s64 = ctx.r30.s64 + 125;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r31,r11,r31
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r31.u32);
loc_832F1DB8:
	// bl 0x82c10e98
	ctx.lr = 0x832F1DBC;
	sub_82C10E98(ctx, base);
	// bl 0x833026b8
	ctx.lr = 0x832F1DC0;
	sub_833026B8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_832F1DDC"))) PPC_WEAK_FUNC(sub_832F1DDC);
PPC_FUNC_IMPL(__imp__sub_832F1DDC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832F1DE0"))) PPC_WEAK_FUNC(sub_832F1DE0);
PPC_FUNC_IMPL(__imp__sub_832F1DE0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x833a01a8
	ctx.lr = 0x832F1DE8;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x832f1e08
	if (!ctx.cr6.eq) goto loc_832F1E08;
	// lis r11,-32210
	ctx.r11.s64 = -2110914560;
	// addi r3,r11,-24364
	ctx.r3.s64 = ctx.r11.s64 + -24364;
	// bl 0x833026b0
	ctx.lr = 0x832F1E04;
	sub_833026B0(ctx, base);
	// b 0x832f1f24
	goto loc_832F1F24;
loc_832F1E08:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x832f19a0
	ctx.lr = 0x832F1E10;
	sub_832F19A0(ctx, base);
	// li r28,0
	ctx.r28.s64 = 0;
	// lwz r30,12(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x832f1e3c
	if (ctx.cr6.eq) goto loc_832F1E3C;
	// stw r28,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r28.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x832f45f8
	ctx.lr = 0x832F1E34;
	sub_832F45F8(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x832f50f8
	ctx.lr = 0x832F1E3C;
	sub_832F50F8(ctx, base);
loc_832F1E3C:
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// addi r30,r31,16
	ctx.r30.s64 = ctx.r31.s64 + 16;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x832f1e88
	if (ctx.cr6.eq) goto loc_832F1E88;
	// lbz r11,3(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 3);
	// mr r29,r28
	ctx.r29.u64 = ctx.r28.u64;
	// extsb. r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble 0x832f1e88
	if (!ctx.cr0.gt) goto loc_832F1E88;
loc_832F1E5C:
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x832f1e70
	if (ctx.cr6.eq) goto loc_832F1E70;
	// stw r28,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r28.u32);
	// bl 0x832f6dc8
	ctx.lr = 0x832F1E70;
	sub_832F6DC8(ctx, base);
loc_832F1E70:
	// lbz r11,3(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 3);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// extsb r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	// cmpw cr6,r29,r11
	ctx.cr6.compare<int32_t>(ctx.r29.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x832f1e5c
	if (ctx.cr6.lt) goto loc_832F1E5C;
loc_832F1E88:
	// bl 0x82c10e98
	ctx.lr = 0x832F1E8C;
	sub_82C10E98(ctx, base);
	// lbz r11,3(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 3);
	// mr r29,r28
	ctx.r29.u64 = ctx.r28.u64;
	// extsb. r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble 0x832f1ed8
	if (!ctx.cr0.gt) goto loc_832F1ED8;
	// addi r30,r31,152
	ctx.r30.s64 = ctx.r31.s64 + 152;
loc_832F1EA0:
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x832f1ec0
	if (ctx.cr6.eq) goto loc_832F1EC0;
	// stw r28,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r28.u32);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x832F1EC0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_832F1EC0:
	// lbz r11,3(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 3);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// extsb r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	// cmpw cr6,r29,r11
	ctx.cr6.compare<int32_t>(ctx.r29.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x832f1ea0
	if (ctx.cr6.lt) goto loc_832F1EA0;
loc_832F1ED8:
	// lwz r3,144(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 144);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x832f1ef8
	if (ctx.cr6.eq) goto loc_832F1EF8;
	// stw r28,144(r31)
	PPC_STORE_U32(ctx.r31.u32 + 144, ctx.r28.u32);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x832F1EF8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_832F1EF8:
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x832f1f0c
	if (ctx.cr6.eq) goto loc_832F1F0C;
	// stw r28,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r28.u32);
	// bl 0x83301570
	ctx.lr = 0x832F1F0C;
	sub_83301570(ctx, base);
loc_832F1F0C:
	// li r5,704
	ctx.r5.s64 = 704;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x833a2b30
	ctx.lr = 0x832F1F1C;
	sub_833A2B30(ctx, base);
	// stb r28,0(r31)
	PPC_STORE_U8(ctx.r31.u32 + 0, ctx.r28.u8);
	// bl 0x82c10e98
	ctx.lr = 0x832F1F24;
	sub_82C10E98(ctx, base);
loc_832F1F24:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x833a01f8
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832F1F2C"))) PPC_WEAK_FUNC(sub_832F1F2C);
PPC_FUNC_IMPL(__imp__sub_832F1F2C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832F1F30"))) PPC_WEAK_FUNC(sub_832F1F30);
PPC_FUNC_IMPL(__imp__sub_832F1F30) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x833011a8
	ctx.lr = 0x832F1F48;
	sub_833011A8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x832f19a0
	ctx.lr = 0x832F1F50;
	sub_832F19A0(ctx, base);
	// bl 0x833026b8
	ctx.lr = 0x832F1F54;
	sub_833026B8(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_832F1F68"))) PPC_WEAK_FUNC(sub_832F1F68);
PPC_FUNC_IMPL(__imp__sub_832F1F68) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x833a01a8
	ctx.lr = 0x832F1F70;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// bl 0x833011a8
	ctx.lr = 0x832F1F80;
	sub_833011A8(ctx, base);
	// bl 0x82c10e98
	ctx.lr = 0x832F1F84;
	sub_82C10E98(ctx, base);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne cr6,0x832f1f9c
	if (!ctx.cr6.eq) goto loc_832F1F9C;
	// lis r11,-32210
	ctx.r11.s64 = -2110914560;
	// addi r3,r11,-24560
	ctx.r3.s64 = ctx.r11.s64 + -24560;
	// bl 0x833026b0
	ctx.lr = 0x832F1F98;
	sub_833026B0(ctx, base);
	// b 0x832f1fec
	goto loc_832F1FEC;
loc_832F1F9C:
	// lbz r11,1(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 1);
	// stw r28,428(r31)
	PPC_STORE_U32(ctx.r31.u32 + 428, ctx.r28.u32);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// beq cr6,0x832f1fec
	if (ctx.cr6.eq) goto loc_832F1FEC;
	// lbz r11,3(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 3);
	// li r29,0
	ctx.r29.s64 = 0;
	// extsb. r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble 0x832f1fec
	if (!ctx.cr0.gt) goto loc_832F1FEC;
	// addi r30,r31,16
	ctx.r30.s64 = ctx.r31.s64 + 16;
loc_832F1FC0:
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x832f1fd4
	if (ctx.cr6.eq) goto loc_832F1FD4;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// bl 0x832f6900
	ctx.lr = 0x832F1FD4;
	sub_832F6900(ctx, base);
loc_832F1FD4:
	// lbz r11,3(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 3);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// extsb r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	// cmpw cr6,r29,r11
	ctx.cr6.compare<int32_t>(ctx.r29.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x832f1fc0
	if (ctx.cr6.lt) goto loc_832F1FC0;
loc_832F1FEC:
	// bl 0x82c10e98
	ctx.lr = 0x832F1FF0;
	sub_82C10E98(ctx, base);
	// bl 0x833026b8
	ctx.lr = 0x832F1FF4;
	sub_833026B8(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x833a01f8
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832F1FFC"))) PPC_WEAK_FUNC(sub_832F1FFC);
PPC_FUNC_IMPL(__imp__sub_832F1FFC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832F2000"))) PPC_WEAK_FUNC(sub_832F2000);
PPC_FUNC_IMPL(__imp__sub_832F2000) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x833a0198
	ctx.lr = 0x832F2008;
	__savegprlr_24(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r25,0
	ctx.r25.s64 = 0;
	// lwz r27,8(r3)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r25,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r25.u32);
	// addi r26,r3,16
	ctx.r26.s64 = ctx.r3.s64 + 16;
	// stw r25,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r25.u32);
	// bl 0x832f1298
	ctx.lr = 0x832F2028;
	sub_832F1298(ctx, base);
	// lbz r11,1(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 1);
	// li r24,4
	ctx.r24.s64 = 4;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// bne cr6,0x832f24ac
	if (!ctx.cr6.eq) goto loc_832F24AC;
	// lbz r11,3(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 3);
	// mr r29,r25
	ctx.r29.u64 = ctx.r25.u64;
	// extsb. r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble 0x832f2078
	if (!ctx.cr0.gt) goto loc_832F2078;
	// mr r30,r26
	ctx.r30.u64 = ctx.r26.u64;
loc_832F204C:
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x832f2060
	if (ctx.cr6.eq) goto loc_832F2060;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x832f6900
	ctx.lr = 0x832F2060;
	sub_832F6900(ctx, base);
loc_832F2060:
	// lbz r11,3(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 3);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// extsb r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	// cmpw cr6,r29,r11
	ctx.cr6.compare<int32_t>(ctx.r29.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x832f204c
	if (ctx.cr6.lt) goto loc_832F204C;
loc_832F2078:
	// lwz r11,432(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 432);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x832f2380
	if (!ctx.cr6.eq) goto loc_832F2380;
	// lwz r11,484(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 484);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x832f213c
	if (ctx.cr6.eq) goto loc_832F213C;
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x832f213c
	if (ctx.cr6.eq) goto loc_832F213C;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x833000f0
	ctx.lr = 0x832F20A0;
	sub_833000F0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x832f2128
	if (!ctx.cr0.eq) goto loc_832F2128;
	// lbz r11,3(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 3);
	// mr r30,r25
	ctx.r30.u64 = ctx.r25.u64;
	// extsb. r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble 0x832f20e4
	if (!ctx.cr0.gt) goto loc_832F20E4;
	// addi r29,r31,148
	ctx.r29.s64 = ctx.r31.s64 + 148;
loc_832F20BC:
	// lwzu r3,4(r29)
	ea = 4 + ctx.r29.u32;
	ctx.r3.u64 = PPC_LOAD_U32(ea);
	ctx.r29.u32 = ea;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,20(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x832F20D0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lbz r11,3(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 3);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// extsb r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	// cmpw cr6,r30,r11
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x832f20bc
	if (ctx.cr6.lt) goto loc_832F20BC;
loc_832F20E4:
	// lbz r11,436(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 436);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// beq cr6,0x832f2108
	if (ctx.cr6.eq) goto loc_832F2108;
	// lbz r11,437(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 437);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// beq cr6,0x832f2108
	if (ctx.cr6.eq) goto loc_832F2108;
	// lbz r11,439(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 439);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// bne cr6,0x832f2114
	if (!ctx.cr6.eq) goto loc_832F2114;
loc_832F2108:
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x83301630
	ctx.lr = 0x832F2114;
	sub_83301630(ctx, base);
loc_832F2114:
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x833015b8
	ctx.lr = 0x832F211C;
	sub_833015B8(ctx, base);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x83301848
	ctx.lr = 0x832F2124;
	sub_83301848(ctx, base);
	// b 0x832f24ac
	goto loc_832F24AC;
loc_832F2128:
	// cmpwi cr6,r3,2
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 2, ctx.xer);
	// beq cr6,0x832f235c
	if (ctx.cr6.eq) goto loc_832F235C;
loc_832F2130:
	// cmpwi cr6,r3,4
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 4, ctx.xer);
	// bne cr6,0x832f24ac
	if (!ctx.cr6.eq) goto loc_832F24AC;
	// b 0x832f236c
	goto loc_832F236C;
loc_832F213C:
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// bl 0x832f4510
	ctx.lr = 0x832F2144;
	sub_832F4510(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// bl 0x82c10e98
	ctx.lr = 0x832F214C;
	sub_82C10E98(ctx, base);
	// lbz r11,438(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 438);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// bne cr6,0x832f2174
	if (!ctx.cr6.eq) goto loc_832F2174;
	// cmpwi cr6,r30,2
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 2, ctx.xer);
	// beq cr6,0x832f2174
	if (ctx.cr6.eq) goto loc_832F2174;
	// stb r25,438(r31)
	PPC_STORE_U8(ctx.r31.u32 + 438, ctx.r25.u8);
	// bl 0x82c10e98
	ctx.lr = 0x832F2168;
	sub_82C10E98(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x832f11b8
	ctx.lr = 0x832F2170;
	sub_832F11B8(ctx, base);
	// b 0x832f2178
	goto loc_832F2178;
loc_832F2174:
	// bl 0x82c10e98
	ctx.lr = 0x832F2178;
	sub_82C10E98(ctx, base);
loc_832F2178:
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x833000f0
	ctx.lr = 0x832F2180;
	sub_833000F0(ctx, base);
	// cmpwi cr6,r3,2
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 2, ctx.xer);
	// bne cr6,0x832f2130
	if (!ctx.cr6.eq) goto loc_832F2130;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x83301640
	ctx.lr = 0x832F2190;
	sub_83301640(ctx, base);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x83301710
	ctx.lr = 0x832F2198;
	sub_83301710(ctx, base);
	// cmplwi cr6,r3,1
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 1, ctx.xer);
	// blt cr6,0x832f222c
	if (ctx.cr6.lt) goto loc_832F222C;
	// bne cr6,0x832f220c
	if (!ctx.cr6.eq) goto loc_832F220C;
	// li r4,-1
	ctx.r4.s64 = -1;
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// bl 0x832f4628
	ctx.lr = 0x832F21B0;
	sub_832F4628(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x83301628
	ctx.lr = 0x832F21BC;
	sub_83301628(ctx, base);
	// lbz r11,436(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 436);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// beq cr6,0x832f21e0
	if (ctx.cr6.eq) goto loc_832F21E0;
	// lbz r11,437(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 437);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// beq cr6,0x832f21e0
	if (ctx.cr6.eq) goto loc_832F21E0;
	// lbz r11,439(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 439);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// bne cr6,0x832f21ec
	if (!ctx.cr6.eq) goto loc_832F21EC;
loc_832F21E0:
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x83301630
	ctx.lr = 0x832F21EC;
	sub_83301630(ctx, base);
loc_832F21EC:
	// lwz r3,0(r26)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x832f2218
	if (ctx.cr6.eq) goto loc_832F2218;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x832f6a20
	ctx.lr = 0x832F2200;
	sub_832F6A20(ctx, base);
	// lwz r4,152(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 152);
	// lwz r3,0(r26)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// bl 0x832f7220
	ctx.lr = 0x832F220C;
	sub_832F7220(ctx, base);
loc_832F220C:
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,432(r31)
	PPC_STORE_U32(ctx.r31.u32 + 432, ctx.r11.u32);
	// b 0x832f24ac
	goto loc_832F24AC;
loc_832F2218:
	// lis r11,-32210
	ctx.r11.s64 = -2110914560;
	// addi r3,r11,-24280
	ctx.r3.s64 = ctx.r11.s64 + -24280;
	// bl 0x833026b0
	ctx.lr = 0x832F2224;
	sub_833026B0(ctx, base);
	// stb r24,1(r31)
	PPC_STORE_U8(ctx.r31.u32 + 1, ctx.r24.u8);
	// b 0x832f220c
	goto loc_832F220C;
loc_832F222C:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x832f13a0
	ctx.lr = 0x832F2234;
	sub_832F13A0(ctx, base);
	// mr. r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// stw r30,448(r31)
	PPC_STORE_U32(ctx.r31.u32 + 448, ctx.r30.u32);
	// blt 0x832f2374
	if (ctx.cr0.lt) goto loc_832F2374;
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// bl 0x83301690
	ctx.lr = 0x832F2248;
	sub_83301690(ctx, base);
	// cmpw cr6,r30,r3
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r3.s32, ctx.xer);
	// bge cr6,0x832f2374
	if (!ctx.cr6.lt) goto loc_832F2374;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x833016d8
	ctx.lr = 0x832F2264;
	sub_833016D8(ctx, base);
	// lwz r11,444(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 444);
	// li r28,1
	ctx.r28.s64 = 1;
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// ble cr6,0x832f22c0
	if (!ctx.cr6.gt) goto loc_832F22C0;
	// addi r29,r30,1
	ctx.r29.s64 = ctx.r30.s64 + 1;
loc_832F2278:
	// lwz r11,460(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 460);
	// cmpw cr6,r29,r11
	ctx.cr6.compare<int32_t>(ctx.r29.s32, ctx.r11.s32, ctx.xer);
	// bgt cr6,0x832f22b0
	if (ctx.cr6.gt) goto loc_832F22B0;
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// addi r6,r1,84
	ctx.r6.s64 = ctx.r1.s64 + 84;
	// addi r5,r1,92
	ctx.r5.s64 = ctx.r1.s64 + 92;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// bl 0x833016d8
	ctx.lr = 0x832F22A0;
	sub_833016D8(ctx, base);
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
loc_832F22B0:
	// lwz r11,444(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 444);
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// cmpw cr6,r28,r11
	ctx.cr6.compare<int32_t>(ctx.r28.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x832f2278
	if (ctx.cr6.lt) goto loc_832F2278;
loc_832F22C0:
	// stw r30,448(r31)
	PPC_STORE_U32(ctx.r31.u32 + 448, ctx.r30.u32);
	// lwz r11,88(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// srawi r11,r11,11
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x7FF) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 11;
	// addze r4,r11
	temp.s64 = ctx.r11.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r11.u32;
	ctx.r4.s64 = temp.s64;
	// bl 0x832f4550
	ctx.lr = 0x832F22D8;
	sub_832F4550(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r10,88(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// srawi r11,r11,11
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x7FF) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 11;
	// addze r4,r11
	temp.s64 = ctx.r11.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r11.u32;
	ctx.r4.s64 = temp.s64;
	// bl 0x832f4628
	ctx.lr = 0x832F22F4;
	sub_832F4628(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x83301628
	ctx.lr = 0x832F2300;
	sub_83301628(ctx, base);
	// lbz r11,436(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 436);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// beq cr6,0x832f2324
	if (ctx.cr6.eq) goto loc_832F2324;
	// lbz r11,437(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 437);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// beq cr6,0x832f2324
	if (ctx.cr6.eq) goto loc_832F2324;
	// lbz r11,439(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 439);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// bne cr6,0x832f2330
	if (!ctx.cr6.eq) goto loc_832F2330;
loc_832F2324:
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x83301630
	ctx.lr = 0x832F2330;
	sub_83301630(ctx, base);
loc_832F2330:
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// bl 0x83301640
	ctx.lr = 0x832F2338;
	sub_83301640(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// ble 0x832f235c
	if (!ctx.cr0.gt) goto loc_832F235C;
	// addi r29,r26,-4
	ctx.r29.s64 = ctx.r26.s64 + -4;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
loc_832F2348:
	// li r4,1
	ctx.r4.s64 = 1;
	// lwzu r3,4(r29)
	ea = 4 + ctx.r29.u32;
	ctx.r3.u64 = PPC_LOAD_U32(ea);
	ctx.r29.u32 = ea;
	// bl 0x832f6a20
	ctx.lr = 0x832F2354;
	sub_832F6A20(ctx, base);
	// addic. r30,r30,-1
	ctx.xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// bne 0x832f2348
	if (!ctx.cr0.eq) goto loc_832F2348;
loc_832F235C:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x832f1918
	ctx.lr = 0x832F2364;
	sub_832F1918(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x832f220c
	if (!ctx.cr0.eq) goto loc_832F220C;
loc_832F236C:
	// li r11,4
	ctx.r11.s64 = 4;
	// b 0x832f2378
	goto loc_832F2378;
loc_832F2374:
	// li r11,3
	ctx.r11.s64 = 3;
loc_832F2378:
	// stb r11,1(r31)
	PPC_STORE_U8(ctx.r31.u32 + 1, ctx.r11.u8);
	// b 0x832f25a4
	goto loc_832F25A4;
loc_832F2380:
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x83301710
	ctx.lr = 0x832F2388;
	sub_83301710(ctx, base);
	// cmplwi cr6,r3,1
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 1, ctx.xer);
	// blt cr6,0x832f23a0
	if (ctx.cr6.lt) goto loc_832F23A0;
	// bne cr6,0x832f24ac
	if (!ctx.cr6.eq) goto loc_832F24AC;
	// li r11,2
	ctx.r11.s64 = 2;
	// stb r11,1(r31)
	PPC_STORE_U8(ctx.r31.u32 + 1, ctx.r11.u8);
	// b 0x832f24ac
	goto loc_832F24AC;
loc_832F23A0:
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// bl 0x83301640
	ctx.lr = 0x832F23A8;
	sub_83301640(ctx, base);
	// mr. r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// mr r30,r25
	ctx.r30.u64 = ctx.r25.u64;
	// ble 0x832f23e4
	if (!ctx.cr0.gt) goto loc_832F23E4;
	// mr r29,r26
	ctx.r29.u64 = ctx.r26.u64;
loc_832F23B8:
	// lwz r3,0(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// bl 0x832f6418
	ctx.lr = 0x832F23C0;
	sub_832F6418(ctx, base);
	// cmpwi cr6,r3,6
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 6, ctx.xer);
	// bne cr6,0x832f23cc
	if (!ctx.cr6.eq) goto loc_832F23CC;
	// stb r24,1(r31)
	PPC_STORE_U8(ctx.r31.u32 + 1, ctx.r24.u8);
loc_832F23CC:
	// cmpwi cr6,r3,3
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 3, ctx.xer);
	// bne cr6,0x832f23e4
	if (!ctx.cr6.eq) goto loc_832F23E4;
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// addi r29,r29,4
	ctx.r29.s64 = ctx.r29.s64 + 4;
	// cmpw cr6,r30,r28
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r28.s32, ctx.xer);
	// blt cr6,0x832f23b8
	if (ctx.cr6.lt) goto loc_832F23B8;
loc_832F23E4:
	// cmpw cr6,r30,r28
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r28.s32, ctx.xer);
	// bne cr6,0x832f24ac
	if (!ctx.cr6.eq) goto loc_832F24AC;
	// bl 0x82c10e98
	ctx.lr = 0x832F23F0;
	sub_82C10E98(ctx, base);
	// lwz r11,428(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 428);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x832f243c
	if (!ctx.cr6.eq) goto loc_832F243C;
	// lbz r11,3(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 3);
	// mr r29,r25
	ctx.r29.u64 = ctx.r25.u64;
	// extsb. r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble 0x832f243c
	if (!ctx.cr0.gt) goto loc_832F243C;
	// mr r30,r26
	ctx.r30.u64 = ctx.r26.u64;
loc_832F2410:
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x832f2424
	if (ctx.cr6.eq) goto loc_832F2424;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x832f6900
	ctx.lr = 0x832F2424;
	sub_832F6900(ctx, base);
loc_832F2424:
	// lbz r11,3(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 3);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// extsb r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	// cmpw cr6,r29,r11
	ctx.cr6.compare<int32_t>(ctx.r29.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x832f2410
	if (ctx.cr6.lt) goto loc_832F2410;
loc_832F243C:
	// lis r11,-32230
	ctx.r11.s64 = -2112225280;
	// lfs f13,492(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 492);
	ctx.f13.f64 = double(temp.f32);
	// li r10,2
	ctx.r10.s64 = 2;
	// stw r25,432(r31)
	PPC_STORE_U32(ctx.r31.u32 + 432, ctx.r25.u32);
	// stb r10,1(r31)
	PPC_STORE_U8(ctx.r31.u32 + 1, ctx.r10.u8);
	// lfs f0,24284(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 24284);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// beq cr6,0x832f2494
	if (ctx.cr6.eq) goto loc_832F2494;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x832f0f70
	ctx.lr = 0x832F2464;
	sub_832F0F70(ctx, base);
	// extsw r11,r3
	ctx.r11.s64 = ctx.r3.s32;
	// lfs f0,492(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 492);
	ctx.f0.f64 = double(temp.f32);
	// lwz r5,284(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 284);
	// std r11,96(r1)
	PPC_STORE_U64(ctx.r1.u32 + 96, ctx.r11.u64);
	// lfd f13,96(r1)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 96);
	// fcfid f13,f13
	ctx.f13.f64 = double(ctx.f13.s64);
	// frsp f13,f13
	ctx.f13.f64 = double(float(ctx.f13.f64));
	// fmuls f0,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// fctiwz f0,f0
	ctx.f0.s64 = (ctx.f0.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f0.f64));
	// stfd f0,96(r1)
	PPC_STORE_U64(ctx.r1.u32 + 96, ctx.f0.u64);
	// lwz r4,100(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// b 0x832f24a0
	goto loc_832F24A0;
loc_832F2494:
	// lwz r5,284(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 284);
	// srawi r11,r5,1
	ctx.xer.ca = (ctx.r5.s32 < 0) & ((ctx.r5.u32 & 0x1) != 0);
	ctx.r11.s64 = ctx.r5.s32 >> 1;
	// addze r4,r11
	temp.s64 = ctx.r11.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r11.u32;
	ctx.r4.s64 = temp.s64;
loc_832F24A0:
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// bl 0x832f4d20
	ctx.lr = 0x832F24A8;
	sub_832F4D20(ctx, base);
	// bl 0x82c10e98
	ctx.lr = 0x832F24AC;
	sub_82C10E98(ctx, base);
loc_832F24AC:
	// lbz r11,1(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 1);
	// cmplwi cr6,r11,2
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 2, ctx.xer);
	// bne cr6,0x832f2578
	if (!ctx.cr6.eq) goto loc_832F2578;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x83301710
	ctx.lr = 0x832F24C0;
	sub_83301710(ctx, base);
	// cmplwi cr6,r3,1
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 1, ctx.xer);
	// blt cr6,0x832f24fc
	if (ctx.cr6.lt) goto loc_832F24FC;
	// beq cr6,0x832f24d4
	if (ctx.cr6.eq) goto loc_832F24D4;
	// stb r24,1(r31)
	PPC_STORE_U8(ctx.r31.u32 + 1, ctx.r24.u8);
	// b 0x832f2578
	goto loc_832F2578;
loc_832F24D4:
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// bl 0x832f4510
	ctx.lr = 0x832F24DC;
	sub_832F4510(ctx, base);
	// cmpwi cr6,r3,2
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 2, ctx.xer);
	// beq cr6,0x832f2578
	if (ctx.cr6.eq) goto loc_832F2578;
	// lwz r3,0(r26)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// bl 0x832f6418
	ctx.lr = 0x832F24EC;
	sub_832F6418(ctx, base);
	// cmpwi cr6,r3,5
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 5, ctx.xer);
	// beq cr6,0x832f2570
	if (ctx.cr6.eq) goto loc_832F2570;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// b 0x832f256c
	goto loc_832F256C;
loc_832F24FC:
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x833000f0
	ctx.lr = 0x832F2504;
	sub_833000F0(ctx, base);
	// cmpwi cr6,r3,3
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 3, ctx.xer);
	// bne cr6,0x832f2578
	if (!ctx.cr6.eq) goto loc_832F2578;
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// bl 0x833000f0
	ctx.lr = 0x832F2514;
	sub_833000F0(ctx, base);
	// cmpwi cr6,r3,3
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 3, ctx.xer);
	// bne cr6,0x832f2578
	if (!ctx.cr6.eq) goto loc_832F2578;
	// lbz r11,3(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 3);
	// mr r30,r25
	ctx.r30.u64 = ctx.r25.u64;
	// extsb. r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble 0x832f2560
	if (!ctx.cr0.gt) goto loc_832F2560;
	// mr r29,r26
	ctx.r29.u64 = ctx.r26.u64;
loc_832F2530:
	// lwz r3,0(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// bl 0x832f6418
	ctx.lr = 0x832F2538;
	sub_832F6418(ctx, base);
	// cmpwi cr6,r3,5
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 5, ctx.xer);
	// beq cr6,0x832f2548
	if (ctx.cr6.eq) goto loc_832F2548;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x832f2560
	if (!ctx.cr6.eq) goto loc_832F2560;
loc_832F2548:
	// lbz r11,3(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 3);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// addi r29,r29,4
	ctx.r29.s64 = ctx.r29.s64 + 4;
	// extsb r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	// cmpw cr6,r30,r11
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x832f2530
	if (ctx.cr6.lt) goto loc_832F2530;
loc_832F2560:
	// lbz r11,3(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 3);
	// extsb r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	// cmpw cr6,r30,r11
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r11.s32, ctx.xer);
loc_832F256C:
	// bne cr6,0x832f2578
	if (!ctx.cr6.eq) goto loc_832F2578;
loc_832F2570:
	// li r11,3
	ctx.r11.s64 = 3;
	// stb r11,1(r31)
	PPC_STORE_U8(ctx.r31.u32 + 1, ctx.r11.u8);
loc_832F2578:
	// bl 0x82c10e98
	ctx.lr = 0x832F257C;
	sub_82C10E98(ctx, base);
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x832f2598
	if (ctx.cr6.eq) goto loc_832F2598;
	// bl 0x832f4510
	ctx.lr = 0x832F258C;
	sub_832F4510(ctx, base);
	// cmpwi cr6,r3,4
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 4, ctx.xer);
	// bne cr6,0x832f2598
	if (!ctx.cr6.eq) goto loc_832F2598;
	// stb r24,1(r31)
	PPC_STORE_U8(ctx.r31.u32 + 1, ctx.r24.u8);
loc_832F2598:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x832f1c68
	ctx.lr = 0x832F25A0;
	sub_832F1C68(ctx, base);
	// bl 0x82c10e98
	ctx.lr = 0x832F25A4;
	sub_82C10E98(ctx, base);
loc_832F25A4:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x833a01e8
	__restgprlr_24(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832F25AC"))) PPC_WEAK_FUNC(sub_832F25AC);
PPC_FUNC_IMPL(__imp__sub_832F25AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832F25B0"))) PPC_WEAK_FUNC(sub_832F25B0);
PPC_FUNC_IMPL(__imp__sub_832F25B0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x833a01ac
	ctx.lr = 0x832F25B8;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// bl 0x833011a8
	ctx.lr = 0x832F25CC;
	sub_833011A8(ctx, base);
	// bl 0x82c10e98
	ctx.lr = 0x832F25D0;
	sub_82C10E98(ctx, base);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne cr6,0x832f25e8
	if (!ctx.cr6.eq) goto loc_832F25E8;
	// lis r11,-32210
	ctx.r11.s64 = -2110914560;
	// addi r3,r11,-24404
	ctx.r3.s64 = ctx.r11.s64 + -24404;
loc_832F25E0:
	// bl 0x833026b0
	ctx.lr = 0x832F25E4;
	sub_833026B0(ctx, base);
	// b 0x832f2620
	goto loc_832F2620;
loc_832F25E8:
	// cmpwi cr6,r30,32
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 32, ctx.xer);
	// blt cr6,0x832f25fc
	if (ctx.cr6.lt) goto loc_832F25FC;
	// lis r11,-32210
	ctx.r11.s64 = -2110914560;
	// addi r3,r11,-24456
	ctx.r3.s64 = ctx.r11.s64 + -24456;
	// b 0x832f25e0
	goto loc_832F25E0;
loc_832F25FC:
	// addi r11,r30,125
	ctx.r11.s64 = ctx.r30.s64 + 125;
	// addi r10,r30,4
	ctx.r10.s64 = ctx.r30.s64 + 4;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r29,r11,r31
	PPC_STORE_U32(ctx.r11.u32 + ctx.r31.u32, ctx.r29.u32);
	// lwz r11,496(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 496);
	// add r4,r11,r29
	ctx.r4.u64 = ctx.r11.u64 + ctx.r29.u64;
	// lwzx r3,r10,r31
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r31.u32);
	// bl 0x832f6638
	ctx.lr = 0x832F2620;
	sub_832F6638(ctx, base);
loc_832F2620:
	// bl 0x82c10e98
	ctx.lr = 0x832F2624;
	sub_82C10E98(ctx, base);
	// bl 0x833026b8
	ctx.lr = 0x832F2628;
	sub_833026B8(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x833a01fc
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832F2630"))) PPC_WEAK_FUNC(sub_832F2630);
PPC_FUNC_IMPL(__imp__sub_832F2630) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x833a01ac
	ctx.lr = 0x832F2638;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-31823
	ctx.r10.s64 = -2085552128;
	// lwz r11,-31016(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -31016);
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,-31016(r10)
	PPC_STORE_U32(ctx.r10.u32 + -31016, ctx.r11.u32);
	// bne 0x832f26ec
	if (!ctx.cr0.eq) goto loc_832F26EC;
	// lis r11,-31815
	ctx.r11.s64 = -2085027840;
	// addi r30,r11,-960
	ctx.r30.s64 = ctx.r11.s64 + -960;
	// mr r31,r30
	ctx.r31.u64 = ctx.r30.u64;
loc_832F265C:
	// lbz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 0);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// bne cr6,0x832f2670
	if (!ctx.cr6.eq) goto loc_832F2670;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x832f1de0
	ctx.lr = 0x832F2670;
	sub_832F1DE0(ctx, base);
loc_832F2670:
	// addi r31,r31,704
	ctx.r31.s64 = ctx.r31.s64 + 704;
	// addi r11,r30,2816
	ctx.r11.s64 = ctx.r30.s64 + 2816;
	// cmpw cr6,r31,r11
	ctx.cr6.compare<int32_t>(ctx.r31.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x832f265c
	if (ctx.cr6.lt) goto loc_832F265C;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// li r5,2816
	ctx.r5.s64 = 2816;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x833a2b30
	ctx.lr = 0x832F2690;
	sub_833A2B30(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,2
	ctx.r3.s64 = 2;
	// bl 0x832f5930
	ctx.lr = 0x832F269C;
	sub_832F5930(ctx, base);
	// lis r11,-31823
	ctx.r11.s64 = -2085552128;
	// li r3,5
	ctx.r3.s64 = 5;
	// lwz r4,-31012(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + -31012);
	// bl 0x832f5930
	ctx.lr = 0x832F26AC;
	sub_832F5930(ctx, base);
	// bl 0x83301520
	ctx.lr = 0x832F26B0;
	sub_83301520(ctx, base);
	// bl 0x832efaa0
	ctx.lr = 0x832F26B4;
	sub_832EFAA0(ctx, base);
	// lis r11,-32210
	ctx.r11.s64 = -2110914560;
	// mr r31,r30
	ctx.r31.u64 = ctx.r30.u64;
	// addi r29,r11,-24212
	ctx.r29.s64 = ctx.r11.s64 + -24212;
loc_832F26C0:
	// lbz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 0);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x832f26dc
	if (ctx.cr0.eq) goto loc_832F26DC;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x832f5288
	ctx.lr = 0x832F26D4;
	sub_832F5288(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x832f1de0
	ctx.lr = 0x832F26DC;
	sub_832F1DE0(ctx, base);
loc_832F26DC:
	// addi r31,r31,704
	ctx.r31.s64 = ctx.r31.s64 + 704;
	// addi r11,r30,2816
	ctx.r11.s64 = ctx.r30.s64 + 2816;
	// cmpw cr6,r31,r11
	ctx.cr6.compare<int32_t>(ctx.r31.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x832f26c0
	if (ctx.cr6.lt) goto loc_832F26C0;
loc_832F26EC:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x833a01fc
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832F26F4"))) PPC_WEAK_FUNC(sub_832F26F4);
PPC_FUNC_IMPL(__imp__sub_832F26F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832F26F8"))) PPC_WEAK_FUNC(sub_832F26F8);
PPC_FUNC_IMPL(__imp__sub_832F26F8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x833a0194
	ctx.lr = 0x832F2700;
	__savegprlr_23(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r11,r4,63
	ctx.r11.s64 = ctx.r4.s64 + 63;
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// rlwinm r30,r11,0,0,25
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFC0;
	// mr r26,r6
	ctx.r26.u64 = ctx.r6.u64;
	// subf r11,r30,r4
	ctx.r11.s64 = ctx.r4.s64 - ctx.r30.s64;
	// mr r27,r7
	ctx.r27.u64 = ctx.r7.u64;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// add r28,r11,r5
	ctx.r28.u64 = ctx.r11.u64 + ctx.r5.u64;
	// bne cr6,0x832f273c
	if (!ctx.cr6.eq) goto loc_832F273C;
	// lis r11,-32210
	ctx.r11.s64 = -2110914560;
	// addi r3,r11,-24168
	ctx.r3.s64 = ctx.r11.s64 + -24168;
	// bl 0x833026b0
	ctx.lr = 0x832F2734;
	sub_833026B0(ctx, base);
loc_832F2734:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x832f298c
	goto loc_832F298C;
loc_832F273C:
	// lis r10,-31815
	ctx.r10.s64 = -2085027840;
	// li r24,0
	ctx.r24.s64 = 0;
	// addi r10,r10,-960
	ctx.r10.s64 = ctx.r10.s64 + -960;
	// mr r11,r24
	ctx.r11.u64 = ctx.r24.u64;
	// mr r9,r10
	ctx.r9.u64 = ctx.r10.u64;
loc_832F2750:
	// lbz r8,0(r9)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r9.u32 + 0);
	// cmplwi r8,0
	ctx.cr0.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq 0x832f2770
	if (ctx.cr0.eq) goto loc_832F2770;
	// addi r9,r9,704
	ctx.r9.s64 = ctx.r9.s64 + 704;
	// addi r8,r10,2816
	ctx.r8.s64 = ctx.r10.s64 + 2816;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmpw cr6,r9,r8
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r8.s32, ctx.xer);
	// blt cr6,0x832f2750
	if (ctx.cr6.lt) goto loc_832F2750;
loc_832F2770:
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// beq cr6,0x832f2734
	if (ctx.cr6.eq) goto loc_832F2734;
	// mulli r11,r11,704
	ctx.r11.s64 = ctx.r11.s64 * 704;
	// add r31,r11,r10
	ctx.r31.u64 = ctx.r11.u64 + ctx.r10.u64;
	// li r5,704
	ctx.r5.s64 = 704;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x833a2b30
	ctx.lr = 0x832F2790;
	sub_833A2B30(ctx, base);
	// lwz r10,0(r25)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r25.u32 + 0);
	// li r11,64
	ctx.r11.s64 = 64;
	// li r23,8192
	ctx.r23.s64 = 8192;
	// stb r10,3(r31)
	PPC_STORE_U8(ctx.r31.u32 + 3, ctx.r10.u8);
	// lwz r10,4(r25)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r25.u32 + 4);
	// stb r10,2(r31)
	PPC_STORE_U8(ctx.r31.u32 + 2, ctx.r10.u8);
	// lwz r10,8(r25)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r25.u32 + 8);
	// stw r10,628(r31)
	PPC_STORE_U32(ctx.r31.u32 + 628, ctx.r10.u32);
	// stw r23,420(r31)
	PPC_STORE_U32(ctx.r31.u32 + 420, ctx.r23.u32);
	// stw r11,424(r31)
	PPC_STORE_U32(ctx.r31.u32 + 424, ctx.r11.u32);
	// lwz r11,8(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 8);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x832f27d0
	if (!ctx.cr6.eq) goto loc_832F27D0;
	// lwz r11,0(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 0);
	// mulli r29,r11,16640
	ctx.r29.s64 = ctx.r11.s64 * 16640;
	// b 0x832f27e8
	goto loc_832F27E8;
loc_832F27D0:
	// lwz r11,4(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 4);
	// lwz r10,0(r25)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r25.u32 + 0);
	// mulli r11,r11,16576
	ctx.r11.s64 = ctx.r11.s64 * 16576;
	// addi r11,r11,127
	ctx.r11.s64 = ctx.r11.s64 + 127;
	// rlwinm r11,r11,0,0,25
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFC0;
	// mullw r29,r11,r10
	ctx.r29.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r10.s32);
loc_832F27E8:
	// mr r7,r27
	ctx.r7.u64 = ctx.r27.u64;
	// mr r6,r26
	ctx.r6.u64 = ctx.r26.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x832f17f8
	ctx.lr = 0x832F2800;
	sub_832F17F8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x832f291c
	if (ctx.cr0.lt) goto loc_832F291C;
	// cmpwi cr6,r27,0
	ctx.cr6.compare<int32_t>(ctx.r27.s32, 0, ctx.xer);
	// bne cr6,0x832f281c
	if (!ctx.cr6.eq) goto loc_832F281C;
	// subf. r28,r29,r28
	ctx.r28.s64 = ctx.r28.s64 - ctx.r29.s64;
	ctx.cr0.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// add r30,r29,r30
	ctx.r30.u64 = ctx.r29.u64 + ctx.r30.u64;
	// blt 0x832f291c
	if (ctx.cr0.lt) goto loc_832F291C;
loc_832F281C:
	// lbz r11,3(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 3);
	// mr r27,r24
	ctx.r27.u64 = ctx.r24.u64;
	// extsb. r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble 0x832f287c
	if (!ctx.cr0.gt) goto loc_832F287C;
	// addi r29,r31,292
	ctx.r29.s64 = ctx.r31.s64 + 292;
loc_832F2830:
	// stw r30,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r30.u32);
	// lwz r5,424(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 424);
	// lwz r4,420(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 420);
	// subf r10,r4,r28
	ctx.r10.s64 = ctx.r28.s64 - ctx.r4.s64;
	// add r11,r4,r5
	ctx.r11.u64 = ctx.r4.u64 + ctx.r5.u64;
	// subf. r28,r5,r10
	ctx.r28.s64 = ctx.r10.s64 - ctx.r5.s64;
	ctx.cr0.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// add r30,r11,r30
	ctx.r30.u64 = ctx.r11.u64 + ctx.r30.u64;
	// blt 0x832f291c
	if (ctx.cr0.lt) goto loc_832F291C;
	// lwz r3,0(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// bl 0x832ee4c0
	ctx.lr = 0x832F2858;
	sub_832EE4C0(ctx, base);
	// stw r3,-140(r29)
	PPC_STORE_U32(ctx.r29.u32 + -140, ctx.r3.u32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x832f291c
	if (ctx.cr0.eq) goto loc_832F291C;
	// lbz r11,3(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 3);
	// addi r27,r27,1
	ctx.r27.s64 = ctx.r27.s64 + 1;
	// addi r29,r29,4
	ctx.r29.s64 = ctx.r29.s64 + 4;
	// extsb r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	// cmpw cr6,r27,r11
	ctx.cr6.compare<int32_t>(ctx.r27.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x832f2830
	if (ctx.cr6.lt) goto loc_832F2830;
loc_832F287C:
	// addi r11,r28,-8192
	ctx.r11.s64 = ctx.r28.s64 + -8192;
	// stw r30,280(r31)
	PPC_STORE_U32(ctx.r31.u32 + 280, ctx.r30.u32);
	// stw r23,288(r31)
	PPC_STORE_U32(ctx.r31.u32 + 288, ctx.r23.u32);
	// addi r10,r11,-256
	ctx.r10.s64 = ctx.r11.s64 + -256;
	// srawi r10,r10,11
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x7FF) != 0);
	ctx.r10.s64 = ctx.r10.s32 >> 11;
	// addze r10,r10
	temp.s64 = ctx.r10.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r10.u32;
	ctx.r10.s64 = temp.s64;
	// rlwinm r10,r10,11,0,20
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 11) & 0xFFFFF800;
	// subf. r11,r10,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r10.s64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r10,284(r31)
	PPC_STORE_U32(ctx.r31.u32 + 284, ctx.r10.u32);
	// blt 0x832f291c
	if (ctx.cr0.lt) goto loc_832F291C;
	// rotlwi r4,r10,0
	ctx.r4.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// cmpwi cr6,r11,256
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 256, ctx.xer);
	// add r11,r4,r30
	ctx.r11.u64 = ctx.r4.u64 + ctx.r30.u64;
	// addi r11,r11,8192
	ctx.r11.s64 = ctx.r11.s64 + 8192;
	// stw r11,464(r31)
	PPC_STORE_U32(ctx.r31.u32 + 464, ctx.r11.u32);
	// blt cr6,0x832f291c
	if (ctx.cr6.lt) goto loc_832F291C;
	// stw r24,148(r31)
	PPC_STORE_U32(ctx.r31.u32 + 148, ctx.r24.u32);
	// li r5,8192
	ctx.r5.s64 = 8192;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x832ee4c0
	ctx.lr = 0x832F28CC;
	sub_832EE4C0(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// stw r3,144(r31)
	PPC_STORE_U32(ctx.r31.u32 + 144, ctx.r3.u32);
	// beq 0x832f291c
	if (ctx.cr0.eq) goto loc_832F291C;
	// addi r5,r31,152
	ctx.r5.s64 = ctx.r31.s64 + 152;
	// lwz r4,148(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 148);
	// lwz r3,0(r25)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r25.u32 + 0);
	// bl 0x83301858
	ctx.lr = 0x832F28E8;
	sub_83301858(ctx, base);
	// stw r3,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r3.u32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x832f291c
	if (ctx.cr0.eq) goto loc_832F291C;
	// lis r11,-31953
	ctx.r11.s64 = -2094071808;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// addi r4,r11,5472
	ctx.r4.s64 = ctx.r11.s64 + 5472;
	// bl 0x83301738
	ctx.lr = 0x832F2904;
	sub_83301738(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r3,144(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 144);
	// bl 0x832f4d90
	ctx.lr = 0x832F2910;
	sub_832F4D90(ctx, base);
	// stw r3,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r3.u32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne 0x832f2928
	if (!ctx.cr0.eq) goto loc_832F2928;
loc_832F291C:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x832f1de0
	ctx.lr = 0x832F2924;
	sub_832F1DE0(ctx, base);
	// b 0x832f2734
	goto loc_832F2734;
loc_832F2928:
	// lis r11,-31953
	ctx.r11.s64 = -2094071808;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// addi r4,r11,4128
	ctx.r4.s64 = ctx.r11.s64 + 4128;
	// bl 0x832f45f8
	ctx.lr = 0x832F2938;
	sub_832F45F8(ctx, base);
	// lis r10,-32230
	ctx.r10.s64 = -2112225280;
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r24,428(r31)
	PPC_STORE_U32(ctx.r31.u32 + 428, ctx.r24.u32);
	// stb r24,436(r31)
	PPC_STORE_U8(ctx.r31.u32 + 436, ctx.r24.u8);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stb r11,437(r31)
	PPC_STORE_U8(ctx.r31.u32 + 437, ctx.r11.u8);
	// stb r24,439(r31)
	PPC_STORE_U8(ctx.r31.u32 + 439, ctx.r24.u8);
	// lfs f0,24284(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 24284);
	ctx.f0.f64 = double(temp.f32);
	// stw r24,440(r31)
	PPC_STORE_U32(ctx.r31.u32 + 440, ctx.r24.u32);
	// stfs f0,492(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 492, temp.u32);
	// stw r24,452(r31)
	PPC_STORE_U32(ctx.r31.u32 + 452, ctx.r24.u32);
	// stfs f0,648(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 648, temp.u32);
	// stw r11,444(r31)
	PPC_STORE_U32(ctx.r31.u32 + 444, ctx.r11.u32);
	// stw r24,448(r31)
	PPC_STORE_U32(ctx.r31.u32 + 448, ctx.r24.u32);
	// stw r24,456(r31)
	PPC_STORE_U32(ctx.r31.u32 + 456, ctx.r24.u32);
	// stw r11,460(r31)
	PPC_STORE_U32(ctx.r31.u32 + 460, ctx.r11.u32);
	// stw r24,656(r31)
	PPC_STORE_U32(ctx.r31.u32 + 656, ctx.r24.u32);
	// stw r24,660(r31)
	PPC_STORE_U32(ctx.r31.u32 + 660, ctx.r24.u32);
	// stw r24,640(r31)
	PPC_STORE_U32(ctx.r31.u32 + 640, ctx.r24.u32);
	// stw r24,644(r31)
	PPC_STORE_U32(ctx.r31.u32 + 644, ctx.r24.u32);
	// stb r11,0(r31)
	PPC_STORE_U8(ctx.r31.u32 + 0, ctx.r11.u8);
loc_832F298C:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x833a01e4
	__restgprlr_23(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832F2994"))) PPC_WEAK_FUNC(sub_832F2994);
PPC_FUNC_IMPL(__imp__sub_832F2994) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832F2998"))) PPC_WEAK_FUNC(sub_832F2998);
PPC_FUNC_IMPL(__imp__sub_832F2998) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x833011a8
	ctx.lr = 0x832F29B0;
	sub_833011A8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x832f1de0
	ctx.lr = 0x832F29B8;
	sub_832F1DE0(ctx, base);
	// bl 0x833026b8
	ctx.lr = 0x832F29BC;
	sub_833026B8(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_832F29D0"))) PPC_WEAK_FUNC(sub_832F29D0);
PPC_FUNC_IMPL(__imp__sub_832F29D0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// bl 0x833011a8
	ctx.lr = 0x832F29F0;
	sub_833011A8(ctx, base);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x832f2a48
	if (ctx.cr6.eq) goto loc_832F2A48;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x832f2a48
	if (ctx.cr6.eq) goto loc_832F2A48;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x832f19a0
	ctx.lr = 0x832F2A08;
	sub_832F19A0(ctx, base);
	// bl 0x82c10e98
	ctx.lr = 0x832F2A0C;
	sub_82C10E98(ctx, base);
	// stw r30,148(r31)
	PPC_STORE_U32(ctx.r31.u32 + 148, ctx.r30.u32);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// bl 0x83301620
	ctx.lr = 0x832F2A1C;
	sub_83301620(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,3
	ctx.r10.s64 = 3;
	// li r9,1
	ctx.r9.s64 = 1;
	// stw r11,632(r31)
	PPC_STORE_U32(ctx.r31.u32 + 632, ctx.r11.u32);
	// stw r10,484(r31)
	PPC_STORE_U32(ctx.r31.u32 + 484, ctx.r10.u32);
	// stw r11,636(r31)
	PPC_STORE_U32(ctx.r31.u32 + 636, ctx.r11.u32);
	// stw r11,652(r31)
	PPC_STORE_U32(ctx.r31.u32 + 652, ctx.r11.u32);
	// stb r11,439(r31)
	PPC_STORE_U8(ctx.r31.u32 + 439, ctx.r11.u8);
	// stb r9,1(r31)
	PPC_STORE_U8(ctx.r31.u32 + 1, ctx.r9.u8);
	// bl 0x82c10e98
	ctx.lr = 0x832F2A44;
	sub_82C10E98(ctx, base);
	// b 0x832f2a54
	goto loc_832F2A54;
loc_832F2A48:
	// lis r11,-32210
	ctx.r11.s64 = -2110914560;
	// addi r3,r11,-24324
	ctx.r3.s64 = ctx.r11.s64 + -24324;
	// bl 0x833026b0
	ctx.lr = 0x832F2A54;
	sub_833026B0(ctx, base);
loc_832F2A54:
	// bl 0x833026b8
	ctx.lr = 0x832F2A58;
	sub_833026B8(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_832F2A70"))) PPC_WEAK_FUNC(sub_832F2A70);
PPC_FUNC_IMPL(__imp__sub_832F2A70) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x833a01a8
	ctx.lr = 0x832F2A78;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// bl 0x833011a8
	ctx.lr = 0x832F2A80;
	sub_833011A8(ctx, base);
	// lis r11,-31823
	ctx.r11.s64 = -2085552128;
	// lis r10,-31823
	ctx.r10.s64 = -2085552128;
	// addi r28,r10,-30992
	ctx.r28.s64 = ctx.r10.s64 + -30992;
	// lwz r10,-31000(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + -31000);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x832f2aa8
	if (ctx.cr6.eq) goto loc_832F2AA8;
	// rotlwi r11,r10,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// lwz r3,-4(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + -4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x832F2AA8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_832F2AA8:
	// lis r11,-31815
	ctx.r11.s64 = -2085027840;
	// addi r29,r11,-960
	ctx.r29.s64 = ctx.r11.s64 + -960;
	// lis r11,-31823
	ctx.r11.s64 = -2085552128;
	// mr r31,r29
	ctx.r31.u64 = ctx.r29.u64;
	// addi r30,r11,-31008
	ctx.r30.s64 = ctx.r11.s64 + -31008;
loc_832F2ABC:
	// lbz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 0);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// bne cr6,0x832f2ae8
	if (!ctx.cr6.eq) goto loc_832F2AE8;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x832f57e0
	ctx.lr = 0x832F2AD0;
	sub_832F57E0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x832f2ae8
	if (ctx.cr0.eq) goto loc_832F2AE8;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x832f2000
	ctx.lr = 0x832F2AE0;
	sub_832F2000(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
loc_832F2AE8:
	// addi r31,r31,704
	ctx.r31.s64 = ctx.r31.s64 + 704;
	// addi r11,r29,2816
	ctx.r11.s64 = ctx.r29.s64 + 2816;
	// cmpw cr6,r31,r11
	ctx.cr6.compare<int32_t>(ctx.r31.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x832f2abc
	if (ctx.cr6.lt) goto loc_832F2ABC;
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x832f2b14
	if (ctx.cr6.eq) goto loc_832F2B14;
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// lwz r3,4(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x832F2B14;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_832F2B14:
	// bl 0x833026b8
	ctx.lr = 0x832F2B18;
	sub_833026B8(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x833a01f8
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832F2B20"))) PPC_WEAK_FUNC(sub_832F2B20);
PPC_FUNC_IMPL(__imp__sub_832F2B20) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// bl 0x833011a8
	ctx.lr = 0x832F2B30;
	sub_833011A8(ctx, base);
	// bl 0x832f2a70
	ctx.lr = 0x832F2B34;
	sub_832F2A70(ctx, base);
	// bl 0x83302628
	ctx.lr = 0x832F2B38;
	sub_83302628(ctx, base);
	// bl 0x833026b8
	ctx.lr = 0x832F2B3C;
	sub_833026B8(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_832F2B50"))) PPC_WEAK_FUNC(sub_832F2B50);
PPC_FUNC_IMPL(__imp__sub_832F2B50) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r31,-31823
	ctx.r31.s64 = -2085552128;
	// lis r11,-32210
	ctx.r11.s64 = -2110914560;
	// lis r10,-31823
	ctx.r10.s64 = -2085552128;
	// addi r9,r11,-25168
	ctx.r9.s64 = ctx.r11.s64 + -25168;
	// lwz r11,-31016(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -31016);
	// stw r9,-31020(r10)
	PPC_STORE_U32(ctx.r10.u32 + -31020, ctx.r9.u32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x832f2be4
	if (!ctx.cr6.eq) goto loc_832F2BE4;
	// bl 0x832ef960
	ctx.lr = 0x832F2B84;
	sub_832EF960(ctx, base);
	// bl 0x833014c0
	ctx.lr = 0x832F2B88;
	sub_833014C0(ctx, base);
	// lis r11,-31815
	ctx.r11.s64 = -2085027840;
	// li r5,2816
	ctx.r5.s64 = 2816;
	// addi r3,r11,-960
	ctx.r3.s64 = ctx.r11.s64 + -960;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x833a2b30
	ctx.lr = 0x832F2B9C;
	sub_833A2B30(ctx, base);
	// lis r11,-32210
	ctx.r11.s64 = -2110914560;
	// lis r10,-31953
	ctx.r10.s64 = -2094071808;
	// addi r7,r11,-24112
	ctx.r7.s64 = ctx.r11.s64 + -24112;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r10,11040
	ctx.r5.s64 = ctx.r10.s64 + 11040;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,2
	ctx.r3.s64 = 2;
	// bl 0x832f59f0
	ctx.lr = 0x832F2BBC;
	sub_832F59F0(ctx, base);
	// lis r11,-32210
	ctx.r11.s64 = -2110914560;
	// lis r10,-32041
	ctx.r10.s64 = -2099838976;
	// addi r6,r11,-24128
	ctx.r6.s64 = ctx.r11.s64 + -24128;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r10,-9592
	ctx.r4.s64 = ctx.r10.s64 + -9592;
	// li r3,5
	ctx.r3.s64 = 5;
	// bl 0x832f5858
	ctx.lr = 0x832F2BD8;
	sub_832F5858(ctx, base);
	// lis r10,-31823
	ctx.r10.s64 = -2085552128;
	// lwz r11,-31016(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -31016);
	// stw r3,-31012(r10)
	PPC_STORE_U32(ctx.r10.u32 + -31012, ctx.r3.u32);
loc_832F2BE4:
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,-31016(r31)
	PPC_STORE_U32(ctx.r31.u32 + -31016, ctx.r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_832F2C00"))) PPC_WEAK_FUNC(sub_832F2C00);
PPC_FUNC_IMPL(__imp__sub_832F2C00) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x833a01a8
	ctx.lr = 0x832F2C08;
	__savegprlr_28(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// mr r28,r6
	ctx.r28.u64 = ctx.r6.u64;
	// bl 0x833011a8
	ctx.lr = 0x832F2C20;
	sub_833011A8(ctx, base);
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// li r11,0
	ctx.r11.s64 = 0;
	// std r11,0(r10)
	PPC_STORE_U64(ctx.r10.u32 + 0, ctx.r11.u64);
	// stw r11,8(r10)
	PPC_STORE_U32(ctx.r10.u32 + 8, ctx.r11.u32);
	// stw r31,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r31.u32);
	// stw r30,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r30.u32);
	// stw r11,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r11.u32);
	// bl 0x82c10e98
	ctx.lr = 0x832F2C40;
	sub_82C10E98(ctx, base);
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x832f26f8
	ctx.lr = 0x832F2C58;
	sub_832F26F8(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x82c10e98
	ctx.lr = 0x832F2C60;
	sub_82C10E98(ctx, base);
	// bl 0x833026b8
	ctx.lr = 0x832F2C64;
	sub_833026B8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x833a01f8
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832F2C70"))) PPC_WEAK_FUNC(sub_832F2C70);
PPC_FUNC_IMPL(__imp__sub_832F2C70) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x833a0190
	ctx.lr = 0x832F2C78;
	__savegprlr_22(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lbz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 4);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// lbz r10,5(r3)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r3.u32 + 5);
	// li r29,0
	ctx.r29.s64 = 0;
	// extsb. r24,r11
	ctx.r24.s64 = ctx.r11.s8;
	ctx.cr0.compare<int32_t>(ctx.r24.s32, 0, ctx.xer);
	// extsb r23,r10
	ctx.r23.s64 = ctx.r10.s8;
	// ble 0x832f2d2c
	if (!ctx.cr0.gt) goto loc_832F2D2C;
	// cmpwi cr6,r23,0
	ctx.cr6.compare<int32_t>(ctx.r23.s32, 0, ctx.xer);
	// ble cr6,0x832f2d2c
	if (!ctx.cr6.gt) goto loc_832F2D2C;
	// mullw r22,r23,r24
	ctx.r22.s64 = int64_t(ctx.r23.s32) * int64_t(ctx.r24.s32);
	// cmpwi cr6,r22,6
	ctx.cr6.compare<int32_t>(ctx.r22.s32, 6, ctx.xer);
	// blt cr6,0x832f2cb0
	if (ctx.cr6.lt) goto loc_832F2CB0;
	// li r22,6
	ctx.r22.s64 = 6;
loc_832F2CB0:
	// li r26,0
	ctx.r26.s64 = 0;
	// cmpwi cr6,r23,0
	ctx.cr6.compare<int32_t>(ctx.r23.s32, 0, ctx.xer);
	// ble cr6,0x832f2d2c
	if (!ctx.cr6.gt) goto loc_832F2D2C;
	// lis r11,-32210
	ctx.r11.s64 = -2110914560;
	// addi r25,r11,-24096
	ctx.r25.s64 = ctx.r11.s64 + -24096;
loc_832F2CC4:
	// li r30,0
	ctx.r30.s64 = 0;
	// cmpwi cr6,r24,0
	ctx.cr6.compare<int32_t>(ctx.r24.s32, 0, ctx.xer);
	// ble cr6,0x832f2d20
	if (!ctx.cr6.gt) goto loc_832F2D20;
	// mulli r11,r22,6
	ctx.r11.s64 = ctx.r22.s64 * 6;
	// addi r27,r11,-6
	ctx.r27.s64 = ctx.r11.s64 + -6;
loc_832F2CD8:
	// add r11,r27,r29
	ctx.r11.u64 = ctx.r27.u64 + ctx.r29.u64;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwzx r31,r11,r25
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r25.u32);
	// bl 0x832f1b90
	ctx.lr = 0x832F2CF0;
	sub_832F1B90(ctx, base);
	// addi r11,r31,166
	ctx.r11.s64 = ctx.r31.s64 + 166;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwzx r6,r11,r28
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r28.u32);
	// bl 0x833026c0
	ctx.lr = 0x832F2D08;
	sub_833026C0(ctx, base);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// cmpwi cr6,r29,6
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 6, ctx.xer);
	// bge cr6,0x832f2d20
	if (!ctx.cr6.lt) goto loc_832F2D20;
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// cmpw cr6,r30,r24
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r24.s32, ctx.xer);
	// blt cr6,0x832f2cd8
	if (ctx.cr6.lt) goto loc_832F2CD8;
loc_832F2D20:
	// addi r26,r26,1
	ctx.r26.s64 = ctx.r26.s64 + 1;
	// cmpw cr6,r26,r23
	ctx.cr6.compare<int32_t>(ctx.r26.s32, ctx.r23.s32, ctx.xer);
	// blt cr6,0x832f2cc4
	if (ctx.cr6.lt) goto loc_832F2CC4;
loc_832F2D2C:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x833a01e0
	__restgprlr_22(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832F2D34"))) PPC_WEAK_FUNC(sub_832F2D34);
PPC_FUNC_IMPL(__imp__sub_832F2D34) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832F2D38"))) PPC_WEAK_FUNC(sub_832F2D38);
PPC_FUNC_IMPL(__imp__sub_832F2D38) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// bl 0x82c10e98
	ctx.lr = 0x832F2D54;
	sub_82C10E98(ctx, base);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// bne cr6,0x832f2d6c
	if (!ctx.cr6.eq) goto loc_832F2D6C;
	// lis r11,-32210
	ctx.r11.s64 = -2110914560;
	// addi r3,r11,-23952
	ctx.r3.s64 = ctx.r11.s64 + -23952;
	// bl 0x832f8608
	ctx.lr = 0x832F2D68;
	sub_832F8608(ctx, base);
	// b 0x832f2db0
	goto loc_832F2DB0;
loc_832F2D6C:
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r3,8(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x83301728
	ctx.lr = 0x832F2D7C;
	sub_83301728(ctx, base);
	// lbz r11,3(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 3);
	// li r31,0
	ctx.r31.s64 = 0;
	// extsb. r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble 0x832f2db0
	if (!ctx.cr0.gt) goto loc_832F2DB0;
loc_832F2D8C:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x832f1b90
	ctx.lr = 0x832F2D98;
	sub_832F1B90(ctx, base);
	// bl 0x83302730
	ctx.lr = 0x832F2D9C;
	sub_83302730(ctx, base);
	// lbz r11,3(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 3);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// extsb r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	// cmpw cr6,r31,r11
	ctx.cr6.compare<int32_t>(ctx.r31.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x832f2d8c
	if (ctx.cr6.lt) goto loc_832F2D8C;
loc_832F2DB0:
	// bl 0x82c10e98
	ctx.lr = 0x832F2DB4;
	sub_82C10E98(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_832F2DCC"))) PPC_WEAK_FUNC(sub_832F2DCC);
PPC_FUNC_IMPL(__imp__sub_832F2DCC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832F2DD0"))) PPC_WEAK_FUNC(sub_832F2DD0);
PPC_FUNC_IMPL(__imp__sub_832F2DD0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lbz r11,16(r4)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r4.u32 + 16);
	// lbz r10,3(r3)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r3.u32 + 3);
	// extsb r10,r10
	ctx.r10.s64 = ctx.r10.s8;
	// stb r11,4(r3)
	PPC_STORE_U8(ctx.r3.u32 + 4, ctx.r11.u8);
	// lbz r11,12(r4)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r4.u32 + 12);
	// extsb r9,r11
	ctx.r9.s64 = ctx.r11.s8;
	// cmpw cr6,r10,r9
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r9.s32, ctx.xer);
	// stb r11,5(r3)
	PPC_STORE_U8(ctx.r3.u32 + 5, ctx.r11.u8);
	// blt cr6,0x832f2e24
	if (ctx.cr6.lt) goto loc_832F2E24;
	// lbz r11,2(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 2);
	// lbz r10,4(r3)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r3.u32 + 4);
	// extsb r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	// extsb r10,r10
	ctx.r10.s64 = ctx.r10.s8;
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// blt cr6,0x832f2e24
	if (ctx.cr6.lt) goto loc_832F2E24;
	// bl 0x832f2c70
	ctx.lr = 0x832F2E1C;
	sub_832F2C70(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x832f2e34
	goto loc_832F2E34;
loc_832F2E24:
	// lis r11,-32210
	ctx.r11.s64 = -2110914560;
	// addi r3,r11,-23912
	ctx.r3.s64 = ctx.r11.s64 + -23912;
	// bl 0x832f8608
	ctx.lr = 0x832F2E30;
	sub_832F8608(ctx, base);
	// li r3,-1
	ctx.r3.s64 = -1;
loc_832F2E34:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_832F2E44"))) PPC_WEAK_FUNC(sub_832F2E44);
PPC_FUNC_IMPL(__imp__sub_832F2E44) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832F2E48"))) PPC_WEAK_FUNC(sub_832F2E48);
PPC_FUNC_IMPL(__imp__sub_832F2E48) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x82c10e98
	ctx.lr = 0x832F2E60;
	sub_82C10E98(ctx, base);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne cr6,0x832f2e78
	if (!ctx.cr6.eq) goto loc_832F2E78;
	// lis r11,-32210
	ctx.r11.s64 = -2110914560;
	// addi r3,r11,-23848
	ctx.r3.s64 = ctx.r11.s64 + -23848;
	// bl 0x832f8608
	ctx.lr = 0x832F2E74;
	sub_832F8608(ctx, base);
	// b 0x832f2e8c
	goto loc_832F2E8C;
loc_832F2E78:
	// lis r11,-31953
	ctx.r11.s64 = -2094071808;
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// addi r4,r11,11728
	ctx.r4.s64 = ctx.r11.s64 + 11728;
	// bl 0x83301728
	ctx.lr = 0x832F2E8C;
	sub_83301728(ctx, base);
loc_832F2E8C:
	// bl 0x82c10e98
	ctx.lr = 0x832F2E90;
	sub_82C10E98(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_832F2EA4"))) PPC_WEAK_FUNC(sub_832F2EA4);
PPC_FUNC_IMPL(__imp__sub_832F2EA4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832F2EA8"))) PPC_WEAK_FUNC(sub_832F2EA8);
PPC_FUNC_IMPL(__imp__sub_832F2EA8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x833a01ac
	ctx.lr = 0x832F2EB0;
	__savegprlr_29(ctx, base);
	// lis r11,-31823
	ctx.r11.s64 = -2085552128;
	// lwz r10,-30984(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + -30984);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x832f2ec8
	if (!ctx.cr6.eq) goto loc_832F2EC8;
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r10,-30984(r11)
	PPC_STORE_U32(ctx.r11.u32 + -30984, ctx.r10.u32);
loc_832F2EC8:
	// li r9,0
	ctx.r9.s64 = 0;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// sth r9,0(r5)
	PPC_STORE_U16(ctx.r5.u32 + 0, ctx.r9.u16);
	// sth r9,0(r6)
	PPC_STORE_U16(ctx.r6.u32 + 0, ctx.r9.u16);
	// sth r9,0(r7)
	PPC_STORE_U16(ctx.r7.u32 + 0, ctx.r9.u16);
	// bne cr6,0x832f2ee8
	if (!ctx.cr6.eq) goto loc_832F2EE8;
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// ble cr6,0x832f2fe8
	if (!ctx.cr6.gt) goto loc_832F2FE8;
loc_832F2EE8:
	// lis r11,-32210
	ctx.r11.s64 = -2110914560;
	// li r31,18973
	ctx.r31.s64 = 18973;
	// mr r10,r9
	ctx.r10.u64 = ctx.r9.u64;
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// addi r11,r11,-23656
	ctx.r11.s64 = ctx.r11.s64 + -23656;
	// ble cr6,0x832f2f40
	if (!ctx.cr6.gt) goto loc_832F2F40;
	// mtctr r4
	ctx.ctr.u64 = ctx.r4.u64;
loc_832F2F04:
	// lbzx r8,r10,r3
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + ctx.r3.u32);
	// addi r30,r11,256
	ctx.r30.s64 = ctx.r11.s64 + 256;
	// extsh r31,r31
	ctx.r31.s64 = ctx.r31.s16;
	// extsb r8,r8
	ctx.r8.s64 = ctx.r8.s8;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// rlwinm r8,r8,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0xFFFFFFFE;
	// lhax r8,r8,r30
	ctx.r8.s64 = int16_t(PPC_LOAD_U16(ctx.r8.u32 + ctx.r30.u32));
	// mullw r8,r8,r31
	ctx.r8.s64 = int64_t(ctx.r8.s32) * int64_t(ctx.r31.s32);
	// srawi r31,r8,10
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x3FF) != 0);
	ctx.r31.s64 = ctx.r8.s32 >> 10;
	// addze r31,r31
	temp.s64 = ctx.r31.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r31.u32;
	ctx.r31.s64 = temp.s64;
	// rlwinm r31,r31,10,0,21
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 10) & 0xFFFFFC00;
	// subf r8,r31,r8
	ctx.r8.s64 = ctx.r8.s64 - ctx.r31.s64;
	// rlwinm r8,r8,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0xFFFFFFFE;
	// lhzx r31,r8,r11
	ctx.r31.u64 = PPC_LOAD_U16(ctx.r8.u32 + ctx.r11.u32);
	// bdnz 0x832f2f04
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_832F2F04;
loc_832F2F40:
	// li r8,21503
	ctx.r8.s64 = 21503;
	// mr r10,r9
	ctx.r10.u64 = ctx.r9.u64;
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// ble cr6,0x832f2f90
	if (!ctx.cr6.gt) goto loc_832F2F90;
	// mtctr r4
	ctx.ctr.u64 = ctx.r4.u64;
loc_832F2F54:
	// lbzx r30,r10,r3
	ctx.r30.u64 = PPC_LOAD_U8(ctx.r10.u32 + ctx.r3.u32);
	// addi r29,r11,256
	ctx.r29.s64 = ctx.r11.s64 + 256;
	// extsh r8,r8
	ctx.r8.s64 = ctx.r8.s16;
	// extsb r30,r30
	ctx.r30.s64 = ctx.r30.s8;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// rlwinm r30,r30,1,0,30
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 1) & 0xFFFFFFFE;
	// lhax r30,r30,r29
	ctx.r30.s64 = int16_t(PPC_LOAD_U16(ctx.r30.u32 + ctx.r29.u32));
	// mullw r8,r30,r8
	ctx.r8.s64 = int64_t(ctx.r30.s32) * int64_t(ctx.r8.s32);
	// srawi r30,r8,10
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x3FF) != 0);
	ctx.r30.s64 = ctx.r8.s32 >> 10;
	// addze r30,r30
	temp.s64 = ctx.r30.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r30.u32;
	ctx.r30.s64 = temp.s64;
	// rlwinm r30,r30,10,0,21
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 10) & 0xFFFFFC00;
	// subf r8,r30,r8
	ctx.r8.s64 = ctx.r8.s64 - ctx.r30.s64;
	// rlwinm r8,r8,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0xFFFFFFFE;
	// lhzx r8,r8,r11
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r8.u32 + ctx.r11.u32);
	// bdnz 0x832f2f54
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_832F2F54;
loc_832F2F90:
	// li r10,24001
	ctx.r10.s64 = 24001;
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// ble cr6,0x832f2fdc
	if (!ctx.cr6.gt) goto loc_832F2FDC;
	// mtctr r4
	ctx.ctr.u64 = ctx.r4.u64;
loc_832F2FA0:
	// lbzx r4,r9,r3
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r9.u32 + ctx.r3.u32);
	// addi r30,r11,256
	ctx.r30.s64 = ctx.r11.s64 + 256;
	// extsh r10,r10
	ctx.r10.s64 = ctx.r10.s16;
	// extsb r4,r4
	ctx.r4.s64 = ctx.r4.s8;
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// rlwinm r4,r4,1,0,30
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 1) & 0xFFFFFFFE;
	// lhax r4,r4,r30
	ctx.r4.s64 = int16_t(PPC_LOAD_U16(ctx.r4.u32 + ctx.r30.u32));
	// mullw r10,r4,r10
	ctx.r10.s64 = int64_t(ctx.r4.s32) * int64_t(ctx.r10.s32);
	// srawi r4,r10,10
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x3FF) != 0);
	ctx.r4.s64 = ctx.r10.s32 >> 10;
	// addze r4,r4
	temp.s64 = ctx.r4.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r4.u32;
	ctx.r4.s64 = temp.s64;
	// rlwinm r4,r4,10,0,21
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 10) & 0xFFFFFC00;
	// subf r10,r4,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r4.s64;
	// rlwinm r10,r10,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// lhzx r10,r10,r11
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r10.u32 + ctx.r11.u32);
	// bdnz 0x832f2fa0
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_832F2FA0;
loc_832F2FDC:
	// sth r31,0(r5)
	PPC_STORE_U16(ctx.r5.u32 + 0, ctx.r31.u16);
	// sth r8,0(r6)
	PPC_STORE_U16(ctx.r6.u32 + 0, ctx.r8.u16);
	// sth r10,0(r7)
	PPC_STORE_U16(ctx.r7.u32 + 0, ctx.r10.u16);
loc_832F2FE8:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x833a01fc
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832F2FF0"))) PPC_WEAK_FUNC(sub_832F2FF0);
PPC_FUNC_IMPL(__imp__sub_832F2FF0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31823
	ctx.r11.s64 = -2085552128;
	// lwz r3,-30952(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -30952);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_832F2FFC"))) PPC_WEAK_FUNC(sub_832F2FFC);
PPC_FUNC_IMPL(__imp__sub_832F2FFC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832F3000"))) PPC_WEAK_FUNC(sub_832F3000);
PPC_FUNC_IMPL(__imp__sub_832F3000) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// bl 0x83302798
	ctx.lr = 0x832F3010;
	sub_83302798(ctx, base);
	// lis r10,-31823
	ctx.r10.s64 = -2085552128;
	// lis r11,-31815
	ctx.r11.s64 = -2085027840;
	// li r5,7808
	ctx.r5.s64 = 7808;
	// addi r3,r11,-8768
	ctx.r3.s64 = ctx.r11.s64 + -8768;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r11,-30984(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -30984);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,-30984(r10)
	PPC_STORE_U32(ctx.r10.u32 + -30984, ctx.r11.u32);
	// bl 0x833a2b30
	ctx.lr = 0x832F3034;
	sub_833A2B30(ctx, base);
	// lis r10,-31823
	ctx.r10.s64 = -2085552128;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,-30952(r10)
	PPC_STORE_U32(ctx.r10.u32 + -30952, ctx.r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_832F3050"))) PPC_WEAK_FUNC(sub_832F3050);
PPC_FUNC_IMPL(__imp__sub_832F3050) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,140(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 140);
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
	// lwz r10,140(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 140);
	// lwz r11,64(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 64);
	// subf r11,r10,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r10.s64;
	// stw r11,0(r5)
	PPC_STORE_U32(ctx.r5.u32 + 0, ctx.r11.u32);
	// lwz r11,24(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// lwz r10,136(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 136);
	// subf r11,r10,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r10.s64;
	// stw r11,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r11.u32);
	// lwz r3,60(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 60);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_832F3080"))) PPC_WEAK_FUNC(sub_832F3080);
PPC_FUNC_IMPL(__imp__sub_832F3080) {
	PPC_FUNC_PROLOGUE();
	// lwz r10,140(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 140);
	// lwz r11,136(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 136);
	// add r10,r5,r10
	ctx.r10.u64 = ctx.r5.u64 + ctx.r10.u64;
	// add r11,r11,r5
	ctx.r11.u64 = ctx.r11.u64 + ctx.r5.u64;
	// stw r10,140(r3)
	PPC_STORE_U32(ctx.r3.u32 + 140, ctx.r10.u32);
	// stw r11,136(r3)
	PPC_STORE_U32(ctx.r3.u32 + 136, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_832F309C"))) PPC_WEAK_FUNC(sub_832F309C);
PPC_FUNC_IMPL(__imp__sub_832F309C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832F30A0"))) PPC_WEAK_FUNC(sub_832F30A0);
PPC_FUNC_IMPL(__imp__sub_832F30A0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x832f30e4
	if (ctx.cr6.eq) goto loc_832F30E4;
	// li r30,0
	ctx.r30.s64 = 0;
	// lwz r3,8(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// stw r30,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r30.u32);
	// bl 0x833028f0
	ctx.lr = 0x832F30D0;
	sub_833028F0(ctx, base);
	// li r5,244
	ctx.r5.s64 = 244;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x833a2b30
	ctx.lr = 0x832F30E0;
	sub_833A2B30(ctx, base);
	// sth r30,0(r31)
	PPC_STORE_U16(ctx.r31.u32 + 0, ctx.r30.u16);
loc_832F30E4:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_832F30FC"))) PPC_WEAK_FUNC(sub_832F30FC);
PPC_FUNC_IMPL(__imp__sub_832F30FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832F3100"))) PPC_WEAK_FUNC(sub_832F3100);
PPC_FUNC_IMPL(__imp__sub_832F3100) {
	PPC_FUNC_PROLOGUE();
	// li r11,0
	ctx.r11.s64 = 0;
	// sth r11,152(r3)
	PPC_STORE_U16(ctx.r3.u32 + 152, ctx.r11.u16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_832F310C"))) PPC_WEAK_FUNC(sub_832F310C);
PPC_FUNC_IMPL(__imp__sub_832F310C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832F3110"))) PPC_WEAK_FUNC(sub_832F3110);
PPC_FUNC_IMPL(__imp__sub_832F3110) {
	PPC_FUNC_PROLOGUE();
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x833a01ac
	ctx.lr = 0x832F3118;
	__savegprlr_29(ctx, base);
	// lwz r7,60(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 60);
	// lis r6,0
	ctx.r6.s64 = 0;
	// lwz r5,64(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 64);
	// lis r4,32767
	ctx.r4.s64 = 2147418112;
	// lwz r31,68(r3)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 68);
	// li r11,0
	ctx.r11.s64 = 0;
	// li r8,2
	ctx.r8.s64 = 2;
	// li r9,127
	ctx.r9.s64 = 127;
	// stw r11,140(r3)
	PPC_STORE_U32(ctx.r3.u32 + 140, ctx.r11.u32);
	// li r10,1024
	ctx.r10.s64 = 1024;
	// stb r8,14(r3)
	PPC_STORE_U8(ctx.r3.u32 + 14, ctx.r8.u8);
	// li r30,1
	ctx.r30.s64 = 1;
	// stb r9,15(r3)
	PPC_STORE_U8(ctx.r3.u32 + 15, ctx.r9.u8);
	// ori r6,r6,48000
	ctx.r6.u64 = ctx.r6.u64 | 48000;
	// stw r10,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r10.u32);
	// li r29,16
	ctx.r29.s64 = 16;
	// sth r30,2(r3)
	PPC_STORE_U16(ctx.r3.u32 + 2, ctx.r30.u16);
	// ori r4,r4,65535
	ctx.r4.u64 = ctx.r4.u64 | 65535;
	// stw r6,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r6.u32);
	// stb r29,13(r3)
	PPC_STORE_U8(ctx.r3.u32 + 13, ctx.r29.u8);
	// stw r4,24(r3)
	PPC_STORE_U32(ctx.r3.u32 + 24, ctx.r4.u32);
	// stw r8,80(r3)
	PPC_STORE_U32(ctx.r3.u32 + 80, ctx.r8.u32);
	// stw r9,84(r3)
	PPC_STORE_U32(ctx.r3.u32 + 84, ctx.r9.u32);
	// stw r10,88(r3)
	PPC_STORE_U32(ctx.r3.u32 + 88, ctx.r10.u32);
	// stw r7,92(r3)
	PPC_STORE_U32(ctx.r3.u32 + 92, ctx.r7.u32);
	// stw r5,96(r3)
	PPC_STORE_U32(ctx.r3.u32 + 96, ctx.r5.u32);
	// stw r31,100(r3)
	PPC_STORE_U32(ctx.r3.u32 + 100, ctx.r31.u32);
	// sth r11,28(r3)
	PPC_STORE_U16(ctx.r3.u32 + 28, ctx.r11.u16);
	// sth r11,36(r3)
	PPC_STORE_U16(ctx.r3.u32 + 36, ctx.r11.u16);
	// sth r11,38(r3)
	PPC_STORE_U16(ctx.r3.u32 + 38, ctx.r11.u16);
	// stw r11,32(r3)
	PPC_STORE_U32(ctx.r3.u32 + 32, ctx.r11.u32);
	// stw r11,40(r3)
	PPC_STORE_U32(ctx.r3.u32 + 40, ctx.r11.u32);
	// stw r11,44(r3)
	PPC_STORE_U32(ctx.r3.u32 + 44, ctx.r11.u32);
	// stw r11,48(r3)
	PPC_STORE_U32(ctx.r3.u32 + 48, ctx.r11.u32);
	// stw r11,52(r3)
	PPC_STORE_U32(ctx.r3.u32 + 52, ctx.r11.u32);
	// stw r11,136(r3)
	PPC_STORE_U32(ctx.r3.u32 + 136, ctx.r11.u32);
	// stb r11,222(r3)
	PPC_STORE_U8(ctx.r3.u32 + 222, ctx.r11.u8);
	// stb r11,223(r3)
	PPC_STORE_U8(ctx.r3.u32 + 223, ctx.r11.u8);
	// b 0x833a01fc
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832F31B4"))) PPC_WEAK_FUNC(sub_832F31B4);
PPC_FUNC_IMPL(__imp__sub_832F31B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832F31B8"))) PPC_WEAK_FUNC(sub_832F31B8);
PPC_FUNC_IMPL(__imp__sub_832F31B8) {
	PPC_FUNC_PROLOGUE();
	// stw r4,120(r3)
	PPC_STORE_U32(ctx.r3.u32 + 120, ctx.r4.u32);
	// stw r5,124(r3)
	PPC_STORE_U32(ctx.r3.u32 + 124, ctx.r5.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_832F31C4"))) PPC_WEAK_FUNC(sub_832F31C4);
PPC_FUNC_IMPL(__imp__sub_832F31C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832F31C8"))) PPC_WEAK_FUNC(sub_832F31C8);
PPC_FUNC_IMPL(__imp__sub_832F31C8) {
	PPC_FUNC_PROLOGUE();
	// lha r3,152(r3)
	ctx.r3.s64 = int16_t(PPC_LOAD_U16(ctx.r3.u32 + 152));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_832F31D0"))) PPC_WEAK_FUNC(sub_832F31D0);
PPC_FUNC_IMPL(__imp__sub_832F31D0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x832f31f8
	if (!ctx.cr6.eq) goto loc_832F31F8;
	// lis r11,-32210
	ctx.r11.s64 = -2110914560;
	// addi r3,r11,-21608
	ctx.r3.s64 = ctx.r11.s64 + -21608;
	// bl 0x832ffa40
	ctx.lr = 0x832F31F0;
	sub_832FFA40(ctx, base);
	// li r3,-1
	ctx.r3.s64 = -1;
	// b 0x832f3200
	goto loc_832F3200;
loc_832F31F8:
	// lbz r11,14(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 14);
	// extsb r3,r11
	ctx.r3.s64 = ctx.r11.s8;
loc_832F3200:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_832F3210"))) PPC_WEAK_FUNC(sub_832F3210);
PPC_FUNC_IMPL(__imp__sub_832F3210) {
	PPC_FUNC_PROLOGUE();
	// lbz r11,13(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 13);
	// extsb r3,r11
	ctx.r3.s64 = ctx.r11.s8;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_832F321C"))) PPC_WEAK_FUNC(sub_832F321C);
PPC_FUNC_IMPL(__imp__sub_832F321C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832F3220"))) PPC_WEAK_FUNC(sub_832F3220);
PPC_FUNC_IMPL(__imp__sub_832F3220) {
	PPC_FUNC_PROLOGUE();
	// lha r11,152(r3)
	ctx.r11.s64 = int16_t(PPC_LOAD_U16(ctx.r3.u32 + 152));
	// cmpwi r11,0
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x832f3270
	if (ctx.cr0.eq) goto loc_832F3270;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// bne cr6,0x832f3258
	if (!ctx.cr6.eq) goto loc_832F3258;
	// lha r11,156(r3)
	ctx.r11.s64 = int16_t(PPC_LOAD_U16(ctx.r3.u32 + 156));
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// bne cr6,0x832f3248
	if (!ctx.cr6.eq) goto loc_832F3248;
	// li r3,4
	ctx.r3.s64 = 4;
	// blr 
	return;
loc_832F3248:
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x832f3270
	if (!ctx.cr6.eq) goto loc_832F3270;
	// li r3,8
	ctx.r3.s64 = 8;
	// blr 
	return;
loc_832F3258:
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x832f3270
	if (!ctx.cr6.eq) goto loc_832F3270;
	// lhz r11,156(r3)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 156);
	// li r3,4
	ctx.r3.s64 = 4;
	// cmplwi cr6,r11,2
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 2, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
loc_832F3270:
	// li r3,16
	ctx.r3.s64 = 16;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_832F3278"))) PPC_WEAK_FUNC(sub_832F3278);
PPC_FUNC_IMPL(__imp__sub_832F3278) {
	PPC_FUNC_PROLOGUE();
	// lha r3,36(r3)
	ctx.r3.s64 = int16_t(PPC_LOAD_U16(ctx.r3.u32 + 36));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_832F3280"))) PPC_WEAK_FUNC(sub_832F3280);
PPC_FUNC_IMPL(__imp__sub_832F3280) {
	PPC_FUNC_PROLOGUE();
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lwz r3,44(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 44);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_832F3290"))) PPC_WEAK_FUNC(sub_832F3290);
PPC_FUNC_IMPL(__imp__sub_832F3290) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,196(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 196);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_832F3298"))) PPC_WEAK_FUNC(sub_832F3298);
PPC_FUNC_IMPL(__imp__sub_832F3298) {
	PPC_FUNC_PROLOGUE();
	// lhz r3,216(r3)
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r3.u32 + 216);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_832F32A0"))) PPC_WEAK_FUNC(sub_832F32A0);
PPC_FUNC_IMPL(__imp__sub_832F32A0) {
	PPC_FUNC_PROLOGUE();
	// addi r11,r4,109
	ctx.r11.s64 = ctx.r4.s64 + 109;
	// rlwinm r11,r11,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// lhzx r3,r11,r3
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r11.u32 + ctx.r3.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_832F32B0"))) PPC_WEAK_FUNC(sub_832F32B0);
PPC_FUNC_IMPL(__imp__sub_832F32B0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r5,r3,180
	ctx.r5.s64 = ctx.r3.s64 + 180;
	// addi r4,r3,176
	ctx.r4.s64 = ctx.r3.s64 + 176;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r3,8(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// bl 0x83302898
	ctx.lr = 0x832F32D4;
	sub_83302898(ctx, base);
	// addi r6,r31,170
	ctx.r6.s64 = ctx.r31.s64 + 170;
	// addi r5,r31,168
	ctx.r5.s64 = ctx.r31.s64 + 168;
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addi r4,r31,166
	ctx.r4.s64 = ctx.r31.s64 + 166;
	// bl 0x833028d0
	ctx.lr = 0x832F32E8;
	sub_833028D0(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_832F32FC"))) PPC_WEAK_FUNC(sub_832F32FC);
PPC_FUNC_IMPL(__imp__sub_832F32FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832F3300"))) PPC_WEAK_FUNC(sub_832F3300);
PPC_FUNC_IMPL(__imp__sub_832F3300) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r5,r3,180
	ctx.r5.s64 = ctx.r3.s64 + 180;
	// addi r4,r3,176
	ctx.r4.s64 = ctx.r3.s64 + 176;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r3,8(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// bl 0x83302870
	ctx.lr = 0x832F3324;
	sub_83302870(ctx, base);
	// lhz r6,170(r31)
	ctx.r6.u64 = PPC_LOAD_U16(ctx.r31.u32 + 170);
	// lhz r5,168(r31)
	ctx.r5.u64 = PPC_LOAD_U16(ctx.r31.u32 + 168);
	// lhz r4,166(r31)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r31.u32 + 166);
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// bl 0x833028c0
	ctx.lr = 0x832F3338;
	sub_833028C0(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_832F334C"))) PPC_WEAK_FUNC(sub_832F334C);
PPC_FUNC_IMPL(__imp__sub_832F334C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832F3350"))) PPC_WEAK_FUNC(sub_832F3350);
PPC_FUNC_IMPL(__imp__sub_832F3350) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x833a01ac
	ctx.lr = 0x832F3358;
	__savegprlr_29(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31844
	ctx.r11.s64 = -2086928384;
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// mr r30,r6
	ctx.r30.u64 = ctx.r6.u64;
	// mr r29,r7
	ctx.r29.u64 = ctx.r7.u64;
	// lwz r11,-29344(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -29344);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// lbz r11,222(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 222);
	// bne cr6,0x832f3444
	if (!ctx.cr6.eq) goto loc_832F3444;
	// cmplwi cr6,r11,4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 4, ctx.xer);
	// bge cr6,0x832f3394
	if (!ctx.cr6.lt) goto loc_832F3394;
loc_832F3384:
	// li r11,0
	ctx.r11.s64 = 0;
	// sth r11,0(r31)
	PPC_STORE_U16(ctx.r31.u32 + 0, ctx.r11.u16);
	// sth r11,0(r30)
	PPC_STORE_U16(ctx.r30.u32 + 0, ctx.r11.u16);
	// b 0x832f3434
	goto loc_832F3434;
loc_832F3394:
	// lbz r11,223(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 223);
	// cmplwi cr6,r11,16
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 16, ctx.xer);
	// blt cr6,0x832f33d4
	if (ctx.cr6.lt) goto loc_832F33D4;
	// lis r11,-32210
	ctx.r11.s64 = -2110914560;
	// mr r6,r4
	ctx.r6.u64 = ctx.r4.u64;
	// addi r5,r11,-21528
	ctx.r5.s64 = ctx.r11.s64 + -21528;
	// li r4,16
	ctx.r4.s64 = 16;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x832ff9a8
	ctx.lr = 0x832F33B8;
	sub_832FF9A8(ctx, base);
	// mr r7,r29
	ctx.r7.u64 = ctx.r29.u64;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// li r4,8
	ctx.r4.s64 = 8;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x832f2ea8
	ctx.lr = 0x832F33D0;
	sub_832F2EA8(ctx, base);
	// b 0x832f3438
	goto loc_832F3438;
loc_832F33D4:
	// cmplwi cr6,r11,8
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 8, ctx.xer);
	// blt cr6,0x832f3384
	if (ctx.cr6.lt) goto loc_832F3384;
loc_832F33DC:
	// lhz r11,160(r3)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 160);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x832f3420
	if (!ctx.cr0.eq) goto loc_832F3420;
	// lhz r11,162(r3)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 162);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x832f3420
	if (!ctx.cr0.eq) goto loc_832F3420;
	// lhz r11,164(r3)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 164);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x832f3420
	if (!ctx.cr0.eq) goto loc_832F3420;
	// lis r10,-31823
	ctx.r10.s64 = -2085552128;
	// addi r9,r10,-30956
	ctx.r9.s64 = ctx.r10.s64 + -30956;
	// lhz r11,-8(r9)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r9.u32 + -8);
	// sth r11,160(r3)
	PPC_STORE_U16(ctx.r3.u32 + 160, ctx.r11.u16);
	// lhz r11,-4(r9)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r9.u32 + -4);
	// sth r11,162(r3)
	PPC_STORE_U16(ctx.r3.u32 + 162, ctx.r11.u16);
	// lhz r11,-30956(r10)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r10.u32 + -30956);
	// sth r11,164(r3)
	PPC_STORE_U16(ctx.r3.u32 + 164, ctx.r11.u16);
loc_832F3420:
	// lhz r11,160(r3)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 160);
	// sth r11,0(r31)
	PPC_STORE_U16(ctx.r31.u32 + 0, ctx.r11.u16);
	// lhz r11,162(r3)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 162);
	// sth r11,0(r30)
	PPC_STORE_U16(ctx.r30.u32 + 0, ctx.r11.u16);
	// lhz r11,164(r3)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 164);
loc_832F3434:
	// sth r11,0(r29)
	PPC_STORE_U16(ctx.r29.u32 + 0, ctx.r11.u16);
loc_832F3438:
	// li r3,0
	ctx.r3.s64 = 0;
loc_832F343C:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x833a01fc
	__restgprlr_29(ctx, base);
	return;
loc_832F3444:
	// cmplwi cr6,r11,4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 4, ctx.xer);
	// bge cr6,0x832f33dc
	if (!ctx.cr6.lt) goto loc_832F33DC;
	// lhz r11,160(r3)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 160);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x832f349c
	if (!ctx.cr0.eq) goto loc_832F349C;
	// lhz r11,162(r3)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 162);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x832f349c
	if (!ctx.cr0.eq) goto loc_832F349C;
	// lhz r11,164(r3)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 164);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x832f349c
	if (!ctx.cr0.eq) goto loc_832F349C;
	// lis r11,-31823
	ctx.r11.s64 = -2085552128;
	// addi r11,r11,-30956
	ctx.r11.s64 = ctx.r11.s64 + -30956;
	// lhz r10,-8(r11)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r11.u32 + -8);
	// cmplwi r10,0
	ctx.cr0.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne 0x832f349c
	if (!ctx.cr0.eq) goto loc_832F349C;
	// lhz r10,-4(r11)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r11.u32 + -4);
	// cmplwi r10,0
	ctx.cr0.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne 0x832f349c
	if (!ctx.cr0.eq) goto loc_832F349C;
	// lhz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r11.u32 + 0);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x832f3384
	if (ctx.cr0.eq) goto loc_832F3384;
loc_832F349C:
	// li r11,16128
	ctx.r11.s64 = 16128;
	// li r10,28892
	ctx.r10.s64 = 28892;
	// li r9,32767
	ctx.r9.s64 = 32767;
	// sth r11,0(r31)
	PPC_STORE_U16(ctx.r31.u32 + 0, ctx.r11.u16);
	// sth r10,0(r30)
	PPC_STORE_U16(ctx.r30.u32 + 0, ctx.r10.u16);
	// lis r11,-32210
	ctx.r11.s64 = -2110914560;
	// sth r9,0(r29)
	PPC_STORE_U16(ctx.r29.u32 + 0, ctx.r9.u16);
	// addi r3,r11,-21568
	ctx.r3.s64 = ctx.r11.s64 + -21568;
	// bl 0x832ffa40
	ctx.lr = 0x832F34C0;
	sub_832FFA40(ctx, base);
	// li r3,-1
	ctx.r3.s64 = -1;
	// b 0x832f343c
	goto loc_832F343C;
}

__attribute__((alias("__imp__sub_832F34C8"))) PPC_WEAK_FUNC(sub_832F34C8);
PPC_FUNC_IMPL(__imp__sub_832F34C8) {
	PPC_FUNC_PROLOGUE();
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// li r11,0
	ctx.r11.s64 = 0;
	// beq cr6,0x832f34d8
	if (ctx.cr6.eq) goto loc_832F34D8;
	// li r11,1
	ctx.r11.s64 = 1;
loc_832F34D8:
	// stw r11,172(r3)
	PPC_STORE_U32(ctx.r3.u32 + 172, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_832F34E0"))) PPC_WEAK_FUNC(sub_832F34E0);
PPC_FUNC_IMPL(__imp__sub_832F34E0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lhz r11,152(r3)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 152);
	// stw r4,72(r3)
	PPC_STORE_U32(ctx.r3.u32 + 72, ctx.r4.u32);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,116(r3)
	PPC_STORE_U32(ctx.r3.u32 + 116, ctx.r11.u32);
	// bne 0x832f3504
	if (!ctx.cr0.eq) goto loc_832F3504;
	// lbz r10,15(r3)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r3.u32 + 15);
	// extsb r10,r10
	ctx.r10.s64 = ctx.r10.s8;
	// b 0x832f3520
	goto loc_832F3520;
loc_832F3504:
	// lbz r10,13(r3)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r3.u32 + 13);
	// lbz r9,14(r3)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r3.u32 + 14);
	// extsb r10,r10
	ctx.r10.s64 = ctx.r10.s8;
	// extsb r9,r9
	ctx.r9.s64 = ctx.r9.s8;
	// srawi r10,r10,3
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x7) != 0);
	ctx.r10.s64 = ctx.r10.s32 >> 3;
	// addze r10,r10
	temp.s64 = ctx.r10.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r10.u32;
	ctx.r10.s64 = temp.s64;
	// mullw r10,r10,r9
	ctx.r10.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r9.s32);
loc_832F3520:
	// divw r10,r5,r10
	ctx.r10.s32 = ctx.r5.s32 / ctx.r10.s32;
	// stw r11,144(r3)
	PPC_STORE_U32(ctx.r3.u32 + 144, ctx.r11.u32);
	// stw r11,148(r3)
	PPC_STORE_U32(ctx.r3.u32 + 148, ctx.r11.u32);
	// stw r10,76(r3)
	PPC_STORE_U32(ctx.r3.u32 + 76, ctx.r10.u32);
	// stw r11,232(r3)
	PPC_STORE_U32(ctx.r3.u32 + 232, ctx.r11.u32);
	// stw r11,228(r3)
	PPC_STORE_U32(ctx.r3.u32 + 228, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_832F353C"))) PPC_WEAK_FUNC(sub_832F353C);
PPC_FUNC_IMPL(__imp__sub_832F353C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832F3540"))) PPC_WEAK_FUNC(sub_832F3540);
PPC_FUNC_IMPL(__imp__sub_832F3540) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_832F3558"))) PPC_WEAK_FUNC(sub_832F3558);
PPC_FUNC_IMPL(__imp__sub_832F3558) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r3,8(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// bl 0x833029a0
	ctx.lr = 0x832F3574;
	sub_833029A0(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_832F3590"))) PPC_WEAK_FUNC(sub_832F3590);
PPC_FUNC_IMPL(__imp__sub_832F3590) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bne cr6,0x832f35c4
	if (!ctx.cr6.eq) goto loc_832F35C4;
	// lwz r3,8(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// bl 0x833029b8
	ctx.lr = 0x832F35B8;
	sub_833029B8(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,140(r31)
	PPC_STORE_U32(ctx.r31.u32 + 140, ctx.r11.u32);
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
loc_832F35C4:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_832F35D8"))) PPC_WEAK_FUNC(sub_832F35D8);
PPC_FUNC_IMPL(__imp__sub_832F35D8) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,148(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 148);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_832F35E0"))) PPC_WEAK_FUNC(sub_832F35E0);
PPC_FUNC_IMPL(__imp__sub_832F35E0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r9,104(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 104);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addi r10,r3,72
	ctx.r10.s64 = ctx.r3.s64 + 72;
	// lwz r10,92(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 92);
	// lwz r31,8(r3)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// rlwinm r9,r9,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,72(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 72);
	// add r6,r9,r10
	ctx.r6.u64 = ctx.r9.u64 + ctx.r10.u64;
	// bl 0x83302910
	ctx.lr = 0x832F3620;
	sub_83302910(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83302980
	ctx.lr = 0x832F3628;
	sub_83302980(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_832F363C"))) PPC_WEAK_FUNC(sub_832F363C);
PPC_FUNC_IMPL(__imp__sub_832F363C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832F3640"))) PPC_WEAK_FUNC(sub_832F3640);
PPC_FUNC_IMPL(__imp__sub_832F3640) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r9,104(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 104);
	// addi r11,r3,72
	ctx.r11.s64 = ctx.r3.s64 + 72;
	// lwz r10,92(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 92);
	// rlwinm r5,r4,1,0,30
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r11,r9,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz r9,100(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 100);
	// lwz r31,8(r3)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// add r6,r11,r10
	ctx.r6.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lwz r4,72(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 72);
	// rlwinm r11,r9,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// add r7,r11,r6
	ctx.r7.u64 = ctx.r11.u64 + ctx.r6.u64;
	// bl 0x83302948
	ctx.lr = 0x832F3684;
	sub_83302948(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83302980
	ctx.lr = 0x832F368C;
	sub_83302980(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_832F36A0"))) PPC_WEAK_FUNC(sub_832F36A0);
PPC_FUNC_IMPL(__imp__sub_832F36A0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x833a01ac
	ctx.lr = 0x832F36A8;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,88(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 88);
	// lwz r6,112(r3)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r3.u32 + 112);
	// lwz r9,104(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 104);
	// add r10,r6,r11
	ctx.r10.u64 = ctx.r6.u64 + ctx.r11.u64;
	// lwz r8,96(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 96);
	// lwz r29,80(r3)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r3.u32 + 80);
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// lwz r4,76(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 76);
	// subf r7,r9,r8
	ctx.r7.s64 = ctx.r8.s64 - ctx.r9.s64;
	// lwz r5,108(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 108);
	// divw r31,r10,r11
	ctx.r31.s32 = ctx.r10.s32 / ctx.r11.s32;
	// add r7,r7,r11
	ctx.r7.u64 = ctx.r7.u64 + ctx.r11.u64;
	// mullw r31,r31,r11
	ctx.r31.s64 = int64_t(ctx.r31.s32) * int64_t(ctx.r11.s32);
	// subf r30,r31,r10
	ctx.r30.s64 = ctx.r10.s64 - ctx.r31.s64;
	// addi r7,r7,-1
	ctx.r7.s64 = ctx.r7.s64 + -1;
	// divw r31,r10,r11
	ctx.r31.s32 = ctx.r10.s32 / ctx.r11.s32;
	// subf r10,r30,r11
	ctx.r10.s64 = ctx.r11.s64 - ctx.r30.s64;
	// divw r7,r7,r11
	ctx.r7.s32 = ctx.r7.s32 / ctx.r11.s32;
	// divw r4,r4,r29
	ctx.r4.s32 = ctx.r4.s32 / ctx.r29.s32;
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// cmpw cr6,r31,r7
	ctx.cr6.compare<int32_t>(ctx.r31.s32, ctx.r7.s32, ctx.xer);
	// bge cr6,0x832f371c
	if (!ctx.cr6.lt) goto loc_832F371C;
	// mullw r30,r7,r11
	ctx.r30.s64 = int64_t(ctx.r7.s32) * int64_t(ctx.r11.s32);
	// subf r30,r10,r30
	ctx.r30.s64 = ctx.r30.s64 - ctx.r10.s64;
	// add r9,r30,r9
	ctx.r9.u64 = ctx.r30.u64 + ctx.r9.u64;
	// cmpw cr6,r9,r8
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r8.s32, ctx.xer);
	// bge cr6,0x832f371c
	if (!ctx.cr6.lt) goto loc_832F371C;
	// addi r7,r7,1
	ctx.r7.s64 = ctx.r7.s64 + 1;
loc_832F371C:
	// cmpw cr6,r6,r5
	ctx.cr6.compare<int32_t>(ctx.r6.s32, ctx.r5.s32, ctx.xer);
	// bge cr6,0x832f3728
	if (!ctx.cr6.lt) goto loc_832F3728;
	// add r5,r10,r5
	ctx.r5.u64 = ctx.r10.u64 + ctx.r5.u64;
loc_832F3728:
	// divw r11,r5,r11
	ctx.r11.s32 = ctx.r5.s32 / ctx.r11.s32;
	// cmpw cr6,r4,r11
	ctx.cr6.compare<int32_t>(ctx.r4.s32, ctx.r11.s32, ctx.xer);
	// ble cr6,0x832f3738
	if (!ctx.cr6.gt) goto loc_832F3738;
	// mr r4,r11
	ctx.r4.u64 = ctx.r11.u64;
loc_832F3738:
	// cmpw cr6,r4,r31
	ctx.cr6.compare<int32_t>(ctx.r4.s32, ctx.r31.s32, ctx.xer);
	// ble cr6,0x832f3744
	if (!ctx.cr6.gt) goto loc_832F3744;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
loc_832F3744:
	// cmpw cr6,r4,r7
	ctx.cr6.compare<int32_t>(ctx.r4.s32, ctx.r7.s32, ctx.xer);
	// ble cr6,0x832f3750
	if (!ctx.cr6.gt) goto loc_832F3750;
	// mr r4,r7
	ctx.r4.u64 = ctx.r7.u64;
loc_832F3750:
	// cmpwi cr6,r29,2
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 2, ctx.xer);
	// bne cr6,0x832f3760
	if (!ctx.cr6.eq) goto loc_832F3760;
	// bl 0x832f3640
	ctx.lr = 0x832F375C;
	sub_832F3640(ctx, base);
	// b 0x832f3764
	goto loc_832F3764;
loc_832F3760:
	// bl 0x832f35e0
	ctx.lr = 0x832F3764;
	sub_832F35E0(ctx, base);
loc_832F3764:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x833a01fc
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832F376C"))) PPC_WEAK_FUNC(sub_832F376C);
PPC_FUNC_IMPL(__imp__sub_832F376C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832F3770"))) PPC_WEAK_FUNC(sub_832F3770);
PPC_FUNC_IMPL(__imp__sub_832F3770) {
	PPC_FUNC_PROLOGUE();
	// rlwinm r11,r4,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 1) & 0xFFFFFFFE;
	// cmpwi cr6,r6,0
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// ble cr6,0x832f3798
	if (!ctx.cr6.gt) goto loc_832F3798;
	// subf r10,r11,r3
	ctx.r10.s64 = ctx.r3.s64 - ctx.r11.s64;
	// mtctr r6
	ctx.ctr.u64 = ctx.r6.u64;
loc_832F3788:
	// lhz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r11.u32 + 0);
	// sthx r9,r10,r11
	PPC_STORE_U16(ctx.r10.u32 + ctx.r11.u32, ctx.r9.u16);
	// addi r11,r11,2
	ctx.r11.s64 = ctx.r11.s64 + 2;
	// bdnz 0x832f3788
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_832F3788;
loc_832F3798:
	// add r11,r4,r5
	ctx.r11.u64 = ctx.r4.u64 + ctx.r5.u64;
	// rlwinm r10,r5,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r11,r11,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r10,r10,r3
	ctx.r10.u64 = ctx.r10.u64 + ctx.r3.u64;
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// cmpwi cr6,r6,0
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// blelr cr6
	if (!ctx.cr6.gt) return;
	// subf r10,r11,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r11.s64;
	// mtctr r6
	ctx.ctr.u64 = ctx.r6.u64;
loc_832F37BC:
	// lhz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r11.u32 + 0);
	// sthx r9,r10,r11
	PPC_STORE_U16(ctx.r10.u32 + ctx.r11.u32, ctx.r9.u16);
	// addi r11,r11,2
	ctx.r11.s64 = ctx.r11.s64 + 2;
	// bdnz 0x832f37bc
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_832F37BC;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_832F37D0"))) PPC_WEAK_FUNC(sub_832F37D0);
PPC_FUNC_IMPL(__imp__sub_832F37D0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x833a0194
	ctx.lr = 0x832F37D8;
	__savegprlr_23(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r30,88(r3)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r3.u32 + 88);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r26,84(r3)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r3.u32 + 84);
	// addi r27,r3,72
	ctx.r27.s64 = ctx.r3.s64 + 72;
	// lwz r28,112(r3)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r3.u32 + 112);
	// lwz r25,104(r3)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r3.u32 + 104);
	// lwz r24,92(r3)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r3.u32 + 92);
	// lwz r29,64(r3)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r3.u32 + 64);
	// lwz r23,68(r3)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r3.u32 + 68);
	// lwz r3,8(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// bl 0x8287b288
	ctx.lr = 0x832F3808;
	sub_8287B288(ctx, base);
	// add r11,r28,r30
	ctx.r11.u64 = ctx.r28.u64 + ctx.r30.u64;
	// lwz r9,80(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	// addi r10,r11,-1
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// mullw r11,r3,r30
	ctx.r11.s64 = int64_t(ctx.r3.s32) * int64_t(ctx.r30.s32);
	// divw r8,r10,r30
	ctx.r8.s32 = ctx.r10.s32 / ctx.r30.s32;
	// divw r11,r11,r9
	ctx.r11.s32 = ctx.r11.s32 / ctx.r9.s32;
	// mullw r9,r8,r9
	ctx.r9.s64 = int64_t(ctx.r8.s32) * int64_t(ctx.r9.s32);
	// cmpw cr6,r9,r3
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r3.s32, ctx.xer);
	// bgt cr6,0x832f3844
	if (ctx.cr6.gt) goto loc_832F3844;
	// divw r9,r10,r30
	ctx.r9.s32 = ctx.r10.s32 / ctx.r30.s32;
	// mullw r9,r9,r30
	ctx.r9.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r30.s32);
	// subf r10,r9,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r9.s64;
	// subf r10,r30,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r30.s64;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
loc_832F3844:
	// stw r11,144(r31)
	PPC_STORE_U32(ctx.r31.u32 + 144, ctx.r11.u32);
	// mullw r10,r3,r26
	ctx.r10.s64 = int64_t(ctx.r3.s32) * int64_t(ctx.r26.s32);
	// stw r10,148(r31)
	PPC_STORE_U32(ctx.r31.u32 + 148, ctx.r10.u32);
	// add r11,r11,r25
	ctx.r11.u64 = ctx.r11.u64 + ctx.r25.u64;
	// cmpw cr6,r11,r29
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r29.s32, ctx.xer);
	// blt cr6,0x832f38a8
	if (ctx.cr6.lt) goto loc_832F38A8;
	// lwz r10,8(r27)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r27.u32 + 8);
	// subf r6,r29,r11
	ctx.r6.s64 = ctx.r11.s64 - ctx.r29.s64;
	// cmpwi cr6,r10,2
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 2, ctx.xer);
	// bne cr6,0x832f3880
	if (!ctx.cr6.eq) goto loc_832F3880;
	// mr r5,r23
	ctx.r5.u64 = ctx.r23.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x832f3770
	ctx.lr = 0x832F387C;
	sub_832F3770(ctx, base);
	// b 0x832f38a8
	goto loc_832F38A8;
loc_832F3880:
	// rlwinm r11,r29,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 1) & 0xFFFFFFFE;
	// cmpwi cr6,r6,0
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// add r11,r11,r24
	ctx.r11.u64 = ctx.r11.u64 + ctx.r24.u64;
	// ble cr6,0x832f38a8
	if (!ctx.cr6.gt) goto loc_832F38A8;
	// subf r10,r11,r24
	ctx.r10.s64 = ctx.r24.s64 - ctx.r11.s64;
	// mtctr r6
	ctx.ctr.u64 = ctx.r6.u64;
loc_832F3898:
	// lhz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r11.u32 + 0);
	// sthx r9,r10,r11
	PPC_STORE_U16(ctx.r10.u32 + ctx.r11.u32, ctx.r9.u16);
	// addi r11,r11,2
	ctx.r11.s64 = ctx.r11.s64 + 2;
	// bdnz 0x832f3898
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_832F3898;
loc_832F38A8:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x833a01e4
	__restgprlr_23(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832F38B0"))) PPC_WEAK_FUNC(sub_832F38B0);
PPC_FUNC_IMPL(__imp__sub_832F38B0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r30,r3,72
	ctx.r30.s64 = ctx.r3.s64 + 72;
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x832f3914
	if (!ctx.cr6.eq) goto loc_832F3914;
	// lwz r3,8(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// bl 0x83110a18
	ctx.lr = 0x832F38E0;
	sub_83110A18(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x832f3914
	if (!ctx.cr0.eq) goto loc_832F3914;
	// lwz r11,120(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 120);
	// addi r6,r30,40
	ctx.r6.s64 = ctx.r30.s64 + 40;
	// addi r5,r30,36
	ctx.r5.s64 = ctx.r30.s64 + 36;
	// lwz r3,124(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 124);
	// addi r4,r30,32
	ctx.r4.s64 = ctx.r30.s64 + 32;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x832F3904;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x832f36a0
	ctx.lr = 0x832F390C;
	sub_832F36A0(ctx, base);
	// li r11,2
	ctx.r11.s64 = 2;
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
loc_832F3914:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// bne cr6,0x832f3968
	if (!ctx.cr6.eq) goto loc_832F3968;
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// bl 0x833029d0
	ctx.lr = 0x832F3928;
	sub_833029D0(ctx, base);
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// bl 0x83110a18
	ctx.lr = 0x832F3930;
	sub_83110A18(ctx, base);
	// cmpwi cr6,r3,3
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 3, ctx.xer);
	// bne cr6,0x832f3968
	if (!ctx.cr6.eq) goto loc_832F3968;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x832f37d0
	ctx.lr = 0x832F3940;
	sub_832F37D0(ctx, base);
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// bl 0x833029b8
	ctx.lr = 0x832F3948;
	sub_833029B8(ctx, base);
	// lwz r11,128(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 128);
	// lwz r5,144(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 144);
	// lwz r4,148(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 148);
	// lwz r3,132(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 132);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x832F3960;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r11,3
	ctx.r11.s64 = 3;
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
loc_832F3968:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_832F3980"))) PPC_WEAK_FUNC(sub_832F3980);
PPC_FUNC_IMPL(__imp__sub_832F3980) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x833a01a0
	ctx.lr = 0x832F3988;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31815
	ctx.r11.s64 = -2085027840;
	// li r30,0
	ctx.r30.s64 = 0;
	// addi r11,r11,-8768
	ctx.r11.s64 = ctx.r11.s64 + -8768;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// mr r27,r5
	ctx.r27.u64 = ctx.r5.u64;
	// mr r26,r6
	ctx.r26.u64 = ctx.r6.u64;
	// mr r9,r30
	ctx.r9.u64 = ctx.r30.u64;
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
loc_832F39B0:
	// lhz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r10.u32 + 0);
	// cmplwi r8,0
	ctx.cr0.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq 0x832f39d0
	if (ctx.cr0.eq) goto loc_832F39D0;
	// addi r10,r10,244
	ctx.r10.s64 = ctx.r10.s64 + 244;
	// addi r8,r11,7808
	ctx.r8.s64 = ctx.r11.s64 + 7808;
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// cmpw cr6,r10,r8
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r8.s32, ctx.xer);
	// blt cr6,0x832f39b0
	if (ctx.cr6.lt) goto loc_832F39B0;
loc_832F39D0:
	// cmpwi cr6,r9,32
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 32, ctx.xer);
	// bne cr6,0x832f39e0
	if (!ctx.cr6.eq) goto loc_832F39E0;
loc_832F39D8:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x832f3a70
	goto loc_832F3A70;
loc_832F39E0:
	// mulli r10,r9,244
	ctx.r10.s64 = ctx.r9.s64 * 244;
	// add r31,r10,r11
	ctx.r31.u64 = ctx.r10.u64 + ctx.r11.u64;
	// li r5,244
	ctx.r5.s64 = 244;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x833a2b30
	ctx.lr = 0x832F39F8;
	sub_833A2B30(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// sth r11,0(r31)
	PPC_STORE_U16(ctx.r31.u32 + 0, ctx.r11.u16);
	// bl 0x833027b0
	ctx.lr = 0x832F3A04;
	sub_833027B0(ctx, base);
	// stw r3,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r3.u32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bne 0x832f3a1c
	if (!ctx.cr0.eq) goto loc_832F3A1C;
	// bl 0x832f30a0
	ctx.lr = 0x832F3A18;
	sub_832F30A0(ctx, base);
	// b 0x832f39d8
	goto loc_832F39D8;
loc_832F3A1C:
	// lis r10,-31953
	ctx.r10.s64 = -2094071808;
	// stw r29,56(r31)
	PPC_STORE_U32(ctx.r31.u32 + 56, ctx.r29.u32);
	// lis r9,-31953
	ctx.r9.s64 = -2094071808;
	// stw r28,60(r31)
	PPC_STORE_U32(ctx.r31.u32 + 60, ctx.r28.u32);
	// li r11,-128
	ctx.r11.s64 = -128;
	// stw r27,64(r31)
	PPC_STORE_U32(ctx.r31.u32 + 64, ctx.r27.u32);
	// addi r10,r10,12368
	ctx.r10.s64 = ctx.r10.s64 + 12368;
	// stw r26,68(r31)
	PPC_STORE_U32(ctx.r31.u32 + 68, ctx.r26.u32);
	// addi r9,r9,12416
	ctx.r9.s64 = ctx.r9.s64 + 12416;
	// stw r31,124(r31)
	PPC_STORE_U32(ctx.r31.u32 + 124, ctx.r31.u32);
	// stw r10,120(r31)
	PPC_STORE_U32(ctx.r31.u32 + 120, ctx.r10.u32);
	// stw r9,128(r31)
	PPC_STORE_U32(ctx.r31.u32 + 128, ctx.r9.u32);
	// stw r31,132(r31)
	PPC_STORE_U32(ctx.r31.u32 + 132, ctx.r31.u32);
	// stw r30,196(r31)
	PPC_STORE_U32(ctx.r31.u32 + 196, ctx.r30.u32);
	// sth r30,216(r31)
	PPC_STORE_U16(ctx.r31.u32 + 216, ctx.r30.u16);
	// sth r11,218(r31)
	PPC_STORE_U16(ctx.r31.u32 + 218, ctx.r11.u16);
	// sth r11,220(r31)
	PPC_STORE_U16(ctx.r31.u32 + 220, ctx.r11.u16);
	// stw r30,200(r31)
	PPC_STORE_U32(ctx.r31.u32 + 200, ctx.r30.u32);
	// stw r30,204(r31)
	PPC_STORE_U32(ctx.r31.u32 + 204, ctx.r30.u32);
	// stw r30,208(r31)
	PPC_STORE_U32(ctx.r31.u32 + 208, ctx.r30.u32);
	// stw r30,212(r31)
	PPC_STORE_U32(ctx.r31.u32 + 212, ctx.r30.u32);
loc_832F3A70:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x833a01f0
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832F3A78"))) PPC_WEAK_FUNC(sub_832F3A78);
PPC_FUNC_IMPL(__imp__sub_832F3A78) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x833a0190
	ctx.lr = 0x832F3A80;
	__savegprlr_22(ctx, base);
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// clrlwi. r11,r4,31
	ctx.r11.u64 = ctx.r4.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x832f3ac4
	if (ctx.cr0.eq) goto loc_832F3AC4;
	// lis r11,-31823
	ctx.r11.s64 = -2085552128;
	// lwz r11,-30952(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -30952);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x832f3ac4
	if (!ctx.cr6.eq) goto loc_832F3AC4;
	// lis r11,-32210
	ctx.r11.s64 = -2110914560;
	// lis r10,-32210
	ctx.r10.s64 = -2110914560;
	// addi r4,r11,-21420
	ctx.r4.s64 = ctx.r11.s64 + -21420;
	// addi r3,r10,-21452
	ctx.r3.s64 = ctx.r10.s64 + -21452;
loc_832F3AB8:
	// bl 0x832ffac8
	ctx.lr = 0x832F3ABC;
	sub_832FFAC8(ctx, base);
loc_832F3ABC:
	// li r3,-1
	ctx.r3.s64 = -1;
	// b 0x832f3d48
	goto loc_832F3D48;
loc_832F3AC4:
	// addi r26,r31,20
	ctx.r26.s64 = ctx.r31.s64 + 20;
	// addi r24,r31,14
	ctx.r24.s64 = ctx.r31.s64 + 14;
	// addi r23,r31,15
	ctx.r23.s64 = ctx.r31.s64 + 15;
	// addi r27,r31,13
	ctx.r27.s64 = ctx.r31.s64 + 13;
	// addi r30,r31,12
	ctx.r30.s64 = ctx.r31.s64 + 12;
	// li r11,1
	ctx.r11.s64 = 1;
	// addi r22,r31,16
	ctx.r22.s64 = ctx.r31.s64 + 16;
	// addi r25,r31,24
	ctx.r25.s64 = ctx.r31.s64 + 24;
	// sth r11,2(r31)
	PPC_STORE_U16(ctx.r31.u32 + 2, ctx.r11.u16);
	// mr r10,r26
	ctx.r10.u64 = ctx.r26.u64;
	// stw r22,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r22.u32);
	// mr r9,r24
	ctx.r9.u64 = ctx.r24.u64;
	// stw r25,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r25.u32);
	// mr r8,r23
	ctx.r8.u64 = ctx.r23.u64;
	// mr r7,r27
	ctx.r7.u64 = ctx.r27.u64;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// addi r5,r1,102
	ctx.r5.s64 = ctx.r1.s64 + 102;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x83302be0
	ctx.lr = 0x832F3B14;
	sub_83302BE0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bge 0x832f3b24
	if (!ctx.cr0.lt) goto loc_832F3B24;
loc_832F3B1C:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x832f3d48
	goto loc_832F3D48;
loc_832F3B24:
	// lbz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 0);
	// extsb r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// ble cr6,0x832f3c10
	if (!ctx.cr6.gt) goto loc_832F3C10;
	// lwz r11,184(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 184);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x832f3b54
	if (!ctx.cr6.eq) goto loc_832F3B54;
	// lis r11,-32210
	ctx.r11.s64 = -2110914560;
	// lis r10,-32210
	ctx.r10.s64 = -2110914560;
	// addi r4,r11,-21488
	ctx.r4.s64 = ctx.r11.s64 + -21488;
	// addi r3,r10,-21520
	ctx.r3.s64 = ctx.r10.s64 + -21520;
	// b 0x832f3ab8
	goto loc_832F3AB8;
loc_832F3B54:
	// lbz r11,0(r24)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r24.u32 + 0);
	// li r10,8
	ctx.r10.s64 = 8;
	// li r30,0
	ctx.r30.s64 = 0;
	// extsb r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	// stb r10,0(r27)
	PPC_STORE_U8(ctx.r27.u32 + 0, ctx.r10.u8);
	// li r9,96
	ctx.r9.s64 = 96;
	// sth r30,28(r31)
	PPC_STORE_U16(ctx.r31.u32 + 28, ctx.r30.u16);
	// neg r11,r11
	ctx.r11.s64 = -ctx.r11.s64;
	// sth r30,36(r31)
	PPC_STORE_U16(ctx.r31.u32 + 36, ctx.r30.u16);
	// li r10,10
	ctx.r10.s64 = 10;
	// stw r9,0(r22)
	PPC_STORE_U32(ctx.r22.u32 + 0, ctx.r9.u32);
	// rlwinm r11,r11,6,0,25
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 6) & 0xFFFFFFC0;
	// sth r30,38(r31)
	PPC_STORE_U16(ctx.r31.u32 + 38, ctx.r30.u16);
	// sth r10,152(r31)
	PPC_STORE_U16(ctx.r31.u32 + 152, ctx.r10.u16);
	// addi r6,r31,223
	ctx.r6.s64 = ctx.r31.s64 + 223;
	// stw r30,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r30.u32);
	// addi r5,r31,222
	ctx.r5.s64 = ctx.r31.s64 + 222;
	// stw r30,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r30.u32);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// stb r11,0(r23)
	PPC_STORE_U8(ctx.r23.u32 + 0, ctx.r11.u8);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// stw r30,44(r31)
	PPC_STORE_U32(ctx.r31.u32 + 44, ctx.r30.u32);
	// stw r30,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r30.u32);
	// stw r30,52(r31)
	PPC_STORE_U32(ctx.r31.u32 + 52, ctx.r30.u32);
	// stw r30,136(r31)
	PPC_STORE_U32(ctx.r31.u32 + 136, ctx.r30.u32);
	// bl 0x83302d30
	ctx.lr = 0x832F3BBC;
	sub_83302D30(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x832f3b1c
	if (ctx.cr0.lt) goto loc_832F3B1C;
	// sth r30,112(r1)
	PPC_STORE_U16(ctx.r1.u32 + 112, ctx.r30.u16);
	// addi r7,r1,118
	ctx.r7.s64 = ctx.r1.s64 + 118;
	// addi r6,r1,116
	ctx.r6.s64 = ctx.r1.s64 + 116;
	// lwz r4,0(r25)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r25.u32 + 0);
	// addi r5,r1,114
	ctx.r5.s64 = ctx.r1.s64 + 114;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x832f3350
	ctx.lr = 0x832F3BE0;
	sub_832F3350(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x832f3abc
	if (ctx.cr0.lt) goto loc_832F3ABC;
	// lis r11,-31823
	ctx.r11.s64 = -2085552128;
	// lwz r10,-30972(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + -30972);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x832f3d08
	if (ctx.cr6.eq) goto loc_832F3D08;
	// rotlwi r11,r10,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// lwz r3,184(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 184);
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x832F3C0C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// b 0x832f3d08
	goto loc_832F3D08;
loc_832F3C10:
	// addi r6,r31,223
	ctx.r6.s64 = ctx.r31.s64 + 223;
	// addi r5,r31,222
	ctx.r5.s64 = ctx.r31.s64 + 222;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x83302d30
	ctx.lr = 0x832F3C24;
	sub_83302D30(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x832f3b1c
	if (ctx.cr0.lt) goto loc_832F3B1C;
	// addi r7,r1,96
	ctx.r7.s64 = ctx.r1.s64 + 96;
	// lwz r4,0(r25)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r25.u32 + 0);
	// addi r6,r1,98
	ctx.r6.s64 = ctx.r1.s64 + 98;
	// addi r5,r1,100
	ctx.r5.s64 = ctx.r1.s64 + 100;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x832f3350
	ctx.lr = 0x832F3C44;
	sub_832F3350(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x832f3abc
	if (ctx.cr0.lt) goto loc_832F3ABC;
	// lhz r6,96(r1)
	ctx.r6.u64 = PPC_LOAD_U16(ctx.r1.u32 + 96);
	// lhz r5,98(r1)
	ctx.r5.u64 = PPC_LOAD_U16(ctx.r1.u32 + 98);
	// lhz r4,100(r1)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r1.u32 + 100);
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// bl 0x833028c0
	ctx.lr = 0x832F3C60;
	sub_833028C0(ctx, base);
	// addi r30,r31,28
	ctx.r30.s64 = ctx.r31.s64 + 28;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x83302cf0
	ctx.lr = 0x832F3C74;
	sub_83302CF0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x832f3b1c
	if (ctx.cr0.lt) goto loc_832F3B1C;
	// addi r6,r1,104
	ctx.r6.s64 = ctx.r1.s64 + 104;
	// addi r5,r1,108
	ctx.r5.s64 = ctx.r1.s64 + 108;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x83302d80
	ctx.lr = 0x832F3C90;
	sub_83302D80(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x832f3b1c
	if (ctx.cr0.lt) goto loc_832F3B1C;
	// lha r5,0(r30)
	ctx.r5.s64 = int16_t(PPC_LOAD_U16(ctx.r30.u32 + 0));
	// lwz r4,0(r26)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// bl 0x83302858
	ctx.lr = 0x832F3CA8;
	sub_83302858(ctx, base);
	// addi r5,r1,104
	ctx.r5.s64 = ctx.r1.s64 + 104;
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addi r4,r1,108
	ctx.r4.s64 = ctx.r1.s64 + 108;
	// bl 0x83302870
	ctx.lr = 0x832F3CB8;
	sub_83302870(ctx, base);
	// addi r11,r31,52
	ctx.r11.s64 = ctx.r31.s64 + 52;
	// addi r10,r31,48
	ctx.r10.s64 = ctx.r31.s64 + 48;
	// addi r9,r31,44
	ctx.r9.s64 = ctx.r31.s64 + 44;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// addi r8,r31,40
	ctx.r8.s64 = ctx.r31.s64 + 40;
	// addi r7,r31,38
	ctx.r7.s64 = ctx.r31.s64 + 38;
	// addi r6,r31,36
	ctx.r6.s64 = ctx.r31.s64 + 36;
	// addi r5,r31,32
	ctx.r5.s64 = ctx.r31.s64 + 32;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x83302e08
	ctx.lr = 0x832F3CE4;
	sub_83302E08(ctx, base);
	// addi r8,r31,218
	ctx.r8.s64 = ctx.r31.s64 + 218;
	// addi r7,r31,216
	ctx.r7.s64 = ctx.r31.s64 + 216;
	// addi r6,r31,200
	ctx.r6.s64 = ctx.r31.s64 + 200;
	// addi r5,r31,196
	ctx.r5.s64 = ctx.r31.s64 + 196;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x83302ef8
	ctx.lr = 0x832F3D00;
	sub_83302EF8(ctx, base);
	// li r30,0
	ctx.r30.s64 = 0;
	// sth r30,152(r31)
	PPC_STORE_U16(ctx.r31.u32 + 152, ctx.r30.u16);
loc_832F3D08:
	// lbz r11,0(r24)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r24.u32 + 0);
	// lbz r10,0(r23)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r23.u32 + 0);
	// lwz r9,0(r22)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r22.u32 + 0);
	// extsb r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	// lwz r8,60(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 60);
	// extsb r10,r10
	ctx.r10.s64 = ctx.r10.s8;
	// lwz r7,64(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 64);
	// lwz r6,68(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 68);
	// lha r3,102(r1)
	ctx.r3.s64 = int16_t(PPC_LOAD_U16(ctx.r1.u32 + 102));
	// stw r11,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r11.u32);
	// stw r10,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r10.u32);
	// stw r9,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r9.u32);
	// stw r8,92(r31)
	PPC_STORE_U32(ctx.r31.u32 + 92, ctx.r8.u32);
	// stw r7,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r7.u32);
	// stw r6,100(r31)
	PPC_STORE_U32(ctx.r31.u32 + 100, ctx.r6.u32);
	// stw r30,140(r31)
	PPC_STORE_U32(ctx.r31.u32 + 140, ctx.r30.u32);
loc_832F3D48:
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x833a01e0
	__restgprlr_22(ctx, base);
	return;
}

