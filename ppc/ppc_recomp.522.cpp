#include "ppc_recomp_shared.h"

__attribute__((alias("__imp__sub_83525D98"))) PPC_WEAK_FUNC(sub_83525D98);
PPC_FUNC_IMPL(__imp__sub_83525D98) {
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
	// lis r10,-31865
	ctx.r10.s64 = -2088304640;
	// lis r9,-31836
	ctx.r9.s64 = -2086404096;
	// addi r6,r10,12344
	ctx.r6.s64 = ctx.r10.s64 + 12344;
	// lis r8,-32238
	ctx.r8.s64 = -2112749568;
	// lis r7,-31836
	ctx.r7.s64 = -2086404096;
	// stw r6,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r6.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r5,r9,-2076
	ctx.r5.s64 = ctx.r9.s64 + -2076;
	// addi r4,r8,25640
	ctx.r4.s64 = ctx.r8.s64 + 25640;
	// stw r11,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r11.u32);
	// addi r3,r7,2004
	ctx.r3.s64 = ctx.r7.s64 + 2004;
	// stw r11,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r11.u32);
	// li r31,11
	ctx.r31.s64 = 11;
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
	ctx.lr = 0x83525E00;
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

__attribute__((alias("__imp__sub_83525E14"))) PPC_WEAK_FUNC(sub_83525E14);
PPC_FUNC_IMPL(__imp__sub_83525E14) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83525E18"))) PPC_WEAK_FUNC(sub_83525E18);
PPC_FUNC_IMPL(__imp__sub_83525E18) {
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
	// lis r10,-31865
	ctx.r10.s64 = -2088304640;
	// lis r9,-31836
	ctx.r9.s64 = -2086404096;
	// addi r6,r10,12608
	ctx.r6.s64 = ctx.r10.s64 + 12608;
	// lis r8,-32238
	ctx.r8.s64 = -2112749568;
	// lis r7,-31836
	ctx.r7.s64 = -2086404096;
	// stw r6,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r6.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r5,r9,-2076
	ctx.r5.s64 = ctx.r9.s64 + -2076;
	// addi r4,r8,24648
	ctx.r4.s64 = ctx.r8.s64 + 24648;
	// stw r11,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r11.u32);
	// addi r3,r7,2052
	ctx.r3.s64 = ctx.r7.s64 + 2052;
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
	// li r6,0
	ctx.r6.s64 = 0;
	// bl 0x82ef5ae8
	ctx.lr = 0x83525E80;
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

__attribute__((alias("__imp__sub_83525E94"))) PPC_WEAK_FUNC(sub_83525E94);
PPC_FUNC_IMPL(__imp__sub_83525E94) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83525E98"))) PPC_WEAK_FUNC(sub_83525E98);
PPC_FUNC_IMPL(__imp__sub_83525E98) {
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
	// lis r10,-32234
	ctx.r10.s64 = -2112487424;
	// lis r9,-31865
	ctx.r9.s64 = -2088304640;
	// addi r6,r10,-8424
	ctx.r6.s64 = ctx.r10.s64 + -8424;
	// addi r5,r9,12920
	ctx.r5.s64 = ctx.r9.s64 + 12920;
	// lis r8,-32240
	ctx.r8.s64 = -2112880640;
	// stw r6,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r6.u32);
	// lis r7,-31836
	ctx.r7.s64 = -2086404096;
	// stw r5,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r5.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r4,r8,24984
	ctx.r4.s64 = ctx.r8.s64 + 24984;
	// addi r3,r7,2100
	ctx.r3.s64 = ctx.r7.s64 + 2100;
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
	ctx.lr = 0x83525F04;
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

__attribute__((alias("__imp__sub_83525F18"))) PPC_WEAK_FUNC(sub_83525F18);
PPC_FUNC_IMPL(__imp__sub_83525F18) {
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
	// lis r11,-32234
	ctx.r11.s64 = -2112487424;
	// lis r10,-31865
	ctx.r10.s64 = -2088304640;
	// addi r9,r11,-8444
	ctx.r9.s64 = ctx.r11.s64 + -8444;
	// addi r4,r10,13016
	ctx.r4.s64 = ctx.r10.s64 + 13016;
	// addi r5,r9,44
	ctx.r5.s64 = ctx.r9.s64 + 44;
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r4,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r4.u32);
	// lis r8,-31836
	ctx.r8.s64 = -2086404096;
	// stw r5,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r5.u32);
	// lis r7,-32240
	ctx.r7.s64 = -2112880640;
	// stw r3,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r3.u32);
	// lis r6,-31836
	ctx.r6.s64 = -2086404096;
	// li r10,31
	ctx.r10.s64 = 31;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r5,r8,-2076
	ctx.r5.s64 = ctx.r8.s64 + -2076;
	// stw r10,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r10.u32);
	// addi r4,r7,25068
	ctx.r4.s64 = ctx.r7.s64 + 25068;
	// stw r11,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r11.u32);
	// addi r3,r6,2148
	ctx.r3.s64 = ctx.r6.s64 + 2148;
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
	ctx.lr = 0x83525F88;
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

__attribute__((alias("__imp__sub_83525F98"))) PPC_WEAK_FUNC(sub_83525F98);
PPC_FUNC_IMPL(__imp__sub_83525F98) {
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
	// lis r10,-32234
	ctx.r10.s64 = -2112487424;
	// lis r9,-31865
	ctx.r9.s64 = -2088304640;
	// addi r5,r10,-8176
	ctx.r5.s64 = ctx.r10.s64 + -8176;
	// addi r4,r9,13760
	ctx.r4.s64 = ctx.r9.s64 + 13760;
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r5,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r5.u32);
	// lis r8,-31836
	ctx.r8.s64 = -2086404096;
	// stw r4,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r4.u32);
	// lis r7,-32240
	ctx.r7.s64 = -2112880640;
	// stw r3,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r3.u32);
	// lis r6,-31836
	ctx.r6.s64 = -2086404096;
	// li r10,3
	ctx.r10.s64 = 3;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r5,r8,-2076
	ctx.r5.s64 = ctx.r8.s64 + -2076;
	// stw r10,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r10.u32);
	// addi r4,r7,25596
	ctx.r4.s64 = ctx.r7.s64 + 25596;
	// stw r11,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r11.u32);
	// addi r3,r6,2196
	ctx.r3.s64 = ctx.r6.s64 + 2196;
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
	ctx.lr = 0x83526008;
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

__attribute__((alias("__imp__sub_83526018"))) PPC_WEAK_FUNC(sub_83526018);
PPC_FUNC_IMPL(__imp__sub_83526018) {
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
	// lis r10,-32234
	ctx.r10.s64 = -2112487424;
	// lis r9,-31865
	ctx.r9.s64 = -2088304640;
	// addi r5,r10,-8160
	ctx.r5.s64 = ctx.r10.s64 + -8160;
	// addi r4,r9,13832
	ctx.r4.s64 = ctx.r9.s64 + 13832;
	// lis r8,-31836
	ctx.r8.s64 = -2086404096;
	// stw r5,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r5.u32);
	// lis r7,-32238
	ctx.r7.s64 = -2112749568;
	// stw r4,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r4.u32);
	// lis r6,-31836
	ctx.r6.s64 = -2086404096;
	// li r9,3
	ctx.r9.s64 = 3;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r5,r8,-2076
	ctx.r5.s64 = ctx.r8.s64 + -2076;
	// stw r9,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r9.u32);
	// addi r4,r7,25048
	ctx.r4.s64 = ctx.r7.s64 + 25048;
	// stw r11,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r11.u32);
	// addi r3,r6,2244
	ctx.r3.s64 = ctx.r6.s64 + 2244;
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
	ctx.lr = 0x83526084;
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

__attribute__((alias("__imp__sub_83526094"))) PPC_WEAK_FUNC(sub_83526094);
PPC_FUNC_IMPL(__imp__sub_83526094) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83526098"))) PPC_WEAK_FUNC(sub_83526098);
PPC_FUNC_IMPL(__imp__sub_83526098) {
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
	// lis r10,-32234
	ctx.r10.s64 = -2112487424;
	// lis r9,-31865
	ctx.r9.s64 = -2088304640;
	// addi r5,r10,-8140
	ctx.r5.s64 = ctx.r10.s64 + -8140;
	// addi r4,r9,13904
	ctx.r4.s64 = ctx.r9.s64 + 13904;
	// lis r8,-31836
	ctx.r8.s64 = -2086404096;
	// stw r5,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r5.u32);
	// lis r7,-32238
	ctx.r7.s64 = -2112749568;
	// stw r4,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r4.u32);
	// lis r6,-31836
	ctx.r6.s64 = -2086404096;
	// li r9,7
	ctx.r9.s64 = 7;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r5,r8,-2076
	ctx.r5.s64 = ctx.r8.s64 + -2076;
	// stw r9,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r9.u32);
	// addi r4,r7,22056
	ctx.r4.s64 = ctx.r7.s64 + 22056;
	// stw r11,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r11.u32);
	// addi r3,r6,2292
	ctx.r3.s64 = ctx.r6.s64 + 2292;
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
	ctx.lr = 0x83526104;
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

__attribute__((alias("__imp__sub_83526114"))) PPC_WEAK_FUNC(sub_83526114);
PPC_FUNC_IMPL(__imp__sub_83526114) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83526118"))) PPC_WEAK_FUNC(sub_83526118);
PPC_FUNC_IMPL(__imp__sub_83526118) {
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
	// lis r10,-32234
	ctx.r10.s64 = -2112487424;
	// lis r9,-31865
	ctx.r9.s64 = -2088304640;
	// addi r5,r10,-8092
	ctx.r5.s64 = ctx.r10.s64 + -8092;
	// addi r4,r9,14072
	ctx.r4.s64 = ctx.r9.s64 + 14072;
	// lis r8,-31836
	ctx.r8.s64 = -2086404096;
	// stw r5,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r5.u32);
	// lis r7,-32234
	ctx.r7.s64 = -2112487424;
	// stw r4,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r4.u32);
	// lis r6,-31836
	ctx.r6.s64 = -2086404096;
	// li r9,3
	ctx.r9.s64 = 3;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r5,r8,-2076
	ctx.r5.s64 = ctx.r8.s64 + -2076;
	// stw r9,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r9.u32);
	// addi r4,r7,4236
	ctx.r4.s64 = ctx.r7.s64 + 4236;
	// stw r11,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r11.u32);
	// addi r3,r6,2340
	ctx.r3.s64 = ctx.r6.s64 + 2340;
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
	ctx.lr = 0x83526184;
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

__attribute__((alias("__imp__sub_83526194"))) PPC_WEAK_FUNC(sub_83526194);
PPC_FUNC_IMPL(__imp__sub_83526194) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83526198"))) PPC_WEAK_FUNC(sub_83526198);
PPC_FUNC_IMPL(__imp__sub_83526198) {
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
	// lis r10,-32234
	ctx.r10.s64 = -2112487424;
	// lis r9,-31865
	ctx.r9.s64 = -2088304640;
	// addi r5,r10,-8072
	ctx.r5.s64 = ctx.r10.s64 + -8072;
	// addi r4,r9,14144
	ctx.r4.s64 = ctx.r9.s64 + 14144;
	// lis r8,-31836
	ctx.r8.s64 = -2086404096;
	// stw r5,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r5.u32);
	// lis r7,-32238
	ctx.r7.s64 = -2112749568;
	// stw r4,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r4.u32);
	// lis r6,-31836
	ctx.r6.s64 = -2086404096;
	// li r9,4
	ctx.r9.s64 = 4;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r5,r8,-2076
	ctx.r5.s64 = ctx.r8.s64 + -2076;
	// stw r9,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r9.u32);
	// addi r4,r7,24740
	ctx.r4.s64 = ctx.r7.s64 + 24740;
	// stw r11,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r11.u32);
	// addi r3,r6,2388
	ctx.r3.s64 = ctx.r6.s64 + 2388;
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
	ctx.lr = 0x83526204;
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

__attribute__((alias("__imp__sub_83526214"))) PPC_WEAK_FUNC(sub_83526214);
PPC_FUNC_IMPL(__imp__sub_83526214) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83526218"))) PPC_WEAK_FUNC(sub_83526218);
PPC_FUNC_IMPL(__imp__sub_83526218) {
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
	// lis r10,-32234
	ctx.r10.s64 = -2112487424;
	// lis r9,-31865
	ctx.r9.s64 = -2088304640;
	// addi r6,r10,-7984
	ctx.r6.s64 = ctx.r10.s64 + -7984;
	// addi r5,r9,14248
	ctx.r5.s64 = ctx.r9.s64 + 14248;
	// lis r8,-32238
	ctx.r8.s64 = -2112749568;
	// stw r6,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r6.u32);
	// lis r7,-31836
	ctx.r7.s64 = -2086404096;
	// stw r5,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r5.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r4,r8,24760
	ctx.r4.s64 = ctx.r8.s64 + 24760;
	// addi r3,r7,2436
	ctx.r3.s64 = ctx.r7.s64 + 2436;
	// stw r11,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r11.u32);
	// li r31,5
	ctx.r31.s64 = 5;
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
	ctx.lr = 0x83526284;
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

__attribute__((alias("__imp__sub_83526298"))) PPC_WEAK_FUNC(sub_83526298);
PPC_FUNC_IMPL(__imp__sub_83526298) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31865
	ctx.r11.s64 = -2088304640;
	// lis r10,-31864
	ctx.r10.s64 = -2088239104;
	// addi r9,r10,-7248
	ctx.r9.s64 = ctx.r10.s64 + -7248;
	// lwz r11,14240(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 14240);
	// stw r11,176(r9)
	PPC_STORE_U32(ctx.r9.u32 + 176, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_835262B0"))) PPC_WEAK_FUNC(sub_835262B0);
PPC_FUNC_IMPL(__imp__sub_835262B0) {
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
	// lis r11,-32234
	ctx.r11.s64 = -2112487424;
	// lis r10,-31864
	ctx.r10.s64 = -2088239104;
	// addi r9,r11,-8004
	ctx.r9.s64 = ctx.r11.s64 + -8004;
	// addi r4,r10,-7248
	ctx.r4.s64 = ctx.r10.s64 + -7248;
	// addi r5,r9,84
	ctx.r5.s64 = ctx.r9.s64 + 84;
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r4,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r4.u32);
	// lis r8,-31836
	ctx.r8.s64 = -2086404096;
	// stw r5,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r5.u32);
	// lis r7,-32238
	ctx.r7.s64 = -2112749568;
	// stw r3,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r3.u32);
	// lis r6,-31836
	ctx.r6.s64 = -2086404096;
	// li r10,13
	ctx.r10.s64 = 13;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r5,r8,-2076
	ctx.r5.s64 = ctx.r8.s64 + -2076;
	// stw r10,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r10.u32);
	// addi r4,r7,24808
	ctx.r4.s64 = ctx.r7.s64 + 24808;
	// stw r11,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r11.u32);
	// addi r3,r6,2484
	ctx.r3.s64 = ctx.r6.s64 + 2484;
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
	ctx.lr = 0x83526320;
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

__attribute__((alias("__imp__sub_83526330"))) PPC_WEAK_FUNC(sub_83526330);
PPC_FUNC_IMPL(__imp__sub_83526330) {
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
	// lis r10,-31865
	ctx.r10.s64 = -2088304640;
	// lis r9,-31836
	ctx.r9.s64 = -2086404096;
	// addi r6,r10,14368
	ctx.r6.s64 = ctx.r10.s64 + 14368;
	// lis r8,-32238
	ctx.r8.s64 = -2112749568;
	// lis r7,-31836
	ctx.r7.s64 = -2086404096;
	// stw r6,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r6.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r5,r9,-2076
	ctx.r5.s64 = ctx.r9.s64 + -2076;
	// addi r4,r8,25140
	ctx.r4.s64 = ctx.r8.s64 + 25140;
	// stw r11,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r11.u32);
	// addi r3,r7,2532
	ctx.r3.s64 = ctx.r7.s64 + 2532;
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
	ctx.lr = 0x83526398;
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

__attribute__((alias("__imp__sub_835263AC"))) PPC_WEAK_FUNC(sub_835263AC);
PPC_FUNC_IMPL(__imp__sub_835263AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_835263B0"))) PPC_WEAK_FUNC(sub_835263B0);
PPC_FUNC_IMPL(__imp__sub_835263B0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31865
	ctx.r11.s64 = -2088304640;
	// lis r10,-31865
	ctx.r10.s64 = -2088304640;
	// lis r9,-31864
	ctx.r9.s64 = -2088239104;
	// lis r8,-31864
	ctx.r8.s64 = -2088239104;
	// lwz r11,14244(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 14244);
	// addi r7,r8,-6936
	ctx.r7.s64 = ctx.r8.s64 + -6936;
	// lwz r10,14488(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 14488);
	// lwz r9,-24372(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + -24372);
	// stw r11,104(r7)
	PPC_STORE_U32(ctx.r7.u32 + 104, ctx.r11.u32);
	// stw r10,128(r7)
	PPC_STORE_U32(ctx.r7.u32 + 128, ctx.r10.u32);
	// stw r9,152(r7)
	PPC_STORE_U32(ctx.r7.u32 + 152, ctx.r9.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_835263E0"))) PPC_WEAK_FUNC(sub_835263E0);
PPC_FUNC_IMPL(__imp__sub_835263E0) {
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
	// lis r11,-32234
	ctx.r11.s64 = -2112487424;
	// lis r10,-31864
	ctx.r10.s64 = -2088239104;
	// addi r9,r11,-7804
	ctx.r9.s64 = ctx.r11.s64 + -7804;
	// addi r4,r10,-6936
	ctx.r4.s64 = ctx.r10.s64 + -6936;
	// addi r5,r9,40
	ctx.r5.s64 = ctx.r9.s64 + 40;
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r4,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r4.u32);
	// lis r8,-31836
	ctx.r8.s64 = -2086404096;
	// stw r5,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r5.u32);
	// lis r7,-32240
	ctx.r7.s64 = -2112880640;
	// stw r3,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r3.u32);
	// lis r6,-31836
	ctx.r6.s64 = -2086404096;
	// li r10,11
	ctx.r10.s64 = 11;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r5,r8,-2076
	ctx.r5.s64 = ctx.r8.s64 + -2076;
	// stw r10,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r10.u32);
	// addi r4,r7,22296
	ctx.r4.s64 = ctx.r7.s64 + 22296;
	// stw r11,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r11.u32);
	// addi r3,r6,2580
	ctx.r3.s64 = ctx.r6.s64 + 2580;
	// stw r11,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r11.u32);
	// li r10,2
	ctx.r10.s64 = 2;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// bl 0x82ef5ae8
	ctx.lr = 0x83526450;
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

__attribute__((alias("__imp__sub_83526460"))) PPC_WEAK_FUNC(sub_83526460);
PPC_FUNC_IMPL(__imp__sub_83526460) {
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
	// lis r10,-31865
	ctx.r10.s64 = -2088304640;
	// lis r9,-31836
	ctx.r9.s64 = -2086404096;
	// addi r6,r10,14496
	ctx.r6.s64 = ctx.r10.s64 + 14496;
	// lis r8,-32238
	ctx.r8.s64 = -2112749568;
	// lis r7,-31836
	ctx.r7.s64 = -2086404096;
	// stw r6,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r6.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r5,r9,-2076
	ctx.r5.s64 = ctx.r9.s64 + -2076;
	// addi r4,r8,25112
	ctx.r4.s64 = ctx.r8.s64 + 25112;
	// stw r11,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r11.u32);
	// addi r3,r7,2628
	ctx.r3.s64 = ctx.r7.s64 + 2628;
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
	// li r6,0
	ctx.r6.s64 = 0;
	// bl 0x82ef5ae8
	ctx.lr = 0x835264C8;
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

__attribute__((alias("__imp__sub_835264DC"))) PPC_WEAK_FUNC(sub_835264DC);
PPC_FUNC_IMPL(__imp__sub_835264DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_835264E0"))) PPC_WEAK_FUNC(sub_835264E0);
PPC_FUNC_IMPL(__imp__sub_835264E0) {
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
	// lis r10,-31865
	ctx.r10.s64 = -2088304640;
	// lis r9,-31836
	ctx.r9.s64 = -2086404096;
	// addi r6,r10,14736
	ctx.r6.s64 = ctx.r10.s64 + 14736;
	// lis r8,-32240
	ctx.r8.s64 = -2112880640;
	// lis r7,-31836
	ctx.r7.s64 = -2086404096;
	// stw r6,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r6.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r5,r9,-2076
	ctx.r5.s64 = ctx.r9.s64 + -2076;
	// addi r4,r8,22036
	ctx.r4.s64 = ctx.r8.s64 + 22036;
	// stw r11,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r11.u32);
	// addi r3,r7,2676
	ctx.r3.s64 = ctx.r7.s64 + 2676;
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
	ctx.lr = 0x83526548;
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

__attribute__((alias("__imp__sub_8352655C"))) PPC_WEAK_FUNC(sub_8352655C);
PPC_FUNC_IMPL(__imp__sub_8352655C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83526560"))) PPC_WEAK_FUNC(sub_83526560);
PPC_FUNC_IMPL(__imp__sub_83526560) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31865
	ctx.r11.s64 = -2088304640;
	// lis r10,-31864
	ctx.r10.s64 = -2088239104;
	// addi r9,r10,-6672
	ctx.r9.s64 = ctx.r10.s64 + -6672;
	// lwz r11,14492(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 14492);
	// stw r11,296(r9)
	PPC_STORE_U32(ctx.r9.u32 + 296, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83526578"))) PPC_WEAK_FUNC(sub_83526578);
PPC_FUNC_IMPL(__imp__sub_83526578) {
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
	// lis r11,-32234
	ctx.r11.s64 = -2112487424;
	// lis r10,-31864
	ctx.r10.s64 = -2088239104;
	// addi r9,r11,-7656
	ctx.r9.s64 = ctx.r11.s64 + -7656;
	// addi r4,r10,-6672
	ctx.r4.s64 = ctx.r10.s64 + -6672;
	// addi r5,r9,40
	ctx.r5.s64 = ctx.r9.s64 + 40;
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r4,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r4.u32);
	// lis r8,-31836
	ctx.r8.s64 = -2086404096;
	// stw r5,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r5.u32);
	// lis r7,-32240
	ctx.r7.s64 = -2112880640;
	// stw r3,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r3.u32);
	// lis r6,-31836
	ctx.r6.s64 = -2086404096;
	// li r10,32
	ctx.r10.s64 = 32;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r5,r8,-2076
	ctx.r5.s64 = ctx.r8.s64 + -2076;
	// stw r10,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r10.u32);
	// addi r4,r7,22648
	ctx.r4.s64 = ctx.r7.s64 + 22648;
	// stw r11,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r11.u32);
	// addi r3,r6,2724
	ctx.r3.s64 = ctx.r6.s64 + 2724;
	// stw r11,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r11.u32);
	// li r10,2
	ctx.r10.s64 = 2;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// bl 0x82ef5ae8
	ctx.lr = 0x835265E8;
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

__attribute__((alias("__imp__sub_835265F8"))) PPC_WEAK_FUNC(sub_835265F8);
PPC_FUNC_IMPL(__imp__sub_835265F8) {
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
	// lis r10,-32234
	ctx.r10.s64 = -2112487424;
	// lis r9,-31865
	ctx.r9.s64 = -2088304640;
	// addi r6,r10,-7340
	ctx.r6.s64 = ctx.r10.s64 + -7340;
	// addi r5,r9,14864
	ctx.r5.s64 = ctx.r9.s64 + 14864;
	// lis r8,-32240
	ctx.r8.s64 = -2112880640;
	// stw r6,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r6.u32);
	// lis r7,-31836
	ctx.r7.s64 = -2086404096;
	// stw r5,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r5.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r4,r8,23276
	ctx.r4.s64 = ctx.r8.s64 + 23276;
	// addi r3,r7,2772
	ctx.r3.s64 = ctx.r7.s64 + 2772;
	// stw r11,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r11.u32);
	// li r31,3
	ctx.r31.s64 = 3;
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
	ctx.lr = 0x83526664;
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

__attribute__((alias("__imp__sub_83526678"))) PPC_WEAK_FUNC(sub_83526678);
PPC_FUNC_IMPL(__imp__sub_83526678) {
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
	// lis r11,-32234
	ctx.r11.s64 = -2112487424;
	// lis r10,-31865
	ctx.r10.s64 = -2088304640;
	// addi r9,r11,-7360
	ctx.r9.s64 = ctx.r11.s64 + -7360;
	// addi r4,r10,14936
	ctx.r4.s64 = ctx.r10.s64 + 14936;
	// addi r5,r9,40
	ctx.r5.s64 = ctx.r9.s64 + 40;
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r4,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r4.u32);
	// lis r8,-31836
	ctx.r8.s64 = -2086404096;
	// stw r5,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r5.u32);
	// lis r7,-32240
	ctx.r7.s64 = -2112880640;
	// stw r3,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r3.u32);
	// lis r6,-31836
	ctx.r6.s64 = -2086404096;
	// li r10,21
	ctx.r10.s64 = 21;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r5,r8,-2076
	ctx.r5.s64 = ctx.r8.s64 + -2076;
	// stw r10,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r10.u32);
	// addi r4,r7,22744
	ctx.r4.s64 = ctx.r7.s64 + 22744;
	// stw r11,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r11.u32);
	// addi r3,r6,2820
	ctx.r3.s64 = ctx.r6.s64 + 2820;
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
	ctx.lr = 0x835266E8;
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

__attribute__((alias("__imp__sub_835266F8"))) PPC_WEAK_FUNC(sub_835266F8);
PPC_FUNC_IMPL(__imp__sub_835266F8) {
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
	// lis r10,-31865
	ctx.r10.s64 = -2088304640;
	// lis r9,-31836
	ctx.r9.s64 = -2086404096;
	// addi r6,r10,15440
	ctx.r6.s64 = ctx.r10.s64 + 15440;
	// lis r8,-32240
	ctx.r8.s64 = -2112880640;
	// lis r7,-31836
	ctx.r7.s64 = -2086404096;
	// stw r6,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r6.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r5,r9,6564
	ctx.r5.s64 = ctx.r9.s64 + 6564;
	// addi r4,r8,19984
	ctx.r4.s64 = ctx.r8.s64 + 19984;
	// stw r11,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r11.u32);
	// addi r3,r7,2868
	ctx.r3.s64 = ctx.r7.s64 + 2868;
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
	ctx.lr = 0x83526760;
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

__attribute__((alias("__imp__sub_83526774"))) PPC_WEAK_FUNC(sub_83526774);
PPC_FUNC_IMPL(__imp__sub_83526774) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83526778"))) PPC_WEAK_FUNC(sub_83526778);
PPC_FUNC_IMPL(__imp__sub_83526778) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31865
	ctx.r11.s64 = -2088304640;
	// lis r10,-31865
	ctx.r10.s64 = -2088304640;
	// lis r9,-31865
	ctx.r9.s64 = -2088304640;
	// lis r8,-31865
	ctx.r8.s64 = -2088304640;
	// lis r7,-31864
	ctx.r7.s64 = -2088239104;
	// lwz r11,15588(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 15588);
	// lwz r10,15592(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 15592);
	// addi r6,r7,-5904
	ctx.r6.s64 = ctx.r7.s64 + -5904;
	// lwz r9,15596(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + 15596);
	// lwz r8,15584(r8)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r8.u32 + 15584);
	// stw r11,8(r6)
	PPC_STORE_U32(ctx.r6.u32 + 8, ctx.r11.u32);
	// stw r10,176(r6)
	PPC_STORE_U32(ctx.r6.u32 + 176, ctx.r10.u32);
	// stw r9,200(r6)
	PPC_STORE_U32(ctx.r6.u32 + 200, ctx.r9.u32);
	// stw r8,416(r6)
	PPC_STORE_U32(ctx.r6.u32 + 416, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_835267B4"))) PPC_WEAK_FUNC(sub_835267B4);
PPC_FUNC_IMPL(__imp__sub_835267B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_835267B8"))) PPC_WEAK_FUNC(sub_835267B8);
PPC_FUNC_IMPL(__imp__sub_835267B8) {
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
	// lis r11,-32234
	ctx.r11.s64 = -2112487424;
	// lis r10,-31864
	ctx.r10.s64 = -2088239104;
	// addi r9,r11,-7112
	ctx.r9.s64 = ctx.r11.s64 + -7112;
	// addi r4,r10,-5904
	ctx.r4.s64 = ctx.r10.s64 + -5904;
	// addi r5,r9,80
	ctx.r5.s64 = ctx.r9.s64 + 80;
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r4,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r4.u32);
	// lis r8,-31836
	ctx.r8.s64 = -2086404096;
	// stw r5,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r5.u32);
	// lis r7,-32240
	ctx.r7.s64 = -2112880640;
	// stw r3,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r3.u32);
	// lis r6,-31836
	ctx.r6.s64 = -2086404096;
	// li r10,33
	ctx.r10.s64 = 33;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r5,r8,-2076
	ctx.r5.s64 = ctx.r8.s64 + -2076;
	// stw r10,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r10.u32);
	// addi r4,r7,18160
	ctx.r4.s64 = ctx.r7.s64 + 18160;
	// stw r11,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r11.u32);
	// addi r3,r6,2916
	ctx.r3.s64 = ctx.r6.s64 + 2916;
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
	ctx.lr = 0x83526828;
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

__attribute__((alias("__imp__sub_83526838"))) PPC_WEAK_FUNC(sub_83526838);
PPC_FUNC_IMPL(__imp__sub_83526838) {
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
	// lis r10,-32234
	ctx.r10.s64 = -2112487424;
	// lis r9,-31865
	ctx.r9.s64 = -2088304640;
	// addi r5,r10,-6808
	ctx.r5.s64 = ctx.r10.s64 + -6808;
	// addi r4,r9,15600
	ctx.r4.s64 = ctx.r9.s64 + 15600;
	// lis r8,-31836
	ctx.r8.s64 = -2086404096;
	// stw r5,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r5.u32);
	// lis r7,-32235
	ctx.r7.s64 = -2112552960;
	// stw r4,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r4.u32);
	// lis r6,-31836
	ctx.r6.s64 = -2086404096;
	// li r9,5
	ctx.r9.s64 = 5;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r5,r8,-156
	ctx.r5.s64 = ctx.r8.s64 + -156;
	// stw r9,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r9.u32);
	// addi r4,r7,32524
	ctx.r4.s64 = ctx.r7.s64 + 32524;
	// stw r11,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r11.u32);
	// addi r3,r6,2964
	ctx.r3.s64 = ctx.r6.s64 + 2964;
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
	ctx.lr = 0x835268A4;
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

__attribute__((alias("__imp__sub_835268B4"))) PPC_WEAK_FUNC(sub_835268B4);
PPC_FUNC_IMPL(__imp__sub_835268B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_835268B8"))) PPC_WEAK_FUNC(sub_835268B8);
PPC_FUNC_IMPL(__imp__sub_835268B8) {
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
	// lis r10,-32234
	ctx.r10.s64 = -2112487424;
	// lis r9,-31865
	ctx.r9.s64 = -2088304640;
	// addi r5,r10,-6784
	ctx.r5.s64 = ctx.r10.s64 + -6784;
	// addi r4,r9,15720
	ctx.r4.s64 = ctx.r9.s64 + 15720;
	// lis r8,-31836
	ctx.r8.s64 = -2086404096;
	// stw r5,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r5.u32);
	// lis r7,-32240
	ctx.r7.s64 = -2112880640;
	// stw r4,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r4.u32);
	// lis r6,-31836
	ctx.r6.s64 = -2086404096;
	// li r9,5
	ctx.r9.s64 = 5;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r5,r8,948
	ctx.r5.s64 = ctx.r8.s64 + 948;
	// stw r9,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r9.u32);
	// addi r4,r7,24532
	ctx.r4.s64 = ctx.r7.s64 + 24532;
	// stw r11,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r11.u32);
	// addi r3,r6,3012
	ctx.r3.s64 = ctx.r6.s64 + 3012;
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
	ctx.lr = 0x83526924;
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

__attribute__((alias("__imp__sub_83526934"))) PPC_WEAK_FUNC(sub_83526934);
PPC_FUNC_IMPL(__imp__sub_83526934) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83526938"))) PPC_WEAK_FUNC(sub_83526938);
PPC_FUNC_IMPL(__imp__sub_83526938) {
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
	// lis r10,-31865
	ctx.r10.s64 = -2088304640;
	// lis r9,-32238
	ctx.r9.s64 = -2112749568;
	// addi r7,r10,15840
	ctx.r7.s64 = ctx.r10.s64 + 15840;
	// lis r8,-31836
	ctx.r8.s64 = -2086404096;
	// li r6,3
	ctx.r6.s64 = 3;
	// stw r7,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r7.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r4,r9,26172
	ctx.r4.s64 = ctx.r9.s64 + 26172;
	// stw r6,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r6.u32);
	// addi r3,r8,3060
	ctx.r3.s64 = ctx.r8.s64 + 3060;
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
	ctx.lr = 0x83526998;
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

__attribute__((alias("__imp__sub_835269A8"))) PPC_WEAK_FUNC(sub_835269A8);
PPC_FUNC_IMPL(__imp__sub_835269A8) {
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
	// lis r10,-31865
	ctx.r10.s64 = -2088304640;
	// lis r9,-32238
	ctx.r9.s64 = -2112749568;
	// addi r7,r10,15912
	ctx.r7.s64 = ctx.r10.s64 + 15912;
	// lis r8,-31836
	ctx.r8.s64 = -2086404096;
	// li r6,3
	ctx.r6.s64 = 3;
	// stw r7,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r7.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r4,r9,26216
	ctx.r4.s64 = ctx.r9.s64 + 26216;
	// stw r6,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r6.u32);
	// addi r3,r8,3108
	ctx.r3.s64 = ctx.r8.s64 + 3108;
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
	ctx.lr = 0x83526A08;
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

__attribute__((alias("__imp__sub_83526A18"))) PPC_WEAK_FUNC(sub_83526A18);
PPC_FUNC_IMPL(__imp__sub_83526A18) {
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
	// lis r10,-31865
	ctx.r10.s64 = -2088304640;
	// lis r9,-32238
	ctx.r9.s64 = -2112749568;
	// addi r7,r10,15984
	ctx.r7.s64 = ctx.r10.s64 + 15984;
	// lis r8,-31836
	ctx.r8.s64 = -2086404096;
	// li r6,3
	ctx.r6.s64 = 3;
	// stw r7,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r7.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r4,r9,26256
	ctx.r4.s64 = ctx.r9.s64 + 26256;
	// stw r6,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r6.u32);
	// addi r3,r8,3156
	ctx.r3.s64 = ctx.r8.s64 + 3156;
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
	ctx.lr = 0x83526A78;
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

__attribute__((alias("__imp__sub_83526A88"))) PPC_WEAK_FUNC(sub_83526A88);
PPC_FUNC_IMPL(__imp__sub_83526A88) {
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
	// lis r10,-31865
	ctx.r10.s64 = -2088304640;
	// lis r9,-32238
	ctx.r9.s64 = -2112749568;
	// addi r7,r10,16056
	ctx.r7.s64 = ctx.r10.s64 + 16056;
	// lis r8,-31836
	ctx.r8.s64 = -2086404096;
	// li r6,6
	ctx.r6.s64 = 6;
	// stw r7,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r7.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r4,r9,26300
	ctx.r4.s64 = ctx.r9.s64 + 26300;
	// stw r6,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r6.u32);
	// addi r3,r8,3204
	ctx.r3.s64 = ctx.r8.s64 + 3204;
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
	ctx.lr = 0x83526AE8;
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

__attribute__((alias("__imp__sub_83526AF8"))) PPC_WEAK_FUNC(sub_83526AF8);
PPC_FUNC_IMPL(__imp__sub_83526AF8) {
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
	// lis r10,-31865
	ctx.r10.s64 = -2088304640;
	// lis r9,-32238
	ctx.r9.s64 = -2112749568;
	// addi r7,r10,16200
	ctx.r7.s64 = ctx.r10.s64 + 16200;
	// lis r8,-31836
	ctx.r8.s64 = -2086404096;
	// li r6,9
	ctx.r6.s64 = 9;
	// stw r7,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r7.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r4,r9,26344
	ctx.r4.s64 = ctx.r9.s64 + 26344;
	// stw r6,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r6.u32);
	// addi r3,r8,3252
	ctx.r3.s64 = ctx.r8.s64 + 3252;
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
	ctx.lr = 0x83526B58;
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

__attribute__((alias("__imp__sub_83526B68"))) PPC_WEAK_FUNC(sub_83526B68);
PPC_FUNC_IMPL(__imp__sub_83526B68) {
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
	// lis r10,-31836
	ctx.r10.s64 = -2086404096;
	// lis r9,-32240
	ctx.r9.s64 = -2112880640;
	// lis r8,-31836
	ctx.r8.s64 = -2086404096;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r5,r10,6564
	ctx.r5.s64 = ctx.r10.s64 + 6564;
	// addi r4,r9,31624
	ctx.r4.s64 = ctx.r9.s64 + 31624;
	// stw r11,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r11.u32);
	// addi r3,r8,3300
	ctx.r3.s64 = ctx.r8.s64 + 3300;
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
	ctx.lr = 0x83526BC0;
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

__attribute__((alias("__imp__sub_83526BD0"))) PPC_WEAK_FUNC(sub_83526BD0);
PPC_FUNC_IMPL(__imp__sub_83526BD0) {
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
	// lis r10,-31865
	ctx.r10.s64 = -2088304640;
	// lis r9,-31836
	ctx.r9.s64 = -2086404096;
	// addi r6,r10,16416
	ctx.r6.s64 = ctx.r10.s64 + 16416;
	// lis r8,-32238
	ctx.r8.s64 = -2112749568;
	// lis r7,-31836
	ctx.r7.s64 = -2086404096;
	// stw r6,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r6.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r5,r9,3300
	ctx.r5.s64 = ctx.r9.s64 + 3300;
	// addi r4,r8,26808
	ctx.r4.s64 = ctx.r8.s64 + 26808;
	// stw r11,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r11.u32);
	// addi r3,r7,3348
	ctx.r3.s64 = ctx.r7.s64 + 3348;
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
	// li r6,0
	ctx.r6.s64 = 0;
	// bl 0x82ef5ae8
	ctx.lr = 0x83526C38;
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

__attribute__((alias("__imp__sub_83526C4C"))) PPC_WEAK_FUNC(sub_83526C4C);
PPC_FUNC_IMPL(__imp__sub_83526C4C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83526C50"))) PPC_WEAK_FUNC(sub_83526C50);
PPC_FUNC_IMPL(__imp__sub_83526C50) {
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
	// lis r10,-31865
	ctx.r10.s64 = -2088304640;
	// lis r9,-31836
	ctx.r9.s64 = -2086404096;
	// addi r6,r10,16584
	ctx.r6.s64 = ctx.r10.s64 + 16584;
	// lis r8,-32240
	ctx.r8.s64 = -2112880640;
	// lis r7,-31836
	ctx.r7.s64 = -2086404096;
	// stw r6,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r6.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r5,r9,6564
	ctx.r5.s64 = ctx.r9.s64 + 6564;
	// addi r4,r8,31848
	ctx.r4.s64 = ctx.r8.s64 + 31848;
	// stw r11,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r11.u32);
	// addi r3,r7,3396
	ctx.r3.s64 = ctx.r7.s64 + 3396;
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
	ctx.lr = 0x83526CB8;
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

__attribute__((alias("__imp__sub_83526CCC"))) PPC_WEAK_FUNC(sub_83526CCC);
PPC_FUNC_IMPL(__imp__sub_83526CCC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83526CD0"))) PPC_WEAK_FUNC(sub_83526CD0);
PPC_FUNC_IMPL(__imp__sub_83526CD0) {
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
	// lis r10,-31865
	ctx.r10.s64 = -2088304640;
	// lis r9,-31836
	ctx.r9.s64 = -2086404096;
	// addi r6,r10,16704
	ctx.r6.s64 = ctx.r10.s64 + 16704;
	// lis r8,-32240
	ctx.r8.s64 = -2112880640;
	// lis r7,-31836
	ctx.r7.s64 = -2086404096;
	// stw r6,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r6.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r5,r9,6564
	ctx.r5.s64 = ctx.r9.s64 + 6564;
	// addi r4,r8,31548
	ctx.r4.s64 = ctx.r8.s64 + 31548;
	// stw r11,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r11.u32);
	// addi r3,r7,3444
	ctx.r3.s64 = ctx.r7.s64 + 3444;
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
	// li r6,0
	ctx.r6.s64 = 0;
	// bl 0x82ef5ae8
	ctx.lr = 0x83526D38;
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

__attribute__((alias("__imp__sub_83526D4C"))) PPC_WEAK_FUNC(sub_83526D4C);
PPC_FUNC_IMPL(__imp__sub_83526D4C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83526D50"))) PPC_WEAK_FUNC(sub_83526D50);
PPC_FUNC_IMPL(__imp__sub_83526D50) {
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
	// lis r10,-31865
	ctx.r10.s64 = -2088304640;
	// lis r9,-31836
	ctx.r9.s64 = -2086404096;
	// addi r6,r10,16872
	ctx.r6.s64 = ctx.r10.s64 + 16872;
	// lis r8,-32240
	ctx.r8.s64 = -2112880640;
	// lis r7,-31836
	ctx.r7.s64 = -2086404096;
	// stw r6,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r6.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r5,r9,6564
	ctx.r5.s64 = ctx.r9.s64 + 6564;
	// addi r4,r8,32228
	ctx.r4.s64 = ctx.r8.s64 + 32228;
	// stw r11,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r11.u32);
	// addi r3,r7,3492
	ctx.r3.s64 = ctx.r7.s64 + 3492;
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
	// li r6,0
	ctx.r6.s64 = 0;
	// bl 0x82ef5ae8
	ctx.lr = 0x83526DB8;
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

__attribute__((alias("__imp__sub_83526DCC"))) PPC_WEAK_FUNC(sub_83526DCC);
PPC_FUNC_IMPL(__imp__sub_83526DCC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83526DD0"))) PPC_WEAK_FUNC(sub_83526DD0);
PPC_FUNC_IMPL(__imp__sub_83526DD0) {
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
	// lis r10,-31865
	ctx.r10.s64 = -2088304640;
	// lis r9,-31836
	ctx.r9.s64 = -2086404096;
	// addi r6,r10,17040
	ctx.r6.s64 = ctx.r10.s64 + 17040;
	// lis r8,-32240
	ctx.r8.s64 = -2112880640;
	// lis r7,-31836
	ctx.r7.s64 = -2086404096;
	// stw r6,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r6.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r5,r9,6564
	ctx.r5.s64 = ctx.r9.s64 + 6564;
	// addi r4,r8,31276
	ctx.r4.s64 = ctx.r8.s64 + 31276;
	// stw r11,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r11.u32);
	// addi r3,r7,3540
	ctx.r3.s64 = ctx.r7.s64 + 3540;
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
	ctx.lr = 0x83526E38;
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

__attribute__((alias("__imp__sub_83526E4C"))) PPC_WEAK_FUNC(sub_83526E4C);
PPC_FUNC_IMPL(__imp__sub_83526E4C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83526E50"))) PPC_WEAK_FUNC(sub_83526E50);
PPC_FUNC_IMPL(__imp__sub_83526E50) {
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
	// lis r10,-31865
	ctx.r10.s64 = -2088304640;
	// lis r9,-31836
	ctx.r9.s64 = -2086404096;
	// addi r6,r10,17064
	ctx.r6.s64 = ctx.r10.s64 + 17064;
	// lis r8,-32240
	ctx.r8.s64 = -2112880640;
	// lis r7,-31836
	ctx.r7.s64 = -2086404096;
	// stw r6,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r6.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r5,r9,3540
	ctx.r5.s64 = ctx.r9.s64 + 3540;
	// addi r4,r8,31164
	ctx.r4.s64 = ctx.r8.s64 + 31164;
	// stw r11,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r11.u32);
	// addi r3,r7,3588
	ctx.r3.s64 = ctx.r7.s64 + 3588;
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
	ctx.lr = 0x83526EB8;
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

__attribute__((alias("__imp__sub_83526ECC"))) PPC_WEAK_FUNC(sub_83526ECC);
PPC_FUNC_IMPL(__imp__sub_83526ECC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83526ED0"))) PPC_WEAK_FUNC(sub_83526ED0);
PPC_FUNC_IMPL(__imp__sub_83526ED0) {
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
	// lis r10,-31865
	ctx.r10.s64 = -2088304640;
	// lis r9,-31836
	ctx.r9.s64 = -2086404096;
	// addi r6,r10,17184
	ctx.r6.s64 = ctx.r10.s64 + 17184;
	// lis r8,-32239
	ctx.r8.s64 = -2112815104;
	// lis r7,-31836
	ctx.r7.s64 = -2086404096;
	// stw r6,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r6.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r5,r9,3540
	ctx.r5.s64 = ctx.r9.s64 + 3540;
	// addi r4,r8,-30952
	ctx.r4.s64 = ctx.r8.s64 + -30952;
	// stw r11,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r11.u32);
	// addi r3,r7,3636
	ctx.r3.s64 = ctx.r7.s64 + 3636;
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
	// li r6,0
	ctx.r6.s64 = 0;
	// bl 0x82ef5ae8
	ctx.lr = 0x83526F38;
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

__attribute__((alias("__imp__sub_83526F4C"))) PPC_WEAK_FUNC(sub_83526F4C);
PPC_FUNC_IMPL(__imp__sub_83526F4C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83526F50"))) PPC_WEAK_FUNC(sub_83526F50);
PPC_FUNC_IMPL(__imp__sub_83526F50) {
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
	// lis r10,-31865
	ctx.r10.s64 = -2088304640;
	// lis r9,-31836
	ctx.r9.s64 = -2086404096;
	// addi r6,r10,17376
	ctx.r6.s64 = ctx.r10.s64 + 17376;
	// lis r8,-32239
	ctx.r8.s64 = -2112815104;
	// lis r7,-31836
	ctx.r7.s64 = -2086404096;
	// stw r6,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r6.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r5,r9,3540
	ctx.r5.s64 = ctx.r9.s64 + 3540;
	// addi r4,r8,-31836
	ctx.r4.s64 = ctx.r8.s64 + -31836;
	// stw r11,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r11.u32);
	// addi r3,r7,3684
	ctx.r3.s64 = ctx.r7.s64 + 3684;
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
	ctx.lr = 0x83526FB8;
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

__attribute__((alias("__imp__sub_83526FCC"))) PPC_WEAK_FUNC(sub_83526FCC);
PPC_FUNC_IMPL(__imp__sub_83526FCC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83526FD0"))) PPC_WEAK_FUNC(sub_83526FD0);
PPC_FUNC_IMPL(__imp__sub_83526FD0) {
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
	// lis r10,-31865
	ctx.r10.s64 = -2088304640;
	// lis r9,-31836
	ctx.r9.s64 = -2086404096;
	// addi r6,r10,17520
	ctx.r6.s64 = ctx.r10.s64 + 17520;
	// lis r8,-32234
	ctx.r8.s64 = -2112487424;
	// lis r7,-31836
	ctx.r7.s64 = -2086404096;
	// stw r6,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r6.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r5,r9,3540
	ctx.r5.s64 = ctx.r9.s64 + 3540;
	// addi r4,r8,4292
	ctx.r4.s64 = ctx.r8.s64 + 4292;
	// stw r11,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r11.u32);
	// addi r3,r7,3732
	ctx.r3.s64 = ctx.r7.s64 + 3732;
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
	// li r6,0
	ctx.r6.s64 = 0;
	// bl 0x82ef5ae8
	ctx.lr = 0x83527038;
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

__attribute__((alias("__imp__sub_8352704C"))) PPC_WEAK_FUNC(sub_8352704C);
PPC_FUNC_IMPL(__imp__sub_8352704C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83527050"))) PPC_WEAK_FUNC(sub_83527050);
PPC_FUNC_IMPL(__imp__sub_83527050) {
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
	// lis r10,-31865
	ctx.r10.s64 = -2088304640;
	// lis r9,-31836
	ctx.r9.s64 = -2086404096;
	// addi r6,r10,17712
	ctx.r6.s64 = ctx.r10.s64 + 17712;
	// lis r8,-32240
	ctx.r8.s64 = -2112880640;
	// lis r7,-31836
	ctx.r7.s64 = -2086404096;
	// stw r6,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r6.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r5,r9,3540
	ctx.r5.s64 = ctx.r9.s64 + 3540;
	// addi r4,r8,32616
	ctx.r4.s64 = ctx.r8.s64 + 32616;
	// stw r11,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r11.u32);
	// addi r3,r7,3780
	ctx.r3.s64 = ctx.r7.s64 + 3780;
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
	ctx.lr = 0x835270B8;
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

__attribute__((alias("__imp__sub_835270CC"))) PPC_WEAK_FUNC(sub_835270CC);
PPC_FUNC_IMPL(__imp__sub_835270CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_835270D0"))) PPC_WEAK_FUNC(sub_835270D0);
PPC_FUNC_IMPL(__imp__sub_835270D0) {
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
	// lis r10,-31865
	ctx.r10.s64 = -2088304640;
	// lis r9,-31836
	ctx.r9.s64 = -2086404096;
	// addi r6,r10,17736
	ctx.r6.s64 = ctx.r10.s64 + 17736;
	// lis r8,-32240
	ctx.r8.s64 = -2112880640;
	// lis r7,-31836
	ctx.r7.s64 = -2086404096;
	// stw r6,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r6.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r5,r9,3540
	ctx.r5.s64 = ctx.r9.s64 + 3540;
	// addi r4,r8,32700
	ctx.r4.s64 = ctx.r8.s64 + 32700;
	// stw r11,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r11.u32);
	// addi r3,r7,3828
	ctx.r3.s64 = ctx.r7.s64 + 3828;
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
	ctx.lr = 0x83527138;
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

__attribute__((alias("__imp__sub_8352714C"))) PPC_WEAK_FUNC(sub_8352714C);
PPC_FUNC_IMPL(__imp__sub_8352714C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83527150"))) PPC_WEAK_FUNC(sub_83527150);
PPC_FUNC_IMPL(__imp__sub_83527150) {
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
	// lis r10,-31865
	ctx.r10.s64 = -2088304640;
	// lis r8,-31836
	ctx.r8.s64 = -2086404096;
	// addi r5,r10,17764
	ctx.r5.s64 = ctx.r10.s64 + 17764;
	// lis r7,-32240
	ctx.r7.s64 = -2112880640;
	// lis r6,-31836
	ctx.r6.s64 = -2086404096;
	// stw r5,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r5.u32);
	// lis r9,-32234
	ctx.r9.s64 = -2112487424;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r5,r8,6564
	ctx.r5.s64 = ctx.r8.s64 + 6564;
	// addi r4,r7,31420
	ctx.r4.s64 = ctx.r7.s64 + 31420;
	// stw r11,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r11.u32);
	// addi r3,r6,3876
	ctx.r3.s64 = ctx.r6.s64 + 3876;
	// stw r11,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r11.u32);
	// li r31,2
	ctx.r31.s64 = 2;
	// stw r11,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r11.u32);
	// addi r9,r9,-6752
	ctx.r9.s64 = ctx.r9.s64 + -6752;
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
	ctx.lr = 0x835271BC;
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

__attribute__((alias("__imp__sub_835271D0"))) PPC_WEAK_FUNC(sub_835271D0);
PPC_FUNC_IMPL(__imp__sub_835271D0) {
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
	// lis r10,-31865
	ctx.r10.s64 = -2088304640;
	// lis r9,-32239
	ctx.r9.s64 = -2112815104;
	// addi r7,r10,17816
	ctx.r7.s64 = ctx.r10.s64 + 17816;
	// lis r8,-31836
	ctx.r8.s64 = -2086404096;
	// li r6,6
	ctx.r6.s64 = 6;
	// stw r7,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r7.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r4,r9,-31900
	ctx.r4.s64 = ctx.r9.s64 + -31900;
	// stw r6,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r6.u32);
	// addi r3,r8,3924
	ctx.r3.s64 = ctx.r8.s64 + 3924;
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
	ctx.lr = 0x83527230;
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

__attribute__((alias("__imp__sub_83527240"))) PPC_WEAK_FUNC(sub_83527240);
PPC_FUNC_IMPL(__imp__sub_83527240) {
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
	// lis r10,-31865
	ctx.r10.s64 = -2088304640;
	// lis r9,-31836
	ctx.r9.s64 = -2086404096;
	// addi r6,r10,17960
	ctx.r6.s64 = ctx.r10.s64 + 17960;
	// lis r8,-32239
	ctx.r8.s64 = -2112815104;
	// lis r7,-31836
	ctx.r7.s64 = -2086404096;
	// stw r6,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r6.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r5,r9,3876
	ctx.r5.s64 = ctx.r9.s64 + 3876;
	// addi r4,r8,-31780
	ctx.r4.s64 = ctx.r8.s64 + -31780;
	// stw r11,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r11.u32);
	// addi r3,r7,3972
	ctx.r3.s64 = ctx.r7.s64 + 3972;
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
	ctx.lr = 0x835272A8;
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

__attribute__((alias("__imp__sub_835272BC"))) PPC_WEAK_FUNC(sub_835272BC);
PPC_FUNC_IMPL(__imp__sub_835272BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_835272C0"))) PPC_WEAK_FUNC(sub_835272C0);
PPC_FUNC_IMPL(__imp__sub_835272C0) {
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
	// lis r10,-31865
	ctx.r10.s64 = -2088304640;
	// lis r9,-32239
	ctx.r9.s64 = -2112815104;
	// addi r7,r10,17984
	ctx.r7.s64 = ctx.r10.s64 + 17984;
	// lis r8,-31836
	ctx.r8.s64 = -2086404096;
	// li r6,4
	ctx.r6.s64 = 4;
	// stw r7,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r7.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r4,r9,-32616
	ctx.r4.s64 = ctx.r9.s64 + -32616;
	// stw r6,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r6.u32);
	// addi r3,r8,4020
	ctx.r3.s64 = ctx.r8.s64 + 4020;
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
	ctx.lr = 0x83527320;
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

__attribute__((alias("__imp__sub_83527330"))) PPC_WEAK_FUNC(sub_83527330);
PPC_FUNC_IMPL(__imp__sub_83527330) {
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
	// lis r10,-31865
	ctx.r10.s64 = -2088304640;
	// lis r9,-31836
	ctx.r9.s64 = -2086404096;
	// addi r6,r10,18080
	ctx.r6.s64 = ctx.r10.s64 + 18080;
	// lis r8,-32239
	ctx.r8.s64 = -2112815104;
	// lis r7,-31836
	ctx.r7.s64 = -2086404096;
	// stw r6,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r6.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r5,r9,3876
	ctx.r5.s64 = ctx.r9.s64 + 3876;
	// addi r4,r8,-32660
	ctx.r4.s64 = ctx.r8.s64 + -32660;
	// stw r11,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r11.u32);
	// addi r3,r7,4068
	ctx.r3.s64 = ctx.r7.s64 + 4068;
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
	ctx.lr = 0x83527398;
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

__attribute__((alias("__imp__sub_835273AC"))) PPC_WEAK_FUNC(sub_835273AC);
PPC_FUNC_IMPL(__imp__sub_835273AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_835273B0"))) PPC_WEAK_FUNC(sub_835273B0);
PPC_FUNC_IMPL(__imp__sub_835273B0) {
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
	// lis r10,-31865
	ctx.r10.s64 = -2088304640;
	// lis r9,-32239
	ctx.r9.s64 = -2112815104;
	// addi r7,r10,18128
	ctx.r7.s64 = ctx.r10.s64 + 18128;
	// lis r8,-31836
	ctx.r8.s64 = -2086404096;
	// li r6,7
	ctx.r6.s64 = 7;
	// stw r7,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r7.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r4,r9,-32720
	ctx.r4.s64 = ctx.r9.s64 + -32720;
	// stw r6,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r6.u32);
	// addi r3,r8,4116
	ctx.r3.s64 = ctx.r8.s64 + 4116;
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
	ctx.lr = 0x83527410;
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

__attribute__((alias("__imp__sub_83527420"))) PPC_WEAK_FUNC(sub_83527420);
PPC_FUNC_IMPL(__imp__sub_83527420) {
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
	// lis r10,-31865
	ctx.r10.s64 = -2088304640;
	// lis r9,-31836
	ctx.r9.s64 = -2086404096;
	// addi r6,r10,18296
	ctx.r6.s64 = ctx.r10.s64 + 18296;
	// lis r8,-32240
	ctx.r8.s64 = -2112880640;
	// lis r7,-31836
	ctx.r7.s64 = -2086404096;
	// stw r6,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r6.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r5,r9,3876
	ctx.r5.s64 = ctx.r9.s64 + 3876;
	// addi r4,r8,32716
	ctx.r4.s64 = ctx.r8.s64 + 32716;
	// stw r11,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r11.u32);
	// addi r3,r7,4164
	ctx.r3.s64 = ctx.r7.s64 + 4164;
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
	ctx.lr = 0x83527488;
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

__attribute__((alias("__imp__sub_8352749C"))) PPC_WEAK_FUNC(sub_8352749C);
PPC_FUNC_IMPL(__imp__sub_8352749C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_835274A0"))) PPC_WEAK_FUNC(sub_835274A0);
PPC_FUNC_IMPL(__imp__sub_835274A0) {
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
	// lis r10,-31865
	ctx.r10.s64 = -2088304640;
	// lis r9,-32239
	ctx.r9.s64 = -2112815104;
	// addi r7,r10,18320
	ctx.r7.s64 = ctx.r10.s64 + 18320;
	// lis r8,-31836
	ctx.r8.s64 = -2086404096;
	// li r6,5
	ctx.r6.s64 = 5;
	// stw r7,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r7.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r4,r9,-31232
	ctx.r4.s64 = ctx.r9.s64 + -31232;
	// stw r6,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r6.u32);
	// addi r3,r8,4212
	ctx.r3.s64 = ctx.r8.s64 + 4212;
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
	ctx.lr = 0x83527500;
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

__attribute__((alias("__imp__sub_83527510"))) PPC_WEAK_FUNC(sub_83527510);
PPC_FUNC_IMPL(__imp__sub_83527510) {
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
	// lis r10,-31865
	ctx.r10.s64 = -2088304640;
	// lis r9,-31836
	ctx.r9.s64 = -2086404096;
	// addi r6,r10,18440
	ctx.r6.s64 = ctx.r10.s64 + 18440;
	// lis r8,-32239
	ctx.r8.s64 = -2112815104;
	// lis r7,-31836
	ctx.r7.s64 = -2086404096;
	// stw r6,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r6.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r5,r9,3876
	ctx.r5.s64 = ctx.r9.s64 + 3876;
	// addi r4,r8,-31436
	ctx.r4.s64 = ctx.r8.s64 + -31436;
	// stw r11,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r11.u32);
	// addi r3,r7,4260
	ctx.r3.s64 = ctx.r7.s64 + 4260;
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
	ctx.lr = 0x83527578;
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

__attribute__((alias("__imp__sub_8352758C"))) PPC_WEAK_FUNC(sub_8352758C);
PPC_FUNC_IMPL(__imp__sub_8352758C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83527590"))) PPC_WEAK_FUNC(sub_83527590);
PPC_FUNC_IMPL(__imp__sub_83527590) {
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
	// lis r10,-31865
	ctx.r10.s64 = -2088304640;
	// lis r9,-32240
	ctx.r9.s64 = -2112880640;
	// addi r7,r10,18488
	ctx.r7.s64 = ctx.r10.s64 + 18488;
	// lis r8,-31836
	ctx.r8.s64 = -2086404096;
	// li r6,4
	ctx.r6.s64 = 4;
	// stw r7,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r7.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r4,r9,32396
	ctx.r4.s64 = ctx.r9.s64 + 32396;
	// stw r6,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r6.u32);
	// addi r3,r8,4308
	ctx.r3.s64 = ctx.r8.s64 + 4308;
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
	ctx.lr = 0x835275F0;
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

__attribute__((alias("__imp__sub_83527600"))) PPC_WEAK_FUNC(sub_83527600);
PPC_FUNC_IMPL(__imp__sub_83527600) {
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
	// lis r10,-31865
	ctx.r10.s64 = -2088304640;
	// lis r9,-31836
	ctx.r9.s64 = -2086404096;
	// addi r6,r10,18584
	ctx.r6.s64 = ctx.r10.s64 + 18584;
	// lis r8,-32240
	ctx.r8.s64 = -2112880640;
	// lis r7,-31836
	ctx.r7.s64 = -2086404096;
	// stw r6,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r6.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r5,r9,3876
	ctx.r5.s64 = ctx.r9.s64 + 3876;
	// addi r4,r8,31132
	ctx.r4.s64 = ctx.r8.s64 + 31132;
	// stw r11,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r11.u32);
	// addi r3,r7,4356
	ctx.r3.s64 = ctx.r7.s64 + 4356;
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
	ctx.lr = 0x83527668;
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

__attribute__((alias("__imp__sub_8352767C"))) PPC_WEAK_FUNC(sub_8352767C);
PPC_FUNC_IMPL(__imp__sub_8352767C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83527680"))) PPC_WEAK_FUNC(sub_83527680);
PPC_FUNC_IMPL(__imp__sub_83527680) {
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
	// lis r10,-31865
	ctx.r10.s64 = -2088304640;
	// lis r9,-32239
	ctx.r9.s64 = -2112815104;
	// addi r7,r10,18608
	ctx.r7.s64 = ctx.r10.s64 + 18608;
	// lis r8,-31836
	ctx.r8.s64 = -2086404096;
	// li r6,4
	ctx.r6.s64 = 4;
	// stw r7,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r7.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r4,r9,-30740
	ctx.r4.s64 = ctx.r9.s64 + -30740;
	// stw r6,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r6.u32);
	// addi r3,r8,4404
	ctx.r3.s64 = ctx.r8.s64 + 4404;
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
	ctx.lr = 0x835276E0;
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

__attribute__((alias("__imp__sub_835276F0"))) PPC_WEAK_FUNC(sub_835276F0);
PPC_FUNC_IMPL(__imp__sub_835276F0) {
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
	// lis r10,-31865
	ctx.r10.s64 = -2088304640;
	// lis r9,-31836
	ctx.r9.s64 = -2086404096;
	// addi r6,r10,18704
	ctx.r6.s64 = ctx.r10.s64 + 18704;
	// lis r8,-32240
	ctx.r8.s64 = -2112880640;
	// lis r7,-31836
	ctx.r7.s64 = -2086404096;
	// stw r6,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r6.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r5,r9,3876
	ctx.r5.s64 = ctx.r9.s64 + 3876;
	// addi r4,r8,31076
	ctx.r4.s64 = ctx.r8.s64 + 31076;
	// stw r11,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r11.u32);
	// addi r3,r7,4452
	ctx.r3.s64 = ctx.r7.s64 + 4452;
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
	ctx.lr = 0x83527758;
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

__attribute__((alias("__imp__sub_8352776C"))) PPC_WEAK_FUNC(sub_8352776C);
PPC_FUNC_IMPL(__imp__sub_8352776C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83527770"))) PPC_WEAK_FUNC(sub_83527770);
PPC_FUNC_IMPL(__imp__sub_83527770) {
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
	// lis r10,-31865
	ctx.r10.s64 = -2088304640;
	// lis r9,-32239
	ctx.r9.s64 = -2112815104;
	// addi r7,r10,18728
	ctx.r7.s64 = ctx.r10.s64 + 18728;
	// lis r8,-31836
	ctx.r8.s64 = -2086404096;
	// li r6,3
	ctx.r6.s64 = 3;
	// stw r7,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r7.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r4,r9,-31132
	ctx.r4.s64 = ctx.r9.s64 + -31132;
	// stw r6,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r6.u32);
	// addi r3,r8,4500
	ctx.r3.s64 = ctx.r8.s64 + 4500;
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
	ctx.lr = 0x835277D0;
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

__attribute__((alias("__imp__sub_835277E0"))) PPC_WEAK_FUNC(sub_835277E0);
PPC_FUNC_IMPL(__imp__sub_835277E0) {
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
	// lis r10,-31865
	ctx.r10.s64 = -2088304640;
	// lis r9,-31836
	ctx.r9.s64 = -2086404096;
	// addi r6,r10,18800
	ctx.r6.s64 = ctx.r10.s64 + 18800;
	// lis r8,-32239
	ctx.r8.s64 = -2112815104;
	// lis r7,-31836
	ctx.r7.s64 = -2086404096;
	// stw r6,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r6.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r5,r9,3876
	ctx.r5.s64 = ctx.r9.s64 + 3876;
	// addi r4,r8,-31296
	ctx.r4.s64 = ctx.r8.s64 + -31296;
	// stw r11,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r11.u32);
	// addi r3,r7,4548
	ctx.r3.s64 = ctx.r7.s64 + 4548;
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
	ctx.lr = 0x83527848;
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

__attribute__((alias("__imp__sub_8352785C"))) PPC_WEAK_FUNC(sub_8352785C);
PPC_FUNC_IMPL(__imp__sub_8352785C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83527860"))) PPC_WEAK_FUNC(sub_83527860);
PPC_FUNC_IMPL(__imp__sub_83527860) {
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
	// lis r10,-31865
	ctx.r10.s64 = -2088304640;
	// lis r9,-32240
	ctx.r9.s64 = -2112880640;
	// addi r7,r10,18896
	ctx.r7.s64 = ctx.r10.s64 + 18896;
	// lis r8,-31836
	ctx.r8.s64 = -2086404096;
	// li r6,2
	ctx.r6.s64 = 2;
	// stw r7,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r7.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r4,r9,32208
	ctx.r4.s64 = ctx.r9.s64 + 32208;
	// stw r6,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r6.u32);
	// addi r3,r8,4596
	ctx.r3.s64 = ctx.r8.s64 + 4596;
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
	ctx.lr = 0x835278C0;
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

__attribute__((alias("__imp__sub_835278D0"))) PPC_WEAK_FUNC(sub_835278D0);
PPC_FUNC_IMPL(__imp__sub_835278D0) {
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
	// lis r10,-31865
	ctx.r10.s64 = -2088304640;
	// lis r9,-31836
	ctx.r9.s64 = -2086404096;
	// addi r6,r10,18944
	ctx.r6.s64 = ctx.r10.s64 + 18944;
	// lis r8,-32240
	ctx.r8.s64 = -2112880640;
	// lis r7,-31836
	ctx.r7.s64 = -2086404096;
	// stw r6,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r6.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r5,r9,6564
	ctx.r5.s64 = ctx.r9.s64 + 6564;
	// addi r4,r8,31388
	ctx.r4.s64 = ctx.r8.s64 + 31388;
	// stw r11,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r11.u32);
	// addi r3,r7,4644
	ctx.r3.s64 = ctx.r7.s64 + 4644;
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
	ctx.lr = 0x83527938;
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

__attribute__((alias("__imp__sub_8352794C"))) PPC_WEAK_FUNC(sub_8352794C);
PPC_FUNC_IMPL(__imp__sub_8352794C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83527950"))) PPC_WEAK_FUNC(sub_83527950);
PPC_FUNC_IMPL(__imp__sub_83527950) {
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
	// lis r10,-31865
	ctx.r10.s64 = -2088304640;
	// lis r9,-32234
	ctx.r9.s64 = -2112487424;
	// addi r7,r10,18992
	ctx.r7.s64 = ctx.r10.s64 + 18992;
	// lis r8,-31836
	ctx.r8.s64 = -2086404096;
	// li r6,4
	ctx.r6.s64 = 4;
	// stw r7,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r7.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r4,r9,-14388
	ctx.r4.s64 = ctx.r9.s64 + -14388;
	// stw r6,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r6.u32);
	// addi r3,r8,4692
	ctx.r3.s64 = ctx.r8.s64 + 4692;
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
	ctx.lr = 0x835279B0;
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

__attribute__((alias("__imp__sub_835279C0"))) PPC_WEAK_FUNC(sub_835279C0);
PPC_FUNC_IMPL(__imp__sub_835279C0) {
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
	// lis r10,-31865
	ctx.r10.s64 = -2088304640;
	// lis r9,-31836
	ctx.r9.s64 = -2086404096;
	// addi r6,r10,19088
	ctx.r6.s64 = ctx.r10.s64 + 19088;
	// lis r8,-32239
	ctx.r8.s64 = -2112815104;
	// lis r7,-31836
	ctx.r7.s64 = -2086404096;
	// stw r6,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r6.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r5,r9,4644
	ctx.r5.s64 = ctx.r9.s64 + 4644;
	// addi r4,r8,-30788
	ctx.r4.s64 = ctx.r8.s64 + -30788;
	// stw r11,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r11.u32);
	// addi r3,r7,4740
	ctx.r3.s64 = ctx.r7.s64 + 4740;
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
	ctx.lr = 0x83527A28;
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

__attribute__((alias("__imp__sub_83527A3C"))) PPC_WEAK_FUNC(sub_83527A3C);
PPC_FUNC_IMPL(__imp__sub_83527A3C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83527A40"))) PPC_WEAK_FUNC(sub_83527A40);
PPC_FUNC_IMPL(__imp__sub_83527A40) {
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
	// lis r10,-31865
	ctx.r10.s64 = -2088304640;
	// lis r9,-32240
	ctx.r9.s64 = -2112880640;
	// addi r7,r10,19184
	ctx.r7.s64 = ctx.r10.s64 + 19184;
	// lis r8,-31836
	ctx.r8.s64 = -2086404096;
	// li r6,2
	ctx.r6.s64 = 2;
	// stw r7,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r7.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r4,r9,32496
	ctx.r4.s64 = ctx.r9.s64 + 32496;
	// stw r6,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r6.u32);
	// addi r3,r8,4788
	ctx.r3.s64 = ctx.r8.s64 + 4788;
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
	ctx.lr = 0x83527AA0;
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

__attribute__((alias("__imp__sub_83527AB0"))) PPC_WEAK_FUNC(sub_83527AB0);
PPC_FUNC_IMPL(__imp__sub_83527AB0) {
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
	// lis r10,-31865
	ctx.r10.s64 = -2088304640;
	// lis r9,-31836
	ctx.r9.s64 = -2086404096;
	// addi r6,r10,19232
	ctx.r6.s64 = ctx.r10.s64 + 19232;
	// lis r8,-32239
	ctx.r8.s64 = -2112815104;
	// lis r7,-31836
	ctx.r7.s64 = -2086404096;
	// stw r6,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r6.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r5,r9,4644
	ctx.r5.s64 = ctx.r9.s64 + 4644;
	// addi r4,r8,-32344
	ctx.r4.s64 = ctx.r8.s64 + -32344;
	// stw r11,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r11.u32);
	// addi r3,r7,4836
	ctx.r3.s64 = ctx.r7.s64 + 4836;
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
	ctx.lr = 0x83527B18;
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

__attribute__((alias("__imp__sub_83527B2C"))) PPC_WEAK_FUNC(sub_83527B2C);
PPC_FUNC_IMPL(__imp__sub_83527B2C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83527B30"))) PPC_WEAK_FUNC(sub_83527B30);
PPC_FUNC_IMPL(__imp__sub_83527B30) {
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
	// lis r10,-31865
	ctx.r10.s64 = -2088304640;
	// lis r9,-31836
	ctx.r9.s64 = -2086404096;
	// addi r6,r10,19304
	ctx.r6.s64 = ctx.r10.s64 + 19304;
	// lis r8,-32240
	ctx.r8.s64 = -2112880640;
	// lis r7,-31836
	ctx.r7.s64 = -2086404096;
	// stw r6,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r6.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r5,r9,4644
	ctx.r5.s64 = ctx.r9.s64 + 4644;
	// addi r4,r8,31772
	ctx.r4.s64 = ctx.r8.s64 + 31772;
	// stw r11,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r11.u32);
	// addi r3,r7,4884
	ctx.r3.s64 = ctx.r7.s64 + 4884;
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
	ctx.lr = 0x83527B98;
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

__attribute__((alias("__imp__sub_83527BAC"))) PPC_WEAK_FUNC(sub_83527BAC);
PPC_FUNC_IMPL(__imp__sub_83527BAC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83527BB0"))) PPC_WEAK_FUNC(sub_83527BB0);
PPC_FUNC_IMPL(__imp__sub_83527BB0) {
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
	// lis r10,-31865
	ctx.r10.s64 = -2088304640;
	// lis r9,-31836
	ctx.r9.s64 = -2086404096;
	// addi r6,r10,19328
	ctx.r6.s64 = ctx.r10.s64 + 19328;
	// lis r8,-32238
	ctx.r8.s64 = -2112749568;
	// lis r7,-31836
	ctx.r7.s64 = -2086404096;
	// stw r6,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r6.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r5,r9,4644
	ctx.r5.s64 = ctx.r9.s64 + 4644;
	// addi r4,r8,27448
	ctx.r4.s64 = ctx.r8.s64 + 27448;
	// stw r11,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r11.u32);
	// addi r3,r7,4932
	ctx.r3.s64 = ctx.r7.s64 + 4932;
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
	ctx.lr = 0x83527C18;
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

__attribute__((alias("__imp__sub_83527C2C"))) PPC_WEAK_FUNC(sub_83527C2C);
PPC_FUNC_IMPL(__imp__sub_83527C2C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83527C30"))) PPC_WEAK_FUNC(sub_83527C30);
PPC_FUNC_IMPL(__imp__sub_83527C30) {
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
	// lis r10,-31865
	ctx.r10.s64 = -2088304640;
	// lis r9,-31836
	ctx.r9.s64 = -2086404096;
	// addi r6,r10,19400
	ctx.r6.s64 = ctx.r10.s64 + 19400;
	// lis r8,-32240
	ctx.r8.s64 = -2112880640;
	// lis r7,-31836
	ctx.r7.s64 = -2086404096;
	// stw r6,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r6.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r5,r9,4644
	ctx.r5.s64 = ctx.r9.s64 + 4644;
	// addi r4,r8,32188
	ctx.r4.s64 = ctx.r8.s64 + 32188;
	// stw r11,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r11.u32);
	// addi r3,r7,4980
	ctx.r3.s64 = ctx.r7.s64 + 4980;
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
	ctx.lr = 0x83527C98;
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

__attribute__((alias("__imp__sub_83527CAC"))) PPC_WEAK_FUNC(sub_83527CAC);
PPC_FUNC_IMPL(__imp__sub_83527CAC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83527CB0"))) PPC_WEAK_FUNC(sub_83527CB0);
PPC_FUNC_IMPL(__imp__sub_83527CB0) {
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
	// lis r10,-31865
	ctx.r10.s64 = -2088304640;
	// lis r9,-32240
	ctx.r9.s64 = -2112880640;
	// addi r7,r10,19496
	ctx.r7.s64 = ctx.r10.s64 + 19496;
	// lis r8,-31836
	ctx.r8.s64 = -2086404096;
	// li r6,2
	ctx.r6.s64 = 2;
	// stw r7,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r7.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r4,r9,32316
	ctx.r4.s64 = ctx.r9.s64 + 32316;
	// stw r6,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r6.u32);
	// addi r3,r8,5028
	ctx.r3.s64 = ctx.r8.s64 + 5028;
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
	ctx.lr = 0x83527D10;
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

__attribute__((alias("__imp__sub_83527D20"))) PPC_WEAK_FUNC(sub_83527D20);
PPC_FUNC_IMPL(__imp__sub_83527D20) {
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
	// lis r10,-31865
	ctx.r10.s64 = -2088304640;
	// lis r9,-31836
	ctx.r9.s64 = -2086404096;
	// addi r6,r10,19544
	ctx.r6.s64 = ctx.r10.s64 + 19544;
	// lis r8,-32240
	ctx.r8.s64 = -2112880640;
	// lis r7,-31836
	ctx.r7.s64 = -2086404096;
	// stw r6,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r6.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r5,r9,4644
	ctx.r5.s64 = ctx.r9.s64 + 4644;
	// addi r4,r8,32092
	ctx.r4.s64 = ctx.r8.s64 + 32092;
	// stw r11,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r11.u32);
	// addi r3,r7,5076
	ctx.r3.s64 = ctx.r7.s64 + 5076;
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
	// li r6,0
	ctx.r6.s64 = 0;
	// bl 0x82ef5ae8
	ctx.lr = 0x83527D88;
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

__attribute__((alias("__imp__sub_83527D9C"))) PPC_WEAK_FUNC(sub_83527D9C);
PPC_FUNC_IMPL(__imp__sub_83527D9C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83527DA0"))) PPC_WEAK_FUNC(sub_83527DA0);
PPC_FUNC_IMPL(__imp__sub_83527DA0) {
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
	// lis r10,-31865
	ctx.r10.s64 = -2088304640;
	// lis r9,-31836
	ctx.r9.s64 = -2086404096;
	// addi r6,r10,19784
	ctx.r6.s64 = ctx.r10.s64 + 19784;
	// lis r8,-32239
	ctx.r8.s64 = -2112815104;
	// lis r7,-31836
	ctx.r7.s64 = -2086404096;
	// stw r6,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r6.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r5,r9,4644
	ctx.r5.s64 = ctx.r9.s64 + 4644;
	// addi r4,r8,-30868
	ctx.r4.s64 = ctx.r8.s64 + -30868;
	// stw r11,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r11.u32);
	// addi r3,r7,5124
	ctx.r3.s64 = ctx.r7.s64 + 5124;
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
	ctx.lr = 0x83527E08;
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

__attribute__((alias("__imp__sub_83527E1C"))) PPC_WEAK_FUNC(sub_83527E1C);
PPC_FUNC_IMPL(__imp__sub_83527E1C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83527E20"))) PPC_WEAK_FUNC(sub_83527E20);
PPC_FUNC_IMPL(__imp__sub_83527E20) {
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
	// lis r10,-31865
	ctx.r10.s64 = -2088304640;
	// lis r9,-31836
	ctx.r9.s64 = -2086404096;
	// addi r6,r10,19928
	ctx.r6.s64 = ctx.r10.s64 + 19928;
	// lis r8,-32239
	ctx.r8.s64 = -2112815104;
	// lis r7,-31836
	ctx.r7.s64 = -2086404096;
	// stw r6,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r6.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r5,r9,4644
	ctx.r5.s64 = ctx.r9.s64 + 4644;
	// addi r4,r8,-31496
	ctx.r4.s64 = ctx.r8.s64 + -31496;
	// stw r11,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r11.u32);
	// addi r3,r7,5172
	ctx.r3.s64 = ctx.r7.s64 + 5172;
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
	ctx.lr = 0x83527E88;
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

__attribute__((alias("__imp__sub_83527E9C"))) PPC_WEAK_FUNC(sub_83527E9C);
PPC_FUNC_IMPL(__imp__sub_83527E9C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83527EA0"))) PPC_WEAK_FUNC(sub_83527EA0);
PPC_FUNC_IMPL(__imp__sub_83527EA0) {
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
	// lis r10,-31865
	ctx.r10.s64 = -2088304640;
	// lis r9,-32239
	ctx.r9.s64 = -2112815104;
	// addi r7,r10,20024
	ctx.r7.s64 = ctx.r10.s64 + 20024;
	// lis r8,-31836
	ctx.r8.s64 = -2086404096;
	// li r6,2
	ctx.r6.s64 = 2;
	// stw r7,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r7.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r4,r9,-32132
	ctx.r4.s64 = ctx.r9.s64 + -32132;
	// stw r6,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r6.u32);
	// addi r3,r8,5220
	ctx.r3.s64 = ctx.r8.s64 + 5220;
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
	ctx.lr = 0x83527F00;
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

__attribute__((alias("__imp__sub_83527F10"))) PPC_WEAK_FUNC(sub_83527F10);
PPC_FUNC_IMPL(__imp__sub_83527F10) {
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
	// lis r10,-31865
	ctx.r10.s64 = -2088304640;
	// lis r9,-31836
	ctx.r9.s64 = -2086404096;
	// addi r6,r10,20072
	ctx.r6.s64 = ctx.r10.s64 + 20072;
	// lis r8,-32239
	ctx.r8.s64 = -2112815104;
	// lis r7,-31836
	ctx.r7.s64 = -2086404096;
	// stw r6,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r6.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r5,r9,4644
	ctx.r5.s64 = ctx.r9.s64 + 4644;
	// addi r4,r8,-31740
	ctx.r4.s64 = ctx.r8.s64 + -31740;
	// stw r11,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r11.u32);
	// addi r3,r7,5268
	ctx.r3.s64 = ctx.r7.s64 + 5268;
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
	ctx.lr = 0x83527F78;
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

__attribute__((alias("__imp__sub_83527F8C"))) PPC_WEAK_FUNC(sub_83527F8C);
PPC_FUNC_IMPL(__imp__sub_83527F8C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83527F90"))) PPC_WEAK_FUNC(sub_83527F90);
PPC_FUNC_IMPL(__imp__sub_83527F90) {
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
	// lis r10,-31865
	ctx.r10.s64 = -2088304640;
	// lis r9,-32240
	ctx.r9.s64 = -2112880640;
	// addi r7,r10,20168
	ctx.r7.s64 = ctx.r10.s64 + 20168;
	// lis r8,-31836
	ctx.r8.s64 = -2086404096;
	// li r6,4
	ctx.r6.s64 = 4;
	// stw r7,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r7.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r4,r9,31976
	ctx.r4.s64 = ctx.r9.s64 + 31976;
	// stw r6,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r6.u32);
	// addi r3,r8,5316
	ctx.r3.s64 = ctx.r8.s64 + 5316;
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
	ctx.lr = 0x83527FF0;
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

__attribute__((alias("__imp__sub_83528000"))) PPC_WEAK_FUNC(sub_83528000);
PPC_FUNC_IMPL(__imp__sub_83528000) {
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
	// lis r10,-31865
	ctx.r10.s64 = -2088304640;
	// lis r9,-32240
	ctx.r9.s64 = -2112880640;
	// addi r7,r10,20264
	ctx.r7.s64 = ctx.r10.s64 + 20264;
	// lis r8,-31836
	ctx.r8.s64 = -2086404096;
	// li r6,4
	ctx.r6.s64 = 4;
	// stw r7,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r7.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r4,r9,31496
	ctx.r4.s64 = ctx.r9.s64 + 31496;
	// stw r6,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r6.u32);
	// addi r3,r8,5364
	ctx.r3.s64 = ctx.r8.s64 + 5364;
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
	ctx.lr = 0x83528060;
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

__attribute__((alias("__imp__sub_83528070"))) PPC_WEAK_FUNC(sub_83528070);
PPC_FUNC_IMPL(__imp__sub_83528070) {
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
	// lis r10,-31865
	ctx.r10.s64 = -2088304640;
	// lis r9,-32240
	ctx.r9.s64 = -2112880640;
	// addi r7,r10,20360
	ctx.r7.s64 = ctx.r10.s64 + 20360;
	// lis r8,-31836
	ctx.r8.s64 = -2086404096;
	// li r6,2
	ctx.r6.s64 = 2;
	// stw r7,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r7.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r4,r9,31868
	ctx.r4.s64 = ctx.r9.s64 + 31868;
	// stw r6,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r6.u32);
	// addi r3,r8,5412
	ctx.r3.s64 = ctx.r8.s64 + 5412;
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
	ctx.lr = 0x835280D0;
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

__attribute__((alias("__imp__sub_835280E0"))) PPC_WEAK_FUNC(sub_835280E0);
PPC_FUNC_IMPL(__imp__sub_835280E0) {
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
	// lis r10,-31865
	ctx.r10.s64 = -2088304640;
	// lis r9,-31836
	ctx.r9.s64 = -2086404096;
	// addi r6,r10,20408
	ctx.r6.s64 = ctx.r10.s64 + 20408;
	// lis r8,-32240
	ctx.r8.s64 = -2112880640;
	// lis r7,-31836
	ctx.r7.s64 = -2086404096;
	// stw r6,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r6.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r5,r9,6564
	ctx.r5.s64 = ctx.r9.s64 + 6564;
	// addi r4,r8,31288
	ctx.r4.s64 = ctx.r8.s64 + 31288;
	// stw r11,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r11.u32);
	// addi r3,r7,5460
	ctx.r3.s64 = ctx.r7.s64 + 5460;
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
	// li r6,0
	ctx.r6.s64 = 0;
	// bl 0x82ef5ae8
	ctx.lr = 0x83528148;
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

__attribute__((alias("__imp__sub_8352815C"))) PPC_WEAK_FUNC(sub_8352815C);
PPC_FUNC_IMPL(__imp__sub_8352815C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83528160"))) PPC_WEAK_FUNC(sub_83528160);
PPC_FUNC_IMPL(__imp__sub_83528160) {
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
	// lis r10,-31865
	ctx.r10.s64 = -2088304640;
	// lis r9,-31836
	ctx.r9.s64 = -2086404096;
	// addi r6,r10,20648
	ctx.r6.s64 = ctx.r10.s64 + 20648;
	// lis r8,-32240
	ctx.r8.s64 = -2112880640;
	// lis r7,-31836
	ctx.r7.s64 = -2086404096;
	// stw r6,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r6.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r5,r9,6564
	ctx.r5.s64 = ctx.r9.s64 + 6564;
	// addi r4,r8,32276
	ctx.r4.s64 = ctx.r8.s64 + 32276;
	// stw r11,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r11.u32);
	// addi r3,r7,5508
	ctx.r3.s64 = ctx.r7.s64 + 5508;
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
	ctx.lr = 0x835281C8;
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

__attribute__((alias("__imp__sub_835281DC"))) PPC_WEAK_FUNC(sub_835281DC);
PPC_FUNC_IMPL(__imp__sub_835281DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_835281E0"))) PPC_WEAK_FUNC(sub_835281E0);
PPC_FUNC_IMPL(__imp__sub_835281E0) {
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
	// lis r10,-31865
	ctx.r10.s64 = -2088304640;
	// lis r9,-32240
	ctx.r9.s64 = -2112880640;
	// addi r7,r10,20696
	ctx.r7.s64 = ctx.r10.s64 + 20696;
	// lis r8,-31836
	ctx.r8.s64 = -2086404096;
	// li r6,2
	ctx.r6.s64 = 2;
	// stw r7,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r7.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r4,r9,32008
	ctx.r4.s64 = ctx.r9.s64 + 32008;
	// stw r6,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r6.u32);
	// addi r3,r8,5556
	ctx.r3.s64 = ctx.r8.s64 + 5556;
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
	ctx.lr = 0x83528240;
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

__attribute__((alias("__imp__sub_83528250"))) PPC_WEAK_FUNC(sub_83528250);
PPC_FUNC_IMPL(__imp__sub_83528250) {
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
	// lis r10,-31865
	ctx.r10.s64 = -2088304640;
	// lis r9,-31836
	ctx.r9.s64 = -2086404096;
	// addi r6,r10,20744
	ctx.r6.s64 = ctx.r10.s64 + 20744;
	// lis r8,-32240
	ctx.r8.s64 = -2112880640;
	// lis r7,-31836
	ctx.r7.s64 = -2086404096;
	// stw r6,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r6.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r5,r9,6564
	ctx.r5.s64 = ctx.r9.s64 + 6564;
	// addi r4,r8,31660
	ctx.r4.s64 = ctx.r8.s64 + 31660;
	// stw r11,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r11.u32);
	// addi r3,r7,5604
	ctx.r3.s64 = ctx.r7.s64 + 5604;
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
	ctx.lr = 0x835282B8;
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

__attribute__((alias("__imp__sub_835282CC"))) PPC_WEAK_FUNC(sub_835282CC);
PPC_FUNC_IMPL(__imp__sub_835282CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_835282D0"))) PPC_WEAK_FUNC(sub_835282D0);
PPC_FUNC_IMPL(__imp__sub_835282D0) {
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
	// lis r10,-31865
	ctx.r10.s64 = -2088304640;
	// lis r9,-31836
	ctx.r9.s64 = -2086404096;
	// addi r6,r10,20864
	ctx.r6.s64 = ctx.r10.s64 + 20864;
	// lis r8,-32240
	ctx.r8.s64 = -2112880640;
	// lis r7,-31836
	ctx.r7.s64 = -2086404096;
	// stw r6,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r6.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r5,r9,6564
	ctx.r5.s64 = ctx.r9.s64 + 6564;
	// addi r4,r8,31692
	ctx.r4.s64 = ctx.r8.s64 + 31692;
	// stw r11,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r11.u32);
	// addi r3,r7,5652
	ctx.r3.s64 = ctx.r7.s64 + 5652;
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
	ctx.lr = 0x83528338;
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

__attribute__((alias("__imp__sub_8352834C"))) PPC_WEAK_FUNC(sub_8352834C);
PPC_FUNC_IMPL(__imp__sub_8352834C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83528350"))) PPC_WEAK_FUNC(sub_83528350);
PPC_FUNC_IMPL(__imp__sub_83528350) {
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
	// lis r10,-31865
	ctx.r10.s64 = -2088304640;
	// lis r9,-32239
	ctx.r9.s64 = -2112815104;
	// addi r7,r10,20936
	ctx.r7.s64 = ctx.r10.s64 + 20936;
	// lis r8,-31836
	ctx.r8.s64 = -2086404096;
	// li r6,3
	ctx.r6.s64 = 3;
	// stw r7,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r7.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r4,r9,-32164
	ctx.r4.s64 = ctx.r9.s64 + -32164;
	// stw r6,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r6.u32);
	// addi r3,r8,5700
	ctx.r3.s64 = ctx.r8.s64 + 5700;
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
	ctx.lr = 0x835283B0;
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

__attribute__((alias("__imp__sub_835283C0"))) PPC_WEAK_FUNC(sub_835283C0);
PPC_FUNC_IMPL(__imp__sub_835283C0) {
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
	// lis r10,-31865
	ctx.r10.s64 = -2088304640;
	// lis r9,-32239
	ctx.r9.s64 = -2112815104;
	// addi r7,r10,21008
	ctx.r7.s64 = ctx.r10.s64 + 21008;
	// lis r8,-31836
	ctx.r8.s64 = -2086404096;
	// li r6,3
	ctx.r6.s64 = 3;
	// stw r7,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r7.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r4,r9,-32240
	ctx.r4.s64 = ctx.r9.s64 + -32240;
	// stw r6,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r6.u32);
	// addi r3,r8,5748
	ctx.r3.s64 = ctx.r8.s64 + 5748;
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
	ctx.lr = 0x83528420;
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

__attribute__((alias("__imp__sub_83528430"))) PPC_WEAK_FUNC(sub_83528430);
PPC_FUNC_IMPL(__imp__sub_83528430) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31865
	ctx.r11.s64 = -2088304640;
	// lis r10,-31864
	ctx.r10.s64 = -2088239104;
	// addi r9,r10,-5112
	ctx.r9.s64 = ctx.r10.s64 + -5112;
	// lwz r11,17812(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 17812);
	// stw r11,8(r9)
	PPC_STORE_U32(ctx.r9.u32 + 8, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83528448"))) PPC_WEAK_FUNC(sub_83528448);
PPC_FUNC_IMPL(__imp__sub_83528448) {
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
	// lis r10,-31864
	ctx.r10.s64 = -2088239104;
	// lis r8,-31836
	ctx.r8.s64 = -2086404096;
	// addi r5,r10,-5112
	ctx.r5.s64 = ctx.r10.s64 + -5112;
	// lis r7,-32239
	ctx.r7.s64 = -2112815104;
	// lis r6,-31836
	ctx.r6.s64 = -2086404096;
	// stw r5,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r5.u32);
	// lis r9,-32234
	ctx.r9.s64 = -2112487424;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r5,r8,3876
	ctx.r5.s64 = ctx.r8.s64 + 3876;
	// addi r4,r7,-32260
	ctx.r4.s64 = ctx.r7.s64 + -32260;
	// stw r11,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r11.u32);
	// addi r3,r6,5796
	ctx.r3.s64 = ctx.r6.s64 + 5796;
	// stw r11,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r11.u32);
	// li r31,5
	ctx.r31.s64 = 5;
	// stw r11,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r11.u32);
	// addi r9,r9,-6716
	ctx.r9.s64 = ctx.r9.s64 + -6716;
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
	ctx.lr = 0x835284B4;
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

__attribute__((alias("__imp__sub_835284C8"))) PPC_WEAK_FUNC(sub_835284C8);
PPC_FUNC_IMPL(__imp__sub_835284C8) {
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
	// lis r10,-31865
	ctx.r10.s64 = -2088304640;
	// lis r9,-32239
	ctx.r9.s64 = -2112815104;
	// addi r7,r10,21088
	ctx.r7.s64 = ctx.r10.s64 + 21088;
	// lis r8,-31836
	ctx.r8.s64 = -2086404096;
	// li r6,3
	ctx.r6.s64 = 3;
	// stw r7,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r7.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r4,r9,-32564
	ctx.r4.s64 = ctx.r9.s64 + -32564;
	// stw r6,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r6.u32);
	// addi r3,r8,5844
	ctx.r3.s64 = ctx.r8.s64 + 5844;
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
	ctx.lr = 0x83528528;
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

__attribute__((alias("__imp__sub_83528538"))) PPC_WEAK_FUNC(sub_83528538);
PPC_FUNC_IMPL(__imp__sub_83528538) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31865
	ctx.r11.s64 = -2088304640;
	// lis r10,-31864
	ctx.r10.s64 = -2088239104;
	// addi r9,r10,-4992
	ctx.r9.s64 = ctx.r10.s64 + -4992;
	// lwz r11,21080(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 21080);
	// stw r11,128(r9)
	PPC_STORE_U32(ctx.r9.u32 + 128, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83528550"))) PPC_WEAK_FUNC(sub_83528550);
PPC_FUNC_IMPL(__imp__sub_83528550) {
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
	// lis r10,-31864
	ctx.r10.s64 = -2088239104;
	// lis r8,-31836
	ctx.r8.s64 = -2086404096;
	// addi r5,r10,-4992
	ctx.r5.s64 = ctx.r10.s64 + -4992;
	// lis r7,-32239
	ctx.r7.s64 = -2112815104;
	// lis r6,-31836
	ctx.r6.s64 = -2086404096;
	// stw r5,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r5.u32);
	// lis r9,-32234
	ctx.r9.s64 = -2112487424;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r5,r8,4644
	ctx.r5.s64 = ctx.r8.s64 + 4644;
	// addi r4,r7,-32508
	ctx.r4.s64 = ctx.r7.s64 + -32508;
	// stw r11,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r11.u32);
	// addi r3,r6,5892
	ctx.r3.s64 = ctx.r6.s64 + 5892;
	// stw r11,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r11.u32);
	// li r31,6
	ctx.r31.s64 = 6;
	// stw r11,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r11.u32);
	// addi r9,r9,-6672
	ctx.r9.s64 = ctx.r9.s64 + -6672;
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
	ctx.lr = 0x835285BC;
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

__attribute__((alias("__imp__sub_835285D0"))) PPC_WEAK_FUNC(sub_835285D0);
PPC_FUNC_IMPL(__imp__sub_835285D0) {
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
	// lis r10,-31865
	ctx.r10.s64 = -2088304640;
	// lis r9,-32238
	ctx.r9.s64 = -2112749568;
	// addi r7,r10,21160
	ctx.r7.s64 = ctx.r10.s64 + 21160;
	// lis r8,-31836
	ctx.r8.s64 = -2086404096;
	// li r6,3
	ctx.r6.s64 = 3;
	// stw r7,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r7.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r4,r9,28312
	ctx.r4.s64 = ctx.r9.s64 + 28312;
	// stw r6,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r6.u32);
	// addi r3,r8,5940
	ctx.r3.s64 = ctx.r8.s64 + 5940;
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
	ctx.lr = 0x83528630;
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

__attribute__((alias("__imp__sub_83528640"))) PPC_WEAK_FUNC(sub_83528640);
PPC_FUNC_IMPL(__imp__sub_83528640) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31865
	ctx.r11.s64 = -2088304640;
	// lis r10,-31864
	ctx.r10.s64 = -2088239104;
	// addi r9,r10,-4848
	ctx.r9.s64 = ctx.r10.s64 + -4848;
	// lwz r11,21084(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 21084);
	// stw r11,8(r9)
	PPC_STORE_U32(ctx.r9.u32 + 8, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83528658"))) PPC_WEAK_FUNC(sub_83528658);
PPC_FUNC_IMPL(__imp__sub_83528658) {
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
	// lis r10,-31864
	ctx.r10.s64 = -2088239104;
	// lis r8,-32238
	ctx.r8.s64 = -2112749568;
	// addi r6,r10,-4848
	ctx.r6.s64 = ctx.r10.s64 + -4848;
	// lis r7,-31836
	ctx.r7.s64 = -2086404096;
	// li r5,2
	ctx.r5.s64 = 2;
	// stw r6,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r6.u32);
	// lis r9,-32234
	ctx.r9.s64 = -2112487424;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r5,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r5.u32);
	// addi r4,r8,28572
	ctx.r4.s64 = ctx.r8.s64 + 28572;
	// addi r3,r7,5988
	ctx.r3.s64 = ctx.r7.s64 + 5988;
	// stw r11,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r11.u32);
	// addi r9,r9,-6620
	ctx.r9.s64 = ctx.r9.s64 + -6620;
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
	ctx.lr = 0x835286BC;
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

__attribute__((alias("__imp__sub_835286CC"))) PPC_WEAK_FUNC(sub_835286CC);
PPC_FUNC_IMPL(__imp__sub_835286CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_835286D0"))) PPC_WEAK_FUNC(sub_835286D0);
PPC_FUNC_IMPL(__imp__sub_835286D0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31865
	ctx.r11.s64 = -2088304640;
	// lis r10,-31864
	ctx.r10.s64 = -2088239104;
	// addi r9,r10,-4800
	ctx.r9.s64 = ctx.r10.s64 + -4800;
	// lwz r11,21232(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 21232);
	// stw r11,8(r9)
	PPC_STORE_U32(ctx.r9.u32 + 8, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_835286E8"))) PPC_WEAK_FUNC(sub_835286E8);
PPC_FUNC_IMPL(__imp__sub_835286E8) {
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
	// lis r10,-31864
	ctx.r10.s64 = -2088239104;
	// lis r8,-32238
	ctx.r8.s64 = -2112749568;
	// addi r6,r10,-4800
	ctx.r6.s64 = ctx.r10.s64 + -4800;
	// lis r7,-31836
	ctx.r7.s64 = -2086404096;
	// li r5,5
	ctx.r5.s64 = 5;
	// stw r6,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r6.u32);
	// lis r9,-32234
	ctx.r9.s64 = -2112487424;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r5,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r5.u32);
	// addi r4,r8,28724
	ctx.r4.s64 = ctx.r8.s64 + 28724;
	// addi r3,r7,6036
	ctx.r3.s64 = ctx.r7.s64 + 6036;
	// stw r11,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r11.u32);
	// addi r9,r9,-6584
	ctx.r9.s64 = ctx.r9.s64 + -6584;
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
	ctx.lr = 0x8352874C;
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

__attribute__((alias("__imp__sub_8352875C"))) PPC_WEAK_FUNC(sub_8352875C);
PPC_FUNC_IMPL(__imp__sub_8352875C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83528760"))) PPC_WEAK_FUNC(sub_83528760);
PPC_FUNC_IMPL(__imp__sub_83528760) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31865
	ctx.r11.s64 = -2088304640;
	// lis r10,-31864
	ctx.r10.s64 = -2088239104;
	// addi r9,r10,-4680
	ctx.r9.s64 = ctx.r10.s64 + -4680;
	// lwz r11,21236(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 21236);
	// stw r11,8(r9)
	PPC_STORE_U32(ctx.r9.u32 + 8, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83528778"))) PPC_WEAK_FUNC(sub_83528778);
PPC_FUNC_IMPL(__imp__sub_83528778) {
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
	// lis r10,-31864
	ctx.r10.s64 = -2088239104;
	// lis r8,-32238
	ctx.r8.s64 = -2112749568;
	// addi r6,r10,-4680
	ctx.r6.s64 = ctx.r10.s64 + -4680;
	// lis r7,-31836
	ctx.r7.s64 = -2086404096;
	// li r5,2
	ctx.r5.s64 = 2;
	// stw r6,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r6.u32);
	// lis r9,-32234
	ctx.r9.s64 = -2112487424;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r5,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r5.u32);
	// addi r4,r8,28380
	ctx.r4.s64 = ctx.r8.s64 + 28380;
	// addi r3,r7,6084
	ctx.r3.s64 = ctx.r7.s64 + 6084;
	// stw r11,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r11.u32);
	// addi r9,r9,-6532
	ctx.r9.s64 = ctx.r9.s64 + -6532;
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
	ctx.lr = 0x835287DC;
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

__attribute__((alias("__imp__sub_835287EC"))) PPC_WEAK_FUNC(sub_835287EC);
PPC_FUNC_IMPL(__imp__sub_835287EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_835287F0"))) PPC_WEAK_FUNC(sub_835287F0);
PPC_FUNC_IMPL(__imp__sub_835287F0) {
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
	// lis r9,-31865
	ctx.r9.s64 = -2088304640;
	// li r10,2
	ctx.r10.s64 = 2;
	// addi r6,r9,21240
	ctx.r6.s64 = ctx.r9.s64 + 21240;
	// lis r8,-32240
	ctx.r8.s64 = -2112880640;
	// stw r10,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r10.u32);
	// lis r7,-31836
	ctx.r7.s64 = -2086404096;
	// stw r10,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r10.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r6,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r6.u32);
	// addi r4,r8,-7992
	ctx.r4.s64 = ctx.r8.s64 + -7992;
	// addi r3,r7,6132
	ctx.r3.s64 = ctx.r7.s64 + 6132;
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
	ctx.lr = 0x83528850;
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

__attribute__((alias("__imp__sub_83528860"))) PPC_WEAK_FUNC(sub_83528860);
PPC_FUNC_IMPL(__imp__sub_83528860) {
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
	// lis r10,-31865
	ctx.r10.s64 = -2088304640;
	// lis r8,-32240
	ctx.r8.s64 = -2112880640;
	// addi r6,r10,21296
	ctx.r6.s64 = ctx.r10.s64 + 21296;
	// lis r7,-31836
	ctx.r7.s64 = -2086404096;
	// li r5,4
	ctx.r5.s64 = 4;
	// stw r6,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r6.u32);
	// lis r9,-32234
	ctx.r9.s64 = -2112487424;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r5,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r5.u32);
	// addi r4,r8,-7968
	ctx.r4.s64 = ctx.r8.s64 + -7968;
	// addi r3,r7,6180
	ctx.r3.s64 = ctx.r7.s64 + 6180;
	// stw r11,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r11.u32);
	// li r31,3
	ctx.r31.s64 = 3;
	// stw r11,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r11.u32);
	// addi r9,r9,-6472
	ctx.r9.s64 = ctx.r9.s64 + -6472;
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// li r10,2
	ctx.r10.s64 = 2;
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
	ctx.lr = 0x835288CC;
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

__attribute__((alias("__imp__sub_835288E0"))) PPC_WEAK_FUNC(sub_835288E0);
PPC_FUNC_IMPL(__imp__sub_835288E0) {
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
	// lis r10,-31865
	ctx.r10.s64 = -2088304640;
	// lis r9,-32240
	ctx.r9.s64 = -2112880640;
	// addi r7,r10,21368
	ctx.r7.s64 = ctx.r10.s64 + 21368;
	// lis r8,-31836
	ctx.r8.s64 = -2086404096;
	// li r6,5
	ctx.r6.s64 = 5;
	// stw r7,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r7.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r4,r9,-7852
	ctx.r4.s64 = ctx.r9.s64 + -7852;
	// stw r6,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r6.u32);
	// addi r3,r8,6228
	ctx.r3.s64 = ctx.r8.s64 + 6228;
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
	ctx.lr = 0x83528940;
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

__attribute__((alias("__imp__sub_83528950"))) PPC_WEAK_FUNC(sub_83528950);
PPC_FUNC_IMPL(__imp__sub_83528950) {
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
	// lis r10,-31865
	ctx.r10.s64 = -2088304640;
	// lis r9,-32240
	ctx.r9.s64 = -2112880640;
	// addi r7,r10,21488
	ctx.r7.s64 = ctx.r10.s64 + 21488;
	// lis r8,-31836
	ctx.r8.s64 = -2086404096;
	// li r6,2
	ctx.r6.s64 = 2;
	// stw r7,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r7.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r4,r9,-5700
	ctx.r4.s64 = ctx.r9.s64 + -5700;
	// stw r6,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r6.u32);
	// addi r3,r8,6276
	ctx.r3.s64 = ctx.r8.s64 + 6276;
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
	ctx.lr = 0x835289B0;
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

__attribute__((alias("__imp__sub_835289C0"))) PPC_WEAK_FUNC(sub_835289C0);
PPC_FUNC_IMPL(__imp__sub_835289C0) {
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
	// lis r10,-31865
	ctx.r10.s64 = -2088304640;
	// lis r9,-32240
	ctx.r9.s64 = -2112880640;
	// addi r7,r10,21536
	ctx.r7.s64 = ctx.r10.s64 + 21536;
	// lis r8,-31836
	ctx.r8.s64 = -2086404096;
	// li r6,1
	ctx.r6.s64 = 1;
	// stw r7,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r7.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r4,r9,-5624
	ctx.r4.s64 = ctx.r9.s64 + -5624;
	// stw r6,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r6.u32);
	// addi r3,r8,6324
	ctx.r3.s64 = ctx.r8.s64 + 6324;
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
	ctx.lr = 0x83528A20;
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

__attribute__((alias("__imp__sub_83528A30"))) PPC_WEAK_FUNC(sub_83528A30);
PPC_FUNC_IMPL(__imp__sub_83528A30) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31865
	ctx.r11.s64 = -2088304640;
	// lis r10,-31864
	ctx.r10.s64 = -2088239104;
	// addi r9,r10,-4632
	ctx.r9.s64 = ctx.r10.s64 + -4632;
	// lwz r11,21560(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 21560);
	// stw r11,80(r9)
	PPC_STORE_U32(ctx.r9.u32 + 80, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83528A48"))) PPC_WEAK_FUNC(sub_83528A48);
PPC_FUNC_IMPL(__imp__sub_83528A48) {
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
	// lis r10,-31864
	ctx.r10.s64 = -2088239104;
	// lis r8,-32240
	ctx.r8.s64 = -2112880640;
	// addi r6,r10,-4632
	ctx.r6.s64 = ctx.r10.s64 + -4632;
	// lis r7,-31836
	ctx.r7.s64 = -2086404096;
	// li r5,9
	ctx.r5.s64 = 9;
	// stw r6,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r6.u32);
	// lis r9,-32234
	ctx.r9.s64 = -2112487424;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r5,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r5.u32);
	// addi r4,r8,-5500
	ctx.r4.s64 = ctx.r8.s64 + -5500;
	// addi r3,r7,6372
	ctx.r3.s64 = ctx.r7.s64 + 6372;
	// stw r11,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r11.u32);
	// addi r9,r9,-6408
	ctx.r9.s64 = ctx.r9.s64 + -6408;
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
	ctx.lr = 0x83528AAC;
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

__attribute__((alias("__imp__sub_83528ABC"))) PPC_WEAK_FUNC(sub_83528ABC);
PPC_FUNC_IMPL(__imp__sub_83528ABC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83528AC0"))) PPC_WEAK_FUNC(sub_83528AC0);
PPC_FUNC_IMPL(__imp__sub_83528AC0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31865
	ctx.r11.s64 = -2088304640;
	// lis r10,-31864
	ctx.r10.s64 = -2088239104;
	// addi r9,r10,-4416
	ctx.r9.s64 = ctx.r10.s64 + -4416;
	// lwz r11,21804(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 21804);
	// stw r11,32(r9)
	PPC_STORE_U32(ctx.r9.u32 + 32, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83528AD8"))) PPC_WEAK_FUNC(sub_83528AD8);
PPC_FUNC_IMPL(__imp__sub_83528AD8) {
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
	// lis r10,-31864
	ctx.r10.s64 = -2088239104;
	// lis r9,-32240
	ctx.r9.s64 = -2112880640;
	// addi r7,r10,-4416
	ctx.r7.s64 = ctx.r10.s64 + -4416;
	// lis r8,-31836
	ctx.r8.s64 = -2086404096;
	// li r6,2
	ctx.r6.s64 = 2;
	// stw r7,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r7.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r4,r9,-5444
	ctx.r4.s64 = ctx.r9.s64 + -5444;
	// stw r6,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r6.u32);
	// addi r3,r8,6420
	ctx.r3.s64 = ctx.r8.s64 + 6420;
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
	ctx.lr = 0x83528B38;
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

__attribute__((alias("__imp__sub_83528B48"))) PPC_WEAK_FUNC(sub_83528B48);
PPC_FUNC_IMPL(__imp__sub_83528B48) {
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
	// lis r10,-31865
	ctx.r10.s64 = -2088304640;
	// lis r9,-31836
	ctx.r9.s64 = -2086404096;
	// addi r6,r10,21564
	ctx.r6.s64 = ctx.r10.s64 + 21564;
	// lis r8,-32240
	ctx.r8.s64 = -2112880640;
	// lis r7,-31836
	ctx.r7.s64 = -2086404096;
	// stw r6,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r6.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r5,r9,6564
	ctx.r5.s64 = ctx.r9.s64 + 6564;
	// addi r4,r8,-5368
	ctx.r4.s64 = ctx.r8.s64 + -5368;
	// stw r11,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r11.u32);
	// addi r3,r7,6468
	ctx.r3.s64 = ctx.r7.s64 + 6468;
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
	ctx.lr = 0x83528BB0;
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

__attribute__((alias("__imp__sub_83528BC4"))) PPC_WEAK_FUNC(sub_83528BC4);
PPC_FUNC_IMPL(__imp__sub_83528BC4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83528BC8"))) PPC_WEAK_FUNC(sub_83528BC8);
PPC_FUNC_IMPL(__imp__sub_83528BC8) {
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
	// lis r10,-32240
	ctx.r10.s64 = -2112880640;
	// lis r9,-31836
	ctx.r9.s64 = -2086404096;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r4,r10,-18384
	ctx.r4.s64 = ctx.r10.s64 + -18384;
	// addi r3,r9,6516
	ctx.r3.s64 = ctx.r9.s64 + 6516;
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
	ctx.lr = 0x83528C1C;
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

__attribute__((alias("__imp__sub_83528C2C"))) PPC_WEAK_FUNC(sub_83528C2C);
PPC_FUNC_IMPL(__imp__sub_83528C2C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83528C30"))) PPC_WEAK_FUNC(sub_83528C30);
PPC_FUNC_IMPL(__imp__sub_83528C30) {
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
	// lis r10,-31865
	ctx.r10.s64 = -2088304640;
	// lis r9,-31836
	ctx.r9.s64 = -2086404096;
	// addi r6,r10,21612
	ctx.r6.s64 = ctx.r10.s64 + 21612;
	// lis r8,-32240
	ctx.r8.s64 = -2112880640;
	// lis r7,-31836
	ctx.r7.s64 = -2086404096;
	// stw r6,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r6.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r5,r9,6516
	ctx.r5.s64 = ctx.r9.s64 + 6516;
	// addi r4,r8,-7508
	ctx.r4.s64 = ctx.r8.s64 + -7508;
	// stw r11,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r11.u32);
	// addi r3,r7,6564
	ctx.r3.s64 = ctx.r7.s64 + 6564;
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
	ctx.lr = 0x83528C98;
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

__attribute__((alias("__imp__sub_83528CAC"))) PPC_WEAK_FUNC(sub_83528CAC);
PPC_FUNC_IMPL(__imp__sub_83528CAC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83528CB0"))) PPC_WEAK_FUNC(sub_83528CB0);
PPC_FUNC_IMPL(__imp__sub_83528CB0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31865
	ctx.r11.s64 = -2088304640;
	// lis r10,-31864
	ctx.r10.s64 = -2088239104;
	// addi r9,r10,-4368
	ctx.r9.s64 = ctx.r10.s64 + -4368;
	// lwz r11,21664(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 21664);
	// stw r11,200(r9)
	PPC_STORE_U32(ctx.r9.u32 + 200, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83528CC8"))) PPC_WEAK_FUNC(sub_83528CC8);
PPC_FUNC_IMPL(__imp__sub_83528CC8) {
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
	// lis r10,-31864
	ctx.r10.s64 = -2088239104;
	// lis r8,-32240
	ctx.r8.s64 = -2112880640;
	// addi r6,r10,-4368
	ctx.r6.s64 = ctx.r10.s64 + -4368;
	// lis r7,-31836
	ctx.r7.s64 = -2086404096;
	// li r5,9
	ctx.r5.s64 = 9;
	// stw r6,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r6.u32);
	// lis r9,-32234
	ctx.r9.s64 = -2112487424;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r5,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r5.u32);
	// addi r4,r8,-6712
	ctx.r4.s64 = ctx.r8.s64 + -6712;
	// addi r3,r7,6612
	ctx.r3.s64 = ctx.r7.s64 + 6612;
	// stw r11,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r11.u32);
	// li r31,10
	ctx.r31.s64 = 10;
	// stw r11,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r11.u32);
	// addi r9,r9,-6364
	ctx.r9.s64 = ctx.r9.s64 + -6364;
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// li r10,2
	ctx.r10.s64 = 2;
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
	ctx.lr = 0x83528D34;
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

__attribute__((alias("__imp__sub_83528D48"))) PPC_WEAK_FUNC(sub_83528D48);
PPC_FUNC_IMPL(__imp__sub_83528D48) {
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
	// lis r10,-31865
	ctx.r10.s64 = -2088304640;
	// lis r9,-32240
	ctx.r9.s64 = -2112880640;
	// addi r7,r10,21672
	ctx.r7.s64 = ctx.r10.s64 + 21672;
	// lis r8,-31836
	ctx.r8.s64 = -2086404096;
	// li r6,2
	ctx.r6.s64 = 2;
	// stw r7,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r7.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r4,r9,-6692
	ctx.r4.s64 = ctx.r9.s64 + -6692;
	// stw r6,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r6.u32);
	// addi r3,r8,6660
	ctx.r3.s64 = ctx.r8.s64 + 6660;
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
	ctx.lr = 0x83528DA8;
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

__attribute__((alias("__imp__sub_83528DB8"))) PPC_WEAK_FUNC(sub_83528DB8);
PPC_FUNC_IMPL(__imp__sub_83528DB8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31865
	ctx.r11.s64 = -2088304640;
	// lis r10,-31864
	ctx.r10.s64 = -2088239104;
	// addi r9,r10,-4128
	ctx.r9.s64 = ctx.r10.s64 + -4128;
	// lwz r11,21668(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 21668);
	// stw r11,80(r9)
	PPC_STORE_U32(ctx.r9.u32 + 80, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83528DD0"))) PPC_WEAK_FUNC(sub_83528DD0);
PPC_FUNC_IMPL(__imp__sub_83528DD0) {
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
	// lis r10,-31864
	ctx.r10.s64 = -2088239104;
	// lis r8,-32240
	ctx.r8.s64 = -2112880640;
	// addi r6,r10,-4128
	ctx.r6.s64 = ctx.r10.s64 + -4128;
	// lis r7,-31836
	ctx.r7.s64 = -2086404096;
	// li r5,1
	ctx.r5.s64 = 1;
	// stw r6,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r6.u32);
	// lis r9,-32234
	ctx.r9.s64 = -2112487424;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r5,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r5.u32);
	// addi r4,r8,-6656
	ctx.r4.s64 = ctx.r8.s64 + -6656;
	// addi r3,r7,6708
	ctx.r3.s64 = ctx.r7.s64 + 6708;
	// stw r11,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r11.u32);
	// li r31,4
	ctx.r31.s64 = 4;
	// stw r11,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r11.u32);
	// addi r9,r9,-6316
	ctx.r9.s64 = ctx.r9.s64 + -6316;
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
	ctx.lr = 0x83528E3C;
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

__attribute__((alias("__imp__sub_83528E50"))) PPC_WEAK_FUNC(sub_83528E50);
PPC_FUNC_IMPL(__imp__sub_83528E50) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31865
	ctx.r11.s64 = -2088304640;
	// lis r10,-31865
	ctx.r10.s64 = -2088304640;
	// lis r9,-31864
	ctx.r9.s64 = -2088239104;
	// addi r8,r9,-4032
	ctx.r8.s64 = ctx.r9.s64 + -4032;
	// lwz r11,21720(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 21720);
	// lwz r10,21724(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 21724);
	// stw r11,80(r8)
	PPC_STORE_U32(ctx.r8.u32 + 80, ctx.r11.u32);
	// stw r11,104(r8)
	PPC_STORE_U32(ctx.r8.u32 + 104, ctx.r11.u32);
	// stw r10,152(r8)
	PPC_STORE_U32(ctx.r8.u32 + 152, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83528E78"))) PPC_WEAK_FUNC(sub_83528E78);
PPC_FUNC_IMPL(__imp__sub_83528E78) {
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
	// lis r10,-31864
	ctx.r10.s64 = -2088239104;
	// lis r8,-32240
	ctx.r8.s64 = -2112880640;
	// addi r6,r10,-4032
	ctx.r6.s64 = ctx.r10.s64 + -4032;
	// lis r7,-31836
	ctx.r7.s64 = -2086404096;
	// li r5,7
	ctx.r5.s64 = 7;
	// stw r6,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r6.u32);
	// lis r9,-32234
	ctx.r9.s64 = -2112487424;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r5,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r5.u32);
	// addi r4,r8,-6608
	ctx.r4.s64 = ctx.r8.s64 + -6608;
	// addi r3,r7,6756
	ctx.r3.s64 = ctx.r7.s64 + 6756;
	// stw r11,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r11.u32);
	// li r31,9
	ctx.r31.s64 = 9;
	// stw r11,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r11.u32);
	// addi r9,r9,-5944
	ctx.r9.s64 = ctx.r9.s64 + -5944;
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
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x82ef5ae8
	ctx.lr = 0x83528EE4;
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

__attribute__((alias("__imp__sub_83528EF8"))) PPC_WEAK_FUNC(sub_83528EF8);
PPC_FUNC_IMPL(__imp__sub_83528EF8) {
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
	// lis r10,-31865
	ctx.r10.s64 = -2088304640;
	// lis r9,-32240
	ctx.r9.s64 = -2112880640;
	// addi r7,r10,21732
	ctx.r7.s64 = ctx.r10.s64 + 21732;
	// lis r8,-31836
	ctx.r8.s64 = -2086404096;
	// li r6,2
	ctx.r6.s64 = 2;
	// stw r7,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r7.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r4,r9,-6576
	ctx.r4.s64 = ctx.r9.s64 + -6576;
	// stw r6,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r6.u32);
	// addi r3,r8,6804
	ctx.r3.s64 = ctx.r8.s64 + 6804;
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
	ctx.lr = 0x83528F58;
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

__attribute__((alias("__imp__sub_83528F68"))) PPC_WEAK_FUNC(sub_83528F68);
PPC_FUNC_IMPL(__imp__sub_83528F68) {
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
	// lis r10,-31865
	ctx.r10.s64 = -2088304640;
	// lis r9,-32240
	ctx.r9.s64 = -2112880640;
	// addi r7,r10,21780
	ctx.r7.s64 = ctx.r10.s64 + 21780;
	// lis r8,-31836
	ctx.r8.s64 = -2086404096;
	// li r6,1
	ctx.r6.s64 = 1;
	// stw r7,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r7.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r4,r9,-6516
	ctx.r4.s64 = ctx.r9.s64 + -6516;
	// stw r6,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r6.u32);
	// addi r3,r8,6852
	ctx.r3.s64 = ctx.r8.s64 + 6852;
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
	ctx.lr = 0x83528FC8;
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

__attribute__((alias("__imp__sub_83528FD8"))) PPC_WEAK_FUNC(sub_83528FD8);
PPC_FUNC_IMPL(__imp__sub_83528FD8) {
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
	// lis r10,-32234
	ctx.r10.s64 = -2112487424;
	// lis r8,-32240
	ctx.r8.s64 = -2112880640;
	// lis r7,-31836
	ctx.r7.s64 = -2086404096;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r9,r10,-4736
	ctx.r9.s64 = ctx.r10.s64 + -4736;
	// addi r4,r8,-6476
	ctx.r4.s64 = ctx.r8.s64 + -6476;
	// stw r11,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r11.u32);
	// addi r3,r7,6900
	ctx.r3.s64 = ctx.r7.s64 + 6900;
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
	// stw r11,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r11.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x82ef5ae8
	ctx.lr = 0x83529030;
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

__attribute__((alias("__imp__sub_83529040"))) PPC_WEAK_FUNC(sub_83529040);
PPC_FUNC_IMPL(__imp__sub_83529040) {
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
	// lis r10,-31865
	ctx.r10.s64 = -2088304640;
	// lis r9,-32240
	ctx.r9.s64 = -2112880640;
	// addi r7,r10,21808
	ctx.r7.s64 = ctx.r10.s64 + 21808;
	// lis r8,-31836
	ctx.r8.s64 = -2086404096;
	// li r6,2
	ctx.r6.s64 = 2;
	// stw r7,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r7.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r4,r9,-6456
	ctx.r4.s64 = ctx.r9.s64 + -6456;
	// stw r6,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r6.u32);
	// addi r3,r8,6948
	ctx.r3.s64 = ctx.r8.s64 + 6948;
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
	ctx.lr = 0x835290A0;
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

__attribute__((alias("__imp__sub_835290B0"))) PPC_WEAK_FUNC(sub_835290B0);
PPC_FUNC_IMPL(__imp__sub_835290B0) {
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
	// lis r10,-31865
	ctx.r10.s64 = -2088304640;
	// lis r9,-32240
	ctx.r9.s64 = -2112880640;
	// addi r7,r10,21856
	ctx.r7.s64 = ctx.r10.s64 + 21856;
	// lis r8,-31836
	ctx.r8.s64 = -2086404096;
	// li r6,6
	ctx.r6.s64 = 6;
	// stw r7,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r7.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r4,r9,-6440
	ctx.r4.s64 = ctx.r9.s64 + -6440;
	// stw r6,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r6.u32);
	// addi r3,r8,6996
	ctx.r3.s64 = ctx.r8.s64 + 6996;
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
	ctx.lr = 0x83529110;
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

__attribute__((alias("__imp__sub_83529120"))) PPC_WEAK_FUNC(sub_83529120);
PPC_FUNC_IMPL(__imp__sub_83529120) {
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
	// lis r10,-31865
	ctx.r10.s64 = -2088304640;
	// lis r9,-32240
	ctx.r9.s64 = -2112880640;
	// addi r7,r10,22000
	ctx.r7.s64 = ctx.r10.s64 + 22000;
	// lis r8,-31836
	ctx.r8.s64 = -2086404096;
	// li r6,1
	ctx.r6.s64 = 1;
	// stw r7,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r7.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r4,r9,-6288
	ctx.r4.s64 = ctx.r9.s64 + -6288;
	// stw r6,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r6.u32);
	// addi r3,r8,7044
	ctx.r3.s64 = ctx.r8.s64 + 7044;
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
	ctx.lr = 0x83529180;
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

__attribute__((alias("__imp__sub_83529190"))) PPC_WEAK_FUNC(sub_83529190);
PPC_FUNC_IMPL(__imp__sub_83529190) {
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
	// lis r10,-31865
	ctx.r10.s64 = -2088304640;
	// lis r9,-32240
	ctx.r9.s64 = -2112880640;
	// addi r7,r10,22024
	ctx.r7.s64 = ctx.r10.s64 + 22024;
	// lis r8,-31836
	ctx.r8.s64 = -2086404096;
	// li r6,2
	ctx.r6.s64 = 2;
	// stw r7,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r7.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r4,r9,-6196
	ctx.r4.s64 = ctx.r9.s64 + -6196;
	// stw r6,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r6.u32);
	// addi r3,r8,7092
	ctx.r3.s64 = ctx.r8.s64 + 7092;
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
	ctx.lr = 0x835291F0;
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

__attribute__((alias("__imp__sub_83529200"))) PPC_WEAK_FUNC(sub_83529200);
PPC_FUNC_IMPL(__imp__sub_83529200) {
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
	// lis r10,-31865
	ctx.r10.s64 = -2088304640;
	// lis r8,-32240
	ctx.r8.s64 = -2112880640;
	// addi r6,r10,22080
	ctx.r6.s64 = ctx.r10.s64 + 22080;
	// lis r7,-31836
	ctx.r7.s64 = -2086404096;
	// li r5,3
	ctx.r5.s64 = 3;
	// stw r6,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r6.u32);
	// lis r9,-32234
	ctx.r9.s64 = -2112487424;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r5,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r5.u32);
	// addi r4,r8,-6164
	ctx.r4.s64 = ctx.r8.s64 + -6164;
	// addi r3,r7,7140
	ctx.r3.s64 = ctx.r7.s64 + 7140;
	// stw r11,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r11.u32);
	// li r31,5
	ctx.r31.s64 = 5;
	// stw r11,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r11.u32);
	// addi r9,r9,-4692
	ctx.r9.s64 = ctx.r9.s64 + -4692;
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
	ctx.lr = 0x8352926C;
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

__attribute__((alias("__imp__sub_83529280"))) PPC_WEAK_FUNC(sub_83529280);
PPC_FUNC_IMPL(__imp__sub_83529280) {
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
	// lis r10,-31865
	ctx.r10.s64 = -2088304640;
	// lis r9,-32240
	ctx.r9.s64 = -2112880640;
	// addi r7,r10,22200
	ctx.r7.s64 = ctx.r10.s64 + 22200;
	// lis r8,-31836
	ctx.r8.s64 = -2086404096;
	// li r6,1
	ctx.r6.s64 = 1;
	// stw r7,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r7.u32);
	// li r5,9
	ctx.r5.s64 = 9;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r6,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r6.u32);
	// addi r4,r9,-6116
	ctx.r4.s64 = ctx.r9.s64 + -6116;
	// stw r5,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r5.u32);
	// addi r3,r8,7188
	ctx.r3.s64 = ctx.r8.s64 + 7188;
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
	ctx.lr = 0x835292E4;
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

__attribute__((alias("__imp__sub_835292F4"))) PPC_WEAK_FUNC(sub_835292F4);
PPC_FUNC_IMPL(__imp__sub_835292F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_835292F8"))) PPC_WEAK_FUNC(sub_835292F8);
PPC_FUNC_IMPL(__imp__sub_835292F8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31865
	ctx.r11.s64 = -2088304640;
	// lis r10,-31864
	ctx.r10.s64 = -2088239104;
	// addi r9,r10,-3816
	ctx.r9.s64 = ctx.r10.s64 + -3816;
	// lwz r11,22076(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 22076);
	// stw r11,32(r9)
	PPC_STORE_U32(ctx.r9.u32 + 32, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83529310"))) PPC_WEAK_FUNC(sub_83529310);
PPC_FUNC_IMPL(__imp__sub_83529310) {
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
	// lis r10,-31864
	ctx.r10.s64 = -2088239104;
	// lis r9,-32239
	ctx.r9.s64 = -2112815104;
	// addi r7,r10,-3816
	ctx.r7.s64 = ctx.r10.s64 + -3816;
	// lis r8,-31836
	ctx.r8.s64 = -2086404096;
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
	// addi r4,r9,-21908
	ctx.r4.s64 = ctx.r9.s64 + -21908;
	// stw r5,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r5.u32);
	// addi r3,r8,7236
	ctx.r3.s64 = ctx.r8.s64 + 7236;
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
	ctx.lr = 0x83529374;
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

__attribute__((alias("__imp__sub_83529384"))) PPC_WEAK_FUNC(sub_83529384);
PPC_FUNC_IMPL(__imp__sub_83529384) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83529388"))) PPC_WEAK_FUNC(sub_83529388);
PPC_FUNC_IMPL(__imp__sub_83529388) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31865
	ctx.r11.s64 = -2088304640;
	// lis r10,-31864
	ctx.r10.s64 = -2088239104;
	// addi r9,r10,-3768
	ctx.r9.s64 = ctx.r10.s64 + -3768;
	// lwz r11,22076(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 22076);
	// stw r11,32(r9)
	PPC_STORE_U32(ctx.r9.u32 + 32, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_835293A0"))) PPC_WEAK_FUNC(sub_835293A0);
PPC_FUNC_IMPL(__imp__sub_835293A0) {
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
	// lis r10,-31864
	ctx.r10.s64 = -2088239104;
	// lis r9,-32239
	ctx.r9.s64 = -2112815104;
	// addi r7,r10,-3768
	ctx.r7.s64 = ctx.r10.s64 + -3768;
	// lis r8,-31836
	ctx.r8.s64 = -2086404096;
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
	// addi r4,r9,-10844
	ctx.r4.s64 = ctx.r9.s64 + -10844;
	// stw r5,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r5.u32);
	// addi r3,r8,7284
	ctx.r3.s64 = ctx.r8.s64 + 7284;
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
	ctx.lr = 0x83529404;
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

__attribute__((alias("__imp__sub_83529414"))) PPC_WEAK_FUNC(sub_83529414);
PPC_FUNC_IMPL(__imp__sub_83529414) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83529418"))) PPC_WEAK_FUNC(sub_83529418);
PPC_FUNC_IMPL(__imp__sub_83529418) {
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
	// lis r10,-31865
	ctx.r10.s64 = -2088304640;
	// lis r9,-32239
	ctx.r9.s64 = -2112815104;
	// addi r7,r10,22416
	ctx.r7.s64 = ctx.r10.s64 + 22416;
	// lis r8,-31836
	ctx.r8.s64 = -2086404096;
	// li r6,1
	ctx.r6.s64 = 1;
	// stw r7,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r7.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r4,r9,-22316
	ctx.r4.s64 = ctx.r9.s64 + -22316;
	// stw r6,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r6.u32);
	// addi r3,r8,7332
	ctx.r3.s64 = ctx.r8.s64 + 7332;
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
	ctx.lr = 0x83529478;
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

__attribute__((alias("__imp__sub_83529488"))) PPC_WEAK_FUNC(sub_83529488);
PPC_FUNC_IMPL(__imp__sub_83529488) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31865
	ctx.r11.s64 = -2088304640;
	// lis r10,-31864
	ctx.r10.s64 = -2088239104;
	// addi r9,r10,-3720
	ctx.r9.s64 = ctx.r10.s64 + -3720;
	// lwz r11,22076(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 22076);
	// stw r11,32(r9)
	PPC_STORE_U32(ctx.r9.u32 + 32, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_835294A0"))) PPC_WEAK_FUNC(sub_835294A0);
PPC_FUNC_IMPL(__imp__sub_835294A0) {
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
	// lis r10,-31864
	ctx.r10.s64 = -2088239104;
	// lis r9,-32239
	ctx.r9.s64 = -2112815104;
	// addi r7,r10,-3720
	ctx.r7.s64 = ctx.r10.s64 + -3720;
	// lis r8,-31836
	ctx.r8.s64 = -2086404096;
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
	// addi r4,r9,-17984
	ctx.r4.s64 = ctx.r9.s64 + -17984;
	// stw r5,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r5.u32);
	// addi r3,r8,7380
	ctx.r3.s64 = ctx.r8.s64 + 7380;
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
	ctx.lr = 0x83529504;
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

__attribute__((alias("__imp__sub_83529514"))) PPC_WEAK_FUNC(sub_83529514);
PPC_FUNC_IMPL(__imp__sub_83529514) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83529518"))) PPC_WEAK_FUNC(sub_83529518);
PPC_FUNC_IMPL(__imp__sub_83529518) {
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
	// lis r9,-31865
	ctx.r9.s64 = -2088304640;
	// li r10,2
	ctx.r10.s64 = 2;
	// addi r5,r9,22440
	ctx.r5.s64 = ctx.r9.s64 + 22440;
	// lis r8,-32234
	ctx.r8.s64 = -2112487424;
	// stw r10,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r10.u32);
	// lis r7,-32239
	ctx.r7.s64 = -2112815104;
	// stw r10,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r10.u32);
	// lis r6,-31836
	ctx.r6.s64 = -2086404096;
	// stw r5,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r5.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r9,r8,-4624
	ctx.r9.s64 = ctx.r8.s64 + -4624;
	// addi r4,r7,-17824
	ctx.r4.s64 = ctx.r7.s64 + -17824;
	// stw r11,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r11.u32);
	// addi r3,r6,7428
	ctx.r3.s64 = ctx.r6.s64 + 7428;
	// stw r11,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r11.u32);
	// li r10,1
	ctx.r10.s64 = 1;
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
	ctx.lr = 0x8352957C;
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

__attribute__((alias("__imp__sub_8352958C"))) PPC_WEAK_FUNC(sub_8352958C);
PPC_FUNC_IMPL(__imp__sub_8352958C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83529590"))) PPC_WEAK_FUNC(sub_83529590);
PPC_FUNC_IMPL(__imp__sub_83529590) {
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
	// lis r9,-31865
	ctx.r9.s64 = -2088304640;
	// li r10,2
	ctx.r10.s64 = 2;
	// addi r6,r9,22488
	ctx.r6.s64 = ctx.r9.s64 + 22488;
	// lis r8,-32239
	ctx.r8.s64 = -2112815104;
	// stw r10,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r10.u32);
	// lis r7,-31836
	ctx.r7.s64 = -2086404096;
	// stw r10,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r10.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r6,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r6.u32);
	// addi r4,r8,-17684
	ctx.r4.s64 = ctx.r8.s64 + -17684;
	// addi r3,r7,7476
	ctx.r3.s64 = ctx.r7.s64 + 7476;
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
	ctx.lr = 0x835295F0;
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

__attribute__((alias("__imp__sub_83529600"))) PPC_WEAK_FUNC(sub_83529600);
PPC_FUNC_IMPL(__imp__sub_83529600) {
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
	// lis r10,-31865
	ctx.r10.s64 = -2088304640;
	// lis r9,-32239
	ctx.r9.s64 = -2112815104;
	// addi r7,r10,22536
	ctx.r7.s64 = ctx.r10.s64 + 22536;
	// lis r8,-31836
	ctx.r8.s64 = -2086404096;
	// li r6,1
	ctx.r6.s64 = 1;
	// stw r7,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r7.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r4,r9,-17896
	ctx.r4.s64 = ctx.r9.s64 + -17896;
	// stw r6,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r6.u32);
	// addi r3,r8,7524
	ctx.r3.s64 = ctx.r8.s64 + 7524;
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
	ctx.lr = 0x83529660;
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

__attribute__((alias("__imp__sub_83529670"))) PPC_WEAK_FUNC(sub_83529670);
PPC_FUNC_IMPL(__imp__sub_83529670) {
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
	// lis r10,-31865
	ctx.r10.s64 = -2088304640;
	// lis r9,-32239
	ctx.r9.s64 = -2112815104;
	// addi r7,r10,22560
	ctx.r7.s64 = ctx.r10.s64 + 22560;
	// lis r8,-31836
	ctx.r8.s64 = -2086404096;
	// li r6,2
	ctx.r6.s64 = 2;
	// stw r7,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r7.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r4,r9,-18704
	ctx.r4.s64 = ctx.r9.s64 + -18704;
	// stw r6,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r6.u32);
	// addi r3,r8,7572
	ctx.r3.s64 = ctx.r8.s64 + 7572;
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
	ctx.lr = 0x835296D0;
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

__attribute__((alias("__imp__sub_835296E0"))) PPC_WEAK_FUNC(sub_835296E0);
PPC_FUNC_IMPL(__imp__sub_835296E0) {
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
	// lis r10,-31865
	ctx.r10.s64 = -2088304640;
	// lis r9,-31836
	ctx.r9.s64 = -2086404096;
	// addi r6,r10,22608
	ctx.r6.s64 = ctx.r10.s64 + 22608;
	// lis r8,-32239
	ctx.r8.s64 = -2112815104;
	// lis r7,-31836
	ctx.r7.s64 = -2086404096;
	// stw r6,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r6.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r5,r9,7668
	ctx.r5.s64 = ctx.r9.s64 + 7668;
	// addi r4,r8,-22672
	ctx.r4.s64 = ctx.r8.s64 + -22672;
	// stw r11,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r11.u32);
	// addi r3,r7,7620
	ctx.r3.s64 = ctx.r7.s64 + 7620;
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
	ctx.lr = 0x83529748;
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

__attribute__((alias("__imp__sub_8352975C"))) PPC_WEAK_FUNC(sub_8352975C);
PPC_FUNC_IMPL(__imp__sub_8352975C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83529760"))) PPC_WEAK_FUNC(sub_83529760);
PPC_FUNC_IMPL(__imp__sub_83529760) {
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
	// lis r10,-31865
	ctx.r10.s64 = -2088304640;
	// lis r9,-32239
	ctx.r9.s64 = -2112815104;
	// addi r7,r10,22632
	ctx.r7.s64 = ctx.r10.s64 + 22632;
	// lis r8,-31836
	ctx.r8.s64 = -2086404096;
	// li r6,2
	ctx.r6.s64 = 2;
	// stw r7,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r7.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r4,r9,-18736
	ctx.r4.s64 = ctx.r9.s64 + -18736;
	// stw r6,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r6.u32);
	// addi r3,r8,7668
	ctx.r3.s64 = ctx.r8.s64 + 7668;
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
	ctx.lr = 0x835297C0;
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

__attribute__((alias("__imp__sub_835297D0"))) PPC_WEAK_FUNC(sub_835297D0);
PPC_FUNC_IMPL(__imp__sub_835297D0) {
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
	// lis r10,-31865
	ctx.r10.s64 = -2088304640;
	// lis r9,-32236
	ctx.r9.s64 = -2112618496;
	// addi r7,r10,22680
	ctx.r7.s64 = ctx.r10.s64 + 22680;
	// lis r8,-31836
	ctx.r8.s64 = -2086404096;
	// li r6,1
	ctx.r6.s64 = 1;
	// stw r7,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r7.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r4,r9,9176
	ctx.r4.s64 = ctx.r9.s64 + 9176;
	// stw r6,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r6.u32);
	// addi r3,r8,7716
	ctx.r3.s64 = ctx.r8.s64 + 7716;
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
	ctx.lr = 0x83529830;
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

__attribute__((alias("__imp__sub_83529840"))) PPC_WEAK_FUNC(sub_83529840);
PPC_FUNC_IMPL(__imp__sub_83529840) {
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
	// lis r10,-31865
	ctx.r10.s64 = -2088304640;
	// lis r9,-32239
	ctx.r9.s64 = -2112815104;
	// addi r7,r10,22704
	ctx.r7.s64 = ctx.r10.s64 + 22704;
	// lis r8,-31836
	ctx.r8.s64 = -2086404096;
	// li r6,2
	ctx.r6.s64 = 2;
	// stw r7,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r7.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r4,r9,-21888
	ctx.r4.s64 = ctx.r9.s64 + -21888;
	// stw r6,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r6.u32);
	// addi r3,r8,7764
	ctx.r3.s64 = ctx.r8.s64 + 7764;
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
	ctx.lr = 0x835298A0;
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

__attribute__((alias("__imp__sub_835298B0"))) PPC_WEAK_FUNC(sub_835298B0);
PPC_FUNC_IMPL(__imp__sub_835298B0) {
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
	// lis r10,-31865
	ctx.r10.s64 = -2088304640;
	// lis r9,-32239
	ctx.r9.s64 = -2112815104;
	// addi r7,r10,22752
	ctx.r7.s64 = ctx.r10.s64 + 22752;
	// lis r8,-31836
	ctx.r8.s64 = -2086404096;
	// li r6,7
	ctx.r6.s64 = 7;
	// stw r7,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r7.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r4,r9,-18616
	ctx.r4.s64 = ctx.r9.s64 + -18616;
	// stw r6,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r6.u32);
	// addi r3,r8,7812
	ctx.r3.s64 = ctx.r8.s64 + 7812;
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
	ctx.lr = 0x83529910;
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

__attribute__((alias("__imp__sub_83529920"))) PPC_WEAK_FUNC(sub_83529920);
PPC_FUNC_IMPL(__imp__sub_83529920) {
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
	// lis r10,-31865
	ctx.r10.s64 = -2088304640;
	// lis r9,-32240
	ctx.r9.s64 = -2112880640;
	// addi r7,r10,22920
	ctx.r7.s64 = ctx.r10.s64 + 22920;
	// lis r8,-31836
	ctx.r8.s64 = -2086404096;
	// li r6,2
	ctx.r6.s64 = 2;
	// stw r7,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r7.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r4,r9,24440
	ctx.r4.s64 = ctx.r9.s64 + 24440;
	// stw r6,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r6.u32);
	// addi r3,r8,7860
	ctx.r3.s64 = ctx.r8.s64 + 7860;
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
	ctx.lr = 0x83529980;
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

__attribute__((alias("__imp__sub_83529990"))) PPC_WEAK_FUNC(sub_83529990);
PPC_FUNC_IMPL(__imp__sub_83529990) {
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
	// lis r10,-31865
	ctx.r10.s64 = -2088304640;
	// lis r9,-32240
	ctx.r9.s64 = -2112880640;
	// addi r7,r10,22968
	ctx.r7.s64 = ctx.r10.s64 + 22968;
	// lis r8,-31836
	ctx.r8.s64 = -2086404096;
	// li r6,1
	ctx.r6.s64 = 1;
	// stw r7,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r7.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r4,r9,25672
	ctx.r4.s64 = ctx.r9.s64 + 25672;
	// stw r6,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r6.u32);
	// addi r3,r8,7908
	ctx.r3.s64 = ctx.r8.s64 + 7908;
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
	ctx.lr = 0x835299F0;
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

__attribute__((alias("__imp__sub_83529A00"))) PPC_WEAK_FUNC(sub_83529A00);
PPC_FUNC_IMPL(__imp__sub_83529A00) {
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
	// lis r10,-31865
	ctx.r10.s64 = -2088304640;
	// lis r9,-32239
	ctx.r9.s64 = -2112815104;
	// addi r7,r10,22992
	ctx.r7.s64 = ctx.r10.s64 + 22992;
	// lis r8,-31836
	ctx.r8.s64 = -2086404096;
	// li r6,2
	ctx.r6.s64 = 2;
	// stw r7,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r7.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r4,r9,-18336
	ctx.r4.s64 = ctx.r9.s64 + -18336;
	// stw r6,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r6.u32);
	// addi r3,r8,7956
	ctx.r3.s64 = ctx.r8.s64 + 7956;
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
	ctx.lr = 0x83529A60;
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

__attribute__((alias("__imp__sub_83529A70"))) PPC_WEAK_FUNC(sub_83529A70);
PPC_FUNC_IMPL(__imp__sub_83529A70) {
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
	// lis r10,-31865
	ctx.r10.s64 = -2088304640;
	// li r4,3
	ctx.r4.s64 = 3;
	// addi r6,r10,23040
	ctx.r6.s64 = ctx.r10.s64 + 23040;
	// lis r9,-31836
	ctx.r9.s64 = -2086404096;
	// stw r4,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r4.u32);
	// lis r8,-32239
	ctx.r8.s64 = -2112815104;
	// stw r6,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r6.u32);
	// lis r7,-31836
	ctx.r7.s64 = -2086404096;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r5,r9,7524
	ctx.r5.s64 = ctx.r9.s64 + 7524;
	// addi r4,r8,-18392
	ctx.r4.s64 = ctx.r8.s64 + -18392;
	// stw r11,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r11.u32);
	// addi r3,r7,8004
	ctx.r3.s64 = ctx.r7.s64 + 8004;
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
	// li r6,0
	ctx.r6.s64 = 0;
	// bl 0x82ef5ae8
	ctx.lr = 0x83529ADC;
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

__attribute__((alias("__imp__sub_83529AF0"))) PPC_WEAK_FUNC(sub_83529AF0);
PPC_FUNC_IMPL(__imp__sub_83529AF0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31865
	ctx.r11.s64 = -2088304640;
	// lis r10,-31864
	ctx.r10.s64 = -2088239104;
	// addi r9,r10,-3672
	ctx.r9.s64 = ctx.r10.s64 + -3672;
	// lwz r11,23208(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 23208);
	// stw r11,8(r9)
	PPC_STORE_U32(ctx.r9.u32 + 8, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83529B08"))) PPC_WEAK_FUNC(sub_83529B08);
PPC_FUNC_IMPL(__imp__sub_83529B08) {
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
	// lis r10,-31864
	ctx.r10.s64 = -2088239104;
	// lis r8,-32239
	ctx.r8.s64 = -2112815104;
	// addi r6,r10,-3672
	ctx.r6.s64 = ctx.r10.s64 + -3672;
	// lis r7,-31836
	ctx.r7.s64 = -2086404096;
	// li r5,5
	ctx.r5.s64 = 5;
	// stw r6,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r6.u32);
	// lis r9,-32234
	ctx.r9.s64 = -2112487424;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r5,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r5.u32);
	// addi r4,r8,-18520
	ctx.r4.s64 = ctx.r8.s64 + -18520;
	// addi r3,r7,8052
	ctx.r3.s64 = ctx.r7.s64 + 8052;
	// stw r11,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r11.u32);
	// addi r9,r9,-4580
	ctx.r9.s64 = ctx.r9.s64 + -4580;
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
	ctx.lr = 0x83529B6C;
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

__attribute__((alias("__imp__sub_83529B7C"))) PPC_WEAK_FUNC(sub_83529B7C);
PPC_FUNC_IMPL(__imp__sub_83529B7C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83529B80"))) PPC_WEAK_FUNC(sub_83529B80);
PPC_FUNC_IMPL(__imp__sub_83529B80) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31865
	ctx.r11.s64 = -2088304640;
	// lis r10,-31864
	ctx.r10.s64 = -2088239104;
	// addi r9,r10,-3552
	ctx.r9.s64 = ctx.r10.s64 + -3552;
	// lwz r11,23212(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 23212);
	// stw r11,32(r9)
	PPC_STORE_U32(ctx.r9.u32 + 32, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83529B98"))) PPC_WEAK_FUNC(sub_83529B98);
PPC_FUNC_IMPL(__imp__sub_83529B98) {
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
	// lis r9,-31864
	ctx.r9.s64 = -2088239104;
	// lis r10,-32234
	ctx.r10.s64 = -2112487424;
	// addi r5,r9,-3552
	ctx.r5.s64 = ctx.r9.s64 + -3552;
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r6,r10,-4436
	ctx.r6.s64 = ctx.r10.s64 + -4436;
	// stw r5,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r5.u32);
	// lis r8,-32239
	ctx.r8.s64 = -2112815104;
	// stw r3,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r3.u32);
	// lis r7,-31836
	ctx.r7.s64 = -2086404096;
	// stw r6,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r6.u32);
	// li r9,3
	ctx.r9.s64 = 3;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r4,r8,-17336
	ctx.r4.s64 = ctx.r8.s64 + -17336;
	// stw r9,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r9.u32);
	// addi r3,r7,8100
	ctx.r3.s64 = ctx.r7.s64 + 8100;
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
	ctx.lr = 0x83529C04;
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

__attribute__((alias("__imp__sub_83529C14"))) PPC_WEAK_FUNC(sub_83529C14);
PPC_FUNC_IMPL(__imp__sub_83529C14) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83529C18"))) PPC_WEAK_FUNC(sub_83529C18);
PPC_FUNC_IMPL(__imp__sub_83529C18) {
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
	// lis r10,-31865
	ctx.r10.s64 = -2088304640;
	// li r4,2
	ctx.r4.s64 = 2;
	// addi r5,r10,23216
	ctx.r5.s64 = ctx.r10.s64 + 23216;
	// lis r8,-31836
	ctx.r8.s64 = -2086404096;
	// stw r4,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r4.u32);
	// lis r7,-32239
	ctx.r7.s64 = -2112815104;
	// stw r5,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r5.u32);
	// lis r6,-31836
	ctx.r6.s64 = -2086404096;
	// li r10,8
	ctx.r10.s64 = 8;
	// lis r9,-32234
	ctx.r9.s64 = -2112487424;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r10,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r10.u32);
	// addi r5,r8,7524
	ctx.r5.s64 = ctx.r8.s64 + 7524;
	// addi r4,r7,-17236
	ctx.r4.s64 = ctx.r7.s64 + -17236;
	// stw r11,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r11.u32);
	// addi r3,r6,8148
	ctx.r3.s64 = ctx.r6.s64 + 8148;
	// stw r11,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r11.u32);
	// addi r9,r9,-4456
	ctx.r9.s64 = ctx.r9.s64 + -4456;
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
	ctx.lr = 0x83529C84;
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

__attribute__((alias("__imp__sub_83529C94"))) PPC_WEAK_FUNC(sub_83529C94);
PPC_FUNC_IMPL(__imp__sub_83529C94) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83529C98"))) PPC_WEAK_FUNC(sub_83529C98);
PPC_FUNC_IMPL(__imp__sub_83529C98) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31865
	ctx.r11.s64 = -2088304640;
	// lis r10,-31864
	ctx.r10.s64 = -2088239104;
	// addi r9,r10,-3480
	ctx.r9.s64 = ctx.r10.s64 + -3480;
	// lwz r11,23408(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 23408);
	// stw r11,32(r9)
	PPC_STORE_U32(ctx.r9.u32 + 32, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83529CB0"))) PPC_WEAK_FUNC(sub_83529CB0);
PPC_FUNC_IMPL(__imp__sub_83529CB0) {
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
	// lis r10,-31864
	ctx.r10.s64 = -2088239104;
	// lis r8,-32239
	ctx.r8.s64 = -2112815104;
	// addi r6,r10,-3480
	ctx.r6.s64 = ctx.r10.s64 + -3480;
	// lis r7,-31836
	ctx.r7.s64 = -2086404096;
	// li r5,1
	ctx.r5.s64 = 1;
	// stw r6,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r6.u32);
	// lis r9,-32234
	ctx.r9.s64 = -2112487424;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r5,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r5.u32);
	// addi r4,r8,-25916
	ctx.r4.s64 = ctx.r8.s64 + -25916;
	// addi r3,r7,8196
	ctx.r3.s64 = ctx.r7.s64 + 8196;
	// stw r11,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r11.u32);
	// li r31,3
	ctx.r31.s64 = 3;
	// stw r11,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r11.u32);
	// addi r9,r9,-4364
	ctx.r9.s64 = ctx.r9.s64 + -4364;
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
	ctx.lr = 0x83529D1C;
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

__attribute__((alias("__imp__sub_83529D30"))) PPC_WEAK_FUNC(sub_83529D30);
PPC_FUNC_IMPL(__imp__sub_83529D30) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31865
	ctx.r11.s64 = -2088304640;
	// lis r10,-31864
	ctx.r10.s64 = -2088239104;
	// addi r9,r10,-3408
	ctx.r9.s64 = ctx.r10.s64 + -3408;
	// lwz r11,23412(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 23412);
	// stw r11,32(r9)
	PPC_STORE_U32(ctx.r9.u32 + 32, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83529D48"))) PPC_WEAK_FUNC(sub_83529D48);
PPC_FUNC_IMPL(__imp__sub_83529D48) {
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
	// lis r10,-31864
	ctx.r10.s64 = -2088239104;
	// lis r8,-32239
	ctx.r8.s64 = -2112815104;
	// addi r6,r10,-3408
	ctx.r6.s64 = ctx.r10.s64 + -3408;
	// lis r7,-31836
	ctx.r7.s64 = -2086404096;
	// li r5,6
	ctx.r5.s64 = 6;
	// stw r6,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r6.u32);
	// lis r9,-32234
	ctx.r9.s64 = -2112487424;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r5,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r5.u32);
	// addi r4,r8,-10304
	ctx.r4.s64 = ctx.r8.s64 + -10304;
	// addi r3,r7,8244
	ctx.r3.s64 = ctx.r7.s64 + 8244;
	// stw r11,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r11.u32);
	// addi r9,r9,-4288
	ctx.r9.s64 = ctx.r9.s64 + -4288;
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
	ctx.lr = 0x83529DAC;
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

__attribute__((alias("__imp__sub_83529DBC"))) PPC_WEAK_FUNC(sub_83529DBC);
PPC_FUNC_IMPL(__imp__sub_83529DBC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83529DC0"))) PPC_WEAK_FUNC(sub_83529DC0);
PPC_FUNC_IMPL(__imp__sub_83529DC0) {
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
	// lis r10,-31865
	ctx.r10.s64 = -2088304640;
	// lis r9,-32239
	ctx.r9.s64 = -2112815104;
	// addi r7,r10,23416
	ctx.r7.s64 = ctx.r10.s64 + 23416;
	// lis r8,-31836
	ctx.r8.s64 = -2086404096;
	// li r6,1
	ctx.r6.s64 = 1;
	// stw r7,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r7.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r4,r9,-10264
	ctx.r4.s64 = ctx.r9.s64 + -10264;
	// stw r6,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r6.u32);
	// addi r3,r8,8292
	ctx.r3.s64 = ctx.r8.s64 + 8292;
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
	ctx.lr = 0x83529E20;
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

__attribute__((alias("__imp__sub_83529E30"))) PPC_WEAK_FUNC(sub_83529E30);
PPC_FUNC_IMPL(__imp__sub_83529E30) {
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
	// lis r10,-31865
	ctx.r10.s64 = -2088304640;
	// lis r9,-32239
	ctx.r9.s64 = -2112815104;
	// addi r7,r10,23440
	ctx.r7.s64 = ctx.r10.s64 + 23440;
	// lis r8,-31836
	ctx.r8.s64 = -2086404096;
	// li r6,1
	ctx.r6.s64 = 1;
	// stw r7,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r7.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r4,r9,-18508
	ctx.r4.s64 = ctx.r9.s64 + -18508;
	// stw r6,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r6.u32);
	// addi r3,r8,8340
	ctx.r3.s64 = ctx.r8.s64 + 8340;
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
	ctx.lr = 0x83529E90;
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

__attribute__((alias("__imp__sub_83529EA0"))) PPC_WEAK_FUNC(sub_83529EA0);
PPC_FUNC_IMPL(__imp__sub_83529EA0) {
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
	// lis r10,-31865
	ctx.r10.s64 = -2088304640;
	// lis r9,-32239
	ctx.r9.s64 = -2112815104;
	// addi r7,r10,23464
	ctx.r7.s64 = ctx.r10.s64 + 23464;
	// lis r8,-31836
	ctx.r8.s64 = -2086404096;
	// li r6,2
	ctx.r6.s64 = 2;
	// stw r7,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r7.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r4,r9,-18208
	ctx.r4.s64 = ctx.r9.s64 + -18208;
	// stw r6,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r6.u32);
	// addi r3,r8,8388
	ctx.r3.s64 = ctx.r8.s64 + 8388;
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
	ctx.lr = 0x83529F00;
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

__attribute__((alias("__imp__sub_83529F10"))) PPC_WEAK_FUNC(sub_83529F10);
PPC_FUNC_IMPL(__imp__sub_83529F10) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31865
	ctx.r11.s64 = -2088304640;
	// lis r10,-31864
	ctx.r10.s64 = -2088239104;
	// addi r9,r10,-3264
	ctx.r9.s64 = ctx.r10.s64 + -3264;
	// lwz r11,23512(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 23512);
	// stw r11,8(r9)
	PPC_STORE_U32(ctx.r9.u32 + 8, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83529F28"))) PPC_WEAK_FUNC(sub_83529F28);
PPC_FUNC_IMPL(__imp__sub_83529F28) {
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
	// lis r10,-31864
	ctx.r10.s64 = -2088239104;
	// lis r8,-32239
	ctx.r8.s64 = -2112815104;
	// addi r6,r10,-3264
	ctx.r6.s64 = ctx.r10.s64 + -3264;
	// lis r7,-31836
	ctx.r7.s64 = -2086404096;
	// li r5,5
	ctx.r5.s64 = 5;
	// stw r6,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r6.u32);
	// lis r9,-32234
	ctx.r9.s64 = -2112487424;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r5,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r5.u32);
	// addi r4,r8,-17288
	ctx.r4.s64 = ctx.r8.s64 + -17288;
	// addi r3,r7,8436
	ctx.r3.s64 = ctx.r7.s64 + 8436;
	// stw r11,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r11.u32);
	// addi r9,r9,-4228
	ctx.r9.s64 = ctx.r9.s64 + -4228;
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
	ctx.lr = 0x83529F8C;
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

__attribute__((alias("__imp__sub_83529F9C"))) PPC_WEAK_FUNC(sub_83529F9C);
PPC_FUNC_IMPL(__imp__sub_83529F9C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83529FA0"))) PPC_WEAK_FUNC(sub_83529FA0);
PPC_FUNC_IMPL(__imp__sub_83529FA0) {
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
	// lis r10,-31865
	ctx.r10.s64 = -2088304640;
	// lis r9,-31836
	ctx.r9.s64 = -2086404096;
	// addi r6,r10,23516
	ctx.r6.s64 = ctx.r10.s64 + 23516;
	// lis r8,-32239
	ctx.r8.s64 = -2112815104;
	// lis r7,-31836
	ctx.r7.s64 = -2086404096;
	// stw r6,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r6.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r5,r9,7524
	ctx.r5.s64 = ctx.r9.s64 + 7524;
	// addi r4,r8,-18016
	ctx.r4.s64 = ctx.r8.s64 + -18016;
	// stw r11,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r11.u32);
	// addi r3,r7,8484
	ctx.r3.s64 = ctx.r7.s64 + 8484;
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
	ctx.lr = 0x8352A008;
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

__attribute__((alias("__imp__sub_8352A01C"))) PPC_WEAK_FUNC(sub_8352A01C);
PPC_FUNC_IMPL(__imp__sub_8352A01C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8352A020"))) PPC_WEAK_FUNC(sub_8352A020);
PPC_FUNC_IMPL(__imp__sub_8352A020) {
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
	// lis r10,-31865
	ctx.r10.s64 = -2088304640;
	// lis r9,-32239
	ctx.r9.s64 = -2112815104;
	// addi r7,r10,23564
	ctx.r7.s64 = ctx.r10.s64 + 23564;
	// lis r8,-31836
	ctx.r8.s64 = -2086404096;
	// li r6,2
	ctx.r6.s64 = 2;
	// stw r7,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r7.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r4,r9,-17500
	ctx.r4.s64 = ctx.r9.s64 + -17500;
	// stw r6,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r6.u32);
	// addi r3,r8,8532
	ctx.r3.s64 = ctx.r8.s64 + 8532;
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
	ctx.lr = 0x8352A080;
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

__attribute__((alias("__imp__sub_8352A090"))) PPC_WEAK_FUNC(sub_8352A090);
PPC_FUNC_IMPL(__imp__sub_8352A090) {
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
	// lis r10,-31865
	ctx.r10.s64 = -2088304640;
	// lis r9,-32239
	ctx.r9.s64 = -2112815104;
	// addi r7,r10,23616
	ctx.r7.s64 = ctx.r10.s64 + 23616;
	// lis r8,-31836
	ctx.r8.s64 = -2086404096;
	// li r6,4
	ctx.r6.s64 = 4;
	// stw r7,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r7.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r4,r9,-17372
	ctx.r4.s64 = ctx.r9.s64 + -17372;
	// stw r6,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r6.u32);
	// addi r3,r8,8580
	ctx.r3.s64 = ctx.r8.s64 + 8580;
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
	ctx.lr = 0x8352A0F0;
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

__attribute__((alias("__imp__sub_8352A100"))) PPC_WEAK_FUNC(sub_8352A100);
PPC_FUNC_IMPL(__imp__sub_8352A100) {
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
	// lis r10,-31865
	ctx.r10.s64 = -2088304640;
	// lis r9,-32239
	ctx.r9.s64 = -2112815104;
	// addi r7,r10,23712
	ctx.r7.s64 = ctx.r10.s64 + 23712;
	// lis r8,-31836
	ctx.r8.s64 = -2086404096;
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
	// addi r4,r9,-17944
	ctx.r4.s64 = ctx.r9.s64 + -17944;
	// stw r5,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r5.u32);
	// addi r3,r8,8628
	ctx.r3.s64 = ctx.r8.s64 + 8628;
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
	ctx.lr = 0x8352A164;
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

__attribute__((alias("__imp__sub_8352A174"))) PPC_WEAK_FUNC(sub_8352A174);
PPC_FUNC_IMPL(__imp__sub_8352A174) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8352A178"))) PPC_WEAK_FUNC(sub_8352A178);
PPC_FUNC_IMPL(__imp__sub_8352A178) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31865
	ctx.r11.s64 = -2088304640;
	// lis r10,-31865
	ctx.r10.s64 = -2088304640;
	// lis r9,-31864
	ctx.r9.s64 = -2088239104;
	// addi r8,r9,-3144
	ctx.r8.s64 = ctx.r9.s64 + -3144;
	// lwz r11,23612(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 23612);
	// lwz r10,23760(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 23760);
	// stw r11,32(r8)
	PPC_STORE_U32(ctx.r8.u32 + 32, ctx.r11.u32);
	// stw r10,56(r8)
	PPC_STORE_U32(ctx.r8.u32 + 56, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8352A19C"))) PPC_WEAK_FUNC(sub_8352A19C);
PPC_FUNC_IMPL(__imp__sub_8352A19C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8352A1A0"))) PPC_WEAK_FUNC(sub_8352A1A0);
PPC_FUNC_IMPL(__imp__sub_8352A1A0) {
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
	// lis r10,-31864
	ctx.r10.s64 = -2088239104;
	// lis r9,-32239
	ctx.r9.s64 = -2112815104;
	// addi r7,r10,-3144
	ctx.r7.s64 = ctx.r10.s64 + -3144;
	// lis r8,-31836
	ctx.r8.s64 = -2086404096;
	// li r6,3
	ctx.r6.s64 = 3;
	// stw r7,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r7.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r4,r9,-17404
	ctx.r4.s64 = ctx.r9.s64 + -17404;
	// stw r6,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r6.u32);
	// addi r3,r8,8676
	ctx.r3.s64 = ctx.r8.s64 + 8676;
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
	ctx.lr = 0x8352A200;
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

__attribute__((alias("__imp__sub_8352A210"))) PPC_WEAK_FUNC(sub_8352A210);
PPC_FUNC_IMPL(__imp__sub_8352A210) {
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
	// lis r9,-31865
	ctx.r9.s64 = -2088304640;
	// lis r8,-32234
	ctx.r8.s64 = -2112487424;
	// addi r5,r9,23764
	ctx.r5.s64 = ctx.r9.s64 + 23764;
	// lis r7,-32239
	ctx.r7.s64 = -2112815104;
	// lis r6,-31836
	ctx.r6.s64 = -2086404096;
	// stw r5,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r5.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,2
	ctx.r10.s64 = 2;
	// addi r9,r8,-4064
	ctx.r9.s64 = ctx.r8.s64 + -4064;
	// stw r11,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r11.u32);
	// addi r4,r7,-17664
	ctx.r4.s64 = ctx.r7.s64 + -17664;
	// stw r10,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r10.u32);
	// addi r3,r6,8724
	ctx.r3.s64 = ctx.r6.s64 + 8724;
	// stw r10,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r10.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// stw r11,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r11.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x82ef5ae8
	ctx.lr = 0x8352A270;
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

__attribute__((alias("__imp__sub_8352A280"))) PPC_WEAK_FUNC(sub_8352A280);
PPC_FUNC_IMPL(__imp__sub_8352A280) {
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
	// lis r10,-31865
	ctx.r10.s64 = -2088304640;
	// lis r9,-32239
	ctx.r9.s64 = -2112815104;
	// addi r7,r10,23812
	ctx.r7.s64 = ctx.r10.s64 + 23812;
	// lis r8,-31836
	ctx.r8.s64 = -2086404096;
	// li r6,1
	ctx.r6.s64 = 1;
	// stw r7,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r7.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r4,r9,-10180
	ctx.r4.s64 = ctx.r9.s64 + -10180;
	// stw r6,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r6.u32);
	// addi r3,r8,8772
	ctx.r3.s64 = ctx.r8.s64 + 8772;
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
	ctx.lr = 0x8352A2E0;
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

__attribute__((alias("__imp__sub_8352A2F0"))) PPC_WEAK_FUNC(sub_8352A2F0);
PPC_FUNC_IMPL(__imp__sub_8352A2F0) {
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
	// lis r10,-31865
	ctx.r10.s64 = -2088304640;
	// lis r9,-32239
	ctx.r9.s64 = -2112815104;
	// addi r7,r10,23836
	ctx.r7.s64 = ctx.r10.s64 + 23836;
	// lis r8,-31836
	ctx.r8.s64 = -2086404096;
	// li r6,1
	ctx.r6.s64 = 1;
	// stw r7,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r7.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r4,r9,-24368
	ctx.r4.s64 = ctx.r9.s64 + -24368;
	// stw r6,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r6.u32);
	// addi r3,r8,8820
	ctx.r3.s64 = ctx.r8.s64 + 8820;
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
	ctx.lr = 0x8352A350;
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

__attribute__((alias("__imp__sub_8352A360"))) PPC_WEAK_FUNC(sub_8352A360);
PPC_FUNC_IMPL(__imp__sub_8352A360) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31865
	ctx.r11.s64 = -2088304640;
	// lis r10,-31864
	ctx.r10.s64 = -2088239104;
	// addi r9,r10,-3072
	ctx.r9.s64 = ctx.r10.s64 + -3072;
	// lwz r11,23860(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 23860);
	// stw r11,32(r9)
	PPC_STORE_U32(ctx.r9.u32 + 32, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8352A378"))) PPC_WEAK_FUNC(sub_8352A378);
PPC_FUNC_IMPL(__imp__sub_8352A378) {
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
	// lis r10,-31864
	ctx.r10.s64 = -2088239104;
	// lis r8,-32239
	ctx.r8.s64 = -2112815104;
	// addi r6,r10,-3072
	ctx.r6.s64 = ctx.r10.s64 + -3072;
	// lis r7,-31836
	ctx.r7.s64 = -2086404096;
	// li r5,2
	ctx.r5.s64 = 2;
	// stw r6,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r6.u32);
	// lis r9,-32234
	ctx.r9.s64 = -2112487424;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r5,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r5.u32);
	// addi r4,r8,-30708
	ctx.r4.s64 = ctx.r8.s64 + -30708;
	// addi r3,r7,8868
	ctx.r3.s64 = ctx.r7.s64 + 8868;
	// stw r11,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r11.u32);
	// addi r9,r9,-4000
	ctx.r9.s64 = ctx.r9.s64 + -4000;
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
	ctx.lr = 0x8352A3DC;
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

__attribute__((alias("__imp__sub_8352A3EC"))) PPC_WEAK_FUNC(sub_8352A3EC);
PPC_FUNC_IMPL(__imp__sub_8352A3EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8352A3F0"))) PPC_WEAK_FUNC(sub_8352A3F0);
PPC_FUNC_IMPL(__imp__sub_8352A3F0) {
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
	// lis r10,-31865
	ctx.r10.s64 = -2088304640;
	// lis r9,-32239
	ctx.r9.s64 = -2112815104;
	// addi r7,r10,23864
	ctx.r7.s64 = ctx.r10.s64 + 23864;
	// lis r8,-31836
	ctx.r8.s64 = -2086404096;
	// li r6,1
	ctx.r6.s64 = 1;
	// stw r7,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r7.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r4,r9,-32020
	ctx.r4.s64 = ctx.r9.s64 + -32020;
	// stw r6,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r6.u32);
	// addi r3,r8,8916
	ctx.r3.s64 = ctx.r8.s64 + 8916;
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
	ctx.lr = 0x8352A450;
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

__attribute__((alias("__imp__sub_8352A460"))) PPC_WEAK_FUNC(sub_8352A460);
PPC_FUNC_IMPL(__imp__sub_8352A460) {
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
	// lis r10,-31865
	ctx.r10.s64 = -2088304640;
	// lis r9,-32239
	ctx.r9.s64 = -2112815104;
	// addi r7,r10,23888
	ctx.r7.s64 = ctx.r10.s64 + 23888;
	// lis r8,-31836
	ctx.r8.s64 = -2086404096;
	// li r6,1
	ctx.r6.s64 = 1;
	// stw r7,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r7.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r4,r9,-25392
	ctx.r4.s64 = ctx.r9.s64 + -25392;
	// stw r6,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r6.u32);
	// addi r3,r8,8964
	ctx.r3.s64 = ctx.r8.s64 + 8964;
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
	ctx.lr = 0x8352A4C0;
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

__attribute__((alias("__imp__sub_8352A4D0"))) PPC_WEAK_FUNC(sub_8352A4D0);
PPC_FUNC_IMPL(__imp__sub_8352A4D0) {
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
	// lis r10,-31865
	ctx.r10.s64 = -2088304640;
	// lis r9,-32239
	ctx.r9.s64 = -2112815104;
	// addi r7,r10,23912
	ctx.r7.s64 = ctx.r10.s64 + 23912;
	// lis r8,-31836
	ctx.r8.s64 = -2086404096;
	// li r6,1
	ctx.r6.s64 = 1;
	// stw r7,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r7.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r4,r9,-10012
	ctx.r4.s64 = ctx.r9.s64 + -10012;
	// stw r6,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r6.u32);
	// addi r3,r8,9012
	ctx.r3.s64 = ctx.r8.s64 + 9012;
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
	ctx.lr = 0x8352A530;
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

__attribute__((alias("__imp__sub_8352A540"))) PPC_WEAK_FUNC(sub_8352A540);
PPC_FUNC_IMPL(__imp__sub_8352A540) {
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
	// lis r10,-31865
	ctx.r10.s64 = -2088304640;
	// lis r9,-32236
	ctx.r9.s64 = -2112618496;
	// addi r7,r10,23936
	ctx.r7.s64 = ctx.r10.s64 + 23936;
	// lis r8,-31836
	ctx.r8.s64 = -2086404096;
	// li r6,1
	ctx.r6.s64 = 1;
	// stw r7,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r7.u32);
	// li r5,6
	ctx.r5.s64 = 6;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r6,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r6.u32);
	// addi r4,r9,9212
	ctx.r4.s64 = ctx.r9.s64 + 9212;
	// stw r5,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r5.u32);
	// addi r3,r8,9060
	ctx.r3.s64 = ctx.r8.s64 + 9060;
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
	ctx.lr = 0x8352A5A4;
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

__attribute__((alias("__imp__sub_8352A5B4"))) PPC_WEAK_FUNC(sub_8352A5B4);
PPC_FUNC_IMPL(__imp__sub_8352A5B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8352A5B8"))) PPC_WEAK_FUNC(sub_8352A5B8);
PPC_FUNC_IMPL(__imp__sub_8352A5B8) {
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
	// lis r10,-31865
	ctx.r10.s64 = -2088304640;
	// lis r9,-32236
	ctx.r9.s64 = -2112618496;
	// addi r7,r10,24080
	ctx.r7.s64 = ctx.r10.s64 + 24080;
	// lis r8,-31836
	ctx.r8.s64 = -2086404096;
	// li r6,6
	ctx.r6.s64 = 6;
	// stw r7,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r7.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r4,r9,9232
	ctx.r4.s64 = ctx.r9.s64 + 9232;
	// stw r6,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r6.u32);
	// addi r3,r8,9108
	ctx.r3.s64 = ctx.r8.s64 + 9108;
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
	ctx.lr = 0x8352A618;
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

__attribute__((alias("__imp__sub_8352A628"))) PPC_WEAK_FUNC(sub_8352A628);
PPC_FUNC_IMPL(__imp__sub_8352A628) {
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
	// lis r10,-31865
	ctx.r10.s64 = -2088304640;
	// lis r9,-32236
	ctx.r9.s64 = -2112618496;
	// addi r7,r10,24224
	ctx.r7.s64 = ctx.r10.s64 + 24224;
	// lis r8,-31836
	ctx.r8.s64 = -2086404096;
	// li r6,10
	ctx.r6.s64 = 10;
	// stw r7,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r7.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r4,r9,9248
	ctx.r4.s64 = ctx.r9.s64 + 9248;
	// stw r6,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r6.u32);
	// addi r3,r8,9156
	ctx.r3.s64 = ctx.r8.s64 + 9156;
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
	ctx.lr = 0x8352A688;
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

__attribute__((alias("__imp__sub_8352A698"))) PPC_WEAK_FUNC(sub_8352A698);
PPC_FUNC_IMPL(__imp__sub_8352A698) {
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
	// lis r10,-31865
	ctx.r10.s64 = -2088304640;
	// lis r9,-32236
	ctx.r9.s64 = -2112618496;
	// addi r7,r10,24464
	ctx.r7.s64 = ctx.r10.s64 + 24464;
	// lis r8,-31836
	ctx.r8.s64 = -2086404096;
	// li r6,14
	ctx.r6.s64 = 14;
	// stw r7,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r7.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r4,r9,9268
	ctx.r4.s64 = ctx.r9.s64 + 9268;
	// stw r6,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r6.u32);
	// addi r3,r8,9204
	ctx.r3.s64 = ctx.r8.s64 + 9204;
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
	ctx.lr = 0x8352A6F8;
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

__attribute__((alias("__imp__sub_8352A708"))) PPC_WEAK_FUNC(sub_8352A708);
PPC_FUNC_IMPL(__imp__sub_8352A708) {
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
	// lis r10,-31865
	ctx.r10.s64 = -2088304640;
	// lis r9,-32236
	ctx.r9.s64 = -2112618496;
	// addi r7,r10,24800
	ctx.r7.s64 = ctx.r10.s64 + 24800;
	// lis r8,-31836
	ctx.r8.s64 = -2086404096;
	// li r6,1
	ctx.r6.s64 = 1;
	// stw r7,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r7.u32);
	// li r5,8
	ctx.r5.s64 = 8;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r6,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r6.u32);
	// addi r4,r9,9288
	ctx.r4.s64 = ctx.r9.s64 + 9288;
	// stw r5,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r5.u32);
	// addi r3,r8,9252
	ctx.r3.s64 = ctx.r8.s64 + 9252;
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
	ctx.lr = 0x8352A76C;
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

__attribute__((alias("__imp__sub_8352A77C"))) PPC_WEAK_FUNC(sub_8352A77C);
PPC_FUNC_IMPL(__imp__sub_8352A77C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8352A780"))) PPC_WEAK_FUNC(sub_8352A780);
PPC_FUNC_IMPL(__imp__sub_8352A780) {
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
	// lis r10,-31865
	ctx.r10.s64 = -2088304640;
	// lis r9,-32236
	ctx.r9.s64 = -2112618496;
	// addi r7,r10,24992
	ctx.r7.s64 = ctx.r10.s64 + 24992;
	// lis r8,-31836
	ctx.r8.s64 = -2086404096;
	// li r6,8
	ctx.r6.s64 = 8;
	// stw r7,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r7.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r4,r9,9312
	ctx.r4.s64 = ctx.r9.s64 + 9312;
	// stw r6,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r6.u32);
	// addi r3,r8,9300
	ctx.r3.s64 = ctx.r8.s64 + 9300;
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
	ctx.lr = 0x8352A7E0;
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

__attribute__((alias("__imp__sub_8352A7F0"))) PPC_WEAK_FUNC(sub_8352A7F0);
PPC_FUNC_IMPL(__imp__sub_8352A7F0) {
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
	// lis r10,-31865
	ctx.r10.s64 = -2088304640;
	// lis r9,-32236
	ctx.r9.s64 = -2112618496;
	// addi r7,r10,25184
	ctx.r7.s64 = ctx.r10.s64 + 25184;
	// lis r8,-31836
	ctx.r8.s64 = -2086404096;
	// li r6,12
	ctx.r6.s64 = 12;
	// stw r7,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r7.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r4,r9,9332
	ctx.r4.s64 = ctx.r9.s64 + 9332;
	// stw r6,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r6.u32);
	// addi r3,r8,9348
	ctx.r3.s64 = ctx.r8.s64 + 9348;
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
	ctx.lr = 0x8352A850;
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

__attribute__((alias("__imp__sub_8352A860"))) PPC_WEAK_FUNC(sub_8352A860);
PPC_FUNC_IMPL(__imp__sub_8352A860) {
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
	// lis r10,-31865
	ctx.r10.s64 = -2088304640;
	// lis r9,-32236
	ctx.r9.s64 = -2112618496;
	// addi r7,r10,25472
	ctx.r7.s64 = ctx.r10.s64 + 25472;
	// lis r8,-31836
	ctx.r8.s64 = -2086404096;
	// li r6,16
	ctx.r6.s64 = 16;
	// stw r7,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r7.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r4,r9,9356
	ctx.r4.s64 = ctx.r9.s64 + 9356;
	// stw r6,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r6.u32);
	// addi r3,r8,9396
	ctx.r3.s64 = ctx.r8.s64 + 9396;
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
	ctx.lr = 0x8352A8C0;
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

__attribute__((alias("__imp__sub_8352A8D0"))) PPC_WEAK_FUNC(sub_8352A8D0);
PPC_FUNC_IMPL(__imp__sub_8352A8D0) {
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
	// lis r10,-31865
	ctx.r10.s64 = -2088304640;
	// lis r9,-32236
	ctx.r9.s64 = -2112618496;
	// addi r7,r10,25856
	ctx.r7.s64 = ctx.r10.s64 + 25856;
	// lis r8,-31836
	ctx.r8.s64 = -2086404096;
	// li r6,9
	ctx.r6.s64 = 9;
	// stw r7,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r7.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r4,r9,9380
	ctx.r4.s64 = ctx.r9.s64 + 9380;
	// stw r6,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r6.u32);
	// addi r3,r8,9444
	ctx.r3.s64 = ctx.r8.s64 + 9444;
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
	ctx.lr = 0x8352A930;
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

__attribute__((alias("__imp__sub_8352A940"))) PPC_WEAK_FUNC(sub_8352A940);
PPC_FUNC_IMPL(__imp__sub_8352A940) {
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
	// lis r10,-31865
	ctx.r10.s64 = -2088304640;
	// lis r9,-32236
	ctx.r9.s64 = -2112618496;
	// addi r7,r10,26072
	ctx.r7.s64 = ctx.r10.s64 + 26072;
	// lis r8,-31836
	ctx.r8.s64 = -2086404096;
	// li r6,8
	ctx.r6.s64 = 8;
	// stw r7,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r7.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r4,r9,9408
	ctx.r4.s64 = ctx.r9.s64 + 9408;
	// stw r6,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r6.u32);
	// addi r3,r8,9492
	ctx.r3.s64 = ctx.r8.s64 + 9492;
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
	ctx.lr = 0x8352A9A0;
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

__attribute__((alias("__imp__sub_8352A9B0"))) PPC_WEAK_FUNC(sub_8352A9B0);
PPC_FUNC_IMPL(__imp__sub_8352A9B0) {
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
	// lis r10,-31865
	ctx.r10.s64 = -2088304640;
	// lis r9,-32236
	ctx.r9.s64 = -2112618496;
	// addi r7,r10,26264
	ctx.r7.s64 = ctx.r10.s64 + 26264;
	// lis r8,-31836
	ctx.r8.s64 = -2086404096;
	// li r6,18
	ctx.r6.s64 = 18;
	// stw r7,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r7.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r4,r9,9432
	ctx.r4.s64 = ctx.r9.s64 + 9432;
	// stw r6,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r6.u32);
	// addi r3,r8,9540
	ctx.r3.s64 = ctx.r8.s64 + 9540;
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
	ctx.lr = 0x8352AA10;
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

__attribute__((alias("__imp__sub_8352AA20"))) PPC_WEAK_FUNC(sub_8352AA20);
PPC_FUNC_IMPL(__imp__sub_8352AA20) {
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
	// lis r10,-31865
	ctx.r10.s64 = -2088304640;
	// lis r9,-32236
	ctx.r9.s64 = -2112618496;
	// addi r7,r10,26696
	ctx.r7.s64 = ctx.r10.s64 + 26696;
	// lis r8,-31836
	ctx.r8.s64 = -2086404096;
	// li r6,18
	ctx.r6.s64 = 18;
	// stw r7,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r7.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r4,r9,9460
	ctx.r4.s64 = ctx.r9.s64 + 9460;
	// stw r6,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r6.u32);
	// addi r3,r8,9588
	ctx.r3.s64 = ctx.r8.s64 + 9588;
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
	ctx.lr = 0x8352AA80;
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

__attribute__((alias("__imp__sub_8352AA90"))) PPC_WEAK_FUNC(sub_8352AA90);
PPC_FUNC_IMPL(__imp__sub_8352AA90) {
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
	// lis r10,-31865
	ctx.r10.s64 = -2088304640;
	// lis r9,-32236
	ctx.r9.s64 = -2112618496;
	// addi r7,r10,27128
	ctx.r7.s64 = ctx.r10.s64 + 27128;
	// lis r8,-31836
	ctx.r8.s64 = -2086404096;
	// li r6,22
	ctx.r6.s64 = 22;
	// stw r7,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r7.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r4,r9,9484
	ctx.r4.s64 = ctx.r9.s64 + 9484;
	// stw r6,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r6.u32);
	// addi r3,r8,9636
	ctx.r3.s64 = ctx.r8.s64 + 9636;
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
	ctx.lr = 0x8352AAF0;
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

__attribute__((alias("__imp__sub_8352AB00"))) PPC_WEAK_FUNC(sub_8352AB00);
PPC_FUNC_IMPL(__imp__sub_8352AB00) {
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
	// lis r10,-31865
	ctx.r10.s64 = -2088304640;
	// lis r9,-32236
	ctx.r9.s64 = -2112618496;
	// addi r7,r10,27656
	ctx.r7.s64 = ctx.r10.s64 + 27656;
	// lis r8,-31836
	ctx.r8.s64 = -2086404096;
	// li r6,26
	ctx.r6.s64 = 26;
	// stw r7,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r7.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r4,r9,9512
	ctx.r4.s64 = ctx.r9.s64 + 9512;
	// stw r6,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r6.u32);
	// addi r3,r8,9684
	ctx.r3.s64 = ctx.r8.s64 + 9684;
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
	ctx.lr = 0x8352AB60;
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

__attribute__((alias("__imp__sub_8352AB70"))) PPC_WEAK_FUNC(sub_8352AB70);
PPC_FUNC_IMPL(__imp__sub_8352AB70) {
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
	// lis r10,-31865
	ctx.r10.s64 = -2088304640;
	// lis r9,-32236
	ctx.r9.s64 = -2112618496;
	// addi r7,r10,28280
	ctx.r7.s64 = ctx.r10.s64 + 28280;
	// lis r8,-31836
	ctx.r8.s64 = -2086404096;
	// li r6,7
	ctx.r6.s64 = 7;
	// stw r7,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r7.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r4,r9,9540
	ctx.r4.s64 = ctx.r9.s64 + 9540;
	// stw r6,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r6.u32);
	// addi r3,r8,9732
	ctx.r3.s64 = ctx.r8.s64 + 9732;
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
	ctx.lr = 0x8352ABD0;
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

__attribute__((alias("__imp__sub_8352ABE0"))) PPC_WEAK_FUNC(sub_8352ABE0);
PPC_FUNC_IMPL(__imp__sub_8352ABE0) {
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
	// lis r10,-31865
	ctx.r10.s64 = -2088304640;
	// lis r9,-32236
	ctx.r9.s64 = -2112618496;
	// addi r7,r10,28448
	ctx.r7.s64 = ctx.r10.s64 + 28448;
	// lis r8,-31836
	ctx.r8.s64 = -2086404096;
	// li r6,16
	ctx.r6.s64 = 16;
	// stw r7,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r7.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r4,r9,9564
	ctx.r4.s64 = ctx.r9.s64 + 9564;
	// stw r6,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r6.u32);
	// addi r3,r8,9780
	ctx.r3.s64 = ctx.r8.s64 + 9780;
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
	ctx.lr = 0x8352AC40;
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

