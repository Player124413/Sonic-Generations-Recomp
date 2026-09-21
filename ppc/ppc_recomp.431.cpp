#include "ppc_recomp_shared.h"

__attribute__((alias("__imp__sub_8328E858"))) PPC_WEAK_FUNC(sub_8328E858);
PPC_FUNC_IMPL(__imp__sub_8328E858) {
	PPC_FUNC_PROLOGUE();
	// lwz r10,28(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 28);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// mr r3,r5
	ctx.r3.u64 = ctx.r5.u64;
	// lbz r6,22(r11)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r11.u32 + 22);
	// lbz r5,21(r11)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r11.u32 + 21);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// lbz r4,20(r11)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r11.u32 + 20);
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_8328E880"))) PPC_WEAK_FUNC(sub_8328E880);
PPC_FUNC_IMPL(__imp__sub_8328E880) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8328E884"))) PPC_WEAK_FUNC(sub_8328E884);
PPC_FUNC_IMPL(__imp__sub_8328E884) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8328E888"))) PPC_WEAK_FUNC(sub_8328E888);
PPC_FUNC_IMPL(__imp__sub_8328E888) {
	PPC_FUNC_PROLOGUE();
	// lwz r10,32(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// mr r3,r5
	ctx.r3.u64 = ctx.r5.u64;
	// lbz r6,22(r11)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r11.u32 + 22);
	// lbz r5,21(r11)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r11.u32 + 21);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// lbz r4,20(r11)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r11.u32 + 20);
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_8328E8B0"))) PPC_WEAK_FUNC(sub_8328E8B0);
PPC_FUNC_IMPL(__imp__sub_8328E8B0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8328E8B4"))) PPC_WEAK_FUNC(sub_8328E8B4);
PPC_FUNC_IMPL(__imp__sub_8328E8B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8328E8B8"))) PPC_WEAK_FUNC(sub_8328E8B8);
PPC_FUNC_IMPL(__imp__sub_8328E8B8) {
	PPC_FUNC_PROLOGUE();
	// b 0x8328e718
	sub_8328E718(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8328E8BC"))) PPC_WEAK_FUNC(sub_8328E8BC);
PPC_FUNC_IMPL(__imp__sub_8328E8BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8328E8C0"))) PPC_WEAK_FUNC(sub_8328E8C0);
PPC_FUNC_IMPL(__imp__sub_8328E8C0) {
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
	// bl 0x8328e760
	ctx.lr = 0x8328E8D0;
	sub_8328E760(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8328e8f4
	if (ctx.cr0.eq) goto loc_8328E8F4;
	// bl 0x8328e7a0
	ctx.lr = 0x8328E8DC;
	sub_8328E7A0(ctx, base);
	// lis r10,-31822
	ctx.r10.s64 = -2085486592;
	// li r9,1
	ctx.r9.s64 = 1;
	// lwz r11,-896(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -896);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,-896(r10)
	PPC_STORE_U32(ctx.r10.u32 + -896, ctx.r11.u32);
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
loc_8328E8F4:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8328E904"))) PPC_WEAK_FUNC(sub_8328E904);
PPC_FUNC_IMPL(__imp__sub_8328E904) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8328E908"))) PPC_WEAK_FUNC(sub_8328E908);
PPC_FUNC_IMPL(__imp__sub_8328E908) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32219
	ctx.r11.s64 = -2111504384;
	// lis r10,-31827
	ctx.r10.s64 = -2085814272;
	// addi r11,r11,22848
	ctx.r11.s64 = ctx.r11.s64 + 22848;
	// stw r11,31304(r10)
	PPC_STORE_U32(ctx.r10.u32 + 31304, ctx.r11.u32);
	// b 0x8328dc58
	sub_8328DC58(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8328E91C"))) PPC_WEAK_FUNC(sub_8328E91C);
PPC_FUNC_IMPL(__imp__sub_8328E91C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8328E920"))) PPC_WEAK_FUNC(sub_8328E920);
PPC_FUNC_IMPL(__imp__sub_8328E920) {
	PPC_FUNC_PROLOGUE();
	// b 0x832838c0
	sub_832838C0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8328E924"))) PPC_WEAK_FUNC(sub_8328E924);
PPC_FUNC_IMPL(__imp__sub_8328E924) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8328E928"))) PPC_WEAK_FUNC(sub_8328E928);
PPC_FUNC_IMPL(__imp__sub_8328E928) {
	PPC_FUNC_PROLOGUE();
	// b 0x832837e8
	sub_832837E8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8328E92C"))) PPC_WEAK_FUNC(sub_8328E92C);
PPC_FUNC_IMPL(__imp__sub_8328E92C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8328E930"))) PPC_WEAK_FUNC(sub_8328E930);
PPC_FUNC_IMPL(__imp__sub_8328E930) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x833a01a4
	ctx.lr = 0x8328E938;
	__savegprlr_27(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,16(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r29,4(r3)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// cmpwi cr6,r11,202
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 202, ctx.xer);
	// bge cr6,0x8328e990
	if (!ctx.cr6.lt) goto loc_8328E990;
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// li r30,0
	ctx.r30.s64 = 0;
	// bl 0x83285370
	ctx.lr = 0x8328E960;
	sub_83285370(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x8328e970
	if (!ctx.cr0.eq) goto loc_8328E970;
	// li r11,32
	ctx.r11.s64 = 32;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
loc_8328E970:
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83285398
	ctx.lr = 0x8328E97C;
	sub_83285398(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x8328e9a4
	if (!ctx.cr0.eq) goto loc_8328E9A4;
	// li r11,16
	ctx.r11.s64 = 16;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// b 0x8328e9a4
	goto loc_8328E9A4;
loc_8328E990:
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// li r30,1
	ctx.r30.s64 = 1;
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
loc_8328E9A4:
	// rlwinm r11,r28,0,24,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 0) & 0xE0;
	// li r27,0
	ctx.r27.s64 = 0;
	// clrlwi r10,r28,27
	ctx.r10.u64 = ctx.r28.u32 & 0x1F;
	// cmplwi cr6,r11,160
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 160, ctx.xer);
	// beq cr6,0x8328eab8
	if (ctx.cr6.eq) goto loc_8328EAB8;
	// cmplwi cr6,r11,192
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 192, ctx.xer);
	// beq cr6,0x8328ea58
	if (ctx.cr6.eq) goto loc_8328EA58;
	// cmplwi cr6,r11,224
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 224, ctx.xer);
	// bne cr6,0x8328ea00
	if (!ctx.cr6.eq) goto loc_8328EA00;
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// beq cr6,0x8328ea0c
	if (ctx.cr6.eq) goto loc_8328EA0C;
	// addi r11,r10,15
	ctx.r11.s64 = ctx.r10.s64 + 15;
	// rlwinm r11,r11,6,0,25
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 6) & 0xFFFFFFC0;
loc_8328E9D8:
	// li r4,1
	ctx.r4.s64 = 1;
	// li r3,0
	ctx.r3.s64 = 0;
	// add r31,r11,r29
	ctx.r31.u64 = ctx.r11.u64 + ctx.r29.u64;
	// bl 0x83294578
	ctx.lr = 0x8328E9E8;
	sub_83294578(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83294518
	ctx.lr = 0x8328E9F4;
	sub_83294518(ctx, base);
	// cmplw cr6,r3,r28
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r28.u32, ctx.xer);
	// bne cr6,0x8328ea00
	if (!ctx.cr6.eq) goto loc_8328EA00;
loc_8328E9FC:
	// mr r27,r31
	ctx.r27.u64 = ctx.r31.u64;
loc_8328EA00:
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x833a01f4
	__restgprlr_27(ctx, base);
	return;
loc_8328EA0C:
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// addi r31,r29,960
	ctx.r31.s64 = ctx.r29.s64 + 960;
	// li r30,0
	ctx.r30.s64 = 0;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x8328ea00
	if (!ctx.cr6.gt) goto loc_8328EA00;
loc_8328EA20:
	// li r4,1
	ctx.r4.s64 = 1;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x83294578
	ctx.lr = 0x8328EA2C;
	sub_83294578(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83294518
	ctx.lr = 0x8328EA38;
	sub_83294518(ctx, base);
	// cmplw cr6,r3,r28
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r28.u32, ctx.xer);
	// beq cr6,0x8328e9fc
	if (ctx.cr6.eq) goto loc_8328E9FC;
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// addi r31,r31,64
	ctx.r31.s64 = ctx.r31.s64 + 64;
	// cmpw cr6,r30,r11
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x8328ea20
	if (ctx.cr6.lt) goto loc_8328EA20;
	// b 0x8328ea00
	goto loc_8328EA00;
loc_8328EA58:
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// beq cr6,0x8328ea6c
	if (ctx.cr6.eq) goto loc_8328EA6C;
	// addi r11,r10,28
	ctx.r11.s64 = ctx.r10.s64 + 28;
	// rlwinm r11,r11,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// b 0x8328e9d8
	goto loc_8328E9D8;
loc_8328EA6C:
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// addi r31,r29,448
	ctx.r31.s64 = ctx.r29.s64 + 448;
	// li r30,0
	ctx.r30.s64 = 0;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x8328ea00
	if (!ctx.cr6.gt) goto loc_8328EA00;
loc_8328EA80:
	// li r4,1
	ctx.r4.s64 = 1;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x83294578
	ctx.lr = 0x8328EA8C;
	sub_83294578(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83294518
	ctx.lr = 0x8328EA98;
	sub_83294518(ctx, base);
	// cmplw cr6,r3,r28
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r28.u32, ctx.xer);
	// beq cr6,0x8328e9fc
	if (ctx.cr6.eq) goto loc_8328E9FC;
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// addi r31,r31,16
	ctx.r31.s64 = ctx.r31.s64 + 16;
	// cmpw cr6,r30,r11
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x8328ea80
	if (ctx.cr6.lt) goto loc_8328EA80;
	// b 0x8328ea00
	goto loc_8328EA00;
loc_8328EAB8:
	// addi r31,r29,1984
	ctx.r31.s64 = ctx.r29.s64 + 1984;
	// li r30,0
	ctx.r30.s64 = 0;
loc_8328EAC0:
	// li r4,1
	ctx.r4.s64 = 1;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x83294578
	ctx.lr = 0x8328EACC;
	sub_83294578(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83294518
	ctx.lr = 0x8328EAD8;
	sub_83294518(ctx, base);
	// cmplw cr6,r3,r28
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r28.u32, ctx.xer);
	// beq cr6,0x8328eaf4
	if (ctx.cr6.eq) goto loc_8328EAF4;
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// addi r31,r31,32
	ctx.r31.s64 = ctx.r31.s64 + 32;
	// cmpwi cr6,r30,1
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 1, ctx.xer);
	// blt cr6,0x8328eac0
	if (ctx.cr6.lt) goto loc_8328EAC0;
	// b 0x8328eaf8
	goto loc_8328EAF8;
loc_8328EAF4:
	// mr r27,r31
	ctx.r27.u64 = ctx.r31.u64;
loc_8328EAF8:
	// addi r31,r29,2016
	ctx.r31.s64 = ctx.r29.s64 + 2016;
	// li r30,0
	ctx.r30.s64 = 0;
loc_8328EB00:
	// li r4,1
	ctx.r4.s64 = 1;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x83294578
	ctx.lr = 0x8328EB0C;
	sub_83294578(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83294518
	ctx.lr = 0x8328EB18;
	sub_83294518(ctx, base);
	// cmplw cr6,r3,r28
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r28.u32, ctx.xer);
	// beq cr6,0x8328e9fc
	if (ctx.cr6.eq) goto loc_8328E9FC;
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// addi r31,r31,32
	ctx.r31.s64 = ctx.r31.s64 + 32;
	// cmpwi cr6,r30,1
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 1, ctx.xer);
	// blt cr6,0x8328eb00
	if (ctx.cr6.lt) goto loc_8328EB00;
	// b 0x8328ea00
	goto loc_8328EA00;
}

__attribute__((alias("__imp__sub_8328EB34"))) PPC_WEAK_FUNC(sub_8328EB34);
PPC_FUNC_IMPL(__imp__sub_8328EB34) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8328EB38"))) PPC_WEAK_FUNC(sub_8328EB38);
PPC_FUNC_IMPL(__imp__sub_8328EB38) {
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
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// li r5,64
	ctx.r5.s64 = 64;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x833a2b30
	ctx.lr = 0x8328EB64;
	sub_833A2B30(ctx, base);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// li r5,64
	ctx.r5.s64 = 64;
	// addi r4,r11,64
	ctx.r4.s64 = ctx.r11.s64 + 64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x833a1390
	ctx.lr = 0x8328EB78;
	sub_833A1390(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
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

__attribute__((alias("__imp__sub_8328EB94"))) PPC_WEAK_FUNC(sub_8328EB94);
PPC_FUNC_IMPL(__imp__sub_8328EB94) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8328EB98"))) PPC_WEAK_FUNC(sub_8328EB98);
PPC_FUNC_IMPL(__imp__sub_8328EB98) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x833a01ac
	ctx.lr = 0x8328EBA0;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r4,57
	ctx.r4.s64 = 57;
	// li r3,56
	ctx.r3.s64 = 56;
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// stw r11,0(r5)
	PPC_STORE_U32(ctx.r5.u32 + 0, ctx.r11.u32);
	// bl 0x83294578
	ctx.lr = 0x8328EBC8;
	sub_83294578(ctx, base);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r11,56
	ctx.r3.s64 = ctx.r11.s64 + 56;
	// bl 0x83294518
	ctx.lr = 0x8328EBD8;
	sub_83294518(ctx, base);
	// stw r3,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r3.u32);
	// li r4,58
	ctx.r4.s64 = 58;
	// li r3,57
	ctx.r3.s64 = 57;
	// bl 0x83294578
	ctx.lr = 0x8328EBE8;
	sub_83294578(ctx, base);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r11,57
	ctx.r3.s64 = ctx.r11.s64 + 57;
	// bl 0x83294518
	ctx.lr = 0x8328EBF8;
	sub_83294518(ctx, base);
	// stw r3,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r3.u32);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x833a01fc
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8328EC08"))) PPC_WEAK_FUNC(sub_8328EC08);
PPC_FUNC_IMPL(__imp__sub_8328EC08) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x833a01ac
	ctx.lr = 0x8328EC10;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r4,59
	ctx.r4.s64 = 59;
	// li r3,58
	ctx.r3.s64 = 58;
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// stw r11,0(r5)
	PPC_STORE_U32(ctx.r5.u32 + 0, ctx.r11.u32);
	// bl 0x83294578
	ctx.lr = 0x8328EC38;
	sub_83294578(ctx, base);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r11,58
	ctx.r3.s64 = ctx.r11.s64 + 58;
	// bl 0x83294518
	ctx.lr = 0x8328EC48;
	sub_83294518(ctx, base);
	// stw r3,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r3.u32);
	// li r4,60
	ctx.r4.s64 = 60;
	// li r3,59
	ctx.r3.s64 = 59;
	// bl 0x83294578
	ctx.lr = 0x8328EC58;
	sub_83294578(ctx, base);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r11,59
	ctx.r3.s64 = ctx.r11.s64 + 59;
	// bl 0x83294518
	ctx.lr = 0x8328EC68;
	sub_83294518(ctx, base);
	// stw r3,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r3.u32);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x833a01fc
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8328EC78"))) PPC_WEAK_FUNC(sub_8328EC78);
PPC_FUNC_IMPL(__imp__sub_8328EC78) {
	PPC_FUNC_PROLOGUE();
	// li r11,0
	ctx.r11.s64 = 0;
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8328EC88"))) PPC_WEAK_FUNC(sub_8328EC88);
PPC_FUNC_IMPL(__imp__sub_8328EC88) {
	PPC_FUNC_PROLOGUE();
	// li r11,2
	ctx.r11.s64 = 2;
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8328EC98"))) PPC_WEAK_FUNC(sub_8328EC98);
PPC_FUNC_IMPL(__imp__sub_8328EC98) {
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
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r4,20
	ctx.r4.s64 = 20;
	// li r3,18
	ctx.r3.s64 = 18;
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
	// bl 0x83294578
	ctx.lr = 0x8328ECC8;
	sub_83294578(ctx, base);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r11,18
	ctx.r3.s64 = ctx.r11.s64 + 18;
	// bl 0x83294518
	ctx.lr = 0x8328ECD8;
	sub_83294518(ctx, base);
	// stw r3,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r3.u32);
	// li r3,1
	ctx.r3.s64 = 1;
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

__attribute__((alias("__imp__sub_8328ECF8"))) PPC_WEAK_FUNC(sub_8328ECF8);
PPC_FUNC_IMPL(__imp__sub_8328ECF8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lbz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 0);
	// li r10,0
	ctx.r10.s64 = 0;
	// extsb r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	// b 0x8328ed3c
	goto loc_8328ED3C;
loc_8328ED08:
	// cmpwi cr6,r11,32
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 32, ctx.xer);
	// beq cr6,0x8328ed44
	if (ctx.cr6.eq) goto loc_8328ED44;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8328ed44
	if (ctx.cr6.eq) goto loc_8328ED44;
	// cmpwi cr6,r11,48
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 48, ctx.xer);
	// blt cr6,0x8328ed44
	if (ctx.cr6.lt) goto loc_8328ED44;
	// cmpwi cr6,r11,57
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 57, ctx.xer);
	// bgt cr6,0x8328ed44
	if (ctx.cr6.gt) goto loc_8328ED44;
	// mulli r10,r10,10
	ctx.r10.s64 = ctx.r10.s64 * 10;
	// lbzu r9,1(r3)
	ea = 1 + ctx.r3.u32;
	ctx.r9.u64 = PPC_LOAD_U8(ea);
	ctx.r3.u32 = ea;
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// extsb r11,r9
	ctx.r11.s64 = ctx.r9.s8;
	// addi r10,r10,-48
	ctx.r10.s64 = ctx.r10.s64 + -48;
loc_8328ED3C:
	// cmpwi cr6,r11,46
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 46, ctx.xer);
	// bne cr6,0x8328ed08
	if (!ctx.cr6.eq) goto loc_8328ED08;
loc_8328ED44:
	// stw r10,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8328ED4C"))) PPC_WEAK_FUNC(sub_8328ED4C);
PPC_FUNC_IMPL(__imp__sub_8328ED4C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8328ED50"))) PPC_WEAK_FUNC(sub_8328ED50);
PPC_FUNC_IMPL(__imp__sub_8328ED50) {
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
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r4,193
	ctx.r4.s64 = 193;
	// li r3,192
	ctx.r3.s64 = 192;
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
	// bl 0x83294578
	ctx.lr = 0x8328ED80;
	sub_83294578(ctx, base);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r11,192
	ctx.r3.s64 = ctx.r11.s64 + 192;
	// bl 0x83294518
	ctx.lr = 0x8328ED90;
	sub_83294518(ctx, base);
	// stw r3,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r3.u32);
	// li r3,1
	ctx.r3.s64 = 1;
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

__attribute__((alias("__imp__sub_8328EDB0"))) PPC_WEAK_FUNC(sub_8328EDB0);
PPC_FUNC_IMPL(__imp__sub_8328EDB0) {
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
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r4,194
	ctx.r4.s64 = 194;
	// li r3,193
	ctx.r3.s64 = 193;
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
	// bl 0x83294578
	ctx.lr = 0x8328EDE0;
	sub_83294578(ctx, base);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r11,193
	ctx.r3.s64 = ctx.r11.s64 + 193;
	// bl 0x83294518
	ctx.lr = 0x8328EDF0;
	sub_83294518(ctx, base);
	// stw r3,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r3.u32);
	// li r3,1
	ctx.r3.s64 = 1;
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

__attribute__((alias("__imp__sub_8328EE10"))) PPC_WEAK_FUNC(sub_8328EE10);
PPC_FUNC_IMPL(__imp__sub_8328EE10) {
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
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r4,195
	ctx.r4.s64 = 195;
	// li r3,194
	ctx.r3.s64 = 194;
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
	// bl 0x83294578
	ctx.lr = 0x8328EE40;
	sub_83294578(ctx, base);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r11,194
	ctx.r3.s64 = ctx.r11.s64 + 194;
	// bl 0x83294518
	ctx.lr = 0x8328EE50;
	sub_83294518(ctx, base);
	// stw r3,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r3.u32);
	// li r3,1
	ctx.r3.s64 = 1;
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

__attribute__((alias("__imp__sub_8328EE70"))) PPC_WEAK_FUNC(sub_8328EE70);
PPC_FUNC_IMPL(__imp__sub_8328EE70) {
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
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r4,196
	ctx.r4.s64 = 196;
	// li r3,195
	ctx.r3.s64 = 195;
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
	// bl 0x83294578
	ctx.lr = 0x8328EEA0;
	sub_83294578(ctx, base);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r11,195
	ctx.r3.s64 = ctx.r11.s64 + 195;
	// bl 0x83294518
	ctx.lr = 0x8328EEB0;
	sub_83294518(ctx, base);
	// stw r3,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r3.u32);
	// li r3,1
	ctx.r3.s64 = 1;
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

__attribute__((alias("__imp__sub_8328EED0"))) PPC_WEAK_FUNC(sub_8328EED0);
PPC_FUNC_IMPL(__imp__sub_8328EED0) {
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
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r4,200
	ctx.r4.s64 = 200;
	// li r3,196
	ctx.r3.s64 = 196;
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
	// bl 0x83294578
	ctx.lr = 0x8328EF00;
	sub_83294578(ctx, base);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r11,196
	ctx.r3.s64 = ctx.r11.s64 + 196;
	// bl 0x83294518
	ctx.lr = 0x8328EF10;
	sub_83294518(ctx, base);
	// stw r3,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r3.u32);
	// li r3,1
	ctx.r3.s64 = 1;
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

__attribute__((alias("__imp__sub_8328EF30"))) PPC_WEAK_FUNC(sub_8328EF30);
PPC_FUNC_IMPL(__imp__sub_8328EF30) {
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
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r4,204
	ctx.r4.s64 = 204;
	// li r3,200
	ctx.r3.s64 = 200;
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
	// bl 0x83294578
	ctx.lr = 0x8328EF60;
	sub_83294578(ctx, base);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r11,200
	ctx.r3.s64 = ctx.r11.s64 + 200;
	// bl 0x83294518
	ctx.lr = 0x8328EF70;
	sub_83294518(ctx, base);
	// stw r3,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r3.u32);
	// li r3,1
	ctx.r3.s64 = 1;
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

__attribute__((alias("__imp__sub_8328EF90"))) PPC_WEAK_FUNC(sub_8328EF90);
PPC_FUNC_IMPL(__imp__sub_8328EF90) {
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
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r4,208
	ctx.r4.s64 = 208;
	// li r3,204
	ctx.r3.s64 = 204;
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
	// bl 0x83294578
	ctx.lr = 0x8328EFC0;
	sub_83294578(ctx, base);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r11,204
	ctx.r3.s64 = ctx.r11.s64 + 204;
	// bl 0x83294518
	ctx.lr = 0x8328EFD0;
	sub_83294518(ctx, base);
	// stw r3,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r3.u32);
	// li r3,1
	ctx.r3.s64 = 1;
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

__attribute__((alias("__imp__sub_8328EFF0"))) PPC_WEAK_FUNC(sub_8328EFF0);
PPC_FUNC_IMPL(__imp__sub_8328EFF0) {
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
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r4,212
	ctx.r4.s64 = 212;
	// li r3,208
	ctx.r3.s64 = 208;
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
	// bl 0x83294578
	ctx.lr = 0x8328F020;
	sub_83294578(ctx, base);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r11,208
	ctx.r3.s64 = ctx.r11.s64 + 208;
	// bl 0x83294518
	ctx.lr = 0x8328F030;
	sub_83294518(ctx, base);
	// stw r3,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r3.u32);
	// li r3,1
	ctx.r3.s64 = 1;
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

__attribute__((alias("__imp__sub_8328F050"))) PPC_WEAK_FUNC(sub_8328F050);
PPC_FUNC_IMPL(__imp__sub_8328F050) {
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
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r4,216
	ctx.r4.s64 = 216;
	// li r3,212
	ctx.r3.s64 = 212;
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
	// bl 0x83294578
	ctx.lr = 0x8328F080;
	sub_83294578(ctx, base);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r11,212
	ctx.r3.s64 = ctx.r11.s64 + 212;
	// bl 0x83294518
	ctx.lr = 0x8328F090;
	sub_83294518(ctx, base);
	// stw r3,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r3.u32);
	// li r3,1
	ctx.r3.s64 = 1;
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

__attribute__((alias("__imp__sub_8328F0B0"))) PPC_WEAK_FUNC(sub_8328F0B0);
PPC_FUNC_IMPL(__imp__sub_8328F0B0) {
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
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// std r11,0(r4)
	PPC_STORE_U64(ctx.r4.u32 + 0, ctx.r11.u64);
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// lwz r11,16(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// cmpwi cr6,r11,203
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 203, ctx.xer);
	// bge cr6,0x8328f0e8
	if (!ctx.cr6.lt) goto loc_8328F0E8;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x8328f10c
	goto loc_8328F10C;
loc_8328F0E8:
	// li r4,232
	ctx.r4.s64 = 232;
	// li r3,224
	ctx.r3.s64 = 224;
	// bl 0x83294578
	ctx.lr = 0x8328F0F4;
	sub_83294578(ctx, base);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r11,224
	ctx.r3.s64 = ctx.r11.s64 + 224;
	// bl 0x83294548
	ctx.lr = 0x8328F104;
	sub_83294548(ctx, base);
	// std r3,0(r30)
	PPC_STORE_U64(ctx.r30.u32 + 0, ctx.r3.u64);
	// li r3,1
	ctx.r3.s64 = 1;
loc_8328F10C:
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

__attribute__((alias("__imp__sub_8328F124"))) PPC_WEAK_FUNC(sub_8328F124);
PPC_FUNC_IMPL(__imp__sub_8328F124) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8328F128"))) PPC_WEAK_FUNC(sub_8328F128);
PPC_FUNC_IMPL(__imp__sub_8328F128) {
	PPC_FUNC_PROLOGUE();
	// b 0x8328e930
	sub_8328E930(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8328F12C"))) PPC_WEAK_FUNC(sub_8328F12C);
PPC_FUNC_IMPL(__imp__sub_8328F12C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8328F130"))) PPC_WEAK_FUNC(sub_8328F130);
PPC_FUNC_IMPL(__imp__sub_8328F130) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x833a01ac
	ctx.lr = 0x8328F138;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r11,0
	ctx.r11.s64 = 0;
	// clrlwi r4,r4,24
	ctx.r4.u64 = ctx.r4.u32 & 0xFF;
	// stw r11,0(r5)
	PPC_STORE_U32(ctx.r5.u32 + 0, ctx.r11.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// bl 0x8328f128
	ctx.lr = 0x8328F154;
	sub_8328F128(ctx, base);
	// mr. r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// bne 0x8328f164
	if (!ctx.cr0.eq) goto loc_8328F164;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x8328f20c
	goto loc_8328F20C;
loc_8328F164:
	// li r4,2
	ctx.r4.s64 = 2;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x83294578
	ctx.lr = 0x8328F170;
	sub_83294578(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r30,1
	ctx.r3.s64 = ctx.r30.s64 + 1;
	// bl 0x83294518
	ctx.lr = 0x8328F17C;
	sub_83294518(ctx, base);
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// cmpwi cr6,r11,200
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 200, ctx.xer);
	// bne cr6,0x8328f190
	if (!ctx.cr6.eq) goto loc_8328F190;
	// rlwinm r11,r3,28,28,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 28) & 0xF;
	// addi r3,r11,32
	ctx.r3.s64 = ctx.r11.s64 + 32;
loc_8328F190:
	// cmpwi cr6,r3,33
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 33, ctx.xer);
	// beq cr6,0x8328f200
	if (ctx.cr6.eq) goto loc_8328F200;
	// cmpwi cr6,r3,34
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 34, ctx.xer);
	// beq cr6,0x8328f1f8
	if (ctx.cr6.eq) goto loc_8328F1F8;
	// cmpwi cr6,r3,35
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 35, ctx.xer);
	// beq cr6,0x8328f1f0
	if (ctx.cr6.eq) goto loc_8328F1F0;
	// cmpwi cr6,r3,36
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 36, ctx.xer);
	// beq cr6,0x8328f1e8
	if (ctx.cr6.eq) goto loc_8328F1E8;
	// cmpwi cr6,r3,37
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 37, ctx.xer);
	// beq cr6,0x8328f1e0
	if (ctx.cr6.eq) goto loc_8328F1E0;
	// cmpwi cr6,r3,38
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 38, ctx.xer);
	// beq cr6,0x8328f1d8
	if (ctx.cr6.eq) goto loc_8328F1D8;
	// addi r11,r3,-39
	ctx.r11.s64 = ctx.r3.s64 + -39;
	// li r10,6
	ctx.r10.s64 = 6;
	// addic r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// subfe r11,r11,r11
	temp.u8 = (~ctx.r11.u32 + ctx.r11.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r11.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 & ctx.r10.u64;
	// b 0x8328f204
	goto loc_8328F204;
loc_8328F1D8:
	// li r11,5
	ctx.r11.s64 = 5;
	// b 0x8328f204
	goto loc_8328F204;
loc_8328F1E0:
	// li r11,4
	ctx.r11.s64 = 4;
	// b 0x8328f204
	goto loc_8328F204;
loc_8328F1E8:
	// li r11,3
	ctx.r11.s64 = 3;
	// b 0x8328f204
	goto loc_8328F204;
loc_8328F1F0:
	// li r11,8
	ctx.r11.s64 = 8;
	// b 0x8328f204
	goto loc_8328F204;
loc_8328F1F8:
	// li r11,7
	ctx.r11.s64 = 7;
	// b 0x8328f204
	goto loc_8328F204;
loc_8328F200:
	// li r11,1
	ctx.r11.s64 = 1;
loc_8328F204:
	// stw r11,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r11.u32);
	// li r3,1
	ctx.r3.s64 = 1;
loc_8328F20C:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x833a01fc
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8328F214"))) PPC_WEAK_FUNC(sub_8328F214);
PPC_FUNC_IMPL(__imp__sub_8328F214) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8328F218"))) PPC_WEAK_FUNC(sub_8328F218);
PPC_FUNC_IMPL(__imp__sub_8328F218) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x833a01ac
	ctx.lr = 0x8328F220;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r11,0
	ctx.r11.s64 = 0;
	// clrlwi r4,r4,24
	ctx.r4.u64 = ctx.r4.u32 & 0xFF;
	// stw r11,0(r5)
	PPC_STORE_U32(ctx.r5.u32 + 0, ctx.r11.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// bl 0x8328f128
	ctx.lr = 0x8328F23C;
	sub_8328F128(ctx, base);
	// mr. r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// bne 0x8328f24c
	if (!ctx.cr0.eq) goto loc_8328F24C;
loc_8328F244:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x8328f2ac
	goto loc_8328F2AC;
loc_8328F24C:
	// li r4,2
	ctx.r4.s64 = 2;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x83294578
	ctx.lr = 0x8328F258;
	sub_83294578(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r30,1
	ctx.r3.s64 = ctx.r30.s64 + 1;
	// bl 0x83294518
	ctx.lr = 0x8328F264;
	sub_83294518(ctx, base);
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// cmpwi cr6,r11,200
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 200, ctx.xer);
	// bne cr6,0x8328f278
	if (!ctx.cr6.eq) goto loc_8328F278;
	// clrlwi r11,r3,28
	ctx.r11.u64 = ctx.r3.u32 & 0xF;
	// b 0x8328f2a4
	goto loc_8328F2A4;
loc_8328F278:
	// cmplwi cr6,r3,36
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 36, ctx.xer);
	// beq cr6,0x8328f2a0
	if (ctx.cr6.eq) goto loc_8328F2A0;
	// cmplwi cr6,r3,37
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 37, ctx.xer);
	// beq cr6,0x8328f298
	if (ctx.cr6.eq) goto loc_8328F298;
	// cmplwi cr6,r3,38
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 38, ctx.xer);
	// bne cr6,0x8328f244
	if (!ctx.cr6.eq) goto loc_8328F244;
	// li r11,3
	ctx.r11.s64 = 3;
	// b 0x8328f2a4
	goto loc_8328F2A4;
loc_8328F298:
	// li r11,2
	ctx.r11.s64 = 2;
	// b 0x8328f2a4
	goto loc_8328F2A4;
loc_8328F2A0:
	// li r11,1
	ctx.r11.s64 = 1;
loc_8328F2A4:
	// stw r11,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r11.u32);
	// li r3,1
	ctx.r3.s64 = 1;
loc_8328F2AC:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x833a01fc
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8328F2B4"))) PPC_WEAK_FUNC(sub_8328F2B4);
PPC_FUNC_IMPL(__imp__sub_8328F2B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8328F2B8"))) PPC_WEAK_FUNC(sub_8328F2B8);
PPC_FUNC_IMPL(__imp__sub_8328F2B8) {
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
	// li r11,0
	ctx.r11.s64 = 0;
	// clrlwi r4,r4,24
	ctx.r4.u64 = ctx.r4.u32 & 0xFF;
	// stw r11,0(r5)
	PPC_STORE_U32(ctx.r5.u32 + 0, ctx.r11.u32);
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// bl 0x8328f128
	ctx.lr = 0x8328F2E0;
	sub_8328F128(ctx, base);
	// mr. r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// bne 0x8328f2f0
	if (!ctx.cr0.eq) goto loc_8328F2F0;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x8328f314
	goto loc_8328F314;
loc_8328F2F0:
	// li r4,3
	ctx.r4.s64 = 3;
	// li r3,2
	ctx.r3.s64 = 2;
	// bl 0x83294578
	ctx.lr = 0x8328F2FC;
	sub_83294578(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r30,2
	ctx.r3.s64 = ctx.r30.s64 + 2;
	// bl 0x83294518
	ctx.lr = 0x8328F308;
	sub_83294518(ctx, base);
	// rlwinm r11,r3,28,28,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 28) & 0xF;
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
loc_8328F314:
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

__attribute__((alias("__imp__sub_8328F32C"))) PPC_WEAK_FUNC(sub_8328F32C);
PPC_FUNC_IMPL(__imp__sub_8328F32C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8328F330"))) PPC_WEAK_FUNC(sub_8328F330);
PPC_FUNC_IMPL(__imp__sub_8328F330) {
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
	// li r11,0
	ctx.r11.s64 = 0;
	// clrlwi r4,r4,24
	ctx.r4.u64 = ctx.r4.u32 & 0xFF;
	// stw r11,0(r5)
	PPC_STORE_U32(ctx.r5.u32 + 0, ctx.r11.u32);
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// bl 0x8328f128
	ctx.lr = 0x8328F358;
	sub_8328F128(ctx, base);
	// mr. r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// bne 0x8328f368
	if (!ctx.cr0.eq) goto loc_8328F368;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x8328f38c
	goto loc_8328F38C;
loc_8328F368:
	// li r4,5
	ctx.r4.s64 = 5;
	// li r3,2
	ctx.r3.s64 = 2;
	// bl 0x83294578
	ctx.lr = 0x8328F374;
	sub_83294578(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r30,2
	ctx.r3.s64 = ctx.r30.s64 + 2;
	// bl 0x83294518
	ctx.lr = 0x8328F380;
	sub_83294518(ctx, base);
	// clrlwi r11,r3,12
	ctx.r11.u64 = ctx.r3.u32 & 0xFFFFF;
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
loc_8328F38C:
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

__attribute__((alias("__imp__sub_8328F3A4"))) PPC_WEAK_FUNC(sub_8328F3A4);
PPC_FUNC_IMPL(__imp__sub_8328F3A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8328F3A8"))) PPC_WEAK_FUNC(sub_8328F3A8);
PPC_FUNC_IMPL(__imp__sub_8328F3A8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x833a01ac
	ctx.lr = 0x8328F3B0;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r11,0
	ctx.r11.s64 = 0;
	// clrlwi r4,r4,24
	ctx.r4.u64 = ctx.r4.u32 & 0xFF;
	// stw r11,0(r5)
	PPC_STORE_U32(ctx.r5.u32 + 0, ctx.r11.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// bl 0x8328f128
	ctx.lr = 0x8328F3CC;
	sub_8328F128(ctx, base);
	// mr. r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// bne 0x8328f3dc
	if (!ctx.cr0.eq) goto loc_8328F3DC;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x8328f484
	goto loc_8328F484;
loc_8328F3DC:
	// li r4,2
	ctx.r4.s64 = 2;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x83294578
	ctx.lr = 0x8328F3E8;
	sub_83294578(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r30,1
	ctx.r3.s64 = ctx.r30.s64 + 1;
	// bl 0x83294518
	ctx.lr = 0x8328F3F4;
	sub_83294518(ctx, base);
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// cmpwi cr6,r11,200
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 200, ctx.xer);
	// bne cr6,0x8328f408
	if (!ctx.cr6.eq) goto loc_8328F408;
	// rlwinm r11,r3,28,28,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 28) & 0xF;
	// addi r3,r11,64
	ctx.r3.s64 = ctx.r11.s64 + 64;
loc_8328F408:
	// cmplwi cr6,r3,65
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 65, ctx.xer);
	// beq cr6,0x8328f478
	if (ctx.cr6.eq) goto loc_8328F478;
	// cmplwi cr6,r3,66
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 66, ctx.xer);
	// beq cr6,0x8328f470
	if (ctx.cr6.eq) goto loc_8328F470;
	// cmplwi cr6,r3,67
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 67, ctx.xer);
	// beq cr6,0x8328f468
	if (ctx.cr6.eq) goto loc_8328F468;
	// cmplwi cr6,r3,71
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 71, ctx.xer);
	// beq cr6,0x8328f460
	if (ctx.cr6.eq) goto loc_8328F460;
	// cmplwi cr6,r3,72
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 72, ctx.xer);
	// beq cr6,0x8328f458
	if (ctx.cr6.eq) goto loc_8328F458;
	// cmplwi cr6,r3,73
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 73, ctx.xer);
	// beq cr6,0x8328f450
	if (ctx.cr6.eq) goto loc_8328F450;
	// addi r11,r3,-74
	ctx.r11.s64 = ctx.r3.s64 + -74;
	// li r10,8
	ctx.r10.s64 = 8;
	// addic r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// subfe r11,r11,r11
	temp.u8 = (~ctx.r11.u32 + ctx.r11.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r11.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 & ctx.r10.u64;
	// b 0x8328f47c
	goto loc_8328F47C;
loc_8328F450:
	// li r11,7
	ctx.r11.s64 = 7;
	// b 0x8328f47c
	goto loc_8328F47C;
loc_8328F458:
	// li r11,6
	ctx.r11.s64 = 6;
	// b 0x8328f47c
	goto loc_8328F47C;
loc_8328F460:
	// li r11,5
	ctx.r11.s64 = 5;
	// b 0x8328f47c
	goto loc_8328F47C;
loc_8328F468:
	// li r11,4
	ctx.r11.s64 = 4;
	// b 0x8328f47c
	goto loc_8328F47C;
loc_8328F470:
	// li r11,3
	ctx.r11.s64 = 3;
	// b 0x8328f47c
	goto loc_8328F47C;
loc_8328F478:
	// li r11,1
	ctx.r11.s64 = 1;
loc_8328F47C:
	// stw r11,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r11.u32);
	// li r3,1
	ctx.r3.s64 = 1;
loc_8328F484:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x833a01fc
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8328F48C"))) PPC_WEAK_FUNC(sub_8328F48C);
PPC_FUNC_IMPL(__imp__sub_8328F48C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8328F490"))) PPC_WEAK_FUNC(sub_8328F490);
PPC_FUNC_IMPL(__imp__sub_8328F490) {
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
	// li r11,0
	ctx.r11.s64 = 0;
	// clrlwi r4,r4,24
	ctx.r4.u64 = ctx.r4.u32 & 0xFF;
	// stw r11,0(r5)
	PPC_STORE_U32(ctx.r5.u32 + 0, ctx.r11.u32);
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// bl 0x8328f128
	ctx.lr = 0x8328F4B8;
	sub_8328F128(ctx, base);
	// mr. r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// bne 0x8328f4c8
	if (!ctx.cr0.eq) goto loc_8328F4C8;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x8328f500
	goto loc_8328F500;
loc_8328F4C8:
	// li r4,16
	ctx.r4.s64 = 16;
	// li r3,12
	ctx.r3.s64 = 12;
	// bl 0x83294578
	ctx.lr = 0x8328F4D4;
	sub_83294578(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r30,12
	ctx.r3.s64 = ctx.r30.s64 + 12;
	// bl 0x83294518
	ctx.lr = 0x8328F4E0;
	sub_83294518(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// li r10,-1
	ctx.r10.s64 = -1;
	// li r3,1
	ctx.r3.s64 = 1;
	// subf r10,r11,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r11.s64;
	// subfic r10,r10,0
	ctx.xer.ca = ctx.r10.u32 <= 0;
	ctx.r10.s64 = 0 - ctx.r10.s64;
	// subfe r10,r10,r10
	temp.u8 = (~ctx.r10.u32 + ctx.r10.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r10.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r10.u64 = ~ctx.r10.u64 + ctx.r10.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 & ctx.r11.u64;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
loc_8328F500:
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

__attribute__((alias("__imp__sub_8328F518"))) PPC_WEAK_FUNC(sub_8328F518);
PPC_FUNC_IMPL(__imp__sub_8328F518) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x833a01ac
	ctx.lr = 0x8328F520;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r11,0
	ctx.r11.s64 = 0;
	// clrlwi r4,r4,24
	ctx.r4.u64 = ctx.r4.u32 & 0xFF;
	// stw r11,0(r5)
	PPC_STORE_U32(ctx.r5.u32 + 0, ctx.r11.u32);
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// stw r11,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r11.u32);
	// mr r29,r6
	ctx.r29.u64 = ctx.r6.u64;
	// bl 0x8328f128
	ctx.lr = 0x8328F540;
	sub_8328F128(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// bne 0x8328f550
	if (!ctx.cr0.eq) goto loc_8328F550;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x8328f58c
	goto loc_8328F58C;
loc_8328F550:
	// li r4,4
	ctx.r4.s64 = 4;
	// li r3,2
	ctx.r3.s64 = 2;
	// bl 0x83294578
	ctx.lr = 0x8328F55C;
	sub_83294578(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r31,2
	ctx.r3.s64 = ctx.r31.s64 + 2;
	// bl 0x83294518
	ctx.lr = 0x8328F568;
	sub_83294518(ctx, base);
	// stw r3,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r3.u32);
	// li r4,6
	ctx.r4.s64 = 6;
	// li r3,4
	ctx.r3.s64 = 4;
	// bl 0x83294578
	ctx.lr = 0x8328F578;
	sub_83294578(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r31,4
	ctx.r3.s64 = ctx.r31.s64 + 4;
	// bl 0x83294518
	ctx.lr = 0x8328F584;
	sub_83294518(ctx, base);
	// stw r3,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r3.u32);
	// li r3,1
	ctx.r3.s64 = 1;
loc_8328F58C:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x833a01fc
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8328F594"))) PPC_WEAK_FUNC(sub_8328F594);
PPC_FUNC_IMPL(__imp__sub_8328F594) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8328F598"))) PPC_WEAK_FUNC(sub_8328F598);
PPC_FUNC_IMPL(__imp__sub_8328F598) {
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
	// li r11,0
	ctx.r11.s64 = 0;
	// clrlwi r4,r4,24
	ctx.r4.u64 = ctx.r4.u32 & 0xFF;
	// stw r11,0(r5)
	PPC_STORE_U32(ctx.r5.u32 + 0, ctx.r11.u32);
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// bl 0x8328f128
	ctx.lr = 0x8328F5C0;
	sub_8328F128(ctx, base);
	// mr. r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// bne 0x8328f5d0
	if (!ctx.cr0.eq) goto loc_8328F5D0;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x8328f5f0
	goto loc_8328F5F0;
loc_8328F5D0:
	// li r4,12
	ctx.r4.s64 = 12;
	// li r3,10
	ctx.r3.s64 = 10;
	// bl 0x83294578
	ctx.lr = 0x8328F5DC;
	sub_83294578(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r30,10
	ctx.r3.s64 = ctx.r30.s64 + 10;
	// bl 0x83294518
	ctx.lr = 0x8328F5E8;
	sub_83294518(ctx, base);
	// stw r3,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r3.u32);
	// li r3,1
	ctx.r3.s64 = 1;
loc_8328F5F0:
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

__attribute__((alias("__imp__sub_8328F608"))) PPC_WEAK_FUNC(sub_8328F608);
PPC_FUNC_IMPL(__imp__sub_8328F608) {
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
	// li r11,0
	ctx.r11.s64 = 0;
	// clrlwi r4,r4,24
	ctx.r4.u64 = ctx.r4.u32 & 0xFF;
	// stw r11,0(r5)
	PPC_STORE_U32(ctx.r5.u32 + 0, ctx.r11.u32);
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// bl 0x8328f128
	ctx.lr = 0x8328F630;
	sub_8328F128(ctx, base);
	// mr. r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// bne 0x8328f640
	if (!ctx.cr0.eq) goto loc_8328F640;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x8328f660
	goto loc_8328F660;
loc_8328F640:
	// li r4,34
	ctx.r4.s64 = 34;
	// li r3,33
	ctx.r3.s64 = 33;
	// bl 0x83294578
	ctx.lr = 0x8328F64C;
	sub_83294578(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r30,33
	ctx.r3.s64 = ctx.r30.s64 + 33;
	// bl 0x83294518
	ctx.lr = 0x8328F658;
	sub_83294518(ctx, base);
	// stw r3,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r3.u32);
	// li r3,1
	ctx.r3.s64 = 1;
loc_8328F660:
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

__attribute__((alias("__imp__sub_8328F678"))) PPC_WEAK_FUNC(sub_8328F678);
PPC_FUNC_IMPL(__imp__sub_8328F678) {
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
	// li r11,0
	ctx.r11.s64 = 0;
	// clrlwi r4,r4,24
	ctx.r4.u64 = ctx.r4.u32 & 0xFF;
	// stw r11,0(r5)
	PPC_STORE_U32(ctx.r5.u32 + 0, ctx.r11.u32);
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// bl 0x8328f128
	ctx.lr = 0x8328F6A0;
	sub_8328F128(ctx, base);
	// mr. r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// bne 0x8328f6b0
	if (!ctx.cr0.eq) goto loc_8328F6B0;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x8328f6d0
	goto loc_8328F6D0;
loc_8328F6B0:
	// li r4,35
	ctx.r4.s64 = 35;
	// li r3,34
	ctx.r3.s64 = 34;
	// bl 0x83294578
	ctx.lr = 0x8328F6BC;
	sub_83294578(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r30,34
	ctx.r3.s64 = ctx.r30.s64 + 34;
	// bl 0x83294518
	ctx.lr = 0x8328F6C8;
	sub_83294518(ctx, base);
	// stw r3,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r3.u32);
	// li r3,1
	ctx.r3.s64 = 1;
loc_8328F6D0:
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

__attribute__((alias("__imp__sub_8328F6E8"))) PPC_WEAK_FUNC(sub_8328F6E8);
PPC_FUNC_IMPL(__imp__sub_8328F6E8) {
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
	// li r11,0
	ctx.r11.s64 = 0;
	// clrlwi r4,r4,24
	ctx.r4.u64 = ctx.r4.u32 & 0xFF;
	// stw r11,0(r5)
	PPC_STORE_U32(ctx.r5.u32 + 0, ctx.r11.u32);
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// bl 0x8328f128
	ctx.lr = 0x8328F710;
	sub_8328F128(ctx, base);
	// mr. r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// bne 0x8328f720
	if (!ctx.cr0.eq) goto loc_8328F720;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x8328f744
	goto loc_8328F744;
loc_8328F720:
	// li r4,36
	ctx.r4.s64 = 36;
	// li r3,35
	ctx.r3.s64 = 35;
	// bl 0x83294578
	ctx.lr = 0x8328F72C;
	sub_83294578(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r30,35
	ctx.r3.s64 = ctx.r30.s64 + 35;
	// bl 0x83294518
	ctx.lr = 0x8328F738;
	sub_83294518(ctx, base);
	// clrlwi r11,r3,31
	ctx.r11.u64 = ctx.r3.u32 & 0x1;
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
loc_8328F744:
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

__attribute__((alias("__imp__sub_8328F75C"))) PPC_WEAK_FUNC(sub_8328F75C);
PPC_FUNC_IMPL(__imp__sub_8328F75C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8328F760"))) PPC_WEAK_FUNC(sub_8328F760);
PPC_FUNC_IMPL(__imp__sub_8328F760) {
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
	// li r11,0
	ctx.r11.s64 = 0;
	// clrlwi r4,r4,24
	ctx.r4.u64 = ctx.r4.u32 & 0xFF;
	// stw r11,0(r5)
	PPC_STORE_U32(ctx.r5.u32 + 0, ctx.r11.u32);
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// bl 0x8328f128
	ctx.lr = 0x8328F788;
	sub_8328F128(ctx, base);
	// mr. r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// bne 0x8328f798
	if (!ctx.cr0.eq) goto loc_8328F798;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x8328f7bc
	goto loc_8328F7BC;
loc_8328F798:
	// li r4,36
	ctx.r4.s64 = 36;
	// li r3,35
	ctx.r3.s64 = 35;
	// bl 0x83294578
	ctx.lr = 0x8328F7A4;
	sub_83294578(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r30,35
	ctx.r3.s64 = ctx.r30.s64 + 35;
	// bl 0x83294518
	ctx.lr = 0x8328F7B0;
	sub_83294518(ctx, base);
	// rlwinm r11,r3,28,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 28) & 0x1;
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
loc_8328F7BC:
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

__attribute__((alias("__imp__sub_8328F7D4"))) PPC_WEAK_FUNC(sub_8328F7D4);
PPC_FUNC_IMPL(__imp__sub_8328F7D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8328F7D8"))) PPC_WEAK_FUNC(sub_8328F7D8);
PPC_FUNC_IMPL(__imp__sub_8328F7D8) {
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
	// li r11,0
	ctx.r11.s64 = 0;
	// clrlwi r4,r4,24
	ctx.r4.u64 = ctx.r4.u32 & 0xFF;
	// stw r11,0(r5)
	PPC_STORE_U32(ctx.r5.u32 + 0, ctx.r11.u32);
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// bl 0x8328f128
	ctx.lr = 0x8328F800;
	sub_8328F128(ctx, base);
	// mr. r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// bne 0x8328f810
	if (!ctx.cr0.eq) goto loc_8328F810;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x8328f830
	goto loc_8328F830;
loc_8328F810:
	// li r4,37
	ctx.r4.s64 = 37;
	// li r3,36
	ctx.r3.s64 = 36;
	// bl 0x83294578
	ctx.lr = 0x8328F81C;
	sub_83294578(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r30,36
	ctx.r3.s64 = ctx.r30.s64 + 36;
	// bl 0x83294518
	ctx.lr = 0x8328F828;
	sub_83294518(ctx, base);
	// stw r3,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r3.u32);
	// li r3,1
	ctx.r3.s64 = 1;
loc_8328F830:
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

__attribute__((alias("__imp__sub_8328F848"))) PPC_WEAK_FUNC(sub_8328F848);
PPC_FUNC_IMPL(__imp__sub_8328F848) {
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
	// li r11,0
	ctx.r11.s64 = 0;
	// clrlwi r4,r4,24
	ctx.r4.u64 = ctx.r4.u32 & 0xFF;
	// stw r11,0(r5)
	PPC_STORE_U32(ctx.r5.u32 + 0, ctx.r11.u32);
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// bl 0x8328f128
	ctx.lr = 0x8328F870;
	sub_8328F128(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// bne 0x8328f880
	if (!ctx.cr0.eq) goto loc_8328F880;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x8328f8ac
	goto loc_8328F8AC;
loc_8328F880:
	// li r4,38
	ctx.r4.s64 = 38;
	// li r3,37
	ctx.r3.s64 = 37;
	// bl 0x83294578
	ctx.lr = 0x8328F88C;
	sub_83294578(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r31,37
	ctx.r3.s64 = ctx.r31.s64 + 37;
	// bl 0x83294518
	ctx.lr = 0x8328F898;
	sub_83294518(ctx, base);
	// cmpwi cr6,r3,63
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 63, ctx.xer);
	// ble cr6,0x8328f8a4
	if (!ctx.cr6.gt) goto loc_8328F8A4;
	// li r3,-1
	ctx.r3.s64 = -1;
loc_8328F8A4:
	// stw r3,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r3.u32);
	// li r3,1
	ctx.r3.s64 = 1;
loc_8328F8AC:
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

__attribute__((alias("__imp__sub_8328F8C4"))) PPC_WEAK_FUNC(sub_8328F8C4);
PPC_FUNC_IMPL(__imp__sub_8328F8C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8328F8C8"))) PPC_WEAK_FUNC(sub_8328F8C8);
PPC_FUNC_IMPL(__imp__sub_8328F8C8) {
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
	// li r11,0
	ctx.r11.s64 = 0;
	// clrlwi r4,r4,24
	ctx.r4.u64 = ctx.r4.u32 & 0xFF;
	// stw r11,0(r5)
	PPC_STORE_U32(ctx.r5.u32 + 0, ctx.r11.u32);
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// bl 0x8328f128
	ctx.lr = 0x8328F8F0;
	sub_8328F128(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// bne 0x8328f900
	if (!ctx.cr0.eq) goto loc_8328F900;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x8328f92c
	goto loc_8328F92C;
loc_8328F900:
	// li r4,39
	ctx.r4.s64 = 39;
	// li r3,38
	ctx.r3.s64 = 38;
	// bl 0x83294578
	ctx.lr = 0x8328F90C;
	sub_83294578(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r31,38
	ctx.r3.s64 = ctx.r31.s64 + 38;
	// bl 0x83294518
	ctx.lr = 0x8328F918;
	sub_83294518(ctx, base);
	// cmpwi cr6,r3,63
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 63, ctx.xer);
	// ble cr6,0x8328f924
	if (!ctx.cr6.gt) goto loc_8328F924;
	// li r3,-1
	ctx.r3.s64 = -1;
loc_8328F924:
	// stw r3,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r3.u32);
	// li r3,1
	ctx.r3.s64 = 1;
loc_8328F92C:
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

__attribute__((alias("__imp__sub_8328F944"))) PPC_WEAK_FUNC(sub_8328F944);
PPC_FUNC_IMPL(__imp__sub_8328F944) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8328F948"))) PPC_WEAK_FUNC(sub_8328F948);
PPC_FUNC_IMPL(__imp__sub_8328F948) {
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
	// li r11,0
	ctx.r11.s64 = 0;
	// clrlwi r4,r4,24
	ctx.r4.u64 = ctx.r4.u32 & 0xFF;
	// stw r11,0(r5)
	PPC_STORE_U32(ctx.r5.u32 + 0, ctx.r11.u32);
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// bl 0x8328f128
	ctx.lr = 0x8328F970;
	sub_8328F128(ctx, base);
	// mr. r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// bne 0x8328f980
	if (!ctx.cr0.eq) goto loc_8328F980;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x8328f9a0
	goto loc_8328F9A0;
loc_8328F980:
	// li r4,40
	ctx.r4.s64 = 40;
	// li r3,39
	ctx.r3.s64 = 39;
	// bl 0x83294578
	ctx.lr = 0x8328F98C;
	sub_83294578(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r30,39
	ctx.r3.s64 = ctx.r30.s64 + 39;
	// bl 0x83294518
	ctx.lr = 0x8328F998;
	sub_83294518(ctx, base);
	// stw r3,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r3.u32);
	// li r3,1
	ctx.r3.s64 = 1;
loc_8328F9A0:
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

__attribute__((alias("__imp__sub_8328F9B8"))) PPC_WEAK_FUNC(sub_8328F9B8);
PPC_FUNC_IMPL(__imp__sub_8328F9B8) {
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
	// li r11,0
	ctx.r11.s64 = 0;
	// clrlwi r4,r4,24
	ctx.r4.u64 = ctx.r4.u32 & 0xFF;
	// stw r11,0(r5)
	PPC_STORE_U32(ctx.r5.u32 + 0, ctx.r11.u32);
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// bl 0x8328f128
	ctx.lr = 0x8328F9E0;
	sub_8328F128(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// bne 0x8328f9f0
	if (!ctx.cr0.eq) goto loc_8328F9F0;
loc_8328F9E8:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x8328fa20
	goto loc_8328FA20;
loc_8328F9F0:
	// li r4,42
	ctx.r4.s64 = 42;
	// li r3,40
	ctx.r3.s64 = 40;
	// bl 0x83294578
	ctx.lr = 0x8328F9FC;
	sub_83294578(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r31,40
	ctx.r3.s64 = ctx.r31.s64 + 40;
	// bl 0x83294518
	ctx.lr = 0x8328FA08;
	sub_83294518(ctx, base);
	// srawi r11,r3,1
	ctx.xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0x1) != 0);
	ctx.r11.s64 = ctx.r3.s32 >> 1;
	// rlwimi r11,r3,0,25,31
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r3.u32, 0) & 0x7F) | (ctx.r11.u64 & 0xFFFFFFFFFFFFFF80);
	// clrlwi. r11,r11,18
	ctx.r11.u64 = ctx.r11.u32 & 0x3FFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8328f9e8
	if (ctx.cr0.eq) goto loc_8328F9E8;
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
	// li r3,1
	ctx.r3.s64 = 1;
loc_8328FA20:
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

__attribute__((alias("__imp__sub_8328FA38"))) PPC_WEAK_FUNC(sub_8328FA38);
PPC_FUNC_IMPL(__imp__sub_8328FA38) {
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
	// li r11,0
	ctx.r11.s64 = 0;
	// clrlwi r4,r4,24
	ctx.r4.u64 = ctx.r4.u32 & 0xFF;
	// stw r11,0(r5)
	PPC_STORE_U32(ctx.r5.u32 + 0, ctx.r11.u32);
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// bl 0x8328f128
	ctx.lr = 0x8328FA60;
	sub_8328F128(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// bne 0x8328fa70
	if (!ctx.cr0.eq) goto loc_8328FA70;
loc_8328FA68:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x8328faa0
	goto loc_8328FAA0;
loc_8328FA70:
	// li r4,44
	ctx.r4.s64 = 44;
	// li r3,42
	ctx.r3.s64 = 42;
	// bl 0x83294578
	ctx.lr = 0x8328FA7C;
	sub_83294578(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r31,42
	ctx.r3.s64 = ctx.r31.s64 + 42;
	// bl 0x83294518
	ctx.lr = 0x8328FA88;
	sub_83294518(ctx, base);
	// srawi r11,r3,1
	ctx.xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0x1) != 0);
	ctx.r11.s64 = ctx.r3.s32 >> 1;
	// rlwimi r11,r3,0,25,31
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r3.u32, 0) & 0x7F) | (ctx.r11.u64 & 0xFFFFFFFFFFFFFF80);
	// clrlwi. r11,r11,18
	ctx.r11.u64 = ctx.r11.u32 & 0x3FFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8328fa68
	if (ctx.cr0.eq) goto loc_8328FA68;
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
	// li r3,1
	ctx.r3.s64 = 1;
loc_8328FAA0:
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

__attribute__((alias("__imp__sub_8328FAB8"))) PPC_WEAK_FUNC(sub_8328FAB8);
PPC_FUNC_IMPL(__imp__sub_8328FAB8) {
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
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r4,33
	ctx.r4.s64 = 33;
	// li r3,32
	ctx.r3.s64 = 32;
	// bl 0x83294578
	ctx.lr = 0x8328FAD8;
	sub_83294578(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r31,32
	ctx.r3.s64 = ctx.r31.s64 + 32;
	// bl 0x83294518
	ctx.lr = 0x8328FAE4;
	sub_83294518(ctx, base);
	// addic r11,r3,-1
	ctx.xer.ca = ctx.r3.u32 > 0;
	ctx.r11.s64 = ctx.r3.s64 + -1;
	// subfe r3,r11,r3
	temp.u8 = (~ctx.r11.u32 + ctx.r3.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r3.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r3.u64 = ~ctx.r11.u64 + ctx.r3.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
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

__attribute__((alias("__imp__sub_8328FB00"))) PPC_WEAK_FUNC(sub_8328FB00);
PPC_FUNC_IMPL(__imp__sub_8328FB00) {
	PPC_FUNC_PROLOGUE();
	// cmpwi cr6,r3,192
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 192, ctx.xer);
	// blt cr6,0x8328fb18
	if (ctx.cr6.lt) goto loc_8328FB18;
	// cmpwi cr6,r3,223
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 223, ctx.xer);
	// bgt cr6,0x8328fb18
	if (ctx.cr6.gt) goto loc_8328FB18;
	// li r3,192
	ctx.r3.s64 = 192;
	// blr 
	return;
loc_8328FB18:
	// cmpwi cr6,r3,224
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 224, ctx.xer);
	// blt cr6,0x8328fb30
	if (ctx.cr6.lt) goto loc_8328FB30;
	// cmpwi cr6,r3,239
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 239, ctx.xer);
	// bgt cr6,0x8328fb30
	if (ctx.cr6.gt) goto loc_8328FB30;
	// li r3,224
	ctx.r3.s64 = 224;
	// blr 
	return;
loc_8328FB30:
	// cmpwi cr6,r3,189
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 189, ctx.xer);
	// beq cr6,0x8328fb44
	if (ctx.cr6.eq) goto loc_8328FB44;
	// cmpwi cr6,r3,191
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 191, ctx.xer);
	// li r3,0
	ctx.r3.s64 = 0;
	// bnelr cr6
	if (!ctx.cr6.eq) return;
loc_8328FB44:
	// li r3,189
	ctx.r3.s64 = 189;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8328FB4C"))) PPC_WEAK_FUNC(sub_8328FB4C);
PPC_FUNC_IMPL(__imp__sub_8328FB4C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8328FB50"))) PPC_WEAK_FUNC(sub_8328FB50);
PPC_FUNC_IMPL(__imp__sub_8328FB50) {
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
	// li r11,0
	ctx.r11.s64 = 0;
	// clrlwi r4,r4,24
	ctx.r4.u64 = ctx.r4.u32 & 0xFF;
	// stw r11,0(r5)
	PPC_STORE_U32(ctx.r5.u32 + 0, ctx.r11.u32);
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// bl 0x8328e930
	ctx.lr = 0x8328FB74;
	sub_8328E930(ctx, base);
	// addic r11,r3,-1
	ctx.xer.ca = ctx.r3.u32 > 0;
	ctx.r11.s64 = ctx.r3.s64 + -1;
	// subfe r11,r11,r3
	temp.u8 = (~ctx.r11.u32 + ctx.r3.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r3.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r11.u64 + ctx.r3.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// rotlwi r3,r11,0
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
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

__attribute__((alias("__imp__sub_8328FB98"))) PPC_WEAK_FUNC(sub_8328FB98);
PPC_FUNC_IMPL(__imp__sub_8328FB98) {
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
	// clrlwi r4,r4,24
	ctx.r4.u64 = ctx.r4.u32 & 0xFF;
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// stw r11,0(r5)
	PPC_STORE_U32(ctx.r5.u32 + 0, ctx.r11.u32);
	// bl 0x8328fb00
	ctx.lr = 0x8328FBC4;
	sub_8328FB00(ctx, base);
	// cmpwi cr6,r3,224
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 224, ctx.xer);
	// beq cr6,0x8328fbd4
	if (ctx.cr6.eq) goto loc_8328FBD4;
loc_8328FBCC:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x8328fbec
	goto loc_8328FBEC;
loc_8328FBD4:
	// mr r3,r10
	ctx.r3.u64 = ctx.r10.u64;
	// bl 0x8328e930
	ctx.lr = 0x8328FBDC;
	sub_8328E930(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8328fbcc
	if (ctx.cr0.eq) goto loc_8328FBCC;
	// bl 0x8328fab8
	ctx.lr = 0x8328FBE8;
	sub_8328FAB8(ctx, base);
	// stw r3,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r3.u32);
loc_8328FBEC:
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

__attribute__((alias("__imp__sub_8328FC00"))) PPC_WEAK_FUNC(sub_8328FC00);
PPC_FUNC_IMPL(__imp__sub_8328FC00) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
	// bl 0x8328ec98
	ctx.lr = 0x8328FC18;
	sub_8328EC98(ctx, base);
	// addic r11,r3,-1
	ctx.xer.ca = ctx.r3.u32 > 0;
	ctx.r11.s64 = ctx.r3.s64 + -1;
	// subfe r3,r11,r3
	temp.u8 = (~ctx.r11.u32 + ctx.r3.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r3.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r3.u64 = ~ctx.r11.u64 + ctx.r3.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8328FC30"))) PPC_WEAK_FUNC(sub_8328FC30);
PPC_FUNC_IMPL(__imp__sub_8328FC30) {
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
	// li r11,0
	ctx.r11.s64 = 0;
	// lis r10,-32219
	ctx.r10.s64 = -2111504384;
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// stw r11,0(r5)
	PPC_STORE_U32(ctx.r5.u32 + 0, ctx.r11.u32);
	// addi r4,r10,22932
	ctx.r4.s64 = ctx.r10.s64 + 22932;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// bl 0x833a2f80
	ctx.lr = 0x8328FC64;
	sub_833A2F80(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8328fc88
	if (ctx.cr0.eq) goto loc_8328FC88;
	// addi r3,r3,4
	ctx.r3.s64 = ctx.r3.s64 + 4;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x8328ecf8
	ctx.lr = 0x8328FC78;
	sub_8328ECF8(ctx, base);
	// addi r3,r3,1
	ctx.r3.s64 = ctx.r3.s64 + 1;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x8328ecf8
	ctx.lr = 0x8328FC84;
	sub_8328ECF8(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
loc_8328FC88:
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

__attribute__((alias("__imp__sub_8328FCA0"))) PPC_WEAK_FUNC(sub_8328FCA0);
PPC_FUNC_IMPL(__imp__sub_8328FCA0) {
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
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// stw r11,0(r5)
	PPC_STORE_U32(ctx.r5.u32 + 0, ctx.r11.u32);
	// bl 0x8328eb38
	ctx.lr = 0x8328FCD0;
	sub_8328EB38(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x8328fce0
	if (!ctx.cr0.eq) goto loc_8328FCE0;
loc_8328FCD8:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x8328fd0c
	goto loc_8328FD0C;
loc_8328FCE0:
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8328fc30
	ctx.lr = 0x8328FCF0;
	sub_8328FC30(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x8328fcd8
	if (ctx.cr0.eq) goto loc_8328FCD8;
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// li r3,1
	ctx.r3.s64 = 1;
	// lwz r10,84(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// stw r10,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r10.u32);
loc_8328FD0C:
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
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

__attribute__((alias("__imp__sub_8328FD24"))) PPC_WEAK_FUNC(sub_8328FD24);
PPC_FUNC_IMPL(__imp__sub_8328FD24) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8328FD28"))) PPC_WEAK_FUNC(sub_8328FD28);
PPC_FUNC_IMPL(__imp__sub_8328FD28) {
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
	// li r10,0
	ctx.r10.s64 = 0;
	// lis r11,-32219
	ctx.r11.s64 = -2111504384;
	// stw r10,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r10.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r9,4(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// addi r10,r11,22940
	ctx.r10.s64 = ctx.r11.s64 + 22940;
	// addi r11,r9,32
	ctx.r11.s64 = ctx.r9.s64 + 32;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// addi r9,r11,24
	ctx.r9.s64 = ctx.r11.s64 + 24;
loc_8328FD60:
	// lbz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r7,0(r10)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// subf. r8,r7,r8
	ctx.r8.s64 = ctx.r8.s64 - ctx.r7.s64;
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// bne 0x8328fd80
	if (!ctx.cr0.eq) goto loc_8328FD80;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpw cr6,r11,r9
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r9.s32, ctx.xer);
	// bne cr6,0x8328fd60
	if (!ctx.cr6.eq) goto loc_8328FD60;
loc_8328FD80:
	// cmpwi r8,0
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq 0x8328fd98
	if (ctx.cr0.eq) goto loc_8328FD98;
	// li r11,-1
	ctx.r11.s64 = -1;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// b 0x8328fe30
	goto loc_8328FE30;
loc_8328FD98:
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8328eb98
	ctx.lr = 0x8328FDA8;
	sub_8328EB98(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x8328fdc4
	if (ctx.cr0.eq) goto loc_8328FDC4;
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r10,84(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// rlwinm r11,r11,8,0,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 8) & 0xFFFFFF00;
	// or r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 | ctx.r10.u64;
	// stw r11,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r11.u32);
loc_8328FDC4:
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8328fca0
	ctx.lr = 0x8328FDD4;
	sub_8328FCA0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x8328fdf0
	if (ctx.cr0.eq) goto loc_8328FDF0;
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// rlwinm r11,r11,8,0,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 8) & 0xFFFFFF00;
	// or r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 | ctx.r10.u64;
	// stw r11,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r11.u32);
loc_8328FDF0:
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8328ec08
	ctx.lr = 0x8328FE00;
	sub_8328EC08(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x8328fe1c
	if (ctx.cr0.eq) goto loc_8328FE1C;
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// rlwinm r11,r11,8,0,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 8) & 0xFFFFFF00;
	// or r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 | ctx.r10.u64;
	// stw r11,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r11.u32);
loc_8328FE1C:
	// li r11,2
	ctx.r11.s64 = 2;
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r10,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r10.u32);
loc_8328FE30:
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

__attribute__((alias("__imp__sub_8328FE48"))) PPC_WEAK_FUNC(sub_8328FE48);
PPC_FUNC_IMPL(__imp__sub_8328FE48) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x833a01a8
	ctx.lr = 0x8328FE50;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// li r28,0
	ctx.r28.s64 = 0;
	// addi r31,r3,384
	ctx.r31.s64 = ctx.r3.s64 + 384;
	// li r30,0
	ctx.r30.s64 = 0;
loc_8328FE64:
	// li r4,25
	ctx.r4.s64 = 25;
	// li r3,24
	ctx.r3.s64 = 24;
	// bl 0x83294578
	ctx.lr = 0x8328FE70;
	sub_83294578(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r31,24
	ctx.r3.s64 = ctx.r31.s64 + 24;
	// bl 0x832944e8
	ctx.lr = 0x8328FE7C;
	sub_832944E8(ctx, base);
	// cmplw cr6,r3,r29
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r29.u32, ctx.xer);
	// beq cr6,0x8328fe98
	if (ctx.cr6.eq) goto loc_8328FE98;
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// addi r31,r31,64
	ctx.r31.s64 = ctx.r31.s64 + 64;
	// cmpwi cr6,r30,26
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 26, ctx.xer);
	// blt cr6,0x8328fe64
	if (ctx.cr6.lt) goto loc_8328FE64;
	// b 0x8328fe9c
	goto loc_8328FE9C;
loc_8328FE98:
	// mr r28,r31
	ctx.r28.u64 = ctx.r31.u64;
loc_8328FE9C:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x833a01f8
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8328FEA8"))) PPC_WEAK_FUNC(sub_8328FEA8);
PPC_FUNC_IMPL(__imp__sub_8328FEA8) {
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
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// li r5,32
	ctx.r5.s64 = 32;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x833a2b30
	ctx.lr = 0x8328FED4;
	sub_833A2B30(ctx, base);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// li r5,32
	ctx.r5.s64 = 32;
	// addi r4,r11,96
	ctx.r4.s64 = ctx.r11.s64 + 96;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x833a1390
	ctx.lr = 0x8328FEE8;
	sub_833A1390(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
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

__attribute__((alias("__imp__sub_8328FF04"))) PPC_WEAK_FUNC(sub_8328FF04);
PPC_FUNC_IMPL(__imp__sub_8328FF04) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8328FF08"))) PPC_WEAK_FUNC(sub_8328FF08);
PPC_FUNC_IMPL(__imp__sub_8328FF08) {
	PPC_FUNC_PROLOGUE();
	// li r11,1
	ctx.r11.s64 = 1;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r10,0(r5)
	PPC_STORE_U32(ctx.r5.u32 + 0, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8328FF20"))) PPC_WEAK_FUNC(sub_8328FF20);
PPC_FUNC_IMPL(__imp__sub_8328FF20) {
	PPC_FUNC_PROLOGUE();
	// li r11,0
	ctx.r11.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
	// stw r11,0(r5)
	PPC_STORE_U32(ctx.r5.u32 + 0, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8328FF34"))) PPC_WEAK_FUNC(sub_8328FF34);
PPC_FUNC_IMPL(__imp__sub_8328FF34) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8328FF38"))) PPC_WEAK_FUNC(sub_8328FF38);
PPC_FUNC_IMPL(__imp__sub_8328FF38) {
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
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r4,132
	ctx.r4.s64 = 132;
	// li r3,128
	ctx.r3.s64 = 128;
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
	// bl 0x83294578
	ctx.lr = 0x8328FF68;
	sub_83294578(ctx, base);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r11,128
	ctx.r3.s64 = ctx.r11.s64 + 128;
	// bl 0x832944e8
	ctx.lr = 0x8328FF78;
	sub_832944E8(ctx, base);
	// stw r3,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r3.u32);
	// li r3,1
	ctx.r3.s64 = 1;
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

__attribute__((alias("__imp__sub_8328FF98"))) PPC_WEAK_FUNC(sub_8328FF98);
PPC_FUNC_IMPL(__imp__sub_8328FF98) {
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
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// li r11,-1
	ctx.r11.s64 = -1;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r4,133
	ctx.r4.s64 = 133;
	// li r3,132
	ctx.r3.s64 = 132;
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
	// bl 0x83294578
	ctx.lr = 0x8328FFC8;
	sub_83294578(ctx, base);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r11,132
	ctx.r3.s64 = ctx.r11.s64 + 132;
	// bl 0x832944e8
	ctx.lr = 0x8328FFD8;
	sub_832944E8(ctx, base);
	// stw r3,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r3.u32);
	// li r3,1
	ctx.r3.s64 = 1;
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

__attribute__((alias("__imp__sub_8328FFF8"))) PPC_WEAK_FUNC(sub_8328FFF8);
PPC_FUNC_IMPL(__imp__sub_8328FFF8) {
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
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r4,138
	ctx.r4.s64 = 138;
	// li r3,136
	ctx.r3.s64 = 136;
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
	// bl 0x83294578
	ctx.lr = 0x83290028;
	sub_83294578(ctx, base);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r11,136
	ctx.r3.s64 = ctx.r11.s64 + 136;
	// bl 0x832944e8
	ctx.lr = 0x83290038;
	sub_832944E8(ctx, base);
	// stw r3,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r3.u32);
	// li r3,1
	ctx.r3.s64 = 1;
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

__attribute__((alias("__imp__sub_83290058"))) PPC_WEAK_FUNC(sub_83290058);
PPC_FUNC_IMPL(__imp__sub_83290058) {
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
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r4,144
	ctx.r4.s64 = 144;
	// li r3,140
	ctx.r3.s64 = 140;
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
	// bl 0x83294578
	ctx.lr = 0x83290088;
	sub_83294578(ctx, base);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r11,140
	ctx.r3.s64 = ctx.r11.s64 + 140;
	// bl 0x832944e8
	ctx.lr = 0x83290098;
	sub_832944E8(ctx, base);
	// stw r3,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r3.u32);
	// li r3,1
	ctx.r3.s64 = 1;
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

__attribute__((alias("__imp__sub_832900B8"))) PPC_WEAK_FUNC(sub_832900B8);
PPC_FUNC_IMPL(__imp__sub_832900B8) {
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
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r4,177
	ctx.r4.s64 = 177;
	// li r3,176
	ctx.r3.s64 = 176;
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
	// bl 0x83294578
	ctx.lr = 0x832900E8;
	sub_83294578(ctx, base);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r11,176
	ctx.r3.s64 = ctx.r11.s64 + 176;
	// bl 0x832944e8
	ctx.lr = 0x832900F8;
	sub_832944E8(ctx, base);
	// stw r3,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r3.u32);
	// li r3,1
	ctx.r3.s64 = 1;
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

__attribute__((alias("__imp__sub_83290118"))) PPC_WEAK_FUNC(sub_83290118);
PPC_FUNC_IMPL(__imp__sub_83290118) {
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
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r4,178
	ctx.r4.s64 = 178;
	// li r3,177
	ctx.r3.s64 = 177;
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
	// bl 0x83294578
	ctx.lr = 0x83290148;
	sub_83294578(ctx, base);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r11,177
	ctx.r3.s64 = ctx.r11.s64 + 177;
	// bl 0x832944e8
	ctx.lr = 0x83290158;
	sub_832944E8(ctx, base);
	// stw r3,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r3.u32);
	// li r3,1
	ctx.r3.s64 = 1;
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

__attribute__((alias("__imp__sub_83290178"))) PPC_WEAK_FUNC(sub_83290178);
PPC_FUNC_IMPL(__imp__sub_83290178) {
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
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r4,179
	ctx.r4.s64 = 179;
	// li r3,178
	ctx.r3.s64 = 178;
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
	// bl 0x83294578
	ctx.lr = 0x832901A8;
	sub_83294578(ctx, base);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r11,178
	ctx.r3.s64 = ctx.r11.s64 + 178;
	// bl 0x832944e8
	ctx.lr = 0x832901B8;
	sub_832944E8(ctx, base);
	// stw r3,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r3.u32);
	// li r3,1
	ctx.r3.s64 = 1;
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

__attribute__((alias("__imp__sub_832901D8"))) PPC_WEAK_FUNC(sub_832901D8);
PPC_FUNC_IMPL(__imp__sub_832901D8) {
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
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r4,180
	ctx.r4.s64 = 180;
	// li r3,179
	ctx.r3.s64 = 179;
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
	// bl 0x83294578
	ctx.lr = 0x83290208;
	sub_83294578(ctx, base);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r11,179
	ctx.r3.s64 = ctx.r11.s64 + 179;
	// bl 0x832944e8
	ctx.lr = 0x83290218;
	sub_832944E8(ctx, base);
	// stw r3,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r3.u32);
	// li r3,1
	ctx.r3.s64 = 1;
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

__attribute__((alias("__imp__sub_83290238"))) PPC_WEAK_FUNC(sub_83290238);
PPC_FUNC_IMPL(__imp__sub_83290238) {
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
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// lwz r11,12(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// cmpwi cr6,r11,110
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 110, ctx.xer);
	// bge cr6,0x83290270
	if (!ctx.cr6.lt) goto loc_83290270;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x83290294
	goto loc_83290294;
loc_83290270:
	// li r4,184
	ctx.r4.s64 = 184;
	// li r3,180
	ctx.r3.s64 = 180;
	// bl 0x83294578
	ctx.lr = 0x8329027C;
	sub_83294578(ctx, base);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r11,180
	ctx.r3.s64 = ctx.r11.s64 + 180;
	// bl 0x832944e8
	ctx.lr = 0x8329028C;
	sub_832944E8(ctx, base);
	// stw r3,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r3.u32);
	// li r3,1
	ctx.r3.s64 = 1;
loc_83290294:
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

__attribute__((alias("__imp__sub_832902AC"))) PPC_WEAK_FUNC(sub_832902AC);
PPC_FUNC_IMPL(__imp__sub_832902AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832902B0"))) PPC_WEAK_FUNC(sub_832902B0);
PPC_FUNC_IMPL(__imp__sub_832902B0) {
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
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r4,188
	ctx.r4.s64 = 188;
	// li r3,184
	ctx.r3.s64 = 184;
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
	// bl 0x83294578
	ctx.lr = 0x832902E0;
	sub_83294578(ctx, base);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r11,184
	ctx.r3.s64 = ctx.r11.s64 + 184;
	// bl 0x832944e8
	ctx.lr = 0x832902F0;
	sub_832944E8(ctx, base);
	// stw r3,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r3.u32);
	// li r3,1
	ctx.r3.s64 = 1;
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

__attribute__((alias("__imp__sub_83290310"))) PPC_WEAK_FUNC(sub_83290310);
PPC_FUNC_IMPL(__imp__sub_83290310) {
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
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r4,192
	ctx.r4.s64 = 192;
	// li r3,188
	ctx.r3.s64 = 188;
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
	// bl 0x83294578
	ctx.lr = 0x83290340;
	sub_83294578(ctx, base);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r11,188
	ctx.r3.s64 = ctx.r11.s64 + 188;
	// bl 0x832944e8
	ctx.lr = 0x83290350;
	sub_832944E8(ctx, base);
	// stw r3,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r3.u32);
	// li r3,1
	ctx.r3.s64 = 1;
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

__attribute__((alias("__imp__sub_83290370"))) PPC_WEAK_FUNC(sub_83290370);
PPC_FUNC_IMPL(__imp__sub_83290370) {
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
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r4,196
	ctx.r4.s64 = 196;
	// li r3,192
	ctx.r3.s64 = 192;
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
	// bl 0x83294578
	ctx.lr = 0x832903A0;
	sub_83294578(ctx, base);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r11,192
	ctx.r3.s64 = ctx.r11.s64 + 192;
	// bl 0x832944e8
	ctx.lr = 0x832903B0;
	sub_832944E8(ctx, base);
	// stw r3,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r3.u32);
	// li r3,1
	ctx.r3.s64 = 1;
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

__attribute__((alias("__imp__sub_832903D0"))) PPC_WEAK_FUNC(sub_832903D0);
PPC_FUNC_IMPL(__imp__sub_832903D0) {
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
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// lwz r11,12(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// cmpwi cr6,r11,225
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 225, ctx.xer);
	// bge cr6,0x83290408
	if (!ctx.cr6.lt) goto loc_83290408;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x8329042c
	goto loc_8329042C;
loc_83290408:
	// li r4,200
	ctx.r4.s64 = 200;
	// li r3,196
	ctx.r3.s64 = 196;
	// bl 0x83294578
	ctx.lr = 0x83290414;
	sub_83294578(ctx, base);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r11,196
	ctx.r3.s64 = ctx.r11.s64 + 196;
	// bl 0x832944e8
	ctx.lr = 0x83290424;
	sub_832944E8(ctx, base);
	// stw r3,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r3.u32);
	// li r3,1
	ctx.r3.s64 = 1;
loc_8329042C:
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

__attribute__((alias("__imp__sub_83290444"))) PPC_WEAK_FUNC(sub_83290444);
PPC_FUNC_IMPL(__imp__sub_83290444) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83290448"))) PPC_WEAK_FUNC(sub_83290448);
PPC_FUNC_IMPL(__imp__sub_83290448) {
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
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r4,33
	ctx.r4.s64 = 33;
	// li r3,32
	ctx.r3.s64 = 32;
	// bl 0x83294578
	ctx.lr = 0x83290468;
	sub_83294578(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r31,32
	ctx.r3.s64 = ctx.r31.s64 + 32;
	// bl 0x832944e8
	ctx.lr = 0x83290474;
	sub_832944E8(ctx, base);
	// cmplwi cr6,r3,1
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 1, ctx.xer);
	// ble cr6,0x83290484
	if (!ctx.cr6.gt) goto loc_83290484;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x8329048c
	goto loc_8329048C;
loc_83290484:
	// addic r11,r3,-1
	ctx.xer.ca = ctx.r3.u32 > 0;
	ctx.r11.s64 = ctx.r3.s64 + -1;
	// subfe r3,r11,r3
	temp.u8 = (~ctx.r11.u32 + ctx.r3.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r3.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r3.u64 = ~ctx.r11.u64 + ctx.r3.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
loc_8329048C:
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

__attribute__((alias("__imp__sub_832904A0"))) PPC_WEAK_FUNC(sub_832904A0);
PPC_FUNC_IMPL(__imp__sub_832904A0) {
	PPC_FUNC_PROLOGUE();
	// cmplwi cr6,r3,192
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 192, ctx.xer);
	// blt cr6,0x832904b8
	if (ctx.cr6.lt) goto loc_832904B8;
	// cmplwi cr6,r3,223
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 223, ctx.xer);
	// bgt cr6,0x832904b8
	if (ctx.cr6.gt) goto loc_832904B8;
	// li r3,192
	ctx.r3.s64 = 192;
	// blr 
	return;
loc_832904B8:
	// cmplwi cr6,r3,224
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 224, ctx.xer);
	// blt cr6,0x832904d0
	if (ctx.cr6.lt) goto loc_832904D0;
	// cmplwi cr6,r3,239
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 239, ctx.xer);
	// bgt cr6,0x832904d0
	if (ctx.cr6.gt) goto loc_832904D0;
	// li r3,224
	ctx.r3.s64 = 224;
	// blr 
	return;
loc_832904D0:
	// cmplwi cr6,r3,189
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 189, ctx.xer);
	// beq cr6,0x832904e4
	if (ctx.cr6.eq) goto loc_832904E4;
	// cmplwi cr6,r3,191
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 191, ctx.xer);
	// li r3,0
	ctx.r3.s64 = 0;
	// bnelr cr6
	if (!ctx.cr6.eq) return;
loc_832904E4:
	// li r3,189
	ctx.r3.s64 = 189;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_832904EC"))) PPC_WEAK_FUNC(sub_832904EC);
PPC_FUNC_IMPL(__imp__sub_832904EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832904F0"))) PPC_WEAK_FUNC(sub_832904F0);
PPC_FUNC_IMPL(__imp__sub_832904F0) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// blt cr6,0x83290508
	if (ctx.cr6.lt) goto loc_83290508;
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// li r3,0
	ctx.r3.s64 = 0;
	// blelr cr6
	if (!ctx.cr6.gt) return;
loc_83290508:
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83290510"))) PPC_WEAK_FUNC(sub_83290510);
PPC_FUNC_IMPL(__imp__sub_83290510) {
	PPC_FUNC_PROLOGUE();
	// addi r11,r3,-1
	ctx.r11.s64 = ctx.r3.s64 + -1;
	// cmplwi cr6,r11,7
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 7, ctx.xer);
	// bgt cr6,0x8329058c
	if (ctx.cr6.gt) goto loc_8329058C;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bdzf 4*cr6+eq,0x83290548
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_83290548;
	// bdzf 4*cr6+eq,0x83290550
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_83290550;
	// bdzf 4*cr6+eq,0x83290558
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_83290558;
	// bdzf 4*cr6+eq,0x83290560
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_83290560;
	// bdzf 4*cr6+eq,0x83290568
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_83290568;
	// bdzf 4*cr6+eq,0x83290574
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_83290574;
	// bne cr6,0x83290580
	if (!ctx.cr6.eq) goto loc_83290580;
	// li r3,23976
	ctx.r3.s64 = 23976;
	// blr 
	return;
loc_83290548:
	// li r3,24000
	ctx.r3.s64 = 24000;
	// blr 
	return;
loc_83290550:
	// li r3,25000
	ctx.r3.s64 = 25000;
	// blr 
	return;
loc_83290558:
	// li r3,29970
	ctx.r3.s64 = 29970;
	// blr 
	return;
loc_83290560:
	// li r3,30000
	ctx.r3.s64 = 30000;
	// blr 
	return;
loc_83290568:
	// lis r3,0
	ctx.r3.s64 = 0;
	// ori r3,r3,50000
	ctx.r3.u64 = ctx.r3.u64 | 50000;
	// blr 
	return;
loc_83290574:
	// lis r3,0
	ctx.r3.s64 = 0;
	// ori r3,r3,59940
	ctx.r3.u64 = ctx.r3.u64 | 59940;
	// blr 
	return;
loc_83290580:
	// lis r3,0
	ctx.r3.s64 = 0;
	// ori r3,r3,60000
	ctx.r3.u64 = ctx.r3.u64 | 60000;
	// blr 
	return;
loc_8329058C:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83290594"))) PPC_WEAK_FUNC(sub_83290594);
PPC_FUNC_IMPL(__imp__sub_83290594) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83290598"))) PPC_WEAK_FUNC(sub_83290598);
PPC_FUNC_IMPL(__imp__sub_83290598) {
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
	// li r11,0
	ctx.r11.s64 = 0;
	// clrlwi r4,r4,24
	ctx.r4.u64 = ctx.r4.u32 & 0xFF;
	// stw r11,0(r5)
	PPC_STORE_U32(ctx.r5.u32 + 0, ctx.r11.u32);
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// lwz r3,4(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// bl 0x8328fe48
	ctx.lr = 0x832905C0;
	sub_8328FE48(ctx, base);
	// addic r11,r3,-1
	ctx.xer.ca = ctx.r3.u32 > 0;
	ctx.r11.s64 = ctx.r3.s64 + -1;
	// subfe r11,r11,r3
	temp.u8 = (~ctx.r11.u32 + ctx.r3.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r3.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r11.u64 + ctx.r3.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// rotlwi r3,r11,0
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
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

__attribute__((alias("__imp__sub_832905E4"))) PPC_WEAK_FUNC(sub_832905E4);
PPC_FUNC_IMPL(__imp__sub_832905E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832905E8"))) PPC_WEAK_FUNC(sub_832905E8);
PPC_FUNC_IMPL(__imp__sub_832905E8) {
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
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// bl 0x832904f0
	ctx.lr = 0x832905FC;
	sub_832904F0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x83290620
	if (ctx.cr0.eq) goto loc_83290620;
	// lwz r11,12(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// cmpwi cr6,r11,107
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 107, ctx.xer);
	// beq cr6,0x8329061c
	if (ctx.cr6.eq) goto loc_8329061C;
	// cmpwi cr6,r11,110
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 110, ctx.xer);
	// li r3,0
	ctx.r3.s64 = 0;
	// blt cr6,0x83290620
	if (ctx.cr6.lt) goto loc_83290620;
loc_8329061C:
	// li r3,1
	ctx.r3.s64 = 1;
loc_83290620:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83290630"))) PPC_WEAK_FUNC(sub_83290630);
PPC_FUNC_IMPL(__imp__sub_83290630) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x833a01a4
	ctx.lr = 0x83290638;
	__savegprlr_27(ctx, base);
	// stwu r1,-224(r1)
	ea = -224 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// li r4,57
	ctx.r4.s64 = 57;
	// li r3,56
	ctx.r3.s64 = 56;
	// stw r11,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r11.u32);
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// stw r11,0(r5)
	PPC_STORE_U32(ctx.r5.u32 + 0, ctx.r11.u32);
	// bl 0x83294578
	ctx.lr = 0x83290660;
	sub_83294578(ctx, base);
	// lwz r11,4(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 4);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r11,56
	ctx.r3.s64 = ctx.r11.s64 + 56;
	// bl 0x832944e8
	ctx.lr = 0x83290670;
	sub_832944E8(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r4,58
	ctx.r4.s64 = 58;
	// li r3,57
	ctx.r3.s64 = 57;
	// bl 0x83294578
	ctx.lr = 0x83290680;
	sub_83294578(ctx, base);
	// lwz r11,4(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 4);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r11,57
	ctx.r3.s64 = ctx.r11.s64 + 57;
	// bl 0x832944e8
	ctx.lr = 0x83290690;
	sub_832944E8(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x8328fea8
	ctx.lr = 0x832906A0;
	sub_8328FEA8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x832906b0
	if (!ctx.cr0.eq) goto loc_832906B0;
loc_832906A8:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x83290700
	goto loc_83290700;
loc_832906B0:
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8328fc30
	ctx.lr = 0x832906C0;
	sub_8328FC30(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x832906a8
	if (ctx.cr0.eq) goto loc_832906A8;
	// lwz r9,80(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// mulli r11,r31,100
	ctx.r11.s64 = ctx.r31.s64 * 100;
	// lwz r8,84(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// mulli r10,r9,100
	ctx.r10.s64 = ctx.r9.s64 * 100;
	// add r10,r10,r8
	ctx.r10.u64 = ctx.r10.u64 + ctx.r8.u64;
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + ctx.r30.u64;
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// blt cr6,0x832906f4
	if (ctx.cr6.lt) goto loc_832906F4;
	// stw r31,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r31.u32);
	// stw r30,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r30.u32);
	// b 0x832906fc
	goto loc_832906FC;
loc_832906F4:
	// stw r9,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r9.u32);
	// stw r8,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r8.u32);
loc_832906FC:
	// li r3,1
	ctx.r3.s64 = 1;
loc_83290700:
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x833a01f4
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83290708"))) PPC_WEAK_FUNC(sub_83290708);
PPC_FUNC_IMPL(__imp__sub_83290708) {
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
	// mr r9,r3
	ctx.r9.u64 = ctx.r3.u64;
	// bl 0x832905e8
	ctx.lr = 0x8329071C;
	sub_832905E8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x8329072c
	if (ctx.cr0.eq) goto loc_8329072C;
	// lwz r3,4(r9)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// bl 0x8328fe48
	ctx.lr = 0x8329072C;
	sub_8328FE48(ctx, base);
loc_8329072C:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8329073C"))) PPC_WEAK_FUNC(sub_8329073C);
PPC_FUNC_IMPL(__imp__sub_8329073C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83290740"))) PPC_WEAK_FUNC(sub_83290740);
PPC_FUNC_IMPL(__imp__sub_83290740) {
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
	// li r11,0
	ctx.r11.s64 = 0;
	// clrlwi r4,r4,24
	ctx.r4.u64 = ctx.r4.u32 & 0xFF;
	// stw r11,0(r5)
	PPC_STORE_U32(ctx.r5.u32 + 0, ctx.r11.u32);
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// bl 0x83290708
	ctx.lr = 0x83290768;
	sub_83290708(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// bne 0x83290778
	if (!ctx.cr0.eq) goto loc_83290778;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x832907e4
	goto loc_832907E4;
loc_83290778:
	// li r4,26
	ctx.r4.s64 = 26;
	// li r3,25
	ctx.r3.s64 = 25;
	// bl 0x83294578
	ctx.lr = 0x83290784;
	sub_83294578(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r31,25
	ctx.r3.s64 = ctx.r31.s64 + 25;
	// bl 0x832944e8
	ctx.lr = 0x83290790;
	sub_832944E8(ctx, base);
	// cmplwi cr6,r3,1
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 1, ctx.xer);
	// blt cr6,0x832907d8
	if (ctx.cr6.lt) goto loc_832907D8;
	// beq cr6,0x832907d0
	if (ctx.cr6.eq) goto loc_832907D0;
	// cmplwi cr6,r3,3
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 3, ctx.xer);
	// blt cr6,0x832907c8
	if (ctx.cr6.lt) goto loc_832907C8;
	// beq cr6,0x832907c0
	if (ctx.cr6.eq) goto loc_832907C0;
	// cmplwi cr6,r3,5
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 5, ctx.xer);
	// blt cr6,0x832907b8
	if (ctx.cr6.lt) goto loc_832907B8;
	// li r11,0
	ctx.r11.s64 = 0;
	// b 0x832907dc
	goto loc_832907DC;
loc_832907B8:
	// li r11,8
	ctx.r11.s64 = 8;
	// b 0x832907dc
	goto loc_832907DC;
loc_832907C0:
	// li r11,7
	ctx.r11.s64 = 7;
	// b 0x832907dc
	goto loc_832907DC;
loc_832907C8:
	// li r11,6
	ctx.r11.s64 = 6;
	// b 0x832907dc
	goto loc_832907DC;
loc_832907D0:
	// li r11,2
	ctx.r11.s64 = 2;
	// b 0x832907dc
	goto loc_832907DC;
loc_832907D8:
	// li r11,1
	ctx.r11.s64 = 1;
loc_832907DC:
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
	// li r3,1
	ctx.r3.s64 = 1;
loc_832907E4:
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

__attribute__((alias("__imp__sub_832907FC"))) PPC_WEAK_FUNC(sub_832907FC);
PPC_FUNC_IMPL(__imp__sub_832907FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83290800"))) PPC_WEAK_FUNC(sub_83290800);
PPC_FUNC_IMPL(__imp__sub_83290800) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x833a01a8
	ctx.lr = 0x83290808;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// stw r11,0(r5)
	PPC_STORE_U32(ctx.r5.u32 + 0, ctx.r11.u32);
	// clrlwi r4,r4,24
	ctx.r4.u64 = ctx.r4.u32 & 0xFF;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// bl 0x83290708
	ctx.lr = 0x83290828;
	sub_83290708(ctx, base);
	// mr. r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// bne 0x83290838
	if (!ctx.cr0.eq) goto loc_83290838;
loc_83290830:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x8329087c
	goto loc_8329087C;
loc_83290838:
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83290740
	ctx.lr = 0x83290848;
	sub_83290740(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x83290830
	if (ctx.cr0.eq) goto loc_83290830;
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// bne cr6,0x83290830
	if (!ctx.cr6.eq) goto loc_83290830;
	// li r4,27
	ctx.r4.s64 = 27;
	// li r3,26
	ctx.r3.s64 = 26;
	// bl 0x83294578
	ctx.lr = 0x83290868;
	sub_83294578(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r28,26
	ctx.r3.s64 = ctx.r28.s64 + 26;
	// bl 0x832944e8
	ctx.lr = 0x83290874;
	sub_832944E8(ctx, base);
	// stw r3,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r3.u32);
	// li r3,1
	ctx.r3.s64 = 1;
loc_8329087C:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x833a01f8
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83290884"))) PPC_WEAK_FUNC(sub_83290884);
PPC_FUNC_IMPL(__imp__sub_83290884) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83290888"))) PPC_WEAK_FUNC(sub_83290888);
PPC_FUNC_IMPL(__imp__sub_83290888) {
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
	// li r11,0
	ctx.r11.s64 = 0;
	// clrlwi r4,r4,24
	ctx.r4.u64 = ctx.r4.u32 & 0xFF;
	// stw r11,0(r5)
	PPC_STORE_U32(ctx.r5.u32 + 0, ctx.r11.u32);
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// bl 0x83290708
	ctx.lr = 0x832908B0;
	sub_83290708(ctx, base);
	// mr. r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// bne 0x832908c0
	if (!ctx.cr0.eq) goto loc_832908C0;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x832908e0
	goto loc_832908E0;
loc_832908C0:
	// li r4,28
	ctx.r4.s64 = 28;
	// li r3,27
	ctx.r3.s64 = 27;
	// bl 0x83294578
	ctx.lr = 0x832908CC;
	sub_83294578(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r30,27
	ctx.r3.s64 = ctx.r30.s64 + 27;
	// bl 0x832944e8
	ctx.lr = 0x832908D8;
	sub_832944E8(ctx, base);
	// stw r3,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r3.u32);
	// li r3,1
	ctx.r3.s64 = 1;
loc_832908E0:
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

__attribute__((alias("__imp__sub_832908F8"))) PPC_WEAK_FUNC(sub_832908F8);
PPC_FUNC_IMPL(__imp__sub_832908F8) {
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
	// li r11,0
	ctx.r11.s64 = 0;
	// clrlwi r4,r4,24
	ctx.r4.u64 = ctx.r4.u32 & 0xFF;
	// stw r11,0(r5)
	PPC_STORE_U32(ctx.r5.u32 + 0, ctx.r11.u32);
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// bl 0x83290708
	ctx.lr = 0x83290920;
	sub_83290708(ctx, base);
	// mr. r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// bne 0x83290930
	if (!ctx.cr0.eq) goto loc_83290930;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x83290950
	goto loc_83290950;
loc_83290930:
	// li r4,32
	ctx.r4.s64 = 32;
	// li r3,28
	ctx.r3.s64 = 28;
	// bl 0x83294578
	ctx.lr = 0x8329093C;
	sub_83294578(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r30,28
	ctx.r3.s64 = ctx.r30.s64 + 28;
	// bl 0x832944e8
	ctx.lr = 0x83290948;
	sub_832944E8(ctx, base);
	// stw r3,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r3.u32);
	// li r3,1
	ctx.r3.s64 = 1;
loc_83290950:
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

__attribute__((alias("__imp__sub_83290968"))) PPC_WEAK_FUNC(sub_83290968);
PPC_FUNC_IMPL(__imp__sub_83290968) {
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
	// li r11,0
	ctx.r11.s64 = 0;
	// clrlwi r4,r4,24
	ctx.r4.u64 = ctx.r4.u32 & 0xFF;
	// stw r11,0(r5)
	PPC_STORE_U32(ctx.r5.u32 + 0, ctx.r11.u32);
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// bl 0x83290708
	ctx.lr = 0x83290990;
	sub_83290708(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// bne 0x832909a0
	if (!ctx.cr0.eq) goto loc_832909A0;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x83290a20
	goto loc_83290A20;
loc_832909A0:
	// li r4,26
	ctx.r4.s64 = 26;
	// li r3,25
	ctx.r3.s64 = 25;
	// bl 0x83294578
	ctx.lr = 0x832909AC;
	sub_83294578(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r31,25
	ctx.r3.s64 = ctx.r31.s64 + 25;
	// bl 0x832944e8
	ctx.lr = 0x832909B8;
	sub_832944E8(ctx, base);
	// cmplwi cr6,r3,1
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 1, ctx.xer);
	// blt cr6,0x83290a14
	if (ctx.cr6.lt) goto loc_83290A14;
	// beq cr6,0x83290a0c
	if (ctx.cr6.eq) goto loc_83290A0C;
	// cmplwi cr6,r3,3
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 3, ctx.xer);
	// blt cr6,0x83290a0c
	if (ctx.cr6.lt) goto loc_83290A0C;
	// beq cr6,0x83290a04
	if (ctx.cr6.eq) goto loc_83290A04;
	// cmplwi cr6,r3,5
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 5, ctx.xer);
	// blt cr6,0x832909fc
	if (ctx.cr6.lt) goto loc_832909FC;
	// beq cr6,0x832909f4
	if (ctx.cr6.eq) goto loc_832909F4;
	// cmplwi cr6,r3,7
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 7, ctx.xer);
	// blt cr6,0x832909ec
	if (ctx.cr6.lt) goto loc_832909EC;
	// li r11,0
	ctx.r11.s64 = 0;
	// b 0x83290a18
	goto loc_83290A18;
loc_832909EC:
	// li r11,7
	ctx.r11.s64 = 7;
	// b 0x83290a18
	goto loc_83290A18;
loc_832909F4:
	// li r11,6
	ctx.r11.s64 = 6;
	// b 0x83290a18
	goto loc_83290A18;
loc_832909FC:
	// li r11,5
	ctx.r11.s64 = 5;
	// b 0x83290a18
	goto loc_83290A18;
loc_83290A04:
	// li r11,4
	ctx.r11.s64 = 4;
	// b 0x83290a18
	goto loc_83290A18;
loc_83290A0C:
	// li r11,3
	ctx.r11.s64 = 3;
	// b 0x83290a18
	goto loc_83290A18;
loc_83290A14:
	// li r11,1
	ctx.r11.s64 = 1;
loc_83290A18:
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
	// li r3,1
	ctx.r3.s64 = 1;
loc_83290A20:
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

__attribute__((alias("__imp__sub_83290A38"))) PPC_WEAK_FUNC(sub_83290A38);
PPC_FUNC_IMPL(__imp__sub_83290A38) {
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
	// li r11,0
	ctx.r11.s64 = 0;
	// clrlwi r4,r4,24
	ctx.r4.u64 = ctx.r4.u32 & 0xFF;
	// stw r11,0(r5)
	PPC_STORE_U32(ctx.r5.u32 + 0, ctx.r11.u32);
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// bl 0x83290708
	ctx.lr = 0x83290A60;
	sub_83290708(ctx, base);
	// mr. r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// bne 0x83290a70
	if (!ctx.cr0.eq) goto loc_83290A70;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x83290aa8
	goto loc_83290AA8;
loc_83290A70:
	// li r4,28
	ctx.r4.s64 = 28;
	// li r3,26
	ctx.r3.s64 = 26;
	// bl 0x83294578
	ctx.lr = 0x83290A7C;
	sub_83294578(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r30,26
	ctx.r3.s64 = ctx.r30.s64 + 26;
	// bl 0x832944e8
	ctx.lr = 0x83290A88;
	sub_832944E8(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// li r3,1
	ctx.r3.s64 = 1;
	// addis r10,r11,-1
	ctx.r10.s64 = ctx.r11.s64 + -65536;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// subfic r10,r10,0
	ctx.xer.ca = ctx.r10.u32 <= 0;
	ctx.r10.s64 = 0 - ctx.r10.s64;
	// subfe r10,r10,r10
	temp.u8 = (~ctx.r10.u32 + ctx.r10.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r10.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r10.u64 = ~ctx.r10.u64 + ctx.r10.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 & ctx.r11.u64;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
loc_83290AA8:
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

__attribute__((alias("__imp__sub_83290AC0"))) PPC_WEAK_FUNC(sub_83290AC0);
PPC_FUNC_IMPL(__imp__sub_83290AC0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x833a01ac
	ctx.lr = 0x83290AC8;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r11,0
	ctx.r11.s64 = 0;
	// clrlwi r4,r4,24
	ctx.r4.u64 = ctx.r4.u32 & 0xFF;
	// stw r11,0(r5)
	PPC_STORE_U32(ctx.r5.u32 + 0, ctx.r11.u32);
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// stw r11,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r11.u32);
	// mr r30,r6
	ctx.r30.u64 = ctx.r6.u64;
	// bl 0x83290708
	ctx.lr = 0x83290AE8;
	sub_83290708(ctx, base);
	// mr. r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// bne 0x83290af8
	if (!ctx.cr0.eq) goto loc_83290AF8;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x83290b28
	goto loc_83290B28;
loc_83290AF8:
	// li r4,31
	ctx.r4.s64 = 31;
	// li r3,28
	ctx.r3.s64 = 28;
	// bl 0x83294578
	ctx.lr = 0x83290B04;
	sub_83294578(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r29,28
	ctx.r3.s64 = ctx.r29.s64 + 28;
	// bl 0x83294518
	ctx.lr = 0x83290B10;
	sub_83294518(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// li r3,1
	ctx.r3.s64 = 1;
	// rlwinm r10,r11,20,20,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 20) & 0xFFF;
	// clrlwi r11,r11,20
	ctx.r11.u64 = ctx.r11.u32 & 0xFFF;
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
loc_83290B28:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x833a01fc
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83290B30"))) PPC_WEAK_FUNC(sub_83290B30);
PPC_FUNC_IMPL(__imp__sub_83290B30) {
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
	// li r11,0
	ctx.r11.s64 = 0;
	// clrlwi r4,r4,24
	ctx.r4.u64 = ctx.r4.u32 & 0xFF;
	// stw r11,0(r5)
	PPC_STORE_U32(ctx.r5.u32 + 0, ctx.r11.u32);
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// bl 0x83290708
	ctx.lr = 0x83290B58;
	sub_83290708(ctx, base);
	// mr. r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// bne 0x83290b68
	if (!ctx.cr0.eq) goto loc_83290B68;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x83290b8c
	goto loc_83290B8C;
loc_83290B68:
	// li r4,32
	ctx.r4.s64 = 32;
	// li r3,31
	ctx.r3.s64 = 31;
	// bl 0x83294578
	ctx.lr = 0x83290B74;
	sub_83294578(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r30,31
	ctx.r3.s64 = ctx.r30.s64 + 31;
	// bl 0x832944e8
	ctx.lr = 0x83290B80;
	sub_832944E8(ctx, base);
	// bl 0x83290510
	ctx.lr = 0x83290B84;
	sub_83290510(ctx, base);
	// stw r3,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r3.u32);
	// li r3,1
	ctx.r3.s64 = 1;
loc_83290B8C:
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

__attribute__((alias("__imp__sub_83290BA4"))) PPC_WEAK_FUNC(sub_83290BA4);
PPC_FUNC_IMPL(__imp__sub_83290BA4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83290BA8"))) PPC_WEAK_FUNC(sub_83290BA8);
PPC_FUNC_IMPL(__imp__sub_83290BA8) {
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
	// li r11,0
	ctx.r11.s64 = 0;
	// clrlwi r4,r4,24
	ctx.r4.u64 = ctx.r4.u32 & 0xFF;
	// stw r11,0(r5)
	PPC_STORE_U32(ctx.r5.u32 + 0, ctx.r11.u32);
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// bl 0x83290708
	ctx.lr = 0x83290BD0;
	sub_83290708(ctx, base);
	// mr. r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// bne 0x83290be0
	if (!ctx.cr0.eq) goto loc_83290BE0;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x83290c00
	goto loc_83290C00;
loc_83290BE0:
	// li r4,34
	ctx.r4.s64 = 34;
	// li r3,33
	ctx.r3.s64 = 33;
	// bl 0x83294578
	ctx.lr = 0x83290BEC;
	sub_83294578(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r30,33
	ctx.r3.s64 = ctx.r30.s64 + 33;
	// bl 0x832944e8
	ctx.lr = 0x83290BF8;
	sub_832944E8(ctx, base);
	// stw r3,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r3.u32);
	// li r3,1
	ctx.r3.s64 = 1;
loc_83290C00:
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

__attribute__((alias("__imp__sub_83290C18"))) PPC_WEAK_FUNC(sub_83290C18);
PPC_FUNC_IMPL(__imp__sub_83290C18) {
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
	// li r11,0
	ctx.r11.s64 = 0;
	// clrlwi r4,r4,24
	ctx.r4.u64 = ctx.r4.u32 & 0xFF;
	// stw r11,0(r5)
	PPC_STORE_U32(ctx.r5.u32 + 0, ctx.r11.u32);
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// bl 0x83290708
	ctx.lr = 0x83290C40;
	sub_83290708(ctx, base);
	// mr. r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// bne 0x83290c50
	if (!ctx.cr0.eq) goto loc_83290C50;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x83290c70
	goto loc_83290C70;
loc_83290C50:
	// li r4,35
	ctx.r4.s64 = 35;
	// li r3,34
	ctx.r3.s64 = 34;
	// bl 0x83294578
	ctx.lr = 0x83290C5C;
	sub_83294578(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r30,34
	ctx.r3.s64 = ctx.r30.s64 + 34;
	// bl 0x832944e8
	ctx.lr = 0x83290C68;
	sub_832944E8(ctx, base);
	// stw r3,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r3.u32);
	// li r3,1
	ctx.r3.s64 = 1;
loc_83290C70:
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

__attribute__((alias("__imp__sub_83290C88"))) PPC_WEAK_FUNC(sub_83290C88);
PPC_FUNC_IMPL(__imp__sub_83290C88) {
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
	// li r11,0
	ctx.r11.s64 = 0;
	// clrlwi r4,r4,24
	ctx.r4.u64 = ctx.r4.u32 & 0xFF;
	// stw r11,0(r5)
	PPC_STORE_U32(ctx.r5.u32 + 0, ctx.r11.u32);
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// bl 0x83290708
	ctx.lr = 0x83290CB0;
	sub_83290708(ctx, base);
	// mr. r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// bne 0x83290cc0
	if (!ctx.cr0.eq) goto loc_83290CC0;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x83290ce4
	goto loc_83290CE4;
loc_83290CC0:
	// li r4,36
	ctx.r4.s64 = 36;
	// li r3,35
	ctx.r3.s64 = 35;
	// bl 0x83294578
	ctx.lr = 0x83290CCC;
	sub_83294578(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r30,35
	ctx.r3.s64 = ctx.r30.s64 + 35;
	// bl 0x832944e8
	ctx.lr = 0x83290CD8;
	sub_832944E8(ctx, base);
	// clrlwi r11,r3,31
	ctx.r11.u64 = ctx.r3.u32 & 0x1;
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
loc_83290CE4:
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

__attribute__((alias("__imp__sub_83290CFC"))) PPC_WEAK_FUNC(sub_83290CFC);
PPC_FUNC_IMPL(__imp__sub_83290CFC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83290D00"))) PPC_WEAK_FUNC(sub_83290D00);
PPC_FUNC_IMPL(__imp__sub_83290D00) {
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
	// li r11,0
	ctx.r11.s64 = 0;
	// clrlwi r4,r4,24
	ctx.r4.u64 = ctx.r4.u32 & 0xFF;
	// stw r11,0(r5)
	PPC_STORE_U32(ctx.r5.u32 + 0, ctx.r11.u32);
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// bl 0x83290708
	ctx.lr = 0x83290D28;
	sub_83290708(ctx, base);
	// mr. r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// bne 0x83290d38
	if (!ctx.cr0.eq) goto loc_83290D38;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x83290d5c
	goto loc_83290D5C;
loc_83290D38:
	// li r4,36
	ctx.r4.s64 = 36;
	// li r3,35
	ctx.r3.s64 = 35;
	// bl 0x83294578
	ctx.lr = 0x83290D44;
	sub_83294578(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r30,35
	ctx.r3.s64 = ctx.r30.s64 + 35;
	// bl 0x832944e8
	ctx.lr = 0x83290D50;
	sub_832944E8(ctx, base);
	// rlwinm r11,r3,28,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 28) & 0x1;
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
loc_83290D5C:
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

__attribute__((alias("__imp__sub_83290D74"))) PPC_WEAK_FUNC(sub_83290D74);
PPC_FUNC_IMPL(__imp__sub_83290D74) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83290D78"))) PPC_WEAK_FUNC(sub_83290D78);
PPC_FUNC_IMPL(__imp__sub_83290D78) {
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
	// li r11,0
	ctx.r11.s64 = 0;
	// clrlwi r4,r4,24
	ctx.r4.u64 = ctx.r4.u32 & 0xFF;
	// stw r11,0(r5)
	PPC_STORE_U32(ctx.r5.u32 + 0, ctx.r11.u32);
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// bl 0x83290708
	ctx.lr = 0x83290DA0;
	sub_83290708(ctx, base);
	// mr. r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// bne 0x83290db0
	if (!ctx.cr0.eq) goto loc_83290DB0;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x83290dd0
	goto loc_83290DD0;
loc_83290DB0:
	// li r4,37
	ctx.r4.s64 = 37;
	// li r3,36
	ctx.r3.s64 = 36;
	// bl 0x83294578
	ctx.lr = 0x83290DBC;
	sub_83294578(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r30,36
	ctx.r3.s64 = ctx.r30.s64 + 36;
	// bl 0x832944e8
	ctx.lr = 0x83290DC8;
	sub_832944E8(ctx, base);
	// stw r3,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r3.u32);
	// li r3,1
	ctx.r3.s64 = 1;
loc_83290DD0:
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

__attribute__((alias("__imp__sub_83290DE8"))) PPC_WEAK_FUNC(sub_83290DE8);
PPC_FUNC_IMPL(__imp__sub_83290DE8) {
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
	// li r11,0
	ctx.r11.s64 = 0;
	// clrlwi r4,r4,24
	ctx.r4.u64 = ctx.r4.u32 & 0xFF;
	// stw r11,0(r5)
	PPC_STORE_U32(ctx.r5.u32 + 0, ctx.r11.u32);
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// bl 0x83290708
	ctx.lr = 0x83290E10;
	sub_83290708(ctx, base);
	// mr. r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// bne 0x83290e20
	if (!ctx.cr0.eq) goto loc_83290E20;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x83290e50
	goto loc_83290E50;
loc_83290E20:
	// li r4,38
	ctx.r4.s64 = 38;
	// li r3,37
	ctx.r3.s64 = 37;
	// bl 0x83294578
	ctx.lr = 0x83290E2C;
	sub_83294578(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r30,37
	ctx.r3.s64 = ctx.r30.s64 + 37;
	// bl 0x832944e8
	ctx.lr = 0x83290E38;
	sub_832944E8(ctx, base);
	// stw r3,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r3.u32);
	// cmpwi cr6,r3,63
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 63, ctx.xer);
	// ble cr6,0x83290e4c
	if (!ctx.cr6.gt) goto loc_83290E4C;
	// li r11,-1
	ctx.r11.s64 = -1;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
loc_83290E4C:
	// li r3,1
	ctx.r3.s64 = 1;
loc_83290E50:
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

__attribute__((alias("__imp__sub_83290E68"))) PPC_WEAK_FUNC(sub_83290E68);
PPC_FUNC_IMPL(__imp__sub_83290E68) {
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
	// li r11,0
	ctx.r11.s64 = 0;
	// clrlwi r4,r4,24
	ctx.r4.u64 = ctx.r4.u32 & 0xFF;
	// stw r11,0(r5)
	PPC_STORE_U32(ctx.r5.u32 + 0, ctx.r11.u32);
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// bl 0x83290708
	ctx.lr = 0x83290E90;
	sub_83290708(ctx, base);
	// mr. r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// bne 0x83290ea0
	if (!ctx.cr0.eq) goto loc_83290EA0;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x83290ed0
	goto loc_83290ED0;
loc_83290EA0:
	// li r4,39
	ctx.r4.s64 = 39;
	// li r3,38
	ctx.r3.s64 = 38;
	// bl 0x83294578
	ctx.lr = 0x83290EAC;
	sub_83294578(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r30,38
	ctx.r3.s64 = ctx.r30.s64 + 38;
	// bl 0x832944e8
	ctx.lr = 0x83290EB8;
	sub_832944E8(ctx, base);
	// stw r3,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r3.u32);
	// cmpwi cr6,r3,63
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 63, ctx.xer);
	// ble cr6,0x83290ecc
	if (!ctx.cr6.gt) goto loc_83290ECC;
	// li r11,-1
	ctx.r11.s64 = -1;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
loc_83290ECC:
	// li r3,1
	ctx.r3.s64 = 1;
loc_83290ED0:
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

__attribute__((alias("__imp__sub_83290EE8"))) PPC_WEAK_FUNC(sub_83290EE8);
PPC_FUNC_IMPL(__imp__sub_83290EE8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x833a01ac
	ctx.lr = 0x83290EF0;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r11,0
	ctx.r11.s64 = 0;
	// clrlwi r4,r4,24
	ctx.r4.u64 = ctx.r4.u32 & 0xFF;
	// stw r11,0(r5)
	PPC_STORE_U32(ctx.r5.u32 + 0, ctx.r11.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// bl 0x83290708
	ctx.lr = 0x83290F0C;
	sub_83290708(ctx, base);
	// mr. r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// bne 0x83290f1c
	if (!ctx.cr0.eq) goto loc_83290F1C;
loc_83290F14:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x83290f48
	goto loc_83290F48;
loc_83290F1C:
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// cmpwi cr6,r11,210
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 210, ctx.xer);
	// blt cr6,0x83290f14
	if (ctx.cr6.lt) goto loc_83290F14;
	// li r4,40
	ctx.r4.s64 = 40;
	// li r3,39
	ctx.r3.s64 = 39;
	// bl 0x83294578
	ctx.lr = 0x83290F34;
	sub_83294578(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r29,39
	ctx.r3.s64 = ctx.r29.s64 + 39;
	// bl 0x832944e8
	ctx.lr = 0x83290F40;
	sub_832944E8(ctx, base);
	// stw r3,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r3.u32);
	// li r3,1
	ctx.r3.s64 = 1;
loc_83290F48:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x833a01fc
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83290F50"))) PPC_WEAK_FUNC(sub_83290F50);
PPC_FUNC_IMPL(__imp__sub_83290F50) {
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
	// li r11,0
	ctx.r11.s64 = 0;
	// clrlwi r4,r4,24
	ctx.r4.u64 = ctx.r4.u32 & 0xFF;
	// stw r11,0(r5)
	PPC_STORE_U32(ctx.r5.u32 + 0, ctx.r11.u32);
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// bl 0x83290708
	ctx.lr = 0x83290F78;
	sub_83290708(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// bne 0x83290f88
	if (!ctx.cr0.eq) goto loc_83290F88;
loc_83290F80:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x83290fb8
	goto loc_83290FB8;
loc_83290F88:
	// li r4,42
	ctx.r4.s64 = 42;
	// li r3,40
	ctx.r3.s64 = 40;
	// bl 0x83294578
	ctx.lr = 0x83290F94;
	sub_83294578(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r31,40
	ctx.r3.s64 = ctx.r31.s64 + 40;
	// bl 0x832944e8
	ctx.lr = 0x83290FA0;
	sub_832944E8(ctx, base);
	// srawi r11,r3,1
	ctx.xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0x1) != 0);
	ctx.r11.s64 = ctx.r3.s32 >> 1;
	// rlwimi r11,r3,0,25,31
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r3.u32, 0) & 0x7F) | (ctx.r11.u64 & 0xFFFFFFFFFFFFFF80);
	// clrlwi. r11,r11,18
	ctx.r11.u64 = ctx.r11.u32 & 0x3FFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x83290f80
	if (ctx.cr0.eq) goto loc_83290F80;
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
	// li r3,1
	ctx.r3.s64 = 1;
loc_83290FB8:
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

__attribute__((alias("__imp__sub_83290FD0"))) PPC_WEAK_FUNC(sub_83290FD0);
PPC_FUNC_IMPL(__imp__sub_83290FD0) {
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
	// li r11,0
	ctx.r11.s64 = 0;
	// clrlwi r4,r4,24
	ctx.r4.u64 = ctx.r4.u32 & 0xFF;
	// stw r11,0(r5)
	PPC_STORE_U32(ctx.r5.u32 + 0, ctx.r11.u32);
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// bl 0x83290708
	ctx.lr = 0x83290FF8;
	sub_83290708(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// bne 0x83291008
	if (!ctx.cr0.eq) goto loc_83291008;
loc_83291000:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x83291038
	goto loc_83291038;
loc_83291008:
	// li r4,44
	ctx.r4.s64 = 44;
	// li r3,42
	ctx.r3.s64 = 42;
	// bl 0x83294578
	ctx.lr = 0x83291014;
	sub_83294578(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r31,42
	ctx.r3.s64 = ctx.r31.s64 + 42;
	// bl 0x832944e8
	ctx.lr = 0x83291020;
	sub_832944E8(ctx, base);
	// srawi r11,r3,1
	ctx.xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0x1) != 0);
	ctx.r11.s64 = ctx.r3.s32 >> 1;
	// rlwimi r11,r3,0,25,31
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r3.u32, 0) & 0x7F) | (ctx.r11.u64 & 0xFFFFFFFFFFFFFF80);
	// clrlwi. r11,r11,18
	ctx.r11.u64 = ctx.r11.u32 & 0x3FFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x83291000
	if (ctx.cr0.eq) goto loc_83291000;
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
	// li r3,1
	ctx.r3.s64 = 1;
loc_83291038:
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

__attribute__((alias("__imp__sub_83291050"))) PPC_WEAK_FUNC(sub_83291050);
PPC_FUNC_IMPL(__imp__sub_83291050) {
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
	// li r10,0
	ctx.r10.s64 = 0;
	// lis r11,-32219
	ctx.r11.s64 = -2111504384;
	// stw r10,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r10.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r9,4(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// addi r10,r11,22968
	ctx.r10.s64 = ctx.r11.s64 + 22968;
	// addi r11,r9,32
	ctx.r11.s64 = ctx.r9.s64 + 32;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// addi r9,r11,24
	ctx.r9.s64 = ctx.r11.s64 + 24;
loc_83291088:
	// lbz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r7,0(r10)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// subf. r8,r7,r8
	ctx.r8.s64 = ctx.r8.s64 - ctx.r7.s64;
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// bne 0x832910a8
	if (!ctx.cr0.eq) goto loc_832910A8;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpw cr6,r11,r9
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r9.s32, ctx.xer);
	// bne cr6,0x83291088
	if (!ctx.cr6.eq) goto loc_83291088;
loc_832910A8:
	// cmpwi r8,0
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq 0x832910c0
	if (ctx.cr0.eq) goto loc_832910C0;
	// li r11,-1
	ctx.r11.s64 = -1;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// b 0x83291158
	goto loc_83291158;
loc_832910C0:
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8328ff08
	ctx.lr = 0x832910D0;
	sub_8328FF08(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x832910ec
	if (ctx.cr0.eq) goto loc_832910EC;
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r10,84(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// rlwinm r11,r11,8,0,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 8) & 0xFFFFFF00;
	// or r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 | ctx.r10.u64;
	// stw r11,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r11.u32);
loc_832910EC:
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83290630
	ctx.lr = 0x832910FC;
	sub_83290630(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x83291118
	if (ctx.cr0.eq) goto loc_83291118;
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// rlwinm r11,r11,8,0,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 8) & 0xFFFFFF00;
	// or r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 | ctx.r10.u64;
	// stw r11,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r11.u32);
loc_83291118:
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8328ff20
	ctx.lr = 0x83291128;
	sub_8328FF20(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x83291144
	if (ctx.cr0.eq) goto loc_83291144;
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// rlwinm r11,r11,8,0,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 8) & 0xFFFFFF00;
	// or r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 | ctx.r10.u64;
	// stw r11,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r11.u32);
loc_83291144:
	// li r11,2
	ctx.r11.s64 = 2;
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r10,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r10.u32);
loc_83291158:
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

__attribute__((alias("__imp__sub_83291170"))) PPC_WEAK_FUNC(sub_83291170);
PPC_FUNC_IMPL(__imp__sub_83291170) {
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
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// stw r11,0(r5)
	PPC_STORE_U32(ctx.r5.u32 + 0, ctx.r11.u32);
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// lwz r11,12(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// cmpwi cr6,r11,110
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 110, ctx.xer);
	// bge cr6,0x832911a4
	if (!ctx.cr6.lt) goto loc_832911A4;
loc_8329119C:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x832911d8
	goto loc_832911D8;
loc_832911A4:
	// clrlwi r4,r4,24
	ctx.r4.u64 = ctx.r4.u32 & 0xFF;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// bl 0x832904a0
	ctx.lr = 0x832911B0;
	sub_832904A0(ctx, base);
	// cmplwi cr6,r3,192
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 192, ctx.xer);
	// beq cr6,0x832911c0
	if (ctx.cr6.eq) goto loc_832911C0;
	// cmplwi cr6,r3,224
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 224, ctx.xer);
	// bne cr6,0x8329119c
	if (!ctx.cr6.eq) goto loc_8329119C;
loc_832911C0:
	// mr r3,r10
	ctx.r3.u64 = ctx.r10.u64;
	// bl 0x83290708
	ctx.lr = 0x832911C8;
	sub_83290708(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8329119c
	if (ctx.cr0.eq) goto loc_8329119C;
	// bl 0x83290448
	ctx.lr = 0x832911D4;
	sub_83290448(ctx, base);
	// stw r3,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r3.u32);
loc_832911D8:
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

__attribute__((alias("__imp__sub_832911EC"))) PPC_WEAK_FUNC(sub_832911EC);
PPC_FUNC_IMPL(__imp__sub_832911EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832911F0"))) PPC_WEAK_FUNC(sub_832911F0);
PPC_FUNC_IMPL(__imp__sub_832911F0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32219
	ctx.r11.s64 = -2111504384;
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// addi r11,r11,21384
	ctx.r11.s64 = ctx.r11.s64 + 21384;
loc_832911FC:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// cmpwi r9,0
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// subf r9,r8,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r8.s64;
	// beq 0x83291220
	if (ctx.cr0.eq) goto loc_83291220;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x832911fc
	if (ctx.cr6.eq) goto loc_832911FC;
loc_83291220:
	// cmpwi r9,0
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq 0x83291230
	if (ctx.cr0.eq) goto loc_83291230;
loc_83291228:
	// li r3,-1
	ctx.r3.s64 = -1;
	// blr 
	return;
loc_83291230:
	// cmplwi cr6,r4,5420
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 5420, ctx.xer);
	// bne cr6,0x83291228
	if (!ctx.cr6.eq) goto loc_83291228;
	// addi r11,r5,-128
	ctx.r11.s64 = ctx.r5.s64 + -128;
	// subfic r11,r11,0
	ctx.xer.ca = ctx.r11.u32 <= 0;
	ctx.r11.s64 = 0 - ctx.r11.s64;
	// subfe r3,r11,r11
	temp.u8 = (~ctx.r11.u32 + ctx.r11.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r3.u64 = ~ctx.r11.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83291248"))) PPC_WEAK_FUNC(sub_83291248);
PPC_FUNC_IMPL(__imp__sub_83291248) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lis r10,-31826
	ctx.r10.s64 = -2085748736;
	// li r11,16
	ctx.r11.s64 = 16;
	// addi r4,r10,-30960
	ctx.r4.s64 = ctx.r10.s64 + -30960;
	// li r7,576
	ctx.r7.s64 = 576;
	// addi r10,r4,1600
	ctx.r10.s64 = ctx.r4.s64 + 1600;
	// mr r9,r7
	ctx.r9.u64 = ctx.r7.u64;
	// addi r10,r10,-2
	ctx.r10.s64 = ctx.r10.s64 + -2;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
loc_83291268:
	// sthu r9,2(r10)
	ea = 2 + ctx.r10.u32;
	PPC_STORE_U16(ea, ctx.r9.u16);
	ctx.r10.u32 = ea;
	// bdnz 0x83291268
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_83291268;
	// li r10,12
	ctx.r10.s64 = 12;
	// li r8,571
	ctx.r8.s64 = 571;
	// addi r9,r4,1600
	ctx.r9.s64 = ctx.r4.s64 + 1600;
	// sth r8,1632(r4)
	PPC_STORE_U16(ctx.r4.u32 + 1632, ctx.r8.u16);
	// addi r11,r4,1600
	ctx.r11.s64 = ctx.r4.s64 + 1600;
	// sth r8,1634(r4)
	PPC_STORE_U16(ctx.r4.u32 + 1634, ctx.r8.u16);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// addi r10,r9,34
	ctx.r10.s64 = ctx.r9.s64 + 34;
loc_83291290:
	// sthu r7,2(r10)
	ea = 2 + ctx.r10.u32;
	PPC_STORE_U16(ea, ctx.r7.u16);
	ctx.r10.u32 = ea;
	// bdnz 0x83291290
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_83291290;
	// li r10,16
	ctx.r10.s64 = 16;
	// li r8,555
	ctx.r8.s64 = 555;
	// addi r9,r4,1600
	ctx.r9.s64 = ctx.r4.s64 + 1600;
	// sth r8,1660(r4)
	PPC_STORE_U16(ctx.r4.u32 + 1660, ctx.r8.u16);
	// addi r11,r4,1600
	ctx.r11.s64 = ctx.r4.s64 + 1600;
	// sth r8,1662(r4)
	PPC_STORE_U16(ctx.r4.u32 + 1662, ctx.r8.u16);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// addi r10,r9,62
	ctx.r10.s64 = ctx.r9.s64 + 62;
loc_832912B8:
	// sthu r7,2(r10)
	ea = 2 + ctx.r10.u32;
	PPC_STORE_U16(ea, ctx.r7.u16);
	ctx.r10.u32 = ea;
	// bdnz 0x832912b8
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_832912B8;
	// addi r11,r4,1600
	ctx.r11.s64 = ctx.r4.s64 + 1600;
	// li r10,33
	ctx.r10.s64 = 33;
	// addi r11,r11,96
	ctx.r11.s64 = ctx.r11.s64 + 96;
loc_832912CC:
	// rlwinm r9,r10,4,0,27
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 4) & 0xFFFFFFF0;
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// ori r8,r9,17421
	ctx.r8.u64 = ctx.r9.u64 | 17421;
	// ori r9,r9,1036
	ctx.r9.u64 = ctx.r9.u64 | 1036;
	// extsh r8,r8
	ctx.r8.s64 = ctx.r8.s16;
	// extsh r9,r9
	ctx.r9.s64 = ctx.r9.s16;
	// sth r8,0(r11)
	PPC_STORE_U16(ctx.r11.u32 + 0, ctx.r8.u16);
	// cmpwi cr6,r10,22
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 22, ctx.xer);
	// sthu r9,2(r11)
	ea = 2 + ctx.r11.u32;
	PPC_STORE_U16(ea, ctx.r9.u16);
	ctx.r11.u32 = ea;
	// addi r11,r11,2
	ctx.r11.s64 = ctx.r11.s64 + 2;
	// bge cr6,0x832912cc
	if (!ctx.cr6.lt) goto loc_832912CC;
	// li r10,21
	ctx.r10.s64 = 21;
loc_832912FC:
	// rlwinm r9,r10,4,0,27
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 4) & 0xFFFFFFF0;
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// ori r8,r9,17420
	ctx.r8.u64 = ctx.r9.u64 | 17420;
	// ori r9,r9,1035
	ctx.r9.u64 = ctx.r9.u64 | 1035;
	// extsh r8,r8
	ctx.r8.s64 = ctx.r8.s16;
	// extsh r9,r9
	ctx.r9.s64 = ctx.r9.s16;
	// sth r8,0(r11)
	PPC_STORE_U16(ctx.r11.u32 + 0, ctx.r8.u16);
	// cmpwi cr6,r10,16
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 16, ctx.xer);
	// sth r8,2(r11)
	PPC_STORE_U16(ctx.r11.u32 + 2, ctx.r8.u16);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// sth r9,0(r11)
	PPC_STORE_U16(ctx.r11.u32 + 0, ctx.r9.u16);
	// sth r9,2(r11)
	PPC_STORE_U16(ctx.r11.u32 + 2, ctx.r9.u16);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bge cr6,0x832912fc
	if (!ctx.cr6.lt) goto loc_832912FC;
	// li r5,15
	ctx.r5.s64 = 15;
loc_83291338:
	// rlwinm r10,r5,4,0,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 4) & 0xFFFFFFF0;
	// li r9,8
	ctx.r9.s64 = 8;
	// ori r6,r10,17418
	ctx.r6.u64 = ctx.r10.u64 | 17418;
	// addi r8,r11,-2
	ctx.r8.s64 = ctx.r11.s64 + -2;
	// extsh r6,r6
	ctx.r6.s64 = ctx.r6.s16;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_83291350:
	// sthu r6,2(r8)
	ea = 2 + ctx.r8.u32;
	PPC_STORE_U16(ea, ctx.r6.u16);
	ctx.r8.u32 = ea;
	// bdnz 0x83291350
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_83291350;
	// ori r9,r10,1033
	ctx.r9.u64 = ctx.r10.u64 | 1033;
	// li r10,8
	ctx.r10.s64 = 8;
	// addi r11,r11,16
	ctx.r11.s64 = ctx.r11.s64 + 16;
	// extsh r8,r9
	ctx.r8.s64 = ctx.r9.s16;
	// addi r9,r11,-2
	ctx.r9.s64 = ctx.r11.s64 + -2;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_83291370:
	// sthu r8,2(r9)
	ea = 2 + ctx.r9.u32;
	PPC_STORE_U16(ea, ctx.r8.u16);
	ctx.r9.u32 = ea;
	// bdnz 0x83291370
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_83291370;
	// addi r5,r5,-1
	ctx.r5.s64 = ctx.r5.s64 + -1;
	// addi r11,r11,16
	ctx.r11.s64 = ctx.r11.s64 + 16;
	// cmpwi cr6,r5,10
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 10, ctx.xer);
	// bge cr6,0x83291338
	if (!ctx.cr6.lt) goto loc_83291338;
	// li r5,9
	ctx.r5.s64 = 9;
loc_8329138C:
	// rlwinm r10,r5,4,0,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 4) & 0xFFFFFFF0;
	// li r9,16
	ctx.r9.s64 = 16;
	// ori r6,r10,17417
	ctx.r6.u64 = ctx.r10.u64 | 17417;
	// addi r8,r11,-2
	ctx.r8.s64 = ctx.r11.s64 + -2;
	// extsh r6,r6
	ctx.r6.s64 = ctx.r6.s16;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_832913A4:
	// sthu r6,2(r8)
	ea = 2 + ctx.r8.u32;
	PPC_STORE_U16(ea, ctx.r6.u16);
	ctx.r8.u32 = ea;
	// bdnz 0x832913a4
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_832913A4;
	// ori r9,r10,1032
	ctx.r9.u64 = ctx.r10.u64 | 1032;
	// li r10,16
	ctx.r10.s64 = 16;
	// addi r11,r11,32
	ctx.r11.s64 = ctx.r11.s64 + 32;
	// extsh r8,r9
	ctx.r8.s64 = ctx.r9.s16;
	// addi r9,r11,-2
	ctx.r9.s64 = ctx.r11.s64 + -2;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_832913C4:
	// sthu r8,2(r9)
	ea = 2 + ctx.r9.u32;
	PPC_STORE_U16(ea, ctx.r8.u16);
	ctx.r9.u32 = ea;
	// bdnz 0x832913c4
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_832913C4;
	// addi r5,r5,-1
	ctx.r5.s64 = ctx.r5.s64 + -1;
	// addi r11,r11,32
	ctx.r11.s64 = ctx.r11.s64 + 32;
	// cmpwi cr6,r5,8
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 8, ctx.xer);
	// bge cr6,0x8329138c
	if (!ctx.cr6.lt) goto loc_8329138C;
	// sth r7,0(r4)
	PPC_STORE_U16(ctx.r4.u32 + 0, ctx.r7.u16);
	// mr r9,r4
	ctx.r9.u64 = ctx.r4.u64;
	// sth r7,2(r4)
	PPC_STORE_U16(ctx.r4.u32 + 2, ctx.r7.u16);
	// li r10,7
	ctx.r10.s64 = 7;
	// sth r7,4(r4)
	PPC_STORE_U16(ctx.r4.u32 + 4, ctx.r7.u16);
	// addi r11,r4,8
	ctx.r11.s64 = ctx.r4.s64 + 8;
	// sth r7,6(r4)
	PPC_STORE_U16(ctx.r4.u32 + 6, ctx.r7.u16);
loc_832913F8:
	// rlwinm r9,r10,4,0,27
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 4) & 0xFFFFFFF0;
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// ori r8,r9,17415
	ctx.r8.u64 = ctx.r9.u64 | 17415;
	// ori r9,r9,1030
	ctx.r9.u64 = ctx.r9.u64 | 1030;
	// extsh r8,r8
	ctx.r8.s64 = ctx.r8.s16;
	// extsh r9,r9
	ctx.r9.s64 = ctx.r9.s16;
	// sth r8,0(r11)
	PPC_STORE_U16(ctx.r11.u32 + 0, ctx.r8.u16);
	// cmpwi cr6,r10,6
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 6, ctx.xer);
	// sthu r9,2(r11)
	ea = 2 + ctx.r11.u32;
	PPC_STORE_U16(ea, ctx.r9.u16);
	ctx.r11.u32 = ea;
	// addi r11,r11,2
	ctx.r11.s64 = ctx.r11.s64 + 2;
	// bge cr6,0x832913f8
	if (!ctx.cr6.lt) goto loc_832913F8;
	// li r10,5
	ctx.r10.s64 = 5;
loc_83291428:
	// rlwinm r9,r10,4,0,27
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 4) & 0xFFFFFFF0;
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// ori r8,r9,17414
	ctx.r8.u64 = ctx.r9.u64 | 17414;
	// ori r9,r9,1029
	ctx.r9.u64 = ctx.r9.u64 | 1029;
	// extsh r8,r8
	ctx.r8.s64 = ctx.r8.s16;
	// extsh r9,r9
	ctx.r9.s64 = ctx.r9.s16;
	// sth r8,0(r11)
	PPC_STORE_U16(ctx.r11.u32 + 0, ctx.r8.u16);
	// cmpwi cr6,r10,4
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 4, ctx.xer);
	// sth r8,2(r11)
	PPC_STORE_U16(ctx.r11.u32 + 2, ctx.r8.u16);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// sth r9,0(r11)
	PPC_STORE_U16(ctx.r11.u32 + 0, ctx.r9.u16);
	// sth r9,2(r11)
	PPC_STORE_U16(ctx.r11.u32 + 2, ctx.r9.u16);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bge cr6,0x83291428
	if (!ctx.cr6.lt) goto loc_83291428;
	// li r10,3
	ctx.r10.s64 = 3;
loc_83291464:
	// rlwinm r9,r10,4,0,27
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 4) & 0xFFFFFFF0;
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// ori r8,r9,17413
	ctx.r8.u64 = ctx.r9.u64 | 17413;
	// ori r9,r9,1028
	ctx.r9.u64 = ctx.r9.u64 | 1028;
	// extsh r8,r8
	ctx.r8.s64 = ctx.r8.s16;
	// extsh r9,r9
	ctx.r9.s64 = ctx.r9.s16;
	// sth r8,0(r11)
	PPC_STORE_U16(ctx.r11.u32 + 0, ctx.r8.u16);
	// cmpwi cr6,r10,2
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 2, ctx.xer);
	// sth r8,2(r11)
	PPC_STORE_U16(ctx.r11.u32 + 2, ctx.r8.u16);
	// sth r8,4(r11)
	PPC_STORE_U16(ctx.r11.u32 + 4, ctx.r8.u16);
	// sth r8,6(r11)
	PPC_STORE_U16(ctx.r11.u32 + 6, ctx.r8.u16);
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// sth r9,0(r11)
	PPC_STORE_U16(ctx.r11.u32 + 0, ctx.r9.u16);
	// sth r9,2(r11)
	PPC_STORE_U16(ctx.r11.u32 + 2, ctx.r9.u16);
	// sth r9,4(r11)
	PPC_STORE_U16(ctx.r11.u32 + 4, ctx.r9.u16);
	// sth r9,6(r11)
	PPC_STORE_U16(ctx.r11.u32 + 6, ctx.r9.u16);
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// bge cr6,0x83291464
	if (!ctx.cr6.lt) goto loc_83291464;
	// li r10,16
	ctx.r10.s64 = 16;
	// addi r9,r11,-2
	ctx.r9.s64 = ctx.r11.s64 + -2;
	// li r8,17427
	ctx.r8.s64 = 17427;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_832914BC:
	// sthu r8,2(r9)
	ea = 2 + ctx.r9.u32;
	PPC_STORE_U16(ea, ctx.r8.u16);
	ctx.r9.u32 = ea;
	// bdnz 0x832914bc
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_832914BC;
	// li r10,16
	ctx.r10.s64 = 16;
	// addi r11,r11,32
	ctx.r11.s64 = ctx.r11.s64 + 32;
	// li r9,1042
	ctx.r9.s64 = 1042;
	// addi r11,r11,-2
	ctx.r11.s64 = ctx.r11.s64 + -2;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_832914D8:
	// sthu r9,2(r11)
	ea = 2 + ctx.r11.u32;
	PPC_STORE_U16(ea, ctx.r9.u16);
	ctx.r11.u32 = ea;
	// bdnz 0x832914d8
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_832914D8;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_832914E4"))) PPC_WEAK_FUNC(sub_832914E4);
PPC_FUNC_IMPL(__imp__sub_832914E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832914E8"))) PPC_WEAK_FUNC(sub_832914E8);
PPC_FUNC_IMPL(__imp__sub_832914E8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lis r10,-31826
	ctx.r10.s64 = -2085748736;
	// li r11,8
	ctx.r11.s64 = 8;
	// addi r10,r10,-31024
	ctx.r10.s64 = ctx.r10.s64 + -31024;
	// li r7,576
	ctx.r7.s64 = 576;
	// addi r9,r10,2176
	ctx.r9.s64 = ctx.r10.s64 + 2176;
	// mr r8,r7
	ctx.r8.u64 = ctx.r7.u64;
	// addi r9,r9,-2
	ctx.r9.s64 = ctx.r9.s64 + -2;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
loc_83291508:
	// sthu r8,2(r9)
	ea = 2 + ctx.r9.u32;
	PPC_STORE_U16(ea, ctx.r8.u16);
	ctx.r9.u32 = ea;
	// bdnz 0x83291508
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_83291508;
	// li r11,6
	ctx.r11.s64 = 6;
	// li r9,571
	ctx.r9.s64 = 571;
	// addi r8,r10,2176
	ctx.r8.s64 = ctx.r10.s64 + 2176;
	// sth r9,2192(r10)
	PPC_STORE_U16(ctx.r10.u32 + 2192, ctx.r9.u16);
	// mr r9,r7
	ctx.r9.u64 = ctx.r7.u64;
	// addi r8,r8,16
	ctx.r8.s64 = ctx.r8.s64 + 16;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
loc_8329152C:
	// sthu r9,2(r8)
	ea = 2 + ctx.r8.u32;
	PPC_STORE_U16(ea, ctx.r9.u16);
	ctx.r8.u32 = ea;
	// bdnz 0x8329152c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8329152C;
	// li r11,8
	ctx.r11.s64 = 8;
	// li r9,555
	ctx.r9.s64 = 555;
	// addi r8,r10,2176
	ctx.r8.s64 = ctx.r10.s64 + 2176;
	// sth r9,2206(r10)
	PPC_STORE_U16(ctx.r10.u32 + 2206, ctx.r9.u16);
	// mr r9,r7
	ctx.r9.u64 = ctx.r7.u64;
	// addi r8,r8,30
	ctx.r8.s64 = ctx.r8.s64 + 30;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
loc_83291550:
	// sthu r9,2(r8)
	ea = 2 + ctx.r8.u32;
	PPC_STORE_U16(ea, ctx.r9.u16);
	ctx.r8.u32 = ea;
	// bdnz 0x83291550
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_83291550;
	// li r8,12
	ctx.r8.s64 = 12;
	// addi r11,r10,2176
	ctx.r11.s64 = ctx.r10.s64 + 2176;
	// li r9,33
	ctx.r9.s64 = 33;
	// addi r11,r11,48
	ctx.r11.s64 = ctx.r11.s64 + 48;
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
loc_8329156C:
	// li r8,11
	ctx.r8.s64 = 11;
	// rlwimi r8,r9,4,0,27
	ctx.r8.u64 = (__builtin_rotateleft32(ctx.r9.u32, 4) & 0xFFFFFFF0) | (ctx.r8.u64 & 0xFFFFFFFF0000000F);
	// addi r9,r9,-1
	ctx.r9.s64 = ctx.r9.s64 + -1;
	// extsh r8,r8
	ctx.r8.s64 = ctx.r8.s16;
	// sth r8,0(r11)
	PPC_STORE_U16(ctx.r11.u32 + 0, ctx.r8.u16);
	// addi r11,r11,2
	ctx.r11.s64 = ctx.r11.s64 + 2;
	// bdnz 0x8329156c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8329156C;
	// li r8,6
	ctx.r8.s64 = 6;
	// li r9,21
	ctx.r9.s64 = 21;
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
loc_83291594:
	// rlwinm r8,r9,4,0,27
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 4) & 0xFFFFFFF0;
	// li r6,-22517
	ctx.r6.s64 = -22517;
	// ori r5,r8,10
	ctx.r5.u64 = ctx.r8.u64 | 10;
	// or r8,r8,r6
	ctx.r8.u64 = ctx.r8.u64 | ctx.r6.u64;
	// extsh r6,r5
	ctx.r6.s64 = ctx.r5.s16;
	// extsh r8,r8
	ctx.r8.s64 = ctx.r8.s16;
	// sth r6,0(r11)
	PPC_STORE_U16(ctx.r11.u32 + 0, ctx.r6.u16);
	// addi r9,r9,-1
	ctx.r9.s64 = ctx.r9.s64 + -1;
	// sthu r8,2(r11)
	ea = 2 + ctx.r11.u32;
	PPC_STORE_U16(ea, ctx.r8.u16);
	ctx.r11.u32 = ea;
	// addi r11,r11,2
	ctx.r11.s64 = ctx.r11.s64 + 2;
	// bdnz 0x83291594
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_83291594;
	// li r8,6
	ctx.r8.s64 = 6;
	// li r9,15
	ctx.r9.s64 = 15;
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
loc_832915CC:
	// rlwinm r8,r9,4,0,27
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 4) & 0xFFFFFFF0;
	// li r6,-24565
	ctx.r6.s64 = -24565;
	// ori r5,r8,8
	ctx.r5.u64 = ctx.r8.u64 | 8;
	// or r6,r8,r6
	ctx.r6.u64 = ctx.r8.u64 | ctx.r6.u64;
	// li r4,-30710
	ctx.r4.s64 = -30710;
	// sth r5,0(r11)
	PPC_STORE_U16(ctx.r11.u32 + 0, ctx.r5.u16);
	// sthu r6,2(r11)
	ea = 2 + ctx.r11.u32;
	PPC_STORE_U16(ea, ctx.r6.u16);
	ctx.r11.u32 = ea;
	// li r6,-22519
	ctx.r6.s64 = -22519;
	// or r5,r8,r4
	ctx.r5.u64 = ctx.r8.u64 | ctx.r4.u64;
	// or r8,r8,r6
	ctx.r8.u64 = ctx.r8.u64 | ctx.r6.u64;
	// extsh r5,r5
	ctx.r5.s64 = ctx.r5.s16;
	// extsh r8,r8
	ctx.r8.s64 = ctx.r8.s16;
	// sthu r5,2(r11)
	ea = 2 + ctx.r11.u32;
	PPC_STORE_U16(ea, ctx.r5.u16);
	ctx.r11.u32 = ea;
	// addi r9,r9,-1
	ctx.r9.s64 = ctx.r9.s64 + -1;
	// sthu r5,2(r11)
	ea = 2 + ctx.r11.u32;
	PPC_STORE_U16(ea, ctx.r5.u16);
	ctx.r11.u32 = ea;
	// sthu r8,2(r11)
	ea = 2 + ctx.r11.u32;
	PPC_STORE_U16(ea, ctx.r8.u16);
	ctx.r11.u32 = ea;
	// sthu r8,2(r11)
	ea = 2 + ctx.r11.u32;
	PPC_STORE_U16(ea, ctx.r8.u16);
	ctx.r11.u32 = ea;
	// sthu r8,2(r11)
	ea = 2 + ctx.r11.u32;
	PPC_STORE_U16(ea, ctx.r8.u16);
	ctx.r11.u32 = ea;
	// sthu r8,2(r11)
	ea = 2 + ctx.r11.u32;
	PPC_STORE_U16(ea, ctx.r8.u16);
	ctx.r11.u32 = ea;
	// addi r11,r11,2
	ctx.r11.s64 = ctx.r11.s64 + 2;
	// bdnz 0x832915cc
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_832915CC;
	// li r8,2
	ctx.r8.s64 = 2;
	// li r9,9
	ctx.r9.s64 = 9;
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
loc_8329162C:
	// rlwinm r8,r9,4,0,27
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 4) & 0xFFFFFFF0;
	// li r6,-24566
	ctx.r6.s64 = -24566;
	// ori r5,r8,7
	ctx.r5.u64 = ctx.r8.u64 | 7;
	// or r6,r8,r6
	ctx.r6.u64 = ctx.r8.u64 | ctx.r6.u64;
	// extsh r5,r5
	ctx.r5.s64 = ctx.r5.s16;
	// extsh r6,r6
	ctx.r6.s64 = ctx.r6.s16;
	// sth r5,0(r11)
	PPC_STORE_U16(ctx.r11.u32 + 0, ctx.r5.u16);
	// li r4,-30711
	ctx.r4.s64 = -30711;
	// sthu r5,2(r11)
	ea = 2 + ctx.r11.u32;
	PPC_STORE_U16(ea, ctx.r5.u16);
	ctx.r11.u32 = ea;
	// li r5,-22520
	ctx.r5.s64 = -22520;
	// or r4,r8,r4
	ctx.r4.u64 = ctx.r8.u64 | ctx.r4.u64;
	// or r8,r8,r5
	ctx.r8.u64 = ctx.r8.u64 | ctx.r5.u64;
	// extsh r5,r4
	ctx.r5.s64 = ctx.r4.s16;
	// extsh r8,r8
	ctx.r8.s64 = ctx.r8.s16;
	// sthu r6,2(r11)
	ea = 2 + ctx.r11.u32;
	PPC_STORE_U16(ea, ctx.r6.u16);
	ctx.r11.u32 = ea;
	// addi r9,r9,-1
	ctx.r9.s64 = ctx.r9.s64 + -1;
	// sthu r6,2(r11)
	ea = 2 + ctx.r11.u32;
	PPC_STORE_U16(ea, ctx.r6.u16);
	ctx.r11.u32 = ea;
	// sthu r5,2(r11)
	ea = 2 + ctx.r11.u32;
	PPC_STORE_U16(ea, ctx.r5.u16);
	ctx.r11.u32 = ea;
	// sthu r5,2(r11)
	ea = 2 + ctx.r11.u32;
	PPC_STORE_U16(ea, ctx.r5.u16);
	ctx.r11.u32 = ea;
	// sthu r5,2(r11)
	ea = 2 + ctx.r11.u32;
	PPC_STORE_U16(ea, ctx.r5.u16);
	ctx.r11.u32 = ea;
	// sthu r5,2(r11)
	ea = 2 + ctx.r11.u32;
	PPC_STORE_U16(ea, ctx.r5.u16);
	ctx.r11.u32 = ea;
	// sthu r8,2(r11)
	ea = 2 + ctx.r11.u32;
	PPC_STORE_U16(ea, ctx.r8.u16);
	ctx.r11.u32 = ea;
	// sthu r8,2(r11)
	ea = 2 + ctx.r11.u32;
	PPC_STORE_U16(ea, ctx.r8.u16);
	ctx.r11.u32 = ea;
	// sthu r8,2(r11)
	ea = 2 + ctx.r11.u32;
	PPC_STORE_U16(ea, ctx.r8.u16);
	ctx.r11.u32 = ea;
	// sthu r8,2(r11)
	ea = 2 + ctx.r11.u32;
	PPC_STORE_U16(ea, ctx.r8.u16);
	ctx.r11.u32 = ea;
	// sthu r8,2(r11)
	ea = 2 + ctx.r11.u32;
	PPC_STORE_U16(ea, ctx.r8.u16);
	ctx.r11.u32 = ea;
	// sthu r8,2(r11)
	ea = 2 + ctx.r11.u32;
	PPC_STORE_U16(ea, ctx.r8.u16);
	ctx.r11.u32 = ea;
	// sthu r8,2(r11)
	ea = 2 + ctx.r11.u32;
	PPC_STORE_U16(ea, ctx.r8.u16);
	ctx.r11.u32 = ea;
	// sthu r8,2(r11)
	ea = 2 + ctx.r11.u32;
	PPC_STORE_U16(ea, ctx.r8.u16);
	ctx.r11.u32 = ea;
	// addi r11,r11,2
	ctx.r11.s64 = ctx.r11.s64 + 2;
	// bdnz 0x8329162c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8329162C;
	// li r8,2
	ctx.r8.s64 = 2;
	// sth r7,0(r10)
	PPC_STORE_U16(ctx.r10.u32 + 0, ctx.r7.u16);
	// sth r7,2(r10)
	PPC_STORE_U16(ctx.r10.u32 + 2, ctx.r7.u16);
	// mr r6,r10
	ctx.r6.u64 = ctx.r10.u64;
	// li r9,7
	ctx.r9.s64 = 7;
	// addi r11,r10,4
	ctx.r11.s64 = ctx.r10.s64 + 4;
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
loc_832916C4:
	// li r10,5
	ctx.r10.s64 = 5;
	// rlwimi r10,r9,4,0,27
	ctx.r10.u64 = (__builtin_rotateleft32(ctx.r9.u32, 4) & 0xFFFFFFF0) | (ctx.r10.u64 & 0xFFFFFFFF0000000F);
	// addi r9,r9,-1
	ctx.r9.s64 = ctx.r9.s64 + -1;
	// extsh r10,r10
	ctx.r10.s64 = ctx.r10.s16;
	// sth r10,0(r11)
	PPC_STORE_U16(ctx.r11.u32 + 0, ctx.r10.u16);
	// addi r11,r11,2
	ctx.r11.s64 = ctx.r11.s64 + 2;
	// bdnz 0x832916c4
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_832916C4;
	// li r9,2
	ctx.r9.s64 = 2;
	// li r10,5
	ctx.r10.s64 = 5;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_832916EC:
	// rlwinm r9,r10,4,0,27
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 4) & 0xFFFFFFF0;
	// li r8,-22523
	ctx.r8.s64 = -22523;
	// ori r7,r9,4
	ctx.r7.u64 = ctx.r9.u64 | 4;
	// or r9,r9,r8
	ctx.r9.u64 = ctx.r9.u64 | ctx.r8.u64;
	// extsh r8,r7
	ctx.r8.s64 = ctx.r7.s16;
	// extsh r9,r9
	ctx.r9.s64 = ctx.r9.s16;
	// sth r8,0(r11)
	PPC_STORE_U16(ctx.r11.u32 + 0, ctx.r8.u16);
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// sthu r9,2(r11)
	ea = 2 + ctx.r11.u32;
	PPC_STORE_U16(ea, ctx.r9.u16);
	ctx.r11.u32 = ea;
	// addi r11,r11,2
	ctx.r11.s64 = ctx.r11.s64 + 2;
	// bdnz 0x832916ec
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_832916EC;
	// li r9,2
	ctx.r9.s64 = 2;
	// li r10,3
	ctx.r10.s64 = 3;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_83291724:
	// rlwinm r9,r10,4,0,27
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 4) & 0xFFFFFFF0;
	// li r8,-30715
	ctx.r8.s64 = -30715;
	// ori r7,r9,3
	ctx.r7.u64 = ctx.r9.u64 | 3;
	// or r8,r9,r8
	ctx.r8.u64 = ctx.r9.u64 | ctx.r8.u64;
	// extsh r7,r7
	ctx.r7.s64 = ctx.r7.s16;
	// li r6,-22524
	ctx.r6.s64 = -22524;
	// extsh r8,r8
	ctx.r8.s64 = ctx.r8.s16;
	// sth r7,0(r11)
	PPC_STORE_U16(ctx.r11.u32 + 0, ctx.r7.u16);
	// or r9,r9,r6
	ctx.r9.u64 = ctx.r9.u64 | ctx.r6.u64;
	// sthu r8,2(r11)
	ea = 2 + ctx.r11.u32;
	PPC_STORE_U16(ea, ctx.r8.u16);
	ctx.r11.u32 = ea;
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// extsh r9,r9
	ctx.r9.s64 = ctx.r9.s16;
	// sthu r9,2(r11)
	ea = 2 + ctx.r11.u32;
	PPC_STORE_U16(ea, ctx.r9.u16);
	ctx.r11.u32 = ea;
	// sthu r9,2(r11)
	ea = 2 + ctx.r11.u32;
	PPC_STORE_U16(ea, ctx.r9.u16);
	ctx.r11.u32 = ea;
	// addi r11,r11,2
	ctx.r11.s64 = ctx.r11.s64 + 2;
	// bdnz 0x83291724
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_83291724;
	// li r7,17
	ctx.r7.s64 = 17;
	// li r8,-24556
	ctx.r8.s64 = -24556;
	// sth r7,0(r11)
	PPC_STORE_U16(ctx.r11.u32 + 0, ctx.r7.u16);
	// li r9,-30701
	ctx.r9.s64 = -30701;
	// sthu r7,2(r11)
	ea = 2 + ctx.r11.u32;
	PPC_STORE_U16(ea, ctx.r7.u16);
	ctx.r11.u32 = ea;
	// li r10,-22510
	ctx.r10.s64 = -22510;
	// sthu r8,2(r11)
	ea = 2 + ctx.r11.u32;
	PPC_STORE_U16(ea, ctx.r8.u16);
	ctx.r11.u32 = ea;
	// sthu r8,2(r11)
	ea = 2 + ctx.r11.u32;
	PPC_STORE_U16(ea, ctx.r8.u16);
	ctx.r11.u32 = ea;
	// sthu r9,2(r11)
	ea = 2 + ctx.r11.u32;
	PPC_STORE_U16(ea, ctx.r9.u16);
	ctx.r11.u32 = ea;
	// sthu r9,2(r11)
	ea = 2 + ctx.r11.u32;
	PPC_STORE_U16(ea, ctx.r9.u16);
	ctx.r11.u32 = ea;
	// sthu r9,2(r11)
	ea = 2 + ctx.r11.u32;
	PPC_STORE_U16(ea, ctx.r9.u16);
	ctx.r11.u32 = ea;
	// sthu r9,2(r11)
	ea = 2 + ctx.r11.u32;
	PPC_STORE_U16(ea, ctx.r9.u16);
	ctx.r11.u32 = ea;
	// sthu r10,2(r11)
	ea = 2 + ctx.r11.u32;
	PPC_STORE_U16(ea, ctx.r10.u16);
	ctx.r11.u32 = ea;
	// sthu r10,2(r11)
	ea = 2 + ctx.r11.u32;
	PPC_STORE_U16(ea, ctx.r10.u16);
	ctx.r11.u32 = ea;
	// sthu r10,2(r11)
	ea = 2 + ctx.r11.u32;
	PPC_STORE_U16(ea, ctx.r10.u16);
	ctx.r11.u32 = ea;
	// sthu r10,2(r11)
	ea = 2 + ctx.r11.u32;
	PPC_STORE_U16(ea, ctx.r10.u16);
	ctx.r11.u32 = ea;
	// sthu r10,2(r11)
	ea = 2 + ctx.r11.u32;
	PPC_STORE_U16(ea, ctx.r10.u16);
	ctx.r11.u32 = ea;
	// sthu r10,2(r11)
	ea = 2 + ctx.r11.u32;
	PPC_STORE_U16(ea, ctx.r10.u16);
	ctx.r11.u32 = ea;
	// sthu r10,2(r11)
	ea = 2 + ctx.r11.u32;
	PPC_STORE_U16(ea, ctx.r10.u16);
	ctx.r11.u32 = ea;
	// sthu r10,2(r11)
	ea = 2 + ctx.r11.u32;
	PPC_STORE_U16(ea, ctx.r10.u16);
	ctx.r11.u32 = ea;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_832917B8"))) PPC_WEAK_FUNC(sub_832917B8);
PPC_FUNC_IMPL(__imp__sub_832917B8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lis r10,-31826
	ctx.r10.s64 = -2085748736;
	// li r11,8
	ctx.r11.s64 = 8;
	// addi r10,r10,-30576
	ctx.r10.s64 = ctx.r10.s64 + -30576;
	// li r7,576
	ctx.r7.s64 = 576;
	// addi r9,r10,-1088
	ctx.r9.s64 = ctx.r10.s64 + -1088;
	// mr r8,r7
	ctx.r8.u64 = ctx.r7.u64;
	// addi r9,r9,-2
	ctx.r9.s64 = ctx.r9.s64 + -2;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
loc_832917D8:
	// sthu r8,2(r9)
	ea = 2 + ctx.r9.u32;
	PPC_STORE_U16(ea, ctx.r8.u16);
	ctx.r9.u32 = ea;
	// bdnz 0x832917d8
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_832917D8;
	// li r11,6
	ctx.r11.s64 = 6;
	// li r9,571
	ctx.r9.s64 = 571;
	// addi r8,r10,-1088
	ctx.r8.s64 = ctx.r10.s64 + -1088;
	// sth r9,-1072(r10)
	PPC_STORE_U16(ctx.r10.u32 + -1072, ctx.r9.u16);
	// mr r9,r7
	ctx.r9.u64 = ctx.r7.u64;
	// addi r8,r8,16
	ctx.r8.s64 = ctx.r8.s64 + 16;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
loc_832917FC:
	// sthu r9,2(r8)
	ea = 2 + ctx.r8.u32;
	PPC_STORE_U16(ea, ctx.r9.u16);
	ctx.r8.u32 = ea;
	// bdnz 0x832917fc
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_832917FC;
	// li r11,8
	ctx.r11.s64 = 8;
	// li r9,555
	ctx.r9.s64 = 555;
	// addi r8,r10,-1088
	ctx.r8.s64 = ctx.r10.s64 + -1088;
	// sth r9,-1058(r10)
	PPC_STORE_U16(ctx.r10.u32 + -1058, ctx.r9.u16);
	// mr r9,r7
	ctx.r9.u64 = ctx.r7.u64;
	// addi r8,r8,30
	ctx.r8.s64 = ctx.r8.s64 + 30;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
loc_83291820:
	// sthu r9,2(r8)
	ea = 2 + ctx.r8.u32;
	PPC_STORE_U16(ea, ctx.r9.u16);
	ctx.r8.u32 = ea;
	// bdnz 0x83291820
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_83291820;
	// li r8,12
	ctx.r8.s64 = 12;
	// addi r11,r10,-1088
	ctx.r11.s64 = ctx.r10.s64 + -1088;
	// li r9,33
	ctx.r9.s64 = 33;
	// addi r11,r11,48
	ctx.r11.s64 = ctx.r11.s64 + 48;
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
loc_8329183C:
	// li r8,11
	ctx.r8.s64 = 11;
	// rlwimi r8,r9,4,0,27
	ctx.r8.u64 = (__builtin_rotateleft32(ctx.r9.u32, 4) & 0xFFFFFFF0) | (ctx.r8.u64 & 0xFFFFFFFF0000000F);
	// addi r9,r9,-1
	ctx.r9.s64 = ctx.r9.s64 + -1;
	// extsh r8,r8
	ctx.r8.s64 = ctx.r8.s16;
	// sth r8,0(r11)
	PPC_STORE_U16(ctx.r11.u32 + 0, ctx.r8.u16);
	// addi r11,r11,2
	ctx.r11.s64 = ctx.r11.s64 + 2;
	// bdnz 0x8329183c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8329183C;
	// li r8,6
	ctx.r8.s64 = 6;
	// li r9,21
	ctx.r9.s64 = 21;
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
loc_83291864:
	// li r8,10
	ctx.r8.s64 = 10;
	// rlwimi r8,r9,4,0,27
	ctx.r8.u64 = (__builtin_rotateleft32(ctx.r9.u32, 4) & 0xFFFFFFF0) | (ctx.r8.u64 & 0xFFFFFFFF0000000F);
	// addi r9,r9,-1
	ctx.r9.s64 = ctx.r9.s64 + -1;
	// extsh r8,r8
	ctx.r8.s64 = ctx.r8.s16;
	// sth r8,0(r11)
	PPC_STORE_U16(ctx.r11.u32 + 0, ctx.r8.u16);
	// sthu r8,2(r11)
	ea = 2 + ctx.r11.u32;
	PPC_STORE_U16(ea, ctx.r8.u16);
	ctx.r11.u32 = ea;
	// addi r11,r11,2
	ctx.r11.s64 = ctx.r11.s64 + 2;
	// bdnz 0x83291864
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_83291864;
	// li r8,6
	ctx.r8.s64 = 6;
	// li r9,15
	ctx.r9.s64 = 15;
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
loc_83291890:
	// rlwinm r8,r9,4,0,27
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 4) & 0xFFFFFFF0;
	// li r6,-28661
	ctx.r6.s64 = -28661;
	// ori r5,r8,8
	ctx.r5.u64 = ctx.r8.u64 | 8;
	// or r6,r8,r6
	ctx.r6.u64 = ctx.r8.u64 | ctx.r6.u64;
	// extsh r5,r5
	ctx.r5.s64 = ctx.r5.s16;
	// li r4,-26613
	ctx.r4.s64 = -26613;
	// sth r5,0(r11)
	PPC_STORE_U16(ctx.r11.u32 + 0, ctx.r5.u16);
	// li r3,-18422
	ctx.r3.s64 = -18422;
	// sthu r5,2(r11)
	ea = 2 + ctx.r11.u32;
	PPC_STORE_U16(ea, ctx.r5.u16);
	ctx.r11.u32 = ea;
	// or r5,r8,r4
	ctx.r5.u64 = ctx.r8.u64 | ctx.r4.u64;
	// li r4,-20470
	ctx.r4.s64 = -20470;
	// extsh r5,r5
	ctx.r5.s64 = ctx.r5.s16;
	// or r4,r8,r4
	ctx.r4.u64 = ctx.r8.u64 | ctx.r4.u64;
	// or r8,r8,r3
	ctx.r8.u64 = ctx.r8.u64 | ctx.r3.u64;
	// sthu r6,2(r11)
	ea = 2 + ctx.r11.u32;
	PPC_STORE_U16(ea, ctx.r6.u16);
	ctx.r11.u32 = ea;
	// extsh r6,r4
	ctx.r6.s64 = ctx.r4.s16;
	// extsh r8,r8
	ctx.r8.s64 = ctx.r8.s16;
	// addi r9,r9,-1
	ctx.r9.s64 = ctx.r9.s64 + -1;
	// sthu r5,2(r11)
	ea = 2 + ctx.r11.u32;
	PPC_STORE_U16(ea, ctx.r5.u16);
	ctx.r11.u32 = ea;
	// sthu r6,2(r11)
	ea = 2 + ctx.r11.u32;
	PPC_STORE_U16(ea, ctx.r6.u16);
	ctx.r11.u32 = ea;
	// sthu r6,2(r11)
	ea = 2 + ctx.r11.u32;
	PPC_STORE_U16(ea, ctx.r6.u16);
	ctx.r11.u32 = ea;
	// sthu r8,2(r11)
	ea = 2 + ctx.r11.u32;
	PPC_STORE_U16(ea, ctx.r8.u16);
	ctx.r11.u32 = ea;
	// sthu r8,2(r11)
	ea = 2 + ctx.r11.u32;
	PPC_STORE_U16(ea, ctx.r8.u16);
	ctx.r11.u32 = ea;
	// addi r11,r11,2
	ctx.r11.s64 = ctx.r11.s64 + 2;
	// bdnz 0x83291890
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_83291890;
	// li r8,2
	ctx.r8.s64 = 2;
	// li r9,9
	ctx.r9.s64 = 9;
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
loc_83291900:
	// rlwinm r8,r9,4,0,27
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 4) & 0xFFFFFFF0;
	// li r6,-24565
	ctx.r6.s64 = -24565;
	// ori r5,r8,7
	ctx.r5.u64 = ctx.r8.u64 | 7;
	// or r6,r8,r6
	ctx.r6.u64 = ctx.r8.u64 | ctx.r6.u64;
	// extsh r5,r5
	ctx.r5.s64 = ctx.r5.s16;
	// li r4,-22517
	ctx.r4.s64 = -22517;
	// sth r5,0(r11)
	PPC_STORE_U16(ctx.r11.u32 + 0, ctx.r5.u16);
	// li r3,-26614
	ctx.r3.s64 = -26614;
	// sthu r5,2(r11)
	ea = 2 + ctx.r11.u32;
	PPC_STORE_U16(ea, ctx.r5.u16);
	ctx.r11.u32 = ea;
	// or r5,r8,r4
	ctx.r5.u64 = ctx.r8.u64 | ctx.r4.u64;
	// li r4,-28662
	ctx.r4.s64 = -28662;
	// addi r9,r9,-1
	ctx.r9.s64 = ctx.r9.s64 + -1;
	// or r4,r8,r4
	ctx.r4.u64 = ctx.r8.u64 | ctx.r4.u64;
	// sthu r6,2(r11)
	ea = 2 + ctx.r11.u32;
	PPC_STORE_U16(ea, ctx.r6.u16);
	ctx.r11.u32 = ea;
	// extsh r6,r4
	ctx.r6.s64 = ctx.r4.s16;
	// or r4,r8,r3
	ctx.r4.u64 = ctx.r8.u64 | ctx.r3.u64;
	// li r3,-20471
	ctx.r3.s64 = -20471;
	// extsh r4,r4
	ctx.r4.s64 = ctx.r4.s16;
	// or r3,r8,r3
	ctx.r3.u64 = ctx.r8.u64 | ctx.r3.u64;
	// sthu r5,2(r11)
	ea = 2 + ctx.r11.u32;
	PPC_STORE_U16(ea, ctx.r5.u16);
	ctx.r11.u32 = ea;
	// li r5,-18423
	ctx.r5.s64 = -18423;
	// extsh r3,r3
	ctx.r3.s64 = ctx.r3.s16;
	// or r8,r8,r5
	ctx.r8.u64 = ctx.r8.u64 | ctx.r5.u64;
	// extsh r8,r8
	ctx.r8.s64 = ctx.r8.s16;
	// sthu r6,2(r11)
	ea = 2 + ctx.r11.u32;
	PPC_STORE_U16(ea, ctx.r6.u16);
	ctx.r11.u32 = ea;
	// sthu r6,2(r11)
	ea = 2 + ctx.r11.u32;
	PPC_STORE_U16(ea, ctx.r6.u16);
	ctx.r11.u32 = ea;
	// sthu r4,2(r11)
	ea = 2 + ctx.r11.u32;
	PPC_STORE_U16(ea, ctx.r4.u16);
	ctx.r11.u32 = ea;
	// sthu r4,2(r11)
	ea = 2 + ctx.r11.u32;
	PPC_STORE_U16(ea, ctx.r4.u16);
	ctx.r11.u32 = ea;
	// sthu r3,2(r11)
	ea = 2 + ctx.r11.u32;
	PPC_STORE_U16(ea, ctx.r3.u16);
	ctx.r11.u32 = ea;
	// sthu r3,2(r11)
	ea = 2 + ctx.r11.u32;
	PPC_STORE_U16(ea, ctx.r3.u16);
	ctx.r11.u32 = ea;
	// sthu r3,2(r11)
	ea = 2 + ctx.r11.u32;
	PPC_STORE_U16(ea, ctx.r3.u16);
	ctx.r11.u32 = ea;
	// sthu r3,2(r11)
	ea = 2 + ctx.r11.u32;
	PPC_STORE_U16(ea, ctx.r3.u16);
	ctx.r11.u32 = ea;
	// sthu r8,2(r11)
	ea = 2 + ctx.r11.u32;
	PPC_STORE_U16(ea, ctx.r8.u16);
	ctx.r11.u32 = ea;
	// sthu r8,2(r11)
	ea = 2 + ctx.r11.u32;
	PPC_STORE_U16(ea, ctx.r8.u16);
	ctx.r11.u32 = ea;
	// sthu r8,2(r11)
	ea = 2 + ctx.r11.u32;
	PPC_STORE_U16(ea, ctx.r8.u16);
	ctx.r11.u32 = ea;
	// sthu r8,2(r11)
	ea = 2 + ctx.r11.u32;
	PPC_STORE_U16(ea, ctx.r8.u16);
	ctx.r11.u32 = ea;
	// addi r11,r11,2
	ctx.r11.s64 = ctx.r11.s64 + 2;
	// bdnz 0x83291900
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_83291900;
	// li r8,2
	ctx.r8.s64 = 2;
	// sth r7,0(r10)
	PPC_STORE_U16(ctx.r10.u32 + 0, ctx.r7.u16);
	// sth r7,2(r10)
	PPC_STORE_U16(ctx.r10.u32 + 2, ctx.r7.u16);
	// mr r6,r10
	ctx.r6.u64 = ctx.r10.u64;
	// li r9,7
	ctx.r9.s64 = 7;
	// addi r11,r10,4
	ctx.r11.s64 = ctx.r10.s64 + 4;
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
loc_832919B4:
	// li r10,5
	ctx.r10.s64 = 5;
	// rlwimi r10,r9,4,0,27
	ctx.r10.u64 = (__builtin_rotateleft32(ctx.r9.u32, 4) & 0xFFFFFFF0) | (ctx.r10.u64 & 0xFFFFFFFF0000000F);
	// addi r9,r9,-1
	ctx.r9.s64 = ctx.r9.s64 + -1;
	// extsh r10,r10
	ctx.r10.s64 = ctx.r10.s16;
	// sth r10,0(r11)
	PPC_STORE_U16(ctx.r11.u32 + 0, ctx.r10.u16);
	// addi r11,r11,2
	ctx.r11.s64 = ctx.r11.s64 + 2;
	// bdnz 0x832919b4
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_832919B4;
	// li r9,2
	ctx.r9.s64 = 2;
	// li r10,5
	ctx.r10.s64 = 5;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_832919DC:
	// li r9,4
	ctx.r9.s64 = 4;
	// rlwimi r9,r10,4,0,27
	ctx.r9.u64 = (__builtin_rotateleft32(ctx.r10.u32, 4) & 0xFFFFFFF0) | (ctx.r9.u64 & 0xFFFFFFFF0000000F);
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// extsh r9,r9
	ctx.r9.s64 = ctx.r9.s16;
	// sth r9,0(r11)
	PPC_STORE_U16(ctx.r11.u32 + 0, ctx.r9.u16);
	// sthu r9,2(r11)
	ea = 2 + ctx.r11.u32;
	PPC_STORE_U16(ea, ctx.r9.u16);
	ctx.r11.u32 = ea;
	// addi r11,r11,2
	ctx.r11.s64 = ctx.r11.s64 + 2;
	// bdnz 0x832919dc
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_832919DC;
	// li r9,2
	ctx.r9.s64 = 2;
	// li r10,3
	ctx.r10.s64 = 3;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_83291A08:
	// rlwinm r9,r10,4,0,27
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 4) & 0xFFFFFFF0;
	// li r8,-20475
	ctx.r8.s64 = -20475;
	// ori r7,r9,3
	ctx.r7.u64 = ctx.r9.u64 | 3;
	// or r8,r9,r8
	ctx.r8.u64 = ctx.r9.u64 | ctx.r8.u64;
	// extsh r7,r7
	ctx.r7.s64 = ctx.r7.s16;
	// li r6,-18427
	ctx.r6.s64 = -18427;
	// sth r7,0(r11)
	PPC_STORE_U16(ctx.r11.u32 + 0, ctx.r7.u16);
	// extsh r8,r8
	ctx.r8.s64 = ctx.r8.s16;
	// sthu r7,2(r11)
	ea = 2 + ctx.r11.u32;
	PPC_STORE_U16(ea, ctx.r7.u16);
	ctx.r11.u32 = ea;
	// or r9,r9,r6
	ctx.r9.u64 = ctx.r9.u64 | ctx.r6.u64;
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// extsh r9,r9
	ctx.r9.s64 = ctx.r9.s16;
	// sthu r8,2(r11)
	ea = 2 + ctx.r11.u32;
	PPC_STORE_U16(ea, ctx.r8.u16);
	ctx.r11.u32 = ea;
	// sthu r9,2(r11)
	ea = 2 + ctx.r11.u32;
	PPC_STORE_U16(ea, ctx.r9.u16);
	ctx.r11.u32 = ea;
	// addi r11,r11,2
	ctx.r11.s64 = ctx.r11.s64 + 2;
	// bdnz 0x83291a08
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_83291A08;
	// li r6,17
	ctx.r6.s64 = 17;
	// li r5,-24555
	ctx.r5.s64 = -24555;
	// sth r6,0(r11)
	PPC_STORE_U16(ctx.r11.u32 + 0, ctx.r6.u16);
	// li r4,-22507
	ctx.r4.s64 = -22507;
	// sthu r6,2(r11)
	ea = 2 + ctx.r11.u32;
	PPC_STORE_U16(ea, ctx.r6.u16);
	ctx.r11.u32 = ea;
	// li r7,-28652
	ctx.r7.s64 = -28652;
	// li r8,-26604
	ctx.r8.s64 = -26604;
	// li r9,-20461
	ctx.r9.s64 = -20461;
	// li r10,-18413
	ctx.r10.s64 = -18413;
	// sthu r5,2(r11)
	ea = 2 + ctx.r11.u32;
	PPC_STORE_U16(ea, ctx.r5.u16);
	ctx.r11.u32 = ea;
	// sthu r4,2(r11)
	ea = 2 + ctx.r11.u32;
	PPC_STORE_U16(ea, ctx.r4.u16);
	ctx.r11.u32 = ea;
	// sthu r7,2(r11)
	ea = 2 + ctx.r11.u32;
	PPC_STORE_U16(ea, ctx.r7.u16);
	ctx.r11.u32 = ea;
	// sthu r7,2(r11)
	ea = 2 + ctx.r11.u32;
	PPC_STORE_U16(ea, ctx.r7.u16);
	ctx.r11.u32 = ea;
	// sthu r8,2(r11)
	ea = 2 + ctx.r11.u32;
	PPC_STORE_U16(ea, ctx.r8.u16);
	ctx.r11.u32 = ea;
	// sthu r8,2(r11)
	ea = 2 + ctx.r11.u32;
	PPC_STORE_U16(ea, ctx.r8.u16);
	ctx.r11.u32 = ea;
	// sthu r9,2(r11)
	ea = 2 + ctx.r11.u32;
	PPC_STORE_U16(ea, ctx.r9.u16);
	ctx.r11.u32 = ea;
	// sthu r9,2(r11)
	ea = 2 + ctx.r11.u32;
	PPC_STORE_U16(ea, ctx.r9.u16);
	ctx.r11.u32 = ea;
	// sthu r9,2(r11)
	ea = 2 + ctx.r11.u32;
	PPC_STORE_U16(ea, ctx.r9.u16);
	ctx.r11.u32 = ea;
	// sthu r9,2(r11)
	ea = 2 + ctx.r11.u32;
	PPC_STORE_U16(ea, ctx.r9.u16);
	ctx.r11.u32 = ea;
	// sthu r10,2(r11)
	ea = 2 + ctx.r11.u32;
	PPC_STORE_U16(ea, ctx.r10.u16);
	ctx.r11.u32 = ea;
	// sthu r10,2(r11)
	ea = 2 + ctx.r11.u32;
	PPC_STORE_U16(ea, ctx.r10.u16);
	ctx.r11.u32 = ea;
	// sthu r10,2(r11)
	ea = 2 + ctx.r11.u32;
	PPC_STORE_U16(ea, ctx.r10.u16);
	ctx.r11.u32 = ea;
	// sthu r10,2(r11)
	ea = 2 + ctx.r11.u32;
	PPC_STORE_U16(ea, ctx.r10.u16);
	ctx.r11.u32 = ea;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83291AA8"))) PPC_WEAK_FUNC(sub_83291AA8);
PPC_FUNC_IMPL(__imp__sub_83291AA8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lis r11,-31826
	ctx.r11.s64 = -2085748736;
	// li r9,4358
	ctx.r9.s64 = 4358;
	// addi r11,r11,-30768
	ctx.r11.s64 = ctx.r11.s64 + -30768;
	// li r7,4613
	ctx.r7.s64 = 4613;
	// li r6,6661
	ctx.r6.s64 = 6661;
	// li r5,261
	ctx.r5.s64 = 261;
	// li r10,2051
	ctx.r10.s64 = 2051;
	// li r8,8
	ctx.r8.s64 = 8;
	// sth r9,0(r11)
	PPC_STORE_U16(ctx.r11.u32 + 0, ctx.r9.u16);
	// sth r7,2(r11)
	PPC_STORE_U16(ctx.r11.u32 + 2, ctx.r7.u16);
	// addi r9,r11,8
	ctx.r9.s64 = ctx.r11.s64 + 8;
	// sth r6,4(r11)
	PPC_STORE_U16(ctx.r11.u32 + 4, ctx.r6.u16);
	// addi r9,r11,14
	ctx.r9.s64 = ctx.r11.s64 + 14;
	// sth r5,6(r11)
	PPC_STORE_U16(ctx.r11.u32 + 6, ctx.r5.u16);
	// sth r10,8(r11)
	PPC_STORE_U16(ctx.r11.u32 + 8, ctx.r10.u16);
	// sth r10,10(r11)
	PPC_STORE_U16(ctx.r11.u32 + 10, ctx.r10.u16);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// sth r10,12(r11)
	PPC_STORE_U16(ctx.r11.u32 + 12, ctx.r10.u16);
	// sth r10,14(r11)
	PPC_STORE_U16(ctx.r11.u32 + 14, ctx.r10.u16);
	// li r10,514
	ctx.r10.s64 = 514;
loc_83291AF8:
	// sthu r10,2(r9)
	ea = 2 + ctx.r9.u32;
	PPC_STORE_U16(ea, ctx.r10.u16);
	ctx.r9.u32 = ea;
	// bdnz 0x83291af8
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_83291AF8;
	// li r10,16
	ctx.r10.s64 = 16;
	// li r9,2561
	ctx.r9.s64 = 2561;
	// addi r11,r11,30
	ctx.r11.s64 = ctx.r11.s64 + 30;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_83291B10:
	// sthu r9,2(r11)
	ea = 2 + ctx.r11.u32;
	PPC_STORE_U16(ea, ctx.r9.u16);
	ctx.r11.u32 = ea;
	// bdnz 0x83291b10
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_83291B10;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83291B1C"))) PPC_WEAK_FUNC(sub_83291B1C);
PPC_FUNC_IMPL(__imp__sub_83291B1C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83291B20"))) PPC_WEAK_FUNC(sub_83291B20);
PPC_FUNC_IMPL(__imp__sub_83291B20) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lis r11,-31826
	ctx.r11.s64 = -2085748736;
	// li r8,7936
	ctx.r8.s64 = 7936;
	// addi r11,r11,-31408
	ctx.r11.s64 = ctx.r11.s64 + -31408;
	// li r7,4358
	ctx.r7.s64 = 4358;
	// li r6,5638
	ctx.r6.s64 = 5638;
	// li r5,6662
	ctx.r5.s64 = 6662;
	// li r3,7685
	ctx.r3.s64 = 7685;
	// sth r8,0(r11)
	PPC_STORE_U16(ctx.r11.u32 + 0, ctx.r8.u16);
	// li r4,261
	ctx.r4.s64 = 261;
	// sth r7,2(r11)
	PPC_STORE_U16(ctx.r11.u32 + 2, ctx.r7.u16);
	// li r9,2052
	ctx.r9.s64 = 2052;
	// sth r6,4(r11)
	PPC_STORE_U16(ctx.r11.u32 + 4, ctx.r6.u16);
	// li r10,2564
	ctx.r10.s64 = 2564;
	// sth r5,6(r11)
	PPC_STORE_U16(ctx.r11.u32 + 6, ctx.r5.u16);
	// li r8,8
	ctx.r8.s64 = 8;
	// sth r3,8(r11)
	PPC_STORE_U16(ctx.r11.u32 + 8, ctx.r3.u16);
	// sth r3,10(r11)
	PPC_STORE_U16(ctx.r11.u32 + 10, ctx.r3.u16);
	// sth r4,12(r11)
	PPC_STORE_U16(ctx.r11.u32 + 12, ctx.r4.u16);
	// sth r4,14(r11)
	PPC_STORE_U16(ctx.r11.u32 + 14, ctx.r4.u16);
	// sth r9,16(r11)
	PPC_STORE_U16(ctx.r11.u32 + 16, ctx.r9.u16);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// sth r9,18(r11)
	PPC_STORE_U16(ctx.r11.u32 + 18, ctx.r9.u16);
	// sth r9,20(r11)
	PPC_STORE_U16(ctx.r11.u32 + 20, ctx.r9.u16);
	// sth r9,22(r11)
	PPC_STORE_U16(ctx.r11.u32 + 22, ctx.r9.u16);
	// sth r10,24(r11)
	PPC_STORE_U16(ctx.r11.u32 + 24, ctx.r10.u16);
	// addi r9,r11,8
	ctx.r9.s64 = ctx.r11.s64 + 8;
	// sth r10,26(r11)
	PPC_STORE_U16(ctx.r11.u32 + 26, ctx.r10.u16);
	// addi r9,r11,12
	ctx.r9.s64 = ctx.r11.s64 + 12;
	// sth r10,28(r11)
	PPC_STORE_U16(ctx.r11.u32 + 28, ctx.r10.u16);
	// addi r9,r11,16
	ctx.r9.s64 = ctx.r11.s64 + 16;
	// sth r10,30(r11)
	PPC_STORE_U16(ctx.r11.u32 + 30, ctx.r10.u16);
	// addi r10,r11,24
	ctx.r10.s64 = ctx.r11.s64 + 24;
	// li r9,1027
	ctx.r9.s64 = 1027;
	// addi r10,r11,30
	ctx.r10.s64 = ctx.r11.s64 + 30;
loc_83291BA8:
	// sthu r9,2(r10)
	ea = 2 + ctx.r10.u32;
	PPC_STORE_U16(ea, ctx.r9.u16);
	ctx.r10.u32 = ea;
	// bdnz 0x83291ba8
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_83291BA8;
	// li r10,8
	ctx.r10.s64 = 8;
	// li r8,1539
	ctx.r8.s64 = 1539;
	// addi r9,r11,46
	ctx.r9.s64 = ctx.r11.s64 + 46;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_83291BC0:
	// sthu r8,2(r9)
	ea = 2 + ctx.r9.u32;
	PPC_STORE_U16(ea, ctx.r8.u16);
	ctx.r9.u32 = ea;
	// bdnz 0x83291bc0
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_83291BC0;
	// li r10,16
	ctx.r10.s64 = 16;
	// li r8,3074
	ctx.r8.s64 = 3074;
	// addi r9,r11,62
	ctx.r9.s64 = ctx.r11.s64 + 62;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_83291BD8:
	// sthu r8,2(r9)
	ea = 2 + ctx.r9.u32;
	PPC_STORE_U16(ea, ctx.r8.u16);
	ctx.r9.u32 = ea;
	// bdnz 0x83291bd8
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_83291BD8;
	// li r10,16
	ctx.r10.s64 = 16;
	// li r9,3586
	ctx.r9.s64 = 3586;
	// addi r11,r11,94
	ctx.r11.s64 = ctx.r11.s64 + 94;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_83291BF0:
	// sthu r9,2(r11)
	ea = 2 + ctx.r11.u32;
	PPC_STORE_U16(ea, ctx.r9.u16);
	ctx.r11.u32 = ea;
	// bdnz 0x83291bf0
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_83291BF0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83291BFC"))) PPC_WEAK_FUNC(sub_83291BFC);
PPC_FUNC_IMPL(__imp__sub_83291BFC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83291C00"))) PPC_WEAK_FUNC(sub_83291C00);
PPC_FUNC_IMPL(__imp__sub_83291C00) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lis r11,-31826
	ctx.r11.s64 = -2085748736;
	// li r10,24
	ctx.r10.s64 = 24;
	// addi r11,r11,-30832
	ctx.r11.s64 = ctx.r11.s64 + -30832;
	// li r4,127
	ctx.r4.s64 = 127;
	// addi r9,r11,-448
	ctx.r9.s64 = ctx.r11.s64 + -448;
	// mr r8,r4
	ctx.r8.u64 = ctx.r4.u64;
	// addi r9,r9,-2
	ctx.r9.s64 = ctx.r9.s64 + -2;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_83291C20:
	// sthu r8,2(r9)
	ea = 2 + ctx.r9.u32;
	PPC_STORE_U16(ea, ctx.r8.u16);
	ctx.r9.u32 = ea;
	// bdnz 0x83291c20
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_83291C20;
	// addi r10,r11,-448
	ctx.r10.s64 = ctx.r11.s64 + -448;
	// li r8,16
	ctx.r8.s64 = 16;
	// li r9,-16
	ctx.r9.s64 = -16;
	// addi r10,r10,48
	ctx.r10.s64 = ctx.r10.s64 + 48;
	// li r7,11
	ctx.r7.s64 = 11;
loc_83291C3C:
	// mr r6,r8
	ctx.r6.u64 = ctx.r8.u64;
	// mr r5,r9
	ctx.r5.u64 = ctx.r9.u64;
	// rlwimi r6,r7,8,0,23
	ctx.r6.u64 = (__builtin_rotateleft32(ctx.r7.u32, 8) & 0xFFFFFF00) | (ctx.r6.u64 & 0xFFFFFFFF000000FF);
	// rlwimi r5,r7,8,0,23
	ctx.r5.u64 = (__builtin_rotateleft32(ctx.r7.u32, 8) & 0xFFFFFF00) | (ctx.r5.u64 & 0xFFFFFFFF000000FF);
	// sth r6,0(r10)
	PPC_STORE_U16(ctx.r10.u32 + 0, ctx.r6.u16);
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// sthu r5,2(r10)
	ea = 2 + ctx.r10.u32;
	PPC_STORE_U16(ea, ctx.r5.u16);
	ctx.r10.u32 = ea;
	// addi r8,r8,-1
	ctx.r8.s64 = ctx.r8.s64 + -1;
	// cmpwi cr6,r9,-11
	ctx.cr6.compare<int32_t>(ctx.r9.s32, -11, ctx.xer);
	// addi r10,r10,2
	ctx.r10.s64 = ctx.r10.s64 + 2;
	// ble cr6,0x83291c3c
	if (!ctx.cr6.gt) goto loc_83291C3C;
	// li r8,10
	ctx.r8.s64 = 10;
	// li r9,-10
	ctx.r9.s64 = -10;
loc_83291C70:
	// clrlwi r7,r8,24
	ctx.r7.u64 = ctx.r8.u32 & 0xFF;
	// clrlwi r6,r9,24
	ctx.r6.u64 = ctx.r9.u32 & 0xFF;
	// ori r7,r7,2560
	ctx.r7.u64 = ctx.r7.u64 | 2560;
	// ori r6,r6,2560
	ctx.r6.u64 = ctx.r6.u64 | 2560;
	// sth r7,0(r10)
	PPC_STORE_U16(ctx.r10.u32 + 0, ctx.r7.u16);
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// sth r7,2(r10)
	PPC_STORE_U16(ctx.r10.u32 + 2, ctx.r7.u16);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// addi r8,r8,-1
	ctx.r8.s64 = ctx.r8.s64 + -1;
	// cmpwi cr6,r9,-8
	ctx.cr6.compare<int32_t>(ctx.r9.s32, -8, ctx.xer);
	// sth r6,0(r10)
	PPC_STORE_U16(ctx.r10.u32 + 0, ctx.r6.u16);
	// sth r6,2(r10)
	PPC_STORE_U16(ctx.r10.u32 + 2, ctx.r6.u16);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// ble cr6,0x83291c70
	if (!ctx.cr6.gt) goto loc_83291C70;
	// li r5,7
	ctx.r5.s64 = 7;
	// li r7,-7
	ctx.r7.s64 = -7;
loc_83291CB0:
	// li r9,8
	ctx.r9.s64 = 8;
	// clrlwi r6,r5,24
	ctx.r6.u64 = ctx.r5.u32 & 0xFF;
	// addi r8,r10,-2
	ctx.r8.s64 = ctx.r10.s64 + -2;
	// ori r6,r6,2048
	ctx.r6.u64 = ctx.r6.u64 | 2048;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_83291CC4:
	// sthu r6,2(r8)
	ea = 2 + ctx.r8.u32;
	PPC_STORE_U16(ea, ctx.r6.u16);
	ctx.r8.u32 = ea;
	// bdnz 0x83291cc4
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_83291CC4;
	// li r9,8
	ctx.r9.s64 = 8;
	// clrlwi r8,r7,24
	ctx.r8.u64 = ctx.r7.u32 & 0xFF;
	// addi r10,r10,16
	ctx.r10.s64 = ctx.r10.s64 + 16;
	// ori r6,r8,2048
	ctx.r6.u64 = ctx.r8.u64 | 2048;
	// addi r8,r10,-2
	ctx.r8.s64 = ctx.r10.s64 + -2;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_83291CE4:
	// sthu r6,2(r8)
	ea = 2 + ctx.r8.u32;
	PPC_STORE_U16(ea, ctx.r6.u16);
	ctx.r8.u32 = ea;
	// bdnz 0x83291ce4
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_83291CE4;
	// addi r7,r7,1
	ctx.r7.s64 = ctx.r7.s64 + 1;
	// addi r10,r10,16
	ctx.r10.s64 = ctx.r10.s64 + 16;
	// addi r5,r5,-1
	ctx.r5.s64 = ctx.r5.s64 + -1;
	// cmpwi cr6,r7,-5
	ctx.cr6.compare<int32_t>(ctx.r7.s32, -5, ctx.xer);
	// ble cr6,0x83291cb0
	if (!ctx.cr6.gt) goto loc_83291CB0;
	// li r9,16
	ctx.r9.s64 = 16;
	// addi r8,r10,-2
	ctx.r8.s64 = ctx.r10.s64 + -2;
	// li r7,1796
	ctx.r7.s64 = 1796;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_83291D10:
	// sthu r7,2(r8)
	ea = 2 + ctx.r8.u32;
	PPC_STORE_U16(ea, ctx.r7.u16);
	ctx.r8.u32 = ea;
	// bdnz 0x83291d10
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_83291D10;
	// li r9,16
	ctx.r9.s64 = 16;
	// addi r10,r10,32
	ctx.r10.s64 = ctx.r10.s64 + 32;
	// li r8,2044
	ctx.r8.s64 = 2044;
	// addi r10,r10,-2
	ctx.r10.s64 = ctx.r10.s64 + -2;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_83291D2C:
	// sthu r8,2(r10)
	ea = 2 + ctx.r10.u32;
	PPC_STORE_U16(ea, ctx.r8.u16);
	ctx.r10.u32 = ea;
	// bdnz 0x83291d2c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_83291D2C;
	// sth r4,0(r11)
	PPC_STORE_U16(ctx.r11.u32 + 0, ctx.r4.u16);
	// li r8,1283
	ctx.r8.s64 = 1283;
	// li r7,1533
	ctx.r7.s64 = 1533;
	// sth r4,2(r11)
	PPC_STORE_U16(ctx.r11.u32 + 2, ctx.r4.u16);
	// li r5,1026
	ctx.r5.s64 = 1026;
	// sth r8,4(r11)
	PPC_STORE_U16(ctx.r11.u32 + 4, ctx.r8.u16);
	// li r6,1278
	ctx.r6.s64 = 1278;
	// sth r7,6(r11)
	PPC_STORE_U16(ctx.r11.u32 + 6, ctx.r7.u16);
	// li r9,769
	ctx.r9.s64 = 769;
	// sth r5,8(r11)
	PPC_STORE_U16(ctx.r11.u32 + 8, ctx.r5.u16);
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// sth r5,10(r11)
	PPC_STORE_U16(ctx.r11.u32 + 10, ctx.r5.u16);
	// sth r6,12(r11)
	PPC_STORE_U16(ctx.r11.u32 + 12, ctx.r6.u16);
	// li r10,1023
	ctx.r10.s64 = 1023;
	// sth r6,14(r11)
	PPC_STORE_U16(ctx.r11.u32 + 14, ctx.r6.u16);
	// sth r9,16(r11)
	PPC_STORE_U16(ctx.r11.u32 + 16, ctx.r9.u16);
	// li r8,16
	ctx.r8.s64 = 16;
	// sth r9,18(r11)
	PPC_STORE_U16(ctx.r11.u32 + 18, ctx.r9.u16);
	// sth r9,20(r11)
	PPC_STORE_U16(ctx.r11.u32 + 20, ctx.r9.u16);
	// sth r9,22(r11)
	PPC_STORE_U16(ctx.r11.u32 + 22, ctx.r9.u16);
	// sth r10,24(r11)
	PPC_STORE_U16(ctx.r11.u32 + 24, ctx.r10.u16);
	// addi r9,r11,8
	ctx.r9.s64 = ctx.r11.s64 + 8;
	// sth r10,26(r11)
	PPC_STORE_U16(ctx.r11.u32 + 26, ctx.r10.u16);
	// addi r9,r11,12
	ctx.r9.s64 = ctx.r11.s64 + 12;
	// sth r10,28(r11)
	PPC_STORE_U16(ctx.r11.u32 + 28, ctx.r10.u16);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// sth r10,30(r11)
	PPC_STORE_U16(ctx.r11.u32 + 30, ctx.r10.u16);
	// addi r10,r11,16
	ctx.r10.s64 = ctx.r11.s64 + 16;
	// addi r10,r11,24
	ctx.r10.s64 = ctx.r11.s64 + 24;
	// addi r11,r11,30
	ctx.r11.s64 = ctx.r11.s64 + 30;
	// li r10,256
	ctx.r10.s64 = 256;
loc_83291DB0:
	// sthu r10,2(r11)
	ea = 2 + ctx.r11.u32;
	PPC_STORE_U16(ea, ctx.r10.u16);
	ctx.r11.u32 = ea;
	// bdnz 0x83291db0
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_83291DB0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83291DBC"))) PPC_WEAK_FUNC(sub_83291DBC);
PPC_FUNC_IMPL(__imp__sub_83291DBC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83291DC0"))) PPC_WEAK_FUNC(sub_83291DC0);
PPC_FUNC_IMPL(__imp__sub_83291DC0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x833a019c
	ctx.lr = 0x83291DC8;
	__savegprlr_25(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,-6391
	ctx.r10.s64 = -6391;
	// sth r11,0(r3)
	PPC_STORE_U16(ctx.r3.u32 + 0, ctx.r11.u16);
	// li r9,-9463
	ctx.r9.s64 = -9463;
	// sth r11,2(r3)
	PPC_STORE_U16(ctx.r3.u32 + 2, ctx.r11.u16);
	// sthu r10,4(r3)
	ea = 4 + ctx.r3.u32;
	PPC_STORE_U16(ea, ctx.r10.u16);
	ctx.r3.u32 = ea;
	// li r11,-1271
	ctx.r11.s64 = -1271;
	// li r27,-2295
	ctx.r27.s64 = -2295;
	// li r26,-4343
	ctx.r26.s64 = -4343;
	// li r25,-8439
	ctx.r25.s64 = -8439;
	// li r30,-17912
	ctx.r30.s64 = -17912;
	// sthu r9,2(r3)
	ea = 2 + ctx.r3.u32;
	PPC_STORE_U16(ea, ctx.r9.u16);
	ctx.r3.u32 = ea;
	// li r31,-18936
	ctx.r31.s64 = -18936;
	// li r4,-20984
	ctx.r4.s64 = -20984;
	// li r5,-25080
	ctx.r5.s64 = -25080;
	// li r6,30984
	ctx.r6.s64 = 30984;
	// li r7,29960
	ctx.r7.s64 = 29960;
	// sthu r11,2(r3)
	ea = 2 + ctx.r3.u32;
	PPC_STORE_U16(ea, ctx.r11.u16);
	ctx.r3.u32 = ea;
	// li r8,27912
	ctx.r8.s64 = 27912;
	// li r9,23816
	ctx.r9.s64 = 23816;
	// li r10,-23032
	ctx.r10.s64 = -23032;
	// li r28,-26104
	ctx.r28.s64 = -26104;
	// li r29,25864
	ctx.r29.s64 = 25864;
	// sthu r27,2(r3)
	ea = 2 + ctx.r3.u32;
	PPC_STORE_U16(ea, ctx.r27.u16);
	ctx.r3.u32 = ea;
	// sthu r26,2(r3)
	ea = 2 + ctx.r3.u32;
	PPC_STORE_U16(ea, ctx.r26.u16);
	ctx.r3.u32 = ea;
	// sthu r25,2(r3)
	ea = 2 + ctx.r3.u32;
	PPC_STORE_U16(ea, ctx.r25.u16);
	ctx.r3.u32 = ea;
	// addi r11,r3,2
	ctx.r11.s64 = ctx.r3.s64 + 2;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// sth r30,2(r3)
	PPC_STORE_U16(ctx.r3.u32 + 2, ctx.r30.u16);
	// sth r30,4(r3)
	PPC_STORE_U16(ctx.r3.u32 + 4, ctx.r30.u16);
	// li r30,22792
	ctx.r30.s64 = 22792;
	// li r3,-10488
	ctx.r3.s64 = -10488;
	// sth r31,0(r11)
	PPC_STORE_U16(ctx.r11.u32 + 0, ctx.r31.u16);
	// sth r31,2(r11)
	PPC_STORE_U16(ctx.r11.u32 + 2, ctx.r31.u16);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// li r31,-5368
	ctx.r31.s64 = -5368;
	// sth r4,0(r11)
	PPC_STORE_U16(ctx.r11.u32 + 0, ctx.r4.u16);
	// sth r4,2(r11)
	PPC_STORE_U16(ctx.r11.u32 + 2, ctx.r4.u16);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// li r4,-3320
	ctx.r4.s64 = -3320;
	// sth r5,0(r11)
	PPC_STORE_U16(ctx.r11.u32 + 0, ctx.r5.u16);
	// sth r5,2(r11)
	PPC_STORE_U16(ctx.r11.u32 + 2, ctx.r5.u16);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// li r5,-12536
	ctx.r5.s64 = -12536;
	// sth r6,0(r11)
	PPC_STORE_U16(ctx.r11.u32 + 0, ctx.r6.u16);
	// sth r6,2(r11)
	PPC_STORE_U16(ctx.r11.u32 + 2, ctx.r6.u16);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// li r6,-22008
	ctx.r6.s64 = -22008;
	// sth r7,0(r11)
	PPC_STORE_U16(ctx.r11.u32 + 0, ctx.r7.u16);
	// sth r7,2(r11)
	PPC_STORE_U16(ctx.r11.u32 + 2, ctx.r7.u16);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// li r7,-27128
	ctx.r7.s64 = -27128;
	// sth r8,0(r11)
	PPC_STORE_U16(ctx.r11.u32 + 0, ctx.r8.u16);
	// sth r8,2(r11)
	PPC_STORE_U16(ctx.r11.u32 + 2, ctx.r8.u16);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// li r8,-19960
	ctx.r8.s64 = -19960;
	// sth r9,0(r11)
	PPC_STORE_U16(ctx.r11.u32 + 0, ctx.r9.u16);
	// sth r9,2(r11)
	PPC_STORE_U16(ctx.r11.u32 + 2, ctx.r9.u16);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// li r9,-29176
	ctx.r9.s64 = -29176;
	// sth r10,0(r11)
	PPC_STORE_U16(ctx.r11.u32 + 0, ctx.r10.u16);
	// sth r10,2(r11)
	PPC_STORE_U16(ctx.r11.u32 + 2, ctx.r10.u16);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// li r10,26888
	ctx.r10.s64 = 26888;
	// sth r28,0(r11)
	PPC_STORE_U16(ctx.r11.u32 + 0, ctx.r28.u16);
	// sth r28,2(r11)
	PPC_STORE_U16(ctx.r11.u32 + 2, ctx.r28.u16);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// sth r29,0(r11)
	PPC_STORE_U16(ctx.r11.u32 + 0, ctx.r29.u16);
	// sth r29,2(r11)
	PPC_STORE_U16(ctx.r11.u32 + 2, ctx.r29.u16);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// sth r30,0(r11)
	PPC_STORE_U16(ctx.r11.u32 + 0, ctx.r30.u16);
	// sth r30,2(r11)
	PPC_STORE_U16(ctx.r11.u32 + 2, ctx.r30.u16);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// sth r31,0(r11)
	PPC_STORE_U16(ctx.r11.u32 + 0, ctx.r31.u16);
	// sth r31,2(r11)
	PPC_STORE_U16(ctx.r11.u32 + 2, ctx.r31.u16);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// sth r3,0(r11)
	PPC_STORE_U16(ctx.r11.u32 + 0, ctx.r3.u16);
	// sth r3,2(r11)
	PPC_STORE_U16(ctx.r11.u32 + 2, ctx.r3.u16);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// sth r4,0(r11)
	PPC_STORE_U16(ctx.r11.u32 + 0, ctx.r4.u16);
	// sth r4,2(r11)
	PPC_STORE_U16(ctx.r11.u32 + 2, ctx.r4.u16);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// li r4,21768
	ctx.r4.s64 = 21768;
	// sth r5,0(r11)
	PPC_STORE_U16(ctx.r11.u32 + 0, ctx.r5.u16);
	// sth r5,2(r11)
	PPC_STORE_U16(ctx.r11.u32 + 2, ctx.r5.u16);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// li r5,28936
	ctx.r5.s64 = 28936;
	// sth r6,0(r11)
	PPC_STORE_U16(ctx.r11.u32 + 0, ctx.r6.u16);
	// sth r6,2(r11)
	PPC_STORE_U16(ctx.r11.u32 + 2, ctx.r6.u16);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// li r6,19720
	ctx.r6.s64 = 19720;
	// sth r7,0(r11)
	PPC_STORE_U16(ctx.r11.u32 + 0, ctx.r7.u16);
	// sth r7,2(r11)
	PPC_STORE_U16(ctx.r11.u32 + 2, ctx.r7.u16);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// li r7,-7416
	ctx.r7.s64 = -7416;
	// sth r8,0(r11)
	PPC_STORE_U16(ctx.r11.u32 + 0, ctx.r8.u16);
	// sth r8,2(r11)
	PPC_STORE_U16(ctx.r11.u32 + 2, ctx.r8.u16);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// li r8,-11512
	ctx.r8.s64 = -11512;
	// sth r9,0(r11)
	PPC_STORE_U16(ctx.r11.u32 + 0, ctx.r9.u16);
	// sth r9,2(r11)
	PPC_STORE_U16(ctx.r11.u32 + 2, ctx.r9.u16);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// li r9,-13560
	ctx.r9.s64 = -13560;
	// sth r10,0(r11)
	PPC_STORE_U16(ctx.r11.u32 + 0, ctx.r10.u16);
	// sth r10,2(r11)
	PPC_STORE_U16(ctx.r11.u32 + 2, ctx.r10.u16);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// li r10,-14584
	ctx.r10.s64 = -14584;
	// sth r4,0(r11)
	PPC_STORE_U16(ctx.r11.u32 + 0, ctx.r4.u16);
	// sth r4,2(r11)
	PPC_STORE_U16(ctx.r11.u32 + 2, ctx.r4.u16);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// sth r5,0(r11)
	PPC_STORE_U16(ctx.r11.u32 + 0, ctx.r5.u16);
	// sth r5,2(r11)
	PPC_STORE_U16(ctx.r11.u32 + 2, ctx.r5.u16);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// sth r6,0(r11)
	PPC_STORE_U16(ctx.r11.u32 + 0, ctx.r6.u16);
	// sth r6,2(r11)
	PPC_STORE_U16(ctx.r11.u32 + 2, ctx.r6.u16);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// sth r7,0(r11)
	PPC_STORE_U16(ctx.r11.u32 + 0, ctx.r7.u16);
	// sth r7,2(r11)
	PPC_STORE_U16(ctx.r11.u32 + 2, ctx.r7.u16);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// sth r8,0(r11)
	PPC_STORE_U16(ctx.r11.u32 + 0, ctx.r8.u16);
	// sth r8,2(r11)
	PPC_STORE_U16(ctx.r11.u32 + 2, ctx.r8.u16);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// sth r9,0(r11)
	PPC_STORE_U16(ctx.r11.u32 + 0, ctx.r9.u16);
	// sth r9,2(r11)
	PPC_STORE_U16(ctx.r11.u32 + 2, ctx.r9.u16);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// addi r3,r11,4
	ctx.r3.s64 = ctx.r11.s64 + 4;
	// sth r10,0(r11)
	PPC_STORE_U16(ctx.r11.u32 + 0, ctx.r10.u16);
	// sth r10,2(r11)
	PPC_STORE_U16(ctx.r11.u32 + 2, ctx.r10.u16);
	// b 0x833a01ec
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83291FCC"))) PPC_WEAK_FUNC(sub_83291FCC);
PPC_FUNC_IMPL(__imp__sub_83291FCC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83291FD0"))) PPC_WEAK_FUNC(sub_83291FD0);
PPC_FUNC_IMPL(__imp__sub_83291FD0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// std r31,-8(r1)
	PPC_STORE_U64(ctx.r1.u32 + -8, ctx.r31.u64);
	// li r31,-24057
	ctx.r31.s64 = -24057;
	// addi r11,r3,8
	ctx.r11.s64 = ctx.r3.s64 + 8;
	// sth r31,0(r3)
	PPC_STORE_U16(ctx.r3.u32 + 0, ctx.r31.u16);
	// li r4,-28153
	ctx.r4.s64 = -28153;
	// sth r31,2(r3)
	PPC_STORE_U16(ctx.r3.u32 + 2, ctx.r31.u16);
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// sth r31,4(r3)
	PPC_STORE_U16(ctx.r3.u32 + 4, ctx.r31.u16);
	// li r5,-30201
	ctx.r5.s64 = -30201;
	// sth r31,6(r3)
	PPC_STORE_U16(ctx.r3.u32 + 6, ctx.r31.u16);
	// sth r4,8(r3)
	PPC_STORE_U16(ctx.r3.u32 + 8, ctx.r4.u16);
	// li r6,-31225
	ctx.r6.s64 = -31225;
	// sth r4,10(r3)
	PPC_STORE_U16(ctx.r3.u32 + 10, ctx.r4.u16);
	// li r7,24839
	ctx.r7.s64 = 24839;
	// sth r4,12(r3)
	PPC_STORE_U16(ctx.r3.u32 + 12, ctx.r4.u16);
	// li r8,20743
	ctx.r8.s64 = 20743;
	// sth r4,14(r3)
	PPC_STORE_U16(ctx.r3.u32 + 14, ctx.r4.u16);
	// sth r5,0(r11)
	PPC_STORE_U16(ctx.r11.u32 + 0, ctx.r5.u16);
	// li r9,18695
	ctx.r9.s64 = 18695;
	// sth r5,2(r11)
	PPC_STORE_U16(ctx.r11.u32 + 2, ctx.r5.u16);
	// li r10,17671
	ctx.r10.s64 = 17671;
	// sth r5,4(r11)
	PPC_STORE_U16(ctx.r11.u32 + 4, ctx.r5.u16);
	// sth r5,6(r11)
	PPC_STORE_U16(ctx.r11.u32 + 6, ctx.r5.u16);
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// sth r6,0(r11)
	PPC_STORE_U16(ctx.r11.u32 + 0, ctx.r6.u16);
	// sth r6,2(r11)
	PPC_STORE_U16(ctx.r11.u32 + 2, ctx.r6.u16);
	// sth r6,4(r11)
	PPC_STORE_U16(ctx.r11.u32 + 4, ctx.r6.u16);
	// sth r6,6(r11)
	PPC_STORE_U16(ctx.r11.u32 + 6, ctx.r6.u16);
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// sth r7,0(r11)
	PPC_STORE_U16(ctx.r11.u32 + 0, ctx.r7.u16);
	// sth r7,2(r11)
	PPC_STORE_U16(ctx.r11.u32 + 2, ctx.r7.u16);
	// sth r7,4(r11)
	PPC_STORE_U16(ctx.r11.u32 + 4, ctx.r7.u16);
	// sth r7,6(r11)
	PPC_STORE_U16(ctx.r11.u32 + 6, ctx.r7.u16);
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// sth r8,0(r11)
	PPC_STORE_U16(ctx.r11.u32 + 0, ctx.r8.u16);
	// sth r8,2(r11)
	PPC_STORE_U16(ctx.r11.u32 + 2, ctx.r8.u16);
	// sth r8,4(r11)
	PPC_STORE_U16(ctx.r11.u32 + 4, ctx.r8.u16);
	// sth r8,6(r11)
	PPC_STORE_U16(ctx.r11.u32 + 6, ctx.r8.u16);
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// li r8,-250
	ctx.r8.s64 = -250;
	// sth r9,0(r11)
	PPC_STORE_U16(ctx.r11.u32 + 0, ctx.r9.u16);
	// sth r9,2(r11)
	PPC_STORE_U16(ctx.r11.u32 + 2, ctx.r9.u16);
	// sth r9,4(r11)
	PPC_STORE_U16(ctx.r11.u32 + 4, ctx.r9.u16);
	// sth r9,6(r11)
	PPC_STORE_U16(ctx.r11.u32 + 6, ctx.r9.u16);
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// li r9,8
	ctx.r9.s64 = 8;
	// sth r10,0(r11)
	PPC_STORE_U16(ctx.r11.u32 + 0, ctx.r10.u16);
	// sth r10,2(r11)
	PPC_STORE_U16(ctx.r11.u32 + 2, ctx.r10.u16);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// sth r10,4(r11)
	PPC_STORE_U16(ctx.r11.u32 + 4, ctx.r10.u16);
	// sth r10,6(r11)
	PPC_STORE_U16(ctx.r11.u32 + 6, ctx.r10.u16);
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// addi r10,r11,-2
	ctx.r10.s64 = ctx.r11.s64 + -2;
loc_832920A4:
	// sthu r8,2(r10)
	ea = 2 + ctx.r10.u32;
	PPC_STORE_U16(ea, ctx.r8.u16);
	ctx.r10.u32 = ea;
	// bdnz 0x832920a4
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_832920A4;
	// li r10,8
	ctx.r10.s64 = 8;
	// addi r11,r11,16
	ctx.r11.s64 = ctx.r11.s64 + 16;
	// li r8,-15610
	ctx.r8.s64 = -15610;
	// addi r9,r11,-2
	ctx.r9.s64 = ctx.r11.s64 + -2;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_832920C0:
	// sthu r8,2(r9)
	ea = 2 + ctx.r9.u32;
	PPC_STORE_U16(ea, ctx.r8.u16);
	ctx.r9.u32 = ea;
	// bdnz 0x832920c0
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_832920C0;
	// li r10,8
	ctx.r10.s64 = 8;
	// addi r11,r11,16
	ctx.r11.s64 = ctx.r11.s64 + 16;
	// li r8,9222
	ctx.r8.s64 = 9222;
	// addi r9,r11,-2
	ctx.r9.s64 = ctx.r11.s64 + -2;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_832920DC:
	// sthu r8,2(r9)
	ea = 2 + ctx.r9.u32;
	PPC_STORE_U16(ea, ctx.r8.u16);
	ctx.r9.u32 = ea;
	// bdnz 0x832920dc
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_832920DC;
	// li r10,8
	ctx.r10.s64 = 8;
	// addi r11,r11,16
	ctx.r11.s64 = ctx.r11.s64 + 16;
	// li r8,6150
	ctx.r8.s64 = 6150;
	// addi r9,r11,-2
	ctx.r9.s64 = ctx.r11.s64 + -2;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_832920F8:
	// sthu r8,2(r9)
	ea = 2 + ctx.r9.u32;
	PPC_STORE_U16(ea, ctx.r8.u16);
	ctx.r9.u32 = ea;
	// bdnz 0x832920f8
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_832920F8;
	// li r10,16
	ctx.r10.s64 = 16;
	// addi r11,r11,16
	ctx.r11.s64 = ctx.r11.s64 + 16;
	// li r8,-16891
	ctx.r8.s64 = -16891;
	// addi r9,r11,-2
	ctx.r9.s64 = ctx.r11.s64 + -2;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_83292114:
	// sthu r8,2(r9)
	ea = 2 + ctx.r9.u32;
	PPC_STORE_U16(ea, ctx.r8.u16);
	ctx.r9.u32 = ea;
	// bdnz 0x83292114
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_83292114;
	// li r10,16
	ctx.r10.s64 = 16;
	// addi r11,r11,32
	ctx.r11.s64 = ctx.r11.s64 + 32;
	// li r8,-32251
	ctx.r8.s64 = -32251;
	// addi r9,r11,-2
	ctx.r9.s64 = ctx.r11.s64 + -2;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_83292130:
	// sthu r8,2(r9)
	ea = 2 + ctx.r9.u32;
	PPC_STORE_U16(ea, ctx.r8.u16);
	ctx.r9.u32 = ea;
	// bdnz 0x83292130
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_83292130;
	// li r10,16
	ctx.r10.s64 = 16;
	// addi r11,r11,32
	ctx.r11.s64 = ctx.r11.s64 + 32;
	// li r8,32005
	ctx.r8.s64 = 32005;
	// addi r9,r11,-2
	ctx.r9.s64 = ctx.r11.s64 + -2;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_8329214C:
	// sthu r8,2(r9)
	ea = 2 + ctx.r9.u32;
	PPC_STORE_U16(ea, ctx.r8.u16);
	ctx.r9.u32 = ea;
	// bdnz 0x8329214c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8329214C;
	// li r10,16
	ctx.r10.s64 = 16;
	// addi r11,r11,32
	ctx.r11.s64 = ctx.r11.s64 + 32;
	// li r8,16645
	ctx.r8.s64 = 16645;
	// addi r9,r11,-2
	ctx.r9.s64 = ctx.r11.s64 + -2;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_83292168:
	// sthu r8,2(r9)
	ea = 2 + ctx.r9.u32;
	PPC_STORE_U16(ea, ctx.r8.u16);
	ctx.r9.u32 = ea;
	// bdnz 0x83292168
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_83292168;
	// li r10,16
	ctx.r10.s64 = 16;
	// addi r11,r11,32
	ctx.r11.s64 = ctx.r11.s64 + 32;
	// li r8,14341
	ctx.r8.s64 = 14341;
	// addi r9,r11,-2
	ctx.r9.s64 = ctx.r11.s64 + -2;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_83292184:
	// sthu r8,2(r9)
	ea = 2 + ctx.r9.u32;
	PPC_STORE_U16(ea, ctx.r8.u16);
	ctx.r9.u32 = ea;
	// bdnz 0x83292184
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_83292184;
	// li r10,16
	ctx.r10.s64 = 16;
	// addi r11,r11,32
	ctx.r11.s64 = ctx.r11.s64 + 32;
	// li r8,13317
	ctx.r8.s64 = 13317;
	// addi r9,r11,-2
	ctx.r9.s64 = ctx.r11.s64 + -2;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_832921A0:
	// sthu r8,2(r9)
	ea = 2 + ctx.r9.u32;
	PPC_STORE_U16(ea, ctx.r8.u16);
	ctx.r9.u32 = ea;
	// bdnz 0x832921a0
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_832921A0;
	// li r10,16
	ctx.r10.s64 = 16;
	// addi r11,r11,32
	ctx.r11.s64 = ctx.r11.s64 + 32;
	// li r8,11269
	ctx.r8.s64 = 11269;
	// addi r9,r11,-2
	ctx.r9.s64 = ctx.r11.s64 + -2;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_832921BC:
	// sthu r8,2(r9)
	ea = 2 + ctx.r9.u32;
	PPC_STORE_U16(ea, ctx.r8.u16);
	ctx.r9.u32 = ea;
	// bdnz 0x832921bc
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_832921BC;
	// li r10,16
	ctx.r10.s64 = 16;
	// addi r11,r11,32
	ctx.r11.s64 = ctx.r11.s64 + 32;
	// li r8,7173
	ctx.r8.s64 = 7173;
	// addi r9,r11,-2
	ctx.r9.s64 = ctx.r11.s64 + -2;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_832921D8:
	// sthu r8,2(r9)
	ea = 2 + ctx.r9.u32;
	PPC_STORE_U16(ea, ctx.r8.u16);
	ctx.r9.u32 = ea;
	// bdnz 0x832921d8
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_832921D8;
	// li r10,16
	ctx.r10.s64 = 16;
	// addi r11,r11,32
	ctx.r11.s64 = ctx.r11.s64 + 32;
	// li r8,10245
	ctx.r8.s64 = 10245;
	// addi r9,r11,-2
	ctx.r9.s64 = ctx.r11.s64 + -2;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_832921F4:
	// sthu r8,2(r9)
	ea = 2 + ctx.r9.u32;
	PPC_STORE_U16(ea, ctx.r8.u16);
	ctx.r9.u32 = ea;
	// bdnz 0x832921f4
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_832921F4;
	// li r10,16
	ctx.r10.s64 = 16;
	// addi r11,r11,32
	ctx.r11.s64 = ctx.r11.s64 + 32;
	// li r8,5125
	ctx.r8.s64 = 5125;
	// addi r9,r11,-2
	ctx.r9.s64 = ctx.r11.s64 + -2;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_83292210:
	// sthu r8,2(r9)
	ea = 2 + ctx.r9.u32;
	PPC_STORE_U16(ea, ctx.r8.u16);
	ctx.r9.u32 = ea;
	// bdnz 0x83292210
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_83292210;
	// li r10,16
	ctx.r10.s64 = 16;
	// addi r11,r11,32
	ctx.r11.s64 = ctx.r11.s64 + 32;
	// li r8,12293
	ctx.r8.s64 = 12293;
	// addi r9,r11,-2
	ctx.r9.s64 = ctx.r11.s64 + -2;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_8329222C:
	// sthu r8,2(r9)
	ea = 2 + ctx.r9.u32;
	PPC_STORE_U16(ea, ctx.r8.u16);
	ctx.r9.u32 = ea;
	// bdnz 0x8329222c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8329222C;
	// li r10,16
	ctx.r10.s64 = 16;
	// addi r11,r11,32
	ctx.r11.s64 = ctx.r11.s64 + 32;
	// li r8,3077
	ctx.r8.s64 = 3077;
	// addi r9,r11,-2
	ctx.r9.s64 = ctx.r11.s64 + -2;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_83292248:
	// sthu r8,2(r9)
	ea = 2 + ctx.r9.u32;
	PPC_STORE_U16(ea, ctx.r8.u16);
	ctx.r9.u32 = ea;
	// bdnz 0x83292248
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_83292248;
	// li r10,32
	ctx.r10.s64 = 32;
	// addi r11,r11,32
	ctx.r11.s64 = ctx.r11.s64 + 32;
	// li r8,8196
	ctx.r8.s64 = 8196;
	// addi r9,r11,-2
	ctx.r9.s64 = ctx.r11.s64 + -2;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_83292264:
	// sthu r8,2(r9)
	ea = 2 + ctx.r9.u32;
	PPC_STORE_U16(ea, ctx.r8.u16);
	ctx.r9.u32 = ea;
	// bdnz 0x83292264
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_83292264;
	// li r10,32
	ctx.r10.s64 = 32;
	// addi r11,r11,64
	ctx.r11.s64 = ctx.r11.s64 + 64;
	// li r8,4100
	ctx.r8.s64 = 4100;
	// addi r9,r11,-2
	ctx.r9.s64 = ctx.r11.s64 + -2;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_83292280:
	// sthu r8,2(r9)
	ea = 2 + ctx.r9.u32;
	PPC_STORE_U16(ea, ctx.r8.u16);
	ctx.r9.u32 = ea;
	// bdnz 0x83292280
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_83292280;
	// li r10,32
	ctx.r10.s64 = 32;
	// addi r11,r11,64
	ctx.r11.s64 = ctx.r11.s64 + 64;
	// li r8,2052
	ctx.r8.s64 = 2052;
	// addi r9,r11,-2
	ctx.r9.s64 = ctx.r11.s64 + -2;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_8329229C:
	// sthu r8,2(r9)
	ea = 2 + ctx.r9.u32;
	PPC_STORE_U16(ea, ctx.r8.u16);
	ctx.r9.u32 = ea;
	// bdnz 0x8329229c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8329229C;
	// li r10,32
	ctx.r10.s64 = 32;
	// addi r11,r11,64
	ctx.r11.s64 = ctx.r11.s64 + 64;
	// li r8,1028
	ctx.r8.s64 = 1028;
	// addi r9,r11,-2
	ctx.r9.s64 = ctx.r11.s64 + -2;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_832922B8:
	// sthu r8,2(r9)
	ea = 2 + ctx.r9.u32;
	PPC_STORE_U16(ea, ctx.r8.u16);
	ctx.r9.u32 = ea;
	// bdnz 0x832922b8
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_832922B8;
	// li r10,64
	ctx.r10.s64 = 64;
	// addi r11,r11,64
	ctx.r11.s64 = ctx.r11.s64 + 64;
	// li r8,15363
	ctx.r8.s64 = 15363;
	// addi r9,r11,-2
	ctx.r9.s64 = ctx.r11.s64 + -2;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_832922D4:
	// sthu r8,2(r9)
	ea = 2 + ctx.r9.u32;
	PPC_STORE_U16(ea, ctx.r8.u16);
	ctx.r9.u32 = ea;
	// bdnz 0x832922d4
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_832922D4;
	// addi r3,r11,128
	ctx.r3.s64 = ctx.r11.s64 + 128;
	// ld r31,-8(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_832922E8"))) PPC_WEAK_FUNC(sub_832922E8);
PPC_FUNC_IMPL(__imp__sub_832922E8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lis r11,-31826
	ctx.r11.s64 = -2085748736;
	// li r10,32
	ctx.r10.s64 = 32;
	// addi r11,r11,-30704
	ctx.r11.s64 = ctx.r11.s64 + -30704;
	// li r8,18
	ctx.r8.s64 = 18;
	// addi r9,r11,-1
	ctx.r9.s64 = ctx.r11.s64 + -1;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_83292300:
	// stbu r8,1(r9)
	ea = 1 + ctx.r9.u32;
	PPC_STORE_U8(ea, ctx.r8.u8);
	ctx.r9.u32 = ea;
	// bdnz 0x83292300
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_83292300;
	// li r10,32
	ctx.r10.s64 = 32;
	// li r8,34
	ctx.r8.s64 = 34;
	// addi r9,r11,31
	ctx.r9.s64 = ctx.r11.s64 + 31;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_83292318:
	// stbu r8,1(r9)
	ea = 1 + ctx.r9.u32;
	PPC_STORE_U8(ea, ctx.r8.u8);
	ctx.r9.u32 = ea;
	// bdnz 0x83292318
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_83292318;
	// li r10,16
	ctx.r10.s64 = 16;
	// li r8,3
	ctx.r8.s64 = 3;
	// addi r9,r11,63
	ctx.r9.s64 = ctx.r11.s64 + 63;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_83292330:
	// stbu r8,1(r9)
	ea = 1 + ctx.r9.u32;
	PPC_STORE_U8(ea, ctx.r8.u8);
	ctx.r9.u32 = ea;
	// bdnz 0x83292330
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_83292330;
	// li r10,16
	ctx.r10.s64 = 16;
	// li r8,51
	ctx.r8.s64 = 51;
	// addi r9,r11,79
	ctx.r9.s64 = ctx.r11.s64 + 79;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_83292348:
	// stbu r8,1(r9)
	ea = 1 + ctx.r9.u32;
	PPC_STORE_U8(ea, ctx.r8.u8);
	ctx.r9.u32 = ea;
	// bdnz 0x83292348
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_83292348;
	// li r10,16
	ctx.r10.s64 = 16;
	// li r8,67
	ctx.r8.s64 = 67;
	// addi r9,r11,95
	ctx.r9.s64 = ctx.r11.s64 + 95;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_83292360:
	// stbu r8,1(r9)
	ea = 1 + ctx.r9.u32;
	PPC_STORE_U8(ea, ctx.r8.u8);
	ctx.r9.u32 = ea;
	// bdnz 0x83292360
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_83292360;
	// li r9,8
	ctx.r9.s64 = 8;
	// li r8,84
	ctx.r8.s64 = 84;
	// addi r10,r11,111
	ctx.r10.s64 = ctx.r11.s64 + 111;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_83292378:
	// stbu r8,1(r10)
	ea = 1 + ctx.r10.u32;
	PPC_STORE_U8(ea, ctx.r8.u8);
	ctx.r10.u32 = ea;
	// bdnz 0x83292378
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_83292378;
	// li r10,101
	ctx.r10.s64 = 101;
	// li r8,118
	ctx.r8.s64 = 118;
	// stb r10,120(r11)
	PPC_STORE_U8(ctx.r11.u32 + 120, ctx.r10.u8);
	// li r9,-121
	ctx.r9.s64 = -121;
	// stb r10,121(r11)
	PPC_STORE_U8(ctx.r11.u32 + 121, ctx.r10.u8);
	// stb r10,122(r11)
	PPC_STORE_U8(ctx.r11.u32 + 122, ctx.r10.u8);
	// stb r10,123(r11)
	PPC_STORE_U8(ctx.r11.u32 + 123, ctx.r10.u8);
	// stb r8,124(r11)
	PPC_STORE_U8(ctx.r11.u32 + 124, ctx.r8.u8);
	// addi r10,r11,120
	ctx.r10.s64 = ctx.r11.s64 + 120;
	// stb r8,125(r11)
	PPC_STORE_U8(ctx.r11.u32 + 125, ctx.r8.u8);
	// stb r9,126(r11)
	PPC_STORE_U8(ctx.r11.u32 + 126, ctx.r9.u8);
	// addi r10,r11,124
	ctx.r10.s64 = ctx.r11.s64 + 124;
	// stb r9,127(r11)
	PPC_STORE_U8(ctx.r11.u32 + 127, ctx.r9.u8);
	// addi r11,r11,126
	ctx.r11.s64 = ctx.r11.s64 + 126;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_832923BC"))) PPC_WEAK_FUNC(sub_832923BC);
PPC_FUNC_IMPL(__imp__sub_832923BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832923C0"))) PPC_WEAK_FUNC(sub_832923C0);
PPC_FUNC_IMPL(__imp__sub_832923C0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lis r11,-31826
	ctx.r11.s64 = -2085748736;
	// li r10,32
	ctx.r10.s64 = 32;
	// addi r11,r11,-30512
	ctx.r11.s64 = ctx.r11.s64 + -30512;
	// li r8,2
	ctx.r8.s64 = 2;
	// addi r9,r11,-1
	ctx.r9.s64 = ctx.r11.s64 + -1;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_832923D8:
	// stbu r8,1(r9)
	ea = 1 + ctx.r9.u32;
	PPC_STORE_U8(ea, ctx.r8.u8);
	ctx.r9.u32 = ea;
	// bdnz 0x832923d8
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_832923D8;
	// li r10,32
	ctx.r10.s64 = 32;
	// li r8,18
	ctx.r8.s64 = 18;
	// addi r9,r11,31
	ctx.r9.s64 = ctx.r11.s64 + 31;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_832923F0:
	// stbu r8,1(r9)
	ea = 1 + ctx.r9.u32;
	PPC_STORE_U8(ea, ctx.r8.u8);
	ctx.r9.u32 = ea;
	// bdnz 0x832923f0
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_832923F0;
	// li r10,32
	ctx.r10.s64 = 32;
	// li r8,34
	ctx.r8.s64 = 34;
	// addi r9,r11,63
	ctx.r9.s64 = ctx.r11.s64 + 63;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_83292408:
	// stbu r8,1(r9)
	ea = 1 + ctx.r9.u32;
	PPC_STORE_U8(ea, ctx.r8.u8);
	ctx.r9.u32 = ea;
	// bdnz 0x83292408
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_83292408;
	// li r9,16
	ctx.r9.s64 = 16;
	// li r8,51
	ctx.r8.s64 = 51;
	// addi r10,r11,95
	ctx.r10.s64 = ctx.r11.s64 + 95;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_83292420:
	// stbu r8,1(r10)
	ea = 1 + ctx.r10.u32;
	PPC_STORE_U8(ea, ctx.r8.u8);
	ctx.r10.u32 = ea;
	// bdnz 0x83292420
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_83292420;
	// li r9,8
	ctx.r9.s64 = 8;
	// li r8,68
	ctx.r8.s64 = 68;
	// addi r10,r11,111
	ctx.r10.s64 = ctx.r11.s64 + 111;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_83292438:
	// stbu r8,1(r10)
	ea = 1 + ctx.r10.u32;
	PPC_STORE_U8(ea, ctx.r8.u8);
	ctx.r10.u32 = ea;
	// bdnz 0x83292438
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_83292438;
	// li r10,85
	ctx.r10.s64 = 85;
	// li r7,102
	ctx.r7.s64 = 102;
	// stb r10,120(r11)
	PPC_STORE_U8(ctx.r11.u32 + 120, ctx.r10.u8);
	// li r9,119
	ctx.r9.s64 = 119;
	// stb r10,121(r11)
	PPC_STORE_U8(ctx.r11.u32 + 121, ctx.r10.u8);
	// li r8,-120
	ctx.r8.s64 = -120;
	// stb r10,122(r11)
	PPC_STORE_U8(ctx.r11.u32 + 122, ctx.r10.u8);
	// stb r10,123(r11)
	PPC_STORE_U8(ctx.r11.u32 + 123, ctx.r10.u8);
	// stb r7,124(r11)
	PPC_STORE_U8(ctx.r11.u32 + 124, ctx.r7.u8);
	// addi r10,r11,120
	ctx.r10.s64 = ctx.r11.s64 + 120;
	// stb r7,125(r11)
	PPC_STORE_U8(ctx.r11.u32 + 125, ctx.r7.u8);
	// addi r10,r11,124
	ctx.r10.s64 = ctx.r11.s64 + 124;
	// stb r9,126(r11)
	PPC_STORE_U8(ctx.r11.u32 + 126, ctx.r9.u8);
	// stb r8,127(r11)
	PPC_STORE_U8(ctx.r11.u32 + 127, ctx.r8.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8329247C"))) PPC_WEAK_FUNC(sub_8329247C);
PPC_FUNC_IMPL(__imp__sub_8329247C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83292480"))) PPC_WEAK_FUNC(sub_83292480);
PPC_FUNC_IMPL(__imp__sub_83292480) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lis r11,-31826
	ctx.r11.s64 = -2085748736;
	// li r10,256
	ctx.r10.s64 = 256;
	// addi r11,r11,-30384
	ctx.r11.s64 = ctx.r11.s64 + -30384;
	// li r8,18
	ctx.r8.s64 = 18;
	// addi r9,r11,-1
	ctx.r9.s64 = ctx.r11.s64 + -1;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_83292498:
	// stbu r8,1(r9)
	ea = 1 + ctx.r9.u32;
	PPC_STORE_U8(ea, ctx.r8.u8);
	ctx.r9.u32 = ea;
	// bdnz 0x83292498
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_83292498;
	// li r10,256
	ctx.r10.s64 = 256;
	// li r8,34
	ctx.r8.s64 = 34;
	// addi r9,r11,255
	ctx.r9.s64 = ctx.r11.s64 + 255;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_832924B0:
	// stbu r8,1(r9)
	ea = 1 + ctx.r9.u32;
	PPC_STORE_U8(ea, ctx.r8.u8);
	ctx.r9.u32 = ea;
	// bdnz 0x832924b0
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_832924B0;
	// li r10,128
	ctx.r10.s64 = 128;
	// li r8,3
	ctx.r8.s64 = 3;
	// addi r9,r11,511
	ctx.r9.s64 = ctx.r11.s64 + 511;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_832924C8:
	// stbu r8,1(r9)
	ea = 1 + ctx.r9.u32;
	PPC_STORE_U8(ea, ctx.r8.u8);
	ctx.r9.u32 = ea;
	// bdnz 0x832924c8
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_832924C8;
	// li r10,128
	ctx.r10.s64 = 128;
	// li r8,51
	ctx.r8.s64 = 51;
	// addi r9,r11,639
	ctx.r9.s64 = ctx.r11.s64 + 639;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_832924E0:
	// stbu r8,1(r9)
	ea = 1 + ctx.r9.u32;
	PPC_STORE_U8(ea, ctx.r8.u8);
	ctx.r9.u32 = ea;
	// bdnz 0x832924e0
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_832924E0;
	// li r10,128
	ctx.r10.s64 = 128;
	// li r8,67
	ctx.r8.s64 = 67;
	// addi r9,r11,767
	ctx.r9.s64 = ctx.r11.s64 + 767;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_832924F8:
	// stbu r8,1(r9)
	ea = 1 + ctx.r9.u32;
	PPC_STORE_U8(ea, ctx.r8.u8);
	ctx.r9.u32 = ea;
	// bdnz 0x832924f8
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_832924F8;
	// li r9,64
	ctx.r9.s64 = 64;
	// li r8,84
	ctx.r8.s64 = 84;
	// addi r10,r11,895
	ctx.r10.s64 = ctx.r11.s64 + 895;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_83292510:
	// stbu r8,1(r10)
	ea = 1 + ctx.r10.u32;
	PPC_STORE_U8(ea, ctx.r8.u8);
	ctx.r10.u32 = ea;
	// bdnz 0x83292510
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_83292510;
	// li r9,32
	ctx.r9.s64 = 32;
	// li r8,101
	ctx.r8.s64 = 101;
	// addi r10,r11,959
	ctx.r10.s64 = ctx.r11.s64 + 959;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_83292528:
	// stbu r8,1(r10)
	ea = 1 + ctx.r10.u32;
	PPC_STORE_U8(ea, ctx.r8.u8);
	ctx.r10.u32 = ea;
	// bdnz 0x83292528
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_83292528;
	// li r9,16
	ctx.r9.s64 = 16;
	// li r8,118
	ctx.r8.s64 = 118;
	// addi r10,r11,991
	ctx.r10.s64 = ctx.r11.s64 + 991;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_83292540:
	// stbu r8,1(r10)
	ea = 1 + ctx.r10.u32;
	PPC_STORE_U8(ea, ctx.r8.u8);
	ctx.r10.u32 = ea;
	// bdnz 0x83292540
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_83292540;
	// li r9,8
	ctx.r9.s64 = 8;
	// li r8,-121
	ctx.r8.s64 = -121;
	// addi r10,r11,1007
	ctx.r10.s64 = ctx.r11.s64 + 1007;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_83292558:
	// stbu r8,1(r10)
	ea = 1 + ctx.r10.u32;
	PPC_STORE_U8(ea, ctx.r8.u8);
	ctx.r10.u32 = ea;
	// bdnz 0x83292558
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_83292558;
	// li r10,-104
	ctx.r10.s64 = -104;
	// li r8,-87
	ctx.r8.s64 = -87;
	// stb r10,1016(r11)
	PPC_STORE_U8(ctx.r11.u32 + 1016, ctx.r10.u8);
	// li r9,-71
	ctx.r9.s64 = -71;
	// stb r10,1017(r11)
	PPC_STORE_U8(ctx.r11.u32 + 1017, ctx.r10.u8);
	// stb r10,1018(r11)
	PPC_STORE_U8(ctx.r11.u32 + 1018, ctx.r10.u8);
	// stb r10,1019(r11)
	PPC_STORE_U8(ctx.r11.u32 + 1019, ctx.r10.u8);
	// stb r8,1020(r11)
	PPC_STORE_U8(ctx.r11.u32 + 1020, ctx.r8.u8);
	// addi r10,r11,1016
	ctx.r10.s64 = ctx.r11.s64 + 1016;
	// stb r8,1021(r11)
	PPC_STORE_U8(ctx.r11.u32 + 1021, ctx.r8.u8);
	// stb r9,1022(r11)
	PPC_STORE_U8(ctx.r11.u32 + 1022, ctx.r9.u8);
	// addi r10,r11,1020
	ctx.r10.s64 = ctx.r11.s64 + 1020;
	// stb r9,1023(r11)
	PPC_STORE_U8(ctx.r11.u32 + 1023, ctx.r9.u8);
	// addi r11,r11,1022
	ctx.r11.s64 = ctx.r11.s64 + 1022;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8329259C"))) PPC_WEAK_FUNC(sub_8329259C);
PPC_FUNC_IMPL(__imp__sub_8329259C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832925A0"))) PPC_WEAK_FUNC(sub_832925A0);
PPC_FUNC_IMPL(__imp__sub_832925A0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lis r11,-31827
	ctx.r11.s64 = -2085814272;
	// li r10,256
	ctx.r10.s64 = 256;
	// addi r11,r11,31312
	ctx.r11.s64 = ctx.r11.s64 + 31312;
	// li r8,2
	ctx.r8.s64 = 2;
	// addi r9,r11,-1
	ctx.r9.s64 = ctx.r11.s64 + -1;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_832925B8:
	// stbu r8,1(r9)
	ea = 1 + ctx.r9.u32;
	PPC_STORE_U8(ea, ctx.r8.u8);
	ctx.r9.u32 = ea;
	// bdnz 0x832925b8
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_832925B8;
	// li r10,256
	ctx.r10.s64 = 256;
	// li r8,18
	ctx.r8.s64 = 18;
	// addi r9,r11,255
	ctx.r9.s64 = ctx.r11.s64 + 255;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_832925D0:
	// stbu r8,1(r9)
	ea = 1 + ctx.r9.u32;
	PPC_STORE_U8(ea, ctx.r8.u8);
	ctx.r9.u32 = ea;
	// bdnz 0x832925d0
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_832925D0;
	// li r10,256
	ctx.r10.s64 = 256;
	// li r8,34
	ctx.r8.s64 = 34;
	// addi r9,r11,511
	ctx.r9.s64 = ctx.r11.s64 + 511;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_832925E8:
	// stbu r8,1(r9)
	ea = 1 + ctx.r9.u32;
	PPC_STORE_U8(ea, ctx.r8.u8);
	ctx.r9.u32 = ea;
	// bdnz 0x832925e8
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_832925E8;
	// li r9,128
	ctx.r9.s64 = 128;
	// li r8,51
	ctx.r8.s64 = 51;
	// addi r10,r11,767
	ctx.r10.s64 = ctx.r11.s64 + 767;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_83292600:
	// stbu r8,1(r10)
	ea = 1 + ctx.r10.u32;
	PPC_STORE_U8(ea, ctx.r8.u8);
	ctx.r10.u32 = ea;
	// bdnz 0x83292600
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_83292600;
	// li r9,64
	ctx.r9.s64 = 64;
	// li r8,68
	ctx.r8.s64 = 68;
	// addi r10,r11,895
	ctx.r10.s64 = ctx.r11.s64 + 895;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_83292618:
	// stbu r8,1(r10)
	ea = 1 + ctx.r10.u32;
	PPC_STORE_U8(ea, ctx.r8.u8);
	ctx.r10.u32 = ea;
	// bdnz 0x83292618
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_83292618;
	// li r9,32
	ctx.r9.s64 = 32;
	// li r8,85
	ctx.r8.s64 = 85;
	// addi r10,r11,959
	ctx.r10.s64 = ctx.r11.s64 + 959;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_83292630:
	// stbu r8,1(r10)
	ea = 1 + ctx.r10.u32;
	PPC_STORE_U8(ea, ctx.r8.u8);
	ctx.r10.u32 = ea;
	// bdnz 0x83292630
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_83292630;
	// li r9,16
	ctx.r9.s64 = 16;
	// li r8,102
	ctx.r8.s64 = 102;
	// addi r10,r11,991
	ctx.r10.s64 = ctx.r11.s64 + 991;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_83292648:
	// stbu r8,1(r10)
	ea = 1 + ctx.r10.u32;
	PPC_STORE_U8(ea, ctx.r8.u8);
	ctx.r10.u32 = ea;
	// bdnz 0x83292648
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_83292648;
	// li r9,8
	ctx.r9.s64 = 8;
	// li r8,119
	ctx.r8.s64 = 119;
	// addi r10,r11,1007
	ctx.r10.s64 = ctx.r11.s64 + 1007;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_83292660:
	// stbu r8,1(r10)
	ea = 1 + ctx.r10.u32;
	PPC_STORE_U8(ea, ctx.r8.u8);
	ctx.r10.u32 = ea;
	// bdnz 0x83292660
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_83292660;
	// li r10,-120
	ctx.r10.s64 = -120;
	// li r7,-103
	ctx.r7.s64 = -103;
	// stb r10,1016(r11)
	PPC_STORE_U8(ctx.r11.u32 + 1016, ctx.r10.u8);
	// li r9,-86
	ctx.r9.s64 = -86;
	// stb r10,1017(r11)
	PPC_STORE_U8(ctx.r11.u32 + 1017, ctx.r10.u8);
	// li r8,-70
	ctx.r8.s64 = -70;
	// stb r10,1018(r11)
	PPC_STORE_U8(ctx.r11.u32 + 1018, ctx.r10.u8);
	// stb r10,1019(r11)
	PPC_STORE_U8(ctx.r11.u32 + 1019, ctx.r10.u8);
	// stb r7,1020(r11)
	PPC_STORE_U8(ctx.r11.u32 + 1020, ctx.r7.u8);
	// addi r10,r11,1016
	ctx.r10.s64 = ctx.r11.s64 + 1016;
	// stb r7,1021(r11)
	PPC_STORE_U8(ctx.r11.u32 + 1021, ctx.r7.u8);
	// addi r10,r11,1020
	ctx.r10.s64 = ctx.r11.s64 + 1020;
	// stb r9,1022(r11)
	PPC_STORE_U8(ctx.r11.u32 + 1022, ctx.r9.u8);
	// stb r8,1023(r11)
	PPC_STORE_U8(ctx.r11.u32 + 1023, ctx.r8.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_832926A4"))) PPC_WEAK_FUNC(sub_832926A4);
PPC_FUNC_IMPL(__imp__sub_832926A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832926A8"))) PPC_WEAK_FUNC(sub_832926A8);
PPC_FUNC_IMPL(__imp__sub_832926A8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x833a01a4
	ctx.lr = 0x832926B0;
	__savegprlr_27(ctx, base);
	// lis r11,-31826
	ctx.r11.s64 = -2085748736;
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r11,r11,-32176
	ctx.r11.s64 = ctx.r11.s64 + -32176;
	// lis r10,6
	ctx.r10.s64 = 393216;
	// lis r5,8
	ctx.r5.s64 = 524288;
	// ori r10,r10,16448
	ctx.r10.u64 = ctx.r10.u64 | 16448;
	// ori r5,r5,514
	ctx.r5.u64 = ctx.r5.u64 | 514;
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// lis r4,8
	ctx.r4.s64 = 524288;
	// stw r9,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r9.u32);
	// lis r3,8
	ctx.r3.s64 = 524288;
	// stw r9,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r9.u32);
	// ori r4,r4,265
	ctx.r4.u64 = ctx.r4.u64 | 265;
	// stw r9,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r9.u32);
	// stw r10,16(r11)
	PPC_STORE_U32(ctx.r11.u32 + 16, ctx.r10.u32);
	// ori r3,r3,1024
	ctx.r3.u64 = ctx.r3.u64 | 1024;
	// stw r10,20(r11)
	PPC_STORE_U32(ctx.r11.u32 + 20, ctx.r10.u32);
	// lis r31,8
	ctx.r31.s64 = 524288;
	// stw r10,24(r11)
	PPC_STORE_U32(ctx.r11.u32 + 24, ctx.r10.u32);
	// lis r9,7
	ctx.r9.s64 = 458752;
	// stw r10,28(r11)
	PPC_STORE_U32(ctx.r11.u32 + 28, ctx.r10.u32);
	// stw r5,32(r11)
	PPC_STORE_U32(ctx.r11.u32 + 32, ctx.r5.u32);
	// ori r31,r31,264
	ctx.r31.u64 = ctx.r31.u64 | 264;
	// stw r5,36(r11)
	PPC_STORE_U32(ctx.r11.u32 + 36, ctx.r5.u32);
	// stw r4,40(r11)
	PPC_STORE_U32(ctx.r11.u32 + 40, ctx.r4.u32);
	// ori r9,r9,263
	ctx.r9.u64 = ctx.r9.u64 | 263;
	// stw r4,44(r11)
	PPC_STORE_U32(ctx.r11.u32 + 44, ctx.r4.u32);
	// stw r3,48(r11)
	PPC_STORE_U32(ctx.r11.u32 + 48, ctx.r3.u32);
	// mr r8,r11
	ctx.r8.u64 = ctx.r11.u64;
	// stw r3,52(r11)
	PPC_STORE_U32(ctx.r11.u32 + 52, ctx.r3.u32);
	// stw r31,56(r11)
	PPC_STORE_U32(ctx.r11.u32 + 56, ctx.r31.u32);
	// lis r8,7
	ctx.r8.s64 = 458752;
	// stw r31,60(r11)
	PPC_STORE_U32(ctx.r11.u32 + 60, ctx.r31.u32);
	// stw r9,64(r11)
	PPC_STORE_U32(ctx.r11.u32 + 64, ctx.r9.u32);
	// ori r8,r8,262
	ctx.r8.u64 = ctx.r8.u64 | 262;
	// stw r9,68(r11)
	PPC_STORE_U32(ctx.r11.u32 + 68, ctx.r9.u32);
	// addi r10,r11,16
	ctx.r10.s64 = ctx.r11.s64 + 16;
	// stw r9,72(r11)
	PPC_STORE_U32(ctx.r11.u32 + 72, ctx.r9.u32);
	// addi r10,r11,32
	ctx.r10.s64 = ctx.r11.s64 + 32;
	// stw r9,76(r11)
	PPC_STORE_U32(ctx.r11.u32 + 76, ctx.r9.u32);
	// lis r7,7
	ctx.r7.s64 = 458752;
	// stw r8,80(r11)
	PPC_STORE_U32(ctx.r11.u32 + 80, ctx.r8.u32);
	// addi r10,r11,40
	ctx.r10.s64 = ctx.r11.s64 + 40;
	// stw r8,84(r11)
	PPC_STORE_U32(ctx.r11.u32 + 84, ctx.r8.u32);
	// addi r10,r11,48
	ctx.r10.s64 = ctx.r11.s64 + 48;
	// stw r8,88(r11)
	PPC_STORE_U32(ctx.r11.u32 + 88, ctx.r8.u32);
	// ori r7,r7,513
	ctx.r7.u64 = ctx.r7.u64 | 513;
	// stw r8,92(r11)
	PPC_STORE_U32(ctx.r11.u32 + 92, ctx.r8.u32);
	// addi r10,r11,56
	ctx.r10.s64 = ctx.r11.s64 + 56;
	// addi r10,r11,64
	ctx.r10.s64 = ctx.r11.s64 + 64;
	// stw r7,96(r11)
	PPC_STORE_U32(ctx.r11.u32 + 96, ctx.r7.u32);
	// addi r10,r11,80
	ctx.r10.s64 = ctx.r11.s64 + 80;
	// stw r7,100(r11)
	PPC_STORE_U32(ctx.r11.u32 + 100, ctx.r7.u32);
	// lis r6,7
	ctx.r6.s64 = 458752;
	// stw r7,104(r11)
	PPC_STORE_U32(ctx.r11.u32 + 104, ctx.r7.u32);
	// lis r29,9
	ctx.r29.s64 = 589824;
	// lis r5,9
	ctx.r5.s64 = 589824;
	// lis r28,9
	ctx.r28.s64 = 589824;
	// lis r4,9
	ctx.r4.s64 = 589824;
	// lis r27,9
	ctx.r27.s64 = 589824;
	// lis r9,9
	ctx.r9.s64 = 589824;
	// addi r10,r11,96
	ctx.r10.s64 = ctx.r11.s64 + 96;
	// addi r10,r11,112
	ctx.r10.s64 = ctx.r11.s64 + 112;
	// ori r6,r6,261
	ctx.r6.u64 = ctx.r6.u64 | 261;
	// li r30,8
	ctx.r30.s64 = 8;
	// ori r29,r29,269
	ctx.r29.u64 = ctx.r29.u64 | 269;
	// ori r5,r5,1536
	ctx.r5.u64 = ctx.r5.u64 | 1536;
	// ori r28,r28,268
	ctx.r28.u64 = ctx.r28.u64 | 268;
	// ori r4,r4,267
	ctx.r4.u64 = ctx.r4.u64 | 267;
	// ori r27,r27,515
	ctx.r27.u64 = ctx.r27.u64 | 515;
	// lis r10,9
	ctx.r10.s64 = 589824;
	// ori r9,r9,1280
	ctx.r9.u64 = ctx.r9.u64 | 1280;
	// lis r8,9
	ctx.r8.s64 = 589824;
	// stw r7,108(r11)
	PPC_STORE_U32(ctx.r11.u32 + 108, ctx.r7.u32);
	// stw r6,112(r11)
	PPC_STORE_U32(ctx.r11.u32 + 112, ctx.r6.u32);
	// ori r10,r10,769
	ctx.r10.u64 = ctx.r10.u64 | 769;
	// stw r6,116(r11)
	PPC_STORE_U32(ctx.r11.u32 + 116, ctx.r6.u32);
	// ori r8,r8,266
	ctx.r8.u64 = ctx.r8.u64 | 266;
	// stw r6,120(r11)
	PPC_STORE_U32(ctx.r11.u32 + 120, ctx.r6.u32);
	// mtctr r30
	ctx.ctr.u64 = ctx.r30.u64;
	// stw r6,124(r11)
	PPC_STORE_U32(ctx.r11.u32 + 124, ctx.r6.u32);
	// stw r9,152(r11)
	PPC_STORE_U32(ctx.r11.u32 + 152, ctx.r9.u32);
	// lis r9,6
	ctx.r9.s64 = 393216;
	// stw r10,148(r11)
	PPC_STORE_U32(ctx.r11.u32 + 148, ctx.r10.u32);
	// addi r10,r11,156
	ctx.r10.s64 = ctx.r11.s64 + 156;
	// stw r29,128(r11)
	PPC_STORE_U32(ctx.r11.u32 + 128, ctx.r29.u32);
	// ori r9,r9,768
	ctx.r9.u64 = ctx.r9.u64 | 768;
	// stw r5,132(r11)
	PPC_STORE_U32(ctx.r11.u32 + 132, ctx.r5.u32);
	// stw r28,136(r11)
	PPC_STORE_U32(ctx.r11.u32 + 136, ctx.r28.u32);
	// stw r4,140(r11)
	PPC_STORE_U32(ctx.r11.u32 + 140, ctx.r4.u32);
	// stw r27,144(r11)
	PPC_STORE_U32(ctx.r11.u32 + 144, ctx.r27.u32);
	// stw r8,156(r11)
	PPC_STORE_U32(ctx.r11.u32 + 156, ctx.r8.u32);
loc_83292820:
	// stwu r9,4(r10)
	ea = 4 + ctx.r10.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r10.u32 = ea;
	// bdnz 0x83292820
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_83292820;
	// li r10,8
	ctx.r10.s64 = 8;
	// lis r8,6
	ctx.r8.s64 = 393216;
	// addi r9,r11,188
	ctx.r9.s64 = ctx.r11.s64 + 188;
	// ori r8,r8,260
	ctx.r8.u64 = ctx.r8.u64 | 260;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_8329283C:
	// stwu r8,4(r9)
	ea = 4 + ctx.r9.u32;
	PPC_STORE_U32(ea, ctx.r8.u32);
	ctx.r9.u32 = ea;
	// bdnz 0x8329283c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8329283C;
	// li r10,8
	ctx.r10.s64 = 8;
	// lis r8,6
	ctx.r8.s64 = 393216;
	// addi r9,r11,220
	ctx.r9.s64 = ctx.r11.s64 + 220;
	// ori r8,r8,259
	ctx.r8.u64 = ctx.r8.u64 | 259;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_83292858:
	// stwu r8,4(r9)
	ea = 4 + ctx.r9.u32;
	PPC_STORE_U32(ea, ctx.r8.u32);
	ctx.r9.u32 = ea;
	// bdnz 0x83292858
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_83292858;
	// li r10,16
	ctx.r10.s64 = 16;
	// lis r8,5
	ctx.r8.s64 = 327680;
	// addi r9,r11,252
	ctx.r9.s64 = ctx.r11.s64 + 252;
	// ori r8,r8,512
	ctx.r8.u64 = ctx.r8.u64 | 512;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_83292874:
	// stwu r8,4(r9)
	ea = 4 + ctx.r9.u32;
	PPC_STORE_U32(ea, ctx.r8.u32);
	ctx.r9.u32 = ea;
	// bdnz 0x83292874
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_83292874;
	// li r10,16
	ctx.r10.s64 = 16;
	// lis r8,5
	ctx.r8.s64 = 327680;
	// addi r9,r11,316
	ctx.r9.s64 = ctx.r11.s64 + 316;
	// ori r8,r8,258
	ctx.r8.u64 = ctx.r8.u64 | 258;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_83292890:
	// stwu r8,4(r9)
	ea = 4 + ctx.r9.u32;
	PPC_STORE_U32(ea, ctx.r8.u32);
	ctx.r9.u32 = ea;
	// bdnz 0x83292890
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_83292890;
	// li r10,32
	ctx.r10.s64 = 32;
	// lis r9,4
	ctx.r9.s64 = 262144;
	// addi r11,r11,380
	ctx.r11.s64 = ctx.r11.s64 + 380;
	// ori r9,r9,257
	ctx.r9.u64 = ctx.r9.u64 | 257;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_832928AC:
	// stwu r9,4(r11)
	ea = 4 + ctx.r11.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x832928ac
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_832928AC;
	// b 0x833a01f4
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832928B8"))) PPC_WEAK_FUNC(sub_832928B8);
PPC_FUNC_IMPL(__imp__sub_832928B8) {
	PPC_FUNC_PROLOGUE();
	// b 0x832926a8
	sub_832926A8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832928BC"))) PPC_WEAK_FUNC(sub_832928BC);
PPC_FUNC_IMPL(__imp__sub_832928BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832928C0"))) PPC_WEAK_FUNC(sub_832928C0);
PPC_FUNC_IMPL(__imp__sub_832928C0) {
	PPC_FUNC_PROLOGUE();
	// std r31,-8(r1)
	PPC_STORE_U64(ctx.r1.u32 + -8, ctx.r31.u64);
	// lis r11,-31827
	ctx.r11.s64 = -2085814272;
	// lis r10,-31822
	ctx.r10.s64 = -2085486592;
	// addi r11,r11,31312
	ctx.r11.s64 = ctx.r11.s64 + 31312;
	// lis r7,-31822
	ctx.r7.s64 = -2085486592;
	// addi r9,r11,4864
	ctx.r9.s64 = ctx.r11.s64 + 4864;
	// addi r8,r11,3264
	ctx.r8.s64 = ctx.r11.s64 + 3264;
	// stw r9,-944(r10)
	PPC_STORE_U32(ctx.r10.u32 + -944, ctx.r9.u32);
	// lis r6,-31822
	ctx.r6.s64 = -2085486592;
	// lis r10,-31822
	ctx.r10.s64 = -2085486592;
	// lis r5,-31822
	ctx.r5.s64 = -2085486592;
	// stw r8,-976(r7)
	PPC_STORE_U32(ctx.r7.u32 + -976, ctx.r8.u32);
	// addi r9,r11,3200
	ctx.r9.s64 = ctx.r11.s64 + 3200;
	// addi r7,r11,5376
	ctx.r7.s64 = ctx.r11.s64 + 5376;
	// addi r8,r11,2560
	ctx.r8.s64 = ctx.r11.s64 + 2560;
	// stw r9,-972(r6)
	PPC_STORE_U32(ctx.r6.u32 + -972, ctx.r9.u32);
	// lis r4,-31822
	ctx.r4.s64 = -2085486592;
	// stw r7,-968(r10)
	PPC_STORE_U32(ctx.r10.u32 + -968, ctx.r7.u32);
	// stw r8,-984(r5)
	PPC_STORE_U32(ctx.r5.u32 + -984, ctx.r8.u32);
	// addi r9,r11,3456
	ctx.r9.s64 = ctx.r11.s64 + 3456;
	// lis r10,-31822
	ctx.r10.s64 = -2085486592;
	// lis r6,-31822
	ctx.r6.s64 = -2085486592;
	// lis r5,-31822
	ctx.r5.s64 = -2085486592;
	// stw r9,-992(r4)
	PPC_STORE_U32(ctx.r4.u32 + -992, ctx.r9.u32);
	// addi r7,r11,3648
	ctx.r7.s64 = ctx.r11.s64 + 3648;
	// addi r8,r11,2816
	ctx.r8.s64 = ctx.r11.s64 + 2816;
	// addi r9,r11,3392
	ctx.r9.s64 = ctx.r11.s64 + 3392;
	// stw r7,-988(r10)
	PPC_STORE_U32(ctx.r10.u32 + -988, ctx.r7.u32);
	// stw r8,-964(r6)
	PPC_STORE_U32(ctx.r6.u32 + -964, ctx.r8.u32);
	// lis r10,-31822
	ctx.r10.s64 = -2085486592;
	// stw r9,-996(r5)
	PPC_STORE_U32(ctx.r5.u32 + -996, ctx.r9.u32);
	// lis r6,-31822
	ctx.r6.s64 = -2085486592;
	// lis r5,-31822
	ctx.r5.s64 = -2085486592;
	// addi r7,r11,2944
	ctx.r7.s64 = ctx.r11.s64 + 2944;
	// addi r8,r11,1024
	ctx.r8.s64 = ctx.r11.s64 + 1024;
	// addi r9,r11,3712
	ctx.r9.s64 = ctx.r11.s64 + 3712;
	// stw r7,-940(r10)
	PPC_STORE_U32(ctx.r10.u32 + -940, ctx.r7.u32);
	// lis r4,-32219
	ctx.r4.s64 = -2111504384;
	// stw r8,-952(r6)
	PPC_STORE_U32(ctx.r6.u32 + -952, ctx.r8.u32);
	// stw r9,-948(r5)
	PPC_STORE_U32(ctx.r5.u32 + -948, ctx.r9.u32);
	// lis r6,-31822
	ctx.r6.s64 = -2085486592;
	// addi r10,r4,22996
	ctx.r10.s64 = ctx.r4.s64 + 22996;
	// lis r5,-31822
	ctx.r5.s64 = -2085486592;
	// lis r4,-31822
	ctx.r4.s64 = -2085486592;
	// lis r3,-31822
	ctx.r3.s64 = -2085486592;
	// lis r31,-31822
	ctx.r31.s64 = -2085486592;
	// addi r7,r11,3520
	ctx.r7.s64 = ctx.r11.s64 + 3520;
	// addi r8,r11,3840
	ctx.r8.s64 = ctx.r11.s64 + 3840;
	// addi r9,r10,32
	ctx.r9.s64 = ctx.r10.s64 + 32;
	// stw r7,-980(r6)
	PPC_STORE_U32(ctx.r6.u32 + -980, ctx.r7.u32);
	// stw r8,-932(r5)
	PPC_STORE_U32(ctx.r5.u32 + -932, ctx.r8.u32);
	// lis r6,-31822
	ctx.r6.s64 = -2085486592;
	// stw r9,-1000(r4)
	PPC_STORE_U32(ctx.r4.u32 + -1000, ctx.r9.u32);
	// lis r5,-31822
	ctx.r5.s64 = -2085486592;
	// stw r11,-956(r3)
	PPC_STORE_U32(ctx.r3.u32 + -956, ctx.r11.u32);
	// lis r4,-31822
	ctx.r4.s64 = -2085486592;
	// stw r10,-928(r31)
	PPC_STORE_U32(ctx.r31.u32 + -928, ctx.r10.u32);
	// lis r3,-31822
	ctx.r3.s64 = -2085486592;
	// lis r31,-31822
	ctx.r31.s64 = -2085486592;
	// addi r8,r10,64
	ctx.r8.s64 = ctx.r10.s64 + 64;
	// addi r7,r10,96
	ctx.r7.s64 = ctx.r10.s64 + 96;
	// addi r9,r10,128
	ctx.r9.s64 = ctx.r10.s64 + 128;
	// stw r8,-1004(r6)
	PPC_STORE_U32(ctx.r6.u32 + -1004, ctx.r8.u32);
	// addi r10,r10,160
	ctx.r10.s64 = ctx.r10.s64 + 160;
	// stw r7,-924(r5)
	PPC_STORE_U32(ctx.r5.u32 + -924, ctx.r7.u32);
	// addi r11,r11,2048
	ctx.r11.s64 = ctx.r11.s64 + 2048;
	// stw r9,-960(r4)
	PPC_STORE_U32(ctx.r4.u32 + -960, ctx.r9.u32);
	// stw r10,-936(r3)
	PPC_STORE_U32(ctx.r3.u32 + -936, ctx.r10.u32);
	// stw r11,-920(r31)
	PPC_STORE_U32(ctx.r31.u32 + -920, ctx.r11.u32);
	// ld r31,-8(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_832929DC"))) PPC_WEAK_FUNC(sub_832929DC);
PPC_FUNC_IMPL(__imp__sub_832929DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832929E0"))) PPC_WEAK_FUNC(sub_832929E0);
PPC_FUNC_IMPL(__imp__sub_832929E0) {
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
	// lis r11,-31822
	ctx.r11.s64 = -2085486592;
	// addi r31,r3,-512
	ctx.r31.s64 = ctx.r3.s64 + -512;
	// lis r10,-31826
	ctx.r10.s64 = -2085748736;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r10,-32176
	ctx.r4.s64 = ctx.r10.s64 + -32176;
	// stw r31,-920(r11)
	PPC_STORE_U32(ctx.r11.u32 + -920, ctx.r31.u32);
	// li r5,128
	ctx.r5.s64 = 128;
	// bl 0x83292d68
	ctx.lr = 0x83292A14;
	sub_83292D68(ctx, base);
	// lis r11,-31822
	ctx.r11.s64 = -2085486592;
	// addi r30,r31,-16
	ctx.r30.s64 = ctx.r31.s64 + -16;
	// lis r10,-32219
	ctx.r10.s64 = -2111504384;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r31,r10,22996
	ctx.r31.s64 = ctx.r10.s64 + 22996;
	// stw r30,-936(r11)
	PPC_STORE_U32(ctx.r11.u32 + -936, ctx.r30.u32);
	// li r5,4
	ctx.r5.s64 = 4;
	// addi r4,r31,160
	ctx.r4.s64 = ctx.r31.s64 + 160;
	// bl 0x83292d68
	ctx.lr = 0x83292A38;
	sub_83292D68(ctx, base);
	// lis r11,-31822
	ctx.r11.s64 = -2085486592;
	// addi r30,r30,-32
	ctx.r30.s64 = ctx.r30.s64 + -32;
	// addi r4,r31,128
	ctx.r4.s64 = ctx.r31.s64 + 128;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// li r5,8
	ctx.r5.s64 = 8;
	// stw r30,-960(r11)
	PPC_STORE_U32(ctx.r11.u32 + -960, ctx.r30.u32);
	// bl 0x83292d68
	ctx.lr = 0x83292A54;
	sub_83292D68(ctx, base);
	// lis r11,-31822
	ctx.r11.s64 = -2085486592;
	// addi r30,r30,-32
	ctx.r30.s64 = ctx.r30.s64 + -32;
	// addi r4,r31,96
	ctx.r4.s64 = ctx.r31.s64 + 96;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// li r5,8
	ctx.r5.s64 = 8;
	// stw r30,-924(r11)
	PPC_STORE_U32(ctx.r11.u32 + -924, ctx.r30.u32);
	// bl 0x83292d68
	ctx.lr = 0x83292A70;
	sub_83292D68(ctx, base);
	// lis r11,-31822
	ctx.r11.s64 = -2085486592;
	// addi r30,r30,-32
	ctx.r30.s64 = ctx.r30.s64 + -32;
	// addi r4,r31,64
	ctx.r4.s64 = ctx.r31.s64 + 64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// li r5,8
	ctx.r5.s64 = 8;
	// stw r30,-1004(r11)
	PPC_STORE_U32(ctx.r11.u32 + -1004, ctx.r30.u32);
	// bl 0x83292d68
	ctx.lr = 0x83292A8C;
	sub_83292D68(ctx, base);
	// lis r11,-31822
	ctx.r11.s64 = -2085486592;
	// addi r30,r30,-32
	ctx.r30.s64 = ctx.r30.s64 + -32;
	// addi r4,r31,32
	ctx.r4.s64 = ctx.r31.s64 + 32;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// li r5,8
	ctx.r5.s64 = 8;
	// stw r30,-1000(r11)
	PPC_STORE_U32(ctx.r11.u32 + -1000, ctx.r30.u32);
	// bl 0x83292d68
	ctx.lr = 0x83292AA8;
	sub_83292D68(ctx, base);
	// lis r11,-31822
	ctx.r11.s64 = -2085486592;
	// addi r30,r30,-32
	ctx.r30.s64 = ctx.r30.s64 + -32;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// li r5,8
	ctx.r5.s64 = 8;
	// stw r30,-928(r11)
	PPC_STORE_U32(ctx.r11.u32 + -928, ctx.r30.u32);
	// bl 0x83292d68
	ctx.lr = 0x83292AC4;
	sub_83292D68(ctx, base);
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

__attribute__((alias("__imp__sub_83292AE0"))) PPC_WEAK_FUNC(sub_83292AE0);
PPC_FUNC_IMPL(__imp__sub_83292AE0) {
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
	// lis r11,-31822
	ctx.r11.s64 = -2085486592;
	// addi r31,r3,-128
	ctx.r31.s64 = ctx.r3.s64 + -128;
	// lis r10,-31826
	ctx.r10.s64 = -2085748736;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r30,r10,-30512
	ctx.r30.s64 = ctx.r10.s64 + -30512;
	// stw r31,-980(r11)
	PPC_STORE_U32(ctx.r11.u32 + -980, ctx.r31.u32);
	// li r5,32
	ctx.r5.s64 = 32;
	// addi r4,r30,-192
	ctx.r4.s64 = ctx.r30.s64 + -192;
	// bl 0x83292d68
	ctx.lr = 0x83292B18;
	sub_83292D68(ctx, base);
	// lis r11,-31822
	ctx.r11.s64 = -2085486592;
	// addi r31,r31,-128
	ctx.r31.s64 = ctx.r31.s64 + -128;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r5,32
	ctx.r5.s64 = 32;
	// stw r31,-948(r11)
	PPC_STORE_U32(ctx.r11.u32 + -948, ctx.r31.u32);
	// bl 0x83292d68
	ctx.lr = 0x83292B34;
	sub_83292D68(ctx, base);
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

__attribute__((alias("__imp__sub_83292B50"))) PPC_WEAK_FUNC(sub_83292B50);
PPC_FUNC_IMPL(__imp__sub_83292B50) {
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
	// lis r11,-31822
	ctx.r11.s64 = -2085486592;
	// addi r31,r3,-256
	ctx.r31.s64 = ctx.r3.s64 + -256;
	// lis r10,-31826
	ctx.r10.s64 = -2085748736;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r30,r10,-30832
	ctx.r30.s64 = ctx.r10.s64 + -30832;
	// stw r31,-940(r11)
	PPC_STORE_U32(ctx.r11.u32 + -940, ctx.r31.u32);
	// li r5,64
	ctx.r5.s64 = 64;
	// addi r4,r30,-448
	ctx.r4.s64 = ctx.r30.s64 + -448;
	// bl 0x83292d68
	ctx.lr = 0x83292B88;
	sub_83292D68(ctx, base);
	// lis r11,-31822
	ctx.r11.s64 = -2085486592;
	// addi r31,r31,-64
	ctx.r31.s64 = ctx.r31.s64 + -64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r5,16
	ctx.r5.s64 = 16;
	// stw r31,-996(r11)
	PPC_STORE_U32(ctx.r11.u32 + -996, ctx.r31.u32);
	// bl 0x83292d68
	ctx.lr = 0x83292BA4;
	sub_83292D68(ctx, base);
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

__attribute__((alias("__imp__sub_83292BC0"))) PPC_WEAK_FUNC(sub_83292BC0);
PPC_FUNC_IMPL(__imp__sub_83292BC0) {
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
	// lis r11,-31822
	ctx.r11.s64 = -2085486592;
	// addi r31,r3,-64
	ctx.r31.s64 = ctx.r3.s64 + -64;
	// lis r10,-31826
	ctx.r10.s64 = -2085748736;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r30,r10,-31408
	ctx.r30.s64 = ctx.r10.s64 + -31408;
	// stw r31,-992(r11)
	PPC_STORE_U32(ctx.r11.u32 + -992, ctx.r31.u32);
	// li r5,16
	ctx.r5.s64 = 16;
	// addi r4,r30,640
	ctx.r4.s64 = ctx.r30.s64 + 640;
	// bl 0x83292d68
	ctx.lr = 0x83292BF8;
	sub_83292D68(ctx, base);
	// lis r11,-31822
	ctx.r11.s64 = -2085486592;
	// addi r31,r31,-128
	ctx.r31.s64 = ctx.r31.s64 + -128;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r5,32
	ctx.r5.s64 = 32;
	// stw r31,-964(r11)
	PPC_STORE_U32(ctx.r11.u32 + -964, ctx.r31.u32);
	// bl 0x83292d68
	ctx.lr = 0x83292C14;
	sub_83292D68(ctx, base);
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

__attribute__((alias("__imp__sub_83292C30"))) PPC_WEAK_FUNC(sub_83292C30);
PPC_FUNC_IMPL(__imp__sub_83292C30) {
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
	// bl 0x83291248
	ctx.lr = 0x83292C40;
	sub_83291248(ctx, base);
	// bl 0x832914e8
	ctx.lr = 0x83292C44;
	sub_832914E8(ctx, base);
	// bl 0x832917b8
	ctx.lr = 0x83292C48;
	sub_832917B8(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83292C58"))) PPC_WEAK_FUNC(sub_83292C58);
PPC_FUNC_IMPL(__imp__sub_83292C58) {
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
	// bl 0x83291aa8
	ctx.lr = 0x83292C68;
	sub_83291AA8(ctx, base);
	// bl 0x83291b20
	ctx.lr = 0x83292C6C;
	sub_83291B20(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83292C7C"))) PPC_WEAK_FUNC(sub_83292C7C);
PPC_FUNC_IMPL(__imp__sub_83292C7C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83292C80"))) PPC_WEAK_FUNC(sub_83292C80);
PPC_FUNC_IMPL(__imp__sub_83292C80) {
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
	// lis r11,-31827
	ctx.r11.s64 = -2085814272;
	// addi r3,r11,32336
	ctx.r3.s64 = ctx.r11.s64 + 32336;
	// bl 0x83291dc0
	ctx.lr = 0x83292C98;
	sub_83291DC0(ctx, base);
	// bl 0x83291fd0
	ctx.lr = 0x83292C9C;
	sub_83291FD0(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83292CAC"))) PPC_WEAK_FUNC(sub_83292CAC);
PPC_FUNC_IMPL(__imp__sub_83292CAC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83292CB0"))) PPC_WEAK_FUNC(sub_83292CB0);
PPC_FUNC_IMPL(__imp__sub_83292CB0) {
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
	// bl 0x832922e8
	ctx.lr = 0x83292CC0;
	sub_832922E8(ctx, base);
	// bl 0x832923c0
	ctx.lr = 0x83292CC4;
	sub_832923C0(ctx, base);
	// bl 0x83292480
	ctx.lr = 0x83292CC8;
	sub_83292480(ctx, base);
	// bl 0x832925a0
	ctx.lr = 0x83292CCC;
	sub_832925A0(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83292CDC"))) PPC_WEAK_FUNC(sub_83292CDC);
PPC_FUNC_IMPL(__imp__sub_83292CDC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83292CE0"))) PPC_WEAK_FUNC(sub_83292CE0);
PPC_FUNC_IMPL(__imp__sub_83292CE0) {
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
	// addi r3,r3,1456
	ctx.r3.s64 = ctx.r3.s64 + 1456;
	// bl 0x832929e0
	ctx.lr = 0x83292CF4;
	sub_832929E0(ctx, base);
	// bl 0x83292ae0
	ctx.lr = 0x83292CF8;
	sub_83292AE0(ctx, base);
	// bl 0x83292b50
	ctx.lr = 0x83292CFC;
	sub_83292B50(ctx, base);
	// bl 0x83292bc0
	ctx.lr = 0x83292D00;
	sub_83292BC0(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83292D10"))) PPC_WEAK_FUNC(sub_83292D10);
PPC_FUNC_IMPL(__imp__sub_83292D10) {
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
	// bl 0x83292c30
	ctx.lr = 0x83292D28;
	sub_83292C30(ctx, base);
	// bl 0x83292c58
	ctx.lr = 0x83292D2C;
	sub_83292C58(ctx, base);
	// bl 0x83291c00
	ctx.lr = 0x83292D30;
	sub_83291C00(ctx, base);
	// bl 0x83292c80
	ctx.lr = 0x83292D34;
	sub_83292C80(ctx, base);
	// bl 0x83292cb0
	ctx.lr = 0x83292D38;
	sub_83292CB0(ctx, base);
	// bl 0x832928b8
	ctx.lr = 0x83292D3C;
	sub_832928B8(ctx, base);
	// bl 0x832928c0
	ctx.lr = 0x83292D40;
	sub_832928C0(ctx, base);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x83292d50
	if (ctx.cr6.eq) goto loc_83292D50;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83292ce0
	ctx.lr = 0x83292D50;
	sub_83292CE0(ctx, base);
loc_83292D50:
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

__attribute__((alias("__imp__sub_83292D64"))) PPC_WEAK_FUNC(sub_83292D64);
PPC_FUNC_IMPL(__imp__sub_83292D64) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83292D68"))) PPC_WEAK_FUNC(sub_83292D68);
PPC_FUNC_IMPL(__imp__sub_83292D68) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mr r9,r3
	ctx.r9.u64 = ctx.r3.u64;
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// clrlwi. r10,r5,28
	ctx.r10.u64 = ctx.r5.u32 & 0xF;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x83292d90
	if (ctx.cr0.eq) goto loc_83292D90;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_83292D7C:
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// stw r10,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r10.u32);
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// bdnz 0x83292d7c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_83292D7C;
loc_83292D90:
	// rlwinm. r8,r5,28,4,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 28) & 0xFFFFFFF;
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beqlr 
	if (ctx.cr0.eq) return;
	// addi r10,r9,-4
	ctx.r10.s64 = ctx.r9.s64 + -4;
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
loc_83292DA0:
	// lwz r6,0(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwzu r9,4(r11)
	ea = 4 + ctx.r11.u32;
	ctx.r9.u64 = PPC_LOAD_U32(ea);
	ctx.r11.u32 = ea;
	// lwzu r8,4(r11)
	ea = 4 + ctx.r11.u32;
	ctx.r8.u64 = PPC_LOAD_U32(ea);
	ctx.r11.u32 = ea;
	// lwzu r7,4(r11)
	ea = 4 + ctx.r11.u32;
	ctx.r7.u64 = PPC_LOAD_U32(ea);
	ctx.r11.u32 = ea;
	// stw r6,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r6.u32);
	// stw r9,8(r10)
	PPC_STORE_U32(ctx.r10.u32 + 8, ctx.r9.u32);
	// stw r8,12(r10)
	PPC_STORE_U32(ctx.r10.u32 + 12, ctx.r8.u32);
	// stw r7,16(r10)
	PPC_STORE_U32(ctx.r10.u32 + 16, ctx.r7.u32);
	// lwzu r9,4(r11)
	ea = 4 + ctx.r11.u32;
	ctx.r9.u64 = PPC_LOAD_U32(ea);
	ctx.r11.u32 = ea;
	// lwzu r8,4(r11)
	ea = 4 + ctx.r11.u32;
	ctx.r8.u64 = PPC_LOAD_U32(ea);
	ctx.r11.u32 = ea;
	// lwzu r7,4(r11)
	ea = 4 + ctx.r11.u32;
	ctx.r7.u64 = PPC_LOAD_U32(ea);
	ctx.r11.u32 = ea;
	// lwzu r6,4(r11)
	ea = 4 + ctx.r11.u32;
	ctx.r6.u64 = PPC_LOAD_U32(ea);
	ctx.r11.u32 = ea;
	// stw r9,20(r10)
	PPC_STORE_U32(ctx.r10.u32 + 20, ctx.r9.u32);
	// stw r8,24(r10)
	PPC_STORE_U32(ctx.r10.u32 + 24, ctx.r8.u32);
	// stw r7,28(r10)
	PPC_STORE_U32(ctx.r10.u32 + 28, ctx.r7.u32);
	// stw r6,32(r10)
	PPC_STORE_U32(ctx.r10.u32 + 32, ctx.r6.u32);
	// lwzu r9,4(r11)
	ea = 4 + ctx.r11.u32;
	ctx.r9.u64 = PPC_LOAD_U32(ea);
	ctx.r11.u32 = ea;
	// lwzu r8,4(r11)
	ea = 4 + ctx.r11.u32;
	ctx.r8.u64 = PPC_LOAD_U32(ea);
	ctx.r11.u32 = ea;
	// lwzu r7,4(r11)
	ea = 4 + ctx.r11.u32;
	ctx.r7.u64 = PPC_LOAD_U32(ea);
	ctx.r11.u32 = ea;
	// lwzu r6,4(r11)
	ea = 4 + ctx.r11.u32;
	ctx.r6.u64 = PPC_LOAD_U32(ea);
	ctx.r11.u32 = ea;
	// stw r9,36(r10)
	PPC_STORE_U32(ctx.r10.u32 + 36, ctx.r9.u32);
	// stw r8,40(r10)
	PPC_STORE_U32(ctx.r10.u32 + 40, ctx.r8.u32);
	// stw r7,44(r10)
	PPC_STORE_U32(ctx.r10.u32 + 44, ctx.r7.u32);
	// stw r6,48(r10)
	PPC_STORE_U32(ctx.r10.u32 + 48, ctx.r6.u32);
	// lwzu r9,4(r11)
	ea = 4 + ctx.r11.u32;
	ctx.r9.u64 = PPC_LOAD_U32(ea);
	ctx.r11.u32 = ea;
	// lwzu r8,4(r11)
	ea = 4 + ctx.r11.u32;
	ctx.r8.u64 = PPC_LOAD_U32(ea);
	ctx.r11.u32 = ea;
	// lwzu r7,4(r11)
	ea = 4 + ctx.r11.u32;
	ctx.r7.u64 = PPC_LOAD_U32(ea);
	ctx.r11.u32 = ea;
	// lwzu r6,4(r11)
	ea = 4 + ctx.r11.u32;
	ctx.r6.u64 = PPC_LOAD_U32(ea);
	ctx.r11.u32 = ea;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// stw r9,52(r10)
	PPC_STORE_U32(ctx.r10.u32 + 52, ctx.r9.u32);
	// stw r8,56(r10)
	PPC_STORE_U32(ctx.r10.u32 + 56, ctx.r8.u32);
	// stw r7,60(r10)
	PPC_STORE_U32(ctx.r10.u32 + 60, ctx.r7.u32);
	// stwu r6,64(r10)
	ea = 64 + ctx.r10.u32;
	PPC_STORE_U32(ea, ctx.r6.u32);
	ctx.r10.u32 = ea;
	// bdnz 0x83292da0
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_83292DA0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83292E2C"))) PPC_WEAK_FUNC(sub_83292E2C);
PPC_FUNC_IMPL(__imp__sub_83292E2C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83292E30"))) PPC_WEAK_FUNC(sub_83292E30);
PPC_FUNC_IMPL(__imp__sub_83292E30) {
	PPC_FUNC_PROLOGUE();
	// b 0x83293f30
	sub_83293F30(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83292E34"))) PPC_WEAK_FUNC(sub_83292E34);
PPC_FUNC_IMPL(__imp__sub_83292E34) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83292E38"))) PPC_WEAK_FUNC(sub_83292E38);
PPC_FUNC_IMPL(__imp__sub_83292E38) {
	PPC_FUNC_PROLOGUE();
	// b 0x83294050
	sub_83294050(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83292E3C"))) PPC_WEAK_FUNC(sub_83292E3C);
PPC_FUNC_IMPL(__imp__sub_83292E3C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83292E40"))) PPC_WEAK_FUNC(sub_83292E40);
PPC_FUNC_IMPL(__imp__sub_83292E40) {
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
	// bl 0x832940f8
	ctx.lr = 0x83292E58;
	sub_832940F8(ctx, base);
	// stw r3,5416(r31)
	PPC_STORE_U32(ctx.r31.u32 + 5416, ctx.r3.u32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x83292e6c
	if (ctx.cr0.eq) goto loc_83292E6C;
	// lwz r4,4804(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4804);
	// bl 0x83293c90
	ctx.lr = 0x83292E6C;
	sub_83293C90(ctx, base);
loc_83292E6C:
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

__attribute__((alias("__imp__sub_83292E80"))) PPC_WEAK_FUNC(sub_83292E80);
PPC_FUNC_IMPL(__imp__sub_83292E80) {
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
	// lwz r3,5416(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 5416);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x83292eac
	if (ctx.cr6.eq) goto loc_83292EAC;
	// bl 0x83272e58
	ctx.lr = 0x83292EA4;
	sub_83272E58(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,5416(r31)
	PPC_STORE_U32(ctx.r31.u32 + 5416, ctx.r11.u32);
loc_83292EAC:
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

__attribute__((alias("__imp__sub_83292EC0"))) PPC_WEAK_FUNC(sub_83292EC0);
PPC_FUNC_IMPL(__imp__sub_83292EC0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x833a0190
	ctx.lr = 0x83292EC8;
	__savegprlr_22(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r26,r4
	ctx.r26.u64 = ctx.r4.u64;
	// li r30,-1
	ctx.r30.s64 = -1;
	// stw r11,0(r5)
	PPC_STORE_U32(ctx.r5.u32 + 0, ctx.r11.u32);
	// stw r11,4(r5)
	PPC_STORE_U32(ctx.r5.u32 + 4, ctx.r11.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r11,8(r29)
	PPC_STORE_U32(ctx.r29.u32 + 8, ctx.r11.u32);
	// addi r27,r3,5288
	ctx.r27.s64 = ctx.r3.s64 + 5288;
	// stw r30,12(r29)
	PPC_STORE_U32(ctx.r29.u32 + 12, ctx.r30.u32);
	// lis r5,32767
	ctx.r5.s64 = 2147418112;
	// stw r30,16(r29)
	PPC_STORE_U32(ctx.r29.u32 + 16, ctx.r30.u32);
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// stw r11,20(r29)
	PPC_STORE_U32(ctx.r29.u32 + 20, ctx.r11.u32);
	// ori r5,r5,65535
	ctx.r5.u64 = ctx.r5.u64 | 65535;
	// lwz r10,4816(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4816);
	// li r4,1
	ctx.r4.s64 = 1;
	// stw r11,5408(r3)
	PPC_STORE_U32(ctx.r3.u32 + 5408, ctx.r11.u32);
	// stw r10,5316(r3)
	PPC_STORE_U32(ctx.r3.u32 + 5316, ctx.r10.u32);
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// lwz r11,0(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// lwz r23,4968(r31)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4968);
	// lwz r22,4972(r31)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4972);
	// lwz r11,24(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x83292F34;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r10,5288(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 5288);
	// rlwinm r11,r10,0,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFC;
	// subf r10,r11,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r11.s64;
	// rlwinm. r10,r10,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0xFFFFFFF8;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// lwz r7,0(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwzu r9,4(r11)
	ea = 4 + ctx.r11.u32;
	ctx.r9.u64 = PPC_LOAD_U32(ea);
	ctx.r11.u32 = ea;
	// addi r8,r11,4
	ctx.r8.s64 = ctx.r11.s64 + 4;
	// slw r11,r7,r10
	ctx.r11.u64 = ctx.r10.u8 & 0x20 ? 0 : (ctx.r7.u32 << (ctx.r10.u8 & 0x3F));
	// beq 0x83292f68
	if (ctx.cr0.eq) goto loc_83292F68;
	// subfic r7,r10,32
	ctx.xer.ca = ctx.r10.u32 <= 32;
	ctx.r7.s64 = 32 - ctx.r10.s64;
	// srw r7,r9,r7
	ctx.r7.u64 = ctx.r7.u8 & 0x20 ? 0 : (ctx.r9.u32 >> (ctx.r7.u8 & 0x3F));
	// or r11,r7,r11
	ctx.r11.u64 = ctx.r7.u64 | ctx.r11.u64;
	// slw r9,r9,r10
	ctx.r9.u64 = ctx.r10.u8 & 0x20 ? 0 : (ctx.r9.u32 << (ctx.r10.u8 & 0x3F));
loc_83292F68:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// lwz r7,4836(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4836);
	// lwz r25,0(r8)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	// addi r28,r8,4
	ctx.r28.s64 = ctx.r8.s64 + 4;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stw r30,5212(r31)
	PPC_STORE_U32(ctx.r31.u32 + 5212, ctx.r30.u32);
	// cmpwi cr6,r10,27
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 27, ctx.xer);
	// mullw r7,r7,r11
	ctx.r7.s64 = int64_t(ctx.r7.s32) * int64_t(ctx.r11.s32);
	// stw r11,5208(r31)
	PPC_STORE_U32(ctx.r31.u32 + 5208, ctx.r11.u32);
	// addi r11,r7,-1
	ctx.r11.s64 = ctx.r7.s64 + -1;
	// stw r11,5204(r31)
	PPC_STORE_U32(ctx.r31.u32 + 5204, ctx.r11.u32);
	// blt cr6,0x83292fd0
	if (ctx.cr6.lt) goto loc_83292FD0;
	// addic. r30,r10,-27
	ctx.xer.ca = ctx.r10.u32 > 26;
	ctx.r30.s64 = ctx.r10.s64 + -27;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// beq 0x83292fb8
	if (ctx.cr0.eq) goto loc_83292FB8;
	// subfic r11,r30,5
	ctx.xer.ca = ctx.r30.u32 <= 5;
	ctx.r11.s64 = 5 - ctx.r30.s64;
	// slw r24,r25,r30
	ctx.r24.u64 = ctx.r30.u8 & 0x20 ? 0 : (ctx.r25.u32 << (ctx.r30.u8 & 0x3F));
	// srw r11,r25,r11
	ctx.r11.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r25.u32 >> (ctx.r11.u8 & 0x3F));
	// or r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 | ctx.r9.u64;
	// rlwinm r11,r11,5,27,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 5) & 0x1F;
	// b 0x83292fc0
	goto loc_83292FC0;
loc_83292FB8:
	// rlwinm r11,r9,5,27,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 5) & 0x1F;
	// mr r24,r25
	ctx.r24.u64 = ctx.r25.u64;
loc_83292FC0:
	// stw r11,5128(r31)
	PPC_STORE_U32(ctx.r31.u32 + 5128, ctx.r11.u32);
	// lwz r25,0(r28)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// addi r28,r28,4
	ctx.r28.s64 = ctx.r28.s64 + 4;
	// b 0x83292fe0
	goto loc_83292FE0;
loc_83292FD0:
	// rlwinm r11,r9,5,27,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 5) & 0x1F;
	// addi r30,r10,5
	ctx.r30.s64 = ctx.r10.s64 + 5;
	// stw r11,5128(r31)
	PPC_STORE_U32(ctx.r31.u32 + 5128, ctx.r11.u32);
	// rlwinm r24,r9,5,0,26
	ctx.r24.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 5) & 0xFFFFFFE0;
loc_83292FE0:
	// addi r3,r31,5132
	ctx.r3.s64 = ctx.r31.s64 + 5132;
	// bl 0x836909c8
	ctx.lr = 0x83292FE8;
	sub_836909C8(ctx, base);
	// addi r3,r31,5168
	ctx.r3.s64 = ctx.r31.s64 + 5168;
	// bl 0x836909c8
	ctx.lr = 0x83292FF0;
	sub_836909C8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x836909e0
	ctx.lr = 0x83292FF8;
	sub_836909E0(ctx, base);
	// cmpwi cr6,r24,0
	ctx.cr6.compare<int32_t>(ctx.r24.s32, 0, ctx.xer);
	// bge cr6,0x83293058
	if (!ctx.cr6.lt) goto loc_83293058;
	// lwz r9,0(r27)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// addi r11,r30,7
	ctx.r11.s64 = ctx.r30.s64 + 7;
	// lwz r8,5292(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 5292);
loc_8329300C:
	// addi r30,r30,9
	ctx.r30.s64 = ctx.r30.s64 + 9;
	// addi r11,r11,9
	ctx.r11.s64 = ctx.r11.s64 + 9;
	// cmpwi cr6,r30,32
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 32, ctx.xer);
	// blt cr6,0x83293034
	if (ctx.cr6.lt) goto loc_83293034;
	// addi r30,r30,-32
	ctx.r30.s64 = ctx.r30.s64 + -32;
	// addi r11,r11,-32
	ctx.r11.s64 = ctx.r11.s64 + -32;
	// slw r24,r25,r30
	ctx.r24.u64 = ctx.r30.u8 & 0x20 ? 0 : (ctx.r25.u32 << (ctx.r30.u8 & 0x3F));
	// lwz r25,0(r28)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// addi r28,r28,4
	ctx.r28.s64 = ctx.r28.s64 + 4;
	// b 0x83293038
	goto loc_83293038;
loc_83293034:
	// rlwinm r24,r24,9,0,22
	ctx.r24.u64 = __builtin_rotateleft64(ctx.r24.u32 | (ctx.r24.u64 << 32), 9) & 0xFFFFFE00;
loc_83293038:
	// srawi r10,r11,3
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x7) != 0);
	ctx.r10.s64 = ctx.r11.s32 >> 3;
	// subf r10,r9,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r9.s64;
	// add r10,r10,r28
	ctx.r10.u64 = ctx.r10.u64 + ctx.r28.u64;
	// addi r10,r10,-8
	ctx.r10.s64 = ctx.r10.s64 + -8;
	// cmpw cr6,r8,r10
	ctx.cr6.compare<int32_t>(ctx.r8.s32, ctx.r10.s32, ctx.xer);
	// ble cr6,0x83293124
	if (!ctx.cr6.gt) goto loc_83293124;
	// cmpwi cr6,r24,0
	ctx.cr6.compare<int32_t>(ctx.r24.s32, 0, ctx.xer);
	// blt cr6,0x8329300c
	if (ctx.cr6.lt) goto loc_8329300C;
loc_83293058:
	// addi r11,r30,1
	ctx.r11.s64 = ctx.r30.s64 + 1;
	// cmpwi cr6,r11,32
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 32, ctx.xer);
	// blt cr6,0x8329306c
	if (ctx.cr6.lt) goto loc_8329306C;
	// addi r11,r11,-32
	ctx.r11.s64 = ctx.r11.s64 + -32;
	// addi r28,r28,4
	ctx.r28.s64 = ctx.r28.s64 + 4;
loc_8329306C:
	// clrlwi r10,r11,29
	ctx.r10.u64 = ctx.r11.u32 & 0x7;
	// lwz r9,0(r27)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// stw r10,5296(r31)
	PPC_STORE_U32(ctx.r31.u32 + 5296, ctx.r10.u32);
	// subf r11,r10,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r10.s64;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// addi r11,r11,7
	ctx.r11.s64 = ctx.r11.s64 + 7;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// srawi r11,r11,3
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x7) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 3;
	// subf r11,r9,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r9.s64;
	// add r11,r11,r28
	ctx.r11.u64 = ctx.r11.u64 + ctx.r28.u64;
	// addi r4,r11,-8
	ctx.r4.s64 = ctx.r11.s64 + -8;
	// bl 0x832f0da8
	ctx.lr = 0x832930A0;
	sub_832F0DA8(ctx, base);
	// lwz r11,0(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// lwz r11,32(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x832930BC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,0(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// lwz r11,28(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x832930D8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,5084(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 5084);
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x832930EC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,5204(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 5204);
	// lwz r10,5216(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 5216);
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// blt cr6,0x83293104
	if (ctx.cr6.lt) goto loc_83293104;
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,20(r29)
	PPC_STORE_U32(ctx.r29.u32 + 20, ctx.r11.u32);
loc_83293104:
	// lwz r11,4968(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4968);
	// subf r11,r23,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r23.s64;
	// stw r11,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r11.u32);
	// lwz r11,4972(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4972);
	// subf r11,r22,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r22.s64;
	// stw r11,4(r29)
	PPC_STORE_U32(ctx.r29.u32 + 4, ctx.r11.u32);
	// lwz r11,5408(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 5408);
	// stw r11,8(r29)
	PPC_STORE_U32(ctx.r29.u32 + 8, ctx.r11.u32);
loc_83293124:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x833a01e0
	__restgprlr_22(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8329312C"))) PPC_WEAK_FUNC(sub_8329312C);
PPC_FUNC_IMPL(__imp__sub_8329312C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83293130"))) PPC_WEAK_FUNC(sub_83293130);
PPC_FUNC_IMPL(__imp__sub_83293130) {
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
	// mulli r10,r4,5504
	ctx.r10.s64 = ctx.r4.s64 * 5504;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// add r31,r10,r3
	ctx.r31.u64 = ctx.r10.u64 + ctx.r3.u64;
	// li r5,5420
	ctx.r5.s64 = 5420;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r4,r11
	ctx.r4.u64 = ctx.r11.u64;
	// bl 0x833a1390
	ctx.lr = 0x8329315C;
	sub_833A1390(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x832894d0
	ctx.lr = 0x83293164;
	sub_832894D0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83289628
	ctx.lr = 0x8329316C;
	sub_83289628(ctx, base);
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

__attribute__((alias("__imp__sub_83293184"))) PPC_WEAK_FUNC(sub_83293184);
PPC_FUNC_IMPL(__imp__sub_83293184) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83293188"))) PPC_WEAK_FUNC(sub_83293188);
PPC_FUNC_IMPL(__imp__sub_83293188) {
	PPC_FUNC_PROLOGUE();
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,5412(r3)
	PPC_STORE_U32(ctx.r3.u32 + 5412, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8329319C"))) PPC_WEAK_FUNC(sub_8329319C);
PPC_FUNC_IMPL(__imp__sub_8329319C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832931A0"))) PPC_WEAK_FUNC(sub_832931A0);
PPC_FUNC_IMPL(__imp__sub_832931A0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x833a01a8
	ctx.lr = 0x832931A8;
	__savegprlr_28(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r3,5416(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 5416);
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8329323c
	if (ctx.cr6.eq) goto loc_8329323C;
	// lwz r4,4804(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4804);
	// bl 0x83293c90
	ctx.lr = 0x832931C8;
	sub_83293C90(ctx, base);
	// lis r11,-31845
	ctx.r11.s64 = -2086993920;
	// stw r31,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r31.u32);
	// li r10,1
	ctx.r10.s64 = 1;
	// lwz r3,5416(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 5416);
	// addi r11,r11,5364
	ctx.r11.s64 = ctx.r11.s64 + 5364;
	// stw r10,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r10.u32);
	// addi r6,r1,96
	ctx.r6.s64 = ctx.r1.s64 + 96;
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// addi r5,r31,4976
	ctx.r5.s64 = ctx.r31.s64 + 4976;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r11,5216(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 5216);
	// lwz r10,4832(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4832);
	// stw r11,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r11.u32);
	// stw r10,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r10.u32);
	// bl 0x83294208
	ctx.lr = 0x83293204;
	sub_83294208(ctx, base);
	// lwz r11,116(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8329323c
	if (ctx.cr6.eq) goto loc_8329323C;
	// lwz r11,4972(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4972);
	// lwz r9,124(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 124);
	// lhz r8,128(r1)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r1.u32 + 128);
	// add r9,r11,r9
	ctx.r9.u64 = ctx.r11.u64 + ctx.r9.u64;
	// lwz r11,4968(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4968);
	// lwz r10,120(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	// stw r9,4972(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4972, ctx.r9.u32);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// sth r8,5036(r31)
	PPC_STORE_U16(ctx.r31.u32 + 5036, ctx.r8.u16);
	// stw r11,4968(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4968, ctx.r11.u32);
	// b 0x83293364
	goto loc_83293364;
loc_8329323C:
	// li r29,0
	ctx.r29.s64 = 0;
	// li r28,257
	ctx.r28.s64 = 257;
	// sth r29,5036(r31)
	PPC_STORE_U16(ctx.r31.u32 + 5036, ctx.r29.u16);
	// b 0x83293308
	goto loc_83293308;
loc_8329324C:
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// li r4,-1
	ctx.r4.s64 = -1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8328b0f8
	ctx.lr = 0x8329325C;
	sub_8328B0F8(ctx, base);
	// mr. r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// bne 0x83293318
	if (!ctx.cr0.eq) goto loc_83293318;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lis r5,32767
	ctx.r5.s64 = 2147418112;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// ori r5,r5,65535
	ctx.r5.u64 = ctx.r5.u64 | 65535;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r11,24(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x83293288;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r11,28(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x832932A4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// blt cr6,0x83293330
	if (ctx.cr6.lt) goto loc_83293330;
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x8328b5a0
	ctx.lr = 0x832932B8;
	sub_8328B5A0(ctx, base);
	// clrlwi. r11,r3,31
	ctx.r11.u64 = ctx.r3.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x83293330
	if (ctx.cr0.eq) goto loc_83293330;
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lbz r11,3(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 3);
	// ori r10,r11,256
	ctx.r10.u64 = ctx.r11.u64 | 256;
	// cmplw cr6,r28,r10
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, ctx.r10.u32, ctx.xer);
	// bgt cr6,0x83293324
	if (ctx.cr6.gt) goto loc_83293324;
	// lhz r11,5036(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 5036);
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// sth r11,5036(r31)
	PPC_STORE_U16(ctx.r31.u32 + 5036, ctx.r11.u16);
	// mr r28,r10
	ctx.r28.u64 = ctx.r10.u64;
	// bl 0x83292ec0
	ctx.lr = 0x832932F4;
	sub_83292EC0(ctx, base);
	// lwz r11,104(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// add r29,r11,r29
	ctx.r29.u64 = ctx.r11.u64 + ctx.r29.u64;
	// lwz r11,116(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x83293330
	if (!ctx.cr6.eq) goto loc_83293330;
loc_83293308:
	// lwz r11,5412(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 5412);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8329324c
	if (ctx.cr6.eq) goto loc_8329324C;
	// b 0x83293360
	goto loc_83293360;
loc_83293318:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8328c178
	ctx.lr = 0x83293320;
	sub_8328C178(ctx, base);
	// b 0x83293364
	goto loc_83293364;
loc_83293324:
	// lwz r11,4968(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4968);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,4968(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4968, ctx.r11.u32);
loc_83293330:
	// lwz r11,5204(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 5204);
	// lwz r10,5216(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 5216);
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// beq cr6,0x8329334c
	if (ctx.cr6.eq) goto loc_8329334C;
	// lwz r11,4968(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4968);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,4968(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4968, ctx.r11.u32);
loc_8329334C:
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// beq cr6,0x83293360
	if (ctx.cr6.eq) goto loc_83293360;
	// lwz r11,4968(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4968);
	// add r11,r11,r29
	ctx.r11.u64 = ctx.r11.u64 + ctx.r29.u64;
	// stw r11,4968(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4968, ctx.r11.u32);
loc_83293360:
	// li r3,0
	ctx.r3.s64 = 0;
loc_83293364:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x833a01f8
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8329336C"))) PPC_WEAK_FUNC(sub_8329336C);
PPC_FUNC_IMPL(__imp__sub_8329336C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83293370"))) PPC_WEAK_FUNC(sub_83293370);
PPC_FUNC_IMPL(__imp__sub_83293370) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x833a01a8
	ctx.lr = 0x83293378;
	__savegprlr_28(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,-1
	ctx.r10.s64 = -1;
	// stw r11,0(r5)
	PPC_STORE_U32(ctx.r5.u32 + 0, ctx.r11.u32);
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// stw r11,4(r5)
	PPC_STORE_U32(ctx.r5.u32 + 4, ctx.r11.u32);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// stw r11,8(r5)
	PPC_STORE_U32(ctx.r5.u32 + 8, ctx.r11.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r10,12(r5)
	PPC_STORE_U32(ctx.r5.u32 + 12, ctx.r10.u32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// stw r10,16(r5)
	PPC_STORE_U32(ctx.r5.u32 + 16, ctx.r10.u32);
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// stw r11,20(r5)
	PPC_STORE_U32(ctx.r5.u32 + 20, ctx.r11.u32);
	// bl 0x8328a770
	ctx.lr = 0x832933B4;
	sub_8328A770(ctx, base);
	// clrlwi. r11,r3,31
	ctx.r11.u64 = ctx.r3.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x83293488
	if (ctx.cr0.eq) goto loc_83293488;
loc_832933BC:
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x83292ec0
	ctx.lr = 0x832933CC;
	sub_83292EC0(ctx, base);
	// lwz r9,96(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// lwz r10,104(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// lwz r6,0(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r8,8(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// add. r11,r10,r9
	ctx.r11.u64 = ctx.r10.u64 + ctx.r9.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// add r6,r6,r9
	ctx.r6.u64 = ctx.r6.u64 + ctx.r9.u64;
	// lwz r7,4(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// add r10,r8,r10
	ctx.r10.u64 = ctx.r8.u64 + ctx.r10.u64;
	// stw r6,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r6.u32);
	// stw r10,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r10.u32);
	// lwz r9,100(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// lwz r28,116(r1)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// add r10,r7,r9
	ctx.r10.u64 = ctx.r7.u64 + ctx.r9.u64;
	// stw r10,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r10.u32);
	// beq 0x8329342c
	if (ctx.cr0.eq) goto loc_8329342C;
	// lwz r10,4968(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4968);
	// lwz r9,4756(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4756);
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// stw r10,4968(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4968, ctx.r10.u32);
	// beq cr6,0x83293474
	if (ctx.cr6.eq) goto loc_83293474;
	// lwz r10,4972(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4972);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r11,4972(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4972, ctx.r11.u32);
loc_8329342C:
	// cmpwi cr6,r28,0
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// bne cr6,0x83293474
	if (!ctx.cr6.eq) goto loc_83293474;
	// lwz r11,5412(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 5412);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x83293474
	if (!ctx.cr6.eq) goto loc_83293474;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// li r4,-1
	ctx.r4.s64 = -1;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8328b0f8
	ctx.lr = 0x83293450;
	sub_8328B0F8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x83293474
	if (!ctx.cr0.eq) goto loc_83293474;
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8328a770
	ctx.lr = 0x83293464;
	sub_8328A770(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r10,84(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x832933bc
	if (ctx.cr6.eq) goto loc_832933BC;
loc_83293474:
	// lwz r11,108(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	// lwz r10,112(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// stw r28,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r28.u32);
	// stw r11,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r11.u32);
	// stw r10,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r10.u32);
loc_83293488:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x833a01f8
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83293490"))) PPC_WEAK_FUNC(sub_83293490);
PPC_FUNC_IMPL(__imp__sub_83293490) {
	PPC_FUNC_PROLOGUE();
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x833a0198
	ctx.lr = 0x83293498;
	__savegprlr_24(ctx, base);
	// lis r8,-31826
	ctx.r8.s64 = -2085748736;
	// lis r11,-31895
	ctx.r11.s64 = -2090270720;
	// addi r24,r8,-28592
	ctx.r24.s64 = ctx.r8.s64 + -28592;
	// addi r11,r11,14736
	ctx.r11.s64 = ctx.r11.s64 + 14736;
	// lis r10,-31895
	ctx.r10.s64 = -2090270720;
	// lis r9,-31895
	ctx.r9.s64 = -2090270720;
	// stw r11,-28592(r8)
	PPC_STORE_U32(ctx.r8.u32 + -28592, ctx.r11.u32);
	// lis r25,-31895
	ctx.r25.s64 = -2090270720;
	// addi r10,r10,15416
	ctx.r10.s64 = ctx.r10.s64 + 15416;
	// addi r9,r9,15040
	ctx.r9.s64 = ctx.r9.s64 + 15040;
	// addi r11,r25,15792
	ctx.r11.s64 = ctx.r25.s64 + 15792;
	// stw r10,4(r24)
	PPC_STORE_U32(ctx.r24.u32 + 4, ctx.r10.u32);
	// lis r26,-31895
	ctx.r26.s64 = -2090270720;
	// stw r9,8(r24)
	PPC_STORE_U32(ctx.r24.u32 + 8, ctx.r9.u32);
	// lis r27,-31895
	ctx.r27.s64 = -2090270720;
	// stw r11,12(r24)
	PPC_STORE_U32(ctx.r24.u32 + 12, ctx.r11.u32);
	// lis r28,-31895
	ctx.r28.s64 = -2090270720;
	// addi r10,r26,14736
	ctx.r10.s64 = ctx.r26.s64 + 14736;
	// addi r9,r27,15416
	ctx.r9.s64 = ctx.r27.s64 + 15416;
	// addi r11,r28,15040
	ctx.r11.s64 = ctx.r28.s64 + 15040;
	// stw r10,16(r24)
	PPC_STORE_U32(ctx.r24.u32 + 16, ctx.r10.u32);
	// lis r29,-31895
	ctx.r29.s64 = -2090270720;
	// stw r9,20(r24)
	PPC_STORE_U32(ctx.r24.u32 + 20, ctx.r9.u32);
	// lis r30,-31895
	ctx.r30.s64 = -2090270720;
	// stw r11,24(r24)
	PPC_STORE_U32(ctx.r24.u32 + 24, ctx.r11.u32);
	// lis r31,-31895
	ctx.r31.s64 = -2090270720;
	// addi r10,r29,15040
	ctx.r10.s64 = ctx.r29.s64 + 15040;
	// addi r9,r30,16448
	ctx.r9.s64 = ctx.r30.s64 + 16448;
	// addi r11,r31,17904
	ctx.r11.s64 = ctx.r31.s64 + 17904;
	// stw r10,28(r24)
	PPC_STORE_U32(ctx.r24.u32 + 28, ctx.r10.u32);
	// lis r3,-31895
	ctx.r3.s64 = -2090270720;
	// stw r9,32(r24)
	PPC_STORE_U32(ctx.r24.u32 + 32, ctx.r9.u32);
	// lis r4,-31895
	ctx.r4.s64 = -2090270720;
	// stw r11,36(r24)
	PPC_STORE_U32(ctx.r24.u32 + 36, ctx.r11.u32);
	// lis r5,-31895
	ctx.r5.s64 = -2090270720;
	// addi r10,r3,17128
	ctx.r10.s64 = ctx.r3.s64 + 17128;
	// addi r9,r4,19008
	ctx.r9.s64 = ctx.r4.s64 + 19008;
	// addi r11,r5,16448
	ctx.r11.s64 = ctx.r5.s64 + 16448;
	// stw r10,40(r24)
	PPC_STORE_U32(ctx.r24.u32 + 40, ctx.r10.u32);
	// lis r6,-31895
	ctx.r6.s64 = -2090270720;
	// stw r9,44(r24)
	PPC_STORE_U32(ctx.r24.u32 + 44, ctx.r9.u32);
	// lis r7,-31895
	ctx.r7.s64 = -2090270720;
	// stw r11,48(r24)
	PPC_STORE_U32(ctx.r24.u32 + 48, ctx.r11.u32);
	// lis r8,-31895
	ctx.r8.s64 = -2090270720;
	// addi r10,r6,17904
	ctx.r10.s64 = ctx.r6.s64 + 17904;
	// addi r9,r7,17128
	ctx.r9.s64 = ctx.r7.s64 + 17128;
	// addi r11,r8,17128
	ctx.r11.s64 = ctx.r8.s64 + 17128;
	// stw r10,52(r24)
	PPC_STORE_U32(ctx.r24.u32 + 52, ctx.r10.u32);
	// stw r9,56(r24)
	PPC_STORE_U32(ctx.r24.u32 + 56, ctx.r9.u32);
	// stw r11,60(r24)
	PPC_STORE_U32(ctx.r24.u32 + 60, ctx.r11.u32);
	// b 0x833a01e8
	__restgprlr_24(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83293564"))) PPC_WEAK_FUNC(sub_83293564);
PPC_FUNC_IMPL(__imp__sub_83293564) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83293568"))) PPC_WEAK_FUNC(sub_83293568);
PPC_FUNC_IMPL(__imp__sub_83293568) {
	PPC_FUNC_PROLOGUE();
	// addi r10,r3,5008
	ctx.r10.s64 = ctx.r3.s64 + 5008;
	// lwz r11,5008(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 5008);
	// lwz r10,5012(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 5012);
	// lwz r9,5016(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 5016);
	// lwz r8,5020(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 5020);
	// stw r11,5040(r3)
	PPC_STORE_U32(ctx.r3.u32 + 5040, ctx.r11.u32);
	// stw r10,5044(r3)
	PPC_STORE_U32(ctx.r3.u32 + 5044, ctx.r10.u32);
	// stw r9,5048(r3)
	PPC_STORE_U32(ctx.r3.u32 + 5048, ctx.r9.u32);
	// stw r8,5052(r3)
	PPC_STORE_U32(ctx.r3.u32 + 5052, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83293590"))) PPC_WEAK_FUNC(sub_83293590);
PPC_FUNC_IMPL(__imp__sub_83293590) {
	PPC_FUNC_PROLOGUE();
	// b 0x83293490
	sub_83293490(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83293594"))) PPC_WEAK_FUNC(sub_83293594);
PPC_FUNC_IMPL(__imp__sub_83293594) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83293598"))) PPC_WEAK_FUNC(sub_83293598);
PPC_FUNC_IMPL(__imp__sub_83293598) {
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
	// bl 0x83294580
	ctx.lr = 0x832935B4;
	sub_83294580(ctx, base);
	// lis r11,-31826
	ctx.r11.s64 = -2085748736;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// addi r10,r11,-28528
	ctx.r10.s64 = ctx.r11.s64 + -28528;
	// lis r11,-31822
	ctx.r11.s64 = -2085486592;
	// addi r11,r11,-1008
	ctx.r11.s64 = ctx.r11.s64 + -1008;
	// stw r3,128(r10)
	PPC_STORE_U32(ctx.r10.u32 + 128, ctx.r3.u32);
	// beq cr6,0x832935e8
	if (ctx.cr6.eq) goto loc_832935E8;
	// lis r10,-31822
	ctx.r10.s64 = -2085486592;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r31,r10,-1012
	ctx.r31.s64 = ctx.r10.s64 + -1012;
	// addi r10,r30,64
	ctx.r10.s64 = ctx.r30.s64 + 64;
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// b 0x832935fc
	goto loc_832935FC;
loc_832935E8:
	// lis r9,-31822
	ctx.r9.s64 = -2085486592;
	// mr r3,r10
	ctx.r3.u64 = ctx.r10.u64;
	// addi r10,r10,64
	ctx.r10.s64 = ctx.r10.s64 + 64;
	// addi r31,r9,-1012
	ctx.r31.s64 = ctx.r9.s64 + -1012;
	// stw r10,-1012(r9)
	PPC_STORE_U32(ctx.r9.u32 + -1012, ctx.r10.u32);
loc_832935FC:
	// stw r3,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r3.u32);
	// lis r11,-32219
	ctx.r11.s64 = -2111504384;
	// li r5,64
	ctx.r5.s64 = 64;
	// addi r30,r11,23328
	ctx.r30.s64 = ctx.r11.s64 + 23328;
	// addi r4,r30,-64
	ctx.r4.s64 = ctx.r30.s64 + -64;
	// bl 0x833a1390
	ctx.lr = 0x83293614;
	sub_833A1390(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// li r5,64
	ctx.r5.s64 = 64;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x833a1390
	ctx.lr = 0x83293624;
	sub_833A1390(ctx, base);
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

__attribute__((alias("__imp__sub_8329363C"))) PPC_WEAK_FUNC(sub_8329363C);
PPC_FUNC_IMPL(__imp__sub_8329363C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83293640"))) PPC_WEAK_FUNC(sub_83293640);
PPC_FUNC_IMPL(__imp__sub_83293640) {
	PPC_FUNC_PROLOGUE();
	// li r10,64
	ctx.r10.s64 = 64;
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// subf r9,r4,r3
	ctx.r9.s64 = ctx.r3.s64 - ctx.r4.s64;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// lis r10,-32219
	ctx.r10.s64 = -2111504384;
	// addi r10,r10,23536
	ctx.r10.s64 = ctx.r10.s64 + 23536;
loc_83293658:
	// lbzx r8,r9,r11
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r9.u32 + ctx.r11.u32);
	// extsb r8,r8
	ctx.r8.s64 = ctx.r8.s8;
	// lbzx r8,r8,r10
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r8.u32 + ctx.r10.u32);
	// stb r8,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r8.u8);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// bdnz 0x83293658
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_83293658;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83293674"))) PPC_WEAK_FUNC(sub_83293674);
PPC_FUNC_IMPL(__imp__sub_83293674) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83293678"))) PPC_WEAK_FUNC(sub_83293678);
PPC_FUNC_IMPL(__imp__sub_83293678) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r10,-32219
	ctx.r10.s64 = -2111504384;
	// lis r8,-31895
	ctx.r8.s64 = -2090270720;
	// lis r9,-31895
	ctx.r9.s64 = -2090270720;
	// lis r7,32767
	ctx.r7.s64 = 2147418112;
	// addi r9,r9,8120
	ctx.r9.s64 = ctx.r9.s64 + 8120;
	// lfs f0,23600(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 23600);
	ctx.f0.f64 = double(temp.f32);
	// addi r10,r8,8264
	ctx.r10.s64 = ctx.r8.s64 + 8264;
	// lis r8,-32768
	ctx.r8.s64 = -2147483648;
	// stw r9,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r9.u32);
	// stw r10,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r10.u32);
	// lis r6,-31822
	ctx.r6.s64 = -2085486592;
	// stw r8,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r8.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,128
	ctx.r10.s64 = 128;
	// stfs f0,32(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 32, temp.u32);
	// ori r7,r7,65535
	ctx.r7.u64 = ctx.r7.u64 | 65535;
	// stb r11,1(r3)
	PPC_STORE_U8(ctx.r3.u32 + 1, ctx.r11.u8);
	// li r5,256
	ctx.r5.s64 = 256;
	// stb r11,2(r3)
	PPC_STORE_U8(ctx.r3.u32 + 2, ctx.r11.u8);
	// li r9,512
	ctx.r9.s64 = 512;
	// stb r11,0(r3)
	PPC_STORE_U8(ctx.r3.u32 + 0, ctx.r11.u8);
	// lis r8,-31822
	ctx.r8.s64 = -2085486592;
	// stb r11,3(r3)
	PPC_STORE_U8(ctx.r3.u32 + 3, ctx.r11.u8);
	// stb r11,4(r3)
	PPC_STORE_U8(ctx.r3.u32 + 4, ctx.r11.u8);
	// stb r11,5(r3)
	PPC_STORE_U8(ctx.r3.u32 + 5, ctx.r11.u8);
	// stb r11,6(r3)
	PPC_STORE_U8(ctx.r3.u32 + 6, ctx.r11.u8);
	// stb r11,7(r3)
	PPC_STORE_U8(ctx.r3.u32 + 7, ctx.r11.u8);
	// stw r7,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r7.u32);
	// stw r11,24(r3)
	PPC_STORE_U32(ctx.r3.u32 + 24, ctx.r11.u32);
	// stw r11,28(r3)
	PPC_STORE_U32(ctx.r3.u32 + 28, ctx.r11.u32);
	// stw r5,36(r3)
	PPC_STORE_U32(ctx.r3.u32 + 36, ctx.r5.u32);
	// stw r11,40(r3)
	PPC_STORE_U32(ctx.r3.u32 + 40, ctx.r11.u32);
	// stw r11,44(r3)
	PPC_STORE_U32(ctx.r3.u32 + 44, ctx.r11.u32);
	// stw r11,48(r3)
	PPC_STORE_U32(ctx.r3.u32 + 48, ctx.r11.u32);
	// stw r11,52(r3)
	PPC_STORE_U32(ctx.r3.u32 + 52, ctx.r11.u32);
	// stw r9,56(r3)
	PPC_STORE_U32(ctx.r3.u32 + 56, ctx.r9.u32);
	// stw r10,60(r3)
	PPC_STORE_U32(ctx.r3.u32 + 60, ctx.r10.u32);
	// lwz r10,-1008(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + -1008);
	// stw r10,64(r3)
	PPC_STORE_U32(ctx.r3.u32 + 64, ctx.r10.u32);
	// lwz r10,-1012(r8)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r8.u32 + -1012);
	// stw r11,72(r3)
	PPC_STORE_U32(ctx.r3.u32 + 72, ctx.r11.u32);
	// stw r11,76(r3)
	PPC_STORE_U32(ctx.r3.u32 + 76, ctx.r11.u32);
	// stw r11,80(r3)
	PPC_STORE_U32(ctx.r3.u32 + 80, ctx.r11.u32);
	// stw r10,68(r3)
	PPC_STORE_U32(ctx.r3.u32 + 68, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8329372C"))) PPC_WEAK_FUNC(sub_8329372C);
PPC_FUNC_IMPL(__imp__sub_8329372C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83293730"))) PPC_WEAK_FUNC(sub_83293730);
PPC_FUNC_IMPL(__imp__sub_83293730) {
	PPC_FUNC_PROLOGUE();
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x8328c178
	sub_8328C178(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83293738"))) PPC_WEAK_FUNC(sub_83293738);
PPC_FUNC_IMPL(__imp__sub_83293738) {
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
	// lis r11,-31959
	ctx.r11.s64 = -2094465024;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r11,14128
	ctx.r3.s64 = ctx.r11.s64 + 14128;
	// bl 0x83294598
	ctx.lr = 0x8329375C;
	sub_83294598(ctx, base);
	// addi r3,r31,4448
	ctx.r3.s64 = ctx.r31.s64 + 4448;
	// bl 0x83293598
	ctx.lr = 0x83293764;
	sub_83293598(ctx, base);
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

__attribute__((alias("__imp__sub_83293778"))) PPC_WEAK_FUNC(sub_83293778);
PPC_FUNC_IMPL(__imp__sub_83293778) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31826
	ctx.r10.s64 = -2085748736;
	// lis r11,-32219
	ctx.r11.s64 = -2111504384;
	// addi r10,r10,-28396
	ctx.r10.s64 = ctx.r10.s64 + -28396;
	// addi r11,r11,23604
	ctx.r11.s64 = ctx.r11.s64 + 23604;
	// stw r11,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83293790"))) PPC_WEAK_FUNC(sub_83293790);
PPC_FUNC_IMPL(__imp__sub_83293790) {
	PPC_FUNC_PROLOGUE();
	// cmpwi cr6,r4,1
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 1, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// lis r11,-31826
	ctx.r11.s64 = -2085748736;
	// lis r10,-31895
	ctx.r10.s64 = -2090270720;
	// lis r9,-31895
	ctx.r9.s64 = -2090270720;
	// addi r10,r10,7792
	ctx.r10.s64 = ctx.r10.s64 + 7792;
	// addi r9,r9,7944
	ctx.r9.s64 = ctx.r9.s64 + 7944;
	// lwz r11,-28384(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -28384);
	// stw r10,5120(r3)
	PPC_STORE_U32(ctx.r3.u32 + 5120, ctx.r10.u32);
	// addi r11,r11,4448
	ctx.r11.s64 = ctx.r11.s64 + 4448;
	// stw r9,5124(r3)
	PPC_STORE_U32(ctx.r3.u32 + 5124, ctx.r9.u32);
	// stw r11,4404(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4404, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_832937C4"))) PPC_WEAK_FUNC(sub_832937C4);
PPC_FUNC_IMPL(__imp__sub_832937C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832937C8"))) PPC_WEAK_FUNC(sub_832937C8);
PPC_FUNC_IMPL(__imp__sub_832937C8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31826
	ctx.r11.s64 = -2085748736;
	// rlwinm r10,r4,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r11,r11,-28396
	ctx.r11.s64 = ctx.r11.s64 + -28396;
	// lwzx r9,r10,r11
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// lwz r9,0(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// stw r9,5092(r3)
	PPC_STORE_U32(ctx.r3.u32 + 5092, ctx.r9.u32);
	// lwzx r11,r10,r11
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// stw r11,5096(r3)
	PPC_STORE_U32(ctx.r3.u32 + 5096, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_832937F0"))) PPC_WEAK_FUNC(sub_832937F0);
PPC_FUNC_IMPL(__imp__sub_832937F0) {
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
	// lis r11,-31826
	ctx.r11.s64 = -2085748736;
	// stw r3,-28384(r11)
	PPC_STORE_U32(ctx.r11.u32 + -28384, ctx.r3.u32);
	// bl 0x83293738
	ctx.lr = 0x83293808;
	sub_83293738(ctx, base);
	// bl 0x83293778
	ctx.lr = 0x8329380C;
	sub_83293778(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8329381C"))) PPC_WEAK_FUNC(sub_8329381C);
PPC_FUNC_IMPL(__imp__sub_8329381C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83293820"))) PPC_WEAK_FUNC(sub_83293820);
PPC_FUNC_IMPL(__imp__sub_83293820) {
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
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r8,r3
	ctx.r8.u64 = ctx.r3.u64;
	// bl 0x83293790
	ctx.lr = 0x83293838;
	sub_83293790(ctx, base);
	// bl 0x832937c8
	ctx.lr = 0x8329383C;
	sub_832937C8(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8329384C"))) PPC_WEAK_FUNC(sub_8329384C);
PPC_FUNC_IMPL(__imp__sub_8329384C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83293850"))) PPC_WEAK_FUNC(sub_83293850);
PPC_FUNC_IMPL(__imp__sub_83293850) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r10,-32219
	ctx.r10.s64 = -2111504384;
	// li r9,64
	ctx.r9.s64 = 64;
	// addi r10,r10,23712
	ctx.r10.s64 = ctx.r10.s64 + 23712;
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// addi r7,r10,-64
	ctx.r7.s64 = ctx.r10.s64 + -64;
	// subf r8,r4,r10
	ctx.r8.s64 = ctx.r10.s64 - ctx.r4.s64;
	// subf r10,r4,r7
	ctx.r10.s64 = ctx.r7.s64 - ctx.r4.s64;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// lis r7,-32248
	ctx.r7.s64 = -2113404928;
	// subf r9,r4,r3
	ctx.r9.s64 = ctx.r3.s64 - ctx.r4.s64;
	// lfs f0,-12580(r7)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + -12580);
	ctx.f0.f64 = double(temp.f32);
loc_8329387C:
	// lbzx r7,r10,r11
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r10.u32 + ctx.r11.u32);
	// extsb r7,r7
	ctx.r7.s64 = ctx.r7.s8;
	// lbzx r7,r7,r3
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r7.u32 + ctx.r3.u32);
	// stb r7,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r7.u8);
	// lbzx r6,r8,r11
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r8.u32 + ctx.r11.u32);
	// std r6,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r6.u64);
	// lfd f13,-16(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// fcfid f13,f13
	ctx.f13.f64 = double(ctx.f13.s64);
	// lbzx r7,r9,r11
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r9.u32 + ctx.r11.u32);
	// extsb r7,r7
	ctx.r7.s64 = ctx.r7.s8;
	// frsp f13,f13
	ctx.f13.f64 = double(float(ctx.f13.f64));
	// rlwinm r7,r7,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// fmuls f13,f13,f0
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// stfsx f13,r7,r5
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r7.u32 + ctx.r5.u32, temp.u32);
	// bdnz 0x8329387c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8329387C;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_832938C0"))) PPC_WEAK_FUNC(sub_832938C0);
PPC_FUNC_IMPL(__imp__sub_832938C0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x833a01ac
	ctx.lr = 0x832938C8;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32219
	ctx.r11.s64 = -2111504384;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r30,r11,23616
	ctx.r30.s64 = ctx.r11.s64 + 23616;
	// li r5,8
	ctx.r5.s64 = 8;
	// addi r3,r3,4352
	ctx.r3.s64 = ctx.r3.s64 + 4352;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x83292d68
	ctx.lr = 0x832938E8;
	sub_83292D68(ctx, base);
	// addi r4,r30,160
	ctx.r4.s64 = ctx.r30.s64 + 160;
	// addi r3,r31,4576
	ctx.r3.s64 = ctx.r31.s64 + 4576;
	// li r5,32
	ctx.r5.s64 = 32;
	// bl 0x833a1390
	ctx.lr = 0x832938F8;
	sub_833A1390(ctx, base);
	// lis r11,-31822
	ctx.r11.s64 = -2085486592;
	// lis r10,-31822
	ctx.r10.s64 = -2085486592;
	// li r9,21
	ctx.r9.s64 = 21;
	// lis r8,-31822
	ctx.r8.s64 = -2085486592;
	// li r7,19
	ctx.r7.s64 = 19;
	// lis r6,-31822
	ctx.r6.s64 = -2085486592;
	// lis r5,-31822
	ctx.r5.s64 = -2085486592;
	// li r4,17
	ctx.r4.s64 = 17;
	// lis r3,-31822
	ctx.r3.s64 = -2085486592;
	// li r30,16
	ctx.r30.s64 = 16;
	// li r29,15
	ctx.r29.s64 = 15;
	// lwz r11,-936(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -936);
	// stw r9,4612(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4612, ctx.r9.u32);
	// li r9,18
	ctx.r9.s64 = 18;
	// addi r11,r11,-16
	ctx.r11.s64 = ctx.r11.s64 + -16;
	// stw r11,4608(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4608, ctx.r11.u32);
	// lwz r11,-960(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -960);
	// addi r11,r11,-32
	ctx.r11.s64 = ctx.r11.s64 + -32;
	// stw r11,4616(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4616, ctx.r11.u32);
	// stw r7,4620(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4620, ctx.r7.u32);
	// lwz r11,-924(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + -924);
	// addi r11,r11,-32
	ctx.r11.s64 = ctx.r11.s64 + -32;
	// stw r11,4624(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4624, ctx.r11.u32);
	// stw r9,4628(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4628, ctx.r9.u32);
	// lwz r11,-1004(r6)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + -1004);
	// addi r11,r11,-32
	ctx.r11.s64 = ctx.r11.s64 + -32;
	// stw r11,4632(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4632, ctx.r11.u32);
	// stw r4,4636(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4636, ctx.r4.u32);
	// lwz r11,-1000(r5)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + -1000);
	// addi r11,r11,-32
	ctx.r11.s64 = ctx.r11.s64 + -32;
	// stw r11,4640(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4640, ctx.r11.u32);
	// stw r30,4644(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4644, ctx.r30.u32);
	// lwz r11,-928(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + -928);
	// addi r11,r11,-32
	ctx.r11.s64 = ctx.r11.s64 + -32;
	// stw r29,4652(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4652, ctx.r29.u32);
	// stw r11,4648(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4648, ctx.r11.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x833a01fc
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83293990"))) PPC_WEAK_FUNC(sub_83293990);
PPC_FUNC_IMPL(__imp__sub_83293990) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31822
	ctx.r11.s64 = -2085486592;
	// lwz r10,5244(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 5244);
	// addi r11,r11,-1056
	ctx.r11.s64 = ctx.r11.s64 + -1056;
	// cmpwi cr6,r10,8
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 8, ctx.xer);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// beq cr6,0x832939d4
	if (ctx.cr6.eq) goto loc_832939D4;
	// lwz r10,5300(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 5300);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x832939bc
	if (!ctx.cr6.eq) goto loc_832939BC;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// b 0x832939c0
	goto loc_832939C0;
loc_832939BC:
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
loc_832939C0:
	// stw r10,5304(r3)
	PPC_STORE_U32(ctx.r3.u32 + 5304, ctx.r10.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// stw r10,5312(r3)
	PPC_STORE_U32(ctx.r3.u32 + 5312, ctx.r10.u32);
	// stw r11,5308(r3)
	PPC_STORE_U32(ctx.r3.u32 + 5308, ctx.r11.u32);
loc_832939D4:
	// lwz r11,5300(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 5300);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x832939f8
	if (!ctx.cr6.eq) goto loc_832939F8;
	// lis r11,-31822
	ctx.r11.s64 = -2085486592;
	// lis r10,-31822
	ctx.r10.s64 = -2085486592;
	// lwz r11,-980(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -980);
	// stw r11,5320(r3)
	PPC_STORE_U32(ctx.r3.u32 + 5320, ctx.r11.u32);
	// lwz r11,-948(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -948);
	// b 0x83293a0c
	goto loc_83293A0C;
loc_832939F8:
	// lis r11,-31822
	ctx.r11.s64 = -2085486592;
	// lis r10,-31822
	ctx.r10.s64 = -2085486592;
	// lwz r11,-932(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -932);
	// stw r11,5320(r3)
	PPC_STORE_U32(ctx.r3.u32 + 5320, ctx.r11.u32);
	// lwz r11,-956(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -956);
loc_83293A0C:
	// stw r11,5324(r3)
	PPC_STORE_U32(ctx.r3.u32 + 5324, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83293A14"))) PPC_WEAK_FUNC(sub_83293A14);
PPC_FUNC_IMPL(__imp__sub_83293A14) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83293A18"))) PPC_WEAK_FUNC(sub_83293A18);
PPC_FUNC_IMPL(__imp__sub_83293A18) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-224(r1)
	ea = -224 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r10,64
	ctx.r10.s64 = 64;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r11,0
	ctx.r11.s64 = 0;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_83293A38:
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// extsb r9,r11
	ctx.r9.s64 = ctx.r11.s8;
	// stbx r9,r11,r10
	PPC_STORE_U8(ctx.r11.u32 + ctx.r10.u32, ctx.r9.u8);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// bdnz 0x83293a38
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_83293A38;
	// addi r4,r1,144
	ctx.r4.s64 = ctx.r1.s64 + 144;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x83293640
	ctx.lr = 0x83293A58;
	sub_83293640(ctx, base);
	// lis r11,-31826
	ctx.r11.s64 = -2085748736;
	// addi r4,r31,4384
	ctx.r4.s64 = ctx.r31.s64 + 4384;
	// addi r31,r11,-28376
	ctx.r31.s64 = ctx.r11.s64 + -28376;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// bl 0x83293850
	ctx.lr = 0x83293A70;
	sub_83293850(ctx, base);
	// lis r11,-31822
	ctx.r11.s64 = -2085486592;
	// lis r10,-31822
	ctx.r10.s64 = -2085486592;
	// addi r9,r11,-1040
	ctx.r9.s64 = ctx.r11.s64 + -1040;
	// addi r10,r10,-1024
	ctx.r10.s64 = ctx.r10.s64 + -1024;
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
	// stw r4,4(r9)
	PPC_STORE_U32(ctx.r9.u32 + 4, ctx.r4.u32);
	// stw r31,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r31.u32);
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83293AA0"))) PPC_WEAK_FUNC(sub_83293AA0);
PPC_FUNC_IMPL(__imp__sub_83293AA0) {
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
	// bl 0x83293a18
	ctx.lr = 0x83293AB8;
	sub_83293A18(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x832938c0
	ctx.lr = 0x83293AC0;
	sub_832938C0(ctx, base);
	// bl 0x83299408
	ctx.lr = 0x83293AC4;
	sub_83299408(ctx, base);
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

__attribute__((alias("__imp__sub_83293AD8"))) PPC_WEAK_FUNC(sub_83293AD8);
PPC_FUNC_IMPL(__imp__sub_83293AD8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lwz r9,4772(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4772);
	// li r10,8
	ctx.r10.s64 = 8;
	// addi r11,r3,2816
	ctx.r11.s64 = ctx.r3.s64 + 2816;
	// subfic r9,r9,0
	ctx.xer.ca = ctx.r9.u32 <= 0;
	ctx.r9.s64 = 0 - ctx.r9.s64;
	// subfe r9,r9,r9
	temp.u8 = (~ctx.r9.u32 + ctx.r9.u32 < ~ctx.r9.u32) | (~ctx.r9.u32 + ctx.r9.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r9.u64 = ~ctx.r9.u64 + ctx.r9.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// andi. r9,r9,5
	ctx.r9.u64 = ctx.r9.u64 & 5;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// addi r8,r9,-1
	ctx.r8.s64 = ctx.r9.s64 + -1;
	// addi r9,r3,4692
	ctx.r9.s64 = ctx.r3.s64 + 4692;
	// stw r8,4692(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4692, ctx.r8.u32);
	// stw r11,4696(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4696, ctx.r11.u32);
	// stw r11,4704(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4704, ctx.r11.u32);
	// stw r11,4712(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4712, ctx.r11.u32);
	// stw r11,4720(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4720, ctx.r11.u32);
	// stw r11,4728(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4728, ctx.r11.u32);
	// stw r11,4736(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4736, ctx.r11.u32);
	// stw r10,4700(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4700, ctx.r10.u32);
	// stw r10,4708(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4708, ctx.r10.u32);
	// stw r10,4716(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4716, ctx.r10.u32);
	// stw r10,4724(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4724, ctx.r10.u32);
	// stw r10,4732(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4732, ctx.r10.u32);
	// stw r10,4740(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4740, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83293B30"))) PPC_WEAK_FUNC(sub_83293B30);
PPC_FUNC_IMPL(__imp__sub_83293B30) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lwz r10,4772(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4772);
	// addi r11,r3,4640
	ctx.r11.s64 = ctx.r3.s64 + 4640;
	// subfic r11,r10,0
	ctx.xer.ca = ctx.r10.u32 <= 0;
	ctx.r11.s64 = 0 - ctx.r10.s64;
	// subfe r11,r11,r11
	temp.u8 = (~ctx.r11.u32 + ctx.r11.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r11.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// andi. r11,r11,5
	ctx.r11.u64 = ctx.r11.u64 & 5;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stw r11,4640(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4640, ctx.r11.u32);
	// lha r11,5004(r3)
	ctx.r11.s64 = int16_t(PPC_LOAD_U16(ctx.r3.u32 + 5004));
	// stw r11,4648(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4648, ctx.r11.u32);
	// stw r11,4656(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4656, ctx.r11.u32);
	// lha r11,5006(r3)
	ctx.r11.s64 = int16_t(PPC_LOAD_U16(ctx.r3.u32 + 5006));
	// stw r11,4664(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4664, ctx.r11.u32);
	// stw r11,4672(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4672, ctx.r11.u32);
	// stw r11,4680(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4680, ctx.r11.u32);
	// stw r11,4688(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4688, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83293B70"))) PPC_WEAK_FUNC(sub_83293B70);
PPC_FUNC_IMPL(__imp__sub_83293B70) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lwz r11,4772(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4772);
	// subfic r11,r11,0
	ctx.xer.ca = ctx.r11.u32 <= 0;
	ctx.r11.s64 = 0 - ctx.r11.s64;
	// subfe r11,r11,r11
	temp.u8 = (~ctx.r11.u32 + ctx.r11.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r11.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// andi. r11,r11,5
	ctx.r11.u64 = ctx.r11.u64 & 5;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stw r11,4692(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4692, ctx.r11.u32);
	// stw r11,4640(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4640, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83293B90"))) PPC_WEAK_FUNC(sub_83293B90);
PPC_FUNC_IMPL(__imp__sub_83293B90) {
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
	// addi r31,r3,4556
	ctx.r31.s64 = ctx.r3.s64 + 4556;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83299428
	ctx.lr = 0x83293BB4;
	sub_83299428(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83299410
	ctx.lr = 0x83293BBC;
	sub_83299410(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x83293ad8
	ctx.lr = 0x83293BC4;
	sub_83293AD8(ctx, base);
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

__attribute__((alias("__imp__sub_83293BDC"))) PPC_WEAK_FUNC(sub_83293BDC);
PPC_FUNC_IMPL(__imp__sub_83293BDC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83293BE0"))) PPC_WEAK_FUNC(sub_83293BE0);
PPC_FUNC_IMPL(__imp__sub_83293BE0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x833a01a4
	ctx.lr = 0x83293BE8;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31824
	ctx.r11.s64 = -2085617664;
	// li r28,0
	ctx.r28.s64 = 0;
	// addi r29,r11,580
	ctx.r29.s64 = ctx.r11.s64 + 580;
	// lwz r11,8(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x83293c64
	if (!ctx.cr6.gt) goto loc_83293C64;
	// lis r10,-31826
	ctx.r10.s64 = -2085748736;
	// li r30,0
	ctx.r30.s64 = 0;
	// li r31,0
	ctx.r31.s64 = 0;
	// addi r27,r10,-28120
	ctx.r27.s64 = ctx.r10.s64 + -28120;
loc_83293C14:
	// lwz r10,0(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// lwzx r3,r30,r10
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r10.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x83293c50
	if (ctx.cr6.eq) goto loc_83293C50;
	// addi r11,r27,4
	ctx.r11.s64 = ctx.r27.s64 + 4;
	// lis r10,23130
	ctx.r10.s64 = 1515847680;
	// ori r10,r10,23130
	ctx.r10.u64 = ctx.r10.u64 | 23130;
	// lwzx r4,r31,r11
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r11.u32);
	// cmpw cr6,r4,r10
	ctx.cr6.compare<int32_t>(ctx.r4.s32, ctx.r10.s32, ctx.xer);
	// bne cr6,0x83293c48
	if (!ctx.cr6.eq) goto loc_83293C48;
	// addi r11,r27,92
	ctx.r11.s64 = ctx.r27.s64 + 92;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// lwzx r4,r31,r11
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r11.u32);
loc_83293C48:
	// bl 0x832f79c0
	ctx.lr = 0x83293C4C;
	sub_832F79C0(ctx, base);
	// lwz r11,8(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
loc_83293C50:
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// addi r30,r30,128
	ctx.r30.s64 = ctx.r30.s64 + 128;
	// addi r31,r31,12
	ctx.r31.s64 = ctx.r31.s64 + 12;
	// cmpw cr6,r28,r11
	ctx.cr6.compare<int32_t>(ctx.r28.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x83293c14
	if (ctx.cr6.lt) goto loc_83293C14;
loc_83293C64:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x833a01f4
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83293C6C"))) PPC_WEAK_FUNC(sub_83293C6C);
PPC_FUNC_IMPL(__imp__sub_83293C6C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83293C70"))) PPC_WEAK_FUNC(sub_83293C70);
PPC_FUNC_IMPL(__imp__sub_83293C70) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31824
	ctx.r11.s64 = -2085617664;
	// lwz r3,596(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 596);
	// b 0x832f40c0
	sub_832F40C0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83293C7C"))) PPC_WEAK_FUNC(sub_83293C7C);
PPC_FUNC_IMPL(__imp__sub_83293C7C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83293C80"))) PPC_WEAK_FUNC(sub_83293C80);
PPC_FUNC_IMPL(__imp__sub_83293C80) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31824
	ctx.r11.s64 = -2085617664;
	// lwz r3,596(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 596);
	// b 0x832f4158
	sub_832F4158(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83293C8C"))) PPC_WEAK_FUNC(sub_83293C8C);
PPC_FUNC_IMPL(__imp__sub_83293C8C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83293C90"))) PPC_WEAK_FUNC(sub_83293C90);
PPC_FUNC_IMPL(__imp__sub_83293C90) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x833a019c
	ctx.lr = 0x83293C98;
	__savegprlr_25(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// mr r26,r4
	ctx.r26.u64 = ctx.r4.u64;
	// cmplw cr6,r11,r4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r4.u32, ctx.xer);
	// beq cr6,0x83293d48
	if (ctx.cr6.eq) goto loc_83293D48;
	// stw r4,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r4.u32);
	// bl 0x8310f528
	ctx.lr = 0x83293CB4;
	sub_8310F528(ctx, base);
	// lis r11,-31824
	ctx.r11.s64 = -2085617664;
	// addi r25,r3,-1
	ctx.r25.s64 = ctx.r3.s64 + -1;
	// addi r30,r11,580
	ctx.r30.s64 = ctx.r11.s64 + 580;
	// li r27,0
	ctx.r27.s64 = 0;
	// li r10,0
	ctx.r10.s64 = 0;
	// li r28,0
	ctx.r28.s64 = 0;
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x83293d48
	if (!ctx.cr6.gt) goto loc_83293D48;
	// lwz r9,0(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// li r29,0
	ctx.r29.s64 = 0;
loc_83293CE0:
	// mr r31,r10
	ctx.r31.u64 = ctx.r10.u64;
	// cmplwi cr6,r10,32
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 32, ctx.xer);
	// bge cr6,0x83293d2c
	if (!ctx.cr6.lt) goto loc_83293D2C;
loc_83293CEC:
	// li r10,1
	ctx.r10.s64 = 1;
	// slw r10,r10,r31
	ctx.r10.u64 = ctx.r31.u8 & 0x20 ? 0 : (ctx.r10.u32 << (ctx.r31.u8 & 0x3F));
	// and. r10,r10,r26
	ctx.r10.u64 = ctx.r10.u64 & ctx.r26.u64;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x83293d04
	if (ctx.cr0.eq) goto loc_83293D04;
	// cmpw cr6,r27,r25
	ctx.cr6.compare<int32_t>(ctx.r27.s32, ctx.r25.s32, ctx.xer);
	// blt cr6,0x83293d14
	if (ctx.cr6.lt) goto loc_83293D14;
loc_83293D04:
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// cmplwi cr6,r31,32
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 32, ctx.xer);
	// blt cr6,0x83293cec
	if (ctx.cr6.lt) goto loc_83293CEC;
	// b 0x83293d2c
	goto loc_83293D2C;
loc_83293D14:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwzx r3,r29,r9
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + ctx.r9.u32);
	// addi r27,r27,1
	ctx.r27.s64 = ctx.r27.s64 + 1;
	// bl 0x832f7a48
	ctx.lr = 0x83293D24;
	sub_832F7A48(ctx, base);
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// lwz r9,0(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
loc_83293D2C:
	// add r8,r29,r9
	ctx.r8.u64 = ctx.r29.u64 + ctx.r9.u64;
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// addi r10,r31,1
	ctx.r10.s64 = ctx.r31.s64 + 1;
	// addi r29,r29,128
	ctx.r29.s64 = ctx.r29.s64 + 128;
	// cmpw cr6,r28,r11
	ctx.cr6.compare<int32_t>(ctx.r28.s32, ctx.r11.s32, ctx.xer);
	// stw r31,8(r8)
	PPC_STORE_U32(ctx.r8.u32 + 8, ctx.r31.u32);
	// blt cr6,0x83293ce0
	if (ctx.cr6.lt) goto loc_83293CE0;
loc_83293D48:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x833a01ec
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83293D50"))) PPC_WEAK_FUNC(sub_83293D50);
PPC_FUNC_IMPL(__imp__sub_83293D50) {
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
	// li r11,1
	ctx.r11.s64 = 1;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r11,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r11.u32);
	// bl 0x83293c70
	ctx.lr = 0x83293D70;
	sub_83293C70(ctx, base);
	// li r11,150
	ctx.r11.s64 = 150;
	// stw r11,128(r31)
	PPC_STORE_U32(ctx.r31.u32 + 128, ctx.r11.u32);
	// bl 0x83293c80
	ctx.lr = 0x83293D7C;
	sub_83293C80(ctx, base);
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

__attribute__((alias("__imp__sub_83293D90"))) PPC_WEAK_FUNC(sub_83293D90);
PPC_FUNC_IMPL(__imp__sub_83293D90) {
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
	// lis r10,-31824
	ctx.r10.s64 = -2085617664;
	// li r11,0
	ctx.r11.s64 = 0;
	// lwz r31,592(r10)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r10.u32 + 592);
loc_83293DAC:
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x83293dc8
	if (ctx.cr6.eq) goto loc_83293DC8;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r31,r31,19840
	ctx.r31.s64 = ctx.r31.s64 + 19840;
	// cmpwi cr6,r11,8
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 8, ctx.xer);
	// blt cr6,0x83293dac
	if (ctx.cr6.lt) goto loc_83293DAC;
loc_83293DC8:
	// cmpwi cr6,r11,8
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 8, ctx.xer);
	// blt cr6,0x83293dd8
	if (ctx.cr6.lt) goto loc_83293DD8;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x83293df4
	goto loc_83293DF4;
loc_83293DD8:
	// li r5,19840
	ctx.r5.s64 = 19840;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x833a2b30
	ctx.lr = 0x83293DE8;
	sub_833A2B30(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
loc_83293DF4:
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

__attribute__((alias("__imp__sub_83293E08"))) PPC_WEAK_FUNC(sub_83293E08);
PPC_FUNC_IMPL(__imp__sub_83293E08) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x833a01ac
	ctx.lr = 0x83293E10;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// bl 0x832f7d18
	ctx.lr = 0x83293E20;
	sub_832F7D18(ctx, base);
	// addi r31,r30,384
	ctx.r31.s64 = ctx.r30.s64 + 384;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r5,72
	ctx.r5.s64 = 72;
	// bl 0x833a1390
	ctx.lr = 0x83293E34;
	sub_833A1390(ctx, base);
	// addi r3,r30,512
	ctx.r3.s64 = ctx.r30.s64 + 512;
	// li r5,72
	ctx.r5.s64 = 72;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x833a1390
	ctx.lr = 0x83293E44;
	sub_833A1390(ctx, base);
	// bl 0x832f7d58
	ctx.lr = 0x83293E48;
	sub_832F7D58(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x833a01fc
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83293E54"))) PPC_WEAK_FUNC(sub_83293E54);
PPC_FUNC_IMPL(__imp__sub_83293E54) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83293E58"))) PPC_WEAK_FUNC(sub_83293E58);
PPC_FUNC_IMPL(__imp__sub_83293E58) {
	PPC_FUNC_PROLOGUE();
	// lwz r9,260(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 260);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// cmpwi cr6,r9,150
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 150, ctx.xer);
	// blt cr6,0x83293e70
	if (ctx.cr6.lt) goto loc_83293E70;
	// li r3,-1
	ctx.r3.s64 = -1;
	// blr 
	return;
loc_83293E70:
	// addi r8,r9,5
	ctx.r8.s64 = ctx.r9.s64 + 5;
	// rlwinm r11,r9,7,0,24
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 7) & 0xFFFFFF80;
	// rlwinm r7,r8,7,0,24
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 7) & 0xFFFFFF80;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// li r3,0
	ctx.r3.s64 = 0;
	// stwx r4,r7,r10
	PPC_STORE_U32(ctx.r7.u32 + ctx.r10.u32, ctx.r4.u32);
	// stw r8,660(r11)
	PPC_STORE_U32(ctx.r11.u32 + 660, ctx.r8.u32);
	// stw r8,664(r11)
	PPC_STORE_U32(ctx.r11.u32 + 664, ctx.r8.u32);
	// stw r8,668(r11)
	PPC_STORE_U32(ctx.r11.u32 + 668, ctx.r8.u32);
	// stw r8,672(r11)
	PPC_STORE_U32(ctx.r11.u32 + 672, ctx.r8.u32);
	// stw r9,260(r10)
	PPC_STORE_U32(ctx.r10.u32 + 260, ctx.r9.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83293EA8"))) PPC_WEAK_FUNC(sub_83293EA8);
PPC_FUNC_IMPL(__imp__sub_83293EA8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x833a01a8
	ctx.lr = 0x83293EB0;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// bl 0x83293c70
	ctx.lr = 0x83293EC4;
	sub_83293C70(ctx, base);
	// lwz r30,128(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 128);
	// lwz r11,256(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 256);
	// cmpw cr6,r30,r11
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r11.s32, ctx.xer);
	// bge cr6,0x83293f1c
	if (!ctx.cr6.lt) goto loc_83293F1C;
	// lwz r11,260(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 260);
	// cmpw cr6,r30,r11
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r11.s32, ctx.xer);
	// bge cr6,0x83293f1c
	if (!ctx.cr6.lt) goto loc_83293F1C;
	// stw r30,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r30.u32);
	// addi r4,r31,512
	ctx.r4.s64 = ctx.r31.s64 + 512;
	// li r5,72
	ctx.r5.s64 = 72;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x833a1390
	ctx.lr = 0x83293EF4;
	sub_833A1390(ctx, base);
	// addi r11,r30,5
	ctx.r11.s64 = ctx.r30.s64 + 5;
	// li r4,1
	ctx.r4.s64 = 1;
	// rlwinm r11,r11,7,0,24
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 7) & 0xFFFFFF80;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwzx r5,r11,r31
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r31.u32);
	// bl 0x8328a928
	ctx.lr = 0x83293F0C;
	sub_8328A928(ctx, base);
	// addi r11,r30,1
	ctx.r11.s64 = ctx.r30.s64 + 1;
	// li r30,0
	ctx.r30.s64 = 0;
	// stw r11,128(r31)
	PPC_STORE_U32(ctx.r31.u32 + 128, ctx.r11.u32);
	// b 0x83293f20
	goto loc_83293F20;
loc_83293F1C:
	// li r30,1
	ctx.r30.s64 = 1;
loc_83293F20:
	// bl 0x83293c80
	ctx.lr = 0x83293F24;
	sub_83293C80(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x833a01f8
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83293F30"))) PPC_WEAK_FUNC(sub_83293F30);
PPC_FUNC_IMPL(__imp__sub_83293F30) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x833a01a8
	ctx.lr = 0x83293F38;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31824
	ctx.r11.s64 = -2085617664;
	// addi r31,r11,576
	ctx.r31.s64 = ctx.r11.s64 + 576;
	// lwz r11,24(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r11.u32);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x83294044
	if (!ctx.cr6.eq) goto loc_83294044;
	// bl 0x8310f528
	ctx.lr = 0x83293F5C;
	sub_8310F528(ctx, base);
	// cmpwi cr6,r3,1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 1, ctx.xer);
	// ble cr6,0x83294044
	if (!ctx.cr6.gt) goto loc_83294044;
	// lis r11,-31826
	ctx.r11.s64 = -2085748736;
	// li r4,32
	ctx.r4.s64 = 32;
	// addi r30,r11,-27200
	ctx.r30.s64 = ctx.r11.s64 + -27200;
	// addi r3,r30,-860
	ctx.r3.s64 = ctx.r30.s64 + -860;
	// bl 0x832f3f50
	ctx.lr = 0x83293F78;
	sub_832F3F50(ctx, base);
	// addi r11,r30,127
	ctx.r11.s64 = ctx.r30.s64 + 127;
	// lis r5,2
	ctx.r5.s64 = 131072;
	// stw r3,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r3.u32);
	// rlwinm r11,r11,0,0,24
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFF80;
	// li r4,0
	ctx.r4.s64 = 0;
	// ori r5,r5,27648
	ctx.r5.u64 = ctx.r5.u64 | 27648;
	// stw r11,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r11.u32);
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// bl 0x833a2b30
	ctx.lr = 0x83293F9C;
	sub_833A2B30(ctx, base);
	// lis r11,-31826
	ctx.r11.s64 = -2085748736;
	// li r5,640
	ctx.r5.s64 = 640;
	// addi r29,r11,-28028
	ctx.r29.s64 = ctx.r11.s64 + -28028;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r11,r29,60
	ctx.r11.s64 = ctx.r29.s64 + 60;
	// addi r11,r11,127
	ctx.r11.s64 = ctx.r11.s64 + 127;
	// rlwinm r3,r11,0,0,24
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFF80;
	// stw r3,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r3.u32);
	// bl 0x833a2b30
	ctx.lr = 0x83293FC0;
	sub_833A2B30(ctx, base);
	// li r11,5
	ctx.r11.s64 = 5;
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// bl 0x832f7390
	ctx.lr = 0x83293FCC;
	sub_832F7390(ctx, base);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// li r28,0
	ctx.r28.s64 = 0;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// ble cr6,0x83294044
	if (!ctx.cr6.gt) goto loc_83294044;
	// li r30,0
	ctx.r30.s64 = 0;
	// addi r29,r29,-8
	ctx.r29.s64 = ctx.r29.s64 + -8;
loc_83293FE8:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// li r4,88
	ctx.r4.s64 = 88;
	// add r11,r30,r11
	ctx.r11.u64 = ctx.r30.u64 + ctx.r11.u64;
	// addi r3,r11,12
	ctx.r3.s64 = ctx.r11.s64 + 12;
	// bl 0x832f7ac8
	ctx.lr = 0x83293FFC;
	sub_832F7AC8(ctx, base);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// stwx r3,r30,r11
	PPC_STORE_U32(ctx.r30.u32 + ctx.r11.u32, ctx.r3.u32);
	// beq 0x83294034
	if (ctx.cr0.eq) goto loc_83294034;
	// li r11,-1
	ctx.r11.s64 = -1;
	// stw r11,8(r29)
	PPC_STORE_U32(ctx.r29.u32 + 8, ctx.r11.u32);
	// bl 0x832f7940
	ctx.lr = 0x83294018;
	sub_832F7940(ctx, base);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// stwu r3,12(r29)
	ea = 12 + ctx.r29.u32;
	PPC_STORE_U32(ea, ctx.r3.u32);
	ctx.r29.u32 = ea;
	// addi r30,r30,128
	ctx.r30.s64 = ctx.r30.s64 + 128;
	// cmpw cr6,r28,r11
	ctx.cr6.compare<int32_t>(ctx.r28.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x83293fe8
	if (ctx.cr6.lt) goto loc_83293FE8;
	// b 0x83294044
	goto loc_83294044;
loc_83294034:
	// lis r4,-253
	ctx.r4.s64 = -16580608;
	// li r3,0
	ctx.r3.s64 = 0;
	// ori r4,r4,1538
	ctx.r4.u64 = ctx.r4.u64 | 1538;
	// bl 0x8328c178
	ctx.lr = 0x83294044;
	sub_8328C178(ctx, base);
loc_83294044:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x833a01f8
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8329404C"))) PPC_WEAK_FUNC(sub_8329404C);
PPC_FUNC_IMPL(__imp__sub_8329404C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83294050"))) PPC_WEAK_FUNC(sub_83294050);
PPC_FUNC_IMPL(__imp__sub_83294050) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x833a01ac
	ctx.lr = 0x83294058;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31824
	ctx.r11.s64 = -2085617664;
	// addi r31,r11,580
	ctx.r31.s64 = ctx.r11.s64 + 580;
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r11.u32);
	// bne 0x832940dc
	if (!ctx.cr0.eq) goto loc_832940DC;
	// bl 0x8310f528
	ctx.lr = 0x83294078;
	sub_8310F528(ctx, base);
	// cmpwi cr6,r3,1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 1, ctx.xer);
	// ble cr6,0x832940ec
	if (!ctx.cr6.gt) goto loc_832940EC;
	// lwz r3,16(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x83294098
	if (ctx.cr6.eq) goto loc_83294098;
	// bl 0x832f4030
	ctx.lr = 0x83294090;
	sub_832F4030(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r11.u32);
loc_83294098:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// addic. r29,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r29.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// blt 0x832940d4
	if (ctx.cr0.lt) goto loc_832940D4;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// rlwinm r30,r29,7,0,24
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 7) & 0xFFFFFF80;
loc_832940AC:
	// lwzx r3,r30,r11
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r11.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x832940c8
	if (ctx.cr6.eq) goto loc_832940C8;
	// bl 0x832f7b50
	ctx.lr = 0x832940BC;
	sub_832F7B50(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r10,0
	ctx.r10.s64 = 0;
	// stwx r10,r30,r11
	PPC_STORE_U32(ctx.r30.u32 + ctx.r11.u32, ctx.r10.u32);
loc_832940C8:
	// addic. r29,r29,-1
	ctx.xer.ca = ctx.r29.u32 > 0;
	ctx.r29.s64 = ctx.r29.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// addi r30,r30,-128
	ctx.r30.s64 = ctx.r30.s64 + -128;
	// bge 0x832940ac
	if (!ctx.cr0.lt) goto loc_832940AC;
loc_832940D4:
	// bl 0x832f73f0
	ctx.lr = 0x832940D8;
	sub_832F73F0(ctx, base);
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
loc_832940DC:
	// rlwinm r10,r11,1,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0x1;
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// and r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 & ctx.r11.u64;
	// stw r11,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r11.u32);
loc_832940EC:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x833a01fc
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832940F4"))) PPC_WEAK_FUNC(sub_832940F4);
PPC_FUNC_IMPL(__imp__sub_832940F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832940F8"))) PPC_WEAK_FUNC(sub_832940F8);
PPC_FUNC_IMPL(__imp__sub_832940F8) {
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
	// bl 0x8310f528
	ctx.lr = 0x83294108;
	sub_8310F528(ctx, base);
	// cmpwi cr6,r3,1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 1, ctx.xer);
	// bgt cr6,0x83294118
	if (ctx.cr6.gt) goto loc_83294118;
loc_83294110:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x83294140
	goto loc_83294140;
loc_83294118:
	// bl 0x83293d90
	ctx.lr = 0x8329411C;
	sub_83293D90(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne 0x83294134
	if (!ctx.cr0.eq) goto loc_83294134;
	// lis r4,-253
	ctx.r4.s64 = -16580608;
	// ori r4,r4,1537
	ctx.r4.u64 = ctx.r4.u64 | 1537;
	// bl 0x8328c178
	ctx.lr = 0x83294130;
	sub_8328C178(ctx, base);
	// b 0x83294110
	goto loc_83294110;
loc_83294134:
	// lis r11,23130
	ctx.r11.s64 = 1515847680;
	// ori r11,r11,23130
	ctx.r11.u64 = ctx.r11.u64 | 23130;
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
loc_83294140:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83294150"))) PPC_WEAK_FUNC(sub_83294150);
PPC_FUNC_IMPL(__imp__sub_83294150) {
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
	// stwu r1,-224(r1)
	ea = -224 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r31,0(r3)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r30,4(r3)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// b 0x832941e4
	goto loc_832941E4;
loc_83294170:
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83293ea8
	ctx.lr = 0x83294180;
	sub_83293EA8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x832941f0
	if (!ctx.cr0.eq) goto loc_832941F0;
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x832941A4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r10,104(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// rlwinm r11,r11,7,0,24
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 7) & 0xFFFFFF80;
	// lwz r9,96(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// stw r10,660(r11)
	PPC_STORE_U32(ctx.r11.u32 + 660, ctx.r10.u32);
	// lwz r10,100(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// stw r10,664(r11)
	PPC_STORE_U32(ctx.r11.u32 + 664, ctx.r10.u32);
	// lwz r10,108(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	// stw r10,668(r11)
	PPC_STORE_U32(ctx.r11.u32 + 668, ctx.r10.u32);
	// lwz r10,112(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// stw r10,672(r11)
	PPC_STORE_U32(ctx.r11.u32 + 672, ctx.r10.u32);
	// lwz r11,116(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x832941f0
	if (!ctx.cr6.eq) goto loc_832941F0;
loc_832941E4:
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x83294170
	if (ctx.cr6.eq) goto loc_83294170;
loc_832941F0:
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
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

__attribute__((alias("__imp__sub_83294208"))) PPC_WEAK_FUNC(sub_83294208);
PPC_FUNC_IMPL(__imp__sub_83294208) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x833a0188
	ctx.lr = 0x83294210;
	__savegprlr_20(ctx, base);
	// stwu r1,-256(r1)
	ea = -256 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31824
	ctx.r11.s64 = -2085617664;
	// li r24,0
	ctx.r24.s64 = 0;
	// addi r23,r11,580
	ctx.r23.s64 = ctx.r11.s64 + 580;
	// stw r24,24(r6)
	PPC_STORE_U32(ctx.r6.u32 + 24, ctx.r24.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r24,28(r6)
	PPC_STORE_U32(ctx.r6.u32 + 28, ctx.r24.u32);
	// mr r20,r4
	ctx.r20.u64 = ctx.r4.u64;
	// stw r24,20(r6)
	PPC_STORE_U32(ctx.r6.u32 + 20, ctx.r24.u32);
	// mr r30,r6
	ctx.r30.u64 = ctx.r6.u64;
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// lwz r25,-4(r23)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r23.u32 + -4);
	// beq cr6,0x832944d8
	if (ctx.cr6.eq) goto loc_832944D8;
	// lis r10,23130
	ctx.r10.s64 = 1515847680;
	// ori r10,r10,23130
	ctx.r10.u64 = ctx.r10.u64 | 23130;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x832944d8
	if (ctx.cr6.eq) goto loc_832944D8;
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,20(r6)
	PPC_STORE_U32(ctx.r6.u32 + 20, ctx.r11.u32);
	// bl 0x83293be0
	ctx.lr = 0x83294264;
	sub_83293BE0(ctx, base);
	// lwz r10,4(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// li r11,150
	ctx.r11.s64 = 150;
	// stw r24,128(r31)
	PPC_STORE_U32(ctx.r31.u32 + 128, ctx.r24.u32);
	// mr r4,r20
	ctx.r4.u64 = ctx.r20.u64;
	// stw r11,256(r31)
	PPC_STORE_U32(ctx.r31.u32 + 256, ctx.r11.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r24,260(r31)
	PPC_STORE_U32(ctx.r31.u32 + 260, ctx.r24.u32);
	// stw r10,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r10.u32);
	// bl 0x83293e08
	ctx.lr = 0x83294288;
	sub_83293E08(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r22,r3
	ctx.r22.u64 = ctx.r3.u64;
	// lwz r11,36(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x832942A0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// sth r24,32(r30)
	PPC_STORE_U16(ctx.r30.u32 + 32, ctx.r24.u16);
	// mr r21,r3
	ctx.r21.u64 = ctx.r3.u64;
	// mr r29,r24
	ctx.r29.u64 = ctx.r24.u64;
	// b 0x83294320
	goto loc_83294320;
loc_832942B0:
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// bl 0x8328a770
	ctx.lr = 0x832942BC;
	sub_8328A770(ctx, base);
	// clrlwi. r11,r3,31
	ctx.r11.u64 = ctx.r3.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8329433c
	if (ctx.cr0.eq) goto loc_8329433C;
	// lhz r10,32(r30)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r30.u32 + 32);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmplw cr6,r29,r11
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r11.u32, ctx.xer);
	// sth r10,32(r30)
	PPC_STORE_U16(ctx.r30.u32 + 32, ctx.r10.u16);
	// beq cr6,0x83294310
	if (ctx.cr6.eq) goto loc_83294310;
	// lwz r10,0(r22)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r22.u32 + 0);
	// mr r29,r11
	ctx.r29.u64 = ctx.r11.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// lwz r11,36(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 36);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x832942F8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// subf r4,r11,r21
	ctx.r4.s64 = ctx.r21.s64 - ctx.r11.s64;
	// bl 0x83293e58
	ctx.lr = 0x83294308;
	sub_83293E58(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x83294330
	if (!ctx.cr0.eq) goto loc_83294330;
loc_83294310:
	// li r5,4
	ctx.r5.s64 = 4;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// bl 0x8328a8b8
	ctx.lr = 0x83294320;
	sub_8328A8B8(ctx, base);
loc_83294320:
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x832942b0
	if (ctx.cr6.eq) goto loc_832942B0;
	// b 0x832944d8
	goto loc_832944D8;
loc_83294330:
	// lwz r11,24(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 24);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,24(r30)
	PPC_STORE_U32(ctx.r30.u32 + 24, ctx.r11.u32);
loc_8329433C:
	// lwz r10,260(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 260);
	// lwz r11,4(r23)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r23.u32 + 4);
	// cmpw cr6,r11,r25
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r25.s32, ctx.xer);
	// stw r10,256(r31)
	PPC_STORE_U32(ctx.r31.u32 + 256, ctx.r10.u32);
	// bge cr6,0x83294354
	if (!ctx.cr6.lt) goto loc_83294354;
	// mr r25,r11
	ctx.r25.u64 = ctx.r11.u64;
loc_83294354:
	// mr r26,r24
	ctx.r26.u64 = ctx.r24.u64;
	// cmpwi cr6,r25,0
	ctx.cr6.compare<int32_t>(ctx.r25.s32, 0, ctx.xer);
	// ble cr6,0x832943e8
	if (!ctx.cr6.gt) goto loc_832943E8;
	// lwz r11,0(r23)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r23.u32 + 0);
	// mr r28,r24
	ctx.r28.u64 = ctx.r24.u64;
	// addi r29,r1,108
	ctx.r29.s64 = ctx.r1.s64 + 108;
loc_8329436C:
	// add r10,r28,r11
	ctx.r10.u64 = ctx.r28.u64 + ctx.r11.u64;
	// lwz r9,8(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// cmplwi cr6,r9,32
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 32, ctx.xer);
	// bge cr6,0x832943c8
	if (!ctx.cr6.lt) goto loc_832943C8;
	// stw r31,-4(r29)
	PPC_STORE_U32(ctx.r29.u32 + -4, ctx.r31.u32);
	// addi r4,r26,1
	ctx.r4.s64 = ctx.r26.s64 + 1;
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// addi r27,r29,-4
	ctx.r27.s64 = ctx.r29.s64 + -4;
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8329439C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r3,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r3.u32);
	// lwz r11,0(r23)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r23.u32 + 0);
	// lis r10,-31959
	ctx.r10.s64 = -2094465024;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// addi r4,r10,16720
	ctx.r4.s64 = ctx.r10.s64 + 16720;
	// lwzx r3,r28,r11
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + ctx.r11.u32);
	// bl 0x832f76f8
	ctx.lr = 0x832943B8;
	sub_832F76F8(ctx, base);
	// lwz r11,0(r23)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r23.u32 + 0);
	// add r10,r28,r11
	ctx.r10.u64 = ctx.r28.u64 + ctx.r11.u64;
	// stw r3,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r3.u32);
	// b 0x832943d4
	goto loc_832943D4;
loc_832943C8:
	// li r9,-1
	ctx.r9.s64 = -1;
	// stw r24,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r24.u32);
	// stw r9,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r9.u32);
loc_832943D4:
	// addi r26,r26,1
	ctx.r26.s64 = ctx.r26.s64 + 1;
	// addi r29,r29,8
	ctx.r29.s64 = ctx.r29.s64 + 8;
	// addi r28,r28,128
	ctx.r28.s64 = ctx.r28.s64 + 128;
	// cmpw cr6,r26,r25
	ctx.cr6.compare<int32_t>(ctx.r26.s32, ctx.r25.s32, ctx.xer);
	// blt cr6,0x8329436c
	if (ctx.cr6.lt) goto loc_8329436C;
loc_832943E8:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// stw r31,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r31.u32);
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// bl 0x83294150
	ctx.lr = 0x832943FC;
	sub_83294150(ctx, base);
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x83294434
	if (ctx.cr6.eq) goto loc_83294434;
	// cmpwi cr6,r25,0
	ctx.cr6.compare<int32_t>(ctx.r25.s32, 0, ctx.xer);
	// ble cr6,0x8329446c
	if (!ctx.cr6.gt) goto loc_8329446C;
	// addi r28,r1,100
	ctx.r28.s64 = ctx.r1.s64 + 100;
	// mr r29,r25
	ctx.r29.u64 = ctx.r25.u64;
loc_83294418:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwzu r3,8(r28)
	ea = 8 + ctx.r28.u32;
	ctx.r3.u64 = PPC_LOAD_U32(ea);
	ctx.r28.u32 = ea;
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8329442C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addic. r29,r29,-1
	ctx.xer.ca = ctx.r29.u32 > 0;
	ctx.r29.s64 = ctx.r29.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// bne 0x83294418
	if (!ctx.cr0.eq) goto loc_83294418;
loc_83294434:
	// cmpwi cr6,r25,0
	ctx.cr6.compare<int32_t>(ctx.r25.s32, 0, ctx.xer);
	// ble cr6,0x8329446c
	if (!ctx.cr6.gt) goto loc_8329446C;
	// mr r29,r24
	ctx.r29.u64 = ctx.r24.u64;
	// mr r28,r25
	ctx.r28.u64 = ctx.r25.u64;
loc_83294444:
	// lwz r11,0(r23)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r23.u32 + 0);
	// add r11,r29,r11
	ctx.r11.u64 = ctx.r29.u64 + ctx.r11.u64;
	// lwz r4,4(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// blt cr6,0x83294460
	if (ctx.cr6.lt) goto loc_83294460;
	// lwz r3,0(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// bl 0x832f7b10
	ctx.lr = 0x83294460;
	sub_832F7B10(ctx, base);
loc_83294460:
	// addic. r28,r28,-1
	ctx.xer.ca = ctx.r28.u32 > 0;
	ctx.r28.s64 = ctx.r28.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// addi r29,r29,128
	ctx.r29.s64 = ctx.r29.s64 + 128;
	// bne 0x83294444
	if (!ctx.cr0.eq) goto loc_83294444;
loc_8329446C:
	// lwz r11,0(r22)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r22.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// lwz r11,36(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x83294484;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// subf r5,r3,r21
	ctx.r5.s64 = ctx.r21.s64 - ctx.r3.s64;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r20
	ctx.r3.u64 = ctx.r20.u64;
	// bl 0x8328a928
	ctx.lr = 0x83294494;
	sub_8328A928(ctx, base);
	// lwz r10,256(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 256);
	// mr r11,r24
	ctx.r11.u64 = ctx.r24.u64;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// ble cr6,0x832944d8
	if (!ctx.cr6.gt) goto loc_832944D8;
	// addi r10,r31,536
	ctx.r10.s64 = ctx.r31.s64 + 536;
loc_832944A8:
	// lwz r9,124(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 124);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// lwz r7,24(r30)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r30.u32 + 24);
	// lwz r8,28(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + 28);
	// add r9,r9,r7
	ctx.r9.u64 = ctx.r9.u64 + ctx.r7.u64;
	// stw r9,24(r30)
	PPC_STORE_U32(ctx.r30.u32 + 24, ctx.r9.u32);
	// lwzu r9,128(r10)
	ea = 128 + ctx.r10.u32;
	ctx.r9.u64 = PPC_LOAD_U32(ea);
	ctx.r10.u32 = ea;
	// add r9,r8,r9
	ctx.r9.u64 = ctx.r8.u64 + ctx.r9.u64;
	// stw r9,28(r30)
	PPC_STORE_U32(ctx.r30.u32 + 28, ctx.r9.u32);
	// lwz r9,256(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 256);
	// cmpw cr6,r11,r9
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r9.s32, ctx.xer);
	// blt cr6,0x832944a8
	if (ctx.cr6.lt) goto loc_832944A8;
loc_832944D8:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// b 0x833a01d8
	__restgprlr_20(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832944E4"))) PPC_WEAK_FUNC(sub_832944E4);
PPC_FUNC_IMPL(__imp__sub_832944E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832944E8"))) PPC_WEAK_FUNC(sub_832944E8);
PPC_FUNC_IMPL(__imp__sub_832944E8) {
	PPC_FUNC_PROLOGUE();
	// addic. r11,r4,-1
	ctx.xer.ca = ctx.r4.u32 > 0;
	ctx.r11.s64 = ctx.r4.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// li r10,0
	ctx.r10.s64 = 0;
	// blt 0x83294510
	if (ctx.cr0.lt) goto loc_83294510;
	// addi r9,r11,1
	ctx.r9.s64 = ctx.r11.s64 + 1;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_832944FC:
	// lbzx r9,r11,r3
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + ctx.r3.u32);
	// rlwinm r10,r10,8,0,23
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 8) & 0xFFFFFF00;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// or r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 | ctx.r10.u64;
	// bdnz 0x832944fc
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_832944FC;
loc_83294510:
	// mr r3,r10
	ctx.r3.u64 = ctx.r10.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83294518"))) PPC_WEAK_FUNC(sub_83294518);
PPC_FUNC_IMPL(__imp__sub_83294518) {
	PPC_FUNC_PROLOGUE();
	// li r10,0
	ctx.r10.s64 = 0;
	// li r11,0
	ctx.r11.s64 = 0;
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// ble cr6,0x83294540
	if (!ctx.cr6.gt) goto loc_83294540;
	// mtctr r4
	ctx.ctr.u64 = ctx.r4.u64;
loc_8329452C:
	// lbzx r9,r11,r3
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + ctx.r3.u32);
	// rlwinm r10,r10,8,0,23
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 8) & 0xFFFFFF00;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// or r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 | ctx.r10.u64;
	// bdnz 0x8329452c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8329452C;
loc_83294540:
	// mr r3,r10
	ctx.r3.u64 = ctx.r10.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83294548"))) PPC_WEAK_FUNC(sub_83294548);
PPC_FUNC_IMPL(__imp__sub_83294548) {
	PPC_FUNC_PROLOGUE();
	// li r10,0
	ctx.r10.s64 = 0;
	// li r11,0
	ctx.r11.s64 = 0;
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// ble cr6,0x83294570
	if (!ctx.cr6.gt) goto loc_83294570;
	// mtctr r4
	ctx.ctr.u64 = ctx.r4.u64;
loc_8329455C:
	// lbzx r9,r11,r3
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + ctx.r3.u32);
	// rldicr r10,r10,8,55
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u64, 8) & 0xFFFFFFFFFFFFFF00;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// or r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 | ctx.r10.u64;
	// bdnz 0x8329455c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8329455C;
loc_83294570:
	// mr r3,r10
	ctx.r3.u64 = ctx.r10.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83294578"))) PPC_WEAK_FUNC(sub_83294578);
PPC_FUNC_IMPL(__imp__sub_83294578) {
	PPC_FUNC_PROLOGUE();
	// subf r3,r3,r4
	ctx.r3.s64 = ctx.r4.s64 - ctx.r3.s64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83294580"))) PPC_WEAK_FUNC(sub_83294580);
PPC_FUNC_IMPL(__imp__sub_83294580) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32219
	ctx.r11.s64 = -2111504384;
	// lis r10,-31824
	ctx.r10.s64 = -2085617664;
	// addi r11,r11,24136
	ctx.r11.s64 = ctx.r11.s64 + 24136;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// stw r11,604(r10)
	PPC_STORE_U32(ctx.r10.u32 + 604, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83294598"))) PPC_WEAK_FUNC(sub_83294598);
PPC_FUNC_IMPL(__imp__sub_83294598) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31824
	ctx.r11.s64 = -2085617664;
	// lis r10,-31824
	ctx.r10.s64 = -2085617664;
	// stw r3,608(r11)
	PPC_STORE_U32(ctx.r11.u32 + 608, ctx.r3.u32);
	// stw r4,612(r10)
	PPC_STORE_U32(ctx.r10.u32 + 612, ctx.r4.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_832945AC"))) PPC_WEAK_FUNC(sub_832945AC);
PPC_FUNC_IMPL(__imp__sub_832945AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832945B0"))) PPC_WEAK_FUNC(sub_832945B0);
PPC_FUNC_IMPL(__imp__sub_832945B0) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31822
	ctx.r10.s64 = -2085486592;
	// lis r11,-32219
	ctx.r11.s64 = -2111504384;
	// addi r10,r10,-1056
	ctx.r10.s64 = ctx.r10.s64 + -1056;
	// addi r11,r11,24292
	ctx.r11.s64 = ctx.r11.s64 + 24292;
	// stw r11,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r11.u32);
	// blr 
	return;
}

