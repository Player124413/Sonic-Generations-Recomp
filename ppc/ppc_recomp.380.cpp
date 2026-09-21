#include "ppc_recomp_shared.h"

__attribute__((alias("__imp__sub_8313D0E8"))) PPC_WEAK_FUNC(sub_8313D0E8);
PPC_FUNC_IMPL(__imp__sub_8313D0E8) {
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
	// lis r11,-32228
	ctx.r11.s64 = -2112094208;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r4,r11,-6252
	ctx.r4.s64 = ctx.r11.s64 + -6252;
	// cmplw cr6,r3,r4
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r4.u32, ctx.xer);
	// beq cr6,0x8313d2d4
	if (ctx.cr6.eq) goto loc_8313D2D4;
	// bl 0x830d67b8
	ctx.lr = 0x8313D110;
	sub_830D67B8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x8313d2d4
	if (ctx.cr0.eq) goto loc_8313D2D4;
	// lis r11,-32228
	ctx.r11.s64 = -2112094208;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,-6616
	ctx.r4.s64 = ctx.r11.s64 + -6616;
	// bl 0x830d67b8
	ctx.lr = 0x8313D128;
	sub_830D67B8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x8313d2cc
	if (ctx.cr0.eq) goto loc_8313D2CC;
	// lis r11,-32228
	ctx.r11.s64 = -2112094208;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,-6604
	ctx.r4.s64 = ctx.r11.s64 + -6604;
	// bl 0x830d67b8
	ctx.lr = 0x8313D140;
	sub_830D67B8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x8313d2cc
	if (ctx.cr0.eq) goto loc_8313D2CC;
	// lis r11,-32228
	ctx.r11.s64 = -2112094208;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,-6684
	ctx.r4.s64 = ctx.r11.s64 + -6684;
	// bl 0x830d67b8
	ctx.lr = 0x8313D158;
	sub_830D67B8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x8313d2c4
	if (ctx.cr0.eq) goto loc_8313D2C4;
	// lis r11,-32228
	ctx.r11.s64 = -2112094208;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,-6664
	ctx.r4.s64 = ctx.r11.s64 + -6664;
	// bl 0x830d67b8
	ctx.lr = 0x8313D170;
	sub_830D67B8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x8313d2c4
	if (ctx.cr0.eq) goto loc_8313D2C4;
	// lis r11,-32228
	ctx.r11.s64 = -2112094208;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,-6648
	ctx.r4.s64 = ctx.r11.s64 + -6648;
	// bl 0x830d67b8
	ctx.lr = 0x8313D188;
	sub_830D67B8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x8313d2c4
	if (ctx.cr0.eq) goto loc_8313D2C4;
	// lis r11,-32228
	ctx.r11.s64 = -2112094208;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,-6636
	ctx.r4.s64 = ctx.r11.s64 + -6636;
	// bl 0x830d67b8
	ctx.lr = 0x8313D1A0;
	sub_830D67B8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x8313d2c4
	if (ctx.cr0.eq) goto loc_8313D2C4;
	// lis r11,-32228
	ctx.r11.s64 = -2112094208;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,-6428
	ctx.r4.s64 = ctx.r11.s64 + -6428;
	// bl 0x830d67b8
	ctx.lr = 0x8313D1B8;
	sub_830D67B8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x8313d2bc
	if (ctx.cr0.eq) goto loc_8313D2BC;
	// lis r11,-32228
	ctx.r11.s64 = -2112094208;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,-6404
	ctx.r4.s64 = ctx.r11.s64 + -6404;
	// bl 0x830d67b8
	ctx.lr = 0x8313D1D0;
	sub_830D67B8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x8313d2bc
	if (ctx.cr0.eq) goto loc_8313D2BC;
	// lis r11,-32228
	ctx.r11.s64 = -2112094208;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,-6472
	ctx.r4.s64 = ctx.r11.s64 + -6472;
	// bl 0x830d67b8
	ctx.lr = 0x8313D1E8;
	sub_830D67B8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x8313d2b4
	if (ctx.cr0.eq) goto loc_8313D2B4;
	// lis r11,-32228
	ctx.r11.s64 = -2112094208;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,-6448
	ctx.r4.s64 = ctx.r11.s64 + -6448;
	// bl 0x830d67b8
	ctx.lr = 0x8313D200;
	sub_830D67B8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x8313d2b4
	if (ctx.cr0.eq) goto loc_8313D2B4;
	// lis r11,-32228
	ctx.r11.s64 = -2112094208;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,-6592
	ctx.r4.s64 = ctx.r11.s64 + -6592;
	// bl 0x830d67b8
	ctx.lr = 0x8313D218;
	sub_830D67B8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x8313d2bc
	if (ctx.cr0.eq) goto loc_8313D2BC;
	// lis r11,-32228
	ctx.r11.s64 = -2112094208;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,-6724
	ctx.r4.s64 = ctx.r11.s64 + -6724;
	// bl 0x830d67b8
	ctx.lr = 0x8313D230;
	sub_830D67B8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x8313d2ac
	if (ctx.cr0.eq) goto loc_8313D2AC;
	// lis r11,-32228
	ctx.r11.s64 = -2112094208;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,-6700
	ctx.r4.s64 = ctx.r11.s64 + -6700;
	// bl 0x830d67b8
	ctx.lr = 0x8313D248;
	sub_830D67B8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x8313d2ac
	if (ctx.cr0.eq) goto loc_8313D2AC;
	// lis r11,-32228
	ctx.r11.s64 = -2112094208;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,-6764
	ctx.r4.s64 = ctx.r11.s64 + -6764;
	// bl 0x830d67b8
	ctx.lr = 0x8313D260;
	sub_830D67B8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x8313d2a4
	if (ctx.cr0.eq) goto loc_8313D2A4;
	// lis r11,-32228
	ctx.r11.s64 = -2112094208;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,-6740
	ctx.r4.s64 = ctx.r11.s64 + -6740;
	// bl 0x830d67b8
	ctx.lr = 0x8313D278;
	sub_830D67B8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x8313d2a4
	if (ctx.cr0.eq) goto loc_8313D2A4;
	// lis r11,-32228
	ctx.r11.s64 = -2112094208;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,-6816
	ctx.r4.s64 = ctx.r11.s64 + -6816;
	// bl 0x830d67b8
	ctx.lr = 0x8313D290;
	sub_830D67B8(ctx, base);
	// subfic r11,r3,0
	ctx.xer.ca = ctx.r3.u32 <= 0;
	ctx.r11.s64 = 0 - ctx.r3.s64;
	// subfe r11,r11,r11
	temp.u8 = (~ctx.r11.u32 + ctx.r11.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r11.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// andi. r11,r11,997
	ctx.r11.u64 = ctx.r11.u64 & 997;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// addi r3,r11,2
	ctx.r3.s64 = ctx.r11.s64 + 2;
	// b 0x8313d2d8
	goto loc_8313D2D8;
loc_8313D2A4:
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x8313d2d8
	goto loc_8313D2D8;
loc_8313D2AC:
	// li r3,2
	ctx.r3.s64 = 2;
	// b 0x8313d2d8
	goto loc_8313D2D8;
loc_8313D2B4:
	// li r3,5
	ctx.r3.s64 = 5;
	// b 0x8313d2d8
	goto loc_8313D2D8;
loc_8313D2BC:
	// li r3,6
	ctx.r3.s64 = 6;
	// b 0x8313d2d8
	goto loc_8313D2D8;
loc_8313D2C4:
	// li r3,3
	ctx.r3.s64 = 3;
	// b 0x8313d2d8
	goto loc_8313D2D8;
loc_8313D2CC:
	// li r3,4
	ctx.r3.s64 = 4;
	// b 0x8313d2d8
	goto loc_8313D2D8;
loc_8313D2D4:
	// li r3,7
	ctx.r3.s64 = 7;
loc_8313D2D8:
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

__attribute__((alias("__imp__sub_8313D2EC"))) PPC_WEAK_FUNC(sub_8313D2EC);
PPC_FUNC_IMPL(__imp__sub_8313D2EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8313D2F0"))) PPC_WEAK_FUNC(sub_8313D2F0);
PPC_FUNC_IMPL(__imp__sub_8313D2F0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r7,r4
	ctx.r7.u64 = ctx.r4.u64;
	// cmpwi cr6,r3,8
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 8, ctx.xer);
	// blt cr6,0x8313d330
	if (ctx.cr6.lt) goto loc_8313D330;
	// lis r11,-32227
	ctx.r11.s64 = -2112028672;
	// li r6,119
	ctx.r6.s64 = 119;
	// addi r4,r11,1040
	ctx.r4.s64 = ctx.r11.s64 + 1040;
	// li r5,273
	ctx.r5.s64 = 273;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x830d5dc0
	ctx.lr = 0x8313D320;
	sub_830D5DC0(ctx, base);
	// lis r11,-32194
	ctx.r11.s64 = -2109865984;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,-28596
	ctx.r4.s64 = ctx.r11.s64 + -28596;
	// bl 0x833a7198
	ctx.lr = 0x8313D330;
	sub_833A7198(ctx, base);
loc_8313D330:
	// lis r11,-31846
	ctx.r11.s64 = -2087059456;
	// rlwinm r10,r3,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r11,r11,24544
	ctx.r11.s64 = ctx.r11.s64 + 24544;
	// lwzx r3,r10,r11
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8313D350"))) PPC_WEAK_FUNC(sub_8313D350);
PPC_FUNC_IMPL(__imp__sub_8313D350) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32227
	ctx.r11.s64 = -2112028672;
	// rlwinm r10,r3,1,23,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 1) & 0x1FE;
	// addi r11,r11,1136
	ctx.r11.s64 = ctx.r11.s64 + 1136;
	// lhzx r3,r10,r11
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r10.u32 + ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8313D364"))) PPC_WEAK_FUNC(sub_8313D364);
PPC_FUNC_IMPL(__imp__sub_8313D364) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8313D368"))) PPC_WEAK_FUNC(sub_8313D368);
PPC_FUNC_IMPL(__imp__sub_8313D368) {
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
	// lis r11,-32227
	ctx.r11.s64 = -2112028672;
	// mr r9,r6
	ctx.r9.u64 = ctx.r6.u64;
	// addi r6,r11,1136
	ctx.r6.s64 = ctx.r11.s64 + 1136;
	// li r8,352
	ctx.r8.s64 = 352;
	// addi r7,r6,512
	ctx.r7.s64 = ctx.r6.s64 + 512;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x831912b0
	ctx.lr = 0x8313D394;
	sub_831912B0(ctx, base);
	// lis r11,-32227
	ctx.r11.s64 = -2112028672;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r11,r11,3056
	ctx.r11.s64 = ctx.r11.s64 + 3056;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
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

__attribute__((alias("__imp__sub_8313D3B8"))) PPC_WEAK_FUNC(sub_8313D3B8);
PPC_FUNC_IMPL(__imp__sub_8313D3B8) {
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
	// lis r11,-32227
	ctx.r11.s64 = -2112028672;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r11,r11,3056
	ctx.r11.s64 = ctx.r11.s64 + 3056;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// bl 0x831911c0
	ctx.lr = 0x8313D3E4;
	sub_831911C0(ctx, base);
	// clrlwi. r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8313d3f4
	if (ctx.cr0.eq) goto loc_8313D3F4;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x830dd3e0
	ctx.lr = 0x8313D3F4;
	sub_830DD3E0(ctx, base);
loc_8313D3F4:
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

__attribute__((alias("__imp__sub_8313D410"))) PPC_WEAK_FUNC(sub_8313D410);
PPC_FUNC_IMPL(__imp__sub_8313D410) {
	PPC_FUNC_PROLOGUE();
	// cmplwi cr6,r3,8
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 8, ctx.xer);
	// bgt cr6,0x8313d4a0
	if (ctx.cr6.gt) goto loc_8313D4A0;
	// mtctr r3
	ctx.ctr.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bdzf 4*cr6+eq,0x8313d44c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_8313D44C;
	// bdzf 4*cr6+eq,0x8313d458
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_8313D458;
	// bdzf 4*cr6+eq,0x8313d464
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_8313D464;
	// bdzf 4*cr6+eq,0x8313d470
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_8313D470;
	// bdzf 4*cr6+eq,0x8313d47c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_8313D47C;
	// bdzf 4*cr6+eq,0x8313d488
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_8313D488;
	// bdzf 4*cr6+eq,0x8313d4a0
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_8313D4A0;
	// bne cr6,0x8313d494
	if (!ctx.cr6.eq) goto loc_8313D494;
	// lis r11,-32227
	ctx.r11.s64 = -2112028672;
	// addi r3,r11,3332
	ctx.r3.s64 = ctx.r11.s64 + 3332;
	// blr 
	return;
loc_8313D44C:
	// lis r11,-32227
	ctx.r11.s64 = -2112028672;
	// addi r3,r11,3288
	ctx.r3.s64 = ctx.r11.s64 + 3288;
	// blr 
	return;
loc_8313D458:
	// lis r11,-32227
	ctx.r11.s64 = -2112028672;
	// addi r3,r11,3256
	ctx.r3.s64 = ctx.r11.s64 + 3256;
	// blr 
	return;
loc_8313D464:
	// lis r11,-32227
	ctx.r11.s64 = -2112028672;
	// addi r3,r11,3232
	ctx.r3.s64 = ctx.r11.s64 + 3232;
	// blr 
	return;
loc_8313D470:
	// lis r11,-32227
	ctx.r11.s64 = -2112028672;
	// addi r3,r11,3204
	ctx.r3.s64 = ctx.r11.s64 + 3204;
	// blr 
	return;
loc_8313D47C:
	// lis r11,-32227
	ctx.r11.s64 = -2112028672;
	// addi r3,r11,3168
	ctx.r3.s64 = ctx.r11.s64 + 3168;
	// blr 
	return;
loc_8313D488:
	// lis r11,-32227
	ctx.r11.s64 = -2112028672;
	// addi r3,r11,3128
	ctx.r3.s64 = ctx.r11.s64 + 3128;
	// blr 
	return;
loc_8313D494:
	// lis r11,-32227
	ctx.r11.s64 = -2112028672;
	// addi r3,r11,3088
	ctx.r3.s64 = ctx.r11.s64 + 3088;
	// blr 
	return;
loc_8313D4A0:
	// lis r11,-32227
	ctx.r11.s64 = -2112028672;
	// addi r3,r11,3072
	ctx.r3.s64 = ctx.r11.s64 + 3072;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8313D4AC"))) PPC_WEAK_FUNC(sub_8313D4AC);
PPC_FUNC_IMPL(__imp__sub_8313D4AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8313D4B0"))) PPC_WEAK_FUNC(sub_8313D4B0);
PPC_FUNC_IMPL(__imp__sub_8313D4B0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32227
	ctx.r11.s64 = -2112028672;
	// addi r11,r11,3388
	ctx.r11.s64 = ctx.r11.s64 + 3388;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8313D4C0"))) PPC_WEAK_FUNC(sub_8313D4C0);
PPC_FUNC_IMPL(__imp__sub_8313D4C0) {
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
	// lis r11,-32227
	ctx.r11.s64 = -2112028672;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r11,r11,3388
	ctx.r11.s64 = ctx.r11.s64 + 3388;
	// clrlwi. r10,r4,31
	ctx.r10.u64 = ctx.r4.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// beq 0x8313d4ec
	if (ctx.cr0.eq) goto loc_8313D4EC;
	// bl 0x830dd3e0
	ctx.lr = 0x8313D4EC;
	sub_830DD3E0(ctx, base);
loc_8313D4EC:
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

__attribute__((alias("__imp__sub_8313D504"))) PPC_WEAK_FUNC(sub_8313D504);
PPC_FUNC_IMPL(__imp__sub_8313D504) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8313D508"))) PPC_WEAK_FUNC(sub_8313D508);
PPC_FUNC_IMPL(__imp__sub_8313D508) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x833a01ac
	ctx.lr = 0x8313D510;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r3,104(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 104);
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r4,44(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 44);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8313D534;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r3,104(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 104);
	// lwz r4,48(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8313D54C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r3,104(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 104);
	// lwz r4,52(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8313D564;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x8313d638
	if (ctx.cr6.eq) goto loc_8313D638;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r4,104(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 104);
	// bl 0x830d58e8
	ctx.lr = 0x8313D578;
	sub_830D58E8(ctx, base);
	// stw r3,44(r31)
	PPC_STORE_U32(ctx.r31.u32 + 44, ctx.r3.u32);
	// li r4,44
	ctx.r4.s64 = 44;
	// bl 0x830d6af0
	ctx.lr = 0x8313D584;
	sub_830D6AF0(ctx, base);
	// lwz r11,44(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 44);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8313d5c4
	if (ctx.cr6.eq) goto loc_8313D5C4;
	// lhz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r11.u32 + 0);
	// cmplwi r10,0
	ctx.cr0.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq 0x8313d5c4
	if (ctx.cr0.eq) goto loc_8313D5C4;
	// lhz r9,2(r11)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r11.u32 + 2);
	// addi r10,r11,2
	ctx.r10.s64 = ctx.r11.s64 + 2;
	// b 0x8313d5b0
	goto loc_8313D5B0;
loc_8313D5AC:
	// lhzu r9,2(r10)
	ea = 2 + ctx.r10.u32;
	ctx.r9.u64 = PPC_LOAD_U16(ea);
	ctx.r10.u32 = ea;
loc_8313D5B0:
	// cmplwi r9,0
	ctx.cr0.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne 0x8313d5ac
	if (!ctx.cr0.eq) goto loc_8313D5AC;
	// subf r11,r11,r10
	ctx.r11.s64 = ctx.r10.s64 - ctx.r11.s64;
	// srawi r30,r11,1
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1) != 0);
	ctx.r30.s64 = ctx.r11.s32 >> 1;
	// b 0x8313d5c8
	goto loc_8313D5C8;
loc_8313D5C4:
	// li r30,0
	ctx.r30.s64 = 0;
loc_8313D5C8:
	// subf r11,r29,r30
	ctx.r11.s64 = ctx.r30.s64 - ctx.r29.s64;
	// lwz r3,104(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 104);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// rlwinm r4,r11,1,0,30
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8313D5E8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r3,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r3.u32);
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// addi r5,r29,1
	ctx.r5.s64 = ctx.r29.s64 + 1;
	// lwz r7,104(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 104);
	// lwz r4,44(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 44);
	// bl 0x830d7cd0
	ctx.lr = 0x8313D600;
	sub_830D7CD0(ctx, base);
	// lwz r3,104(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 104);
	// addi r11,r29,1
	ctx.r11.s64 = ctx.r29.s64 + 1;
	// rlwinm r4,r11,1,0,30
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8313D61C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r3,52(r31)
	PPC_STORE_U32(ctx.r31.u32 + 52, ctx.r3.u32);
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r7,104(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 104);
	// lwz r4,44(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 44);
	// bl 0x830d7cd0
	ctx.lr = 0x8313D634;
	sub_830D7CD0(ctx, base);
	// b 0x8313d648
	goto loc_8313D648;
loc_8313D638:
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,52(r31)
	PPC_STORE_U32(ctx.r31.u32 + 52, ctx.r11.u32);
	// stw r11,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r11.u32);
	// stw r11,44(r31)
	PPC_STORE_U32(ctx.r31.u32 + 44, ctx.r11.u32);
loc_8313D648:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x833a01fc
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8313D650"))) PPC_WEAK_FUNC(sub_8313D650);
PPC_FUNC_IMPL(__imp__sub_8313D650) {
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
	// lwz r3,72(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 72);
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8313d68c
	if (ctx.cr6.eq) goto loc_8313D68C;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8313D68C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8313D68C:
	// stw r30,72(r31)
	PPC_STORE_U32(ctx.r31.u32 + 72, ctx.r30.u32);
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

__attribute__((alias("__imp__sub_8313D6A8"))) PPC_WEAK_FUNC(sub_8313D6A8);
PPC_FUNC_IMPL(__imp__sub_8313D6A8) {
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
	// lwz r3,88(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 88);
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8313d6e4
	if (ctx.cr6.eq) goto loc_8313D6E4;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8313D6E4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8313D6E4:
	// lwz r4,92(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 92);
	// stw r30,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r30.u32);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x8313d710
	if (ctx.cr6.eq) goto loc_8313D710;
	// lwz r3,104(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 104);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8313D708;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,92(r31)
	PPC_STORE_U32(ctx.r31.u32 + 92, ctx.r11.u32);
loc_8313D710:
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

__attribute__((alias("__imp__sub_8313D728"))) PPC_WEAK_FUNC(sub_8313D728);
PPC_FUNC_IMPL(__imp__sub_8313D728) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lwz r25,17952(r26)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r26.u32 + 17952);
	// lwz r16,3448(r29)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r29.u32 + 3448);
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x833a01a8
	ctx.lr = 0x8313D738;
	__savegprlr_28(ctx, base);
	// addi r31,r1,-128
	ctx.r31.s64 = ctx.r1.s64 + -128;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// stw r3,148(r31)
	PPC_STORE_U32(ctx.r31.u32 + 148, ctx.r3.u32);
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// lis r10,-32227
	ctx.r10.s64 = -2112028672;
	// li r29,0
	ctx.r29.s64 = 0;
	// stw r6,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r6.u32);
	// li r11,1
	ctx.r11.s64 = 1;
	// addi r10,r10,3412
	ctx.r10.s64 = ctx.r10.s64 + 3412;
	// stw r29,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r29.u32);
	// clrlwi. r9,r5,24
	ctx.r9.u64 = ctx.r5.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// stw r29,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r29.u32);
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// stw r29,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r29.u32);
	// stw r29,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r29.u32);
	// stw r29,24(r3)
	PPC_STORE_U32(ctx.r3.u32 + 24, ctx.r29.u32);
	// stb r11,28(r3)
	PPC_STORE_U8(ctx.r3.u32 + 28, ctx.r11.u8);
	// stb r11,29(r3)
	PPC_STORE_U8(ctx.r3.u32 + 29, ctx.r11.u8);
	// stw r11,32(r3)
	PPC_STORE_U32(ctx.r3.u32 + 32, ctx.r11.u32);
	// stw r11,36(r3)
	PPC_STORE_U32(ctx.r3.u32 + 36, ctx.r11.u32);
	// beq 0x8313d7c8
	if (ctx.cr0.eq) goto loc_8313D7C8;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x8313d7cc
	if (ctx.cr6.eq) goto loc_8313D7CC;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// li r3,36
	ctx.r3.s64 = 36;
	// bl 0x830dd390
	ctx.lr = 0x8313D7A4;
	sub_830DD390(ctx, base);
	// stw r3,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r3.u32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8313d7bc
	if (ctx.cr0.eq) goto loc_8313D7BC;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// bl 0x830e33e0
	ctx.lr = 0x8313D7B8;
	sub_830E33E0(ctx, base);
	// b 0x8313d7c0
	goto loc_8313D7C0;
loc_8313D7BC:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
loc_8313D7C0:
	// stw r3,8(r30)
	PPC_STORE_U32(ctx.r30.u32 + 8, ctx.r3.u32);
	// b 0x8313d7cc
	goto loc_8313D7CC;
loc_8313D7C8:
	// stw r28,8(r30)
	PPC_STORE_U32(ctx.r30.u32 + 8, ctx.r28.u32);
loc_8313D7CC:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r31,128
	ctx.r1.s64 = ctx.r31.s64 + 128;
	// b 0x833a01f8
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8313D730"))) PPC_WEAK_FUNC(sub_8313D730);
PPC_FUNC_IMPL(__imp__sub_8313D730) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x833a01a8
	ctx.lr = 0x8313D738;
	__savegprlr_28(ctx, base);
	// addi r31,r1,-128
	ctx.r31.s64 = ctx.r1.s64 + -128;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// stw r3,148(r31)
	PPC_STORE_U32(ctx.r31.u32 + 148, ctx.r3.u32);
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// lis r10,-32227
	ctx.r10.s64 = -2112028672;
	// li r29,0
	ctx.r29.s64 = 0;
	// stw r6,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r6.u32);
	// li r11,1
	ctx.r11.s64 = 1;
	// addi r10,r10,3412
	ctx.r10.s64 = ctx.r10.s64 + 3412;
	// stw r29,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r29.u32);
	// clrlwi. r9,r5,24
	ctx.r9.u64 = ctx.r5.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// stw r29,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r29.u32);
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// stw r29,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r29.u32);
	// stw r29,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r29.u32);
	// stw r29,24(r3)
	PPC_STORE_U32(ctx.r3.u32 + 24, ctx.r29.u32);
	// stb r11,28(r3)
	PPC_STORE_U8(ctx.r3.u32 + 28, ctx.r11.u8);
	// stb r11,29(r3)
	PPC_STORE_U8(ctx.r3.u32 + 29, ctx.r11.u8);
	// stw r11,32(r3)
	PPC_STORE_U32(ctx.r3.u32 + 32, ctx.r11.u32);
	// stw r11,36(r3)
	PPC_STORE_U32(ctx.r3.u32 + 36, ctx.r11.u32);
	// beq 0x8313d7c8
	if (ctx.cr0.eq) goto loc_8313D7C8;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x8313d7cc
	if (ctx.cr6.eq) goto loc_8313D7CC;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// li r3,36
	ctx.r3.s64 = 36;
	// bl 0x830dd390
	ctx.lr = 0x8313D7A4;
	sub_830DD390(ctx, base);
	// stw r3,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r3.u32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8313d7bc
	if (ctx.cr0.eq) goto loc_8313D7BC;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// bl 0x830e33e0
	ctx.lr = 0x8313D7B8;
	sub_830E33E0(ctx, base);
	// b 0x8313d7c0
	goto loc_8313D7C0;
loc_8313D7BC:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
loc_8313D7C0:
	// stw r3,8(r30)
	PPC_STORE_U32(ctx.r30.u32 + 8, ctx.r3.u32);
	// b 0x8313d7cc
	goto loc_8313D7CC;
loc_8313D7C8:
	// stw r28,8(r30)
	PPC_STORE_U32(ctx.r30.u32 + 8, ctx.r28.u32);
loc_8313D7CC:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r31,128
	ctx.r1.s64 = ctx.r31.s64 + 128;
	// b 0x833a01f8
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8313D7D8"))) PPC_WEAK_FUNC(sub_8313D7D8);
PPC_FUNC_IMPL(__imp__sub_8313D7D8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// addi r31,r12,-128
	ctx.r31.s64 = ctx.r12.s64 + -128;
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r3,148(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 148);
	// bl 0x8313e940
	ctx.lr = 0x8313D7F0;
	sub_8313E940(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8313D800"))) PPC_WEAK_FUNC(sub_8313D800);
PPC_FUNC_IMPL(__imp__sub_8313D800) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// addi r31,r12,-128
	ctx.r31.s64 = ctx.r12.s64 + -128;
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,148(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 148);
	// lwz r4,4(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r3,80(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	// bl 0x830dd3e0
	ctx.lr = 0x8313D820;
	sub_830DD3E0(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8313D830"))) PPC_WEAK_FUNC(sub_8313D830);
PPC_FUNC_IMPL(__imp__sub_8313D830) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lwz r25,17952(r26)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r26.u32 + 17952);
	// lwz r16,3520(r29)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r29.u32 + 3520);
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// addi r31,r1,-112
	ctx.r31.s64 = ctx.r1.s64 + -112;
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32227
	ctx.r11.s64 = -2112028672;
	// stw r3,132(r31)
	PPC_STORE_U32(ctx.r31.u32 + 132, ctx.r3.u32);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r11,r11,3412
	ctx.r11.s64 = ctx.r11.s64 + 3412;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// lbz r11,28(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 28);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x8313d890
	if (ctx.cr0.eq) goto loc_8313D890;
	// lwz r3,16(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8313d890
	if (ctx.cr6.eq) goto loc_8313D890;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8313D890;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8313D890:
	// lbz r11,29(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 29);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x8313d8bc
	if (ctx.cr0.eq) goto loc_8313D8BC;
	// lwz r3,20(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 20);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8313d8bc
	if (ctx.cr6.eq) goto loc_8313D8BC;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8313D8BC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8313D8BC:
	// lwz r3,8(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8313d8dc
	if (ctx.cr6.eq) goto loc_8313D8DC;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8313D8DC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8313D8DC:
	// lis r11,-32228
	ctx.r11.s64 = -2112094208;
	// addi r11,r11,19412
	ctx.r11.s64 = ctx.r11.s64 + 19412;
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
	// addi r1,r31,112
	ctx.r1.s64 = ctx.r31.s64 + 112;
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

__attribute__((alias("__imp__sub_8313D838"))) PPC_WEAK_FUNC(sub_8313D838);
PPC_FUNC_IMPL(__imp__sub_8313D838) {
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
	// addi r31,r1,-112
	ctx.r31.s64 = ctx.r1.s64 + -112;
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32227
	ctx.r11.s64 = -2112028672;
	// stw r3,132(r31)
	PPC_STORE_U32(ctx.r31.u32 + 132, ctx.r3.u32);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r11,r11,3412
	ctx.r11.s64 = ctx.r11.s64 + 3412;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// lbz r11,28(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 28);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x8313d890
	if (ctx.cr0.eq) goto loc_8313D890;
	// lwz r3,16(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8313d890
	if (ctx.cr6.eq) goto loc_8313D890;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8313D890;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8313D890:
	// lbz r11,29(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 29);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x8313d8bc
	if (ctx.cr0.eq) goto loc_8313D8BC;
	// lwz r3,20(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 20);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8313d8bc
	if (ctx.cr6.eq) goto loc_8313D8BC;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8313D8BC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8313D8BC:
	// lwz r3,8(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8313d8dc
	if (ctx.cr6.eq) goto loc_8313D8DC;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8313D8DC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8313D8DC:
	// lis r11,-32228
	ctx.r11.s64 = -2112094208;
	// addi r11,r11,19412
	ctx.r11.s64 = ctx.r11.s64 + 19412;
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
	// addi r1,r31,112
	ctx.r1.s64 = ctx.r31.s64 + 112;
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

__attribute__((alias("__imp__sub_8313D900"))) PPC_WEAK_FUNC(sub_8313D900);
PPC_FUNC_IMPL(__imp__sub_8313D900) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// addi r31,r12,-112
	ctx.r31.s64 = ctx.r12.s64 + -112;
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r3,132(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 132);
	// bl 0x8313e940
	ctx.lr = 0x8313D918;
	sub_8313E940(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8313D928"))) PPC_WEAK_FUNC(sub_8313D928);
PPC_FUNC_IMPL(__imp__sub_8313D928) {
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
	// lbz r11,28(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 28);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x8313d970
	if (ctx.cr0.eq) goto loc_8313D970;
	// lwz r3,16(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8313d970
	if (ctx.cr6.eq) goto loc_8313D970;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8313D970;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8313D970:
	// stw r30,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r30.u32);
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

__attribute__((alias("__imp__sub_8313D98C"))) PPC_WEAK_FUNC(sub_8313D98C);
PPC_FUNC_IMPL(__imp__sub_8313D98C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8313D990"))) PPC_WEAK_FUNC(sub_8313D990);
PPC_FUNC_IMPL(__imp__sub_8313D990) {
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
	// lbz r11,29(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 29);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x8313d9d8
	if (ctx.cr0.eq) goto loc_8313D9D8;
	// lwz r3,20(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8313d9d8
	if (ctx.cr6.eq) goto loc_8313D9D8;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8313D9D8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8313D9D8:
	// stw r30,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r30.u32);
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

__attribute__((alias("__imp__sub_8313D9F4"))) PPC_WEAK_FUNC(sub_8313D9F4);
PPC_FUNC_IMPL(__imp__sub_8313D9F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8313D9F8"))) PPC_WEAK_FUNC(sub_8313D9F8);
PPC_FUNC_IMPL(__imp__sub_8313D9F8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lwz r25,17952(r26)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r26.u32 + 17952);
	// lwz r16,3632(r29)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r29.u32 + 3632);
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x833a0198
	ctx.lr = 0x8313DA08;
	__savegprlr_24(ctx, base);
	// addi r31,r1,-160
	ctx.r31.s64 = ctx.r1.s64 + -160;
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// stw r3,180(r31)
	PPC_STORE_U32(ctx.r31.u32 + 180, ctx.r3.u32);
	// mr r29,r8
	ctx.r29.u64 = ctx.r8.u64;
	// stw r8,220(r31)
	PPC_STORE_U32(ctx.r31.u32 + 220, ctx.r8.u32);
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// mr r24,r6
	ctx.r24.u64 = ctx.r6.u64;
	// lis r11,-32227
	ctx.r11.s64 = -2112028672;
	// li r25,0
	ctx.r25.s64 = 0;
	// stw r7,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r7.u32);
	// addi r10,r11,3568
	ctx.r10.s64 = ctx.r11.s64 + 3568;
	// stb r4,16(r3)
	PPC_STORE_U8(ctx.r3.u32 + 16, ctx.r4.u8);
	// lis r11,-32228
	ctx.r11.s64 = -2112094208;
	// stw r8,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r8.u32);
	// stw r25,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r25.u32);
	// lis r26,-32222
	ctx.r26.s64 = -2111700992;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// stw r25,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r25.u32);
	// addi r27,r11,-5740
	ctx.r27.s64 = ctx.r11.s64 + -5740;
	// beq cr6,0x8313da90
	if (ctx.cr6.eq) goto loc_8313DA90;
	// mr r4,r8
	ctx.r4.u64 = ctx.r8.u64;
	// li r3,36
	ctx.r3.s64 = 36;
	// bl 0x830dd390
	ctx.lr = 0x8313DA6C;
	sub_830DD390(ctx, base);
	// stw r3,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r3.u32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8313da84
	if (ctx.cr0.eq) goto loc_8313DA84;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// bl 0x830e33e0
	ctx.lr = 0x8313DA80;
	sub_830E33E0(ctx, base);
	// b 0x8313da88
	goto loc_8313DA88;
loc_8313DA84:
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
loc_8313DA88:
	// stw r3,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r3.u32);
	// b 0x8313dac8
	goto loc_8313DAC8;
loc_8313DA90:
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// li r3,36
	ctx.r3.s64 = 36;
	// bl 0x830dd390
	ctx.lr = 0x8313DA9C;
	sub_830DD390(ctx, base);
	// stw r3,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r3.u32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8313dac0
	if (ctx.cr0.eq) goto loc_8313DAC0;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// lwz r6,32564(r26)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r26.u32 + 32564);
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r7,r29
	ctx.r7.u64 = ctx.r29.u64;
	// bl 0x830e3e60
	ctx.lr = 0x8313DABC;
	sub_830E3E60(ctx, base);
	// b 0x8313dac4
	goto loc_8313DAC4;
loc_8313DAC0:
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
loc_8313DAC4:
	// stw r3,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r3.u32);
loc_8313DAC8:
	// cmplwi cr6,r24,0
	ctx.cr6.compare<uint32_t>(ctx.r24.u32, 0, ctx.xer);
	// beq cr6,0x8313db00
	if (ctx.cr6.eq) goto loc_8313DB00;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// li r3,36
	ctx.r3.s64 = 36;
	// bl 0x830dd390
	ctx.lr = 0x8313DADC;
	sub_830DD390(ctx, base);
	// stw r3,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r3.u32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8313daf4
	if (ctx.cr0.eq) goto loc_8313DAF4;
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// bl 0x830e33e0
	ctx.lr = 0x8313DAF0;
	sub_830E33E0(ctx, base);
	// b 0x8313daf8
	goto loc_8313DAF8;
loc_8313DAF4:
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
loc_8313DAF8:
	// stw r3,8(r30)
	PPC_STORE_U32(ctx.r30.u32 + 8, ctx.r3.u32);
	// b 0x8313db38
	goto loc_8313DB38;
loc_8313DB00:
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// li r3,36
	ctx.r3.s64 = 36;
	// bl 0x830dd390
	ctx.lr = 0x8313DB0C;
	sub_830DD390(ctx, base);
	// stw r3,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r3.u32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8313db30
	if (ctx.cr0.eq) goto loc_8313DB30;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// lwz r6,32564(r26)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r26.u32 + 32564);
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r7,r29
	ctx.r7.u64 = ctx.r29.u64;
	// bl 0x830e3e60
	ctx.lr = 0x8313DB2C;
	sub_830E3E60(ctx, base);
	// b 0x8313db34
	goto loc_8313DB34;
loc_8313DB30:
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
loc_8313DB34:
	// stw r3,8(r30)
	PPC_STORE_U32(ctx.r30.u32 + 8, ctx.r3.u32);
loc_8313DB38:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r31,160
	ctx.r1.s64 = ctx.r31.s64 + 160;
	// b 0x833a01e8
	__restgprlr_24(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8313DA00"))) PPC_WEAK_FUNC(sub_8313DA00);
PPC_FUNC_IMPL(__imp__sub_8313DA00) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x833a0198
	ctx.lr = 0x8313DA08;
	__savegprlr_24(ctx, base);
	// addi r31,r1,-160
	ctx.r31.s64 = ctx.r1.s64 + -160;
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// stw r3,180(r31)
	PPC_STORE_U32(ctx.r31.u32 + 180, ctx.r3.u32);
	// mr r29,r8
	ctx.r29.u64 = ctx.r8.u64;
	// stw r8,220(r31)
	PPC_STORE_U32(ctx.r31.u32 + 220, ctx.r8.u32);
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// mr r24,r6
	ctx.r24.u64 = ctx.r6.u64;
	// lis r11,-32227
	ctx.r11.s64 = -2112028672;
	// li r25,0
	ctx.r25.s64 = 0;
	// stw r7,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r7.u32);
	// addi r10,r11,3568
	ctx.r10.s64 = ctx.r11.s64 + 3568;
	// stb r4,16(r3)
	PPC_STORE_U8(ctx.r3.u32 + 16, ctx.r4.u8);
	// lis r11,-32228
	ctx.r11.s64 = -2112094208;
	// stw r8,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r8.u32);
	// stw r25,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r25.u32);
	// lis r26,-32222
	ctx.r26.s64 = -2111700992;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// stw r25,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r25.u32);
	// addi r27,r11,-5740
	ctx.r27.s64 = ctx.r11.s64 + -5740;
	// beq cr6,0x8313da90
	if (ctx.cr6.eq) goto loc_8313DA90;
	// mr r4,r8
	ctx.r4.u64 = ctx.r8.u64;
	// li r3,36
	ctx.r3.s64 = 36;
	// bl 0x830dd390
	ctx.lr = 0x8313DA6C;
	sub_830DD390(ctx, base);
	// stw r3,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r3.u32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8313da84
	if (ctx.cr0.eq) goto loc_8313DA84;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// bl 0x830e33e0
	ctx.lr = 0x8313DA80;
	sub_830E33E0(ctx, base);
	// b 0x8313da88
	goto loc_8313DA88;
loc_8313DA84:
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
loc_8313DA88:
	// stw r3,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r3.u32);
	// b 0x8313dac8
	goto loc_8313DAC8;
loc_8313DA90:
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// li r3,36
	ctx.r3.s64 = 36;
	// bl 0x830dd390
	ctx.lr = 0x8313DA9C;
	sub_830DD390(ctx, base);
	// stw r3,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r3.u32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8313dac0
	if (ctx.cr0.eq) goto loc_8313DAC0;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// lwz r6,32564(r26)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r26.u32 + 32564);
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r7,r29
	ctx.r7.u64 = ctx.r29.u64;
	// bl 0x830e3e60
	ctx.lr = 0x8313DABC;
	sub_830E3E60(ctx, base);
	// b 0x8313dac4
	goto loc_8313DAC4;
loc_8313DAC0:
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
loc_8313DAC4:
	// stw r3,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r3.u32);
loc_8313DAC8:
	// cmplwi cr6,r24,0
	ctx.cr6.compare<uint32_t>(ctx.r24.u32, 0, ctx.xer);
	// beq cr6,0x8313db00
	if (ctx.cr6.eq) goto loc_8313DB00;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// li r3,36
	ctx.r3.s64 = 36;
	// bl 0x830dd390
	ctx.lr = 0x8313DADC;
	sub_830DD390(ctx, base);
	// stw r3,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r3.u32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8313daf4
	if (ctx.cr0.eq) goto loc_8313DAF4;
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// bl 0x830e33e0
	ctx.lr = 0x8313DAF0;
	sub_830E33E0(ctx, base);
	// b 0x8313daf8
	goto loc_8313DAF8;
loc_8313DAF4:
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
loc_8313DAF8:
	// stw r3,8(r30)
	PPC_STORE_U32(ctx.r30.u32 + 8, ctx.r3.u32);
	// b 0x8313db38
	goto loc_8313DB38;
loc_8313DB00:
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// li r3,36
	ctx.r3.s64 = 36;
	// bl 0x830dd390
	ctx.lr = 0x8313DB0C;
	sub_830DD390(ctx, base);
	// stw r3,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r3.u32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8313db30
	if (ctx.cr0.eq) goto loc_8313DB30;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// lwz r6,32564(r26)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r26.u32 + 32564);
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r7,r29
	ctx.r7.u64 = ctx.r29.u64;
	// bl 0x830e3e60
	ctx.lr = 0x8313DB2C;
	sub_830E3E60(ctx, base);
	// b 0x8313db34
	goto loc_8313DB34;
loc_8313DB30:
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
loc_8313DB34:
	// stw r3,8(r30)
	PPC_STORE_U32(ctx.r30.u32 + 8, ctx.r3.u32);
loc_8313DB38:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r31,160
	ctx.r1.s64 = ctx.r31.s64 + 160;
	// b 0x833a01e8
	__restgprlr_24(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8313DB44"))) PPC_WEAK_FUNC(sub_8313DB44);
PPC_FUNC_IMPL(__imp__sub_8313DB44) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// addi r31,r12,-160
	ctx.r31.s64 = ctx.r12.s64 + -160;
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r3,180(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 180);
	// bl 0x8313d4b0
	ctx.lr = 0x8313DB5C;
	sub_8313D4B0(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8313DB6C"))) PPC_WEAK_FUNC(sub_8313DB6C);
PPC_FUNC_IMPL(__imp__sub_8313DB6C) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// addi r31,r12,-160
	ctx.r31.s64 = ctx.r12.s64 + -160;
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r4,220(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 220);
	// lwz r3,80(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	// bl 0x830dd3e0
	ctx.lr = 0x8313DB88;
	sub_830DD3E0(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8313DB98"))) PPC_WEAK_FUNC(sub_8313DB98);
PPC_FUNC_IMPL(__imp__sub_8313DB98) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// addi r31,r12,-160
	ctx.r31.s64 = ctx.r12.s64 + -160;
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r4,220(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 220);
	// lwz r3,80(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	// bl 0x830dd3e0
	ctx.lr = 0x8313DBB4;
	sub_830DD3E0(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8313DBC4"))) PPC_WEAK_FUNC(sub_8313DBC4);
PPC_FUNC_IMPL(__imp__sub_8313DBC4) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// addi r31,r12,-160
	ctx.r31.s64 = ctx.r12.s64 + -160;
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r4,220(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 220);
	// lwz r3,80(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	// bl 0x830dd3e0
	ctx.lr = 0x8313DBE0;
	sub_830DD3E0(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8313DBF0"))) PPC_WEAK_FUNC(sub_8313DBF0);
PPC_FUNC_IMPL(__imp__sub_8313DBF0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// addi r31,r12,-160
	ctx.r31.s64 = ctx.r12.s64 + -160;
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r4,220(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 220);
	// lwz r3,80(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	// bl 0x830dd3e0
	ctx.lr = 0x8313DC0C;
	sub_830DD3E0(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8313DC1C"))) PPC_WEAK_FUNC(sub_8313DC1C);
PPC_FUNC_IMPL(__imp__sub_8313DC1C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8313DC20"))) PPC_WEAK_FUNC(sub_8313DC20);
PPC_FUNC_IMPL(__imp__sub_8313DC20) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lwz r25,17952(r26)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r26.u32 + 17952);
	// lwz r16,3752(r29)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r29.u32 + 3752);
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// addi r31,r1,-112
	ctx.r31.s64 = ctx.r1.s64 + -112;
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32227
	ctx.r11.s64 = -2112028672;
	// stw r3,132(r31)
	PPC_STORE_U32(ctx.r31.u32 + 132, ctx.r3.u32);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r11,r11,3568
	ctx.r11.s64 = ctx.r11.s64 + 3568;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// lwz r3,4(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8313dc74
	if (ctx.cr6.eq) goto loc_8313DC74;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8313DC74;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8313DC74:
	// lwz r3,8(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8313dc94
	if (ctx.cr6.eq) goto loc_8313DC94;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8313DC94;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8313DC94:
	// lis r11,-32227
	ctx.r11.s64 = -2112028672;
	// addi r11,r11,3388
	ctx.r11.s64 = ctx.r11.s64 + 3388;
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
	// addi r1,r31,112
	ctx.r1.s64 = ctx.r31.s64 + 112;
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

__attribute__((alias("__imp__sub_8313DC28"))) PPC_WEAK_FUNC(sub_8313DC28);
PPC_FUNC_IMPL(__imp__sub_8313DC28) {
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
	// addi r31,r1,-112
	ctx.r31.s64 = ctx.r1.s64 + -112;
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32227
	ctx.r11.s64 = -2112028672;
	// stw r3,132(r31)
	PPC_STORE_U32(ctx.r31.u32 + 132, ctx.r3.u32);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r11,r11,3568
	ctx.r11.s64 = ctx.r11.s64 + 3568;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// lwz r3,4(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8313dc74
	if (ctx.cr6.eq) goto loc_8313DC74;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8313DC74;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8313DC74:
	// lwz r3,8(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8313dc94
	if (ctx.cr6.eq) goto loc_8313DC94;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8313DC94;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8313DC94:
	// lis r11,-32227
	ctx.r11.s64 = -2112028672;
	// addi r11,r11,3388
	ctx.r11.s64 = ctx.r11.s64 + 3388;
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
	// addi r1,r31,112
	ctx.r1.s64 = ctx.r31.s64 + 112;
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

__attribute__((alias("__imp__sub_8313DCB8"))) PPC_WEAK_FUNC(sub_8313DCB8);
PPC_FUNC_IMPL(__imp__sub_8313DCB8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// addi r31,r12,-112
	ctx.r31.s64 = ctx.r12.s64 + -112;
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r3,132(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 132);
	// bl 0x8313d4b0
	ctx.lr = 0x8313DCD0;
	sub_8313D4B0(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8313DCE0"))) PPC_WEAK_FUNC(sub_8313DCE0);
PPC_FUNC_IMPL(__imp__sub_8313DCE0) {
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
	// lwz r3,68(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 68);
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8313dd28
	if (ctx.cr6.eq) goto loc_8313DD28;
	// lbz r11,6(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 6);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x8313dd28
	if (ctx.cr0.eq) goto loc_8313DD28;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8313DD28;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8313DD28:
	// stw r30,68(r31)
	PPC_STORE_U32(ctx.r31.u32 + 68, ctx.r30.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8313d6a8
	ctx.lr = 0x8313DD38;
	sub_8313D6A8(ctx, base);
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

__attribute__((alias("__imp__sub_8313DD50"))) PPC_WEAK_FUNC(sub_8313DD50);
PPC_FUNC_IMPL(__imp__sub_8313DD50) {
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
	// lwz r3,100(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 100);
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8313dd8c
	if (ctx.cr6.eq) goto loc_8313DD8C;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8313DD8C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8313DD8C:
	// stw r30,100(r31)
	PPC_STORE_U32(ctx.r31.u32 + 100, ctx.r30.u32);
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

__attribute__((alias("__imp__sub_8313DDA8"))) PPC_WEAK_FUNC(sub_8313DDA8);
PPC_FUNC_IMPL(__imp__sub_8313DDA8) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,76(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 76);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8313DDB0"))) PPC_WEAK_FUNC(sub_8313DDB0);
PPC_FUNC_IMPL(__imp__sub_8313DDB0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lwz r25,17952(r26)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r26.u32 + 17952);
	// lwz r16,3808(r29)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r29.u32 + 3808);
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x833a01a8
	ctx.lr = 0x8313DDC0;
	__savegprlr_28(ctx, base);
	// addi r31,r1,-160
	ctx.r31.s64 = ctx.r1.s64 + -160;
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,28(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 28);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r29,0
	ctx.r29.s64 = 0;
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x8313dde8
	if (!ctx.cr6.eq) goto loc_8313DDE8;
	// lis r11,-32228
	ctx.r11.s64 = -2112094208;
	// addi r3,r11,-7896
	ctx.r3.s64 = ctx.r11.s64 + -7896;
	// b 0x8313ddf8
	goto loc_8313DDF8;
loc_8313DDE8:
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8313de08
	if (!ctx.cr6.eq) goto loc_8313DE08;
	// lis r11,-32228
	ctx.r11.s64 = -2112094208;
	// addi r3,r11,-7776
	ctx.r3.s64 = ctx.r11.s64 + -7776;
loc_8313DDF8:
	// lwz r4,104(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 104);
	// bl 0x830d58e8
	ctx.lr = 0x8313DE00;
	sub_830D58E8(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// b 0x8313de68
	goto loc_8313DE68;
loc_8313DE08:
	// lwz r28,68(r30)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r30.u32 + 68);
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// beq cr6,0x8313de68
	if (ctx.cr6.eq) goto loc_8313DE68;
	// li r4,1023
	ctx.r4.s64 = 1023;
	// lwz r5,104(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + 104);
	// addi r3,r31,80
	ctx.r3.s64 = ctx.r31.s64 + 80;
	// bl 0x830e40b8
	ctx.lr = 0x8313DE24;
	sub_830E40B8(ctx, base);
	// addi r4,r31,80
	ctx.r4.s64 = ctx.r31.s64 + 80;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x831927e8
	ctx.lr = 0x8313DE30;
	sub_831927E8(ctx, base);
	// lwz r11,80(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	// lwz r10,104(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 104);
	// rlwinm r11,r11,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// sthx r29,r11,r10
	PPC_STORE_U16(ctx.r11.u32 + ctx.r10.u32, ctx.r29.u16);
	// lwz r4,104(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 104);
	// lwz r3,104(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 104);
	// bl 0x830d58e8
	ctx.lr = 0x8313DE4C;
	sub_830D58E8(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// lwz r3,96(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 96);
	// lwz r4,104(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 104);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8313DE68;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8313DE68:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r1,r31,160
	ctx.r1.s64 = ctx.r31.s64 + 160;
	// b 0x833a01f8
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8313DDB8"))) PPC_WEAK_FUNC(sub_8313DDB8);
PPC_FUNC_IMPL(__imp__sub_8313DDB8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x833a01a8
	ctx.lr = 0x8313DDC0;
	__savegprlr_28(ctx, base);
	// addi r31,r1,-160
	ctx.r31.s64 = ctx.r1.s64 + -160;
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,28(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 28);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r29,0
	ctx.r29.s64 = 0;
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x8313dde8
	if (!ctx.cr6.eq) goto loc_8313DDE8;
	// lis r11,-32228
	ctx.r11.s64 = -2112094208;
	// addi r3,r11,-7896
	ctx.r3.s64 = ctx.r11.s64 + -7896;
	// b 0x8313ddf8
	goto loc_8313DDF8;
loc_8313DDE8:
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8313de08
	if (!ctx.cr6.eq) goto loc_8313DE08;
	// lis r11,-32228
	ctx.r11.s64 = -2112094208;
	// addi r3,r11,-7776
	ctx.r3.s64 = ctx.r11.s64 + -7776;
loc_8313DDF8:
	// lwz r4,104(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 104);
	// bl 0x830d58e8
	ctx.lr = 0x8313DE00;
	sub_830D58E8(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// b 0x8313de68
	goto loc_8313DE68;
loc_8313DE08:
	// lwz r28,68(r30)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r30.u32 + 68);
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// beq cr6,0x8313de68
	if (ctx.cr6.eq) goto loc_8313DE68;
	// li r4,1023
	ctx.r4.s64 = 1023;
	// lwz r5,104(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + 104);
	// addi r3,r31,80
	ctx.r3.s64 = ctx.r31.s64 + 80;
	// bl 0x830e40b8
	ctx.lr = 0x8313DE24;
	sub_830E40B8(ctx, base);
	// addi r4,r31,80
	ctx.r4.s64 = ctx.r31.s64 + 80;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x831927e8
	ctx.lr = 0x8313DE30;
	sub_831927E8(ctx, base);
	// lwz r11,80(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	// lwz r10,104(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 104);
	// rlwinm r11,r11,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// sthx r29,r11,r10
	PPC_STORE_U16(ctx.r11.u32 + ctx.r10.u32, ctx.r29.u16);
	// lwz r4,104(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 104);
	// lwz r3,104(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 104);
	// bl 0x830d58e8
	ctx.lr = 0x8313DE4C;
	sub_830D58E8(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// lwz r3,96(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 96);
	// lwz r4,104(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 104);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8313DE68;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8313DE68:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r1,r31,160
	ctx.r1.s64 = ctx.r31.s64 + 160;
	// b 0x833a01f8
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8313DE74"))) PPC_WEAK_FUNC(sub_8313DE74);
PPC_FUNC_IMPL(__imp__sub_8313DE74) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// addi r31,r12,-160
	ctx.r31.s64 = ctx.r12.s64 + -160;
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r3,r31,80
	ctx.r3.s64 = ctx.r31.s64 + 80;
	// bl 0x830e4138
	ctx.lr = 0x8313DE8C;
	sub_830E4138(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8313DE9C"))) PPC_WEAK_FUNC(sub_8313DE9C);
PPC_FUNC_IMPL(__imp__sub_8313DE9C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8313DEA0"))) PPC_WEAK_FUNC(sub_8313DEA0);
PPC_FUNC_IMPL(__imp__sub_8313DEA0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lwz r25,17952(r26)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r26.u32 + 17952);
	// lwz r16,4040(r29)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4040);
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x833a01a4
	ctx.lr = 0x8313DEB0;
	__savegprlr_27(ctx, base);
	// addi r31,r1,-176
	ctx.r31.s64 = ctx.r1.s64 + -176;
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// stw r3,196(r31)
	PPC_STORE_U32(ctx.r31.u32 + 196, ctx.r3.u32);
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r27,r5
	ctx.r27.u64 = ctx.r5.u64;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// bne cr6,0x8313defc
	if (!ctx.cr6.eq) goto loc_8313DEFC;
	// lis r11,-32227
	ctx.r11.s64 = -2112028672;
	// lwz r7,104(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 104);
	// li r6,22
	ctx.r6.s64 = 22;
	// addi r4,r11,3872
	ctx.r4.s64 = ctx.r11.s64 + 3872;
	// li r5,450
	ctx.r5.s64 = 450;
	// addi r3,r31,96
	ctx.r3.s64 = ctx.r31.s64 + 96;
	// bl 0x830d5dc0
	ctx.lr = 0x8313DEEC;
	sub_830D5DC0(ctx, base);
	// lis r11,-32194
	ctx.r11.s64 = -2109865984;
	// addi r3,r31,96
	ctx.r3.s64 = ctx.r31.s64 + 96;
	// addi r4,r11,-28596
	ctx.r4.s64 = ctx.r11.s64 + -28596;
	// bl 0x833a7198
	ctx.lr = 0x8313DEFC;
	sub_833A7198(ctx, base);
loc_8313DEFC:
	// lwz r11,8(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// lwz r28,24(r29)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r29.u32 + 24);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// stw r11,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r11.u32);
	// beq 0x8313df54
	if (ctx.cr0.eq) goto loc_8313DF54;
	// lis r10,-32222
	ctx.r10.s64 = -2111700992;
	// lwz r9,16(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// stw r11,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r11.u32);
	// lwz r11,32568(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 32568);
	// cmplw cr6,r9,r11
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x8313df54
	if (!ctx.cr6.eq) goto loc_8313DF54;
	// lis r11,-32227
	ctx.r11.s64 = -2112028672;
	// lwz r7,104(r30)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r30.u32 + 104);
	// li r6,18
	ctx.r6.s64 = 18;
	// addi r4,r11,3872
	ctx.r4.s64 = ctx.r11.s64 + 3872;
	// li r5,459
	ctx.r5.s64 = 459;
	// addi r3,r31,96
	ctx.r3.s64 = ctx.r31.s64 + 96;
	// bl 0x830d5dc0
	ctx.lr = 0x8313DF44;
	sub_830D5DC0(ctx, base);
	// lis r11,-32194
	ctx.r11.s64 = -2109865984;
	// addi r3,r31,96
	ctx.r3.s64 = ctx.r31.s64 + 96;
	// addi r4,r11,-28596
	ctx.r4.s64 = ctx.r11.s64 + -28596;
	// bl 0x833a7198
	ctx.lr = 0x8313DF54;
	sub_833A7198(ctx, base);
loc_8313DF54:
	// clrlwi r11,r28,28
	ctx.r11.u64 = ctx.r28.u32 & 0xF;
	// cmpwi cr6,r11,6
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 6, ctx.xer);
	// beq cr6,0x8313e1e0
	if (ctx.cr6.eq) goto loc_8313E1E0;
	// cmpwi cr6,r11,7
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 7, ctx.xer);
	// beq cr6,0x8313e1e0
	if (ctx.cr6.eq) goto loc_8313E1E0;
	// cmpwi cr6,r11,8
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 8, ctx.xer);
	// beq cr6,0x8313e1e0
	if (ctx.cr6.eq) goto loc_8313E1E0;
	// clrlwi. r10,r27,24
	ctx.r10.u64 = ctx.r27.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x8313e000
	if (ctx.cr0.eq) goto loc_8313E000;
	// cmpwi cr6,r28,9
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 9, ctx.xer);
	// bne cr6,0x8313dfb4
	if (!ctx.cr6.eq) goto loc_8313DFB4;
	// li r3,28
	ctx.r3.s64 = 28;
	// lwz r4,104(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 104);
	// bl 0x830dd390
	ctx.lr = 0x8313DF8C;
	sub_830DD390(ctx, base);
	// stw r3,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r3.u32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8313dfac
	if (ctx.cr0.eq) goto loc_8313DFAC;
	// li r5,1
	ctx.r5.s64 = 1;
	// lwz r6,104(r30)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r30.u32 + 104);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x831966a0
	ctx.lr = 0x8313DFA8;
	sub_831966A0(ctx, base);
	// b 0x8313dfb0
	goto loc_8313DFB0;
loc_8313DFAC:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8313DFB0:
	// b 0x8313e214
	goto loc_8313E214;
loc_8313DFB4:
	// cmpwi cr6,r28,1
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 1, ctx.xer);
	// bne cr6,0x8313e1e0
	if (!ctx.cr6.eq) goto loc_8313E1E0;
	// lwz r11,16(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 16);
	// lwz r11,24(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// cmpwi cr6,r11,9
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 9, ctx.xer);
	// bne cr6,0x8313e1e0
	if (!ctx.cr6.eq) goto loc_8313E1E0;
	// li r3,28
	ctx.r3.s64 = 28;
	// lwz r4,104(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 104);
	// bl 0x830dd390
	ctx.lr = 0x8313DFD8;
	sub_830DD390(ctx, base);
	// stw r3,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r3.u32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8313dff8
	if (ctx.cr0.eq) goto loc_8313DFF8;
	// li r5,1
	ctx.r5.s64 = 1;
	// lwz r4,16(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 16);
	// lwz r6,104(r30)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r30.u32 + 104);
	// bl 0x831966a0
	ctx.lr = 0x8313DFF4;
	sub_831966A0(ctx, base);
	// b 0x8313dffc
	goto loc_8313DFFC;
loc_8313DFF8:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8313DFFC:
	// b 0x8313e214
	goto loc_8313E214;
loc_8313E000:
	// cmpwi cr6,r28,0
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// bne cr6,0x8313e044
	if (!ctx.cr6.eq) goto loc_8313E044;
	// li r3,24
	ctx.r3.s64 = 24;
	// lwz r4,104(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 104);
	// bl 0x830dd390
	ctx.lr = 0x8313E014;
	sub_830DD390(ctx, base);
	// stw r3,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r3.u32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8313e03c
	if (ctx.cr0.eq) goto loc_8313E03C;
	// li r7,0
	ctx.r7.s64 = 0;
	// lwz r5,8(r29)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// li r6,0
	ctx.r6.s64 = 0;
	// lwz r8,104(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + 104);
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x8313da00
	ctx.lr = 0x8313E038;
	sub_8313DA00(ctx, base);
	// b 0x8313e040
	goto loc_8313E040;
loc_8313E03C:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8313E040:
	// b 0x8313e214
	goto loc_8313E214;
loc_8313E044:
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// beq cr6,0x8313e16c
	if (ctx.cr6.eq) goto loc_8313E16C;
	// cmpwi cr6,r11,5
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 5, ctx.xer);
	// beq cr6,0x8313e16c
	if (ctx.cr6.eq) goto loc_8313E16C;
	// cmpwi cr6,r28,3
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 3, ctx.xer);
	// beq cr6,0x8313e0d4
	if (ctx.cr6.eq) goto loc_8313E0D4;
	// cmpwi cr6,r28,2
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 2, ctx.xer);
	// beq cr6,0x8313e0d4
	if (ctx.cr6.eq) goto loc_8313E0D4;
	// cmpwi cr6,r28,1
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 1, ctx.xer);
	// beq cr6,0x8313e0d4
	if (ctx.cr6.eq) goto loc_8313E0D4;
	// cmpwi cr6,r28,9
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 9, ctx.xer);
	// bne cr6,0x8313e0a8
	if (!ctx.cr6.eq) goto loc_8313E0A8;
	// li r3,28
	ctx.r3.s64 = 28;
	// lwz r4,104(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 104);
	// bl 0x830dd390
	ctx.lr = 0x8313E080;
	sub_830DD390(ctx, base);
	// stw r3,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r3.u32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8313e0a0
	if (ctx.cr0.eq) goto loc_8313E0A0;
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r6,104(r30)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r30.u32 + 104);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x831966a0
	ctx.lr = 0x8313E09C;
	sub_831966A0(ctx, base);
	// b 0x8313e0a4
	goto loc_8313E0A4;
loc_8313E0A0:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8313E0A4:
	// b 0x8313e214
	goto loc_8313E214;
loc_8313E0A8:
	// lis r11,-32227
	ctx.r11.s64 = -2112028672;
	// lwz r7,104(r30)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r30.u32 + 104);
	// li r6,22
	ctx.r6.s64 = 22;
	// addi r4,r11,3872
	ctx.r4.s64 = ctx.r11.s64 + 3872;
	// li r5,550
	ctx.r5.s64 = 550;
	// addi r3,r31,96
	ctx.r3.s64 = ctx.r31.s64 + 96;
	// bl 0x830d5dc0
	ctx.lr = 0x8313E0C4;
	sub_830D5DC0(ctx, base);
	// lis r11,-32194
	ctx.r11.s64 = -2109865984;
	// addi r3,r31,96
	ctx.r3.s64 = ctx.r31.s64 + 96;
	// addi r4,r11,-28596
	ctx.r4.s64 = ctx.r11.s64 + -28596;
	// bl 0x833a7198
	ctx.lr = 0x8313E0D4;
	sub_833A7198(ctx, base);
loc_8313E0D4:
	// lwz r11,16(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 16);
	// lwz r10,24(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// stw r11,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r11.u32);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x8313e128
	if (!ctx.cr6.eq) goto loc_8313E128;
	// li r3,24
	ctx.r3.s64 = 24;
	// lwz r4,104(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 104);
	// bl 0x830dd390
	ctx.lr = 0x8313E0F4;
	sub_830DD390(ctx, base);
	// stw r3,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r3.u32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8313e120
	if (ctx.cr0.eq) goto loc_8313E120;
	// lwz r11,16(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 16);
	// mr r7,r28
	ctx.r7.u64 = ctx.r28.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// lwz r8,104(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + 104);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r5,8(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// bl 0x8313da00
	ctx.lr = 0x8313E11C;
	sub_8313DA00(ctx, base);
	// b 0x8313e124
	goto loc_8313E124;
loc_8313E120:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8313E124:
	// b 0x8313e214
	goto loc_8313E214;
loc_8313E128:
	// lwz r10,24(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// stw r11,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r11.u32);
	// cmpwi cr6,r10,9
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 9, ctx.xer);
	// bne cr6,0x8313e1e0
	if (!ctx.cr6.eq) goto loc_8313E1E0;
	// li r3,28
	ctx.r3.s64 = 28;
	// lwz r4,104(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 104);
	// bl 0x830dd390
	ctx.lr = 0x8313E144;
	sub_830DD390(ctx, base);
	// stw r3,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r3.u32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8313e164
	if (ctx.cr0.eq) goto loc_8313E164;
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r4,16(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 16);
	// lwz r6,104(r30)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r30.u32 + 104);
	// bl 0x831966a0
	ctx.lr = 0x8313E160;
	sub_831966A0(ctx, base);
	// b 0x8313e168
	goto loc_8313E168;
loc_8313E164:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8313E168:
	// b 0x8313e214
	goto loc_8313E214;
loc_8313E16C:
	// lwz r11,16(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 16);
	// lwz r11,24(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8313e1e0
	if (!ctx.cr6.eq) goto loc_8313E1E0;
	// lwz r11,20(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 20);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// stw r11,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r11.u32);
	// beq 0x8313e1e0
	if (ctx.cr0.eq) goto loc_8313E1E0;
	// lwz r10,24(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// stw r11,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r11.u32);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x8313e1e0
	if (!ctx.cr6.eq) goto loc_8313E1E0;
	// li r3,24
	ctx.r3.s64 = 24;
	// lwz r4,104(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 104);
	// bl 0x830dd390
	ctx.lr = 0x8313E1A8;
	sub_830DD390(ctx, base);
	// stw r3,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r3.u32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8313e1d8
	if (ctx.cr0.eq) goto loc_8313E1D8;
	// lwz r11,20(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 20);
	// mr r7,r28
	ctx.r7.u64 = ctx.r28.u64;
	// lwz r10,16(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 16);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r8,104(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + 104);
	// lwz r6,8(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r5,8(r10)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// bl 0x8313da00
	ctx.lr = 0x8313E1D4;
	sub_8313DA00(ctx, base);
	// b 0x8313e1dc
	goto loc_8313E1DC;
loc_8313E1D8:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8313E1DC:
	// b 0x8313e214
	goto loc_8313E214;
loc_8313E1E0:
	// li r3,68
	ctx.r3.s64 = 68;
	// lwz r4,104(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 104);
	// bl 0x830dd390
	ctx.lr = 0x8313E1EC;
	sub_830DD390(ctx, base);
	// stw r3,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r3.u32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8313e210
	if (ctx.cr0.eq) goto loc_8313E210;
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// lwz r7,104(r30)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r30.u32 + 104);
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x83195e78
	ctx.lr = 0x8313E20C;
	sub_83195E78(ctx, base);
	// b 0x8313e214
	goto loc_8313E214;
loc_8313E210:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8313E214:
	// addi r1,r31,176
	ctx.r1.s64 = ctx.r31.s64 + 176;
	// b 0x833a01f4
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8313DEA8"))) PPC_WEAK_FUNC(sub_8313DEA8);
PPC_FUNC_IMPL(__imp__sub_8313DEA8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x833a01a4
	ctx.lr = 0x8313DEB0;
	__savegprlr_27(ctx, base);
	// addi r31,r1,-176
	ctx.r31.s64 = ctx.r1.s64 + -176;
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// stw r3,196(r31)
	PPC_STORE_U32(ctx.r31.u32 + 196, ctx.r3.u32);
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r27,r5
	ctx.r27.u64 = ctx.r5.u64;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// bne cr6,0x8313defc
	if (!ctx.cr6.eq) goto loc_8313DEFC;
	// lis r11,-32227
	ctx.r11.s64 = -2112028672;
	// lwz r7,104(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 104);
	// li r6,22
	ctx.r6.s64 = 22;
	// addi r4,r11,3872
	ctx.r4.s64 = ctx.r11.s64 + 3872;
	// li r5,450
	ctx.r5.s64 = 450;
	// addi r3,r31,96
	ctx.r3.s64 = ctx.r31.s64 + 96;
	// bl 0x830d5dc0
	ctx.lr = 0x8313DEEC;
	sub_830D5DC0(ctx, base);
	// lis r11,-32194
	ctx.r11.s64 = -2109865984;
	// addi r3,r31,96
	ctx.r3.s64 = ctx.r31.s64 + 96;
	// addi r4,r11,-28596
	ctx.r4.s64 = ctx.r11.s64 + -28596;
	// bl 0x833a7198
	ctx.lr = 0x8313DEFC;
	sub_833A7198(ctx, base);
loc_8313DEFC:
	// lwz r11,8(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// lwz r28,24(r29)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r29.u32 + 24);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// stw r11,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r11.u32);
	// beq 0x8313df54
	if (ctx.cr0.eq) goto loc_8313DF54;
	// lis r10,-32222
	ctx.r10.s64 = -2111700992;
	// lwz r9,16(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// stw r11,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r11.u32);
	// lwz r11,32568(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 32568);
	// cmplw cr6,r9,r11
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x8313df54
	if (!ctx.cr6.eq) goto loc_8313DF54;
	// lis r11,-32227
	ctx.r11.s64 = -2112028672;
	// lwz r7,104(r30)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r30.u32 + 104);
	// li r6,18
	ctx.r6.s64 = 18;
	// addi r4,r11,3872
	ctx.r4.s64 = ctx.r11.s64 + 3872;
	// li r5,459
	ctx.r5.s64 = 459;
	// addi r3,r31,96
	ctx.r3.s64 = ctx.r31.s64 + 96;
	// bl 0x830d5dc0
	ctx.lr = 0x8313DF44;
	sub_830D5DC0(ctx, base);
	// lis r11,-32194
	ctx.r11.s64 = -2109865984;
	// addi r3,r31,96
	ctx.r3.s64 = ctx.r31.s64 + 96;
	// addi r4,r11,-28596
	ctx.r4.s64 = ctx.r11.s64 + -28596;
	// bl 0x833a7198
	ctx.lr = 0x8313DF54;
	sub_833A7198(ctx, base);
loc_8313DF54:
	// clrlwi r11,r28,28
	ctx.r11.u64 = ctx.r28.u32 & 0xF;
	// cmpwi cr6,r11,6
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 6, ctx.xer);
	// beq cr6,0x8313e1e0
	if (ctx.cr6.eq) goto loc_8313E1E0;
	// cmpwi cr6,r11,7
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 7, ctx.xer);
	// beq cr6,0x8313e1e0
	if (ctx.cr6.eq) goto loc_8313E1E0;
	// cmpwi cr6,r11,8
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 8, ctx.xer);
	// beq cr6,0x8313e1e0
	if (ctx.cr6.eq) goto loc_8313E1E0;
	// clrlwi. r10,r27,24
	ctx.r10.u64 = ctx.r27.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x8313e000
	if (ctx.cr0.eq) goto loc_8313E000;
	// cmpwi cr6,r28,9
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 9, ctx.xer);
	// bne cr6,0x8313dfb4
	if (!ctx.cr6.eq) goto loc_8313DFB4;
	// li r3,28
	ctx.r3.s64 = 28;
	// lwz r4,104(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 104);
	// bl 0x830dd390
	ctx.lr = 0x8313DF8C;
	sub_830DD390(ctx, base);
	// stw r3,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r3.u32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8313dfac
	if (ctx.cr0.eq) goto loc_8313DFAC;
	// li r5,1
	ctx.r5.s64 = 1;
	// lwz r6,104(r30)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r30.u32 + 104);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x831966a0
	ctx.lr = 0x8313DFA8;
	sub_831966A0(ctx, base);
	// b 0x8313dfb0
	goto loc_8313DFB0;
loc_8313DFAC:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8313DFB0:
	// b 0x8313e214
	goto loc_8313E214;
loc_8313DFB4:
	// cmpwi cr6,r28,1
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 1, ctx.xer);
	// bne cr6,0x8313e1e0
	if (!ctx.cr6.eq) goto loc_8313E1E0;
	// lwz r11,16(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 16);
	// lwz r11,24(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// cmpwi cr6,r11,9
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 9, ctx.xer);
	// bne cr6,0x8313e1e0
	if (!ctx.cr6.eq) goto loc_8313E1E0;
	// li r3,28
	ctx.r3.s64 = 28;
	// lwz r4,104(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 104);
	// bl 0x830dd390
	ctx.lr = 0x8313DFD8;
	sub_830DD390(ctx, base);
	// stw r3,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r3.u32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8313dff8
	if (ctx.cr0.eq) goto loc_8313DFF8;
	// li r5,1
	ctx.r5.s64 = 1;
	// lwz r4,16(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 16);
	// lwz r6,104(r30)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r30.u32 + 104);
	// bl 0x831966a0
	ctx.lr = 0x8313DFF4;
	sub_831966A0(ctx, base);
	// b 0x8313dffc
	goto loc_8313DFFC;
loc_8313DFF8:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8313DFFC:
	// b 0x8313e214
	goto loc_8313E214;
loc_8313E000:
	// cmpwi cr6,r28,0
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// bne cr6,0x8313e044
	if (!ctx.cr6.eq) goto loc_8313E044;
	// li r3,24
	ctx.r3.s64 = 24;
	// lwz r4,104(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 104);
	// bl 0x830dd390
	ctx.lr = 0x8313E014;
	sub_830DD390(ctx, base);
	// stw r3,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r3.u32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8313e03c
	if (ctx.cr0.eq) goto loc_8313E03C;
	// li r7,0
	ctx.r7.s64 = 0;
	// lwz r5,8(r29)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// li r6,0
	ctx.r6.s64 = 0;
	// lwz r8,104(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + 104);
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x8313da00
	ctx.lr = 0x8313E038;
	sub_8313DA00(ctx, base);
	// b 0x8313e040
	goto loc_8313E040;
loc_8313E03C:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8313E040:
	// b 0x8313e214
	goto loc_8313E214;
loc_8313E044:
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// beq cr6,0x8313e16c
	if (ctx.cr6.eq) goto loc_8313E16C;
	// cmpwi cr6,r11,5
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 5, ctx.xer);
	// beq cr6,0x8313e16c
	if (ctx.cr6.eq) goto loc_8313E16C;
	// cmpwi cr6,r28,3
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 3, ctx.xer);
	// beq cr6,0x8313e0d4
	if (ctx.cr6.eq) goto loc_8313E0D4;
	// cmpwi cr6,r28,2
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 2, ctx.xer);
	// beq cr6,0x8313e0d4
	if (ctx.cr6.eq) goto loc_8313E0D4;
	// cmpwi cr6,r28,1
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 1, ctx.xer);
	// beq cr6,0x8313e0d4
	if (ctx.cr6.eq) goto loc_8313E0D4;
	// cmpwi cr6,r28,9
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 9, ctx.xer);
	// bne cr6,0x8313e0a8
	if (!ctx.cr6.eq) goto loc_8313E0A8;
	// li r3,28
	ctx.r3.s64 = 28;
	// lwz r4,104(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 104);
	// bl 0x830dd390
	ctx.lr = 0x8313E080;
	sub_830DD390(ctx, base);
	// stw r3,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r3.u32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8313e0a0
	if (ctx.cr0.eq) goto loc_8313E0A0;
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r6,104(r30)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r30.u32 + 104);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x831966a0
	ctx.lr = 0x8313E09C;
	sub_831966A0(ctx, base);
	// b 0x8313e0a4
	goto loc_8313E0A4;
loc_8313E0A0:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8313E0A4:
	// b 0x8313e214
	goto loc_8313E214;
loc_8313E0A8:
	// lis r11,-32227
	ctx.r11.s64 = -2112028672;
	// lwz r7,104(r30)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r30.u32 + 104);
	// li r6,22
	ctx.r6.s64 = 22;
	// addi r4,r11,3872
	ctx.r4.s64 = ctx.r11.s64 + 3872;
	// li r5,550
	ctx.r5.s64 = 550;
	// addi r3,r31,96
	ctx.r3.s64 = ctx.r31.s64 + 96;
	// bl 0x830d5dc0
	ctx.lr = 0x8313E0C4;
	sub_830D5DC0(ctx, base);
	// lis r11,-32194
	ctx.r11.s64 = -2109865984;
	// addi r3,r31,96
	ctx.r3.s64 = ctx.r31.s64 + 96;
	// addi r4,r11,-28596
	ctx.r4.s64 = ctx.r11.s64 + -28596;
	// bl 0x833a7198
	ctx.lr = 0x8313E0D4;
	sub_833A7198(ctx, base);
loc_8313E0D4:
	// lwz r11,16(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 16);
	// lwz r10,24(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// stw r11,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r11.u32);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x8313e128
	if (!ctx.cr6.eq) goto loc_8313E128;
	// li r3,24
	ctx.r3.s64 = 24;
	// lwz r4,104(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 104);
	// bl 0x830dd390
	ctx.lr = 0x8313E0F4;
	sub_830DD390(ctx, base);
	// stw r3,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r3.u32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8313e120
	if (ctx.cr0.eq) goto loc_8313E120;
	// lwz r11,16(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 16);
	// mr r7,r28
	ctx.r7.u64 = ctx.r28.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// lwz r8,104(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + 104);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r5,8(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// bl 0x8313da00
	ctx.lr = 0x8313E11C;
	sub_8313DA00(ctx, base);
	// b 0x8313e124
	goto loc_8313E124;
loc_8313E120:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8313E124:
	// b 0x8313e214
	goto loc_8313E214;
loc_8313E128:
	// lwz r10,24(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// stw r11,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r11.u32);
	// cmpwi cr6,r10,9
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 9, ctx.xer);
	// bne cr6,0x8313e1e0
	if (!ctx.cr6.eq) goto loc_8313E1E0;
	// li r3,28
	ctx.r3.s64 = 28;
	// lwz r4,104(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 104);
	// bl 0x830dd390
	ctx.lr = 0x8313E144;
	sub_830DD390(ctx, base);
	// stw r3,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r3.u32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8313e164
	if (ctx.cr0.eq) goto loc_8313E164;
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r4,16(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 16);
	// lwz r6,104(r30)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r30.u32 + 104);
	// bl 0x831966a0
	ctx.lr = 0x8313E160;
	sub_831966A0(ctx, base);
	// b 0x8313e168
	goto loc_8313E168;
loc_8313E164:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8313E168:
	// b 0x8313e214
	goto loc_8313E214;
loc_8313E16C:
	// lwz r11,16(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 16);
	// lwz r11,24(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8313e1e0
	if (!ctx.cr6.eq) goto loc_8313E1E0;
	// lwz r11,20(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 20);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// stw r11,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r11.u32);
	// beq 0x8313e1e0
	if (ctx.cr0.eq) goto loc_8313E1E0;
	// lwz r10,24(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// stw r11,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r11.u32);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x8313e1e0
	if (!ctx.cr6.eq) goto loc_8313E1E0;
	// li r3,24
	ctx.r3.s64 = 24;
	// lwz r4,104(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 104);
	// bl 0x830dd390
	ctx.lr = 0x8313E1A8;
	sub_830DD390(ctx, base);
	// stw r3,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r3.u32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8313e1d8
	if (ctx.cr0.eq) goto loc_8313E1D8;
	// lwz r11,20(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 20);
	// mr r7,r28
	ctx.r7.u64 = ctx.r28.u64;
	// lwz r10,16(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 16);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r8,104(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + 104);
	// lwz r6,8(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r5,8(r10)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// bl 0x8313da00
	ctx.lr = 0x8313E1D4;
	sub_8313DA00(ctx, base);
	// b 0x8313e1dc
	goto loc_8313E1DC;
loc_8313E1D8:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8313E1DC:
	// b 0x8313e214
	goto loc_8313E214;
loc_8313E1E0:
	// li r3,68
	ctx.r3.s64 = 68;
	// lwz r4,104(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 104);
	// bl 0x830dd390
	ctx.lr = 0x8313E1EC;
	sub_830DD390(ctx, base);
	// stw r3,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r3.u32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8313e210
	if (ctx.cr0.eq) goto loc_8313E210;
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// lwz r7,104(r30)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r30.u32 + 104);
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x83195e78
	ctx.lr = 0x8313E20C;
	sub_83195E78(ctx, base);
	// b 0x8313e214
	goto loc_8313E214;
loc_8313E210:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8313E214:
	// addi r1,r31,176
	ctx.r1.s64 = ctx.r31.s64 + 176;
	// b 0x833a01f4
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8313E21C"))) PPC_WEAK_FUNC(sub_8313E21C);
PPC_FUNC_IMPL(__imp__sub_8313E21C) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// addi r31,r12,-176
	ctx.r31.s64 = ctx.r12.s64 + -176;
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,196(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 196);
	// lwz r4,104(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 104);
	// lwz r3,80(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	// bl 0x830dd3e0
	ctx.lr = 0x8313E23C;
	sub_830DD3E0(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8313E24C"))) PPC_WEAK_FUNC(sub_8313E24C);
PPC_FUNC_IMPL(__imp__sub_8313E24C) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// addi r31,r12,-176
	ctx.r31.s64 = ctx.r12.s64 + -176;
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,196(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 196);
	// lwz r4,104(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 104);
	// lwz r3,80(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	// bl 0x830dd3e0
	ctx.lr = 0x8313E26C;
	sub_830DD3E0(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8313E27C"))) PPC_WEAK_FUNC(sub_8313E27C);
PPC_FUNC_IMPL(__imp__sub_8313E27C) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// addi r31,r12,-176
	ctx.r31.s64 = ctx.r12.s64 + -176;
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,196(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 196);
	// lwz r4,104(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 104);
	// lwz r3,80(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	// bl 0x830dd3e0
	ctx.lr = 0x8313E29C;
	sub_830DD3E0(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8313E2AC"))) PPC_WEAK_FUNC(sub_8313E2AC);
PPC_FUNC_IMPL(__imp__sub_8313E2AC) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// addi r31,r12,-176
	ctx.r31.s64 = ctx.r12.s64 + -176;
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,196(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 196);
	// lwz r4,104(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 104);
	// lwz r3,80(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	// bl 0x830dd3e0
	ctx.lr = 0x8313E2CC;
	sub_830DD3E0(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8313E2DC"))) PPC_WEAK_FUNC(sub_8313E2DC);
PPC_FUNC_IMPL(__imp__sub_8313E2DC) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// addi r31,r12,-176
	ctx.r31.s64 = ctx.r12.s64 + -176;
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,196(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 196);
	// lwz r4,104(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 104);
	// lwz r3,80(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	// bl 0x830dd3e0
	ctx.lr = 0x8313E2FC;
	sub_830DD3E0(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8313E30C"))) PPC_WEAK_FUNC(sub_8313E30C);
PPC_FUNC_IMPL(__imp__sub_8313E30C) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// addi r31,r12,-176
	ctx.r31.s64 = ctx.r12.s64 + -176;
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,196(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 196);
	// lwz r4,104(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 104);
	// lwz r3,80(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	// bl 0x830dd3e0
	ctx.lr = 0x8313E32C;
	sub_830DD3E0(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8313E33C"))) PPC_WEAK_FUNC(sub_8313E33C);
PPC_FUNC_IMPL(__imp__sub_8313E33C) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// addi r31,r12,-176
	ctx.r31.s64 = ctx.r12.s64 + -176;
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,196(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 196);
	// lwz r4,104(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 104);
	// lwz r3,80(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	// bl 0x830dd3e0
	ctx.lr = 0x8313E35C;
	sub_830DD3E0(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8313E36C"))) PPC_WEAK_FUNC(sub_8313E36C);
PPC_FUNC_IMPL(__imp__sub_8313E36C) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// addi r31,r12,-176
	ctx.r31.s64 = ctx.r12.s64 + -176;
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,196(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 196);
	// lwz r4,104(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 104);
	// lwz r3,80(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	// bl 0x830dd3e0
	ctx.lr = 0x8313E38C;
	sub_830DD3E0(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8313E39C"))) PPC_WEAK_FUNC(sub_8313E39C);
PPC_FUNC_IMPL(__imp__sub_8313E39C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8313E3A0"))) PPC_WEAK_FUNC(sub_8313E3A0);
PPC_FUNC_IMPL(__imp__sub_8313E3A0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x833a018c
	ctx.lr = 0x8313E3A8;
	__savegprlr_21(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// mr r22,r5
	ctx.r22.u64 = ctx.r5.u64;
	// mr r21,r6
	ctx.r21.u64 = ctx.r6.u64;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// bne cr6,0x8313e3cc
	if (!ctx.cr6.eq) goto loc_8313E3CC;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x8313e860
	goto loc_8313E860;
loc_8313E3CC:
	// mr r29,r27
	ctx.r29.u64 = ctx.r27.u64;
	// cmpwi cr6,r22,1
	ctx.cr6.compare<int32_t>(ctx.r22.s32, 1, ctx.xer);
	// bne cr6,0x8313e3e0
	if (!ctx.cr6.eq) goto loc_8313E3E0;
	// cmpwi cr6,r21,1
	ctx.cr6.compare<int32_t>(ctx.r21.s32, 1, ctx.xer);
	// beq cr6,0x8313e85c
	if (ctx.cr6.eq) goto loc_8313E85C;
loc_8313E3E0:
	// cmpwi cr6,r22,0
	ctx.cr6.compare<int32_t>(ctx.r22.s32, 0, ctx.xer);
	// bne cr6,0x8313e49c
	if (!ctx.cr6.eq) goto loc_8313E49C;
	// lwz r4,104(r28)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r28.u32 + 104);
	// cmpwi cr6,r21,1
	ctx.cr6.compare<int32_t>(ctx.r21.s32, 1, ctx.xer);
	// li r3,40
	ctx.r3.s64 = 40;
	// bne cr6,0x8313e44c
	if (!ctx.cr6.eq) goto loc_8313E44C;
	// bl 0x830dd390
	ctx.lr = 0x8313E3FC;
	sub_830DD390(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8313e4dc
	if (ctx.cr0.eq) goto loc_8313E4DC;
	// lwz r11,104(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 104);
	// lis r10,-32227
	ctx.r10.s64 = -2112028672;
	// li r30,0
	ctx.r30.s64 = 0;
	// stw r27,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r27.u32);
	// li r31,1
	ctx.r31.s64 = 1;
	// addi r10,r10,3412
	ctx.r10.s64 = ctx.r10.s64 + 3412;
	// stw r30,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r30.u32);
	// stw r31,24(r3)
	PPC_STORE_U32(ctx.r3.u32 + 24, ctx.r31.u32);
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// stw r30,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r30.u32);
	// stw r30,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r30.u32);
	// stb r31,28(r3)
	PPC_STORE_U8(ctx.r3.u32 + 28, ctx.r31.u8);
loc_8313E438:
	// stb r31,29(r3)
	PPC_STORE_U8(ctx.r3.u32 + 29, ctx.r31.u8);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// stw r31,32(r3)
	PPC_STORE_U32(ctx.r3.u32 + 32, ctx.r31.u32);
	// stw r31,36(r3)
	PPC_STORE_U32(ctx.r3.u32 + 36, ctx.r31.u32);
	// b 0x8313e85c
	goto loc_8313E85C;
loc_8313E44C:
	// cmpwi cr6,r21,-1
	ctx.cr6.compare<int32_t>(ctx.r21.s32, -1, ctx.xer);
	// bne cr6,0x8313e5c0
	if (!ctx.cr6.eq) goto loc_8313E5C0;
	// bl 0x830dd390
	ctx.lr = 0x8313E458;
	sub_830DD390(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8313e4dc
	if (ctx.cr0.eq) goto loc_8313E4DC;
	// li r9,2
	ctx.r9.s64 = 2;
loc_8313E464:
	// li r31,1
	ctx.r31.s64 = 1;
	// lwz r11,104(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 104);
	// lis r10,-32227
	ctx.r10.s64 = -2112028672;
	// li r30,0
	ctx.r30.s64 = 0;
	// stb r31,28(r3)
	PPC_STORE_U8(ctx.r3.u32 + 28, ctx.r31.u8);
	// addi r10,r10,3412
	ctx.r10.s64 = ctx.r10.s64 + 3412;
	// stw r27,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r27.u32);
	// stw r30,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r30.u32);
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// stw r30,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r30.u32);
	// stw r30,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r30.u32);
	// stw r9,24(r3)
	PPC_STORE_U32(ctx.r3.u32 + 24, ctx.r9.u32);
	// b 0x8313e438
	goto loc_8313E438;
loc_8313E49C:
	// lis r11,-32227
	ctx.r11.s64 = -2112028672;
	// li r30,0
	ctx.r30.s64 = 0;
	// li r31,1
	ctx.r31.s64 = 1;
	// li r23,5
	ctx.r23.s64 = 5;
	// cmpwi cr6,r22,1
	ctx.cr6.compare<int32_t>(ctx.r22.s32, 1, ctx.xer);
	// addi r25,r11,3412
	ctx.r25.s64 = ctx.r11.s64 + 3412;
	// bne cr6,0x8313e4e4
	if (!ctx.cr6.eq) goto loc_8313E4E4;
	// cmpwi cr6,r21,-1
	ctx.cr6.compare<int32_t>(ctx.r21.s32, -1, ctx.xer);
	// bne cr6,0x8313e750
	if (!ctx.cr6.eq) goto loc_8313E750;
	// li r3,40
	ctx.r3.s64 = 40;
	// lwz r4,104(r28)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r28.u32 + 104);
	// bl 0x830dd390
	ctx.lr = 0x8313E4CC;
	sub_830DD390(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8313e4dc
	if (ctx.cr0.eq) goto loc_8313E4DC;
	// li r9,3
	ctx.r9.s64 = 3;
	// b 0x8313e464
	goto loc_8313E464;
loc_8313E4DC:
	// li r29,0
	ctx.r29.s64 = 0;
	// b 0x8313e85c
	goto loc_8313E85C;
loc_8313E4E4:
	// cmpwi cr6,r21,-1
	ctx.cr6.compare<int32_t>(ctx.r21.s32, -1, ctx.xer);
	// bne cr6,0x8313e68c
	if (!ctx.cr6.eq) goto loc_8313E68C;
	// li r3,40
	ctx.r3.s64 = 40;
	// lwz r4,104(r28)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r28.u32 + 104);
	// bl 0x830dd390
	ctx.lr = 0x8313E4F8;
	sub_830DD390(ctx, base);
	// lis r11,-32227
	ctx.r11.s64 = -2112028672;
	// li r31,1
	ctx.r31.s64 = 1;
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// addi r25,r11,3412
	ctx.r25.s64 = ctx.r11.s64 + 3412;
	// li r30,0
	ctx.r30.s64 = 0;
	// beq 0x8313e54c
	if (ctx.cr0.eq) goto loc_8313E54C;
	// lwz r11,104(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 104);
	// li r10,3
	ctx.r10.s64 = 3;
	// stw r27,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r27.u32);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// stw r30,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r30.u32);
	// stw r25,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r25.u32);
	// stw r30,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r30.u32);
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// stw r30,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r30.u32);
	// stw r10,24(r3)
	PPC_STORE_U32(ctx.r3.u32 + 24, ctx.r10.u32);
	// stb r31,28(r3)
	PPC_STORE_U8(ctx.r3.u32 + 28, ctx.r31.u8);
	// stb r31,29(r3)
	PPC_STORE_U8(ctx.r3.u32 + 29, ctx.r31.u8);
	// stw r31,32(r3)
	PPC_STORE_U32(ctx.r3.u32 + 32, ctx.r31.u32);
	// stw r31,36(r3)
	PPC_STORE_U32(ctx.r3.u32 + 36, ctx.r31.u32);
	// b 0x8313e550
	goto loc_8313E550;
loc_8313E54C:
	// mr r29,r30
	ctx.r29.u64 = ctx.r30.u64;
loc_8313E550:
	// addic. r24,r22,-1
	ctx.xer.ca = ctx.r22.u32 > 0;
	ctx.r24.s64 = ctx.r22.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r24.s32, 0, ctx.xer);
	// mr r26,r30
	ctx.r26.u64 = ctx.r30.u64;
	// ble 0x8313e85c
	if (!ctx.cr0.gt) goto loc_8313E85C;
	// li r23,5
	ctx.r23.s64 = 5;
loc_8313E560:
	// li r3,40
	ctx.r3.s64 = 40;
	// lwz r4,104(r28)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r28.u32 + 104);
	// bl 0x830dd390
	ctx.lr = 0x8313E56C;
	sub_830DD390(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8313e5ac
	if (ctx.cr0.eq) goto loc_8313E5AC;
	// lwz r11,104(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 104);
	// stw r29,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r29.u32);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// stw r27,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r27.u32);
	// stw r30,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r30.u32);
	// stw r25,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r25.u32);
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// stw r30,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r30.u32);
	// stw r23,24(r3)
	PPC_STORE_U32(ctx.r3.u32 + 24, ctx.r23.u32);
	// stb r30,28(r3)
	PPC_STORE_U8(ctx.r3.u32 + 28, ctx.r30.u8);
	// stb r31,29(r3)
	PPC_STORE_U8(ctx.r3.u32 + 29, ctx.r31.u8);
	// stw r31,32(r3)
	PPC_STORE_U32(ctx.r3.u32 + 32, ctx.r31.u32);
	// stw r31,36(r3)
	PPC_STORE_U32(ctx.r3.u32 + 36, ctx.r31.u32);
	// b 0x8313e5b0
	goto loc_8313E5B0;
loc_8313E5AC:
	// mr r29,r30
	ctx.r29.u64 = ctx.r30.u64;
loc_8313E5B0:
	// addi r26,r26,1
	ctx.r26.s64 = ctx.r26.s64 + 1;
	// cmpw cr6,r26,r24
	ctx.cr6.compare<int32_t>(ctx.r26.s32, ctx.r24.s32, ctx.xer);
	// blt cr6,0x8313e560
	if (ctx.cr6.lt) goto loc_8313E560;
	// b 0x8313e85c
	goto loc_8313E85C;
loc_8313E5C0:
	// bl 0x830dd390
	ctx.lr = 0x8313E5C4;
	sub_830DD390(ctx, base);
	// lis r11,-32227
	ctx.r11.s64 = -2112028672;
	// li r31,1
	ctx.r31.s64 = 1;
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// addi r25,r11,3412
	ctx.r25.s64 = ctx.r11.s64 + 3412;
	// li r30,0
	ctx.r30.s64 = 0;
	// beq 0x8313e614
	if (ctx.cr0.eq) goto loc_8313E614;
	// lwz r11,104(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 104);
	// stw r27,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r27.u32);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// stw r30,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r30.u32);
	// stw r25,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r25.u32);
	// stw r30,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r30.u32);
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// stw r30,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r30.u32);
	// stw r31,24(r3)
	PPC_STORE_U32(ctx.r3.u32 + 24, ctx.r31.u32);
	// stb r31,28(r3)
	PPC_STORE_U8(ctx.r3.u32 + 28, ctx.r31.u8);
	// stb r31,29(r3)
	PPC_STORE_U8(ctx.r3.u32 + 29, ctx.r31.u8);
	// stw r31,32(r3)
	PPC_STORE_U32(ctx.r3.u32 + 32, ctx.r31.u32);
	// stw r31,36(r3)
	PPC_STORE_U32(ctx.r3.u32 + 36, ctx.r31.u32);
	// b 0x8313e618
	goto loc_8313E618;
loc_8313E614:
	// mr r27,r30
	ctx.r27.u64 = ctx.r30.u64;
loc_8313E618:
	// addic. r24,r21,-1
	ctx.xer.ca = ctx.r21.u32 > 0;
	ctx.r24.s64 = ctx.r21.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r24.s32, 0, ctx.xer);
	// mr r29,r27
	ctx.r29.u64 = ctx.r27.u64;
	// mr r26,r30
	ctx.r26.u64 = ctx.r30.u64;
	// ble 0x8313e85c
	if (!ctx.cr0.gt) goto loc_8313E85C;
	// li r23,5
	ctx.r23.s64 = 5;
loc_8313E62C:
	// li r3,40
	ctx.r3.s64 = 40;
	// lwz r4,104(r28)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r28.u32 + 104);
	// bl 0x830dd390
	ctx.lr = 0x8313E638;
	sub_830DD390(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8313e678
	if (ctx.cr0.eq) goto loc_8313E678;
	// lwz r11,104(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 104);
	// stw r29,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r29.u32);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// stw r27,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r27.u32);
	// stw r30,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r30.u32);
	// stw r25,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r25.u32);
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// stw r30,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r30.u32);
	// stw r23,24(r3)
	PPC_STORE_U32(ctx.r3.u32 + 24, ctx.r23.u32);
	// stb r31,28(r3)
	PPC_STORE_U8(ctx.r3.u32 + 28, ctx.r31.u8);
	// stb r30,29(r3)
	PPC_STORE_U8(ctx.r3.u32 + 29, ctx.r30.u8);
	// stw r31,32(r3)
	PPC_STORE_U32(ctx.r3.u32 + 32, ctx.r31.u32);
	// stw r31,36(r3)
	PPC_STORE_U32(ctx.r3.u32 + 36, ctx.r31.u32);
	// b 0x8313e67c
	goto loc_8313E67C;
loc_8313E678:
	// mr r29,r30
	ctx.r29.u64 = ctx.r30.u64;
loc_8313E67C:
	// addi r26,r26,1
	ctx.r26.s64 = ctx.r26.s64 + 1;
	// cmpw cr6,r26,r24
	ctx.cr6.compare<int32_t>(ctx.r26.s32, ctx.r24.s32, ctx.xer);
	// blt cr6,0x8313e62c
	if (ctx.cr6.lt) goto loc_8313E62C;
	// b 0x8313e85c
	goto loc_8313E85C;
loc_8313E68C:
	// cmpwi cr6,r22,1
	ctx.cr6.compare<int32_t>(ctx.r22.s32, 1, ctx.xer);
	// ble cr6,0x8313e750
	if (!ctx.cr6.gt) goto loc_8313E750;
	// li r3,40
	ctx.r3.s64 = 40;
	// lwz r4,104(r28)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r28.u32 + 104);
	// bl 0x830dd390
	ctx.lr = 0x8313E6A0;
	sub_830DD390(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8313e6e0
	if (ctx.cr0.eq) goto loc_8313E6E0;
	// lwz r11,104(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 104);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// stw r27,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r27.u32);
	// stw r27,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r27.u32);
	// stw r30,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r30.u32);
	// stw r25,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r25.u32);
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// stw r30,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r30.u32);
	// stw r23,24(r3)
	PPC_STORE_U32(ctx.r3.u32 + 24, ctx.r23.u32);
	// stb r31,28(r3)
	PPC_STORE_U8(ctx.r3.u32 + 28, ctx.r31.u8);
	// stb r30,29(r3)
	PPC_STORE_U8(ctx.r3.u32 + 29, ctx.r30.u8);
	// stw r31,32(r3)
	PPC_STORE_U32(ctx.r3.u32 + 32, ctx.r31.u32);
	// stw r31,36(r3)
	PPC_STORE_U32(ctx.r3.u32 + 36, ctx.r31.u32);
	// b 0x8313e6e4
	goto loc_8313E6E4;
loc_8313E6E0:
	// mr r29,r30
	ctx.r29.u64 = ctx.r30.u64;
loc_8313E6E4:
	// addi r24,r22,-1
	ctx.r24.s64 = ctx.r22.s64 + -1;
	// mr r26,r31
	ctx.r26.u64 = ctx.r31.u64;
	// cmpwi cr6,r24,1
	ctx.cr6.compare<int32_t>(ctx.r24.s32, 1, ctx.xer);
	// ble cr6,0x8313e750
	if (!ctx.cr6.gt) goto loc_8313E750;
loc_8313E6F4:
	// li r3,40
	ctx.r3.s64 = 40;
	// lwz r4,104(r28)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r28.u32 + 104);
	// bl 0x830dd390
	ctx.lr = 0x8313E700;
	sub_830DD390(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8313e740
	if (ctx.cr0.eq) goto loc_8313E740;
	// lwz r11,104(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 104);
	// stw r29,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r29.u32);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// stw r27,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r27.u32);
	// stw r30,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r30.u32);
	// stw r25,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r25.u32);
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// stw r30,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r30.u32);
	// stw r23,24(r3)
	PPC_STORE_U32(ctx.r3.u32 + 24, ctx.r23.u32);
	// stb r31,28(r3)
	PPC_STORE_U8(ctx.r3.u32 + 28, ctx.r31.u8);
	// stb r30,29(r3)
	PPC_STORE_U8(ctx.r3.u32 + 29, ctx.r30.u8);
	// stw r31,32(r3)
	PPC_STORE_U32(ctx.r3.u32 + 32, ctx.r31.u32);
	// stw r31,36(r3)
	PPC_STORE_U32(ctx.r3.u32 + 36, ctx.r31.u32);
	// b 0x8313e744
	goto loc_8313E744;
loc_8313E740:
	// mr r29,r30
	ctx.r29.u64 = ctx.r30.u64;
loc_8313E744:
	// addi r26,r26,1
	ctx.r26.s64 = ctx.r26.s64 + 1;
	// cmpw cr6,r26,r24
	ctx.cr6.compare<int32_t>(ctx.r26.s32, ctx.r24.s32, ctx.xer);
	// blt cr6,0x8313e6f4
	if (ctx.cr6.lt) goto loc_8313E6F4;
loc_8313E750:
	// subf. r26,r22,r21
	ctx.r26.s64 = ctx.r21.s64 - ctx.r22.s64;
	ctx.cr0.compare<int32_t>(ctx.r26.s32, 0, ctx.xer);
	// ble 0x8313e85c
	if (!ctx.cr0.gt) goto loc_8313E85C;
	// li r3,40
	ctx.r3.s64 = 40;
	// lwz r4,104(r28)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r28.u32 + 104);
	// bl 0x830dd390
	ctx.lr = 0x8313E764;
	sub_830DD390(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8313e7a4
	if (ctx.cr0.eq) goto loc_8313E7A4;
	// lwz r11,104(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 104);
	// stw r27,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r27.u32);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// stw r30,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r30.u32);
	// stw r25,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r25.u32);
	// stw r30,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r30.u32);
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// stw r30,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r30.u32);
	// stw r31,24(r3)
	PPC_STORE_U32(ctx.r3.u32 + 24, ctx.r31.u32);
	// stb r30,28(r3)
	PPC_STORE_U8(ctx.r3.u32 + 28, ctx.r30.u8);
	// stb r31,29(r3)
	PPC_STORE_U8(ctx.r3.u32 + 29, ctx.r31.u8);
	// stw r31,32(r3)
	PPC_STORE_U32(ctx.r3.u32 + 32, ctx.r31.u32);
	// stw r31,36(r3)
	PPC_STORE_U32(ctx.r3.u32 + 36, ctx.r31.u32);
	// b 0x8313e7a8
	goto loc_8313E7A8;
loc_8313E7A4:
	// mr r27,r30
	ctx.r27.u64 = ctx.r30.u64;
loc_8313E7A8:
	// li r3,40
	ctx.r3.s64 = 40;
	// lwz r4,104(r28)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r28.u32 + 104);
	// bl 0x830dd390
	ctx.lr = 0x8313E7B4;
	sub_830DD390(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8313e7f4
	if (ctx.cr0.eq) goto loc_8313E7F4;
	// lwz r11,104(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 104);
	// stw r29,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r29.u32);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// stw r27,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r27.u32);
	// stw r30,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r30.u32);
	// stw r25,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r25.u32);
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// stw r30,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r30.u32);
	// stw r23,24(r3)
	PPC_STORE_U32(ctx.r3.u32 + 24, ctx.r23.u32);
	// stb r31,28(r3)
	PPC_STORE_U8(ctx.r3.u32 + 28, ctx.r31.u8);
	// stb r31,29(r3)
	PPC_STORE_U8(ctx.r3.u32 + 29, ctx.r31.u8);
	// stw r31,32(r3)
	PPC_STORE_U32(ctx.r3.u32 + 32, ctx.r31.u32);
	// stw r31,36(r3)
	PPC_STORE_U32(ctx.r3.u32 + 36, ctx.r31.u32);
	// b 0x8313e7f8
	goto loc_8313E7F8;
loc_8313E7F4:
	// mr r29,r30
	ctx.r29.u64 = ctx.r30.u64;
loc_8313E7F8:
	// cmpwi cr6,r26,1
	ctx.cr6.compare<int32_t>(ctx.r26.s32, 1, ctx.xer);
	// ble cr6,0x8313e85c
	if (!ctx.cr6.gt) goto loc_8313E85C;
	// addi r26,r26,-1
	ctx.r26.s64 = ctx.r26.s64 + -1;
loc_8313E804:
	// li r3,40
	ctx.r3.s64 = 40;
	// lwz r4,104(r28)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r28.u32 + 104);
	// bl 0x830dd390
	ctx.lr = 0x8313E810;
	sub_830DD390(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8313e850
	if (ctx.cr0.eq) goto loc_8313E850;
	// lwz r11,104(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 104);
	// stw r29,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r29.u32);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// stw r27,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r27.u32);
	// stw r30,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r30.u32);
	// stw r25,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r25.u32);
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// stw r30,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r30.u32);
	// stw r23,24(r3)
	PPC_STORE_U32(ctx.r3.u32 + 24, ctx.r23.u32);
	// stb r31,28(r3)
	PPC_STORE_U8(ctx.r3.u32 + 28, ctx.r31.u8);
	// stb r30,29(r3)
	PPC_STORE_U8(ctx.r3.u32 + 29, ctx.r30.u8);
	// stw r31,32(r3)
	PPC_STORE_U32(ctx.r3.u32 + 32, ctx.r31.u32);
	// stw r31,36(r3)
	PPC_STORE_U32(ctx.r3.u32 + 36, ctx.r31.u32);
	// b 0x8313e854
	goto loc_8313E854;
loc_8313E850:
	// mr r29,r30
	ctx.r29.u64 = ctx.r30.u64;
loc_8313E854:
	// addic. r26,r26,-1
	ctx.xer.ca = ctx.r26.u32 > 0;
	ctx.r26.s64 = ctx.r26.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r26.s32, 0, ctx.xer);
	// bne 0x8313e804
	if (!ctx.cr0.eq) goto loc_8313E804;
loc_8313E85C:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
loc_8313E860:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x833a01dc
	__restgprlr_21(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8313E868"))) PPC_WEAK_FUNC(sub_8313E868);
PPC_FUNC_IMPL(__imp__sub_8313E868) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x833a01ac
	ctx.lr = 0x8313E870;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r3,104(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 104);
	// lwz r11,40(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// rlwinm r30,r11,1,0,30
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// rlwinm r4,r30,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8313E898;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r10,40(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// li r11,0
	ctx.r11.s64 = 0;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// ble cr6,0x8313e8d0
	if (!ctx.cr6.gt) goto loc_8313E8D0;
	// li r10,0
	ctx.r10.s64 = 0;
loc_8313E8B0:
	// lwz r9,96(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 96);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// lwzx r9,r9,r10
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r10.u32);
	// stwx r9,r10,r29
	PPC_STORE_U32(ctx.r10.u32 + ctx.r29.u32, ctx.r9.u32);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// lwz r9,40(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// blt cr6,0x8313e8b0
	if (ctx.cr6.lt) goto loc_8313E8B0;
loc_8313E8D0:
	// cmplw cr6,r11,r30
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r30.u32, ctx.xer);
	// bge cr6,0x8313e8fc
	if (!ctx.cr6.lt) goto loc_8313E8FC;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// subf. r11,r11,r30
	ctx.r11.s64 = ctx.r30.s64 - ctx.r11.s64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// add r10,r10,r29
	ctx.r10.u64 = ctx.r10.u64 + ctx.r29.u64;
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r10,r10,-4
	ctx.r10.s64 = ctx.r10.s64 + -4;
	// beq 0x8313e8fc
	if (ctx.cr0.eq) goto loc_8313E8FC;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
loc_8313E8F4:
	// stwu r9,4(r10)
	ea = 4 + ctx.r10.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r10.u32 = ea;
	// bdnz 0x8313e8f4
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8313E8F4;
loc_8313E8FC:
	// lwz r3,104(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 104);
	// lwz r4,96(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 96);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8313E914;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r29,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r29.u32);
	// stw r30,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r30.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x833a01fc
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8313E924"))) PPC_WEAK_FUNC(sub_8313E924);
PPC_FUNC_IMPL(__imp__sub_8313E924) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8313E928"))) PPC_WEAK_FUNC(sub_8313E928);
PPC_FUNC_IMPL(__imp__sub_8313E928) {
	PPC_FUNC_PROLOGUE();
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8313E930"))) PPC_WEAK_FUNC(sub_8313E930);
PPC_FUNC_IMPL(__imp__sub_8313E930) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31846
	ctx.r11.s64 = -2087059456;
	// addi r3,r11,24576
	ctx.r3.s64 = ctx.r11.s64 + 24576;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8313E93C"))) PPC_WEAK_FUNC(sub_8313E93C);
PPC_FUNC_IMPL(__imp__sub_8313E93C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8313E940"))) PPC_WEAK_FUNC(sub_8313E940);
PPC_FUNC_IMPL(__imp__sub_8313E940) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32228
	ctx.r11.s64 = -2112094208;
	// addi r11,r11,19412
	ctx.r11.s64 = ctx.r11.s64 + 19412;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8313E950"))) PPC_WEAK_FUNC(sub_8313E950);
PPC_FUNC_IMPL(__imp__sub_8313E950) {
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
	// bl 0x8313d838
	ctx.lr = 0x8313E970;
	sub_8313D838(ctx, base);
	// clrlwi. r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8313e980
	if (ctx.cr0.eq) goto loc_8313E980;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x830dd3e0
	ctx.lr = 0x8313E980;
	sub_830DD3E0(ctx, base);
loc_8313E980:
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

__attribute__((alias("__imp__sub_8313E99C"))) PPC_WEAK_FUNC(sub_8313E99C);
PPC_FUNC_IMPL(__imp__sub_8313E99C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8313E9A0"))) PPC_WEAK_FUNC(sub_8313E9A0);
PPC_FUNC_IMPL(__imp__sub_8313E9A0) {
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
	// bl 0x8313dc28
	ctx.lr = 0x8313E9C0;
	sub_8313DC28(ctx, base);
	// clrlwi. r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8313e9d0
	if (ctx.cr0.eq) goto loc_8313E9D0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x830dd3e0
	ctx.lr = 0x8313E9D0;
	sub_830DD3E0(ctx, base);
loc_8313E9D0:
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

__attribute__((alias("__imp__sub_8313E9EC"))) PPC_WEAK_FUNC(sub_8313E9EC);
PPC_FUNC_IMPL(__imp__sub_8313E9EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8313E9F0"))) PPC_WEAK_FUNC(sub_8313E9F0);
PPC_FUNC_IMPL(__imp__sub_8313E9F0) {
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
	// lis r30,-31827
	ctx.r30.s64 = -2085814272;
	// lwz r3,-4664(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + -4664);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8313ea28
	if (ctx.cr6.eq) goto loc_8313EA28;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8313EA28;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8313EA28:
	// lis r10,-31827
	ctx.r10.s64 = -2085814272;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r31,r10,-4672
	ctx.r31.s64 = ctx.r10.s64 + -4672;
	// stw r11,-4664(r30)
	PPC_STORE_U32(ctx.r30.u32 + -4664, ctx.r11.u32);
	// lwz r30,4(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x8313ea54
	if (ctx.cr6.eq) goto loc_8313EA54;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x830fcf30
	ctx.lr = 0x8313EA4C;
	sub_830FCF30(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x830dd3e0
	ctx.lr = 0x8313EA54;
	sub_830DD3E0(ctx, base);
loc_8313EA54:
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// stb r10,0(r31)
	PPC_STORE_U8(ctx.r31.u32 + 0, ctx.r10.u8);
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

__attribute__((alias("__imp__sub_8313EA7C"))) PPC_WEAK_FUNC(sub_8313EA7C);
PPC_FUNC_IMPL(__imp__sub_8313EA7C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8313EA80"))) PPC_WEAK_FUNC(sub_8313EA80);
PPC_FUNC_IMPL(__imp__sub_8313EA80) {
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
	// lwz r11,92(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 92);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8313eaa8
	if (!ctx.cr6.eq) goto loc_8313EAA8;
	// bl 0x8313ddb8
	ctx.lr = 0x8313EAA4;
	sub_8313DDB8(ctx, base);
	// stw r3,92(r31)
	PPC_STORE_U32(ctx.r31.u32 + 92, ctx.r3.u32);
loc_8313EAA8:
	// lwz r3,92(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 92);
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

__attribute__((alias("__imp__sub_8313EAC0"))) PPC_WEAK_FUNC(sub_8313EAC0);
PPC_FUNC_IMPL(__imp__sub_8313EAC0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lwz r25,17952(r26)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r26.u32 + 17952);
	// lwz r16,4216(r29)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4216);
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x833a01ac
	ctx.lr = 0x8313EAD0;
	__savegprlr_29(ctx, base);
	// addi r31,r1,-160
	ctx.r31.s64 = ctx.r1.s64 + -160;
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,28(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 28);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// stw r3,180(r31)
	PPC_STORE_U32(ctx.r31.u32 + 180, ctx.r3.u32);
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// cmpwi cr6,r11,5
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 5, ctx.xer);
	// beq cr6,0x8313eb30
	if (ctx.cr6.eq) goto loc_8313EB30;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// bne cr6,0x8313eb38
	if (!ctx.cr6.eq) goto loc_8313EB38;
	// li r3,24
	ctx.r3.s64 = 24;
	// lwz r4,104(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 104);
	// bl 0x830dd390
	ctx.lr = 0x8313EB08;
	sub_830DD390(ctx, base);
	// stw r3,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r3.u32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8313eb2c
	if (ctx.cr0.eq) goto loc_8313EB2C;
	// li r6,0
	ctx.r6.s64 = 0;
	// lwz r7,104(r30)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r30.u32 + 104);
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x83197090
	ctx.lr = 0x8313EB28;
	sub_83197090(ctx, base);
	// b 0x8313eb30
	goto loc_8313EB30;
loc_8313EB2C:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8313EB30:
	// addi r1,r31,160
	ctx.r1.s64 = ctx.r31.s64 + 160;
	// b 0x833a01fc
	__restgprlr_29(ctx, base);
	return;
loc_8313EB38:
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bne cr6,0x8313eb50
	if (!ctx.cr6.eq) goto loc_8313EB50;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// b 0x8313eb64
	goto loc_8313EB64;
loc_8313EB50:
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// bne cr6,0x8313eb6c
	if (!ctx.cr6.eq) goto loc_8313EB6C;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
loc_8313EB64:
	// bl 0x8313dea8
	ctx.lr = 0x8313EB68;
	sub_8313DEA8(ctx, base);
	// b 0x8313eb30
	goto loc_8313EB30;
loc_8313EB6C:
	// lis r11,-32227
	ctx.r11.s64 = -2112028672;
	// lwz r7,104(r30)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r30.u32 + 104);
	// li r6,17
	ctx.r6.s64 = 17;
	// addi r4,r11,3872
	ctx.r4.s64 = ctx.r11.s64 + 3872;
	// li r5,438
	ctx.r5.s64 = 438;
	// addi r3,r31,96
	ctx.r3.s64 = ctx.r31.s64 + 96;
	// bl 0x830d5dc0
	ctx.lr = 0x8313EB88;
	sub_830D5DC0(ctx, base);
	// lis r11,-32194
	ctx.r11.s64 = -2109865984;
	// addi r3,r31,96
	ctx.r3.s64 = ctx.r31.s64 + 96;
	// addi r4,r11,-28596
	ctx.r4.s64 = ctx.r11.s64 + -28596;
	// bl 0x833a7198
	ctx.lr = 0x8313EB98;
	sub_833A7198(ctx, base);
	// addi r31,r12,-160
	ctx.r31.s64 = ctx.r12.s64 + -160;
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,180(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 180);
	// lwz r4,104(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 104);
	// lwz r3,80(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	// bl 0x830dd3e0
	ctx.lr = 0x8313EBB8;
	sub_830DD3E0(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8313EAC8"))) PPC_WEAK_FUNC(sub_8313EAC8);
PPC_FUNC_IMPL(__imp__sub_8313EAC8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x833a01ac
	ctx.lr = 0x8313EAD0;
	__savegprlr_29(ctx, base);
	// addi r31,r1,-160
	ctx.r31.s64 = ctx.r1.s64 + -160;
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,28(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 28);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// stw r3,180(r31)
	PPC_STORE_U32(ctx.r31.u32 + 180, ctx.r3.u32);
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// cmpwi cr6,r11,5
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 5, ctx.xer);
	// beq cr6,0x8313eb30
	if (ctx.cr6.eq) goto loc_8313EB30;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// bne cr6,0x8313eb38
	if (!ctx.cr6.eq) goto loc_8313EB38;
	// li r3,24
	ctx.r3.s64 = 24;
	// lwz r4,104(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 104);
	// bl 0x830dd390
	ctx.lr = 0x8313EB08;
	sub_830DD390(ctx, base);
	// stw r3,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r3.u32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8313eb2c
	if (ctx.cr0.eq) goto loc_8313EB2C;
	// li r6,0
	ctx.r6.s64 = 0;
	// lwz r7,104(r30)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r30.u32 + 104);
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x83197090
	ctx.lr = 0x8313EB28;
	sub_83197090(ctx, base);
	// b 0x8313eb30
	goto loc_8313EB30;
loc_8313EB2C:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8313EB30:
	// addi r1,r31,160
	ctx.r1.s64 = ctx.r31.s64 + 160;
	// b 0x833a01fc
	__restgprlr_29(ctx, base);
	return;
loc_8313EB38:
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bne cr6,0x8313eb50
	if (!ctx.cr6.eq) goto loc_8313EB50;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// b 0x8313eb64
	goto loc_8313EB64;
loc_8313EB50:
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// bne cr6,0x8313eb6c
	if (!ctx.cr6.eq) goto loc_8313EB6C;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
loc_8313EB64:
	// bl 0x8313dea8
	ctx.lr = 0x8313EB68;
	sub_8313DEA8(ctx, base);
	// b 0x8313eb30
	goto loc_8313EB30;
loc_8313EB6C:
	// lis r11,-32227
	ctx.r11.s64 = -2112028672;
	// lwz r7,104(r30)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r30.u32 + 104);
	// li r6,17
	ctx.r6.s64 = 17;
	// addi r4,r11,3872
	ctx.r4.s64 = ctx.r11.s64 + 3872;
	// li r5,438
	ctx.r5.s64 = 438;
	// addi r3,r31,96
	ctx.r3.s64 = ctx.r31.s64 + 96;
	// bl 0x830d5dc0
	ctx.lr = 0x8313EB88;
	sub_830D5DC0(ctx, base);
	// lis r11,-32194
	ctx.r11.s64 = -2109865984;
	// addi r3,r31,96
	ctx.r3.s64 = ctx.r31.s64 + 96;
	// addi r4,r11,-28596
	ctx.r4.s64 = ctx.r11.s64 + -28596;
	// bl 0x833a7198
	ctx.lr = 0x8313EB98;
	sub_833A7198(ctx, base);
}

__attribute__((alias("__imp__sub_8313EB98"))) PPC_WEAK_FUNC(sub_8313EB98);
PPC_FUNC_IMPL(__imp__sub_8313EB98) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// addi r31,r12,-160
	ctx.r31.s64 = ctx.r12.s64 + -160;
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,180(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 180);
	// lwz r4,104(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 104);
	// lwz r3,80(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	// bl 0x830dd3e0
	ctx.lr = 0x8313EBB8;
	sub_830DD3E0(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8313EBC8"))) PPC_WEAK_FUNC(sub_8313EBC8);
PPC_FUNC_IMPL(__imp__sub_8313EBC8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x833a0194
	ctx.lr = 0x8313EBD0;
	__savegprlr_23(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r23,r5
	ctx.r23.u64 = ctx.r5.u64;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// bne cr6,0x8313ebf0
	if (!ctx.cr6.eq) goto loc_8313EBF0;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x8313ed58
	goto loc_8313ED58;
loc_8313EBF0:
	// lwz r29,24(r31)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// clrlwi. r11,r23,24
	ctx.r11.u64 = ctx.r23.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8313ec50
	if (ctx.cr0.eq) goto loc_8313EC50;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8313ec50
	if (ctx.cr6.eq) goto loc_8313EC50;
	// lwz r11,40(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 40);
	// lwz r10,36(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 36);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x8313ec20
	if (!ctx.cr6.eq) goto loc_8313EC20;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8313e868
	ctx.lr = 0x8313EC20;
	sub_8313E868(ctx, base);
loc_8313EC20:
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r10,36(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 36);
	// lwz r9,96(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 96);
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r11,16(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// stwx r11,r10,r9
	PPC_STORE_U32(ctx.r10.u32 + ctx.r9.u32, ctx.r11.u32);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r10,36(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 36);
	// stw r10,16(r11)
	PPC_STORE_U32(ctx.r11.u32 + 16, ctx.r10.u32);
	// lwz r11,36(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 36);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,36(r30)
	PPC_STORE_U32(ctx.r30.u32 + 36, ctx.r11.u32);
loc_8313EC50:
	// clrlwi r11,r29,28
	ctx.r11.u64 = ctx.r29.u32 & 0xF;
	// lwz r25,32(r31)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// lwz r24,36(r31)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmpwi cr6,r11,6
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 6, ctx.xer);
	// beq cr6,0x8313ed44
	if (ctx.cr6.eq) goto loc_8313ED44;
	// cmpwi cr6,r11,7
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 7, ctx.xer);
	// beq cr6,0x8313ed44
	if (ctx.cr6.eq) goto loc_8313ED44;
	// cmpwi cr6,r11,8
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 8, ctx.xer);
	// beq cr6,0x8313ed44
	if (ctx.cr6.eq) goto loc_8313ED44;
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// beq cr6,0x8313ed44
	if (ctx.cr6.eq) goto loc_8313ED44;
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// beq cr6,0x8313ec98
	if (ctx.cr6.eq) goto loc_8313EC98;
	// cmpwi cr6,r29,9
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 9, ctx.xer);
	// beq cr6,0x8313ec98
	if (ctx.cr6.eq) goto loc_8313EC98;
	// cmpwi cr6,r11,5
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 5, ctx.xer);
	// bne cr6,0x8313ed58
	if (!ctx.cr6.eq) goto loc_8313ED58;
loc_8313EC98:
	// lwz r29,16(r31)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// mr r5,r23
	ctx.r5.u64 = ctx.r23.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x8313ebc8
	ctx.lr = 0x8313ECAC;
	sub_8313EBC8(ctx, base);
	// lwz r28,20(r31)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// bne cr6,0x8313ecf8
	if (!ctx.cr6.eq) goto loc_8313ECF8;
	// mr r6,r24
	ctx.r6.u64 = ctx.r24.u64;
	// mr r5,r25
	ctx.r5.u64 = ctx.r25.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8313e3a0
	ctx.lr = 0x8313ECCC;
	sub_8313E3A0(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// stb r11,28(r31)
	PPC_STORE_U8(ctx.r31.u32 + 28, ctx.r11.u8);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8313ECF0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// b 0x8313ed58
	goto loc_8313ED58;
loc_8313ECF8:
	// li r26,0
	ctx.r26.s64 = 0;
	// li r27,1
	ctx.r27.s64 = 1;
	// cmplw cr6,r4,r29
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r29.u32, ctx.xer);
	// beq cr6,0x8313ed18
	if (ctx.cr6.eq) goto loc_8313ED18;
	// stb r26,28(r31)
	PPC_STORE_U8(ctx.r31.u32 + 28, ctx.r26.u8);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8313d928
	ctx.lr = 0x8313ED14;
	sub_8313D928(ctx, base);
	// stb r27,28(r31)
	PPC_STORE_U8(ctx.r31.u32 + 28, ctx.r27.u8);
loc_8313ED18:
	// mr r5,r23
	ctx.r5.u64 = ctx.r23.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8313ebc8
	ctx.lr = 0x8313ED28;
	sub_8313EBC8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// cmplw cr6,r3,r28
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r28.u32, ctx.xer);
	// beq cr6,0x8313ed44
	if (ctx.cr6.eq) goto loc_8313ED44;
	// stb r26,29(r31)
	PPC_STORE_U8(ctx.r31.u32 + 29, ctx.r26.u8);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8313d990
	ctx.lr = 0x8313ED40;
	sub_8313D990(ctx, base);
	// stb r27,29(r31)
	PPC_STORE_U8(ctx.r31.u32 + 29, ctx.r27.u8);
loc_8313ED44:
	// mr r6,r24
	ctx.r6.u64 = ctx.r24.u64;
	// mr r5,r25
	ctx.r5.u64 = ctx.r25.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8313e3a0
	ctx.lr = 0x8313ED58;
	sub_8313E3A0(ctx, base);
loc_8313ED58:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x833a01e4
	__restgprlr_23(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8313ED60"))) PPC_WEAK_FUNC(sub_8313ED60);
PPC_FUNC_IMPL(__imp__sub_8313ED60) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lwz r25,17952(r26)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r26.u32 + 17952);
	// lwz r16,4312(r29)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4312);
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// addi r31,r1,-128
	ctx.r31.s64 = ctx.r1.s64 + -128;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// stw r3,148(r31)
	PPC_STORE_U32(ctx.r31.u32 + 148, ctx.r3.u32);
	// mr r7,r6
	ctx.r7.u64 = ctx.r6.u64;
	// lis r10,-32227
	ctx.r10.s64 = -2112028672;
	// li r11,0
	ctx.r11.s64 = 0;
	// stb r5,4(r3)
	PPC_STORE_U8(ctx.r3.u32 + 4, ctx.r5.u8);
	// addi r10,r10,4288
	ctx.r10.s64 = ctx.r10.s64 + 4288;
	// stw r4,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r4.u32);
	// li r9,-1
	ctx.r9.s64 = -1;
	// stw r6,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r6.u32);
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// stw r9,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r9.u32);
	// stw r11,24(r3)
	PPC_STORE_U32(ctx.r3.u32 + 24, ctx.r11.u32);
	// bne cr6,0x8313ede8
	if (!ctx.cr6.eq) goto loc_8313EDE8;
	// lis r11,-32228
	ctx.r11.s64 = -2112094208;
	// li r6,15
	ctx.r6.s64 = 15;
	// addi r4,r11,5348
	ctx.r4.s64 = ctx.r11.s64 + 5348;
	// li r5,522
	ctx.r5.s64 = 522;
	// addi r3,r31,80
	ctx.r3.s64 = ctx.r31.s64 + 80;
	// bl 0x830e6218
	ctx.lr = 0x8313EDD8;
	sub_830E6218(ctx, base);
	// lis r11,-32194
	ctx.r11.s64 = -2109865984;
	// addi r3,r31,80
	ctx.r3.s64 = ctx.r31.s64 + 80;
	// addi r4,r11,-27980
	ctx.r4.s64 = ctx.r11.s64 + -27980;
	// bl 0x833a7198
	ctx.lr = 0x8313EDE8;
	sub_833A7198(ctx, base);
loc_8313EDE8:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8315d720
	ctx.lr = 0x8313EDF0;
	sub_8315D720(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r31,128
	ctx.r1.s64 = ctx.r31.s64 + 128;
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

__attribute__((alias("__imp__sub_8313ED68"))) PPC_WEAK_FUNC(sub_8313ED68);
PPC_FUNC_IMPL(__imp__sub_8313ED68) {
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
	// addi r31,r1,-128
	ctx.r31.s64 = ctx.r1.s64 + -128;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// stw r3,148(r31)
	PPC_STORE_U32(ctx.r31.u32 + 148, ctx.r3.u32);
	// mr r7,r6
	ctx.r7.u64 = ctx.r6.u64;
	// lis r10,-32227
	ctx.r10.s64 = -2112028672;
	// li r11,0
	ctx.r11.s64 = 0;
	// stb r5,4(r3)
	PPC_STORE_U8(ctx.r3.u32 + 4, ctx.r5.u8);
	// addi r10,r10,4288
	ctx.r10.s64 = ctx.r10.s64 + 4288;
	// stw r4,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r4.u32);
	// li r9,-1
	ctx.r9.s64 = -1;
	// stw r6,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r6.u32);
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// stw r9,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r9.u32);
	// stw r11,24(r3)
	PPC_STORE_U32(ctx.r3.u32 + 24, ctx.r11.u32);
	// bne cr6,0x8313ede8
	if (!ctx.cr6.eq) goto loc_8313EDE8;
	// lis r11,-32228
	ctx.r11.s64 = -2112094208;
	// li r6,15
	ctx.r6.s64 = 15;
	// addi r4,r11,5348
	ctx.r4.s64 = ctx.r11.s64 + 5348;
	// li r5,522
	ctx.r5.s64 = 522;
	// addi r3,r31,80
	ctx.r3.s64 = ctx.r31.s64 + 80;
	// bl 0x830e6218
	ctx.lr = 0x8313EDD8;
	sub_830E6218(ctx, base);
	// lis r11,-32194
	ctx.r11.s64 = -2109865984;
	// addi r3,r31,80
	ctx.r3.s64 = ctx.r31.s64 + 80;
	// addi r4,r11,-27980
	ctx.r4.s64 = ctx.r11.s64 + -27980;
	// bl 0x833a7198
	ctx.lr = 0x8313EDE8;
	sub_833A7198(ctx, base);
loc_8313EDE8:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8315d720
	ctx.lr = 0x8313EDF0;
	sub_8315D720(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r31,128
	ctx.r1.s64 = ctx.r31.s64 + 128;
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

__attribute__((alias("__imp__sub_8313EE0C"))) PPC_WEAK_FUNC(sub_8313EE0C);
PPC_FUNC_IMPL(__imp__sub_8313EE0C) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// addi r31,r12,-128
	ctx.r31.s64 = ctx.r12.s64 + -128;
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r3,148(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 148);
	// bl 0x8313e940
	ctx.lr = 0x8313EE24;
	sub_8313E940(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8313EE34"))) PPC_WEAK_FUNC(sub_8313EE34);
PPC_FUNC_IMPL(__imp__sub_8313EE34) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8313EE38"))) PPC_WEAK_FUNC(sub_8313EE38);
PPC_FUNC_IMPL(__imp__sub_8313EE38) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lwz r25,17952(r26)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r26.u32 + 17952);
	// lwz r16,4400(r29)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4400);
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x833a01ac
	ctx.lr = 0x8313EE48;
	__savegprlr_29(ctx, base);
	// addi r31,r1,-128
	ctx.r31.s64 = ctx.r1.s64 + -128;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// stw r3,148(r31)
	PPC_STORE_U32(ctx.r31.u32 + 148, ctx.r3.u32);
	// lis r11,-32227
	ctx.r11.s64 = -2112028672;
	// lis r10,-32222
	ctx.r10.s64 = -2111700992;
	// li r29,0
	ctx.r29.s64 = 0;
	// addi r11,r11,4360
	ctx.r11.s64 = ctx.r11.s64 + 4360;
	// li r9,1
	ctx.r9.s64 = 1;
	// stb r29,4(r3)
	PPC_STORE_U8(ctx.r3.u32 + 4, ctx.r29.u8);
	// li r8,-2
	ctx.r8.s64 = -2;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// li r7,16
	ctx.r7.s64 = 16;
	// stb r29,5(r3)
	PPC_STORE_U8(ctx.r3.u32 + 5, ctx.r29.u8);
	// stb r9,6(r3)
	PPC_STORE_U8(ctx.r3.u32 + 6, ctx.r9.u8);
	// li r3,24
	ctx.r3.s64 = 24;
	// stb r29,7(r30)
	PPC_STORE_U8(ctx.r30.u32 + 7, ctx.r29.u8);
	// stb r29,8(r30)
	PPC_STORE_U8(ctx.r30.u32 + 8, ctx.r29.u8);
	// stw r29,12(r30)
	PPC_STORE_U32(ctx.r30.u32 + 12, ctx.r29.u32);
	// stw r29,16(r30)
	PPC_STORE_U32(ctx.r30.u32 + 16, ctx.r29.u32);
	// stw r29,20(r30)
	PPC_STORE_U32(ctx.r30.u32 + 20, ctx.r29.u32);
	// stw r8,24(r30)
	PPC_STORE_U32(ctx.r30.u32 + 24, ctx.r8.u32);
	// stw r29,28(r30)
	PPC_STORE_U32(ctx.r30.u32 + 28, ctx.r29.u32);
	// lwz r11,32564(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 32564);
	// stw r4,104(r30)
	PPC_STORE_U32(ctx.r30.u32 + 104, ctx.r4.u32);
	// stw r29,36(r30)
	PPC_STORE_U32(ctx.r30.u32 + 36, ctx.r29.u32);
	// stw r7,40(r30)
	PPC_STORE_U32(ctx.r30.u32 + 40, ctx.r7.u32);
	// stw r29,44(r30)
	PPC_STORE_U32(ctx.r30.u32 + 44, ctx.r29.u32);
	// stw r11,32(r30)
	PPC_STORE_U32(ctx.r30.u32 + 32, ctx.r11.u32);
	// stw r29,48(r30)
	PPC_STORE_U32(ctx.r30.u32 + 48, ctx.r29.u32);
	// stw r29,52(r30)
	PPC_STORE_U32(ctx.r30.u32 + 52, ctx.r29.u32);
	// stw r29,56(r30)
	PPC_STORE_U32(ctx.r30.u32 + 56, ctx.r29.u32);
	// stw r29,60(r30)
	PPC_STORE_U32(ctx.r30.u32 + 60, ctx.r29.u32);
	// stw r29,64(r30)
	PPC_STORE_U32(ctx.r30.u32 + 64, ctx.r29.u32);
	// stw r29,68(r30)
	PPC_STORE_U32(ctx.r30.u32 + 68, ctx.r29.u32);
	// stw r29,72(r30)
	PPC_STORE_U32(ctx.r30.u32 + 72, ctx.r29.u32);
	// stw r29,76(r30)
	PPC_STORE_U32(ctx.r30.u32 + 76, ctx.r29.u32);
	// stw r29,80(r30)
	PPC_STORE_U32(ctx.r30.u32 + 80, ctx.r29.u32);
	// stw r29,84(r30)
	PPC_STORE_U32(ctx.r30.u32 + 84, ctx.r29.u32);
	// stw r29,88(r30)
	PPC_STORE_U32(ctx.r30.u32 + 88, ctx.r29.u32);
	// stw r29,92(r30)
	PPC_STORE_U32(ctx.r30.u32 + 92, ctx.r29.u32);
	// stw r29,96(r30)
	PPC_STORE_U32(ctx.r30.u32 + 96, ctx.r29.u32);
	// stw r29,100(r30)
	PPC_STORE_U32(ctx.r30.u32 + 100, ctx.r29.u32);
	// bl 0x830dd390
	ctx.lr = 0x8313EEF8;
	sub_830DD390(ctx, base);
	// stw r3,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r3.u32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8313ef18
	if (ctx.cr0.eq) goto loc_8313EF18;
	// li r5,1
	ctx.r5.s64 = 1;
	// lwz r6,104(r30)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r30.u32 + 104);
	// li r4,29
	ctx.r4.s64 = 29;
	// bl 0x8317af00
	ctx.lr = 0x8313EF14;
	sub_8317AF00(ctx, base);
	// b 0x8313ef1c
	goto loc_8313EF1C;
loc_8313EF18:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
loc_8313EF1C:
	// stw r3,84(r30)
	PPC_STORE_U32(ctx.r30.u32 + 84, ctx.r3.u32);
	// li r3,28
	ctx.r3.s64 = 28;
	// lwz r4,104(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 104);
	// bl 0x830dd390
	ctx.lr = 0x8313EF2C;
	sub_830DD390(ctx, base);
	// stw r3,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r3.u32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8313ef48
	if (ctx.cr0.eq) goto loc_8313EF48;
	// lwz r5,104(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + 104);
	// lwz r4,84(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 84);
	// bl 0x831920d0
	ctx.lr = 0x8313EF44;
	sub_831920D0(ctx, base);
	// b 0x8313ef4c
	goto loc_8313EF4C;
loc_8313EF48:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
loc_8313EF4C:
	// stw r3,76(r30)
	PPC_STORE_U32(ctx.r30.u32 + 76, ctx.r3.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r31,128
	ctx.r1.s64 = ctx.r31.s64 + 128;
	// b 0x833a01fc
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8313EE40"))) PPC_WEAK_FUNC(sub_8313EE40);
PPC_FUNC_IMPL(__imp__sub_8313EE40) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x833a01ac
	ctx.lr = 0x8313EE48;
	__savegprlr_29(ctx, base);
	// addi r31,r1,-128
	ctx.r31.s64 = ctx.r1.s64 + -128;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// stw r3,148(r31)
	PPC_STORE_U32(ctx.r31.u32 + 148, ctx.r3.u32);
	// lis r11,-32227
	ctx.r11.s64 = -2112028672;
	// lis r10,-32222
	ctx.r10.s64 = -2111700992;
	// li r29,0
	ctx.r29.s64 = 0;
	// addi r11,r11,4360
	ctx.r11.s64 = ctx.r11.s64 + 4360;
	// li r9,1
	ctx.r9.s64 = 1;
	// stb r29,4(r3)
	PPC_STORE_U8(ctx.r3.u32 + 4, ctx.r29.u8);
	// li r8,-2
	ctx.r8.s64 = -2;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// li r7,16
	ctx.r7.s64 = 16;
	// stb r29,5(r3)
	PPC_STORE_U8(ctx.r3.u32 + 5, ctx.r29.u8);
	// stb r9,6(r3)
	PPC_STORE_U8(ctx.r3.u32 + 6, ctx.r9.u8);
	// li r3,24
	ctx.r3.s64 = 24;
	// stb r29,7(r30)
	PPC_STORE_U8(ctx.r30.u32 + 7, ctx.r29.u8);
	// stb r29,8(r30)
	PPC_STORE_U8(ctx.r30.u32 + 8, ctx.r29.u8);
	// stw r29,12(r30)
	PPC_STORE_U32(ctx.r30.u32 + 12, ctx.r29.u32);
	// stw r29,16(r30)
	PPC_STORE_U32(ctx.r30.u32 + 16, ctx.r29.u32);
	// stw r29,20(r30)
	PPC_STORE_U32(ctx.r30.u32 + 20, ctx.r29.u32);
	// stw r8,24(r30)
	PPC_STORE_U32(ctx.r30.u32 + 24, ctx.r8.u32);
	// stw r29,28(r30)
	PPC_STORE_U32(ctx.r30.u32 + 28, ctx.r29.u32);
	// lwz r11,32564(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 32564);
	// stw r4,104(r30)
	PPC_STORE_U32(ctx.r30.u32 + 104, ctx.r4.u32);
	// stw r29,36(r30)
	PPC_STORE_U32(ctx.r30.u32 + 36, ctx.r29.u32);
	// stw r7,40(r30)
	PPC_STORE_U32(ctx.r30.u32 + 40, ctx.r7.u32);
	// stw r29,44(r30)
	PPC_STORE_U32(ctx.r30.u32 + 44, ctx.r29.u32);
	// stw r11,32(r30)
	PPC_STORE_U32(ctx.r30.u32 + 32, ctx.r11.u32);
	// stw r29,48(r30)
	PPC_STORE_U32(ctx.r30.u32 + 48, ctx.r29.u32);
	// stw r29,52(r30)
	PPC_STORE_U32(ctx.r30.u32 + 52, ctx.r29.u32);
	// stw r29,56(r30)
	PPC_STORE_U32(ctx.r30.u32 + 56, ctx.r29.u32);
	// stw r29,60(r30)
	PPC_STORE_U32(ctx.r30.u32 + 60, ctx.r29.u32);
	// stw r29,64(r30)
	PPC_STORE_U32(ctx.r30.u32 + 64, ctx.r29.u32);
	// stw r29,68(r30)
	PPC_STORE_U32(ctx.r30.u32 + 68, ctx.r29.u32);
	// stw r29,72(r30)
	PPC_STORE_U32(ctx.r30.u32 + 72, ctx.r29.u32);
	// stw r29,76(r30)
	PPC_STORE_U32(ctx.r30.u32 + 76, ctx.r29.u32);
	// stw r29,80(r30)
	PPC_STORE_U32(ctx.r30.u32 + 80, ctx.r29.u32);
	// stw r29,84(r30)
	PPC_STORE_U32(ctx.r30.u32 + 84, ctx.r29.u32);
	// stw r29,88(r30)
	PPC_STORE_U32(ctx.r30.u32 + 88, ctx.r29.u32);
	// stw r29,92(r30)
	PPC_STORE_U32(ctx.r30.u32 + 92, ctx.r29.u32);
	// stw r29,96(r30)
	PPC_STORE_U32(ctx.r30.u32 + 96, ctx.r29.u32);
	// stw r29,100(r30)
	PPC_STORE_U32(ctx.r30.u32 + 100, ctx.r29.u32);
	// bl 0x830dd390
	ctx.lr = 0x8313EEF8;
	sub_830DD390(ctx, base);
	// stw r3,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r3.u32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8313ef18
	if (ctx.cr0.eq) goto loc_8313EF18;
	// li r5,1
	ctx.r5.s64 = 1;
	// lwz r6,104(r30)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r30.u32 + 104);
	// li r4,29
	ctx.r4.s64 = 29;
	// bl 0x8317af00
	ctx.lr = 0x8313EF14;
	sub_8317AF00(ctx, base);
	// b 0x8313ef1c
	goto loc_8313EF1C;
loc_8313EF18:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
loc_8313EF1C:
	// stw r3,84(r30)
	PPC_STORE_U32(ctx.r30.u32 + 84, ctx.r3.u32);
	// li r3,28
	ctx.r3.s64 = 28;
	// lwz r4,104(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 104);
	// bl 0x830dd390
	ctx.lr = 0x8313EF2C;
	sub_830DD390(ctx, base);
	// stw r3,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r3.u32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8313ef48
	if (ctx.cr0.eq) goto loc_8313EF48;
	// lwz r5,104(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + 104);
	// lwz r4,84(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 84);
	// bl 0x831920d0
	ctx.lr = 0x8313EF44;
	sub_831920D0(ctx, base);
	// b 0x8313ef4c
	goto loc_8313EF4C;
loc_8313EF48:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
loc_8313EF4C:
	// stw r3,76(r30)
	PPC_STORE_U32(ctx.r30.u32 + 76, ctx.r3.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r31,128
	ctx.r1.s64 = ctx.r31.s64 + 128;
	// b 0x833a01fc
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8313EF5C"))) PPC_WEAK_FUNC(sub_8313EF5C);
PPC_FUNC_IMPL(__imp__sub_8313EF5C) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// addi r31,r12,-128
	ctx.r31.s64 = ctx.r12.s64 + -128;
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r3,148(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 148);
	// bl 0x8313e940
	ctx.lr = 0x8313EF74;
	sub_8313E940(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8313EF84"))) PPC_WEAK_FUNC(sub_8313EF84);
PPC_FUNC_IMPL(__imp__sub_8313EF84) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// addi r31,r12,-128
	ctx.r31.s64 = ctx.r12.s64 + -128;
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,148(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 148);
	// lwz r4,104(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 104);
	// lwz r3,80(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	// bl 0x830dd3e0
	ctx.lr = 0x8313EFA4;
	sub_830DD3E0(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8313EFB4"))) PPC_WEAK_FUNC(sub_8313EFB4);
PPC_FUNC_IMPL(__imp__sub_8313EFB4) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// addi r31,r12,-128
	ctx.r31.s64 = ctx.r12.s64 + -128;
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,148(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 148);
	// lwz r4,104(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 104);
	// lwz r3,80(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	// bl 0x830dd3e0
	ctx.lr = 0x8313EFD4;
	sub_830DD3E0(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8313EFE4"))) PPC_WEAK_FUNC(sub_8313EFE4);
PPC_FUNC_IMPL(__imp__sub_8313EFE4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8313EFE8"))) PPC_WEAK_FUNC(sub_8313EFE8);
PPC_FUNC_IMPL(__imp__sub_8313EFE8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lwz r25,17952(r26)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r26.u32 + 17952);
	// lwz r16,4488(r29)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4488);
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x833a01a8
	ctx.lr = 0x8313EFF8;
	__savegprlr_28(ctx, base);
	// addi r31,r1,-128
	ctx.r31.s64 = ctx.r1.s64 + -128;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// stw r3,148(r31)
	PPC_STORE_U32(ctx.r31.u32 + 148, ctx.r3.u32);
	// li r3,40
	ctx.r3.s64 = 40;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// lwz r4,104(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 104);
	// bl 0x830dd390
	ctx.lr = 0x8313F018;
	sub_830DD390(ctx, base);
	// stw r3,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r3.u32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8313f034
	if (ctx.cr0.eq) goto loc_8313F034;
	// lwz r4,68(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 68);
	// bl 0x831923d0
	ctx.lr = 0x8313F02C;
	sub_831923D0(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// b 0x8313f038
	goto loc_8313F038;
loc_8313F034:
	// li r29,0
	ctx.r29.s64 = 0;
loc_8313F038:
	// clrlwi. r11,r28,24
	ctx.r11.u64 = ctx.r28.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8313f060
	if (ctx.cr0.eq) goto loc_8313F060;
	// lwz r3,104(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 104);
	// lwz r11,40(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 40);
	// rlwinm r4,r11,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8313F05C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r3,96(r30)
	PPC_STORE_U32(ctx.r30.u32 + 96, ctx.r3.u32);
loc_8313F060:
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8313ebc8
	ctx.lr = 0x8313F070;
	sub_8313EBC8(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x8313eac8
	ctx.lr = 0x8313F080;
	sub_8313EAC8(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x8313f0a4
	if (ctx.cr6.eq) goto loc_8313F0A4;
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8313F0A4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8313F0A4:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r31,128
	ctx.r1.s64 = ctx.r31.s64 + 128;
	// b 0x833a01f8
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8313EFF0"))) PPC_WEAK_FUNC(sub_8313EFF0);
PPC_FUNC_IMPL(__imp__sub_8313EFF0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x833a01a8
	ctx.lr = 0x8313EFF8;
	__savegprlr_28(ctx, base);
	// addi r31,r1,-128
	ctx.r31.s64 = ctx.r1.s64 + -128;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// stw r3,148(r31)
	PPC_STORE_U32(ctx.r31.u32 + 148, ctx.r3.u32);
	// li r3,40
	ctx.r3.s64 = 40;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// lwz r4,104(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 104);
	// bl 0x830dd390
	ctx.lr = 0x8313F018;
	sub_830DD390(ctx, base);
	// stw r3,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r3.u32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8313f034
	if (ctx.cr0.eq) goto loc_8313F034;
	// lwz r4,68(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 68);
	// bl 0x831923d0
	ctx.lr = 0x8313F02C;
	sub_831923D0(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// b 0x8313f038
	goto loc_8313F038;
loc_8313F034:
	// li r29,0
	ctx.r29.s64 = 0;
loc_8313F038:
	// clrlwi. r11,r28,24
	ctx.r11.u64 = ctx.r28.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8313f060
	if (ctx.cr0.eq) goto loc_8313F060;
	// lwz r3,104(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 104);
	// lwz r11,40(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 40);
	// rlwinm r4,r11,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8313F05C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r3,96(r30)
	PPC_STORE_U32(ctx.r30.u32 + 96, ctx.r3.u32);
loc_8313F060:
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8313ebc8
	ctx.lr = 0x8313F070;
	sub_8313EBC8(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x8313eac8
	ctx.lr = 0x8313F080;
	sub_8313EAC8(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x8313f0a4
	if (ctx.cr6.eq) goto loc_8313F0A4;
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8313F0A4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8313F0A4:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r31,128
	ctx.r1.s64 = ctx.r31.s64 + 128;
	// b 0x833a01f8
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8313F0B0"))) PPC_WEAK_FUNC(sub_8313F0B0);
PPC_FUNC_IMPL(__imp__sub_8313F0B0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// addi r31,r12,-128
	ctx.r31.s64 = ctx.r12.s64 + -128;
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,148(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 148);
	// lwz r4,104(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 104);
	// lwz r3,80(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	// bl 0x830dd3e0
	ctx.lr = 0x8313F0D0;
	sub_830DD3E0(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8313F0E0"))) PPC_WEAK_FUNC(sub_8313F0E0);
PPC_FUNC_IMPL(__imp__sub_8313F0E0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lwz r25,17952(r26)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r26.u32 + 17952);
	// lwz r16,4560(r29)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4560);
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// addi r31,r1,-112
	ctx.r31.s64 = ctx.r1.s64 + -112;
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// stw r3,132(r31)
	PPC_STORE_U32(ctx.r31.u32 + 132, ctx.r3.u32);
	// li r3,108
	ctx.r3.s64 = 108;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x830dd390
	ctx.lr = 0x8313F114;
	sub_830DD390(ctx, base);
	// stw r3,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r3.u32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8313f12c
	if (ctx.cr0.eq) goto loc_8313F12C;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x8313ee40
	ctx.lr = 0x8313F128;
	sub_8313EE40(ctx, base);
	// b 0x8313f130
	goto loc_8313F130;
loc_8313F12C:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8313F130:
	// addi r1,r31,112
	ctx.r1.s64 = ctx.r31.s64 + 112;
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

__attribute__((alias("__imp__sub_8313F0E8"))) PPC_WEAK_FUNC(sub_8313F0E8);
PPC_FUNC_IMPL(__imp__sub_8313F0E8) {
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
	// addi r31,r1,-112
	ctx.r31.s64 = ctx.r1.s64 + -112;
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// stw r3,132(r31)
	PPC_STORE_U32(ctx.r31.u32 + 132, ctx.r3.u32);
	// li r3,108
	ctx.r3.s64 = 108;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x830dd390
	ctx.lr = 0x8313F114;
	sub_830DD390(ctx, base);
	// stw r3,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r3.u32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8313f12c
	if (ctx.cr0.eq) goto loc_8313F12C;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x8313ee40
	ctx.lr = 0x8313F128;
	sub_8313EE40(ctx, base);
	// b 0x8313f130
	goto loc_8313F130;
loc_8313F12C:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8313F130:
	// addi r1,r31,112
	ctx.r1.s64 = ctx.r31.s64 + 112;
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

__attribute__((alias("__imp__sub_8313F148"))) PPC_WEAK_FUNC(sub_8313F148);
PPC_FUNC_IMPL(__imp__sub_8313F148) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// addi r31,r12,-112
	ctx.r31.s64 = ctx.r12.s64 + -112;
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r4,132(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 132);
	// lwz r3,80(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	// bl 0x830dd3e0
	ctx.lr = 0x8313F164;
	sub_830DD3E0(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8313F174"))) PPC_WEAK_FUNC(sub_8313F174);
PPC_FUNC_IMPL(__imp__sub_8313F174) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8313F178"))) PPC_WEAK_FUNC(sub_8313F178);
PPC_FUNC_IMPL(__imp__sub_8313F178) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lwz r25,17952(r26)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r26.u32 + 17952);
	// lwz r16,4616(r29)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4616);
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x833a01ac
	ctx.lr = 0x8313F188;
	__savegprlr_29(ctx, base);
	// addi r31,r1,-112
	ctx.r31.s64 = ctx.r1.s64 + -112;
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32227
	ctx.r11.s64 = -2112028672;
	// stw r3,132(r31)
	PPC_STORE_U32(ctx.r31.u32 + 132, ctx.r3.u32);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// addi r11,r11,4288
	ctx.r11.s64 = ctx.r11.s64 + 4288;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// lbz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 4);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x8313f1cc
	if (ctx.cr0.eq) goto loc_8313F1CC;
	// lwz r30,16(r3)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x8313f1cc
	if (ctx.cr6.eq) goto loc_8313F1CC;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x830f2130
	ctx.lr = 0x8313F1C4;
	sub_830F2130(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x830dd3e0
	ctx.lr = 0x8313F1CC;
	sub_830DD3E0(ctx, base);
loc_8313F1CC:
	// lis r11,-32228
	ctx.r11.s64 = -2112094208;
	// addi r11,r11,19412
	ctx.r11.s64 = ctx.r11.s64 + 19412;
	// stw r11,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r11.u32);
	// addi r1,r31,112
	ctx.r1.s64 = ctx.r31.s64 + 112;
	// b 0x833a01fc
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8313F180"))) PPC_WEAK_FUNC(sub_8313F180);
PPC_FUNC_IMPL(__imp__sub_8313F180) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x833a01ac
	ctx.lr = 0x8313F188;
	__savegprlr_29(ctx, base);
	// addi r31,r1,-112
	ctx.r31.s64 = ctx.r1.s64 + -112;
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32227
	ctx.r11.s64 = -2112028672;
	// stw r3,132(r31)
	PPC_STORE_U32(ctx.r31.u32 + 132, ctx.r3.u32);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// addi r11,r11,4288
	ctx.r11.s64 = ctx.r11.s64 + 4288;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// lbz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 4);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x8313f1cc
	if (ctx.cr0.eq) goto loc_8313F1CC;
	// lwz r30,16(r3)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x8313f1cc
	if (ctx.cr6.eq) goto loc_8313F1CC;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x830f2130
	ctx.lr = 0x8313F1C4;
	sub_830F2130(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x830dd3e0
	ctx.lr = 0x8313F1CC;
	sub_830DD3E0(ctx, base);
loc_8313F1CC:
	// lis r11,-32228
	ctx.r11.s64 = -2112094208;
	// addi r11,r11,19412
	ctx.r11.s64 = ctx.r11.s64 + 19412;
	// stw r11,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r11.u32);
	// addi r1,r31,112
	ctx.r1.s64 = ctx.r31.s64 + 112;
	// b 0x833a01fc
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8313F1E0"))) PPC_WEAK_FUNC(sub_8313F1E0);
PPC_FUNC_IMPL(__imp__sub_8313F1E0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// addi r31,r12,-112
	ctx.r31.s64 = ctx.r12.s64 + -112;
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r3,132(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 132);
	// bl 0x8313e940
	ctx.lr = 0x8313F1F8;
	sub_8313E940(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8313F208"))) PPC_WEAK_FUNC(sub_8313F208);
PPC_FUNC_IMPL(__imp__sub_8313F208) {
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
	// bl 0x8313f180
	ctx.lr = 0x8313F228;
	sub_8313F180(ctx, base);
	// clrlwi. r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8313f238
	if (ctx.cr0.eq) goto loc_8313F238;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x830dd3e0
	ctx.lr = 0x8313F238;
	sub_830DD3E0(ctx, base);
loc_8313F238:
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

__attribute__((alias("__imp__sub_8313F254"))) PPC_WEAK_FUNC(sub_8313F254);
PPC_FUNC_IMPL(__imp__sub_8313F254) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8313F258"))) PPC_WEAK_FUNC(sub_8313F258);
PPC_FUNC_IMPL(__imp__sub_8313F258) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lwz r25,17952(r26)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r26.u32 + 17952);
	// lwz r16,4720(r29)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4720);
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x833a0190
	ctx.lr = 0x8313F268;
	__savegprlr_22(ctx, base);
	// addi r31,r1,-448
	ctx.r31.s64 = ctx.r1.s64 + -448;
	// stwu r1,-448(r1)
	ea = -448 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31827
	ctx.r11.s64 = -2085814272;
	// mr r22,r3
	ctx.r22.u64 = ctx.r3.u64;
	// addi r23,r11,-4672
	ctx.r23.s64 = ctx.r11.s64 + -4672;
	// lis r26,-31827
	ctx.r26.s64 = -2085814272;
	// lbz r11,-4672(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + -4672);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x8313f518
	if (!ctx.cr0.eq) goto loc_8313F518;
	// lwz r4,4(r23)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r23.u32 + 4);
	// lis r25,-31827
	ctx.r25.s64 = -2085814272;
	// li r24,0
	ctx.r24.s64 = 0;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// bne cr6,0x8313f2f0
	if (!ctx.cr6.eq) goto loc_8313F2F0;
	// lis r11,-31827
	ctx.r11.s64 = -2085814272;
	// addi r3,r31,80
	ctx.r3.s64 = ctx.r31.s64 + 80;
	// lwz r4,-5080(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + -5080);
	// bl 0x830fcf80
	ctx.lr = 0x8313F2B0;
	sub_830FCF80(ctx, base);
	// lwz r11,4(r23)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r23.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8313f2e4
	if (!ctx.cr6.eq) goto loc_8313F2E4;
	// li r3,4
	ctx.r3.s64 = 4;
	// bl 0x830dd340
	ctx.lr = 0x8313F2C4;
	sub_830DD340(ctx, base);
	// stw r3,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r3.u32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8313f2dc
	if (ctx.cr0.eq) goto loc_8313F2DC;
	// lwz r4,-5084(r25)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r25.u32 + -5084);
	// bl 0x830fcef0
	ctx.lr = 0x8313F2D8;
	sub_830FCEF0(ctx, base);
	// b 0x8313f2e0
	goto loc_8313F2E0;
loc_8313F2DC:
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
loc_8313F2E0:
	// stw r3,4(r23)
	PPC_STORE_U32(ctx.r23.u32 + 4, ctx.r3.u32);
loc_8313F2E4:
	// addi r3,r31,80
	ctx.r3.s64 = ctx.r31.s64 + 80;
	// bl 0x830fcfb8
	ctx.lr = 0x8313F2EC;
	sub_830FCFB8(ctx, base);
	// lwz r4,4(r23)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r23.u32 + 4);
loc_8313F2F0:
	// addi r3,r31,84
	ctx.r3.s64 = ctx.r31.s64 + 84;
	// bl 0x830fcf80
	ctx.lr = 0x8313F2F8;
	sub_830FCF80(ctx, base);
	// lbz r11,0(r23)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r23.u32 + 0);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x8313f510
	if (!ctx.cr0.eq) goto loc_8313F510;
	// lis r11,-32228
	ctx.r11.s64 = -2112094208;
	// addi r4,r11,14464
	ctx.r4.s64 = ctx.r11.s64 + 14464;
	// lhz r11,14464(r11)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r11.u32 + 14464);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x8313f33c
	if (ctx.cr0.eq) goto loc_8313F33C;
	// lhz r10,2(r4)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r4.u32 + 2);
	// addi r11,r4,2
	ctx.r11.s64 = ctx.r4.s64 + 2;
	// b 0x8313f328
	goto loc_8313F328;
loc_8313F324:
	// lhzu r10,2(r11)
	ea = 2 + ctx.r11.u32;
	ctx.r10.u64 = PPC_LOAD_U16(ea);
	ctx.r11.u32 = ea;
loc_8313F328:
	// cmplwi r10,0
	ctx.cr0.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne 0x8313f324
	if (!ctx.cr0.eq) goto loc_8313F324;
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// srawi r30,r11,1
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1) != 0);
	ctx.r30.s64 = ctx.r11.s32 >> 1;
	// b 0x8313f340
	goto loc_8313F340;
loc_8313F33C:
	// mr r30,r24
	ctx.r30.u64 = ctx.r24.u64;
loc_8313F340:
	// addi r3,r31,96
	ctx.r3.s64 = ctx.r31.s64 + 96;
	// bl 0x830d6950
	ctx.lr = 0x8313F348;
	sub_830D6950(ctx, base);
	// rlwinm r11,r30,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r9,r31,96
	ctx.r9.s64 = ctx.r31.s64 + 96;
	// li r8,44
	ctx.r8.s64 = 44;
	// addi r10,r31,98
	ctx.r10.s64 = ctx.r31.s64 + 98;
	// lis r7,-32228
	ctx.r7.s64 = -2112094208;
	// add r3,r11,r10
	ctx.r3.u64 = ctx.r11.u64 + ctx.r10.u64;
	// sthx r8,r11,r9
	PPC_STORE_U16(ctx.r11.u32 + ctx.r9.u32, ctx.r8.u16);
	// addi r4,r7,16828
	ctx.r4.s64 = ctx.r7.s64 + 16828;
	// bl 0x830d6950
	ctx.lr = 0x8313F36C;
	sub_830D6950(ctx, base);
	// li r3,108
	ctx.r3.s64 = 108;
	// bl 0x830dd340
	ctx.lr = 0x8313F374;
	sub_830DD340(ctx, base);
	// stw r3,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r3.u32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8313f390
	if (ctx.cr0.eq) goto loc_8313F390;
	// lwz r4,-5084(r25)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r25.u32 + -5084);
	// bl 0x8313ee40
	ctx.lr = 0x8313F388;
	sub_8313EE40(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// b 0x8313f394
	goto loc_8313F394;
loc_8313F390:
	// mr r11,r24
	ctx.r11.u64 = ctx.r24.u64;
loc_8313F394:
	// stw r11,-4664(r26)
	PPC_STORE_U32(ctx.r26.u32 + -4664, ctx.r11.u32);
	// li r3,40
	ctx.r3.s64 = 40;
	// bl 0x830dd340
	ctx.lr = 0x8313F3A0;
	sub_830DD340(ctx, base);
	// mr. r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// stw r30,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r30.u32);
	// lis r11,-32228
	ctx.r11.s64 = -2112094208;
	// addi r27,r11,-5740
	ctx.r27.s64 = ctx.r11.s64 + -5740;
	// beq 0x8313f400
	if (ctx.cr0.eq) goto loc_8313F400;
	// li r3,36
	ctx.r3.s64 = 36;
	// bl 0x830dd340
	ctx.lr = 0x8313F3BC;
	sub_830DD340(ctx, base);
	// stw r3,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r3.u32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8313f3e4
	if (ctx.cr0.eq) goto loc_8313F3E4;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// lwz r7,-5084(r25)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r25.u32 + -5084);
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r6,r22
	ctx.r6.u64 = ctx.r22.u64;
	// bl 0x830e3e60
	ctx.lr = 0x8313F3DC;
	sub_830E3E60(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// b 0x8313f3e8
	goto loc_8313F3E8;
loc_8313F3E4:
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
loc_8313F3E8:
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r6,-5084(r25)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r25.u32 + -5084);
	// bl 0x8313d730
	ctx.lr = 0x8313F3F8;
	sub_8313D730(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// b 0x8313f404
	goto loc_8313F404;
loc_8313F400:
	// mr r30,r24
	ctx.r30.u64 = ctx.r24.u64;
loc_8313F404:
	// li r11,22
	ctx.r11.s64 = 22;
	// li r10,-1
	ctx.r10.s64 = -1;
	// stw r24,32(r30)
	PPC_STORE_U32(ctx.r30.u32 + 32, ctx.r24.u32);
	// stw r11,24(r30)
	PPC_STORE_U32(ctx.r30.u32 + 24, ctx.r11.u32);
	// li r3,40
	ctx.r3.s64 = 40;
	// stw r10,36(r30)
	PPC_STORE_U32(ctx.r30.u32 + 36, ctx.r10.u32);
	// bl 0x830dd340
	ctx.lr = 0x8313F420;
	sub_830DD340(ctx, base);
	// li r29,1
	ctx.r29.s64 = 1;
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8313f470
	if (ctx.cr0.eq) goto loc_8313F470;
	// lwz r11,-5084(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + -5084);
	// lis r10,-32227
	ctx.r10.s64 = -2112028672;
	// li r9,21
	ctx.r9.s64 = 21;
	// stw r30,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r30.u32);
	// addi r10,r10,3412
	ctx.r10.s64 = ctx.r10.s64 + 3412;
	// stw r24,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r24.u32);
	// stw r24,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r24.u32);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// stw r24,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r24.u32);
	// stw r9,24(r3)
	PPC_STORE_U32(ctx.r3.u32 + 24, ctx.r9.u32);
	// stb r29,28(r3)
	PPC_STORE_U8(ctx.r3.u32 + 28, ctx.r29.u8);
	// stb r29,29(r3)
	PPC_STORE_U8(ctx.r3.u32 + 29, ctx.r29.u8);
	// stw r29,32(r3)
	PPC_STORE_U32(ctx.r3.u32 + 32, ctx.r29.u32);
	// stw r29,36(r3)
	PPC_STORE_U32(ctx.r3.u32 + 36, ctx.r29.u32);
	// b 0x8313f474
	goto loc_8313F474;
loc_8313F470:
	// mr r28,r24
	ctx.r28.u64 = ctx.r24.u64;
loc_8313F474:
	// li r3,76
	ctx.r3.s64 = 76;
	// bl 0x830dd340
	ctx.lr = 0x8313F47C;
	sub_830DD340(ctx, base);
	// stw r3,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r3.u32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8313f4ac
	if (ctx.cr0.eq) goto loc_8313F4AC;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// lwz r9,-5084(r25)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r25.u32 + -5084);
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// li r8,6
	ctx.r8.s64 = 6;
	// li r7,11
	ctx.r7.s64 = 11;
	// mr r6,r22
	ctx.r6.u64 = ctx.r22.u64;
	// bl 0x83191570
	ctx.lr = 0x8313F4A4;
	sub_83191570(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// b 0x8313f4b0
	goto loc_8313F4B0;
loc_8313F4AC:
	// mr r30,r24
	ctx.r30.u64 = ctx.r24.u64;
loc_8313F4B0:
	// addi r4,r31,96
	ctx.r4.s64 = ctx.r31.s64 + 96;
	// lwz r3,-4664(r26)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r26.u32 + -4664);
	// bl 0x8313d508
	ctx.lr = 0x8313F4BC;
	sub_8313D508(ctx, base);
	// lwz r11,-4664(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + -4664);
	// li r10,4
	ctx.r10.s64 = 4;
	// li r9,3
	ctx.r9.s64 = 3;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// stw r11,64(r11)
	PPC_STORE_U32(ctx.r11.u32 + 64, ctx.r11.u32);
	// lwz r11,-4664(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + -4664);
	// stw r10,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r10.u32);
	// lwz r11,-4664(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + -4664);
	// stw r9,28(r11)
	PPC_STORE_U32(ctx.r11.u32 + 28, ctx.r9.u32);
	// lwz r3,-4664(r26)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r26.u32 + -4664);
	// bl 0x8313dce0
	ctx.lr = 0x8313F4E8;
	sub_8313DCE0(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r3,-4664(r26)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r26.u32 + -4664);
	// bl 0x8313d650
	ctx.lr = 0x8313F4F4;
	sub_8313D650(ctx, base);
	// lis r11,-31980
	ctx.r11.s64 = -2095841280;
	// lis r10,-31827
	ctx.r10.s64 = -2085814272;
	// addi r4,r11,-5648
	ctx.r4.s64 = ctx.r11.s64 + -5648;
	// addi r3,r10,-4660
	ctx.r3.s64 = ctx.r10.s64 + -4660;
	// bl 0x830ff598
	ctx.lr = 0x8313F508;
	sub_830FF598(ctx, base);
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
	// stb r29,0(r23)
	PPC_STORE_U8(ctx.r23.u32 + 0, ctx.r29.u8);
loc_8313F510:
	// addi r3,r31,84
	ctx.r3.s64 = ctx.r31.s64 + 84;
	// bl 0x830fcfb8
	ctx.lr = 0x8313F518;
	sub_830FCFB8(ctx, base);
loc_8313F518:
	// lwz r3,-4664(r26)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r26.u32 + -4664);
	// addi r1,r31,448
	ctx.r1.s64 = ctx.r31.s64 + 448;
	// b 0x833a01e0
	__restgprlr_22(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8313F260"))) PPC_WEAK_FUNC(sub_8313F260);
PPC_FUNC_IMPL(__imp__sub_8313F260) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x833a0190
	ctx.lr = 0x8313F268;
	__savegprlr_22(ctx, base);
	// addi r31,r1,-448
	ctx.r31.s64 = ctx.r1.s64 + -448;
	// stwu r1,-448(r1)
	ea = -448 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31827
	ctx.r11.s64 = -2085814272;
	// mr r22,r3
	ctx.r22.u64 = ctx.r3.u64;
	// addi r23,r11,-4672
	ctx.r23.s64 = ctx.r11.s64 + -4672;
	// lis r26,-31827
	ctx.r26.s64 = -2085814272;
	// lbz r11,-4672(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + -4672);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x8313f518
	if (!ctx.cr0.eq) goto loc_8313F518;
	// lwz r4,4(r23)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r23.u32 + 4);
	// lis r25,-31827
	ctx.r25.s64 = -2085814272;
	// li r24,0
	ctx.r24.s64 = 0;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// bne cr6,0x8313f2f0
	if (!ctx.cr6.eq) goto loc_8313F2F0;
	// lis r11,-31827
	ctx.r11.s64 = -2085814272;
	// addi r3,r31,80
	ctx.r3.s64 = ctx.r31.s64 + 80;
	// lwz r4,-5080(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + -5080);
	// bl 0x830fcf80
	ctx.lr = 0x8313F2B0;
	sub_830FCF80(ctx, base);
	// lwz r11,4(r23)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r23.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8313f2e4
	if (!ctx.cr6.eq) goto loc_8313F2E4;
	// li r3,4
	ctx.r3.s64 = 4;
	// bl 0x830dd340
	ctx.lr = 0x8313F2C4;
	sub_830DD340(ctx, base);
	// stw r3,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r3.u32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8313f2dc
	if (ctx.cr0.eq) goto loc_8313F2DC;
	// lwz r4,-5084(r25)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r25.u32 + -5084);
	// bl 0x830fcef0
	ctx.lr = 0x8313F2D8;
	sub_830FCEF0(ctx, base);
	// b 0x8313f2e0
	goto loc_8313F2E0;
loc_8313F2DC:
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
loc_8313F2E0:
	// stw r3,4(r23)
	PPC_STORE_U32(ctx.r23.u32 + 4, ctx.r3.u32);
loc_8313F2E4:
	// addi r3,r31,80
	ctx.r3.s64 = ctx.r31.s64 + 80;
	// bl 0x830fcfb8
	ctx.lr = 0x8313F2EC;
	sub_830FCFB8(ctx, base);
	// lwz r4,4(r23)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r23.u32 + 4);
loc_8313F2F0:
	// addi r3,r31,84
	ctx.r3.s64 = ctx.r31.s64 + 84;
	// bl 0x830fcf80
	ctx.lr = 0x8313F2F8;
	sub_830FCF80(ctx, base);
	// lbz r11,0(r23)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r23.u32 + 0);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x8313f510
	if (!ctx.cr0.eq) goto loc_8313F510;
	// lis r11,-32228
	ctx.r11.s64 = -2112094208;
	// addi r4,r11,14464
	ctx.r4.s64 = ctx.r11.s64 + 14464;
	// lhz r11,14464(r11)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r11.u32 + 14464);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x8313f33c
	if (ctx.cr0.eq) goto loc_8313F33C;
	// lhz r10,2(r4)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r4.u32 + 2);
	// addi r11,r4,2
	ctx.r11.s64 = ctx.r4.s64 + 2;
	// b 0x8313f328
	goto loc_8313F328;
loc_8313F324:
	// lhzu r10,2(r11)
	ea = 2 + ctx.r11.u32;
	ctx.r10.u64 = PPC_LOAD_U16(ea);
	ctx.r11.u32 = ea;
loc_8313F328:
	// cmplwi r10,0
	ctx.cr0.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne 0x8313f324
	if (!ctx.cr0.eq) goto loc_8313F324;
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// srawi r30,r11,1
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1) != 0);
	ctx.r30.s64 = ctx.r11.s32 >> 1;
	// b 0x8313f340
	goto loc_8313F340;
loc_8313F33C:
	// mr r30,r24
	ctx.r30.u64 = ctx.r24.u64;
loc_8313F340:
	// addi r3,r31,96
	ctx.r3.s64 = ctx.r31.s64 + 96;
	// bl 0x830d6950
	ctx.lr = 0x8313F348;
	sub_830D6950(ctx, base);
	// rlwinm r11,r30,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r9,r31,96
	ctx.r9.s64 = ctx.r31.s64 + 96;
	// li r8,44
	ctx.r8.s64 = 44;
	// addi r10,r31,98
	ctx.r10.s64 = ctx.r31.s64 + 98;
	// lis r7,-32228
	ctx.r7.s64 = -2112094208;
	// add r3,r11,r10
	ctx.r3.u64 = ctx.r11.u64 + ctx.r10.u64;
	// sthx r8,r11,r9
	PPC_STORE_U16(ctx.r11.u32 + ctx.r9.u32, ctx.r8.u16);
	// addi r4,r7,16828
	ctx.r4.s64 = ctx.r7.s64 + 16828;
	// bl 0x830d6950
	ctx.lr = 0x8313F36C;
	sub_830D6950(ctx, base);
	// li r3,108
	ctx.r3.s64 = 108;
	// bl 0x830dd340
	ctx.lr = 0x8313F374;
	sub_830DD340(ctx, base);
	// stw r3,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r3.u32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8313f390
	if (ctx.cr0.eq) goto loc_8313F390;
	// lwz r4,-5084(r25)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r25.u32 + -5084);
	// bl 0x8313ee40
	ctx.lr = 0x8313F388;
	sub_8313EE40(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// b 0x8313f394
	goto loc_8313F394;
loc_8313F390:
	// mr r11,r24
	ctx.r11.u64 = ctx.r24.u64;
loc_8313F394:
	// stw r11,-4664(r26)
	PPC_STORE_U32(ctx.r26.u32 + -4664, ctx.r11.u32);
	// li r3,40
	ctx.r3.s64 = 40;
	// bl 0x830dd340
	ctx.lr = 0x8313F3A0;
	sub_830DD340(ctx, base);
	// mr. r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// stw r30,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r30.u32);
	// lis r11,-32228
	ctx.r11.s64 = -2112094208;
	// addi r27,r11,-5740
	ctx.r27.s64 = ctx.r11.s64 + -5740;
	// beq 0x8313f400
	if (ctx.cr0.eq) goto loc_8313F400;
	// li r3,36
	ctx.r3.s64 = 36;
	// bl 0x830dd340
	ctx.lr = 0x8313F3BC;
	sub_830DD340(ctx, base);
	// stw r3,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r3.u32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8313f3e4
	if (ctx.cr0.eq) goto loc_8313F3E4;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// lwz r7,-5084(r25)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r25.u32 + -5084);
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r6,r22
	ctx.r6.u64 = ctx.r22.u64;
	// bl 0x830e3e60
	ctx.lr = 0x8313F3DC;
	sub_830E3E60(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// b 0x8313f3e8
	goto loc_8313F3E8;
loc_8313F3E4:
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
loc_8313F3E8:
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r6,-5084(r25)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r25.u32 + -5084);
	// bl 0x8313d730
	ctx.lr = 0x8313F3F8;
	sub_8313D730(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// b 0x8313f404
	goto loc_8313F404;
loc_8313F400:
	// mr r30,r24
	ctx.r30.u64 = ctx.r24.u64;
loc_8313F404:
	// li r11,22
	ctx.r11.s64 = 22;
	// li r10,-1
	ctx.r10.s64 = -1;
	// stw r24,32(r30)
	PPC_STORE_U32(ctx.r30.u32 + 32, ctx.r24.u32);
	// stw r11,24(r30)
	PPC_STORE_U32(ctx.r30.u32 + 24, ctx.r11.u32);
	// li r3,40
	ctx.r3.s64 = 40;
	// stw r10,36(r30)
	PPC_STORE_U32(ctx.r30.u32 + 36, ctx.r10.u32);
	// bl 0x830dd340
	ctx.lr = 0x8313F420;
	sub_830DD340(ctx, base);
	// li r29,1
	ctx.r29.s64 = 1;
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8313f470
	if (ctx.cr0.eq) goto loc_8313F470;
	// lwz r11,-5084(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + -5084);
	// lis r10,-32227
	ctx.r10.s64 = -2112028672;
	// li r9,21
	ctx.r9.s64 = 21;
	// stw r30,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r30.u32);
	// addi r10,r10,3412
	ctx.r10.s64 = ctx.r10.s64 + 3412;
	// stw r24,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r24.u32);
	// stw r24,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r24.u32);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// stw r24,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r24.u32);
	// stw r9,24(r3)
	PPC_STORE_U32(ctx.r3.u32 + 24, ctx.r9.u32);
	// stb r29,28(r3)
	PPC_STORE_U8(ctx.r3.u32 + 28, ctx.r29.u8);
	// stb r29,29(r3)
	PPC_STORE_U8(ctx.r3.u32 + 29, ctx.r29.u8);
	// stw r29,32(r3)
	PPC_STORE_U32(ctx.r3.u32 + 32, ctx.r29.u32);
	// stw r29,36(r3)
	PPC_STORE_U32(ctx.r3.u32 + 36, ctx.r29.u32);
	// b 0x8313f474
	goto loc_8313F474;
loc_8313F470:
	// mr r28,r24
	ctx.r28.u64 = ctx.r24.u64;
loc_8313F474:
	// li r3,76
	ctx.r3.s64 = 76;
	// bl 0x830dd340
	ctx.lr = 0x8313F47C;
	sub_830DD340(ctx, base);
	// stw r3,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r3.u32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8313f4ac
	if (ctx.cr0.eq) goto loc_8313F4AC;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// lwz r9,-5084(r25)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r25.u32 + -5084);
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// li r8,6
	ctx.r8.s64 = 6;
	// li r7,11
	ctx.r7.s64 = 11;
	// mr r6,r22
	ctx.r6.u64 = ctx.r22.u64;
	// bl 0x83191570
	ctx.lr = 0x8313F4A4;
	sub_83191570(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// b 0x8313f4b0
	goto loc_8313F4B0;
loc_8313F4AC:
	// mr r30,r24
	ctx.r30.u64 = ctx.r24.u64;
loc_8313F4B0:
	// addi r4,r31,96
	ctx.r4.s64 = ctx.r31.s64 + 96;
	// lwz r3,-4664(r26)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r26.u32 + -4664);
	// bl 0x8313d508
	ctx.lr = 0x8313F4BC;
	sub_8313D508(ctx, base);
	// lwz r11,-4664(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + -4664);
	// li r10,4
	ctx.r10.s64 = 4;
	// li r9,3
	ctx.r9.s64 = 3;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// stw r11,64(r11)
	PPC_STORE_U32(ctx.r11.u32 + 64, ctx.r11.u32);
	// lwz r11,-4664(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + -4664);
	// stw r10,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r10.u32);
	// lwz r11,-4664(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + -4664);
	// stw r9,28(r11)
	PPC_STORE_U32(ctx.r11.u32 + 28, ctx.r9.u32);
	// lwz r3,-4664(r26)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r26.u32 + -4664);
	// bl 0x8313dce0
	ctx.lr = 0x8313F4E8;
	sub_8313DCE0(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r3,-4664(r26)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r26.u32 + -4664);
	// bl 0x8313d650
	ctx.lr = 0x8313F4F4;
	sub_8313D650(ctx, base);
	// lis r11,-31980
	ctx.r11.s64 = -2095841280;
	// lis r10,-31827
	ctx.r10.s64 = -2085814272;
	// addi r4,r11,-5648
	ctx.r4.s64 = ctx.r11.s64 + -5648;
	// addi r3,r10,-4660
	ctx.r3.s64 = ctx.r10.s64 + -4660;
	// bl 0x830ff598
	ctx.lr = 0x8313F508;
	sub_830FF598(ctx, base);
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
	// stb r29,0(r23)
	PPC_STORE_U8(ctx.r23.u32 + 0, ctx.r29.u8);
loc_8313F510:
	// addi r3,r31,84
	ctx.r3.s64 = ctx.r31.s64 + 84;
	// bl 0x830fcfb8
	ctx.lr = 0x8313F518;
	sub_830FCFB8(ctx, base);
loc_8313F518:
	// lwz r3,-4664(r26)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r26.u32 + -4664);
	// addi r1,r31,448
	ctx.r1.s64 = ctx.r31.s64 + 448;
	// b 0x833a01e0
	__restgprlr_22(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8313F524"))) PPC_WEAK_FUNC(sub_8313F524);
PPC_FUNC_IMPL(__imp__sub_8313F524) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// addi r31,r12,-448
	ctx.r31.s64 = ctx.r12.s64 + -448;
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r3,r31,80
	ctx.r3.s64 = ctx.r31.s64 + 80;
	// bl 0x830fcfb8
	ctx.lr = 0x8313F53C;
	sub_830FCFB8(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8313F54C"))) PPC_WEAK_FUNC(sub_8313F54C);
PPC_FUNC_IMPL(__imp__sub_8313F54C) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// addi r31,r12,-448
	ctx.r31.s64 = ctx.r12.s64 + -448;
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r3,84(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 84);
	// bl 0x830dd3e0
	ctx.lr = 0x8313F564;
	sub_830DD3E0(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8313F574"))) PPC_WEAK_FUNC(sub_8313F574);
PPC_FUNC_IMPL(__imp__sub_8313F574) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// addi r31,r12,-448
	ctx.r31.s64 = ctx.r12.s64 + -448;
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r3,r31,84
	ctx.r3.s64 = ctx.r31.s64 + 84;
	// bl 0x830fcfb8
	ctx.lr = 0x8313F58C;
	sub_830FCFB8(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8313F59C"))) PPC_WEAK_FUNC(sub_8313F59C);
PPC_FUNC_IMPL(__imp__sub_8313F59C) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// addi r31,r12,-448
	ctx.r31.s64 = ctx.r12.s64 + -448;
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r3,80(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	// bl 0x830dd3e0
	ctx.lr = 0x8313F5B4;
	sub_830DD3E0(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8313F5C4"))) PPC_WEAK_FUNC(sub_8313F5C4);
PPC_FUNC_IMPL(__imp__sub_8313F5C4) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// addi r31,r12,-448
	ctx.r31.s64 = ctx.r12.s64 + -448;
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r3,80(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	// bl 0x830dd3e0
	ctx.lr = 0x8313F5DC;
	sub_830DD3E0(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8313F5EC"))) PPC_WEAK_FUNC(sub_8313F5EC);
PPC_FUNC_IMPL(__imp__sub_8313F5EC) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// addi r31,r12,-448
	ctx.r31.s64 = ctx.r12.s64 + -448;
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r3,88(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 88);
	// bl 0x830dd3e0
	ctx.lr = 0x8313F604;
	sub_830DD3E0(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8313F614"))) PPC_WEAK_FUNC(sub_8313F614);
PPC_FUNC_IMPL(__imp__sub_8313F614) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// addi r31,r12,-448
	ctx.r31.s64 = ctx.r12.s64 + -448;
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r3,88(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 88);
	// bl 0x830dd3e0
	ctx.lr = 0x8313F62C;
	sub_830DD3E0(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8313F63C"))) PPC_WEAK_FUNC(sub_8313F63C);
PPC_FUNC_IMPL(__imp__sub_8313F63C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8313F640"))) PPC_WEAK_FUNC(sub_8313F640);
PPC_FUNC_IMPL(__imp__sub_8313F640) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lwz r25,17952(r26)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r26.u32 + 17952);
	// lwz r16,4896(r29)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4896);
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x833a01ac
	ctx.lr = 0x8313F650;
	__savegprlr_29(ctx, base);
	// addi r31,r1,-112
	ctx.r31.s64 = ctx.r1.s64 + -112;
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32227
	ctx.r11.s64 = -2112028672;
	// stw r3,132(r31)
	PPC_STORE_U32(ctx.r31.u32 + 132, ctx.r3.u32);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r11,r11,4360
	ctx.r11.s64 = ctx.r11.s64 + 4360;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// lwz r3,104(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 104);
	// lwz r4,44(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 44);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8313F684;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r3,104(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 104);
	// lwz r4,48(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 48);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8313F69C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r3,104(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 104);
	// lwz r4,52(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 52);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8313F6B4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lbz r11,6(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 6);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x8313f6e0
	if (ctx.cr0.eq) goto loc_8313F6E0;
	// lwz r3,68(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 68);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8313f6e0
	if (ctx.cr6.eq) goto loc_8313F6E0;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8313F6E0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8313F6E0:
	// lwz r3,72(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 72);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8313f700
	if (ctx.cr6.eq) goto loc_8313F700;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8313F700;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8313F700:
	// lwz r29,84(r30)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r30.u32 + 84);
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x8313f71c
	if (ctx.cr6.eq) goto loc_8313F71C;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x830f2130
	ctx.lr = 0x8313F714;
	sub_830F2130(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x830dd3e0
	ctx.lr = 0x8313F71C;
	sub_830DD3E0(ctx, base);
loc_8313F71C:
	// lwz r3,76(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 76);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8313f73c
	if (ctx.cr6.eq) goto loc_8313F73C;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8313F73C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8313F73C:
	// lwz r3,80(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 80);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8313f75c
	if (ctx.cr6.eq) goto loc_8313F75C;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8313F75C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8313F75C:
	// lwz r3,100(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 100);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8313f77c
	if (ctx.cr6.eq) goto loc_8313F77C;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8313F77C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8313F77C:
	// lwz r3,88(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 88);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8313f79c
	if (ctx.cr6.eq) goto loc_8313F79C;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8313F79C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8313F79C:
	// lwz r3,104(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 104);
	// lwz r4,92(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 92);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8313F7B4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r3,104(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 104);
	// lwz r4,96(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 96);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8313F7CC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r11,-32228
	ctx.r11.s64 = -2112094208;
	// addi r11,r11,19412
	ctx.r11.s64 = ctx.r11.s64 + 19412;
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
	// addi r1,r31,112
	ctx.r1.s64 = ctx.r31.s64 + 112;
	// b 0x833a01fc
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8313F648"))) PPC_WEAK_FUNC(sub_8313F648);
PPC_FUNC_IMPL(__imp__sub_8313F648) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x833a01ac
	ctx.lr = 0x8313F650;
	__savegprlr_29(ctx, base);
	// addi r31,r1,-112
	ctx.r31.s64 = ctx.r1.s64 + -112;
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32227
	ctx.r11.s64 = -2112028672;
	// stw r3,132(r31)
	PPC_STORE_U32(ctx.r31.u32 + 132, ctx.r3.u32);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r11,r11,4360
	ctx.r11.s64 = ctx.r11.s64 + 4360;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// lwz r3,104(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 104);
	// lwz r4,44(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 44);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8313F684;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r3,104(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 104);
	// lwz r4,48(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 48);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8313F69C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r3,104(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 104);
	// lwz r4,52(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 52);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8313F6B4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lbz r11,6(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 6);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x8313f6e0
	if (ctx.cr0.eq) goto loc_8313F6E0;
	// lwz r3,68(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 68);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8313f6e0
	if (ctx.cr6.eq) goto loc_8313F6E0;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8313F6E0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8313F6E0:
	// lwz r3,72(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 72);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8313f700
	if (ctx.cr6.eq) goto loc_8313F700;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8313F700;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8313F700:
	// lwz r29,84(r30)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r30.u32 + 84);
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x8313f71c
	if (ctx.cr6.eq) goto loc_8313F71C;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x830f2130
	ctx.lr = 0x8313F714;
	sub_830F2130(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x830dd3e0
	ctx.lr = 0x8313F71C;
	sub_830DD3E0(ctx, base);
loc_8313F71C:
	// lwz r3,76(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 76);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8313f73c
	if (ctx.cr6.eq) goto loc_8313F73C;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8313F73C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8313F73C:
	// lwz r3,80(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 80);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8313f75c
	if (ctx.cr6.eq) goto loc_8313F75C;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8313F75C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8313F75C:
	// lwz r3,100(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 100);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8313f77c
	if (ctx.cr6.eq) goto loc_8313F77C;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8313F77C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8313F77C:
	// lwz r3,88(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 88);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8313f79c
	if (ctx.cr6.eq) goto loc_8313F79C;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8313F79C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8313F79C:
	// lwz r3,104(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 104);
	// lwz r4,92(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 92);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8313F7B4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r3,104(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 104);
	// lwz r4,96(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 96);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8313F7CC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r11,-32228
	ctx.r11.s64 = -2112094208;
	// addi r11,r11,19412
	ctx.r11.s64 = ctx.r11.s64 + 19412;
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
	// addi r1,r31,112
	ctx.r1.s64 = ctx.r31.s64 + 112;
	// b 0x833a01fc
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8313F7E0"))) PPC_WEAK_FUNC(sub_8313F7E0);
PPC_FUNC_IMPL(__imp__sub_8313F7E0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// addi r31,r12,-112
	ctx.r31.s64 = ctx.r12.s64 + -112;
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r3,132(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 132);
	// bl 0x8313e940
	ctx.lr = 0x8313F7F8;
	sub_8313E940(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8313F808"))) PPC_WEAK_FUNC(sub_8313F808);
PPC_FUNC_IMPL(__imp__sub_8313F808) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lwz r25,17952(r26)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r26.u32 + 17952);
	// lwz r16,4952(r29)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4952);
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// addi r31,r1,-128
	ctx.r31.s64 = ctx.r1.s64 + -128;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lwz r6,104(r3)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r3.u32 + 104);
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r31,80
	ctx.r3.s64 = ctx.r31.s64 + 80;
	// lwz r4,84(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 84);
	// bl 0x8313ed68
	ctx.lr = 0x8313F83C;
	sub_8313ED68(ctx, base);
loc_8313F83C:
	// lwz r11,88(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 88);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8313f860
	if (!ctx.cr6.eq) goto loc_8313F860;
	// lwz r11,96(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 96);
	// lwz r10,92(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 92);
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// li r11,0
	ctx.r11.s64 = 0;
	// beq cr6,0x8313f864
	if (ctx.cr6.eq) goto loc_8313F864;
loc_8313F860:
	// li r11,1
	ctx.r11.s64 = 1;
loc_8313F864:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8313f880
	if (ctx.cr0.eq) goto loc_8313F880;
	// addi r3,r31,80
	ctx.r3.s64 = ctx.r31.s64 + 80;
	// bl 0x830e9530
	ctx.lr = 0x8313F874;
	sub_830E9530(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stb r11,16(r3)
	PPC_STORE_U8(ctx.r3.u32 + 16, ctx.r11.u8);
	// b 0x8313f83c
	goto loc_8313F83C;
loc_8313F880:
	// addi r3,r31,80
	ctx.r3.s64 = ctx.r31.s64 + 80;
	// bl 0x8313f180
	ctx.lr = 0x8313F888;
	sub_8313F180(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r31,128
	ctx.r1.s64 = ctx.r31.s64 + 128;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8313F810"))) PPC_WEAK_FUNC(sub_8313F810);
PPC_FUNC_IMPL(__imp__sub_8313F810) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// addi r31,r1,-128
	ctx.r31.s64 = ctx.r1.s64 + -128;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lwz r6,104(r3)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r3.u32 + 104);
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r31,80
	ctx.r3.s64 = ctx.r31.s64 + 80;
	// lwz r4,84(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 84);
	// bl 0x8313ed68
	ctx.lr = 0x8313F83C;
	sub_8313ED68(ctx, base);
loc_8313F83C:
	// lwz r11,88(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 88);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8313f860
	if (!ctx.cr6.eq) goto loc_8313F860;
	// lwz r11,96(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 96);
	// lwz r10,92(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 92);
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// li r11,0
	ctx.r11.s64 = 0;
	// beq cr6,0x8313f864
	if (ctx.cr6.eq) goto loc_8313F864;
loc_8313F860:
	// li r11,1
	ctx.r11.s64 = 1;
loc_8313F864:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8313f880
	if (ctx.cr0.eq) goto loc_8313F880;
	// addi r3,r31,80
	ctx.r3.s64 = ctx.r31.s64 + 80;
	// bl 0x830e9530
	ctx.lr = 0x8313F874;
	sub_830E9530(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stb r11,16(r3)
	PPC_STORE_U8(ctx.r3.u32 + 16, ctx.r11.u8);
	// b 0x8313f83c
	goto loc_8313F83C;
loc_8313F880:
	// addi r3,r31,80
	ctx.r3.s64 = ctx.r31.s64 + 80;
	// bl 0x8313f180
	ctx.lr = 0x8313F888;
	sub_8313F180(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r31,128
	ctx.r1.s64 = ctx.r31.s64 + 128;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8313F8A0"))) PPC_WEAK_FUNC(sub_8313F8A0);
PPC_FUNC_IMPL(__imp__sub_8313F8A0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// addi r31,r12,-128
	ctx.r31.s64 = ctx.r12.s64 + -128;
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r3,r31,80
	ctx.r3.s64 = ctx.r31.s64 + 80;
	// bl 0x8313f180
	ctx.lr = 0x8313F8B8;
	sub_8313F180(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8313F8C8"))) PPC_WEAK_FUNC(sub_8313F8C8);
PPC_FUNC_IMPL(__imp__sub_8313F8C8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x833a01a4
	ctx.lr = 0x8313F8D0;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,68(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 68);
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
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8313f93c
	if (ctx.cr6.eq) goto loc_8313F93C;
	// lwz r11,88(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 88);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8313f93c
	if (!ctx.cr6.eq) goto loc_8313F93C;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x8313eff0
	ctx.lr = 0x8313F908;
	sub_8313EFF0(ctx, base);
	// stw r3,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r3.u32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8313f93c
	if (ctx.cr0.eq) goto loc_8313F93C;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r7,r27
	ctx.r7.u64 = ctx.r27.u64;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// lwz r9,48(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// lwz r8,96(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 96);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8313F93C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8313F93C:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x833a01f4
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8313F944"))) PPC_WEAK_FUNC(sub_8313F944);
PPC_FUNC_IMPL(__imp__sub_8313F944) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8313F948"))) PPC_WEAK_FUNC(sub_8313F948);
PPC_FUNC_IMPL(__imp__sub_8313F948) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x833a01a8
	ctx.lr = 0x8313F950;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lhz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r4.u32 + 0);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// bne 0x8313fa8c
	if (!ctx.cr0.eq) goto loc_8313FA8C;
	// lbz r4,4(r31)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r31.u32 + 4);
	// bl 0x83100ae8
	ctx.lr = 0x8313F974;
	sub_83100AE8(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lbz r4,5(r31)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r31.u32 + 5);
	// bl 0x83100ae8
	ctx.lr = 0x8313F980;
	sub_83100AE8(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lbz r4,6(r31)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r31.u32 + 6);
	// bl 0x83100ae8
	ctx.lr = 0x8313F98C;
	sub_83100AE8(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lbz r4,7(r31)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r31.u32 + 7);
	// bl 0x83100ae8
	ctx.lr = 0x8313F998;
	sub_83100AE8(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lbz r4,8(r31)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r31.u32 + 8);
	// bl 0x83100ae8
	ctx.lr = 0x8313F9A4;
	sub_83100AE8(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r4,12(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// bl 0x83100d60
	ctx.lr = 0x8313F9B0;
	sub_83100D60(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r4,16(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// bl 0x83100d60
	ctx.lr = 0x8313F9BC;
	sub_83100D60(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r4,20(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// bl 0x83100d60
	ctx.lr = 0x8313F9C8;
	sub_83100D60(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r4,24(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// bl 0x83100d60
	ctx.lr = 0x8313F9D4;
	sub_83100D60(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r4,28(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// bl 0x83100d60
	ctx.lr = 0x8313F9E0;
	sub_83100D60(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r4,32(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// bl 0x83100d60
	ctx.lr = 0x8313F9EC;
	sub_83100D60(ctx, base);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r4,44(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 44);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x83101110
	ctx.lr = 0x8313FA00;
	sub_83101110(ctx, base);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r4,48(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x83101110
	ctx.lr = 0x8313FA14;
	sub_83101110(ctx, base);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r4,52(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x83101110
	ctx.lr = 0x8313FA28;
	sub_83101110(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r4,56(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// bl 0x831523b8
	ctx.lr = 0x8313FA34;
	sub_831523B8(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r4,60(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 60);
	// bl 0x831523b8
	ctx.lr = 0x8313FA40;
	sub_831523B8(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r4,64(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 64);
	// bl 0x83101748
	ctx.lr = 0x8313FA4C;
	sub_83101748(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r4,68(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 68);
	// bl 0x83101748
	ctx.lr = 0x8313FA58;
	sub_83101748(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r4,72(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 72);
	// bl 0x83101748
	ctx.lr = 0x8313FA64;
	sub_83101748(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r4,76(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 76);
	// bl 0x83101748
	ctx.lr = 0x8313FA70;
	sub_83101748(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r3,80(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	// bl 0x8315daa8
	ctx.lr = 0x8313FA7C;
	sub_8315DAA8(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r3,84(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 84);
	// bl 0x83160570
	ctx.lr = 0x8313FA88;
	sub_83160570(ctx, base);
	// b 0x8313fc64
	goto loc_8313FC64;
loc_8313FA8C:
	// addi r4,r31,4
	ctx.r4.s64 = ctx.r31.s64 + 4;
	// bl 0x83100b50
	ctx.lr = 0x8313FA94;
	sub_83100B50(ctx, base);
	// addi r4,r31,5
	ctx.r4.s64 = ctx.r31.s64 + 5;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x83100b50
	ctx.lr = 0x8313FAA0;
	sub_83100B50(ctx, base);
	// addi r4,r31,6
	ctx.r4.s64 = ctx.r31.s64 + 6;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x83100b50
	ctx.lr = 0x8313FAAC;
	sub_83100B50(ctx, base);
	// addi r4,r31,7
	ctx.r4.s64 = ctx.r31.s64 + 7;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x83100b50
	ctx.lr = 0x8313FAB8;
	sub_83100B50(ctx, base);
	// addi r4,r31,8
	ctx.r4.s64 = ctx.r31.s64 + 8;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x83100b50
	ctx.lr = 0x8313FAC4;
	sub_83100B50(ctx, base);
	// addi r4,r31,12
	ctx.r4.s64 = ctx.r31.s64 + 12;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x83100cd0
	ctx.lr = 0x8313FAD0;
	sub_83100CD0(ctx, base);
	// addi r4,r31,16
	ctx.r4.s64 = ctx.r31.s64 + 16;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x83100cd0
	ctx.lr = 0x8313FADC;
	sub_83100CD0(ctx, base);
	// addi r4,r31,20
	ctx.r4.s64 = ctx.r31.s64 + 20;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x83100cd0
	ctx.lr = 0x8313FAE8;
	sub_83100CD0(ctx, base);
	// addi r4,r31,24
	ctx.r4.s64 = ctx.r31.s64 + 24;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x83100cd0
	ctx.lr = 0x8313FAF4;
	sub_83100CD0(ctx, base);
	// addi r4,r31,28
	ctx.r4.s64 = ctx.r31.s64 + 28;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x83100cd0
	ctx.lr = 0x8313FB00;
	sub_83100CD0(ctx, base);
	// addi r4,r31,32
	ctx.r4.s64 = ctx.r31.s64 + 32;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x83100cd0
	ctx.lr = 0x8313FB0C;
	sub_83100CD0(ctx, base);
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// addi r4,r31,44
	ctx.r4.s64 = ctx.r31.s64 + 44;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x83101330
	ctx.lr = 0x8313FB24;
	sub_83101330(ctx, base);
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r6,r1,84
	ctx.r6.s64 = ctx.r1.s64 + 84;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r4,r31,48
	ctx.r4.s64 = ctx.r31.s64 + 48;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x83101330
	ctx.lr = 0x8313FB3C;
	sub_83101330(ctx, base);
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r6,r1,84
	ctx.r6.s64 = ctx.r1.s64 + 84;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r4,r31,52
	ctx.r4.s64 = ctx.r31.s64 + 52;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x83101330
	ctx.lr = 0x8313FB54;
	sub_83101330(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x83152480
	ctx.lr = 0x8313FB5C;
	sub_83152480(ctx, base);
	// stw r3,56(r31)
	PPC_STORE_U32(ctx.r31.u32 + 56, ctx.r3.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x83152480
	ctx.lr = 0x8313FB68;
	sub_83152480(ctx, base);
	// stw r3,60(r31)
	PPC_STORE_U32(ctx.r31.u32 + 60, ctx.r3.u32);
	// lis r11,-31846
	ctx.r11.s64 = -2087059456;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r4,r11,24576
	ctx.r4.s64 = ctx.r11.s64 + 24576;
	// bl 0x83101658
	ctx.lr = 0x8313FB7C;
	sub_83101658(ctx, base);
	// stw r3,64(r31)
	PPC_STORE_U32(ctx.r31.u32 + 64, ctx.r3.u32);
	// lis r11,-31846
	ctx.r11.s64 = -2087059456;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r4,r11,28780
	ctx.r4.s64 = ctx.r11.s64 + 28780;
	// bl 0x83101658
	ctx.lr = 0x8313FB90;
	sub_83101658(ctx, base);
	// stw r3,68(r31)
	PPC_STORE_U32(ctx.r31.u32 + 68, ctx.r3.u32);
	// lis r11,-31846
	ctx.r11.s64 = -2087059456;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r4,r11,28764
	ctx.r4.s64 = ctx.r11.s64 + 28764;
	// bl 0x83101658
	ctx.lr = 0x8313FBA4;
	sub_83101658(ctx, base);
	// stw r3,72(r31)
	PPC_STORE_U32(ctx.r31.u32 + 72, ctx.r3.u32);
	// lwz r3,76(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 76);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8313fbc8
	if (ctx.cr6.eq) goto loc_8313FBC8;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8313FBC8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8313FBC8:
	// lis r11,-31846
	ctx.r11.s64 = -2087059456;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r4,r11,28772
	ctx.r4.s64 = ctx.r11.s64 + 28772;
	// bl 0x83101658
	ctx.lr = 0x8313FBD8;
	sub_83101658(ctx, base);
	// stw r3,76(r31)
	PPC_STORE_U32(ctx.r31.u32 + 76, ctx.r3.u32);
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,8
	ctx.r4.s64 = 8;
	// addi r3,r31,80
	ctx.r3.s64 = ctx.r31.s64 + 80;
	// bl 0x8315e550
	ctx.lr = 0x8313FBF0;
	sub_8315E550(ctx, base);
	// addi r29,r31,84
	ctx.r29.s64 = ctx.r31.s64 + 84;
	// lwz r28,84(r31)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r31.u32 + 84);
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// beq cr6,0x8313fc10
	if (ctx.cr6.eq) goto loc_8313FC10;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x830f2130
	ctx.lr = 0x8313FC08;
	sub_830F2130(ctx, base);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x830dd3e0
	ctx.lr = 0x8313FC10;
	sub_830DD3E0(ctx, base);
loc_8313FC10:
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,29
	ctx.r4.s64 = 29;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x831606c8
	ctx.lr = 0x8313FC24;
	sub_831606C8(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,92(r31)
	PPC_STORE_U32(ctx.r31.u32 + 92, ctx.r11.u32);
	// stw r11,100(r31)
	PPC_STORE_U32(ctx.r31.u32 + 100, ctx.r11.u32);
	// stw r11,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r11.u32);
	// stw r11,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r11.u32);
	// stw r11,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r11.u32);
	// lwz r11,88(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 88);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8313fc64
	if (!ctx.cr6.eq) goto loc_8313FC64;
	// lwz r11,68(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 68);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8313fc64
	if (ctx.cr6.eq) goto loc_8313FC64;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8313eff0
	ctx.lr = 0x8313FC60;
	sub_8313EFF0(ctx, base);
	// stw r3,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r3.u32);
loc_8313FC64:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x833a01f8
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8313FC6C"))) PPC_WEAK_FUNC(sub_8313FC6C);
PPC_FUNC_IMPL(__imp__sub_8313FC6C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8313FC70"))) PPC_WEAK_FUNC(sub_8313FC70);
PPC_FUNC_IMPL(__imp__sub_8313FC70) {
	PPC_FUNC_PROLOGUE();
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x8313f260
	sub_8313F260(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8313FC78"))) PPC_WEAK_FUNC(sub_8313FC78);
PPC_FUNC_IMPL(__imp__sub_8313FC78) {
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
	// bl 0x8313f648
	ctx.lr = 0x8313FC98;
	sub_8313F648(ctx, base);
	// clrlwi. r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8313fca8
	if (ctx.cr0.eq) goto loc_8313FCA8;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x830dd3e0
	ctx.lr = 0x8313FCA8;
	sub_830DD3E0(ctx, base);
loc_8313FCA8:
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

__attribute__((alias("__imp__sub_8313FCC4"))) PPC_WEAK_FUNC(sub_8313FCC4);
PPC_FUNC_IMPL(__imp__sub_8313FCC4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8313FCC8"))) PPC_WEAK_FUNC(sub_8313FCC8);
PPC_FUNC_IMPL(__imp__sub_8313FCC8) {
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
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// mr r6,r4
	ctx.r6.u64 = ctx.r4.u64;
	// lwz r10,52(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 52);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// stw r11,36(r4)
	PPC_STORE_U32(ctx.r4.u32 + 36, ctx.r11.u32);
	// lwz r5,16(r10)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r10.u32 + 16);
	// lwz r4,24(r10)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + 24);
	// lwz r3,84(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 84);
	// bl 0x83114a90
	ctx.lr = 0x8313FD04;
	sub_83114A90(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r3,76(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 76);
	// bl 0x83174e88
	ctx.lr = 0x8313FD10;
	sub_83174E88(ctx, base);
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

__attribute__((alias("__imp__sub_8313FD28"))) PPC_WEAK_FUNC(sub_8313FD28);
PPC_FUNC_IMPL(__imp__sub_8313FD28) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lwz r25,17952(r26)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r26.u32 + 17952);
	// lwz r16,5016(r29)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r29.u32 + 5016);
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x833a0198
	ctx.lr = 0x8313FD38;
	__savegprlr_24(ctx, base);
	// addi r31,r1,-160
	ctx.r31.s64 = ctx.r1.s64 + -160;
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r6
	ctx.r30.u64 = ctx.r6.u64;
	// stw r3,180(r31)
	PPC_STORE_U32(ctx.r31.u32 + 180, ctx.r3.u32);
	// addi r6,r31,80
	ctx.r6.s64 = ctx.r31.s64 + 80;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// lwz r3,84(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 84);
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// mr r26,r7
	ctx.r26.u64 = ctx.r7.u64;
	// mr r25,r8
	ctx.r25.u64 = ctx.r8.u64;
	// mr r24,r9
	ctx.r24.u64 = ctx.r9.u64;
	// bl 0x8315d680
	ctx.lr = 0x8313FD6C;
	sub_8315D680(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne 0x8313fd7c
	if (!ctx.cr0.eq) goto loc_8313FD7C;
	// li r27,0
	ctx.r27.s64 = 0;
	// b 0x8313fd88
	goto loc_8313FD88;
loc_8313FD7C:
	// lwz r27,0(r3)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// bne cr6,0x8313fe08
	if (!ctx.cr6.eq) goto loc_8313FE08;
loc_8313FD88:
	// cmpwi cr6,r25,0
	ctx.cr6.compare<int32_t>(ctx.r25.s32, 0, ctx.xer);
	// bne cr6,0x8313fe08
	if (!ctx.cr6.eq) goto loc_8313FE08;
	// li r3,76
	ctx.r3.s64 = 76;
	// lwz r4,104(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 104);
	// bl 0x830dd390
	ctx.lr = 0x8313FD9C;
	sub_830DD390(ctx, base);
	// stw r3,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r3.u32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8313fdcc
	if (ctx.cr0.eq) goto loc_8313FDCC;
	// li r8,4
	ctx.r8.s64 = 4;
	// lwz r9,104(r29)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r29.u32 + 104);
	// li r7,0
	ctx.r7.s64 = 0;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// bl 0x83191570
	ctx.lr = 0x8313FDC4;
	sub_83191570(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// b 0x8313fdd0
	goto loc_8313FDD0;
loc_8313FDCC:
	// li r30,0
	ctx.r30.s64 = 0;
loc_8313FDD0:
	// lwz r11,32(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 32);
	// lwz r10,52(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 52);
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r27,r30
	ctx.r27.u64 = ctx.r30.u64;
	// stw r11,36(r30)
	PPC_STORE_U32(ctx.r30.u32 + 36, ctx.r11.u32);
	// lwz r4,24(r10)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + 24);
	// lwz r3,84(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 84);
	// bl 0x83114a90
	ctx.lr = 0x8313FDF4;
	sub_83114A90(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r3,76(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 76);
	// bl 0x83174e88
	ctx.lr = 0x8313FE00;
	sub_83174E88(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// b 0x8313fe0c
	goto loc_8313FE0C;
loc_8313FE08:
	// li r11,0
	ctx.r11.s64 = 0;
loc_8313FE0C:
	// stb r11,0(r24)
	PPC_STORE_U8(ctx.r24.u32 + 0, ctx.r11.u8);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// addi r1,r31,160
	ctx.r1.s64 = ctx.r31.s64 + 160;
	// b 0x833a01e8
	__restgprlr_24(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8313FD30"))) PPC_WEAK_FUNC(sub_8313FD30);
PPC_FUNC_IMPL(__imp__sub_8313FD30) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x833a0198
	ctx.lr = 0x8313FD38;
	__savegprlr_24(ctx, base);
	// addi r31,r1,-160
	ctx.r31.s64 = ctx.r1.s64 + -160;
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r6
	ctx.r30.u64 = ctx.r6.u64;
	// stw r3,180(r31)
	PPC_STORE_U32(ctx.r31.u32 + 180, ctx.r3.u32);
	// addi r6,r31,80
	ctx.r6.s64 = ctx.r31.s64 + 80;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// lwz r3,84(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 84);
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// mr r26,r7
	ctx.r26.u64 = ctx.r7.u64;
	// mr r25,r8
	ctx.r25.u64 = ctx.r8.u64;
	// mr r24,r9
	ctx.r24.u64 = ctx.r9.u64;
	// bl 0x8315d680
	ctx.lr = 0x8313FD6C;
	sub_8315D680(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne 0x8313fd7c
	if (!ctx.cr0.eq) goto loc_8313FD7C;
	// li r27,0
	ctx.r27.s64 = 0;
	// b 0x8313fd88
	goto loc_8313FD88;
loc_8313FD7C:
	// lwz r27,0(r3)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// bne cr6,0x8313fe08
	if (!ctx.cr6.eq) goto loc_8313FE08;
loc_8313FD88:
	// cmpwi cr6,r25,0
	ctx.cr6.compare<int32_t>(ctx.r25.s32, 0, ctx.xer);
	// bne cr6,0x8313fe08
	if (!ctx.cr6.eq) goto loc_8313FE08;
	// li r3,76
	ctx.r3.s64 = 76;
	// lwz r4,104(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 104);
	// bl 0x830dd390
	ctx.lr = 0x8313FD9C;
	sub_830DD390(ctx, base);
	// stw r3,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r3.u32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8313fdcc
	if (ctx.cr0.eq) goto loc_8313FDCC;
	// li r8,4
	ctx.r8.s64 = 4;
	// lwz r9,104(r29)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r29.u32 + 104);
	// li r7,0
	ctx.r7.s64 = 0;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// bl 0x83191570
	ctx.lr = 0x8313FDC4;
	sub_83191570(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// b 0x8313fdd0
	goto loc_8313FDD0;
loc_8313FDCC:
	// li r30,0
	ctx.r30.s64 = 0;
loc_8313FDD0:
	// lwz r11,32(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 32);
	// lwz r10,52(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 52);
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r27,r30
	ctx.r27.u64 = ctx.r30.u64;
	// stw r11,36(r30)
	PPC_STORE_U32(ctx.r30.u32 + 36, ctx.r11.u32);
	// lwz r4,24(r10)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + 24);
	// lwz r3,84(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 84);
	// bl 0x83114a90
	ctx.lr = 0x8313FDF4;
	sub_83114A90(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r3,76(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 76);
	// bl 0x83174e88
	ctx.lr = 0x8313FE00;
	sub_83174E88(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// b 0x8313fe0c
	goto loc_8313FE0C;
loc_8313FE08:
	// li r11,0
	ctx.r11.s64 = 0;
loc_8313FE0C:
	// stb r11,0(r24)
	PPC_STORE_U8(ctx.r24.u32 + 0, ctx.r11.u8);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// addi r1,r31,160
	ctx.r1.s64 = ctx.r31.s64 + 160;
	// b 0x833a01e8
	__restgprlr_24(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8313FE1C"))) PPC_WEAK_FUNC(sub_8313FE1C);
PPC_FUNC_IMPL(__imp__sub_8313FE1C) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// addi r31,r12,-160
	ctx.r31.s64 = ctx.r12.s64 + -160;
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,180(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 180);
	// lwz r4,104(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 104);
	// lwz r3,80(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	// bl 0x830dd3e0
	ctx.lr = 0x8313FE3C;
	sub_830DD3E0(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8313FE4C"))) PPC_WEAK_FUNC(sub_8313FE4C);
PPC_FUNC_IMPL(__imp__sub_8313FE4C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8313FE50"))) PPC_WEAK_FUNC(sub_8313FE50);
PPC_FUNC_IMPL(__imp__sub_8313FE50) {
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
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x8313feb4
	if (ctx.cr6.eq) goto loc_8313FEB4;
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// lwz r11,16(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8313FE88;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x8313feb4
	if (!ctx.cr0.eq) goto loc_8313FEB4;
	// lwz r3,24(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 24);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8313feb0
	if (ctx.cr6.eq) goto loc_8313FEB0;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8313FEB0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8313FEB0:
	// stw r31,24(r30)
	PPC_STORE_U32(ctx.r30.u32 + 24, ctx.r31.u32);
loc_8313FEB4:
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

__attribute__((alias("__imp__sub_8313FECC"))) PPC_WEAK_FUNC(sub_8313FECC);
PPC_FUNC_IMPL(__imp__sub_8313FECC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8313FED0"))) PPC_WEAK_FUNC(sub_8313FED0);
PPC_FUNC_IMPL(__imp__sub_8313FED0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31846
	ctx.r11.s64 = -2087059456;
	// addi r3,r11,24584
	ctx.r3.s64 = ctx.r11.s64 + 24584;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8313FEDC"))) PPC_WEAK_FUNC(sub_8313FEDC);
PPC_FUNC_IMPL(__imp__sub_8313FEDC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8313FEE0"))) PPC_WEAK_FUNC(sub_8313FEE0);
PPC_FUNC_IMPL(__imp__sub_8313FEE0) {
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
	// bl 0x82c10e98
	ctx.lr = 0x8313FF00;
	sub_82C10E98(ctx, base);
	// lhz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r30.u32 + 0);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x8313ff64
	if (!ctx.cr0.eq) goto loc_8313FF64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// bl 0x8315f2e0
	ctx.lr = 0x8313FF18;
	sub_8315F2E0(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r3,16(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// bl 0x8315f2e0
	ctx.lr = 0x8313FF24;
	sub_8315F2E0(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r3,20(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// bl 0x8315f2e0
	ctx.lr = 0x8313FF30;
	sub_8315F2E0(ctx, base);
	// lwz r3,24(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8313FF48;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r4,28(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// bl 0x83100d60
	ctx.lr = 0x8313FF54;
	sub_83100D60(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lbz r4,32(r31)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r31.u32 + 32);
	// bl 0x83100ae8
	ctx.lr = 0x8313FF60;
	sub_83100AE8(ctx, base);
	// b 0x8313ffd8
	goto loc_8313FFD8;
loc_8313FF64:
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// li r5,128
	ctx.r5.s64 = 128;
	// li r4,109
	ctx.r4.s64 = 109;
	// addi r3,r31,8
	ctx.r3.s64 = ctx.r31.s64 + 8;
	// bl 0x8315ef78
	ctx.lr = 0x8313FF78;
	sub_8315EF78(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// stw r11,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r11.u32);
	// li r5,128
	ctx.r5.s64 = 128;
	// li r4,109
	ctx.r4.s64 = 109;
	// addi r3,r31,16
	ctx.r3.s64 = ctx.r31.s64 + 16;
	// bl 0x8315f120
	ctx.lr = 0x8313FF94;
	sub_8315F120(ctx, base);
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// li r5,128
	ctx.r5.s64 = 128;
	// li r4,109
	ctx.r4.s64 = 109;
	// addi r3,r31,20
	ctx.r3.s64 = ctx.r31.s64 + 20;
	// bl 0x8315f3c8
	ctx.lr = 0x8313FFA8;
	sub_8315F3C8(ctx, base);
	// lwz r3,24(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8313FFC0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r4,r31,28
	ctx.r4.s64 = ctx.r31.s64 + 28;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x83100cd0
	ctx.lr = 0x8313FFCC;
	sub_83100CD0(ctx, base);
	// addi r4,r31,32
	ctx.r4.s64 = ctx.r31.s64 + 32;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x83100b50
	ctx.lr = 0x8313FFD8;
	sub_83100B50(ctx, base);
loc_8313FFD8:
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

__attribute__((alias("__imp__sub_8313FFF0"))) PPC_WEAK_FUNC(sub_8313FFF0);
PPC_FUNC_IMPL(__imp__sub_8313FFF0) {
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
	// li r30,0
	ctx.r30.s64 = 0;
	// stw r6,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r6.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r5,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r5.u32);
	// mr r7,r6
	ctx.r7.u64 = ctx.r6.u64;
	// stw r30,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r30.u32);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// stw r30,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r30.u32);
	// stw r30,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r30.u32);
	// stw r4,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r4.u32);
	// bne cr6,0x83140058
	if (!ctx.cr6.eq) goto loc_83140058;
	// lis r11,-32227
	ctx.r11.s64 = -2112028672;
	// li r6,68
	ctx.r6.s64 = 68;
	// addi r4,r11,-28124
	ctx.r4.s64 = ctx.r11.s64 + -28124;
	// li r5,70
	ctx.r5.s64 = 70;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x830d5a30
	ctx.lr = 0x83140048;
	sub_830D5A30(ctx, base);
	// lis r11,-32194
	ctx.r11.s64 = -2109865984;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,-28580
	ctx.r4.s64 = ctx.r11.s64 + -28580;
	// bl 0x833a7198
	ctx.lr = 0x83140058;
	sub_833A7198(ctx, base);
loc_83140058:
	// lwz r11,0(r7)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + 0);
	// rlwinm r4,r4,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r3,r7
	ctx.r3.u64 = ctx.r7.u64;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x83140070;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r3,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r3.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// rlwinm r5,r11,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x833a2b30
	ctx.lr = 0x83140084;
	sub_833A2B30(ctx, base);
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x83140098
	if (!ctx.cr6.eq) goto loc_83140098;
	// li r11,256
	ctx.r11.s64 = 256;
	// stw r11,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r11.u32);
loc_83140098:
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// rlwinm r4,r11,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x831400B4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// stw r30,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r30.u32);
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

__attribute__((alias("__imp__sub_831400DC"))) PPC_WEAK_FUNC(sub_831400DC);
PPC_FUNC_IMPL(__imp__sub_831400DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_831400E0"))) PPC_WEAK_FUNC(sub_831400E0);
PPC_FUNC_IMPL(__imp__sub_831400E0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x833a01a0
	ctx.lr = 0x831400E8;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,16(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8314018c
	if (ctx.cr6.eq) goto loc_8314018C;
	// lwz r11,20(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// li r26,0
	ctx.r26.s64 = 0;
	// mr r27,r26
	ctx.r27.u64 = ctx.r26.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x83140188
	if (!ctx.cr6.gt) goto loc_83140188;
	// mr r29,r26
	ctx.r29.u64 = ctx.r26.u64;
loc_83140114:
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// lwzx r31,r11,r29
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r29.u32);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x8314016c
	if (ctx.cr6.eq) goto loc_8314016C;
loc_83140124:
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r28,4(r31)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x83140148
	if (ctx.cr6.eq) goto loc_83140148;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x83140148;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_83140148:
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x83140160;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r31,r28
	ctx.r31.u64 = ctx.r28.u64;
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// bne cr6,0x83140124
	if (!ctx.cr6.eq) goto loc_83140124;
loc_8314016C:
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// addi r27,r27,1
	ctx.r27.s64 = ctx.r27.s64 + 1;
	// stwx r26,r11,r29
	PPC_STORE_U32(ctx.r11.u32 + ctx.r29.u32, ctx.r26.u32);
	// addi r29,r29,4
	ctx.r29.s64 = ctx.r29.s64 + 4;
	// lwz r11,20(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 20);
	// cmplw cr6,r27,r11
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x83140114
	if (ctx.cr6.lt) goto loc_83140114;
loc_83140188:
	// stw r26,16(r30)
	PPC_STORE_U32(ctx.r30.u32 + 16, ctx.r26.u32);
loc_8314018C:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x833a01f0
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83140194"))) PPC_WEAK_FUNC(sub_83140194);
PPC_FUNC_IMPL(__imp__sub_83140194) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83140198"))) PPC_WEAK_FUNC(sub_83140198);
PPC_FUNC_IMPL(__imp__sub_83140198) {
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
	// bl 0x831400e0
	ctx.lr = 0x831401B4;
	sub_831400E0(ctx, base);
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x831401c4
	if (ctx.cr6.eq) goto loc_831401C4;
	// bl 0x831400e0
	ctx.lr = 0x831401C4;
	sub_831400E0(ctx, base);
loc_831401C4:
	// lwz r3,20(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// bl 0x831400e0
	ctx.lr = 0x831401CC;
	sub_831400E0(ctx, base);
	// lwz r3,16(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// bl 0x831400e0
	ctx.lr = 0x831401D4;
	sub_831400E0(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stb r11,32(r31)
	PPC_STORE_U8(ctx.r31.u32 + 32, ctx.r11.u8);
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

__attribute__((alias("__imp__sub_831401F0"))) PPC_WEAK_FUNC(sub_831401F0);
PPC_FUNC_IMPL(__imp__sub_831401F0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x833a01a8
	ctx.lr = 0x831401F8;
	__savegprlr_28(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r29,16(r4)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r4.u32 + 16);
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x8311cde0
	ctx.lr = 0x83140214;
	sub_8311CDE0(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8314025c
	if (ctx.cr0.eq) goto loc_8314025C;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lis r9,-32227
	ctx.r9.s64 = -2112028672;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r4,r9,-28124
	ctx.r4.s64 = ctx.r9.s64 + -28124;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// mr r7,r29
	ctx.r7.u64 = ctx.r29.u64;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// li r6,65
	ctx.r6.s64 = 65;
	// li r5,215
	ctx.r5.s64 = 215;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x8311e928
	ctx.lr = 0x8314024C;
	sub_8311E928(ctx, base);
	// lis r11,-32194
	ctx.r11.s64 = -2109865984;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// addi r4,r11,-28580
	ctx.r4.s64 = ctx.r11.s64 + -28580;
	// bl 0x833a7198
	ctx.lr = 0x8314025C;
	sub_833A7198(ctx, base);
loc_8314025C:
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r4,8
	ctx.r4.s64 = 8;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x83140274;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r10,96(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8314029c
	if (ctx.cr0.eq) goto loc_8314029C;
	// lwz r9,4(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// rlwinm r8,r10,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lwzx r9,r8,r9
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r9.u32);
	// stw r30,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r30.u32);
	// stw r9,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r9.u32);
	// b 0x831402a0
	goto loc_831402A0;
loc_8314029C:
	// li r11,0
	ctx.r11.s64 = 0;
loc_831402A0:
	// lwz r9,4(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r11,r10,r9
	PPC_STORE_U32(ctx.r10.u32 + ctx.r9.u32, ctx.r11.u32);
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// lwz r10,16(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x83140334
	if (!ctx.cr6.eq) goto loc_83140334;
	// clrldi r11,r11,32
	ctx.r11.u64 = ctx.r11.u64 & 0xFFFFFFFF;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// std r11,96(r1)
	PPC_STORE_U64(ctx.r1.u32 + 96, ctx.r11.u64);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lfd f0,14392(r10)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r10.u32 + 14392);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// lfd f13,96(r1)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 96);
	// fcfid f13,f13
	ctx.f13.f64 = double(ctx.f13.s64);
	// fmul f0,f13,f0
	ctx.f0.f64 = ctx.f13.f64 * ctx.f0.f64;
	// fctidz f0,f0
	ctx.f0.s64 = (ctx.f0.f64 > double(LLONG_MAX)) ? LLONG_MAX : simde_mm_cvttsd_si64(simde_mm_load_sd(&ctx.f0.f64));
	// stfd f0,96(r1)
	PPC_STORE_U64(ctx.r1.u32 + 96, ctx.f0.u64);
	// lwz r29,100(r1)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// rlwinm r4,r29,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 2) & 0xFFFFFFFC;
	// bctrl 
	ctx.lr = 0x83140300;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// lwz r4,8(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// rlwinm r5,r11,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x833a1390
	ctx.lr = 0x83140314;
	sub_833A1390(ctx, base);
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r4,8(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8314032C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r28,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r28.u32);
	// stw r29,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r29.u32);
loc_83140334:
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addi r3,r11,1
	ctx.r3.s64 = ctx.r11.s64 + 1;
	// rlwinm r11,r3,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// stw r3,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r3.u32);
	// stwx r30,r11,r10
	PPC_STORE_U32(ctx.r11.u32 + ctx.r10.u32, ctx.r30.u32);
	// stw r3,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r3.u32);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x833a01f8
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83140358"))) PPC_WEAK_FUNC(sub_83140358);
PPC_FUNC_IMPL(__imp__sub_83140358) {
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
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r4,8(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x83140384;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x831400e0
	ctx.lr = 0x8314038C;
	sub_831400E0(ctx, base);
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r4,4(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x831403A4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
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

__attribute__((alias("__imp__sub_831403B8"))) PPC_WEAK_FUNC(sub_831403B8);
PPC_FUNC_IMPL(__imp__sub_831403B8) {
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
	// lis r30,-31827
	ctx.r30.s64 = -2085814272;
	// lwz r31,-4640(r30)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r30.u32 + -4640);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x831403ec
	if (ctx.cr6.eq) goto loc_831403EC;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83140358
	ctx.lr = 0x831403E4;
	sub_83140358(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x830dd3e0
	ctx.lr = 0x831403EC;
	sub_830DD3E0(ctx, base);
loc_831403EC:
	// lis r10,-31827
	ctx.r10.s64 = -2085814272;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r31,r10,-4648
	ctx.r31.s64 = ctx.r10.s64 + -4648;
	// stw r11,-4640(r30)
	PPC_STORE_U32(ctx.r30.u32 + -4640, ctx.r11.u32);
	// lwz r30,4(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x83140418
	if (ctx.cr6.eq) goto loc_83140418;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x830fcf30
	ctx.lr = 0x83140410;
	sub_830FCF30(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x830dd3e0
	ctx.lr = 0x83140418;
	sub_830DD3E0(ctx, base);
loc_83140418:
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// stb r10,0(r31)
	PPC_STORE_U8(ctx.r31.u32 + 0, ctx.r10.u8);
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

__attribute__((alias("__imp__sub_83140440"))) PPC_WEAK_FUNC(sub_83140440);
PPC_FUNC_IMPL(__imp__sub_83140440) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lwz r25,17952(r26)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r26.u32 + 17952);
	// lwz r16,5112(r29)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r29.u32 + 5112);
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x833a01a0
	ctx.lr = 0x83140450;
	__savegprlr_26(ctx, base);
	// addi r31,r1,-144
	ctx.r31.s64 = ctx.r1.s64 + -144;
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r28,r7
	ctx.r28.u64 = ctx.r7.u64;
	// mr r7,r8
	ctx.r7.u64 = ctx.r8.u64;
	// stw r3,164(r31)
	PPC_STORE_U32(ctx.r31.u32 + 164, ctx.r3.u32);
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// lwz r11,44(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 44);
	// mr r26,r9
	ctx.r26.u64 = ctx.r9.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x83140484;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr. r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r27.s32, 0, ctx.xer);
	// bne 0x83140520
	if (!ctx.cr0.eq) goto loc_83140520;
	// li r3,48
	ctx.r3.s64 = 48;
	// lwz r4,4(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// bl 0x830dd390
	ctx.lr = 0x83140498;
	sub_830DD390(ctx, base);
	// stw r3,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r3.u32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x831404c0
	if (ctx.cr0.eq) goto loc_831404C0;
	// li r6,1
	ctx.r6.s64 = 1;
	// lwz r7,4(r30)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// bl 0x83175008
	ctx.lr = 0x831404B8;
	sub_83175008(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// b 0x831404c4
	goto loc_831404C4;
loc_831404C0:
	// li r29,0
	ctx.r29.s64 = 0;
loc_831404C4:
	// lwz r11,12(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// mr r27,r29
	ctx.r27.u64 = ctx.r29.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x83140508
	if (!ctx.cr6.eq) goto loc_83140508;
	// li r3,24
	ctx.r3.s64 = 24;
	// lwz r4,4(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// bl 0x830dd390
	ctx.lr = 0x831404E0;
	sub_830DD390(ctx, base);
	// stw r3,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r3.u32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x83140500
	if (ctx.cr0.eq) goto loc_83140500;
	// li r5,128
	ctx.r5.s64 = 128;
	// lwz r6,4(r30)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// li r4,29
	ctx.r4.s64 = 29;
	// bl 0x8313fff0
	ctx.lr = 0x831404FC;
	sub_8313FFF0(ctx, base);
	// b 0x83140504
	goto loc_83140504;
loc_83140500:
	// li r3,0
	ctx.r3.s64 = 0;
loc_83140504:
	// stw r3,12(r30)
	PPC_STORE_U32(ctx.r30.u32 + 12, ctx.r3.u32);
loc_83140508:
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// lwz r3,12(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// bl 0x8311f668
	ctx.lr = 0x83140514;
	sub_8311F668(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r3,16(r29)
	PPC_STORE_U32(ctx.r29.u32 + 16, ctx.r3.u32);
	// b 0x83140524
	goto loc_83140524;
loc_83140520:
	// li r11,0
	ctx.r11.s64 = 0;
loc_83140524:
	// stb r11,0(r26)
	PPC_STORE_U8(ctx.r26.u32 + 0, ctx.r11.u8);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// addi r1,r31,144
	ctx.r1.s64 = ctx.r31.s64 + 144;
	// b 0x833a01f0
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83140448"))) PPC_WEAK_FUNC(sub_83140448);
PPC_FUNC_IMPL(__imp__sub_83140448) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x833a01a0
	ctx.lr = 0x83140450;
	__savegprlr_26(ctx, base);
	// addi r31,r1,-144
	ctx.r31.s64 = ctx.r1.s64 + -144;
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r28,r7
	ctx.r28.u64 = ctx.r7.u64;
	// mr r7,r8
	ctx.r7.u64 = ctx.r8.u64;
	// stw r3,164(r31)
	PPC_STORE_U32(ctx.r31.u32 + 164, ctx.r3.u32);
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// lwz r11,44(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 44);
	// mr r26,r9
	ctx.r26.u64 = ctx.r9.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x83140484;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr. r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r27.s32, 0, ctx.xer);
	// bne 0x83140520
	if (!ctx.cr0.eq) goto loc_83140520;
	// li r3,48
	ctx.r3.s64 = 48;
	// lwz r4,4(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// bl 0x830dd390
	ctx.lr = 0x83140498;
	sub_830DD390(ctx, base);
	// stw r3,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r3.u32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x831404c0
	if (ctx.cr0.eq) goto loc_831404C0;
	// li r6,1
	ctx.r6.s64 = 1;
	// lwz r7,4(r30)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// bl 0x83175008
	ctx.lr = 0x831404B8;
	sub_83175008(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// b 0x831404c4
	goto loc_831404C4;
loc_831404C0:
	// li r29,0
	ctx.r29.s64 = 0;
loc_831404C4:
	// lwz r11,12(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// mr r27,r29
	ctx.r27.u64 = ctx.r29.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x83140508
	if (!ctx.cr6.eq) goto loc_83140508;
	// li r3,24
	ctx.r3.s64 = 24;
	// lwz r4,4(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// bl 0x830dd390
	ctx.lr = 0x831404E0;
	sub_830DD390(ctx, base);
	// stw r3,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r3.u32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x83140500
	if (ctx.cr0.eq) goto loc_83140500;
	// li r5,128
	ctx.r5.s64 = 128;
	// lwz r6,4(r30)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// li r4,29
	ctx.r4.s64 = 29;
	// bl 0x8313fff0
	ctx.lr = 0x831404FC;
	sub_8313FFF0(ctx, base);
	// b 0x83140504
	goto loc_83140504;
loc_83140500:
	// li r3,0
	ctx.r3.s64 = 0;
loc_83140504:
	// stw r3,12(r30)
	PPC_STORE_U32(ctx.r30.u32 + 12, ctx.r3.u32);
loc_83140508:
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// lwz r3,12(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// bl 0x8311f668
	ctx.lr = 0x83140514;
	sub_8311F668(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r3,16(r29)
	PPC_STORE_U32(ctx.r29.u32 + 16, ctx.r3.u32);
	// b 0x83140524
	goto loc_83140524;
loc_83140520:
	// li r11,0
	ctx.r11.s64 = 0;
loc_83140524:
	// stb r11,0(r26)
	PPC_STORE_U8(ctx.r26.u32 + 0, ctx.r11.u8);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// addi r1,r31,144
	ctx.r1.s64 = ctx.r31.s64 + 144;
	// b 0x833a01f0
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83140534"))) PPC_WEAK_FUNC(sub_83140534);
PPC_FUNC_IMPL(__imp__sub_83140534) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// addi r31,r12,-144
	ctx.r31.s64 = ctx.r12.s64 + -144;
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,164(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 164);
	// lwz r4,4(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r3,80(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	// bl 0x830dd3e0
	ctx.lr = 0x83140554;
	sub_830DD3E0(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83140564"))) PPC_WEAK_FUNC(sub_83140564);
PPC_FUNC_IMPL(__imp__sub_83140564) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// addi r31,r12,-144
	ctx.r31.s64 = ctx.r12.s64 + -144;
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,164(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 164);
	// lwz r4,4(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r3,80(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	// bl 0x830dd3e0
	ctx.lr = 0x83140584;
	sub_830DD3E0(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83140594"))) PPC_WEAK_FUNC(sub_83140594);
PPC_FUNC_IMPL(__imp__sub_83140594) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83140598"))) PPC_WEAK_FUNC(sub_83140598);
PPC_FUNC_IMPL(__imp__sub_83140598) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lwz r25,17952(r26)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r26.u32 + 17952);
	// lwz r16,5208(r29)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r29.u32 + 5208);
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x833a01a4
	ctx.lr = 0x831405A8;
	__savegprlr_27(ctx, base);
	// addi r31,r1,-144
	ctx.r31.s64 = ctx.r1.s64 + -144;
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// stw r3,164(r31)
	PPC_STORE_U32(ctx.r31.u32 + 164, ctx.r3.u32);
	// li r3,48
	ctx.r3.s64 = 48;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r28,r7
	ctx.r28.u64 = ctx.r7.u64;
	// mr r27,r9
	ctx.r27.u64 = ctx.r9.u64;
	// lwz r4,4(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// bl 0x830dd390
	ctx.lr = 0x831405D0;
	sub_830DD390(ctx, base);
	// stw r3,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r3.u32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x831405f8
	if (ctx.cr0.eq) goto loc_831405F8;
	// li r6,1
	ctx.r6.s64 = 1;
	// lwz r7,4(r30)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// bl 0x83175008
	ctx.lr = 0x831405F0;
	sub_83175008(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// b 0x831405fc
	goto loc_831405FC;
loc_831405F8:
	// li r29,0
	ctx.r29.s64 = 0;
loc_831405FC:
	// clrlwi. r11,r27,24
	ctx.r11.u64 = ctx.r27.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x83140650
	if (ctx.cr0.eq) goto loc_83140650;
	// lwz r11,12(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x83140644
	if (!ctx.cr6.eq) goto loc_83140644;
	// li r3,24
	ctx.r3.s64 = 24;
	// lwz r4,4(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// bl 0x830dd390
	ctx.lr = 0x8314061C;
	sub_830DD390(ctx, base);
	// stw r3,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r3.u32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8314063c
	if (ctx.cr0.eq) goto loc_8314063C;
	// li r5,128
	ctx.r5.s64 = 128;
	// lwz r6,4(r30)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// li r4,29
	ctx.r4.s64 = 29;
	// bl 0x8313fff0
	ctx.lr = 0x83140638;
	sub_8313FFF0(ctx, base);
	// b 0x83140640
	goto loc_83140640;
loc_8314063C:
	// li r3,0
	ctx.r3.s64 = 0;
loc_83140640:
	// stw r3,12(r30)
	PPC_STORE_U32(ctx.r30.u32 + 12, ctx.r3.u32);
loc_83140644:
	// lwz r3,12(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// b 0x83140658
	goto loc_83140658;
loc_83140650:
	// lwz r3,8(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
loc_83140658:
	// bl 0x8311f668
	ctx.lr = 0x8314065C;
	sub_8311F668(ctx, base);
	// stw r3,16(r29)
	PPC_STORE_U32(ctx.r29.u32 + 16, ctx.r3.u32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r1,r31,144
	ctx.r1.s64 = ctx.r31.s64 + 144;
	// b 0x833a01f4
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_831405A0"))) PPC_WEAK_FUNC(sub_831405A0);
PPC_FUNC_IMPL(__imp__sub_831405A0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x833a01a4
	ctx.lr = 0x831405A8;
	__savegprlr_27(ctx, base);
	// addi r31,r1,-144
	ctx.r31.s64 = ctx.r1.s64 + -144;
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// stw r3,164(r31)
	PPC_STORE_U32(ctx.r31.u32 + 164, ctx.r3.u32);
	// li r3,48
	ctx.r3.s64 = 48;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r28,r7
	ctx.r28.u64 = ctx.r7.u64;
	// mr r27,r9
	ctx.r27.u64 = ctx.r9.u64;
	// lwz r4,4(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// bl 0x830dd390
	ctx.lr = 0x831405D0;
	sub_830DD390(ctx, base);
	// stw r3,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r3.u32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x831405f8
	if (ctx.cr0.eq) goto loc_831405F8;
	// li r6,1
	ctx.r6.s64 = 1;
	// lwz r7,4(r30)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// bl 0x83175008
	ctx.lr = 0x831405F0;
	sub_83175008(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// b 0x831405fc
	goto loc_831405FC;
loc_831405F8:
	// li r29,0
	ctx.r29.s64 = 0;
loc_831405FC:
	// clrlwi. r11,r27,24
	ctx.r11.u64 = ctx.r27.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x83140650
	if (ctx.cr0.eq) goto loc_83140650;
	// lwz r11,12(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x83140644
	if (!ctx.cr6.eq) goto loc_83140644;
	// li r3,24
	ctx.r3.s64 = 24;
	// lwz r4,4(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// bl 0x830dd390
	ctx.lr = 0x8314061C;
	sub_830DD390(ctx, base);
	// stw r3,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r3.u32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8314063c
	if (ctx.cr0.eq) goto loc_8314063C;
	// li r5,128
	ctx.r5.s64 = 128;
	// lwz r6,4(r30)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// li r4,29
	ctx.r4.s64 = 29;
	// bl 0x8313fff0
	ctx.lr = 0x83140638;
	sub_8313FFF0(ctx, base);
	// b 0x83140640
	goto loc_83140640;
loc_8314063C:
	// li r3,0
	ctx.r3.s64 = 0;
loc_83140640:
	// stw r3,12(r30)
	PPC_STORE_U32(ctx.r30.u32 + 12, ctx.r3.u32);
loc_83140644:
	// lwz r3,12(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// b 0x83140658
	goto loc_83140658;
loc_83140650:
	// lwz r3,8(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
loc_83140658:
	// bl 0x8311f668
	ctx.lr = 0x8314065C;
	sub_8311F668(ctx, base);
	// stw r3,16(r29)
	PPC_STORE_U32(ctx.r29.u32 + 16, ctx.r3.u32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r1,r31,144
	ctx.r1.s64 = ctx.r31.s64 + 144;
	// b 0x833a01f4
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8314066C"))) PPC_WEAK_FUNC(sub_8314066C);
PPC_FUNC_IMPL(__imp__sub_8314066C) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// addi r31,r12,-144
	ctx.r31.s64 = ctx.r12.s64 + -144;
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,164(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 164);
	// lwz r4,4(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r3,80(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	// bl 0x830dd3e0
	ctx.lr = 0x8314068C;
	sub_830DD3E0(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8314069C"))) PPC_WEAK_FUNC(sub_8314069C);
PPC_FUNC_IMPL(__imp__sub_8314069C) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// addi r31,r12,-144
	ctx.r31.s64 = ctx.r12.s64 + -144;
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,164(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 164);
	// lwz r4,4(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r3,80(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	// bl 0x830dd3e0
	ctx.lr = 0x831406BC;
	sub_830DD3E0(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831406CC"))) PPC_WEAK_FUNC(sub_831406CC);
PPC_FUNC_IMPL(__imp__sub_831406CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_831406D0"))) PPC_WEAK_FUNC(sub_831406D0);
PPC_FUNC_IMPL(__imp__sub_831406D0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lwz r25,17952(r26)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r26.u32 + 17952);
	// lwz r16,5360(r29)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r29.u32 + 5360);
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x833a0198
	ctx.lr = 0x831406E0;
	__savegprlr_24(ctx, base);
	// addi r31,r1,-160
	ctx.r31.s64 = ctx.r1.s64 + -160;
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31827
	ctx.r11.s64 = -2085814272;
	// addi r24,r11,-4648
	ctx.r24.s64 = ctx.r11.s64 + -4648;
	// lbz r11,-4648(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + -4648);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x83140968
	if (!ctx.cr0.eq) goto loc_83140968;
	// lwz r4,4(r24)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r24.u32 + 4);
	// lis r27,-31827
	ctx.r27.s64 = -2085814272;
	// li r26,0
	ctx.r26.s64 = 0;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// bne cr6,0x83140760
	if (!ctx.cr6.eq) goto loc_83140760;
	// lis r11,-31827
	ctx.r11.s64 = -2085814272;
	// addi r3,r31,80
	ctx.r3.s64 = ctx.r31.s64 + 80;
	// lwz r4,-5080(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + -5080);
	// bl 0x830fcf80
	ctx.lr = 0x83140720;
	sub_830FCF80(ctx, base);
	// lwz r11,4(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x83140754
	if (!ctx.cr6.eq) goto loc_83140754;
	// li r3,4
	ctx.r3.s64 = 4;
	// bl 0x830dd340
	ctx.lr = 0x83140734;
	sub_830DD340(ctx, base);
	// stw r3,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r3.u32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8314074c
	if (ctx.cr0.eq) goto loc_8314074C;
	// lwz r4,-5084(r27)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r27.u32 + -5084);
	// bl 0x830fcef0
	ctx.lr = 0x83140748;
	sub_830FCEF0(ctx, base);
	// b 0x83140750
	goto loc_83140750;
loc_8314074C:
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
loc_83140750:
	// stw r3,4(r24)
	PPC_STORE_U32(ctx.r24.u32 + 4, ctx.r3.u32);
loc_83140754:
	// addi r3,r31,80
	ctx.r3.s64 = ctx.r31.s64 + 80;
	// bl 0x830fcfb8
	ctx.lr = 0x8314075C;
	sub_830FCFB8(ctx, base);
	// lwz r4,4(r24)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r24.u32 + 4);
loc_83140760:
	// addi r3,r31,84
	ctx.r3.s64 = ctx.r31.s64 + 84;
	// bl 0x830fcf80
	ctx.lr = 0x83140768;
	sub_830FCF80(ctx, base);
	// lbz r11,0(r24)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r24.u32 + 0);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x83140960
	if (!ctx.cr0.eq) goto loc_83140960;
	// li r3,24
	ctx.r3.s64 = 24;
	// bl 0x830dd340
	ctx.lr = 0x8314077C;
	sub_830DD340(ctx, base);
	// stw r3,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r3.u32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x831407a0
	if (ctx.cr0.eq) goto loc_831407A0;
	// li r5,12
	ctx.r5.s64 = 12;
	// lwz r6,-5084(r27)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r27.u32 + -5084);
	// li r4,11
	ctx.r4.s64 = 11;
	// bl 0x8313fff0
	ctx.lr = 0x83140798;
	sub_8313FFF0(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// b 0x831407a4
	goto loc_831407A4;
loc_831407A0:
	// mr r11,r26
	ctx.r11.u64 = ctx.r26.u64;
loc_831407A4:
	// lis r25,-31827
	ctx.r25.s64 = -2085814272;
	// li r3,44
	ctx.r3.s64 = 44;
	// stw r11,-4640(r25)
	PPC_STORE_U32(ctx.r25.u32 + -4640, ctx.r11.u32);
	// bl 0x830dd340
	ctx.lr = 0x831407B4;
	sub_830DD340(ctx, base);
	// mr. r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// stw r30,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r30.u32);
	// lis r11,-32227
	ctx.r11.s64 = -2112028672;
	// li r29,1
	ctx.r29.s64 = 1;
	// addi r28,r11,-20344
	ctx.r28.s64 = ctx.r11.s64 + -20344;
	// beq 0x831407fc
	if (ctx.cr0.eq) goto loc_831407FC;
	// lis r11,-32228
	ctx.r11.s64 = -2112094208;
	// lwz r6,-5084(r27)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r27.u32 + -5084);
	// li r5,38
	ctx.r5.s64 = 38;
	// addi r4,r11,-5648
	ctx.r4.s64 = ctx.r11.s64 + -5648;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x83163a38
	ctx.lr = 0x831407E4;
	sub_83163A38(ctx, base);
	// stw r28,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r28.u32);
	// stb r29,40(r30)
	PPC_STORE_U8(ctx.r30.u32 + 40, ctx.r29.u8);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// stb r26,41(r30)
	PPC_STORE_U8(ctx.r30.u32 + 41, ctx.r26.u8);
	// stb r29,42(r30)
	PPC_STORE_U8(ctx.r30.u32 + 42, ctx.r29.u8);
	// b 0x83140800
	goto loc_83140800;
loc_831407FC:
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
loc_83140800:
	// lwz r3,-4640(r25)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r25.u32 + -4640);
	// bl 0x831401f0
	ctx.lr = 0x83140808;
	sub_831401F0(ctx, base);
	// li r3,44
	ctx.r3.s64 = 44;
	// bl 0x830dd340
	ctx.lr = 0x83140810;
	sub_830DD340(ctx, base);
	// mr. r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// stw r30,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r30.u32);
	// beq 0x8314084c
	if (ctx.cr0.eq) goto loc_8314084C;
	// lis r11,-32228
	ctx.r11.s64 = -2112094208;
	// lwz r6,-5084(r27)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r27.u32 + -5084);
	// li r5,60
	ctx.r5.s64 = 60;
	// addi r4,r11,-5640
	ctx.r4.s64 = ctx.r11.s64 + -5640;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x83163a38
	ctx.lr = 0x83140834;
	sub_83163A38(ctx, base);
	// stw r28,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r28.u32);
	// stb r29,40(r30)
	PPC_STORE_U8(ctx.r30.u32 + 40, ctx.r29.u8);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// stb r26,41(r30)
	PPC_STORE_U8(ctx.r30.u32 + 41, ctx.r26.u8);
	// stb r29,42(r30)
	PPC_STORE_U8(ctx.r30.u32 + 42, ctx.r29.u8);
	// b 0x83140850
	goto loc_83140850;
loc_8314084C:
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
loc_83140850:
	// lwz r3,-4640(r25)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r25.u32 + -4640);
	// bl 0x831401f0
	ctx.lr = 0x83140858;
	sub_831401F0(ctx, base);
	// li r3,44
	ctx.r3.s64 = 44;
	// bl 0x830dd340
	ctx.lr = 0x83140860;
	sub_830DD340(ctx, base);
	// mr. r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// stw r30,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r30.u32);
	// beq 0x8314089c
	if (ctx.cr0.eq) goto loc_8314089C;
	// lis r11,-32228
	ctx.r11.s64 = -2112094208;
	// lwz r6,-5084(r27)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r27.u32 + -5084);
	// li r5,62
	ctx.r5.s64 = 62;
	// addi r4,r11,-5632
	ctx.r4.s64 = ctx.r11.s64 + -5632;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x83163a38
	ctx.lr = 0x83140884;
	sub_83163A38(ctx, base);
	// stw r28,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r28.u32);
	// stb r29,40(r30)
	PPC_STORE_U8(ctx.r30.u32 + 40, ctx.r29.u8);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// stb r26,41(r30)
	PPC_STORE_U8(ctx.r30.u32 + 41, ctx.r26.u8);
	// stb r29,42(r30)
	PPC_STORE_U8(ctx.r30.u32 + 42, ctx.r29.u8);
	// b 0x831408a0
	goto loc_831408A0;
loc_8314089C:
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
loc_831408A0:
	// lwz r3,-4640(r25)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r25.u32 + -4640);
	// bl 0x831401f0
	ctx.lr = 0x831408A8;
	sub_831401F0(ctx, base);
	// li r3,44
	ctx.r3.s64 = 44;
	// bl 0x830dd340
	ctx.lr = 0x831408B0;
	sub_830DD340(ctx, base);
	// mr. r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// stw r30,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r30.u32);
	// beq 0x831408ec
	if (ctx.cr0.eq) goto loc_831408EC;
	// lis r11,-32228
	ctx.r11.s64 = -2112094208;
	// lwz r6,-5084(r27)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r27.u32 + -5084);
	// li r5,34
	ctx.r5.s64 = 34;
	// addi r4,r11,-5624
	ctx.r4.s64 = ctx.r11.s64 + -5624;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x83163a38
	ctx.lr = 0x831408D4;
	sub_83163A38(ctx, base);
	// stw r28,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r28.u32);
	// stb r29,40(r30)
	PPC_STORE_U8(ctx.r30.u32 + 40, ctx.r29.u8);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// stb r26,41(r30)
	PPC_STORE_U8(ctx.r30.u32 + 41, ctx.r26.u8);
	// stb r29,42(r30)
	PPC_STORE_U8(ctx.r30.u32 + 42, ctx.r29.u8);
	// b 0x831408f0
	goto loc_831408F0;
loc_831408EC:
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
loc_831408F0:
	// lwz r3,-4640(r25)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r25.u32 + -4640);
	// bl 0x831401f0
	ctx.lr = 0x831408F8;
	sub_831401F0(ctx, base);
	// li r3,44
	ctx.r3.s64 = 44;
	// bl 0x830dd340
	ctx.lr = 0x83140900;
	sub_830DD340(ctx, base);
	// mr. r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// stw r30,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r30.u32);
	// beq 0x8314093c
	if (ctx.cr0.eq) goto loc_8314093C;
	// lis r11,-32228
	ctx.r11.s64 = -2112094208;
	// lwz r6,-5084(r27)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r27.u32 + -5084);
	// li r5,39
	ctx.r5.s64 = 39;
	// addi r4,r11,-5612
	ctx.r4.s64 = ctx.r11.s64 + -5612;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x83163a38
	ctx.lr = 0x83140924;
	sub_83163A38(ctx, base);
	// stw r28,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r28.u32);
	// stb r29,40(r30)
	PPC_STORE_U8(ctx.r30.u32 + 40, ctx.r29.u8);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// stb r26,41(r30)
	PPC_STORE_U8(ctx.r30.u32 + 41, ctx.r26.u8);
	// stb r29,42(r30)
	PPC_STORE_U8(ctx.r30.u32 + 42, ctx.r29.u8);
	// b 0x83140940
	goto loc_83140940;
loc_8314093C:
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
loc_83140940:
	// lwz r3,-4640(r25)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r25.u32 + -4640);
	// bl 0x831401f0
	ctx.lr = 0x83140948;
	sub_831401F0(ctx, base);
	// lis r11,-31980
	ctx.r11.s64 = -2095841280;
	// lis r10,-31827
	ctx.r10.s64 = -2085814272;
	// addi r4,r11,952
	ctx.r4.s64 = ctx.r11.s64 + 952;
	// addi r3,r10,-4636
	ctx.r3.s64 = ctx.r10.s64 + -4636;
	// bl 0x830ff598
	ctx.lr = 0x8314095C;
	sub_830FF598(ctx, base);
	// stb r29,0(r24)
	PPC_STORE_U8(ctx.r24.u32 + 0, ctx.r29.u8);
loc_83140960:
	// addi r3,r31,84
	ctx.r3.s64 = ctx.r31.s64 + 84;
	// bl 0x830fcfb8
	ctx.lr = 0x83140968;
	sub_830FCFB8(ctx, base);
loc_83140968:
	// addi r1,r31,160
	ctx.r1.s64 = ctx.r31.s64 + 160;
	// b 0x833a01e8
	__restgprlr_24(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_831406D8"))) PPC_WEAK_FUNC(sub_831406D8);
PPC_FUNC_IMPL(__imp__sub_831406D8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x833a0198
	ctx.lr = 0x831406E0;
	__savegprlr_24(ctx, base);
	// addi r31,r1,-160
	ctx.r31.s64 = ctx.r1.s64 + -160;
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31827
	ctx.r11.s64 = -2085814272;
	// addi r24,r11,-4648
	ctx.r24.s64 = ctx.r11.s64 + -4648;
	// lbz r11,-4648(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + -4648);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x83140968
	if (!ctx.cr0.eq) goto loc_83140968;
	// lwz r4,4(r24)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r24.u32 + 4);
	// lis r27,-31827
	ctx.r27.s64 = -2085814272;
	// li r26,0
	ctx.r26.s64 = 0;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// bne cr6,0x83140760
	if (!ctx.cr6.eq) goto loc_83140760;
	// lis r11,-31827
	ctx.r11.s64 = -2085814272;
	// addi r3,r31,80
	ctx.r3.s64 = ctx.r31.s64 + 80;
	// lwz r4,-5080(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + -5080);
	// bl 0x830fcf80
	ctx.lr = 0x83140720;
	sub_830FCF80(ctx, base);
	// lwz r11,4(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x83140754
	if (!ctx.cr6.eq) goto loc_83140754;
	// li r3,4
	ctx.r3.s64 = 4;
	// bl 0x830dd340
	ctx.lr = 0x83140734;
	sub_830DD340(ctx, base);
	// stw r3,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r3.u32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8314074c
	if (ctx.cr0.eq) goto loc_8314074C;
	// lwz r4,-5084(r27)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r27.u32 + -5084);
	// bl 0x830fcef0
	ctx.lr = 0x83140748;
	sub_830FCEF0(ctx, base);
	// b 0x83140750
	goto loc_83140750;
loc_8314074C:
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
loc_83140750:
	// stw r3,4(r24)
	PPC_STORE_U32(ctx.r24.u32 + 4, ctx.r3.u32);
loc_83140754:
	// addi r3,r31,80
	ctx.r3.s64 = ctx.r31.s64 + 80;
	// bl 0x830fcfb8
	ctx.lr = 0x8314075C;
	sub_830FCFB8(ctx, base);
	// lwz r4,4(r24)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r24.u32 + 4);
loc_83140760:
	// addi r3,r31,84
	ctx.r3.s64 = ctx.r31.s64 + 84;
	// bl 0x830fcf80
	ctx.lr = 0x83140768;
	sub_830FCF80(ctx, base);
	// lbz r11,0(r24)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r24.u32 + 0);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x83140960
	if (!ctx.cr0.eq) goto loc_83140960;
	// li r3,24
	ctx.r3.s64 = 24;
	// bl 0x830dd340
	ctx.lr = 0x8314077C;
	sub_830DD340(ctx, base);
	// stw r3,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r3.u32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x831407a0
	if (ctx.cr0.eq) goto loc_831407A0;
	// li r5,12
	ctx.r5.s64 = 12;
	// lwz r6,-5084(r27)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r27.u32 + -5084);
	// li r4,11
	ctx.r4.s64 = 11;
	// bl 0x8313fff0
	ctx.lr = 0x83140798;
	sub_8313FFF0(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// b 0x831407a4
	goto loc_831407A4;
loc_831407A0:
	// mr r11,r26
	ctx.r11.u64 = ctx.r26.u64;
loc_831407A4:
	// lis r25,-31827
	ctx.r25.s64 = -2085814272;
	// li r3,44
	ctx.r3.s64 = 44;
	// stw r11,-4640(r25)
	PPC_STORE_U32(ctx.r25.u32 + -4640, ctx.r11.u32);
	// bl 0x830dd340
	ctx.lr = 0x831407B4;
	sub_830DD340(ctx, base);
	// mr. r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// stw r30,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r30.u32);
	// lis r11,-32227
	ctx.r11.s64 = -2112028672;
	// li r29,1
	ctx.r29.s64 = 1;
	// addi r28,r11,-20344
	ctx.r28.s64 = ctx.r11.s64 + -20344;
	// beq 0x831407fc
	if (ctx.cr0.eq) goto loc_831407FC;
	// lis r11,-32228
	ctx.r11.s64 = -2112094208;
	// lwz r6,-5084(r27)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r27.u32 + -5084);
	// li r5,38
	ctx.r5.s64 = 38;
	// addi r4,r11,-5648
	ctx.r4.s64 = ctx.r11.s64 + -5648;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x83163a38
	ctx.lr = 0x831407E4;
	sub_83163A38(ctx, base);
	// stw r28,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r28.u32);
	// stb r29,40(r30)
	PPC_STORE_U8(ctx.r30.u32 + 40, ctx.r29.u8);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// stb r26,41(r30)
	PPC_STORE_U8(ctx.r30.u32 + 41, ctx.r26.u8);
	// stb r29,42(r30)
	PPC_STORE_U8(ctx.r30.u32 + 42, ctx.r29.u8);
	// b 0x83140800
	goto loc_83140800;
loc_831407FC:
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
loc_83140800:
	// lwz r3,-4640(r25)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r25.u32 + -4640);
	// bl 0x831401f0
	ctx.lr = 0x83140808;
	sub_831401F0(ctx, base);
	// li r3,44
	ctx.r3.s64 = 44;
	// bl 0x830dd340
	ctx.lr = 0x83140810;
	sub_830DD340(ctx, base);
	// mr. r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// stw r30,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r30.u32);
	// beq 0x8314084c
	if (ctx.cr0.eq) goto loc_8314084C;
	// lis r11,-32228
	ctx.r11.s64 = -2112094208;
	// lwz r6,-5084(r27)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r27.u32 + -5084);
	// li r5,60
	ctx.r5.s64 = 60;
	// addi r4,r11,-5640
	ctx.r4.s64 = ctx.r11.s64 + -5640;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x83163a38
	ctx.lr = 0x83140834;
	sub_83163A38(ctx, base);
	// stw r28,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r28.u32);
	// stb r29,40(r30)
	PPC_STORE_U8(ctx.r30.u32 + 40, ctx.r29.u8);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// stb r26,41(r30)
	PPC_STORE_U8(ctx.r30.u32 + 41, ctx.r26.u8);
	// stb r29,42(r30)
	PPC_STORE_U8(ctx.r30.u32 + 42, ctx.r29.u8);
	// b 0x83140850
	goto loc_83140850;
loc_8314084C:
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
loc_83140850:
	// lwz r3,-4640(r25)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r25.u32 + -4640);
	// bl 0x831401f0
	ctx.lr = 0x83140858;
	sub_831401F0(ctx, base);
	// li r3,44
	ctx.r3.s64 = 44;
	// bl 0x830dd340
	ctx.lr = 0x83140860;
	sub_830DD340(ctx, base);
	// mr. r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// stw r30,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r30.u32);
	// beq 0x8314089c
	if (ctx.cr0.eq) goto loc_8314089C;
	// lis r11,-32228
	ctx.r11.s64 = -2112094208;
	// lwz r6,-5084(r27)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r27.u32 + -5084);
	// li r5,62
	ctx.r5.s64 = 62;
	// addi r4,r11,-5632
	ctx.r4.s64 = ctx.r11.s64 + -5632;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x83163a38
	ctx.lr = 0x83140884;
	sub_83163A38(ctx, base);
	// stw r28,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r28.u32);
	// stb r29,40(r30)
	PPC_STORE_U8(ctx.r30.u32 + 40, ctx.r29.u8);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// stb r26,41(r30)
	PPC_STORE_U8(ctx.r30.u32 + 41, ctx.r26.u8);
	// stb r29,42(r30)
	PPC_STORE_U8(ctx.r30.u32 + 42, ctx.r29.u8);
	// b 0x831408a0
	goto loc_831408A0;
loc_8314089C:
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
loc_831408A0:
	// lwz r3,-4640(r25)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r25.u32 + -4640);
	// bl 0x831401f0
	ctx.lr = 0x831408A8;
	sub_831401F0(ctx, base);
	// li r3,44
	ctx.r3.s64 = 44;
	// bl 0x830dd340
	ctx.lr = 0x831408B0;
	sub_830DD340(ctx, base);
	// mr. r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// stw r30,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r30.u32);
	// beq 0x831408ec
	if (ctx.cr0.eq) goto loc_831408EC;
	// lis r11,-32228
	ctx.r11.s64 = -2112094208;
	// lwz r6,-5084(r27)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r27.u32 + -5084);
	// li r5,34
	ctx.r5.s64 = 34;
	// addi r4,r11,-5624
	ctx.r4.s64 = ctx.r11.s64 + -5624;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x83163a38
	ctx.lr = 0x831408D4;
	sub_83163A38(ctx, base);
	// stw r28,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r28.u32);
	// stb r29,40(r30)
	PPC_STORE_U8(ctx.r30.u32 + 40, ctx.r29.u8);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// stb r26,41(r30)
	PPC_STORE_U8(ctx.r30.u32 + 41, ctx.r26.u8);
	// stb r29,42(r30)
	PPC_STORE_U8(ctx.r30.u32 + 42, ctx.r29.u8);
	// b 0x831408f0
	goto loc_831408F0;
loc_831408EC:
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
loc_831408F0:
	// lwz r3,-4640(r25)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r25.u32 + -4640);
	// bl 0x831401f0
	ctx.lr = 0x831408F8;
	sub_831401F0(ctx, base);
	// li r3,44
	ctx.r3.s64 = 44;
	// bl 0x830dd340
	ctx.lr = 0x83140900;
	sub_830DD340(ctx, base);
	// mr. r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// stw r30,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r30.u32);
	// beq 0x8314093c
	if (ctx.cr0.eq) goto loc_8314093C;
	// lis r11,-32228
	ctx.r11.s64 = -2112094208;
	// lwz r6,-5084(r27)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r27.u32 + -5084);
	// li r5,39
	ctx.r5.s64 = 39;
	// addi r4,r11,-5612
	ctx.r4.s64 = ctx.r11.s64 + -5612;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x83163a38
	ctx.lr = 0x83140924;
	sub_83163A38(ctx, base);
	// stw r28,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r28.u32);
	// stb r29,40(r30)
	PPC_STORE_U8(ctx.r30.u32 + 40, ctx.r29.u8);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// stb r26,41(r30)
	PPC_STORE_U8(ctx.r30.u32 + 41, ctx.r26.u8);
	// stb r29,42(r30)
	PPC_STORE_U8(ctx.r30.u32 + 42, ctx.r29.u8);
	// b 0x83140940
	goto loc_83140940;
loc_8314093C:
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
loc_83140940:
	// lwz r3,-4640(r25)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r25.u32 + -4640);
	// bl 0x831401f0
	ctx.lr = 0x83140948;
	sub_831401F0(ctx, base);
	// lis r11,-31980
	ctx.r11.s64 = -2095841280;
	// lis r10,-31827
	ctx.r10.s64 = -2085814272;
	// addi r4,r11,952
	ctx.r4.s64 = ctx.r11.s64 + 952;
	// addi r3,r10,-4636
	ctx.r3.s64 = ctx.r10.s64 + -4636;
	// bl 0x830ff598
	ctx.lr = 0x8314095C;
	sub_830FF598(ctx, base);
	// stb r29,0(r24)
	PPC_STORE_U8(ctx.r24.u32 + 0, ctx.r29.u8);
loc_83140960:
	// addi r3,r31,84
	ctx.r3.s64 = ctx.r31.s64 + 84;
	// bl 0x830fcfb8
	ctx.lr = 0x83140968;
	sub_830FCFB8(ctx, base);
loc_83140968:
	// addi r1,r31,160
	ctx.r1.s64 = ctx.r31.s64 + 160;
	// b 0x833a01e8
	__restgprlr_24(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83140970"))) PPC_WEAK_FUNC(sub_83140970);
PPC_FUNC_IMPL(__imp__sub_83140970) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// addi r31,r12,-160
	ctx.r31.s64 = ctx.r12.s64 + -160;
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r3,r31,80
	ctx.r3.s64 = ctx.r31.s64 + 80;
	// bl 0x830fcfb8
	ctx.lr = 0x83140988;
	sub_830FCFB8(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83140998"))) PPC_WEAK_FUNC(sub_83140998);
PPC_FUNC_IMPL(__imp__sub_83140998) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// addi r31,r12,-160
	ctx.r31.s64 = ctx.r12.s64 + -160;
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r3,84(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 84);
	// bl 0x830dd3e0
	ctx.lr = 0x831409B0;
	sub_830DD3E0(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831409C0"))) PPC_WEAK_FUNC(sub_831409C0);
PPC_FUNC_IMPL(__imp__sub_831409C0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// addi r31,r12,-160
	ctx.r31.s64 = ctx.r12.s64 + -160;
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r3,r31,84
	ctx.r3.s64 = ctx.r31.s64 + 84;
	// bl 0x830fcfb8
	ctx.lr = 0x831409D8;
	sub_830FCFB8(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831409E8"))) PPC_WEAK_FUNC(sub_831409E8);
PPC_FUNC_IMPL(__imp__sub_831409E8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// addi r31,r12,-160
	ctx.r31.s64 = ctx.r12.s64 + -160;
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r3,80(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	// bl 0x830dd3e0
	ctx.lr = 0x83140A00;
	sub_830DD3E0(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83140A10"))) PPC_WEAK_FUNC(sub_83140A10);
PPC_FUNC_IMPL(__imp__sub_83140A10) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// addi r31,r12,-160
	ctx.r31.s64 = ctx.r12.s64 + -160;
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r3,80(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	// bl 0x830dd3e0
	ctx.lr = 0x83140A28;
	sub_830DD3E0(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83140A38"))) PPC_WEAK_FUNC(sub_83140A38);
PPC_FUNC_IMPL(__imp__sub_83140A38) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// addi r31,r12,-160
	ctx.r31.s64 = ctx.r12.s64 + -160;
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r3,80(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	// bl 0x830dd3e0
	ctx.lr = 0x83140A50;
	sub_830DD3E0(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83140A60"))) PPC_WEAK_FUNC(sub_83140A60);
PPC_FUNC_IMPL(__imp__sub_83140A60) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// addi r31,r12,-160
	ctx.r31.s64 = ctx.r12.s64 + -160;
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r3,80(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	// bl 0x830dd3e0
	ctx.lr = 0x83140A78;
	sub_830DD3E0(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83140A88"))) PPC_WEAK_FUNC(sub_83140A88);
PPC_FUNC_IMPL(__imp__sub_83140A88) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// addi r31,r12,-160
	ctx.r31.s64 = ctx.r12.s64 + -160;
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r3,80(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	// bl 0x830dd3e0
	ctx.lr = 0x83140AA0;
	sub_830DD3E0(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83140AB0"))) PPC_WEAK_FUNC(sub_83140AB0);
PPC_FUNC_IMPL(__imp__sub_83140AB0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// addi r31,r12,-160
	ctx.r31.s64 = ctx.r12.s64 + -160;
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r3,80(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	// bl 0x830dd3e0
	ctx.lr = 0x83140AC8;
	sub_830DD3E0(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83140AD8"))) PPC_WEAK_FUNC(sub_83140AD8);
PPC_FUNC_IMPL(__imp__sub_83140AD8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lwz r25,17952(r26)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r26.u32 + 17952);
	// lwz r16,5592(r29)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r29.u32 + 5592);
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x833a019c
	ctx.lr = 0x83140AE8;
	__savegprlr_25(ctx, base);
	// addi r31,r1,-160
	ctx.r31.s64 = ctx.r1.s64 + -160;
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r3,24
	ctx.r3.s64 = 24;
	// bl 0x830dd340
	ctx.lr = 0x83140AF8;
	sub_830DD340(ctx, base);
	// stw r3,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r3.u32);
	// lis r27,-31827
	ctx.r27.s64 = -2085814272;
	// li r26,0
	ctx.r26.s64 = 0;
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x83140b20
	if (ctx.cr0.eq) goto loc_83140B20;
	// li r5,12
	ctx.r5.s64 = 12;
	// lwz r6,-5084(r27)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r27.u32 + -5084);
	// li r4,11
	ctx.r4.s64 = 11;
	// bl 0x8313fff0
	ctx.lr = 0x83140B1C;
	sub_8313FFF0(ctx, base);
	// b 0x83140b24
	goto loc_83140B24;
loc_83140B20:
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
loc_83140B24:
	// lis r25,-31827
	ctx.r25.s64 = -2085814272;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// stw r3,-4640(r25)
	PPC_STORE_U32(ctx.r25.u32 + -4640, ctx.r3.u32);
	// beq cr6,0x83140cec
	if (ctx.cr6.eq) goto loc_83140CEC;
	// li r3,44
	ctx.r3.s64 = 44;
	// bl 0x830dd340
	ctx.lr = 0x83140B3C;
	sub_830DD340(ctx, base);
	// mr. r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// stw r30,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r30.u32);
	// lis r11,-32227
	ctx.r11.s64 = -2112028672;
	// li r29,1
	ctx.r29.s64 = 1;
	// addi r28,r11,-20344
	ctx.r28.s64 = ctx.r11.s64 + -20344;
	// beq 0x83140b84
	if (ctx.cr0.eq) goto loc_83140B84;
	// lis r11,-32228
	ctx.r11.s64 = -2112094208;
	// lwz r6,-5084(r27)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r27.u32 + -5084);
	// li r5,38
	ctx.r5.s64 = 38;
	// addi r4,r11,-5648
	ctx.r4.s64 = ctx.r11.s64 + -5648;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x83163a38
	ctx.lr = 0x83140B6C;
	sub_83163A38(ctx, base);
	// stw r28,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r28.u32);
	// stb r29,40(r30)
	PPC_STORE_U8(ctx.r30.u32 + 40, ctx.r29.u8);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// stb r26,41(r30)
	PPC_STORE_U8(ctx.r30.u32 + 41, ctx.r26.u8);
	// stb r29,42(r30)
	PPC_STORE_U8(ctx.r30.u32 + 42, ctx.r29.u8);
	// b 0x83140b88
	goto loc_83140B88;
loc_83140B84:
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
loc_83140B88:
	// lwz r3,-4640(r25)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r25.u32 + -4640);
	// bl 0x831401f0
	ctx.lr = 0x83140B90;
	sub_831401F0(ctx, base);
	// li r3,44
	ctx.r3.s64 = 44;
	// bl 0x830dd340
	ctx.lr = 0x83140B98;
	sub_830DD340(ctx, base);
	// mr. r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// stw r30,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r30.u32);
	// beq 0x83140bd4
	if (ctx.cr0.eq) goto loc_83140BD4;
	// lis r11,-32228
	ctx.r11.s64 = -2112094208;
	// lwz r6,-5084(r27)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r27.u32 + -5084);
	// li r5,60
	ctx.r5.s64 = 60;
	// addi r4,r11,-5640
	ctx.r4.s64 = ctx.r11.s64 + -5640;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x83163a38
	ctx.lr = 0x83140BBC;
	sub_83163A38(ctx, base);
	// stw r28,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r28.u32);
	// stb r29,40(r30)
	PPC_STORE_U8(ctx.r30.u32 + 40, ctx.r29.u8);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// stb r26,41(r30)
	PPC_STORE_U8(ctx.r30.u32 + 41, ctx.r26.u8);
	// stb r29,42(r30)
	PPC_STORE_U8(ctx.r30.u32 + 42, ctx.r29.u8);
	// b 0x83140bd8
	goto loc_83140BD8;
loc_83140BD4:
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
loc_83140BD8:
	// lwz r3,-4640(r25)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r25.u32 + -4640);
	// bl 0x831401f0
	ctx.lr = 0x83140BE0;
	sub_831401F0(ctx, base);
	// li r3,44
	ctx.r3.s64 = 44;
	// bl 0x830dd340
	ctx.lr = 0x83140BE8;
	sub_830DD340(ctx, base);
	// mr. r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// stw r30,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r30.u32);
	// beq 0x83140c24
	if (ctx.cr0.eq) goto loc_83140C24;
	// lis r11,-32228
	ctx.r11.s64 = -2112094208;
	// lwz r6,-5084(r27)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r27.u32 + -5084);
	// li r5,62
	ctx.r5.s64 = 62;
	// addi r4,r11,-5632
	ctx.r4.s64 = ctx.r11.s64 + -5632;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x83163a38
	ctx.lr = 0x83140C0C;
	sub_83163A38(ctx, base);
	// stw r28,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r28.u32);
	// stb r29,40(r30)
	PPC_STORE_U8(ctx.r30.u32 + 40, ctx.r29.u8);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// stb r26,41(r30)
	PPC_STORE_U8(ctx.r30.u32 + 41, ctx.r26.u8);
	// stb r29,42(r30)
	PPC_STORE_U8(ctx.r30.u32 + 42, ctx.r29.u8);
	// b 0x83140c28
	goto loc_83140C28;
loc_83140C24:
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
loc_83140C28:
	// lwz r3,-4640(r25)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r25.u32 + -4640);
	// bl 0x831401f0
	ctx.lr = 0x83140C30;
	sub_831401F0(ctx, base);
	// li r3,44
	ctx.r3.s64 = 44;
	// bl 0x830dd340
	ctx.lr = 0x83140C38;
	sub_830DD340(ctx, base);
	// mr. r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// stw r30,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r30.u32);
	// beq 0x83140c74
	if (ctx.cr0.eq) goto loc_83140C74;
	// lis r11,-32228
	ctx.r11.s64 = -2112094208;
	// lwz r6,-5084(r27)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r27.u32 + -5084);
	// li r5,34
	ctx.r5.s64 = 34;
	// addi r4,r11,-5624
	ctx.r4.s64 = ctx.r11.s64 + -5624;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x83163a38
	ctx.lr = 0x83140C5C;
	sub_83163A38(ctx, base);
	// stw r28,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r28.u32);
	// stb r29,40(r30)
	PPC_STORE_U8(ctx.r30.u32 + 40, ctx.r29.u8);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// stb r26,41(r30)
	PPC_STORE_U8(ctx.r30.u32 + 41, ctx.r26.u8);
	// stb r29,42(r30)
	PPC_STORE_U8(ctx.r30.u32 + 42, ctx.r29.u8);
	// b 0x83140c78
	goto loc_83140C78;
loc_83140C74:
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
loc_83140C78:
	// lwz r3,-4640(r25)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r25.u32 + -4640);
	// bl 0x831401f0
	ctx.lr = 0x83140C80;
	sub_831401F0(ctx, base);
	// li r3,44
	ctx.r3.s64 = 44;
	// bl 0x830dd340
	ctx.lr = 0x83140C88;
	sub_830DD340(ctx, base);
	// mr. r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// stw r30,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r30.u32);
	// beq 0x83140cc4
	if (ctx.cr0.eq) goto loc_83140CC4;
	// lis r11,-32228
	ctx.r11.s64 = -2112094208;
	// lwz r6,-5084(r27)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r27.u32 + -5084);
	// li r5,39
	ctx.r5.s64 = 39;
	// addi r4,r11,-5612
	ctx.r4.s64 = ctx.r11.s64 + -5612;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x83163a38
	ctx.lr = 0x83140CAC;
	sub_83163A38(ctx, base);
	// stw r28,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r28.u32);
	// stb r29,40(r30)
	PPC_STORE_U8(ctx.r30.u32 + 40, ctx.r29.u8);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// stb r26,41(r30)
	PPC_STORE_U8(ctx.r30.u32 + 41, ctx.r26.u8);
	// stb r29,42(r30)
	PPC_STORE_U8(ctx.r30.u32 + 42, ctx.r29.u8);
	// b 0x83140cc8
	goto loc_83140CC8;
loc_83140CC4:
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
loc_83140CC8:
	// lwz r3,-4640(r25)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r25.u32 + -4640);
	// bl 0x831401f0
	ctx.lr = 0x83140CD0;
	sub_831401F0(ctx, base);
	// lis r11,-31980
	ctx.r11.s64 = -2095841280;
	// lis r10,-31827
	ctx.r10.s64 = -2085814272;
	// addi r4,r11,952
	ctx.r4.s64 = ctx.r11.s64 + 952;
	// addi r3,r10,-4636
	ctx.r3.s64 = ctx.r10.s64 + -4636;
	// bl 0x830ff598
	ctx.lr = 0x83140CE4;
	sub_830FF598(ctx, base);
	// lis r11,-31827
	ctx.r11.s64 = -2085814272;
	// stb r29,-4648(r11)
	PPC_STORE_U8(ctx.r11.u32 + -4648, ctx.r29.u8);
loc_83140CEC:
	// addi r1,r31,160
	ctx.r1.s64 = ctx.r31.s64 + 160;
	// b 0x833a01ec
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83140AE0"))) PPC_WEAK_FUNC(sub_83140AE0);
PPC_FUNC_IMPL(__imp__sub_83140AE0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x833a019c
	ctx.lr = 0x83140AE8;
	__savegprlr_25(ctx, base);
	// addi r31,r1,-160
	ctx.r31.s64 = ctx.r1.s64 + -160;
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r3,24
	ctx.r3.s64 = 24;
	// bl 0x830dd340
	ctx.lr = 0x83140AF8;
	sub_830DD340(ctx, base);
	// stw r3,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r3.u32);
	// lis r27,-31827
	ctx.r27.s64 = -2085814272;
	// li r26,0
	ctx.r26.s64 = 0;
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x83140b20
	if (ctx.cr0.eq) goto loc_83140B20;
	// li r5,12
	ctx.r5.s64 = 12;
	// lwz r6,-5084(r27)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r27.u32 + -5084);
	// li r4,11
	ctx.r4.s64 = 11;
	// bl 0x8313fff0
	ctx.lr = 0x83140B1C;
	sub_8313FFF0(ctx, base);
	// b 0x83140b24
	goto loc_83140B24;
loc_83140B20:
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
loc_83140B24:
	// lis r25,-31827
	ctx.r25.s64 = -2085814272;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// stw r3,-4640(r25)
	PPC_STORE_U32(ctx.r25.u32 + -4640, ctx.r3.u32);
	// beq cr6,0x83140cec
	if (ctx.cr6.eq) goto loc_83140CEC;
	// li r3,44
	ctx.r3.s64 = 44;
	// bl 0x830dd340
	ctx.lr = 0x83140B3C;
	sub_830DD340(ctx, base);
	// mr. r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// stw r30,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r30.u32);
	// lis r11,-32227
	ctx.r11.s64 = -2112028672;
	// li r29,1
	ctx.r29.s64 = 1;
	// addi r28,r11,-20344
	ctx.r28.s64 = ctx.r11.s64 + -20344;
	// beq 0x83140b84
	if (ctx.cr0.eq) goto loc_83140B84;
	// lis r11,-32228
	ctx.r11.s64 = -2112094208;
	// lwz r6,-5084(r27)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r27.u32 + -5084);
	// li r5,38
	ctx.r5.s64 = 38;
	// addi r4,r11,-5648
	ctx.r4.s64 = ctx.r11.s64 + -5648;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x83163a38
	ctx.lr = 0x83140B6C;
	sub_83163A38(ctx, base);
	// stw r28,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r28.u32);
	// stb r29,40(r30)
	PPC_STORE_U8(ctx.r30.u32 + 40, ctx.r29.u8);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// stb r26,41(r30)
	PPC_STORE_U8(ctx.r30.u32 + 41, ctx.r26.u8);
	// stb r29,42(r30)
	PPC_STORE_U8(ctx.r30.u32 + 42, ctx.r29.u8);
	// b 0x83140b88
	goto loc_83140B88;
loc_83140B84:
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
loc_83140B88:
	// lwz r3,-4640(r25)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r25.u32 + -4640);
	// bl 0x831401f0
	ctx.lr = 0x83140B90;
	sub_831401F0(ctx, base);
	// li r3,44
	ctx.r3.s64 = 44;
	// bl 0x830dd340
	ctx.lr = 0x83140B98;
	sub_830DD340(ctx, base);
	// mr. r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// stw r30,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r30.u32);
	// beq 0x83140bd4
	if (ctx.cr0.eq) goto loc_83140BD4;
	// lis r11,-32228
	ctx.r11.s64 = -2112094208;
	// lwz r6,-5084(r27)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r27.u32 + -5084);
	// li r5,60
	ctx.r5.s64 = 60;
	// addi r4,r11,-5640
	ctx.r4.s64 = ctx.r11.s64 + -5640;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x83163a38
	ctx.lr = 0x83140BBC;
	sub_83163A38(ctx, base);
	// stw r28,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r28.u32);
	// stb r29,40(r30)
	PPC_STORE_U8(ctx.r30.u32 + 40, ctx.r29.u8);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// stb r26,41(r30)
	PPC_STORE_U8(ctx.r30.u32 + 41, ctx.r26.u8);
	// stb r29,42(r30)
	PPC_STORE_U8(ctx.r30.u32 + 42, ctx.r29.u8);
	// b 0x83140bd8
	goto loc_83140BD8;
loc_83140BD4:
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
loc_83140BD8:
	// lwz r3,-4640(r25)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r25.u32 + -4640);
	// bl 0x831401f0
	ctx.lr = 0x83140BE0;
	sub_831401F0(ctx, base);
	// li r3,44
	ctx.r3.s64 = 44;
	// bl 0x830dd340
	ctx.lr = 0x83140BE8;
	sub_830DD340(ctx, base);
	// mr. r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// stw r30,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r30.u32);
	// beq 0x83140c24
	if (ctx.cr0.eq) goto loc_83140C24;
	// lis r11,-32228
	ctx.r11.s64 = -2112094208;
	// lwz r6,-5084(r27)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r27.u32 + -5084);
	// li r5,62
	ctx.r5.s64 = 62;
	// addi r4,r11,-5632
	ctx.r4.s64 = ctx.r11.s64 + -5632;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x83163a38
	ctx.lr = 0x83140C0C;
	sub_83163A38(ctx, base);
	// stw r28,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r28.u32);
	// stb r29,40(r30)
	PPC_STORE_U8(ctx.r30.u32 + 40, ctx.r29.u8);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// stb r26,41(r30)
	PPC_STORE_U8(ctx.r30.u32 + 41, ctx.r26.u8);
	// stb r29,42(r30)
	PPC_STORE_U8(ctx.r30.u32 + 42, ctx.r29.u8);
	// b 0x83140c28
	goto loc_83140C28;
loc_83140C24:
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
loc_83140C28:
	// lwz r3,-4640(r25)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r25.u32 + -4640);
	// bl 0x831401f0
	ctx.lr = 0x83140C30;
	sub_831401F0(ctx, base);
	// li r3,44
	ctx.r3.s64 = 44;
	// bl 0x830dd340
	ctx.lr = 0x83140C38;
	sub_830DD340(ctx, base);
	// mr. r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// stw r30,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r30.u32);
	// beq 0x83140c74
	if (ctx.cr0.eq) goto loc_83140C74;
	// lis r11,-32228
	ctx.r11.s64 = -2112094208;
	// lwz r6,-5084(r27)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r27.u32 + -5084);
	// li r5,34
	ctx.r5.s64 = 34;
	// addi r4,r11,-5624
	ctx.r4.s64 = ctx.r11.s64 + -5624;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x83163a38
	ctx.lr = 0x83140C5C;
	sub_83163A38(ctx, base);
	// stw r28,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r28.u32);
	// stb r29,40(r30)
	PPC_STORE_U8(ctx.r30.u32 + 40, ctx.r29.u8);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// stb r26,41(r30)
	PPC_STORE_U8(ctx.r30.u32 + 41, ctx.r26.u8);
	// stb r29,42(r30)
	PPC_STORE_U8(ctx.r30.u32 + 42, ctx.r29.u8);
	// b 0x83140c78
	goto loc_83140C78;
loc_83140C74:
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
loc_83140C78:
	// lwz r3,-4640(r25)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r25.u32 + -4640);
	// bl 0x831401f0
	ctx.lr = 0x83140C80;
	sub_831401F0(ctx, base);
	// li r3,44
	ctx.r3.s64 = 44;
	// bl 0x830dd340
	ctx.lr = 0x83140C88;
	sub_830DD340(ctx, base);
	// mr. r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// stw r30,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r30.u32);
	// beq 0x83140cc4
	if (ctx.cr0.eq) goto loc_83140CC4;
	// lis r11,-32228
	ctx.r11.s64 = -2112094208;
	// lwz r6,-5084(r27)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r27.u32 + -5084);
	// li r5,39
	ctx.r5.s64 = 39;
	// addi r4,r11,-5612
	ctx.r4.s64 = ctx.r11.s64 + -5612;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x83163a38
	ctx.lr = 0x83140CAC;
	sub_83163A38(ctx, base);
	// stw r28,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r28.u32);
	// stb r29,40(r30)
	PPC_STORE_U8(ctx.r30.u32 + 40, ctx.r29.u8);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// stb r26,41(r30)
	PPC_STORE_U8(ctx.r30.u32 + 41, ctx.r26.u8);
	// stb r29,42(r30)
	PPC_STORE_U8(ctx.r30.u32 + 42, ctx.r29.u8);
	// b 0x83140cc8
	goto loc_83140CC8;
loc_83140CC4:
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
loc_83140CC8:
	// lwz r3,-4640(r25)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r25.u32 + -4640);
	// bl 0x831401f0
	ctx.lr = 0x83140CD0;
	sub_831401F0(ctx, base);
	// lis r11,-31980
	ctx.r11.s64 = -2095841280;
	// lis r10,-31827
	ctx.r10.s64 = -2085814272;
	// addi r4,r11,952
	ctx.r4.s64 = ctx.r11.s64 + 952;
	// addi r3,r10,-4636
	ctx.r3.s64 = ctx.r10.s64 + -4636;
	// bl 0x830ff598
	ctx.lr = 0x83140CE4;
	sub_830FF598(ctx, base);
	// lis r11,-31827
	ctx.r11.s64 = -2085814272;
	// stb r29,-4648(r11)
	PPC_STORE_U8(ctx.r11.u32 + -4648, ctx.r29.u8);
loc_83140CEC:
	// addi r1,r31,160
	ctx.r1.s64 = ctx.r31.s64 + 160;
	// b 0x833a01ec
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83140CF4"))) PPC_WEAK_FUNC(sub_83140CF4);
PPC_FUNC_IMPL(__imp__sub_83140CF4) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// addi r31,r12,-160
	ctx.r31.s64 = ctx.r12.s64 + -160;
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r3,80(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	// bl 0x830dd3e0
	ctx.lr = 0x83140D0C;
	sub_830DD3E0(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83140D1C"))) PPC_WEAK_FUNC(sub_83140D1C);
PPC_FUNC_IMPL(__imp__sub_83140D1C) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// addi r31,r12,-160
	ctx.r31.s64 = ctx.r12.s64 + -160;
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r3,80(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	// bl 0x830dd3e0
	ctx.lr = 0x83140D34;
	sub_830DD3E0(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83140D44"))) PPC_WEAK_FUNC(sub_83140D44);
PPC_FUNC_IMPL(__imp__sub_83140D44) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// addi r31,r12,-160
	ctx.r31.s64 = ctx.r12.s64 + -160;
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r3,80(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	// bl 0x830dd3e0
	ctx.lr = 0x83140D5C;
	sub_830DD3E0(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83140D6C"))) PPC_WEAK_FUNC(sub_83140D6C);
PPC_FUNC_IMPL(__imp__sub_83140D6C) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// addi r31,r12,-160
	ctx.r31.s64 = ctx.r12.s64 + -160;
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r3,80(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	// bl 0x830dd3e0
	ctx.lr = 0x83140D84;
	sub_830DD3E0(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83140D94"))) PPC_WEAK_FUNC(sub_83140D94);
PPC_FUNC_IMPL(__imp__sub_83140D94) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// addi r31,r12,-160
	ctx.r31.s64 = ctx.r12.s64 + -160;
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r3,80(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	// bl 0x830dd3e0
	ctx.lr = 0x83140DAC;
	sub_830DD3E0(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83140DBC"))) PPC_WEAK_FUNC(sub_83140DBC);
PPC_FUNC_IMPL(__imp__sub_83140DBC) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// addi r31,r12,-160
	ctx.r31.s64 = ctx.r12.s64 + -160;
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r3,80(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	// bl 0x830dd3e0
	ctx.lr = 0x83140DD4;
	sub_830DD3E0(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83140DE4"))) PPC_WEAK_FUNC(sub_83140DE4);
PPC_FUNC_IMPL(__imp__sub_83140DE4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83140DE8"))) PPC_WEAK_FUNC(sub_83140DE8);
PPC_FUNC_IMPL(__imp__sub_83140DE8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lwz r25,17952(r26)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r26.u32 + 17952);
	// lwz r16,5864(r29)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r29.u32 + 5864);
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x833a01ac
	ctx.lr = 0x83140DF8;
	__savegprlr_29(ctx, base);
	// addi r31,r1,-128
	ctx.r31.s64 = ctx.r1.s64 + -128;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// stw r3,148(r31)
	PPC_STORE_U32(ctx.r31.u32 + 148, ctx.r3.u32);
	// lis r11,-32227
	ctx.r11.s64 = -2112028672;
	// stw r4,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r4.u32);
	// li r29,0
	ctx.r29.s64 = 0;
	// addi r11,r11,5736
	ctx.r11.s64 = ctx.r11.s64 + 5736;
	// stw r29,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r29.u32);
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// li r3,24
	ctx.r3.s64 = 24;
	// stw r29,12(r30)
	PPC_STORE_U32(ctx.r30.u32 + 12, ctx.r29.u32);
	// stw r29,16(r30)
	PPC_STORE_U32(ctx.r30.u32 + 16, ctx.r29.u32);
	// stw r29,20(r30)
	PPC_STORE_U32(ctx.r30.u32 + 20, ctx.r29.u32);
	// stw r29,24(r30)
	PPC_STORE_U32(ctx.r30.u32 + 24, ctx.r29.u32);
	// stw r29,28(r30)
	PPC_STORE_U32(ctx.r30.u32 + 28, ctx.r29.u32);
	// stb r29,32(r30)
	PPC_STORE_U8(ctx.r30.u32 + 32, ctx.r29.u8);
	// bl 0x830dd390
	ctx.lr = 0x83140E40;
	sub_830DD390(ctx, base);
	// stw r3,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r3.u32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x83140e60
	if (ctx.cr0.eq) goto loc_83140E60;
	// li r5,128
	ctx.r5.s64 = 128;
	// lwz r6,4(r30)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// li r4,109
	ctx.r4.s64 = 109;
	// bl 0x8313fff0
	ctx.lr = 0x83140E5C;
	sub_8313FFF0(ctx, base);
	// b 0x83140e64
	goto loc_83140E64;
loc_83140E60:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
loc_83140E64:
	// stw r3,8(r30)
	PPC_STORE_U32(ctx.r30.u32 + 8, ctx.r3.u32);
	// li r3,24
	ctx.r3.s64 = 24;
	// lwz r4,4(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// bl 0x830dd390
	ctx.lr = 0x83140E74;
	sub_830DD390(ctx, base);
	// stw r3,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r3.u32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x83140e94
	if (ctx.cr0.eq) goto loc_83140E94;
	// li r5,128
	ctx.r5.s64 = 128;
	// lwz r6,4(r30)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// li r4,109
	ctx.r4.s64 = 109;
	// bl 0x8313fff0
	ctx.lr = 0x83140E90;
	sub_8313FFF0(ctx, base);
	// b 0x83140e98
	goto loc_83140E98;
loc_83140E94:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
loc_83140E98:
	// stw r3,16(r30)
	PPC_STORE_U32(ctx.r30.u32 + 16, ctx.r3.u32);
	// li r3,24
	ctx.r3.s64 = 24;
	// lwz r4,4(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// bl 0x830dd390
	ctx.lr = 0x83140EA8;
	sub_830DD390(ctx, base);
	// stw r3,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r3.u32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x83140ec8
	if (ctx.cr0.eq) goto loc_83140EC8;
	// li r5,128
	ctx.r5.s64 = 128;
	// lwz r6,4(r30)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// li r4,109
	ctx.r4.s64 = 109;
	// bl 0x8313fff0
	ctx.lr = 0x83140EC4;
	sub_8313FFF0(ctx, base);
	// b 0x83140ecc
	goto loc_83140ECC;
loc_83140EC8:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
loc_83140ECC:
	// stw r3,20(r30)
	PPC_STORE_U32(ctx.r30.u32 + 20, ctx.r3.u32);
	// li r3,16
	ctx.r3.s64 = 16;
	// lwz r4,4(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// bl 0x830dd390
	ctx.lr = 0x83140EDC;
	sub_830DD390(ctx, base);
	// stw r3,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r3.u32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x83140efc
	if (ctx.cr0.eq) goto loc_83140EFC;
	// lis r11,-32228
	ctx.r11.s64 = -2112094208;
	// lwz r5,4(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// addi r4,r11,-5660
	ctx.r4.s64 = ctx.r11.s64 + -5660;
	// bl 0x83162a88
	ctx.lr = 0x83140EF8;
	sub_83162A88(ctx, base);
	// b 0x83140f00
	goto loc_83140F00;
loc_83140EFC:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
loc_83140F00:
	// stw r3,24(r30)
	PPC_STORE_U32(ctx.r30.u32 + 24, ctx.r3.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x831406d8
	ctx.lr = 0x83140F0C;
	sub_831406D8(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r31,128
	ctx.r1.s64 = ctx.r31.s64 + 128;
	// b 0x833a01fc
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83140DF0"))) PPC_WEAK_FUNC(sub_83140DF0);
PPC_FUNC_IMPL(__imp__sub_83140DF0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x833a01ac
	ctx.lr = 0x83140DF8;
	__savegprlr_29(ctx, base);
	// addi r31,r1,-128
	ctx.r31.s64 = ctx.r1.s64 + -128;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// stw r3,148(r31)
	PPC_STORE_U32(ctx.r31.u32 + 148, ctx.r3.u32);
	// lis r11,-32227
	ctx.r11.s64 = -2112028672;
	// stw r4,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r4.u32);
	// li r29,0
	ctx.r29.s64 = 0;
	// addi r11,r11,5736
	ctx.r11.s64 = ctx.r11.s64 + 5736;
	// stw r29,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r29.u32);
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// li r3,24
	ctx.r3.s64 = 24;
	// stw r29,12(r30)
	PPC_STORE_U32(ctx.r30.u32 + 12, ctx.r29.u32);
	// stw r29,16(r30)
	PPC_STORE_U32(ctx.r30.u32 + 16, ctx.r29.u32);
	// stw r29,20(r30)
	PPC_STORE_U32(ctx.r30.u32 + 20, ctx.r29.u32);
	// stw r29,24(r30)
	PPC_STORE_U32(ctx.r30.u32 + 24, ctx.r29.u32);
	// stw r29,28(r30)
	PPC_STORE_U32(ctx.r30.u32 + 28, ctx.r29.u32);
	// stb r29,32(r30)
	PPC_STORE_U8(ctx.r30.u32 + 32, ctx.r29.u8);
	// bl 0x830dd390
	ctx.lr = 0x83140E40;
	sub_830DD390(ctx, base);
	// stw r3,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r3.u32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x83140e60
	if (ctx.cr0.eq) goto loc_83140E60;
	// li r5,128
	ctx.r5.s64 = 128;
	// lwz r6,4(r30)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// li r4,109
	ctx.r4.s64 = 109;
	// bl 0x8313fff0
	ctx.lr = 0x83140E5C;
	sub_8313FFF0(ctx, base);
	// b 0x83140e64
	goto loc_83140E64;
loc_83140E60:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
loc_83140E64:
	// stw r3,8(r30)
	PPC_STORE_U32(ctx.r30.u32 + 8, ctx.r3.u32);
	// li r3,24
	ctx.r3.s64 = 24;
	// lwz r4,4(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// bl 0x830dd390
	ctx.lr = 0x83140E74;
	sub_830DD390(ctx, base);
	// stw r3,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r3.u32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x83140e94
	if (ctx.cr0.eq) goto loc_83140E94;
	// li r5,128
	ctx.r5.s64 = 128;
	// lwz r6,4(r30)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// li r4,109
	ctx.r4.s64 = 109;
	// bl 0x8313fff0
	ctx.lr = 0x83140E90;
	sub_8313FFF0(ctx, base);
	// b 0x83140e98
	goto loc_83140E98;
loc_83140E94:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
loc_83140E98:
	// stw r3,16(r30)
	PPC_STORE_U32(ctx.r30.u32 + 16, ctx.r3.u32);
	// li r3,24
	ctx.r3.s64 = 24;
	// lwz r4,4(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// bl 0x830dd390
	ctx.lr = 0x83140EA8;
	sub_830DD390(ctx, base);
	// stw r3,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r3.u32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x83140ec8
	if (ctx.cr0.eq) goto loc_83140EC8;
	// li r5,128
	ctx.r5.s64 = 128;
	// lwz r6,4(r30)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// li r4,109
	ctx.r4.s64 = 109;
	// bl 0x8313fff0
	ctx.lr = 0x83140EC4;
	sub_8313FFF0(ctx, base);
	// b 0x83140ecc
	goto loc_83140ECC;
loc_83140EC8:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
loc_83140ECC:
	// stw r3,20(r30)
	PPC_STORE_U32(ctx.r30.u32 + 20, ctx.r3.u32);
	// li r3,16
	ctx.r3.s64 = 16;
	// lwz r4,4(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// bl 0x830dd390
	ctx.lr = 0x83140EDC;
	sub_830DD390(ctx, base);
	// stw r3,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r3.u32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x83140efc
	if (ctx.cr0.eq) goto loc_83140EFC;
	// lis r11,-32228
	ctx.r11.s64 = -2112094208;
	// lwz r5,4(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// addi r4,r11,-5660
	ctx.r4.s64 = ctx.r11.s64 + -5660;
	// bl 0x83162a88
	ctx.lr = 0x83140EF8;
	sub_83162A88(ctx, base);
	// b 0x83140f00
	goto loc_83140F00;
loc_83140EFC:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
loc_83140F00:
	// stw r3,24(r30)
	PPC_STORE_U32(ctx.r30.u32 + 24, ctx.r3.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x831406d8
	ctx.lr = 0x83140F0C;
	sub_831406D8(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r31,128
	ctx.r1.s64 = ctx.r31.s64 + 128;
	// b 0x833a01fc
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83140F18"))) PPC_WEAK_FUNC(sub_83140F18);
PPC_FUNC_IMPL(__imp__sub_83140F18) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// addi r31,r12,-128
	ctx.r31.s64 = ctx.r12.s64 + -128;
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r3,148(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 148);
	// bl 0x8313e940
	ctx.lr = 0x83140F30;
	sub_8313E940(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83140F40"))) PPC_WEAK_FUNC(sub_83140F40);
PPC_FUNC_IMPL(__imp__sub_83140F40) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// addi r31,r12,-128
	ctx.r31.s64 = ctx.r12.s64 + -128;
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,148(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 148);
	// lwz r4,4(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r3,80(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	// bl 0x830dd3e0
	ctx.lr = 0x83140F60;
	sub_830DD3E0(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83140F70"))) PPC_WEAK_FUNC(sub_83140F70);
PPC_FUNC_IMPL(__imp__sub_83140F70) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// addi r31,r12,-128
	ctx.r31.s64 = ctx.r12.s64 + -128;
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,148(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 148);
	// lwz r4,4(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r3,80(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	// bl 0x830dd3e0
	ctx.lr = 0x83140F90;
	sub_830DD3E0(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83140FA0"))) PPC_WEAK_FUNC(sub_83140FA0);
PPC_FUNC_IMPL(__imp__sub_83140FA0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// addi r31,r12,-128
	ctx.r31.s64 = ctx.r12.s64 + -128;
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,148(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 148);
	// lwz r4,4(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r3,80(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	// bl 0x830dd3e0
	ctx.lr = 0x83140FC0;
	sub_830DD3E0(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83140FD0"))) PPC_WEAK_FUNC(sub_83140FD0);
PPC_FUNC_IMPL(__imp__sub_83140FD0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// addi r31,r12,-128
	ctx.r31.s64 = ctx.r12.s64 + -128;
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,148(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 148);
	// lwz r4,4(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r3,80(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	// bl 0x830dd3e0
	ctx.lr = 0x83140FF0;
	sub_830DD3E0(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83141000"))) PPC_WEAK_FUNC(sub_83141000);
PPC_FUNC_IMPL(__imp__sub_83141000) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32228
	ctx.r11.s64 = -2112094208;
	// addi r3,r11,-5740
	ctx.r3.s64 = ctx.r11.s64 + -5740;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8314100C"))) PPC_WEAK_FUNC(sub_8314100C);
PPC_FUNC_IMPL(__imp__sub_8314100C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83141010"))) PPC_WEAK_FUNC(sub_83141010);
PPC_FUNC_IMPL(__imp__sub_83141010) {
	PPC_FUNC_PROLOGUE();
	// lbz r3,32(r3)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r3.u32 + 32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83141018"))) PPC_WEAK_FUNC(sub_83141018);
PPC_FUNC_IMPL(__imp__sub_83141018) {
	PPC_FUNC_PROLOGUE();
	// stb r4,32(r3)
	PPC_STORE_U8(ctx.r3.u32 + 32, ctx.r4.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83141020"))) PPC_WEAK_FUNC(sub_83141020);
PPC_FUNC_IMPL(__imp__sub_83141020) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x8314105c
	if (ctx.cr6.eq) goto loc_8314105C;
	// lwz r11,16(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// cmplw cr6,r4,r11
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x8314105c
	if (ctx.cr6.gt) goto loc_8314105C;
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// rlwinm r10,r4,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r3,r10,r11
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_8314105C:
	// lis r11,-32227
	ctx.r11.s64 = -2112028672;
	// lwz r7,0(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r6,67
	ctx.r6.s64 = 67;
	// addi r4,r11,-28124
	ctx.r4.s64 = ctx.r11.s64 + -28124;
	// li r5,178
	ctx.r5.s64 = 178;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x830d5a30
	ctx.lr = 0x83141078;
	sub_830D5A30(ctx, base);
	// lis r11,-32194
	ctx.r11.s64 = -2109865984;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,-28580
	ctx.r4.s64 = ctx.r11.s64 + -28580;
	// bl 0x833a7198
	ctx.lr = 0x83141088;
	sub_833A7198(ctx, base);
}

__attribute__((alias("__imp__sub_83141088"))) PPC_WEAK_FUNC(sub_83141088);
PPC_FUNC_IMPL(__imp__sub_83141088) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x833a01ac
	ctx.lr = 0x83141090;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// lwz r5,0(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r4,20(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// bl 0x830f8438
	ctx.lr = 0x831410B0;
	sub_830F8438(ctx, base);
	// stw r3,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r3.u32);
	// rlwinm r11,r3,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwzx r31,r11,r10
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// b 0x831410e0
	goto loc_831410E0;
loc_831410C4:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r4,12(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// bl 0x830d8d28
	ctx.lr = 0x831410D4;
	sub_830D8D28(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x831410f4
	if (!ctx.cr0.eq) goto loc_831410F4;
	// lwz r31,4(r31)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
loc_831410E0:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne cr6,0x831410c4
	if (!ctx.cr6.eq) goto loc_831410C4;
	// li r3,0
	ctx.r3.s64 = 0;
loc_831410EC:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x833a01fc
	__restgprlr_29(ctx, base);
	return;
loc_831410F4:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// b 0x831410ec
	goto loc_831410EC;
}

__attribute__((alias("__imp__sub_831410FC"))) PPC_WEAK_FUNC(sub_831410FC);
PPC_FUNC_IMPL(__imp__sub_831410FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83141100"))) PPC_WEAK_FUNC(sub_83141100);
PPC_FUNC_IMPL(__imp__sub_83141100) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,8(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// b 0x83141020
	sub_83141020(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83141108"))) PPC_WEAK_FUNC(sub_83141108);
PPC_FUNC_IMPL(__imp__sub_83141108) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x833a01a8
	ctx.lr = 0x83141110;
	__savegprlr_28(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r29,12(r4)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r4.u32 + 12);
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x83141088
	ctx.lr = 0x8314112C;
	sub_83141088(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x83141174
	if (ctx.cr0.eq) goto loc_83141174;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lis r9,-32227
	ctx.r9.s64 = -2112028672;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r4,r9,-28124
	ctx.r4.s64 = ctx.r9.s64 + -28124;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// mr r7,r29
	ctx.r7.u64 = ctx.r29.u64;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// li r6,65
	ctx.r6.s64 = 65;
	// li r5,215
	ctx.r5.s64 = 215;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x8311e928
	ctx.lr = 0x83141164;
	sub_8311E928(ctx, base);
	// lis r11,-32194
	ctx.r11.s64 = -2109865984;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// addi r4,r11,-28580
	ctx.r4.s64 = ctx.r11.s64 + -28580;
	// bl 0x833a7198
	ctx.lr = 0x83141174;
	sub_833A7198(ctx, base);
loc_83141174:
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r4,8
	ctx.r4.s64 = 8;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8314118C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r10,96(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x831411b4
	if (ctx.cr0.eq) goto loc_831411B4;
	// lwz r9,4(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// rlwinm r8,r10,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lwzx r9,r8,r9
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r9.u32);
	// stw r30,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r30.u32);
	// stw r9,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r9.u32);
	// b 0x831411b8
	goto loc_831411B8;
loc_831411B4:
	// li r11,0
	ctx.r11.s64 = 0;
loc_831411B8:
	// lwz r9,4(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r11,r10,r9
	PPC_STORE_U32(ctx.r10.u32 + ctx.r9.u32, ctx.r11.u32);
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// lwz r10,16(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x8314124c
	if (!ctx.cr6.eq) goto loc_8314124C;
	// clrldi r11,r11,32
	ctx.r11.u64 = ctx.r11.u64 & 0xFFFFFFFF;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// std r11,96(r1)
	PPC_STORE_U64(ctx.r1.u32 + 96, ctx.r11.u64);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lfd f0,14392(r10)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r10.u32 + 14392);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// lfd f13,96(r1)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 96);
	// fcfid f13,f13
	ctx.f13.f64 = double(ctx.f13.s64);
	// fmul f0,f13,f0
	ctx.f0.f64 = ctx.f13.f64 * ctx.f0.f64;
	// fctidz f0,f0
	ctx.f0.s64 = (ctx.f0.f64 > double(LLONG_MAX)) ? LLONG_MAX : simde_mm_cvttsd_si64(simde_mm_load_sd(&ctx.f0.f64));
	// stfd f0,96(r1)
	PPC_STORE_U64(ctx.r1.u32 + 96, ctx.f0.u64);
	// lwz r29,100(r1)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// rlwinm r4,r29,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 2) & 0xFFFFFFFC;
	// bctrl 
	ctx.lr = 0x83141218;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// lwz r4,8(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// rlwinm r5,r11,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x833a1390
	ctx.lr = 0x8314122C;
	sub_833A1390(ctx, base);
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r4,8(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x83141244;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r28,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r28.u32);
	// stw r29,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r29.u32);
loc_8314124C:
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addi r3,r11,1
	ctx.r3.s64 = ctx.r11.s64 + 1;
	// rlwinm r11,r3,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// stw r3,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r3.u32);
	// stwx r30,r11,r10
	PPC_STORE_U32(ctx.r11.u32 + ctx.r10.u32, ctx.r30.u32);
	// stw r3,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r3.u32);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x833a01f8
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83141270"))) PPC_WEAK_FUNC(sub_83141270);
PPC_FUNC_IMPL(__imp__sub_83141270) {
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
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// lwz r3,8(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// bl 0x8311f228
	ctx.lr = 0x8314128C;
	sub_8311F228(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x831412a0
	if (ctx.cr0.eq) goto loc_831412A0;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x831412ac
	if (!ctx.cr6.eq) goto loc_831412AC;
loc_831412A0:
	// lis r11,-32222
	ctx.r11.s64 = -2111700992;
	// lwz r3,32564(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32564);
	// b 0x831412b0
	goto loc_831412B0;
loc_831412AC:
	// lwz r3,16(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
loc_831412B0:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831412C0"))) PPC_WEAK_FUNC(sub_831412C0);
PPC_FUNC_IMPL(__imp__sub_831412C0) {
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
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r3,8(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// mr r30,r6
	ctx.r30.u64 = ctx.r6.u64;
	// bl 0x8311f228
	ctx.lr = 0x831412EC;
	sub_8311F228(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne 0x831412fc
	if (!ctx.cr0.eq) goto loc_831412FC;
	// li r11,0
	ctx.r11.s64 = 0;
	// b 0x83141308
	goto loc_83141308;
loc_831412FC:
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x83141330
	if (!ctx.cr6.eq) goto loc_83141330;
loc_83141308:
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x83141330
	if (ctx.cr6.eq) goto loc_83141330;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x8311f228
	ctx.lr = 0x83141320;
	sub_8311F228(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// li r11,0
	ctx.r11.s64 = 0;
	// beq 0x83141330
	if (ctx.cr0.eq) goto loc_83141330;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
loc_83141330:
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
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

__attribute__((alias("__imp__sub_8314134C"))) PPC_WEAK_FUNC(sub_8314134C);
PPC_FUNC_IMPL(__imp__sub_8314134C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83141350"))) PPC_WEAK_FUNC(sub_83141350);
PPC_FUNC_IMPL(__imp__sub_83141350) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lwz r25,17952(r26)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r26.u32 + 17952);
	// lwz r16,5984(r29)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r29.u32 + 5984);
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x833a01ac
	ctx.lr = 0x83141360;
	__savegprlr_29(ctx, base);
	// addi r31,r1,-128
	ctx.r31.s64 = ctx.r1.s64 + -128;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// stw r3,148(r31)
	PPC_STORE_U32(ctx.r31.u32 + 148, ctx.r3.u32);
	// clrlwi. r11,r5,24
	ctx.r11.u64 = ctx.r5.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// beq 0x831413c8
	if (ctx.cr0.eq) goto loc_831413C8;
	// lwz r11,12(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x831413bc
	if (!ctx.cr6.eq) goto loc_831413BC;
	// li r3,24
	ctx.r3.s64 = 24;
	// lwz r4,4(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// bl 0x830dd390
	ctx.lr = 0x83141394;
	sub_830DD390(ctx, base);
	// stw r3,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r3.u32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x831413b4
	if (ctx.cr0.eq) goto loc_831413B4;
	// li r5,128
	ctx.r5.s64 = 128;
	// lwz r6,4(r30)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// li r4,29
	ctx.r4.s64 = 29;
	// bl 0x8313fff0
	ctx.lr = 0x831413B0;
	sub_8313FFF0(ctx, base);
	// b 0x831413b8
	goto loc_831413B8;
loc_831413B4:
	// li r3,0
	ctx.r3.s64 = 0;
loc_831413B8:
	// stw r3,12(r30)
	PPC_STORE_U32(ctx.r30.u32 + 12, ctx.r3.u32);
loc_831413BC:
	// lwz r3,12(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// b 0x831413d0
	goto loc_831413D0;
loc_831413C8:
	// lwz r3,8(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
loc_831413D0:
	// bl 0x8311f668
	ctx.lr = 0x831413D4;
	sub_8311F668(ctx, base);
	// addi r1,r31,128
	ctx.r1.s64 = ctx.r31.s64 + 128;
	// b 0x833a01fc
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83141358"))) PPC_WEAK_FUNC(sub_83141358);
PPC_FUNC_IMPL(__imp__sub_83141358) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x833a01ac
	ctx.lr = 0x83141360;
	__savegprlr_29(ctx, base);
	// addi r31,r1,-128
	ctx.r31.s64 = ctx.r1.s64 + -128;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// stw r3,148(r31)
	PPC_STORE_U32(ctx.r31.u32 + 148, ctx.r3.u32);
	// clrlwi. r11,r5,24
	ctx.r11.u64 = ctx.r5.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// beq 0x831413c8
	if (ctx.cr0.eq) goto loc_831413C8;
	// lwz r11,12(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x831413bc
	if (!ctx.cr6.eq) goto loc_831413BC;
	// li r3,24
	ctx.r3.s64 = 24;
	// lwz r4,4(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// bl 0x830dd390
	ctx.lr = 0x83141394;
	sub_830DD390(ctx, base);
	// stw r3,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r3.u32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x831413b4
	if (ctx.cr0.eq) goto loc_831413B4;
	// li r5,128
	ctx.r5.s64 = 128;
	// lwz r6,4(r30)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// li r4,29
	ctx.r4.s64 = 29;
	// bl 0x8313fff0
	ctx.lr = 0x831413B0;
	sub_8313FFF0(ctx, base);
	// b 0x831413b8
	goto loc_831413B8;
loc_831413B4:
	// li r3,0
	ctx.r3.s64 = 0;
loc_831413B8:
	// stw r3,12(r30)
	PPC_STORE_U32(ctx.r30.u32 + 12, ctx.r3.u32);
loc_831413BC:
	// lwz r3,12(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// b 0x831413d0
	goto loc_831413D0;
loc_831413C8:
	// lwz r3,8(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
loc_831413D0:
	// bl 0x8311f668
	ctx.lr = 0x831413D4;
	sub_8311F668(ctx, base);
	// addi r1,r31,128
	ctx.r1.s64 = ctx.r31.s64 + 128;
	// b 0x833a01fc
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_831413DC"))) PPC_WEAK_FUNC(sub_831413DC);
PPC_FUNC_IMPL(__imp__sub_831413DC) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// addi r31,r12,-128
	ctx.r31.s64 = ctx.r12.s64 + -128;
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,148(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 148);
	// lwz r4,4(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r3,80(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	// bl 0x830dd3e0
	ctx.lr = 0x831413FC;
	sub_830DD3E0(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8314140C"))) PPC_WEAK_FUNC(sub_8314140C);
PPC_FUNC_IMPL(__imp__sub_8314140C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83141410"))) PPC_WEAK_FUNC(sub_83141410);
PPC_FUNC_IMPL(__imp__sub_83141410) {
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
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// lwz r3,20(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// bl 0x83141088
	ctx.lr = 0x83141428;
	sub_83141088(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x83141434
	if (ctx.cr0.eq) goto loc_83141434;
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
loc_83141434:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83141444"))) PPC_WEAK_FUNC(sub_83141444);
PPC_FUNC_IMPL(__imp__sub_83141444) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83141448"))) PPC_WEAK_FUNC(sub_83141448);
PPC_FUNC_IMPL(__imp__sub_83141448) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lwz r25,17952(r26)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r26.u32 + 17952);
	// lwz r16,6056(r29)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r29.u32 + 6056);
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x833a01ac
	ctx.lr = 0x83141458;
	__savegprlr_29(ctx, base);
	// addi r31,r1,-128
	ctx.r31.s64 = ctx.r1.s64 + -128;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32227
	ctx.r11.s64 = -2112028672;
	// stw r3,148(r31)
	PPC_STORE_U32(ctx.r31.u32 + 148, ctx.r3.u32);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r11,r11,5736
	ctx.r11.s64 = ctx.r11.s64 + 5736;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// lwz r29,8(r3)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x83141490
	if (ctx.cr6.eq) goto loc_83141490;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x83140358
	ctx.lr = 0x83141488;
	sub_83140358(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x830dd3e0
	ctx.lr = 0x83141490;
	sub_830DD3E0(ctx, base);
loc_83141490:
	// lwz r29,12(r30)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x831414b0
	if (ctx.cr6.eq) goto loc_831414B0;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// stw r29,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r29.u32);
	// bl 0x83140358
	ctx.lr = 0x831414A8;
	sub_83140358(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x830dd3e0
	ctx.lr = 0x831414B0;
	sub_830DD3E0(ctx, base);
loc_831414B0:
	// lwz r29,16(r30)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x831414cc
	if (ctx.cr6.eq) goto loc_831414CC;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x83140358
	ctx.lr = 0x831414C4;
	sub_83140358(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x830dd3e0
	ctx.lr = 0x831414CC;
	sub_830DD3E0(ctx, base);
loc_831414CC:
	// lwz r29,20(r30)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r30.u32 + 20);
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x831414e8
	if (ctx.cr6.eq) goto loc_831414E8;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x83140358
	ctx.lr = 0x831414E0;
	sub_83140358(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x830dd3e0
	ctx.lr = 0x831414E8;
	sub_830DD3E0(ctx, base);
loc_831414E8:
	// lwz r3,24(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 24);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x83141508
	if (ctx.cr6.eq) goto loc_83141508;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x83141508;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_83141508:
	// lis r11,-32228
	ctx.r11.s64 = -2112094208;
	// addi r11,r11,19412
	ctx.r11.s64 = ctx.r11.s64 + 19412;
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
	// addi r1,r31,128
	ctx.r1.s64 = ctx.r31.s64 + 128;
	// b 0x833a01fc
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83141450"))) PPC_WEAK_FUNC(sub_83141450);
PPC_FUNC_IMPL(__imp__sub_83141450) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x833a01ac
	ctx.lr = 0x83141458;
	__savegprlr_29(ctx, base);
	// addi r31,r1,-128
	ctx.r31.s64 = ctx.r1.s64 + -128;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32227
	ctx.r11.s64 = -2112028672;
	// stw r3,148(r31)
	PPC_STORE_U32(ctx.r31.u32 + 148, ctx.r3.u32);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r11,r11,5736
	ctx.r11.s64 = ctx.r11.s64 + 5736;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// lwz r29,8(r3)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x83141490
	if (ctx.cr6.eq) goto loc_83141490;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x83140358
	ctx.lr = 0x83141488;
	sub_83140358(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x830dd3e0
	ctx.lr = 0x83141490;
	sub_830DD3E0(ctx, base);
loc_83141490:
	// lwz r29,12(r30)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x831414b0
	if (ctx.cr6.eq) goto loc_831414B0;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// stw r29,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r29.u32);
	// bl 0x83140358
	ctx.lr = 0x831414A8;
	sub_83140358(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x830dd3e0
	ctx.lr = 0x831414B0;
	sub_830DD3E0(ctx, base);
loc_831414B0:
	// lwz r29,16(r30)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x831414cc
	if (ctx.cr6.eq) goto loc_831414CC;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x83140358
	ctx.lr = 0x831414C4;
	sub_83140358(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x830dd3e0
	ctx.lr = 0x831414CC;
	sub_830DD3E0(ctx, base);
loc_831414CC:
	// lwz r29,20(r30)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r30.u32 + 20);
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x831414e8
	if (ctx.cr6.eq) goto loc_831414E8;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x83140358
	ctx.lr = 0x831414E0;
	sub_83140358(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x830dd3e0
	ctx.lr = 0x831414E8;
	sub_830DD3E0(ctx, base);
loc_831414E8:
	// lwz r3,24(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 24);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x83141508
	if (ctx.cr6.eq) goto loc_83141508;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x83141508;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_83141508:
	// lis r11,-32228
	ctx.r11.s64 = -2112094208;
	// addi r11,r11,19412
	ctx.r11.s64 = ctx.r11.s64 + 19412;
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
	// addi r1,r31,128
	ctx.r1.s64 = ctx.r31.s64 + 128;
	// b 0x833a01fc
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8314151C"))) PPC_WEAK_FUNC(sub_8314151C);
PPC_FUNC_IMPL(__imp__sub_8314151C) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// addi r31,r12,-128
	ctx.r31.s64 = ctx.r12.s64 + -128;
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r3,148(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 148);
	// bl 0x8313e940
	ctx.lr = 0x83141534;
	sub_8313E940(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83141544"))) PPC_WEAK_FUNC(sub_83141544);
PPC_FUNC_IMPL(__imp__sub_83141544) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83141548"))) PPC_WEAK_FUNC(sub_83141548);
PPC_FUNC_IMPL(__imp__sub_83141548) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lwz r25,17952(r26)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r26.u32 + 17952);
	// lwz r16,6112(r29)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r29.u32 + 6112);
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// addi r31,r1,-112
	ctx.r31.s64 = ctx.r1.s64 + -112;
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// stw r3,132(r31)
	PPC_STORE_U32(ctx.r31.u32 + 132, ctx.r3.u32);
	// li r3,36
	ctx.r3.s64 = 36;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x830dd390
	ctx.lr = 0x8314157C;
	sub_830DD390(ctx, base);
	// stw r3,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r3.u32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x83141594
	if (ctx.cr0.eq) goto loc_83141594;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x83140df0
	ctx.lr = 0x83141590;
	sub_83140DF0(ctx, base);
	// b 0x83141598
	goto loc_83141598;
loc_83141594:
	// li r3,0
	ctx.r3.s64 = 0;
loc_83141598:
	// addi r1,r31,112
	ctx.r1.s64 = ctx.r31.s64 + 112;
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

__attribute__((alias("__imp__sub_83141550"))) PPC_WEAK_FUNC(sub_83141550);
PPC_FUNC_IMPL(__imp__sub_83141550) {
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
	// addi r31,r1,-112
	ctx.r31.s64 = ctx.r1.s64 + -112;
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// stw r3,132(r31)
	PPC_STORE_U32(ctx.r31.u32 + 132, ctx.r3.u32);
	// li r3,36
	ctx.r3.s64 = 36;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x830dd390
	ctx.lr = 0x8314157C;
	sub_830DD390(ctx, base);
	// stw r3,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r3.u32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x83141594
	if (ctx.cr0.eq) goto loc_83141594;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x83140df0
	ctx.lr = 0x83141590;
	sub_83140DF0(ctx, base);
	// b 0x83141598
	goto loc_83141598;
loc_83141594:
	// li r3,0
	ctx.r3.s64 = 0;
loc_83141598:
	// addi r1,r31,112
	ctx.r1.s64 = ctx.r31.s64 + 112;
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

__attribute__((alias("__imp__sub_831415B0"))) PPC_WEAK_FUNC(sub_831415B0);
PPC_FUNC_IMPL(__imp__sub_831415B0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// addi r31,r12,-112
	ctx.r31.s64 = ctx.r12.s64 + -112;
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r4,132(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 132);
	// lwz r3,80(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	// bl 0x830dd3e0
	ctx.lr = 0x831415CC;
	sub_830DD3E0(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831415DC"))) PPC_WEAK_FUNC(sub_831415DC);
PPC_FUNC_IMPL(__imp__sub_831415DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_831415E0"))) PPC_WEAK_FUNC(sub_831415E0);
PPC_FUNC_IMPL(__imp__sub_831415E0) {
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
	// bl 0x83141450
	ctx.lr = 0x83141600;
	sub_83141450(ctx, base);
	// clrlwi. r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x83141610
	if (ctx.cr0.eq) goto loc_83141610;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x830dd3e0
	ctx.lr = 0x83141610;
	sub_830DD3E0(ctx, base);
loc_83141610:
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

__attribute__((alias("__imp__sub_8314162C"))) PPC_WEAK_FUNC(sub_8314162C);
PPC_FUNC_IMPL(__imp__sub_8314162C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83141630"))) PPC_WEAK_FUNC(sub_83141630);
PPC_FUNC_IMPL(__imp__sub_83141630) {
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
	// lis r31,-31827
	ctx.r31.s64 = -2085814272;
	// lwz r3,-4624(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -4624);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x83141664
	if (ctx.cr6.eq) goto loc_83141664;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x83141664;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_83141664:
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,-4624(r31)
	PPC_STORE_U32(ctx.r31.u32 + -4624, ctx.r11.u32);
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

__attribute__((alias("__imp__sub_83141680"))) PPC_WEAK_FUNC(sub_83141680);
PPC_FUNC_IMPL(__imp__sub_83141680) {
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
	// lis r31,-31827
	ctx.r31.s64 = -2085814272;
	// lwz r3,-4620(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -4620);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x831416b4
	if (ctx.cr6.eq) goto loc_831416B4;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x831416B4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_831416B4:
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,-4620(r31)
	PPC_STORE_U32(ctx.r31.u32 + -4620, ctx.r11.u32);
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

__attribute__((alias("__imp__sub_831416D0"))) PPC_WEAK_FUNC(sub_831416D0);
PPC_FUNC_IMPL(__imp__sub_831416D0) {
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
	// lis r11,-32228
	ctx.r11.s64 = -2112094208;
	// addi r3,r11,-5832
	ctx.r3.s64 = ctx.r11.s64 + -5832;
	// bl 0x830dd180
	ctx.lr = 0x831416EC;
	sub_830DD180(ctx, base);
	// lis r11,-31827
	ctx.r11.s64 = -2085814272;
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// addi r31,r11,-4624
	ctx.r31.s64 = ctx.r11.s64 + -4624;
	// stw r3,-4624(r11)
	PPC_STORE_U32(ctx.r11.u32 + -4624, ctx.r3.u32);
	// beq 0x83141714
	if (ctx.cr0.eq) goto loc_83141714;
	// lis r11,-31980
	ctx.r11.s64 = -2095841280;
	// lis r10,-31827
	ctx.r10.s64 = -2085814272;
	// addi r4,r11,5680
	ctx.r4.s64 = ctx.r11.s64 + 5680;
	// addi r3,r10,-4588
	ctx.r3.s64 = ctx.r10.s64 + -4588;
	// bl 0x830ff598
	ctx.lr = 0x83141714;
	sub_830FF598(ctx, base);
loc_83141714:
	// lis r11,-32228
	ctx.r11.s64 = -2112094208;
	// addi r3,r11,-6368
	ctx.r3.s64 = ctx.r11.s64 + -6368;
	// bl 0x830dd180
	ctx.lr = 0x83141720;
	sub_830DD180(ctx, base);
	// stw r3,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r3.u32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x83141740
	if (ctx.cr0.eq) goto loc_83141740;
	// lis r11,-31980
	ctx.r11.s64 = -2095841280;
	// lis r10,-31827
	ctx.r10.s64 = -2085814272;
	// addi r4,r11,5760
	ctx.r4.s64 = ctx.r11.s64 + 5760;
	// addi r3,r10,-4600
	ctx.r3.s64 = ctx.r10.s64 + -4600;
	// bl 0x830ff598
	ctx.lr = 0x83141740;
	sub_830FF598(ctx, base);
loc_83141740:
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

__attribute__((alias("__imp__sub_83141754"))) PPC_WEAK_FUNC(sub_83141754);
PPC_FUNC_IMPL(__imp__sub_83141754) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83141758"))) PPC_WEAK_FUNC(sub_83141758);
PPC_FUNC_IMPL(__imp__sub_83141758) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32227
	ctx.r11.s64 = -2112028672;
	// stw r4,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r4.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r11,r11,6160
	ctx.r11.s64 = ctx.r11.s64 + 6160;
	// stb r10,4(r3)
	PPC_STORE_U8(ctx.r3.u32 + 4, ctx.r10.u8);
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83141774"))) PPC_WEAK_FUNC(sub_83141774);
PPC_FUNC_IMPL(__imp__sub_83141774) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83141778"))) PPC_WEAK_FUNC(sub_83141778);
PPC_FUNC_IMPL(__imp__sub_83141778) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32227
	ctx.r11.s64 = -2112028672;
	// addi r11,r11,6160
	ctx.r11.s64 = ctx.r11.s64 + 6160;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83141788"))) PPC_WEAK_FUNC(sub_83141788);
PPC_FUNC_IMPL(__imp__sub_83141788) {
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
	// lis r11,-32227
	ctx.r11.s64 = -2112028672;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r11,r11,6160
	ctx.r11.s64 = ctx.r11.s64 + 6160;
	// clrlwi. r10,r4,31
	ctx.r10.u64 = ctx.r4.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// beq 0x831417b4
	if (ctx.cr0.eq) goto loc_831417B4;
	// bl 0x830dd3e0
	ctx.lr = 0x831417B4;
	sub_830DD3E0(ctx, base);
loc_831417B4:
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

__attribute__((alias("__imp__sub_831417CC"))) PPC_WEAK_FUNC(sub_831417CC);
PPC_FUNC_IMPL(__imp__sub_831417CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_831417D0"))) PPC_WEAK_FUNC(sub_831417D0);
PPC_FUNC_IMPL(__imp__sub_831417D0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x833a0198
	ctx.lr = 0x831417D8;
	__savegprlr_24(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r10,8(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lwz r30,16(r4)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r4.u32 + 16);
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// lwz r29,4(r4)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x83141890
	if (ctx.cr6.eq) goto loc_83141890;
	// lwz r10,0(r5)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// mr r3,r5
	ctx.r3.u64 = ctx.r5.u64;
	// lwz r28,8(r11)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r11,16(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 16);
	// lwz r27,0(r28)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x83141814;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8314182C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x83141844;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r24,r3
	ctx.r24.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8314185C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,4(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 4);
	// lis r10,-32228
	ctx.r10.s64 = -2112094208;
	// mr r8,r3
	ctx.r8.u64 = ctx.r3.u64;
	// stw r26,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r26.u32);
	// addi r5,r10,-7672
	ctx.r5.s64 = ctx.r10.s64 + -7672;
	// mr r7,r30
	ctx.r7.u64 = ctx.r30.u64;
	// li r6,1
	ctx.r6.s64 = 1;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// mr r9,r24
	ctx.r9.u64 = ctx.r24.u64;
	// mr r10,r25
	ctx.r10.u64 = ctx.r25.u64;
	// bctrl 
	ctx.lr = 0x83141890;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_83141890:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x833a01e8
	__restgprlr_24(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83141898"))) PPC_WEAK_FUNC(sub_83141898);
PPC_FUNC_IMPL(__imp__sub_83141898) {
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
	// lis r30,-31827
	ctx.r30.s64 = -2085814272;
	// lwz r31,-4616(r30)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r30.u32 + -4616);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x831418cc
	if (ctx.cr6.eq) goto loc_831418CC;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x830fcf30
	ctx.lr = 0x831418C4;
	sub_830FCF30(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x830dd3e0
	ctx.lr = 0x831418CC;
	sub_830DD3E0(ctx, base);
loc_831418CC:
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,-4616(r30)
	PPC_STORE_U32(ctx.r30.u32 + -4616, ctx.r11.u32);
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

__attribute__((alias("__imp__sub_831418EC"))) PPC_WEAK_FUNC(sub_831418EC);
PPC_FUNC_IMPL(__imp__sub_831418EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_831418F0"))) PPC_WEAK_FUNC(sub_831418F0);
PPC_FUNC_IMPL(__imp__sub_831418F0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lwz r25,17952(r26)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r26.u32 + 17952);
	// lwz r16,6184(r29)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r29.u32 + 6184);
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// addi r31,r1,-112
	ctx.r31.s64 = ctx.r1.s64 + -112;
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r30,-31827
	ctx.r30.s64 = -2085814272;
	// lwz r3,-4616(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + -4616);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x83141988
	if (!ctx.cr6.eq) goto loc_83141988;
	// lis r11,-31827
	ctx.r11.s64 = -2085814272;
	// addi r3,r31,80
	ctx.r3.s64 = ctx.r31.s64 + 80;
	// lwz r4,-5080(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + -5080);
	// bl 0x830fcf80
	ctx.lr = 0x83141930;
	sub_830FCF80(ctx, base);
	// lwz r11,-4616(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + -4616);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8314197c
	if (!ctx.cr6.eq) goto loc_8314197C;
	// li r3,4
	ctx.r3.s64 = 4;
	// bl 0x830dd340
	ctx.lr = 0x83141944;
	sub_830DD340(ctx, base);
	// stw r3,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r3.u32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x83141960
	if (ctx.cr0.eq) goto loc_83141960;
	// lis r11,-31827
	ctx.r11.s64 = -2085814272;
	// lwz r4,-5084(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + -5084);
	// bl 0x830fcef0
	ctx.lr = 0x8314195C;
	sub_830FCEF0(ctx, base);
	// b 0x83141964
	goto loc_83141964;
loc_83141960:
	// li r3,0
	ctx.r3.s64 = 0;
loc_83141964:
	// stw r3,-4616(r30)
	PPC_STORE_U32(ctx.r30.u32 + -4616, ctx.r3.u32);
	// lis r11,-31980
	ctx.r11.s64 = -2095841280;
	// lis r10,-31827
	ctx.r10.s64 = -2085814272;
	// addi r4,r11,6296
	ctx.r4.s64 = ctx.r11.s64 + 6296;
	// addi r3,r10,-4612
	ctx.r3.s64 = ctx.r10.s64 + -4612;
	// bl 0x830ff598
	ctx.lr = 0x8314197C;
	sub_830FF598(ctx, base);
loc_8314197C:
	// addi r3,r31,80
	ctx.r3.s64 = ctx.r31.s64 + 80;
	// bl 0x830fcfb8
	ctx.lr = 0x83141984;
	sub_830FCFB8(ctx, base);
	// lwz r3,-4616(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + -4616);
loc_83141988:
	// addi r1,r31,112
	ctx.r1.s64 = ctx.r31.s64 + 112;
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

__attribute__((alias("__imp__sub_831418F8"))) PPC_WEAK_FUNC(sub_831418F8);
PPC_FUNC_IMPL(__imp__sub_831418F8) {
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
	// addi r31,r1,-112
	ctx.r31.s64 = ctx.r1.s64 + -112;
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r30,-31827
	ctx.r30.s64 = -2085814272;
	// lwz r3,-4616(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + -4616);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x83141988
	if (!ctx.cr6.eq) goto loc_83141988;
	// lis r11,-31827
	ctx.r11.s64 = -2085814272;
	// addi r3,r31,80
	ctx.r3.s64 = ctx.r31.s64 + 80;
	// lwz r4,-5080(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + -5080);
	// bl 0x830fcf80
	ctx.lr = 0x83141930;
	sub_830FCF80(ctx, base);
	// lwz r11,-4616(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + -4616);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8314197c
	if (!ctx.cr6.eq) goto loc_8314197C;
	// li r3,4
	ctx.r3.s64 = 4;
	// bl 0x830dd340
	ctx.lr = 0x83141944;
	sub_830DD340(ctx, base);
	// stw r3,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r3.u32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x83141960
	if (ctx.cr0.eq) goto loc_83141960;
	// lis r11,-31827
	ctx.r11.s64 = -2085814272;
	// lwz r4,-5084(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + -5084);
	// bl 0x830fcef0
	ctx.lr = 0x8314195C;
	sub_830FCEF0(ctx, base);
	// b 0x83141964
	goto loc_83141964;
loc_83141960:
	// li r3,0
	ctx.r3.s64 = 0;
loc_83141964:
	// stw r3,-4616(r30)
	PPC_STORE_U32(ctx.r30.u32 + -4616, ctx.r3.u32);
	// lis r11,-31980
	ctx.r11.s64 = -2095841280;
	// lis r10,-31827
	ctx.r10.s64 = -2085814272;
	// addi r4,r11,6296
	ctx.r4.s64 = ctx.r11.s64 + 6296;
	// addi r3,r10,-4612
	ctx.r3.s64 = ctx.r10.s64 + -4612;
	// bl 0x830ff598
	ctx.lr = 0x8314197C;
	sub_830FF598(ctx, base);
loc_8314197C:
	// addi r3,r31,80
	ctx.r3.s64 = ctx.r31.s64 + 80;
	// bl 0x830fcfb8
	ctx.lr = 0x83141984;
	sub_830FCFB8(ctx, base);
	// lwz r3,-4616(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + -4616);
loc_83141988:
	// addi r1,r31,112
	ctx.r1.s64 = ctx.r31.s64 + 112;
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

__attribute__((alias("__imp__sub_831419A0"))) PPC_WEAK_FUNC(sub_831419A0);
PPC_FUNC_IMPL(__imp__sub_831419A0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// addi r31,r12,-112
	ctx.r31.s64 = ctx.r12.s64 + -112;
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r3,r31,80
	ctx.r3.s64 = ctx.r31.s64 + 80;
	// bl 0x830fcfb8
	ctx.lr = 0x831419B8;
	sub_830FCFB8(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831419C8"))) PPC_WEAK_FUNC(sub_831419C8);
PPC_FUNC_IMPL(__imp__sub_831419C8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// addi r31,r12,-112
	ctx.r31.s64 = ctx.r12.s64 + -112;
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r3,84(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 84);
	// bl 0x830dd3e0
	ctx.lr = 0x831419E0;
	sub_830DD3E0(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831419F0"))) PPC_WEAK_FUNC(sub_831419F0);
PPC_FUNC_IMPL(__imp__sub_831419F0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lwz r25,17952(r26)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r26.u32 + 17952);
	// lwz r16,6264(r29)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r29.u32 + 6264);
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// addi r31,r1,-112
	ctx.r31.s64 = ctx.r1.s64 + -112;
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r30,-31827
	ctx.r30.s64 = -2085814272;
	// lwz r3,-4624(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + -4624);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x83141a80
	if (!ctx.cr6.eq) goto loc_83141A80;
	// bl 0x831418f8
	ctx.lr = 0x83141A24;
	sub_831418F8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r31,80
	ctx.r3.s64 = ctx.r31.s64 + 80;
	// bl 0x830fcf80
	ctx.lr = 0x83141A30;
	sub_830FCF80(ctx, base);
	// lwz r11,-4624(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + -4624);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x83141a74
	if (!ctx.cr6.eq) goto loc_83141A74;
	// lis r11,-32228
	ctx.r11.s64 = -2112094208;
	// addi r3,r11,-5832
	ctx.r3.s64 = ctx.r11.s64 + -5832;
	// bl 0x830dd180
	ctx.lr = 0x83141A48;
	sub_830DD180(ctx, base);
	// stw r3,-4624(r30)
	PPC_STORE_U32(ctx.r30.u32 + -4624, ctx.r3.u32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne 0x83141a60
	if (!ctx.cr0.eq) goto loc_83141A60;
	// li r3,4
	ctx.r3.s64 = 4;
	// bl 0x830fbfc0
	ctx.lr = 0x83141A5C;
	sub_830FBFC0(ctx, base);
	// b 0x83141a74
	goto loc_83141A74;
loc_83141A60:
	// lis r11,-31980
	ctx.r11.s64 = -2095841280;
	// lis r10,-31827
	ctx.r10.s64 = -2085814272;
	// addi r4,r11,5680
	ctx.r4.s64 = ctx.r11.s64 + 5680;
	// addi r3,r10,-4588
	ctx.r3.s64 = ctx.r10.s64 + -4588;
	// bl 0x830ff598
	ctx.lr = 0x83141A74;
	sub_830FF598(ctx, base);
loc_83141A74:
	// addi r3,r31,80
	ctx.r3.s64 = ctx.r31.s64 + 80;
	// bl 0x830fcfb8
	ctx.lr = 0x83141A7C;
	sub_830FCFB8(ctx, base);
	// lwz r3,-4624(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + -4624);
loc_83141A80:
	// addi r1,r31,112
	ctx.r1.s64 = ctx.r31.s64 + 112;
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

__attribute__((alias("__imp__sub_831419F8"))) PPC_WEAK_FUNC(sub_831419F8);
PPC_FUNC_IMPL(__imp__sub_831419F8) {
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
	// addi r31,r1,-112
	ctx.r31.s64 = ctx.r1.s64 + -112;
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r30,-31827
	ctx.r30.s64 = -2085814272;
	// lwz r3,-4624(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + -4624);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x83141a80
	if (!ctx.cr6.eq) goto loc_83141A80;
	// bl 0x831418f8
	ctx.lr = 0x83141A24;
	sub_831418F8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r31,80
	ctx.r3.s64 = ctx.r31.s64 + 80;
	// bl 0x830fcf80
	ctx.lr = 0x83141A30;
	sub_830FCF80(ctx, base);
	// lwz r11,-4624(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + -4624);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x83141a74
	if (!ctx.cr6.eq) goto loc_83141A74;
	// lis r11,-32228
	ctx.r11.s64 = -2112094208;
	// addi r3,r11,-5832
	ctx.r3.s64 = ctx.r11.s64 + -5832;
	// bl 0x830dd180
	ctx.lr = 0x83141A48;
	sub_830DD180(ctx, base);
	// stw r3,-4624(r30)
	PPC_STORE_U32(ctx.r30.u32 + -4624, ctx.r3.u32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne 0x83141a60
	if (!ctx.cr0.eq) goto loc_83141A60;
	// li r3,4
	ctx.r3.s64 = 4;
	// bl 0x830fbfc0
	ctx.lr = 0x83141A5C;
	sub_830FBFC0(ctx, base);
	// b 0x83141a74
	goto loc_83141A74;
loc_83141A60:
	// lis r11,-31980
	ctx.r11.s64 = -2095841280;
	// lis r10,-31827
	ctx.r10.s64 = -2085814272;
	// addi r4,r11,5680
	ctx.r4.s64 = ctx.r11.s64 + 5680;
	// addi r3,r10,-4588
	ctx.r3.s64 = ctx.r10.s64 + -4588;
	// bl 0x830ff598
	ctx.lr = 0x83141A74;
	sub_830FF598(ctx, base);
loc_83141A74:
	// addi r3,r31,80
	ctx.r3.s64 = ctx.r31.s64 + 80;
	// bl 0x830fcfb8
	ctx.lr = 0x83141A7C;
	sub_830FCFB8(ctx, base);
	// lwz r3,-4624(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + -4624);
loc_83141A80:
	// addi r1,r31,112
	ctx.r1.s64 = ctx.r31.s64 + 112;
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

__attribute__((alias("__imp__sub_83141A98"))) PPC_WEAK_FUNC(sub_83141A98);
PPC_FUNC_IMPL(__imp__sub_83141A98) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// addi r31,r12,-112
	ctx.r31.s64 = ctx.r12.s64 + -112;
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r3,r31,80
	ctx.r3.s64 = ctx.r31.s64 + 80;
	// bl 0x830fcfb8
	ctx.lr = 0x83141AB0;
	sub_830FCFB8(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83141AC0"))) PPC_WEAK_FUNC(sub_83141AC0);
PPC_FUNC_IMPL(__imp__sub_83141AC0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lwz r25,17952(r26)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r26.u32 + 17952);
	// lwz r16,6328(r29)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r29.u32 + 6328);
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// addi r31,r1,-112
	ctx.r31.s64 = ctx.r1.s64 + -112;
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r30,-31827
	ctx.r30.s64 = -2085814272;
	// lwz r3,-4620(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + -4620);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x83141b50
	if (!ctx.cr6.eq) goto loc_83141B50;
	// bl 0x831418f8
	ctx.lr = 0x83141AF4;
	sub_831418F8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r31,80
	ctx.r3.s64 = ctx.r31.s64 + 80;
	// bl 0x830fcf80
	ctx.lr = 0x83141B00;
	sub_830FCF80(ctx, base);
	// lwz r11,-4620(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + -4620);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x83141b44
	if (!ctx.cr6.eq) goto loc_83141B44;
	// lis r11,-32228
	ctx.r11.s64 = -2112094208;
	// addi r3,r11,-6368
	ctx.r3.s64 = ctx.r11.s64 + -6368;
	// bl 0x830dd180
	ctx.lr = 0x83141B18;
	sub_830DD180(ctx, base);
	// stw r3,-4620(r30)
	PPC_STORE_U32(ctx.r30.u32 + -4620, ctx.r3.u32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne 0x83141b30
	if (!ctx.cr0.eq) goto loc_83141B30;
	// li r3,4
	ctx.r3.s64 = 4;
	// bl 0x830fbfc0
	ctx.lr = 0x83141B2C;
	sub_830FBFC0(ctx, base);
	// b 0x83141b44
	goto loc_83141B44;
loc_83141B30:
	// lis r11,-31980
	ctx.r11.s64 = -2095841280;
	// lis r10,-31827
	ctx.r10.s64 = -2085814272;
	// addi r4,r11,5760
	ctx.r4.s64 = ctx.r11.s64 + 5760;
	// addi r3,r10,-4600
	ctx.r3.s64 = ctx.r10.s64 + -4600;
	// bl 0x830ff598
	ctx.lr = 0x83141B44;
	sub_830FF598(ctx, base);
loc_83141B44:
	// addi r3,r31,80
	ctx.r3.s64 = ctx.r31.s64 + 80;
	// bl 0x830fcfb8
	ctx.lr = 0x83141B4C;
	sub_830FCFB8(ctx, base);
	// lwz r3,-4620(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + -4620);
loc_83141B50:
	// addi r1,r31,112
	ctx.r1.s64 = ctx.r31.s64 + 112;
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

__attribute__((alias("__imp__sub_83141AC8"))) PPC_WEAK_FUNC(sub_83141AC8);
PPC_FUNC_IMPL(__imp__sub_83141AC8) {
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
	// addi r31,r1,-112
	ctx.r31.s64 = ctx.r1.s64 + -112;
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r30,-31827
	ctx.r30.s64 = -2085814272;
	// lwz r3,-4620(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + -4620);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x83141b50
	if (!ctx.cr6.eq) goto loc_83141B50;
	// bl 0x831418f8
	ctx.lr = 0x83141AF4;
	sub_831418F8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r31,80
	ctx.r3.s64 = ctx.r31.s64 + 80;
	// bl 0x830fcf80
	ctx.lr = 0x83141B00;
	sub_830FCF80(ctx, base);
	// lwz r11,-4620(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + -4620);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x83141b44
	if (!ctx.cr6.eq) goto loc_83141B44;
	// lis r11,-32228
	ctx.r11.s64 = -2112094208;
	// addi r3,r11,-6368
	ctx.r3.s64 = ctx.r11.s64 + -6368;
	// bl 0x830dd180
	ctx.lr = 0x83141B18;
	sub_830DD180(ctx, base);
	// stw r3,-4620(r30)
	PPC_STORE_U32(ctx.r30.u32 + -4620, ctx.r3.u32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne 0x83141b30
	if (!ctx.cr0.eq) goto loc_83141B30;
	// li r3,4
	ctx.r3.s64 = 4;
	// bl 0x830fbfc0
	ctx.lr = 0x83141B2C;
	sub_830FBFC0(ctx, base);
	// b 0x83141b44
	goto loc_83141B44;
loc_83141B30:
	// lis r11,-31980
	ctx.r11.s64 = -2095841280;
	// lis r10,-31827
	ctx.r10.s64 = -2085814272;
	// addi r4,r11,5760
	ctx.r4.s64 = ctx.r11.s64 + 5760;
	// addi r3,r10,-4600
	ctx.r3.s64 = ctx.r10.s64 + -4600;
	// bl 0x830ff598
	ctx.lr = 0x83141B44;
	sub_830FF598(ctx, base);
loc_83141B44:
	// addi r3,r31,80
	ctx.r3.s64 = ctx.r31.s64 + 80;
	// bl 0x830fcfb8
	ctx.lr = 0x83141B4C;
	sub_830FCFB8(ctx, base);
	// lwz r3,-4620(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + -4620);
loc_83141B50:
	// addi r1,r31,112
	ctx.r1.s64 = ctx.r31.s64 + 112;
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

__attribute__((alias("__imp__sub_83141B68"))) PPC_WEAK_FUNC(sub_83141B68);
PPC_FUNC_IMPL(__imp__sub_83141B68) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// addi r31,r12,-112
	ctx.r31.s64 = ctx.r12.s64 + -112;
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r3,r31,80
	ctx.r3.s64 = ctx.r31.s64 + 80;
	// bl 0x830fcfb8
	ctx.lr = 0x83141B80;
	sub_830FCFB8(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83141B90"))) PPC_WEAK_FUNC(sub_83141B90);
PPC_FUNC_IMPL(__imp__sub_83141B90) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x833a0194
	ctx.lr = 0x83141B98;
	__savegprlr_23(ctx, base);
	// stwu r1,-2240(r1)
	ea = -2240 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r26,r5
	ctx.r26.u64 = ctx.r5.u64;
	// mr r31,r6
	ctx.r31.u64 = ctx.r6.u64;
	// bl 0x831419f8
	ctx.lr = 0x83141BB0;
	sub_831419F8(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x830ed200
	ctx.lr = 0x83141BBC;
	sub_830ED200(ctx, base);
	// lis r11,-32228
	ctx.r11.s64 = -2112094208;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// addi r4,r11,-6368
	ctx.r4.s64 = ctx.r11.s64 + -6368;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x830d8d28
	ctx.lr = 0x83141BD0;
	sub_830D8D28(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x83141bec
	if (ctx.cr0.eq) goto loc_83141BEC;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8311e1e0
	ctx.lr = 0x83141BE0;
	sub_8311E1E0(ctx, base);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// bl 0x83141ac8
	ctx.lr = 0x83141BE8;
	sub_83141AC8(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
loc_83141BEC:
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// li r6,1023
	ctx.r6.s64 = 1023;
	// addi r5,r1,112
	ctx.r5.s64 = ctx.r1.s64 + 112;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x83141C0C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,8(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x83141cac
	if (ctx.cr6.eq) goto loc_83141CAC;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,8(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// lwz r11,16(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// lwz r28,0(r10)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x83141C34;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x83141C4C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r24,r3
	ctx.r24.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x83141C64;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r23,r3
	ctx.r23.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x83141C7C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,4(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// mr r8,r3
	ctx.r8.u64 = ctx.r3.u64;
	// addi r7,r1,112
	ctx.r7.s64 = ctx.r1.s64 + 112;
	// lwz r3,8(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// stw r25,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r25.u32);
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r9,r23
	ctx.r9.u64 = ctx.r23.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// mr r10,r24
	ctx.r10.u64 = ctx.r24.u64;
	// bctrl 
	ctx.lr = 0x83141CAC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_83141CAC:
	// cmpwi cr6,r27,2
	ctx.cr6.compare<int32_t>(ctx.r27.s32, 2, ctx.xer);
	// bne cr6,0x83141cd4
	if (!ctx.cr6.eq) goto loc_83141CD4;
	// lbz r11,4(r29)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r29.u32 + 4);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x83141cd4
	if (ctx.cr0.eq) goto loc_83141CD4;
	// stw r30,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r30.u32);
	// lis r11,-32194
	ctx.r11.s64 = -2109865984;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// addi r4,r11,-27860
	ctx.r4.s64 = ctx.r11.s64 + -27860;
	// bl 0x833a7198
	ctx.lr = 0x83141CD4;
	sub_833A7198(ctx, base);
loc_83141CD4:
	// addi r1,r1,2240
	ctx.r1.s64 = ctx.r1.s64 + 2240;
	// b 0x833a01e4
	__restgprlr_23(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83141CDC"))) PPC_WEAK_FUNC(sub_83141CDC);
PPC_FUNC_IMPL(__imp__sub_83141CDC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83141CE0"))) PPC_WEAK_FUNC(sub_83141CE0);
PPC_FUNC_IMPL(__imp__sub_83141CE0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x833a0190
	ctx.lr = 0x83141CE8;
	__savegprlr_22(ctx, base);
	// ld r12,-4096(r1)
	ctx.r12.u64 = PPC_LOAD_U64(ctx.r1.u32 + -4096);
	// stwu r1,-4304(r1)
	ea = -4304 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r27,r5
	ctx.r27.u64 = ctx.r5.u64;
	// mr r31,r6
	ctx.r31.u64 = ctx.r6.u64;
	// mr r26,r7
	ctx.r26.u64 = ctx.r7.u64;
	// mr r25,r8
	ctx.r25.u64 = ctx.r8.u64;
	// mr r24,r9
	ctx.r24.u64 = ctx.r9.u64;
	// mr r23,r10
	ctx.r23.u64 = ctx.r10.u64;
	// bl 0x831419f8
	ctx.lr = 0x83141D14;
	sub_831419F8(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x830ed200
	ctx.lr = 0x83141D20;
	sub_830ED200(ctx, base);
	// lis r11,-32228
	ctx.r11.s64 = -2112094208;
	// mr r22,r3
	ctx.r22.u64 = ctx.r3.u64;
	// addi r4,r11,-6368
	ctx.r4.s64 = ctx.r11.s64 + -6368;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x830d8d28
	ctx.lr = 0x83141D34;
	sub_830D8D28(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x83141d50
	if (ctx.cr0.eq) goto loc_83141D50;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8311e1e0
	ctx.lr = 0x83141D44;
	sub_8311E1E0(ctx, base);
	// mr r22,r3
	ctx.r22.u64 = ctx.r3.u64;
	// bl 0x83141ac8
	ctx.lr = 0x83141D4C;
	sub_83141AC8(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
loc_83141D50:
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// mr r10,r23
	ctx.r10.u64 = ctx.r23.u64;
	// lwz r3,4388(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 4388);
	// mr r9,r24
	ctx.r9.u64 = ctx.r24.u64;
	// mr r8,r25
	ctx.r8.u64 = ctx.r25.u64;
	// mr r7,r26
	ctx.r7.u64 = ctx.r26.u64;
	// li r6,2047
	ctx.r6.s64 = 2047;
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// addi r5,r1,112
	ctx.r5.s64 = ctx.r1.s64 + 112;
	// stw r3,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r3.u32);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x83141D88;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,8(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 8);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x83141e28
	if (ctx.cr6.eq) goto loc_83141E28;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,8(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 8);
	// lwz r11,16(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// lwz r29,0(r10)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x83141DB0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x83141DC8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x83141DE0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r24,r3
	ctx.r24.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x83141DF8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,4(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// mr r8,r3
	ctx.r8.u64 = ctx.r3.u64;
	// addi r7,r1,112
	ctx.r7.s64 = ctx.r1.s64 + 112;
	// lwz r3,8(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 8);
	// mr r6,r22
	ctx.r6.u64 = ctx.r22.u64;
	// stw r26,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r26.u32);
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r9,r24
	ctx.r9.u64 = ctx.r24.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// mr r10,r25
	ctx.r10.u64 = ctx.r25.u64;
	// bctrl 
	ctx.lr = 0x83141E28;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_83141E28:
	// cmpwi cr6,r22,2
	ctx.cr6.compare<int32_t>(ctx.r22.s32, 2, ctx.xer);
	// bne cr6,0x83141e50
	if (!ctx.cr6.eq) goto loc_83141E50;
	// lbz r11,4(r28)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r28.u32 + 4);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x83141e50
	if (ctx.cr0.eq) goto loc_83141E50;
	// stw r30,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r30.u32);
	// lis r11,-32194
	ctx.r11.s64 = -2109865984;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// addi r4,r11,-27860
	ctx.r4.s64 = ctx.r11.s64 + -27860;
	// bl 0x833a7198
	ctx.lr = 0x83141E50;
	sub_833A7198(ctx, base);
loc_83141E50:
	// addi r1,r1,4304
	ctx.r1.s64 = ctx.r1.s64 + 4304;
	// b 0x833a01e0
	__restgprlr_22(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83141E58"))) PPC_WEAK_FUNC(sub_83141E58);
PPC_FUNC_IMPL(__imp__sub_83141E58) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,8
	ctx.r3.s64 = ctx.r3.s64 + 8;
	// b 0x83155c40
	sub_83155C40(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83141E60"))) PPC_WEAK_FUNC(sub_83141E60);
PPC_FUNC_IMPL(__imp__sub_83141E60) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lwz r25,17952(r26)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r26.u32 + 17952);
	// lwz r16,6548(r29)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r29.u32 + 6548);
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// li r0,0
	ctx.r0.s64 = 0;
	// stw r0,4(r1)
	PPC_STORE_U32(ctx.r1.u32 + 4, ctx.r0.u32);
	// bl 0x833a01a0
	ctx.lr = 0x83141E78;
	__savegprlr_26(ctx, base);
	// addi r31,r1,-144
	ctx.r31.s64 = ctx.r1.s64 + -144;
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r10,120(r8)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r8.u32 + 120);
	// extsh r11,r7
	ctx.r11.s64 = ctx.r7.s16;
	// li r26,0
	ctx.r26.s64 = 0;
	// stw r4,172(r31)
	PPC_STORE_U32(ctx.r31.u32 + 172, ctx.r4.u32);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// stw r8,204(r31)
	PPC_STORE_U32(ctx.r31.u32 + 204, ctx.r8.u32);
	// mr r27,r8
	ctx.r27.u64 = ctx.r8.u64;
	// stw r5,180(r31)
	PPC_STORE_U32(ctx.r31.u32 + 180, ctx.r5.u32);
	// mr r29,r6
	ctx.r29.u64 = ctx.r6.u64;
	// stw r6,188(r31)
	PPC_STORE_U32(ctx.r31.u32 + 188, ctx.r6.u32);
	// lwz r10,124(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 124);
	// li r30,0
	ctx.r30.s64 = 0;
	// stb r26,80(r31)
	PPC_STORE_U8(ctx.r31.u32 + 80, ctx.r26.u8);
	// cmpwi cr6,r11,128
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 128, ctx.xer);
	// stw r10,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r10.u32);
	// bgt cr6,0x83141f74
	if (ctx.cr6.gt) goto loc_83141F74;
	// beq cr6,0x83141f4c
	if (ctx.cr6.eq) goto loc_83141F4C;
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// beq cr6,0x83141f40
	if (ctx.cr6.eq) goto loc_83141F40;
	// cmpwi cr6,r11,8
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 8, ctx.xer);
	// beq cr6,0x83141f68
	if (ctx.cr6.eq) goto loc_83141F68;
	// cmpwi cr6,r11,16
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 16, ctx.xer);
	// beq cr6,0x83141f34
	if (ctx.cr6.eq) goto loc_83141F34;
	// cmpwi cr6,r11,32
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 32, ctx.xer);
	// beq cr6,0x83141f24
	if (ctx.cr6.eq) goto loc_83141F24;
	// cmpwi cr6,r11,64
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 64, ctx.xer);
	// bne cr6,0x831420e0
	if (!ctx.cr6.eq) {
		// ERROR 831420E0
		return;
	}
	// lis r11,-32228
	ctx.r11.s64 = -2112094208;
	// mr r3,r6
	ctx.r3.u64 = ctx.r6.u64;
	// addi r4,r11,16536
	ctx.r4.s64 = ctx.r11.s64 + 16536;
	// bl 0x830d8d28
	ctx.lr = 0x83141EFC;
	sub_830D8D28(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x831420e0
	if (!ctx.cr0.eq) {
		// ERROR 831420E0
		return;
	}
	// lis r11,-32228
	ctx.r11.s64 = -2112094208;
	// addi r4,r11,16704
	ctx.r4.s64 = ctx.r11.s64 + 16704;
loc_83141F0C:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x830d8d28
	ctx.lr = 0x83141F14;
	sub_830D8D28(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x831420e0
	if (!ctx.cr0.eq) {
		// ERROR 831420E0
		return;
	}
	// li r26,1
	ctx.r26.s64 = 1;
	// b 0x831420e0
	// ERROR 831420E0
	return;
loc_83141F24:
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x831420e0
	if (ctx.cr6.eq) {
		// ERROR 831420E0
		return;
	}
	// addi r30,r28,8
	ctx.r30.s64 = ctx.r28.s64 + 8;
	// b 0x83142098
	goto loc_83142098;
loc_83141F34:
	// lis r11,-31827
	ctx.r11.s64 = -2085814272;
	// lwz r30,-4556(r11)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r11.u32 + -4556);
	// b 0x83142098
	goto loc_83142098;
loc_83141F40:
	// lis r11,-31827
	ctx.r11.s64 = -2085814272;
	// lwz r30,-4552(r11)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r11.u32 + -4552);
	// b 0x83142098
	goto loc_83142098;
loc_83141F4C:
	// lis r11,-32227
	ctx.r11.s64 = -2112028672;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r11,r11,6408
	ctx.r11.s64 = ctx.r11.s64 + 6408;
	// addi r4,r11,8
	ctx.r4.s64 = ctx.r11.s64 + 8;
	// bl 0x830d8d28
	ctx.lr = 0x83141F60;
	sub_830D8D28(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x831420e0
	if (!ctx.cr0.eq) {
		// ERROR 831420E0
		return;
	}
loc_83141F68:
	// lis r11,-31827
	ctx.r11.s64 = -2085814272;
	// lwz r30,-4560(r11)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r11.u32 + -4560);
	// b 0x83142098
	goto loc_83142098;
loc_83141F74:
	// cmpwi cr6,r11,256
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 256, ctx.xer);
	// beq cr6,0x83142074
	if (ctx.cr6.eq) goto loc_83142074;
	// cmpwi cr6,r11,512
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 512, ctx.xer);
	// beq cr6,0x83142050
	if (ctx.cr6.eq) goto loc_83142050;
	// cmpwi cr6,r11,1024
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1024, ctx.xer);
	// beq cr6,0x83142014
	if (ctx.cr6.eq) goto loc_83142014;
	// cmpwi cr6,r11,2048
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2048, ctx.xer);
	// beq cr6,0x83141fd8
	if (ctx.cr6.eq) goto loc_83141FD8;
	// cmpwi cr6,r11,4096
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4096, ctx.xer);
	// bne cr6,0x831420e0
	if (!ctx.cr6.eq) {
		// ERROR 831420E0
		return;
	}
	// lis r11,-32228
	ctx.r11.s64 = -2112094208;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r4,r11,16844
	ctx.r4.s64 = ctx.r11.s64 + 16844;
	// bl 0x830d8d28
	ctx.lr = 0x83141FAC;
	sub_830D8D28(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x831420e0
	if (!ctx.cr0.eq) {
		// ERROR 831420E0
		return;
	}
	// lis r11,-32228
	ctx.r11.s64 = -2112094208;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r4,r11,16884
	ctx.r4.s64 = ctx.r11.s64 + 16884;
	// bl 0x830d8d28
	ctx.lr = 0x83141FC4;
	sub_830D8D28(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x831420e0
	if (!ctx.cr0.eq) {
		// ERROR 831420E0
		return;
	}
	// lis r11,-32228
	ctx.r11.s64 = -2112094208;
	// addi r4,r11,16864
	ctx.r4.s64 = ctx.r11.s64 + 16864;
	// b 0x83141f0c
	goto loc_83141F0C;
loc_83141FD8:
	// lis r11,-32228
	ctx.r11.s64 = -2112094208;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r4,r11,16480
	ctx.r4.s64 = ctx.r11.s64 + 16480;
	// bl 0x830d8d28
	ctx.lr = 0x83141FE8;
	sub_830D8D28(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x831420e0
	if (!ctx.cr0.eq) {
		// ERROR 831420E0
		return;
	}
	// lis r11,-32228
	ctx.r11.s64 = -2112094208;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r4,r11,16500
	ctx.r4.s64 = ctx.r11.s64 + 16500;
	// bl 0x830d8d28
	ctx.lr = 0x83142000;
	sub_830D8D28(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x831420e0
	if (!ctx.cr0.eq) {
		// ERROR 831420E0
		return;
	}
	// lis r11,-32228
	ctx.r11.s64 = -2112094208;
	// addi r4,r11,16556
	ctx.r4.s64 = ctx.r11.s64 + 16556;
	// b 0x83141f0c
	goto loc_83141F0C;
loc_83142014:
	// lis r11,-32228
	ctx.r11.s64 = -2112094208;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r4,r11,16600
	ctx.r4.s64 = ctx.r11.s64 + 16600;
	// bl 0x830d8d28
	ctx.lr = 0x83142024;
	sub_830D8D28(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x831420e0
	if (!ctx.cr0.eq) {
		// ERROR 831420E0
		return;
	}
	// lis r11,-32228
	ctx.r11.s64 = -2112094208;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r4,r11,16404
	ctx.r4.s64 = ctx.r11.s64 + 16404;
	// bl 0x830d8d28
	ctx.lr = 0x8314203C;
	sub_830D8D28(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x831420e0
	if (!ctx.cr0.eq) {
		// ERROR 831420E0
		return;
	}
	// lis r11,-32228
	ctx.r11.s64 = -2112094208;
	// addi r4,r11,16612
	ctx.r4.s64 = ctx.r11.s64 + 16612;
	// b 0x83141f0c
	goto loc_83141F0C;
loc_83142050:
	// lis r11,-32227
	ctx.r11.s64 = -2112028672;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r30,r11,6408
	ctx.r30.s64 = ctx.r11.s64 + 6408;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x830d8d28
	ctx.lr = 0x83142064;
	sub_830D8D28(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x831420e0
	if (!ctx.cr0.eq) {
		// ERROR 831420E0
		return;
	}
	// addi r4,r30,4
	ctx.r4.s64 = ctx.r30.s64 + 4;
	// b 0x83141f0c
	goto loc_83141F0C;
loc_83142074:
	// lis r11,-32227
	ctx.r11.s64 = -2112028672;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r11,r11,6408
	ctx.r11.s64 = ctx.r11.s64 + 6408;
	// addi r4,r11,4
	ctx.r4.s64 = ctx.r11.s64 + 4;
	// bl 0x830d8d28
	ctx.lr = 0x83142088;
	sub_830D8D28(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x831420e0
	if (!ctx.cr0.eq) {
		// ERROR 831420E0
		return;
	}
	// li r26,1
	ctx.r26.s64 = 1;
	// stb r26,80(r31)
	PPC_STORE_U8(ctx.r31.u32 + 80, ctx.r26.u8);
loc_83142098:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x831420e0
	if (ctx.cr6.eq) {
		// ERROR 831420E0
		return;
	}
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// lwz r6,0(r28)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r5,4(r28)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// lwz r11,28(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x831420C0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// b 0x831420e0
	// ERROR 831420E0
	return;
}

__attribute__((alias("__imp__sub_83141E68"))) PPC_WEAK_FUNC(sub_83141E68);
PPC_FUNC_IMPL(__imp__sub_83141E68) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// li r0,0
	ctx.r0.s64 = 0;
	// stw r0,4(r1)
	PPC_STORE_U32(ctx.r1.u32 + 4, ctx.r0.u32);
	// bl 0x833a01a0
	ctx.lr = 0x83141E78;
	__savegprlr_26(ctx, base);
	// addi r31,r1,-144
	ctx.r31.s64 = ctx.r1.s64 + -144;
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r10,120(r8)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r8.u32 + 120);
	// extsh r11,r7
	ctx.r11.s64 = ctx.r7.s16;
	// li r26,0
	ctx.r26.s64 = 0;
	// stw r4,172(r31)
	PPC_STORE_U32(ctx.r31.u32 + 172, ctx.r4.u32);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// stw r8,204(r31)
	PPC_STORE_U32(ctx.r31.u32 + 204, ctx.r8.u32);
	// mr r27,r8
	ctx.r27.u64 = ctx.r8.u64;
	// stw r5,180(r31)
	PPC_STORE_U32(ctx.r31.u32 + 180, ctx.r5.u32);
	// mr r29,r6
	ctx.r29.u64 = ctx.r6.u64;
	// stw r6,188(r31)
	PPC_STORE_U32(ctx.r31.u32 + 188, ctx.r6.u32);
	// lwz r10,124(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 124);
	// li r30,0
	ctx.r30.s64 = 0;
	// stb r26,80(r31)
	PPC_STORE_U8(ctx.r31.u32 + 80, ctx.r26.u8);
	// cmpwi cr6,r11,128
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 128, ctx.xer);
	// stw r10,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r10.u32);
	// bgt cr6,0x83141f74
	if (ctx.cr6.gt) goto loc_83141F74;
	// beq cr6,0x83141f4c
	if (ctx.cr6.eq) goto loc_83141F4C;
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// beq cr6,0x83141f40
	if (ctx.cr6.eq) goto loc_83141F40;
	// cmpwi cr6,r11,8
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 8, ctx.xer);
	// beq cr6,0x83141f68
	if (ctx.cr6.eq) goto loc_83141F68;
	// cmpwi cr6,r11,16
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 16, ctx.xer);
	// beq cr6,0x83141f34
	if (ctx.cr6.eq) goto loc_83141F34;
	// cmpwi cr6,r11,32
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 32, ctx.xer);
	// beq cr6,0x83141f24
	if (ctx.cr6.eq) goto loc_83141F24;
	// cmpwi cr6,r11,64
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 64, ctx.xer);
	// bne cr6,0x831420e0
	if (!ctx.cr6.eq) goto loc_831420E0;
	// lis r11,-32228
	ctx.r11.s64 = -2112094208;
	// mr r3,r6
	ctx.r3.u64 = ctx.r6.u64;
	// addi r4,r11,16536
	ctx.r4.s64 = ctx.r11.s64 + 16536;
	// bl 0x830d8d28
	ctx.lr = 0x83141EFC;
	sub_830D8D28(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x831420e0
	if (!ctx.cr0.eq) goto loc_831420E0;
	// lis r11,-32228
	ctx.r11.s64 = -2112094208;
	// addi r4,r11,16704
	ctx.r4.s64 = ctx.r11.s64 + 16704;
loc_83141F0C:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x830d8d28
	ctx.lr = 0x83141F14;
	sub_830D8D28(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x831420e0
	if (!ctx.cr0.eq) goto loc_831420E0;
	// li r26,1
	ctx.r26.s64 = 1;
	// b 0x831420e0
	goto loc_831420E0;
loc_83141F24:
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x831420e0
	if (ctx.cr6.eq) goto loc_831420E0;
	// addi r30,r28,8
	ctx.r30.s64 = ctx.r28.s64 + 8;
	// b 0x83142098
	goto loc_83142098;
loc_83141F34:
	// lis r11,-31827
	ctx.r11.s64 = -2085814272;
	// lwz r30,-4556(r11)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r11.u32 + -4556);
	// b 0x83142098
	goto loc_83142098;
loc_83141F40:
	// lis r11,-31827
	ctx.r11.s64 = -2085814272;
	// lwz r30,-4552(r11)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r11.u32 + -4552);
	// b 0x83142098
	goto loc_83142098;
loc_83141F4C:
	// lis r11,-32227
	ctx.r11.s64 = -2112028672;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r11,r11,6408
	ctx.r11.s64 = ctx.r11.s64 + 6408;
	// addi r4,r11,8
	ctx.r4.s64 = ctx.r11.s64 + 8;
	// bl 0x830d8d28
	ctx.lr = 0x83141F60;
	sub_830D8D28(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x831420e0
	if (!ctx.cr0.eq) goto loc_831420E0;
loc_83141F68:
	// lis r11,-31827
	ctx.r11.s64 = -2085814272;
	// lwz r30,-4560(r11)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r11.u32 + -4560);
	// b 0x83142098
	goto loc_83142098;
loc_83141F74:
	// cmpwi cr6,r11,256
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 256, ctx.xer);
	// beq cr6,0x83142074
	if (ctx.cr6.eq) goto loc_83142074;
	// cmpwi cr6,r11,512
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 512, ctx.xer);
	// beq cr6,0x83142050
	if (ctx.cr6.eq) goto loc_83142050;
	// cmpwi cr6,r11,1024
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1024, ctx.xer);
	// beq cr6,0x83142014
	if (ctx.cr6.eq) goto loc_83142014;
	// cmpwi cr6,r11,2048
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2048, ctx.xer);
	// beq cr6,0x83141fd8
	if (ctx.cr6.eq) goto loc_83141FD8;
	// cmpwi cr6,r11,4096
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4096, ctx.xer);
	// bne cr6,0x831420e0
	if (!ctx.cr6.eq) goto loc_831420E0;
	// lis r11,-32228
	ctx.r11.s64 = -2112094208;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r4,r11,16844
	ctx.r4.s64 = ctx.r11.s64 + 16844;
	// bl 0x830d8d28
	ctx.lr = 0x83141FAC;
	sub_830D8D28(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x831420e0
	if (!ctx.cr0.eq) goto loc_831420E0;
	// lis r11,-32228
	ctx.r11.s64 = -2112094208;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r4,r11,16884
	ctx.r4.s64 = ctx.r11.s64 + 16884;
	// bl 0x830d8d28
	ctx.lr = 0x83141FC4;
	sub_830D8D28(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x831420e0
	if (!ctx.cr0.eq) goto loc_831420E0;
	// lis r11,-32228
	ctx.r11.s64 = -2112094208;
	// addi r4,r11,16864
	ctx.r4.s64 = ctx.r11.s64 + 16864;
	// b 0x83141f0c
	goto loc_83141F0C;
loc_83141FD8:
	// lis r11,-32228
	ctx.r11.s64 = -2112094208;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r4,r11,16480
	ctx.r4.s64 = ctx.r11.s64 + 16480;
	// bl 0x830d8d28
	ctx.lr = 0x83141FE8;
	sub_830D8D28(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x831420e0
	if (!ctx.cr0.eq) goto loc_831420E0;
	// lis r11,-32228
	ctx.r11.s64 = -2112094208;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r4,r11,16500
	ctx.r4.s64 = ctx.r11.s64 + 16500;
	// bl 0x830d8d28
	ctx.lr = 0x83142000;
	sub_830D8D28(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x831420e0
	if (!ctx.cr0.eq) goto loc_831420E0;
	// lis r11,-32228
	ctx.r11.s64 = -2112094208;
	// addi r4,r11,16556
	ctx.r4.s64 = ctx.r11.s64 + 16556;
	// b 0x83141f0c
	goto loc_83141F0C;
loc_83142014:
	// lis r11,-32228
	ctx.r11.s64 = -2112094208;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r4,r11,16600
	ctx.r4.s64 = ctx.r11.s64 + 16600;
	// bl 0x830d8d28
	ctx.lr = 0x83142024;
	sub_830D8D28(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x831420e0
	if (!ctx.cr0.eq) goto loc_831420E0;
	// lis r11,-32228
	ctx.r11.s64 = -2112094208;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r4,r11,16404
	ctx.r4.s64 = ctx.r11.s64 + 16404;
	// bl 0x830d8d28
	ctx.lr = 0x8314203C;
	sub_830D8D28(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x831420e0
	if (!ctx.cr0.eq) goto loc_831420E0;
	// lis r11,-32228
	ctx.r11.s64 = -2112094208;
	// addi r4,r11,16612
	ctx.r4.s64 = ctx.r11.s64 + 16612;
	// b 0x83141f0c
	goto loc_83141F0C;
loc_83142050:
	// lis r11,-32227
	ctx.r11.s64 = -2112028672;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r30,r11,6408
	ctx.r30.s64 = ctx.r11.s64 + 6408;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x830d8d28
	ctx.lr = 0x83142064;
	sub_830D8D28(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x831420e0
	if (!ctx.cr0.eq) goto loc_831420E0;
	// addi r4,r30,4
	ctx.r4.s64 = ctx.r30.s64 + 4;
	// b 0x83141f0c
	goto loc_83141F0C;
loc_83142074:
	// lis r11,-32227
	ctx.r11.s64 = -2112028672;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r11,r11,6408
	ctx.r11.s64 = ctx.r11.s64 + 6408;
	// addi r4,r11,4
	ctx.r4.s64 = ctx.r11.s64 + 4;
	// bl 0x830d8d28
	ctx.lr = 0x83142088;
	sub_830D8D28(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x831420e0
	if (!ctx.cr0.eq) goto loc_831420E0;
	// li r26,1
	ctx.r26.s64 = 1;
	// stb r26,80(r31)
	PPC_STORE_U8(ctx.r31.u32 + 80, ctx.r26.u8);
loc_83142098:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x831420e0
	if (ctx.cr6.eq) goto loc_831420E0;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// lwz r6,0(r28)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r5,4(r28)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// lwz r11,28(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x831420C0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// b 0x831420e0
	goto loc_831420E0;
	// b 0x831420d4
	goto loc_831420D4;
loc_831420D4:
	// lbz r26,80(r31)
	ctx.r26.u64 = PPC_LOAD_U8(ctx.r31.u32 + 80);
	// lwz r29,188(r31)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r31.u32 + 188);
	// lwz r27,204(r31)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r31.u32 + 204);
loc_831420E0:
	// clrlwi. r11,r26,24
	ctx.r11.u64 = ctx.r26.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x83142110
	if (ctx.cr0.eq) goto loc_83142110;
	// lis r11,-32228
	ctx.r11.s64 = -2112094208;
	// lwz r8,180(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 180);
	// li r10,0
	ctx.r10.s64 = 0;
	// lwz r4,172(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 172);
	// addi r5,r11,-5832
	ctx.r5.s64 = ctx.r11.s64 + -5832;
	// li r9,0
	ctx.r9.s64 = 0;
	// mr r7,r29
	ctx.r7.u64 = ctx.r29.u64;
	// li r6,82
	ctx.r6.s64 = 82;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x83178838
	ctx.lr = 0x83142110;
	sub_83178838(ctx, base);
loc_83142110:
	// addi r1,r31,144
	ctx.r1.s64 = ctx.r31.s64 + 144;
	// b 0x833a01f0
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_831420D0"))) PPC_WEAK_FUNC(sub_831420D0);
PPC_FUNC_IMPL(__imp__sub_831420D0) {
	PPC_FUNC_PROLOGUE();
	// b 0x831420d4
	goto loc_831420D4;
loc_831420D4:
	// lbz r26,80(r31)
	ctx.r26.u64 = PPC_LOAD_U8(ctx.r31.u32 + 80);
	// lwz r29,188(r31)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r31.u32 + 188);
	// lwz r27,204(r31)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r31.u32 + 204);
	// clrlwi. r11,r26,24
	ctx.r11.u64 = ctx.r26.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x83142110
	if (ctx.cr0.eq) goto loc_83142110;
	// lis r11,-32228
	ctx.r11.s64 = -2112094208;
	// lwz r8,180(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 180);
	// li r10,0
	ctx.r10.s64 = 0;
	// lwz r4,172(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 172);
	// addi r5,r11,-5832
	ctx.r5.s64 = ctx.r11.s64 + -5832;
	// li r9,0
	ctx.r9.s64 = 0;
	// mr r7,r29
	ctx.r7.u64 = ctx.r29.u64;
	// li r6,82
	ctx.r6.s64 = 82;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x83178838
	ctx.lr = 0x83142110;
	sub_83178838(ctx, base);
loc_83142110:
	// addi r1,r31,144
	ctx.r1.s64 = ctx.r31.s64 + 144;
	// b 0x833a01f0
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83142118"))) PPC_WEAK_FUNC(sub_83142118);
PPC_FUNC_IMPL(__imp__sub_83142118) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lwz r25,17952(r26)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r26.u32 + 17952);
	// lwz r16,6548(r29)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r29.u32 + 6548);
	// addi r31,r12,-144
	ctx.r31.s64 = ctx.r12.s64 + -144;
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r5,84(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 84);
	// lwz r4,172(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 172);
	// lwz r3,204(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 204);
	// bl 0x831788b0
	ctx.lr = 0x83142140;
	sub_831788B0(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lis r3,-31980
	ctx.r3.s64 = -2095841280;
	// addi r3,r3,8400
	ctx.r3.s64 = ctx.r3.s64 + 8400;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// b 0x833a01f0
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83142120"))) PPC_WEAK_FUNC(sub_83142120);
PPC_FUNC_IMPL(__imp__sub_83142120) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// addi r31,r12,-144
	ctx.r31.s64 = ctx.r12.s64 + -144;
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r5,84(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 84);
	// lwz r4,172(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 172);
	// lwz r3,204(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 204);
	// bl 0x831788b0
	ctx.lr = 0x83142140;
	sub_831788B0(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lis r3,-31980
	ctx.r3.s64 = -2095841280;
	// addi r3,r3,8400
	ctx.r3.s64 = ctx.r3.s64 + 8400;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// b 0x833a01f0
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83142158"))) PPC_WEAK_FUNC(sub_83142158);
PPC_FUNC_IMPL(__imp__sub_83142158) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lwz r25,17952(r26)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r26.u32 + 17952);
	// lwz r16,6548(r29)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r29.u32 + 6548);
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
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x833a7198
	ctx.lr = 0x83142178;
	sub_833A7198(ctx, base);
	// lwz r25,17952(r26)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r26.u32 + 17952);
	// lwz r16,6548(r29)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r29.u32 + 6548);
	// addi r31,r12,-144
	ctx.r31.s64 = ctx.r12.s64 + -144;
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r11,1
	ctx.r11.s64 = 1;
	// lis r3,-31980
	ctx.r3.s64 = -2095841280;
	// stb r11,80(r31)
	PPC_STORE_U8(ctx.r31.u32 + 80, ctx.r11.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// addi r3,r3,8404
	ctx.r3.s64 = ctx.r3.s64 + 8404;
	// b 0x833a01f0
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83142160"))) PPC_WEAK_FUNC(sub_83142160);
PPC_FUNC_IMPL(__imp__sub_83142160) {
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
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x833a7198
	ctx.lr = 0x83142178;
	sub_833A7198(ctx, base);
}

__attribute__((alias("__imp__sub_83142180"))) PPC_WEAK_FUNC(sub_83142180);
PPC_FUNC_IMPL(__imp__sub_83142180) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// addi r31,r12,-144
	ctx.r31.s64 = ctx.r12.s64 + -144;
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r11,1
	ctx.r11.s64 = 1;
	// lis r3,-31980
	ctx.r3.s64 = -2095841280;
	// stb r11,80(r31)
	PPC_STORE_U8(ctx.r31.u32 + 80, ctx.r11.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// addi r3,r3,8404
	ctx.r3.s64 = ctx.r3.s64 + 8404;
	// b 0x833a01f0
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_831421A0"))) PPC_WEAK_FUNC(sub_831421A0);
PPC_FUNC_IMPL(__imp__sub_831421A0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x833a01ac
	ctx.lr = 0x831421A8;
	__savegprlr_29(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// bl 0x83178eb8
	ctx.lr = 0x831421C0;
	sub_83178EB8(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x831421d8
	if (ctx.cr0.eq) goto loc_831421D8;
	// lhz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r29.u32 + 0);
	// stw r30,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r30.u32);
	// sth r11,0(r3)
	PPC_STORE_U16(ctx.r3.u32 + 0, ctx.r11.u16);
	// b 0x83142230
	goto loc_83142230;
loc_831421D8:
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r4,12
	ctx.r4.s64 = 12;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x831421F0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x83142220
	if (ctx.cr0.eq) goto loc_83142220;
	// lwz r9,4(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// rlwinm r8,r10,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lhz r7,0(r29)
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r29.u32 + 0);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lwzx r9,r8,r9
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r9.u32);
	// sth r7,0(r3)
	PPC_STORE_U16(ctx.r3.u32 + 0, ctx.r7.u16);
	// stw r30,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r30.u32);
	// stw r9,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r9.u32);
	// b 0x83142224
	goto loc_83142224;
loc_83142220:
	// li r11,0
	ctx.r11.s64 = 0;
loc_83142224:
	// lwz r9,4(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r11,r10,r9
	PPC_STORE_U32(ctx.r10.u32 + ctx.r9.u32, ctx.r11.u32);
loc_83142230:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x833a01fc
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83142238"))) PPC_WEAK_FUNC(sub_83142238);
PPC_FUNC_IMPL(__imp__sub_83142238) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lwz r25,17952(r26)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r26.u32 + 17952);
	// lwz r16,6656(r29)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r29.u32 + 6656);
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// addi r31,r1,-112
	ctx.r31.s64 = ctx.r1.s64 + -112;
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addi r3,r31,80
	ctx.r3.s64 = ctx.r31.s64 + 80;
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// bl 0x831166c8
	ctx.lr = 0x83142264;
	sub_831166C8(ctx, base);
	// addi r3,r31,80
	ctx.r3.s64 = ctx.r31.s64 + 80;
	// bl 0x83117d10
	ctx.lr = 0x8314226C;
	sub_83117D10(ctx, base);
	// lis r11,-32228
	ctx.r11.s64 = -2112094208;
	// addi r3,r31,80
	ctx.r3.s64 = ctx.r31.s64 + 80;
	// addi r4,r11,17140
	ctx.r4.s64 = ctx.r11.s64 + 17140;
	// bl 0x830ec170
	ctx.lr = 0x8314227C;
	sub_830EC170(ctx, base);
	// lis r10,-31827
	ctx.r10.s64 = -2085814272;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lis r9,-32228
	ctx.r9.s64 = -2112094208;
	// addi r3,r31,80
	ctx.r3.s64 = ctx.r31.s64 + 80;
	// addi r4,r9,17008
	ctx.r4.s64 = ctx.r9.s64 + 17008;
	// stw r11,-4560(r10)
	PPC_STORE_U32(ctx.r10.u32 + -4560, ctx.r11.u32);
	// bl 0x830ec170
	ctx.lr = 0x83142298;
	sub_830EC170(ctx, base);
	// lis r10,-31827
	ctx.r10.s64 = -2085814272;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lis r9,-32228
	ctx.r9.s64 = -2112094208;
	// addi r3,r31,80
	ctx.r3.s64 = ctx.r31.s64 + 80;
	// addi r4,r9,17572
	ctx.r4.s64 = ctx.r9.s64 + 17572;
	// stw r11,-4556(r10)
	PPC_STORE_U32(ctx.r10.u32 + -4556, ctx.r11.u32);
	// bl 0x830ec170
	ctx.lr = 0x831422B4;
	sub_830EC170(ctx, base);
	// lis r11,-31827
	ctx.r11.s64 = -2085814272;
	// stw r3,-4552(r11)
	PPC_STORE_U32(ctx.r11.u32 + -4552, ctx.r3.u32);
	// addi r3,r31,80
	ctx.r3.s64 = ctx.r31.s64 + 80;
	// bl 0x83116b38
	ctx.lr = 0x831422C4;
	sub_83116B38(ctx, base);
	// addi r1,r31,112
	ctx.r1.s64 = ctx.r31.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83142240"))) PPC_WEAK_FUNC(sub_83142240);
PPC_FUNC_IMPL(__imp__sub_83142240) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// addi r31,r1,-112
	ctx.r31.s64 = ctx.r1.s64 + -112;
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addi r3,r31,80
	ctx.r3.s64 = ctx.r31.s64 + 80;
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// bl 0x831166c8
	ctx.lr = 0x83142264;
	sub_831166C8(ctx, base);
	// addi r3,r31,80
	ctx.r3.s64 = ctx.r31.s64 + 80;
	// bl 0x83117d10
	ctx.lr = 0x8314226C;
	sub_83117D10(ctx, base);
	// lis r11,-32228
	ctx.r11.s64 = -2112094208;
	// addi r3,r31,80
	ctx.r3.s64 = ctx.r31.s64 + 80;
	// addi r4,r11,17140
	ctx.r4.s64 = ctx.r11.s64 + 17140;
	// bl 0x830ec170
	ctx.lr = 0x8314227C;
	sub_830EC170(ctx, base);
	// lis r10,-31827
	ctx.r10.s64 = -2085814272;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lis r9,-32228
	ctx.r9.s64 = -2112094208;
	// addi r3,r31,80
	ctx.r3.s64 = ctx.r31.s64 + 80;
	// addi r4,r9,17008
	ctx.r4.s64 = ctx.r9.s64 + 17008;
	// stw r11,-4560(r10)
	PPC_STORE_U32(ctx.r10.u32 + -4560, ctx.r11.u32);
	// bl 0x830ec170
	ctx.lr = 0x83142298;
	sub_830EC170(ctx, base);
	// lis r10,-31827
	ctx.r10.s64 = -2085814272;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lis r9,-32228
	ctx.r9.s64 = -2112094208;
	// addi r3,r31,80
	ctx.r3.s64 = ctx.r31.s64 + 80;
	// addi r4,r9,17572
	ctx.r4.s64 = ctx.r9.s64 + 17572;
	// stw r11,-4556(r10)
	PPC_STORE_U32(ctx.r10.u32 + -4556, ctx.r11.u32);
	// bl 0x830ec170
	ctx.lr = 0x831422B4;
	sub_830EC170(ctx, base);
	// lis r11,-31827
	ctx.r11.s64 = -2085814272;
	// stw r3,-4552(r11)
	PPC_STORE_U32(ctx.r11.u32 + -4552, ctx.r3.u32);
	// addi r3,r31,80
	ctx.r3.s64 = ctx.r31.s64 + 80;
	// bl 0x83116b38
	ctx.lr = 0x831422C4;
	sub_83116B38(ctx, base);
	// addi r1,r31,112
	ctx.r1.s64 = ctx.r31.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831422D8"))) PPC_WEAK_FUNC(sub_831422D8);
PPC_FUNC_IMPL(__imp__sub_831422D8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// addi r31,r12,-112
	ctx.r31.s64 = ctx.r12.s64 + -112;
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r3,r31,80
	ctx.r3.s64 = ctx.r31.s64 + 80;
	// bl 0x83116b38
	ctx.lr = 0x831422F0;
	sub_83116B38(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83142300"))) PPC_WEAK_FUNC(sub_83142300);
PPC_FUNC_IMPL(__imp__sub_83142300) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lwz r25,17952(r26)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r26.u32 + 17952);
	// lwz r16,6728(r29)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r29.u32 + 6728);
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x833a0190
	ctx.lr = 0x83142310;
	__savegprlr_22(ctx, base);
	// addi r31,r1,-176
	ctx.r31.s64 = ctx.r1.s64 + -176;
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r3,16
	ctx.r3.s64 = 16;
	// bl 0x830dd340
	ctx.lr = 0x83142320;
	sub_830DD340(ctx, base);
	// stw r3,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r3.u32);
	// lis r23,-31827
	ctx.r23.s64 = -2085814272;
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x83142340
	if (ctx.cr0.eq) goto loc_83142340;
	// li r4,34
	ctx.r4.s64 = 34;
	// lwz r5,-5084(r23)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r23.u32 + -5084);
	// bl 0x83143888
	ctx.lr = 0x8314233C;
	sub_83143888(ctx, base);
	// b 0x83142344
	goto loc_83142344;
loc_83142340:
	// li r3,0
	ctx.r3.s64 = 0;
loc_83142344:
	// lis r22,-31827
	ctx.r22.s64 = -2085814272;
	// li r11,0
	ctx.r11.s64 = 0;
	// lis r10,-32228
	ctx.r10.s64 = -2112094208;
	// sth r11,80(r31)
	PPC_STORE_U16(ctx.r31.u32 + 80, ctx.r11.u16);
	// addi r5,r31,80
	ctx.r5.s64 = ctx.r31.s64 + 80;
	// addi r4,r10,15508
	ctx.r4.s64 = ctx.r10.s64 + 15508;
	// stw r3,-4568(r22)
	PPC_STORE_U32(ctx.r22.u32 + -4568, ctx.r3.u32);
	// bl 0x831421a0
	ctx.lr = 0x83142364;
	sub_831421A0(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// lis r10,-32228
	ctx.r10.s64 = -2112094208;
	// lwz r3,-4568(r22)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r22.u32 + -4568);
	// sth r11,80(r31)
	PPC_STORE_U16(ctx.r31.u32 + 80, ctx.r11.u16);
	// addi r5,r31,80
	ctx.r5.s64 = ctx.r31.s64 + 80;
	// addi r4,r10,15528
	ctx.r4.s64 = ctx.r10.s64 + 15528;
	// bl 0x831421a0
	ctx.lr = 0x83142380;
	sub_831421A0(ctx, base);
	// li r11,2
	ctx.r11.s64 = 2;
	// lis r10,-32228
	ctx.r10.s64 = -2112094208;
	// lwz r3,-4568(r22)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r22.u32 + -4568);
	// sth r11,80(r31)
	PPC_STORE_U16(ctx.r31.u32 + 80, ctx.r11.u16);
	// addi r5,r31,80
	ctx.r5.s64 = ctx.r31.s64 + 80;
	// addi r4,r10,15572
	ctx.r4.s64 = ctx.r10.s64 + 15572;
	// bl 0x831421a0
	ctx.lr = 0x8314239C;
	sub_831421A0(ctx, base);
	// li r11,3
	ctx.r11.s64 = 3;
	// lis r10,-32228
	ctx.r10.s64 = -2112094208;
	// lwz r3,-4568(r22)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r22.u32 + -4568);
	// sth r11,80(r31)
	PPC_STORE_U16(ctx.r31.u32 + 80, ctx.r11.u16);
	// addi r5,r31,80
	ctx.r5.s64 = ctx.r31.s64 + 80;
	// addi r4,r10,15628
	ctx.r4.s64 = ctx.r10.s64 + 15628;
	// bl 0x831421a0
	ctx.lr = 0x831423B8;
	sub_831421A0(ctx, base);
	// li r11,4
	ctx.r11.s64 = 4;
	// lis r10,-32228
	ctx.r10.s64 = -2112094208;
	// lwz r3,-4568(r22)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r22.u32 + -4568);
	// sth r11,80(r31)
	PPC_STORE_U16(ctx.r31.u32 + 80, ctx.r11.u16);
	// addi r5,r31,80
	ctx.r5.s64 = ctx.r31.s64 + 80;
	// addi r4,r10,15640
	ctx.r4.s64 = ctx.r10.s64 + 15640;
	// bl 0x831421a0
	ctx.lr = 0x831423D4;
	sub_831421A0(ctx, base);
	// li r11,5
	ctx.r11.s64 = 5;
	// lis r10,-32228
	ctx.r10.s64 = -2112094208;
	// lwz r3,-4568(r22)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r22.u32 + -4568);
	// sth r11,80(r31)
	PPC_STORE_U16(ctx.r31.u32 + 80, ctx.r11.u16);
	// addi r5,r31,80
	ctx.r5.s64 = ctx.r31.s64 + 80;
	// addi r4,r10,15668
	ctx.r4.s64 = ctx.r10.s64 + 15668;
	// bl 0x831421a0
	ctx.lr = 0x831423F0;
	sub_831421A0(ctx, base);
	// li r11,6
	ctx.r11.s64 = 6;
	// lis r10,-32228
	ctx.r10.s64 = -2112094208;
	// lwz r3,-4568(r22)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r22.u32 + -4568);
	// sth r11,80(r31)
	PPC_STORE_U16(ctx.r31.u32 + 80, ctx.r11.u16);
	// addi r5,r31,80
	ctx.r5.s64 = ctx.r31.s64 + 80;
	// addi r4,r10,15684
	ctx.r4.s64 = ctx.r10.s64 + 15684;
	// bl 0x831421a0
	ctx.lr = 0x8314240C;
	sub_831421A0(ctx, base);
	// li r11,7
	ctx.r11.s64 = 7;
	// lis r10,-32228
	ctx.r10.s64 = -2112094208;
	// lwz r3,-4568(r22)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r22.u32 + -4568);
	// sth r11,80(r31)
	PPC_STORE_U16(ctx.r31.u32 + 80, ctx.r11.u16);
	// addi r5,r31,80
	ctx.r5.s64 = ctx.r31.s64 + 80;
	// addi r4,r10,15760
	ctx.r4.s64 = ctx.r10.s64 + 15760;
	// bl 0x831421a0
	ctx.lr = 0x83142428;
	sub_831421A0(ctx, base);
	// li r11,8
	ctx.r11.s64 = 8;
	// lis r10,-32228
	ctx.r10.s64 = -2112094208;
	// lwz r3,-4568(r22)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r22.u32 + -4568);
	// sth r11,80(r31)
	PPC_STORE_U16(ctx.r31.u32 + 80, ctx.r11.u16);
	// addi r5,r31,80
	ctx.r5.s64 = ctx.r31.s64 + 80;
	// addi r4,r10,15772
	ctx.r4.s64 = ctx.r10.s64 + 15772;
	// bl 0x831421a0
	ctx.lr = 0x83142444;
	sub_831421A0(ctx, base);
	// li r11,9
	ctx.r11.s64 = 9;
	// lis r10,-32228
	ctx.r10.s64 = -2112094208;
	// lwz r3,-4568(r22)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r22.u32 + -4568);
	// sth r11,80(r31)
	PPC_STORE_U16(ctx.r31.u32 + 80, ctx.r11.u16);
	// addi r5,r31,80
	ctx.r5.s64 = ctx.r31.s64 + 80;
	// addi r4,r10,15800
	ctx.r4.s64 = ctx.r10.s64 + 15800;
	// bl 0x831421a0
	ctx.lr = 0x83142460;
	sub_831421A0(ctx, base);
	// li r11,10
	ctx.r11.s64 = 10;
	// lis r10,-32228
	ctx.r10.s64 = -2112094208;
	// lwz r3,-4568(r22)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r22.u32 + -4568);
	// sth r11,80(r31)
	PPC_STORE_U16(ctx.r31.u32 + 80, ctx.r11.u16);
	// addi r5,r31,80
	ctx.r5.s64 = ctx.r31.s64 + 80;
	// addi r4,r10,15812
	ctx.r4.s64 = ctx.r10.s64 + 15812;
	// bl 0x831421a0
	ctx.lr = 0x8314247C;
	sub_831421A0(ctx, base);
	// lwz r3,-4568(r22)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r22.u32 + -4568);
	// li r11,11
	ctx.r11.s64 = 11;
	// sth r11,80(r31)
	PPC_STORE_U16(ctx.r31.u32 + 80, ctx.r11.u16);
	// lis r10,-32228
	ctx.r10.s64 = -2112094208;
	// addi r5,r31,80
	ctx.r5.s64 = ctx.r31.s64 + 80;
	// addi r4,r10,15824
	ctx.r4.s64 = ctx.r10.s64 + 15824;
	// bl 0x831421a0
	ctx.lr = 0x83142498;
	sub_831421A0(ctx, base);
	// li r11,12
	ctx.r11.s64 = 12;
	// lis r10,-32228
	ctx.r10.s64 = -2112094208;
	// lwz r3,-4568(r22)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r22.u32 + -4568);
	// sth r11,80(r31)
	PPC_STORE_U16(ctx.r31.u32 + 80, ctx.r11.u16);
	// addi r5,r31,80
	ctx.r5.s64 = ctx.r31.s64 + 80;
	// addi r4,r10,15584
	ctx.r4.s64 = ctx.r10.s64 + 15584;
	// bl 0x831421a0
	ctx.lr = 0x831424B4;
	sub_831421A0(ctx, base);
	// li r11,13
	ctx.r11.s64 = 13;
	// lis r10,-32228
	ctx.r10.s64 = -2112094208;
	// lwz r3,-4568(r22)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r22.u32 + -4568);
	// sth r11,80(r31)
	PPC_STORE_U16(ctx.r31.u32 + 80, ctx.r11.u16);
	// addi r5,r31,80
	ctx.r5.s64 = ctx.r31.s64 + 80;
	// addi r4,r10,15832
	ctx.r4.s64 = ctx.r10.s64 + 15832;
	// bl 0x831421a0
	ctx.lr = 0x831424D0;
	sub_831421A0(ctx, base);
	// li r11,14
	ctx.r11.s64 = 14;
	// lis r10,-32228
	ctx.r10.s64 = -2112094208;
	// lwz r3,-4568(r22)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r22.u32 + -4568);
	// sth r11,80(r31)
	PPC_STORE_U16(ctx.r31.u32 + 80, ctx.r11.u16);
	// addi r5,r31,80
	ctx.r5.s64 = ctx.r31.s64 + 80;
	// addi r4,r10,15604
	ctx.r4.s64 = ctx.r10.s64 + 15604;
	// bl 0x831421a0
	ctx.lr = 0x831424EC;
	sub_831421A0(ctx, base);
	// li r11,15
	ctx.r11.s64 = 15;
	// lis r10,-32228
	ctx.r10.s64 = -2112094208;
	// lwz r3,-4568(r22)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r22.u32 + -4568);
	// sth r11,80(r31)
	PPC_STORE_U16(ctx.r31.u32 + 80, ctx.r11.u16);
	// addi r5,r31,80
	ctx.r5.s64 = ctx.r31.s64 + 80;
	// addi r4,r10,15852
	ctx.r4.s64 = ctx.r10.s64 + 15852;
	// bl 0x831421a0
	ctx.lr = 0x83142508;
	sub_831421A0(ctx, base);
	// li r11,16
	ctx.r11.s64 = 16;
	// lis r10,-32228
	ctx.r10.s64 = -2112094208;
	// lwz r3,-4568(r22)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r22.u32 + -4568);
	// sth r11,80(r31)
	PPC_STORE_U16(ctx.r31.u32 + 80, ctx.r11.u16);
	// addi r5,r31,80
	ctx.r5.s64 = ctx.r31.s64 + 80;
	// addi r4,r10,16128
	ctx.r4.s64 = ctx.r10.s64 + 16128;
	// bl 0x831421a0
	ctx.lr = 0x83142524;
	sub_831421A0(ctx, base);
	// li r11,17
	ctx.r11.s64 = 17;
	// lis r10,-32228
	ctx.r10.s64 = -2112094208;
	// lwz r3,-4568(r22)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r22.u32 + -4568);
	// sth r11,80(r31)
	PPC_STORE_U16(ctx.r31.u32 + 80, ctx.r11.u16);
	// addi r5,r31,80
	ctx.r5.s64 = ctx.r31.s64 + 80;
	// addi r4,r10,15872
	ctx.r4.s64 = ctx.r10.s64 + 15872;
	// bl 0x831421a0
	ctx.lr = 0x83142540;
	sub_831421A0(ctx, base);
	// li r24,18
	ctx.r24.s64 = 18;
	// lis r11,-32228
	ctx.r11.s64 = -2112094208;
	// lwz r3,-4568(r22)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r22.u32 + -4568);
	// sth r24,80(r31)
	PPC_STORE_U16(ctx.r31.u32 + 80, ctx.r24.u16);
	// addi r5,r31,80
	ctx.r5.s64 = ctx.r31.s64 + 80;
	// addi r4,r11,15884
	ctx.r4.s64 = ctx.r11.s64 + 15884;
	// bl 0x831421a0
	ctx.lr = 0x8314255C;
	sub_831421A0(ctx, base);
	// li r11,19
	ctx.r11.s64 = 19;
	// lis r10,-32228
	ctx.r10.s64 = -2112094208;
	// lwz r3,-4568(r22)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r22.u32 + -4568);
	// sth r11,80(r31)
	PPC_STORE_U16(ctx.r31.u32 + 80, ctx.r11.u16);
	// addi r5,r31,80
	ctx.r5.s64 = ctx.r31.s64 + 80;
	// addi r4,r10,15912
	ctx.r4.s64 = ctx.r10.s64 + 15912;
	// bl 0x831421a0
	ctx.lr = 0x83142578;
	sub_831421A0(ctx, base);
	// li r11,20
	ctx.r11.s64 = 20;
	// lis r10,-32228
	ctx.r10.s64 = -2112094208;
	// lwz r3,-4568(r22)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r22.u32 + -4568);
	// sth r11,80(r31)
	PPC_STORE_U16(ctx.r31.u32 + 80, ctx.r11.u16);
	// addi r5,r31,80
	ctx.r5.s64 = ctx.r31.s64 + 80;
	// addi r4,r10,15932
	ctx.r4.s64 = ctx.r10.s64 + 15932;
	// bl 0x831421a0
	ctx.lr = 0x83142594;
	sub_831421A0(ctx, base);
	// li r25,21
	ctx.r25.s64 = 21;
	// lis r11,-32228
	ctx.r11.s64 = -2112094208;
	// lwz r3,-4568(r22)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r22.u32 + -4568);
	// sth r25,80(r31)
	PPC_STORE_U16(ctx.r31.u32 + 80, ctx.r25.u16);
	// addi r5,r31,80
	ctx.r5.s64 = ctx.r31.s64 + 80;
	// addi r4,r11,16048
	ctx.r4.s64 = ctx.r11.s64 + 16048;
	// bl 0x831421a0
	ctx.lr = 0x831425B0;
	sub_831421A0(ctx, base);
	// li r11,22
	ctx.r11.s64 = 22;
	// lis r10,-32228
	ctx.r10.s64 = -2112094208;
	// lwz r3,-4568(r22)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r22.u32 + -4568);
	// sth r11,80(r31)
	PPC_STORE_U16(ctx.r31.u32 + 80, ctx.r11.u16);
	// addi r5,r31,80
	ctx.r5.s64 = ctx.r31.s64 + 80;
	// addi r4,r10,15964
	ctx.r4.s64 = ctx.r10.s64 + 15964;
	// bl 0x831421a0
	ctx.lr = 0x831425CC;
	sub_831421A0(ctx, base);
	// li r11,23
	ctx.r11.s64 = 23;
	// lis r10,-32228
	ctx.r10.s64 = -2112094208;
	// lwz r3,-4568(r22)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r22.u32 + -4568);
	// sth r11,80(r31)
	PPC_STORE_U16(ctx.r31.u32 + 80, ctx.r11.u16);
	// addi r5,r31,80
	ctx.r5.s64 = ctx.r31.s64 + 80;
	// addi r4,r10,15972
	ctx.r4.s64 = ctx.r10.s64 + 15972;
	// bl 0x831421a0
	ctx.lr = 0x831425E8;
	sub_831421A0(ctx, base);
	// li r11,24
	ctx.r11.s64 = 24;
	// lis r10,-32228
	ctx.r10.s64 = -2112094208;
	// lwz r3,-4568(r22)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r22.u32 + -4568);
	// sth r11,80(r31)
	PPC_STORE_U16(ctx.r31.u32 + 80, ctx.r11.u16);
	// addi r5,r31,80
	ctx.r5.s64 = ctx.r31.s64 + 80;
	// addi r4,r10,15984
	ctx.r4.s64 = ctx.r10.s64 + 15984;
	// bl 0x831421a0
	ctx.lr = 0x83142604;
	sub_831421A0(ctx, base);
	// li r11,25
	ctx.r11.s64 = 25;
	// lis r10,-32228
	ctx.r10.s64 = -2112094208;
	// lwz r3,-4568(r22)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r22.u32 + -4568);
	// sth r11,80(r31)
	PPC_STORE_U16(ctx.r31.u32 + 80, ctx.r11.u16);
	// addi r5,r31,80
	ctx.r5.s64 = ctx.r31.s64 + 80;
	// addi r4,r10,16016
	ctx.r4.s64 = ctx.r10.s64 + 16016;
	// bl 0x831421a0
	ctx.lr = 0x83142620;
	sub_831421A0(ctx, base);
	// li r11,26
	ctx.r11.s64 = 26;
	// lis r10,-32228
	ctx.r10.s64 = -2112094208;
	// lwz r3,-4568(r22)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r22.u32 + -4568);
	// sth r11,80(r31)
	PPC_STORE_U16(ctx.r31.u32 + 80, ctx.r11.u16);
	// addi r5,r31,80
	ctx.r5.s64 = ctx.r31.s64 + 80;
	// addi r4,r10,15724
	ctx.r4.s64 = ctx.r10.s64 + 15724;
	// bl 0x831421a0
	ctx.lr = 0x8314263C;
	sub_831421A0(ctx, base);
	// li r11,27
	ctx.r11.s64 = 27;
	// lis r10,-32228
	ctx.r10.s64 = -2112094208;
	// lwz r3,-4568(r22)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r22.u32 + -4568);
	// sth r11,80(r31)
	PPC_STORE_U16(ctx.r31.u32 + 80, ctx.r11.u16);
	// addi r5,r31,80
	ctx.r5.s64 = ctx.r31.s64 + 80;
	// addi r4,r10,16032
	ctx.r4.s64 = ctx.r10.s64 + 16032;
	// bl 0x831421a0
	ctx.lr = 0x83142658;
	sub_831421A0(ctx, base);
	// li r26,28
	ctx.r26.s64 = 28;
	// lis r11,-32228
	ctx.r11.s64 = -2112094208;
	// lwz r3,-4568(r22)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r22.u32 + -4568);
	// sth r26,80(r31)
	PPC_STORE_U16(ctx.r31.u32 + 80, ctx.r26.u16);
	// addi r5,r31,80
	ctx.r5.s64 = ctx.r31.s64 + 80;
	// addi r4,r11,16064
	ctx.r4.s64 = ctx.r11.s64 + 16064;
	// bl 0x831421a0
	ctx.lr = 0x83142674;
	sub_831421A0(ctx, base);
	// li r11,29
	ctx.r11.s64 = 29;
	// lis r10,-32228
	ctx.r10.s64 = -2112094208;
	// lwz r3,-4568(r22)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r22.u32 + -4568);
	// sth r11,80(r31)
	PPC_STORE_U16(ctx.r31.u32 + 80, ctx.r11.u16);
	// addi r5,r31,80
	ctx.r5.s64 = ctx.r31.s64 + 80;
	// addi r4,r10,16096
	ctx.r4.s64 = ctx.r10.s64 + 16096;
	// bl 0x831421a0
	ctx.lr = 0x83142690;
	sub_831421A0(ctx, base);
	// li r27,30
	ctx.r27.s64 = 30;
	// lis r11,-32228
	ctx.r11.s64 = -2112094208;
	// lwz r3,-4568(r22)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r22.u32 + -4568);
	// sth r27,80(r31)
	PPC_STORE_U16(ctx.r31.u32 + 80, ctx.r27.u16);
	// addi r5,r31,80
	ctx.r5.s64 = ctx.r31.s64 + 80;
	// addi r4,r11,16108
	ctx.r4.s64 = ctx.r11.s64 + 16108;
	// bl 0x831421a0
	ctx.lr = 0x831426AC;
	sub_831421A0(ctx, base);
	// li r28,31
	ctx.r28.s64 = 31;
	// lis r11,-32228
	ctx.r11.s64 = -2112094208;
	// lwz r3,-4568(r22)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r22.u32 + -4568);
	// sth r28,80(r31)
	PPC_STORE_U16(ctx.r31.u32 + 80, ctx.r28.u16);
	// addi r5,r31,80
	ctx.r5.s64 = ctx.r31.s64 + 80;
	// addi r4,r11,16116
	ctx.r4.s64 = ctx.r11.s64 + 16116;
	// bl 0x831421a0
	ctx.lr = 0x831426C8;
	sub_831421A0(ctx, base);
	// li r29,32
	ctx.r29.s64 = 32;
	// lis r11,-32228
	ctx.r11.s64 = -2112094208;
	// lwz r3,-4568(r22)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r22.u32 + -4568);
	// sth r29,80(r31)
	PPC_STORE_U16(ctx.r31.u32 + 80, ctx.r29.u16);
	// addi r5,r31,80
	ctx.r5.s64 = ctx.r31.s64 + 80;
	// addi r4,r11,16140
	ctx.r4.s64 = ctx.r11.s64 + 16140;
	// bl 0x831421a0
	ctx.lr = 0x831426E4;
	sub_831421A0(ctx, base);
	// li r30,33
	ctx.r30.s64 = 33;
	// lis r11,-32228
	ctx.r11.s64 = -2112094208;
	// lwz r3,-4568(r22)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r22.u32 + -4568);
	// sth r30,80(r31)
	PPC_STORE_U16(ctx.r31.u32 + 80, ctx.r30.u16);
	// addi r5,r31,80
	ctx.r5.s64 = ctx.r31.s64 + 80;
	// addi r4,r11,16156
	ctx.r4.s64 = ctx.r11.s64 + 16156;
	// bl 0x831421a0
	ctx.lr = 0x83142700;
	sub_831421A0(ctx, base);
	// li r3,16
	ctx.r3.s64 = 16;
	// bl 0x830dd340
	ctx.lr = 0x83142708;
	sub_830DD340(ctx, base);
	// stw r3,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r3.u32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x83142724
	if (ctx.cr0.eq) goto loc_83142724;
	// li r4,13
	ctx.r4.s64 = 13;
	// lwz r5,-5084(r23)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r23.u32 + -5084);
	// bl 0x83143888
	ctx.lr = 0x83142720;
	sub_83143888(ctx, base);
	// b 0x83142728
	goto loc_83142728;
loc_83142724:
	// li r3,0
	ctx.r3.s64 = 0;
loc_83142728:
	// lis r23,-31827
	ctx.r23.s64 = -2085814272;
	// sth r30,80(r31)
	PPC_STORE_U16(ctx.r31.u32 + 80, ctx.r30.u16);
	// lis r11,-32228
	ctx.r11.s64 = -2112094208;
	// addi r5,r31,80
	ctx.r5.s64 = ctx.r31.s64 + 80;
	// addi r4,r11,15100
	ctx.r4.s64 = ctx.r11.s64 + 15100;
	// stw r3,-4564(r23)
	PPC_STORE_U32(ctx.r23.u32 + -4564, ctx.r3.u32);
	// bl 0x831421a0
	ctx.lr = 0x83142744;
	sub_831421A0(ctx, base);
	// li r11,34
	ctx.r11.s64 = 34;
	// lis r10,-32228
	ctx.r10.s64 = -2112094208;
	// lwz r3,-4564(r23)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r23.u32 + -4564);
	// sth r11,80(r31)
	PPC_STORE_U16(ctx.r31.u32 + 80, ctx.r11.u16);
	// addi r5,r31,80
	ctx.r5.s64 = ctx.r31.s64 + 80;
	// addi r4,r10,15128
	ctx.r4.s64 = ctx.r10.s64 + 15128;
	// bl 0x831421a0
	ctx.lr = 0x83142760;
	sub_831421A0(ctx, base);
	// sth r27,80(r31)
	PPC_STORE_U16(ctx.r31.u32 + 80, ctx.r27.u16);
	// lis r11,-32228
	ctx.r11.s64 = -2112094208;
	// lwz r3,-4564(r23)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r23.u32 + -4564);
	// addi r5,r31,80
	ctx.r5.s64 = ctx.r31.s64 + 80;
	// addi r4,r11,15024
	ctx.r4.s64 = ctx.r11.s64 + 15024;
	// bl 0x831421a0
	ctx.lr = 0x83142778;
	sub_831421A0(ctx, base);
	// sth r28,80(r31)
	PPC_STORE_U16(ctx.r31.u32 + 80, ctx.r28.u16);
	// lis r11,-32228
	ctx.r11.s64 = -2112094208;
	// lwz r3,-4564(r23)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r23.u32 + -4564);
	// addi r5,r31,80
	ctx.r5.s64 = ctx.r31.s64 + 80;
	// addi r4,r11,15052
	ctx.r4.s64 = ctx.r11.s64 + 15052;
	// bl 0x831421a0
	ctx.lr = 0x83142790;
	sub_831421A0(ctx, base);
	// li r11,46
	ctx.r11.s64 = 46;
	// lis r10,-32228
	ctx.r10.s64 = -2112094208;
	// lwz r3,-4564(r23)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r23.u32 + -4564);
	// sth r11,80(r31)
	PPC_STORE_U16(ctx.r31.u32 + 80, ctx.r11.u16);
	// addi r5,r31,80
	ctx.r5.s64 = ctx.r31.s64 + 80;
	// addi r4,r10,15228
	ctx.r4.s64 = ctx.r10.s64 + 15228;
	// bl 0x831421a0
	ctx.lr = 0x831427AC;
	sub_831421A0(ctx, base);
	// sth r25,80(r31)
	PPC_STORE_U16(ctx.r31.u32 + 80, ctx.r25.u16);
	// lis r11,-32228
	ctx.r11.s64 = -2112094208;
	// lwz r3,-4564(r23)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r23.u32 + -4564);
	// addi r5,r31,80
	ctx.r5.s64 = ctx.r31.s64 + 80;
	// addi r4,r11,15252
	ctx.r4.s64 = ctx.r11.s64 + 15252;
	// bl 0x831421a0
	ctx.lr = 0x831427C4;
	sub_831421A0(ctx, base);
	// sth r26,80(r31)
	PPC_STORE_U16(ctx.r31.u32 + 80, ctx.r26.u16);
	// lis r11,-32228
	ctx.r11.s64 = -2112094208;
	// lwz r3,-4564(r23)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r23.u32 + -4564);
	// addi r5,r31,80
	ctx.r5.s64 = ctx.r31.s64 + 80;
	// addi r4,r11,15008
	ctx.r4.s64 = ctx.r11.s64 + 15008;
	// bl 0x831421a0
	ctx.lr = 0x831427DC;
	sub_831421A0(ctx, base);
	// li r11,35
	ctx.r11.s64 = 35;
	// lis r10,-32228
	ctx.r10.s64 = -2112094208;
	// lwz r3,-4564(r23)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r23.u32 + -4564);
	// sth r11,80(r31)
	PPC_STORE_U16(ctx.r31.u32 + 80, ctx.r11.u16);
	// addi r5,r31,80
	ctx.r5.s64 = ctx.r31.s64 + 80;
	// addi r4,r10,15156
	ctx.r4.s64 = ctx.r10.s64 + 15156;
	// bl 0x831421a0
	ctx.lr = 0x831427F8;
	sub_831421A0(ctx, base);
	// sth r29,80(r31)
	PPC_STORE_U16(ctx.r31.u32 + 80, ctx.r29.u16);
	// lis r11,-32228
	ctx.r11.s64 = -2112094208;
	// lwz r3,-4564(r23)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r23.u32 + -4564);
	// addi r5,r31,80
	ctx.r5.s64 = ctx.r31.s64 + 80;
	// addi r4,r11,15080
	ctx.r4.s64 = ctx.r11.s64 + 15080;
	// bl 0x831421a0
	ctx.lr = 0x83142810;
	sub_831421A0(ctx, base);
	// sth r24,80(r31)
	PPC_STORE_U16(ctx.r31.u32 + 80, ctx.r24.u16);
	// lis r11,-32228
	ctx.r11.s64 = -2112094208;
	// lwz r3,-4564(r23)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r23.u32 + -4564);
	// addi r5,r31,80
	ctx.r5.s64 = ctx.r31.s64 + 80;
	// addi r4,r11,14860
	ctx.r4.s64 = ctx.r11.s64 + 14860;
	// bl 0x831421a0
	ctx.lr = 0x83142828;
	sub_831421A0(ctx, base);
	// li r11,49
	ctx.r11.s64 = 49;
	// lis r10,-32228
	ctx.r10.s64 = -2112094208;
	// lwz r3,-4564(r23)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r23.u32 + -4564);
	// sth r11,80(r31)
	PPC_STORE_U16(ctx.r31.u32 + 80, ctx.r11.u16);
	// addi r5,r31,80
	ctx.r5.s64 = ctx.r31.s64 + 80;
	// addi r4,r10,14896
	ctx.r4.s64 = ctx.r10.s64 + 14896;
	// bl 0x831421a0
	ctx.lr = 0x83142844;
	sub_831421A0(ctx, base);
	// li r11,37
	ctx.r11.s64 = 37;
	// lis r10,-32228
	ctx.r10.s64 = -2112094208;
	// lwz r3,-4564(r23)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r23.u32 + -4564);
	// sth r11,80(r31)
	PPC_STORE_U16(ctx.r31.u32 + 80, ctx.r11.u16);
	// addi r5,r31,80
	ctx.r5.s64 = ctx.r31.s64 + 80;
	// addi r4,r10,15196
	ctx.r4.s64 = ctx.r10.s64 + 15196;
	// bl 0x831421a0
	ctx.lr = 0x83142860;
	sub_831421A0(ctx, base);
	// addi r1,r31,176
	ctx.r1.s64 = ctx.r31.s64 + 176;
	// b 0x833a01e0
	__restgprlr_22(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83142308"))) PPC_WEAK_FUNC(sub_83142308);
PPC_FUNC_IMPL(__imp__sub_83142308) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x833a0190
	ctx.lr = 0x83142310;
	__savegprlr_22(ctx, base);
	// addi r31,r1,-176
	ctx.r31.s64 = ctx.r1.s64 + -176;
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r3,16
	ctx.r3.s64 = 16;
	// bl 0x830dd340
	ctx.lr = 0x83142320;
	sub_830DD340(ctx, base);
	// stw r3,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r3.u32);
	// lis r23,-31827
	ctx.r23.s64 = -2085814272;
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x83142340
	if (ctx.cr0.eq) goto loc_83142340;
	// li r4,34
	ctx.r4.s64 = 34;
	// lwz r5,-5084(r23)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r23.u32 + -5084);
	// bl 0x83143888
	ctx.lr = 0x8314233C;
	sub_83143888(ctx, base);
	// b 0x83142344
	goto loc_83142344;
loc_83142340:
	// li r3,0
	ctx.r3.s64 = 0;
loc_83142344:
	// lis r22,-31827
	ctx.r22.s64 = -2085814272;
	// li r11,0
	ctx.r11.s64 = 0;
	// lis r10,-32228
	ctx.r10.s64 = -2112094208;
	// sth r11,80(r31)
	PPC_STORE_U16(ctx.r31.u32 + 80, ctx.r11.u16);
	// addi r5,r31,80
	ctx.r5.s64 = ctx.r31.s64 + 80;
	// addi r4,r10,15508
	ctx.r4.s64 = ctx.r10.s64 + 15508;
	// stw r3,-4568(r22)
	PPC_STORE_U32(ctx.r22.u32 + -4568, ctx.r3.u32);
	// bl 0x831421a0
	ctx.lr = 0x83142364;
	sub_831421A0(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// lis r10,-32228
	ctx.r10.s64 = -2112094208;
	// lwz r3,-4568(r22)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r22.u32 + -4568);
	// sth r11,80(r31)
	PPC_STORE_U16(ctx.r31.u32 + 80, ctx.r11.u16);
	// addi r5,r31,80
	ctx.r5.s64 = ctx.r31.s64 + 80;
	// addi r4,r10,15528
	ctx.r4.s64 = ctx.r10.s64 + 15528;
	// bl 0x831421a0
	ctx.lr = 0x83142380;
	sub_831421A0(ctx, base);
	// li r11,2
	ctx.r11.s64 = 2;
	// lis r10,-32228
	ctx.r10.s64 = -2112094208;
	// lwz r3,-4568(r22)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r22.u32 + -4568);
	// sth r11,80(r31)
	PPC_STORE_U16(ctx.r31.u32 + 80, ctx.r11.u16);
	// addi r5,r31,80
	ctx.r5.s64 = ctx.r31.s64 + 80;
	// addi r4,r10,15572
	ctx.r4.s64 = ctx.r10.s64 + 15572;
	// bl 0x831421a0
	ctx.lr = 0x8314239C;
	sub_831421A0(ctx, base);
	// li r11,3
	ctx.r11.s64 = 3;
	// lis r10,-32228
	ctx.r10.s64 = -2112094208;
	// lwz r3,-4568(r22)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r22.u32 + -4568);
	// sth r11,80(r31)
	PPC_STORE_U16(ctx.r31.u32 + 80, ctx.r11.u16);
	// addi r5,r31,80
	ctx.r5.s64 = ctx.r31.s64 + 80;
	// addi r4,r10,15628
	ctx.r4.s64 = ctx.r10.s64 + 15628;
	// bl 0x831421a0
	ctx.lr = 0x831423B8;
	sub_831421A0(ctx, base);
	// li r11,4
	ctx.r11.s64 = 4;
	// lis r10,-32228
	ctx.r10.s64 = -2112094208;
	// lwz r3,-4568(r22)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r22.u32 + -4568);
	// sth r11,80(r31)
	PPC_STORE_U16(ctx.r31.u32 + 80, ctx.r11.u16);
	// addi r5,r31,80
	ctx.r5.s64 = ctx.r31.s64 + 80;
	// addi r4,r10,15640
	ctx.r4.s64 = ctx.r10.s64 + 15640;
	// bl 0x831421a0
	ctx.lr = 0x831423D4;
	sub_831421A0(ctx, base);
	// li r11,5
	ctx.r11.s64 = 5;
	// lis r10,-32228
	ctx.r10.s64 = -2112094208;
	// lwz r3,-4568(r22)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r22.u32 + -4568);
	// sth r11,80(r31)
	PPC_STORE_U16(ctx.r31.u32 + 80, ctx.r11.u16);
	// addi r5,r31,80
	ctx.r5.s64 = ctx.r31.s64 + 80;
	// addi r4,r10,15668
	ctx.r4.s64 = ctx.r10.s64 + 15668;
	// bl 0x831421a0
	ctx.lr = 0x831423F0;
	sub_831421A0(ctx, base);
	// li r11,6
	ctx.r11.s64 = 6;
	// lis r10,-32228
	ctx.r10.s64 = -2112094208;
	// lwz r3,-4568(r22)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r22.u32 + -4568);
	// sth r11,80(r31)
	PPC_STORE_U16(ctx.r31.u32 + 80, ctx.r11.u16);
	// addi r5,r31,80
	ctx.r5.s64 = ctx.r31.s64 + 80;
	// addi r4,r10,15684
	ctx.r4.s64 = ctx.r10.s64 + 15684;
	// bl 0x831421a0
	ctx.lr = 0x8314240C;
	sub_831421A0(ctx, base);
	// li r11,7
	ctx.r11.s64 = 7;
	// lis r10,-32228
	ctx.r10.s64 = -2112094208;
	// lwz r3,-4568(r22)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r22.u32 + -4568);
	// sth r11,80(r31)
	PPC_STORE_U16(ctx.r31.u32 + 80, ctx.r11.u16);
	// addi r5,r31,80
	ctx.r5.s64 = ctx.r31.s64 + 80;
	// addi r4,r10,15760
	ctx.r4.s64 = ctx.r10.s64 + 15760;
	// bl 0x831421a0
	ctx.lr = 0x83142428;
	sub_831421A0(ctx, base);
	// li r11,8
	ctx.r11.s64 = 8;
	// lis r10,-32228
	ctx.r10.s64 = -2112094208;
	// lwz r3,-4568(r22)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r22.u32 + -4568);
	// sth r11,80(r31)
	PPC_STORE_U16(ctx.r31.u32 + 80, ctx.r11.u16);
	// addi r5,r31,80
	ctx.r5.s64 = ctx.r31.s64 + 80;
	// addi r4,r10,15772
	ctx.r4.s64 = ctx.r10.s64 + 15772;
	// bl 0x831421a0
	ctx.lr = 0x83142444;
	sub_831421A0(ctx, base);
	// li r11,9
	ctx.r11.s64 = 9;
	// lis r10,-32228
	ctx.r10.s64 = -2112094208;
	// lwz r3,-4568(r22)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r22.u32 + -4568);
	// sth r11,80(r31)
	PPC_STORE_U16(ctx.r31.u32 + 80, ctx.r11.u16);
	// addi r5,r31,80
	ctx.r5.s64 = ctx.r31.s64 + 80;
	// addi r4,r10,15800
	ctx.r4.s64 = ctx.r10.s64 + 15800;
	// bl 0x831421a0
	ctx.lr = 0x83142460;
	sub_831421A0(ctx, base);
	// li r11,10
	ctx.r11.s64 = 10;
	// lis r10,-32228
	ctx.r10.s64 = -2112094208;
	// lwz r3,-4568(r22)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r22.u32 + -4568);
	// sth r11,80(r31)
	PPC_STORE_U16(ctx.r31.u32 + 80, ctx.r11.u16);
	// addi r5,r31,80
	ctx.r5.s64 = ctx.r31.s64 + 80;
	// addi r4,r10,15812
	ctx.r4.s64 = ctx.r10.s64 + 15812;
	// bl 0x831421a0
	ctx.lr = 0x8314247C;
	sub_831421A0(ctx, base);
	// lwz r3,-4568(r22)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r22.u32 + -4568);
	// li r11,11
	ctx.r11.s64 = 11;
	// sth r11,80(r31)
	PPC_STORE_U16(ctx.r31.u32 + 80, ctx.r11.u16);
	// lis r10,-32228
	ctx.r10.s64 = -2112094208;
	// addi r5,r31,80
	ctx.r5.s64 = ctx.r31.s64 + 80;
	// addi r4,r10,15824
	ctx.r4.s64 = ctx.r10.s64 + 15824;
	// bl 0x831421a0
	ctx.lr = 0x83142498;
	sub_831421A0(ctx, base);
	// li r11,12
	ctx.r11.s64 = 12;
	// lis r10,-32228
	ctx.r10.s64 = -2112094208;
	// lwz r3,-4568(r22)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r22.u32 + -4568);
	// sth r11,80(r31)
	PPC_STORE_U16(ctx.r31.u32 + 80, ctx.r11.u16);
	// addi r5,r31,80
	ctx.r5.s64 = ctx.r31.s64 + 80;
	// addi r4,r10,15584
	ctx.r4.s64 = ctx.r10.s64 + 15584;
	// bl 0x831421a0
	ctx.lr = 0x831424B4;
	sub_831421A0(ctx, base);
	// li r11,13
	ctx.r11.s64 = 13;
	// lis r10,-32228
	ctx.r10.s64 = -2112094208;
	// lwz r3,-4568(r22)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r22.u32 + -4568);
	// sth r11,80(r31)
	PPC_STORE_U16(ctx.r31.u32 + 80, ctx.r11.u16);
	// addi r5,r31,80
	ctx.r5.s64 = ctx.r31.s64 + 80;
	// addi r4,r10,15832
	ctx.r4.s64 = ctx.r10.s64 + 15832;
	// bl 0x831421a0
	ctx.lr = 0x831424D0;
	sub_831421A0(ctx, base);
	// li r11,14
	ctx.r11.s64 = 14;
	// lis r10,-32228
	ctx.r10.s64 = -2112094208;
	// lwz r3,-4568(r22)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r22.u32 + -4568);
	// sth r11,80(r31)
	PPC_STORE_U16(ctx.r31.u32 + 80, ctx.r11.u16);
	// addi r5,r31,80
	ctx.r5.s64 = ctx.r31.s64 + 80;
	// addi r4,r10,15604
	ctx.r4.s64 = ctx.r10.s64 + 15604;
	// bl 0x831421a0
	ctx.lr = 0x831424EC;
	sub_831421A0(ctx, base);
	// li r11,15
	ctx.r11.s64 = 15;
	// lis r10,-32228
	ctx.r10.s64 = -2112094208;
	// lwz r3,-4568(r22)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r22.u32 + -4568);
	// sth r11,80(r31)
	PPC_STORE_U16(ctx.r31.u32 + 80, ctx.r11.u16);
	// addi r5,r31,80
	ctx.r5.s64 = ctx.r31.s64 + 80;
	// addi r4,r10,15852
	ctx.r4.s64 = ctx.r10.s64 + 15852;
	// bl 0x831421a0
	ctx.lr = 0x83142508;
	sub_831421A0(ctx, base);
	// li r11,16
	ctx.r11.s64 = 16;
	// lis r10,-32228
	ctx.r10.s64 = -2112094208;
	// lwz r3,-4568(r22)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r22.u32 + -4568);
	// sth r11,80(r31)
	PPC_STORE_U16(ctx.r31.u32 + 80, ctx.r11.u16);
	// addi r5,r31,80
	ctx.r5.s64 = ctx.r31.s64 + 80;
	// addi r4,r10,16128
	ctx.r4.s64 = ctx.r10.s64 + 16128;
	// bl 0x831421a0
	ctx.lr = 0x83142524;
	sub_831421A0(ctx, base);
	// li r11,17
	ctx.r11.s64 = 17;
	// lis r10,-32228
	ctx.r10.s64 = -2112094208;
	// lwz r3,-4568(r22)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r22.u32 + -4568);
	// sth r11,80(r31)
	PPC_STORE_U16(ctx.r31.u32 + 80, ctx.r11.u16);
	// addi r5,r31,80
	ctx.r5.s64 = ctx.r31.s64 + 80;
	// addi r4,r10,15872
	ctx.r4.s64 = ctx.r10.s64 + 15872;
	// bl 0x831421a0
	ctx.lr = 0x83142540;
	sub_831421A0(ctx, base);
	// li r24,18
	ctx.r24.s64 = 18;
	// lis r11,-32228
	ctx.r11.s64 = -2112094208;
	// lwz r3,-4568(r22)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r22.u32 + -4568);
	// sth r24,80(r31)
	PPC_STORE_U16(ctx.r31.u32 + 80, ctx.r24.u16);
	// addi r5,r31,80
	ctx.r5.s64 = ctx.r31.s64 + 80;
	// addi r4,r11,15884
	ctx.r4.s64 = ctx.r11.s64 + 15884;
	// bl 0x831421a0
	ctx.lr = 0x8314255C;
	sub_831421A0(ctx, base);
	// li r11,19
	ctx.r11.s64 = 19;
	// lis r10,-32228
	ctx.r10.s64 = -2112094208;
	// lwz r3,-4568(r22)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r22.u32 + -4568);
	// sth r11,80(r31)
	PPC_STORE_U16(ctx.r31.u32 + 80, ctx.r11.u16);
	// addi r5,r31,80
	ctx.r5.s64 = ctx.r31.s64 + 80;
	// addi r4,r10,15912
	ctx.r4.s64 = ctx.r10.s64 + 15912;
	// bl 0x831421a0
	ctx.lr = 0x83142578;
	sub_831421A0(ctx, base);
	// li r11,20
	ctx.r11.s64 = 20;
	// lis r10,-32228
	ctx.r10.s64 = -2112094208;
	// lwz r3,-4568(r22)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r22.u32 + -4568);
	// sth r11,80(r31)
	PPC_STORE_U16(ctx.r31.u32 + 80, ctx.r11.u16);
	// addi r5,r31,80
	ctx.r5.s64 = ctx.r31.s64 + 80;
	// addi r4,r10,15932
	ctx.r4.s64 = ctx.r10.s64 + 15932;
	// bl 0x831421a0
	ctx.lr = 0x83142594;
	sub_831421A0(ctx, base);
	// li r25,21
	ctx.r25.s64 = 21;
	// lis r11,-32228
	ctx.r11.s64 = -2112094208;
	// lwz r3,-4568(r22)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r22.u32 + -4568);
	// sth r25,80(r31)
	PPC_STORE_U16(ctx.r31.u32 + 80, ctx.r25.u16);
	// addi r5,r31,80
	ctx.r5.s64 = ctx.r31.s64 + 80;
	// addi r4,r11,16048
	ctx.r4.s64 = ctx.r11.s64 + 16048;
	// bl 0x831421a0
	ctx.lr = 0x831425B0;
	sub_831421A0(ctx, base);
	// li r11,22
	ctx.r11.s64 = 22;
	// lis r10,-32228
	ctx.r10.s64 = -2112094208;
	// lwz r3,-4568(r22)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r22.u32 + -4568);
	// sth r11,80(r31)
	PPC_STORE_U16(ctx.r31.u32 + 80, ctx.r11.u16);
	// addi r5,r31,80
	ctx.r5.s64 = ctx.r31.s64 + 80;
	// addi r4,r10,15964
	ctx.r4.s64 = ctx.r10.s64 + 15964;
	// bl 0x831421a0
	ctx.lr = 0x831425CC;
	sub_831421A0(ctx, base);
	// li r11,23
	ctx.r11.s64 = 23;
	// lis r10,-32228
	ctx.r10.s64 = -2112094208;
	// lwz r3,-4568(r22)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r22.u32 + -4568);
	// sth r11,80(r31)
	PPC_STORE_U16(ctx.r31.u32 + 80, ctx.r11.u16);
	// addi r5,r31,80
	ctx.r5.s64 = ctx.r31.s64 + 80;
	// addi r4,r10,15972
	ctx.r4.s64 = ctx.r10.s64 + 15972;
	// bl 0x831421a0
	ctx.lr = 0x831425E8;
	sub_831421A0(ctx, base);
	// li r11,24
	ctx.r11.s64 = 24;
	// lis r10,-32228
	ctx.r10.s64 = -2112094208;
	// lwz r3,-4568(r22)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r22.u32 + -4568);
	// sth r11,80(r31)
	PPC_STORE_U16(ctx.r31.u32 + 80, ctx.r11.u16);
	// addi r5,r31,80
	ctx.r5.s64 = ctx.r31.s64 + 80;
	// addi r4,r10,15984
	ctx.r4.s64 = ctx.r10.s64 + 15984;
	// bl 0x831421a0
	ctx.lr = 0x83142604;
	sub_831421A0(ctx, base);
	// li r11,25
	ctx.r11.s64 = 25;
	// lis r10,-32228
	ctx.r10.s64 = -2112094208;
	// lwz r3,-4568(r22)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r22.u32 + -4568);
	// sth r11,80(r31)
	PPC_STORE_U16(ctx.r31.u32 + 80, ctx.r11.u16);
	// addi r5,r31,80
	ctx.r5.s64 = ctx.r31.s64 + 80;
	// addi r4,r10,16016
	ctx.r4.s64 = ctx.r10.s64 + 16016;
	// bl 0x831421a0
	ctx.lr = 0x83142620;
	sub_831421A0(ctx, base);
	// li r11,26
	ctx.r11.s64 = 26;
	// lis r10,-32228
	ctx.r10.s64 = -2112094208;
	// lwz r3,-4568(r22)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r22.u32 + -4568);
	// sth r11,80(r31)
	PPC_STORE_U16(ctx.r31.u32 + 80, ctx.r11.u16);
	// addi r5,r31,80
	ctx.r5.s64 = ctx.r31.s64 + 80;
	// addi r4,r10,15724
	ctx.r4.s64 = ctx.r10.s64 + 15724;
	// bl 0x831421a0
	ctx.lr = 0x8314263C;
	sub_831421A0(ctx, base);
	// li r11,27
	ctx.r11.s64 = 27;
	// lis r10,-32228
	ctx.r10.s64 = -2112094208;
	// lwz r3,-4568(r22)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r22.u32 + -4568);
	// sth r11,80(r31)
	PPC_STORE_U16(ctx.r31.u32 + 80, ctx.r11.u16);
	// addi r5,r31,80
	ctx.r5.s64 = ctx.r31.s64 + 80;
	// addi r4,r10,16032
	ctx.r4.s64 = ctx.r10.s64 + 16032;
	// bl 0x831421a0
	ctx.lr = 0x83142658;
	sub_831421A0(ctx, base);
	// li r26,28
	ctx.r26.s64 = 28;
	// lis r11,-32228
	ctx.r11.s64 = -2112094208;
	// lwz r3,-4568(r22)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r22.u32 + -4568);
	// sth r26,80(r31)
	PPC_STORE_U16(ctx.r31.u32 + 80, ctx.r26.u16);
	// addi r5,r31,80
	ctx.r5.s64 = ctx.r31.s64 + 80;
	// addi r4,r11,16064
	ctx.r4.s64 = ctx.r11.s64 + 16064;
	// bl 0x831421a0
	ctx.lr = 0x83142674;
	sub_831421A0(ctx, base);
	// li r11,29
	ctx.r11.s64 = 29;
	// lis r10,-32228
	ctx.r10.s64 = -2112094208;
	// lwz r3,-4568(r22)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r22.u32 + -4568);
	// sth r11,80(r31)
	PPC_STORE_U16(ctx.r31.u32 + 80, ctx.r11.u16);
	// addi r5,r31,80
	ctx.r5.s64 = ctx.r31.s64 + 80;
	// addi r4,r10,16096
	ctx.r4.s64 = ctx.r10.s64 + 16096;
	// bl 0x831421a0
	ctx.lr = 0x83142690;
	sub_831421A0(ctx, base);
	// li r27,30
	ctx.r27.s64 = 30;
	// lis r11,-32228
	ctx.r11.s64 = -2112094208;
	// lwz r3,-4568(r22)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r22.u32 + -4568);
	// sth r27,80(r31)
	PPC_STORE_U16(ctx.r31.u32 + 80, ctx.r27.u16);
	// addi r5,r31,80
	ctx.r5.s64 = ctx.r31.s64 + 80;
	// addi r4,r11,16108
	ctx.r4.s64 = ctx.r11.s64 + 16108;
	// bl 0x831421a0
	ctx.lr = 0x831426AC;
	sub_831421A0(ctx, base);
	// li r28,31
	ctx.r28.s64 = 31;
	// lis r11,-32228
	ctx.r11.s64 = -2112094208;
	// lwz r3,-4568(r22)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r22.u32 + -4568);
	// sth r28,80(r31)
	PPC_STORE_U16(ctx.r31.u32 + 80, ctx.r28.u16);
	// addi r5,r31,80
	ctx.r5.s64 = ctx.r31.s64 + 80;
	// addi r4,r11,16116
	ctx.r4.s64 = ctx.r11.s64 + 16116;
	// bl 0x831421a0
	ctx.lr = 0x831426C8;
	sub_831421A0(ctx, base);
	// li r29,32
	ctx.r29.s64 = 32;
	// lis r11,-32228
	ctx.r11.s64 = -2112094208;
	// lwz r3,-4568(r22)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r22.u32 + -4568);
	// sth r29,80(r31)
	PPC_STORE_U16(ctx.r31.u32 + 80, ctx.r29.u16);
	// addi r5,r31,80
	ctx.r5.s64 = ctx.r31.s64 + 80;
	// addi r4,r11,16140
	ctx.r4.s64 = ctx.r11.s64 + 16140;
	// bl 0x831421a0
	ctx.lr = 0x831426E4;
	sub_831421A0(ctx, base);
	// li r30,33
	ctx.r30.s64 = 33;
	// lis r11,-32228
	ctx.r11.s64 = -2112094208;
	// lwz r3,-4568(r22)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r22.u32 + -4568);
	// sth r30,80(r31)
	PPC_STORE_U16(ctx.r31.u32 + 80, ctx.r30.u16);
	// addi r5,r31,80
	ctx.r5.s64 = ctx.r31.s64 + 80;
	// addi r4,r11,16156
	ctx.r4.s64 = ctx.r11.s64 + 16156;
	// bl 0x831421a0
	ctx.lr = 0x83142700;
	sub_831421A0(ctx, base);
	// li r3,16
	ctx.r3.s64 = 16;
	// bl 0x830dd340
	ctx.lr = 0x83142708;
	sub_830DD340(ctx, base);
	// stw r3,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r3.u32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x83142724
	if (ctx.cr0.eq) goto loc_83142724;
	// li r4,13
	ctx.r4.s64 = 13;
	// lwz r5,-5084(r23)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r23.u32 + -5084);
	// bl 0x83143888
	ctx.lr = 0x83142720;
	sub_83143888(ctx, base);
	// b 0x83142728
	goto loc_83142728;
loc_83142724:
	// li r3,0
	ctx.r3.s64 = 0;
loc_83142728:
	// lis r23,-31827
	ctx.r23.s64 = -2085814272;
	// sth r30,80(r31)
	PPC_STORE_U16(ctx.r31.u32 + 80, ctx.r30.u16);
	// lis r11,-32228
	ctx.r11.s64 = -2112094208;
	// addi r5,r31,80
	ctx.r5.s64 = ctx.r31.s64 + 80;
	// addi r4,r11,15100
	ctx.r4.s64 = ctx.r11.s64 + 15100;
	// stw r3,-4564(r23)
	PPC_STORE_U32(ctx.r23.u32 + -4564, ctx.r3.u32);
	// bl 0x831421a0
	ctx.lr = 0x83142744;
	sub_831421A0(ctx, base);
	// li r11,34
	ctx.r11.s64 = 34;
	// lis r10,-32228
	ctx.r10.s64 = -2112094208;
	// lwz r3,-4564(r23)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r23.u32 + -4564);
	// sth r11,80(r31)
	PPC_STORE_U16(ctx.r31.u32 + 80, ctx.r11.u16);
	// addi r5,r31,80
	ctx.r5.s64 = ctx.r31.s64 + 80;
	// addi r4,r10,15128
	ctx.r4.s64 = ctx.r10.s64 + 15128;
	// bl 0x831421a0
	ctx.lr = 0x83142760;
	sub_831421A0(ctx, base);
	// sth r27,80(r31)
	PPC_STORE_U16(ctx.r31.u32 + 80, ctx.r27.u16);
	// lis r11,-32228
	ctx.r11.s64 = -2112094208;
	// lwz r3,-4564(r23)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r23.u32 + -4564);
	// addi r5,r31,80
	ctx.r5.s64 = ctx.r31.s64 + 80;
	// addi r4,r11,15024
	ctx.r4.s64 = ctx.r11.s64 + 15024;
	// bl 0x831421a0
	ctx.lr = 0x83142778;
	sub_831421A0(ctx, base);
	// sth r28,80(r31)
	PPC_STORE_U16(ctx.r31.u32 + 80, ctx.r28.u16);
	// lis r11,-32228
	ctx.r11.s64 = -2112094208;
	// lwz r3,-4564(r23)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r23.u32 + -4564);
	// addi r5,r31,80
	ctx.r5.s64 = ctx.r31.s64 + 80;
	// addi r4,r11,15052
	ctx.r4.s64 = ctx.r11.s64 + 15052;
	// bl 0x831421a0
	ctx.lr = 0x83142790;
	sub_831421A0(ctx, base);
	// li r11,46
	ctx.r11.s64 = 46;
	// lis r10,-32228
	ctx.r10.s64 = -2112094208;
	// lwz r3,-4564(r23)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r23.u32 + -4564);
	// sth r11,80(r31)
	PPC_STORE_U16(ctx.r31.u32 + 80, ctx.r11.u16);
	// addi r5,r31,80
	ctx.r5.s64 = ctx.r31.s64 + 80;
	// addi r4,r10,15228
	ctx.r4.s64 = ctx.r10.s64 + 15228;
	// bl 0x831421a0
	ctx.lr = 0x831427AC;
	sub_831421A0(ctx, base);
	// sth r25,80(r31)
	PPC_STORE_U16(ctx.r31.u32 + 80, ctx.r25.u16);
	// lis r11,-32228
	ctx.r11.s64 = -2112094208;
	// lwz r3,-4564(r23)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r23.u32 + -4564);
	// addi r5,r31,80
	ctx.r5.s64 = ctx.r31.s64 + 80;
	// addi r4,r11,15252
	ctx.r4.s64 = ctx.r11.s64 + 15252;
	// bl 0x831421a0
	ctx.lr = 0x831427C4;
	sub_831421A0(ctx, base);
	// sth r26,80(r31)
	PPC_STORE_U16(ctx.r31.u32 + 80, ctx.r26.u16);
	// lis r11,-32228
	ctx.r11.s64 = -2112094208;
	// lwz r3,-4564(r23)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r23.u32 + -4564);
	// addi r5,r31,80
	ctx.r5.s64 = ctx.r31.s64 + 80;
	// addi r4,r11,15008
	ctx.r4.s64 = ctx.r11.s64 + 15008;
	// bl 0x831421a0
	ctx.lr = 0x831427DC;
	sub_831421A0(ctx, base);
	// li r11,35
	ctx.r11.s64 = 35;
	// lis r10,-32228
	ctx.r10.s64 = -2112094208;
	// lwz r3,-4564(r23)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r23.u32 + -4564);
	// sth r11,80(r31)
	PPC_STORE_U16(ctx.r31.u32 + 80, ctx.r11.u16);
	// addi r5,r31,80
	ctx.r5.s64 = ctx.r31.s64 + 80;
	// addi r4,r10,15156
	ctx.r4.s64 = ctx.r10.s64 + 15156;
	// bl 0x831421a0
	ctx.lr = 0x831427F8;
	sub_831421A0(ctx, base);
	// sth r29,80(r31)
	PPC_STORE_U16(ctx.r31.u32 + 80, ctx.r29.u16);
	// lis r11,-32228
	ctx.r11.s64 = -2112094208;
	// lwz r3,-4564(r23)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r23.u32 + -4564);
	// addi r5,r31,80
	ctx.r5.s64 = ctx.r31.s64 + 80;
	// addi r4,r11,15080
	ctx.r4.s64 = ctx.r11.s64 + 15080;
	// bl 0x831421a0
	ctx.lr = 0x83142810;
	sub_831421A0(ctx, base);
	// sth r24,80(r31)
	PPC_STORE_U16(ctx.r31.u32 + 80, ctx.r24.u16);
	// lis r11,-32228
	ctx.r11.s64 = -2112094208;
	// lwz r3,-4564(r23)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r23.u32 + -4564);
	// addi r5,r31,80
	ctx.r5.s64 = ctx.r31.s64 + 80;
	// addi r4,r11,14860
	ctx.r4.s64 = ctx.r11.s64 + 14860;
	// bl 0x831421a0
	ctx.lr = 0x83142828;
	sub_831421A0(ctx, base);
	// li r11,49
	ctx.r11.s64 = 49;
	// lis r10,-32228
	ctx.r10.s64 = -2112094208;
	// lwz r3,-4564(r23)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r23.u32 + -4564);
	// sth r11,80(r31)
	PPC_STORE_U16(ctx.r31.u32 + 80, ctx.r11.u16);
	// addi r5,r31,80
	ctx.r5.s64 = ctx.r31.s64 + 80;
	// addi r4,r10,14896
	ctx.r4.s64 = ctx.r10.s64 + 14896;
	// bl 0x831421a0
	ctx.lr = 0x83142844;
	sub_831421A0(ctx, base);
	// li r11,37
	ctx.r11.s64 = 37;
	// lis r10,-32228
	ctx.r10.s64 = -2112094208;
	// lwz r3,-4564(r23)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r23.u32 + -4564);
	// sth r11,80(r31)
	PPC_STORE_U16(ctx.r31.u32 + 80, ctx.r11.u16);
	// addi r5,r31,80
	ctx.r5.s64 = ctx.r31.s64 + 80;
	// addi r4,r10,15196
	ctx.r4.s64 = ctx.r10.s64 + 15196;
	// bl 0x831421a0
	ctx.lr = 0x83142860;
	sub_831421A0(ctx, base);
	// addi r1,r31,176
	ctx.r1.s64 = ctx.r31.s64 + 176;
	// b 0x833a01e0
	__restgprlr_22(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83142868"))) PPC_WEAK_FUNC(sub_83142868);
PPC_FUNC_IMPL(__imp__sub_83142868) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// addi r31,r12,-176
	ctx.r31.s64 = ctx.r12.s64 + -176;
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r3,80(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	// bl 0x830dd3e0
	ctx.lr = 0x83142880;
	sub_830DD3E0(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83142890"))) PPC_WEAK_FUNC(sub_83142890);
PPC_FUNC_IMPL(__imp__sub_83142890) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// addi r31,r12,-176
	ctx.r31.s64 = ctx.r12.s64 + -176;
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r3,80(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	// bl 0x830dd3e0
	ctx.lr = 0x831428A8;
	sub_830DD3E0(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831428B8"))) PPC_WEAK_FUNC(sub_831428B8);
PPC_FUNC_IMPL(__imp__sub_831428B8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lwz r25,17952(r26)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r26.u32 + 17952);
	// lwz r16,6876(r29)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r29.u32 + 6876);
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// li r0,0
	ctx.r0.s64 = 0;
	// stw r0,4(r1)
	PPC_STORE_U32(ctx.r1.u32 + 4, ctx.r0.u32);
	// bl 0x833a0170
	ctx.lr = 0x831428D0;
	__savegprlr_14(ctx, base);
	// addi r31,r1,-320
	ctx.r31.s64 = ctx.r1.s64 + -320;
	// stwu r1,-320(r1)
	ea = -320 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// stw r3,340(r31)
	PPC_STORE_U32(ctx.r31.u32 + 340, ctx.r3.u32);
	// mr r28,r8
	ctx.r28.u64 = ctx.r8.u64;
	// stw r8,380(r31)
	PPC_STORE_U32(ctx.r31.u32 + 380, ctx.r8.u32);
	// mr r26,r4
	ctx.r26.u64 = ctx.r4.u64;
	// stw r4,348(r31)
	PPC_STORE_U32(ctx.r31.u32 + 348, ctx.r4.u32);
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// sth r5,358(r31)
	PPC_STORE_U16(ctx.r31.u32 + 358, ctx.r5.u16);
	// mr r14,r6
	ctx.r14.u64 = ctx.r6.u64;
	// stw r6,364(r31)
	PPC_STORE_U32(ctx.r31.u32 + 364, ctx.r6.u32);
	// mr r30,r7
	ctx.r30.u64 = ctx.r7.u64;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x83142914
	if (ctx.cr6.eq) goto loc_83142914;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,4(r8)
	PPC_STORE_U32(ctx.r8.u32 + 4, ctx.r11.u32);
loc_83142914:
	// cmplwi cr6,r26,0
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, 0, ctx.xer);
	// beq cr6,0x83142d30
	if (ctx.cr6.eq) {
		// ERROR 83142D30
		return;
	}
	// lis r11,-31827
	ctx.r11.s64 = -2085814272;
	// addi r16,r11,-4568
	ctx.r16.s64 = ctx.r11.s64 + -4568;
	// lwz r11,-4568(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -4568);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x83142d30
	if (ctx.cr6.eq) {
		// ERROR 83142D30
		return;
	}
	// clrlwi r11,r29,16
	ctx.r11.u64 = ctx.r29.u32 & 0xFFFF;
	// cmplwi cr6,r11,50
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 50, ctx.xer);
	// bge cr6,0x83142d30
	if (!ctx.cr6.lt) {
		// ERROR 83142D30
		return;
	}
	// lwz r11,0(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// lwz r11,92(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 92);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x83142950;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,0(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// mr r15,r3
	ctx.r15.u64 = ctx.r3.u64;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// stw r15,92(r31)
	PPC_STORE_U32(ctx.r31.u32 + 92, ctx.r15.u32);
	// lwz r11,84(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 84);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8314296C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r11,-32228
	ctx.r11.s64 = -2112094208;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r17,r11,14464
	ctx.r17.s64 = ctx.r11.s64 + 14464;
	// mr r3,r17
	ctx.r3.u64 = ctx.r17.u64;
	// bl 0x830d8d28
	ctx.lr = 0x83142980;
	sub_830D8D28(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// lis r11,-32228
	ctx.r11.s64 = -2112094208;
	// addi r19,r11,-5832
	ctx.r19.s64 = ctx.r11.s64 + -5832;
	// bne 0x831429b4
	if (!ctx.cr0.eq) goto loc_831429B4;
	// li r10,0
	ctx.r10.s64 = 0;
	// li r9,0
	ctx.r9.s64 = 0;
	// mr r5,r19
	ctx.r5.u64 = ctx.r19.u64;
	// li r8,0
	ctx.r8.s64 = 0;
	// mr r7,r15
	ctx.r7.u64 = ctx.r15.u64;
	// li r6,166
	ctx.r6.s64 = 166;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mr r3,r14
	ctx.r3.u64 = ctx.r14.u64;
	// bl 0x83178838
	ctx.lr = 0x831429B4;
	sub_83178838(ctx, base);
loc_831429B4:
	// clrlwi. r11,r30,24
	ctx.r11.u64 = ctx.r30.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// lis r11,-32227
	ctx.r11.s64 = -2112028672;
	// addi r11,r11,6436
	ctx.r11.s64 = ctx.r11.s64 + 6436;
	// beq 0x831429c8
	if (ctx.cr0.eq) goto loc_831429C8;
	// addi r11,r11,12
	ctx.r11.s64 = ctx.r11.s64 + 12;
loc_831429C8:
	// stw r11,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r11.u32);
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// lwz r11,0(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// lwz r11,40(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 40);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x831429E0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// stw r3,108(r31)
	PPC_STORE_U32(ctx.r31.u32 + 108, ctx.r3.u32);
	// lwz r11,16(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x831429F8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r3,104(r31)
	PPC_STORE_U32(ctx.r31.u32 + 104, ctx.r3.u32);
	// li r5,34
	ctx.r5.s64 = 34;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r31,128
	ctx.r3.s64 = ctx.r31.s64 + 128;
	// bl 0x833a2b30
	ctx.lr = 0x83142A0C;
	sub_833A2B30(ctx, base);
	// lis r7,-31846
	ctx.r7.s64 = -2087059456;
	// lis r8,-32228
	ctx.r8.s64 = -2112094208;
	// lis r9,-32228
	ctx.r9.s64 = -2112094208;
	// lis r10,-32228
	ctx.r10.s64 = -2112094208;
	// lis r11,-32228
	ctx.r11.s64 = -2112094208;
	// li r18,0
	ctx.r18.s64 = 0;
	// addi r20,r7,24592
	ctx.r20.s64 = ctx.r7.s64 + 24592;
	// addi r23,r8,14776
	ctx.r23.s64 = ctx.r8.s64 + 14776;
	// addi r22,r9,14652
	ctx.r22.s64 = ctx.r9.s64 + 14652;
	// addi r21,r10,-5968
	ctx.r21.s64 = ctx.r10.s64 + -5968;
	// addi r24,r11,-5980
	ctx.r24.s64 = ctx.r11.s64 + -5980;
	// lwz r11,104(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 104);
	// stw r18,100(r31)
	PPC_STORE_U32(ctx.r31.u32 + 100, ctx.r18.u32);
	// cmpw cr6,r18,r11
	ctx.cr6.compare<int32_t>(ctx.r18.s32, ctx.r11.s32, ctx.xer);
	// bge cr6,0x83142cc4
	if (!ctx.cr6.lt) {
		sub_83142CC4(ctx, base);
		return;
	}
	// lwz r11,0(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 0);
	// mr r4,r18
	ctx.r4.u64 = ctx.r18.u64;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x83142A60;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// stw r3,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r3.u32);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x83142A78;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// bl 0x830d8d28
	ctx.lr = 0x83142A84;
	sub_830D8D28(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x83142cb4
	if (!ctx.cr0.eq) {
		// ERROR 83142CB4
		return;
	}
	// mr r4,r21
	ctx.r4.u64 = ctx.r21.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x830df070
	ctx.lr = 0x83142A98;
	sub_830DF070(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x83142cb4
	if (!ctx.cr0.eq) {
		// ERROR 83142CB4
		return;
	}
	// lhz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r30.u32 + 0);
	// cmplwi cr6,r11,88
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 88, ctx.xer);
	// beq cr6,0x83142ab4
	if (ctx.cr6.eq) goto loc_83142AB4;
	// cmplwi cr6,r11,120
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 120, ctx.xer);
	// bne cr6,0x83142adc
	if (!ctx.cr6.eq) goto loc_83142ADC;
loc_83142AB4:
	// lhz r11,2(r30)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r30.u32 + 2);
	// cmplwi cr6,r11,77
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 77, ctx.xer);
	// beq cr6,0x83142ac8
	if (ctx.cr6.eq) goto loc_83142AC8;
	// cmplwi cr6,r11,109
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 109, ctx.xer);
	// bne cr6,0x83142adc
	if (!ctx.cr6.eq) goto loc_83142ADC;
loc_83142AC8:
	// lhz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r30.u32 + 4);
	// cmplwi cr6,r11,76
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 76, ctx.xer);
	// beq cr6,0x83142b3c
	if (ctx.cr6.eq) goto loc_83142B3C;
	// cmplwi cr6,r11,108
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 108, ctx.xer);
	// beq cr6,0x83142b3c
	if (ctx.cr6.eq) goto loc_83142B3C;
loc_83142ADC:
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r11,84(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 84);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x83142AF0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x83142b7c
	if (ctx.cr0.eq) goto loc_83142B7C;
	// lhz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 0);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x83142b7c
	if (ctx.cr0.eq) goto loc_83142B7C;
	// mr r4,r17
	ctx.r4.u64 = ctx.r17.u64;
	// bl 0x830d8d28
	ctx.lr = 0x83142B0C;
	sub_830D8D28(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x83142b54
	if (!ctx.cr0.eq) goto loc_83142B54;
	// mr r4,r22
	ctx.r4.u64 = ctx.r22.u64;
	// mr r3,r15
	ctx.r3.u64 = ctx.r15.u64;
	// bl 0x830d8d28
	ctx.lr = 0x83142B20;
	sub_830D8D28(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x83142b54
	if (!ctx.cr0.eq) goto loc_83142B54;
	// mr r4,r23
	ctx.r4.u64 = ctx.r23.u64;
	// mr r3,r15
	ctx.r3.u64 = ctx.r15.u64;
	// bl 0x830d8d28
	ctx.lr = 0x83142B34;
	sub_830D8D28(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x83142b54
	if (!ctx.cr0.eq) goto loc_83142B54;
loc_83142B3C:
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// beq cr6,0x83142cb4
	if (ctx.cr6.eq) {
		// ERROR 83142CB4
		return;
	}
	// addi r4,r31,88
	ctx.r4.s64 = ctx.r31.s64 + 88;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x831001e0
	ctx.lr = 0x83142B50;
	sub_831001E0(ctx, base);
	// b 0x83142cb4
	// ERROR 83142CB4
	return;
loc_83142B54:
	// mr r5,r19
	ctx.r5.u64 = ctx.r19.u64;
	// lwz r8,84(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 84);
	// li r10,0
	ctx.r10.s64 = 0;
	// mr r9,r15
	ctx.r9.u64 = ctx.r15.u64;
	// mr r7,r30
	ctx.r7.u64 = ctx.r30.u64;
	// li r6,95
	ctx.r6.s64 = 95;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mr r3,r14
	ctx.r3.u64 = ctx.r14.u64;
	// bl 0x83178838
	ctx.lr = 0x83142B78;
	sub_83178838(ctx, base);
	// b 0x83142cb4
	// ERROR 83142CB4
	return;
loc_83142B7C:
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// li r10,-1
	ctx.r10.s64 = -1;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// stw r10,112(r31)
	PPC_STORE_U32(ctx.r31.u32 + 112, ctx.r10.u32);
	// lwz r11,92(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 92);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x83142B98;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// stw r3,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r3.u32);
	// li r30,0
	ctx.r30.s64 = 0;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// lwz r3,0(r16)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r16.u32 + 0);
	// lwz r5,0(r27)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// bl 0x831b52b0
	ctx.lr = 0x83142BB4;
	sub_831B52B0(ctx, base);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// lhz r27,0(r3)
	ctx.r27.u64 = PPC_LOAD_U16(ctx.r3.u32 + 0);
	// b 0x83142c28
	// ERROR 83142C28
	return;
}

__attribute__((alias("__imp__sub_831428C0"))) PPC_WEAK_FUNC(sub_831428C0);
PPC_FUNC_IMPL(__imp__sub_831428C0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// li r0,0
	ctx.r0.s64 = 0;
	// stw r0,4(r1)
	PPC_STORE_U32(ctx.r1.u32 + 4, ctx.r0.u32);
	// bl 0x833a0170
	ctx.lr = 0x831428D0;
	__savegprlr_14(ctx, base);
	// addi r31,r1,-320
	ctx.r31.s64 = ctx.r1.s64 + -320;
	// stwu r1,-320(r1)
	ea = -320 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// stw r3,340(r31)
	PPC_STORE_U32(ctx.r31.u32 + 340, ctx.r3.u32);
	// mr r28,r8
	ctx.r28.u64 = ctx.r8.u64;
	// stw r8,380(r31)
	PPC_STORE_U32(ctx.r31.u32 + 380, ctx.r8.u32);
	// mr r26,r4
	ctx.r26.u64 = ctx.r4.u64;
	// stw r4,348(r31)
	PPC_STORE_U32(ctx.r31.u32 + 348, ctx.r4.u32);
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// sth r5,358(r31)
	PPC_STORE_U16(ctx.r31.u32 + 358, ctx.r5.u16);
	// mr r14,r6
	ctx.r14.u64 = ctx.r6.u64;
	// stw r6,364(r31)
	PPC_STORE_U32(ctx.r31.u32 + 364, ctx.r6.u32);
	// mr r30,r7
	ctx.r30.u64 = ctx.r7.u64;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x83142914
	if (ctx.cr6.eq) goto loc_83142914;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,4(r8)
	PPC_STORE_U32(ctx.r8.u32 + 4, ctx.r11.u32);
loc_83142914:
	// cmplwi cr6,r26,0
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, 0, ctx.xer);
	// beq cr6,0x83142d30
	if (ctx.cr6.eq) goto loc_83142D30;
	// lis r11,-31827
	ctx.r11.s64 = -2085814272;
	// addi r16,r11,-4568
	ctx.r16.s64 = ctx.r11.s64 + -4568;
	// lwz r11,-4568(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -4568);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x83142d30
	if (ctx.cr6.eq) goto loc_83142D30;
	// clrlwi r11,r29,16
	ctx.r11.u64 = ctx.r29.u32 & 0xFFFF;
	// cmplwi cr6,r11,50
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 50, ctx.xer);
	// bge cr6,0x83142d30
	if (!ctx.cr6.lt) goto loc_83142D30;
	// lwz r11,0(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// lwz r11,92(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 92);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x83142950;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,0(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// mr r15,r3
	ctx.r15.u64 = ctx.r3.u64;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// stw r15,92(r31)
	PPC_STORE_U32(ctx.r31.u32 + 92, ctx.r15.u32);
	// lwz r11,84(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 84);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8314296C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r11,-32228
	ctx.r11.s64 = -2112094208;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r17,r11,14464
	ctx.r17.s64 = ctx.r11.s64 + 14464;
	// mr r3,r17
	ctx.r3.u64 = ctx.r17.u64;
	// bl 0x830d8d28
	ctx.lr = 0x83142980;
	sub_830D8D28(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// lis r11,-32228
	ctx.r11.s64 = -2112094208;
	// addi r19,r11,-5832
	ctx.r19.s64 = ctx.r11.s64 + -5832;
	// bne 0x831429b4
	if (!ctx.cr0.eq) goto loc_831429B4;
	// li r10,0
	ctx.r10.s64 = 0;
	// li r9,0
	ctx.r9.s64 = 0;
	// mr r5,r19
	ctx.r5.u64 = ctx.r19.u64;
	// li r8,0
	ctx.r8.s64 = 0;
	// mr r7,r15
	ctx.r7.u64 = ctx.r15.u64;
	// li r6,166
	ctx.r6.s64 = 166;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mr r3,r14
	ctx.r3.u64 = ctx.r14.u64;
	// bl 0x83178838
	ctx.lr = 0x831429B4;
	sub_83178838(ctx, base);
loc_831429B4:
	// clrlwi. r11,r30,24
	ctx.r11.u64 = ctx.r30.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// lis r11,-32227
	ctx.r11.s64 = -2112028672;
	// addi r11,r11,6436
	ctx.r11.s64 = ctx.r11.s64 + 6436;
	// beq 0x831429c8
	if (ctx.cr0.eq) goto loc_831429C8;
	// addi r11,r11,12
	ctx.r11.s64 = ctx.r11.s64 + 12;
loc_831429C8:
	// stw r11,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r11.u32);
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// lwz r11,0(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// lwz r11,40(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 40);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x831429E0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// stw r3,108(r31)
	PPC_STORE_U32(ctx.r31.u32 + 108, ctx.r3.u32);
	// lwz r11,16(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x831429F8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r3,104(r31)
	PPC_STORE_U32(ctx.r31.u32 + 104, ctx.r3.u32);
	// li r5,34
	ctx.r5.s64 = 34;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r31,128
	ctx.r3.s64 = ctx.r31.s64 + 128;
	// bl 0x833a2b30
	ctx.lr = 0x83142A0C;
	sub_833A2B30(ctx, base);
	// lis r7,-31846
	ctx.r7.s64 = -2087059456;
	// lis r8,-32228
	ctx.r8.s64 = -2112094208;
	// lis r9,-32228
	ctx.r9.s64 = -2112094208;
	// lis r10,-32228
	ctx.r10.s64 = -2112094208;
	// lis r11,-32228
	ctx.r11.s64 = -2112094208;
	// li r18,0
	ctx.r18.s64 = 0;
	// addi r20,r7,24592
	ctx.r20.s64 = ctx.r7.s64 + 24592;
	// addi r23,r8,14776
	ctx.r23.s64 = ctx.r8.s64 + 14776;
	// addi r22,r9,14652
	ctx.r22.s64 = ctx.r9.s64 + 14652;
	// addi r21,r10,-5968
	ctx.r21.s64 = ctx.r10.s64 + -5968;
	// addi r24,r11,-5980
	ctx.r24.s64 = ctx.r11.s64 + -5980;
loc_83142A38:
	// lwz r11,104(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 104);
	// stw r18,100(r31)
	PPC_STORE_U32(ctx.r31.u32 + 100, ctx.r18.u32);
	// cmpw cr6,r18,r11
	ctx.cr6.compare<int32_t>(ctx.r18.s32, ctx.r11.s32, ctx.xer);
	// bge cr6,0x83142cc4
	if (!ctx.cr6.lt) goto loc_83142CC4;
	// lwz r11,0(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 0);
	// mr r4,r18
	ctx.r4.u64 = ctx.r18.u64;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x83142A60;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// stw r3,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r3.u32);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x83142A78;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// bl 0x830d8d28
	ctx.lr = 0x83142A84;
	sub_830D8D28(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x83142cb4
	if (!ctx.cr0.eq) goto loc_83142CB4;
	// mr r4,r21
	ctx.r4.u64 = ctx.r21.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x830df070
	ctx.lr = 0x83142A98;
	sub_830DF070(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x83142cb4
	if (!ctx.cr0.eq) goto loc_83142CB4;
	// lhz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r30.u32 + 0);
	// cmplwi cr6,r11,88
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 88, ctx.xer);
	// beq cr6,0x83142ab4
	if (ctx.cr6.eq) goto loc_83142AB4;
	// cmplwi cr6,r11,120
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 120, ctx.xer);
	// bne cr6,0x83142adc
	if (!ctx.cr6.eq) goto loc_83142ADC;
loc_83142AB4:
	// lhz r11,2(r30)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r30.u32 + 2);
	// cmplwi cr6,r11,77
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 77, ctx.xer);
	// beq cr6,0x83142ac8
	if (ctx.cr6.eq) goto loc_83142AC8;
	// cmplwi cr6,r11,109
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 109, ctx.xer);
	// bne cr6,0x83142adc
	if (!ctx.cr6.eq) goto loc_83142ADC;
loc_83142AC8:
	// lhz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r30.u32 + 4);
	// cmplwi cr6,r11,76
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 76, ctx.xer);
	// beq cr6,0x83142b3c
	if (ctx.cr6.eq) goto loc_83142B3C;
	// cmplwi cr6,r11,108
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 108, ctx.xer);
	// beq cr6,0x83142b3c
	if (ctx.cr6.eq) goto loc_83142B3C;
loc_83142ADC:
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r11,84(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 84);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x83142AF0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x83142b7c
	if (ctx.cr0.eq) goto loc_83142B7C;
	// lhz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 0);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x83142b7c
	if (ctx.cr0.eq) goto loc_83142B7C;
	// mr r4,r17
	ctx.r4.u64 = ctx.r17.u64;
	// bl 0x830d8d28
	ctx.lr = 0x83142B0C;
	sub_830D8D28(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x83142b54
	if (!ctx.cr0.eq) goto loc_83142B54;
	// mr r4,r22
	ctx.r4.u64 = ctx.r22.u64;
	// mr r3,r15
	ctx.r3.u64 = ctx.r15.u64;
	// bl 0x830d8d28
	ctx.lr = 0x83142B20;
	sub_830D8D28(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x83142b54
	if (!ctx.cr0.eq) goto loc_83142B54;
	// mr r4,r23
	ctx.r4.u64 = ctx.r23.u64;
	// mr r3,r15
	ctx.r3.u64 = ctx.r15.u64;
	// bl 0x830d8d28
	ctx.lr = 0x83142B34;
	sub_830D8D28(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x83142b54
	if (!ctx.cr0.eq) goto loc_83142B54;
loc_83142B3C:
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// beq cr6,0x83142cb4
	if (ctx.cr6.eq) goto loc_83142CB4;
	// addi r4,r31,88
	ctx.r4.s64 = ctx.r31.s64 + 88;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x831001e0
	ctx.lr = 0x83142B50;
	sub_831001E0(ctx, base);
	// b 0x83142cb4
	goto loc_83142CB4;
loc_83142B54:
	// mr r5,r19
	ctx.r5.u64 = ctx.r19.u64;
	// lwz r8,84(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 84);
	// li r10,0
	ctx.r10.s64 = 0;
	// mr r9,r15
	ctx.r9.u64 = ctx.r15.u64;
	// mr r7,r30
	ctx.r7.u64 = ctx.r30.u64;
	// li r6,95
	ctx.r6.s64 = 95;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mr r3,r14
	ctx.r3.u64 = ctx.r14.u64;
	// bl 0x83178838
	ctx.lr = 0x83142B78;
	sub_83178838(ctx, base);
	// b 0x83142cb4
	goto loc_83142CB4;
loc_83142B7C:
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// li r10,-1
	ctx.r10.s64 = -1;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// stw r10,112(r31)
	PPC_STORE_U32(ctx.r31.u32 + 112, ctx.r10.u32);
	// lwz r11,92(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 92);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x83142B98;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// stw r3,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r3.u32);
	// li r30,0
	ctx.r30.s64 = 0;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// lwz r3,0(r16)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r16.u32 + 0);
	// lwz r5,0(r27)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// bl 0x831b52b0
	ctx.lr = 0x83142BB4;
	sub_831B52B0(ctx, base);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// lhz r27,0(r3)
	ctx.r27.u64 = PPC_LOAD_U16(ctx.r3.u32 + 0);
	// b 0x83142c28
	goto loc_83142C28;
	// lis r4,-31846
	ctx.r4.s64 = -2087059456;
	// lis r5,-32228
	ctx.r5.s64 = -2112094208;
	// lwz r14,364(r31)
	ctx.r14.u64 = PPC_LOAD_U32(ctx.r31.u32 + 364);
	// lis r6,-32228
	ctx.r6.s64 = -2112094208;
	// lwz r26,348(r31)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r31.u32 + 348);
	// lis r7,-32228
	ctx.r7.s64 = -2112094208;
	// lwz r15,92(r31)
	ctx.r15.u64 = PPC_LOAD_U32(ctx.r31.u32 + 92);
	// lis r8,-32228
	ctx.r8.s64 = -2112094208;
	// lwz r25,108(r31)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r31.u32 + 108);
	// lis r9,-32228
	ctx.r9.s64 = -2112094208;
	// lwz r18,100(r31)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r31.u32 + 100);
	// lis r10,-32228
	ctx.r10.s64 = -2112094208;
	// lwz r29,88(r31)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r31.u32 + 88);
	// lis r11,-31827
	ctx.r11.s64 = -2085814272;
	// lwz r28,96(r31)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r31.u32 + 96);
	// lwz r27,112(r31)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r31.u32 + 112);
	// addi r20,r4,24592
	ctx.r20.s64 = ctx.r4.s64 + 24592;
	// lbz r30,80(r31)
	ctx.r30.u64 = PPC_LOAD_U8(ctx.r31.u32 + 80);
	// addi r23,r5,14776
	ctx.r23.s64 = ctx.r5.s64 + 14776;
	// addi r22,r6,14652
	ctx.r22.s64 = ctx.r6.s64 + 14652;
	// addi r21,r7,-5968
	ctx.r21.s64 = ctx.r7.s64 + -5968;
	// addi r24,r8,-5980
	ctx.r24.s64 = ctx.r8.s64 + -5980;
	// addi r19,r9,-5832
	ctx.r19.s64 = ctx.r9.s64 + -5832;
	// addi r17,r10,14464
	ctx.r17.s64 = ctx.r10.s64 + 14464;
	// addi r16,r11,-4568
	ctx.r16.s64 = ctx.r11.s64 + -4568;
loc_83142C28:
	// clrlwi. r11,r30,24
	ctx.r11.u64 = ctx.r30.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x83142cb0
	if (!ctx.cr0.eq) goto loc_83142CB0;
	// lhz r11,358(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 358);
	// mulli r11,r11,34
	ctx.r11.s64 = ctx.r11.s64 * 34;
	// add r11,r11,r27
	ctx.r11.u64 = ctx.r11.u64 + ctx.r27.u64;
	// rlwinm r11,r11,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// lhzx r30,r11,r20
	ctx.r30.u64 = PPC_LOAD_U16(ctx.r11.u32 + ctx.r20.u32);
	// clrlwi. r11,r30,30
	ctx.r11.u64 = ctx.r30.u32 & 0x3;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x83142c8c
	if (ctx.cr0.eq) goto loc_83142C8C;
	// addi r11,r31,128
	ctx.r11.s64 = ctx.r31.s64 + 128;
	// li r10,1
	ctx.r10.s64 = 1;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// stbx r10,r27,r11
	PPC_STORE_U8(ctx.r27.u32 + ctx.r11.u32, ctx.r10.u8);
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x83142C6C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// lwz r3,340(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 340);
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// rlwinm r7,r30,0,19,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 0) & 0x1FFC;
	// mr r8,r14
	ctx.r8.u64 = ctx.r14.u64;
	// bl 0x83141e68
	ctx.lr = 0x83142C88;
	sub_83141E68(ctx, base);
	// b 0x83142cb0
	goto loc_83142CB0;
loc_83142C8C:
	// mr r5,r19
	ctx.r5.u64 = ctx.r19.u64;
	// lwz r8,84(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 84);
	// li r10,0
	ctx.r10.s64 = 0;
	// mr r9,r15
	ctx.r9.u64 = ctx.r15.u64;
	// mr r7,r28
	ctx.r7.u64 = ctx.r28.u64;
	// li r6,95
	ctx.r6.s64 = 95;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mr r3,r14
	ctx.r3.u64 = ctx.r14.u64;
	// bl 0x83178838
	ctx.lr = 0x83142CB0;
	sub_83178838(ctx, base);
loc_83142CB0:
	// lwz r28,380(r31)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r31.u32 + 380);
loc_83142CB4:
	// lhz r29,358(r31)
	ctx.r29.u64 = PPC_LOAD_U16(ctx.r31.u32 + 358);
	// addi r18,r18,1
	ctx.r18.s64 = ctx.r18.s64 + 1;
	// lwz r27,340(r31)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r31.u32 + 340);
	// b 0x83142a38
	goto loc_83142A38;
loc_83142CC4:
	// clrlwi r10,r29,16
	ctx.r10.u64 = ctx.r29.u32 & 0xFFFF;
	// lis r11,-31846
	ctx.r11.s64 = -2087059456;
	// li r29,0
	ctx.r29.s64 = 0;
	// addi r30,r11,27992
	ctx.r30.s64 = ctx.r11.s64 + 27992;
	// mulli r28,r10,34
	ctx.r28.s64 = ctx.r10.s64 * 34;
loc_83142CD8:
	// add r11,r28,r29
	ctx.r11.u64 = ctx.r28.u64 + ctx.r29.u64;
	// rlwinm r11,r11,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// lhzx r11,r11,r20
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r11.u32 + ctx.r20.u32);
	// clrlwi. r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x83142d20
	if (ctx.cr0.eq) goto loc_83142D20;
	// addi r11,r31,128
	ctx.r11.s64 = ctx.r31.s64 + 128;
	// lbzx r11,r29,r11
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r29.u32 + ctx.r11.u32);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x83142d20
	if (!ctx.cr0.eq) goto loc_83142D20;
	// mr r5,r19
	ctx.r5.u64 = ctx.r19.u64;
	// lwz r7,0(r30)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// li r10,0
	ctx.r10.s64 = 0;
	// lwz r8,84(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 84);
	// mr r9,r15
	ctx.r9.u64 = ctx.r15.u64;
	// li r6,94
	ctx.r6.s64 = 94;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mr r3,r14
	ctx.r3.u64 = ctx.r14.u64;
	// bl 0x83178838
	ctx.lr = 0x83142D20;
	sub_83178838(ctx, base);
loc_83142D20:
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// cmplwi cr6,r29,34
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 34, ctx.xer);
	// blt cr6,0x83142cd8
	if (ctx.cr6.lt) goto loc_83142CD8;
loc_83142D30:
	// addi r1,r31,320
	ctx.r1.s64 = ctx.r31.s64 + 320;
	// b 0x833a01c0
	__restgprlr_14(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83142BC4"))) PPC_WEAK_FUNC(sub_83142BC4);
PPC_FUNC_IMPL(__imp__sub_83142BC4) {
	PPC_FUNC_PROLOGUE();
	// lis r4,-31846
	ctx.r4.s64 = -2087059456;
	// lis r5,-32228
	ctx.r5.s64 = -2112094208;
	// lwz r14,364(r31)
	ctx.r14.u64 = PPC_LOAD_U32(ctx.r31.u32 + 364);
	// lis r6,-32228
	ctx.r6.s64 = -2112094208;
	// lwz r26,348(r31)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r31.u32 + 348);
	// lis r7,-32228
	ctx.r7.s64 = -2112094208;
	// lwz r15,92(r31)
	ctx.r15.u64 = PPC_LOAD_U32(ctx.r31.u32 + 92);
	// lis r8,-32228
	ctx.r8.s64 = -2112094208;
	// lwz r25,108(r31)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r31.u32 + 108);
	// lis r9,-32228
	ctx.r9.s64 = -2112094208;
	// lwz r18,100(r31)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r31.u32 + 100);
	// lis r10,-32228
	ctx.r10.s64 = -2112094208;
	// lwz r29,88(r31)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r31.u32 + 88);
	// lis r11,-31827
	ctx.r11.s64 = -2085814272;
	// lwz r28,96(r31)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r31.u32 + 96);
	// lwz r27,112(r31)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r31.u32 + 112);
	// addi r20,r4,24592
	ctx.r20.s64 = ctx.r4.s64 + 24592;
	// lbz r30,80(r31)
	ctx.r30.u64 = PPC_LOAD_U8(ctx.r31.u32 + 80);
	// addi r23,r5,14776
	ctx.r23.s64 = ctx.r5.s64 + 14776;
	// addi r22,r6,14652
	ctx.r22.s64 = ctx.r6.s64 + 14652;
	// addi r21,r7,-5968
	ctx.r21.s64 = ctx.r7.s64 + -5968;
	// addi r24,r8,-5980
	ctx.r24.s64 = ctx.r8.s64 + -5980;
	// addi r19,r9,-5832
	ctx.r19.s64 = ctx.r9.s64 + -5832;
	// addi r17,r10,14464
	ctx.r17.s64 = ctx.r10.s64 + 14464;
	// addi r16,r11,-4568
	ctx.r16.s64 = ctx.r11.s64 + -4568;
	// clrlwi. r11,r30,24
	ctx.r11.u64 = ctx.r30.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x83142cb0
	if (!ctx.cr0.eq) goto loc_83142CB0;
	// lhz r11,358(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 358);
	// mulli r11,r11,34
	ctx.r11.s64 = ctx.r11.s64 * 34;
	// add r11,r11,r27
	ctx.r11.u64 = ctx.r11.u64 + ctx.r27.u64;
	// rlwinm r11,r11,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// lhzx r30,r11,r20
	ctx.r30.u64 = PPC_LOAD_U16(ctx.r11.u32 + ctx.r20.u32);
	// clrlwi. r11,r30,30
	ctx.r11.u64 = ctx.r30.u32 & 0x3;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x83142c8c
	if (ctx.cr0.eq) goto loc_83142C8C;
	// addi r11,r31,128
	ctx.r11.s64 = ctx.r31.s64 + 128;
	// li r10,1
	ctx.r10.s64 = 1;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// stbx r10,r27,r11
	PPC_STORE_U8(ctx.r27.u32 + ctx.r11.u32, ctx.r10.u8);
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x83142C6C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// lwz r3,340(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 340);
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// rlwinm r7,r30,0,19,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 0) & 0x1FFC;
	// mr r8,r14
	ctx.r8.u64 = ctx.r14.u64;
	// bl 0x83141e68
	ctx.lr = 0x83142C88;
	sub_83141E68(ctx, base);
	// b 0x83142cb0
	goto loc_83142CB0;
loc_83142C8C:
	// mr r5,r19
	ctx.r5.u64 = ctx.r19.u64;
	// lwz r8,84(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 84);
	// li r10,0
	ctx.r10.s64 = 0;
	// mr r9,r15
	ctx.r9.u64 = ctx.r15.u64;
	// mr r7,r28
	ctx.r7.u64 = ctx.r28.u64;
	// li r6,95
	ctx.r6.s64 = 95;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mr r3,r14
	ctx.r3.u64 = ctx.r14.u64;
	// bl 0x83178838
	ctx.lr = 0x83142CB0;
	sub_83178838(ctx, base);
loc_83142CB0:
	// lwz r28,380(r31)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r31.u32 + 380);
	// lhz r29,358(r31)
	ctx.r29.u64 = PPC_LOAD_U16(ctx.r31.u32 + 358);
	// addi r18,r18,1
	ctx.r18.s64 = ctx.r18.s64 + 1;
	// lwz r27,340(r31)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r31.u32 + 340);
	// b 0x83142a38
	// ERROR 83142A38
	return;
}

__attribute__((alias("__imp__sub_83142CC4"))) PPC_WEAK_FUNC(sub_83142CC4);
PPC_FUNC_IMPL(__imp__sub_83142CC4) {
	PPC_FUNC_PROLOGUE();
	// clrlwi r10,r29,16
	ctx.r10.u64 = ctx.r29.u32 & 0xFFFF;
	// lis r11,-31846
	ctx.r11.s64 = -2087059456;
	// li r29,0
	ctx.r29.s64 = 0;
	// addi r30,r11,27992
	ctx.r30.s64 = ctx.r11.s64 + 27992;
	// mulli r28,r10,34
	ctx.r28.s64 = ctx.r10.s64 * 34;
loc_83142CD8:
	// add r11,r28,r29
	ctx.r11.u64 = ctx.r28.u64 + ctx.r29.u64;
	// rlwinm r11,r11,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// lhzx r11,r11,r20
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r11.u32 + ctx.r20.u32);
	// clrlwi. r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x83142d20
	if (ctx.cr0.eq) goto loc_83142D20;
	// addi r11,r31,128
	ctx.r11.s64 = ctx.r31.s64 + 128;
	// lbzx r11,r29,r11
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r29.u32 + ctx.r11.u32);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x83142d20
	if (!ctx.cr0.eq) goto loc_83142D20;
	// mr r5,r19
	ctx.r5.u64 = ctx.r19.u64;
	// lwz r7,0(r30)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// li r10,0
	ctx.r10.s64 = 0;
	// lwz r8,84(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 84);
	// mr r9,r15
	ctx.r9.u64 = ctx.r15.u64;
	// li r6,94
	ctx.r6.s64 = 94;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mr r3,r14
	ctx.r3.u64 = ctx.r14.u64;
	// bl 0x83178838
	ctx.lr = 0x83142D20;
	sub_83178838(ctx, base);
loc_83142D20:
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// cmplwi cr6,r29,34
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 34, ctx.xer);
	// blt cr6,0x83142cd8
	if (ctx.cr6.lt) goto loc_83142CD8;
	// addi r1,r31,320
	ctx.r1.s64 = ctx.r31.s64 + 320;
	// b 0x833a01c0
	__restgprlr_14(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83142D38"))) PPC_WEAK_FUNC(sub_83142D38);
PPC_FUNC_IMPL(__imp__sub_83142D38) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lwz r25,17952(r26)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r26.u32 + 17952);
	// lwz r16,6876(r29)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r29.u32 + 6876);
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
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x833a7198
	ctx.lr = 0x83142D58;
	sub_833A7198(ctx, base);
	// lwz r25,17952(r26)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r26.u32 + 17952);
	// lwz r16,6876(r29)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r29.u32 + 6876);
	// addi r31,r12,-320
	ctx.r31.s64 = ctx.r12.s64 + -320;
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32228
	ctx.r11.s64 = -2112094208;
	// li r10,0
	ctx.r10.s64 = 0;
	// lwz r9,92(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 92);
	// addi r5,r11,-5832
	ctx.r5.s64 = ctx.r11.s64 + -5832;
	// lwz r8,84(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 84);
	// li r6,95
	ctx.r6.s64 = 95;
	// lwz r7,96(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 96);
	// lwz r4,348(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 348);
	// lwz r3,364(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 364);
	// bl 0x83178838
	ctx.lr = 0x83142D98;
	sub_83178838(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// li r11,1
	ctx.r11.s64 = 1;
	// lis r3,-31980
	ctx.r3.s64 = -2095841280;
	// stb r11,80(r31)
	PPC_STORE_U8(ctx.r31.u32 + 80, ctx.r11.u8);
	// addi r3,r3,11204
	ctx.r3.s64 = ctx.r3.s64 + 11204;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// b 0x833a01c0
	__restgprlr_14(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83142D40"))) PPC_WEAK_FUNC(sub_83142D40);
PPC_FUNC_IMPL(__imp__sub_83142D40) {
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
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x833a7198
	ctx.lr = 0x83142D58;
	sub_833A7198(ctx, base);
}

__attribute__((alias("__imp__sub_83142D60"))) PPC_WEAK_FUNC(sub_83142D60);
PPC_FUNC_IMPL(__imp__sub_83142D60) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// addi r31,r12,-320
	ctx.r31.s64 = ctx.r12.s64 + -320;
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32228
	ctx.r11.s64 = -2112094208;
	// li r10,0
	ctx.r10.s64 = 0;
	// lwz r9,92(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 92);
	// addi r5,r11,-5832
	ctx.r5.s64 = ctx.r11.s64 + -5832;
	// lwz r8,84(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 84);
	// li r6,95
	ctx.r6.s64 = 95;
	// lwz r7,96(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 96);
	// lwz r4,348(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 348);
	// lwz r3,364(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 364);
	// bl 0x83178838
	ctx.lr = 0x83142D98;
	sub_83178838(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// li r11,1
	ctx.r11.s64 = 1;
	// lis r3,-31980
	ctx.r3.s64 = -2095841280;
	// stb r11,80(r31)
	PPC_STORE_U8(ctx.r31.u32 + 80, ctx.r11.u8);
	// addi r3,r3,11204
	ctx.r3.s64 = ctx.r3.s64 + 11204;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// b 0x833a01c0
	__restgprlr_14(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83142DB8"))) PPC_WEAK_FUNC(sub_83142DB8);
PPC_FUNC_IMPL(__imp__sub_83142DB8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x833a01ac
	ctx.lr = 0x83142DC0;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31827
	ctx.r11.s64 = -2085814272;
	// addi r31,r11,-4576
	ctx.r31.s64 = ctx.r11.s64 + -4576;
	// lwz r30,4(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x83142de8
	if (ctx.cr6.eq) goto loc_83142DE8;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x830fcf30
	ctx.lr = 0x83142DE0;
	sub_830FCF30(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x830dd3e0
	ctx.lr = 0x83142DE8;
	sub_830DD3E0(ctx, base);
loc_83142DE8:
	// lis r30,-31827
	ctx.r30.s64 = -2085814272;
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// stb r10,0(r31)
	PPC_STORE_U8(ctx.r31.u32 + 0, ctx.r10.u8);
	// lwz r31,-4568(r30)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r30.u32 + -4568);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x83142e18
	if (ctx.cr6.eq) goto loc_83142E18;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83143920
	ctx.lr = 0x83142E10;
	sub_83143920(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x830dd3e0
	ctx.lr = 0x83142E18;
	sub_830DD3E0(ctx, base);
loc_83142E18:
	// lis r31,-31827
	ctx.r31.s64 = -2085814272;
	// lwz r29,-4564(r31)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r31.u32 + -4564);
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x83142e38
	if (ctx.cr6.eq) goto loc_83142E38;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x83143920
	ctx.lr = 0x83142E30;
	sub_83143920(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x830dd3e0
	ctx.lr = 0x83142E38;
	sub_830DD3E0(ctx, base);
loc_83142E38:
	// lis r8,-31827
	ctx.r8.s64 = -2085814272;
	// lis r7,-31827
	ctx.r7.s64 = -2085814272;
	// lis r6,-31827
	ctx.r6.s64 = -2085814272;
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,0
	ctx.r10.s64 = 0;
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r11,-4564(r31)
	PPC_STORE_U32(ctx.r31.u32 + -4564, ctx.r11.u32);
	// stw r10,-4568(r30)
	PPC_STORE_U32(ctx.r30.u32 + -4568, ctx.r10.u32);
	// stw r9,-4552(r8)
	PPC_STORE_U32(ctx.r8.u32 + -4552, ctx.r9.u32);
	// stw r11,-4556(r7)
	PPC_STORE_U32(ctx.r7.u32 + -4556, ctx.r11.u32);
	// stw r10,-4560(r6)
	PPC_STORE_U32(ctx.r6.u32 + -4560, ctx.r10.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x833a01fc
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83142E6C"))) PPC_WEAK_FUNC(sub_83142E6C);
PPC_FUNC_IMPL(__imp__sub_83142E6C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83142E70"))) PPC_WEAK_FUNC(sub_83142E70);
PPC_FUNC_IMPL(__imp__sub_83142E70) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lwz r25,17952(r26)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r26.u32 + 17952);
	// lwz r16,6984(r29)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r29.u32 + 6984);
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x833a01ac
	ctx.lr = 0x83142E80;
	__savegprlr_29(ctx, base);
	// addi r31,r1,-128
	ctx.r31.s64 = ctx.r1.s64 + -128;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31827
	ctx.r11.s64 = -2085814272;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// addi r30,r11,-4576
	ctx.r30.s64 = ctx.r11.s64 + -4576;
	// lbz r11,-4576(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + -4576);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x83142f48
	if (!ctx.cr0.eq) goto loc_83142F48;
	// lwz r4,4(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// bne cr6,0x83142f00
	if (!ctx.cr6.eq) goto loc_83142F00;
	// lis r11,-31827
	ctx.r11.s64 = -2085814272;
	// addi r3,r31,80
	ctx.r3.s64 = ctx.r31.s64 + 80;
	// lwz r4,-5080(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + -5080);
	// bl 0x830fcf80
	ctx.lr = 0x83142EBC;
	sub_830FCF80(ctx, base);
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x83142ef4
	if (!ctx.cr6.eq) goto loc_83142EF4;
	// li r3,4
	ctx.r3.s64 = 4;
	// bl 0x830dd340
	ctx.lr = 0x83142ED0;
	sub_830DD340(ctx, base);
	// stw r3,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r3.u32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x83142eec
	if (ctx.cr0.eq) goto loc_83142EEC;
	// lis r11,-31827
	ctx.r11.s64 = -2085814272;
	// lwz r4,-5084(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + -5084);
	// bl 0x830fcef0
	ctx.lr = 0x83142EE8;
	sub_830FCEF0(ctx, base);
	// b 0x83142ef0
	goto loc_83142EF0;
loc_83142EEC:
	// li r3,0
	ctx.r3.s64 = 0;
loc_83142EF0:
	// stw r3,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r3.u32);
loc_83142EF4:
	// addi r3,r31,80
	ctx.r3.s64 = ctx.r31.s64 + 80;
	// bl 0x830fcfb8
	ctx.lr = 0x83142EFC;
	sub_830FCFB8(ctx, base);
	// lwz r4,4(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
loc_83142F00:
	// addi r3,r31,84
	ctx.r3.s64 = ctx.r31.s64 + 84;
	// bl 0x830fcf80
	ctx.lr = 0x83142F08;
	sub_830FCF80(ctx, base);
	// lbz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 0);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x83142f40
	if (!ctx.cr0.eq) goto loc_83142F40;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x83142240
	ctx.lr = 0x83142F1C;
	sub_83142240(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x83142308
	ctx.lr = 0x83142F24;
	sub_83142308(ctx, base);
	// lis r11,-31980
	ctx.r11.s64 = -2095841280;
	// lis r10,-31827
	ctx.r10.s64 = -2085814272;
	// addi r4,r11,11704
	ctx.r4.s64 = ctx.r11.s64 + 11704;
	// addi r3,r10,-4548
	ctx.r3.s64 = ctx.r10.s64 + -4548;
	// bl 0x830ff598
	ctx.lr = 0x83142F38;
	sub_830FF598(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// stb r11,0(r30)
	PPC_STORE_U8(ctx.r30.u32 + 0, ctx.r11.u8);
loc_83142F40:
	// addi r3,r31,84
	ctx.r3.s64 = ctx.r31.s64 + 84;
	// bl 0x830fcfb8
	ctx.lr = 0x83142F48;
	sub_830FCFB8(ctx, base);
loc_83142F48:
	// addi r1,r31,128
	ctx.r1.s64 = ctx.r31.s64 + 128;
	// b 0x833a01fc
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83142E78"))) PPC_WEAK_FUNC(sub_83142E78);
PPC_FUNC_IMPL(__imp__sub_83142E78) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x833a01ac
	ctx.lr = 0x83142E80;
	__savegprlr_29(ctx, base);
	// addi r31,r1,-128
	ctx.r31.s64 = ctx.r1.s64 + -128;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31827
	ctx.r11.s64 = -2085814272;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// addi r30,r11,-4576
	ctx.r30.s64 = ctx.r11.s64 + -4576;
	// lbz r11,-4576(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + -4576);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x83142f48
	if (!ctx.cr0.eq) goto loc_83142F48;
	// lwz r4,4(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// bne cr6,0x83142f00
	if (!ctx.cr6.eq) goto loc_83142F00;
	// lis r11,-31827
	ctx.r11.s64 = -2085814272;
	// addi r3,r31,80
	ctx.r3.s64 = ctx.r31.s64 + 80;
	// lwz r4,-5080(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + -5080);
	// bl 0x830fcf80
	ctx.lr = 0x83142EBC;
	sub_830FCF80(ctx, base);
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x83142ef4
	if (!ctx.cr6.eq) goto loc_83142EF4;
	// li r3,4
	ctx.r3.s64 = 4;
	// bl 0x830dd340
	ctx.lr = 0x83142ED0;
	sub_830DD340(ctx, base);
	// stw r3,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r3.u32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x83142eec
	if (ctx.cr0.eq) goto loc_83142EEC;
	// lis r11,-31827
	ctx.r11.s64 = -2085814272;
	// lwz r4,-5084(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + -5084);
	// bl 0x830fcef0
	ctx.lr = 0x83142EE8;
	sub_830FCEF0(ctx, base);
	// b 0x83142ef0
	goto loc_83142EF0;
loc_83142EEC:
	// li r3,0
	ctx.r3.s64 = 0;
loc_83142EF0:
	// stw r3,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r3.u32);
loc_83142EF4:
	// addi r3,r31,80
	ctx.r3.s64 = ctx.r31.s64 + 80;
	// bl 0x830fcfb8
	ctx.lr = 0x83142EFC;
	sub_830FCFB8(ctx, base);
	// lwz r4,4(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
loc_83142F00:
	// addi r3,r31,84
	ctx.r3.s64 = ctx.r31.s64 + 84;
	// bl 0x830fcf80
	ctx.lr = 0x83142F08;
	sub_830FCF80(ctx, base);
	// lbz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 0);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x83142f40
	if (!ctx.cr0.eq) goto loc_83142F40;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x83142240
	ctx.lr = 0x83142F1C;
	sub_83142240(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x83142308
	ctx.lr = 0x83142F24;
	sub_83142308(ctx, base);
	// lis r11,-31980
	ctx.r11.s64 = -2095841280;
	// lis r10,-31827
	ctx.r10.s64 = -2085814272;
	// addi r4,r11,11704
	ctx.r4.s64 = ctx.r11.s64 + 11704;
	// addi r3,r10,-4548
	ctx.r3.s64 = ctx.r10.s64 + -4548;
	// bl 0x830ff598
	ctx.lr = 0x83142F38;
	sub_830FF598(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// stb r11,0(r30)
	PPC_STORE_U8(ctx.r30.u32 + 0, ctx.r11.u8);
loc_83142F40:
	// addi r3,r31,84
	ctx.r3.s64 = ctx.r31.s64 + 84;
	// bl 0x830fcfb8
	ctx.lr = 0x83142F48;
	sub_830FCFB8(ctx, base);
loc_83142F48:
	// addi r1,r31,128
	ctx.r1.s64 = ctx.r31.s64 + 128;
	// b 0x833a01fc
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83142F50"))) PPC_WEAK_FUNC(sub_83142F50);
PPC_FUNC_IMPL(__imp__sub_83142F50) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// addi r31,r12,-128
	ctx.r31.s64 = ctx.r12.s64 + -128;
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r3,r31,80
	ctx.r3.s64 = ctx.r31.s64 + 80;
	// bl 0x830fcfb8
	ctx.lr = 0x83142F68;
	sub_830FCFB8(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83142F78"))) PPC_WEAK_FUNC(sub_83142F78);
PPC_FUNC_IMPL(__imp__sub_83142F78) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// addi r31,r12,-128
	ctx.r31.s64 = ctx.r12.s64 + -128;
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r3,84(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 84);
	// bl 0x830dd3e0
	ctx.lr = 0x83142F90;
	sub_830DD3E0(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

