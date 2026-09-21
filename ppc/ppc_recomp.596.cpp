#include "ppc_recomp_shared.h"

__attribute__((alias("__imp__sub_83684540"))) PPC_WEAK_FUNC(sub_83684540);
PPC_FUNC_IMPL(__imp__sub_83684540) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-32229
	ctx.r10.s64 = -2112159744;
	// lis r9,-31827
	ctx.r9.s64 = -2085814272;
	// addi r6,r10,23992
	ctx.r6.s64 = ctx.r10.s64 + 23992;
	// lis r8,-32237
	ctx.r8.s64 = -2112684032;
	// lis r7,-31827
	ctx.r7.s64 = -2085814272;
	// stw r6,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r6.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r5,r9,-28024
	ctx.r5.s64 = ctx.r9.s64 + -28024;
	// addi r4,r8,-29772
	ctx.r4.s64 = ctx.r8.s64 + -29772;
	// stw r11,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r11.u32);
	// addi r3,r7,-10228
	ctx.r3.s64 = ctx.r7.s64 + -10228;
	// stw r11,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r11.u32);
	// li r31,4
	ctx.r31.s64 = 4;
	// stw r11,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r11.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r31,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r31.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,96
	ctx.r6.s64 = 96;
	// bl 0x82ef5ae8
	ctx.lr = 0x836845A8;
	sub_82EF5AE8(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_836845BC"))) PPC_WEAK_FUNC(sub_836845BC);
PPC_FUNC_IMPL(__imp__sub_836845BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_836845C0"))) PPC_WEAK_FUNC(sub_836845C0);
PPC_FUNC_IMPL(__imp__sub_836845C0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r10,r11,-12440
	ctx.r10.s64 = ctx.r11.s64 + -12440;
	// addi r3,r1,100
	ctx.r3.s64 = ctx.r1.s64 + 100;
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// bl 0x82eeece8
	ctx.lr = 0x836845E4;
	sub_82EEECE8(ctx, base);
	// lis r8,-31827
	ctx.r8.s64 = -2085814272;
	// lis r11,-32237
	ctx.r11.s64 = -2112684032;
	// addi r6,r8,-11452
	ctx.r6.s64 = ctx.r8.s64 + -11452;
	// addi r11,r11,-29772
	ctx.r11.s64 = ctx.r11.s64 + -29772;
	// lis r10,-32229
	ctx.r10.s64 = -2112159744;
	// lis r9,-32229
	ctx.r9.s64 = -2112159744;
	// stw r11,-11452(r8)
	PPC_STORE_U32(ctx.r8.u32 + -11452, ctx.r11.u32);
	// addi r10,r10,30508
	ctx.r10.s64 = ctx.r10.s64 + 30508;
	// addi r9,r9,29764
	ctx.r9.s64 = ctx.r9.s64 + 29764;
	// lis r8,-31995
	ctx.r8.s64 = -2096824320;
	// stw r10,4(r6)
	PPC_STORE_U32(ctx.r6.u32 + 4, ctx.r10.u32);
	// lis r7,-31995
	ctx.r7.s64 = -2096824320;
	// stw r9,16(r6)
	PPC_STORE_U32(ctx.r6.u32 + 16, ctx.r9.u32);
	// addi r11,r8,5448
	ctx.r11.s64 = ctx.r8.s64 + 5448;
	// addi r10,r7,5528
	ctx.r10.s64 = ctx.r7.s64 + 5528;
	// li r9,96
	ctx.r9.s64 = 96;
	// stw r11,8(r6)
	PPC_STORE_U32(ctx.r6.u32 + 8, ctx.r11.u32);
	// stw r10,12(r6)
	PPC_STORE_U32(ctx.r6.u32 + 12, ctx.r10.u32);
	// stw r9,20(r6)
	PPC_STORE_U32(ctx.r6.u32 + 20, ctx.r9.u32);
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83684640"))) PPC_WEAK_FUNC(sub_83684640);
PPC_FUNC_IMPL(__imp__sub_83684640) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-32229
	ctx.r10.s64 = -2112159744;
	// lis r9,-31827
	ctx.r9.s64 = -2085814272;
	// addi r6,r10,24088
	ctx.r6.s64 = ctx.r10.s64 + 24088;
	// lis r8,-32237
	ctx.r8.s64 = -2112684032;
	// lis r7,-31827
	ctx.r7.s64 = -2085814272;
	// stw r6,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r6.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r5,r9,-27976
	ctx.r5.s64 = ctx.r9.s64 + -27976;
	// addi r4,r8,-30276
	ctx.r4.s64 = ctx.r8.s64 + -30276;
	// stw r11,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r11.u32);
	// addi r3,r7,-11044
	ctx.r3.s64 = ctx.r7.s64 + -11044;
	// stw r11,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r11.u32);
	// li r31,4
	ctx.r31.s64 = 4;
	// stw r11,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r11.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r31,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r31.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,64
	ctx.r6.s64 = 64;
	// bl 0x82ef5ae8
	ctx.lr = 0x836846A8;
	sub_82EF5AE8(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_836846BC"))) PPC_WEAK_FUNC(sub_836846BC);
PPC_FUNC_IMPL(__imp__sub_836846BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_836846C0"))) PPC_WEAK_FUNC(sub_836846C0);
PPC_FUNC_IMPL(__imp__sub_836846C0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r10,r11,-12440
	ctx.r10.s64 = ctx.r11.s64 + -12440;
	// addi r3,r1,100
	ctx.r3.s64 = ctx.r1.s64 + 100;
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// bl 0x82eeece8
	ctx.lr = 0x836846E4;
	sub_82EEECE8(ctx, base);
	// lis r8,-31827
	ctx.r8.s64 = -2085814272;
	// lis r11,-32237
	ctx.r11.s64 = -2112684032;
	// addi r6,r8,-11068
	ctx.r6.s64 = ctx.r8.s64 + -11068;
	// addi r11,r11,-30276
	ctx.r11.s64 = ctx.r11.s64 + -30276;
	// lis r10,-32229
	ctx.r10.s64 = -2112159744;
	// lis r9,-32229
	ctx.r9.s64 = -2112159744;
	// stw r11,-11068(r8)
	PPC_STORE_U32(ctx.r8.u32 + -11068, ctx.r11.u32);
	// addi r10,r10,30528
	ctx.r10.s64 = ctx.r10.s64 + 30528;
	// addi r9,r9,29836
	ctx.r9.s64 = ctx.r9.s64 + 29836;
	// lis r8,-31995
	ctx.r8.s64 = -2096824320;
	// stw r10,4(r6)
	PPC_STORE_U32(ctx.r6.u32 + 4, ctx.r10.u32);
	// lis r7,-31995
	ctx.r7.s64 = -2096824320;
	// stw r9,16(r6)
	PPC_STORE_U32(ctx.r6.u32 + 16, ctx.r9.u32);
	// addi r11,r8,5632
	ctx.r11.s64 = ctx.r8.s64 + 5632;
	// addi r10,r7,5712
	ctx.r10.s64 = ctx.r7.s64 + 5712;
	// li r9,64
	ctx.r9.s64 = 64;
	// stw r11,8(r6)
	PPC_STORE_U32(ctx.r6.u32 + 8, ctx.r11.u32);
	// stw r10,12(r6)
	PPC_STORE_U32(ctx.r6.u32 + 12, ctx.r10.u32);
	// stw r9,20(r6)
	PPC_STORE_U32(ctx.r6.u32 + 20, ctx.r9.u32);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83684740"))) PPC_WEAK_FUNC(sub_83684740);
PPC_FUNC_IMPL(__imp__sub_83684740) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-32229
	ctx.r10.s64 = -2112159744;
	// lis r9,-31827
	ctx.r9.s64 = -2085814272;
	// addi r6,r10,24184
	ctx.r6.s64 = ctx.r10.s64 + 24184;
	// lis r8,-32237
	ctx.r8.s64 = -2112684032;
	// lis r7,-31827
	ctx.r7.s64 = -2085814272;
	// stw r6,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r6.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r5,r9,-27976
	ctx.r5.s64 = ctx.r9.s64 + -27976;
	// addi r4,r8,-29932
	ctx.r4.s64 = ctx.r8.s64 + -29932;
	// stw r11,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r11.u32);
	// addi r3,r7,-10684
	ctx.r3.s64 = ctx.r7.s64 + -10684;
	// stw r11,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r11.u32);
	// li r31,8
	ctx.r31.s64 = 8;
	// stw r11,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r11.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r31,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r31.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,96
	ctx.r6.s64 = 96;
	// bl 0x82ef5ae8
	ctx.lr = 0x836847A8;
	sub_82EF5AE8(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_836847BC"))) PPC_WEAK_FUNC(sub_836847BC);
PPC_FUNC_IMPL(__imp__sub_836847BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_836847C0"))) PPC_WEAK_FUNC(sub_836847C0);
PPC_FUNC_IMPL(__imp__sub_836847C0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r10,r11,-12440
	ctx.r10.s64 = ctx.r11.s64 + -12440;
	// addi r3,r1,100
	ctx.r3.s64 = ctx.r1.s64 + 100;
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// bl 0x82eeece8
	ctx.lr = 0x836847E4;
	sub_82EEECE8(ctx, base);
	// lis r8,-31827
	ctx.r8.s64 = -2085814272;
	// lis r11,-32237
	ctx.r11.s64 = -2112684032;
	// addi r6,r8,-10612
	ctx.r6.s64 = ctx.r8.s64 + -10612;
	// addi r11,r11,-29932
	ctx.r11.s64 = ctx.r11.s64 + -29932;
	// lis r10,-32229
	ctx.r10.s64 = -2112159744;
	// lis r9,-32229
	ctx.r9.s64 = -2112159744;
	// stw r11,-10612(r8)
	PPC_STORE_U32(ctx.r8.u32 + -10612, ctx.r11.u32);
	// addi r10,r10,30544
	ctx.r10.s64 = ctx.r10.s64 + 30544;
	// addi r9,r9,30224
	ctx.r9.s64 = ctx.r9.s64 + 30224;
	// lis r8,-31995
	ctx.r8.s64 = -2096824320;
	// stw r10,4(r6)
	PPC_STORE_U32(ctx.r6.u32 + 4, ctx.r10.u32);
	// lis r7,-31995
	ctx.r7.s64 = -2096824320;
	// stw r9,16(r6)
	PPC_STORE_U32(ctx.r6.u32 + 16, ctx.r9.u32);
	// addi r11,r8,8168
	ctx.r11.s64 = ctx.r8.s64 + 8168;
	// addi r10,r7,5816
	ctx.r10.s64 = ctx.r7.s64 + 5816;
	// li r9,96
	ctx.r9.s64 = 96;
	// stw r11,8(r6)
	PPC_STORE_U32(ctx.r6.u32 + 8, ctx.r11.u32);
	// stw r10,12(r6)
	PPC_STORE_U32(ctx.r6.u32 + 12, ctx.r10.u32);
	// stw r9,20(r6)
	PPC_STORE_U32(ctx.r6.u32 + 20, ctx.r9.u32);
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83684840"))) PPC_WEAK_FUNC(sub_83684840);
PPC_FUNC_IMPL(__imp__sub_83684840) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-32229
	ctx.r10.s64 = -2112159744;
	// lis r9,-31827
	ctx.r9.s64 = -2085814272;
	// addi r6,r10,24376
	ctx.r6.s64 = ctx.r10.s64 + 24376;
	// lis r8,-32237
	ctx.r8.s64 = -2112684032;
	// lis r7,-31827
	ctx.r7.s64 = -2085814272;
	// stw r6,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r6.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r5,r9,-27976
	ctx.r5.s64 = ctx.r9.s64 + -27976;
	// addi r4,r8,-29884
	ctx.r4.s64 = ctx.r8.s64 + -29884;
	// stw r11,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r11.u32);
	// addi r3,r7,-10128
	ctx.r3.s64 = ctx.r7.s64 + -10128;
	// stw r11,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r11.u32);
	// li r31,4
	ctx.r31.s64 = 4;
	// stw r11,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r11.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r31,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r31.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,80
	ctx.r6.s64 = 80;
	// bl 0x82ef5ae8
	ctx.lr = 0x836848A8;
	sub_82EF5AE8(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_836848BC"))) PPC_WEAK_FUNC(sub_836848BC);
PPC_FUNC_IMPL(__imp__sub_836848BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_836848C0"))) PPC_WEAK_FUNC(sub_836848C0);
PPC_FUNC_IMPL(__imp__sub_836848C0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r10,r11,-12440
	ctx.r10.s64 = ctx.r11.s64 + -12440;
	// addi r3,r1,100
	ctx.r3.s64 = ctx.r1.s64 + 100;
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// bl 0x82eeece8
	ctx.lr = 0x836848E4;
	sub_82EEECE8(ctx, base);
	// lis r8,-31827
	ctx.r8.s64 = -2085814272;
	// lis r11,-32237
	ctx.r11.s64 = -2112684032;
	// addi r6,r8,-11692
	ctx.r6.s64 = ctx.r8.s64 + -11692;
	// addi r11,r11,-29884
	ctx.r11.s64 = ctx.r11.s64 + -29884;
	// lis r10,-32229
	ctx.r10.s64 = -2112159744;
	// lis r9,-32229
	ctx.r9.s64 = -2112159744;
	// stw r11,-11692(r8)
	PPC_STORE_U32(ctx.r8.u32 + -11692, ctx.r11.u32);
	// addi r10,r10,30568
	ctx.r10.s64 = ctx.r10.s64 + 30568;
	// addi r9,r9,29872
	ctx.r9.s64 = ctx.r9.s64 + 29872;
	// lis r8,-31995
	ctx.r8.s64 = -2096824320;
	// stw r10,4(r6)
	PPC_STORE_U32(ctx.r6.u32 + 4, ctx.r10.u32);
	// lis r7,-31995
	ctx.r7.s64 = -2096824320;
	// stw r9,16(r6)
	PPC_STORE_U32(ctx.r6.u32 + 16, ctx.r9.u32);
	// addi r11,r8,5856
	ctx.r11.s64 = ctx.r8.s64 + 5856;
	// addi r10,r7,5936
	ctx.r10.s64 = ctx.r7.s64 + 5936;
	// li r9,80
	ctx.r9.s64 = 80;
	// stw r11,8(r6)
	PPC_STORE_U32(ctx.r6.u32 + 8, ctx.r11.u32);
	// stw r10,12(r6)
	PPC_STORE_U32(ctx.r6.u32 + 12, ctx.r10.u32);
	// stw r9,20(r6)
	PPC_STORE_U32(ctx.r6.u32 + 20, ctx.r9.u32);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83684940"))) PPC_WEAK_FUNC(sub_83684940);
PPC_FUNC_IMPL(__imp__sub_83684940) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// li r3,8
	ctx.r3.s64 = 8;
	// addi r11,r11,24720
	ctx.r11.s64 = ctx.r11.s64 + 24720;
	// lis r9,-31827
	ctx.r9.s64 = -2085814272;
	// stw r3,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r3.u32);
	// addi r6,r11,192
	ctx.r6.s64 = ctx.r11.s64 + 192;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// lis r8,-32237
	ctx.r8.s64 = -2112684032;
	// lis r7,-31827
	ctx.r7.s64 = -2085814272;
	// stw r6,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r6.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r5,r9,-28024
	ctx.r5.s64 = ctx.r9.s64 + -28024;
	// addi r4,r8,-30148
	ctx.r4.s64 = ctx.r8.s64 + -30148;
	// stw r10,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r10.u32);
	// addi r3,r7,-10948
	ctx.r3.s64 = ctx.r7.s64 + -10948;
	// stw r10,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r10.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r10,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r10.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,96
	ctx.r6.s64 = 96;
	// bl 0x82ef5ae8
	ctx.lr = 0x836849A4;
	sub_82EF5AE8(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_836849B4"))) PPC_WEAK_FUNC(sub_836849B4);
PPC_FUNC_IMPL(__imp__sub_836849B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_836849B8"))) PPC_WEAK_FUNC(sub_836849B8);
PPC_FUNC_IMPL(__imp__sub_836849B8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r10,r11,-12440
	ctx.r10.s64 = ctx.r11.s64 + -12440;
	// addi r3,r1,100
	ctx.r3.s64 = ctx.r1.s64 + 100;
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// bl 0x82eeece8
	ctx.lr = 0x836849DC;
	sub_82EEECE8(ctx, base);
	// lis r8,-31827
	ctx.r8.s64 = -2085814272;
	// lis r11,-32237
	ctx.r11.s64 = -2112684032;
	// addi r6,r8,-11236
	ctx.r6.s64 = ctx.r8.s64 + -11236;
	// addi r11,r11,-30148
	ctx.r11.s64 = ctx.r11.s64 + -30148;
	// lis r10,-32229
	ctx.r10.s64 = -2112159744;
	// lis r9,-32229
	ctx.r9.s64 = -2112159744;
	// stw r11,-11236(r8)
	PPC_STORE_U32(ctx.r8.u32 + -11236, ctx.r11.u32);
	// addi r10,r10,30632
	ctx.r10.s64 = ctx.r10.s64 + 30632;
	// addi r9,r9,29908
	ctx.r9.s64 = ctx.r9.s64 + 29908;
	// lis r8,-31995
	ctx.r8.s64 = -2096824320;
	// stw r10,4(r6)
	PPC_STORE_U32(ctx.r6.u32 + 4, ctx.r10.u32);
	// lis r7,-31995
	ctx.r7.s64 = -2096824320;
	// stw r9,16(r6)
	PPC_STORE_U32(ctx.r6.u32 + 16, ctx.r9.u32);
	// addi r11,r8,6040
	ctx.r11.s64 = ctx.r8.s64 + 6040;
	// addi r10,r7,6120
	ctx.r10.s64 = ctx.r7.s64 + 6120;
	// li r9,96
	ctx.r9.s64 = 96;
	// stw r11,8(r6)
	PPC_STORE_U32(ctx.r6.u32 + 8, ctx.r11.u32);
	// stw r10,12(r6)
	PPC_STORE_U32(ctx.r6.u32 + 12, ctx.r10.u32);
	// stw r9,20(r6)
	PPC_STORE_U32(ctx.r6.u32 + 20, ctx.r9.u32);
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83684A38"))) PPC_WEAK_FUNC(sub_83684A38);
PPC_FUNC_IMPL(__imp__sub_83684A38) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r11,r11,25536
	ctx.r11.s64 = ctx.r11.s64 + 25536;
	// li r3,19
	ctx.r3.s64 = 19;
	// stw r4,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r4.u32);
	// addi r6,r11,456
	ctx.r6.s64 = ctx.r11.s64 + 456;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// lis r9,-31827
	ctx.r9.s64 = -2085814272;
	// stw r3,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r3.u32);
	// lis r8,-32237
	ctx.r8.s64 = -2112684032;
	// stw r6,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r6.u32);
	// lis r7,-31827
	ctx.r7.s64 = -2085814272;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r5,r9,-10516
	ctx.r5.s64 = ctx.r9.s64 + -10516;
	// addi r4,r8,-29980
	ctx.r4.s64 = ctx.r8.s64 + -29980;
	// stw r10,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r10.u32);
	// addi r3,r7,-11284
	ctx.r3.s64 = ctx.r7.s64 + -11284;
	// stw r10,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r10.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,144
	ctx.r6.s64 = 144;
	// bl 0x82ef5ae8
	ctx.lr = 0x83684AA0;
	sub_82EF5AE8(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83684AB0"))) PPC_WEAK_FUNC(sub_83684AB0);
PPC_FUNC_IMPL(__imp__sub_83684AB0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// li r3,16
	ctx.r3.s64 = 16;
	// addi r11,r11,26584
	ctx.r11.s64 = ctx.r11.s64 + 26584;
	// lis r9,-31827
	ctx.r9.s64 = -2085814272;
	// stw r3,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r3.u32);
	// addi r6,r11,384
	ctx.r6.s64 = ctx.r11.s64 + 384;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// lis r8,-32237
	ctx.r8.s64 = -2112684032;
	// lis r7,-31827
	ctx.r7.s64 = -2085814272;
	// stw r6,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r6.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r5,r9,-10516
	ctx.r5.s64 = ctx.r9.s64 + -10516;
	// addi r4,r8,-30068
	ctx.r4.s64 = ctx.r8.s64 + -30068;
	// stw r10,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r10.u32);
	// addi r3,r7,-10056
	ctx.r3.s64 = ctx.r7.s64 + -10056;
	// stw r10,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r10.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r10,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r10.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,112
	ctx.r6.s64 = 112;
	// bl 0x82ef5ae8
	ctx.lr = 0x83684B14;
	sub_82EF5AE8(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83684B24"))) PPC_WEAK_FUNC(sub_83684B24);
PPC_FUNC_IMPL(__imp__sub_83684B24) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83684B28"))) PPC_WEAK_FUNC(sub_83684B28);
PPC_FUNC_IMPL(__imp__sub_83684B28) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-31842
	ctx.r10.s64 = -2086797312;
	// lis r9,-32237
	ctx.r9.s64 = -2112684032;
	// lis r8,-31827
	ctx.r8.s64 = -2085814272;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r5,r10,19184
	ctx.r5.s64 = ctx.r10.s64 + 19184;
	// addi r4,r9,-30008
	ctx.r4.s64 = ctx.r9.s64 + -30008;
	// stw r11,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r11.u32);
	// addi r3,r8,-10516
	ctx.r3.s64 = ctx.r8.s64 + -10516;
	// stw r11,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r11.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r11.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// stw r11,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r11.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// li r6,8
	ctx.r6.s64 = 8;
	// bl 0x82ef5ae8
	ctx.lr = 0x83684B80;
	sub_82EF5AE8(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83684B90"))) PPC_WEAK_FUNC(sub_83684B90);
PPC_FUNC_IMPL(__imp__sub_83684B90) {
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
	// li r6,112
	ctx.r6.s64 = 112;
	// li r5,255
	ctx.r5.s64 = 255;
	// li r4,255
	ctx.r4.s64 = 255;
	// li r3,255
	ctx.r3.s64 = 255;
	// bl 0x82eef230
	ctx.lr = 0x83684BB0;
	sub_82EEF230(ctx, base);
	// lis r11,-31827
	ctx.r11.s64 = -2085814272;
	// stw r3,-10132(r11)
	PPC_STORE_U32(ctx.r11.u32 + -10132, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83684BC8"))) PPC_WEAK_FUNC(sub_83684BC8);
PPC_FUNC_IMPL(__imp__sub_83684BC8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31848
	ctx.r11.s64 = -2087190528;
	// lis r10,-31848
	ctx.r10.s64 = -2087190528;
	// addi r9,r10,14800
	ctx.r9.s64 = ctx.r10.s64 + 14800;
	// lwz r11,12420(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12420);
	// stw r11,56(r9)
	PPC_STORE_U32(ctx.r9.u32 + 56, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83684BE0"))) PPC_WEAK_FUNC(sub_83684BE0);
PPC_FUNC_IMPL(__imp__sub_83684BE0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-31848
	ctx.r10.s64 = -2087190528;
	// lis r9,-32230
	ctx.r9.s64 = -2112225280;
	// addi r7,r10,14800
	ctx.r7.s64 = ctx.r10.s64 + 14800;
	// lis r8,-31827
	ctx.r8.s64 = -2085814272;
	// li r6,3
	ctx.r6.s64 = 3;
	// stw r7,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r7.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r4,r9,10512
	ctx.r4.s64 = ctx.r9.s64 + 10512;
	// stw r6,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r6.u32);
	// addi r3,r8,-10420
	ctx.r3.s64 = ctx.r8.s64 + -10420;
	// stw r11,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r11.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r11.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r11,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r11.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,16
	ctx.r6.s64 = 16;
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x82ef5ae8
	ctx.lr = 0x83684C40;
	sub_82EF5AE8(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83684C50"))) PPC_WEAK_FUNC(sub_83684C50);
PPC_FUNC_IMPL(__imp__sub_83684C50) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// lis r10,-31842
	ctx.r10.s64 = -2086797312;
	// addi r9,r11,27128
	ctx.r9.s64 = ctx.r11.s64 + 27128;
	// lis r8,-32230
	ctx.r8.s64 = -2112225280;
	// addi r6,r9,40
	ctx.r6.s64 = ctx.r9.s64 + 40;
	// lis r7,-31827
	ctx.r7.s64 = -2085814272;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r6,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r6.u32);
	// addi r5,r10,19184
	ctx.r5.s64 = ctx.r10.s64 + 19184;
	// addi r4,r8,10640
	ctx.r4.s64 = ctx.r8.s64 + 10640;
	// stw r11,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r11.u32);
	// addi r3,r7,-11500
	ctx.r3.s64 = ctx.r7.s64 + -11500;
	// stw r11,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r11.u32);
	// li r31,4
	ctx.r31.s64 = 4;
	// stw r11,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r11.u32);
	// li r10,2
	ctx.r10.s64 = 2;
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// li r8,3
	ctx.r8.s64 = 3;
	// stw r31,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r31.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,52
	ctx.r6.s64 = 52;
	// bl 0x82ef5ae8
	ctx.lr = 0x83684CB8;
	sub_82EF5AE8(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83684CCC"))) PPC_WEAK_FUNC(sub_83684CCC);
PPC_FUNC_IMPL(__imp__sub_83684CCC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83684CD0"))) PPC_WEAK_FUNC(sub_83684CD0);
PPC_FUNC_IMPL(__imp__sub_83684CD0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x83053088
	ctx.lr = 0x83684CE8;
	sub_83053088(ctx, base);
	// lis r10,-31827
	ctx.r10.s64 = -2085814272;
	// lis r11,-32230
	ctx.r11.s64 = -2112225280;
	// addi r7,r10,-11668
	ctx.r7.s64 = ctx.r10.s64 + -11668;
	// addi r11,r11,10640
	ctx.r11.s64 = ctx.r11.s64 + 10640;
	// lis r8,-31995
	ctx.r8.s64 = -2096824320;
	// stw r11,-11668(r10)
	PPC_STORE_U32(ctx.r10.u32 + -11668, ctx.r11.u32);
	// lis r10,-32229
	ctx.r10.s64 = -2112159744;
	// addi r11,r8,6504
	ctx.r11.s64 = ctx.r8.s64 + 6504;
	// addi r10,r10,30768
	ctx.r10.s64 = ctx.r10.s64 + 30768;
	// stw r11,12(r7)
	PPC_STORE_U32(ctx.r7.u32 + 12, ctx.r11.u32);
	// lis r9,-31995
	ctx.r9.s64 = -2096824320;
	// stw r10,4(r7)
	PPC_STORE_U32(ctx.r7.u32 + 4, ctx.r10.u32);
	// li r10,52
	ctx.r10.s64 = 52;
	// addi r9,r9,6488
	ctx.r9.s64 = ctx.r9.s64 + 6488;
	// stw r10,20(r7)
	PPC_STORE_U32(ctx.r7.u32 + 20, ctx.r10.u32);
	// stw r9,8(r7)
	PPC_STORE_U32(ctx.r7.u32 + 8, ctx.r9.u32);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// stw r11,16(r7)
	PPC_STORE_U32(ctx.r7.u32 + 16, ctx.r11.u32);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83684D40"))) PPC_WEAK_FUNC(sub_83684D40);
PPC_FUNC_IMPL(__imp__sub_83684D40) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-32229
	ctx.r10.s64 = -2112159744;
	// lis r9,-32237
	ctx.r9.s64 = -2112684032;
	// addi r7,r10,27264
	ctx.r7.s64 = ctx.r10.s64 + 27264;
	// lis r8,-31827
	ctx.r8.s64 = -2085814272;
	// li r6,2
	ctx.r6.s64 = 2;
	// stw r7,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r7.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r4,r9,-30232
	ctx.r4.s64 = ctx.r9.s64 + -30232;
	// stw r6,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r6.u32);
	// addi r3,r8,-9888
	ctx.r3.s64 = ctx.r8.s64 + -9888;
	// stw r11,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r11.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r11.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r11,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r11.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,8
	ctx.r6.s64 = 8;
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x82ef5ae8
	ctx.lr = 0x83684DA0;
	sub_82EF5AE8(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83684DB0"))) PPC_WEAK_FUNC(sub_83684DB0);
PPC_FUNC_IMPL(__imp__sub_83684DB0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-32229
	ctx.r10.s64 = -2112159744;
	// lis r9,-32237
	ctx.r9.s64 = -2112684032;
	// addi r7,r10,27312
	ctx.r7.s64 = ctx.r10.s64 + 27312;
	// lis r8,-31827
	ctx.r8.s64 = -2085814272;
	// li r6,3
	ctx.r6.s64 = 3;
	// stw r7,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r7.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r4,r9,-30204
	ctx.r4.s64 = ctx.r9.s64 + -30204;
	// stw r6,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r6.u32);
	// addi r3,r8,-10180
	ctx.r3.s64 = ctx.r8.s64 + -10180;
	// stw r11,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r11.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r11.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r11,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r11.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,12
	ctx.r6.s64 = 12;
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x82ef5ae8
	ctx.lr = 0x83684E10;
	sub_82EF5AE8(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83684E20"))) PPC_WEAK_FUNC(sub_83684E20);
PPC_FUNC_IMPL(__imp__sub_83684E20) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-32229
	ctx.r10.s64 = -2112159744;
	// lis r9,-31842
	ctx.r9.s64 = -2086797312;
	// addi r6,r10,27384
	ctx.r6.s64 = ctx.r10.s64 + 27384;
	// lis r8,-32237
	ctx.r8.s64 = -2112684032;
	// lis r7,-31827
	ctx.r7.s64 = -2085814272;
	// stw r6,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r6.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r5,r9,19184
	ctx.r5.s64 = ctx.r9.s64 + 19184;
	// addi r4,r8,-30172
	ctx.r4.s64 = ctx.r8.s64 + -30172;
	// stw r11,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r11.u32);
	// addi r3,r7,-11620
	ctx.r3.s64 = ctx.r7.s64 + -11620;
	// stw r11,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r11.u32);
	// li r31,3
	ctx.r31.s64 = 3;
	// stw r11,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r11.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r31,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r31.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,44
	ctx.r6.s64 = 44;
	// bl 0x82ef5ae8
	ctx.lr = 0x83684E88;
	sub_82EF5AE8(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83684E9C"))) PPC_WEAK_FUNC(sub_83684E9C);
PPC_FUNC_IMPL(__imp__sub_83684E9C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83684EA0"))) PPC_WEAK_FUNC(sub_83684EA0);
PPC_FUNC_IMPL(__imp__sub_83684EA0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-32229
	ctx.r10.s64 = -2112159744;
	// lis r9,-31827
	ctx.r9.s64 = -2085814272;
	// addi r6,r10,27456
	ctx.r6.s64 = ctx.r10.s64 + 27456;
	// lis r8,-32239
	ctx.r8.s64 = -2112815104;
	// lis r7,-31827
	ctx.r7.s64 = -2085814272;
	// stw r6,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r6.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r5,r9,-20408
	ctx.r5.s64 = ctx.r9.s64 + -20408;
	// addi r4,r8,-25060
	ctx.r4.s64 = ctx.r8.s64 + -25060;
	// stw r11,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r11.u32);
	// addi r3,r7,-10732
	ctx.r3.s64 = ctx.r7.s64 + -10732;
	// stw r11,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r11.u32);
	// li r31,1
	ctx.r31.s64 = 1;
	// stw r11,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r11.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r31,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r31.u32);
	// li r8,1
	ctx.r8.s64 = 1;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,56
	ctx.r6.s64 = 56;
	// bl 0x82ef5ae8
	ctx.lr = 0x83684F08;
	sub_82EF5AE8(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83684F1C"))) PPC_WEAK_FUNC(sub_83684F1C);
PPC_FUNC_IMPL(__imp__sub_83684F1C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83684F20"))) PPC_WEAK_FUNC(sub_83684F20);
PPC_FUNC_IMPL(__imp__sub_83684F20) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-32229
	ctx.r10.s64 = -2112159744;
	// lis r9,-31827
	ctx.r9.s64 = -2085814272;
	// addi r6,r10,27480
	ctx.r6.s64 = ctx.r10.s64 + 27480;
	// lis r8,-32237
	ctx.r8.s64 = -2112684032;
	// lis r7,-31827
	ctx.r7.s64 = -2085814272;
	// stw r6,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r6.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r5,r9,-20408
	ctx.r5.s64 = ctx.r9.s64 + -20408;
	// addi r4,r8,-30100
	ctx.r4.s64 = ctx.r8.s64 + -30100;
	// stw r11,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r11.u32);
	// addi r3,r7,-10468
	ctx.r3.s64 = ctx.r7.s64 + -10468;
	// stw r11,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r11.u32);
	// li r31,1
	ctx.r31.s64 = 1;
	// stw r11,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r11.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r31,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r31.u32);
	// li r8,1
	ctx.r8.s64 = 1;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,64
	ctx.r6.s64 = 64;
	// bl 0x82ef5ae8
	ctx.lr = 0x83684F88;
	sub_82EF5AE8(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83684F9C"))) PPC_WEAK_FUNC(sub_83684F9C);
PPC_FUNC_IMPL(__imp__sub_83684F9C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83684FA0"))) PPC_WEAK_FUNC(sub_83684FA0);
PPC_FUNC_IMPL(__imp__sub_83684FA0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-32229
	ctx.r10.s64 = -2112159744;
	// lis r9,-31827
	ctx.r9.s64 = -2085814272;
	// addi r6,r10,27504
	ctx.r6.s64 = ctx.r10.s64 + 27504;
	// lis r8,-32237
	ctx.r8.s64 = -2112684032;
	// lis r7,-31827
	ctx.r7.s64 = -2085814272;
	// stw r6,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r6.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r5,r9,-20408
	ctx.r5.s64 = ctx.r9.s64 + -20408;
	// addi r4,r8,-29908
	ctx.r4.s64 = ctx.r8.s64 + -29908;
	// stw r11,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r11.u32);
	// addi r3,r7,-10276
	ctx.r3.s64 = ctx.r7.s64 + -10276;
	// stw r11,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r11.u32);
	// li r31,2
	ctx.r31.s64 = 2;
	// stw r11,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r11.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r31,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r31.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,180
	ctx.r6.s64 = 180;
	// bl 0x82ef5ae8
	ctx.lr = 0x83685008;
	sub_82EF5AE8(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8368501C"))) PPC_WEAK_FUNC(sub_8368501C);
PPC_FUNC_IMPL(__imp__sub_8368501C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83685020"))) PPC_WEAK_FUNC(sub_83685020);
PPC_FUNC_IMPL(__imp__sub_83685020) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-32229
	ctx.r10.s64 = -2112159744;
	// lis r9,-31827
	ctx.r9.s64 = -2085814272;
	// addi r6,r10,27552
	ctx.r6.s64 = ctx.r10.s64 + 27552;
	// lis r8,-32237
	ctx.r8.s64 = -2112684032;
	// lis r7,-31827
	ctx.r7.s64 = -2085814272;
	// stw r6,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r6.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r5,r9,-23704
	ctx.r5.s64 = ctx.r9.s64 + -23704;
	// addi r4,r8,-30132
	ctx.r4.s64 = ctx.r8.s64 + -30132;
	// stw r11,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r11.u32);
	// addi r3,r7,-10324
	ctx.r3.s64 = ctx.r7.s64 + -10324;
	// stw r11,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r11.u32);
	// li r31,1
	ctx.r31.s64 = 1;
	// stw r11,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r11.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r31,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r31.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,80
	ctx.r6.s64 = 80;
	// bl 0x82ef5ae8
	ctx.lr = 0x83685088;
	sub_82EF5AE8(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8368509C"))) PPC_WEAK_FUNC(sub_8368509C);
PPC_FUNC_IMPL(__imp__sub_8368509C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_836850A0"))) PPC_WEAK_FUNC(sub_836850A0);
PPC_FUNC_IMPL(__imp__sub_836850A0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r10,r11,-10500
	ctx.r10.s64 = ctx.r11.s64 + -10500;
	// addi r3,r1,136
	ctx.r3.s64 = ctx.r1.s64 + 136;
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// bl 0x82eeece8
	ctx.lr = 0x836850C4;
	sub_82EEECE8(ctx, base);
	// lis r8,-31827
	ctx.r8.s64 = -2085814272;
	// lis r11,-32237
	ctx.r11.s64 = -2112684032;
	// addi r6,r8,-10636
	ctx.r6.s64 = ctx.r8.s64 + -10636;
	// addi r11,r11,-30132
	ctx.r11.s64 = ctx.r11.s64 + -30132;
	// lis r10,-32229
	ctx.r10.s64 = -2112159744;
	// lis r9,-32229
	ctx.r9.s64 = -2112159744;
	// stw r11,-10636(r8)
	PPC_STORE_U32(ctx.r8.u32 + -10636, ctx.r11.u32);
	// addi r10,r10,30972
	ctx.r10.s64 = ctx.r10.s64 + 30972;
	// addi r9,r9,30380
	ctx.r9.s64 = ctx.r9.s64 + 30380;
	// lis r8,-31995
	ctx.r8.s64 = -2096824320;
	// stw r10,4(r6)
	PPC_STORE_U32(ctx.r6.u32 + 4, ctx.r10.u32);
	// lis r7,-31995
	ctx.r7.s64 = -2096824320;
	// stw r9,16(r6)
	PPC_STORE_U32(ctx.r6.u32 + 16, ctx.r9.u32);
	// addi r11,r8,8536
	ctx.r11.s64 = ctx.r8.s64 + 8536;
	// addi r10,r7,6800
	ctx.r10.s64 = ctx.r7.s64 + 6800;
	// li r9,80
	ctx.r9.s64 = 80;
	// stw r11,8(r6)
	PPC_STORE_U32(ctx.r6.u32 + 8, ctx.r11.u32);
	// stw r10,12(r6)
	PPC_STORE_U32(ctx.r6.u32 + 12, ctx.r10.u32);
	// stw r9,20(r6)
	PPC_STORE_U32(ctx.r6.u32 + 20, ctx.r9.u32);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83685120"))) PPC_WEAK_FUNC(sub_83685120);
PPC_FUNC_IMPL(__imp__sub_83685120) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-32229
	ctx.r10.s64 = -2112159744;
	// lis r9,-32237
	ctx.r9.s64 = -2112684032;
	// addi r7,r10,27576
	ctx.r7.s64 = ctx.r10.s64 + 27576;
	// lis r8,-31827
	ctx.r8.s64 = -2085814272;
	// li r6,2
	ctx.r6.s64 = 2;
	// stw r7,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r7.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r4,r9,-30456
	ctx.r4.s64 = ctx.r9.s64 + -30456;
	// stw r6,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r6.u32);
	// addi r3,r8,-10372
	ctx.r3.s64 = ctx.r8.s64 + -10372;
	// stw r11,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r11.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r11.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r11,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r11.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,24
	ctx.r6.s64 = 24;
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x82ef5ae8
	ctx.lr = 0x83685180;
	sub_82EF5AE8(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83685190"))) PPC_WEAK_FUNC(sub_83685190);
PPC_FUNC_IMPL(__imp__sub_83685190) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-32229
	ctx.r10.s64 = -2112159744;
	// lis r9,-31827
	ctx.r9.s64 = -2085814272;
	// addi r6,r10,27624
	ctx.r6.s64 = ctx.r10.s64 + 27624;
	// lis r8,-32237
	ctx.r8.s64 = -2112684032;
	// lis r7,-31827
	ctx.r7.s64 = -2085814272;
	// stw r6,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r6.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r5,r9,-10372
	ctx.r5.s64 = ctx.r9.s64 + -10372;
	// addi r4,r8,-30428
	ctx.r4.s64 = ctx.r8.s64 + -30428;
	// stw r11,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r11.u32);
	// addi r3,r7,-11332
	ctx.r3.s64 = ctx.r7.s64 + -11332;
	// stw r11,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r11.u32);
	// li r31,2
	ctx.r31.s64 = 2;
	// stw r11,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r11.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r31,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r31.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,32
	ctx.r6.s64 = 32;
	// bl 0x82ef5ae8
	ctx.lr = 0x836851F8;
	sub_82EF5AE8(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8368520C"))) PPC_WEAK_FUNC(sub_8368520C);
PPC_FUNC_IMPL(__imp__sub_8368520C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83685210"))) PPC_WEAK_FUNC(sub_83685210);
PPC_FUNC_IMPL(__imp__sub_83685210) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31848
	ctx.r11.s64 = -2087190528;
	// lis r10,-31848
	ctx.r10.s64 = -2087190528;
	// addi r9,r10,14368
	ctx.r9.s64 = ctx.r10.s64 + 14368;
	// lwz r11,12424(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12424);
	// stw r11,128(r9)
	PPC_STORE_U32(ctx.r9.u32 + 128, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83685228"))) PPC_WEAK_FUNC(sub_83685228);
PPC_FUNC_IMPL(__imp__sub_83685228) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-31848
	ctx.r10.s64 = -2087190528;
	// lis r8,-31842
	ctx.r8.s64 = -2086797312;
	// addi r5,r10,14368
	ctx.r5.s64 = ctx.r10.s64 + 14368;
	// lis r7,-32237
	ctx.r7.s64 = -2112684032;
	// lis r6,-31827
	ctx.r6.s64 = -2085814272;
	// stw r5,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r5.u32);
	// lis r9,-32229
	ctx.r9.s64 = -2112159744;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r5,r8,19184
	ctx.r5.s64 = ctx.r8.s64 + 19184;
	// addi r4,r7,-30304
	ctx.r4.s64 = ctx.r7.s64 + -30304;
	// stw r11,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r11.u32);
	// addi r3,r6,-9816
	ctx.r3.s64 = ctx.r6.s64 + -9816;
	// stw r11,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r11.u32);
	// li r31,14
	ctx.r31.s64 = 14;
	// stw r11,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r11.u32);
	// addi r9,r9,26564
	ctx.r9.s64 = ctx.r9.s64 + 26564;
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r31,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r31.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,320
	ctx.r6.s64 = 320;
	// bl 0x82ef5ae8
	ctx.lr = 0x83685294;
	sub_82EF5AE8(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_836852A8"))) PPC_WEAK_FUNC(sub_836852A8);
PPC_FUNC_IMPL(__imp__sub_836852A8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-416(r1)
	ea = -416 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r10,r11,30404
	ctx.r10.s64 = ctx.r11.s64 + 30404;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// bl 0x82fc8448
	ctx.lr = 0x836852CC;
	sub_82FC8448(ctx, base);
	// lis r9,-31827
	ctx.r9.s64 = -2085814272;
	// lis r11,-32237
	ctx.r11.s64 = -2112684032;
	// addi r7,r9,-10756
	ctx.r7.s64 = ctx.r9.s64 + -10756;
	// addi r11,r11,-30304
	ctx.r11.s64 = ctx.r11.s64 + -30304;
	// lis r8,-31995
	ctx.r8.s64 = -2096824320;
	// stw r11,-10756(r9)
	PPC_STORE_U32(ctx.r9.u32 + -10756, ctx.r11.u32);
	// lis r10,-32229
	ctx.r10.s64 = -2112159744;
	// addi r11,r8,6872
	ctx.r11.s64 = ctx.r8.s64 + 6872;
	// addi r10,r10,31064
	ctx.r10.s64 = ctx.r10.s64 + 31064;
	// stw r11,12(r7)
	PPC_STORE_U32(ctx.r7.u32 + 12, ctx.r11.u32);
	// lis r9,-31995
	ctx.r9.s64 = -2096824320;
	// stw r10,4(r7)
	PPC_STORE_U32(ctx.r7.u32 + 4, ctx.r10.u32);
	// li r10,320
	ctx.r10.s64 = 320;
	// addi r9,r9,8696
	ctx.r9.s64 = ctx.r9.s64 + 8696;
	// stw r10,20(r7)
	PPC_STORE_U32(ctx.r7.u32 + 20, ctx.r10.u32);
	// stw r9,8(r7)
	PPC_STORE_U32(ctx.r7.u32 + 8, ctx.r9.u32);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// stw r11,16(r7)
	PPC_STORE_U32(ctx.r7.u32 + 16, ctx.r11.u32);
	// addi r1,r1,416
	ctx.r1.s64 = ctx.r1.s64 + 416;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83685324"))) PPC_WEAK_FUNC(sub_83685324);
PPC_FUNC_IMPL(__imp__sub_83685324) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83685328"))) PPC_WEAK_FUNC(sub_83685328);
PPC_FUNC_IMPL(__imp__sub_83685328) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-32229
	ctx.r10.s64 = -2112159744;
	// lis r9,-31842
	ctx.r9.s64 = -2086797312;
	// addi r6,r10,27752
	ctx.r6.s64 = ctx.r10.s64 + 27752;
	// lis r8,-32237
	ctx.r8.s64 = -2112684032;
	// lis r7,-31827
	ctx.r7.s64 = -2085814272;
	// stw r6,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r6.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r5,r9,19184
	ctx.r5.s64 = ctx.r9.s64 + 19184;
	// addi r4,r8,-30260
	ctx.r4.s64 = ctx.r8.s64 + -30260;
	// stw r11,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r11.u32);
	// addi r3,r7,-11380
	ctx.r3.s64 = ctx.r7.s64 + -11380;
	// stw r11,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r11.u32);
	// li r31,1
	ctx.r31.s64 = 1;
	// stw r11,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r11.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r31,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r31.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,80
	ctx.r6.s64 = 80;
	// bl 0x82ef5ae8
	ctx.lr = 0x83685390;
	sub_82EF5AE8(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_836853A4"))) PPC_WEAK_FUNC(sub_836853A4);
PPC_FUNC_IMPL(__imp__sub_836853A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_836853A8"))) PPC_WEAK_FUNC(sub_836853A8);
PPC_FUNC_IMPL(__imp__sub_836853A8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-32229
	ctx.r10.s64 = -2112159744;
	// lis r9,-31842
	ctx.r9.s64 = -2086797312;
	// addi r6,r10,27776
	ctx.r6.s64 = ctx.r10.s64 + 27776;
	// lis r8,-32237
	ctx.r8.s64 = -2112684032;
	// lis r7,-31827
	ctx.r7.s64 = -2085814272;
	// stw r6,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r6.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r5,r9,19184
	ctx.r5.s64 = ctx.r9.s64 + 19184;
	// addi r4,r8,-30040
	ctx.r4.s64 = ctx.r8.s64 + -30040;
	// stw r11,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r11.u32);
	// addi r3,r7,-10008
	ctx.r3.s64 = ctx.r7.s64 + -10008;
	// stw r11,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r11.u32);
	// li r31,1
	ctx.r31.s64 = 1;
	// stw r11,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r11.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r31,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r31.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,20
	ctx.r6.s64 = 20;
	// bl 0x82ef5ae8
	ctx.lr = 0x83685410;
	sub_82EF5AE8(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83685424"))) PPC_WEAK_FUNC(sub_83685424);
PPC_FUNC_IMPL(__imp__sub_83685424) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83685428"))) PPC_WEAK_FUNC(sub_83685428);
PPC_FUNC_IMPL(__imp__sub_83685428) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-32229
	ctx.r10.s64 = -2112159744;
	// lis r9,-32237
	ctx.r9.s64 = -2112684032;
	// addi r7,r10,27800
	ctx.r7.s64 = ctx.r10.s64 + 27800;
	// lis r8,-31827
	ctx.r8.s64 = -2085814272;
	// li r6,2
	ctx.r6.s64 = 2;
	// stw r7,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r7.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r4,r9,-29864
	ctx.r4.s64 = ctx.r9.s64 + -29864;
	// stw r6,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r6.u32);
	// addi r3,r8,-9936
	ctx.r3.s64 = ctx.r8.s64 + -9936;
	// stw r11,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r11.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r11.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r11,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r11.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,80
	ctx.r6.s64 = 80;
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x82ef5ae8
	ctx.lr = 0x83685488;
	sub_82EF5AE8(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83685498"))) PPC_WEAK_FUNC(sub_83685498);
PPC_FUNC_IMPL(__imp__sub_83685498) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-32229
	ctx.r10.s64 = -2112159744;
	// lis r9,-31842
	ctx.r9.s64 = -2086797312;
	// addi r6,r10,27848
	ctx.r6.s64 = ctx.r10.s64 + 27848;
	// lis r8,-32237
	ctx.r8.s64 = -2112684032;
	// lis r7,-31827
	ctx.r7.s64 = -2085814272;
	// stw r6,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r6.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r5,r9,19184
	ctx.r5.s64 = ctx.r9.s64 + 19184;
	// addi r4,r8,-29808
	ctx.r4.s64 = ctx.r8.s64 + -29808;
	// stw r11,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r11.u32);
	// addi r3,r7,-11572
	ctx.r3.s64 = ctx.r7.s64 + -11572;
	// stw r11,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r11.u32);
	// li r31,1
	ctx.r31.s64 = 1;
	// stw r11,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r11.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r31,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r31.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,20
	ctx.r6.s64 = 20;
	// bl 0x82ef5ae8
	ctx.lr = 0x83685500;
	sub_82EF5AE8(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83685514"))) PPC_WEAK_FUNC(sub_83685514);
PPC_FUNC_IMPL(__imp__sub_83685514) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83685518"))) PPC_WEAK_FUNC(sub_83685518);
PPC_FUNC_IMPL(__imp__sub_83685518) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-32229
	ctx.r10.s64 = -2112159744;
	// li r4,2
	ctx.r4.s64 = 2;
	// addi r6,r10,27872
	ctx.r6.s64 = ctx.r10.s64 + 27872;
	// lis r9,-31842
	ctx.r9.s64 = -2086797312;
	// stw r4,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r4.u32);
	// lis r8,-32239
	ctx.r8.s64 = -2112815104;
	// stw r6,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r6.u32);
	// lis r7,-31827
	ctx.r7.s64 = -2085814272;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r5,r9,19184
	ctx.r5.s64 = ctx.r9.s64 + 19184;
	// addi r4,r8,-22468
	ctx.r4.s64 = ctx.r8.s64 + -22468;
	// stw r11,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r11.u32);
	// addi r3,r7,-11428
	ctx.r3.s64 = ctx.r7.s64 + -11428;
	// stw r11,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r11.u32);
	// li r31,3
	ctx.r31.s64 = 3;
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r31,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r31.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,80
	ctx.r6.s64 = 80;
	// bl 0x82ef5ae8
	ctx.lr = 0x83685584;
	sub_82EF5AE8(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83685598"))) PPC_WEAK_FUNC(sub_83685598);
PPC_FUNC_IMPL(__imp__sub_83685598) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-32229
	ctx.r10.s64 = -2112159744;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r6,r10,27944
	ctx.r6.s64 = ctx.r10.s64 + 27944;
	// lis r9,-31842
	ctx.r9.s64 = -2086797312;
	// stw r4,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r4.u32);
	// lis r8,-32239
	ctx.r8.s64 = -2112815104;
	// stw r6,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r6.u32);
	// lis r7,-31827
	ctx.r7.s64 = -2085814272;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r5,r9,19184
	ctx.r5.s64 = ctx.r9.s64 + 19184;
	// addi r4,r8,-23732
	ctx.r4.s64 = ctx.r8.s64 + -23732;
	// stw r11,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r11.u32);
	// addi r3,r7,-11212
	ctx.r3.s64 = ctx.r7.s64 + -11212;
	// stw r11,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r11.u32);
	// li r31,2
	ctx.r31.s64 = 2;
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r31,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r31.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,24
	ctx.r6.s64 = 24;
	// bl 0x82ef5ae8
	ctx.lr = 0x83685604;
	sub_82EF5AE8(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83685618"))) PPC_WEAK_FUNC(sub_83685618);
PPC_FUNC_IMPL(__imp__sub_83685618) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-32229
	ctx.r10.s64 = -2112159744;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r6,r10,27992
	ctx.r6.s64 = ctx.r10.s64 + 27992;
	// lis r9,-31842
	ctx.r9.s64 = -2086797312;
	// stw r4,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r4.u32);
	// lis r8,-32239
	ctx.r8.s64 = -2112815104;
	// stw r6,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r6.u32);
	// lis r7,-31827
	ctx.r7.s64 = -2085814272;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r5,r9,19184
	ctx.r5.s64 = ctx.r9.s64 + 19184;
	// addi r4,r8,-24172
	ctx.r4.s64 = ctx.r8.s64 + -24172;
	// stw r11,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r11.u32);
	// addi r3,r7,-10804
	ctx.r3.s64 = ctx.r7.s64 + -10804;
	// stw r11,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r11.u32);
	// li r31,2
	ctx.r31.s64 = 2;
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r31,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r31.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,32
	ctx.r6.s64 = 32;
	// bl 0x82ef5ae8
	ctx.lr = 0x83685684;
	sub_82EF5AE8(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83685698"))) PPC_WEAK_FUNC(sub_83685698);
PPC_FUNC_IMPL(__imp__sub_83685698) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-32229
	ctx.r10.s64 = -2112159744;
	// lis r9,-31842
	ctx.r9.s64 = -2086797312;
	// addi r6,r10,28040
	ctx.r6.s64 = ctx.r10.s64 + 28040;
	// lis r8,-32239
	ctx.r8.s64 = -2112815104;
	// lis r7,-31827
	ctx.r7.s64 = -2085814272;
	// stw r6,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r6.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r5,r9,19184
	ctx.r5.s64 = ctx.r9.s64 + 19184;
	// addi r4,r8,-19052
	ctx.r4.s64 = ctx.r8.s64 + -19052;
	// stw r11,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r11.u32);
	// addi r3,r7,-11164
	ctx.r3.s64 = ctx.r7.s64 + -11164;
	// stw r11,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r11.u32);
	// li r31,2
	ctx.r31.s64 = 2;
	// stw r11,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r11.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r31,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r31.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,24
	ctx.r6.s64 = 24;
	// bl 0x82ef5ae8
	ctx.lr = 0x83685700;
	sub_82EF5AE8(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83685714"))) PPC_WEAK_FUNC(sub_83685714);
PPC_FUNC_IMPL(__imp__sub_83685714) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83685718"))) PPC_WEAK_FUNC(sub_83685718);
PPC_FUNC_IMPL(__imp__sub_83685718) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// li r3,7
	ctx.r3.s64 = 7;
	// addi r11,r11,28304
	ctx.r11.s64 = ctx.r11.s64 + 28304;
	// lis r9,-31827
	ctx.r9.s64 = -2085814272;
	// stw r3,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r3.u32);
	// addi r6,r11,168
	ctx.r6.s64 = ctx.r11.s64 + 168;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// lis r8,-32240
	ctx.r8.s64 = -2112880640;
	// lis r7,-31827
	ctx.r7.s64 = -2085814272;
	// stw r6,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r6.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r5,r9,-10564
	ctx.r5.s64 = ctx.r9.s64 + -10564;
	// addi r4,r8,28216
	ctx.r4.s64 = ctx.r8.s64 + 28216;
	// stw r10,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r10.u32);
	// addi r3,r7,-11116
	ctx.r3.s64 = ctx.r7.s64 + -11116;
	// stw r10,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r10.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r10,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r10.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,96
	ctx.r6.s64 = 96;
	// bl 0x82ef5ae8
	ctx.lr = 0x8368577C;
	sub_82EF5AE8(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8368578C"))) PPC_WEAK_FUNC(sub_8368578C);
PPC_FUNC_IMPL(__imp__sub_8368578C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83685790"))) PPC_WEAK_FUNC(sub_83685790);
PPC_FUNC_IMPL(__imp__sub_83685790) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8305b898
	ctx.lr = 0x836857A8;
	sub_8305B898(ctx, base);
	// lis r10,-31827
	ctx.r10.s64 = -2085814272;
	// lis r11,-32240
	ctx.r11.s64 = -2112880640;
	// addi r7,r10,-10080
	ctx.r7.s64 = ctx.r10.s64 + -10080;
	// addi r11,r11,28216
	ctx.r11.s64 = ctx.r11.s64 + 28216;
	// lis r8,-31995
	ctx.r8.s64 = -2096824320;
	// stw r11,-10080(r10)
	PPC_STORE_U32(ctx.r10.u32 + -10080, ctx.r11.u32);
	// lis r10,-32229
	ctx.r10.s64 = -2112159744;
	// addi r11,r8,7232
	ctx.r11.s64 = ctx.r8.s64 + 7232;
	// addi r10,r10,31384
	ctx.r10.s64 = ctx.r10.s64 + 31384;
	// stw r11,12(r7)
	PPC_STORE_U32(ctx.r7.u32 + 12, ctx.r11.u32);
	// lis r9,-31995
	ctx.r9.s64 = -2096824320;
	// stw r10,4(r7)
	PPC_STORE_U32(ctx.r7.u32 + 4, ctx.r10.u32);
	// li r10,96
	ctx.r10.s64 = 96;
	// addi r9,r9,7216
	ctx.r9.s64 = ctx.r9.s64 + 7216;
	// stw r10,20(r7)
	PPC_STORE_U32(ctx.r7.u32 + 20, ctx.r10.u32);
	// stw r9,8(r7)
	PPC_STORE_U32(ctx.r7.u32 + 8, ctx.r9.u32);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// stw r11,16(r7)
	PPC_STORE_U32(ctx.r7.u32 + 16, ctx.r11.u32);
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83685800"))) PPC_WEAK_FUNC(sub_83685800);
PPC_FUNC_IMPL(__imp__sub_83685800) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31848
	ctx.r11.s64 = -2087190528;
	// lis r10,-31848
	ctx.r10.s64 = -2087190528;
	// addi r9,r10,14704
	ctx.r9.s64 = ctx.r10.s64 + 14704;
	// lwz r11,12432(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12432);
	// stw r11,56(r9)
	PPC_STORE_U32(ctx.r9.u32 + 56, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83685818"))) PPC_WEAK_FUNC(sub_83685818);
PPC_FUNC_IMPL(__imp__sub_83685818) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// lis r10,-31848
	ctx.r10.s64 = -2087190528;
	// addi r9,r11,28720
	ctx.r9.s64 = ctx.r11.s64 + 28720;
	// addi r4,r10,14704
	ctx.r4.s64 = ctx.r10.s64 + 14704;
	// addi r5,r9,80
	ctx.r5.s64 = ctx.r9.s64 + 80;
	// lis r8,-31842
	ctx.r8.s64 = -2086797312;
	// stw r4,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r4.u32);
	// lis r7,-32240
	ctx.r7.s64 = -2112880640;
	// stw r5,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r5.u32);
	// lis r6,-31827
	ctx.r6.s64 = -2085814272;
	// li r10,4
	ctx.r10.s64 = 4;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r5,r8,19184
	ctx.r5.s64 = ctx.r8.s64 + 19184;
	// stw r10,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r10.u32);
	// addi r4,r7,28140
	ctx.r4.s64 = ctx.r7.s64 + 28140;
	// stw r11,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r11.u32);
	// addi r3,r6,-10564
	ctx.r3.s64 = ctx.r6.s64 + -10564;
	// stw r11,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r11.u32);
	// li r10,2
	ctx.r10.s64 = 2;
	// stw r11,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r11.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,32
	ctx.r6.s64 = 32;
	// bl 0x82ef5ae8
	ctx.lr = 0x83685884;
	sub_82EF5AE8(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83685894"))) PPC_WEAK_FUNC(sub_83685894);
PPC_FUNC_IMPL(__imp__sub_83685894) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83685898"))) PPC_WEAK_FUNC(sub_83685898);
PPC_FUNC_IMPL(__imp__sub_83685898) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8305c288
	ctx.lr = 0x836858B0;
	sub_8305C288(ctx, base);
	// lis r10,-31827
	ctx.r10.s64 = -2085814272;
	// lis r11,-32240
	ctx.r11.s64 = -2112880640;
	// addi r7,r10,-9840
	ctx.r7.s64 = ctx.r10.s64 + -9840;
	// addi r11,r11,28140
	ctx.r11.s64 = ctx.r11.s64 + 28140;
	// lis r8,-31995
	ctx.r8.s64 = -2096824320;
	// stw r11,-9840(r10)
	PPC_STORE_U32(ctx.r10.u32 + -9840, ctx.r11.u32);
	// lis r10,-32229
	ctx.r10.s64 = -2112159744;
	// addi r11,r8,7336
	ctx.r11.s64 = ctx.r8.s64 + 7336;
	// addi r10,r10,31396
	ctx.r10.s64 = ctx.r10.s64 + 31396;
	// stw r11,12(r7)
	PPC_STORE_U32(ctx.r7.u32 + 12, ctx.r11.u32);
	// lis r9,-31995
	ctx.r9.s64 = -2096824320;
	// stw r10,4(r7)
	PPC_STORE_U32(ctx.r7.u32 + 4, ctx.r10.u32);
	// li r10,32
	ctx.r10.s64 = 32;
	// addi r9,r9,7320
	ctx.r9.s64 = ctx.r9.s64 + 7320;
	// stw r10,20(r7)
	PPC_STORE_U32(ctx.r7.u32 + 20, ctx.r10.u32);
	// stw r9,8(r7)
	PPC_STORE_U32(ctx.r7.u32 + 8, ctx.r9.u32);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// stw r11,16(r7)
	PPC_STORE_U32(ctx.r7.u32 + 16, ctx.r11.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83685908"))) PPC_WEAK_FUNC(sub_83685908);
PPC_FUNC_IMPL(__imp__sub_83685908) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// li r3,8
	ctx.r3.s64 = 8;
	// addi r11,r11,29120
	ctx.r11.s64 = ctx.r11.s64 + 29120;
	// lis r9,-31827
	ctx.r9.s64 = -2085814272;
	// stw r3,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r3.u32);
	// addi r6,r11,192
	ctx.r6.s64 = ctx.r11.s64 + 192;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// lis r8,-32240
	ctx.r8.s64 = -2112880640;
	// lis r7,-31827
	ctx.r7.s64 = -2085814272;
	// stw r6,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r6.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r5,r9,-10564
	ctx.r5.s64 = ctx.r9.s64 + -10564;
	// addi r4,r8,26344
	ctx.r4.s64 = ctx.r8.s64 + 26344;
	// stw r10,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r10.u32);
	// addi r3,r7,-10996
	ctx.r3.s64 = ctx.r7.s64 + -10996;
	// stw r10,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r10.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r10,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r10.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,96
	ctx.r6.s64 = 96;
	// bl 0x82ef5ae8
	ctx.lr = 0x8368596C;
	sub_82EF5AE8(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8368597C"))) PPC_WEAK_FUNC(sub_8368597C);
PPC_FUNC_IMPL(__imp__sub_8368597C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83685980"))) PPC_WEAK_FUNC(sub_83685980);
PPC_FUNC_IMPL(__imp__sub_83685980) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8305cf58
	ctx.lr = 0x83685998;
	sub_8305CF58(ctx, base);
	// lis r10,-31827
	ctx.r10.s64 = -2085814272;
	// lis r11,-32240
	ctx.r11.s64 = -2112880640;
	// addi r7,r10,-10588
	ctx.r7.s64 = ctx.r10.s64 + -10588;
	// addi r11,r11,26344
	ctx.r11.s64 = ctx.r11.s64 + 26344;
	// lis r8,-31995
	ctx.r8.s64 = -2096824320;
	// stw r11,-10588(r10)
	PPC_STORE_U32(ctx.r10.u32 + -10588, ctx.r11.u32);
	// lis r10,-32229
	ctx.r10.s64 = -2112159744;
	// addi r11,r8,7440
	ctx.r11.s64 = ctx.r8.s64 + 7440;
	// addi r10,r10,31564
	ctx.r10.s64 = ctx.r10.s64 + 31564;
	// stw r11,12(r7)
	PPC_STORE_U32(ctx.r7.u32 + 12, ctx.r11.u32);
	// lis r9,-31995
	ctx.r9.s64 = -2096824320;
	// stw r10,4(r7)
	PPC_STORE_U32(ctx.r7.u32 + 4, ctx.r10.u32);
	// li r10,96
	ctx.r10.s64 = 96;
	// addi r9,r9,7424
	ctx.r9.s64 = ctx.r9.s64 + 7424;
	// stw r10,20(r7)
	PPC_STORE_U32(ctx.r7.u32 + 20, ctx.r10.u32);
	// stw r9,8(r7)
	PPC_STORE_U32(ctx.r7.u32 + 8, ctx.r9.u32);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// stw r11,16(r7)
	PPC_STORE_U32(ctx.r7.u32 + 16, ctx.r11.u32);
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_836859F0"))) PPC_WEAK_FUNC(sub_836859F0);
PPC_FUNC_IMPL(__imp__sub_836859F0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r11,r11,29404
	ctx.r11.s64 = ctx.r11.s64 + 29404;
	// lis r9,-31827
	ctx.r9.s64 = -2085814272;
	// stw r3,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r3.u32);
	// addi r6,r11,24
	ctx.r6.s64 = ctx.r11.s64 + 24;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// lis r8,-32240
	ctx.r8.s64 = -2112880640;
	// lis r7,-31827
	ctx.r7.s64 = -2085814272;
	// stw r6,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r6.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r5,r9,-11116
	ctx.r5.s64 = ctx.r9.s64 + -11116;
	// addi r4,r8,27012
	ctx.r4.s64 = ctx.r8.s64 + 27012;
	// stw r10,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r10.u32);
	// addi r3,r7,-11740
	ctx.r3.s64 = ctx.r7.s64 + -11740;
	// stw r10,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r10.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r10,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r10.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,112
	ctx.r6.s64 = 112;
	// bl 0x82ef5ae8
	ctx.lr = 0x83685A54;
	sub_82EF5AE8(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83685A64"))) PPC_WEAK_FUNC(sub_83685A64);
PPC_FUNC_IMPL(__imp__sub_83685A64) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83685A68"))) PPC_WEAK_FUNC(sub_83685A68);
PPC_FUNC_IMPL(__imp__sub_83685A68) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8305d070
	ctx.lr = 0x83685A80;
	sub_8305D070(ctx, base);
	// lis r10,-31827
	ctx.r10.s64 = -2085814272;
	// lis r11,-32240
	ctx.r11.s64 = -2112880640;
	// addi r7,r10,-11644
	ctx.r7.s64 = ctx.r10.s64 + -11644;
	// addi r11,r11,27012
	ctx.r11.s64 = ctx.r11.s64 + 27012;
	// lis r8,-31995
	ctx.r8.s64 = -2096824320;
	// stw r11,-11644(r10)
	PPC_STORE_U32(ctx.r10.u32 + -11644, ctx.r11.u32);
	// lis r10,-32229
	ctx.r10.s64 = -2112159744;
	// addi r11,r8,7544
	ctx.r11.s64 = ctx.r8.s64 + 7544;
	// addi r10,r10,31596
	ctx.r10.s64 = ctx.r10.s64 + 31596;
	// stw r11,12(r7)
	PPC_STORE_U32(ctx.r7.u32 + 12, ctx.r11.u32);
	// lis r9,-31995
	ctx.r9.s64 = -2096824320;
	// stw r10,4(r7)
	PPC_STORE_U32(ctx.r7.u32 + 4, ctx.r10.u32);
	// li r10,112
	ctx.r10.s64 = 112;
	// addi r9,r9,7528
	ctx.r9.s64 = ctx.r9.s64 + 7528;
	// stw r10,20(r7)
	PPC_STORE_U32(ctx.r7.u32 + 20, ctx.r10.u32);
	// stw r9,8(r7)
	PPC_STORE_U32(ctx.r7.u32 + 8, ctx.r9.u32);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// stw r11,16(r7)
	PPC_STORE_U32(ctx.r7.u32 + 16, ctx.r11.u32);
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83685AD8"))) PPC_WEAK_FUNC(sub_83685AD8);
PPC_FUNC_IMPL(__imp__sub_83685AD8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// li r3,6
	ctx.r3.s64 = 6;
	// addi r11,r11,29512
	ctx.r11.s64 = ctx.r11.s64 + 29512;
	// lis r9,-31827
	ctx.r9.s64 = -2085814272;
	// stw r3,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r3.u32);
	// addi r6,r11,144
	ctx.r6.s64 = ctx.r11.s64 + 144;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// lis r8,-32237
	ctx.r8.s64 = -2112684032;
	// lis r7,-31827
	ctx.r7.s64 = -2085814272;
	// stw r6,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r6.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r5,r9,-10564
	ctx.r5.s64 = ctx.r9.s64 + -10564;
	// addi r4,r8,-29752
	ctx.r4.s64 = ctx.r8.s64 + -29752;
	// stw r10,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r10.u32);
	// addi r3,r7,-10852
	ctx.r3.s64 = ctx.r7.s64 + -10852;
	// stw r10,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r10.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r10,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r10.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,64
	ctx.r6.s64 = 64;
	// bl 0x82ef5ae8
	ctx.lr = 0x83685B3C;
	sub_82EF5AE8(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83685B4C"))) PPC_WEAK_FUNC(sub_83685B4C);
PPC_FUNC_IMPL(__imp__sub_83685B4C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83685B50"))) PPC_WEAK_FUNC(sub_83685B50);
PPC_FUNC_IMPL(__imp__sub_83685B50) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8305df58
	ctx.lr = 0x83685B68;
	sub_8305DF58(ctx, base);
	// lis r10,-31827
	ctx.r10.s64 = -2085814272;
	// lis r11,-32237
	ctx.r11.s64 = -2112684032;
	// addi r7,r10,-9960
	ctx.r7.s64 = ctx.r10.s64 + -9960;
	// addi r11,r11,-29752
	ctx.r11.s64 = ctx.r11.s64 + -29752;
	// lis r8,-31995
	ctx.r8.s64 = -2096824320;
	// stw r11,-9960(r10)
	PPC_STORE_U32(ctx.r10.u32 + -9960, ctx.r11.u32);
	// lis r10,-32229
	ctx.r10.s64 = -2112159744;
	// addi r11,r8,7648
	ctx.r11.s64 = ctx.r8.s64 + 7648;
	// addi r10,r10,31660
	ctx.r10.s64 = ctx.r10.s64 + 31660;
	// stw r11,12(r7)
	PPC_STORE_U32(ctx.r7.u32 + 12, ctx.r11.u32);
	// lis r9,-31995
	ctx.r9.s64 = -2096824320;
	// stw r10,4(r7)
	PPC_STORE_U32(ctx.r7.u32 + 4, ctx.r10.u32);
	// li r10,64
	ctx.r10.s64 = 64;
	// addi r9,r9,7632
	ctx.r9.s64 = ctx.r9.s64 + 7632;
	// stw r10,20(r7)
	PPC_STORE_U32(ctx.r7.u32 + 20, ctx.r10.u32);
	// stw r9,8(r7)
	PPC_STORE_U32(ctx.r7.u32 + 8, ctx.r9.u32);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// stw r11,16(r7)
	PPC_STORE_U32(ctx.r7.u32 + 16, ctx.r11.u32);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83685BC0"))) PPC_WEAK_FUNC(sub_83685BC0);
PPC_FUNC_IMPL(__imp__sub_83685BC0) {
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
	// li r6,112
	ctx.r6.s64 = 112;
	// li r5,255
	ctx.r5.s64 = 255;
	// li r4,255
	ctx.r4.s64 = 255;
	// li r3,255
	ctx.r3.s64 = 255;
	// bl 0x82eef230
	ctx.lr = 0x83685BE0;
	sub_82EEF230(ctx, base);
	// lis r11,-31827
	ctx.r11.s64 = -2085814272;
	// stw r3,-9768(r11)
	PPC_STORE_U32(ctx.r11.u32 + -9768, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83685BF8"))) PPC_WEAK_FUNC(sub_83685BF8);
PPC_FUNC_IMPL(__imp__sub_83685BF8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-32228
	ctx.r10.s64 = -2112094208;
	// lis r9,-31842
	ctx.r9.s64 = -2086797312;
	// addi r6,r10,-30384
	ctx.r6.s64 = ctx.r10.s64 + -30384;
	// lis r8,-32237
	ctx.r8.s64 = -2112684032;
	// lis r7,-31827
	ctx.r7.s64 = -2085814272;
	// stw r6,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r6.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r5,r9,19184
	ctx.r5.s64 = ctx.r9.s64 + 19184;
	// addi r4,r8,-30484
	ctx.r4.s64 = ctx.r8.s64 + -30484;
	// stw r11,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r11.u32);
	// addi r3,r7,-9764
	ctx.r3.s64 = ctx.r7.s64 + -9764;
	// stw r11,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r11.u32);
	// li r31,3
	ctx.r31.s64 = 3;
	// stw r11,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r11.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r31,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r31.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,44
	ctx.r6.s64 = 44;
	// bl 0x82ef5ae8
	ctx.lr = 0x83685C60;
	sub_82EF5AE8(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83685C74"))) PPC_WEAK_FUNC(sub_83685C74);
PPC_FUNC_IMPL(__imp__sub_83685C74) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83685C78"))) PPC_WEAK_FUNC(sub_83685C78);
PPC_FUNC_IMPL(__imp__sub_83685C78) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-32228
	ctx.r10.s64 = -2112094208;
	// lis r9,-32237
	ctx.r9.s64 = -2112684032;
	// addi r7,r10,-30312
	ctx.r7.s64 = ctx.r10.s64 + -30312;
	// lis r8,-31827
	ctx.r8.s64 = -2085814272;
	// li r6,2
	ctx.r6.s64 = 2;
	// stw r7,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r7.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r4,r9,-30516
	ctx.r4.s64 = ctx.r9.s64 + -30516;
	// stw r6,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r6.u32);
	// addi r3,r8,-9716
	ctx.r3.s64 = ctx.r8.s64 + -9716;
	// stw r11,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r11.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r11.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r11,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r11.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,8
	ctx.r6.s64 = 8;
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x82ef5ae8
	ctx.lr = 0x83685CD8;
	sub_82EF5AE8(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83685CE8"))) PPC_WEAK_FUNC(sub_83685CE8);
PPC_FUNC_IMPL(__imp__sub_83685CE8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-32228
	ctx.r10.s64 = -2112094208;
	// lis r9,-32239
	ctx.r9.s64 = -2112815104;
	// addi r7,r10,-30220
	ctx.r7.s64 = ctx.r10.s64 + -30220;
	// lis r8,-31827
	ctx.r8.s64 = -2085814272;
	// li r6,1
	ctx.r6.s64 = 1;
	// stw r7,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r7.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r4,r9,-24708
	ctx.r4.s64 = ctx.r9.s64 + -24708;
	// stw r6,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r6.u32);
	// addi r3,r8,-9668
	ctx.r3.s64 = ctx.r8.s64 + -9668;
	// stw r11,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r11.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r11.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r11,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r11.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,16
	ctx.r6.s64 = 16;
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x82ef5ae8
	ctx.lr = 0x83685D48;
	sub_82EF5AE8(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83685D58"))) PPC_WEAK_FUNC(sub_83685D58);
PPC_FUNC_IMPL(__imp__sub_83685D58) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31848
	ctx.r11.s64 = -2087190528;
	// lis r10,-31848
	ctx.r10.s64 = -2087190528;
	// addi r9,r10,16344
	ctx.r9.s64 = ctx.r10.s64 + 16344;
	// lwz r11,16240(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16240);
	// stw r11,56(r9)
	PPC_STORE_U32(ctx.r9.u32 + 56, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83685D70"))) PPC_WEAK_FUNC(sub_83685D70);
PPC_FUNC_IMPL(__imp__sub_83685D70) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32228
	ctx.r11.s64 = -2112094208;
	// lis r10,-31848
	ctx.r10.s64 = -2087190528;
	// addi r9,r11,-30240
	ctx.r9.s64 = ctx.r11.s64 + -30240;
	// addi r4,r10,16344
	ctx.r4.s64 = ctx.r10.s64 + 16344;
	// addi r5,r9,44
	ctx.r5.s64 = ctx.r9.s64 + 44;
	// lis r8,-31842
	ctx.r8.s64 = -2086797312;
	// stw r4,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r4.u32);
	// lis r7,-32239
	ctx.r7.s64 = -2112815104;
	// stw r5,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r5.u32);
	// lis r6,-31827
	ctx.r6.s64 = -2085814272;
	// li r10,3
	ctx.r10.s64 = 3;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r5,r8,19184
	ctx.r5.s64 = ctx.r8.s64 + 19184;
	// stw r10,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r10.u32);
	// addi r4,r7,-25072
	ctx.r4.s64 = ctx.r7.s64 + -25072;
	// stw r11,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r11.u32);
	// addi r3,r6,-9620
	ctx.r3.s64 = ctx.r6.s64 + -9620;
	// stw r11,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r11.u32);
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r11,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r11.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,48
	ctx.r6.s64 = 48;
	// bl 0x82ef5ae8
	ctx.lr = 0x83685DDC;
	sub_82EF5AE8(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83685DEC"))) PPC_WEAK_FUNC(sub_83685DEC);
PPC_FUNC_IMPL(__imp__sub_83685DEC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83685DF0"))) PPC_WEAK_FUNC(sub_83685DF0);
PPC_FUNC_IMPL(__imp__sub_83685DF0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-31842
	ctx.r10.s64 = -2086797312;
	// lis r9,-32228
	ctx.r9.s64 = -2112094208;
	// lis r8,-31827
	ctx.r8.s64 = -2085814272;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r5,r10,19184
	ctx.r5.s64 = ctx.r10.s64 + 19184;
	// addi r4,r9,-29900
	ctx.r4.s64 = ctx.r9.s64 + -29900;
	// stw r11,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r11.u32);
	// addi r3,r8,-9572
	ctx.r3.s64 = ctx.r8.s64 + -9572;
	// stw r11,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r11.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r11.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// stw r11,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r11.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// li r6,16
	ctx.r6.s64 = 16;
	// bl 0x82ef5ae8
	ctx.lr = 0x83685E48;
	sub_82EF5AE8(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83685E58"))) PPC_WEAK_FUNC(sub_83685E58);
PPC_FUNC_IMPL(__imp__sub_83685E58) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-32228
	ctx.r10.s64 = -2112094208;
	// lis r9,-32239
	ctx.r9.s64 = -2112815104;
	// addi r7,r10,-29200
	ctx.r7.s64 = ctx.r10.s64 + -29200;
	// lis r8,-31827
	ctx.r8.s64 = -2085814272;
	// li r6,6
	ctx.r6.s64 = 6;
	// stw r7,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r7.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r4,r9,-25880
	ctx.r4.s64 = ctx.r9.s64 + -25880;
	// stw r6,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r6.u32);
	// addi r3,r8,-9516
	ctx.r3.s64 = ctx.r8.s64 + -9516;
	// stw r11,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r11.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r11.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r11,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r11.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,20
	ctx.r6.s64 = 20;
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x82ef5ae8
	ctx.lr = 0x83685EB8;
	sub_82EF5AE8(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83685EC8"))) PPC_WEAK_FUNC(sub_83685EC8);
PPC_FUNC_IMPL(__imp__sub_83685EC8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-32228
	ctx.r10.s64 = -2112094208;
	// lis r9,-31827
	ctx.r9.s64 = -2085814272;
	// addi r6,r10,-29056
	ctx.r6.s64 = ctx.r10.s64 + -29056;
	// lis r8,-32239
	ctx.r8.s64 = -2112815104;
	// lis r7,-31827
	ctx.r7.s64 = -2085814272;
	// stw r6,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r6.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r5,r9,-8940
	ctx.r5.s64 = ctx.r9.s64 + -8940;
	// addi r4,r8,-25720
	ctx.r4.s64 = ctx.r8.s64 + -25720;
	// stw r11,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r11.u32);
	// addi r3,r7,-9468
	ctx.r3.s64 = ctx.r7.s64 + -9468;
	// stw r11,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r11.u32);
	// li r31,14
	ctx.r31.s64 = 14;
	// stw r11,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r11.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r31,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r31.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,120
	ctx.r6.s64 = 120;
	// bl 0x82ef5ae8
	ctx.lr = 0x83685F30;
	sub_82EF5AE8(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83685F44"))) PPC_WEAK_FUNC(sub_83685F44);
PPC_FUNC_IMPL(__imp__sub_83685F44) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83685F48"))) PPC_WEAK_FUNC(sub_83685F48);
PPC_FUNC_IMPL(__imp__sub_83685F48) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-32228
	ctx.r10.s64 = -2112094208;
	// lis r9,-32238
	ctx.r9.s64 = -2112749568;
	// addi r7,r10,-28720
	ctx.r7.s64 = ctx.r10.s64 + -28720;
	// lis r8,-31827
	ctx.r8.s64 = -2085814272;
	// li r6,10
	ctx.r6.s64 = 10;
	// stw r7,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r7.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r4,r9,21368
	ctx.r4.s64 = ctx.r9.s64 + 21368;
	// stw r6,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r6.u32);
	// addi r3,r8,-9420
	ctx.r3.s64 = ctx.r8.s64 + -9420;
	// stw r11,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r11.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r11.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r11,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r11.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,36
	ctx.r6.s64 = 36;
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x82ef5ae8
	ctx.lr = 0x83685FA8;
	sub_82EF5AE8(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83685FB8"))) PPC_WEAK_FUNC(sub_83685FB8);
PPC_FUNC_IMPL(__imp__sub_83685FB8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-32228
	ctx.r10.s64 = -2112094208;
	// lis r9,-32239
	ctx.r9.s64 = -2112815104;
	// addi r7,r10,-28480
	ctx.r7.s64 = ctx.r10.s64 + -28480;
	// lis r8,-31827
	ctx.r8.s64 = -2085814272;
	// li r6,6
	ctx.r6.s64 = 6;
	// stw r7,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r7.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r4,r9,-28208
	ctx.r4.s64 = ctx.r9.s64 + -28208;
	// stw r6,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r6.u32);
	// addi r3,r8,-9372
	ctx.r3.s64 = ctx.r8.s64 + -9372;
	// stw r11,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r11.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r11.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r11,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r11.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,20
	ctx.r6.s64 = 20;
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x82ef5ae8
	ctx.lr = 0x83686018;
	sub_82EF5AE8(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83686028"))) PPC_WEAK_FUNC(sub_83686028);
PPC_FUNC_IMPL(__imp__sub_83686028) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-32228
	ctx.r10.s64 = -2112094208;
	// lis r9,-31827
	ctx.r9.s64 = -2085814272;
	// addi r6,r10,-28336
	ctx.r6.s64 = ctx.r10.s64 + -28336;
	// lis r8,-32239
	ctx.r8.s64 = -2112815104;
	// lis r7,-31827
	ctx.r7.s64 = -2085814272;
	// stw r6,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r6.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r5,r9,-8940
	ctx.r5.s64 = ctx.r9.s64 + -8940;
	// addi r4,r8,-28256
	ctx.r4.s64 = ctx.r8.s64 + -28256;
	// stw r11,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r11.u32);
	// addi r3,r7,-9324
	ctx.r3.s64 = ctx.r7.s64 + -9324;
	// stw r11,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r11.u32);
	// li r31,12
	ctx.r31.s64 = 12;
	// stw r11,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r11.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r31,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r31.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,112
	ctx.r6.s64 = 112;
	// bl 0x82ef5ae8
	ctx.lr = 0x83686090;
	sub_82EF5AE8(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_836860A4"))) PPC_WEAK_FUNC(sub_836860A4);
PPC_FUNC_IMPL(__imp__sub_836860A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_836860A8"))) PPC_WEAK_FUNC(sub_836860A8);
PPC_FUNC_IMPL(__imp__sub_836860A8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-32228
	ctx.r10.s64 = -2112094208;
	// lis r9,-31827
	ctx.r9.s64 = -2085814272;
	// addi r6,r10,-28048
	ctx.r6.s64 = ctx.r10.s64 + -28048;
	// lis r8,-32239
	ctx.r8.s64 = -2112815104;
	// lis r7,-31827
	ctx.r7.s64 = -2085814272;
	// stw r6,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r6.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r5,r9,-8940
	ctx.r5.s64 = ctx.r9.s64 + -8940;
	// addi r4,r8,-26724
	ctx.r4.s64 = ctx.r8.s64 + -26724;
	// stw r11,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r11.u32);
	// addi r3,r7,-9276
	ctx.r3.s64 = ctx.r7.s64 + -9276;
	// stw r11,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r11.u32);
	// li r31,2
	ctx.r31.s64 = 2;
	// stw r11,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r11.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r31,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r31.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,64
	ctx.r6.s64 = 64;
	// bl 0x82ef5ae8
	ctx.lr = 0x83686110;
	sub_82EF5AE8(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83686124"))) PPC_WEAK_FUNC(sub_83686124);
PPC_FUNC_IMPL(__imp__sub_83686124) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83686128"))) PPC_WEAK_FUNC(sub_83686128);
PPC_FUNC_IMPL(__imp__sub_83686128) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-32228
	ctx.r10.s64 = -2112094208;
	// lis r9,-32238
	ctx.r9.s64 = -2112749568;
	// addi r7,r10,-28000
	ctx.r7.s64 = ctx.r10.s64 + -28000;
	// lis r8,-31827
	ctx.r8.s64 = -2085814272;
	// li r6,4
	ctx.r6.s64 = 4;
	// stw r7,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r7.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r4,r9,21416
	ctx.r4.s64 = ctx.r9.s64 + 21416;
	// stw r6,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r6.u32);
	// addi r3,r8,-9228
	ctx.r3.s64 = ctx.r8.s64 + -9228;
	// stw r11,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r11.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r11.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r11,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r11.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,16
	ctx.r6.s64 = 16;
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x82ef5ae8
	ctx.lr = 0x83686188;
	sub_82EF5AE8(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83686198"))) PPC_WEAK_FUNC(sub_83686198);
PPC_FUNC_IMPL(__imp__sub_83686198) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-32228
	ctx.r10.s64 = -2112094208;
	// lis r9,-32228
	ctx.r9.s64 = -2112094208;
	// addi r5,r10,-27832
	ctx.r5.s64 = ctx.r10.s64 + -27832;
	// addi r4,r9,-27904
	ctx.r4.s64 = ctx.r9.s64 + -27904;
	// lis r8,-31827
	ctx.r8.s64 = -2085814272;
	// stw r5,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r5.u32);
	// lis r7,-32238
	ctx.r7.s64 = -2112749568;
	// stw r4,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r4.u32);
	// lis r6,-31827
	ctx.r6.s64 = -2085814272;
	// li r9,3
	ctx.r9.s64 = 3;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r5,r8,-8940
	ctx.r5.s64 = ctx.r8.s64 + -8940;
	// stw r9,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r9.u32);
	// addi r4,r7,21460
	ctx.r4.s64 = ctx.r7.s64 + 21460;
	// stw r11,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r11.u32);
	// addi r3,r6,-9180
	ctx.r3.s64 = ctx.r6.s64 + -9180;
	// stw r11,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r11.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r11.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,60
	ctx.r6.s64 = 60;
	// bl 0x82ef5ae8
	ctx.lr = 0x83686204;
	sub_82EF5AE8(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83686214"))) PPC_WEAK_FUNC(sub_83686214);
PPC_FUNC_IMPL(__imp__sub_83686214) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83686218"))) PPC_WEAK_FUNC(sub_83686218);
PPC_FUNC_IMPL(__imp__sub_83686218) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31848
	ctx.r11.s64 = -2087190528;
	// lis r9,-31848
	ctx.r9.s64 = -2087190528;
	// lis r8,-31848
	ctx.r8.s64 = -2087190528;
	// addi r7,r8,17800
	ctx.r7.s64 = ctx.r8.s64 + 17800;
	// lwz r10,17224(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 17224);
	// lwz r11,17228(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 17228);
	// stw r10,200(r7)
	PPC_STORE_U32(ctx.r7.u32 + 200, ctx.r10.u32);
	// stw r11,224(r7)
	PPC_STORE_U32(ctx.r7.u32 + 224, ctx.r11.u32);
	// stw r11,248(r7)
	PPC_STORE_U32(ctx.r7.u32 + 248, ctx.r11.u32);
	// stw r11,272(r7)
	PPC_STORE_U32(ctx.r7.u32 + 272, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83686244"))) PPC_WEAK_FUNC(sub_83686244);
PPC_FUNC_IMPL(__imp__sub_83686244) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83686248"))) PPC_WEAK_FUNC(sub_83686248);
PPC_FUNC_IMPL(__imp__sub_83686248) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-31848
	ctx.r10.s64 = -2087190528;
	// lis r8,-32238
	ctx.r8.s64 = -2112749568;
	// addi r6,r10,17800
	ctx.r6.s64 = ctx.r10.s64 + 17800;
	// lis r7,-31827
	ctx.r7.s64 = -2085814272;
	// li r5,12
	ctx.r5.s64 = 12;
	// stw r6,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r6.u32);
	// lis r9,-32228
	ctx.r9.s64 = -2112094208;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r5,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r5.u32);
	// addi r4,r8,21560
	ctx.r4.s64 = ctx.r8.s64 + 21560;
	// addi r3,r7,-9132
	ctx.r3.s64 = ctx.r7.s64 + -9132;
	// stw r11,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r11.u32);
	// addi r9,r9,-27756
	ctx.r9.s64 = ctx.r9.s64 + -27756;
	// stw r11,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r11.u32);
	// li r10,2
	ctx.r10.s64 = 2;
	// stw r11,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r11.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,28
	ctx.r6.s64 = 28;
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x82ef5ae8
	ctx.lr = 0x836862AC;
	sub_82EF5AE8(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_836862BC"))) PPC_WEAK_FUNC(sub_836862BC);
PPC_FUNC_IMPL(__imp__sub_836862BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_836862C0"))) PPC_WEAK_FUNC(sub_836862C0);
PPC_FUNC_IMPL(__imp__sub_836862C0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-32228
	ctx.r10.s64 = -2112094208;
	// lis r9,-32238
	ctx.r9.s64 = -2112749568;
	// addi r7,r10,-27716
	ctx.r7.s64 = ctx.r10.s64 + -27716;
	// lis r8,-31827
	ctx.r8.s64 = -2085814272;
	// li r6,2
	ctx.r6.s64 = 2;
	// stw r7,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r7.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r4,r9,21612
	ctx.r4.s64 = ctx.r9.s64 + 21612;
	// stw r6,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r6.u32);
	// addi r3,r8,-9084
	ctx.r3.s64 = ctx.r8.s64 + -9084;
	// stw r11,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r11.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r11.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r11,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r11.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,4
	ctx.r6.s64 = 4;
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x82ef5ae8
	ctx.lr = 0x83686320;
	sub_82EF5AE8(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83686330"))) PPC_WEAK_FUNC(sub_83686330);
PPC_FUNC_IMPL(__imp__sub_83686330) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-32228
	ctx.r10.s64 = -2112094208;
	// lis r9,-31827
	ctx.r9.s64 = -2085814272;
	// addi r6,r10,-27648
	ctx.r6.s64 = ctx.r10.s64 + -27648;
	// lis r8,-32239
	ctx.r8.s64 = -2112815104;
	// lis r7,-31827
	ctx.r7.s64 = -2085814272;
	// stw r6,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r6.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r5,r9,-8940
	ctx.r5.s64 = ctx.r9.s64 + -8940;
	// addi r4,r8,-25592
	ctx.r4.s64 = ctx.r8.s64 + -25592;
	// stw r11,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r11.u32);
	// addi r3,r7,-9036
	ctx.r3.s64 = ctx.r7.s64 + -9036;
	// stw r11,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r11.u32);
	// li r31,13
	ctx.r31.s64 = 13;
	// stw r11,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r11.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r31,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r31.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,132
	ctx.r6.s64 = 132;
	// bl 0x82ef5ae8
	ctx.lr = 0x83686398;
	sub_82EF5AE8(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_836863AC"))) PPC_WEAK_FUNC(sub_836863AC);
PPC_FUNC_IMPL(__imp__sub_836863AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_836863B0"))) PPC_WEAK_FUNC(sub_836863B0);
PPC_FUNC_IMPL(__imp__sub_836863B0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r9,-32228
	ctx.r9.s64 = -2112094208;
	// li r10,1
	ctx.r10.s64 = 1;
	// addi r3,r9,-27336
	ctx.r3.s64 = ctx.r9.s64 + -27336;
	// lis r8,-31842
	ctx.r8.s64 = -2086797312;
	// stw r10,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r10.u32);
	// lis r7,-32238
	ctx.r7.s64 = -2112749568;
	// stw r3,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r3.u32);
	// lis r6,-31827
	ctx.r6.s64 = -2085814272;
	// stw r10,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r10.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r5,r8,19184
	ctx.r5.s64 = ctx.r8.s64 + 19184;
	// addi r4,r7,21728
	ctx.r4.s64 = ctx.r7.s64 + 21728;
	// stw r11,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r11.u32);
	// addi r3,r6,-8988
	ctx.r3.s64 = ctx.r6.s64 + -8988;
	// stw r11,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r11.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,20
	ctx.r6.s64 = 20;
	// bl 0x82ef5ae8
	ctx.lr = 0x83686414;
	sub_82EF5AE8(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83686424"))) PPC_WEAK_FUNC(sub_83686424);
PPC_FUNC_IMPL(__imp__sub_83686424) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83686428"))) PPC_WEAK_FUNC(sub_83686428);
PPC_FUNC_IMPL(__imp__sub_83686428) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31848
	ctx.r11.s64 = -2087190528;
	// lis r10,-31848
	ctx.r10.s64 = -2087190528;
	// addi r9,r10,18088
	ctx.r9.s64 = ctx.r10.s64 + 18088;
	// lwz r11,17232(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 17232);
	// stw r11,8(r9)
	PPC_STORE_U32(ctx.r9.u32 + 8, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83686440"))) PPC_WEAK_FUNC(sub_83686440);
PPC_FUNC_IMPL(__imp__sub_83686440) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-31848
	ctx.r10.s64 = -2087190528;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r5,r10,18088
	ctx.r5.s64 = ctx.r10.s64 + 18088;
	// lis r8,-31842
	ctx.r8.s64 = -2086797312;
	// stw r4,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r4.u32);
	// lis r7,-32239
	ctx.r7.s64 = -2112815104;
	// stw r5,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r5.u32);
	// lis r6,-31827
	ctx.r6.s64 = -2085814272;
	// li r10,6
	ctx.r10.s64 = 6;
	// lis r9,-32228
	ctx.r9.s64 = -2112094208;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r10,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r10.u32);
	// addi r5,r8,19184
	ctx.r5.s64 = ctx.r8.s64 + 19184;
	// addi r4,r7,-26420
	ctx.r4.s64 = ctx.r7.s64 + -26420;
	// stw r11,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r11.u32);
	// addi r3,r6,-8940
	ctx.r3.s64 = ctx.r6.s64 + -8940;
	// stw r11,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r11.u32);
	// addi r9,r9,-27668
	ctx.r9.s64 = ctx.r9.s64 + -27668;
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// li r10,1
	ctx.r10.s64 = 1;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,40
	ctx.r6.s64 = 40;
	// bl 0x82ef5ae8
	ctx.lr = 0x836864AC;
	sub_82EF5AE8(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_836864BC"))) PPC_WEAK_FUNC(sub_836864BC);
PPC_FUNC_IMPL(__imp__sub_836864BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_836864C0"))) PPC_WEAK_FUNC(sub_836864C0);
PPC_FUNC_IMPL(__imp__sub_836864C0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31848
	ctx.r11.s64 = -2087190528;
	// lis r10,-31848
	ctx.r10.s64 = -2087190528;
	// addi r9,r10,18232
	ctx.r9.s64 = ctx.r10.s64 + 18232;
	// lwz r11,17236(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 17236);
	// stw r11,104(r9)
	PPC_STORE_U32(ctx.r9.u32 + 104, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_836864D8"))) PPC_WEAK_FUNC(sub_836864D8);
PPC_FUNC_IMPL(__imp__sub_836864D8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32228
	ctx.r11.s64 = -2112094208;
	// lis r10,-31848
	ctx.r10.s64 = -2087190528;
	// addi r9,r11,-27240
	ctx.r9.s64 = ctx.r11.s64 + -27240;
	// addi r4,r10,18232
	ctx.r4.s64 = ctx.r10.s64 + 18232;
	// addi r5,r9,20
	ctx.r5.s64 = ctx.r9.s64 + 20;
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r4,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r4.u32);
	// lis r8,-31842
	ctx.r8.s64 = -2086797312;
	// stw r5,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r5.u32);
	// lis r7,-32239
	ctx.r7.s64 = -2112815104;
	// stw r3,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r3.u32);
	// lis r6,-31827
	ctx.r6.s64 = -2085814272;
	// li r10,5
	ctx.r10.s64 = 5;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r5,r8,19184
	ctx.r5.s64 = ctx.r8.s64 + 19184;
	// stw r10,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r10.u32);
	// addi r4,r7,-26128
	ctx.r4.s64 = ctx.r7.s64 + -26128;
	// stw r11,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r11.u32);
	// addi r3,r6,-8892
	ctx.r3.s64 = ctx.r6.s64 + -8892;
	// stw r11,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r11.u32);
	// li r10,1
	ctx.r10.s64 = 1;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,44
	ctx.r6.s64 = 44;
	// bl 0x82ef5ae8
	ctx.lr = 0x83686548;
	sub_82EF5AE8(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83686558"))) PPC_WEAK_FUNC(sub_83686558);
PPC_FUNC_IMPL(__imp__sub_83686558) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32228
	ctx.r11.s64 = -2112094208;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r10,r11,-25604
	ctx.r10.s64 = ctx.r11.s64 + -25604;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// bl 0x82eeece8
	ctx.lr = 0x8368657C;
	sub_82EEECE8(ctx, base);
	// lis r9,-31827
	ctx.r9.s64 = -2085814272;
	// lis r11,-32239
	ctx.r11.s64 = -2112815104;
	// addi r7,r9,-8844
	ctx.r7.s64 = ctx.r9.s64 + -8844;
	// addi r11,r11,-26128
	ctx.r11.s64 = ctx.r11.s64 + -26128;
	// lis r8,-31991
	ctx.r8.s64 = -2096562176;
	// stw r11,-8844(r9)
	PPC_STORE_U32(ctx.r9.u32 + -8844, ctx.r11.u32);
	// lis r10,-32228
	ctx.r10.s64 = -2112094208;
	// addi r11,r8,-23456
	ctx.r11.s64 = ctx.r8.s64 + -23456;
	// addi r10,r10,-24344
	ctx.r10.s64 = ctx.r10.s64 + -24344;
	// stw r11,12(r7)
	PPC_STORE_U32(ctx.r7.u32 + 12, ctx.r11.u32);
	// lis r9,-31991
	ctx.r9.s64 = -2096562176;
	// stw r10,4(r7)
	PPC_STORE_U32(ctx.r7.u32 + 4, ctx.r10.u32);
	// li r10,44
	ctx.r10.s64 = 44;
	// addi r9,r9,-22360
	ctx.r9.s64 = ctx.r9.s64 + -22360;
	// stw r10,20(r7)
	PPC_STORE_U32(ctx.r7.u32 + 20, ctx.r10.u32);
	// stw r9,8(r7)
	PPC_STORE_U32(ctx.r7.u32 + 8, ctx.r9.u32);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// stw r11,16(r7)
	PPC_STORE_U32(ctx.r7.u32 + 16, ctx.r11.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_836865D4"))) PPC_WEAK_FUNC(sub_836865D4);
PPC_FUNC_IMPL(__imp__sub_836865D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_836865D8"))) PPC_WEAK_FUNC(sub_836865D8);
PPC_FUNC_IMPL(__imp__sub_836865D8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-32228
	ctx.r10.s64 = -2112094208;
	// lis r9,-32239
	ctx.r9.s64 = -2112815104;
	// addi r7,r10,-27196
	ctx.r7.s64 = ctx.r10.s64 + -27196;
	// lis r8,-31827
	ctx.r8.s64 = -2085814272;
	// li r6,2
	ctx.r6.s64 = 2;
	// stw r7,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r7.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r4,r9,-26464
	ctx.r4.s64 = ctx.r9.s64 + -26464;
	// stw r6,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r6.u32);
	// addi r3,r8,-8820
	ctx.r3.s64 = ctx.r8.s64 + -8820;
	// stw r11,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r11.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r11.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r11,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r11.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,8
	ctx.r6.s64 = 8;
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x82ef5ae8
	ctx.lr = 0x83686638;
	sub_82EF5AE8(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83686648"))) PPC_WEAK_FUNC(sub_83686648);
PPC_FUNC_IMPL(__imp__sub_83686648) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-32228
	ctx.r10.s64 = -2112094208;
	// lis r9,-32239
	ctx.r9.s64 = -2112815104;
	// addi r7,r10,-27148
	ctx.r7.s64 = ctx.r10.s64 + -27148;
	// lis r8,-31827
	ctx.r8.s64 = -2085814272;
	// li r6,2
	ctx.r6.s64 = 2;
	// stw r7,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r7.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r4,r9,-26260
	ctx.r4.s64 = ctx.r9.s64 + -26260;
	// stw r6,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r6.u32);
	// addi r3,r8,-8772
	ctx.r3.s64 = ctx.r8.s64 + -8772;
	// stw r11,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r11.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r11.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r11,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r11.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,16
	ctx.r6.s64 = 16;
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x82ef5ae8
	ctx.lr = 0x836866A8;
	sub_82EF5AE8(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_836866B8"))) PPC_WEAK_FUNC(sub_836866B8);
PPC_FUNC_IMPL(__imp__sub_836866B8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-32228
	ctx.r10.s64 = -2112094208;
	// lis r9,-32239
	ctx.r9.s64 = -2112815104;
	// addi r7,r10,-27100
	ctx.r7.s64 = ctx.r10.s64 + -27100;
	// lis r8,-31827
	ctx.r8.s64 = -2085814272;
	// li r6,1
	ctx.r6.s64 = 1;
	// stw r7,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r7.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r4,r9,-26496
	ctx.r4.s64 = ctx.r9.s64 + -26496;
	// stw r6,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r6.u32);
	// addi r3,r8,-8724
	ctx.r3.s64 = ctx.r8.s64 + -8724;
	// stw r11,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r11.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r11.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r11,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r11.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,12
	ctx.r6.s64 = 12;
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x82ef5ae8
	ctx.lr = 0x83686718;
	sub_82EF5AE8(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83686728"))) PPC_WEAK_FUNC(sub_83686728);
PPC_FUNC_IMPL(__imp__sub_83686728) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-32228
	ctx.r10.s64 = -2112094208;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r6,r10,-27056
	ctx.r6.s64 = ctx.r10.s64 + -27056;
	// lis r9,-31842
	ctx.r9.s64 = -2086797312;
	// stw r4,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r4.u32);
	// lis r8,-32239
	ctx.r8.s64 = -2112815104;
	// stw r6,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r6.u32);
	// lis r7,-31827
	ctx.r7.s64 = -2085814272;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r5,r9,19184
	ctx.r5.s64 = ctx.r9.s64 + 19184;
	// addi r4,r8,-26404
	ctx.r4.s64 = ctx.r8.s64 + -26404;
	// stw r11,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r11.u32);
	// addi r3,r7,-8676
	ctx.r3.s64 = ctx.r7.s64 + -8676;
	// stw r11,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r11.u32);
	// li r31,5
	ctx.r31.s64 = 5;
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r31,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r31.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,44
	ctx.r6.s64 = 44;
	// bl 0x82ef5ae8
	ctx.lr = 0x83686794;
	sub_82EF5AE8(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_836867A8"))) PPC_WEAK_FUNC(sub_836867A8);
PPC_FUNC_IMPL(__imp__sub_836867A8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x830998b0
	ctx.lr = 0x836867C0;
	sub_830998B0(ctx, base);
	// lis r10,-31827
	ctx.r10.s64 = -2085814272;
	// lis r11,-32239
	ctx.r11.s64 = -2112815104;
	// addi r7,r10,-8628
	ctx.r7.s64 = ctx.r10.s64 + -8628;
	// addi r11,r11,-26404
	ctx.r11.s64 = ctx.r11.s64 + -26404;
	// lis r8,-31991
	ctx.r8.s64 = -2096562176;
	// stw r11,-8628(r10)
	PPC_STORE_U32(ctx.r10.u32 + -8628, ctx.r11.u32);
	// lis r10,-32228
	ctx.r10.s64 = -2112094208;
	// addi r11,r8,-23328
	ctx.r11.s64 = ctx.r8.s64 + -23328;
	// addi r10,r10,-24240
	ctx.r10.s64 = ctx.r10.s64 + -24240;
	// stw r11,12(r7)
	PPC_STORE_U32(ctx.r7.u32 + 12, ctx.r11.u32);
	// lis r9,-31991
	ctx.r9.s64 = -2096562176;
	// stw r10,4(r7)
	PPC_STORE_U32(ctx.r7.u32 + 4, ctx.r10.u32);
	// li r10,44
	ctx.r10.s64 = 44;
	// addi r9,r9,-23344
	ctx.r9.s64 = ctx.r9.s64 + -23344;
	// stw r10,20(r7)
	PPC_STORE_U32(ctx.r7.u32 + 20, ctx.r10.u32);
	// stw r9,8(r7)
	PPC_STORE_U32(ctx.r7.u32 + 8, ctx.r9.u32);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// stw r11,16(r7)
	PPC_STORE_U32(ctx.r7.u32 + 16, ctx.r11.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83686818"))) PPC_WEAK_FUNC(sub_83686818);
PPC_FUNC_IMPL(__imp__sub_83686818) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32228
	ctx.r11.s64 = -2112094208;
	// lis r10,-31842
	ctx.r10.s64 = -2086797312;
	// addi r9,r11,-27076
	ctx.r9.s64 = ctx.r11.s64 + -27076;
	// lis r8,-32239
	ctx.r8.s64 = -2112815104;
	// addi r6,r9,164
	ctx.r6.s64 = ctx.r9.s64 + 164;
	// lis r7,-31827
	ctx.r7.s64 = -2085814272;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r6,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r6.u32);
	// addi r5,r10,19184
	ctx.r5.s64 = ctx.r10.s64 + 19184;
	// addi r4,r8,-30580
	ctx.r4.s64 = ctx.r8.s64 + -30580;
	// stw r11,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r11.u32);
	// addi r3,r7,-8604
	ctx.r3.s64 = ctx.r7.s64 + -8604;
	// stw r11,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r11.u32);
	// li r31,1
	ctx.r31.s64 = 1;
	// stw r11,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r11.u32);
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// stw r31,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r31.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,128
	ctx.r6.s64 = 128;
	// bl 0x82ef5ae8
	ctx.lr = 0x83686880;
	sub_82EF5AE8(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83686894"))) PPC_WEAK_FUNC(sub_83686894);
PPC_FUNC_IMPL(__imp__sub_83686894) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83686898"))) PPC_WEAK_FUNC(sub_83686898);
PPC_FUNC_IMPL(__imp__sub_83686898) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-224(r1)
	ea = -224 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32228
	ctx.r11.s64 = -2112094208;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r10,r11,-25636
	ctx.r10.s64 = ctx.r11.s64 + -25636;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// bl 0x83099b38
	ctx.lr = 0x836868BC;
	sub_83099B38(ctx, base);
	// lis r9,-31827
	ctx.r9.s64 = -2085814272;
	// lis r11,-32239
	ctx.r11.s64 = -2112815104;
	// addi r7,r9,-8556
	ctx.r7.s64 = ctx.r9.s64 + -8556;
	// addi r11,r11,-30580
	ctx.r11.s64 = ctx.r11.s64 + -30580;
	// lis r8,-31991
	ctx.r8.s64 = -2096562176;
	// stw r11,-8556(r9)
	PPC_STORE_U32(ctx.r9.u32 + -8556, ctx.r11.u32);
	// lis r10,-32228
	ctx.r10.s64 = -2112094208;
	// addi r11,r8,-23200
	ctx.r11.s64 = ctx.r8.s64 + -23200;
	// addi r10,r10,-24224
	ctx.r10.s64 = ctx.r10.s64 + -24224;
	// stw r11,12(r7)
	PPC_STORE_U32(ctx.r7.u32 + 12, ctx.r11.u32);
	// lis r9,-31991
	ctx.r9.s64 = -2096562176;
	// stw r10,4(r7)
	PPC_STORE_U32(ctx.r7.u32 + 4, ctx.r10.u32);
	// li r10,128
	ctx.r10.s64 = 128;
	// addi r9,r9,-23240
	ctx.r9.s64 = ctx.r9.s64 + -23240;
	// stw r10,20(r7)
	PPC_STORE_U32(ctx.r7.u32 + 20, ctx.r10.u32);
	// stw r9,8(r7)
	PPC_STORE_U32(ctx.r7.u32 + 8, ctx.r9.u32);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// stw r11,16(r7)
	PPC_STORE_U32(ctx.r7.u32 + 16, ctx.r11.u32);
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83686914"))) PPC_WEAK_FUNC(sub_83686914);
PPC_FUNC_IMPL(__imp__sub_83686914) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83686918"))) PPC_WEAK_FUNC(sub_83686918);
PPC_FUNC_IMPL(__imp__sub_83686918) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-32228
	ctx.r10.s64 = -2112094208;
	// lis r9,-32239
	ctx.r9.s64 = -2112815104;
	// addi r7,r10,-26848
	ctx.r7.s64 = ctx.r10.s64 + -26848;
	// lis r8,-31827
	ctx.r8.s64 = -2085814272;
	// li r6,3
	ctx.r6.s64 = 3;
	// stw r7,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r7.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r4,r9,-30616
	ctx.r4.s64 = ctx.r9.s64 + -30616;
	// stw r6,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r6.u32);
	// addi r3,r8,-8532
	ctx.r3.s64 = ctx.r8.s64 + -8532;
	// stw r11,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r11.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r11.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r11,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r11.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,64
	ctx.r6.s64 = 64;
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x82ef5ae8
	ctx.lr = 0x83686978;
	sub_82EF5AE8(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83686988"))) PPC_WEAK_FUNC(sub_83686988);
PPC_FUNC_IMPL(__imp__sub_83686988) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-32228
	ctx.r10.s64 = -2112094208;
	// lis r9,-32239
	ctx.r9.s64 = -2112815104;
	// addi r7,r10,-26776
	ctx.r7.s64 = ctx.r10.s64 + -26776;
	// lis r8,-31827
	ctx.r8.s64 = -2085814272;
	// li r6,6
	ctx.r6.s64 = 6;
	// stw r7,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r7.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r4,r9,-30652
	ctx.r4.s64 = ctx.r9.s64 + -30652;
	// stw r6,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r6.u32);
	// addi r3,r8,-8484
	ctx.r3.s64 = ctx.r8.s64 + -8484;
	// stw r11,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r11.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r11.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r11,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r11.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,112
	ctx.r6.s64 = 112;
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x82ef5ae8
	ctx.lr = 0x836869E8;
	sub_82EF5AE8(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_836869F8"))) PPC_WEAK_FUNC(sub_836869F8);
PPC_FUNC_IMPL(__imp__sub_836869F8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31848
	ctx.r11.s64 = -2087190528;
	// lis r10,-31848
	ctx.r10.s64 = -2087190528;
	// addi r9,r10,18352
	ctx.r9.s64 = ctx.r10.s64 + 18352;
	// lwz r11,17244(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 17244);
	// stw r11,176(r9)
	PPC_STORE_U32(ctx.r9.u32 + 176, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83686A10"))) PPC_WEAK_FUNC(sub_83686A10);
PPC_FUNC_IMPL(__imp__sub_83686A10) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32228
	ctx.r11.s64 = -2112094208;
	// lis r10,-31848
	ctx.r10.s64 = -2087190528;
	// addi r9,r11,-26872
	ctx.r9.s64 = ctx.r11.s64 + -26872;
	// addi r5,r10,18352
	ctx.r5.s64 = ctx.r10.s64 + 18352;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r6,r9,240
	ctx.r6.s64 = ctx.r9.s64 + 240;
	// stw r5,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r5.u32);
	// lis r8,-32239
	ctx.r8.s64 = -2112815104;
	// stw r4,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r4.u32);
	// lis r7,-31827
	ctx.r7.s64 = -2085814272;
	// stw r6,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r6.u32);
	// li r10,8
	ctx.r10.s64 = 8;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r4,r8,-30204
	ctx.r4.s64 = ctx.r8.s64 + -30204;
	// stw r10,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r10.u32);
	// addi r3,r7,-8436
	ctx.r3.s64 = ctx.r7.s64 + -8436;
	// stw r11,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r11.u32);
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r11,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r11.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,112
	ctx.r6.s64 = 112;
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x82ef5ae8
	ctx.lr = 0x83686A7C;
	sub_82EF5AE8(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83686A8C"))) PPC_WEAK_FUNC(sub_83686A8C);
PPC_FUNC_IMPL(__imp__sub_83686A8C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83686A90"))) PPC_WEAK_FUNC(sub_83686A90);
PPC_FUNC_IMPL(__imp__sub_83686A90) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-32228
	ctx.r10.s64 = -2112094208;
	// lis r9,-31827
	ctx.r9.s64 = -2085814272;
	// addi r6,r10,-26600
	ctx.r6.s64 = ctx.r10.s64 + -26600;
	// lis r8,-32239
	ctx.r8.s64 = -2112815104;
	// lis r7,-31827
	ctx.r7.s64 = -2085814272;
	// stw r6,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r6.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r5,r9,-8340
	ctx.r5.s64 = ctx.r9.s64 + -8340;
	// addi r4,r8,-26792
	ctx.r4.s64 = ctx.r8.s64 + -26792;
	// stw r11,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r11.u32);
	// addi r3,r7,-8388
	ctx.r3.s64 = ctx.r7.s64 + -8388;
	// stw r11,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r11.u32);
	// li r31,4
	ctx.r31.s64 = 4;
	// stw r11,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r11.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r31,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r31.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,64
	ctx.r6.s64 = 64;
	// bl 0x82ef5ae8
	ctx.lr = 0x83686AF8;
	sub_82EF5AE8(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83686B0C"))) PPC_WEAK_FUNC(sub_83686B0C);
PPC_FUNC_IMPL(__imp__sub_83686B0C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83686B10"))) PPC_WEAK_FUNC(sub_83686B10);
PPC_FUNC_IMPL(__imp__sub_83686B10) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-31842
	ctx.r10.s64 = -2086797312;
	// lis r9,-32239
	ctx.r9.s64 = -2112815104;
	// lis r8,-31827
	ctx.r8.s64 = -2085814272;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r5,r10,19184
	ctx.r5.s64 = ctx.r10.s64 + 19184;
	// addi r4,r9,-26188
	ctx.r4.s64 = ctx.r9.s64 + -26188;
	// stw r11,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r11.u32);
	// addi r3,r8,-8340
	ctx.r3.s64 = ctx.r8.s64 + -8340;
	// stw r11,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r11.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r11.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// stw r11,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r11.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// li r6,8
	ctx.r6.s64 = 8;
	// bl 0x82ef5ae8
	ctx.lr = 0x83686B68;
	sub_82EF5AE8(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83686B78"))) PPC_WEAK_FUNC(sub_83686B78);
PPC_FUNC_IMPL(__imp__sub_83686B78) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-32228
	ctx.r10.s64 = -2112094208;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r6,r10,-26504
	ctx.r6.s64 = ctx.r10.s64 + -26504;
	// lis r9,-31842
	ctx.r9.s64 = -2086797312;
	// stw r4,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r4.u32);
	// lis r8,-32238
	ctx.r8.s64 = -2112749568;
	// stw r6,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r6.u32);
	// lis r7,-31827
	ctx.r7.s64 = -2085814272;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r5,r9,19184
	ctx.r5.s64 = ctx.r9.s64 + 19184;
	// addi r4,r8,21668
	ctx.r4.s64 = ctx.r8.s64 + 21668;
	// stw r11,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r11.u32);
	// addi r3,r7,-8292
	ctx.r3.s64 = ctx.r7.s64 + -8292;
	// stw r11,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r11.u32);
	// li r31,14
	ctx.r31.s64 = 14;
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r31,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r31.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,152
	ctx.r6.s64 = 152;
	// bl 0x82ef5ae8
	ctx.lr = 0x83686BE4;
	sub_82EF5AE8(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83686BF8"))) PPC_WEAK_FUNC(sub_83686BF8);
PPC_FUNC_IMPL(__imp__sub_83686BF8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-256(r1)
	ea = -256 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8309a3e8
	ctx.lr = 0x83686C10;
	sub_8309A3E8(ctx, base);
	// lis r10,-31827
	ctx.r10.s64 = -2085814272;
	// lis r11,-32238
	ctx.r11.s64 = -2112749568;
	// addi r7,r10,-8244
	ctx.r7.s64 = ctx.r10.s64 + -8244;
	// addi r11,r11,21668
	ctx.r11.s64 = ctx.r11.s64 + 21668;
	// lis r8,-31991
	ctx.r8.s64 = -2096562176;
	// stw r11,-8244(r10)
	PPC_STORE_U32(ctx.r10.u32 + -8244, ctx.r11.u32);
	// lis r10,-32228
	ctx.r10.s64 = -2112094208;
	// addi r11,r8,-22968
	ctx.r11.s64 = ctx.r8.s64 + -22968;
	// addi r10,r10,-24064
	ctx.r10.s64 = ctx.r10.s64 + -24064;
	// stw r11,12(r7)
	PPC_STORE_U32(ctx.r7.u32 + 12, ctx.r11.u32);
	// lis r9,-31991
	ctx.r9.s64 = -2096562176;
	// stw r10,4(r7)
	PPC_STORE_U32(ctx.r7.u32 + 4, ctx.r10.u32);
	// li r10,152
	ctx.r10.s64 = 152;
	// addi r9,r9,-22984
	ctx.r9.s64 = ctx.r9.s64 + -22984;
	// stw r10,20(r7)
	PPC_STORE_U32(ctx.r7.u32 + 20, ctx.r10.u32);
	// stw r9,8(r7)
	PPC_STORE_U32(ctx.r7.u32 + 8, ctx.r9.u32);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// stw r11,16(r7)
	PPC_STORE_U32(ctx.r7.u32 + 16, ctx.r11.u32);
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83686C68"))) PPC_WEAK_FUNC(sub_83686C68);
PPC_FUNC_IMPL(__imp__sub_83686C68) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r9,-32228
	ctx.r9.s64 = -2112094208;
	// li r10,1
	ctx.r10.s64 = 1;
	// addi r3,r9,-26168
	ctx.r3.s64 = ctx.r9.s64 + -26168;
	// lis r8,-31842
	ctx.r8.s64 = -2086797312;
	// stw r10,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r10.u32);
	// lis r7,-32238
	ctx.r7.s64 = -2112749568;
	// stw r3,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r3.u32);
	// lis r6,-31827
	ctx.r6.s64 = -2085814272;
	// stw r10,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r10.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r5,r8,19184
	ctx.r5.s64 = ctx.r8.s64 + 19184;
	// addi r4,r7,21692
	ctx.r4.s64 = ctx.r7.s64 + 21692;
	// stw r11,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r11.u32);
	// addi r3,r6,-8220
	ctx.r3.s64 = ctx.r6.s64 + -8220;
	// stw r11,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r11.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,20
	ctx.r6.s64 = 20;
	// bl 0x82ef5ae8
	ctx.lr = 0x83686CCC;
	sub_82EF5AE8(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83686CDC"))) PPC_WEAK_FUNC(sub_83686CDC);
PPC_FUNC_IMPL(__imp__sub_83686CDC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83686CE0"))) PPC_WEAK_FUNC(sub_83686CE0);
PPC_FUNC_IMPL(__imp__sub_83686CE0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-32228
	ctx.r10.s64 = -2112094208;
	// lis r9,-32239
	ctx.r9.s64 = -2112815104;
	// addi r7,r10,-26144
	ctx.r7.s64 = ctx.r10.s64 + -26144;
	// lis r8,-31827
	ctx.r8.s64 = -2085814272;
	// li r6,2
	ctx.r6.s64 = 2;
	// stw r7,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r7.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r4,r9,-26228
	ctx.r4.s64 = ctx.r9.s64 + -26228;
	// stw r6,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r6.u32);
	// addi r3,r8,-8172
	ctx.r3.s64 = ctx.r8.s64 + -8172;
	// stw r11,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r11.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r11.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r11,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r11.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,8
	ctx.r6.s64 = 8;
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x82ef5ae8
	ctx.lr = 0x83686D40;
	sub_82EF5AE8(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83686D50"))) PPC_WEAK_FUNC(sub_83686D50);
PPC_FUNC_IMPL(__imp__sub_83686D50) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-32228
	ctx.r10.s64 = -2112094208;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r6,r10,-26096
	ctx.r6.s64 = ctx.r10.s64 + -26096;
	// lis r9,-31842
	ctx.r9.s64 = -2086797312;
	// stw r4,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r4.u32);
	// lis r8,-32239
	ctx.r8.s64 = -2112815104;
	// stw r6,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r6.u32);
	// lis r7,-31827
	ctx.r7.s64 = -2085814272;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r5,r9,19184
	ctx.r5.s64 = ctx.r9.s64 + 19184;
	// addi r4,r8,-26516
	ctx.r4.s64 = ctx.r8.s64 + -26516;
	// stw r11,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r11.u32);
	// addi r3,r7,-8124
	ctx.r3.s64 = ctx.r7.s64 + -8124;
	// stw r11,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r11.u32);
	// li r31,5
	ctx.r31.s64 = 5;
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r31,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r31.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,96
	ctx.r6.s64 = 96;
	// bl 0x82ef5ae8
	ctx.lr = 0x83686DBC;
	sub_82EF5AE8(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83686DD0"))) PPC_WEAK_FUNC(sub_83686DD0);
PPC_FUNC_IMPL(__imp__sub_83686DD0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32228
	ctx.r11.s64 = -2112094208;
	// li r31,0
	ctx.r31.s64 = 0;
	// addi r10,r11,-25620
	ctx.r10.s64 = ctx.r11.s64 + -25620;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82eeece8
	ctx.lr = 0x83686DFC;
	sub_82EEECE8(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,164
	ctx.r3.s64 = ctx.r1.s64 + 164;
	// bl 0x82eeece8
	ctx.lr = 0x83686E08;
	sub_82EEECE8(ctx, base);
	// lis r9,-31827
	ctx.r9.s64 = -2085814272;
	// lis r11,-32239
	ctx.r11.s64 = -2112815104;
	// addi r7,r9,-8076
	ctx.r7.s64 = ctx.r9.s64 + -8076;
	// addi r11,r11,-26516
	ctx.r11.s64 = ctx.r11.s64 + -26516;
	// lis r8,-31991
	ctx.r8.s64 = -2096562176;
	// stw r11,-8076(r9)
	PPC_STORE_U32(ctx.r9.u32 + -8076, ctx.r11.u32);
	// lis r10,-32228
	ctx.r10.s64 = -2112094208;
	// addi r11,r8,-22808
	ctx.r11.s64 = ctx.r8.s64 + -22808;
	// addi r10,r10,-23988
	ctx.r10.s64 = ctx.r10.s64 + -23988;
	// stw r11,12(r7)
	PPC_STORE_U32(ctx.r7.u32 + 12, ctx.r11.u32);
	// lis r9,-31991
	ctx.r9.s64 = -2096562176;
	// stw r10,4(r7)
	PPC_STORE_U32(ctx.r7.u32 + 4, ctx.r10.u32);
	// li r10,96
	ctx.r10.s64 = 96;
	// addi r9,r9,-22640
	ctx.r9.s64 = ctx.r9.s64 + -22640;
	// stw r10,20(r7)
	PPC_STORE_U32(ctx.r7.u32 + 20, ctx.r10.u32);
	// stw r9,8(r7)
	PPC_STORE_U32(ctx.r7.u32 + 8, ctx.r9.u32);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// stw r11,16(r7)
	PPC_STORE_U32(ctx.r7.u32 + 16, ctx.r11.u32);
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83686E64"))) PPC_WEAK_FUNC(sub_83686E64);
PPC_FUNC_IMPL(__imp__sub_83686E64) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83686E68"))) PPC_WEAK_FUNC(sub_83686E68);
PPC_FUNC_IMPL(__imp__sub_83686E68) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-32228
	ctx.r10.s64 = -2112094208;
	// lis r9,-32239
	ctx.r9.s64 = -2112815104;
	// addi r7,r10,-25976
	ctx.r7.s64 = ctx.r10.s64 + -25976;
	// lis r8,-31827
	ctx.r8.s64 = -2085814272;
	// li r6,2
	ctx.r6.s64 = 2;
	// stw r7,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r7.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r4,r9,-26368
	ctx.r4.s64 = ctx.r9.s64 + -26368;
	// stw r6,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r6.u32);
	// addi r3,r8,-8052
	ctx.r3.s64 = ctx.r8.s64 + -8052;
	// stw r11,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r11.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r11.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r11,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r11.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,8
	ctx.r6.s64 = 8;
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x82ef5ae8
	ctx.lr = 0x83686EC8;
	sub_82EF5AE8(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83686ED8"))) PPC_WEAK_FUNC(sub_83686ED8);
PPC_FUNC_IMPL(__imp__sub_83686ED8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-32228
	ctx.r10.s64 = -2112094208;
	// li r4,3
	ctx.r4.s64 = 3;
	// addi r6,r10,-25928
	ctx.r6.s64 = ctx.r10.s64 + -25928;
	// lis r9,-31842
	ctx.r9.s64 = -2086797312;
	// stw r4,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r4.u32);
	// lis r8,-32239
	ctx.r8.s64 = -2112815104;
	// stw r6,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r6.u32);
	// lis r7,-31827
	ctx.r7.s64 = -2085814272;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r5,r9,19184
	ctx.r5.s64 = ctx.r9.s64 + 19184;
	// addi r4,r8,-26108
	ctx.r4.s64 = ctx.r8.s64 + -26108;
	// stw r11,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r11.u32);
	// addi r3,r7,-8004
	ctx.r3.s64 = ctx.r7.s64 + -8004;
	// stw r11,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r11.u32);
	// li r31,7
	ctx.r31.s64 = 7;
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r31,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r31.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,84
	ctx.r6.s64 = 84;
	// bl 0x82ef5ae8
	ctx.lr = 0x83686F44;
	sub_82EF5AE8(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83686F58"))) PPC_WEAK_FUNC(sub_83686F58);
PPC_FUNC_IMPL(__imp__sub_83686F58) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32239
	ctx.r11.s64 = -2112815104;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r10,r11,-4800
	ctx.r10.s64 = ctx.r11.s64 + -4800;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// bl 0x82eeece8
	ctx.lr = 0x83686F7C;
	sub_82EEECE8(ctx, base);
	// lis r9,-31827
	ctx.r9.s64 = -2085814272;
	// lis r11,-32239
	ctx.r11.s64 = -2112815104;
	// addi r7,r9,-7956
	ctx.r7.s64 = ctx.r9.s64 + -7956;
	// addi r11,r11,-26108
	ctx.r11.s64 = ctx.r11.s64 + -26108;
	// lis r8,-31991
	ctx.r8.s64 = -2096562176;
	// stw r11,-7956(r9)
	PPC_STORE_U32(ctx.r9.u32 + -7956, ctx.r11.u32);
	// lis r10,-32228
	ctx.r10.s64 = -2112094208;
	// addi r11,r8,-22752
	ctx.r11.s64 = ctx.r8.s64 + -22752;
	// addi r10,r10,-23936
	ctx.r10.s64 = ctx.r10.s64 + -23936;
	// stw r11,12(r7)
	PPC_STORE_U32(ctx.r7.u32 + 12, ctx.r11.u32);
	// lis r9,-31991
	ctx.r9.s64 = -2096562176;
	// stw r10,4(r7)
	PPC_STORE_U32(ctx.r7.u32 + 4, ctx.r10.u32);
	// li r10,84
	ctx.r10.s64 = 84;
	// addi r9,r9,-22152
	ctx.r9.s64 = ctx.r9.s64 + -22152;
	// stw r10,20(r7)
	PPC_STORE_U32(ctx.r7.u32 + 20, ctx.r10.u32);
	// stw r9,8(r7)
	PPC_STORE_U32(ctx.r7.u32 + 8, ctx.r9.u32);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// stw r11,16(r7)
	PPC_STORE_U32(ctx.r7.u32 + 16, ctx.r11.u32);
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83686FD4"))) PPC_WEAK_FUNC(sub_83686FD4);
PPC_FUNC_IMPL(__imp__sub_83686FD4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83686FD8"))) PPC_WEAK_FUNC(sub_83686FD8);
PPC_FUNC_IMPL(__imp__sub_83686FD8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-32228
	ctx.r10.s64 = -2112094208;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r6,r10,-25760
	ctx.r6.s64 = ctx.r10.s64 + -25760;
	// lis r9,-31842
	ctx.r9.s64 = -2086797312;
	// stw r4,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r4.u32);
	// lis r8,-32239
	ctx.r8.s64 = -2112815104;
	// stw r6,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r6.u32);
	// lis r7,-31827
	ctx.r7.s64 = -2085814272;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r5,r9,19184
	ctx.r5.s64 = ctx.r9.s64 + 19184;
	// addi r4,r8,-26084
	ctx.r4.s64 = ctx.r8.s64 + -26084;
	// stw r11,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r11.u32);
	// addi r3,r7,-7932
	ctx.r3.s64 = ctx.r7.s64 + -7932;
	// stw r11,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r11.u32);
	// li r31,5
	ctx.r31.s64 = 5;
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r31,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r31.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,68
	ctx.r6.s64 = 68;
	// bl 0x82ef5ae8
	ctx.lr = 0x83687044;
	sub_82EF5AE8(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83687058"))) PPC_WEAK_FUNC(sub_83687058);
PPC_FUNC_IMPL(__imp__sub_83687058) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-32228
	ctx.r10.s64 = -2112094208;
	// lis r9,-31827
	ctx.r9.s64 = -2085814272;
	// addi r6,r10,-18408
	ctx.r6.s64 = ctx.r10.s64 + -18408;
	// lis r8,-32237
	ctx.r8.s64 = -2112684032;
	// lis r7,-31827
	ctx.r7.s64 = -2085814272;
	// stw r6,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r6.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r5,r9,-7120
	ctx.r5.s64 = ctx.r9.s64 + -7120;
	// addi r4,r8,-29700
	ctx.r4.s64 = ctx.r8.s64 + -29700;
	// stw r11,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r11.u32);
	// addi r3,r7,-7168
	ctx.r3.s64 = ctx.r7.s64 + -7168;
	// stw r11,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r11.u32);
	// li r31,5
	ctx.r31.s64 = 5;
	// stw r11,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r11.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r31,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r31.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,48
	ctx.r6.s64 = 48;
	// bl 0x82ef5ae8
	ctx.lr = 0x836870C0;
	sub_82EF5AE8(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_836870D4"))) PPC_WEAK_FUNC(sub_836870D4);
PPC_FUNC_IMPL(__imp__sub_836870D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_836870D8"))) PPC_WEAK_FUNC(sub_836870D8);
PPC_FUNC_IMPL(__imp__sub_836870D8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-31842
	ctx.r10.s64 = -2086797312;
	// lis r9,-32237
	ctx.r9.s64 = -2112684032;
	// lis r8,-31827
	ctx.r8.s64 = -2085814272;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r5,r10,19184
	ctx.r5.s64 = ctx.r10.s64 + 19184;
	// addi r4,r9,-28784
	ctx.r4.s64 = ctx.r9.s64 + -28784;
	// stw r11,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r11.u32);
	// addi r3,r8,-7120
	ctx.r3.s64 = ctx.r8.s64 + -7120;
	// stw r11,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r11.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r11.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// stw r11,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r11.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// li r6,8
	ctx.r6.s64 = 8;
	// bl 0x82ef5ae8
	ctx.lr = 0x83687130;
	sub_82EF5AE8(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83687140"))) PPC_WEAK_FUNC(sub_83687140);
PPC_FUNC_IMPL(__imp__sub_83687140) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-32228
	ctx.r10.s64 = -2112094208;
	// lis r9,-32237
	ctx.r9.s64 = -2112684032;
	// addi r7,r10,-18288
	ctx.r7.s64 = ctx.r10.s64 + -18288;
	// lis r8,-31827
	ctx.r8.s64 = -2085814272;
	// li r6,3
	ctx.r6.s64 = 3;
	// stw r7,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r7.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r4,r9,-29260
	ctx.r4.s64 = ctx.r9.s64 + -29260;
	// stw r6,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r6.u32);
	// addi r3,r8,-7072
	ctx.r3.s64 = ctx.r8.s64 + -7072;
	// stw r11,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r11.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r11.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r11,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r11.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,12
	ctx.r6.s64 = 12;
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x82ef5ae8
	ctx.lr = 0x836871A0;
	sub_82EF5AE8(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_836871B0"))) PPC_WEAK_FUNC(sub_836871B0);
PPC_FUNC_IMPL(__imp__sub_836871B0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-32228
	ctx.r10.s64 = -2112094208;
	// lis r9,-31827
	ctx.r9.s64 = -2085814272;
	// addi r6,r10,-18216
	ctx.r6.s64 = ctx.r10.s64 + -18216;
	// lis r8,-32237
	ctx.r8.s64 = -2112684032;
	// lis r7,-31827
	ctx.r7.s64 = -2085814272;
	// stw r6,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r6.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r5,r9,-6976
	ctx.r5.s64 = ctx.r9.s64 + -6976;
	// addi r4,r8,-29212
	ctx.r4.s64 = ctx.r8.s64 + -29212;
	// stw r11,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r11.u32);
	// addi r3,r7,-7024
	ctx.r3.s64 = ctx.r7.s64 + -7024;
	// stw r11,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r11.u32);
	// li r31,2
	ctx.r31.s64 = 2;
	// stw r11,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r11.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r31,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r31.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,24
	ctx.r6.s64 = 24;
	// bl 0x82ef5ae8
	ctx.lr = 0x83687218;
	sub_82EF5AE8(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8368722C"))) PPC_WEAK_FUNC(sub_8368722C);
PPC_FUNC_IMPL(__imp__sub_8368722C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83687230"))) PPC_WEAK_FUNC(sub_83687230);
PPC_FUNC_IMPL(__imp__sub_83687230) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-31842
	ctx.r10.s64 = -2086797312;
	// lis r9,-32237
	ctx.r9.s64 = -2112684032;
	// lis r8,-31827
	ctx.r8.s64 = -2085814272;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r5,r10,19184
	ctx.r5.s64 = ctx.r10.s64 + 19184;
	// addi r4,r9,-28800
	ctx.r4.s64 = ctx.r9.s64 + -28800;
	// stw r11,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r11.u32);
	// addi r3,r8,-6976
	ctx.r3.s64 = ctx.r8.s64 + -6976;
	// stw r11,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r11.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r11.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// stw r11,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r11.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// li r6,8
	ctx.r6.s64 = 8;
	// bl 0x82ef5ae8
	ctx.lr = 0x83687288;
	sub_82EF5AE8(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83687298"))) PPC_WEAK_FUNC(sub_83687298);
PPC_FUNC_IMPL(__imp__sub_83687298) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-32228
	ctx.r10.s64 = -2112094208;
	// lis r9,-31827
	ctx.r9.s64 = -2085814272;
	// addi r6,r10,-18168
	ctx.r6.s64 = ctx.r10.s64 + -18168;
	// lis r8,-32237
	ctx.r8.s64 = -2112684032;
	// lis r7,-31827
	ctx.r7.s64 = -2085814272;
	// stw r6,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r6.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r5,r9,-6832
	ctx.r5.s64 = ctx.r9.s64 + -6832;
	// addi r4,r8,-29668
	ctx.r4.s64 = ctx.r8.s64 + -29668;
	// stw r11,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r11.u32);
	// addi r3,r7,-6928
	ctx.r3.s64 = ctx.r7.s64 + -6928;
	// stw r11,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r11.u32);
	// li r31,4
	ctx.r31.s64 = 4;
	// stw r11,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r11.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r31,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r31.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,20
	ctx.r6.s64 = 20;
	// bl 0x82ef5ae8
	ctx.lr = 0x83687300;
	sub_82EF5AE8(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83687314"))) PPC_WEAK_FUNC(sub_83687314);
PPC_FUNC_IMPL(__imp__sub_83687314) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83687318"))) PPC_WEAK_FUNC(sub_83687318);
PPC_FUNC_IMPL(__imp__sub_83687318) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-32228
	ctx.r10.s64 = -2112094208;
	// lis r9,-31827
	ctx.r9.s64 = -2085814272;
	// addi r6,r10,-18072
	ctx.r6.s64 = ctx.r10.s64 + -18072;
	// lis r8,-32237
	ctx.r8.s64 = -2112684032;
	// lis r7,-31827
	ctx.r7.s64 = -2085814272;
	// stw r6,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r6.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r5,r9,-6784
	ctx.r5.s64 = ctx.r9.s64 + -6784;
	// addi r4,r8,-29632
	ctx.r4.s64 = ctx.r8.s64 + -29632;
	// stw r11,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r11.u32);
	// addi r3,r7,-6880
	ctx.r3.s64 = ctx.r7.s64 + -6880;
	// stw r11,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r11.u32);
	// li r31,4
	ctx.r31.s64 = 4;
	// stw r11,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r11.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r31,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r31.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,24
	ctx.r6.s64 = 24;
	// bl 0x82ef5ae8
	ctx.lr = 0x83687380;
	sub_82EF5AE8(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83687394"))) PPC_WEAK_FUNC(sub_83687394);
PPC_FUNC_IMPL(__imp__sub_83687394) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83687398"))) PPC_WEAK_FUNC(sub_83687398);
PPC_FUNC_IMPL(__imp__sub_83687398) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-31842
	ctx.r10.s64 = -2086797312;
	// lis r9,-32237
	ctx.r9.s64 = -2112684032;
	// lis r8,-31827
	ctx.r8.s64 = -2085814272;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r5,r10,19184
	ctx.r5.s64 = ctx.r10.s64 + 19184;
	// addi r4,r9,-29508
	ctx.r4.s64 = ctx.r9.s64 + -29508;
	// stw r11,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r11.u32);
	// addi r3,r8,-6832
	ctx.r3.s64 = ctx.r8.s64 + -6832;
	// stw r11,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r11.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r11.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// stw r11,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r11.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// li r6,8
	ctx.r6.s64 = 8;
	// bl 0x82ef5ae8
	ctx.lr = 0x836873F0;
	sub_82EF5AE8(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83687400"))) PPC_WEAK_FUNC(sub_83687400);
PPC_FUNC_IMPL(__imp__sub_83687400) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-31842
	ctx.r10.s64 = -2086797312;
	// lis r9,-32237
	ctx.r9.s64 = -2112684032;
	// lis r8,-31827
	ctx.r8.s64 = -2085814272;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r5,r10,19184
	ctx.r5.s64 = ctx.r10.s64 + 19184;
	// addi r4,r9,-29480
	ctx.r4.s64 = ctx.r9.s64 + -29480;
	// stw r11,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r11.u32);
	// addi r3,r8,-6784
	ctx.r3.s64 = ctx.r8.s64 + -6784;
	// stw r11,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r11.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r11.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// stw r11,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r11.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// li r6,8
	ctx.r6.s64 = 8;
	// bl 0x82ef5ae8
	ctx.lr = 0x83687458;
	sub_82EF5AE8(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83687468"))) PPC_WEAK_FUNC(sub_83687468);
PPC_FUNC_IMPL(__imp__sub_83687468) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-32228
	ctx.r10.s64 = -2112094208;
	// lis r9,-31827
	ctx.r9.s64 = -2085814272;
	// addi r6,r10,-17976
	ctx.r6.s64 = ctx.r10.s64 + -17976;
	// lis r8,-32237
	ctx.r8.s64 = -2112684032;
	// lis r7,-31827
	ctx.r7.s64 = -2085814272;
	// stw r6,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r6.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r5,r9,-6688
	ctx.r5.s64 = ctx.r9.s64 + -6688;
	// addi r4,r8,-28688
	ctx.r4.s64 = ctx.r8.s64 + -28688;
	// stw r11,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r11.u32);
	// addi r3,r7,-6736
	ctx.r3.s64 = ctx.r7.s64 + -6736;
	// stw r11,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r11.u32);
	// li r31,10
	ctx.r31.s64 = 10;
	// stw r11,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r11.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r31,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r31.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,48
	ctx.r6.s64 = 48;
	// bl 0x82ef5ae8
	ctx.lr = 0x836874D0;
	sub_82EF5AE8(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_836874E4"))) PPC_WEAK_FUNC(sub_836874E4);
PPC_FUNC_IMPL(__imp__sub_836874E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_836874E8"))) PPC_WEAK_FUNC(sub_836874E8);
PPC_FUNC_IMPL(__imp__sub_836874E8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-31842
	ctx.r10.s64 = -2086797312;
	// lis r9,-32237
	ctx.r9.s64 = -2112684032;
	// lis r8,-31827
	ctx.r8.s64 = -2085814272;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r5,r10,19184
	ctx.r5.s64 = ctx.r10.s64 + 19184;
	// addi r4,r9,-28760
	ctx.r4.s64 = ctx.r9.s64 + -28760;
	// stw r11,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r11.u32);
	// addi r3,r8,-6688
	ctx.r3.s64 = ctx.r8.s64 + -6688;
	// stw r11,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r11.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r11.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// stw r11,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r11.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// li r6,8
	ctx.r6.s64 = 8;
	// bl 0x82ef5ae8
	ctx.lr = 0x83687540;
	sub_82EF5AE8(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83687550"))) PPC_WEAK_FUNC(sub_83687550);
PPC_FUNC_IMPL(__imp__sub_83687550) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-32228
	ctx.r10.s64 = -2112094208;
	// lis r9,-32237
	ctx.r9.s64 = -2112684032;
	// addi r7,r10,-17736
	ctx.r7.s64 = ctx.r10.s64 + -17736;
	// lis r8,-31827
	ctx.r8.s64 = -2085814272;
	// li r6,10
	ctx.r6.s64 = 10;
	// stw r7,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r7.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r4,r9,-28664
	ctx.r4.s64 = ctx.r9.s64 + -28664;
	// stw r6,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r6.u32);
	// addi r3,r8,-6640
	ctx.r3.s64 = ctx.r8.s64 + -6640;
	// stw r11,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r11.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r11.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r11,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r11.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,100
	ctx.r6.s64 = 100;
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x82ef5ae8
	ctx.lr = 0x836875B0;
	sub_82EF5AE8(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_836875C0"))) PPC_WEAK_FUNC(sub_836875C0);
PPC_FUNC_IMPL(__imp__sub_836875C0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-32228
	ctx.r10.s64 = -2112094208;
	// lis r9,-32237
	ctx.r9.s64 = -2112684032;
	// addi r7,r10,-17496
	ctx.r7.s64 = ctx.r10.s64 + -17496;
	// lis r8,-31827
	ctx.r8.s64 = -2085814272;
	// li r6,3
	ctx.r6.s64 = 3;
	// stw r7,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r7.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r4,r9,-28616
	ctx.r4.s64 = ctx.r9.s64 + -28616;
	// stw r6,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r6.u32);
	// addi r3,r8,-6592
	ctx.r3.s64 = ctx.r8.s64 + -6592;
	// stw r11,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r11.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r11.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r11,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r11.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,208
	ctx.r6.s64 = 208;
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x82ef5ae8
	ctx.lr = 0x83687620;
	sub_82EF5AE8(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83687630"))) PPC_WEAK_FUNC(sub_83687630);
PPC_FUNC_IMPL(__imp__sub_83687630) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-32228
	ctx.r10.s64 = -2112094208;
	// lis r9,-32237
	ctx.r9.s64 = -2112684032;
	// addi r7,r10,-17424
	ctx.r7.s64 = ctx.r10.s64 + -17424;
	// lis r8,-31827
	ctx.r8.s64 = -2085814272;
	// li r6,9
	ctx.r6.s64 = 9;
	// stw r7,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r7.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r4,r9,-28584
	ctx.r4.s64 = ctx.r9.s64 + -28584;
	// stw r6,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r6.u32);
	// addi r3,r8,-6544
	ctx.r3.s64 = ctx.r8.s64 + -6544;
	// stw r11,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r11.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r11.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r11,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r11.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,36
	ctx.r6.s64 = 36;
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x82ef5ae8
	ctx.lr = 0x83687690;
	sub_82EF5AE8(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_836876A0"))) PPC_WEAK_FUNC(sub_836876A0);
PPC_FUNC_IMPL(__imp__sub_836876A0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-32228
	ctx.r10.s64 = -2112094208;
	// lis r9,-32237
	ctx.r9.s64 = -2112684032;
	// addi r7,r10,-17208
	ctx.r7.s64 = ctx.r10.s64 + -17208;
	// lis r8,-31827
	ctx.r8.s64 = -2085814272;
	// li r6,1
	ctx.r6.s64 = 1;
	// stw r7,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r7.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r4,r9,-28548
	ctx.r4.s64 = ctx.r9.s64 + -28548;
	// stw r6,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r6.u32);
	// addi r3,r8,-6496
	ctx.r3.s64 = ctx.r8.s64 + -6496;
	// stw r11,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r11.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r11.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r11,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r11.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,72
	ctx.r6.s64 = 72;
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x82ef5ae8
	ctx.lr = 0x83687700;
	sub_82EF5AE8(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83687710"))) PPC_WEAK_FUNC(sub_83687710);
PPC_FUNC_IMPL(__imp__sub_83687710) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-31827
	ctx.r10.s64 = -2085814272;
	// lis r9,-32237
	ctx.r9.s64 = -2112684032;
	// lis r8,-31827
	ctx.r8.s64 = -2085814272;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r5,r10,-6304
	ctx.r5.s64 = ctx.r10.s64 + -6304;
	// addi r4,r9,-29296
	ctx.r4.s64 = ctx.r9.s64 + -29296;
	// stw r11,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r11.u32);
	// addi r3,r8,-6448
	ctx.r3.s64 = ctx.r8.s64 + -6448;
	// stw r11,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r11.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r11.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// stw r11,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r11.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// li r6,24
	ctx.r6.s64 = 24;
	// bl 0x82ef5ae8
	ctx.lr = 0x83687768;
	sub_82EF5AE8(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83687778"))) PPC_WEAK_FUNC(sub_83687778);
PPC_FUNC_IMPL(__imp__sub_83687778) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-31827
	ctx.r10.s64 = -2085814272;
	// lis r9,-32237
	ctx.r9.s64 = -2112684032;
	// lis r8,-31827
	ctx.r8.s64 = -2085814272;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r5,r10,-6256
	ctx.r5.s64 = ctx.r10.s64 + -6256;
	// addi r4,r9,-28740
	ctx.r4.s64 = ctx.r9.s64 + -28740;
	// stw r11,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r11.u32);
	// addi r3,r8,-6400
	ctx.r3.s64 = ctx.r8.s64 + -6400;
	// stw r11,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r11.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r11.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// stw r11,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r11.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// li r6,20
	ctx.r6.s64 = 20;
	// bl 0x82ef5ae8
	ctx.lr = 0x836877D0;
	sub_82EF5AE8(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_836877E0"))) PPC_WEAK_FUNC(sub_836877E0);
PPC_FUNC_IMPL(__imp__sub_836877E0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-31827
	ctx.r10.s64 = -2085814272;
	// lis r9,-32237
	ctx.r9.s64 = -2112684032;
	// lis r8,-31827
	ctx.r8.s64 = -2085814272;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r5,r10,-6304
	ctx.r5.s64 = ctx.r10.s64 + -6304;
	// addi r4,r9,-28948
	ctx.r4.s64 = ctx.r9.s64 + -28948;
	// stw r11,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r11.u32);
	// addi r3,r8,-6352
	ctx.r3.s64 = ctx.r8.s64 + -6352;
	// stw r11,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r11.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r11.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// stw r11,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r11.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// li r6,24
	ctx.r6.s64 = 24;
	// bl 0x82ef5ae8
	ctx.lr = 0x83687838;
	sub_82EF5AE8(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83687848"))) PPC_WEAK_FUNC(sub_83687848);
PPC_FUNC_IMPL(__imp__sub_83687848) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-32228
	ctx.r10.s64 = -2112094208;
	// lis r9,-31827
	ctx.r9.s64 = -2085814272;
	// addi r6,r10,-17184
	ctx.r6.s64 = ctx.r10.s64 + -17184;
	// lis r8,-32237
	ctx.r8.s64 = -2112684032;
	// lis r7,-31827
	ctx.r7.s64 = -2085814272;
	// stw r6,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r6.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r5,r9,-6256
	ctx.r5.s64 = ctx.r9.s64 + -6256;
	// addi r4,r8,-29732
	ctx.r4.s64 = ctx.r8.s64 + -29732;
	// stw r11,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r11.u32);
	// addi r3,r7,-6304
	ctx.r3.s64 = ctx.r7.s64 + -6304;
	// stw r11,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r11.u32);
	// li r31,1
	ctx.r31.s64 = 1;
	// stw r11,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r11.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r31,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r31.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,24
	ctx.r6.s64 = 24;
	// bl 0x82ef5ae8
	ctx.lr = 0x836878B0;
	sub_82EF5AE8(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_836878C4"))) PPC_WEAK_FUNC(sub_836878C4);
PPC_FUNC_IMPL(__imp__sub_836878C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_836878C8"))) PPC_WEAK_FUNC(sub_836878C8);
PPC_FUNC_IMPL(__imp__sub_836878C8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-32228
	ctx.r10.s64 = -2112094208;
	// lis r9,-31842
	ctx.r9.s64 = -2086797312;
	// addi r6,r10,-17160
	ctx.r6.s64 = ctx.r10.s64 + -17160;
	// lis r8,-32237
	ctx.r8.s64 = -2112684032;
	// lis r7,-31827
	ctx.r7.s64 = -2085814272;
	// stw r6,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r6.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r5,r9,19184
	ctx.r5.s64 = ctx.r9.s64 + 19184;
	// addi r4,r8,-28708
	ctx.r4.s64 = ctx.r8.s64 + -28708;
	// stw r11,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r11.u32);
	// addi r3,r7,-6256
	ctx.r3.s64 = ctx.r7.s64 + -6256;
	// stw r11,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r11.u32);
	// li r31,1
	ctx.r31.s64 = 1;
	// stw r11,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r11.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r31,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r31.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,20
	ctx.r6.s64 = 20;
	// bl 0x82ef5ae8
	ctx.lr = 0x83687930;
	sub_82EF5AE8(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83687944"))) PPC_WEAK_FUNC(sub_83687944);
PPC_FUNC_IMPL(__imp__sub_83687944) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83687948"))) PPC_WEAK_FUNC(sub_83687948);
PPC_FUNC_IMPL(__imp__sub_83687948) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-32228
	ctx.r10.s64 = -2112094208;
	// lis r9,-31827
	ctx.r9.s64 = -2085814272;
	// addi r6,r10,-17136
	ctx.r6.s64 = ctx.r10.s64 + -17136;
	// lis r8,-32237
	ctx.r8.s64 = -2112684032;
	// lis r7,-31827
	ctx.r7.s64 = -2085814272;
	// stw r6,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r6.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r5,r9,-6160
	ctx.r5.s64 = ctx.r9.s64 + -6160;
	// addi r4,r8,-29324
	ctx.r4.s64 = ctx.r8.s64 + -29324;
	// stw r11,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r11.u32);
	// addi r3,r7,-6208
	ctx.r3.s64 = ctx.r7.s64 + -6208;
	// stw r11,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r11.u32);
	// li r31,3
	ctx.r31.s64 = 3;
	// stw r11,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r11.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r31,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r31.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,28
	ctx.r6.s64 = 28;
	// bl 0x82ef5ae8
	ctx.lr = 0x836879B0;
	sub_82EF5AE8(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_836879C4"))) PPC_WEAK_FUNC(sub_836879C4);
PPC_FUNC_IMPL(__imp__sub_836879C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_836879C8"))) PPC_WEAK_FUNC(sub_836879C8);
PPC_FUNC_IMPL(__imp__sub_836879C8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-31842
	ctx.r10.s64 = -2086797312;
	// lis r9,-32237
	ctx.r9.s64 = -2112684032;
	// lis r8,-31827
	ctx.r8.s64 = -2085814272;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r5,r10,19184
	ctx.r5.s64 = ctx.r10.s64 + 19184;
	// addi r4,r9,-28520
	ctx.r4.s64 = ctx.r9.s64 + -28520;
	// stw r11,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r11.u32);
	// addi r3,r8,-6160
	ctx.r3.s64 = ctx.r8.s64 + -6160;
	// stw r11,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r11.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r11.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// stw r11,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r11.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// li r6,8
	ctx.r6.s64 = 8;
	// bl 0x82ef5ae8
	ctx.lr = 0x83687A20;
	sub_82EF5AE8(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83687A30"))) PPC_WEAK_FUNC(sub_83687A30);
PPC_FUNC_IMPL(__imp__sub_83687A30) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-32228
	ctx.r10.s64 = -2112094208;
	// lis r9,-32237
	ctx.r9.s64 = -2112684032;
	// addi r7,r10,-17064
	ctx.r7.s64 = ctx.r10.s64 + -17064;
	// lis r8,-31827
	ctx.r8.s64 = -2085814272;
	// li r6,3
	ctx.r6.s64 = 3;
	// stw r7,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r7.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r4,r9,-29596
	ctx.r4.s64 = ctx.r9.s64 + -29596;
	// stw r6,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r6.u32);
	// addi r3,r8,-6112
	ctx.r3.s64 = ctx.r8.s64 + -6112;
	// stw r11,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r11.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r11.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r11,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r11.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,12
	ctx.r6.s64 = 12;
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x82ef5ae8
	ctx.lr = 0x83687A90;
	sub_82EF5AE8(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83687AA0"))) PPC_WEAK_FUNC(sub_83687AA0);
PPC_FUNC_IMPL(__imp__sub_83687AA0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-32228
	ctx.r10.s64 = -2112094208;
	// lis r9,-31827
	ctx.r9.s64 = -2085814272;
	// addi r6,r10,-16992
	ctx.r6.s64 = ctx.r10.s64 + -16992;
	// lis r8,-32237
	ctx.r8.s64 = -2112684032;
	// lis r7,-31827
	ctx.r7.s64 = -2085814272;
	// stw r6,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r6.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r5,r9,-5968
	ctx.r5.s64 = ctx.r9.s64 + -5968;
	// addi r4,r8,-29536
	ctx.r4.s64 = ctx.r8.s64 + -29536;
	// stw r11,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r11.u32);
	// addi r3,r7,-6064
	ctx.r3.s64 = ctx.r7.s64 + -6064;
	// stw r11,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r11.u32);
	// li r31,1
	ctx.r31.s64 = 1;
	// stw r11,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r11.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r31,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r31.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,32
	ctx.r6.s64 = 32;
	// bl 0x82ef5ae8
	ctx.lr = 0x83687B08;
	sub_82EF5AE8(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83687B1C"))) PPC_WEAK_FUNC(sub_83687B1C);
PPC_FUNC_IMPL(__imp__sub_83687B1C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83687B20"))) PPC_WEAK_FUNC(sub_83687B20);
PPC_FUNC_IMPL(__imp__sub_83687B20) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-32228
	ctx.r10.s64 = -2112094208;
	// lis r9,-32237
	ctx.r9.s64 = -2112684032;
	// addi r7,r10,-16968
	ctx.r7.s64 = ctx.r10.s64 + -16968;
	// lis r8,-31827
	ctx.r8.s64 = -2085814272;
	// li r6,3
	ctx.r6.s64 = 3;
	// stw r7,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r7.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r4,r9,-29160
	ctx.r4.s64 = ctx.r9.s64 + -29160;
	// stw r6,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r6.u32);
	// addi r3,r8,-6016
	ctx.r3.s64 = ctx.r8.s64 + -6016;
	// stw r11,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r11.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r11.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r11,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r11.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,48
	ctx.r6.s64 = 48;
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x82ef5ae8
	ctx.lr = 0x83687B80;
	sub_82EF5AE8(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83687B90"))) PPC_WEAK_FUNC(sub_83687B90);
PPC_FUNC_IMPL(__imp__sub_83687B90) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-32228
	ctx.r10.s64 = -2112094208;
	// lis r9,-31842
	ctx.r9.s64 = -2086797312;
	// addi r6,r10,-16896
	ctx.r6.s64 = ctx.r10.s64 + -16896;
	// lis r8,-32237
	ctx.r8.s64 = -2112684032;
	// lis r7,-31827
	ctx.r7.s64 = -2085814272;
	// stw r6,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r6.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r5,r9,19184
	ctx.r5.s64 = ctx.r9.s64 + 19184;
	// addi r4,r8,-29112
	ctx.r4.s64 = ctx.r8.s64 + -29112;
	// stw r11,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r11.u32);
	// addi r3,r7,-5968
	ctx.r3.s64 = ctx.r7.s64 + -5968;
	// stw r11,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r11.u32);
	// li r31,1
	ctx.r31.s64 = 1;
	// stw r11,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r11.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r31,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r31.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,20
	ctx.r6.s64 = 20;
	// bl 0x82ef5ae8
	ctx.lr = 0x83687BF8;
	sub_82EF5AE8(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83687C0C"))) PPC_WEAK_FUNC(sub_83687C0C);
PPC_FUNC_IMPL(__imp__sub_83687C0C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83687C10"))) PPC_WEAK_FUNC(sub_83687C10);
PPC_FUNC_IMPL(__imp__sub_83687C10) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-32228
	ctx.r10.s64 = -2112094208;
	// lis r9,-31827
	ctx.r9.s64 = -2085814272;
	// addi r6,r10,-16872
	ctx.r6.s64 = ctx.r10.s64 + -16872;
	// lis r8,-32237
	ctx.r8.s64 = -2112684032;
	// lis r7,-31827
	ctx.r7.s64 = -2085814272;
	// stw r6,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r6.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r5,r9,-5872
	ctx.r5.s64 = ctx.r9.s64 + -5872;
	// addi r4,r8,-29028
	ctx.r4.s64 = ctx.r8.s64 + -29028;
	// stw r11,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r11.u32);
	// addi r3,r7,-5920
	ctx.r3.s64 = ctx.r7.s64 + -5920;
	// stw r11,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r11.u32);
	// li r31,7
	ctx.r31.s64 = 7;
	// stw r11,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r11.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r31,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r31.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,52
	ctx.r6.s64 = 52;
	// bl 0x82ef5ae8
	ctx.lr = 0x83687C78;
	sub_82EF5AE8(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83687C8C"))) PPC_WEAK_FUNC(sub_83687C8C);
PPC_FUNC_IMPL(__imp__sub_83687C8C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83687C90"))) PPC_WEAK_FUNC(sub_83687C90);
PPC_FUNC_IMPL(__imp__sub_83687C90) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-31842
	ctx.r10.s64 = -2086797312;
	// lis r9,-32237
	ctx.r9.s64 = -2112684032;
	// lis r8,-31827
	ctx.r8.s64 = -2085814272;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r5,r10,19184
	ctx.r5.s64 = ctx.r10.s64 + 19184;
	// addi r4,r9,-29372
	ctx.r4.s64 = ctx.r9.s64 + -29372;
	// stw r11,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r11.u32);
	// addi r3,r8,-5872
	ctx.r3.s64 = ctx.r8.s64 + -5872;
	// stw r11,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r11.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r11.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// stw r11,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r11.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// li r6,8
	ctx.r6.s64 = 8;
	// bl 0x82ef5ae8
	ctx.lr = 0x83687CE8;
	sub_82EF5AE8(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83687CF8"))) PPC_WEAK_FUNC(sub_83687CF8);
PPC_FUNC_IMPL(__imp__sub_83687CF8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-32228
	ctx.r10.s64 = -2112094208;
	// lis r9,-32237
	ctx.r9.s64 = -2112684032;
	// addi r7,r10,-16704
	ctx.r7.s64 = ctx.r10.s64 + -16704;
	// lis r8,-31827
	ctx.r8.s64 = -2085814272;
	// li r6,2
	ctx.r6.s64 = 2;
	// stw r7,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r7.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r4,r9,-29088
	ctx.r4.s64 = ctx.r9.s64 + -29088;
	// stw r6,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r6.u32);
	// addi r3,r8,-5824
	ctx.r3.s64 = ctx.r8.s64 + -5824;
	// stw r11,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r11.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r11.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r11,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r11.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,32
	ctx.r6.s64 = 32;
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x82ef5ae8
	ctx.lr = 0x83687D58;
	sub_82EF5AE8(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83687D68"))) PPC_WEAK_FUNC(sub_83687D68);
PPC_FUNC_IMPL(__imp__sub_83687D68) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-32228
	ctx.r10.s64 = -2112094208;
	// lis r9,-31842
	ctx.r9.s64 = -2086797312;
	// addi r6,r10,-16656
	ctx.r6.s64 = ctx.r10.s64 + -16656;
	// lis r8,-32237
	ctx.r8.s64 = -2112684032;
	// lis r7,-31827
	ctx.r7.s64 = -2085814272;
	// stw r6,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r6.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r5,r9,19184
	ctx.r5.s64 = ctx.r9.s64 + 19184;
	// addi r4,r8,-29068
	ctx.r4.s64 = ctx.r8.s64 + -29068;
	// stw r11,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r11.u32);
	// addi r3,r7,-5776
	ctx.r3.s64 = ctx.r7.s64 + -5776;
	// stw r11,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r11.u32);
	// li r31,3
	ctx.r31.s64 = 3;
	// stw r11,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r11.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r31,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r31.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,28
	ctx.r6.s64 = 28;
	// bl 0x82ef5ae8
	ctx.lr = 0x83687DD0;
	sub_82EF5AE8(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83687DE4"))) PPC_WEAK_FUNC(sub_83687DE4);
PPC_FUNC_IMPL(__imp__sub_83687DE4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83687DE8"))) PPC_WEAK_FUNC(sub_83687DE8);
PPC_FUNC_IMPL(__imp__sub_83687DE8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-32228
	ctx.r10.s64 = -2112094208;
	// lis r9,-31842
	ctx.r9.s64 = -2086797312;
	// addi r6,r10,-16584
	ctx.r6.s64 = ctx.r10.s64 + -16584;
	// lis r8,-32237
	ctx.r8.s64 = -2112684032;
	// lis r7,-31827
	ctx.r7.s64 = -2085814272;
	// stw r6,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r6.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r5,r9,19184
	ctx.r5.s64 = ctx.r9.s64 + 19184;
	// addi r4,r8,-29048
	ctx.r4.s64 = ctx.r8.s64 + -29048;
	// stw r11,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r11.u32);
	// addi r3,r7,-5728
	ctx.r3.s64 = ctx.r7.s64 + -5728;
	// stw r11,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r11.u32);
	// li r31,3
	ctx.r31.s64 = 3;
	// stw r11,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r11.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r31,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r31.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,28
	ctx.r6.s64 = 28;
	// bl 0x82ef5ae8
	ctx.lr = 0x83687E50;
	sub_82EF5AE8(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83687E64"))) PPC_WEAK_FUNC(sub_83687E64);
PPC_FUNC_IMPL(__imp__sub_83687E64) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83687E68"))) PPC_WEAK_FUNC(sub_83687E68);
PPC_FUNC_IMPL(__imp__sub_83687E68) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-32228
	ctx.r10.s64 = -2112094208;
	// lis r9,-31827
	ctx.r9.s64 = -2085814272;
	// addi r6,r10,-16512
	ctx.r6.s64 = ctx.r10.s64 + -16512;
	// lis r8,-32237
	ctx.r8.s64 = -2112684032;
	// lis r7,-31827
	ctx.r7.s64 = -2085814272;
	// stw r6,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r6.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r5,r9,-5632
	ctx.r5.s64 = ctx.r9.s64 + -5632;
	// addi r4,r8,-29456
	ctx.r4.s64 = ctx.r8.s64 + -29456;
	// stw r11,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r11.u32);
	// addi r3,r7,-5680
	ctx.r3.s64 = ctx.r7.s64 + -5680;
	// stw r11,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r11.u32);
	// li r31,3
	ctx.r31.s64 = 3;
	// stw r11,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r11.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r31,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r31.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,20
	ctx.r6.s64 = 20;
	// bl 0x82ef5ae8
	ctx.lr = 0x83687ED0;
	sub_82EF5AE8(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83687EE4"))) PPC_WEAK_FUNC(sub_83687EE4);
PPC_FUNC_IMPL(__imp__sub_83687EE4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83687EE8"))) PPC_WEAK_FUNC(sub_83687EE8);
PPC_FUNC_IMPL(__imp__sub_83687EE8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-31842
	ctx.r10.s64 = -2086797312;
	// lis r9,-32237
	ctx.r9.s64 = -2112684032;
	// lis r8,-31827
	ctx.r8.s64 = -2085814272;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r5,r10,19184
	ctx.r5.s64 = ctx.r10.s64 + 19184;
	// addi r4,r9,-29188
	ctx.r4.s64 = ctx.r9.s64 + -29188;
	// stw r11,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r11.u32);
	// addi r3,r8,-5632
	ctx.r3.s64 = ctx.r8.s64 + -5632;
	// stw r11,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r11.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r11.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// stw r11,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r11.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// li r6,8
	ctx.r6.s64 = 8;
	// bl 0x82ef5ae8
	ctx.lr = 0x83687F40;
	sub_82EF5AE8(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83687F50"))) PPC_WEAK_FUNC(sub_83687F50);
PPC_FUNC_IMPL(__imp__sub_83687F50) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-32228
	ctx.r10.s64 = -2112094208;
	// lis r9,-32237
	ctx.r9.s64 = -2112684032;
	// addi r7,r10,-16440
	ctx.r7.s64 = ctx.r10.s64 + -16440;
	// lis r8,-31827
	ctx.r8.s64 = -2085814272;
	// li r6,4
	ctx.r6.s64 = 4;
	// stw r7,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r7.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r4,r9,-28880
	ctx.r4.s64 = ctx.r9.s64 + -28880;
	// stw r6,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r6.u32);
	// addi r3,r8,-5584
	ctx.r3.s64 = ctx.r8.s64 + -5584;
	// stw r11,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r11.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r11.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r11,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r11.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,96
	ctx.r6.s64 = 96;
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x82ef5ae8
	ctx.lr = 0x83687FB0;
	sub_82EF5AE8(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83687FC0"))) PPC_WEAK_FUNC(sub_83687FC0);
PPC_FUNC_IMPL(__imp__sub_83687FC0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-32228
	ctx.r10.s64 = -2112094208;
	// lis r9,-31827
	ctx.r9.s64 = -2085814272;
	// addi r6,r10,-16344
	ctx.r6.s64 = ctx.r10.s64 + -16344;
	// lis r8,-32237
	ctx.r8.s64 = -2112684032;
	// lis r7,-31827
	ctx.r7.s64 = -2085814272;
	// stw r6,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r6.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r5,r9,-5392
	ctx.r5.s64 = ctx.r9.s64 + -5392;
	// addi r4,r8,-28836
	ctx.r4.s64 = ctx.r8.s64 + -28836;
	// stw r11,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r11.u32);
	// addi r3,r7,-5536
	ctx.r3.s64 = ctx.r7.s64 + -5536;
	// stw r11,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r11.u32);
	// li r31,5
	ctx.r31.s64 = 5;
	// stw r11,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r11.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r31,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r31.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,52
	ctx.r6.s64 = 52;
	// bl 0x82ef5ae8
	ctx.lr = 0x83688028;
	sub_82EF5AE8(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8368803C"))) PPC_WEAK_FUNC(sub_8368803C);
PPC_FUNC_IMPL(__imp__sub_8368803C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83688040"))) PPC_WEAK_FUNC(sub_83688040);
PPC_FUNC_IMPL(__imp__sub_83688040) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-32228
	ctx.r10.s64 = -2112094208;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r6,r10,-16224
	ctx.r6.s64 = ctx.r10.s64 + -16224;
	// lis r9,-31827
	ctx.r9.s64 = -2085814272;
	// stw r4,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r4.u32);
	// lis r8,-32237
	ctx.r8.s64 = -2112684032;
	// stw r6,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r6.u32);
	// lis r7,-31827
	ctx.r7.s64 = -2085814272;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r5,r9,-5392
	ctx.r5.s64 = ctx.r9.s64 + -5392;
	// addi r4,r8,-28912
	ctx.r4.s64 = ctx.r8.s64 + -28912;
	// stw r11,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r11.u32);
	// addi r3,r7,-5488
	ctx.r3.s64 = ctx.r7.s64 + -5488;
	// stw r11,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r11.u32);
	// li r31,3
	ctx.r31.s64 = 3;
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r31,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r31.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,36
	ctx.r6.s64 = 36;
	// bl 0x82ef5ae8
	ctx.lr = 0x836880AC;
	sub_82EF5AE8(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_836880C0"))) PPC_WEAK_FUNC(sub_836880C0);
PPC_FUNC_IMPL(__imp__sub_836880C0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r9,-32228
	ctx.r9.s64 = -2112094208;
	// li r10,1
	ctx.r10.s64 = 1;
	// addi r3,r9,-16152
	ctx.r3.s64 = ctx.r9.s64 + -16152;
	// lis r8,-31842
	ctx.r8.s64 = -2086797312;
	// stw r10,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r10.u32);
	// lis r7,-32237
	ctx.r7.s64 = -2112684032;
	// stw r3,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r3.u32);
	// lis r6,-31827
	ctx.r6.s64 = -2085814272;
	// stw r10,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r10.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r5,r8,19184
	ctx.r5.s64 = ctx.r8.s64 + 19184;
	// addi r4,r7,-28500
	ctx.r4.s64 = ctx.r7.s64 + -28500;
	// stw r11,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r11.u32);
	// addi r3,r6,-5440
	ctx.r3.s64 = ctx.r6.s64 + -5440;
	// stw r11,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r11.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,1
	ctx.r8.s64 = 1;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,16
	ctx.r6.s64 = 16;
	// bl 0x82ef5ae8
	ctx.lr = 0x83688124;
	sub_82EF5AE8(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83688134"))) PPC_WEAK_FUNC(sub_83688134);
PPC_FUNC_IMPL(__imp__sub_83688134) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83688138"))) PPC_WEAK_FUNC(sub_83688138);
PPC_FUNC_IMPL(__imp__sub_83688138) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32228
	ctx.r11.s64 = -2112094208;
	// lis r10,-31842
	ctx.r10.s64 = -2086797312;
	// addi r9,r11,-16064
	ctx.r9.s64 = ctx.r11.s64 + -16064;
	// lis r8,-32237
	ctx.r8.s64 = -2112684032;
	// addi r6,r9,20
	ctx.r6.s64 = ctx.r9.s64 + 20;
	// lis r7,-31827
	ctx.r7.s64 = -2085814272;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r6,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r6.u32);
	// addi r5,r10,19184
	ctx.r5.s64 = ctx.r10.s64 + 19184;
	// addi r4,r8,-29348
	ctx.r4.s64 = ctx.r8.s64 + -29348;
	// stw r11,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r11.u32);
	// addi r3,r7,-5392
	ctx.r3.s64 = ctx.r7.s64 + -5392;
	// stw r11,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r11.u32);
	// li r31,2
	ctx.r31.s64 = 2;
	// stw r11,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r11.u32);
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// stw r31,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r31.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,12
	ctx.r6.s64 = 12;
	// bl 0x82ef5ae8
	ctx.lr = 0x836881A0;
	sub_82EF5AE8(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_836881B4"))) PPC_WEAK_FUNC(sub_836881B4);
PPC_FUNC_IMPL(__imp__sub_836881B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_836881B8"))) PPC_WEAK_FUNC(sub_836881B8);
PPC_FUNC_IMPL(__imp__sub_836881B8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-32228
	ctx.r10.s64 = -2112094208;
	// lis r9,-32237
	ctx.r9.s64 = -2112684032;
	// addi r7,r10,-15992
	ctx.r7.s64 = ctx.r10.s64 + -15992;
	// lis r8,-31827
	ctx.r8.s64 = -2085814272;
	// li r6,10
	ctx.r6.s64 = 10;
	// stw r7,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r7.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r4,r9,-29424
	ctx.r4.s64 = ctx.r9.s64 + -29424;
	// stw r6,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r6.u32);
	// addi r3,r8,-5344
	ctx.r3.s64 = ctx.r8.s64 + -5344;
	// stw r11,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r11.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r11.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r11,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r11.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,40
	ctx.r6.s64 = 40;
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x82ef5ae8
	ctx.lr = 0x83688218;
	sub_82EF5AE8(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83688228"))) PPC_WEAK_FUNC(sub_83688228);
PPC_FUNC_IMPL(__imp__sub_83688228) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32228
	ctx.r11.s64 = -2112094208;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r11,r11,-15752
	ctx.r11.s64 = ctx.r11.s64 + -15752;
	// li r3,19
	ctx.r3.s64 = 19;
	// stw r4,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r4.u32);
	// addi r6,r11,456
	ctx.r6.s64 = ctx.r11.s64 + 456;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// lis r9,-31842
	ctx.r9.s64 = -2086797312;
	// stw r3,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r3.u32);
	// lis r8,-32237
	ctx.r8.s64 = -2112684032;
	// stw r6,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r6.u32);
	// lis r7,-31827
	ctx.r7.s64 = -2085814272;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r5,r9,19184
	ctx.r5.s64 = ctx.r9.s64 + 19184;
	// addi r4,r8,-29388
	ctx.r4.s64 = ctx.r8.s64 + -29388;
	// stw r10,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r10.u32);
	// addi r3,r7,-5296
	ctx.r3.s64 = ctx.r7.s64 + -5296;
	// stw r10,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r10.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,416
	ctx.r6.s64 = 416;
	// bl 0x82ef5ae8
	ctx.lr = 0x83688290;
	sub_82EF5AE8(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_836882A0"))) PPC_WEAK_FUNC(sub_836882A0);
PPC_FUNC_IMPL(__imp__sub_836882A0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-32228
	ctx.r10.s64 = -2112094208;
	// lis r9,-32237
	ctx.r9.s64 = -2112684032;
	// addi r7,r10,-15216
	ctx.r7.s64 = ctx.r10.s64 + -15216;
	// lis r8,-31827
	ctx.r8.s64 = -2085814272;
	// li r6,1
	ctx.r6.s64 = 1;
	// stw r7,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r7.u32);
	// li r5,17
	ctx.r5.s64 = 17;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r6,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r6.u32);
	// addi r4,r9,-28996
	ctx.r4.s64 = ctx.r9.s64 + -28996;
	// stw r5,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r5.u32);
	// addi r3,r8,-5248
	ctx.r3.s64 = ctx.r8.s64 + -5248;
	// stw r11,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r11.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r11.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,224
	ctx.r6.s64 = 224;
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x82ef5ae8
	ctx.lr = 0x83688304;
	sub_82EF5AE8(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83688314"))) PPC_WEAK_FUNC(sub_83688314);
PPC_FUNC_IMPL(__imp__sub_83688314) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83688318"))) PPC_WEAK_FUNC(sub_83688318);
PPC_FUNC_IMPL(__imp__sub_83688318) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-32228
	ctx.r10.s64 = -2112094208;
	// lis r9,-31827
	ctx.r9.s64 = -2085814272;
	// addi r6,r10,-14808
	ctx.r6.s64 = ctx.r10.s64 + -14808;
	// lis r8,-32237
	ctx.r8.s64 = -2112684032;
	// lis r7,-31827
	ctx.r7.s64 = -2085814272;
	// stw r6,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r6.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r5,r9,-27976
	ctx.r5.s64 = ctx.r9.s64 + -27976;
	// addi r4,r8,-28968
	ctx.r4.s64 = ctx.r8.s64 + -28968;
	// stw r11,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r11.u32);
	// addi r3,r7,-5200
	ctx.r3.s64 = ctx.r7.s64 + -5200;
	// stw r11,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r11.u32);
	// li r31,25
	ctx.r31.s64 = 25;
	// stw r11,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r11.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r31,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r31.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,212
	ctx.r6.s64 = 212;
	// bl 0x82ef5ae8
	ctx.lr = 0x83688380;
	sub_82EF5AE8(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83688394"))) PPC_WEAK_FUNC(sub_83688394);
PPC_FUNC_IMPL(__imp__sub_83688394) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83688398"))) PPC_WEAK_FUNC(sub_83688398);
PPC_FUNC_IMPL(__imp__sub_83688398) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-320(r1)
	ea = -320 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r10,r11,-12440
	ctx.r10.s64 = ctx.r11.s64 + -12440;
	// addi r3,r1,100
	ctx.r3.s64 = ctx.r1.s64 + 100;
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// bl 0x82eeece8
	ctx.lr = 0x836883BC;
	sub_82EEECE8(ctx, base);
	// lis r8,-31827
	ctx.r8.s64 = -2085814272;
	// lis r11,-32237
	ctx.r11.s64 = -2112684032;
	// addi r6,r8,-5152
	ctx.r6.s64 = ctx.r8.s64 + -5152;
	// addi r11,r11,-28968
	ctx.r11.s64 = ctx.r11.s64 + -28968;
	// lis r10,-32228
	ctx.r10.s64 = -2112094208;
	// lis r9,-32228
	ctx.r9.s64 = -2112094208;
	// stw r11,-5152(r8)
	PPC_STORE_U32(ctx.r8.u32 + -5152, ctx.r11.u32);
	// addi r10,r10,-12440
	ctx.r10.s64 = ctx.r10.s64 + -12440;
	// addi r9,r9,-13748
	ctx.r9.s64 = ctx.r9.s64 + -13748;
	// lis r8,-31987
	ctx.r8.s64 = -2096300032;
	// stw r10,4(r6)
	PPC_STORE_U32(ctx.r6.u32 + 4, ctx.r10.u32);
	// lis r7,-31987
	ctx.r7.s64 = -2096300032;
	// stw r9,16(r6)
	PPC_STORE_U32(ctx.r6.u32 + 16, ctx.r9.u32);
	// addi r11,r8,-31128
	ctx.r11.s64 = ctx.r8.s64 + -31128;
	// addi r10,r7,-31968
	ctx.r10.s64 = ctx.r7.s64 + -31968;
	// li r9,212
	ctx.r9.s64 = 212;
	// stw r11,8(r6)
	PPC_STORE_U32(ctx.r6.u32 + 8, ctx.r11.u32);
	// stw r10,12(r6)
	PPC_STORE_U32(ctx.r6.u32 + 12, ctx.r10.u32);
	// stw r9,20(r6)
	PPC_STORE_U32(ctx.r6.u32 + 20, ctx.r9.u32);
	// addi r1,r1,320
	ctx.r1.s64 = ctx.r1.s64 + 320;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83688418"))) PPC_WEAK_FUNC(sub_83688418);
PPC_FUNC_IMPL(__imp__sub_83688418) {
	PPC_FUNC_PROLOGUE();
	// lis r9,-31842
	ctx.r9.s64 = -2086797312;
	// lis r8,-31848
	ctx.r8.s64 = -2087190528;
	// addi r7,r8,22752
	ctx.r7.s64 = ctx.r8.s64 + 22752;
	// lwz r11,21104(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 21104);
	// mr r10,r7
	ctx.r10.u64 = ctx.r7.u64;
	// stw r7,21104(r9)
	PPC_STORE_U32(ctx.r9.u32 + 21104, ctx.r7.u32);
	// stw r11,8(r7)
	PPC_STORE_U32(ctx.r7.u32 + 8, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83688438"))) PPC_WEAK_FUNC(sub_83688438);
PPC_FUNC_IMPL(__imp__sub_83688438) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31895
	ctx.r11.s64 = -2090270720;
	// addi r3,r11,-3792
	ctx.r3.s64 = ctx.r11.s64 + -3792;
	// b 0x833a1ff8
	sub_833A1FF8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83688444"))) PPC_WEAK_FUNC(sub_83688444);
PPC_FUNC_IMPL(__imp__sub_83688444) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83688448"))) PPC_WEAK_FUNC(sub_83688448);
PPC_FUNC_IMPL(__imp__sub_83688448) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31827
	ctx.r11.s64 = -2085814272;
	// addi r3,r11,-5068
	ctx.r3.s64 = ctx.r11.s64 + -5068;
	// b 0x830ff6a8
	sub_830FF6A8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83688454"))) PPC_WEAK_FUNC(sub_83688454);
PPC_FUNC_IMPL(__imp__sub_83688454) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83688458"))) PPC_WEAK_FUNC(sub_83688458);
PPC_FUNC_IMPL(__imp__sub_83688458) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31827
	ctx.r11.s64 = -2085814272;
	// addi r3,r11,-5056
	ctx.r3.s64 = ctx.r11.s64 + -5056;
	// b 0x830ff6a8
	sub_830FF6A8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83688464"))) PPC_WEAK_FUNC(sub_83688464);
PPC_FUNC_IMPL(__imp__sub_83688464) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83688468"))) PPC_WEAK_FUNC(sub_83688468);
PPC_FUNC_IMPL(__imp__sub_83688468) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31827
	ctx.r11.s64 = -2085814272;
	// addi r3,r11,-5032
	ctx.r3.s64 = ctx.r11.s64 + -5032;
	// b 0x830ff6a8
	sub_830FF6A8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83688474"))) PPC_WEAK_FUNC(sub_83688474);
PPC_FUNC_IMPL(__imp__sub_83688474) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83688478"))) PPC_WEAK_FUNC(sub_83688478);
PPC_FUNC_IMPL(__imp__sub_83688478) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31827
	ctx.r11.s64 = -2085814272;
	// addi r3,r11,-5020
	ctx.r3.s64 = ctx.r11.s64 + -5020;
	// b 0x830ff6a8
	sub_830FF6A8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83688484"))) PPC_WEAK_FUNC(sub_83688484);
PPC_FUNC_IMPL(__imp__sub_83688484) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83688488"))) PPC_WEAK_FUNC(sub_83688488);
PPC_FUNC_IMPL(__imp__sub_83688488) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31827
	ctx.r11.s64 = -2085814272;
	// addi r3,r11,-4996
	ctx.r3.s64 = ctx.r11.s64 + -4996;
	// b 0x830ff6a8
	sub_830FF6A8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83688494"))) PPC_WEAK_FUNC(sub_83688494);
PPC_FUNC_IMPL(__imp__sub_83688494) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83688498"))) PPC_WEAK_FUNC(sub_83688498);
PPC_FUNC_IMPL(__imp__sub_83688498) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31827
	ctx.r11.s64 = -2085814272;
	// addi r3,r11,-4900
	ctx.r3.s64 = ctx.r11.s64 + -4900;
	// b 0x830ff6a8
	sub_830FF6A8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_836884A4"))) PPC_WEAK_FUNC(sub_836884A4);
PPC_FUNC_IMPL(__imp__sub_836884A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_836884A8"))) PPC_WEAK_FUNC(sub_836884A8);
PPC_FUNC_IMPL(__imp__sub_836884A8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31827
	ctx.r11.s64 = -2085814272;
	// addi r3,r11,-4912
	ctx.r3.s64 = ctx.r11.s64 + -4912;
	// b 0x830ff6a8
	sub_830FF6A8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_836884B4"))) PPC_WEAK_FUNC(sub_836884B4);
PPC_FUNC_IMPL(__imp__sub_836884B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_836884B8"))) PPC_WEAK_FUNC(sub_836884B8);
PPC_FUNC_IMPL(__imp__sub_836884B8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31895
	ctx.r11.s64 = -2090270720;
	// addi r3,r11,-3328
	ctx.r3.s64 = ctx.r11.s64 + -3328;
	// b 0x833a1ff8
	sub_833A1FF8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_836884C4"))) PPC_WEAK_FUNC(sub_836884C4);
PPC_FUNC_IMPL(__imp__sub_836884C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_836884C8"))) PPC_WEAK_FUNC(sub_836884C8);
PPC_FUNC_IMPL(__imp__sub_836884C8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31895
	ctx.r11.s64 = -2090270720;
	// addi r3,r11,-3768
	ctx.r3.s64 = ctx.r11.s64 + -3768;
	// b 0x833a1ff8
	sub_833A1FF8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_836884D4"))) PPC_WEAK_FUNC(sub_836884D4);
PPC_FUNC_IMPL(__imp__sub_836884D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_836884D8"))) PPC_WEAK_FUNC(sub_836884D8);
PPC_FUNC_IMPL(__imp__sub_836884D8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31895
	ctx.r11.s64 = -2090270720;
	// addi r3,r11,-3728
	ctx.r3.s64 = ctx.r11.s64 + -3728;
	// b 0x833a1ff8
	sub_833A1FF8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_836884E4"))) PPC_WEAK_FUNC(sub_836884E4);
PPC_FUNC_IMPL(__imp__sub_836884E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_836884E8"))) PPC_WEAK_FUNC(sub_836884E8);
PPC_FUNC_IMPL(__imp__sub_836884E8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31895
	ctx.r11.s64 = -2090270720;
	// addi r3,r11,-3688
	ctx.r3.s64 = ctx.r11.s64 + -3688;
	// b 0x833a1ff8
	sub_833A1FF8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_836884F4"))) PPC_WEAK_FUNC(sub_836884F4);
PPC_FUNC_IMPL(__imp__sub_836884F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_836884F8"))) PPC_WEAK_FUNC(sub_836884F8);
PPC_FUNC_IMPL(__imp__sub_836884F8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31895
	ctx.r11.s64 = -2090270720;
	// addi r3,r11,-3648
	ctx.r3.s64 = ctx.r11.s64 + -3648;
	// b 0x833a1ff8
	sub_833A1FF8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83688504"))) PPC_WEAK_FUNC(sub_83688504);
PPC_FUNC_IMPL(__imp__sub_83688504) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83688508"))) PPC_WEAK_FUNC(sub_83688508);
PPC_FUNC_IMPL(__imp__sub_83688508) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31895
	ctx.r11.s64 = -2090270720;
	// addi r3,r11,-3608
	ctx.r3.s64 = ctx.r11.s64 + -3608;
	// b 0x833a1ff8
	sub_833A1FF8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83688514"))) PPC_WEAK_FUNC(sub_83688514);
PPC_FUNC_IMPL(__imp__sub_83688514) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83688518"))) PPC_WEAK_FUNC(sub_83688518);
PPC_FUNC_IMPL(__imp__sub_83688518) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31895
	ctx.r11.s64 = -2090270720;
	// addi r3,r11,-3568
	ctx.r3.s64 = ctx.r11.s64 + -3568;
	// b 0x833a1ff8
	sub_833A1FF8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83688524"))) PPC_WEAK_FUNC(sub_83688524);
PPC_FUNC_IMPL(__imp__sub_83688524) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83688528"))) PPC_WEAK_FUNC(sub_83688528);
PPC_FUNC_IMPL(__imp__sub_83688528) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31895
	ctx.r11.s64 = -2090270720;
	// addi r3,r11,-3528
	ctx.r3.s64 = ctx.r11.s64 + -3528;
	// b 0x833a1ff8
	sub_833A1FF8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83688534"))) PPC_WEAK_FUNC(sub_83688534);
PPC_FUNC_IMPL(__imp__sub_83688534) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83688538"))) PPC_WEAK_FUNC(sub_83688538);
PPC_FUNC_IMPL(__imp__sub_83688538) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31895
	ctx.r11.s64 = -2090270720;
	// addi r3,r11,-3488
	ctx.r3.s64 = ctx.r11.s64 + -3488;
	// b 0x833a1ff8
	sub_833A1FF8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83688544"))) PPC_WEAK_FUNC(sub_83688544);
PPC_FUNC_IMPL(__imp__sub_83688544) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83688548"))) PPC_WEAK_FUNC(sub_83688548);
PPC_FUNC_IMPL(__imp__sub_83688548) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31895
	ctx.r11.s64 = -2090270720;
	// addi r3,r11,-3448
	ctx.r3.s64 = ctx.r11.s64 + -3448;
	// b 0x833a1ff8
	sub_833A1FF8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83688554"))) PPC_WEAK_FUNC(sub_83688554);
PPC_FUNC_IMPL(__imp__sub_83688554) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83688558"))) PPC_WEAK_FUNC(sub_83688558);
PPC_FUNC_IMPL(__imp__sub_83688558) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31895
	ctx.r11.s64 = -2090270720;
	// addi r3,r11,-3408
	ctx.r3.s64 = ctx.r11.s64 + -3408;
	// b 0x833a1ff8
	sub_833A1FF8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83688564"))) PPC_WEAK_FUNC(sub_83688564);
PPC_FUNC_IMPL(__imp__sub_83688564) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83688568"))) PPC_WEAK_FUNC(sub_83688568);
PPC_FUNC_IMPL(__imp__sub_83688568) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31895
	ctx.r11.s64 = -2090270720;
	// addi r3,r11,-3368
	ctx.r3.s64 = ctx.r11.s64 + -3368;
	// b 0x833a1ff8
	sub_833A1FF8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83688574"))) PPC_WEAK_FUNC(sub_83688574);
PPC_FUNC_IMPL(__imp__sub_83688574) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83688578"))) PPC_WEAK_FUNC(sub_83688578);
PPC_FUNC_IMPL(__imp__sub_83688578) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31827
	ctx.r11.s64 = -2085814272;
	// addi r3,r11,-4864
	ctx.r3.s64 = ctx.r11.s64 + -4864;
	// b 0x830ff6a8
	sub_830FF6A8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83688584"))) PPC_WEAK_FUNC(sub_83688584);
PPC_FUNC_IMPL(__imp__sub_83688584) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83688588"))) PPC_WEAK_FUNC(sub_83688588);
PPC_FUNC_IMPL(__imp__sub_83688588) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31827
	ctx.r11.s64 = -2085814272;
	// addi r3,r11,-4852
	ctx.r3.s64 = ctx.r11.s64 + -4852;
	// b 0x830ff6a8
	sub_830FF6A8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83688594"))) PPC_WEAK_FUNC(sub_83688594);
PPC_FUNC_IMPL(__imp__sub_83688594) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83688598"))) PPC_WEAK_FUNC(sub_83688598);
PPC_FUNC_IMPL(__imp__sub_83688598) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31827
	ctx.r11.s64 = -2085814272;
	// addi r3,r11,-4876
	ctx.r3.s64 = ctx.r11.s64 + -4876;
	// b 0x830ff6a8
	sub_830FF6A8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_836885A4"))) PPC_WEAK_FUNC(sub_836885A4);
PPC_FUNC_IMPL(__imp__sub_836885A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_836885A8"))) PPC_WEAK_FUNC(sub_836885A8);
PPC_FUNC_IMPL(__imp__sub_836885A8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31827
	ctx.r11.s64 = -2085814272;
	// addi r3,r11,-4836
	ctx.r3.s64 = ctx.r11.s64 + -4836;
	// b 0x830ff6a8
	sub_830FF6A8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_836885B4"))) PPC_WEAK_FUNC(sub_836885B4);
PPC_FUNC_IMPL(__imp__sub_836885B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_836885B8"))) PPC_WEAK_FUNC(sub_836885B8);
PPC_FUNC_IMPL(__imp__sub_836885B8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31827
	ctx.r11.s64 = -2085814272;
	// addi r3,r11,-4792
	ctx.r3.s64 = ctx.r11.s64 + -4792;
	// b 0x830ff6a8
	sub_830FF6A8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_836885C4"))) PPC_WEAK_FUNC(sub_836885C4);
PPC_FUNC_IMPL(__imp__sub_836885C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_836885C8"))) PPC_WEAK_FUNC(sub_836885C8);
PPC_FUNC_IMPL(__imp__sub_836885C8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31827
	ctx.r11.s64 = -2085814272;
	// addi r3,r11,-4804
	ctx.r3.s64 = ctx.r11.s64 + -4804;
	// b 0x830ff6a8
	sub_830FF6A8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_836885D4"))) PPC_WEAK_FUNC(sub_836885D4);
PPC_FUNC_IMPL(__imp__sub_836885D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_836885D8"))) PPC_WEAK_FUNC(sub_836885D8);
PPC_FUNC_IMPL(__imp__sub_836885D8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31827
	ctx.r11.s64 = -2085814272;
	// addi r3,r11,-4756
	ctx.r3.s64 = ctx.r11.s64 + -4756;
	// b 0x830ff6a8
	sub_830FF6A8(ctx, base);
	return;
}

