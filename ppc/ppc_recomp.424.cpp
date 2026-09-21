#include "ppc_recomp_shared.h"

__attribute__((alias("__imp__sub_8326CC78"))) PPC_WEAK_FUNC(sub_8326CC78);
PPC_FUNC_IMPL(__imp__sub_8326CC78) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31845
	ctx.r11.s64 = -2086993920;
	// addi r3,r11,-5792
	ctx.r3.s64 = ctx.r11.s64 + -5792;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8326CC84"))) PPC_WEAK_FUNC(sub_8326CC84);
PPC_FUNC_IMPL(__imp__sub_8326CC84) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8326CC88"))) PPC_WEAK_FUNC(sub_8326CC88);
PPC_FUNC_IMPL(__imp__sub_8326CC88) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x833a01a8
	ctx.lr = 0x8326CC90;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r28,r6
	ctx.r28.u64 = ctx.r6.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8326ce50
	if (ctx.cr6.eq) goto loc_8326CE50;
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// beq cr6,0x8326ce50
	if (ctx.cr6.eq) goto loc_8326CE50;
	// bl 0x833a77b0
	ctx.lr = 0x8326CCB0;
	sub_833A77B0(ctx, base);
	// addi r7,r31,10
	ctx.r7.s64 = ctx.r31.s64 + 10;
	// addic. r8,r3,-10
	ctx.xer.ca = ctx.r3.u32 > 9;
	ctx.r8.s64 = ctx.r3.s64 + -10;
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// li r29,0
	ctx.r29.s64 = 0;
	// li r11,0
	ctx.r11.s64 = 0;
	// ble 0x8326cd34
	if (!ctx.cr0.gt) goto loc_8326CD34;
loc_8326CCC4:
	// lbzx r10,r11,r7
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + ctx.r7.u32);
	// extsb r10,r10
	ctx.r10.s64 = ctx.r10.s8;
	// cmpwi cr6,r10,48
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 48, ctx.xer);
	// blt cr6,0x8326cce4
	if (ctx.cr6.lt) goto loc_8326CCE4;
	// cmpwi cr6,r10,57
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 57, ctx.xer);
	// bgt cr6,0x8326cce4
	if (ctx.cr6.gt) goto loc_8326CCE4;
	// addi r10,r10,-48
	ctx.r10.s64 = ctx.r10.s64 + -48;
	// b 0x8326cd10
	goto loc_8326CD10;
loc_8326CCE4:
	// cmpwi cr6,r10,97
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 97, ctx.xer);
	// blt cr6,0x8326ccfc
	if (ctx.cr6.lt) goto loc_8326CCFC;
	// cmpwi cr6,r10,102
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 102, ctx.xer);
	// bgt cr6,0x8326ccfc
	if (ctx.cr6.gt) goto loc_8326CCFC;
	// addi r10,r10,-87
	ctx.r10.s64 = ctx.r10.s64 + -87;
	// b 0x8326cd10
	goto loc_8326CD10;
loc_8326CCFC:
	// cmpwi cr6,r10,65
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 65, ctx.xer);
	// blt cr6,0x8326cd2c
	if (ctx.cr6.lt) goto loc_8326CD2C;
	// cmpwi cr6,r10,70
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 70, ctx.xer);
	// bgt cr6,0x8326cd2c
	if (ctx.cr6.gt) goto loc_8326CD2C;
	// addi r10,r10,-55
	ctx.r10.s64 = ctx.r10.s64 + -55;
loc_8326CD10:
	// extsb r10,r10
	ctx.r10.s64 = ctx.r10.s8;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// clrlwi r9,r10,28
	ctx.r9.u64 = ctx.r10.u32 & 0xF;
	// rlwinm r10,r29,4,0,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 4) & 0xFFFFFFF0;
	// cmpw cr6,r11,r8
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r8.s32, ctx.xer);
	// add r29,r9,r10
	ctx.r29.u64 = ctx.r9.u64 + ctx.r10.u64;
	// blt cr6,0x8326ccc4
	if (ctx.cr6.lt) goto loc_8326CCC4;
loc_8326CD2C:
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// bne cr6,0x8326cd48
	if (!ctx.cr6.eq) goto loc_8326CD48;
loc_8326CD34:
	// lis r11,-32219
	ctx.r11.s64 = -2111504384;
	// addi r4,r11,8472
	ctx.r4.s64 = ctx.r11.s64 + 8472;
loc_8326CD3C:
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x83257c00
	ctx.lr = 0x8326CD44;
	sub_83257C00(ctx, base);
	// b 0x8326ce64
	goto loc_8326CE64;
loc_8326CD48:
	// subf r10,r11,r3
	ctx.r10.s64 = ctx.r3.s64 - ctx.r11.s64;
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// addic. r8,r10,-11
	ctx.xer.ca = ctx.r10.u32 > 10;
	ctx.r8.s64 = ctx.r10.s64 + -11;
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// addi r7,r11,11
	ctx.r7.s64 = ctx.r11.s64 + 11;
	// li r30,0
	ctx.r30.s64 = 0;
	// li r11,0
	ctx.r11.s64 = 0;
	// ble 0x8326ce44
	if (!ctx.cr0.gt) goto loc_8326CE44;
loc_8326CD64:
	// lbzx r10,r11,r7
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + ctx.r7.u32);
	// extsb r10,r10
	ctx.r10.s64 = ctx.r10.s8;
	// cmpwi cr6,r10,48
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 48, ctx.xer);
	// blt cr6,0x8326cd84
	if (ctx.cr6.lt) goto loc_8326CD84;
	// cmpwi cr6,r10,57
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 57, ctx.xer);
	// bgt cr6,0x8326cd84
	if (ctx.cr6.gt) goto loc_8326CD84;
	// addi r10,r10,-48
	ctx.r10.s64 = ctx.r10.s64 + -48;
	// b 0x8326cdb0
	goto loc_8326CDB0;
loc_8326CD84:
	// cmpwi cr6,r10,97
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 97, ctx.xer);
	// blt cr6,0x8326cd9c
	if (ctx.cr6.lt) goto loc_8326CD9C;
	// cmpwi cr6,r10,102
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 102, ctx.xer);
	// bgt cr6,0x8326cd9c
	if (ctx.cr6.gt) goto loc_8326CD9C;
	// addi r10,r10,-87
	ctx.r10.s64 = ctx.r10.s64 + -87;
	// b 0x8326cdb0
	goto loc_8326CDB0;
loc_8326CD9C:
	// cmpwi cr6,r10,65
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 65, ctx.xer);
	// blt cr6,0x8326cdcc
	if (ctx.cr6.lt) goto loc_8326CDCC;
	// cmpwi cr6,r10,70
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 70, ctx.xer);
	// bgt cr6,0x8326cdcc
	if (ctx.cr6.gt) goto loc_8326CDCC;
	// addi r10,r10,-55
	ctx.r10.s64 = ctx.r10.s64 + -55;
loc_8326CDB0:
	// extsb r10,r10
	ctx.r10.s64 = ctx.r10.s8;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// clrlwi r9,r10,28
	ctx.r9.u64 = ctx.r10.u32 & 0xF;
	// rlwinm r10,r30,4,0,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 4) & 0xFFFFFFF0;
	// cmpw cr6,r11,r8
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r8.s32, ctx.xer);
	// add r30,r9,r10
	ctx.r30.u64 = ctx.r9.u64 + ctx.r10.u64;
	// blt cr6,0x8326cd64
	if (ctx.cr6.lt) goto loc_8326CD64;
loc_8326CDCC:
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// blt cr6,0x8326ce44
	if (ctx.cr6.lt) goto loc_8326CE44;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x8326ce44
	if (!ctx.cr6.gt) goto loc_8326CE44;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x83266b78
	ctx.lr = 0x8326CDE4;
	sub_83266B78(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x8326ce20
	if (ctx.cr0.eq) goto loc_8326CE20;
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r11,24
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 24, ctx.xer);
	// blt cr6,0x8326ce20
	if (ctx.cr6.lt) goto loc_8326CE20;
	// li r5,24
	ctx.r5.s64 = 24;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8325a370
	ctx.lr = 0x8326CE08;
	sub_8325A370(ctx, base);
	// extsw r11,r30
	ctx.r11.s64 = ctx.r30.s32;
	// stw r29,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r29.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// std r11,8(r31)
	PPC_STORE_U64(ctx.r31.u32 + 8, ctx.r11.u64);
	// stw r31,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r31.u32);
	// b 0x8326ce68
	goto loc_8326CE68;
loc_8326CE20:
	// lis r11,-32219
	ctx.r11.s64 = -2111504384;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r4,r11,8384
	ctx.r4.s64 = ctx.r11.s64 + 8384;
	// bl 0x83257c00
	ctx.lr = 0x8326CE30;
	sub_83257C00(ctx, base);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x8326ce64
	if (ctx.cr6.eq) goto loc_8326CE64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83266ba0
	ctx.lr = 0x8326CE40;
	sub_83266BA0(ctx, base);
	// b 0x8326ce64
	goto loc_8326CE64;
loc_8326CE44:
	// lis r11,-32219
	ctx.r11.s64 = -2111504384;
	// addi r4,r11,8344
	ctx.r4.s64 = ctx.r11.s64 + 8344;
	// b 0x8326cd3c
	goto loc_8326CD3C;
loc_8326CE50:
	// lis r11,-32219
	ctx.r11.s64 = -2111504384;
	// li r5,-2
	ctx.r5.s64 = -2;
	// addi r4,r11,8332
	ctx.r4.s64 = ctx.r11.s64 + 8332;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x83257c28
	ctx.lr = 0x8326CE64;
	sub_83257C28(ctx, base);
loc_8326CE64:
	// li r3,-1
	ctx.r3.s64 = -1;
loc_8326CE68:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x833a01f8
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8326CE70"))) PPC_WEAK_FUNC(sub_8326CE70);
PPC_FUNC_IMPL(__imp__sub_8326CE70) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x833a01a8
	ctx.lr = 0x8326CE78;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// li r5,24
	ctx.r5.s64 = 24;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r28,r6
	ctx.r28.u64 = ctx.r6.u64;
	// bl 0x833a2b30
	ctx.lr = 0x8326CE98;
	sub_833A2B30(ctx, base);
	// stw r30,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r30.u32);
	// stw r31,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r31.u32);
	// stw r29,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r29.u32);
	// stw r28,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r28.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x833a01f8
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8326CEB0"))) PPC_WEAK_FUNC(sub_8326CEB0);
PPC_FUNC_IMPL(__imp__sub_8326CEB0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x833a01a8
	ctx.lr = 0x8326CEB8;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,144(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 144);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x8326ced4
	if (ctx.cr6.eq) goto loc_8326CED4;
	// li r3,2
	ctx.r3.s64 = 2;
	// b 0x8326cfc0
	goto loc_8326CFC0;
loc_8326CED4:
	// addi r28,r29,164
	ctx.r28.s64 = ctx.r29.s64 + 164;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x833e2bf8
	ctx.lr = 0x8326CEE4;
	sub_833E2BF8(ctx, base);
	// cmpwi cr6,r3,1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 1, ctx.xer);
	// bne cr6,0x8326cef4
	if (!ctx.cr6.eq) goto loc_8326CEF4;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x8326cfc0
	goto loc_8326CFC0;
loc_8326CEF4:
	// lwz r3,136(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 136);
	// li r31,1
	ctx.r31.s64 = 1;
	// bl 0x8326dc30
	ctx.lr = 0x8326CF00;
	sub_8326DC30(ctx, base);
	// lwz r3,136(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 136);
	// bl 0x83105550
	ctx.lr = 0x8326CF08;
	sub_83105550(ctx, base);
	// cmplwi cr6,r3,1
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 1, ctx.xer);
	// blt cr6,0x8326cf74
	if (ctx.cr6.lt) goto loc_8326CF74;
	// beq cr6,0x8326cf54
	if (ctx.cr6.eq) goto loc_8326CF54;
	// cmplwi cr6,r3,3
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 3, ctx.xer);
	// blt cr6,0x8326cf5c
	if (ctx.cr6.lt) goto loc_8326CF5C;
	// beq cr6,0x8326cf54
	if (ctx.cr6.eq) goto loc_8326CF54;
	// cmplwi cr6,r3,5
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 5, ctx.xer);
	// blt cr6,0x8326cf54
	if (ctx.cr6.lt) goto loc_8326CF54;
	// beq cr6,0x8326cf4c
	if (ctx.cr6.eq) goto loc_8326CF4C;
	// cmplwi cr6,r3,7
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 7, ctx.xer);
	// blt cr6,0x8326cf44
	if (ctx.cr6.lt) goto loc_8326CF44;
	// lis r11,-32219
	ctx.r11.s64 = -2111504384;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r4,r11,8652
	ctx.r4.s64 = ctx.r11.s64 + 8652;
	// bl 0x83257c00
	ctx.lr = 0x8326CF44;
	sub_83257C00(ctx, base);
loc_8326CF44:
	// li r31,3
	ctx.r31.s64 = 3;
	// b 0x8326cf78
	goto loc_8326CF78;
loc_8326CF4C:
	// li r31,2
	ctx.r31.s64 = 2;
	// b 0x8326cf78
	goto loc_8326CF78;
loc_8326CF54:
	// li r30,0
	ctx.r30.s64 = 0;
	// b 0x8326cf88
	goto loc_8326CF88;
loc_8326CF5C:
	// lwz r3,136(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 136);
	// bl 0x83110a18
	ctx.lr = 0x8326CF64;
	sub_83110A18(ctx, base);
	// addi r11,r3,-1
	ctx.r11.s64 = ctx.r3.s64 + -1;
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r30,r11,27,31,31
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// b 0x8326cf88
	goto loc_8326CF88;
loc_8326CF74:
	// li r31,0
	ctx.r31.s64 = 0;
loc_8326CF78:
	// lwz r3,136(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 136);
	// li r30,2
	ctx.r30.s64 = 2;
	// bl 0x8313bd90
	ctx.lr = 0x8326CF84;
	sub_8313BD90(ctx, base);
	// stw r3,188(r29)
	PPC_STORE_U32(ctx.r29.u32 + 188, ctx.r3.u32);
loc_8326CF88:
	// stw r31,144(r29)
	PPC_STORE_U32(ctx.r29.u32 + 144, ctx.r31.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x833e2bf8
	ctx.lr = 0x8326CF98;
	sub_833E2BF8(ctx, base);
	// cmpwi cr6,r31,1
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 1, ctx.xer);
	// beq cr6,0x8326cfbc
	if (ctx.cr6.eq) goto loc_8326CFBC;
	// lwz r11,176(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 176);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8326cfbc
	if (ctx.cr6.eq) goto loc_8326CFBC;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// lwz r3,180(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 180);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8326CFBC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8326CFBC:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
loc_8326CFC0:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x833a01f8
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8326CFC8"))) PPC_WEAK_FUNC(sub_8326CFC8);
PPC_FUNC_IMPL(__imp__sub_8326CFC8) {
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
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// bne cr6,0x8326cfe0
	if (!ctx.cr6.eq) goto loc_8326CFE0;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
loc_8326CFE0:
	// li r11,3
	ctx.r11.s64 = 3;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
	// bne cr6,0x8326d00c
	if (!ctx.cr6.eq) goto loc_8326D00C;
	// lis r11,-32219
	ctx.r11.s64 = -2111504384;
	// li r5,-2
	ctx.r5.s64 = -2;
	// addi r4,r11,8688
	ctx.r4.s64 = ctx.r11.s64 + 8688;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x83257c28
	ctx.lr = 0x8326D004;
	sub_83257C28(ctx, base);
	// li r3,-2
	ctx.r3.s64 = -2;
	// b 0x8326d038
	goto loc_8326D038;
loc_8326D00C:
	// lwz r11,144(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 144);
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x8326d020
	if (ctx.cr6.eq) goto loc_8326D020;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bne cr6,0x8326d030
	if (!ctx.cr6.eq) goto loc_8326D030;
loc_8326D020:
	// lbz r10,172(r3)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r3.u32 + 172);
	// addic r10,r10,-1
	ctx.xer.ca = ctx.r10.u32 > 0;
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// subfe r10,r10,r10
	temp.u8 = (~ctx.r10.u32 + ctx.r10.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r10.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r10.u64 = ~ctx.r10.u64 + ctx.r10.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 & ctx.r11.u64;
loc_8326D030:
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
	// li r3,0
	ctx.r3.s64 = 0;
loc_8326D038:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8326D048"))) PPC_WEAK_FUNC(sub_8326D048);
PPC_FUNC_IMPL(__imp__sub_8326D048) {
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
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x8326d07c
	if (!ctx.cr6.eq) goto loc_8326D07C;
	// lis r11,-32219
	ctx.r11.s64 = -2111504384;
	// li r5,-2
	ctx.r5.s64 = -2;
	// addi r4,r11,8700
	ctx.r4.s64 = ctx.r11.s64 + 8700;
	// bl 0x83257c28
	ctx.lr = 0x8326D074;
	sub_83257C28(ctx, base);
	// li r3,-2
	ctx.r3.s64 = -2;
	// b 0x8326d0a8
	goto loc_8326D0A8;
loc_8326D07C:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x8326d0a4
	if (ctx.cr6.eq) goto loc_8326D0A4;
	// lwz r11,144(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 144);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8326d098
	if (!ctx.cr6.eq) goto loc_8326D098;
	// std r11,0(r31)
	PPC_STORE_U64(ctx.r31.u32 + 0, ctx.r11.u64);
	// b 0x8326d0a4
	goto loc_8326D0A4;
loc_8326D098:
	// lwz r3,136(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 136);
	// bl 0x8326d910
	ctx.lr = 0x8326D0A0;
	sub_8326D910(ctx, base);
	// std r3,0(r31)
	PPC_STORE_U64(ctx.r31.u32 + 0, ctx.r3.u64);
loc_8326D0A4:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8326D0A8:
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

__attribute__((alias("__imp__sub_8326D0BC"))) PPC_WEAK_FUNC(sub_8326D0BC);
PPC_FUNC_IMPL(__imp__sub_8326D0BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8326D0C0"))) PPC_WEAK_FUNC(sub_8326D0C0);
PPC_FUNC_IMPL(__imp__sub_8326D0C0) {
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
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// li r3,0
	ctx.r3.s64 = 0;
	// bne cr6,0x8326d0f4
	if (!ctx.cr6.eq) goto loc_8326D0F4;
	// lis r11,-32219
	ctx.r11.s64 = -2111504384;
	// li r5,-2
	ctx.r5.s64 = -2;
	// addi r4,r11,8712
	ctx.r4.s64 = ctx.r11.s64 + 8712;
	// bl 0x83257c28
	ctx.lr = 0x8326D0EC;
	sub_83257C28(ctx, base);
	// li r3,-2
	ctx.r3.s64 = -2;
	// b 0x8326d0f8
	goto loc_8326D0F8;
loc_8326D0F4:
	// stb r4,170(r11)
	PPC_STORE_U8(ctx.r11.u32 + 170, ctx.r4.u8);
loc_8326D0F8:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8326D108"))) PPC_WEAK_FUNC(sub_8326D108);
PPC_FUNC_IMPL(__imp__sub_8326D108) {
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
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// li r3,0
	ctx.r3.s64 = 0;
	// bne cr6,0x8326d13c
	if (!ctx.cr6.eq) goto loc_8326D13C;
	// lis r11,-32219
	ctx.r11.s64 = -2111504384;
	// li r5,-2
	ctx.r5.s64 = -2;
	// addi r4,r11,8724
	ctx.r4.s64 = ctx.r11.s64 + 8724;
	// bl 0x83257c28
	ctx.lr = 0x8326D134;
	sub_83257C28(ctx, base);
	// li r3,-2
	ctx.r3.s64 = -2;
	// b 0x8326d140
	goto loc_8326D140;
loc_8326D13C:
	// stb r4,171(r11)
	PPC_STORE_U8(ctx.r11.u32 + 171, ctx.r4.u8);
loc_8326D140:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8326D150"))) PPC_WEAK_FUNC(sub_8326D150);
PPC_FUNC_IMPL(__imp__sub_8326D150) {
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
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x8326d184
	if (!ctx.cr6.eq) goto loc_8326D184;
	// lis r11,-32219
	ctx.r11.s64 = -2111504384;
	// li r5,-2
	ctx.r5.s64 = -2;
	// addi r4,r11,8736
	ctx.r4.s64 = ctx.r11.s64 + 8736;
	// bl 0x83257c28
	ctx.lr = 0x8326D17C;
	sub_83257C28(ctx, base);
	// li r3,-2
	ctx.r3.s64 = -2;
	// b 0x8326d19c
	goto loc_8326D19C;
loc_8326D184:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x8326d198
	if (ctx.cr6.eq) goto loc_8326D198;
	// lwz r3,136(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 136);
	// bl 0x8313bd90
	ctx.lr = 0x8326D194;
	sub_8313BD90(ctx, base);
	// stw r3,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r3.u32);
loc_8326D198:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8326D19C:
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

__attribute__((alias("__imp__sub_8326D1B0"))) PPC_WEAK_FUNC(sub_8326D1B0);
PPC_FUNC_IMPL(__imp__sub_8326D1B0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x833a01a0
	ctx.lr = 0x8326D1B8;
	__savegprlr_26(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,144(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 144);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// mr r26,r6
	ctx.r26.u64 = ctx.r6.u64;
	// mr r27,r7
	ctx.r27.u64 = ctx.r7.u64;
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x8326d1f0
	if (!ctx.cr6.eq) goto loc_8326D1F0;
	// lis r11,-32219
	ctx.r11.s64 = -2111504384;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r4,r11,8832
	ctx.r4.s64 = ctx.r11.s64 + 8832;
	// bl 0x83257c00
	ctx.lr = 0x8326D1EC;
	sub_83257C00(ctx, base);
	// b 0x8326d30c
	goto loc_8326D30C;
loc_8326D1F0:
	// cmpdi cr6,r29,0
	ctx.cr6.compare<int64_t>(ctx.r29.s64, 0, ctx.xer);
	// blt cr6,0x8326d2f8
	if (ctx.cr6.lt) goto loc_8326D2F8;
	// cmpdi cr6,r28,0
	ctx.cr6.compare<int64_t>(ctx.r28.s64, 0, ctx.xer);
	// blt cr6,0x8326d2f8
	if (ctx.cr6.lt) goto loc_8326D2F8;
	// cmpdi cr6,r27,0
	ctx.cr6.compare<int64_t>(ctx.r27.s64, 0, ctx.xer);
	// blt cr6,0x8326d2f8
	if (ctx.cr6.lt) goto loc_8326D2F8;
	// li r11,0
	ctx.r11.s64 = 0;
	// lwz r3,184(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 184);
	// addi r30,r31,152
	ctx.r30.s64 = ctx.r31.s64 + 152;
	// stw r11,144(r31)
	PPC_STORE_U32(ctx.r31.u32 + 144, ctx.r11.u32);
	// addi r4,r31,148
	ctx.r4.s64 = ctx.r31.s64 + 148;
	// stb r11,172(r31)
	PPC_STORE_U8(ctx.r31.u32 + 172, ctx.r11.u8);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// bl 0x83266ee8
	ctx.lr = 0x8326D228;
	sub_83266EE8(ctx, base);
	// lwz r3,148(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 148);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x8326d2dc
	if (ctx.cr6.lt) goto loc_8326D2DC;
	// cmpwi cr6,r3,5
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 5, ctx.xer);
	// bge cr6,0x8326d2dc
	if (!ctx.cr6.lt) goto loc_8326D2DC;
	// bl 0x832667f0
	ctx.lr = 0x8326D240;
	sub_832667F0(ctx, base);
	// lbz r11,168(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 168);
	// lbz r9,171(r31)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r31.u32 + 171);
	// extsb r10,r11
	ctx.r10.s64 = ctx.r11.s8;
	// lbz r7,170(r31)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r31.u32 + 170);
	// lbz r11,169(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 169);
	// extsb r8,r9
	ctx.r8.s64 = ctx.r9.s8;
	// extsb r7,r7
	ctx.r7.s64 = ctx.r7.s8;
	// stw r3,140(r31)
	PPC_STORE_U32(ctx.r31.u32 + 140, ctx.r3.u32);
	// extsb r6,r11
	ctx.r6.s64 = ctx.r11.s8;
	// lwz r9,184(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 184);
	// lwz r5,188(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 188);
	// lwz r4,0(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r3,136(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 136);
	// std r27,104(r1)
	PPC_STORE_U64(ctx.r1.u32 + 104, ctx.r27.u64);
	// stw r26,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r26.u32);
	// std r28,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r28.u64);
	// std r29,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r29.u64);
	// bl 0x8326d918
	ctx.lr = 0x8326D288;
	sub_8326D918(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x8326d310
	if (!ctx.cr0.eq) goto loc_8326D310;
	// lwz r3,136(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 136);
	// bl 0x83105550
	ctx.lr = 0x8326D298;
	sub_83105550(ctx, base);
	// cmpwi cr6,r3,5
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 5, ctx.xer);
	// bne cr6,0x8326d2bc
	if (!ctx.cr6.eq) goto loc_8326D2BC;
	// lwz r3,136(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 136);
	// bl 0x8313bd90
	ctx.lr = 0x8326D2A8;
	sub_8313BD90(ctx, base);
	// li r11,2
	ctx.r11.s64 = 2;
	// stw r3,188(r31)
	PPC_STORE_U32(ctx.r31.u32 + 188, ctx.r3.u32);
loc_8326D2B0:
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r11,144(r31)
	PPC_STORE_U32(ctx.r31.u32 + 144, ctx.r11.u32);
	// b 0x8326d310
	goto loc_8326D310;
loc_8326D2BC:
	// lis r11,-31961
	ctx.r11.s64 = -2094596096;
	// lwz r4,156(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 156);
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// addi r5,r11,-12624
	ctx.r5.s64 = ctx.r11.s64 + -12624;
	// addi r3,r31,12
	ctx.r3.s64 = ctx.r31.s64 + 12;
	// bl 0x8326ce70
	ctx.lr = 0x8326D2D4;
	sub_8326CE70(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// b 0x8326d2b0
	goto loc_8326D2B0;
loc_8326D2DC:
	// lis r11,-32219
	ctx.r11.s64 = -2111504384;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r4,r11,8760
	ctx.r4.s64 = ctx.r11.s64 + 8760;
	// bl 0x83257c00
	ctx.lr = 0x8326D2EC;
	sub_83257C00(ctx, base);
	// li r11,3
	ctx.r11.s64 = 3;
	// stw r11,144(r31)
	PPC_STORE_U32(ctx.r31.u32 + 144, ctx.r11.u32);
	// b 0x8326d30c
	goto loc_8326D30C;
loc_8326D2F8:
	// lis r11,-32219
	ctx.r11.s64 = -2111504384;
	// li r5,-2
	ctx.r5.s64 = -2;
	// addi r4,r11,8748
	ctx.r4.s64 = ctx.r11.s64 + 8748;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x83257c28
	ctx.lr = 0x8326D30C;
	sub_83257C28(ctx, base);
loc_8326D30C:
	// li r3,-1
	ctx.r3.s64 = -1;
loc_8326D310:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x833a01f0
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8326D318"))) PPC_WEAK_FUNC(sub_8326D318);
PPC_FUNC_IMPL(__imp__sub_8326D318) {
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
	// bne cr6,0x8326d350
	if (!ctx.cr6.eq) goto loc_8326D350;
	// lis r11,-32219
	ctx.r11.s64 = -2111504384;
	// li r5,-2
	ctx.r5.s64 = -2;
	// addi r4,r11,8920
	ctx.r4.s64 = ctx.r11.s64 + 8920;
	// bl 0x83257c28
	ctx.lr = 0x8326D348;
	sub_83257C28(ctx, base);
	// li r3,-2
	ctx.r3.s64 = -2;
	// b 0x8326d3bc
	goto loc_8326D3BC;
loc_8326D350:
	// addi r30,r31,160
	ctx.r30.s64 = ctx.r31.s64 + 160;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x833e2bf8
	ctx.lr = 0x8326D360;
	sub_833E2BF8(ctx, base);
	// cmpwi cr6,r3,1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 1, ctx.xer);
	// bne cr6,0x8326d384
	if (!ctx.cr6.eq) goto loc_8326D384;
	// lis r11,-32219
	ctx.r11.s64 = -2111504384;
	// li r5,-4
	ctx.r5.s64 = -4;
	// addi r4,r11,8908
	ctx.r4.s64 = ctx.r11.s64 + 8908;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x83257c28
	ctx.lr = 0x8326D37C;
	sub_83257C28(ctx, base);
	// li r3,-4
	ctx.r3.s64 = -4;
	// b 0x8326d3bc
	goto loc_8326D3BC;
loc_8326D384:
	// lwz r11,144(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 144);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x8326d39c
	if (ctx.cr6.eq) goto loc_8326D39C;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,144(r31)
	PPC_STORE_U32(ctx.r31.u32 + 144, ctx.r11.u32);
	// b 0x8326d3ac
	goto loc_8326D3AC;
loc_8326D39C:
	// lwz r3,136(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 136);
	// bl 0x8326d9d8
	ctx.lr = 0x8326D3A4;
	sub_8326D9D8(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// stb r11,172(r31)
	PPC_STORE_U8(ctx.r31.u32 + 172, ctx.r11.u8);
loc_8326D3AC:
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x833e2bf8
	ctx.lr = 0x8326D3B8;
	sub_833E2BF8(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
loc_8326D3BC:
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

__attribute__((alias("__imp__sub_8326D3D4"))) PPC_WEAK_FUNC(sub_8326D3D4);
PPC_FUNC_IMPL(__imp__sub_8326D3D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8326D3D8"))) PPC_WEAK_FUNC(sub_8326D3D8);
PPC_FUNC_IMPL(__imp__sub_8326D3D8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x833a01a0
	ctx.lr = 0x8326D3E0;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r30,r3,160
	ctx.r30.s64 = ctx.r3.s64 + 160;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// mr r27,r6
	ctx.r27.u64 = ctx.r6.u64;
	// mr r26,r7
	ctx.r26.u64 = ctx.r7.u64;
	// bl 0x833e2bf8
	ctx.lr = 0x8326D408;
	sub_833E2BF8(ctx, base);
	// cmpwi cr6,r3,1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 1, ctx.xer);
	// bne cr6,0x8326d42c
	if (!ctx.cr6.eq) goto loc_8326D42C;
	// lis r11,-32219
	ctx.r11.s64 = -2111504384;
	// li r5,-4
	ctx.r5.s64 = -4;
	// addi r4,r11,8932
	ctx.r4.s64 = ctx.r11.s64 + 8932;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x83257c28
	ctx.lr = 0x8326D424;
	sub_83257C28(ctx, base);
	// li r3,-4
	ctx.r3.s64 = -4;
	// b 0x8326d490
	goto loc_8326D490;
loc_8326D42C:
	// mr r7,r26
	ctx.r7.u64 = ctx.r26.u64;
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8326d1b0
	ctx.lr = 0x8326D444;
	sub_8326D1B0(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r28,144(r31)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r31.u32 + 144);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x833e2bf8
	ctx.lr = 0x8326D458;
	sub_833E2BF8(ctx, base);
	// cmpwi cr6,r28,1
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 1, ctx.xer);
	// bne cr6,0x8326d470
	if (!ctx.cr6.eq) goto loc_8326D470;
	// addi r4,r31,12
	ctx.r4.s64 = ctx.r31.s64 + 12;
	// lwz r3,140(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 140);
	// bl 0x83266898
	ctx.lr = 0x8326D46C;
	sub_83266898(ctx, base);
	// b 0x8326d48c
	goto loc_8326D48C;
loc_8326D470:
	// lwz r11,176(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 176);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8326d48c
	if (ctx.cr6.eq) goto loc_8326D48C;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r3,180(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 180);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8326D48C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8326D48C:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
loc_8326D490:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x833a01f0
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8326D498"))) PPC_WEAK_FUNC(sub_8326D498);
PPC_FUNC_IMPL(__imp__sub_8326D498) {
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
	// bne cr6,0x8326d4c4
	if (!ctx.cr6.eq) goto loc_8326D4C4;
	// lis r11,-32219
	ctx.r11.s64 = -2111504384;
	// li r5,-2
	ctx.r5.s64 = -2;
	// addi r4,r11,8944
	ctx.r4.s64 = ctx.r11.s64 + 8944;
	// bl 0x83257c28
	ctx.lr = 0x8326D4BC;
	sub_83257C28(ctx, base);
	// li r3,-2
	ctx.r3.s64 = -2;
	// b 0x8326d4c8
	goto loc_8326D4C8;
loc_8326D4C4:
	// bl 0x8326d3d8
	ctx.lr = 0x8326D4C8;
	sub_8326D3D8(ctx, base);
loc_8326D4C8:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8326D4D8"))) PPC_WEAK_FUNC(sub_8326D4D8);
PPC_FUNC_IMPL(__imp__sub_8326D4D8) {
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
	// lwz r3,84(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 84);
	// li r30,0
	ctx.r30.s64 = 0;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8326d508
	if (ctx.cr6.eq) goto loc_8326D508;
	// bl 0x8326de10
	ctx.lr = 0x8326D504;
	sub_8326DE10(ctx, base);
	// stw r30,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r30.u32);
loc_8326D508:
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8326d51c
	if (ctx.cr6.eq) goto loc_8326D51C;
	// bl 0x83258ee8
	ctx.lr = 0x8326D518;
	sub_83258EE8(ctx, base);
	// stw r30,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r30.u32);
loc_8326D51C:
	// li r5,92
	ctx.r5.s64 = 92;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x833a2b30
	ctx.lr = 0x8326D52C;
	sub_833A2B30(ctx, base);
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

__attribute__((alias("__imp__sub_8326D544"))) PPC_WEAK_FUNC(sub_8326D544);
PPC_FUNC_IMPL(__imp__sub_8326D544) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8326D548"))) PPC_WEAK_FUNC(sub_8326D548);
PPC_FUNC_IMPL(__imp__sub_8326D548) {
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
	// li r5,92
	ctx.r5.s64 = 92;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x833a2b30
	ctx.lr = 0x8326D568;
	sub_833A2B30(ctx, base);
	// li r4,72
	ctx.r4.s64 = 72;
	// addi r3,r31,4
	ctx.r3.s64 = ctx.r31.s64 + 4;
	// bl 0x83258e70
	ctx.lr = 0x8326D574;
	sub_83258E70(ctx, base);
	// stw r3,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r3.u32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne 0x8326d588
	if (!ctx.cr0.eq) goto loc_8326D588;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// b 0x8326d5a0
	goto loc_8326D5A0;
loc_8326D588:
	// addi r3,r31,76
	ctx.r3.s64 = ctx.r31.s64 + 76;
	// bl 0x8326ddd8
	ctx.lr = 0x8326D590;
	sub_8326DDD8(ctx, base);
	// stw r3,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r3.u32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bne 0x8326d5a8
	if (!ctx.cr0.eq) goto loc_8326D5A8;
loc_8326D5A0:
	// bl 0x8326d4d8
	ctx.lr = 0x8326D5A4;
	sub_8326D4D8(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
loc_8326D5A8:
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

__attribute__((alias("__imp__sub_8326D5BC"))) PPC_WEAK_FUNC(sub_8326D5BC);
PPC_FUNC_IMPL(__imp__sub_8326D5BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8326D5C0"))) PPC_WEAK_FUNC(sub_8326D5C0);
PPC_FUNC_IMPL(__imp__sub_8326D5C0) {
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
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// bl 0x83258f60
	ctx.lr = 0x8326D5E4;
	sub_83258F60(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r3,84(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 84);
	// bl 0x8326de30
	ctx.lr = 0x8326D5F0;
	sub_8326DE30(ctx, base);
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x83258fc0
	ctx.lr = 0x8326D5F8;
	sub_83258FC0(ctx, base);
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

__attribute__((alias("__imp__sub_8326D610"))) PPC_WEAK_FUNC(sub_8326D610);
PPC_FUNC_IMPL(__imp__sub_8326D610) {
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
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// bl 0x83258f60
	ctx.lr = 0x8326D630;
	sub_83258F60(ctx, base);
	// lwz r11,88(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 88);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8326d64c
	if (ctx.cr6.eq) goto loc_8326D64C;
	// li r10,0
	ctx.r10.s64 = 0;
	// mr r30,r11
	ctx.r30.u64 = ctx.r11.u64;
	// stw r10,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r10.u32);
	// b 0x8326d658
	goto loc_8326D658;
loc_8326D64C:
	// lwz r3,84(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 84);
	// bl 0x8326de70
	ctx.lr = 0x8326D654;
	sub_8326DE70(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
loc_8326D658:
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x83258fc0
	ctx.lr = 0x8326D660;
	sub_83258FC0(ctx, base);
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

__attribute__((alias("__imp__sub_8326D67C"))) PPC_WEAK_FUNC(sub_8326D67C);
PPC_FUNC_IMPL(__imp__sub_8326D67C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8326D680"))) PPC_WEAK_FUNC(sub_8326D680);
PPC_FUNC_IMPL(__imp__sub_8326D680) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x833a01ac
	ctx.lr = 0x8326D688;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// bl 0x83258f60
	ctx.lr = 0x8326D6A0;
	sub_83258F60(ctx, base);
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// beq cr6,0x8326d6bc
	if (ctx.cr6.eq) goto loc_8326D6BC;
	// lwz r11,88(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 88);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8326d6bc
	if (!ctx.cr6.eq) goto loc_8326D6BC;
	// stw r30,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r30.u32);
	// b 0x8326d6c8
	goto loc_8326D6C8;
loc_8326D6BC:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r3,84(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 84);
	// bl 0x8326de20
	ctx.lr = 0x8326D6C8;
	sub_8326DE20(ctx, base);
loc_8326D6C8:
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x83258fc0
	ctx.lr = 0x8326D6D0;
	sub_83258FC0(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x833a01fc
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8326D6D8"))) PPC_WEAK_FUNC(sub_8326D6D8);
PPC_FUNC_IMPL(__imp__sub_8326D6D8) {
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
	// addi r11,r3,7
	ctx.r11.s64 = ctx.r3.s64 + 7;
	// add r10,r3,r4
	ctx.r10.u64 = ctx.r3.u64 + ctx.r4.u64;
	// rlwinm. r11,r11,0,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFF8;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// bne 0x8326d710
	if (!ctx.cr0.eq) goto loc_8326D710;
	// lis r11,-32219
	ctx.r11.s64 = -2111504384;
	// addi r4,r11,9132
	ctx.r4.s64 = ctx.r11.s64 + 9132;
loc_8326D700:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8326D704:
	// bl 0x83257c00
	ctx.lr = 0x8326D708;
	sub_83257C00(ctx, base);
loc_8326D708:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x8326d764
	goto loc_8326D764;
loc_8326D710:
	// addi r9,r11,20
	ctx.r9.s64 = ctx.r11.s64 + 20;
	// cmplw cr6,r9,r10
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x8326d748
	if (ctx.cr6.lt) goto loc_8326D748;
	// cmpwi cr6,r5,1
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 1, ctx.xer);
	// bne cr6,0x8326d734
	if (!ctx.cr6.eq) goto loc_8326D734;
	// lis r11,-32219
	ctx.r11.s64 = -2111504384;
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r4,r11,9080
	ctx.r4.s64 = ctx.r11.s64 + 9080;
	// b 0x8326d704
	goto loc_8326D704;
loc_8326D734:
	// cmpwi cr6,r5,2
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 2, ctx.xer);
	// beq cr6,0x8326d708
	if (ctx.cr6.eq) goto loc_8326D708;
	// lis r11,-32219
	ctx.r11.s64 = -2111504384;
	// addi r4,r11,9028
	ctx.r4.s64 = ctx.r11.s64 + 9028;
	// b 0x8326d700
	goto loc_8326D700;
loc_8326D748:
	// li r8,0
	ctx.r8.s64 = 0;
	// stw r3,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r3.u32);
	// stw r9,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r9.u32);
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// stw r8,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r8.u32);
	// stw r8,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r8.u32);
	// stw r10,16(r11)
	PPC_STORE_U32(ctx.r11.u32 + 16, ctx.r10.u32);
loc_8326D764:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8326D774"))) PPC_WEAK_FUNC(sub_8326D774);
PPC_FUNC_IMPL(__imp__sub_8326D774) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8326D778"))) PPC_WEAK_FUNC(sub_8326D778);
PPC_FUNC_IMPL(__imp__sub_8326D778) {
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
	// bne cr6,0x8326d7a0
	if (!ctx.cr6.eq) goto loc_8326D7A0;
	// lis r11,-32219
	ctx.r11.s64 = -2111504384;
	// addi r4,r11,9168
	ctx.r4.s64 = ctx.r11.s64 + 9168;
	// bl 0x83257c00
	ctx.lr = 0x8326D798;
	sub_83257C00(ctx, base);
loc_8326D798:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x8326d81c
	goto loc_8326D81C;
loc_8326D7A0:
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// addi r7,r3,4
	ctx.r7.s64 = ctx.r3.s64 + 4;
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// b 0x8326d7bc
	goto loc_8326D7BC;
loc_8326D7B0:
	// addi r7,r11,4
	ctx.r7.s64 = ctx.r11.s64 + 4;
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
loc_8326D7BC:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8326d7b0
	if (!ctx.cr6.eq) goto loc_8326D7B0;
	// lwz r11,8(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// twllei r5,0
	// lwz r6,16(r3)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// add r11,r11,r5
	ctx.r11.u64 = ctx.r11.u64 + ctx.r5.u64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// divwu r11,r11,r5
	ctx.r11.u32 = ctx.r11.u32 / ctx.r5.u32;
	// mullw r9,r11,r5
	ctx.r9.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r5.s32);
	// add r11,r9,r4
	ctx.r11.u64 = ctx.r9.u64 + ctx.r4.u64;
	// addi r11,r11,7
	ctx.r11.s64 = ctx.r11.s64 + 7;
	// rlwinm r11,r11,0,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFF8;
	// addi r8,r11,20
	ctx.r8.s64 = ctx.r11.s64 + 20;
	// cmplw cr6,r8,r6
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r6.u32, ctx.xer);
	// bgt cr6,0x8326d798
	if (ctx.cr6.gt) goto loc_8326D798;
	// li r6,0
	ctx.r6.s64 = 0;
	// stw r9,8(r10)
	PPC_STORE_U32(ctx.r10.u32 + 8, ctx.r9.u32);
	// stw r11,0(r7)
	PPC_STORE_U32(ctx.r7.u32 + 0, ctx.r11.u32);
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// stw r6,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r6.u32);
	// stw r8,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r8.u32);
	// lwz r9,16(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// stw r9,16(r11)
	PPC_STORE_U32(ctx.r11.u32 + 16, ctx.r9.u32);
	// lwz r3,8(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
loc_8326D81C:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8326D82C"))) PPC_WEAK_FUNC(sub_8326D82C);
PPC_FUNC_IMPL(__imp__sub_8326D82C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8326D830"))) PPC_WEAK_FUNC(sub_8326D830);
PPC_FUNC_IMPL(__imp__sub_8326D830) {
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
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x8326d860
	if (!ctx.cr6.eq) goto loc_8326D860;
	// lis r11,-32219
	ctx.r11.s64 = -2111504384;
	// addi r4,r11,9332
	ctx.r4.s64 = ctx.r11.s64 + 9332;
loc_8326D850:
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x83257c00
	ctx.lr = 0x8326D858;
	sub_83257C00(ctx, base);
	// li r3,-1
	ctx.r3.s64 = -1;
	// b 0x8326d8c4
	goto loc_8326D8C4;
loc_8326D860:
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// cmplw cr6,r10,r4
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r4.u32, ctx.xer);
	// beq cr6,0x8326d878
	if (ctx.cr6.eq) goto loc_8326D878;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8326d860
	if (!ctx.cr6.eq) goto loc_8326D860;
loc_8326D878:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8326d88c
	if (!ctx.cr6.eq) goto loc_8326D88C;
	// lis r11,-32219
	ctx.r11.s64 = -2111504384;
	// addi r4,r11,9268
	ctx.r4.s64 = ctx.r11.s64 + 9268;
	// b 0x8326d850
	goto loc_8326D850;
loc_8326D88C:
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8326d8b0
	if (ctx.cr6.eq) goto loc_8326D8B0;
	// lwz r10,4(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8326d8b0
	if (ctx.cr6.eq) goto loc_8326D8B0;
	// lis r11,-32219
	ctx.r11.s64 = -2111504384;
	// addi r4,r11,9220
	ctx.r4.s64 = ctx.r11.s64 + 9220;
	// b 0x8326d850
	goto loc_8326D850;
loc_8326D8B0:
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r9,r11,20
	ctx.r9.s64 = ctx.r11.s64 + 20;
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r9,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r9.u32);
loc_8326D8C4:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8326D8D4"))) PPC_WEAK_FUNC(sub_8326D8D4);
PPC_FUNC_IMPL(__imp__sub_8326D8D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8326D8D8"))) PPC_WEAK_FUNC(sub_8326D8D8);
PPC_FUNC_IMPL(__imp__sub_8326D8D8) {
	PPC_FUNC_PROLOGUE();
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8326d904
	if (ctx.cr6.eq) goto loc_8326D904;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x8326d904
	if (ctx.cr6.eq) goto loc_8326D904;
	// lwz r11,12(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// cmplw cr6,r11,r4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r4.u32, ctx.xer);
	// bgt cr6,0x8326d904
	if (ctx.cr6.gt) goto loc_8326D904;
	// lwz r11,16(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// cmplw cr6,r11,r4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r4.u32, ctx.xer);
	// bgelr cr6
	if (!ctx.cr6.lt) return;
loc_8326D904:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8326D90C"))) PPC_WEAK_FUNC(sub_8326D90C);
PPC_FUNC_IMPL(__imp__sub_8326D90C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8326D910"))) PPC_WEAK_FUNC(sub_8326D910);
PPC_FUNC_IMPL(__imp__sub_8326D910) {
	PPC_FUNC_PROLOGUE();
	// ld r3,64(r3)
	ctx.r3.u64 = PPC_LOAD_U64(ctx.r3.u32 + 64);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8326D918"))) PPC_WEAK_FUNC(sub_8326D918);
PPC_FUNC_IMPL(__imp__sub_8326D918) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x833a01a4
	ctx.lr = 0x8326D920;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lwz r3,8(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x8326d95c
	if (ctx.cr6.eq) goto loc_8326D95C;
	// cmpwi cr6,r3,5
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 5, ctx.xer);
	// beq cr6,0x8326d95c
	if (ctx.cr6.eq) goto loc_8326D95C;
	// cmpwi cr6,r3,6
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 6, ctx.xer);
	// beq cr6,0x8326d95c
	if (ctx.cr6.eq) goto loc_8326D95C;
	// lis r11,-32219
	ctx.r11.s64 = -2111504384;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r4,r11,9576
	ctx.r4.s64 = ctx.r11.s64 + 9576;
loc_8326D950:
	// bl 0x83257c00
	ctx.lr = 0x8326D954;
	sub_83257C00(ctx, base);
	// li r3,-1
	ctx.r3.s64 = -1;
	// b 0x8326d9d0
	goto loc_8326D9D0;
loc_8326D95C:
	// ld r30,232(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + 232);
	// li r3,0
	ctx.r3.s64 = 0;
	// ld r29,216(r1)
	ctx.r29.u64 = PPC_LOAD_U64(ctx.r1.u32 + 216);
	// cmpd cr6,r30,r29
	ctx.cr6.compare<int64_t>(ctx.r30.s64, ctx.r29.s64, ctx.xer);
	// bge cr6,0x8326d97c
	if (!ctx.cr6.lt) goto loc_8326D97C;
	// lis r11,-32219
	ctx.r11.s64 = -2111504384;
	// addi r4,r11,9524
	ctx.r4.s64 = ctx.r11.s64 + 9524;
	// b 0x8326d950
	goto loc_8326D950;
loc_8326D97C:
	// ld r28,208(r1)
	ctx.r28.u64 = PPC_LOAD_U64(ctx.r1.u32 + 208);
	// li r31,0
	ctx.r31.s64 = 0;
	// lwz r27,228(r1)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r1.u32 + 228);
	// stw r9,16(r11)
	PPC_STORE_U32(ctx.r11.u32 + 16, ctx.r9.u32);
	// mr r9,r8
	ctx.r9.u64 = ctx.r8.u64;
	// li r8,1
	ctx.r8.s64 = 1;
	// stw r4,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r4.u32);
	// stw r5,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r5.u32);
	// stb r10,85(r11)
	PPC_STORE_U8(ctx.r11.u32 + 85, ctx.r10.u8);
	// stb r6,86(r11)
	PPC_STORE_U8(ctx.r11.u32 + 86, ctx.r6.u8);
	// stb r7,87(r11)
	PPC_STORE_U8(ctx.r11.u32 + 87, ctx.r7.u8);
	// stb r9,88(r11)
	PPC_STORE_U8(ctx.r11.u32 + 88, ctx.r9.u8);
	// std r28,24(r11)
	PPC_STORE_U64(ctx.r11.u32 + 24, ctx.r28.u64);
	// std r29,32(r11)
	PPC_STORE_U64(ctx.r11.u32 + 32, ctx.r29.u64);
	// stw r27,80(r11)
	PPC_STORE_U32(ctx.r11.u32 + 80, ctx.r27.u32);
	// std r30,72(r11)
	PPC_STORE_U64(ctx.r11.u32 + 72, ctx.r30.u64);
	// stb r31,89(r11)
	PPC_STORE_U8(ctx.r11.u32 + 89, ctx.r31.u8);
	// std r31,56(r11)
	PPC_STORE_U64(ctx.r11.u32 + 56, ctx.r31.u64);
	// std r31,64(r11)
	PPC_STORE_U64(ctx.r11.u32 + 64, ctx.r31.u64);
	// stw r31,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r31.u32);
	// stw r8,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r8.u32);
loc_8326D9D0:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x833a01f4
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8326D9D8"))) PPC_WEAK_FUNC(sub_8326D9D8);
PPC_FUNC_IMPL(__imp__sub_8326D9D8) {
	PPC_FUNC_PROLOGUE();
	// li r11,1
	ctx.r11.s64 = 1;
	// stb r11,89(r3)
	PPC_STORE_U8(ctx.r3.u32 + 89, ctx.r11.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8326D9E4"))) PPC_WEAK_FUNC(sub_8326D9E4);
PPC_FUNC_IMPL(__imp__sub_8326D9E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8326D9E8"))) PPC_WEAK_FUNC(sub_8326D9E8);
PPC_FUNC_IMPL(__imp__sub_8326D9E8) {
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
	// addi r30,r3,4
	ctx.r30.s64 = ctx.r3.s64 + 4;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8326da20
	if (ctx.cr6.eq) goto loc_8326DA20;
	// li r11,2
	ctx.r11.s64 = 2;
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// b 0x8326dac0
	goto loc_8326DAC0;
loc_8326DA20:
	// lbz r11,85(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 85);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x8326da48
	if (ctx.cr0.eq) goto loc_8326DA48;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// lwz r4,16(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x83266bc0
	ctx.lr = 0x8326DA3C;
	sub_83266BC0(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8326dab4
	if (ctx.cr6.eq) goto loc_8326DAB4;
loc_8326DA48:
	// lbz r11,86(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 86);
	// lwz r4,16(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x8326da78
	if (ctx.cr0.eq) goto loc_8326DA78;
	// bl 0x83266bf0
	ctx.lr = 0x8326DA60;
	sub_83266BF0(ctx, base);
	// cmpwi cr6,r3,-2
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -2, ctx.xer);
	// beq cr6,0x8326da90
	if (ctx.cr6.eq) goto loc_8326DA90;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// li r11,5
	ctx.r11.s64 = 5;
	// beq cr6,0x8326dab8
	if (ctx.cr6.eq) goto loc_8326DAB8;
	// b 0x8326dab4
	goto loc_8326DAB4;
loc_8326DA78:
	// mr r7,r30
	ctx.r7.u64 = ctx.r30.u64;
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,4
	ctx.r5.s64 = 4;
	// bl 0x83266c10
	ctx.lr = 0x8326DA88;
	sub_83266C10(ctx, base);
	// cmpwi cr6,r3,-2
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -2, ctx.xer);
	// bne cr6,0x8326da9c
	if (!ctx.cr6.eq) goto loc_8326DA9C;
loc_8326DA90:
	// li r3,10
	ctx.r3.s64 = 10;
	// bl 0x82e0a580
	ctx.lr = 0x8326DA98;
	sub_82E0A580(ctx, base);
	// b 0x8326dabc
	goto loc_8326DABC;
loc_8326DA9C:
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8326dab4
	if (!ctx.cr6.eq) goto loc_8326DAB4;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// li r11,2
	ctx.r11.s64 = 2;
	// bne cr6,0x8326dab8
	if (!ctx.cr6.eq) goto loc_8326DAB8;
loc_8326DAB4:
	// li r11,6
	ctx.r11.s64 = 6;
loc_8326DAB8:
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
loc_8326DABC:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8326DAC0:
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

__attribute__((alias("__imp__sub_8326DAD8"))) PPC_WEAK_FUNC(sub_8326DAD8);
PPC_FUNC_IMPL(__imp__sub_8326DAD8) {
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
	// lwz r11,12(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r30,1
	ctx.r30.s64 = 1;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8326db8c
	if (!ctx.cr6.eq) goto loc_8326DB8C;
	// lbz r11,89(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 89);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x8326db8c
	if (!ctx.cr0.eq) goto loc_8326DB8C;
	// ld r11,56(r3)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r3.u32 + 56);
	// ld r8,32(r3)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r3.u32 + 32);
	// ld r9,24(r3)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r3.u32 + 24);
	// ld r10,40(r3)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r3.u32 + 40);
	// subf r6,r11,r8
	ctx.r6.s64 = ctx.r8.s64 - ctx.r11.s64;
	// add r5,r9,r11
	ctx.r5.u64 = ctx.r9.u64 + ctx.r11.u64;
	// cmpd cr6,r6,r10
	ctx.cr6.compare<int64_t>(ctx.r6.s64, ctx.r10.s64, ctx.xer);
	// blt cr6,0x8326db30
	if (ctx.cr6.lt) goto loc_8326DB30;
	// mr r6,r10
	ctx.r6.u64 = ctx.r10.u64;
loc_8326DB30:
	// std r6,48(r31)
	PPC_STORE_U64(ctx.r31.u32 + 48, ctx.r6.u64);
	// cmpdi cr6,r6,0
	ctx.cr6.compare<int64_t>(ctx.r6.s64, 0, ctx.xer);
	// bne cr6,0x8326db4c
	if (!ctx.cr6.eq) goto loc_8326DB4C;
	// li r11,3
	ctx.r11.s64 = 3;
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// b 0x8326dc14
	goto loc_8326DC14;
loc_8326DB4C:
	// ld r8,72(r31)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r31.u32 + 72);
	// extsw r9,r11
	ctx.r9.s64 = ctx.r11.s32;
	// lwz r10,80(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	// subf r8,r11,r8
	ctx.r8.s64 = ctx.r8.s64 - ctx.r11.s64;
	// lwz r4,4(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// add r7,r10,r9
	ctx.r7.u64 = ctx.r10.u64 + ctx.r9.u64;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x83266d70
	ctx.lr = 0x8326DB6C;
	sub_83266D70(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x8326db88
	if (ctx.cr0.eq) goto loc_8326DB88;
	// li r11,1
	ctx.r11.s64 = 1;
	// li r10,4
	ctx.r10.s64 = 4;
	// stb r11,84(r31)
	PPC_STORE_U8(ctx.r31.u32 + 84, ctx.r11.u8);
	// stw r10,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r10.u32);
	// b 0x8326dc10
	goto loc_8326DC10;
loc_8326DB88:
	// stw r30,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r30.u32);
loc_8326DB8C:
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x8326dc10
	if (!ctx.cr6.eq) goto loc_8326DC10;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r4,4(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// bl 0x83266da8
	ctx.lr = 0x8326DBA8;
	sub_83266DA8(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8326dc10
	if (ctx.cr6.eq) goto loc_8326DC10;
	// li r11,0
	ctx.r11.s64 = 0;
	// lwz r4,4(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// stw r11,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r11.u32);
	// bl 0x83266dd8
	ctx.lr = 0x8326DBCC;
	sub_83266DD8(ctx, base);
	// ld r10,88(r1)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// cmpdi cr6,r10,0
	ctx.cr6.compare<int64_t>(ctx.r10.s64, 0, ctx.xer);
	// bge cr6,0x8326dbe4
	if (!ctx.cr6.lt) goto loc_8326DBE4;
	// li r11,4
	ctx.r11.s64 = 4;
	// stb r30,84(r31)
	PPC_STORE_U8(ctx.r31.u32 + 84, ctx.r30.u8);
	// b 0x8326dc0c
	goto loc_8326DC0C;
loc_8326DBE4:
	// ld r11,56(r31)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r31.u32 + 56);
	// ld r9,32(r31)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r31.u32 + 32);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// std r11,56(r31)
	PPC_STORE_U64(ctx.r31.u32 + 56, ctx.r11.u64);
	// cmpd cr6,r11,r9
	ctx.cr6.compare<int64_t>(ctx.r11.s64, ctx.r9.s64, ctx.xer);
	// bge cr6,0x8326dc08
	if (!ctx.cr6.lt) goto loc_8326DC08;
	// ld r10,72(r31)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r31.u32 + 72);
	// cmpd cr6,r11,r10
	ctx.cr6.compare<int64_t>(ctx.r11.s64, ctx.r10.s64, ctx.xer);
	// blt cr6,0x8326dc10
	if (ctx.cr6.lt) goto loc_8326DC10;
loc_8326DC08:
	// li r11,3
	ctx.r11.s64 = 3;
loc_8326DC0C:
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
loc_8326DC10:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8326DC14:
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

__attribute__((alias("__imp__sub_8326DC2C"))) PPC_WEAK_FUNC(sub_8326DC2C);
PPC_FUNC_IMPL(__imp__sub_8326DC2C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8326DC30"))) PPC_WEAK_FUNC(sub_8326DC30);
PPC_FUNC_IMPL(__imp__sub_8326DC30) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x833a01ac
	ctx.lr = 0x8326DC38;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lbz r11,89(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 89);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r30,0
	ctx.r30.s64 = 0;
	// li r29,4
	ctx.r29.s64 = 4;
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x8326dc84
	if (ctx.cr0.eq) goto loc_8326DC84;
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8326dc84
	if (ctx.cr6.eq) goto loc_8326DC84;
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x8326dc7c
	if (ctx.cr6.eq) goto loc_8326DC7C;
	// cmpwi cr6,r11,6
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 6, ctx.xer);
	// beq cr6,0x8326dc7c
	if (ctx.cr6.eq) goto loc_8326DC7C;
	// cmpwi cr6,r11,5
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 5, ctx.xer);
	// bne cr6,0x8326dd18
	if (!ctx.cr6.eq) goto loc_8326DD18;
	// std r30,64(r3)
	PPC_STORE_U64(ctx.r3.u32 + 64, ctx.r30.u64);
loc_8326DC7C:
	// stw r30,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r30.u32);
	// stw r30,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r30.u32);
loc_8326DC84:
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x8326dca0
	if (!ctx.cr6.eq) goto loc_8326DCA0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8326d9e8
	ctx.lr = 0x8326DC98;
	sub_8326D9E8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x8326dd68
	if (ctx.cr0.eq) goto loc_8326DD68;
loc_8326DCA0:
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// bne cr6,0x8326dcbc
	if (!ctx.cr6.eq) goto loc_8326DCBC;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8326dad8
	ctx.lr = 0x8326DCB4;
	sub_8326DAD8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x8326dd68
	if (ctx.cr0.eq) goto loc_8326DD68;
loc_8326DCBC:
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bne cr6,0x8326dcd8
	if (!ctx.cr6.eq) goto loc_8326DCD8;
	// lbz r11,87(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 87);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x8326dd44
	if (!ctx.cr0.eq) goto loc_8326DD44;
	// stw r29,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r29.u32);
loc_8326DCD8:
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// bne cr6,0x8326dd68
	if (!ctx.cr6.eq) goto loc_8326DD68;
	// lbz r11,88(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 88);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x8326dd00
	if (ctx.cr0.eq) goto loc_8326DD00;
	// lwz r4,4(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x83266c48
	ctx.lr = 0x8326DCFC;
	sub_83266C48(ctx, base);
	// stw r30,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r30.u32);
loc_8326DD00:
	// lbz r11,84(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 84);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x8326dd58
	if (ctx.cr0.eq) goto loc_8326DD58;
	// li r11,6
	ctx.r11.s64 = 6;
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// b 0x8326dd68
	goto loc_8326DD68;
loc_8326DD18:
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bne cr6,0x8326dd24
	if (!ctx.cr6.eq) goto loc_8326DD24;
	// stw r29,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r29.u32);
loc_8326DD24:
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// bne cr6,0x8326dc84
	if (!ctx.cr6.eq) goto loc_8326DC84;
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8326dc84
	if (!ctx.cr6.eq) goto loc_8326DC84;
	// stw r29,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r29.u32);
	// b 0x8326dc84
	goto loc_8326DC84;
loc_8326DD44:
	// lwz r4,4(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x83266e08
	ctx.lr = 0x8326DD50;
	sub_83266E08(ctx, base);
	// stw r29,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r29.u32);
	// b 0x8326dd68
	goto loc_8326DD68;
loc_8326DD58:
	// ld r11,56(r31)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r31.u32 + 56);
	// li r10,5
	ctx.r10.s64 = 5;
	// stw r10,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r10.u32);
	// std r11,64(r31)
	PPC_STORE_U64(ctx.r31.u32 + 64, ctx.r11.u64);
loc_8326DD68:
	// lbz r11,89(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 89);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x8326dda4
	if (ctx.cr0.eq) goto loc_8326DDA4;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8326dda4
	if (ctx.cr6.eq) goto loc_8326DDA4;
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x8326dd9c
	if (ctx.cr6.eq) goto loc_8326DD9C;
	// cmpwi cr6,r11,6
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 6, ctx.xer);
	// beq cr6,0x8326dd9c
	if (ctx.cr6.eq) goto loc_8326DD9C;
	// cmpwi cr6,r11,5
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 5, ctx.xer);
	// bne cr6,0x8326ddac
	if (!ctx.cr6.eq) goto loc_8326DDAC;
	// std r30,64(r31)
	PPC_STORE_U64(ctx.r31.u32 + 64, ctx.r30.u64);
loc_8326DD9C:
	// stw r30,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r30.u32);
	// stw r30,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r30.u32);
loc_8326DDA4:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x833a01fc
	__restgprlr_29(ctx, base);
	return;
loc_8326DDAC:
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bne cr6,0x8326ddb8
	if (!ctx.cr6.eq) goto loc_8326DDB8;
	// stw r29,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r29.u32);
loc_8326DDB8:
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// bne cr6,0x8326dda4
	if (!ctx.cr6.eq) goto loc_8326DDA4;
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8326dda4
	if (!ctx.cr6.eq) goto loc_8326DDA4;
	// stw r29,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r29.u32);
	// b 0x8326dda4
	goto loc_8326DDA4;
}

__attribute__((alias("__imp__sub_8326DDD8"))) PPC_WEAK_FUNC(sub_8326DDD8);
PPC_FUNC_IMPL(__imp__sub_8326DDD8) {
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
	// li r5,8
	ctx.r5.s64 = 8;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x833a2b30
	ctx.lr = 0x8326DDF8;
	sub_833A2B30(ctx, base);
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

__attribute__((alias("__imp__sub_8326DE10"))) PPC_WEAK_FUNC(sub_8326DE10);
PPC_FUNC_IMPL(__imp__sub_8326DE10) {
	PPC_FUNC_PROLOGUE();
	// li r5,8
	ctx.r5.s64 = 8;
	// li r4,0
	ctx.r4.s64 = 0;
	// b 0x833a2b30
	sub_833A2B30(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8326DE1C"))) PPC_WEAK_FUNC(sub_8326DE1C);
PPC_FUNC_IMPL(__imp__sub_8326DE1C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8326DE20"))) PPC_WEAK_FUNC(sub_8326DE20);
PPC_FUNC_IMPL(__imp__sub_8326DE20) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
	// stw r4,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r4.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8326DE30"))) PPC_WEAK_FUNC(sub_8326DE30);
PPC_FUNC_IMPL(__imp__sub_8326DE30) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8326de44
	if (ctx.cr6.eq) goto loc_8326DE44;
	// stw r4,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r4.u32);
	// b 0x8326de64
	goto loc_8326DE64;
loc_8326DE44:
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// b 0x8326de58
	goto loc_8326DE58;
loc_8326DE50:
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
loc_8326DE58:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8326de50
	if (!ctx.cr6.eq) goto loc_8326DE50;
	// stw r4,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r4.u32);
loc_8326DE64:
	// stw r4,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r4.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8326DE6C"))) PPC_WEAK_FUNC(sub_8326DE6C);
PPC_FUNC_IMPL(__imp__sub_8326DE6C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8326DE70"))) PPC_WEAK_FUNC(sub_8326DE70);
PPC_FUNC_IMPL(__imp__sub_8326DE70) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r8,r3
	ctx.r8.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8326de88
	if (!ctx.cr6.eq) goto loc_8326DE88;
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_8326DE88:
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// mr r9,r8
	ctx.r9.u64 = ctx.r8.u64;
	// b 0x8326deb8
	goto loc_8326DEB8;
loc_8326DE98:
	// lwz r7,4(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// lwz r6,4(r3)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmpw cr6,r7,r6
	ctx.cr6.compare<int32_t>(ctx.r7.s32, ctx.r6.s32, ctx.xer);
	// ble cr6,0x8326deb0
	if (!ctx.cr6.gt) goto loc_8326DEB0;
	// mr r9,r11
	ctx.r9.u64 = ctx.r11.u64;
	// mr r3,r10
	ctx.r3.u64 = ctx.r10.u64;
loc_8326DEB0:
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// lwz r10,0(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
loc_8326DEB8:
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x8326de98
	if (!ctx.cr6.eq) goto loc_8326DE98;
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r10,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r10.u32);
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// stw r11,4(r8)
	PPC_STORE_U32(ctx.r8.u32 + 4, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8326DED8"))) PPC_WEAK_FUNC(sub_8326DED8);
PPC_FUNC_IMPL(__imp__sub_8326DED8) {
	PPC_FUNC_PROLOGUE();
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// lwz r3,96(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 96);
	// li r4,6
	ctx.r4.s64 = 6;
	// b 0x83274ee0
	sub_83274EE0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8326DEE8"))) PPC_WEAK_FUNC(sub_8326DEE8);
PPC_FUNC_IMPL(__imp__sub_8326DEE8) {
	PPC_FUNC_PROLOGUE();
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// lwz r3,96(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 96);
	// li r4,5
	ctx.r4.s64 = 5;
	// b 0x83274ee0
	sub_83274EE0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8326DEF8"))) PPC_WEAK_FUNC(sub_8326DEF8);
PPC_FUNC_IMPL(__imp__sub_8326DEF8) {
	PPC_FUNC_PROLOGUE();
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8326df08
	if (ctx.cr6.eq) goto loc_8326DF08;
	// lwz r3,96(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 96);
	// b 0x8326df0c
	goto loc_8326DF0C;
loc_8326DF08:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8326DF0C:
	// b 0x83274ee0
	sub_83274EE0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8326DF10"))) PPC_WEAK_FUNC(sub_8326DF10);
PPC_FUNC_IMPL(__imp__sub_8326DF10) {
	PPC_FUNC_PROLOGUE();
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8326df20
	if (ctx.cr6.eq) goto loc_8326DF20;
	// lwz r3,96(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 96);
	// b 0x8326df24
	goto loc_8326DF24;
loc_8326DF20:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8326DF24:
	// b 0x83274db0
	sub_83274DB0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8326DF28"))) PPC_WEAK_FUNC(sub_8326DF28);
PPC_FUNC_IMPL(__imp__sub_8326DF28) {
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
	// bl 0x832769c8
	ctx.lr = 0x8326DF4C;
	sub_832769C8(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x832723c8
	ctx.lr = 0x8326DF58;
	sub_832723C8(ctx, base);
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

__attribute__((alias("__imp__sub_8326DF70"))) PPC_WEAK_FUNC(sub_8326DF70);
PPC_FUNC_IMPL(__imp__sub_8326DF70) {
	PPC_FUNC_PROLOGUE();
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8326DF80"))) PPC_WEAK_FUNC(sub_8326DF80);
PPC_FUNC_IMPL(__imp__sub_8326DF80) {
	PPC_FUNC_PROLOGUE();
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8326DF8C"))) PPC_WEAK_FUNC(sub_8326DF8C);
PPC_FUNC_IMPL(__imp__sub_8326DF8C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8326DF90"))) PPC_WEAK_FUNC(sub_8326DF90);
PPC_FUNC_IMPL(__imp__sub_8326DF90) {
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
	// bl 0x8326df70
	ctx.lr = 0x8326DFAC;
	sub_8326DF70(ctx, base);
	// cmpwi cr6,r3,1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 1, ctx.xer);
	// beq cr6,0x8326dfd0
	if (ctx.cr6.eq) goto loc_8326DFD0;
	// li r3,-12
	ctx.r3.s64 = -12;
	// bl 0x8326ef70
	ctx.lr = 0x8326DFBC;
	sub_8326EF70(ctx, base);
	// lis r11,-32219
	ctx.r11.s64 = -2111504384;
	// addi r3,r11,9724
	ctx.r3.s64 = ctx.r11.s64 + 9724;
	// bl 0x83278688
	ctx.lr = 0x8326DFC8;
	sub_83278688(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x8326e01c
	goto loc_8326E01C;
loc_8326DFD0:
	// lwz r3,96(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 96);
	// bl 0x83274c50
	ctx.lr = 0x8326DFD8;
	sub_83274C50(ctx, base);
	// mr. r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// bge 0x8326dfe8
	if (!ctx.cr0.lt) goto loc_8326DFE8;
loc_8326DFE0:
	// li r3,4
	ctx.r3.s64 = 4;
	// b 0x8326e01c
	goto loc_8326E01C;
loc_8326DFE8:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x832787a0
	ctx.lr = 0x8326DFF0;
	sub_832787A0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x8326dfe0
	if (!ctx.cr0.eq) goto loc_8326DFE0;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmpwi cr6,r3,2
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 2, ctx.xer);
	// bne cr6,0x8326e01c
	if (!ctx.cr6.eq) goto loc_8326E01C;
	// cmpwi cr6,r30,4
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 4, ctx.xer);
	// beq cr6,0x8326e018
	if (ctx.cr6.eq) goto loc_8326E018;
	// cmpwi cr6,r30,6
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 6, ctx.xer);
	// li r3,1
	ctx.r3.s64 = 1;
	// bne cr6,0x8326e01c
	if (!ctx.cr6.eq) goto loc_8326E01C;
loc_8326E018:
	// li r3,2
	ctx.r3.s64 = 2;
loc_8326E01C:
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

__attribute__((alias("__imp__sub_8326E034"))) PPC_WEAK_FUNC(sub_8326E034);
PPC_FUNC_IMPL(__imp__sub_8326E034) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8326E038"))) PPC_WEAK_FUNC(sub_8326E038);
PPC_FUNC_IMPL(__imp__sub_8326E038) {
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
	// lwz r11,1652(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1652);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r31,96(r3)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 96);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x8326e09c
	if (!ctx.cr6.eq) goto loc_8326E09C;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83277320
	ctx.lr = 0x8326E06C;
	sub_83277320(ctx, base);
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// beq cr6,0x8326e09c
	if (ctx.cr6.eq) goto loc_8326E09C;
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// bl 0x832777d8
	ctx.lr = 0x8326E084;
	sub_832777D8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r5,84(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r4,88(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// bl 0x83277658
	ctx.lr = 0x8326E094;
	sub_83277658(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,1652(r30)
	PPC_STORE_U32(ctx.r30.u32 + 1652, ctx.r11.u32);
loc_8326E09C:
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

__attribute__((alias("__imp__sub_8326E0B4"))) PPC_WEAK_FUNC(sub_8326E0B4);
PPC_FUNC_IMPL(__imp__sub_8326E0B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8326E0B8"))) PPC_WEAK_FUNC(sub_8326E0B8);
PPC_FUNC_IMPL(__imp__sub_8326E0B8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x833a01ac
	ctx.lr = 0x8326E0C0;
	__savegprlr_29(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x8326df70
	ctx.lr = 0x8326E0CC;
	sub_8326DF70(ctx, base);
	// cmpwi cr6,r3,1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 1, ctx.xer);
	// beq cr6,0x8326e0e4
	if (ctx.cr6.eq) goto loc_8326E0E4;
	// lis r11,-32219
	ctx.r11.s64 = -2111504384;
	// addi r3,r11,9796
	ctx.r3.s64 = ctx.r11.s64 + 9796;
	// bl 0x83278688
	ctx.lr = 0x8326E0E0;
	sub_83278688(ctx, base);
	// b 0x8326e124
	goto loc_8326E124;
loc_8326E0E4:
	// lwz r29,96(r31)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r31.u32 + 96);
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// bne cr6,0x8326e12c
	if (!ctx.cr6.eq) goto loc_8326E12C;
	// li r5,0
	ctx.r5.s64 = 0;
loc_8326E0F4:
	// li r4,15
	ctx.r4.s64 = 15;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
loc_8326E0FC:
	// bl 0x83274ee0
	ctx.lr = 0x8326E100;
	sub_83274EE0(ctx, base);
loc_8326E100:
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// stw r11,1648(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1648, ctx.r11.u32);
	// stw r11,1652(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1652, ctx.r11.u32);
loc_8326E110:
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
loc_8326E114:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r5,80(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r4,84(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// bl 0x83277658
	ctx.lr = 0x8326E124;
	sub_83277658(ctx, base);
loc_8326E124:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x833a01fc
	__restgprlr_29(ctx, base);
	return;
loc_8326E12C:
	// cmpwi cr6,r4,1
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 1, ctx.xer);
	// bne cr6,0x8326e13c
	if (!ctx.cr6.eq) goto loc_8326E13C;
	// li r5,1
	ctx.r5.s64 = 1;
	// b 0x8326e0f4
	goto loc_8326E0F4;
loc_8326E13C:
	// cmpwi cr6,r4,2
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 2, ctx.xer);
	// bne cr6,0x8326e168
	if (!ctx.cr6.eq) goto loc_8326E168;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// li r4,15
	ctx.r4.s64 = 15;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x8326e160
	if (!ctx.cr6.eq) goto loc_8326E160;
	// li r5,2
	ctx.r5.s64 = 2;
	// b 0x8326e0fc
	goto loc_8326E0FC;
loc_8326E160:
	// li r5,1
	ctx.r5.s64 = 1;
	// b 0x8326e0fc
	goto loc_8326E0FC;
loc_8326E168:
	// cmpwi cr6,r4,4
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 4, ctx.xer);
	// bne cr6,0x8326e178
	if (!ctx.cr6.eq) goto loc_8326E178;
	// li r5,4
	ctx.r5.s64 = 4;
	// b 0x8326e0f4
	goto loc_8326E0F4;
loc_8326E178:
	// cmpwi cr6,r4,5
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 5, ctx.xer);
	// bne cr6,0x8326e188
	if (!ctx.cr6.eq) goto loc_8326E188;
	// li r5,5
	ctx.r5.s64 = 5;
	// b 0x8326e0f4
	goto loc_8326E0F4;
loc_8326E188:
	// cmpwi cr6,r4,6
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 6, ctx.xer);
	// bne cr6,0x8326e1c8
	if (!ctx.cr6.eq) goto loc_8326E1C8;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,15
	ctx.r4.s64 = 15;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x83274ee0
	ctx.lr = 0x8326E1A0;
	sub_83274EE0(ctx, base);
	// lwz r11,1660(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1660);
	// li r30,1
	ctx.r30.s64 = 1;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r30,1648(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1648, ctx.r30.u32);
	// beq cr6,0x8326e1d8
	if (ctx.cr6.eq) goto loc_8326E1D8;
	// lwz r10,1656(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1656);
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r9,1652(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1652, ctx.r9.u32);
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// b 0x8326e110
	goto loc_8326E110;
loc_8326E1C8:
	// lis r11,-32219
	ctx.r11.s64 = -2111504384;
	// addi r3,r11,9764
	ctx.r3.s64 = ctx.r11.s64 + 9764;
	// bl 0x83278688
	ctx.lr = 0x8326E1D4;
	sub_83278688(ctx, base);
	// b 0x8326e100
	goto loc_8326E100;
loc_8326E1D8:
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// li r3,30000
	ctx.r3.s64 = 30000;
	// bl 0x832777d8
	ctx.lr = 0x8326E1E8;
	sub_832777D8(ctx, base);
	// stw r30,1652(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1652, ctx.r30.u32);
	// b 0x8326e114
	goto loc_8326E114;
}

__attribute__((alias("__imp__sub_8326E1F0"))) PPC_WEAK_FUNC(sub_8326E1F0);
PPC_FUNC_IMPL(__imp__sub_8326E1F0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x833a01a8
	ctx.lr = 0x8326E1F8;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r28,0
	ctx.r28.s64 = 0;
	// li r29,1
	ctx.r29.s64 = 1;
	// stw r28,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r28.u32);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// stw r29,0(r5)
	PPC_STORE_U32(ctx.r5.u32 + 0, ctx.r29.u32);
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// bl 0x8326df70
	ctx.lr = 0x8326E21C;
	sub_8326DF70(ctx, base);
	// cmpwi cr6,r3,1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 1, ctx.xer);
	// beq cr6,0x8326e234
	if (ctx.cr6.eq) goto loc_8326E234;
	// lis r11,-32219
	ctx.r11.s64 = -2111504384;
	// addi r3,r11,9884
	ctx.r3.s64 = ctx.r11.s64 + 9884;
	// bl 0x83278688
	ctx.lr = 0x8326E230;
	sub_83278688(ctx, base);
	// b 0x8326e27c
	goto loc_8326E27C;
loc_8326E234:
	// lwz r3,96(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + 96);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8326e27c
	if (ctx.cr6.eq) goto loc_8326E27C;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x832781e0
	ctx.lr = 0x8326E24C;
	sub_832781E0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x8326e268
	if (ctx.cr0.eq) goto loc_8326E268;
	// li r3,-309
	ctx.r3.s64 = -309;
	// bl 0x8326ef70
	ctx.lr = 0x8326E25C;
	sub_8326EF70(ctx, base);
	// lis r11,-32219
	ctx.r11.s64 = -2111504384;
	// addi r3,r11,9844
	ctx.r3.s64 = ctx.r11.s64 + 9844;
	// bl 0x83278688
	ctx.lr = 0x8326E268;
	sub_83278688(ctx, base);
loc_8326E268:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bge cr6,0x8326e27c
	if (!ctx.cr6.lt) goto loc_8326E27C;
	// stw r28,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r28.u32);
	// stw r29,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r29.u32);
loc_8326E27C:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x833a01f8
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8326E284"))) PPC_WEAK_FUNC(sub_8326E284);
PPC_FUNC_IMPL(__imp__sub_8326E284) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8326E288"))) PPC_WEAK_FUNC(sub_8326E288);
PPC_FUNC_IMPL(__imp__sub_8326E288) {
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
	// bl 0x8326df70
	ctx.lr = 0x8326E2A8;
	sub_8326DF70(ctx, base);
	// cmpwi cr6,r3,1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 1, ctx.xer);
	// beq cr6,0x8326e2c0
	if (ctx.cr6.eq) goto loc_8326E2C0;
	// lis r11,-32219
	ctx.r11.s64 = -2111504384;
	// addi r3,r11,9928
	ctx.r3.s64 = ctx.r11.s64 + 9928;
	// bl 0x83278688
	ctx.lr = 0x8326E2BC;
	sub_83278688(ctx, base);
	// b 0x8326e2e4
	goto loc_8326E2E4;
loc_8326E2C0:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83280290
	ctx.lr = 0x8326E2CC;
	sub_83280290(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r31,1504
	ctx.r3.s64 = ctx.r31.s64 + 1504;
	// bl 0x8326e9c0
	ctx.lr = 0x8326E2D8;
	sub_8326E9C0(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r31,1544
	ctx.r3.s64 = ctx.r31.s64 + 1544;
	// bl 0x8326e9c0
	ctx.lr = 0x8326E2E4;
	sub_8326E9C0(ctx, base);
loc_8326E2E4:
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

__attribute__((alias("__imp__sub_8326E2FC"))) PPC_WEAK_FUNC(sub_8326E2FC);
PPC_FUNC_IMPL(__imp__sub_8326E2FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8326E300"))) PPC_WEAK_FUNC(sub_8326E300);
PPC_FUNC_IMPL(__imp__sub_8326E300) {
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
	// bl 0x8326df70
	ctx.lr = 0x8326E314;
	sub_8326DF70(ctx, base);
	// cmpwi cr6,r3,1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 1, ctx.xer);
	// beq cr6,0x8326e330
	if (ctx.cr6.eq) goto loc_8326E330;
	// lis r11,-32219
	ctx.r11.s64 = -2111504384;
	// addi r3,r11,9972
	ctx.r3.s64 = ctx.r11.s64 + 9972;
	// bl 0x83278688
	ctx.lr = 0x8326E328;
	sub_83278688(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x8326e334
	goto loc_8326E334;
loc_8326E330:
	// lwz r3,1292(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + 1292);
loc_8326E334:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8326E344"))) PPC_WEAK_FUNC(sub_8326E344);
PPC_FUNC_IMPL(__imp__sub_8326E344) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8326E348"))) PPC_WEAK_FUNC(sub_8326E348);
PPC_FUNC_IMPL(__imp__sub_8326E348) {
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
	// bl 0x8326df70
	ctx.lr = 0x8326E35C;
	sub_8326DF70(ctx, base);
	// cmpwi cr6,r3,1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 1, ctx.xer);
	// beq cr6,0x8326e378
	if (ctx.cr6.eq) goto loc_8326E378;
	// lis r11,-32219
	ctx.r11.s64 = -2111504384;
	// addi r3,r11,10020
	ctx.r3.s64 = ctx.r11.s64 + 10020;
	// bl 0x83278688
	ctx.lr = 0x8326E370;
	sub_83278688(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x8326e37c
	goto loc_8326E37C;
loc_8326E378:
	// lwz r3,96(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + 96);
loc_8326E37C:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8326E38C"))) PPC_WEAK_FUNC(sub_8326E38C);
PPC_FUNC_IMPL(__imp__sub_8326E38C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8326E390"))) PPC_WEAK_FUNC(sub_8326E390);
PPC_FUNC_IMPL(__imp__sub_8326E390) {
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
	// bl 0x8326df70
	ctx.lr = 0x8326E3A4;
	sub_8326DF70(ctx, base);
	// cmpwi cr6,r3,1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 1, ctx.xer);
	// beq cr6,0x8326e3b8
	if (ctx.cr6.eq) goto loc_8326E3B8;
	// lis r11,-32219
	ctx.r11.s64 = -2111504384;
	// addi r3,r11,10104
	ctx.r3.s64 = ctx.r11.s64 + 10104;
	// b 0x8326e3d0
	goto loc_8326E3D0;
loc_8326E3B8:
	// lwz r3,96(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + 96);
	// bl 0x83280460
	ctx.lr = 0x8326E3C0;
	sub_83280460(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x8326e3d4
	if (ctx.cr0.eq) goto loc_8326E3D4;
	// lis r11,-32219
	ctx.r11.s64 = -2111504384;
	// addi r3,r11,10064
	ctx.r3.s64 = ctx.r11.s64 + 10064;
loc_8326E3D0:
	// bl 0x83278688
	ctx.lr = 0x8326E3D4;
	sub_83278688(ctx, base);
loc_8326E3D4:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8326E3E4"))) PPC_WEAK_FUNC(sub_8326E3E4);
PPC_FUNC_IMPL(__imp__sub_8326E3E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8326E3E8"))) PPC_WEAK_FUNC(sub_8326E3E8);
PPC_FUNC_IMPL(__imp__sub_8326E3E8) {
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
	// bl 0x8326df70
	ctx.lr = 0x8326E3FC;
	sub_8326DF70(ctx, base);
	// cmpwi cr6,r3,1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 1, ctx.xer);
	// beq cr6,0x8326e410
	if (ctx.cr6.eq) goto loc_8326E410;
	// lis r11,-32219
	ctx.r11.s64 = -2111504384;
	// addi r3,r11,10196
	ctx.r3.s64 = ctx.r11.s64 + 10196;
	// b 0x8326e428
	goto loc_8326E428;
loc_8326E410:
	// lwz r3,96(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + 96);
	// bl 0x832804c8
	ctx.lr = 0x8326E418;
	sub_832804C8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x8326e42c
	if (ctx.cr0.eq) goto loc_8326E42C;
	// lis r11,-32219
	ctx.r11.s64 = -2111504384;
	// addi r3,r11,10152
	ctx.r3.s64 = ctx.r11.s64 + 10152;
loc_8326E428:
	// bl 0x83278688
	ctx.lr = 0x8326E42C;
	sub_83278688(ctx, base);
loc_8326E42C:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8326E43C"))) PPC_WEAK_FUNC(sub_8326E43C);
PPC_FUNC_IMPL(__imp__sub_8326E43C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8326E440"))) PPC_WEAK_FUNC(sub_8326E440);
PPC_FUNC_IMPL(__imp__sub_8326E440) {
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
	// bl 0x8326df90
	ctx.lr = 0x8326E458;
	sub_8326DF90(ctx, base);
	// lwz r11,1604(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1604);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x8326e498
	if (!ctx.cr6.eq) goto loc_8326E498;
	// lwz r11,1608(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1608);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x8326e498
	if (!ctx.cr6.eq) goto loc_8326E498;
	// lwz r11,1620(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1620);
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x8326e484
	if (ctx.cr6.eq) goto loc_8326E484;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bne cr6,0x8326e498
	if (!ctx.cr6.eq) goto loc_8326E498;
loc_8326E484:
	// cmpwi cr6,r3,1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 1, ctx.xer);
	// beq cr6,0x8326e494
	if (ctx.cr6.eq) goto loc_8326E494;
	// cmpwi cr6,r3,3
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 3, ctx.xer);
	// bne cr6,0x8326e498
	if (!ctx.cr6.eq) goto loc_8326E498;
loc_8326E494:
	// li r3,2
	ctx.r3.s64 = 2;
loc_8326E498:
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

__attribute__((alias("__imp__sub_8326E4AC"))) PPC_WEAK_FUNC(sub_8326E4AC);
PPC_FUNC_IMPL(__imp__sub_8326E4AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8326E4B0"))) PPC_WEAK_FUNC(sub_8326E4B0);
PPC_FUNC_IMPL(__imp__sub_8326E4B0) {
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
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// bl 0x8326df70
	ctx.lr = 0x8326E4D4;
	sub_8326DF70(ctx, base);
	// cmpwi cr6,r3,1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 1, ctx.xer);
	// beq cr6,0x8326e4ec
	if (ctx.cr6.eq) goto loc_8326E4EC;
	// lis r11,-32219
	ctx.r11.s64 = -2111504384;
	// addi r3,r11,10244
	ctx.r3.s64 = ctx.r11.s64 + 10244;
	// bl 0x83278688
	ctx.lr = 0x8326E4E8;
	sub_83278688(ctx, base);
	// b 0x8326e500
	goto loc_8326E500;
loc_8326E4EC:
	// mr r3,r10
	ctx.r3.u64 = ctx.r10.u64;
	// bl 0x8326e348
	ctx.lr = 0x8326E4F4;
	sub_8326E348(ctx, base);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x832803f8
	ctx.lr = 0x8326E500;
	sub_832803F8(ctx, base);
loc_8326E500:
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

__attribute__((alias("__imp__sub_8326E518"))) PPC_WEAK_FUNC(sub_8326E518);
PPC_FUNC_IMPL(__imp__sub_8326E518) {
	PPC_FUNC_PROLOGUE();
	// lis r11,6
	ctx.r11.s64 = 393216;
	// lis r10,1
	ctx.r10.s64 = 65536;
	// ori r11,r11,38188
	ctx.r11.u64 = ctx.r11.u64 | 38188;
	// ori r10,r10,15464
	ctx.r10.u64 = ctx.r10.u64 | 15464;
	// li r9,8192
	ctx.r9.s64 = 8192;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// stw r10,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r10.u32);
	// stw r9,0(r5)
	PPC_STORE_U32(ctx.r5.u32 + 0, ctx.r9.u32);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// addi r3,r11,8192
	ctx.r3.s64 = ctx.r11.s64 + 8192;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8326E54C"))) PPC_WEAK_FUNC(sub_8326E54C);
PPC_FUNC_IMPL(__imp__sub_8326E54C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8326E550"))) PPC_WEAK_FUNC(sub_8326E550);
PPC_FUNC_IMPL(__imp__sub_8326E550) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,96(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 96);
	// b 0x83274f70
	sub_83274F70(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8326E558"))) PPC_WEAK_FUNC(sub_8326E558);
PPC_FUNC_IMPL(__imp__sub_8326E558) {
	PPC_FUNC_PROLOGUE();
	// mulli r11,r4,40
	ctx.r11.s64 = ctx.r4.s64 * 40;
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// lwz r3,1540(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1540);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8326E568"))) PPC_WEAK_FUNC(sub_8326E568);
PPC_FUNC_IMPL(__imp__sub_8326E568) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31827
	ctx.r11.s64 = -2085814272;
	// rlwinm r10,r3,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 3) & 0xFFFFFFF8;
	// addi r11,r11,9780
	ctx.r11.s64 = ctx.r11.s64 + 9780;
	// add r3,r10,r11
	ctx.r3.u64 = ctx.r10.u64 + ctx.r11.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8326E57C"))) PPC_WEAK_FUNC(sub_8326E57C);
PPC_FUNC_IMPL(__imp__sub_8326E57C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8326E580"))) PPC_WEAK_FUNC(sub_8326E580);
PPC_FUNC_IMPL(__imp__sub_8326E580) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31827
	ctx.r11.s64 = -2085814272;
	// rlwinm r10,r3,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 3) & 0xFFFFFFF8;
	// addi r11,r11,9780
	ctx.r11.s64 = ctx.r11.s64 + 9780;
	// lwzx r3,r10,r11
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8326E594"))) PPC_WEAK_FUNC(sub_8326E594);
PPC_FUNC_IMPL(__imp__sub_8326E594) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8326E598"))) PPC_WEAK_FUNC(sub_8326E598);
PPC_FUNC_IMPL(__imp__sub_8326E598) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31827
	ctx.r11.s64 = -2085814272;
	// rlwinm r10,r4,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 3) & 0xFFFFFFF8;
	// addi r11,r11,9780
	ctx.r11.s64 = ctx.r11.s64 + 9780;
	// stwx r3,r10,r11
	PPC_STORE_U32(ctx.r10.u32 + ctx.r11.u32, ctx.r3.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8326E5AC"))) PPC_WEAK_FUNC(sub_8326E5AC);
PPC_FUNC_IMPL(__imp__sub_8326E5AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8326E5B0"))) PPC_WEAK_FUNC(sub_8326E5B0);
PPC_FUNC_IMPL(__imp__sub_8326E5B0) {
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
	// mr r9,r3
	ctx.r9.u64 = ctx.r3.u64;
	// lwz r3,4(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// bl 0x8326e580
	ctx.lr = 0x8326E5C8;
	sub_8326E580(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne 0x8326e5d8
	if (!ctx.cr0.eq) goto loc_8326E5D8;
loc_8326E5D0:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x8326e5f0
	goto loc_8326E5F0;
loc_8326E5D8:
	// lwz r11,0(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x8326e5d0
	if (!ctx.cr6.eq) goto loc_8326E5D0;
	// lwz r11,36(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 36);
	// addic r10,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// subfe r3,r10,r11
	temp.u8 = (~ctx.r10.u32 + ctx.r11.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r3.u64 = ~ctx.r10.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
loc_8326E5F0:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8326E600"))) PPC_WEAK_FUNC(sub_8326E600);
PPC_FUNC_IMPL(__imp__sub_8326E600) {
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
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x8326e518
	ctx.lr = 0x8326E61C;
	sub_8326E518(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8326E62C"))) PPC_WEAK_FUNC(sub_8326E62C);
PPC_FUNC_IMPL(__imp__sub_8326E62C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8326E630"))) PPC_WEAK_FUNC(sub_8326E630);
PPC_FUNC_IMPL(__imp__sub_8326E630) {
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
	// mulli r11,r4,40
	ctx.r11.s64 = ctx.r4.s64 * 40;
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// addi r31,r11,1504
	ctx.r31.s64 = ctx.r11.s64 + 1504;
	// lwz r11,1536(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1536);
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// beq cr6,0x8326e678
	if (ctx.cr6.eq) goto loc_8326E678;
	// lwz r11,28(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r11,192
	ctx.r4.s64 = ctx.r11.s64 + 192;
	// bl 0x8326e550
	ctx.lr = 0x8326E670;
	sub_8326E550(ctx, base);
	// li r11,-1
	ctx.r11.s64 = -1;
	// stw r11,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r11.u32);
loc_8326E678:
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

__attribute__((alias("__imp__sub_8326E68C"))) PPC_WEAK_FUNC(sub_8326E68C);
PPC_FUNC_IMPL(__imp__sub_8326E68C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8326E690"))) PPC_WEAK_FUNC(sub_8326E690);
PPC_FUNC_IMPL(__imp__sub_8326E690) {
	PPC_FUNC_PROLOGUE();
	// li r4,0
	ctx.r4.s64 = 0;
	// b 0x8326e558
	sub_8326E558(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8326E698"))) PPC_WEAK_FUNC(sub_8326E698);
PPC_FUNC_IMPL(__imp__sub_8326E698) {
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
	// mr r9,r3
	ctx.r9.u64 = ctx.r3.u64;
	// bl 0x8326e568
	ctx.lr = 0x8326E6B0;
	sub_8326E568(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r3,r9
	ctx.r3.u64 = ctx.r9.u64;
	// bl 0x8326e580
	ctx.lr = 0x8326E6BC;
	sub_8326E580(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8326e6f0
	if (ctx.cr0.eq) goto loc_8326E6F0;
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8326e6e4
	if (!ctx.cr6.eq) goto loc_8326E6E4;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8326e6e4
	if (ctx.cr6.eq) goto loc_8326E6E4;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8326E6E4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8326E6E4:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
loc_8326E6F0:
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

__attribute__((alias("__imp__sub_8326E704"))) PPC_WEAK_FUNC(sub_8326E704);
PPC_FUNC_IMPL(__imp__sub_8326E704) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8326E708"))) PPC_WEAK_FUNC(sub_8326E708);
PPC_FUNC_IMPL(__imp__sub_8326E708) {
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
	// mr r8,r3
	ctx.r8.u64 = ctx.r3.u64;
	// bl 0x8326e568
	ctx.lr = 0x8326E71C;
	sub_8326E568(ctx, base);
	// mr r9,r3
	ctx.r9.u64 = ctx.r3.u64;
	// mr r3,r8
	ctx.r3.u64 = ctx.r8.u64;
	// bl 0x8326e580
	ctx.lr = 0x8326E728;
	sub_8326E580(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8326e75c
	if (ctx.cr0.eq) goto loc_8326E75C;
	// lwz r11,4(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8326e75c
	if (ctx.cr6.eq) goto loc_8326E75C;
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,4(r9)
	PPC_STORE_U32(ctx.r9.u32 + 4, ctx.r11.u32);
	// bne 0x8326e75c
	if (!ctx.cr0.eq) goto loc_8326E75C;
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8326e75c
	if (ctx.cr6.eq) goto loc_8326E75C;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8326E75C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8326E75C:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8326E76C"))) PPC_WEAK_FUNC(sub_8326E76C);
PPC_FUNC_IMPL(__imp__sub_8326E76C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8326E770"))) PPC_WEAK_FUNC(sub_8326E770);
PPC_FUNC_IMPL(__imp__sub_8326E770) {
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
	// mr r9,r4
	ctx.r9.u64 = ctx.r4.u64;
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// bl 0x8326e580
	ctx.lr = 0x8326E788;
	sub_8326E580(ctx, base);
	// mr. r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// li r3,0
	ctx.r3.s64 = 0;
	// beq 0x8326e7b0
	if (ctx.cr0.eq) goto loc_8326E7B0;
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8326e7b0
	if (ctx.cr6.eq) goto loc_8326E7B0;
	// mr r5,r6
	ctx.r5.u64 = ctx.r6.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// mr r3,r9
	ctx.r3.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x8326E7B0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8326E7B0:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8326E7C0"))) PPC_WEAK_FUNC(sub_8326E7C0);
PPC_FUNC_IMPL(__imp__sub_8326E7C0) {
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
	// mr r9,r4
	ctx.r9.u64 = ctx.r4.u64;
	// bl 0x8326e580
	ctx.lr = 0x8326E7D4;
	sub_8326E580(ctx, base);
	// mr. r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// li r3,0
	ctx.r3.s64 = 0;
	// beq 0x8326e7fc
	if (ctx.cr0.eq) goto loc_8326E7FC;
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8326e7fc
	if (ctx.cr6.eq) goto loc_8326E7FC;
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// mr r3,r9
	ctx.r3.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x8326E7FC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8326E7FC:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8326E80C"))) PPC_WEAK_FUNC(sub_8326E80C);
PPC_FUNC_IMPL(__imp__sub_8326E80C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8326E810"))) PPC_WEAK_FUNC(sub_8326E810);
PPC_FUNC_IMPL(__imp__sub_8326E810) {
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
	// bl 0x8326e580
	ctx.lr = 0x8326E820;
	sub_8326E580(ctx, base);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x8326e848
	if (ctx.cr6.eq) goto loc_8326E848;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8326e848
	if (ctx.cr6.eq) goto loc_8326E848;
	// lwz r11,16(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8326e848
	if (ctx.cr6.eq) goto loc_8326E848;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8326E848;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8326E848:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8326E858"))) PPC_WEAK_FUNC(sub_8326E858);
PPC_FUNC_IMPL(__imp__sub_8326E858) {
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
	// mr r8,r3
	ctx.r8.u64 = ctx.r3.u64;
	// bl 0x8326e5b0
	ctx.lr = 0x8326E86C;
	sub_8326E5B0(ctx, base);
	// cmpwi cr6,r3,1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 1, ctx.xer);
	// bne cr6,0x8326e89c
	if (!ctx.cr6.eq) goto loc_8326E89C;
	// lwz r11,8(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 8);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8326e89c
	if (ctx.cr6.eq) goto loc_8326E89C;
	// lwz r11,20(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8326e89c
	if (ctx.cr6.eq) goto loc_8326E89C;
	// lwz r4,20(r8)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r8.u32 + 20);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// lwz r3,36(r8)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r8.u32 + 36);
	// bctrl 
	ctx.lr = 0x8326E89C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8326E89C:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8326E8AC"))) PPC_WEAK_FUNC(sub_8326E8AC);
PPC_FUNC_IMPL(__imp__sub_8326E8AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8326E8B0"))) PPC_WEAK_FUNC(sub_8326E8B0);
PPC_FUNC_IMPL(__imp__sub_8326E8B0) {
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
	// mr r8,r3
	ctx.r8.u64 = ctx.r3.u64;
	// bl 0x8326e5b0
	ctx.lr = 0x8326E8C4;
	sub_8326E5B0(ctx, base);
	// cmpwi cr6,r3,1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 1, ctx.xer);
	// bne cr6,0x8326e8f8
	if (!ctx.cr6.eq) goto loc_8326E8F8;
	// lwz r3,36(r8)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r8.u32 + 36);
	// lwz r11,8(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 8);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8326e8f8
	if (ctx.cr6.eq) goto loc_8326E8F8;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8326e8f8
	if (ctx.cr6.eq) goto loc_8326E8F8;
	// lwz r11,24(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8326e8f8
	if (ctx.cr6.eq) goto loc_8326E8F8;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8326E8F8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8326E8F8:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8326E908"))) PPC_WEAK_FUNC(sub_8326E908);
PPC_FUNC_IMPL(__imp__sub_8326E908) {
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
	// mr r8,r3
	ctx.r8.u64 = ctx.r3.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// bl 0x8326e5b0
	ctx.lr = 0x8326E920;
	sub_8326E5B0(ctx, base);
	// cmpwi cr6,r3,1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 1, ctx.xer);
	// beq cr6,0x8326e930
	if (ctx.cr6.eq) goto loc_8326E930;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x8326e95c
	goto loc_8326E95C;
loc_8326E930:
	// lwz r11,8(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 8);
	// lwz r3,36(r8)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r8.u32 + 36);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8326e958
	if (ctx.cr6.eq) goto loc_8326E958;
	// lwz r11,28(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8326e958
	if (ctx.cr6.eq) goto loc_8326E958;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8326E954;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r7,r3
	ctx.r7.u64 = ctx.r3.u64;
loc_8326E958:
	// mr r3,r7
	ctx.r3.u64 = ctx.r7.u64;
loc_8326E95C:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8326E96C"))) PPC_WEAK_FUNC(sub_8326E96C);
PPC_FUNC_IMPL(__imp__sub_8326E96C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8326E970"))) PPC_WEAK_FUNC(sub_8326E970);
PPC_FUNC_IMPL(__imp__sub_8326E970) {
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
	// mr r8,r3
	ctx.r8.u64 = ctx.r3.u64;
	// bl 0x8326e5b0
	ctx.lr = 0x8326E984;
	sub_8326E5B0(ctx, base);
	// cmpwi cr6,r3,1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 1, ctx.xer);
	// bne cr6,0x8326e9b0
	if (!ctx.cr6.eq) goto loc_8326E9B0;
	// lwz r11,8(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 8);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8326e9b0
	if (ctx.cr6.eq) goto loc_8326E9B0;
	// lwz r11,36(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8326e9b0
	if (ctx.cr6.eq) goto loc_8326E9B0;
	// lwz r3,36(r8)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r8.u32 + 36);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8326E9B0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8326E9B0:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8326E9C0"))) PPC_WEAK_FUNC(sub_8326E9C0);
PPC_FUNC_IMPL(__imp__sub_8326E9C0) {
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
	// mr r8,r3
	ctx.r8.u64 = ctx.r3.u64;
	// bl 0x8326e5b0
	ctx.lr = 0x8326E9D4;
	sub_8326E5B0(ctx, base);
	// cmpwi cr6,r3,1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 1, ctx.xer);
	// bne cr6,0x8326ea00
	if (!ctx.cr6.eq) goto loc_8326EA00;
	// lwz r11,8(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 8);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8326ea00
	if (ctx.cr6.eq) goto loc_8326EA00;
	// lwz r11,40(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 40);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8326ea00
	if (ctx.cr6.eq) goto loc_8326EA00;
	// lwz r3,36(r8)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r8.u32 + 36);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8326EA00;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8326EA00:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8326EA10"))) PPC_WEAK_FUNC(sub_8326EA10);
PPC_FUNC_IMPL(__imp__sub_8326EA10) {
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
	// mr r8,r3
	ctx.r8.u64 = ctx.r3.u64;
	// bl 0x8326e5b0
	ctx.lr = 0x8326EA24;
	sub_8326E5B0(ctx, base);
	// cmpwi cr6,r3,1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 1, ctx.xer);
	// bne cr6,0x8326ea50
	if (!ctx.cr6.eq) goto loc_8326EA50;
	// lwz r11,8(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 8);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8326ea50
	if (ctx.cr6.eq) goto loc_8326EA50;
	// lwz r11,48(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 48);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8326ea50
	if (ctx.cr6.eq) goto loc_8326EA50;
	// lwz r3,36(r8)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r8.u32 + 36);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8326EA50;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8326EA50:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8326EA60"))) PPC_WEAK_FUNC(sub_8326EA60);
PPC_FUNC_IMPL(__imp__sub_8326EA60) {
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
	// mr r8,r3
	ctx.r8.u64 = ctx.r3.u64;
	// bl 0x8326e5b0
	ctx.lr = 0x8326EA74;
	sub_8326E5B0(ctx, base);
	// cmpwi cr6,r3,1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 1, ctx.xer);
	// bne cr6,0x8326eaa0
	if (!ctx.cr6.eq) goto loc_8326EAA0;
	// lwz r11,8(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 8);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8326eaa0
	if (ctx.cr6.eq) goto loc_8326EAA0;
	// lwz r11,52(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 52);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8326eaa0
	if (ctx.cr6.eq) goto loc_8326EAA0;
	// lwz r3,36(r8)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r8.u32 + 36);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8326EAA0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8326EAA0:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8326EAB0"))) PPC_WEAK_FUNC(sub_8326EAB0);
PPC_FUNC_IMPL(__imp__sub_8326EAB0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x833a019c
	ctx.lr = 0x8326EAB8;
	__savegprlr_25(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
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
	// mr r28,r6
	ctx.r28.u64 = ctx.r6.u64;
	// mr r26,r7
	ctx.r26.u64 = ctx.r7.u64;
	// bl 0x8326e580
	ctx.lr = 0x8326EAD8;
	sub_8326E580(ctx, base);
	// mr. r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r27.s32, 0, ctx.xer);
	// bne 0x8326eae8
	if (!ctx.cr0.eq) goto loc_8326EAE8;
loc_8326EAE0:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x8326eba0
	goto loc_8326EBA0;
loc_8326EAE8:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8326e698
	ctx.lr = 0x8326EAF0;
	sub_8326E698(ctx, base);
	// mulli r11,r30,40
	ctx.r11.s64 = ctx.r30.s64 * 40;
	// add r31,r11,r31
	ctx.r31.u64 = ctx.r11.u64 + ctx.r31.u64;
	// li r11,-1
	ctx.r11.s64 = -1;
	// li r25,1
	ctx.r25.s64 = 1;
	// addi r6,r1,84
	ctx.r6.s64 = ctx.r1.s64 + 84;
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// stw r30,1508(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1508, ctx.r30.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r27,1512(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1512, ctx.r27.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stw r29,1516(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1516, ctx.r29.u32);
	// stw r28,1520(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1520, ctx.r28.u32);
	// stw r26,1532(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1532, ctx.r26.u32);
	// stw r25,1528(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1528, ctx.r25.u32);
	// stw r11,1536(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1536, ctx.r11.u32);
	// bl 0x8326e770
	ctx.lr = 0x8326EB30;
	sub_8326E770(ctx, base);
	// cmpw cr6,r3,r28
	ctx.cr6.compare<int32_t>(ctx.r3.s32, ctx.r28.s32, ctx.xer);
	// ble cr6,0x8326eb48
	if (!ctx.cr6.gt) goto loc_8326EB48;
	// lis r11,-32219
	ctx.r11.s64 = -2111504384;
	// addi r3,r11,10448
	ctx.r3.s64 = ctx.r11.s64 + 10448;
loc_8326EB40:
	// bl 0x83278688
	ctx.lr = 0x8326EB44;
	sub_83278688(ctx, base);
	// b 0x8326eae0
	goto loc_8326EAE0;
loc_8326EB48:
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r5,84(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// add r3,r11,r29
	ctx.r3.u64 = ctx.r11.u64 + ctx.r29.u64;
	// lwz r4,88(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// bl 0x832ee4c0
	ctx.lr = 0x8326EB5C;
	sub_832EE4C0(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne 0x8326eb70
	if (!ctx.cr0.eq) goto loc_8326EB70;
	// lis r11,-32219
	ctx.r11.s64 = -2111504384;
	// addi r3,r11,10408
	ctx.r3.s64 = ctx.r11.s64 + 10408;
	// b 0x8326eb40
	goto loc_8326EB40;
loc_8326EB70:
	// stw r3,1524(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1524, ctx.r3.u32);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r5,80(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x8326e7c0
	ctx.lr = 0x8326EB84;
	sub_8326E7C0(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne 0x8326eb98
	if (!ctx.cr0.eq) goto loc_8326EB98;
	// lis r11,-32219
	ctx.r11.s64 = -2111504384;
	// addi r3,r11,10364
	ctx.r3.s64 = ctx.r11.s64 + 10364;
	// b 0x8326eb40
	goto loc_8326EB40;
loc_8326EB98:
	// stw r3,1540(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1540, ctx.r3.u32);
	// stw r25,1504(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1504, ctx.r25.u32);
loc_8326EBA0:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x833a01ec
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8326EBA8"))) PPC_WEAK_FUNC(sub_8326EBA8);
PPC_FUNC_IMPL(__imp__sub_8326EBA8) {
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
	// mulli r11,r4,40
	ctx.r11.s64 = ctx.r4.s64 * 40;
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// addi r8,r11,1504
	ctx.r8.s64 = ctx.r11.s64 + 1504;
	// mr r3,r8
	ctx.r3.u64 = ctx.r8.u64;
	// lwz r31,1524(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1524);
	// bl 0x8326e5b0
	ctx.lr = 0x8326EBD0;
	sub_8326E5B0(ctx, base);
	// cmpwi cr6,r3,1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 1, ctx.xer);
	// bne cr6,0x8326ebf4
	if (!ctx.cr6.eq) goto loc_8326EBF4;
	// mr r3,r8
	ctx.r3.u64 = ctx.r8.u64;
	// bl 0x8326e8b0
	ctx.lr = 0x8326EBE0;
	sub_8326E8B0(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,20(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8326EBF4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8326EBF4:
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

__attribute__((alias("__imp__sub_8326EC08"))) PPC_WEAK_FUNC(sub_8326EC08);
PPC_FUNC_IMPL(__imp__sub_8326EC08) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x833a01a4
	ctx.lr = 0x8326EC10;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x8326e5b0
	ctx.lr = 0x8326EC1C;
	sub_8326E5B0(ctx, base);
	// cmpwi cr6,r3,1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 1, ctx.xer);
	// bne cr6,0x8326ec78
	if (!ctx.cr6.eq) goto loc_8326EC78;
	// lwz r28,36(r31)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// lwz r30,4(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r29,20(r31)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// beq cr6,0x8326ec78
	if (ctx.cr6.eq) goto loc_8326EC78;
	// bl 0x82c10e98
	ctx.lr = 0x8326EC3C;
	sub_82C10E98(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8326e8b0
	ctx.lr = 0x8326EC44;
	sub_8326E8B0(ctx, base);
	// li r27,0
	ctx.r27.s64 = 0;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// stw r27,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r27.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8326e810
	ctx.lr = 0x8326EC58;
	sub_8326E810(ctx, base);
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8326EC6C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r27,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r27.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8326e708
	ctx.lr = 0x8326EC78;
	sub_8326E708(ctx, base);
loc_8326EC78:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x833a01f4
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8326EC80"))) PPC_WEAK_FUNC(sub_8326EC80);
PPC_FUNC_IMPL(__imp__sub_8326EC80) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x833a01a8
	ctx.lr = 0x8326EC88;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mulli r11,r4,40
	ctx.r11.s64 = ctx.r4.s64 * 40;
	// add r31,r11,r3
	ctx.r31.u64 = ctx.r11.u64 + ctx.r3.u64;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// lwz r28,1524(r31)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1524);
	// bl 0x8326e630
	ctx.lr = 0x8326ECA4;
	sub_8326E630(ctx, base);
	// lwz r11,1528(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1528);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x8326eccc
	if (!ctx.cr6.eq) goto loc_8326ECCC;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// addi r4,r29,192
	ctx.r4.s64 = ctx.r29.s64 + 192;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8326e550
	ctx.lr = 0x8326ECC8;
	sub_8326E550(ctx, base);
	// stw r29,1536(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1536, ctx.r29.u32);
loc_8326ECCC:
	// stw r29,1532(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1532, ctx.r29.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x833a01f8
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8326ECD8"))) PPC_WEAK_FUNC(sub_8326ECD8);
PPC_FUNC_IMPL(__imp__sub_8326ECD8) {
	PPC_FUNC_PROLOGUE();
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// b 0x8326ec80
	sub_8326EC80(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8326ECE4"))) PPC_WEAK_FUNC(sub_8326ECE4);
PPC_FUNC_IMPL(__imp__sub_8326ECE4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8326ECE8"))) PPC_WEAK_FUNC(sub_8326ECE8);
PPC_FUNC_IMPL(__imp__sub_8326ECE8) {
	PPC_FUNC_PROLOGUE();
	// b 0x8326ecd8
	sub_8326ECD8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8326ECEC"))) PPC_WEAK_FUNC(sub_8326ECEC);
PPC_FUNC_IMPL(__imp__sub_8326ECEC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8326ECF0"))) PPC_WEAK_FUNC(sub_8326ECF0);
PPC_FUNC_IMPL(__imp__sub_8326ECF0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31816
	ctx.r11.s64 = -2085093376;
	// addi r3,r11,13280
	ctx.r3.s64 = ctx.r11.s64 + 13280;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8326ECFC"))) PPC_WEAK_FUNC(sub_8326ECFC);
PPC_FUNC_IMPL(__imp__sub_8326ECFC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8326ED00"))) PPC_WEAK_FUNC(sub_8326ED00);
PPC_FUNC_IMPL(__imp__sub_8326ED00) {
	PPC_FUNC_PROLOGUE();
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// b 0x83278688
	sub_83278688(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8326ED08"))) PPC_WEAK_FUNC(sub_8326ED08);
PPC_FUNC_IMPL(__imp__sub_8326ED08) {
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
	// lis r11,-32219
	ctx.r11.s64 = -2111504384;
	// lis r10,-31960
	ctx.r10.s64 = -2094530560;
	// addi r6,r11,10616
	ctx.r6.s64 = ctx.r11.s64 + 10616;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r10,-27344
	ctx.r4.s64 = ctx.r10.s64 + -27344;
	// li r3,2
	ctx.r3.s64 = 2;
	// bl 0x83278438
	ctx.lr = 0x8326ED30;
	sub_83278438(ctx, base);
	// lis r11,-32219
	ctx.r11.s64 = -2111504384;
	// lis r10,-31960
	ctx.r10.s64 = -2094530560;
	// addi r5,r11,10572
	ctx.r5.s64 = ctx.r11.s64 + 10572;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r10,-26568
	ctx.r3.s64 = ctx.r10.s64 + -26568;
	// bl 0x83278548
	ctx.lr = 0x8326ED48;
	sub_83278548(ctx, base);
	// lis r11,-32219
	ctx.r11.s64 = -2111504384;
	// lis r10,-31960
	ctx.r10.s64 = -2094530560;
	// addi r5,r11,10548
	ctx.r5.s64 = ctx.r11.s64 + 10548;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r10,-26400
	ctx.r3.s64 = ctx.r10.s64 + -26400;
	// bl 0x832784c8
	ctx.lr = 0x8326ED60;
	sub_832784C8(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8326ED70"))) PPC_WEAK_FUNC(sub_8326ED70);
PPC_FUNC_IMPL(__imp__sub_8326ED70) {
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
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// bl 0x8326ecf0
	ctx.lr = 0x8326ED8C;
	sub_8326ECF0(ctx, base);
	// li r5,16496
	ctx.r5.s64 = 16496;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x833a2b30
	ctx.lr = 0x8326ED9C;
	sub_833A2B30(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x83278d30
	ctx.lr = 0x8326EDA4;
	sub_83278D30(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r11,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r11.u32);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x8326eddc
	if (ctx.cr6.eq) goto loc_8326EDDC;
	// lfs f0,0(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,4(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4, temp.u32);
	// lwz r9,4(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// stw r9,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r9.u32);
	// lwz r9,8(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// stw r9,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r9.u32);
	// lwz r9,12(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// stw r9,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r9.u32);
	// b 0x8326edf4
	goto loc_8326EDF4;
loc_8326EDDC:
	// lis r9,-32242
	ctx.r9.s64 = -2113011712;
	// stw r10,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r10.u32);
	// stw r10,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r10.u32);
	// stw r11,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r11.u32);
	// lfs f0,29208(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 29208);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,4(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4, temp.u32);
loc_8326EDF4:
	// stw r10,52(r31)
	PPC_STORE_U32(ctx.r31.u32 + 52, ctx.r10.u32);
	// stw r11,56(r31)
	PPC_STORE_U32(ctx.r31.u32 + 56, ctx.r11.u32);
	// stw r11,16488(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16488, ctx.r11.u32);
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

__attribute__((alias("__imp__sub_8326EE18"))) PPC_WEAK_FUNC(sub_8326EE18);
PPC_FUNC_IMPL(__imp__sub_8326EE18) {
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
	// bl 0x8326ecf0
	ctx.lr = 0x8326EE28;
	sub_8326ECF0(ctx, base);
	// lwz r3,52(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 52);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8326EE3C"))) PPC_WEAK_FUNC(sub_8326EE3C);
PPC_FUNC_IMPL(__imp__sub_8326EE3C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8326EE40"))) PPC_WEAK_FUNC(sub_8326EE40);
PPC_FUNC_IMPL(__imp__sub_8326EE40) {
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
	// bl 0x8326ecf0
	ctx.lr = 0x8326EE50;
	sub_8326ECF0(ctx, base);
	// lwz r3,56(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 56);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8326EE64"))) PPC_WEAK_FUNC(sub_8326EE64);
PPC_FUNC_IMPL(__imp__sub_8326EE64) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8326EE68"))) PPC_WEAK_FUNC(sub_8326EE68);
PPC_FUNC_IMPL(__imp__sub_8326EE68) {
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
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// bl 0x82da0c98
	ctx.lr = 0x8326EE84;
	sub_82DA0C98(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x832ecf18
	ctx.lr = 0x8326EE94;
	sub_832ECF18(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x8326eeb0
	if (ctx.cr6.eq) goto loc_8326EEB0;
	// lwz r11,12(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x8326eeb0
	if (ctx.cr6.eq) goto loc_8326EEB0;
	// lwz r31,116(r1)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
loc_8326EEB0:
	// cmplwi cr6,r31,1
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 1, ctx.xer);
	// blt cr6,0x8326eefc
	if (ctx.cr6.lt) goto loc_8326EEFC;
	// beq cr6,0x8326eef4
	if (ctx.cr6.eq) goto loc_8326EEF4;
	// cmplwi cr6,r31,3
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 3, ctx.xer);
	// blt cr6,0x8326eeec
	if (ctx.cr6.lt) goto loc_8326EEEC;
	// beq cr6,0x8326eee4
	if (ctx.cr6.eq) goto loc_8326EEE4;
	// cmplwi cr6,r31,5
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 5, ctx.xer);
	// blt cr6,0x8326eedc
	if (ctx.cr6.lt) goto loc_8326EEDC;
	// bne cr6,0x8326eefc
	if (!ctx.cr6.eq) goto loc_8326EEFC;
	// li r3,32
	ctx.r3.s64 = 32;
	// b 0x8326ef00
	goto loc_8326EF00;
loc_8326EEDC:
	// li r3,16
	ctx.r3.s64 = 16;
	// b 0x8326ef00
	goto loc_8326EF00;
loc_8326EEE4:
	// li r3,8
	ctx.r3.s64 = 8;
	// b 0x8326ef00
	goto loc_8326EF00;
loc_8326EEEC:
	// li r3,4
	ctx.r3.s64 = 4;
	// b 0x8326ef00
	goto loc_8326EF00;
loc_8326EEF4:
	// li r3,2
	ctx.r3.s64 = 2;
	// b 0x8326ef00
	goto loc_8326EF00;
loc_8326EEFC:
	// li r3,1
	ctx.r3.s64 = 1;
loc_8326EF00:
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

__attribute__((alias("__imp__sub_8326EF18"))) PPC_WEAK_FUNC(sub_8326EF18);
PPC_FUNC_IMPL(__imp__sub_8326EF18) {
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
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x832ecf18
	ctx.lr = 0x8326EF38;
	sub_832ECF18(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x8326ef58
	if (ctx.cr6.eq) goto loc_8326EF58;
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x8326ef58
	if (ctx.cr6.eq) goto loc_8326EF58;
	// lwz r3,104(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// bl 0x83282028
	ctx.lr = 0x8326EF58;
	sub_83282028(ctx, base);
loc_8326EF58:
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

__attribute__((alias("__imp__sub_8326EF6C"))) PPC_WEAK_FUNC(sub_8326EF6C);
PPC_FUNC_IMPL(__imp__sub_8326EF6C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8326EF70"))) PPC_WEAK_FUNC(sub_8326EF70);
PPC_FUNC_IMPL(__imp__sub_8326EF70) {
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
	// bl 0x8326ecf0
	ctx.lr = 0x8326EF84;
	sub_8326ECF0(ctx, base);
	// stw r10,100(r3)
	PPC_STORE_U32(ctx.r3.u32 + 100, ctx.r10.u32);
	// mr r3,r10
	ctx.r3.u64 = ctx.r10.u64;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8326EF9C"))) PPC_WEAK_FUNC(sub_8326EF9C);
PPC_FUNC_IMPL(__imp__sub_8326EF9C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8326EFA0"))) PPC_WEAK_FUNC(sub_8326EFA0);
PPC_FUNC_IMPL(__imp__sub_8326EFA0) {
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
	// bl 0x832822b8
	ctx.lr = 0x8326EFB0;
	sub_832822B8(ctx, base);
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

__attribute__((alias("__imp__sub_8326EFC4"))) PPC_WEAK_FUNC(sub_8326EFC4);
PPC_FUNC_IMPL(__imp__sub_8326EFC4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8326EFC8"))) PPC_WEAK_FUNC(sub_8326EFC8);
PPC_FUNC_IMPL(__imp__sub_8326EFC8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x833a01ac
	ctx.lr = 0x8326EFD0;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8326f000
	if (ctx.cr6.eq) goto loc_8326F000;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// bl 0x8326e348
	ctx.lr = 0x8326EFEC;
	sub_8326E348(ctx, base);
	// lis r11,-31816
	ctx.r11.s64 = -2085093376;
	// lis r10,-31816
	ctx.r10.s64 = -2085093376;
	// stw r29,13268(r11)
	PPC_STORE_U32(ctx.r11.u32 + 13268, ctx.r29.u32);
	// stw r3,29776(r10)
	PPC_STORE_U32(ctx.r10.u32 + 29776, ctx.r3.u32);
	// b 0x8326f01c
	goto loc_8326F01C;
loc_8326F000:
	// lis r9,-31816
	ctx.r9.s64 = -2085093376;
	// lis r8,-31816
	ctx.r8.s64 = -2085093376;
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,0
	ctx.r10.s64 = 0;
	// li r29,0
	ctx.r29.s64 = 0;
	// stw r11,13268(r9)
	PPC_STORE_U32(ctx.r9.u32 + 13268, ctx.r11.u32);
	// stw r10,29776(r8)
	PPC_STORE_U32(ctx.r8.u32 + 29776, ctx.r10.u32);
loc_8326F01C:
	// lis r11,-31827
	ctx.r11.s64 = -2085814272;
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// addi r30,r11,9800
	ctx.r30.s64 = ctx.r11.s64 + 9800;
	// beq cr6,0x8326f048
	if (ctx.cr6.eq) goto loc_8326F048;
	// lwz r11,68(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 68);
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// cmpwi cr6,r11,15
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 15, ctx.xer);
	// stwx r31,r10,r30
	PPC_STORE_U32(ctx.r10.u32 + ctx.r30.u32, ctx.r31.u32);
	// bge cr6,0x8326f048
	if (!ctx.cr6.lt) goto loc_8326F048;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,68(r30)
	PPC_STORE_U32(ctx.r30.u32 + 68, ctx.r11.u32);
loc_8326F048:
	// lis r11,-256
	ctx.r11.s64 = -16777216;
	// ori r11,r11,3864
	ctx.r11.u64 = ctx.r11.u64 | 3864;
	// cmpw cr6,r31,r11
	ctx.cr6.compare<int32_t>(ctx.r31.s32, ctx.r11.s32, ctx.xer);
	// lis r11,-256
	ctx.r11.s64 = -16777216;
	// bgt cr6,0x8326f12c
	if (ctx.cr6.gt) goto loc_8326F12C;
	// ori r11,r11,3863
	ctx.r11.u64 = ctx.r11.u64 | 3863;
	// cmpw cr6,r31,r11
	ctx.cr6.compare<int32_t>(ctx.r31.s32, ctx.r11.s32, ctx.xer);
	// bge cr6,0x8326f0dc
	if (!ctx.cr6.lt) goto loc_8326F0DC;
	// lis r11,-256
	ctx.r11.s64 = -16777216;
	// ori r11,r11,1032
	ctx.r11.u64 = ctx.r11.u64 | 1032;
	// subf. r11,r11,r31
	ctx.r11.s64 = ctx.r31.s64 - ctx.r11.s64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8326f1c0
	if (ctx.cr0.eq) goto loc_8326F1C0;
	// cmplwi cr6,r11,4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 4, ctx.xer);
	// beq cr6,0x8326f1c0
	if (ctx.cr6.eq) goto loc_8326F1C0;
	// cmplwi cr6,r11,41
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 41, ctx.xer);
	// beq cr6,0x8326f190
	if (ctx.cr6.eq) goto loc_8326F190;
	// cmplwi cr6,r11,2044
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 2044, ctx.xer);
	// beq cr6,0x8326f0c8
	if (ctx.cr6.eq) goto loc_8326F0C8;
	// cmplwi cr6,r11,2812
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 2812, ctx.xer);
	// beq cr6,0x8326f0b4
	if (ctx.cr6.eq) goto loc_8326F0B4;
	// cmplwi cr6,r11,2829
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 2829, ctx.xer);
	// bne cr6,0x8326f184
	if (!ctx.cr6.eq) goto loc_8326F184;
	// lis r11,-32219
	ctx.r11.s64 = -2111504384;
	// lis r5,-256
	ctx.r5.s64 = -16777216;
	// addi r4,r11,11976
	ctx.r4.s64 = ctx.r11.s64 + 11976;
	// ori r5,r5,3861
	ctx.r5.u64 = ctx.r5.u64 | 3861;
	// b 0x8326f1cc
	goto loc_8326F1CC;
loc_8326F0B4:
	// lis r11,-32219
	ctx.r11.s64 = -2111504384;
	// lis r5,-256
	ctx.r5.s64 = -16777216;
	// addi r4,r11,11880
	ctx.r4.s64 = ctx.r11.s64 + 11880;
	// ori r5,r5,3844
	ctx.r5.u64 = ctx.r5.u64 | 3844;
	// b 0x8326f1cc
	goto loc_8326F1CC;
loc_8326F0C8:
	// lis r11,-32219
	ctx.r11.s64 = -2111504384;
	// lis r5,-256
	ctx.r5.s64 = -16777216;
	// addi r4,r11,11744
	ctx.r4.s64 = ctx.r11.s64 + 11744;
	// ori r5,r5,3076
	ctx.r5.u64 = ctx.r5.u64 | 3076;
	// b 0x8326f1cc
	goto loc_8326F1CC;
loc_8326F0DC:
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x8326f108
	if (ctx.cr6.eq) goto loc_8326F108;
	// lwz r11,232(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 232);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x8326f108
	if (!ctx.cr6.eq) goto loc_8326F108;
	// lwz r6,240(r29)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r29.u32 + 240);
	// lwz r7,244(r29)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r29.u32 + 244);
	// cmpwi cr6,r6,0
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// ble cr6,0x8326f108
	if (!ctx.cr6.gt) goto loc_8326F108;
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// bgt cr6,0x8326f114
	if (ctx.cr6.gt) goto loc_8326F114;
loc_8326F108:
	// lis r11,-32219
	ctx.r11.s64 = -2111504384;
	// addi r4,r11,11648
	ctx.r4.s64 = ctx.r11.s64 + 11648;
	// b 0x8326f1c8
	goto loc_8326F1C8;
loc_8326F114:
	// lis r11,-32219
	ctx.r11.s64 = -2111504384;
	// addi r3,r30,72
	ctx.r3.s64 = ctx.r30.s64 + 72;
	// addi r4,r11,11544
	ctx.r4.s64 = ctx.r11.s64 + 11544;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// bl 0x833a2630
	ctx.lr = 0x8326F128;
	sub_833A2630(ctx, base);
	// b 0x8326f1d4
	goto loc_8326F1D4;
loc_8326F12C:
	// ori r11,r11,3868
	ctx.r11.u64 = ctx.r11.u64 | 3868;
	// cmpw cr6,r31,r11
	ctx.cr6.compare<int32_t>(ctx.r31.s32, ctx.r11.s32, ctx.xer);
	// beq cr6,0x8326f1c0
	if (ctx.cr6.eq) goto loc_8326F1C0;
	// lis r11,-256
	ctx.r11.s64 = -16777216;
	// ori r5,r11,3871
	ctx.r5.u64 = ctx.r11.u64 | 3871;
	// cmpw cr6,r31,r5
	ctx.cr6.compare<int32_t>(ctx.r31.s32, ctx.r5.s32, ctx.xer);
	// beq cr6,0x8326f1b4
	if (ctx.cr6.eq) goto loc_8326F1B4;
	// lis r11,-256
	ctx.r11.s64 = -16777216;
	// ori r11,r11,3926
	ctx.r11.u64 = ctx.r11.u64 | 3926;
	// cmpw cr6,r31,r11
	ctx.cr6.compare<int32_t>(ctx.r31.s32, ctx.r11.s32, ctx.xer);
	// beq cr6,0x8326f190
	if (ctx.cr6.eq) goto loc_8326F190;
	// lis r11,-256
	ctx.r11.s64 = -16777216;
	// ori r11,r11,3931
	ctx.r11.u64 = ctx.r11.u64 | 3931;
	// cmpw cr6,r31,r11
	ctx.cr6.compare<int32_t>(ctx.r31.s32, ctx.r11.s32, ctx.xer);
	// beq cr6,0x8326f190
	if (ctx.cr6.eq) goto loc_8326F190;
	// cmpwi cr6,r31,-4
	ctx.cr6.compare<int32_t>(ctx.r31.s32, -4, ctx.xer);
	// ble cr6,0x8326f184
	if (!ctx.cr6.gt) goto loc_8326F184;
	// cmpwi cr6,r31,-2
	ctx.cr6.compare<int32_t>(ctx.r31.s32, -2, ctx.xer);
	// bgt cr6,0x8326f184
	if (ctx.cr6.gt) goto loc_8326F184;
	// lis r11,-32219
	ctx.r11.s64 = -2111504384;
	// addi r4,r11,11524
	ctx.r4.s64 = ctx.r11.s64 + 11524;
	// b 0x8326f1c8
	goto loc_8326F1C8;
loc_8326F184:
	// lis r11,-32219
	ctx.r11.s64 = -2111504384;
	// addi r4,r11,11508
	ctx.r4.s64 = ctx.r11.s64 + 11508;
	// b 0x8326f1c8
	goto loc_8326F1C8;
loc_8326F190:
	// bl 0x83282008
	ctx.lr = 0x8326F194;
	sub_83282008(ctx, base);
	// lis r11,-32219
	ctx.r11.s64 = -2111504384;
	// addi r10,r30,72
	ctx.r10.s64 = ctx.r30.s64 + 72;
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// addi r4,r11,11488
	ctx.r4.s64 = ctx.r11.s64 + 11488;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r3,r10
	ctx.r3.u64 = ctx.r10.u64;
	// bl 0x833a2630
	ctx.lr = 0x8326F1B0;
	sub_833A2630(ctx, base);
	// b 0x8326f1d4
	goto loc_8326F1D4;
loc_8326F1B4:
	// lis r11,-32219
	ctx.r11.s64 = -2111504384;
	// addi r4,r11,11416
	ctx.r4.s64 = ctx.r11.s64 + 11416;
	// b 0x8326f1cc
	goto loc_8326F1CC;
loc_8326F1C0:
	// lis r11,-32219
	ctx.r11.s64 = -2111504384;
	// addi r4,r11,11328
	ctx.r4.s64 = ctx.r11.s64 + 11328;
loc_8326F1C8:
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
loc_8326F1CC:
	// addi r3,r30,72
	ctx.r3.s64 = ctx.r30.s64 + 72;
	// bl 0x833a2630
	ctx.lr = 0x8326F1D4;
	sub_833A2630(ctx, base);
loc_8326F1D4:
	// addi r3,r30,72
	ctx.r3.s64 = ctx.r30.s64 + 72;
	// bl 0x83278688
	ctx.lr = 0x8326F1DC;
	sub_83278688(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x833a01fc
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8326F1E4"))) PPC_WEAK_FUNC(sub_8326F1E4);
PPC_FUNC_IMPL(__imp__sub_8326F1E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8326F1E8"))) PPC_WEAK_FUNC(sub_8326F1E8);
PPC_FUNC_IMPL(__imp__sub_8326F1E8) {
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
	// beq cr6,0x8326f204
	if (ctx.cr6.eq) goto loc_8326F204;
	// bl 0x8326e348
	ctx.lr = 0x8326F200;
	sub_8326E348(ctx, base);
	// b 0x8326f208
	goto loc_8326F208;
loc_8326F204:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8326F208:
	// bl 0x83278310
	ctx.lr = 0x8326F20C;
	sub_83278310(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8326F21C"))) PPC_WEAK_FUNC(sub_8326F21C);
PPC_FUNC_IMPL(__imp__sub_8326F21C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8326F220"))) PPC_WEAK_FUNC(sub_8326F220);
PPC_FUNC_IMPL(__imp__sub_8326F220) {
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
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// bl 0x8326e348
	ctx.lr = 0x8326F240;
	sub_8326E348(ctx, base);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x83276e20
	ctx.lr = 0x8326F24C;
	sub_83276E20(ctx, base);
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

__attribute__((alias("__imp__sub_8326F264"))) PPC_WEAK_FUNC(sub_8326F264);
PPC_FUNC_IMPL(__imp__sub_8326F264) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8326F268"))) PPC_WEAK_FUNC(sub_8326F268);
PPC_FUNC_IMPL(__imp__sub_8326F268) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
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
	// lfs f0,0(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// fctiwz f0,f0
	ctx.f0.s64 = (ctx.f0.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f0.f64));
	// li r4,27
	ctx.r4.s64 = 27;
	// li r3,0
	ctx.r3.s64 = 0;
	// stfd f0,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.f0.u64);
	// lwz r5,84(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// bl 0x8326def8
	ctx.lr = 0x8326F298;
	sub_8326DEF8(ctx, base);
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,7
	ctx.r4.s64 = 7;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8326def8
	ctx.lr = 0x8326F2A8;
	sub_8326DEF8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8326ee68
	ctx.lr = 0x8326F2B0;
	sub_8326EE68(ctx, base);
	// cmpwi cr6,r3,1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 1, ctx.xer);
	// beq cr6,0x8326f2e0
	if (ctx.cr6.eq) goto loc_8326F2E0;
	// cmpwi cr6,r3,2
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 2, ctx.xer);
	// beq cr6,0x8326f2e0
	if (ctx.cr6.eq) goto loc_8326F2E0;
	// cmpwi cr6,r3,4
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 4, ctx.xer);
	// beq cr6,0x8326f2d8
	if (ctx.cr6.eq) goto loc_8326F2D8;
	// cmpwi cr6,r3,8
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 8, ctx.xer);
	// beq cr6,0x8326f2d8
	if (ctx.cr6.eq) goto loc_8326F2D8;
	// li r5,8
	ctx.r5.s64 = 8;
	// b 0x8326f2e4
	goto loc_8326F2E4;
loc_8326F2D8:
	// li r5,32
	ctx.r5.s64 = 32;
	// b 0x8326f2e4
	goto loc_8326F2E4;
loc_8326F2E0:
	// li r5,40
	ctx.r5.s64 = 40;
loc_8326F2E4:
	// li r4,13
	ctx.r4.s64 = 13;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x83279970
	ctx.lr = 0x8326F2F0;
	sub_83279970(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8326ef18
	ctx.lr = 0x8326F2F8;
	sub_8326EF18(ctx, base);
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

__attribute__((alias("__imp__sub_8326F30C"))) PPC_WEAK_FUNC(sub_8326F30C);
PPC_FUNC_IMPL(__imp__sub_8326F30C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8326F310"))) PPC_WEAK_FUNC(sub_8326F310);
PPC_FUNC_IMPL(__imp__sub_8326F310) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x833a01a4
	ctx.lr = 0x8326F318;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r28,-31816
	ctx.r28.s64 = -2085093376;
	// lis r11,-31845
	ctx.r11.s64 = -2086993920;
	// addi r27,r11,-5496
	ctx.r27.s64 = ctx.r11.s64 + -5496;
	// lwz r10,13264(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 13264);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8326f350
	if (ctx.cr6.eq) goto loc_8326F350;
	// lwz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// mr r3,r10
	ctx.r3.u64 = ctx.r10.u64;
	// addi r4,r27,4
	ctx.r4.s64 = ctx.r27.s64 + 4;
	// lwz r11,36(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8326F34C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r10,13264(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 13264);
loc_8326F350:
	// bl 0x8326ecf0
	ctx.lr = 0x8326F354;
	sub_8326ECF0(ctx, base);
	// lis r9,-31827
	ctx.r9.s64 = -2085814272;
	// lwz r11,10128(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 10128);
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,10128(r9)
	PPC_STORE_U32(ctx.r9.u32 + 10128, ctx.r11.u32);
	// bne 0x8326f428
	if (!ctx.cr0.eq) goto loc_8326F428;
	// lis r10,-31827
	ctx.r10.s64 = -2085814272;
	// li r11,0
	ctx.r11.s64 = 0;
	// li r29,0
	ctx.r29.s64 = 0;
	// addi r31,r3,104
	ctx.r31.s64 = ctx.r3.s64 + 104;
	// li r30,8
	ctx.r30.s64 = 8;
	// stw r11,10132(r10)
	PPC_STORE_U32(ctx.r10.u32 + 10132, ctx.r11.u32);
loc_8326F380:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8326df70
	ctx.lr = 0x8326F388;
	sub_8326DF70(ctx, base);
	// cmpwi cr6,r3,1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 1, ctx.xer);
	// bne cr6,0x8326f39c
	if (!ctx.cr6.eq) goto loc_8326F39C;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83274708
	ctx.lr = 0x8326F398;
	sub_83274708(ctx, base);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
loc_8326F39C:
	// addic. r30,r30,-1
	ctx.xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// addi r31,r31,2048
	ctx.r31.s64 = ctx.r31.s64 + 2048;
	// bne 0x8326f380
	if (!ctx.cr0.eq) goto loc_8326F380;
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// bne cr6,0x8326f3cc
	if (!ctx.cr6.eq) goto loc_8326F3CC;
	// li r4,1
	ctx.r4.s64 = 1;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x83278dd0
	ctx.lr = 0x8326F3BC;
	sub_83278DD0(ctx, base);
	// bl 0x82c10e98
	ctx.lr = 0x8326F3C0;
	sub_82C10E98(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x83278dd0
	ctx.lr = 0x8326F3CC;
	sub_83278DD0(ctx, base);
loc_8326F3CC:
	// bl 0x83278480
	ctx.lr = 0x8326F3D0;
	sub_83278480(ctx, base);
	// bl 0x83278598
	ctx.lr = 0x8326F3D4;
	sub_83278598(ctx, base);
	// bl 0x83278500
	ctx.lr = 0x8326F3D8;
	sub_83278500(ctx, base);
	// bl 0x83270300
	ctx.lr = 0x8326F3DC;
	sub_83270300(ctx, base);
	// bl 0x832efc38
	ctx.lr = 0x8326F3E0;
	sub_832EFC38(ctx, base);
	// bl 0x8326efa0
	ctx.lr = 0x8326F3E4;
	sub_8326EFA0(ctx, base);
	// bl 0x832efaa0
	ctx.lr = 0x8326F3E8;
	sub_832EFAA0(ctx, base);
	// bl 0x82d6da88
	ctx.lr = 0x8326F3EC;
	sub_82D6DA88(ctx, base);
	// bl 0x832ef308
	ctx.lr = 0x8326F3F0;
	sub_832EF308(ctx, base);
	// bl 0x832ee768
	ctx.lr = 0x8326F3F4;
	sub_832EE768(ctx, base);
	// bl 0x832ede48
	ctx.lr = 0x8326F3F8;
	sub_832EDE48(ctx, base);
	// li r31,1024
	ctx.r31.s64 = 1024;
loc_8326F3FC:
	// bl 0x83278660
	ctx.lr = 0x8326F400;
	sub_83278660(ctx, base);
	// bl 0x832785e0
	ctx.lr = 0x8326F404;
	sub_832785E0(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x83278610
	ctx.lr = 0x8326F40C;
	sub_83278610(ctx, base);
	// bl 0x83278670
	ctx.lr = 0x8326F410;
	sub_83278670(ctx, base);
	// addic. r31,r31,-1
	ctx.xer.ca = ctx.r31.u32 > 0;
	ctx.r31.s64 = ctx.r31.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// bne 0x8326f3fc
	if (!ctx.cr0.eq) goto loc_8326F3FC;
	// bl 0x832783e8
	ctx.lr = 0x8326F41C;
	sub_832783E8(ctx, base);
	// bl 0x83273ba8
	ctx.lr = 0x8326F420;
	sub_83273BA8(ctx, base);
	// bl 0x83278620
	ctx.lr = 0x8326F424;
	sub_83278620(ctx, base);
	// lwz r10,13264(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 13264);
loc_8326F428:
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8326f448
	if (ctx.cr6.eq) goto loc_8326F448;
	// lwz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// mr r3,r10
	ctx.r3.u64 = ctx.r10.u64;
	// addi r4,r27,108
	ctx.r4.s64 = ctx.r27.s64 + 108;
	// lwz r11,36(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8326F448;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8326F448:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x833a01f4
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8326F450"))) PPC_WEAK_FUNC(sub_8326F450);
PPC_FUNC_IMPL(__imp__sub_8326F450) {
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
	// lis r11,-32219
	ctx.r11.s64 = -2111504384;
	// lis r10,-32219
	ctx.r10.s64 = -2111504384;
	// li r4,15104
	ctx.r4.s64 = 15104;
	// ld r11,11316(r11)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r11.u32 + 11316);
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// stw r3,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r3.u32);
	// addi r3,r10,12140
	ctx.r3.s64 = ctx.r10.s64 + 12140;
	// bl 0x83282018
	ctx.lr = 0x8326F47C;
	sub_83282018(ctx, base);
	// cmpwi cr6,r3,1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 1, ctx.xer);
	// beq cr6,0x8326f498
	if (ctx.cr6.eq) goto loc_8326F498;
	// lis r11,-32219
	ctx.r11.s64 = -2111504384;
	// addi r3,r11,12088
	ctx.r3.s64 = ctx.r11.s64 + 12088;
	// bl 0x83278688
	ctx.lr = 0x8326F490;
	sub_83278688(ctx, base);
	// li r3,-1
	ctx.r3.s64 = -1;
	// b 0x8326f4dc
	goto loc_8326F4DC;
loc_8326F498:
	// lis r11,-31961
	ctx.r11.s64 = -2094596096;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r11,-4152
	ctx.r4.s64 = ctx.r11.s64 + -4152;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x83282450
	ctx.lr = 0x8326F4AC;
	sub_83282450(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x8326f4c0
	if (ctx.cr0.eq) goto loc_8326F4C0;
	// li r3,-303
	ctx.r3.s64 = -303;
loc_8326F4B8:
	// bl 0x8326ef70
	ctx.lr = 0x8326F4BC;
	sub_8326EF70(ctx, base);
	// b 0x8326f4dc
	goto loc_8326F4DC;
loc_8326F4C0:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x832824b8
	ctx.lr = 0x8326F4C8;
	sub_832824B8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x8326f4d8
	if (ctx.cr0.eq) goto loc_8326F4D8;
	// li r3,-301
	ctx.r3.s64 = -301;
	// b 0x8326f4b8
	goto loc_8326F4B8;
loc_8326F4D8:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8326F4DC:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8326F4EC"))) PPC_WEAK_FUNC(sub_8326F4EC);
PPC_FUNC_IMPL(__imp__sub_8326F4EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8326F4F0"))) PPC_WEAK_FUNC(sub_8326F4F0);
PPC_FUNC_IMPL(__imp__sub_8326F4F0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x833a01a8
	ctx.lr = 0x8326F4F8;
	__savegprlr_28(ctx, base);
	// stfd f31,-48(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -48, ctx.f31.u64);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x8326f51c
	if (!ctx.cr6.eq) goto loc_8326F51C;
	// lis r11,-32219
	ctx.r11.s64 = -2111504384;
	// addi r3,r11,12216
	ctx.r3.s64 = ctx.r11.s64 + 12216;
	// bl 0x83278688
	ctx.lr = 0x8326F518;
	sub_83278688(ctx, base);
	// b 0x8326f69c
	goto loc_8326F69C;
loc_8326F51C:
	// lis r29,-31816
	ctx.r29.s64 = -2085093376;
	// lis r11,-31845
	ctx.r11.s64 = -2086993920;
	// addi r28,r11,-5712
	ctx.r28.s64 = ctx.r11.s64 + -5712;
	// lwz r3,13264(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 13264);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8326f548
	if (ctx.cr6.eq) goto loc_8326F548;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r4,r28,4
	ctx.r4.s64 = ctx.r28.s64 + 4;
	// lwz r11,36(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8326F548;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8326F548:
	// lis r9,-31827
	ctx.r9.s64 = -2085814272;
	// lwz r10,12(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// lis r11,-32219
	ctx.r11.s64 = -2111504384;
	// lwz r8,16(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// addi r6,r1,96
	ctx.r6.s64 = ctx.r1.s64 + 96;
	// lwz r7,20(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// addi r11,r11,11232
	ctx.r11.s64 = ctx.r11.s64 + 11232;
	// lwz r5,24(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// li r30,0
	ctx.r30.s64 = 0;
	// lwz r4,28(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// stw r11,9864(r9)
	PPC_STORE_U32(ctx.r9.u32 + 9864, ctx.r11.u32);
	// li r3,1
	ctx.r3.s64 = 1;
	// lfs f31,0(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	ctx.f31.f64 = double(temp.f32);
	// std r30,0(r6)
	PPC_STORE_U64(ctx.r6.u32 + 0, ctx.r30.u64);
	// std r30,8(r6)
	PPC_STORE_U64(ctx.r6.u32 + 8, ctx.r30.u64);
	// std r30,16(r6)
	PPC_STORE_U64(ctx.r6.u32 + 16, ctx.r30.u64);
	// std r30,24(r6)
	PPC_STORE_U64(ctx.r6.u32 + 24, ctx.r30.u64);
	// stfs f31,96(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// stw r10,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r10.u32);
	// stw r8,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r8.u32);
	// stw r3,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r3.u32);
	// stw r7,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r7.u32);
	// stw r5,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r5.u32);
	// stw r4,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r4.u32);
	// bl 0x83278378
	ctx.lr = 0x8326F5AC;
	sub_83278378(ctx, base);
	// lis r31,-31827
	ctx.r31.s64 = -2085814272;
	// stw r30,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r30.u32);
	// lwz r11,10128(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 10128);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8326f674
	if (!ctx.cr6.eq) goto loc_8326F674;
	// bl 0x83278750
	ctx.lr = 0x8326F5C4;
	sub_83278750(ctx, base);
	// bl 0x83273b20
	ctx.lr = 0x8326F5C8;
	sub_83273B20(ctx, base);
	// bl 0x832ef960
	ctx.lr = 0x8326F5CC;
	sub_832EF960(ctx, base);
	// bl 0x832eddd0
	ctx.lr = 0x8326F5D0;
	sub_832EDDD0(ctx, base);
	// bl 0x832ee700
	ctx.lr = 0x8326F5D4;
	sub_832EE700(ctx, base);
	// bl 0x832ef2a0
	ctx.lr = 0x8326F5D8;
	sub_832EF2A0(ctx, base);
	// bl 0x82d6da88
	ctx.lr = 0x8326F5DC;
	sub_82D6DA88(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x8326f5f8
	if (ctx.cr0.eq) goto loc_8326F5F8;
	// li r3,-101
	ctx.r3.s64 = -101;
	// bl 0x8326ef70
	ctx.lr = 0x8326F5EC;
	sub_8326EF70(ctx, base);
	// lis r11,-32219
	ctx.r11.s64 = -2111504384;
	// addi r3,r11,12176
	ctx.r3.s64 = ctx.r11.s64 + 12176;
	// bl 0x83278688
	ctx.lr = 0x8326F5F8;
	sub_83278688(ctx, base);
loc_8326F5F8:
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8326ed70
	ctx.lr = 0x8326F600;
	sub_8326ED70(ctx, base);
	// lis r11,-31816
	ctx.r11.s64 = -2085093376;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lis r9,-32248
	ctx.r9.s64 = -2113404928;
	// stw r30,10788(r11)
	PPC_STORE_U32(ctx.r11.u32 + 10788, ctx.r30.u32);
	// lfs f0,6640(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 6640);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,-9180(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + -9180);
	ctx.f13.f64 = double(temp.f32);
	// fmadds f0,f31,f0,f13
	ctx.f0.f64 = double(float(ctx.f31.f64 * ctx.f0.f64 + ctx.f13.f64));
	// fctiwz f0,f0
	ctx.f0.s64 = (ctx.f0.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f0.f64));
	// stfd f0,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.f0.u64);
	// lwz r3,84(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// bl 0x8326f450
	ctx.lr = 0x8326F62C;
	sub_8326F450(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x8326f640
	if (ctx.cr0.eq) goto loc_8326F640;
	// lis r11,-32219
	ctx.r11.s64 = -2111504384;
	// addi r3,r11,12148
	ctx.r3.s64 = ctx.r11.s64 + 12148;
	// bl 0x83278688
	ctx.lr = 0x8326F640;
	sub_83278688(ctx, base);
loc_8326F640:
	// lis r10,-31827
	ctx.r10.s64 = -2085814272;
	// li r11,1
	ctx.r11.s64 = 1;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// stw r11,10132(r10)
	PPC_STORE_U32(ctx.r10.u32 + 10132, ctx.r11.u32);
	// bl 0x8326f268
	ctx.lr = 0x8326F654;
	sub_8326F268(ctx, base);
	// bl 0x832efbb0
	ctx.lr = 0x8326F658;
	sub_832EFBB0(ctx, base);
	// lis r11,-31961
	ctx.r11.s64 = -2094596096;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r11,-4864
	ctx.r3.s64 = ctx.r11.s64 + -4864;
	// bl 0x832efcd0
	ctx.lr = 0x8326F668;
	sub_832EFCD0(ctx, base);
	// bl 0x83270900
	ctx.lr = 0x8326F66C;
	sub_83270900(ctx, base);
	// bl 0x8326ed08
	ctx.lr = 0x8326F670;
	sub_8326ED08(ctx, base);
	// lwz r11,10128(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 10128);
loc_8326F674:
	// lwz r3,13264(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 13264);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,10128(r31)
	PPC_STORE_U32(ctx.r31.u32 + 10128, ctx.r11.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8326f69c
	if (ctx.cr6.eq) goto loc_8326F69C;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r4,r28,108
	ctx.r4.s64 = ctx.r28.s64 + 108;
	// lwz r11,36(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8326F69C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8326F69C:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// lfd f31,-48(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -48);
	// b 0x833a01f8
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8326F6A8"))) PPC_WEAK_FUNC(sub_8326F6A8);
PPC_FUNC_IMPL(__imp__sub_8326F6A8) {
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
	// lwz r3,96(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 96);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x8326f6d4
	if (!ctx.cr6.eq) goto loc_8326F6D4;
	// lis r11,-32219
	ctx.r11.s64 = -2111504384;
	// addi r3,r11,12352
	ctx.r3.s64 = ctx.r11.s64 + 12352;
loc_8326F6C8:
	// bl 0x83278688
	ctx.lr = 0x8326F6CC;
	sub_83278688(ctx, base);
	// li r3,-311
	ctx.r3.s64 = -311;
	// b 0x8326f6f8
	goto loc_8326F6F8;
loc_8326F6D4:
	// bl 0x83280598
	ctx.lr = 0x8326F6D8;
	sub_83280598(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x8326f6f4
	if (ctx.cr0.eq) goto loc_8326F6F4;
	// li r3,-311
	ctx.r3.s64 = -311;
	// bl 0x8326ef70
	ctx.lr = 0x8326F6E8;
	sub_8326EF70(ctx, base);
	// lis r11,-32219
	ctx.r11.s64 = -2111504384;
	// addi r3,r11,12324
	ctx.r3.s64 = ctx.r11.s64 + 12324;
	// b 0x8326f6c8
	goto loc_8326F6C8;
loc_8326F6F4:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8326F6F8:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8326F708"))) PPC_WEAK_FUNC(sub_8326F708);
PPC_FUNC_IMPL(__imp__sub_8326F708) {
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
	// lwz r3,96(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 96);
	// bl 0x8327ef10
	ctx.lr = 0x8326F71C;
	sub_8327EF10(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x8326f740
	if (ctx.cr0.eq) goto loc_8326F740;
	// li r3,-307
	ctx.r3.s64 = -307;
	// bl 0x8326ef70
	ctx.lr = 0x8326F72C;
	sub_8326EF70(ctx, base);
	// lis r11,-32219
	ctx.r11.s64 = -2111504384;
	// addi r3,r11,12380
	ctx.r3.s64 = ctx.r11.s64 + 12380;
	// bl 0x83278688
	ctx.lr = 0x8326F738;
	sub_83278688(ctx, base);
	// li r3,-307
	ctx.r3.s64 = -307;
	// b 0x8326f744
	goto loc_8326F744;
loc_8326F740:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8326F744:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8326F754"))) PPC_WEAK_FUNC(sub_8326F754);
PPC_FUNC_IMPL(__imp__sub_8326F754) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8326F758"))) PPC_WEAK_FUNC(sub_8326F758);
PPC_FUNC_IMPL(__imp__sub_8326F758) {
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
	// lwz r3,96(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 96);
	// bl 0x8327efd0
	ctx.lr = 0x8326F76C;
	sub_8327EFD0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x8326f780
	if (ctx.cr0.eq) goto loc_8326F780;
	// lis r11,-32219
	ctx.r11.s64 = -2111504384;
	// addi r3,r11,12408
	ctx.r3.s64 = ctx.r11.s64 + 12408;
	// bl 0x83278688
	ctx.lr = 0x8326F780;
	sub_83278688(ctx, base);
loc_8326F780:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8326F790"))) PPC_WEAK_FUNC(sub_8326F790);
PPC_FUNC_IMPL(__imp__sub_8326F790) {
	PPC_FUNC_PROLOGUE();
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,164(r3)
	PPC_STORE_U32(ctx.r3.u32 + 164, ctx.r11.u32);
	// stw r11,168(r3)
	PPC_STORE_U32(ctx.r3.u32 + 168, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8326F7A0"))) PPC_WEAK_FUNC(sub_8326F7A0);
PPC_FUNC_IMPL(__imp__sub_8326F7A0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x833a01a8
	ctx.lr = 0x8326F7A8;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// bl 0x83278660
	ctx.lr = 0x8326F7B8;
	sub_83278660(ctx, base);
	// lis r30,-31816
	ctx.r30.s64 = -2085093376;
	// lis r11,-31845
	ctx.r11.s64 = -2086993920;
	// addi r29,r11,-4848
	ctx.r29.s64 = ctx.r11.s64 + -4848;
	// lwz r3,13264(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 13264);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8326f7f0
	if (ctx.cr6.eq) goto loc_8326F7F0;
	// stw r31,12(r29)
	PPC_STORE_U32(ctx.r29.u32 + 12, ctx.r31.u32);
	// addi r4,r29,4
	ctx.r4.s64 = ctx.r29.s64 + 4;
	// stw r28,24(r29)
	PPC_STORE_U32(ctx.r29.u32 + 24, ctx.r28.u32);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,36(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8326F7EC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r3,13264(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 13264);
loc_8326F7F0:
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmpwi cr6,r11,10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 10, ctx.xer);
	// beq cr6,0x8326f81c
	if (ctx.cr6.eq) goto loc_8326F81C;
	// cmpwi cr6,r11,12
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 12, ctx.xer);
	// beq cr6,0x8326f81c
	if (ctx.cr6.eq) goto loc_8326F81C;
	// lwz r11,1692(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1692);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8326F818;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r3,13264(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 13264);
loc_8326F81C:
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8326f838
	if (ctx.cr6.eq) goto loc_8326F838;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r4,r29,108
	ctx.r4.s64 = ctx.r29.s64 + 108;
	// lwz r11,36(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8326F838;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8326F838:
	// bl 0x83278670
	ctx.lr = 0x8326F83C;
	sub_83278670(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x833a01f8
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8326F844"))) PPC_WEAK_FUNC(sub_8326F844);
PPC_FUNC_IMPL(__imp__sub_8326F844) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8326F848"))) PPC_WEAK_FUNC(sub_8326F848);
PPC_FUNC_IMPL(__imp__sub_8326F848) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x833a01ac
	ctx.lr = 0x8326F850;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r29,96(r3)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r3.u32 + 96);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x8326f93c
	if (ctx.cr6.eq) goto loc_8326F93C;
	// bl 0x832794d8
	ctx.lr = 0x8326F868;
	sub_832794D8(ctx, base);
	// li r30,0
	ctx.r30.s64 = 0;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// stw r30,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r30.u32);
	// stw r30,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r30.u32);
	// bl 0x83280158
	ctx.lr = 0x8326F87C;
	sub_83280158(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x8326f898
	if (ctx.cr0.eq) goto loc_8326F898;
	// li r3,-308
	ctx.r3.s64 = -308;
	// bl 0x8326ef70
	ctx.lr = 0x8326F88C;
	sub_8326EF70(ctx, base);
	// lis r11,-32219
	ctx.r11.s64 = -2111504384;
	// addi r3,r11,12448
	ctx.r3.s64 = ctx.r11.s64 + 12448;
	// bl 0x83278688
	ctx.lr = 0x8326F898;
	sub_83278688(ctx, base);
loc_8326F898:
	// stw r29,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r29.u32);
	// addi r3,r31,1504
	ctx.r3.s64 = ctx.r31.s64 + 1504;
	// bl 0x8326e8b0
	ctx.lr = 0x8326F8A4;
	sub_8326E8B0(ctx, base);
	// addi r3,r31,1544
	ctx.r3.s64 = ctx.r31.s64 + 1544;
	// bl 0x8326e8b0
	ctx.lr = 0x8326F8AC;
	sub_8326E8B0(ctx, base);
	// lwz r3,100(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 100);
	// stw r30,1592(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1592, ctx.r30.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8326f8c0
	if (ctx.cr6.eq) goto loc_8326F8C0;
	// bl 0x83276a50
	ctx.lr = 0x8326F8C0;
	sub_83276A50(ctx, base);
loc_8326F8C0:
	// lwz r3,108(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 108);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8326f8d0
	if (ctx.cr6.eq) goto loc_8326F8D0;
	// bl 0x832f0440
	ctx.lr = 0x8326F8D0;
	sub_832F0440(ctx, base);
loc_8326F8D0:
	// lwz r3,1324(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1324);
	// stw r30,1344(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1344, ctx.r30.u32);
	// stw r30,1336(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1336, ctx.r30.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// stw r30,1340(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1340, ctx.r30.u32);
	// stw r30,1348(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1348, ctx.r30.u32);
	// beq cr6,0x8326f8fc
	if (ctx.cr6.eq) goto loc_8326F8FC;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,20(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8326F8FC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8326F8FC:
	// lwz r11,1612(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1612);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8326f924
	if (!ctx.cr6.eq) goto loc_8326F924;
	// li r11,-1
	ctx.r11.s64 = -1;
	// stw r30,1620(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1620, ctx.r30.u32);
	// stw r30,1616(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1616, ctx.r30.u32);
	// stw r30,1608(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1608, ctx.r30.u32);
	// stw r30,1644(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1644, ctx.r30.u32);
	// stw r11,1640(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1640, ctx.r11.u32);
	// b 0x8326f92c
	goto loc_8326F92C;
loc_8326F924:
	// li r11,2
	ctx.r11.s64 = 2;
	// stw r11,1620(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1620, ctx.r11.u32);
loc_8326F92C:
	// stw r30,1664(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1664, ctx.r30.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x832723e0
	ctx.lr = 0x8326F93C;
	sub_832723E0(ctx, base);
loc_8326F93C:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x833a01fc
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8326F944"))) PPC_WEAK_FUNC(sub_8326F944);
PPC_FUNC_IMPL(__imp__sub_8326F944) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8326F948"))) PPC_WEAK_FUNC(sub_8326F948);
PPC_FUNC_IMPL(__imp__sub_8326F948) {
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
	// bl 0x8326df70
	ctx.lr = 0x8326F960;
	sub_8326DF70(ctx, base);
	// cmpwi cr6,r3,1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 1, ctx.xer);
	// beq cr6,0x8326f978
	if (ctx.cr6.eq) goto loc_8326F978;
	// lis r11,-32219
	ctx.r11.s64 = -2111504384;
	// addi r3,r11,12480
	ctx.r3.s64 = ctx.r11.s64 + 12480;
	// bl 0x83278688
	ctx.lr = 0x8326F974;
	sub_83278688(ctx, base);
	// b 0x8326f99c
	goto loc_8326F99C;
loc_8326F978:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8326f848
	ctx.lr = 0x8326F980;
	sub_8326F848(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x832723f8
	ctx.lr = 0x8326F98C;
	sub_832723F8(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// lwz r3,108(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 108);
	// stw r11,156(r31)
	PPC_STORE_U32(ctx.r31.u32 + 156, ctx.r11.u32);
	// bl 0x832f0440
	ctx.lr = 0x8326F99C;
	sub_832F0440(ctx, base);
loc_8326F99C:
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

__attribute__((alias("__imp__sub_8326F9B0"))) PPC_WEAK_FUNC(sub_8326F9B0);
PPC_FUNC_IMPL(__imp__sub_8326F9B0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x833a01ac
	ctx.lr = 0x8326F9B8;
	__savegprlr_29(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r30,96(r3)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r3.u32 + 96);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// bl 0x8326ee40
	ctx.lr = 0x8326F9CC;
	sub_8326EE40(ctx, base);
	// cmpwi cr6,r3,1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 1, ctx.xer);
	// bne cr6,0x8326fa0c
	if (!ctx.cr6.eq) goto loc_8326FA0C;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x8326fa0c
	if (!ctx.cr6.eq) goto loc_8326FA0C;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// li r4,6
	ctx.r4.s64 = 6;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x83274db0
	ctx.lr = 0x8326F9F0;
	sub_83274DB0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x8326fa04
	if (!ctx.cr0.eq) goto loc_8326FA04;
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x8326fa0c
	if (!ctx.cr6.eq) goto loc_8326FA0C;
loc_8326FA04:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x832794d8
	ctx.lr = 0x8326FA0C;
	sub_832794D8(ctx, base);
loc_8326FA0C:
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x83280660
	ctx.lr = 0x8326FA18;
	sub_83280660(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x8326fa50
	if (ctx.cr0.eq) goto loc_8326FA50;
	// li r3,-310
	ctx.r3.s64 = -310;
	// bl 0x8326ef70
	ctx.lr = 0x8326FA28;
	sub_8326EF70(ctx, base);
	// cmpwi cr6,r29,1
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 1, ctx.xer);
	// bne cr6,0x8326fa3c
	if (!ctx.cr6.eq) goto loc_8326FA3C;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r4,r11,30184
	ctx.r4.s64 = ctx.r11.s64 + 30184;
	// b 0x8326fa44
	goto loc_8326FA44;
loc_8326FA3C:
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r4,r11,30652
	ctx.r4.s64 = ctx.r11.s64 + 30652;
loc_8326FA44:
	// lis r11,-32219
	ctx.r11.s64 = -2111504384;
	// addi r3,r11,12520
	ctx.r3.s64 = ctx.r11.s64 + 12520;
	// bl 0x83278688
	ctx.lr = 0x8326FA50;
	sub_83278688(ctx, base);
loc_8326FA50:
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r3,r31,1504
	ctx.r3.s64 = ctx.r31.s64 + 1504;
	// bl 0x8326e970
	ctx.lr = 0x8326FA5C;
	sub_8326E970(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r3,r31,1544
	ctx.r3.s64 = ctx.r31.s64 + 1544;
	// bl 0x8326e970
	ctx.lr = 0x8326FA68;
	sub_8326E970(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x833a01fc
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8326FA70"))) PPC_WEAK_FUNC(sub_8326FA70);
PPC_FUNC_IMPL(__imp__sub_8326FA70) {
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
	// lwz r5,1300(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1300);
	// lis r11,-32219
	ctx.r11.s64 = -2111504384;
	// extsw r10,r5
	ctx.r10.s64 = ctx.r5.s32;
	// std r10,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r10.u64);
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// lfd f0,12560(r11)
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r11.u32 + 12560);
	// fmul f0,f13,f0
	ctx.f0.f64 = ctx.f13.f64 * ctx.f0.f64;
	// fctiwz f0,f0
	ctx.f0.s64 = (ctx.f0.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f0.f64));
	// stfd f0,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.f0.u64);
	// lwz r4,84(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// bl 0x8326df28
	ctx.lr = 0x8326FAAC;
	sub_8326DF28(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8326FABC"))) PPC_WEAK_FUNC(sub_8326FABC);
PPC_FUNC_IMPL(__imp__sub_8326FABC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8326FAC0"))) PPC_WEAK_FUNC(sub_8326FAC0);
PPC_FUNC_IMPL(__imp__sub_8326FAC0) {
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
	// lwz r3,100(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 100);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8326faf4
	if (ctx.cr6.eq) goto loc_8326FAF4;
	// bl 0x83276a88
	ctx.lr = 0x8326FAE4;
	sub_83276A88(ctx, base);
	// cmpwi cr6,r3,3
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 3, ctx.xer);
	// bne cr6,0x8326faf4
	if (!ctx.cr6.eq) goto loc_8326FAF4;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8326f758
	ctx.lr = 0x8326FAF4;
	sub_8326F758(ctx, base);
loc_8326FAF4:
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

__attribute__((alias("__imp__sub_8326FB08"))) PPC_WEAK_FUNC(sub_8326FB08);
PPC_FUNC_IMPL(__imp__sub_8326FB08) {
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
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
loc_8326FB28:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x8326fb28
	if (!ctx.cr6.eq) goto loc_8326FB28;
	// subf r11,r31,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r31.s64;
	// lwz r10,1268(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1268);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// ble cr6,0x8326fb70
	if (!ctx.cr6.gt) goto loc_8326FB70;
	// lis r11,-32219
	ctx.r11.s64 = -2111504384;
	// addi r3,r11,12568
	ctx.r3.s64 = ctx.r11.s64 + 12568;
	// bl 0x83278688
	ctx.lr = 0x8326FB5C;
	sub_83278688(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r5,1268(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1268);
	// lwz r3,1264(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1264);
	// bl 0x833a32e8
	ctx.lr = 0x8326FB6C;
	sub_833A32E8(ctx, base);
	// b 0x8326fb8c
	goto loc_8326FB8C;
loc_8326FB70:
	// lwz r10,1264(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1264);
	// addi r11,r31,-1
	ctx.r11.s64 = ctx.r31.s64 + -1;
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
loc_8326FB7C:
	// lbzu r9,1(r11)
	ea = 1 + ctx.r11.u32;
	ctx.r9.u64 = PPC_LOAD_U8(ea);
	ctx.r11.u32 = ea;
	// extsb. r8,r9
	ctx.r8.s64 = ctx.r9.s8;
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// stbu r9,1(r10)
	ea = 1 + ctx.r10.u32;
	PPC_STORE_U8(ea, ctx.r9.u8);
	ctx.r10.u32 = ea;
	// bne 0x8326fb7c
	if (!ctx.cr0.eq) goto loc_8326FB7C;
loc_8326FB8C:
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

__attribute__((alias("__imp__sub_8326FBA4"))) PPC_WEAK_FUNC(sub_8326FBA4);
PPC_FUNC_IMPL(__imp__sub_8326FBA4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8326FBA8"))) PPC_WEAK_FUNC(sub_8326FBA8);
PPC_FUNC_IMPL(__imp__sub_8326FBA8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x833a01ac
	ctx.lr = 0x8326FBB0;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// mr r29,r6
	ctx.r29.u64 = ctx.r6.u64;
	// bl 0x8326fb08
	ctx.lr = 0x8326FBC4;
	sub_8326FB08(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r30,1280(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1280, ctx.r30.u32);
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r29,1284(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1284, ctx.r29.u32);
	// stw r11,1276(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1276, ctx.r11.u32);
	// stw r10,1272(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1272, ctx.r10.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x833a01fc
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8326FBE4"))) PPC_WEAK_FUNC(sub_8326FBE4);
PPC_FUNC_IMPL(__imp__sub_8326FBE4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8326FBE8"))) PPC_WEAK_FUNC(sub_8326FBE8);
PPC_FUNC_IMPL(__imp__sub_8326FBE8) {
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
	// bl 0x8326df70
	ctx.lr = 0x8326FC00;
	sub_8326DF70(ctx, base);
	// cmpwi cr6,r3,1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 1, ctx.xer);
	// beq cr6,0x8326fc18
	if (ctx.cr6.eq) goto loc_8326FC18;
	// lis r11,-32219
	ctx.r11.s64 = -2111504384;
	// addi r3,r11,12596
	ctx.r3.s64 = ctx.r11.s64 + 12596;
	// bl 0x83278688
	ctx.lr = 0x8326FC14;
	sub_83278688(ctx, base);
	// b 0x8326fc50
	goto loc_8326FC50;
loc_8326FC18:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8326fc50
	if (ctx.cr6.eq) goto loc_8326FC50;
	// lwz r11,1664(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1664);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x8326fc50
	if (ctx.cr6.eq) goto loc_8326FC50;
	// li r11,0
	ctx.r11.s64 = 0;
	// lwz r3,96(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 96);
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r11,1272(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1272, ctx.r11.u32);
	// stw r10,1664(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1664, ctx.r10.u32);
	// bl 0x8327e5c8
	ctx.lr = 0x8326FC48;
	sub_8327E5C8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83278e40
	ctx.lr = 0x8326FC50;
	sub_83278E40(ctx, base);
loc_8326FC50:
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

__attribute__((alias("__imp__sub_8326FC64"))) PPC_WEAK_FUNC(sub_8326FC64);
PPC_FUNC_IMPL(__imp__sub_8326FC64) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8326FC68"))) PPC_WEAK_FUNC(sub_8326FC68);
PPC_FUNC_IMPL(__imp__sub_8326FC68) {
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
	// bl 0x83278e80
	ctx.lr = 0x8326FC80;
	sub_83278E80(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x8326fc98
	if (ctx.cr0.eq) goto loc_8326FC98;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83278d70
	ctx.lr = 0x8326FC90;
	sub_83278D70(ctx, base);
	// addic r11,r3,-1
	ctx.xer.ca = ctx.r3.u32 > 0;
	ctx.r11.s64 = ctx.r3.s64 + -1;
	// subfe r3,r11,r3
	temp.u8 = (~ctx.r11.u32 + ctx.r3.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r3.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r3.u64 = ~ctx.r11.u64 + ctx.r3.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
loc_8326FC98:
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

__attribute__((alias("__imp__sub_8326FCAC"))) PPC_WEAK_FUNC(sub_8326FCAC);
PPC_FUNC_IMPL(__imp__sub_8326FCAC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8326FCB0"))) PPC_WEAK_FUNC(sub_8326FCB0);
PPC_FUNC_IMPL(__imp__sub_8326FCB0) {
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
	// bl 0x8326df70
	ctx.lr = 0x8326FCD0;
	sub_8326DF70(ctx, base);
	// cmpwi cr6,r3,1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 1, ctx.xer);
	// beq cr6,0x8326fce8
	if (ctx.cr6.eq) goto loc_8326FCE8;
	// lis r11,-32219
	ctx.r11.s64 = -2111504384;
	// addi r3,r11,12644
	ctx.r3.s64 = ctx.r11.s64 + 12644;
	// bl 0x83278688
	ctx.lr = 0x8326FCE4;
	sub_83278688(ctx, base);
	// b 0x8326fd1c
	goto loc_8326FD1C;
loc_8326FCE8:
	// lbz r11,154(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 154);
	// extsb. r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8326fcfc
	if (!ctx.cr0.eq) goto loc_8326FCFC;
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// beq cr6,0x8326fd1c
	if (ctx.cr6.eq) goto loc_8326FD1C;
loc_8326FCFC:
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x8326fd0c
	if (!ctx.cr6.eq) goto loc_8326FD0C;
	// cmpwi cr6,r30,1
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 1, ctx.xer);
	// beq cr6,0x8326fd1c
	if (ctx.cr6.eq) goto loc_8326FD1C;
loc_8326FD0C:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8326f9b0
	ctx.lr = 0x8326FD18;
	sub_8326F9B0(ctx, base);
	// stb r30,154(r31)
	PPC_STORE_U8(ctx.r31.u32 + 154, ctx.r30.u8);
loc_8326FD1C:
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

__attribute__((alias("__imp__sub_8326FD34"))) PPC_WEAK_FUNC(sub_8326FD34);
PPC_FUNC_IMPL(__imp__sub_8326FD34) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8326FD38"))) PPC_WEAK_FUNC(sub_8326FD38);
PPC_FUNC_IMPL(__imp__sub_8326FD38) {
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
	// lbz r11,154(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 154);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x8326fd68
	if (!ctx.cr0.eq) goto loc_8326FD68;
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// beq cr6,0x8326fd78
	if (ctx.cr6.eq) goto loc_8326FD78;
loc_8326FD68:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8326f9b0
	ctx.lr = 0x8326FD74;
	sub_8326F9B0(ctx, base);
	// stb r30,154(r31)
	PPC_STORE_U8(ctx.r31.u32 + 154, ctx.r30.u8);
loc_8326FD78:
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

__attribute__((alias("__imp__sub_8326FD90"))) PPC_WEAK_FUNC(sub_8326FD90);
PPC_FUNC_IMPL(__imp__sub_8326FD90) {
	PPC_FUNC_PROLOGUE();
	// lis r6,32767
	ctx.r6.s64 = 2147418112;
	// li r5,0
	ctx.r5.s64 = 0;
	// ori r6,r6,65535
	ctx.r6.u64 = ctx.r6.u64 | 65535;
	// b 0x8326fba8
	sub_8326FBA8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8326FDA0"))) PPC_WEAK_FUNC(sub_8326FDA0);
PPC_FUNC_IMPL(__imp__sub_8326FDA0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x833a01ac
	ctx.lr = 0x8326FDA8;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r29,-31816
	ctx.r29.s64 = -2085093376;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lis r11,-31845
	ctx.r11.s64 = -2086993920;
	// addi r30,r11,-1824
	ctx.r30.s64 = ctx.r11.s64 + -1824;
	// lwz r3,13264(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 13264);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8326fde0
	if (ctx.cr6.eq) goto loc_8326FDE0;
	// stw r31,12(r30)
	PPC_STORE_U32(ctx.r30.u32 + 12, ctx.r31.u32);
	// addi r4,r30,4
	ctx.r4.s64 = ctx.r30.s64 + 4;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,36(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8326FDE0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8326FDE0:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8326fbe8
	ctx.lr = 0x8326FDE8;
	sub_8326FBE8(ctx, base);
	// lwz r3,13264(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 13264);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8326fe08
	if (ctx.cr6.eq) goto loc_8326FE08;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r4,r30,108
	ctx.r4.s64 = ctx.r30.s64 + 108;
	// lwz r11,36(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8326FE08;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8326FE08:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x833a01fc
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8326FE10"))) PPC_WEAK_FUNC(sub_8326FE10);
PPC_FUNC_IMPL(__imp__sub_8326FE10) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x833a01a8
	ctx.lr = 0x8326FE18;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x8326ecf0
	ctx.lr = 0x8326FE24;
	sub_8326ECF0(ctx, base);
	// li r28,0
	ctx.r28.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r28,1664(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1664, ctx.r28.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x832723e0
	ctx.lr = 0x8326FE38;
	sub_832723E0(ctx, base);
	// lwz r11,96(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 96);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8326feb0
	if (ctx.cr6.eq) goto loc_8326FEB0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x832737d0
	ctx.lr = 0x8326FE4C;
	sub_832737D0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x8326fe64
	if (ctx.cr0.eq) goto loc_8326FE64;
	// lis r11,-32219
	ctx.r11.s64 = -2111504384;
	// addi r3,r11,12772
	ctx.r3.s64 = ctx.r11.s64 + 12772;
loc_8326FE5C:
	// bl 0x83278688
	ctx.lr = 0x8326FE60;
	sub_83278688(ctx, base);
	// b 0x8326ff94
	goto loc_8326FF94;
loc_8326FE64:
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8326eba8
	ctx.lr = 0x8326FE70;
	sub_8326EBA8(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8326eba8
	ctx.lr = 0x8326FE7C;
	sub_8326EBA8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83270800
	ctx.lr = 0x8326FE84;
	sub_83270800(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83270788
	ctx.lr = 0x8326FE8C;
	sub_83270788(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x8326fea0
	if (ctx.cr0.eq) goto loc_8326FEA0;
	// lis r11,-32219
	ctx.r11.s64 = -2111504384;
	// addi r3,r11,12728
	ctx.r3.s64 = ctx.r11.s64 + 12728;
	// b 0x8326fe5c
	goto loc_8326FE5C;
loc_8326FEA0:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x832707e0
	ctx.lr = 0x8326FEA8;
	sub_832707E0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x832714b0
	ctx.lr = 0x8326FEB0;
	sub_832714B0(ctx, base);
loc_8326FEB0:
	// lwz r11,1676(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1676);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8326fec8
	if (ctx.cr6.eq) goto loc_8326FEC8;
	// lwz r3,1672(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1672);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8326FEC8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8326FEC8:
	// li r11,-1
	ctx.r11.s64 = -1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,1680(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1680, ctx.r11.u32);
	// stw r11,1684(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1684, ctx.r11.u32);
	// stw r11,1688(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1688, ctx.r11.u32);
	// bl 0x8326f790
	ctx.lr = 0x8326FEE0;
	sub_8326F790(ctx, base);
	// lbz r11,152(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 152);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// bne cr6,0x8326ff20
	if (!ctx.cr6.eq) goto loc_8326FF20;
	// lwz r3,96(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 96);
	// bl 0x832826c0
	ctx.lr = 0x8326FEF4;
	sub_832826C0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x8326ff08
	if (ctx.cr0.eq) goto loc_8326FF08;
	// lis r11,-32219
	ctx.r11.s64 = -2111504384;
	// addi r3,r11,12684
	ctx.r3.s64 = ctx.r11.s64 + 12684;
	// bl 0x83278688
	ctx.lr = 0x8326FF08;
	sub_83278688(ctx, base);
loc_8326FF08:
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r31,1504
	ctx.r3.s64 = ctx.r31.s64 + 1504;
	// bl 0x8326ea10
	ctx.lr = 0x8326FF14;
	sub_8326EA10(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r31,1544
	ctx.r3.s64 = ctx.r31.s64 + 1544;
	// bl 0x8326ea10
	ctx.lr = 0x8326FF20;
	sub_8326EA10(ctx, base);
loc_8326FF20:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8326f6a8
	ctx.lr = 0x8326FF28;
	sub_8326F6A8(ctx, base);
	// lbz r11,154(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 154);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// extsb r4,r11
	ctx.r4.s64 = ctx.r11.s8;
	// bl 0x8326fd38
	ctx.lr = 0x8326FF38;
	sub_8326FD38(ctx, base);
	// addi r30,r31,1504
	ctx.r30.s64 = ctx.r31.s64 + 1504;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8326e970
	ctx.lr = 0x8326FF48;
	sub_8326E970(ctx, base);
	// addi r29,r31,1544
	ctx.r29.s64 = ctx.r31.s64 + 1544;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8326e970
	ctx.lr = 0x8326FF58;
	sub_8326E970(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8326e858
	ctx.lr = 0x8326FF60;
	sub_8326E858(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8326e858
	ctx.lr = 0x8326FF68;
	sub_8326E858(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,148(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 148);
	// bl 0x8326ded8
	ctx.lr = 0x8326FF74;
	sub_8326DED8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,144(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 144);
	// bl 0x8326dee8
	ctx.lr = 0x8326FF80;
	sub_8326DEE8(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r28,172(r31)
	PPC_STORE_U32(ctx.r31.u32 + 172, ctx.r28.u32);
	// stb r28,153(r31)
	PPC_STORE_U8(ctx.r31.u32 + 153, ctx.r28.u8);
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// stw r28,1600(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1600, ctx.r28.u32);
loc_8326FF94:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x833a01f8
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8326FF9C"))) PPC_WEAK_FUNC(sub_8326FF9C);
PPC_FUNC_IMPL(__imp__sub_8326FF9C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8326FFA0"))) PPC_WEAK_FUNC(sub_8326FFA0);
PPC_FUNC_IMPL(__imp__sub_8326FFA0) {
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
	// li r3,1
	ctx.r3.s64 = 1;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// bl 0x83278eb0
	ctx.lr = 0x8326FFC4;
	sub_83278EB0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x832721f8
	ctx.lr = 0x8326FFD0;
	sub_832721F8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x832723f8
	ctx.lr = 0x8326FFDC;
	sub_832723F8(ctx, base);
	// lwz r11,1292(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1292);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,1288(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1288, ctx.r11.u32);
	// bl 0x8326f848
	ctx.lr = 0x8326FFEC;
	sub_8326F848(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8326fe10
	ctx.lr = 0x8326FFF4;
	sub_8326FE10(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x83278eb0
	ctx.lr = 0x8326FFFC;
	sub_83278EB0(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8326fd90
	ctx.lr = 0x83270008;
	sub_8326FD90(ctx, base);
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

__attribute__((alias("__imp__sub_83270020"))) PPC_WEAK_FUNC(sub_83270020);
PPC_FUNC_IMPL(__imp__sub_83270020) {
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
	// bl 0x8326df70
	ctx.lr = 0x83270040;
	sub_8326DF70(ctx, base);
	// cmpwi cr6,r3,1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 1, ctx.xer);
	// beq cr6,0x83270058
	if (ctx.cr6.eq) goto loc_83270058;
	// lis r11,-32219
	ctx.r11.s64 = -2111504384;
	// addi r3,r11,12812
	ctx.r3.s64 = ctx.r11.s64 + 12812;
	// bl 0x83278688
	ctx.lr = 0x83270054;
	sub_83278688(ctx, base);
	// b 0x83270094
	goto loc_83270094;
loc_83270058:
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x83278eb0
	ctx.lr = 0x83270060;
	sub_83278EB0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8326f848
	ctx.lr = 0x83270068;
	sub_8326F848(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,2
	ctx.r10.s64 = 2;
	// stw r30,1288(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1288, ctx.r30.u32);
	// stw r11,1312(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1312, ctx.r11.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r10,1308(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1308, ctx.r10.u32);
	// stw r11,1316(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1316, ctx.r11.u32);
	// stw r11,1320(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1320, ctx.r11.u32);
	// bl 0x8326fe10
	ctx.lr = 0x8327008C;
	sub_8326FE10(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x83278eb0
	ctx.lr = 0x83270094;
	sub_83278EB0(ctx, base);
loc_83270094:
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

__attribute__((alias("__imp__sub_832700AC"))) PPC_WEAK_FUNC(sub_832700AC);
PPC_FUNC_IMPL(__imp__sub_832700AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832700B0"))) PPC_WEAK_FUNC(sub_832700B0);
PPC_FUNC_IMPL(__imp__sub_832700B0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x833a01ac
	ctx.lr = 0x832700B8;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x8326fda0
	ctx.lr = 0x832700C4;
	sub_8326FDA0(ctx, base);
	// bl 0x83278660
	ctx.lr = 0x832700C8;
	sub_83278660(ctx, base);
	// lis r29,-31816
	ctx.r29.s64 = -2085093376;
	// lis r11,-31845
	ctx.r11.s64 = -2086993920;
	// addi r30,r11,-2040
	ctx.r30.s64 = ctx.r11.s64 + -2040;
	// lwz r3,13264(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 13264);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x832700f8
	if (ctx.cr6.eq) goto loc_832700F8;
	// stw r31,12(r30)
	PPC_STORE_U32(ctx.r30.u32 + 12, ctx.r31.u32);
	// addi r4,r30,4
	ctx.r4.s64 = ctx.r30.s64 + 4;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,36(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x832700F8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_832700F8:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8326f948
	ctx.lr = 0x83270100;
	sub_8326F948(ctx, base);
	// lwz r3,13264(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 13264);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x83270120
	if (ctx.cr6.eq) goto loc_83270120;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r4,r30,108
	ctx.r4.s64 = ctx.r30.s64 + 108;
	// lwz r11,36(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x83270120;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_83270120:
	// bl 0x83278670
	ctx.lr = 0x83270124;
	sub_83278670(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x833a01fc
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8327012C"))) PPC_WEAK_FUNC(sub_8327012C);
PPC_FUNC_IMPL(__imp__sub_8327012C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83270130"))) PPC_WEAK_FUNC(sub_83270130);
PPC_FUNC_IMPL(__imp__sub_83270130) {
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
	// bl 0x8326df70
	ctx.lr = 0x83270150;
	sub_8326DF70(ctx, base);
	// cmpwi cr6,r3,1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 1, ctx.xer);
	// beq cr6,0x83270168
	if (ctx.cr6.eq) goto loc_83270168;
	// lis r11,-32219
	ctx.r11.s64 = -2111504384;
	// addi r3,r11,12896
	ctx.r3.s64 = ctx.r11.s64 + 12896;
loc_83270160:
	// bl 0x83278688
	ctx.lr = 0x83270164;
	sub_83278688(ctx, base);
	// b 0x83270188
	goto loc_83270188;
loc_83270168:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// bne cr6,0x8327017c
	if (!ctx.cr6.eq) goto loc_8327017C;
	// lis r11,-32219
	ctx.r11.s64 = -2111504384;
	// addi r3,r11,12856
	ctx.r3.s64 = ctx.r11.s64 + 12856;
	// b 0x83270160
	goto loc_83270160;
loc_8327017C:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8326ffa0
	ctx.lr = 0x83270188;
	sub_8326FFA0(ctx, base);
loc_83270188:
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

__attribute__((alias("__imp__sub_832701A0"))) PPC_WEAK_FUNC(sub_832701A0);
PPC_FUNC_IMPL(__imp__sub_832701A0) {
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
	// bl 0x83278660
	ctx.lr = 0x832701C0;
	sub_83278660(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83270020
	ctx.lr = 0x832701CC;
	sub_83270020(ctx, base);
	// bl 0x83278670
	ctx.lr = 0x832701D0;
	sub_83278670(ctx, base);
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

__attribute__((alias("__imp__sub_832701E8"))) PPC_WEAK_FUNC(sub_832701E8);
PPC_FUNC_IMPL(__imp__sub_832701E8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x833a01a4
	ctx.lr = 0x832701F0;
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
	// bl 0x8326df70
	ctx.lr = 0x83270208;
	sub_8326DF70(ctx, base);
	// cmpwi cr6,r3,1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 1, ctx.xer);
	// beq cr6,0x83270220
	if (ctx.cr6.eq) goto loc_83270220;
	// lis r11,-32219
	ctx.r11.s64 = -2111504384;
	// addi r3,r11,12992
	ctx.r3.s64 = ctx.r11.s64 + 12992;
loc_83270218:
	// bl 0x83278688
	ctx.lr = 0x8327021C;
	sub_83278688(ctx, base);
	// b 0x83270278
	goto loc_83270278;
loc_83270220:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// bne cr6,0x83270234
	if (!ctx.cr6.eq) goto loc_83270234;
	// lis r11,-32219
	ctx.r11.s64 = -2111504384;
	// addi r3,r11,12944
	ctx.r3.s64 = ctx.r11.s64 + 12944;
	// b 0x83270218
	goto loc_83270218;
loc_83270234:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8326e300
	ctx.lr = 0x8327023C;
	sub_8326E300(ctx, base);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x832721f8
	ctx.lr = 0x8327024C;
	sub_832721F8(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x832723f8
	ctx.lr = 0x83270258;
	sub_832723F8(ctx, base);
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x832701a0
	ctx.lr = 0x83270264;
	sub_832701A0(ctx, base);
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8326fba8
	ctx.lr = 0x83270278;
	sub_8326FBA8(ctx, base);
loc_83270278:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x833a01f4
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83270280"))) PPC_WEAK_FUNC(sub_83270280);
PPC_FUNC_IMPL(__imp__sub_83270280) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x833a01a0
	ctx.lr = 0x83270288;
	__savegprlr_26(ctx, base);
	// stwu r1,-400(r1)
	ea = -400 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// lwz r26,208(r3)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r3.u32 + 208);
	// addi r5,r1,192
	ctx.r5.s64 = ctx.r1.s64 + 192;
	// mr r30,r6
	ctx.r30.u64 = ctx.r6.u64;
	// mr r29,r7
	ctx.r29.u64 = ctx.r7.u64;
	// mr r28,r8
	ctx.r28.u64 = ctx.r8.u64;
	// mr r27,r9
	ctx.r27.u64 = ctx.r9.u64;
	// bl 0x83270cd8
	ctx.lr = 0x832702AC;
	sub_83270CD8(ctx, base);
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// mr r10,r27
	ctx.r10.u64 = ctx.r27.u64;
	// mr r9,r28
	ctx.r9.u64 = ctx.r28.u64;
	// mr r8,r29
	ctx.r8.u64 = ctx.r29.u64;
	// mr r7,r30
	ctx.r7.u64 = ctx.r30.u64;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// addi r4,r1,192
	ctx.r4.s64 = ctx.r1.s64 + 192;
	// bl 0x83283060
	ctx.lr = 0x832702D0;
	sub_83283060(ctx, base);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r4,r1,192
	ctx.r4.s64 = ctx.r1.s64 + 192;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x83282970
	ctx.lr = 0x832702E0;
	sub_83282970(ctx, base);
	// addi r1,r1,400
	ctx.r1.s64 = ctx.r1.s64 + 400;
	// b 0x833a01f0
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832702E8"))) PPC_WEAK_FUNC(sub_832702E8);
PPC_FUNC_IMPL(__imp__sub_832702E8) {
	PPC_FUNC_PROLOGUE();
	// lwz r9,16(r4)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r4.u32 + 16);
	// li r7,0
	ctx.r7.s64 = 0;
	// lwz r8,12(r4)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r4.u32 + 12);
	// li r6,0
	ctx.r6.s64 = 0;
	// b 0x83270280
	sub_83270280(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832702FC"))) PPC_WEAK_FUNC(sub_832702FC);
PPC_FUNC_IMPL(__imp__sub_832702FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83270300"))) PPC_WEAK_FUNC(sub_83270300);
PPC_FUNC_IMPL(__imp__sub_83270300) {
	PPC_FUNC_PROLOGUE();
	// b 0x832832d0
	sub_832832D0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83270304"))) PPC_WEAK_FUNC(sub_83270304);
PPC_FUNC_IMPL(__imp__sub_83270304) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83270308"))) PPC_WEAK_FUNC(sub_83270308);
PPC_FUNC_IMPL(__imp__sub_83270308) {
	PPC_FUNC_PROLOGUE();
	// li r3,8223
	ctx.r3.s64 = 8223;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83270310"))) PPC_WEAK_FUNC(sub_83270310);
PPC_FUNC_IMPL(__imp__sub_83270310) {
	PPC_FUNC_PROLOGUE();
	// b 0x83283520
	sub_83283520(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83270314"))) PPC_WEAK_FUNC(sub_83270314);
PPC_FUNC_IMPL(__imp__sub_83270314) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83270318"))) PPC_WEAK_FUNC(sub_83270318);
PPC_FUNC_IMPL(__imp__sub_83270318) {
	PPC_FUNC_PROLOGUE();
	// b 0x83283418
	sub_83283418(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8327031C"))) PPC_WEAK_FUNC(sub_8327031C);
PPC_FUNC_IMPL(__imp__sub_8327031C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83270320"))) PPC_WEAK_FUNC(sub_83270320);
PPC_FUNC_IMPL(__imp__sub_83270320) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,208(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 208);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83270328"))) PPC_WEAK_FUNC(sub_83270328);
PPC_FUNC_IMPL(__imp__sub_83270328) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// srawi r11,r4,3
	ctx.xer.ca = (ctx.r4.s32 < 0) & ((ctx.r4.u32 & 0x7) != 0);
	ctx.r11.s64 = ctx.r4.s32 >> 3;
	// addze r11,r11
	temp.s64 = ctx.r11.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r11.u32;
	ctx.r11.s64 = temp.s64;
	// rlwinm r11,r11,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// subf r11,r11,r4
	ctx.r11.s64 = ctx.r4.s64 - ctx.r11.s64;
	// mulli r11,r11,56
	ctx.r11.s64 = ctx.r11.s64 * 56;
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// lwz r10,232(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 232);
	// cmpwi cr6,r10,1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 1, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// lwz r3,256(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 256);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83270358"))) PPC_WEAK_FUNC(sub_83270358);
PPC_FUNC_IMPL(__imp__sub_83270358) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// srawi r11,r4,3
	ctx.xer.ca = (ctx.r4.s32 < 0) & ((ctx.r4.u32 & 0x7) != 0);
	ctx.r11.s64 = ctx.r4.s32 >> 3;
	// addze r11,r11
	temp.s64 = ctx.r11.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r11.u32;
	ctx.r11.s64 = temp.s64;
	// rlwinm r11,r11,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// subf r11,r11,r4
	ctx.r11.s64 = ctx.r4.s64 - ctx.r11.s64;
	// mulli r11,r11,56
	ctx.r11.s64 = ctx.r11.s64 * 56;
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// lwz r10,232(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 232);
	// cmpwi cr6,r10,1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 1, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// lwz r3,260(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 260);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83270388"))) PPC_WEAK_FUNC(sub_83270388);
PPC_FUNC_IMPL(__imp__sub_83270388) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// srawi r11,r4,3
	ctx.xer.ca = (ctx.r4.s32 < 0) & ((ctx.r4.u32 & 0x7) != 0);
	ctx.r11.s64 = ctx.r4.s32 >> 3;
	// addze r11,r11
	temp.s64 = ctx.r11.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r11.u32;
	ctx.r11.s64 = temp.s64;
	// rlwinm r11,r11,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// subf r11,r11,r4
	ctx.r11.s64 = ctx.r4.s64 - ctx.r11.s64;
	// mulli r11,r11,56
	ctx.r11.s64 = ctx.r11.s64 * 56;
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// li r3,17
	ctx.r3.s64 = 17;
	// lwz r10,232(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 232);
	// cmpwi cr6,r10,1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 1, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// lwz r3,268(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 268);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_832703B8"))) PPC_WEAK_FUNC(sub_832703B8);
PPC_FUNC_IMPL(__imp__sub_832703B8) {
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
	// cmpwi cr6,r3,1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 1, ctx.xer);
	// beq cr6,0x832703f8
	if (ctx.cr6.eq) goto loc_832703F8;
	// cmpwi cr6,r3,2
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 2, ctx.xer);
	// beq cr6,0x832703f0
	if (ctx.cr6.eq) goto loc_832703F0;
	// cmpwi cr6,r3,3
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 3, ctx.xer);
	// beq cr6,0x832703e8
	if (ctx.cr6.eq) goto loc_832703E8;
	// lis r11,-32219
	ctx.r11.s64 = -2111504384;
	// addi r3,r11,13188
	ctx.r3.s64 = ctx.r11.s64 + 13188;
	// bl 0x83278688
	ctx.lr = 0x832703E8;
	sub_83278688(ctx, base);
loc_832703E8:
	// li r3,3
	ctx.r3.s64 = 3;
	// b 0x832703fc
	goto loc_832703FC;
loc_832703F0:
	// li r3,2
	ctx.r3.s64 = 2;
	// b 0x832703fc
	goto loc_832703FC;
loc_832703F8:
	// li r3,1
	ctx.r3.s64 = 1;
loc_832703FC:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8327040C"))) PPC_WEAK_FUNC(sub_8327040C);
PPC_FUNC_IMPL(__imp__sub_8327040C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83270410"))) PPC_WEAK_FUNC(sub_83270410);
PPC_FUNC_IMPL(__imp__sub_83270410) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,60(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 60);
	// stw r11,84(r4)
	PPC_STORE_U32(ctx.r4.u32 + 84, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8327041C"))) PPC_WEAK_FUNC(sub_8327041C);
PPC_FUNC_IMPL(__imp__sub_8327041C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83270420"))) PPC_WEAK_FUNC(sub_83270420);
PPC_FUNC_IMPL(__imp__sub_83270420) {
	PPC_FUNC_PROLOGUE();
	// stw r4,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r4.u32);
	// stw r5,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r5.u32);
	// stw r6,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r6.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83270430"))) PPC_WEAK_FUNC(sub_83270430);
PPC_FUNC_IMPL(__imp__sub_83270430) {
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
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// lwz r3,208(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 208);
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x83283700
	ctx.lr = 0x83270454;
	sub_83283700(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// lwz r10,84(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// stw r11,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r11.u32);
	// stw r11,100(r31)
	PPC_STORE_U32(ctx.r31.u32 + 100, ctx.r11.u32);
	// stw r10,92(r31)
	PPC_STORE_U32(ctx.r31.u32 + 92, ctx.r10.u32);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// stw r11,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r11.u32);
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

__attribute__((alias("__imp__sub_83270484"))) PPC_WEAK_FUNC(sub_83270484);
PPC_FUNC_IMPL(__imp__sub_83270484) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83270488"))) PPC_WEAK_FUNC(sub_83270488);
PPC_FUNC_IMPL(__imp__sub_83270488) {
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
	// lwz r11,176(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 176);
	// li r31,3
	ctx.r31.s64 = 3;
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x832704d8
	if (ctx.cr6.eq) goto loc_832704D8;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x832704d0
	if (ctx.cr6.eq) goto loc_832704D0;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// beq cr6,0x832704c8
	if (ctx.cr6.eq) goto loc_832704C8;
	// lis r11,-32219
	ctx.r11.s64 = -2111504384;
	// addi r3,r11,13228
	ctx.r3.s64 = ctx.r11.s64 + 13228;
	// bl 0x83278688
	ctx.lr = 0x832704C4;
	sub_83278688(ctx, base);
	// b 0x832704dc
	goto loc_832704DC;
loc_832704C8:
	// li r31,3
	ctx.r31.s64 = 3;
	// b 0x832704dc
	goto loc_832704DC;
loc_832704D0:
	// li r31,2
	ctx.r31.s64 = 2;
	// b 0x832704dc
	goto loc_832704DC;
loc_832704D8:
	// li r31,1
	ctx.r31.s64 = 1;
loc_832704DC:
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

__attribute__((alias("__imp__sub_832704F4"))) PPC_WEAK_FUNC(sub_832704F4);
PPC_FUNC_IMPL(__imp__sub_832704F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832704F8"))) PPC_WEAK_FUNC(sub_832704F8);
PPC_FUNC_IMPL(__imp__sub_832704F8) {
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
	// lwz r11,180(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 180);
	// li r31,1
	ctx.r31.s64 = 1;
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x83270548
	if (ctx.cr6.eq) goto loc_83270548;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x83270540
	if (ctx.cr6.eq) goto loc_83270540;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// beq cr6,0x83270538
	if (ctx.cr6.eq) goto loc_83270538;
	// lis r11,-32219
	ctx.r11.s64 = -2111504384;
	// addi r3,r11,13268
	ctx.r3.s64 = ctx.r11.s64 + 13268;
	// bl 0x83278688
	ctx.lr = 0x83270534;
	sub_83278688(ctx, base);
	// b 0x8327054c
	goto loc_8327054C;
loc_83270538:
	// li r31,3
	ctx.r31.s64 = 3;
	// b 0x8327054c
	goto loc_8327054C;
loc_83270540:
	// li r31,2
	ctx.r31.s64 = 2;
	// b 0x8327054c
	goto loc_8327054C;
loc_83270548:
	// li r31,1
	ctx.r31.s64 = 1;
loc_8327054C:
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

__attribute__((alias("__imp__sub_83270564"))) PPC_WEAK_FUNC(sub_83270564);
PPC_FUNC_IMPL(__imp__sub_83270564) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83270568"))) PPC_WEAK_FUNC(sub_83270568);
PPC_FUNC_IMPL(__imp__sub_83270568) {
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
	// li r31,1
	ctx.r31.s64 = 1;
	// cmplwi cr6,r3,1
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 1, ctx.xer);
	// blt cr6,0x832705a0
	if (ctx.cr6.lt) goto loc_832705A0;
	// beq cr6,0x83270598
	if (ctx.cr6.eq) goto loc_83270598;
	// lis r11,-32219
	ctx.r11.s64 = -2111504384;
	// addi r3,r11,13304
	ctx.r3.s64 = ctx.r11.s64 + 13304;
	// bl 0x83278688
	ctx.lr = 0x83270594;
	sub_83278688(ctx, base);
	// b 0x832705a4
	goto loc_832705A4;
loc_83270598:
	// li r31,1
	ctx.r31.s64 = 1;
	// b 0x832705a4
	goto loc_832705A4;
loc_832705A0:
	// li r31,0
	ctx.r31.s64 = 0;
loc_832705A4:
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

__attribute__((alias("__imp__sub_832705BC"))) PPC_WEAK_FUNC(sub_832705BC);
PPC_FUNC_IMPL(__imp__sub_832705BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832705C0"))) PPC_WEAK_FUNC(sub_832705C0);
PPC_FUNC_IMPL(__imp__sub_832705C0) {
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
	// bl 0x83270320
	ctx.lr = 0x832705D0;
	sub_83270320(ctx, base);
	// bl 0x82822bf8
	ctx.lr = 0x832705D4;
	sub_82822BF8(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_832705E4"))) PPC_WEAK_FUNC(sub_832705E4);
PPC_FUNC_IMPL(__imp__sub_832705E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832705E8"))) PPC_WEAK_FUNC(sub_832705E8);
PPC_FUNC_IMPL(__imp__sub_832705E8) {
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
	// bl 0x8326df70
	ctx.lr = 0x83270600;
	sub_8326DF70(ctx, base);
	// cmpwi cr6,r3,1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 1, ctx.xer);
	// beq cr6,0x8327061c
	if (ctx.cr6.eq) goto loc_8327061C;
	// lis r11,-32219
	ctx.r11.s64 = -2111504384;
	// addi r3,r11,13336
	ctx.r3.s64 = ctx.r11.s64 + 13336;
	// bl 0x83278688
	ctx.lr = 0x83270614;
	sub_83278688(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x83270620
	goto loc_83270620;
loc_8327061C:
	// lwz r3,112(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 112);
loc_83270620:
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

__attribute__((alias("__imp__sub_83270634"))) PPC_WEAK_FUNC(sub_83270634);
PPC_FUNC_IMPL(__imp__sub_83270634) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83270638"))) PPC_WEAK_FUNC(sub_83270638);
PPC_FUNC_IMPL(__imp__sub_83270638) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x833a01a8
	ctx.lr = 0x83270640;
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
	// bl 0x8326df70
	ctx.lr = 0x83270658;
	sub_8326DF70(ctx, base);
	// cmpwi cr6,r3,1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 1, ctx.xer);
	// beq cr6,0x83270670
	if (ctx.cr6.eq) goto loc_83270670;
	// lis r11,-32219
	ctx.r11.s64 = -2111504384;
	// addi r3,r11,13388
	ctx.r3.s64 = ctx.r11.s64 + 13388;
	// bl 0x83278688
	ctx.lr = 0x8327066C;
	sub_83278688(ctx, base);
	// b 0x83270694
	goto loc_83270694;
loc_83270670:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83270320
	ctx.lr = 0x83270678;
	sub_83270320(ctx, base);
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x83283660
	ctx.lr = 0x83270688;
	sub_83283660(ctx, base);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8323f230
	ctx.lr = 0x83270694;
	sub_8323F230(ctx, base);
loc_83270694:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x833a01f8
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8327069C"))) PPC_WEAK_FUNC(sub_8327069C);
PPC_FUNC_IMPL(__imp__sub_8327069C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832706A0"))) PPC_WEAK_FUNC(sub_832706A0);
PPC_FUNC_IMPL(__imp__sub_832706A0) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x832706d0
	if (ctx.cr6.eq) goto loc_832706D0;
	// cmpwi cr6,r11,6
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 6, ctx.xer);
	// beq cr6,0x832706d0
	if (ctx.cr6.eq) goto loc_832706D0;
	// cmpwi cr6,r11,8
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 8, ctx.xer);
	// beq cr6,0x832706d0
	if (ctx.cr6.eq) goto loc_832706D0;
	// cmpwi cr6,r11,10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 10, ctx.xer);
	// beq cr6,0x832706d0
	if (ctx.cr6.eq) goto loc_832706D0;
	// cmpwi cr6,r11,12
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 12, ctx.xer);
	// li r3,0
	ctx.r3.s64 = 0;
	// bnelr cr6
	if (!ctx.cr6.eq) return;
loc_832706D0:
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_832706D8"))) PPC_WEAK_FUNC(sub_832706D8);
PPC_FUNC_IMPL(__imp__sub_832706D8) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x832706f0
	if (ctx.cr6.eq) goto loc_832706F0;
	// cmpwi cr6,r11,257
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 257, ctx.xer);
	// li r3,0
	ctx.r3.s64 = 0;
	// bnelr cr6
	if (!ctx.cr6.eq) return;
loc_832706F0:
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_832706F8"))) PPC_WEAK_FUNC(sub_832706F8);
PPC_FUNC_IMPL(__imp__sub_832706F8) {
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
	// addi r3,r3,8
	ctx.r3.s64 = ctx.r3.s64 + 8;
	// bl 0x832706d8
	ctx.lr = 0x83270714;
	sub_832706D8(ctx, base);
	// cmpwi cr6,r3,1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 1, ctx.xer);
	// bne cr6,0x83270748
	if (!ctx.cr6.eq) goto loc_83270748;
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r4,1232(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1232);
	// lwz r3,1228(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1228);
	// bl 0x832ee4c0
	ctx.lr = 0x8327072C;
	sub_832EE4C0(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne 0x8327074c
	if (!ctx.cr0.eq) goto loc_8327074C;
	// lis r11,-32219
	ctx.r11.s64 = -2111504384;
	// addi r3,r11,13440
	ctx.r3.s64 = ctx.r11.s64 + 13440;
	// bl 0x83278688
	ctx.lr = 0x83270740;
	sub_83278688(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83274708
	ctx.lr = 0x83270748;
	sub_83274708(ctx, base);
loc_83270748:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8327074C:
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

__attribute__((alias("__imp__sub_83270760"))) PPC_WEAK_FUNC(sub_83270760);
PPC_FUNC_IMPL(__imp__sub_83270760) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,1224(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1224);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// rotlwi r3,r11,0
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_83270780"))) PPC_WEAK_FUNC(sub_83270780);
PPC_FUNC_IMPL(__imp__sub_83270780) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83270784"))) PPC_WEAK_FUNC(sub_83270784);
PPC_FUNC_IMPL(__imp__sub_83270784) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83270788"))) PPC_WEAK_FUNC(sub_83270788);
PPC_FUNC_IMPL(__imp__sub_83270788) {
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
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// bl 0x832706a0
	ctx.lr = 0x8327079C;
	sub_832706A0(ctx, base);
	// cmpwi cr6,r3,1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 1, ctx.xer);
	// bne cr6,0x832707ac
	if (!ctx.cr6.eq) goto loc_832707AC;
loc_832707A4:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x832707d0
	goto loc_832707D0;
loc_832707AC:
	// lwz r5,1224(r10)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r10.u32 + 1224);
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x832707a4
	if (ctx.cr6.eq) goto loc_832707A4;
	// li r6,0
	ctx.r6.s64 = 0;
	// lwz r3,96(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + 96);
	// li r4,2
	ctx.r4.s64 = 2;
	// bl 0x83280728
	ctx.lr = 0x832707C8;
	sub_83280728(ctx, base);
	// subfic r11,r3,0
	ctx.xer.ca = ctx.r3.u32 <= 0;
	ctx.r11.s64 = 0 - ctx.r3.s64;
	// subfe r3,r11,r11
	temp.u8 = (~ctx.r11.u32 + ctx.r11.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r3.u64 = ~ctx.r11.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
loc_832707D0:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_832707E0"))) PPC_WEAK_FUNC(sub_832707E0);
PPC_FUNC_IMPL(__imp__sub_832707E0) {
	PPC_FUNC_PROLOGUE();
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,-1
	ctx.r10.s64 = -1;
	// stw r11,1248(r3)
	PPC_STORE_U32(ctx.r3.u32 + 1248, ctx.r11.u32);
	// stw r11,1252(r3)
	PPC_STORE_U32(ctx.r3.u32 + 1252, ctx.r11.u32);
	// stw r11,1256(r3)
	PPC_STORE_U32(ctx.r3.u32 + 1256, ctx.r11.u32);
	// stw r10,1244(r3)
	PPC_STORE_U32(ctx.r3.u32 + 1244, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_832707FC"))) PPC_WEAK_FUNC(sub_832707FC);
PPC_FUNC_IMPL(__imp__sub_832707FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83270800"))) PPC_WEAK_FUNC(sub_83270800);
PPC_FUNC_IMPL(__imp__sub_83270800) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,1224(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1224);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,20(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_8327081C"))) PPC_WEAK_FUNC(sub_8327081C);
PPC_FUNC_IMPL(__imp__sub_8327081C) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83270820"))) PPC_WEAK_FUNC(sub_83270820);
PPC_FUNC_IMPL(__imp__sub_83270820) {
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
	// lwz r11,1252(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1252);
	// lwz r31,208(r3)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 208);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8327084c
	if (!ctx.cr6.eq) goto loc_8327084C;
loc_83270840:
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// b 0x83270884
	goto loc_83270884;
loc_8327084C:
	// lwz r10,1256(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1256);
	// lis r9,-32219
	ctx.r9.s64 = -2111504384;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// lis r11,-32219
	ctx.r11.s64 = -2111504384;
	// addi r5,r9,13492
	ctx.r5.s64 = ctx.r9.s64 + 13492;
	// addi r4,r11,13484
	ctx.r4.s64 = ctx.r11.s64 + 13484;
	// addi r6,r1,88
	ctx.r6.s64 = ctx.r1.s64 + 88;
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x832f0eb0
	ctx.lr = 0x83270874;
	sub_832F0EB0(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x83270840
	if (ctx.cr0.eq) goto loc_83270840;
	// lwz r5,92(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// lwz r4,88(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
loc_83270884:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83283670
	ctx.lr = 0x8327088C;
	sub_83283670(ctx, base);
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

__attribute__((alias("__imp__sub_832708A0"))) PPC_WEAK_FUNC(sub_832708A0);
PPC_FUNC_IMPL(__imp__sub_832708A0) {
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
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// bl 0x832706a0
	ctx.lr = 0x832708B4;
	sub_832706A0(ctx, base);
	// cmpwi cr6,r3,1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 1, ctx.xer);
	// bne cr6,0x832708c4
	if (!ctx.cr6.eq) goto loc_832708C4;
loc_832708BC:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x832708ec
	goto loc_832708EC;
loc_832708C4:
	// lwz r11,1224(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 1224);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x832708bc
	if (ctx.cr6.eq) goto loc_832708BC;
	// li r6,0
	ctx.r6.s64 = 0;
	// lwz r3,96(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + 96);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,2
	ctx.r4.s64 = 2;
	// bl 0x83280728
	ctx.lr = 0x832708E4;
	sub_83280728(ctx, base);
	// subfic r11,r3,0
	ctx.xer.ca = ctx.r3.u32 <= 0;
	ctx.r11.s64 = 0 - ctx.r3.s64;
	// subfe r3,r11,r11
	temp.u8 = (~ctx.r11.u32 + ctx.r11.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r3.u64 = ~ctx.r11.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
loc_832708EC:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_832708FC"))) PPC_WEAK_FUNC(sub_832708FC);
PPC_FUNC_IMPL(__imp__sub_832708FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83270900"))) PPC_WEAK_FUNC(sub_83270900);
PPC_FUNC_IMPL(__imp__sub_83270900) {
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
	// bl 0x832835f8
	ctx.lr = 0x83270910;
	sub_832835F8(ctx, base);
	// lis r11,-31961
	ctx.r11.s64 = -2094596096;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r11,-4864
	ctx.r3.s64 = ctx.r11.s64 + -4864;
	// bl 0x83283320
	ctx.lr = 0x83270920;
	sub_83283320(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83270930"))) PPC_WEAK_FUNC(sub_83270930);
PPC_FUNC_IMPL(__imp__sub_83270930) {
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
	// lwz r11,112(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 112);
	// mr r9,r3
	ctx.r9.u64 = ctx.r3.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x83270970
	if (!ctx.cr6.eq) goto loc_83270970;
	// lwz r4,56(r4)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r4.u32 + 56);
	// bl 0x83270388
	ctx.lr = 0x83270954;
	sub_83270388(ctx, base);
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// beq cr6,0x83270964
	if (ctx.cr6.eq) goto loc_83270964;
	// stw r3,116(r9)
	PPC_STORE_U32(ctx.r9.u32 + 116, ctx.r3.u32);
	// b 0x8327096c
	goto loc_8327096C;
loc_83270964:
	// li r11,17
	ctx.r11.s64 = 17;
	// stw r11,116(r9)
	PPC_STORE_U32(ctx.r9.u32 + 116, ctx.r11.u32);
loc_8327096C:
	// lwz r11,116(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 116);
loc_83270970:
	// mr r3,r9
	ctx.r3.u64 = ctx.r9.u64;
	// mr r4,r11
	ctx.r4.u64 = ctx.r11.u64;
	// bl 0x83270320
	ctx.lr = 0x8327097C;
	sub_83270320(ctx, base);
	// bl 0x82822bf8
	ctx.lr = 0x83270980;
	sub_82822BF8(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83270990"))) PPC_WEAK_FUNC(sub_83270990);
PPC_FUNC_IMPL(__imp__sub_83270990) {
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
	// mr r9,r4
	ctx.r9.u64 = ctx.r4.u64;
	// lwz r4,56(r4)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r4.u32 + 56);
	// bl 0x83270328
	ctx.lr = 0x832709A8;
	sub_83270328(ctx, base);
	// addi r10,r3,-1
	ctx.r10.s64 = ctx.r3.s64 + -1;
	// lwz r11,160(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 160);
	// cntlzw r10,r10
	ctx.r10.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// rlwinm r3,r10,27,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// beq cr6,0x832709d8
	if (ctx.cr6.eq) goto loc_832709D8;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// lwz r4,164(r9)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r9.u32 + 164);
	// bl 0x83283858
	ctx.lr = 0x832709CC;
	sub_83283858(ctx, base);
	// addi r11,r3,-1
	ctx.r11.s64 = ctx.r3.s64 + -1;
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r3,r11,27,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
loc_832709D8:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_832709E8"))) PPC_WEAK_FUNC(sub_832709E8);
PPC_FUNC_IMPL(__imp__sub_832709E8) {
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
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// lwz r10,2044(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 2044);
	// lwz r4,68(r5)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r5.u32 + 68);
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// lwz r30,72(r5)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r5.u32 + 72);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// lwz r3,0(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// beq cr6,0x83270a28
	if (ctx.cr6.eq) goto loc_83270A28;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x83271170
	ctx.lr = 0x83270A24;
	sub_83271170(ctx, base);
	// b 0x83270a34
	goto loc_83270A34;
loc_83270A28:
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// bl 0x83271bc8
	ctx.lr = 0x83270A34;
	sub_83271BC8(ctx, base);
loc_83270A34:
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// lwz r5,92(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// addi r3,r31,4
	ctx.r3.s64 = ctx.r31.s64 + 4;
	// lwz r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x83270420
	ctx.lr = 0x83270A48;
	sub_83270420(ctx, base);
	// srawi r11,r30,1
	ctx.xer.ca = (ctx.r30.s32 < 0) & ((ctx.r30.u32 & 0x1) != 0);
	ctx.r11.s64 = ctx.r30.s32 >> 1;
	// addi r3,r31,20
	ctx.r3.s64 = ctx.r31.s64 + 20;
	// addze r6,r11
	temp.s64 = ctx.r11.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r11.u32;
	ctx.r6.s64 = temp.s64;
	// lwz r5,96(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// lwz r4,84(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// bl 0x83270420
	ctx.lr = 0x83270A60;
	sub_83270420(ctx, base);
	// addi r3,r31,36
	ctx.r3.s64 = ctx.r31.s64 + 36;
	// lwz r5,100(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// lwz r4,88(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// bl 0x83270420
	ctx.lr = 0x83270A70;
	sub_83270420(ctx, base);
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

__attribute__((alias("__imp__sub_83270A88"))) PPC_WEAK_FUNC(sub_83270A88);
PPC_FUNC_IMPL(__imp__sub_83270A88) {
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
	// bl 0x83270488
	ctx.lr = 0x83270AA8;
	sub_83270488(ctx, base);
	// stw r3,104(r30)
	PPC_STORE_U32(ctx.r30.u32 + 104, ctx.r3.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x832704f8
	ctx.lr = 0x83270AB4;
	sub_832704F8(ctx, base);
	// stw r3,108(r30)
	PPC_STORE_U32(ctx.r30.u32 + 108, ctx.r3.u32);
	// lwz r11,184(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 184);
	// stw r11,112(r30)
	PPC_STORE_U32(ctx.r30.u32 + 112, ctx.r11.u32);
	// lwz r11,188(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 188);
	// stw r11,116(r30)
	PPC_STORE_U32(ctx.r30.u32 + 116, ctx.r11.u32);
	// lwz r11,192(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 192);
	// stw r11,120(r30)
	PPC_STORE_U32(ctx.r30.u32 + 120, ctx.r11.u32);
	// lwz r3,196(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 196);
	// bl 0x83270568
	ctx.lr = 0x83270AD8;
	sub_83270568(ctx, base);
	// stw r3,124(r30)
	PPC_STORE_U32(ctx.r30.u32 + 124, ctx.r3.u32);
	// lwz r3,200(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 200);
	// bl 0x83270568
	ctx.lr = 0x83270AE4;
	sub_83270568(ctx, base);
	// stw r3,128(r30)
	PPC_STORE_U32(ctx.r30.u32 + 128, ctx.r3.u32);
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

__attribute__((alias("__imp__sub_83270B00"))) PPC_WEAK_FUNC(sub_83270B00);
PPC_FUNC_IMPL(__imp__sub_83270B00) {
	PPC_FUNC_PROLOGUE();
	// li r6,0
	ctx.r6.s64 = 0;
	// b 0x83270638
	sub_83270638(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83270B08"))) PPC_WEAK_FUNC(sub_83270B08);
PPC_FUNC_IMPL(__imp__sub_83270B08) {
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
	// lwz r30,1224(r3)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1224);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r11,36(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x83270B3C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x83270b74
	if (ctx.cr0.eq) goto loc_83270B74;
	// lwz r11,1228(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1228);
	// lis r10,-32219
	ctx.r10.s64 = -2111504384;
	// stw r3,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r3.u32);
	// lis r9,-32219
	ctx.r9.s64 = -2111504384;
	// addi r5,r10,13508
	ctx.r5.s64 = ctx.r10.s64 + 13508;
	// addi r4,r9,13500
	ctx.r4.s64 = ctx.r9.s64 + 13500;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// stw r11,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r11.u32);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x832f0eb0
	ctx.lr = 0x83270B6C;
	sub_832F0EB0(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne 0x83270b8c
	if (!ctx.cr0.eq) goto loc_83270B8C;
loc_83270B74:
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r11,1252(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1252, ctx.r11.u32);
	// stw r11,1256(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1256, ctx.r11.u32);
	// stw r10,1248(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1248, ctx.r10.u32);
	// b 0x83270c34
	goto loc_83270C34;
loc_83270B8C:
	// lwz r3,1236(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1236);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x83270c14
	if (ctx.cr6.eq) goto loc_83270C14;
	// lwz r5,84(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x833a1390
	ctx.lr = 0x83270BA4;
	sub_833A1390(ctx, base);
	// lwz r10,1236(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1236);
	// li r11,1
	ctx.r11.s64 = 1;
	// lwz r9,84(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// lis r5,32767
	ctx.r5.s64 = 2147418112;
	// stw r11,1248(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1248, ctx.r11.u32);
	// addi r6,r1,96
	ctx.r6.s64 = ctx.r1.s64 + 96;
	// ori r5,r5,65535
	ctx.r5.u64 = ctx.r5.u64 | 65535;
	// li r4,1
	ctx.r4.s64 = 1;
	// stw r10,1252(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1252, ctx.r10.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stw r9,1256(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1256, ctx.r9.u32);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r11,24(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x83270BE0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r11,32(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x83270BFC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r11,20(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x83270C10;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// b 0x83270c34
	goto loc_83270C34;
loc_83270C14:
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// li r10,1
	ctx.r10.s64 = 1;
	// lwz r9,84(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r10,1248(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1248, ctx.r10.u32);
	// stw r11,1252(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1252, ctx.r11.u32);
	// stw r9,1256(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1256, ctx.r9.u32);
	// bl 0x832708a0
	ctx.lr = 0x83270C34;
	sub_832708A0(ctx, base);
loc_83270C34:
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

__attribute__((alias("__imp__sub_83270C4C"))) PPC_WEAK_FUNC(sub_83270C4C);
PPC_FUNC_IMPL(__imp__sub_83270C4C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83270C50"))) PPC_WEAK_FUNC(sub_83270C50);
PPC_FUNC_IMPL(__imp__sub_83270C50) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,12(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 12);
	// stw r11,68(r5)
	PPC_STORE_U32(ctx.r5.u32 + 68, ctx.r11.u32);
	// lwz r11,16(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 16);
	// stw r11,72(r5)
	PPC_STORE_U32(ctx.r5.u32 + 72, ctx.r11.u32);
	// lwz r11,20(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 20);
	// stw r11,76(r5)
	PPC_STORE_U32(ctx.r5.u32 + 76, ctx.r11.u32);
	// lwz r11,24(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 24);
	// stw r11,80(r5)
	PPC_STORE_U32(ctx.r5.u32 + 80, ctx.r11.u32);
	// lwz r11,8(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// beq cr6,0x83270c90
	if (ctx.cr6.eq) goto loc_83270C90;
	// lwz r6,72(r5)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r5.u32 + 72);
	// addi r3,r5,4
	ctx.r3.s64 = ctx.r5.s64 + 4;
	// lwz r5,68(r5)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r5.u32 + 68);
	// lwz r4,0(r4)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// b 0x83270420
	sub_83270420(ctx, base);
	return;
loc_83270C90:
	// b 0x832709e8
	sub_832709E8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83270C94"))) PPC_WEAK_FUNC(sub_83270C94);
PPC_FUNC_IMPL(__imp__sub_83270C94) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83270C98"))) PPC_WEAK_FUNC(sub_83270C98);
PPC_FUNC_IMPL(__imp__sub_83270C98) {
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
	// lwz r11,1224(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1224);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x83270cc4
	if (ctx.cr6.eq) goto loc_83270CC4;
	// bl 0x83270b08
	ctx.lr = 0x83270CBC;
	sub_83270B08(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83270820
	ctx.lr = 0x83270CC4;
	sub_83270820(ctx, base);
loc_83270CC4:
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

__attribute__((alias("__imp__sub_83270CD8"))) PPC_WEAK_FUNC(sub_83270CD8);
PPC_FUNC_IMPL(__imp__sub_83270CD8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x833a01ac
	ctx.lr = 0x83270CE0;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// li r5,152
	ctx.r5.s64 = 152;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x833a2b30
	ctx.lr = 0x83270D00;
	sub_833A2B30(ctx, base);
	// lwz r3,8(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// bl 0x832703b8
	ctx.lr = 0x83270D08;
	sub_832703B8(ctx, base);
	// stw r3,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r3.u32);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// bl 0x83270c50
	ctx.lr = 0x83270D1C;
	sub_83270C50(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x83270410
	ctx.lr = 0x83270D28;
	sub_83270410(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83270430
	ctx.lr = 0x83270D30;
	sub_83270430(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x83270a88
	ctx.lr = 0x83270D3C;
	sub_83270A88(ctx, base);
	// lwz r11,160(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 160);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,136(r29)
	PPC_STORE_U32(ctx.r29.u32 + 136, ctx.r11.u32);
	// lwz r11,164(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 164);
	// stw r11,140(r29)
	PPC_STORE_U32(ctx.r29.u32 + 140, ctx.r11.u32);
	// bl 0x83270990
	ctx.lr = 0x83270D58;
	sub_83270990(ctx, base);
	// stw r3,144(r29)
	PPC_STORE_U32(ctx.r29.u32 + 144, ctx.r3.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,56(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 56);
	// bl 0x83270388
	ctx.lr = 0x83270D68;
	sub_83270388(ctx, base);
	// stw r3,148(r29)
	PPC_STORE_U32(ctx.r29.u32 + 148, ctx.r3.u32);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83270930
	ctx.lr = 0x83270D78;
	sub_83270930(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x833a01fc
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83270D80"))) PPC_WEAK_FUNC(sub_83270D80);
PPC_FUNC_IMPL(__imp__sub_83270D80) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x833a01ac
	ctx.lr = 0x83270D88;
	__savegprlr_29(ctx, base);
	// stwu r1,-272(r1)
	ea = -272 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// mr r30,r6
	ctx.r30.u64 = ctx.r6.u64;
	// bl 0x83270320
	ctx.lr = 0x83270D9C;
	sub_83270320(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r3,r10
	ctx.r3.u64 = ctx.r10.u64;
	// bl 0x83270cd8
	ctx.lr = 0x83270DAC;
	sub_83270CD8(ctx, base);
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x83283730
	ctx.lr = 0x83270DC0;
	sub_83283730(ctx, base);
	// addi r1,r1,272
	ctx.r1.s64 = ctx.r1.s64 + 272;
	// b 0x833a01fc
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83270DC8"))) PPC_WEAK_FUNC(sub_83270DC8);
PPC_FUNC_IMPL(__imp__sub_83270DC8) {
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
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// lwz r4,56(r4)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r4.u32 + 56);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// bl 0x83270358
	ctx.lr = 0x83270DEC;
	sub_83270358(ctx, base);
	// cmpwi cr6,r3,1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 1, ctx.xer);
	// bne cr6,0x83270dfc
	if (!ctx.cr6.eq) goto loc_83270DFC;
	// li r11,6
	ctx.r11.s64 = 6;
	// b 0x83270e18
	goto loc_83270E18;
loc_83270DFC:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x83270990
	ctx.lr = 0x83270E08;
	sub_83270990(ctx, base);
	// cmpwi cr6,r3,1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 1, ctx.xer);
	// li r11,2
	ctx.r11.s64 = 2;
	// beq cr6,0x83270e18
	if (ctx.cr6.eq) goto loc_83270E18;
	// li r11,1
	ctx.r11.s64 = 1;
loc_83270E18:
	// stw r11,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r11.u32);
	// addi r6,r1,84
	ctx.r6.s64 = ctx.r1.s64 + 84;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x83270d80
	ctx.lr = 0x83270E30;
	sub_83270D80(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r10,84(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// stw r11,92(r31)
	PPC_STORE_U32(ctx.r31.u32 + 92, ctx.r11.u32);
	// stw r10,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r10.u32);
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

__attribute__((alias("__imp__sub_83270E58"))) PPC_WEAK_FUNC(sub_83270E58);
PPC_FUNC_IMPL(__imp__sub_83270E58) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,1600(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1600);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x83270e6c
	if (!ctx.cr6.eq) goto loc_83270E6C;
	// stw r4,1600(r3)
	PPC_STORE_U32(ctx.r3.u32 + 1600, ctx.r4.u32);
	// blr 
	return;
loc_83270E6C:
	// cmpw cr6,r11,r4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r4.s32, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lis r11,-32219
	ctx.r11.s64 = -2111504384;
	// addi r3,r11,13588
	ctx.r3.s64 = ctx.r11.s64 + 13588;
	// b 0x83278688
	sub_83278688(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83270E80"))) PPC_WEAK_FUNC(sub_83270E80);
PPC_FUNC_IMPL(__imp__sub_83270E80) {
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
	// lwz r11,1244(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1244);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r10,56(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 56);
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// bge cr6,0x83270eb0
	if (!ctx.cr6.lt) goto loc_83270EB0;
	// bl 0x83270c98
	ctx.lr = 0x83270EB0;
	sub_83270C98(ctx, base);
loc_83270EB0:
	// lwz r11,56(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 56);
	// stw r11,1244(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1244, ctx.r11.u32);
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

__attribute__((alias("__imp__sub_83270ED0"))) PPC_WEAK_FUNC(sub_83270ED0);
PPC_FUNC_IMPL(__imp__sub_83270ED0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x833a01a4
	ctx.lr = 0x83270ED8;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,64(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 64);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r27,1220(r3)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1220);
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// lwz r29,0(r11)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r28,4(r11)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// bl 0x8326ee18
	ctx.lr = 0x83270EF8;
	sub_8326EE18(ctx, base);
	// cmpwi cr6,r3,1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 1, ctx.xer);
	// beq cr6,0x83270f10
	if (ctx.cr6.eq) goto loc_83270F10;
loc_83270F00:
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,76(r31)
	PPC_STORE_U32(ctx.r31.u32 + 76, ctx.r11.u32);
	// stw r11,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r11.u32);
	// b 0x83270f3c
	goto loc_83270F3C;
loc_83270F10:
	// addi r11,r30,1196
	ctx.r11.s64 = ctx.r30.s64 + 1196;
	// cmplw cr6,r27,r11
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x83270f00
	if (ctx.cr6.eq) goto loc_83270F00;
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x83270f34
	if (ctx.cr6.eq) goto loc_83270F34;
	// cmpwi cr6,r28,4
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 4, ctx.xer);
	// ble cr6,0x83270f34
	if (!ctx.cr6.gt) goto loc_83270F34;
	// addi r29,r29,4
	ctx.r29.s64 = ctx.r29.s64 + 4;
	// addi r28,r28,-4
	ctx.r28.s64 = ctx.r28.s64 + -4;
loc_83270F34:
	// stw r29,76(r31)
	PPC_STORE_U32(ctx.r31.u32 + 76, ctx.r29.u32);
	// stw r28,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r28.u32);
loc_83270F3C:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x833a01f4
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83270F44"))) PPC_WEAK_FUNC(sub_83270F44);
PPC_FUNC_IMPL(__imp__sub_83270F44) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83270F48"))) PPC_WEAK_FUNC(sub_83270F48);
PPC_FUNC_IMPL(__imp__sub_83270F48) {
	PPC_FUNC_PROLOGUE();
	// cmpwi cr6,r3,1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 1, ctx.xer);
	// beq cr6,0x83270f68
	if (ctx.cr6.eq) goto loc_83270F68;
	// cmpwi cr6,r3,2
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 2, ctx.xer);
	// beq cr6,0x83270f60
	if (ctx.cr6.eq) goto loc_83270F60;
	// li r3,3
	ctx.r3.s64 = 3;
	// blr 
	return;
loc_83270F60:
	// li r3,2
	ctx.r3.s64 = 2;
	// blr 
	return;
loc_83270F68:
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83270F70"))) PPC_WEAK_FUNC(sub_83270F70);
PPC_FUNC_IMPL(__imp__sub_83270F70) {
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
	// cmpwi cr6,r3,1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 1, ctx.xer);
	// beq cr6,0x83270fa8
	if (ctx.cr6.eq) goto loc_83270FA8;
	// cmpwi cr6,r3,2
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 2, ctx.xer);
	// beq cr6,0x83270fcc
	if (ctx.cr6.eq) goto loc_83270FCC;
	// cmpwi cr6,r3,3
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 3, ctx.xer);
	// beq cr6,0x83270fc4
	if (ctx.cr6.eq) goto loc_83270FC4;
	// cmpwi cr6,r3,4
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 4, ctx.xer);
	// beq cr6,0x83270fbc
	if (ctx.cr6.eq) goto loc_83270FBC;
	// lis r11,-32219
	ctx.r11.s64 = -2111504384;
	// addi r3,r11,13648
	ctx.r3.s64 = ctx.r11.s64 + 13648;
	// bl 0x83278688
	ctx.lr = 0x83270FA8;
	sub_83278688(ctx, base);
loc_83270FA8:
	// li r3,1
	ctx.r3.s64 = 1;
loc_83270FAC:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_83270FBC:
	// li r3,4
	ctx.r3.s64 = 4;
	// b 0x83270fac
	goto loc_83270FAC;
loc_83270FC4:
	// li r3,3
	ctx.r3.s64 = 3;
	// b 0x83270fac
	goto loc_83270FAC;
loc_83270FCC:
	// li r3,2
	ctx.r3.s64 = 2;
	// b 0x83270fac
	goto loc_83270FAC;
}

__attribute__((alias("__imp__sub_83270FD4"))) PPC_WEAK_FUNC(sub_83270FD4);
PPC_FUNC_IMPL(__imp__sub_83270FD4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83270FD8"))) PPC_WEAK_FUNC(sub_83270FD8);
PPC_FUNC_IMPL(__imp__sub_83270FD8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x833a01ac
	ctx.lr = 0x83270FE0;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,96(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 96);
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// li r31,0
	ctx.r31.s64 = 0;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x83271020
	if (!ctx.cr6.gt) goto loc_83271020;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// ble cr6,0x83271018
	if (!ctx.cr6.gt) goto loc_83271018;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bne cr6,0x83271020
	if (!ctx.cr6.eq) goto loc_83271020;
	// lbz r11,116(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 116);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x8327102c
	if (!ctx.cr0.eq) goto loc_8327102C;
loc_83271018:
	// li r31,2
	ctx.r31.s64 = 2;
	// b 0x8327102c
	goto loc_8327102C;
loc_83271020:
	// lis r11,-32219
	ctx.r11.s64 = -2111504384;
	// addi r3,r11,13696
	ctx.r3.s64 = ctx.r11.s64 + 13696;
	// bl 0x83278688
	ctx.lr = 0x8327102C;
	sub_83278688(ctx, base);
loc_8327102C:
	// bl 0x8326ee18
	ctx.lr = 0x83271030;
	sub_8326EE18(ctx, base);
	// cmpwi cr6,r3,1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 1, ctx.xer);
	// bne cr6,0x83271050
	if (!ctx.cr6.eq) goto loc_83271050;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x83283808
	ctx.lr = 0x83271044;
	sub_83283808(ctx, base);
	// cmpwi cr6,r3,1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 1, ctx.xer);
	// bne cr6,0x83271050
	if (!ctx.cr6.eq) goto loc_83271050;
	// li r31,2
	ctx.r31.s64 = 2;
loc_83271050:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x833a01fc
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8327105C"))) PPC_WEAK_FUNC(sub_8327105C);
PPC_FUNC_IMPL(__imp__sub_8327105C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83271060"))) PPC_WEAK_FUNC(sub_83271060);
PPC_FUNC_IMPL(__imp__sub_83271060) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,96(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 96);
	// lis r9,-31827
	ctx.r9.s64 = -2085814272;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,176(r3)
	PPC_STORE_U32(ctx.r3.u32 + 176, ctx.r11.u32);
	// lwz r11,100(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 100);
	// stw r11,180(r3)
	PPC_STORE_U32(ctx.r3.u32 + 180, ctx.r11.u32);
	// lbz r11,116(r4)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r4.u32 + 116);
	// extsb r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	// stw r11,184(r3)
	PPC_STORE_U32(ctx.r3.u32 + 184, ctx.r11.u32);
	// lbz r11,117(r4)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r4.u32 + 117);
	// extsb r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	// stw r11,188(r3)
	PPC_STORE_U32(ctx.r3.u32 + 188, ctx.r11.u32);
	// lbz r11,118(r4)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r4.u32 + 118);
	// extsb r8,r11
	ctx.r8.s64 = ctx.r11.s8;
	// lwz r11,10136(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 10136);
	// stw r8,192(r3)
	PPC_STORE_U32(ctx.r3.u32 + 192, ctx.r8.u32);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x832710cc
	if (ctx.cr6.eq) goto loc_832710CC;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x832710c0
	if (ctx.cr6.eq) goto loc_832710C0;
	// lwz r11,68(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 68);
	// stw r11,196(r3)
	PPC_STORE_U32(ctx.r3.u32 + 196, ctx.r11.u32);
	// lwz r11,72(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 72);
	// b 0x832710d4
	goto loc_832710D4;
loc_832710C0:
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r10,196(r3)
	PPC_STORE_U32(ctx.r3.u32 + 196, ctx.r10.u32);
	// b 0x832710d4
	goto loc_832710D4;
loc_832710CC:
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,196(r3)
	PPC_STORE_U32(ctx.r3.u32 + 196, ctx.r11.u32);
loc_832710D4:
	// stw r11,200(r3)
	PPC_STORE_U32(ctx.r3.u32 + 200, ctx.r11.u32);
	// stw r10,204(r3)
	PPC_STORE_U32(ctx.r3.u32 + 204, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_832710E0"))) PPC_WEAK_FUNC(sub_832710E0);
PPC_FUNC_IMPL(__imp__sub_832710E0) {
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
	// lwz r9,64(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 64);
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// lwz r10,0(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// lwz r9,4(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// stw r11,160(r4)
	PPC_STORE_U32(ctx.r4.u32 + 160, ctx.r11.u32);
	// stw r11,164(r4)
	PPC_STORE_U32(ctx.r4.u32 + 164, ctx.r11.u32);
	// beq cr6,0x83271158
	if (ctx.cr6.eq) goto loc_83271158;
	// cmpwi cr6,r9,4
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 4, ctx.xer);
	// ble cr6,0x83271158
	if (!ctx.cr6.gt) goto loc_83271158;
	// addi r6,r1,84
	ctx.r6.s64 = ctx.r1.s64 + 84;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r4,r9,-4
	ctx.r4.s64 = ctx.r9.s64 + -4;
	// addi r3,r10,4
	ctx.r3.s64 = ctx.r10.s64 + 4;
	// bl 0x83283900
	ctx.lr = 0x83271138;
	sub_83283900(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x83271158
	if (ctx.cr6.eq) goto loc_83271158;
	// lwz r10,84(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// ble cr6,0x83271158
	if (!ctx.cr6.gt) goto loc_83271158;
	// stw r11,160(r31)
	PPC_STORE_U32(ctx.r31.u32 + 160, ctx.r11.u32);
	// stw r10,164(r31)
	PPC_STORE_U32(ctx.r31.u32 + 164, ctx.r10.u32);
loc_83271158:
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

__attribute__((alias("__imp__sub_8327116C"))) PPC_WEAK_FUNC(sub_8327116C);
PPC_FUNC_IMPL(__imp__sub_8327116C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83271170"))) PPC_WEAK_FUNC(sub_83271170);
PPC_FUNC_IMPL(__imp__sub_83271170) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,12(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
	// lwz r11,20(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// stw r11,4(r4)
	PPC_STORE_U32(ctx.r4.u32 + 4, ctx.r11.u32);
	// lwz r11,28(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 28);
	// stw r11,8(r4)
	PPC_STORE_U32(ctx.r4.u32 + 8, ctx.r11.u32);
	// lwz r11,16(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// stw r11,12(r4)
	PPC_STORE_U32(ctx.r4.u32 + 12, ctx.r11.u32);
	// lwz r11,24(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// stw r11,16(r4)
	PPC_STORE_U32(ctx.r4.u32 + 16, ctx.r11.u32);
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// stw r11,20(r4)
	PPC_STORE_U32(ctx.r4.u32 + 20, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_832711A4"))) PPC_WEAK_FUNC(sub_832711A4);
PPC_FUNC_IMPL(__imp__sub_832711A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

