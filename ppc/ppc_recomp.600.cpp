#include "ppc_recomp_shared.h"

__attribute__((alias("__imp__sub_8368D930"))) PPC_WEAK_FUNC(sub_8368D930);
PPC_FUNC_IMPL(__imp__sub_8368D930) {
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
	// lis r11,-31843
	ctx.r11.s64 = -2086862848;
	// li r30,1
	ctx.r30.s64 = 1;
	// addi r11,r11,-18844
	ctx.r11.s64 = ctx.r11.s64 + -18844;
	// addi r31,r11,16
	ctx.r31.s64 = ctx.r11.s64 + 16;
loc_8368D954:
	// addi r31,r31,-8
	ctx.r31.s64 = ctx.r31.s64 + -8;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82e01bf0
	ctx.lr = 0x8368D960;
	sub_82E01BF0(ctx, base);
	// addic. r30,r30,-1
	ctx.xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// bge 0x8368d954
	if (!ctx.cr0.lt) goto loc_8368D954;
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

__attribute__((alias("__imp__sub_8368D980"))) PPC_WEAK_FUNC(sub_8368D980);
PPC_FUNC_IMPL(__imp__sub_8368D980) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31843
	ctx.r11.s64 = -2086862848;
	// addi r3,r11,-18604
	ctx.r3.s64 = ctx.r11.s64 + -18604;
	// b 0x82e01bf0
	sub_82E01BF0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8368D98C"))) PPC_WEAK_FUNC(sub_8368D98C);
PPC_FUNC_IMPL(__imp__sub_8368D98C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8368D990"))) PPC_WEAK_FUNC(sub_8368D990);
PPC_FUNC_IMPL(__imp__sub_8368D990) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31843
	ctx.r11.s64 = -2086862848;
	// addi r3,r11,-18600
	ctx.r3.s64 = ctx.r11.s64 + -18600;
	// b 0x82e01bf0
	sub_82E01BF0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8368D99C"))) PPC_WEAK_FUNC(sub_8368D99C);
PPC_FUNC_IMPL(__imp__sub_8368D99C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8368D9A0"))) PPC_WEAK_FUNC(sub_8368D9A0);
PPC_FUNC_IMPL(__imp__sub_8368D9A0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31843
	ctx.r11.s64 = -2086862848;
	// addi r3,r11,-18596
	ctx.r3.s64 = ctx.r11.s64 + -18596;
	// b 0x82e01bf0
	sub_82E01BF0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8368D9AC"))) PPC_WEAK_FUNC(sub_8368D9AC);
PPC_FUNC_IMPL(__imp__sub_8368D9AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8368D9B0"))) PPC_WEAK_FUNC(sub_8368D9B0);
PPC_FUNC_IMPL(__imp__sub_8368D9B0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31843
	ctx.r11.s64 = -2086862848;
	// addi r3,r11,-18592
	ctx.r3.s64 = ctx.r11.s64 + -18592;
	// b 0x82e01bf0
	sub_82E01BF0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8368D9BC"))) PPC_WEAK_FUNC(sub_8368D9BC);
PPC_FUNC_IMPL(__imp__sub_8368D9BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8368D9C0"))) PPC_WEAK_FUNC(sub_8368D9C0);
PPC_FUNC_IMPL(__imp__sub_8368D9C0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31843
	ctx.r11.s64 = -2086862848;
	// addi r3,r11,-18588
	ctx.r3.s64 = ctx.r11.s64 + -18588;
	// b 0x82e01bf0
	sub_82E01BF0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8368D9CC"))) PPC_WEAK_FUNC(sub_8368D9CC);
PPC_FUNC_IMPL(__imp__sub_8368D9CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8368D9D0"))) PPC_WEAK_FUNC(sub_8368D9D0);
PPC_FUNC_IMPL(__imp__sub_8368D9D0) {
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
	// lis r11,-31843
	ctx.r11.s64 = -2086862848;
	// li r30,2
	ctx.r30.s64 = 2;
	// addi r11,r11,-18704
	ctx.r11.s64 = ctx.r11.s64 + -18704;
	// addi r31,r11,96
	ctx.r31.s64 = ctx.r11.s64 + 96;
loc_8368D9F4:
	// addi r31,r31,-32
	ctx.r31.s64 = ctx.r31.s64 + -32;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82839df8
	ctx.lr = 0x8368DA00;
	sub_82839DF8(ctx, base);
	// addic. r30,r30,-1
	ctx.xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// bge 0x8368d9f4
	if (!ctx.cr0.lt) goto loc_8368D9F4;
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

__attribute__((alias("__imp__sub_8368DA20"))) PPC_WEAK_FUNC(sub_8368DA20);
PPC_FUNC_IMPL(__imp__sub_8368DA20) {
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
	// lis r11,-31843
	ctx.r11.s64 = -2086862848;
	// li r30,6
	ctx.r30.s64 = 6;
	// addi r11,r11,-18448
	ctx.r11.s64 = ctx.r11.s64 + -18448;
	// addi r31,r11,308
	ctx.r31.s64 = ctx.r11.s64 + 308;
loc_8368DA44:
	// addi r31,r31,-44
	ctx.r31.s64 = ctx.r31.s64 + -44;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82b98498
	ctx.lr = 0x8368DA50;
	sub_82B98498(ctx, base);
	// addic. r30,r30,-1
	ctx.xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// bge 0x8368da44
	if (!ctx.cr0.lt) goto loc_8368DA44;
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

__attribute__((alias("__imp__sub_8368DA70"))) PPC_WEAK_FUNC(sub_8368DA70);
PPC_FUNC_IMPL(__imp__sub_8368DA70) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31843
	ctx.r11.s64 = -2086862848;
	// addi r3,r11,-18056
	ctx.r3.s64 = ctx.r11.s64 + -18056;
	// b 0x82e01bf0
	sub_82E01BF0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8368DA7C"))) PPC_WEAK_FUNC(sub_8368DA7C);
PPC_FUNC_IMPL(__imp__sub_8368DA7C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8368DA80"))) PPC_WEAK_FUNC(sub_8368DA80);
PPC_FUNC_IMPL(__imp__sub_8368DA80) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31843
	ctx.r11.s64 = -2086862848;
	// addi r3,r11,-17780
	ctx.r3.s64 = ctx.r11.s64 + -17780;
	// b 0x82e01bf0
	sub_82E01BF0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8368DA8C"))) PPC_WEAK_FUNC(sub_8368DA8C);
PPC_FUNC_IMPL(__imp__sub_8368DA8C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8368DA90"))) PPC_WEAK_FUNC(sub_8368DA90);
PPC_FUNC_IMPL(__imp__sub_8368DA90) {
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
	// lis r11,-31843
	ctx.r11.s64 = -2086862848;
	// li r30,2
	ctx.r30.s64 = 2;
	// addi r11,r11,-17756
	ctx.r11.s64 = ctx.r11.s64 + -17756;
	// addi r31,r11,36
	ctx.r31.s64 = ctx.r11.s64 + 36;
loc_8368DAB4:
	// addi r31,r31,-12
	ctx.r31.s64 = ctx.r31.s64 + -12;
	// addi r3,r31,4
	ctx.r3.s64 = ctx.r31.s64 + 4;
	// bl 0x82e01bf0
	ctx.lr = 0x8368DAC0;
	sub_82E01BF0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82e01bf0
	ctx.lr = 0x8368DAC8;
	sub_82E01BF0(ctx, base);
	// addic. r30,r30,-1
	ctx.xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// bge 0x8368dab4
	if (!ctx.cr0.lt) goto loc_8368DAB4;
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

__attribute__((alias("__imp__sub_8368DAE8"))) PPC_WEAK_FUNC(sub_8368DAE8);
PPC_FUNC_IMPL(__imp__sub_8368DAE8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31843
	ctx.r11.s64 = -2086862848;
	// addi r3,r11,-17700
	ctx.r3.s64 = ctx.r11.s64 + -17700;
	// b 0x82e01bf0
	sub_82E01BF0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8368DAF4"))) PPC_WEAK_FUNC(sub_8368DAF4);
PPC_FUNC_IMPL(__imp__sub_8368DAF4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8368DAF8"))) PPC_WEAK_FUNC(sub_8368DAF8);
PPC_FUNC_IMPL(__imp__sub_8368DAF8) {
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
	// lis r11,-31843
	ctx.r11.s64 = -2086862848;
	// li r30,1
	ctx.r30.s64 = 1;
	// addi r11,r11,-17672
	ctx.r11.s64 = ctx.r11.s64 + -17672;
	// addi r31,r11,16
	ctx.r31.s64 = ctx.r11.s64 + 16;
loc_8368DB1C:
	// addi r31,r31,-8
	ctx.r31.s64 = ctx.r31.s64 + -8;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82e01bf0
	ctx.lr = 0x8368DB28;
	sub_82E01BF0(ctx, base);
	// addic. r30,r30,-1
	ctx.xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// bge 0x8368db1c
	if (!ctx.cr0.lt) goto loc_8368DB1C;
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

__attribute__((alias("__imp__sub_8368DB48"))) PPC_WEAK_FUNC(sub_8368DB48);
PPC_FUNC_IMPL(__imp__sub_8368DB48) {
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
	// lis r11,-31843
	ctx.r11.s64 = -2086862848;
	// li r30,1
	ctx.r30.s64 = 1;
	// addi r11,r11,-17652
	ctx.r11.s64 = ctx.r11.s64 + -17652;
	// addi r31,r11,48
	ctx.r31.s64 = ctx.r11.s64 + 48;
loc_8368DB6C:
	// addi r31,r31,-24
	ctx.r31.s64 = ctx.r31.s64 + -24;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82e01bf0
	ctx.lr = 0x8368DB78;
	sub_82E01BF0(ctx, base);
	// addic. r30,r30,-1
	ctx.xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// bge 0x8368db6c
	if (!ctx.cr0.lt) goto loc_8368DB6C;
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

__attribute__((alias("__imp__sub_8368DB98"))) PPC_WEAK_FUNC(sub_8368DB98);
PPC_FUNC_IMPL(__imp__sub_8368DB98) {
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
	// lis r11,-31843
	ctx.r11.s64 = -2086862848;
	// li r30,23
	ctx.r30.s64 = 23;
	// addi r11,r11,-17328
	ctx.r11.s64 = ctx.r11.s64 + -17328;
	// addi r31,r11,292
	ctx.r31.s64 = ctx.r11.s64 + 292;
loc_8368DBBC:
	// addi r31,r31,-12
	ctx.r31.s64 = ctx.r31.s64 + -12;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82e01bf0
	ctx.lr = 0x8368DBC8;
	sub_82E01BF0(ctx, base);
	// addic. r30,r30,-1
	ctx.xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// bge 0x8368dbbc
	if (!ctx.cr0.lt) goto loc_8368DBBC;
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

__attribute__((alias("__imp__sub_8368DBE8"))) PPC_WEAK_FUNC(sub_8368DBE8);
PPC_FUNC_IMPL(__imp__sub_8368DBE8) {
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
	// lis r11,-31843
	ctx.r11.s64 = -2086862848;
	// li r30,23
	ctx.r30.s64 = 23;
	// addi r11,r11,-17040
	ctx.r11.s64 = ctx.r11.s64 + -17040;
	// addi r31,r11,292
	ctx.r31.s64 = ctx.r11.s64 + 292;
loc_8368DC0C:
	// addi r31,r31,-12
	ctx.r31.s64 = ctx.r31.s64 + -12;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82e01bf0
	ctx.lr = 0x8368DC18;
	sub_82E01BF0(ctx, base);
	// addic. r30,r30,-1
	ctx.xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// bge 0x8368dc0c
	if (!ctx.cr0.lt) goto loc_8368DC0C;
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

__attribute__((alias("__imp__sub_8368DC38"))) PPC_WEAK_FUNC(sub_8368DC38);
PPC_FUNC_IMPL(__imp__sub_8368DC38) {
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
	// lis r11,-31843
	ctx.r11.s64 = -2086862848;
	// li r30,23
	ctx.r30.s64 = 23;
	// addi r11,r11,-16752
	ctx.r11.s64 = ctx.r11.s64 + -16752;
	// addi r31,r11,292
	ctx.r31.s64 = ctx.r11.s64 + 292;
loc_8368DC5C:
	// addi r31,r31,-12
	ctx.r31.s64 = ctx.r31.s64 + -12;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82e01bf0
	ctx.lr = 0x8368DC68;
	sub_82E01BF0(ctx, base);
	// addic. r30,r30,-1
	ctx.xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// bge 0x8368dc5c
	if (!ctx.cr0.lt) goto loc_8368DC5C;
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

__attribute__((alias("__imp__sub_8368DC88"))) PPC_WEAK_FUNC(sub_8368DC88);
PPC_FUNC_IMPL(__imp__sub_8368DC88) {
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
	// lis r11,-31843
	ctx.r11.s64 = -2086862848;
	// li r30,23
	ctx.r30.s64 = 23;
	// addi r11,r11,-16464
	ctx.r11.s64 = ctx.r11.s64 + -16464;
	// addi r31,r11,292
	ctx.r31.s64 = ctx.r11.s64 + 292;
loc_8368DCAC:
	// addi r31,r31,-12
	ctx.r31.s64 = ctx.r31.s64 + -12;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82e01bf0
	ctx.lr = 0x8368DCB8;
	sub_82E01BF0(ctx, base);
	// addic. r30,r30,-1
	ctx.xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// bge 0x8368dcac
	if (!ctx.cr0.lt) goto loc_8368DCAC;
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

__attribute__((alias("__imp__sub_8368DCD8"))) PPC_WEAK_FUNC(sub_8368DCD8);
PPC_FUNC_IMPL(__imp__sub_8368DCD8) {
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
	// lis r11,-31843
	ctx.r11.s64 = -2086862848;
	// li r30,23
	ctx.r30.s64 = 23;
	// addi r11,r11,-16176
	ctx.r11.s64 = ctx.r11.s64 + -16176;
	// addi r31,r11,292
	ctx.r31.s64 = ctx.r11.s64 + 292;
loc_8368DCFC:
	// addi r31,r31,-12
	ctx.r31.s64 = ctx.r31.s64 + -12;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82e01bf0
	ctx.lr = 0x8368DD08;
	sub_82E01BF0(ctx, base);
	// addic. r30,r30,-1
	ctx.xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// bge 0x8368dcfc
	if (!ctx.cr0.lt) goto loc_8368DCFC;
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

__attribute__((alias("__imp__sub_8368DD28"))) PPC_WEAK_FUNC(sub_8368DD28);
PPC_FUNC_IMPL(__imp__sub_8368DD28) {
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
	// lis r11,-31843
	ctx.r11.s64 = -2086862848;
	// li r30,23
	ctx.r30.s64 = 23;
	// addi r11,r11,-15888
	ctx.r11.s64 = ctx.r11.s64 + -15888;
	// addi r31,r11,292
	ctx.r31.s64 = ctx.r11.s64 + 292;
loc_8368DD4C:
	// addi r31,r31,-12
	ctx.r31.s64 = ctx.r31.s64 + -12;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82e01bf0
	ctx.lr = 0x8368DD58;
	sub_82E01BF0(ctx, base);
	// addic. r30,r30,-1
	ctx.xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// bge 0x8368dd4c
	if (!ctx.cr0.lt) goto loc_8368DD4C;
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

__attribute__((alias("__imp__sub_8368DD78"))) PPC_WEAK_FUNC(sub_8368DD78);
PPC_FUNC_IMPL(__imp__sub_8368DD78) {
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
	// lis r11,-31843
	ctx.r11.s64 = -2086862848;
	// li r30,23
	ctx.r30.s64 = 23;
	// addi r11,r11,-15600
	ctx.r11.s64 = ctx.r11.s64 + -15600;
	// addi r31,r11,292
	ctx.r31.s64 = ctx.r11.s64 + 292;
loc_8368DD9C:
	// addi r31,r31,-12
	ctx.r31.s64 = ctx.r31.s64 + -12;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82e01bf0
	ctx.lr = 0x8368DDA8;
	sub_82E01BF0(ctx, base);
	// addic. r30,r30,-1
	ctx.xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// bge 0x8368dd9c
	if (!ctx.cr0.lt) goto loc_8368DD9C;
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

__attribute__((alias("__imp__sub_8368DDC8"))) PPC_WEAK_FUNC(sub_8368DDC8);
PPC_FUNC_IMPL(__imp__sub_8368DDC8) {
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
	// lis r11,-31843
	ctx.r11.s64 = -2086862848;
	// li r30,23
	ctx.r30.s64 = 23;
	// addi r11,r11,-15312
	ctx.r11.s64 = ctx.r11.s64 + -15312;
	// addi r31,r11,292
	ctx.r31.s64 = ctx.r11.s64 + 292;
loc_8368DDEC:
	// addi r31,r31,-12
	ctx.r31.s64 = ctx.r31.s64 + -12;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82e01bf0
	ctx.lr = 0x8368DDF8;
	sub_82E01BF0(ctx, base);
	// addic. r30,r30,-1
	ctx.xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// bge 0x8368ddec
	if (!ctx.cr0.lt) goto loc_8368DDEC;
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

__attribute__((alias("__imp__sub_8368DE18"))) PPC_WEAK_FUNC(sub_8368DE18);
PPC_FUNC_IMPL(__imp__sub_8368DE18) {
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
	// lis r11,-31843
	ctx.r11.s64 = -2086862848;
	// li r30,23
	ctx.r30.s64 = 23;
	// addi r11,r11,-15024
	ctx.r11.s64 = ctx.r11.s64 + -15024;
	// addi r31,r11,292
	ctx.r31.s64 = ctx.r11.s64 + 292;
loc_8368DE3C:
	// addi r31,r31,-12
	ctx.r31.s64 = ctx.r31.s64 + -12;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82e01bf0
	ctx.lr = 0x8368DE48;
	sub_82E01BF0(ctx, base);
	// addic. r30,r30,-1
	ctx.xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// bge 0x8368de3c
	if (!ctx.cr0.lt) goto loc_8368DE3C;
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

__attribute__((alias("__imp__sub_8368DE68"))) PPC_WEAK_FUNC(sub_8368DE68);
PPC_FUNC_IMPL(__imp__sub_8368DE68) {
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
	// lis r11,-31843
	ctx.r11.s64 = -2086862848;
	// li r30,23
	ctx.r30.s64 = 23;
	// addi r11,r11,-14736
	ctx.r11.s64 = ctx.r11.s64 + -14736;
	// addi r31,r11,292
	ctx.r31.s64 = ctx.r11.s64 + 292;
loc_8368DE8C:
	// addi r31,r31,-12
	ctx.r31.s64 = ctx.r31.s64 + -12;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82e01bf0
	ctx.lr = 0x8368DE98;
	sub_82E01BF0(ctx, base);
	// addic. r30,r30,-1
	ctx.xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// bge 0x8368de8c
	if (!ctx.cr0.lt) goto loc_8368DE8C;
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

__attribute__((alias("__imp__sub_8368DEB8"))) PPC_WEAK_FUNC(sub_8368DEB8);
PPC_FUNC_IMPL(__imp__sub_8368DEB8) {
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
	// lis r11,-31843
	ctx.r11.s64 = -2086862848;
	// li r30,23
	ctx.r30.s64 = 23;
	// addi r11,r11,-14448
	ctx.r11.s64 = ctx.r11.s64 + -14448;
	// addi r31,r11,292
	ctx.r31.s64 = ctx.r11.s64 + 292;
loc_8368DEDC:
	// addi r31,r31,-12
	ctx.r31.s64 = ctx.r31.s64 + -12;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82e01bf0
	ctx.lr = 0x8368DEE8;
	sub_82E01BF0(ctx, base);
	// addic. r30,r30,-1
	ctx.xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// bge 0x8368dedc
	if (!ctx.cr0.lt) goto loc_8368DEDC;
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

__attribute__((alias("__imp__sub_8368DF08"))) PPC_WEAK_FUNC(sub_8368DF08);
PPC_FUNC_IMPL(__imp__sub_8368DF08) {
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
	// lis r11,-31843
	ctx.r11.s64 = -2086862848;
	// li r30,23
	ctx.r30.s64 = 23;
	// addi r11,r11,-14160
	ctx.r11.s64 = ctx.r11.s64 + -14160;
	// addi r31,r11,292
	ctx.r31.s64 = ctx.r11.s64 + 292;
loc_8368DF2C:
	// addi r31,r31,-12
	ctx.r31.s64 = ctx.r31.s64 + -12;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82e01bf0
	ctx.lr = 0x8368DF38;
	sub_82E01BF0(ctx, base);
	// addic. r30,r30,-1
	ctx.xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// bge 0x8368df2c
	if (!ctx.cr0.lt) goto loc_8368DF2C;
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

__attribute__((alias("__imp__sub_8368DF58"))) PPC_WEAK_FUNC(sub_8368DF58);
PPC_FUNC_IMPL(__imp__sub_8368DF58) {
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
	// lis r11,-31843
	ctx.r11.s64 = -2086862848;
	// li r30,1
	ctx.r30.s64 = 1;
	// addi r11,r11,-17384
	ctx.r11.s64 = ctx.r11.s64 + -17384;
	// addi r31,r11,28
	ctx.r31.s64 = ctx.r11.s64 + 28;
loc_8368DF7C:
	// addi r31,r31,-12
	ctx.r31.s64 = ctx.r31.s64 + -12;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82e01bf0
	ctx.lr = 0x8368DF88;
	sub_82E01BF0(ctx, base);
	// addic. r30,r30,-1
	ctx.xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// bge 0x8368df7c
	if (!ctx.cr0.lt) goto loc_8368DF7C;
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

__attribute__((alias("__imp__sub_8368DFA8"))) PPC_WEAK_FUNC(sub_8368DFA8);
PPC_FUNC_IMPL(__imp__sub_8368DFA8) {
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
	// lis r11,-31843
	ctx.r11.s64 = -2086862848;
	// addi r31,r11,-13372
	ctx.r31.s64 = ctx.r11.s64 + -13372;
	// addi r3,r31,4
	ctx.r3.s64 = ctx.r31.s64 + 4;
	// bl 0x82e01bf0
	ctx.lr = 0x8368DFC8;
	sub_82E01BF0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82e01bf0
	ctx.lr = 0x8368DFD0;
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

__attribute__((alias("__imp__sub_8368DFE4"))) PPC_WEAK_FUNC(sub_8368DFE4);
PPC_FUNC_IMPL(__imp__sub_8368DFE4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8368DFE8"))) PPC_WEAK_FUNC(sub_8368DFE8);
PPC_FUNC_IMPL(__imp__sub_8368DFE8) {
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
	// lis r11,-31843
	ctx.r11.s64 = -2086862848;
	// addi r31,r11,-13360
	ctx.r31.s64 = ctx.r11.s64 + -13360;
	// addi r3,r31,4
	ctx.r3.s64 = ctx.r31.s64 + 4;
	// bl 0x82e01bf0
	ctx.lr = 0x8368E008;
	sub_82E01BF0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82e01bf0
	ctx.lr = 0x8368E010;
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

__attribute__((alias("__imp__sub_8368E024"))) PPC_WEAK_FUNC(sub_8368E024);
PPC_FUNC_IMPL(__imp__sub_8368E024) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8368E028"))) PPC_WEAK_FUNC(sub_8368E028);
PPC_FUNC_IMPL(__imp__sub_8368E028) {
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
	// lis r11,-31843
	ctx.r11.s64 = -2086862848;
	// addi r31,r11,-13348
	ctx.r31.s64 = ctx.r11.s64 + -13348;
	// addi r3,r31,4
	ctx.r3.s64 = ctx.r31.s64 + 4;
	// bl 0x82e01bf0
	ctx.lr = 0x8368E048;
	sub_82E01BF0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82e01bf0
	ctx.lr = 0x8368E050;
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

__attribute__((alias("__imp__sub_8368E064"))) PPC_WEAK_FUNC(sub_8368E064);
PPC_FUNC_IMPL(__imp__sub_8368E064) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8368E068"))) PPC_WEAK_FUNC(sub_8368E068);
PPC_FUNC_IMPL(__imp__sub_8368E068) {
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
	// lis r11,-31843
	ctx.r11.s64 = -2086862848;
	// addi r31,r11,-13332
	ctx.r31.s64 = ctx.r11.s64 + -13332;
	// addi r3,r31,4
	ctx.r3.s64 = ctx.r31.s64 + 4;
	// bl 0x82e01bf0
	ctx.lr = 0x8368E088;
	sub_82E01BF0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82e01bf0
	ctx.lr = 0x8368E090;
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

__attribute__((alias("__imp__sub_8368E0A4"))) PPC_WEAK_FUNC(sub_8368E0A4);
PPC_FUNC_IMPL(__imp__sub_8368E0A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8368E0A8"))) PPC_WEAK_FUNC(sub_8368E0A8);
PPC_FUNC_IMPL(__imp__sub_8368E0A8) {
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
	// lis r11,-31843
	ctx.r11.s64 = -2086862848;
	// addi r31,r11,-13316
	ctx.r31.s64 = ctx.r11.s64 + -13316;
	// addi r3,r31,4
	ctx.r3.s64 = ctx.r31.s64 + 4;
	// bl 0x82e01bf0
	ctx.lr = 0x8368E0C8;
	sub_82E01BF0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82e01bf0
	ctx.lr = 0x8368E0D0;
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

__attribute__((alias("__imp__sub_8368E0E4"))) PPC_WEAK_FUNC(sub_8368E0E4);
PPC_FUNC_IMPL(__imp__sub_8368E0E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8368E0E8"))) PPC_WEAK_FUNC(sub_8368E0E8);
PPC_FUNC_IMPL(__imp__sub_8368E0E8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31843
	ctx.r11.s64 = -2086862848;
	// addi r3,r11,-13228
	ctx.r3.s64 = ctx.r11.s64 + -13228;
	// b 0x82e01bf0
	sub_82E01BF0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8368E0F4"))) PPC_WEAK_FUNC(sub_8368E0F4);
PPC_FUNC_IMPL(__imp__sub_8368E0F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8368E0F8"))) PPC_WEAK_FUNC(sub_8368E0F8);
PPC_FUNC_IMPL(__imp__sub_8368E0F8) {
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
	// lis r11,-31843
	ctx.r11.s64 = -2086862848;
	// addi r31,r11,-13292
	ctx.r31.s64 = ctx.r11.s64 + -13292;
	// addi r3,r31,4
	ctx.r3.s64 = ctx.r31.s64 + 4;
	// bl 0x82e01bf0
	ctx.lr = 0x8368E118;
	sub_82E01BF0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82e01bf0
	ctx.lr = 0x8368E120;
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

__attribute__((alias("__imp__sub_8368E134"))) PPC_WEAK_FUNC(sub_8368E134);
PPC_FUNC_IMPL(__imp__sub_8368E134) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8368E138"))) PPC_WEAK_FUNC(sub_8368E138);
PPC_FUNC_IMPL(__imp__sub_8368E138) {
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
	// lis r11,-31843
	ctx.r11.s64 = -2086862848;
	// addi r31,r11,-13204
	ctx.r31.s64 = ctx.r11.s64 + -13204;
	// addi r3,r31,4
	ctx.r3.s64 = ctx.r31.s64 + 4;
	// bl 0x82e01bf0
	ctx.lr = 0x8368E158;
	sub_82E01BF0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82e01bf0
	ctx.lr = 0x8368E160;
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

__attribute__((alias("__imp__sub_8368E174"))) PPC_WEAK_FUNC(sub_8368E174);
PPC_FUNC_IMPL(__imp__sub_8368E174) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8368E178"))) PPC_WEAK_FUNC(sub_8368E178);
PPC_FUNC_IMPL(__imp__sub_8368E178) {
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
	// lis r11,-31843
	ctx.r11.s64 = -2086862848;
	// addi r31,r11,-13188
	ctx.r31.s64 = ctx.r11.s64 + -13188;
	// addi r3,r31,4
	ctx.r3.s64 = ctx.r31.s64 + 4;
	// bl 0x82e01bf0
	ctx.lr = 0x8368E198;
	sub_82E01BF0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82e01bf0
	ctx.lr = 0x8368E1A0;
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

__attribute__((alias("__imp__sub_8368E1B4"))) PPC_WEAK_FUNC(sub_8368E1B4);
PPC_FUNC_IMPL(__imp__sub_8368E1B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8368E1B8"))) PPC_WEAK_FUNC(sub_8368E1B8);
PPC_FUNC_IMPL(__imp__sub_8368E1B8) {
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
	// lis r11,-31843
	ctx.r11.s64 = -2086862848;
	// addi r31,r11,-13172
	ctx.r31.s64 = ctx.r11.s64 + -13172;
	// addi r3,r31,4
	ctx.r3.s64 = ctx.r31.s64 + 4;
	// bl 0x82e01bf0
	ctx.lr = 0x8368E1D8;
	sub_82E01BF0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82e01bf0
	ctx.lr = 0x8368E1E0;
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

__attribute__((alias("__imp__sub_8368E1F4"))) PPC_WEAK_FUNC(sub_8368E1F4);
PPC_FUNC_IMPL(__imp__sub_8368E1F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8368E1F8"))) PPC_WEAK_FUNC(sub_8368E1F8);
PPC_FUNC_IMPL(__imp__sub_8368E1F8) {
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
	// lis r11,-31843
	ctx.r11.s64 = -2086862848;
	// addi r31,r11,-13020
	ctx.r31.s64 = ctx.r11.s64 + -13020;
	// addi r3,r31,4
	ctx.r3.s64 = ctx.r31.s64 + 4;
	// bl 0x82e01bf0
	ctx.lr = 0x8368E218;
	sub_82E01BF0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82e01bf0
	ctx.lr = 0x8368E220;
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

__attribute__((alias("__imp__sub_8368E234"))) PPC_WEAK_FUNC(sub_8368E234);
PPC_FUNC_IMPL(__imp__sub_8368E234) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8368E238"))) PPC_WEAK_FUNC(sub_8368E238);
PPC_FUNC_IMPL(__imp__sub_8368E238) {
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
	// lis r11,-31843
	ctx.r11.s64 = -2086862848;
	// addi r31,r11,-13008
	ctx.r31.s64 = ctx.r11.s64 + -13008;
	// addi r3,r31,4
	ctx.r3.s64 = ctx.r31.s64 + 4;
	// bl 0x82e01bf0
	ctx.lr = 0x8368E258;
	sub_82E01BF0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82e01bf0
	ctx.lr = 0x8368E260;
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

__attribute__((alias("__imp__sub_8368E274"))) PPC_WEAK_FUNC(sub_8368E274);
PPC_FUNC_IMPL(__imp__sub_8368E274) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8368E278"))) PPC_WEAK_FUNC(sub_8368E278);
PPC_FUNC_IMPL(__imp__sub_8368E278) {
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
	// lis r11,-31843
	ctx.r11.s64 = -2086862848;
	// addi r31,r11,-12984
	ctx.r31.s64 = ctx.r11.s64 + -12984;
	// addi r3,r31,4
	ctx.r3.s64 = ctx.r31.s64 + 4;
	// bl 0x82e01bf0
	ctx.lr = 0x8368E298;
	sub_82E01BF0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82e01bf0
	ctx.lr = 0x8368E2A0;
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

__attribute__((alias("__imp__sub_8368E2B4"))) PPC_WEAK_FUNC(sub_8368E2B4);
PPC_FUNC_IMPL(__imp__sub_8368E2B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8368E2B8"))) PPC_WEAK_FUNC(sub_8368E2B8);
PPC_FUNC_IMPL(__imp__sub_8368E2B8) {
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
	// lis r11,-31843
	ctx.r11.s64 = -2086862848;
	// addi r31,r11,-12968
	ctx.r31.s64 = ctx.r11.s64 + -12968;
	// addi r3,r31,4
	ctx.r3.s64 = ctx.r31.s64 + 4;
	// bl 0x82e01bf0
	ctx.lr = 0x8368E2D8;
	sub_82E01BF0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82e01bf0
	ctx.lr = 0x8368E2E0;
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

__attribute__((alias("__imp__sub_8368E2F4"))) PPC_WEAK_FUNC(sub_8368E2F4);
PPC_FUNC_IMPL(__imp__sub_8368E2F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8368E2F8"))) PPC_WEAK_FUNC(sub_8368E2F8);
PPC_FUNC_IMPL(__imp__sub_8368E2F8) {
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
	// lis r11,-31843
	ctx.r11.s64 = -2086862848;
	// addi r31,r11,-12932
	ctx.r31.s64 = ctx.r11.s64 + -12932;
	// addi r3,r31,4
	ctx.r3.s64 = ctx.r31.s64 + 4;
	// bl 0x82e01bf0
	ctx.lr = 0x8368E318;
	sub_82E01BF0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82e01bf0
	ctx.lr = 0x8368E320;
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

__attribute__((alias("__imp__sub_8368E334"))) PPC_WEAK_FUNC(sub_8368E334);
PPC_FUNC_IMPL(__imp__sub_8368E334) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8368E338"))) PPC_WEAK_FUNC(sub_8368E338);
PPC_FUNC_IMPL(__imp__sub_8368E338) {
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
	// lis r11,-31843
	ctx.r11.s64 = -2086862848;
	// addi r31,r11,-12916
	ctx.r31.s64 = ctx.r11.s64 + -12916;
	// addi r3,r31,4
	ctx.r3.s64 = ctx.r31.s64 + 4;
	// bl 0x82e01bf0
	ctx.lr = 0x8368E358;
	sub_82E01BF0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82e01bf0
	ctx.lr = 0x8368E360;
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

__attribute__((alias("__imp__sub_8368E374"))) PPC_WEAK_FUNC(sub_8368E374);
PPC_FUNC_IMPL(__imp__sub_8368E374) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8368E378"))) PPC_WEAK_FUNC(sub_8368E378);
PPC_FUNC_IMPL(__imp__sub_8368E378) {
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
	// lis r11,-31843
	ctx.r11.s64 = -2086862848;
	// addi r31,r11,-12896
	ctx.r31.s64 = ctx.r11.s64 + -12896;
	// addi r3,r31,4
	ctx.r3.s64 = ctx.r31.s64 + 4;
	// bl 0x82e01bf0
	ctx.lr = 0x8368E398;
	sub_82E01BF0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82e01bf0
	ctx.lr = 0x8368E3A0;
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

__attribute__((alias("__imp__sub_8368E3B4"))) PPC_WEAK_FUNC(sub_8368E3B4);
PPC_FUNC_IMPL(__imp__sub_8368E3B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8368E3B8"))) PPC_WEAK_FUNC(sub_8368E3B8);
PPC_FUNC_IMPL(__imp__sub_8368E3B8) {
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
	// lis r11,-31843
	ctx.r11.s64 = -2086862848;
	// addi r31,r11,-12844
	ctx.r31.s64 = ctx.r11.s64 + -12844;
	// addi r3,r31,4
	ctx.r3.s64 = ctx.r31.s64 + 4;
	// bl 0x82e01bf0
	ctx.lr = 0x8368E3D8;
	sub_82E01BF0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82e01bf0
	ctx.lr = 0x8368E3E0;
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

__attribute__((alias("__imp__sub_8368E3F4"))) PPC_WEAK_FUNC(sub_8368E3F4);
PPC_FUNC_IMPL(__imp__sub_8368E3F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8368E3F8"))) PPC_WEAK_FUNC(sub_8368E3F8);
PPC_FUNC_IMPL(__imp__sub_8368E3F8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31843
	ctx.r11.s64 = -2086862848;
	// addi r3,r11,-12824
	ctx.r3.s64 = ctx.r11.s64 + -12824;
	// b 0x82e01bf0
	sub_82E01BF0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8368E404"))) PPC_WEAK_FUNC(sub_8368E404);
PPC_FUNC_IMPL(__imp__sub_8368E404) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8368E408"))) PPC_WEAK_FUNC(sub_8368E408);
PPC_FUNC_IMPL(__imp__sub_8368E408) {
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
	// lis r11,-31843
	ctx.r11.s64 = -2086862848;
	// addi r31,r11,-12800
	ctx.r31.s64 = ctx.r11.s64 + -12800;
	// addi r3,r31,4
	ctx.r3.s64 = ctx.r31.s64 + 4;
	// bl 0x82e01bf0
	ctx.lr = 0x8368E428;
	sub_82E01BF0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82e01bf0
	ctx.lr = 0x8368E430;
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

__attribute__((alias("__imp__sub_8368E444"))) PPC_WEAK_FUNC(sub_8368E444);
PPC_FUNC_IMPL(__imp__sub_8368E444) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8368E448"))) PPC_WEAK_FUNC(sub_8368E448);
PPC_FUNC_IMPL(__imp__sub_8368E448) {
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
	// lis r11,-31843
	ctx.r11.s64 = -2086862848;
	// li r30,1
	ctx.r30.s64 = 1;
	// addi r11,r11,-12788
	ctx.r11.s64 = ctx.r11.s64 + -12788;
	// addi r31,r11,8
	ctx.r31.s64 = ctx.r11.s64 + 8;
loc_8368E46C:
	// addi r31,r31,-4
	ctx.r31.s64 = ctx.r31.s64 + -4;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82e01bf0
	ctx.lr = 0x8368E478;
	sub_82E01BF0(ctx, base);
	// addic. r30,r30,-1
	ctx.xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// bge 0x8368e46c
	if (!ctx.cr0.lt) goto loc_8368E46C;
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

__attribute__((alias("__imp__sub_8368E498"))) PPC_WEAK_FUNC(sub_8368E498);
PPC_FUNC_IMPL(__imp__sub_8368E498) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8368E49C"))) PPC_WEAK_FUNC(sub_8368E49C);
PPC_FUNC_IMPL(__imp__sub_8368E49C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8368E4A0"))) PPC_WEAK_FUNC(sub_8368E4A0);
PPC_FUNC_IMPL(__imp__sub_8368E4A0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31843
	ctx.r11.s64 = -2086862848;
	// addi r3,r11,-12448
	ctx.r3.s64 = ctx.r11.s64 + -12448;
	// b 0x82e01bf0
	sub_82E01BF0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8368E4AC"))) PPC_WEAK_FUNC(sub_8368E4AC);
PPC_FUNC_IMPL(__imp__sub_8368E4AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8368E4B0"))) PPC_WEAK_FUNC(sub_8368E4B0);
PPC_FUNC_IMPL(__imp__sub_8368E4B0) {
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
	// lis r11,-31843
	ctx.r11.s64 = -2086862848;
	// addi r31,r11,-12424
	ctx.r31.s64 = ctx.r11.s64 + -12424;
	// addi r3,r31,4
	ctx.r3.s64 = ctx.r31.s64 + 4;
	// bl 0x82e01bf0
	ctx.lr = 0x8368E4D0;
	sub_82E01BF0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82e01bf0
	ctx.lr = 0x8368E4D8;
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

__attribute__((alias("__imp__sub_8368E4EC"))) PPC_WEAK_FUNC(sub_8368E4EC);
PPC_FUNC_IMPL(__imp__sub_8368E4EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8368E4F0"))) PPC_WEAK_FUNC(sub_8368E4F0);
PPC_FUNC_IMPL(__imp__sub_8368E4F0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8368E4F4"))) PPC_WEAK_FUNC(sub_8368E4F4);
PPC_FUNC_IMPL(__imp__sub_8368E4F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8368E4F8"))) PPC_WEAK_FUNC(sub_8368E4F8);
PPC_FUNC_IMPL(__imp__sub_8368E4F8) {
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
	// lis r11,-31843
	ctx.r11.s64 = -2086862848;
	// addi r31,r11,-12208
	ctx.r31.s64 = ctx.r11.s64 + -12208;
	// addi r3,r31,4
	ctx.r3.s64 = ctx.r31.s64 + 4;
	// bl 0x82e01bf0
	ctx.lr = 0x8368E518;
	sub_82E01BF0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82e01bf0
	ctx.lr = 0x8368E520;
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

__attribute__((alias("__imp__sub_8368E534"))) PPC_WEAK_FUNC(sub_8368E534);
PPC_FUNC_IMPL(__imp__sub_8368E534) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8368E538"))) PPC_WEAK_FUNC(sub_8368E538);
PPC_FUNC_IMPL(__imp__sub_8368E538) {
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
	// lis r11,-31843
	ctx.r11.s64 = -2086862848;
	// addi r31,r11,-12096
	ctx.r31.s64 = ctx.r11.s64 + -12096;
	// addi r3,r31,4
	ctx.r3.s64 = ctx.r31.s64 + 4;
	// bl 0x82e01bf0
	ctx.lr = 0x8368E558;
	sub_82E01BF0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82e01bf0
	ctx.lr = 0x8368E560;
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

__attribute__((alias("__imp__sub_8368E574"))) PPC_WEAK_FUNC(sub_8368E574);
PPC_FUNC_IMPL(__imp__sub_8368E574) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8368E578"))) PPC_WEAK_FUNC(sub_8368E578);
PPC_FUNC_IMPL(__imp__sub_8368E578) {
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
	// lis r11,-31843
	ctx.r11.s64 = -2086862848;
	// addi r31,r11,-12060
	ctx.r31.s64 = ctx.r11.s64 + -12060;
	// addi r3,r31,4
	ctx.r3.s64 = ctx.r31.s64 + 4;
	// bl 0x82e01bf0
	ctx.lr = 0x8368E598;
	sub_82E01BF0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82e01bf0
	ctx.lr = 0x8368E5A0;
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

__attribute__((alias("__imp__sub_8368E5B4"))) PPC_WEAK_FUNC(sub_8368E5B4);
PPC_FUNC_IMPL(__imp__sub_8368E5B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8368E5B8"))) PPC_WEAK_FUNC(sub_8368E5B8);
PPC_FUNC_IMPL(__imp__sub_8368E5B8) {
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
	// lis r11,-31843
	ctx.r11.s64 = -2086862848;
	// addi r31,r11,-12032
	ctx.r31.s64 = ctx.r11.s64 + -12032;
	// addi r3,r31,4
	ctx.r3.s64 = ctx.r31.s64 + 4;
	// bl 0x82e01bf0
	ctx.lr = 0x8368E5D8;
	sub_82E01BF0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82e01bf0
	ctx.lr = 0x8368E5E0;
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

__attribute__((alias("__imp__sub_8368E5F4"))) PPC_WEAK_FUNC(sub_8368E5F4);
PPC_FUNC_IMPL(__imp__sub_8368E5F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8368E5F8"))) PPC_WEAK_FUNC(sub_8368E5F8);
PPC_FUNC_IMPL(__imp__sub_8368E5F8) {
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
	// lis r11,-31843
	ctx.r11.s64 = -2086862848;
	// addi r31,r11,-11876
	ctx.r31.s64 = ctx.r11.s64 + -11876;
	// addi r3,r31,4
	ctx.r3.s64 = ctx.r31.s64 + 4;
	// bl 0x82e01bf0
	ctx.lr = 0x8368E618;
	sub_82E01BF0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82e01bf0
	ctx.lr = 0x8368E620;
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

__attribute__((alias("__imp__sub_8368E634"))) PPC_WEAK_FUNC(sub_8368E634);
PPC_FUNC_IMPL(__imp__sub_8368E634) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8368E638"))) PPC_WEAK_FUNC(sub_8368E638);
PPC_FUNC_IMPL(__imp__sub_8368E638) {
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
	// lis r11,-31843
	ctx.r11.s64 = -2086862848;
	// li r30,2
	ctx.r30.s64 = 2;
	// addi r11,r11,-11820
	ctx.r11.s64 = ctx.r11.s64 + -11820;
	// addi r31,r11,24
	ctx.r31.s64 = ctx.r11.s64 + 24;
loc_8368E65C:
	// addi r31,r31,-8
	ctx.r31.s64 = ctx.r31.s64 + -8;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82e01bf0
	ctx.lr = 0x8368E668;
	sub_82E01BF0(ctx, base);
	// addic. r30,r30,-1
	ctx.xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// bge 0x8368e65c
	if (!ctx.cr0.lt) goto loc_8368E65C;
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

__attribute__((alias("__imp__sub_8368E688"))) PPC_WEAK_FUNC(sub_8368E688);
PPC_FUNC_IMPL(__imp__sub_8368E688) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31843
	ctx.r11.s64 = -2086862848;
	// addi r11,r11,-11792
	ctx.r11.s64 = ctx.r11.s64 + -11792;
	// lwz r3,4(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// addi r9,r3,8
	ctx.r9.s64 = ctx.r3.s64 + 8;
loc_8368E6A0:
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
	// bne 0x8368e6a0
	if (!ctx.cr0.eq) goto loc_8368E6A0;
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

__attribute__((alias("__imp__sub_8368E6D4"))) PPC_WEAK_FUNC(sub_8368E6D4);
PPC_FUNC_IMPL(__imp__sub_8368E6D4) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8368E6D8"))) PPC_WEAK_FUNC(sub_8368E6D8);
PPC_FUNC_IMPL(__imp__sub_8368E6D8) {
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
	// lis r11,-31843
	ctx.r11.s64 = -2086862848;
	// addi r31,r11,-6256
	ctx.r31.s64 = ctx.r11.s64 + -6256;
	// lwz r3,-6256(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -6256);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8368e700
	if (ctx.cr6.eq) goto loc_8368E700;
	// bl 0x82e01568
	ctx.lr = 0x8368E700;
	sub_82E01568(ctx, base);
loc_8368E700:
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,0
	ctx.r10.s64 = 0;
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// stw r10,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r10.u32);
	// stw r9,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r9.u32);
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

__attribute__((alias("__imp__sub_8368E72C"))) PPC_WEAK_FUNC(sub_8368E72C);
PPC_FUNC_IMPL(__imp__sub_8368E72C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8368E730"))) PPC_WEAK_FUNC(sub_8368E730);
PPC_FUNC_IMPL(__imp__sub_8368E730) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31843
	ctx.r11.s64 = -2086862848;
	// addi r3,r11,-6240
	ctx.r3.s64 = ctx.r11.s64 + -6240;
	// b 0x82d76cf0
	sub_82D76CF0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8368E73C"))) PPC_WEAK_FUNC(sub_8368E73C);
PPC_FUNC_IMPL(__imp__sub_8368E73C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8368E740"))) PPC_WEAK_FUNC(sub_8368E740);
PPC_FUNC_IMPL(__imp__sub_8368E740) {
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
	// lis r11,-31842
	ctx.r11.s64 = -2086797312;
	// li r30,39
	ctx.r30.s64 = 39;
	// addi r11,r11,-3240
	ctx.r11.s64 = ctx.r11.s64 + -3240;
	// addi r31,r11,160
	ctx.r31.s64 = ctx.r11.s64 + 160;
loc_8368E764:
	// addi r31,r31,-4
	ctx.r31.s64 = ctx.r31.s64 + -4;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82e01bf0
	ctx.lr = 0x8368E770;
	sub_82E01BF0(ctx, base);
	// addic. r30,r30,-1
	ctx.xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// bge 0x8368e764
	if (!ctx.cr0.lt) goto loc_8368E764;
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

__attribute__((alias("__imp__sub_8368E790"))) PPC_WEAK_FUNC(sub_8368E790);
PPC_FUNC_IMPL(__imp__sub_8368E790) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31842
	ctx.r11.s64 = -2086797312;
	// addi r11,r11,-3008
	ctx.r11.s64 = ctx.r11.s64 + -3008;
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

__attribute__((alias("__imp__sub_8368E7A8"))) PPC_WEAK_FUNC(sub_8368E7A8);
PPC_FUNC_IMPL(__imp__sub_8368E7A8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8368E7AC"))) PPC_WEAK_FUNC(sub_8368E7AC);
PPC_FUNC_IMPL(__imp__sub_8368E7AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8368E7B0"))) PPC_WEAK_FUNC(sub_8368E7B0);
PPC_FUNC_IMPL(__imp__sub_8368E7B0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// lis r10,-31878
	ctx.r10.s64 = -2089156608;
	// addi r11,r11,20256
	ctx.r11.s64 = ctx.r11.s64 + 20256;
	// stw r11,-24980(r10)
	PPC_STORE_U32(ctx.r10.u32 + -24980, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8368E7C4"))) PPC_WEAK_FUNC(sub_8368E7C4);
PPC_FUNC_IMPL(__imp__sub_8368E7C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8368E7C8"))) PPC_WEAK_FUNC(sub_8368E7C8);
PPC_FUNC_IMPL(__imp__sub_8368E7C8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31842
	ctx.r11.s64 = -2086797312;
	// addi r3,r11,2864
	ctx.r3.s64 = ctx.r11.s64 + 2864;
	// b 0x82e00028
	sub_82E00028(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8368E7D4"))) PPC_WEAK_FUNC(sub_8368E7D4);
PPC_FUNC_IMPL(__imp__sub_8368E7D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8368E7D8"))) PPC_WEAK_FUNC(sub_8368E7D8);
PPC_FUNC_IMPL(__imp__sub_8368E7D8) {
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
	// lis r11,-31842
	ctx.r11.s64 = -2086797312;
	// lwz r3,2900(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 2900);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8368e814
	if (ctx.cr6.eq) goto loc_8368E814;
	// bl 0x824b5408
	ctx.lr = 0x8368E7F8;
	sub_824B5408(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8368e814
	if (ctx.cr0.eq) goto loc_8368E814;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8368E814;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8368E814:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8368E824"))) PPC_WEAK_FUNC(sub_8368E824);
PPC_FUNC_IMPL(__imp__sub_8368E824) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8368E828"))) PPC_WEAK_FUNC(sub_8368E828);
PPC_FUNC_IMPL(__imp__sub_8368E828) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31842
	ctx.r11.s64 = -2086797312;
	// addi r3,r11,2908
	ctx.r3.s64 = ctx.r11.s64 + 2908;
	// b 0x82e003b0
	sub_82E003B0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8368E834"))) PPC_WEAK_FUNC(sub_8368E834);
PPC_FUNC_IMPL(__imp__sub_8368E834) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8368E838"))) PPC_WEAK_FUNC(sub_8368E838);
PPC_FUNC_IMPL(__imp__sub_8368E838) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// lis r10,-31878
	ctx.r10.s64 = -2089156608;
	// addi r11,r11,20576
	ctx.r11.s64 = ctx.r11.s64 + 20576;
	// stw r11,-24880(r10)
	PPC_STORE_U32(ctx.r10.u32 + -24880, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8368E84C"))) PPC_WEAK_FUNC(sub_8368E84C);
PPC_FUNC_IMPL(__imp__sub_8368E84C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8368E850"))) PPC_WEAK_FUNC(sub_8368E850);
PPC_FUNC_IMPL(__imp__sub_8368E850) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// lis r10,-31878
	ctx.r10.s64 = -2089156608;
	// addi r11,r11,20576
	ctx.r11.s64 = ctx.r11.s64 + 20576;
	// stw r11,-24872(r10)
	PPC_STORE_U32(ctx.r10.u32 + -24872, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8368E864"))) PPC_WEAK_FUNC(sub_8368E864);
PPC_FUNC_IMPL(__imp__sub_8368E864) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8368E868"))) PPC_WEAK_FUNC(sub_8368E868);
PPC_FUNC_IMPL(__imp__sub_8368E868) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// lis r10,-31878
	ctx.r10.s64 = -2089156608;
	// addi r11,r11,20576
	ctx.r11.s64 = ctx.r11.s64 + 20576;
	// stw r11,-24864(r10)
	PPC_STORE_U32(ctx.r10.u32 + -24864, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8368E87C"))) PPC_WEAK_FUNC(sub_8368E87C);
PPC_FUNC_IMPL(__imp__sub_8368E87C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8368E880"))) PPC_WEAK_FUNC(sub_8368E880);
PPC_FUNC_IMPL(__imp__sub_8368E880) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31842
	ctx.r11.s64 = -2086797312;
	// addi r3,r11,3040
	ctx.r3.s64 = ctx.r11.s64 + 3040;
	// b 0x82e00028
	sub_82E00028(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8368E88C"))) PPC_WEAK_FUNC(sub_8368E88C);
PPC_FUNC_IMPL(__imp__sub_8368E88C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8368E890"))) PPC_WEAK_FUNC(sub_8368E890);
PPC_FUNC_IMPL(__imp__sub_8368E890) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31842
	ctx.r11.s64 = -2086797312;
	// addi r3,r11,3041
	ctx.r3.s64 = ctx.r11.s64 + 3041;
	// b 0x82e01420
	sub_82E01420(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8368E89C"))) PPC_WEAK_FUNC(sub_8368E89C);
PPC_FUNC_IMPL(__imp__sub_8368E89C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8368E8A0"))) PPC_WEAK_FUNC(sub_8368E8A0);
PPC_FUNC_IMPL(__imp__sub_8368E8A0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31842
	ctx.r11.s64 = -2086797312;
	// addi r3,r11,3056
	ctx.r3.s64 = ctx.r11.s64 + 3056;
	// b 0x82e07de0
	sub_82E07DE0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8368E8AC"))) PPC_WEAK_FUNC(sub_8368E8AC);
PPC_FUNC_IMPL(__imp__sub_8368E8AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8368E8B0"))) PPC_WEAK_FUNC(sub_8368E8B0);
PPC_FUNC_IMPL(__imp__sub_8368E8B0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31842
	ctx.r11.s64 = -2086797312;
	// addi r3,r11,3524
	ctx.r3.s64 = ctx.r11.s64 + 3524;
	// b 0x82e01bf0
	sub_82E01BF0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8368E8BC"))) PPC_WEAK_FUNC(sub_8368E8BC);
PPC_FUNC_IMPL(__imp__sub_8368E8BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8368E8C0"))) PPC_WEAK_FUNC(sub_8368E8C0);
PPC_FUNC_IMPL(__imp__sub_8368E8C0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31842
	ctx.r11.s64 = -2086797312;
	// addi r3,r11,3528
	ctx.r3.s64 = ctx.r11.s64 + 3528;
	// b 0x82e01bf0
	sub_82E01BF0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8368E8CC"))) PPC_WEAK_FUNC(sub_8368E8CC);
PPC_FUNC_IMPL(__imp__sub_8368E8CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8368E8D0"))) PPC_WEAK_FUNC(sub_8368E8D0);
PPC_FUNC_IMPL(__imp__sub_8368E8D0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31842
	ctx.r11.s64 = -2086797312;
	// addi r3,r11,3544
	ctx.r3.s64 = ctx.r11.s64 + 3544;
	// b 0x82e04930
	sub_82E04930(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8368E8DC"))) PPC_WEAK_FUNC(sub_8368E8DC);
PPC_FUNC_IMPL(__imp__sub_8368E8DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8368E8E0"))) PPC_WEAK_FUNC(sub_8368E8E0);
PPC_FUNC_IMPL(__imp__sub_8368E8E0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31842
	ctx.r11.s64 = -2086797312;
	// addi r11,r11,5948
	ctx.r11.s64 = ctx.r11.s64 + 5948;
	// addi r3,r11,4
	ctx.r3.s64 = ctx.r11.s64 + 4;
	// b 0x82e03da8
	sub_82E03DA8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8368E8F0"))) PPC_WEAK_FUNC(sub_8368E8F0);
PPC_FUNC_IMPL(__imp__sub_8368E8F0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31842
	ctx.r11.s64 = -2086797312;
	// addi r11,r11,5956
	ctx.r11.s64 = ctx.r11.s64 + 5956;
	// addi r3,r11,4
	ctx.r3.s64 = ctx.r11.s64 + 4;
	// b 0x82e03da8
	sub_82E03DA8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8368E900"))) PPC_WEAK_FUNC(sub_8368E900);
PPC_FUNC_IMPL(__imp__sub_8368E900) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31842
	ctx.r11.s64 = -2086797312;
	// addi r11,r11,5964
	ctx.r11.s64 = ctx.r11.s64 + 5964;
	// addi r3,r11,4
	ctx.r3.s64 = ctx.r11.s64 + 4;
	// b 0x82e03da8
	sub_82E03DA8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8368E910"))) PPC_WEAK_FUNC(sub_8368E910);
PPC_FUNC_IMPL(__imp__sub_8368E910) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31842
	ctx.r11.s64 = -2086797312;
	// addi r11,r11,5972
	ctx.r11.s64 = ctx.r11.s64 + 5972;
	// addi r3,r11,4
	ctx.r3.s64 = ctx.r11.s64 + 4;
	// b 0x82e03da8
	sub_82E03DA8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8368E920"))) PPC_WEAK_FUNC(sub_8368E920);
PPC_FUNC_IMPL(__imp__sub_8368E920) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31842
	ctx.r11.s64 = -2086797312;
	// addi r3,r11,6536
	ctx.r3.s64 = ctx.r11.s64 + 6536;
	// b 0x82e0aad0
	sub_82E0AAD0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8368E92C"))) PPC_WEAK_FUNC(sub_8368E92C);
PPC_FUNC_IMPL(__imp__sub_8368E92C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8368E930"))) PPC_WEAK_FUNC(sub_8368E930);
PPC_FUNC_IMPL(__imp__sub_8368E930) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31842
	ctx.r11.s64 = -2086797312;
	// addi r11,r11,6572
	ctx.r11.s64 = ctx.r11.s64 + 6572;
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

__attribute__((alias("__imp__sub_8368E948"))) PPC_WEAK_FUNC(sub_8368E948);
PPC_FUNC_IMPL(__imp__sub_8368E948) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8368E94C"))) PPC_WEAK_FUNC(sub_8368E94C);
PPC_FUNC_IMPL(__imp__sub_8368E94C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8368E950"))) PPC_WEAK_FUNC(sub_8368E950);
PPC_FUNC_IMPL(__imp__sub_8368E950) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31842
	ctx.r11.s64 = -2086797312;
	// addi r11,r11,6580
	ctx.r11.s64 = ctx.r11.s64 + 6580;
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

__attribute__((alias("__imp__sub_8368E968"))) PPC_WEAK_FUNC(sub_8368E968);
PPC_FUNC_IMPL(__imp__sub_8368E968) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8368E96C"))) PPC_WEAK_FUNC(sub_8368E96C);
PPC_FUNC_IMPL(__imp__sub_8368E96C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8368E970"))) PPC_WEAK_FUNC(sub_8368E970);
PPC_FUNC_IMPL(__imp__sub_8368E970) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31842
	ctx.r11.s64 = -2086797312;
	// addi r11,r11,6620
	ctx.r11.s64 = ctx.r11.s64 + 6620;
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

__attribute__((alias("__imp__sub_8368E988"))) PPC_WEAK_FUNC(sub_8368E988);
PPC_FUNC_IMPL(__imp__sub_8368E988) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8368E98C"))) PPC_WEAK_FUNC(sub_8368E98C);
PPC_FUNC_IMPL(__imp__sub_8368E98C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8368E990"))) PPC_WEAK_FUNC(sub_8368E990);
PPC_FUNC_IMPL(__imp__sub_8368E990) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31842
	ctx.r11.s64 = -2086797312;
	// addi r11,r11,6732
	ctx.r11.s64 = ctx.r11.s64 + 6732;
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

__attribute__((alias("__imp__sub_8368E9A8"))) PPC_WEAK_FUNC(sub_8368E9A8);
PPC_FUNC_IMPL(__imp__sub_8368E9A8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8368E9AC"))) PPC_WEAK_FUNC(sub_8368E9AC);
PPC_FUNC_IMPL(__imp__sub_8368E9AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8368E9B0"))) PPC_WEAK_FUNC(sub_8368E9B0);
PPC_FUNC_IMPL(__imp__sub_8368E9B0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31842
	ctx.r11.s64 = -2086797312;
	// addi r3,r11,6960
	ctx.r3.s64 = ctx.r11.s64 + 6960;
	// b 0x8259b670
	sub_8259B670(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8368E9BC"))) PPC_WEAK_FUNC(sub_8368E9BC);
PPC_FUNC_IMPL(__imp__sub_8368E9BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8368E9C0"))) PPC_WEAK_FUNC(sub_8368E9C0);
PPC_FUNC_IMPL(__imp__sub_8368E9C0) {
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
	// lis r11,-31842
	ctx.r11.s64 = -2086797312;
	// li r30,4
	ctx.r30.s64 = 4;
	// addi r11,r11,7020
	ctx.r11.s64 = ctx.r11.s64 + 7020;
	// addi r31,r11,20
	ctx.r31.s64 = ctx.r11.s64 + 20;
loc_8368E9E4:
	// addi r31,r31,-4
	ctx.r31.s64 = ctx.r31.s64 + -4;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82e01bf0
	ctx.lr = 0x8368E9F0;
	sub_82E01BF0(ctx, base);
	// addic. r30,r30,-1
	ctx.xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// bge 0x8368e9e4
	if (!ctx.cr0.lt) goto loc_8368E9E4;
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

__attribute__((alias("__imp__sub_8368EA10"))) PPC_WEAK_FUNC(sub_8368EA10);
PPC_FUNC_IMPL(__imp__sub_8368EA10) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31842
	ctx.r11.s64 = -2086797312;
	// addi r11,r11,7440
	ctx.r11.s64 = ctx.r11.s64 + 7440;
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

__attribute__((alias("__imp__sub_8368EA28"))) PPC_WEAK_FUNC(sub_8368EA28);
PPC_FUNC_IMPL(__imp__sub_8368EA28) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8368EA2C"))) PPC_WEAK_FUNC(sub_8368EA2C);
PPC_FUNC_IMPL(__imp__sub_8368EA2C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8368EA30"))) PPC_WEAK_FUNC(sub_8368EA30);
PPC_FUNC_IMPL(__imp__sub_8368EA30) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31842
	ctx.r11.s64 = -2086797312;
	// addi r11,r11,8008
	ctx.r11.s64 = ctx.r11.s64 + 8008;
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

__attribute__((alias("__imp__sub_8368EA48"))) PPC_WEAK_FUNC(sub_8368EA48);
PPC_FUNC_IMPL(__imp__sub_8368EA48) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8368EA4C"))) PPC_WEAK_FUNC(sub_8368EA4C);
PPC_FUNC_IMPL(__imp__sub_8368EA4C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8368EA50"))) PPC_WEAK_FUNC(sub_8368EA50);
PPC_FUNC_IMPL(__imp__sub_8368EA50) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31842
	ctx.r11.s64 = -2086797312;
	// addi r3,r11,8024
	ctx.r3.s64 = ctx.r11.s64 + 8024;
	// b 0x82e01bf0
	sub_82E01BF0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8368EA5C"))) PPC_WEAK_FUNC(sub_8368EA5C);
PPC_FUNC_IMPL(__imp__sub_8368EA5C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8368EA60"))) PPC_WEAK_FUNC(sub_8368EA60);
PPC_FUNC_IMPL(__imp__sub_8368EA60) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31842
	ctx.r11.s64 = -2086797312;
	// addi r11,r11,8028
	ctx.r11.s64 = ctx.r11.s64 + 8028;
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

__attribute__((alias("__imp__sub_8368EA78"))) PPC_WEAK_FUNC(sub_8368EA78);
PPC_FUNC_IMPL(__imp__sub_8368EA78) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8368EA7C"))) PPC_WEAK_FUNC(sub_8368EA7C);
PPC_FUNC_IMPL(__imp__sub_8368EA7C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8368EA80"))) PPC_WEAK_FUNC(sub_8368EA80);
PPC_FUNC_IMPL(__imp__sub_8368EA80) {
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
	// lis r11,-31842
	ctx.r11.s64 = -2086797312;
	// lwz r31,8060(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8060);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x8368eab0
	if (ctx.cr6.eq) goto loc_8368EAB0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82c10e98
	ctx.lr = 0x8368EAA8;
	sub_82C10E98(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82e01698
	ctx.lr = 0x8368EAB0;
	sub_82E01698(ctx, base);
loc_8368EAB0:
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

__attribute__((alias("__imp__sub_8368EAC4"))) PPC_WEAK_FUNC(sub_8368EAC4);
PPC_FUNC_IMPL(__imp__sub_8368EAC4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8368EAC8"))) PPC_WEAK_FUNC(sub_8368EAC8);
PPC_FUNC_IMPL(__imp__sub_8368EAC8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31842
	ctx.r11.s64 = -2086797312;
	// addi r3,r11,8064
	ctx.r3.s64 = ctx.r11.s64 + 8064;
	// b 0x82e01bf0
	sub_82E01BF0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8368EAD4"))) PPC_WEAK_FUNC(sub_8368EAD4);
PPC_FUNC_IMPL(__imp__sub_8368EAD4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8368EAD8"))) PPC_WEAK_FUNC(sub_8368EAD8);
PPC_FUNC_IMPL(__imp__sub_8368EAD8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31842
	ctx.r11.s64 = -2086797312;
	// addi r3,r11,8072
	ctx.r3.s64 = ctx.r11.s64 + 8072;
	// b 0x82e01bf0
	sub_82E01BF0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8368EAE4"))) PPC_WEAK_FUNC(sub_8368EAE4);
PPC_FUNC_IMPL(__imp__sub_8368EAE4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8368EAE8"))) PPC_WEAK_FUNC(sub_8368EAE8);
PPC_FUNC_IMPL(__imp__sub_8368EAE8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8368EAEC"))) PPC_WEAK_FUNC(sub_8368EAEC);
PPC_FUNC_IMPL(__imp__sub_8368EAEC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8368EAF0"))) PPC_WEAK_FUNC(sub_8368EAF0);
PPC_FUNC_IMPL(__imp__sub_8368EAF0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8368EAF4"))) PPC_WEAK_FUNC(sub_8368EAF4);
PPC_FUNC_IMPL(__imp__sub_8368EAF4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8368EAF8"))) PPC_WEAK_FUNC(sub_8368EAF8);
PPC_FUNC_IMPL(__imp__sub_8368EAF8) {
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
	// lis r11,-31842
	ctx.r11.s64 = -2086797312;
	// addi r3,r11,8716
	ctx.r3.s64 = ctx.r11.s64 + 8716;
	// bl 0x824d57d0
	ctx.lr = 0x8368EB10;
	sub_824D57D0(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8368EB20"))) PPC_WEAK_FUNC(sub_8368EB20);
PPC_FUNC_IMPL(__imp__sub_8368EB20) {
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
	// lis r11,-31842
	ctx.r11.s64 = -2086797312;
	// addi r3,r11,8728
	ctx.r3.s64 = ctx.r11.s64 + 8728;
	// bl 0x824d57d0
	ctx.lr = 0x8368EB38;
	sub_824D57D0(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8368EB48"))) PPC_WEAK_FUNC(sub_8368EB48);
PPC_FUNC_IMPL(__imp__sub_8368EB48) {
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
	// lis r11,-31842
	ctx.r11.s64 = -2086797312;
	// addi r3,r11,8700
	ctx.r3.s64 = ctx.r11.s64 + 8700;
	// bl 0x824d57d0
	ctx.lr = 0x8368EB60;
	sub_824D57D0(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8368EB70"))) PPC_WEAK_FUNC(sub_8368EB70);
PPC_FUNC_IMPL(__imp__sub_8368EB70) {
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
	// lis r11,-31842
	ctx.r11.s64 = -2086797312;
	// addi r3,r11,8708
	ctx.r3.s64 = ctx.r11.s64 + 8708;
	// bl 0x824d57d0
	ctx.lr = 0x8368EB88;
	sub_824D57D0(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8368EB98"))) PPC_WEAK_FUNC(sub_8368EB98);
PPC_FUNC_IMPL(__imp__sub_8368EB98) {
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
	// lis r11,-31842
	ctx.r11.s64 = -2086797312;
	// addi r3,r11,8672
	ctx.r3.s64 = ctx.r11.s64 + 8672;
	// bl 0x824d57d0
	ctx.lr = 0x8368EBB0;
	sub_824D57D0(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8368EBC0"))) PPC_WEAK_FUNC(sub_8368EBC0);
PPC_FUNC_IMPL(__imp__sub_8368EBC0) {
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
	// lis r11,-31842
	ctx.r11.s64 = -2086797312;
	// addi r3,r11,8680
	ctx.r3.s64 = ctx.r11.s64 + 8680;
	// bl 0x824d6008
	ctx.lr = 0x8368EBD8;
	sub_824D6008(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8368EBE8"))) PPC_WEAK_FUNC(sub_8368EBE8);
PPC_FUNC_IMPL(__imp__sub_8368EBE8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31842
	ctx.r11.s64 = -2086797312;
	// addi r11,r11,8776
	ctx.r11.s64 = ctx.r11.s64 + 8776;
	// lwz r3,4(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// addi r9,r3,8
	ctx.r9.s64 = ctx.r3.s64 + 8;
loc_8368EC00:
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
	// bne 0x8368ec00
	if (!ctx.cr0.eq) goto loc_8368EC00;
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

__attribute__((alias("__imp__sub_8368EC34"))) PPC_WEAK_FUNC(sub_8368EC34);
PPC_FUNC_IMPL(__imp__sub_8368EC34) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8368EC38"))) PPC_WEAK_FUNC(sub_8368EC38);
PPC_FUNC_IMPL(__imp__sub_8368EC38) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31878
	ctx.r11.s64 = -2089156608;
	// addi r3,r11,-13496
	ctx.r3.s64 = ctx.r11.s64 + -13496;
	// b 0x82ef6710
	sub_82EF6710(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8368EC44"))) PPC_WEAK_FUNC(sub_8368EC44);
PPC_FUNC_IMPL(__imp__sub_8368EC44) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8368EC48"))) PPC_WEAK_FUNC(sub_8368EC48);
PPC_FUNC_IMPL(__imp__sub_8368EC48) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31878
	ctx.r11.s64 = -2089156608;
	// addi r3,r11,-13492
	ctx.r3.s64 = ctx.r11.s64 + -13492;
	// b 0x82ef6710
	sub_82EF6710(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8368EC54"))) PPC_WEAK_FUNC(sub_8368EC54);
PPC_FUNC_IMPL(__imp__sub_8368EC54) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8368EC58"))) PPC_WEAK_FUNC(sub_8368EC58);
PPC_FUNC_IMPL(__imp__sub_8368EC58) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31878
	ctx.r11.s64 = -2089156608;
	// addi r3,r11,-13488
	ctx.r3.s64 = ctx.r11.s64 + -13488;
	// b 0x82ef6710
	sub_82EF6710(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8368EC64"))) PPC_WEAK_FUNC(sub_8368EC64);
PPC_FUNC_IMPL(__imp__sub_8368EC64) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8368EC68"))) PPC_WEAK_FUNC(sub_8368EC68);
PPC_FUNC_IMPL(__imp__sub_8368EC68) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31878
	ctx.r11.s64 = -2089156608;
	// addi r3,r11,-13116
	ctx.r3.s64 = ctx.r11.s64 + -13116;
	// b 0x82ef6710
	sub_82EF6710(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8368EC74"))) PPC_WEAK_FUNC(sub_8368EC74);
PPC_FUNC_IMPL(__imp__sub_8368EC74) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8368EC78"))) PPC_WEAK_FUNC(sub_8368EC78);
PPC_FUNC_IMPL(__imp__sub_8368EC78) {
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
	// lis r11,-31878
	ctx.r11.s64 = -2089156608;
	// addi r31,r11,-13100
	ctx.r31.s64 = ctx.r11.s64 + -13100;
	// addi r3,r31,8
	ctx.r3.s64 = ctx.r31.s64 + 8;
	// bl 0x82ef9188
	ctx.lr = 0x8368EC98;
	sub_82EF9188(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82ef6710
	ctx.lr = 0x8368ECA0;
	sub_82EF6710(ctx, base);
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

__attribute__((alias("__imp__sub_8368ECB4"))) PPC_WEAK_FUNC(sub_8368ECB4);
PPC_FUNC_IMPL(__imp__sub_8368ECB4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8368ECB8"))) PPC_WEAK_FUNC(sub_8368ECB8);
PPC_FUNC_IMPL(__imp__sub_8368ECB8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31878
	ctx.r11.s64 = -2089156608;
	// addi r3,r11,-12708
	ctx.r3.s64 = ctx.r11.s64 + -12708;
	// b 0x82ef6710
	sub_82EF6710(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8368ECC4"))) PPC_WEAK_FUNC(sub_8368ECC4);
PPC_FUNC_IMPL(__imp__sub_8368ECC4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8368ECC8"))) PPC_WEAK_FUNC(sub_8368ECC8);
PPC_FUNC_IMPL(__imp__sub_8368ECC8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32240
	ctx.r11.s64 = -2112880640;
	// lis r10,-31842
	ctx.r10.s64 = -2086797312;
	// addi r11,r11,5944
	ctx.r11.s64 = ctx.r11.s64 + 5944;
	// stw r11,22420(r10)
	PPC_STORE_U32(ctx.r10.u32 + 22420, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8368ECDC"))) PPC_WEAK_FUNC(sub_8368ECDC);
PPC_FUNC_IMPL(__imp__sub_8368ECDC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8368ECE0"))) PPC_WEAK_FUNC(sub_8368ECE0);
PPC_FUNC_IMPL(__imp__sub_8368ECE0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-31842
	ctx.r10.s64 = -2086797312;
	// addi r11,r11,25956
	ctx.r11.s64 = ctx.r11.s64 + 25956;
	// stw r11,22432(r10)
	PPC_STORE_U32(ctx.r10.u32 + 22432, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8368ECF4"))) PPC_WEAK_FUNC(sub_8368ECF4);
PPC_FUNC_IMPL(__imp__sub_8368ECF4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8368ECF8"))) PPC_WEAK_FUNC(sub_8368ECF8);
PPC_FUNC_IMPL(__imp__sub_8368ECF8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-31878
	ctx.r10.s64 = -2089156608;
	// addi r11,r11,25956
	ctx.r11.s64 = ctx.r11.s64 + 25956;
	// stw r11,-5584(r10)
	PPC_STORE_U32(ctx.r10.u32 + -5584, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8368ED0C"))) PPC_WEAK_FUNC(sub_8368ED0C);
PPC_FUNC_IMPL(__imp__sub_8368ED0C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8368ED10"))) PPC_WEAK_FUNC(sub_8368ED10);
PPC_FUNC_IMPL(__imp__sub_8368ED10) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-31842
	ctx.r10.s64 = -2086797312;
	// addi r11,r11,25956
	ctx.r11.s64 = ctx.r11.s64 + 25956;
	// stw r11,22992(r10)
	PPC_STORE_U32(ctx.r10.u32 + 22992, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8368ED24"))) PPC_WEAK_FUNC(sub_8368ED24);
PPC_FUNC_IMPL(__imp__sub_8368ED24) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8368ED28"))) PPC_WEAK_FUNC(sub_8368ED28);
PPC_FUNC_IMPL(__imp__sub_8368ED28) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-31841
	ctx.r10.s64 = -2086731776;
	// addi r11,r11,25956
	ctx.r11.s64 = ctx.r11.s64 + 25956;
	// stw r11,4724(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4724, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8368ED3C"))) PPC_WEAK_FUNC(sub_8368ED3C);
PPC_FUNC_IMPL(__imp__sub_8368ED3C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8368ED40"))) PPC_WEAK_FUNC(sub_8368ED40);
PPC_FUNC_IMPL(__imp__sub_8368ED40) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-31840
	ctx.r10.s64 = -2086666240;
	// addi r11,r11,25956
	ctx.r11.s64 = ctx.r11.s64 + 25956;
	// stw r11,-21860(r10)
	PPC_STORE_U32(ctx.r10.u32 + -21860, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8368ED54"))) PPC_WEAK_FUNC(sub_8368ED54);
PPC_FUNC_IMPL(__imp__sub_8368ED54) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8368ED58"))) PPC_WEAK_FUNC(sub_8368ED58);
PPC_FUNC_IMPL(__imp__sub_8368ED58) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-31840
	ctx.r10.s64 = -2086666240;
	// addi r11,r11,25956
	ctx.r11.s64 = ctx.r11.s64 + 25956;
	// stw r11,16324(r10)
	PPC_STORE_U32(ctx.r10.u32 + 16324, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8368ED6C"))) PPC_WEAK_FUNC(sub_8368ED6C);
PPC_FUNC_IMPL(__imp__sub_8368ED6C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8368ED70"))) PPC_WEAK_FUNC(sub_8368ED70);
PPC_FUNC_IMPL(__imp__sub_8368ED70) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-31839
	ctx.r10.s64 = -2086600704;
	// addi r11,r11,25956
	ctx.r11.s64 = ctx.r11.s64 + 25956;
	// stw r11,-12852(r10)
	PPC_STORE_U32(ctx.r10.u32 + -12852, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8368ED84"))) PPC_WEAK_FUNC(sub_8368ED84);
PPC_FUNC_IMPL(__imp__sub_8368ED84) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8368ED88"))) PPC_WEAK_FUNC(sub_8368ED88);
PPC_FUNC_IMPL(__imp__sub_8368ED88) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-31839
	ctx.r10.s64 = -2086600704;
	// addi r11,r11,25956
	ctx.r11.s64 = ctx.r11.s64 + 25956;
	// stw r11,25140(r10)
	PPC_STORE_U32(ctx.r10.u32 + 25140, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8368ED9C"))) PPC_WEAK_FUNC(sub_8368ED9C);
PPC_FUNC_IMPL(__imp__sub_8368ED9C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8368EDA0"))) PPC_WEAK_FUNC(sub_8368EDA0);
PPC_FUNC_IMPL(__imp__sub_8368EDA0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-31838
	ctx.r10.s64 = -2086535168;
	// addi r11,r11,25956
	ctx.r11.s64 = ctx.r11.s64 + 25956;
	// stw r11,-2404(r10)
	PPC_STORE_U32(ctx.r10.u32 + -2404, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8368EDB4"))) PPC_WEAK_FUNC(sub_8368EDB4);
PPC_FUNC_IMPL(__imp__sub_8368EDB4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8368EDB8"))) PPC_WEAK_FUNC(sub_8368EDB8);
PPC_FUNC_IMPL(__imp__sub_8368EDB8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-31838
	ctx.r10.s64 = -2086535168;
	// addi r11,r11,25956
	ctx.r11.s64 = ctx.r11.s64 + 25956;
	// stw r11,31460(r10)
	PPC_STORE_U32(ctx.r10.u32 + 31460, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8368EDCC"))) PPC_WEAK_FUNC(sub_8368EDCC);
PPC_FUNC_IMPL(__imp__sub_8368EDCC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8368EDD0"))) PPC_WEAK_FUNC(sub_8368EDD0);
PPC_FUNC_IMPL(__imp__sub_8368EDD0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-31837
	ctx.r10.s64 = -2086469632;
	// addi r11,r11,25956
	ctx.r11.s64 = ctx.r11.s64 + 25956;
	// stw r11,-452(r10)
	PPC_STORE_U32(ctx.r10.u32 + -452, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8368EDE4"))) PPC_WEAK_FUNC(sub_8368EDE4);
PPC_FUNC_IMPL(__imp__sub_8368EDE4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8368EDE8"))) PPC_WEAK_FUNC(sub_8368EDE8);
PPC_FUNC_IMPL(__imp__sub_8368EDE8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-31837
	ctx.r10.s64 = -2086469632;
	// addi r11,r11,25956
	ctx.r11.s64 = ctx.r11.s64 + 25956;
	// stw r11,30100(r10)
	PPC_STORE_U32(ctx.r10.u32 + 30100, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8368EDFC"))) PPC_WEAK_FUNC(sub_8368EDFC);
PPC_FUNC_IMPL(__imp__sub_8368EDFC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8368EE00"))) PPC_WEAK_FUNC(sub_8368EE00);
PPC_FUNC_IMPL(__imp__sub_8368EE00) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-31836
	ctx.r10.s64 = -2086404096;
	// addi r11,r11,25956
	ctx.r11.s64 = ctx.r11.s64 + 25956;
	// stw r11,-5172(r10)
	PPC_STORE_U32(ctx.r10.u32 + -5172, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8368EE14"))) PPC_WEAK_FUNC(sub_8368EE14);
PPC_FUNC_IMPL(__imp__sub_8368EE14) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8368EE18"))) PPC_WEAK_FUNC(sub_8368EE18);
PPC_FUNC_IMPL(__imp__sub_8368EE18) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-31836
	ctx.r10.s64 = -2086404096;
	// addi r11,r11,25956
	ctx.r11.s64 = ctx.r11.s64 + 25956;
	// stw r11,24612(r10)
	PPC_STORE_U32(ctx.r10.u32 + 24612, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8368EE2C"))) PPC_WEAK_FUNC(sub_8368EE2C);
PPC_FUNC_IMPL(__imp__sub_8368EE2C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8368EE30"))) PPC_WEAK_FUNC(sub_8368EE30);
PPC_FUNC_IMPL(__imp__sub_8368EE30) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-31835
	ctx.r10.s64 = -2086338560;
	// addi r11,r11,25956
	ctx.r11.s64 = ctx.r11.s64 + 25956;
	// stw r11,-16516(r10)
	PPC_STORE_U32(ctx.r10.u32 + -16516, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8368EE44"))) PPC_WEAK_FUNC(sub_8368EE44);
PPC_FUNC_IMPL(__imp__sub_8368EE44) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8368EE48"))) PPC_WEAK_FUNC(sub_8368EE48);
PPC_FUNC_IMPL(__imp__sub_8368EE48) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-31835
	ctx.r10.s64 = -2086338560;
	// addi r11,r11,25956
	ctx.r11.s64 = ctx.r11.s64 + 25956;
	// stw r11,6692(r10)
	PPC_STORE_U32(ctx.r10.u32 + 6692, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8368EE5C"))) PPC_WEAK_FUNC(sub_8368EE5C);
PPC_FUNC_IMPL(__imp__sub_8368EE5C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8368EE60"))) PPC_WEAK_FUNC(sub_8368EE60);
PPC_FUNC_IMPL(__imp__sub_8368EE60) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-31835
	ctx.r10.s64 = -2086338560;
	// addi r11,r11,25956
	ctx.r11.s64 = ctx.r11.s64 + 25956;
	// stw r11,29900(r10)
	PPC_STORE_U32(ctx.r10.u32 + 29900, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8368EE74"))) PPC_WEAK_FUNC(sub_8368EE74);
PPC_FUNC_IMPL(__imp__sub_8368EE74) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8368EE78"))) PPC_WEAK_FUNC(sub_8368EE78);
PPC_FUNC_IMPL(__imp__sub_8368EE78) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-31834
	ctx.r10.s64 = -2086273024;
	// addi r11,r11,25956
	ctx.r11.s64 = ctx.r11.s64 + 25956;
	// stw r11,-12476(r10)
	PPC_STORE_U32(ctx.r10.u32 + -12476, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8368EE8C"))) PPC_WEAK_FUNC(sub_8368EE8C);
PPC_FUNC_IMPL(__imp__sub_8368EE8C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8368EE90"))) PPC_WEAK_FUNC(sub_8368EE90);
PPC_FUNC_IMPL(__imp__sub_8368EE90) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-31834
	ctx.r10.s64 = -2086273024;
	// addi r11,r11,25956
	ctx.r11.s64 = ctx.r11.s64 + 25956;
	// stw r11,10300(r10)
	PPC_STORE_U32(ctx.r10.u32 + 10300, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8368EEA4"))) PPC_WEAK_FUNC(sub_8368EEA4);
PPC_FUNC_IMPL(__imp__sub_8368EEA4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8368EEA8"))) PPC_WEAK_FUNC(sub_8368EEA8);
PPC_FUNC_IMPL(__imp__sub_8368EEA8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-31833
	ctx.r10.s64 = -2086207488;
	// addi r11,r11,25956
	ctx.r11.s64 = ctx.r11.s64 + 25956;
	// stw r11,-32604(r10)
	PPC_STORE_U32(ctx.r10.u32 + -32604, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8368EEBC"))) PPC_WEAK_FUNC(sub_8368EEBC);
PPC_FUNC_IMPL(__imp__sub_8368EEBC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8368EEC0"))) PPC_WEAK_FUNC(sub_8368EEC0);
PPC_FUNC_IMPL(__imp__sub_8368EEC0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-31833
	ctx.r10.s64 = -2086207488;
	// addi r11,r11,25956
	ctx.r11.s64 = ctx.r11.s64 + 25956;
	// stw r11,-9876(r10)
	PPC_STORE_U32(ctx.r10.u32 + -9876, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8368EED4"))) PPC_WEAK_FUNC(sub_8368EED4);
PPC_FUNC_IMPL(__imp__sub_8368EED4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8368EED8"))) PPC_WEAK_FUNC(sub_8368EED8);
PPC_FUNC_IMPL(__imp__sub_8368EED8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-31833
	ctx.r10.s64 = -2086207488;
	// addi r11,r11,25956
	ctx.r11.s64 = ctx.r11.s64 + 25956;
	// stw r11,11364(r10)
	PPC_STORE_U32(ctx.r10.u32 + 11364, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8368EEEC"))) PPC_WEAK_FUNC(sub_8368EEEC);
PPC_FUNC_IMPL(__imp__sub_8368EEEC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8368EEF0"))) PPC_WEAK_FUNC(sub_8368EEF0);
PPC_FUNC_IMPL(__imp__sub_8368EEF0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-31833
	ctx.r10.s64 = -2086207488;
	// addi r11,r11,25956
	ctx.r11.s64 = ctx.r11.s64 + 25956;
	// stw r11,32604(r10)
	PPC_STORE_U32(ctx.r10.u32 + 32604, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8368EF04"))) PPC_WEAK_FUNC(sub_8368EF04);
PPC_FUNC_IMPL(__imp__sub_8368EF04) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8368EF08"))) PPC_WEAK_FUNC(sub_8368EF08);
PPC_FUNC_IMPL(__imp__sub_8368EF08) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-31832
	ctx.r10.s64 = -2086141952;
	// addi r11,r11,25956
	ctx.r11.s64 = ctx.r11.s64 + 25956;
	// stw r11,-11692(r10)
	PPC_STORE_U32(ctx.r10.u32 + -11692, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8368EF1C"))) PPC_WEAK_FUNC(sub_8368EF1C);
PPC_FUNC_IMPL(__imp__sub_8368EF1C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8368EF20"))) PPC_WEAK_FUNC(sub_8368EF20);
PPC_FUNC_IMPL(__imp__sub_8368EF20) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-31832
	ctx.r10.s64 = -2086141952;
	// addi r11,r11,25956
	ctx.r11.s64 = ctx.r11.s64 + 25956;
	// stw r11,9548(r10)
	PPC_STORE_U32(ctx.r10.u32 + 9548, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8368EF34"))) PPC_WEAK_FUNC(sub_8368EF34);
PPC_FUNC_IMPL(__imp__sub_8368EF34) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8368EF38"))) PPC_WEAK_FUNC(sub_8368EF38);
PPC_FUNC_IMPL(__imp__sub_8368EF38) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-31832
	ctx.r10.s64 = -2086141952;
	// addi r11,r11,25956
	ctx.r11.s64 = ctx.r11.s64 + 25956;
	// stw r11,30260(r10)
	PPC_STORE_U32(ctx.r10.u32 + 30260, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8368EF4C"))) PPC_WEAK_FUNC(sub_8368EF4C);
PPC_FUNC_IMPL(__imp__sub_8368EF4C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8368EF50"))) PPC_WEAK_FUNC(sub_8368EF50);
PPC_FUNC_IMPL(__imp__sub_8368EF50) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-31831
	ctx.r10.s64 = -2086076416;
	// addi r11,r11,25956
	ctx.r11.s64 = ctx.r11.s64 + 25956;
	// stw r11,-14420(r10)
	PPC_STORE_U32(ctx.r10.u32 + -14420, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8368EF64"))) PPC_WEAK_FUNC(sub_8368EF64);
PPC_FUNC_IMPL(__imp__sub_8368EF64) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8368EF68"))) PPC_WEAK_FUNC(sub_8368EF68);
PPC_FUNC_IMPL(__imp__sub_8368EF68) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-31831
	ctx.r10.s64 = -2086076416;
	// addi r11,r11,25956
	ctx.r11.s64 = ctx.r11.s64 + 25956;
	// stw r11,4948(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4948, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8368EF7C"))) PPC_WEAK_FUNC(sub_8368EF7C);
PPC_FUNC_IMPL(__imp__sub_8368EF7C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8368EF80"))) PPC_WEAK_FUNC(sub_8368EF80);
PPC_FUNC_IMPL(__imp__sub_8368EF80) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-31831
	ctx.r10.s64 = -2086076416;
	// addi r11,r11,25956
	ctx.r11.s64 = ctx.r11.s64 + 25956;
	// stw r11,24316(r10)
	PPC_STORE_U32(ctx.r10.u32 + 24316, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8368EF94"))) PPC_WEAK_FUNC(sub_8368EF94);
PPC_FUNC_IMPL(__imp__sub_8368EF94) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8368EF98"))) PPC_WEAK_FUNC(sub_8368EF98);
PPC_FUNC_IMPL(__imp__sub_8368EF98) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-31830
	ctx.r10.s64 = -2086010880;
	// addi r11,r11,25956
	ctx.r11.s64 = ctx.r11.s64 + 25956;
	// stw r11,-24252(r10)
	PPC_STORE_U32(ctx.r10.u32 + -24252, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8368EFAC"))) PPC_WEAK_FUNC(sub_8368EFAC);
PPC_FUNC_IMPL(__imp__sub_8368EFAC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8368EFB0"))) PPC_WEAK_FUNC(sub_8368EFB0);
PPC_FUNC_IMPL(__imp__sub_8368EFB0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-31830
	ctx.r10.s64 = -2086010880;
	// addi r11,r11,25956
	ctx.r11.s64 = ctx.r11.s64 + 25956;
	// stw r11,-7284(r10)
	PPC_STORE_U32(ctx.r10.u32 + -7284, ctx.r11.u32);
	// blr 
	return;
}

