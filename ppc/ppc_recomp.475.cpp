#include "ppc_recomp_shared.h"

__attribute__((alias("__imp__sub_8344A8F4"))) PPC_WEAK_FUNC(sub_8344A8F4);
PPC_FUNC_IMPL(__imp__sub_8344A8F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8344A8F8"))) PPC_WEAK_FUNC(sub_8344A8F8);
PPC_FUNC_IMPL(__imp__sub_8344A8F8) {
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
	// lis r9,-31877
	ctx.r9.s64 = -2089091072;
	// li r10,1
	ctx.r10.s64 = 1;
	// addi r5,r9,-12360
	ctx.r5.s64 = ctx.r9.s64 + -12360;
	// lis r8,-32238
	ctx.r8.s64 = -2112749568;
	// stw r10,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r10.u32);
	// lis r7,-32239
	ctx.r7.s64 = -2112815104;
	// stw r10,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r10.u32);
	// lis r6,-31841
	ctx.r6.s64 = -2086731776;
	// stw r5,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r5.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r9,r8,6128
	ctx.r9.s64 = ctx.r8.s64 + 6128;
	// addi r4,r7,-17664
	ctx.r4.s64 = ctx.r7.s64 + -17664;
	// stw r11,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r11.u32);
	// addi r3,r6,-13900
	ctx.r3.s64 = ctx.r6.s64 + -13900;
	// stw r11,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r11.u32);
	// li r10,2
	ctx.r10.s64 = 2;
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x82ef5ae8
	ctx.lr = 0x8344A95C;
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

__attribute__((alias("__imp__sub_8344A96C"))) PPC_WEAK_FUNC(sub_8344A96C);
PPC_FUNC_IMPL(__imp__sub_8344A96C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8344A970"))) PPC_WEAK_FUNC(sub_8344A970);
PPC_FUNC_IMPL(__imp__sub_8344A970) {
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
	// lis r10,-31877
	ctx.r10.s64 = -2089091072;
	// lis r9,-32239
	ctx.r9.s64 = -2112815104;
	// addi r7,r10,-12336
	ctx.r7.s64 = ctx.r10.s64 + -12336;
	// lis r8,-31841
	ctx.r8.s64 = -2086731776;
	// li r6,2
	ctx.r6.s64 = 2;
	// stw r7,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r7.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r4,r9,-17684
	ctx.r4.s64 = ctx.r9.s64 + -17684;
	// stw r6,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r6.u32);
	// addi r3,r8,-13852
	ctx.r3.s64 = ctx.r8.s64 + -13852;
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
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x82ef5ae8
	ctx.lr = 0x8344A9D0;
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

__attribute__((alias("__imp__sub_8344A9E0"))) PPC_WEAK_FUNC(sub_8344A9E0);
PPC_FUNC_IMPL(__imp__sub_8344A9E0) {
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
	// lis r10,-31877
	ctx.r10.s64 = -2089091072;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r6,r10,-12288
	ctx.r6.s64 = ctx.r10.s64 + -12288;
	// lis r9,-31841
	ctx.r9.s64 = -2086731776;
	// stw r4,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r4.u32);
	// lis r8,-32239
	ctx.r8.s64 = -2112815104;
	// stw r6,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r6.u32);
	// lis r7,-31841
	ctx.r7.s64 = -2086731776;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r5,r9,-18748
	ctx.r5.s64 = ctx.r9.s64 + -18748;
	// addi r4,r8,-18736
	ctx.r4.s64 = ctx.r8.s64 + -18736;
	// stw r11,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r11.u32);
	// addi r3,r7,-13804
	ctx.r3.s64 = ctx.r7.s64 + -13804;
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
	// li r6,0
	ctx.r6.s64 = 0;
	// bl 0x82ef5ae8
	ctx.lr = 0x8344AA4C;
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

__attribute__((alias("__imp__sub_8344AA60"))) PPC_WEAK_FUNC(sub_8344AA60);
PPC_FUNC_IMPL(__imp__sub_8344AA60) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31877
	ctx.r11.s64 = -2089091072;
	// lis r10,-31876
	ctx.r10.s64 = -2089025536;
	// addi r9,r10,-31768
	ctx.r9.s64 = ctx.r10.s64 + -31768;
	// lwz r11,-13272(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -13272);
	// stw r11,32(r9)
	PPC_STORE_U32(ctx.r9.u32 + 32, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8344AA78"))) PPC_WEAK_FUNC(sub_8344AA78);
PPC_FUNC_IMPL(__imp__sub_8344AA78) {
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
	// lis r10,-31876
	ctx.r10.s64 = -2089025536;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r6,r10,-31768
	ctx.r6.s64 = ctx.r10.s64 + -31768;
	// lis r9,-31841
	ctx.r9.s64 = -2086731776;
	// stw r4,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r4.u32);
	// lis r8,-32239
	ctx.r8.s64 = -2112815104;
	// stw r6,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r6.u32);
	// lis r7,-31841
	ctx.r7.s64 = -2086731776;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r5,r9,-18748
	ctx.r5.s64 = ctx.r9.s64 + -18748;
	// addi r4,r8,-17984
	ctx.r4.s64 = ctx.r8.s64 + -17984;
	// stw r11,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r11.u32);
	// addi r3,r7,-13756
	ctx.r3.s64 = ctx.r7.s64 + -13756;
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
	// li r6,0
	ctx.r6.s64 = 0;
	// bl 0x82ef5ae8
	ctx.lr = 0x8344AAE4;
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

__attribute__((alias("__imp__sub_8344AAF8"))) PPC_WEAK_FUNC(sub_8344AAF8);
PPC_FUNC_IMPL(__imp__sub_8344AAF8) {
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
	// lis r10,-31877
	ctx.r10.s64 = -2089091072;
	// lis r9,-31841
	ctx.r9.s64 = -2086731776;
	// addi r6,r10,-12240
	ctx.r6.s64 = ctx.r10.s64 + -12240;
	// lis r8,-32239
	ctx.r8.s64 = -2112815104;
	// lis r7,-31841
	ctx.r7.s64 = -2086731776;
	// stw r6,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r6.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r5,r9,-15052
	ctx.r5.s64 = ctx.r9.s64 + -15052;
	// addi r4,r8,-18472
	ctx.r4.s64 = ctx.r8.s64 + -18472;
	// stw r11,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r11.u32);
	// addi r3,r7,-13708
	ctx.r3.s64 = ctx.r7.s64 + -13708;
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
	// li r6,0
	ctx.r6.s64 = 0;
	// bl 0x82ef5ae8
	ctx.lr = 0x8344AB60;
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

__attribute__((alias("__imp__sub_8344AB74"))) PPC_WEAK_FUNC(sub_8344AB74);
PPC_FUNC_IMPL(__imp__sub_8344AB74) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8344AB78"))) PPC_WEAK_FUNC(sub_8344AB78);
PPC_FUNC_IMPL(__imp__sub_8344AB78) {
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
	// lis r9,-31877
	ctx.r9.s64 = -2089091072;
	// li r10,1
	ctx.r10.s64 = 1;
	// addi r3,r9,-12192
	ctx.r3.s64 = ctx.r9.s64 + -12192;
	// lis r8,-31841
	ctx.r8.s64 = -2086731776;
	// stw r10,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r10.u32);
	// lis r7,-32239
	ctx.r7.s64 = -2112815104;
	// stw r3,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r3.u32);
	// lis r6,-31841
	ctx.r6.s64 = -2086731776;
	// stw r10,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r10.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r5,r8,-18748
	ctx.r5.s64 = ctx.r8.s64 + -18748;
	// addi r4,r7,-24368
	ctx.r4.s64 = ctx.r7.s64 + -24368;
	// stw r11,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r11.u32);
	// addi r3,r6,-13660
	ctx.r3.s64 = ctx.r6.s64 + -13660;
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
	// li r6,0
	ctx.r6.s64 = 0;
	// bl 0x82ef5ae8
	ctx.lr = 0x8344ABDC;
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

__attribute__((alias("__imp__sub_8344ABEC"))) PPC_WEAK_FUNC(sub_8344ABEC);
PPC_FUNC_IMPL(__imp__sub_8344ABEC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8344ABF0"))) PPC_WEAK_FUNC(sub_8344ABF0);
PPC_FUNC_IMPL(__imp__sub_8344ABF0) {
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
	// lis r9,-31877
	ctx.r9.s64 = -2089091072;
	// li r10,1
	ctx.r10.s64 = 1;
	// addi r3,r9,-12168
	ctx.r3.s64 = ctx.r9.s64 + -12168;
	// lis r8,-31841
	ctx.r8.s64 = -2086731776;
	// stw r10,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r10.u32);
	// lis r7,-32239
	ctx.r7.s64 = -2112815104;
	// stw r3,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r3.u32);
	// lis r6,-31841
	ctx.r6.s64 = -2086731776;
	// stw r10,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r10.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r5,r8,-18748
	ctx.r5.s64 = ctx.r8.s64 + -18748;
	// addi r4,r7,-10012
	ctx.r4.s64 = ctx.r7.s64 + -10012;
	// stw r11,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r11.u32);
	// addi r3,r6,-13612
	ctx.r3.s64 = ctx.r6.s64 + -13612;
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
	// li r6,0
	ctx.r6.s64 = 0;
	// bl 0x82ef5ae8
	ctx.lr = 0x8344AC54;
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

__attribute__((alias("__imp__sub_8344AC64"))) PPC_WEAK_FUNC(sub_8344AC64);
PPC_FUNC_IMPL(__imp__sub_8344AC64) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8344AC68"))) PPC_WEAK_FUNC(sub_8344AC68);
PPC_FUNC_IMPL(__imp__sub_8344AC68) {
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
	// lis r10,-31877
	ctx.r10.s64 = -2089091072;
	// lis r9,-32240
	ctx.r9.s64 = -2112880640;
	// addi r7,r10,-12144
	ctx.r7.s64 = ctx.r10.s64 + -12144;
	// lis r8,-31841
	ctx.r8.s64 = -2086731776;
	// li r6,9
	ctx.r6.s64 = 9;
	// stw r7,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r7.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r4,r9,8720
	ctx.r4.s64 = ctx.r9.s64 + 8720;
	// stw r6,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r6.u32);
	// addi r3,r8,-13564
	ctx.r3.s64 = ctx.r8.s64 + -13564;
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
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x82ef5ae8
	ctx.lr = 0x8344ACC8;
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

__attribute__((alias("__imp__sub_8344ACD8"))) PPC_WEAK_FUNC(sub_8344ACD8);
PPC_FUNC_IMPL(__imp__sub_8344ACD8) {
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
	// lis r10,-31877
	ctx.r10.s64 = -2089091072;
	// lis r9,-32240
	ctx.r9.s64 = -2112880640;
	// addi r7,r10,-11928
	ctx.r7.s64 = ctx.r10.s64 + -11928;
	// lis r8,-31841
	ctx.r8.s64 = -2086731776;
	// li r6,3
	ctx.r6.s64 = 3;
	// stw r7,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r7.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r4,r9,9008
	ctx.r4.s64 = ctx.r9.s64 + 9008;
	// stw r6,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r6.u32);
	// addi r3,r8,-13516
	ctx.r3.s64 = ctx.r8.s64 + -13516;
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
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x82ef5ae8
	ctx.lr = 0x8344AD38;
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

__attribute__((alias("__imp__sub_8344AD48"))) PPC_WEAK_FUNC(sub_8344AD48);
PPC_FUNC_IMPL(__imp__sub_8344AD48) {
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
	// lis r10,-31877
	ctx.r10.s64 = -2089091072;
	// lis r9,-32240
	ctx.r9.s64 = -2112880640;
	// addi r7,r10,-11856
	ctx.r7.s64 = ctx.r10.s64 + -11856;
	// lis r8,-31841
	ctx.r8.s64 = -2086731776;
	// li r6,1
	ctx.r6.s64 = 1;
	// stw r7,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r7.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r4,r9,9080
	ctx.r4.s64 = ctx.r9.s64 + 9080;
	// stw r6,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r6.u32);
	// addi r3,r8,-13468
	ctx.r3.s64 = ctx.r8.s64 + -13468;
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
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x82ef5ae8
	ctx.lr = 0x8344ADA8;
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

__attribute__((alias("__imp__sub_8344ADB8"))) PPC_WEAK_FUNC(sub_8344ADB8);
PPC_FUNC_IMPL(__imp__sub_8344ADB8) {
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
	// lis r10,-32238
	ctx.r10.s64 = -2112749568;
	// lis r8,-31841
	ctx.r8.s64 = -2086731776;
	// lis r7,-32240
	ctx.r7.s64 = -2112880640;
	// lis r6,-31841
	ctx.r6.s64 = -2086731776;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r9,r10,6184
	ctx.r9.s64 = ctx.r10.s64 + 6184;
	// addi r5,r8,-18748
	ctx.r5.s64 = ctx.r8.s64 + -18748;
	// stw r11,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r11.u32);
	// addi r4,r7,8772
	ctx.r4.s64 = ctx.r7.s64 + 8772;
	// stw r11,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r11.u32);
	// addi r3,r6,-13420
	ctx.r3.s64 = ctx.r6.s64 + -13420;
	// stw r11,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r11.u32);
	// li r10,1
	ctx.r10.s64 = 1;
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
	// li r6,0
	ctx.r6.s64 = 0;
	// bl 0x82ef5ae8
	ctx.lr = 0x8344AE14;
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

__attribute__((alias("__imp__sub_8344AE24"))) PPC_WEAK_FUNC(sub_8344AE24);
PPC_FUNC_IMPL(__imp__sub_8344AE24) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8344AE28"))) PPC_WEAK_FUNC(sub_8344AE28);
PPC_FUNC_IMPL(__imp__sub_8344AE28) {
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
	// lis r10,-31841
	ctx.r10.s64 = -2086731776;
	// lis r9,-32240
	ctx.r9.s64 = -2112880640;
	// lis r8,-31841
	ctx.r8.s64 = -2086731776;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r5,r10,-13420
	ctx.r5.s64 = ctx.r10.s64 + -13420;
	// addi r4,r9,8788
	ctx.r4.s64 = ctx.r9.s64 + 8788;
	// stw r11,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r11.u32);
	// addi r3,r8,-13372
	ctx.r3.s64 = ctx.r8.s64 + -13372;
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
	// li r6,0
	ctx.r6.s64 = 0;
	// bl 0x82ef5ae8
	ctx.lr = 0x8344AE80;
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

__attribute__((alias("__imp__sub_8344AE90"))) PPC_WEAK_FUNC(sub_8344AE90);
PPC_FUNC_IMPL(__imp__sub_8344AE90) {
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
	// lis r10,-31841
	ctx.r10.s64 = -2086731776;
	// lis r9,-32240
	ctx.r9.s64 = -2112880640;
	// lis r8,-31841
	ctx.r8.s64 = -2086731776;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r5,r10,-13420
	ctx.r5.s64 = ctx.r10.s64 + -13420;
	// addi r4,r9,8808
	ctx.r4.s64 = ctx.r9.s64 + 8808;
	// stw r11,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r11.u32);
	// addi r3,r8,-13324
	ctx.r3.s64 = ctx.r8.s64 + -13324;
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
	// li r6,0
	ctx.r6.s64 = 0;
	// bl 0x82ef5ae8
	ctx.lr = 0x8344AEE8;
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

__attribute__((alias("__imp__sub_8344AEF8"))) PPC_WEAK_FUNC(sub_8344AEF8);
PPC_FUNC_IMPL(__imp__sub_8344AEF8) {
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
	// lis r10,-31877
	ctx.r10.s64 = -2089091072;
	// lis r9,-32240
	ctx.r9.s64 = -2112880640;
	// addi r7,r10,-11828
	ctx.r7.s64 = ctx.r10.s64 + -11828;
	// lis r8,-31841
	ctx.r8.s64 = -2086731776;
	// li r6,1
	ctx.r6.s64 = 1;
	// stw r7,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r7.u32);
	// li r5,2
	ctx.r5.s64 = 2;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r6,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r6.u32);
	// addi r4,r9,8828
	ctx.r4.s64 = ctx.r9.s64 + 8828;
	// stw r5,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r5.u32);
	// addi r3,r8,-13276
	ctx.r3.s64 = ctx.r8.s64 + -13276;
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
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x82ef5ae8
	ctx.lr = 0x8344AF5C;
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

__attribute__((alias("__imp__sub_8344AF6C"))) PPC_WEAK_FUNC(sub_8344AF6C);
PPC_FUNC_IMPL(__imp__sub_8344AF6C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8344AF70"))) PPC_WEAK_FUNC(sub_8344AF70);
PPC_FUNC_IMPL(__imp__sub_8344AF70) {
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
	// lis r10,-31877
	ctx.r10.s64 = -2089091072;
	// li r4,2
	ctx.r4.s64 = 2;
	// addi r6,r10,-11776
	ctx.r6.s64 = ctx.r10.s64 + -11776;
	// lis r9,-31841
	ctx.r9.s64 = -2086731776;
	// stw r4,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r4.u32);
	// lis r8,-32240
	ctx.r8.s64 = -2112880640;
	// stw r6,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r6.u32);
	// lis r7,-31841
	ctx.r7.s64 = -2086731776;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r5,r9,-13372
	ctx.r5.s64 = ctx.r9.s64 + -13372;
	// addi r4,r8,8904
	ctx.r4.s64 = ctx.r8.s64 + 8904;
	// stw r11,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r11.u32);
	// addi r3,r7,-13228
	ctx.r3.s64 = ctx.r7.s64 + -13228;
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
	// li r6,0
	ctx.r6.s64 = 0;
	// bl 0x82ef5ae8
	ctx.lr = 0x8344AFDC;
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

__attribute__((alias("__imp__sub_8344AFF0"))) PPC_WEAK_FUNC(sub_8344AFF0);
PPC_FUNC_IMPL(__imp__sub_8344AFF0) {
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
	// lis r10,-31877
	ctx.r10.s64 = -2089091072;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r6,r10,-11704
	ctx.r6.s64 = ctx.r10.s64 + -11704;
	// lis r9,-31841
	ctx.r9.s64 = -2086731776;
	// stw r4,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r4.u32);
	// lis r8,-32240
	ctx.r8.s64 = -2112880640;
	// stw r6,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r6.u32);
	// lis r7,-31841
	ctx.r7.s64 = -2086731776;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r5,r9,-13324
	ctx.r5.s64 = ctx.r9.s64 + -13324;
	// addi r4,r8,8952
	ctx.r4.s64 = ctx.r8.s64 + 8952;
	// stw r11,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r11.u32);
	// addi r3,r7,-13180
	ctx.r3.s64 = ctx.r7.s64 + -13180;
	// stw r11,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r11.u32);
	// li r31,4
	ctx.r31.s64 = 4;
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
	// li r6,0
	ctx.r6.s64 = 0;
	// bl 0x82ef5ae8
	ctx.lr = 0x8344B05C;
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

__attribute__((alias("__imp__sub_8344B070"))) PPC_WEAK_FUNC(sub_8344B070);
PPC_FUNC_IMPL(__imp__sub_8344B070) {
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
	// lis r10,-31877
	ctx.r10.s64 = -2089091072;
	// lis r9,-32240
	ctx.r9.s64 = -2112880640;
	// addi r7,r10,-11608
	ctx.r7.s64 = ctx.r10.s64 + -11608;
	// lis r8,-31841
	ctx.r8.s64 = -2086731776;
	// li r6,1
	ctx.r6.s64 = 1;
	// stw r7,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r7.u32);
	// li r5,12
	ctx.r5.s64 = 12;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r6,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r6.u32);
	// addi r4,r9,8680
	ctx.r4.s64 = ctx.r9.s64 + 8680;
	// stw r5,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r5.u32);
	// addi r3,r8,-13132
	ctx.r3.s64 = ctx.r8.s64 + -13132;
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
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x82ef5ae8
	ctx.lr = 0x8344B0D4;
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

__attribute__((alias("__imp__sub_8344B0E4"))) PPC_WEAK_FUNC(sub_8344B0E4);
PPC_FUNC_IMPL(__imp__sub_8344B0E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8344B0E8"))) PPC_WEAK_FUNC(sub_8344B0E8);
PPC_FUNC_IMPL(__imp__sub_8344B0E8) {
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
	// lis r10,-31877
	ctx.r10.s64 = -2089091072;
	// lis r9,-31841
	ctx.r9.s64 = -2086731776;
	// addi r6,r10,-11320
	ctx.r6.s64 = ctx.r10.s64 + -11320;
	// lis r8,-32240
	ctx.r8.s64 = -2112880640;
	// lis r7,-31841
	ctx.r7.s64 = -2086731776;
	// stw r6,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r6.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r5,r9,-18748
	ctx.r5.s64 = ctx.r9.s64 + -18748;
	// addi r4,r8,29180
	ctx.r4.s64 = ctx.r8.s64 + 29180;
	// stw r11,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r11.u32);
	// addi r3,r7,-13084
	ctx.r3.s64 = ctx.r7.s64 + -13084;
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
	// li r6,0
	ctx.r6.s64 = 0;
	// bl 0x82ef5ae8
	ctx.lr = 0x8344B150;
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

__attribute__((alias("__imp__sub_8344B164"))) PPC_WEAK_FUNC(sub_8344B164);
PPC_FUNC_IMPL(__imp__sub_8344B164) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8344B168"))) PPC_WEAK_FUNC(sub_8344B168);
PPC_FUNC_IMPL(__imp__sub_8344B168) {
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
	// lis r10,-31877
	ctx.r10.s64 = -2089091072;
	// lis r9,-31841
	ctx.r9.s64 = -2086731776;
	// addi r6,r10,-11272
	ctx.r6.s64 = ctx.r10.s64 + -11272;
	// lis r8,-32238
	ctx.r8.s64 = -2112749568;
	// lis r7,-31841
	ctx.r7.s64 = -2086731776;
	// stw r6,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r6.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r5,r9,2612
	ctx.r5.s64 = ctx.r9.s64 + 2612;
	// addi r4,r8,30040
	ctx.r4.s64 = ctx.r8.s64 + 30040;
	// stw r11,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r11.u32);
	// addi r3,r7,-13036
	ctx.r3.s64 = ctx.r7.s64 + -13036;
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
	// li r6,0
	ctx.r6.s64 = 0;
	// bl 0x82ef5ae8
	ctx.lr = 0x8344B1D0;
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

__attribute__((alias("__imp__sub_8344B1E4"))) PPC_WEAK_FUNC(sub_8344B1E4);
PPC_FUNC_IMPL(__imp__sub_8344B1E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8344B1E8"))) PPC_WEAK_FUNC(sub_8344B1E8);
PPC_FUNC_IMPL(__imp__sub_8344B1E8) {
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
	// lis r10,-32238
	ctx.r10.s64 = -2112749568;
	// lis r9,-31877
	ctx.r9.s64 = -2089091072;
	// addi r5,r10,6204
	ctx.r5.s64 = ctx.r10.s64 + 6204;
	// addi r4,r9,-11248
	ctx.r4.s64 = ctx.r9.s64 + -11248;
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r5,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r5.u32);
	// lis r8,-31841
	ctx.r8.s64 = -2086731776;
	// stw r4,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r4.u32);
	// lis r7,-32240
	ctx.r7.s64 = -2112880640;
	// stw r3,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r3.u32);
	// lis r6,-31841
	ctx.r6.s64 = -2086731776;
	// li r10,3
	ctx.r10.s64 = 3;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r5,r8,-10444
	ctx.r5.s64 = ctx.r8.s64 + -10444;
	// stw r10,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r10.u32);
	// addi r4,r7,26576
	ctx.r4.s64 = ctx.r7.s64 + 26576;
	// stw r11,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r11.u32);
	// addi r3,r6,-12988
	ctx.r3.s64 = ctx.r6.s64 + -12988;
	// stw r11,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r11.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// bl 0x82ef5ae8
	ctx.lr = 0x8344B258;
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

__attribute__((alias("__imp__sub_8344B268"))) PPC_WEAK_FUNC(sub_8344B268);
PPC_FUNC_IMPL(__imp__sub_8344B268) {
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
	// lis r10,-31877
	ctx.r10.s64 = -2089091072;
	// lis r9,-32240
	ctx.r9.s64 = -2112880640;
	// addi r7,r10,-11176
	ctx.r7.s64 = ctx.r10.s64 + -11176;
	// lis r8,-31841
	ctx.r8.s64 = -2086731776;
	// li r6,1
	ctx.r6.s64 = 1;
	// stw r7,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r7.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r4,r9,28760
	ctx.r4.s64 = ctx.r9.s64 + 28760;
	// stw r6,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r6.u32);
	// addi r3,r8,-12940
	ctx.r3.s64 = ctx.r8.s64 + -12940;
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
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x82ef5ae8
	ctx.lr = 0x8344B2C8;
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

__attribute__((alias("__imp__sub_8344B2D8"))) PPC_WEAK_FUNC(sub_8344B2D8);
PPC_FUNC_IMPL(__imp__sub_8344B2D8) {
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
	// lis r10,-31877
	ctx.r10.s64 = -2089091072;
	// lis r9,-32240
	ctx.r9.s64 = -2112880640;
	// addi r7,r10,-11152
	ctx.r7.s64 = ctx.r10.s64 + -11152;
	// lis r8,-31841
	ctx.r8.s64 = -2086731776;
	// li r6,5
	ctx.r6.s64 = 5;
	// stw r7,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r7.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r4,r9,27776
	ctx.r4.s64 = ctx.r9.s64 + 27776;
	// stw r6,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r6.u32);
	// addi r3,r8,-12892
	ctx.r3.s64 = ctx.r8.s64 + -12892;
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
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x82ef5ae8
	ctx.lr = 0x8344B338;
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

__attribute__((alias("__imp__sub_8344B348"))) PPC_WEAK_FUNC(sub_8344B348);
PPC_FUNC_IMPL(__imp__sub_8344B348) {
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
	// lis r10,-31877
	ctx.r10.s64 = -2089091072;
	// lis r8,-32240
	ctx.r8.s64 = -2112880640;
	// addi r6,r10,-11028
	ctx.r6.s64 = ctx.r10.s64 + -11028;
	// lis r7,-31841
	ctx.r7.s64 = -2086731776;
	// li r5,2
	ctx.r5.s64 = 2;
	// stw r6,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r6.u32);
	// lis r9,-32238
	ctx.r9.s64 = -2112749568;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r5,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r5.u32);
	// addi r4,r8,28276
	ctx.r4.s64 = ctx.r8.s64 + 28276;
	// addi r3,r7,-12844
	ctx.r3.s64 = ctx.r7.s64 + -12844;
	// stw r11,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r11.u32);
	// addi r9,r9,6260
	ctx.r9.s64 = ctx.r9.s64 + 6260;
	// stw r11,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r11.u32);
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r11,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r11.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x82ef5ae8
	ctx.lr = 0x8344B3AC;
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

__attribute__((alias("__imp__sub_8344B3BC"))) PPC_WEAK_FUNC(sub_8344B3BC);
PPC_FUNC_IMPL(__imp__sub_8344B3BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8344B3C0"))) PPC_WEAK_FUNC(sub_8344B3C0);
PPC_FUNC_IMPL(__imp__sub_8344B3C0) {
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
	// lis r10,-31877
	ctx.r10.s64 = -2089091072;
	// lis r9,-32240
	ctx.r9.s64 = -2112880640;
	// addi r7,r10,-10976
	ctx.r7.s64 = ctx.r10.s64 + -10976;
	// lis r8,-31841
	ctx.r8.s64 = -2086731776;
	// li r6,3
	ctx.r6.s64 = 3;
	// stw r7,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r7.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r4,r9,29040
	ctx.r4.s64 = ctx.r9.s64 + 29040;
	// stw r6,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r6.u32);
	// addi r3,r8,-12796
	ctx.r3.s64 = ctx.r8.s64 + -12796;
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
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x82ef5ae8
	ctx.lr = 0x8344B420;
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

__attribute__((alias("__imp__sub_8344B430"))) PPC_WEAK_FUNC(sub_8344B430);
PPC_FUNC_IMPL(__imp__sub_8344B430) {
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
	// lis r10,-31877
	ctx.r10.s64 = -2089091072;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r5,r10,-10904
	ctx.r5.s64 = ctx.r10.s64 + -10904;
	// lis r8,-31841
	ctx.r8.s64 = -2086731776;
	// stw r4,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r4.u32);
	// lis r7,-32240
	ctx.r7.s64 = -2112880640;
	// stw r5,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r5.u32);
	// lis r6,-31841
	ctx.r6.s64 = -2086731776;
	// li r10,5
	ctx.r10.s64 = 5;
	// lis r9,-32238
	ctx.r9.s64 = -2112749568;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r10,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r10.u32);
	// addi r5,r8,-18748
	ctx.r5.s64 = ctx.r8.s64 + -18748;
	// addi r4,r7,29196
	ctx.r4.s64 = ctx.r7.s64 + 29196;
	// stw r11,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r11.u32);
	// addi r3,r6,-12748
	ctx.r3.s64 = ctx.r6.s64 + -12748;
	// stw r11,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r11.u32);
	// addi r9,r9,6232
	ctx.r9.s64 = ctx.r9.s64 + 6232;
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// li r10,1
	ctx.r10.s64 = 1;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// bl 0x82ef5ae8
	ctx.lr = 0x8344B49C;
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

__attribute__((alias("__imp__sub_8344B4AC"))) PPC_WEAK_FUNC(sub_8344B4AC);
PPC_FUNC_IMPL(__imp__sub_8344B4AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8344B4B0"))) PPC_WEAK_FUNC(sub_8344B4B0);
PPC_FUNC_IMPL(__imp__sub_8344B4B0) {
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
	// lis r10,-32238
	ctx.r10.s64 = -2112749568;
	// lis r9,-31877
	ctx.r9.s64 = -2089091072;
	// addi r5,r10,6280
	ctx.r5.s64 = ctx.r10.s64 + 6280;
	// addi r4,r9,-10784
	ctx.r4.s64 = ctx.r9.s64 + -10784;
	// lis r8,-31841
	ctx.r8.s64 = -2086731776;
	// stw r5,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r5.u32);
	// lis r7,-32240
	ctx.r7.s64 = -2112880640;
	// stw r4,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r4.u32);
	// lis r6,-31841
	ctx.r6.s64 = -2086731776;
	// li r9,8
	ctx.r9.s64 = 8;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r5,r8,-10444
	ctx.r5.s64 = ctx.r8.s64 + -10444;
	// stw r9,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r9.u32);
	// addi r4,r7,29148
	ctx.r4.s64 = ctx.r7.s64 + 29148;
	// stw r11,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r11.u32);
	// addi r3,r6,-12700
	ctx.r3.s64 = ctx.r6.s64 + -12700;
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
	// li r6,0
	ctx.r6.s64 = 0;
	// bl 0x82ef5ae8
	ctx.lr = 0x8344B51C;
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

__attribute__((alias("__imp__sub_8344B52C"))) PPC_WEAK_FUNC(sub_8344B52C);
PPC_FUNC_IMPL(__imp__sub_8344B52C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8344B530"))) PPC_WEAK_FUNC(sub_8344B530);
PPC_FUNC_IMPL(__imp__sub_8344B530) {
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
	// lis r10,-32238
	ctx.r10.s64 = -2112749568;
	// lis r9,-31877
	ctx.r9.s64 = -2089091072;
	// addi r5,r10,6340
	ctx.r5.s64 = ctx.r10.s64 + 6340;
	// addi r4,r9,-10592
	ctx.r4.s64 = ctx.r9.s64 + -10592;
	// lis r8,-31841
	ctx.r8.s64 = -2086731776;
	// stw r5,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r5.u32);
	// lis r7,-32238
	ctx.r7.s64 = -2112749568;
	// stw r4,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r4.u32);
	// lis r6,-31841
	ctx.r6.s64 = -2086731776;
	// li r9,2
	ctx.r9.s64 = 2;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r5,r8,-9676
	ctx.r5.s64 = ctx.r8.s64 + -9676;
	// stw r9,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r9.u32);
	// addi r4,r7,30056
	ctx.r4.s64 = ctx.r7.s64 + 30056;
	// stw r11,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r11.u32);
	// addi r3,r6,-12652
	ctx.r3.s64 = ctx.r6.s64 + -12652;
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
	// li r6,0
	ctx.r6.s64 = 0;
	// bl 0x82ef5ae8
	ctx.lr = 0x8344B59C;
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

__attribute__((alias("__imp__sub_8344B5AC"))) PPC_WEAK_FUNC(sub_8344B5AC);
PPC_FUNC_IMPL(__imp__sub_8344B5AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8344B5B0"))) PPC_WEAK_FUNC(sub_8344B5B0);
PPC_FUNC_IMPL(__imp__sub_8344B5B0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31877
	ctx.r11.s64 = -2089091072;
	// lis r10,-31876
	ctx.r10.s64 = -2089025536;
	// addi r9,r10,-31720
	ctx.r9.s64 = ctx.r10.s64 + -31720;
	// lwz r11,-10980(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -10980);
	// stw r11,32(r9)
	PPC_STORE_U32(ctx.r9.u32 + 32, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8344B5C8"))) PPC_WEAK_FUNC(sub_8344B5C8);
PPC_FUNC_IMPL(__imp__sub_8344B5C8) {
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
	// lis r11,-32238
	ctx.r11.s64 = -2112749568;
	// lis r10,-31876
	ctx.r10.s64 = -2089025536;
	// addi r9,r11,6380
	ctx.r9.s64 = ctx.r11.s64 + 6380;
	// addi r4,r10,-31720
	ctx.r4.s64 = ctx.r10.s64 + -31720;
	// addi r5,r9,20
	ctx.r5.s64 = ctx.r9.s64 + 20;
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r4,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r4.u32);
	// lis r8,-31841
	ctx.r8.s64 = -2086731776;
	// stw r5,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r5.u32);
	// lis r7,-32240
	ctx.r7.s64 = -2112880640;
	// stw r3,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r3.u32);
	// lis r6,-31841
	ctx.r6.s64 = -2086731776;
	// li r10,5
	ctx.r10.s64 = 5;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r5,r8,-10444
	ctx.r5.s64 = ctx.r8.s64 + -10444;
	// stw r10,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r10.u32);
	// addi r4,r7,29724
	ctx.r4.s64 = ctx.r7.s64 + 29724;
	// stw r11,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r11.u32);
	// addi r3,r6,-12604
	ctx.r3.s64 = ctx.r6.s64 + -12604;
	// stw r11,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r11.u32);
	// li r10,1
	ctx.r10.s64 = 1;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// bl 0x82ef5ae8
	ctx.lr = 0x8344B638;
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

__attribute__((alias("__imp__sub_8344B648"))) PPC_WEAK_FUNC(sub_8344B648);
PPC_FUNC_IMPL(__imp__sub_8344B648) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31877
	ctx.r11.s64 = -2089091072;
	// lis r10,-31877
	ctx.r10.s64 = -2089091072;
	// lis r9,-31877
	ctx.r9.s64 = -2089091072;
	// lis r8,-31877
	ctx.r8.s64 = -2089091072;
	// lis r7,-31876
	ctx.r7.s64 = -2089025536;
	// lwz r11,-10544(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -10544);
	// lwz r10,-10536(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + -10536);
	// addi r6,r7,-31600
	ctx.r6.s64 = ctx.r7.s64 + -31600;
	// lwz r9,-10532(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + -10532);
	// lwz r8,-10540(r8)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r8.u32 + -10540);
	// stw r11,32(r6)
	PPC_STORE_U32(ctx.r6.u32 + 32, ctx.r11.u32);
	// stw r10,56(r6)
	PPC_STORE_U32(ctx.r6.u32 + 56, ctx.r10.u32);
	// stw r9,80(r6)
	PPC_STORE_U32(ctx.r6.u32 + 80, ctx.r9.u32);
	// stw r8,152(r6)
	PPC_STORE_U32(ctx.r6.u32 + 152, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8344B684"))) PPC_WEAK_FUNC(sub_8344B684);
PPC_FUNC_IMPL(__imp__sub_8344B684) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8344B688"))) PPC_WEAK_FUNC(sub_8344B688);
PPC_FUNC_IMPL(__imp__sub_8344B688) {
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
	// lis r11,-32238
	ctx.r11.s64 = -2112749568;
	// lis r10,-31876
	ctx.r10.s64 = -2089025536;
	// addi r9,r11,6528
	ctx.r9.s64 = ctx.r11.s64 + 6528;
	// addi r4,r10,-31600
	ctx.r4.s64 = ctx.r10.s64 + -31600;
	// addi r5,r9,80
	ctx.r5.s64 = ctx.r9.s64 + 80;
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r4,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r4.u32);
	// lis r8,-31841
	ctx.r8.s64 = -2086731776;
	// stw r5,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r5.u32);
	// lis r7,-32238
	ctx.r7.s64 = -2112749568;
	// stw r3,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r3.u32);
	// lis r6,-31841
	ctx.r6.s64 = -2086731776;
	// li r10,8
	ctx.r10.s64 = 8;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r5,r8,-9676
	ctx.r5.s64 = ctx.r8.s64 + -9676;
	// stw r10,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r10.u32);
	// addi r4,r7,30132
	ctx.r4.s64 = ctx.r7.s64 + 30132;
	// stw r11,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r11.u32);
	// addi r3,r6,-12556
	ctx.r3.s64 = ctx.r6.s64 + -12556;
	// stw r11,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r11.u32);
	// li r10,4
	ctx.r10.s64 = 4;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// bl 0x82ef5ae8
	ctx.lr = 0x8344B6F8;
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

__attribute__((alias("__imp__sub_8344B708"))) PPC_WEAK_FUNC(sub_8344B708);
PPC_FUNC_IMPL(__imp__sub_8344B708) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31877
	ctx.r11.s64 = -2089091072;
	// lis r10,-31876
	ctx.r10.s64 = -2089025536;
	// addi r9,r10,-31408
	ctx.r9.s64 = ctx.r10.s64 + -31408;
	// lwz r11,-10528(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -10528);
	// stw r11,152(r9)
	PPC_STORE_U32(ctx.r9.u32 + 152, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8344B720"))) PPC_WEAK_FUNC(sub_8344B720);
PPC_FUNC_IMPL(__imp__sub_8344B720) {
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
	// lis r11,-32238
	ctx.r11.s64 = -2112749568;
	// lis r10,-31876
	ctx.r10.s64 = -2089025536;
	// addi r9,r11,6668
	ctx.r9.s64 = ctx.r11.s64 + 6668;
	// addi r4,r10,-31408
	ctx.r4.s64 = ctx.r10.s64 + -31408;
	// addi r5,r9,20
	ctx.r5.s64 = ctx.r9.s64 + 20;
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r4,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r4.u32);
	// lis r8,-31841
	ctx.r8.s64 = -2086731776;
	// stw r5,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r5.u32);
	// lis r7,-32238
	ctx.r7.s64 = -2112749568;
	// stw r3,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r3.u32);
	// lis r6,-31841
	ctx.r6.s64 = -2086731776;
	// li r10,8
	ctx.r10.s64 = 8;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r5,r8,-10444
	ctx.r5.s64 = ctx.r8.s64 + -10444;
	// stw r10,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r10.u32);
	// addi r4,r7,30164
	ctx.r4.s64 = ctx.r7.s64 + 30164;
	// stw r11,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r11.u32);
	// addi r3,r6,-12508
	ctx.r3.s64 = ctx.r6.s64 + -12508;
	// stw r11,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r11.u32);
	// li r10,1
	ctx.r10.s64 = 1;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// bl 0x82ef5ae8
	ctx.lr = 0x8344B790;
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

__attribute__((alias("__imp__sub_8344B7A0"))) PPC_WEAK_FUNC(sub_8344B7A0);
PPC_FUNC_IMPL(__imp__sub_8344B7A0) {
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
	// lis r10,-31877
	ctx.r10.s64 = -2089091072;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r5,r10,-10520
	ctx.r5.s64 = ctx.r10.s64 + -10520;
	// lis r8,-31841
	ctx.r8.s64 = -2086731776;
	// stw r4,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r4.u32);
	// lis r7,-32240
	ctx.r7.s64 = -2112880640;
	// stw r5,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r5.u32);
	// lis r6,-31841
	ctx.r6.s64 = -2086731776;
	// li r10,4
	ctx.r10.s64 = 4;
	// lis r9,-32238
	ctx.r9.s64 = -2112749568;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r10,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r10.u32);
	// addi r5,r8,-11740
	ctx.r5.s64 = ctx.r8.s64 + -11740;
	// addi r4,r7,29376
	ctx.r4.s64 = ctx.r7.s64 + 29376;
	// stw r11,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r11.u32);
	// addi r3,r6,-12460
	ctx.r3.s64 = ctx.r6.s64 + -12460;
	// stw r11,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r11.u32);
	// addi r9,r9,6776
	ctx.r9.s64 = ctx.r9.s64 + 6776;
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// li r10,1
	ctx.r10.s64 = 1;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// bl 0x82ef5ae8
	ctx.lr = 0x8344B80C;
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

__attribute__((alias("__imp__sub_8344B81C"))) PPC_WEAK_FUNC(sub_8344B81C);
PPC_FUNC_IMPL(__imp__sub_8344B81C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8344B820"))) PPC_WEAK_FUNC(sub_8344B820);
PPC_FUNC_IMPL(__imp__sub_8344B820) {
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
	// lis r10,-32238
	ctx.r10.s64 = -2112749568;
	// lis r9,-31877
	ctx.r9.s64 = -2089091072;
	// addi r5,r10,6796
	ctx.r5.s64 = ctx.r10.s64 + 6796;
	// addi r4,r9,-10424
	ctx.r4.s64 = ctx.r9.s64 + -10424;
	// lis r8,-31841
	ctx.r8.s64 = -2086731776;
	// stw r5,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r5.u32);
	// lis r7,-32238
	ctx.r7.s64 = -2112749568;
	// stw r4,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r4.u32);
	// lis r6,-31841
	ctx.r6.s64 = -2086731776;
	// li r9,3
	ctx.r9.s64 = 3;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r5,r8,-9628
	ctx.r5.s64 = ctx.r8.s64 + -9628;
	// stw r9,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r9.u32);
	// addi r4,r7,30184
	ctx.r4.s64 = ctx.r7.s64 + 30184;
	// stw r11,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r11.u32);
	// addi r3,r6,-12412
	ctx.r3.s64 = ctx.r6.s64 + -12412;
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
	// li r6,0
	ctx.r6.s64 = 0;
	// bl 0x82ef5ae8
	ctx.lr = 0x8344B88C;
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

__attribute__((alias("__imp__sub_8344B89C"))) PPC_WEAK_FUNC(sub_8344B89C);
PPC_FUNC_IMPL(__imp__sub_8344B89C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8344B8A0"))) PPC_WEAK_FUNC(sub_8344B8A0);
PPC_FUNC_IMPL(__imp__sub_8344B8A0) {
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
	// lis r9,-31877
	ctx.r9.s64 = -2089091072;
	// lis r10,-32238
	ctx.r10.s64 = -2112749568;
	// addi r5,r9,-10344
	ctx.r5.s64 = ctx.r9.s64 + -10344;
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r6,r10,6868
	ctx.r6.s64 = ctx.r10.s64 + 6868;
	// stw r5,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r5.u32);
	// lis r8,-32240
	ctx.r8.s64 = -2112880640;
	// stw r3,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r3.u32);
	// lis r7,-31841
	ctx.r7.s64 = -2086731776;
	// stw r6,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r6.u32);
	// li r9,8
	ctx.r9.s64 = 8;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r4,r8,30076
	ctx.r4.s64 = ctx.r8.s64 + 30076;
	// stw r9,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r9.u32);
	// addi r3,r7,-12364
	ctx.r3.s64 = ctx.r7.s64 + -12364;
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
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x82ef5ae8
	ctx.lr = 0x8344B90C;
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

__attribute__((alias("__imp__sub_8344B91C"))) PPC_WEAK_FUNC(sub_8344B91C);
PPC_FUNC_IMPL(__imp__sub_8344B91C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8344B920"))) PPC_WEAK_FUNC(sub_8344B920);
PPC_FUNC_IMPL(__imp__sub_8344B920) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31877
	ctx.r11.s64 = -2089091072;
	// lis r10,-31876
	ctx.r10.s64 = -2089025536;
	// addi r9,r10,-31216
	ctx.r9.s64 = ctx.r10.s64 + -31216;
	// lwz r11,-7864(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -7864);
	// stw r11,80(r9)
	PPC_STORE_U32(ctx.r9.u32 + 80, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8344B938"))) PPC_WEAK_FUNC(sub_8344B938);
PPC_FUNC_IMPL(__imp__sub_8344B938) {
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
	// lis r11,-32238
	ctx.r11.s64 = -2112749568;
	// lis r10,-31876
	ctx.r10.s64 = -2089025536;
	// addi r9,r11,6848
	ctx.r9.s64 = ctx.r11.s64 + 6848;
	// addi r4,r10,-31216
	ctx.r4.s64 = ctx.r10.s64 + -31216;
	// addi r5,r9,80
	ctx.r5.s64 = ctx.r9.s64 + 80;
	// lis r8,-31841
	ctx.r8.s64 = -2086731776;
	// stw r4,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r4.u32);
	// lis r7,-32240
	ctx.r7.s64 = -2112880640;
	// stw r5,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r5.u32);
	// lis r6,-31841
	ctx.r6.s64 = -2086731776;
	// li r10,5
	ctx.r10.s64 = 5;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r5,r8,-11020
	ctx.r5.s64 = ctx.r8.s64 + -11020;
	// stw r10,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r10.u32);
	// addi r4,r7,30928
	ctx.r4.s64 = ctx.r7.s64 + 30928;
	// stw r11,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r11.u32);
	// addi r3,r6,-12316
	ctx.r3.s64 = ctx.r6.s64 + -12316;
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
	// li r6,0
	ctx.r6.s64 = 0;
	// bl 0x82ef5ae8
	ctx.lr = 0x8344B9A4;
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

__attribute__((alias("__imp__sub_8344B9B4"))) PPC_WEAK_FUNC(sub_8344B9B4);
PPC_FUNC_IMPL(__imp__sub_8344B9B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8344B9B8"))) PPC_WEAK_FUNC(sub_8344B9B8);
PPC_FUNC_IMPL(__imp__sub_8344B9B8) {
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
	// lis r10,-31877
	ctx.r10.s64 = -2089091072;
	// lis r9,-31841
	ctx.r9.s64 = -2086731776;
	// addi r6,r10,-10152
	ctx.r6.s64 = ctx.r10.s64 + -10152;
	// lis r8,-32238
	ctx.r8.s64 = -2112749568;
	// lis r7,-31841
	ctx.r7.s64 = -2086731776;
	// stw r6,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r6.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r5,r9,-1516
	ctx.r5.s64 = ctx.r9.s64 + -1516;
	// addi r4,r8,30212
	ctx.r4.s64 = ctx.r8.s64 + 30212;
	// stw r11,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r11.u32);
	// addi r3,r7,-12268
	ctx.r3.s64 = ctx.r7.s64 + -12268;
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
	// li r6,0
	ctx.r6.s64 = 0;
	// bl 0x82ef5ae8
	ctx.lr = 0x8344BA20;
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

__attribute__((alias("__imp__sub_8344BA34"))) PPC_WEAK_FUNC(sub_8344BA34);
PPC_FUNC_IMPL(__imp__sub_8344BA34) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8344BA38"))) PPC_WEAK_FUNC(sub_8344BA38);
PPC_FUNC_IMPL(__imp__sub_8344BA38) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31877
	ctx.r11.s64 = -2089091072;
	// lis r10,-31876
	ctx.r10.s64 = -2089025536;
	// addi r9,r10,-31096
	ctx.r9.s64 = ctx.r10.s64 + -31096;
	// lwz r11,-10348(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -10348);
	// stw r11,56(r9)
	PPC_STORE_U32(ctx.r9.u32 + 56, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8344BA50"))) PPC_WEAK_FUNC(sub_8344BA50);
PPC_FUNC_IMPL(__imp__sub_8344BA50) {
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
	// lis r11,-32238
	ctx.r11.s64 = -2112749568;
	// lis r10,-31876
	ctx.r10.s64 = -2089025536;
	// addi r9,r11,7024
	ctx.r9.s64 = ctx.r11.s64 + 7024;
	// addi r4,r10,-31096
	ctx.r4.s64 = ctx.r10.s64 + -31096;
	// addi r5,r9,20
	ctx.r5.s64 = ctx.r9.s64 + 20;
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r4,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r4.u32);
	// lis r8,-31841
	ctx.r8.s64 = -2086731776;
	// stw r5,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r5.u32);
	// lis r7,-32240
	ctx.r7.s64 = -2112880640;
	// stw r3,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r3.u32);
	// lis r6,-31841
	ctx.r6.s64 = -2086731776;
	// li r10,3
	ctx.r10.s64 = 3;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r5,r8,-10444
	ctx.r5.s64 = ctx.r8.s64 + -10444;
	// stw r10,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r10.u32);
	// addi r4,r7,30568
	ctx.r4.s64 = ctx.r7.s64 + 30568;
	// stw r11,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r11.u32);
	// addi r3,r6,-12220
	ctx.r3.s64 = ctx.r6.s64 + -12220;
	// stw r11,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r11.u32);
	// li r10,1
	ctx.r10.s64 = 1;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// bl 0x82ef5ae8
	ctx.lr = 0x8344BAC0;
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

__attribute__((alias("__imp__sub_8344BAD0"))) PPC_WEAK_FUNC(sub_8344BAD0);
PPC_FUNC_IMPL(__imp__sub_8344BAD0) {
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
	// lis r10,-32238
	ctx.r10.s64 = -2112749568;
	// lis r9,-31877
	ctx.r9.s64 = -2089091072;
	// addi r5,r10,7076
	ctx.r5.s64 = ctx.r10.s64 + 7076;
	// addi r4,r9,-10056
	ctx.r4.s64 = ctx.r9.s64 + -10056;
	// lis r8,-31841
	ctx.r8.s64 = -2086731776;
	// stw r5,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r5.u32);
	// lis r7,-32240
	ctx.r7.s64 = -2112880640;
	// stw r4,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r4.u32);
	// lis r6,-31841
	ctx.r6.s64 = -2086731776;
	// li r9,7
	ctx.r9.s64 = 7;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r5,r8,-11020
	ctx.r5.s64 = ctx.r8.s64 + -11020;
	// stw r9,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r9.u32);
	// addi r4,r7,27120
	ctx.r4.s64 = ctx.r7.s64 + 27120;
	// stw r11,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r11.u32);
	// addi r3,r6,-12172
	ctx.r3.s64 = ctx.r6.s64 + -12172;
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
	// li r6,0
	ctx.r6.s64 = 0;
	// bl 0x82ef5ae8
	ctx.lr = 0x8344BB3C;
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

__attribute__((alias("__imp__sub_8344BB4C"))) PPC_WEAK_FUNC(sub_8344BB4C);
PPC_FUNC_IMPL(__imp__sub_8344BB4C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8344BB50"))) PPC_WEAK_FUNC(sub_8344BB50);
PPC_FUNC_IMPL(__imp__sub_8344BB50) {
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
	// lis r10,-32238
	ctx.r10.s64 = -2112749568;
	// lis r9,-31877
	ctx.r9.s64 = -2089091072;
	// addi r5,r10,7120
	ctx.r5.s64 = ctx.r10.s64 + 7120;
	// addi r4,r9,-9888
	ctx.r4.s64 = ctx.r9.s64 + -9888;
	// lis r8,-31841
	ctx.r8.s64 = -2086731776;
	// stw r5,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r5.u32);
	// lis r7,-32240
	ctx.r7.s64 = -2112880640;
	// stw r4,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r4.u32);
	// lis r6,-31841
	ctx.r6.s64 = -2086731776;
	// li r9,6
	ctx.r9.s64 = 6;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r5,r8,-10444
	ctx.r5.s64 = ctx.r8.s64 + -10444;
	// stw r9,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r9.u32);
	// addi r4,r7,26480
	ctx.r4.s64 = ctx.r7.s64 + 26480;
	// stw r11,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r11.u32);
	// addi r3,r6,-12124
	ctx.r3.s64 = ctx.r6.s64 + -12124;
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
	// li r6,0
	ctx.r6.s64 = 0;
	// bl 0x82ef5ae8
	ctx.lr = 0x8344BBBC;
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

__attribute__((alias("__imp__sub_8344BBCC"))) PPC_WEAK_FUNC(sub_8344BBCC);
PPC_FUNC_IMPL(__imp__sub_8344BBCC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8344BBD0"))) PPC_WEAK_FUNC(sub_8344BBD0);
PPC_FUNC_IMPL(__imp__sub_8344BBD0) {
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
	// lis r10,-32238
	ctx.r10.s64 = -2112749568;
	// lis r9,-31877
	ctx.r9.s64 = -2089091072;
	// addi r5,r10,7196
	ctx.r5.s64 = ctx.r10.s64 + 7196;
	// addi r4,r9,-9744
	ctx.r4.s64 = ctx.r9.s64 + -9744;
	// lis r8,-31841
	ctx.r8.s64 = -2086731776;
	// stw r5,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r5.u32);
	// lis r7,-32240
	ctx.r7.s64 = -2112880640;
	// stw r4,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r4.u32);
	// lis r6,-31841
	ctx.r6.s64 = -2086731776;
	// li r9,9
	ctx.r9.s64 = 9;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r5,r8,-9676
	ctx.r5.s64 = ctx.r8.s64 + -9676;
	// stw r9,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r9.u32);
	// addi r4,r7,30112
	ctx.r4.s64 = ctx.r7.s64 + 30112;
	// stw r11,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r11.u32);
	// addi r3,r6,-12076
	ctx.r3.s64 = ctx.r6.s64 + -12076;
	// stw r11,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r11.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r11.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,2
	ctx.r8.s64 = 2;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// bl 0x82ef5ae8
	ctx.lr = 0x8344BC3C;
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

__attribute__((alias("__imp__sub_8344BC4C"))) PPC_WEAK_FUNC(sub_8344BC4C);
PPC_FUNC_IMPL(__imp__sub_8344BC4C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8344BC50"))) PPC_WEAK_FUNC(sub_8344BC50);
PPC_FUNC_IMPL(__imp__sub_8344BC50) {
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
	// lis r10,-32238
	ctx.r10.s64 = -2112749568;
	// lis r9,-31877
	ctx.r9.s64 = -2089091072;
	// addi r5,r10,7252
	ctx.r5.s64 = ctx.r10.s64 + 7252;
	// addi r4,r9,-9528
	ctx.r4.s64 = ctx.r9.s64 + -9528;
	// lis r8,-31841
	ctx.r8.s64 = -2086731776;
	// stw r5,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r5.u32);
	// lis r7,-32240
	ctx.r7.s64 = -2112880640;
	// stw r4,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r4.u32);
	// lis r6,-31841
	ctx.r6.s64 = -2086731776;
	// li r9,4
	ctx.r9.s64 = 4;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r5,r8,-12076
	ctx.r5.s64 = ctx.r8.s64 + -12076;
	// stw r9,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r9.u32);
	// addi r4,r7,30260
	ctx.r4.s64 = ctx.r7.s64 + 30260;
	// stw r11,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r11.u32);
	// addi r3,r6,-12028
	ctx.r3.s64 = ctx.r6.s64 + -12028;
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
	// li r6,0
	ctx.r6.s64 = 0;
	// bl 0x82ef5ae8
	ctx.lr = 0x8344BCBC;
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

__attribute__((alias("__imp__sub_8344BCCC"))) PPC_WEAK_FUNC(sub_8344BCCC);
PPC_FUNC_IMPL(__imp__sub_8344BCCC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8344BCD0"))) PPC_WEAK_FUNC(sub_8344BCD0);
PPC_FUNC_IMPL(__imp__sub_8344BCD0) {
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
	// lis r10,-31877
	ctx.r10.s64 = -2089091072;
	// lis r9,-31841
	ctx.r9.s64 = -2086731776;
	// addi r6,r10,-9432
	ctx.r6.s64 = ctx.r10.s64 + -9432;
	// lis r8,-32238
	ctx.r8.s64 = -2112749568;
	// lis r7,-31841
	ctx.r7.s64 = -2086731776;
	// stw r6,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r6.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r5,r9,2612
	ctx.r5.s64 = ctx.r9.s64 + 2612;
	// addi r4,r8,30260
	ctx.r4.s64 = ctx.r8.s64 + 30260;
	// stw r11,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r11.u32);
	// addi r3,r7,-11980
	ctx.r3.s64 = ctx.r7.s64 + -11980;
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
	// li r6,0
	ctx.r6.s64 = 0;
	// bl 0x82ef5ae8
	ctx.lr = 0x8344BD38;
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

__attribute__((alias("__imp__sub_8344BD4C"))) PPC_WEAK_FUNC(sub_8344BD4C);
PPC_FUNC_IMPL(__imp__sub_8344BD4C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8344BD50"))) PPC_WEAK_FUNC(sub_8344BD50);
PPC_FUNC_IMPL(__imp__sub_8344BD50) {
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
	// lis r9,-31877
	ctx.r9.s64 = -2089091072;
	// li r10,1
	ctx.r10.s64 = 1;
	// addi r3,r9,-9396
	ctx.r3.s64 = ctx.r9.s64 + -9396;
	// lis r8,-31841
	ctx.r8.s64 = -2086731776;
	// stw r10,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r10.u32);
	// lis r7,-32240
	ctx.r7.s64 = -2112880640;
	// stw r3,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r3.u32);
	// lis r6,-31841
	ctx.r6.s64 = -2086731776;
	// stw r10,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r10.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r5,r8,-18748
	ctx.r5.s64 = ctx.r8.s64 + -18748;
	// addi r4,r7,28296
	ctx.r4.s64 = ctx.r7.s64 + 28296;
	// stw r11,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r11.u32);
	// addi r3,r6,-11932
	ctx.r3.s64 = ctx.r6.s64 + -11932;
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
	// li r6,0
	ctx.r6.s64 = 0;
	// bl 0x82ef5ae8
	ctx.lr = 0x8344BDB4;
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

__attribute__((alias("__imp__sub_8344BDC4"))) PPC_WEAK_FUNC(sub_8344BDC4);
PPC_FUNC_IMPL(__imp__sub_8344BDC4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8344BDC8"))) PPC_WEAK_FUNC(sub_8344BDC8);
PPC_FUNC_IMPL(__imp__sub_8344BDC8) {
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
	// lis r10,-31877
	ctx.r10.s64 = -2089091072;
	// lis r9,-32240
	ctx.r9.s64 = -2112880640;
	// addi r7,r10,-9368
	ctx.r7.s64 = ctx.r10.s64 + -9368;
	// lis r8,-31841
	ctx.r8.s64 = -2086731776;
	// li r6,1
	ctx.r6.s64 = 1;
	// stw r7,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r7.u32);
	// li r5,7
	ctx.r5.s64 = 7;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r6,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r6.u32);
	// addi r4,r9,28952
	ctx.r4.s64 = ctx.r9.s64 + 28952;
	// stw r5,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r5.u32);
	// addi r3,r8,-11884
	ctx.r3.s64 = ctx.r8.s64 + -11884;
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
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x82ef5ae8
	ctx.lr = 0x8344BE2C;
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

__attribute__((alias("__imp__sub_8344BE3C"))) PPC_WEAK_FUNC(sub_8344BE3C);
PPC_FUNC_IMPL(__imp__sub_8344BE3C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8344BE40"))) PPC_WEAK_FUNC(sub_8344BE40);
PPC_FUNC_IMPL(__imp__sub_8344BE40) {
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
	// lis r10,-31877
	ctx.r10.s64 = -2089091072;
	// lis r9,-31841
	ctx.r9.s64 = -2086731776;
	// addi r6,r10,-9200
	ctx.r6.s64 = ctx.r10.s64 + -9200;
	// lis r8,-32238
	ctx.r8.s64 = -2112749568;
	// lis r7,-31841
	ctx.r7.s64 = -2086731776;
	// stw r6,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r6.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r5,r9,-18748
	ctx.r5.s64 = ctx.r9.s64 + -18748;
	// addi r4,r8,30276
	ctx.r4.s64 = ctx.r8.s64 + 30276;
	// stw r11,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r11.u32);
	// addi r3,r7,-11836
	ctx.r3.s64 = ctx.r7.s64 + -11836;
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
	// li r6,0
	ctx.r6.s64 = 0;
	// bl 0x82ef5ae8
	ctx.lr = 0x8344BEA8;
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

__attribute__((alias("__imp__sub_8344BEBC"))) PPC_WEAK_FUNC(sub_8344BEBC);
PPC_FUNC_IMPL(__imp__sub_8344BEBC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8344BEC0"))) PPC_WEAK_FUNC(sub_8344BEC0);
PPC_FUNC_IMPL(__imp__sub_8344BEC0) {
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
	// lis r10,-31877
	ctx.r10.s64 = -2089091072;
	// lis r9,-31841
	ctx.r9.s64 = -2086731776;
	// addi r6,r10,-9176
	ctx.r6.s64 = ctx.r10.s64 + -9176;
	// lis r8,-32238
	ctx.r8.s64 = -2112749568;
	// lis r7,-31841
	ctx.r7.s64 = -2086731776;
	// stw r6,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r6.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r5,r9,-18748
	ctx.r5.s64 = ctx.r9.s64 + -18748;
	// addi r4,r8,30308
	ctx.r4.s64 = ctx.r8.s64 + 30308;
	// stw r11,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r11.u32);
	// addi r3,r7,-11788
	ctx.r3.s64 = ctx.r7.s64 + -11788;
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
	// li r6,0
	ctx.r6.s64 = 0;
	// bl 0x82ef5ae8
	ctx.lr = 0x8344BF28;
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

__attribute__((alias("__imp__sub_8344BF3C"))) PPC_WEAK_FUNC(sub_8344BF3C);
PPC_FUNC_IMPL(__imp__sub_8344BF3C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8344BF40"))) PPC_WEAK_FUNC(sub_8344BF40);
PPC_FUNC_IMPL(__imp__sub_8344BF40) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31877
	ctx.r11.s64 = -2089091072;
	// lis r10,-31877
	ctx.r10.s64 = -2089091072;
	// lis r9,-31877
	ctx.r9.s64 = -2089091072;
	// lis r8,-31876
	ctx.r8.s64 = -2089025536;
	// lwz r11,-7328(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -7328);
	// addi r7,r8,-31024
	ctx.r7.s64 = ctx.r8.s64 + -31024;
	// lwz r10,-7324(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + -7324);
	// lwz r9,-7320(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + -7320);
	// stw r11,32(r7)
	PPC_STORE_U32(ctx.r7.u32 + 32, ctx.r11.u32);
	// stw r10,56(r7)
	PPC_STORE_U32(ctx.r7.u32 + 56, ctx.r10.u32);
	// stw r9,80(r7)
	PPC_STORE_U32(ctx.r7.u32 + 80, ctx.r9.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8344BF70"))) PPC_WEAK_FUNC(sub_8344BF70);
PPC_FUNC_IMPL(__imp__sub_8344BF70) {
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
	// lis r11,-32238
	ctx.r11.s64 = -2112749568;
	// lis r10,-31876
	ctx.r10.s64 = -2089025536;
	// addi r9,r11,7364
	ctx.r9.s64 = ctx.r11.s64 + 7364;
	// addi r4,r10,-31024
	ctx.r4.s64 = ctx.r10.s64 + -31024;
	// addi r5,r9,60
	ctx.r5.s64 = ctx.r9.s64 + 60;
	// li r3,5
	ctx.r3.s64 = 5;
	// stw r4,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r4.u32);
	// lis r8,-31841
	ctx.r8.s64 = -2086731776;
	// stw r5,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r5.u32);
	// lis r7,-32240
	ctx.r7.s64 = -2112880640;
	// stw r3,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r3.u32);
	// lis r6,-31841
	ctx.r6.s64 = -2086731776;
	// li r10,15
	ctx.r10.s64 = 15;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r5,r8,-18748
	ctx.r5.s64 = ctx.r8.s64 + -18748;
	// stw r10,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r10.u32);
	// addi r4,r7,28240
	ctx.r4.s64 = ctx.r7.s64 + 28240;
	// stw r11,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r11.u32);
	// addi r3,r6,-11740
	ctx.r3.s64 = ctx.r6.s64 + -11740;
	// stw r11,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r11.u32);
	// li r10,3
	ctx.r10.s64 = 3;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// bl 0x82ef5ae8
	ctx.lr = 0x8344BFE0;
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

__attribute__((alias("__imp__sub_8344BFF0"))) PPC_WEAK_FUNC(sub_8344BFF0);
PPC_FUNC_IMPL(__imp__sub_8344BFF0) {
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
	// lis r10,-31877
	ctx.r10.s64 = -2089091072;
	// lis r9,-32238
	ctx.r9.s64 = -2112749568;
	// addi r7,r10,-9152
	ctx.r7.s64 = ctx.r10.s64 + -9152;
	// lis r8,-31841
	ctx.r8.s64 = -2086731776;
	// li r6,2
	ctx.r6.s64 = 2;
	// stw r7,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r7.u32);
	// li r5,3
	ctx.r5.s64 = 3;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r6,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r6.u32);
	// addi r4,r9,30384
	ctx.r4.s64 = ctx.r9.s64 + 30384;
	// stw r5,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r5.u32);
	// addi r3,r8,-11692
	ctx.r3.s64 = ctx.r8.s64 + -11692;
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
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x82ef5ae8
	ctx.lr = 0x8344C054;
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

__attribute__((alias("__imp__sub_8344C064"))) PPC_WEAK_FUNC(sub_8344C064);
PPC_FUNC_IMPL(__imp__sub_8344C064) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8344C068"))) PPC_WEAK_FUNC(sub_8344C068);
PPC_FUNC_IMPL(__imp__sub_8344C068) {
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
	// lis r10,-31877
	ctx.r10.s64 = -2089091072;
	// lis r8,-32240
	ctx.r8.s64 = -2112880640;
	// addi r6,r10,-9080
	ctx.r6.s64 = ctx.r10.s64 + -9080;
	// lis r7,-31841
	ctx.r7.s64 = -2086731776;
	// li r5,3
	ctx.r5.s64 = 3;
	// stw r6,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r6.u32);
	// lis r9,-32238
	ctx.r9.s64 = -2112749568;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r5,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r5.u32);
	// addi r4,r8,28432
	ctx.r4.s64 = ctx.r8.s64 + 28432;
	// addi r3,r7,-11644
	ctx.r3.s64 = ctx.r7.s64 + -11644;
	// stw r11,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r11.u32);
	// li r31,7
	ctx.r31.s64 = 7;
	// stw r11,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r11.u32);
	// addi r9,r9,7512
	ctx.r9.s64 = ctx.r9.s64 + 7512;
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
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x82ef5ae8
	ctx.lr = 0x8344C0D4;
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

__attribute__((alias("__imp__sub_8344C0E8"))) PPC_WEAK_FUNC(sub_8344C0E8);
PPC_FUNC_IMPL(__imp__sub_8344C0E8) {
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
	// lis r10,-32238
	ctx.r10.s64 = -2112749568;
	// lis r9,-31877
	ctx.r9.s64 = -2089091072;
	// addi r5,r10,7532
	ctx.r5.s64 = ctx.r10.s64 + 7532;
	// addi r4,r9,-8912
	ctx.r4.s64 = ctx.r9.s64 + -8912;
	// lis r8,-31841
	ctx.r8.s64 = -2086731776;
	// stw r5,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r5.u32);
	// lis r7,-32238
	ctx.r7.s64 = -2112749568;
	// stw r4,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r4.u32);
	// lis r6,-31841
	ctx.r6.s64 = -2086731776;
	// li r9,2
	ctx.r9.s64 = 2;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r5,r8,-9628
	ctx.r5.s64 = ctx.r8.s64 + -9628;
	// stw r9,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r9.u32);
	// addi r4,r7,30416
	ctx.r4.s64 = ctx.r7.s64 + 30416;
	// stw r11,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r11.u32);
	// addi r3,r6,-11596
	ctx.r3.s64 = ctx.r6.s64 + -11596;
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
	// li r6,0
	ctx.r6.s64 = 0;
	// bl 0x82ef5ae8
	ctx.lr = 0x8344C154;
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

__attribute__((alias("__imp__sub_8344C164"))) PPC_WEAK_FUNC(sub_8344C164);
PPC_FUNC_IMPL(__imp__sub_8344C164) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8344C168"))) PPC_WEAK_FUNC(sub_8344C168);
PPC_FUNC_IMPL(__imp__sub_8344C168) {
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
	// lis r10,-31877
	ctx.r10.s64 = -2089091072;
	// lis r9,-31841
	ctx.r9.s64 = -2086731776;
	// addi r6,r10,-8864
	ctx.r6.s64 = ctx.r10.s64 + -8864;
	// lis r8,-32238
	ctx.r8.s64 = -2112749568;
	// lis r7,-31841
	ctx.r7.s64 = -2086731776;
	// stw r6,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r6.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r5,r9,-18748
	ctx.r5.s64 = ctx.r9.s64 + -18748;
	// addi r4,r8,30440
	ctx.r4.s64 = ctx.r8.s64 + 30440;
	// stw r11,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r11.u32);
	// addi r3,r7,-11548
	ctx.r3.s64 = ctx.r7.s64 + -11548;
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
	// li r6,0
	ctx.r6.s64 = 0;
	// bl 0x82ef5ae8
	ctx.lr = 0x8344C1D0;
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

__attribute__((alias("__imp__sub_8344C1E4"))) PPC_WEAK_FUNC(sub_8344C1E4);
PPC_FUNC_IMPL(__imp__sub_8344C1E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8344C1E8"))) PPC_WEAK_FUNC(sub_8344C1E8);
PPC_FUNC_IMPL(__imp__sub_8344C1E8) {
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
	// lis r11,-32238
	ctx.r11.s64 = -2112749568;
	// lis r10,-31877
	ctx.r10.s64 = -2089091072;
	// addi r9,r11,7552
	ctx.r9.s64 = ctx.r11.s64 + 7552;
	// addi r4,r10,-8832
	ctx.r4.s64 = ctx.r10.s64 + -8832;
	// addi r5,r9,24
	ctx.r5.s64 = ctx.r9.s64 + 24;
	// lis r8,-31841
	ctx.r8.s64 = -2086731776;
	// stw r4,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r4.u32);
	// lis r7,-32238
	ctx.r7.s64 = -2112749568;
	// stw r5,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r5.u32);
	// lis r6,-31841
	ctx.r6.s64 = -2086731776;
	// li r10,5
	ctx.r10.s64 = 5;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r5,r8,-18748
	ctx.r5.s64 = ctx.r8.s64 + -18748;
	// stw r10,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r10.u32);
	// addi r4,r7,30472
	ctx.r4.s64 = ctx.r7.s64 + 30472;
	// stw r11,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r11.u32);
	// addi r3,r6,-11500
	ctx.r3.s64 = ctx.r6.s64 + -11500;
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
	// li r6,0
	ctx.r6.s64 = 0;
	// bl 0x82ef5ae8
	ctx.lr = 0x8344C254;
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

__attribute__((alias("__imp__sub_8344C264"))) PPC_WEAK_FUNC(sub_8344C264);
PPC_FUNC_IMPL(__imp__sub_8344C264) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8344C268"))) PPC_WEAK_FUNC(sub_8344C268);
PPC_FUNC_IMPL(__imp__sub_8344C268) {
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
	// lis r10,-31877
	ctx.r10.s64 = -2089091072;
	// lis r9,-31841
	ctx.r9.s64 = -2086731776;
	// addi r6,r10,-8712
	ctx.r6.s64 = ctx.r10.s64 + -8712;
	// lis r8,-32238
	ctx.r8.s64 = -2112749568;
	// lis r7,-31841
	ctx.r7.s64 = -2086731776;
	// stw r6,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r6.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r5,r9,-11500
	ctx.r5.s64 = ctx.r9.s64 + -11500;
	// addi r4,r8,30496
	ctx.r4.s64 = ctx.r8.s64 + 30496;
	// stw r11,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r11.u32);
	// addi r3,r7,-11452
	ctx.r3.s64 = ctx.r7.s64 + -11452;
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
	// li r6,0
	ctx.r6.s64 = 0;
	// bl 0x82ef5ae8
	ctx.lr = 0x8344C2D0;
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

__attribute__((alias("__imp__sub_8344C2E4"))) PPC_WEAK_FUNC(sub_8344C2E4);
PPC_FUNC_IMPL(__imp__sub_8344C2E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8344C2E8"))) PPC_WEAK_FUNC(sub_8344C2E8);
PPC_FUNC_IMPL(__imp__sub_8344C2E8) {
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
	// lis r10,-31877
	ctx.r10.s64 = -2089091072;
	// lis r9,-31841
	ctx.r9.s64 = -2086731776;
	// addi r6,r10,-8688
	ctx.r6.s64 = ctx.r10.s64 + -8688;
	// lis r8,-32238
	ctx.r8.s64 = -2112749568;
	// lis r7,-31841
	ctx.r7.s64 = -2086731776;
	// stw r6,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r6.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r5,r9,-11500
	ctx.r5.s64 = ctx.r9.s64 + -11500;
	// addi r4,r8,30528
	ctx.r4.s64 = ctx.r8.s64 + 30528;
	// stw r11,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r11.u32);
	// addi r3,r7,-11404
	ctx.r3.s64 = ctx.r7.s64 + -11404;
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
	// li r6,0
	ctx.r6.s64 = 0;
	// bl 0x82ef5ae8
	ctx.lr = 0x8344C350;
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

__attribute__((alias("__imp__sub_8344C364"))) PPC_WEAK_FUNC(sub_8344C364);
PPC_FUNC_IMPL(__imp__sub_8344C364) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8344C368"))) PPC_WEAK_FUNC(sub_8344C368);
PPC_FUNC_IMPL(__imp__sub_8344C368) {
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
	// lis r10,-31877
	ctx.r10.s64 = -2089091072;
	// lis r9,-31841
	ctx.r9.s64 = -2086731776;
	// addi r6,r10,-8640
	ctx.r6.s64 = ctx.r10.s64 + -8640;
	// lis r8,-32238
	ctx.r8.s64 = -2112749568;
	// lis r7,-31841
	ctx.r7.s64 = -2086731776;
	// stw r6,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r6.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r5,r9,-11500
	ctx.r5.s64 = ctx.r9.s64 + -11500;
	// addi r4,r8,30560
	ctx.r4.s64 = ctx.r8.s64 + 30560;
	// stw r11,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r11.u32);
	// addi r3,r7,-11356
	ctx.r3.s64 = ctx.r7.s64 + -11356;
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
	// li r6,0
	ctx.r6.s64 = 0;
	// bl 0x82ef5ae8
	ctx.lr = 0x8344C3D0;
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

__attribute__((alias("__imp__sub_8344C3E4"))) PPC_WEAK_FUNC(sub_8344C3E4);
PPC_FUNC_IMPL(__imp__sub_8344C3E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8344C3E8"))) PPC_WEAK_FUNC(sub_8344C3E8);
PPC_FUNC_IMPL(__imp__sub_8344C3E8) {
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
	// lis r10,-32238
	ctx.r10.s64 = -2112749568;
	// lis r9,-31877
	ctx.r9.s64 = -2089091072;
	// addi r5,r10,7664
	ctx.r5.s64 = ctx.r10.s64 + 7664;
	// addi r4,r9,-8592
	ctx.r4.s64 = ctx.r9.s64 + -8592;
	// li r3,2
	ctx.r3.s64 = 2;
	// stw r5,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r5.u32);
	// lis r8,-31841
	ctx.r8.s64 = -2086731776;
	// stw r4,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r4.u32);
	// lis r7,-32240
	ctx.r7.s64 = -2112880640;
	// stw r3,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r3.u32);
	// lis r6,-31841
	ctx.r6.s64 = -2086731776;
	// li r10,15
	ctx.r10.s64 = 15;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r5,r8,-9676
	ctx.r5.s64 = ctx.r8.s64 + -9676;
	// stw r10,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r10.u32);
	// addi r4,r7,27280
	ctx.r4.s64 = ctx.r7.s64 + 27280;
	// stw r11,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r11.u32);
	// addi r3,r6,-11308
	ctx.r3.s64 = ctx.r6.s64 + -11308;
	// stw r11,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r11.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// bl 0x82ef5ae8
	ctx.lr = 0x8344C458;
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

__attribute__((alias("__imp__sub_8344C468"))) PPC_WEAK_FUNC(sub_8344C468);
PPC_FUNC_IMPL(__imp__sub_8344C468) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31877
	ctx.r11.s64 = -2089091072;
	// lis r10,-31876
	ctx.r10.s64 = -2089025536;
	// addi r9,r10,-30664
	ctx.r9.s64 = ctx.r10.s64 + -30664;
	// lwz r11,-8836(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -8836);
	// stw r11,176(r9)
	PPC_STORE_U32(ctx.r9.u32 + 176, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8344C480"))) PPC_WEAK_FUNC(sub_8344C480);
PPC_FUNC_IMPL(__imp__sub_8344C480) {
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
	// lis r11,-32238
	ctx.r11.s64 = -2112749568;
	// lis r10,-31876
	ctx.r10.s64 = -2089025536;
	// addi r9,r11,7768
	ctx.r9.s64 = ctx.r11.s64 + 7768;
	// addi r4,r10,-30664
	ctx.r4.s64 = ctx.r10.s64 + -30664;
	// addi r5,r9,24
	ctx.r5.s64 = ctx.r9.s64 + 24;
	// li r3,2
	ctx.r3.s64 = 2;
	// stw r4,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r4.u32);
	// lis r8,-31841
	ctx.r8.s64 = -2086731776;
	// stw r5,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r5.u32);
	// lis r7,-32240
	ctx.r7.s64 = -2112880640;
	// stw r3,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r3.u32);
	// lis r6,-31841
	ctx.r6.s64 = -2086731776;
	// li r10,9
	ctx.r10.s64 = 9;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r5,r8,-11020
	ctx.r5.s64 = ctx.r8.s64 + -11020;
	// stw r10,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r10.u32);
	// addi r4,r7,26360
	ctx.r4.s64 = ctx.r7.s64 + 26360;
	// stw r11,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r11.u32);
	// addi r3,r6,-11260
	ctx.r3.s64 = ctx.r6.s64 + -11260;
	// stw r11,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r11.u32);
	// li r10,1
	ctx.r10.s64 = 1;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// bl 0x82ef5ae8
	ctx.lr = 0x8344C4F0;
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

__attribute__((alias("__imp__sub_8344C500"))) PPC_WEAK_FUNC(sub_8344C500);
PPC_FUNC_IMPL(__imp__sub_8344C500) {
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
	// lis r10,-32238
	ctx.r10.s64 = -2112749568;
	// lis r9,-31877
	ctx.r9.s64 = -2089091072;
	// addi r5,r10,7856
	ctx.r5.s64 = ctx.r10.s64 + 7856;
	// addi r4,r9,-8232
	ctx.r4.s64 = ctx.r9.s64 + -8232;
	// li r3,3
	ctx.r3.s64 = 3;
	// stw r5,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r5.u32);
	// lis r8,-31841
	ctx.r8.s64 = -2086731776;
	// stw r4,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r4.u32);
	// lis r7,-32240
	ctx.r7.s64 = -2112880640;
	// stw r3,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r3.u32);
	// lis r6,-31841
	ctx.r6.s64 = -2086731776;
	// li r10,10
	ctx.r10.s64 = 10;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r5,r8,-10444
	ctx.r5.s64 = ctx.r8.s64 + -10444;
	// stw r10,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r10.u32);
	// addi r4,r7,30988
	ctx.r4.s64 = ctx.r7.s64 + 30988;
	// stw r11,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r11.u32);
	// addi r3,r6,-11212
	ctx.r3.s64 = ctx.r6.s64 + -11212;
	// stw r11,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r11.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// bl 0x82ef5ae8
	ctx.lr = 0x8344C570;
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

__attribute__((alias("__imp__sub_8344C580"))) PPC_WEAK_FUNC(sub_8344C580);
PPC_FUNC_IMPL(__imp__sub_8344C580) {
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
	// lis r10,-32238
	ctx.r10.s64 = -2112749568;
	// lis r9,-31877
	ctx.r9.s64 = -2089091072;
	// addi r5,r10,7904
	ctx.r5.s64 = ctx.r10.s64 + 7904;
	// addi r4,r9,-7992
	ctx.r4.s64 = ctx.r9.s64 + -7992;
	// lis r8,-31841
	ctx.r8.s64 = -2086731776;
	// stw r5,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r5.u32);
	// lis r7,-32240
	ctx.r7.s64 = -2112880640;
	// stw r4,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r4.u32);
	// lis r6,-31841
	ctx.r6.s64 = -2086731776;
	// li r9,5
	ctx.r9.s64 = 5;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r5,r8,-9676
	ctx.r5.s64 = ctx.r8.s64 + -9676;
	// stw r9,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r9.u32);
	// addi r4,r7,30036
	ctx.r4.s64 = ctx.r7.s64 + 30036;
	// stw r11,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r11.u32);
	// addi r3,r6,-11164
	ctx.r3.s64 = ctx.r6.s64 + -11164;
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
	// li r6,0
	ctx.r6.s64 = 0;
	// bl 0x82ef5ae8
	ctx.lr = 0x8344C5EC;
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

__attribute__((alias("__imp__sub_8344C5FC"))) PPC_WEAK_FUNC(sub_8344C5FC);
PPC_FUNC_IMPL(__imp__sub_8344C5FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8344C600"))) PPC_WEAK_FUNC(sub_8344C600);
PPC_FUNC_IMPL(__imp__sub_8344C600) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31877
	ctx.r11.s64 = -2089091072;
	// lis r10,-31876
	ctx.r10.s64 = -2089025536;
	// addi r9,r10,-30448
	ctx.r9.s64 = ctx.r10.s64 + -30448;
	// lwz r11,-7872(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -7872);
	// stw r11,104(r9)
	PPC_STORE_U32(ctx.r9.u32 + 104, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8344C618"))) PPC_WEAK_FUNC(sub_8344C618);
PPC_FUNC_IMPL(__imp__sub_8344C618) {
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
	// lis r11,-32238
	ctx.r11.s64 = -2112749568;
	// lis r10,-31876
	ctx.r10.s64 = -2089025536;
	// addi r9,r11,7984
	ctx.r9.s64 = ctx.r11.s64 + 7984;
	// addi r4,r10,-30448
	ctx.r4.s64 = ctx.r10.s64 + -30448;
	// addi r5,r9,24
	ctx.r5.s64 = ctx.r9.s64 + 24;
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r4,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r4.u32);
	// lis r8,-31841
	ctx.r8.s64 = -2086731776;
	// stw r5,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r5.u32);
	// lis r7,-32240
	ctx.r7.s64 = -2112880640;
	// stw r3,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r3.u32);
	// lis r6,-31841
	ctx.r6.s64 = -2086731776;
	// li r10,6
	ctx.r10.s64 = 6;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r5,r8,-10444
	ctx.r5.s64 = ctx.r8.s64 + -10444;
	// stw r10,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r10.u32);
	// addi r4,r7,30156
	ctx.r4.s64 = ctx.r7.s64 + 30156;
	// stw r11,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r11.u32);
	// addi r3,r6,-11116
	ctx.r3.s64 = ctx.r6.s64 + -11116;
	// stw r11,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r11.u32);
	// li r10,1
	ctx.r10.s64 = 1;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// bl 0x82ef5ae8
	ctx.lr = 0x8344C688;
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

__attribute__((alias("__imp__sub_8344C698"))) PPC_WEAK_FUNC(sub_8344C698);
PPC_FUNC_IMPL(__imp__sub_8344C698) {
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
	// lis r10,-31877
	ctx.r10.s64 = -2089091072;
	// lis r9,-32238
	ctx.r9.s64 = -2112749568;
	// addi r7,r10,-7856
	ctx.r7.s64 = ctx.r10.s64 + -7856;
	// lis r8,-31841
	ctx.r8.s64 = -2086731776;
	// li r6,1
	ctx.r6.s64 = 1;
	// stw r7,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r7.u32);
	// li r5,3
	ctx.r5.s64 = 3;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r6,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r6.u32);
	// addi r4,r9,30596
	ctx.r4.s64 = ctx.r9.s64 + 30596;
	// stw r5,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r5.u32);
	// addi r3,r8,-11068
	ctx.r3.s64 = ctx.r8.s64 + -11068;
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
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x82ef5ae8
	ctx.lr = 0x8344C6FC;
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

__attribute__((alias("__imp__sub_8344C70C"))) PPC_WEAK_FUNC(sub_8344C70C);
PPC_FUNC_IMPL(__imp__sub_8344C70C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8344C710"))) PPC_WEAK_FUNC(sub_8344C710);
PPC_FUNC_IMPL(__imp__sub_8344C710) {
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
	// lis r10,-31877
	ctx.r10.s64 = -2089091072;
	// lis r8,-31841
	ctx.r8.s64 = -2086731776;
	// addi r5,r10,-7784
	ctx.r5.s64 = ctx.r10.s64 + -7784;
	// lis r7,-32240
	ctx.r7.s64 = -2112880640;
	// lis r6,-31841
	ctx.r6.s64 = -2086731776;
	// stw r5,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r5.u32);
	// lis r9,-32238
	ctx.r9.s64 = -2112749568;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r5,r8,-18748
	ctx.r5.s64 = ctx.r8.s64 + -18748;
	// addi r4,r7,28980
	ctx.r4.s64 = ctx.r7.s64 + 28980;
	// stw r11,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r11.u32);
	// addi r3,r6,-11020
	ctx.r3.s64 = ctx.r6.s64 + -11020;
	// stw r11,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r11.u32);
	// li r31,3
	ctx.r31.s64 = 3;
	// stw r11,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r11.u32);
	// addi r9,r9,8248
	ctx.r9.s64 = ctx.r9.s64 + 8248;
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// li r10,3
	ctx.r10.s64 = 3;
	// stw r31,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r31.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// bl 0x82ef5ae8
	ctx.lr = 0x8344C77C;
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

__attribute__((alias("__imp__sub_8344C790"))) PPC_WEAK_FUNC(sub_8344C790);
PPC_FUNC_IMPL(__imp__sub_8344C790) {
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
	// lis r10,-31877
	ctx.r10.s64 = -2089091072;
	// lis r9,-32240
	ctx.r9.s64 = -2112880640;
	// addi r7,r10,-7712
	ctx.r7.s64 = ctx.r10.s64 + -7712;
	// lis r8,-31841
	ctx.r8.s64 = -2086731776;
	// li r6,1
	ctx.r6.s64 = 1;
	// stw r7,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r7.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r4,r9,29320
	ctx.r4.s64 = ctx.r9.s64 + 29320;
	// stw r6,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r6.u32);
	// addi r3,r8,-10972
	ctx.r3.s64 = ctx.r8.s64 + -10972;
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
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x82ef5ae8
	ctx.lr = 0x8344C7F0;
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

__attribute__((alias("__imp__sub_8344C800"))) PPC_WEAK_FUNC(sub_8344C800);
PPC_FUNC_IMPL(__imp__sub_8344C800) {
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
	// lis r10,-31877
	ctx.r10.s64 = -2089091072;
	// lis r9,-32238
	ctx.r9.s64 = -2112749568;
	// addi r7,r10,-7688
	ctx.r7.s64 = ctx.r10.s64 + -7688;
	// lis r8,-31841
	ctx.r8.s64 = -2086731776;
	// li r6,2
	ctx.r6.s64 = 2;
	// stw r7,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r7.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r4,r9,30644
	ctx.r4.s64 = ctx.r9.s64 + 30644;
	// stw r6,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r6.u32);
	// addi r3,r8,-10924
	ctx.r3.s64 = ctx.r8.s64 + -10924;
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
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x82ef5ae8
	ctx.lr = 0x8344C860;
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

__attribute__((alias("__imp__sub_8344C870"))) PPC_WEAK_FUNC(sub_8344C870);
PPC_FUNC_IMPL(__imp__sub_8344C870) {
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
	// lis r10,-31877
	ctx.r10.s64 = -2089091072;
	// lis r9,-32238
	ctx.r9.s64 = -2112749568;
	// addi r7,r10,-7640
	ctx.r7.s64 = ctx.r10.s64 + -7640;
	// lis r8,-31841
	ctx.r8.s64 = -2086731776;
	// li r6,1
	ctx.r6.s64 = 1;
	// stw r7,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r7.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r4,r9,30672
	ctx.r4.s64 = ctx.r9.s64 + 30672;
	// stw r6,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r6.u32);
	// addi r3,r8,-10876
	ctx.r3.s64 = ctx.r8.s64 + -10876;
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
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x82ef5ae8
	ctx.lr = 0x8344C8D0;
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

__attribute__((alias("__imp__sub_8344C8E0"))) PPC_WEAK_FUNC(sub_8344C8E0);
PPC_FUNC_IMPL(__imp__sub_8344C8E0) {
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
	// lis r10,-31877
	ctx.r10.s64 = -2089091072;
	// lis r9,-31841
	ctx.r9.s64 = -2086731776;
	// addi r6,r10,-7616
	ctx.r6.s64 = ctx.r10.s64 + -7616;
	// lis r8,-32238
	ctx.r8.s64 = -2112749568;
	// lis r7,-31841
	ctx.r7.s64 = -2086731776;
	// stw r6,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r6.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r5,r9,-18748
	ctx.r5.s64 = ctx.r9.s64 + -18748;
	// addi r4,r8,30692
	ctx.r4.s64 = ctx.r8.s64 + 30692;
	// stw r11,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r11.u32);
	// addi r3,r7,-10828
	ctx.r3.s64 = ctx.r7.s64 + -10828;
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
	// li r6,0
	ctx.r6.s64 = 0;
	// bl 0x82ef5ae8
	ctx.lr = 0x8344C948;
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

__attribute__((alias("__imp__sub_8344C95C"))) PPC_WEAK_FUNC(sub_8344C95C);
PPC_FUNC_IMPL(__imp__sub_8344C95C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8344C960"))) PPC_WEAK_FUNC(sub_8344C960);
PPC_FUNC_IMPL(__imp__sub_8344C960) {
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
	// lis r10,-31877
	ctx.r10.s64 = -2089091072;
	// lis r9,-31841
	ctx.r9.s64 = -2086731776;
	// addi r6,r10,-7592
	ctx.r6.s64 = ctx.r10.s64 + -7592;
	// lis r8,-32238
	ctx.r8.s64 = -2112749568;
	// lis r7,-31841
	ctx.r7.s64 = -2086731776;
	// stw r6,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r6.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r5,r9,-18748
	ctx.r5.s64 = ctx.r9.s64 + -18748;
	// addi r4,r8,30708
	ctx.r4.s64 = ctx.r8.s64 + 30708;
	// stw r11,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r11.u32);
	// addi r3,r7,-10780
	ctx.r3.s64 = ctx.r7.s64 + -10780;
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
	// li r6,0
	ctx.r6.s64 = 0;
	// bl 0x82ef5ae8
	ctx.lr = 0x8344C9C8;
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

__attribute__((alias("__imp__sub_8344C9DC"))) PPC_WEAK_FUNC(sub_8344C9DC);
PPC_FUNC_IMPL(__imp__sub_8344C9DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8344C9E0"))) PPC_WEAK_FUNC(sub_8344C9E0);
PPC_FUNC_IMPL(__imp__sub_8344C9E0) {
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
	// lis r10,-31877
	ctx.r10.s64 = -2089091072;
	// lis r9,-32238
	ctx.r9.s64 = -2112749568;
	// addi r7,r10,-7568
	ctx.r7.s64 = ctx.r10.s64 + -7568;
	// lis r8,-31841
	ctx.r8.s64 = -2086731776;
	// li r6,3
	ctx.r6.s64 = 3;
	// stw r7,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r7.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r4,r9,30728
	ctx.r4.s64 = ctx.r9.s64 + 30728;
	// stw r6,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r6.u32);
	// addi r3,r8,-10732
	ctx.r3.s64 = ctx.r8.s64 + -10732;
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
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x82ef5ae8
	ctx.lr = 0x8344CA40;
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

__attribute__((alias("__imp__sub_8344CA50"))) PPC_WEAK_FUNC(sub_8344CA50);
PPC_FUNC_IMPL(__imp__sub_8344CA50) {
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
	// lis r10,-31877
	ctx.r10.s64 = -2089091072;
	// lis r9,-32238
	ctx.r9.s64 = -2112749568;
	// addi r7,r10,-7496
	ctx.r7.s64 = ctx.r10.s64 + -7496;
	// lis r8,-31841
	ctx.r8.s64 = -2086731776;
	// li r6,3
	ctx.r6.s64 = 3;
	// stw r7,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r7.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r4,r9,30752
	ctx.r4.s64 = ctx.r9.s64 + 30752;
	// stw r6,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r6.u32);
	// addi r3,r8,-10684
	ctx.r3.s64 = ctx.r8.s64 + -10684;
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
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x82ef5ae8
	ctx.lr = 0x8344CAB0;
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

__attribute__((alias("__imp__sub_8344CAC0"))) PPC_WEAK_FUNC(sub_8344CAC0);
PPC_FUNC_IMPL(__imp__sub_8344CAC0) {
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
	// lis r10,-31877
	ctx.r10.s64 = -2089091072;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r6,r10,-7424
	ctx.r6.s64 = ctx.r10.s64 + -7424;
	// lis r9,-31841
	ctx.r9.s64 = -2086731776;
	// stw r4,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r4.u32);
	// lis r8,-32238
	ctx.r8.s64 = -2112749568;
	// stw r6,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r6.u32);
	// lis r7,-31841
	ctx.r7.s64 = -2086731776;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r5,r9,-18748
	ctx.r5.s64 = ctx.r9.s64 + -18748;
	// addi r4,r8,30776
	ctx.r4.s64 = ctx.r8.s64 + 30776;
	// stw r11,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r11.u32);
	// addi r3,r7,-10636
	ctx.r3.s64 = ctx.r7.s64 + -10636;
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
	// li r6,0
	ctx.r6.s64 = 0;
	// bl 0x82ef5ae8
	ctx.lr = 0x8344CB2C;
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

__attribute__((alias("__imp__sub_8344CB40"))) PPC_WEAK_FUNC(sub_8344CB40);
PPC_FUNC_IMPL(__imp__sub_8344CB40) {
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
	// lis r10,-32238
	ctx.r10.s64 = -2112749568;
	// lis r9,-31877
	ctx.r9.s64 = -2089091072;
	// addi r5,r10,8308
	ctx.r5.s64 = ctx.r10.s64 + 8308;
	// addi r4,r9,-7376
	ctx.r4.s64 = ctx.r9.s64 + -7376;
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r5,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r5.u32);
	// lis r8,-31841
	ctx.r8.s64 = -2086731776;
	// stw r4,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r4.u32);
	// lis r7,-32240
	ctx.r7.s64 = -2112880640;
	// stw r3,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r3.u32);
	// lis r6,-31841
	ctx.r6.s64 = -2086731776;
	// li r10,2
	ctx.r10.s64 = 2;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r5,r8,-9676
	ctx.r5.s64 = ctx.r8.s64 + -9676;
	// stw r10,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r10.u32);
	// addi r4,r7,29680
	ctx.r4.s64 = ctx.r7.s64 + 29680;
	// stw r11,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r11.u32);
	// addi r3,r6,-10588
	ctx.r3.s64 = ctx.r6.s64 + -10588;
	// stw r11,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r11.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// bl 0x82ef5ae8
	ctx.lr = 0x8344CBB0;
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

__attribute__((alias("__imp__sub_8344CBC0"))) PPC_WEAK_FUNC(sub_8344CBC0);
PPC_FUNC_IMPL(__imp__sub_8344CBC0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31877
	ctx.r11.s64 = -2089091072;
	// lis r10,-31877
	ctx.r10.s64 = -2089091072;
	// lis r9,-31877
	ctx.r9.s64 = -2089091072;
	// lis r8,-31876
	ctx.r8.s64 = -2089025536;
	// lwz r11,-7328(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -7328);
	// addi r7,r8,-30304
	ctx.r7.s64 = ctx.r8.s64 + -30304;
	// lwz r10,-7320(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + -7320);
	// lwz r9,-7324(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + -7324);
	// stw r11,80(r7)
	PPC_STORE_U32(ctx.r7.u32 + 80, ctx.r11.u32);
	// stw r10,248(r7)
	PPC_STORE_U32(ctx.r7.u32 + 248, ctx.r10.u32);
	// stw r9,272(r7)
	PPC_STORE_U32(ctx.r7.u32 + 272, ctx.r9.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8344CBF0"))) PPC_WEAK_FUNC(sub_8344CBF0);
PPC_FUNC_IMPL(__imp__sub_8344CBF0) {
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
	// lis r11,-32238
	ctx.r11.s64 = -2112749568;
	// lis r10,-31876
	ctx.r10.s64 = -2089025536;
	// addi r9,r11,8432
	ctx.r9.s64 = ctx.r11.s64 + 8432;
	// addi r4,r10,-30304
	ctx.r4.s64 = ctx.r10.s64 + -30304;
	// addi r5,r9,64
	ctx.r5.s64 = ctx.r9.s64 + 64;
	// li r3,3
	ctx.r3.s64 = 3;
	// stw r4,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r4.u32);
	// lis r8,-31841
	ctx.r8.s64 = -2086731776;
	// stw r5,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r5.u32);
	// lis r7,-32240
	ctx.r7.s64 = -2112880640;
	// stw r3,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r3.u32);
	// lis r6,-31841
	ctx.r6.s64 = -2086731776;
	// li r10,13
	ctx.r10.s64 = 13;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r5,r8,-18748
	ctx.r5.s64 = ctx.r8.s64 + -18748;
	// stw r10,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r10.u32);
	// addi r4,r7,28612
	ctx.r4.s64 = ctx.r7.s64 + 28612;
	// stw r11,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r11.u32);
	// addi r3,r6,-10540
	ctx.r3.s64 = ctx.r6.s64 + -10540;
	// stw r11,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r11.u32);
	// li r10,3
	ctx.r10.s64 = 3;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// bl 0x82ef5ae8
	ctx.lr = 0x8344CC60;
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

__attribute__((alias("__imp__sub_8344CC70"))) PPC_WEAK_FUNC(sub_8344CC70);
PPC_FUNC_IMPL(__imp__sub_8344CC70) {
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
	// lis r10,-32238
	ctx.r10.s64 = -2112749568;
	// lis r9,-31877
	ctx.r9.s64 = -2089091072;
	// addi r5,r10,8564
	ctx.r5.s64 = ctx.r10.s64 + 8564;
	// addi r4,r9,-7316
	ctx.r4.s64 = ctx.r9.s64 + -7316;
	// lis r8,-31841
	ctx.r8.s64 = -2086731776;
	// stw r5,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r5.u32);
	// lis r7,-32238
	ctx.r7.s64 = -2112749568;
	// stw r4,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r4.u32);
	// lis r6,-31841
	ctx.r6.s64 = -2086731776;
	// li r9,2
	ctx.r9.s64 = 2;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r5,r8,-11020
	ctx.r5.s64 = ctx.r8.s64 + -11020;
	// stw r9,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r9.u32);
	// addi r4,r7,30792
	ctx.r4.s64 = ctx.r7.s64 + 30792;
	// stw r11,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r11.u32);
	// addi r3,r6,-10492
	ctx.r3.s64 = ctx.r6.s64 + -10492;
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
	// li r6,0
	ctx.r6.s64 = 0;
	// bl 0x82ef5ae8
	ctx.lr = 0x8344CCDC;
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

__attribute__((alias("__imp__sub_8344CCEC"))) PPC_WEAK_FUNC(sub_8344CCEC);
PPC_FUNC_IMPL(__imp__sub_8344CCEC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8344CCF0"))) PPC_WEAK_FUNC(sub_8344CCF0);
PPC_FUNC_IMPL(__imp__sub_8344CCF0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31877
	ctx.r11.s64 = -2089091072;
	// lis r10,-31876
	ctx.r10.s64 = -2089025536;
	// addi r9,r10,-29992
	ctx.r9.s64 = ctx.r10.s64 + -29992;
	// lwz r11,-7260(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -7260);
	// stw r11,104(r9)
	PPC_STORE_U32(ctx.r9.u32 + 104, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8344CD08"))) PPC_WEAK_FUNC(sub_8344CD08);
PPC_FUNC_IMPL(__imp__sub_8344CD08) {
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
	// lis r11,-32238
	ctx.r11.s64 = -2112749568;
	// lis r10,-31876
	ctx.r10.s64 = -2089025536;
	// addi r9,r11,8728
	ctx.r9.s64 = ctx.r11.s64 + 8728;
	// addi r4,r10,-29992
	ctx.r4.s64 = ctx.r10.s64 + -29992;
	// addi r5,r9,60
	ctx.r5.s64 = ctx.r9.s64 + 60;
	// li r3,2
	ctx.r3.s64 = 2;
	// stw r4,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r4.u32);
	// lis r8,-31841
	ctx.r8.s64 = -2086731776;
	// stw r5,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r5.u32);
	// lis r7,-32240
	ctx.r7.s64 = -2112880640;
	// stw r3,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r3.u32);
	// lis r6,-31841
	ctx.r6.s64 = -2086731776;
	// li r10,7
	ctx.r10.s64 = 7;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r5,r8,-18748
	ctx.r5.s64 = ctx.r8.s64 + -18748;
	// stw r10,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r10.u32);
	// addi r4,r7,29008
	ctx.r4.s64 = ctx.r7.s64 + 29008;
	// stw r11,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r11.u32);
	// addi r3,r6,-10444
	ctx.r3.s64 = ctx.r6.s64 + -10444;
	// stw r11,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r11.u32);
	// li r10,3
	ctx.r10.s64 = 3;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// bl 0x82ef5ae8
	ctx.lr = 0x8344CD78;
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

__attribute__((alias("__imp__sub_8344CD88"))) PPC_WEAK_FUNC(sub_8344CD88);
PPC_FUNC_IMPL(__imp__sub_8344CD88) {
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
	// lis r10,-31841
	ctx.r10.s64 = -2086731776;
	// lis r9,-32238
	ctx.r9.s64 = -2112749568;
	// lis r8,-31841
	ctx.r8.s64 = -2086731776;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r5,r10,-11020
	ctx.r5.s64 = ctx.r10.s64 + -11020;
	// addi r4,r9,30820
	ctx.r4.s64 = ctx.r9.s64 + 30820;
	// stw r11,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r11.u32);
	// addi r3,r8,-10396
	ctx.r3.s64 = ctx.r8.s64 + -10396;
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
	// li r6,0
	ctx.r6.s64 = 0;
	// bl 0x82ef5ae8
	ctx.lr = 0x8344CDE0;
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

__attribute__((alias("__imp__sub_8344CDF0"))) PPC_WEAK_FUNC(sub_8344CDF0);
PPC_FUNC_IMPL(__imp__sub_8344CDF0) {
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
	// lis r10,-31877
	ctx.r10.s64 = -2089091072;
	// lis r9,-32238
	ctx.r9.s64 = -2112749568;
	// addi r7,r10,-7248
	ctx.r7.s64 = ctx.r10.s64 + -7248;
	// lis r8,-31841
	ctx.r8.s64 = -2086731776;
	// li r6,1
	ctx.r6.s64 = 1;
	// stw r7,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r7.u32);
	// li r5,3
	ctx.r5.s64 = 3;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r6,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r6.u32);
	// addi r4,r9,30848
	ctx.r4.s64 = ctx.r9.s64 + 30848;
	// stw r5,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r5.u32);
	// addi r3,r8,-10348
	ctx.r3.s64 = ctx.r8.s64 + -10348;
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
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x82ef5ae8
	ctx.lr = 0x8344CE54;
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

__attribute__((alias("__imp__sub_8344CE64"))) PPC_WEAK_FUNC(sub_8344CE64);
PPC_FUNC_IMPL(__imp__sub_8344CE64) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8344CE68"))) PPC_WEAK_FUNC(sub_8344CE68);
PPC_FUNC_IMPL(__imp__sub_8344CE68) {
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
	// lis r10,-31877
	ctx.r10.s64 = -2089091072;
	// lis r9,-32238
	ctx.r9.s64 = -2112749568;
	// addi r7,r10,-7176
	ctx.r7.s64 = ctx.r10.s64 + -7176;
	// lis r8,-31841
	ctx.r8.s64 = -2086731776;
	// li r6,2
	ctx.r6.s64 = 2;
	// stw r7,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r7.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r4,r9,30896
	ctx.r4.s64 = ctx.r9.s64 + 30896;
	// stw r6,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r6.u32);
	// addi r3,r8,-10300
	ctx.r3.s64 = ctx.r8.s64 + -10300;
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
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x82ef5ae8
	ctx.lr = 0x8344CEC8;
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

__attribute__((alias("__imp__sub_8344CED8"))) PPC_WEAK_FUNC(sub_8344CED8);
PPC_FUNC_IMPL(__imp__sub_8344CED8) {
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
	// lis r10,-31877
	ctx.r10.s64 = -2089091072;
	// lis r9,-31841
	ctx.r9.s64 = -2086731776;
	// addi r6,r10,-7128
	ctx.r6.s64 = ctx.r10.s64 + -7128;
	// lis r8,-32238
	ctx.r8.s64 = -2112749568;
	// lis r7,-31841
	ctx.r7.s64 = -2086731776;
	// stw r6,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r6.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r5,r9,-18748
	ctx.r5.s64 = ctx.r9.s64 + -18748;
	// addi r4,r8,30928
	ctx.r4.s64 = ctx.r8.s64 + 30928;
	// stw r11,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r11.u32);
	// addi r3,r7,-10252
	ctx.r3.s64 = ctx.r7.s64 + -10252;
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
	// li r6,0
	ctx.r6.s64 = 0;
	// bl 0x82ef5ae8
	ctx.lr = 0x8344CF40;
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

__attribute__((alias("__imp__sub_8344CF54"))) PPC_WEAK_FUNC(sub_8344CF54);
PPC_FUNC_IMPL(__imp__sub_8344CF54) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8344CF58"))) PPC_WEAK_FUNC(sub_8344CF58);
PPC_FUNC_IMPL(__imp__sub_8344CF58) {
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
	// lis r10,-31877
	ctx.r10.s64 = -2089091072;
	// li r4,5
	ctx.r4.s64 = 5;
	// addi r5,r10,-7104
	ctx.r5.s64 = ctx.r10.s64 + -7104;
	// lis r8,-31841
	ctx.r8.s64 = -2086731776;
	// stw r4,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r4.u32);
	// lis r7,-32240
	ctx.r7.s64 = -2112880640;
	// stw r5,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r5.u32);
	// lis r6,-31841
	ctx.r6.s64 = -2086731776;
	// li r10,11
	ctx.r10.s64 = 11;
	// lis r9,-32238
	ctx.r9.s64 = -2112749568;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r10,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r10.u32);
	// addi r5,r8,-2236
	ctx.r5.s64 = ctx.r8.s64 + -2236;
	// addi r4,r7,28912
	ctx.r4.s64 = ctx.r7.s64 + 28912;
	// stw r11,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r11.u32);
	// addi r3,r6,-10204
	ctx.r3.s64 = ctx.r6.s64 + -10204;
	// stw r11,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r11.u32);
	// addi r9,r9,8868
	ctx.r9.s64 = ctx.r9.s64 + 8868;
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// li r10,1
	ctx.r10.s64 = 1;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// bl 0x82ef5ae8
	ctx.lr = 0x8344CFC4;
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

__attribute__((alias("__imp__sub_8344CFD4"))) PPC_WEAK_FUNC(sub_8344CFD4);
PPC_FUNC_IMPL(__imp__sub_8344CFD4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8344CFD8"))) PPC_WEAK_FUNC(sub_8344CFD8);
PPC_FUNC_IMPL(__imp__sub_8344CFD8) {
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
	// lis r10,-32238
	ctx.r10.s64 = -2112749568;
	// lis r9,-31877
	ctx.r9.s64 = -2089091072;
	// addi r5,r10,8888
	ctx.r5.s64 = ctx.r10.s64 + 8888;
	// addi r4,r9,-6840
	ctx.r4.s64 = ctx.r9.s64 + -6840;
	// li r3,5
	ctx.r3.s64 = 5;
	// stw r5,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r5.u32);
	// lis r8,-31841
	ctx.r8.s64 = -2086731776;
	// stw r4,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r4.u32);
	// lis r7,-32240
	ctx.r7.s64 = -2112880640;
	// stw r3,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r3.u32);
	// lis r6,-31841
	ctx.r6.s64 = -2086731776;
	// li r10,20
	ctx.r10.s64 = 20;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r5,r8,-18748
	ctx.r5.s64 = ctx.r8.s64 + -18748;
	// stw r10,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r10.u32);
	// addi r4,r7,29404
	ctx.r4.s64 = ctx.r7.s64 + 29404;
	// stw r11,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r11.u32);
	// addi r3,r6,-10156
	ctx.r3.s64 = ctx.r6.s64 + -10156;
	// stw r11,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r11.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// bl 0x82ef5ae8
	ctx.lr = 0x8344D048;
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

__attribute__((alias("__imp__sub_8344D058"))) PPC_WEAK_FUNC(sub_8344D058);
PPC_FUNC_IMPL(__imp__sub_8344D058) {
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
	// lis r10,-32238
	ctx.r10.s64 = -2112749568;
	// lis r9,-31877
	ctx.r9.s64 = -2089091072;
	// addi r5,r10,9124
	ctx.r5.s64 = ctx.r10.s64 + 9124;
	// addi r4,r9,-6360
	ctx.r4.s64 = ctx.r9.s64 + -6360;
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r5,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r5.u32);
	// lis r8,-31841
	ctx.r8.s64 = -2086731776;
	// stw r4,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r4.u32);
	// lis r7,-32240
	ctx.r7.s64 = -2112880640;
	// stw r3,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r3.u32);
	// lis r6,-31841
	ctx.r6.s64 = -2086731776;
	// li r10,5
	ctx.r10.s64 = 5;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r5,r8,-9676
	ctx.r5.s64 = ctx.r8.s64 + -9676;
	// stw r10,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r10.u32);
	// addi r4,r7,27632
	ctx.r4.s64 = ctx.r7.s64 + 27632;
	// stw r11,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r11.u32);
	// addi r3,r6,-10108
	ctx.r3.s64 = ctx.r6.s64 + -10108;
	// stw r11,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r11.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// bl 0x82ef5ae8
	ctx.lr = 0x8344D0C8;
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

__attribute__((alias("__imp__sub_8344D0D8"))) PPC_WEAK_FUNC(sub_8344D0D8);
PPC_FUNC_IMPL(__imp__sub_8344D0D8) {
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
	// lis r10,-31877
	ctx.r10.s64 = -2089091072;
	// lis r9,-31841
	ctx.r9.s64 = -2086731776;
	// addi r6,r10,-6240
	ctx.r6.s64 = ctx.r10.s64 + -6240;
	// lis r8,-32238
	ctx.r8.s64 = -2112749568;
	// lis r7,-31841
	ctx.r7.s64 = -2086731776;
	// stw r6,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r6.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r5,r9,2612
	ctx.r5.s64 = ctx.r9.s64 + 2612;
	// addi r4,r8,30964
	ctx.r4.s64 = ctx.r8.s64 + 30964;
	// stw r11,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r11.u32);
	// addi r3,r7,-10060
	ctx.r3.s64 = ctx.r7.s64 + -10060;
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
	// li r6,0
	ctx.r6.s64 = 0;
	// bl 0x82ef5ae8
	ctx.lr = 0x8344D140;
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

__attribute__((alias("__imp__sub_8344D154"))) PPC_WEAK_FUNC(sub_8344D154);
PPC_FUNC_IMPL(__imp__sub_8344D154) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8344D158"))) PPC_WEAK_FUNC(sub_8344D158);
PPC_FUNC_IMPL(__imp__sub_8344D158) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31877
	ctx.r11.s64 = -2089091072;
	// lis r10,-31876
	ctx.r10.s64 = -2089025536;
	// addi r9,r10,-29824
	ctx.r9.s64 = ctx.r10.s64 + -29824;
	// lwz r11,-7252(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -7252);
	// stw r11,56(r9)
	PPC_STORE_U32(ctx.r9.u32 + 56, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8344D170"))) PPC_WEAK_FUNC(sub_8344D170);
PPC_FUNC_IMPL(__imp__sub_8344D170) {
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
	// lis r10,-31876
	ctx.r10.s64 = -2089025536;
	// lis r9,-32238
	ctx.r9.s64 = -2112749568;
	// addi r7,r10,-29824
	ctx.r7.s64 = ctx.r10.s64 + -29824;
	// lis r8,-31841
	ctx.r8.s64 = -2086731776;
	// li r6,4
	ctx.r6.s64 = 4;
	// stw r7,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r7.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r4,r9,30980
	ctx.r4.s64 = ctx.r9.s64 + 30980;
	// stw r6,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r6.u32);
	// addi r3,r8,-10012
	ctx.r3.s64 = ctx.r8.s64 + -10012;
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
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x82ef5ae8
	ctx.lr = 0x8344D1D0;
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

__attribute__((alias("__imp__sub_8344D1E0"))) PPC_WEAK_FUNC(sub_8344D1E0);
PPC_FUNC_IMPL(__imp__sub_8344D1E0) {
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
	// lis r10,-31877
	ctx.r10.s64 = -2089091072;
	// lis r9,-32238
	ctx.r9.s64 = -2112749568;
	// addi r7,r10,-6216
	ctx.r7.s64 = ctx.r10.s64 + -6216;
	// lis r8,-31841
	ctx.r8.s64 = -2086731776;
	// li r6,1
	ctx.r6.s64 = 1;
	// stw r7,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r7.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r4,r9,31008
	ctx.r4.s64 = ctx.r9.s64 + 31008;
	// stw r6,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r6.u32);
	// addi r3,r8,-9964
	ctx.r3.s64 = ctx.r8.s64 + -9964;
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
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x82ef5ae8
	ctx.lr = 0x8344D240;
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

__attribute__((alias("__imp__sub_8344D250"))) PPC_WEAK_FUNC(sub_8344D250);
PPC_FUNC_IMPL(__imp__sub_8344D250) {
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
	// lis r10,-31877
	ctx.r10.s64 = -2089091072;
	// lis r9,-31841
	ctx.r9.s64 = -2086731776;
	// addi r6,r10,-6192
	ctx.r6.s64 = ctx.r10.s64 + -6192;
	// lis r8,-32238
	ctx.r8.s64 = -2112749568;
	// lis r7,-31841
	ctx.r7.s64 = -2086731776;
	// stw r6,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r6.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r5,r9,-18748
	ctx.r5.s64 = ctx.r9.s64 + -18748;
	// addi r4,r8,31040
	ctx.r4.s64 = ctx.r8.s64 + 31040;
	// stw r11,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r11.u32);
	// addi r3,r7,-9916
	ctx.r3.s64 = ctx.r7.s64 + -9916;
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
	// li r6,0
	ctx.r6.s64 = 0;
	// bl 0x82ef5ae8
	ctx.lr = 0x8344D2B8;
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

__attribute__((alias("__imp__sub_8344D2CC"))) PPC_WEAK_FUNC(sub_8344D2CC);
PPC_FUNC_IMPL(__imp__sub_8344D2CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8344D2D0"))) PPC_WEAK_FUNC(sub_8344D2D0);
PPC_FUNC_IMPL(__imp__sub_8344D2D0) {
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
	// lis r11,-32238
	ctx.r11.s64 = -2112749568;
	// lis r10,-31877
	ctx.r10.s64 = -2089091072;
	// addi r9,r11,9184
	ctx.r9.s64 = ctx.r11.s64 + 9184;
	// addi r4,r10,-6096
	ctx.r4.s64 = ctx.r10.s64 + -6096;
	// addi r5,r9,24
	ctx.r5.s64 = ctx.r9.s64 + 24;
	// lis r8,-31841
	ctx.r8.s64 = -2086731776;
	// stw r4,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r4.u32);
	// lis r7,-32238
	ctx.r7.s64 = -2112749568;
	// stw r5,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r5.u32);
	// lis r6,-31841
	ctx.r6.s64 = -2086731776;
	// li r10,13
	ctx.r10.s64 = 13;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r5,r8,-9676
	ctx.r5.s64 = ctx.r8.s64 + -9676;
	// stw r10,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r10.u32);
	// addi r4,r7,31072
	ctx.r4.s64 = ctx.r7.s64 + 31072;
	// stw r11,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r11.u32);
	// addi r3,r6,-9868
	ctx.r3.s64 = ctx.r6.s64 + -9868;
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
	// li r6,0
	ctx.r6.s64 = 0;
	// bl 0x82ef5ae8
	ctx.lr = 0x8344D33C;
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

__attribute__((alias("__imp__sub_8344D34C"))) PPC_WEAK_FUNC(sub_8344D34C);
PPC_FUNC_IMPL(__imp__sub_8344D34C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8344D350"))) PPC_WEAK_FUNC(sub_8344D350);
PPC_FUNC_IMPL(__imp__sub_8344D350) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31877
	ctx.r11.s64 = -2089091072;
	// lis r10,-31876
	ctx.r10.s64 = -2089025536;
	// addi r9,r10,-29728
	ctx.r9.s64 = ctx.r10.s64 + -29728;
	// lwz r11,-5784(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -5784);
	// stw r11,56(r9)
	PPC_STORE_U32(ctx.r9.u32 + 56, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8344D368"))) PPC_WEAK_FUNC(sub_8344D368);
PPC_FUNC_IMPL(__imp__sub_8344D368) {
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
	// lis r11,-32238
	ctx.r11.s64 = -2112749568;
	// lis r10,-31876
	ctx.r10.s64 = -2089025536;
	// addi r9,r11,9312
	ctx.r9.s64 = ctx.r11.s64 + 9312;
	// addi r5,r10,-29728
	ctx.r5.s64 = ctx.r10.s64 + -29728;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r6,r9,24
	ctx.r6.s64 = ctx.r9.s64 + 24;
	// stw r5,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r5.u32);
	// lis r8,-32240
	ctx.r8.s64 = -2112880640;
	// stw r4,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r4.u32);
	// lis r7,-31841
	ctx.r7.s64 = -2086731776;
	// stw r6,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r6.u32);
	// li r10,12
	ctx.r10.s64 = 12;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r4,r8,30640
	ctx.r4.s64 = ctx.r8.s64 + 30640;
	// stw r10,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r10.u32);
	// addi r3,r7,-9820
	ctx.r3.s64 = ctx.r7.s64 + -9820;
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
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x82ef5ae8
	ctx.lr = 0x8344D3D4;
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

__attribute__((alias("__imp__sub_8344D3E4"))) PPC_WEAK_FUNC(sub_8344D3E4);
PPC_FUNC_IMPL(__imp__sub_8344D3E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8344D3E8"))) PPC_WEAK_FUNC(sub_8344D3E8);
PPC_FUNC_IMPL(__imp__sub_8344D3E8) {
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
	// lis r10,-32238
	ctx.r10.s64 = -2112749568;
	// lis r9,-31877
	ctx.r9.s64 = -2089091072;
	// addi r5,r10,9440
	ctx.r5.s64 = ctx.r10.s64 + 9440;
	// addi r4,r9,-5776
	ctx.r4.s64 = ctx.r9.s64 + -5776;
	// li r3,2
	ctx.r3.s64 = 2;
	// stw r5,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r5.u32);
	// lis r8,-31841
	ctx.r8.s64 = -2086731776;
	// stw r4,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r4.u32);
	// lis r7,-32240
	ctx.r7.s64 = -2112880640;
	// stw r3,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r3.u32);
	// lis r6,-31841
	ctx.r6.s64 = -2086731776;
	// li r10,3
	ctx.r10.s64 = 3;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r5,r8,-10444
	ctx.r5.s64 = ctx.r8.s64 + -10444;
	// stw r10,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r10.u32);
	// addi r4,r7,30328
	ctx.r4.s64 = ctx.r7.s64 + 30328;
	// stw r11,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r11.u32);
	// addi r3,r6,-9772
	ctx.r3.s64 = ctx.r6.s64 + -9772;
	// stw r11,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r11.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// bl 0x82ef5ae8
	ctx.lr = 0x8344D458;
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

__attribute__((alias("__imp__sub_8344D468"))) PPC_WEAK_FUNC(sub_8344D468);
PPC_FUNC_IMPL(__imp__sub_8344D468) {
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
	// lis r10,-32238
	ctx.r10.s64 = -2112749568;
	// lis r9,-31877
	ctx.r9.s64 = -2089091072;
	// addi r5,r10,9456
	ctx.r5.s64 = ctx.r10.s64 + 9456;
	// addi r4,r9,-5704
	ctx.r4.s64 = ctx.r9.s64 + -5704;
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r5,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r5.u32);
	// lis r8,-31841
	ctx.r8.s64 = -2086731776;
	// stw r4,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r4.u32);
	// lis r7,-32240
	ctx.r7.s64 = -2112880640;
	// stw r3,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r3.u32);
	// lis r6,-31841
	ctx.r6.s64 = -2086731776;
	// li r10,5
	ctx.r10.s64 = 5;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r5,r8,1844
	ctx.r5.s64 = ctx.r8.s64 + 1844;
	// stw r10,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r10.u32);
	// addi r4,r7,29984
	ctx.r4.s64 = ctx.r7.s64 + 29984;
	// stw r11,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r11.u32);
	// addi r3,r6,-9724
	ctx.r3.s64 = ctx.r6.s64 + -9724;
	// stw r11,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r11.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// bl 0x82ef5ae8
	ctx.lr = 0x8344D4D8;
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

__attribute__((alias("__imp__sub_8344D4E8"))) PPC_WEAK_FUNC(sub_8344D4E8);
PPC_FUNC_IMPL(__imp__sub_8344D4E8) {
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
	// lis r11,-32238
	ctx.r11.s64 = -2112749568;
	// lis r10,-31877
	ctx.r10.s64 = -2089091072;
	// addi r9,r11,9720
	ctx.r9.s64 = ctx.r11.s64 + 9720;
	// addi r4,r10,-5568
	ctx.r4.s64 = ctx.r10.s64 + -5568;
	// addi r5,r9,80
	ctx.r5.s64 = ctx.r9.s64 + 80;
	// lis r8,-31841
	ctx.r8.s64 = -2086731776;
	// stw r4,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r4.u32);
	// lis r7,-32240
	ctx.r7.s64 = -2112880640;
	// stw r5,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r5.u32);
	// lis r6,-31841
	ctx.r6.s64 = -2086731776;
	// li r10,3
	ctx.r10.s64 = 3;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r5,r8,-18748
	ctx.r5.s64 = ctx.r8.s64 + -18748;
	// stw r10,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r10.u32);
	// addi r4,r7,27984
	ctx.r4.s64 = ctx.r7.s64 + 27984;
	// stw r11,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r11.u32);
	// addi r3,r6,-9676
	ctx.r3.s64 = ctx.r6.s64 + -9676;
	// stw r11,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r11.u32);
	// li r10,4
	ctx.r10.s64 = 4;
	// stw r11,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r11.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// bl 0x82ef5ae8
	ctx.lr = 0x8344D554;
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

__attribute__((alias("__imp__sub_8344D564"))) PPC_WEAK_FUNC(sub_8344D564);
PPC_FUNC_IMPL(__imp__sub_8344D564) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8344D568"))) PPC_WEAK_FUNC(sub_8344D568);
PPC_FUNC_IMPL(__imp__sub_8344D568) {
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
	// lis r10,-31841
	ctx.r10.s64 = -2086731776;
	// lis r9,-32238
	ctx.r9.s64 = -2112749568;
	// lis r8,-31841
	ctx.r8.s64 = -2086731776;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r5,r10,-18748
	ctx.r5.s64 = ctx.r10.s64 + -18748;
	// addi r4,r9,31092
	ctx.r4.s64 = ctx.r9.s64 + 31092;
	// stw r11,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r11.u32);
	// addi r3,r8,-9628
	ctx.r3.s64 = ctx.r8.s64 + -9628;
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
	// li r6,0
	ctx.r6.s64 = 0;
	// bl 0x82ef5ae8
	ctx.lr = 0x8344D5C0;
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

__attribute__((alias("__imp__sub_8344D5D0"))) PPC_WEAK_FUNC(sub_8344D5D0);
PPC_FUNC_IMPL(__imp__sub_8344D5D0) {
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
	// lis r10,-32238
	ctx.r10.s64 = -2112749568;
	// lis r9,-31877
	ctx.r9.s64 = -2089091072;
	// addi r5,r10,9816
	ctx.r5.s64 = ctx.r10.s64 + 9816;
	// addi r4,r9,-5496
	ctx.r4.s64 = ctx.r9.s64 + -5496;
	// lis r8,-31841
	ctx.r8.s64 = -2086731776;
	// stw r5,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r5.u32);
	// lis r7,-32240
	ctx.r7.s64 = -2112880640;
	// stw r4,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r4.u32);
	// lis r6,-31841
	ctx.r6.s64 = -2086731776;
	// li r9,1
	ctx.r9.s64 = 1;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r5,r8,-9676
	ctx.r5.s64 = ctx.r8.s64 + -9676;
	// stw r9,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r9.u32);
	// addi r4,r7,26388
	ctx.r4.s64 = ctx.r7.s64 + 26388;
	// stw r11,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r11.u32);
	// addi r3,r6,-9580
	ctx.r3.s64 = ctx.r6.s64 + -9580;
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
	// li r6,0
	ctx.r6.s64 = 0;
	// bl 0x82ef5ae8
	ctx.lr = 0x8344D63C;
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

__attribute__((alias("__imp__sub_8344D64C"))) PPC_WEAK_FUNC(sub_8344D64C);
PPC_FUNC_IMPL(__imp__sub_8344D64C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8344D650"))) PPC_WEAK_FUNC(sub_8344D650);
PPC_FUNC_IMPL(__imp__sub_8344D650) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31877
	ctx.r11.s64 = -2089091072;
	// lis r10,-31876
	ctx.r10.s64 = -2089025536;
	// addi r9,r10,-29440
	ctx.r9.s64 = ctx.r10.s64 + -29440;
	// lwz r11,-5572(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -5572);
	// stw r11,8(r9)
	PPC_STORE_U32(ctx.r9.u32 + 8, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8344D668"))) PPC_WEAK_FUNC(sub_8344D668);
PPC_FUNC_IMPL(__imp__sub_8344D668) {
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
	// lis r10,-31876
	ctx.r10.s64 = -2089025536;
	// lis r8,-31841
	ctx.r8.s64 = -2086731776;
	// addi r5,r10,-29440
	ctx.r5.s64 = ctx.r10.s64 + -29440;
	// lis r7,-32238
	ctx.r7.s64 = -2112749568;
	// lis r6,-31841
	ctx.r6.s64 = -2086731776;
	// stw r5,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r5.u32);
	// lis r9,-32238
	ctx.r9.s64 = -2112749568;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r5,r8,-18748
	ctx.r5.s64 = ctx.r8.s64 + -18748;
	// addi r4,r7,31120
	ctx.r4.s64 = ctx.r7.s64 + 31120;
	// stw r11,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r11.u32);
	// addi r3,r6,-9532
	ctx.r3.s64 = ctx.r6.s64 + -9532;
	// stw r11,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r11.u32);
	// li r31,2
	ctx.r31.s64 = 2;
	// stw r11,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r11.u32);
	// addi r9,r9,9848
	ctx.r9.s64 = ctx.r9.s64 + 9848;
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
	// li r6,0
	ctx.r6.s64 = 0;
	// bl 0x82ef5ae8
	ctx.lr = 0x8344D6D4;
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

__attribute__((alias("__imp__sub_8344D6E8"))) PPC_WEAK_FUNC(sub_8344D6E8);
PPC_FUNC_IMPL(__imp__sub_8344D6E8) {
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
	// lis r10,-31841
	ctx.r10.s64 = -2086731776;
	// lis r9,-32238
	ctx.r9.s64 = -2112749568;
	// lis r8,-31841
	ctx.r8.s64 = -2086731776;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r5,r10,-18748
	ctx.r5.s64 = ctx.r10.s64 + -18748;
	// addi r4,r9,31140
	ctx.r4.s64 = ctx.r9.s64 + 31140;
	// stw r11,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r11.u32);
	// addi r3,r8,-9484
	ctx.r3.s64 = ctx.r8.s64 + -9484;
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
	// li r6,0
	ctx.r6.s64 = 0;
	// bl 0x82ef5ae8
	ctx.lr = 0x8344D740;
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

__attribute__((alias("__imp__sub_8344D750"))) PPC_WEAK_FUNC(sub_8344D750);
PPC_FUNC_IMPL(__imp__sub_8344D750) {
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
	// lis r10,-31877
	ctx.r10.s64 = -2089091072;
	// li r4,2
	ctx.r4.s64 = 2;
	// addi r6,r10,-5472
	ctx.r6.s64 = ctx.r10.s64 + -5472;
	// lis r9,-31841
	ctx.r9.s64 = -2086731776;
	// stw r4,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r4.u32);
	// lis r8,-32240
	ctx.r8.s64 = -2112880640;
	// stw r6,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r6.u32);
	// lis r7,-31841
	ctx.r7.s64 = -2086731776;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r5,r9,-12460
	ctx.r5.s64 = ctx.r9.s64 + -12460;
	// addi r4,r8,26628
	ctx.r4.s64 = ctx.r8.s64 + 26628;
	// stw r11,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r11.u32);
	// addi r3,r7,-9436
	ctx.r3.s64 = ctx.r7.s64 + -9436;
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
	// li r6,0
	ctx.r6.s64 = 0;
	// bl 0x82ef5ae8
	ctx.lr = 0x8344D7BC;
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

__attribute__((alias("__imp__sub_8344D7D0"))) PPC_WEAK_FUNC(sub_8344D7D0);
PPC_FUNC_IMPL(__imp__sub_8344D7D0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31877
	ctx.r11.s64 = -2089091072;
	// lis r10,-31876
	ctx.r10.s64 = -2089025536;
	// addi r9,r10,-29392
	ctx.r9.s64 = ctx.r10.s64 + -29392;
	// lwz r11,-5400(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -5400);
	// stw r11,8(r9)
	PPC_STORE_U32(ctx.r9.u32 + 8, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8344D7E8"))) PPC_WEAK_FUNC(sub_8344D7E8);
PPC_FUNC_IMPL(__imp__sub_8344D7E8) {
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
	// lis r11,-32238
	ctx.r11.s64 = -2112749568;
	// lis r10,-31876
	ctx.r10.s64 = -2089025536;
	// addi r9,r11,9884
	ctx.r9.s64 = ctx.r11.s64 + 9884;
	// addi r4,r10,-29392
	ctx.r4.s64 = ctx.r10.s64 + -29392;
	// addi r5,r9,20
	ctx.r5.s64 = ctx.r9.s64 + 20;
	// li r3,3
	ctx.r3.s64 = 3;
	// stw r4,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r4.u32);
	// lis r8,-31841
	ctx.r8.s64 = -2086731776;
	// stw r5,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r5.u32);
	// lis r7,-32240
	ctx.r7.s64 = -2112880640;
	// stw r3,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r3.u32);
	// lis r6,-31841
	ctx.r6.s64 = -2086731776;
	// li r10,6
	ctx.r10.s64 = 6;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r5,r8,-18748
	ctx.r5.s64 = ctx.r8.s64 + -18748;
	// stw r10,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r10.u32);
	// addi r4,r7,27928
	ctx.r4.s64 = ctx.r7.s64 + 27928;
	// stw r11,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r11.u32);
	// addi r3,r6,-9388
	ctx.r3.s64 = ctx.r6.s64 + -9388;
	// stw r11,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r11.u32);
	// li r10,1
	ctx.r10.s64 = 1;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// bl 0x82ef5ae8
	ctx.lr = 0x8344D858;
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

__attribute__((alias("__imp__sub_8344D868"))) PPC_WEAK_FUNC(sub_8344D868);
PPC_FUNC_IMPL(__imp__sub_8344D868) {
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
	// lis r10,-32238
	ctx.r10.s64 = -2112749568;
	// lis r9,-31877
	ctx.r9.s64 = -2089091072;
	// addi r5,r10,9932
	ctx.r5.s64 = ctx.r10.s64 + 9932;
	// addi r4,r9,-5392
	ctx.r4.s64 = ctx.r9.s64 + -5392;
	// li r3,2
	ctx.r3.s64 = 2;
	// stw r5,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r5.u32);
	// lis r8,-31841
	ctx.r8.s64 = -2086731776;
	// stw r4,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r4.u32);
	// lis r7,-32240
	ctx.r7.s64 = -2112880640;
	// stw r3,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r3.u32);
	// lis r6,-31841
	ctx.r6.s64 = -2086731776;
	// li r10,6
	ctx.r10.s64 = 6;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r5,r8,-9676
	ctx.r5.s64 = ctx.r8.s64 + -9676;
	// stw r10,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r10.u32);
	// addi r4,r7,26024
	ctx.r4.s64 = ctx.r7.s64 + 26024;
	// stw r11,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r11.u32);
	// addi r3,r6,-9340
	ctx.r3.s64 = ctx.r6.s64 + -9340;
	// stw r11,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r11.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// bl 0x82ef5ae8
	ctx.lr = 0x8344D8D8;
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

__attribute__((alias("__imp__sub_8344D8E8"))) PPC_WEAK_FUNC(sub_8344D8E8);
PPC_FUNC_IMPL(__imp__sub_8344D8E8) {
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
	// lis r10,-31877
	ctx.r10.s64 = -2089091072;
	// lis r9,-31841
	ctx.r9.s64 = -2086731776;
	// addi r6,r10,-5248
	ctx.r6.s64 = ctx.r10.s64 + -5248;
	// lis r8,-32238
	ctx.r8.s64 = -2112749568;
	// lis r7,-31841
	ctx.r7.s64 = -2086731776;
	// stw r6,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r6.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r5,r9,2612
	ctx.r5.s64 = ctx.r9.s64 + 2612;
	// addi r4,r8,31156
	ctx.r4.s64 = ctx.r8.s64 + 31156;
	// stw r11,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r11.u32);
	// addi r3,r7,-9292
	ctx.r3.s64 = ctx.r7.s64 + -9292;
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
	// li r6,0
	ctx.r6.s64 = 0;
	// bl 0x82ef5ae8
	ctx.lr = 0x8344D950;
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

__attribute__((alias("__imp__sub_8344D964"))) PPC_WEAK_FUNC(sub_8344D964);
PPC_FUNC_IMPL(__imp__sub_8344D964) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8344D968"))) PPC_WEAK_FUNC(sub_8344D968);
PPC_FUNC_IMPL(__imp__sub_8344D968) {
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
	// lis r10,-31841
	ctx.r10.s64 = -2086731776;
	// lis r9,-32238
	ctx.r9.s64 = -2112749568;
	// lis r8,-31841
	ctx.r8.s64 = -2086731776;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r5,r10,-11020
	ctx.r5.s64 = ctx.r10.s64 + -11020;
	// addi r4,r9,31172
	ctx.r4.s64 = ctx.r9.s64 + 31172;
	// stw r11,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r11.u32);
	// addi r3,r8,-9244
	ctx.r3.s64 = ctx.r8.s64 + -9244;
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
	// li r6,0
	ctx.r6.s64 = 0;
	// bl 0x82ef5ae8
	ctx.lr = 0x8344D9C0;
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

__attribute__((alias("__imp__sub_8344D9D0"))) PPC_WEAK_FUNC(sub_8344D9D0);
PPC_FUNC_IMPL(__imp__sub_8344D9D0) {
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
	// lis r10,-32238
	ctx.r10.s64 = -2112749568;
	// lis r9,-31877
	ctx.r9.s64 = -2089091072;
	// addi r5,r10,9968
	ctx.r5.s64 = ctx.r10.s64 + 9968;
	// addi r4,r9,-5224
	ctx.r4.s64 = ctx.r9.s64 + -5224;
	// lis r8,-31841
	ctx.r8.s64 = -2086731776;
	// stw r5,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r5.u32);
	// lis r7,-32238
	ctx.r7.s64 = -2112749568;
	// stw r4,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r4.u32);
	// lis r6,-31841
	ctx.r6.s64 = -2086731776;
	// li r9,1
	ctx.r9.s64 = 1;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r5,r8,-9676
	ctx.r5.s64 = ctx.r8.s64 + -9676;
	// stw r9,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r9.u32);
	// addi r4,r7,31196
	ctx.r4.s64 = ctx.r7.s64 + 31196;
	// stw r11,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r11.u32);
	// addi r3,r6,-9196
	ctx.r3.s64 = ctx.r6.s64 + -9196;
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
	// li r6,0
	ctx.r6.s64 = 0;
	// bl 0x82ef5ae8
	ctx.lr = 0x8344DA3C;
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

__attribute__((alias("__imp__sub_8344DA4C"))) PPC_WEAK_FUNC(sub_8344DA4C);
PPC_FUNC_IMPL(__imp__sub_8344DA4C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8344DA50"))) PPC_WEAK_FUNC(sub_8344DA50);
PPC_FUNC_IMPL(__imp__sub_8344DA50) {
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
	// lis r10,-31877
	ctx.r10.s64 = -2089091072;
	// lis r9,-31841
	ctx.r9.s64 = -2086731776;
	// addi r6,r10,-5188
	ctx.r6.s64 = ctx.r10.s64 + -5188;
	// lis r8,-32238
	ctx.r8.s64 = -2112749568;
	// lis r7,-31841
	ctx.r7.s64 = -2086731776;
	// stw r6,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r6.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r5,r9,-18748
	ctx.r5.s64 = ctx.r9.s64 + -18748;
	// addi r4,r8,31220
	ctx.r4.s64 = ctx.r8.s64 + 31220;
	// stw r11,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r11.u32);
	// addi r3,r7,-9148
	ctx.r3.s64 = ctx.r7.s64 + -9148;
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
	// li r6,0
	ctx.r6.s64 = 0;
	// bl 0x82ef5ae8
	ctx.lr = 0x8344DAB8;
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

__attribute__((alias("__imp__sub_8344DACC"))) PPC_WEAK_FUNC(sub_8344DACC);
PPC_FUNC_IMPL(__imp__sub_8344DACC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8344DAD0"))) PPC_WEAK_FUNC(sub_8344DAD0);
PPC_FUNC_IMPL(__imp__sub_8344DAD0) {
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
	// lis r10,-31877
	ctx.r10.s64 = -2089091072;
	// lis r9,-32238
	ctx.r9.s64 = -2112749568;
	// addi r7,r10,-5140
	ctx.r7.s64 = ctx.r10.s64 + -5140;
	// lis r8,-31841
	ctx.r8.s64 = -2086731776;
	// li r6,1
	ctx.r6.s64 = 1;
	// stw r7,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r7.u32);
	// li r5,2
	ctx.r5.s64 = 2;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r6,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r6.u32);
	// addi r4,r9,31272
	ctx.r4.s64 = ctx.r9.s64 + 31272;
	// stw r5,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r5.u32);
	// addi r3,r8,-9100
	ctx.r3.s64 = ctx.r8.s64 + -9100;
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
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x82ef5ae8
	ctx.lr = 0x8344DB34;
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

__attribute__((alias("__imp__sub_8344DB44"))) PPC_WEAK_FUNC(sub_8344DB44);
PPC_FUNC_IMPL(__imp__sub_8344DB44) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8344DB48"))) PPC_WEAK_FUNC(sub_8344DB48);
PPC_FUNC_IMPL(__imp__sub_8344DB48) {
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
	// lis r10,-31877
	ctx.r10.s64 = -2089091072;
	// lis r9,-32238
	ctx.r9.s64 = -2112749568;
	// addi r7,r10,-5088
	ctx.r7.s64 = ctx.r10.s64 + -5088;
	// lis r8,-31841
	ctx.r8.s64 = -2086731776;
	// li r6,3
	ctx.r6.s64 = 3;
	// stw r7,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r7.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r4,r9,31324
	ctx.r4.s64 = ctx.r9.s64 + 31324;
	// stw r6,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r6.u32);
	// addi r3,r8,-9052
	ctx.r3.s64 = ctx.r8.s64 + -9052;
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
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x82ef5ae8
	ctx.lr = 0x8344DBA8;
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

__attribute__((alias("__imp__sub_8344DBB8"))) PPC_WEAK_FUNC(sub_8344DBB8);
PPC_FUNC_IMPL(__imp__sub_8344DBB8) {
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
	// lis r10,-31877
	ctx.r10.s64 = -2089091072;
	// lis r9,-32238
	ctx.r9.s64 = -2112749568;
	// addi r7,r10,-5016
	ctx.r7.s64 = ctx.r10.s64 + -5016;
	// lis r8,-31841
	ctx.r8.s64 = -2086731776;
	// li r6,1
	ctx.r6.s64 = 1;
	// stw r7,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r7.u32);
	// li r5,5
	ctx.r5.s64 = 5;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r6,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r6.u32);
	// addi r4,r9,31384
	ctx.r4.s64 = ctx.r9.s64 + 31384;
	// stw r5,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r5.u32);
	// addi r3,r8,-9004
	ctx.r3.s64 = ctx.r8.s64 + -9004;
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
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x82ef5ae8
	ctx.lr = 0x8344DC1C;
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

__attribute__((alias("__imp__sub_8344DC2C"))) PPC_WEAK_FUNC(sub_8344DC2C);
PPC_FUNC_IMPL(__imp__sub_8344DC2C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8344DC30"))) PPC_WEAK_FUNC(sub_8344DC30);
PPC_FUNC_IMPL(__imp__sub_8344DC30) {
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
	// lis r10,-31877
	ctx.r10.s64 = -2089091072;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r6,r10,-4896
	ctx.r6.s64 = ctx.r10.s64 + -4896;
	// lis r9,-31841
	ctx.r9.s64 = -2086731776;
	// stw r4,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r4.u32);
	// lis r8,-32238
	ctx.r8.s64 = -2112749568;
	// stw r6,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r6.u32);
	// lis r7,-31841
	ctx.r7.s64 = -2086731776;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r5,r9,-18748
	ctx.r5.s64 = ctx.r9.s64 + -18748;
	// addi r4,r8,31440
	ctx.r4.s64 = ctx.r8.s64 + 31440;
	// stw r11,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r11.u32);
	// addi r3,r7,-8956
	ctx.r3.s64 = ctx.r7.s64 + -8956;
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
	// li r6,0
	ctx.r6.s64 = 0;
	// bl 0x82ef5ae8
	ctx.lr = 0x8344DC9C;
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

__attribute__((alias("__imp__sub_8344DCB0"))) PPC_WEAK_FUNC(sub_8344DCB0);
PPC_FUNC_IMPL(__imp__sub_8344DCB0) {
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
	// lis r9,-31877
	ctx.r9.s64 = -2089091072;
	// lis r10,-32238
	ctx.r10.s64 = -2112749568;
	// addi r5,r9,-4848
	ctx.r5.s64 = ctx.r9.s64 + -4848;
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r6,r10,10152
	ctx.r6.s64 = ctx.r10.s64 + 10152;
	// stw r5,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r5.u32);
	// lis r8,-32240
	ctx.r8.s64 = -2112880640;
	// stw r3,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r3.u32);
	// lis r7,-31841
	ctx.r7.s64 = -2086731776;
	// stw r6,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r6.u32);
	// li r9,6
	ctx.r9.s64 = 6;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r4,r8,26296
	ctx.r4.s64 = ctx.r8.s64 + 26296;
	// stw r9,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r9.u32);
	// addi r3,r7,-8908
	ctx.r3.s64 = ctx.r7.s64 + -8908;
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
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x82ef5ae8
	ctx.lr = 0x8344DD1C;
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

__attribute__((alias("__imp__sub_8344DD2C"))) PPC_WEAK_FUNC(sub_8344DD2C);
PPC_FUNC_IMPL(__imp__sub_8344DD2C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8344DD30"))) PPC_WEAK_FUNC(sub_8344DD30);
PPC_FUNC_IMPL(__imp__sub_8344DD30) {
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
	// lis r10,-31841
	ctx.r10.s64 = -2086731776;
	// lis r9,-32240
	ctx.r9.s64 = -2112880640;
	// lis r8,-31841
	ctx.r8.s64 = -2086731776;
	// li r7,1
	ctx.r7.s64 = 1;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r5,r10,-8908
	ctx.r5.s64 = ctx.r10.s64 + -8908;
	// stw r7,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r7.u32);
	// addi r4,r9,26816
	ctx.r4.s64 = ctx.r9.s64 + 26816;
	// stw r11,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r11.u32);
	// addi r3,r8,-8860
	ctx.r3.s64 = ctx.r8.s64 + -8860;
	// stw r11,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r11.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r11,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r11.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// bl 0x82ef5ae8
	ctx.lr = 0x8344DD8C;
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

__attribute__((alias("__imp__sub_8344DD9C"))) PPC_WEAK_FUNC(sub_8344DD9C);
PPC_FUNC_IMPL(__imp__sub_8344DD9C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8344DDA0"))) PPC_WEAK_FUNC(sub_8344DDA0);
PPC_FUNC_IMPL(__imp__sub_8344DDA0) {
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
	// lis r10,-32238
	ctx.r10.s64 = -2112749568;
	// lis r9,-31877
	ctx.r9.s64 = -2089091072;
	// addi r6,r10,10180
	ctx.r6.s64 = ctx.r10.s64 + 10180;
	// addi r5,r9,-4704
	ctx.r5.s64 = ctx.r9.s64 + -4704;
	// lis r8,-32238
	ctx.r8.s64 = -2112749568;
	// stw r6,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r6.u32);
	// lis r7,-31841
	ctx.r7.s64 = -2086731776;
	// stw r5,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r5.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r4,r8,31492
	ctx.r4.s64 = ctx.r8.s64 + 31492;
	// addi r3,r7,-8812
	ctx.r3.s64 = ctx.r7.s64 + -8812;
	// stw r11,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r11.u32);
	// li r31,4
	ctx.r31.s64 = 4;
	// stw r11,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r11.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r11.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r31,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r31.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x82ef5ae8
	ctx.lr = 0x8344DE0C;
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

__attribute__((alias("__imp__sub_8344DE20"))) PPC_WEAK_FUNC(sub_8344DE20);
PPC_FUNC_IMPL(__imp__sub_8344DE20) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31877
	ctx.r11.s64 = -2089091072;
	// lis r10,-31877
	ctx.r10.s64 = -2089091072;
	// lis r9,-31877
	ctx.r9.s64 = -2089091072;
	// lis r8,-31877
	ctx.r8.s64 = -2089091072;
	// lis r7,-31876
	ctx.r7.s64 = -2089025536;
	// lwz r11,-5200(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -5200);
	// lwz r10,-5396(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + -5396);
	// addi r6,r7,-29248
	ctx.r6.s64 = ctx.r7.s64 + -29248;
	// lwz r9,-5196(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + -5196);
	// lwz r8,-5192(r8)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r8.u32 + -5192);
	// stw r11,8(r6)
	PPC_STORE_U32(ctx.r6.u32 + 8, ctx.r11.u32);
	// stw r10,32(r6)
	PPC_STORE_U32(ctx.r6.u32 + 32, ctx.r10.u32);
	// stw r9,80(r6)
	PPC_STORE_U32(ctx.r6.u32 + 80, ctx.r9.u32);
	// stw r8,224(r6)
	PPC_STORE_U32(ctx.r6.u32 + 224, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8344DE5C"))) PPC_WEAK_FUNC(sub_8344DE5C);
PPC_FUNC_IMPL(__imp__sub_8344DE5C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8344DE60"))) PPC_WEAK_FUNC(sub_8344DE60);
PPC_FUNC_IMPL(__imp__sub_8344DE60) {
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
	// lis r11,-32238
	ctx.r11.s64 = -2112749568;
	// lis r10,-31876
	ctx.r10.s64 = -2089025536;
	// addi r9,r11,10072
	ctx.r9.s64 = ctx.r11.s64 + 10072;
	// addi r4,r10,-29248
	ctx.r4.s64 = ctx.r10.s64 + -29248;
	// addi r5,r9,136
	ctx.r5.s64 = ctx.r9.s64 + 136;
	// li r3,4
	ctx.r3.s64 = 4;
	// stw r4,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r4.u32);
	// lis r8,-31841
	ctx.r8.s64 = -2086731776;
	// stw r5,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r5.u32);
	// lis r7,-32240
	ctx.r7.s64 = -2112880640;
	// stw r3,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r3.u32);
	// lis r6,-31841
	ctx.r6.s64 = -2086731776;
	// li r10,23
	ctx.r10.s64 = 23;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r5,r8,-9676
	ctx.r5.s64 = ctx.r8.s64 + -9676;
	// stw r10,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r10.u32);
	// addi r4,r7,25712
	ctx.r4.s64 = ctx.r7.s64 + 25712;
	// stw r11,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r11.u32);
	// addi r3,r6,-8764
	ctx.r3.s64 = ctx.r6.s64 + -8764;
	// stw r11,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r11.u32);
	// li r10,4
	ctx.r10.s64 = 4;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// bl 0x82ef5ae8
	ctx.lr = 0x8344DED0;
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

__attribute__((alias("__imp__sub_8344DEE0"))) PPC_WEAK_FUNC(sub_8344DEE0);
PPC_FUNC_IMPL(__imp__sub_8344DEE0) {
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
	// lis r10,-31877
	ctx.r10.s64 = -2089091072;
	// lis r9,-31841
	ctx.r9.s64 = -2086731776;
	// addi r6,r10,-4608
	ctx.r6.s64 = ctx.r10.s64 + -4608;
	// lis r8,-32238
	ctx.r8.s64 = -2112749568;
	// lis r7,-31841
	ctx.r7.s64 = -2086731776;
	// stw r6,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r6.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r5,r9,-9676
	ctx.r5.s64 = ctx.r9.s64 + -9676;
	// addi r4,r8,31752
	ctx.r4.s64 = ctx.r8.s64 + 31752;
	// stw r11,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r11.u32);
	// addi r3,r7,-8716
	ctx.r3.s64 = ctx.r7.s64 + -8716;
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
	// li r6,0
	ctx.r6.s64 = 0;
	// bl 0x82ef5ae8
	ctx.lr = 0x8344DF48;
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

__attribute__((alias("__imp__sub_8344DF5C"))) PPC_WEAK_FUNC(sub_8344DF5C);
PPC_FUNC_IMPL(__imp__sub_8344DF5C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8344DF60"))) PPC_WEAK_FUNC(sub_8344DF60);
PPC_FUNC_IMPL(__imp__sub_8344DF60) {
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
	// lis r10,-31877
	ctx.r10.s64 = -2089091072;
	// lis r9,-31841
	ctx.r9.s64 = -2086731776;
	// addi r6,r10,-4584
	ctx.r6.s64 = ctx.r10.s64 + -4584;
	// lis r8,-32238
	ctx.r8.s64 = -2112749568;
	// lis r7,-31841
	ctx.r7.s64 = -2086731776;
	// stw r6,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r6.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r5,r9,-7660
	ctx.r5.s64 = ctx.r9.s64 + -7660;
	// addi r4,r8,31792
	ctx.r4.s64 = ctx.r8.s64 + 31792;
	// stw r11,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r11.u32);
	// addi r3,r7,-8668
	ctx.r3.s64 = ctx.r7.s64 + -8668;
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
	// li r6,0
	ctx.r6.s64 = 0;
	// bl 0x82ef5ae8
	ctx.lr = 0x8344DFC8;
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

__attribute__((alias("__imp__sub_8344DFDC"))) PPC_WEAK_FUNC(sub_8344DFDC);
PPC_FUNC_IMPL(__imp__sub_8344DFDC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8344DFE0"))) PPC_WEAK_FUNC(sub_8344DFE0);
PPC_FUNC_IMPL(__imp__sub_8344DFE0) {
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
	// lis r10,-31877
	ctx.r10.s64 = -2089091072;
	// lis r9,-31841
	ctx.r9.s64 = -2086731776;
	// addi r6,r10,-4464
	ctx.r6.s64 = ctx.r10.s64 + -4464;
	// lis r8,-32239
	ctx.r8.s64 = -2112815104;
	// lis r7,-31841
	ctx.r7.s64 = -2086731776;
	// stw r6,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r6.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r5,r9,-6556
	ctx.r5.s64 = ctx.r9.s64 + -6556;
	// addi r4,r8,-21248
	ctx.r4.s64 = ctx.r8.s64 + -21248;
	// stw r11,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r11.u32);
	// addi r3,r7,-8620
	ctx.r3.s64 = ctx.r7.s64 + -8620;
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
	// li r6,0
	ctx.r6.s64 = 0;
	// bl 0x82ef5ae8
	ctx.lr = 0x8344E048;
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

__attribute__((alias("__imp__sub_8344E05C"))) PPC_WEAK_FUNC(sub_8344E05C);
PPC_FUNC_IMPL(__imp__sub_8344E05C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8344E060"))) PPC_WEAK_FUNC(sub_8344E060);
PPC_FUNC_IMPL(__imp__sub_8344E060) {
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
	// lis r10,-31877
	ctx.r10.s64 = -2089091072;
	// lis r9,-32239
	ctx.r9.s64 = -2112815104;
	// addi r7,r10,-4368
	ctx.r7.s64 = ctx.r10.s64 + -4368;
	// lis r8,-31841
	ctx.r8.s64 = -2086731776;
	// li r6,1
	ctx.r6.s64 = 1;
	// stw r7,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r7.u32);
	// li r5,4
	ctx.r5.s64 = 4;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r6,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r6.u32);
	// addi r4,r9,-20176
	ctx.r4.s64 = ctx.r9.s64 + -20176;
	// stw r5,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r5.u32);
	// addi r3,r8,-8572
	ctx.r3.s64 = ctx.r8.s64 + -8572;
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
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x82ef5ae8
	ctx.lr = 0x8344E0C4;
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

__attribute__((alias("__imp__sub_8344E0D4"))) PPC_WEAK_FUNC(sub_8344E0D4);
PPC_FUNC_IMPL(__imp__sub_8344E0D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8344E0D8"))) PPC_WEAK_FUNC(sub_8344E0D8);
PPC_FUNC_IMPL(__imp__sub_8344E0D8) {
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
	// lis r10,-31877
	ctx.r10.s64 = -2089091072;
	// lis r9,-31841
	ctx.r9.s64 = -2086731776;
	// addi r6,r10,-4272
	ctx.r6.s64 = ctx.r10.s64 + -4272;
	// lis r8,-32238
	ctx.r8.s64 = -2112749568;
	// lis r7,-31841
	ctx.r7.s64 = -2086731776;
	// stw r6,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r6.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r5,r9,-7372
	ctx.r5.s64 = ctx.r9.s64 + -7372;
	// addi r4,r8,31828
	ctx.r4.s64 = ctx.r8.s64 + 31828;
	// stw r11,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r11.u32);
	// addi r3,r7,-8524
	ctx.r3.s64 = ctx.r7.s64 + -8524;
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
	// li r8,1
	ctx.r8.s64 = 1;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// bl 0x82ef5ae8
	ctx.lr = 0x8344E140;
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

__attribute__((alias("__imp__sub_8344E154"))) PPC_WEAK_FUNC(sub_8344E154);
PPC_FUNC_IMPL(__imp__sub_8344E154) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8344E158"))) PPC_WEAK_FUNC(sub_8344E158);
PPC_FUNC_IMPL(__imp__sub_8344E158) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31877
	ctx.r11.s64 = -2089091072;
	// lis r10,-31876
	ctx.r10.s64 = -2089025536;
	// addi r9,r10,-28696
	ctx.r9.s64 = ctx.r10.s64 + -28696;
	// lwz r11,-5092(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -5092);
	// stw r11,8(r9)
	PPC_STORE_U32(ctx.r9.u32 + 8, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8344E170"))) PPC_WEAK_FUNC(sub_8344E170);
PPC_FUNC_IMPL(__imp__sub_8344E170) {
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
	// lis r11,-32238
	ctx.r11.s64 = -2112749568;
	// lis r10,-31876
	ctx.r10.s64 = -2089025536;
	// addi r9,r11,10364
	ctx.r9.s64 = ctx.r11.s64 + 10364;
	// addi r4,r10,-28696
	ctx.r4.s64 = ctx.r10.s64 + -28696;
	// addi r5,r9,20
	ctx.r5.s64 = ctx.r9.s64 + 20;
	// lis r8,-31841
	ctx.r8.s64 = -2086731776;
	// stw r4,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r4.u32);
	// lis r7,-32239
	ctx.r7.s64 = -2112815104;
	// stw r5,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r5.u32);
	// lis r6,-31841
	ctx.r6.s64 = -2086731776;
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,1
	ctx.r10.s64 = 1;
	// addi r5,r8,-7756
	ctx.r5.s64 = ctx.r8.s64 + -7756;
	// stw r11,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r11.u32);
	// addi r4,r7,-24812
	ctx.r4.s64 = ctx.r7.s64 + -24812;
	// stw r11,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r11.u32);
	// addi r3,r6,-8476
	ctx.r3.s64 = ctx.r6.s64 + -8476;
	// stw r11,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r11.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// stw r10,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r10.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// bl 0x82ef5ae8
	ctx.lr = 0x8344E1D8;
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

__attribute__((alias("__imp__sub_8344E1E8"))) PPC_WEAK_FUNC(sub_8344E1E8);
PPC_FUNC_IMPL(__imp__sub_8344E1E8) {
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
	// lis r10,-31877
	ctx.r10.s64 = -2089091072;
	// lis r9,-31841
	ctx.r9.s64 = -2086731776;
	// addi r6,r10,-4152
	ctx.r6.s64 = ctx.r10.s64 + -4152;
	// lis r8,-32238
	ctx.r8.s64 = -2112749568;
	// lis r7,-31841
	ctx.r7.s64 = -2086731776;
	// stw r6,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r6.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r5,r9,-18748
	ctx.r5.s64 = ctx.r9.s64 + -18748;
	// addi r4,r8,31848
	ctx.r4.s64 = ctx.r8.s64 + 31848;
	// stw r11,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r11.u32);
	// addi r3,r7,-8428
	ctx.r3.s64 = ctx.r7.s64 + -8428;
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
	// li r8,1
	ctx.r8.s64 = 1;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// bl 0x82ef5ae8
	ctx.lr = 0x8344E250;
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

__attribute__((alias("__imp__sub_8344E264"))) PPC_WEAK_FUNC(sub_8344E264);
PPC_FUNC_IMPL(__imp__sub_8344E264) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8344E268"))) PPC_WEAK_FUNC(sub_8344E268);
PPC_FUNC_IMPL(__imp__sub_8344E268) {
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
	// lis r10,-32238
	ctx.r10.s64 = -2112749568;
	// lis r8,-32238
	ctx.r8.s64 = -2112749568;
	// lis r7,-31841
	ctx.r7.s64 = -2086731776;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r9,r10,10472
	ctx.r9.s64 = ctx.r10.s64 + 10472;
	// addi r4,r8,31880
	ctx.r4.s64 = ctx.r8.s64 + 31880;
	// stw r11,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r11.u32);
	// addi r3,r7,-8380
	ctx.r3.s64 = ctx.r7.s64 + -8380;
	// stw r11,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r11.u32);
	// li r10,3
	ctx.r10.s64 = 3;
	// stw r11,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r11.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r11,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r11.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x82ef5ae8
	ctx.lr = 0x8344E2C0;
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

__attribute__((alias("__imp__sub_8344E2D0"))) PPC_WEAK_FUNC(sub_8344E2D0);
PPC_FUNC_IMPL(__imp__sub_8344E2D0) {
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
	// lis r10,-32238
	ctx.r10.s64 = -2112749568;
	// lis r8,-31841
	ctx.r8.s64 = -2086731776;
	// lis r7,-32239
	ctx.r7.s64 = -2112815104;
	// lis r6,-31841
	ctx.r6.s64 = -2086731776;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r9,r10,10556
	ctx.r9.s64 = ctx.r10.s64 + 10556;
	// addi r5,r8,-18748
	ctx.r5.s64 = ctx.r8.s64 + -18748;
	// stw r11,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r11.u32);
	// addi r4,r7,-21076
	ctx.r4.s64 = ctx.r7.s64 + -21076;
	// stw r11,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r11.u32);
	// addi r3,r6,-8332
	ctx.r3.s64 = ctx.r6.s64 + -8332;
	// stw r11,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r11.u32);
	// li r10,1
	ctx.r10.s64 = 1;
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
	// li r6,0
	ctx.r6.s64 = 0;
	// bl 0x82ef5ae8
	ctx.lr = 0x8344E32C;
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

__attribute__((alias("__imp__sub_8344E33C"))) PPC_WEAK_FUNC(sub_8344E33C);
PPC_FUNC_IMPL(__imp__sub_8344E33C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8344E340"))) PPC_WEAK_FUNC(sub_8344E340);
PPC_FUNC_IMPL(__imp__sub_8344E340) {
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
	// lis r10,-31877
	ctx.r10.s64 = -2089091072;
	// lis r9,-31841
	ctx.r9.s64 = -2086731776;
	// addi r6,r10,-4088
	ctx.r6.s64 = ctx.r10.s64 + -4088;
	// lis r8,-32239
	ctx.r8.s64 = -2112815104;
	// lis r7,-31841
	ctx.r7.s64 = -2086731776;
	// stw r6,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r6.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r5,r9,-7324
	ctx.r5.s64 = ctx.r9.s64 + -7324;
	// addi r4,r8,-25340
	ctx.r4.s64 = ctx.r8.s64 + -25340;
	// stw r11,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r11.u32);
	// addi r3,r7,-8284
	ctx.r3.s64 = ctx.r7.s64 + -8284;
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
	// li r6,0
	ctx.r6.s64 = 0;
	// bl 0x82ef5ae8
	ctx.lr = 0x8344E3A8;
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

__attribute__((alias("__imp__sub_8344E3BC"))) PPC_WEAK_FUNC(sub_8344E3BC);
PPC_FUNC_IMPL(__imp__sub_8344E3BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8344E3C0"))) PPC_WEAK_FUNC(sub_8344E3C0);
PPC_FUNC_IMPL(__imp__sub_8344E3C0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31877
	ctx.r11.s64 = -2089091072;
	// lis r10,-31876
	ctx.r10.s64 = -2089025536;
	// addi r9,r10,-28672
	ctx.r9.s64 = ctx.r10.s64 + -28672;
	// lwz r11,-4064(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -4064);
	// stw r11,104(r9)
	PPC_STORE_U32(ctx.r9.u32 + 104, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8344E3D8"))) PPC_WEAK_FUNC(sub_8344E3D8);
PPC_FUNC_IMPL(__imp__sub_8344E3D8) {
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
	// lis r11,-32238
	ctx.r11.s64 = -2112749568;
	// lis r10,-31876
	ctx.r10.s64 = -2089025536;
	// addi r9,r11,10608
	ctx.r9.s64 = ctx.r11.s64 + 10608;
	// addi r4,r10,-28672
	ctx.r4.s64 = ctx.r10.s64 + -28672;
	// addi r5,r9,20
	ctx.r5.s64 = ctx.r9.s64 + 20;
	// lis r8,-31841
	ctx.r8.s64 = -2086731776;
	// stw r4,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r4.u32);
	// lis r7,-32238
	ctx.r7.s64 = -2112749568;
	// stw r5,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r5.u32);
	// lis r6,-31841
	ctx.r6.s64 = -2086731776;
	// li r10,9
	ctx.r10.s64 = 9;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r5,r8,-7132
	ctx.r5.s64 = ctx.r8.s64 + -7132;
	// stw r10,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r10.u32);
	// addi r4,r7,31972
	ctx.r4.s64 = ctx.r7.s64 + 31972;
	// stw r11,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r11.u32);
	// addi r3,r6,-8236
	ctx.r3.s64 = ctx.r6.s64 + -8236;
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
	// li r6,0
	ctx.r6.s64 = 0;
	// bl 0x82ef5ae8
	ctx.lr = 0x8344E444;
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

__attribute__((alias("__imp__sub_8344E454"))) PPC_WEAK_FUNC(sub_8344E454);
PPC_FUNC_IMPL(__imp__sub_8344E454) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8344E458"))) PPC_WEAK_FUNC(sub_8344E458);
PPC_FUNC_IMPL(__imp__sub_8344E458) {
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
	// lis r10,-31877
	ctx.r10.s64 = -2089091072;
	// lis r9,-31841
	ctx.r9.s64 = -2086731776;
	// addi r6,r10,-4060
	ctx.r6.s64 = ctx.r10.s64 + -4060;
	// lis r8,-32238
	ctx.r8.s64 = -2112749568;
	// lis r7,-31841
	ctx.r7.s64 = -2086731776;
	// stw r6,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r6.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r5,r9,-8236
	ctx.r5.s64 = ctx.r9.s64 + -8236;
	// addi r4,r8,32000
	ctx.r4.s64 = ctx.r8.s64 + 32000;
	// stw r11,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r11.u32);
	// addi r3,r7,-8188
	ctx.r3.s64 = ctx.r7.s64 + -8188;
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
	// li r6,0
	ctx.r6.s64 = 0;
	// bl 0x82ef5ae8
	ctx.lr = 0x8344E4C0;
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

__attribute__((alias("__imp__sub_8344E4D4"))) PPC_WEAK_FUNC(sub_8344E4D4);
PPC_FUNC_IMPL(__imp__sub_8344E4D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8344E4D8"))) PPC_WEAK_FUNC(sub_8344E4D8);
PPC_FUNC_IMPL(__imp__sub_8344E4D8) {
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
	// lis r10,-31877
	ctx.r10.s64 = -2089091072;
	// lis r9,-31841
	ctx.r9.s64 = -2086731776;
	// addi r6,r10,-4012
	ctx.r6.s64 = ctx.r10.s64 + -4012;
	// lis r8,-32239
	ctx.r8.s64 = -2112815104;
	// lis r7,-31841
	ctx.r7.s64 = -2086731776;
	// stw r6,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r6.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r5,r9,-6460
	ctx.r5.s64 = ctx.r9.s64 + -6460;
	// addi r4,r8,-21796
	ctx.r4.s64 = ctx.r8.s64 + -21796;
	// stw r11,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r11.u32);
	// addi r3,r7,-8140
	ctx.r3.s64 = ctx.r7.s64 + -8140;
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
	// li r6,0
	ctx.r6.s64 = 0;
	// bl 0x82ef5ae8
	ctx.lr = 0x8344E540;
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

__attribute__((alias("__imp__sub_8344E554"))) PPC_WEAK_FUNC(sub_8344E554);
PPC_FUNC_IMPL(__imp__sub_8344E554) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8344E558"))) PPC_WEAK_FUNC(sub_8344E558);
PPC_FUNC_IMPL(__imp__sub_8344E558) {
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
	// lis r10,-31877
	ctx.r10.s64 = -2089091072;
	// lis r9,-31841
	ctx.r9.s64 = -2086731776;
	// addi r6,r10,-3984
	ctx.r6.s64 = ctx.r10.s64 + -3984;
	// lis r8,-32239
	ctx.r8.s64 = -2112815104;
	// lis r7,-31841
	ctx.r7.s64 = -2086731776;
	// stw r6,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r6.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r5,r9,-18748
	ctx.r5.s64 = ctx.r9.s64 + -18748;
	// addi r4,r8,-18080
	ctx.r4.s64 = ctx.r8.s64 + -18080;
	// stw r11,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r11.u32);
	// addi r3,r7,-8092
	ctx.r3.s64 = ctx.r7.s64 + -8092;
	// stw r11,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r11.u32);
	// li r31,6
	ctx.r31.s64 = 6;
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
	// li r6,0
	ctx.r6.s64 = 0;
	// bl 0x82ef5ae8
	ctx.lr = 0x8344E5C0;
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

__attribute__((alias("__imp__sub_8344E5D4"))) PPC_WEAK_FUNC(sub_8344E5D4);
PPC_FUNC_IMPL(__imp__sub_8344E5D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8344E5D8"))) PPC_WEAK_FUNC(sub_8344E5D8);
PPC_FUNC_IMPL(__imp__sub_8344E5D8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31877
	ctx.r11.s64 = -2089091072;
	// lis r10,-31877
	ctx.r10.s64 = -2089091072;
	// lis r9,-31876
	ctx.r9.s64 = -2089025536;
	// addi r8,r9,-28456
	ctx.r8.s64 = ctx.r9.s64 + -28456;
	// lwz r11,-3988(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -3988);
	// lwz r10,-3840(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + -3840);
	// stw r11,104(r8)
	PPC_STORE_U32(ctx.r8.u32 + 104, ctx.r11.u32);
	// stw r10,128(r8)
	PPC_STORE_U32(ctx.r8.u32 + 128, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8344E5FC"))) PPC_WEAK_FUNC(sub_8344E5FC);
PPC_FUNC_IMPL(__imp__sub_8344E5FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8344E600"))) PPC_WEAK_FUNC(sub_8344E600);
PPC_FUNC_IMPL(__imp__sub_8344E600) {
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
	// lis r10,-32238
	ctx.r10.s64 = -2112749568;
	// lis r9,-31876
	ctx.r9.s64 = -2089025536;
	// addi r6,r10,10776
	ctx.r6.s64 = ctx.r10.s64 + 10776;
	// addi r5,r9,-28456
	ctx.r5.s64 = ctx.r9.s64 + -28456;
	// lis r8,-32238
	ctx.r8.s64 = -2112749568;
	// stw r6,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r6.u32);
	// lis r7,-31841
	ctx.r7.s64 = -2086731776;
	// stw r5,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r5.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r4,r8,32036
	ctx.r4.s64 = ctx.r8.s64 + 32036;
	// addi r3,r7,-8044
	ctx.r3.s64 = ctx.r7.s64 + -8044;
	// stw r11,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r11.u32);
	// li r31,15
	ctx.r31.s64 = 15;
	// stw r11,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r11.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r11.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r31,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r31.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x82ef5ae8
	ctx.lr = 0x8344E66C;
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

__attribute__((alias("__imp__sub_8344E680"))) PPC_WEAK_FUNC(sub_8344E680);
PPC_FUNC_IMPL(__imp__sub_8344E680) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31877
	ctx.r11.s64 = -2089091072;
	// lis r10,-31876
	ctx.r10.s64 = -2089025536;
	// addi r9,r10,-28096
	ctx.r9.s64 = ctx.r10.s64 + -28096;
	// lwz r11,-4104(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -4104);
	// stw r11,104(r9)
	PPC_STORE_U32(ctx.r9.u32 + 104, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8344E698"))) PPC_WEAK_FUNC(sub_8344E698);
PPC_FUNC_IMPL(__imp__sub_8344E698) {
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
	// lis r11,-32238
	ctx.r11.s64 = -2112749568;
	// lis r10,-31876
	ctx.r10.s64 = -2089025536;
	// addi r9,r11,10732
	ctx.r9.s64 = ctx.r11.s64 + 10732;
	// addi r4,r10,-28096
	ctx.r4.s64 = ctx.r10.s64 + -28096;
	// addi r5,r9,108
	ctx.r5.s64 = ctx.r9.s64 + 108;
	// lis r8,-31841
	ctx.r8.s64 = -2086731776;
	// stw r4,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r4.u32);
	// lis r7,-32238
	ctx.r7.s64 = -2112749568;
	// stw r5,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r5.u32);
	// lis r6,-31841
	ctx.r6.s64 = -2086731776;
	// li r10,7
	ctx.r10.s64 = 7;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r5,r8,-7660
	ctx.r5.s64 = ctx.r8.s64 + -7660;
	// stw r10,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r10.u32);
	// addi r4,r7,32056
	ctx.r4.s64 = ctx.r7.s64 + 32056;
	// stw r11,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r11.u32);
	// addi r3,r6,-7996
	ctx.r3.s64 = ctx.r6.s64 + -7996;
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
	// li r6,0
	ctx.r6.s64 = 0;
	// bl 0x82ef5ae8
	ctx.lr = 0x8344E704;
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

__attribute__((alias("__imp__sub_8344E714"))) PPC_WEAK_FUNC(sub_8344E714);
PPC_FUNC_IMPL(__imp__sub_8344E714) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8344E718"))) PPC_WEAK_FUNC(sub_8344E718);
PPC_FUNC_IMPL(__imp__sub_8344E718) {
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
	// lis r10,-31877
	ctx.r10.s64 = -2089091072;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r6,r10,-3832
	ctx.r6.s64 = ctx.r10.s64 + -3832;
	// lis r9,-31841
	ctx.r9.s64 = -2086731776;
	// stw r4,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r4.u32);
	// lis r8,-32239
	ctx.r8.s64 = -2112815104;
	// stw r6,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r6.u32);
	// lis r7,-31841
	ctx.r7.s64 = -2086731776;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r5,r9,-5452
	ctx.r5.s64 = ctx.r9.s64 + -5452;
	// addi r4,r8,-24292
	ctx.r4.s64 = ctx.r8.s64 + -24292;
	// stw r11,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r11.u32);
	// addi r3,r7,-7948
	ctx.r3.s64 = ctx.r7.s64 + -7948;
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
	// li r6,0
	ctx.r6.s64 = 0;
	// bl 0x82ef5ae8
	ctx.lr = 0x8344E784;
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

__attribute__((alias("__imp__sub_8344E798"))) PPC_WEAK_FUNC(sub_8344E798);
PPC_FUNC_IMPL(__imp__sub_8344E798) {
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
	// lis r10,-31877
	ctx.r10.s64 = -2089091072;
	// li r4,3
	ctx.r4.s64 = 3;
	// addi r6,r10,-3760
	ctx.r6.s64 = ctx.r10.s64 + -3760;
	// lis r9,-31841
	ctx.r9.s64 = -2086731776;
	// stw r4,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r4.u32);
	// lis r8,-32239
	ctx.r8.s64 = -2112815104;
	// stw r6,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r6.u32);
	// lis r7,-31841
	ctx.r7.s64 = -2086731776;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r5,r9,-18748
	ctx.r5.s64 = ctx.r9.s64 + -18748;
	// addi r4,r8,-24996
	ctx.r4.s64 = ctx.r8.s64 + -24996;
	// stw r11,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r11.u32);
	// addi r3,r7,-7900
	ctx.r3.s64 = ctx.r7.s64 + -7900;
	// stw r11,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r11.u32);
	// li r31,8
	ctx.r31.s64 = 8;
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
	// li r6,0
	ctx.r6.s64 = 0;
	// bl 0x82ef5ae8
	ctx.lr = 0x8344E804;
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

__attribute__((alias("__imp__sub_8344E818"))) PPC_WEAK_FUNC(sub_8344E818);
PPC_FUNC_IMPL(__imp__sub_8344E818) {
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
	// lis r10,-31877
	ctx.r10.s64 = -2089091072;
	// li r4,2
	ctx.r4.s64 = 2;
	// addi r6,r10,-3568
	ctx.r6.s64 = ctx.r10.s64 + -3568;
	// lis r9,-31841
	ctx.r9.s64 = -2086731776;
	// stw r4,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r4.u32);
	// lis r8,-32239
	ctx.r8.s64 = -2112815104;
	// stw r6,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r6.u32);
	// lis r7,-31841
	ctx.r7.s64 = -2086731776;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r5,r9,-18748
	ctx.r5.s64 = ctx.r9.s64 + -18748;
	// addi r4,r8,-24036
	ctx.r4.s64 = ctx.r8.s64 + -24036;
	// stw r11,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r11.u32);
	// addi r3,r7,-7852
	ctx.r3.s64 = ctx.r7.s64 + -7852;
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
	// li r6,0
	ctx.r6.s64 = 0;
	// bl 0x82ef5ae8
	ctx.lr = 0x8344E884;
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

__attribute__((alias("__imp__sub_8344E898"))) PPC_WEAK_FUNC(sub_8344E898);
PPC_FUNC_IMPL(__imp__sub_8344E898) {
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
	// lis r10,-31877
	ctx.r10.s64 = -2089091072;
	// lis r9,-31841
	ctx.r9.s64 = -2086731776;
	// addi r6,r10,-3496
	ctx.r6.s64 = ctx.r10.s64 + -3496;
	// lis r8,-32239
	ctx.r8.s64 = -2112815104;
	// lis r7,-31841
	ctx.r7.s64 = -2086731776;
	// stw r6,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r6.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r5,r9,-7420
	ctx.r5.s64 = ctx.r9.s64 + -7420;
	// addi r4,r8,-23076
	ctx.r4.s64 = ctx.r8.s64 + -23076;
	// stw r11,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r11.u32);
	// addi r3,r7,-7804
	ctx.r3.s64 = ctx.r7.s64 + -7804;
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
	// li r6,0
	ctx.r6.s64 = 0;
	// bl 0x82ef5ae8
	ctx.lr = 0x8344E900;
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

__attribute__((alias("__imp__sub_8344E914"))) PPC_WEAK_FUNC(sub_8344E914);
PPC_FUNC_IMPL(__imp__sub_8344E914) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8344E918"))) PPC_WEAK_FUNC(sub_8344E918);
PPC_FUNC_IMPL(__imp__sub_8344E918) {
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
	// lis r10,-31877
	ctx.r10.s64 = -2089091072;
	// lis r9,-31841
	ctx.r9.s64 = -2086731776;
	// addi r6,r10,-3448
	ctx.r6.s64 = ctx.r10.s64 + -3448;
	// lis r8,-32239
	ctx.r8.s64 = -2112815104;
	// lis r7,-31841
	ctx.r7.s64 = -2086731776;
	// stw r6,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r6.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r5,r9,-18748
	ctx.r5.s64 = ctx.r9.s64 + -18748;
	// addi r4,r8,-20188
	ctx.r4.s64 = ctx.r8.s64 + -20188;
	// stw r11,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r11.u32);
	// addi r3,r7,-7756
	ctx.r3.s64 = ctx.r7.s64 + -7756;
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
	// li r6,0
	ctx.r6.s64 = 0;
	// bl 0x82ef5ae8
	ctx.lr = 0x8344E980;
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

__attribute__((alias("__imp__sub_8344E994"))) PPC_WEAK_FUNC(sub_8344E994);
PPC_FUNC_IMPL(__imp__sub_8344E994) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8344E998"))) PPC_WEAK_FUNC(sub_8344E998);
PPC_FUNC_IMPL(__imp__sub_8344E998) {
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
	// lis r10,-32238
	ctx.r10.s64 = -2112749568;
	// lis r9,-31841
	ctx.r9.s64 = -2086731776;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r4,r10,32072
	ctx.r4.s64 = ctx.r10.s64 + 32072;
	// addi r3,r9,-7708
	ctx.r3.s64 = ctx.r9.s64 + -7708;
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
	// li r8,1
	ctx.r8.s64 = 1;
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r11,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r11.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x82ef5ae8
	ctx.lr = 0x8344E9EC;
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

__attribute__((alias("__imp__sub_8344E9FC"))) PPC_WEAK_FUNC(sub_8344E9FC);
PPC_FUNC_IMPL(__imp__sub_8344E9FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8344EA00"))) PPC_WEAK_FUNC(sub_8344EA00);
PPC_FUNC_IMPL(__imp__sub_8344EA00) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31877
	ctx.r11.s64 = -2089091072;
	// lis r10,-31876
	ctx.r10.s64 = -2089025536;
	// addi r9,r10,-27928
	ctx.r9.s64 = ctx.r10.s64 + -27928;
	// lwz r11,-3836(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -3836);
	// stw r11,32(r9)
	PPC_STORE_U32(ctx.r9.u32 + 32, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8344EA18"))) PPC_WEAK_FUNC(sub_8344EA18);
PPC_FUNC_IMPL(__imp__sub_8344EA18) {
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
	// lis r11,-32238
	ctx.r11.s64 = -2112749568;
	// lis r10,-31876
	ctx.r10.s64 = -2089025536;
	// addi r9,r11,10936
	ctx.r9.s64 = ctx.r11.s64 + 10936;
	// addi r4,r10,-27928
	ctx.r4.s64 = ctx.r10.s64 + -27928;
	// addi r5,r9,20
	ctx.r5.s64 = ctx.r9.s64 + 20;
	// lis r8,-31841
	ctx.r8.s64 = -2086731776;
	// stw r4,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r4.u32);
	// lis r7,-32239
	ctx.r7.s64 = -2112815104;
	// stw r5,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r5.u32);
	// lis r6,-31841
	ctx.r6.s64 = -2086731776;
	// li r10,2
	ctx.r10.s64 = 2;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r5,r8,-7756
	ctx.r5.s64 = ctx.r8.s64 + -7756;
	// stw r10,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r10.u32);
	// addi r4,r7,-25284
	ctx.r4.s64 = ctx.r7.s64 + -25284;
	// stw r11,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r11.u32);
	// addi r3,r6,-7660
	ctx.r3.s64 = ctx.r6.s64 + -7660;
	// stw r11,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r11.u32);
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r11,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r11.u32);
	// li r8,1
	ctx.r8.s64 = 1;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// bl 0x82ef5ae8
	ctx.lr = 0x8344EA84;
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

__attribute__((alias("__imp__sub_8344EA94"))) PPC_WEAK_FUNC(sub_8344EA94);
PPC_FUNC_IMPL(__imp__sub_8344EA94) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8344EA98"))) PPC_WEAK_FUNC(sub_8344EA98);
PPC_FUNC_IMPL(__imp__sub_8344EA98) {
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
	// lis r10,-32238
	ctx.r10.s64 = -2112749568;
	// lis r9,-31841
	ctx.r9.s64 = -2086731776;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r4,r10,32100
	ctx.r4.s64 = ctx.r10.s64 + 32100;
	// addi r3,r9,-7612
	ctx.r3.s64 = ctx.r9.s64 + -7612;
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
	// li r8,1
	ctx.r8.s64 = 1;
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r11,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r11.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x82ef5ae8
	ctx.lr = 0x8344EAEC;
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

__attribute__((alias("__imp__sub_8344EAFC"))) PPC_WEAK_FUNC(sub_8344EAFC);
PPC_FUNC_IMPL(__imp__sub_8344EAFC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8344EB00"))) PPC_WEAK_FUNC(sub_8344EB00);
PPC_FUNC_IMPL(__imp__sub_8344EB00) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31877
	ctx.r11.s64 = -2089091072;
	// lis r10,-31877
	ctx.r10.s64 = -2089091072;
	// lis r9,-31876
	ctx.r9.s64 = -2089025536;
	// addi r8,r9,-27880
	ctx.r8.s64 = ctx.r9.s64 + -27880;
	// lwz r11,-3392(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -3392);
	// lwz r10,-3396(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + -3396);
	// stw r11,8(r8)
	PPC_STORE_U32(ctx.r8.u32 + 8, ctx.r11.u32);
	// stw r10,32(r8)
	PPC_STORE_U32(ctx.r8.u32 + 32, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8344EB24"))) PPC_WEAK_FUNC(sub_8344EB24);
PPC_FUNC_IMPL(__imp__sub_8344EB24) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8344EB28"))) PPC_WEAK_FUNC(sub_8344EB28);
PPC_FUNC_IMPL(__imp__sub_8344EB28) {
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
	// lis r10,-31876
	ctx.r10.s64 = -2089025536;
	// lis r9,-32239
	ctx.r9.s64 = -2112815104;
	// addi r7,r10,-27880
	ctx.r7.s64 = ctx.r10.s64 + -27880;
	// lis r8,-31841
	ctx.r8.s64 = -2086731776;
	// li r6,2
	ctx.r6.s64 = 2;
	// stw r7,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r7.u32);
	// li r5,8
	ctx.r5.s64 = 8;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r6,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r6.u32);
	// addi r4,r9,-23884
	ctx.r4.s64 = ctx.r9.s64 + -23884;
	// stw r5,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r5.u32);
	// addi r3,r8,-7564
	ctx.r3.s64 = ctx.r8.s64 + -7564;
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
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x82ef5ae8
	ctx.lr = 0x8344EB8C;
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

__attribute__((alias("__imp__sub_8344EB9C"))) PPC_WEAK_FUNC(sub_8344EB9C);
PPC_FUNC_IMPL(__imp__sub_8344EB9C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8344EBA0"))) PPC_WEAK_FUNC(sub_8344EBA0);
PPC_FUNC_IMPL(__imp__sub_8344EBA0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31877
	ctx.r11.s64 = -2089091072;
	// lis r10,-31876
	ctx.r10.s64 = -2089025536;
	// addi r9,r10,-27688
	ctx.r9.s64 = ctx.r10.s64 + -27688;
	// lwz r11,-3400(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -3400);
	// stw r11,176(r9)
	PPC_STORE_U32(ctx.r9.u32 + 176, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8344EBB8"))) PPC_WEAK_FUNC(sub_8344EBB8);
PPC_FUNC_IMPL(__imp__sub_8344EBB8) {
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
	// lis r10,-32238
	ctx.r10.s64 = -2112749568;
	// lis r9,-31876
	ctx.r9.s64 = -2089025536;
	// addi r5,r10,11116
	ctx.r5.s64 = ctx.r10.s64 + 11116;
	// addi r4,r9,-27688
	ctx.r4.s64 = ctx.r9.s64 + -27688;
	// li r3,3
	ctx.r3.s64 = 3;
	// stw r5,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r5.u32);
	// lis r8,-31841
	ctx.r8.s64 = -2086731776;
	// stw r4,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r4.u32);
	// lis r7,-32239
	ctx.r7.s64 = -2112815104;
	// stw r3,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r3.u32);
	// lis r6,-31841
	ctx.r6.s64 = -2086731776;
	// li r10,11
	ctx.r10.s64 = 11;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r5,r8,-7564
	ctx.r5.s64 = ctx.r8.s64 + -7564;
	// stw r10,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r10.u32);
	// addi r4,r7,-23016
	ctx.r4.s64 = ctx.r7.s64 + -23016;
	// stw r11,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r11.u32);
	// addi r3,r6,-7516
	ctx.r3.s64 = ctx.r6.s64 + -7516;
	// stw r11,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r11.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// bl 0x82ef5ae8
	ctx.lr = 0x8344EC28;
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

__attribute__((alias("__imp__sub_8344EC38"))) PPC_WEAK_FUNC(sub_8344EC38);
PPC_FUNC_IMPL(__imp__sub_8344EC38) {
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
	// lis r10,-31877
	ctx.r10.s64 = -2089091072;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r6,r10,-3384
	ctx.r6.s64 = ctx.r10.s64 + -3384;
	// lis r9,-31841
	ctx.r9.s64 = -2086731776;
	// stw r4,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r4.u32);
	// lis r8,-32239
	ctx.r8.s64 = -2112815104;
	// stw r6,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r6.u32);
	// lis r7,-31841
	ctx.r7.s64 = -2086731776;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r5,r9,-7564
	ctx.r5.s64 = ctx.r9.s64 + -7564;
	// addi r4,r8,-23276
	ctx.r4.s64 = ctx.r8.s64 + -23276;
	// stw r11,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r11.u32);
	// addi r3,r7,-7468
	ctx.r3.s64 = ctx.r7.s64 + -7468;
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
	// li r6,0
	ctx.r6.s64 = 0;
	// bl 0x82ef5ae8
	ctx.lr = 0x8344ECA4;
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

__attribute__((alias("__imp__sub_8344ECB8"))) PPC_WEAK_FUNC(sub_8344ECB8);
PPC_FUNC_IMPL(__imp__sub_8344ECB8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31877
	ctx.r11.s64 = -2089091072;
	// lis r10,-31876
	ctx.r10.s64 = -2089025536;
	// addi r9,r10,-27424
	ctx.r9.s64 = ctx.r10.s64 + -27424;
	// lwz r11,-4104(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -4104);
	// stw r11,200(r9)
	PPC_STORE_U32(ctx.r9.u32 + 200, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8344ECD0"))) PPC_WEAK_FUNC(sub_8344ECD0);
PPC_FUNC_IMPL(__imp__sub_8344ECD0) {
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
	// lis r11,-32238
	ctx.r11.s64 = -2112749568;
	// lis r10,-31876
	ctx.r10.s64 = -2089025536;
	// addi r9,r11,11056
	ctx.r9.s64 = ctx.r11.s64 + 11056;
	// addi r4,r10,-27424
	ctx.r4.s64 = ctx.r10.s64 + -27424;
	// addi r5,r9,108
	ctx.r5.s64 = ctx.r9.s64 + 108;
	// li r3,3
	ctx.r3.s64 = 3;
	// stw r4,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r4.u32);
	// lis r8,-31841
	ctx.r8.s64 = -2086731776;
	// stw r5,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r5.u32);
	// lis r7,-32239
	ctx.r7.s64 = -2112815104;
	// stw r3,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r3.u32);
	// lis r6,-31841
	ctx.r6.s64 = -2086731776;
	// li r10,13
	ctx.r10.s64 = 13;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r5,r8,-7660
	ctx.r5.s64 = ctx.r8.s64 + -7660;
	// stw r10,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r10.u32);
	// addi r4,r7,-24328
	ctx.r4.s64 = ctx.r7.s64 + -24328;
	// stw r11,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r11.u32);
	// addi r3,r6,-7420
	ctx.r3.s64 = ctx.r6.s64 + -7420;
	// stw r11,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r11.u32);
	// li r10,3
	ctx.r10.s64 = 3;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// bl 0x82ef5ae8
	ctx.lr = 0x8344ED40;
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

__attribute__((alias("__imp__sub_8344ED50"))) PPC_WEAK_FUNC(sub_8344ED50);
PPC_FUNC_IMPL(__imp__sub_8344ED50) {
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
	// lis r10,-31877
	ctx.r10.s64 = -2089091072;
	// lis r8,-31841
	ctx.r8.s64 = -2086731776;
	// addi r5,r10,-3312
	ctx.r5.s64 = ctx.r10.s64 + -3312;
	// lis r7,-32239
	ctx.r7.s64 = -2112815104;
	// lis r6,-31841
	ctx.r6.s64 = -2086731776;
	// stw r5,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r5.u32);
	// lis r9,-32238
	ctx.r9.s64 = -2112749568;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r5,r8,-6172
	ctx.r5.s64 = ctx.r8.s64 + -6172;
	// addi r4,r7,-21832
	ctx.r4.s64 = ctx.r7.s64 + -21832;
	// stw r11,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r11.u32);
	// addi r3,r6,-7372
	ctx.r3.s64 = ctx.r6.s64 + -7372;
	// stw r11,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r11.u32);
	// li r31,1
	ctx.r31.s64 = 1;
	// stw r11,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r11.u32);
	// addi r9,r9,11248
	ctx.r9.s64 = ctx.r9.s64 + 11248;
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
	// li r6,0
	ctx.r6.s64 = 0;
	// bl 0x82ef5ae8
	ctx.lr = 0x8344EDBC;
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

__attribute__((alias("__imp__sub_8344EDD0"))) PPC_WEAK_FUNC(sub_8344EDD0);
PPC_FUNC_IMPL(__imp__sub_8344EDD0) {
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
	// lis r10,-31877
	ctx.r10.s64 = -2089091072;
	// lis r9,-31841
	ctx.r9.s64 = -2086731776;
	// addi r6,r10,-3288
	ctx.r6.s64 = ctx.r10.s64 + -3288;
	// lis r8,-32239
	ctx.r8.s64 = -2112815104;
	// lis r7,-31841
	ctx.r7.s64 = -2086731776;
	// stw r6,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r6.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r5,r9,-7372
	ctx.r5.s64 = ctx.r9.s64 + -7372;
	// addi r4,r8,-24488
	ctx.r4.s64 = ctx.r8.s64 + -24488;
	// stw r11,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r11.u32);
	// addi r3,r7,-7324
	ctx.r3.s64 = ctx.r7.s64 + -7324;
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
	// li r6,0
	ctx.r6.s64 = 0;
	// bl 0x82ef5ae8
	ctx.lr = 0x8344EE38;
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

__attribute__((alias("__imp__sub_8344EE4C"))) PPC_WEAK_FUNC(sub_8344EE4C);
PPC_FUNC_IMPL(__imp__sub_8344EE4C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8344EE50"))) PPC_WEAK_FUNC(sub_8344EE50);
PPC_FUNC_IMPL(__imp__sub_8344EE50) {
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
	// lis r10,-31877
	ctx.r10.s64 = -2089091072;
	// lis r9,-31841
	ctx.r9.s64 = -2086731776;
	// addi r6,r10,-3240
	ctx.r6.s64 = ctx.r10.s64 + -3240;
	// lis r8,-32239
	ctx.r8.s64 = -2112815104;
	// lis r7,-31841
	ctx.r7.s64 = -2086731776;
	// stw r6,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r6.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r5,r9,-6940
	ctx.r5.s64 = ctx.r9.s64 + -6940;
	// addi r4,r8,-24052
	ctx.r4.s64 = ctx.r8.s64 + -24052;
	// stw r11,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r11.u32);
	// addi r3,r7,-7276
	ctx.r3.s64 = ctx.r7.s64 + -7276;
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
	// li r6,0
	ctx.r6.s64 = 0;
	// bl 0x82ef5ae8
	ctx.lr = 0x8344EEB8;
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

__attribute__((alias("__imp__sub_8344EECC"))) PPC_WEAK_FUNC(sub_8344EECC);
PPC_FUNC_IMPL(__imp__sub_8344EECC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8344EED0"))) PPC_WEAK_FUNC(sub_8344EED0);
PPC_FUNC_IMPL(__imp__sub_8344EED0) {
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
	// lis r10,-31877
	ctx.r10.s64 = -2089091072;
	// lis r9,-32238
	ctx.r9.s64 = -2112749568;
	// addi r7,r10,-3168
	ctx.r7.s64 = ctx.r10.s64 + -3168;
	// lis r8,-31841
	ctx.r8.s64 = -2086731776;
	// li r6,5
	ctx.r6.s64 = 5;
	// stw r7,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r7.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r4,r9,32132
	ctx.r4.s64 = ctx.r9.s64 + 32132;
	// stw r6,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r6.u32);
	// addi r3,r8,-7228
	ctx.r3.s64 = ctx.r8.s64 + -7228;
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
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x82ef5ae8
	ctx.lr = 0x8344EF30;
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

__attribute__((alias("__imp__sub_8344EF40"))) PPC_WEAK_FUNC(sub_8344EF40);
PPC_FUNC_IMPL(__imp__sub_8344EF40) {
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
	// lis r10,-31841
	ctx.r10.s64 = -2086731776;
	// lis r9,-32238
	ctx.r9.s64 = -2112749568;
	// lis r8,-31841
	ctx.r8.s64 = -2086731776;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r5,r10,-8332
	ctx.r5.s64 = ctx.r10.s64 + -8332;
	// addi r4,r9,32152
	ctx.r4.s64 = ctx.r9.s64 + 32152;
	// stw r11,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r11.u32);
	// addi r3,r8,-7180
	ctx.r3.s64 = ctx.r8.s64 + -7180;
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
	// li r6,0
	ctx.r6.s64 = 0;
	// bl 0x82ef5ae8
	ctx.lr = 0x8344EF98;
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

__attribute__((alias("__imp__sub_8344EFA8"))) PPC_WEAK_FUNC(sub_8344EFA8);
PPC_FUNC_IMPL(__imp__sub_8344EFA8) {
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
	// lis r10,-31841
	ctx.r10.s64 = -2086731776;
	// lis r9,-32238
	ctx.r9.s64 = -2112749568;
	// lis r8,-31841
	ctx.r8.s64 = -2086731776;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r5,r10,-7756
	ctx.r5.s64 = ctx.r10.s64 + -7756;
	// addi r4,r9,32180
	ctx.r4.s64 = ctx.r9.s64 + 32180;
	// stw r11,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r11.u32);
	// addi r3,r8,-7132
	ctx.r3.s64 = ctx.r8.s64 + -7132;
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
	// li r6,0
	ctx.r6.s64 = 0;
	// bl 0x82ef5ae8
	ctx.lr = 0x8344F000;
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

__attribute__((alias("__imp__sub_8344F010"))) PPC_WEAK_FUNC(sub_8344F010);
PPC_FUNC_IMPL(__imp__sub_8344F010) {
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
	// lis r10,-31877
	ctx.r10.s64 = -2089091072;
	// lis r9,-31841
	ctx.r9.s64 = -2086731776;
	// addi r6,r10,-3048
	ctx.r6.s64 = ctx.r10.s64 + -3048;
	// lis r8,-32238
	ctx.r8.s64 = -2112749568;
	// lis r7,-31841
	ctx.r7.s64 = -2086731776;
	// stw r6,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r6.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r5,r9,-18748
	ctx.r5.s64 = ctx.r9.s64 + -18748;
	// addi r4,r8,32200
	ctx.r4.s64 = ctx.r8.s64 + 32200;
	// stw r11,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r11.u32);
	// addi r3,r7,-7084
	ctx.r3.s64 = ctx.r7.s64 + -7084;
	// stw r11,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r11.u32);
	// li r31,6
	ctx.r31.s64 = 6;
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
	// li r6,0
	ctx.r6.s64 = 0;
	// bl 0x82ef5ae8
	ctx.lr = 0x8344F078;
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

__attribute__((alias("__imp__sub_8344F08C"))) PPC_WEAK_FUNC(sub_8344F08C);
PPC_FUNC_IMPL(__imp__sub_8344F08C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8344F090"))) PPC_WEAK_FUNC(sub_8344F090);
PPC_FUNC_IMPL(__imp__sub_8344F090) {
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
	// lis r10,-31877
	ctx.r10.s64 = -2089091072;
	// lis r9,-31841
	ctx.r9.s64 = -2086731776;
	// addi r6,r10,-2904
	ctx.r6.s64 = ctx.r10.s64 + -2904;
	// lis r8,-32238
	ctx.r8.s64 = -2112749568;
	// lis r7,-31841
	ctx.r7.s64 = -2086731776;
	// stw r6,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r6.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r5,r9,-7996
	ctx.r5.s64 = ctx.r9.s64 + -7996;
	// addi r4,r8,32236
	ctx.r4.s64 = ctx.r8.s64 + 32236;
	// stw r11,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r11.u32);
	// addi r3,r7,-7036
	ctx.r3.s64 = ctx.r7.s64 + -7036;
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
	// li r6,0
	ctx.r6.s64 = 0;
	// bl 0x82ef5ae8
	ctx.lr = 0x8344F0F8;
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

__attribute__((alias("__imp__sub_8344F10C"))) PPC_WEAK_FUNC(sub_8344F10C);
PPC_FUNC_IMPL(__imp__sub_8344F10C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8344F110"))) PPC_WEAK_FUNC(sub_8344F110);
PPC_FUNC_IMPL(__imp__sub_8344F110) {
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
	// lis r10,-32238
	ctx.r10.s64 = -2112749568;
	// lis r9,-31841
	ctx.r9.s64 = -2086731776;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r4,r10,32256
	ctx.r4.s64 = ctx.r10.s64 + 32256;
	// addi r3,r9,-6988
	ctx.r3.s64 = ctx.r9.s64 + -6988;
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
	// li r8,1
	ctx.r8.s64 = 1;
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r11,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r11.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x82ef5ae8
	ctx.lr = 0x8344F164;
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

__attribute__((alias("__imp__sub_8344F174"))) PPC_WEAK_FUNC(sub_8344F174);
PPC_FUNC_IMPL(__imp__sub_8344F174) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8344F178"))) PPC_WEAK_FUNC(sub_8344F178);
PPC_FUNC_IMPL(__imp__sub_8344F178) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31877
	ctx.r11.s64 = -2089091072;
	// lis r10,-31876
	ctx.r10.s64 = -2089025536;
	// addi r9,r10,-27112
	ctx.r9.s64 = ctx.r10.s64 + -27112;
	// lwz r11,-2880(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -2880);
	// stw r11,32(r9)
	PPC_STORE_U32(ctx.r9.u32 + 32, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8344F190"))) PPC_WEAK_FUNC(sub_8344F190);
PPC_FUNC_IMPL(__imp__sub_8344F190) {
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
	// lis r10,-31876
	ctx.r10.s64 = -2089025536;
	// lis r8,-31841
	ctx.r8.s64 = -2086731776;
	// addi r5,r10,-27112
	ctx.r5.s64 = ctx.r10.s64 + -27112;
	// lis r7,-32239
	ctx.r7.s64 = -2112815104;
	// lis r6,-31841
	ctx.r6.s64 = -2086731776;
	// stw r5,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r5.u32);
	// lis r9,-32238
	ctx.r9.s64 = -2112749568;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r5,r8,-18748
	ctx.r5.s64 = ctx.r8.s64 + -18748;
	// addi r4,r7,-19560
	ctx.r4.s64 = ctx.r7.s64 + -19560;
	// stw r11,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r11.u32);
	// addi r3,r6,-6940
	ctx.r3.s64 = ctx.r6.s64 + -6940;
	// stw r11,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r11.u32);
	// li r31,3
	ctx.r31.s64 = 3;
	// stw r11,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r11.u32);
	// addi r9,r9,11324
	ctx.r9.s64 = ctx.r9.s64 + 11324;
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r31,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r31.u32);
	// li r8,4
	ctx.r8.s64 = 4;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// bl 0x82ef5ae8
	ctx.lr = 0x8344F1FC;
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

__attribute__((alias("__imp__sub_8344F210"))) PPC_WEAK_FUNC(sub_8344F210);
PPC_FUNC_IMPL(__imp__sub_8344F210) {
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
	// lis r11,-32238
	ctx.r11.s64 = -2112749568;
	// lis r10,-31877
	ctx.r10.s64 = -2089091072;
	// addi r9,r11,11384
	ctx.r9.s64 = ctx.r11.s64 + 11384;
	// addi r4,r10,-2872
	ctx.r4.s64 = ctx.r10.s64 + -2872;
	// addi r5,r9,20
	ctx.r5.s64 = ctx.r9.s64 + 20;
	// lis r8,-31841
	ctx.r8.s64 = -2086731776;
	// stw r4,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r4.u32);
	// lis r7,-32239
	ctx.r7.s64 = -2112815104;
	// stw r5,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r5.u32);
	// lis r6,-31841
	ctx.r6.s64 = -2086731776;
	// li r10,6
	ctx.r10.s64 = 6;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r5,r8,-7372
	ctx.r5.s64 = ctx.r8.s64 + -7372;
	// stw r10,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r10.u32);
	// addi r4,r7,-24508
	ctx.r4.s64 = ctx.r7.s64 + -24508;
	// stw r11,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r11.u32);
	// addi r3,r6,-6892
	ctx.r3.s64 = ctx.r6.s64 + -6892;
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
	// li r6,0
	ctx.r6.s64 = 0;
	// bl 0x82ef5ae8
	ctx.lr = 0x8344F27C;
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

