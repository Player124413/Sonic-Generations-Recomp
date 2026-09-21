#include "ppc_recomp_shared.h"

__attribute__((alias("__imp__sub_82A2D254"))) PPC_WEAK_FUNC(sub_82A2D254);
PPC_FUNC_IMPL(__imp__sub_82A2D254) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A2D258"))) PPC_WEAK_FUNC(sub_82A2D258);
PPC_FUNC_IMPL(__imp__sub_82A2D258) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,132(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 132);
	// lwz r3,0(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A2D264"))) PPC_WEAK_FUNC(sub_82A2D264);
PPC_FUNC_IMPL(__imp__sub_82A2D264) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A2D268"))) PPC_WEAK_FUNC(sub_82A2D268);
PPC_FUNC_IMPL(__imp__sub_82A2D268) {
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
	// lwz r11,132(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 132);
	// addi r3,r11,44
	ctx.r3.s64 = ctx.r11.s64 + 44;
	// bl 0x82e01de8
	ctx.lr = 0x82A2D280;
	sub_82E01DE8(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r3,r11,27,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A2D29C"))) PPC_WEAK_FUNC(sub_82A2D29C);
PPC_FUNC_IMPL(__imp__sub_82A2D29C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A2D2A0"))) PPC_WEAK_FUNC(sub_82A2D2A0);
PPC_FUNC_IMPL(__imp__sub_82A2D2A0) {
	PPC_FUNC_PROLOGUE();
	// clrlwi r3,r3,24
	ctx.r3.u64 = ctx.r3.u32 & 0xFF;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A2D2A8"))) PPC_WEAK_FUNC(sub_82A2D2A8);
PPC_FUNC_IMPL(__imp__sub_82A2D2A8) {
	PPC_FUNC_PROLOGUE();
	// rlwinm r3,r3,24,24,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 24) & 0xFF;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A2D2B0"))) PPC_WEAK_FUNC(sub_82A2D2B0);
PPC_FUNC_IMPL(__imp__sub_82A2D2B0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x833a01a4
	ctx.lr = 0x82A2D2B8;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31843
	ctx.r11.s64 = -2086862848;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// addi r29,r11,-23984
	ctx.r29.s64 = ctx.r11.s64 + -23984;
	// li r30,0
	ctx.r30.s64 = 0;
	// mr r31,r29
	ctx.r31.u64 = ctx.r29.u64;
loc_82A2D2D0:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82e023a8
	ctx.lr = 0x82A2D2DC;
	sub_82E023A8(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82a2d3ec
	if (!ctx.cr0.eq) goto loc_82A2D3EC;
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// cmplwi cr6,r30,33
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 33, ctx.xer);
	// blt cr6,0x82a2d2d0
	if (ctx.cr6.lt) goto loc_82A2D2D0;
	// mr r31,r29
	ctx.r31.u64 = ctx.r29.u64;
	// li r30,0
	ctx.r30.s64 = 0;
loc_82A2D2FC:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82e01bf8
	ctx.lr = 0x82A2D304;
	sub_82E01BF8(ctx, base);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82e01bf8
	ctx.lr = 0x82A2D310;
	sub_82E01BF8(ctx, base);
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// li r5,4
	ctx.r5.s64 = 4;
	// bl 0x833a31f0
	ctx.lr = 0x82A2D31C;
	sub_833A31F0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x82a2d3ec
	if (ctx.cr0.eq) goto loc_82A2D3EC;
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// cmplwi cr6,r30,17
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 17, ctx.xer);
	// ble cr6,0x82a2d2fc
	if (!ctx.cr6.gt) goto loc_82A2D2FC;
	// li r30,23
	ctx.r30.s64 = 23;
	// addi r31,r29,92
	ctx.r31.s64 = ctx.r29.s64 + 92;
loc_82A2D33C:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82e01bf8
	ctx.lr = 0x82A2D344;
	sub_82E01BF8(ctx, base);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82e01bf8
	ctx.lr = 0x82A2D350;
	sub_82E01BF8(ctx, base);
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// li r5,3
	ctx.r5.s64 = 3;
	// bl 0x833a31f0
	ctx.lr = 0x82A2D35C;
	sub_833A31F0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x82a2d3ec
	if (ctx.cr0.eq) goto loc_82A2D3EC;
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// cmplwi cr6,r30,26
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 26, ctx.xer);
	// ble cr6,0x82a2d33c
	if (!ctx.cr6.gt) goto loc_82A2D33C;
	// li r30,20
	ctx.r30.s64 = 20;
	// addi r31,r29,80
	ctx.r31.s64 = ctx.r29.s64 + 80;
loc_82A2D37C:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82e01bf8
	ctx.lr = 0x82A2D384;
	sub_82E01BF8(ctx, base);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82e01bf8
	ctx.lr = 0x82A2D390;
	sub_82E01BF8(ctx, base);
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// li r5,3
	ctx.r5.s64 = 3;
	// bl 0x833a31f0
	ctx.lr = 0x82A2D39C;
	sub_833A31F0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x82a2d3ec
	if (ctx.cr0.eq) goto loc_82A2D3EC;
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// cmplwi cr6,r30,22
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 22, ctx.xer);
	// ble cr6,0x82a2d37c
	if (!ctx.cr6.gt) goto loc_82A2D37C;
	// addi r3,r29,108
	ctx.r3.s64 = ctx.r29.s64 + 108;
	// bl 0x82e01bf8
	ctx.lr = 0x82A2D3BC;
	sub_82E01BF8(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82e01bf8
	ctx.lr = 0x82A2D3C8;
	sub_82E01BF8(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// li r5,3
	ctx.r5.s64 = 3;
	// bl 0x833a31f0
	ctx.lr = 0x82A2D3D4;
	sub_833A31F0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// li r3,27
	ctx.r3.s64 = 27;
	// beq 0x82a2d3e4
	if (ctx.cr0.eq) goto loc_82A2D3E4;
	// li r3,32
	ctx.r3.s64 = 32;
loc_82A2D3E4:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x833a01f4
	__restgprlr_27(ctx, base);
	return;
loc_82A2D3EC:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// b 0x82a2d3e4
	goto loc_82A2D3E4;
}

__attribute__((alias("__imp__sub_82A2D3F4"))) PPC_WEAK_FUNC(sub_82A2D3F4);
PPC_FUNC_IMPL(__imp__sub_82A2D3F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A2D3F8"))) PPC_WEAK_FUNC(sub_82A2D3F8);
PPC_FUNC_IMPL(__imp__sub_82A2D3F8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31843
	ctx.r11.s64 = -2086862848;
	// rlwinm r10,r3,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r11,r11,-23984
	ctx.r11.s64 = ctx.r11.s64 + -23984;
	// add r3,r10,r11
	ctx.r3.u64 = ctx.r10.u64 + ctx.r11.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A2D40C"))) PPC_WEAK_FUNC(sub_82A2D40C);
PPC_FUNC_IMPL(__imp__sub_82A2D40C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A2D410"))) PPC_WEAK_FUNC(sub_82A2D410);
PPC_FUNC_IMPL(__imp__sub_82A2D410) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x833a01ac
	ctx.lr = 0x82A2D418;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,132(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 132);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// addi r3,r11,32
	ctx.r3.s64 = ctx.r11.s64 + 32;
	// mr r29,r6
	ctx.r29.u64 = ctx.r6.u64;
	// bl 0x82e02378
	ctx.lr = 0x82A2D434;
	sub_82E02378(ctx, base);
	// lwz r11,132(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 132);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r11,36
	ctx.r3.s64 = ctx.r11.s64 + 36;
	// bl 0x82e02378
	ctx.lr = 0x82A2D444;
	sub_82E02378(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r4,r11,3189
	ctx.r4.s64 = ctx.r11.s64 + 3189;
	// lwz r11,132(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 132);
	// stw r29,40(r11)
	PPC_STORE_U32(ctx.r11.u32 + 40, ctx.r29.u32);
	// lwz r11,132(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 132);
	// addi r3,r11,44
	ctx.r3.s64 = ctx.r11.s64 + 44;
	// bl 0x82e02340
	ctx.lr = 0x82A2D460;
	sub_82E02340(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x833a01fc
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82A2D468"))) PPC_WEAK_FUNC(sub_82A2D468);
PPC_FUNC_IMPL(__imp__sub_82A2D468) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,132(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 132);
	// addi r3,r11,32
	ctx.r3.s64 = ctx.r11.s64 + 32;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A2D474"))) PPC_WEAK_FUNC(sub_82A2D474);
PPC_FUNC_IMPL(__imp__sub_82A2D474) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A2D478"))) PPC_WEAK_FUNC(sub_82A2D478);
PPC_FUNC_IMPL(__imp__sub_82A2D478) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,132(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 132);
	// addi r3,r11,36
	ctx.r3.s64 = ctx.r11.s64 + 36;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A2D484"))) PPC_WEAK_FUNC(sub_82A2D484);
PPC_FUNC_IMPL(__imp__sub_82A2D484) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A2D488"))) PPC_WEAK_FUNC(sub_82A2D488);
PPC_FUNC_IMPL(__imp__sub_82A2D488) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,132(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 132);
	// lwz r3,40(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 40);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A2D494"))) PPC_WEAK_FUNC(sub_82A2D494);
PPC_FUNC_IMPL(__imp__sub_82A2D494) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A2D498"))) PPC_WEAK_FUNC(sub_82A2D498);
PPC_FUNC_IMPL(__imp__sub_82A2D498) {
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
	// lwz r11,132(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 132);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// addi r3,r11,44
	ctx.r3.s64 = ctx.r11.s64 + 44;
	// bl 0x82e02378
	ctx.lr = 0x82A2D4C0;
	sub_82E02378(ctx, base);
	// lwz r11,132(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 132);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r11,48
	ctx.r3.s64 = ctx.r11.s64 + 48;
	// bl 0x82e02378
	ctx.lr = 0x82A2D4D0;
	sub_82E02378(ctx, base);
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

__attribute__((alias("__imp__sub_82A2D4E8"))) PPC_WEAK_FUNC(sub_82A2D4E8);
PPC_FUNC_IMPL(__imp__sub_82A2D4E8) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,132(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 132);
	// addi r3,r11,44
	ctx.r3.s64 = ctx.r11.s64 + 44;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A2D4F4"))) PPC_WEAK_FUNC(sub_82A2D4F4);
PPC_FUNC_IMPL(__imp__sub_82A2D4F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A2D4F8"))) PPC_WEAK_FUNC(sub_82A2D4F8);
PPC_FUNC_IMPL(__imp__sub_82A2D4F8) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,132(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 132);
	// addi r3,r11,48
	ctx.r3.s64 = ctx.r11.s64 + 48;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A2D504"))) PPC_WEAK_FUNC(sub_82A2D504);
PPC_FUNC_IMPL(__imp__sub_82A2D504) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A2D508"))) PPC_WEAK_FUNC(sub_82A2D508);
PPC_FUNC_IMPL(__imp__sub_82A2D508) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// srawi r10,r11,1
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1) != 0);
	ctx.r10.s64 = ctx.r11.s32 >> 1;
	// addze r3,r10
	temp.s64 = ctx.r10.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r10.u32;
	ctx.r3.s64 = temp.s64;
	// blt 0x82a2d530
	if (ctx.cr0.lt) goto loc_82A2D530;
	// cmpwi cr6,r11,17
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 17, ctx.xer);
	// bgt cr6,0x82a2d530
	if (ctx.cr6.gt) goto loc_82A2D530;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x82a2d530
	if (ctx.cr6.lt) goto loc_82A2D530;
	// cmpwi cr6,r3,9
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 9, ctx.xer);
	// bltlr cr6
	if (ctx.cr6.lt) return;
loc_82A2D530:
	// li r3,-1
	ctx.r3.s64 = -1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A2D538"))) PPC_WEAK_FUNC(sub_82A2D538);
PPC_FUNC_IMPL(__imp__sub_82A2D538) {
	PPC_FUNC_PROLOGUE();
	// cmplwi cr6,r3,9
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 9, ctx.xer);
	// rlwinm r3,r3,1,0,30
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 1) & 0xFFFFFFFE;
	// bltlr cr6
	if (ctx.cr6.lt) return;
	// li r3,-1
	ctx.r3.s64 = -1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A2D54C"))) PPC_WEAK_FUNC(sub_82A2D54C);
PPC_FUNC_IMPL(__imp__sub_82A2D54C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A2D550"))) PPC_WEAK_FUNC(sub_82A2D550);
PPC_FUNC_IMPL(__imp__sub_82A2D550) {
	PPC_FUNC_PROLOGUE();
	// cmplwi cr6,r3,9
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 9, ctx.xer);
	// bge cr6,0x82a2d564
	if (!ctx.cr6.lt) goto loc_82A2D564;
	// rlwinm r11,r3,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r3,r11,1
	ctx.r3.s64 = ctx.r11.s64 + 1;
	// blr 
	return;
loc_82A2D564:
	// li r3,-1
	ctx.r3.s64 = -1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A2D56C"))) PPC_WEAK_FUNC(sub_82A2D56C);
PPC_FUNC_IMPL(__imp__sub_82A2D56C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A2D570"))) PPC_WEAK_FUNC(sub_82A2D570);
PPC_FUNC_IMPL(__imp__sub_82A2D570) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,128(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 128);
	// lis r10,0
	ctx.r10.s64 = 0;
	// ori r10,r10,41164
	ctx.r10.u64 = ctx.r10.u64 | 41164;
	// add r11,r11,r4
	ctx.r11.u64 = ctx.r11.u64 + ctx.r4.u64;
	// lbzx r3,r11,r10
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r11.u32 + ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A2D588"))) PPC_WEAK_FUNC(sub_82A2D588);
PPC_FUNC_IMPL(__imp__sub_82A2D588) {
	PPC_FUNC_PROLOGUE();
	// addi r11,r4,10303
	ctx.r11.s64 = ctx.r4.s64 + 10303;
	// lwz r10,128(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 128);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r3,r11,r10
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A2D59C"))) PPC_WEAK_FUNC(sub_82A2D59C);
PPC_FUNC_IMPL(__imp__sub_82A2D59C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A2D5A0"))) PPC_WEAK_FUNC(sub_82A2D5A0);
PPC_FUNC_IMPL(__imp__sub_82A2D5A0) {
	PPC_FUNC_PROLOGUE();
	// addi r11,r4,10303
	ctx.r11.s64 = ctx.r4.s64 + 10303;
	// lwz r10,128(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 128);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r9,r11,r10
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// stwx r9,r11,r10
	PPC_STORE_U32(ctx.r11.u32 + ctx.r10.u32, ctx.r9.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A2D5BC"))) PPC_WEAK_FUNC(sub_82A2D5BC);
PPC_FUNC_IMPL(__imp__sub_82A2D5BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A2D5C0"))) PPC_WEAK_FUNC(sub_82A2D5C0);
PPC_FUNC_IMPL(__imp__sub_82A2D5C0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lwz r11,132(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 132);
	// lwz r11,496(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 496);
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

__attribute__((alias("__imp__sub_82A2D5D4"))) PPC_WEAK_FUNC(sub_82A2D5D4);
PPC_FUNC_IMPL(__imp__sub_82A2D5D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A2D5D8"))) PPC_WEAK_FUNC(sub_82A2D5D8);
PPC_FUNC_IMPL(__imp__sub_82A2D5D8) {
	PPC_FUNC_PROLOGUE();
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// bne cr6,0x82a2d5f0
	if (!ctx.cr6.eq) goto loc_82A2D5F0;
	// lwz r11,128(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 128);
	// addis r3,r11,1
	ctx.r3.s64 = ctx.r11.s64 + 65536;
	// addi r3,r3,-23896
	ctx.r3.s64 = ctx.r3.s64 + -23896;
	// blr 
	return;
loc_82A2D5F0:
	// cmpwi cr6,r4,1
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 1, ctx.xer);
	// bne cr6,0x82a2d608
	if (!ctx.cr6.eq) goto loc_82A2D608;
	// lwz r11,128(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 128);
	// addis r3,r11,1
	ctx.r3.s64 = ctx.r11.s64 + 65536;
	// addi r3,r3,-23880
	ctx.r3.s64 = ctx.r3.s64 + -23880;
	// blr 
	return;
loc_82A2D608:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A2D610"))) PPC_WEAK_FUNC(sub_82A2D610);
PPC_FUNC_IMPL(__imp__sub_82A2D610) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,128(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 128);
	// addis r3,r11,1
	ctx.r3.s64 = ctx.r11.s64 + 65536;
	// addi r3,r3,-23864
	ctx.r3.s64 = ctx.r3.s64 + -23864;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A2D620"))) PPC_WEAK_FUNC(sub_82A2D620);
PPC_FUNC_IMPL(__imp__sub_82A2D620) {
	PPC_FUNC_PROLOGUE();
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// bne cr6,0x82a2d638
	if (!ctx.cr6.eq) goto loc_82A2D638;
	// lwz r11,128(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 128);
	// addis r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 65536;
	// addi r11,r11,-23896
	ctx.r11.s64 = ctx.r11.s64 + -23896;
	// b 0x82a2d654
	goto loc_82A2D654;
loc_82A2D638:
	// cmpwi cr6,r4,1
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 1, ctx.xer);
	// bne cr6,0x82a2d650
	if (!ctx.cr6.eq) goto loc_82A2D650;
	// lwz r11,128(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 128);
	// addis r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 65536;
	// addi r11,r11,-23880
	ctx.r11.s64 = ctx.r11.s64 + -23880;
	// b 0x82a2d654
	goto loc_82A2D654;
loc_82A2D650:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82A2D654:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82a2d664
	if (ctx.cr6.eq) goto loc_82A2D664;
	// lhz r3,4(r11)
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r11.u32 + 4);
	// blr 
	return;
loc_82A2D664:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A2D66C"))) PPC_WEAK_FUNC(sub_82A2D66C);
PPC_FUNC_IMPL(__imp__sub_82A2D66C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A2D670"))) PPC_WEAK_FUNC(sub_82A2D670);
PPC_FUNC_IMPL(__imp__sub_82A2D670) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,132(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 132);
	// lwz r11,496(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 496);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// clrlwi r11,r4,24
	ctx.r11.u64 = ctx.r4.u32 & 0xFF;
	// lwz r10,136(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 136);
	// li r9,1
	ctx.r9.s64 = 1;
	// mulli r11,r11,24
	ctx.r11.s64 = ctx.r11.s64 * 24;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stb r9,27(r11)
	PPC_STORE_U8(ctx.r11.u32 + 27, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A2D69C"))) PPC_WEAK_FUNC(sub_82A2D69C);
PPC_FUNC_IMPL(__imp__sub_82A2D69C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A2D6A0"))) PPC_WEAK_FUNC(sub_82A2D6A0);
PPC_FUNC_IMPL(__imp__sub_82A2D6A0) {
	PPC_FUNC_PROLOGUE();
	// lwz r10,132(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 132);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// lwz r10,496(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 496);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// clrlwi r9,r4,24
	ctx.r9.u64 = ctx.r4.u32 & 0xFF;
	// lwz r10,136(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 136);
	// mulli r11,r9,24
	ctx.r11.s64 = ctx.r9.s64 * 24;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lbz r11,27(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 27);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A2D6DC"))) PPC_WEAK_FUNC(sub_82A2D6DC);
PPC_FUNC_IMPL(__imp__sub_82A2D6DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A2D6E0"))) PPC_WEAK_FUNC(sub_82A2D6E0);
PPC_FUNC_IMPL(__imp__sub_82A2D6E0) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,132(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 132);
	// lwz r3,52(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 52);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A2D6EC"))) PPC_WEAK_FUNC(sub_82A2D6EC);
PPC_FUNC_IMPL(__imp__sub_82A2D6EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A2D6F0"))) PPC_WEAK_FUNC(sub_82A2D6F0);
PPC_FUNC_IMPL(__imp__sub_82A2D6F0) {
	PPC_FUNC_PROLOGUE();
	// lis r10,0
	ctx.r10.s64 = 0;
	// lwz r11,128(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 128);
	// ori r10,r10,40928
	ctx.r10.u64 = ctx.r10.u64 | 40928;
	// lwzx r3,r11,r10
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A2D704"))) PPC_WEAK_FUNC(sub_82A2D704);
PPC_FUNC_IMPL(__imp__sub_82A2D704) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A2D708"))) PPC_WEAK_FUNC(sub_82A2D708);
PPC_FUNC_IMPL(__imp__sub_82A2D708) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lwz r11,132(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 132);
	// li r10,1
	ctx.r10.s64 = 1;
	// slw r10,r10,r4
	ctx.r10.u64 = ctx.r4.u8 & 0x20 ? 0 : (ctx.r10.u32 << (ctx.r4.u8 & 0x3F));
	// lwz r11,56(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 56);
	// and r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 & ctx.r10.u64;
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

__attribute__((alias("__imp__sub_82A2D728"))) PPC_WEAK_FUNC(sub_82A2D728);
PPC_FUNC_IMPL(__imp__sub_82A2D728) {
	PPC_FUNC_PROLOGUE();
	// addi r11,r4,10258
	ctx.r11.s64 = ctx.r4.s64 + 10258;
	// lwz r10,128(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 128);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r3,r11,r10
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A2D73C"))) PPC_WEAK_FUNC(sub_82A2D73C);
PPC_FUNC_IMPL(__imp__sub_82A2D73C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A2D740"))) PPC_WEAK_FUNC(sub_82A2D740);
PPC_FUNC_IMPL(__imp__sub_82A2D740) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lwz r11,132(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 132);
	// li r10,1
	ctx.r10.s64 = 1;
	// slw r10,r10,r4
	ctx.r10.u64 = ctx.r4.u8 & 0x20 ? 0 : (ctx.r10.u32 << (ctx.r4.u8 & 0x3F));
	// lwz r11,60(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 60);
	// and r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 & ctx.r10.u64;
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

__attribute__((alias("__imp__sub_82A2D760"))) PPC_WEAK_FUNC(sub_82A2D760);
PPC_FUNC_IMPL(__imp__sub_82A2D760) {
	PPC_FUNC_PROLOGUE();
	// lis r10,0
	ctx.r10.s64 = 0;
	// lwz r11,128(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 128);
	// ori r10,r10,41160
	ctx.r10.u64 = ctx.r10.u64 | 41160;
	// lwzx r10,r11,r10
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// cmpw cr6,r4,r10
	ctx.cr6.compare<int32_t>(ctx.r4.s32, ctx.r10.s32, ctx.xer);
	// bgt cr6,0x82a2d788
	if (ctx.cr6.gt) goto loc_82A2D788;
	// addi r10,r4,10272
	ctx.r10.s64 = ctx.r4.s64 + 10272;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r3,r10,r11
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// blr 
	return;
loc_82A2D788:
	// li r3,32
	ctx.r3.s64 = 32;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A2D790"))) PPC_WEAK_FUNC(sub_82A2D790);
PPC_FUNC_IMPL(__imp__sub_82A2D790) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,132(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 132);
	// stw r4,52(r11)
	PPC_STORE_U32(ctx.r11.u32 + 52, ctx.r4.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A2D79C"))) PPC_WEAK_FUNC(sub_82A2D79C);
PPC_FUNC_IMPL(__imp__sub_82A2D79C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A2D7A0"))) PPC_WEAK_FUNC(sub_82A2D7A0);
PPC_FUNC_IMPL(__imp__sub_82A2D7A0) {
	PPC_FUNC_PROLOGUE();
	// lis r10,0
	ctx.r10.s64 = 0;
	// lwz r11,128(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 128);
	// ori r10,r10,40928
	ctx.r10.u64 = ctx.r10.u64 | 40928;
	// stwx r4,r11,r10
	PPC_STORE_U32(ctx.r11.u32 + ctx.r10.u32, ctx.r4.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A2D7B4"))) PPC_WEAK_FUNC(sub_82A2D7B4);
PPC_FUNC_IMPL(__imp__sub_82A2D7B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A2D7B8"))) PPC_WEAK_FUNC(sub_82A2D7B8);
PPC_FUNC_IMPL(__imp__sub_82A2D7B8) {
	PPC_FUNC_PROLOGUE();
	// clrlwi. r11,r5,24
	ctx.r11.u64 = ctx.r5.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// lwz r11,132(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 132);
	// li r10,1
	ctx.r10.s64 = 1;
	// lwz r9,56(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 56);
	// slw r10,r10,r4
	ctx.r10.u64 = ctx.r4.u8 & 0x20 ? 0 : (ctx.r10.u32 << (ctx.r4.u8 & 0x3F));
	// beq 0x82a2d7d8
	if (ctx.cr0.eq) goto loc_82A2D7D8;
	// or r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 | ctx.r9.u64;
	// b 0x82a2d7dc
	goto loc_82A2D7DC;
loc_82A2D7D8:
	// andc r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 & ~ctx.r10.u64;
loc_82A2D7DC:
	// stw r10,56(r11)
	PPC_STORE_U32(ctx.r11.u32 + 56, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A2D7E4"))) PPC_WEAK_FUNC(sub_82A2D7E4);
PPC_FUNC_IMPL(__imp__sub_82A2D7E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A2D7E8"))) PPC_WEAK_FUNC(sub_82A2D7E8);
PPC_FUNC_IMPL(__imp__sub_82A2D7E8) {
	PPC_FUNC_PROLOGUE();
	// addi r11,r4,10258
	ctx.r11.s64 = ctx.r4.s64 + 10258;
	// lwz r10,128(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 128);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r5,r11,r10
	PPC_STORE_U32(ctx.r11.u32 + ctx.r10.u32, ctx.r5.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A2D7FC"))) PPC_WEAK_FUNC(sub_82A2D7FC);
PPC_FUNC_IMPL(__imp__sub_82A2D7FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A2D800"))) PPC_WEAK_FUNC(sub_82A2D800);
PPC_FUNC_IMPL(__imp__sub_82A2D800) {
	PPC_FUNC_PROLOGUE();
	// clrlwi. r11,r5,24
	ctx.r11.u64 = ctx.r5.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// lwz r11,132(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 132);
	// li r10,1
	ctx.r10.s64 = 1;
	// lwz r9,60(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 60);
	// slw r10,r10,r4
	ctx.r10.u64 = ctx.r4.u8 & 0x20 ? 0 : (ctx.r10.u32 << (ctx.r4.u8 & 0x3F));
	// beq 0x82a2d820
	if (ctx.cr0.eq) goto loc_82A2D820;
	// or r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 | ctx.r9.u64;
	// b 0x82a2d824
	goto loc_82A2D824;
loc_82A2D820:
	// andc r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 & ~ctx.r10.u64;
loc_82A2D824:
	// stw r10,60(r11)
	PPC_STORE_U32(ctx.r11.u32 + 60, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A2D82C"))) PPC_WEAK_FUNC(sub_82A2D82C);
PPC_FUNC_IMPL(__imp__sub_82A2D82C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A2D830"))) PPC_WEAK_FUNC(sub_82A2D830);
PPC_FUNC_IMPL(__imp__sub_82A2D830) {
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
	// bl 0x8368f804
	ctx.lr = 0x82A2D840;
	__imp__XGetGameRegion(ctx, base);
	// addi r11,r3,-255
	ctx.r11.s64 = ctx.r3.s64 + -255;
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r3,r11,27,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A2D85C"))) PPC_WEAK_FUNC(sub_82A2D85C);
PPC_FUNC_IMPL(__imp__sub_82A2D85C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A2D860"))) PPC_WEAK_FUNC(sub_82A2D860);
PPC_FUNC_IMPL(__imp__sub_82A2D860) {
	PPC_FUNC_PROLOGUE();
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r9,r11,8
	ctx.r9.s64 = ctx.r11.s64 + 8;
	// lis r11,-31885
	ctx.r11.s64 = -2089615360;
	// li r8,1
	ctx.r8.s64 = 1;
	// addi r7,r11,9400
	ctx.r7.s64 = ctx.r11.s64 + 9400;
loc_82A2D878:
	// ld r11,0(r9)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r9.u32 + 0);
	// b 0x82a2d894
	goto loc_82A2D894;
loc_82A2D880:
	// clrlwi r10,r11,28
	ctx.r10.u64 = ctx.r11.u32 & 0xF;
	// rldicl r11,r11,60,4
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u64, 60) & 0xFFFFFFFFFFFFFFF;
	// lbzx r10,r10,r7
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r10.u32 + ctx.r7.u32);
	// extsb r10,r10
	ctx.r10.s64 = ctx.r10.s8;
	// add r3,r10,r3
	ctx.r3.u64 = ctx.r10.u64 + ctx.r3.u64;
loc_82A2D894:
	// cmpldi cr6,r11,0
	ctx.cr6.compare<uint64_t>(ctx.r11.u64, 0, ctx.xer);
	// bne cr6,0x82a2d880
	if (!ctx.cr6.eq) goto loc_82A2D880;
	// addic. r8,r8,-1
	ctx.xer.ca = ctx.r8.u32 > 0;
	ctx.r8.s64 = ctx.r8.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// addi r9,r9,-8
	ctx.r9.s64 = ctx.r9.s64 + -8;
	// bge 0x82a2d878
	if (!ctx.cr0.lt) goto loc_82A2D878;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A2D8AC"))) PPC_WEAK_FUNC(sub_82A2D8AC);
PPC_FUNC_IMPL(__imp__sub_82A2D8AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A2D8B0"))) PPC_WEAK_FUNC(sub_82A2D8B0);
PPC_FUNC_IMPL(__imp__sub_82A2D8B0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// li r11,25
	ctx.r11.s64 = 25;
	// addi r10,r3,4
	ctx.r10.s64 = ctx.r3.s64 + 4;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r9,-1
	ctx.r9.s64 = -1;
	// stw r8,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r8.u32);
	// addi r10,r10,-4
	ctx.r10.s64 = ctx.r10.s64 + -4;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
loc_82A2D8CC:
	// stwu r9,4(r10)
	ea = 4 + ctx.r10.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r10.u32 = ea;
	// bdnz 0x82a2d8cc
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82A2D8CC;
	// li r11,10
	ctx.r11.s64 = 10;
	// addi r10,r3,104
	ctx.r10.s64 = ctx.r3.s64 + 104;
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r10,r10,-4
	ctx.r10.s64 = ctx.r10.s64 + -4;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
loc_82A2D8E8:
	// stwu r9,4(r10)
	ea = 4 + ctx.r10.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r10.u32 = ea;
	// bdnz 0x82a2d8e8
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82A2D8E8;
	// li r9,5
	ctx.r9.s64 = 5;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r10,r3,100
	ctx.r10.s64 = ctx.r3.s64 + 100;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_82A2D900:
	// li r8,900
	ctx.r8.s64 = 900;
	// addi r9,r11,901
	ctx.r9.s64 = ctx.r11.s64 + 901;
	// stw r8,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r8.u32);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stwu r9,8(r10)
	ea = 8 + ctx.r10.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r10.u32 = ea;
	// bdnz 0x82a2d900
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82A2D900;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A2D91C"))) PPC_WEAK_FUNC(sub_82A2D91C);
PPC_FUNC_IMPL(__imp__sub_82A2D91C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A2D920"))) PPC_WEAK_FUNC(sub_82A2D920);
PPC_FUNC_IMPL(__imp__sub_82A2D920) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// li r10,32
	ctx.r10.s64 = 32;
	// addi r11,r3,24
	ctx.r11.s64 = ctx.r3.s64 + 24;
	// li r9,0
	ctx.r9.s64 = 0;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// lis r10,-32230
	ctx.r10.s64 = -2112225280;
	// lfs f0,24284(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 24284);
	ctx.f0.f64 = double(temp.f32);
loc_82A2D938:
	// stfs f0,4(r11)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 4, temp.u32);
	// stwu r9,8(r11)
	ea = 8 + ctx.r11.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x82a2d938
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82A2D938;
	// lis r11,-16512
	ctx.r11.s64 = -1082130432;
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// li r10,32
	ctx.r10.s64 = 32;
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// lis r8,-32246
	ctx.r8.s64 = -2113273856;
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// li r7,-1
	ctx.r7.s64 = -1;
	// stw r11,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r11.u32);
	// addi r11,r3,4
	ctx.r11.s64 = ctx.r3.s64 + 4;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// addi r11,r3,24
	ctx.r11.s64 = ctx.r3.s64 + 24;
	// lwz r10,-29964(r8)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r8.u32 + -29964);
	// lis r8,-31844
	ctx.r8.s64 = -2086928384;
	// stw r10,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r10.u32);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lfs f0,2780(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 2780);
	ctx.f0.f64 = double(temp.f32);
	// stw r9,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r9.u32);
	// stw r7,24(r3)
	PPC_STORE_U32(ctx.r3.u32 + 24, ctx.r7.u32);
loc_82A2D98C:
	// stfs f0,4(r11)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 4, temp.u32);
	// lwz r10,15776(r8)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r8.u32 + 15776);
	// stwu r10,8(r11)
	ea = 8 + ctx.r11.u32;
	PPC_STORE_U32(ea, ctx.r10.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x82a2d98c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82A2D98C;
	// stw r9,284(r3)
	PPC_STORE_U32(ctx.r3.u32 + 284, ctx.r9.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A2D9A4"))) PPC_WEAK_FUNC(sub_82A2D9A4);
PPC_FUNC_IMPL(__imp__sub_82A2D9A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A2D9A8"))) PPC_WEAK_FUNC(sub_82A2D9A8);
PPC_FUNC_IMPL(__imp__sub_82A2D9A8) {
	PPC_FUNC_PROLOGUE();
	// cmpwi cr6,r4,99
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 99, ctx.xer);
	// ble cr6,0x82a2d9b4
	if (!ctx.cr6.gt) goto loc_82A2D9B4;
	// li r4,99
	ctx.r4.s64 = 99;
loc_82A2D9B4:
	// lwz r11,132(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 132);
	// lbz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 8);
	// cmplwi r10,0
	ctx.cr0.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq 0x82a2d9cc
	if (ctx.cr0.eq) goto loc_82A2D9CC;
	// stw r4,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r4.u32);
	// blr 
	return;
loc_82A2D9CC:
	// lis r11,0
	ctx.r11.s64 = 0;
	// lwz r10,128(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 128);
	// ori r11,r11,40924
	ctx.r11.u64 = ctx.r11.u64 | 40924;
	// stwx r4,r10,r11
	PPC_STORE_U32(ctx.r10.u32 + ctx.r11.u32, ctx.r4.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A2D9E0"))) PPC_WEAK_FUNC(sub_82A2D9E0);
PPC_FUNC_IMPL(__imp__sub_82A2D9E0) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,128(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 128);
	// addis r3,r11,1
	ctx.r3.s64 = ctx.r11.s64 + 65536;
	// addi r3,r3,-24472
	ctx.r3.s64 = ctx.r3.s64 + -24472;
	// b 0x82a2d860
	sub_82A2D860(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82A2D9F0"))) PPC_WEAK_FUNC(sub_82A2D9F0);
PPC_FUNC_IMPL(__imp__sub_82A2D9F0) {
	PPC_FUNC_PROLOGUE();
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt 0x82a2da04
	if (ctx.cr0.lt) goto loc_82A2DA04;
	// cmpwi cr6,r11,26
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 26, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// ble cr6,0x82a2da08
	if (!ctx.cr6.gt) goto loc_82A2DA08;
loc_82A2DA04:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82A2DA08:
	// clrlwi r3,r11,24
	ctx.r3.u64 = ctx.r11.u32 & 0xFF;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A2DA10"))) PPC_WEAK_FUNC(sub_82A2DA10);
PPC_FUNC_IMPL(__imp__sub_82A2DA10) {
	PPC_FUNC_PROLOGUE();
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt 0x82a2da24
	if (ctx.cr0.lt) goto loc_82A2DA24;
	// cmpwi cr6,r11,17
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 17, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// ble cr6,0x82a2da28
	if (!ctx.cr6.gt) goto loc_82A2DA28;
loc_82A2DA24:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82A2DA28:
	// clrlwi r3,r11,24
	ctx.r3.u64 = ctx.r11.u32 & 0xFF;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A2DA30"))) PPC_WEAK_FUNC(sub_82A2DA30);
PPC_FUNC_IMPL(__imp__sub_82A2DA30) {
	PPC_FUNC_PROLOGUE();
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmpwi cr6,r11,18
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 18, ctx.xer);
	// blt cr6,0x82a2da48
	if (ctx.cr6.lt) goto loc_82A2DA48;
	// cmpwi cr6,r11,19
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 19, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// ble cr6,0x82a2da4c
	if (!ctx.cr6.gt) goto loc_82A2DA4C;
loc_82A2DA48:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82A2DA4C:
	// clrlwi r3,r11,24
	ctx.r3.u64 = ctx.r11.u32 & 0xFF;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A2DA54"))) PPC_WEAK_FUNC(sub_82A2DA54);
PPC_FUNC_IMPL(__imp__sub_82A2DA54) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A2DA58"))) PPC_WEAK_FUNC(sub_82A2DA58);
PPC_FUNC_IMPL(__imp__sub_82A2DA58) {
	PPC_FUNC_PROLOGUE();
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmpwi cr6,r11,20
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 20, ctx.xer);
	// blt cr6,0x82a2da70
	if (ctx.cr6.lt) goto loc_82A2DA70;
	// cmpwi cr6,r11,22
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 22, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// ble cr6,0x82a2da74
	if (!ctx.cr6.gt) goto loc_82A2DA74;
loc_82A2DA70:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82A2DA74:
	// clrlwi r3,r11,24
	ctx.r3.u64 = ctx.r11.u32 & 0xFF;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A2DA7C"))) PPC_WEAK_FUNC(sub_82A2DA7C);
PPC_FUNC_IMPL(__imp__sub_82A2DA7C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A2DA80"))) PPC_WEAK_FUNC(sub_82A2DA80);
PPC_FUNC_IMPL(__imp__sub_82A2DA80) {
	PPC_FUNC_PROLOGUE();
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmpwi cr6,r11,23
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 23, ctx.xer);
	// blt cr6,0x82a2da98
	if (ctx.cr6.lt) goto loc_82A2DA98;
	// cmpwi cr6,r11,26
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 26, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// ble cr6,0x82a2da9c
	if (!ctx.cr6.gt) goto loc_82A2DA9C;
loc_82A2DA98:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82A2DA9C:
	// clrlwi r3,r11,24
	ctx.r3.u64 = ctx.r11.u32 & 0xFF;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A2DAA4"))) PPC_WEAK_FUNC(sub_82A2DAA4);
PPC_FUNC_IMPL(__imp__sub_82A2DAA4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A2DAA8"))) PPC_WEAK_FUNC(sub_82A2DAA8);
PPC_FUNC_IMPL(__imp__sub_82A2DAA8) {
	PPC_FUNC_PROLOGUE();
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// addi r11,r11,-27
	ctx.r11.s64 = ctx.r11.s64 + -27;
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r3,r11,27,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A2DABC"))) PPC_WEAK_FUNC(sub_82A2DABC);
PPC_FUNC_IMPL(__imp__sub_82A2DABC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A2DAC0"))) PPC_WEAK_FUNC(sub_82A2DAC0);
PPC_FUNC_IMPL(__imp__sub_82A2DAC0) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,132(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 132);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// clrlwi r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	// cmpwi cr6,r10,27
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 27, ctx.xer);
	// bne cr6,0x82a2dae4
	if (!ctx.cr6.eq) goto loc_82A2DAE4;
	// lwz r11,40(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 40);
	// li r3,1
	ctx.r3.s64 = 1;
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
loc_82A2DAE4:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A2DAEC"))) PPC_WEAK_FUNC(sub_82A2DAEC);
PPC_FUNC_IMPL(__imp__sub_82A2DAEC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A2DAF0"))) PPC_WEAK_FUNC(sub_82A2DAF0);
PPC_FUNC_IMPL(__imp__sub_82A2DAF0) {
	PPC_FUNC_PROLOGUE();
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// addi r11,r11,-28
	ctx.r11.s64 = ctx.r11.s64 + -28;
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r3,r11,27,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A2DB04"))) PPC_WEAK_FUNC(sub_82A2DB04);
PPC_FUNC_IMPL(__imp__sub_82A2DB04) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A2DB08"))) PPC_WEAK_FUNC(sub_82A2DB08);
PPC_FUNC_IMPL(__imp__sub_82A2DB08) {
	PPC_FUNC_PROLOGUE();
	// clrlwi. r10,r3,24
	ctx.r10.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// blt 0x82a2db1c
	if (ctx.cr0.lt) goto loc_82A2DB1C;
	// cmpwi cr6,r10,26
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 26, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// ble cr6,0x82a2db20
	if (!ctx.cr6.gt) goto loc_82A2DB20;
loc_82A2DB1C:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82A2DB20:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82a2dbb0
	if (ctx.cr0.eq) goto loc_82A2DBB0;
	// cmpwi r10,0
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// blt 0x82a2db3c
	if (ctx.cr0.lt) goto loc_82A2DB3C;
	// cmpwi cr6,r10,17
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 17, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// ble cr6,0x82a2db40
	if (!ctx.cr6.gt) goto loc_82A2DB40;
loc_82A2DB3C:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82A2DB40:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82a2db58
	if (ctx.cr0.eq) goto loc_82A2DB58;
	// clrlwi. r11,r3,31
	ctx.r11.u64 = ctx.r3.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82a2dbb0
	if (!ctx.cr0.eq) goto loc_82A2DBB0;
loc_82A2DB50:
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
loc_82A2DB58:
	// cmpwi cr6,r10,23
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 23, ctx.xer);
	// blt cr6,0x82a2db6c
	if (ctx.cr6.lt) goto loc_82A2DB6C;
	// cmpwi cr6,r10,26
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 26, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// ble cr6,0x82a2db70
	if (!ctx.cr6.gt) goto loc_82A2DB70;
loc_82A2DB6C:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82A2DB70:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82a2db84
	if (ctx.cr0.eq) goto loc_82A2DB84;
	// cmpwi cr6,r10,23
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 23, ctx.xer);
	// bne cr6,0x82a2dbb0
	if (!ctx.cr6.eq) goto loc_82A2DBB0;
	// b 0x82a2db50
	goto loc_82A2DB50;
loc_82A2DB84:
	// cmpwi cr6,r10,20
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 20, ctx.xer);
	// blt cr6,0x82a2db98
	if (ctx.cr6.lt) goto loc_82A2DB98;
	// cmpwi cr6,r10,22
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 22, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// ble cr6,0x82a2db9c
	if (!ctx.cr6.gt) goto loc_82A2DB9C;
loc_82A2DB98:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82A2DB9C:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82a2dbb0
	if (ctx.cr0.eq) goto loc_82A2DBB0;
	// cmpwi cr6,r10,20
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 20, ctx.xer);
	// li r3,1
	ctx.r3.s64 = 1;
	// beqlr cr6
	if (ctx.cr6.eq) return;
loc_82A2DBB0:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A2DBB8"))) PPC_WEAK_FUNC(sub_82A2DBB8);
PPC_FUNC_IMPL(__imp__sub_82A2DBB8) {
	PPC_FUNC_PROLOGUE();
	// rlwinm r11,r3,24,24,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 24) & 0xFF;
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// blt cr6,0x82a2dbf0
	if (ctx.cr6.lt) goto loc_82A2DBF0;
	// cmpwi cr6,r11,6
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 6, ctx.xer);
	// bge cr6,0x82a2dbf0
	if (!ctx.cr6.lt) goto loc_82A2DBF0;
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt 0x82a2dbe0
	if (ctx.cr0.lt) goto loc_82A2DBE0;
	// cmpwi cr6,r11,17
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 17, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// ble cr6,0x82a2dbe4
	if (!ctx.cr6.gt) goto loc_82A2DBE4;
loc_82A2DBE0:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82A2DBE4:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// li r3,1
	ctx.r3.s64 = 1;
	// bnelr 
	if (!ctx.cr0.eq) return;
loc_82A2DBF0:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A2DBF8"))) PPC_WEAK_FUNC(sub_82A2DBF8);
PPC_FUNC_IMPL(__imp__sub_82A2DBF8) {
	PPC_FUNC_PROLOGUE();
	// rlwinm. r11,r3,0,16,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 0) & 0xFF00;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82a2dc4c
	if (ctx.cr0.eq) goto loc_82A2DC4C;
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmpwi cr6,r11,23
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 23, ctx.xer);
	// blt cr6,0x82a2dc18
	if (ctx.cr6.lt) goto loc_82A2DC18;
	// cmpwi cr6,r11,26
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 26, ctx.xer);
	// li r10,1
	ctx.r10.s64 = 1;
	// ble cr6,0x82a2dc1c
	if (!ctx.cr6.gt) goto loc_82A2DC1C;
loc_82A2DC18:
	// li r10,0
	ctx.r10.s64 = 0;
loc_82A2DC1C:
	// clrlwi. r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x82a2dc44
	if (!ctx.cr0.eq) goto loc_82A2DC44;
	// cmpwi cr6,r11,20
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 20, ctx.xer);
	// blt cr6,0x82a2dc38
	if (ctx.cr6.lt) goto loc_82A2DC38;
	// cmpwi cr6,r11,22
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 22, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// ble cr6,0x82a2dc3c
	if (!ctx.cr6.gt) goto loc_82A2DC3C;
loc_82A2DC38:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82A2DC3C:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82a2dc4c
	if (ctx.cr0.eq) goto loc_82A2DC4C;
loc_82A2DC44:
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
loc_82A2DC4C:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A2DC54"))) PPC_WEAK_FUNC(sub_82A2DC54);
PPC_FUNC_IMPL(__imp__sub_82A2DC54) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A2DC58"))) PPC_WEAK_FUNC(sub_82A2DC58);
PPC_FUNC_IMPL(__imp__sub_82A2DC58) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x833a01ac
	ctx.lr = 0x82A2DC60;
	__savegprlr_29(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31843
	ctx.r11.s64 = -2086862848;
	// rlwinm r10,r4,2,22,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0x3FC;
	// addi r11,r11,-23984
	ctx.r11.s64 = ctx.r11.s64 + -23984;
	// mr r9,r4
	ctx.r9.u64 = ctx.r4.u64;
	// add r4,r10,r11
	ctx.r4.u64 = ctx.r10.u64 + ctx.r11.u64;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// clrlwi r30,r9,24
	ctx.r30.u64 = ctx.r9.u32 & 0xFF;
	// rlwinm r31,r9,24,24,31
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 24) & 0xFF;
	// bl 0x82e025d8
	ctx.lr = 0x82A2DC88;
	sub_82E025D8(ctx, base);
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// ble cr6,0x82a2dd4c
	if (!ctx.cr6.gt) goto loc_82A2DD4C;
	// addi r11,r31,48
	ctx.r11.s64 = ctx.r31.s64 + 48;
	// clrlwi. r10,r30,24
	ctx.r10.u64 = ctx.r30.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// stb r11,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r11.u8);
	// blt 0x82a2dcac
	if (ctx.cr0.lt) goto loc_82A2DCAC;
	// cmpwi cr6,r10,17
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 17, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// ble cr6,0x82a2dcb0
	if (!ctx.cr6.gt) goto loc_82A2DCB0;
loc_82A2DCAC:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82A2DCB0:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82a2dcdc
	if (ctx.cr0.eq) goto loc_82A2DCDC;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82e01cf0
	ctx.lr = 0x82A2DCC0;
	sub_82E01CF0(ctx, base);
	// addi r4,r3,-1
	ctx.r4.s64 = ctx.r3.s64 + -1;
	// li r7,1
	ctx.r7.s64 = 1;
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82e02e78
	ctx.lr = 0x82A2DCD8;
	sub_82E02E78(ctx, base);
	// b 0x82a2dd4c
	goto loc_82A2DD4C;
loc_82A2DCDC:
	// cmpwi cr6,r10,20
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 20, ctx.xer);
	// blt cr6,0x82a2dcf0
	if (ctx.cr6.lt) goto loc_82A2DCF0;
	// cmpwi cr6,r10,22
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 22, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// ble cr6,0x82a2dcf4
	if (!ctx.cr6.gt) goto loc_82A2DCF4;
loc_82A2DCF0:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82A2DCF4:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82a2dd1c
	if (!ctx.cr0.eq) goto loc_82A2DD1C;
	// cmpwi cr6,r10,23
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 23, ctx.xer);
	// blt cr6,0x82a2dd10
	if (ctx.cr6.lt) goto loc_82A2DD10;
	// cmpwi cr6,r10,26
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 26, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// ble cr6,0x82a2dd14
	if (!ctx.cr6.gt) goto loc_82A2DD14;
loc_82A2DD10:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82A2DD14:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82a2dd4c
	if (ctx.cr0.eq) goto loc_82A2DD4C;
loc_82A2DD1C:
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// addi r4,r11,-20296
	ctx.r4.s64 = ctx.r11.s64 + -20296;
	// bl 0x82e02670
	ctx.lr = 0x82A2DD2C;
	sub_82E02670(ctx, base);
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82e023d0
	ctx.lr = 0x82A2DD38;
	sub_82E023D0(ctx, base);
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x82e01bf0
	ctx.lr = 0x82A2DD40;
	sub_82E01BF0(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lbz r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// bl 0x82e034b8
	ctx.lr = 0x82A2DD4C;
	sub_82E034B8(ctx, base);
loc_82A2DD4C:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x833a01fc
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82A2DD58"))) PPC_WEAK_FUNC(sub_82A2DD58);
PPC_FUNC_IMPL(__imp__sub_82A2DD58) {
	PPC_FUNC_PROLOGUE();
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmpwi cr6,r11,23
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 23, ctx.xer);
	// blt cr6,0x82a2dd70
	if (ctx.cr6.lt) goto loc_82A2DD70;
	// cmpwi cr6,r11,26
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 26, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// ble cr6,0x82a2dd74
	if (!ctx.cr6.gt) goto loc_82A2DD74;
loc_82A2DD70:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82A2DD74:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82a2dd94
	if (ctx.cr0.eq) goto loc_82A2DD94;
	// addi r11,r3,-23
	ctx.r11.s64 = ctx.r3.s64 + -23;
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r10,r10,-31152
	ctx.r10.s64 = ctx.r10.s64 + -31152;
	// lwzx r3,r11,r10
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// blr 
	return;
loc_82A2DD94:
	// li r3,32
	ctx.r3.s64 = 32;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A2DD9C"))) PPC_WEAK_FUNC(sub_82A2DD9C);
PPC_FUNC_IMPL(__imp__sub_82A2DD9C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A2DDA0"))) PPC_WEAK_FUNC(sub_82A2DDA0);
PPC_FUNC_IMPL(__imp__sub_82A2DDA0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// cmpwi cr6,r4,2
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 2, ctx.xer);
	// bne cr6,0x82a2de10
	if (!ctx.cr6.eq) goto loc_82A2DE10;
	// lwz r10,128(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 128);
	// addis r11,r10,1
	ctx.r11.s64 = ctx.r10.s64 + 65536;
	// addis r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 65536;
	// addic. r11,r11,-23880
	ctx.xer.ca = ctx.r11.u32 > 23879;
	ctx.r11.s64 = ctx.r11.s64 + -23880;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// addi r10,r10,-23896
	ctx.r10.s64 = ctx.r10.s64 + -23896;
	// beqlr 
	if (ctx.cr0.eq) return;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lfs f13,0(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// lis r8,-32246
	ctx.r8.s64 = -2113273856;
	// lfs f0,6272(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 6272);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f12,f1,f0
	ctx.f12.f64 = double(float(ctx.f1.f64 * ctx.f0.f64));
	// lfs f0,-31156(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + -31156);
	ctx.f0.f64 = double(temp.f32);
	// fadds f13,f13,f12
	ctx.f13.f64 = double(float(ctx.f13.f64 + ctx.f12.f64));
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// blt cr6,0x82a2ddf0
	if (ctx.cr6.lt) goto loc_82A2DDF0;
	// fmr f13,f0
	ctx.f13.f64 = ctx.f0.f64;
loc_82A2DDF0:
	// stfs f13,0(r11)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// lfs f13,0(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// fadds f13,f13,f12
	ctx.f13.f64 = double(float(ctx.f13.f64 + ctx.f12.f64));
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// bge cr6,0x82a2de08
	if (!ctx.cr6.lt) goto loc_82A2DE08;
	// fmr f0,f13
	ctx.f0.f64 = ctx.f13.f64;
loc_82A2DE08:
	// stfs f0,0(r10)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r10.u32 + 0, temp.u32);
	// blr 
	return;
loc_82A2DE10:
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// bne cr6,0x82a2de28
	if (!ctx.cr6.eq) goto loc_82A2DE28;
	// lwz r11,128(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 128);
	// addis r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 65536;
	// addi r11,r11,-23896
	ctx.r11.s64 = ctx.r11.s64 + -23896;
	// b 0x82a2de44
	goto loc_82A2DE44;
loc_82A2DE28:
	// cmpwi cr6,r4,1
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 1, ctx.xer);
	// bne cr6,0x82a2de40
	if (!ctx.cr6.eq) goto loc_82A2DE40;
	// lwz r11,128(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 128);
	// addis r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 65536;
	// addi r11,r11,-23880
	ctx.r11.s64 = ctx.r11.s64 + -23880;
	// b 0x82a2de44
	goto loc_82A2DE44;
loc_82A2DE40:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82A2DE44:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lfs f13,0(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// lis r9,-32246
	ctx.r9.s64 = -2113273856;
	// lfs f0,6272(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 6272);
	ctx.f0.f64 = double(temp.f32);
	// fmadds f0,f1,f0,f13
	ctx.f0.f64 = double(float(ctx.f1.f64 * ctx.f0.f64 + ctx.f13.f64));
	// lfs f13,-31156(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + -31156);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// blt cr6,0x82a2de70
	if (ctx.cr6.lt) goto loc_82A2DE70;
	// fmr f0,f13
	ctx.f0.f64 = ctx.f13.f64;
loc_82A2DE70:
	// stfs f0,0(r11)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A2DE78"))) PPC_WEAK_FUNC(sub_82A2DE78);
PPC_FUNC_IMPL(__imp__sub_82A2DE78) {
	PPC_FUNC_PROLOGUE();
	// cmpwi cr6,r4,2
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 2, ctx.xer);
	// bne cr6,0x82a2deac
	if (!ctx.cr6.eq) goto loc_82A2DEAC;
	// lwz r11,128(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 128);
	// addis r9,r11,1
	ctx.r9.s64 = ctx.r11.s64 + 65536;
	// addic. r9,r9,-23896
	ctx.xer.ca = ctx.r9.u32 > 23895;
	ctx.r9.s64 = ctx.r9.s64 + -23896;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beqlr 
	if (ctx.cr0.eq) return;
	// lis r11,1
	ctx.r11.s64 = 65536;
	// ori r11,r11,34463
	ctx.r11.u64 = ctx.r11.u64 | 34463;
	// cmplw cr6,r5,r11
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x82a2df0c
	if (ctx.cr6.gt) goto loc_82A2DF0C;
	// lwz r10,12(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 12);
	// add r10,r10,r5
	ctx.r10.u64 = ctx.r10.u64 + ctx.r5.u64;
	// b 0x82a2df00
	goto loc_82A2DF00;
loc_82A2DEAC:
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// bne cr6,0x82a2dec4
	if (!ctx.cr6.eq) goto loc_82A2DEC4;
	// lwz r11,128(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 128);
	// addis r9,r11,1
	ctx.r9.s64 = ctx.r11.s64 + 65536;
	// addi r9,r9,-23896
	ctx.r9.s64 = ctx.r9.s64 + -23896;
	// b 0x82a2dee0
	goto loc_82A2DEE0;
loc_82A2DEC4:
	// cmpwi cr6,r4,1
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 1, ctx.xer);
	// bne cr6,0x82a2dedc
	if (!ctx.cr6.eq) goto loc_82A2DEDC;
	// lwz r11,128(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 128);
	// addis r9,r11,1
	ctx.r9.s64 = ctx.r11.s64 + 65536;
	// addi r9,r9,-23880
	ctx.r9.s64 = ctx.r9.s64 + -23880;
	// b 0x82a2dee0
	goto loc_82A2DEE0;
loc_82A2DEDC:
	// li r9,0
	ctx.r9.s64 = 0;
loc_82A2DEE0:
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lis r11,1
	ctx.r11.s64 = 65536;
	// ori r11,r11,34463
	ctx.r11.u64 = ctx.r11.u64 | 34463;
	// cmplw cr6,r5,r11
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x82a2df0c
	if (ctx.cr6.gt) goto loc_82A2DF0C;
	// lwz r10,12(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 12);
	// add r10,r5,r10
	ctx.r10.u64 = ctx.r5.u64 + ctx.r10.u64;
loc_82A2DF00:
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// bge cr6,0x82a2df0c
	if (!ctx.cr6.lt) goto loc_82A2DF0C;
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
loc_82A2DF0C:
	// stw r11,12(r9)
	PPC_STORE_U32(ctx.r9.u32 + 12, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A2DF14"))) PPC_WEAK_FUNC(sub_82A2DF14);
PPC_FUNC_IMPL(__imp__sub_82A2DF14) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A2DF18"))) PPC_WEAK_FUNC(sub_82A2DF18);
PPC_FUNC_IMPL(__imp__sub_82A2DF18) {
	PPC_FUNC_PROLOGUE();
	// cmpwi cr6,r4,2
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 2, ctx.xer);
	// bne cr6,0x82a2df9c
	if (!ctx.cr6.eq) goto loc_82A2DF9C;
	// lwz r10,128(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 128);
	// addis r11,r10,1
	ctx.r11.s64 = ctx.r10.s64 + 65536;
	// addis r8,r10,1
	ctx.r8.s64 = ctx.r10.s64 + 65536;
	// addic. r11,r11,-23880
	ctx.xer.ca = ctx.r11.u32 > 23879;
	ctx.r11.s64 = ctx.r11.s64 + -23880;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// addi r8,r8,-23896
	ctx.r8.s64 = ctx.r8.s64 + -23896;
	// beqlr 
	if (ctx.cr0.eq) return;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// clrlwi r9,r5,16
	ctx.r9.u64 = ctx.r5.u32 & 0xFFFF;
	// cmplwi cr6,r9,9999
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 9999, ctx.xer);
	// blt cr6,0x82a2df60
	if (ctx.cr6.lt) goto loc_82A2DF60;
	// li r10,9999
	ctx.r10.s64 = 9999;
	// li r9,9999
	ctx.r9.s64 = 9999;
	// sth r10,6(r11)
	PPC_STORE_U16(ctx.r11.u32 + 6, ctx.r10.u16);
	// sth r9,6(r8)
	PPC_STORE_U16(ctx.r8.u32 + 6, ctx.r9.u16);
	// blr 
	return;
loc_82A2DF60:
	// lhz r10,6(r11)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r11.u32 + 6);
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// clrlwi r10,r10,16
	ctx.r10.u64 = ctx.r10.u32 & 0xFFFF;
	// cmplwi cr6,r10,9999
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 9999, ctx.xer);
	// blt cr6,0x82a2df78
	if (ctx.cr6.lt) goto loc_82A2DF78;
	// li r10,9999
	ctx.r10.s64 = 9999;
loc_82A2DF78:
	// sth r10,6(r11)
	PPC_STORE_U16(ctx.r11.u32 + 6, ctx.r10.u16);
	// lhz r11,6(r8)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r8.u32 + 6);
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// clrlwi r11,r11,16
	ctx.r11.u64 = ctx.r11.u32 & 0xFFFF;
	// cmplwi cr6,r11,9999
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 9999, ctx.xer);
	// blt cr6,0x82a2df94
	if (ctx.cr6.lt) goto loc_82A2DF94;
	// li r11,9999
	ctx.r11.s64 = 9999;
loc_82A2DF94:
	// sth r11,6(r8)
	PPC_STORE_U16(ctx.r8.u32 + 6, ctx.r11.u16);
	// blr 
	return;
loc_82A2DF9C:
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// bne cr6,0x82a2dfb4
	if (!ctx.cr6.eq) goto loc_82A2DFB4;
	// lwz r11,128(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 128);
	// addis r10,r11,1
	ctx.r10.s64 = ctx.r11.s64 + 65536;
	// addi r10,r10,-23896
	ctx.r10.s64 = ctx.r10.s64 + -23896;
	// b 0x82a2dfd0
	goto loc_82A2DFD0;
loc_82A2DFB4:
	// cmpwi cr6,r4,1
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 1, ctx.xer);
	// bne cr6,0x82a2dfcc
	if (!ctx.cr6.eq) goto loc_82A2DFCC;
	// lwz r11,128(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 128);
	// addis r10,r11,1
	ctx.r10.s64 = ctx.r11.s64 + 65536;
	// addi r10,r10,-23880
	ctx.r10.s64 = ctx.r10.s64 + -23880;
	// b 0x82a2dfd0
	goto loc_82A2DFD0;
loc_82A2DFCC:
	// li r10,0
	ctx.r10.s64 = 0;
loc_82A2DFD0:
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// clrlwi r11,r5,16
	ctx.r11.u64 = ctx.r5.u32 & 0xFFFF;
	// cmplwi cr6,r11,9999
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 9999, ctx.xer);
	// bge cr6,0x82a2dff8
	if (!ctx.cr6.lt) goto loc_82A2DFF8;
	// lhz r9,6(r10)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r10.u32 + 6);
	// add r11,r9,r11
	ctx.r11.u64 = ctx.r9.u64 + ctx.r11.u64;
	// clrlwi r11,r11,16
	ctx.r11.u64 = ctx.r11.u32 & 0xFFFF;
	// cmplwi cr6,r11,9999
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 9999, ctx.xer);
	// blt cr6,0x82a2dffc
	if (ctx.cr6.lt) goto loc_82A2DFFC;
loc_82A2DFF8:
	// li r11,9999
	ctx.r11.s64 = 9999;
loc_82A2DFFC:
	// sth r11,6(r10)
	PPC_STORE_U16(ctx.r10.u32 + 6, ctx.r11.u16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A2E004"))) PPC_WEAK_FUNC(sub_82A2E004);
PPC_FUNC_IMPL(__imp__sub_82A2E004) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A2E008"))) PPC_WEAK_FUNC(sub_82A2E008);
PPC_FUNC_IMPL(__imp__sub_82A2E008) {
	PPC_FUNC_PROLOGUE();
	// cmpwi cr6,r4,2
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 2, ctx.xer);
	// bne cr6,0x82a2e07c
	if (!ctx.cr6.eq) goto loc_82A2E07C;
	// lwz r11,128(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 128);
	// addis r10,r11,1
	ctx.r10.s64 = ctx.r11.s64 + 65536;
	// addis r8,r11,1
	ctx.r8.s64 = ctx.r11.s64 + 65536;
	// addic. r10,r10,-23880
	ctx.xer.ca = ctx.r10.u32 > 23879;
	ctx.r10.s64 = ctx.r10.s64 + -23880;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// addi r8,r8,-23896
	ctx.r8.s64 = ctx.r8.s64 + -23896;
	// beqlr 
	if (ctx.cr0.eq) return;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lis r11,1
	ctx.r11.s64 = 65536;
	// ori r11,r11,34463
	ctx.r11.u64 = ctx.r11.u64 | 34463;
	// cmplw cr6,r5,r11
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82a2e048
	if (ctx.cr6.lt) goto loc_82A2E048;
	// stw r11,8(r10)
	PPC_STORE_U32(ctx.r10.u32 + 8, ctx.r11.u32);
	// b 0x82a2e074
	goto loc_82A2E074;
loc_82A2E048:
	// lwz r9,8(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// add r9,r9,r5
	ctx.r9.u64 = ctx.r9.u64 + ctx.r5.u64;
	// cmplw cr6,r9,r11
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82a2e05c
	if (ctx.cr6.lt) goto loc_82A2E05C;
	// mr r9,r11
	ctx.r9.u64 = ctx.r11.u64;
loc_82A2E05C:
	// stw r9,8(r10)
	PPC_STORE_U32(ctx.r10.u32 + 8, ctx.r9.u32);
	// lwz r10,8(r8)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r8.u32 + 8);
	// add r10,r10,r5
	ctx.r10.u64 = ctx.r10.u64 + ctx.r5.u64;
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// bge cr6,0x82a2e074
	if (!ctx.cr6.lt) goto loc_82A2E074;
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
loc_82A2E074:
	// stw r11,8(r8)
	PPC_STORE_U32(ctx.r8.u32 + 8, ctx.r11.u32);
	// blr 
	return;
loc_82A2E07C:
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// bne cr6,0x82a2e094
	if (!ctx.cr6.eq) goto loc_82A2E094;
	// lwz r11,128(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 128);
	// addis r9,r11,1
	ctx.r9.s64 = ctx.r11.s64 + 65536;
	// addi r9,r9,-23896
	ctx.r9.s64 = ctx.r9.s64 + -23896;
	// b 0x82a2e0b0
	goto loc_82A2E0B0;
loc_82A2E094:
	// cmpwi cr6,r4,1
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 1, ctx.xer);
	// bne cr6,0x82a2e0ac
	if (!ctx.cr6.eq) goto loc_82A2E0AC;
	// lwz r11,128(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 128);
	// addis r9,r11,1
	ctx.r9.s64 = ctx.r11.s64 + 65536;
	// addi r9,r9,-23880
	ctx.r9.s64 = ctx.r9.s64 + -23880;
	// b 0x82a2e0b0
	goto loc_82A2E0B0;
loc_82A2E0AC:
	// li r9,0
	ctx.r9.s64 = 0;
loc_82A2E0B0:
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lis r11,1
	ctx.r11.s64 = 65536;
	// ori r11,r11,34463
	ctx.r11.u64 = ctx.r11.u64 | 34463;
	// cmplw cr6,r5,r11
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, ctx.r11.u32, ctx.xer);
	// bge cr6,0x82a2e0dc
	if (!ctx.cr6.lt) goto loc_82A2E0DC;
	// lwz r10,8(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// add r10,r10,r5
	ctx.r10.u64 = ctx.r10.u64 + ctx.r5.u64;
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// bge cr6,0x82a2e0dc
	if (!ctx.cr6.lt) goto loc_82A2E0DC;
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
loc_82A2E0DC:
	// stw r11,8(r9)
	PPC_STORE_U32(ctx.r9.u32 + 8, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A2E0E4"))) PPC_WEAK_FUNC(sub_82A2E0E4);
PPC_FUNC_IMPL(__imp__sub_82A2E0E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A2E0E8"))) PPC_WEAK_FUNC(sub_82A2E0E8);
PPC_FUNC_IMPL(__imp__sub_82A2E0E8) {
	PPC_FUNC_PROLOGUE();
	// cmpwi cr6,r4,2
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 2, ctx.xer);
	// bne cr6,0x82a2e16c
	if (!ctx.cr6.eq) goto loc_82A2E16C;
	// lwz r10,128(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 128);
	// addis r11,r10,1
	ctx.r11.s64 = ctx.r10.s64 + 65536;
	// addis r8,r10,1
	ctx.r8.s64 = ctx.r10.s64 + 65536;
	// addic. r11,r11,-23880
	ctx.xer.ca = ctx.r11.u32 > 23879;
	ctx.r11.s64 = ctx.r11.s64 + -23880;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// addi r8,r8,-23896
	ctx.r8.s64 = ctx.r8.s64 + -23896;
	// beqlr 
	if (ctx.cr0.eq) return;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// clrlwi r9,r5,16
	ctx.r9.u64 = ctx.r5.u32 & 0xFFFF;
	// cmplwi cr6,r9,999
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 999, ctx.xer);
	// ble cr6,0x82a2e130
	if (!ctx.cr6.gt) goto loc_82A2E130;
	// li r10,999
	ctx.r10.s64 = 999;
	// li r9,999
	ctx.r9.s64 = 999;
	// sth r10,4(r11)
	PPC_STORE_U16(ctx.r11.u32 + 4, ctx.r10.u16);
	// sth r9,4(r8)
	PPC_STORE_U16(ctx.r8.u32 + 4, ctx.r9.u16);
	// blr 
	return;
loc_82A2E130:
	// lhz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r11.u32 + 4);
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// clrlwi r10,r10,16
	ctx.r10.u64 = ctx.r10.u32 & 0xFFFF;
	// cmplwi cr6,r10,999
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 999, ctx.xer);
	// blt cr6,0x82a2e148
	if (ctx.cr6.lt) goto loc_82A2E148;
	// li r10,999
	ctx.r10.s64 = 999;
loc_82A2E148:
	// sth r10,4(r11)
	PPC_STORE_U16(ctx.r11.u32 + 4, ctx.r10.u16);
	// lhz r11,4(r8)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r8.u32 + 4);
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// clrlwi r11,r11,16
	ctx.r11.u64 = ctx.r11.u32 & 0xFFFF;
	// cmplwi cr6,r11,999
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 999, ctx.xer);
	// blt cr6,0x82a2e164
	if (ctx.cr6.lt) goto loc_82A2E164;
	// li r11,999
	ctx.r11.s64 = 999;
loc_82A2E164:
	// sth r11,4(r8)
	PPC_STORE_U16(ctx.r8.u32 + 4, ctx.r11.u16);
	// blr 
	return;
loc_82A2E16C:
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// bne cr6,0x82a2e184
	if (!ctx.cr6.eq) goto loc_82A2E184;
	// lwz r11,128(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 128);
	// addis r10,r11,1
	ctx.r10.s64 = ctx.r11.s64 + 65536;
	// addi r10,r10,-23896
	ctx.r10.s64 = ctx.r10.s64 + -23896;
	// b 0x82a2e1a0
	goto loc_82A2E1A0;
loc_82A2E184:
	// cmpwi cr6,r4,1
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 1, ctx.xer);
	// bne cr6,0x82a2e19c
	if (!ctx.cr6.eq) goto loc_82A2E19C;
	// lwz r11,128(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 128);
	// addis r10,r11,1
	ctx.r10.s64 = ctx.r11.s64 + 65536;
	// addi r10,r10,-23880
	ctx.r10.s64 = ctx.r10.s64 + -23880;
	// b 0x82a2e1a0
	goto loc_82A2E1A0;
loc_82A2E19C:
	// li r10,0
	ctx.r10.s64 = 0;
loc_82A2E1A0:
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// clrlwi r11,r5,16
	ctx.r11.u64 = ctx.r5.u32 & 0xFFFF;
	// cmplwi cr6,r11,999
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 999, ctx.xer);
	// bgt cr6,0x82a2e1c8
	if (ctx.cr6.gt) goto loc_82A2E1C8;
	// lhz r9,4(r10)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r10.u32 + 4);
	// add r11,r9,r11
	ctx.r11.u64 = ctx.r9.u64 + ctx.r11.u64;
	// clrlwi r11,r11,16
	ctx.r11.u64 = ctx.r11.u32 & 0xFFFF;
	// cmplwi cr6,r11,999
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 999, ctx.xer);
	// blt cr6,0x82a2e1cc
	if (ctx.cr6.lt) goto loc_82A2E1CC;
loc_82A2E1C8:
	// li r11,999
	ctx.r11.s64 = 999;
loc_82A2E1CC:
	// sth r11,4(r10)
	PPC_STORE_U16(ctx.r10.u32 + 4, ctx.r11.u16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A2E1D4"))) PPC_WEAK_FUNC(sub_82A2E1D4);
PPC_FUNC_IMPL(__imp__sub_82A2E1D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A2E1D8"))) PPC_WEAK_FUNC(sub_82A2E1D8);
PPC_FUNC_IMPL(__imp__sub_82A2E1D8) {
	PPC_FUNC_PROLOGUE();
	// clrlwi. r11,r4,24
	ctx.r11.u64 = ctx.r4.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt 0x82a2e1ec
	if (ctx.cr0.lt) goto loc_82A2E1EC;
	// cmpwi cr6,r11,17
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 17, ctx.xer);
	// li r10,1
	ctx.r10.s64 = 1;
	// ble cr6,0x82a2e1f0
	if (!ctx.cr6.gt) goto loc_82A2E1F0;
loc_82A2E1EC:
	// li r10,0
	ctx.r10.s64 = 0;
loc_82A2E1F0:
	// clrlwi. r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x82a2e208
	if (!ctx.cr0.eq) goto loc_82A2E208;
	// lwz r10,132(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 132);
	// lwz r10,496(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 496);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
loc_82A2E208:
	// lwz r10,136(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 136);
	// mulli r11,r11,24
	ctx.r11.s64 = ctx.r11.s64 * 24;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// addi r10,r11,8
	ctx.r10.s64 = ctx.r11.s64 + 8;
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// add r10,r10,r5
	ctx.r10.u64 = ctx.r10.u64 + ctx.r5.u64;
	// stw r10,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A2E228"))) PPC_WEAK_FUNC(sub_82A2E228);
PPC_FUNC_IMPL(__imp__sub_82A2E228) {
	PPC_FUNC_PROLOGUE();
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// clrlwi. r11,r4,24
	ctx.r11.u64 = ctx.r4.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// li r3,-1
	ctx.r3.s64 = -1;
	// blt 0x82a2e244
	if (ctx.cr0.lt) goto loc_82A2E244;
	// cmpwi cr6,r11,17
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 17, ctx.xer);
	// li r9,1
	ctx.r9.s64 = 1;
	// ble cr6,0x82a2e248
	if (!ctx.cr6.gt) goto loc_82A2E248;
loc_82A2E244:
	// li r9,0
	ctx.r9.s64 = 0;
loc_82A2E248:
	// clrlwi. r9,r9,24
	ctx.r9.u64 = ctx.r9.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x82a2e260
	if (!ctx.cr0.eq) goto loc_82A2E260;
	// lwz r9,132(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 132);
	// lwz r9,496(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + 496);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
loc_82A2E260:
	// lwz r10,136(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 136);
	// mulli r11,r11,24
	ctx.r11.s64 = ctx.r11.s64 * 24;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lwz r3,8(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A2E274"))) PPC_WEAK_FUNC(sub_82A2E274);
PPC_FUNC_IMPL(__imp__sub_82A2E274) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A2E278"))) PPC_WEAK_FUNC(sub_82A2E278);
PPC_FUNC_IMPL(__imp__sub_82A2E278) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lwz r11,128(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 128);
	// addis r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 65536;
	// addi r11,r11,-23856
	ctx.r11.s64 = ctx.r11.s64 + -23856;
	// lfs f0,0(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,4(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,8(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,12(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	ctx.f11.f64 = double(temp.f32);
	// stfs f0,0(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 0, temp.u32);
	// stfs f13,4(r3)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r3.u32 + 4, temp.u32);
	// stfs f12,8(r3)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r3.u32 + 8, temp.u32);
	// stfs f11,12(r3)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r3.u32 + 12, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A2E2A8"))) PPC_WEAK_FUNC(sub_82A2E2A8);
PPC_FUNC_IMPL(__imp__sub_82A2E2A8) {
	PPC_FUNC_PROLOGUE();
	// clrlwi. r11,r4,24
	ctx.r11.u64 = ctx.r4.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt 0x82a2e2bc
	if (ctx.cr0.lt) goto loc_82A2E2BC;
	// cmpwi cr6,r11,17
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 17, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// ble cr6,0x82a2e2c0
	if (!ctx.cr6.gt) goto loc_82A2E2C0;
loc_82A2E2BC:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82A2E2C0:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82a2e2dc
	if (ctx.cr0.eq) goto loc_82A2E2DC;
	// addi r11,r4,10240
	ctx.r11.s64 = ctx.r4.s64 + 10240;
	// lwz r10,128(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 128);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r3,r11,r10
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// blr 
	return;
loc_82A2E2DC:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A2E2E4"))) PPC_WEAK_FUNC(sub_82A2E2E4);
PPC_FUNC_IMPL(__imp__sub_82A2E2E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A2E2E8"))) PPC_WEAK_FUNC(sub_82A2E2E8);
PPC_FUNC_IMPL(__imp__sub_82A2E2E8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r10,0
	ctx.r10.s64 = 0;
	// lwz r11,128(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 128);
	// lvx128 v63,r0,r4
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r4.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// ori r10,r10,40944
	ctx.r10.u64 = ctx.r10.u64 | 40944;
	// stvx128 v63,r11,r10
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r11.u32 + ctx.r10.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lwz r11,128(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 128);
	// lfs f0,0(r5)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// addis r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 65536;
	// addi r11,r11,-23856
	ctx.r11.s64 = ctx.r11.s64 + -23856;
	// stfs f0,0(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// lfs f0,4(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,4(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 4, temp.u32);
	// lfs f0,8(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,8(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 8, temp.u32);
	// lfs f0,12(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 12);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,12(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 12, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A2E32C"))) PPC_WEAK_FUNC(sub_82A2E32C);
PPC_FUNC_IMPL(__imp__sub_82A2E32C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A2E330"))) PPC_WEAK_FUNC(sub_82A2E330);
PPC_FUNC_IMPL(__imp__sub_82A2E330) {
	PPC_FUNC_PROLOGUE();
	// clrlwi. r11,r4,24
	ctx.r11.u64 = ctx.r4.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt 0x82a2e344
	if (ctx.cr0.lt) goto loc_82A2E344;
	// cmpwi cr6,r11,17
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 17, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// ble cr6,0x82a2e348
	if (!ctx.cr6.gt) goto loc_82A2E348;
loc_82A2E344:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82A2E348:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beqlr 
	if (ctx.cr0.eq) return;
	// rlwinm r11,r4,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 0) & 0xFFFFFFFE;
	// lwz r10,128(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 128);
	// addi r9,r11,10240
	ctx.r9.s64 = ctx.r11.s64 + 10240;
	// addi r11,r11,10241
	ctx.r11.s64 = ctx.r11.s64 + 10241;
	// rlwinm r9,r9,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r5,r9,r10
	PPC_STORE_U32(ctx.r9.u32 + ctx.r10.u32, ctx.r5.u32);
	// lwz r10,128(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 128);
	// stwx r5,r11,r10
	PPC_STORE_U32(ctx.r11.u32 + ctx.r10.u32, ctx.r5.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A2E378"))) PPC_WEAK_FUNC(sub_82A2E378);
PPC_FUNC_IMPL(__imp__sub_82A2E378) {
	PPC_FUNC_PROLOGUE();
	// rlwinm. r9,r3,24,24,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 24) & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// clrlwi r3,r3,24
	ctx.r3.u64 = ctx.r3.u32 & 0xFF;
	// beqlr 
	if (ctx.cr0.eq) return;
	// cmpwi cr6,r9,9
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 9, ctx.xer);
	// bne cr6,0x82a2e394
	if (!ctx.cr6.eq) goto loc_82A2E394;
	// addi r3,r3,124
	ctx.r3.s64 = ctx.r3.s64 + 124;
	// blr 
	return;
loc_82A2E394:
	// cmpwi cr6,r9,6
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 6, ctx.xer);
	// bge cr6,0x82a2e418
	if (!ctx.cr6.lt) goto loc_82A2E418;
	// clrlwi. r10,r3,24
	ctx.r10.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// blt 0x82a2e3b0
	if (ctx.cr0.lt) goto loc_82A2E3B0;
	// cmpwi cr6,r10,17
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 17, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// ble cr6,0x82a2e3b4
	if (!ctx.cr6.gt) goto loc_82A2E3B4;
loc_82A2E3B0:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82A2E3B4:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82a2e3cc
	if (ctx.cr0.eq) goto loc_82A2E3CC;
	// mulli r11,r3,5
	ctx.r11.s64 = ctx.r3.s64 * 5;
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// addi r3,r11,26
	ctx.r3.s64 = ctx.r11.s64 + 26;
	// blr 
	return;
loc_82A2E3CC:
	// cmpwi cr6,r10,20
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 20, ctx.xer);
	// blt cr6,0x82a2e3e0
	if (ctx.cr6.lt) goto loc_82A2E3E0;
	// cmpwi cr6,r10,22
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 22, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// ble cr6,0x82a2e3e4
	if (!ctx.cr6.gt) goto loc_82A2E3E4;
loc_82A2E3E0:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82A2E3E4:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82a2e3f4
	if (ctx.cr0.eq) goto loc_82A2E3F4;
	// addi r3,r3,97
	ctx.r3.s64 = ctx.r3.s64 + 97;
	// blr 
	return;
loc_82A2E3F4:
	// cmpwi cr6,r10,23
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 23, ctx.xer);
	// blt cr6,0x82a2e408
	if (ctx.cr6.lt) goto loc_82A2E408;
	// cmpwi cr6,r10,26
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 26, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// ble cr6,0x82a2e40c
	if (!ctx.cr6.gt) goto loc_82A2E40C;
loc_82A2E408:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82A2E40C:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// addi r3,r3,97
	ctx.r3.s64 = ctx.r3.s64 + 97;
	// bnelr 
	if (!ctx.cr0.eq) return;
loc_82A2E418:
	// li r3,-1
	ctx.r3.s64 = -1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A2E420"))) PPC_WEAK_FUNC(sub_82A2E420);
PPC_FUNC_IMPL(__imp__sub_82A2E420) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,132(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 132);
	// addi r10,r11,72
	ctx.r10.s64 = ctx.r11.s64 + 72;
	// ld r10,72(r11)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r11.u32 + 72);
	// std r10,88(r11)
	PPC_STORE_U64(ctx.r11.u32 + 88, ctx.r10.u64);
	// ld r10,80(r11)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r11.u32 + 80);
	// std r10,96(r11)
	PPC_STORE_U64(ctx.r11.u32 + 96, ctx.r10.u64);
	// lwz r11,132(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 132);
	// lwz r10,488(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 488);
	// stw r10,492(r11)
	PPC_STORE_U32(ctx.r11.u32 + 492, ctx.r10.u32);
	// lwz r11,132(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 132);
	// lwz r10,64(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 64);
	// ori r10,r10,32
	ctx.r10.u64 = ctx.r10.u64 | 32;
	// stw r10,64(r11)
	PPC_STORE_U32(ctx.r11.u32 + 64, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A2E458"))) PPC_WEAK_FUNC(sub_82A2E458);
PPC_FUNC_IMPL(__imp__sub_82A2E458) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,132(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 132);
	// lwz r10,64(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 64);
	// rlwinm. r10,r10,29,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 29) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x82a2e474
	if (ctx.cr0.eq) goto loc_82A2E474;
	// lwz r10,64(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 64);
	// rlwinm r10,r10,0,30,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFFFFFFFFFB;
	// stw r10,64(r11)
	PPC_STORE_U32(ctx.r11.u32 + 64, ctx.r10.u32);
loc_82A2E474:
	// lwz r11,132(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 132);
	// clrlwi. r10,r4,24
	ctx.r10.u64 = ctx.r4.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// lwz r10,64(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 64);
	// ori r10,r10,8
	ctx.r10.u64 = ctx.r10.u64 | 8;
	// stw r10,64(r11)
	PPC_STORE_U32(ctx.r11.u32 + 64, ctx.r10.u32);
	// beq 0x82a2e538
	if (ctx.cr0.eq) goto loc_82A2E538;
	// lis r11,0
	ctx.r11.s64 = 0;
	// lwz r8,128(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 128);
	// lwz r10,132(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 132);
	// li r9,0
	ctx.r9.s64 = 0;
	// ori r11,r11,41064
	ctx.r11.u64 = ctx.r11.u64 | 41064;
	// addi r7,r10,72
	ctx.r7.s64 = ctx.r10.s64 + 72;
	// add r8,r8,r11
	ctx.r8.u64 = ctx.r8.u64 + ctx.r11.u64;
	// mr r7,r11
	ctx.r7.u64 = ctx.r11.u64;
	// ld r11,0(r8)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r8.u32 + 0);
	// std r11,72(r10)
	PPC_STORE_U64(ctx.r10.u32 + 72, ctx.r11.u64);
	// ld r11,8(r8)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r8.u32 + 8);
	// std r11,80(r10)
	PPC_STORE_U64(ctx.r10.u32 + 80, ctx.r11.u64);
	// lwz r11,132(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 132);
	// lwz r10,128(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 128);
	// add r10,r10,r7
	ctx.r10.u64 = ctx.r10.u64 + ctx.r7.u64;
	// ld r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r10.u32 + 0);
	// addi r7,r11,88
	ctx.r7.s64 = ctx.r11.s64 + 88;
	// std r8,88(r11)
	PPC_STORE_U64(ctx.r11.u32 + 88, ctx.r8.u64);
	// ld r10,8(r10)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r10.u32 + 8);
	// std r10,96(r11)
	PPC_STORE_U64(ctx.r11.u32 + 96, ctx.r10.u64);
	// lwz r11,132(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 132);
	// lwz r10,64(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 64);
	// rlwinm r10,r10,0,25,23
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFFFFFFFF7F;
	// stw r10,64(r11)
	PPC_STORE_U32(ctx.r11.u32 + 64, ctx.r10.u32);
	// lwz r11,132(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 132);
	// lwz r10,64(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 64);
	// rlwinm r10,r10,0,24,22
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFFFFFFFEFF;
	// stw r10,64(r11)
	PPC_STORE_U32(ctx.r11.u32 + 64, ctx.r10.u32);
	// lwz r11,132(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 132);
	// lwz r10,64(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 64);
	// rlwinm r10,r10,0,26,24
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFFFFFFFFBF;
	// stw r10,64(r11)
	PPC_STORE_U32(ctx.r11.u32 + 64, ctx.r10.u32);
	// lwz r11,132(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 132);
	// stw r9,488(r11)
	PPC_STORE_U32(ctx.r11.u32 + 488, ctx.r9.u32);
	// stw r9,492(r11)
	PPC_STORE_U32(ctx.r11.u32 + 492, ctx.r9.u32);
	// lwz r11,132(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 132);
	// lwz r10,64(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 64);
	// rlwinm r10,r10,0,28,26
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFFFFFFFFEF;
	// stw r10,64(r11)
	PPC_STORE_U32(ctx.r11.u32 + 64, ctx.r10.u32);
	// lwz r11,132(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 132);
	// lwz r10,64(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 64);
	// rlwinm r10,r10,0,27,25
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFFFFFFFFDF;
	// b 0x82a2e578
	goto loc_82A2E578;
loc_82A2E538:
	// lwz r11,132(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 132);
	// addi r10,r11,88
	ctx.r10.s64 = ctx.r11.s64 + 88;
	// ld r10,88(r11)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r11.u32 + 88);
	// std r10,72(r11)
	PPC_STORE_U64(ctx.r11.u32 + 72, ctx.r10.u64);
	// ld r10,96(r11)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r11.u32 + 96);
	// std r10,80(r11)
	PPC_STORE_U64(ctx.r11.u32 + 80, ctx.r10.u64);
	// lwz r11,132(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 132);
	// lwz r10,492(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 492);
	// stw r10,488(r11)
	PPC_STORE_U32(ctx.r11.u32 + 488, ctx.r10.u32);
	// lwz r11,132(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 132);
	// lwz r11,64(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 64);
	// rlwinm. r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bnelr 
	if (!ctx.cr0.eq) return;
	// lwz r11,132(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 132);
	// lwz r10,64(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 64);
	// rlwinm r10,r10,0,28,26
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFFFFFFFFEF;
loc_82A2E578:
	// stw r10,64(r11)
	PPC_STORE_U32(ctx.r11.u32 + 64, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A2E580"))) PPC_WEAK_FUNC(sub_82A2E580);
PPC_FUNC_IMPL(__imp__sub_82A2E580) {
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
	// lwz r11,132(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 132);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// ble cr6,0x82a2e608
	if (!ctx.cr6.gt) goto loc_82A2E608;
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// bge cr6,0x82a2e668
	if (!ctx.cr6.lt) goto loc_82A2E668;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82a11b90
	ctx.lr = 0x82A2E5B8;
	sub_82A11B90(ctx, base);
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// bl 0x82a0fb38
	ctx.lr = 0x82A2E5C0;
	sub_82A0FB38(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,132(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 132);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// addi r11,r11,496
	ctx.r11.s64 = ctx.r11.s64 + 496;
	// bne cr6,0x82a2e5d8
	if (!ctx.cr6.eq) goto loc_82A2E5D8;
	// li r11,0
	ctx.r11.s64 = 0;
loc_82A2E5D8:
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addic r10,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// subfe r31,r10,r11
	temp.u8 = (~ctx.r10.u32 + ctx.r11.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r31.u64 = ~ctx.r10.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// bl 0x82e01548
	ctx.lr = 0x82A2E5EC;
	sub_82E01548(ctx, base);
	// clrlwi. r11,r31,24
	ctx.r11.u64 = ctx.r31.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82a2e668
	if (ctx.cr0.eq) goto loc_82A2E668;
	// lwz r11,132(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 132);
	// lwz r10,64(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 64);
	// ori r10,r10,2
	ctx.r10.u64 = ctx.r10.u64 | 2;
	// stw r10,64(r11)
	PPC_STORE_U32(ctx.r11.u32 + 64, ctx.r10.u32);
	// b 0x82a2e668
	goto loc_82A2E668;
loc_82A2E608:
	// lbz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 8);
	// cmplwi r10,0
	ctx.cr0.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq 0x82a2e630
	if (ctx.cr0.eq) goto loc_82A2E630;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// add r10,r10,r4
	ctx.r10.u64 = ctx.r10.u64 + ctx.r4.u64;
	// cmpwi cr6,r10,99
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 99, ctx.xer);
	// ble cr6,0x82a2e628
	if (!ctx.cr6.gt) goto loc_82A2E628;
	// li r10,99
	ctx.r10.s64 = 99;
loc_82A2E628:
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// b 0x82a2e668
	goto loc_82A2E668;
loc_82A2E630:
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// bge cr6,0x82a2e644
	if (!ctx.cr6.lt) goto loc_82A2E644;
	// lwz r10,64(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 64);
	// ori r10,r10,2
	ctx.r10.u64 = ctx.r10.u64 | 2;
	// stw r10,64(r11)
	PPC_STORE_U32(ctx.r11.u32 + 64, ctx.r10.u32);
loc_82A2E644:
	// lwz r11,128(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 128);
	// addis r10,r11,1
	ctx.r10.s64 = ctx.r11.s64 + 65536;
	// addi r10,r10,-24612
	ctx.r10.s64 = ctx.r10.s64 + -24612;
	// lwz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// add r11,r11,r4
	ctx.r11.u64 = ctx.r11.u64 + ctx.r4.u64;
	// cmpwi cr6,r11,99
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 99, ctx.xer);
	// ble cr6,0x82a2e664
	if (!ctx.cr6.gt) goto loc_82A2E664;
	// li r11,99
	ctx.r11.s64 = 99;
loc_82A2E664:
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r11.u32);
loc_82A2E668:
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

__attribute__((alias("__imp__sub_82A2E680"))) PPC_WEAK_FUNC(sub_82A2E680);
PPC_FUNC_IMPL(__imp__sub_82A2E680) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,128(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 128);
	// addis r10,r11,1
	ctx.r10.s64 = ctx.r11.s64 + 65536;
	// addi r10,r10,-24612
	ctx.r10.s64 = ctx.r10.s64 + -24612;
	// lwz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r11.u32);
	// lwz r11,132(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 132);
	// lwz r10,64(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 64);
	// ori r10,r10,1
	ctx.r10.u64 = ctx.r10.u64 | 1;
	// stw r10,64(r11)
	PPC_STORE_U32(ctx.r11.u32 + 64, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A2E6AC"))) PPC_WEAK_FUNC(sub_82A2E6AC);
PPC_FUNC_IMPL(__imp__sub_82A2E6AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A2E6B0"))) PPC_WEAK_FUNC(sub_82A2E6B0);
PPC_FUNC_IMPL(__imp__sub_82A2E6B0) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,132(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 132);
	// lwz r11,64(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 64);
	// clrlwi. r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82a2e6dc
	if (!ctx.cr0.eq) goto loc_82A2E6DC;
	// lis r11,0
	ctx.r11.s64 = 0;
	// lwz r10,128(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 128);
	// ori r11,r11,40924
	ctx.r11.u64 = ctx.r11.u64 | 40924;
	// lwzx r11,r10,r11
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// ble cr6,0x82a2e6e0
	if (!ctx.cr6.gt) goto loc_82A2E6E0;
loc_82A2E6DC:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82A2E6E0:
	// clrlwi r3,r11,24
	ctx.r3.u64 = ctx.r11.u32 & 0xFF;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A2E6E8"))) PPC_WEAK_FUNC(sub_82A2E6E8);
PPC_FUNC_IMPL(__imp__sub_82A2E6E8) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,132(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 132);
	// lwz r10,64(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 64);
	// rlwinm r10,r10,0,31,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFFFFFFFFFD;
	// stw r10,64(r11)
	PPC_STORE_U32(ctx.r11.u32 + 64, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A2E6FC"))) PPC_WEAK_FUNC(sub_82A2E6FC);
PPC_FUNC_IMPL(__imp__sub_82A2E6FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A2E700"))) PPC_WEAK_FUNC(sub_82A2E700);
PPC_FUNC_IMPL(__imp__sub_82A2E700) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,132(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 132);
	// lwz r11,64(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 64);
	// rlwinm r3,r11,31,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 31) & 0x1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A2E710"))) PPC_WEAK_FUNC(sub_82A2E710);
PPC_FUNC_IMPL(__imp__sub_82A2E710) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,132(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 132);
	// lwz r10,64(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 64);
	// ori r10,r10,16
	ctx.r10.u64 = ctx.r10.u64 | 16;
	// stw r10,64(r11)
	PPC_STORE_U32(ctx.r11.u32 + 64, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A2E724"))) PPC_WEAK_FUNC(sub_82A2E724);
PPC_FUNC_IMPL(__imp__sub_82A2E724) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A2E728"))) PPC_WEAK_FUNC(sub_82A2E728);
PPC_FUNC_IMPL(__imp__sub_82A2E728) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,132(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 132);
	// lwz r11,64(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 64);
	// rlwinm r3,r11,28,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 28) & 0x1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A2E738"))) PPC_WEAK_FUNC(sub_82A2E738);
PPC_FUNC_IMPL(__imp__sub_82A2E738) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,132(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 132);
	// lwz r10,64(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 64);
	// ori r10,r10,64
	ctx.r10.u64 = ctx.r10.u64 | 64;
	// stw r10,64(r11)
	PPC_STORE_U32(ctx.r11.u32 + 64, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A2E74C"))) PPC_WEAK_FUNC(sub_82A2E74C);
PPC_FUNC_IMPL(__imp__sub_82A2E74C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A2E750"))) PPC_WEAK_FUNC(sub_82A2E750);
PPC_FUNC_IMPL(__imp__sub_82A2E750) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,132(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 132);
	// lwz r11,64(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 64);
	// rlwinm r3,r11,26,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 26) & 0x1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A2E760"))) PPC_WEAK_FUNC(sub_82A2E760);
PPC_FUNC_IMPL(__imp__sub_82A2E760) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,132(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 132);
	// lwz r10,64(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 64);
	// ori r10,r10,128
	ctx.r10.u64 = ctx.r10.u64 | 128;
	// stw r10,64(r11)
	PPC_STORE_U32(ctx.r11.u32 + 64, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A2E774"))) PPC_WEAK_FUNC(sub_82A2E774);
PPC_FUNC_IMPL(__imp__sub_82A2E774) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A2E778"))) PPC_WEAK_FUNC(sub_82A2E778);
PPC_FUNC_IMPL(__imp__sub_82A2E778) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,132(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 132);
	// lwz r11,64(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 64);
	// rlwinm r3,r11,25,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 25) & 0x1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A2E788"))) PPC_WEAK_FUNC(sub_82A2E788);
PPC_FUNC_IMPL(__imp__sub_82A2E788) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,132(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 132);
	// lwz r10,64(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 64);
	// ori r10,r10,256
	ctx.r10.u64 = ctx.r10.u64 | 256;
	// stw r10,64(r11)
	PPC_STORE_U32(ctx.r11.u32 + 64, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A2E79C"))) PPC_WEAK_FUNC(sub_82A2E79C);
PPC_FUNC_IMPL(__imp__sub_82A2E79C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A2E7A0"))) PPC_WEAK_FUNC(sub_82A2E7A0);
PPC_FUNC_IMPL(__imp__sub_82A2E7A0) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,132(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 132);
	// lwz r11,64(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 64);
	// rlwinm r3,r11,24,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 24) & 0x1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A2E7B0"))) PPC_WEAK_FUNC(sub_82A2E7B0);
PPC_FUNC_IMPL(__imp__sub_82A2E7B0) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,132(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 132);
	// lwz r10,64(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 64);
	// ori r10,r10,512
	ctx.r10.u64 = ctx.r10.u64 | 512;
	// stw r10,64(r11)
	PPC_STORE_U32(ctx.r11.u32 + 64, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A2E7C4"))) PPC_WEAK_FUNC(sub_82A2E7C4);
PPC_FUNC_IMPL(__imp__sub_82A2E7C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A2E7C8"))) PPC_WEAK_FUNC(sub_82A2E7C8);
PPC_FUNC_IMPL(__imp__sub_82A2E7C8) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,132(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 132);
	// lwz r11,64(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 64);
	// rlwinm r3,r11,23,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 23) & 0x1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A2E7D8"))) PPC_WEAK_FUNC(sub_82A2E7D8);
PPC_FUNC_IMPL(__imp__sub_82A2E7D8) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,132(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 132);
	// lwz r10,64(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 64);
	// ori r10,r10,1024
	ctx.r10.u64 = ctx.r10.u64 | 1024;
	// stw r10,64(r11)
	PPC_STORE_U32(ctx.r11.u32 + 64, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A2E7EC"))) PPC_WEAK_FUNC(sub_82A2E7EC);
PPC_FUNC_IMPL(__imp__sub_82A2E7EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A2E7F0"))) PPC_WEAK_FUNC(sub_82A2E7F0);
PPC_FUNC_IMPL(__imp__sub_82A2E7F0) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,132(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 132);
	// lwz r11,64(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 64);
	// rlwinm r3,r11,22,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 22) & 0x1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A2E800"))) PPC_WEAK_FUNC(sub_82A2E800);
PPC_FUNC_IMPL(__imp__sub_82A2E800) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,132(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 132);
	// cmplwi cr6,r4,90
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 90, ctx.xer);
	// addi r11,r11,72
	ctx.r11.s64 = ctx.r11.s64 + 72;
	// blt cr6,0x82a2e81c
	if (ctx.cr6.lt) goto loc_82A2E81C;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r3,r11,14964
	ctx.r3.s64 = ctx.r11.s64 + 14964;
	// b 0x82dffbd8
	sub_82DFFBD8(ctx, base);
	return;
loc_82A2E81C:
	// rlwinm r10,r4,29,3,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 29) & 0x1FFFFFF8;
	// li r8,1
	ctx.r8.s64 = 1;
	// clrldi r9,r4,58
	ctx.r9.u64 = ctx.r4.u64 & 0x3F;
	// sld r9,r8,r9
	ctx.r9.u64 = ctx.r9.u8 & 0x40 ? 0 : (ctx.r8.u64 << (ctx.r9.u8 & 0x7F));
	// ldx r8,r10,r11
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r10.u32 + ctx.r11.u32);
	// or r9,r9,r8
	ctx.r9.u64 = ctx.r9.u64 | ctx.r8.u64;
	// stdx r9,r10,r11
	PPC_STORE_U64(ctx.r10.u32 + ctx.r11.u32, ctx.r9.u64);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A2E83C"))) PPC_WEAK_FUNC(sub_82A2E83C);
PPC_FUNC_IMPL(__imp__sub_82A2E83C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A2E840"))) PPC_WEAK_FUNC(sub_82A2E840);
PPC_FUNC_IMPL(__imp__sub_82A2E840) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,132(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 132);
	// cmplwi cr6,r4,90
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 90, ctx.xer);
	// addi r11,r11,72
	ctx.r11.s64 = ctx.r11.s64 + 72;
	// blt cr6,0x82a2e85c
	if (ctx.cr6.lt) goto loc_82A2E85C;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r3,r11,14964
	ctx.r3.s64 = ctx.r11.s64 + 14964;
	// b 0x82dffbd8
	sub_82DFFBD8(ctx, base);
	return;
loc_82A2E85C:
	// rlwinm r10,r4,29,3,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 29) & 0x1FFFFFF8;
	// clrldi r9,r4,58
	ctx.r9.u64 = ctx.r4.u64 & 0x3F;
	// li r8,1
	ctx.r8.s64 = 1;
	// sld r9,r8,r9
	ctx.r9.u64 = ctx.r9.u8 & 0x40 ? 0 : (ctx.r8.u64 << (ctx.r9.u8 & 0x7F));
	// ldx r11,r10,r11
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r10.u32 + ctx.r11.u32);
	// and r11,r9,r11
	ctx.r11.u64 = ctx.r9.u64 & ctx.r11.u64;
	// cmpldi cr6,r11,0
	ctx.cr6.compare<uint64_t>(ctx.r11.u64, 0, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// bne cr6,0x82a2e884
	if (!ctx.cr6.eq) goto loc_82A2E884;
	// li r11,0
	ctx.r11.s64 = 0;
loc_82A2E884:
	// clrlwi r3,r11,24
	ctx.r3.u64 = ctx.r11.u32 & 0xFF;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A2E88C"))) PPC_WEAK_FUNC(sub_82A2E88C);
PPC_FUNC_IMPL(__imp__sub_82A2E88C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A2E890"))) PPC_WEAK_FUNC(sub_82A2E890);
PPC_FUNC_IMPL(__imp__sub_82A2E890) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,128(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 128);
	// cmplwi cr6,r4,90
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 90, ctx.xer);
	// addis r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 65536;
	// addi r11,r11,-24472
	ctx.r11.s64 = ctx.r11.s64 + -24472;
	// blt cr6,0x82a2e8b0
	if (ctx.cr6.lt) goto loc_82A2E8B0;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r3,r11,14964
	ctx.r3.s64 = ctx.r11.s64 + 14964;
	// b 0x82dffbd8
	sub_82DFFBD8(ctx, base);
	return;
loc_82A2E8B0:
	// rlwinm r10,r4,29,3,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 29) & 0x1FFFFFF8;
	// clrldi r9,r4,58
	ctx.r9.u64 = ctx.r4.u64 & 0x3F;
	// li r8,1
	ctx.r8.s64 = 1;
	// sld r9,r8,r9
	ctx.r9.u64 = ctx.r9.u8 & 0x40 ? 0 : (ctx.r8.u64 << (ctx.r9.u8 & 0x7F));
	// ldx r11,r10,r11
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r10.u32 + ctx.r11.u32);
	// and r11,r9,r11
	ctx.r11.u64 = ctx.r9.u64 & ctx.r11.u64;
	// cmpldi cr6,r11,0
	ctx.cr6.compare<uint64_t>(ctx.r11.u64, 0, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// bne cr6,0x82a2e8d8
	if (!ctx.cr6.eq) goto loc_82A2E8D8;
	// li r11,0
	ctx.r11.s64 = 0;
loc_82A2E8D8:
	// clrlwi r3,r11,24
	ctx.r3.u64 = ctx.r11.u32 & 0xFF;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A2E8E0"))) PPC_WEAK_FUNC(sub_82A2E8E0);
PPC_FUNC_IMPL(__imp__sub_82A2E8E0) {
	PPC_FUNC_PROLOGUE();
	// mr r8,r3
	ctx.r8.u64 = ctx.r3.u64;
	// clrlwi. r11,r4,24
	ctx.r11.u64 = ctx.r4.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// li r3,0
	ctx.r3.s64 = 0;
	// blt 0x82a2e8fc
	if (ctx.cr0.lt) goto loc_82A2E8FC;
	// cmpwi cr6,r11,17
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 17, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// ble cr6,0x82a2e900
	if (!ctx.cr6.gt) goto loc_82A2E900;
loc_82A2E8FC:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82A2E900:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beqlr 
	if (ctx.cr0.eq) return;
	// mulli r11,r4,5
	ctx.r11.s64 = ctx.r4.s64 * 5;
	// li r9,0
	ctx.r9.s64 = 0;
loc_82A2E910:
	// cmplwi cr6,r11,90
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 90, ctx.xer);
	// bge cr6,0x82a2e96c
	if (!ctx.cr6.lt) goto loc_82A2E96C;
	// rlwinm r10,r11,26,6,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 26) & 0x3FFFFFF;
	// lwz r7,128(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 128);
	// clrldi r6,r11,58
	ctx.r6.u64 = ctx.r11.u64 & 0x3F;
	// addi r10,r10,5133
	ctx.r10.s64 = ctx.r10.s64 + 5133;
	// li r5,1
	ctx.r5.s64 = 1;
	// rlwinm r10,r10,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0xFFFFFFF8;
	// sld r6,r5,r6
	ctx.r6.u64 = ctx.r6.u8 & 0x40 ? 0 : (ctx.r5.u64 << (ctx.r6.u8 & 0x7F));
	// ldx r10,r10,r7
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r10.u32 + ctx.r7.u32);
	// and r10,r10,r6
	ctx.r10.u64 = ctx.r10.u64 & ctx.r6.u64;
	// cmpldi cr6,r10,0
	ctx.cr6.compare<uint64_t>(ctx.r10.u64, 0, ctx.xer);
	// li r10,1
	ctx.r10.s64 = 1;
	// bne cr6,0x82a2e94c
	if (!ctx.cr6.eq) goto loc_82A2E94C;
	// li r10,0
	ctx.r10.s64 = 0;
loc_82A2E94C:
	// clrlwi. r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x82a2e958
	if (ctx.cr0.eq) goto loc_82A2E958;
	// addi r3,r3,1
	ctx.r3.s64 = ctx.r3.s64 + 1;
loc_82A2E958:
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r9,5
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 5, ctx.xer);
	// blt cr6,0x82a2e910
	if (ctx.cr6.lt) goto loc_82A2E910;
	// blr 
	return;
loc_82A2E96C:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r3,r11,14964
	ctx.r3.s64 = ctx.r11.s64 + 14964;
	// b 0x82dffbd8
	sub_82DFFBD8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82A2E978"))) PPC_WEAK_FUNC(sub_82A2E978);
PPC_FUNC_IMPL(__imp__sub_82A2E978) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// blt cr6,0x82a2e9d0
	if (ctx.cr6.lt) goto loc_82A2E9D0;
	// cmpwi cr6,r4,12
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 12, ctx.xer);
	// bge cr6,0x82a2e9d0
	if (!ctx.cr6.lt) goto loc_82A2E9D0;
	// lwz r11,132(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 132);
	// cmplwi cr6,r4,12
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 12, ctx.xer);
	// addi r11,r11,112
	ctx.r11.s64 = ctx.r11.s64 + 112;
	// blt cr6,0x82a2e9a4
	if (ctx.cr6.lt) goto loc_82A2E9A4;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r3,r11,14964
	ctx.r3.s64 = ctx.r11.s64 + 14964;
	// b 0x82dffbd8
	sub_82DFFBD8(ctx, base);
	return;
loc_82A2E9A4:
	// rlwinm r10,r4,27,5,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 27) & 0x7FFFFFF;
	// clrlwi r9,r4,27
	ctx.r9.u64 = ctx.r4.u32 & 0x1F;
	// addi r10,r10,72
	ctx.r10.s64 = ctx.r10.s64 + 72;
	// li r8,1
	ctx.r8.s64 = 1;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// slw r9,r8,r9
	ctx.r9.u64 = ctx.r9.u8 & 0x20 ? 0 : (ctx.r8.u32 << (ctx.r9.u8 & 0x3F));
	// lwzx r11,r10,r11
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// and r11,r9,r11
	ctx.r11.u64 = ctx.r9.u64 & ctx.r11.u64;
	// addic r10,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// subfe r3,r10,r11
	temp.u8 = (~ctx.r10.u32 + ctx.r11.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r3.u64 = ~ctx.r10.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// blr 
	return;
loc_82A2E9D0:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A2E9D8"))) PPC_WEAK_FUNC(sub_82A2E9D8);
PPC_FUNC_IMPL(__imp__sub_82A2E9D8) {
	PPC_FUNC_PROLOGUE();
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// bltlr cr6
	if (ctx.cr6.lt) return;
	// cmpwi cr6,r4,12
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 12, ctx.xer);
	// bgelr cr6
	if (!ctx.cr6.lt) return;
	// lwz r11,132(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 132);
	// cmplwi cr6,r4,12
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 12, ctx.xer);
	// addi r11,r11,400
	ctx.r11.s64 = ctx.r11.s64 + 400;
	// blt cr6,0x82a2ea04
	if (ctx.cr6.lt) goto loc_82A2EA04;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r3,r11,14964
	ctx.r3.s64 = ctx.r11.s64 + 14964;
	// b 0x82dffbd8
	sub_82DFFBD8(ctx, base);
	return;
loc_82A2EA04:
	// rlwinm r10,r4,29,3,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 29) & 0x1FFFFFFC;
	// li r8,1
	ctx.r8.s64 = 1;
	// clrlwi r9,r4,27
	ctx.r9.u64 = ctx.r4.u32 & 0x1F;
	// slw r9,r8,r9
	ctx.r9.u64 = ctx.r9.u8 & 0x20 ? 0 : (ctx.r8.u32 << (ctx.r9.u8 & 0x3F));
	// lwzx r8,r10,r11
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// or r9,r9,r8
	ctx.r9.u64 = ctx.r9.u64 | ctx.r8.u64;
	// stwx r9,r10,r11
	PPC_STORE_U32(ctx.r10.u32 + ctx.r11.u32, ctx.r9.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A2EA24"))) PPC_WEAK_FUNC(sub_82A2EA24);
PPC_FUNC_IMPL(__imp__sub_82A2EA24) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A2EA28"))) PPC_WEAK_FUNC(sub_82A2EA28);
PPC_FUNC_IMPL(__imp__sub_82A2EA28) {
	PPC_FUNC_PROLOGUE();
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// blt cr6,0x82a2ea8c
	if (ctx.cr6.lt) goto loc_82A2EA8C;
	// cmpwi cr6,r4,90
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 90, ctx.xer);
	// bge cr6,0x82a2ea8c
	if (!ctx.cr6.lt) goto loc_82A2EA8C;
	// lwz r11,132(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 132);
	// cmplwi cr6,r4,90
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 90, ctx.xer);
	// addi r11,r11,112
	ctx.r11.s64 = ctx.r11.s64 + 112;
	// blt cr6,0x82a2ea54
	if (ctx.cr6.lt) goto loc_82A2EA54;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r3,r11,14964
	ctx.r3.s64 = ctx.r11.s64 + 14964;
	// b 0x82dffbd8
	sub_82DFFBD8(ctx, base);
	return;
loc_82A2EA54:
	// rlwinm r10,r4,26,6,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 26) & 0x3FFFFFF;
	// clrldi r9,r4,58
	ctx.r9.u64 = ctx.r4.u64 & 0x3F;
	// addi r10,r10,37
	ctx.r10.s64 = ctx.r10.s64 + 37;
	// li r8,1
	ctx.r8.s64 = 1;
	// rlwinm r10,r10,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0xFFFFFFF8;
	// sld r9,r8,r9
	ctx.r9.u64 = ctx.r9.u8 & 0x40 ? 0 : (ctx.r8.u64 << (ctx.r9.u8 & 0x7F));
	// ldx r11,r10,r11
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r10.u32 + ctx.r11.u32);
	// and r11,r9,r11
	ctx.r11.u64 = ctx.r9.u64 & ctx.r11.u64;
	// cmpldi cr6,r11,0
	ctx.cr6.compare<uint64_t>(ctx.r11.u64, 0, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// bne cr6,0x82a2ea84
	if (!ctx.cr6.eq) goto loc_82A2EA84;
	// li r11,0
	ctx.r11.s64 = 0;
loc_82A2EA84:
	// clrlwi r3,r11,24
	ctx.r3.u64 = ctx.r11.u32 & 0xFF;
	// blr 
	return;
loc_82A2EA8C:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A2EA94"))) PPC_WEAK_FUNC(sub_82A2EA94);
PPC_FUNC_IMPL(__imp__sub_82A2EA94) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A2EA98"))) PPC_WEAK_FUNC(sub_82A2EA98);
PPC_FUNC_IMPL(__imp__sub_82A2EA98) {
	PPC_FUNC_PROLOGUE();
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// bltlr cr6
	if (ctx.cr6.lt) return;
	// cmpwi cr6,r4,90
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 90, ctx.xer);
	// bgelr cr6
	if (!ctx.cr6.lt) return;
	// lwz r11,132(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 132);
	// cmplwi cr6,r4,90
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 90, ctx.xer);
	// addi r11,r11,408
	ctx.r11.s64 = ctx.r11.s64 + 408;
	// blt cr6,0x82a2eac4
	if (ctx.cr6.lt) goto loc_82A2EAC4;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r3,r11,14964
	ctx.r3.s64 = ctx.r11.s64 + 14964;
	// b 0x82dffbd8
	sub_82DFFBD8(ctx, base);
	return;
loc_82A2EAC4:
	// rlwinm r10,r4,29,3,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 29) & 0x1FFFFFF8;
	// li r8,1
	ctx.r8.s64 = 1;
	// clrldi r9,r4,58
	ctx.r9.u64 = ctx.r4.u64 & 0x3F;
	// sld r9,r8,r9
	ctx.r9.u64 = ctx.r9.u8 & 0x40 ? 0 : (ctx.r8.u64 << (ctx.r9.u8 & 0x7F));
	// ldx r8,r10,r11
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r10.u32 + ctx.r11.u32);
	// or r9,r9,r8
	ctx.r9.u64 = ctx.r9.u64 | ctx.r8.u64;
	// stdx r9,r10,r11
	PPC_STORE_U64(ctx.r10.u32 + ctx.r11.u32, ctx.r9.u64);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A2EAE4"))) PPC_WEAK_FUNC(sub_82A2EAE4);
PPC_FUNC_IMPL(__imp__sub_82A2EAE4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A2EAE8"))) PPC_WEAK_FUNC(sub_82A2EAE8);
PPC_FUNC_IMPL(__imp__sub_82A2EAE8) {
	PPC_FUNC_PROLOGUE();
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// bltlr cr6
	if (ctx.cr6.lt) return;
	// cmpwi cr6,r4,9
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 9, ctx.xer);
	// bgelr cr6
	if (!ctx.cr6.lt) return;
	// clrlwi. r11,r5,24
	ctx.r11.u64 = ctx.r5.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// lwz r11,132(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 132);
	// cmplwi cr6,r4,9
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 9, ctx.xer);
	// addi r11,r11,428
	ctx.r11.s64 = ctx.r11.s64 + 428;
	// beq 0x82a2eb38
	if (ctx.cr0.eq) goto loc_82A2EB38;
	// blt cr6,0x82a2eb1c
	if (ctx.cr6.lt) goto loc_82A2EB1C;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r3,r11,14964
	ctx.r3.s64 = ctx.r11.s64 + 14964;
	// b 0x82dffbd8
	sub_82DFFBD8(ctx, base);
	return;
loc_82A2EB1C:
	// rlwinm r10,r4,29,3,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 29) & 0x1FFFFFFC;
	// li r8,1
	ctx.r8.s64 = 1;
	// clrlwi r9,r4,27
	ctx.r9.u64 = ctx.r4.u32 & 0x1F;
	// slw r9,r8,r9
	ctx.r9.u64 = ctx.r9.u8 & 0x20 ? 0 : (ctx.r8.u32 << (ctx.r9.u8 & 0x3F));
	// lwzx r8,r10,r11
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// or r9,r9,r8
	ctx.r9.u64 = ctx.r9.u64 | ctx.r8.u64;
	// b 0x82a2eb60
	goto loc_82A2EB60;
loc_82A2EB38:
	// blt cr6,0x82a2eb48
	if (ctx.cr6.lt) goto loc_82A2EB48;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r3,r11,14964
	ctx.r3.s64 = ctx.r11.s64 + 14964;
	// b 0x82dffbd8
	sub_82DFFBD8(ctx, base);
	return;
loc_82A2EB48:
	// rlwinm r10,r4,29,3,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 29) & 0x1FFFFFFC;
	// li r8,1
	ctx.r8.s64 = 1;
	// clrlwi r9,r4,27
	ctx.r9.u64 = ctx.r4.u32 & 0x1F;
	// slw r9,r8,r9
	ctx.r9.u64 = ctx.r9.u8 & 0x20 ? 0 : (ctx.r8.u32 << (ctx.r9.u8 & 0x3F));
	// lwzx r8,r10,r11
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// andc r9,r8,r9
	ctx.r9.u64 = ctx.r8.u64 & ~ctx.r9.u64;
loc_82A2EB60:
	// stwx r9,r10,r11
	PPC_STORE_U32(ctx.r10.u32 + ctx.r11.u32, ctx.r9.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A2EB68"))) PPC_WEAK_FUNC(sub_82A2EB68);
PPC_FUNC_IMPL(__imp__sub_82A2EB68) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// blt cr6,0x82a2ebc0
	if (ctx.cr6.lt) goto loc_82A2EBC0;
	// cmpwi cr6,r4,9
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 9, ctx.xer);
	// bge cr6,0x82a2ebc0
	if (!ctx.cr6.lt) goto loc_82A2EBC0;
	// lwz r11,132(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 132);
	// cmplwi cr6,r4,9
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 9, ctx.xer);
	// addi r11,r11,112
	ctx.r11.s64 = ctx.r11.s64 + 112;
	// blt cr6,0x82a2eb94
	if (ctx.cr6.lt) goto loc_82A2EB94;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r3,r11,14964
	ctx.r3.s64 = ctx.r11.s64 + 14964;
	// b 0x82dffbd8
	sub_82DFFBD8(ctx, base);
	return;
loc_82A2EB94:
	// rlwinm r10,r4,27,5,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 27) & 0x7FFFFFF;
	// clrlwi r9,r4,27
	ctx.r9.u64 = ctx.r4.u32 & 0x1F;
	// addi r10,r10,79
	ctx.r10.s64 = ctx.r10.s64 + 79;
	// li r8,1
	ctx.r8.s64 = 1;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// slw r9,r8,r9
	ctx.r9.u64 = ctx.r9.u8 & 0x20 ? 0 : (ctx.r8.u32 << (ctx.r9.u8 & 0x3F));
	// lwzx r11,r10,r11
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// and r11,r9,r11
	ctx.r11.u64 = ctx.r9.u64 & ctx.r11.u64;
	// addic r10,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// subfe r3,r10,r11
	temp.u8 = (~ctx.r10.u32 + ctx.r11.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r3.u64 = ~ctx.r10.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// blr 
	return;
loc_82A2EBC0:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A2EBC8"))) PPC_WEAK_FUNC(sub_82A2EBC8);
PPC_FUNC_IMPL(__imp__sub_82A2EBC8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x833a01ac
	ctx.lr = 0x82A2EBD0;
	__savegprlr_29(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// bl 0x82a11b90
	ctx.lr = 0x82A2EBE4;
	sub_82A11B90(ctx, base);
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// bl 0x82a0fb38
	ctx.lr = 0x82A2EBEC;
	sub_82A0FB38(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r11,132(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 132);
	// addi r30,r11,432
	ctx.r30.s64 = ctx.r11.s64 + 432;
	// bl 0x82e01548
	ctx.lr = 0x82A2EC04;
	sub_82E01548(ctx, base);
	// cmplwi cr6,r31,45
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 45, ctx.xer);
	// bge cr6,0x82a2ec70
	if (!ctx.cr6.lt) goto loc_82A2EC70;
	// clrlwi. r11,r29,24
	ctx.r11.u64 = ctx.r29.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// cmplwi cr6,r31,45
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 45, ctx.xer);
	// beq 0x82a2ec44
	if (ctx.cr0.eq) goto loc_82A2EC44;
	// blt cr6,0x82a2ec28
	if (ctx.cr6.lt) goto loc_82A2EC28;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r3,r11,14964
	ctx.r3.s64 = ctx.r11.s64 + 14964;
	// bl 0x82dffbd8
	ctx.lr = 0x82A2EC28;
	sub_82DFFBD8(ctx, base);
loc_82A2EC28:
	// rlwinm r11,r31,29,3,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 29) & 0x1FFFFFF8;
	// li r9,1
	ctx.r9.s64 = 1;
	// clrldi r10,r31,58
	ctx.r10.u64 = ctx.r31.u64 & 0x3F;
	// sld r10,r9,r10
	ctx.r10.u64 = ctx.r10.u8 & 0x40 ? 0 : (ctx.r9.u64 << (ctx.r10.u8 & 0x7F));
	// ldx r9,r11,r30
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r11.u32 + ctx.r30.u32);
	// or r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 | ctx.r9.u64;
	// b 0x82a2ec6c
	goto loc_82A2EC6C;
loc_82A2EC44:
	// blt cr6,0x82a2ec54
	if (ctx.cr6.lt) goto loc_82A2EC54;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r3,r11,14964
	ctx.r3.s64 = ctx.r11.s64 + 14964;
	// bl 0x82dffbd8
	ctx.lr = 0x82A2EC54;
	sub_82DFFBD8(ctx, base);
loc_82A2EC54:
	// rlwinm r11,r31,29,3,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 29) & 0x1FFFFFF8;
	// li r9,1
	ctx.r9.s64 = 1;
	// clrldi r10,r31,58
	ctx.r10.u64 = ctx.r31.u64 & 0x3F;
	// sld r10,r9,r10
	ctx.r10.u64 = ctx.r10.u8 & 0x40 ? 0 : (ctx.r9.u64 << (ctx.r10.u8 & 0x7F));
	// ldx r9,r11,r30
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r11.u32 + ctx.r30.u32);
	// andc r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 & ~ctx.r10.u64;
loc_82A2EC6C:
	// stdx r10,r11,r30
	PPC_STORE_U64(ctx.r11.u32 + ctx.r30.u32, ctx.r10.u64);
loc_82A2EC70:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x833a01fc
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82A2EC78"))) PPC_WEAK_FUNC(sub_82A2EC78);
PPC_FUNC_IMPL(__imp__sub_82A2EC78) {
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
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// bl 0x82a11b90
	ctx.lr = 0x82A2EC98;
	sub_82A11B90(ctx, base);
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// bl 0x82a0fb38
	ctx.lr = 0x82A2ECA0;
	sub_82A0FB38(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r11,132(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 132);
	// addi r30,r11,432
	ctx.r30.s64 = ctx.r11.s64 + 432;
	// bl 0x82e01548
	ctx.lr = 0x82A2ECB8;
	sub_82E01548(ctx, base);
	// cmplwi cr6,r31,45
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 45, ctx.xer);
	// bge cr6,0x82a2ecec
	if (!ctx.cr6.lt) goto loc_82A2ECEC;
	// rlwinm r10,r31,29,3,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 29) & 0x1FFFFFF8;
	// li r11,1
	ctx.r11.s64 = 1;
	// clrldi r9,r31,58
	ctx.r9.u64 = ctx.r31.u64 & 0x3F;
	// sld r9,r11,r9
	ctx.r9.u64 = ctx.r9.u8 & 0x40 ? 0 : (ctx.r11.u64 << (ctx.r9.u8 & 0x7F));
	// ldx r10,r10,r30
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r10.u32 + ctx.r30.u32);
	// and r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 & ctx.r10.u64;
	// cmpldi cr6,r10,0
	ctx.cr6.compare<uint64_t>(ctx.r10.u64, 0, ctx.xer);
	// bne cr6,0x82a2ece4
	if (!ctx.cr6.eq) goto loc_82A2ECE4;
	// li r11,0
	ctx.r11.s64 = 0;
loc_82A2ECE4:
	// clrlwi r3,r11,24
	ctx.r3.u64 = ctx.r11.u32 & 0xFF;
	// b 0x82a2ecf0
	goto loc_82A2ECF0;
loc_82A2ECEC:
	// li r3,1
	ctx.r3.s64 = 1;
loc_82A2ECF0:
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

__attribute__((alias("__imp__sub_82A2ED08"))) PPC_WEAK_FUNC(sub_82A2ED08);
PPC_FUNC_IMPL(__imp__sub_82A2ED08) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x833a01ac
	ctx.lr = 0x82A2ED10;
	__savegprlr_29(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// bl 0x82a11b90
	ctx.lr = 0x82A2ED24;
	sub_82A11B90(ctx, base);
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// bl 0x82a0fb38
	ctx.lr = 0x82A2ED2C;
	sub_82A0FB38(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r11,132(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 132);
	// addi r30,r11,440
	ctx.r30.s64 = ctx.r11.s64 + 440;
	// bl 0x82e01548
	ctx.lr = 0x82A2ED44;
	sub_82E01548(ctx, base);
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// blt cr6,0x82a2edb8
	if (ctx.cr6.lt) goto loc_82A2EDB8;
	// cmplwi cr6,r31,14
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 14, ctx.xer);
	// bge cr6,0x82a2edb8
	if (!ctx.cr6.lt) goto loc_82A2EDB8;
	// clrlwi. r11,r29,24
	ctx.r11.u64 = ctx.r29.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// cmplwi cr6,r31,14
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 14, ctx.xer);
	// beq 0x82a2ed8c
	if (ctx.cr0.eq) goto loc_82A2ED8C;
	// blt cr6,0x82a2ed70
	if (ctx.cr6.lt) goto loc_82A2ED70;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r3,r11,14964
	ctx.r3.s64 = ctx.r11.s64 + 14964;
	// bl 0x82dffbd8
	ctx.lr = 0x82A2ED70;
	sub_82DFFBD8(ctx, base);
loc_82A2ED70:
	// rlwinm r11,r31,29,3,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 29) & 0x1FFFFFFC;
	// li r9,1
	ctx.r9.s64 = 1;
	// clrlwi r10,r31,27
	ctx.r10.u64 = ctx.r31.u32 & 0x1F;
	// slw r10,r9,r10
	ctx.r10.u64 = ctx.r10.u8 & 0x20 ? 0 : (ctx.r9.u32 << (ctx.r10.u8 & 0x3F));
	// lwzx r9,r11,r30
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r30.u32);
	// or r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 | ctx.r9.u64;
	// b 0x82a2edb4
	goto loc_82A2EDB4;
loc_82A2ED8C:
	// blt cr6,0x82a2ed9c
	if (ctx.cr6.lt) goto loc_82A2ED9C;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r3,r11,14964
	ctx.r3.s64 = ctx.r11.s64 + 14964;
	// bl 0x82dffbd8
	ctx.lr = 0x82A2ED9C;
	sub_82DFFBD8(ctx, base);
loc_82A2ED9C:
	// rlwinm r11,r31,29,3,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 29) & 0x1FFFFFFC;
	// li r9,1
	ctx.r9.s64 = 1;
	// clrlwi r10,r31,27
	ctx.r10.u64 = ctx.r31.u32 & 0x1F;
	// slw r10,r9,r10
	ctx.r10.u64 = ctx.r10.u8 & 0x20 ? 0 : (ctx.r9.u32 << (ctx.r10.u8 & 0x3F));
	// lwzx r9,r11,r30
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r30.u32);
	// andc r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 & ~ctx.r10.u64;
loc_82A2EDB4:
	// stwx r10,r11,r30
	PPC_STORE_U32(ctx.r11.u32 + ctx.r30.u32, ctx.r10.u32);
loc_82A2EDB8:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x833a01fc
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82A2EDC0"))) PPC_WEAK_FUNC(sub_82A2EDC0);
PPC_FUNC_IMPL(__imp__sub_82A2EDC0) {
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
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// bl 0x82a11b90
	ctx.lr = 0x82A2EDE0;
	sub_82A11B90(ctx, base);
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// bl 0x82a0fb38
	ctx.lr = 0x82A2EDE8;
	sub_82A0FB38(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r11,132(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 132);
	// addi r30,r11,440
	ctx.r30.s64 = ctx.r11.s64 + 440;
	// bl 0x82e01548
	ctx.lr = 0x82A2EE00;
	sub_82E01548(ctx, base);
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// blt cr6,0x82a2ee34
	if (ctx.cr6.lt) goto loc_82A2EE34;
	// cmplwi cr6,r31,14
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 14, ctx.xer);
	// bge cr6,0x82a2ee34
	if (!ctx.cr6.lt) goto loc_82A2EE34;
	// rlwinm r11,r31,29,3,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 29) & 0x1FFFFFFC;
	// clrlwi r10,r31,27
	ctx.r10.u64 = ctx.r31.u32 & 0x1F;
	// li r9,1
	ctx.r9.s64 = 1;
	// slw r10,r9,r10
	ctx.r10.u64 = ctx.r10.u8 & 0x20 ? 0 : (ctx.r9.u32 << (ctx.r10.u8 & 0x3F));
	// lwzx r11,r11,r30
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r30.u32);
	// and r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 & ctx.r11.u64;
	// addic r10,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// subfe r3,r10,r11
	temp.u8 = (~ctx.r10.u32 + ctx.r11.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r3.u64 = ~ctx.r10.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// b 0x82a2ee38
	goto loc_82A2EE38;
loc_82A2EE34:
	// li r3,1
	ctx.r3.s64 = 1;
loc_82A2EE38:
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

__attribute__((alias("__imp__sub_82A2EE50"))) PPC_WEAK_FUNC(sub_82A2EE50);
PPC_FUNC_IMPL(__imp__sub_82A2EE50) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x833a01ac
	ctx.lr = 0x82A2EE58;
	__savegprlr_29(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// bl 0x82a11b90
	ctx.lr = 0x82A2EE6C;
	sub_82A11B90(ctx, base);
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// bl 0x82a0fb38
	ctx.lr = 0x82A2EE74;
	sub_82A0FB38(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r11,132(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 132);
	// addi r30,r11,440
	ctx.r30.s64 = ctx.r11.s64 + 440;
	// bl 0x82e01548
	ctx.lr = 0x82A2EE8C;
	sub_82E01548(ctx, base);
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// blt cr6,0x82a2ef04
	if (ctx.cr6.lt) goto loc_82A2EF04;
	// cmplwi cr6,r31,50
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 50, ctx.xer);
	// bge cr6,0x82a2ef04
	if (!ctx.cr6.lt) goto loc_82A2EF04;
	// clrlwi. r11,r29,24
	ctx.r11.u64 = ctx.r29.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// addi r11,r30,8
	ctx.r11.s64 = ctx.r30.s64 + 8;
	// cmplwi cr6,r31,50
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 50, ctx.xer);
	// beq 0x82a2eed8
	if (ctx.cr0.eq) goto loc_82A2EED8;
	// blt cr6,0x82a2eebc
	if (ctx.cr6.lt) goto loc_82A2EEBC;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r3,r11,14964
	ctx.r3.s64 = ctx.r11.s64 + 14964;
	// bl 0x82dffbd8
	ctx.lr = 0x82A2EEBC;
	sub_82DFFBD8(ctx, base);
loc_82A2EEBC:
	// rlwinm r10,r31,29,3,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 29) & 0x1FFFFFF8;
	// li r8,1
	ctx.r8.s64 = 1;
	// clrldi r9,r31,58
	ctx.r9.u64 = ctx.r31.u64 & 0x3F;
	// sld r9,r8,r9
	ctx.r9.u64 = ctx.r9.u8 & 0x40 ? 0 : (ctx.r8.u64 << (ctx.r9.u8 & 0x7F));
	// ldx r8,r10,r11
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r10.u32 + ctx.r11.u32);
	// or r9,r9,r8
	ctx.r9.u64 = ctx.r9.u64 | ctx.r8.u64;
	// b 0x82a2ef00
	goto loc_82A2EF00;
loc_82A2EED8:
	// blt cr6,0x82a2eee8
	if (ctx.cr6.lt) goto loc_82A2EEE8;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r3,r11,14964
	ctx.r3.s64 = ctx.r11.s64 + 14964;
	// bl 0x82dffbd8
	ctx.lr = 0x82A2EEE8;
	sub_82DFFBD8(ctx, base);
loc_82A2EEE8:
	// rlwinm r10,r31,29,3,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 29) & 0x1FFFFFF8;
	// li r8,1
	ctx.r8.s64 = 1;
	// clrldi r9,r31,58
	ctx.r9.u64 = ctx.r31.u64 & 0x3F;
	// sld r9,r8,r9
	ctx.r9.u64 = ctx.r9.u8 & 0x40 ? 0 : (ctx.r8.u64 << (ctx.r9.u8 & 0x7F));
	// ldx r8,r10,r11
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r10.u32 + ctx.r11.u32);
	// andc r9,r8,r9
	ctx.r9.u64 = ctx.r8.u64 & ~ctx.r9.u64;
loc_82A2EF00:
	// stdx r9,r10,r11
	PPC_STORE_U64(ctx.r10.u32 + ctx.r11.u32, ctx.r9.u64);
loc_82A2EF04:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x833a01fc
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82A2EF0C"))) PPC_WEAK_FUNC(sub_82A2EF0C);
PPC_FUNC_IMPL(__imp__sub_82A2EF0C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A2EF10"))) PPC_WEAK_FUNC(sub_82A2EF10);
PPC_FUNC_IMPL(__imp__sub_82A2EF10) {
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
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// bl 0x82a11b90
	ctx.lr = 0x82A2EF30;
	sub_82A11B90(ctx, base);
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// bl 0x82a0fb38
	ctx.lr = 0x82A2EF38;
	sub_82A0FB38(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r11,132(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 132);
	// addi r30,r11,440
	ctx.r30.s64 = ctx.r11.s64 + 440;
	// bl 0x82e01548
	ctx.lr = 0x82A2EF50;
	sub_82E01548(ctx, base);
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// blt cr6,0x82a2ef98
	if (ctx.cr6.lt) goto loc_82A2EF98;
	// cmplwi cr6,r31,50
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 50, ctx.xer);
	// bge cr6,0x82a2ef98
	if (!ctx.cr6.lt) goto loc_82A2EF98;
	// rlwinm r11,r31,26,6,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 26) & 0x3FFFFFF;
	// clrldi r10,r31,58
	ctx.r10.u64 = ctx.r31.u64 & 0x3F;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// li r9,1
	ctx.r9.s64 = 1;
	// rlwinm r11,r11,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// sld r10,r9,r10
	ctx.r10.u64 = ctx.r10.u8 & 0x40 ? 0 : (ctx.r9.u64 << (ctx.r10.u8 & 0x7F));
	// ldx r11,r11,r30
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r11.u32 + ctx.r30.u32);
	// and r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 & ctx.r11.u64;
	// cmpldi cr6,r11,0
	ctx.cr6.compare<uint64_t>(ctx.r11.u64, 0, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// bne cr6,0x82a2ef90
	if (!ctx.cr6.eq) goto loc_82A2EF90;
	// li r11,0
	ctx.r11.s64 = 0;
loc_82A2EF90:
	// clrlwi r3,r11,24
	ctx.r3.u64 = ctx.r11.u32 & 0xFF;
	// b 0x82a2ef9c
	goto loc_82A2EF9C;
loc_82A2EF98:
	// li r3,1
	ctx.r3.s64 = 1;
loc_82A2EF9C:
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

__attribute__((alias("__imp__sub_82A2EFB4"))) PPC_WEAK_FUNC(sub_82A2EFB4);
PPC_FUNC_IMPL(__imp__sub_82A2EFB4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A2EFB8"))) PPC_WEAK_FUNC(sub_82A2EFB8);
PPC_FUNC_IMPL(__imp__sub_82A2EFB8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x833a01ac
	ctx.lr = 0x82A2EFC0;
	__savegprlr_29(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// bl 0x82a11b90
	ctx.lr = 0x82A2EFD4;
	sub_82A11B90(ctx, base);
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// bl 0x82a0fb38
	ctx.lr = 0x82A2EFDC;
	sub_82A0FB38(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r11,132(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 132);
	// addi r30,r11,440
	ctx.r30.s64 = ctx.r11.s64 + 440;
	// bl 0x82e01548
	ctx.lr = 0x82A2EFF4;
	sub_82E01548(ctx, base);
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// blt cr6,0x82a2f06c
	if (ctx.cr6.lt) goto loc_82A2F06C;
	// cmplwi cr6,r31,130
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 130, ctx.xer);
	// bge cr6,0x82a2f06c
	if (!ctx.cr6.lt) goto loc_82A2F06C;
	// clrlwi. r11,r29,24
	ctx.r11.u64 = ctx.r29.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// addi r11,r30,16
	ctx.r11.s64 = ctx.r30.s64 + 16;
	// cmplwi cr6,r31,130
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 130, ctx.xer);
	// beq 0x82a2f040
	if (ctx.cr0.eq) goto loc_82A2F040;
	// blt cr6,0x82a2f024
	if (ctx.cr6.lt) goto loc_82A2F024;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r3,r11,14964
	ctx.r3.s64 = ctx.r11.s64 + 14964;
	// bl 0x82dffbd8
	ctx.lr = 0x82A2F024;
	sub_82DFFBD8(ctx, base);
loc_82A2F024:
	// rlwinm r10,r31,29,3,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 29) & 0x1FFFFFF8;
	// li r8,1
	ctx.r8.s64 = 1;
	// clrldi r9,r31,58
	ctx.r9.u64 = ctx.r31.u64 & 0x3F;
	// sld r9,r8,r9
	ctx.r9.u64 = ctx.r9.u8 & 0x40 ? 0 : (ctx.r8.u64 << (ctx.r9.u8 & 0x7F));
	// ldx r8,r10,r11
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r10.u32 + ctx.r11.u32);
	// or r9,r9,r8
	ctx.r9.u64 = ctx.r9.u64 | ctx.r8.u64;
	// b 0x82a2f068
	goto loc_82A2F068;
loc_82A2F040:
	// blt cr6,0x82a2f050
	if (ctx.cr6.lt) goto loc_82A2F050;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r3,r11,14964
	ctx.r3.s64 = ctx.r11.s64 + 14964;
	// bl 0x82dffbd8
	ctx.lr = 0x82A2F050;
	sub_82DFFBD8(ctx, base);
loc_82A2F050:
	// rlwinm r10,r31,29,3,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 29) & 0x1FFFFFF8;
	// li r8,1
	ctx.r8.s64 = 1;
	// clrldi r9,r31,58
	ctx.r9.u64 = ctx.r31.u64 & 0x3F;
	// sld r9,r8,r9
	ctx.r9.u64 = ctx.r9.u8 & 0x40 ? 0 : (ctx.r8.u64 << (ctx.r9.u8 & 0x7F));
	// ldx r8,r10,r11
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r10.u32 + ctx.r11.u32);
	// andc r9,r8,r9
	ctx.r9.u64 = ctx.r8.u64 & ~ctx.r9.u64;
loc_82A2F068:
	// stdx r9,r10,r11
	PPC_STORE_U64(ctx.r10.u32 + ctx.r11.u32, ctx.r9.u64);
loc_82A2F06C:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x833a01fc
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82A2F074"))) PPC_WEAK_FUNC(sub_82A2F074);
PPC_FUNC_IMPL(__imp__sub_82A2F074) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A2F078"))) PPC_WEAK_FUNC(sub_82A2F078);
PPC_FUNC_IMPL(__imp__sub_82A2F078) {
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
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// bl 0x82a11b90
	ctx.lr = 0x82A2F098;
	sub_82A11B90(ctx, base);
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// bl 0x82a0fb38
	ctx.lr = 0x82A2F0A0;
	sub_82A0FB38(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r11,132(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 132);
	// addi r30,r11,440
	ctx.r30.s64 = ctx.r11.s64 + 440;
	// bl 0x82e01548
	ctx.lr = 0x82A2F0B8;
	sub_82E01548(ctx, base);
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// blt cr6,0x82a2f100
	if (ctx.cr6.lt) goto loc_82A2F100;
	// cmplwi cr6,r31,130
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 130, ctx.xer);
	// bge cr6,0x82a2f100
	if (!ctx.cr6.lt) goto loc_82A2F100;
	// rlwinm r11,r31,26,6,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 26) & 0x3FFFFFF;
	// clrldi r10,r31,58
	ctx.r10.u64 = ctx.r31.u64 & 0x3F;
	// addi r11,r11,2
	ctx.r11.s64 = ctx.r11.s64 + 2;
	// li r9,1
	ctx.r9.s64 = 1;
	// rlwinm r11,r11,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// sld r10,r9,r10
	ctx.r10.u64 = ctx.r10.u8 & 0x40 ? 0 : (ctx.r9.u64 << (ctx.r10.u8 & 0x7F));
	// ldx r11,r11,r30
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r11.u32 + ctx.r30.u32);
	// and r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 & ctx.r11.u64;
	// cmpldi cr6,r11,0
	ctx.cr6.compare<uint64_t>(ctx.r11.u64, 0, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// bne cr6,0x82a2f0f8
	if (!ctx.cr6.eq) goto loc_82A2F0F8;
	// li r11,0
	ctx.r11.s64 = 0;
loc_82A2F0F8:
	// clrlwi r3,r11,24
	ctx.r3.u64 = ctx.r11.u32 & 0xFF;
	// b 0x82a2f104
	goto loc_82A2F104;
loc_82A2F100:
	// li r3,1
	ctx.r3.s64 = 1;
loc_82A2F104:
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

__attribute__((alias("__imp__sub_82A2F11C"))) PPC_WEAK_FUNC(sub_82A2F11C);
PPC_FUNC_IMPL(__imp__sub_82A2F11C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A2F120"))) PPC_WEAK_FUNC(sub_82A2F120);
PPC_FUNC_IMPL(__imp__sub_82A2F120) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x833a01ac
	ctx.lr = 0x82A2F128;
	__savegprlr_29(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// bl 0x82a11b90
	ctx.lr = 0x82A2F13C;
	sub_82A11B90(ctx, base);
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// bl 0x82a0fb38
	ctx.lr = 0x82A2F144;
	sub_82A0FB38(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r11,132(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 132);
	// addi r30,r11,440
	ctx.r30.s64 = ctx.r11.s64 + 440;
	// bl 0x82e01548
	ctx.lr = 0x82A2F15C;
	sub_82E01548(ctx, base);
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// blt cr6,0x82a2f1d4
	if (ctx.cr6.lt) goto loc_82A2F1D4;
	// cmplwi cr6,r31,13
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 13, ctx.xer);
	// bge cr6,0x82a2f1d4
	if (!ctx.cr6.lt) goto loc_82A2F1D4;
	// clrlwi. r11,r29,24
	ctx.r11.u64 = ctx.r29.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// addi r11,r30,40
	ctx.r11.s64 = ctx.r30.s64 + 40;
	// cmplwi cr6,r31,13
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 13, ctx.xer);
	// beq 0x82a2f1a8
	if (ctx.cr0.eq) goto loc_82A2F1A8;
	// blt cr6,0x82a2f18c
	if (ctx.cr6.lt) goto loc_82A2F18C;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r3,r11,14964
	ctx.r3.s64 = ctx.r11.s64 + 14964;
	// bl 0x82dffbd8
	ctx.lr = 0x82A2F18C;
	sub_82DFFBD8(ctx, base);
loc_82A2F18C:
	// rlwinm r10,r31,29,3,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 29) & 0x1FFFFFFC;
	// li r8,1
	ctx.r8.s64 = 1;
	// clrlwi r9,r31,27
	ctx.r9.u64 = ctx.r31.u32 & 0x1F;
	// slw r9,r8,r9
	ctx.r9.u64 = ctx.r9.u8 & 0x20 ? 0 : (ctx.r8.u32 << (ctx.r9.u8 & 0x3F));
	// lwzx r8,r10,r11
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// or r9,r9,r8
	ctx.r9.u64 = ctx.r9.u64 | ctx.r8.u64;
	// b 0x82a2f1d0
	goto loc_82A2F1D0;
loc_82A2F1A8:
	// blt cr6,0x82a2f1b8
	if (ctx.cr6.lt) goto loc_82A2F1B8;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r3,r11,14964
	ctx.r3.s64 = ctx.r11.s64 + 14964;
	// bl 0x82dffbd8
	ctx.lr = 0x82A2F1B8;
	sub_82DFFBD8(ctx, base);
loc_82A2F1B8:
	// rlwinm r10,r31,29,3,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 29) & 0x1FFFFFFC;
	// li r8,1
	ctx.r8.s64 = 1;
	// clrlwi r9,r31,27
	ctx.r9.u64 = ctx.r31.u32 & 0x1F;
	// slw r9,r8,r9
	ctx.r9.u64 = ctx.r9.u8 & 0x20 ? 0 : (ctx.r8.u32 << (ctx.r9.u8 & 0x3F));
	// lwzx r8,r10,r11
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// andc r9,r8,r9
	ctx.r9.u64 = ctx.r8.u64 & ~ctx.r9.u64;
loc_82A2F1D0:
	// stwx r9,r10,r11
	PPC_STORE_U32(ctx.r10.u32 + ctx.r11.u32, ctx.r9.u32);
loc_82A2F1D4:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x833a01fc
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82A2F1DC"))) PPC_WEAK_FUNC(sub_82A2F1DC);
PPC_FUNC_IMPL(__imp__sub_82A2F1DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A2F1E0"))) PPC_WEAK_FUNC(sub_82A2F1E0);
PPC_FUNC_IMPL(__imp__sub_82A2F1E0) {
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
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// bl 0x82a11b90
	ctx.lr = 0x82A2F200;
	sub_82A11B90(ctx, base);
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// bl 0x82a0fb38
	ctx.lr = 0x82A2F208;
	sub_82A0FB38(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r11,132(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 132);
	// addi r30,r11,440
	ctx.r30.s64 = ctx.r11.s64 + 440;
	// bl 0x82e01548
	ctx.lr = 0x82A2F220;
	sub_82E01548(ctx, base);
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// blt cr6,0x82a2f25c
	if (ctx.cr6.lt) goto loc_82A2F25C;
	// cmplwi cr6,r31,13
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 13, ctx.xer);
	// bge cr6,0x82a2f25c
	if (!ctx.cr6.lt) goto loc_82A2F25C;
	// rlwinm r11,r31,27,5,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 27) & 0x7FFFFFF;
	// clrlwi r10,r31,27
	ctx.r10.u64 = ctx.r31.u32 & 0x1F;
	// addi r11,r11,10
	ctx.r11.s64 = ctx.r11.s64 + 10;
	// li r9,1
	ctx.r9.s64 = 1;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// slw r10,r9,r10
	ctx.r10.u64 = ctx.r10.u8 & 0x20 ? 0 : (ctx.r9.u32 << (ctx.r10.u8 & 0x3F));
	// lwzx r11,r11,r30
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r30.u32);
	// and r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 & ctx.r11.u64;
	// addic r10,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// subfe r3,r10,r11
	temp.u8 = (~ctx.r10.u32 + ctx.r11.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r3.u64 = ~ctx.r10.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// b 0x82a2f260
	goto loc_82A2F260;
loc_82A2F25C:
	// li r3,1
	ctx.r3.s64 = 1;
loc_82A2F260:
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

__attribute__((alias("__imp__sub_82A2F278"))) PPC_WEAK_FUNC(sub_82A2F278);
PPC_FUNC_IMPL(__imp__sub_82A2F278) {
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
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// bl 0x82a2e378
	ctx.lr = 0x82A2F294;
	sub_82A2E378(ctx, base);
	// cmplwi cr6,r3,142
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 142, ctx.xer);
	// bge cr6,0x82a2f2b0
	if (!ctx.cr6.lt) goto loc_82A2F2B0;
	// lwz r10,128(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 128);
	// mulli r11,r3,288
	ctx.r11.s64 = ctx.r3.s64 * 288;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// addi r3,r11,28
	ctx.r3.s64 = ctx.r11.s64 + 28;
	// b 0x82a2f2b4
	goto loc_82A2F2B4;
loc_82A2F2B0:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82A2F2B4:
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

__attribute__((alias("__imp__sub_82A2F2C8"))) PPC_WEAK_FUNC(sub_82A2F2C8);
PPC_FUNC_IMPL(__imp__sub_82A2F2C8) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,132(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 132);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt 0x82a2f2e4
	if (ctx.cr0.lt) goto loc_82A2F2E4;
	// cmpwi cr6,r11,26
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 26, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// ble cr6,0x82a2f2e8
	if (!ctx.cr6.gt) goto loc_82A2F2E8;
loc_82A2F2E4:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82A2F2E8:
	// clrlwi r3,r11,24
	ctx.r3.u64 = ctx.r11.u32 & 0xFF;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A2F2F0"))) PPC_WEAK_FUNC(sub_82A2F2F0);
PPC_FUNC_IMPL(__imp__sub_82A2F2F0) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,132(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 132);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt 0x82a2f30c
	if (ctx.cr0.lt) goto loc_82A2F30C;
	// cmpwi cr6,r11,17
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 17, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// ble cr6,0x82a2f310
	if (!ctx.cr6.gt) goto loc_82A2F310;
loc_82A2F30C:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82A2F310:
	// clrlwi r3,r11,24
	ctx.r3.u64 = ctx.r11.u32 & 0xFF;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A2F318"))) PPC_WEAK_FUNC(sub_82A2F318);
PPC_FUNC_IMPL(__imp__sub_82A2F318) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,132(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 132);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmpwi cr6,r11,20
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 20, ctx.xer);
	// blt cr6,0x82a2f338
	if (ctx.cr6.lt) goto loc_82A2F338;
	// cmpwi cr6,r11,22
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 22, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// ble cr6,0x82a2f33c
	if (!ctx.cr6.gt) goto loc_82A2F33C;
loc_82A2F338:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82A2F33C:
	// clrlwi r3,r11,24
	ctx.r3.u64 = ctx.r11.u32 & 0xFF;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A2F344"))) PPC_WEAK_FUNC(sub_82A2F344);
PPC_FUNC_IMPL(__imp__sub_82A2F344) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A2F348"))) PPC_WEAK_FUNC(sub_82A2F348);
PPC_FUNC_IMPL(__imp__sub_82A2F348) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,132(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 132);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmpwi cr6,r11,23
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 23, ctx.xer);
	// blt cr6,0x82a2f368
	if (ctx.cr6.lt) goto loc_82A2F368;
	// cmpwi cr6,r11,26
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 26, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// ble cr6,0x82a2f36c
	if (!ctx.cr6.gt) goto loc_82A2F36C;
loc_82A2F368:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82A2F36C:
	// clrlwi r3,r11,24
	ctx.r3.u64 = ctx.r11.u32 & 0xFF;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A2F374"))) PPC_WEAK_FUNC(sub_82A2F374);
PPC_FUNC_IMPL(__imp__sub_82A2F374) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A2F378"))) PPC_WEAK_FUNC(sub_82A2F378);
PPC_FUNC_IMPL(__imp__sub_82A2F378) {
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
	// lwz r11,132(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 132);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// clrlwi r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	// cmpwi cr6,r10,27
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 27, ctx.xer);
	// bne cr6,0x82a2f3ac
	if (!ctx.cr6.eq) goto loc_82A2F3AC;
	// addi r3,r11,44
	ctx.r3.s64 = ctx.r11.s64 + 44;
	// bl 0x82e01de8
	ctx.lr = 0x82A2F3A0;
	sub_82E01DE8(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// bne 0x82a2f3b0
	if (!ctx.cr0.eq) goto loc_82A2F3B0;
loc_82A2F3AC:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82A2F3B0:
	// clrlwi r3,r11,24
	ctx.r3.u64 = ctx.r11.u32 & 0xFF;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A2F3C4"))) PPC_WEAK_FUNC(sub_82A2F3C4);
PPC_FUNC_IMPL(__imp__sub_82A2F3C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A2F3C8"))) PPC_WEAK_FUNC(sub_82A2F3C8);
PPC_FUNC_IMPL(__imp__sub_82A2F3C8) {
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
	// lwz r11,132(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 132);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// clrlwi r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	// cmpwi cr6,r10,28
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 28, ctx.xer);
	// bne cr6,0x82a2f3fc
	if (!ctx.cr6.eq) goto loc_82A2F3FC;
	// addi r3,r11,44
	ctx.r3.s64 = ctx.r11.s64 + 44;
	// bl 0x82e01de8
	ctx.lr = 0x82A2F3F0;
	sub_82E01DE8(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// bne 0x82a2f400
	if (!ctx.cr0.eq) goto loc_82A2F400;
loc_82A2F3FC:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82A2F400:
	// clrlwi r3,r11,24
	ctx.r3.u64 = ctx.r11.u32 & 0xFF;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A2F414"))) PPC_WEAK_FUNC(sub_82A2F414);
PPC_FUNC_IMPL(__imp__sub_82A2F414) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A2F418"))) PPC_WEAK_FUNC(sub_82A2F418);
PPC_FUNC_IMPL(__imp__sub_82A2F418) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,132(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 132);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm r10,r11,24,24,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 24) & 0xFF;
	// cmpwi cr6,r10,1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 1, ctx.xer);
	// blt cr6,0x82a2f458
	if (ctx.cr6.lt) goto loc_82A2F458;
	// cmpwi cr6,r10,6
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 6, ctx.xer);
	// bge cr6,0x82a2f458
	if (!ctx.cr6.lt) goto loc_82A2F458;
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt 0x82a2f448
	if (ctx.cr0.lt) goto loc_82A2F448;
	// cmpwi cr6,r11,17
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 17, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// ble cr6,0x82a2f44c
	if (!ctx.cr6.gt) goto loc_82A2F44C;
loc_82A2F448:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82A2F44C:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// li r3,1
	ctx.r3.s64 = 1;
	// bnelr 
	if (!ctx.cr0.eq) return;
loc_82A2F458:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A2F460"))) PPC_WEAK_FUNC(sub_82A2F460);
PPC_FUNC_IMPL(__imp__sub_82A2F460) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,132(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 132);
	// lwz r3,0(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// b 0x82a2dbf8
	sub_82A2DBF8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82A2F46C"))) PPC_WEAK_FUNC(sub_82A2F46C);
PPC_FUNC_IMPL(__imp__sub_82A2F46C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A2F470"))) PPC_WEAK_FUNC(sub_82A2F470);
PPC_FUNC_IMPL(__imp__sub_82A2F470) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lwz r11,128(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 128);
	// cmplwi cr6,r4,2
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 2, ctx.xer);
	// addis r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 65536;
	// addi r11,r11,-24316
	ctx.r11.s64 = ctx.r11.s64 + -24316;
	// blt cr6,0x82a2f490
	if (ctx.cr6.lt) goto loc_82A2F490;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r3,r11,14964
	ctx.r3.s64 = ctx.r11.s64 + 14964;
	// b 0x82dffbd8
	sub_82DFFBD8(ctx, base);
	return;
loc_82A2F490:
	// rlwinm r10,r4,29,3,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 29) & 0x1FFFFFFC;
	// clrlwi r9,r4,27
	ctx.r9.u64 = ctx.r4.u32 & 0x1F;
	// li r8,1
	ctx.r8.s64 = 1;
	// slw r9,r8,r9
	ctx.r9.u64 = ctx.r9.u8 & 0x20 ? 0 : (ctx.r8.u32 << (ctx.r9.u8 & 0x3F));
	// lwzx r11,r10,r11
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// and r11,r9,r11
	ctx.r11.u64 = ctx.r9.u64 & ctx.r11.u64;
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

__attribute__((alias("__imp__sub_82A2F4B4"))) PPC_WEAK_FUNC(sub_82A2F4B4);
PPC_FUNC_IMPL(__imp__sub_82A2F4B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A2F4B8"))) PPC_WEAK_FUNC(sub_82A2F4B8);
PPC_FUNC_IMPL(__imp__sub_82A2F4B8) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,128(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 128);
	// cmplwi cr6,r4,2
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 2, ctx.xer);
	// addis r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 65536;
	// addi r11,r11,-24316
	ctx.r11.s64 = ctx.r11.s64 + -24316;
	// blt cr6,0x82a2f4d8
	if (ctx.cr6.lt) goto loc_82A2F4D8;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r3,r11,14964
	ctx.r3.s64 = ctx.r11.s64 + 14964;
	// b 0x82dffbd8
	sub_82DFFBD8(ctx, base);
	return;
loc_82A2F4D8:
	// clrlwi. r10,r5,24
	ctx.r10.u64 = ctx.r5.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// rlwinm r10,r4,29,3,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 29) & 0x1FFFFFFC;
	// li r8,1
	ctx.r8.s64 = 1;
	// clrlwi r9,r4,27
	ctx.r9.u64 = ctx.r4.u32 & 0x1F;
	// slw r9,r8,r9
	ctx.r9.u64 = ctx.r9.u8 & 0x20 ? 0 : (ctx.r8.u32 << (ctx.r9.u8 & 0x3F));
	// lwzx r8,r10,r11
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// beq 0x82a2f4fc
	if (ctx.cr0.eq) goto loc_82A2F4FC;
	// or r9,r9,r8
	ctx.r9.u64 = ctx.r9.u64 | ctx.r8.u64;
	// b 0x82a2f500
	goto loc_82A2F500;
loc_82A2F4FC:
	// andc r9,r8,r9
	ctx.r9.u64 = ctx.r8.u64 & ~ctx.r9.u64;
loc_82A2F500:
	// stwx r9,r10,r11
	PPC_STORE_U32(ctx.r10.u32 + ctx.r11.u32, ctx.r9.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A2F508"))) PPC_WEAK_FUNC(sub_82A2F508);
PPC_FUNC_IMPL(__imp__sub_82A2F508) {
	PPC_FUNC_PROLOGUE();
	// lis r10,0
	ctx.r10.s64 = 0;
	// lwz r11,128(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 128);
	// ori r10,r10,41676
	ctx.r10.u64 = ctx.r10.u64 | 41676;
	// lwzx r11,r11,r10
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// clrlwi r3,r11,31
	ctx.r3.u64 = ctx.r11.u32 & 0x1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A2F520"))) PPC_WEAK_FUNC(sub_82A2F520);
PPC_FUNC_IMPL(__imp__sub_82A2F520) {
	PPC_FUNC_PROLOGUE();
	// clrlwi. r11,r4,24
	ctx.r11.u64 = ctx.r4.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// lwz r11,128(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 128);
	// addis r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 65536;
	// addi r11,r11,-23860
	ctx.r11.s64 = ctx.r11.s64 + -23860;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// beq 0x82a2f540
	if (ctx.cr0.eq) goto loc_82A2F540;
	// ori r10,r10,1
	ctx.r10.u64 = ctx.r10.u64 | 1;
	// b 0x82a2f544
	goto loc_82A2F544;
loc_82A2F540:
	// rlwinm r10,r10,0,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFE;
loc_82A2F544:
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A2F54C"))) PPC_WEAK_FUNC(sub_82A2F54C);
PPC_FUNC_IMPL(__imp__sub_82A2F54C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A2F550"))) PPC_WEAK_FUNC(sub_82A2F550);
PPC_FUNC_IMPL(__imp__sub_82A2F550) {
	PPC_FUNC_PROLOGUE();
	// lis r10,0
	ctx.r10.s64 = 0;
	// lwz r11,128(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 128);
	// ori r10,r10,41676
	ctx.r10.u64 = ctx.r10.u64 | 41676;
	// lwzx r11,r11,r10
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// rlwinm r3,r11,31,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 31) & 0x1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A2F568"))) PPC_WEAK_FUNC(sub_82A2F568);
PPC_FUNC_IMPL(__imp__sub_82A2F568) {
	PPC_FUNC_PROLOGUE();
	// clrlwi. r11,r4,24
	ctx.r11.u64 = ctx.r4.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// lwz r11,128(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 128);
	// addis r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 65536;
	// addi r11,r11,-23860
	ctx.r11.s64 = ctx.r11.s64 + -23860;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// beq 0x82a2f588
	if (ctx.cr0.eq) goto loc_82A2F588;
	// ori r10,r10,2
	ctx.r10.u64 = ctx.r10.u64 | 2;
	// b 0x82a2f58c
	goto loc_82A2F58C;
loc_82A2F588:
	// rlwinm r10,r10,0,31,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFFFFFFFFFD;
loc_82A2F58C:
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A2F594"))) PPC_WEAK_FUNC(sub_82A2F594);
PPC_FUNC_IMPL(__imp__sub_82A2F594) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A2F598"))) PPC_WEAK_FUNC(sub_82A2F598);
PPC_FUNC_IMPL(__imp__sub_82A2F598) {
	PPC_FUNC_PROLOGUE();
	// lis r10,0
	ctx.r10.s64 = 0;
	// lwz r11,128(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 128);
	// ori r10,r10,41676
	ctx.r10.u64 = ctx.r10.u64 | 41676;
	// lwzx r11,r11,r10
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// rlwinm r3,r11,30,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 30) & 0x1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A2F5B0"))) PPC_WEAK_FUNC(sub_82A2F5B0);
PPC_FUNC_IMPL(__imp__sub_82A2F5B0) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,128(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 128);
	// clrlwi. r10,r4,24
	ctx.r10.u64 = ctx.r4.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// addis r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 65536;
	// addi r11,r11,-23860
	ctx.r11.s64 = ctx.r11.s64 + -23860;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// beq 0x82a2f5d0
	if (ctx.cr0.eq) goto loc_82A2F5D0;
	// ori r10,r10,4
	ctx.r10.u64 = ctx.r10.u64 | 4;
	// b 0x82a2f5d4
	goto loc_82A2F5D4;
loc_82A2F5D0:
	// rlwinm r10,r10,0,30,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFFFFFFFFFB;
loc_82A2F5D4:
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A2F5DC"))) PPC_WEAK_FUNC(sub_82A2F5DC);
PPC_FUNC_IMPL(__imp__sub_82A2F5DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A2F5E0"))) PPC_WEAK_FUNC(sub_82A2F5E0);
PPC_FUNC_IMPL(__imp__sub_82A2F5E0) {
	PPC_FUNC_PROLOGUE();
	// lis r10,0
	ctx.r10.s64 = 0;
	// lwz r11,128(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 128);
	// ori r10,r10,40944
	ctx.r10.u64 = ctx.r10.u64 | 40944;
	// lvx128 v63,r11,r10
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r11.u32 + ctx.r10.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v63,r0,r3
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r3.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A2F5F8"))) PPC_WEAK_FUNC(sub_82A2F5F8);
PPC_FUNC_IMPL(__imp__sub_82A2F5F8) {
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
	// bl 0x82a2f278
	ctx.lr = 0x82A2F608;
	sub_82A2F278(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82a2f61c
	if (ctx.cr0.eq) goto loc_82A2F61C;
	// lwz r11,284(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 284);
	// clrlwi r3,r11,31
	ctx.r3.u64 = ctx.r11.u32 & 0x1;
	// b 0x82a2f620
	goto loc_82A2F620;
loc_82A2F61C:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82A2F620:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A2F630"))) PPC_WEAK_FUNC(sub_82A2F630);
PPC_FUNC_IMPL(__imp__sub_82A2F630) {
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
	// bl 0x82a2f278
	ctx.lr = 0x82A2F640;
	sub_82A2F278(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82a2f654
	if (ctx.cr0.eq) goto loc_82A2F654;
	// lwz r11,284(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 284);
	// rlwinm r3,r11,31,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 31) & 0x1;
	// b 0x82a2f658
	goto loc_82A2F658;
loc_82A2F654:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82A2F658:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A2F668"))) PPC_WEAK_FUNC(sub_82A2F668);
PPC_FUNC_IMPL(__imp__sub_82A2F668) {
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
	// bl 0x82a2f278
	ctx.lr = 0x82A2F678;
	sub_82A2F278(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82a2f68c
	if (ctx.cr0.eq) goto loc_82A2F68C;
	// lwz r11,284(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 284);
	// rlwinm r3,r11,30,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 30) & 0x1;
	// b 0x82a2f690
	goto loc_82A2F690;
loc_82A2F68C:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82A2F690:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A2F6A0"))) PPC_WEAK_FUNC(sub_82A2F6A0);
PPC_FUNC_IMPL(__imp__sub_82A2F6A0) {
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
	// bl 0x82a2f278
	ctx.lr = 0x82A2F6B0;
	sub_82A2F278(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82a2f6c4
	if (ctx.cr0.eq) goto loc_82A2F6C4;
	// lwz r11,284(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 284);
	// rlwinm r3,r11,27,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// b 0x82a2f6c8
	goto loc_82A2F6C8;
loc_82A2F6C4:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82A2F6C8:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A2F6D8"))) PPC_WEAK_FUNC(sub_82A2F6D8);
PPC_FUNC_IMPL(__imp__sub_82A2F6D8) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,128(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 128);
	// cmplwi cr6,r4,39
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 39, ctx.xer);
	// addis r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 65536;
	// addi r11,r11,-24456
	ctx.r11.s64 = ctx.r11.s64 + -24456;
	// blt cr6,0x82a2f6f8
	if (ctx.cr6.lt) goto loc_82A2F6F8;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r3,r11,14964
	ctx.r3.s64 = ctx.r11.s64 + 14964;
	// b 0x82dffbd8
	sub_82DFFBD8(ctx, base);
	return;
loc_82A2F6F8:
	// rlwinm r10,r4,29,3,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 29) & 0x1FFFFFF8;
	// clrldi r9,r4,58
	ctx.r9.u64 = ctx.r4.u64 & 0x3F;
	// li r8,1
	ctx.r8.s64 = 1;
	// sld r9,r8,r9
	ctx.r9.u64 = ctx.r9.u8 & 0x40 ? 0 : (ctx.r8.u64 << (ctx.r9.u8 & 0x7F));
	// ldx r11,r10,r11
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r10.u32 + ctx.r11.u32);
	// and r11,r9,r11
	ctx.r11.u64 = ctx.r9.u64 & ctx.r11.u64;
	// cmpldi cr6,r11,0
	ctx.cr6.compare<uint64_t>(ctx.r11.u64, 0, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// bne cr6,0x82a2f720
	if (!ctx.cr6.eq) goto loc_82A2F720;
	// li r11,0
	ctx.r11.s64 = 0;
loc_82A2F720:
	// clrlwi r3,r11,24
	ctx.r3.u64 = ctx.r11.u32 & 0xFF;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A2F728"))) PPC_WEAK_FUNC(sub_82A2F728);
PPC_FUNC_IMPL(__imp__sub_82A2F728) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,132(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 132);
	// lwz r11,64(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 64);
	// not r11,r11
	ctx.r11.u64 = ~ctx.r11.u64;
	// rlwinm r3,r11,30,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 30) & 0x1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A2F73C"))) PPC_WEAK_FUNC(sub_82A2F73C);
PPC_FUNC_IMPL(__imp__sub_82A2F73C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A2F740"))) PPC_WEAK_FUNC(sub_82A2F740);
PPC_FUNC_IMPL(__imp__sub_82A2F740) {
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
	// clrlwi r31,r4,24
	ctx.r31.u64 = ctx.r4.u32 & 0xFF;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x82a2f278
	ctx.lr = 0x82A2F764;
	sub_82A2F278(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82a2f778
	if (ctx.cr0.eq) goto loc_82A2F778;
	// lwz r11,284(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 284);
	// rlwinm r3,r11,27,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// b 0x82a2f77c
	goto loc_82A2F77C;
loc_82A2F778:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82A2F77C:
	// cmpwi cr6,r31,18
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 18, ctx.xer);
	// beq cr6,0x82a2f818
	if (ctx.cr6.eq) goto loc_82A2F818;
	// cmpwi cr6,r31,19
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 19, ctx.xer);
	// beq cr6,0x82a2f818
	if (ctx.cr6.eq) goto loc_82A2F818;
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq cr6,0x82a2f83c
	if (ctx.cr6.eq) goto loc_82A2F83C;
	// cmpwi cr6,r31,1
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 1, ctx.xer);
	// beq cr6,0x82a2f83c
	if (ctx.cr6.eq) goto loc_82A2F83C;
	// clrlwi. r11,r31,24
	ctx.r11.u64 = ctx.r31.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt 0x82a2f7b0
	if (ctx.cr0.lt) goto loc_82A2F7B0;
	// cmpwi cr6,r11,17
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 17, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// ble cr6,0x82a2f7b4
	if (!ctx.cr6.gt) goto loc_82A2F7B4;
loc_82A2F7B0:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82A2F7B4:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82a2f83c
	if (ctx.cr0.eq) goto loc_82A2F83C;
	// srawi r11,r31,1
	ctx.xer.ca = (ctx.r31.s32 < 0) & ((ctx.r31.u32 & 0x1) != 0);
	ctx.r11.s64 = ctx.r31.s32 >> 1;
	// addi r4,r31,1
	ctx.r4.s64 = ctx.r31.s64 + 1;
	// addze r11,r11
	temp.s64 = ctx.r11.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r11.u32;
	ctx.r11.s64 = temp.s64;
	// rlwinm r11,r11,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// subf. r11,r11,r31
	ctx.r11.s64 = ctx.r31.s64 - ctx.r11.s64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82a2f7d8
	if (ctx.cr0.eq) goto loc_82A2F7D8;
	// addi r4,r31,-1
	ctx.r4.s64 = ctx.r31.s64 + -1;
loc_82A2F7D8:
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82a2f80c
	if (!ctx.cr0.eq) goto loc_82A2F80C;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82a2f278
	ctx.lr = 0x82A2F7E8;
	sub_82A2F278(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82a2f7fc
	if (ctx.cr0.eq) goto loc_82A2F7FC;
	// lwz r11,284(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 284);
	// rlwinm r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// b 0x82a2f800
	goto loc_82A2F800;
loc_82A2F7FC:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82A2F800:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// li r11,0
	ctx.r11.s64 = 0;
	// beq 0x82a2f810
	if (ctx.cr0.eq) goto loc_82A2F810;
loc_82A2F80C:
	// li r11,1
	ctx.r11.s64 = 1;
loc_82A2F810:
	// clrlwi r3,r11,24
	ctx.r3.u64 = ctx.r11.u32 & 0xFF;
	// b 0x82a2f83c
	goto loc_82A2F83C;
loc_82A2F818:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82a2f278
	ctx.lr = 0x82A2F824;
	sub_82A2F278(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82a2f838
	if (ctx.cr0.eq) goto loc_82A2F838;
	// lwz r11,284(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 284);
	// clrlwi r3,r11,31
	ctx.r3.u64 = ctx.r11.u32 & 0x1;
	// b 0x82a2f83c
	goto loc_82A2F83C;
loc_82A2F838:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82A2F83C:
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

__attribute__((alias("__imp__sub_82A2F854"))) PPC_WEAK_FUNC(sub_82A2F854);
PPC_FUNC_IMPL(__imp__sub_82A2F854) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A2F858"))) PPC_WEAK_FUNC(sub_82A2F858);
PPC_FUNC_IMPL(__imp__sub_82A2F858) {
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
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// bl 0x82a2f278
	ctx.lr = 0x82A2F870;
	sub_82A2F278(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82a2f894
	if (ctx.cr0.eq) goto loc_82A2F894;
	// clrlwi. r11,r31,24
	ctx.r11.u64 = ctx.r31.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// lwz r11,284(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 284);
	// beq 0x82a2f88c
	if (ctx.cr0.eq) goto loc_82A2F88C;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// b 0x82a2f890
	goto loc_82A2F890;
loc_82A2F88C:
	// rlwinm r11,r11,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFE;
loc_82A2F890:
	// stw r11,284(r3)
	PPC_STORE_U32(ctx.r3.u32 + 284, ctx.r11.u32);
loc_82A2F894:
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

__attribute__((alias("__imp__sub_82A2F8A8"))) PPC_WEAK_FUNC(sub_82A2F8A8);
PPC_FUNC_IMPL(__imp__sub_82A2F8A8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x833a01ac
	ctx.lr = 0x82A2F8B0;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// bl 0x82a2f278
	ctx.lr = 0x82A2F8C4;
	sub_82A2F278(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82a2f9bc
	if (ctx.cr0.eq) goto loc_82A2F9BC;
	// clrlwi. r11,r30,24
	ctx.r11.u64 = ctx.r30.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// lwz r11,284(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 284);
	// beq 0x82a2f9a8
	if (ctx.cr0.eq) goto loc_82A2F9A8;
	// rlwinm. r11,r11,31,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 31) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82a2f9bc
	if (!ctx.cr0.eq) goto loc_82A2F9BC;
	// lwz r11,284(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 284);
	// clrlwi. r9,r31,24
	ctx.r9.u64 = ctx.r31.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// ori r11,r11,2
	ctx.r11.u64 = ctx.r11.u64 | 2;
	// stw r11,284(r3)
	PPC_STORE_U32(ctx.r3.u32 + 284, ctx.r11.u32);
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// ori r11,r11,4
	ctx.r11.u64 = ctx.r11.u64 | 4;
	// stw r11,284(r3)
	PPC_STORE_U32(ctx.r3.u32 + 284, ctx.r11.u32);
	// blt 0x82a2f90c
	if (ctx.cr0.lt) goto loc_82A2F90C;
	// cmpwi cr6,r9,17
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 17, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// ble cr6,0x82a2f910
	if (!ctx.cr6.gt) goto loc_82A2F910;
loc_82A2F90C:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82A2F910:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82a2f9bc
	if (ctx.cr0.eq) goto loc_82A2F9BC;
	// rlwinm r11,r31,24,24,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 24) & 0xFF;
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// blt cr6,0x82a2f950
	if (ctx.cr6.lt) goto loc_82A2F950;
	// cmpwi cr6,r11,6
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 6, ctx.xer);
	// bge cr6,0x82a2f950
	if (!ctx.cr6.lt) goto loc_82A2F950;
	// cmpwi r9,0
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// blt 0x82a2f940
	if (ctx.cr0.lt) goto loc_82A2F940;
	// cmpwi cr6,r9,17
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 17, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// ble cr6,0x82a2f944
	if (!ctx.cr6.gt) goto loc_82A2F944;
loc_82A2F940:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82A2F944:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// bne 0x82a2f954
	if (!ctx.cr0.eq) goto loc_82A2F954;
loc_82A2F950:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82A2F954:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82a2f9bc
	if (!ctx.cr0.eq) goto loc_82A2F9BC;
	// lwz r11,132(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 132);
	// lwz r11,496(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 496);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82a2f9bc
	if (!ctx.cr6.eq) goto loc_82A2F9BC;
	// lis r11,0
	ctx.r11.s64 = 0;
	// lwz r10,128(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 128);
	// ori r11,r11,41160
	ctx.r11.u64 = ctx.r11.u64 | 41160;
	// add r8,r10,r11
	ctx.r8.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwz r10,0(r8)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stw r10,0(r8)
	PPC_STORE_U32(ctx.r8.u32 + 0, ctx.r10.u32);
	// cmpwi cr6,r10,18
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 18, ctx.xer);
	// bge cr6,0x82a2f9bc
	if (!ctx.cr6.lt) goto loc_82A2F9BC;
	// lwz r10,128(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 128);
	// lwzx r11,r10,r11
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// addi r11,r11,10272
	ctx.r11.s64 = ctx.r11.s64 + 10272;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r9,r11,r10
	PPC_STORE_U32(ctx.r11.u32 + ctx.r10.u32, ctx.r9.u32);
	// b 0x82a2f9bc
	goto loc_82A2F9BC;
loc_82A2F9A8:
	// rlwinm r11,r11,0,31,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFFFD;
	// stw r11,284(r3)
	PPC_STORE_U32(ctx.r3.u32 + 284, ctx.r11.u32);
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// rlwinm r11,r11,0,30,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFFFB;
	// stw r11,284(r3)
	PPC_STORE_U32(ctx.r3.u32 + 284, ctx.r11.u32);
loc_82A2F9BC:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x833a01fc
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82A2F9C4"))) PPC_WEAK_FUNC(sub_82A2F9C4);
PPC_FUNC_IMPL(__imp__sub_82A2F9C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A2F9C8"))) PPC_WEAK_FUNC(sub_82A2F9C8);
PPC_FUNC_IMPL(__imp__sub_82A2F9C8) {
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
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// bl 0x82a2f278
	ctx.lr = 0x82A2F9E0;
	sub_82A2F278(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82a2fa04
	if (ctx.cr0.eq) goto loc_82A2FA04;
	// clrlwi. r11,r31,24
	ctx.r11.u64 = ctx.r31.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// lwz r11,284(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 284);
	// beq 0x82a2f9fc
	if (ctx.cr0.eq) goto loc_82A2F9FC;
	// ori r11,r11,4
	ctx.r11.u64 = ctx.r11.u64 | 4;
	// b 0x82a2fa00
	goto loc_82A2FA00;
loc_82A2F9FC:
	// rlwinm r11,r11,0,30,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFFFB;
loc_82A2FA00:
	// stw r11,284(r3)
	PPC_STORE_U32(ctx.r3.u32 + 284, ctx.r11.u32);
loc_82A2FA04:
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

__attribute__((alias("__imp__sub_82A2FA18"))) PPC_WEAK_FUNC(sub_82A2FA18);
PPC_FUNC_IMPL(__imp__sub_82A2FA18) {
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
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// bl 0x82a2f278
	ctx.lr = 0x82A2FA30;
	sub_82A2F278(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82a2fa54
	if (ctx.cr0.eq) goto loc_82A2FA54;
	// clrlwi. r11,r31,24
	ctx.r11.u64 = ctx.r31.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// lwz r11,284(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 284);
	// beq 0x82a2fa4c
	if (ctx.cr0.eq) goto loc_82A2FA4C;
	// ori r11,r11,32
	ctx.r11.u64 = ctx.r11.u64 | 32;
	// b 0x82a2fa50
	goto loc_82A2FA50;
loc_82A2FA4C:
	// rlwinm r11,r11,0,27,25
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFFDF;
loc_82A2FA50:
	// stw r11,284(r3)
	PPC_STORE_U32(ctx.r3.u32 + 284, ctx.r11.u32);
loc_82A2FA54:
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

__attribute__((alias("__imp__sub_82A2FA68"))) PPC_WEAK_FUNC(sub_82A2FA68);
PPC_FUNC_IMPL(__imp__sub_82A2FA68) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,128(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 128);
	// cmplwi cr6,r4,39
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 39, ctx.xer);
	// addis r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 65536;
	// addi r11,r11,-24456
	ctx.r11.s64 = ctx.r11.s64 + -24456;
	// blt cr6,0x82a2fa88
	if (ctx.cr6.lt) goto loc_82A2FA88;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r3,r11,14964
	ctx.r3.s64 = ctx.r11.s64 + 14964;
	// b 0x82dffbd8
	sub_82DFFBD8(ctx, base);
	return;
loc_82A2FA88:
	// clrlwi. r10,r5,24
	ctx.r10.u64 = ctx.r5.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// rlwinm r10,r4,29,3,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 29) & 0x1FFFFFF8;
	// li r8,1
	ctx.r8.s64 = 1;
	// clrldi r9,r4,58
	ctx.r9.u64 = ctx.r4.u64 & 0x3F;
	// sld r9,r8,r9
	ctx.r9.u64 = ctx.r9.u8 & 0x40 ? 0 : (ctx.r8.u64 << (ctx.r9.u8 & 0x7F));
	// ldx r8,r10,r11
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r10.u32 + ctx.r11.u32);
	// beq 0x82a2faac
	if (ctx.cr0.eq) goto loc_82A2FAAC;
	// or r9,r9,r8
	ctx.r9.u64 = ctx.r9.u64 | ctx.r8.u64;
	// b 0x82a2fab0
	goto loc_82A2FAB0;
loc_82A2FAAC:
	// andc r9,r8,r9
	ctx.r9.u64 = ctx.r8.u64 & ~ctx.r9.u64;
loc_82A2FAB0:
	// stdx r9,r10,r11
	PPC_STORE_U64(ctx.r10.u32 + ctx.r11.u32, ctx.r9.u64);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A2FAB8"))) PPC_WEAK_FUNC(sub_82A2FAB8);
PPC_FUNC_IMPL(__imp__sub_82A2FAB8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stfd f29,-40(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -40, ctx.f29.u64);
	// stfd f30,-32(r1)
	PPC_STORE_U64(ctx.r1.u32 + -32, ctx.f30.u64);
	// stfd f31,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.f31.u64);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lbz r11,1(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 1);
	// lis r10,-32245
	ctx.r10.s64 = -2113208320;
	// lis r9,-31885
	ctx.r9.s64 = -2089615360;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lfd f0,80(r1)
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// lfs f31,-4192(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -4192);
	ctx.f31.f64 = double(temp.f32);
	// frsp f0,f0
	ctx.f0.f64 = double(float(ctx.f0.f64));
	// lfs f30,6448(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 6448);
	ctx.f30.f64 = double(temp.f32);
	// fmuls f29,f0,f31
	ctx.f29.f64 = double(float(ctx.f0.f64 * ctx.f31.f64));
	// bl 0x82483598
	ctx.lr = 0x82A2FB08;
	sub_82483598(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// bl 0x82e85ee0
	ctx.lr = 0x82A2FB18;
	sub_82E85EE0(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// fmuls f1,f30,f29
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = double(float(ctx.f30.f64 * ctx.f29.f64));
	// bl 0x82e844f0
	ctx.lr = 0x82A2FB28;
	sub_82E844F0(ctx, base);
	// lwz r3,84(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82a2fb38
	if (ctx.cr6.eq) goto loc_82A2FB38;
	// bl 0x82480108
	ctx.lr = 0x82A2FB38;
	sub_82480108(ctx, base);
loc_82A2FB38:
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82e01548
	ctx.lr = 0x82A2FB40;
	sub_82E01548(ctx, base);
	// lbz r10,2(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 2);
	// lis r11,-31885
	ctx.r11.s64 = -2089615360;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// std r10,96(r1)
	PPC_STORE_U64(ctx.r1.u32 + 96, ctx.r10.u64);
	// lfd f0,96(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 96);
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// frsp f0,f0
	ctx.f0.f64 = double(float(ctx.f0.f64));
	// lfs f30,6452(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 6452);
	ctx.f30.f64 = double(temp.f32);
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// fmuls f31,f0,f31
	ctx.f31.f64 = double(float(ctx.f0.f64 * ctx.f31.f64));
	// bl 0x82483598
	ctx.lr = 0x82A2FB6C;
	sub_82483598(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// bl 0x82e85ee0
	ctx.lr = 0x82A2FB7C;
	sub_82E85EE0(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// fmuls f1,f30,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = double(float(ctx.f30.f64 * ctx.f31.f64));
	// bl 0x82e844f0
	ctx.lr = 0x82A2FB8C;
	sub_82E844F0(ctx, base);
	// lwz r3,108(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82a2fb9c
	if (ctx.cr6.eq) goto loc_82A2FB9C;
	// bl 0x82480108
	ctx.lr = 0x82A2FB9C;
	sub_82480108(ctx, base);
loc_82A2FB9C:
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82e01548
	ctx.lr = 0x82A2FBA4;
	sub_82E01548(ctx, base);
	// addi r3,r1,120
	ctx.r3.s64 = ctx.r1.s64 + 120;
	// bl 0x82a11b90
	ctx.lr = 0x82A2FBAC;
	sub_82A11B90(ctx, base);
	// lbz r4,3(r31)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r31.u32 + 3);
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// bl 0x82a13480
	ctx.lr = 0x82A2FBB8;
	sub_82A13480(ctx, base);
	// addi r3,r1,120
	ctx.r3.s64 = ctx.r1.s64 + 120;
	// bl 0x82e01548
	ctx.lr = 0x82A2FBC0;
	sub_82E01548(ctx, base);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// lfd f29,-40(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f29.u64 = PPC_LOAD_U64(ctx.r1.u32 + -40);
	// lfd f30,-32(r1)
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -32);
	// lfd f31,-24(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A2FBE0"))) PPC_WEAK_FUNC(sub_82A2FBE0);
PPC_FUNC_IMPL(__imp__sub_82A2FBE0) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,128(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 128);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// addi r3,r11,16
	ctx.r3.s64 = ctx.r11.s64 + 16;
	// b 0x82a2fab8
	sub_82A2FAB8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82A2FBF4"))) PPC_WEAK_FUNC(sub_82A2FBF4);
PPC_FUNC_IMPL(__imp__sub_82A2FBF4) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A2FBF8"))) PPC_WEAK_FUNC(sub_82A2FBF8);
PPC_FUNC_IMPL(__imp__sub_82A2FBF8) {
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
	// bl 0x82a2f278
	ctx.lr = 0x82A2FC08;
	sub_82A2F278(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82a2fc18
	if (ctx.cr0.eq) goto loc_82A2FC18;
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// b 0x82a2fc1c
	goto loc_82A2FC1C;
loc_82A2FC18:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82A2FC1C:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A2FC2C"))) PPC_WEAK_FUNC(sub_82A2FC2C);
PPC_FUNC_IMPL(__imp__sub_82A2FC2C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A2FC30"))) PPC_WEAK_FUNC(sub_82A2FC30);
PPC_FUNC_IMPL(__imp__sub_82A2FC30) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
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
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// bl 0x82a2f278
	ctx.lr = 0x82A2FC48;
	sub_82A2F278(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82a2fc68
	if (ctx.cr0.eq) goto loc_82A2FC68;
	// cmplwi cr6,r31,3
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 3, ctx.xer);
	// bge cr6,0x82a2fc68
	if (!ctx.cr6.lt) goto loc_82A2FC68;
	// addi r11,r31,1
	ctx.r11.s64 = ctx.r31.s64 + 1;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lfsx f1,r11,r3
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r3.u32);
	ctx.f1.f64 = double(temp.f32);
	// b 0x82a2fc70
	goto loc_82A2FC70;
loc_82A2FC68:
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// lfs f1,-31160(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -31160);
	ctx.f1.f64 = double(temp.f32);
loc_82A2FC70:
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

__attribute__((alias("__imp__sub_82A2FC84"))) PPC_WEAK_FUNC(sub_82A2FC84);
PPC_FUNC_IMPL(__imp__sub_82A2FC84) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A2FC88"))) PPC_WEAK_FUNC(sub_82A2FC88);
PPC_FUNC_IMPL(__imp__sub_82A2FC88) {
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
	// bl 0x82a2f278
	ctx.lr = 0x82A2FC98;
	sub_82A2F278(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82a2fca8
	if (ctx.cr0.eq) goto loc_82A2FCA8;
	// lwz r3,16(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// b 0x82a2fcb0
	goto loc_82A2FCB0;
loc_82A2FCA8:
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// lwz r3,-29964(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -29964);
loc_82A2FCB0:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A2FCC0"))) PPC_WEAK_FUNC(sub_82A2FCC0);
PPC_FUNC_IMPL(__imp__sub_82A2FCC0) {
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
	// li r4,18
	ctx.r4.s64 = 18;
	// bl 0x82a2f278
	ctx.lr = 0x82A2FCD4;
	sub_82A2F278(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82a2fce4
	if (ctx.cr0.eq) goto loc_82A2FCE4;
	// lwz r3,20(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// b 0x82a2fce8
	goto loc_82A2FCE8;
loc_82A2FCE4:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82A2FCE8:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A2FCF8"))) PPC_WEAK_FUNC(sub_82A2FCF8);
PPC_FUNC_IMPL(__imp__sub_82A2FCF8) {
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
	// bl 0x82a2f278
	ctx.lr = 0x82A2FD08;
	sub_82A2F278(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82a2fd18
	if (ctx.cr0.eq) goto loc_82A2FD18;
	// lwz r3,24(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// b 0x82a2fd1c
	goto loc_82A2FD1C;
loc_82A2FD18:
	// li r3,-1
	ctx.r3.s64 = -1;
loc_82A2FD1C:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A2FD2C"))) PPC_WEAK_FUNC(sub_82A2FD2C);
PPC_FUNC_IMPL(__imp__sub_82A2FD2C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A2FD30"))) PPC_WEAK_FUNC(sub_82A2FD30);
PPC_FUNC_IMPL(__imp__sub_82A2FD30) {
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
	// lwz r11,132(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 132);
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// bl 0x82a2f278
	ctx.lr = 0x82A2FD48;
	sub_82A2F278(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82a2fd58
	if (ctx.cr0.eq) goto loc_82A2FD58;
	// lwz r11,24(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// b 0x82a2fd5c
	goto loc_82A2FD5C;
loc_82A2FD58:
	// li r11,-1
	ctx.r11.s64 = -1;
loc_82A2FD5C:
	// rlwinm r11,r11,1,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0x1;
	// xori r3,r11,1
	ctx.r3.u64 = ctx.r11.u64 ^ 1;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A2FD74"))) PPC_WEAK_FUNC(sub_82A2FD74);
PPC_FUNC_IMPL(__imp__sub_82A2FD74) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A2FD78"))) PPC_WEAK_FUNC(sub_82A2FD78);
PPC_FUNC_IMPL(__imp__sub_82A2FD78) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// lwz r11,132(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 132);
	// mr r7,r6
	ctx.r7.u64 = ctx.r6.u64;
	// lis r6,-32230
	ctx.r6.s64 = -2112225280;
	// li r8,0
	ctx.r8.s64 = 0;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r10,-29964(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + -29964);
	// lbz r9,3(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 3);
	// lfs f0,24284(r6)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 24284);
	ctx.f0.f64 = double(temp.f32);
	// stw r8,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r8.u32);
	// stfs f0,16(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 16, temp.u32);
	// stw r8,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r8.u32);
	// stfs f0,20(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 20, temp.u32);
	// cmpwi cr6,r9,18
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 18, ctx.xer);
	// stw r10,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r10.u32);
	// stw r10,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r10.u32);
	// beq cr6,0x82a2fe10
	if (ctx.cr6.eq) goto loc_82A2FE10;
	// lwz r10,64(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 64);
	// lwz r3,0(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm r8,r10,31,31,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 31) & 0x1;
	// bl 0x82a2dbf8
	ctx.lr = 0x82A2FDDC;
	sub_82A2DBF8(ctx, base);
	// lis r11,-31843
	ctx.r11.s64 = -2086862848;
	// rlwinm r10,r9,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r11,r11,-23984
	ctx.r11.s64 = ctx.r11.s64 + -23984;
	// cntlzw r9,r8
	ctx.r9.u64 = ctx.r8.u32 == 0 ? 32 : __builtin_clz(ctx.r8.u32);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// rlwinm r8,r9,27,31,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 27) & 0x1;
	// add r4,r10,r11
	ctx.r4.u64 = ctx.r10.u64 + ctx.r11.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x824d62c8
	ctx.lr = 0x82A2FE00;
	sub_824D62C8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// li r5,24
	ctx.r5.s64 = 24;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x833a1390
	ctx.lr = 0x82A2FE10;
	sub_833A1390(ctx, base);
loc_82A2FE10:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A2FE28"))) PPC_WEAK_FUNC(sub_82A2FE28);
PPC_FUNC_IMPL(__imp__sub_82A2FE28) {
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
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// bl 0x82a2f278
	ctx.lr = 0x82A2FE40;
	sub_82A2F278(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82a2fe60
	if (ctx.cr0.eq) goto loc_82A2FE60;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplw cr6,r11,r31
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r31.u32, ctx.xer);
	// bge cr6,0x82a2fe60
	if (!ctx.cr6.lt) goto loc_82A2FE60;
	// stw r31,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r31.u32);
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x82a2fe64
	goto loc_82A2FE64;
loc_82A2FE60:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82A2FE64:
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

__attribute__((alias("__imp__sub_82A2FE78"))) PPC_WEAK_FUNC(sub_82A2FE78);
PPC_FUNC_IMPL(__imp__sub_82A2FE78) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stfd f31,-16(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.f31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// fmr f31,f1
	ctx.f31.f64 = ctx.f1.f64;
	// bl 0x82a2f278
	ctx.lr = 0x82A2FE90;
	sub_82A2F278(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82a2fecc
	if (ctx.cr0.eq) goto loc_82A2FECC;
	// lis r9,-32230
	ctx.r9.s64 = -2112225280;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r10,r3,4
	ctx.r10.s64 = ctx.r3.s64 + 4;
	// lfs f13,24284(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 24284);
	ctx.f13.f64 = double(temp.f32);
loc_82A2FEA8:
	// lfs f0,0(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// blt cr6,0x82a2fee4
	if (ctx.cr6.lt) goto loc_82A2FEE4;
	// fcmpu cr6,f0,f31
	ctx.cr6.compare(ctx.f0.f64, ctx.f31.f64);
	// bgt cr6,0x82a2fee4
	if (ctx.cr6.gt) goto loc_82A2FEE4;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// blt cr6,0x82a2fea8
	if (ctx.cr6.lt) goto loc_82A2FEA8;
loc_82A2FECC:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82A2FED0:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// lfd f31,-16(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
loc_82A2FEE4:
	// fmr f0,f31
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = ctx.f31.f64;
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// bge cr6,0x82a2ff10
	if (!ctx.cr6.lt) goto loc_82A2FF10;
	// subfic r10,r11,3
	ctx.xer.ca = ctx.r11.u32 <= 3;
	ctx.r10.s64 = 3 - ctx.r11.s64;
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r9,r9,r3
	ctx.r9.u64 = ctx.r9.u64 + ctx.r3.u64;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_82A2FF00:
	// lfs f13,4(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// stfsu f0,4(r9)
	temp.f32 = float(ctx.f0.f64);
	ea = 4 + ctx.r9.u32;
	PPC_STORE_U32(ea, temp.u32);
	ctx.r9.u32 = ea;
	// fmr f0,f13
	ctx.f0.f64 = ctx.f13.f64;
	// bdnz 0x82a2ff00
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82A2FF00;
loc_82A2FF10:
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r3,r11,27,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// b 0x82a2fed0
	goto loc_82A2FED0;
}

__attribute__((alias("__imp__sub_82A2FF1C"))) PPC_WEAK_FUNC(sub_82A2FF1C);
PPC_FUNC_IMPL(__imp__sub_82A2FF1C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A2FF20"))) PPC_WEAK_FUNC(sub_82A2FF20);
PPC_FUNC_IMPL(__imp__sub_82A2FF20) {
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
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// bl 0x82a2f278
	ctx.lr = 0x82A2FF38;
	sub_82A2F278(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82a2ff58
	if (ctx.cr0.eq) goto loc_82A2FF58;
	// lwz r11,16(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// cmplw cr6,r11,r31
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r31.u32, ctx.xer);
	// bge cr6,0x82a2ff58
	if (!ctx.cr6.lt) goto loc_82A2FF58;
	// stw r31,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r31.u32);
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x82a2ff5c
	goto loc_82A2FF5C;
loc_82A2FF58:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82A2FF5C:
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

__attribute__((alias("__imp__sub_82A2FF70"))) PPC_WEAK_FUNC(sub_82A2FF70);
PPC_FUNC_IMPL(__imp__sub_82A2FF70) {
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
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// bl 0x82a2f278
	ctx.lr = 0x82A2FF88;
	sub_82A2F278(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82a2ffa8
	if (ctx.cr0.eq) goto loc_82A2FFA8;
	// lwz r11,20(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// cmplw cr6,r11,r31
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r31.u32, ctx.xer);
	// bge cr6,0x82a2ffa8
	if (!ctx.cr6.lt) goto loc_82A2FFA8;
	// stw r31,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r31.u32);
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x82a2ffac
	goto loc_82A2FFAC;
loc_82A2FFA8:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82A2FFAC:
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

__attribute__((alias("__imp__sub_82A2FFC0"))) PPC_WEAK_FUNC(sub_82A2FFC0);
PPC_FUNC_IMPL(__imp__sub_82A2FFC0) {
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
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// li r4,18
	ctx.r4.s64 = 18;
	// bl 0x82a2f278
	ctx.lr = 0x82A2FFDC;
	sub_82A2F278(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82a2fffc
	if (ctx.cr0.eq) goto loc_82A2FFFC;
	// lwz r11,20(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// cmplw cr6,r11,r31
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r31.u32, ctx.xer);
	// bge cr6,0x82a2fffc
	if (!ctx.cr6.lt) goto loc_82A2FFFC;
	// stw r31,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r31.u32);
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x82a30000
	goto loc_82A30000;
loc_82A2FFFC:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82A30000:
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

__attribute__((alias("__imp__sub_82A30014"))) PPC_WEAK_FUNC(sub_82A30014);
PPC_FUNC_IMPL(__imp__sub_82A30014) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A30018"))) PPC_WEAK_FUNC(sub_82A30018);
PPC_FUNC_IMPL(__imp__sub_82A30018) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x833a01ac
	ctx.lr = 0x82A30020;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// bl 0x82a2f278
	ctx.lr = 0x82A30034;
	sub_82A2F278(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82a30040
	if (ctx.cr0.eq) goto loc_82A30040;
	// stw r29,24(r3)
	PPC_STORE_U32(ctx.r3.u32 + 24, ctx.r29.u32);
loc_82A30040:
	// clrlwi r10,r31,24
	ctx.r10.u64 = ctx.r31.u32 & 0xFF;
	// cmpwi cr6,r10,20
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 20, ctx.xer);
	// blt cr6,0x82a30058
	if (ctx.cr6.lt) goto loc_82A30058;
	// cmpwi cr6,r10,22
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 22, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// ble cr6,0x82a3005c
	if (!ctx.cr6.gt) goto loc_82A3005C;
loc_82A30058:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82A3005C:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82a30084
	if (!ctx.cr0.eq) goto loc_82A30084;
	// cmpwi cr6,r10,23
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 23, ctx.xer);
	// blt cr6,0x82a30078
	if (ctx.cr6.lt) goto loc_82A30078;
	// cmpwi cr6,r10,26
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 26, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// ble cr6,0x82a3007c
	if (!ctx.cr6.gt) goto loc_82A3007C;
loc_82A30078:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82A3007C:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82a3009c
	if (ctx.cr0.eq) goto loc_82A3009C;
loc_82A30084:
	// ori r4,r10,256
	ctx.r4.u64 = ctx.r10.u64 | 256;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82a2f278
	ctx.lr = 0x82A30090;
	sub_82A2F278(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82a3009c
	if (ctx.cr0.eq) goto loc_82A3009C;
	// stw r29,24(r3)
	PPC_STORE_U32(ctx.r3.u32 + 24, ctx.r29.u32);
loc_82A3009C:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x833a01fc
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82A300A4"))) PPC_WEAK_FUNC(sub_82A300A4);
PPC_FUNC_IMPL(__imp__sub_82A300A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A300A8"))) PPC_WEAK_FUNC(sub_82A300A8);
PPC_FUNC_IMPL(__imp__sub_82A300A8) {
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
	// lwz r11,132(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 132);
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// bl 0x82a2f278
	ctx.lr = 0x82A300D0;
	sub_82A2F278(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82a300f0
	if (ctx.cr0.eq) goto loc_82A300F0;
	// rlwinm r11,r30,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 3) & 0xFFFFFFF8;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// stw r10,28(r11)
	PPC_STORE_U32(ctx.r11.u32 + 28, ctx.r10.u32);
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// stw r10,32(r11)
	PPC_STORE_U32(ctx.r11.u32 + 32, ctx.r10.u32);
loc_82A300F0:
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

__attribute__((alias("__imp__sub_82A30108"))) PPC_WEAK_FUNC(sub_82A30108);
PPC_FUNC_IMPL(__imp__sub_82A30108) {
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
	// lwz r11,132(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 132);
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// bl 0x82a2f278
	ctx.lr = 0x82A30128;
	sub_82A2F278(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82a30148
	if (ctx.cr0.eq) goto loc_82A30148;
	// cmplwi cr6,r31,32
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 32, ctx.xer);
	// bgt cr6,0x82a30148
	if (ctx.cr6.gt) goto loc_82A30148;
	// rlwinm r11,r31,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 3) & 0xFFFFFFF8;
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// addi r3,r11,28
	ctx.r3.s64 = ctx.r11.s64 + 28;
	// b 0x82a3014c
	goto loc_82A3014C;
loc_82A30148:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82A3014C:
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

__attribute__((alias("__imp__sub_82A30160"))) PPC_WEAK_FUNC(sub_82A30160);
PPC_FUNC_IMPL(__imp__sub_82A30160) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x833a01a0
	ctx.lr = 0x82A30168;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// mr r26,r5
	ctx.r26.u64 = ctx.r5.u64;
	// li r30,0
	ctx.r30.s64 = 0;
	// li r29,0
	ctx.r29.s64 = 0;
	// cmpwi cr6,r6,1
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 1, ctx.xer);
	// beq cr6,0x82a30190
	if (ctx.cr6.eq) goto loc_82A30190;
	// cmpwi cr6,r6,0
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// bne cr6,0x82a301f0
	if (!ctx.cr6.eq) goto loc_82A301F0;
loc_82A30190:
	// addi r11,r6,-1
	ctx.r11.s64 = ctx.r6.s64 + -1;
	// addic r10,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// subfe r31,r10,r11
	temp.u8 = (~ctx.r10.u32 + ctx.r11.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r31.u64 = ~ctx.r10.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// b 0x82a301e8
	goto loc_82A301E8;
loc_82A301A0:
	// ori r4,r31,256
	ctx.r4.u64 = ctx.r31.u64 | 256;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82a2f278
	ctx.lr = 0x82A301AC;
	sub_82A2F278(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82a301e4
	if (ctx.cr0.eq) goto loc_82A301E4;
	// li r11,5
	ctx.r11.s64 = 5;
	// addi r10,r3,284
	ctx.r10.s64 = ctx.r3.s64 + 284;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
loc_82A301C0:
	// lwz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq 0x82a301dc
	if (ctx.cr0.eq) goto loc_82A301DC;
	// rlwinm. r11,r11,31,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 31) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// beq 0x82a301dc
	if (ctx.cr0.eq) goto loc_82A301DC;
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
loc_82A301DC:
	// addi r10,r10,288
	ctx.r10.s64 = ctx.r10.s64 + 288;
	// bdnz 0x82a301c0
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82A301C0;
loc_82A301E4:
	// addi r31,r31,2
	ctx.r31.s64 = ctx.r31.s64 + 2;
loc_82A301E8:
	// cmplwi cr6,r31,17
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 17, ctx.xer);
	// ble cr6,0x82a301a0
	if (!ctx.cr6.gt) goto loc_82A301A0;
loc_82A301F0:
	// stw r30,0(r27)
	PPC_STORE_U32(ctx.r27.u32 + 0, ctx.r30.u32);
	// stw r29,0(r26)
	PPC_STORE_U32(ctx.r26.u32 + 0, ctx.r29.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x833a01f0
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82A30200"))) PPC_WEAK_FUNC(sub_82A30200);
PPC_FUNC_IMPL(__imp__sub_82A30200) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x833a019c
	ctx.lr = 0x82A30208;
	__savegprlr_25(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// mr r26,r5
	ctx.r26.u64 = ctx.r5.u64;
	// li r30,0
	ctx.r30.s64 = 0;
	// li r29,0
	ctx.r29.s64 = 0;
	// cmpwi cr6,r6,1
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 1, ctx.xer);
	// beq cr6,0x82a30230
	if (ctx.cr6.eq) goto loc_82A30230;
	// cmpwi cr6,r6,0
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// bne cr6,0x82a302a8
	if (!ctx.cr6.eq) goto loc_82A302A8;
loc_82A30230:
	// addi r11,r6,-1
	ctx.r11.s64 = ctx.r6.s64 + -1;
	// addic r10,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// subfe r31,r10,r11
	temp.u8 = (~ctx.r10.u32 + ctx.r11.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r31.u64 = ~ctx.r10.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// cmplwi cr6,r31,17
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 17, ctx.xer);
	// bgt cr6,0x82a302a8
	if (ctx.cr6.gt) goto loc_82A302A8;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// lwz r25,-29980(r11)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r11.u32 + -29980);
loc_82A3024C:
	// ori r4,r31,256
	ctx.r4.u64 = ctx.r31.u64 | 256;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82a2f278
	ctx.lr = 0x82A30258;
	sub_82A2F278(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82a3029c
	if (ctx.cr0.eq) goto loc_82A3029C;
	// li r10,5
	ctx.r10.s64 = 5;
	// addi r11,r3,284
	ctx.r11.s64 = ctx.r3.s64 + 284;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_82A3026C:
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// clrlwi. r9,r10,31
	ctx.r9.u64 = ctx.r10.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq 0x82a30294
	if (ctx.cr0.eq) goto loc_82A30294;
	// rlwinm. r10,r10,31,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 31) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// beq 0x82a30294
	if (ctx.cr0.eq) goto loc_82A30294;
	// lwz r10,-268(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + -268);
	// cmplw cr6,r10,r25
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r25.u32, ctx.xer);
	// bne cr6,0x82a30294
	if (!ctx.cr6.eq) goto loc_82A30294;
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
loc_82A30294:
	// addi r11,r11,288
	ctx.r11.s64 = ctx.r11.s64 + 288;
	// bdnz 0x82a3026c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82A3026C;
loc_82A3029C:
	// addi r31,r31,2
	ctx.r31.s64 = ctx.r31.s64 + 2;
	// cmplwi cr6,r31,17
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 17, ctx.xer);
	// ble cr6,0x82a3024c
	if (!ctx.cr6.gt) goto loc_82A3024C;
loc_82A302A8:
	// stw r30,0(r27)
	PPC_STORE_U32(ctx.r27.u32 + 0, ctx.r30.u32);
	// stw r29,0(r26)
	PPC_STORE_U32(ctx.r26.u32 + 0, ctx.r29.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x833a01ec
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82A302B8"))) PPC_WEAK_FUNC(sub_82A302B8);
PPC_FUNC_IMPL(__imp__sub_82A302B8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x833a01a8
	ctx.lr = 0x82A302C0;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r29,0
	ctx.r29.s64 = 0;
	// li r31,0
	ctx.r31.s64 = 0;
	// lwz r28,-29980(r11)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r11.u32 + -29980);
loc_82A302D8:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82a2f278
	ctx.lr = 0x82A302E4;
	sub_82A2F278(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82a30310
	if (ctx.cr0.eq) goto loc_82A30310;
	// lwz r11,284(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 284);
	// clrlwi. r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x82a30310
	if (ctx.cr0.eq) goto loc_82A30310;
	// rlwinm. r11,r11,31,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 31) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82a30310
	if (ctx.cr0.eq) goto loc_82A30310;
	// lwz r11,16(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// cmplw cr6,r11,r28
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r28.u32, ctx.xer);
	// bne cr6,0x82a30310
	if (!ctx.cr6.eq) goto loc_82A30310;
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
loc_82A30310:
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// cmplwi cr6,r31,17
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 17, ctx.xer);
	// ble cr6,0x82a302d8
	if (!ctx.cr6.gt) goto loc_82A302D8;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x833a01f8
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82A30328"))) PPC_WEAK_FUNC(sub_82A30328);
PPC_FUNC_IMPL(__imp__sub_82A30328) {
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
	// clrlwi. r11,r4,24
	ctx.r11.u64 = ctx.r4.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt 0x82a30348
	if (ctx.cr0.lt) goto loc_82A30348;
	// cmpwi cr6,r11,17
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 17, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// ble cr6,0x82a3034c
	if (!ctx.cr6.gt) goto loc_82A3034C;
loc_82A30348:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82A3034C:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82a3036c
	if (ctx.cr0.eq) goto loc_82A3036C;
	// bl 0x82a2f278
	ctx.lr = 0x82A30358;
	sub_82A2F278(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82a3036c
	if (ctx.cr0.eq) goto loc_82A3036C;
	// lwz r11,284(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 284);
	// ori r11,r11,16
	ctx.r11.u64 = ctx.r11.u64 | 16;
	// stw r11,284(r3)
	PPC_STORE_U32(ctx.r3.u32 + 284, ctx.r11.u32);
loc_82A3036C:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A3037C"))) PPC_WEAK_FUNC(sub_82A3037C);
PPC_FUNC_IMPL(__imp__sub_82A3037C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A30380"))) PPC_WEAK_FUNC(sub_82A30380);
PPC_FUNC_IMPL(__imp__sub_82A30380) {
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
	// clrlwi. r11,r4,24
	ctx.r11.u64 = ctx.r4.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt 0x82a303a0
	if (ctx.cr0.lt) goto loc_82A303A0;
	// cmpwi cr6,r11,17
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 17, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// ble cr6,0x82a303a4
	if (!ctx.cr6.gt) goto loc_82A303A4;
loc_82A303A0:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82A303A4:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82a303c4
	if (ctx.cr0.eq) goto loc_82A303C4;
	// bl 0x82a2f278
	ctx.lr = 0x82A303B0;
	sub_82A2F278(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82a303c4
	if (ctx.cr0.eq) goto loc_82A303C4;
	// lwz r11,284(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 284);
	// rlwinm r3,r11,28,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 28) & 0x1;
	// b 0x82a303c8
	goto loc_82A303C8;
loc_82A303C4:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82A303C8:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A303D8"))) PPC_WEAK_FUNC(sub_82A303D8);
PPC_FUNC_IMPL(__imp__sub_82A303D8) {
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
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82a2f278
	ctx.lr = 0x82A303EC;
	sub_82A2F278(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82a30400
	if (ctx.cr0.eq) goto loc_82A30400;
	// lwz r11,284(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 284);
	// rlwinm r3,r11,31,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 31) & 0x1;
	// b 0x82a30404
	goto loc_82A30404;
loc_82A30400:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82A30404:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A30414"))) PPC_WEAK_FUNC(sub_82A30414);
PPC_FUNC_IMPL(__imp__sub_82A30414) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A30418"))) PPC_WEAK_FUNC(sub_82A30418);
PPC_FUNC_IMPL(__imp__sub_82A30418) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,128(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 128);
	// clrlwi. r10,r4,24
	ctx.r10.u64 = ctx.r4.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// addis r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 65536;
	// addi r11,r11,-23860
	ctx.r11.s64 = ctx.r11.s64 + -23860;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm r3,r10,22,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 22) & 0x1;
	// beq 0x82a3043c
	if (ctx.cr0.eq) goto loc_82A3043C;
	// ori r10,r10,1024
	ctx.r10.u64 = ctx.r10.u64 | 1024;
	// b 0x82a30440
	goto loc_82A30440;
loc_82A3043C:
	// rlwinm r10,r10,0,22,20
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFFFFFFFBFF;
loc_82A30440:
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A30448"))) PPC_WEAK_FUNC(sub_82A30448);
PPC_FUNC_IMPL(__imp__sub_82A30448) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,128(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 128);
	// clrlwi. r10,r4,24
	ctx.r10.u64 = ctx.r4.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// addis r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 65536;
	// addi r11,r11,-23860
	ctx.r11.s64 = ctx.r11.s64 + -23860;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm r3,r10,21,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 21) & 0x1;
	// beq 0x82a3046c
	if (ctx.cr0.eq) goto loc_82A3046C;
	// ori r10,r10,2048
	ctx.r10.u64 = ctx.r10.u64 | 2048;
	// b 0x82a30470
	goto loc_82A30470;
loc_82A3046C:
	// rlwinm r10,r10,0,21,19
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFFFFFFF7FF;
loc_82A30470:
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A30478"))) PPC_WEAK_FUNC(sub_82A30478);
PPC_FUNC_IMPL(__imp__sub_82A30478) {
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
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82a2f278
	ctx.lr = 0x82A3048C;
	sub_82A2F278(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82a304a0
	if (ctx.cr0.eq) goto loc_82A304A0;
	// lwz r11,284(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 284);
	// rlwinm r11,r11,31,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 31) & 0x1;
	// b 0x82a304a4
	goto loc_82A304A4;
loc_82A304A0:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82A304A4:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r3,r11,27,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A304C0"))) PPC_WEAK_FUNC(sub_82A304C0);
PPC_FUNC_IMPL(__imp__sub_82A304C0) {
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
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r10,0
	ctx.r10.s64 = 0;
	// lwz r3,0(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stw r11,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r11.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// stw r11,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r11.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplw cr6,r3,r11
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r11.u32, ctx.xer);
	// stw r10,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r10.u32);
	// beq cr6,0x82a30518
	if (ctx.cr6.eq) goto loc_82A30518;
loc_82A30500:
	// lwz r30,0(r3)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// bl 0x82e01568
	ctx.lr = 0x82A30508;
	sub_82E01568(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x82a30500
	if (!ctx.cr6.eq) goto loc_82A30500;
loc_82A30518:
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

__attribute__((alias("__imp__sub_82A30530"))) PPC_WEAK_FUNC(sub_82A30530);
PPC_FUNC_IMPL(__imp__sub_82A30530) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x833a01ac
	ctx.lr = 0x82A30538;
	__savegprlr_29(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r29,0(r3)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// ld r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r4.u32 + 0);
	// lwz r31,0(r29)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// b 0x82a305b0
	goto loc_82A305B0;
loc_82A30554:
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// lwz r10,84(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x82a30578
	if (!ctx.cr6.eq) goto loc_82A30578;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// beq cr6,0x82a3057c
	if (ctx.cr6.eq) goto loc_82A3057C;
loc_82A30578:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82A3057C:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82a305ac
	if (ctx.cr0.eq) goto loc_82A305AC;
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r31,0(r31)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// stw r31,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r31.u32);
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// bl 0x82e01568
	ctx.lr = 0x82A3059C;
	sub_82E01568(ctx, base);
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stw r11,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r11.u32);
	// b 0x82a305b0
	goto loc_82A305B0;
loc_82A305AC:
	// lwz r31,0(r31)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
loc_82A305B0:
	// cmplw cr6,r31,r29
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r29.u32, ctx.xer);
	// bne cr6,0x82a30554
	if (!ctx.cr6.eq) goto loc_82A30554;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x833a01fc
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82A305C0"))) PPC_WEAK_FUNC(sub_82A305C0);
PPC_FUNC_IMPL(__imp__sub_82A305C0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x833a01a0
	ctx.lr = 0x82A305C8;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r3,r3,16
	ctx.r3.s64 = ctx.r3.s64 + 16;
	// bl 0x82a2cd20
	ctx.lr = 0x82A305D8;
	sub_82A2CD20(ctx, base);
	// addi r29,r31,28
	ctx.r29.s64 = ctx.r31.s64 + 28;
	// li r30,141
	ctx.r30.s64 = 141;
loc_82A305E0:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82a2d920
	ctx.lr = 0x82A305E8;
	sub_82A2D920(ctx, base);
	// addic. r30,r30,-1
	ctx.xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// addi r29,r29,288
	ctx.r29.s64 = ctx.r29.s64 + 288;
	// bge 0x82a305e0
	if (!ctx.cr0.lt) goto loc_82A305E0;
	// li r11,2
	ctx.r11.s64 = 2;
	// addis r10,r31,1
	ctx.r10.s64 = ctx.r31.s64 + 65536;
	// li r30,0
	ctx.r30.s64 = 0;
	// addi r10,r10,-24472
	ctx.r10.s64 = ctx.r10.s64 + -24472;
	// addi r10,r10,16
	ctx.r10.s64 = ctx.r10.s64 + 16;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
loc_82A3060C:
	// stdu r30,-8(r10)
	ea = -8 + ctx.r10.u32;
	PPC_STORE_U64(ea, ctx.r30.u64);
	ctx.r10.u32 = ea;
	// bdnz 0x82a3060c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82A3060C;
	// lis r11,0
	ctx.r11.s64 = 0;
	// lis r10,0
	ctx.r10.s64 = 0;
	// ori r11,r11,41080
	ctx.r11.u64 = ctx.r11.u64 | 41080;
	// ori r10,r10,41220
	ctx.r10.u64 = ctx.r10.u64 | 41220;
	// li r29,1
	ctx.r29.s64 = 1;
	// addis r27,r31,1
	ctx.r27.s64 = ctx.r31.s64 + 65536;
	// mr r28,r29
	ctx.r28.u64 = ctx.r29.u64;
	// stdx r30,r31,r11
	PPC_STORE_U64(ctx.r31.u32 + ctx.r11.u32, ctx.r30.u64);
	// addi r27,r27,-24312
	ctx.r27.s64 = ctx.r27.s64 + -24312;
	// stwx r30,r31,r10
	PPC_STORE_U32(ctx.r31.u32 + ctx.r10.u32, ctx.r30.u32);
loc_82A3063C:
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82a2d8b0
	ctx.lr = 0x82A30644;
	sub_82A2D8B0(ctx, base);
	// addic. r28,r28,-1
	ctx.xer.ca = ctx.r28.u32 > 0;
	ctx.r28.s64 = ctx.r28.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// addi r27,r27,144
	ctx.r27.s64 = ctx.r27.s64 + 144;
	// bge 0x82a3063c
	if (!ctx.cr0.lt) goto loc_82A3063C;
	// addis r11,r31,1
	ctx.r11.s64 = ctx.r31.s64 + 65536;
	// mr r8,r29
	ctx.r8.u64 = ctx.r29.u64;
	// addi r11,r11,-24024
	ctx.r11.s64 = ctx.r11.s64 + -24024;
loc_82A3065C:
	// li r9,16
	ctx.r9.s64 = 16;
	// addi r10,r11,30
	ctx.r10.s64 = ctx.r11.s64 + 30;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_82A30668:
	// sth r30,-30(r10)
	PPC_STORE_U16(ctx.r10.u32 + -30, ctx.r30.u16);
	// sthu r30,2(r10)
	ea = 2 + ctx.r10.u32;
	PPC_STORE_U16(ea, ctx.r30.u16);
	ctx.r10.u32 = ea;
	// bdnz 0x82a30668
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82A30668;
	// addic. r8,r8,-1
	ctx.xer.ca = ctx.r8.u32 > 0;
	ctx.r8.s64 = ctx.r8.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// addi r11,r11,64
	ctx.r11.s64 = ctx.r11.s64 + 64;
	// bge 0x82a3065c
	if (!ctx.cr0.lt) goto loc_82A3065C;
	// addis r27,r31,1
	ctx.r27.s64 = ctx.r31.s64 + 65536;
	// mr r28,r29
	ctx.r28.u64 = ctx.r29.u64;
	// addi r27,r27,-23896
	ctx.r27.s64 = ctx.r27.s64 + -23896;
	// mr r26,r27
	ctx.r26.u64 = ctx.r27.u64;
loc_82A30690:
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x825120b8
	ctx.lr = 0x82A30698;
	sub_825120B8(ctx, base);
	// addic. r28,r28,-1
	ctx.xer.ca = ctx.r28.u32 > 0;
	ctx.r28.s64 = ctx.r28.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// addi r26,r26,16
	ctx.r26.s64 = ctx.r26.s64 + 16;
	// bge 0x82a30690
	if (!ctx.cr0.lt) goto loc_82A30690;
	// addis r28,r31,1
	ctx.r28.s64 = ctx.r31.s64 + 65536;
	// addi r28,r28,-23864
	ctx.r28.s64 = ctx.r28.s64 + -23864;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x83272e58
	ctx.lr = 0x82A306B4;
	sub_83272E58(ctx, base);
	// lis r11,0
	ctx.r11.s64 = 0;
	// lis r10,0
	ctx.r10.s64 = 0;
	// ori r11,r11,41676
	ctx.r11.u64 = ctx.r11.u64 | 41676;
	// lis r7,-31885
	ctx.r7.s64 = -2089615360;
	// ori r5,r10,40924
	ctx.r5.u64 = ctx.r10.u64 | 40924;
	// li r10,5
	ctx.r10.s64 = 5;
	// lis r9,0
	ctx.r9.s64 = 0;
	// stwx r30,r31,r11
	PPC_STORE_U32(ctx.r31.u32 + ctx.r11.u32, ctx.r30.u32);
	// lis r8,-31842
	ctx.r8.s64 = -2086797312;
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// lis r6,0
	ctx.r6.s64 = 0;
	// ori r11,r9,40928
	ctx.r11.u64 = ctx.r9.u64 | 40928;
	// addi r9,r8,8272
	ctx.r9.s64 = ctx.r8.s64 + 8272;
	// lis r8,-31878
	ctx.r8.s64 = -2089156608;
	// ori r6,r6,40944
	ctx.r6.u64 = ctx.r6.u64 | 40944;
	// addi r4,r8,-14992
	ctx.r4.s64 = ctx.r8.s64 + -14992;
	// lwz r10,9384(r7)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r7.u32 + 9384);
	// addis r7,r31,1
	ctx.r7.s64 = ctx.r31.s64 + 65536;
	// stwx r10,r31,r5
	PPC_STORE_U32(ctx.r31.u32 + ctx.r5.u32, ctx.r10.u32);
	// lis r10,0
	ctx.r10.s64 = 0;
	// addi r7,r7,-23856
	ctx.r7.s64 = ctx.r7.s64 + -23856;
	// stwx r29,r31,r11
	PPC_STORE_U32(ctx.r31.u32 + ctx.r11.u32, ctx.r29.u32);
	// lvx128 v63,r0,r9
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r9.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lis r11,0
	ctx.r11.s64 = 0;
	// stvx128 v63,r31,r6
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r31.u32 + ctx.r6.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// ori r10,r10,41208
	ctx.r10.u64 = ctx.r10.u64 | 41208;
	// lfs f0,-14992(r8)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + -14992);
	ctx.f0.f64 = double(temp.f32);
	// ori r6,r11,41160
	ctx.r6.u64 = ctx.r11.u64 | 41160;
	// stfs f0,0(r7)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r7.u32 + 0, temp.u32);
	// li r11,18
	ctx.r11.s64 = 18;
	// lfs f0,4(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// addis r9,r31,1
	ctx.r9.s64 = ctx.r31.s64 + 65536;
	// stfs f0,4(r7)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r7.u32 + 4, temp.u32);
	// li r5,-1
	ctx.r5.s64 = -1;
	// lfs f0,8(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// addi r9,r9,-24448
	ctx.r9.s64 = ctx.r9.s64 + -24448;
	// stfs f0,8(r7)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r7.u32 + 8, temp.u32);
	// li r8,32
	ctx.r8.s64 = 32;
	// lfs f0,12(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 12);
	ctx.f0.f64 = double(temp.f32);
	// addi r9,r9,-4
	ctx.r9.s64 = ctx.r9.s64 + -4;
	// stfs f0,12(r7)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r7.u32 + 12, temp.u32);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// stwx r5,r31,r6
	PPC_STORE_U32(ctx.r31.u32 + ctx.r6.u32, ctx.r5.u32);
	// stwx r30,r31,r10
	PPC_STORE_U32(ctx.r31.u32 + ctx.r10.u32, ctx.r30.u32);
loc_82A30764:
	// stwu r8,4(r9)
	ea = 4 + ctx.r9.u32;
	PPC_STORE_U32(ea, ctx.r8.u32);
	ctx.r9.u32 = ea;
	// bdnz 0x82a30764
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82A30764;
	// addis r11,r31,1
	ctx.r11.s64 = ctx.r31.s64 + 65536;
	// addis r3,r31,1
	ctx.r3.s64 = ctx.r31.s64 + 65536;
	// addi r11,r11,-24324
	ctx.r11.s64 = ctx.r11.s64 + -24324;
	// li r5,72
	ctx.r5.s64 = 72;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r3,-24576
	ctx.r3.s64 = ctx.r3.s64 + -24576;
	// stw r30,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r30.u32);
	// stw r30,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r30.u32);
	// bl 0x833a2b30
	ctx.lr = 0x82A30790;
	sub_833A2B30(ctx, base);
	// addis r11,r31,1
	ctx.r11.s64 = ctx.r31.s64 + 65536;
	// addis r3,r31,1
	ctx.r3.s64 = ctx.r31.s64 + 65536;
	// addi r11,r11,-24504
	ctx.r11.s64 = ctx.r11.s64 + -24504;
	// li r5,43
	ctx.r5.s64 = 43;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r3,-24372
	ctx.r3.s64 = ctx.r3.s64 + -24372;
	// std r30,0(r11)
	PPC_STORE_U64(ctx.r11.u32 + 0, ctx.r30.u64);
	// std r30,8(r11)
	PPC_STORE_U64(ctx.r11.u32 + 8, ctx.r30.u64);
	// std r30,16(r11)
	PPC_STORE_U64(ctx.r11.u32 + 16, ctx.r30.u64);
	// stw r30,24(r11)
	PPC_STORE_U32(ctx.r11.u32 + 24, ctx.r30.u32);
	// bl 0x833a2b30
	ctx.lr = 0x82A307BC;
	sub_833A2B30(ctx, base);
	// addis r11,r31,1
	ctx.r11.s64 = ctx.r31.s64 + 65536;
	// std r30,0(r27)
	PPC_STORE_U64(ctx.r27.u32 + 0, ctx.r30.u64);
	// std r30,8(r27)
	PPC_STORE_U64(ctx.r27.u32 + 8, ctx.r30.u64);
	// lis r9,0
	ctx.r9.s64 = 0;
	// addi r11,r11,-23840
	ctx.r11.s64 = ctx.r11.s64 + -23840;
	// std r30,16(r27)
	PPC_STORE_U64(ctx.r27.u32 + 16, ctx.r30.u64);
	// std r30,24(r27)
	PPC_STORE_U64(ctx.r27.u32 + 24, ctx.r30.u64);
	// stw r30,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r30.u32);
	// ori r9,r9,41169
	ctx.r9.u64 = ctx.r9.u64 | 41169;
	// lis r8,0
	ctx.r8.s64 = 0;
	// std r30,0(r11)
	PPC_STORE_U64(ctx.r11.u32 + 0, ctx.r30.u64);
	// lis r3,0
	ctx.r3.s64 = 0;
	// std r30,8(r11)
	PPC_STORE_U64(ctx.r11.u32 + 8, ctx.r30.u64);
	// ori r8,r8,41170
	ctx.r8.u64 = ctx.r8.u64 | 41170;
	// std r30,16(r11)
	PPC_STORE_U64(ctx.r11.u32 + 16, ctx.r30.u64);
	// lis r10,0
	ctx.r10.s64 = 0;
	// lis r7,0
	ctx.r7.s64 = 0;
	// lis r6,0
	ctx.r6.s64 = 0;
	// stbx r29,r31,r9
	PPC_STORE_U8(ctx.r31.u32 + ctx.r9.u32, ctx.r29.u8);
	// lis r5,0
	ctx.r5.s64 = 0;
	// lis r4,0
	ctx.r4.s64 = 0;
	// stbx r29,r31,r8
	PPC_STORE_U8(ctx.r31.u32 + ctx.r8.u32, ctx.r29.u8);
	// lis r11,0
	ctx.r11.s64 = 0;
	// ori r9,r3,41182
	ctx.r9.u64 = ctx.r3.u64 | 41182;
	// ori r10,r10,41168
	ctx.r10.u64 = ctx.r10.u64 | 41168;
	// ori r7,r7,41174
	ctx.r7.u64 = ctx.r7.u64 | 41174;
	// ori r6,r6,41171
	ctx.r6.u64 = ctx.r6.u64 | 41171;
	// ori r5,r5,41173
	ctx.r5.u64 = ctx.r5.u64 | 41173;
	// ori r4,r4,41191
	ctx.r4.u64 = ctx.r4.u64 | 41191;
	// stbx r29,r31,r9
	PPC_STORE_U8(ctx.r31.u32 + ctx.r9.u32, ctx.r29.u8);
	// ori r11,r11,41192
	ctx.r11.u64 = ctx.r11.u64 | 41192;
	// li r8,4
	ctx.r8.s64 = 4;
	// stbx r29,r31,r7
	PPC_STORE_U8(ctx.r31.u32 + ctx.r7.u32, ctx.r29.u8);
	// stbx r29,r31,r6
	PPC_STORE_U8(ctx.r31.u32 + ctx.r6.u32, ctx.r29.u8);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stbx r29,r31,r5
	PPC_STORE_U8(ctx.r31.u32 + ctx.r5.u32, ctx.r29.u8);
	// stbx r8,r31,r10
	PPC_STORE_U8(ctx.r31.u32 + ctx.r10.u32, ctx.r8.u8);
	// stbx r29,r31,r4
	PPC_STORE_U8(ctx.r31.u32 + ctx.r4.u32, ctx.r29.u8);
	// stbx r29,r31,r11
	PPC_STORE_U8(ctx.r31.u32 + ctx.r11.u32, ctx.r29.u8);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x833a01f0
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82A30860"))) PPC_WEAK_FUNC(sub_82A30860);
PPC_FUNC_IMPL(__imp__sub_82A30860) {
	PPC_FUNC_PROLOGUE();
	// lwz r10,132(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 132);
	// lis r11,0
	ctx.r11.s64 = 0;
	// li r9,0
	ctx.r9.s64 = 0;
	// ori r11,r11,41064
	ctx.r11.u64 = ctx.r11.u64 | 41064;
	// mr r8,r11
	ctx.r8.u64 = ctx.r11.u64;
	// stw r9,64(r10)
	PPC_STORE_U32(ctx.r10.u32 + 64, ctx.r9.u32);
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// lwz r11,132(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 132);
	// lwz r7,64(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 64);
	// ori r7,r7,4
	ctx.r7.u64 = ctx.r7.u64 | 4;
	// stw r7,64(r11)
	PPC_STORE_U32(ctx.r11.u32 + 64, ctx.r7.u32);
	// lwz r11,132(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 132);
	// lwz r7,128(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 128);
	// add r8,r7,r8
	ctx.r8.u64 = ctx.r7.u64 + ctx.r8.u64;
	// ld r7,0(r8)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r8.u32 + 0);
	// addi r6,r11,72
	ctx.r6.s64 = ctx.r11.s64 + 72;
	// std r7,72(r11)
	PPC_STORE_U64(ctx.r11.u32 + 72, ctx.r7.u64);
	// ld r8,8(r8)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r8.u32 + 8);
	// std r8,80(r11)
	PPC_STORE_U64(ctx.r11.u32 + 80, ctx.r8.u64);
	// lwz r11,132(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 132);
	// lwz r8,128(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 128);
	// add r10,r8,r10
	ctx.r10.u64 = ctx.r8.u64 + ctx.r10.u64;
	// ld r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r10.u32 + 0);
	// addi r7,r11,88
	ctx.r7.s64 = ctx.r11.s64 + 88;
	// std r8,88(r11)
	PPC_STORE_U64(ctx.r11.u32 + 88, ctx.r8.u64);
	// ld r10,8(r10)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r10.u32 + 8);
	// std r10,96(r11)
	PPC_STORE_U64(ctx.r11.u32 + 96, ctx.r10.u64);
	// lwz r11,132(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 132);
	// stw r9,108(r11)
	PPC_STORE_U32(ctx.r11.u32 + 108, ctx.r9.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A308D8"))) PPC_WEAK_FUNC(sub_82A308D8);
PPC_FUNC_IMPL(__imp__sub_82A308D8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lwz r10,132(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 132);
	// li r11,2
	ctx.r11.s64 = 2;
	// li r9,0
	ctx.r9.s64 = 0;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// stw r9,64(r10)
	PPC_STORE_U32(ctx.r10.u32 + 64, ctx.r9.u32);
	// lwz r11,132(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 132);
	// addi r11,r11,72
	ctx.r11.s64 = ctx.r11.s64 + 72;
	// addi r11,r11,16
	ctx.r11.s64 = ctx.r11.s64 + 16;
loc_82A308F8:
	// stdu r9,-8(r11)
	ea = -8 + ctx.r11.u32;
	PPC_STORE_U64(ea, ctx.r9.u64);
	ctx.r11.u32 = ea;
	// bdnz 0x82a308f8
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82A308F8;
	// lwz r10,132(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 132);
	// li r11,2
	ctx.r11.s64 = 2;
	// addi r10,r10,88
	ctx.r10.s64 = ctx.r10.s64 + 88;
	// addi r10,r10,16
	ctx.r10.s64 = ctx.r10.s64 + 16;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
loc_82A30914:
	// stdu r9,-8(r10)
	ea = -8 + ctx.r10.u32;
	PPC_STORE_U64(ea, ctx.r9.u64);
	ctx.r10.u32 = ea;
	// bdnz 0x82a30914
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82A30914;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A30920"))) PPC_WEAK_FUNC(sub_82A30920);
PPC_FUNC_IMPL(__imp__sub_82A30920) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,132(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 132);
	// addi r3,r11,20
	ctx.r3.s64 = ctx.r11.s64 + 20;
	// b 0x82a30530
	sub_82A30530(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82A3092C"))) PPC_WEAK_FUNC(sub_82A3092C);
PPC_FUNC_IMPL(__imp__sub_82A3092C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A30930"))) PPC_WEAK_FUNC(sub_82A30930);
PPC_FUNC_IMPL(__imp__sub_82A30930) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x833a01a4
	ctx.lr = 0x82A30938;
	__savegprlr_27(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r11,3
	ctx.r11.s64 = 3;
	// addi r10,r1,76
	ctx.r10.s64 = ctx.r1.s64 + 76;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// li r29,0
	ctx.r29.s64 = 0;
loc_82A30958:
	// stw r29,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r29.u32);
	// stwu r29,8(r10)
	ea = 8 + ctx.r10.u32;
	PPC_STORE_U32(ea, ctx.r29.u32);
	ctx.r10.u32 = ea;
	// bdnz 0x82a30958
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82A30958;
	// li r10,3
	ctx.r10.s64 = 3;
	// addi r11,r1,76
	ctx.r11.s64 = ctx.r1.s64 + 76;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_82A30970:
	// li r10,-1
	ctx.r10.s64 = -1;
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// stwu r29,8(r11)
	ea = 8 + ctx.r11.u32;
	PPC_STORE_U32(ea, ctx.r29.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x82a30970
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82A30970;
	// mr r31,r29
	ctx.r31.u64 = ctx.r29.u64;
loc_82A30984:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8287aef0
	ctx.lr = 0x82A3098C;
	sub_8287AEF0(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82a30a38
	if (ctx.cr0.eq) goto loc_82A30A38;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8287ae78
	ctx.lr = 0x82A3099C;
	sub_8287AE78(ctx, base);
	// addi r11,r30,-1
	ctx.r11.s64 = ctx.r30.s64 + -1;
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// addi r11,r11,2
	ctx.r11.s64 = ctx.r11.s64 + 2;
	// cmpw cr6,r3,r11
	ctx.cr6.compare<int32_t>(ctx.r3.s32, ctx.r11.s32, ctx.xer);
	// beq cr6,0x82a30a38
	if (ctx.cr6.eq) goto loc_82A30A38;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82a2cea8
	ctx.lr = 0x82A309C4;
	sub_82A2CEA8(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82a30a38
	if (ctx.cr0.eq) goto loc_82A30A38;
	// mr r10,r29
	ctx.r10.u64 = ctx.r29.u64;
	// addi r11,r1,84
	ctx.r11.s64 = ctx.r1.s64 + 84;
loc_82A309D4:
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r9,r3
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r3.u32, ctx.xer);
	// blt cr6,0x82a309f4
	if (ctx.cr6.lt) goto loc_82A309F4;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// cmpwi cr6,r10,3
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 3, ctx.xer);
	// blt cr6,0x82a309d4
	if (ctx.cr6.lt) goto loc_82A309D4;
	// b 0x82a30a38
	goto loc_82A30A38;
loc_82A309F4:
	// cmpwi cr6,r10,1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 1, ctx.xer);
	// bgt cr6,0x82a30a24
	if (ctx.cr6.gt) goto loc_82A30A24;
	// subfic r9,r10,2
	ctx.xer.ca = ctx.r10.u32 <= 2;
	ctx.r9.s64 = 2 - ctx.r10.s64;
	// addi r11,r1,100
	ctx.r11.s64 = ctx.r1.s64 + 100;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_82A30A08:
	// lwz r8,-12(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + -12);
	// addi r9,r11,-8
	ctx.r9.s64 = ctx.r11.s64 + -8;
	// stw r8,-4(r11)
	PPC_STORE_U32(ctx.r11.u32 + -4, ctx.r8.u32);
	// lwz r8,-8(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + -8);
	// stw r8,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r8.u32);
	// mr r11,r9
	ctx.r11.u64 = ctx.r9.u64;
	// bdnz 0x82a30a08
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82A30A08;
loc_82A30A24:
	// rlwinm r11,r10,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0xFFFFFFF8;
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r31,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r31.u32);
	// stw r3,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r3.u32);
loc_82A30A38:
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// cmplwi cr6,r31,43
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 43, ctx.xer);
	// blt cr6,0x82a30984
	if (ctx.cr6.lt) goto loc_82A30984;
	// li r9,3
	ctx.r9.s64 = 3;
	// addi r11,r1,72
	ctx.r11.s64 = ctx.r1.s64 + 72;
	// addi r10,r27,-4
	ctx.r10.s64 = ctx.r27.s64 + -4;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_82A30A54:
	// lwzu r9,8(r11)
	ea = 8 + ctx.r11.u32;
	ctx.r9.u64 = PPC_LOAD_U32(ea);
	ctx.r11.u32 = ea;
	// stwu r9,4(r10)
	ea = 4 + ctx.r10.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r10.u32 = ea;
	// bdnz 0x82a30a54
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82A30A54;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x833a01f4
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82A30A68"))) PPC_WEAK_FUNC(sub_82A30A68);
PPC_FUNC_IMPL(__imp__sub_82A30A68) {
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
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,128(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 128);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// add r11,r11,r4
	ctx.r11.u64 = ctx.r11.u64 + ctx.r4.u64;
	// addis r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 65536;
	// addi r11,r11,-24372
	ctx.r11.s64 = ctx.r11.s64 + -24372;
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// stb r5,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r5.u8);
	// cmplwi cr6,r9,3
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 3, ctx.xer);
	// bge cr6,0x82a30b7c
	if (!ctx.cr6.lt) goto loc_82A30B7C;
	// cmpwi cr6,r5,3
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 3, ctx.xer);
	// blt cr6,0x82a30b7c
	if (ctx.cr6.lt) goto loc_82A30B7C;
	// cmpwi cr6,r5,5
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 5, ctx.xer);
	// bgt cr6,0x82a30b7c
	if (ctx.cr6.gt) goto loc_82A30B7C;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82a11b90
	ctx.lr = 0x82A30AB8;
	sub_82A11B90(ctx, base);
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// bl 0x82a0fb38
	ctx.lr = 0x82A30AC0;
	sub_82A0FB38(ctx, base);
	// bl 0x82546d98
	ctx.lr = 0x82A30AC4;
	sub_82546D98(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82e01548
	ctx.lr = 0x82A30AD0;
	sub_82E01548(ctx, base);
	// clrlwi. r11,r30,24
	ctx.r11.u64 = ctx.r30.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82a30b7c
	if (ctx.cr0.eq) goto loc_82A30B7C;
	// li r11,44
	ctx.r11.s64 = 44;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82480408
	ctx.lr = 0x82A30AEC;
	sub_82480408(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// stw r11,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r11.u32);
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// stw r11,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r11.u32);
	// beq cr6,0x82a30b24
	if (ctx.cr6.eq) goto loc_82A30B24;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
loc_82A30B08:
	// mfmsr r9
	ctx.r9.u64 = ctx.msr;
	// mtmsrd r13,1
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// lwarx r10,0,r11
	ctx.reserved.u32 = *(uint32_t*)(base + ctx.r11.u32);
	ctx.r10.u64 = __builtin_bswap32(ctx.reserved.u32);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stwcx. r10,0,r11
	ctx.cr0.lt = 0;
	ctx.cr0.gt = 0;
	ctx.cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ctx.r11.u32), ctx.reserved.s32, __builtin_bswap32(ctx.r10.s32));
	ctx.cr0.so = ctx.xer.so;
	// mtmsrd r9,1
	ctx.msr = (ctx.r9.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// bne 0x82a30b08
	if (!ctx.cr0.eq) goto loc_82A30B08;
loc_82A30B24:
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// bl 0x82a11b90
	ctx.lr = 0x82A30B2C;
	sub_82A11B90(ctx, base);
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// bl 0x82a105d8
	ctx.lr = 0x82A30B34;
	sub_82A105D8(ctx, base);
	// lis r11,-32230
	ctx.r11.s64 = -2112225280;
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r7,r1,88
	ctx.r7.s64 = ctx.r1.s64 + 88;
	// lfs f1,24284(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 24284);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x82e8ed28
	ctx.lr = 0x82A30B54;
	sub_82E8ED28(ctx, base);
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// bl 0x82e01548
	ctx.lr = 0x82A30B5C;
	sub_82E01548(ctx, base);
	// lwz r3,92(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82a30b6c
	if (ctx.cr6.eq) goto loc_82A30B6C;
	// bl 0x82480108
	ctx.lr = 0x82A30B6C;
	sub_82480108(ctx, base);
loc_82A30B6C:
	// lwz r3,116(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82a30b7c
	if (ctx.cr6.eq) goto loc_82A30B7C;
	// bl 0x82480108
	ctx.lr = 0x82A30B7C;
	sub_82480108(ctx, base);
loc_82A30B7C:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
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

