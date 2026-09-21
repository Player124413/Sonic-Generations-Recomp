#include "ppc_recomp_shared.h"

__attribute__((alias("__imp__sub_8368AF60"))) PPC_WEAK_FUNC(sub_8368AF60);
PPC_FUNC_IMPL(__imp__sub_8368AF60) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// lis r10,-31822
	ctx.r10.s64 = -2085486592;
	// addi r4,r11,-30000
	ctx.r4.s64 = ctx.r11.s64 + -30000;
	// addi r3,r10,-7972
	ctx.r3.s64 = ctx.r10.s64 + -7972;
	// b 0x82e038b0
	sub_82E038B0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8368AF74"))) PPC_WEAK_FUNC(sub_8368AF74);
PPC_FUNC_IMPL(__imp__sub_8368AF74) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8368AF78"))) PPC_WEAK_FUNC(sub_8368AF78);
PPC_FUNC_IMPL(__imp__sub_8368AF78) {
	PPC_FUNC_PROLOGUE();
	// lis r9,-31842
	ctx.r9.s64 = -2086797312;
	// lis r8,-31844
	ctx.r8.s64 = -2086928384;
	// addi r7,r8,-7540
	ctx.r7.s64 = ctx.r8.s64 + -7540;
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

__attribute__((alias("__imp__sub_8368AF98"))) PPC_WEAK_FUNC(sub_8368AF98);
PPC_FUNC_IMPL(__imp__sub_8368AF98) {
	PPC_FUNC_PROLOGUE();
	// lis r9,-31842
	ctx.r9.s64 = -2086797312;
	// lis r8,-31844
	ctx.r8.s64 = -2086928384;
	// addi r7,r8,-7524
	ctx.r7.s64 = ctx.r8.s64 + -7524;
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

__attribute__((alias("__imp__sub_8368AFB8"))) PPC_WEAK_FUNC(sub_8368AFB8);
PPC_FUNC_IMPL(__imp__sub_8368AFB8) {
	PPC_FUNC_PROLOGUE();
	// lis r9,-31842
	ctx.r9.s64 = -2086797312;
	// lis r8,-31844
	ctx.r8.s64 = -2086928384;
	// addi r7,r8,-7508
	ctx.r7.s64 = ctx.r8.s64 + -7508;
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

__attribute__((alias("__imp__sub_8368AFD8"))) PPC_WEAK_FUNC(sub_8368AFD8);
PPC_FUNC_IMPL(__imp__sub_8368AFD8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-32208
	ctx.r10.s64 = -2110783488;
	// lis r9,-32240
	ctx.r9.s64 = -2112880640;
	// addi r7,r10,31904
	ctx.r7.s64 = ctx.r10.s64 + 31904;
	// lis r8,-31822
	ctx.r8.s64 = -2085486592;
	// li r6,7
	ctx.r6.s64 = 7;
	// stw r7,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r7.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r4,r9,-6712
	ctx.r4.s64 = ctx.r9.s64 + -6712;
	// stw r6,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r6.u32);
	// addi r3,r8,-2180
	ctx.r3.s64 = ctx.r8.s64 + -2180;
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
	ctx.lr = 0x8368B038;
	sub_82EF5AE8(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8368B048"))) PPC_WEAK_FUNC(sub_8368B048);
PPC_FUNC_IMPL(__imp__sub_8368B048) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-32208
	ctx.r10.s64 = -2110783488;
	// lis r9,-32240
	ctx.r9.s64 = -2112880640;
	// addi r7,r10,32072
	ctx.r7.s64 = ctx.r10.s64 + 32072;
	// lis r8,-31822
	ctx.r8.s64 = -2085486592;
	// li r6,7
	ctx.r6.s64 = 7;
	// stw r7,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r7.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r4,r9,-6712
	ctx.r4.s64 = ctx.r9.s64 + -6712;
	// stw r6,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r6.u32);
	// addi r3,r8,-2132
	ctx.r3.s64 = ctx.r8.s64 + -2132;
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
	ctx.lr = 0x8368B0A8;
	sub_82EF5AE8(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8368B0B8"))) PPC_WEAK_FUNC(sub_8368B0B8);
PPC_FUNC_IMPL(__imp__sub_8368B0B8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31844
	ctx.r11.s64 = -2086928384;
	// lis r10,-31844
	ctx.r10.s64 = -2086928384;
	// addi r9,r10,-7336
	ctx.r9.s64 = ctx.r10.s64 + -7336;
	// lwz r11,-7368(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -7368);
	// stw r11,80(r9)
	PPC_STORE_U32(ctx.r9.u32 + 80, ctx.r11.u32);
	// stw r11,104(r9)
	PPC_STORE_U32(ctx.r9.u32 + 104, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8368B0D4"))) PPC_WEAK_FUNC(sub_8368B0D4);
PPC_FUNC_IMPL(__imp__sub_8368B0D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8368B0D8"))) PPC_WEAK_FUNC(sub_8368B0D8);
PPC_FUNC_IMPL(__imp__sub_8368B0D8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-31844
	ctx.r10.s64 = -2086928384;
	// lis r8,-32240
	ctx.r8.s64 = -2112880640;
	// addi r6,r10,-7336
	ctx.r6.s64 = ctx.r10.s64 + -7336;
	// lis r7,-31822
	ctx.r7.s64 = -2085486592;
	// li r5,8
	ctx.r5.s64 = 8;
	// stw r6,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r6.u32);
	// lis r9,-32208
	ctx.r9.s64 = -2110783488;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r5,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r5.u32);
	// addi r4,r8,-6608
	ctx.r4.s64 = ctx.r8.s64 + -6608;
	// addi r3,r7,-2084
	ctx.r3.s64 = ctx.r7.s64 + -2084;
	// stw r11,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r11.u32);
	// addi r9,r9,32608
	ctx.r9.s64 = ctx.r9.s64 + 32608;
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
	// li r6,20
	ctx.r6.s64 = 20;
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x82ef5ae8
	ctx.lr = 0x8368B13C;
	sub_82EF5AE8(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8368B14C"))) PPC_WEAK_FUNC(sub_8368B14C);
PPC_FUNC_IMPL(__imp__sub_8368B14C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8368B150"))) PPC_WEAK_FUNC(sub_8368B150);
PPC_FUNC_IMPL(__imp__sub_8368B150) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-32208
	ctx.r10.s64 = -2110783488;
	// lis r9,-32240
	ctx.r9.s64 = -2112880640;
	// addi r7,r10,32668
	ctx.r7.s64 = ctx.r10.s64 + 32668;
	// lis r8,-31822
	ctx.r8.s64 = -2085486592;
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
	// addi r3,r8,-2036
	ctx.r3.s64 = ctx.r8.s64 + -2036;
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
	ctx.lr = 0x8368B1B0;
	sub_82EF5AE8(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8368B1C0"))) PPC_WEAK_FUNC(sub_8368B1C0);
PPC_FUNC_IMPL(__imp__sub_8368B1C0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-32208
	ctx.r10.s64 = -2110783488;
	// lis r9,-32240
	ctx.r9.s64 = -2112880640;
	// addi r7,r10,32716
	ctx.r7.s64 = ctx.r10.s64 + 32716;
	// lis r8,-31822
	ctx.r8.s64 = -2085486592;
	// li r6,2
	ctx.r6.s64 = 2;
	// stw r7,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r7.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r4,r9,-6656
	ctx.r4.s64 = ctx.r9.s64 + -6656;
	// stw r6,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r6.u32);
	// addi r3,r8,-1988
	ctx.r3.s64 = ctx.r8.s64 + -1988;
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
	ctx.lr = 0x8368B220;
	sub_82EF5AE8(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8368B230"))) PPC_WEAK_FUNC(sub_8368B230);
PPC_FUNC_IMPL(__imp__sub_8368B230) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31844
	ctx.r11.s64 = -2086928384;
	// lis r10,-31844
	ctx.r10.s64 = -2086928384;
	// lis r9,-31844
	ctx.r9.s64 = -2086928384;
	// addi r8,r9,-7144
	ctx.r8.s64 = ctx.r9.s64 + -7144;
	// lwz r11,-7356(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -7356);
	// lwz r10,-7352(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + -7352);
	// stw r11,80(r8)
	PPC_STORE_U32(ctx.r8.u32 + 80, ctx.r11.u32);
	// stw r11,104(r8)
	PPC_STORE_U32(ctx.r8.u32 + 104, ctx.r11.u32);
	// stw r10,152(r8)
	PPC_STORE_U32(ctx.r8.u32 + 152, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8368B258"))) PPC_WEAK_FUNC(sub_8368B258);
PPC_FUNC_IMPL(__imp__sub_8368B258) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-31844
	ctx.r10.s64 = -2086928384;
	// lis r8,-32240
	ctx.r8.s64 = -2112880640;
	// addi r6,r10,-7144
	ctx.r6.s64 = ctx.r10.s64 + -7144;
	// lis r7,-31822
	ctx.r7.s64 = -2085486592;
	// li r5,9
	ctx.r5.s64 = 9;
	// stw r6,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r6.u32);
	// lis r9,-32208
	ctx.r9.s64 = -2110783488;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r5,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r5.u32);
	// addi r4,r8,-6608
	ctx.r4.s64 = ctx.r8.s64 + -6608;
	// addi r3,r7,-1940
	ctx.r3.s64 = ctx.r7.s64 + -1940;
	// stw r11,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r11.u32);
	// addi r9,r9,32764
	ctx.r9.s64 = ctx.r9.s64 + 32764;
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
	// li r6,24
	ctx.r6.s64 = 24;
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x82ef5ae8
	ctx.lr = 0x8368B2BC;
	sub_82EF5AE8(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8368B2CC"))) PPC_WEAK_FUNC(sub_8368B2CC);
PPC_FUNC_IMPL(__imp__sub_8368B2CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8368B2D0"))) PPC_WEAK_FUNC(sub_8368B2D0);
PPC_FUNC_IMPL(__imp__sub_8368B2D0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31844
	ctx.r11.s64 = -2086928384;
	// lis r10,-31844
	ctx.r10.s64 = -2086928384;
	// addi r9,r10,-6928
	ctx.r9.s64 = ctx.r10.s64 + -6928;
	// lwz r11,-7340(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -7340);
	// stw r11,200(r9)
	PPC_STORE_U32(ctx.r9.u32 + 200, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8368B2E8"))) PPC_WEAK_FUNC(sub_8368B2E8);
PPC_FUNC_IMPL(__imp__sub_8368B2E8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-31844
	ctx.r10.s64 = -2086928384;
	// lis r8,-32240
	ctx.r8.s64 = -2112880640;
	// addi r6,r10,-6928
	ctx.r6.s64 = ctx.r10.s64 + -6928;
	// lis r7,-31822
	ctx.r7.s64 = -2085486592;
	// li r5,10
	ctx.r5.s64 = 10;
	// stw r6,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r6.u32);
	// lis r9,-32207
	ctx.r9.s64 = -2110717952;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r5,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r5.u32);
	// addi r4,r8,-6712
	ctx.r4.s64 = ctx.r8.s64 + -6712;
	// addi r3,r7,-1892
	ctx.r3.s64 = ctx.r7.s64 + -1892;
	// stw r11,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r11.u32);
	// addi r9,r9,-32320
	ctx.r9.s64 = ctx.r9.s64 + -32320;
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
	// li r6,48
	ctx.r6.s64 = 48;
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x82ef5ae8
	ctx.lr = 0x8368B34C;
	sub_82EF5AE8(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8368B35C"))) PPC_WEAK_FUNC(sub_8368B35C);
PPC_FUNC_IMPL(__imp__sub_8368B35C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8368B360"))) PPC_WEAK_FUNC(sub_8368B360);
PPC_FUNC_IMPL(__imp__sub_8368B360) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-32207
	ctx.r10.s64 = -2110717952;
	// lis r9,-32240
	ctx.r9.s64 = -2112880640;
	// addi r7,r10,-32256
	ctx.r7.s64 = ctx.r10.s64 + -32256;
	// lis r8,-31822
	ctx.r8.s64 = -2085486592;
	// li r6,10
	ctx.r6.s64 = 10;
	// stw r7,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r7.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r4,r9,-6712
	ctx.r4.s64 = ctx.r9.s64 + -6712;
	// stw r6,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r6.u32);
	// addi r3,r8,-1844
	ctx.r3.s64 = ctx.r8.s64 + -1844;
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
	ctx.lr = 0x8368B3C0;
	sub_82EF5AE8(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8368B3D0"))) PPC_WEAK_FUNC(sub_8368B3D0);
PPC_FUNC_IMPL(__imp__sub_8368B3D0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-32207
	ctx.r10.s64 = -2110717952;
	// lis r9,-32240
	ctx.r9.s64 = -2112880640;
	// addi r7,r10,-32016
	ctx.r7.s64 = ctx.r10.s64 + -32016;
	// lis r8,-31822
	ctx.r8.s64 = -2085486592;
	// li r6,10
	ctx.r6.s64 = 10;
	// stw r7,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r7.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r4,r9,-6712
	ctx.r4.s64 = ctx.r9.s64 + -6712;
	// stw r6,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r6.u32);
	// addi r3,r8,-1796
	ctx.r3.s64 = ctx.r8.s64 + -1796;
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
	ctx.lr = 0x8368B430;
	sub_82EF5AE8(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8368B440"))) PPC_WEAK_FUNC(sub_8368B440);
PPC_FUNC_IMPL(__imp__sub_8368B440) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31844
	ctx.r11.s64 = -2086928384;
	// lis r10,-31844
	ctx.r10.s64 = -2086928384;
	// addi r9,r10,-6672
	ctx.r9.s64 = ctx.r10.s64 + -6672;
	// lwz r11,-6688(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -6688);
	// stw r11,80(r9)
	PPC_STORE_U32(ctx.r9.u32 + 80, ctx.r11.u32);
	// stw r11,104(r9)
	PPC_STORE_U32(ctx.r9.u32 + 104, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8368B45C"))) PPC_WEAK_FUNC(sub_8368B45C);
PPC_FUNC_IMPL(__imp__sub_8368B45C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8368B460"))) PPC_WEAK_FUNC(sub_8368B460);
PPC_FUNC_IMPL(__imp__sub_8368B460) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-31844
	ctx.r10.s64 = -2086928384;
	// lis r8,-32240
	ctx.r8.s64 = -2112880640;
	// addi r6,r10,-6672
	ctx.r6.s64 = ctx.r10.s64 + -6672;
	// lis r7,-31822
	ctx.r7.s64 = -2085486592;
	// li r5,9
	ctx.r5.s64 = 9;
	// stw r6,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r6.u32);
	// lis r9,-32207
	ctx.r9.s64 = -2110717952;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r5,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r5.u32);
	// addi r4,r8,-6608
	ctx.r4.s64 = ctx.r8.s64 + -6608;
	// addi r3,r7,-1748
	ctx.r3.s64 = ctx.r7.s64 + -1748;
	// stw r11,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r11.u32);
	// addi r9,r9,-31408
	ctx.r9.s64 = ctx.r9.s64 + -31408;
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
	// li r6,24
	ctx.r6.s64 = 24;
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x82ef5ae8
	ctx.lr = 0x8368B4C4;
	sub_82EF5AE8(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8368B4D4"))) PPC_WEAK_FUNC(sub_8368B4D4);
PPC_FUNC_IMPL(__imp__sub_8368B4D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8368B4D8"))) PPC_WEAK_FUNC(sub_8368B4D8);
PPC_FUNC_IMPL(__imp__sub_8368B4D8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-32207
	ctx.r10.s64 = -2110717952;
	// lis r9,-32240
	ctx.r9.s64 = -2112880640;
	// addi r7,r10,-31348
	ctx.r7.s64 = ctx.r10.s64 + -31348;
	// lis r8,-31822
	ctx.r8.s64 = -2085486592;
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
	// addi r3,r8,-1700
	ctx.r3.s64 = ctx.r8.s64 + -1700;
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
	ctx.lr = 0x8368B538;
	sub_82EF5AE8(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8368B548"))) PPC_WEAK_FUNC(sub_8368B548);
PPC_FUNC_IMPL(__imp__sub_8368B548) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-32207
	ctx.r10.s64 = -2110717952;
	// lis r9,-32240
	ctx.r9.s64 = -2112880640;
	// addi r7,r10,-31296
	ctx.r7.s64 = ctx.r10.s64 + -31296;
	// lis r8,-31822
	ctx.r8.s64 = -2085486592;
	// li r6,4
	ctx.r6.s64 = 4;
	// stw r7,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r7.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r4,r9,-6656
	ctx.r4.s64 = ctx.r9.s64 + -6656;
	// stw r6,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r6.u32);
	// addi r3,r8,-1652
	ctx.r3.s64 = ctx.r8.s64 + -1652;
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
	ctx.lr = 0x8368B5A8;
	sub_82EF5AE8(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8368B5B8"))) PPC_WEAK_FUNC(sub_8368B5B8);
PPC_FUNC_IMPL(__imp__sub_8368B5B8) {
	PPC_FUNC_PROLOGUE();
	// lis r9,-31842
	ctx.r9.s64 = -2086797312;
	// lis r8,-31844
	ctx.r8.s64 = -2086928384;
	// addi r7,r8,-6308
	ctx.r7.s64 = ctx.r8.s64 + -6308;
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

__attribute__((alias("__imp__sub_8368B5D8"))) PPC_WEAK_FUNC(sub_8368B5D8);
PPC_FUNC_IMPL(__imp__sub_8368B5D8) {
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
	// lis r11,-31844
	ctx.r11.s64 = -2086928384;
	// li r30,9
	ctx.r30.s64 = 9;
	// addi r11,r11,-5664
	ctx.r11.s64 = ctx.r11.s64 + -5664;
	// addi r31,r11,408
	ctx.r31.s64 = ctx.r11.s64 + 408;
loc_8368B5FC:
	// addi r31,r31,-40
	ctx.r31.s64 = ctx.r31.s64 + -40;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8259b670
	ctx.lr = 0x8368B608;
	sub_8259B670(ctx, base);
	// addic. r30,r30,-1
	ctx.xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// bge 0x8368b5fc
	if (!ctx.cr0.lt) goto loc_8368B5FC;
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

__attribute__((alias("__imp__sub_8368B628"))) PPC_WEAK_FUNC(sub_8368B628);
PPC_FUNC_IMPL(__imp__sub_8368B628) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31844
	ctx.r11.s64 = -2086928384;
	// addi r3,r11,-5248
	ctx.r3.s64 = ctx.r11.s64 + -5248;
	// b 0x82e01bf0
	sub_82E01BF0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8368B634"))) PPC_WEAK_FUNC(sub_8368B634);
PPC_FUNC_IMPL(__imp__sub_8368B634) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8368B638"))) PPC_WEAK_FUNC(sub_8368B638);
PPC_FUNC_IMPL(__imp__sub_8368B638) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31844
	ctx.r11.s64 = -2086928384;
	// addi r3,r11,-5240
	ctx.r3.s64 = ctx.r11.s64 + -5240;
	// b 0x82e01bf0
	sub_82E01BF0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8368B644"))) PPC_WEAK_FUNC(sub_8368B644);
PPC_FUNC_IMPL(__imp__sub_8368B644) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8368B648"))) PPC_WEAK_FUNC(sub_8368B648);
PPC_FUNC_IMPL(__imp__sub_8368B648) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31844
	ctx.r11.s64 = -2086928384;
	// addi r3,r11,-5072
	ctx.r3.s64 = ctx.r11.s64 + -5072;
	// b 0x82e01bf0
	sub_82E01BF0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8368B654"))) PPC_WEAK_FUNC(sub_8368B654);
PPC_FUNC_IMPL(__imp__sub_8368B654) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8368B658"))) PPC_WEAK_FUNC(sub_8368B658);
PPC_FUNC_IMPL(__imp__sub_8368B658) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31844
	ctx.r11.s64 = -2086928384;
	// addi r3,r11,-5040
	ctx.r3.s64 = ctx.r11.s64 + -5040;
	// b 0x82e01bf0
	sub_82E01BF0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8368B664"))) PPC_WEAK_FUNC(sub_8368B664);
PPC_FUNC_IMPL(__imp__sub_8368B664) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8368B668"))) PPC_WEAK_FUNC(sub_8368B668);
PPC_FUNC_IMPL(__imp__sub_8368B668) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31844
	ctx.r11.s64 = -2086928384;
	// addi r3,r11,-5032
	ctx.r3.s64 = ctx.r11.s64 + -5032;
	// b 0x82e01bf0
	sub_82E01BF0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8368B674"))) PPC_WEAK_FUNC(sub_8368B674);
PPC_FUNC_IMPL(__imp__sub_8368B674) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8368B678"))) PPC_WEAK_FUNC(sub_8368B678);
PPC_FUNC_IMPL(__imp__sub_8368B678) {
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
	// lis r11,-31844
	ctx.r11.s64 = -2086928384;
	// lwz r31,-5008(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + -5008);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x8368b6a8
	if (ctx.cr6.eq) goto loc_8368B6A8;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d76cf0
	ctx.lr = 0x8368B6A0;
	sub_82D76CF0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82e01568
	ctx.lr = 0x8368B6A8;
	sub_82E01568(ctx, base);
loc_8368B6A8:
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

__attribute__((alias("__imp__sub_8368B6BC"))) PPC_WEAK_FUNC(sub_8368B6BC);
PPC_FUNC_IMPL(__imp__sub_8368B6BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8368B6C0"))) PPC_WEAK_FUNC(sub_8368B6C0);
PPC_FUNC_IMPL(__imp__sub_8368B6C0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31844
	ctx.r11.s64 = -2086928384;
	// lwz r3,-5012(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -5012);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// li r4,1
	ctx.r4.s64 = 1;
	// b 0x824a6cd0
	sub_824A6CD0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8368B6D8"))) PPC_WEAK_FUNC(sub_8368B6D8);
PPC_FUNC_IMPL(__imp__sub_8368B6D8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8368B6DC"))) PPC_WEAK_FUNC(sub_8368B6DC);
PPC_FUNC_IMPL(__imp__sub_8368B6DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8368B6E0"))) PPC_WEAK_FUNC(sub_8368B6E0);
PPC_FUNC_IMPL(__imp__sub_8368B6E0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31844
	ctx.r11.s64 = -2086928384;
	// addi r3,r11,-5004
	ctx.r3.s64 = ctx.r11.s64 + -5004;
	// b 0x824a7088
	sub_824A7088(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8368B6EC"))) PPC_WEAK_FUNC(sub_8368B6EC);
PPC_FUNC_IMPL(__imp__sub_8368B6EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8368B6F0"))) PPC_WEAK_FUNC(sub_8368B6F0);
PPC_FUNC_IMPL(__imp__sub_8368B6F0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-31892
	ctx.r10.s64 = -2090074112;
	// addi r11,r11,17164
	ctx.r11.s64 = ctx.r11.s64 + 17164;
	// stw r11,-26628(r10)
	PPC_STORE_U32(ctx.r10.u32 + -26628, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8368B704"))) PPC_WEAK_FUNC(sub_8368B704);
PPC_FUNC_IMPL(__imp__sub_8368B704) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8368B708"))) PPC_WEAK_FUNC(sub_8368B708);
PPC_FUNC_IMPL(__imp__sub_8368B708) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31844
	ctx.r11.s64 = -2086928384;
	// addi r3,r11,-4456
	ctx.r3.s64 = ctx.r11.s64 + -4456;
	// b 0x824b2628
	sub_824B2628(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8368B714"))) PPC_WEAK_FUNC(sub_8368B714);
PPC_FUNC_IMPL(__imp__sub_8368B714) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8368B718"))) PPC_WEAK_FUNC(sub_8368B718);
PPC_FUNC_IMPL(__imp__sub_8368B718) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31844
	ctx.r11.s64 = -2086928384;
	// addi r3,r11,-4400
	ctx.r3.s64 = ctx.r11.s64 + -4400;
	// b 0x824afb20
	sub_824AFB20(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8368B724"))) PPC_WEAK_FUNC(sub_8368B724);
PPC_FUNC_IMPL(__imp__sub_8368B724) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8368B728"))) PPC_WEAK_FUNC(sub_8368B728);
PPC_FUNC_IMPL(__imp__sub_8368B728) {
	PPC_FUNC_PROLOGUE();
	// lis r9,-31844
	ctx.r9.s64 = -2086928384;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r10,r9,-4432
	ctx.r10.s64 = ctx.r9.s64 + -4432;
	// addi r11,r11,17492
	ctx.r11.s64 = ctx.r11.s64 + 17492;
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r11,-4432(r9)
	PPC_STORE_U32(ctx.r9.u32 + -4432, ctx.r11.u32);
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r10,4
	ctx.r3.s64 = ctx.r10.s64 + 4;
	// b 0x8248c598
	sub_8248C598(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8368B74C"))) PPC_WEAK_FUNC(sub_8368B74C);
PPC_FUNC_IMPL(__imp__sub_8368B74C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8368B750"))) PPC_WEAK_FUNC(sub_8368B750);
PPC_FUNC_IMPL(__imp__sub_8368B750) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31844
	ctx.r11.s64 = -2086928384;
	// addi r11,r11,-4300
	ctx.r11.s64 = ctx.r11.s64 + -4300;
	// lwz r3,4(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// b 0x82480108
	sub_82480108(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8368B768"))) PPC_WEAK_FUNC(sub_8368B768);
PPC_FUNC_IMPL(__imp__sub_8368B768) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8368B76C"))) PPC_WEAK_FUNC(sub_8368B76C);
PPC_FUNC_IMPL(__imp__sub_8368B76C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8368B770"))) PPC_WEAK_FUNC(sub_8368B770);
PPC_FUNC_IMPL(__imp__sub_8368B770) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31844
	ctx.r11.s64 = -2086928384;
	// addi r11,r11,-4112
	ctx.r11.s64 = ctx.r11.s64 + -4112;
	// lwz r3,4(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// b 0x82480108
	sub_82480108(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8368B788"))) PPC_WEAK_FUNC(sub_8368B788);
PPC_FUNC_IMPL(__imp__sub_8368B788) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8368B78C"))) PPC_WEAK_FUNC(sub_8368B78C);
PPC_FUNC_IMPL(__imp__sub_8368B78C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8368B790"))) PPC_WEAK_FUNC(sub_8368B790);
PPC_FUNC_IMPL(__imp__sub_8368B790) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31844
	ctx.r11.s64 = -2086928384;
	// addi r3,r11,10884
	ctx.r3.s64 = ctx.r11.s64 + 10884;
	// b 0x82e01bf0
	sub_82E01BF0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8368B79C"))) PPC_WEAK_FUNC(sub_8368B79C);
PPC_FUNC_IMPL(__imp__sub_8368B79C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8368B7A0"))) PPC_WEAK_FUNC(sub_8368B7A0);
PPC_FUNC_IMPL(__imp__sub_8368B7A0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31844
	ctx.r11.s64 = -2086928384;
	// addi r3,r11,10896
	ctx.r3.s64 = ctx.r11.s64 + 10896;
	// b 0x82ee9f80
	sub_82EE9F80(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8368B7AC"))) PPC_WEAK_FUNC(sub_8368B7AC);
PPC_FUNC_IMPL(__imp__sub_8368B7AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8368B7B0"))) PPC_WEAK_FUNC(sub_8368B7B0);
PPC_FUNC_IMPL(__imp__sub_8368B7B0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31844
	ctx.r11.s64 = -2086928384;
	// addi r3,r11,11136
	ctx.r3.s64 = ctx.r11.s64 + 11136;
	// b 0x82e01bf0
	sub_82E01BF0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8368B7BC"))) PPC_WEAK_FUNC(sub_8368B7BC);
PPC_FUNC_IMPL(__imp__sub_8368B7BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8368B7C0"))) PPC_WEAK_FUNC(sub_8368B7C0);
PPC_FUNC_IMPL(__imp__sub_8368B7C0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31844
	ctx.r11.s64 = -2086928384;
	// addi r11,r11,12176
	ctx.r11.s64 = ctx.r11.s64 + 12176;
	// lwz r3,4(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// addi r9,r3,8
	ctx.r9.s64 = ctx.r3.s64 + 8;
loc_8368B7D8:
	// mfmsr r10
	ctx.r10.u64 = ctx.msr;
	// mtmsrd r13,1
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// lwarx r11,0,r9
	ctx.reserved.u32 = *(uint32_t*)(base + ctx.r9.u32);
	ctx.r11.u64 = __builtin_bswap32(ctx.reserved.u32);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stwcx. r11,0,r9
	ctx.cr0.lt = 0;
	ctx.cr0.gt = 0;
	ctx.cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ctx.r9.u32), ctx.reserved.s32, __builtin_bswap32(ctx.r11.s32));
	ctx.cr0.so = ctx.xer.so;
	// mtmsrd r10,1
	ctx.msr = (ctx.r10.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// bne 0x8368b7d8
	if (!ctx.cr0.eq) goto loc_8368B7D8;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_8368B80C"))) PPC_WEAK_FUNC(sub_8368B80C);
PPC_FUNC_IMPL(__imp__sub_8368B80C) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8368B810"))) PPC_WEAK_FUNC(sub_8368B810);
PPC_FUNC_IMPL(__imp__sub_8368B810) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31844
	ctx.r11.s64 = -2086928384;
	// addi r3,r11,12184
	ctx.r3.s64 = ctx.r11.s64 + 12184;
	// b 0x82839df8
	sub_82839DF8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8368B81C"))) PPC_WEAK_FUNC(sub_8368B81C);
PPC_FUNC_IMPL(__imp__sub_8368B81C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8368B820"))) PPC_WEAK_FUNC(sub_8368B820);
PPC_FUNC_IMPL(__imp__sub_8368B820) {
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
	// lis r11,-31844
	ctx.r11.s64 = -2086928384;
	// addi r31,r11,12280
	ctx.r31.s64 = ctx.r11.s64 + 12280;
	// addi r3,r31,4
	ctx.r3.s64 = ctx.r31.s64 + 4;
	// bl 0x82e01bf0
	ctx.lr = 0x8368B840;
	sub_82E01BF0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82e01bf0
	ctx.lr = 0x8368B848;
	sub_82E01BF0(ctx, base);
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

__attribute__((alias("__imp__sub_8368B85C"))) PPC_WEAK_FUNC(sub_8368B85C);
PPC_FUNC_IMPL(__imp__sub_8368B85C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8368B860"))) PPC_WEAK_FUNC(sub_8368B860);
PPC_FUNC_IMPL(__imp__sub_8368B860) {
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
	// lis r11,-31844
	ctx.r11.s64 = -2086928384;
	// li r30,5
	ctx.r30.s64 = 5;
	// addi r11,r11,12296
	ctx.r11.s64 = ctx.r11.s64 + 12296;
	// addi r31,r11,120
	ctx.r31.s64 = ctx.r11.s64 + 120;
loc_8368B884:
	// addi r31,r31,-20
	ctx.r31.s64 = ctx.r31.s64 + -20;
	// addi r3,r31,4
	ctx.r3.s64 = ctx.r31.s64 + 4;
	// bl 0x82e01bf0
	ctx.lr = 0x8368B890;
	sub_82E01BF0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82e01bf0
	ctx.lr = 0x8368B898;
	sub_82E01BF0(ctx, base);
	// addic. r30,r30,-1
	ctx.xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// bge 0x8368b884
	if (!ctx.cr0.lt) goto loc_8368B884;
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

__attribute__((alias("__imp__sub_8368B8B8"))) PPC_WEAK_FUNC(sub_8368B8B8);
PPC_FUNC_IMPL(__imp__sub_8368B8B8) {
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
	// lis r11,-31844
	ctx.r11.s64 = -2086928384;
	// li r30,1
	ctx.r30.s64 = 1;
	// addi r11,r11,12536
	ctx.r11.s64 = ctx.r11.s64 + 12536;
	// addi r31,r11,24
	ctx.r31.s64 = ctx.r11.s64 + 24;
loc_8368B8DC:
	// addi r31,r31,-12
	ctx.r31.s64 = ctx.r31.s64 + -12;
	// addi r3,r31,4
	ctx.r3.s64 = ctx.r31.s64 + 4;
	// bl 0x82e01bf0
	ctx.lr = 0x8368B8E8;
	sub_82E01BF0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82e01bf0
	ctx.lr = 0x8368B8F0;
	sub_82E01BF0(ctx, base);
	// addic. r30,r30,-1
	ctx.xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// bge 0x8368b8dc
	if (!ctx.cr0.lt) goto loc_8368B8DC;
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

__attribute__((alias("__imp__sub_8368B910"))) PPC_WEAK_FUNC(sub_8368B910);
PPC_FUNC_IMPL(__imp__sub_8368B910) {
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
	// lis r11,-31844
	ctx.r11.s64 = -2086928384;
	// li r30,3
	ctx.r30.s64 = 3;
	// addi r11,r11,12628
	ctx.r11.s64 = ctx.r11.s64 + 12628;
	// addi r31,r11,48
	ctx.r31.s64 = ctx.r11.s64 + 48;
loc_8368B934:
	// addi r31,r31,-12
	ctx.r31.s64 = ctx.r31.s64 + -12;
	// addi r3,r31,4
	ctx.r3.s64 = ctx.r31.s64 + 4;
	// bl 0x82e01bf0
	ctx.lr = 0x8368B940;
	sub_82E01BF0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82e01bf0
	ctx.lr = 0x8368B948;
	sub_82E01BF0(ctx, base);
	// addic. r30,r30,-1
	ctx.xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// bge 0x8368b934
	if (!ctx.cr0.lt) goto loc_8368B934;
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

__attribute__((alias("__imp__sub_8368B968"))) PPC_WEAK_FUNC(sub_8368B968);
PPC_FUNC_IMPL(__imp__sub_8368B968) {
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
	// lis r11,-31844
	ctx.r11.s64 = -2086928384;
	// li r30,2
	ctx.r30.s64 = 2;
	// addi r11,r11,13240
	ctx.r11.s64 = ctx.r11.s64 + 13240;
	// addi r31,r11,76
	ctx.r31.s64 = ctx.r11.s64 + 76;
loc_8368B98C:
	// addi r31,r31,-24
	ctx.r31.s64 = ctx.r31.s64 + -24;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82e01bf0
	ctx.lr = 0x8368B998;
	sub_82E01BF0(ctx, base);
	// addic. r30,r30,-1
	ctx.xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// bge 0x8368b98c
	if (!ctx.cr0.lt) goto loc_8368B98C;
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

__attribute__((alias("__imp__sub_8368B9B8"))) PPC_WEAK_FUNC(sub_8368B9B8);
PPC_FUNC_IMPL(__imp__sub_8368B9B8) {
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
	// lis r11,-31844
	ctx.r11.s64 = -2086928384;
	// li r30,3
	ctx.r30.s64 = 3;
	// addi r11,r11,13312
	ctx.r11.s64 = ctx.r11.s64 + 13312;
	// addi r31,r11,100
	ctx.r31.s64 = ctx.r11.s64 + 100;
loc_8368B9DC:
	// addi r31,r31,-24
	ctx.r31.s64 = ctx.r31.s64 + -24;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82e01bf0
	ctx.lr = 0x8368B9E8;
	sub_82E01BF0(ctx, base);
	// addic. r30,r30,-1
	ctx.xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// bge 0x8368b9dc
	if (!ctx.cr0.lt) goto loc_8368B9DC;
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

__attribute__((alias("__imp__sub_8368BA08"))) PPC_WEAK_FUNC(sub_8368BA08);
PPC_FUNC_IMPL(__imp__sub_8368BA08) {
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
	// lis r11,-31844
	ctx.r11.s64 = -2086928384;
	// li r30,1
	ctx.r30.s64 = 1;
	// addi r11,r11,13456
	ctx.r11.s64 = ctx.r11.s64 + 13456;
	// addi r31,r11,52
	ctx.r31.s64 = ctx.r11.s64 + 52;
loc_8368BA2C:
	// addi r31,r31,-24
	ctx.r31.s64 = ctx.r31.s64 + -24;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82e01bf0
	ctx.lr = 0x8368BA38;
	sub_82E01BF0(ctx, base);
	// addic. r30,r30,-1
	ctx.xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// bge 0x8368ba2c
	if (!ctx.cr0.lt) goto loc_8368BA2C;
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

__attribute__((alias("__imp__sub_8368BA58"))) PPC_WEAK_FUNC(sub_8368BA58);
PPC_FUNC_IMPL(__imp__sub_8368BA58) {
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
	// lis r11,-31844
	ctx.r11.s64 = -2086928384;
	// li r30,2
	ctx.r30.s64 = 2;
	// addi r11,r11,13640
	ctx.r11.s64 = ctx.r11.s64 + 13640;
	// addi r31,r11,76
	ctx.r31.s64 = ctx.r11.s64 + 76;
loc_8368BA7C:
	// addi r31,r31,-24
	ctx.r31.s64 = ctx.r31.s64 + -24;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82e01bf0
	ctx.lr = 0x8368BA88;
	sub_82E01BF0(ctx, base);
	// addic. r30,r30,-1
	ctx.xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// bge 0x8368ba7c
	if (!ctx.cr0.lt) goto loc_8368BA7C;
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

__attribute__((alias("__imp__sub_8368BAA8"))) PPC_WEAK_FUNC(sub_8368BAA8);
PPC_FUNC_IMPL(__imp__sub_8368BAA8) {
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
	// lis r11,-31844
	ctx.r11.s64 = -2086928384;
	// li r30,2
	ctx.r30.s64 = 2;
	// addi r11,r11,13712
	ctx.r11.s64 = ctx.r11.s64 + 13712;
	// addi r31,r11,76
	ctx.r31.s64 = ctx.r11.s64 + 76;
loc_8368BACC:
	// addi r31,r31,-24
	ctx.r31.s64 = ctx.r31.s64 + -24;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82e01bf0
	ctx.lr = 0x8368BAD8;
	sub_82E01BF0(ctx, base);
	// addic. r30,r30,-1
	ctx.xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// bge 0x8368bacc
	if (!ctx.cr0.lt) goto loc_8368BACC;
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

__attribute__((alias("__imp__sub_8368BAF8"))) PPC_WEAK_FUNC(sub_8368BAF8);
PPC_FUNC_IMPL(__imp__sub_8368BAF8) {
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
	// lis r11,-31844
	ctx.r11.s64 = -2086928384;
	// li r30,6
	ctx.r30.s64 = 6;
	// addi r11,r11,13856
	ctx.r11.s64 = ctx.r11.s64 + 13856;
	// addi r31,r11,172
	ctx.r31.s64 = ctx.r11.s64 + 172;
loc_8368BB1C:
	// addi r31,r31,-24
	ctx.r31.s64 = ctx.r31.s64 + -24;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82e01bf0
	ctx.lr = 0x8368BB28;
	sub_82E01BF0(ctx, base);
	// addic. r30,r30,-1
	ctx.xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// bge 0x8368bb1c
	if (!ctx.cr0.lt) goto loc_8368BB1C;
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

__attribute__((alias("__imp__sub_8368BB48"))) PPC_WEAK_FUNC(sub_8368BB48);
PPC_FUNC_IMPL(__imp__sub_8368BB48) {
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
	// lis r11,-31844
	ctx.r11.s64 = -2086928384;
	// li r30,2
	ctx.r30.s64 = 2;
	// addi r11,r11,14024
	ctx.r11.s64 = ctx.r11.s64 + 14024;
	// addi r31,r11,76
	ctx.r31.s64 = ctx.r11.s64 + 76;
loc_8368BB6C:
	// addi r31,r31,-24
	ctx.r31.s64 = ctx.r31.s64 + -24;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82e01bf0
	ctx.lr = 0x8368BB78;
	sub_82E01BF0(ctx, base);
	// addic. r30,r30,-1
	ctx.xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// bge 0x8368bb6c
	if (!ctx.cr0.lt) goto loc_8368BB6C;
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

__attribute__((alias("__imp__sub_8368BB98"))) PPC_WEAK_FUNC(sub_8368BB98);
PPC_FUNC_IMPL(__imp__sub_8368BB98) {
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
	// lis r11,-31844
	ctx.r11.s64 = -2086928384;
	// li r30,1
	ctx.r30.s64 = 1;
	// addi r11,r11,14128
	ctx.r11.s64 = ctx.r11.s64 + 14128;
	// addi r31,r11,52
	ctx.r31.s64 = ctx.r11.s64 + 52;
loc_8368BBBC:
	// addi r31,r31,-24
	ctx.r31.s64 = ctx.r31.s64 + -24;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82e01bf0
	ctx.lr = 0x8368BBC8;
	sub_82E01BF0(ctx, base);
	// addic. r30,r30,-1
	ctx.xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// bge 0x8368bbbc
	if (!ctx.cr0.lt) goto loc_8368BBBC;
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

__attribute__((alias("__imp__sub_8368BBE8"))) PPC_WEAK_FUNC(sub_8368BBE8);
PPC_FUNC_IMPL(__imp__sub_8368BBE8) {
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
	// lis r11,-31844
	ctx.r11.s64 = -2086928384;
	// li r30,8
	ctx.r30.s64 = 8;
	// addi r11,r11,14192
	ctx.r11.s64 = ctx.r11.s64 + 14192;
	// addi r31,r11,220
	ctx.r31.s64 = ctx.r11.s64 + 220;
loc_8368BC0C:
	// addi r31,r31,-24
	ctx.r31.s64 = ctx.r31.s64 + -24;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82e01bf0
	ctx.lr = 0x8368BC18;
	sub_82E01BF0(ctx, base);
	// addic. r30,r30,-1
	ctx.xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// bge 0x8368bc0c
	if (!ctx.cr0.lt) goto loc_8368BC0C;
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

__attribute__((alias("__imp__sub_8368BC38"))) PPC_WEAK_FUNC(sub_8368BC38);
PPC_FUNC_IMPL(__imp__sub_8368BC38) {
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
	// lis r11,-31844
	ctx.r11.s64 = -2086928384;
	// li r30,19
	ctx.r30.s64 = 19;
	// addi r11,r11,14472
	ctx.r11.s64 = ctx.r11.s64 + 14472;
	// addi r31,r11,484
	ctx.r31.s64 = ctx.r11.s64 + 484;
loc_8368BC5C:
	// addi r31,r31,-24
	ctx.r31.s64 = ctx.r31.s64 + -24;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82e01bf0
	ctx.lr = 0x8368BC68;
	sub_82E01BF0(ctx, base);
	// addic. r30,r30,-1
	ctx.xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// bge 0x8368bc5c
	if (!ctx.cr0.lt) goto loc_8368BC5C;
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

__attribute__((alias("__imp__sub_8368BC88"))) PPC_WEAK_FUNC(sub_8368BC88);
PPC_FUNC_IMPL(__imp__sub_8368BC88) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8368BC8C"))) PPC_WEAK_FUNC(sub_8368BC8C);
PPC_FUNC_IMPL(__imp__sub_8368BC8C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8368BC90"))) PPC_WEAK_FUNC(sub_8368BC90);
PPC_FUNC_IMPL(__imp__sub_8368BC90) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8368BC94"))) PPC_WEAK_FUNC(sub_8368BC94);
PPC_FUNC_IMPL(__imp__sub_8368BC94) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8368BC98"))) PPC_WEAK_FUNC(sub_8368BC98);
PPC_FUNC_IMPL(__imp__sub_8368BC98) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8368BC9C"))) PPC_WEAK_FUNC(sub_8368BC9C);
PPC_FUNC_IMPL(__imp__sub_8368BC9C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8368BCA0"))) PPC_WEAK_FUNC(sub_8368BCA0);
PPC_FUNC_IMPL(__imp__sub_8368BCA0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8368BCA4"))) PPC_WEAK_FUNC(sub_8368BCA4);
PPC_FUNC_IMPL(__imp__sub_8368BCA4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8368BCA8"))) PPC_WEAK_FUNC(sub_8368BCA8);
PPC_FUNC_IMPL(__imp__sub_8368BCA8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31844
	ctx.r11.s64 = -2086928384;
	// addi r3,r11,15828
	ctx.r3.s64 = ctx.r11.s64 + 15828;
	// b 0x824a7088
	sub_824A7088(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8368BCB4"))) PPC_WEAK_FUNC(sub_8368BCB4);
PPC_FUNC_IMPL(__imp__sub_8368BCB4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8368BCB8"))) PPC_WEAK_FUNC(sub_8368BCB8);
PPC_FUNC_IMPL(__imp__sub_8368BCB8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31844
	ctx.r11.s64 = -2086928384;
	// addi r3,r11,16068
	ctx.r3.s64 = ctx.r11.s64 + 16068;
	// b 0x824a7088
	sub_824A7088(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8368BCC4"))) PPC_WEAK_FUNC(sub_8368BCC4);
PPC_FUNC_IMPL(__imp__sub_8368BCC4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8368BCC8"))) PPC_WEAK_FUNC(sub_8368BCC8);
PPC_FUNC_IMPL(__imp__sub_8368BCC8) {
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
	// lis r11,-31888
	ctx.r11.s64 = -2089811968;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r31,r11,8696
	ctx.r31.s64 = ctx.r11.s64 + 8696;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r31,28
	ctx.r3.s64 = ctx.r31.s64 + 28;
	// bl 0x8248c598
	ctx.lr = 0x8368BCF0;
	sub_8248C598(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x8248c598
	ctx.lr = 0x8368BD00;
	sub_8248C598(ctx, base);
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

__attribute__((alias("__imp__sub_8368BD14"))) PPC_WEAK_FUNC(sub_8368BD14);
PPC_FUNC_IMPL(__imp__sub_8368BD14) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8368BD18"))) PPC_WEAK_FUNC(sub_8368BD18);
PPC_FUNC_IMPL(__imp__sub_8368BD18) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31844
	ctx.r11.s64 = -2086928384;
	// addi r3,r11,16704
	ctx.r3.s64 = ctx.r11.s64 + 16704;
	// b 0x831d0fc0
	sub_831D0FC0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8368BD24"))) PPC_WEAK_FUNC(sub_8368BD24);
PPC_FUNC_IMPL(__imp__sub_8368BD24) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8368BD28"))) PPC_WEAK_FUNC(sub_8368BD28);
PPC_FUNC_IMPL(__imp__sub_8368BD28) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31844
	ctx.r11.s64 = -2086928384;
	// addi r3,r11,16616
	ctx.r3.s64 = ctx.r11.s64 + 16616;
	// b 0x82eeaa78
	sub_82EEAA78(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8368BD34"))) PPC_WEAK_FUNC(sub_8368BD34);
PPC_FUNC_IMPL(__imp__sub_8368BD34) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8368BD38"))) PPC_WEAK_FUNC(sub_8368BD38);
PPC_FUNC_IMPL(__imp__sub_8368BD38) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31844
	ctx.r11.s64 = -2086928384;
	// addi r3,r11,16512
	ctx.r3.s64 = ctx.r11.s64 + 16512;
	// b 0x82eea7e0
	sub_82EEA7E0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8368BD44"))) PPC_WEAK_FUNC(sub_8368BD44);
PPC_FUNC_IMPL(__imp__sub_8368BD44) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8368BD48"))) PPC_WEAK_FUNC(sub_8368BD48);
PPC_FUNC_IMPL(__imp__sub_8368BD48) {
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
	// lis r31,-31888
	ctx.r31.s64 = -2089811968;
	// lwz r11,12296(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12296);
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// beq cr6,0x8368bd74
	if (ctx.cr6.eq) goto loc_8368BD74;
	// bl 0x82d9eea0
	ctx.lr = 0x8368BD6C;
	sub_82D9EEA0(ctx, base);
	// li r11,-1
	ctx.r11.s64 = -1;
	// stw r11,12296(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12296, ctx.r11.u32);
loc_8368BD74:
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

__attribute__((alias("__imp__sub_8368BD88"))) PPC_WEAK_FUNC(sub_8368BD88);
PPC_FUNC_IMPL(__imp__sub_8368BD88) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31844
	ctx.r11.s64 = -2086928384;
	// addi r3,r11,16912
	ctx.r3.s64 = ctx.r11.s64 + 16912;
	// b 0x82e01bf0
	sub_82E01BF0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8368BD94"))) PPC_WEAK_FUNC(sub_8368BD94);
PPC_FUNC_IMPL(__imp__sub_8368BD94) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8368BD98"))) PPC_WEAK_FUNC(sub_8368BD98);
PPC_FUNC_IMPL(__imp__sub_8368BD98) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31844
	ctx.r11.s64 = -2086928384;
	// addi r11,r11,16916
	ctx.r11.s64 = ctx.r11.s64 + 16916;
	// lwz r3,4(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// b 0x82480108
	sub_82480108(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8368BDB0"))) PPC_WEAK_FUNC(sub_8368BDB0);
PPC_FUNC_IMPL(__imp__sub_8368BDB0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8368BDB4"))) PPC_WEAK_FUNC(sub_8368BDB4);
PPC_FUNC_IMPL(__imp__sub_8368BDB4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8368BDB8"))) PPC_WEAK_FUNC(sub_8368BDB8);
PPC_FUNC_IMPL(__imp__sub_8368BDB8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31844
	ctx.r11.s64 = -2086928384;
	// addi r11,r11,16924
	ctx.r11.s64 = ctx.r11.s64 + 16924;
	// lwz r3,4(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// b 0x82480108
	sub_82480108(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8368BDD0"))) PPC_WEAK_FUNC(sub_8368BDD0);
PPC_FUNC_IMPL(__imp__sub_8368BDD0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8368BDD4"))) PPC_WEAK_FUNC(sub_8368BDD4);
PPC_FUNC_IMPL(__imp__sub_8368BDD4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8368BDD8"))) PPC_WEAK_FUNC(sub_8368BDD8);
PPC_FUNC_IMPL(__imp__sub_8368BDD8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31844
	ctx.r11.s64 = -2086928384;
	// addi r3,r11,16944
	ctx.r3.s64 = ctx.r11.s64 + 16944;
	// b 0x82e01bf0
	sub_82E01BF0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8368BDE4"))) PPC_WEAK_FUNC(sub_8368BDE4);
PPC_FUNC_IMPL(__imp__sub_8368BDE4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8368BDE8"))) PPC_WEAK_FUNC(sub_8368BDE8);
PPC_FUNC_IMPL(__imp__sub_8368BDE8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31844
	ctx.r11.s64 = -2086928384;
	// addi r3,r11,16964
	ctx.r3.s64 = ctx.r11.s64 + 16964;
	// b 0x82e01bf0
	sub_82E01BF0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8368BDF4"))) PPC_WEAK_FUNC(sub_8368BDF4);
PPC_FUNC_IMPL(__imp__sub_8368BDF4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8368BDF8"))) PPC_WEAK_FUNC(sub_8368BDF8);
PPC_FUNC_IMPL(__imp__sub_8368BDF8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31844
	ctx.r11.s64 = -2086928384;
	// addi r11,r11,16972
	ctx.r11.s64 = ctx.r11.s64 + 16972;
	// lwz r3,4(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// b 0x82480108
	sub_82480108(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8368BE10"))) PPC_WEAK_FUNC(sub_8368BE10);
PPC_FUNC_IMPL(__imp__sub_8368BE10) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8368BE14"))) PPC_WEAK_FUNC(sub_8368BE14);
PPC_FUNC_IMPL(__imp__sub_8368BE14) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8368BE18"))) PPC_WEAK_FUNC(sub_8368BE18);
PPC_FUNC_IMPL(__imp__sub_8368BE18) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31844
	ctx.r11.s64 = -2086928384;
	// addi r3,r11,16996
	ctx.r3.s64 = ctx.r11.s64 + 16996;
	// b 0x82e01bf0
	sub_82E01BF0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8368BE24"))) PPC_WEAK_FUNC(sub_8368BE24);
PPC_FUNC_IMPL(__imp__sub_8368BE24) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8368BE28"))) PPC_WEAK_FUNC(sub_8368BE28);
PPC_FUNC_IMPL(__imp__sub_8368BE28) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31844
	ctx.r11.s64 = -2086928384;
	// addi r3,r11,17000
	ctx.r3.s64 = ctx.r11.s64 + 17000;
	// b 0x82e01bf0
	sub_82E01BF0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8368BE34"))) PPC_WEAK_FUNC(sub_8368BE34);
PPC_FUNC_IMPL(__imp__sub_8368BE34) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8368BE38"))) PPC_WEAK_FUNC(sub_8368BE38);
PPC_FUNC_IMPL(__imp__sub_8368BE38) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31844
	ctx.r11.s64 = -2086928384;
	// addi r11,r11,17424
	ctx.r11.s64 = ctx.r11.s64 + 17424;
	// lwz r3,4(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// b 0x82480108
	sub_82480108(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8368BE50"))) PPC_WEAK_FUNC(sub_8368BE50);
PPC_FUNC_IMPL(__imp__sub_8368BE50) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8368BE54"))) PPC_WEAK_FUNC(sub_8368BE54);
PPC_FUNC_IMPL(__imp__sub_8368BE54) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8368BE58"))) PPC_WEAK_FUNC(sub_8368BE58);
PPC_FUNC_IMPL(__imp__sub_8368BE58) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31844
	ctx.r11.s64 = -2086928384;
	// addi r11,r11,17432
	ctx.r11.s64 = ctx.r11.s64 + 17432;
	// lwz r3,4(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// b 0x82480108
	sub_82480108(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8368BE70"))) PPC_WEAK_FUNC(sub_8368BE70);
PPC_FUNC_IMPL(__imp__sub_8368BE70) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8368BE74"))) PPC_WEAK_FUNC(sub_8368BE74);
PPC_FUNC_IMPL(__imp__sub_8368BE74) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8368BE78"))) PPC_WEAK_FUNC(sub_8368BE78);
PPC_FUNC_IMPL(__imp__sub_8368BE78) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31844
	ctx.r11.s64 = -2086928384;
	// addi r11,r11,17440
	ctx.r11.s64 = ctx.r11.s64 + 17440;
	// lwz r3,4(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// b 0x82480108
	sub_82480108(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8368BE90"))) PPC_WEAK_FUNC(sub_8368BE90);
PPC_FUNC_IMPL(__imp__sub_8368BE90) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8368BE94"))) PPC_WEAK_FUNC(sub_8368BE94);
PPC_FUNC_IMPL(__imp__sub_8368BE94) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8368BE98"))) PPC_WEAK_FUNC(sub_8368BE98);
PPC_FUNC_IMPL(__imp__sub_8368BE98) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31844
	ctx.r11.s64 = -2086928384;
	// addi r11,r11,17448
	ctx.r11.s64 = ctx.r11.s64 + 17448;
	// lwz r3,4(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// b 0x82480108
	sub_82480108(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8368BEB0"))) PPC_WEAK_FUNC(sub_8368BEB0);
PPC_FUNC_IMPL(__imp__sub_8368BEB0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8368BEB4"))) PPC_WEAK_FUNC(sub_8368BEB4);
PPC_FUNC_IMPL(__imp__sub_8368BEB4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8368BEB8"))) PPC_WEAK_FUNC(sub_8368BEB8);
PPC_FUNC_IMPL(__imp__sub_8368BEB8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31844
	ctx.r11.s64 = -2086928384;
	// addi r11,r11,17456
	ctx.r11.s64 = ctx.r11.s64 + 17456;
	// lwz r3,4(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// b 0x82480108
	sub_82480108(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8368BED0"))) PPC_WEAK_FUNC(sub_8368BED0);
PPC_FUNC_IMPL(__imp__sub_8368BED0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8368BED4"))) PPC_WEAK_FUNC(sub_8368BED4);
PPC_FUNC_IMPL(__imp__sub_8368BED4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8368BED8"))) PPC_WEAK_FUNC(sub_8368BED8);
PPC_FUNC_IMPL(__imp__sub_8368BED8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31844
	ctx.r11.s64 = -2086928384;
	// addi r11,r11,17464
	ctx.r11.s64 = ctx.r11.s64 + 17464;
	// lwz r3,4(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// b 0x82480108
	sub_82480108(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8368BEF0"))) PPC_WEAK_FUNC(sub_8368BEF0);
PPC_FUNC_IMPL(__imp__sub_8368BEF0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8368BEF4"))) PPC_WEAK_FUNC(sub_8368BEF4);
PPC_FUNC_IMPL(__imp__sub_8368BEF4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8368BEF8"))) PPC_WEAK_FUNC(sub_8368BEF8);
PPC_FUNC_IMPL(__imp__sub_8368BEF8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31844
	ctx.r11.s64 = -2086928384;
	// addi r11,r11,17472
	ctx.r11.s64 = ctx.r11.s64 + 17472;
	// lwz r3,4(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// b 0x82480108
	sub_82480108(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8368BF10"))) PPC_WEAK_FUNC(sub_8368BF10);
PPC_FUNC_IMPL(__imp__sub_8368BF10) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8368BF14"))) PPC_WEAK_FUNC(sub_8368BF14);
PPC_FUNC_IMPL(__imp__sub_8368BF14) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8368BF18"))) PPC_WEAK_FUNC(sub_8368BF18);
PPC_FUNC_IMPL(__imp__sub_8368BF18) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31844
	ctx.r11.s64 = -2086928384;
	// addi r11,r11,17480
	ctx.r11.s64 = ctx.r11.s64 + 17480;
	// lwz r3,4(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// b 0x82480108
	sub_82480108(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8368BF30"))) PPC_WEAK_FUNC(sub_8368BF30);
PPC_FUNC_IMPL(__imp__sub_8368BF30) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8368BF34"))) PPC_WEAK_FUNC(sub_8368BF34);
PPC_FUNC_IMPL(__imp__sub_8368BF34) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8368BF38"))) PPC_WEAK_FUNC(sub_8368BF38);
PPC_FUNC_IMPL(__imp__sub_8368BF38) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31844
	ctx.r11.s64 = -2086928384;
	// addi r11,r11,17488
	ctx.r11.s64 = ctx.r11.s64 + 17488;
	// lwz r3,4(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// b 0x82480108
	sub_82480108(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8368BF50"))) PPC_WEAK_FUNC(sub_8368BF50);
PPC_FUNC_IMPL(__imp__sub_8368BF50) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8368BF54"))) PPC_WEAK_FUNC(sub_8368BF54);
PPC_FUNC_IMPL(__imp__sub_8368BF54) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8368BF58"))) PPC_WEAK_FUNC(sub_8368BF58);
PPC_FUNC_IMPL(__imp__sub_8368BF58) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31844
	ctx.r11.s64 = -2086928384;
	// addi r11,r11,17416
	ctx.r11.s64 = ctx.r11.s64 + 17416;
	// lwz r3,4(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// b 0x82480108
	sub_82480108(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8368BF70"))) PPC_WEAK_FUNC(sub_8368BF70);
PPC_FUNC_IMPL(__imp__sub_8368BF70) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8368BF74"))) PPC_WEAK_FUNC(sub_8368BF74);
PPC_FUNC_IMPL(__imp__sub_8368BF74) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8368BF78"))) PPC_WEAK_FUNC(sub_8368BF78);
PPC_FUNC_IMPL(__imp__sub_8368BF78) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31844
	ctx.r11.s64 = -2086928384;
	// addi r3,r11,17500
	ctx.r3.s64 = ctx.r11.s64 + 17500;
	// b 0x82e01bf0
	sub_82E01BF0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8368BF84"))) PPC_WEAK_FUNC(sub_8368BF84);
PPC_FUNC_IMPL(__imp__sub_8368BF84) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8368BF88"))) PPC_WEAK_FUNC(sub_8368BF88);
PPC_FUNC_IMPL(__imp__sub_8368BF88) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31844
	ctx.r11.s64 = -2086928384;
	// addi r3,r11,17504
	ctx.r3.s64 = ctx.r11.s64 + 17504;
	// b 0x82e01bf0
	sub_82E01BF0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8368BF94"))) PPC_WEAK_FUNC(sub_8368BF94);
PPC_FUNC_IMPL(__imp__sub_8368BF94) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8368BF98"))) PPC_WEAK_FUNC(sub_8368BF98);
PPC_FUNC_IMPL(__imp__sub_8368BF98) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31844
	ctx.r11.s64 = -2086928384;
	// addi r3,r11,17508
	ctx.r3.s64 = ctx.r11.s64 + 17508;
	// b 0x82e01bf0
	sub_82E01BF0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8368BFA4"))) PPC_WEAK_FUNC(sub_8368BFA4);
PPC_FUNC_IMPL(__imp__sub_8368BFA4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8368BFA8"))) PPC_WEAK_FUNC(sub_8368BFA8);
PPC_FUNC_IMPL(__imp__sub_8368BFA8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31844
	ctx.r11.s64 = -2086928384;
	// addi r3,r11,17512
	ctx.r3.s64 = ctx.r11.s64 + 17512;
	// b 0x82e01bf0
	sub_82E01BF0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8368BFB4"))) PPC_WEAK_FUNC(sub_8368BFB4);
PPC_FUNC_IMPL(__imp__sub_8368BFB4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8368BFB8"))) PPC_WEAK_FUNC(sub_8368BFB8);
PPC_FUNC_IMPL(__imp__sub_8368BFB8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31844
	ctx.r11.s64 = -2086928384;
	// addi r3,r11,17516
	ctx.r3.s64 = ctx.r11.s64 + 17516;
	// b 0x82e01bf0
	sub_82E01BF0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8368BFC4"))) PPC_WEAK_FUNC(sub_8368BFC4);
PPC_FUNC_IMPL(__imp__sub_8368BFC4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8368BFC8"))) PPC_WEAK_FUNC(sub_8368BFC8);
PPC_FUNC_IMPL(__imp__sub_8368BFC8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31844
	ctx.r11.s64 = -2086928384;
	// addi r3,r11,17520
	ctx.r3.s64 = ctx.r11.s64 + 17520;
	// b 0x82e01bf0
	sub_82E01BF0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8368BFD4"))) PPC_WEAK_FUNC(sub_8368BFD4);
PPC_FUNC_IMPL(__imp__sub_8368BFD4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8368BFD8"))) PPC_WEAK_FUNC(sub_8368BFD8);
PPC_FUNC_IMPL(__imp__sub_8368BFD8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31844
	ctx.r11.s64 = -2086928384;
	// addi r3,r11,17524
	ctx.r3.s64 = ctx.r11.s64 + 17524;
	// b 0x82e01bf0
	sub_82E01BF0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8368BFE4"))) PPC_WEAK_FUNC(sub_8368BFE4);
PPC_FUNC_IMPL(__imp__sub_8368BFE4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8368BFE8"))) PPC_WEAK_FUNC(sub_8368BFE8);
PPC_FUNC_IMPL(__imp__sub_8368BFE8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31844
	ctx.r11.s64 = -2086928384;
	// addi r3,r11,17528
	ctx.r3.s64 = ctx.r11.s64 + 17528;
	// b 0x82e01bf0
	sub_82E01BF0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8368BFF4"))) PPC_WEAK_FUNC(sub_8368BFF4);
PPC_FUNC_IMPL(__imp__sub_8368BFF4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8368BFF8"))) PPC_WEAK_FUNC(sub_8368BFF8);
PPC_FUNC_IMPL(__imp__sub_8368BFF8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31844
	ctx.r11.s64 = -2086928384;
	// addi r3,r11,17532
	ctx.r3.s64 = ctx.r11.s64 + 17532;
	// b 0x82e01bf0
	sub_82E01BF0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8368C004"))) PPC_WEAK_FUNC(sub_8368C004);
PPC_FUNC_IMPL(__imp__sub_8368C004) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8368C008"))) PPC_WEAK_FUNC(sub_8368C008);
PPC_FUNC_IMPL(__imp__sub_8368C008) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31844
	ctx.r11.s64 = -2086928384;
	// addi r3,r11,17536
	ctx.r3.s64 = ctx.r11.s64 + 17536;
	// b 0x82e01bf0
	sub_82E01BF0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8368C014"))) PPC_WEAK_FUNC(sub_8368C014);
PPC_FUNC_IMPL(__imp__sub_8368C014) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8368C018"))) PPC_WEAK_FUNC(sub_8368C018);
PPC_FUNC_IMPL(__imp__sub_8368C018) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31844
	ctx.r11.s64 = -2086928384;
	// addi r3,r11,17540
	ctx.r3.s64 = ctx.r11.s64 + 17540;
	// b 0x82e01bf0
	sub_82E01BF0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8368C024"))) PPC_WEAK_FUNC(sub_8368C024);
PPC_FUNC_IMPL(__imp__sub_8368C024) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8368C028"))) PPC_WEAK_FUNC(sub_8368C028);
PPC_FUNC_IMPL(__imp__sub_8368C028) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31844
	ctx.r11.s64 = -2086928384;
	// addi r3,r11,17544
	ctx.r3.s64 = ctx.r11.s64 + 17544;
	// b 0x82e01bf0
	sub_82E01BF0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8368C034"))) PPC_WEAK_FUNC(sub_8368C034);
PPC_FUNC_IMPL(__imp__sub_8368C034) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8368C038"))) PPC_WEAK_FUNC(sub_8368C038);
PPC_FUNC_IMPL(__imp__sub_8368C038) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31844
	ctx.r11.s64 = -2086928384;
	// addi r3,r11,17548
	ctx.r3.s64 = ctx.r11.s64 + 17548;
	// b 0x82e01bf0
	sub_82E01BF0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8368C044"))) PPC_WEAK_FUNC(sub_8368C044);
PPC_FUNC_IMPL(__imp__sub_8368C044) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8368C048"))) PPC_WEAK_FUNC(sub_8368C048);
PPC_FUNC_IMPL(__imp__sub_8368C048) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31844
	ctx.r11.s64 = -2086928384;
	// addi r3,r11,17552
	ctx.r3.s64 = ctx.r11.s64 + 17552;
	// b 0x82e01bf0
	sub_82E01BF0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8368C054"))) PPC_WEAK_FUNC(sub_8368C054);
PPC_FUNC_IMPL(__imp__sub_8368C054) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8368C058"))) PPC_WEAK_FUNC(sub_8368C058);
PPC_FUNC_IMPL(__imp__sub_8368C058) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31844
	ctx.r11.s64 = -2086928384;
	// addi r3,r11,17556
	ctx.r3.s64 = ctx.r11.s64 + 17556;
	// b 0x82e01bf0
	sub_82E01BF0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8368C064"))) PPC_WEAK_FUNC(sub_8368C064);
PPC_FUNC_IMPL(__imp__sub_8368C064) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8368C068"))) PPC_WEAK_FUNC(sub_8368C068);
PPC_FUNC_IMPL(__imp__sub_8368C068) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31844
	ctx.r11.s64 = -2086928384;
	// addi r3,r11,17560
	ctx.r3.s64 = ctx.r11.s64 + 17560;
	// b 0x82e01bf0
	sub_82E01BF0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8368C074"))) PPC_WEAK_FUNC(sub_8368C074);
PPC_FUNC_IMPL(__imp__sub_8368C074) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8368C078"))) PPC_WEAK_FUNC(sub_8368C078);
PPC_FUNC_IMPL(__imp__sub_8368C078) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31844
	ctx.r11.s64 = -2086928384;
	// addi r3,r11,17564
	ctx.r3.s64 = ctx.r11.s64 + 17564;
	// b 0x82e01bf0
	sub_82E01BF0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8368C084"))) PPC_WEAK_FUNC(sub_8368C084);
PPC_FUNC_IMPL(__imp__sub_8368C084) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8368C088"))) PPC_WEAK_FUNC(sub_8368C088);
PPC_FUNC_IMPL(__imp__sub_8368C088) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31844
	ctx.r11.s64 = -2086928384;
	// addi r3,r11,17568
	ctx.r3.s64 = ctx.r11.s64 + 17568;
	// b 0x82e01bf0
	sub_82E01BF0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8368C094"))) PPC_WEAK_FUNC(sub_8368C094);
PPC_FUNC_IMPL(__imp__sub_8368C094) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8368C098"))) PPC_WEAK_FUNC(sub_8368C098);
PPC_FUNC_IMPL(__imp__sub_8368C098) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31844
	ctx.r11.s64 = -2086928384;
	// addi r3,r11,17572
	ctx.r3.s64 = ctx.r11.s64 + 17572;
	// b 0x82e01bf0
	sub_82E01BF0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8368C0A4"))) PPC_WEAK_FUNC(sub_8368C0A4);
PPC_FUNC_IMPL(__imp__sub_8368C0A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8368C0A8"))) PPC_WEAK_FUNC(sub_8368C0A8);
PPC_FUNC_IMPL(__imp__sub_8368C0A8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31844
	ctx.r11.s64 = -2086928384;
	// addi r3,r11,17576
	ctx.r3.s64 = ctx.r11.s64 + 17576;
	// b 0x82e01bf0
	sub_82E01BF0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8368C0B4"))) PPC_WEAK_FUNC(sub_8368C0B4);
PPC_FUNC_IMPL(__imp__sub_8368C0B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8368C0B8"))) PPC_WEAK_FUNC(sub_8368C0B8);
PPC_FUNC_IMPL(__imp__sub_8368C0B8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31844
	ctx.r11.s64 = -2086928384;
	// addi r3,r11,17580
	ctx.r3.s64 = ctx.r11.s64 + 17580;
	// b 0x82e01bf0
	sub_82E01BF0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8368C0C4"))) PPC_WEAK_FUNC(sub_8368C0C4);
PPC_FUNC_IMPL(__imp__sub_8368C0C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8368C0C8"))) PPC_WEAK_FUNC(sub_8368C0C8);
PPC_FUNC_IMPL(__imp__sub_8368C0C8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31844
	ctx.r11.s64 = -2086928384;
	// addi r3,r11,17584
	ctx.r3.s64 = ctx.r11.s64 + 17584;
	// b 0x82e01bf0
	sub_82E01BF0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8368C0D4"))) PPC_WEAK_FUNC(sub_8368C0D4);
PPC_FUNC_IMPL(__imp__sub_8368C0D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8368C0D8"))) PPC_WEAK_FUNC(sub_8368C0D8);
PPC_FUNC_IMPL(__imp__sub_8368C0D8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31844
	ctx.r11.s64 = -2086928384;
	// addi r3,r11,17588
	ctx.r3.s64 = ctx.r11.s64 + 17588;
	// b 0x82e01bf0
	sub_82E01BF0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8368C0E4"))) PPC_WEAK_FUNC(sub_8368C0E4);
PPC_FUNC_IMPL(__imp__sub_8368C0E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8368C0E8"))) PPC_WEAK_FUNC(sub_8368C0E8);
PPC_FUNC_IMPL(__imp__sub_8368C0E8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31844
	ctx.r11.s64 = -2086928384;
	// addi r3,r11,17592
	ctx.r3.s64 = ctx.r11.s64 + 17592;
	// b 0x82e01bf0
	sub_82E01BF0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8368C0F4"))) PPC_WEAK_FUNC(sub_8368C0F4);
PPC_FUNC_IMPL(__imp__sub_8368C0F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8368C0F8"))) PPC_WEAK_FUNC(sub_8368C0F8);
PPC_FUNC_IMPL(__imp__sub_8368C0F8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31844
	ctx.r11.s64 = -2086928384;
	// addi r3,r11,17596
	ctx.r3.s64 = ctx.r11.s64 + 17596;
	// b 0x82e01bf0
	sub_82E01BF0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8368C104"))) PPC_WEAK_FUNC(sub_8368C104);
PPC_FUNC_IMPL(__imp__sub_8368C104) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8368C108"))) PPC_WEAK_FUNC(sub_8368C108);
PPC_FUNC_IMPL(__imp__sub_8368C108) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31844
	ctx.r11.s64 = -2086928384;
	// addi r3,r11,17600
	ctx.r3.s64 = ctx.r11.s64 + 17600;
	// b 0x82e01bf0
	sub_82E01BF0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8368C114"))) PPC_WEAK_FUNC(sub_8368C114);
PPC_FUNC_IMPL(__imp__sub_8368C114) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8368C118"))) PPC_WEAK_FUNC(sub_8368C118);
PPC_FUNC_IMPL(__imp__sub_8368C118) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31844
	ctx.r11.s64 = -2086928384;
	// addi r3,r11,17604
	ctx.r3.s64 = ctx.r11.s64 + 17604;
	// b 0x82e01bf0
	sub_82E01BF0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8368C124"))) PPC_WEAK_FUNC(sub_8368C124);
PPC_FUNC_IMPL(__imp__sub_8368C124) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8368C128"))) PPC_WEAK_FUNC(sub_8368C128);
PPC_FUNC_IMPL(__imp__sub_8368C128) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31844
	ctx.r11.s64 = -2086928384;
	// addi r3,r11,17608
	ctx.r3.s64 = ctx.r11.s64 + 17608;
	// b 0x82e01bf0
	sub_82E01BF0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8368C134"))) PPC_WEAK_FUNC(sub_8368C134);
PPC_FUNC_IMPL(__imp__sub_8368C134) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8368C138"))) PPC_WEAK_FUNC(sub_8368C138);
PPC_FUNC_IMPL(__imp__sub_8368C138) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31844
	ctx.r11.s64 = -2086928384;
	// addi r3,r11,17612
	ctx.r3.s64 = ctx.r11.s64 + 17612;
	// b 0x82e01bf0
	sub_82E01BF0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8368C144"))) PPC_WEAK_FUNC(sub_8368C144);
PPC_FUNC_IMPL(__imp__sub_8368C144) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8368C148"))) PPC_WEAK_FUNC(sub_8368C148);
PPC_FUNC_IMPL(__imp__sub_8368C148) {
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
	// lis r11,-31844
	ctx.r11.s64 = -2086928384;
	// li r30,3
	ctx.r30.s64 = 3;
	// addi r11,r11,17640
	ctx.r11.s64 = ctx.r11.s64 + 17640;
	// addi r31,r11,16
	ctx.r31.s64 = ctx.r11.s64 + 16;
loc_8368C16C:
	// addi r31,r31,-4
	ctx.r31.s64 = ctx.r31.s64 + -4;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82e01bf0
	ctx.lr = 0x8368C178;
	sub_82E01BF0(ctx, base);
	// addic. r30,r30,-1
	ctx.xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// bge 0x8368c16c
	if (!ctx.cr0.lt) goto loc_8368C16C;
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

__attribute__((alias("__imp__sub_8368C198"))) PPC_WEAK_FUNC(sub_8368C198);
PPC_FUNC_IMPL(__imp__sub_8368C198) {
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
	// lis r11,-31844
	ctx.r11.s64 = -2086928384;
	// li r30,11
	ctx.r30.s64 = 11;
	// addi r11,r11,17660
	ctx.r11.s64 = ctx.r11.s64 + 17660;
	// addi r31,r11,48
	ctx.r31.s64 = ctx.r11.s64 + 48;
loc_8368C1BC:
	// addi r31,r31,-4
	ctx.r31.s64 = ctx.r31.s64 + -4;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82e01bf0
	ctx.lr = 0x8368C1C8;
	sub_82E01BF0(ctx, base);
	// addic. r30,r30,-1
	ctx.xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// bge 0x8368c1bc
	if (!ctx.cr0.lt) goto loc_8368C1BC;
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

__attribute__((alias("__imp__sub_8368C1E8"))) PPC_WEAK_FUNC(sub_8368C1E8);
PPC_FUNC_IMPL(__imp__sub_8368C1E8) {
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
	// lis r11,-31844
	ctx.r11.s64 = -2086928384;
	// li r30,11
	ctx.r30.s64 = 11;
	// addi r11,r11,17708
	ctx.r11.s64 = ctx.r11.s64 + 17708;
	// addi r31,r11,48
	ctx.r31.s64 = ctx.r11.s64 + 48;
loc_8368C20C:
	// addi r31,r31,-4
	ctx.r31.s64 = ctx.r31.s64 + -4;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82e01bf0
	ctx.lr = 0x8368C218;
	sub_82E01BF0(ctx, base);
	// addic. r30,r30,-1
	ctx.xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// bge 0x8368c20c
	if (!ctx.cr0.lt) goto loc_8368C20C;
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

__attribute__((alias("__imp__sub_8368C238"))) PPC_WEAK_FUNC(sub_8368C238);
PPC_FUNC_IMPL(__imp__sub_8368C238) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31844
	ctx.r11.s64 = -2086928384;
	// addi r3,r11,17796
	ctx.r3.s64 = ctx.r11.s64 + 17796;
	// b 0x82e01bf0
	sub_82E01BF0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8368C244"))) PPC_WEAK_FUNC(sub_8368C244);
PPC_FUNC_IMPL(__imp__sub_8368C244) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8368C248"))) PPC_WEAK_FUNC(sub_8368C248);
PPC_FUNC_IMPL(__imp__sub_8368C248) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31844
	ctx.r11.s64 = -2086928384;
	// addi r3,r11,17800
	ctx.r3.s64 = ctx.r11.s64 + 17800;
	// b 0x82e01bf0
	sub_82E01BF0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8368C254"))) PPC_WEAK_FUNC(sub_8368C254);
PPC_FUNC_IMPL(__imp__sub_8368C254) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8368C258"))) PPC_WEAK_FUNC(sub_8368C258);
PPC_FUNC_IMPL(__imp__sub_8368C258) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31844
	ctx.r11.s64 = -2086928384;
	// addi r3,r11,17804
	ctx.r3.s64 = ctx.r11.s64 + 17804;
	// b 0x82e01bf0
	sub_82E01BF0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8368C264"))) PPC_WEAK_FUNC(sub_8368C264);
PPC_FUNC_IMPL(__imp__sub_8368C264) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8368C268"))) PPC_WEAK_FUNC(sub_8368C268);
PPC_FUNC_IMPL(__imp__sub_8368C268) {
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
	// lis r11,-31844
	ctx.r11.s64 = -2086928384;
	// li r30,4
	ctx.r30.s64 = 4;
	// addi r11,r11,17856
	ctx.r11.s64 = ctx.r11.s64 + 17856;
	// addi r31,r11,20
	ctx.r31.s64 = ctx.r11.s64 + 20;
loc_8368C28C:
	// addi r31,r31,-4
	ctx.r31.s64 = ctx.r31.s64 + -4;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82e01bf0
	ctx.lr = 0x8368C298;
	sub_82E01BF0(ctx, base);
	// addic. r30,r30,-1
	ctx.xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// bge 0x8368c28c
	if (!ctx.cr0.lt) goto loc_8368C28C;
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

__attribute__((alias("__imp__sub_8368C2B8"))) PPC_WEAK_FUNC(sub_8368C2B8);
PPC_FUNC_IMPL(__imp__sub_8368C2B8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31844
	ctx.r11.s64 = -2086928384;
	// addi r11,r11,18008
	ctx.r11.s64 = ctx.r11.s64 + 18008;
	// lwz r3,4(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// b 0x82480108
	sub_82480108(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8368C2D0"))) PPC_WEAK_FUNC(sub_8368C2D0);
PPC_FUNC_IMPL(__imp__sub_8368C2D0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8368C2D4"))) PPC_WEAK_FUNC(sub_8368C2D4);
PPC_FUNC_IMPL(__imp__sub_8368C2D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8368C2D8"))) PPC_WEAK_FUNC(sub_8368C2D8);
PPC_FUNC_IMPL(__imp__sub_8368C2D8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31844
	ctx.r11.s64 = -2086928384;
	// addi r11,r11,18016
	ctx.r11.s64 = ctx.r11.s64 + 18016;
	// lwz r3,4(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// b 0x82480108
	sub_82480108(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8368C2F0"))) PPC_WEAK_FUNC(sub_8368C2F0);
PPC_FUNC_IMPL(__imp__sub_8368C2F0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8368C2F4"))) PPC_WEAK_FUNC(sub_8368C2F4);
PPC_FUNC_IMPL(__imp__sub_8368C2F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8368C2F8"))) PPC_WEAK_FUNC(sub_8368C2F8);
PPC_FUNC_IMPL(__imp__sub_8368C2F8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31844
	ctx.r11.s64 = -2086928384;
	// addi r11,r11,18024
	ctx.r11.s64 = ctx.r11.s64 + 18024;
	// lwz r3,4(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// b 0x82480108
	sub_82480108(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8368C310"))) PPC_WEAK_FUNC(sub_8368C310);
PPC_FUNC_IMPL(__imp__sub_8368C310) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8368C314"))) PPC_WEAK_FUNC(sub_8368C314);
PPC_FUNC_IMPL(__imp__sub_8368C314) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8368C318"))) PPC_WEAK_FUNC(sub_8368C318);
PPC_FUNC_IMPL(__imp__sub_8368C318) {
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
	// lis r11,-31844
	ctx.r11.s64 = -2086928384;
	// li r30,3
	ctx.r30.s64 = 3;
	// addi r11,r11,18032
	ctx.r11.s64 = ctx.r11.s64 + 18032;
	// addi r31,r11,36
	ctx.r31.s64 = ctx.r11.s64 + 36;
loc_8368C33C:
	// lwzu r3,-8(r31)
	ea = -8 + ctx.r31.u32;
	ctx.r3.u64 = PPC_LOAD_U32(ea);
	ctx.r31.u32 = ea;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8368c34c
	if (ctx.cr6.eq) goto loc_8368C34C;
	// bl 0x82480108
	ctx.lr = 0x8368C34C;
	sub_82480108(ctx, base);
loc_8368C34C:
	// addic. r30,r30,-1
	ctx.xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// bge 0x8368c33c
	if (!ctx.cr0.lt) goto loc_8368C33C;
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

__attribute__((alias("__imp__sub_8368C36C"))) PPC_WEAK_FUNC(sub_8368C36C);
PPC_FUNC_IMPL(__imp__sub_8368C36C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8368C370"))) PPC_WEAK_FUNC(sub_8368C370);
PPC_FUNC_IMPL(__imp__sub_8368C370) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31844
	ctx.r11.s64 = -2086928384;
	// addi r11,r11,18000
	ctx.r11.s64 = ctx.r11.s64 + 18000;
	// lwz r3,4(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// b 0x82480108
	sub_82480108(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8368C388"))) PPC_WEAK_FUNC(sub_8368C388);
PPC_FUNC_IMPL(__imp__sub_8368C388) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8368C38C"))) PPC_WEAK_FUNC(sub_8368C38C);
PPC_FUNC_IMPL(__imp__sub_8368C38C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8368C390"))) PPC_WEAK_FUNC(sub_8368C390);
PPC_FUNC_IMPL(__imp__sub_8368C390) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31844
	ctx.r11.s64 = -2086928384;
	// addi r3,r11,18280
	ctx.r3.s64 = ctx.r11.s64 + 18280;
	// b 0x82e01bf0
	sub_82E01BF0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8368C39C"))) PPC_WEAK_FUNC(sub_8368C39C);
PPC_FUNC_IMPL(__imp__sub_8368C39C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8368C3A0"))) PPC_WEAK_FUNC(sub_8368C3A0);
PPC_FUNC_IMPL(__imp__sub_8368C3A0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31844
	ctx.r11.s64 = -2086928384;
	// addi r3,r11,18284
	ctx.r3.s64 = ctx.r11.s64 + 18284;
	// b 0x82e01bf0
	sub_82E01BF0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8368C3AC"))) PPC_WEAK_FUNC(sub_8368C3AC);
PPC_FUNC_IMPL(__imp__sub_8368C3AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8368C3B0"))) PPC_WEAK_FUNC(sub_8368C3B0);
PPC_FUNC_IMPL(__imp__sub_8368C3B0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31844
	ctx.r11.s64 = -2086928384;
	// addi r3,r11,18288
	ctx.r3.s64 = ctx.r11.s64 + 18288;
	// b 0x82e01bf0
	sub_82E01BF0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8368C3BC"))) PPC_WEAK_FUNC(sub_8368C3BC);
PPC_FUNC_IMPL(__imp__sub_8368C3BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8368C3C0"))) PPC_WEAK_FUNC(sub_8368C3C0);
PPC_FUNC_IMPL(__imp__sub_8368C3C0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31844
	ctx.r11.s64 = -2086928384;
	// addi r3,r11,18292
	ctx.r3.s64 = ctx.r11.s64 + 18292;
	// b 0x82e01bf0
	sub_82E01BF0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8368C3CC"))) PPC_WEAK_FUNC(sub_8368C3CC);
PPC_FUNC_IMPL(__imp__sub_8368C3CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8368C3D0"))) PPC_WEAK_FUNC(sub_8368C3D0);
PPC_FUNC_IMPL(__imp__sub_8368C3D0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31844
	ctx.r11.s64 = -2086928384;
	// addi r3,r11,18296
	ctx.r3.s64 = ctx.r11.s64 + 18296;
	// b 0x82e01bf0
	sub_82E01BF0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8368C3DC"))) PPC_WEAK_FUNC(sub_8368C3DC);
PPC_FUNC_IMPL(__imp__sub_8368C3DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8368C3E0"))) PPC_WEAK_FUNC(sub_8368C3E0);
PPC_FUNC_IMPL(__imp__sub_8368C3E0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31844
	ctx.r11.s64 = -2086928384;
	// addi r3,r11,18300
	ctx.r3.s64 = ctx.r11.s64 + 18300;
	// b 0x82e01bf0
	sub_82E01BF0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8368C3EC"))) PPC_WEAK_FUNC(sub_8368C3EC);
PPC_FUNC_IMPL(__imp__sub_8368C3EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8368C3F0"))) PPC_WEAK_FUNC(sub_8368C3F0);
PPC_FUNC_IMPL(__imp__sub_8368C3F0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31844
	ctx.r11.s64 = -2086928384;
	// addi r3,r11,18304
	ctx.r3.s64 = ctx.r11.s64 + 18304;
	// b 0x82e01bf0
	sub_82E01BF0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8368C3FC"))) PPC_WEAK_FUNC(sub_8368C3FC);
PPC_FUNC_IMPL(__imp__sub_8368C3FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8368C400"))) PPC_WEAK_FUNC(sub_8368C400);
PPC_FUNC_IMPL(__imp__sub_8368C400) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31844
	ctx.r11.s64 = -2086928384;
	// addi r3,r11,18308
	ctx.r3.s64 = ctx.r11.s64 + 18308;
	// b 0x82e01bf0
	sub_82E01BF0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8368C40C"))) PPC_WEAK_FUNC(sub_8368C40C);
PPC_FUNC_IMPL(__imp__sub_8368C40C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8368C410"))) PPC_WEAK_FUNC(sub_8368C410);
PPC_FUNC_IMPL(__imp__sub_8368C410) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31844
	ctx.r11.s64 = -2086928384;
	// addi r3,r11,18312
	ctx.r3.s64 = ctx.r11.s64 + 18312;
	// b 0x82e01bf0
	sub_82E01BF0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8368C41C"))) PPC_WEAK_FUNC(sub_8368C41C);
PPC_FUNC_IMPL(__imp__sub_8368C41C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8368C420"))) PPC_WEAK_FUNC(sub_8368C420);
PPC_FUNC_IMPL(__imp__sub_8368C420) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31844
	ctx.r11.s64 = -2086928384;
	// addi r3,r11,18316
	ctx.r3.s64 = ctx.r11.s64 + 18316;
	// b 0x82e01bf0
	sub_82E01BF0(ctx, base);
	return;
}

