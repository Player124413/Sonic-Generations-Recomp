#include "ppc_recomp_shared.h"

__attribute__((alias("__imp__sub_82805210"))) PPC_WEAK_FUNC(sub_82805210);
PPC_FUNC_IMPL(__imp__sub_82805210) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x833a01a4
	ctx.lr = 0x82805218;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// li r27,12
	ctx.r27.s64 = 12;
	// subf r30,r3,r4
	ctx.r30.s64 = ctx.r4.s64 - ctx.r3.s64;
	// b 0x82805250
	goto loc_82805250;
loc_82805234:
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82804c90
	ctx.lr = 0x82805248;
	sub_82804C90(ctx, base);
	// addi r30,r30,-12
	ctx.r30.s64 = ctx.r30.s64 + -12;
	// addi r31,r31,-12
	ctx.r31.s64 = ctx.r31.s64 + -12;
loc_82805250:
	// divw r11,r30,r27
	ctx.r11.s32 = ctx.r30.s32 / ctx.r27.s32;
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bgt cr6,0x82805234
	if (ctx.cr6.gt) goto loc_82805234;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x833a01f4
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82805264"))) PPC_WEAK_FUNC(sub_82805264);
PPC_FUNC_IMPL(__imp__sub_82805264) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82805268"))) PPC_WEAK_FUNC(sub_82805268);
PPC_FUNC_IMPL(__imp__sub_82805268) {
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
	// addi r4,r4,16
	ctx.r4.s64 = ctx.r4.s64 + 16;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x828858a0
	ctx.lr = 0x82805290;
	sub_828858A0(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r10,20(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 20);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x828052b8
	if (ctx.cr6.eq) goto loc_828052B8;
	// addi r5,r11,16
	ctx.r5.s64 = ctx.r11.s64 + 16;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82804ed8
	ctx.lr = 0x828052B0;
	sub_82804ED8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// b 0x828052c4
	goto loc_828052C4;
loc_828052B8:
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
loc_828052C4:
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

__attribute__((alias("__imp__sub_828052DC"))) PPC_WEAK_FUNC(sub_828052DC);
PPC_FUNC_IMPL(__imp__sub_828052DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_828052E0"))) PPC_WEAK_FUNC(sub_828052E0);
PPC_FUNC_IMPL(__imp__sub_828052E0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x833a01a0
	ctx.lr = 0x828052E8;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,8191
	ctx.r10.s64 = 536805376;
	// lwz r11,8(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// ori r10,r10,65534
	ctx.r10.u64 = ctx.r10.u64 | 65534;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r29,r7
	ctx.r29.u64 = ctx.r7.u64;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x82805334
	if (ctx.cr6.lt) goto loc_82805334;
	// addi r31,r7,12
	ctx.r31.s64 = ctx.r7.s64 + 12;
	// addi r3,r31,4
	ctx.r3.s64 = ctx.r31.s64 + 4;
	// bl 0x82e01bf0
	ctx.lr = 0x82805318;
	sub_82E01BF0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82e01bf0
	ctx.lr = 0x82805320;
	sub_82E01BF0(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82e01568
	ctx.lr = 0x82805328;
	sub_82E01568(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r3,r11,14992
	ctx.r3.s64 = ctx.r11.s64 + 14992;
	// bl 0x82dffba0
	ctx.lr = 0x82805334;
	sub_82DFFBA0(ctx, base);
loc_82805334:
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,8(r30)
	PPC_STORE_U32(ctx.r30.u32 + 8, ctx.r11.u32);
	// stw r6,4(r29)
	PPC_STORE_U32(ctx.r29.u32 + 4, ctx.r6.u32);
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// cmplw cr6,r6,r11
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x82805360
	if (!ctx.cr6.eq) goto loc_82805360;
	// stw r29,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r29.u32);
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// stw r29,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r29.u32);
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// b 0x82805398
	goto loc_82805398;
loc_82805360:
	// clrlwi. r11,r5,24
	ctx.r11.u64 = ctx.r5.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82805384
	if (ctx.cr0.eq) goto loc_82805384;
	// stw r29,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r29.u32);
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r6,r10
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x8280539c
	if (!ctx.cr6.eq) goto loc_8280539C;
	// stw r29,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r29.u32);
	// b 0x8280539c
	goto loc_8280539C;
loc_82805384:
	// stw r29,8(r6)
	PPC_STORE_U32(ctx.r6.u32 + 8, ctx.r29.u32);
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// cmplw cr6,r6,r10
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x8280539c
	if (!ctx.cr6.eq) goto loc_8280539C;
loc_82805398:
	// stw r29,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r29.u32);
loc_8280539C:
	// lwz r11,4(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// mr r31,r29
	ctx.r31.u64 = ctx.r29.u64;
	// li r28,1
	ctx.r28.s64 = 1;
	// lbz r11,20(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 20);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x8280549c
	if (!ctx.cr0.eq) goto loc_8280549C;
	// li r27,0
	ctx.r27.s64 = 0;
loc_828053B8:
	// lwz r4,4(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r11,4(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r4,r10
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x8280541c
	if (!ctx.cr6.eq) goto loc_8280541C;
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lbz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 20);
	// cmplwi r10,0
	ctx.cr0.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq 0x8280542c
	if (ctx.cr0.eq) goto loc_8280542C;
	// lwz r11,8(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x828053f4
	if (!ctx.cr6.eq) goto loc_828053F4;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// bl 0x82a34ff0
	ctx.lr = 0x828053F4;
	sub_82A34FF0(ctx, base);
loc_828053F4:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stb r28,20(r11)
	PPC_STORE_U8(ctx.r11.u32 + 20, ctx.r28.u8);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// stb r27,20(r11)
	PPC_STORE_U8(ctx.r11.u32 + 20, ctx.r27.u8);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r4,4(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// bl 0x82a35058
	ctx.lr = 0x82805418;
	sub_82A35058(ctx, base);
	// b 0x8280548c
	goto loc_8280548C;
loc_8280541C:
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lbz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 20);
	// cmplwi r10,0
	ctx.cr0.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne 0x82805450
	if (!ctx.cr0.eq) goto loc_82805450;
loc_8280542C:
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// stb r28,20(r10)
	PPC_STORE_U8(ctx.r10.u32 + 20, ctx.r28.u8);
	// stb r28,20(r11)
	PPC_STORE_U8(ctx.r11.u32 + 20, ctx.r28.u8);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// stb r27,20(r11)
	PPC_STORE_U8(ctx.r11.u32 + 20, ctx.r27.u8);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r31,4(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// b 0x8280548c
	goto loc_8280548C;
loc_82805450:
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x82805468
	if (!ctx.cr6.eq) goto loc_82805468;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// bl 0x82a35058
	ctx.lr = 0x82805468;
	sub_82A35058(ctx, base);
loc_82805468:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stb r28,20(r11)
	PPC_STORE_U8(ctx.r11.u32 + 20, ctx.r28.u8);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// stb r27,20(r11)
	PPC_STORE_U8(ctx.r11.u32 + 20, ctx.r27.u8);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r4,4(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// bl 0x82a34ff0
	ctx.lr = 0x8280548C;
	sub_82A34FF0(ctx, base);
loc_8280548C:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lbz r11,20(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 20);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x828053b8
	if (ctx.cr0.eq) goto loc_828053B8;
loc_8280549C:
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// stw r29,0(r26)
	PPC_STORE_U32(ctx.r26.u32 + 0, ctx.r29.u32);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// stb r28,20(r11)
	PPC_STORE_U8(ctx.r11.u32 + 20, ctx.r28.u8);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x833a01f0
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_828054B8"))) PPC_WEAK_FUNC(sub_828054B8);
PPC_FUNC_IMPL(__imp__sub_828054B8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x833a0194
	ctx.lr = 0x828054C0;
	__savegprlr_23(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r29,4(r4)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// li r23,1
	ctx.r23.s64 = 1;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// mr r26,r5
	ctx.r26.u64 = ctx.r5.u64;
	// addi r25,r5,12
	ctx.r25.s64 = ctx.r5.s64 + 12;
	// lwz r30,4(r29)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// mr r28,r23
	ctx.r28.u64 = ctx.r23.u64;
	// lbz r11,21(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 21);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x8280554c
	if (!ctx.cr0.eq) goto loc_8280554C;
	// clrlwi r24,r6,24
	ctx.r24.u64 = ctx.r6.u32 & 0xFF;
loc_828054F4:
	// mr r29,r30
	ctx.r29.u64 = ctx.r30.u64;
	// cmplwi cr6,r24,0
	ctx.cr6.compare<uint32_t>(ctx.r24.u32, 0, ctx.xer);
	// beq cr6,0x8280551c
	if (ctx.cr6.eq) goto loc_8280551C;
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// addi r3,r30,12
	ctx.r3.s64 = ctx.r30.s64 + 12;
	// bl 0x82e022f0
	ctx.lr = 0x8280550C;
	sub_82E022F0(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r28,r11,27,31,31
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// b 0x8280552c
	goto loc_8280552C;
loc_8280551C:
	// addi r4,r30,12
	ctx.r4.s64 = ctx.r30.s64 + 12;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x82e022f0
	ctx.lr = 0x82805528;
	sub_82E022F0(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
loc_8280552C:
	// clrlwi. r11,r28,24
	ctx.r11.u64 = ctx.r28.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8280553c
	if (ctx.cr0.eq) goto loc_8280553C;
	// lwz r30,0(r30)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// b 0x82805540
	goto loc_82805540;
loc_8280553C:
	// lwz r30,8(r30)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
loc_82805540:
	// lbz r11,21(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 21);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x828054f4
	if (ctx.cr0.eq) goto loc_828054F4;
loc_8280554C:
	// clrlwi. r11,r28,24
	ctx.r11.u64 = ctx.r28.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r29,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r29.u32);
	// mr r30,r29
	ctx.r30.u64 = ctx.r29.u64;
	// beq 0x828055a0
	if (ctx.cr0.eq) goto loc_828055A0;
	// lwz r11,4(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 4);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r29,r11
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x82805598
	if (!ctx.cr6.eq) goto loc_82805598;
	// li r5,1
	ctx.r5.s64 = 1;
loc_82805574:
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// mr r7,r26
	ctx.r7.u64 = ctx.r26.u64;
	// bl 0x828052e0
	ctx.lr = 0x82805584;
	sub_828052E0(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// stb r23,4(r31)
	PPC_STORE_U8(ctx.r31.u32 + 4, ctx.r23.u8);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// b 0x828055e4
	goto loc_828055E4;
loc_82805598:
	// bl 0x82672b58
	ctx.lr = 0x8280559C;
	sub_82672B58(ctx, base);
	// lwz r30,80(r1)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
loc_828055A0:
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// addi r3,r30,12
	ctx.r3.s64 = ctx.r30.s64 + 12;
	// bl 0x82e022f0
	ctx.lr = 0x828055AC;
	sub_82E022F0(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x828055c0
	if (ctx.cr0.eq) goto loc_828055C0;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// b 0x82805574
	goto loc_82805574;
loc_828055C0:
	// addi r3,r25,4
	ctx.r3.s64 = ctx.r25.s64 + 4;
	// bl 0x82e01bf0
	ctx.lr = 0x828055C8;
	sub_82E01BF0(ctx, base);
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x82e01bf0
	ctx.lr = 0x828055D0;
	sub_82E01BF0(ctx, base);
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x82e01568
	ctx.lr = 0x828055D8;
	sub_82E01568(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r30,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r30.u32);
	// stb r11,4(r31)
	PPC_STORE_U8(ctx.r31.u32 + 4, ctx.r11.u8);
loc_828055E4:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x833a01e4
	__restgprlr_23(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_828055F0"))) PPC_WEAK_FUNC(sub_828055F0);
PPC_FUNC_IMPL(__imp__sub_828055F0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x833a019c
	ctx.lr = 0x828055F8;
	__savegprlr_25(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r25,12
	ctx.r25.s64 = 12;
	// subf r11,r3,r4
	ctx.r11.s64 = ctx.r4.s64 - ctx.r3.s64;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// divw r11,r11,r25
	ctx.r11.s32 = ctx.r11.s32 / ctx.r25.s32;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// mr r28,r6
	ctx.r28.u64 = ctx.r6.u64;
	// cmpwi cr6,r11,32
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 32, ctx.xer);
	// ble cr6,0x828056e8
	if (!ctx.cr6.gt) goto loc_828056E8;
loc_82805620:
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// ble cr6,0x828056ac
	if (!ctx.cr6.gt) goto loc_828056AC;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82804ff0
	ctx.lr = 0x8280563C;
	sub_82804FF0(ctx, base);
	// srawi r11,r29,1
	ctx.xer.ca = (ctx.r29.s32 < 0) & ((ctx.r29.u32 & 0x1) != 0);
	ctx.r11.s64 = ctx.r29.s32 >> 1;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// addze r11,r11
	temp.s64 = ctx.r11.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r11.u32;
	ctx.r11.s64 = temp.s64;
	// srawi r10,r11,1
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1) != 0);
	ctx.r10.s64 = ctx.r11.s32 >> 1;
	// addze r10,r10
	temp.s64 = ctx.r10.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r10.u32;
	ctx.r10.s64 = temp.s64;
	// add r29,r10,r11
	ctx.r29.u64 = ctx.r10.u64 + ctx.r11.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// lwz r27,84(r1)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r26,80(r1)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// subf r11,r27,r31
	ctx.r11.s64 = ctx.r31.s64 - ctx.r27.s64;
	// subf r10,r30,r26
	ctx.r10.s64 = ctx.r26.s64 - ctx.r30.s64;
	// divw r11,r11,r25
	ctx.r11.s32 = ctx.r11.s32 / ctx.r25.s32;
	// divw r10,r10,r25
	ctx.r10.s32 = ctx.r10.s32 / ctx.r25.s32;
	// cmpw cr6,r10,r11
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r11.s32, ctx.xer);
	// bge cr6,0x8280568c
	if (!ctx.cr6.lt) goto loc_8280568C;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x828055f0
	ctx.lr = 0x82805684;
	sub_828055F0(ctx, base);
	// mr r30,r27
	ctx.r30.u64 = ctx.r27.u64;
	// b 0x8280569c
	goto loc_8280569C;
loc_8280568C:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x828055f0
	ctx.lr = 0x82805698;
	sub_828055F0(ctx, base);
	// mr r31,r26
	ctx.r31.u64 = ctx.r26.u64;
loc_8280569C:
	// subf r11,r30,r31
	ctx.r11.s64 = ctx.r31.s64 - ctx.r30.s64;
	// divw r11,r11,r25
	ctx.r11.s32 = ctx.r11.s32 / ctx.r25.s32;
	// cmpwi cr6,r11,32
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 32, ctx.xer);
	// bgt cr6,0x82805620
	if (ctx.cr6.gt) goto loc_82805620;
loc_828056AC:
	// cmpwi cr6,r11,32
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 32, ctx.xer);
	// ble cr6,0x828056e8
	if (!ctx.cr6.gt) goto loc_828056E8;
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// ble cr6,0x828056d4
	if (!ctx.cr6.gt) goto loc_828056D4;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82804b88
	ctx.lr = 0x828056D4;
	sub_82804B88(ctx, base);
loc_828056D4:
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82805210
	ctx.lr = 0x828056E4;
	sub_82805210(ctx, base);
	// b 0x82805704
	goto loc_82805704;
loc_828056E8:
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// ble cr6,0x82805704
	if (!ctx.cr6.gt) goto loc_82805704;
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82804df0
	ctx.lr = 0x82805704;
	sub_82804DF0(ctx, base);
loc_82805704:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x833a01ec
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8280570C"))) PPC_WEAK_FUNC(sub_8280570C);
PPC_FUNC_IMPL(__imp__sub_8280570C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82805710"))) PPC_WEAK_FUNC(sub_82805710);
PPC_FUNC_IMPL(__imp__sub_82805710) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x833a019c
	ctx.lr = 0x82805718;
	__savegprlr_25(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,8(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// mr r28,r6
	ctx.r28.u64 = ctx.r6.u64;
	// addi r27,r6,12
	ctx.r27.s64 = ctx.r6.s64 + 12;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82805758
	if (!ctx.cr6.eq) goto loc_82805758;
	// lwz r6,4(r4)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
loc_82805740:
	// li r5,1
	ctx.r5.s64 = 1;
loc_82805744:
	// mr r7,r28
	ctx.r7.u64 = ctx.r28.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
loc_82805750:
	// bl 0x828052e0
	ctx.lr = 0x82805754;
	sub_828052E0(ctx, base);
	// b 0x828058b4
	goto loc_828058B4;
loc_82805758:
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r29,r10
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x82805784
	if (!ctx.cr6.eq) goto loc_82805784;
	// addi r4,r29,12
	ctx.r4.s64 = ctx.r29.s64 + 12;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82e022f0
	ctx.lr = 0x82805774;
	sub_82E022F0(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82805894
	if (ctx.cr0.eq) goto loc_82805894;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// b 0x82805740
	goto loc_82805740;
loc_82805784:
	// cmplw cr6,r29,r11
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x828057b4
	if (!ctx.cr6.eq) goto loc_828057B4;
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// addi r3,r11,12
	ctx.r3.s64 = ctx.r11.s64 + 12;
	// bl 0x82e022f0
	ctx.lr = 0x8280579C;
	sub_82E022F0(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82805894
	if (ctx.cr0.eq) goto loc_82805894;
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r6,8(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// b 0x82805744
	goto loc_82805744;
loc_828057B4:
	// addi r25,r29,12
	ctx.r25.s64 = ctx.r29.s64 + 12;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// bl 0x82e022f0
	ctx.lr = 0x828057C4;
	sub_82E022F0(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82805824
	if (ctx.cr0.eq) goto loc_82805824;
	// stw r29,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r29.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82672b58
	ctx.lr = 0x828057D8;
	sub_82672B58(ctx, base);
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// lwz r26,80(r1)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// addi r3,r26,12
	ctx.r3.s64 = ctx.r26.s64 + 12;
	// bl 0x82e022f0
	ctx.lr = 0x828057E8;
	sub_82E022F0(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82805824
	if (ctx.cr0.eq) goto loc_82805824;
	// lwz r11,8(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 8);
	// mr r7,r28
	ctx.r7.u64 = ctx.r28.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lbz r11,21(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 21);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x82805818
	if (ctx.cr0.eq) goto loc_82805818;
	// mr r6,r26
	ctx.r6.u64 = ctx.r26.u64;
loc_82805810:
	// li r5,0
	ctx.r5.s64 = 0;
	// b 0x82805750
	goto loc_82805750;
loc_82805818:
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
loc_8280581C:
	// li r5,1
	ctx.r5.s64 = 1;
	// b 0x82805750
	goto loc_82805750;
loc_82805824:
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x82e022f0
	ctx.lr = 0x82805830;
	sub_82E022F0(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82805894
	if (ctx.cr0.eq) goto loc_82805894;
	// stw r29,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r29.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82ee29b0
	ctx.lr = 0x82805844;
	sub_82EE29B0(ctx, base);
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// lwz r26,80(r1)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplw cr6,r26,r11
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x82805868
	if (ctx.cr6.eq) goto loc_82805868;
	// addi r4,r26,12
	ctx.r4.s64 = ctx.r26.s64 + 12;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82e022f0
	ctx.lr = 0x82805860;
	sub_82E022F0(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82805894
	if (ctx.cr0.eq) goto loc_82805894;
loc_82805868:
	// lwz r11,8(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// mr r7,r28
	ctx.r7.u64 = ctx.r28.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lbz r11,21(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 21);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x8280588c
	if (ctx.cr0.eq) goto loc_8280588C;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// b 0x82805810
	goto loc_82805810;
loc_8280588C:
	// mr r6,r26
	ctx.r6.u64 = ctx.r26.u64;
	// b 0x8280581c
	goto loc_8280581C;
loc_82805894:
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x828054b8
	ctx.lr = 0x828058A8;
	sub_828054B8(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
loc_828058B4:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x833a01ec
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_828058C0"))) PPC_WEAK_FUNC(sub_828058C0);
PPC_FUNC_IMPL(__imp__sub_828058C0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x833a019c
	ctx.lr = 0x828058C8;
	__savegprlr_25(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,5461
	ctx.r11.s64 = 357892096;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// ori r11,r11,21845
	ctx.r11.u64 = ctx.r11.u64 | 21845;
	// cmplw cr6,r4,r11
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r11.u32, ctx.xer);
	// ble cr6,0x828058ec
	if (!ctx.cr6.gt) goto loc_828058EC;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r3,r11,2548
	ctx.r3.s64 = ctx.r11.s64 + 2548;
	// bl 0x82dffba0
	ctx.lr = 0x828058EC;
	sub_82DFFBA0(ctx, base);
loc_828058EC:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r25,12
	ctx.r25.s64 = 12;
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// subf r11,r11,r10
	ctx.r11.s64 = ctx.r10.s64 - ctx.r11.s64;
	// divw r11,r11,r25
	ctx.r11.s32 = ctx.r11.s32 / ctx.r25.s32;
	// cmplw cr6,r11,r4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r4.u32, ctx.xer);
	// bge cr6,0x828059bc
	if (!ctx.cr6.lt) goto loc_828059BC;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// li r10,45
	ctx.r10.s64 = 45;
	// addi r11,r11,2208
	ctx.r11.s64 = ctx.r11.s64 + 2208;
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// mulli r26,r4,12
	ctx.r26.s64 = ctx.r4.s64 * 12;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x82e01570
	ctx.lr = 0x8280592C;
	sub_82E01570(ctx, base);
	// lwz r30,0(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r28,4(r31)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// b 0x8280595c
	goto loc_8280595C;
loc_82805940:
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x82805954
	if (ctx.cr6.eq) goto loc_82805954;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82804850
	ctx.lr = 0x82805954;
	sub_82804850(ctx, base);
loc_82805954:
	// addi r30,r30,12
	ctx.r30.s64 = ctx.r30.s64 + 12;
	// addi r29,r29,12
	ctx.r29.s64 = ctx.r29.s64 + 12;
loc_8280595C:
	// cmplw cr6,r30,r28
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r28.u32, ctx.xer);
	// bne cr6,0x82805940
	if (!ctx.cr6.eq) goto loc_82805940;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r30,4(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// subf r10,r11,r30
	ctx.r10.s64 = ctx.r30.s64 - ctx.r11.s64;
	// divw r28,r10,r25
	ctx.r28.s32 = ctx.r10.s32 / ctx.r25.s32;
	// beq cr6,0x828059a4
	if (ctx.cr6.eq) goto loc_828059A4;
	// mr r29,r11
	ctx.r29.u64 = ctx.r11.u64;
	// cmplw cr6,r11,r30
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r30.u32, ctx.xer);
	// beq cr6,0x8280599c
	if (ctx.cr6.eq) goto loc_8280599C;
loc_82805988:
	// addi r3,r29,4
	ctx.r3.s64 = ctx.r29.s64 + 4;
	// bl 0x82e01bf0
	ctx.lr = 0x82805990;
	sub_82E01BF0(ctx, base);
	// addi r29,r29,12
	ctx.r29.s64 = ctx.r29.s64 + 12;
	// cmplw cr6,r29,r30
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r30.u32, ctx.xer);
	// bne cr6,0x82805988
	if (!ctx.cr6.eq) goto loc_82805988;
loc_8280599C:
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x82e01568
	ctx.lr = 0x828059A4;
	sub_82E01568(ctx, base);
loc_828059A4:
	// mulli r11,r28,12
	ctx.r11.s64 = ctx.r28.s64 * 12;
	// stw r27,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r27.u32);
	// add r10,r26,r27
	ctx.r10.u64 = ctx.r26.u64 + ctx.r27.u64;
	// add r11,r11,r27
	ctx.r11.u64 = ctx.r11.u64 + ctx.r27.u64;
	// stw r10,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r10.u32);
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
loc_828059BC:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x833a01ec
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_828059C4"))) PPC_WEAK_FUNC(sub_828059C4);
PPC_FUNC_IMPL(__imp__sub_828059C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_828059C8"))) PPC_WEAK_FUNC(sub_828059C8);
PPC_FUNC_IMPL(__imp__sub_828059C8) {
	PPC_FUNC_PROLOGUE();
	// lis r10,5461
	ctx.r10.s64 = 357892096;
	// lwz r7,4(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r9,12
	ctx.r9.s64 = 12;
	// ori r8,r10,21845
	ctx.r8.u64 = ctx.r10.u64 | 21845;
	// subf r10,r11,r7
	ctx.r10.s64 = ctx.r7.s64 - ctx.r11.s64;
	// subf r7,r4,r8
	ctx.r7.s64 = ctx.r8.s64 - ctx.r4.s64;
	// divw r10,r10,r9
	ctx.r10.s32 = ctx.r10.s32 / ctx.r9.s32;
	// cmplw cr6,r7,r10
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x828059fc
	if (!ctx.cr6.lt) goto loc_828059FC;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r3,r11,2548
	ctx.r3.s64 = ctx.r11.s64 + 2548;
	// b 0x82dffba0
	sub_82DFFBA0(ctx, base);
	return;
loc_828059FC:
	// lwz r7,8(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// add r10,r10,r4
	ctx.r10.u64 = ctx.r10.u64 + ctx.r4.u64;
	// subf r11,r11,r7
	ctx.r11.s64 = ctx.r7.s64 - ctx.r11.s64;
	// divw r11,r11,r9
	ctx.r11.s32 = ctx.r11.s32 / ctx.r9.s32;
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// blelr cr6
	if (!ctx.cr6.gt) return;
	// rlwinm r9,r11,31,1,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 31) & 0x7FFFFFFF;
	// li r4,0
	ctx.r4.s64 = 0;
	// subf r8,r9,r8
	ctx.r8.s64 = ctx.r8.s64 - ctx.r9.s64;
	// cmplw cr6,r8,r11
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82805a2c
	if (ctx.cr6.lt) goto loc_82805A2C;
	// add r4,r9,r11
	ctx.r4.u64 = ctx.r9.u64 + ctx.r11.u64;
loc_82805A2C:
	// cmplw cr6,r4,r10
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x82805a38
	if (!ctx.cr6.lt) goto loc_82805A38;
	// mr r4,r10
	ctx.r4.u64 = ctx.r10.u64;
loc_82805A38:
	// b 0x828058c0
	sub_828058C0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82805A3C"))) PPC_WEAK_FUNC(sub_82805A3C);
PPC_FUNC_IMPL(__imp__sub_82805A3C) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82805A40"))) PPC_WEAK_FUNC(sub_82805A40);
PPC_FUNC_IMPL(__imp__sub_82805A40) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x833a01a4
	ctx.lr = 0x82805A48;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// mr r27,r6
	ctx.r27.u64 = ctx.r6.u64;
	// bl 0x82804b18
	ctx.lr = 0x82805A64;
	sub_82804B18(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r3,r31,13
	ctx.r3.s64 = ctx.r31.s64 + 13;
	// addi r4,r30,12
	ctx.r4.s64 = ctx.r30.s64 + 12;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// bl 0x82a3f328
	ctx.lr = 0x82805A78;
	sub_82A3F328(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x82805710
	ctx.lr = 0x82805A8C;
	sub_82805710(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x833a01f4
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82805A98"))) PPC_WEAK_FUNC(sub_82805A98);
PPC_FUNC_IMPL(__imp__sub_82805A98) {
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
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// cmplw cr6,r4,r11
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r11.u32, ctx.xer);
	// bge cr6,0x82805ad0
	if (!ctx.cr6.lt) goto loc_82805AD0;
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplw cr6,r10,r4
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r4.u32, ctx.xer);
	// li r10,1
	ctx.r10.s64 = 1;
	// ble cr6,0x82805ad4
	if (!ctx.cr6.gt) goto loc_82805AD4;
loc_82805AD0:
	// li r10,0
	ctx.r10.s64 = 0;
loc_82805AD4:
	// clrlwi. r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x82805b20
	if (ctx.cr0.eq) goto loc_82805B20;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r9,12
	ctx.r9.s64 = 12;
	// lwz r8,8(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// subf r10,r10,r30
	ctx.r10.s64 = ctx.r30.s64 - ctx.r10.s64;
	// cmplw cr6,r11,r8
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r8.u32, ctx.xer);
	// divw r30,r10,r9
	ctx.r30.s32 = ctx.r10.s32 / ctx.r9.s32;
	// bne cr6,0x82805b04
	if (!ctx.cr6.eq) goto loc_82805B04;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x828059c8
	ctx.lr = 0x82805B04;
	sub_828059C8(ctx, base);
loc_82805B04:
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82805b4c
	if (ctx.cr6.eq) goto loc_82805B4C;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mulli r11,r30,12
	ctx.r11.s64 = ctx.r30.s64 * 12;
	// add r4,r11,r10
	ctx.r4.u64 = ctx.r11.u64 + ctx.r10.u64;
	// b 0x82805b48
	goto loc_82805B48;
loc_82805B20:
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x82805b38
	if (!ctx.cr6.eq) goto loc_82805B38;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x828059c8
	ctx.lr = 0x82805B38;
	sub_828059C8(ctx, base);
loc_82805B38:
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82805b4c
	if (ctx.cr6.eq) goto loc_82805B4C;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
loc_82805B48:
	// bl 0x82804850
	ctx.lr = 0x82805B4C;
	sub_82804850(ctx, base);
loc_82805B4C:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// addi r11,r11,12
	ctx.r11.s64 = ctx.r11.s64 + 12;
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
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

__attribute__((alias("__imp__sub_82805B70"))) PPC_WEAK_FUNC(sub_82805B70);
PPC_FUNC_IMPL(__imp__sub_82805B70) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x833a01a8
	ctx.lr = 0x82805B78;
	__savegprlr_28(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// bl 0x828114b8
	ctx.lr = 0x82805B88;
	sub_828114B8(ctx, base);
	// lwz r11,4(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplw cr6,r3,r11
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x82805bac
	if (ctx.cr6.eq) goto loc_82805BAC;
	// addi r4,r3,12
	ctx.r4.s64 = ctx.r3.s64 + 12;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82e022f0
	ctx.lr = 0x82805BA4;
	sub_82E022F0(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82805c04
	if (ctx.cr0.eq) goto loc_82805C04;
loc_82805BAC:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82e01a68
	ctx.lr = 0x82805BB4;
	sub_82E01A68(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82e025d8
	ctx.lr = 0x82805BC4;
	sub_82E025D8(ctx, base);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// addi r3,r1,92
	ctx.r3.s64 = ctx.r1.s64 + 92;
	// bl 0x82e025d8
	ctx.lr = 0x82805BD0;
	sub_82E025D8(ctx, base);
	// addi r6,r1,88
	ctx.r6.s64 = ctx.r1.s64 + 88;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x82805a40
	ctx.lr = 0x82805BE4;
	sub_82805A40(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addi r3,r1,92
	ctx.r3.s64 = ctx.r1.s64 + 92;
	// lwz r31,0(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// bl 0x82e01bf0
	ctx.lr = 0x82805BF4;
	sub_82E01BF0(ctx, base);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82e01bf0
	ctx.lr = 0x82805BFC;
	sub_82E01BF0(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82e01bf0
	ctx.lr = 0x82805C04;
	sub_82E01BF0(ctx, base);
loc_82805C04:
	// addi r3,r31,16
	ctx.r3.s64 = ctx.r31.s64 + 16;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x833a01f8
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82805C10"))) PPC_WEAK_FUNC(sub_82805C10);
PPC_FUNC_IMPL(__imp__sub_82805C10) {
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
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r31,r6
	ctx.r31.u64 = ctx.r6.u64;
	// clrlwi. r11,r6,24
	ctx.r11.u64 = ctx.r6.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82805c40
	if (ctx.cr0.eq) goto loc_82805C40;
	// lbz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 32);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x82805c64
	if (ctx.cr0.eq) goto loc_82805C64;
loc_82805C40:
	// stw r5,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r5.u32);
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x82e025d8
	ctx.lr = 0x82805C4C;
	sub_82E025D8(ctx, base);
	// stb r31,88(r1)
	PPC_STORE_U8(ctx.r1.u32 + 88, ctx.r31.u8);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82805a98
	ctx.lr = 0x82805C5C;
	sub_82805A98(ctx, base);
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x82e01bf0
	ctx.lr = 0x82805C64;
	sub_82E01BF0(ctx, base);
loc_82805C64:
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

__attribute__((alias("__imp__sub_82805C7C"))) PPC_WEAK_FUNC(sub_82805C7C);
PPC_FUNC_IMPL(__imp__sub_82805C7C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82805C80"))) PPC_WEAK_FUNC(sub_82805C80);
PPC_FUNC_IMPL(__imp__sub_82805C80) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x833a01a8
	ctx.lr = 0x82805C88;
	__savegprlr_28(ctx, base);
	// stwu r1,-1840(r1)
	ea = -1840 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,-22148
	ctx.r4.s64 = ctx.r11.s64 + -22148;
	// bl 0x82e02670
	ctx.lr = 0x82805CA0;
	sub_82E02670(ctx, base);
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r5,r11,-22312
	ctx.r5.s64 = ctx.r11.s64 + -22312;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x82805c10
	ctx.lr = 0x82805CB8;
	sub_82805C10(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82e01bf0
	ctx.lr = 0x82805CC0;
	sub_82E01BF0(ctx, base);
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,-22548
	ctx.r4.s64 = ctx.r11.s64 + -22548;
	// bl 0x82e02670
	ctx.lr = 0x82805CD0;
	sub_82E02670(ctx, base);
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r5,r11,-22848
	ctx.r5.s64 = ctx.r11.s64 + -22848;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x82805c10
	ctx.lr = 0x82805CE8;
	sub_82805C10(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82e01bf0
	ctx.lr = 0x82805CF0;
	sub_82E01BF0(ctx, base);
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,10620
	ctx.r4.s64 = ctx.r11.s64 + 10620;
	// bl 0x82e02670
	ctx.lr = 0x82805D00;
	sub_82E02670(ctx, base);
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r5,r11,-21832
	ctx.r5.s64 = ctx.r11.s64 + -21832;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x82805c10
	ctx.lr = 0x82805D18;
	sub_82805C10(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82e01bf0
	ctx.lr = 0x82805D20;
	sub_82E01BF0(ctx, base);
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,10604
	ctx.r4.s64 = ctx.r11.s64 + 10604;
	// bl 0x82e02670
	ctx.lr = 0x82805D30;
	sub_82E02670(ctx, base);
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r5,r11,-21320
	ctx.r5.s64 = ctx.r11.s64 + -21320;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x82805c10
	ctx.lr = 0x82805D48;
	sub_82805C10(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82e01bf0
	ctx.lr = 0x82805D50;
	sub_82E01BF0(ctx, base);
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,10576
	ctx.r4.s64 = ctx.r11.s64 + 10576;
	// bl 0x82e02670
	ctx.lr = 0x82805D60;
	sub_82E02670(ctx, base);
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r5,r11,2776
	ctx.r5.s64 = ctx.r11.s64 + 2776;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x82805c10
	ctx.lr = 0x82805D78;
	sub_82805C10(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82e01bf0
	ctx.lr = 0x82805D80;
	sub_82E01BF0(ctx, base);
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,10552
	ctx.r4.s64 = ctx.r11.s64 + 10552;
	// bl 0x82e02670
	ctx.lr = 0x82805D90;
	sub_82E02670(ctx, base);
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r5,r11,-20380
	ctx.r5.s64 = ctx.r11.s64 + -20380;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x82805c10
	ctx.lr = 0x82805DA8;
	sub_82805C10(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82e01bf0
	ctx.lr = 0x82805DB0;
	sub_82E01BF0(ctx, base);
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,10524
	ctx.r4.s64 = ctx.r11.s64 + 10524;
	// bl 0x82e02670
	ctx.lr = 0x82805DC0;
	sub_82E02670(ctx, base);
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r11,-5476
	ctx.r5.s64 = ctx.r11.s64 + -5476;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82805c10
	ctx.lr = 0x82805DD8;
	sub_82805C10(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82e01bf0
	ctx.lr = 0x82805DE0;
	sub_82E01BF0(ctx, base);
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,10512
	ctx.r4.s64 = ctx.r11.s64 + 10512;
	// bl 0x82e02670
	ctx.lr = 0x82805DF0;
	sub_82E02670(ctx, base);
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r5,r11,-6872
	ctx.r5.s64 = ctx.r11.s64 + -6872;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x82805c10
	ctx.lr = 0x82805E08;
	sub_82805C10(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82e01bf0
	ctx.lr = 0x82805E10;
	sub_82E01BF0(ctx, base);
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,10472
	ctx.r4.s64 = ctx.r11.s64 + 10472;
	// bl 0x82e02670
	ctx.lr = 0x82805E20;
	sub_82E02670(ctx, base);
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r5,r11,-12472
	ctx.r5.s64 = ctx.r11.s64 + -12472;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x82805c10
	ctx.lr = 0x82805E38;
	sub_82805C10(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82e01bf0
	ctx.lr = 0x82805E40;
	sub_82E01BF0(ctx, base);
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,10432
	ctx.r4.s64 = ctx.r11.s64 + 10432;
	// bl 0x82e02670
	ctx.lr = 0x82805E50;
	sub_82E02670(ctx, base);
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r5,r11,-12012
	ctx.r5.s64 = ctx.r11.s64 + -12012;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x82805c10
	ctx.lr = 0x82805E68;
	sub_82805C10(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82e01bf0
	ctx.lr = 0x82805E70;
	sub_82E01BF0(ctx, base);
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,10388
	ctx.r4.s64 = ctx.r11.s64 + 10388;
	// bl 0x82e02670
	ctx.lr = 0x82805E80;
	sub_82E02670(ctx, base);
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r5,r11,-11584
	ctx.r5.s64 = ctx.r11.s64 + -11584;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x82805c10
	ctx.lr = 0x82805E98;
	sub_82805C10(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82e01bf0
	ctx.lr = 0x82805EA0;
	sub_82E01BF0(ctx, base);
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,10356
	ctx.r4.s64 = ctx.r11.s64 + 10356;
	// bl 0x82e02670
	ctx.lr = 0x82805EB0;
	sub_82E02670(ctx, base);
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r5,r11,-14084
	ctx.r5.s64 = ctx.r11.s64 + -14084;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x82805c10
	ctx.lr = 0x82805EC8;
	sub_82805C10(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82e01bf0
	ctx.lr = 0x82805ED0;
	sub_82E01BF0(ctx, base);
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,10320
	ctx.r4.s64 = ctx.r11.s64 + 10320;
	// bl 0x82e02670
	ctx.lr = 0x82805EE0;
	sub_82E02670(ctx, base);
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r11,-13632
	ctx.r5.s64 = ctx.r11.s64 + -13632;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82805c10
	ctx.lr = 0x82805EF8;
	sub_82805C10(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82e01bf0
	ctx.lr = 0x82805F00;
	sub_82E01BF0(ctx, base);
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,10280
	ctx.r4.s64 = ctx.r11.s64 + 10280;
	// bl 0x82e02670
	ctx.lr = 0x82805F10;
	sub_82E02670(ctx, base);
	// li r6,0
	ctx.r6.s64 = 0;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r5,r11,-12948
	ctx.r5.s64 = ctx.r11.s64 + -12948;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x82805c10
	ctx.lr = 0x82805F28;
	sub_82805C10(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82e01bf0
	ctx.lr = 0x82805F30;
	sub_82E01BF0(ctx, base);
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,10244
	ctx.r4.s64 = ctx.r11.s64 + 10244;
	// bl 0x82e02670
	ctx.lr = 0x82805F40;
	sub_82E02670(ctx, base);
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r5,r11,-7360
	ctx.r5.s64 = ctx.r11.s64 + -7360;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x82805c10
	ctx.lr = 0x82805F58;
	sub_82805C10(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82e01bf0
	ctx.lr = 0x82805F60;
	sub_82E01BF0(ctx, base);
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,10204
	ctx.r4.s64 = ctx.r11.s64 + 10204;
	// bl 0x82e02670
	ctx.lr = 0x82805F70;
	sub_82E02670(ctx, base);
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r5,r11,-7804
	ctx.r5.s64 = ctx.r11.s64 + -7804;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x82805c10
	ctx.lr = 0x82805F88;
	sub_82805C10(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82e01bf0
	ctx.lr = 0x82805F90;
	sub_82E01BF0(ctx, base);
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,10164
	ctx.r4.s64 = ctx.r11.s64 + 10164;
	// bl 0x82e02670
	ctx.lr = 0x82805FA0;
	sub_82E02670(ctx, base);
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r5,r11,-8324
	ctx.r5.s64 = ctx.r11.s64 + -8324;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x82805c10
	ctx.lr = 0x82805FB8;
	sub_82805C10(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82e01bf0
	ctx.lr = 0x82805FC0;
	sub_82E01BF0(ctx, base);
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,10124
	ctx.r4.s64 = ctx.r11.s64 + 10124;
	// bl 0x82e02670
	ctx.lr = 0x82805FD0;
	sub_82E02670(ctx, base);
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r5,r11,-8880
	ctx.r5.s64 = ctx.r11.s64 + -8880;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x82805c10
	ctx.lr = 0x82805FE8;
	sub_82805C10(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82e01bf0
	ctx.lr = 0x82805FF0;
	sub_82E01BF0(ctx, base);
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,10084
	ctx.r4.s64 = ctx.r11.s64 + 10084;
	// bl 0x82e02670
	ctx.lr = 0x82806000;
	sub_82E02670(ctx, base);
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r5,r11,-9536
	ctx.r5.s64 = ctx.r11.s64 + -9536;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x82805c10
	ctx.lr = 0x82806018;
	sub_82805C10(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82e01bf0
	ctx.lr = 0x82806020;
	sub_82E01BF0(ctx, base);
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,10052
	ctx.r4.s64 = ctx.r11.s64 + 10052;
	// bl 0x82e02670
	ctx.lr = 0x82806030;
	sub_82E02670(ctx, base);
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r11,-4304
	ctx.r5.s64 = ctx.r11.s64 + -4304;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82805c10
	ctx.lr = 0x82806048;
	sub_82805C10(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82e01bf0
	ctx.lr = 0x82806050;
	sub_82E01BF0(ctx, base);
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,10020
	ctx.r4.s64 = ctx.r11.s64 + 10020;
	// bl 0x82e02670
	ctx.lr = 0x82806060;
	sub_82E02670(ctx, base);
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r5,r11,-4716
	ctx.r5.s64 = ctx.r11.s64 + -4716;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x82805c10
	ctx.lr = 0x82806078;
	sub_82805C10(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82e01bf0
	ctx.lr = 0x82806080;
	sub_82E01BF0(ctx, base);
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,10004
	ctx.r4.s64 = ctx.r11.s64 + 10004;
	// bl 0x82e02670
	ctx.lr = 0x82806090;
	sub_82E02670(ctx, base);
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r5,r11,-10664
	ctx.r5.s64 = ctx.r11.s64 + -10664;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x82805c10
	ctx.lr = 0x828060A8;
	sub_82805C10(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82e01bf0
	ctx.lr = 0x828060B0;
	sub_82E01BF0(ctx, base);
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,9976
	ctx.r4.s64 = ctx.r11.s64 + 9976;
	// bl 0x82e02670
	ctx.lr = 0x828060C0;
	sub_82E02670(ctx, base);
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r5,r11,-3276
	ctx.r5.s64 = ctx.r11.s64 + -3276;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x82805c10
	ctx.lr = 0x828060D8;
	sub_82805C10(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82e01bf0
	ctx.lr = 0x828060E0;
	sub_82E01BF0(ctx, base);
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,9948
	ctx.r4.s64 = ctx.r11.s64 + 9948;
	// bl 0x82e02670
	ctx.lr = 0x828060F0;
	sub_82E02670(ctx, base);
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r5,r11,3264
	ctx.r5.s64 = ctx.r11.s64 + 3264;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x82805c10
	ctx.lr = 0x82806108;
	sub_82805C10(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82e01bf0
	ctx.lr = 0x82806110;
	sub_82E01BF0(ctx, base);
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,9916
	ctx.r4.s64 = ctx.r11.s64 + 9916;
	// bl 0x82e02670
	ctx.lr = 0x82806120;
	sub_82E02670(ctx, base);
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r5,r11,13240
	ctx.r5.s64 = ctx.r11.s64 + 13240;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x82805c10
	ctx.lr = 0x82806138;
	sub_82805C10(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82e01bf0
	ctx.lr = 0x82806140;
	sub_82E01BF0(ctx, base);
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,9900
	ctx.r4.s64 = ctx.r11.s64 + 9900;
	// bl 0x82e02670
	ctx.lr = 0x82806150;
	sub_82E02670(ctx, base);
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r5,r11,17200
	ctx.r5.s64 = ctx.r11.s64 + 17200;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x82805c10
	ctx.lr = 0x82806168;
	sub_82805C10(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82e01bf0
	ctx.lr = 0x82806170;
	sub_82E01BF0(ctx, base);
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,9880
	ctx.r4.s64 = ctx.r11.s64 + 9880;
	// bl 0x82e02670
	ctx.lr = 0x82806180;
	sub_82E02670(ctx, base);
	// lis r11,-31890
	ctx.r11.s64 = -2089943040;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r11,-10900
	ctx.r5.s64 = ctx.r11.s64 + -10900;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82805c10
	ctx.lr = 0x82806198;
	sub_82805C10(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82e01bf0
	ctx.lr = 0x828061A0;
	sub_82E01BF0(ctx, base);
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,9860
	ctx.r4.s64 = ctx.r11.s64 + 9860;
	// bl 0x82e02670
	ctx.lr = 0x828061B0;
	sub_82E02670(ctx, base);
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r5,r11,4480
	ctx.r5.s64 = ctx.r11.s64 + 4480;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x82805c10
	ctx.lr = 0x828061C8;
	sub_82805C10(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82e01bf0
	ctx.lr = 0x828061D0;
	sub_82E01BF0(ctx, base);
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,9840
	ctx.r4.s64 = ctx.r11.s64 + 9840;
	// bl 0x82e02670
	ctx.lr = 0x828061E0;
	sub_82E02670(ctx, base);
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r5,r11,15652
	ctx.r5.s64 = ctx.r11.s64 + 15652;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x82805c10
	ctx.lr = 0x828061F8;
	sub_82805C10(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82e01bf0
	ctx.lr = 0x82806200;
	sub_82E01BF0(ctx, base);
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,9828
	ctx.r4.s64 = ctx.r11.s64 + 9828;
	// bl 0x82e02670
	ctx.lr = 0x82806210;
	sub_82E02670(ctx, base);
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r5,r11,14080
	ctx.r5.s64 = ctx.r11.s64 + 14080;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x82805c10
	ctx.lr = 0x82806228;
	sub_82805C10(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82e01bf0
	ctx.lr = 0x82806230;
	sub_82E01BF0(ctx, base);
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,9808
	ctx.r4.s64 = ctx.r11.s64 + 9808;
	// bl 0x82e02670
	ctx.lr = 0x82806240;
	sub_82E02670(ctx, base);
	// lis r11,-31888
	ctx.r11.s64 = -2089811968;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r5,r11,-23020
	ctx.r5.s64 = ctx.r11.s64 + -23020;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x82805c10
	ctx.lr = 0x82806258;
	sub_82805C10(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82e01bf0
	ctx.lr = 0x82806260;
	sub_82E01BF0(ctx, base);
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,9788
	ctx.r4.s64 = ctx.r11.s64 + 9788;
	// bl 0x82e02670
	ctx.lr = 0x82806270;
	sub_82E02670(ctx, base);
	// lis r11,-31888
	ctx.r11.s64 = -2089811968;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r5,r11,-22760
	ctx.r5.s64 = ctx.r11.s64 + -22760;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x82805c10
	ctx.lr = 0x82806288;
	sub_82805C10(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82e01bf0
	ctx.lr = 0x82806290;
	sub_82E01BF0(ctx, base);
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,9764
	ctx.r4.s64 = ctx.r11.s64 + 9764;
	// bl 0x82e02670
	ctx.lr = 0x828062A0;
	sub_82E02670(ctx, base);
	// lis r11,-31888
	ctx.r11.s64 = -2089811968;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r5,r11,-22748
	ctx.r5.s64 = ctx.r11.s64 + -22748;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x82805c10
	ctx.lr = 0x828062B8;
	sub_82805C10(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82e01bf0
	ctx.lr = 0x828062C0;
	sub_82E01BF0(ctx, base);
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,9744
	ctx.r4.s64 = ctx.r11.s64 + 9744;
	// bl 0x82e02670
	ctx.lr = 0x828062D0;
	sub_82E02670(ctx, base);
	// lis r11,-31888
	ctx.r11.s64 = -2089811968;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r11,-21636
	ctx.r5.s64 = ctx.r11.s64 + -21636;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82805c10
	ctx.lr = 0x828062E8;
	sub_82805C10(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82e01bf0
	ctx.lr = 0x828062F0;
	sub_82E01BF0(ctx, base);
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,9720
	ctx.r4.s64 = ctx.r11.s64 + 9720;
	// bl 0x82e02670
	ctx.lr = 0x82806300;
	sub_82E02670(ctx, base);
	// lis r11,-31888
	ctx.r11.s64 = -2089811968;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r5,r11,-21624
	ctx.r5.s64 = ctx.r11.s64 + -21624;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x82805c10
	ctx.lr = 0x82806318;
	sub_82805C10(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82e01bf0
	ctx.lr = 0x82806320;
	sub_82E01BF0(ctx, base);
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,9696
	ctx.r4.s64 = ctx.r11.s64 + 9696;
	// bl 0x82e02670
	ctx.lr = 0x82806330;
	sub_82E02670(ctx, base);
	// lis r11,-31888
	ctx.r11.s64 = -2089811968;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r5,r11,-21356
	ctx.r5.s64 = ctx.r11.s64 + -21356;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x82805c10
	ctx.lr = 0x82806348;
	sub_82805C10(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82e01bf0
	ctx.lr = 0x82806350;
	sub_82E01BF0(ctx, base);
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,9672
	ctx.r4.s64 = ctx.r11.s64 + 9672;
	// bl 0x82e02670
	ctx.lr = 0x82806360;
	sub_82E02670(ctx, base);
	// lis r11,-31888
	ctx.r11.s64 = -2089811968;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r5,r11,-18696
	ctx.r5.s64 = ctx.r11.s64 + -18696;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x82805c10
	ctx.lr = 0x82806378;
	sub_82805C10(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82e01bf0
	ctx.lr = 0x82806380;
	sub_82E01BF0(ctx, base);
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,9648
	ctx.r4.s64 = ctx.r11.s64 + 9648;
	// bl 0x82e02670
	ctx.lr = 0x82806390;
	sub_82E02670(ctx, base);
	// lis r11,-31888
	ctx.r11.s64 = -2089811968;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r5,r11,-20700
	ctx.r5.s64 = ctx.r11.s64 + -20700;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x82805c10
	ctx.lr = 0x828063A8;
	sub_82805C10(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82e01bf0
	ctx.lr = 0x828063B0;
	sub_82E01BF0(ctx, base);
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,9612
	ctx.r4.s64 = ctx.r11.s64 + 9612;
	// bl 0x82e02670
	ctx.lr = 0x828063C0;
	sub_82E02670(ctx, base);
	// lis r11,-31888
	ctx.r11.s64 = -2089811968;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r5,r11,-20688
	ctx.r5.s64 = ctx.r11.s64 + -20688;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x82805c10
	ctx.lr = 0x828063D8;
	sub_82805C10(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82e01bf0
	ctx.lr = 0x828063E0;
	sub_82E01BF0(ctx, base);
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,9572
	ctx.r4.s64 = ctx.r11.s64 + 9572;
	// bl 0x82e02670
	ctx.lr = 0x828063F0;
	sub_82E02670(ctx, base);
	// lis r11,-31888
	ctx.r11.s64 = -2089811968;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r11,-20676
	ctx.r5.s64 = ctx.r11.s64 + -20676;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82805c10
	ctx.lr = 0x82806408;
	sub_82805C10(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82e01bf0
	ctx.lr = 0x82806410;
	sub_82E01BF0(ctx, base);
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,9560
	ctx.r4.s64 = ctx.r11.s64 + 9560;
	// bl 0x82e02670
	ctx.lr = 0x82806420;
	sub_82E02670(ctx, base);
	// li r6,0
	ctx.r6.s64 = 0;
	// lis r11,-31888
	ctx.r11.s64 = -2089811968;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r5,r11,-17140
	ctx.r5.s64 = ctx.r11.s64 + -17140;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x82805c10
	ctx.lr = 0x82806438;
	sub_82805C10(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82e01bf0
	ctx.lr = 0x82806440;
	sub_82E01BF0(ctx, base);
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,9540
	ctx.r4.s64 = ctx.r11.s64 + 9540;
	// bl 0x82e02670
	ctx.lr = 0x82806450;
	sub_82E02670(ctx, base);
	// lis r11,-31888
	ctx.r11.s64 = -2089811968;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r5,r11,-16972
	ctx.r5.s64 = ctx.r11.s64 + -16972;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x82805c10
	ctx.lr = 0x82806468;
	sub_82805C10(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82e01bf0
	ctx.lr = 0x82806470;
	sub_82E01BF0(ctx, base);
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,9520
	ctx.r4.s64 = ctx.r11.s64 + 9520;
	// bl 0x82e02670
	ctx.lr = 0x82806480;
	sub_82E02670(ctx, base);
	// lis r11,-31888
	ctx.r11.s64 = -2089811968;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r5,r11,-16360
	ctx.r5.s64 = ctx.r11.s64 + -16360;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x82805c10
	ctx.lr = 0x82806498;
	sub_82805C10(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82e01bf0
	ctx.lr = 0x828064A0;
	sub_82E01BF0(ctx, base);
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,9500
	ctx.r4.s64 = ctx.r11.s64 + 9500;
	// bl 0x82e02670
	ctx.lr = 0x828064B0;
	sub_82E02670(ctx, base);
	// lis r11,-31888
	ctx.r11.s64 = -2089811968;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r5,r11,-15416
	ctx.r5.s64 = ctx.r11.s64 + -15416;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x82805c10
	ctx.lr = 0x828064C8;
	sub_82805C10(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82e01bf0
	ctx.lr = 0x828064D0;
	sub_82E01BF0(ctx, base);
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,9476
	ctx.r4.s64 = ctx.r11.s64 + 9476;
	// bl 0x82e02670
	ctx.lr = 0x828064E0;
	sub_82E02670(ctx, base);
	// lis r11,-31888
	ctx.r11.s64 = -2089811968;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r5,r11,-15404
	ctx.r5.s64 = ctx.r11.s64 + -15404;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x82805c10
	ctx.lr = 0x828064F8;
	sub_82805C10(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82e01bf0
	ctx.lr = 0x82806500;
	sub_82E01BF0(ctx, base);
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,9460
	ctx.r4.s64 = ctx.r11.s64 + 9460;
	// bl 0x82e02670
	ctx.lr = 0x82806510;
	sub_82E02670(ctx, base);
	// lis r11,-31888
	ctx.r11.s64 = -2089811968;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r5,r11,-15228
	ctx.r5.s64 = ctx.r11.s64 + -15228;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x82805c10
	ctx.lr = 0x82806528;
	sub_82805C10(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82e01bf0
	ctx.lr = 0x82806530;
	sub_82E01BF0(ctx, base);
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,9444
	ctx.r4.s64 = ctx.r11.s64 + 9444;
	// bl 0x82e02670
	ctx.lr = 0x82806540;
	sub_82E02670(ctx, base);
	// lis r11,-31888
	ctx.r11.s64 = -2089811968;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r11,-13744
	ctx.r5.s64 = ctx.r11.s64 + -13744;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82805c10
	ctx.lr = 0x82806558;
	sub_82805C10(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82e01bf0
	ctx.lr = 0x82806560;
	sub_82E01BF0(ctx, base);
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,9428
	ctx.r4.s64 = ctx.r11.s64 + 9428;
	// bl 0x82e02670
	ctx.lr = 0x82806570;
	sub_82E02670(ctx, base);
	// lis r11,-31888
	ctx.r11.s64 = -2089811968;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r5,r11,-14628
	ctx.r5.s64 = ctx.r11.s64 + -14628;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x82805c10
	ctx.lr = 0x82806588;
	sub_82805C10(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82e01bf0
	ctx.lr = 0x82806590;
	sub_82E01BF0(ctx, base);
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,9404
	ctx.r4.s64 = ctx.r11.s64 + 9404;
	// bl 0x82e02670
	ctx.lr = 0x828065A0;
	sub_82E02670(ctx, base);
	// lis r11,-31888
	ctx.r11.s64 = -2089811968;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r5,r11,-12880
	ctx.r5.s64 = ctx.r11.s64 + -12880;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x82805c10
	ctx.lr = 0x828065B8;
	sub_82805C10(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82e01bf0
	ctx.lr = 0x828065C0;
	sub_82E01BF0(ctx, base);
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,9388
	ctx.r4.s64 = ctx.r11.s64 + 9388;
	// bl 0x82e02670
	ctx.lr = 0x828065D0;
	sub_82E02670(ctx, base);
	// lis r11,-31888
	ctx.r11.s64 = -2089811968;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r5,r11,-11936
	ctx.r5.s64 = ctx.r11.s64 + -11936;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x82805c10
	ctx.lr = 0x828065E8;
	sub_82805C10(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82e01bf0
	ctx.lr = 0x828065F0;
	sub_82E01BF0(ctx, base);
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,9364
	ctx.r4.s64 = ctx.r11.s64 + 9364;
	// bl 0x82e02670
	ctx.lr = 0x82806600;
	sub_82E02670(ctx, base);
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r5,r11,-2112
	ctx.r5.s64 = ctx.r11.s64 + -2112;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x82805c10
	ctx.lr = 0x82806618;
	sub_82805C10(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82e01bf0
	ctx.lr = 0x82806620;
	sub_82E01BF0(ctx, base);
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,9344
	ctx.r4.s64 = ctx.r11.s64 + 9344;
	// bl 0x82e02670
	ctx.lr = 0x82806630;
	sub_82E02670(ctx, base);
	// lis r11,-31879
	ctx.r11.s64 = -2089222144;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r5,r11,-10708
	ctx.r5.s64 = ctx.r11.s64 + -10708;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x82805c10
	ctx.lr = 0x82806648;
	sub_82805C10(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82e01bf0
	ctx.lr = 0x82806650;
	sub_82E01BF0(ctx, base);
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,9328
	ctx.r4.s64 = ctx.r11.s64 + 9328;
	// bl 0x82e02670
	ctx.lr = 0x82806660;
	sub_82E02670(ctx, base);
	// lis r11,-31879
	ctx.r11.s64 = -2089222144;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r5,r11,-26308
	ctx.r5.s64 = ctx.r11.s64 + -26308;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x82805c10
	ctx.lr = 0x82806678;
	sub_82805C10(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82e01bf0
	ctx.lr = 0x82806680;
	sub_82E01BF0(ctx, base);
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,9300
	ctx.r4.s64 = ctx.r11.s64 + 9300;
	// bl 0x82e02670
	ctx.lr = 0x82806690;
	sub_82E02670(ctx, base);
	// lis r11,-31879
	ctx.r11.s64 = -2089222144;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r11,-26296
	ctx.r5.s64 = ctx.r11.s64 + -26296;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82805c10
	ctx.lr = 0x828066A8;
	sub_82805C10(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82e01bf0
	ctx.lr = 0x828066B0;
	sub_82E01BF0(ctx, base);
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,9280
	ctx.r4.s64 = ctx.r11.s64 + 9280;
	// bl 0x82e02670
	ctx.lr = 0x828066C0;
	sub_82E02670(ctx, base);
	// lis r11,-31879
	ctx.r11.s64 = -2089222144;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r5,r11,-13076
	ctx.r5.s64 = ctx.r11.s64 + -13076;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x82805c10
	ctx.lr = 0x828066D8;
	sub_82805C10(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82e01bf0
	ctx.lr = 0x828066E0;
	sub_82E01BF0(ctx, base);
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,9256
	ctx.r4.s64 = ctx.r11.s64 + 9256;
	// bl 0x82e02670
	ctx.lr = 0x828066F0;
	sub_82E02670(ctx, base);
	// lis r11,-31879
	ctx.r11.s64 = -2089222144;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r5,r11,-13064
	ctx.r5.s64 = ctx.r11.s64 + -13064;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x82805c10
	ctx.lr = 0x82806708;
	sub_82805C10(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82e01bf0
	ctx.lr = 0x82806710;
	sub_82E01BF0(ctx, base);
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,9224
	ctx.r4.s64 = ctx.r11.s64 + 9224;
	// bl 0x82e02670
	ctx.lr = 0x82806720;
	sub_82E02670(ctx, base);
	// lis r11,-31879
	ctx.r11.s64 = -2089222144;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r5,r11,-13052
	ctx.r5.s64 = ctx.r11.s64 + -13052;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x82805c10
	ctx.lr = 0x82806738;
	sub_82805C10(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82e01bf0
	ctx.lr = 0x82806740;
	sub_82E01BF0(ctx, base);
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,9204
	ctx.r4.s64 = ctx.r11.s64 + 9204;
	// bl 0x82e02670
	ctx.lr = 0x82806750;
	sub_82E02670(ctx, base);
	// lis r11,-31879
	ctx.r11.s64 = -2089222144;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r5,r11,-14592
	ctx.r5.s64 = ctx.r11.s64 + -14592;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x82805c10
	ctx.lr = 0x82806768;
	sub_82805C10(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82e01bf0
	ctx.lr = 0x82806770;
	sub_82E01BF0(ctx, base);
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,9168
	ctx.r4.s64 = ctx.r11.s64 + 9168;
	// bl 0x82e02670
	ctx.lr = 0x82806780;
	sub_82E02670(ctx, base);
	// lis r11,-31879
	ctx.r11.s64 = -2089222144;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r5,r11,-15332
	ctx.r5.s64 = ctx.r11.s64 + -15332;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x82805c10
	ctx.lr = 0x82806798;
	sub_82805C10(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82e01bf0
	ctx.lr = 0x828067A0;
	sub_82E01BF0(ctx, base);
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,9136
	ctx.r4.s64 = ctx.r11.s64 + 9136;
	// bl 0x82e02670
	ctx.lr = 0x828067B0;
	sub_82E02670(ctx, base);
	// lis r11,-31879
	ctx.r11.s64 = -2089222144;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r5,r11,-15320
	ctx.r5.s64 = ctx.r11.s64 + -15320;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x82805c10
	ctx.lr = 0x828067C8;
	sub_82805C10(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82e01bf0
	ctx.lr = 0x828067D0;
	sub_82E01BF0(ctx, base);
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,9116
	ctx.r4.s64 = ctx.r11.s64 + 9116;
	// bl 0x82e02670
	ctx.lr = 0x828067E0;
	sub_82E02670(ctx, base);
	// lis r11,-31879
	ctx.r11.s64 = -2089222144;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r11,-21080
	ctx.r5.s64 = ctx.r11.s64 + -21080;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82805c10
	ctx.lr = 0x828067F8;
	sub_82805C10(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82e01bf0
	ctx.lr = 0x82806800;
	sub_82E01BF0(ctx, base);
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,9092
	ctx.r4.s64 = ctx.r11.s64 + 9092;
	// bl 0x82e02670
	ctx.lr = 0x82806810;
	sub_82E02670(ctx, base);
	// lis r11,-31879
	ctx.r11.s64 = -2089222144;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r5,r11,-21068
	ctx.r5.s64 = ctx.r11.s64 + -21068;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x82805c10
	ctx.lr = 0x82806828;
	sub_82805C10(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82e01bf0
	ctx.lr = 0x82806830;
	sub_82E01BF0(ctx, base);
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,9072
	ctx.r4.s64 = ctx.r11.s64 + 9072;
	// bl 0x82e02670
	ctx.lr = 0x82806840;
	sub_82E02670(ctx, base);
	// lis r11,-31879
	ctx.r11.s64 = -2089222144;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r5,r11,-27680
	ctx.r5.s64 = ctx.r11.s64 + -27680;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x82805c10
	ctx.lr = 0x82806858;
	sub_82805C10(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82e01bf0
	ctx.lr = 0x82806860;
	sub_82E01BF0(ctx, base);
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,9048
	ctx.r4.s64 = ctx.r11.s64 + 9048;
	// bl 0x82e02670
	ctx.lr = 0x82806870;
	sub_82E02670(ctx, base);
	// lis r11,-31879
	ctx.r11.s64 = -2089222144;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r5,r11,-27668
	ctx.r5.s64 = ctx.r11.s64 + -27668;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x82805c10
	ctx.lr = 0x82806888;
	sub_82805C10(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82e01bf0
	ctx.lr = 0x82806890;
	sub_82E01BF0(ctx, base);
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,9024
	ctx.r4.s64 = ctx.r11.s64 + 9024;
	// bl 0x82e02670
	ctx.lr = 0x828068A0;
	sub_82E02670(ctx, base);
	// lis r11,-31879
	ctx.r11.s64 = -2089222144;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r5,r11,-12020
	ctx.r5.s64 = ctx.r11.s64 + -12020;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x82805c10
	ctx.lr = 0x828068B8;
	sub_82805C10(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82e01bf0
	ctx.lr = 0x828068C0;
	sub_82E01BF0(ctx, base);
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,8992
	ctx.r4.s64 = ctx.r11.s64 + 8992;
	// bl 0x82e02670
	ctx.lr = 0x828068D0;
	sub_82E02670(ctx, base);
	// lis r11,-31879
	ctx.r11.s64 = -2089222144;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r5,r11,-12008
	ctx.r5.s64 = ctx.r11.s64 + -12008;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x82805c10
	ctx.lr = 0x828068E8;
	sub_82805C10(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82e01bf0
	ctx.lr = 0x828068F0;
	sub_82E01BF0(ctx, base);
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,8956
	ctx.r4.s64 = ctx.r11.s64 + 8956;
	// bl 0x82e02670
	ctx.lr = 0x82806900;
	sub_82E02670(ctx, base);
	// lis r11,-31879
	ctx.r11.s64 = -2089222144;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r11,-11996
	ctx.r5.s64 = ctx.r11.s64 + -11996;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82805c10
	ctx.lr = 0x82806918;
	sub_82805C10(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82e01bf0
	ctx.lr = 0x82806920;
	sub_82E01BF0(ctx, base);
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,8936
	ctx.r4.s64 = ctx.r11.s64 + 8936;
	// bl 0x82e02670
	ctx.lr = 0x82806930;
	sub_82E02670(ctx, base);
	// li r6,0
	ctx.r6.s64 = 0;
	// lis r11,-31879
	ctx.r11.s64 = -2089222144;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r5,r11,-17588
	ctx.r5.s64 = ctx.r11.s64 + -17588;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x82805c10
	ctx.lr = 0x82806948;
	sub_82805C10(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82e01bf0
	ctx.lr = 0x82806950;
	sub_82E01BF0(ctx, base);
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,8904
	ctx.r4.s64 = ctx.r11.s64 + 8904;
	// bl 0x82e02670
	ctx.lr = 0x82806960;
	sub_82E02670(ctx, base);
	// lis r11,-31879
	ctx.r11.s64 = -2089222144;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r5,r11,-16424
	ctx.r5.s64 = ctx.r11.s64 + -16424;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x82805c10
	ctx.lr = 0x82806978;
	sub_82805C10(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82e01bf0
	ctx.lr = 0x82806980;
	sub_82E01BF0(ctx, base);
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,8868
	ctx.r4.s64 = ctx.r11.s64 + 8868;
	// bl 0x82e02670
	ctx.lr = 0x82806990;
	sub_82E02670(ctx, base);
	// lis r11,-31879
	ctx.r11.s64 = -2089222144;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r5,r11,-16412
	ctx.r5.s64 = ctx.r11.s64 + -16412;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x82805c10
	ctx.lr = 0x828069A8;
	sub_82805C10(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82e01bf0
	ctx.lr = 0x828069B0;
	sub_82E01BF0(ctx, base);
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,8848
	ctx.r4.s64 = ctx.r11.s64 + 8848;
	// bl 0x82e02670
	ctx.lr = 0x828069C0;
	sub_82E02670(ctx, base);
	// lis r11,-31879
	ctx.r11.s64 = -2089222144;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r5,r11,-19744
	ctx.r5.s64 = ctx.r11.s64 + -19744;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x82805c10
	ctx.lr = 0x828069D8;
	sub_82805C10(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82e01bf0
	ctx.lr = 0x828069E0;
	sub_82E01BF0(ctx, base);
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,8828
	ctx.r4.s64 = ctx.r11.s64 + 8828;
	// bl 0x82e02670
	ctx.lr = 0x828069F0;
	sub_82E02670(ctx, base);
	// lis r11,-31879
	ctx.r11.s64 = -2089222144;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r5,r11,-22856
	ctx.r5.s64 = ctx.r11.s64 + -22856;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x82805c10
	ctx.lr = 0x82806A08;
	sub_82805C10(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82e01bf0
	ctx.lr = 0x82806A10;
	sub_82E01BF0(ctx, base);
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,8800
	ctx.r4.s64 = ctx.r11.s64 + 8800;
	// bl 0x82e02670
	ctx.lr = 0x82806A20;
	sub_82E02670(ctx, base);
	// lis r11,-31879
	ctx.r11.s64 = -2089222144;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r5,r11,-22844
	ctx.r5.s64 = ctx.r11.s64 + -22844;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x82805c10
	ctx.lr = 0x82806A38;
	sub_82805C10(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82e01bf0
	ctx.lr = 0x82806A40;
	sub_82E01BF0(ctx, base);
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,8764
	ctx.r4.s64 = ctx.r11.s64 + 8764;
	// bl 0x82e02670
	ctx.lr = 0x82806A50;
	sub_82E02670(ctx, base);
	// lis r11,-31879
	ctx.r11.s64 = -2089222144;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r11,-22832
	ctx.r5.s64 = ctx.r11.s64 + -22832;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82805c10
	ctx.lr = 0x82806A68;
	sub_82805C10(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82e01bf0
	ctx.lr = 0x82806A70;
	sub_82E01BF0(ctx, base);
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,8748
	ctx.r4.s64 = ctx.r11.s64 + 8748;
	// bl 0x82e02670
	ctx.lr = 0x82806A80;
	sub_82E02670(ctx, base);
	// lis r11,-31880
	ctx.r11.s64 = -2089287680;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r5,r11,32276
	ctx.r5.s64 = ctx.r11.s64 + 32276;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x82805c10
	ctx.lr = 0x82806A98;
	sub_82805C10(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82e01bf0
	ctx.lr = 0x82806AA0;
	sub_82E01BF0(ctx, base);
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,8728
	ctx.r4.s64 = ctx.r11.s64 + 8728;
	// bl 0x82e02670
	ctx.lr = 0x82806AB0;
	sub_82E02670(ctx, base);
	// lis r11,-31879
	ctx.r11.s64 = -2089222144;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r5,r11,-32348
	ctx.r5.s64 = ctx.r11.s64 + -32348;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x82805c10
	ctx.lr = 0x82806AC8;
	sub_82805C10(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82e01bf0
	ctx.lr = 0x82806AD0;
	sub_82E01BF0(ctx, base);
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,8704
	ctx.r4.s64 = ctx.r11.s64 + 8704;
	// bl 0x82e02670
	ctx.lr = 0x82806AE0;
	sub_82E02670(ctx, base);
	// lis r11,-31880
	ctx.r11.s64 = -2089287680;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r5,r11,32620
	ctx.r5.s64 = ctx.r11.s64 + 32620;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x82805c10
	ctx.lr = 0x82806AF8;
	sub_82805C10(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82e01bf0
	ctx.lr = 0x82806B00;
	sub_82E01BF0(ctx, base);
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,8684
	ctx.r4.s64 = ctx.r11.s64 + 8684;
	// bl 0x82e02670
	ctx.lr = 0x82806B10;
	sub_82E02670(ctx, base);
	// lis r11,-31880
	ctx.r11.s64 = -2089287680;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r5,r11,26296
	ctx.r5.s64 = ctx.r11.s64 + 26296;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x82805c10
	ctx.lr = 0x82806B28;
	sub_82805C10(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82e01bf0
	ctx.lr = 0x82806B30;
	sub_82E01BF0(ctx, base);
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,8664
	ctx.r4.s64 = ctx.r11.s64 + 8664;
	// bl 0x82e02670
	ctx.lr = 0x82806B40;
	sub_82E02670(ctx, base);
	// lis r11,-31880
	ctx.r11.s64 = -2089287680;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r5,r11,31272
	ctx.r5.s64 = ctx.r11.s64 + 31272;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x82805c10
	ctx.lr = 0x82806B58;
	sub_82805C10(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82e01bf0
	ctx.lr = 0x82806B60;
	sub_82E01BF0(ctx, base);
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,8632
	ctx.r4.s64 = ctx.r11.s64 + 8632;
	// bl 0x82e02670
	ctx.lr = 0x82806B70;
	sub_82E02670(ctx, base);
	// lis r11,-31880
	ctx.r11.s64 = -2089287680;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r5,r11,31284
	ctx.r5.s64 = ctx.r11.s64 + 31284;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x82805c10
	ctx.lr = 0x82806B88;
	sub_82805C10(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82e01bf0
	ctx.lr = 0x82806B90;
	sub_82E01BF0(ctx, base);
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,8612
	ctx.r4.s64 = ctx.r11.s64 + 8612;
	// bl 0x82e02670
	ctx.lr = 0x82806BA0;
	sub_82E02670(ctx, base);
	// lis r11,-31880
	ctx.r11.s64 = -2089287680;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r11,28728
	ctx.r5.s64 = ctx.r11.s64 + 28728;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82805c10
	ctx.lr = 0x82806BB8;
	sub_82805C10(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82e01bf0
	ctx.lr = 0x82806BC0;
	sub_82E01BF0(ctx, base);
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,8584
	ctx.r4.s64 = ctx.r11.s64 + 8584;
	// bl 0x82e02670
	ctx.lr = 0x82806BD0;
	sub_82E02670(ctx, base);
	// lis r11,-31880
	ctx.r11.s64 = -2089287680;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r5,r11,28740
	ctx.r5.s64 = ctx.r11.s64 + 28740;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x82805c10
	ctx.lr = 0x82806BE8;
	sub_82805C10(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82e01bf0
	ctx.lr = 0x82806BF0;
	sub_82E01BF0(ctx, base);
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,8556
	ctx.r4.s64 = ctx.r11.s64 + 8556;
	// bl 0x82e02670
	ctx.lr = 0x82806C00;
	sub_82E02670(ctx, base);
	// lis r11,-31880
	ctx.r11.s64 = -2089287680;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r5,r11,28752
	ctx.r5.s64 = ctx.r11.s64 + 28752;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x82805c10
	ctx.lr = 0x82806C18;
	sub_82805C10(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82e01bf0
	ctx.lr = 0x82806C20;
	sub_82E01BF0(ctx, base);
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,8532
	ctx.r4.s64 = ctx.r11.s64 + 8532;
	// bl 0x82e02670
	ctx.lr = 0x82806C30;
	sub_82E02670(ctx, base);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r5,r11,-19704
	ctx.r5.s64 = ctx.r11.s64 + -19704;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x82805c10
	ctx.lr = 0x82806C48;
	sub_82805C10(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82e01bf0
	ctx.lr = 0x82806C50;
	sub_82E01BF0(ctx, base);
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,8500
	ctx.r4.s64 = ctx.r11.s64 + 8500;
	// bl 0x82e02670
	ctx.lr = 0x82806C60;
	sub_82E02670(ctx, base);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r5,r11,-18156
	ctx.r5.s64 = ctx.r11.s64 + -18156;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x82805c10
	ctx.lr = 0x82806C78;
	sub_82805C10(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82e01bf0
	ctx.lr = 0x82806C80;
	sub_82E01BF0(ctx, base);
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,8464
	ctx.r4.s64 = ctx.r11.s64 + 8464;
	// bl 0x82e02670
	ctx.lr = 0x82806C90;
	sub_82E02670(ctx, base);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r5,r11,-18144
	ctx.r5.s64 = ctx.r11.s64 + -18144;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x82805c10
	ctx.lr = 0x82806CA8;
	sub_82805C10(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82e01bf0
	ctx.lr = 0x82806CB0;
	sub_82E01BF0(ctx, base);
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// addi r3,r1,1368
	ctx.r3.s64 = ctx.r1.s64 + 1368;
	// addi r4,r11,8444
	ctx.r4.s64 = ctx.r11.s64 + 8444;
	// bl 0x82e02670
	ctx.lr = 0x82806CC0;
	sub_82E02670(ctx, base);
	// lis r11,-31880
	ctx.r11.s64 = -2089287680;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r5,r11,28104
	ctx.r5.s64 = ctx.r11.s64 + 28104;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r4,r1,1368
	ctx.r4.s64 = ctx.r1.s64 + 1368;
	// bl 0x82805c10
	ctx.lr = 0x82806CD8;
	sub_82805C10(ctx, base);
	// addi r3,r1,1368
	ctx.r3.s64 = ctx.r1.s64 + 1368;
	// bl 0x82e01bf0
	ctx.lr = 0x82806CE0;
	sub_82E01BF0(ctx, base);
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// addi r3,r1,944
	ctx.r3.s64 = ctx.r1.s64 + 944;
	// addi r4,r11,8424
	ctx.r4.s64 = ctx.r11.s64 + 8424;
	// bl 0x82e02670
	ctx.lr = 0x82806CF0;
	sub_82E02670(ctx, base);
	// lis r11,-31879
	ctx.r11.s64 = -2089222144;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r11,-27920
	ctx.r5.s64 = ctx.r11.s64 + -27920;
	// addi r4,r1,944
	ctx.r4.s64 = ctx.r1.s64 + 944;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82805c10
	ctx.lr = 0x82806D08;
	sub_82805C10(ctx, base);
	// addi r3,r1,944
	ctx.r3.s64 = ctx.r1.s64 + 944;
	// bl 0x82e01bf0
	ctx.lr = 0x82806D10;
	sub_82E01BF0(ctx, base);
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// addi r4,r11,8404
	ctx.r4.s64 = ctx.r11.s64 + 8404;
	// bl 0x82e02670
	ctx.lr = 0x82806D20;
	sub_82E02670(ctx, base);
	// lis r11,-31880
	ctx.r11.s64 = -2089287680;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r5,r11,26544
	ctx.r5.s64 = ctx.r11.s64 + 26544;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// bl 0x82805c10
	ctx.lr = 0x82806D38;
	sub_82805C10(ctx, base);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82e01bf0
	ctx.lr = 0x82806D40;
	sub_82E01BF0(ctx, base);
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// addi r3,r1,1584
	ctx.r3.s64 = ctx.r1.s64 + 1584;
	// addi r4,r11,8380
	ctx.r4.s64 = ctx.r11.s64 + 8380;
	// bl 0x82e02670
	ctx.lr = 0x82806D50;
	sub_82E02670(ctx, base);
	// lis r11,-31880
	ctx.r11.s64 = -2089287680;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r5,r11,26556
	ctx.r5.s64 = ctx.r11.s64 + 26556;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r4,r1,1584
	ctx.r4.s64 = ctx.r1.s64 + 1584;
	// bl 0x82805c10
	ctx.lr = 0x82806D68;
	sub_82805C10(ctx, base);
	// addi r3,r1,1584
	ctx.r3.s64 = ctx.r1.s64 + 1584;
	// bl 0x82e01bf0
	ctx.lr = 0x82806D70;
	sub_82E01BF0(ctx, base);
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// addi r4,r11,8352
	ctx.r4.s64 = ctx.r11.s64 + 8352;
	// bl 0x82e02670
	ctx.lr = 0x82806D80;
	sub_82E02670(ctx, base);
	// lis r11,-31880
	ctx.r11.s64 = -2089287680;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r5,r11,26568
	ctx.r5.s64 = ctx.r11.s64 + 26568;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r4,r1,104
	ctx.r4.s64 = ctx.r1.s64 + 104;
	// bl 0x82805c10
	ctx.lr = 0x82806D98;
	sub_82805C10(ctx, base);
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// bl 0x82e01bf0
	ctx.lr = 0x82806DA0;
	sub_82E01BF0(ctx, base);
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// addi r3,r1,952
	ctx.r3.s64 = ctx.r1.s64 + 952;
	// addi r4,r11,8332
	ctx.r4.s64 = ctx.r11.s64 + 8332;
	// bl 0x82e02670
	ctx.lr = 0x82806DB0;
	sub_82E02670(ctx, base);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r5,r11,13992
	ctx.r5.s64 = ctx.r11.s64 + 13992;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r4,r1,952
	ctx.r4.s64 = ctx.r1.s64 + 952;
	// bl 0x82805c10
	ctx.lr = 0x82806DC8;
	sub_82805C10(ctx, base);
	// addi r3,r1,952
	ctx.r3.s64 = ctx.r1.s64 + 952;
	// bl 0x82e01bf0
	ctx.lr = 0x82806DD0;
	sub_82E01BF0(ctx, base);
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// addi r4,r11,8312
	ctx.r4.s64 = ctx.r11.s64 + 8312;
	// bl 0x82e02670
	ctx.lr = 0x82806DE0;
	sub_82E02670(ctx, base);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r5,r11,14004
	ctx.r5.s64 = ctx.r11.s64 + 14004;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// bl 0x82805c10
	ctx.lr = 0x82806DF8;
	sub_82805C10(ctx, base);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82e01bf0
	ctx.lr = 0x82806E00;
	sub_82E01BF0(ctx, base);
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// addi r3,r1,1376
	ctx.r3.s64 = ctx.r1.s64 + 1376;
	// addi r4,r11,8292
	ctx.r4.s64 = ctx.r11.s64 + 8292;
	// bl 0x82e02670
	ctx.lr = 0x82806E10;
	sub_82E02670(ctx, base);
	// lis r11,-31880
	ctx.r11.s64 = -2089287680;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r11,21620
	ctx.r5.s64 = ctx.r11.s64 + 21620;
	// addi r4,r1,1376
	ctx.r4.s64 = ctx.r1.s64 + 1376;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82805c10
	ctx.lr = 0x82806E28;
	sub_82805C10(ctx, base);
	// addi r3,r1,1376
	ctx.r3.s64 = ctx.r1.s64 + 1376;
	// bl 0x82e01bf0
	ctx.lr = 0x82806E30;
	sub_82E01BF0(ctx, base);
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// addi r3,r1,120
	ctx.r3.s64 = ctx.r1.s64 + 120;
	// addi r4,r11,8272
	ctx.r4.s64 = ctx.r11.s64 + 8272;
	// bl 0x82e02670
	ctx.lr = 0x82806E40;
	sub_82E02670(ctx, base);
	// li r6,0
	ctx.r6.s64 = 0;
	// lis r11,-31880
	ctx.r11.s64 = -2089287680;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r5,r11,19840
	ctx.r5.s64 = ctx.r11.s64 + 19840;
	// addi r4,r1,120
	ctx.r4.s64 = ctx.r1.s64 + 120;
	// bl 0x82805c10
	ctx.lr = 0x82806E58;
	sub_82805C10(ctx, base);
	// addi r3,r1,120
	ctx.r3.s64 = ctx.r1.s64 + 120;
	// bl 0x82e01bf0
	ctx.lr = 0x82806E60;
	sub_82E01BF0(ctx, base);
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// addi r3,r1,960
	ctx.r3.s64 = ctx.r1.s64 + 960;
	// addi r4,r11,8252
	ctx.r4.s64 = ctx.r11.s64 + 8252;
	// bl 0x82e02670
	ctx.lr = 0x82806E70;
	sub_82E02670(ctx, base);
	// lis r11,-31890
	ctx.r11.s64 = -2089943040;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r5,r11,-19984
	ctx.r5.s64 = ctx.r11.s64 + -19984;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r4,r1,960
	ctx.r4.s64 = ctx.r1.s64 + 960;
	// bl 0x82805c10
	ctx.lr = 0x82806E88;
	sub_82805C10(ctx, base);
	// addi r3,r1,960
	ctx.r3.s64 = ctx.r1.s64 + 960;
	// bl 0x82e01bf0
	ctx.lr = 0x82806E90;
	sub_82E01BF0(ctx, base);
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// addi r4,r11,8232
	ctx.r4.s64 = ctx.r11.s64 + 8232;
	// bl 0x82e02670
	ctx.lr = 0x82806EA0;
	sub_82E02670(ctx, base);
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r5,r11,5544
	ctx.r5.s64 = ctx.r11.s64 + 5544;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// bl 0x82805c10
	ctx.lr = 0x82806EB8;
	sub_82805C10(ctx, base);
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x82e01bf0
	ctx.lr = 0x82806EC0;
	sub_82E01BF0(ctx, base);
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// addi r3,r1,1744
	ctx.r3.s64 = ctx.r1.s64 + 1744;
	// addi r4,r11,8216
	ctx.r4.s64 = ctx.r11.s64 + 8216;
	// bl 0x82e02670
	ctx.lr = 0x82806ED0;
	sub_82E02670(ctx, base);
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r5,r11,6148
	ctx.r5.s64 = ctx.r11.s64 + 6148;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r4,r1,1744
	ctx.r4.s64 = ctx.r1.s64 + 1744;
	// bl 0x82805c10
	ctx.lr = 0x82806EE8;
	sub_82805C10(ctx, base);
	// addi r3,r1,1744
	ctx.r3.s64 = ctx.r1.s64 + 1744;
	// bl 0x82e01bf0
	ctx.lr = 0x82806EF0;
	sub_82E01BF0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82651e38
	ctx.lr = 0x82806EF8;
	sub_82651E38(ctx, base);
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// addi r3,r1,136
	ctx.r3.s64 = ctx.r1.s64 + 136;
	// addi r4,r11,8200
	ctx.r4.s64 = ctx.r11.s64 + 8200;
	// bl 0x82e02670
	ctx.lr = 0x82806F08;
	sub_82E02670(ctx, base);
	// lis r11,-31890
	ctx.r11.s64 = -2089943040;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r5,r11,-22228
	ctx.r5.s64 = ctx.r11.s64 + -22228;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r4,r1,136
	ctx.r4.s64 = ctx.r1.s64 + 136;
	// bl 0x82805c10
	ctx.lr = 0x82806F20;
	sub_82805C10(ctx, base);
	// addi r3,r1,136
	ctx.r3.s64 = ctx.r1.s64 + 136;
	// bl 0x82e01bf0
	ctx.lr = 0x82806F28;
	sub_82E01BF0(ctx, base);
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// addi r3,r1,968
	ctx.r3.s64 = ctx.r1.s64 + 968;
	// addi r4,r11,8176
	ctx.r4.s64 = ctx.r11.s64 + 8176;
	// bl 0x82e02670
	ctx.lr = 0x82806F38;
	sub_82E02670(ctx, base);
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r5,r11,-19788
	ctx.r5.s64 = ctx.r11.s64 + -19788;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r4,r1,968
	ctx.r4.s64 = ctx.r1.s64 + 968;
	// bl 0x82805c10
	ctx.lr = 0x82806F50;
	sub_82805C10(ctx, base);
	// addi r3,r1,968
	ctx.r3.s64 = ctx.r1.s64 + 968;
	// bl 0x82e01bf0
	ctx.lr = 0x82806F58;
	sub_82E01BF0(ctx, base);
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// addi r4,r11,8156
	ctx.r4.s64 = ctx.r11.s64 + 8156;
	// bl 0x82e02670
	ctx.lr = 0x82806F68;
	sub_82E02670(ctx, base);
	// lis r11,-31890
	ctx.r11.s64 = -2089943040;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r11,-19652
	ctx.r5.s64 = ctx.r11.s64 + -19652;
	// addi r4,r1,144
	ctx.r4.s64 = ctx.r1.s64 + 144;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82805c10
	ctx.lr = 0x82806F80;
	sub_82805C10(ctx, base);
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x82e01bf0
	ctx.lr = 0x82806F88;
	sub_82E01BF0(ctx, base);
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// addi r3,r1,1384
	ctx.r3.s64 = ctx.r1.s64 + 1384;
	// addi r4,r11,8136
	ctx.r4.s64 = ctx.r11.s64 + 8136;
	// bl 0x82e02670
	ctx.lr = 0x82806F98;
	sub_82E02670(ctx, base);
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r5,r11,-11096
	ctx.r5.s64 = ctx.r11.s64 + -11096;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r4,r1,1384
	ctx.r4.s64 = ctx.r1.s64 + 1384;
	// bl 0x82805c10
	ctx.lr = 0x82806FB0;
	sub_82805C10(ctx, base);
	// addi r3,r1,1384
	ctx.r3.s64 = ctx.r1.s64 + 1384;
	// bl 0x82e01bf0
	ctx.lr = 0x82806FB8;
	sub_82E01BF0(ctx, base);
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// addi r3,r1,152
	ctx.r3.s64 = ctx.r1.s64 + 152;
	// addi r4,r11,8108
	ctx.r4.s64 = ctx.r11.s64 + 8108;
	// bl 0x82e02670
	ctx.lr = 0x82806FC8;
	sub_82E02670(ctx, base);
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r5,r11,-18664
	ctx.r5.s64 = ctx.r11.s64 + -18664;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r4,r1,152
	ctx.r4.s64 = ctx.r1.s64 + 152;
	// bl 0x82805c10
	ctx.lr = 0x82806FE0;
	sub_82805C10(ctx, base);
	// addi r3,r1,152
	ctx.r3.s64 = ctx.r1.s64 + 152;
	// bl 0x82e01bf0
	ctx.lr = 0x82806FE8;
	sub_82E01BF0(ctx, base);
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// addi r3,r1,976
	ctx.r3.s64 = ctx.r1.s64 + 976;
	// addi r4,r11,8076
	ctx.r4.s64 = ctx.r11.s64 + 8076;
	// bl 0x82e02670
	ctx.lr = 0x82806FF8;
	sub_82E02670(ctx, base);
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r5,r11,-18652
	ctx.r5.s64 = ctx.r11.s64 + -18652;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r4,r1,976
	ctx.r4.s64 = ctx.r1.s64 + 976;
	// bl 0x82805c10
	ctx.lr = 0x82807010;
	sub_82805C10(ctx, base);
	// addi r3,r1,976
	ctx.r3.s64 = ctx.r1.s64 + 976;
	// bl 0x82e01bf0
	ctx.lr = 0x82807018;
	sub_82E01BF0(ctx, base);
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// addi r4,r11,8052
	ctx.r4.s64 = ctx.r11.s64 + 8052;
	// bl 0x82e02670
	ctx.lr = 0x82807028;
	sub_82E02670(ctx, base);
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r5,r11,-18640
	ctx.r5.s64 = ctx.r11.s64 + -18640;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r4,r1,160
	ctx.r4.s64 = ctx.r1.s64 + 160;
	// bl 0x82805c10
	ctx.lr = 0x82807040;
	sub_82805C10(ctx, base);
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x82e01bf0
	ctx.lr = 0x82807048;
	sub_82E01BF0(ctx, base);
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// addi r3,r1,1592
	ctx.r3.s64 = ctx.r1.s64 + 1592;
	// addi r4,r11,8028
	ctx.r4.s64 = ctx.r11.s64 + 8028;
	// bl 0x82e02670
	ctx.lr = 0x82807058;
	sub_82E02670(ctx, base);
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r5,r11,-18628
	ctx.r5.s64 = ctx.r11.s64 + -18628;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r4,r1,1592
	ctx.r4.s64 = ctx.r1.s64 + 1592;
	// bl 0x82805c10
	ctx.lr = 0x82807070;
	sub_82805C10(ctx, base);
	// addi r3,r1,1592
	ctx.r3.s64 = ctx.r1.s64 + 1592;
	// bl 0x82e01bf0
	ctx.lr = 0x82807078;
	sub_82E01BF0(ctx, base);
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// addi r3,r1,168
	ctx.r3.s64 = ctx.r1.s64 + 168;
	// addi r4,r11,8008
	ctx.r4.s64 = ctx.r11.s64 + 8008;
	// bl 0x82e02670
	ctx.lr = 0x82807088;
	sub_82E02670(ctx, base);
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r5,r11,-20896
	ctx.r5.s64 = ctx.r11.s64 + -20896;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r4,r1,168
	ctx.r4.s64 = ctx.r1.s64 + 168;
	// bl 0x82805c10
	ctx.lr = 0x828070A0;
	sub_82805C10(ctx, base);
	// addi r3,r1,168
	ctx.r3.s64 = ctx.r1.s64 + 168;
	// bl 0x82e01bf0
	ctx.lr = 0x828070A8;
	sub_82E01BF0(ctx, base);
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// addi r3,r1,984
	ctx.r3.s64 = ctx.r1.s64 + 984;
	// addi r4,r11,7988
	ctx.r4.s64 = ctx.r11.s64 + 7988;
	// bl 0x82e02670
	ctx.lr = 0x828070B8;
	sub_82E02670(ctx, base);
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r11,-2324
	ctx.r5.s64 = ctx.r11.s64 + -2324;
	// addi r4,r1,984
	ctx.r4.s64 = ctx.r1.s64 + 984;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82805c10
	ctx.lr = 0x828070D0;
	sub_82805C10(ctx, base);
	// addi r3,r1,984
	ctx.r3.s64 = ctx.r1.s64 + 984;
	// bl 0x82e01bf0
	ctx.lr = 0x828070D8;
	sub_82E01BF0(ctx, base);
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// addi r4,r11,7964
	ctx.r4.s64 = ctx.r11.s64 + 7964;
	// bl 0x82e02670
	ctx.lr = 0x828070E8;
	sub_82E02670(ctx, base);
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r5,r11,-2312
	ctx.r5.s64 = ctx.r11.s64 + -2312;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r4,r1,176
	ctx.r4.s64 = ctx.r1.s64 + 176;
	// bl 0x82805c10
	ctx.lr = 0x82807100;
	sub_82805C10(ctx, base);
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// bl 0x82e01bf0
	ctx.lr = 0x82807108;
	sub_82E01BF0(ctx, base);
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// addi r3,r1,1392
	ctx.r3.s64 = ctx.r1.s64 + 1392;
	// addi r4,r11,7940
	ctx.r4.s64 = ctx.r11.s64 + 7940;
	// bl 0x82e02670
	ctx.lr = 0x82807118;
	sub_82E02670(ctx, base);
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r5,r11,-2300
	ctx.r5.s64 = ctx.r11.s64 + -2300;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r4,r1,1392
	ctx.r4.s64 = ctx.r1.s64 + 1392;
	// bl 0x82805c10
	ctx.lr = 0x82807130;
	sub_82805C10(ctx, base);
	// addi r3,r1,1392
	ctx.r3.s64 = ctx.r1.s64 + 1392;
	// bl 0x82e01bf0
	ctx.lr = 0x82807138;
	sub_82E01BF0(ctx, base);
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// addi r3,r1,184
	ctx.r3.s64 = ctx.r1.s64 + 184;
	// addi r4,r11,7920
	ctx.r4.s64 = ctx.r11.s64 + 7920;
	// bl 0x82e02670
	ctx.lr = 0x82807148;
	sub_82E02670(ctx, base);
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r5,r11,-2288
	ctx.r5.s64 = ctx.r11.s64 + -2288;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r4,r1,184
	ctx.r4.s64 = ctx.r1.s64 + 184;
	// bl 0x82805c10
	ctx.lr = 0x82807160;
	sub_82805C10(ctx, base);
	// addi r3,r1,184
	ctx.r3.s64 = ctx.r1.s64 + 184;
	// bl 0x82e01bf0
	ctx.lr = 0x82807168;
	sub_82E01BF0(ctx, base);
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// addi r3,r1,992
	ctx.r3.s64 = ctx.r1.s64 + 992;
	// addi r4,r11,7904
	ctx.r4.s64 = ctx.r11.s64 + 7904;
	// bl 0x82e02670
	ctx.lr = 0x82807178;
	sub_82E02670(ctx, base);
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r5,r11,-16844
	ctx.r5.s64 = ctx.r11.s64 + -16844;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r4,r1,992
	ctx.r4.s64 = ctx.r1.s64 + 992;
	// bl 0x82805c10
	ctx.lr = 0x82807190;
	sub_82805C10(ctx, base);
	// addi r3,r1,992
	ctx.r3.s64 = ctx.r1.s64 + 992;
	// bl 0x82e01bf0
	ctx.lr = 0x82807198;
	sub_82E01BF0(ctx, base);
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// addi r4,r11,7888
	ctx.r4.s64 = ctx.r11.s64 + 7888;
	// bl 0x82e02670
	ctx.lr = 0x828071A8;
	sub_82E02670(ctx, base);
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r5,r11,-16832
	ctx.r5.s64 = ctx.r11.s64 + -16832;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r4,r1,192
	ctx.r4.s64 = ctx.r1.s64 + 192;
	// bl 0x82805c10
	ctx.lr = 0x828071C0;
	sub_82805C10(ctx, base);
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// bl 0x82e01bf0
	ctx.lr = 0x828071C8;
	sub_82E01BF0(ctx, base);
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// addi r3,r1,1696
	ctx.r3.s64 = ctx.r1.s64 + 1696;
	// addi r4,r11,7864
	ctx.r4.s64 = ctx.r11.s64 + 7864;
	// bl 0x82e02670
	ctx.lr = 0x828071D8;
	sub_82E02670(ctx, base);
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r11,-16820
	ctx.r5.s64 = ctx.r11.s64 + -16820;
	// addi r4,r1,1696
	ctx.r4.s64 = ctx.r1.s64 + 1696;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82805c10
	ctx.lr = 0x828071F0;
	sub_82805C10(ctx, base);
	// addi r3,r1,1696
	ctx.r3.s64 = ctx.r1.s64 + 1696;
	// bl 0x82e01bf0
	ctx.lr = 0x828071F8;
	sub_82E01BF0(ctx, base);
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// addi r3,r1,200
	ctx.r3.s64 = ctx.r1.s64 + 200;
	// addi r4,r11,7844
	ctx.r4.s64 = ctx.r11.s64 + 7844;
	// bl 0x82e02670
	ctx.lr = 0x82807208;
	sub_82E02670(ctx, base);
	// lis r11,-31890
	ctx.r11.s64 = -2089943040;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r11,-21232
	ctx.r5.s64 = ctx.r11.s64 + -21232;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r1,200
	ctx.r4.s64 = ctx.r1.s64 + 200;
	// bl 0x82805c10
	ctx.lr = 0x82807220;
	sub_82805C10(ctx, base);
	// addi r3,r1,200
	ctx.r3.s64 = ctx.r1.s64 + 200;
	// bl 0x82e01bf0
	ctx.lr = 0x82807228;
	sub_82E01BF0(ctx, base);
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// addi r3,r1,1000
	ctx.r3.s64 = ctx.r1.s64 + 1000;
	// addi r4,r11,7824
	ctx.r4.s64 = ctx.r11.s64 + 7824;
	// bl 0x82e02670
	ctx.lr = 0x82807238;
	sub_82E02670(ctx, base);
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r5,r11,-1180
	ctx.r5.s64 = ctx.r11.s64 + -1180;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r4,r1,1000
	ctx.r4.s64 = ctx.r1.s64 + 1000;
	// bl 0x82805c10
	ctx.lr = 0x82807250;
	sub_82805C10(ctx, base);
	// addi r3,r1,1000
	ctx.r3.s64 = ctx.r1.s64 + 1000;
	// bl 0x82e01bf0
	ctx.lr = 0x82807258;
	sub_82E01BF0(ctx, base);
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// addi r3,r1,208
	ctx.r3.s64 = ctx.r1.s64 + 208;
	// addi r4,r11,7800
	ctx.r4.s64 = ctx.r11.s64 + 7800;
	// bl 0x82e02670
	ctx.lr = 0x82807268;
	sub_82E02670(ctx, base);
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r5,r11,1896
	ctx.r5.s64 = ctx.r11.s64 + 1896;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r4,r1,208
	ctx.r4.s64 = ctx.r1.s64 + 208;
	// bl 0x82805c10
	ctx.lr = 0x82807280;
	sub_82805C10(ctx, base);
	// addi r3,r1,208
	ctx.r3.s64 = ctx.r1.s64 + 208;
	// bl 0x82e01bf0
	ctx.lr = 0x82807288;
	sub_82E01BF0(ctx, base);
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// addi r3,r1,1400
	ctx.r3.s64 = ctx.r1.s64 + 1400;
	// addi r4,r11,7780
	ctx.r4.s64 = ctx.r11.s64 + 7780;
	// bl 0x82e02670
	ctx.lr = 0x82807298;
	sub_82E02670(ctx, base);
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r5,r11,-5072
	ctx.r5.s64 = ctx.r11.s64 + -5072;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r4,r1,1400
	ctx.r4.s64 = ctx.r1.s64 + 1400;
	// bl 0x82805c10
	ctx.lr = 0x828072B0;
	sub_82805C10(ctx, base);
	// addi r3,r1,1400
	ctx.r3.s64 = ctx.r1.s64 + 1400;
	// bl 0x82e01bf0
	ctx.lr = 0x828072B8;
	sub_82E01BF0(ctx, base);
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// addi r3,r1,216
	ctx.r3.s64 = ctx.r1.s64 + 216;
	// addi r4,r11,7756
	ctx.r4.s64 = ctx.r11.s64 + 7756;
	// bl 0x82e02670
	ctx.lr = 0x828072C8;
	sub_82E02670(ctx, base);
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r5,r11,-17352
	ctx.r5.s64 = ctx.r11.s64 + -17352;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r4,r1,216
	ctx.r4.s64 = ctx.r1.s64 + 216;
	// bl 0x82805c10
	ctx.lr = 0x828072E0;
	sub_82805C10(ctx, base);
	// addi r3,r1,216
	ctx.r3.s64 = ctx.r1.s64 + 216;
	// bl 0x82e01bf0
	ctx.lr = 0x828072E8;
	sub_82E01BF0(ctx, base);
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// addi r3,r1,1008
	ctx.r3.s64 = ctx.r1.s64 + 1008;
	// addi r4,r11,7740
	ctx.r4.s64 = ctx.r11.s64 + 7740;
	// bl 0x82e02670
	ctx.lr = 0x828072F8;
	sub_82E02670(ctx, base);
	// lis r11,-31890
	ctx.r11.s64 = -2089943040;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r5,r11,-14660
	ctx.r5.s64 = ctx.r11.s64 + -14660;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r4,r1,1008
	ctx.r4.s64 = ctx.r1.s64 + 1008;
	// bl 0x82805c10
	ctx.lr = 0x82807310;
	sub_82805C10(ctx, base);
	// addi r3,r1,1008
	ctx.r3.s64 = ctx.r1.s64 + 1008;
	// bl 0x82e01bf0
	ctx.lr = 0x82807318;
	sub_82E01BF0(ctx, base);
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// addi r3,r1,224
	ctx.r3.s64 = ctx.r1.s64 + 224;
	// addi r4,r11,7720
	ctx.r4.s64 = ctx.r11.s64 + 7720;
	// bl 0x82e02670
	ctx.lr = 0x82807328;
	sub_82E02670(ctx, base);
	// lis r11,-31890
	ctx.r11.s64 = -2089943040;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r11,-14648
	ctx.r5.s64 = ctx.r11.s64 + -14648;
	// addi r4,r1,224
	ctx.r4.s64 = ctx.r1.s64 + 224;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82805c10
	ctx.lr = 0x82807340;
	sub_82805C10(ctx, base);
	// addi r3,r1,224
	ctx.r3.s64 = ctx.r1.s64 + 224;
	// bl 0x82e01bf0
	ctx.lr = 0x82807348;
	sub_82E01BF0(ctx, base);
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// addi r3,r1,1600
	ctx.r3.s64 = ctx.r1.s64 + 1600;
	// addi r4,r11,7696
	ctx.r4.s64 = ctx.r11.s64 + 7696;
	// bl 0x82e02670
	ctx.lr = 0x82807358;
	sub_82E02670(ctx, base);
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r5,r11,-23464
	ctx.r5.s64 = ctx.r11.s64 + -23464;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r4,r1,1600
	ctx.r4.s64 = ctx.r1.s64 + 1600;
	// bl 0x82805c10
	ctx.lr = 0x82807370;
	sub_82805C10(ctx, base);
	// addi r3,r1,1600
	ctx.r3.s64 = ctx.r1.s64 + 1600;
	// bl 0x82e01bf0
	ctx.lr = 0x82807378;
	sub_82E01BF0(ctx, base);
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// addi r3,r1,232
	ctx.r3.s64 = ctx.r1.s64 + 232;
	// addi r4,r11,7684
	ctx.r4.s64 = ctx.r11.s64 + 7684;
	// bl 0x82e02670
	ctx.lr = 0x82807388;
	sub_82E02670(ctx, base);
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r5,r11,-9992
	ctx.r5.s64 = ctx.r11.s64 + -9992;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r4,r1,232
	ctx.r4.s64 = ctx.r1.s64 + 232;
	// bl 0x82805c10
	ctx.lr = 0x828073A0;
	sub_82805C10(ctx, base);
	// addi r3,r1,232
	ctx.r3.s64 = ctx.r1.s64 + 232;
	// bl 0x82e01bf0
	ctx.lr = 0x828073A8;
	sub_82E01BF0(ctx, base);
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// addi r3,r1,1016
	ctx.r3.s64 = ctx.r1.s64 + 1016;
	// addi r4,r11,7668
	ctx.r4.s64 = ctx.r11.s64 + 7668;
	// bl 0x82e02670
	ctx.lr = 0x828073B8;
	sub_82E02670(ctx, base);
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r5,r11,-3712
	ctx.r5.s64 = ctx.r11.s64 + -3712;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r4,r1,1016
	ctx.r4.s64 = ctx.r1.s64 + 1016;
	// bl 0x82805c10
	ctx.lr = 0x828073D0;
	sub_82805C10(ctx, base);
	// addi r3,r1,1016
	ctx.r3.s64 = ctx.r1.s64 + 1016;
	// bl 0x82e01bf0
	ctx.lr = 0x828073D8;
	sub_82E01BF0(ctx, base);
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// addi r3,r1,240
	ctx.r3.s64 = ctx.r1.s64 + 240;
	// addi r4,r11,7648
	ctx.r4.s64 = ctx.r11.s64 + 7648;
	// bl 0x82e02670
	ctx.lr = 0x828073E8;
	sub_82E02670(ctx, base);
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r5,r11,-2768
	ctx.r5.s64 = ctx.r11.s64 + -2768;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r4,r1,240
	ctx.r4.s64 = ctx.r1.s64 + 240;
	// bl 0x82805c10
	ctx.lr = 0x82807400;
	sub_82805C10(ctx, base);
	// addi r3,r1,240
	ctx.r3.s64 = ctx.r1.s64 + 240;
	// bl 0x82e01bf0
	ctx.lr = 0x82807408;
	sub_82E01BF0(ctx, base);
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// addi r3,r1,1408
	ctx.r3.s64 = ctx.r1.s64 + 1408;
	// addi r4,r11,7624
	ctx.r4.s64 = ctx.r11.s64 + 7624;
	// bl 0x82e02670
	ctx.lr = 0x82807418;
	sub_82E02670(ctx, base);
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r5,r11,-292
	ctx.r5.s64 = ctx.r11.s64 + -292;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r4,r1,1408
	ctx.r4.s64 = ctx.r1.s64 + 1408;
	// bl 0x82805c10
	ctx.lr = 0x82807430;
	sub_82805C10(ctx, base);
	// addi r3,r1,1408
	ctx.r3.s64 = ctx.r1.s64 + 1408;
	// bl 0x82e01bf0
	ctx.lr = 0x82807438;
	sub_82E01BF0(ctx, base);
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// addi r3,r1,248
	ctx.r3.s64 = ctx.r1.s64 + 248;
	// addi r4,r11,7604
	ctx.r4.s64 = ctx.r11.s64 + 7604;
	// bl 0x82e02670
	ctx.lr = 0x82807448;
	sub_82E02670(ctx, base);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r5,r11,13500
	ctx.r5.s64 = ctx.r11.s64 + 13500;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r4,r1,248
	ctx.r4.s64 = ctx.r1.s64 + 248;
	// bl 0x82805c10
	ctx.lr = 0x82807460;
	sub_82805C10(ctx, base);
	// addi r3,r1,248
	ctx.r3.s64 = ctx.r1.s64 + 248;
	// bl 0x82e01bf0
	ctx.lr = 0x82807468;
	sub_82E01BF0(ctx, base);
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// addi r3,r1,1024
	ctx.r3.s64 = ctx.r1.s64 + 1024;
	// addi r4,r11,7584
	ctx.r4.s64 = ctx.r11.s64 + 7584;
	// bl 0x82e02670
	ctx.lr = 0x82807478;
	sub_82E02670(ctx, base);
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r11,148
	ctx.r5.s64 = ctx.r11.s64 + 148;
	// addi r4,r1,1024
	ctx.r4.s64 = ctx.r1.s64 + 1024;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82805c10
	ctx.lr = 0x82807490;
	sub_82805C10(ctx, base);
	// addi r3,r1,1024
	ctx.r3.s64 = ctx.r1.s64 + 1024;
	// bl 0x82e01bf0
	ctx.lr = 0x82807498;
	sub_82E01BF0(ctx, base);
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// addi r3,r1,256
	ctx.r3.s64 = ctx.r1.s64 + 256;
	// addi r4,r11,7564
	ctx.r4.s64 = ctx.r11.s64 + 7564;
	// bl 0x82e02670
	ctx.lr = 0x828074A8;
	sub_82E02670(ctx, base);
	// lis r11,-31890
	ctx.r11.s64 = -2089943040;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r5,r11,-10084
	ctx.r5.s64 = ctx.r11.s64 + -10084;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r4,r1,256
	ctx.r4.s64 = ctx.r1.s64 + 256;
	// bl 0x82805c10
	ctx.lr = 0x828074C0;
	sub_82805C10(ctx, base);
	// addi r3,r1,256
	ctx.r3.s64 = ctx.r1.s64 + 256;
	// bl 0x82e01bf0
	ctx.lr = 0x828074C8;
	sub_82E01BF0(ctx, base);
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// addi r3,r1,1784
	ctx.r3.s64 = ctx.r1.s64 + 1784;
	// addi r4,r11,7540
	ctx.r4.s64 = ctx.r11.s64 + 7540;
	// bl 0x82e02670
	ctx.lr = 0x828074D8;
	sub_82E02670(ctx, base);
	// lis r11,-31890
	ctx.r11.s64 = -2089943040;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r5,r11,-9628
	ctx.r5.s64 = ctx.r11.s64 + -9628;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r4,r1,1784
	ctx.r4.s64 = ctx.r1.s64 + 1784;
	// bl 0x82805c10
	ctx.lr = 0x828074F0;
	sub_82805C10(ctx, base);
	// addi r3,r1,1784
	ctx.r3.s64 = ctx.r1.s64 + 1784;
	// bl 0x82e01bf0
	ctx.lr = 0x828074F8;
	sub_82E01BF0(ctx, base);
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// addi r3,r1,264
	ctx.r3.s64 = ctx.r1.s64 + 264;
	// addi r4,r11,7516
	ctx.r4.s64 = ctx.r11.s64 + 7516;
	// bl 0x82e02670
	ctx.lr = 0x82807508;
	sub_82E02670(ctx, base);
	// lis r11,-31890
	ctx.r11.s64 = -2089943040;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r5,r11,-9616
	ctx.r5.s64 = ctx.r11.s64 + -9616;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r4,r1,264
	ctx.r4.s64 = ctx.r1.s64 + 264;
	// bl 0x82805c10
	ctx.lr = 0x82807520;
	sub_82805C10(ctx, base);
	// addi r3,r1,264
	ctx.r3.s64 = ctx.r1.s64 + 264;
	// bl 0x82e01bf0
	ctx.lr = 0x82807528;
	sub_82E01BF0(ctx, base);
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// addi r3,r1,1032
	ctx.r3.s64 = ctx.r1.s64 + 1032;
	// addi r4,r11,7496
	ctx.r4.s64 = ctx.r11.s64 + 7496;
	// bl 0x82e02670
	ctx.lr = 0x82807538;
	sub_82E02670(ctx, base);
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r5,r11,2380
	ctx.r5.s64 = ctx.r11.s64 + 2380;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r4,r1,1032
	ctx.r4.s64 = ctx.r1.s64 + 1032;
	// bl 0x82805c10
	ctx.lr = 0x82807550;
	sub_82805C10(ctx, base);
	// addi r3,r1,1032
	ctx.r3.s64 = ctx.r1.s64 + 1032;
	// bl 0x82e01bf0
	ctx.lr = 0x82807558;
	sub_82E01BF0(ctx, base);
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// addi r3,r1,272
	ctx.r3.s64 = ctx.r1.s64 + 272;
	// addi r4,r11,7472
	ctx.r4.s64 = ctx.r11.s64 + 7472;
	// bl 0x82e02670
	ctx.lr = 0x82807568;
	sub_82E02670(ctx, base);
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r5,r11,3864
	ctx.r5.s64 = ctx.r11.s64 + 3864;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r4,r1,272
	ctx.r4.s64 = ctx.r1.s64 + 272;
	// bl 0x82805c10
	ctx.lr = 0x82807580;
	sub_82805C10(ctx, base);
	// addi r3,r1,272
	ctx.r3.s64 = ctx.r1.s64 + 272;
	// bl 0x82e01bf0
	ctx.lr = 0x82807588;
	sub_82E01BF0(ctx, base);
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// addi r3,r1,1416
	ctx.r3.s64 = ctx.r1.s64 + 1416;
	// addi r4,r11,7448
	ctx.r4.s64 = ctx.r11.s64 + 7448;
	// bl 0x82e02670
	ctx.lr = 0x82807598;
	sub_82E02670(ctx, base);
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r5,r11,5092
	ctx.r5.s64 = ctx.r11.s64 + 5092;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r4,r1,1416
	ctx.r4.s64 = ctx.r1.s64 + 1416;
	// bl 0x82805c10
	ctx.lr = 0x828075B0;
	sub_82805C10(ctx, base);
	// addi r3,r1,1416
	ctx.r3.s64 = ctx.r1.s64 + 1416;
	// bl 0x82e01bf0
	ctx.lr = 0x828075B8;
	sub_82E01BF0(ctx, base);
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// addi r3,r1,280
	ctx.r3.s64 = ctx.r1.s64 + 280;
	// addi r4,r11,7432
	ctx.r4.s64 = ctx.r11.s64 + 7432;
	// bl 0x82e02670
	ctx.lr = 0x828075C8;
	sub_82E02670(ctx, base);
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r11,-17036
	ctx.r5.s64 = ctx.r11.s64 + -17036;
	// addi r4,r1,280
	ctx.r4.s64 = ctx.r1.s64 + 280;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82805c10
	ctx.lr = 0x828075E0;
	sub_82805C10(ctx, base);
	// addi r3,r1,280
	ctx.r3.s64 = ctx.r1.s64 + 280;
	// bl 0x82e01bf0
	ctx.lr = 0x828075E8;
	sub_82E01BF0(ctx, base);
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// addi r3,r1,1040
	ctx.r3.s64 = ctx.r1.s64 + 1040;
	// addi r4,r11,7412
	ctx.r4.s64 = ctx.r11.s64 + 7412;
	// bl 0x82e02670
	ctx.lr = 0x828075F8;
	sub_82E02670(ctx, base);
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r5,r11,2028
	ctx.r5.s64 = ctx.r11.s64 + 2028;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r4,r1,1040
	ctx.r4.s64 = ctx.r1.s64 + 1040;
	// bl 0x82805c10
	ctx.lr = 0x82807610;
	sub_82805C10(ctx, base);
	// addi r3,r1,1040
	ctx.r3.s64 = ctx.r1.s64 + 1040;
	// bl 0x82e01bf0
	ctx.lr = 0x82807618;
	sub_82E01BF0(ctx, base);
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// addi r3,r1,288
	ctx.r3.s64 = ctx.r1.s64 + 288;
	// addi r4,r11,7376
	ctx.r4.s64 = ctx.r11.s64 + 7376;
	// bl 0x82e02670
	ctx.lr = 0x82807628;
	sub_82E02670(ctx, base);
	// lis r11,-31891
	ctx.r11.s64 = -2090008576;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r5,r11,16728
	ctx.r5.s64 = ctx.r11.s64 + 16728;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r4,r1,288
	ctx.r4.s64 = ctx.r1.s64 + 288;
	// bl 0x82805c10
	ctx.lr = 0x82807640;
	sub_82805C10(ctx, base);
	// addi r3,r1,288
	ctx.r3.s64 = ctx.r1.s64 + 288;
	// bl 0x82e01bf0
	ctx.lr = 0x82807648;
	sub_82E01BF0(ctx, base);
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// addi r3,r1,1608
	ctx.r3.s64 = ctx.r1.s64 + 1608;
	// addi r4,r11,7352
	ctx.r4.s64 = ctx.r11.s64 + 7352;
	// bl 0x82e02670
	ctx.lr = 0x82807658;
	sub_82E02670(ctx, base);
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r5,r11,3840
	ctx.r5.s64 = ctx.r11.s64 + 3840;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r4,r1,1608
	ctx.r4.s64 = ctx.r1.s64 + 1608;
	// bl 0x82805c10
	ctx.lr = 0x82807670;
	sub_82805C10(ctx, base);
	// addi r3,r1,1608
	ctx.r3.s64 = ctx.r1.s64 + 1608;
	// bl 0x82e01bf0
	ctx.lr = 0x82807678;
	sub_82E01BF0(ctx, base);
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// addi r3,r1,296
	ctx.r3.s64 = ctx.r1.s64 + 296;
	// addi r4,r11,7328
	ctx.r4.s64 = ctx.r11.s64 + 7328;
	// bl 0x82e02670
	ctx.lr = 0x82807688;
	sub_82E02670(ctx, base);
	// lis r11,-31891
	ctx.r11.s64 = -2090008576;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r5,r11,24604
	ctx.r5.s64 = ctx.r11.s64 + 24604;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r4,r1,296
	ctx.r4.s64 = ctx.r1.s64 + 296;
	// bl 0x82805c10
	ctx.lr = 0x828076A0;
	sub_82805C10(ctx, base);
	// addi r3,r1,296
	ctx.r3.s64 = ctx.r1.s64 + 296;
	// bl 0x82e01bf0
	ctx.lr = 0x828076A8;
	sub_82E01BF0(ctx, base);
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// addi r3,r1,1048
	ctx.r3.s64 = ctx.r1.s64 + 1048;
	// addi r4,r11,7308
	ctx.r4.s64 = ctx.r11.s64 + 7308;
	// bl 0x82e02670
	ctx.lr = 0x828076B8;
	sub_82E02670(ctx, base);
	// lis r11,-31891
	ctx.r11.s64 = -2090008576;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r5,r11,26460
	ctx.r5.s64 = ctx.r11.s64 + 26460;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r4,r1,1048
	ctx.r4.s64 = ctx.r1.s64 + 1048;
	// bl 0x82805c10
	ctx.lr = 0x828076D0;
	sub_82805C10(ctx, base);
	// addi r3,r1,1048
	ctx.r3.s64 = ctx.r1.s64 + 1048;
	// bl 0x82e01bf0
	ctx.lr = 0x828076D8;
	sub_82E01BF0(ctx, base);
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// addi r3,r1,304
	ctx.r3.s64 = ctx.r1.s64 + 304;
	// addi r4,r11,7288
	ctx.r4.s64 = ctx.r11.s64 + 7288;
	// bl 0x82e02670
	ctx.lr = 0x828076E8;
	sub_82E02670(ctx, base);
	// lis r11,-31891
	ctx.r11.s64 = -2090008576;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r11,26472
	ctx.r5.s64 = ctx.r11.s64 + 26472;
	// addi r4,r1,304
	ctx.r4.s64 = ctx.r1.s64 + 304;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82805c10
	ctx.lr = 0x82807700;
	sub_82805C10(ctx, base);
	// addi r3,r1,304
	ctx.r3.s64 = ctx.r1.s64 + 304;
	// bl 0x82e01bf0
	ctx.lr = 0x82807708;
	sub_82E01BF0(ctx, base);
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// addi r3,r1,1424
	ctx.r3.s64 = ctx.r1.s64 + 1424;
	// addi r4,r11,7272
	ctx.r4.s64 = ctx.r11.s64 + 7272;
	// bl 0x82e02670
	ctx.lr = 0x82807718;
	sub_82E02670(ctx, base);
	// lis r11,-31891
	ctx.r11.s64 = -2090008576;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r11,26484
	ctx.r5.s64 = ctx.r11.s64 + 26484;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r1,1424
	ctx.r4.s64 = ctx.r1.s64 + 1424;
	// bl 0x82805c10
	ctx.lr = 0x82807730;
	sub_82805C10(ctx, base);
	// addi r3,r1,1424
	ctx.r3.s64 = ctx.r1.s64 + 1424;
	// bl 0x82e01bf0
	ctx.lr = 0x82807738;
	sub_82E01BF0(ctx, base);
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// addi r3,r1,312
	ctx.r3.s64 = ctx.r1.s64 + 312;
	// addi r4,r11,7248
	ctx.r4.s64 = ctx.r11.s64 + 7248;
	// bl 0x82e02670
	ctx.lr = 0x82807748;
	sub_82E02670(ctx, base);
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r5,r11,560
	ctx.r5.s64 = ctx.r11.s64 + 560;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r4,r1,312
	ctx.r4.s64 = ctx.r1.s64 + 312;
	// bl 0x82805c10
	ctx.lr = 0x82807760;
	sub_82805C10(ctx, base);
	// addi r3,r1,312
	ctx.r3.s64 = ctx.r1.s64 + 312;
	// bl 0x82e01bf0
	ctx.lr = 0x82807768;
	sub_82E01BF0(ctx, base);
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// addi r3,r1,1056
	ctx.r3.s64 = ctx.r1.s64 + 1056;
	// addi r4,r11,7232
	ctx.r4.s64 = ctx.r11.s64 + 7232;
	// bl 0x82e02670
	ctx.lr = 0x82807778;
	sub_82E02670(ctx, base);
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r5,r11,-13516
	ctx.r5.s64 = ctx.r11.s64 + -13516;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r4,r1,1056
	ctx.r4.s64 = ctx.r1.s64 + 1056;
	// bl 0x82805c10
	ctx.lr = 0x82807790;
	sub_82805C10(ctx, base);
	// addi r3,r1,1056
	ctx.r3.s64 = ctx.r1.s64 + 1056;
	// bl 0x82e01bf0
	ctx.lr = 0x82807798;
	sub_82E01BF0(ctx, base);
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// addi r3,r1,320
	ctx.r3.s64 = ctx.r1.s64 + 320;
	// addi r4,r11,7216
	ctx.r4.s64 = ctx.r11.s64 + 7216;
	// bl 0x82e02670
	ctx.lr = 0x828077A8;
	sub_82E02670(ctx, base);
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r5,r11,-9704
	ctx.r5.s64 = ctx.r11.s64 + -9704;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r4,r1,320
	ctx.r4.s64 = ctx.r1.s64 + 320;
	// bl 0x82805c10
	ctx.lr = 0x828077C0;
	sub_82805C10(ctx, base);
	// addi r3,r1,320
	ctx.r3.s64 = ctx.r1.s64 + 320;
	// bl 0x82e01bf0
	ctx.lr = 0x828077C8;
	sub_82E01BF0(ctx, base);
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// addi r3,r1,1704
	ctx.r3.s64 = ctx.r1.s64 + 1704;
	// addi r4,r11,7196
	ctx.r4.s64 = ctx.r11.s64 + 7196;
	// bl 0x82e02670
	ctx.lr = 0x828077D8;
	sub_82E02670(ctx, base);
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r5,r11,-12500
	ctx.r5.s64 = ctx.r11.s64 + -12500;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r4,r1,1704
	ctx.r4.s64 = ctx.r1.s64 + 1704;
	// bl 0x82805c10
	ctx.lr = 0x828077F0;
	sub_82805C10(ctx, base);
	// addi r3,r1,1704
	ctx.r3.s64 = ctx.r1.s64 + 1704;
	// bl 0x82e01bf0
	ctx.lr = 0x828077F8;
	sub_82E01BF0(ctx, base);
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// addi r3,r1,328
	ctx.r3.s64 = ctx.r1.s64 + 328;
	// addi r4,r11,7180
	ctx.r4.s64 = ctx.r11.s64 + 7180;
	// bl 0x82e02670
	ctx.lr = 0x82807808;
	sub_82E02670(ctx, base);
	// lis r11,-31891
	ctx.r11.s64 = -2090008576;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r5,r11,3472
	ctx.r5.s64 = ctx.r11.s64 + 3472;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r4,r1,328
	ctx.r4.s64 = ctx.r1.s64 + 328;
	// bl 0x82805c10
	ctx.lr = 0x82807820;
	sub_82805C10(ctx, base);
	// addi r3,r1,328
	ctx.r3.s64 = ctx.r1.s64 + 328;
	// bl 0x82e01bf0
	ctx.lr = 0x82807828;
	sub_82E01BF0(ctx, base);
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// addi r3,r1,1064
	ctx.r3.s64 = ctx.r1.s64 + 1064;
	// addi r4,r11,7156
	ctx.r4.s64 = ctx.r11.s64 + 7156;
	// bl 0x82e02670
	ctx.lr = 0x82807838;
	sub_82E02670(ctx, base);
	// lis r11,-31891
	ctx.r11.s64 = -2090008576;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r11,5412
	ctx.r5.s64 = ctx.r11.s64 + 5412;
	// addi r4,r1,1064
	ctx.r4.s64 = ctx.r1.s64 + 1064;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82805c10
	ctx.lr = 0x82807850;
	sub_82805C10(ctx, base);
	// addi r3,r1,1064
	ctx.r3.s64 = ctx.r1.s64 + 1064;
	// bl 0x82e01bf0
	ctx.lr = 0x82807858;
	sub_82E01BF0(ctx, base);
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// addi r3,r1,336
	ctx.r3.s64 = ctx.r1.s64 + 336;
	// addi r4,r11,7136
	ctx.r4.s64 = ctx.r11.s64 + 7136;
	// bl 0x82e02670
	ctx.lr = 0x82807868;
	sub_82E02670(ctx, base);
	// lis r11,-31891
	ctx.r11.s64 = -2090008576;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r5,r11,8320
	ctx.r5.s64 = ctx.r11.s64 + 8320;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r4,r1,336
	ctx.r4.s64 = ctx.r1.s64 + 336;
	// bl 0x82805c10
	ctx.lr = 0x82807880;
	sub_82805C10(ctx, base);
	// addi r3,r1,336
	ctx.r3.s64 = ctx.r1.s64 + 336;
	// bl 0x82e01bf0
	ctx.lr = 0x82807888;
	sub_82E01BF0(ctx, base);
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// addi r3,r1,1432
	ctx.r3.s64 = ctx.r1.s64 + 1432;
	// addi r4,r11,7116
	ctx.r4.s64 = ctx.r11.s64 + 7116;
	// bl 0x82e02670
	ctx.lr = 0x82807898;
	sub_82E02670(ctx, base);
	// lis r11,-31891
	ctx.r11.s64 = -2090008576;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r5,r11,6424
	ctx.r5.s64 = ctx.r11.s64 + 6424;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r4,r1,1432
	ctx.r4.s64 = ctx.r1.s64 + 1432;
	// bl 0x82805c10
	ctx.lr = 0x828078B0;
	sub_82805C10(ctx, base);
	// addi r3,r1,1432
	ctx.r3.s64 = ctx.r1.s64 + 1432;
	// bl 0x82e01bf0
	ctx.lr = 0x828078B8;
	sub_82E01BF0(ctx, base);
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// addi r3,r1,344
	ctx.r3.s64 = ctx.r1.s64 + 344;
	// addi r4,r11,7092
	ctx.r4.s64 = ctx.r11.s64 + 7092;
	// bl 0x82e02670
	ctx.lr = 0x828078C8;
	sub_82E02670(ctx, base);
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r5,r11,-11380
	ctx.r5.s64 = ctx.r11.s64 + -11380;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r4,r1,344
	ctx.r4.s64 = ctx.r1.s64 + 344;
	// bl 0x82805c10
	ctx.lr = 0x828078E0;
	sub_82805C10(ctx, base);
	// addi r3,r1,344
	ctx.r3.s64 = ctx.r1.s64 + 344;
	// bl 0x82e01bf0
	ctx.lr = 0x828078E8;
	sub_82E01BF0(ctx, base);
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// addi r3,r1,1072
	ctx.r3.s64 = ctx.r1.s64 + 1072;
	// addi r4,r11,7072
	ctx.r4.s64 = ctx.r11.s64 + 7072;
	// bl 0x82e02670
	ctx.lr = 0x828078F8;
	sub_82E02670(ctx, base);
	// lis r11,-31891
	ctx.r11.s64 = -2090008576;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r5,r11,3060
	ctx.r5.s64 = ctx.r11.s64 + 3060;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r4,r1,1072
	ctx.r4.s64 = ctx.r1.s64 + 1072;
	// bl 0x82805c10
	ctx.lr = 0x82807910;
	sub_82805C10(ctx, base);
	// addi r3,r1,1072
	ctx.r3.s64 = ctx.r1.s64 + 1072;
	// bl 0x82e01bf0
	ctx.lr = 0x82807918;
	sub_82E01BF0(ctx, base);
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// addi r3,r1,352
	ctx.r3.s64 = ctx.r1.s64 + 352;
	// addi r4,r11,7052
	ctx.r4.s64 = ctx.r11.s64 + 7052;
	// bl 0x82e02670
	ctx.lr = 0x82807928;
	sub_82E02670(ctx, base);
	// lis r11,-31891
	ctx.r11.s64 = -2090008576;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r5,r11,4356
	ctx.r5.s64 = ctx.r11.s64 + 4356;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r4,r1,352
	ctx.r4.s64 = ctx.r1.s64 + 352;
	// bl 0x82805c10
	ctx.lr = 0x82807940;
	sub_82805C10(ctx, base);
	// addi r3,r1,352
	ctx.r3.s64 = ctx.r1.s64 + 352;
	// bl 0x82e01bf0
	ctx.lr = 0x82807948;
	sub_82E01BF0(ctx, base);
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// addi r3,r1,1616
	ctx.r3.s64 = ctx.r1.s64 + 1616;
	// addi r4,r11,7036
	ctx.r4.s64 = ctx.r11.s64 + 7036;
	// bl 0x82e02670
	ctx.lr = 0x82807958;
	sub_82E02670(ctx, base);
	// lis r11,-31891
	ctx.r11.s64 = -2090008576;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r5,r11,2588
	ctx.r5.s64 = ctx.r11.s64 + 2588;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r4,r1,1616
	ctx.r4.s64 = ctx.r1.s64 + 1616;
	// bl 0x82805c10
	ctx.lr = 0x82807970;
	sub_82805C10(ctx, base);
	// addi r3,r1,1616
	ctx.r3.s64 = ctx.r1.s64 + 1616;
	// bl 0x82e01bf0
	ctx.lr = 0x82807978;
	sub_82E01BF0(ctx, base);
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// addi r3,r1,360
	ctx.r3.s64 = ctx.r1.s64 + 360;
	// addi r4,r11,7016
	ctx.r4.s64 = ctx.r11.s64 + 7016;
	// bl 0x82e02670
	ctx.lr = 0x82807988;
	sub_82E02670(ctx, base);
	// lis r11,-31891
	ctx.r11.s64 = -2090008576;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r11,10056
	ctx.r5.s64 = ctx.r11.s64 + 10056;
	// addi r4,r1,360
	ctx.r4.s64 = ctx.r1.s64 + 360;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82805c10
	ctx.lr = 0x828079A0;
	sub_82805C10(ctx, base);
	// addi r3,r1,360
	ctx.r3.s64 = ctx.r1.s64 + 360;
	// bl 0x82e01bf0
	ctx.lr = 0x828079A8;
	sub_82E01BF0(ctx, base);
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// addi r3,r1,1080
	ctx.r3.s64 = ctx.r1.s64 + 1080;
	// addi r4,r11,7000
	ctx.r4.s64 = ctx.r11.s64 + 7000;
	// bl 0x82e02670
	ctx.lr = 0x828079B8;
	sub_82E02670(ctx, base);
	// lis r11,-31891
	ctx.r11.s64 = -2090008576;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r5,r11,9372
	ctx.r5.s64 = ctx.r11.s64 + 9372;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r4,r1,1080
	ctx.r4.s64 = ctx.r1.s64 + 1080;
	// bl 0x82805c10
	ctx.lr = 0x828079D0;
	sub_82805C10(ctx, base);
	// addi r3,r1,1080
	ctx.r3.s64 = ctx.r1.s64 + 1080;
	// bl 0x82e01bf0
	ctx.lr = 0x828079D8;
	sub_82E01BF0(ctx, base);
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// addi r3,r1,368
	ctx.r3.s64 = ctx.r1.s64 + 368;
	// addi r4,r11,6980
	ctx.r4.s64 = ctx.r11.s64 + 6980;
	// bl 0x82e02670
	ctx.lr = 0x828079E8;
	sub_82E02670(ctx, base);
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r5,r11,-10952
	ctx.r5.s64 = ctx.r11.s64 + -10952;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r4,r1,368
	ctx.r4.s64 = ctx.r1.s64 + 368;
	// bl 0x82805c10
	ctx.lr = 0x82807A00;
	sub_82805C10(ctx, base);
	// addi r3,r1,368
	ctx.r3.s64 = ctx.r1.s64 + 368;
	// bl 0x82e01bf0
	ctx.lr = 0x82807A08;
	sub_82E01BF0(ctx, base);
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// addi r3,r1,1440
	ctx.r3.s64 = ctx.r1.s64 + 1440;
	// addi r4,r11,6964
	ctx.r4.s64 = ctx.r11.s64 + 6964;
	// bl 0x82e02670
	ctx.lr = 0x82807A18;
	sub_82E02670(ctx, base);
	// lis r11,-31891
	ctx.r11.s64 = -2090008576;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r5,r11,27604
	ctx.r5.s64 = ctx.r11.s64 + 27604;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r4,r1,1440
	ctx.r4.s64 = ctx.r1.s64 + 1440;
	// bl 0x82805c10
	ctx.lr = 0x82807A30;
	sub_82805C10(ctx, base);
	// addi r3,r1,1440
	ctx.r3.s64 = ctx.r1.s64 + 1440;
	// bl 0x82e01bf0
	ctx.lr = 0x82807A38;
	sub_82E01BF0(ctx, base);
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// addi r3,r1,376
	ctx.r3.s64 = ctx.r1.s64 + 376;
	// addi r4,r11,6952
	ctx.r4.s64 = ctx.r11.s64 + 6952;
	// bl 0x82e02670
	ctx.lr = 0x82807A48;
	sub_82E02670(ctx, base);
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r5,r11,29236
	ctx.r5.s64 = ctx.r11.s64 + 29236;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r4,r1,376
	ctx.r4.s64 = ctx.r1.s64 + 376;
	// bl 0x82805c10
	ctx.lr = 0x82807A60;
	sub_82805C10(ctx, base);
	// addi r3,r1,376
	ctx.r3.s64 = ctx.r1.s64 + 376;
	// bl 0x82e01bf0
	ctx.lr = 0x82807A68;
	sub_82E01BF0(ctx, base);
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// addi r3,r1,1088
	ctx.r3.s64 = ctx.r1.s64 + 1088;
	// addi r4,r11,6940
	ctx.r4.s64 = ctx.r11.s64 + 6940;
	// bl 0x82e02670
	ctx.lr = 0x82807A78;
	sub_82E02670(ctx, base);
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r5,r11,28896
	ctx.r5.s64 = ctx.r11.s64 + 28896;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r4,r1,1088
	ctx.r4.s64 = ctx.r1.s64 + 1088;
	// bl 0x82805c10
	ctx.lr = 0x82807A90;
	sub_82805C10(ctx, base);
	// addi r3,r1,1088
	ctx.r3.s64 = ctx.r1.s64 + 1088;
	// bl 0x82e01bf0
	ctx.lr = 0x82807A98;
	sub_82E01BF0(ctx, base);
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// addi r3,r1,384
	ctx.r3.s64 = ctx.r1.s64 + 384;
	// addi r4,r11,6920
	ctx.r4.s64 = ctx.r11.s64 + 6920;
	// bl 0x82e02670
	ctx.lr = 0x82807AA8;
	sub_82E02670(ctx, base);
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r5,r11,29600
	ctx.r5.s64 = ctx.r11.s64 + 29600;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r4,r1,384
	ctx.r4.s64 = ctx.r1.s64 + 384;
	// bl 0x82805c10
	ctx.lr = 0x82807AC0;
	sub_82805C10(ctx, base);
	// addi r3,r1,384
	ctx.r3.s64 = ctx.r1.s64 + 384;
	// bl 0x82e01bf0
	ctx.lr = 0x82807AC8;
	sub_82E01BF0(ctx, base);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// addi r3,r1,1752
	ctx.r3.s64 = ctx.r1.s64 + 1752;
	// addi r4,r11,-8428
	ctx.r4.s64 = ctx.r11.s64 + -8428;
	// bl 0x82e02670
	ctx.lr = 0x82807AD8;
	sub_82E02670(ctx, base);
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r11,-19920
	ctx.r5.s64 = ctx.r11.s64 + -19920;
	// addi r4,r1,1752
	ctx.r4.s64 = ctx.r1.s64 + 1752;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82805c10
	ctx.lr = 0x82807AF0;
	sub_82805C10(ctx, base);
	// addi r3,r1,1752
	ctx.r3.s64 = ctx.r1.s64 + 1752;
	// bl 0x82e01bf0
	ctx.lr = 0x82807AF8;
	sub_82E01BF0(ctx, base);
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// addi r3,r1,392
	ctx.r3.s64 = ctx.r1.s64 + 392;
	// addi r4,r11,6908
	ctx.r4.s64 = ctx.r11.s64 + 6908;
	// bl 0x82e02670
	ctx.lr = 0x82807B08;
	sub_82E02670(ctx, base);
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r5,r11,30300
	ctx.r5.s64 = ctx.r11.s64 + 30300;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r4,r1,392
	ctx.r4.s64 = ctx.r1.s64 + 392;
	// bl 0x82805c10
	ctx.lr = 0x82807B20;
	sub_82805C10(ctx, base);
	// addi r3,r1,392
	ctx.r3.s64 = ctx.r1.s64 + 392;
	// bl 0x82e01bf0
	ctx.lr = 0x82807B28;
	sub_82E01BF0(ctx, base);
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// addi r3,r1,1096
	ctx.r3.s64 = ctx.r1.s64 + 1096;
	// addi r4,r11,6892
	ctx.r4.s64 = ctx.r11.s64 + 6892;
	// bl 0x82e02670
	ctx.lr = 0x82807B38;
	sub_82E02670(ctx, base);
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r5,r11,-28828
	ctx.r5.s64 = ctx.r11.s64 + -28828;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r4,r1,1096
	ctx.r4.s64 = ctx.r1.s64 + 1096;
	// bl 0x82805c10
	ctx.lr = 0x82807B50;
	sub_82805C10(ctx, base);
	// addi r3,r1,1096
	ctx.r3.s64 = ctx.r1.s64 + 1096;
	// bl 0x82e01bf0
	ctx.lr = 0x82807B58;
	sub_82E01BF0(ctx, base);
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// addi r3,r1,400
	ctx.r3.s64 = ctx.r1.s64 + 400;
	// addi r4,r11,6884
	ctx.r4.s64 = ctx.r11.s64 + 6884;
	// bl 0x82e02670
	ctx.lr = 0x82807B68;
	sub_82E02670(ctx, base);
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r5,r11,30312
	ctx.r5.s64 = ctx.r11.s64 + 30312;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r4,r1,400
	ctx.r4.s64 = ctx.r1.s64 + 400;
	// bl 0x82805c10
	ctx.lr = 0x82807B80;
	sub_82805C10(ctx, base);
	// addi r3,r1,400
	ctx.r3.s64 = ctx.r1.s64 + 400;
	// bl 0x82e01bf0
	ctx.lr = 0x82807B88;
	sub_82E01BF0(ctx, base);
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// addi r3,r1,1448
	ctx.r3.s64 = ctx.r1.s64 + 1448;
	// addi r4,r11,6872
	ctx.r4.s64 = ctx.r11.s64 + 6872;
	// bl 0x82e02670
	ctx.lr = 0x82807B98;
	sub_82E02670(ctx, base);
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r5,r11,-25236
	ctx.r5.s64 = ctx.r11.s64 + -25236;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r4,r1,1448
	ctx.r4.s64 = ctx.r1.s64 + 1448;
	// bl 0x82805c10
	ctx.lr = 0x82807BB0;
	sub_82805C10(ctx, base);
	// addi r3,r1,1448
	ctx.r3.s64 = ctx.r1.s64 + 1448;
	// bl 0x82e01bf0
	ctx.lr = 0x82807BB8;
	sub_82E01BF0(ctx, base);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// addi r3,r1,408
	ctx.r3.s64 = ctx.r1.s64 + 408;
	// addi r4,r11,-12148
	ctx.r4.s64 = ctx.r11.s64 + -12148;
	// bl 0x82e02670
	ctx.lr = 0x82807BC8;
	sub_82E02670(ctx, base);
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r5,r11,-29592
	ctx.r5.s64 = ctx.r11.s64 + -29592;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r4,r1,408
	ctx.r4.s64 = ctx.r1.s64 + 408;
	// bl 0x82805c10
	ctx.lr = 0x82807BE0;
	sub_82805C10(ctx, base);
	// addi r3,r1,408
	ctx.r3.s64 = ctx.r1.s64 + 408;
	// bl 0x82e01bf0
	ctx.lr = 0x82807BE8;
	sub_82E01BF0(ctx, base);
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// addi r3,r1,1104
	ctx.r3.s64 = ctx.r1.s64 + 1104;
	// addi r4,r11,6856
	ctx.r4.s64 = ctx.r11.s64 + 6856;
	// bl 0x82e02670
	ctx.lr = 0x82807BF8;
	sub_82E02670(ctx, base);
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r11,-26188
	ctx.r5.s64 = ctx.r11.s64 + -26188;
	// addi r4,r1,1104
	ctx.r4.s64 = ctx.r1.s64 + 1104;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82805c10
	ctx.lr = 0x82807C10;
	sub_82805C10(ctx, base);
	// addi r3,r1,1104
	ctx.r3.s64 = ctx.r1.s64 + 1104;
	// bl 0x82e01bf0
	ctx.lr = 0x82807C18;
	sub_82E01BF0(ctx, base);
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// addi r3,r1,416
	ctx.r3.s64 = ctx.r1.s64 + 416;
	// addi r4,r11,6836
	ctx.r4.s64 = ctx.r11.s64 + 6836;
	// bl 0x82e02670
	ctx.lr = 0x82807C28;
	sub_82E02670(ctx, base);
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r11,-26176
	ctx.r5.s64 = ctx.r11.s64 + -26176;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r1,416
	ctx.r4.s64 = ctx.r1.s64 + 416;
	// bl 0x82805c10
	ctx.lr = 0x82807C40;
	sub_82805C10(ctx, base);
	// addi r3,r1,416
	ctx.r3.s64 = ctx.r1.s64 + 416;
	// bl 0x82e01bf0
	ctx.lr = 0x82807C48;
	sub_82E01BF0(ctx, base);
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// addi r3,r1,1624
	ctx.r3.s64 = ctx.r1.s64 + 1624;
	// addi r4,r11,6808
	ctx.r4.s64 = ctx.r11.s64 + 6808;
	// bl 0x82e02670
	ctx.lr = 0x82807C58;
	sub_82E02670(ctx, base);
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r5,r11,-22860
	ctx.r5.s64 = ctx.r11.s64 + -22860;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r4,r1,1624
	ctx.r4.s64 = ctx.r1.s64 + 1624;
	// bl 0x82805c10
	ctx.lr = 0x82807C70;
	sub_82805C10(ctx, base);
	// addi r3,r1,1624
	ctx.r3.s64 = ctx.r1.s64 + 1624;
	// bl 0x82e01bf0
	ctx.lr = 0x82807C78;
	sub_82E01BF0(ctx, base);
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// addi r3,r1,424
	ctx.r3.s64 = ctx.r1.s64 + 424;
	// addi r4,r11,6788
	ctx.r4.s64 = ctx.r11.s64 + 6788;
	// bl 0x82e02670
	ctx.lr = 0x82807C88;
	sub_82E02670(ctx, base);
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r5,r11,-16808
	ctx.r5.s64 = ctx.r11.s64 + -16808;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r4,r1,424
	ctx.r4.s64 = ctx.r1.s64 + 424;
	// bl 0x82805c10
	ctx.lr = 0x82807CA0;
	sub_82805C10(ctx, base);
	// addi r3,r1,424
	ctx.r3.s64 = ctx.r1.s64 + 424;
	// bl 0x82e01bf0
	ctx.lr = 0x82807CA8;
	sub_82E01BF0(ctx, base);
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// addi r3,r1,1112
	ctx.r3.s64 = ctx.r1.s64 + 1112;
	// addi r4,r11,6764
	ctx.r4.s64 = ctx.r11.s64 + 6764;
	// bl 0x82e02670
	ctx.lr = 0x82807CB8;
	sub_82E02670(ctx, base);
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r5,r11,-20276
	ctx.r5.s64 = ctx.r11.s64 + -20276;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r4,r1,1112
	ctx.r4.s64 = ctx.r1.s64 + 1112;
	// bl 0x82805c10
	ctx.lr = 0x82807CD0;
	sub_82805C10(ctx, base);
	// addi r3,r1,1112
	ctx.r3.s64 = ctx.r1.s64 + 1112;
	// bl 0x82e01bf0
	ctx.lr = 0x82807CD8;
	sub_82E01BF0(ctx, base);
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// addi r3,r1,432
	ctx.r3.s64 = ctx.r1.s64 + 432;
	// addi r4,r11,6752
	ctx.r4.s64 = ctx.r11.s64 + 6752;
	// bl 0x82e02670
	ctx.lr = 0x82807CE8;
	sub_82E02670(ctx, base);
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r5,r11,-23324
	ctx.r5.s64 = ctx.r11.s64 + -23324;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r4,r1,432
	ctx.r4.s64 = ctx.r1.s64 + 432;
	// bl 0x82805c10
	ctx.lr = 0x82807D00;
	sub_82805C10(ctx, base);
	// addi r3,r1,432
	ctx.r3.s64 = ctx.r1.s64 + 432;
	// bl 0x82e01bf0
	ctx.lr = 0x82807D08;
	sub_82E01BF0(ctx, base);
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// addi r3,r1,1456
	ctx.r3.s64 = ctx.r1.s64 + 1456;
	// addi r4,r11,6740
	ctx.r4.s64 = ctx.r11.s64 + 6740;
	// bl 0x82e02670
	ctx.lr = 0x82807D18;
	sub_82E02670(ctx, base);
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r5,r11,-18316
	ctx.r5.s64 = ctx.r11.s64 + -18316;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r4,r1,1456
	ctx.r4.s64 = ctx.r1.s64 + 1456;
	// bl 0x82805c10
	ctx.lr = 0x82807D30;
	sub_82805C10(ctx, base);
	// addi r3,r1,1456
	ctx.r3.s64 = ctx.r1.s64 + 1456;
	// bl 0x82e01bf0
	ctx.lr = 0x82807D38;
	sub_82E01BF0(ctx, base);
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// addi r3,r1,440
	ctx.r3.s64 = ctx.r1.s64 + 440;
	// addi r4,r11,6728
	ctx.r4.s64 = ctx.r11.s64 + 6728;
	// bl 0x82e02670
	ctx.lr = 0x82807D48;
	sub_82E02670(ctx, base);
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r11,-21408
	ctx.r5.s64 = ctx.r11.s64 + -21408;
	// addi r4,r1,440
	ctx.r4.s64 = ctx.r1.s64 + 440;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82805c10
	ctx.lr = 0x82807D60;
	sub_82805C10(ctx, base);
	// addi r3,r1,440
	ctx.r3.s64 = ctx.r1.s64 + 440;
	// bl 0x82e01bf0
	ctx.lr = 0x82807D68;
	sub_82E01BF0(ctx, base);
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// addi r3,r1,1120
	ctx.r3.s64 = ctx.r1.s64 + 1120;
	// addi r4,r11,6712
	ctx.r4.s64 = ctx.r11.s64 + 6712;
	// bl 0x82e02670
	ctx.lr = 0x82807D78;
	sub_82E02670(ctx, base);
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r5,r11,-19592
	ctx.r5.s64 = ctx.r11.s64 + -19592;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r4,r1,1120
	ctx.r4.s64 = ctx.r1.s64 + 1120;
	// bl 0x82805c10
	ctx.lr = 0x82807D90;
	sub_82805C10(ctx, base);
	// addi r3,r1,1120
	ctx.r3.s64 = ctx.r1.s64 + 1120;
	// bl 0x82e01bf0
	ctx.lr = 0x82807D98;
	sub_82E01BF0(ctx, base);
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// addi r3,r1,448
	ctx.r3.s64 = ctx.r1.s64 + 448;
	// addi r4,r11,6684
	ctx.r4.s64 = ctx.r11.s64 + 6684;
	// bl 0x82e02670
	ctx.lr = 0x82807DA8;
	sub_82E02670(ctx, base);
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r5,r11,-32276
	ctx.r5.s64 = ctx.r11.s64 + -32276;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r4,r1,448
	ctx.r4.s64 = ctx.r1.s64 + 448;
	// bl 0x82805c10
	ctx.lr = 0x82807DC0;
	sub_82805C10(ctx, base);
	// addi r3,r1,448
	ctx.r3.s64 = ctx.r1.s64 + 448;
	// bl 0x82e01bf0
	ctx.lr = 0x82807DC8;
	sub_82E01BF0(ctx, base);
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// addi r3,r1,1712
	ctx.r3.s64 = ctx.r1.s64 + 1712;
	// addi r4,r11,6668
	ctx.r4.s64 = ctx.r11.s64 + 6668;
	// bl 0x82e02670
	ctx.lr = 0x82807DD8;
	sub_82E02670(ctx, base);
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r5,r11,-27148
	ctx.r5.s64 = ctx.r11.s64 + -27148;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r4,r1,1712
	ctx.r4.s64 = ctx.r1.s64 + 1712;
	// bl 0x82805c10
	ctx.lr = 0x82807DF0;
	sub_82805C10(ctx, base);
	// addi r3,r1,1712
	ctx.r3.s64 = ctx.r1.s64 + 1712;
	// bl 0x82e01bf0
	ctx.lr = 0x82807DF8;
	sub_82E01BF0(ctx, base);
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// addi r3,r1,456
	ctx.r3.s64 = ctx.r1.s64 + 456;
	// addi r4,r11,6636
	ctx.r4.s64 = ctx.r11.s64 + 6636;
	// bl 0x82e02670
	ctx.lr = 0x82807E08;
	sub_82E02670(ctx, base);
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r5,r11,-30072
	ctx.r5.s64 = ctx.r11.s64 + -30072;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r4,r1,456
	ctx.r4.s64 = ctx.r1.s64 + 456;
	// bl 0x82805c10
	ctx.lr = 0x82807E20;
	sub_82805C10(ctx, base);
	// addi r3,r1,456
	ctx.r3.s64 = ctx.r1.s64 + 456;
	// bl 0x82e01bf0
	ctx.lr = 0x82807E28;
	sub_82E01BF0(ctx, base);
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// addi r3,r1,1128
	ctx.r3.s64 = ctx.r1.s64 + 1128;
	// addi r4,r11,6612
	ctx.r4.s64 = ctx.r11.s64 + 6612;
	// bl 0x82e02670
	ctx.lr = 0x82807E38;
	sub_82E02670(ctx, base);
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r5,r11,-22260
	ctx.r5.s64 = ctx.r11.s64 + -22260;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r4,r1,1128
	ctx.r4.s64 = ctx.r1.s64 + 1128;
	// bl 0x82805c10
	ctx.lr = 0x82807E50;
	sub_82805C10(ctx, base);
	// addi r3,r1,1128
	ctx.r3.s64 = ctx.r1.s64 + 1128;
	// bl 0x82e01bf0
	ctx.lr = 0x82807E58;
	sub_82E01BF0(ctx, base);
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// addi r3,r1,464
	ctx.r3.s64 = ctx.r1.s64 + 464;
	// addi r4,r11,6592
	ctx.r4.s64 = ctx.r11.s64 + 6592;
	// bl 0x82e02670
	ctx.lr = 0x82807E68;
	sub_82E02670(ctx, base);
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r5,r11,-30772
	ctx.r5.s64 = ctx.r11.s64 + -30772;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r4,r1,464
	ctx.r4.s64 = ctx.r1.s64 + 464;
	// bl 0x82805c10
	ctx.lr = 0x82807E80;
	sub_82805C10(ctx, base);
	// addi r3,r1,464
	ctx.r3.s64 = ctx.r1.s64 + 464;
	// bl 0x82e01bf0
	ctx.lr = 0x82807E88;
	sub_82E01BF0(ctx, base);
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// addi r3,r1,1464
	ctx.r3.s64 = ctx.r1.s64 + 1464;
	// addi r4,r11,6572
	ctx.r4.s64 = ctx.r11.s64 + 6572;
	// bl 0x82e02670
	ctx.lr = 0x82807E98;
	sub_82E02670(ctx, base);
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r11,-31864
	ctx.r5.s64 = ctx.r11.s64 + -31864;
	// addi r4,r1,1464
	ctx.r4.s64 = ctx.r1.s64 + 1464;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82805c10
	ctx.lr = 0x82807EB0;
	sub_82805C10(ctx, base);
	// addi r3,r1,1464
	ctx.r3.s64 = ctx.r1.s64 + 1464;
	// bl 0x82e01bf0
	ctx.lr = 0x82807EB8;
	sub_82E01BF0(ctx, base);
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// addi r3,r1,472
	ctx.r3.s64 = ctx.r1.s64 + 472;
	// addi r4,r11,6560
	ctx.r4.s64 = ctx.r11.s64 + 6560;
	// bl 0x82e02670
	ctx.lr = 0x82807EC8;
	sub_82E02670(ctx, base);
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r5,r11,-24756
	ctx.r5.s64 = ctx.r11.s64 + -24756;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r4,r1,472
	ctx.r4.s64 = ctx.r1.s64 + 472;
	// bl 0x82805c10
	ctx.lr = 0x82807EE0;
	sub_82805C10(ctx, base);
	// addi r3,r1,472
	ctx.r3.s64 = ctx.r1.s64 + 472;
	// bl 0x82e01bf0
	ctx.lr = 0x82807EE8;
	sub_82E01BF0(ctx, base);
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// addi r3,r1,1136
	ctx.r3.s64 = ctx.r1.s64 + 1136;
	// addi r4,r11,6540
	ctx.r4.s64 = ctx.r11.s64 + 6540;
	// bl 0x82e02670
	ctx.lr = 0x82807EF8;
	sub_82E02670(ctx, base);
	// lis r11,-31888
	ctx.r11.s64 = -2089811968;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r5,r11,-26184
	ctx.r5.s64 = ctx.r11.s64 + -26184;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r4,r1,1136
	ctx.r4.s64 = ctx.r1.s64 + 1136;
	// bl 0x82805c10
	ctx.lr = 0x82807F10;
	sub_82805C10(ctx, base);
	// addi r3,r1,1136
	ctx.r3.s64 = ctx.r1.s64 + 1136;
	// bl 0x82e01bf0
	ctx.lr = 0x82807F18;
	sub_82E01BF0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x825be1a8
	ctx.lr = 0x82807F20;
	sub_825BE1A8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x825e9c30
	ctx.lr = 0x82807F28;
	sub_825E9C30(ctx, base);
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// addi r3,r1,480
	ctx.r3.s64 = ctx.r1.s64 + 480;
	// addi r4,r11,6512
	ctx.r4.s64 = ctx.r11.s64 + 6512;
	// bl 0x82e02670
	ctx.lr = 0x82807F38;
	sub_82E02670(ctx, base);
	// lis r11,-31890
	ctx.r11.s64 = -2089943040;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r5,r11,-32040
	ctx.r5.s64 = ctx.r11.s64 + -32040;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r4,r1,480
	ctx.r4.s64 = ctx.r1.s64 + 480;
	// bl 0x82805c10
	ctx.lr = 0x82807F50;
	sub_82805C10(ctx, base);
	// addi r3,r1,480
	ctx.r3.s64 = ctx.r1.s64 + 480;
	// bl 0x82e01bf0
	ctx.lr = 0x82807F58;
	sub_82E01BF0(ctx, base);
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// addi r3,r1,1632
	ctx.r3.s64 = ctx.r1.s64 + 1632;
	// addi r4,r11,6496
	ctx.r4.s64 = ctx.r11.s64 + 6496;
	// bl 0x82e02670
	ctx.lr = 0x82807F68;
	sub_82E02670(ctx, base);
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r5,r11,25612
	ctx.r5.s64 = ctx.r11.s64 + 25612;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r4,r1,1632
	ctx.r4.s64 = ctx.r1.s64 + 1632;
	// bl 0x82805c10
	ctx.lr = 0x82807F80;
	sub_82805C10(ctx, base);
	// addi r3,r1,1632
	ctx.r3.s64 = ctx.r1.s64 + 1632;
	// bl 0x82e01bf0
	ctx.lr = 0x82807F88;
	sub_82E01BF0(ctx, base);
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// addi r3,r1,488
	ctx.r3.s64 = ctx.r1.s64 + 488;
	// addi r4,r11,6476
	ctx.r4.s64 = ctx.r11.s64 + 6476;
	// bl 0x82e02670
	ctx.lr = 0x82807F98;
	sub_82E02670(ctx, base);
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r5,r11,25716
	ctx.r5.s64 = ctx.r11.s64 + 25716;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r4,r1,488
	ctx.r4.s64 = ctx.r1.s64 + 488;
	// bl 0x82805c10
	ctx.lr = 0x82807FB0;
	sub_82805C10(ctx, base);
	// addi r3,r1,488
	ctx.r3.s64 = ctx.r1.s64 + 488;
	// bl 0x82e01bf0
	ctx.lr = 0x82807FB8;
	sub_82E01BF0(ctx, base);
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r1,1144
	ctx.r3.s64 = ctx.r1.s64 + 1144;
	// addi r4,r11,-17864
	ctx.r4.s64 = ctx.r11.s64 + -17864;
	// bl 0x82e02670
	ctx.lr = 0x82807FC8;
	sub_82E02670(ctx, base);
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r11,-17708
	ctx.r5.s64 = ctx.r11.s64 + -17708;
	// addi r4,r1,1144
	ctx.r4.s64 = ctx.r1.s64 + 1144;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82805c10
	ctx.lr = 0x82807FE0;
	sub_82805C10(ctx, base);
	// addi r3,r1,1144
	ctx.r3.s64 = ctx.r1.s64 + 1144;
	// bl 0x82e01bf0
	ctx.lr = 0x82807FE8;
	sub_82E01BF0(ctx, base);
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// addi r3,r1,496
	ctx.r3.s64 = ctx.r1.s64 + 496;
	// addi r4,r11,6464
	ctx.r4.s64 = ctx.r11.s64 + 6464;
	// bl 0x82e02670
	ctx.lr = 0x82807FF8;
	sub_82E02670(ctx, base);
	// li r6,0
	ctx.r6.s64 = 0;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r5,r11,7180
	ctx.r5.s64 = ctx.r11.s64 + 7180;
	// addi r4,r1,496
	ctx.r4.s64 = ctx.r1.s64 + 496;
	// bl 0x82805c10
	ctx.lr = 0x82808010;
	sub_82805C10(ctx, base);
	// addi r3,r1,496
	ctx.r3.s64 = ctx.r1.s64 + 496;
	// bl 0x82e01bf0
	ctx.lr = 0x82808018;
	sub_82E01BF0(ctx, base);
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// addi r3,r1,1472
	ctx.r3.s64 = ctx.r1.s64 + 1472;
	// addi r4,r11,6448
	ctx.r4.s64 = ctx.r11.s64 + 6448;
	// bl 0x82e02670
	ctx.lr = 0x82808028;
	sub_82E02670(ctx, base);
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r5,r11,-19312
	ctx.r5.s64 = ctx.r11.s64 + -19312;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r4,r1,1472
	ctx.r4.s64 = ctx.r1.s64 + 1472;
	// bl 0x82805c10
	ctx.lr = 0x82808040;
	sub_82805C10(ctx, base);
	// addi r3,r1,1472
	ctx.r3.s64 = ctx.r1.s64 + 1472;
	// bl 0x82e01bf0
	ctx.lr = 0x82808048;
	sub_82E01BF0(ctx, base);
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r1,504
	ctx.r3.s64 = ctx.r1.s64 + 504;
	// addi r4,r11,20596
	ctx.r4.s64 = ctx.r11.s64 + 20596;
	// bl 0x82e02670
	ctx.lr = 0x82808058;
	sub_82E02670(ctx, base);
	// lis r11,-31891
	ctx.r11.s64 = -2090008576;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r5,r11,28112
	ctx.r5.s64 = ctx.r11.s64 + 28112;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r4,r1,504
	ctx.r4.s64 = ctx.r1.s64 + 504;
	// bl 0x82805c10
	ctx.lr = 0x82808070;
	sub_82805C10(ctx, base);
	// addi r3,r1,504
	ctx.r3.s64 = ctx.r1.s64 + 504;
	// bl 0x82e01bf0
	ctx.lr = 0x82808078;
	sub_82E01BF0(ctx, base);
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// addi r3,r1,1152
	ctx.r3.s64 = ctx.r1.s64 + 1152;
	// addi r4,r11,-10284
	ctx.r4.s64 = ctx.r11.s64 + -10284;
	// bl 0x82e02670
	ctx.lr = 0x82808088;
	sub_82E02670(ctx, base);
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r5,r11,32128
	ctx.r5.s64 = ctx.r11.s64 + 32128;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r4,r1,1152
	ctx.r4.s64 = ctx.r1.s64 + 1152;
	// bl 0x82805c10
	ctx.lr = 0x828080A0;
	sub_82805C10(ctx, base);
	// addi r3,r1,1152
	ctx.r3.s64 = ctx.r1.s64 + 1152;
	// bl 0x82e01bf0
	ctx.lr = 0x828080A8;
	sub_82E01BF0(ctx, base);
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// addi r3,r1,512
	ctx.r3.s64 = ctx.r1.s64 + 512;
	// addi r4,r11,6432
	ctx.r4.s64 = ctx.r11.s64 + 6432;
	// bl 0x82e02670
	ctx.lr = 0x828080B8;
	sub_82E02670(ctx, base);
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r5,r11,-6640
	ctx.r5.s64 = ctx.r11.s64 + -6640;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r4,r1,512
	ctx.r4.s64 = ctx.r1.s64 + 512;
	// bl 0x82805c10
	ctx.lr = 0x828080D0;
	sub_82805C10(ctx, base);
	// addi r3,r1,512
	ctx.r3.s64 = ctx.r1.s64 + 512;
	// bl 0x82e01bf0
	ctx.lr = 0x828080D8;
	sub_82E01BF0(ctx, base);
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// addi r3,r1,1776
	ctx.r3.s64 = ctx.r1.s64 + 1776;
	// addi r4,r11,6412
	ctx.r4.s64 = ctx.r11.s64 + 6412;
	// bl 0x82e02670
	ctx.lr = 0x828080E8;
	sub_82E02670(ctx, base);
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r5,r11,-6580
	ctx.r5.s64 = ctx.r11.s64 + -6580;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r4,r1,1776
	ctx.r4.s64 = ctx.r1.s64 + 1776;
	// bl 0x82805c10
	ctx.lr = 0x82808100;
	sub_82805C10(ctx, base);
	// addi r3,r1,1776
	ctx.r3.s64 = ctx.r1.s64 + 1776;
	// bl 0x82e01bf0
	ctx.lr = 0x82808108;
	sub_82E01BF0(ctx, base);
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r1,520
	ctx.r3.s64 = ctx.r1.s64 + 520;
	// addi r4,r11,-5672
	ctx.r4.s64 = ctx.r11.s64 + -5672;
	// bl 0x82e02670
	ctx.lr = 0x82808118;
	sub_82E02670(ctx, base);
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r11,-6628
	ctx.r5.s64 = ctx.r11.s64 + -6628;
	// addi r4,r1,520
	ctx.r4.s64 = ctx.r1.s64 + 520;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82805c10
	ctx.lr = 0x82808130;
	sub_82805C10(ctx, base);
	// addi r3,r1,520
	ctx.r3.s64 = ctx.r1.s64 + 520;
	// bl 0x82e01bf0
	ctx.lr = 0x82808138;
	sub_82E01BF0(ctx, base);
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// addi r3,r1,1160
	ctx.r3.s64 = ctx.r1.s64 + 1160;
	// addi r4,r11,6400
	ctx.r4.s64 = ctx.r11.s64 + 6400;
	// bl 0x82e02670
	ctx.lr = 0x82808148;
	sub_82E02670(ctx, base);
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r5,r11,-6604
	ctx.r5.s64 = ctx.r11.s64 + -6604;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r4,r1,1160
	ctx.r4.s64 = ctx.r1.s64 + 1160;
	// bl 0x82805c10
	ctx.lr = 0x82808160;
	sub_82805C10(ctx, base);
	// addi r3,r1,1160
	ctx.r3.s64 = ctx.r1.s64 + 1160;
	// bl 0x82e01bf0
	ctx.lr = 0x82808168;
	sub_82E01BF0(ctx, base);
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// addi r3,r1,528
	ctx.r3.s64 = ctx.r1.s64 + 528;
	// addi r4,r11,6388
	ctx.r4.s64 = ctx.r11.s64 + 6388;
	// bl 0x82e02670
	ctx.lr = 0x82808178;
	sub_82E02670(ctx, base);
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r5,r11,-6616
	ctx.r5.s64 = ctx.r11.s64 + -6616;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r4,r1,528
	ctx.r4.s64 = ctx.r1.s64 + 528;
	// bl 0x82805c10
	ctx.lr = 0x82808190;
	sub_82805C10(ctx, base);
	// addi r3,r1,528
	ctx.r3.s64 = ctx.r1.s64 + 528;
	// bl 0x82e01bf0
	ctx.lr = 0x82808198;
	sub_82E01BF0(ctx, base);
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// addi r3,r1,1480
	ctx.r3.s64 = ctx.r1.s64 + 1480;
	// addi r4,r11,6376
	ctx.r4.s64 = ctx.r11.s64 + 6376;
	// bl 0x82e02670
	ctx.lr = 0x828081A8;
	sub_82E02670(ctx, base);
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r5,r11,-6592
	ctx.r5.s64 = ctx.r11.s64 + -6592;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r4,r1,1480
	ctx.r4.s64 = ctx.r1.s64 + 1480;
	// bl 0x82805c10
	ctx.lr = 0x828081C0;
	sub_82805C10(ctx, base);
	// addi r3,r1,1480
	ctx.r3.s64 = ctx.r1.s64 + 1480;
	// bl 0x82e01bf0
	ctx.lr = 0x828081C8;
	sub_82E01BF0(ctx, base);
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// addi r3,r1,536
	ctx.r3.s64 = ctx.r1.s64 + 536;
	// addi r4,r11,6364
	ctx.r4.s64 = ctx.r11.s64 + 6364;
	// bl 0x82e02670
	ctx.lr = 0x828081D8;
	sub_82E02670(ctx, base);
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r5,r11,-4648
	ctx.r5.s64 = ctx.r11.s64 + -4648;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r4,r1,536
	ctx.r4.s64 = ctx.r1.s64 + 536;
	// bl 0x82805c10
	ctx.lr = 0x828081F0;
	sub_82805C10(ctx, base);
	// addi r3,r1,536
	ctx.r3.s64 = ctx.r1.s64 + 536;
	// bl 0x82e01bf0
	ctx.lr = 0x828081F8;
	sub_82E01BF0(ctx, base);
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// addi r3,r1,1168
	ctx.r3.s64 = ctx.r1.s64 + 1168;
	// addi r4,r11,6344
	ctx.r4.s64 = ctx.r11.s64 + 6344;
	// bl 0x82e02670
	ctx.lr = 0x82808208;
	sub_82E02670(ctx, base);
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r5,r11,-4636
	ctx.r5.s64 = ctx.r11.s64 + -4636;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r4,r1,1168
	ctx.r4.s64 = ctx.r1.s64 + 1168;
	// bl 0x82805c10
	ctx.lr = 0x82808220;
	sub_82805C10(ctx, base);
	// addi r3,r1,1168
	ctx.r3.s64 = ctx.r1.s64 + 1168;
	// bl 0x82e01bf0
	ctx.lr = 0x82808228;
	sub_82E01BF0(ctx, base);
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// addi r3,r1,544
	ctx.r3.s64 = ctx.r1.s64 + 544;
	// addi r4,r11,6332
	ctx.r4.s64 = ctx.r11.s64 + 6332;
	// bl 0x82e02670
	ctx.lr = 0x82808238;
	sub_82E02670(ctx, base);
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r5,r11,-3228
	ctx.r5.s64 = ctx.r11.s64 + -3228;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r4,r1,544
	ctx.r4.s64 = ctx.r1.s64 + 544;
	// bl 0x82805c10
	ctx.lr = 0x82808250;
	sub_82805C10(ctx, base);
	// addi r3,r1,544
	ctx.r3.s64 = ctx.r1.s64 + 544;
	// bl 0x82e01bf0
	ctx.lr = 0x82808258;
	sub_82E01BF0(ctx, base);
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// addi r3,r1,1640
	ctx.r3.s64 = ctx.r1.s64 + 1640;
	// addi r4,r11,6320
	ctx.r4.s64 = ctx.r11.s64 + 6320;
	// bl 0x82e02670
	ctx.lr = 0x82808268;
	sub_82E02670(ctx, base);
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r11,-3216
	ctx.r5.s64 = ctx.r11.s64 + -3216;
	// addi r4,r1,1640
	ctx.r4.s64 = ctx.r1.s64 + 1640;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82805c10
	ctx.lr = 0x82808280;
	sub_82805C10(ctx, base);
	// addi r3,r1,1640
	ctx.r3.s64 = ctx.r1.s64 + 1640;
	// bl 0x82e01bf0
	ctx.lr = 0x82808288;
	sub_82E01BF0(ctx, base);
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// addi r3,r1,552
	ctx.r3.s64 = ctx.r1.s64 + 552;
	// addi r4,r11,6300
	ctx.r4.s64 = ctx.r11.s64 + 6300;
	// bl 0x82e02670
	ctx.lr = 0x82808298;
	sub_82E02670(ctx, base);
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r5,r11,-3204
	ctx.r5.s64 = ctx.r11.s64 + -3204;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r4,r1,552
	ctx.r4.s64 = ctx.r1.s64 + 552;
	// bl 0x82805c10
	ctx.lr = 0x828082B0;
	sub_82805C10(ctx, base);
	// addi r3,r1,552
	ctx.r3.s64 = ctx.r1.s64 + 552;
	// bl 0x82e01bf0
	ctx.lr = 0x828082B8;
	sub_82E01BF0(ctx, base);
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// addi r3,r1,1176
	ctx.r3.s64 = ctx.r1.s64 + 1176;
	// addi r4,r11,6288
	ctx.r4.s64 = ctx.r11.s64 + 6288;
	// bl 0x82e02670
	ctx.lr = 0x828082C8;
	sub_82E02670(ctx, base);
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r5,r11,-2136
	ctx.r5.s64 = ctx.r11.s64 + -2136;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r4,r1,1176
	ctx.r4.s64 = ctx.r1.s64 + 1176;
	// bl 0x82805c10
	ctx.lr = 0x828082E0;
	sub_82805C10(ctx, base);
	// addi r3,r1,1176
	ctx.r3.s64 = ctx.r1.s64 + 1176;
	// bl 0x82e01bf0
	ctx.lr = 0x828082E8;
	sub_82E01BF0(ctx, base);
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r1,560
	ctx.r3.s64 = ctx.r1.s64 + 560;
	// addi r4,r11,-2044
	ctx.r4.s64 = ctx.r11.s64 + -2044;
	// bl 0x82e02670
	ctx.lr = 0x828082F8;
	sub_82E02670(ctx, base);
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r5,r11,-2124
	ctx.r5.s64 = ctx.r11.s64 + -2124;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r4,r1,560
	ctx.r4.s64 = ctx.r1.s64 + 560;
	// bl 0x82805c10
	ctx.lr = 0x82808310;
	sub_82805C10(ctx, base);
	// addi r3,r1,560
	ctx.r3.s64 = ctx.r1.s64 + 560;
	// bl 0x82e01bf0
	ctx.lr = 0x82808318;
	sub_82E01BF0(ctx, base);
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r3,r1,1488
	ctx.r3.s64 = ctx.r1.s64 + 1488;
	// addi r4,r11,-29396
	ctx.r4.s64 = ctx.r11.s64 + -29396;
	// bl 0x82e02670
	ctx.lr = 0x82808328;
	sub_82E02670(ctx, base);
	// lis r11,-31890
	ctx.r11.s64 = -2089943040;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r5,r11,-29276
	ctx.r5.s64 = ctx.r11.s64 + -29276;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r4,r1,1488
	ctx.r4.s64 = ctx.r1.s64 + 1488;
	// bl 0x82805c10
	ctx.lr = 0x82808340;
	sub_82805C10(ctx, base);
	// addi r3,r1,1488
	ctx.r3.s64 = ctx.r1.s64 + 1488;
	// bl 0x82e01bf0
	ctx.lr = 0x82808348;
	sub_82E01BF0(ctx, base);
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// addi r3,r1,568
	ctx.r3.s64 = ctx.r1.s64 + 568;
	// addi r4,r11,6268
	ctx.r4.s64 = ctx.r11.s64 + 6268;
	// bl 0x82e02670
	ctx.lr = 0x82808358;
	sub_82E02670(ctx, base);
	// lis r11,-31890
	ctx.r11.s64 = -2089943040;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r5,r11,-29264
	ctx.r5.s64 = ctx.r11.s64 + -29264;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r4,r1,568
	ctx.r4.s64 = ctx.r1.s64 + 568;
	// bl 0x82805c10
	ctx.lr = 0x82808370;
	sub_82805C10(ctx, base);
	// addi r3,r1,568
	ctx.r3.s64 = ctx.r1.s64 + 568;
	// bl 0x82e01bf0
	ctx.lr = 0x82808378;
	sub_82E01BF0(ctx, base);
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// addi r3,r1,1184
	ctx.r3.s64 = ctx.r1.s64 + 1184;
	// addi r4,r11,6264
	ctx.r4.s64 = ctx.r11.s64 + 6264;
	// bl 0x82e02670
	ctx.lr = 0x82808388;
	sub_82E02670(ctx, base);
	// lis r11,-31890
	ctx.r11.s64 = -2089943040;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r5,r11,-27500
	ctx.r5.s64 = ctx.r11.s64 + -27500;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r4,r1,1184
	ctx.r4.s64 = ctx.r1.s64 + 1184;
	// bl 0x82805c10
	ctx.lr = 0x828083A0;
	sub_82805C10(ctx, base);
	// addi r3,r1,1184
	ctx.r3.s64 = ctx.r1.s64 + 1184;
	// bl 0x82e01bf0
	ctx.lr = 0x828083A8;
	sub_82E01BF0(ctx, base);
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r1,576
	ctx.r3.s64 = ctx.r1.s64 + 576;
	// addi r4,r11,-540
	ctx.r4.s64 = ctx.r11.s64 + -540;
	// bl 0x82e02670
	ctx.lr = 0x828083B8;
	sub_82E02670(ctx, base);
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r11,-1260
	ctx.r5.s64 = ctx.r11.s64 + -1260;
	// addi r4,r1,576
	ctx.r4.s64 = ctx.r1.s64 + 576;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82805c10
	ctx.lr = 0x828083D0;
	sub_82805C10(ctx, base);
	// addi r3,r1,576
	ctx.r3.s64 = ctx.r1.s64 + 576;
	// bl 0x82e01bf0
	ctx.lr = 0x828083D8;
	sub_82E01BF0(ctx, base);
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// addi r3,r1,1720
	ctx.r3.s64 = ctx.r1.s64 + 1720;
	// addi r4,r11,6252
	ctx.r4.s64 = ctx.r11.s64 + 6252;
	// bl 0x82e02670
	ctx.lr = 0x828083E8;
	sub_82E02670(ctx, base);
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r5,r11,292
	ctx.r5.s64 = ctx.r11.s64 + 292;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r4,r1,1720
	ctx.r4.s64 = ctx.r1.s64 + 1720;
	// bl 0x82805c10
	ctx.lr = 0x82808400;
	sub_82805C10(ctx, base);
	// addi r3,r1,1720
	ctx.r3.s64 = ctx.r1.s64 + 1720;
	// bl 0x82e01bf0
	ctx.lr = 0x82808408;
	sub_82E01BF0(ctx, base);
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// addi r3,r1,584
	ctx.r3.s64 = ctx.r1.s64 + 584;
	// addi r4,r11,6236
	ctx.r4.s64 = ctx.r11.s64 + 6236;
	// bl 0x82e02670
	ctx.lr = 0x82808418;
	sub_82E02670(ctx, base);
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r5,r11,4936
	ctx.r5.s64 = ctx.r11.s64 + 4936;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r4,r1,584
	ctx.r4.s64 = ctx.r1.s64 + 584;
	// bl 0x82805c10
	ctx.lr = 0x82808430;
	sub_82805C10(ctx, base);
	// addi r3,r1,584
	ctx.r3.s64 = ctx.r1.s64 + 584;
	// bl 0x82e01bf0
	ctx.lr = 0x82808438;
	sub_82E01BF0(ctx, base);
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// addi r3,r1,1192
	ctx.r3.s64 = ctx.r1.s64 + 1192;
	// addi r4,r11,6216
	ctx.r4.s64 = ctx.r11.s64 + 6216;
	// bl 0x82e02670
	ctx.lr = 0x82808448;
	sub_82E02670(ctx, base);
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r5,r11,5464
	ctx.r5.s64 = ctx.r11.s64 + 5464;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r4,r1,1192
	ctx.r4.s64 = ctx.r1.s64 + 1192;
	// bl 0x82805c10
	ctx.lr = 0x82808460;
	sub_82805C10(ctx, base);
	// addi r3,r1,1192
	ctx.r3.s64 = ctx.r1.s64 + 1192;
	// bl 0x82e01bf0
	ctx.lr = 0x82808468;
	sub_82E01BF0(ctx, base);
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// addi r3,r1,592
	ctx.r3.s64 = ctx.r1.s64 + 592;
	// addi r4,r11,6208
	ctx.r4.s64 = ctx.r11.s64 + 6208;
	// bl 0x82e02670
	ctx.lr = 0x82808478;
	sub_82E02670(ctx, base);
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r5,r11,1072
	ctx.r5.s64 = ctx.r11.s64 + 1072;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r4,r1,592
	ctx.r4.s64 = ctx.r1.s64 + 592;
	// bl 0x82805c10
	ctx.lr = 0x82808490;
	sub_82805C10(ctx, base);
	// addi r3,r1,592
	ctx.r3.s64 = ctx.r1.s64 + 592;
	// bl 0x82e01bf0
	ctx.lr = 0x82808498;
	sub_82E01BF0(ctx, base);
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r1,1496
	ctx.r3.s64 = ctx.r1.s64 + 1496;
	// addi r4,r11,24464
	ctx.r4.s64 = ctx.r11.s64 + 24464;
	// bl 0x82e02670
	ctx.lr = 0x828084A8;
	sub_82E02670(ctx, base);
	// lis r11,-31891
	ctx.r11.s64 = -2090008576;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r5,r11,31148
	ctx.r5.s64 = ctx.r11.s64 + 31148;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r4,r1,1496
	ctx.r4.s64 = ctx.r1.s64 + 1496;
	// bl 0x82805c10
	ctx.lr = 0x828084C0;
	sub_82805C10(ctx, base);
	// addi r3,r1,1496
	ctx.r3.s64 = ctx.r1.s64 + 1496;
	// bl 0x82e01bf0
	ctx.lr = 0x828084C8;
	sub_82E01BF0(ctx, base);
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// addi r3,r1,600
	ctx.r3.s64 = ctx.r1.s64 + 600;
	// addi r4,r11,6192
	ctx.r4.s64 = ctx.r11.s64 + 6192;
	// bl 0x82e02670
	ctx.lr = 0x828084D8;
	sub_82E02670(ctx, base);
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r11,10568
	ctx.r5.s64 = ctx.r11.s64 + 10568;
	// addi r4,r1,600
	ctx.r4.s64 = ctx.r1.s64 + 600;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82805c10
	ctx.lr = 0x828084F0;
	sub_82805C10(ctx, base);
	// addi r3,r1,600
	ctx.r3.s64 = ctx.r1.s64 + 600;
	// bl 0x82e01bf0
	ctx.lr = 0x828084F8;
	sub_82E01BF0(ctx, base);
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// addi r3,r1,1200
	ctx.r3.s64 = ctx.r1.s64 + 1200;
	// addi r4,r11,6176
	ctx.r4.s64 = ctx.r11.s64 + 6176;
	// bl 0x82e02670
	ctx.lr = 0x82808508;
	sub_82E02670(ctx, base);
	// li r6,0
	ctx.r6.s64 = 0;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r5,r11,11636
	ctx.r5.s64 = ctx.r11.s64 + 11636;
	// addi r4,r1,1200
	ctx.r4.s64 = ctx.r1.s64 + 1200;
	// bl 0x82805c10
	ctx.lr = 0x82808520;
	sub_82805C10(ctx, base);
	// addi r3,r1,1200
	ctx.r3.s64 = ctx.r1.s64 + 1200;
	// bl 0x82e01bf0
	ctx.lr = 0x82808528;
	sub_82E01BF0(ctx, base);
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// addi r3,r1,608
	ctx.r3.s64 = ctx.r1.s64 + 608;
	// addi r4,r11,6168
	ctx.r4.s64 = ctx.r11.s64 + 6168;
	// bl 0x82e02670
	ctx.lr = 0x82808538;
	sub_82E02670(ctx, base);
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r5,r11,13288
	ctx.r5.s64 = ctx.r11.s64 + 13288;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r4,r1,608
	ctx.r4.s64 = ctx.r1.s64 + 608;
	// bl 0x82805c10
	ctx.lr = 0x82808550;
	sub_82805C10(ctx, base);
	// addi r3,r1,608
	ctx.r3.s64 = ctx.r1.s64 + 608;
	// bl 0x82e01bf0
	ctx.lr = 0x82808558;
	sub_82E01BF0(ctx, base);
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r1,1648
	ctx.r3.s64 = ctx.r1.s64 + 1648;
	// addi r4,r11,-268
	ctx.r4.s64 = ctx.r11.s64 + -268;
	// bl 0x82e02670
	ctx.lr = 0x82808568;
	sub_82E02670(ctx, base);
	// lis r11,-31891
	ctx.r11.s64 = -2090008576;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r5,r11,14088
	ctx.r5.s64 = ctx.r11.s64 + 14088;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r4,r1,1648
	ctx.r4.s64 = ctx.r1.s64 + 1648;
	// bl 0x82805c10
	ctx.lr = 0x82808580;
	sub_82805C10(ctx, base);
	// addi r3,r1,1648
	ctx.r3.s64 = ctx.r1.s64 + 1648;
	// bl 0x82e01bf0
	ctx.lr = 0x82808588;
	sub_82E01BF0(ctx, base);
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// addi r3,r1,616
	ctx.r3.s64 = ctx.r1.s64 + 616;
	// addi r4,r11,6156
	ctx.r4.s64 = ctx.r11.s64 + 6156;
	// bl 0x82e02670
	ctx.lr = 0x82808598;
	sub_82E02670(ctx, base);
	// lis r11,-31891
	ctx.r11.s64 = -2090008576;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r5,r11,24484
	ctx.r5.s64 = ctx.r11.s64 + 24484;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r4,r1,616
	ctx.r4.s64 = ctx.r1.s64 + 616;
	// bl 0x82805c10
	ctx.lr = 0x828085B0;
	sub_82805C10(ctx, base);
	// addi r3,r1,616
	ctx.r3.s64 = ctx.r1.s64 + 616;
	// bl 0x82e01bf0
	ctx.lr = 0x828085B8;
	sub_82E01BF0(ctx, base);
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// addi r3,r1,1208
	ctx.r3.s64 = ctx.r1.s64 + 1208;
	// addi r4,r11,-7396
	ctx.r4.s64 = ctx.r11.s64 + -7396;
	// bl 0x82e02670
	ctx.lr = 0x828085C8;
	sub_82E02670(ctx, base);
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r5,r11,6512
	ctx.r5.s64 = ctx.r11.s64 + 6512;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r4,r1,1208
	ctx.r4.s64 = ctx.r1.s64 + 1208;
	// bl 0x82805c10
	ctx.lr = 0x828085E0;
	sub_82805C10(ctx, base);
	// addi r3,r1,1208
	ctx.r3.s64 = ctx.r1.s64 + 1208;
	// bl 0x82e01bf0
	ctx.lr = 0x828085E8;
	sub_82E01BF0(ctx, base);
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// addi r3,r1,624
	ctx.r3.s64 = ctx.r1.s64 + 624;
	// addi r4,r11,6144
	ctx.r4.s64 = ctx.r11.s64 + 6144;
	// bl 0x82e02670
	ctx.lr = 0x828085F8;
	sub_82E02670(ctx, base);
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r5,r11,6524
	ctx.r5.s64 = ctx.r11.s64 + 6524;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r4,r1,624
	ctx.r4.s64 = ctx.r1.s64 + 624;
	// bl 0x82805c10
	ctx.lr = 0x82808610;
	sub_82805C10(ctx, base);
	// addi r3,r1,624
	ctx.r3.s64 = ctx.r1.s64 + 624;
	// bl 0x82e01bf0
	ctx.lr = 0x82808618;
	sub_82E01BF0(ctx, base);
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// addi r3,r1,1504
	ctx.r3.s64 = ctx.r1.s64 + 1504;
	// addi r4,r11,6132
	ctx.r4.s64 = ctx.r11.s64 + 6132;
	// bl 0x82e02670
	ctx.lr = 0x82808628;
	sub_82E02670(ctx, base);
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r11,6536
	ctx.r5.s64 = ctx.r11.s64 + 6536;
	// addi r4,r1,1504
	ctx.r4.s64 = ctx.r1.s64 + 1504;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82805c10
	ctx.lr = 0x82808640;
	sub_82805C10(ctx, base);
	// addi r3,r1,1504
	ctx.r3.s64 = ctx.r1.s64 + 1504;
	// bl 0x82e01bf0
	ctx.lr = 0x82808648;
	sub_82E01BF0(ctx, base);
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// addi r3,r1,632
	ctx.r3.s64 = ctx.r1.s64 + 632;
	// addi r4,r11,6120
	ctx.r4.s64 = ctx.r11.s64 + 6120;
	// bl 0x82e02670
	ctx.lr = 0x82808658;
	sub_82E02670(ctx, base);
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r5,r11,15100
	ctx.r5.s64 = ctx.r11.s64 + 15100;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r4,r1,632
	ctx.r4.s64 = ctx.r1.s64 + 632;
	// bl 0x82805c10
	ctx.lr = 0x82808670;
	sub_82805C10(ctx, base);
	// addi r3,r1,632
	ctx.r3.s64 = ctx.r1.s64 + 632;
	// bl 0x82e01bf0
	ctx.lr = 0x82808678;
	sub_82E01BF0(ctx, base);
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// addi r3,r1,1216
	ctx.r3.s64 = ctx.r1.s64 + 1216;
	// addi r4,r11,25004
	ctx.r4.s64 = ctx.r11.s64 + 25004;
	// bl 0x82e02670
	ctx.lr = 0x82808688;
	sub_82E02670(ctx, base);
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r5,r11,15780
	ctx.r5.s64 = ctx.r11.s64 + 15780;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r4,r1,1216
	ctx.r4.s64 = ctx.r1.s64 + 1216;
	// bl 0x82805c10
	ctx.lr = 0x828086A0;
	sub_82805C10(ctx, base);
	// addi r3,r1,1216
	ctx.r3.s64 = ctx.r1.s64 + 1216;
	// bl 0x82e01bf0
	ctx.lr = 0x828086A8;
	sub_82E01BF0(ctx, base);
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// addi r3,r1,640
	ctx.r3.s64 = ctx.r1.s64 + 640;
	// addi r4,r11,6112
	ctx.r4.s64 = ctx.r11.s64 + 6112;
	// bl 0x82e02670
	ctx.lr = 0x828086B8;
	sub_82E02670(ctx, base);
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r5,r11,16576
	ctx.r5.s64 = ctx.r11.s64 + 16576;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r4,r1,640
	ctx.r4.s64 = ctx.r1.s64 + 640;
	// bl 0x82805c10
	ctx.lr = 0x828086D0;
	sub_82805C10(ctx, base);
	// addi r3,r1,640
	ctx.r3.s64 = ctx.r1.s64 + 640;
	// bl 0x82e01bf0
	ctx.lr = 0x828086D8;
	sub_82E01BF0(ctx, base);
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// addi r3,r1,1760
	ctx.r3.s64 = ctx.r1.s64 + 1760;
	// addi r4,r11,6100
	ctx.r4.s64 = ctx.r11.s64 + 6100;
	// bl 0x82e02670
	ctx.lr = 0x828086E8;
	sub_82E02670(ctx, base);
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r5,r11,23796
	ctx.r5.s64 = ctx.r11.s64 + 23796;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r4,r1,1760
	ctx.r4.s64 = ctx.r1.s64 + 1760;
	// bl 0x82805c10
	ctx.lr = 0x82808700;
	sub_82805C10(ctx, base);
	// addi r3,r1,1760
	ctx.r3.s64 = ctx.r1.s64 + 1760;
	// bl 0x82e01bf0
	ctx.lr = 0x82808708;
	sub_82E01BF0(ctx, base);
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// addi r3,r1,648
	ctx.r3.s64 = ctx.r1.s64 + 648;
	// addi r4,r11,6088
	ctx.r4.s64 = ctx.r11.s64 + 6088;
	// bl 0x82e02670
	ctx.lr = 0x82808718;
	sub_82E02670(ctx, base);
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r5,r11,23808
	ctx.r5.s64 = ctx.r11.s64 + 23808;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r4,r1,648
	ctx.r4.s64 = ctx.r1.s64 + 648;
	// bl 0x82805c10
	ctx.lr = 0x82808730;
	sub_82805C10(ctx, base);
	// addi r3,r1,648
	ctx.r3.s64 = ctx.r1.s64 + 648;
	// bl 0x82e01bf0
	ctx.lr = 0x82808738;
	sub_82E01BF0(ctx, base);
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// addi r3,r1,1224
	ctx.r3.s64 = ctx.r1.s64 + 1224;
	// addi r4,r11,6076
	ctx.r4.s64 = ctx.r11.s64 + 6076;
	// bl 0x82e02670
	ctx.lr = 0x82808748;
	sub_82E02670(ctx, base);
	// lis r11,-31890
	ctx.r11.s64 = -2089943040;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r5,r11,-29692
	ctx.r5.s64 = ctx.r11.s64 + -29692;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r4,r1,1224
	ctx.r4.s64 = ctx.r1.s64 + 1224;
	// bl 0x82805c10
	ctx.lr = 0x82808760;
	sub_82805C10(ctx, base);
	// addi r3,r1,1224
	ctx.r3.s64 = ctx.r1.s64 + 1224;
	// bl 0x82e01bf0
	ctx.lr = 0x82808768;
	sub_82E01BF0(ctx, base);
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// addi r3,r1,656
	ctx.r3.s64 = ctx.r1.s64 + 656;
	// addi r4,r11,6060
	ctx.r4.s64 = ctx.r11.s64 + 6060;
	// bl 0x82e02670
	ctx.lr = 0x82808778;
	sub_82E02670(ctx, base);
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r11,17260
	ctx.r5.s64 = ctx.r11.s64 + 17260;
	// addi r4,r1,656
	ctx.r4.s64 = ctx.r1.s64 + 656;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82805c10
	ctx.lr = 0x82808790;
	sub_82805C10(ctx, base);
	// addi r3,r1,656
	ctx.r3.s64 = ctx.r1.s64 + 656;
	// bl 0x82e01bf0
	ctx.lr = 0x82808798;
	sub_82E01BF0(ctx, base);
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// addi r3,r1,1512
	ctx.r3.s64 = ctx.r1.s64 + 1512;
	// addi r4,r11,6044
	ctx.r4.s64 = ctx.r11.s64 + 6044;
	// bl 0x82e02670
	ctx.lr = 0x828087A8;
	sub_82E02670(ctx, base);
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r5,r11,18268
	ctx.r5.s64 = ctx.r11.s64 + 18268;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r4,r1,1512
	ctx.r4.s64 = ctx.r1.s64 + 1512;
	// bl 0x82805c10
	ctx.lr = 0x828087C0;
	sub_82805C10(ctx, base);
	// addi r3,r1,1512
	ctx.r3.s64 = ctx.r1.s64 + 1512;
	// bl 0x82e01bf0
	ctx.lr = 0x828087C8;
	sub_82E01BF0(ctx, base);
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r1,664
	ctx.r3.s64 = ctx.r1.s64 + 664;
	// addi r4,r11,23356
	ctx.r4.s64 = ctx.r11.s64 + 23356;
	// bl 0x82e02670
	ctx.lr = 0x828087D8;
	sub_82E02670(ctx, base);
	// lis r11,-31891
	ctx.r11.s64 = -2090008576;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r5,r11,28300
	ctx.r5.s64 = ctx.r11.s64 + 28300;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r4,r1,664
	ctx.r4.s64 = ctx.r1.s64 + 664;
	// bl 0x82805c10
	ctx.lr = 0x828087F0;
	sub_82805C10(ctx, base);
	// addi r3,r1,664
	ctx.r3.s64 = ctx.r1.s64 + 664;
	// bl 0x82e01bf0
	ctx.lr = 0x828087F8;
	sub_82E01BF0(ctx, base);
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// addi r3,r1,1232
	ctx.r3.s64 = ctx.r1.s64 + 1232;
	// addi r4,r11,6036
	ctx.r4.s64 = ctx.r11.s64 + 6036;
	// bl 0x82e02670
	ctx.lr = 0x82808808;
	sub_82E02670(ctx, base);
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r5,r11,30192
	ctx.r5.s64 = ctx.r11.s64 + 30192;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r4,r1,1232
	ctx.r4.s64 = ctx.r1.s64 + 1232;
	// bl 0x82805c10
	ctx.lr = 0x82808820;
	sub_82805C10(ctx, base);
	// addi r3,r1,1232
	ctx.r3.s64 = ctx.r1.s64 + 1232;
	// bl 0x82e01bf0
	ctx.lr = 0x82808828;
	sub_82E01BF0(ctx, base);
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// addi r3,r1,672
	ctx.r3.s64 = ctx.r1.s64 + 672;
	// addi r4,r11,6020
	ctx.r4.s64 = ctx.r11.s64 + 6020;
	// bl 0x82e02670
	ctx.lr = 0x82808838;
	sub_82E02670(ctx, base);
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r5,r11,-31592
	ctx.r5.s64 = ctx.r11.s64 + -31592;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r4,r1,672
	ctx.r4.s64 = ctx.r1.s64 + 672;
	// bl 0x82805c10
	ctx.lr = 0x82808850;
	sub_82805C10(ctx, base);
	// addi r3,r1,672
	ctx.r3.s64 = ctx.r1.s64 + 672;
	// bl 0x82e01bf0
	ctx.lr = 0x82808858;
	sub_82E01BF0(ctx, base);
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r1,1656
	ctx.r3.s64 = ctx.r1.s64 + 1656;
	// addi r4,r11,31812
	ctx.r4.s64 = ctx.r11.s64 + 31812;
	// bl 0x82e02670
	ctx.lr = 0x82808868;
	sub_82E02670(ctx, base);
	// lis r11,-31890
	ctx.r11.s64 = -2089943040;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r5,r11,-30848
	ctx.r5.s64 = ctx.r11.s64 + -30848;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r4,r1,1656
	ctx.r4.s64 = ctx.r1.s64 + 1656;
	// bl 0x82805c10
	ctx.lr = 0x82808880;
	sub_82805C10(ctx, base);
	// addi r3,r1,1656
	ctx.r3.s64 = ctx.r1.s64 + 1656;
	// bl 0x82e01bf0
	ctx.lr = 0x82808888;
	sub_82E01BF0(ctx, base);
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// addi r3,r1,680
	ctx.r3.s64 = ctx.r1.s64 + 680;
	// addi r4,r11,6012
	ctx.r4.s64 = ctx.r11.s64 + 6012;
	// bl 0x82e02670
	ctx.lr = 0x82808898;
	sub_82E02670(ctx, base);
	// lis r11,-31890
	ctx.r11.s64 = -2089943040;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r5,r11,-27256
	ctx.r5.s64 = ctx.r11.s64 + -27256;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r4,r1,680
	ctx.r4.s64 = ctx.r1.s64 + 680;
	// bl 0x82805c10
	ctx.lr = 0x828088B0;
	sub_82805C10(ctx, base);
	// addi r3,r1,680
	ctx.r3.s64 = ctx.r1.s64 + 680;
	// bl 0x82e01bf0
	ctx.lr = 0x828088B8;
	sub_82E01BF0(ctx, base);
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// addi r3,r1,1240
	ctx.r3.s64 = ctx.r1.s64 + 1240;
	// addi r4,r11,5988
	ctx.r4.s64 = ctx.r11.s64 + 5988;
	// bl 0x82e02670
	ctx.lr = 0x828088C8;
	sub_82E02670(ctx, base);
	// lis r11,-31890
	ctx.r11.s64 = -2089943040;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r11,-27244
	ctx.r5.s64 = ctx.r11.s64 + -27244;
	// addi r4,r1,1240
	ctx.r4.s64 = ctx.r1.s64 + 1240;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82805c10
	ctx.lr = 0x828088E0;
	sub_82805C10(ctx, base);
	// addi r3,r1,1240
	ctx.r3.s64 = ctx.r1.s64 + 1240;
	// bl 0x82e01bf0
	ctx.lr = 0x828088E8;
	sub_82E01BF0(ctx, base);
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// addi r3,r1,688
	ctx.r3.s64 = ctx.r1.s64 + 688;
	// addi r4,r11,5976
	ctx.r4.s64 = ctx.r11.s64 + 5976;
	// bl 0x82e02670
	ctx.lr = 0x828088F8;
	sub_82E02670(ctx, base);
	// lis r11,-31890
	ctx.r11.s64 = -2089943040;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r5,r11,-26324
	ctx.r5.s64 = ctx.r11.s64 + -26324;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r4,r1,688
	ctx.r4.s64 = ctx.r1.s64 + 688;
	// bl 0x82805c10
	ctx.lr = 0x82808910;
	sub_82805C10(ctx, base);
	// addi r3,r1,688
	ctx.r3.s64 = ctx.r1.s64 + 688;
	// bl 0x82e01bf0
	ctx.lr = 0x82808918;
	sub_82E01BF0(ctx, base);
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// addi r3,r1,1520
	ctx.r3.s64 = ctx.r1.s64 + 1520;
	// addi r4,r11,5960
	ctx.r4.s64 = ctx.r11.s64 + 5960;
	// bl 0x82e02670
	ctx.lr = 0x82808928;
	sub_82E02670(ctx, base);
	// lis r11,-31890
	ctx.r11.s64 = -2089943040;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r5,r11,-25352
	ctx.r5.s64 = ctx.r11.s64 + -25352;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r4,r1,1520
	ctx.r4.s64 = ctx.r1.s64 + 1520;
	// bl 0x82805c10
	ctx.lr = 0x82808940;
	sub_82805C10(ctx, base);
	// addi r3,r1,1520
	ctx.r3.s64 = ctx.r1.s64 + 1520;
	// bl 0x82e01bf0
	ctx.lr = 0x82808948;
	sub_82E01BF0(ctx, base);
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// addi r3,r1,696
	ctx.r3.s64 = ctx.r1.s64 + 696;
	// addi r4,r11,5944
	ctx.r4.s64 = ctx.r11.s64 + 5944;
	// bl 0x82e02670
	ctx.lr = 0x82808958;
	sub_82E02670(ctx, base);
	// lis r11,-31890
	ctx.r11.s64 = -2089943040;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r5,r11,-25340
	ctx.r5.s64 = ctx.r11.s64 + -25340;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r4,r1,696
	ctx.r4.s64 = ctx.r1.s64 + 696;
	// bl 0x82805c10
	ctx.lr = 0x82808970;
	sub_82805C10(ctx, base);
	// addi r3,r1,696
	ctx.r3.s64 = ctx.r1.s64 + 696;
	// bl 0x82e01bf0
	ctx.lr = 0x82808978;
	sub_82E01BF0(ctx, base);
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// addi r3,r1,1248
	ctx.r3.s64 = ctx.r1.s64 + 1248;
	// addi r4,r11,5924
	ctx.r4.s64 = ctx.r11.s64 + 5924;
	// bl 0x82e02670
	ctx.lr = 0x82808988;
	sub_82E02670(ctx, base);
	// lis r11,-31890
	ctx.r11.s64 = -2089943040;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r5,r11,-25220
	ctx.r5.s64 = ctx.r11.s64 + -25220;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r4,r1,1248
	ctx.r4.s64 = ctx.r1.s64 + 1248;
	// bl 0x82805c10
	ctx.lr = 0x828089A0;
	sub_82805C10(ctx, base);
	// addi r3,r1,1248
	ctx.r3.s64 = ctx.r1.s64 + 1248;
	// bl 0x82e01bf0
	ctx.lr = 0x828089A8;
	sub_82E01BF0(ctx, base);
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// addi r3,r1,704
	ctx.r3.s64 = ctx.r1.s64 + 704;
	// addi r4,r11,5908
	ctx.r4.s64 = ctx.r11.s64 + 5908;
	// bl 0x82e02670
	ctx.lr = 0x828089B8;
	sub_82E02670(ctx, base);
	// lis r11,-31890
	ctx.r11.s64 = -2089943040;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r5,r11,-24408
	ctx.r5.s64 = ctx.r11.s64 + -24408;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r4,r1,704
	ctx.r4.s64 = ctx.r1.s64 + 704;
	// bl 0x82805c10
	ctx.lr = 0x828089D0;
	sub_82805C10(ctx, base);
	// addi r3,r1,704
	ctx.r3.s64 = ctx.r1.s64 + 704;
	// bl 0x82e01bf0
	ctx.lr = 0x828089D8;
	sub_82E01BF0(ctx, base);
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// addi r3,r1,1728
	ctx.r3.s64 = ctx.r1.s64 + 1728;
	// addi r4,r11,5892
	ctx.r4.s64 = ctx.r11.s64 + 5892;
	// bl 0x82e02670
	ctx.lr = 0x828089E8;
	sub_82E02670(ctx, base);
	// lis r11,-31890
	ctx.r11.s64 = -2089943040;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r11,-24692
	ctx.r5.s64 = ctx.r11.s64 + -24692;
	// addi r4,r1,1728
	ctx.r4.s64 = ctx.r1.s64 + 1728;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82805c10
	ctx.lr = 0x82808A00;
	sub_82805C10(ctx, base);
	// addi r3,r1,1728
	ctx.r3.s64 = ctx.r1.s64 + 1728;
	// bl 0x82e01bf0
	ctx.lr = 0x82808A08;
	sub_82E01BF0(ctx, base);
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// addi r3,r1,712
	ctx.r3.s64 = ctx.r1.s64 + 712;
	// addi r4,r11,5876
	ctx.r4.s64 = ctx.r11.s64 + 5876;
	// bl 0x82e02670
	ctx.lr = 0x82808A18;
	sub_82E02670(ctx, base);
	// li r6,0
	ctx.r6.s64 = 0;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r5,r11,18664
	ctx.r5.s64 = ctx.r11.s64 + 18664;
	// addi r4,r1,712
	ctx.r4.s64 = ctx.r1.s64 + 712;
	// bl 0x82805c10
	ctx.lr = 0x82808A30;
	sub_82805C10(ctx, base);
	// addi r3,r1,712
	ctx.r3.s64 = ctx.r1.s64 + 712;
	// bl 0x82e01bf0
	ctx.lr = 0x82808A38;
	sub_82E01BF0(ctx, base);
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// addi r3,r1,1256
	ctx.r3.s64 = ctx.r1.s64 + 1256;
	// addi r4,r11,5860
	ctx.r4.s64 = ctx.r11.s64 + 5860;
	// bl 0x82e02670
	ctx.lr = 0x82808A48;
	sub_82E02670(ctx, base);
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r5,r11,20400
	ctx.r5.s64 = ctx.r11.s64 + 20400;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r4,r1,1256
	ctx.r4.s64 = ctx.r1.s64 + 1256;
	// bl 0x82805c10
	ctx.lr = 0x82808A60;
	sub_82805C10(ctx, base);
	// addi r3,r1,1256
	ctx.r3.s64 = ctx.r1.s64 + 1256;
	// bl 0x82e01bf0
	ctx.lr = 0x82808A68;
	sub_82E01BF0(ctx, base);
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// addi r3,r1,720
	ctx.r3.s64 = ctx.r1.s64 + 720;
	// addi r4,r11,5844
	ctx.r4.s64 = ctx.r11.s64 + 5844;
	// bl 0x82e02670
	ctx.lr = 0x82808A78;
	sub_82E02670(ctx, base);
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r5,r11,21536
	ctx.r5.s64 = ctx.r11.s64 + 21536;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r4,r1,720
	ctx.r4.s64 = ctx.r1.s64 + 720;
	// bl 0x82805c10
	ctx.lr = 0x82808A90;
	sub_82805C10(ctx, base);
	// addi r3,r1,720
	ctx.r3.s64 = ctx.r1.s64 + 720;
	// bl 0x82e01bf0
	ctx.lr = 0x82808A98;
	sub_82E01BF0(ctx, base);
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// addi r3,r1,1528
	ctx.r3.s64 = ctx.r1.s64 + 1528;
	// addi r4,r11,5820
	ctx.r4.s64 = ctx.r11.s64 + 5820;
	// bl 0x82e02670
	ctx.lr = 0x82808AA8;
	sub_82E02670(ctx, base);
	// lis r11,-31890
	ctx.r11.s64 = -2089943040;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r5,r11,832
	ctx.r5.s64 = ctx.r11.s64 + 832;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r4,r1,1528
	ctx.r4.s64 = ctx.r1.s64 + 1528;
	// bl 0x82805c10
	ctx.lr = 0x82808AC0;
	sub_82805C10(ctx, base);
	// addi r3,r1,1528
	ctx.r3.s64 = ctx.r1.s64 + 1528;
	// bl 0x82e01bf0
	ctx.lr = 0x82808AC8;
	sub_82E01BF0(ctx, base);
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// addi r3,r1,728
	ctx.r3.s64 = ctx.r1.s64 + 728;
	// addi r4,r11,5800
	ctx.r4.s64 = ctx.r11.s64 + 5800;
	// bl 0x82e02670
	ctx.lr = 0x82808AD8;
	sub_82E02670(ctx, base);
	// lis r11,-31890
	ctx.r11.s64 = -2089943040;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r5,r11,820
	ctx.r5.s64 = ctx.r11.s64 + 820;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r4,r1,728
	ctx.r4.s64 = ctx.r1.s64 + 728;
	// bl 0x82805c10
	ctx.lr = 0x82808AF0;
	sub_82805C10(ctx, base);
	// addi r3,r1,728
	ctx.r3.s64 = ctx.r1.s64 + 728;
	// bl 0x82e01bf0
	ctx.lr = 0x82808AF8;
	sub_82E01BF0(ctx, base);
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// addi r3,r1,1264
	ctx.r3.s64 = ctx.r1.s64 + 1264;
	// addi r4,r11,5772
	ctx.r4.s64 = ctx.r11.s64 + 5772;
	// bl 0x82e02670
	ctx.lr = 0x82808B08;
	sub_82E02670(ctx, base);
	// lis r11,-31890
	ctx.r11.s64 = -2089943040;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r5,r11,844
	ctx.r5.s64 = ctx.r11.s64 + 844;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r4,r1,1264
	ctx.r4.s64 = ctx.r1.s64 + 1264;
	// bl 0x82805c10
	ctx.lr = 0x82808B20;
	sub_82805C10(ctx, base);
	// addi r3,r1,1264
	ctx.r3.s64 = ctx.r1.s64 + 1264;
	// bl 0x82e01bf0
	ctx.lr = 0x82808B28;
	sub_82E01BF0(ctx, base);
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// addi r3,r1,736
	ctx.r3.s64 = ctx.r1.s64 + 736;
	// addi r4,r11,5756
	ctx.r4.s64 = ctx.r11.s64 + 5756;
	// bl 0x82e02670
	ctx.lr = 0x82808B38;
	sub_82E02670(ctx, base);
	// lis r11,-31890
	ctx.r11.s64 = -2089943040;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r11,2832
	ctx.r5.s64 = ctx.r11.s64 + 2832;
	// addi r4,r1,736
	ctx.r4.s64 = ctx.r1.s64 + 736;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82805c10
	ctx.lr = 0x82808B50;
	sub_82805C10(ctx, base);
	// addi r3,r1,736
	ctx.r3.s64 = ctx.r1.s64 + 736;
	// bl 0x82e01bf0
	ctx.lr = 0x82808B58;
	sub_82E01BF0(ctx, base);
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// addi r3,r1,1664
	ctx.r3.s64 = ctx.r1.s64 + 1664;
	// addi r4,r11,5740
	ctx.r4.s64 = ctx.r11.s64 + 5740;
	// bl 0x82e02670
	ctx.lr = 0x82808B68;
	sub_82E02670(ctx, base);
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r5,r11,25732
	ctx.r5.s64 = ctx.r11.s64 + 25732;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r4,r1,1664
	ctx.r4.s64 = ctx.r1.s64 + 1664;
	// bl 0x82805c10
	ctx.lr = 0x82808B80;
	sub_82805C10(ctx, base);
	// addi r3,r1,1664
	ctx.r3.s64 = ctx.r1.s64 + 1664;
	// bl 0x82e01bf0
	ctx.lr = 0x82808B88;
	sub_82E01BF0(ctx, base);
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// addi r3,r1,744
	ctx.r3.s64 = ctx.r1.s64 + 744;
	// addi r4,r11,5720
	ctx.r4.s64 = ctx.r11.s64 + 5720;
	// bl 0x82e02670
	ctx.lr = 0x82808B98;
	sub_82E02670(ctx, base);
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r5,r11,26444
	ctx.r5.s64 = ctx.r11.s64 + 26444;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r4,r1,744
	ctx.r4.s64 = ctx.r1.s64 + 744;
	// bl 0x82805c10
	ctx.lr = 0x82808BB0;
	sub_82805C10(ctx, base);
	// addi r3,r1,744
	ctx.r3.s64 = ctx.r1.s64 + 744;
	// bl 0x82e01bf0
	ctx.lr = 0x82808BB8;
	sub_82E01BF0(ctx, base);
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// addi r3,r1,1272
	ctx.r3.s64 = ctx.r1.s64 + 1272;
	// addi r4,r11,5704
	ctx.r4.s64 = ctx.r11.s64 + 5704;
	// bl 0x82e02670
	ctx.lr = 0x82808BC8;
	sub_82E02670(ctx, base);
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r5,r11,27132
	ctx.r5.s64 = ctx.r11.s64 + 27132;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r4,r1,1272
	ctx.r4.s64 = ctx.r1.s64 + 1272;
	// bl 0x82805c10
	ctx.lr = 0x82808BE0;
	sub_82805C10(ctx, base);
	// addi r3,r1,1272
	ctx.r3.s64 = ctx.r1.s64 + 1272;
	// bl 0x82e01bf0
	ctx.lr = 0x82808BE8;
	sub_82E01BF0(ctx, base);
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// addi r3,r1,752
	ctx.r3.s64 = ctx.r1.s64 + 752;
	// addi r4,r11,5692
	ctx.r4.s64 = ctx.r11.s64 + 5692;
	// bl 0x82e02670
	ctx.lr = 0x82808BF8;
	sub_82E02670(ctx, base);
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r5,r11,27956
	ctx.r5.s64 = ctx.r11.s64 + 27956;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r4,r1,752
	ctx.r4.s64 = ctx.r1.s64 + 752;
	// bl 0x82805c10
	ctx.lr = 0x82808C10;
	sub_82805C10(ctx, base);
	// addi r3,r1,752
	ctx.r3.s64 = ctx.r1.s64 + 752;
	// bl 0x82e01bf0
	ctx.lr = 0x82808C18;
	sub_82E01BF0(ctx, base);
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// addi r3,r1,1536
	ctx.r3.s64 = ctx.r1.s64 + 1536;
	// addi r4,r11,5672
	ctx.r4.s64 = ctx.r11.s64 + 5672;
	// bl 0x82e02670
	ctx.lr = 0x82808C28;
	sub_82E02670(ctx, base);
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r30,r11,28956
	ctx.r30.s64 = ctx.r11.s64 + 28956;
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// addi r4,r1,1536
	ctx.r4.s64 = ctx.r1.s64 + 1536;
	// bl 0x82805c10
	ctx.lr = 0x82808C44;
	sub_82805C10(ctx, base);
	// addi r3,r1,1536
	ctx.r3.s64 = ctx.r1.s64 + 1536;
	// bl 0x82e01bf0
	ctx.lr = 0x82808C4C;
	sub_82E01BF0(ctx, base);
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// addi r3,r1,760
	ctx.r3.s64 = ctx.r1.s64 + 760;
	// addi r4,r11,5648
	ctx.r4.s64 = ctx.r11.s64 + 5648;
	// bl 0x82e02670
	ctx.lr = 0x82808C5C;
	sub_82E02670(ctx, base);
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r29,r11,29544
	ctx.r29.s64 = ctx.r11.s64 + 29544;
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// addi r4,r1,760
	ctx.r4.s64 = ctx.r1.s64 + 760;
	// bl 0x82805c10
	ctx.lr = 0x82808C78;
	sub_82805C10(ctx, base);
	// addi r3,r1,760
	ctx.r3.s64 = ctx.r1.s64 + 760;
	// bl 0x82e01bf0
	ctx.lr = 0x82808C80;
	sub_82E01BF0(ctx, base);
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// addi r3,r1,1280
	ctx.r3.s64 = ctx.r1.s64 + 1280;
	// addi r4,r11,5624
	ctx.r4.s64 = ctx.r11.s64 + 5624;
	// bl 0x82e02670
	ctx.lr = 0x82808C90;
	sub_82E02670(ctx, base);
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r11,29908
	ctx.r5.s64 = ctx.r11.s64 + 29908;
	// addi r4,r1,1280
	ctx.r4.s64 = ctx.r1.s64 + 1280;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82805c10
	ctx.lr = 0x82808CA8;
	sub_82805C10(ctx, base);
	// addi r3,r1,1280
	ctx.r3.s64 = ctx.r1.s64 + 1280;
	// bl 0x82e01bf0
	ctx.lr = 0x82808CB0;
	sub_82E01BF0(ctx, base);
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// addi r3,r1,768
	ctx.r3.s64 = ctx.r1.s64 + 768;
	// addi r4,r11,5612
	ctx.r4.s64 = ctx.r11.s64 + 5612;
	// bl 0x82e02670
	ctx.lr = 0x82808CC0;
	sub_82E02670(ctx, base);
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r5,r11,30504
	ctx.r5.s64 = ctx.r11.s64 + 30504;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r4,r1,768
	ctx.r4.s64 = ctx.r1.s64 + 768;
	// bl 0x82805c10
	ctx.lr = 0x82808CD8;
	sub_82805C10(ctx, base);
	// addi r3,r1,768
	ctx.r3.s64 = ctx.r1.s64 + 768;
	// bl 0x82e01bf0
	ctx.lr = 0x82808CE0;
	sub_82E01BF0(ctx, base);
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// addi r3,r1,1792
	ctx.r3.s64 = ctx.r1.s64 + 1792;
	// addi r4,r11,5604
	ctx.r4.s64 = ctx.r11.s64 + 5604;
	// bl 0x82e02670
	ctx.lr = 0x82808CF0;
	sub_82E02670(ctx, base);
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r5,r11,31828
	ctx.r5.s64 = ctx.r11.s64 + 31828;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r4,r1,1792
	ctx.r4.s64 = ctx.r1.s64 + 1792;
	// bl 0x82805c10
	ctx.lr = 0x82808D08;
	sub_82805C10(ctx, base);
	// addi r3,r1,1792
	ctx.r3.s64 = ctx.r1.s64 + 1792;
	// bl 0x82e01bf0
	ctx.lr = 0x82808D10;
	sub_82E01BF0(ctx, base);
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// addi r3,r1,776
	ctx.r3.s64 = ctx.r1.s64 + 776;
	// addi r4,r11,5588
	ctx.r4.s64 = ctx.r11.s64 + 5588;
	// bl 0x82e02670
	ctx.lr = 0x82808D20;
	sub_82E02670(ctx, base);
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r5,r11,32252
	ctx.r5.s64 = ctx.r11.s64 + 32252;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r4,r1,776
	ctx.r4.s64 = ctx.r1.s64 + 776;
	// bl 0x82805c10
	ctx.lr = 0x82808D38;
	sub_82805C10(ctx, base);
	// addi r3,r1,776
	ctx.r3.s64 = ctx.r1.s64 + 776;
	// bl 0x82e01bf0
	ctx.lr = 0x82808D40;
	sub_82E01BF0(ctx, base);
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// addi r3,r1,1288
	ctx.r3.s64 = ctx.r1.s64 + 1288;
	// addi r4,r11,5576
	ctx.r4.s64 = ctx.r11.s64 + 5576;
	// bl 0x82e02670
	ctx.lr = 0x82808D50;
	sub_82E02670(ctx, base);
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r28,r11,31180
	ctx.r28.s64 = ctx.r11.s64 + 31180;
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// addi r4,r1,1288
	ctx.r4.s64 = ctx.r1.s64 + 1288;
	// bl 0x82805c10
	ctx.lr = 0x82808D6C;
	sub_82805C10(ctx, base);
	// addi r3,r1,1288
	ctx.r3.s64 = ctx.r1.s64 + 1288;
	// bl 0x82e01bf0
	ctx.lr = 0x82808D74;
	sub_82E01BF0(ctx, base);
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// addi r3,r1,784
	ctx.r3.s64 = ctx.r1.s64 + 784;
	// addi r4,r11,5564
	ctx.r4.s64 = ctx.r11.s64 + 5564;
	// bl 0x82e02670
	ctx.lr = 0x82808D84;
	sub_82E02670(ctx, base);
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r5,r11,32752
	ctx.r5.s64 = ctx.r11.s64 + 32752;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r4,r1,784
	ctx.r4.s64 = ctx.r1.s64 + 784;
	// bl 0x82805c10
	ctx.lr = 0x82808D9C;
	sub_82805C10(ctx, base);
	// addi r3,r1,784
	ctx.r3.s64 = ctx.r1.s64 + 784;
	// bl 0x82e01bf0
	ctx.lr = 0x82808DA4;
	sub_82E01BF0(ctx, base);
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// addi r3,r1,1544
	ctx.r3.s64 = ctx.r1.s64 + 1544;
	// addi r4,r11,5548
	ctx.r4.s64 = ctx.r11.s64 + 5548;
	// bl 0x82e02670
	ctx.lr = 0x82808DB4;
	sub_82E02670(ctx, base);
	// lis r11,-31890
	ctx.r11.s64 = -2089943040;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r5,r11,9260
	ctx.r5.s64 = ctx.r11.s64 + 9260;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r4,r1,1544
	ctx.r4.s64 = ctx.r1.s64 + 1544;
	// bl 0x82805c10
	ctx.lr = 0x82808DCC;
	sub_82805C10(ctx, base);
	// addi r3,r1,1544
	ctx.r3.s64 = ctx.r1.s64 + 1544;
	// bl 0x82e01bf0
	ctx.lr = 0x82808DD4;
	sub_82E01BF0(ctx, base);
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// addi r3,r1,792
	ctx.r3.s64 = ctx.r1.s64 + 792;
	// addi r4,r11,5536
	ctx.r4.s64 = ctx.r11.s64 + 5536;
	// bl 0x82e02670
	ctx.lr = 0x82808DE4;
	sub_82E02670(ctx, base);
	// lis r11,-31890
	ctx.r11.s64 = -2089943040;
	// addi r5,r11,7672
	ctx.r5.s64 = ctx.r11.s64 + 7672;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r4,r1,792
	ctx.r4.s64 = ctx.r1.s64 + 792;
	// bl 0x82805c10
	ctx.lr = 0x82808DFC;
	sub_82805C10(ctx, base);
	// addi r3,r1,792
	ctx.r3.s64 = ctx.r1.s64 + 792;
	// bl 0x82e01bf0
	ctx.lr = 0x82808E04;
	sub_82E01BF0(ctx, base);
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// addi r3,r1,1296
	ctx.r3.s64 = ctx.r1.s64 + 1296;
	// addi r4,r11,5512
	ctx.r4.s64 = ctx.r11.s64 + 5512;
	// bl 0x82e02670
	ctx.lr = 0x82808E14;
	sub_82E02670(ctx, base);
	// lis r11,-31890
	ctx.r11.s64 = -2089943040;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r5,r11,7684
	ctx.r5.s64 = ctx.r11.s64 + 7684;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r4,r1,1296
	ctx.r4.s64 = ctx.r1.s64 + 1296;
	// bl 0x82805c10
	ctx.lr = 0x82808E2C;
	sub_82805C10(ctx, base);
	// addi r3,r1,1296
	ctx.r3.s64 = ctx.r1.s64 + 1296;
	// bl 0x82e01bf0
	ctx.lr = 0x82808E34;
	sub_82E01BF0(ctx, base);
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// addi r3,r1,800
	ctx.r3.s64 = ctx.r1.s64 + 800;
	// addi r4,r11,5488
	ctx.r4.s64 = ctx.r11.s64 + 5488;
	// bl 0x82e02670
	ctx.lr = 0x82808E44;
	sub_82E02670(ctx, base);
	// lis r11,-31890
	ctx.r11.s64 = -2089943040;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r5,r11,7696
	ctx.r5.s64 = ctx.r11.s64 + 7696;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r4,r1,800
	ctx.r4.s64 = ctx.r1.s64 + 800;
	// bl 0x82805c10
	ctx.lr = 0x82808E5C;
	sub_82805C10(ctx, base);
	// addi r3,r1,800
	ctx.r3.s64 = ctx.r1.s64 + 800;
	// bl 0x82e01bf0
	ctx.lr = 0x82808E64;
	sub_82E01BF0(ctx, base);
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// addi r3,r1,1672
	ctx.r3.s64 = ctx.r1.s64 + 1672;
	// addi r4,r11,5472
	ctx.r4.s64 = ctx.r11.s64 + 5472;
	// bl 0x82e02670
	ctx.lr = 0x82808E74;
	sub_82E02670(ctx, base);
	// lis r11,-31890
	ctx.r11.s64 = -2089943040;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r5,r11,9972
	ctx.r5.s64 = ctx.r11.s64 + 9972;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r4,r1,1672
	ctx.r4.s64 = ctx.r1.s64 + 1672;
	// bl 0x82805c10
	ctx.lr = 0x82808E8C;
	sub_82805C10(ctx, base);
	// addi r3,r1,1672
	ctx.r3.s64 = ctx.r1.s64 + 1672;
	// bl 0x82e01bf0
	ctx.lr = 0x82808E94;
	sub_82E01BF0(ctx, base);
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// addi r3,r1,808
	ctx.r3.s64 = ctx.r1.s64 + 808;
	// addi r4,r11,5456
	ctx.r4.s64 = ctx.r11.s64 + 5456;
	// bl 0x82e02670
	ctx.lr = 0x82808EA4;
	sub_82E02670(ctx, base);
	// lis r11,-31890
	ctx.r11.s64 = -2089943040;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r5,r11,10644
	ctx.r5.s64 = ctx.r11.s64 + 10644;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r4,r1,808
	ctx.r4.s64 = ctx.r1.s64 + 808;
	// bl 0x82805c10
	ctx.lr = 0x82808EBC;
	sub_82805C10(ctx, base);
	// addi r3,r1,808
	ctx.r3.s64 = ctx.r1.s64 + 808;
	// bl 0x82e01bf0
	ctx.lr = 0x82808EC4;
	sub_82E01BF0(ctx, base);
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// addi r3,r1,1304
	ctx.r3.s64 = ctx.r1.s64 + 1304;
	// addi r4,r11,5432
	ctx.r4.s64 = ctx.r11.s64 + 5432;
	// bl 0x82e02670
	ctx.lr = 0x82808ED4;
	sub_82E02670(ctx, base);
	// lis r11,-31890
	ctx.r11.s64 = -2089943040;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r5,r11,10656
	ctx.r5.s64 = ctx.r11.s64 + 10656;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r4,r1,1304
	ctx.r4.s64 = ctx.r1.s64 + 1304;
	// bl 0x82805c10
	ctx.lr = 0x82808EEC;
	sub_82805C10(ctx, base);
	// addi r3,r1,1304
	ctx.r3.s64 = ctx.r1.s64 + 1304;
	// bl 0x82e01bf0
	ctx.lr = 0x82808EF4;
	sub_82E01BF0(ctx, base);
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// addi r3,r1,816
	ctx.r3.s64 = ctx.r1.s64 + 816;
	// addi r4,r11,5424
	ctx.r4.s64 = ctx.r11.s64 + 5424;
	// bl 0x82e02670
	ctx.lr = 0x82808F04;
	sub_82E02670(ctx, base);
	// lis r11,-31890
	ctx.r11.s64 = -2089943040;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r11,10940
	ctx.r5.s64 = ctx.r11.s64 + 10940;
	// addi r4,r1,816
	ctx.r4.s64 = ctx.r1.s64 + 816;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82805c10
	ctx.lr = 0x82808F1C;
	sub_82805C10(ctx, base);
	// addi r3,r1,816
	ctx.r3.s64 = ctx.r1.s64 + 816;
	// bl 0x82e01bf0
	ctx.lr = 0x82808F24;
	sub_82E01BF0(ctx, base);
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// addi r3,r1,1552
	ctx.r3.s64 = ctx.r1.s64 + 1552;
	// addi r4,r11,5408
	ctx.r4.s64 = ctx.r11.s64 + 5408;
	// bl 0x82e02670
	ctx.lr = 0x82808F34;
	sub_82E02670(ctx, base);
	// lis r11,-31890
	ctx.r11.s64 = -2089943040;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r11,11344
	ctx.r5.s64 = ctx.r11.s64 + 11344;
	// addi r4,r1,1552
	ctx.r4.s64 = ctx.r1.s64 + 1552;
	// bl 0x82805c10
	ctx.lr = 0x82808F4C;
	sub_82805C10(ctx, base);
	// addi r3,r1,1552
	ctx.r3.s64 = ctx.r1.s64 + 1552;
	// bl 0x82e01bf0
	ctx.lr = 0x82808F54;
	sub_82E01BF0(ctx, base);
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// addi r3,r1,824
	ctx.r3.s64 = ctx.r1.s64 + 824;
	// addi r4,r11,5396
	ctx.r4.s64 = ctx.r11.s64 + 5396;
	// bl 0x82e02670
	ctx.lr = 0x82808F64;
	sub_82E02670(ctx, base);
	// lis r11,-31890
	ctx.r11.s64 = -2089943040;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r5,r11,11476
	ctx.r5.s64 = ctx.r11.s64 + 11476;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r4,r1,824
	ctx.r4.s64 = ctx.r1.s64 + 824;
	// bl 0x82805c10
	ctx.lr = 0x82808F7C;
	sub_82805C10(ctx, base);
	// addi r3,r1,824
	ctx.r3.s64 = ctx.r1.s64 + 824;
	// bl 0x82e01bf0
	ctx.lr = 0x82808F84;
	sub_82E01BF0(ctx, base);
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// addi r3,r1,1312
	ctx.r3.s64 = ctx.r1.s64 + 1312;
	// addi r4,r11,5380
	ctx.r4.s64 = ctx.r11.s64 + 5380;
	// bl 0x82e02670
	ctx.lr = 0x82808F94;
	sub_82E02670(ctx, base);
	// lis r11,-31890
	ctx.r11.s64 = -2089943040;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r5,r11,11680
	ctx.r5.s64 = ctx.r11.s64 + 11680;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r4,r1,1312
	ctx.r4.s64 = ctx.r1.s64 + 1312;
	// bl 0x82805c10
	ctx.lr = 0x82808FAC;
	sub_82805C10(ctx, base);
	// addi r3,r1,1312
	ctx.r3.s64 = ctx.r1.s64 + 1312;
	// bl 0x82e01bf0
	ctx.lr = 0x82808FB4;
	sub_82E01BF0(ctx, base);
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// addi r3,r1,832
	ctx.r3.s64 = ctx.r1.s64 + 832;
	// addi r4,r11,5368
	ctx.r4.s64 = ctx.r11.s64 + 5368;
	// bl 0x82e02670
	ctx.lr = 0x82808FC4;
	sub_82E02670(ctx, base);
	// lis r11,-31890
	ctx.r11.s64 = -2089943040;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r5,r11,12156
	ctx.r5.s64 = ctx.r11.s64 + 12156;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r4,r1,832
	ctx.r4.s64 = ctx.r1.s64 + 832;
	// bl 0x82805c10
	ctx.lr = 0x82808FDC;
	sub_82805C10(ctx, base);
	// addi r3,r1,832
	ctx.r3.s64 = ctx.r1.s64 + 832;
	// bl 0x82e01bf0
	ctx.lr = 0x82808FE4;
	sub_82E01BF0(ctx, base);
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// addi r3,r1,1736
	ctx.r3.s64 = ctx.r1.s64 + 1736;
	// addi r4,r11,5352
	ctx.r4.s64 = ctx.r11.s64 + 5352;
	// bl 0x82e02670
	ctx.lr = 0x82808FF4;
	sub_82E02670(ctx, base);
	// lis r11,-31890
	ctx.r11.s64 = -2089943040;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r5,r11,16028
	ctx.r5.s64 = ctx.r11.s64 + 16028;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r4,r1,1736
	ctx.r4.s64 = ctx.r1.s64 + 1736;
	// bl 0x82805c10
	ctx.lr = 0x8280900C;
	sub_82805C10(ctx, base);
	// addi r3,r1,1736
	ctx.r3.s64 = ctx.r1.s64 + 1736;
	// bl 0x82e01bf0
	ctx.lr = 0x82809014;
	sub_82E01BF0(ctx, base);
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// addi r3,r1,840
	ctx.r3.s64 = ctx.r1.s64 + 840;
	// addi r4,r11,5328
	ctx.r4.s64 = ctx.r11.s64 + 5328;
	// bl 0x82e02670
	ctx.lr = 0x82809024;
	sub_82E02670(ctx, base);
	// lis r11,-31890
	ctx.r11.s64 = -2089943040;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r5,r11,16040
	ctx.r5.s64 = ctx.r11.s64 + 16040;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r4,r1,840
	ctx.r4.s64 = ctx.r1.s64 + 840;
	// bl 0x82805c10
	ctx.lr = 0x8280903C;
	sub_82805C10(ctx, base);
	// addi r3,r1,840
	ctx.r3.s64 = ctx.r1.s64 + 840;
	// bl 0x82e01bf0
	ctx.lr = 0x82809044;
	sub_82E01BF0(ctx, base);
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// addi r3,r1,1320
	ctx.r3.s64 = ctx.r1.s64 + 1320;
	// addi r4,r11,5312
	ctx.r4.s64 = ctx.r11.s64 + 5312;
	// bl 0x82e02670
	ctx.lr = 0x82809054;
	sub_82E02670(ctx, base);
	// lis r11,-31890
	ctx.r11.s64 = -2089943040;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r11,12968
	ctx.r5.s64 = ctx.r11.s64 + 12968;
	// addi r4,r1,1320
	ctx.r4.s64 = ctx.r1.s64 + 1320;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82805c10
	ctx.lr = 0x8280906C;
	sub_82805C10(ctx, base);
	// addi r3,r1,1320
	ctx.r3.s64 = ctx.r1.s64 + 1320;
	// bl 0x82e01bf0
	ctx.lr = 0x82809074;
	sub_82E01BF0(ctx, base);
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// addi r3,r1,848
	ctx.r3.s64 = ctx.r1.s64 + 848;
	// addi r4,r11,5296
	ctx.r4.s64 = ctx.r11.s64 + 5296;
	// bl 0x82e02670
	ctx.lr = 0x82809084;
	sub_82E02670(ctx, base);
	// lis r11,-31890
	ctx.r11.s64 = -2089943040;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r5,r11,16180
	ctx.r5.s64 = ctx.r11.s64 + 16180;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r4,r1,848
	ctx.r4.s64 = ctx.r1.s64 + 848;
	// bl 0x82805c10
	ctx.lr = 0x8280909C;
	sub_82805C10(ctx, base);
	// addi r3,r1,848
	ctx.r3.s64 = ctx.r1.s64 + 848;
	// bl 0x82e01bf0
	ctx.lr = 0x828090A4;
	sub_82E01BF0(ctx, base);
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// addi r3,r1,1560
	ctx.r3.s64 = ctx.r1.s64 + 1560;
	// addi r4,r11,5276
	ctx.r4.s64 = ctx.r11.s64 + 5276;
	// bl 0x82e02670
	ctx.lr = 0x828090B4;
	sub_82E02670(ctx, base);
	// lis r11,-31890
	ctx.r11.s64 = -2089943040;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r5,r11,16192
	ctx.r5.s64 = ctx.r11.s64 + 16192;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r4,r1,1560
	ctx.r4.s64 = ctx.r1.s64 + 1560;
	// bl 0x82805c10
	ctx.lr = 0x828090CC;
	sub_82805C10(ctx, base);
	// addi r3,r1,1560
	ctx.r3.s64 = ctx.r1.s64 + 1560;
	// bl 0x82e01bf0
	ctx.lr = 0x828090D4;
	sub_82E01BF0(ctx, base);
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// addi r3,r1,856
	ctx.r3.s64 = ctx.r1.s64 + 856;
	// addi r4,r11,5256
	ctx.r4.s64 = ctx.r11.s64 + 5256;
	// bl 0x82e02670
	ctx.lr = 0x828090E4;
	sub_82E02670(ctx, base);
	// lis r11,-31890
	ctx.r11.s64 = -2089943040;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r5,r11,16204
	ctx.r5.s64 = ctx.r11.s64 + 16204;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r4,r1,856
	ctx.r4.s64 = ctx.r1.s64 + 856;
	// bl 0x82805c10
	ctx.lr = 0x828090FC;
	sub_82805C10(ctx, base);
	// addi r3,r1,856
	ctx.r3.s64 = ctx.r1.s64 + 856;
	// bl 0x82e01bf0
	ctx.lr = 0x82809104;
	sub_82E01BF0(ctx, base);
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// addi r3,r1,1328
	ctx.r3.s64 = ctx.r1.s64 + 1328;
	// addi r4,r11,5232
	ctx.r4.s64 = ctx.r11.s64 + 5232;
	// bl 0x82e02670
	ctx.lr = 0x82809114;
	sub_82E02670(ctx, base);
	// lis r11,-31890
	ctx.r11.s64 = -2089943040;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r5,r11,16216
	ctx.r5.s64 = ctx.r11.s64 + 16216;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r4,r1,1328
	ctx.r4.s64 = ctx.r1.s64 + 1328;
	// bl 0x82805c10
	ctx.lr = 0x8280912C;
	sub_82805C10(ctx, base);
	// addi r3,r1,1328
	ctx.r3.s64 = ctx.r1.s64 + 1328;
	// bl 0x82e01bf0
	ctx.lr = 0x82809134;
	sub_82E01BF0(ctx, base);
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// addi r3,r1,864
	ctx.r3.s64 = ctx.r1.s64 + 864;
	// addi r4,r11,5216
	ctx.r4.s64 = ctx.r11.s64 + 5216;
	// bl 0x82e02670
	ctx.lr = 0x82809144;
	sub_82E02670(ctx, base);
	// lis r11,-31890
	ctx.r11.s64 = -2089943040;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r5,r11,16584
	ctx.r5.s64 = ctx.r11.s64 + 16584;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r4,r1,864
	ctx.r4.s64 = ctx.r1.s64 + 864;
	// bl 0x82805c10
	ctx.lr = 0x8280915C;
	sub_82805C10(ctx, base);
	// addi r3,r1,864
	ctx.r3.s64 = ctx.r1.s64 + 864;
	// bl 0x82e01bf0
	ctx.lr = 0x82809164;
	sub_82E01BF0(ctx, base);
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// addi r3,r1,1680
	ctx.r3.s64 = ctx.r1.s64 + 1680;
	// addi r4,r11,5200
	ctx.r4.s64 = ctx.r11.s64 + 5200;
	// bl 0x82e02670
	ctx.lr = 0x82809174;
	sub_82E02670(ctx, base);
	// lis r11,-31890
	ctx.r11.s64 = -2089943040;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r5,r11,16596
	ctx.r5.s64 = ctx.r11.s64 + 16596;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r4,r1,1680
	ctx.r4.s64 = ctx.r1.s64 + 1680;
	// bl 0x82805c10
	ctx.lr = 0x8280918C;
	sub_82805C10(ctx, base);
	// addi r3,r1,1680
	ctx.r3.s64 = ctx.r1.s64 + 1680;
	// bl 0x82e01bf0
	ctx.lr = 0x82809194;
	sub_82E01BF0(ctx, base);
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// addi r3,r1,872
	ctx.r3.s64 = ctx.r1.s64 + 872;
	// addi r4,r11,5188
	ctx.r4.s64 = ctx.r11.s64 + 5188;
	// bl 0x82e02670
	ctx.lr = 0x828091A4;
	sub_82E02670(ctx, base);
	// lis r11,-31890
	ctx.r11.s64 = -2089943040;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r11,17584
	ctx.r5.s64 = ctx.r11.s64 + 17584;
	// addi r4,r1,872
	ctx.r4.s64 = ctx.r1.s64 + 872;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82805c10
	ctx.lr = 0x828091BC;
	sub_82805C10(ctx, base);
	// addi r3,r1,872
	ctx.r3.s64 = ctx.r1.s64 + 872;
	// bl 0x82e01bf0
	ctx.lr = 0x828091C4;
	sub_82E01BF0(ctx, base);
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// addi r3,r1,1336
	ctx.r3.s64 = ctx.r1.s64 + 1336;
	// addi r4,r11,5168
	ctx.r4.s64 = ctx.r11.s64 + 5168;
	// bl 0x82e02670
	ctx.lr = 0x828091D4;
	sub_82E02670(ctx, base);
	// lis r11,-31890
	ctx.r11.s64 = -2089943040;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r5,r11,17708
	ctx.r5.s64 = ctx.r11.s64 + 17708;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r4,r1,1336
	ctx.r4.s64 = ctx.r1.s64 + 1336;
	// bl 0x82805c10
	ctx.lr = 0x828091EC;
	sub_82805C10(ctx, base);
	// addi r3,r1,1336
	ctx.r3.s64 = ctx.r1.s64 + 1336;
	// bl 0x82e01bf0
	ctx.lr = 0x828091F4;
	sub_82E01BF0(ctx, base);
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// addi r3,r1,880
	ctx.r3.s64 = ctx.r1.s64 + 880;
	// addi r4,r11,5152
	ctx.r4.s64 = ctx.r11.s64 + 5152;
	// bl 0x82e02670
	ctx.lr = 0x82809204;
	sub_82E02670(ctx, base);
	// lis r11,-31890
	ctx.r11.s64 = -2089943040;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r5,r11,18152
	ctx.r5.s64 = ctx.r11.s64 + 18152;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r4,r1,880
	ctx.r4.s64 = ctx.r1.s64 + 880;
	// bl 0x82805c10
	ctx.lr = 0x8280921C;
	sub_82805C10(ctx, base);
	// addi r3,r1,880
	ctx.r3.s64 = ctx.r1.s64 + 880;
	// bl 0x82e01bf0
	ctx.lr = 0x82809224;
	sub_82E01BF0(ctx, base);
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// addi r3,r1,1568
	ctx.r3.s64 = ctx.r1.s64 + 1568;
	// addi r4,r11,5128
	ctx.r4.s64 = ctx.r11.s64 + 5128;
	// bl 0x82e02670
	ctx.lr = 0x82809234;
	sub_82E02670(ctx, base);
	// lis r11,-31890
	ctx.r11.s64 = -2089943040;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r5,r11,18164
	ctx.r5.s64 = ctx.r11.s64 + 18164;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r4,r1,1568
	ctx.r4.s64 = ctx.r1.s64 + 1568;
	// bl 0x82805c10
	ctx.lr = 0x8280924C;
	sub_82805C10(ctx, base);
	// addi r3,r1,1568
	ctx.r3.s64 = ctx.r1.s64 + 1568;
	// bl 0x82e01bf0
	ctx.lr = 0x82809254;
	sub_82E01BF0(ctx, base);
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// addi r3,r1,888
	ctx.r3.s64 = ctx.r1.s64 + 888;
	// addi r4,r11,5100
	ctx.r4.s64 = ctx.r11.s64 + 5100;
	// bl 0x82e02670
	ctx.lr = 0x82809264;
	sub_82E02670(ctx, base);
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r5,r11,12332
	ctx.r5.s64 = ctx.r11.s64 + 12332;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r4,r1,888
	ctx.r4.s64 = ctx.r1.s64 + 888;
	// bl 0x82805c10
	ctx.lr = 0x8280927C;
	sub_82805C10(ctx, base);
	// addi r3,r1,888
	ctx.r3.s64 = ctx.r1.s64 + 888;
	// bl 0x82e01bf0
	ctx.lr = 0x82809284;
	sub_82E01BF0(ctx, base);
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// addi r3,r1,1344
	ctx.r3.s64 = ctx.r1.s64 + 1344;
	// addi r4,r11,5092
	ctx.r4.s64 = ctx.r11.s64 + 5092;
	// bl 0x82e02670
	ctx.lr = 0x82809294;
	sub_82E02670(ctx, base);
	// lis r11,-31890
	ctx.r11.s64 = -2089943040;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r5,r11,18472
	ctx.r5.s64 = ctx.r11.s64 + 18472;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r4,r1,1344
	ctx.r4.s64 = ctx.r1.s64 + 1344;
	// bl 0x82805c10
	ctx.lr = 0x828092AC;
	sub_82805C10(ctx, base);
	// addi r3,r1,1344
	ctx.r3.s64 = ctx.r1.s64 + 1344;
	// bl 0x82e01bf0
	ctx.lr = 0x828092B4;
	sub_82E01BF0(ctx, base);
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// addi r3,r1,896
	ctx.r3.s64 = ctx.r1.s64 + 896;
	// addi r4,r11,5076
	ctx.r4.s64 = ctx.r11.s64 + 5076;
	// bl 0x82e02670
	ctx.lr = 0x828092C4;
	sub_82E02670(ctx, base);
	// lis r11,-31890
	ctx.r11.s64 = -2089943040;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r5,r11,20692
	ctx.r5.s64 = ctx.r11.s64 + 20692;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r4,r1,896
	ctx.r4.s64 = ctx.r1.s64 + 896;
	// bl 0x82805c10
	ctx.lr = 0x828092DC;
	sub_82805C10(ctx, base);
	// addi r3,r1,896
	ctx.r3.s64 = ctx.r1.s64 + 896;
	// bl 0x82e01bf0
	ctx.lr = 0x828092E4;
	sub_82E01BF0(ctx, base);
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// addi r3,r1,1768
	ctx.r3.s64 = ctx.r1.s64 + 1768;
	// addi r4,r11,5060
	ctx.r4.s64 = ctx.r11.s64 + 5060;
	// bl 0x82e02670
	ctx.lr = 0x828092F4;
	sub_82E02670(ctx, base);
	// lis r11,-31890
	ctx.r11.s64 = -2089943040;
	// addi r5,r11,20820
	ctx.r5.s64 = ctx.r11.s64 + 20820;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r4,r1,1768
	ctx.r4.s64 = ctx.r1.s64 + 1768;
	// bl 0x82805c10
	ctx.lr = 0x8280930C;
	sub_82805C10(ctx, base);
	// addi r3,r1,1768
	ctx.r3.s64 = ctx.r1.s64 + 1768;
	// bl 0x82e01bf0
	ctx.lr = 0x82809314;
	sub_82E01BF0(ctx, base);
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// addi r3,r1,904
	ctx.r3.s64 = ctx.r1.s64 + 904;
	// addi r4,r11,5048
	ctx.r4.s64 = ctx.r11.s64 + 5048;
	// bl 0x82e02670
	ctx.lr = 0x82809324;
	sub_82E02670(ctx, base);
	// lis r11,-31890
	ctx.r11.s64 = -2089943040;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r5,r11,20948
	ctx.r5.s64 = ctx.r11.s64 + 20948;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r4,r1,904
	ctx.r4.s64 = ctx.r1.s64 + 904;
	// bl 0x82805c10
	ctx.lr = 0x8280933C;
	sub_82805C10(ctx, base);
	// addi r3,r1,904
	ctx.r3.s64 = ctx.r1.s64 + 904;
	// bl 0x82e01bf0
	ctx.lr = 0x82809344;
	sub_82E01BF0(ctx, base);
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// addi r3,r1,1352
	ctx.r3.s64 = ctx.r1.s64 + 1352;
	// addi r4,r11,5032
	ctx.r4.s64 = ctx.r11.s64 + 5032;
	// bl 0x82e02670
	ctx.lr = 0x82809354;
	sub_82E02670(ctx, base);
	// lis r11,-31890
	ctx.r11.s64 = -2089943040;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r5,r11,21084
	ctx.r5.s64 = ctx.r11.s64 + 21084;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r4,r1,1352
	ctx.r4.s64 = ctx.r1.s64 + 1352;
	// bl 0x82805c10
	ctx.lr = 0x8280936C;
	sub_82805C10(ctx, base);
	// addi r3,r1,1352
	ctx.r3.s64 = ctx.r1.s64 + 1352;
	// bl 0x82e01bf0
	ctx.lr = 0x82809374;
	sub_82E01BF0(ctx, base);
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// addi r3,r1,912
	ctx.r3.s64 = ctx.r1.s64 + 912;
	// addi r4,r11,5004
	ctx.r4.s64 = ctx.r11.s64 + 5004;
	// bl 0x82e02670
	ctx.lr = 0x82809384;
	sub_82E02670(ctx, base);
	// lis r11,-31890
	ctx.r11.s64 = -2089943040;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r5,r11,21072
	ctx.r5.s64 = ctx.r11.s64 + 21072;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r4,r1,912
	ctx.r4.s64 = ctx.r1.s64 + 912;
	// bl 0x82805c10
	ctx.lr = 0x8280939C;
	sub_82805C10(ctx, base);
	// addi r3,r1,912
	ctx.r3.s64 = ctx.r1.s64 + 912;
	// bl 0x82e01bf0
	ctx.lr = 0x828093A4;
	sub_82E01BF0(ctx, base);
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// addi r3,r1,1576
	ctx.r3.s64 = ctx.r1.s64 + 1576;
	// addi r4,r11,4996
	ctx.r4.s64 = ctx.r11.s64 + 4996;
	// bl 0x82e02670
	ctx.lr = 0x828093B4;
	sub_82E02670(ctx, base);
	// lis r11,-31890
	ctx.r11.s64 = -2089943040;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r5,r11,22040
	ctx.r5.s64 = ctx.r11.s64 + 22040;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r4,r1,1576
	ctx.r4.s64 = ctx.r1.s64 + 1576;
	// bl 0x82805c10
	ctx.lr = 0x828093CC;
	sub_82805C10(ctx, base);
	// addi r3,r1,1576
	ctx.r3.s64 = ctx.r1.s64 + 1576;
	// bl 0x82e01bf0
	ctx.lr = 0x828093D4;
	sub_82E01BF0(ctx, base);
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// addi r3,r1,920
	ctx.r3.s64 = ctx.r1.s64 + 920;
	// addi r4,r11,4968
	ctx.r4.s64 = ctx.r11.s64 + 4968;
	// bl 0x82e02670
	ctx.lr = 0x828093E4;
	sub_82E02670(ctx, base);
	// lis r11,-31890
	ctx.r11.s64 = -2089943040;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r5,r11,22156
	ctx.r5.s64 = ctx.r11.s64 + 22156;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r4,r1,920
	ctx.r4.s64 = ctx.r1.s64 + 920;
	// bl 0x82805c10
	ctx.lr = 0x828093FC;
	sub_82805C10(ctx, base);
	// addi r3,r1,920
	ctx.r3.s64 = ctx.r1.s64 + 920;
	// bl 0x82e01bf0
	ctx.lr = 0x82809404;
	sub_82E01BF0(ctx, base);
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// addi r3,r1,1360
	ctx.r3.s64 = ctx.r1.s64 + 1360;
	// addi r4,r11,4952
	ctx.r4.s64 = ctx.r11.s64 + 4952;
	// bl 0x82e02670
	ctx.lr = 0x82809414;
	sub_82E02670(ctx, base);
	// lis r11,-31890
	ctx.r11.s64 = -2089943040;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r11,22500
	ctx.r5.s64 = ctx.r11.s64 + 22500;
	// addi r4,r1,1360
	ctx.r4.s64 = ctx.r1.s64 + 1360;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82805c10
	ctx.lr = 0x8280942C;
	sub_82805C10(ctx, base);
	// addi r3,r1,1360
	ctx.r3.s64 = ctx.r1.s64 + 1360;
	// bl 0x82e01bf0
	ctx.lr = 0x82809434;
	sub_82E01BF0(ctx, base);
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// addi r3,r1,928
	ctx.r3.s64 = ctx.r1.s64 + 928;
	// addi r4,r11,4936
	ctx.r4.s64 = ctx.r11.s64 + 4936;
	// bl 0x82e02670
	ctx.lr = 0x82809444;
	sub_82E02670(ctx, base);
	// lis r11,-31890
	ctx.r11.s64 = -2089943040;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r11,25532
	ctx.r5.s64 = ctx.r11.s64 + 25532;
	// addi r4,r1,928
	ctx.r4.s64 = ctx.r1.s64 + 928;
	// bl 0x82805c10
	ctx.lr = 0x8280945C;
	sub_82805C10(ctx, base);
	// addi r3,r1,928
	ctx.r3.s64 = ctx.r1.s64 + 928;
	// bl 0x82e01bf0
	ctx.lr = 0x82809464;
	sub_82E01BF0(ctx, base);
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// addi r3,r1,1688
	ctx.r3.s64 = ctx.r1.s64 + 1688;
	// addi r4,r11,4912
	ctx.r4.s64 = ctx.r11.s64 + 4912;
	// bl 0x82e02670
	ctx.lr = 0x82809474;
	sub_82E02670(ctx, base);
	// lis r11,-31890
	ctx.r11.s64 = -2089943040;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r5,r11,25544
	ctx.r5.s64 = ctx.r11.s64 + 25544;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r4,r1,1688
	ctx.r4.s64 = ctx.r1.s64 + 1688;
	// bl 0x82805c10
	ctx.lr = 0x8280948C;
	sub_82805C10(ctx, base);
	// addi r3,r1,1688
	ctx.r3.s64 = ctx.r1.s64 + 1688;
	// bl 0x82e01bf0
	ctx.lr = 0x82809494;
	sub_82E01BF0(ctx, base);
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// addi r3,r1,936
	ctx.r3.s64 = ctx.r1.s64 + 936;
	// addi r4,r11,4892
	ctx.r4.s64 = ctx.r11.s64 + 4892;
	// bl 0x82e02670
	ctx.lr = 0x828094A4;
	sub_82E02670(ctx, base);
	// lis r11,-31890
	ctx.r11.s64 = -2089943040;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r5,r11,25556
	ctx.r5.s64 = ctx.r11.s64 + 25556;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r4,r1,936
	ctx.r4.s64 = ctx.r1.s64 + 936;
	// bl 0x82805c10
	ctx.lr = 0x828094BC;
	sub_82805C10(ctx, base);
	// addi r3,r1,936
	ctx.r3.s64 = ctx.r1.s64 + 936;
	// bl 0x82e01bf0
	ctx.lr = 0x828094C4;
	sub_82E01BF0(ctx, base);
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// addi r4,r11,4872
	ctx.r4.s64 = ctx.r11.s64 + 4872;
	// bl 0x82e02670
	ctx.lr = 0x828094D4;
	sub_82E02670(ctx, base);
	// lis r11,-31890
	ctx.r11.s64 = -2089943040;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r5,r11,25568
	ctx.r5.s64 = ctx.r11.s64 + 25568;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// bl 0x82805c10
	ctx.lr = 0x828094EC;
	sub_82805C10(ctx, base);
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x82e01bf0
	ctx.lr = 0x828094F4;
	sub_82E01BF0(ctx, base);
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// addi r4,r11,4860
	ctx.r4.s64 = ctx.r11.s64 + 4860;
	// bl 0x82e02670
	ctx.lr = 0x82809504;
	sub_82E02670(ctx, base);
	// lis r11,-31890
	ctx.r11.s64 = -2089943040;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r5,r11,26964
	ctx.r5.s64 = ctx.r11.s64 + 26964;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// bl 0x82805c10
	ctx.lr = 0x8280951C;
	sub_82805C10(ctx, base);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82e01bf0
	ctx.lr = 0x82809524;
	sub_82E01BF0(ctx, base);
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// addi r3,r1,92
	ctx.r3.s64 = ctx.r1.s64 + 92;
	// addi r4,r11,4844
	ctx.r4.s64 = ctx.r11.s64 + 4844;
	// bl 0x82e02670
	ctx.lr = 0x82809534;
	sub_82E02670(ctx, base);
	// lis r11,-31890
	ctx.r11.s64 = -2089943040;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r5,r11,22736
	ctx.r5.s64 = ctx.r11.s64 + 22736;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r4,r1,92
	ctx.r4.s64 = ctx.r1.s64 + 92;
	// bl 0x82805c10
	ctx.lr = 0x8280954C;
	sub_82805C10(ctx, base);
	// addi r3,r1,92
	ctx.r3.s64 = ctx.r1.s64 + 92;
	// bl 0x82e01bf0
	ctx.lr = 0x82809554;
	sub_82E01BF0(ctx, base);
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// addi r3,r1,100
	ctx.r3.s64 = ctx.r1.s64 + 100;
	// addi r4,r11,4824
	ctx.r4.s64 = ctx.r11.s64 + 4824;
	// bl 0x82e02670
	ctx.lr = 0x82809564;
	sub_82E02670(ctx, base);
	// lis r11,-31890
	ctx.r11.s64 = -2089943040;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r11,22748
	ctx.r5.s64 = ctx.r11.s64 + 22748;
	// addi r4,r1,100
	ctx.r4.s64 = ctx.r1.s64 + 100;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82805c10
	ctx.lr = 0x8280957C;
	sub_82805C10(ctx, base);
	// addi r3,r1,100
	ctx.r3.s64 = ctx.r1.s64 + 100;
	// bl 0x82e01bf0
	ctx.lr = 0x82809584;
	sub_82E01BF0(ctx, base);
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// addi r3,r1,108
	ctx.r3.s64 = ctx.r1.s64 + 108;
	// addi r4,r11,4792
	ctx.r4.s64 = ctx.r11.s64 + 4792;
	// bl 0x82e02670
	ctx.lr = 0x82809594;
	sub_82E02670(ctx, base);
	// lis r11,-31890
	ctx.r11.s64 = -2089943040;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r5,r11,22760
	ctx.r5.s64 = ctx.r11.s64 + 22760;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r4,r1,108
	ctx.r4.s64 = ctx.r1.s64 + 108;
	// bl 0x82805c10
	ctx.lr = 0x828095AC;
	sub_82805C10(ctx, base);
	// addi r3,r1,108
	ctx.r3.s64 = ctx.r1.s64 + 108;
	// bl 0x82e01bf0
	ctx.lr = 0x828095B4;
	sub_82E01BF0(ctx, base);
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// addi r3,r1,116
	ctx.r3.s64 = ctx.r1.s64 + 116;
	// addi r4,r11,4776
	ctx.r4.s64 = ctx.r11.s64 + 4776;
	// bl 0x82e02670
	ctx.lr = 0x828095C4;
	sub_82E02670(ctx, base);
	// lis r11,-31890
	ctx.r11.s64 = -2089943040;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r5,r11,24664
	ctx.r5.s64 = ctx.r11.s64 + 24664;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r4,r1,116
	ctx.r4.s64 = ctx.r1.s64 + 116;
	// bl 0x82805c10
	ctx.lr = 0x828095DC;
	sub_82805C10(ctx, base);
	// addi r3,r1,116
	ctx.r3.s64 = ctx.r1.s64 + 116;
	// bl 0x82e01bf0
	ctx.lr = 0x828095E4;
	sub_82E01BF0(ctx, base);
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// addi r3,r1,124
	ctx.r3.s64 = ctx.r1.s64 + 124;
	// addi r4,r11,4760
	ctx.r4.s64 = ctx.r11.s64 + 4760;
	// bl 0x82e02670
	ctx.lr = 0x828095F4;
	sub_82E02670(ctx, base);
	// lis r11,-31890
	ctx.r11.s64 = -2089943040;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r5,r11,25028
	ctx.r5.s64 = ctx.r11.s64 + 25028;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r4,r1,124
	ctx.r4.s64 = ctx.r1.s64 + 124;
	// bl 0x82805c10
	ctx.lr = 0x8280960C;
	sub_82805C10(ctx, base);
	// addi r3,r1,124
	ctx.r3.s64 = ctx.r1.s64 + 124;
	// bl 0x82e01bf0
	ctx.lr = 0x82809614;
	sub_82E01BF0(ctx, base);
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// addi r3,r1,132
	ctx.r3.s64 = ctx.r1.s64 + 132;
	// addi r4,r11,4744
	ctx.r4.s64 = ctx.r11.s64 + 4744;
	// bl 0x82e02670
	ctx.lr = 0x82809624;
	sub_82E02670(ctx, base);
	// lis r11,-31890
	ctx.r11.s64 = -2089943040;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r5,r11,27308
	ctx.r5.s64 = ctx.r11.s64 + 27308;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r4,r1,132
	ctx.r4.s64 = ctx.r1.s64 + 132;
	// bl 0x82805c10
	ctx.lr = 0x8280963C;
	sub_82805C10(ctx, base);
	// addi r3,r1,132
	ctx.r3.s64 = ctx.r1.s64 + 132;
	// bl 0x82e01bf0
	ctx.lr = 0x82809644;
	sub_82E01BF0(ctx, base);
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// addi r3,r1,140
	ctx.r3.s64 = ctx.r1.s64 + 140;
	// addi r4,r11,4736
	ctx.r4.s64 = ctx.r11.s64 + 4736;
	// bl 0x82e02670
	ctx.lr = 0x82809654;
	sub_82E02670(ctx, base);
	// lis r11,-31890
	ctx.r11.s64 = -2089943040;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r5,r11,28552
	ctx.r5.s64 = ctx.r11.s64 + 28552;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r4,r1,140
	ctx.r4.s64 = ctx.r1.s64 + 140;
	// bl 0x82805c10
	ctx.lr = 0x8280966C;
	sub_82805C10(ctx, base);
	// addi r3,r1,140
	ctx.r3.s64 = ctx.r1.s64 + 140;
	// bl 0x82e01bf0
	ctx.lr = 0x82809674;
	sub_82E01BF0(ctx, base);
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// addi r3,r1,148
	ctx.r3.s64 = ctx.r1.s64 + 148;
	// addi r4,r11,4720
	ctx.r4.s64 = ctx.r11.s64 + 4720;
	// bl 0x82e02670
	ctx.lr = 0x82809684;
	sub_82E02670(ctx, base);
	// lis r11,-31890
	ctx.r11.s64 = -2089943040;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r5,r11,29292
	ctx.r5.s64 = ctx.r11.s64 + 29292;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r4,r1,148
	ctx.r4.s64 = ctx.r1.s64 + 148;
	// bl 0x82805c10
	ctx.lr = 0x8280969C;
	sub_82805C10(ctx, base);
	// addi r3,r1,148
	ctx.r3.s64 = ctx.r1.s64 + 148;
	// bl 0x82e01bf0
	ctx.lr = 0x828096A4;
	sub_82E01BF0(ctx, base);
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// addi r3,r1,156
	ctx.r3.s64 = ctx.r1.s64 + 156;
	// addi r4,r11,4700
	ctx.r4.s64 = ctx.r11.s64 + 4700;
	// bl 0x82e02670
	ctx.lr = 0x828096B4;
	sub_82E02670(ctx, base);
	// lis r11,-31890
	ctx.r11.s64 = -2089943040;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r11,27884
	ctx.r5.s64 = ctx.r11.s64 + 27884;
	// addi r4,r1,156
	ctx.r4.s64 = ctx.r1.s64 + 156;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82805c10
	ctx.lr = 0x828096CC;
	sub_82805C10(ctx, base);
	// addi r3,r1,156
	ctx.r3.s64 = ctx.r1.s64 + 156;
	// bl 0x82e01bf0
	ctx.lr = 0x828096D4;
	sub_82E01BF0(ctx, base);
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// addi r3,r1,164
	ctx.r3.s64 = ctx.r1.s64 + 164;
	// addi r4,r11,4692
	ctx.r4.s64 = ctx.r11.s64 + 4692;
	// bl 0x82e02670
	ctx.lr = 0x828096E4;
	sub_82E02670(ctx, base);
	// lis r11,-31890
	ctx.r11.s64 = -2089943040;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r5,r11,29100
	ctx.r5.s64 = ctx.r11.s64 + 29100;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r4,r1,164
	ctx.r4.s64 = ctx.r1.s64 + 164;
	// bl 0x82805c10
	ctx.lr = 0x828096FC;
	sub_82805C10(ctx, base);
	// addi r3,r1,164
	ctx.r3.s64 = ctx.r1.s64 + 164;
	// bl 0x82e01bf0
	ctx.lr = 0x82809704;
	sub_82E01BF0(ctx, base);
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// addi r3,r1,172
	ctx.r3.s64 = ctx.r1.s64 + 172;
	// addi r4,r11,4680
	ctx.r4.s64 = ctx.r11.s64 + 4680;
	// bl 0x82e02670
	ctx.lr = 0x82809714;
	sub_82E02670(ctx, base);
	// lis r11,-31890
	ctx.r11.s64 = -2089943040;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r5,r11,28916
	ctx.r5.s64 = ctx.r11.s64 + 28916;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r4,r1,172
	ctx.r4.s64 = ctx.r1.s64 + 172;
	// bl 0x82805c10
	ctx.lr = 0x8280972C;
	sub_82805C10(ctx, base);
	// addi r3,r1,172
	ctx.r3.s64 = ctx.r1.s64 + 172;
	// bl 0x82e01bf0
	ctx.lr = 0x82809734;
	sub_82E01BF0(ctx, base);
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// addi r3,r1,180
	ctx.r3.s64 = ctx.r1.s64 + 180;
	// addi r4,r11,4660
	ctx.r4.s64 = ctx.r11.s64 + 4660;
	// bl 0x82e02670
	ctx.lr = 0x82809744;
	sub_82E02670(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r4,r1,180
	ctx.r4.s64 = ctx.r1.s64 + 180;
	// bl 0x82805c10
	ctx.lr = 0x82809758;
	sub_82805C10(ctx, base);
	// addi r3,r1,180
	ctx.r3.s64 = ctx.r1.s64 + 180;
	// bl 0x82e01bf0
	ctx.lr = 0x82809760;
	sub_82E01BF0(ctx, base);
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// addi r3,r1,188
	ctx.r3.s64 = ctx.r1.s64 + 188;
	// addi r4,r11,4636
	ctx.r4.s64 = ctx.r11.s64 + 4636;
	// bl 0x82e02670
	ctx.lr = 0x82809770;
	sub_82E02670(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r4,r1,188
	ctx.r4.s64 = ctx.r1.s64 + 188;
	// bl 0x82805c10
	ctx.lr = 0x82809784;
	sub_82805C10(ctx, base);
	// addi r3,r1,188
	ctx.r3.s64 = ctx.r1.s64 + 188;
	// bl 0x82e01bf0
	ctx.lr = 0x8280978C;
	sub_82E01BF0(ctx, base);
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// addi r3,r1,196
	ctx.r3.s64 = ctx.r1.s64 + 196;
	// addi r4,r11,4624
	ctx.r4.s64 = ctx.r11.s64 + 4624;
	// bl 0x82e02670
	ctx.lr = 0x8280979C;
	sub_82E02670(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r4,r1,196
	ctx.r4.s64 = ctx.r1.s64 + 196;
	// bl 0x82805c10
	ctx.lr = 0x828097B0;
	sub_82805C10(ctx, base);
	// addi r3,r1,196
	ctx.r3.s64 = ctx.r1.s64 + 196;
	// bl 0x82e01bf0
	ctx.lr = 0x828097B8;
	sub_82E01BF0(ctx, base);
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// addi r3,r1,204
	ctx.r3.s64 = ctx.r1.s64 + 204;
	// addi r4,r11,4608
	ctx.r4.s64 = ctx.r11.s64 + 4608;
	// bl 0x82e02670
	ctx.lr = 0x828097C8;
	sub_82E02670(ctx, base);
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r5,r11,1556
	ctx.r5.s64 = ctx.r11.s64 + 1556;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r4,r1,204
	ctx.r4.s64 = ctx.r1.s64 + 204;
	// bl 0x82805c10
	ctx.lr = 0x828097E0;
	sub_82805C10(ctx, base);
	// addi r3,r1,204
	ctx.r3.s64 = ctx.r1.s64 + 204;
	// bl 0x82e01bf0
	ctx.lr = 0x828097E8;
	sub_82E01BF0(ctx, base);
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// addi r3,r1,212
	ctx.r3.s64 = ctx.r1.s64 + 212;
	// addi r4,r11,4592
	ctx.r4.s64 = ctx.r11.s64 + 4592;
	// bl 0x82e02670
	ctx.lr = 0x828097F8;
	sub_82E02670(ctx, base);
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r11,4824
	ctx.r5.s64 = ctx.r11.s64 + 4824;
	// addi r4,r1,212
	ctx.r4.s64 = ctx.r1.s64 + 212;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82805c10
	ctx.lr = 0x82809810;
	sub_82805C10(ctx, base);
	// addi r3,r1,212
	ctx.r3.s64 = ctx.r1.s64 + 212;
	// bl 0x82e01bf0
	ctx.lr = 0x82809818;
	sub_82E01BF0(ctx, base);
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// addi r3,r1,220
	ctx.r3.s64 = ctx.r1.s64 + 220;
	// addi r4,r11,4552
	ctx.r4.s64 = ctx.r11.s64 + 4552;
	// bl 0x82e02670
	ctx.lr = 0x82809828;
	sub_82E02670(ctx, base);
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r5,r11,6892
	ctx.r5.s64 = ctx.r11.s64 + 6892;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r4,r1,220
	ctx.r4.s64 = ctx.r1.s64 + 220;
	// bl 0x82805c10
	ctx.lr = 0x82809840;
	sub_82805C10(ctx, base);
	// addi r3,r1,220
	ctx.r3.s64 = ctx.r1.s64 + 220;
	// bl 0x82e01bf0
	ctx.lr = 0x82809848;
	sub_82E01BF0(ctx, base);
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// addi r3,r1,228
	ctx.r3.s64 = ctx.r1.s64 + 228;
	// addi r4,r11,4512
	ctx.r4.s64 = ctx.r11.s64 + 4512;
	// bl 0x82e02670
	ctx.lr = 0x82809858;
	sub_82E02670(ctx, base);
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r5,r11,6940
	ctx.r5.s64 = ctx.r11.s64 + 6940;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r4,r1,228
	ctx.r4.s64 = ctx.r1.s64 + 228;
	// bl 0x82805c10
	ctx.lr = 0x82809870;
	sub_82805C10(ctx, base);
	// addi r3,r1,228
	ctx.r3.s64 = ctx.r1.s64 + 228;
	// bl 0x82e01bf0
	ctx.lr = 0x82809878;
	sub_82E01BF0(ctx, base);
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// addi r3,r1,236
	ctx.r3.s64 = ctx.r1.s64 + 236;
	// addi r4,r11,4476
	ctx.r4.s64 = ctx.r11.s64 + 4476;
	// bl 0x82e02670
	ctx.lr = 0x82809888;
	sub_82E02670(ctx, base);
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r5,r11,6916
	ctx.r5.s64 = ctx.r11.s64 + 6916;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r4,r1,236
	ctx.r4.s64 = ctx.r1.s64 + 236;
	// bl 0x82805c10
	ctx.lr = 0x828098A0;
	sub_82805C10(ctx, base);
	// addi r3,r1,236
	ctx.r3.s64 = ctx.r1.s64 + 236;
	// bl 0x82e01bf0
	ctx.lr = 0x828098A8;
	sub_82E01BF0(ctx, base);
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// addi r3,r1,244
	ctx.r3.s64 = ctx.r1.s64 + 244;
	// addi r4,r11,4448
	ctx.r4.s64 = ctx.r11.s64 + 4448;
	// bl 0x82e02670
	ctx.lr = 0x828098B8;
	sub_82E02670(ctx, base);
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r5,r11,7036
	ctx.r5.s64 = ctx.r11.s64 + 7036;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r4,r1,244
	ctx.r4.s64 = ctx.r1.s64 + 244;
	// bl 0x82805c10
	ctx.lr = 0x828098D0;
	sub_82805C10(ctx, base);
	// addi r3,r1,244
	ctx.r3.s64 = ctx.r1.s64 + 244;
	// bl 0x82e01bf0
	ctx.lr = 0x828098D8;
	sub_82E01BF0(ctx, base);
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// addi r3,r1,252
	ctx.r3.s64 = ctx.r1.s64 + 252;
	// addi r4,r11,4420
	ctx.r4.s64 = ctx.r11.s64 + 4420;
	// bl 0x82e02670
	ctx.lr = 0x828098E8;
	sub_82E02670(ctx, base);
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r5,r11,6928
	ctx.r5.s64 = ctx.r11.s64 + 6928;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r4,r1,252
	ctx.r4.s64 = ctx.r1.s64 + 252;
	// bl 0x82805c10
	ctx.lr = 0x82809900;
	sub_82805C10(ctx, base);
	// addi r3,r1,252
	ctx.r3.s64 = ctx.r1.s64 + 252;
	// bl 0x82e01bf0
	ctx.lr = 0x82809908;
	sub_82E01BF0(ctx, base);
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// addi r3,r1,260
	ctx.r3.s64 = ctx.r1.s64 + 260;
	// addi r4,r11,4384
	ctx.r4.s64 = ctx.r11.s64 + 4384;
	// bl 0x82e02670
	ctx.lr = 0x82809918;
	sub_82E02670(ctx, base);
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r11,7012
	ctx.r5.s64 = ctx.r11.s64 + 7012;
	// addi r4,r1,260
	ctx.r4.s64 = ctx.r1.s64 + 260;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82805c10
	ctx.lr = 0x82809930;
	sub_82805C10(ctx, base);
	// addi r3,r1,260
	ctx.r3.s64 = ctx.r1.s64 + 260;
	// bl 0x82e01bf0
	ctx.lr = 0x82809938;
	sub_82E01BF0(ctx, base);
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// addi r3,r1,268
	ctx.r3.s64 = ctx.r1.s64 + 268;
	// addi r4,r11,4348
	ctx.r4.s64 = ctx.r11.s64 + 4348;
	// bl 0x82e02670
	ctx.lr = 0x82809948;
	sub_82E02670(ctx, base);
	// li r6,0
	ctx.r6.s64 = 0;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r5,r11,6976
	ctx.r5.s64 = ctx.r11.s64 + 6976;
	// addi r4,r1,268
	ctx.r4.s64 = ctx.r1.s64 + 268;
	// bl 0x82805c10
	ctx.lr = 0x82809960;
	sub_82805C10(ctx, base);
	// addi r3,r1,268
	ctx.r3.s64 = ctx.r1.s64 + 268;
	// bl 0x82e01bf0
	ctx.lr = 0x82809968;
	sub_82E01BF0(ctx, base);
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// addi r3,r1,276
	ctx.r3.s64 = ctx.r1.s64 + 276;
	// addi r4,r11,4308
	ctx.r4.s64 = ctx.r11.s64 + 4308;
	// bl 0x82e02670
	ctx.lr = 0x82809978;
	sub_82E02670(ctx, base);
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r5,r11,6988
	ctx.r5.s64 = ctx.r11.s64 + 6988;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r4,r1,276
	ctx.r4.s64 = ctx.r1.s64 + 276;
	// bl 0x82805c10
	ctx.lr = 0x82809990;
	sub_82805C10(ctx, base);
	// addi r3,r1,276
	ctx.r3.s64 = ctx.r1.s64 + 276;
	// bl 0x82e01bf0
	ctx.lr = 0x82809998;
	sub_82E01BF0(ctx, base);
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// addi r3,r1,284
	ctx.r3.s64 = ctx.r1.s64 + 284;
	// addi r4,r11,4264
	ctx.r4.s64 = ctx.r11.s64 + 4264;
	// bl 0x82e02670
	ctx.lr = 0x828099A8;
	sub_82E02670(ctx, base);
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r5,r11,6952
	ctx.r5.s64 = ctx.r11.s64 + 6952;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r4,r1,284
	ctx.r4.s64 = ctx.r1.s64 + 284;
	// bl 0x82805c10
	ctx.lr = 0x828099C0;
	sub_82805C10(ctx, base);
	// addi r3,r1,284
	ctx.r3.s64 = ctx.r1.s64 + 284;
	// bl 0x82e01bf0
	ctx.lr = 0x828099C8;
	sub_82E01BF0(ctx, base);
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// addi r3,r1,292
	ctx.r3.s64 = ctx.r1.s64 + 292;
	// addi r4,r11,4220
	ctx.r4.s64 = ctx.r11.s64 + 4220;
	// bl 0x82e02670
	ctx.lr = 0x828099D8;
	sub_82E02670(ctx, base);
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r5,r11,6964
	ctx.r5.s64 = ctx.r11.s64 + 6964;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r4,r1,292
	ctx.r4.s64 = ctx.r1.s64 + 292;
	// bl 0x82805c10
	ctx.lr = 0x828099F0;
	sub_82805C10(ctx, base);
	// addi r3,r1,292
	ctx.r3.s64 = ctx.r1.s64 + 292;
	// bl 0x82e01bf0
	ctx.lr = 0x828099F8;
	sub_82E01BF0(ctx, base);
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// addi r3,r1,300
	ctx.r3.s64 = ctx.r1.s64 + 300;
	// addi r4,r11,4176
	ctx.r4.s64 = ctx.r11.s64 + 4176;
	// bl 0x82e02670
	ctx.lr = 0x82809A08;
	sub_82E02670(ctx, base);
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r5,r11,7024
	ctx.r5.s64 = ctx.r11.s64 + 7024;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r4,r1,300
	ctx.r4.s64 = ctx.r1.s64 + 300;
	// bl 0x82805c10
	ctx.lr = 0x82809A20;
	sub_82805C10(ctx, base);
	// addi r3,r1,300
	ctx.r3.s64 = ctx.r1.s64 + 300;
	// bl 0x82e01bf0
	ctx.lr = 0x82809A28;
	sub_82E01BF0(ctx, base);
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// addi r3,r1,308
	ctx.r3.s64 = ctx.r1.s64 + 308;
	// addi r4,r11,4160
	ctx.r4.s64 = ctx.r11.s64 + 4160;
	// bl 0x82e02670
	ctx.lr = 0x82809A38;
	sub_82E02670(ctx, base);
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r5,r11,12284
	ctx.r5.s64 = ctx.r11.s64 + 12284;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r4,r1,308
	ctx.r4.s64 = ctx.r1.s64 + 308;
	// bl 0x82805c10
	ctx.lr = 0x82809A50;
	sub_82805C10(ctx, base);
	// addi r3,r1,308
	ctx.r3.s64 = ctx.r1.s64 + 308;
	// bl 0x82e01bf0
	ctx.lr = 0x82809A58;
	sub_82E01BF0(ctx, base);
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// addi r3,r1,316
	ctx.r3.s64 = ctx.r1.s64 + 316;
	// addi r4,r11,4132
	ctx.r4.s64 = ctx.r11.s64 + 4132;
	// bl 0x82e02670
	ctx.lr = 0x82809A68;
	sub_82E02670(ctx, base);
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r11,17360
	ctx.r5.s64 = ctx.r11.s64 + 17360;
	// addi r4,r1,316
	ctx.r4.s64 = ctx.r1.s64 + 316;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82805c10
	ctx.lr = 0x82809A80;
	sub_82805C10(ctx, base);
	// addi r3,r1,316
	ctx.r3.s64 = ctx.r1.s64 + 316;
	// bl 0x82e01bf0
	ctx.lr = 0x82809A88;
	sub_82E01BF0(ctx, base);
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// addi r3,r1,324
	ctx.r3.s64 = ctx.r1.s64 + 324;
	// addi r4,r11,4096
	ctx.r4.s64 = ctx.r11.s64 + 4096;
	// bl 0x82e02670
	ctx.lr = 0x82809A98;
	sub_82E02670(ctx, base);
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r5,r11,17444
	ctx.r5.s64 = ctx.r11.s64 + 17444;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r4,r1,324
	ctx.r4.s64 = ctx.r1.s64 + 324;
	// bl 0x82805c10
	ctx.lr = 0x82809AB0;
	sub_82805C10(ctx, base);
	// addi r3,r1,324
	ctx.r3.s64 = ctx.r1.s64 + 324;
	// bl 0x82e01bf0
	ctx.lr = 0x82809AB8;
	sub_82E01BF0(ctx, base);
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// addi r3,r1,332
	ctx.r3.s64 = ctx.r1.s64 + 332;
	// addi r4,r11,4056
	ctx.r4.s64 = ctx.r11.s64 + 4056;
	// bl 0x82e02670
	ctx.lr = 0x82809AC8;
	sub_82E02670(ctx, base);
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r5,r11,17396
	ctx.r5.s64 = ctx.r11.s64 + 17396;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r4,r1,332
	ctx.r4.s64 = ctx.r1.s64 + 332;
	// bl 0x82805c10
	ctx.lr = 0x82809AE0;
	sub_82805C10(ctx, base);
	// addi r3,r1,332
	ctx.r3.s64 = ctx.r1.s64 + 332;
	// bl 0x82e01bf0
	ctx.lr = 0x82809AE8;
	sub_82E01BF0(ctx, base);
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// addi r3,r1,340
	ctx.r3.s64 = ctx.r1.s64 + 340;
	// addi r4,r11,4020
	ctx.r4.s64 = ctx.r11.s64 + 4020;
	// bl 0x82e02670
	ctx.lr = 0x82809AF8;
	sub_82E02670(ctx, base);
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r5,r11,17408
	ctx.r5.s64 = ctx.r11.s64 + 17408;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r4,r1,340
	ctx.r4.s64 = ctx.r1.s64 + 340;
	// bl 0x82805c10
	ctx.lr = 0x82809B10;
	sub_82805C10(ctx, base);
	// addi r3,r1,340
	ctx.r3.s64 = ctx.r1.s64 + 340;
	// bl 0x82e01bf0
	ctx.lr = 0x82809B18;
	sub_82E01BF0(ctx, base);
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// addi r3,r1,348
	ctx.r3.s64 = ctx.r1.s64 + 348;
	// addi r4,r11,3976
	ctx.r4.s64 = ctx.r11.s64 + 3976;
	// bl 0x82e02670
	ctx.lr = 0x82809B28;
	sub_82E02670(ctx, base);
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r5,r11,17420
	ctx.r5.s64 = ctx.r11.s64 + 17420;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r4,r1,348
	ctx.r4.s64 = ctx.r1.s64 + 348;
	// bl 0x82805c10
	ctx.lr = 0x82809B40;
	sub_82805C10(ctx, base);
	// addi r3,r1,348
	ctx.r3.s64 = ctx.r1.s64 + 348;
	// bl 0x82e01bf0
	ctx.lr = 0x82809B48;
	sub_82E01BF0(ctx, base);
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// addi r3,r1,356
	ctx.r3.s64 = ctx.r1.s64 + 356;
	// addi r4,r11,3940
	ctx.r4.s64 = ctx.r11.s64 + 3940;
	// bl 0x82e02670
	ctx.lr = 0x82809B58;
	sub_82E02670(ctx, base);
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r5,r11,17432
	ctx.r5.s64 = ctx.r11.s64 + 17432;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r4,r1,356
	ctx.r4.s64 = ctx.r1.s64 + 356;
	// bl 0x82805c10
	ctx.lr = 0x82809B70;
	sub_82805C10(ctx, base);
	// addi r3,r1,356
	ctx.r3.s64 = ctx.r1.s64 + 356;
	// bl 0x82e01bf0
	ctx.lr = 0x82809B78;
	sub_82E01BF0(ctx, base);
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// addi r3,r1,364
	ctx.r3.s64 = ctx.r1.s64 + 364;
	// addi r4,r11,3908
	ctx.r4.s64 = ctx.r11.s64 + 3908;
	// bl 0x82e02670
	ctx.lr = 0x82809B88;
	sub_82E02670(ctx, base);
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r5,r11,17468
	ctx.r5.s64 = ctx.r11.s64 + 17468;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r4,r1,364
	ctx.r4.s64 = ctx.r1.s64 + 364;
	// bl 0x82805c10
	ctx.lr = 0x82809BA0;
	sub_82805C10(ctx, base);
	// addi r3,r1,364
	ctx.r3.s64 = ctx.r1.s64 + 364;
	// bl 0x82e01bf0
	ctx.lr = 0x82809BA8;
	sub_82E01BF0(ctx, base);
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// addi r3,r1,372
	ctx.r3.s64 = ctx.r1.s64 + 372;
	// addi r4,r11,3872
	ctx.r4.s64 = ctx.r11.s64 + 3872;
	// bl 0x82e02670
	ctx.lr = 0x82809BB8;
	sub_82E02670(ctx, base);
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r11,17480
	ctx.r5.s64 = ctx.r11.s64 + 17480;
	// addi r4,r1,372
	ctx.r4.s64 = ctx.r1.s64 + 372;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82805c10
	ctx.lr = 0x82809BD0;
	sub_82805C10(ctx, base);
	// addi r3,r1,372
	ctx.r3.s64 = ctx.r1.s64 + 372;
	// bl 0x82e01bf0
	ctx.lr = 0x82809BD8;
	sub_82E01BF0(ctx, base);
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// addi r3,r1,380
	ctx.r3.s64 = ctx.r1.s64 + 380;
	// addi r4,r11,3840
	ctx.r4.s64 = ctx.r11.s64 + 3840;
	// bl 0x82e02670
	ctx.lr = 0x82809BE8;
	sub_82E02670(ctx, base);
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r5,r11,17492
	ctx.r5.s64 = ctx.r11.s64 + 17492;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r4,r1,380
	ctx.r4.s64 = ctx.r1.s64 + 380;
	// bl 0x82805c10
	ctx.lr = 0x82809C00;
	sub_82805C10(ctx, base);
	// addi r3,r1,380
	ctx.r3.s64 = ctx.r1.s64 + 380;
	// bl 0x82e01bf0
	ctx.lr = 0x82809C08;
	sub_82E01BF0(ctx, base);
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// addi r3,r1,388
	ctx.r3.s64 = ctx.r1.s64 + 388;
	// addi r4,r11,3812
	ctx.r4.s64 = ctx.r11.s64 + 3812;
	// bl 0x82e02670
	ctx.lr = 0x82809C18;
	sub_82E02670(ctx, base);
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r5,r11,17504
	ctx.r5.s64 = ctx.r11.s64 + 17504;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r4,r1,388
	ctx.r4.s64 = ctx.r1.s64 + 388;
	// bl 0x82805c10
	ctx.lr = 0x82809C30;
	sub_82805C10(ctx, base);
	// addi r3,r1,388
	ctx.r3.s64 = ctx.r1.s64 + 388;
	// bl 0x82e01bf0
	ctx.lr = 0x82809C38;
	sub_82E01BF0(ctx, base);
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// addi r3,r1,396
	ctx.r3.s64 = ctx.r1.s64 + 396;
	// addi r4,r11,3788
	ctx.r4.s64 = ctx.r11.s64 + 3788;
	// bl 0x82e02670
	ctx.lr = 0x82809C48;
	sub_82E02670(ctx, base);
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r5,r11,23196
	ctx.r5.s64 = ctx.r11.s64 + 23196;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r4,r1,396
	ctx.r4.s64 = ctx.r1.s64 + 396;
	// bl 0x82805c10
	ctx.lr = 0x82809C60;
	sub_82805C10(ctx, base);
	// addi r3,r1,396
	ctx.r3.s64 = ctx.r1.s64 + 396;
	// bl 0x82e01bf0
	ctx.lr = 0x82809C68;
	sub_82E01BF0(ctx, base);
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// addi r3,r1,404
	ctx.r3.s64 = ctx.r1.s64 + 404;
	// addi r4,r11,3772
	ctx.r4.s64 = ctx.r11.s64 + 3772;
	// bl 0x82e02670
	ctx.lr = 0x82809C78;
	sub_82E02670(ctx, base);
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r5,r11,3132
	ctx.r5.s64 = ctx.r11.s64 + 3132;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r4,r1,404
	ctx.r4.s64 = ctx.r1.s64 + 404;
	// bl 0x82805c10
	ctx.lr = 0x82809C90;
	sub_82805C10(ctx, base);
	// addi r3,r1,404
	ctx.r3.s64 = ctx.r1.s64 + 404;
	// bl 0x82e01bf0
	ctx.lr = 0x82809C98;
	sub_82E01BF0(ctx, base);
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// addi r3,r1,412
	ctx.r3.s64 = ctx.r1.s64 + 412;
	// addi r4,r11,3756
	ctx.r4.s64 = ctx.r11.s64 + 3756;
	// bl 0x82e02670
	ctx.lr = 0x82809CA8;
	sub_82E02670(ctx, base);
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r5,r11,24884
	ctx.r5.s64 = ctx.r11.s64 + 24884;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r4,r1,412
	ctx.r4.s64 = ctx.r1.s64 + 412;
	// bl 0x82805c10
	ctx.lr = 0x82809CC0;
	sub_82805C10(ctx, base);
	// addi r3,r1,412
	ctx.r3.s64 = ctx.r1.s64 + 412;
	// bl 0x82e01bf0
	ctx.lr = 0x82809CC8;
	sub_82E01BF0(ctx, base);
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// addi r3,r1,420
	ctx.r3.s64 = ctx.r1.s64 + 420;
	// addi r4,r11,3740
	ctx.r4.s64 = ctx.r11.s64 + 3740;
	// bl 0x82e02670
	ctx.lr = 0x82809CD8;
	sub_82E02670(ctx, base);
	// lis r11,-31889
	ctx.r11.s64 = -2089877504;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r5,r11,19344
	ctx.r5.s64 = ctx.r11.s64 + 19344;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r4,r1,420
	ctx.r4.s64 = ctx.r1.s64 + 420;
	// bl 0x82805c10
	ctx.lr = 0x82809CF0;
	sub_82805C10(ctx, base);
	// addi r3,r1,420
	ctx.r3.s64 = ctx.r1.s64 + 420;
	// bl 0x82e01bf0
	ctx.lr = 0x82809CF8;
	sub_82E01BF0(ctx, base);
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// addi r3,r1,428
	ctx.r3.s64 = ctx.r1.s64 + 428;
	// addi r4,r11,3716
	ctx.r4.s64 = ctx.r11.s64 + 3716;
	// bl 0x82e02670
	ctx.lr = 0x82809D08;
	sub_82E02670(ctx, base);
	// lis r11,-31889
	ctx.r11.s64 = -2089877504;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r11,19492
	ctx.r5.s64 = ctx.r11.s64 + 19492;
	// addi r4,r1,428
	ctx.r4.s64 = ctx.r1.s64 + 428;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82805c10
	ctx.lr = 0x82809D20;
	sub_82805C10(ctx, base);
	// addi r3,r1,428
	ctx.r3.s64 = ctx.r1.s64 + 428;
	// bl 0x82e01bf0
	ctx.lr = 0x82809D28;
	sub_82E01BF0(ctx, base);
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// addi r3,r1,436
	ctx.r3.s64 = ctx.r1.s64 + 436;
	// addi r4,r11,3692
	ctx.r4.s64 = ctx.r11.s64 + 3692;
	// bl 0x82e02670
	ctx.lr = 0x82809D38;
	sub_82E02670(ctx, base);
	// lis r11,-31889
	ctx.r11.s64 = -2089877504;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r5,r11,19504
	ctx.r5.s64 = ctx.r11.s64 + 19504;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r4,r1,436
	ctx.r4.s64 = ctx.r1.s64 + 436;
	// bl 0x82805c10
	ctx.lr = 0x82809D50;
	sub_82805C10(ctx, base);
	// addi r3,r1,436
	ctx.r3.s64 = ctx.r1.s64 + 436;
	// bl 0x82e01bf0
	ctx.lr = 0x82809D58;
	sub_82E01BF0(ctx, base);
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// addi r3,r1,444
	ctx.r3.s64 = ctx.r1.s64 + 444;
	// addi r4,r11,3676
	ctx.r4.s64 = ctx.r11.s64 + 3676;
	// bl 0x82e02670
	ctx.lr = 0x82809D68;
	sub_82E02670(ctx, base);
	// lis r11,-31889
	ctx.r11.s64 = -2089877504;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r5,r11,20192
	ctx.r5.s64 = ctx.r11.s64 + 20192;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r4,r1,444
	ctx.r4.s64 = ctx.r1.s64 + 444;
	// bl 0x82805c10
	ctx.lr = 0x82809D80;
	sub_82805C10(ctx, base);
	// addi r3,r1,444
	ctx.r3.s64 = ctx.r1.s64 + 444;
	// bl 0x82e01bf0
	ctx.lr = 0x82809D88;
	sub_82E01BF0(ctx, base);
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// addi r3,r1,452
	ctx.r3.s64 = ctx.r1.s64 + 452;
	// addi r4,r11,3660
	ctx.r4.s64 = ctx.r11.s64 + 3660;
	// bl 0x82e02670
	ctx.lr = 0x82809D98;
	sub_82E02670(ctx, base);
	// lis r11,-31889
	ctx.r11.s64 = -2089877504;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r5,r11,21248
	ctx.r5.s64 = ctx.r11.s64 + 21248;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r4,r1,452
	ctx.r4.s64 = ctx.r1.s64 + 452;
	// bl 0x82805c10
	ctx.lr = 0x82809DB0;
	sub_82805C10(ctx, base);
	// addi r3,r1,452
	ctx.r3.s64 = ctx.r1.s64 + 452;
	// bl 0x82e01bf0
	ctx.lr = 0x82809DB8;
	sub_82E01BF0(ctx, base);
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// addi r3,r1,460
	ctx.r3.s64 = ctx.r1.s64 + 460;
	// addi r4,r11,3640
	ctx.r4.s64 = ctx.r11.s64 + 3640;
	// bl 0x82e02670
	ctx.lr = 0x82809DC8;
	sub_82E02670(ctx, base);
	// lis r11,-31889
	ctx.r11.s64 = -2089877504;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r5,r11,21260
	ctx.r5.s64 = ctx.r11.s64 + 21260;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r4,r1,460
	ctx.r4.s64 = ctx.r1.s64 + 460;
	// bl 0x82805c10
	ctx.lr = 0x82809DE0;
	sub_82805C10(ctx, base);
	// addi r3,r1,460
	ctx.r3.s64 = ctx.r1.s64 + 460;
	// bl 0x82e01bf0
	ctx.lr = 0x82809DE8;
	sub_82E01BF0(ctx, base);
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// addi r3,r1,468
	ctx.r3.s64 = ctx.r1.s64 + 468;
	// addi r4,r11,3616
	ctx.r4.s64 = ctx.r11.s64 + 3616;
	// bl 0x82e02670
	ctx.lr = 0x82809DF8;
	sub_82E02670(ctx, base);
	// lis r11,-31889
	ctx.r11.s64 = -2089877504;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r5,r11,21272
	ctx.r5.s64 = ctx.r11.s64 + 21272;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r4,r1,468
	ctx.r4.s64 = ctx.r1.s64 + 468;
	// bl 0x82805c10
	ctx.lr = 0x82809E10;
	sub_82805C10(ctx, base);
	// addi r3,r1,468
	ctx.r3.s64 = ctx.r1.s64 + 468;
	// bl 0x82e01bf0
	ctx.lr = 0x82809E18;
	sub_82E01BF0(ctx, base);
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// addi r3,r1,476
	ctx.r3.s64 = ctx.r1.s64 + 476;
	// addi r4,r11,3604
	ctx.r4.s64 = ctx.r11.s64 + 3604;
	// bl 0x82e02670
	ctx.lr = 0x82809E28;
	sub_82E02670(ctx, base);
	// lis r11,-31889
	ctx.r11.s64 = -2089877504;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r11,22296
	ctx.r5.s64 = ctx.r11.s64 + 22296;
	// addi r4,r1,476
	ctx.r4.s64 = ctx.r1.s64 + 476;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82805c10
	ctx.lr = 0x82809E40;
	sub_82805C10(ctx, base);
	// addi r3,r1,476
	ctx.r3.s64 = ctx.r1.s64 + 476;
	// bl 0x82e01bf0
	ctx.lr = 0x82809E48;
	sub_82E01BF0(ctx, base);
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// addi r3,r1,484
	ctx.r3.s64 = ctx.r1.s64 + 484;
	// addi r4,r11,3588
	ctx.r4.s64 = ctx.r11.s64 + 3588;
	// bl 0x82e02670
	ctx.lr = 0x82809E58;
	sub_82E02670(ctx, base);
	// li r6,0
	ctx.r6.s64 = 0;
	// lis r11,-31889
	ctx.r11.s64 = -2089877504;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r5,r11,22992
	ctx.r5.s64 = ctx.r11.s64 + 22992;
	// addi r4,r1,484
	ctx.r4.s64 = ctx.r1.s64 + 484;
	// bl 0x82805c10
	ctx.lr = 0x82809E70;
	sub_82805C10(ctx, base);
	// addi r3,r1,484
	ctx.r3.s64 = ctx.r1.s64 + 484;
	// bl 0x82e01bf0
	ctx.lr = 0x82809E78;
	sub_82E01BF0(ctx, base);
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// addi r3,r1,492
	ctx.r3.s64 = ctx.r1.s64 + 492;
	// addi r4,r11,3576
	ctx.r4.s64 = ctx.r11.s64 + 3576;
	// bl 0x82e02670
	ctx.lr = 0x82809E88;
	sub_82E02670(ctx, base);
	// lis r11,-31889
	ctx.r11.s64 = -2089877504;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r5,r11,28668
	ctx.r5.s64 = ctx.r11.s64 + 28668;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r4,r1,492
	ctx.r4.s64 = ctx.r1.s64 + 492;
	// bl 0x82805c10
	ctx.lr = 0x82809EA0;
	sub_82805C10(ctx, base);
	// addi r3,r1,492
	ctx.r3.s64 = ctx.r1.s64 + 492;
	// bl 0x82e01bf0
	ctx.lr = 0x82809EA8;
	sub_82E01BF0(ctx, base);
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// addi r3,r1,500
	ctx.r3.s64 = ctx.r1.s64 + 500;
	// addi r4,r11,3556
	ctx.r4.s64 = ctx.r11.s64 + 3556;
	// bl 0x82e02670
	ctx.lr = 0x82809EB8;
	sub_82E02670(ctx, base);
	// lis r11,-31889
	ctx.r11.s64 = -2089877504;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r5,r11,29388
	ctx.r5.s64 = ctx.r11.s64 + 29388;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r4,r1,500
	ctx.r4.s64 = ctx.r1.s64 + 500;
	// bl 0x82805c10
	ctx.lr = 0x82809ED0;
	sub_82805C10(ctx, base);
	// addi r3,r1,500
	ctx.r3.s64 = ctx.r1.s64 + 500;
	// bl 0x82e01bf0
	ctx.lr = 0x82809ED8;
	sub_82E01BF0(ctx, base);
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// addi r3,r1,508
	ctx.r3.s64 = ctx.r1.s64 + 508;
	// addi r4,r11,3536
	ctx.r4.s64 = ctx.r11.s64 + 3536;
	// bl 0x82e02670
	ctx.lr = 0x82809EE8;
	sub_82E02670(ctx, base);
	// lis r11,-31889
	ctx.r11.s64 = -2089877504;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r5,r11,24664
	ctx.r5.s64 = ctx.r11.s64 + 24664;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r4,r1,508
	ctx.r4.s64 = ctx.r1.s64 + 508;
	// bl 0x82805c10
	ctx.lr = 0x82809F00;
	sub_82805C10(ctx, base);
	// addi r3,r1,508
	ctx.r3.s64 = ctx.r1.s64 + 508;
	// bl 0x82e01bf0
	ctx.lr = 0x82809F08;
	sub_82E01BF0(ctx, base);
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// addi r3,r1,516
	ctx.r3.s64 = ctx.r1.s64 + 516;
	// addi r4,r11,3504
	ctx.r4.s64 = ctx.r11.s64 + 3504;
	// bl 0x82e02670
	ctx.lr = 0x82809F18;
	sub_82E02670(ctx, base);
	// lis r11,-31889
	ctx.r11.s64 = -2089877504;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r5,r11,26964
	ctx.r5.s64 = ctx.r11.s64 + 26964;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r4,r1,516
	ctx.r4.s64 = ctx.r1.s64 + 516;
	// bl 0x82805c10
	ctx.lr = 0x82809F30;
	sub_82805C10(ctx, base);
	// addi r3,r1,516
	ctx.r3.s64 = ctx.r1.s64 + 516;
	// bl 0x82e01bf0
	ctx.lr = 0x82809F38;
	sub_82E01BF0(ctx, base);
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// addi r3,r1,524
	ctx.r3.s64 = ctx.r1.s64 + 524;
	// addi r4,r11,3472
	ctx.r4.s64 = ctx.r11.s64 + 3472;
	// bl 0x82e02670
	ctx.lr = 0x82809F48;
	sub_82E02670(ctx, base);
	// lis r11,-31889
	ctx.r11.s64 = -2089877504;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r5,r11,26976
	ctx.r5.s64 = ctx.r11.s64 + 26976;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r4,r1,524
	ctx.r4.s64 = ctx.r1.s64 + 524;
	// bl 0x82805c10
	ctx.lr = 0x82809F60;
	sub_82805C10(ctx, base);
	// addi r3,r1,524
	ctx.r3.s64 = ctx.r1.s64 + 524;
	// bl 0x82e01bf0
	ctx.lr = 0x82809F68;
	sub_82E01BF0(ctx, base);
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// addi r3,r1,532
	ctx.r3.s64 = ctx.r1.s64 + 532;
	// addi r4,r11,3432
	ctx.r4.s64 = ctx.r11.s64 + 3432;
	// bl 0x82e02670
	ctx.lr = 0x82809F78;
	sub_82E02670(ctx, base);
	// lis r11,-31889
	ctx.r11.s64 = -2089877504;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r11,26988
	ctx.r5.s64 = ctx.r11.s64 + 26988;
	// addi r4,r1,532
	ctx.r4.s64 = ctx.r1.s64 + 532;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82805c10
	ctx.lr = 0x82809F90;
	sub_82805C10(ctx, base);
	// addi r3,r1,532
	ctx.r3.s64 = ctx.r1.s64 + 532;
	// bl 0x82e01bf0
	ctx.lr = 0x82809F98;
	sub_82E01BF0(ctx, base);
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// addi r3,r1,540
	ctx.r3.s64 = ctx.r1.s64 + 540;
	// addi r4,r11,3416
	ctx.r4.s64 = ctx.r11.s64 + 3416;
	// bl 0x82e02670
	ctx.lr = 0x82809FA8;
	sub_82E02670(ctx, base);
	// lis r11,-31889
	ctx.r11.s64 = -2089877504;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r5,r11,30148
	ctx.r5.s64 = ctx.r11.s64 + 30148;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r4,r1,540
	ctx.r4.s64 = ctx.r1.s64 + 540;
	// bl 0x82805c10
	ctx.lr = 0x82809FC0;
	sub_82805C10(ctx, base);
	// addi r3,r1,540
	ctx.r3.s64 = ctx.r1.s64 + 540;
	// bl 0x82e01bf0
	ctx.lr = 0x82809FC8;
	sub_82E01BF0(ctx, base);
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// addi r3,r1,548
	ctx.r3.s64 = ctx.r1.s64 + 548;
	// addi r4,r11,3404
	ctx.r4.s64 = ctx.r11.s64 + 3404;
	// bl 0x82e02670
	ctx.lr = 0x82809FD8;
	sub_82E02670(ctx, base);
	// lis r11,-31889
	ctx.r11.s64 = -2089877504;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r5,r11,30008
	ctx.r5.s64 = ctx.r11.s64 + 30008;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r4,r1,548
	ctx.r4.s64 = ctx.r1.s64 + 548;
	// bl 0x82805c10
	ctx.lr = 0x82809FF0;
	sub_82805C10(ctx, base);
	// addi r3,r1,548
	ctx.r3.s64 = ctx.r1.s64 + 548;
	// bl 0x82e01bf0
	ctx.lr = 0x82809FF8;
	sub_82E01BF0(ctx, base);
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// addi r3,r1,556
	ctx.r3.s64 = ctx.r1.s64 + 556;
	// addi r4,r11,3388
	ctx.r4.s64 = ctx.r11.s64 + 3388;
	// bl 0x82e02670
	ctx.lr = 0x8280A008;
	sub_82E02670(ctx, base);
	// lis r11,-31889
	ctx.r11.s64 = -2089877504;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r5,r11,27928
	ctx.r5.s64 = ctx.r11.s64 + 27928;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r4,r1,556
	ctx.r4.s64 = ctx.r1.s64 + 556;
	// bl 0x82805c10
	ctx.lr = 0x8280A020;
	sub_82805C10(ctx, base);
	// addi r3,r1,556
	ctx.r3.s64 = ctx.r1.s64 + 556;
	// bl 0x82e01bf0
	ctx.lr = 0x8280A028;
	sub_82E01BF0(ctx, base);
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// addi r3,r1,564
	ctx.r3.s64 = ctx.r1.s64 + 564;
	// addi r4,r11,3356
	ctx.r4.s64 = ctx.r11.s64 + 3356;
	// bl 0x82e02670
	ctx.lr = 0x8280A038;
	sub_82E02670(ctx, base);
	// lis r11,-31889
	ctx.r11.s64 = -2089877504;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r5,r11,28680
	ctx.r5.s64 = ctx.r11.s64 + 28680;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r4,r1,564
	ctx.r4.s64 = ctx.r1.s64 + 564;
	// bl 0x82805c10
	ctx.lr = 0x8280A050;
	sub_82805C10(ctx, base);
	// addi r3,r1,564
	ctx.r3.s64 = ctx.r1.s64 + 564;
	// bl 0x82e01bf0
	ctx.lr = 0x8280A058;
	sub_82E01BF0(ctx, base);
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// addi r3,r1,572
	ctx.r3.s64 = ctx.r1.s64 + 572;
	// addi r4,r11,3320
	ctx.r4.s64 = ctx.r11.s64 + 3320;
	// bl 0x82e02670
	ctx.lr = 0x8280A068;
	sub_82E02670(ctx, base);
	// lis r11,-31889
	ctx.r11.s64 = -2089877504;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r5,r11,28692
	ctx.r5.s64 = ctx.r11.s64 + 28692;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r4,r1,572
	ctx.r4.s64 = ctx.r1.s64 + 572;
	// bl 0x82805c10
	ctx.lr = 0x8280A080;
	sub_82805C10(ctx, base);
	// addi r3,r1,572
	ctx.r3.s64 = ctx.r1.s64 + 572;
	// bl 0x82e01bf0
	ctx.lr = 0x8280A088;
	sub_82E01BF0(ctx, base);
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// addi r3,r1,580
	ctx.r3.s64 = ctx.r1.s64 + 580;
	// addi r4,r11,3312
	ctx.r4.s64 = ctx.r11.s64 + 3312;
	// bl 0x82e02670
	ctx.lr = 0x8280A098;
	sub_82E02670(ctx, base);
	// lis r11,-31890
	ctx.r11.s64 = -2089943040;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r5,r11,18484
	ctx.r5.s64 = ctx.r11.s64 + 18484;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r4,r1,580
	ctx.r4.s64 = ctx.r1.s64 + 580;
	// bl 0x82805c10
	ctx.lr = 0x8280A0B0;
	sub_82805C10(ctx, base);
	// addi r3,r1,580
	ctx.r3.s64 = ctx.r1.s64 + 580;
	// bl 0x82e01bf0
	ctx.lr = 0x8280A0B8;
	sub_82E01BF0(ctx, base);
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// addi r3,r1,588
	ctx.r3.s64 = ctx.r1.s64 + 588;
	// addi r4,r11,3296
	ctx.r4.s64 = ctx.r11.s64 + 3296;
	// bl 0x82e02670
	ctx.lr = 0x8280A0C8;
	sub_82E02670(ctx, base);
	// lis r11,-31889
	ctx.r11.s64 = -2089877504;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r11,30428
	ctx.r5.s64 = ctx.r11.s64 + 30428;
	// addi r4,r1,588
	ctx.r4.s64 = ctx.r1.s64 + 588;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82805c10
	ctx.lr = 0x8280A0E0;
	sub_82805C10(ctx, base);
	// addi r3,r1,588
	ctx.r3.s64 = ctx.r1.s64 + 588;
	// bl 0x82e01bf0
	ctx.lr = 0x8280A0E8;
	sub_82E01BF0(ctx, base);
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// addi r3,r1,596
	ctx.r3.s64 = ctx.r1.s64 + 596;
	// addi r4,r11,3288
	ctx.r4.s64 = ctx.r11.s64 + 3288;
	// bl 0x82e02670
	ctx.lr = 0x8280A0F8;
	sub_82E02670(ctx, base);
	// lis r11,-31889
	ctx.r11.s64 = -2089877504;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r5,r11,-16600
	ctx.r5.s64 = ctx.r11.s64 + -16600;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r4,r1,596
	ctx.r4.s64 = ctx.r1.s64 + 596;
	// bl 0x82805c10
	ctx.lr = 0x8280A110;
	sub_82805C10(ctx, base);
	// addi r3,r1,596
	ctx.r3.s64 = ctx.r1.s64 + 596;
	// bl 0x82e01bf0
	ctx.lr = 0x8280A118;
	sub_82E01BF0(ctx, base);
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// addi r3,r1,604
	ctx.r3.s64 = ctx.r1.s64 + 604;
	// addi r4,r11,3276
	ctx.r4.s64 = ctx.r11.s64 + 3276;
	// bl 0x82e02670
	ctx.lr = 0x8280A128;
	sub_82E02670(ctx, base);
	// lis r11,-31889
	ctx.r11.s64 = -2089877504;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r5,r11,-13244
	ctx.r5.s64 = ctx.r11.s64 + -13244;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r4,r1,604
	ctx.r4.s64 = ctx.r1.s64 + 604;
	// bl 0x82805c10
	ctx.lr = 0x8280A140;
	sub_82805C10(ctx, base);
	// addi r3,r1,604
	ctx.r3.s64 = ctx.r1.s64 + 604;
	// bl 0x82e01bf0
	ctx.lr = 0x8280A148;
	sub_82E01BF0(ctx, base);
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// addi r3,r1,612
	ctx.r3.s64 = ctx.r1.s64 + 612;
	// addi r4,r11,3260
	ctx.r4.s64 = ctx.r11.s64 + 3260;
	// bl 0x82e02670
	ctx.lr = 0x8280A158;
	sub_82E02670(ctx, base);
	// lis r11,-31889
	ctx.r11.s64 = -2089877504;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r5,r11,-9436
	ctx.r5.s64 = ctx.r11.s64 + -9436;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r4,r1,612
	ctx.r4.s64 = ctx.r1.s64 + 612;
	// bl 0x82805c10
	ctx.lr = 0x8280A170;
	sub_82805C10(ctx, base);
	// addi r3,r1,612
	ctx.r3.s64 = ctx.r1.s64 + 612;
	// bl 0x82e01bf0
	ctx.lr = 0x8280A178;
	sub_82E01BF0(ctx, base);
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// addi r3,r1,620
	ctx.r3.s64 = ctx.r1.s64 + 620;
	// addi r4,r11,3244
	ctx.r4.s64 = ctx.r11.s64 + 3244;
	// bl 0x82e02670
	ctx.lr = 0x8280A188;
	sub_82E02670(ctx, base);
	// lis r11,-31889
	ctx.r11.s64 = -2089877504;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r5,r11,-11020
	ctx.r5.s64 = ctx.r11.s64 + -11020;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r4,r1,620
	ctx.r4.s64 = ctx.r1.s64 + 620;
	// bl 0x82805c10
	ctx.lr = 0x8280A1A0;
	sub_82805C10(ctx, base);
	// addi r3,r1,620
	ctx.r3.s64 = ctx.r1.s64 + 620;
	// bl 0x82e01bf0
	ctx.lr = 0x8280A1A8;
	sub_82E01BF0(ctx, base);
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// addi r3,r1,628
	ctx.r3.s64 = ctx.r1.s64 + 628;
	// addi r4,r11,3232
	ctx.r4.s64 = ctx.r11.s64 + 3232;
	// bl 0x82e02670
	ctx.lr = 0x8280A1B8;
	sub_82E02670(ctx, base);
	// lis r11,-31889
	ctx.r11.s64 = -2089877504;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r5,r11,-12620
	ctx.r5.s64 = ctx.r11.s64 + -12620;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r4,r1,628
	ctx.r4.s64 = ctx.r1.s64 + 628;
	// bl 0x82805c10
	ctx.lr = 0x8280A1D0;
	sub_82805C10(ctx, base);
	// addi r3,r1,628
	ctx.r3.s64 = ctx.r1.s64 + 628;
	// bl 0x82e01bf0
	ctx.lr = 0x8280A1D8;
	sub_82E01BF0(ctx, base);
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// addi r3,r1,636
	ctx.r3.s64 = ctx.r1.s64 + 636;
	// addi r4,r11,3220
	ctx.r4.s64 = ctx.r11.s64 + 3220;
	// bl 0x82e02670
	ctx.lr = 0x8280A1E8;
	sub_82E02670(ctx, base);
	// lis r11,-31889
	ctx.r11.s64 = -2089877504;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r5,r11,-6304
	ctx.r5.s64 = ctx.r11.s64 + -6304;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r4,r1,636
	ctx.r4.s64 = ctx.r1.s64 + 636;
	// bl 0x82805c10
	ctx.lr = 0x8280A200;
	sub_82805C10(ctx, base);
	// addi r3,r1,636
	ctx.r3.s64 = ctx.r1.s64 + 636;
	// bl 0x82e01bf0
	ctx.lr = 0x8280A208;
	sub_82E01BF0(ctx, base);
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// addi r3,r1,644
	ctx.r3.s64 = ctx.r1.s64 + 644;
	// addi r4,r11,3204
	ctx.r4.s64 = ctx.r11.s64 + 3204;
	// bl 0x82e02670
	ctx.lr = 0x8280A218;
	sub_82E02670(ctx, base);
	// lis r11,-31889
	ctx.r11.s64 = -2089877504;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r11,-9232
	ctx.r5.s64 = ctx.r11.s64 + -9232;
	// addi r4,r1,644
	ctx.r4.s64 = ctx.r1.s64 + 644;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82805c10
	ctx.lr = 0x8280A230;
	sub_82805C10(ctx, base);
	// addi r3,r1,644
	ctx.r3.s64 = ctx.r1.s64 + 644;
	// bl 0x82e01bf0
	ctx.lr = 0x8280A238;
	sub_82E01BF0(ctx, base);
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// addi r3,r1,652
	ctx.r3.s64 = ctx.r1.s64 + 652;
	// addi r4,r11,3188
	ctx.r4.s64 = ctx.r11.s64 + 3188;
	// bl 0x82e02670
	ctx.lr = 0x8280A248;
	sub_82E02670(ctx, base);
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r5,r11,-28896
	ctx.r5.s64 = ctx.r11.s64 + -28896;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r4,r1,652
	ctx.r4.s64 = ctx.r1.s64 + 652;
	// bl 0x82805c10
	ctx.lr = 0x8280A260;
	sub_82805C10(ctx, base);
	// addi r3,r1,652
	ctx.r3.s64 = ctx.r1.s64 + 652;
	// bl 0x82e01bf0
	ctx.lr = 0x8280A268;
	sub_82E01BF0(ctx, base);
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// addi r3,r1,660
	ctx.r3.s64 = ctx.r1.s64 + 660;
	// addi r4,r11,3176
	ctx.r4.s64 = ctx.r11.s64 + 3176;
	// bl 0x82e02670
	ctx.lr = 0x8280A278;
	sub_82E02670(ctx, base);
	// lis r11,-31889
	ctx.r11.s64 = -2089877504;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r5,r11,-10864
	ctx.r5.s64 = ctx.r11.s64 + -10864;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r4,r1,660
	ctx.r4.s64 = ctx.r1.s64 + 660;
	// bl 0x82805c10
	ctx.lr = 0x8280A290;
	sub_82805C10(ctx, base);
	// addi r3,r1,660
	ctx.r3.s64 = ctx.r1.s64 + 660;
	// bl 0x82e01bf0
	ctx.lr = 0x8280A298;
	sub_82E01BF0(ctx, base);
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// addi r3,r1,668
	ctx.r3.s64 = ctx.r1.s64 + 668;
	// addi r4,r11,3156
	ctx.r4.s64 = ctx.r11.s64 + 3156;
	// bl 0x82e02670
	ctx.lr = 0x8280A2A8;
	sub_82E02670(ctx, base);
	// lis r11,-31889
	ctx.r11.s64 = -2089877504;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r5,r11,-10712
	ctx.r5.s64 = ctx.r11.s64 + -10712;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r4,r1,668
	ctx.r4.s64 = ctx.r1.s64 + 668;
	// bl 0x82805c10
	ctx.lr = 0x8280A2C0;
	sub_82805C10(ctx, base);
	// addi r3,r1,668
	ctx.r3.s64 = ctx.r1.s64 + 668;
	// bl 0x82e01bf0
	ctx.lr = 0x8280A2C8;
	sub_82E01BF0(ctx, base);
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// addi r3,r1,676
	ctx.r3.s64 = ctx.r1.s64 + 676;
	// addi r4,r11,3144
	ctx.r4.s64 = ctx.r11.s64 + 3144;
	// bl 0x82e02670
	ctx.lr = 0x8280A2D8;
	sub_82E02670(ctx, base);
	// lis r11,-31889
	ctx.r11.s64 = -2089877504;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r5,r11,-6640
	ctx.r5.s64 = ctx.r11.s64 + -6640;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r4,r1,676
	ctx.r4.s64 = ctx.r1.s64 + 676;
	// bl 0x82805c10
	ctx.lr = 0x8280A2F0;
	sub_82805C10(ctx, base);
	// addi r3,r1,676
	ctx.r3.s64 = ctx.r1.s64 + 676;
	// bl 0x82e01bf0
	ctx.lr = 0x8280A2F8;
	sub_82E01BF0(ctx, base);
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// addi r3,r1,684
	ctx.r3.s64 = ctx.r1.s64 + 684;
	// addi r4,r11,3132
	ctx.r4.s64 = ctx.r11.s64 + 3132;
	// bl 0x82e02670
	ctx.lr = 0x8280A308;
	sub_82E02670(ctx, base);
	// lis r11,-31889
	ctx.r11.s64 = -2089877504;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r5,r11,-11676
	ctx.r5.s64 = ctx.r11.s64 + -11676;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r4,r1,684
	ctx.r4.s64 = ctx.r1.s64 + 684;
	// bl 0x82805c10
	ctx.lr = 0x8280A320;
	sub_82805C10(ctx, base);
	// addi r3,r1,684
	ctx.r3.s64 = ctx.r1.s64 + 684;
	// bl 0x82e01bf0
	ctx.lr = 0x8280A328;
	sub_82E01BF0(ctx, base);
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// addi r3,r1,692
	ctx.r3.s64 = ctx.r1.s64 + 692;
	// addi r4,r11,3116
	ctx.r4.s64 = ctx.r11.s64 + 3116;
	// bl 0x82e02670
	ctx.lr = 0x8280A338;
	sub_82E02670(ctx, base);
	// lis r11,-31889
	ctx.r11.s64 = -2089877504;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r11,-10340
	ctx.r5.s64 = ctx.r11.s64 + -10340;
	// addi r4,r1,692
	ctx.r4.s64 = ctx.r1.s64 + 692;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82805c10
	ctx.lr = 0x8280A350;
	sub_82805C10(ctx, base);
	// addi r3,r1,692
	ctx.r3.s64 = ctx.r1.s64 + 692;
	// bl 0x82e01bf0
	ctx.lr = 0x8280A358;
	sub_82E01BF0(ctx, base);
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// addi r3,r1,700
	ctx.r3.s64 = ctx.r1.s64 + 700;
	// addi r4,r11,3096
	ctx.r4.s64 = ctx.r11.s64 + 3096;
	// bl 0x82e02670
	ctx.lr = 0x8280A368;
	sub_82E02670(ctx, base);
	// li r6,0
	ctx.r6.s64 = 0;
	// lis r11,-31889
	ctx.r11.s64 = -2089877504;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r5,r11,-6484
	ctx.r5.s64 = ctx.r11.s64 + -6484;
	// addi r4,r1,700
	ctx.r4.s64 = ctx.r1.s64 + 700;
	// bl 0x82805c10
	ctx.lr = 0x8280A380;
	sub_82805C10(ctx, base);
	// addi r3,r1,700
	ctx.r3.s64 = ctx.r1.s64 + 700;
	// bl 0x82e01bf0
	ctx.lr = 0x8280A388;
	sub_82E01BF0(ctx, base);
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// addi r3,r1,708
	ctx.r3.s64 = ctx.r1.s64 + 708;
	// addi r4,r11,3080
	ctx.r4.s64 = ctx.r11.s64 + 3080;
	// bl 0x82e02670
	ctx.lr = 0x8280A398;
	sub_82E02670(ctx, base);
	// lis r11,-31889
	ctx.r11.s64 = -2089877504;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r5,r11,-12084
	ctx.r5.s64 = ctx.r11.s64 + -12084;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r4,r1,708
	ctx.r4.s64 = ctx.r1.s64 + 708;
	// bl 0x82805c10
	ctx.lr = 0x8280A3B0;
	sub_82805C10(ctx, base);
	// addi r3,r1,708
	ctx.r3.s64 = ctx.r1.s64 + 708;
	// bl 0x82e01bf0
	ctx.lr = 0x8280A3B8;
	sub_82E01BF0(ctx, base);
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// addi r3,r1,716
	ctx.r3.s64 = ctx.r1.s64 + 716;
	// addi r4,r11,3072
	ctx.r4.s64 = ctx.r11.s64 + 3072;
	// bl 0x82e02670
	ctx.lr = 0x8280A3C8;
	sub_82E02670(ctx, base);
	// lis r11,-31889
	ctx.r11.s64 = -2089877504;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r5,r11,-5760
	ctx.r5.s64 = ctx.r11.s64 + -5760;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r4,r1,716
	ctx.r4.s64 = ctx.r1.s64 + 716;
	// bl 0x82805c10
	ctx.lr = 0x8280A3E0;
	sub_82805C10(ctx, base);
	// addi r3,r1,716
	ctx.r3.s64 = ctx.r1.s64 + 716;
	// bl 0x82e01bf0
	ctx.lr = 0x8280A3E8;
	sub_82E01BF0(ctx, base);
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// addi r3,r1,724
	ctx.r3.s64 = ctx.r1.s64 + 724;
	// addi r4,r11,3056
	ctx.r4.s64 = ctx.r11.s64 + 3056;
	// bl 0x82e02670
	ctx.lr = 0x8280A3F8;
	sub_82E02670(ctx, base);
	// lis r11,-31889
	ctx.r11.s64 = -2089877504;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r5,r11,-10548
	ctx.r5.s64 = ctx.r11.s64 + -10548;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r4,r1,724
	ctx.r4.s64 = ctx.r1.s64 + 724;
	// bl 0x82805c10
	ctx.lr = 0x8280A410;
	sub_82805C10(ctx, base);
	// addi r3,r1,724
	ctx.r3.s64 = ctx.r1.s64 + 724;
	// bl 0x82e01bf0
	ctx.lr = 0x8280A418;
	sub_82E01BF0(ctx, base);
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// addi r3,r1,732
	ctx.r3.s64 = ctx.r1.s64 + 732;
	// addi r4,r11,3048
	ctx.r4.s64 = ctx.r11.s64 + 3048;
	// bl 0x82e02670
	ctx.lr = 0x8280A428;
	sub_82E02670(ctx, base);
	// lis r11,-31889
	ctx.r11.s64 = -2089877504;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r5,r11,-3784
	ctx.r5.s64 = ctx.r11.s64 + -3784;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r4,r1,732
	ctx.r4.s64 = ctx.r1.s64 + 732;
	// bl 0x82805c10
	ctx.lr = 0x8280A440;
	sub_82805C10(ctx, base);
	// addi r3,r1,732
	ctx.r3.s64 = ctx.r1.s64 + 732;
	// bl 0x82e01bf0
	ctx.lr = 0x8280A448;
	sub_82E01BF0(ctx, base);
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// addi r3,r1,740
	ctx.r3.s64 = ctx.r1.s64 + 740;
	// addi r4,r11,3032
	ctx.r4.s64 = ctx.r11.s64 + 3032;
	// bl 0x82e02670
	ctx.lr = 0x8280A458;
	sub_82E02670(ctx, base);
	// lis r11,-31889
	ctx.r11.s64 = -2089877504;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r5,r11,-3612
	ctx.r5.s64 = ctx.r11.s64 + -3612;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r4,r1,740
	ctx.r4.s64 = ctx.r1.s64 + 740;
	// bl 0x82805c10
	ctx.lr = 0x8280A470;
	sub_82805C10(ctx, base);
	// addi r3,r1,740
	ctx.r3.s64 = ctx.r1.s64 + 740;
	// bl 0x82e01bf0
	ctx.lr = 0x8280A478;
	sub_82E01BF0(ctx, base);
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// addi r3,r1,748
	ctx.r3.s64 = ctx.r1.s64 + 748;
	// addi r4,r11,3016
	ctx.r4.s64 = ctx.r11.s64 + 3016;
	// bl 0x82e02670
	ctx.lr = 0x8280A488;
	sub_82E02670(ctx, base);
	// lis r11,-31889
	ctx.r11.s64 = -2089877504;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r11,-3460
	ctx.r5.s64 = ctx.r11.s64 + -3460;
	// addi r4,r1,748
	ctx.r4.s64 = ctx.r1.s64 + 748;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82805c10
	ctx.lr = 0x8280A4A0;
	sub_82805C10(ctx, base);
	// addi r3,r1,748
	ctx.r3.s64 = ctx.r1.s64 + 748;
	// bl 0x82e01bf0
	ctx.lr = 0x8280A4A8;
	sub_82E01BF0(ctx, base);
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// addi r3,r1,756
	ctx.r3.s64 = ctx.r1.s64 + 756;
	// addi r4,r11,3004
	ctx.r4.s64 = ctx.r11.s64 + 3004;
	// bl 0x82e02670
	ctx.lr = 0x8280A4B8;
	sub_82E02670(ctx, base);
	// lis r11,-31889
	ctx.r11.s64 = -2089877504;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r5,r11,-3308
	ctx.r5.s64 = ctx.r11.s64 + -3308;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r4,r1,756
	ctx.r4.s64 = ctx.r1.s64 + 756;
	// bl 0x82805c10
	ctx.lr = 0x8280A4D0;
	sub_82805C10(ctx, base);
	// addi r3,r1,756
	ctx.r3.s64 = ctx.r1.s64 + 756;
	// bl 0x82e01bf0
	ctx.lr = 0x8280A4D8;
	sub_82E01BF0(ctx, base);
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// addi r3,r1,764
	ctx.r3.s64 = ctx.r1.s64 + 764;
	// addi r4,r11,2992
	ctx.r4.s64 = ctx.r11.s64 + 2992;
	// bl 0x82e02670
	ctx.lr = 0x8280A4E8;
	sub_82E02670(ctx, base);
	// lis r11,-31889
	ctx.r11.s64 = -2089877504;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r5,r11,-3164
	ctx.r5.s64 = ctx.r11.s64 + -3164;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r4,r1,764
	ctx.r4.s64 = ctx.r1.s64 + 764;
	// bl 0x82805c10
	ctx.lr = 0x8280A500;
	sub_82805C10(ctx, base);
	// addi r3,r1,764
	ctx.r3.s64 = ctx.r1.s64 + 764;
	// bl 0x82e01bf0
	ctx.lr = 0x8280A508;
	sub_82E01BF0(ctx, base);
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// addi r3,r1,772
	ctx.r3.s64 = ctx.r1.s64 + 772;
	// addi r4,r11,2976
	ctx.r4.s64 = ctx.r11.s64 + 2976;
	// bl 0x82e02670
	ctx.lr = 0x8280A518;
	sub_82E02670(ctx, base);
	// lis r11,-31889
	ctx.r11.s64 = -2089877504;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r5,r11,-3016
	ctx.r5.s64 = ctx.r11.s64 + -3016;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r4,r1,772
	ctx.r4.s64 = ctx.r1.s64 + 772;
	// bl 0x82805c10
	ctx.lr = 0x8280A530;
	sub_82805C10(ctx, base);
	// addi r3,r1,772
	ctx.r3.s64 = ctx.r1.s64 + 772;
	// bl 0x82e01bf0
	ctx.lr = 0x8280A538;
	sub_82E01BF0(ctx, base);
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// addi r3,r1,780
	ctx.r3.s64 = ctx.r1.s64 + 780;
	// addi r4,r11,2964
	ctx.r4.s64 = ctx.r11.s64 + 2964;
	// bl 0x82e02670
	ctx.lr = 0x8280A548;
	sub_82E02670(ctx, base);
	// lis r11,-31889
	ctx.r11.s64 = -2089877504;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r5,r11,-2828
	ctx.r5.s64 = ctx.r11.s64 + -2828;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r4,r1,780
	ctx.r4.s64 = ctx.r1.s64 + 780;
	// bl 0x82805c10
	ctx.lr = 0x8280A560;
	sub_82805C10(ctx, base);
	// addi r3,r1,780
	ctx.r3.s64 = ctx.r1.s64 + 780;
	// bl 0x82e01bf0
	ctx.lr = 0x8280A568;
	sub_82E01BF0(ctx, base);
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// addi r3,r1,788
	ctx.r3.s64 = ctx.r1.s64 + 788;
	// addi r4,r11,2952
	ctx.r4.s64 = ctx.r11.s64 + 2952;
	// bl 0x82e02670
	ctx.lr = 0x8280A578;
	sub_82E02670(ctx, base);
	// lis r11,-31889
	ctx.r11.s64 = -2089877504;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r5,r11,-2684
	ctx.r5.s64 = ctx.r11.s64 + -2684;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r4,r1,788
	ctx.r4.s64 = ctx.r1.s64 + 788;
	// bl 0x82805c10
	ctx.lr = 0x8280A590;
	sub_82805C10(ctx, base);
	// addi r3,r1,788
	ctx.r3.s64 = ctx.r1.s64 + 788;
	// bl 0x82e01bf0
	ctx.lr = 0x8280A598;
	sub_82E01BF0(ctx, base);
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// addi r3,r1,796
	ctx.r3.s64 = ctx.r1.s64 + 796;
	// addi r4,r11,2936
	ctx.r4.s64 = ctx.r11.s64 + 2936;
	// bl 0x82e02670
	ctx.lr = 0x8280A5A8;
	sub_82E02670(ctx, base);
	// lis r11,-31889
	ctx.r11.s64 = -2089877504;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r5,r11,-2276
	ctx.r5.s64 = ctx.r11.s64 + -2276;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r4,r1,796
	ctx.r4.s64 = ctx.r1.s64 + 796;
	// bl 0x82805c10
	ctx.lr = 0x8280A5C0;
	sub_82805C10(ctx, base);
	// addi r3,r1,796
	ctx.r3.s64 = ctx.r1.s64 + 796;
	// bl 0x82e01bf0
	ctx.lr = 0x8280A5C8;
	sub_82E01BF0(ctx, base);
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// addi r3,r1,804
	ctx.r3.s64 = ctx.r1.s64 + 804;
	// addi r4,r11,2920
	ctx.r4.s64 = ctx.r11.s64 + 2920;
	// bl 0x82e02670
	ctx.lr = 0x8280A5D8;
	sub_82E02670(ctx, base);
	// lis r11,-31889
	ctx.r11.s64 = -2089877504;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r11,-1928
	ctx.r5.s64 = ctx.r11.s64 + -1928;
	// addi r4,r1,804
	ctx.r4.s64 = ctx.r1.s64 + 804;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82805c10
	ctx.lr = 0x8280A5F0;
	sub_82805C10(ctx, base);
	// addi r3,r1,804
	ctx.r3.s64 = ctx.r1.s64 + 804;
	// bl 0x82e01bf0
	ctx.lr = 0x8280A5F8;
	sub_82E01BF0(ctx, base);
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// addi r3,r1,812
	ctx.r3.s64 = ctx.r1.s64 + 812;
	// addi r4,r11,-18276
	ctx.r4.s64 = ctx.r11.s64 + -18276;
	// bl 0x82e02670
	ctx.lr = 0x8280A608;
	sub_82E02670(ctx, base);
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r5,r11,-18656
	ctx.r5.s64 = ctx.r11.s64 + -18656;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r4,r1,812
	ctx.r4.s64 = ctx.r1.s64 + 812;
	// bl 0x82805c10
	ctx.lr = 0x8280A620;
	sub_82805C10(ctx, base);
	// addi r3,r1,812
	ctx.r3.s64 = ctx.r1.s64 + 812;
	// bl 0x82e01bf0
	ctx.lr = 0x8280A628;
	sub_82E01BF0(ctx, base);
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// addi r3,r1,820
	ctx.r3.s64 = ctx.r1.s64 + 820;
	// addi r4,r11,2908
	ctx.r4.s64 = ctx.r11.s64 + 2908;
	// bl 0x82e02670
	ctx.lr = 0x8280A638;
	sub_82E02670(ctx, base);
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r5,r11,-18668
	ctx.r5.s64 = ctx.r11.s64 + -18668;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r4,r1,820
	ctx.r4.s64 = ctx.r1.s64 + 820;
	// bl 0x82805c10
	ctx.lr = 0x8280A650;
	sub_82805C10(ctx, base);
	// addi r3,r1,820
	ctx.r3.s64 = ctx.r1.s64 + 820;
	// bl 0x82e01bf0
	ctx.lr = 0x8280A658;
	sub_82E01BF0(ctx, base);
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// addi r3,r1,828
	ctx.r3.s64 = ctx.r1.s64 + 828;
	// addi r4,r11,2892
	ctx.r4.s64 = ctx.r11.s64 + 2892;
	// bl 0x82e02670
	ctx.lr = 0x8280A668;
	sub_82E02670(ctx, base);
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r5,r11,-18680
	ctx.r5.s64 = ctx.r11.s64 + -18680;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r4,r1,828
	ctx.r4.s64 = ctx.r1.s64 + 828;
	// bl 0x82805c10
	ctx.lr = 0x8280A680;
	sub_82805C10(ctx, base);
	// addi r3,r1,828
	ctx.r3.s64 = ctx.r1.s64 + 828;
	// bl 0x82e01bf0
	ctx.lr = 0x8280A688;
	sub_82E01BF0(ctx, base);
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// addi r3,r1,836
	ctx.r3.s64 = ctx.r1.s64 + 836;
	// addi r4,r11,2880
	ctx.r4.s64 = ctx.r11.s64 + 2880;
	// bl 0x82e02670
	ctx.lr = 0x8280A698;
	sub_82E02670(ctx, base);
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r5,r11,-18632
	ctx.r5.s64 = ctx.r11.s64 + -18632;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r4,r1,836
	ctx.r4.s64 = ctx.r1.s64 + 836;
	// bl 0x82805c10
	ctx.lr = 0x8280A6B0;
	sub_82805C10(ctx, base);
	// addi r3,r1,836
	ctx.r3.s64 = ctx.r1.s64 + 836;
	// bl 0x82e01bf0
	ctx.lr = 0x8280A6B8;
	sub_82E01BF0(ctx, base);
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// addi r3,r1,844
	ctx.r3.s64 = ctx.r1.s64 + 844;
	// addi r4,r11,2864
	ctx.r4.s64 = ctx.r11.s64 + 2864;
	// bl 0x82e02670
	ctx.lr = 0x8280A6C8;
	sub_82E02670(ctx, base);
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r5,r11,-18704
	ctx.r5.s64 = ctx.r11.s64 + -18704;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r4,r1,844
	ctx.r4.s64 = ctx.r1.s64 + 844;
	// bl 0x82805c10
	ctx.lr = 0x8280A6E0;
	sub_82805C10(ctx, base);
	// addi r3,r1,844
	ctx.r3.s64 = ctx.r1.s64 + 844;
	// bl 0x82e01bf0
	ctx.lr = 0x8280A6E8;
	sub_82E01BF0(ctx, base);
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// addi r3,r1,852
	ctx.r3.s64 = ctx.r1.s64 + 852;
	// addi r4,r11,2848
	ctx.r4.s64 = ctx.r11.s64 + 2848;
	// bl 0x82e02670
	ctx.lr = 0x8280A6F8;
	sub_82E02670(ctx, base);
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r5,r11,-18716
	ctx.r5.s64 = ctx.r11.s64 + -18716;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r4,r1,852
	ctx.r4.s64 = ctx.r1.s64 + 852;
	// bl 0x82805c10
	ctx.lr = 0x8280A710;
	sub_82805C10(ctx, base);
	// addi r3,r1,852
	ctx.r3.s64 = ctx.r1.s64 + 852;
	// bl 0x82e01bf0
	ctx.lr = 0x8280A718;
	sub_82E01BF0(ctx, base);
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// addi r3,r1,860
	ctx.r3.s64 = ctx.r1.s64 + 860;
	// addi r4,r11,2832
	ctx.r4.s64 = ctx.r11.s64 + 2832;
	// bl 0x82e02670
	ctx.lr = 0x8280A728;
	sub_82E02670(ctx, base);
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r11,-18692
	ctx.r5.s64 = ctx.r11.s64 + -18692;
	// addi r4,r1,860
	ctx.r4.s64 = ctx.r1.s64 + 860;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82805c10
	ctx.lr = 0x8280A740;
	sub_82805C10(ctx, base);
	// addi r3,r1,860
	ctx.r3.s64 = ctx.r1.s64 + 860;
	// bl 0x82e01bf0
	ctx.lr = 0x8280A748;
	sub_82E01BF0(ctx, base);
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// addi r3,r1,868
	ctx.r3.s64 = ctx.r1.s64 + 868;
	// addi r4,r11,2816
	ctx.r4.s64 = ctx.r11.s64 + 2816;
	// bl 0x82e02670
	ctx.lr = 0x8280A758;
	sub_82E02670(ctx, base);
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r5,r11,-18644
	ctx.r5.s64 = ctx.r11.s64 + -18644;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r4,r1,868
	ctx.r4.s64 = ctx.r1.s64 + 868;
	// bl 0x82805c10
	ctx.lr = 0x8280A770;
	sub_82805C10(ctx, base);
	// addi r3,r1,868
	ctx.r3.s64 = ctx.r1.s64 + 868;
	// bl 0x82e01bf0
	ctx.lr = 0x8280A778;
	sub_82E01BF0(ctx, base);
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// addi r3,r1,876
	ctx.r3.s64 = ctx.r1.s64 + 876;
	// addi r4,r11,2800
	ctx.r4.s64 = ctx.r11.s64 + 2800;
	// bl 0x82e02670
	ctx.lr = 0x8280A788;
	sub_82E02670(ctx, base);
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r5,r11,-18620
	ctx.r5.s64 = ctx.r11.s64 + -18620;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r4,r1,876
	ctx.r4.s64 = ctx.r1.s64 + 876;
	// bl 0x82805c10
	ctx.lr = 0x8280A7A0;
	sub_82805C10(ctx, base);
	// addi r3,r1,876
	ctx.r3.s64 = ctx.r1.s64 + 876;
	// bl 0x82e01bf0
	ctx.lr = 0x8280A7A8;
	sub_82E01BF0(ctx, base);
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// addi r3,r1,884
	ctx.r3.s64 = ctx.r1.s64 + 884;
	// addi r4,r11,2784
	ctx.r4.s64 = ctx.r11.s64 + 2784;
	// bl 0x82e02670
	ctx.lr = 0x8280A7B8;
	sub_82E02670(ctx, base);
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r5,r11,-18608
	ctx.r5.s64 = ctx.r11.s64 + -18608;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r4,r1,884
	ctx.r4.s64 = ctx.r1.s64 + 884;
	// bl 0x82805c10
	ctx.lr = 0x8280A7D0;
	sub_82805C10(ctx, base);
	// addi r3,r1,884
	ctx.r3.s64 = ctx.r1.s64 + 884;
	// bl 0x82e01bf0
	ctx.lr = 0x8280A7D8;
	sub_82E01BF0(ctx, base);
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// addi r3,r1,892
	ctx.r3.s64 = ctx.r1.s64 + 892;
	// addi r4,r11,2760
	ctx.r4.s64 = ctx.r11.s64 + 2760;
	// bl 0x82e02670
	ctx.lr = 0x8280A7E8;
	sub_82E02670(ctx, base);
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r5,r11,-18596
	ctx.r5.s64 = ctx.r11.s64 + -18596;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r4,r1,892
	ctx.r4.s64 = ctx.r1.s64 + 892;
	// bl 0x82805c10
	ctx.lr = 0x8280A800;
	sub_82805C10(ctx, base);
	// addi r3,r1,892
	ctx.r3.s64 = ctx.r1.s64 + 892;
	// bl 0x82e01bf0
	ctx.lr = 0x8280A808;
	sub_82E01BF0(ctx, base);
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// addi r3,r1,900
	ctx.r3.s64 = ctx.r1.s64 + 900;
	// addi r4,r11,2736
	ctx.r4.s64 = ctx.r11.s64 + 2736;
	// bl 0x82e02670
	ctx.lr = 0x8280A818;
	sub_82E02670(ctx, base);
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r5,r11,-18584
	ctx.r5.s64 = ctx.r11.s64 + -18584;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r4,r1,900
	ctx.r4.s64 = ctx.r1.s64 + 900;
	// bl 0x82805c10
	ctx.lr = 0x8280A830;
	sub_82805C10(ctx, base);
	// addi r3,r1,900
	ctx.r3.s64 = ctx.r1.s64 + 900;
	// bl 0x82e01bf0
	ctx.lr = 0x8280A838;
	sub_82E01BF0(ctx, base);
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// addi r3,r1,908
	ctx.r3.s64 = ctx.r1.s64 + 908;
	// addi r4,r11,2724
	ctx.r4.s64 = ctx.r11.s64 + 2724;
	// bl 0x82e02670
	ctx.lr = 0x8280A848;
	sub_82E02670(ctx, base);
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r11,-18572
	ctx.r5.s64 = ctx.r11.s64 + -18572;
	// addi r4,r1,908
	ctx.r4.s64 = ctx.r1.s64 + 908;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82805c10
	ctx.lr = 0x8280A860;
	sub_82805C10(ctx, base);
	// addi r3,r1,908
	ctx.r3.s64 = ctx.r1.s64 + 908;
	// bl 0x82e01bf0
	ctx.lr = 0x8280A868;
	sub_82E01BF0(ctx, base);
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// addi r3,r1,916
	ctx.r3.s64 = ctx.r1.s64 + 916;
	// addi r4,r11,2704
	ctx.r4.s64 = ctx.r11.s64 + 2704;
	// bl 0x82e02670
	ctx.lr = 0x8280A878;
	sub_82E02670(ctx, base);
	// li r6,0
	ctx.r6.s64 = 0;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r5,r11,-18560
	ctx.r5.s64 = ctx.r11.s64 + -18560;
	// addi r4,r1,916
	ctx.r4.s64 = ctx.r1.s64 + 916;
	// bl 0x82805c10
	ctx.lr = 0x8280A890;
	sub_82805C10(ctx, base);
	// addi r3,r1,916
	ctx.r3.s64 = ctx.r1.s64 + 916;
	// bl 0x82e01bf0
	ctx.lr = 0x8280A898;
	sub_82E01BF0(ctx, base);
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// addi r3,r1,924
	ctx.r3.s64 = ctx.r1.s64 + 924;
	// addi r4,r11,2680
	ctx.r4.s64 = ctx.r11.s64 + 2680;
	// bl 0x82e02670
	ctx.lr = 0x8280A8A8;
	sub_82E02670(ctx, base);
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r5,r11,-18548
	ctx.r5.s64 = ctx.r11.s64 + -18548;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r4,r1,924
	ctx.r4.s64 = ctx.r1.s64 + 924;
	// bl 0x82805c10
	ctx.lr = 0x8280A8C0;
	sub_82805C10(ctx, base);
	// addi r3,r1,924
	ctx.r3.s64 = ctx.r1.s64 + 924;
	// bl 0x82e01bf0
	ctx.lr = 0x8280A8C8;
	sub_82E01BF0(ctx, base);
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// addi r3,r1,932
	ctx.r3.s64 = ctx.r1.s64 + 932;
	// addi r4,r11,2652
	ctx.r4.s64 = ctx.r11.s64 + 2652;
	// bl 0x82e02670
	ctx.lr = 0x8280A8D8;
	sub_82E02670(ctx, base);
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r5,r11,-18536
	ctx.r5.s64 = ctx.r11.s64 + -18536;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r4,r1,932
	ctx.r4.s64 = ctx.r1.s64 + 932;
	// bl 0x82805c10
	ctx.lr = 0x8280A8F0;
	sub_82805C10(ctx, base);
	// addi r3,r1,932
	ctx.r3.s64 = ctx.r1.s64 + 932;
	// bl 0x82e01bf0
	ctx.lr = 0x8280A8F8;
	sub_82E01BF0(ctx, base);
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// addi r3,r1,940
	ctx.r3.s64 = ctx.r1.s64 + 940;
	// addi r4,r11,-17544
	ctx.r4.s64 = ctx.r11.s64 + -17544;
	// bl 0x82e02670
	ctx.lr = 0x8280A908;
	sub_82E02670(ctx, base);
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r5,r11,-18524
	ctx.r5.s64 = ctx.r11.s64 + -18524;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r4,r1,940
	ctx.r4.s64 = ctx.r1.s64 + 940;
	// bl 0x82805c10
	ctx.lr = 0x8280A920;
	sub_82805C10(ctx, base);
	// addi r3,r1,940
	ctx.r3.s64 = ctx.r1.s64 + 940;
	// bl 0x82e01bf0
	ctx.lr = 0x8280A928;
	sub_82E01BF0(ctx, base);
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// addi r3,r1,948
	ctx.r3.s64 = ctx.r1.s64 + 948;
	// addi r4,r11,2640
	ctx.r4.s64 = ctx.r11.s64 + 2640;
	// bl 0x82e02670
	ctx.lr = 0x8280A938;
	sub_82E02670(ctx, base);
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r5,r11,-18512
	ctx.r5.s64 = ctx.r11.s64 + -18512;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r4,r1,948
	ctx.r4.s64 = ctx.r1.s64 + 948;
	// bl 0x82805c10
	ctx.lr = 0x8280A950;
	sub_82805C10(ctx, base);
	// addi r3,r1,948
	ctx.r3.s64 = ctx.r1.s64 + 948;
	// bl 0x82e01bf0
	ctx.lr = 0x8280A958;
	sub_82E01BF0(ctx, base);
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// addi r3,r1,956
	ctx.r3.s64 = ctx.r1.s64 + 956;
	// addi r4,r11,2624
	ctx.r4.s64 = ctx.r11.s64 + 2624;
	// bl 0x82e02670
	ctx.lr = 0x8280A968;
	sub_82E02670(ctx, base);
	// lis r11,-31889
	ctx.r11.s64 = -2089877504;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r5,r11,10856
	ctx.r5.s64 = ctx.r11.s64 + 10856;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r4,r1,956
	ctx.r4.s64 = ctx.r1.s64 + 956;
	// bl 0x82805c10
	ctx.lr = 0x8280A980;
	sub_82805C10(ctx, base);
	// addi r3,r1,956
	ctx.r3.s64 = ctx.r1.s64 + 956;
	// bl 0x82e01bf0
	ctx.lr = 0x8280A988;
	sub_82E01BF0(ctx, base);
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// addi r3,r1,964
	ctx.r3.s64 = ctx.r1.s64 + 964;
	// addi r4,r11,2612
	ctx.r4.s64 = ctx.r11.s64 + 2612;
	// bl 0x82e02670
	ctx.lr = 0x8280A998;
	sub_82E02670(ctx, base);
	// lis r11,-31889
	ctx.r11.s64 = -2089877504;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r11,11788
	ctx.r5.s64 = ctx.r11.s64 + 11788;
	// addi r4,r1,964
	ctx.r4.s64 = ctx.r1.s64 + 964;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82805c10
	ctx.lr = 0x8280A9B0;
	sub_82805C10(ctx, base);
	// addi r3,r1,964
	ctx.r3.s64 = ctx.r1.s64 + 964;
	// bl 0x82e01bf0
	ctx.lr = 0x8280A9B8;
	sub_82E01BF0(ctx, base);
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// addi r3,r1,972
	ctx.r3.s64 = ctx.r1.s64 + 972;
	// addi r4,r11,2600
	ctx.r4.s64 = ctx.r11.s64 + 2600;
	// bl 0x82e02670
	ctx.lr = 0x8280A9C8;
	sub_82E02670(ctx, base);
	// lis r11,-31889
	ctx.r11.s64 = -2089877504;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r5,r11,12864
	ctx.r5.s64 = ctx.r11.s64 + 12864;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r4,r1,972
	ctx.r4.s64 = ctx.r1.s64 + 972;
	// bl 0x82805c10
	ctx.lr = 0x8280A9E0;
	sub_82805C10(ctx, base);
	// addi r3,r1,972
	ctx.r3.s64 = ctx.r1.s64 + 972;
	// bl 0x82e01bf0
	ctx.lr = 0x8280A9E8;
	sub_82E01BF0(ctx, base);
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// addi r3,r1,980
	ctx.r3.s64 = ctx.r1.s64 + 980;
	// addi r4,r11,2584
	ctx.r4.s64 = ctx.r11.s64 + 2584;
	// bl 0x82e02670
	ctx.lr = 0x8280A9F8;
	sub_82E02670(ctx, base);
	// lis r11,-31889
	ctx.r11.s64 = -2089877504;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r5,r11,12688
	ctx.r5.s64 = ctx.r11.s64 + 12688;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r4,r1,980
	ctx.r4.s64 = ctx.r1.s64 + 980;
	// bl 0x82805c10
	ctx.lr = 0x8280AA10;
	sub_82805C10(ctx, base);
	// addi r3,r1,980
	ctx.r3.s64 = ctx.r1.s64 + 980;
	// bl 0x82e01bf0
	ctx.lr = 0x8280AA18;
	sub_82E01BF0(ctx, base);
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// addi r3,r1,988
	ctx.r3.s64 = ctx.r1.s64 + 988;
	// addi r4,r11,2564
	ctx.r4.s64 = ctx.r11.s64 + 2564;
	// bl 0x82e02670
	ctx.lr = 0x8280AA28;
	sub_82E02670(ctx, base);
	// lis r11,-31889
	ctx.r11.s64 = -2089877504;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r5,r11,14296
	ctx.r5.s64 = ctx.r11.s64 + 14296;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r4,r1,988
	ctx.r4.s64 = ctx.r1.s64 + 988;
	// bl 0x82805c10
	ctx.lr = 0x8280AA40;
	sub_82805C10(ctx, base);
	// addi r3,r1,988
	ctx.r3.s64 = ctx.r1.s64 + 988;
	// bl 0x82e01bf0
	ctx.lr = 0x8280AA48;
	sub_82E01BF0(ctx, base);
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// addi r3,r1,996
	ctx.r3.s64 = ctx.r1.s64 + 996;
	// addi r4,r11,2532
	ctx.r4.s64 = ctx.r11.s64 + 2532;
	// bl 0x82e02670
	ctx.lr = 0x8280AA58;
	sub_82E02670(ctx, base);
	// lis r11,-31889
	ctx.r11.s64 = -2089877504;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r5,r11,16028
	ctx.r5.s64 = ctx.r11.s64 + 16028;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r4,r1,996
	ctx.r4.s64 = ctx.r1.s64 + 996;
	// bl 0x82805c10
	ctx.lr = 0x8280AA70;
	sub_82805C10(ctx, base);
	// addi r3,r1,996
	ctx.r3.s64 = ctx.r1.s64 + 996;
	// bl 0x82e01bf0
	ctx.lr = 0x8280AA78;
	sub_82E01BF0(ctx, base);
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// addi r3,r1,1004
	ctx.r3.s64 = ctx.r1.s64 + 1004;
	// addi r4,r11,2512
	ctx.r4.s64 = ctx.r11.s64 + 2512;
	// bl 0x82e02670
	ctx.lr = 0x8280AA88;
	sub_82E02670(ctx, base);
	// lis r11,-31889
	ctx.r11.s64 = -2089877504;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r5,r11,16480
	ctx.r5.s64 = ctx.r11.s64 + 16480;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r4,r1,1004
	ctx.r4.s64 = ctx.r1.s64 + 1004;
	// bl 0x82805c10
	ctx.lr = 0x8280AAA0;
	sub_82805C10(ctx, base);
	// addi r3,r1,1004
	ctx.r3.s64 = ctx.r1.s64 + 1004;
	// bl 0x82e01bf0
	ctx.lr = 0x8280AAA8;
	sub_82E01BF0(ctx, base);
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// addi r3,r1,1012
	ctx.r3.s64 = ctx.r1.s64 + 1012;
	// addi r4,r11,2492
	ctx.r4.s64 = ctx.r11.s64 + 2492;
	// bl 0x82e02670
	ctx.lr = 0x8280AAB8;
	sub_82E02670(ctx, base);
	// lis r11,-31889
	ctx.r11.s64 = -2089877504;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r5,r11,16740
	ctx.r5.s64 = ctx.r11.s64 + 16740;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r4,r1,1012
	ctx.r4.s64 = ctx.r1.s64 + 1012;
	// bl 0x82805c10
	ctx.lr = 0x8280AAD0;
	sub_82805C10(ctx, base);
	// addi r3,r1,1012
	ctx.r3.s64 = ctx.r1.s64 + 1012;
	// bl 0x82e01bf0
	ctx.lr = 0x8280AAD8;
	sub_82E01BF0(ctx, base);
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// addi r3,r1,1020
	ctx.r3.s64 = ctx.r1.s64 + 1020;
	// addi r4,r11,2476
	ctx.r4.s64 = ctx.r11.s64 + 2476;
	// bl 0x82e02670
	ctx.lr = 0x8280AAE8;
	sub_82E02670(ctx, base);
	// lis r11,-31889
	ctx.r11.s64 = -2089877504;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r11,16876
	ctx.r5.s64 = ctx.r11.s64 + 16876;
	// addi r4,r1,1020
	ctx.r4.s64 = ctx.r1.s64 + 1020;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82805c10
	ctx.lr = 0x8280AB00;
	sub_82805C10(ctx, base);
	// addi r3,r1,1020
	ctx.r3.s64 = ctx.r1.s64 + 1020;
	// bl 0x82e01bf0
	ctx.lr = 0x8280AB08;
	sub_82E01BF0(ctx, base);
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// addi r3,r1,1028
	ctx.r3.s64 = ctx.r1.s64 + 1028;
	// addi r4,r11,2468
	ctx.r4.s64 = ctx.r11.s64 + 2468;
	// bl 0x82e02670
	ctx.lr = 0x8280AB18;
	sub_82E02670(ctx, base);
	// lis r11,-31889
	ctx.r11.s64 = -2089877504;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r5,r11,18160
	ctx.r5.s64 = ctx.r11.s64 + 18160;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r4,r1,1028
	ctx.r4.s64 = ctx.r1.s64 + 1028;
	// bl 0x82805c10
	ctx.lr = 0x8280AB30;
	sub_82805C10(ctx, base);
	// addi r3,r1,1028
	ctx.r3.s64 = ctx.r1.s64 + 1028;
	// bl 0x82e01bf0
	ctx.lr = 0x8280AB38;
	sub_82E01BF0(ctx, base);
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// addi r3,r1,1036
	ctx.r3.s64 = ctx.r1.s64 + 1036;
	// addi r4,r11,2456
	ctx.r4.s64 = ctx.r11.s64 + 2456;
	// bl 0x82e02670
	ctx.lr = 0x8280AB48;
	sub_82E02670(ctx, base);
	// lis r11,-31889
	ctx.r11.s64 = -2089877504;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r5,r11,17588
	ctx.r5.s64 = ctx.r11.s64 + 17588;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r4,r1,1036
	ctx.r4.s64 = ctx.r1.s64 + 1036;
	// bl 0x82805c10
	ctx.lr = 0x8280AB60;
	sub_82805C10(ctx, base);
	// addi r3,r1,1036
	ctx.r3.s64 = ctx.r1.s64 + 1036;
	// bl 0x82e01bf0
	ctx.lr = 0x8280AB68;
	sub_82E01BF0(ctx, base);
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// addi r3,r1,1044
	ctx.r3.s64 = ctx.r1.s64 + 1044;
	// addi r4,r11,2432
	ctx.r4.s64 = ctx.r11.s64 + 2432;
	// bl 0x82e02670
	ctx.lr = 0x8280AB78;
	sub_82E02670(ctx, base);
	// lis r11,-31889
	ctx.r11.s64 = -2089877504;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r5,r11,19052
	ctx.r5.s64 = ctx.r11.s64 + 19052;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r4,r1,1044
	ctx.r4.s64 = ctx.r1.s64 + 1044;
	// bl 0x82805c10
	ctx.lr = 0x8280AB90;
	sub_82805C10(ctx, base);
	// addi r3,r1,1044
	ctx.r3.s64 = ctx.r1.s64 + 1044;
	// bl 0x82e01bf0
	ctx.lr = 0x8280AB98;
	sub_82E01BF0(ctx, base);
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// addi r3,r1,1052
	ctx.r3.s64 = ctx.r1.s64 + 1052;
	// addi r4,r11,2416
	ctx.r4.s64 = ctx.r11.s64 + 2416;
	// bl 0x82e02670
	ctx.lr = 0x8280ABA8;
	sub_82E02670(ctx, base);
	// lis r11,-31888
	ctx.r11.s64 = -2089811968;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r5,r11,-10008
	ctx.r5.s64 = ctx.r11.s64 + -10008;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r4,r1,1052
	ctx.r4.s64 = ctx.r1.s64 + 1052;
	// bl 0x82805c10
	ctx.lr = 0x8280ABC0;
	sub_82805C10(ctx, base);
	// addi r3,r1,1052
	ctx.r3.s64 = ctx.r1.s64 + 1052;
	// bl 0x82e01bf0
	ctx.lr = 0x8280ABC8;
	sub_82E01BF0(ctx, base);
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// addi r3,r1,1060
	ctx.r3.s64 = ctx.r1.s64 + 1060;
	// addi r4,r11,2400
	ctx.r4.s64 = ctx.r11.s64 + 2400;
	// bl 0x82e02670
	ctx.lr = 0x8280ABD8;
	sub_82E02670(ctx, base);
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r5,r11,17208
	ctx.r5.s64 = ctx.r11.s64 + 17208;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r4,r1,1060
	ctx.r4.s64 = ctx.r1.s64 + 1060;
	// bl 0x82805c10
	ctx.lr = 0x8280ABF0;
	sub_82805C10(ctx, base);
	// addi r3,r1,1060
	ctx.r3.s64 = ctx.r1.s64 + 1060;
	// bl 0x82e01bf0
	ctx.lr = 0x8280ABF8;
	sub_82E01BF0(ctx, base);
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// addi r3,r1,1068
	ctx.r3.s64 = ctx.r1.s64 + 1068;
	// addi r4,r11,2384
	ctx.r4.s64 = ctx.r11.s64 + 2384;
	// bl 0x82e02670
	ctx.lr = 0x8280AC08;
	sub_82E02670(ctx, base);
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r5,r11,17220
	ctx.r5.s64 = ctx.r11.s64 + 17220;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r4,r1,1068
	ctx.r4.s64 = ctx.r1.s64 + 1068;
	// bl 0x82805c10
	ctx.lr = 0x8280AC20;
	sub_82805C10(ctx, base);
	// addi r3,r1,1068
	ctx.r3.s64 = ctx.r1.s64 + 1068;
	// bl 0x82e01bf0
	ctx.lr = 0x8280AC28;
	sub_82E01BF0(ctx, base);
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// addi r3,r1,1076
	ctx.r3.s64 = ctx.r1.s64 + 1076;
	// addi r4,r11,2372
	ctx.r4.s64 = ctx.r11.s64 + 2372;
	// bl 0x82e02670
	ctx.lr = 0x8280AC38;
	sub_82E02670(ctx, base);
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r11,16840
	ctx.r5.s64 = ctx.r11.s64 + 16840;
	// addi r4,r1,1076
	ctx.r4.s64 = ctx.r1.s64 + 1076;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82805c10
	ctx.lr = 0x8280AC50;
	sub_82805C10(ctx, base);
	// addi r3,r1,1076
	ctx.r3.s64 = ctx.r1.s64 + 1076;
	// bl 0x82e01bf0
	ctx.lr = 0x8280AC58;
	sub_82E01BF0(ctx, base);
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// addi r3,r1,1084
	ctx.r3.s64 = ctx.r1.s64 + 1084;
	// addi r4,r11,2360
	ctx.r4.s64 = ctx.r11.s64 + 2360;
	// bl 0x82e02670
	ctx.lr = 0x8280AC68;
	sub_82E02670(ctx, base);
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r5,r11,17876
	ctx.r5.s64 = ctx.r11.s64 + 17876;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r4,r1,1084
	ctx.r4.s64 = ctx.r1.s64 + 1084;
	// bl 0x82805c10
	ctx.lr = 0x8280AC80;
	sub_82805C10(ctx, base);
	// addi r3,r1,1084
	ctx.r3.s64 = ctx.r1.s64 + 1084;
	// bl 0x82e01bf0
	ctx.lr = 0x8280AC88;
	sub_82E01BF0(ctx, base);
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// addi r3,r1,1092
	ctx.r3.s64 = ctx.r1.s64 + 1092;
	// addi r4,r11,2344
	ctx.r4.s64 = ctx.r11.s64 + 2344;
	// bl 0x82e02670
	ctx.lr = 0x8280AC98;
	sub_82E02670(ctx, base);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r5,r11,-29688
	ctx.r5.s64 = ctx.r11.s64 + -29688;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r4,r1,1092
	ctx.r4.s64 = ctx.r1.s64 + 1092;
	// bl 0x82805c10
	ctx.lr = 0x8280ACB0;
	sub_82805C10(ctx, base);
	// addi r3,r1,1092
	ctx.r3.s64 = ctx.r1.s64 + 1092;
	// bl 0x82e01bf0
	ctx.lr = 0x8280ACB8;
	sub_82E01BF0(ctx, base);
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// addi r3,r1,1100
	ctx.r3.s64 = ctx.r1.s64 + 1100;
	// addi r4,r11,2328
	ctx.r4.s64 = ctx.r11.s64 + 2328;
	// bl 0x82e02670
	ctx.lr = 0x8280ACC8;
	sub_82E02670(ctx, base);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r5,r11,-29676
	ctx.r5.s64 = ctx.r11.s64 + -29676;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r4,r1,1100
	ctx.r4.s64 = ctx.r1.s64 + 1100;
	// bl 0x82805c10
	ctx.lr = 0x8280ACE0;
	sub_82805C10(ctx, base);
	// addi r3,r1,1100
	ctx.r3.s64 = ctx.r1.s64 + 1100;
	// bl 0x82e01bf0
	ctx.lr = 0x8280ACE8;
	sub_82E01BF0(ctx, base);
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// addi r3,r1,1108
	ctx.r3.s64 = ctx.r1.s64 + 1108;
	// addi r4,r11,2312
	ctx.r4.s64 = ctx.r11.s64 + 2312;
	// bl 0x82e02670
	ctx.lr = 0x8280ACF8;
	sub_82E02670(ctx, base);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r5,r11,-27452
	ctx.r5.s64 = ctx.r11.s64 + -27452;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r4,r1,1108
	ctx.r4.s64 = ctx.r1.s64 + 1108;
	// bl 0x82805c10
	ctx.lr = 0x8280AD10;
	sub_82805C10(ctx, base);
	// addi r3,r1,1108
	ctx.r3.s64 = ctx.r1.s64 + 1108;
	// bl 0x82e01bf0
	ctx.lr = 0x8280AD18;
	sub_82E01BF0(ctx, base);
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// addi r3,r1,1116
	ctx.r3.s64 = ctx.r1.s64 + 1116;
	// addi r4,r11,2296
	ctx.r4.s64 = ctx.r11.s64 + 2296;
	// bl 0x82e02670
	ctx.lr = 0x8280AD28;
	sub_82E02670(ctx, base);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r5,r11,-27440
	ctx.r5.s64 = ctx.r11.s64 + -27440;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r4,r1,1116
	ctx.r4.s64 = ctx.r1.s64 + 1116;
	// bl 0x82805c10
	ctx.lr = 0x8280AD40;
	sub_82805C10(ctx, base);
	// addi r3,r1,1116
	ctx.r3.s64 = ctx.r1.s64 + 1116;
	// bl 0x82e01bf0
	ctx.lr = 0x8280AD48;
	sub_82E01BF0(ctx, base);
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// addi r3,r1,1124
	ctx.r3.s64 = ctx.r1.s64 + 1124;
	// addi r4,r11,2280
	ctx.r4.s64 = ctx.r11.s64 + 2280;
	// bl 0x82e02670
	ctx.lr = 0x8280AD58;
	sub_82E02670(ctx, base);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r11,-20224
	ctx.r5.s64 = ctx.r11.s64 + -20224;
	// addi r4,r1,1124
	ctx.r4.s64 = ctx.r1.s64 + 1124;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82805c10
	ctx.lr = 0x8280AD70;
	sub_82805C10(ctx, base);
	// addi r3,r1,1124
	ctx.r3.s64 = ctx.r1.s64 + 1124;
	// bl 0x82e01bf0
	ctx.lr = 0x8280AD78;
	sub_82E01BF0(ctx, base);
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// addi r3,r1,1132
	ctx.r3.s64 = ctx.r1.s64 + 1132;
	// addi r4,r11,2264
	ctx.r4.s64 = ctx.r11.s64 + 2264;
	// bl 0x82e02670
	ctx.lr = 0x8280AD88;
	sub_82E02670(ctx, base);
	// li r6,0
	ctx.r6.s64 = 0;
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r5,r11,-20212
	ctx.r5.s64 = ctx.r11.s64 + -20212;
	// addi r4,r1,1132
	ctx.r4.s64 = ctx.r1.s64 + 1132;
	// bl 0x82805c10
	ctx.lr = 0x8280ADA0;
	sub_82805C10(ctx, base);
	// addi r3,r1,1132
	ctx.r3.s64 = ctx.r1.s64 + 1132;
	// bl 0x82e01bf0
	ctx.lr = 0x8280ADA8;
	sub_82E01BF0(ctx, base);
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// addi r3,r1,1140
	ctx.r3.s64 = ctx.r1.s64 + 1140;
	// addi r4,r11,2248
	ctx.r4.s64 = ctx.r11.s64 + 2248;
	// bl 0x82e02670
	ctx.lr = 0x8280ADB8;
	sub_82E02670(ctx, base);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r5,r11,-17872
	ctx.r5.s64 = ctx.r11.s64 + -17872;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r4,r1,1140
	ctx.r4.s64 = ctx.r1.s64 + 1140;
	// bl 0x82805c10
	ctx.lr = 0x8280ADD0;
	sub_82805C10(ctx, base);
	// addi r3,r1,1140
	ctx.r3.s64 = ctx.r1.s64 + 1140;
	// bl 0x82e01bf0
	ctx.lr = 0x8280ADD8;
	sub_82E01BF0(ctx, base);
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// addi r3,r1,1148
	ctx.r3.s64 = ctx.r1.s64 + 1148;
	// addi r4,r11,2232
	ctx.r4.s64 = ctx.r11.s64 + 2232;
	// bl 0x82e02670
	ctx.lr = 0x8280ADE8;
	sub_82E02670(ctx, base);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r5,r11,-17860
	ctx.r5.s64 = ctx.r11.s64 + -17860;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r4,r1,1148
	ctx.r4.s64 = ctx.r1.s64 + 1148;
	// bl 0x82805c10
	ctx.lr = 0x8280AE00;
	sub_82805C10(ctx, base);
	// addi r3,r1,1148
	ctx.r3.s64 = ctx.r1.s64 + 1148;
	// bl 0x82e01bf0
	ctx.lr = 0x8280AE08;
	sub_82E01BF0(ctx, base);
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// addi r3,r1,1156
	ctx.r3.s64 = ctx.r1.s64 + 1156;
	// addi r4,r11,2216
	ctx.r4.s64 = ctx.r11.s64 + 2216;
	// bl 0x82e02670
	ctx.lr = 0x8280AE18;
	sub_82E02670(ctx, base);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r5,r11,-21936
	ctx.r5.s64 = ctx.r11.s64 + -21936;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r4,r1,1156
	ctx.r4.s64 = ctx.r1.s64 + 1156;
	// bl 0x82805c10
	ctx.lr = 0x8280AE30;
	sub_82805C10(ctx, base);
	// addi r3,r1,1156
	ctx.r3.s64 = ctx.r1.s64 + 1156;
	// bl 0x82e01bf0
	ctx.lr = 0x8280AE38;
	sub_82E01BF0(ctx, base);
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// addi r3,r1,1164
	ctx.r3.s64 = ctx.r1.s64 + 1164;
	// addi r4,r11,2200
	ctx.r4.s64 = ctx.r11.s64 + 2200;
	// bl 0x82e02670
	ctx.lr = 0x8280AE48;
	sub_82E02670(ctx, base);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r5,r11,-21924
	ctx.r5.s64 = ctx.r11.s64 + -21924;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r4,r1,1164
	ctx.r4.s64 = ctx.r1.s64 + 1164;
	// bl 0x82805c10
	ctx.lr = 0x8280AE60;
	sub_82805C10(ctx, base);
	// addi r3,r1,1164
	ctx.r3.s64 = ctx.r1.s64 + 1164;
	// bl 0x82e01bf0
	ctx.lr = 0x8280AE68;
	sub_82E01BF0(ctx, base);
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// addi r3,r1,1172
	ctx.r3.s64 = ctx.r1.s64 + 1172;
	// addi r4,r11,2184
	ctx.r4.s64 = ctx.r11.s64 + 2184;
	// bl 0x82e02670
	ctx.lr = 0x8280AE78;
	sub_82E02670(ctx, base);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r5,r11,-15712
	ctx.r5.s64 = ctx.r11.s64 + -15712;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r4,r1,1172
	ctx.r4.s64 = ctx.r1.s64 + 1172;
	// bl 0x82805c10
	ctx.lr = 0x8280AE90;
	sub_82805C10(ctx, base);
	// addi r3,r1,1172
	ctx.r3.s64 = ctx.r1.s64 + 1172;
	// bl 0x82e01bf0
	ctx.lr = 0x8280AE98;
	sub_82E01BF0(ctx, base);
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// addi r3,r1,1180
	ctx.r3.s64 = ctx.r1.s64 + 1180;
	// addi r4,r11,2168
	ctx.r4.s64 = ctx.r11.s64 + 2168;
	// bl 0x82e02670
	ctx.lr = 0x8280AEA8;
	sub_82E02670(ctx, base);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r11,-15700
	ctx.r5.s64 = ctx.r11.s64 + -15700;
	// addi r4,r1,1180
	ctx.r4.s64 = ctx.r1.s64 + 1180;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82805c10
	ctx.lr = 0x8280AEC0;
	sub_82805C10(ctx, base);
	// addi r3,r1,1180
	ctx.r3.s64 = ctx.r1.s64 + 1180;
	// bl 0x82e01bf0
	ctx.lr = 0x8280AEC8;
	sub_82E01BF0(ctx, base);
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// addi r3,r1,1188
	ctx.r3.s64 = ctx.r1.s64 + 1188;
	// addi r4,r11,2152
	ctx.r4.s64 = ctx.r11.s64 + 2152;
	// bl 0x82e02670
	ctx.lr = 0x8280AED8;
	sub_82E02670(ctx, base);
	// lis r11,-31880
	ctx.r11.s64 = -2089287680;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r5,r11,-27680
	ctx.r5.s64 = ctx.r11.s64 + -27680;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r4,r1,1188
	ctx.r4.s64 = ctx.r1.s64 + 1188;
	// bl 0x82805c10
	ctx.lr = 0x8280AEF0;
	sub_82805C10(ctx, base);
	// addi r3,r1,1188
	ctx.r3.s64 = ctx.r1.s64 + 1188;
	// bl 0x82e01bf0
	ctx.lr = 0x8280AEF8;
	sub_82E01BF0(ctx, base);
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// addi r3,r1,1196
	ctx.r3.s64 = ctx.r1.s64 + 1196;
	// addi r4,r11,2136
	ctx.r4.s64 = ctx.r11.s64 + 2136;
	// bl 0x82e02670
	ctx.lr = 0x8280AF08;
	sub_82E02670(ctx, base);
	// lis r11,-31880
	ctx.r11.s64 = -2089287680;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r5,r11,-27668
	ctx.r5.s64 = ctx.r11.s64 + -27668;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r4,r1,1196
	ctx.r4.s64 = ctx.r1.s64 + 1196;
	// bl 0x82805c10
	ctx.lr = 0x8280AF20;
	sub_82805C10(ctx, base);
	// addi r3,r1,1196
	ctx.r3.s64 = ctx.r1.s64 + 1196;
	// bl 0x82e01bf0
	ctx.lr = 0x8280AF28;
	sub_82E01BF0(ctx, base);
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// addi r3,r1,1204
	ctx.r3.s64 = ctx.r1.s64 + 1204;
	// addi r4,r11,2120
	ctx.r4.s64 = ctx.r11.s64 + 2120;
	// bl 0x82e02670
	ctx.lr = 0x8280AF38;
	sub_82E02670(ctx, base);
	// lis r11,-31880
	ctx.r11.s64 = -2089287680;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r5,r11,-31540
	ctx.r5.s64 = ctx.r11.s64 + -31540;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r4,r1,1204
	ctx.r4.s64 = ctx.r1.s64 + 1204;
	// bl 0x82805c10
	ctx.lr = 0x8280AF50;
	sub_82805C10(ctx, base);
	// addi r3,r1,1204
	ctx.r3.s64 = ctx.r1.s64 + 1204;
	// bl 0x82e01bf0
	ctx.lr = 0x8280AF58;
	sub_82E01BF0(ctx, base);
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// addi r3,r1,1212
	ctx.r3.s64 = ctx.r1.s64 + 1212;
	// addi r4,r11,2104
	ctx.r4.s64 = ctx.r11.s64 + 2104;
	// bl 0x82e02670
	ctx.lr = 0x8280AF68;
	sub_82E02670(ctx, base);
	// lis r11,-31880
	ctx.r11.s64 = -2089287680;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r5,r11,-31528
	ctx.r5.s64 = ctx.r11.s64 + -31528;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r4,r1,1212
	ctx.r4.s64 = ctx.r1.s64 + 1212;
	// bl 0x82805c10
	ctx.lr = 0x8280AF80;
	sub_82805C10(ctx, base);
	// addi r3,r1,1212
	ctx.r3.s64 = ctx.r1.s64 + 1212;
	// bl 0x82e01bf0
	ctx.lr = 0x8280AF88;
	sub_82E01BF0(ctx, base);
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// addi r3,r1,1220
	ctx.r3.s64 = ctx.r1.s64 + 1220;
	// addi r4,r11,2088
	ctx.r4.s64 = ctx.r11.s64 + 2088;
	// bl 0x82e02670
	ctx.lr = 0x8280AF98;
	sub_82E02670(ctx, base);
	// lis r11,-31880
	ctx.r11.s64 = -2089287680;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r5,r11,-31516
	ctx.r5.s64 = ctx.r11.s64 + -31516;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r4,r1,1220
	ctx.r4.s64 = ctx.r1.s64 + 1220;
	// bl 0x82805c10
	ctx.lr = 0x8280AFB0;
	sub_82805C10(ctx, base);
	// addi r3,r1,1220
	ctx.r3.s64 = ctx.r1.s64 + 1220;
	// bl 0x82e01bf0
	ctx.lr = 0x8280AFB8;
	sub_82E01BF0(ctx, base);
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// addi r3,r1,1228
	ctx.r3.s64 = ctx.r1.s64 + 1228;
	// addi r4,r11,2072
	ctx.r4.s64 = ctx.r11.s64 + 2072;
	// bl 0x82e02670
	ctx.lr = 0x8280AFC8;
	sub_82E02670(ctx, base);
	// lis r11,-31880
	ctx.r11.s64 = -2089287680;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r5,r11,-31504
	ctx.r5.s64 = ctx.r11.s64 + -31504;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r4,r1,1228
	ctx.r4.s64 = ctx.r1.s64 + 1228;
	// bl 0x82805c10
	ctx.lr = 0x8280AFE0;
	sub_82805C10(ctx, base);
	// addi r3,r1,1228
	ctx.r3.s64 = ctx.r1.s64 + 1228;
	// bl 0x82e01bf0
	ctx.lr = 0x8280AFE8;
	sub_82E01BF0(ctx, base);
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// addi r3,r1,1236
	ctx.r3.s64 = ctx.r1.s64 + 1236;
	// addi r4,r11,2052
	ctx.r4.s64 = ctx.r11.s64 + 2052;
	// bl 0x82e02670
	ctx.lr = 0x8280AFF8;
	sub_82E02670(ctx, base);
	// lis r11,-31880
	ctx.r11.s64 = -2089287680;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r11,-30192
	ctx.r5.s64 = ctx.r11.s64 + -30192;
	// addi r4,r1,1236
	ctx.r4.s64 = ctx.r1.s64 + 1236;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82805c10
	ctx.lr = 0x8280B010;
	sub_82805C10(ctx, base);
	// addi r3,r1,1236
	ctx.r3.s64 = ctx.r1.s64 + 1236;
	// bl 0x82e01bf0
	ctx.lr = 0x8280B018;
	sub_82E01BF0(ctx, base);
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// addi r3,r1,1244
	ctx.r3.s64 = ctx.r1.s64 + 1244;
	// addi r4,r11,2032
	ctx.r4.s64 = ctx.r11.s64 + 2032;
	// bl 0x82e02670
	ctx.lr = 0x8280B028;
	sub_82E02670(ctx, base);
	// lis r11,-31880
	ctx.r11.s64 = -2089287680;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r5,r11,-30180
	ctx.r5.s64 = ctx.r11.s64 + -30180;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r4,r1,1244
	ctx.r4.s64 = ctx.r1.s64 + 1244;
	// bl 0x82805c10
	ctx.lr = 0x8280B040;
	sub_82805C10(ctx, base);
	// addi r3,r1,1244
	ctx.r3.s64 = ctx.r1.s64 + 1244;
	// bl 0x82e01bf0
	ctx.lr = 0x8280B048;
	sub_82E01BF0(ctx, base);
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// addi r3,r1,1252
	ctx.r3.s64 = ctx.r1.s64 + 1252;
	// addi r4,r11,2004
	ctx.r4.s64 = ctx.r11.s64 + 2004;
	// bl 0x82e02670
	ctx.lr = 0x8280B058;
	sub_82E02670(ctx, base);
	// lis r11,-31880
	ctx.r11.s64 = -2089287680;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r5,r11,-30156
	ctx.r5.s64 = ctx.r11.s64 + -30156;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r4,r1,1252
	ctx.r4.s64 = ctx.r1.s64 + 1252;
	// bl 0x82805c10
	ctx.lr = 0x8280B070;
	sub_82805C10(ctx, base);
	// addi r3,r1,1252
	ctx.r3.s64 = ctx.r1.s64 + 1252;
	// bl 0x82e01bf0
	ctx.lr = 0x8280B078;
	sub_82E01BF0(ctx, base);
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// addi r3,r1,1260
	ctx.r3.s64 = ctx.r1.s64 + 1260;
	// addi r4,r11,1980
	ctx.r4.s64 = ctx.r11.s64 + 1980;
	// bl 0x82e02670
	ctx.lr = 0x8280B088;
	sub_82E02670(ctx, base);
	// lis r11,-31880
	ctx.r11.s64 = -2089287680;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r5,r11,-30168
	ctx.r5.s64 = ctx.r11.s64 + -30168;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r4,r1,1260
	ctx.r4.s64 = ctx.r1.s64 + 1260;
	// bl 0x82805c10
	ctx.lr = 0x8280B0A0;
	sub_82805C10(ctx, base);
	// addi r3,r1,1260
	ctx.r3.s64 = ctx.r1.s64 + 1260;
	// bl 0x82e01bf0
	ctx.lr = 0x8280B0A8;
	sub_82E01BF0(ctx, base);
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// addi r3,r1,1268
	ctx.r3.s64 = ctx.r1.s64 + 1268;
	// addi r4,r11,1960
	ctx.r4.s64 = ctx.r11.s64 + 1960;
	// bl 0x82e02670
	ctx.lr = 0x8280B0B8;
	sub_82E02670(ctx, base);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r5,r11,-2128
	ctx.r5.s64 = ctx.r11.s64 + -2128;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r4,r1,1268
	ctx.r4.s64 = ctx.r1.s64 + 1268;
	// bl 0x82805c10
	ctx.lr = 0x8280B0D0;
	sub_82805C10(ctx, base);
	// addi r3,r1,1268
	ctx.r3.s64 = ctx.r1.s64 + 1268;
	// bl 0x82e01bf0
	ctx.lr = 0x8280B0D8;
	sub_82E01BF0(ctx, base);
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// addi r3,r1,1276
	ctx.r3.s64 = ctx.r1.s64 + 1276;
	// addi r4,r11,1940
	ctx.r4.s64 = ctx.r11.s64 + 1940;
	// bl 0x82e02670
	ctx.lr = 0x8280B0E8;
	sub_82E02670(ctx, base);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r5,r11,-2116
	ctx.r5.s64 = ctx.r11.s64 + -2116;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r4,r1,1276
	ctx.r4.s64 = ctx.r1.s64 + 1276;
	// bl 0x82805c10
	ctx.lr = 0x8280B100;
	sub_82805C10(ctx, base);
	// addi r3,r1,1276
	ctx.r3.s64 = ctx.r1.s64 + 1276;
	// bl 0x82e01bf0
	ctx.lr = 0x8280B108;
	sub_82E01BF0(ctx, base);
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// addi r3,r1,1284
	ctx.r3.s64 = ctx.r1.s64 + 1284;
	// addi r4,r11,1920
	ctx.r4.s64 = ctx.r11.s64 + 1920;
	// bl 0x82e02670
	ctx.lr = 0x8280B118;
	sub_82E02670(ctx, base);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r5,r11,-2104
	ctx.r5.s64 = ctx.r11.s64 + -2104;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r4,r1,1284
	ctx.r4.s64 = ctx.r1.s64 + 1284;
	// bl 0x82805c10
	ctx.lr = 0x8280B130;
	sub_82805C10(ctx, base);
	// addi r3,r1,1284
	ctx.r3.s64 = ctx.r1.s64 + 1284;
	// bl 0x82e01bf0
	ctx.lr = 0x8280B138;
	sub_82E01BF0(ctx, base);
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// addi r3,r1,1292
	ctx.r3.s64 = ctx.r1.s64 + 1292;
	// addi r4,r11,1900
	ctx.r4.s64 = ctx.r11.s64 + 1900;
	// bl 0x82e02670
	ctx.lr = 0x8280B148;
	sub_82E02670(ctx, base);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r11,-2092
	ctx.r5.s64 = ctx.r11.s64 + -2092;
	// addi r4,r1,1292
	ctx.r4.s64 = ctx.r1.s64 + 1292;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82805c10
	ctx.lr = 0x8280B160;
	sub_82805C10(ctx, base);
	// addi r3,r1,1292
	ctx.r3.s64 = ctx.r1.s64 + 1292;
	// bl 0x82e01bf0
	ctx.lr = 0x8280B168;
	sub_82E01BF0(ctx, base);
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// addi r3,r1,1300
	ctx.r3.s64 = ctx.r1.s64 + 1300;
	// addi r4,r11,1880
	ctx.r4.s64 = ctx.r11.s64 + 1880;
	// bl 0x82e02670
	ctx.lr = 0x8280B178;
	sub_82E02670(ctx, base);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r5,r11,-3820
	ctx.r5.s64 = ctx.r11.s64 + -3820;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r4,r1,1300
	ctx.r4.s64 = ctx.r1.s64 + 1300;
	// bl 0x82805c10
	ctx.lr = 0x8280B190;
	sub_82805C10(ctx, base);
	// addi r3,r1,1300
	ctx.r3.s64 = ctx.r1.s64 + 1300;
	// bl 0x82e01bf0
	ctx.lr = 0x8280B198;
	sub_82E01BF0(ctx, base);
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// addi r3,r1,1308
	ctx.r3.s64 = ctx.r1.s64 + 1308;
	// addi r4,r11,1860
	ctx.r4.s64 = ctx.r11.s64 + 1860;
	// bl 0x82e02670
	ctx.lr = 0x8280B1A8;
	sub_82E02670(ctx, base);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r5,r11,-3808
	ctx.r5.s64 = ctx.r11.s64 + -3808;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r4,r1,1308
	ctx.r4.s64 = ctx.r1.s64 + 1308;
	// bl 0x82805c10
	ctx.lr = 0x8280B1C0;
	sub_82805C10(ctx, base);
	// addi r3,r1,1308
	ctx.r3.s64 = ctx.r1.s64 + 1308;
	// bl 0x82e01bf0
	ctx.lr = 0x8280B1C8;
	sub_82E01BF0(ctx, base);
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// addi r3,r1,1316
	ctx.r3.s64 = ctx.r1.s64 + 1316;
	// addi r4,r11,1844
	ctx.r4.s64 = ctx.r11.s64 + 1844;
	// bl 0x82e02670
	ctx.lr = 0x8280B1D8;
	sub_82E02670(ctx, base);
	// lis r11,-31880
	ctx.r11.s64 = -2089287680;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r5,r11,-24000
	ctx.r5.s64 = ctx.r11.s64 + -24000;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r4,r1,1316
	ctx.r4.s64 = ctx.r1.s64 + 1316;
	// bl 0x82805c10
	ctx.lr = 0x8280B1F0;
	sub_82805C10(ctx, base);
	// addi r3,r1,1316
	ctx.r3.s64 = ctx.r1.s64 + 1316;
	// bl 0x82e01bf0
	ctx.lr = 0x8280B1F8;
	sub_82E01BF0(ctx, base);
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// addi r3,r1,1324
	ctx.r3.s64 = ctx.r1.s64 + 1324;
	// addi r4,r11,1828
	ctx.r4.s64 = ctx.r11.s64 + 1828;
	// bl 0x82e02670
	ctx.lr = 0x8280B208;
	sub_82E02670(ctx, base);
	// lis r11,-31880
	ctx.r11.s64 = -2089287680;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r5,r11,-18032
	ctx.r5.s64 = ctx.r11.s64 + -18032;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r4,r1,1324
	ctx.r4.s64 = ctx.r1.s64 + 1324;
	// bl 0x82805c10
	ctx.lr = 0x8280B220;
	sub_82805C10(ctx, base);
	// addi r3,r1,1324
	ctx.r3.s64 = ctx.r1.s64 + 1324;
	// bl 0x82e01bf0
	ctx.lr = 0x8280B228;
	sub_82E01BF0(ctx, base);
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// addi r3,r1,1332
	ctx.r3.s64 = ctx.r1.s64 + 1332;
	// addi r4,r11,1812
	ctx.r4.s64 = ctx.r11.s64 + 1812;
	// bl 0x82e02670
	ctx.lr = 0x8280B238;
	sub_82E02670(ctx, base);
	// lis r11,-31880
	ctx.r11.s64 = -2089287680;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r5,r11,-18020
	ctx.r5.s64 = ctx.r11.s64 + -18020;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r4,r1,1332
	ctx.r4.s64 = ctx.r1.s64 + 1332;
	// bl 0x82805c10
	ctx.lr = 0x8280B250;
	sub_82805C10(ctx, base);
	// addi r3,r1,1332
	ctx.r3.s64 = ctx.r1.s64 + 1332;
	// bl 0x82e01bf0
	ctx.lr = 0x8280B258;
	sub_82E01BF0(ctx, base);
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// addi r3,r1,1340
	ctx.r3.s64 = ctx.r1.s64 + 1340;
	// addi r4,r11,1800
	ctx.r4.s64 = ctx.r11.s64 + 1800;
	// bl 0x82e02670
	ctx.lr = 0x8280B268;
	sub_82E02670(ctx, base);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r11,2208
	ctx.r5.s64 = ctx.r11.s64 + 2208;
	// addi r4,r1,1340
	ctx.r4.s64 = ctx.r1.s64 + 1340;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82805c10
	ctx.lr = 0x8280B280;
	sub_82805C10(ctx, base);
	// addi r3,r1,1340
	ctx.r3.s64 = ctx.r1.s64 + 1340;
	// bl 0x82e01bf0
	ctx.lr = 0x8280B288;
	sub_82E01BF0(ctx, base);
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// addi r3,r1,1348
	ctx.r3.s64 = ctx.r1.s64 + 1348;
	// addi r4,r11,1788
	ctx.r4.s64 = ctx.r11.s64 + 1788;
	// bl 0x82e02670
	ctx.lr = 0x8280B298;
	sub_82E02670(ctx, base);
	// li r6,0
	ctx.r6.s64 = 0;
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r5,r11,2220
	ctx.r5.s64 = ctx.r11.s64 + 2220;
	// addi r4,r1,1348
	ctx.r4.s64 = ctx.r1.s64 + 1348;
	// bl 0x82805c10
	ctx.lr = 0x8280B2B0;
	sub_82805C10(ctx, base);
	// addi r3,r1,1348
	ctx.r3.s64 = ctx.r1.s64 + 1348;
	// bl 0x82e01bf0
	ctx.lr = 0x8280B2B8;
	sub_82E01BF0(ctx, base);
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// addi r3,r1,1356
	ctx.r3.s64 = ctx.r1.s64 + 1356;
	// addi r4,r11,1772
	ctx.r4.s64 = ctx.r11.s64 + 1772;
	// bl 0x82e02670
	ctx.lr = 0x8280B2C8;
	sub_82E02670(ctx, base);
	// lis r11,-31880
	ctx.r11.s64 = -2089287680;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r5,r11,-11216
	ctx.r5.s64 = ctx.r11.s64 + -11216;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r4,r1,1356
	ctx.r4.s64 = ctx.r1.s64 + 1356;
	// bl 0x82805c10
	ctx.lr = 0x8280B2E0;
	sub_82805C10(ctx, base);
	// addi r3,r1,1356
	ctx.r3.s64 = ctx.r1.s64 + 1356;
	// bl 0x82e01bf0
	ctx.lr = 0x8280B2E8;
	sub_82E01BF0(ctx, base);
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// addi r3,r1,1364
	ctx.r3.s64 = ctx.r1.s64 + 1364;
	// addi r4,r11,1756
	ctx.r4.s64 = ctx.r11.s64 + 1756;
	// bl 0x82e02670
	ctx.lr = 0x8280B2F8;
	sub_82E02670(ctx, base);
	// lis r11,-31880
	ctx.r11.s64 = -2089287680;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r5,r11,-11204
	ctx.r5.s64 = ctx.r11.s64 + -11204;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r4,r1,1364
	ctx.r4.s64 = ctx.r1.s64 + 1364;
	// bl 0x82805c10
	ctx.lr = 0x8280B310;
	sub_82805C10(ctx, base);
	// addi r3,r1,1364
	ctx.r3.s64 = ctx.r1.s64 + 1364;
	// bl 0x82e01bf0
	ctx.lr = 0x8280B318;
	sub_82E01BF0(ctx, base);
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// addi r3,r1,1372
	ctx.r3.s64 = ctx.r1.s64 + 1372;
	// addi r4,r11,1744
	ctx.r4.s64 = ctx.r11.s64 + 1744;
	// bl 0x82e02670
	ctx.lr = 0x8280B328;
	sub_82E02670(ctx, base);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r5,r11,10780
	ctx.r5.s64 = ctx.r11.s64 + 10780;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r4,r1,1372
	ctx.r4.s64 = ctx.r1.s64 + 1372;
	// bl 0x82805c10
	ctx.lr = 0x8280B340;
	sub_82805C10(ctx, base);
	// addi r3,r1,1372
	ctx.r3.s64 = ctx.r1.s64 + 1372;
	// bl 0x82e01bf0
	ctx.lr = 0x8280B348;
	sub_82E01BF0(ctx, base);
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// addi r3,r1,1380
	ctx.r3.s64 = ctx.r1.s64 + 1380;
	// addi r4,r11,1732
	ctx.r4.s64 = ctx.r11.s64 + 1732;
	// bl 0x82e02670
	ctx.lr = 0x8280B358;
	sub_82E02670(ctx, base);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r5,r11,10792
	ctx.r5.s64 = ctx.r11.s64 + 10792;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r4,r1,1380
	ctx.r4.s64 = ctx.r1.s64 + 1380;
	// bl 0x82805c10
	ctx.lr = 0x8280B370;
	sub_82805C10(ctx, base);
	// addi r3,r1,1380
	ctx.r3.s64 = ctx.r1.s64 + 1380;
	// bl 0x82e01bf0
	ctx.lr = 0x8280B378;
	sub_82E01BF0(ctx, base);
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// addi r3,r1,1388
	ctx.r3.s64 = ctx.r1.s64 + 1388;
	// addi r4,r11,1712
	ctx.r4.s64 = ctx.r11.s64 + 1712;
	// bl 0x82e02670
	ctx.lr = 0x8280B388;
	sub_82E02670(ctx, base);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r5,r11,9704
	ctx.r5.s64 = ctx.r11.s64 + 9704;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r4,r1,1388
	ctx.r4.s64 = ctx.r1.s64 + 1388;
	// bl 0x82805c10
	ctx.lr = 0x8280B3A0;
	sub_82805C10(ctx, base);
	// addi r3,r1,1388
	ctx.r3.s64 = ctx.r1.s64 + 1388;
	// bl 0x82e01bf0
	ctx.lr = 0x8280B3A8;
	sub_82E01BF0(ctx, base);
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// addi r3,r1,1396
	ctx.r3.s64 = ctx.r1.s64 + 1396;
	// addi r4,r11,1692
	ctx.r4.s64 = ctx.r11.s64 + 1692;
	// bl 0x82e02670
	ctx.lr = 0x8280B3B8;
	sub_82E02670(ctx, base);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r11,9716
	ctx.r5.s64 = ctx.r11.s64 + 9716;
	// addi r4,r1,1396
	ctx.r4.s64 = ctx.r1.s64 + 1396;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82805c10
	ctx.lr = 0x8280B3D0;
	sub_82805C10(ctx, base);
	// addi r3,r1,1396
	ctx.r3.s64 = ctx.r1.s64 + 1396;
	// bl 0x82e01bf0
	ctx.lr = 0x8280B3D8;
	sub_82E01BF0(ctx, base);
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// addi r3,r1,1404
	ctx.r3.s64 = ctx.r1.s64 + 1404;
	// addi r4,r11,1676
	ctx.r4.s64 = ctx.r11.s64 + 1676;
	// bl 0x82e02670
	ctx.lr = 0x8280B3E8;
	sub_82E02670(ctx, base);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r5,r11,8572
	ctx.r5.s64 = ctx.r11.s64 + 8572;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r4,r1,1404
	ctx.r4.s64 = ctx.r1.s64 + 1404;
	// bl 0x82805c10
	ctx.lr = 0x8280B400;
	sub_82805C10(ctx, base);
	// addi r3,r1,1404
	ctx.r3.s64 = ctx.r1.s64 + 1404;
	// bl 0x82e01bf0
	ctx.lr = 0x8280B408;
	sub_82E01BF0(ctx, base);
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// addi r3,r1,1412
	ctx.r3.s64 = ctx.r1.s64 + 1412;
	// addi r4,r11,1660
	ctx.r4.s64 = ctx.r11.s64 + 1660;
	// bl 0x82e02670
	ctx.lr = 0x8280B418;
	sub_82E02670(ctx, base);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r5,r11,8584
	ctx.r5.s64 = ctx.r11.s64 + 8584;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r4,r1,1412
	ctx.r4.s64 = ctx.r1.s64 + 1412;
	// bl 0x82805c10
	ctx.lr = 0x8280B430;
	sub_82805C10(ctx, base);
	// addi r3,r1,1412
	ctx.r3.s64 = ctx.r1.s64 + 1412;
	// bl 0x82e01bf0
	ctx.lr = 0x8280B438;
	sub_82E01BF0(ctx, base);
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// addi r3,r1,1420
	ctx.r3.s64 = ctx.r1.s64 + 1420;
	// addi r4,r11,1644
	ctx.r4.s64 = ctx.r11.s64 + 1644;
	// bl 0x82e02670
	ctx.lr = 0x8280B448;
	sub_82E02670(ctx, base);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r5,r11,12008
	ctx.r5.s64 = ctx.r11.s64 + 12008;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r4,r1,1420
	ctx.r4.s64 = ctx.r1.s64 + 1420;
	// bl 0x82805c10
	ctx.lr = 0x8280B460;
	sub_82805C10(ctx, base);
	// addi r3,r1,1420
	ctx.r3.s64 = ctx.r1.s64 + 1420;
	// bl 0x82e01bf0
	ctx.lr = 0x8280B468;
	sub_82E01BF0(ctx, base);
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// addi r3,r1,1428
	ctx.r3.s64 = ctx.r1.s64 + 1428;
	// addi r4,r11,1628
	ctx.r4.s64 = ctx.r11.s64 + 1628;
	// bl 0x82e02670
	ctx.lr = 0x8280B478;
	sub_82E02670(ctx, base);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r5,r11,12020
	ctx.r5.s64 = ctx.r11.s64 + 12020;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r4,r1,1428
	ctx.r4.s64 = ctx.r1.s64 + 1428;
	// bl 0x82805c10
	ctx.lr = 0x8280B490;
	sub_82805C10(ctx, base);
	// addi r3,r1,1428
	ctx.r3.s64 = ctx.r1.s64 + 1428;
	// bl 0x82e01bf0
	ctx.lr = 0x8280B498;
	sub_82E01BF0(ctx, base);
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// addi r3,r1,1436
	ctx.r3.s64 = ctx.r1.s64 + 1436;
	// addi r4,r11,1612
	ctx.r4.s64 = ctx.r11.s64 + 1612;
	// bl 0x82e02670
	ctx.lr = 0x8280B4A8;
	sub_82E02670(ctx, base);
	// lis r11,-31880
	ctx.r11.s64 = -2089287680;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r5,r11,3576
	ctx.r5.s64 = ctx.r11.s64 + 3576;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r4,r1,1436
	ctx.r4.s64 = ctx.r1.s64 + 1436;
	// bl 0x82805c10
	ctx.lr = 0x8280B4C0;
	sub_82805C10(ctx, base);
	// addi r3,r1,1436
	ctx.r3.s64 = ctx.r1.s64 + 1436;
	// bl 0x82e01bf0
	ctx.lr = 0x8280B4C8;
	sub_82E01BF0(ctx, base);
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// addi r3,r1,1444
	ctx.r3.s64 = ctx.r1.s64 + 1444;
	// addi r4,r11,1596
	ctx.r4.s64 = ctx.r11.s64 + 1596;
	// bl 0x82e02670
	ctx.lr = 0x8280B4D8;
	sub_82E02670(ctx, base);
	// lis r11,-31880
	ctx.r11.s64 = -2089287680;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r5,r11,3588
	ctx.r5.s64 = ctx.r11.s64 + 3588;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r4,r1,1444
	ctx.r4.s64 = ctx.r1.s64 + 1444;
	// bl 0x82805c10
	ctx.lr = 0x8280B4F0;
	sub_82805C10(ctx, base);
	// addi r3,r1,1444
	ctx.r3.s64 = ctx.r1.s64 + 1444;
	// bl 0x82e01bf0
	ctx.lr = 0x8280B4F8;
	sub_82E01BF0(ctx, base);
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// addi r3,r1,1452
	ctx.r3.s64 = ctx.r1.s64 + 1452;
	// addi r4,r11,1576
	ctx.r4.s64 = ctx.r11.s64 + 1576;
	// bl 0x82e02670
	ctx.lr = 0x8280B508;
	sub_82E02670(ctx, base);
	// lis r11,-31880
	ctx.r11.s64 = -2089287680;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r11,6840
	ctx.r5.s64 = ctx.r11.s64 + 6840;
	// addi r4,r1,1452
	ctx.r4.s64 = ctx.r1.s64 + 1452;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82805c10
	ctx.lr = 0x8280B520;
	sub_82805C10(ctx, base);
	// addi r3,r1,1452
	ctx.r3.s64 = ctx.r1.s64 + 1452;
	// bl 0x82e01bf0
	ctx.lr = 0x8280B528;
	sub_82E01BF0(ctx, base);
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// addi r3,r1,1460
	ctx.r3.s64 = ctx.r1.s64 + 1460;
	// addi r4,r11,1556
	ctx.r4.s64 = ctx.r11.s64 + 1556;
	// bl 0x82e02670
	ctx.lr = 0x8280B538;
	sub_82E02670(ctx, base);
	// lis r11,-31880
	ctx.r11.s64 = -2089287680;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r5,r11,6852
	ctx.r5.s64 = ctx.r11.s64 + 6852;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r4,r1,1460
	ctx.r4.s64 = ctx.r1.s64 + 1460;
	// bl 0x82805c10
	ctx.lr = 0x8280B550;
	sub_82805C10(ctx, base);
	// addi r3,r1,1460
	ctx.r3.s64 = ctx.r1.s64 + 1460;
	// bl 0x82e01bf0
	ctx.lr = 0x8280B558;
	sub_82E01BF0(ctx, base);
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// addi r3,r1,1468
	ctx.r3.s64 = ctx.r1.s64 + 1468;
	// addi r4,r11,1540
	ctx.r4.s64 = ctx.r11.s64 + 1540;
	// bl 0x82e02670
	ctx.lr = 0x8280B568;
	sub_82E02670(ctx, base);
	// lis r11,-31880
	ctx.r11.s64 = -2089287680;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r5,r11,9468
	ctx.r5.s64 = ctx.r11.s64 + 9468;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r4,r1,1468
	ctx.r4.s64 = ctx.r1.s64 + 1468;
	// bl 0x82805c10
	ctx.lr = 0x8280B580;
	sub_82805C10(ctx, base);
	// addi r3,r1,1468
	ctx.r3.s64 = ctx.r1.s64 + 1468;
	// bl 0x82e01bf0
	ctx.lr = 0x8280B588;
	sub_82E01BF0(ctx, base);
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// addi r3,r1,1476
	ctx.r3.s64 = ctx.r1.s64 + 1476;
	// addi r4,r11,1524
	ctx.r4.s64 = ctx.r11.s64 + 1524;
	// bl 0x82e02670
	ctx.lr = 0x8280B598;
	sub_82E02670(ctx, base);
	// lis r11,-31881
	ctx.r11.s64 = -2089353216;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r5,r11,18004
	ctx.r5.s64 = ctx.r11.s64 + 18004;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r4,r1,1476
	ctx.r4.s64 = ctx.r1.s64 + 1476;
	// bl 0x82805c10
	ctx.lr = 0x8280B5B0;
	sub_82805C10(ctx, base);
	// addi r3,r1,1476
	ctx.r3.s64 = ctx.r1.s64 + 1476;
	// bl 0x82e01bf0
	ctx.lr = 0x8280B5B8;
	sub_82E01BF0(ctx, base);
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// addi r3,r1,1484
	ctx.r3.s64 = ctx.r1.s64 + 1484;
	// addi r4,r11,1508
	ctx.r4.s64 = ctx.r11.s64 + 1508;
	// bl 0x82e02670
	ctx.lr = 0x8280B5C8;
	sub_82E02670(ctx, base);
	// lis r11,-31881
	ctx.r11.s64 = -2089353216;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r5,r11,18016
	ctx.r5.s64 = ctx.r11.s64 + 18016;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r4,r1,1484
	ctx.r4.s64 = ctx.r1.s64 + 1484;
	// bl 0x82805c10
	ctx.lr = 0x8280B5E0;
	sub_82805C10(ctx, base);
	// addi r3,r1,1484
	ctx.r3.s64 = ctx.r1.s64 + 1484;
	// bl 0x82e01bf0
	ctx.lr = 0x8280B5E8;
	sub_82E01BF0(ctx, base);
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// addi r3,r1,1492
	ctx.r3.s64 = ctx.r1.s64 + 1492;
	// addi r4,r11,1484
	ctx.r4.s64 = ctx.r11.s64 + 1484;
	// bl 0x82e02670
	ctx.lr = 0x8280B5F8;
	sub_82E02670(ctx, base);
	// lis r11,-31881
	ctx.r11.s64 = -2089353216;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r5,r11,18028
	ctx.r5.s64 = ctx.r11.s64 + 18028;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r4,r1,1492
	ctx.r4.s64 = ctx.r1.s64 + 1492;
	// bl 0x82805c10
	ctx.lr = 0x8280B610;
	sub_82805C10(ctx, base);
	// addi r3,r1,1492
	ctx.r3.s64 = ctx.r1.s64 + 1492;
	// bl 0x82e01bf0
	ctx.lr = 0x8280B618;
	sub_82E01BF0(ctx, base);
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// addi r3,r1,1500
	ctx.r3.s64 = ctx.r1.s64 + 1500;
	// addi r4,r11,1460
	ctx.r4.s64 = ctx.r11.s64 + 1460;
	// bl 0x82e02670
	ctx.lr = 0x8280B628;
	sub_82E02670(ctx, base);
	// lis r11,-31881
	ctx.r11.s64 = -2089353216;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r5,r11,18040
	ctx.r5.s64 = ctx.r11.s64 + 18040;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r4,r1,1500
	ctx.r4.s64 = ctx.r1.s64 + 1500;
	// bl 0x82805c10
	ctx.lr = 0x8280B640;
	sub_82805C10(ctx, base);
	// addi r3,r1,1500
	ctx.r3.s64 = ctx.r1.s64 + 1500;
	// bl 0x82e01bf0
	ctx.lr = 0x8280B648;
	sub_82E01BF0(ctx, base);
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// addi r3,r1,1508
	ctx.r3.s64 = ctx.r1.s64 + 1508;
	// addi r4,r11,1440
	ctx.r4.s64 = ctx.r11.s64 + 1440;
	// bl 0x82e02670
	ctx.lr = 0x8280B658;
	sub_82E02670(ctx, base);
	// lis r11,-31880
	ctx.r11.s64 = -2089287680;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r11,14032
	ctx.r5.s64 = ctx.r11.s64 + 14032;
	// addi r4,r1,1508
	ctx.r4.s64 = ctx.r1.s64 + 1508;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82805c10
	ctx.lr = 0x8280B670;
	sub_82805C10(ctx, base);
	// addi r3,r1,1508
	ctx.r3.s64 = ctx.r1.s64 + 1508;
	// bl 0x82e01bf0
	ctx.lr = 0x8280B678;
	sub_82E01BF0(ctx, base);
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// addi r3,r1,1516
	ctx.r3.s64 = ctx.r1.s64 + 1516;
	// addi r4,r11,1424
	ctx.r4.s64 = ctx.r11.s64 + 1424;
	// bl 0x82e02670
	ctx.lr = 0x8280B688;
	sub_82E02670(ctx, base);
	// lis r11,-31880
	ctx.r11.s64 = -2089287680;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r5,r11,16976
	ctx.r5.s64 = ctx.r11.s64 + 16976;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r4,r1,1516
	ctx.r4.s64 = ctx.r1.s64 + 1516;
	// bl 0x82805c10
	ctx.lr = 0x8280B6A0;
	sub_82805C10(ctx, base);
	// addi r3,r1,1516
	ctx.r3.s64 = ctx.r1.s64 + 1516;
	// bl 0x82e01bf0
	ctx.lr = 0x8280B6A8;
	sub_82E01BF0(ctx, base);
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// addi r3,r1,1524
	ctx.r3.s64 = ctx.r1.s64 + 1524;
	// addi r4,r11,1408
	ctx.r4.s64 = ctx.r11.s64 + 1408;
	// bl 0x82e02670
	ctx.lr = 0x8280B6B8;
	sub_82E02670(ctx, base);
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r5,r11,-27448
	ctx.r5.s64 = ctx.r11.s64 + -27448;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r4,r1,1524
	ctx.r4.s64 = ctx.r1.s64 + 1524;
	// bl 0x82805c10
	ctx.lr = 0x8280B6D0;
	sub_82805C10(ctx, base);
	// addi r3,r1,1524
	ctx.r3.s64 = ctx.r1.s64 + 1524;
	// bl 0x82e01bf0
	ctx.lr = 0x8280B6D8;
	sub_82E01BF0(ctx, base);
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// addi r3,r1,1532
	ctx.r3.s64 = ctx.r1.s64 + 1532;
	// addi r4,r11,1384
	ctx.r4.s64 = ctx.r11.s64 + 1384;
	// bl 0x82e02670
	ctx.lr = 0x8280B6E8;
	sub_82E02670(ctx, base);
	// lis r11,-31883
	ctx.r11.s64 = -2089484288;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r5,r11,-19284
	ctx.r5.s64 = ctx.r11.s64 + -19284;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r4,r1,1532
	ctx.r4.s64 = ctx.r1.s64 + 1532;
	// bl 0x82805c10
	ctx.lr = 0x8280B700;
	sub_82805C10(ctx, base);
	// addi r3,r1,1532
	ctx.r3.s64 = ctx.r1.s64 + 1532;
	// bl 0x82e01bf0
	ctx.lr = 0x8280B708;
	sub_82E01BF0(ctx, base);
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// addi r3,r1,1540
	ctx.r3.s64 = ctx.r1.s64 + 1540;
	// addi r4,r11,1360
	ctx.r4.s64 = ctx.r11.s64 + 1360;
	// bl 0x82e02670
	ctx.lr = 0x8280B718;
	sub_82E02670(ctx, base);
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r5,r11,-17100
	ctx.r5.s64 = ctx.r11.s64 + -17100;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r4,r1,1540
	ctx.r4.s64 = ctx.r1.s64 + 1540;
	// bl 0x82805c10
	ctx.lr = 0x8280B730;
	sub_82805C10(ctx, base);
	// addi r3,r1,1540
	ctx.r3.s64 = ctx.r1.s64 + 1540;
	// bl 0x82e01bf0
	ctx.lr = 0x8280B738;
	sub_82E01BF0(ctx, base);
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// addi r3,r1,1548
	ctx.r3.s64 = ctx.r1.s64 + 1548;
	// addi r4,r11,1328
	ctx.r4.s64 = ctx.r11.s64 + 1328;
	// bl 0x82e02670
	ctx.lr = 0x8280B748;
	sub_82E02670(ctx, base);
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r5,r11,-17088
	ctx.r5.s64 = ctx.r11.s64 + -17088;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r4,r1,1548
	ctx.r4.s64 = ctx.r1.s64 + 1548;
	// bl 0x82805c10
	ctx.lr = 0x8280B760;
	sub_82805C10(ctx, base);
	// addi r3,r1,1548
	ctx.r3.s64 = ctx.r1.s64 + 1548;
	// bl 0x82e01bf0
	ctx.lr = 0x8280B768;
	sub_82E01BF0(ctx, base);
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// addi r3,r1,1556
	ctx.r3.s64 = ctx.r1.s64 + 1556;
	// addi r4,r11,1316
	ctx.r4.s64 = ctx.r11.s64 + 1316;
	// bl 0x82e02670
	ctx.lr = 0x8280B778;
	sub_82E02670(ctx, base);
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r11,-14528
	ctx.r5.s64 = ctx.r11.s64 + -14528;
	// addi r4,r1,1556
	ctx.r4.s64 = ctx.r1.s64 + 1556;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82805c10
	ctx.lr = 0x8280B790;
	sub_82805C10(ctx, base);
	// addi r3,r1,1556
	ctx.r3.s64 = ctx.r1.s64 + 1556;
	// bl 0x82e01bf0
	ctx.lr = 0x8280B798;
	sub_82E01BF0(ctx, base);
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// addi r3,r1,1564
	ctx.r3.s64 = ctx.r1.s64 + 1564;
	// addi r4,r11,1276
	ctx.r4.s64 = ctx.r11.s64 + 1276;
	// bl 0x82e02670
	ctx.lr = 0x8280B7A8;
	sub_82E02670(ctx, base);
	// li r6,0
	ctx.r6.s64 = 0;
	// lis r11,-31883
	ctx.r11.s64 = -2089484288;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r5,r11,-2416
	ctx.r5.s64 = ctx.r11.s64 + -2416;
	// addi r4,r1,1564
	ctx.r4.s64 = ctx.r1.s64 + 1564;
	// bl 0x82805c10
	ctx.lr = 0x8280B7C0;
	sub_82805C10(ctx, base);
	// addi r3,r1,1564
	ctx.r3.s64 = ctx.r1.s64 + 1564;
	// bl 0x82e01bf0
	ctx.lr = 0x8280B7C8;
	sub_82E01BF0(ctx, base);
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// addi r3,r1,1572
	ctx.r3.s64 = ctx.r1.s64 + 1572;
	// addi r4,r11,1236
	ctx.r4.s64 = ctx.r11.s64 + 1236;
	// bl 0x82e02670
	ctx.lr = 0x8280B7D8;
	sub_82E02670(ctx, base);
	// lis r11,-31883
	ctx.r11.s64 = -2089484288;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r5,r11,-2404
	ctx.r5.s64 = ctx.r11.s64 + -2404;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r4,r1,1572
	ctx.r4.s64 = ctx.r1.s64 + 1572;
	// bl 0x82805c10
	ctx.lr = 0x8280B7F0;
	sub_82805C10(ctx, base);
	// addi r3,r1,1572
	ctx.r3.s64 = ctx.r1.s64 + 1572;
	// bl 0x82e01bf0
	ctx.lr = 0x8280B7F8;
	sub_82E01BF0(ctx, base);
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// addi r3,r1,1580
	ctx.r3.s64 = ctx.r1.s64 + 1580;
	// addi r4,r11,1212
	ctx.r4.s64 = ctx.r11.s64 + 1212;
	// bl 0x82e02670
	ctx.lr = 0x8280B808;
	sub_82E02670(ctx, base);
	// lis r11,-31883
	ctx.r11.s64 = -2089484288;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r5,r11,-4544
	ctx.r5.s64 = ctx.r11.s64 + -4544;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r4,r1,1580
	ctx.r4.s64 = ctx.r1.s64 + 1580;
	// bl 0x82805c10
	ctx.lr = 0x8280B820;
	sub_82805C10(ctx, base);
	// addi r3,r1,1580
	ctx.r3.s64 = ctx.r1.s64 + 1580;
	// bl 0x82e01bf0
	ctx.lr = 0x8280B828;
	sub_82E01BF0(ctx, base);
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// addi r3,r1,1588
	ctx.r3.s64 = ctx.r1.s64 + 1588;
	// addi r4,r11,1188
	ctx.r4.s64 = ctx.r11.s64 + 1188;
	// bl 0x82e02670
	ctx.lr = 0x8280B838;
	sub_82E02670(ctx, base);
	// lis r11,-31883
	ctx.r11.s64 = -2089484288;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r5,r11,-1264
	ctx.r5.s64 = ctx.r11.s64 + -1264;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r4,r1,1588
	ctx.r4.s64 = ctx.r1.s64 + 1588;
	// bl 0x82805c10
	ctx.lr = 0x8280B850;
	sub_82805C10(ctx, base);
	// addi r3,r1,1588
	ctx.r3.s64 = ctx.r1.s64 + 1588;
	// bl 0x82e01bf0
	ctx.lr = 0x8280B858;
	sub_82E01BF0(ctx, base);
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// addi r3,r1,1596
	ctx.r3.s64 = ctx.r1.s64 + 1596;
	// addi r4,r11,1160
	ctx.r4.s64 = ctx.r11.s64 + 1160;
	// bl 0x82e02670
	ctx.lr = 0x8280B868;
	sub_82E02670(ctx, base);
	// lis r11,-31883
	ctx.r11.s64 = -2089484288;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r5,r11,-2728
	ctx.r5.s64 = ctx.r11.s64 + -2728;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r4,r1,1596
	ctx.r4.s64 = ctx.r1.s64 + 1596;
	// bl 0x82805c10
	ctx.lr = 0x8280B880;
	sub_82805C10(ctx, base);
	// addi r3,r1,1596
	ctx.r3.s64 = ctx.r1.s64 + 1596;
	// bl 0x82e01bf0
	ctx.lr = 0x8280B888;
	sub_82E01BF0(ctx, base);
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// addi r3,r1,1604
	ctx.r3.s64 = ctx.r1.s64 + 1604;
	// addi r4,r11,1132
	ctx.r4.s64 = ctx.r11.s64 + 1132;
	// bl 0x82e02670
	ctx.lr = 0x8280B898;
	sub_82E02670(ctx, base);
	// lis r11,-31883
	ctx.r11.s64 = -2089484288;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r5,r11,-992
	ctx.r5.s64 = ctx.r11.s64 + -992;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r4,r1,1604
	ctx.r4.s64 = ctx.r1.s64 + 1604;
	// bl 0x82805c10
	ctx.lr = 0x8280B8B0;
	sub_82805C10(ctx, base);
	// addi r3,r1,1604
	ctx.r3.s64 = ctx.r1.s64 + 1604;
	// bl 0x82e01bf0
	ctx.lr = 0x8280B8B8;
	sub_82E01BF0(ctx, base);
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// addi r3,r1,1612
	ctx.r3.s64 = ctx.r1.s64 + 1612;
	// addi r4,r11,1104
	ctx.r4.s64 = ctx.r11.s64 + 1104;
	// bl 0x82e02670
	ctx.lr = 0x8280B8C8;
	sub_82E02670(ctx, base);
	// lis r11,-31883
	ctx.r11.s64 = -2089484288;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r11,-4096
	ctx.r5.s64 = ctx.r11.s64 + -4096;
	// addi r4,r1,1612
	ctx.r4.s64 = ctx.r1.s64 + 1612;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82805c10
	ctx.lr = 0x8280B8E0;
	sub_82805C10(ctx, base);
	// addi r3,r1,1612
	ctx.r3.s64 = ctx.r1.s64 + 1612;
	// bl 0x82e01bf0
	ctx.lr = 0x8280B8E8;
	sub_82E01BF0(ctx, base);
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// addi r3,r1,1620
	ctx.r3.s64 = ctx.r1.s64 + 1620;
	// addi r4,r11,1076
	ctx.r4.s64 = ctx.r11.s64 + 1076;
	// bl 0x82e02670
	ctx.lr = 0x8280B8F8;
	sub_82E02670(ctx, base);
	// lis r11,-31883
	ctx.r11.s64 = -2089484288;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r5,r11,-1416
	ctx.r5.s64 = ctx.r11.s64 + -1416;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r4,r1,1620
	ctx.r4.s64 = ctx.r1.s64 + 1620;
	// bl 0x82805c10
	ctx.lr = 0x8280B910;
	sub_82805C10(ctx, base);
	// addi r3,r1,1620
	ctx.r3.s64 = ctx.r1.s64 + 1620;
	// bl 0x82e01bf0
	ctx.lr = 0x8280B918;
	sub_82E01BF0(ctx, base);
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// addi r3,r1,1628
	ctx.r3.s64 = ctx.r1.s64 + 1628;
	// addi r4,r11,1064
	ctx.r4.s64 = ctx.r11.s64 + 1064;
	// bl 0x82e02670
	ctx.lr = 0x8280B928;
	sub_82E02670(ctx, base);
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r5,r11,3476
	ctx.r5.s64 = ctx.r11.s64 + 3476;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r4,r1,1628
	ctx.r4.s64 = ctx.r1.s64 + 1628;
	// bl 0x82805c10
	ctx.lr = 0x8280B940;
	sub_82805C10(ctx, base);
	// addi r3,r1,1628
	ctx.r3.s64 = ctx.r1.s64 + 1628;
	// bl 0x82e01bf0
	ctx.lr = 0x8280B948;
	sub_82E01BF0(ctx, base);
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// addi r3,r1,1636
	ctx.r3.s64 = ctx.r1.s64 + 1636;
	// addi r4,r11,1040
	ctx.r4.s64 = ctx.r11.s64 + 1040;
	// bl 0x82e02670
	ctx.lr = 0x8280B958;
	sub_82E02670(ctx, base);
	// lis r11,-31883
	ctx.r11.s64 = -2089484288;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r5,r11,23320
	ctx.r5.s64 = ctx.r11.s64 + 23320;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r4,r1,1636
	ctx.r4.s64 = ctx.r1.s64 + 1636;
	// bl 0x82805c10
	ctx.lr = 0x8280B970;
	sub_82805C10(ctx, base);
	// addi r3,r1,1636
	ctx.r3.s64 = ctx.r1.s64 + 1636;
	// bl 0x82e01bf0
	ctx.lr = 0x8280B978;
	sub_82E01BF0(ctx, base);
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// addi r3,r1,1644
	ctx.r3.s64 = ctx.r1.s64 + 1644;
	// addi r4,r11,1016
	ctx.r4.s64 = ctx.r11.s64 + 1016;
	// bl 0x82e02670
	ctx.lr = 0x8280B988;
	sub_82E02670(ctx, base);
	// lis r11,-31883
	ctx.r11.s64 = -2089484288;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r5,r11,17748
	ctx.r5.s64 = ctx.r11.s64 + 17748;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r4,r1,1644
	ctx.r4.s64 = ctx.r1.s64 + 1644;
	// bl 0x82805c10
	ctx.lr = 0x8280B9A0;
	sub_82805C10(ctx, base);
	// addi r3,r1,1644
	ctx.r3.s64 = ctx.r1.s64 + 1644;
	// bl 0x82e01bf0
	ctx.lr = 0x8280B9A8;
	sub_82E01BF0(ctx, base);
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// addi r3,r1,1652
	ctx.r3.s64 = ctx.r1.s64 + 1652;
	// addi r4,r11,1000
	ctx.r4.s64 = ctx.r11.s64 + 1000;
	// bl 0x82e02670
	ctx.lr = 0x8280B9B8;
	sub_82E02670(ctx, base);
	// lis r11,-32244
	ctx.r11.s64 = -2113142784;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r5,r11,-32740
	ctx.r5.s64 = ctx.r11.s64 + -32740;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r4,r1,1652
	ctx.r4.s64 = ctx.r1.s64 + 1652;
	// bl 0x82805c10
	ctx.lr = 0x8280B9D0;
	sub_82805C10(ctx, base);
	// addi r3,r1,1652
	ctx.r3.s64 = ctx.r1.s64 + 1652;
	// bl 0x82e01bf0
	ctx.lr = 0x8280B9D8;
	sub_82E01BF0(ctx, base);
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// addi r3,r1,1660
	ctx.r3.s64 = ctx.r1.s64 + 1660;
	// addi r4,r11,988
	ctx.r4.s64 = ctx.r11.s64 + 988;
	// bl 0x82e02670
	ctx.lr = 0x8280B9E8;
	sub_82E02670(ctx, base);
	// lis r11,-32244
	ctx.r11.s64 = -2113142784;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r5,r11,-30044
	ctx.r5.s64 = ctx.r11.s64 + -30044;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r4,r1,1660
	ctx.r4.s64 = ctx.r1.s64 + 1660;
	// bl 0x82805c10
	ctx.lr = 0x8280BA00;
	sub_82805C10(ctx, base);
	// addi r3,r1,1660
	ctx.r3.s64 = ctx.r1.s64 + 1660;
	// bl 0x82e01bf0
	ctx.lr = 0x8280BA08;
	sub_82E01BF0(ctx, base);
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// addi r3,r1,1668
	ctx.r3.s64 = ctx.r1.s64 + 1668;
	// addi r4,r11,964
	ctx.r4.s64 = ctx.r11.s64 + 964;
	// bl 0x82e02670
	ctx.lr = 0x8280BA18;
	sub_82E02670(ctx, base);
	// lis r11,-32244
	ctx.r11.s64 = -2113142784;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r11,-30648
	ctx.r5.s64 = ctx.r11.s64 + -30648;
	// addi r4,r1,1668
	ctx.r4.s64 = ctx.r1.s64 + 1668;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82805c10
	ctx.lr = 0x8280BA30;
	sub_82805C10(ctx, base);
	// addi r3,r1,1668
	ctx.r3.s64 = ctx.r1.s64 + 1668;
	// bl 0x82e01bf0
	ctx.lr = 0x8280BA38;
	sub_82E01BF0(ctx, base);
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// addi r3,r1,1676
	ctx.r3.s64 = ctx.r1.s64 + 1676;
	// addi r4,r11,944
	ctx.r4.s64 = ctx.r11.s64 + 944;
	// bl 0x82e02670
	ctx.lr = 0x8280BA48;
	sub_82E02670(ctx, base);
	// lis r11,-31882
	ctx.r11.s64 = -2089418752;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r5,r11,15144
	ctx.r5.s64 = ctx.r11.s64 + 15144;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r4,r1,1676
	ctx.r4.s64 = ctx.r1.s64 + 1676;
	// bl 0x82805c10
	ctx.lr = 0x8280BA60;
	sub_82805C10(ctx, base);
	// addi r3,r1,1676
	ctx.r3.s64 = ctx.r1.s64 + 1676;
	// bl 0x82e01bf0
	ctx.lr = 0x8280BA68;
	sub_82E01BF0(ctx, base);
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// addi r3,r1,1684
	ctx.r3.s64 = ctx.r1.s64 + 1684;
	// addi r4,r11,932
	ctx.r4.s64 = ctx.r11.s64 + 932;
	// bl 0x82e02670
	ctx.lr = 0x8280BA78;
	sub_82E02670(ctx, base);
	// lis r11,-31882
	ctx.r11.s64 = -2089418752;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r5,r11,15556
	ctx.r5.s64 = ctx.r11.s64 + 15556;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r4,r1,1684
	ctx.r4.s64 = ctx.r1.s64 + 1684;
	// bl 0x82805c10
	ctx.lr = 0x8280BA90;
	sub_82805C10(ctx, base);
	// addi r3,r1,1684
	ctx.r3.s64 = ctx.r1.s64 + 1684;
	// bl 0x82e01bf0
	ctx.lr = 0x8280BA98;
	sub_82E01BF0(ctx, base);
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// addi r3,r1,1692
	ctx.r3.s64 = ctx.r1.s64 + 1692;
	// addi r4,r11,920
	ctx.r4.s64 = ctx.r11.s64 + 920;
	// bl 0x82e02670
	ctx.lr = 0x8280BAA8;
	sub_82E02670(ctx, base);
	// lis r11,-31882
	ctx.r11.s64 = -2089418752;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r5,r11,13856
	ctx.r5.s64 = ctx.r11.s64 + 13856;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r4,r1,1692
	ctx.r4.s64 = ctx.r1.s64 + 1692;
	// bl 0x82805c10
	ctx.lr = 0x8280BAC0;
	sub_82805C10(ctx, base);
	// addi r3,r1,1692
	ctx.r3.s64 = ctx.r1.s64 + 1692;
	// bl 0x82e01bf0
	ctx.lr = 0x8280BAC8;
	sub_82E01BF0(ctx, base);
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// addi r3,r1,1700
	ctx.r3.s64 = ctx.r1.s64 + 1700;
	// addi r4,r11,908
	ctx.r4.s64 = ctx.r11.s64 + 908;
	// bl 0x82e02670
	ctx.lr = 0x8280BAD8;
	sub_82E02670(ctx, base);
	// lis r11,-31882
	ctx.r11.s64 = -2089418752;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r5,r11,11724
	ctx.r5.s64 = ctx.r11.s64 + 11724;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r4,r1,1700
	ctx.r4.s64 = ctx.r1.s64 + 1700;
	// bl 0x82805c10
	ctx.lr = 0x8280BAF0;
	sub_82805C10(ctx, base);
	// addi r3,r1,1700
	ctx.r3.s64 = ctx.r1.s64 + 1700;
	// bl 0x82e01bf0
	ctx.lr = 0x8280BAF8;
	sub_82E01BF0(ctx, base);
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// addi r3,r1,1708
	ctx.r3.s64 = ctx.r1.s64 + 1708;
	// addi r4,r11,896
	ctx.r4.s64 = ctx.r11.s64 + 896;
	// bl 0x82e02670
	ctx.lr = 0x8280BB08;
	sub_82E02670(ctx, base);
	// lis r11,-31882
	ctx.r11.s64 = -2089418752;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r5,r11,11712
	ctx.r5.s64 = ctx.r11.s64 + 11712;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r4,r1,1708
	ctx.r4.s64 = ctx.r1.s64 + 1708;
	// bl 0x82805c10
	ctx.lr = 0x8280BB20;
	sub_82805C10(ctx, base);
	// addi r3,r1,1708
	ctx.r3.s64 = ctx.r1.s64 + 1708;
	// bl 0x82e01bf0
	ctx.lr = 0x8280BB28;
	sub_82E01BF0(ctx, base);
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// addi r3,r1,1716
	ctx.r3.s64 = ctx.r1.s64 + 1716;
	// addi r4,r11,876
	ctx.r4.s64 = ctx.r11.s64 + 876;
	// bl 0x82e02670
	ctx.lr = 0x8280BB38;
	sub_82E02670(ctx, base);
	// lis r11,-31882
	ctx.r11.s64 = -2089418752;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r5,r11,4828
	ctx.r5.s64 = ctx.r11.s64 + 4828;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r4,r1,1716
	ctx.r4.s64 = ctx.r1.s64 + 1716;
	// bl 0x82805c10
	ctx.lr = 0x8280BB50;
	sub_82805C10(ctx, base);
	// addi r3,r1,1716
	ctx.r3.s64 = ctx.r1.s64 + 1716;
	// bl 0x82e01bf0
	ctx.lr = 0x8280BB58;
	sub_82E01BF0(ctx, base);
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// addi r3,r1,1724
	ctx.r3.s64 = ctx.r1.s64 + 1724;
	// addi r4,r11,856
	ctx.r4.s64 = ctx.r11.s64 + 856;
	// bl 0x82e02670
	ctx.lr = 0x8280BB68;
	sub_82E02670(ctx, base);
	// lis r11,-31882
	ctx.r11.s64 = -2089418752;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r11,13364
	ctx.r5.s64 = ctx.r11.s64 + 13364;
	// addi r4,r1,1724
	ctx.r4.s64 = ctx.r1.s64 + 1724;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82805c10
	ctx.lr = 0x8280BB80;
	sub_82805C10(ctx, base);
	// addi r3,r1,1724
	ctx.r3.s64 = ctx.r1.s64 + 1724;
	// bl 0x82e01bf0
	ctx.lr = 0x8280BB88;
	sub_82E01BF0(ctx, base);
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// addi r3,r1,1732
	ctx.r3.s64 = ctx.r1.s64 + 1732;
	// addi r4,r11,832
	ctx.r4.s64 = ctx.r11.s64 + 832;
	// bl 0x82e02670
	ctx.lr = 0x8280BB98;
	sub_82E02670(ctx, base);
	// lis r11,-31882
	ctx.r11.s64 = -2089418752;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r5,r11,13376
	ctx.r5.s64 = ctx.r11.s64 + 13376;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r4,r1,1732
	ctx.r4.s64 = ctx.r1.s64 + 1732;
	// bl 0x82805c10
	ctx.lr = 0x8280BBB0;
	sub_82805C10(ctx, base);
	// addi r3,r1,1732
	ctx.r3.s64 = ctx.r1.s64 + 1732;
	// bl 0x82e01bf0
	ctx.lr = 0x8280BBB8;
	sub_82E01BF0(ctx, base);
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// addi r3,r1,1740
	ctx.r3.s64 = ctx.r1.s64 + 1740;
	// addi r4,r11,816
	ctx.r4.s64 = ctx.r11.s64 + 816;
	// bl 0x82e02670
	ctx.lr = 0x8280BBC8;
	sub_82E02670(ctx, base);
	// lis r11,-31882
	ctx.r11.s64 = -2089418752;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r5,r11,12764
	ctx.r5.s64 = ctx.r11.s64 + 12764;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r4,r1,1740
	ctx.r4.s64 = ctx.r1.s64 + 1740;
	// bl 0x82805c10
	ctx.lr = 0x8280BBE0;
	sub_82805C10(ctx, base);
	// addi r3,r1,1740
	ctx.r3.s64 = ctx.r1.s64 + 1740;
	// bl 0x82e01bf0
	ctx.lr = 0x8280BBE8;
	sub_82E01BF0(ctx, base);
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// addi r3,r1,1748
	ctx.r3.s64 = ctx.r1.s64 + 1748;
	// addi r4,r11,792
	ctx.r4.s64 = ctx.r11.s64 + 792;
	// bl 0x82e02670
	ctx.lr = 0x8280BBF8;
	sub_82E02670(ctx, base);
	// lis r11,-31882
	ctx.r11.s64 = -2089418752;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r5,r11,12776
	ctx.r5.s64 = ctx.r11.s64 + 12776;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r4,r1,1748
	ctx.r4.s64 = ctx.r1.s64 + 1748;
	// bl 0x82805c10
	ctx.lr = 0x8280BC10;
	sub_82805C10(ctx, base);
	// addi r3,r1,1748
	ctx.r3.s64 = ctx.r1.s64 + 1748;
	// bl 0x82e01bf0
	ctx.lr = 0x8280BC18;
	sub_82E01BF0(ctx, base);
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// addi r3,r1,1756
	ctx.r3.s64 = ctx.r1.s64 + 1756;
	// addi r4,r11,776
	ctx.r4.s64 = ctx.r11.s64 + 776;
	// bl 0x82e02670
	ctx.lr = 0x8280BC28;
	sub_82E02670(ctx, base);
	// lis r11,-32244
	ctx.r11.s64 = -2113142784;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r5,r11,-8168
	ctx.r5.s64 = ctx.r11.s64 + -8168;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r4,r1,1756
	ctx.r4.s64 = ctx.r1.s64 + 1756;
	// bl 0x82805c10
	ctx.lr = 0x8280BC40;
	sub_82805C10(ctx, base);
	// addi r3,r1,1756
	ctx.r3.s64 = ctx.r1.s64 + 1756;
	// bl 0x82e01bf0
	ctx.lr = 0x8280BC48;
	sub_82E01BF0(ctx, base);
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// addi r3,r1,1764
	ctx.r3.s64 = ctx.r1.s64 + 1764;
	// addi r4,r11,744
	ctx.r4.s64 = ctx.r11.s64 + 744;
	// bl 0x82e02670
	ctx.lr = 0x8280BC58;
	sub_82E02670(ctx, base);
	// lis r11,-32244
	ctx.r11.s64 = -2113142784;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r5,r11,-7644
	ctx.r5.s64 = ctx.r11.s64 + -7644;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r4,r1,1764
	ctx.r4.s64 = ctx.r1.s64 + 1764;
	// bl 0x82805c10
	ctx.lr = 0x8280BC70;
	sub_82805C10(ctx, base);
	// addi r3,r1,1764
	ctx.r3.s64 = ctx.r1.s64 + 1764;
	// bl 0x82e01bf0
	ctx.lr = 0x8280BC78;
	sub_82E01BF0(ctx, base);
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// addi r3,r1,1772
	ctx.r3.s64 = ctx.r1.s64 + 1772;
	// addi r4,r11,704
	ctx.r4.s64 = ctx.r11.s64 + 704;
	// bl 0x82e02670
	ctx.lr = 0x8280BC88;
	sub_82E02670(ctx, base);
	// lis r11,-32244
	ctx.r11.s64 = -2113142784;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r11,-7656
	ctx.r5.s64 = ctx.r11.s64 + -7656;
	// addi r4,r1,1772
	ctx.r4.s64 = ctx.r1.s64 + 1772;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82805c10
	ctx.lr = 0x8280BCA0;
	sub_82805C10(ctx, base);
	// addi r3,r1,1772
	ctx.r3.s64 = ctx.r1.s64 + 1772;
	// bl 0x82e01bf0
	ctx.lr = 0x8280BCA8;
	sub_82E01BF0(ctx, base);
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// addi r3,r1,1780
	ctx.r3.s64 = ctx.r1.s64 + 1780;
	// addi r4,r11,692
	ctx.r4.s64 = ctx.r11.s64 + 692;
	// bl 0x82e02670
	ctx.lr = 0x8280BCB8;
	sub_82E02670(ctx, base);
	// li r6,0
	ctx.r6.s64 = 0;
	// lis r11,-32244
	ctx.r11.s64 = -2113142784;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r5,r11,-5552
	ctx.r5.s64 = ctx.r11.s64 + -5552;
	// addi r4,r1,1780
	ctx.r4.s64 = ctx.r1.s64 + 1780;
	// bl 0x82805c10
	ctx.lr = 0x8280BCD0;
	sub_82805C10(ctx, base);
	// addi r3,r1,1780
	ctx.r3.s64 = ctx.r1.s64 + 1780;
	// bl 0x82e01bf0
	ctx.lr = 0x8280BCD8;
	sub_82E01BF0(ctx, base);
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// addi r3,r1,1788
	ctx.r3.s64 = ctx.r1.s64 + 1788;
	// addi r4,r11,676
	ctx.r4.s64 = ctx.r11.s64 + 676;
	// bl 0x82e02670
	ctx.lr = 0x8280BCE8;
	sub_82E02670(ctx, base);
	// lis r11,-32244
	ctx.r11.s64 = -2113142784;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r5,r11,11956
	ctx.r5.s64 = ctx.r11.s64 + 11956;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r4,r1,1788
	ctx.r4.s64 = ctx.r1.s64 + 1788;
	// bl 0x82805c10
	ctx.lr = 0x8280BD00;
	sub_82805C10(ctx, base);
	// addi r3,r1,1788
	ctx.r3.s64 = ctx.r1.s64 + 1788;
	// bl 0x82e01bf0
	ctx.lr = 0x8280BD08;
	sub_82E01BF0(ctx, base);
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// addi r3,r1,1796
	ctx.r3.s64 = ctx.r1.s64 + 1796;
	// addi r4,r11,656
	ctx.r4.s64 = ctx.r11.s64 + 656;
	// bl 0x82e02670
	ctx.lr = 0x8280BD18;
	sub_82E02670(ctx, base);
	// lis r11,-32244
	ctx.r11.s64 = -2113142784;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r11,30620
	ctx.r5.s64 = ctx.r11.s64 + 30620;
	// addi r4,r1,1796
	ctx.r4.s64 = ctx.r1.s64 + 1796;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82805c10
	ctx.lr = 0x8280BD30;
	sub_82805C10(ctx, base);
	// addi r3,r1,1796
	ctx.r3.s64 = ctx.r1.s64 + 1796;
	// bl 0x82e01bf0
	ctx.lr = 0x8280BD38;
	sub_82E01BF0(ctx, base);
	// addi r1,r1,1840
	ctx.r1.s64 = ctx.r1.s64 + 1840;
	// b 0x833a01f8
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8280BD40"))) PPC_WEAK_FUNC(sub_8280BD40);
PPC_FUNC_IMPL(__imp__sub_8280BD40) {
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
	// stb r4,32(r3)
	PPC_STORE_U8(ctx.r3.u32 + 32, ctx.r4.u8);
	// li r4,512
	ctx.r4.s64 = 512;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x828058c0
	ctx.lr = 0x8280BD60;
	sub_828058C0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82805c80
	ctx.lr = 0x8280BD68;
	sub_82805C80(ctx, base);
	// lis r11,-32128
	ctx.r11.s64 = -2105540608;
	// lwz r4,4(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// li r10,12
	ctx.r10.s64 = 12;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r6,r11,18400
	ctx.r6.s64 = ctx.r11.s64 + 18400;
	// subf r11,r3,r4
	ctx.r11.s64 = ctx.r4.s64 - ctx.r3.s64;
	// divw r5,r11,r10
	ctx.r5.s32 = ctx.r11.s32 / ctx.r10.s32;
	// bl 0x828055f0
	ctx.lr = 0x8280BD88;
	sub_828055F0(ctx, base);
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

__attribute__((alias("__imp__sub_8280BD9C"))) PPC_WEAK_FUNC(sub_8280BD9C);
PPC_FUNC_IMPL(__imp__sub_8280BD9C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8280BDA0"))) PPC_WEAK_FUNC(sub_8280BDA0);
PPC_FUNC_IMPL(__imp__sub_8280BDA0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r11,r11,-19292
	ctx.r11.s64 = ctx.r11.s64 + -19292;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8280BDB0"))) PPC_WEAK_FUNC(sub_8280BDB0);
PPC_FUNC_IMPL(__imp__sub_8280BDB0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// ld r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// std r11,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r11.u64);
	// bl 0x824ab520
	ctx.lr = 0x8280BDDC;
	sub_824AB520(ctx, base);
	// ld r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r3.u32 + 0);
	// li r10,1
	ctx.r10.s64 = 1;
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r9,84(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// slw r10,r10,r9
	ctx.r10.u64 = ctx.r9.u8 & 0x20 ? 0 : (ctx.r10.u32 << (ctx.r9.u8 & 0x3F));
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// and r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 & ctx.r11.u64;
	// addic r10,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// subfe r3,r10,r11
	temp.u8 = (~ctx.r10.u32 + ctx.r11.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r3.u64 = ~ctx.r10.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8280BE14"))) PPC_WEAK_FUNC(sub_8280BE14);
PPC_FUNC_IMPL(__imp__sub_8280BE14) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8280BE18"))) PPC_WEAK_FUNC(sub_8280BE18);
PPC_FUNC_IMPL(__imp__sub_8280BE18) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// cmplw cr6,r4,r11
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x8280be2c
	if (ctx.cr6.lt) goto loc_8280BE2C;
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_8280BE2C:
	// addi r3,r3,16
	ctx.r3.s64 = ctx.r3.s64 + 16;
	// b 0x8280bdb0
	sub_8280BDB0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8280BE34"))) PPC_WEAK_FUNC(sub_8280BE34);
PPC_FUNC_IMPL(__imp__sub_8280BE34) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8280BE38"))) PPC_WEAK_FUNC(sub_8280BE38);
PPC_FUNC_IMPL(__imp__sub_8280BE38) {
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
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// cmplw cr6,r4,r11
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r11.u32, ctx.xer);
	// bge cr6,0x8280be94
	if (!ctx.cr6.lt) goto loc_8280BE94;
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// addi r4,r3,16
	ctx.r4.s64 = ctx.r3.s64 + 16;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x824ab950
	ctx.lr = 0x8280BE68;
	sub_824AB950(ctx, base);
	// clrlwi. r11,r31,24
	ctx.r11.u64 = ctx.r31.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r10,1
	ctx.r10.s64 = 1;
	// lwz r9,4(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// slw r10,r10,r9
	ctx.r10.u64 = ctx.r9.u8 & 0x20 ? 0 : (ctx.r10.u32 << (ctx.r9.u8 & 0x3F));
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// beq 0x8280be8c
	if (ctx.cr0.eq) goto loc_8280BE8C;
	// or r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 | ctx.r9.u64;
	// b 0x8280be90
	goto loc_8280BE90;
loc_8280BE8C:
	// andc r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 & ~ctx.r10.u64;
loc_8280BE90:
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
loc_8280BE94:
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

__attribute__((alias("__imp__sub_8280BEA8"))) PPC_WEAK_FUNC(sub_8280BEA8);
PPC_FUNC_IMPL(__imp__sub_8280BEA8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x833a01ac
	ctx.lr = 0x8280BEB0;
	__savegprlr_29(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r10,4(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// li r31,0
	ctx.r31.s64 = 0;
	// lwz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// b 0x8280bef8
	goto loc_8280BEF8;
loc_8280BED0:
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// lwz r3,16(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// bl 0x82e023a8
	ctx.lr = 0x8280BEDC;
	sub_82E023A8(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8280bf0c
	if (!ctx.cr0.eq) goto loc_8280BF0C;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// bl 0x8282e648
	ctx.lr = 0x8280BEF0;
	sub_8282E648(ctx, base);
	// lwz r10,4(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
loc_8280BEF8:
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x8280bed0
	if (!ctx.cr6.eq) goto loc_8280BED0;
	// li r3,-1
	ctx.r3.s64 = -1;
loc_8280BF04:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x833a01fc
	__restgprlr_29(ctx, base);
	return;
loc_8280BF0C:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// b 0x8280bf04
	goto loc_8280BF04;
}

__attribute__((alias("__imp__sub_8280BF14"))) PPC_WEAK_FUNC(sub_8280BF14);
PPC_FUNC_IMPL(__imp__sub_8280BF14) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8280BF18"))) PPC_WEAK_FUNC(sub_8280BF18);
PPC_FUNC_IMPL(__imp__sub_8280BF18) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x833a01ac
	ctx.lr = 0x8280BF20;
	__savegprlr_29(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r10,4(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// li r31,0
	ctx.r31.s64 = 0;
	// lwz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// b 0x8280bf6c
	goto loc_8280BF6C;
loc_8280BF40:
	// lwz r11,16(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r3,r11,4
	ctx.r3.s64 = ctx.r11.s64 + 4;
	// bl 0x82e023a8
	ctx.lr = 0x8280BF50;
	sub_82E023A8(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8280bf80
	if (!ctx.cr0.eq) goto loc_8280BF80;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// bl 0x8282e648
	ctx.lr = 0x8280BF64;
	sub_8282E648(ctx, base);
	// lwz r10,4(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
loc_8280BF6C:
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x8280bf40
	if (!ctx.cr6.eq) goto loc_8280BF40;
	// li r3,-1
	ctx.r3.s64 = -1;
loc_8280BF78:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x833a01fc
	__restgprlr_29(ctx, base);
	return;
loc_8280BF80:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// b 0x8280bf78
	goto loc_8280BF78;
}

__attribute__((alias("__imp__sub_8280BF88"))) PPC_WEAK_FUNC(sub_8280BF88);
PPC_FUNC_IMPL(__imp__sub_8280BF88) {
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
	// stw r5,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, ctx.r5.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r5,r1,148
	ctx.r5.s64 = ctx.r1.s64 + 148;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// bl 0x82a0d398
	ctx.lr = 0x8280BFB4;
	sub_82A0D398(ctx, base);
	// lwz r10,4(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x8280c000
	if (ctx.cr6.eq) goto loc_8280C000;
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// lwz r11,20(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// beq cr6,0x8280c00c
	if (ctx.cr6.eq) goto loc_8280C00C;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
loc_8280BFE0:
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
	// bne 0x8280bfe0
	if (!ctx.cr0.eq) goto loc_8280BFE0;
	// b 0x8280c00c
	goto loc_8280C00C;
loc_8280C000:
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
loc_8280C00C:
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

__attribute__((alias("__imp__sub_8280C028"))) PPC_WEAK_FUNC(sub_8280C028);
PPC_FUNC_IMPL(__imp__sub_8280C028) {
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
	// stw r4,140(r1)
	PPC_STORE_U32(ctx.r1.u32 + 140, ctx.r4.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r5,r1,140
	ctx.r5.s64 = ctx.r1.s64 + 140;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82a0d398
	ctx.lr = 0x8280C050;
	sub_82A0D398(ctx, base);
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x8280c06c
	if (ctx.cr6.eq) goto loc_8280C06C;
	// lwz r11,16(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// lbz r3,20(r11)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r11.u32 + 20);
	// b 0x8280c070
	goto loc_8280C070;
loc_8280C06C:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8280C070:
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

__attribute__((alias("__imp__sub_8280C084"))) PPC_WEAK_FUNC(sub_8280C084);
PPC_FUNC_IMPL(__imp__sub_8280C084) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8280C088"))) PPC_WEAK_FUNC(sub_8280C088);
PPC_FUNC_IMPL(__imp__sub_8280C088) {
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
	// stw r4,140(r1)
	PPC_STORE_U32(ctx.r1.u32 + 140, ctx.r4.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r5,r1,140
	ctx.r5.s64 = ctx.r1.s64 + 140;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82a0d398
	ctx.lr = 0x8280C0B0;
	sub_82A0D398(ctx, base);
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x8280c0cc
	if (ctx.cr6.eq) goto loc_8280C0CC;
	// lwz r11,16(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// lbz r3,21(r11)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r11.u32 + 21);
	// b 0x8280c0d0
	goto loc_8280C0D0;
loc_8280C0CC:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8280C0D0:
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

__attribute__((alias("__imp__sub_8280C0E4"))) PPC_WEAK_FUNC(sub_8280C0E4);
PPC_FUNC_IMPL(__imp__sub_8280C0E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8280C0E8"))) PPC_WEAK_FUNC(sub_8280C0E8);
PPC_FUNC_IMPL(__imp__sub_8280C0E8) {
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
	// lwz r10,4(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// b 0x8280c128
	goto loc_8280C128;
loc_8280C10C:
	// lwz r11,16(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lbz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 20);
	// stb r10,21(r11)
	PPC_STORE_U8(ctx.r11.u32 + 21, ctx.r10.u8);
	// bl 0x8282e648
	ctx.lr = 0x8280C120;
	sub_8282E648(ctx, base);
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
loc_8280C128:
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x8280c10c
	if (!ctx.cr6.eq) goto loc_8280C10C;
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

__attribute__((alias("__imp__sub_8280C144"))) PPC_WEAK_FUNC(sub_8280C144);
PPC_FUNC_IMPL(__imp__sub_8280C144) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8280C148"))) PPC_WEAK_FUNC(sub_8280C148);
PPC_FUNC_IMPL(__imp__sub_8280C148) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x833a0198
	ctx.lr = 0x8280C150;
	__savegprlr_24(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lbz r11,21(r5)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r5.u32 + 21);
	// mr r24,r3
	ctx.r24.u64 = ctx.r3.u64;
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// stw r5,196(r1)
	PPC_STORE_U32(ctx.r1.u32 + 196, ctx.r5.u32);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x8280c178
	if (ctx.cr0.eq) goto loc_8280C178;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r3,r11,7812
	ctx.r3.s64 = ctx.r11.s64 + 7812;
	// bl 0x82dffbd8
	ctx.lr = 0x8280C178;
	sub_82DFFBD8(ctx, base);
loc_8280C178:
	// addi r3,r1,196
	ctx.r3.s64 = ctx.r1.s64 + 196;
	// mr r26,r5
	ctx.r26.u64 = ctx.r5.u64;
	// bl 0x82ee29b0
	ctx.lr = 0x8280C184;
	sub_82EE29B0(ctx, base);
	// lwz r11,0(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// lbz r10,21(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 21);
	// cmplwi r10,0
	ctx.cr0.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// lwz r25,196(r1)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r1.u32 + 196);
	// beq 0x8280c1a0
	if (ctx.cr0.eq) goto loc_8280C1A0;
	// lwz r28,8(r26)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r26.u32 + 8);
	// b 0x8280c1c4
	goto loc_8280C1C4;
loc_8280C1A0:
	// lwz r10,8(r26)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r26.u32 + 8);
	// lbz r10,21(r10)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r10.u32 + 21);
	// cmplwi r10,0
	ctx.cr0.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq 0x8280c1b8
	if (ctx.cr0.eq) goto loc_8280C1B8;
	// mr r28,r11
	ctx.r28.u64 = ctx.r11.u64;
	// b 0x8280c1c4
	goto loc_8280C1C4;
loc_8280C1B8:
	// lwz r28,8(r25)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r25.u32 + 8);
	// cmplw cr6,r25,r26
	ctx.cr6.compare<uint32_t>(ctx.r25.u32, ctx.r26.u32, ctx.xer);
	// bne cr6,0x8280c29c
	if (!ctx.cr6.eq) goto loc_8280C29C;
loc_8280C1C4:
	// lbz r11,21(r28)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r28.u32 + 21);
	// lwz r31,4(r26)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r26.u32 + 4);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x8280c1d8
	if (!ctx.cr0.eq) goto loc_8280C1D8;
	// stw r31,4(r28)
	PPC_STORE_U32(ctx.r28.u32 + 4, ctx.r31.u32);
loc_8280C1D8:
	// lwz r11,4(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 4);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmplw cr6,r10,r26
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r26.u32, ctx.xer);
	// bne cr6,0x8280c1f0
	if (!ctx.cr6.eq) goto loc_8280C1F0;
	// stw r28,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r28.u32);
	// b 0x8280c208
	goto loc_8280C208;
loc_8280C1F0:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplw cr6,r11,r26
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r26.u32, ctx.xer);
	// bne cr6,0x8280c204
	if (!ctx.cr6.eq) goto loc_8280C204;
	// stw r28,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r28.u32);
	// b 0x8280c208
	goto loc_8280C208;
loc_8280C204:
	// stw r28,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r28.u32);
loc_8280C208:
	// lwz r9,4(r27)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r27.u32 + 4);
	// lwz r11,0(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// cmplw cr6,r11,r26
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r26.u32, ctx.xer);
	// bne cr6,0x8280c250
	if (!ctx.cr6.eq) goto loc_8280C250;
	// lbz r11,21(r28)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r28.u32 + 21);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x8280c22c
	if (ctx.cr0.eq) goto loc_8280C22C;
	// mr r10,r31
	ctx.r10.u64 = ctx.r31.u64;
	// b 0x8280c24c
	goto loc_8280C24C;
loc_8280C22C:
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// mr r10,r28
	ctx.r10.u64 = ctx.r28.u64;
	// b 0x8280c240
	goto loc_8280C240;
loc_8280C238:
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
loc_8280C240:
	// lbz r8,21(r11)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + 21);
	// cmplwi r8,0
	ctx.cr0.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq 0x8280c238
	if (ctx.cr0.eq) goto loc_8280C238;
loc_8280C24C:
	// stw r10,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r10.u32);
loc_8280C250:
	// lwz r9,4(r27)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r27.u32 + 4);
	// lwz r11,8(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// cmplw cr6,r11,r26
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r26.u32, ctx.xer);
	// bne cr6,0x8280c330
	if (!ctx.cr6.eq) goto loc_8280C330;
	// lbz r11,21(r28)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r28.u32 + 21);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x8280c274
	if (ctx.cr0.eq) goto loc_8280C274;
	// mr r10,r31
	ctx.r10.u64 = ctx.r31.u64;
	// b 0x8280c294
	goto loc_8280C294;
loc_8280C274:
	// lwz r11,8(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 8);
	// mr r10,r28
	ctx.r10.u64 = ctx.r28.u64;
	// b 0x8280c288
	goto loc_8280C288;
loc_8280C280:
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
loc_8280C288:
	// lbz r8,21(r11)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + 21);
	// cmplwi r8,0
	ctx.cr0.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq 0x8280c280
	if (ctx.cr0.eq) goto loc_8280C280;
loc_8280C294:
	// stw r10,8(r9)
	PPC_STORE_U32(ctx.r9.u32 + 8, ctx.r10.u32);
	// b 0x8280c330
	goto loc_8280C330;
loc_8280C29C:
	// stw r25,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r25.u32);
	// lwz r11,0(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// stw r11,0(r25)
	PPC_STORE_U32(ctx.r25.u32 + 0, ctx.r11.u32);
	// lwz r11,8(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 8);
	// cmplw cr6,r25,r11
	ctx.cr6.compare<uint32_t>(ctx.r25.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x8280c2bc
	if (!ctx.cr6.eq) goto loc_8280C2BC;
	// mr r31,r25
	ctx.r31.u64 = ctx.r25.u64;
	// b 0x8280c2e4
	goto loc_8280C2E4;
loc_8280C2BC:
	// lbz r11,21(r28)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r28.u32 + 21);
	// lwz r31,4(r25)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r25.u32 + 4);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x8280c2d0
	if (!ctx.cr0.eq) goto loc_8280C2D0;
	// stw r31,4(r28)
	PPC_STORE_U32(ctx.r28.u32 + 4, ctx.r31.u32);
loc_8280C2D0:
	// stw r28,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r28.u32);
	// lwz r11,8(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 8);
	// stw r11,8(r25)
	PPC_STORE_U32(ctx.r25.u32 + 8, ctx.r11.u32);
	// lwz r11,8(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 8);
	// stw r25,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r25.u32);
loc_8280C2E4:
	// lwz r11,4(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 4);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmplw cr6,r10,r26
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r26.u32, ctx.xer);
	// bne cr6,0x8280c2fc
	if (!ctx.cr6.eq) goto loc_8280C2FC;
	// stw r25,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r25.u32);
	// b 0x8280c318
	goto loc_8280C318;
loc_8280C2FC:
	// lwz r11,4(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 4);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r10,r26
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r26.u32, ctx.xer);
	// bne cr6,0x8280c314
	if (!ctx.cr6.eq) goto loc_8280C314;
	// stw r25,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r25.u32);
	// b 0x8280c318
	goto loc_8280C318;
loc_8280C314:
	// stw r25,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r25.u32);
loc_8280C318:
	// lwz r11,4(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 4);
	// stw r11,4(r25)
	PPC_STORE_U32(ctx.r25.u32 + 4, ctx.r11.u32);
	// lbz r11,20(r25)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r25.u32 + 20);
	// lbz r10,20(r26)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r26.u32 + 20);
	// stb r10,20(r25)
	PPC_STORE_U8(ctx.r25.u32 + 20, ctx.r10.u8);
	// stb r11,20(r26)
	PPC_STORE_U8(ctx.r26.u32 + 20, ctx.r11.u8);
loc_8280C330:
	// lbz r11,20(r26)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r26.u32 + 20);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// bne cr6,0x8280c4c8
	if (!ctx.cr6.eq) goto loc_8280C4C8;
	// lwz r11,4(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 4);
	// li r30,1
	ctx.r30.s64 = 1;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmplw cr6,r28,r11
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x8280c4c4
	if (ctx.cr6.eq) goto loc_8280C4C4;
	// li r29,0
	ctx.r29.s64 = 0;
loc_8280C354:
	// lbz r11,20(r28)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r28.u32 + 20);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// bne cr6,0x8280c4c4
	if (!ctx.cr6.eq) goto loc_8280C4C4;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplw cr6,r28,r11
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x8280c40c
	if (!ctx.cr6.eq) goto loc_8280C40C;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lbz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 20);
	// cmplwi r10,0
	ctx.cr0.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne 0x8280c394
	if (!ctx.cr0.eq) goto loc_8280C394;
	// stb r30,20(r11)
	PPC_STORE_U8(ctx.r11.u32 + 20, ctx.r30.u8);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// stb r29,20(r31)
	PPC_STORE_U8(ctx.r31.u32 + 20, ctx.r29.u8);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82a34ff0
	ctx.lr = 0x8280C390;
	sub_82A34FF0(ctx, base);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
loc_8280C394:
	// lbz r10,21(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 21);
	// cmplwi r10,0
	ctx.cr0.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne 0x8280c460
	if (!ctx.cr0.eq) goto loc_8280C460;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lbz r9,20(r10)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + 20);
	// cmplwi cr6,r9,1
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 1, ctx.xer);
	// bne cr6,0x8280c3c0
	if (!ctx.cr6.eq) goto loc_8280C3C0;
	// lwz r9,8(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lbz r9,20(r9)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r9.u32 + 20);
	// cmplwi cr6,r9,1
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 1, ctx.xer);
	// beq cr6,0x8280c45c
	if (ctx.cr6.eq) goto loc_8280C45C;
loc_8280C3C0:
	// lwz r9,8(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lbz r9,20(r9)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r9.u32 + 20);
	// cmplwi cr6,r9,1
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 1, ctx.xer);
	// bne cr6,0x8280c3e8
	if (!ctx.cr6.eq) goto loc_8280C3E8;
	// stb r30,20(r10)
	PPC_STORE_U8(ctx.r10.u32 + 20, ctx.r30.u8);
	// mr r4,r11
	ctx.r4.u64 = ctx.r11.u64;
	// stb r29,20(r11)
	PPC_STORE_U8(ctx.r11.u32 + 20, ctx.r29.u8);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82a35058
	ctx.lr = 0x8280C3E4;
	sub_82A35058(ctx, base);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
loc_8280C3E8:
	// lbz r10,20(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 20);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// stb r10,20(r11)
	PPC_STORE_U8(ctx.r11.u32 + 20, ctx.r10.u8);
	// stb r30,20(r31)
	PPC_STORE_U8(ctx.r31.u32 + 20, ctx.r30.u8);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// stb r30,20(r11)
	PPC_STORE_U8(ctx.r11.u32 + 20, ctx.r30.u8);
	// bl 0x82a34ff0
	ctx.lr = 0x8280C408;
	sub_82A34FF0(ctx, base);
	// b 0x8280c4c4
	goto loc_8280C4C4;
loc_8280C40C:
	// lbz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 20);
	// cmplwi r10,0
	ctx.cr0.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne 0x8280c430
	if (!ctx.cr0.eq) goto loc_8280C430;
	// stb r30,20(r11)
	PPC_STORE_U8(ctx.r11.u32 + 20, ctx.r30.u8);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// stb r29,20(r31)
	PPC_STORE_U8(ctx.r31.u32 + 20, ctx.r29.u8);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82a35058
	ctx.lr = 0x8280C42C;
	sub_82A35058(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
loc_8280C430:
	// lbz r10,21(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 21);
	// cmplwi r10,0
	ctx.cr0.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne 0x8280c460
	if (!ctx.cr0.eq) goto loc_8280C460;
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lbz r9,20(r10)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + 20);
	// cmplwi cr6,r9,1
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 1, ctx.xer);
	// bne cr6,0x8280c47c
	if (!ctx.cr6.eq) goto loc_8280C47C;
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lbz r9,20(r9)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r9.u32 + 20);
	// cmplwi cr6,r9,1
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 1, ctx.xer);
	// bne cr6,0x8280c47c
	if (!ctx.cr6.eq) goto loc_8280C47C;
loc_8280C45C:
	// stb r29,20(r11)
	PPC_STORE_U8(ctx.r11.u32 + 20, ctx.r29.u8);
loc_8280C460:
	// lwz r11,4(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 4);
	// mr r28,r31
	ctx.r28.u64 = ctx.r31.u64;
	// lwz r31,4(r31)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmplw cr6,r28,r11
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x8280c354
	if (!ctx.cr6.eq) goto loc_8280C354;
	// b 0x8280c4c4
	goto loc_8280C4C4;
loc_8280C47C:
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lbz r9,20(r9)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r9.u32 + 20);
	// cmplwi cr6,r9,1
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 1, ctx.xer);
	// bne cr6,0x8280c4a4
	if (!ctx.cr6.eq) goto loc_8280C4A4;
	// stb r30,20(r10)
	PPC_STORE_U8(ctx.r10.u32 + 20, ctx.r30.u8);
	// mr r4,r11
	ctx.r4.u64 = ctx.r11.u64;
	// stb r29,20(r11)
	PPC_STORE_U8(ctx.r11.u32 + 20, ctx.r29.u8);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82a34ff0
	ctx.lr = 0x8280C4A0;
	sub_82A34FF0(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
loc_8280C4A4:
	// lbz r10,20(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 20);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// stb r10,20(r11)
	PPC_STORE_U8(ctx.r11.u32 + 20, ctx.r10.u8);
	// stb r30,20(r31)
	PPC_STORE_U8(ctx.r31.u32 + 20, ctx.r30.u8);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stb r30,20(r11)
	PPC_STORE_U8(ctx.r11.u32 + 20, ctx.r30.u8);
	// bl 0x82a35058
	ctx.lr = 0x8280C4C4;
	sub_82A35058(ctx, base);
loc_8280C4C4:
	// stb r30,20(r28)
	PPC_STORE_U8(ctx.r28.u32 + 20, ctx.r30.u8);
loc_8280C4C8:
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r26,12
	ctx.r3.s64 = ctx.r26.s64 + 12;
	// bl 0x82577a50
	ctx.lr = 0x8280C4D4;
	sub_82577A50(ctx, base);
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x82e01568
	ctx.lr = 0x8280C4DC;
	sub_82E01568(ctx, base);
	// lwz r11,8(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 8);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8280c4f0
	if (ctx.cr6.eq) goto loc_8280C4F0;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stw r11,8(r27)
	PPC_STORE_U32(ctx.r27.u32 + 8, ctx.r11.u32);
loc_8280C4F0:
	// stw r25,0(r24)
	PPC_STORE_U32(ctx.r24.u32 + 0, ctx.r25.u32);
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x833a01e8
	__restgprlr_24(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8280C500"))) PPC_WEAK_FUNC(sub_8280C500);
PPC_FUNC_IMPL(__imp__sub_8280C500) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x833a01ac
	ctx.lr = 0x8280C508;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lbz r11,21(r4)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r4.u32 + 21);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// b 0x8280c54c
	goto loc_8280C54C;
loc_8280C520:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r4,8(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// bl 0x8280c500
	ctx.lr = 0x8280C52C;
	sub_8280C500(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r30,12
	ctx.r3.s64 = ctx.r30.s64 + 12;
	// lwz r31,0(r31)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x82577a50
	ctx.lr = 0x8280C53C;
	sub_82577A50(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82e01568
	ctx.lr = 0x8280C544;
	sub_82E01568(ctx, base);
	// lbz r11,21(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 21);
	// mr r30,r31
	ctx.r30.u64 = ctx.r31.u64;
loc_8280C54C:
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x8280c520
	if (ctx.cr0.eq) goto loc_8280C520;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x833a01fc
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8280C55C"))) PPC_WEAK_FUNC(sub_8280C55C);
PPC_FUNC_IMPL(__imp__sub_8280C55C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8280C560"))) PPC_WEAK_FUNC(sub_8280C560);
PPC_FUNC_IMPL(__imp__sub_8280C560) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x833a01ac
	ctx.lr = 0x8280C568;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lbz r11,25(r4)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r4.u32 + 25);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// b 0x8280c5ac
	goto loc_8280C5AC;
loc_8280C580:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r4,8(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// bl 0x8280c560
	ctx.lr = 0x8280C58C;
	sub_8280C560(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r30,12
	ctx.r3.s64 = ctx.r30.s64 + 12;
	// lwz r31,0(r31)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x82a15b60
	ctx.lr = 0x8280C59C;
	sub_82A15B60(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82e01568
	ctx.lr = 0x8280C5A4;
	sub_82E01568(ctx, base);
	// lbz r11,25(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 25);
	// mr r30,r31
	ctx.r30.u64 = ctx.r31.u64;
loc_8280C5AC:
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x8280c580
	if (ctx.cr0.eq) goto loc_8280C580;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x833a01fc
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8280C5BC"))) PPC_WEAK_FUNC(sub_8280C5BC);
PPC_FUNC_IMPL(__imp__sub_8280C5BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8280C5C0"))) PPC_WEAK_FUNC(sub_8280C5C0);
PPC_FUNC_IMPL(__imp__sub_8280C5C0) {
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
	// lwz r4,4(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// bl 0x8280c500
	ctx.lr = 0x8280C5E0;
	sub_8280C500(ctx, base);
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r10,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r10.u32);
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// stw r10,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r10.u32);
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// stw r10,8(r10)
	PPC_STORE_U32(ctx.r10.u32 + 8, ctx.r10.u32);
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
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

__attribute__((alias("__imp__sub_8280C614"))) PPC_WEAK_FUNC(sub_8280C614);
PPC_FUNC_IMPL(__imp__sub_8280C614) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8280C618"))) PPC_WEAK_FUNC(sub_8280C618);
PPC_FUNC_IMPL(__imp__sub_8280C618) {
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
	// lwz r4,4(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// bl 0x8280c560
	ctx.lr = 0x8280C638;
	sub_8280C560(ctx, base);
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r10,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r10.u32);
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// stw r10,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r10.u32);
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// stw r10,8(r10)
	PPC_STORE_U32(ctx.r10.u32 + 8, ctx.r10.u32);
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
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

__attribute__((alias("__imp__sub_8280C66C"))) PPC_WEAK_FUNC(sub_8280C66C);
PPC_FUNC_IMPL(__imp__sub_8280C66C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8280C670"))) PPC_WEAK_FUNC(sub_8280C670);
PPC_FUNC_IMPL(__imp__sub_8280C670) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x833a01a8
	ctx.lr = 0x8280C678;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,4(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// stw r5,164(r1)
	PPC_STORE_U32(ctx.r1.u32 + 164, ctx.r5.u32);
	// mr r30,r6
	ctx.r30.u64 = ctx.r6.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r5,r10
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x8280c6dc
	if (!ctx.cr6.eq) goto loc_8280C6DC;
	// cmplw cr6,r6,r11
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x8280c6dc
	if (!ctx.cr6.eq) goto loc_8280C6DC;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// bl 0x8280c5c0
	ctx.lr = 0x8280C6AC;
	sub_8280C5C0(ctx, base);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stw r11,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r11.u32);
	// b 0x8280c6e8
	goto loc_8280C6E8;
loc_8280C6BC:
	// addi r3,r1,164
	ctx.r3.s64 = ctx.r1.s64 + 164;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// bl 0x82ee29b0
	ctx.lr = 0x8280C6C8;
	sub_82EE29B0(ctx, base);
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8280c148
	ctx.lr = 0x8280C6D8;
	sub_8280C148(ctx, base);
	// lwz r5,164(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 164);
loc_8280C6DC:
	// cmplw cr6,r5,r30
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, ctx.r30.u32, ctx.xer);
	// bne cr6,0x8280c6bc
	if (!ctx.cr6.eq) goto loc_8280C6BC;
	// stw r5,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r5.u32);
loc_8280C6E8:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x833a01f8
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8280C6F4"))) PPC_WEAK_FUNC(sub_8280C6F4);
PPC_FUNC_IMPL(__imp__sub_8280C6F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8280C6F8"))) PPC_WEAK_FUNC(sub_8280C6F8);
PPC_FUNC_IMPL(__imp__sub_8280C6F8) {
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
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r3,36(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 36);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8280c758
	if (ctx.cr6.eq) goto loc_8280C758;
	// bl 0x82816600
	ctx.lr = 0x8280C71C;
	sub_82816600(ctx, base);
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// b 0x8280c750
	goto loc_8280C750;
loc_8280C72C:
	// lwz r4,16(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// li r6,1
	ctx.r6.s64 = 1;
	// lwz r3,36(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// addi r5,r4,21
	ctx.r5.s64 = ctx.r4.s64 + 21;
	// bl 0x825a7d10
	ctx.lr = 0x8280C740;
	sub_825A7D10(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8282e648
	ctx.lr = 0x8280C748;
	sub_8282E648(ctx, base);
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
loc_8280C750:
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x8280c72c
	if (!ctx.cr6.eq) goto loc_8280C72C;
loc_8280C758:
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

__attribute__((alias("__imp__sub_8280C76C"))) PPC_WEAK_FUNC(sub_8280C76C);
PPC_FUNC_IMPL(__imp__sub_8280C76C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8280C770"))) PPC_WEAK_FUNC(sub_8280C770);
PPC_FUNC_IMPL(__imp__sub_8280C770) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x833a01ac
	ctx.lr = 0x8280C778;
	__savegprlr_29(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// std r5,160(r1)
	PPC_STORE_U64(ctx.r1.u32 + 160, ctx.r5.u64);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r29,0(r30)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// bl 0x824ac9d0
	ctx.lr = 0x8280C79C;
	sub_824AC9D0(ctx, base);
	// lwz r10,160(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 160);
	// li r11,0
	ctx.r11.s64 = 0;
	// subf r10,r29,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r29.s64;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// srawi r10,r10,2
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x3) != 0);
	ctx.r10.s64 = ctx.r10.s32 >> 2;
	// lwz r11,164(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 164);
	// rlwinm r10,r10,5,0,26
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 5) & 0xFFFFFFE0;
	// add r4,r10,r11
	ctx.r4.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// ld r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// bl 0x824ab520
	ctx.lr = 0x8280C7D4;
	sub_824AB520(ctx, base);
	// ld r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// std r11,0(r31)
	PPC_STORE_U64(ctx.r31.u32 + 0, ctx.r11.u64);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x833a01fc
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8280C7E8"))) PPC_WEAK_FUNC(sub_8280C7E8);
PPC_FUNC_IMPL(__imp__sub_8280C7E8) {
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
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// lwz r4,16(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// li r10,0
	ctx.r10.s64 = 0;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// beq cr6,0x8280c828
	if (ctx.cr6.eq) goto loc_8280C828;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x824ab520
	ctx.lr = 0x8280C828;
	sub_824AB520(ctx, base);
loc_8280C828:
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// ld r5,80(r1)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8280c770
	ctx.lr = 0x8280C83C;
	sub_8280C770(ctx, base);
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

__attribute__((alias("__imp__sub_8280C854"))) PPC_WEAK_FUNC(sub_8280C854);
PPC_FUNC_IMPL(__imp__sub_8280C854) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8280C858"))) PPC_WEAK_FUNC(sub_8280C858);
PPC_FUNC_IMPL(__imp__sub_8280C858) {
	PPC_FUNC_PROLOGUE();
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
	// stw r4,156(r1)
	PPC_STORE_U32(ctx.r1.u32 + 156, ctx.r4.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r4,r1,156
	ctx.r4.s64 = ctx.r1.s64 + 156;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x8284a980
	ctx.lr = 0x8280C87C;
	sub_8284A980(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8257a0c8
	ctx.lr = 0x8280C88C;
	sub_8257A0C8(ctx, base);
	// lwz r3,96(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8280c89c
	if (ctx.cr6.eq) goto loc_8280C89C;
	// bl 0x82480108
	ctx.lr = 0x8280C89C;
	sub_82480108(ctx, base);
loc_8280C89C:
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r31,16
	ctx.r3.s64 = ctx.r31.s64 + 16;
	// bl 0x8280c7e8
	ctx.lr = 0x8280C8A8;
	sub_8280C7E8(ctx, base);
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

__attribute__((alias("__imp__sub_8280C8BC"))) PPC_WEAK_FUNC(sub_8280C8BC);
PPC_FUNC_IMPL(__imp__sub_8280C8BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8280C8C0"))) PPC_WEAK_FUNC(sub_8280C8C0);
PPC_FUNC_IMPL(__imp__sub_8280C8C0) {
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
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x82824f48
	ctx.lr = 0x8280C8E0;
	sub_82824F48(ctx, base);
	// addi r3,r31,16
	ctx.r3.s64 = ctx.r31.s64 + 16;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x825ed118
	ctx.lr = 0x8280C8F4;
	sub_825ED118(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r11.u32);
	// stw r11,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r11.u32);
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

__attribute__((alias("__imp__sub_8280C918"))) PPC_WEAK_FUNC(sub_8280C918);
PPC_FUNC_IMPL(__imp__sub_8280C918) {
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
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x82e016a0
	ctx.lr = 0x8280C930;
	sub_82E016A0(ctx, base);
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// addi r3,r31,12
	ctx.r3.s64 = ctx.r31.s64 + 12;
	// addi r11,r11,10640
	ctx.r11.s64 = ctx.r11.s64 + 10640;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x82898f80
	ctx.lr = 0x8280C94C;
	sub_82898F80(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
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

__attribute__((alias("__imp__sub_8280C964"))) PPC_WEAK_FUNC(sub_8280C964);
PPC_FUNC_IMPL(__imp__sub_8280C964) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8280C968"))) PPC_WEAK_FUNC(sub_8280C968);
PPC_FUNC_IMPL(__imp__sub_8280C968) {
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
	// lwz r6,16(r3)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r4,r3,12
	ctx.r4.s64 = ctx.r3.s64 + 12;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r5,0(r6)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	// bl 0x8280c670
	ctx.lr = 0x8280C990;
	sub_8280C670(ctx, base);
	// lwz r3,16(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// bl 0x82e01568
	ctx.lr = 0x8280C998;
	sub_82E01568(ctx, base);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// addi r11,r11,-28248
	ctx.r11.s64 = ctx.r11.s64 + -28248;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
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

__attribute__((alias("__imp__sub_8280C9B8"))) PPC_WEAK_FUNC(sub_8280C9B8);
PPC_FUNC_IMPL(__imp__sub_8280C9B8) {
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
	// bl 0x8280c968
	ctx.lr = 0x8280C9D8;
	sub_8280C968(ctx, base);
	// clrlwi. r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8280c9e8
	if (ctx.cr0.eq) goto loc_8280C9E8;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82e01568
	ctx.lr = 0x8280C9E8;
	sub_82E01568(ctx, base);
loc_8280C9E8:
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

__attribute__((alias("__imp__sub_8280CA04"))) PPC_WEAK_FUNC(sub_8280CA04);
PPC_FUNC_IMPL(__imp__sub_8280CA04) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8280CA08"))) PPC_WEAK_FUNC(sub_8280CA08);
PPC_FUNC_IMPL(__imp__sub_8280CA08) {
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
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// li r10,120
	ctx.r10.s64 = 120;
	// addi r11,r11,10648
	ctx.r11.s64 = ctx.r11.s64 + 10648;
	// stw r10,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r10.u32);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// stw r11,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r11.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82e01860
	ctx.lr = 0x8280CA40;
	sub_82E01860(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// li r3,28
	ctx.r3.s64 = 28;
	// lwz r5,0(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// bl 0x82e015d8
	ctx.lr = 0x8280CA54;
	sub_82E015D8(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8280ca68
	if (ctx.cr0.eq) goto loc_8280CA68;
	// bl 0x8280c918
	ctx.lr = 0x8280CA60;
	sub_8280C918(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// b 0x8280ca6c
	goto loc_8280CA6C;
loc_8280CA68:
	// li r4,0
	ctx.r4.s64 = 0;
loc_8280CA6C:
	// addi r31,r30,36
	ctx.r31.s64 = ctx.r30.s64 + 36;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82802028
	ctx.lr = 0x8280CA78;
	sub_82802028(ctx, base);
	// lwz r3,36(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 36);
	// bl 0x82e8f548
	ctx.lr = 0x8280CA80;
	sub_82E8F548(ctx, base);
	// lwz r10,4(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// lwz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// b 0x8280cab4
	goto loc_8280CAB4;
loc_8280CA90:
	// lwz r4,16(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// li r6,1
	ctx.r6.s64 = 1;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r5,r4,21
	ctx.r5.s64 = ctx.r4.s64 + 21;
	// bl 0x825a7d10
	ctx.lr = 0x8280CAA4;
	sub_825A7D10(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8282e648
	ctx.lr = 0x8280CAAC;
	sub_8282E648(ctx, base);
	// lwz r10,4(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
loc_8280CAB4:
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x8280ca90
	if (!ctx.cr6.eq) goto loc_8280CA90;
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

__attribute__((alias("__imp__sub_8280CAD4"))) PPC_WEAK_FUNC(sub_8280CAD4);
PPC_FUNC_IMPL(__imp__sub_8280CAD4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8280CAD8"))) PPC_WEAK_FUNC(sub_8280CAD8);
PPC_FUNC_IMPL(__imp__sub_8280CAD8) {
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
	// bl 0x82e8f7d8
	ctx.lr = 0x8280CAF8;
	sub_82E8F7D8(ctx, base);
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// stw r30,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r30.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r11,r11,10776
	ctx.r11.s64 = ctx.r11.s64 + 10776;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
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

__attribute__((alias("__imp__sub_8280CB24"))) PPC_WEAK_FUNC(sub_8280CB24);
PPC_FUNC_IMPL(__imp__sub_8280CB24) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8280CB28"))) PPC_WEAK_FUNC(sub_8280CB28);
PPC_FUNC_IMPL(__imp__sub_8280CB28) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31888
	ctx.r11.s64 = -2089811968;
	// lwz r11,-9192(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -9192);
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r3,r11,27,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8280CB40"))) PPC_WEAK_FUNC(sub_8280CB40);
PPC_FUNC_IMPL(__imp__sub_8280CB40) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31888
	ctx.r11.s64 = -2089811968;
	// lwz r3,-9192(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -9192);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8280CB4C"))) PPC_WEAK_FUNC(sub_8280CB4C);
PPC_FUNC_IMPL(__imp__sub_8280CB4C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8280CB50"))) PPC_WEAK_FUNC(sub_8280CB50);
PPC_FUNC_IMPL(__imp__sub_8280CB50) {
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
	// bl 0x82e8f7d8
	ctx.lr = 0x8280CB70;
	sub_82E8F7D8(ctx, base);
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// stw r30,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r30.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r11,r11,10792
	ctx.r11.s64 = ctx.r11.s64 + 10792;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
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

__attribute__((alias("__imp__sub_8280CB9C"))) PPC_WEAK_FUNC(sub_8280CB9C);
PPC_FUNC_IMPL(__imp__sub_8280CB9C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8280CBA0"))) PPC_WEAK_FUNC(sub_8280CBA0);
PPC_FUNC_IMPL(__imp__sub_8280CBA0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31888
	ctx.r11.s64 = -2089811968;
	// lwz r11,-9188(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -9188);
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r3,r11,27,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8280CBB8"))) PPC_WEAK_FUNC(sub_8280CBB8);
PPC_FUNC_IMPL(__imp__sub_8280CBB8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31888
	ctx.r11.s64 = -2089811968;
	// lwz r3,-9188(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -9188);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8280CBC4"))) PPC_WEAK_FUNC(sub_8280CBC4);
PPC_FUNC_IMPL(__imp__sub_8280CBC4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8280CBC8"))) PPC_WEAK_FUNC(sub_8280CBC8);
PPC_FUNC_IMPL(__imp__sub_8280CBC8) {
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
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// lis r10,-32250
	ctx.r10.s64 = -2113536000;
	// addi r11,r11,10828
	ctx.r11.s64 = ctx.r11.s64 + 10828;
	// addi r10,r10,10808
	ctx.r10.s64 = ctx.r10.s64 + 10808;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// addi r3,r3,172
	ctx.r3.s64 = ctx.r3.s64 + 172;
	// stw r10,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r10.u32);
	// bl 0x82a304c0
	ctx.lr = 0x8280CBFC;
	sub_82A304C0(ctx, base);
	// lwz r3,172(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 172);
	// bl 0x82e01568
	ctx.lr = 0x8280CC04;
	sub_82E01568(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82a26938
	ctx.lr = 0x8280CC0C;
	sub_82A26938(ctx, base);
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

__attribute__((alias("__imp__sub_8280CC20"))) PPC_WEAK_FUNC(sub_8280CC20);
PPC_FUNC_IMPL(__imp__sub_8280CC20) {
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
	// lwz r11,172(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 172);
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// addi r31,r3,172
	ctx.r31.s64 = ctx.r3.s64 + 172;
	// lwz r5,0(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// b 0x8280cc78
	goto loc_8280CC78;
loc_8280CC48:
	// lwz r11,8(r5)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 8);
	// cmplw cr6,r11,r30
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r30.u32, ctx.xer);
	// bne cr6,0x8280cc64
	if (!ctx.cr6.eq) goto loc_8280CC64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x824bff70
	ctx.lr = 0x8280CC60;
	sub_824BFF70(ctx, base);
	// b 0x8280cc70
	goto loc_8280CC70;
loc_8280CC64:
	// lwz r11,0(r5)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
loc_8280CC70:
	// lwz r5,0(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
loc_8280CC78:
	// stw r5,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r5.u32);
	// cmplw cr6,r5,r11
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x8280cc48
	if (!ctx.cr6.eq) goto loc_8280CC48;
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

__attribute__((alias("__imp__sub_8280CC9C"))) PPC_WEAK_FUNC(sub_8280CC9C);
PPC_FUNC_IMPL(__imp__sub_8280CC9C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8280CCA0"))) PPC_WEAK_FUNC(sub_8280CCA0);
PPC_FUNC_IMPL(__imp__sub_8280CCA0) {
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
	// lwz r10,16(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 16);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addi r3,r3,172
	ctx.r3.s64 = ctx.r3.s64 + 172;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// lwz r4,172(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 172);
	// bl 0x82836958
	ctx.lr = 0x8280CCC8;
	sub_82836958(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8280CCD8"))) PPC_WEAK_FUNC(sub_8280CCD8);
PPC_FUNC_IMPL(__imp__sub_8280CCD8) {
	PPC_FUNC_PROLOGUE();
	// lwz r4,16(r4)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r4.u32 + 16);
	// b 0x8280cc20
	sub_8280CC20(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8280CCE0"))) PPC_WEAK_FUNC(sub_8280CCE0);
PPC_FUNC_IMPL(__imp__sub_8280CCE0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x833a01a8
	ctx.lr = 0x8280CCE8;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// clrlwi. r30,r5,24
	ctx.r30.u64 = ctx.r5.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// bne 0x8280cd38
	if (!ctx.cr0.eq) goto loc_8280CD38;
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// lis r10,-31888
	ctx.r10.s64 = -2089811968;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r4,-9192(r10)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + -9192);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8280CD1C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8280cd38
	if (ctx.cr0.eq) goto loc_8280CD38;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r29,-40
	ctx.r3.s64 = ctx.r29.s64 + -40;
	// bl 0x8280cca0
	ctx.lr = 0x8280CD30;
	sub_8280CCA0(ctx, base);
loc_8280CD30:
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x8280cd84
	goto loc_8280CD84;
loc_8280CD38:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// bne cr6,0x8280cd74
	if (!ctx.cr6.eq) goto loc_8280CD74;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lis r10,-31888
	ctx.r10.s64 = -2089811968;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r4,-9188(r10)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + -9188);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8280CD5C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8280cd74
	if (ctx.cr0.eq) goto loc_8280CD74;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r29,-40
	ctx.r3.s64 = ctx.r29.s64 + -40;
	// bl 0x8280ccd8
	ctx.lr = 0x8280CD70;
	sub_8280CCD8(ctx, base);
	// b 0x8280cd30
	goto loc_8280CD30;
loc_8280CD74:
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82a269a8
	ctx.lr = 0x8280CD84;
	sub_82A269A8(ctx, base);
loc_8280CD84:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x833a01f8
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8280CD8C"))) PPC_WEAK_FUNC(sub_8280CD8C);
PPC_FUNC_IMPL(__imp__sub_8280CD8C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8280CD90"))) PPC_WEAK_FUNC(sub_8280CD90);
PPC_FUNC_IMPL(__imp__sub_8280CD90) {
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
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x82a267f8
	ctx.lr = 0x8280CDA8;
	sub_82A267F8(ctx, base);
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// lis r10,-32250
	ctx.r10.s64 = -2113536000;
	// addi r11,r11,10828
	ctx.r11.s64 = ctx.r11.s64 + 10828;
	// addi r10,r10,10808
	ctx.r10.s64 = ctx.r10.s64 + 10808;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// addi r3,r31,172
	ctx.r3.s64 = ctx.r31.s64 + 172;
	// stw r10,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r10.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x82480e60
	ctx.lr = 0x8280CDCC;
	sub_82480E60(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
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

__attribute__((alias("__imp__sub_8280CDE4"))) PPC_WEAK_FUNC(sub_8280CDE4);
PPC_FUNC_IMPL(__imp__sub_8280CDE4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8280CDE8"))) PPC_WEAK_FUNC(sub_8280CDE8);
PPC_FUNC_IMPL(__imp__sub_8280CDE8) {
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
	// bl 0x8280df70
	ctx.lr = 0x8280CE00;
	sub_8280DF70(ctx, base);
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r11,r11,10892
	ctx.r11.s64 = ctx.r11.s64 + 10892;
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

__attribute__((alias("__imp__sub_8280CE24"))) PPC_WEAK_FUNC(sub_8280CE24);
PPC_FUNC_IMPL(__imp__sub_8280CE24) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8280CE28"))) PPC_WEAK_FUNC(sub_8280CE28);
PPC_FUNC_IMPL(__imp__sub_8280CE28) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// addi r11,r11,10892
	ctx.r11.s64 = ctx.r11.s64 + 10892;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// b 0x8280df88
	sub_8280DF88(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8280CE38"))) PPC_WEAK_FUNC(sub_8280CE38);
PPC_FUNC_IMPL(__imp__sub_8280CE38) {
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
	// lis r11,-31842
	ctx.r11.s64 = -2086797312;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// addi r30,r11,8272
	ctx.r30.s64 = ctx.r11.s64 + 8272;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x83307700
	ctx.lr = 0x8280CE64;
	sub_83307700(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r10,84(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r9,88(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// stw r10,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r10.u32);
	// stw r9,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r9.u32);
	// bl 0x83307700
	ctx.lr = 0x8280CE88;
	sub_83307700(ctx, base);
	// lwz r11,96(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// lwz r10,100(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r9,104(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r11,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r11.u32);
	// stw r10,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r10.u32);
	// stw r9,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r9.u32);
	// bl 0x83307700
	ctx.lr = 0x8280CEAC;
	sub_83307700(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r10,84(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r9,88(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// stw r11,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r11.u32);
	// stw r10,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r10.u32);
	// stw r9,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r9.u32);
	// bl 0x83307700
	ctx.lr = 0x8280CED0;
	sub_83307700(ctx, base);
	// lis r11,-32230
	ctx.r11.s64 = -2112225280;
	// lwz r10,100(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// lwz r9,104(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// lfs f0,24284(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 24284);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,48(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 48, temp.u32);
	// stw r10,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r10.u32);
	// stfs f0,52(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 52, temp.u32);
	// stw r9,44(r31)
	PPC_STORE_U32(ctx.r31.u32 + 44, ctx.r9.u32);
	// lwz r11,96(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// stw r11,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r11.u32);
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

__attribute__((alias("__imp__sub_8280CF10"))) PPC_WEAK_FUNC(sub_8280CF10);
PPC_FUNC_IMPL(__imp__sub_8280CF10) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lbz r10,33(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 33);
	// cmplwi r10,0
	ctx.cr0.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bnelr 
	if (!ctx.cr0.eq) return;
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lbz r9,33(r10)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + 33);
	// cmplwi r9,0
	ctx.cr0.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne 0x8280cf6c
	if (!ctx.cr0.eq) goto loc_8280CF6C;
	// lwz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// b 0x8280cf40
	goto loc_8280CF40;
loc_8280CF38:
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
loc_8280CF40:
	// lbz r9,33(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 33);
	// cmplwi r9,0
	ctx.cr0.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq 0x8280cf38
	if (ctx.cr0.eq) goto loc_8280CF38;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// blr 
	return;
loc_8280CF54:
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r9,8(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// bne cr6,0x8280cf7c
	if (!ctx.cr6.eq) goto loc_8280CF7C;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
loc_8280CF6C:
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lbz r10,33(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 33);
	// cmplwi r10,0
	ctx.cr0.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq 0x8280cf54
	if (ctx.cr0.eq) goto loc_8280CF54;
loc_8280CF7C:
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8280CF84"))) PPC_WEAK_FUNC(sub_8280CF84);
PPC_FUNC_IMPL(__imp__sub_8280CF84) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8280CF88"))) PPC_WEAK_FUNC(sub_8280CF88);
PPC_FUNC_IMPL(__imp__sub_8280CF88) {
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
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r11,r11,10892
	ctx.r11.s64 = ctx.r11.s64 + 10892;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// bl 0x8280df88
	ctx.lr = 0x8280CFB4;
	sub_8280DF88(ctx, base);
	// clrlwi. r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8280cfc4
	if (ctx.cr0.eq) goto loc_8280CFC4;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82e01568
	ctx.lr = 0x8280CFC4;
	sub_82E01568(ctx, base);
loc_8280CFC4:
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

__attribute__((alias("__imp__sub_8280CFE0"))) PPC_WEAK_FUNC(sub_8280CFE0);
PPC_FUNC_IMPL(__imp__sub_8280CFE0) {
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
	// addi r31,r3,8
	ctx.r31.s64 = ctx.r3.s64 + 8;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82c10e98
	ctx.lr = 0x8280D004;
	sub_82C10E98(ctx, base);
	// addi r3,r31,12
	ctx.r3.s64 = ctx.r31.s64 + 12;
	// bl 0x82c10e98
	ctx.lr = 0x8280D00C;
	sub_82C10E98(ctx, base);
	// addi r3,r31,24
	ctx.r3.s64 = ctx.r31.s64 + 24;
	// bl 0x82c10e98
	ctx.lr = 0x8280D014;
	sub_82C10E98(ctx, base);
	// addi r3,r31,36
	ctx.r3.s64 = ctx.r31.s64 + 36;
	// bl 0x82c10e98
	ctx.lr = 0x8280D01C;
	sub_82C10E98(ctx, base);
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

__attribute__((alias("__imp__sub_8280D038"))) PPC_WEAK_FUNC(sub_8280D038);
PPC_FUNC_IMPL(__imp__sub_8280D038) {
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
	// b 0x8280d070
	goto loc_8280D070;
loc_8280D058:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r4,8(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// bl 0x8280d038
	ctx.lr = 0x8280D064;
	sub_8280D038(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r31,0(r31)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x82e01568
	ctx.lr = 0x8280D070;
	sub_82E01568(ctx, base);
loc_8280D070:
	// lbz r11,37(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 37);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x8280d058
	if (ctx.cr0.eq) goto loc_8280D058;
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

__attribute__((alias("__imp__sub_8280D094"))) PPC_WEAK_FUNC(sub_8280D094);
PPC_FUNC_IMPL(__imp__sub_8280D094) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8280D098"))) PPC_WEAK_FUNC(sub_8280D098);
PPC_FUNC_IMPL(__imp__sub_8280D098) {
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
	// lwz r3,44(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 44);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8280d0bc
	if (ctx.cr6.eq) goto loc_8280D0BC;
	// bl 0x82e016e0
	ctx.lr = 0x8280D0BC;
	sub_82E016E0(ctx, base);
loc_8280D0BC:
	// lwz r3,40(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8280d0cc
	if (ctx.cr6.eq) goto loc_8280D0CC;
	// bl 0x82e016e0
	ctx.lr = 0x8280D0CC;
	sub_82E016E0(ctx, base);
loc_8280D0CC:
	// lwz r3,36(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8280d0dc
	if (ctx.cr6.eq) goto loc_8280D0DC;
	// bl 0x82e016e0
	ctx.lr = 0x8280D0DC;
	sub_82E016E0(ctx, base);
loc_8280D0DC:
	// addi r3,r31,32
	ctx.r3.s64 = ctx.r31.s64 + 32;
	// bl 0x82e01bf0
	ctx.lr = 0x8280D0E4;
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

__attribute__((alias("__imp__sub_8280D0F8"))) PPC_WEAK_FUNC(sub_8280D0F8);
PPC_FUNC_IMPL(__imp__sub_8280D0F8) {
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
	// lwz r4,4(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// bl 0x8280d038
	ctx.lr = 0x8280D118;
	sub_8280D038(ctx, base);
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r10,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r10.u32);
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// stw r10,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r10.u32);
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// stw r10,8(r10)
	PPC_STORE_U32(ctx.r10.u32 + 8, ctx.r10.u32);
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
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

__attribute__((alias("__imp__sub_8280D14C"))) PPC_WEAK_FUNC(sub_8280D14C);
PPC_FUNC_IMPL(__imp__sub_8280D14C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8280D150"))) PPC_WEAK_FUNC(sub_8280D150);
PPC_FUNC_IMPL(__imp__sub_8280D150) {
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
	// li r11,0
	ctx.r11.s64 = 0;
	// li r3,16
	ctx.r3.s64 = 16;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
	// bl 0x82e01570
	ctx.lr = 0x8280D17C;
	sub_82E01570(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8280d1a8
	if (ctx.cr0.eq) goto loc_8280D1A8;
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// stw r31,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r31.u32);
	// li r10,1
	ctx.r10.s64 = 1;
	// addi r9,r11,10900
	ctx.r9.s64 = ctx.r11.s64 + 10900;
	// stw r10,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r10.u32);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// stw r10,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r10.u32);
	// b 0x8280d1ac
	goto loc_8280D1AC;
loc_8280D1A8:
	// li r11,0
	ctx.r11.s64 = 0;
loc_8280D1AC:
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8280d1f0
	if (!ctx.cr6.eq) goto loc_8280D1F0;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x8280d1d0
	if (ctx.cr6.eq) goto loc_8280D1D0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8280d098
	ctx.lr = 0x8280D1C8;
	sub_8280D098(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82e01568
	ctx.lr = 0x8280D1D0;
	sub_82E01568(ctx, base);
loc_8280D1D0:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// addi r11,r11,2048
	ctx.r11.s64 = ctx.r11.s64 + 2048;
	// addi r10,r10,2036
	ctx.r10.s64 = ctx.r10.s64 + 2036;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// bl 0x82c10e98
	ctx.lr = 0x8280D1F0;
	sub_82C10E98(ctx, base);
loc_8280D1F0:
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

__attribute__((alias("__imp__sub_8280D20C"))) PPC_WEAK_FUNC(sub_8280D20C);
PPC_FUNC_IMPL(__imp__sub_8280D20C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8280D210"))) PPC_WEAK_FUNC(sub_8280D210);
PPC_FUNC_IMPL(__imp__sub_8280D210) {
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
	// lwz r31,12(r3)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x8280d23c
	if (ctx.cr6.eq) goto loc_8280D23C;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8280d098
	ctx.lr = 0x8280D234;
	sub_8280D098(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82e01568
	ctx.lr = 0x8280D23C;
	sub_82E01568(ctx, base);
loc_8280D23C:
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

__attribute__((alias("__imp__sub_8280D250"))) PPC_WEAK_FUNC(sub_8280D250);
PPC_FUNC_IMPL(__imp__sub_8280D250) {
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
	// stw r4,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r4.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r3,r3,4
	ctx.r3.s64 = ctx.r3.s64 + 4;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// bl 0x8280d150
	ctx.lr = 0x8280D278;
	sub_8280D150(ctx, base);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82c10e98
	ctx.lr = 0x8280D288;
	sub_82C10E98(ctx, base);
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

__attribute__((alias("__imp__sub_8280D2A4"))) PPC_WEAK_FUNC(sub_8280D2A4);
PPC_FUNC_IMPL(__imp__sub_8280D2A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8280D2A8"))) PPC_WEAK_FUNC(sub_8280D2A8);
PPC_FUNC_IMPL(__imp__sub_8280D2A8) {
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
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8280d250
	ctx.lr = 0x8280D2C4;
	sub_8280D250(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// stw r10,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r10.u32);
	// lwz r3,84(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8280d2f4
	if (ctx.cr6.eq) goto loc_8280D2F4;
	// bl 0x82480108
	ctx.lr = 0x8280D2F4;
	sub_82480108(ctx, base);
loc_8280D2F4:
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

__attribute__((alias("__imp__sub_8280D308"))) PPC_WEAK_FUNC(sub_8280D308);
PPC_FUNC_IMPL(__imp__sub_8280D308) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x833a01a4
	ctx.lr = 0x8280D310;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lbz r11,21(r4)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r4.u32 + 21);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// lwz r28,4(r3)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r27,r5
	ctx.r27.u64 = ctx.r5.u64;
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x8280d380
	if (!ctx.cr0.eq) goto loc_8280D380;
	// addi r4,r4,12
	ctx.r4.s64 = ctx.r4.s64 + 12;
	// bl 0x828130a8
	ctx.lr = 0x8280D338;
	sub_828130A8(ctx, base);
	// stw r27,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r27.u32);
	// lbz r11,20(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 20);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stb r11,20(r3)
	PPC_STORE_U8(ctx.r3.u32 + 20, ctx.r11.u8);
	// lbz r11,21(r28)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r28.u32 + 21);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x8280d358
	if (ctx.cr0.eq) goto loc_8280D358;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
loc_8280D358:
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// lwz r4,0(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8280d308
	ctx.lr = 0x8280D368;
	sub_8280D308(ctx, base);
	// stw r3,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r3.u32);
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// lwz r4,8(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8280d308
	ctx.lr = 0x8280D37C;
	sub_8280D308(ctx, base);
	// stw r3,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r3.u32);
loc_8280D380:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x833a01f4
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8280D38C"))) PPC_WEAK_FUNC(sub_8280D38C);
PPC_FUNC_IMPL(__imp__sub_8280D38C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8280D390"))) PPC_WEAK_FUNC(sub_8280D390);
PPC_FUNC_IMPL(__imp__sub_8280D390) {
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
	// lwz r6,36(r3)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r3.u32 + 36);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r4,r3,32
	ctx.r4.s64 = ctx.r3.s64 + 32;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r5,0(r6)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	// bl 0x82d8d010
	ctx.lr = 0x8280D3B8;
	sub_82D8D010(ctx, base);
	// lwz r3,36(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// bl 0x82e01568
	ctx.lr = 0x8280D3C0;
	sub_82E01568(ctx, base);
	// lwz r6,12(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// addi r4,r31,8
	ctx.r4.s64 = ctx.r31.s64 + 8;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r5,0(r6)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	// bl 0x82d80710
	ctx.lr = 0x8280D3D4;
	sub_82D80710(ctx, base);
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// bl 0x82e01568
	ctx.lr = 0x8280D3DC;
	sub_82E01568(ctx, base);
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

__attribute__((alias("__imp__sub_8280D3F0"))) PPC_WEAK_FUNC(sub_8280D3F0);
PPC_FUNC_IMPL(__imp__sub_8280D3F0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x833a01ac
	ctx.lr = 0x8280D3F8;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,4(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// lwz r29,4(r3)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// lwz r4,4(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// bl 0x8280d308
	ctx.lr = 0x8280D418;
	sub_8280D308(ctx, base);
	// stw r3,4(r29)
	PPC_STORE_U32(ctx.r29.u32 + 4, ctx.r3.u32);
	// lwz r9,4(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// lwz r10,4(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// lbz r11,21(r10)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r10.u32 + 21);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x8280d484
	if (!ctx.cr0.eq) goto loc_8280D484;
	// lwz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// b 0x8280d448
	goto loc_8280D448;
loc_8280D440:
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
loc_8280D448:
	// lbz r8,21(r11)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + 21);
	// cmplwi r8,0
	ctx.cr0.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq 0x8280d440
	if (ctx.cr0.eq) goto loc_8280D440;
	// stw r10,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r10.u32);
	// lwz r9,4(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r10,4(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// lwz r11,8(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// b 0x8280d470
	goto loc_8280D470;
loc_8280D468:
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
loc_8280D470:
	// lbz r8,21(r11)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + 21);
	// cmplwi r8,0
	ctx.cr0.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq 0x8280d468
	if (ctx.cr0.eq) goto loc_8280D468;
	// stw r10,8(r9)
	PPC_STORE_U32(ctx.r9.u32 + 8, ctx.r10.u32);
	// b 0x8280d490
	goto loc_8280D490;
loc_8280D484:
	// stw r9,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r9.u32);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// stw r11,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r11.u32);
loc_8280D490:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x833a01fc
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8280D498"))) PPC_WEAK_FUNC(sub_8280D498);
PPC_FUNC_IMPL(__imp__sub_8280D498) {
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
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x82898f80
	ctx.lr = 0x8280D4C0;
	sub_82898F80(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x8280d3f0
	ctx.lr = 0x8280D4CC;
	sub_8280D3F0(ctx, base);
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

__attribute__((alias("__imp__sub_8280D4E8"))) PPC_WEAK_FUNC(sub_8280D4E8);
PPC_FUNC_IMPL(__imp__sub_8280D4E8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x833a0198
	ctx.lr = 0x8280D4F0;
	__savegprlr_24(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lbz r11,33(r5)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r5.u32 + 33);
	// mr r24,r3
	ctx.r24.u64 = ctx.r3.u64;
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// stw r5,196(r1)
	PPC_STORE_U32(ctx.r1.u32 + 196, ctx.r5.u32);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x8280d518
	if (ctx.cr0.eq) goto loc_8280D518;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r3,r11,7812
	ctx.r3.s64 = ctx.r11.s64 + 7812;
	// bl 0x82dffbd8
	ctx.lr = 0x8280D518;
	sub_82DFFBD8(ctx, base);
loc_8280D518:
	// addi r3,r1,196
	ctx.r3.s64 = ctx.r1.s64 + 196;
	// mr r26,r5
	ctx.r26.u64 = ctx.r5.u64;
	// bl 0x8280cf10
	ctx.lr = 0x8280D524;
	sub_8280CF10(ctx, base);
	// lwz r11,0(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// lbz r10,33(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 33);
	// cmplwi r10,0
	ctx.cr0.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// lwz r25,196(r1)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r1.u32 + 196);
	// beq 0x8280d540
	if (ctx.cr0.eq) goto loc_8280D540;
	// lwz r28,8(r26)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r26.u32 + 8);
	// b 0x8280d564
	goto loc_8280D564;
loc_8280D540:
	// lwz r10,8(r26)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r26.u32 + 8);
	// lbz r10,33(r10)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r10.u32 + 33);
	// cmplwi r10,0
	ctx.cr0.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq 0x8280d558
	if (ctx.cr0.eq) goto loc_8280D558;
	// mr r28,r11
	ctx.r28.u64 = ctx.r11.u64;
	// b 0x8280d564
	goto loc_8280D564;
loc_8280D558:
	// lwz r28,8(r25)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r25.u32 + 8);
	// cmplw cr6,r25,r26
	ctx.cr6.compare<uint32_t>(ctx.r25.u32, ctx.r26.u32, ctx.xer);
	// bne cr6,0x8280d63c
	if (!ctx.cr6.eq) goto loc_8280D63C;
loc_8280D564:
	// lbz r11,33(r28)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r28.u32 + 33);
	// lwz r31,4(r26)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r26.u32 + 4);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x8280d578
	if (!ctx.cr0.eq) goto loc_8280D578;
	// stw r31,4(r28)
	PPC_STORE_U32(ctx.r28.u32 + 4, ctx.r31.u32);
loc_8280D578:
	// lwz r11,4(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 4);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmplw cr6,r10,r26
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r26.u32, ctx.xer);
	// bne cr6,0x8280d590
	if (!ctx.cr6.eq) goto loc_8280D590;
	// stw r28,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r28.u32);
	// b 0x8280d5a8
	goto loc_8280D5A8;
loc_8280D590:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplw cr6,r11,r26
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r26.u32, ctx.xer);
	// bne cr6,0x8280d5a4
	if (!ctx.cr6.eq) goto loc_8280D5A4;
	// stw r28,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r28.u32);
	// b 0x8280d5a8
	goto loc_8280D5A8;
loc_8280D5A4:
	// stw r28,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r28.u32);
loc_8280D5A8:
	// lwz r9,4(r27)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r27.u32 + 4);
	// lwz r11,0(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// cmplw cr6,r11,r26
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r26.u32, ctx.xer);
	// bne cr6,0x8280d5f0
	if (!ctx.cr6.eq) goto loc_8280D5F0;
	// lbz r11,33(r28)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r28.u32 + 33);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x8280d5cc
	if (ctx.cr0.eq) goto loc_8280D5CC;
	// mr r10,r31
	ctx.r10.u64 = ctx.r31.u64;
	// b 0x8280d5ec
	goto loc_8280D5EC;
loc_8280D5CC:
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// mr r10,r28
	ctx.r10.u64 = ctx.r28.u64;
	// b 0x8280d5e0
	goto loc_8280D5E0;
loc_8280D5D8:
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
loc_8280D5E0:
	// lbz r8,33(r11)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + 33);
	// cmplwi r8,0
	ctx.cr0.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq 0x8280d5d8
	if (ctx.cr0.eq) goto loc_8280D5D8;
loc_8280D5EC:
	// stw r10,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r10.u32);
loc_8280D5F0:
	// lwz r9,4(r27)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r27.u32 + 4);
	// lwz r11,8(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// cmplw cr6,r11,r26
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r26.u32, ctx.xer);
	// bne cr6,0x8280d6d0
	if (!ctx.cr6.eq) goto loc_8280D6D0;
	// lbz r11,33(r28)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r28.u32 + 33);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x8280d614
	if (ctx.cr0.eq) goto loc_8280D614;
	// mr r10,r31
	ctx.r10.u64 = ctx.r31.u64;
	// b 0x8280d634
	goto loc_8280D634;
loc_8280D614:
	// lwz r11,8(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 8);
	// mr r10,r28
	ctx.r10.u64 = ctx.r28.u64;
	// b 0x8280d628
	goto loc_8280D628;
loc_8280D620:
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
loc_8280D628:
	// lbz r8,33(r11)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + 33);
	// cmplwi r8,0
	ctx.cr0.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq 0x8280d620
	if (ctx.cr0.eq) goto loc_8280D620;
loc_8280D634:
	// stw r10,8(r9)
	PPC_STORE_U32(ctx.r9.u32 + 8, ctx.r10.u32);
	// b 0x8280d6d0
	goto loc_8280D6D0;
loc_8280D63C:
	// stw r25,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r25.u32);
	// lwz r11,0(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// stw r11,0(r25)
	PPC_STORE_U32(ctx.r25.u32 + 0, ctx.r11.u32);
	// lwz r11,8(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 8);
	// cmplw cr6,r25,r11
	ctx.cr6.compare<uint32_t>(ctx.r25.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x8280d65c
	if (!ctx.cr6.eq) goto loc_8280D65C;
	// mr r31,r25
	ctx.r31.u64 = ctx.r25.u64;
	// b 0x8280d684
	goto loc_8280D684;
loc_8280D65C:
	// lbz r11,33(r28)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r28.u32 + 33);
	// lwz r31,4(r25)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r25.u32 + 4);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x8280d670
	if (!ctx.cr0.eq) goto loc_8280D670;
	// stw r31,4(r28)
	PPC_STORE_U32(ctx.r28.u32 + 4, ctx.r31.u32);
loc_8280D670:
	// stw r28,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r28.u32);
	// lwz r11,8(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 8);
	// stw r11,8(r25)
	PPC_STORE_U32(ctx.r25.u32 + 8, ctx.r11.u32);
	// lwz r11,8(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 8);
	// stw r25,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r25.u32);
loc_8280D684:
	// lwz r11,4(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 4);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmplw cr6,r10,r26
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r26.u32, ctx.xer);
	// bne cr6,0x8280d69c
	if (!ctx.cr6.eq) goto loc_8280D69C;
	// stw r25,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r25.u32);
	// b 0x8280d6b8
	goto loc_8280D6B8;
loc_8280D69C:
	// lwz r11,4(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 4);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r10,r26
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r26.u32, ctx.xer);
	// bne cr6,0x8280d6b4
	if (!ctx.cr6.eq) goto loc_8280D6B4;
	// stw r25,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r25.u32);
	// b 0x8280d6b8
	goto loc_8280D6B8;
loc_8280D6B4:
	// stw r25,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r25.u32);
loc_8280D6B8:
	// lwz r11,4(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 4);
	// stw r11,4(r25)
	PPC_STORE_U32(ctx.r25.u32 + 4, ctx.r11.u32);
	// lbz r11,32(r25)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r25.u32 + 32);
	// lbz r10,32(r26)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r26.u32 + 32);
	// stb r10,32(r25)
	PPC_STORE_U8(ctx.r25.u32 + 32, ctx.r10.u8);
	// stb r11,32(r26)
	PPC_STORE_U8(ctx.r26.u32 + 32, ctx.r11.u8);
loc_8280D6D0:
	// lbz r11,32(r26)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r26.u32 + 32);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// bne cr6,0x8280d868
	if (!ctx.cr6.eq) goto loc_8280D868;
	// lwz r11,4(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 4);
	// li r30,1
	ctx.r30.s64 = 1;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmplw cr6,r28,r11
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x8280d864
	if (ctx.cr6.eq) goto loc_8280D864;
	// li r29,0
	ctx.r29.s64 = 0;
loc_8280D6F4:
	// lbz r11,32(r28)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r28.u32 + 32);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// bne cr6,0x8280d864
	if (!ctx.cr6.eq) goto loc_8280D864;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplw cr6,r28,r11
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x8280d7ac
	if (!ctx.cr6.eq) goto loc_8280D7AC;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lbz r10,32(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 32);
	// cmplwi r10,0
	ctx.cr0.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne 0x8280d734
	if (!ctx.cr0.eq) goto loc_8280D734;
	// stb r30,32(r11)
	PPC_STORE_U8(ctx.r11.u32 + 32, ctx.r30.u8);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// stb r29,32(r31)
	PPC_STORE_U8(ctx.r31.u32 + 32, ctx.r29.u8);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82ba2fd0
	ctx.lr = 0x8280D730;
	sub_82BA2FD0(ctx, base);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
loc_8280D734:
	// lbz r10,33(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 33);
	// cmplwi r10,0
	ctx.cr0.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne 0x8280d800
	if (!ctx.cr0.eq) goto loc_8280D800;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lbz r9,32(r10)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + 32);
	// cmplwi cr6,r9,1
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 1, ctx.xer);
	// bne cr6,0x8280d760
	if (!ctx.cr6.eq) goto loc_8280D760;
	// lwz r9,8(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lbz r9,32(r9)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r9.u32 + 32);
	// cmplwi cr6,r9,1
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 1, ctx.xer);
	// beq cr6,0x8280d7fc
	if (ctx.cr6.eq) goto loc_8280D7FC;
loc_8280D760:
	// lwz r9,8(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lbz r9,32(r9)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r9.u32 + 32);
	// cmplwi cr6,r9,1
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 1, ctx.xer);
	// bne cr6,0x8280d788
	if (!ctx.cr6.eq) goto loc_8280D788;
	// stb r30,32(r10)
	PPC_STORE_U8(ctx.r10.u32 + 32, ctx.r30.u8);
	// mr r4,r11
	ctx.r4.u64 = ctx.r11.u64;
	// stb r29,32(r11)
	PPC_STORE_U8(ctx.r11.u32 + 32, ctx.r29.u8);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82e9a5f8
	ctx.lr = 0x8280D784;
	sub_82E9A5F8(ctx, base);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
loc_8280D788:
	// lbz r10,32(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 32);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// stb r10,32(r11)
	PPC_STORE_U8(ctx.r11.u32 + 32, ctx.r10.u8);
	// stb r30,32(r31)
	PPC_STORE_U8(ctx.r31.u32 + 32, ctx.r30.u8);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// stb r30,32(r11)
	PPC_STORE_U8(ctx.r11.u32 + 32, ctx.r30.u8);
	// bl 0x82ba2fd0
	ctx.lr = 0x8280D7A8;
	sub_82BA2FD0(ctx, base);
	// b 0x8280d864
	goto loc_8280D864;
loc_8280D7AC:
	// lbz r10,32(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 32);
	// cmplwi r10,0
	ctx.cr0.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne 0x8280d7d0
	if (!ctx.cr0.eq) goto loc_8280D7D0;
	// stb r30,32(r11)
	PPC_STORE_U8(ctx.r11.u32 + 32, ctx.r30.u8);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// stb r29,32(r31)
	PPC_STORE_U8(ctx.r31.u32 + 32, ctx.r29.u8);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82e9a5f8
	ctx.lr = 0x8280D7CC;
	sub_82E9A5F8(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
loc_8280D7D0:
	// lbz r10,33(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 33);
	// cmplwi r10,0
	ctx.cr0.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne 0x8280d800
	if (!ctx.cr0.eq) goto loc_8280D800;
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lbz r9,32(r10)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + 32);
	// cmplwi cr6,r9,1
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 1, ctx.xer);
	// bne cr6,0x8280d81c
	if (!ctx.cr6.eq) goto loc_8280D81C;
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lbz r9,32(r9)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r9.u32 + 32);
	// cmplwi cr6,r9,1
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 1, ctx.xer);
	// bne cr6,0x8280d81c
	if (!ctx.cr6.eq) goto loc_8280D81C;
loc_8280D7FC:
	// stb r29,32(r11)
	PPC_STORE_U8(ctx.r11.u32 + 32, ctx.r29.u8);
loc_8280D800:
	// lwz r11,4(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 4);
	// mr r28,r31
	ctx.r28.u64 = ctx.r31.u64;
	// lwz r31,4(r31)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmplw cr6,r28,r11
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x8280d6f4
	if (!ctx.cr6.eq) goto loc_8280D6F4;
	// b 0x8280d864
	goto loc_8280D864;
loc_8280D81C:
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lbz r9,32(r9)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r9.u32 + 32);
	// cmplwi cr6,r9,1
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 1, ctx.xer);
	// bne cr6,0x8280d844
	if (!ctx.cr6.eq) goto loc_8280D844;
	// stb r30,32(r10)
	PPC_STORE_U8(ctx.r10.u32 + 32, ctx.r30.u8);
	// mr r4,r11
	ctx.r4.u64 = ctx.r11.u64;
	// stb r29,32(r11)
	PPC_STORE_U8(ctx.r11.u32 + 32, ctx.r29.u8);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82ba2fd0
	ctx.lr = 0x8280D840;
	sub_82BA2FD0(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
loc_8280D844:
	// lbz r10,32(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 32);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// stb r10,32(r11)
	PPC_STORE_U8(ctx.r11.u32 + 32, ctx.r10.u8);
	// stb r30,32(r31)
	PPC_STORE_U8(ctx.r31.u32 + 32, ctx.r30.u8);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stb r30,32(r11)
	PPC_STORE_U8(ctx.r11.u32 + 32, ctx.r30.u8);
	// bl 0x82e9a5f8
	ctx.lr = 0x8280D864;
	sub_82E9A5F8(ctx, base);
loc_8280D864:
	// stb r30,32(r28)
	PPC_STORE_U8(ctx.r28.u32 + 32, ctx.r30.u8);
loc_8280D868:
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r26,12
	ctx.r3.s64 = ctx.r26.s64 + 12;
	// bl 0x82a71b20
	ctx.lr = 0x8280D874;
	sub_82A71B20(ctx, base);
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x82e01568
	ctx.lr = 0x8280D87C;
	sub_82E01568(ctx, base);
	// lwz r11,8(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 8);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8280d890
	if (ctx.cr6.eq) goto loc_8280D890;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stw r11,8(r27)
	PPC_STORE_U32(ctx.r27.u32 + 8, ctx.r11.u32);
loc_8280D890:
	// stw r25,0(r24)
	PPC_STORE_U32(ctx.r24.u32 + 0, ctx.r25.u32);
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x833a01e8
	__restgprlr_24(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8280D8A0"))) PPC_WEAK_FUNC(sub_8280D8A0);
PPC_FUNC_IMPL(__imp__sub_8280D8A0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x833a01ac
	ctx.lr = 0x8280D8A8;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lbz r11,33(r4)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r4.u32 + 33);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// b 0x8280d8ec
	goto loc_8280D8EC;
loc_8280D8C0:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r4,8(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// bl 0x8280d8a0
	ctx.lr = 0x8280D8CC;
	sub_8280D8A0(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r30,12
	ctx.r3.s64 = ctx.r30.s64 + 12;
	// lwz r31,0(r31)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x82a71b20
	ctx.lr = 0x8280D8DC;
	sub_82A71B20(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82e01568
	ctx.lr = 0x8280D8E4;
	sub_82E01568(ctx, base);
	// lbz r11,33(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 33);
	// mr r30,r31
	ctx.r30.u64 = ctx.r31.u64;
loc_8280D8EC:
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x8280d8c0
	if (ctx.cr0.eq) goto loc_8280D8C0;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x833a01fc
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8280D8FC"))) PPC_WEAK_FUNC(sub_8280D8FC);
PPC_FUNC_IMPL(__imp__sub_8280D8FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8280D900"))) PPC_WEAK_FUNC(sub_8280D900);
PPC_FUNC_IMPL(__imp__sub_8280D900) {
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
	// lwz r4,4(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// bl 0x8280d8a0
	ctx.lr = 0x8280D920;
	sub_8280D8A0(ctx, base);
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r10,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r10.u32);
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// stw r10,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r10.u32);
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// stw r10,8(r10)
	PPC_STORE_U32(ctx.r10.u32 + 8, ctx.r10.u32);
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
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

__attribute__((alias("__imp__sub_8280D954"))) PPC_WEAK_FUNC(sub_8280D954);
PPC_FUNC_IMPL(__imp__sub_8280D954) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8280D958"))) PPC_WEAK_FUNC(sub_8280D958);
PPC_FUNC_IMPL(__imp__sub_8280D958) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x833a01a8
	ctx.lr = 0x8280D960;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,4(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// stw r5,164(r1)
	PPC_STORE_U32(ctx.r1.u32 + 164, ctx.r5.u32);
	// mr r30,r6
	ctx.r30.u64 = ctx.r6.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r5,r10
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x8280d9c4
	if (!ctx.cr6.eq) goto loc_8280D9C4;
	// cmplw cr6,r6,r11
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x8280d9c4
	if (!ctx.cr6.eq) goto loc_8280D9C4;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// bl 0x8280d900
	ctx.lr = 0x8280D994;
	sub_8280D900(ctx, base);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stw r11,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r11.u32);
	// b 0x8280d9d0
	goto loc_8280D9D0;
loc_8280D9A4:
	// addi r3,r1,164
	ctx.r3.s64 = ctx.r1.s64 + 164;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// bl 0x8280cf10
	ctx.lr = 0x8280D9B0;
	sub_8280CF10(ctx, base);
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8280d4e8
	ctx.lr = 0x8280D9C0;
	sub_8280D4E8(ctx, base);
	// lwz r5,164(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 164);
loc_8280D9C4:
	// cmplw cr6,r5,r30
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, ctx.r30.u32, ctx.xer);
	// bne cr6,0x8280d9a4
	if (!ctx.cr6.eq) goto loc_8280D9A4;
	// stw r5,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r5.u32);
loc_8280D9D0:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x833a01f8
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8280D9DC"))) PPC_WEAK_FUNC(sub_8280D9DC);
PPC_FUNC_IMPL(__imp__sub_8280D9DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8280D9E0"))) PPC_WEAK_FUNC(sub_8280D9E0);
PPC_FUNC_IMPL(__imp__sub_8280D9E0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x833a01a8
	ctx.lr = 0x8280D9E8;
	__savegprlr_28(ctx, base);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// addi r4,r5,24
	ctx.r4.s64 = ctx.r5.s64 + 24;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// bl 0x8280d498
	ctx.lr = 0x8280DA00;
	sub_8280D498(ctx, base);
	// lwz r10,16(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// lwz r9,120(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	// lis r11,2047
	ctx.r11.s64 = 134152192;
	// ori r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 65535;
	// addi r29,r9,-1
	ctx.r29.s64 = ctx.r9.s64 + -1;
	// stw r10,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r10.u32);
	// lfs f0,20(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,4(r30)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r30.u32 + 4, temp.u32);
	// cmplw cr6,r29,r11
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r11.u32, ctx.xer);
	// lbz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 8);
	// rlwinm r3,r29,5,0,26
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 5) & 0xFFFFFFE0;
	// stb r10,8(r30)
	PPC_STORE_U8(ctx.r30.u32 + 8, ctx.r10.u8);
	// lbz r11,9(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 9);
	// stb r11,9(r30)
	PPC_STORE_U8(ctx.r30.u32 + 9, ctx.r11.u8);
	// lbz r11,10(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 10);
	// stb r11,10(r30)
	PPC_STORE_U8(ctx.r30.u32 + 10, ctx.r11.u8);
	// lbz r11,11(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 11);
	// stb r11,11(r30)
	PPC_STORE_U8(ctx.r30.u32 + 11, ctx.r11.u8);
	// lbz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 12);
	// stb r11,12(r30)
	PPC_STORE_U8(ctx.r30.u32 + 12, ctx.r11.u8);
	// stw r29,16(r30)
	PPC_STORE_U32(ctx.r30.u32 + 16, ctx.r29.u32);
	// ble cr6,0x8280da5c
	if (!ctx.cr6.gt) goto loc_8280DA5C;
	// li r3,-1
	ctx.r3.s64 = -1;
loc_8280DA5C:
	// bl 0x82dffe50
	ctx.lr = 0x8280DA60;
	sub_82DFFE50(ctx, base);
	// mr. r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// beq 0x8280da98
	if (ctx.cr0.eq) goto loc_8280DA98;
	// addic. r29,r29,-1
	ctx.xer.ca = ctx.r29.u32 > 0;
	ctx.r29.s64 = ctx.r29.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// blt 0x8280da90
	if (ctx.cr0.lt) goto loc_8280DA90;
	// addi r31,r28,16
	ctx.r31.s64 = ctx.r28.s64 + 16;
loc_8280DA74:
	// addi r3,r31,-12
	ctx.r3.s64 = ctx.r31.s64 + -12;
	// bl 0x82c10e98
	ctx.lr = 0x8280DA7C;
	sub_82C10E98(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82c10e98
	ctx.lr = 0x8280DA84;
	sub_82C10E98(ctx, base);
	// addic. r29,r29,-1
	ctx.xer.ca = ctx.r29.u32 > 0;
	ctx.r29.s64 = ctx.r29.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// addi r31,r31,32
	ctx.r31.s64 = ctx.r31.s64 + 32;
	// bge 0x8280da74
	if (!ctx.cr0.lt) goto loc_8280DA74;
loc_8280DA90:
	// mr r11,r28
	ctx.r11.u64 = ctx.r28.u64;
	// b 0x8280da9c
	goto loc_8280DA9C;
loc_8280DA98:
	// li r11,0
	ctx.r11.s64 = 0;
loc_8280DA9C:
	// lwz r28,116(r1)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// stw r11,20(r30)
	PPC_STORE_U32(ctx.r30.u32 + 20, ctx.r11.u32);
	// lwz r29,0(r28)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// cmplw cr6,r29,r28
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r28.u32, ctx.xer);
	// stw r29,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r29.u32);
	// beq cr6,0x8280db58
	if (ctx.cr6.eq) goto loc_8280DB58;
	// li r31,0
	ctx.r31.s64 = 0;
loc_8280DAB8:
	// lwz r11,12(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 12);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x8280db44
	if (!ctx.cr6.gt) goto loc_8280DB44;
	// lwz r10,20(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 20);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// stwx r11,r31,r10
	PPC_STORE_U32(ctx.r31.u32 + ctx.r10.u32, ctx.r11.u32);
	// lwz r11,16(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 16);
	// addi r4,r11,16
	ctx.r4.s64 = ctx.r11.s64 + 16;
	// bl 0x83307700
	ctx.lr = 0x8280DADC;
	sub_83307700(ctx, base);
	// lwz r11,20(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 20);
	// lwz r10,88(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// add r11,r31,r11
	ctx.r11.u64 = ctx.r31.u64 + ctx.r11.u64;
	// lwz r9,92(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// lwz r8,96(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// stw r9,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r9.u32);
	// stw r8,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r8.u32);
	// lwz r11,16(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 16);
	// addi r4,r11,32
	ctx.r4.s64 = ctx.r11.s64 + 32;
	// bl 0x83307720
	ctx.lr = 0x8280DB0C;
	sub_83307720(ctx, base);
	// lwz r11,20(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 20);
	// addi r10,r1,128
	ctx.r10.s64 = ctx.r1.s64 + 128;
	// add r11,r31,r11
	ctx.r11.u64 = ctx.r31.u64 + ctx.r11.u64;
	// addi r31,r31,32
	ctx.r31.s64 = ctx.r31.s64 + 32;
	// addi r9,r11,16
	ctx.r9.s64 = ctx.r11.s64 + 16;
	// lwz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// stw r9,16(r11)
	PPC_STORE_U32(ctx.r11.u32 + 16, ctx.r9.u32);
	// lwz r9,4(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// stw r9,20(r11)
	PPC_STORE_U32(ctx.r11.u32 + 20, ctx.r9.u32);
	// lwz r9,8(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// stw r9,24(r11)
	PPC_STORE_U32(ctx.r11.u32 + 24, ctx.r9.u32);
	// lwz r10,12(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// stw r10,28(r11)
	PPC_STORE_U32(ctx.r11.u32 + 28, ctx.r10.u32);
	// lwz r28,116(r1)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
loc_8280DB44:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82ee29b0
	ctx.lr = 0x8280DB4C;
	sub_82EE29B0(ctx, base);
	// lwz r29,80(r1)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplw cr6,r29,r28
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r28.u32, ctx.xer);
	// bne cr6,0x8280dab8
	if (!ctx.cr6.eq) goto loc_8280DAB8;
loc_8280DB58:
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// lwz r5,0(r28)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x828141d0
	ctx.lr = 0x8280DB6C;
	sub_828141D0(ctx, base);
	// lwz r3,116(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// bl 0x82e01568
	ctx.lr = 0x8280DB74;
	sub_82E01568(ctx, base);
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x833a01f8
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8280DB7C"))) PPC_WEAK_FUNC(sub_8280DB7C);
PPC_FUNC_IMPL(__imp__sub_8280DB7C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8280DB80"))) PPC_WEAK_FUNC(sub_8280DB80);
PPC_FUNC_IMPL(__imp__sub_8280DB80) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x833a01a0
	ctx.lr = 0x8280DB88;
	__savegprlr_26(ctx, base);
	// stwu r1,-256(r1)
	ea = -256 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r29,r6,32
	ctx.r29.s64 = ctx.r6.s64 + 32;
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// mr r30,r6
	ctx.r30.u64 = ctx.r6.u64;
	// mr r28,r7
	ctx.r28.u64 = ctx.r7.u64;
	// bl 0x82e01bf8
	ctx.lr = 0x8280DBAC;
	sub_82E01BF8(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
loc_8280DBB0:
	// lbz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r3.u32 + 0);
	// addi r3,r3,1
	ctx.r3.s64 = ctx.r3.s64 + 1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x8280dbb0
	if (!ctx.cr6.eq) goto loc_8280DBB0;
	// subf r11,r11,r3
	ctx.r11.s64 = ctx.r3.s64 - ctx.r11.s64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// cmplwi cr6,r11,32
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 32, ctx.xer);
	// bge cr6,0x8280dd0c
	if (!ctx.cr6.lt) goto loc_8280DD0C;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82e01bf8
	ctx.lr = 0x8280DBDC;
	sub_82E01BF8(ctx, base);
	// subf r11,r3,r31
	ctx.r11.s64 = ctx.r31.s64 - ctx.r3.s64;
loc_8280DBE0:
	// lbz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r3.u32 + 0);
	// extsb. r9,r10
	ctx.r9.s64 = ctx.r10.s8;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// stbx r10,r11,r3
	PPC_STORE_U8(ctx.r11.u32 + ctx.r3.u32, ctx.r10.u8);
	// addi r3,r3,1
	ctx.r3.s64 = ctx.r3.s64 + 1;
	// bne 0x8280dbe0
	if (!ctx.cr0.eq) goto loc_8280DBE0;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x83307700
	ctx.lr = 0x8280DC00;
	sub_83307700(ctx, base);
	// lwz r11,88(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// lwz r10,92(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// addi r4,r30,16
	ctx.r4.s64 = ctx.r30.s64 + 16;
	// lwz r9,96(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// stw r11,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r11.u32);
	// stw r10,44(r31)
	PPC_STORE_U32(ctx.r31.u32 + 44, ctx.r10.u32);
	// stw r9,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r9.u32);
	// bl 0x83307720
	ctx.lr = 0x8280DC24;
	sub_83307720(ctx, base);
	// addi r11,r1,128
	ctx.r11.s64 = ctx.r1.s64 + 128;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r8,8(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// stw r10,52(r31)
	PPC_STORE_U32(ctx.r31.u32 + 52, ctx.r10.u32);
	// stw r9,56(r31)
	PPC_STORE_U32(ctx.r31.u32 + 56, ctx.r9.u32);
	// stw r8,60(r31)
	PPC_STORE_U32(ctx.r31.u32 + 60, ctx.r8.u32);
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// stw r11,64(r31)
	PPC_STORE_U32(ctx.r31.u32 + 64, ctx.r11.u32);
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// stw r11,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r11.u32);
	// lwz r11,44(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 44);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8280dcb4
	if (ctx.cr6.eq) goto loc_8280DCB4;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82af7230
	ctx.lr = 0x8280DC6C;
	sub_82AF7230(ctx, base);
	// addi r6,r1,112
	ctx.r6.s64 = ctx.r1.s64 + 112;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// addi r4,r31,68
	ctx.r4.s64 = ctx.r31.s64 + 68;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x83307ba0
	ctx.lr = 0x8280DC80;
	sub_83307BA0(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r1,144
	ctx.r4.s64 = ctx.r1.s64 + 144;
	// lwz r3,44(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 44);
	// bl 0x82ae2060
	ctx.lr = 0x8280DC90;
	sub_82AE2060(ctx, base);
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x8280d390
	ctx.lr = 0x8280DC98;
	sub_8280D390(ctx, base);
	// lwz r6,116(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// lwz r5,0(r6)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	// bl 0x8280d958
	ctx.lr = 0x8280DCAC;
	sub_8280D958(ctx, base);
	// lwz r3,116(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// bl 0x82e01568
	ctx.lr = 0x8280DCB4;
	sub_82E01568(ctx, base);
loc_8280DCB4:
	// lwz r11,40(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 40);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8280dd04
	if (ctx.cr6.eq) goto loc_8280DD04;
	// lwz r11,16(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// cmplwi cr6,r11,2
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 2, ctx.xer);
	// blt cr6,0x8280dce0
	if (ctx.cr6.lt) goto loc_8280DCE0;
	// li r3,24
	ctx.r3.s64 = 24;
	// bl 0x82dffe50
	ctx.lr = 0x8280DCD4;
	sub_82DFFE50(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r3,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r3.u32);
	// b 0x8280dce8
	goto loc_8280DCE8;
loc_8280DCE0:
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r11.u32);
loc_8280DCE8:
	// lwz r4,84(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 84);
	// stw r11,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r11.u32);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x8280dd04
	if (ctx.cr6.eq) goto loc_8280DD04;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// lwz r5,40(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + 40);
	// bl 0x8280d9e0
	ctx.lr = 0x8280DD04;
	sub_8280D9E0(ctx, base);
loc_8280DD04:
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x8280dd10
	goto loc_8280DD10;
loc_8280DD0C:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8280DD10:
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// b 0x833a01f0
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8280DD18"))) PPC_WEAK_FUNC(sub_8280DD18);
PPC_FUNC_IMPL(__imp__sub_8280DD18) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x833a019c
	ctx.lr = 0x8280DD20;
	__savegprlr_25(ctx, base);
	// stwu r1,-224(r1)
	ea = -224 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// mr r26,r5
	ctx.r26.u64 = ctx.r5.u64;
	// bl 0x82c10e98
	ctx.lr = 0x8280DD34;
	sub_82C10E98(ctx, base);
	// li r25,0
	ctx.r25.s64 = 0;
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// stw r25,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r25.u32);
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// addi r3,r11,10924
	ctx.r3.s64 = ctx.r11.s64 + 10924;
	// bl 0x82b017c0
	ctx.lr = 0x8280DD4C;
	sub_82B017C0(ctx, base);
	// lwz r4,84(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x8280dd64
	if (ctx.cr6.eq) goto loc_8280DD64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x83307c00
	ctx.lr = 0x8280DD64;
	sub_83307C00(ctx, base);
loc_8280DD64:
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8280cfe0
	ctx.lr = 0x8280DD6C;
	sub_8280CFE0(ctx, base);
	// addi r4,r1,104
	ctx.r4.s64 = ctx.r1.s64 + 104;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x8280ce38
	ctx.lr = 0x8280DD78;
	sub_8280CE38(ctx, base);
	// lwz r11,8(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 8);
	// lwz r11,32(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r11.u32);
	// beq cr6,0x8280ddec
	if (ctx.cr6.eq) goto loc_8280DDEC;
	// lis r10,744
	ctx.r10.s64 = 48758784;
	// mr r31,r11
	ctx.r31.u64 = ctx.r11.u64;
	// ori r10,r10,47662
	ctx.r10.u64 = ctx.r10.u64 | 47662;
	// mulli r3,r11,88
	ctx.r3.s64 = ctx.r11.s64 * 88;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// ble cr6,0x8280dda8
	if (!ctx.cr6.gt) goto loc_8280DDA8;
	// li r3,-1
	ctx.r3.s64 = -1;
loc_8280DDA8:
	// bl 0x82dffe50
	ctx.lr = 0x8280DDAC;
	sub_82DFFE50(ctx, base);
	// mr. r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// beq 0x8280dde8
	if (ctx.cr0.eq) goto loc_8280DDE8;
	// addic. r30,r31,-1
	ctx.xer.ca = ctx.r31.u32 > 0;
	ctx.r30.s64 = ctx.r31.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// blt 0x8280dddc
	if (ctx.cr0.lt) goto loc_8280DDDC;
	// addi r31,r29,52
	ctx.r31.s64 = ctx.r29.s64 + 52;
loc_8280DDC0:
	// addi r3,r31,-12
	ctx.r3.s64 = ctx.r31.s64 + -12;
	// bl 0x82c10e98
	ctx.lr = 0x8280DDC8;
	sub_82C10E98(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82c10e98
	ctx.lr = 0x8280DDD0;
	sub_82C10E98(ctx, base);
	// addic. r30,r30,-1
	ctx.xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// addi r31,r31,88
	ctx.r31.s64 = ctx.r31.s64 + 88;
	// bge 0x8280ddc0
	if (!ctx.cr0.lt) goto loc_8280DDC0;
loc_8280DDDC:
	// lwz r11,96(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// stw r29,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r29.u32);
	// b 0x8280ddf0
	goto loc_8280DDF0;
loc_8280DDE8:
	// lwz r11,96(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
loc_8280DDEC:
	// stw r25,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r25.u32);
loc_8280DDF0:
	// lwz r10,8(r27)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r27.u32 + 8);
	// lwz r10,28(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 28);
	// lwz r31,0(r10)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmplw cr6,r31,r10
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r10.u32, ctx.xer);
	// stw r31,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r31.u32);
	// beq cr6,0x8280deb0
	if (ctx.cr6.eq) goto loc_8280DEB0;
	// mr r29,r25
	ctx.r29.u64 = ctx.r25.u64;
loc_8280DE0C:
	// lwz r28,20(r31)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// lwz r30,16(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// beq cr6,0x8280de3c
	if (ctx.cr6.eq) goto loc_8280DE3C;
	// addi r11,r28,4
	ctx.r11.s64 = ctx.r28.s64 + 4;
loc_8280DE20:
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
	// bne 0x8280de20
	if (!ctx.cr0.eq) goto loc_8280DE20;
loc_8280DE3C:
	// lwz r11,60(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 60);
	// cmplw cr6,r11,r26
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r26.u32, ctx.xer);
	// beq cr6,0x8280de50
	if (ctx.cr6.eq) goto loc_8280DE50;
	// cmpwi cr6,r26,-1
	ctx.cr6.compare<int32_t>(ctx.r26.s32, -1, ctx.xer);
	// bne cr6,0x8280de80
	if (!ctx.cr6.eq) goto loc_8280DE80;
loc_8280DE50:
	// addi r3,r30,32
	ctx.r3.s64 = ctx.r30.s64 + 32;
	// bl 0x82e01bf8
	ctx.lr = 0x8280DE58;
	sub_82E01BF8(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8280de80
	if (ctx.cr0.eq) goto loc_8280DE80;
	// lwz r11,100(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// addi r7,r31,12
	ctx.r7.s64 = ctx.r31.s64 + 12;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// add r5,r29,r11
	ctx.r5.u64 = ctx.r29.u64 + ctx.r11.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// addi r29,r29,88
	ctx.r29.s64 = ctx.r29.s64 + 88;
	// bl 0x8280db80
	ctx.lr = 0x8280DE80;
	sub_8280DB80(ctx, base);
loc_8280DE80:
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// beq cr6,0x8280de90
	if (ctx.cr6.eq) goto loc_8280DE90;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82480108
	ctx.lr = 0x8280DE90;
	sub_82480108(ctx, base);
loc_8280DE90:
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x8282e648
	ctx.lr = 0x8280DE98;
	sub_8282E648(ctx, base);
	// lwz r11,8(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 8);
	// lwz r11,28(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// lwz r31,88(r1)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x8280de0c
	if (!ctx.cr6.eq) goto loc_8280DE0C;
	// lwz r11,96(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
loc_8280DEB0:
	// lwz r10,100(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8280df50
	if (ctx.cr6.eq) goto loc_8280DF50;
	// mr r26,r25
	ctx.r26.u64 = ctx.r25.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x8280df44
	if (!ctx.cr6.gt) goto loc_8280DF44;
	// mr r27,r25
	ctx.r27.u64 = ctx.r25.u64;
loc_8280DECC:
	// lwz r10,100(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// add r31,r27,r10
	ctx.r31.u64 = ctx.r27.u64 + ctx.r10.u64;
	// lwz r10,84(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 84);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8280df34
	if (ctx.cr6.eq) goto loc_8280DF34;
	// lwz r11,80(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	// mr r28,r25
	ctx.r28.u64 = ctx.r25.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x8280df24
	if (!ctx.cr6.gt) goto loc_8280DF24;
	// mr r29,r25
	ctx.r29.u64 = ctx.r25.u64;
loc_8280DEF4:
	// lwz r11,84(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 84);
	// add r30,r29,r11
	ctx.r30.u64 = ctx.r29.u64 + ctx.r11.u64;
	// lwz r3,20(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 20);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8280df10
	if (ctx.cr6.eq) goto loc_8280DF10;
	// bl 0x833a0b60
	ctx.lr = 0x8280DF0C;
	sub_833A0B60(ctx, base);
	// stw r25,20(r30)
	PPC_STORE_U32(ctx.r30.u32 + 20, ctx.r25.u32);
loc_8280DF10:
	// lwz r11,80(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// addi r29,r29,24
	ctx.r29.s64 = ctx.r29.s64 + 24;
	// cmpw cr6,r28,r11
	ctx.cr6.compare<int32_t>(ctx.r28.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x8280def4
	if (ctx.cr6.lt) goto loc_8280DEF4;
loc_8280DF24:
	// lwz r3,84(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 84);
	// bl 0x833a0b60
	ctx.lr = 0x8280DF2C;
	sub_833A0B60(ctx, base);
	// stw r25,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r25.u32);
	// lwz r11,96(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
loc_8280DF34:
	// addi r26,r26,1
	ctx.r26.s64 = ctx.r26.s64 + 1;
	// addi r27,r27,88
	ctx.r27.s64 = ctx.r27.s64 + 88;
	// cmpw cr6,r26,r11
	ctx.cr6.compare<int32_t>(ctx.r26.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x8280decc
	if (ctx.cr6.lt) goto loc_8280DECC;
loc_8280DF44:
	// lwz r3,100(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// bl 0x833a0b60
	ctx.lr = 0x8280DF4C;
	sub_833A0B60(ctx, base);
	// stw r25,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r25.u32);
loc_8280DF50:
	// lwz r3,84(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// bl 0x833a0b60
	ctx.lr = 0x8280DF58;
	sub_833A0B60(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82c10e98
	ctx.lr = 0x8280DF60;
	sub_82C10E98(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x833a01ec
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8280DF6C"))) PPC_WEAK_FUNC(sub_8280DF6C);
PPC_FUNC_IMPL(__imp__sub_8280DF6C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8280DF70"))) PPC_WEAK_FUNC(sub_8280DF70);
PPC_FUNC_IMPL(__imp__sub_8280DF70) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// stw r4,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r4.u32);
	// stw r5,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r5.u32);
	// addi r11,r11,10968
	ctx.r11.s64 = ctx.r11.s64 + 10968;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8280DF88"))) PPC_WEAK_FUNC(sub_8280DF88);
PPC_FUNC_IMPL(__imp__sub_8280DF88) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// addi r11,r11,10968
	ctx.r11.s64 = ctx.r11.s64 + 10968;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8280DF98"))) PPC_WEAK_FUNC(sub_8280DF98);
PPC_FUNC_IMPL(__imp__sub_8280DF98) {
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
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r11,r11,10968
	ctx.r11.s64 = ctx.r11.s64 + 10968;
	// clrlwi. r10,r4,31
	ctx.r10.u64 = ctx.r4.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// beq 0x8280dfc4
	if (ctx.cr0.eq) goto loc_8280DFC4;
	// bl 0x82e01568
	ctx.lr = 0x8280DFC4;
	sub_82E01568(ctx, base);
loc_8280DFC4:
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

__attribute__((alias("__imp__sub_8280DFDC"))) PPC_WEAK_FUNC(sub_8280DFDC);
PPC_FUNC_IMPL(__imp__sub_8280DFDC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8280DFE0"))) PPC_WEAK_FUNC(sub_8280DFE0);
PPC_FUNC_IMPL(__imp__sub_8280DFE0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// addi r9,r11,12452
	ctx.r9.s64 = ctx.r11.s64 + 12452;
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// lfs f0,0(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,164(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 164);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// blt cr6,0x8280e04c
	if (ctx.cr6.lt) goto loc_8280E04C;
	// li r10,144
	ctx.r10.s64 = 144;
	// lvx128 v63,r0,r4
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r4.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// rotlwi r8,r11,0
	ctx.r8.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// addi r7,r1,112
	ctx.r7.s64 = ctx.r1.s64 + 112;
	// lvx128 v62,r11,r10
	simde_mm_store_si128((simde__m128i*)ctx.v62.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r11.u32 + ctx.r10.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vsubfp128 v63,v63,v62
	ctx.fpscr.enableFlushModeUnconditional();
	simde_mm_store_ps(ctx.v63.f32, simde_mm_sub_ps(simde_mm_load_ps(ctx.v63.f32), simde_mm_load_ps(ctx.v62.f32)));
	// lfs f13,164(r8)
	ctx.fpscr.disableFlushModeUnconditional();
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 164);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f13,f13,f13
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f13.f64));
	// vmsum3fp128 v63,v63,v63
	ctx.fpscr.enableFlushModeUnconditional();
	simde_mm_store_ps(ctx.v63.f32, simde_mm_dp_ps(simde_mm_load_ps(ctx.v63.f32), simde_mm_load_ps(ctx.v63.f32), 0xEF));
	// stvx128 v63,r0,r7
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r7.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lfs f12,112(r1)
	ctx.fpscr.disableFlushModeUnconditional();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	ctx.f12.f64 = double(temp.f32);
	// fcmpu cr6,f12,f13
	ctx.cr6.compare(ctx.f12.f64, ctx.f13.f64);
	// bgt cr6,0x8280e04c
	if (ctx.cr6.gt) goto loc_8280E04C;
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x8280e1c4
	goto loc_8280E1C4;
loc_8280E04C:
	// lwz r10,8(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// li r8,192
	ctx.r8.s64 = 192;
	// li r7,176
	ctx.r7.s64 = 176;
	// addi r6,r1,112
	ctx.r6.s64 = ctx.r1.s64 + 112;
	// lvx128 v63,r10,r8
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r10.u32 + ctx.r8.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v62,r10,r7
	simde_mm_store_si128((simde__m128i*)ctx.v62.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r10.u32 + ctx.r7.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vsubfp128 v63,v62,v63
	ctx.fpscr.enableFlushMode();
	simde_mm_store_ps(ctx.v63.f32, simde_mm_sub_ps(simde_mm_load_ps(ctx.v62.f32), simde_mm_load_ps(ctx.v63.f32)));
	// vmsum3fp128 v63,v63,v63
	simde_mm_store_ps(ctx.v63.f32, simde_mm_dp_ps(simde_mm_load_ps(ctx.v63.f32), simde_mm_load_ps(ctx.v63.f32), 0xEF));
	// stvx128 v63,r0,r6
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r6.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lfs f13,112(r1)
	ctx.fpscr.disableFlushModeUnconditional();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// blt cr6,0x8280e1c0
	if (ctx.cr6.lt) goto loc_8280E1C0;
	// addi r10,r11,176
	ctx.r10.s64 = ctx.r11.s64 + 176;
	// addi r11,r11,192
	ctx.r11.s64 = ctx.r11.s64 + 192;
	// addi r8,r1,96
	ctx.r8.s64 = ctx.r1.s64 + 96;
	// addi r7,r1,112
	ctx.r7.s64 = ctx.r1.s64 + 112;
	// lvx128 v63,r0,r10
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r10.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v62,r0,r11
	simde_mm_store_si128((simde__m128i*)ctx.v62.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r11.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v63,r0,r8
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r8.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v62,r0,r7
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r7.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v62.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lfs f11,104(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,120(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	ctx.f10.f64 = double(temp.f32);
	// fcmpu cr6,f11,f10
	ctx.cr6.compare(ctx.f11.f64, ctx.f10.f64);
	// bge cr6,0x8280e0b4
	if (!ctx.cr6.lt) goto loc_8280E0B4;
	// fmr f12,f11
	ctx.f12.f64 = ctx.f11.f64;
	// b 0x8280e0b8
	goto loc_8280E0B8;
loc_8280E0B4:
	// fmr f12,f10
	ctx.fpscr.disableFlushMode();
	ctx.f12.f64 = ctx.f10.f64;
loc_8280E0B8:
	// lfs f7,100(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	ctx.f7.f64 = double(temp.f32);
	// lfs f6,116(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	ctx.f6.f64 = double(temp.f32);
	// fcmpu cr6,f7,f6
	ctx.cr6.compare(ctx.f7.f64, ctx.f6.f64);
	// bge cr6,0x8280e0d0
	if (!ctx.cr6.lt) goto loc_8280E0D0;
	// fmr f13,f7
	ctx.f13.f64 = ctx.f7.f64;
	// b 0x8280e0d4
	goto loc_8280E0D4;
loc_8280E0D0:
	// fmr f13,f6
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = ctx.f6.f64;
loc_8280E0D4:
	// lfs f9,96(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	ctx.f9.f64 = double(temp.f32);
	// lfs f8,112(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	ctx.f8.f64 = double(temp.f32);
	// fcmpu cr6,f9,f8
	ctx.cr6.compare(ctx.f9.f64, ctx.f8.f64);
	// bge cr6,0x8280e0ec
	if (!ctx.cr6.lt) goto loc_8280E0EC;
	// fmr f0,f9
	ctx.f0.f64 = ctx.f9.f64;
	// b 0x8280e0f0
	goto loc_8280E0F0;
loc_8280E0EC:
	// fmr f0,f8
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = ctx.f8.f64;
loc_8280E0F0:
	// addi r10,r1,84
	ctx.r10.s64 = ctx.r1.s64 + 84;
	// stfs f0,84(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// stfs f13,88(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// addi r8,r1,88
	ctx.r8.s64 = ctx.r1.s64 + 88;
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// stfs f12,80(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// lvlx128 v63,r0,r9
	temp.u32 = ctx.r9.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + (temp.u32 & ~0xF))), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// addi r9,r1,96
	ctx.r9.s64 = ctx.r1.s64 + 96;
	// fcmpu cr6,f11,f10
	ctx.cr6.compare(ctx.f11.f64, ctx.f10.f64);
	// lvlx128 v60,r0,r10
	temp.u32 = ctx.r10.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v60.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + (temp.u32 & ~0xF))), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// lvlx128 v62,r0,r11
	temp.u32 = ctx.r11.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v62.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + (temp.u32 & ~0xF))), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vrlimi128 v62,v63,4,3
	simde_mm_store_ps(ctx.v62.f32, simde_mm_blend_ps(simde_mm_load_ps(ctx.v62.f32), simde_mm_permute_ps(simde_mm_load_ps(ctx.v63.f32), 57), 4));
	// lvlx128 v61,r0,r8
	temp.u32 = ctx.r8.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v61.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + (temp.u32 & ~0xF))), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vrlimi128 v60,v61,4,3
	simde_mm_store_ps(ctx.v60.f32, simde_mm_blend_ps(simde_mm_load_ps(ctx.v60.f32), simde_mm_permute_ps(simde_mm_load_ps(ctx.v61.f32), 57), 4));
	// vrlimi128 v60,v62,2,2
	simde_mm_store_ps(ctx.v60.f32, simde_mm_blend_ps(simde_mm_load_ps(ctx.v60.f32), simde_mm_permute_ps(simde_mm_load_ps(ctx.v62.f32), 78), 2));
	// stvx128 v60,r0,r9
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r9.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v60.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// bgt cr6,0x8280e138
	if (ctx.cr6.gt) goto loc_8280E138;
	// fmr f11,f10
	ctx.f11.f64 = ctx.f10.f64;
loc_8280E138:
	// fcmpu cr6,f7,f6
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f7.f64, ctx.f6.f64);
	// ble cr6,0x8280e148
	if (!ctx.cr6.gt) goto loc_8280E148;
	// fmr f13,f7
	ctx.f13.f64 = ctx.f7.f64;
	// b 0x8280e14c
	goto loc_8280E14C;
loc_8280E148:
	// fmr f13,f6
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = ctx.f6.f64;
loc_8280E14C:
	// fcmpu cr6,f9,f8
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f9.f64, ctx.f8.f64);
	// ble cr6,0x8280e15c
	if (!ctx.cr6.gt) goto loc_8280E15C;
	// fmr f0,f9
	ctx.f0.f64 = ctx.f9.f64;
	// b 0x8280e160
	goto loc_8280E160;
loc_8280E15C:
	// fmr f0,f8
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = ctx.f8.f64;
loc_8280E160:
	// stfs f0,88(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// addi r11,r1,88
	ctx.r11.s64 = ctx.r1.s64 + 88;
	// stfs f13,80(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// stfs f11,84(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// addi r9,r1,84
	ctx.r9.s64 = ctx.r1.s64 + 84;
	// addi r8,r1,112
	ctx.r8.s64 = ctx.r1.s64 + 112;
	// addi r5,r1,112
	ctx.r5.s64 = ctx.r1.s64 + 112;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// lvlx128 v61,r0,r11
	temp.u32 = ctx.r11.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v61.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + (temp.u32 & ~0xF))), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// lvlx128 v62,r0,r10
	temp.u32 = ctx.r10.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v62.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + (temp.u32 & ~0xF))), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vrlimi128 v61,v62,4,3
	simde_mm_store_ps(ctx.v61.f32, simde_mm_blend_ps(simde_mm_load_ps(ctx.v61.f32), simde_mm_permute_ps(simde_mm_load_ps(ctx.v62.f32), 57), 4));
	// lvlx128 v62,r0,r9
	temp.u32 = ctx.r9.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v62.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + (temp.u32 & ~0xF))), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vrlimi128 v62,v63,4,3
	simde_mm_store_ps(ctx.v62.f32, simde_mm_blend_ps(simde_mm_load_ps(ctx.v62.f32), simde_mm_permute_ps(simde_mm_load_ps(ctx.v63.f32), 57), 4));
	// vrlimi128 v61,v62,2,2
	simde_mm_store_ps(ctx.v61.f32, simde_mm_blend_ps(simde_mm_load_ps(ctx.v61.f32), simde_mm_permute_ps(simde_mm_load_ps(ctx.v62.f32), 78), 2));
	// stvx128 v61,r0,r8
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r8.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v61.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// bl 0x82ea0d40
	ctx.lr = 0x8280E1A8;
	sub_82EA0D40(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x82ea0d78
	ctx.lr = 0x8280E1B4;
	sub_82EA0D78(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// li r3,1
	ctx.r3.s64 = 1;
	// bne 0x8280e1c4
	if (!ctx.cr0.eq) goto loc_8280E1C4;
loc_8280E1C0:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8280E1C4:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8280E1D8"))) PPC_WEAK_FUNC(sub_8280E1D8);
PPC_FUNC_IMPL(__imp__sub_8280E1D8) {
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
	// bl 0x8280df70
	ctx.lr = 0x8280E1F0;
	sub_8280DF70(ctx, base);
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r11,r11,10984
	ctx.r11.s64 = ctx.r11.s64 + 10984;
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

__attribute__((alias("__imp__sub_8280E214"))) PPC_WEAK_FUNC(sub_8280E214);
PPC_FUNC_IMPL(__imp__sub_8280E214) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8280E218"))) PPC_WEAK_FUNC(sub_8280E218);
PPC_FUNC_IMPL(__imp__sub_8280E218) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// addi r11,r11,10984
	ctx.r11.s64 = ctx.r11.s64 + 10984;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// b 0x8280df88
	sub_8280DF88(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8280E228"))) PPC_WEAK_FUNC(sub_8280E228);
PPC_FUNC_IMPL(__imp__sub_8280E228) {
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
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// beq cr6,0x8280e2a8
	if (ctx.cr6.eq) goto loc_8280E2A8;
	// cmpwi cr6,r5,1
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 1, ctx.xer);
	// beq cr6,0x8280e2a8
	if (ctx.cr6.eq) goto loc_8280E2A8;
	// cmpwi cr6,r5,2
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 2, ctx.xer);
	// beq cr6,0x8280e2d0
	if (ctx.cr6.eq) goto loc_8280E2D0;
	// cmpwi cr6,r5,3
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 3, ctx.xer);
	// bne cr6,0x8280e28c
	if (!ctx.cr6.eq) goto loc_8280E28C;
	// lis r11,-31888
	ctx.r11.s64 = -2089811968;
	// lwz r3,0(r4)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// addi r4,r11,-8864
	ctx.r4.s64 = ctx.r11.s64 + -8864;
	// bl 0x8339ffd8
	ctx.lr = 0x8280E274;
	sub_8339FFD8(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// subfic r11,r11,0
	ctx.xer.ca = ctx.r11.u32 <= 0;
	ctx.r11.s64 = 0 - ctx.r11.s64;
	// subfe r11,r11,r11
	temp.u8 = (~ctx.r11.u32 + ctx.r11.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r11.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 & ctx.r30.u64;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// b 0x8280e2d0
	goto loc_8280E2D0;
loc_8280E28C:
	// lis r10,-31888
	ctx.r10.s64 = -2089811968;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r10,r10,-8864
	ctx.r10.s64 = ctx.r10.s64 + -8864;
	// stb r11,4(r31)
	PPC_STORE_U8(ctx.r31.u32 + 4, ctx.r11.u8);
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// stb r11,5(r31)
	PPC_STORE_U8(ctx.r31.u32 + 5, ctx.r11.u8);
	// b 0x8280e2d0
	goto loc_8280E2D0;
loc_8280E2A8:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x8280e2d0
	if (ctx.cr6.eq) goto loc_8280E2D0;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// lwz r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// lwz r11,12(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// stw r11,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r11.u32);
loc_8280E2D0:
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

__attribute__((alias("__imp__sub_8280E2E8"))) PPC_WEAK_FUNC(sub_8280E2E8);
PPC_FUNC_IMPL(__imp__sub_8280E2E8) {
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
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// beq cr6,0x8280e368
	if (ctx.cr6.eq) goto loc_8280E368;
	// cmpwi cr6,r5,1
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 1, ctx.xer);
	// beq cr6,0x8280e368
	if (ctx.cr6.eq) goto loc_8280E368;
	// cmpwi cr6,r5,2
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 2, ctx.xer);
	// beq cr6,0x8280e390
	if (ctx.cr6.eq) goto loc_8280E390;
	// cmpwi cr6,r5,3
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 3, ctx.xer);
	// bne cr6,0x8280e34c
	if (!ctx.cr6.eq) goto loc_8280E34C;
	// lis r11,-31888
	ctx.r11.s64 = -2089811968;
	// lwz r3,0(r4)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// addi r4,r11,-8600
	ctx.r4.s64 = ctx.r11.s64 + -8600;
	// bl 0x8339ffd8
	ctx.lr = 0x8280E334;
	sub_8339FFD8(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// subfic r11,r11,0
	ctx.xer.ca = ctx.r11.u32 <= 0;
	ctx.r11.s64 = 0 - ctx.r11.s64;
	// subfe r11,r11,r11
	temp.u8 = (~ctx.r11.u32 + ctx.r11.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r11.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 & ctx.r30.u64;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// b 0x8280e390
	goto loc_8280E390;
loc_8280E34C:
	// lis r10,-31888
	ctx.r10.s64 = -2089811968;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r10,r10,-8600
	ctx.r10.s64 = ctx.r10.s64 + -8600;
	// stb r11,4(r31)
	PPC_STORE_U8(ctx.r31.u32 + 4, ctx.r11.u8);
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// stb r11,5(r31)
	PPC_STORE_U8(ctx.r31.u32 + 5, ctx.r11.u8);
	// b 0x8280e390
	goto loc_8280E390;
loc_8280E368:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x8280e390
	if (ctx.cr6.eq) goto loc_8280E390;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// lwz r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// lwz r11,12(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// stw r11,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r11.u32);
loc_8280E390:
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

__attribute__((alias("__imp__sub_8280E3A8"))) PPC_WEAK_FUNC(sub_8280E3A8);
PPC_FUNC_IMPL(__imp__sub_8280E3A8) {
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
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r11,r11,10984
	ctx.r11.s64 = ctx.r11.s64 + 10984;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// bl 0x8280df88
	ctx.lr = 0x8280E3D4;
	sub_8280DF88(ctx, base);
	// clrlwi. r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8280e3e4
	if (ctx.cr0.eq) goto loc_8280E3E4;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82e01568
	ctx.lr = 0x8280E3E4;
	sub_82E01568(ctx, base);
loc_8280E3E4:
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

__attribute__((alias("__imp__sub_8280E400"))) PPC_WEAK_FUNC(sub_8280E400);
PPC_FUNC_IMPL(__imp__sub_8280E400) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x833a01ac
	ctx.lr = 0x8280E408;
	__savegprlr_29(ctx, base);
	// ld r12,-4096(r1)
	ctx.r12.u64 = PPC_LOAD_U64(ctx.r1.u32 + -4096);
	// stwu r1,-4256(r1)
	ea = -4256 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r11,1
	ctx.r11.s64 = 1;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stb r11,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r11.u8);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// bl 0x82af6440
	ctx.lr = 0x8280E42C;
	sub_82AF6440(ctx, base);
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,-24600
	ctx.r4.s64 = ctx.r11.s64 + -24600;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82af64d0
	ctx.lr = 0x8280E440;
	sub_82AF64D0(ctx, base);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lis r10,-32250
	ctx.r10.s64 = -2113536000;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// addi r4,r10,11064
	ctx.r4.s64 = ctx.r10.s64 + 11064;
	// addi r5,r11,128
	ctx.r5.s64 = ctx.r11.s64 + 128;
	// bl 0x82af64e0
	ctx.lr = 0x8280E458;
	sub_82AF64E0(ctx, base);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lis r10,-32250
	ctx.r10.s64 = -2113536000;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// addi r4,r10,11048
	ctx.r4.s64 = ctx.r10.s64 + 11048;
	// addi r5,r11,160
	ctx.r5.s64 = ctx.r11.s64 + 160;
	// bl 0x82af64d8
	ctx.lr = 0x8280E470;
	sub_82AF64D8(ctx, base);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lis r10,-32250
	ctx.r10.s64 = -2113536000;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// addi r4,r10,11032
	ctx.r4.s64 = ctx.r10.s64 + 11032;
	// addi r5,r11,164
	ctx.r5.s64 = ctx.r11.s64 + 164;
	// bl 0x82af64d8
	ctx.lr = 0x8280E488;
	sub_82AF64D8(ctx, base);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lis r10,-32250
	ctx.r10.s64 = -2113536000;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// addi r4,r10,11020
	ctx.r4.s64 = ctx.r10.s64 + 11020;
	// addi r5,r11,176
	ctx.r5.s64 = ctx.r11.s64 + 176;
	// bl 0x82af64e0
	ctx.lr = 0x8280E4A0;
	sub_82AF64E0(ctx, base);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lis r10,-32250
	ctx.r10.s64 = -2113536000;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// addi r4,r10,11008
	ctx.r4.s64 = ctx.r10.s64 + 11008;
	// addi r5,r11,192
	ctx.r5.s64 = ctx.r11.s64 + 192;
	// bl 0x82af64e0
	ctx.lr = 0x8280E4B8;
	sub_82AF64E0(ctx, base);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lis r10,-32250
	ctx.r10.s64 = -2113536000;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// addi r4,r10,10996
	ctx.r4.s64 = ctx.r10.s64 + 10996;
	// addi r5,r11,208
	ctx.r5.s64 = ctx.r11.s64 + 208;
	// bl 0x82af64c0
	ctx.lr = 0x8280E4D0;
	sub_82AF64C0(ctx, base);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lis r10,-32250
	ctx.r10.s64 = -2113536000;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// addi r4,r10,10988
	ctx.r4.s64 = ctx.r10.s64 + 10988;
	// addi r5,r11,144
	ctx.r5.s64 = ctx.r11.s64 + 144;
	// bl 0x82af64e0
	ctx.lr = 0x8280E4E8;
	sub_82AF64E0(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82af64b8
	ctx.lr = 0x8280E4F4;
	sub_82AF64B8(ctx, base);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// lbz r5,80(r1)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// lwz r3,88(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 88);
	// bl 0x8280be38
	ctx.lr = 0x8280E508;
	sub_8280BE38(ctx, base);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82af6478
	ctx.lr = 0x8280E510;
	sub_82AF6478(ctx, base);
	// addi r1,r1,4256
	ctx.r1.s64 = ctx.r1.s64 + 4256;
	// b 0x833a01fc
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8280E518"))) PPC_WEAK_FUNC(sub_8280E518);
PPC_FUNC_IMPL(__imp__sub_8280E518) {
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
	// ld r12,-4096(r1)
	ctx.r12.u64 = PPC_LOAD_U64(ctx.r1.u32 + -4096);
	// stwu r1,-4336(r1)
	ea = -4336 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// addi r5,r11,11080
	ctx.r5.s64 = ctx.r11.s64 + 11080;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x82af5eb8
	ctx.lr = 0x8280E548;
	sub_82AF5EB8(ctx, base);
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8280e6b0
	if (ctx.cr6.eq) goto loc_8280E6B0;
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// bl 0x82af6440
	ctx.lr = 0x8280E55C;
	sub_82AF6440(ctx, base);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r3,88(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 88);
	// bl 0x8280be18
	ctx.lr = 0x8280E56C;
	sub_8280BE18(ctx, base);
	// lis r11,-31842
	ctx.r11.s64 = -2086797312;
	// stb r3,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r3.u8);
	// lis r10,-32230
	ctx.r10.s64 = -2112225280;
	// addi r11,r11,8272
	ctx.r11.s64 = ctx.r11.s64 + 8272;
	// addi r9,r1,160
	ctx.r9.s64 = ctx.r1.s64 + 160;
	// addi r8,r1,112
	ctx.r8.s64 = ctx.r1.s64 + 112;
	// addi r7,r10,24284
	ctx.r7.s64 = ctx.r10.s64 + 24284;
	// lis r6,-32245
	ctx.r6.s64 = -2113208320;
	// lfs f0,24284(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 24284);
	ctx.f0.f64 = double(temp.f32);
	// lvx128 v63,r0,r11
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r11.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r11,r1,128
	ctx.r11.s64 = ctx.r1.s64 + 128;
	// stvx128 v63,r0,r9
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r9.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r10,r6,12452
	ctx.r10.s64 = ctx.r6.s64 + 12452;
	// stvx128 v63,r0,r8
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r8.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r9,r1,144
	ctx.r9.s64 = ctx.r1.s64 + 144;
	// lvlx128 v63,r0,r7
	temp.u32 = ctx.r7.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + (temp.u32 & ~0xF))), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vor128 v62,v63,v63
	simde_mm_store_si128((simde__m128i*)ctx.v62.u8, simde_mm_load_si128((simde__m128i*)ctx.v63.u8));
	// vor128 v61,v63,v63
	simde_mm_store_si128((simde__m128i*)ctx.v61.u8, simde_mm_load_si128((simde__m128i*)ctx.v63.u8));
	// lvlx128 v60,r0,r10
	temp.u32 = ctx.r10.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v60.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + (temp.u32 & ~0xF))), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vrlimi128 v62,v63,4,3
	simde_mm_store_ps(ctx.v62.f32, simde_mm_blend_ps(simde_mm_load_ps(ctx.v62.f32), simde_mm_permute_ps(simde_mm_load_ps(ctx.v63.f32), 57), 4));
	// stfs f0,96(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// vrlimi128 v61,v60,4,3
	simde_mm_store_ps(ctx.v61.f32, simde_mm_blend_ps(simde_mm_load_ps(ctx.v61.f32), simde_mm_permute_ps(simde_mm_load_ps(ctx.v60.f32), 57), 4));
	// stfs f0,92(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 92, temp.u32);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// addi r4,r10,3189
	ctx.r4.s64 = ctx.r10.s64 + 3189;
	// vrlimi128 v62,v61,2,2
	simde_mm_store_ps(ctx.v62.f32, simde_mm_blend_ps(simde_mm_load_ps(ctx.v62.f32), simde_mm_permute_ps(simde_mm_load_ps(ctx.v61.f32), 78), 2));
	// stvx128 v62,r0,r11
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r11.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v62.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v62,r0,r9
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r9.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v62.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// bl 0x82e02670
	ctx.lr = 0x8280E5E4;
	sub_82E02670(ctx, base);
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,-24600
	ctx.r4.s64 = ctx.r11.s64 + -24600;
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// bl 0x82af64d0
	ctx.lr = 0x8280E5F8;
	sub_82AF64D0(ctx, base);
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// addi r5,r1,160
	ctx.r5.s64 = ctx.r1.s64 + 160;
	// addi r4,r11,11064
	ctx.r4.s64 = ctx.r11.s64 + 11064;
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// bl 0x82af64e0
	ctx.lr = 0x8280E60C;
	sub_82AF64E0(ctx, base);
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// addi r4,r11,11048
	ctx.r4.s64 = ctx.r11.s64 + 11048;
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// bl 0x82af64d8
	ctx.lr = 0x8280E620;
	sub_82AF64D8(ctx, base);
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// addi r5,r1,112
	ctx.r5.s64 = ctx.r1.s64 + 112;
	// addi r4,r11,10988
	ctx.r4.s64 = ctx.r11.s64 + 10988;
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// bl 0x82af64e0
	ctx.lr = 0x8280E634;
	sub_82AF64E0(ctx, base);
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// addi r4,r11,10996
	ctx.r4.s64 = ctx.r11.s64 + 10996;
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// bl 0x82af64c0
	ctx.lr = 0x8280E648;
	sub_82AF64C0(ctx, base);
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// addi r5,r1,92
	ctx.r5.s64 = ctx.r1.s64 + 92;
	// addi r4,r11,11032
	ctx.r4.s64 = ctx.r11.s64 + 11032;
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// bl 0x82af64d8
	ctx.lr = 0x8280E65C;
	sub_82AF64D8(ctx, base);
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// addi r5,r1,128
	ctx.r5.s64 = ctx.r1.s64 + 128;
	// addi r4,r11,11020
	ctx.r4.s64 = ctx.r11.s64 + 11020;
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// bl 0x82af64e0
	ctx.lr = 0x8280E670;
	sub_82AF64E0(ctx, base);
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// addi r5,r1,144
	ctx.r5.s64 = ctx.r1.s64 + 144;
	// addi r4,r11,11008
	ctx.r4.s64 = ctx.r11.s64 + 11008;
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// bl 0x82af64e0
	ctx.lr = 0x8280E684;
	sub_82AF64E0(ctx, base);
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// addi r10,r1,84
	ctx.r10.s64 = ctx.r1.s64 + 84;
	// subfic r11,r11,0
	ctx.xer.ca = ctx.r11.u32 <= 0;
	ctx.r11.s64 = 0 - ctx.r11.s64;
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// subfe r11,r11,r11
	temp.u8 = (~ctx.r11.u32 + ctx.r11.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r11.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r4,r11,r10
	ctx.r4.u64 = ctx.r11.u64 & ctx.r10.u64;
	// bl 0x82af64b0
	ctx.lr = 0x8280E6A0;
	sub_82AF64B0(ctx, base);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82e01bf0
	ctx.lr = 0x8280E6A8;
	sub_82E01BF0(ctx, base);
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// bl 0x82af6478
	ctx.lr = 0x8280E6B0;
	sub_82AF6478(ctx, base);
loc_8280E6B0:
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x82c10e98
	ctx.lr = 0x8280E6B8;
	sub_82C10E98(ctx, base);
	// addi r1,r1,4336
	ctx.r1.s64 = ctx.r1.s64 + 4336;
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

__attribute__((alias("__imp__sub_8280E6D0"))) PPC_WEAK_FUNC(sub_8280E6D0);
PPC_FUNC_IMPL(__imp__sub_8280E6D0) {
	PPC_FUNC_PROLOGUE();
	// cmpwi cr6,r5,4
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 4, ctx.xer);
	// beq cr6,0x8280e6dc
	if (ctx.cr6.eq) goto loc_8280E6DC;
	// b 0x8280e228
	sub_8280E228(ctx, base);
	return;
loc_8280E6DC:
	// lis r10,-31888
	ctx.r10.s64 = -2089811968;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r10,r10,-8864
	ctx.r10.s64 = ctx.r10.s64 + -8864;
	// stb r11,4(r4)
	PPC_STORE_U8(ctx.r4.u32 + 4, ctx.r11.u8);
	// stw r10,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r10.u32);
	// stb r11,5(r4)
	PPC_STORE_U8(ctx.r4.u32 + 5, ctx.r11.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8280E6F8"))) PPC_WEAK_FUNC(sub_8280E6F8);
PPC_FUNC_IMPL(__imp__sub_8280E6F8) {
	PPC_FUNC_PROLOGUE();
	// cmpwi cr6,r5,4
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 4, ctx.xer);
	// beq cr6,0x8280e704
	if (ctx.cr6.eq) goto loc_8280E704;
	// b 0x8280e2e8
	sub_8280E2E8(ctx, base);
	return;
loc_8280E704:
	// lis r10,-31888
	ctx.r10.s64 = -2089811968;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r10,r10,-8600
	ctx.r10.s64 = ctx.r10.s64 + -8600;
	// stb r11,4(r4)
	PPC_STORE_U8(ctx.r4.u32 + 4, ctx.r11.u8);
	// stw r10,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r10.u32);
	// stb r11,5(r4)
	PPC_STORE_U8(ctx.r4.u32 + 5, ctx.r11.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8280E720"))) PPC_WEAK_FUNC(sub_8280E720);
PPC_FUNC_IMPL(__imp__sub_8280E720) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x833a01a4
	ctx.lr = 0x8280E728;
	__savegprlr_27(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// bl 0x82af5df8
	ctx.lr = 0x8280E740;
	sub_82AF5DF8(ctx, base);
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// addi r5,r11,11180
	ctx.r5.s64 = ctx.r11.s64 + 11180;
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// bl 0x82af5ba8
	ctx.lr = 0x8280E754;
	sub_82AF5BA8(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r4,104(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// bl 0x82af5808
	ctx.lr = 0x8280E760;
	sub_82AF5808(ctx, base);
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// subfic r10,r10,0
	ctx.xer.ca = ctx.r10.u32 <= 0;
	ctx.r10.s64 = 0 - ctx.r10.s64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// subfe r10,r10,r10
	temp.u8 = (~ctx.r10.u32 + ctx.r10.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r10.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r10.u64 = ~ctx.r10.u64 + ctx.r10.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// and r4,r10,r11
	ctx.r4.u64 = ctx.r10.u64 & ctx.r11.u64;
	// bl 0x8280e518
	ctx.lr = 0x8280E780;
	sub_8280E518(ctx, base);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// li r28,0
	ctx.r28.s64 = 0;
	// lwz r10,28(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// lwz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// stw r11,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r11.u32);
	// beq cr6,0x8280e83c
	if (ctx.cr6.eq) goto loc_8280E83C;
loc_8280E79C:
	// lwz r29,20(r11)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// lwz r11,16(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x8280e7cc
	if (ctx.cr6.eq) goto loc_8280E7CC;
	// addi r10,r29,4
	ctx.r10.s64 = ctx.r29.s64 + 4;
loc_8280E7B0:
	// mfmsr r8
	ctx.r8.u64 = ctx.msr;
	// mtmsrd r13,1
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// lwarx r9,0,r10
	ctx.reserved.u32 = *(uint32_t*)(base + ctx.r10.u32);
	ctx.r9.u64 = __builtin_bswap32(ctx.reserved.u32);
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// stwcx. r9,0,r10
	ctx.cr0.lt = 0;
	ctx.cr0.gt = 0;
	ctx.cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ctx.r10.u32), ctx.reserved.s32, __builtin_bswap32(ctx.r9.s32));
	ctx.cr0.so = ctx.xer.so;
	// mtmsrd r8,1
	ctx.msr = (ctx.r8.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// bne 0x8280e7b0
	if (!ctx.cr0.eq) goto loc_8280E7B0;
loc_8280E7CC:
	// lwz r10,60(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 60);
	// cmplw cr6,r10,r30
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r30.u32, ctx.xer);
	// beq cr6,0x8280e7e0
	if (ctx.cr6.eq) goto loc_8280E7E0;
	// cmpwi cr6,r30,-1
	ctx.cr6.compare<int32_t>(ctx.r30.s32, -1, ctx.xer);
	// bne cr6,0x8280e808
	if (!ctx.cr6.eq) goto loc_8280E808;
loc_8280E7E0:
	// addi r3,r11,32
	ctx.r3.s64 = ctx.r11.s64 + 32;
	// bl 0x82e01bf8
	ctx.lr = 0x8280E7E8;
	sub_82E01BF8(ctx, base);
	// mr. r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// beq 0x8280e808
	if (ctx.cr0.eq) goto loc_8280E808;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82af5eb8
	ctx.lr = 0x8280E7FC;
	sub_82AF5EB8(ctx, base);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// bl 0x82c10e98
	ctx.lr = 0x8280E808;
	sub_82C10E98(ctx, base);
loc_8280E808:
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x8280e818
	if (ctx.cr6.eq) goto loc_8280E818;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82480108
	ctx.lr = 0x8280E818;
	sub_82480108(ctx, base);
loc_8280E818:
	// addi r3,r1,92
	ctx.r3.s64 = ctx.r1.s64 + 92;
	// bl 0x8282e648
	ctx.lr = 0x8280E820;
	sub_8282E648(ctx, base);
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r11,92(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// lwz r10,28(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 28);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x8280e79c
	if (!ctx.cr6.eq) goto loc_8280E79C;
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// bne cr6,0x8280e86c
	if (!ctx.cr6.eq) goto loc_8280E86C;
loc_8280E83C:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82c10e98
	ctx.lr = 0x8280E844;
	sub_82C10E98(ctx, base);
	// lwz r3,108(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8280e854
	if (ctx.cr6.eq) goto loc_8280E854;
	// bl 0x82480108
	ctx.lr = 0x8280E854;
	sub_82480108(ctx, base);
loc_8280E854:
	// li r31,1
	ctx.r31.s64 = 1;
loc_8280E858:
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x82af5e60
	ctx.lr = 0x8280E860;
	sub_82AF5E60(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x833a01f4
	__restgprlr_27(ctx, base);
	return;
loc_8280E86C:
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82e044f0
	ctx.lr = 0x8280E878;
	sub_82E044F0(ctx, base);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// lwz r31,104(r1)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// bl 0x82e01bf8
	ctx.lr = 0x8280E884;
	sub_82E01BF8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// bl 0x82af58c8
	ctx.lr = 0x8280E894;
	sub_82AF58C8(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bne 0x8280e8c4
	if (!ctx.cr0.eq) goto loc_8280E8C4;
	// bl 0x82e01bf0
	ctx.lr = 0x8280E8A4;
	sub_82E01BF0(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82c10e98
	ctx.lr = 0x8280E8AC;
	sub_82C10E98(ctx, base);
	// lwz r3,108(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8280e8bc
	if (ctx.cr6.eq) goto loc_8280E8BC;
	// bl 0x82480108
	ctx.lr = 0x8280E8BC;
	sub_82480108(ctx, base);
loc_8280E8BC:
	// li r31,0
	ctx.r31.s64 = 0;
	// b 0x8280e858
	goto loc_8280E858;
loc_8280E8C4:
	// bl 0x82e01bf0
	ctx.lr = 0x8280E8C8;
	sub_82E01BF0(ctx, base);
	// b 0x8280e83c
	goto loc_8280E83C;
}

__attribute__((alias("__imp__sub_8280E8CC"))) PPC_WEAK_FUNC(sub_8280E8CC);
PPC_FUNC_IMPL(__imp__sub_8280E8CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8280E8D0"))) PPC_WEAK_FUNC(sub_8280E8D0);
PPC_FUNC_IMPL(__imp__sub_8280E8D0) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lbz r6,12(r3)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r3.u32 + 12);
	// lwz r5,8(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// lwz r3,4(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_8280E8E8"))) PPC_WEAK_FUNC(sub_8280E8E8);
PPC_FUNC_IMPL(__imp__sub_8280E8E8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x833a01ac
	ctx.lr = 0x8280E8F0;
	__savegprlr_29(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// li r29,0
	ctx.r29.s64 = 0;
	// lis r11,-31888
	ctx.r11.s64 = -2089811968;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r30,r11,-8360
	ctx.r30.s64 = ctx.r11.s64 + -8360;
	// stb r29,0(r10)
	PPC_STORE_U8(ctx.r10.u32 + 0, ctx.r29.u8);
	// addi r6,r3,8
	ctx.r6.s64 = ctx.r3.s64 + 8;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lbz r7,80(r1)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// bl 0x82a4a088
	ctx.lr = 0x8280E91C;
	sub_82A4A088(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8280e930
	if (ctx.cr0.eq) goto loc_8280E930;
	// ori r11,r30,1
	ctx.r11.u64 = ctx.r30.u64 | 1;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// b 0x8280e934
	goto loc_8280E934;
loc_8280E930:
	// stw r29,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r29.u32);
loc_8280E934:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x833a01fc
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8280E93C"))) PPC_WEAK_FUNC(sub_8280E93C);
PPC_FUNC_IMPL(__imp__sub_8280E93C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8280E940"))) PPC_WEAK_FUNC(sub_8280E940);
PPC_FUNC_IMPL(__imp__sub_8280E940) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x833a01ac
	ctx.lr = 0x8280E948;
	__savegprlr_29(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// li r29,0
	ctx.r29.s64 = 0;
	// lis r11,-31888
	ctx.r11.s64 = -2089811968;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r30,r11,-8352
	ctx.r30.s64 = ctx.r11.s64 + -8352;
	// stb r29,0(r10)
	PPC_STORE_U8(ctx.r10.u32 + 0, ctx.r29.u8);
	// addi r6,r3,8
	ctx.r6.s64 = ctx.r3.s64 + 8;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lbz r7,80(r1)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// bl 0x82a4a088
	ctx.lr = 0x8280E974;
	sub_82A4A088(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8280e988
	if (ctx.cr0.eq) goto loc_8280E988;
	// ori r11,r30,1
	ctx.r11.u64 = ctx.r30.u64 | 1;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// b 0x8280e98c
	goto loc_8280E98C;
loc_8280E988:
	// stw r29,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r29.u32);
loc_8280E98C:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x833a01fc
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8280E994"))) PPC_WEAK_FUNC(sub_8280E994);
PPC_FUNC_IMPL(__imp__sub_8280E994) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8280E998"))) PPC_WEAK_FUNC(sub_8280E998);
PPC_FUNC_IMPL(__imp__sub_8280E998) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x833a019c
	ctx.lr = 0x8280E9A0;
	__savegprlr_25(ctx, base);
	// stfd f31,-72(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -72, ctx.f31.u64);
	// ld r12,-4096(r1)
	ctx.r12.u64 = PPC_LOAD_U64(ctx.r1.u32 + -4096);
	// stwu r1,-4480(r1)
	ea = -4480 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// li r10,317
	ctx.r10.s64 = 317;
	// addi r11,r11,11192
	ctx.r11.s64 = ctx.r11.s64 + 11192;
	// stw r10,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r10.u32);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// stw r11,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r11.u32);
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// mr r25,r5
	ctx.r25.u64 = ctx.r5.u64;
	// mr r27,r6
	ctx.r27.u64 = ctx.r6.u64;
	// bl 0x82e01860
	ctx.lr = 0x8280E9DC;
	sub_82E01860(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// li r3,48
	ctx.r3.s64 = 48;
	// lwz r5,0(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// bl 0x82e015d8
	ctx.lr = 0x8280E9F0;
	sub_82E015D8(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x8280ea14
	if (ctx.cr0.eq) goto loc_8280EA14;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82e016a0
	ctx.lr = 0x8280EA00;
	sub_82E016A0(ctx, base);
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// mr r26,r31
	ctx.r26.u64 = ctx.r31.u64;
	// addi r11,r11,10920
	ctx.r11.s64 = ctx.r11.s64 + 10920;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// b 0x8280ea18
	goto loc_8280EA18;
loc_8280EA14:
	// li r26,0
	ctx.r26.s64 = 0;
loc_8280EA18:
	// cmplwi cr6,r26,0
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, 0, ctx.xer);
	// beq cr6,0x8280ea28
	if (ctx.cr6.eq) goto loc_8280EA28;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x82e016b8
	ctx.lr = 0x8280EA28;
	sub_82E016B8(ctx, base);
loc_8280EA28:
	// addi r3,r1,272
	ctx.r3.s64 = ctx.r1.s64 + 272;
	// bl 0x82af6440
	ctx.lr = 0x8280EA30;
	sub_82AF6440(ctx, base);
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,11160
	ctx.r4.s64 = ctx.r11.s64 + 11160;
	// addi r3,r1,272
	ctx.r3.s64 = ctx.r1.s64 + 272;
	// bl 0x82af6508
	ctx.lr = 0x8280EA44;
	sub_82AF6508(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r31,r26,16
	ctx.r31.s64 = ctx.r26.s64 + 16;
	// addi r4,r11,11984
	ctx.r4.s64 = ctx.r11.s64 + 11984;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// addi r3,r1,272
	ctx.r3.s64 = ctx.r1.s64 + 272;
	// bl 0x82af64e0
	ctx.lr = 0x8280EA5C;
	sub_82AF64E0(ctx, base);
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// addi r30,r26,32
	ctx.r30.s64 = ctx.r26.s64 + 32;
	// addi r4,r11,11168
	ctx.r4.s64 = ctx.r11.s64 + 11168;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// addi r3,r1,272
	ctx.r3.s64 = ctx.r1.s64 + 272;
	// bl 0x82af64f8
	ctx.lr = 0x8280EA74;
	sub_82AF64F8(ctx, base);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// addi r3,r1,272
	ctx.r3.s64 = ctx.r1.s64 + 272;
	// bl 0x82af64b8
	ctx.lr = 0x8280EA80;
	sub_82AF64B8(ctx, base);
	// clrlwi. r11,r27,24
	ctx.r11.u64 = ctx.r27.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8280eb98
	if (!ctx.cr0.eq) goto loc_8280EB98;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8280dfe0
	ctx.lr = 0x8280EA94;
	sub_8280DFE0(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8280eb98
	if (ctx.cr0.eq) goto loc_8280EB98;
	// lwz r10,8(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// li r9,128
	ctx.r9.s64 = 128;
	// lvx128 v63,r0,r31
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r31.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lis r11,-32230
	ctx.r11.s64 = -2112225280;
	// addi r28,r11,24284
	ctx.r28.s64 = ctx.r11.s64 + 24284;
	// lvx128 v62,r10,r9
	simde_mm_store_si128((simde__m128i*)ctx.v62.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r10.u32 + ctx.r9.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vaddfp128 v63,v63,v62
	ctx.fpscr.enableFlushMode();
	simde_mm_store_ps(ctx.v63.f32, simde_mm_add_ps(simde_mm_load_ps(ctx.v63.f32), simde_mm_load_ps(ctx.v62.f32)));
	// lfs f0,24284(r11)
	ctx.fpscr.disableFlushModeUnconditional();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 24284);
	ctx.f0.f64 = double(temp.f32);
	// stvx128 v63,r0,r31
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r31.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lwz r11,8(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// lfs f13,160(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 160);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// beq cr6,0x8280eb98
	if (ctx.cr6.eq) goto loc_8280EB98;
	// li r27,144
	ctx.r27.s64 = 144;
	// addi r10,r1,144
	ctx.r10.s64 = ctx.r1.s64 + 144;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// addi r3,r1,208
	ctx.r3.s64 = ctx.r1.s64 + 208;
	// lvx128 v62,r11,r27
	simde_mm_store_si128((simde__m128i*)ctx.v62.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r11.u32 + ctx.r27.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vaddfp128 v63,v63,v62
	ctx.fpscr.enableFlushModeUnconditional();
	simde_mm_store_ps(ctx.v63.f32, simde_mm_add_ps(simde_mm_load_ps(ctx.v63.f32), simde_mm_load_ps(ctx.v62.f32)));
	// lfs f31,2800(r9)
	ctx.fpscr.disableFlushModeUnconditional();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 2800);
	ctx.f31.f64 = double(temp.f32);
	// stvx128 v63,r0,r10
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r10.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lfs f0,160(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 160);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f1,f0,f31
	ctx.f1.f64 = double(float(ctx.f0.f64 * ctx.f31.f64));
	// bl 0x82e9f678
	ctx.lr = 0x8280EAFC;
	sub_82E9F678(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r5,r1,144
	ctx.r5.s64 = ctx.r1.s64 + 144;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x82ee9408
	ctx.lr = 0x8280EB0C;
	sub_82EE9408(ctx, base);
	// addi r11,r1,160
	ctx.r11.s64 = ctx.r1.s64 + 160;
	// addi r10,r1,144
	ctx.r10.s64 = ctx.r1.s64 + 144;
	// lis r9,-32245
	ctx.r9.s64 = -2113208320;
	// addi r8,r1,176
	ctx.r8.s64 = ctx.r1.s64 + 176;
	// addi r9,r9,12452
	ctx.r9.s64 = ctx.r9.s64 + 12452;
	// lvx128 v63,r0,r11
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r11.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r4,r1,176
	ctx.r4.s64 = ctx.r1.s64 + 176;
	// stvx128 v63,r0,r10
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r10.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// lwz r11,8(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// lvx128 v62,r11,r27
	simde_mm_store_si128((simde__m128i*)ctx.v62.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r11.u32 + ctx.r27.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vsubfp128 v63,v63,v62
	ctx.fpscr.enableFlushMode();
	simde_mm_store_ps(ctx.v63.f32, simde_mm_sub_ps(simde_mm_load_ps(ctx.v63.f32), simde_mm_load_ps(ctx.v62.f32)));
	// stvx128 v63,r0,r31
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r31.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lwz r11,8(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// lvlx128 v63,r0,r9
	temp.u32 = ctx.r9.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + (temp.u32 & ~0xF))), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// lvlx128 v62,r0,r28
	temp.u32 = ctx.r28.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v62.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + (temp.u32 & ~0xF))), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vrlimi128 v62,v63,4,3
	simde_mm_store_ps(ctx.v62.f32, simde_mm_blend_ps(simde_mm_load_ps(ctx.v62.f32), simde_mm_permute_ps(simde_mm_load_ps(ctx.v63.f32), 57), 4));
	// vor128 v63,v62,v62
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_load_si128((simde__m128i*)ctx.v62.u8));
	// vrlimi128 v63,v62,2,2
	simde_mm_store_ps(ctx.v63.f32, simde_mm_blend_ps(simde_mm_load_ps(ctx.v63.f32), simde_mm_permute_ps(simde_mm_load_ps(ctx.v62.f32), 78), 2));
	// stvx128 v63,r0,r8
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r8.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lfs f0,160(r11)
	ctx.fpscr.disableFlushModeUnconditional();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 160);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f1,f0,f31
	ctx.f1.f64 = double(float(ctx.f0.f64 * ctx.f31.f64));
	// bl 0x82e9fd98
	ctx.lr = 0x8280EB68;
	sub_82E9FD98(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82ee9688
	ctx.lr = 0x8280EB78;
	sub_82EE9688(ctx, base);
	// lfs f0,116(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,120(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,124(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 124);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,112(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	ctx.f11.f64 = double(temp.f32);
	// stfs f11,0(r30)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r30.u32 + 0, temp.u32);
	// stfs f0,4(r30)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r30.u32 + 4, temp.u32);
	// stfs f13,8(r30)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r30.u32 + 8, temp.u32);
	// stfs f12,12(r30)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r30.u32 + 12, temp.u32);
loc_8280EB98:
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r26,0
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, 0, ctx.xer);
	// stw r26,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r26.u32);
	// stw r11,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r11.u32);
	// beq cr6,0x8280ebb4
	if (ctx.cr6.eq) goto loc_8280EBB4;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x82e016b8
	ctx.lr = 0x8280EBB4;
	sub_82E016B8(ctx, base);
loc_8280EBB4:
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// addi r4,r25,24
	ctx.r4.s64 = ctx.r25.s64 + 24;
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// bl 0x82816ec8
	ctx.lr = 0x8280EBC4;
	sub_82816EC8(ctx, base);
	// cmplwi cr6,r26,0
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, 0, ctx.xer);
	// beq cr6,0x8280ebd4
	if (ctx.cr6.eq) goto loc_8280EBD4;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x82e016e0
	ctx.lr = 0x8280EBD4;
	sub_82E016E0(ctx, base);
loc_8280EBD4:
	// addi r3,r1,272
	ctx.r3.s64 = ctx.r1.s64 + 272;
	// bl 0x82af6478
	ctx.lr = 0x8280EBDC;
	sub_82AF6478(ctx, base);
	// cmplwi cr6,r26,0
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, 0, ctx.xer);
	// beq cr6,0x8280ebec
	if (ctx.cr6.eq) goto loc_8280EBEC;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x82e016e0
	ctx.lr = 0x8280EBEC;
	sub_82E016E0(ctx, base);
loc_8280EBEC:
	// addi r1,r1,4480
	ctx.r1.s64 = ctx.r1.s64 + 4480;
	// lfd f31,-72(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -72);
	// b 0x833a01ec
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8280EBF8"))) PPC_WEAK_FUNC(sub_8280EBF8);
PPC_FUNC_IMPL(__imp__sub_8280EBF8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x833a01a4
	ctx.lr = 0x8280EC00;
	__savegprlr_27(ctx, base);
	// ld r12,-4096(r1)
	ctx.r12.u64 = PPC_LOAD_U64(ctx.r1.u32 + -4096);
	// stwu r1,-4336(r1)
	ea = -4336 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// mr r27,r6
	ctx.r27.u64 = ctx.r6.u64;
	// bl 0x82af6440
	ctx.lr = 0x8280EC20;
	sub_82AF6440(ctx, base);
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// li r31,0
	ctx.r31.s64 = 0;
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r31,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r31.u32);
	// lis r9,-32252
	ctx.r9.s64 = -2113667072;
	// stw r10,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r10.u32);
	// addi r5,r1,104
	ctx.r5.s64 = ctx.r1.s64 + 104;
	// lfs f0,12452(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12452);
	ctx.f0.f64 = double(temp.f32);
	// stw r31,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r31.u32);
	// stfs f0,88(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// stw r31,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r31.u32);
	// stw r31,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r31.u32);
	// addi r4,r9,-13896
	ctx.r4.s64 = ctx.r9.s64 + -13896;
	// stw r31,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r31.u32);
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x82af6508
	ctx.lr = 0x8280EC60;
	sub_82AF6508(ctx, base);
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// addi r4,r11,2828
	ctx.r4.s64 = ctx.r11.s64 + 2828;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x82af64d8
	ctx.lr = 0x8280EC74;
	sub_82AF64D8(ctx, base);
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// addi r5,r1,100
	ctx.r5.s64 = ctx.r1.s64 + 100;
	// addi r4,r11,11136
	ctx.r4.s64 = ctx.r11.s64 + 11136;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x82af6508
	ctx.lr = 0x8280EC88;
	sub_82AF6508(ctx, base);
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// addi r4,r11,11124
	ctx.r4.s64 = ctx.r11.s64 + 11124;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x82af6508
	ctx.lr = 0x8280EC9C;
	sub_82AF6508(ctx, base);
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,11108
	ctx.r4.s64 = ctx.r11.s64 + 11108;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x82af6508
	ctx.lr = 0x8280ECB0;
	sub_82AF6508(ctx, base);
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// addi r4,r11,11092
	ctx.r4.s64 = ctx.r11.s64 + 11092;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x82af6508
	ctx.lr = 0x8280ECC4;
	sub_82AF6508(ctx, base);
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r5,r1,92
	ctx.r5.s64 = ctx.r1.s64 + 92;
	// addi r4,r11,6940
	ctx.r4.s64 = ctx.r11.s64 + 6940;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x82af6508
	ctx.lr = 0x8280ECD8;
	sub_82AF6508(ctx, base);
	// stb r27,120(r1)
	PPC_STORE_U8(ctx.r1.u32 + 120, ctx.r27.u8);
	// lwz r9,120(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	// lis r10,-32127
	ctx.r10.s64 = -2105475072;
	// lwz r11,40(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 40);
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// stw r11,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r11.u32);
	// addi r10,r10,-5736
	ctx.r10.s64 = ctx.r10.s64 + -5736;
	// stw r31,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r31.u32);
	// stw r10,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r10.u32);
	// stw r9,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r9.u32);
	// stw r30,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r30.u32);
	// ld r4,112(r1)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r1.u32 + 112);
	// ld r5,120(r1)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r1.u32 + 120);
	// bl 0x8280e940
	ctx.lr = 0x8280ED10;
	sub_8280E940(ctx, base);
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// addi r4,r11,11152
	ctx.r4.s64 = ctx.r11.s64 + 11152;
	// addi r5,r1,128
	ctx.r5.s64 = ctx.r1.s64 + 128;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x82af6558
	ctx.lr = 0x8280ED24;
	sub_82AF6558(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x82af64b8
	ctx.lr = 0x8280ED30;
	sub_82AF64B8(ctx, base);
	// lwz r11,40(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 40);
	// lwz r10,104(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// stw r10,16(r11)
	PPC_STORE_U32(ctx.r11.u32 + 16, ctx.r10.u32);
	// lfs f0,88(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f0.f64 = double(temp.f32);
	// lwz r11,40(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 40);
	// stfs f0,20(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 20, temp.u32);
	// lwz r11,100(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// lwz r10,40(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 40);
	// stb r11,8(r10)
	PPC_STORE_U8(ctx.r10.u32 + 8, ctx.r11.u8);
	// lwz r11,96(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// lwz r10,40(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 40);
	// stb r11,9(r10)
	PPC_STORE_U8(ctx.r10.u32 + 9, ctx.r11.u8);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r10,40(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 40);
	// stb r11,10(r10)
	PPC_STORE_U8(ctx.r10.u32 + 10, ctx.r11.u8);
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r10,40(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 40);
	// stb r11,11(r10)
	PPC_STORE_U8(ctx.r10.u32 + 11, ctx.r11.u8);
	// lwz r11,40(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 40);
	// lwz r10,92(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// stb r10,12(r11)
	PPC_STORE_U8(ctx.r11.u32 + 12, ctx.r10.u8);
	// bl 0x82af6478
	ctx.lr = 0x8280ED8C;
	sub_82AF6478(ctx, base);
	// addi r1,r1,4336
	ctx.r1.s64 = ctx.r1.s64 + 4336;
	// b 0x833a01f4
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8280ED94"))) PPC_WEAK_FUNC(sub_8280ED94);
PPC_FUNC_IMPL(__imp__sub_8280ED94) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8280ED98"))) PPC_WEAK_FUNC(sub_8280ED98);
PPC_FUNC_IMPL(__imp__sub_8280ED98) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x833a0190
	ctx.lr = 0x8280EDA0;
	__savegprlr_22(ctx, base);
	// stfd f30,-104(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -104, ctx.f30.u64);
	// stfd f31,-96(r1)
	PPC_STORE_U64(ctx.r1.u32 + -96, ctx.f31.u64);
	// li r12,-128
	ctx.r12.s64 = -128;
	// stvx128 v127,r1,r12
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r1.u32 + ctx.r12.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v127.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// ld r12,-4096(r1)
	ctx.r12.u64 = PPC_LOAD_U64(ctx.r1.u32 + -4096);
	// stwu r1,-4528(r1)
	ea = -4528 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// addi r3,r1,272
	ctx.r3.s64 = ctx.r1.s64 + 272;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// mr r22,r6
	ctx.r22.u64 = ctx.r6.u64;
	// mr r31,r7
	ctx.r31.u64 = ctx.r7.u64;
	// bl 0x82af6440
	ctx.lr = 0x8280EDD4;
	sub_82AF6440(ctx, base);
	// lis r23,-31844
	ctx.r23.s64 = -2086928384;
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// li r10,231
	ctx.r10.s64 = 231;
	// addi r24,r11,11192
	ctx.r24.s64 = ctx.r11.s64 + 11192;
	// stw r10,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r10.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r24,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r24.u32);
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// lwz r11,15776(r23)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r23.u32 + 15776);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bl 0x82e01860
	ctx.lr = 0x8280EE00;
	sub_82E01860(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addi r4,r1,120
	ctx.r4.s64 = ctx.r1.s64 + 120;
	// li r3,40
	ctx.r3.s64 = 40;
	// lwz r5,0(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// bl 0x82e015d8
	ctx.lr = 0x8280EE14;
	sub_82E015D8(ctx, base);
	// li r25,0
	ctx.r25.s64 = 0;
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8280ee2c
	if (ctx.cr0.eq) goto loc_8280EE2C;
	// bl 0x828041f0
	ctx.lr = 0x8280EE24;
	sub_828041F0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// b 0x8280ee30
	goto loc_8280EE30;
loc_8280EE2C:
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
loc_8280EE30:
	// addi r26,r29,40
	ctx.r26.s64 = ctx.r29.s64 + 40;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x82802028
	ctx.lr = 0x8280EE3C;
	sub_82802028(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// addi r4,r11,11984
	ctx.r4.s64 = ctx.r11.s64 + 11984;
	// addi r3,r1,272
	ctx.r3.s64 = ctx.r1.s64 + 272;
	// bl 0x82af64e0
	ctx.lr = 0x8280EE50;
	sub_82AF64E0(ctx, base);
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// addi r30,r29,16
	ctx.r30.s64 = ctx.r29.s64 + 16;
	// addi r4,r11,11168
	ctx.r4.s64 = ctx.r11.s64 + 11168;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// addi r3,r1,272
	ctx.r3.s64 = ctx.r1.s64 + 272;
	// bl 0x82af64f8
	ctx.lr = 0x8280EE68;
	sub_82AF64F8(ctx, base);
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,-1536
	ctx.r4.s64 = ctx.r11.s64 + -1536;
	// addi r3,r1,272
	ctx.r3.s64 = ctx.r1.s64 + 272;
	// bl 0x82af6508
	ctx.lr = 0x8280EE7C;
	sub_82AF6508(ctx, base);
	// lis r11,-32127
	ctx.r11.s64 = -2105475072;
	// stb r31,104(r1)
	PPC_STORE_U8(ctx.r1.u32 + 104, ctx.r31.u8);
	// addi r3,r1,208
	ctx.r3.s64 = ctx.r1.s64 + 208;
	// lwz r10,104(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// addi r11,r11,-5128
	ctx.r11.s64 = ctx.r11.s64 + -5128;
	// stw r11,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r11.u32);
	// stw r10,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r10.u32);
	// stw r25,208(r1)
	PPC_STORE_U32(ctx.r1.u32 + 208, ctx.r25.u32);
	// stw r27,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r27.u32);
	// stw r29,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r29.u32);
	// ld r4,96(r1)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r1.u32 + 96);
	// ld r5,104(r1)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r1.u32 + 104);
	// bl 0x8280e8e8
	ctx.lr = 0x8280EEB0;
	sub_8280E8E8(ctx, base);
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// addi r4,r11,11268
	ctx.r4.s64 = ctx.r11.s64 + 11268;
	// addi r5,r1,208
	ctx.r5.s64 = ctx.r1.s64 + 208;
	// addi r3,r1,272
	ctx.r3.s64 = ctx.r1.s64 + 272;
	// bl 0x82af6558
	ctx.lr = 0x8280EEC4;
	sub_82AF6558(ctx, base);
	// addi r4,r1,272
	ctx.r4.s64 = ctx.r1.s64 + 272;
	// lwz r3,44(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 44);
	// bl 0x82ae2010
	ctx.lr = 0x8280EED0;
	sub_82AE2010(ctx, base);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// addi r3,r1,272
	ctx.r3.s64 = ctx.r1.s64 + 272;
	// bl 0x82af64b8
	ctx.lr = 0x8280EEDC;
	sub_82AF64B8(ctx, base);
	// lis r10,-31842
	ctx.r10.s64 = -2086797312;
	// lis r11,-32230
	ctx.r11.s64 = -2112225280;
	// addi r10,r10,8272
	ctx.r10.s64 = ctx.r10.s64 + 8272;
	// clrlwi. r9,r31,24
	ctx.r9.u64 = ctx.r31.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// lfs f30,24284(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 24284);
	ctx.f30.f64 = double(temp.f32);
	// addi r28,r11,24284
	ctx.r28.s64 = ctx.r11.s64 + 24284;
	// lvx128 v127,r0,r10
	simde_mm_store_si128((simde__m128i*)ctx.v127.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r10.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// fmr f31,f30
	ctx.f31.f64 = ctx.f30.f64;
	// bne 0x8280ef24
	if (!ctx.cr0.eq) goto loc_8280EF24;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x8280dfe0
	ctx.lr = 0x8280EF0C;
	sub_8280DFE0(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8280ef24
	if (ctx.cr0.eq) goto loc_8280EF24;
	// lwz r11,8(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 8);
	// li r10,128
	ctx.r10.s64 = 128;
	// lfs f31,160(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 160);
	ctx.f31.f64 = double(temp.f32);
	// lvx128 v127,r11,r10
	simde_mm_store_si128((simde__m128i*)ctx.v127.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r11.u32 + ctx.r10.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
loc_8280EF24:
	// lvx128 v63,r0,r29
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r29.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// fcmpu cr6,f31,f30
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f31.f64, ctx.f30.f64);
	// vaddfp128 v63,v63,v127
	ctx.fpscr.enableFlushModeUnconditional();
	simde_mm_store_ps(ctx.v63.f32, simde_mm_add_ps(simde_mm_load_ps(ctx.v63.f32), simde_mm_load_ps(ctx.v127.f32)));
	// stvx128 v63,r0,r29
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r29.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// beq cr6,0x8280effc
	if (ctx.cr6.eq) goto loc_8280EFFC;
	// lwz r11,8(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 8);
	// li r31,144
	ctx.r31.s64 = 144;
	// addi r10,r1,160
	ctx.r10.s64 = ctx.r1.s64 + 160;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// addi r3,r1,208
	ctx.r3.s64 = ctx.r1.s64 + 208;
	// lvx128 v62,r11,r31
	simde_mm_store_si128((simde__m128i*)ctx.v62.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r11.u32 + ctx.r31.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vaddfp128 v63,v63,v62
	simde_mm_store_ps(ctx.v63.f32, simde_mm_add_ps(simde_mm_load_ps(ctx.v63.f32), simde_mm_load_ps(ctx.v62.f32)));
	// lfs f0,2800(r9)
	ctx.fpscr.disableFlushModeUnconditional();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 2800);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f31,f31,f0
	ctx.f31.f64 = double(float(ctx.f31.f64 * ctx.f0.f64));
	// stvx128 v63,r0,r10
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r10.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x82e9f678
	ctx.lr = 0x8280EF68;
	sub_82E9F678(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r5,r1,160
	ctx.r5.s64 = ctx.r1.s64 + 160;
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// bl 0x82ee9408
	ctx.lr = 0x8280EF78;
	sub_82EE9408(ctx, base);
	// addi r11,r1,192
	ctx.r11.s64 = ctx.r1.s64 + 192;
	// addi r10,r1,160
	ctx.r10.s64 = ctx.r1.s64 + 160;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// lis r9,-32245
	ctx.r9.s64 = -2113208320;
	// addi r8,r1,176
	ctx.r8.s64 = ctx.r1.s64 + 176;
	// addi r9,r9,12452
	ctx.r9.s64 = ctx.r9.s64 + 12452;
	// lvx128 v63,r0,r11
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r11.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r4,r1,176
	ctx.r4.s64 = ctx.r1.s64 + 176;
	// stvx128 v63,r0,r10
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r10.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// lwz r11,8(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 8);
	// lvx128 v62,r11,r31
	simde_mm_store_si128((simde__m128i*)ctx.v62.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r11.u32 + ctx.r31.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vsubfp128 v63,v63,v62
	ctx.fpscr.enableFlushModeUnconditional();
	simde_mm_store_ps(ctx.v63.f32, simde_mm_sub_ps(simde_mm_load_ps(ctx.v63.f32), simde_mm_load_ps(ctx.v62.f32)));
	// stvx128 v63,r0,r29
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r29.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvlx128 v63,r0,r9
	temp.u32 = ctx.r9.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + (temp.u32 & ~0xF))), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// lvlx128 v62,r0,r28
	temp.u32 = ctx.r28.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v62.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + (temp.u32 & ~0xF))), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vrlimi128 v62,v63,4,3
	simde_mm_store_ps(ctx.v62.f32, simde_mm_blend_ps(simde_mm_load_ps(ctx.v62.f32), simde_mm_permute_ps(simde_mm_load_ps(ctx.v63.f32), 57), 4));
	// vor128 v63,v62,v62
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_load_si128((simde__m128i*)ctx.v62.u8));
	// vrlimi128 v63,v62,2,2
	simde_mm_store_ps(ctx.v63.f32, simde_mm_blend_ps(simde_mm_load_ps(ctx.v63.f32), simde_mm_permute_ps(simde_mm_load_ps(ctx.v62.f32), 78), 2));
	// stvx128 v63,r0,r8
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r8.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// bl 0x82e9fd98
	ctx.lr = 0x8280EFCC;
	sub_82E9FD98(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x82ee9688
	ctx.lr = 0x8280EFDC;
	sub_82EE9688(ctx, base);
	// lfs f0,144(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 144);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,148(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 148);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,152(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 152);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,156(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 156);
	ctx.f11.f64 = double(temp.f32);
	// stfs f0,0(r30)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r30.u32 + 0, temp.u32);
	// stfs f13,4(r30)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r30.u32 + 4, temp.u32);
	// stfs f12,8(r30)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r30.u32 + 8, temp.u32);
	// stfs f11,12(r30)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r30.u32 + 12, temp.u32);
loc_8280EFFC:
	// li r11,270
	ctx.r11.s64 = 270;
	// stw r24,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r24.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r11,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r11.u32);
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x82e01860
	ctx.lr = 0x8280F014;
	sub_82E01860(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// li r3,48
	ctx.r3.s64 = 48;
	// lwz r5,0(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// bl 0x82e015d8
	ctx.lr = 0x8280F028;
	sub_82E015D8(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x8280f048
	if (ctx.cr0.eq) goto loc_8280F048;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82e016a0
	ctx.lr = 0x8280F038;
	sub_82E016A0(ctx, base);
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// addi r11,r11,10920
	ctx.r11.s64 = ctx.r11.s64 + 10920;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// b 0x8280f04c
	goto loc_8280F04C;
loc_8280F048:
	// mr r31,r25
	ctx.r31.u64 = ctx.r25.u64;
loc_8280F04C:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x8280f05c
	if (ctx.cr6.eq) goto loc_8280F05C;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82e016b8
	ctx.lr = 0x8280F05C;
	sub_82E016B8(ctx, base);
loc_8280F05C:
	// li r11,16
	ctx.r11.s64 = 16;
	// lvx128 v63,r0,r29
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r29.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r31,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r31.u32);
	// stw r25,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r25.u32);
	// stvx128 v63,r31,r11
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r31.u32 + ctx.r11.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lfs f0,0(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,32(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 32, temp.u32);
	// lfs f0,4(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,36(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 36, temp.u32);
	// lfs f0,8(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,40(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 40, temp.u32);
	// lfs f0,12(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,44(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 44, temp.u32);
	// bl 0x82e016b8
	ctx.lr = 0x8280F098;
	sub_82E016B8(ctx, base);
	// lwz r11,0(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// addi r5,r1,112
	ctx.r5.s64 = ctx.r1.s64 + 112;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// addi r4,r11,24
	ctx.r4.s64 = ctx.r11.s64 + 24;
	// bl 0x82816ec8
	ctx.lr = 0x8280F0AC;
	sub_82816EC8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82e016e0
	ctx.lr = 0x8280F0B4;
	sub_82E016E0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82e016e0
	ctx.lr = 0x8280F0BC;
	sub_82E016E0(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// stw r11,0(r22)
	PPC_STORE_U32(ctx.r22.u32 + 0, ctx.r11.u32);
	// lwz r10,15776(r23)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r23.u32 + 15776);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x8280f0e8
	if (!ctx.cr6.eq) goto loc_8280F0E8;
	// lwz r4,8(r27)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r27.u32 + 8);
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// lwz r5,224(r4)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r4.u32 + 224);
	// bl 0x82815820
	ctx.lr = 0x8280F0E0;
	sub_82815820(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// stw r11,0(r22)
	PPC_STORE_U32(ctx.r22.u32 + 0, ctx.r11.u32);
loc_8280F0E8:
	// lwz r11,8(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 8);
	// addi r3,r1,272
	ctx.r3.s64 = ctx.r1.s64 + 272;
	// lwz r11,224(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 224);
	// stw r11,60(r29)
	PPC_STORE_U32(ctx.r29.u32 + 60, ctx.r11.u32);
	// bl 0x82af6478
	ctx.lr = 0x8280F0FC;
	sub_82AF6478(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,4528
	ctx.r1.s64 = ctx.r1.s64 + 4528;
	// li r0,-128
	ctx.r0.s64 = -128;
	// lvx128 v127,r1,r0
	simde_mm_store_si128((simde__m128i*)ctx.v127.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r1.u32 + ctx.r0.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lfd f30,-104(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -104);
	// lfd f31,-96(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -96);
	// b 0x833a01e0
	__restgprlr_22(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8280F118"))) PPC_WEAK_FUNC(sub_8280F118);
PPC_FUNC_IMPL(__imp__sub_8280F118) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x833a017c
	ctx.lr = 0x8280F120;
	__savegprlr_17(ctx, base);
	// stwu r1,-560(r1)
	ea = -560 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// mr r18,r4
	ctx.r18.u64 = ctx.r4.u64;
	// mr r22,r5
	ctx.r22.u64 = ctx.r5.u64;
	// mr r21,r6
	ctx.r21.u64 = ctx.r6.u64;
	// mr r20,r7
	ctx.r20.u64 = ctx.r7.u64;
	// mr r25,r8
	ctx.r25.u64 = ctx.r8.u64;
	// bl 0x82af5df8
	ctx.lr = 0x8280F144;
	sub_82AF5DF8(ctx, base);
	// mr r6,r22
	ctx.r6.u64 = ctx.r22.u64;
	// lwz r4,4(r27)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r27.u32 + 4);
	// mr r5,r18
	ctx.r5.u64 = ctx.r18.u64;
	// addi r3,r1,120
	ctx.r3.s64 = ctx.r1.s64 + 120;
	// bl 0x82813668
	ctx.lr = 0x8280F158;
	sub_82813668(ctx, base);
	// lwz r11,120(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8280f188
	if (!ctx.cr6.eq) goto loc_8280F188;
loc_8280F164:
	// lwz r3,124(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 124);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8280f174
	if (ctx.cr6.eq) goto loc_8280F174;
	// bl 0x82480108
	ctx.lr = 0x8280F174;
	sub_82480108(ctx, base);
loc_8280F174:
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82af5e60
	ctx.lr = 0x8280F17C;
	sub_82AF5E60(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
loc_8280F180:
	// addi r1,r1,560
	ctx.r1.s64 = ctx.r1.s64 + 560;
	// b 0x833a01cc
	__restgprlr_17(ctx, base);
	return;
loc_8280F188:
	// lwz r11,8(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 8);
	// mr r5,r22
	ctx.r5.u64 = ctx.r22.u64;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// lwz r4,88(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 88);
	// bl 0x8280bf88
	ctx.lr = 0x8280F19C;
	sub_8280BF88(ctx, base);
	// lwz r11,120(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	// addi r3,r1,224
	ctx.r3.s64 = ctx.r1.s64 + 224;
	// mr r4,r11
	ctx.r4.u64 = ctx.r11.u64;
	// mr r31,r11
	ctx.r31.u64 = ctx.r11.u64;
	// bl 0x82e18410
	ctx.lr = 0x8280F1B0;
	sub_82E18410(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// mr r3,r18
	ctx.r3.u64 = ctx.r18.u64;
	// lwz r30,0(r11)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// bl 0x82e01bf8
	ctx.lr = 0x8280F1C0;
	sub_82E01BF8(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83110a18
	ctx.lr = 0x8280F1CC;
	sub_83110A18(ctx, base);
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// mr r7,r29
	ctx.r7.u64 = ctx.r29.u64;
	// bl 0x82af5ca8
	ctx.lr = 0x8280F1E4;
	sub_82AF5CA8(ctx, base);
	// lwz r3,228(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 228);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8280f1f4
	if (ctx.cr6.eq) goto loc_8280F1F4;
	// bl 0x82480108
	ctx.lr = 0x8280F1F4;
	sub_82480108(ctx, base);
loc_8280F1F4:
	// lwz r4,128(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// bne cr6,0x8280f224
	if (!ctx.cr6.eq) goto loc_8280F224;
	// lwz r3,132(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8280f210
	if (ctx.cr6.eq) goto loc_8280F210;
	// bl 0x82480108
	ctx.lr = 0x8280F210;
	sub_82480108(ctx, base);
loc_8280F210:
	// lwz r3,148(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 148);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8280f164
	if (ctx.cr6.eq) goto loc_8280F164;
	// bl 0x82480108
	ctx.lr = 0x8280F220;
	sub_82480108(ctx, base);
	// b 0x8280f164
	goto loc_8280F164;
loc_8280F224:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82af5808
	ctx.lr = 0x8280F22C;
	sub_82AF5808(ctx, base);
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// subfic r10,r10,0
	ctx.xer.ca = ctx.r10.u32 <= 0;
	ctx.r10.s64 = 0 - ctx.r10.s64;
	// subfe r10,r10,r10
	temp.u8 = (~ctx.r10.u32 + ctx.r10.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r10.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r10.u64 = ~ctx.r10.u64 + ctx.r10.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and. r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 & ctx.r11.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8280f290
	if (!ctx.cr0.eq) goto loc_8280F290;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82c10e98
	ctx.lr = 0x8280F24C;
	sub_82C10E98(ctx, base);
	// lwz r3,132(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8280f25c
	if (ctx.cr6.eq) goto loc_8280F25C;
	// bl 0x82480108
	ctx.lr = 0x8280F25C;
	sub_82480108(ctx, base);
loc_8280F25C:
	// lwz r3,148(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 148);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8280f26c
	if (ctx.cr6.eq) goto loc_8280F26C;
	// bl 0x82480108
	ctx.lr = 0x8280F26C;
	sub_82480108(ctx, base);
loc_8280F26C:
	// lwz r3,124(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 124);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8280f27c
	if (ctx.cr6.eq) goto loc_8280F27C;
	// bl 0x82480108
	ctx.lr = 0x8280F27C;
	sub_82480108(ctx, base);
loc_8280F27C:
	// li r31,0
	ctx.r31.s64 = 0;
loc_8280F280:
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82af5e60
	ctx.lr = 0x8280F288;
	sub_82AF5E60(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// b 0x8280f180
	goto loc_8280F180;
loc_8280F290:
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82af6140
	ctx.lr = 0x8280F29C;
	sub_82AF6140(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bl 0x82c10e98
	ctx.lr = 0x8280F2B0;
	sub_82C10E98(ctx, base);
	// clrlwi. r19,r25,24
	ctx.r19.u64 = ctx.r25.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r19.s32, 0, ctx.xer);
	// bne 0x8280f344
	if (!ctx.cr0.eq) goto loc_8280F344;
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8280f344
	if (ctx.cr6.eq) goto loc_8280F344;
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// addi r4,r11,11080
	ctx.r4.s64 = ctx.r11.s64 + 11080;
	// bl 0x82e02670
	ctx.lr = 0x8280F2D4;
	sub_82E02670(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82af6290
	ctx.lr = 0x8280F2E0;
	sub_82AF6290(ctx, base);
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// bl 0x82e023a8
	ctx.lr = 0x8280F2E8;
	sub_82E023A8(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82e01bf0
	ctx.lr = 0x8280F2F4;
	sub_82E01BF0(ctx, base);
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x82e01bf0
	ctx.lr = 0x8280F2FC;
	sub_82E01BF0(ctx, base);
	// clrlwi. r11,r31,24
	ctx.r11.u64 = ctx.r31.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8280f344
	if (ctx.cr0.eq) goto loc_8280F344;
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// mr r5,r22
	ctx.r5.u64 = ctx.r22.u64;
	// subfic r11,r11,0
	ctx.xer.ca = ctx.r11.u32 <= 0;
	ctx.r11.s64 = 0 - ctx.r11.s64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// subfe r11,r11,r11
	temp.u8 = (~ctx.r11.u32 + ctx.r11.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r11.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r4,r11,r10
	ctx.r4.u64 = ctx.r11.u64 & ctx.r10.u64;
	// bl 0x8280e400
	ctx.lr = 0x8280F324;
	sub_8280E400(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82af61e8
	ctx.lr = 0x8280F330;
	sub_82AF61E8(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bl 0x82c10e98
	ctx.lr = 0x8280F344;
	sub_82C10E98(ctx, base);
loc_8280F344:
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x82898f80
	ctx.lr = 0x8280F354;
	sub_82898F80(ctx, base);
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// subfic r10,r10,0
	ctx.xer.ca = ctx.r10.u32 <= 0;
	ctx.r10.s64 = 0 - ctx.r10.s64;
	// subfe r10,r10,r10
	temp.u8 = (~ctx.r10.u32 + ctx.r10.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r10.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r10.u64 = ~ctx.r10.u64 + ctx.r10.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and. r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 & ctx.r11.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8280f628
	if (ctx.cr0.eq) goto loc_8280F628;
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// lis r26,-31844
	ctx.r26.s64 = -2086928384;
	// li r24,0
	ctx.r24.s64 = 0;
	// addi r23,r11,11192
	ctx.r23.s64 = ctx.r11.s64 + 11192;
loc_8280F37C:
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x82af6290
	ctx.lr = 0x8280F388;
	sub_82AF6290(ctx, base);
	// addi r3,r1,208
	ctx.r3.s64 = ctx.r1.s64 + 208;
	// lwz r4,4(r27)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r27.u32 + 4);
	// bl 0x82810f18
	ctx.lr = 0x8280F394;
	sub_82810F18(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// addi r3,r1,136
	ctx.r3.s64 = ctx.r1.s64 + 136;
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// bl 0x82804ed8
	ctx.lr = 0x8280F3A8;
	sub_82804ED8(ctx, base);
	// lwz r3,212(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 212);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8280f3b8
	if (ctx.cr6.eq) goto loc_8280F3B8;
	// bl 0x82480108
	ctx.lr = 0x8280F3B8;
	sub_82480108(ctx, base);
loc_8280F3B8:
	// lwz r11,136(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 136);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8280f3e8
	if (!ctx.cr6.eq) goto loc_8280F3E8;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82af61e8
	ctx.lr = 0x8280F3D0;
	sub_82AF61E8(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bl 0x82c10e98
	ctx.lr = 0x8280F3E4;
	sub_82C10E98(ctx, base);
	// b 0x8280f5f8
	goto loc_8280F5F8;
loc_8280F3E8:
	// addi r3,r1,256
	ctx.r3.s64 = ctx.r1.s64 + 256;
	// bl 0x82803ec8
	ctx.lr = 0x8280F3F0;
	sub_82803EC8(ctx, base);
	// addi r3,r1,256
	ctx.r3.s64 = ctx.r1.s64 + 256;
	// lwz r4,136(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 136);
	// bl 0x82803be0
	ctx.lr = 0x8280F3FC;
	sub_82803BE0(ctx, base);
	// li r11,129
	ctx.r11.s64 = 129;
	// stw r23,196(r1)
	PPC_STORE_U32(ctx.r1.u32 + 196, ctx.r23.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r24,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r24.u32);
	// addi r3,r1,232
	ctx.r3.s64 = ctx.r1.s64 + 232;
	// stw r24,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r24.u32);
	// stw r11,192(r1)
	PPC_STORE_U32(ctx.r1.u32 + 192, ctx.r11.u32);
	// bl 0x82e01860
	ctx.lr = 0x8280F41C;
	sub_82E01860(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addi r4,r1,192
	ctx.r4.s64 = ctx.r1.s64 + 192;
	// li r3,80
	ctx.r3.s64 = 80;
	// lwz r5,0(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// bl 0x82e015d8
	ctx.lr = 0x8280F430;
	sub_82E015D8(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8280f448
	if (ctx.cr0.eq) goto loc_8280F448;
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// bl 0x82804070
	ctx.lr = 0x8280F440;
	sub_82804070(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// b 0x8280f44c
	goto loc_8280F44C;
loc_8280F448:
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
loc_8280F44C:
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// bl 0x8280d2a8
	ctx.lr = 0x8280F454;
	sub_8280D2A8(ctx, base);
	// addi r3,r1,256
	ctx.r3.s64 = ctx.r1.s64 + 256;
	// lwz r31,104(r1)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// bl 0x82801880
	ctx.lr = 0x8280F460;
	sub_82801880(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,180
	ctx.r3.s64 = ctx.r1.s64 + 180;
	// bl 0x82ae36c0
	ctx.lr = 0x8280F46C;
	sub_82AE36C0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r31,44
	ctx.r3.s64 = ctx.r31.s64 + 44;
	// bl 0x828010f0
	ctx.lr = 0x8280F478;
	sub_828010F0(ctx, base);
	// lwz r3,180(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 180);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8280f488
	if (ctx.cr6.eq) goto loc_8280F488;
	// bl 0x82e016e0
	ctx.lr = 0x8280F488;
	sub_82E016E0(ctx, base);
loc_8280F488:
	// addi r3,r1,256
	ctx.r3.s64 = ctx.r1.s64 + 256;
	// lwz r31,104(r1)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// bl 0x82801080
	ctx.lr = 0x8280F494;
	sub_82801080(ctx, base);
	// stfs f1,48(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r31.u32 + 48, temp.u32);
	// lwz r11,104(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// stw r22,60(r11)
	PPC_STORE_U32(ctx.r11.u32 + 60, ctx.r22.u32);
	// mr r7,r25
	ctx.r7.u64 = ctx.r25.u64;
	// lwz r11,104(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// addi r6,r1,92
	ctx.r6.s64 = ctx.r1.s64 + 92;
	// stw r21,64(r11)
	PPC_STORE_U32(ctx.r11.u32 + 64, ctx.r21.u32);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// lwz r11,104(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// stw r19,52(r11)
	PPC_STORE_U32(ctx.r11.u32 + 52, ctx.r19.u32);
	// lwz r9,80(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r4,104(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// lwz r11,15776(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 15776);
	// stw r11,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r11.u32);
	// subfic r11,r9,0
	ctx.xer.ca = ctx.r9.u32 <= 0;
	ctx.r11.s64 = 0 - ctx.r9.s64;
	// subfe r11,r11,r11
	temp.u8 = (~ctx.r11.u32 + ctx.r11.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r11.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r5,r11,r10
	ctx.r5.u64 = ctx.r11.u64 & ctx.r10.u64;
	// bl 0x8280ed98
	ctx.lr = 0x8280F4E0;
	sub_8280ED98(ctx, base);
	// addi r3,r1,256
	ctx.r3.s64 = ctx.r1.s64 + 256;
	// lwz r4,4(r27)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r27.u32 + 4);
	// bl 0x82801ae0
	ctx.lr = 0x8280F4EC;
	sub_82801AE0(ctx, base);
	// lwz r11,144(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 144);
	// lwz r31,92(r1)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// lwz r11,24(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, ctx.xer);
	// bge cr6,0x8280f508
	if (!ctx.cr6.lt) goto loc_8280F508;
	// add r31,r11,r31
	ctx.r31.u64 = ctx.r11.u64 + ctx.r31.u64;
	// stw r31,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r31.u32);
loc_8280F508:
	// lwz r11,8(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 8);
	// addi r5,r1,92
	ctx.r5.s64 = ctx.r1.s64 + 92;
	// addi r3,r1,236
	ctx.r3.s64 = ctx.r1.s64 + 236;
	// addi r4,r11,24
	ctx.r4.s64 = ctx.r11.s64 + 24;
	// lwz r30,28(r11)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// bl 0x82a0d398
	ctx.lr = 0x8280F520;
	sub_82A0D398(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplw cr6,r11,r30
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r30.u32, ctx.xer);
	// beq cr6,0x8280f578
	if (ctx.cr6.eq) goto loc_8280F578;
	// lwz r30,8(r27)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r27.u32 + 8);
	// mr r28,r31
	ctx.r28.u64 = ctx.r31.u64;
	// addi r29,r30,24
	ctx.r29.s64 = ctx.r30.s64 + 24;
loc_8280F538:
	// addi r31,r31,10000
	ctx.r31.s64 = ctx.r31.s64 + 10000;
	// addi r5,r1,92
	ctx.r5.s64 = ctx.r1.s64 + 92;
	// stw r31,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r31.u32);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r3,r1,184
	ctx.r3.s64 = ctx.r1.s64 + 184;
	// lwz r17,28(r30)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r30.u32 + 28);
	// bl 0x82a0d398
	ctx.lr = 0x8280F554;
	sub_82A0D398(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplw cr6,r11,r17
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r17.u32, ctx.xer);
	// bne cr6,0x8280f538
	if (!ctx.cr6.eq) goto loc_8280F538;
	// stw r28,200(r1)
	PPC_STORE_U32(ctx.r1.u32 + 200, ctx.r28.u32);
	// addi r5,r1,200
	ctx.r5.s64 = ctx.r1.s64 + 200;
	// stw r31,204(r1)
	PPC_STORE_U32(ctx.r1.u32 + 204, ctx.r31.u32);
	// addi r4,r1,160
	ctx.r4.s64 = ctx.r1.s64 + 160;
	// addi r3,r1,240
	ctx.r3.s64 = ctx.r1.s64 + 240;
	// bl 0x82885920
	ctx.lr = 0x8280F578;
	sub_82885920(ctx, base);
loc_8280F578:
	// addi r5,r1,104
	ctx.r5.s64 = ctx.r1.s64 + 104;
	// lwz r3,8(r27)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r27.u32 + 8);
	// addi r4,r1,92
	ctx.r4.s64 = ctx.r1.s64 + 92;
	// bl 0x82815ed8
	ctx.lr = 0x8280F588;
	sub_82815ED8(ctx, base);
	// clrlwi. r11,r20,24
	ctx.r11.u64 = ctx.r20.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8280f5c0
	if (ctx.cr0.eq) goto loc_8280F5C0;
	// addi r3,r1,256
	ctx.r3.s64 = ctx.r1.s64 + 256;
	// lwz r4,92(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// bl 0x82801ee0
	ctx.lr = 0x8280F59C;
	sub_82801EE0(ctx, base);
	// addi r3,r1,216
	ctx.r3.s64 = ctx.r1.s64 + 216;
	// lwz r4,4(r27)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r27.u32 + 4);
	// bl 0x82a24688
	ctx.lr = 0x8280F5A8;
	sub_82A24688(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// addi r4,r1,104
	ctx.r4.s64 = ctx.r1.s64 + 104;
	// addi r3,r1,256
	ctx.r3.s64 = ctx.r1.s64 + 256;
	// bl 0x82802748
	ctx.lr = 0x8280F5B8;
	sub_82802748(ctx, base);
	// addi r3,r1,216
	ctx.r3.s64 = ctx.r1.s64 + 216;
	// bl 0x82e01548
	ctx.lr = 0x8280F5C0;
	sub_82E01548(ctx, base);
loc_8280F5C0:
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// bl 0x82af61e8
	ctx.lr = 0x8280F5CC;
	sub_82AF61E8(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bl 0x82c10e98
	ctx.lr = 0x8280F5E0;
	sub_82C10E98(ctx, base);
	// lwz r3,108(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8280f5f0
	if (ctx.cr6.eq) goto loc_8280F5F0;
	// bl 0x82480108
	ctx.lr = 0x8280F5F0;
	sub_82480108(ctx, base);
loc_8280F5F0:
	// addi r3,r1,256
	ctx.r3.s64 = ctx.r1.s64 + 256;
	// bl 0x82803fb0
	ctx.lr = 0x8280F5F8;
	sub_82803FB0(ctx, base);
loc_8280F5F8:
	// lwz r3,140(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 140);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8280f608
	if (ctx.cr6.eq) goto loc_8280F608;
	// bl 0x82480108
	ctx.lr = 0x8280F608;
	sub_82480108(ctx, base);
loc_8280F608:
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x82e01bf0
	ctx.lr = 0x8280F610;
	sub_82E01BF0(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// subfic r11,r11,0
	ctx.xer.ca = ctx.r11.u32 <= 0;
	ctx.r11.s64 = 0 - ctx.r11.s64;
	// subfe r11,r11,r11
	temp.u8 = (~ctx.r11.u32 + ctx.r11.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r11.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and. r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 & ctx.r10.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8280f37c
	if (!ctx.cr0.eq) goto loc_8280F37C;
loc_8280F628:
	// lwz r11,168(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 168);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8280f728
	if (ctx.cr6.eq) goto loc_8280F728;
	// lwz r11,8(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 8);
	// lwz r11,28(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// lwz r30,0(r11)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// stw r30,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r30.u32);
	// beq cr6,0x8280f728
	if (ctx.cr6.eq) goto loc_8280F728;
	// lwz r31,164(r1)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 164);
loc_8280F650:
	// lwz r11,16(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// cmplwi cr6,r19,0
	ctx.cr6.compare<uint32_t>(ctx.r19.u32, 0, ctx.xer);
	// beq cr6,0x8280f6bc
	if (ctx.cr6.eq) goto loc_8280F6BC;
	// lwz r10,60(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 60);
	// cmplw cr6,r10,r22
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r22.u32, ctx.xer);
	// bne cr6,0x8280f70c
	if (!ctx.cr6.eq) goto loc_8280F70C;
	// lwz r11,52(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 52);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8280f70c
	if (ctx.cr6.eq) goto loc_8280F70C;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// b 0x8280f6b0
	goto loc_8280F6B0;
loc_8280F680:
	// lwz r10,16(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// lwz r9,44(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 44);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x8280f6a4
	if (ctx.cr6.eq) goto loc_8280F6A4;
	// rotlwi r3,r9,0
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r9.u32, 0);
	// lwz r5,16(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// lwz r4,12(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// bl 0x82ae1e90
	ctx.lr = 0x8280F6A0;
	sub_82AE1E90(ctx, base);
	// lwz r31,164(r1)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 164);
loc_8280F6A4:
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x82ee29b0
	ctx.lr = 0x8280F6AC;
	sub_82EE29B0(ctx, base);
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
loc_8280F6B0:
	// cmplw cr6,r11,r31
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r31.u32, ctx.xer);
	// bne cr6,0x8280f680
	if (!ctx.cr6.eq) goto loc_8280F680;
	// b 0x8280f70c
	goto loc_8280F70C;
loc_8280F6BC:
	// lwz r11,60(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 60);
	// cmplw cr6,r11,r22
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r22.u32, ctx.xer);
	// bne cr6,0x8280f70c
	if (!ctx.cr6.eq) goto loc_8280F70C;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// b 0x8280f704
	goto loc_8280F704;
loc_8280F6D4:
	// lwz r10,16(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// lwz r9,44(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 44);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x8280f6f8
	if (ctx.cr6.eq) goto loc_8280F6F8;
	// rotlwi r3,r9,0
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r9.u32, 0);
	// lwz r5,16(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// lwz r4,12(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// bl 0x82ae1e90
	ctx.lr = 0x8280F6F4;
	sub_82AE1E90(ctx, base);
	// lwz r31,164(r1)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 164);
loc_8280F6F8:
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x82ee29b0
	ctx.lr = 0x8280F700;
	sub_82EE29B0(ctx, base);
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
loc_8280F704:
	// cmplw cr6,r11,r31
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r31.u32, ctx.xer);
	// bne cr6,0x8280f6d4
	if (!ctx.cr6.eq) goto loc_8280F6D4;
loc_8280F70C:
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x8282e648
	ctx.lr = 0x8280F714;
	sub_8282E648(ctx, base);
	// lwz r11,8(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 8);
	// lwz r11,28(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// lwz r30,88(r1)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x8280f650
	if (!ctx.cr6.eq) goto loc_8280F650;
loc_8280F728:
	// mr r4,r18
	ctx.r4.u64 = ctx.r18.u64;
	// lwz r3,4(r27)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r27.u32 + 4);
	// bl 0x82810458
	ctx.lr = 0x8280F734;
	sub_82810458(ctx, base);
	// lwz r6,164(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 164);
	// addi r4,r1,160
	ctx.r4.s64 = ctx.r1.s64 + 160;
	// addi r3,r1,184
	ctx.r3.s64 = ctx.r1.s64 + 184;
	// lwz r5,0(r6)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	// bl 0x82e5a880
	ctx.lr = 0x8280F748;
	sub_82E5A880(ctx, base);
	// lwz r3,164(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 164);
	// bl 0x82e01568
	ctx.lr = 0x8280F750;
	sub_82E01568(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82c10e98
	ctx.lr = 0x8280F758;
	sub_82C10E98(ctx, base);
	// lwz r3,132(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8280f768
	if (ctx.cr6.eq) goto loc_8280F768;
	// bl 0x82480108
	ctx.lr = 0x8280F768;
	sub_82480108(ctx, base);
loc_8280F768:
	// lwz r3,148(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 148);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8280f778
	if (ctx.cr6.eq) goto loc_8280F778;
	// bl 0x82480108
	ctx.lr = 0x8280F778;
	sub_82480108(ctx, base);
loc_8280F778:
	// lwz r3,124(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 124);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8280f788
	if (ctx.cr6.eq) goto loc_8280F788;
	// bl 0x82480108
	ctx.lr = 0x8280F788;
	sub_82480108(ctx, base);
loc_8280F788:
	// li r31,1
	ctx.r31.s64 = 1;
	// b 0x8280f280
	goto loc_8280F280;
}

__attribute__((alias("__imp__sub_8280F790"))) PPC_WEAK_FUNC(sub_8280F790);
PPC_FUNC_IMPL(__imp__sub_8280F790) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31888
	ctx.r11.s64 = -2089811968;
	// lwz r11,-8344(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -8344);
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r3,r11,27,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8280F7A8"))) PPC_WEAK_FUNC(sub_8280F7A8);
PPC_FUNC_IMPL(__imp__sub_8280F7A8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31888
	ctx.r11.s64 = -2089811968;
	// lwz r3,-8344(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -8344);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8280F7B4"))) PPC_WEAK_FUNC(sub_8280F7B4);
PPC_FUNC_IMPL(__imp__sub_8280F7B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8280F7B8"))) PPC_WEAK_FUNC(sub_8280F7B8);
PPC_FUNC_IMPL(__imp__sub_8280F7B8) {
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
	// li r11,0
	ctx.r11.s64 = 0;
	// li r3,16
	ctx.r3.s64 = 16;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
	// bl 0x82e01570
	ctx.lr = 0x8280F7E4;
	sub_82E01570(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8280f810
	if (ctx.cr0.eq) goto loc_8280F810;
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// stw r31,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r31.u32);
	// li r10,1
	ctx.r10.s64 = 1;
	// addi r9,r11,11340
	ctx.r9.s64 = ctx.r11.s64 + 11340;
	// stw r10,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r10.u32);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// stw r10,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r10.u32);
	// b 0x8280f814
	goto loc_8280F814;
loc_8280F810:
	// li r11,0
	ctx.r11.s64 = 0;
loc_8280F814:
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8280f860
	if (!ctx.cr6.eq) goto loc_8280F860;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x8280f840
	if (ctx.cr6.eq) goto loc_8280F840;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8280F840;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8280F840:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// addi r11,r11,2048
	ctx.r11.s64 = ctx.r11.s64 + 2048;
	// addi r10,r10,2036
	ctx.r10.s64 = ctx.r10.s64 + 2036;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// bl 0x82c10e98
	ctx.lr = 0x8280F860;
	sub_82C10E98(ctx, base);
loc_8280F860:
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

__attribute__((alias("__imp__sub_8280F87C"))) PPC_WEAK_FUNC(sub_8280F87C);
PPC_FUNC_IMPL(__imp__sub_8280F87C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8280F880"))) PPC_WEAK_FUNC(sub_8280F880);
PPC_FUNC_IMPL(__imp__sub_8280F880) {
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
	// stw r4,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r4.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r3,r3,4
	ctx.r3.s64 = ctx.r3.s64 + 4;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// bl 0x8280f7b8
	ctx.lr = 0x8280F8A8;
	sub_8280F7B8(ctx, base);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82c10e98
	ctx.lr = 0x8280F8B8;
	sub_82C10E98(ctx, base);
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

__attribute__((alias("__imp__sub_8280F8D4"))) PPC_WEAK_FUNC(sub_8280F8D4);
PPC_FUNC_IMPL(__imp__sub_8280F8D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8280F8D8"))) PPC_WEAK_FUNC(sub_8280F8D8);
PPC_FUNC_IMPL(__imp__sub_8280F8D8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x833a01a8
	ctx.lr = 0x8280F8E0;
	__savegprlr_28(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// li r10,156
	ctx.r10.s64 = 156;
	// addi r11,r11,2128
	ctx.r11.s64 = ctx.r11.s64 + 2128;
	// stw r10,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r10.u32);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// stw r11,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r11.u32);
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// bl 0x82e01860
	ctx.lr = 0x8280F910;
	sub_82E01860(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// li r3,24
	ctx.r3.s64 = 24;
	// lwz r5,0(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// bl 0x82e01688
	ctx.lr = 0x8280F924;
	sub_82E01688(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x8280f958
	if (ctx.cr0.eq) goto loc_8280F958;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lbz r29,0(r29)
	ctx.r29.u64 = PPC_LOAD_U8(ctx.r29.u32 + 0);
	// lwz r30,0(r30)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// bl 0x82e8f7d8
	ctx.lr = 0x8280F93C;
	sub_82E8F7D8(ctx, base);
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// stw r30,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r30.u32);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r11,r11,11324
	ctx.r11.s64 = ctx.r11.s64 + 11324;
	// stb r29,20(r31)
	PPC_STORE_U8(ctx.r31.u32 + 20, ctx.r29.u8);
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// b 0x8280f95c
	goto loc_8280F95C;
loc_8280F958:
	// li r4,0
	ctx.r4.s64 = 0;
loc_8280F95C:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x8280f880
	ctx.lr = 0x8280F964;
	sub_8280F880(ctx, base);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x833a01f8
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8280F970"))) PPC_WEAK_FUNC(sub_8280F970);
PPC_FUNC_IMPL(__imp__sub_8280F970) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x833a01a8
	ctx.lr = 0x8280F978;
	__savegprlr_28(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// stw r5,180(r1)
	PPC_STORE_U32(ctx.r1.u32 + 180, ctx.r5.u32);
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stb r6,191(r1)
	PPC_STORE_U8(ctx.r1.u32 + 191, ctx.r6.u8);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r5,r1,180
	ctx.r5.s64 = ctx.r1.s64 + 180;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// mr r30,r6
	ctx.r30.u64 = ctx.r6.u64;
	// bl 0x82a359b0
	ctx.lr = 0x8280F9A0;
	sub_82A359B0(ctx, base);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r28,80(r1)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplw cr6,r28,r11
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x8280fa54
	if (ctx.cr6.eq) goto loc_8280FA54;
	// clrlwi r11,r30,24
	ctx.r11.u64 = ctx.r30.u32 & 0xFF;
	// lwz r10,16(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 16);
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r30,r11,27,31,31
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// cmplw cr6,r30,r10
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x8280fa54
	if (ctx.cr6.eq) goto loc_8280FA54;
	// addi r5,r1,191
	ctx.r5.s64 = ctx.r1.s64 + 191;
	// addi r4,r1,180
	ctx.r4.s64 = ctx.r1.s64 + 180;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8280f8d8
	ctx.lr = 0x8280F9D8;
	sub_8280F8D8(ctx, base);
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
	// beq cr6,0x8280fa10
	if (ctx.cr6.eq) goto loc_8280FA10;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
loc_8280F9F4:
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
	// bne 0x8280f9f4
	if (!ctx.cr0.eq) goto loc_8280F9F4;
loc_8280FA10:
	// lis r11,-32230
	ctx.r11.s64 = -2112225280;
	// lwz r6,16(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// addi r7,r1,88
	ctx.r7.s64 = ctx.r1.s64 + 88;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r29,40
	ctx.r3.s64 = ctx.r29.s64 + 40;
	// lfs f1,24284(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 24284);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x82e8ed28
	ctx.lr = 0x8280FA30;
	sub_82E8ED28(ctx, base);
	// lwz r3,92(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8280fa40
	if (ctx.cr6.eq) goto loc_8280FA40;
	// bl 0x82480108
	ctx.lr = 0x8280FA40;
	sub_82480108(ctx, base);
loc_8280FA40:
	// lwz r3,100(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8280fa50
	if (ctx.cr6.eq) goto loc_8280FA50;
	// bl 0x82480108
	ctx.lr = 0x8280FA50;
	sub_82480108(ctx, base);
loc_8280FA50:
	// stw r30,16(r28)
	PPC_STORE_U32(ctx.r28.u32 + 16, ctx.r30.u32);
loc_8280FA54:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x833a01f8
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8280FA5C"))) PPC_WEAK_FUNC(sub_8280FA5C);
PPC_FUNC_IMPL(__imp__sub_8280FA5C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8280FA60"))) PPC_WEAK_FUNC(sub_8280FA60);
PPC_FUNC_IMPL(__imp__sub_8280FA60) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x833a01a8
	ctx.lr = 0x8280FA68;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,176(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 176);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// lwz r31,0(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// b 0x8280faa0
	goto loc_8280FAA0;
loc_8280FA84:
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// lwz r4,172(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 172);
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// addi r3,r31,8
	ctx.r3.s64 = ctx.r31.s64 + 8;
	// bl 0x8280f970
	ctx.lr = 0x8280FA98;
	sub_8280F970(ctx, base);
	// lwz r11,176(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 176);
	// lwz r31,0(r31)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
loc_8280FAA0:
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x8280fa84
	if (!ctx.cr6.eq) goto loc_8280FA84;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x833a01f8
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8280FAB0"))) PPC_WEAK_FUNC(sub_8280FAB0);
PPC_FUNC_IMPL(__imp__sub_8280FAB0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x833a01a4
	ctx.lr = 0x8280FAB8;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lbz r11,21(r4)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r4.u32 + 21);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// lwz r28,4(r3)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r27,r5
	ctx.r27.u64 = ctx.r5.u64;
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x8280fb3c
	if (!ctx.cr0.eq) goto loc_8280FB3C;
	// bl 0x82804b18
	ctx.lr = 0x8280FADC;
	sub_82804B18(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addic. r11,r3,12
	ctx.xer.ca = ctx.r3.u32 > 4294967283;
	ctx.r11.s64 = ctx.r3.s64 + 12;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8280faf8
	if (ctx.cr0.eq) goto loc_8280FAF8;
	// lwz r10,12(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// lwz r10,16(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
loc_8280FAF8:
	// stw r27,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r27.u32);
	// lbz r11,20(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 20);
	// stb r11,20(r31)
	PPC_STORE_U8(ctx.r31.u32 + 20, ctx.r11.u8);
	// lbz r11,21(r28)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r28.u32 + 21);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x8280fb14
	if (ctx.cr0.eq) goto loc_8280FB14;
	// mr r28,r31
	ctx.r28.u64 = ctx.r31.u64;
loc_8280FB14:
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// lwz r4,0(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8280fab0
	ctx.lr = 0x8280FB24;
	sub_8280FAB0(ctx, base);
	// stw r3,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r3.u32);
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// lwz r4,8(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8280fab0
	ctx.lr = 0x8280FB38;
	sub_8280FAB0(ctx, base);
	// stw r3,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r3.u32);
loc_8280FB3C:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x833a01f4
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8280FB48"))) PPC_WEAK_FUNC(sub_8280FB48);
PPC_FUNC_IMPL(__imp__sub_8280FB48) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x833a01ac
	ctx.lr = 0x8280FB50;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,4(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// lwz r29,4(r3)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// lwz r4,4(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// bl 0x8280fab0
	ctx.lr = 0x8280FB70;
	sub_8280FAB0(ctx, base);
	// stw r3,4(r29)
	PPC_STORE_U32(ctx.r29.u32 + 4, ctx.r3.u32);
	// lwz r9,4(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// lwz r10,4(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// lbz r11,21(r10)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r10.u32 + 21);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x8280fbdc
	if (!ctx.cr0.eq) goto loc_8280FBDC;
	// lwz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// b 0x8280fba0
	goto loc_8280FBA0;
loc_8280FB98:
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
loc_8280FBA0:
	// lbz r8,21(r11)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + 21);
	// cmplwi r8,0
	ctx.cr0.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq 0x8280fb98
	if (ctx.cr0.eq) goto loc_8280FB98;
	// stw r10,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r10.u32);
	// lwz r9,4(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r10,4(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// lwz r11,8(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// b 0x8280fbc8
	goto loc_8280FBC8;
loc_8280FBC0:
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
loc_8280FBC8:
	// lbz r8,21(r11)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + 21);
	// cmplwi r8,0
	ctx.cr0.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq 0x8280fbc0
	if (ctx.cr0.eq) goto loc_8280FBC0;
	// stw r10,8(r9)
	PPC_STORE_U32(ctx.r9.u32 + 8, ctx.r10.u32);
	// b 0x8280fbe8
	goto loc_8280FBE8;
loc_8280FBDC:
	// stw r9,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r9.u32);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// stw r11,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r11.u32);
loc_8280FBE8:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x833a01fc
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8280FBF0"))) PPC_WEAK_FUNC(sub_8280FBF0);
PPC_FUNC_IMPL(__imp__sub_8280FBF0) {
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
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x82898f80
	ctx.lr = 0x8280FC18;
	sub_82898F80(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x8280fb48
	ctx.lr = 0x8280FC24;
	sub_8280FB48(ctx, base);
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

__attribute__((alias("__imp__sub_8280FC40"))) PPC_WEAK_FUNC(sub_8280FC40);
PPC_FUNC_IMPL(__imp__sub_8280FC40) {
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
	// lwz r6,12(r3)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r4,r3,8
	ctx.r4.s64 = ctx.r3.s64 + 8;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r5,0(r6)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	// bl 0x82e5a880
	ctx.lr = 0x8280FC70;
	sub_82E5A880(ctx, base);
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// bl 0x82e01568
	ctx.lr = 0x8280FC78;
	sub_82E01568(ctx, base);
	// clrlwi. r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8280fc88
	if (ctx.cr0.eq) goto loc_8280FC88;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82e01568
	ctx.lr = 0x8280FC88;
	sub_82E01568(ctx, base);
loc_8280FC88:
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

__attribute__((alias("__imp__sub_8280FCA4"))) PPC_WEAK_FUNC(sub_8280FCA4);
PPC_FUNC_IMPL(__imp__sub_8280FCA4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8280FCA8"))) PPC_WEAK_FUNC(sub_8280FCA8);
PPC_FUNC_IMPL(__imp__sub_8280FCA8) {
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
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x8280fce0
	if (ctx.cr6.eq) goto loc_8280FCE0;
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8280fbf0
	ctx.lr = 0x8280FCD8;
	sub_8280FBF0(ctx, base);
	// lwz r11,16(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// stw r11,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r11.u32);
loc_8280FCE0:
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

__attribute__((alias("__imp__sub_8280FCF8"))) PPC_WEAK_FUNC(sub_8280FCF8);
PPC_FUNC_IMPL(__imp__sub_8280FCF8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x833a01a8
	ctx.lr = 0x8280FD00;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// lwz r28,0(r5)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// cmplw cr6,r5,r11
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x8280fd58
	if (ctx.cr6.eq) goto loc_8280FD58;
	// lwz r11,4(r5)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 4);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r10,0(r5)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// mr r3,r5
	ctx.r3.u64 = ctx.r5.u64;
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// lwz r11,0(r5)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// lwz r10,4(r5)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r5.u32 + 4);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// bl 0x8280fc40
	ctx.lr = 0x8280FD44;
	sub_8280FC40(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82e01568
	ctx.lr = 0x8280FD4C;
	sub_82E01568(ctx, base);
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stw r11,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r11.u32);
loc_8280FD58:
	// stw r28,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r28.u32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x833a01f8
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8280FD68"))) PPC_WEAK_FUNC(sub_8280FD68);
PPC_FUNC_IMPL(__imp__sub_8280FD68) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x833a01ac
	ctx.lr = 0x8280FD70;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r10,0
	ctx.r10.s64 = 0;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r31,0(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stw r11,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r11.u32);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// stw r11,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r11.u32);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, ctx.xer);
	// stw r10,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r10.u32);
	// beq cr6,0x8280fdc8
	if (ctx.cr6.eq) goto loc_8280FDC8;
loc_8280FDA0:
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r29,0(r31)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8280fc40
	ctx.lr = 0x8280FDB0;
	sub_8280FC40(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82e01568
	ctx.lr = 0x8280FDB8;
	sub_82E01568(ctx, base);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r31,r29
	ctx.r31.u64 = ctx.r29.u64;
	// cmplw cr6,r29,r11
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x8280fda0
	if (!ctx.cr6.eq) goto loc_8280FDA0;
loc_8280FDC8:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x833a01fc
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8280FDD0"))) PPC_WEAK_FUNC(sub_8280FDD0);
PPC_FUNC_IMPL(__imp__sub_8280FDD0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x833a01a4
	ctx.lr = 0x8280FDD8;
	__savegprlr_27(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// li r10,45
	ctx.r10.s64 = 45;
	// addi r11,r11,2208
	ctx.r11.s64 = ctx.r11.s64 + 2208;
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// li r3,28
	ctx.r3.s64 = 28;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// mr r27,r6
	ctx.r27.u64 = ctx.r6.u64;
	// bl 0x82e01570
	ctx.lr = 0x8280FE0C;
	sub_82E01570(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r4,r3,8
	ctx.r4.s64 = ctx.r3.s64 + 8;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// addi r3,r30,9
	ctx.r3.s64 = ctx.r30.s64 + 9;
	// stw r29,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r29.u32);
	// stw r28,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r28.u32);
	// bl 0x8280fca8
	ctx.lr = 0x8280FE28;
	sub_8280FCA8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x833a01f4
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8280FE34"))) PPC_WEAK_FUNC(sub_8280FE34);
PPC_FUNC_IMPL(__imp__sub_8280FE34) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8280FE38"))) PPC_WEAK_FUNC(sub_8280FE38);
PPC_FUNC_IMPL(__imp__sub_8280FE38) {
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
	// lwz r11,176(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 176);
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// addi r31,r3,176
	ctx.r31.s64 = ctx.r3.s64 + 176;
	// lwz r5,0(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// b 0x8280fe90
	goto loc_8280FE90;
loc_8280FE60:
	// lwz r11,24(r5)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 24);
	// cmplw cr6,r11,r30
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r30.u32, ctx.xer);
	// bne cr6,0x8280fe7c
	if (!ctx.cr6.eq) goto loc_8280FE7C;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x8280fcf8
	ctx.lr = 0x8280FE78;
	sub_8280FCF8(ctx, base);
	// b 0x8280fe88
	goto loc_8280FE88;
loc_8280FE7C:
	// lwz r11,0(r5)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
loc_8280FE88:
	// lwz r5,0(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
loc_8280FE90:
	// stw r5,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r5.u32);
	// cmplw cr6,r5,r11
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x8280fe60
	if (!ctx.cr6.eq) goto loc_8280FE60;
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

__attribute__((alias("__imp__sub_8280FEB4"))) PPC_WEAK_FUNC(sub_8280FEB4);
PPC_FUNC_IMPL(__imp__sub_8280FEB4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8280FEB8"))) PPC_WEAK_FUNC(sub_8280FEB8);
PPC_FUNC_IMPL(__imp__sub_8280FEB8) {
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
	// mr r6,r5
	ctx.r6.u64 = ctx.r5.u64;
	// lwz r5,4(r4)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// bl 0x8280fdd0
	ctx.lr = 0x8280FEE0;
	sub_8280FDD0(ctx, base);
	// lis r10,3276
	ctx.r10.s64 = 214695936;
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// ori r10,r10,52427
	ctx.r10.u64 = ctx.r10.u64 | 52427;
	// subf r10,r11,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r11.s64;
	// cmplwi cr6,r10,1
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 1, ctx.xer);
	// bge cr6,0x8280ff04
	if (!ctx.cr6.lt) goto loc_8280FF04;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r3,r11,2304
	ctx.r3.s64 = ctx.r11.s64 + 2304;
	// bl 0x82dffba0
	ctx.lr = 0x8280FF04;
	sub_82DFFBA0(ctx, base);
loc_8280FF04:
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r11.u32);
	// stw r3,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r3.u32);
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// stw r3,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r3.u32);
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

__attribute__((alias("__imp__sub_8280FF30"))) PPC_WEAK_FUNC(sub_8280FF30);
PPC_FUNC_IMPL(__imp__sub_8280FF30) {
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
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// lis r10,-32250
	ctx.r10.s64 = -2113536000;
	// addi r11,r11,11380
	ctx.r11.s64 = ctx.r11.s64 + 11380;
	// addi r10,r10,11360
	ctx.r10.s64 = ctx.r10.s64 + 11360;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// addi r3,r3,176
	ctx.r3.s64 = ctx.r3.s64 + 176;
	// stw r10,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r10.u32);
	// bl 0x8280fd68
	ctx.lr = 0x8280FF64;
	sub_8280FD68(ctx, base);
	// lwz r3,176(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 176);
	// bl 0x82e01568
	ctx.lr = 0x8280FF6C;
	sub_82E01568(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82a26938
	ctx.lr = 0x8280FF74;
	sub_82A26938(ctx, base);
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

__attribute__((alias("__imp__sub_8280FF88"))) PPC_WEAK_FUNC(sub_8280FF88);
PPC_FUNC_IMPL(__imp__sub_8280FF88) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-40
	ctx.r3.s64 = ctx.r3.s64 + -40;
	// b 0x828100b0
	sub_828100B0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8280FF90"))) PPC_WEAK_FUNC(sub_8280FF90);
PPC_FUNC_IMPL(__imp__sub_8280FF90) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x833a01ac
	ctx.lr = 0x8280FF98;
	__savegprlr_29(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82898f80
	ctx.lr = 0x8280FFB8;
	sub_82898F80(ctx, base);
	// stw r31,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r31.u32);
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// li r31,0
	ctx.r31.s64 = 0;
	// bl 0x82ae9da8
	ctx.lr = 0x8280FFC8;
	sub_82AE9DA8(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82810014
	if (ctx.cr0.eq) goto loc_82810014;
	// stw r31,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r31.u32);
loc_8280FFD4:
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// lwz r4,0(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x82ae9dc0
	ctx.lr = 0x8280FFE4;
	sub_82AE9DC0(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stw r11,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r11.u32);
	// bl 0x82885920
	ctx.lr = 0x82810000;
	sub_82885920(ctx, base);
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// bl 0x82ae9da8
	ctx.lr = 0x8281000C;
	sub_82AE9DA8(ctx, base);
	// cmplw cr6,r31,r3
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r3.u32, ctx.xer);
	// blt cr6,0x8280ffd4
	if (ctx.cr6.lt) goto loc_8280FFD4;
loc_82810014:
	// addi r3,r29,176
	ctx.r3.s64 = ctx.r29.s64 + 176;
	// lwz r4,176(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 176);
	// addi r5,r1,112
	ctx.r5.s64 = ctx.r1.s64 + 112;
	// bl 0x8280feb8
	ctx.lr = 0x82810024;
	sub_8280FEB8(ctx, base);
	// lwz r6,116(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// lwz r5,0(r6)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	// bl 0x82e5a880
	ctx.lr = 0x82810038;
	sub_82E5A880(ctx, base);
	// lwz r3,116(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// bl 0x82e01568
	ctx.lr = 0x82810040;
	sub_82E01568(ctx, base);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x833a01fc
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82810048"))) PPC_WEAK_FUNC(sub_82810048);
PPC_FUNC_IMPL(__imp__sub_82810048) {
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
	// bl 0x82a267f8
	ctx.lr = 0x82810068;
	sub_82A267F8(ctx, base);
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// stw r30,172(r31)
	PPC_STORE_U32(ctx.r31.u32 + 172, ctx.r30.u32);
	// lis r10,-32250
	ctx.r10.s64 = -2113536000;
	// addi r11,r11,11380
	ctx.r11.s64 = ctx.r11.s64 + 11380;
	// addi r10,r10,11360
	ctx.r10.s64 = ctx.r10.s64 + 11360;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// addi r3,r31,176
	ctx.r3.s64 = ctx.r31.s64 + 176;
	// stw r10,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r10.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x828157b8
	ctx.lr = 0x82810090;
	sub_828157B8(ctx, base);
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

__attribute__((alias("__imp__sub_828100AC"))) PPC_WEAK_FUNC(sub_828100AC);
PPC_FUNC_IMPL(__imp__sub_828100AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_828100B0"))) PPC_WEAK_FUNC(sub_828100B0);
PPC_FUNC_IMPL(__imp__sub_828100B0) {
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
	// bl 0x8280ff30
	ctx.lr = 0x828100D0;
	sub_8280FF30(ctx, base);
	// clrlwi. r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x828100e0
	if (ctx.cr0.eq) goto loc_828100E0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82e01698
	ctx.lr = 0x828100E0;
	sub_82E01698(ctx, base);
loc_828100E0:
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

__attribute__((alias("__imp__sub_828100FC"))) PPC_WEAK_FUNC(sub_828100FC);
PPC_FUNC_IMPL(__imp__sub_828100FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82810100"))) PPC_WEAK_FUNC(sub_82810100);
PPC_FUNC_IMPL(__imp__sub_82810100) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x833a019c
	ctx.lr = 0x82810108;
	__savegprlr_25(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// mr r29,r6
	ctx.r29.u64 = ctx.r6.u64;
	// mr r28,r7
	ctx.r28.u64 = ctx.r7.u64;
	// mr r27,r8
	ctx.r27.u64 = ctx.r8.u64;
	// mr r26,r9
	ctx.r26.u64 = ctx.r9.u64;
	// mr r25,r10
	ctx.r25.u64 = ctx.r10.u64;
	// bl 0x82e025d8
	ctx.lr = 0x8281012C;
	sub_82E025D8(ctx, base);
	// addi r3,r31,4
	ctx.r3.s64 = ctx.r31.s64 + 4;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82e025d8
	ctx.lr = 0x82810138;
	sub_82E025D8(ctx, base);
	// addi r3,r31,8
	ctx.r3.s64 = ctx.r31.s64 + 8;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x82e025d8
	ctx.lr = 0x82810144;
	sub_82E025D8(ctx, base);
	// lbz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r28.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stb r11,12(r31)
	PPC_STORE_U8(ctx.r31.u32 + 12, ctx.r11.u8);
	// lbz r11,1(r28)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r28.u32 + 1);
	// stb r11,13(r31)
	PPC_STORE_U8(ctx.r31.u32 + 13, ctx.r11.u8);
	// lbz r11,2(r28)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r28.u32 + 2);
	// stb r11,14(r31)
	PPC_STORE_U8(ctx.r31.u32 + 14, ctx.r11.u8);
	// lbz r11,3(r28)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r28.u32 + 3);
	// stw r27,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r27.u32);
	// stb r26,20(r31)
	PPC_STORE_U8(ctx.r31.u32 + 20, ctx.r26.u8);
	// stb r26,21(r31)
	PPC_STORE_U8(ctx.r31.u32 + 21, ctx.r26.u8);
	// stw r25,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r25.u32);
	// stb r11,15(r31)
	PPC_STORE_U8(ctx.r31.u32 + 15, ctx.r11.u8);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x833a01ec
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82810180"))) PPC_WEAK_FUNC(sub_82810180);
PPC_FUNC_IMPL(__imp__sub_82810180) {
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
	// lwz r3,176(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 176);
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// lis r10,-32250
	ctx.r10.s64 = -2113536000;
	// addi r11,r11,11456
	ctx.r11.s64 = ctx.r11.s64 + 11456;
	// addi r10,r10,11436
	ctx.r10.s64 = ctx.r10.s64 + 11436;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// stw r10,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r10.u32);
	// beq cr6,0x828101cc
	if (ctx.cr6.eq) goto loc_828101CC;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x828101CC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_828101CC:
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,176(r31)
	PPC_STORE_U32(ctx.r31.u32 + 176, ctx.r11.u32);
	// bl 0x82a26938
	ctx.lr = 0x828101DC;
	sub_82A26938(ctx, base);
	// addi r3,r31,172
	ctx.r3.s64 = ctx.r31.s64 + 172;
	// bl 0x82e03da8
	ctx.lr = 0x828101E4;
	sub_82E03DA8(ctx, base);
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

__attribute__((alias("__imp__sub_828101F8"))) PPC_WEAK_FUNC(sub_828101F8);
PPC_FUNC_IMPL(__imp__sub_828101F8) {
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
	// lwz r4,176(r4)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r4.u32 + 176);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x82815708
	ctx.lr = 0x82810214;
	sub_82815708(ctx, base);
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

__attribute__((alias("__imp__sub_8281022C"))) PPC_WEAK_FUNC(sub_8281022C);
PPC_FUNC_IMPL(__imp__sub_8281022C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82810230"))) PPC_WEAK_FUNC(sub_82810230);
PPC_FUNC_IMPL(__imp__sub_82810230) {
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
	// stw r4,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r4.u32);
	// addi r4,r1,124
	ctx.r4.s64 = ctx.r1.s64 + 124;
	// lwz r3,176(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 176);
	// bl 0x82815788
	ctx.lr = 0x8281024C;
	sub_82815788(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8281025C"))) PPC_WEAK_FUNC(sub_8281025C);
PPC_FUNC_IMPL(__imp__sub_8281025C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82810260"))) PPC_WEAK_FUNC(sub_82810260);
PPC_FUNC_IMPL(__imp__sub_82810260) {
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
	// addi r3,r3,40
	ctx.r3.s64 = ctx.r3.s64 + 40;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// bl 0x83112d60
	ctx.lr = 0x8281027C;
	sub_83112D60(ctx, base);
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// stw r3,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r3.u32);
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

__attribute__((alias("__imp__sub_82810298"))) PPC_WEAK_FUNC(sub_82810298);
PPC_FUNC_IMPL(__imp__sub_82810298) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,176(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 176);
	// addi r3,r11,96
	ctx.r3.s64 = ctx.r11.s64 + 96;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_828102A4"))) PPC_WEAK_FUNC(sub_828102A4);
PPC_FUNC_IMPL(__imp__sub_828102A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_828102A8"))) PPC_WEAK_FUNC(sub_828102A8);
PPC_FUNC_IMPL(__imp__sub_828102A8) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,176(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 176);
	// lwz r3,212(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 212);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_828102B4"))) PPC_WEAK_FUNC(sub_828102B4);
PPC_FUNC_IMPL(__imp__sub_828102B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_828102B8"))) PPC_WEAK_FUNC(sub_828102B8);
PPC_FUNC_IMPL(__imp__sub_828102B8) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,176(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 176);
	// lwz r3,216(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 216);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_828102C4"))) PPC_WEAK_FUNC(sub_828102C4);
PPC_FUNC_IMPL(__imp__sub_828102C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_828102C8"))) PPC_WEAK_FUNC(sub_828102C8);
PPC_FUNC_IMPL(__imp__sub_828102C8) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,176(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 176);
	// lbz r3,84(r11)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r11.u32 + 84);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_828102D4"))) PPC_WEAK_FUNC(sub_828102D4);
PPC_FUNC_IMPL(__imp__sub_828102D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_828102D8"))) PPC_WEAK_FUNC(sub_828102D8);
PPC_FUNC_IMPL(__imp__sub_828102D8) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,176(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 176);
	// addi r3,r11,24
	ctx.r3.s64 = ctx.r11.s64 + 24;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_828102E4"))) PPC_WEAK_FUNC(sub_828102E4);
PPC_FUNC_IMPL(__imp__sub_828102E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_828102E8"))) PPC_WEAK_FUNC(sub_828102E8);
PPC_FUNC_IMPL(__imp__sub_828102E8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lwz r11,176(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 176);
	// lis r10,-32230
	ctx.r10.s64 = -2112225280;
	// lfs f13,244(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 244);
	ctx.f13.f64 = double(temp.f32);
	// li r11,1
	ctx.r11.s64 = 1;
	// lfs f0,24284(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 24284);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// bge cr6,0x82810308
	if (!ctx.cr6.lt) goto loc_82810308;
	// li r11,0
	ctx.r11.s64 = 0;
loc_82810308:
	// clrlwi r3,r11,24
	ctx.r3.u64 = ctx.r11.u32 & 0xFF;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82810310"))) PPC_WEAK_FUNC(sub_82810310);
PPC_FUNC_IMPL(__imp__sub_82810310) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31891
	ctx.r11.s64 = -2090008576;
	// lwz r11,-2056(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -2056);
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r3,r11,27,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82810328"))) PPC_WEAK_FUNC(sub_82810328);
PPC_FUNC_IMPL(__imp__sub_82810328) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31891
	ctx.r11.s64 = -2090008576;
	// lwz r3,-2056(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -2056);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82810334"))) PPC_WEAK_FUNC(sub_82810334);
PPC_FUNC_IMPL(__imp__sub_82810334) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82810338"))) PPC_WEAK_FUNC(sub_82810338);
PPC_FUNC_IMPL(__imp__sub_82810338) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31891
	ctx.r11.s64 = -2090008576;
	// lwz r11,-2052(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -2052);
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r3,r11,27,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82810350"))) PPC_WEAK_FUNC(sub_82810350);
PPC_FUNC_IMPL(__imp__sub_82810350) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31891
	ctx.r11.s64 = -2090008576;
	// lwz r3,-2052(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -2052);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8281035C"))) PPC_WEAK_FUNC(sub_8281035C);
PPC_FUNC_IMPL(__imp__sub_8281035C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82810360"))) PPC_WEAK_FUNC(sub_82810360);
PPC_FUNC_IMPL(__imp__sub_82810360) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-40
	ctx.r3.s64 = ctx.r3.s64 + -40;
	// b 0x82810408
	sub_82810408(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82810368"))) PPC_WEAK_FUNC(sub_82810368);
PPC_FUNC_IMPL(__imp__sub_82810368) {
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
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r3,r3,172
	ctx.r3.s64 = ctx.r3.s64 + 172;
	// bl 0x82e03d28
	ctx.lr = 0x82810384;
	sub_82E03D28(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82a267f8
	ctx.lr = 0x8281038C;
	sub_82A267F8(ctx, base);
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// lis r10,-32250
	ctx.r10.s64 = -2113536000;
	// addi r11,r11,11456
	ctx.r11.s64 = ctx.r11.s64 + 11456;
	// lis r9,-32250
	ctx.r9.s64 = -2113536000;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// addi r10,r10,11436
	ctx.r10.s64 = ctx.r10.s64 + 11436;
	// addi r9,r9,11800
	ctx.r9.s64 = ctx.r9.s64 + 11800;
	// li r11,74
	ctx.r11.s64 = 74;
	// stw r10,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r10.u32);
	// stw r9,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r9.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r11,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r11.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82e01860
	ctx.lr = 0x828103C4;
	sub_82E01860(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// li r3,320
	ctx.r3.s64 = 320;
	// lwz r5,0(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// bl 0x82e01688
	ctx.lr = 0x828103D8;
	sub_82E01688(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x828103e8
	if (ctx.cr0.eq) goto loc_828103E8;
	// bl 0x828162f0
	ctx.lr = 0x828103E4;
	sub_828162F0(ctx, base);
	// b 0x828103ec
	goto loc_828103EC;
loc_828103E8:
	// li r3,0
	ctx.r3.s64 = 0;
loc_828103EC:
	// stw r3,176(r31)
	PPC_STORE_U32(ctx.r31.u32 + 176, ctx.r3.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
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

__attribute__((alias("__imp__sub_82810408"))) PPC_WEAK_FUNC(sub_82810408);
PPC_FUNC_IMPL(__imp__sub_82810408) {
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
	// bl 0x82810180
	ctx.lr = 0x82810428;
	sub_82810180(ctx, base);
	// clrlwi. r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82810438
	if (ctx.cr0.eq) goto loc_82810438;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82e01698
	ctx.lr = 0x82810438;
	sub_82E01698(ctx, base);
loc_82810438:
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

__attribute__((alias("__imp__sub_82810454"))) PPC_WEAK_FUNC(sub_82810454);
PPC_FUNC_IMPL(__imp__sub_82810454) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82810458"))) PPC_WEAK_FUNC(sub_82810458);
PPC_FUNC_IMPL(__imp__sub_82810458) {
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
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82a24578
	ctx.lr = 0x82810478;
	sub_82A24578(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// addi r3,r11,-4
	ctx.r3.s64 = ctx.r11.s64 + -4;
	// bne cr6,0x8281048c
	if (!ctx.cr6.eq) goto loc_8281048C;
	// li r3,0
	ctx.r3.s64 = 0;
loc_8281048C:
	// bl 0x82a1ee30
	ctx.lr = 0x82810490;
	sub_82A1EE30(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// bl 0x82e0ee00
	ctx.lr = 0x8281049C;
	sub_82E0EE00(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82e01548
	ctx.lr = 0x828104A4;
	sub_82E01548(ctx, base);
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

__attribute__((alias("__imp__sub_828104B8"))) PPC_WEAK_FUNC(sub_828104B8);
PPC_FUNC_IMPL(__imp__sub_828104B8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x833a0194
	ctx.lr = 0x828104C0;
	__savegprlr_23(ctx, base);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r27,0
	ctx.r27.s64 = 0;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// stw r27,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r27.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r28,r11,3189
	ctx.r28.s64 = ctx.r11.s64 + 3189;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r26,r5
	ctx.r26.u64 = ctx.r5.u64;
	// mr r25,r6
	ctx.r25.u64 = ctx.r6.u64;
	// mr r24,r7
	ctx.r24.u64 = ctx.r7.u64;
	// mr r29,r8
	ctx.r29.u64 = ctx.r8.u64;
	// bl 0x82e02670
	ctx.lr = 0x828104F8;
	sub_82E02670(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82e023a8
	ctx.lr = 0x82810504;
	sub_82E023A8(ctx, base);
	// mr r23,r3
	ctx.r23.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82e01bf0
	ctx.lr = 0x82810510;
	sub_82E01BF0(ctx, base);
	// clrlwi. r11,r23,24
	ctx.r11.u64 = ctx.r23.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82810520
	if (ctx.cr0.eq) goto loc_82810520;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x828105d8
	goto loc_828105D8;
loc_82810520:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r5,176(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 176);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x8280e1d8
	ctx.lr = 0x82810530;
	sub_8280E1D8(ctx, base);
	// mr r8,r29
	ctx.r8.u64 = ctx.r29.u64;
	// mr r7,r24
	ctx.r7.u64 = ctx.r24.u64;
	// mr r6,r25
	ctx.r6.u64 = ctx.r25.u64;
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x8280f118
	ctx.lr = 0x8281054C;
	sub_8280F118(ctx, base);
	// clrlwi. r11,r29,24
	ctx.r11.u64 = ctx.r29.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82810580
	if (!ctx.cr0.eq) goto loc_82810580;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82e02670
	ctx.lr = 0x82810560;
	sub_82E02670(ctx, base);
	// lwz r11,176(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 176);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r11,208
	ctx.r3.s64 = ctx.r11.s64 + 208;
	// li r27,1
	ctx.r27.s64 = 1;
	// bl 0x82e02318
	ctx.lr = 0x82810574;
	sub_82E02318(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// bne 0x82810584
	if (!ctx.cr0.eq) goto loc_82810584;
loc_82810580:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82810584:
	// clrlwi. r10,r27,31
	ctx.r10.u64 = ctx.r27.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// clrlwi r30,r11,24
	ctx.r30.u64 = ctx.r11.u32 & 0xFF;
	// beq 0x82810598
	if (ctx.cr0.eq) goto loc_82810598;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82e01bf0
	ctx.lr = 0x82810598;
	sub_82E01BF0(ctx, base);
loc_82810598:
	// clrlwi. r11,r30,24
	ctx.r11.u64 = ctx.r30.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x828105c0
	if (ctx.cr0.eq) goto loc_828105C0;
	// lwz r11,176(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 176);
	// li r8,1
	ctx.r8.s64 = 1;
	// mr r7,r24
	ctx.r7.u64 = ctx.r24.u64;
	// mr r6,r25
	ctx.r6.u64 = ctx.r25.u64;
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// addi r4,r11,208
	ctx.r4.s64 = ctx.r11.s64 + 208;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x828104b8
	ctx.lr = 0x828105C0;
	sub_828104B8(ctx, base);
loc_828105C0:
	// lwz r11,176(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 176);
	// lwz r3,88(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 88);
	// bl 0x8280ca08
	ctx.lr = 0x828105CC;
	sub_8280CA08(ctx, base);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x8280e218
	ctx.lr = 0x828105D4;
	sub_8280E218(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
loc_828105D8:
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x833a01e4
	__restgprlr_23(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_828105E0"))) PPC_WEAK_FUNC(sub_828105E0);
PPC_FUNC_IMPL(__imp__sub_828105E0) {
	PPC_FUNC_PROLOGUE();
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
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82a24688
	ctx.lr = 0x82810600;
	sub_82A24688(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// addi r3,r11,-172
	ctx.r3.s64 = ctx.r11.s64 + -172;
	// bne cr6,0x82810614
	if (!ctx.cr6.eq) goto loc_82810614;
	// li r3,0
	ctx.r3.s64 = 0;
loc_82810614:
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82825178
	ctx.lr = 0x8281061C;
	sub_82825178(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82e01548
	ctx.lr = 0x82810624;
	sub_82E01548(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82a24688
	ctx.lr = 0x82810630;
	sub_82A24688(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// addi r3,r11,-172
	ctx.r3.s64 = ctx.r11.s64 + -172;
	// bne cr6,0x82810644
	if (!ctx.cr6.eq) goto loc_82810644;
	// li r3,0
	ctx.r3.s64 = 0;
loc_82810644:
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x82825178
	ctx.lr = 0x8281064C;
	sub_82825178(ctx, base);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82e01548
	ctx.lr = 0x82810654;
	sub_82E01548(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82a24688
	ctx.lr = 0x82810660;
	sub_82A24688(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// addi r3,r11,-172
	ctx.r3.s64 = ctx.r11.s64 + -172;
	// bne cr6,0x82810674
	if (!ctx.cr6.eq) goto loc_82810674;
	// li r3,0
	ctx.r3.s64 = 0;
loc_82810674:
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x82826700
	ctx.lr = 0x8281067C;
	sub_82826700(ctx, base);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82e01548
	ctx.lr = 0x82810684;
	sub_82E01548(ctx, base);
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

__attribute__((alias("__imp__sub_82810698"))) PPC_WEAK_FUNC(sub_82810698);
PPC_FUNC_IMPL(__imp__sub_82810698) {
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
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82a24688
	ctx.lr = 0x828106B8;
	sub_82A24688(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// addi r3,r11,-172
	ctx.r3.s64 = ctx.r11.s64 + -172;
	// bne cr6,0x828106cc
	if (!ctx.cr6.eq) goto loc_828106CC;
	// li r3,0
	ctx.r3.s64 = 0;
loc_828106CC:
	// bl 0x828250e0
	ctx.lr = 0x828106D0;
	sub_828250E0(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82e01548
	ctx.lr = 0x828106D8;
	sub_82E01548(ctx, base);
	// lwz r11,176(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 176);
	// lwz r3,88(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 88);
	// bl 0x8280ca08
	ctx.lr = 0x828106E4;
	sub_8280CA08(ctx, base);
	// lwz r11,176(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 176);
	// lwz r3,64(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 64);
	// bl 0x82816f78
	ctx.lr = 0x828106F0;
	sub_82816F78(ctx, base);
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

__attribute__((alias("__imp__sub_82810704"))) PPC_WEAK_FUNC(sub_82810704);
PPC_FUNC_IMPL(__imp__sub_82810704) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82810708"))) PPC_WEAK_FUNC(sub_82810708);
PPC_FUNC_IMPL(__imp__sub_82810708) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,176(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 176);
	// lwz r4,16(r4)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r4.u32 + 16);
	// lwz r3,64(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 64);
	// b 0x82816ae0
	sub_82816AE0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82810718"))) PPC_WEAK_FUNC(sub_82810718);
PPC_FUNC_IMPL(__imp__sub_82810718) {
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
	// li r11,0
	ctx.r11.s64 = 0;
	// li r3,16
	ctx.r3.s64 = 16;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
	// bl 0x82e01570
	ctx.lr = 0x82810744;
	sub_82E01570(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82810770
	if (ctx.cr0.eq) goto loc_82810770;
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// stw r31,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r31.u32);
	// li r10,1
	ctx.r10.s64 = 1;
	// addi r9,r11,11544
	ctx.r9.s64 = ctx.r11.s64 + 11544;
	// stw r10,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r10.u32);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// stw r10,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r10.u32);
	// b 0x82810774
	goto loc_82810774;
loc_82810770:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82810774:
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x828107c0
	if (!ctx.cr6.eq) goto loc_828107C0;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x828107a0
	if (ctx.cr6.eq) goto loc_828107A0;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x828107A0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_828107A0:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// addi r11,r11,2048
	ctx.r11.s64 = ctx.r11.s64 + 2048;
	// addi r10,r10,2036
	ctx.r10.s64 = ctx.r10.s64 + 2036;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// bl 0x82c10e98
	ctx.lr = 0x828107C0;
	sub_82C10E98(ctx, base);
loc_828107C0:
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

__attribute__((alias("__imp__sub_828107DC"))) PPC_WEAK_FUNC(sub_828107DC);
PPC_FUNC_IMPL(__imp__sub_828107DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_828107E0"))) PPC_WEAK_FUNC(sub_828107E0);
PPC_FUNC_IMPL(__imp__sub_828107E0) {
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
	// li r11,0
	ctx.r11.s64 = 0;
	// li r3,16
	ctx.r3.s64 = 16;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
	// bl 0x82e01570
	ctx.lr = 0x8281080C;
	sub_82E01570(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82810838
	if (ctx.cr0.eq) goto loc_82810838;
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// stw r31,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r31.u32);
	// li r10,1
	ctx.r10.s64 = 1;
	// addi r9,r11,11564
	ctx.r9.s64 = ctx.r11.s64 + 11564;
	// stw r10,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r10.u32);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// stw r10,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r10.u32);
	// b 0x8281083c
	goto loc_8281083C;
loc_82810838:
	// li r11,0
	ctx.r11.s64 = 0;
loc_8281083C:
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82810888
	if (!ctx.cr6.eq) goto loc_82810888;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82810868
	if (ctx.cr6.eq) goto loc_82810868;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82810868;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82810868:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// addi r11,r11,2048
	ctx.r11.s64 = ctx.r11.s64 + 2048;
	// addi r10,r10,2036
	ctx.r10.s64 = ctx.r10.s64 + 2036;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// bl 0x82c10e98
	ctx.lr = 0x82810888;
	sub_82C10E98(ctx, base);
loc_82810888:
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

__attribute__((alias("__imp__sub_828108A4"))) PPC_WEAK_FUNC(sub_828108A4);
PPC_FUNC_IMPL(__imp__sub_828108A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_828108A8"))) PPC_WEAK_FUNC(sub_828108A8);
PPC_FUNC_IMPL(__imp__sub_828108A8) {
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
	// li r11,0
	ctx.r11.s64 = 0;
	// li r3,16
	ctx.r3.s64 = 16;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
	// bl 0x82e01570
	ctx.lr = 0x828108D4;
	sub_82E01570(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82810900
	if (ctx.cr0.eq) goto loc_82810900;
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// stw r31,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r31.u32);
	// li r10,1
	ctx.r10.s64 = 1;
	// addi r9,r11,11584
	ctx.r9.s64 = ctx.r11.s64 + 11584;
	// stw r10,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r10.u32);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// stw r10,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r10.u32);
	// b 0x82810904
	goto loc_82810904;
loc_82810900:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82810904:
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82810950
	if (!ctx.cr6.eq) goto loc_82810950;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82810930
	if (ctx.cr6.eq) goto loc_82810930;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82810930;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82810930:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// addi r11,r11,2048
	ctx.r11.s64 = ctx.r11.s64 + 2048;
	// addi r10,r10,2036
	ctx.r10.s64 = ctx.r10.s64 + 2036;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// bl 0x82c10e98
	ctx.lr = 0x82810950;
	sub_82C10E98(ctx, base);
loc_82810950:
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

__attribute__((alias("__imp__sub_8281096C"))) PPC_WEAK_FUNC(sub_8281096C);
PPC_FUNC_IMPL(__imp__sub_8281096C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82810970"))) PPC_WEAK_FUNC(sub_82810970);
PPC_FUNC_IMPL(__imp__sub_82810970) {
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
	// li r11,0
	ctx.r11.s64 = 0;
	// li r3,16
	ctx.r3.s64 = 16;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
	// bl 0x82e01570
	ctx.lr = 0x8281099C;
	sub_82E01570(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x828109c8
	if (ctx.cr0.eq) goto loc_828109C8;
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// stw r31,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r31.u32);
	// li r10,1
	ctx.r10.s64 = 1;
	// addi r9,r11,11604
	ctx.r9.s64 = ctx.r11.s64 + 11604;
	// stw r10,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r10.u32);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// stw r10,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r10.u32);
	// b 0x828109cc
	goto loc_828109CC;
loc_828109C8:
	// li r11,0
	ctx.r11.s64 = 0;
loc_828109CC:
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82810a18
	if (!ctx.cr6.eq) goto loc_82810A18;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x828109f8
	if (ctx.cr6.eq) goto loc_828109F8;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x828109F8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_828109F8:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// addi r11,r11,2048
	ctx.r11.s64 = ctx.r11.s64 + 2048;
	// addi r10,r10,2036
	ctx.r10.s64 = ctx.r10.s64 + 2036;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// bl 0x82c10e98
	ctx.lr = 0x82810A18;
	sub_82C10E98(ctx, base);
loc_82810A18:
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

__attribute__((alias("__imp__sub_82810A34"))) PPC_WEAK_FUNC(sub_82810A34);
PPC_FUNC_IMPL(__imp__sub_82810A34) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82810A38"))) PPC_WEAK_FUNC(sub_82810A38);
PPC_FUNC_IMPL(__imp__sub_82810A38) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lwz r10,0(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// addi r11,r3,4
	ctx.r11.s64 = ctx.r3.s64 + 4;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// lwz r11,4(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// lwz r11,8(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// beq cr6,0x82810a7c
	if (ctx.cr6.eq) goto loc_82810A7C;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
loc_82810A60:
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
	// bne 0x82810a60
	if (!ctx.cr0.eq) goto loc_82810A60;
loc_82810A7C:
	// lfs f0,12(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 12);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,12(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 12, temp.u32);
	// lbz r11,16(r4)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r4.u32 + 16);
	// stb r11,16(r3)
	PPC_STORE_U8(ctx.r3.u32 + 16, ctx.r11.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82810A90"))) PPC_WEAK_FUNC(sub_82810A90);
PPC_FUNC_IMPL(__imp__sub_82810A90) {
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
	// li r11,0
	ctx.r11.s64 = 0;
	// li r3,16
	ctx.r3.s64 = 16;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
	// bl 0x82e01570
	ctx.lr = 0x82810ABC;
	sub_82E01570(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82810ae8
	if (ctx.cr0.eq) goto loc_82810AE8;
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// stw r31,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r31.u32);
	// li r10,1
	ctx.r10.s64 = 1;
	// addi r9,r11,11704
	ctx.r9.s64 = ctx.r11.s64 + 11704;
	// stw r10,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r10.u32);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// stw r10,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r10.u32);
	// b 0x82810aec
	goto loc_82810AEC;
loc_82810AE8:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82810AEC:
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82810b38
	if (!ctx.cr6.eq) goto loc_82810B38;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82810b18
	if (ctx.cr6.eq) goto loc_82810B18;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82810B18;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82810B18:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// addi r11,r11,2048
	ctx.r11.s64 = ctx.r11.s64 + 2048;
	// addi r10,r10,2036
	ctx.r10.s64 = ctx.r10.s64 + 2036;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// bl 0x82c10e98
	ctx.lr = 0x82810B38;
	sub_82C10E98(ctx, base);
loc_82810B38:
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

__attribute__((alias("__imp__sub_82810B54"))) PPC_WEAK_FUNC(sub_82810B54);
PPC_FUNC_IMPL(__imp__sub_82810B54) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82810B58"))) PPC_WEAK_FUNC(sub_82810B58);
PPC_FUNC_IMPL(__imp__sub_82810B58) {
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
	// li r11,0
	ctx.r11.s64 = 0;
	// li r3,16
	ctx.r3.s64 = 16;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
	// bl 0x82e01570
	ctx.lr = 0x82810B84;
	sub_82E01570(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82810bb0
	if (ctx.cr0.eq) goto loc_82810BB0;
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// stw r31,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r31.u32);
	// li r10,1
	ctx.r10.s64 = 1;
	// addi r9,r11,11724
	ctx.r9.s64 = ctx.r11.s64 + 11724;
	// stw r10,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r10.u32);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// stw r10,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r10.u32);
	// b 0x82810bb4
	goto loc_82810BB4;
loc_82810BB0:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82810BB4:
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82810c00
	if (!ctx.cr6.eq) goto loc_82810C00;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82810be0
	if (ctx.cr6.eq) goto loc_82810BE0;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82810BE0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82810BE0:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// addi r11,r11,2048
	ctx.r11.s64 = ctx.r11.s64 + 2048;
	// addi r10,r10,2036
	ctx.r10.s64 = ctx.r10.s64 + 2036;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// bl 0x82c10e98
	ctx.lr = 0x82810C00;
	sub_82C10E98(ctx, base);
loc_82810C00:
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

__attribute__((alias("__imp__sub_82810C1C"))) PPC_WEAK_FUNC(sub_82810C1C);
PPC_FUNC_IMPL(__imp__sub_82810C1C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82810C20"))) PPC_WEAK_FUNC(sub_82810C20);
PPC_FUNC_IMPL(__imp__sub_82810C20) {
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
	// li r11,0
	ctx.r11.s64 = 0;
	// li r3,16
	ctx.r3.s64 = 16;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
	// bl 0x82e01570
	ctx.lr = 0x82810C4C;
	sub_82E01570(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82810c78
	if (ctx.cr0.eq) goto loc_82810C78;
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// stw r31,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r31.u32);
	// li r10,1
	ctx.r10.s64 = 1;
	// addi r9,r11,11744
	ctx.r9.s64 = ctx.r11.s64 + 11744;
	// stw r10,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r10.u32);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// stw r10,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r10.u32);
	// b 0x82810c7c
	goto loc_82810C7C;
loc_82810C78:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82810C7C:
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82810cc8
	if (!ctx.cr6.eq) goto loc_82810CC8;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82810ca8
	if (ctx.cr6.eq) goto loc_82810CA8;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82810CA8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82810CA8:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// addi r11,r11,2048
	ctx.r11.s64 = ctx.r11.s64 + 2048;
	// addi r10,r10,2036
	ctx.r10.s64 = ctx.r10.s64 + 2036;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// bl 0x82c10e98
	ctx.lr = 0x82810CC8;
	sub_82C10E98(ctx, base);
loc_82810CC8:
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

__attribute__((alias("__imp__sub_82810CE4"))) PPC_WEAK_FUNC(sub_82810CE4);
PPC_FUNC_IMPL(__imp__sub_82810CE4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82810CE8"))) PPC_WEAK_FUNC(sub_82810CE8);
PPC_FUNC_IMPL(__imp__sub_82810CE8) {
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
	// li r11,0
	ctx.r11.s64 = 0;
	// li r3,16
	ctx.r3.s64 = 16;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
	// bl 0x82e01570
	ctx.lr = 0x82810D14;
	sub_82E01570(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82810d40
	if (ctx.cr0.eq) goto loc_82810D40;
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// stw r31,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r31.u32);
	// li r10,1
	ctx.r10.s64 = 1;
	// addi r9,r11,11764
	ctx.r9.s64 = ctx.r11.s64 + 11764;
	// stw r10,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r10.u32);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// stw r10,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r10.u32);
	// b 0x82810d44
	goto loc_82810D44;
loc_82810D40:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82810D44:
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82810d90
	if (!ctx.cr6.eq) goto loc_82810D90;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82810d70
	if (ctx.cr6.eq) goto loc_82810D70;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82810D70;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82810D70:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// addi r11,r11,2048
	ctx.r11.s64 = ctx.r11.s64 + 2048;
	// addi r10,r10,2036
	ctx.r10.s64 = ctx.r10.s64 + 2036;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// bl 0x82c10e98
	ctx.lr = 0x82810D90;
	sub_82C10E98(ctx, base);
loc_82810D90:
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

__attribute__((alias("__imp__sub_82810DAC"))) PPC_WEAK_FUNC(sub_82810DAC);
PPC_FUNC_IMPL(__imp__sub_82810DAC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82810DB0"))) PPC_WEAK_FUNC(sub_82810DB0);
PPC_FUNC_IMPL(__imp__sub_82810DB0) {
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
	// li r11,0
	ctx.r11.s64 = 0;
	// li r3,16
	ctx.r3.s64 = 16;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
	// bl 0x82e01570
	ctx.lr = 0x82810DDC;
	sub_82E01570(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82810e08
	if (ctx.cr0.eq) goto loc_82810E08;
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// stw r31,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r31.u32);
	// li r10,1
	ctx.r10.s64 = 1;
	// addi r9,r11,11784
	ctx.r9.s64 = ctx.r11.s64 + 11784;
	// stw r10,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r10.u32);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// stw r10,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r10.u32);
	// b 0x82810e0c
	goto loc_82810E0C;
loc_82810E08:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82810E0C:
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82810e58
	if (!ctx.cr6.eq) goto loc_82810E58;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82810e38
	if (ctx.cr6.eq) goto loc_82810E38;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82810E38;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82810E38:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// addi r11,r11,2048
	ctx.r11.s64 = ctx.r11.s64 + 2048;
	// addi r10,r10,2036
	ctx.r10.s64 = ctx.r10.s64 + 2036;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// bl 0x82c10e98
	ctx.lr = 0x82810E58;
	sub_82C10E98(ctx, base);
loc_82810E58:
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

__attribute__((alias("__imp__sub_82810E74"))) PPC_WEAK_FUNC(sub_82810E74);
PPC_FUNC_IMPL(__imp__sub_82810E74) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82810E78"))) PPC_WEAK_FUNC(sub_82810E78);
PPC_FUNC_IMPL(__imp__sub_82810E78) {
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
	// addi r3,r3,8
	ctx.r3.s64 = ctx.r3.s64 + 8;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// bl 0x82e01bf0
	ctx.lr = 0x82810E9C;
	sub_82E01BF0(ctx, base);
	// addi r3,r31,4
	ctx.r3.s64 = ctx.r31.s64 + 4;
	// bl 0x82e01bf0
	ctx.lr = 0x82810EA4;
	sub_82E01BF0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82e01bf0
	ctx.lr = 0x82810EAC;
	sub_82E01BF0(ctx, base);
	// clrlwi. r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82810ebc
	if (ctx.cr0.eq) goto loc_82810EBC;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82e01568
	ctx.lr = 0x82810EBC;
	sub_82E01568(ctx, base);
loc_82810EBC:
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

__attribute__((alias("__imp__sub_82810ED8"))) PPC_WEAK_FUNC(sub_82810ED8);
PPC_FUNC_IMPL(__imp__sub_82810ED8) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,176(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 176);
	// lwz r10,64(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 64);
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// lwz r11,68(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 68);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
loc_82810EF8:
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
	// bne 0x82810ef8
	if (!ctx.cr0.eq) goto loc_82810EF8;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82810F18"))) PPC_WEAK_FUNC(sub_82810F18);
PPC_FUNC_IMPL(__imp__sub_82810F18) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,176(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 176);
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// lwz r11,20(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
loc_82810F38:
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
	// bne 0x82810f38
	if (!ctx.cr0.eq) goto loc_82810F38;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82810F58"))) PPC_WEAK_FUNC(sub_82810F58);
PPC_FUNC_IMPL(__imp__sub_82810F58) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,176(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 176);
	// lwz r10,88(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 88);
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// lwz r11,92(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 92);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
loc_82810F78:
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
	// bne 0x82810f78
	if (!ctx.cr0.eq) goto loc_82810F78;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82810F98"))) PPC_WEAK_FUNC(sub_82810F98);
PPC_FUNC_IMPL(__imp__sub_82810F98) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x833a01a8
	ctx.lr = 0x82810FA0;
	__savegprlr_28(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// bl 0x82e02670
	ctx.lr = 0x82810FB4;
	sub_82E02670(ctx, base);
	// lwz r11,176(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 176);
	// lwz r3,88(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 88);
	// lwz r31,92(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 92);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82810fe8
	if (ctx.cr6.eq) goto loc_82810FE8;
	// addi r11,r31,4
	ctx.r11.s64 = ctx.r31.s64 + 4;
loc_82810FCC:
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
	// bne 0x82810fcc
	if (!ctx.cr0.eq) goto loc_82810FCC;
loc_82810FE8:
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x8280bea8
	ctx.lr = 0x82810FF0;
	sub_8280BEA8(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82811004
	if (ctx.cr6.eq) goto loc_82811004;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82480108
	ctx.lr = 0x82811004;
	sub_82480108(ctx, base);
loc_82811004:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82e01bf0
	ctx.lr = 0x8281100C;
	sub_82E01BF0(ctx, base);
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// blt cr6,0x828110bc
	if (ctx.cr6.lt) goto loc_828110BC;
	// lwz r11,176(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 176);
	// lwz r31,92(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 92);
	// lwz r4,88(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 88);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82811048
	if (ctx.cr6.eq) goto loc_82811048;
	// addi r11,r31,4
	ctx.r11.s64 = ctx.r31.s64 + 4;
loc_8281102C:
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
	// bne 0x8281102c
	if (!ctx.cr0.eq) goto loc_8281102C;
loc_82811048:
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x8280bf88
	ctx.lr = 0x82811054;
	sub_8280BF88(ctx, base);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82811064
	if (ctx.cr6.eq) goto loc_82811064;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82480108
	ctx.lr = 0x82811064;
	sub_82480108(ctx, base);
loc_82811064:
	// lwz r11,88(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x828110ac
	if (ctx.cr6.eq) goto loc_828110AC;
	// li r10,1
	ctx.r10.s64 = 1;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// stb r10,21(r11)
	PPC_STORE_U8(ctx.r11.u32 + 21, ctx.r10.u8);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82a24688
	ctx.lr = 0x82811084;
	sub_82A24688(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// addi r3,r11,-172
	ctx.r3.s64 = ctx.r11.s64 + -172;
	// bne cr6,0x82811098
	if (!ctx.cr6.eq) goto loc_82811098;
	// li r3,0
	ctx.r3.s64 = 0;
loc_82811098:
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x82826170
	ctx.lr = 0x828110A4;
	sub_82826170(ctx, base);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82e01548
	ctx.lr = 0x828110AC;
	sub_82E01548(ctx, base);
loc_828110AC:
	// lwz r3,92(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x828110bc
	if (ctx.cr6.eq) goto loc_828110BC;
	// bl 0x82480108
	ctx.lr = 0x828110BC;
	sub_82480108(ctx, base);
loc_828110BC:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x833a01f8
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_828110C4"))) PPC_WEAK_FUNC(sub_828110C4);
PPC_FUNC_IMPL(__imp__sub_828110C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_828110C8"))) PPC_WEAK_FUNC(sub_828110C8);
PPC_FUNC_IMPL(__imp__sub_828110C8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x833a01ac
	ctx.lr = 0x828110D0;
	__savegprlr_29(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82e02670
	ctx.lr = 0x828110E0;
	sub_82E02670(ctx, base);
	// lwz r11,176(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 176);
	// lwz r3,88(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 88);
	// lwz r31,92(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 92);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82811114
	if (ctx.cr6.eq) goto loc_82811114;
	// addi r11,r31,4
	ctx.r11.s64 = ctx.r31.s64 + 4;
loc_828110F8:
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
	// bne 0x828110f8
	if (!ctx.cr0.eq) goto loc_828110F8;
loc_82811114:
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x8280bea8
	ctx.lr = 0x8281111C;
	sub_8280BEA8(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82811130
	if (ctx.cr6.eq) goto loc_82811130;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82480108
	ctx.lr = 0x82811130;
	sub_82480108(ctx, base);
loc_82811130:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82e01bf0
	ctx.lr = 0x82811138;
	sub_82E01BF0(ctx, base);
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// blt cr6,0x828111e4
	if (ctx.cr6.lt) goto loc_828111E4;
	// lwz r11,176(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 176);
	// lwz r31,92(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 92);
	// lwz r4,88(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 88);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82811174
	if (ctx.cr6.eq) goto loc_82811174;
	// addi r11,r31,4
	ctx.r11.s64 = ctx.r31.s64 + 4;
loc_82811158:
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
	// bne 0x82811158
	if (!ctx.cr0.eq) goto loc_82811158;
loc_82811174:
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x8280bf88
	ctx.lr = 0x82811180;
	sub_8280BF88(ctx, base);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82811190
	if (ctx.cr6.eq) goto loc_82811190;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82480108
	ctx.lr = 0x82811190;
	sub_82480108(ctx, base);
loc_82811190:
	// lwz r11,88(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x828111d4
	if (ctx.cr6.eq) goto loc_828111D4;
	// li r10,0
	ctx.r10.s64 = 0;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// stb r10,21(r11)
	PPC_STORE_U8(ctx.r11.u32 + 21, ctx.r10.u8);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82a24688
	ctx.lr = 0x828111B0;
	sub_82A24688(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// addi r3,r11,-172
	ctx.r3.s64 = ctx.r11.s64 + -172;
	// bne cr6,0x828111c4
	if (!ctx.cr6.eq) goto loc_828111C4;
	// li r3,0
	ctx.r3.s64 = 0;
loc_828111C4:
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x82825298
	ctx.lr = 0x828111CC;
	sub_82825298(ctx, base);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82e01548
	ctx.lr = 0x828111D4;
	sub_82E01548(ctx, base);
loc_828111D4:
	// lwz r3,92(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x828111e4
	if (ctx.cr6.eq) goto loc_828111E4;
	// bl 0x82480108
	ctx.lr = 0x828111E4;
	sub_82480108(ctx, base);
loc_828111E4:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x833a01fc
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_828111EC"))) PPC_WEAK_FUNC(sub_828111EC);
PPC_FUNC_IMPL(__imp__sub_828111EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_828111F0"))) PPC_WEAK_FUNC(sub_828111F0);
PPC_FUNC_IMPL(__imp__sub_828111F0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x833a0194
	ctx.lr = 0x828111F8;
	__savegprlr_23(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,176(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 176);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r24,r4
	ctx.r24.u64 = ctx.r4.u64;
	// mr r25,r5
	ctx.r25.u64 = ctx.r5.u64;
	// mr r23,r6
	ctx.r23.u64 = ctx.r6.u64;
	// lwz r28,92(r11)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r11.u32 + 92);
	// lwz r30,88(r11)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r11.u32 + 88);
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// beq cr6,0x82811240
	if (ctx.cr6.eq) goto loc_82811240;
	// addi r11,r28,4
	ctx.r11.s64 = ctx.r28.s64 + 4;
loc_82811224:
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
	// bne 0x82811224
	if (!ctx.cr0.eq) goto loc_82811224;
loc_82811240:
	// lwz r27,8(r30)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// li r31,0
	ctx.r31.s64 = 0;
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// beq cr6,0x828112f8
	if (ctx.cr6.eq) goto loc_828112F8;
	// li r26,1
	ctx.r26.s64 = 1;
loc_82811254:
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8280bf88
	ctx.lr = 0x82811264;
	sub_8280BF88(ctx, base);
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x828112dc
	if (ctx.cr6.eq) goto loc_828112DC;
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// bl 0x82e02d70
	ctx.lr = 0x82811278;
	sub_82E02D70(ctx, base);
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// beq cr6,0x828112dc
	if (ctx.cr6.eq) goto loc_828112DC;
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// clrlwi. r10,r23,24
	ctx.r10.u64 = ctx.r23.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// stb r26,21(r11)
	PPC_STORE_U8(ctx.r11.u32 + 21, ctx.r26.u8);
	// beq 0x828112a8
	if (ctx.cr0.eq) goto loc_828112A8;
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stb r26,20(r11)
	PPC_STORE_U8(ctx.r11.u32 + 20, ctx.r26.u8);
	// bl 0x8280be38
	ctx.lr = 0x828112A8;
	sub_8280BE38(ctx, base);
loc_828112A8:
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82a24688
	ctx.lr = 0x828112B4;
	sub_82A24688(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// addi r3,r11,-172
	ctx.r3.s64 = ctx.r11.s64 + -172;
	// bne cr6,0x828112c8
	if (!ctx.cr6.eq) goto loc_828112C8;
	// li r3,0
	ctx.r3.s64 = 0;
loc_828112C8:
	// mr r5,r25
	ctx.r5.u64 = ctx.r25.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x82826170
	ctx.lr = 0x828112D4;
	sub_82826170(ctx, base);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82e01548
	ctx.lr = 0x828112DC;
	sub_82E01548(ctx, base);
loc_828112DC:
	// lwz r3,84(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x828112ec
	if (ctx.cr6.eq) goto loc_828112EC;
	// bl 0x82480108
	ctx.lr = 0x828112EC;
	sub_82480108(ctx, base);
loc_828112EC:
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// cmplw cr6,r31,r27
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r27.u32, ctx.xer);
	// blt cr6,0x82811254
	if (ctx.cr6.lt) goto loc_82811254;
loc_828112F8:
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// beq cr6,0x82811308
	if (ctx.cr6.eq) goto loc_82811308;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82480108
	ctx.lr = 0x82811308;
	sub_82480108(ctx, base);
loc_82811308:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x833a01e4
	__restgprlr_23(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82811310"))) PPC_WEAK_FUNC(sub_82811310);
PPC_FUNC_IMPL(__imp__sub_82811310) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x833a0198
	ctx.lr = 0x82811318;
	__savegprlr_24(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,176(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 176);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// mr r25,r4
	ctx.r25.u64 = ctx.r4.u64;
	// mr r24,r5
	ctx.r24.u64 = ctx.r5.u64;
	// lwz r26,92(r11)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r11.u32 + 92);
	// lwz r30,88(r11)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r11.u32 + 88);
	// cmplwi cr6,r26,0
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, 0, ctx.xer);
	// beq cr6,0x8281135c
	if (ctx.cr6.eq) goto loc_8281135C;
	// addi r11,r26,4
	ctx.r11.s64 = ctx.r26.s64 + 4;
loc_82811340:
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
	// bne 0x82811340
	if (!ctx.cr0.eq) goto loc_82811340;
loc_8281135C:
	// lwz r29,8(r30)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// li r28,0
	ctx.r28.s64 = 0;
	// mr r31,r28
	ctx.r31.u64 = ctx.r28.u64;
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x82811410
	if (ctx.cr6.eq) goto loc_82811410;
loc_82811370:
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8280bf88
	ctx.lr = 0x82811380;
	sub_8280BF88(ctx, base);
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x828113f4
	if (ctx.cr6.eq) goto loc_828113F4;
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// bl 0x82e02d70
	ctx.lr = 0x82811394;
	sub_82E02D70(ctx, base);
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// beq cr6,0x828113f4
	if (ctx.cr6.eq) goto loc_828113F4;
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// clrlwi. r10,r24,24
	ctx.r10.u64 = ctx.r24.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// stb r28,21(r11)
	PPC_STORE_U8(ctx.r11.u32 + 21, ctx.r28.u8);
	// beq 0x828113c4
	if (ctx.cr0.eq) goto loc_828113C4;
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stb r28,20(r11)
	PPC_STORE_U8(ctx.r11.u32 + 20, ctx.r28.u8);
	// bl 0x8280be38
	ctx.lr = 0x828113C4;
	sub_8280BE38(ctx, base);
loc_828113C4:
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82a24688
	ctx.lr = 0x828113D0;
	sub_82A24688(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// addi r3,r11,-172
	ctx.r3.s64 = ctx.r11.s64 + -172;
	// bne cr6,0x828113e4
	if (!ctx.cr6.eq) goto loc_828113E4;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
loc_828113E4:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x82825298
	ctx.lr = 0x828113EC;
	sub_82825298(ctx, base);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82e01548
	ctx.lr = 0x828113F4;
	sub_82E01548(ctx, base);
loc_828113F4:
	// lwz r3,84(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82811404
	if (ctx.cr6.eq) goto loc_82811404;
	// bl 0x82480108
	ctx.lr = 0x82811404;
	sub_82480108(ctx, base);
loc_82811404:
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// cmplw cr6,r31,r29
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r29.u32, ctx.xer);
	// blt cr6,0x82811370
	if (ctx.cr6.lt) goto loc_82811370;
loc_82811410:
	// cmplwi cr6,r26,0
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, 0, ctx.xer);
	// beq cr6,0x82811420
	if (ctx.cr6.eq) goto loc_82811420;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x82480108
	ctx.lr = 0x82811420;
	sub_82480108(ctx, base);
loc_82811420:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x833a01e8
	__restgprlr_24(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82811428"))) PPC_WEAK_FUNC(sub_82811428);
PPC_FUNC_IMPL(__imp__sub_82811428) {
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
	// lbz r30,20(r4)
	ctx.r30.u64 = PPC_LOAD_U8(ctx.r4.u32 + 20);
	// addi r3,r4,16
	ctx.r3.s64 = ctx.r4.s64 + 16;
	// bl 0x82e01bf8
	ctx.lr = 0x8281144C;
	sub_82E01BF8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// bl 0x82810f98
	ctx.lr = 0x8281145C;
	sub_82810F98(ctx, base);
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

__attribute__((alias("__imp__sub_82811474"))) PPC_WEAK_FUNC(sub_82811474);
PPC_FUNC_IMPL(__imp__sub_82811474) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82811478"))) PPC_WEAK_FUNC(sub_82811478);
PPC_FUNC_IMPL(__imp__sub_82811478) {
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
	// addi r3,r4,16
	ctx.r3.s64 = ctx.r4.s64 + 16;
	// bl 0x82e01bf8
	ctx.lr = 0x82811494;
	sub_82E01BF8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x828110c8
	ctx.lr = 0x828114A0;
	sub_828110C8(ctx, base);
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

__attribute__((alias("__imp__sub_828114B4"))) PPC_WEAK_FUNC(sub_828114B4);
PPC_FUNC_IMPL(__imp__sub_828114B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_828114B8"))) PPC_WEAK_FUNC(sub_828114B8);
PPC_FUNC_IMPL(__imp__sub_828114B8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x833a01ac
	ctx.lr = 0x828114C0;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r30,4(r3)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// lwz r31,4(r30)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// b 0x828114f8
	goto loc_828114F8;
loc_828114D4:
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r3,r31,12
	ctx.r3.s64 = ctx.r31.s64 + 12;
	// bl 0x82e022f0
	ctx.lr = 0x828114E0;
	sub_82E022F0(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x828114f0
	if (ctx.cr0.eq) goto loc_828114F0;
	// lwz r31,8(r31)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// b 0x828114f8
	goto loc_828114F8;
loc_828114F0:
	// mr r30,r31
	ctx.r30.u64 = ctx.r31.u64;
	// lwz r31,0(r31)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
loc_828114F8:
	// lbz r11,21(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 21);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x828114d4
	if (ctx.cr0.eq) goto loc_828114D4;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x833a01fc
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82811510"))) PPC_WEAK_FUNC(sub_82811510);
PPC_FUNC_IMPL(__imp__sub_82811510) {
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
	// stw r4,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r4.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r3,r3,4
	ctx.r3.s64 = ctx.r3.s64 + 4;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// bl 0x82810718
	ctx.lr = 0x82811538;
	sub_82810718(ctx, base);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82c10e98
	ctx.lr = 0x82811548;
	sub_82C10E98(ctx, base);
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

__attribute__((alias("__imp__sub_82811564"))) PPC_WEAK_FUNC(sub_82811564);
PPC_FUNC_IMPL(__imp__sub_82811564) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82811568"))) PPC_WEAK_FUNC(sub_82811568);
PPC_FUNC_IMPL(__imp__sub_82811568) {
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
	// stw r4,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r4.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r3,r3,4
	ctx.r3.s64 = ctx.r3.s64 + 4;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// bl 0x828107e0
	ctx.lr = 0x82811590;
	sub_828107E0(ctx, base);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82c10e98
	ctx.lr = 0x828115A0;
	sub_82C10E98(ctx, base);
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

__attribute__((alias("__imp__sub_828115BC"))) PPC_WEAK_FUNC(sub_828115BC);
PPC_FUNC_IMPL(__imp__sub_828115BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_828115C0"))) PPC_WEAK_FUNC(sub_828115C0);
PPC_FUNC_IMPL(__imp__sub_828115C0) {
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
	// stw r4,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r4.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r3,r3,4
	ctx.r3.s64 = ctx.r3.s64 + 4;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// bl 0x828108a8
	ctx.lr = 0x828115E8;
	sub_828108A8(ctx, base);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82c10e98
	ctx.lr = 0x828115F8;
	sub_82C10E98(ctx, base);
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

__attribute__((alias("__imp__sub_82811614"))) PPC_WEAK_FUNC(sub_82811614);
PPC_FUNC_IMPL(__imp__sub_82811614) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82811618"))) PPC_WEAK_FUNC(sub_82811618);
PPC_FUNC_IMPL(__imp__sub_82811618) {
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
	// stw r4,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r4.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r3,r3,4
	ctx.r3.s64 = ctx.r3.s64 + 4;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// bl 0x82810970
	ctx.lr = 0x82811640;
	sub_82810970(ctx, base);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82c10e98
	ctx.lr = 0x82811650;
	sub_82C10E98(ctx, base);
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

__attribute__((alias("__imp__sub_8281166C"))) PPC_WEAK_FUNC(sub_8281166C);
PPC_FUNC_IMPL(__imp__sub_8281166C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82811670"))) PPC_WEAK_FUNC(sub_82811670);
PPC_FUNC_IMPL(__imp__sub_82811670) {
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
	// stw r4,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r4.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r3,r3,4
	ctx.r3.s64 = ctx.r3.s64 + 4;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// bl 0x82810a90
	ctx.lr = 0x82811698;
	sub_82810A90(ctx, base);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82c10e98
	ctx.lr = 0x828116A8;
	sub_82C10E98(ctx, base);
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

__attribute__((alias("__imp__sub_828116C4"))) PPC_WEAK_FUNC(sub_828116C4);
PPC_FUNC_IMPL(__imp__sub_828116C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_828116C8"))) PPC_WEAK_FUNC(sub_828116C8);
PPC_FUNC_IMPL(__imp__sub_828116C8) {
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
	// stw r4,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r4.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r3,r3,4
	ctx.r3.s64 = ctx.r3.s64 + 4;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// bl 0x82810b58
	ctx.lr = 0x828116F0;
	sub_82810B58(ctx, base);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82c10e98
	ctx.lr = 0x82811700;
	sub_82C10E98(ctx, base);
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

__attribute__((alias("__imp__sub_8281171C"))) PPC_WEAK_FUNC(sub_8281171C);
PPC_FUNC_IMPL(__imp__sub_8281171C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

