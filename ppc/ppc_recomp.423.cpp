#include "ppc_recomp_shared.h"

__attribute__((alias("__imp__sub_832663A8"))) PPC_WEAK_FUNC(sub_832663A8);
PPC_FUNC_IMPL(__imp__sub_832663A8) {
	PPC_FUNC_PROLOGUE();
	// li r4,0
	ctx.r4.s64 = 0;
	// b 0x832662a0
	sub_832662A0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832663B0"))) PPC_WEAK_FUNC(sub_832663B0);
PPC_FUNC_IMPL(__imp__sub_832663B0) {
	PPC_FUNC_PROLOGUE();
	// li r4,1
	ctx.r4.s64 = 1;
	// b 0x832662a0
	sub_832662A0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832663B8"))) PPC_WEAK_FUNC(sub_832663B8);
PPC_FUNC_IMPL(__imp__sub_832663B8) {
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
	// li r31,0
	ctx.r31.s64 = 0;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// ble cr6,0x832663ec
	if (!ctx.cr6.gt) goto loc_832663EC;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// li r3,696
	ctx.r3.s64 = 696;
	// bl 0x833e3268
	ctx.lr = 0x832663E8;
	sub_833E3268(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
loc_832663EC:
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// ble cr6,0x83266404
	if (!ctx.cr6.gt) goto loc_83266404;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// li r3,16
	ctx.r3.s64 = 16;
	// bl 0x833e3268
	ctx.lr = 0x83266400;
	sub_833E3268(ctx, base);
	// add r31,r3,r31
	ctx.r31.u64 = ctx.r3.u64 + ctx.r31.u64;
loc_83266404:
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

__attribute__((alias("__imp__sub_83266420"))) PPC_WEAK_FUNC(sub_83266420);
PPC_FUNC_IMPL(__imp__sub_83266420) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// subfic r11,r3,0
	ctx.xer.ca = ctx.r3.u32 <= 0;
	ctx.r11.s64 = 0 - ctx.r3.s64;
	// rlwinm r11,r3,1,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 1) & 0x1;
	// li r10,8
	ctx.r10.s64 = 8;
	// addme r11,r11
	temp.u64 = ctx.r11.u32 + ctx.xer.ca + 0xFFFFFFFF;
	ctx.xer.ca = temp.u64 >> 32;
	ctx.r11.u64 = temp.u32;
	// and r3,r11,r10
	ctx.r3.u64 = ctx.r11.u64 & ctx.r10.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83266438"))) PPC_WEAK_FUNC(sub_83266438);
PPC_FUNC_IMPL(__imp__sub_83266438) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x833a0198
	ctx.lr = 0x83266440;
	__savegprlr_24(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31827
	ctx.r11.s64 = -2085814272;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r31,r11,6868
	ctx.r31.s64 = ctx.r11.s64 + 6868;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// mr r26,r5
	ctx.r26.u64 = ctx.r5.u64;
	// lwz r11,6868(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 6868);
	// mr r25,r6
	ctx.r25.u64 = ctx.r6.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x83266474
	if (ctx.cr6.eq) goto loc_83266474;
	// lis r11,-32219
	ctx.r11.s64 = -2111504384;
	// addi r4,r11,3800
	ctx.r4.s64 = ctx.r11.s64 + 3800;
	// b 0x8326658c
	goto loc_8326658C;
loc_83266474:
	// li r11,1
	ctx.r11.s64 = 1;
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// bne cr6,0x8326648c
	if (!ctx.cr6.eq) goto loc_8326648C;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x83266598
	goto loc_83266598;
loc_8326648C:
	// lis r24,-31827
	ctx.r24.s64 = -2085814272;
	// lwz r11,6872(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 6872);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x83266594
	if (!ctx.cr6.eq) goto loc_83266594;
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// ble cr6,0x83266584
	if (!ctx.cr6.gt) goto loc_83266584;
	// cmpwi cr6,r28,0
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// ble cr6,0x83266584
	if (!ctx.cr6.gt) goto loc_83266584;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// li r3,696
	ctx.r3.s64 = 696;
	// bl 0x833e3268
	ctx.lr = 0x832664B8;
	sub_833E3268(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// li r3,16
	ctx.r3.s64 = 16;
	// bl 0x833e3268
	ctx.lr = 0x832664C8;
	sub_833E3268(ctx, base);
	// add r11,r3,r29
	ctx.r11.u64 = ctx.r3.u64 + ctx.r29.u64;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// cmpw cr6,r25,r11
	ctx.cr6.compare<int32_t>(ctx.r25.s32, ctx.r11.s32, ctx.xer);
	// bge cr6,0x832664e4
	if (!ctx.cr6.lt) goto loc_832664E4;
	// lis r11,-32219
	ctx.r11.s64 = -2111504384;
	// addi r4,r11,3740
	ctx.r4.s64 = ctx.r11.s64 + 3740;
	// b 0x8326658c
	goto loc_8326658C;
loc_832664E4:
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// li r3,696
	ctx.r3.s64 = 696;
	// bl 0x833e3298
	ctx.lr = 0x832664F8;
	sub_833E3298(ctx, base);
	// stw r3,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r3.u32);
	// stw r30,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r30.u32);
	// add r5,r29,r26
	ctx.r5.u64 = ctx.r29.u64 + ctx.r26.u64;
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// li r3,16
	ctx.r3.s64 = 16;
	// bl 0x833e3298
	ctx.lr = 0x83266514;
	sub_833E3298(ctx, base);
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// stw r28,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r28.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// stw r3,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r3.u32);
	// beq cr6,0x83266540
	if (ctx.cr6.eq) goto loc_83266540;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x83266560
	if (ctx.cr6.eq) goto loc_83266560;
	// addi r11,r31,8
	ctx.r11.s64 = ctx.r31.s64 + 8;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r11,6872(r24)
	PPC_STORE_U32(ctx.r24.u32 + 6872, ctx.r11.u32);
	// b 0x83266598
	goto loc_83266598;
loc_83266540:
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x83266560
	if (ctx.cr6.eq) goto loc_83266560;
	// bl 0x833e3328
	ctx.lr = 0x8326654C;
	sub_833E3328(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r11.u32);
	// stw r10,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r10.u32);
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
loc_83266560:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x83266594
	if (ctx.cr6.eq) goto loc_83266594;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// bl 0x833e3328
	ctx.lr = 0x83266570;
	sub_833E3328(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r11.u32);
	// stw r10,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r10.u32);
	// b 0x83266594
	goto loc_83266594;
loc_83266584:
	// lis r11,-32219
	ctx.r11.s64 = -2111504384;
	// addi r4,r11,3664
	ctx.r4.s64 = ctx.r11.s64 + 3664;
loc_8326658C:
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x83257c00
	ctx.lr = 0x83266594;
	sub_83257C00(ctx, base);
loc_83266594:
	// li r3,-1
	ctx.r3.s64 = -1;
loc_83266598:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x833a01e8
	__restgprlr_24(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832665A0"))) PPC_WEAK_FUNC(sub_832665A0);
PPC_FUNC_IMPL(__imp__sub_832665A0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x833a01a8
	ctx.lr = 0x832665A8;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r28,-31827
	ctx.r28.s64 = -2085814272;
	// lwz r11,6868(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 6868);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x832665d4
	if (!ctx.cr6.eq) goto loc_832665D4;
	// lis r11,-32219
	ctx.r11.s64 = -2111504384;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r4,r11,3856
	ctx.r4.s64 = ctx.r11.s64 + 3856;
	// bl 0x83257c00
	ctx.lr = 0x832665CC;
	sub_83257C00(ctx, base);
	// li r3,-1
	ctx.r3.s64 = -1;
	// b 0x83266628
	goto loc_83266628;
loc_832665D4:
	// lis r29,-31827
	ctx.r29.s64 = -2085814272;
	// li r30,0
	ctx.r30.s64 = 0;
	// lwz r31,6872(r29)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r29.u32 + 6872);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x83266620
	if (ctx.cr6.eq) goto loc_83266620;
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x83266600
	if (ctx.cr6.eq) goto loc_83266600;
	// bl 0x833e3328
	ctx.lr = 0x832665F8;
	sub_833E3328(ctx, base);
	// stw r30,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r30.u32);
	// stw r30,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r30.u32);
loc_83266600:
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x83266618
	if (ctx.cr6.eq) goto loc_83266618;
	// bl 0x833e3328
	ctx.lr = 0x83266610;
	sub_833E3328(ctx, base);
	// stw r30,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r30.u32);
	// stw r30,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r30.u32);
loc_83266618:
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
	// stw r30,6872(r29)
	PPC_STORE_U32(ctx.r29.u32 + 6872, ctx.r30.u32);
loc_83266620:
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r30,6868(r28)
	PPC_STORE_U32(ctx.r28.u32 + 6868, ctx.r30.u32);
loc_83266628:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x833a01f8
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83266630"))) PPC_WEAK_FUNC(sub_83266630);
PPC_FUNC_IMPL(__imp__sub_83266630) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x833a0194
	ctx.lr = 0x83266638;
	__savegprlr_23(ctx, base);
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31827
	ctx.r11.s64 = -2085814272;
	// li r10,1
	ctx.r10.s64 = 1;
	// addi r30,r11,6896
	ctx.r30.s64 = ctx.r11.s64 + 6896;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// li r5,1080
	ctx.r5.s64 = 1080;
	// addi r3,r30,744
	ctx.r3.s64 = ctx.r30.s64 + 744;
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r10,1824(r30)
	PPC_STORE_U32(ctx.r30.u32 + 1824, ctx.r10.u32);
	// bl 0x833a2b30
	ctx.lr = 0x83266660;
	sub_833A2B30(ctx, base);
	// lis r8,-32219
	ctx.r8.s64 = -2111504384;
	// lis r9,-32219
	ctx.r9.s64 = -2111504384;
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// lis r11,-32219
	ctx.r11.s64 = -2111504384;
	// li r31,0
	ctx.r31.s64 = 0;
	// addi r26,r8,4088
	ctx.r26.s64 = ctx.r8.s64 + 4088;
	// addi r25,r9,4068
	ctx.r25.s64 = ctx.r9.s64 + 4068;
	// addi r24,r10,-4356
	ctx.r24.s64 = ctx.r10.s64 + -4356;
	// addi r23,r11,4040
	ctx.r23.s64 = ctx.r11.s64 + 4040;
loc_83266684:
	// cmpwi cr6,r31,4
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 4, ctx.xer);
	// li r4,32
	ctx.r4.s64 = 32;
	// bne cr6,0x832666a8
	if (!ctx.cr6.eq) goto loc_832666A8;
	// addi r11,r30,1848
	ctx.r11.s64 = ctx.r30.s64 + 1848;
	// mr r6,r23
	ctx.r6.u64 = ctx.r23.u64;
	// mr r5,r24
	ctx.r5.u64 = ctx.r24.u64;
	// addi r3,r11,128
	ctx.r3.s64 = ctx.r11.s64 + 128;
	// bl 0x8325a308
	ctx.lr = 0x832666A4;
	sub_8325A308(ctx, base);
	// b 0x832666c4
	goto loc_832666C4;
loc_832666A8:
	// addi r10,r30,1848
	ctx.r10.s64 = ctx.r30.s64 + 1848;
	// rlwinm r11,r31,5,0,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 5) & 0xFFFFFFE0;
	// mr r6,r25
	ctx.r6.u64 = ctx.r25.u64;
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// mr r7,r31
	ctx.r7.u64 = ctx.r31.u64;
	// add r3,r11,r10
	ctx.r3.u64 = ctx.r11.u64 + ctx.r10.u64;
	// bl 0x8325a308
	ctx.lr = 0x832666C4;
	sub_8325A308(ctx, base);
loc_832666C4:
	// li r5,36
	ctx.r5.s64 = 36;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x833a2b30
	ctx.lr = 0x832666D4;
	sub_833A2B30(ctx, base);
	// addi r9,r30,1848
	ctx.r9.s64 = ctx.r30.s64 + 1848;
	// rlwinm r10,r31,5,0,26
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 5) & 0xFFFFFFE0;
	// stw r27,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r27.u32);
	// mulli r11,r31,148
	ctx.r11.s64 = ctx.r31.s64 * 148;
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + ctx.r30.u64;
	// li r9,148
	ctx.r9.s64 = 148;
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// stw r11,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r11.u32);
	// stw r9,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r9.u32);
	// addi r10,r30,744
	ctx.r10.s64 = ctx.r30.s64 + 744;
	// stw r8,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r8.u32);
	// mulli r11,r31,216
	ctx.r11.s64 = ctx.r31.s64 * 216;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// add r3,r11,r10
	ctx.r3.u64 = ctx.r11.u64 + ctx.r10.u64;
	// bl 0x832688e0
	ctx.lr = 0x83266718;
	sub_832688E0(ctx, base);
	// addi r28,r30,1828
	ctx.r28.s64 = ctx.r30.s64 + 1828;
	// rlwinm r29,r31,2,0,29
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFFFFFFFC;
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// stwx r3,r29,r28
	PPC_STORE_U32(ctx.r29.u32 + ctx.r28.u32, ctx.r3.u32);
	// beq 0x8326676c
	if (ctx.cr0.eq) goto loc_8326676C;
	// cmpwi cr6,r31,4
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 4, ctx.xer);
	// bne cr6,0x83266740
	if (!ctx.cr6.eq) goto loc_83266740;
	// lwz r3,1844(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1844);
	// li r4,-2
	ctx.r4.s64 = -2;
	// b 0x83266744
	goto loc_83266744;
loc_83266740:
	// li r4,2
	ctx.r4.s64 = 2;
loc_83266744:
	// bl 0x832688b0
	ctx.lr = 0x83266748;
	sub_832688B0(ctx, base);
	// li r4,5
	ctx.r4.s64 = 5;
	// lwzx r3,r29,r28
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + ctx.r28.u32);
	// bl 0x832688c8
	ctx.lr = 0x83266754;
	sub_832688C8(ctx, base);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// cmpwi cr6,r31,5
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 5, ctx.xer);
	// blt cr6,0x83266684
	if (ctx.cr6.lt) goto loc_83266684;
	// li r3,0
	ctx.r3.s64 = 0;
loc_83266764:
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x833a01e4
	__restgprlr_23(ctx, base);
	return;
loc_8326676C:
	// lis r11,-32219
	ctx.r11.s64 = -2111504384;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r4,r11,3996
	ctx.r4.s64 = ctx.r11.s64 + 3996;
	// bl 0x83257c00
	ctx.lr = 0x8326677C;
	sub_83257C00(ctx, base);
	// li r3,-1
	ctx.r3.s64 = -1;
	// b 0x83266764
	goto loc_83266764;
}

__attribute__((alias("__imp__sub_83266784"))) PPC_WEAK_FUNC(sub_83266784);
PPC_FUNC_IMPL(__imp__sub_83266784) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83266788"))) PPC_WEAK_FUNC(sub_83266788);
PPC_FUNC_IMPL(__imp__sub_83266788) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x833a01ac
	ctx.lr = 0x83266790;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31827
	ctx.r11.s64 = -2085814272;
	// li r29,0
	ctx.r29.s64 = 0;
	// addi r30,r11,8720
	ctx.r30.s64 = ctx.r11.s64 + 8720;
	// addi r31,r30,4
	ctx.r31.s64 = ctx.r30.s64 + 4;
loc_832667A4:
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x832667b8
	if (ctx.cr6.eq) goto loc_832667B8;
	// bl 0x832687a8
	ctx.lr = 0x832667B4;
	sub_832687A8(ctx, base);
	// stw r29,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r29.u32);
loc_832667B8:
	// addi r11,r30,4
	ctx.r11.s64 = ctx.r30.s64 + 4;
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// addi r11,r11,20
	ctx.r11.s64 = ctx.r11.s64 + 20;
	// cmpw cr6,r31,r11
	ctx.cr6.compare<int32_t>(ctx.r31.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x832667a4
	if (ctx.cr6.lt) goto loc_832667A4;
	// addi r3,r30,-1080
	ctx.r3.s64 = ctx.r30.s64 + -1080;
	// li r5,1080
	ctx.r5.s64 = 1080;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x833a2b30
	ctx.lr = 0x832667DC;
	sub_833A2B30(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r29,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r29.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x833a01fc
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832667EC"))) PPC_WEAK_FUNC(sub_832667EC);
PPC_FUNC_IMPL(__imp__sub_832667EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832667F0"))) PPC_WEAK_FUNC(sub_832667F0);
PPC_FUNC_IMPL(__imp__sub_832667F0) {
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
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x83266820
	if (ctx.cr6.lt) goto loc_83266820;
	// cmpwi cr6,r3,5
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 5, ctx.xer);
	// bge cr6,0x83266820
	if (!ctx.cr6.lt) goto loc_83266820;
	// lis r11,-31827
	ctx.r11.s64 = -2085814272;
	// rlwinm r10,r3,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r11,r11,8724
	ctx.r11.s64 = ctx.r11.s64 + 8724;
	// lwzx r3,r10,r11
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// b 0x83266838
	goto loc_83266838;
loc_83266820:
	// lis r11,-32219
	ctx.r11.s64 = -2111504384;
	// li r5,-2
	ctx.r5.s64 = -2;
	// addi r4,r11,4096
	ctx.r4.s64 = ctx.r11.s64 + 4096;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x83257c28
	ctx.lr = 0x83266834;
	sub_83257C28(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
loc_83266838:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83266848"))) PPC_WEAK_FUNC(sub_83266848);
PPC_FUNC_IMPL(__imp__sub_83266848) {
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
	// lis r11,-31827
	ctx.r11.s64 = -2085814272;
	// addi r30,r11,8724
	ctx.r30.s64 = ctx.r11.s64 + 8724;
	// mr r31,r30
	ctx.r31.u64 = ctx.r30.u64;
loc_83266868:
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x83268a68
	ctx.lr = 0x83266870;
	sub_83268A68(ctx, base);
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// addi r11,r30,20
	ctx.r11.s64 = ctx.r30.s64 + 20;
	// cmpw cr6,r31,r11
	ctx.cr6.compare<int32_t>(ctx.r31.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x83266868
	if (ctx.cr6.lt) goto loc_83266868;
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

__attribute__((alias("__imp__sub_83266898"))) PPC_WEAK_FUNC(sub_83266898);
PPC_FUNC_IMPL(__imp__sub_83266898) {
	PPC_FUNC_PROLOGUE();
	// b 0x83268a20
	sub_83268A20(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8326689C"))) PPC_WEAK_FUNC(sub_8326689C);
PPC_FUNC_IMPL(__imp__sub_8326689C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832668A0"))) PPC_WEAK_FUNC(sub_832668A0);
PPC_FUNC_IMPL(__imp__sub_832668A0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x833a018c
	ctx.lr = 0x832668A8;
	__savegprlr_21(ctx, base);
	// stwu r1,-224(r1)
	ea = -224 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31827
	ctx.r11.s64 = -2085814272;
	// li r10,1
	ctx.r10.s64 = 1;
	// addi r31,r11,8904
	ctx.r31.s64 = ctx.r11.s64 + 8904;
	// mr r23,r3
	ctx.r23.u64 = ctx.r3.u64;
	// li r5,216
	ctx.r5.s64 = 216;
	// addi r3,r31,448
	ctx.r3.s64 = ctx.r31.s64 + 448;
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r10,664(r31)
	PPC_STORE_U32(ctx.r31.u32 + 664, ctx.r10.u32);
	// bl 0x833a2b30
	ctx.lr = 0x832668D0;
	sub_833A2B30(ctx, base);
	// addi r3,r31,152
	ctx.r3.s64 = ctx.r31.s64 + 152;
	// li r5,292
	ctx.r5.s64 = 292;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x833a2b30
	ctx.lr = 0x832668E0;
	sub_833A2B30(ctx, base);
	// lis r11,-32219
	ctx.r11.s64 = -2111504384;
	// lis r10,-32219
	ctx.r10.s64 = -2111504384;
	// addi r24,r31,152
	ctx.r24.s64 = ctx.r31.s64 + 152;
	// addi r25,r31,448
	ctx.r25.s64 = ctx.r31.s64 + 448;
	// mr r26,r31
	ctx.r26.u64 = ctx.r31.u64;
	// addi r29,r31,676
	ctx.r29.s64 = ctx.r31.s64 + 676;
	// li r27,0
	ctx.r27.s64 = 0;
	// li r30,0
	ctx.r30.s64 = 0;
	// addi r22,r11,4292
	ctx.r22.s64 = ctx.r11.s64 + 4292;
	// addi r21,r10,4264
	ctx.r21.s64 = ctx.r10.s64 + 4264;
loc_83266908:
	// li r5,36
	ctx.r5.s64 = 36;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x833a2b30
	ctx.lr = 0x83266918;
	sub_833A2B30(ctx, base);
	// stw r23,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r23.u32);
	// mr r6,r21
	ctx.r6.u64 = ctx.r21.u64;
	// mr r5,r22
	ctx.r5.u64 = ctx.r22.u64;
	// mr r7,r27
	ctx.r7.u64 = ctx.r27.u64;
	// li r4,32
	ctx.r4.s64 = 32;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8325a308
	ctx.lr = 0x83266934;
	sub_8325A308(ctx, base);
	// li r11,148
	ctx.r11.s64 = 148;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r29,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r29.u32);
	// stw r26,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r26.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r11,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r11.u32);
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// stw r10,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r10.u32);
	// bl 0x832688e0
	ctx.lr = 0x83266958;
	sub_832688E0(ctx, base);
	// addi r28,r31,668
	ctx.r28.s64 = ctx.r31.s64 + 668;
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// stwx r3,r30,r28
	PPC_STORE_U32(ctx.r30.u32 + ctx.r28.u32, ctx.r3.u32);
	// beq 0x832669cc
	if (ctx.cr0.eq) goto loc_832669CC;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x82c10e98
	ctx.lr = 0x83266970;
	sub_82C10E98(ctx, base);
	// addi r11,r31,672
	ctx.r11.s64 = ctx.r31.s64 + 672;
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// stwx r3,r30,r11
	PPC_STORE_U32(ctx.r30.u32 + ctx.r11.u32, ctx.r3.u32);
	// beq 0x832669e4
	if (ctx.cr0.eq) goto loc_832669E4;
	// li r4,-2
	ctx.r4.s64 = -2;
	// lwzx r3,r30,r28
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r28.u32);
	// bl 0x832688b0
	ctx.lr = 0x8326698C;
	sub_832688B0(ctx, base);
	// li r4,5
	ctx.r4.s64 = 5;
	// lwzx r3,r30,r28
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r28.u32);
	// bl 0x832688c8
	ctx.lr = 0x83266998;
	sub_832688C8(ctx, base);
	// addi r11,r31,676
	ctx.r11.s64 = ctx.r31.s64 + 676;
	// addi r29,r29,32
	ctx.r29.s64 = ctx.r29.s64 + 32;
	// addi r11,r11,32
	ctx.r11.s64 = ctx.r11.s64 + 32;
	// addi r27,r27,1
	ctx.r27.s64 = ctx.r27.s64 + 1;
	// addi r26,r26,148
	ctx.r26.s64 = ctx.r26.s64 + 148;
	// addi r25,r25,216
	ctx.r25.s64 = ctx.r25.s64 + 216;
	// addi r24,r24,292
	ctx.r24.s64 = ctx.r24.s64 + 292;
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// cmpw cr6,r29,r11
	ctx.cr6.compare<int32_t>(ctx.r29.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x83266908
	if (ctx.cr6.lt) goto loc_83266908;
	// li r3,0
	ctx.r3.s64 = 0;
loc_832669C4:
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x833a01dc
	__restgprlr_21(ctx, base);
	return;
loc_832669CC:
	// lis r11,-32219
	ctx.r11.s64 = -2111504384;
	// addi r4,r11,4220
	ctx.r4.s64 = ctx.r11.s64 + 4220;
loc_832669D4:
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x83257c00
	ctx.lr = 0x832669DC;
	sub_83257C00(ctx, base);
	// li r3,-1
	ctx.r3.s64 = -1;
	// b 0x832669c4
	goto loc_832669C4;
loc_832669E4:
	// lis r11,-32219
	ctx.r11.s64 = -2111504384;
	// addi r4,r11,4180
	ctx.r4.s64 = ctx.r11.s64 + 4180;
	// b 0x832669d4
	goto loc_832669D4;
}

__attribute__((alias("__imp__sub_832669F0"))) PPC_WEAK_FUNC(sub_832669F0);
PPC_FUNC_IMPL(__imp__sub_832669F0) {
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
	// lis r11,-31827
	ctx.r11.s64 = -2085814272;
	// addi r31,r11,9568
	ctx.r31.s64 = ctx.r11.s64 + 9568;
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x83266a20
	if (ctx.cr6.eq) goto loc_83266A20;
	// bl 0x82c10e98
	ctx.lr = 0x83266A18;
	sub_82C10E98(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
loc_83266A20:
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x83266a38
	if (ctx.cr6.eq) goto loc_83266A38;
	// bl 0x832687a8
	ctx.lr = 0x83266A30;
	sub_832687A8(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
loc_83266A38:
	// addi r3,r31,-512
	ctx.r3.s64 = ctx.r31.s64 + -512;
	// li r5,292
	ctx.r5.s64 = 292;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x833a2b30
	ctx.lr = 0x83266A48;
	sub_833A2B30(ctx, base);
	// addi r3,r31,-216
	ctx.r3.s64 = ctx.r31.s64 + -216;
	// li r5,216
	ctx.r5.s64 = 216;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x833a2b30
	ctx.lr = 0x83266A58;
	sub_833A2B30(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
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

__attribute__((alias("__imp__sub_83266A78"))) PPC_WEAK_FUNC(sub_83266A78);
PPC_FUNC_IMPL(__imp__sub_83266A78) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31827
	ctx.r11.s64 = -2085814272;
	// rlwinm r10,r3,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r11,r11,9572
	ctx.r11.s64 = ctx.r11.s64 + 9572;
	// lwzx r3,r10,r11
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83266A8C"))) PPC_WEAK_FUNC(sub_83266A8C);
PPC_FUNC_IMPL(__imp__sub_83266A8C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83266A90"))) PPC_WEAK_FUNC(sub_83266A90);
PPC_FUNC_IMPL(__imp__sub_83266A90) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31827
	ctx.r11.s64 = -2085814272;
	// rlwinm r10,r3,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r11,r11,9576
	ctx.r11.s64 = ctx.r11.s64 + 9576;
	// lwzx r3,r10,r11
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83266AA4"))) PPC_WEAK_FUNC(sub_83266AA4);
PPC_FUNC_IMPL(__imp__sub_83266AA4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83266AA8"))) PPC_WEAK_FUNC(sub_83266AA8);
PPC_FUNC_IMPL(__imp__sub_83266AA8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31827
	ctx.r11.s64 = -2085814272;
	// lwz r3,9572(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 9572);
	// b 0x83268a68
	sub_83268A68(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83266AB4"))) PPC_WEAK_FUNC(sub_83266AB4);
PPC_FUNC_IMPL(__imp__sub_83266AB4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83266AB8"))) PPC_WEAK_FUNC(sub_83266AB8);
PPC_FUNC_IMPL(__imp__sub_83266AB8) {
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
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bgt cr6,0x83266adc
	if (ctx.cr6.gt) goto loc_83266ADC;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x83266af4
	goto loc_83266AF4;
loc_83266ADC:
	// bl 0x83267f08
	ctx.lr = 0x83266AE0;
	sub_83267F08(ctx, base);
	// cmpwi cr6,r3,24
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 24, ctx.xer);
	// bge cr6,0x83266aec
	if (!ctx.cr6.lt) goto loc_83266AEC;
	// li r3,24
	ctx.r3.s64 = 24;
loc_83266AEC:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x833e3268
	ctx.lr = 0x83266AF4;
	sub_833E3268(ctx, base);
loc_83266AF4:
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

__attribute__((alias("__imp__sub_83266B08"))) PPC_WEAK_FUNC(sub_83266B08);
PPC_FUNC_IMPL(__imp__sub_83266B08) {
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
	// lis r11,-31827
	ctx.r11.s64 = -2085814272;
	// addi r31,r11,9612
	ctx.r31.s64 = ctx.r11.s64 + 9612;
	// lwz r11,9612(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 9612);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x83266b40
	if (!ctx.cr6.eq) goto loc_83266B40;
	// lis r11,-32219
	ctx.r11.s64 = -2111504384;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r4,r11,4372
	ctx.r4.s64 = ctx.r11.s64 + 4372;
	// bl 0x83257c00
	ctx.lr = 0x83266B3C;
	sub_83257C00(ctx, base);
	// b 0x83266b60
	goto loc_83266B60;
loc_83266B40:
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x83266b58
	if (ctx.cr6.eq) goto loc_83266B58;
	// bl 0x833e3328
	ctx.lr = 0x83266B50;
	sub_833E3328(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
loc_83266B58:
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
loc_83266B60:
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

__attribute__((alias("__imp__sub_83266B74"))) PPC_WEAK_FUNC(sub_83266B74);
PPC_FUNC_IMPL(__imp__sub_83266B74) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83266B78"))) PPC_WEAK_FUNC(sub_83266B78);
PPC_FUNC_IMPL(__imp__sub_83266B78) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31827
	ctx.r11.s64 = -2085814272;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r11,9616(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 9616);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x83266b94
	if (!ctx.cr6.eq) goto loc_83266B94;
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_83266B94:
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// b 0x833e3418
	sub_833E3418(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83266B9C"))) PPC_WEAK_FUNC(sub_83266B9C);
PPC_FUNC_IMPL(__imp__sub_83266B9C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83266BA0"))) PPC_WEAK_FUNC(sub_83266BA0);
PPC_FUNC_IMPL(__imp__sub_83266BA0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31827
	ctx.r11.s64 = -2085814272;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r11,9616(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 9616);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// b 0x833e34e0
	sub_833E34E0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83266BBC"))) PPC_WEAK_FUNC(sub_83266BBC);
PPC_FUNC_IMPL(__imp__sub_83266BBC) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83266BC0"))) PPC_WEAK_FUNC(sub_83266BC0);
PPC_FUNC_IMPL(__imp__sub_83266BC0) {
	PPC_FUNC_PROLOGUE();
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r10,r4
	ctx.r10.u64 = ctx.r4.u64;
	// stw r11,0(r5)
	PPC_STORE_U32(ctx.r5.u32 + 0, ctx.r11.u32);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x83266be0
	if (!ctx.cr6.eq) goto loc_83266BE0;
	// li r3,-1
	ctx.r3.s64 = -1;
	// blr 
	return;
loc_83266BE0:
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// mr r3,r10
	ctx.r3.u64 = ctx.r10.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_83266BF0"))) PPC_WEAK_FUNC(sub_83266BF0);
PPC_FUNC_IMPL(__imp__sub_83266BF0) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x83266c04
	if (!ctx.cr6.eq) goto loc_83266C04;
	// li r3,-1
	ctx.r3.s64 = -1;
	// blr 
	return;
loc_83266C04:
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_83266C10"))) PPC_WEAK_FUNC(sub_83266C10);
PPC_FUNC_IMPL(__imp__sub_83266C10) {
	PPC_FUNC_PROLOGUE();
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r10,r4
	ctx.r10.u64 = ctx.r4.u64;
	// stw r11,0(r7)
	PPC_STORE_U32(ctx.r7.u32 + 0, ctx.r11.u32);
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// lwz r11,12(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// mr r5,r6
	ctx.r5.u64 = ctx.r6.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x83266c38
	if (!ctx.cr6.eq) goto loc_83266C38;
	// li r3,-1
	ctx.r3.s64 = -1;
	// blr 
	return;
loc_83266C38:
	// mr r6,r7
	ctx.r6.u64 = ctx.r7.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// mr r3,r10
	ctx.r3.u64 = ctx.r10.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_83266C48"))) PPC_WEAK_FUNC(sub_83266C48);
PPC_FUNC_IMPL(__imp__sub_83266C48) {
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
	// lwz r11,16(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x83266c68
	if (!ctx.cr6.eq) goto loc_83266C68;
	// li r3,-1
	ctx.r3.s64 = -1;
	// b 0x83266c78
	goto loc_83266C78;
loc_83266C68:
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x83266C74;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r3,0
	ctx.r3.s64 = 0;
loc_83266C78:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83266C88"))) PPC_WEAK_FUNC(sub_83266C88);
PPC_FUNC_IMPL(__imp__sub_83266C88) {
	PPC_FUNC_PROLOGUE();
	// li r11,-1
	ctx.r11.s64 = -1;
	// mr r10,r4
	ctx.r10.u64 = ctx.r4.u64;
	// std r11,0(r5)
	PPC_STORE_U64(ctx.r5.u32 + 0, ctx.r11.u64);
	// lwz r11,20(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x83266ca8
	if (!ctx.cr6.eq) goto loc_83266CA8;
	// li r3,-1
	ctx.r3.s64 = -1;
	// blr 
	return;
loc_83266CA8:
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// mr r3,r10
	ctx.r3.u64 = ctx.r10.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_83266CB8"))) PPC_WEAK_FUNC(sub_83266CB8);
PPC_FUNC_IMPL(__imp__sub_83266CB8) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,24(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// mr r10,r4
	ctx.r10.u64 = ctx.r4.u64;
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// mr r5,r6
	ctx.r5.u64 = ctx.r6.u64;
	// mr r6,r7
	ctx.r6.u64 = ctx.r7.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x83266cdc
	if (!ctx.cr6.eq) goto loc_83266CDC;
	// li r3,-1
	ctx.r3.s64 = -1;
	// blr 
	return;
loc_83266CDC:
	// mr r7,r8
	ctx.r7.u64 = ctx.r8.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// mr r3,r10
	ctx.r3.u64 = ctx.r10.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_83266CEC"))) PPC_WEAK_FUNC(sub_83266CEC);
PPC_FUNC_IMPL(__imp__sub_83266CEC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83266CF0"))) PPC_WEAK_FUNC(sub_83266CF0);
PPC_FUNC_IMPL(__imp__sub_83266CF0) {
	PPC_FUNC_PROLOGUE();
	// li r11,1
	ctx.r11.s64 = 1;
	// mr r10,r4
	ctx.r10.u64 = ctx.r4.u64;
	// stw r11,0(r5)
	PPC_STORE_U32(ctx.r5.u32 + 0, ctx.r11.u32);
	// lwz r11,28(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 28);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x83266d10
	if (!ctx.cr6.eq) goto loc_83266D10;
	// li r3,-1
	ctx.r3.s64 = -1;
	// blr 
	return;
loc_83266D10:
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// mr r3,r10
	ctx.r3.u64 = ctx.r10.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_83266D20"))) PPC_WEAK_FUNC(sub_83266D20);
PPC_FUNC_IMPL(__imp__sub_83266D20) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x83266d34
	if (!ctx.cr6.eq) goto loc_83266D34;
	// li r3,-1
	ctx.r3.s64 = -1;
	// blr 
	return;
loc_83266D34:
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_83266D40"))) PPC_WEAK_FUNC(sub_83266D40);
PPC_FUNC_IMPL(__imp__sub_83266D40) {
	PPC_FUNC_PROLOGUE();
	// li r11,-1
	ctx.r11.s64 = -1;
	// mr r10,r4
	ctx.r10.u64 = ctx.r4.u64;
	// std r11,0(r5)
	PPC_STORE_U64(ctx.r5.u32 + 0, ctx.r11.u64);
	// lwz r11,36(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 36);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x83266d60
	if (!ctx.cr6.eq) goto loc_83266D60;
	// li r3,-1
	ctx.r3.s64 = -1;
	// blr 
	return;
loc_83266D60:
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// mr r3,r10
	ctx.r3.u64 = ctx.r10.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_83266D70"))) PPC_WEAK_FUNC(sub_83266D70);
PPC_FUNC_IMPL(__imp__sub_83266D70) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,40(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 40);
	// mr r10,r4
	ctx.r10.u64 = ctx.r4.u64;
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// mr r5,r6
	ctx.r5.u64 = ctx.r6.u64;
	// mr r6,r7
	ctx.r6.u64 = ctx.r7.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x83266d94
	if (!ctx.cr6.eq) goto loc_83266D94;
	// li r3,-1
	ctx.r3.s64 = -1;
	// blr 
	return;
loc_83266D94:
	// mr r7,r8
	ctx.r7.u64 = ctx.r8.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// mr r3,r10
	ctx.r3.u64 = ctx.r10.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_83266DA4"))) PPC_WEAK_FUNC(sub_83266DA4);
PPC_FUNC_IMPL(__imp__sub_83266DA4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83266DA8"))) PPC_WEAK_FUNC(sub_83266DA8);
PPC_FUNC_IMPL(__imp__sub_83266DA8) {
	PPC_FUNC_PROLOGUE();
	// li r11,1
	ctx.r11.s64 = 1;
	// mr r10,r4
	ctx.r10.u64 = ctx.r4.u64;
	// stw r11,0(r5)
	PPC_STORE_U32(ctx.r5.u32 + 0, ctx.r11.u32);
	// lwz r11,44(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 44);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x83266dc8
	if (!ctx.cr6.eq) goto loc_83266DC8;
	// li r3,-1
	ctx.r3.s64 = -1;
	// blr 
	return;
loc_83266DC8:
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// mr r3,r10
	ctx.r3.u64 = ctx.r10.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_83266DD8"))) PPC_WEAK_FUNC(sub_83266DD8);
PPC_FUNC_IMPL(__imp__sub_83266DD8) {
	PPC_FUNC_PROLOGUE();
	// li r11,-1
	ctx.r11.s64 = -1;
	// mr r10,r4
	ctx.r10.u64 = ctx.r4.u64;
	// std r11,0(r5)
	PPC_STORE_U64(ctx.r5.u32 + 0, ctx.r11.u64);
	// lwz r11,52(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 52);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x83266df8
	if (!ctx.cr6.eq) goto loc_83266DF8;
	// li r3,-1
	ctx.r3.s64 = -1;
	// blr 
	return;
loc_83266DF8:
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// mr r3,r10
	ctx.r3.u64 = ctx.r10.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_83266E08"))) PPC_WEAK_FUNC(sub_83266E08);
PPC_FUNC_IMPL(__imp__sub_83266E08) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,56(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 56);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x83266e1c
	if (!ctx.cr6.eq) goto loc_83266E1C;
	// li r3,-1
	ctx.r3.s64 = -1;
	// blr 
	return;
loc_83266E1C:
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_83266E28"))) PPC_WEAK_FUNC(sub_83266E28);
PPC_FUNC_IMPL(__imp__sub_83266E28) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x833a01a8
	ctx.lr = 0x83266E30;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31827
	ctx.r11.s64 = -2085814272;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// addi r30,r11,9612
	ctx.r30.s64 = ctx.r11.s64 + 9612;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// lwz r11,9612(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 9612);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x83266e68
	if (ctx.cr6.eq) goto loc_83266E68;
	// lis r11,-32219
	ctx.r11.s64 = -2111504384;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r4,r11,4440
	ctx.r4.s64 = ctx.r11.s64 + 4440;
	// bl 0x83257c00
	ctx.lr = 0x83266E64;
	sub_83257C00(ctx, base);
	// b 0x83266ee0
	goto loc_83266EE0;
loc_83266E68:
	// li r11,1
	ctx.r11.s64 = 1;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
	// bl 0x83266ab8
	ctx.lr = 0x83266E78;
	sub_83266AB8(ctx, base);
	// cmpw cr6,r31,r3
	ctx.cr6.compare<int32_t>(ctx.r31.s32, ctx.r3.s32, ctx.xer);
	// bge cr6,0x83266e9c
	if (!ctx.cr6.lt) goto loc_83266E9C;
	// lis r11,-32219
	ctx.r11.s64 = -2111504384;
	// li r5,-3
	ctx.r5.s64 = -3;
	// addi r4,r11,4428
	ctx.r4.s64 = ctx.r11.s64 + 4428;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x83257c28
	ctx.lr = 0x83266E94;
	sub_83257C28(ctx, base);
	// bl 0x83266b08
	ctx.lr = 0x83266E98;
	sub_83266B08(ctx, base);
	// b 0x83266ee0
	goto loc_83266EE0;
loc_83266E9C:
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// beq cr6,0x83266ee0
	if (ctx.cr6.eq) goto loc_83266EE0;
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// ble cr6,0x83266ee0
	if (!ctx.cr6.gt) goto loc_83266EE0;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x833a2b30
	ctx.lr = 0x83266EBC;
	sub_833A2B30(ctx, base);
	// bl 0x83267f08
	ctx.lr = 0x83266EC0;
	sub_83267F08(ctx, base);
	// cmpwi cr6,r3,24
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 24, ctx.xer);
	// bge cr6,0x83266ecc
	if (!ctx.cr6.lt) goto loc_83266ECC;
	// li r3,24
	ctx.r3.s64 = 24;
loc_83266ECC:
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x833e3298
	ctx.lr = 0x83266EDC;
	sub_833E3298(ctx, base);
	// stw r3,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r3.u32);
loc_83266EE0:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x833a01f8
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83266EE8"))) PPC_WEAK_FUNC(sub_83266EE8);
PPC_FUNC_IMPL(__imp__sub_83266EE8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x833a01a8
	ctx.lr = 0x83266EF0;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31827
	ctx.r11.s64 = -2085814272;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// lwz r10,9620(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 9620);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x83266f88
	if (!ctx.cr6.eq) goto loc_83266F88;
	// bl 0x833a77b0
	ctx.lr = 0x83266F14;
	sub_833A77B0(ctx, base);
	// cmpwi cr6,r3,13
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 13, ctx.xer);
	// blt cr6,0x83266f38
	if (ctx.cr6.lt) goto loc_83266F38;
	// lis r11,-32219
	ctx.r11.s64 = -2111504384;
	// li r5,9
	ctx.r5.s64 = 9;
	// addi r4,r11,2624
	ctx.r4.s64 = ctx.r11.s64 + 2624;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x833a31f0
	ctx.lr = 0x83266F30;
	sub_833A31F0(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// b 0x83266f3c
	goto loc_83266F3C;
loc_83266F38:
	// li r28,-1
	ctx.r28.s64 = -1;
loc_83266F3C:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x83266f64
	if (ctx.cr6.eq) goto loc_83266F64;
	// cmpwi cr6,r28,0
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// bne cr6,0x83266f58
	if (!ctx.cr6.eq) goto loc_83266F58;
	// li r11,4
	ctx.r11.s64 = 4;
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
	// b 0x83266f64
	goto loc_83266F64;
loc_83266F58:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83267f10
	ctx.lr = 0x83266F64;
	sub_83267F10(ctx, base);
loc_83266F64:
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x83266fa4
	if (ctx.cr6.eq) goto loc_83266FA4;
	// cmpwi cr6,r28,0
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// bne cr6,0x83266f7c
	if (!ctx.cr6.eq) goto loc_83266F7C;
	// bl 0x8326cc78
	ctx.lr = 0x83266F78;
	sub_8326CC78(ctx, base);
	// b 0x83266f80
	goto loc_83266F80;
loc_83266F7C:
	// bl 0x83268220
	ctx.lr = 0x83266F80;
	sub_83268220(ctx, base);
loc_83266F80:
	// stw r3,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r3.u32);
	// b 0x83266fa4
	goto loc_83266FA4;
loc_83266F88:
	// lwz r11,9620(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 9620);
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x83266F9C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x83266fe0
	if (!ctx.cr0.eq) goto loc_83266FE0;
loc_83266FA4:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// li r3,0
	ctx.r3.s64 = 0;
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// bne cr6,0x83266fc8
	if (!ctx.cr6.eq) goto loc_83266FC8;
	// lis r11,-32219
	ctx.r11.s64 = -2111504384;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// addi r4,r11,4520
	ctx.r4.s64 = ctx.r11.s64 + 4520;
	// bl 0x83257c10
	ctx.lr = 0x83266FC4;
	sub_83257C10(ctx, base);
	// b 0x83266fdc
	goto loc_83266FDC;
loc_83266FC8:
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// bne cr6,0x83266fe0
	if (!ctx.cr6.eq) goto loc_83266FE0;
	// lis r11,-32219
	ctx.r11.s64 = -2111504384;
	// addi r4,r11,4484
	ctx.r4.s64 = ctx.r11.s64 + 4484;
	// bl 0x83257c00
	ctx.lr = 0x83266FDC;
	sub_83257C00(ctx, base);
loc_83266FDC:
	// li r3,-1
	ctx.r3.s64 = -1;
loc_83266FE0:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x833a01f8
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83266FE8"))) PPC_WEAK_FUNC(sub_83266FE8);
PPC_FUNC_IMPL(__imp__sub_83266FE8) {
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
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// bne cr6,0x83267008
	if (!ctx.cr6.eq) goto loc_83267008;
	// addi r31,r1,80
	ctx.r31.s64 = ctx.r1.s64 + 80;
loc_83267008:
	// li r11,-1
	ctx.r11.s64 = -1;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// bge cr6,0x83267034
	if (!ctx.cr6.lt) goto loc_83267034;
	// lis r11,-32219
	ctx.r11.s64 = -2111504384;
	// li r5,-2
	ctx.r5.s64 = -2;
	// addi r4,r11,4636
	ctx.r4.s64 = ctx.r11.s64 + 4636;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x83257c28
	ctx.lr = 0x8326702C;
	sub_83257C28(ctx, base);
	// li r3,-2
	ctx.r3.s64 = -2;
	// b 0x83267058
	goto loc_83267058;
loc_83267034:
	// bne cr6,0x83267044
	if (!ctx.cr6.eq) goto loc_83267044;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// b 0x83267054
	goto loc_83267054;
loc_83267044:
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// li r3,48
	ctx.r3.s64 = 48;
	// bl 0x833e3268
	ctx.lr = 0x83267050;
	sub_833E3268(ctx, base);
	// stw r3,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r3.u32);
loc_83267054:
	// li r3,0
	ctx.r3.s64 = 0;
loc_83267058:
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

__attribute__((alias("__imp__sub_8326706C"))) PPC_WEAK_FUNC(sub_8326706C);
PPC_FUNC_IMPL(__imp__sub_8326706C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83267070"))) PPC_WEAK_FUNC(sub_83267070);
PPC_FUNC_IMPL(__imp__sub_83267070) {
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
	// lwz r11,9624(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 9624);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x832670ac
	if (!ctx.cr6.eq) goto loc_832670AC;
	// lis r11,-32219
	ctx.r11.s64 = -2111504384;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r4,r11,4660
	ctx.r4.s64 = ctx.r11.s64 + 4660;
	// bl 0x83257c00
	ctx.lr = 0x832670A4;
	sub_83257C00(ctx, base);
	// li r3,-1
	ctx.r3.s64 = -1;
	// b 0x832670d4
	goto loc_832670D4;
loc_832670AC:
	// lis r31,-31827
	ctx.r31.s64 = -2085814272;
	// lwz r3,9628(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 9628);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x832670c8
	if (ctx.cr6.eq) goto loc_832670C8;
	// bl 0x833e3328
	ctx.lr = 0x832670C0;
	sub_833E3328(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,9628(r31)
	PPC_STORE_U32(ctx.r31.u32 + 9628, ctx.r11.u32);
loc_832670C8:
	// li r11,0
	ctx.r11.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r11,9624(r30)
	PPC_STORE_U32(ctx.r30.u32 + 9624, ctx.r11.u32);
loc_832670D4:
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

__attribute__((alias("__imp__sub_832670EC"))) PPC_WEAK_FUNC(sub_832670EC);
PPC_FUNC_IMPL(__imp__sub_832670EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832670F0"))) PPC_WEAK_FUNC(sub_832670F0);
PPC_FUNC_IMPL(__imp__sub_832670F0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x833a01ac
	ctx.lr = 0x832670F8;
	__savegprlr_29(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x832671c8
	if (ctx.cr6.lt) goto loc_832671C8;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x832671c8
	if (ctx.cr6.eq) goto loc_832671C8;
	// lis r11,-31827
	ctx.r11.s64 = -2085814272;
	// lwz r10,9624(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 9624);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x83267140
	if (ctx.cr6.eq) goto loc_83267140;
	// lis r11,-32219
	ctx.r11.s64 = -2111504384;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r4,r11,4732
	ctx.r4.s64 = ctx.r11.s64 + 4732;
	// bl 0x83257c00
	ctx.lr = 0x83267138;
	sub_83257C00(ctx, base);
loc_83267138:
	// li r3,-1
	ctx.r3.s64 = -1;
	// b 0x832671e0
	goto loc_832671E0;
loc_83267140:
	// li r10,1
	ctx.r10.s64 = 1;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r10,9624(r11)
	PPC_STORE_U32(ctx.r11.u32 + 9624, ctx.r10.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83266fe8
	ctx.lr = 0x83267154;
	sub_83266FE8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x832671ac
	if (!ctx.cr0.eq) goto loc_832671AC;
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmpw cr6,r30,r11
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x832671ac
	if (ctx.cr6.lt) goto loc_832671AC;
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// beq cr6,0x832671a4
	if (ctx.cr6.eq) goto loc_832671A4;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8325a370
	ctx.lr = 0x83267180;
	sub_8325A370(ctx, base);
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// li r3,48
	ctx.r3.s64 = 48;
	// bl 0x833e3298
	ctx.lr = 0x83267194;
	sub_833E3298(ctx, base);
	// lis r11,-31827
	ctx.r11.s64 = -2085814272;
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// stw r3,9628(r11)
	PPC_STORE_U32(ctx.r11.u32 + 9628, ctx.r3.u32);
	// beq 0x832671c0
	if (ctx.cr0.eq) goto loc_832671C0;
loc_832671A4:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x832671e0
	goto loc_832671E0;
loc_832671AC:
	// lis r11,-32219
	ctx.r11.s64 = -2111504384;
	// li r5,-3
	ctx.r5.s64 = -3;
	// addi r4,r11,4648
	ctx.r4.s64 = ctx.r11.s64 + 4648;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x83257c28
	ctx.lr = 0x832671C0;
	sub_83257C28(ctx, base);
loc_832671C0:
	// bl 0x83267070
	ctx.lr = 0x832671C4;
	sub_83267070(ctx, base);
	// b 0x83267138
	goto loc_83267138;
loc_832671C8:
	// lis r11,-32219
	ctx.r11.s64 = -2111504384;
	// li r5,-2
	ctx.r5.s64 = -2;
	// addi r4,r11,4720
	ctx.r4.s64 = ctx.r11.s64 + 4720;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x83257c28
	ctx.lr = 0x832671DC;
	sub_83257C28(ctx, base);
	// li r3,-2
	ctx.r3.s64 = -2;
loc_832671E0:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x833a01fc
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832671E8"))) PPC_WEAK_FUNC(sub_832671E8);
PPC_FUNC_IMPL(__imp__sub_832671E8) {
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
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x83267250
	if (ctx.cr6.lt) goto loc_83267250;
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// blt cr6,0x83267250
	if (ctx.cr6.lt) goto loc_83267250;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x83267248
	if (ctx.cr6.eq) goto loc_83267248;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x83267228
	if (!ctx.cr6.eq) goto loc_83267228;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,0(r5)
	PPC_STORE_U32(ctx.r5.u32 + 0, ctx.r11.u32);
	// b 0x83267248
	goto loc_83267248;
loc_83267228:
	// addi r11,r4,7
	ctx.r11.s64 = ctx.r4.s64 + 7;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// srawi r11,r11,3
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x7) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 3;
	// addze r11,r11
	temp.s64 = ctx.r11.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r11.u32;
	ctx.r11.s64 = temp.s64;
	// addi r11,r11,24
	ctx.r11.s64 = ctx.r11.s64 + 24;
	// rlwinm r3,r11,3,0,28
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// bl 0x833e3268
	ctx.lr = 0x83267244;
	sub_833E3268(ctx, base);
	// stw r3,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r3.u32);
loc_83267248:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x83267268
	goto loc_83267268;
loc_83267250:
	// lis r11,-32219
	ctx.r11.s64 = -2111504384;
	// li r5,-2
	ctx.r5.s64 = -2;
	// addi r4,r11,4852
	ctx.r4.s64 = ctx.r11.s64 + 4852;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x83257c28
	ctx.lr = 0x83267264;
	sub_83257C28(ctx, base);
	// li r3,-2
	ctx.r3.s64 = -2;
loc_83267268:
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

__attribute__((alias("__imp__sub_8326727C"))) PPC_WEAK_FUNC(sub_8326727C);
PPC_FUNC_IMPL(__imp__sub_8326727C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83267280"))) PPC_WEAK_FUNC(sub_83267280);
PPC_FUNC_IMPL(__imp__sub_83267280) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x833a01a8
	ctx.lr = 0x83267288;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r31,r6
	ctx.r31.u64 = ctx.r6.u64;
	// bl 0x832671e8
	ctx.lr = 0x832672A4;
	sub_832671E8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x83267318
	if (!ctx.cr0.eq) goto loc_83267318;
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmpw cr6,r31,r11
	ctx.cr6.compare<int32_t>(ctx.r31.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x83267318
	if (ctx.cr6.lt) goto loc_83267318;
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq cr6,0x83267330
	if (ctx.cr6.eq) goto loc_83267330;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x833a2b30
	ctx.lr = 0x832672D0;
	sub_833A2B30(ctx, base);
	// addi r11,r30,7
	ctx.r11.s64 = ctx.r30.s64 + 7;
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// srawi r11,r11,3
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x7) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 3;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// addze r11,r11
	temp.s64 = ctx.r11.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r11.u32;
	ctx.r11.s64 = temp.s64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// addi r11,r11,24
	ctx.r11.s64 = ctx.r11.s64 + 24;
	// rlwinm r3,r11,3,0,28
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// bl 0x833e3298
	ctx.lr = 0x832672F4;
	sub_833E3298(ctx, base);
	// lis r11,-31827
	ctx.r11.s64 = -2085814272;
	// stw r3,9636(r11)
	PPC_STORE_U32(ctx.r11.u32 + 9636, ctx.r3.u32);
	// lwz r11,9636(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 9636);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8326732c
	if (ctx.cr6.eq) goto loc_8326732C;
	// lis r11,-31827
	ctx.r11.s64 = -2085814272;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r30,9640(r11)
	PPC_STORE_U32(ctx.r11.u32 + 9640, ctx.r30.u32);
	// b 0x83267330
	goto loc_83267330;
loc_83267318:
	// lis r11,-32219
	ctx.r11.s64 = -2111504384;
	// li r5,-3
	ctx.r5.s64 = -3;
	// addi r4,r11,4864
	ctx.r4.s64 = ctx.r11.s64 + 4864;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x83257c28
	ctx.lr = 0x8326732C;
	sub_83257C28(ctx, base);
loc_8326732C:
	// li r3,-1
	ctx.r3.s64 = -1;
loc_83267330:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x833a01f8
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83267338"))) PPC_WEAK_FUNC(sub_83267338);
PPC_FUNC_IMPL(__imp__sub_83267338) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x833a01ac
	ctx.lr = 0x83267340;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r29,-31827
	ctx.r29.s64 = -2085814272;
	// lwz r11,9632(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 9632);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8326736c
	if (!ctx.cr6.eq) goto loc_8326736C;
	// lis r11,-32219
	ctx.r11.s64 = -2111504384;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r4,r11,4876
	ctx.r4.s64 = ctx.r11.s64 + 4876;
	// bl 0x83257c00
	ctx.lr = 0x83267364;
	sub_83257C00(ctx, base);
	// li r3,-1
	ctx.r3.s64 = -1;
	// b 0x832673a0
	goto loc_832673A0;
loc_8326736C:
	// lis r11,-31827
	ctx.r11.s64 = -2085814272;
	// lis r31,-31827
	ctx.r31.s64 = -2085814272;
	// li r30,0
	ctx.r30.s64 = 0;
	// stw r30,9640(r11)
	PPC_STORE_U32(ctx.r11.u32 + 9640, ctx.r30.u32);
	// lwz r11,9636(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 9636);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x83267394
	if (ctx.cr6.eq) goto loc_83267394;
	// lwz r3,9636(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 9636);
	// bl 0x833e3328
	ctx.lr = 0x83267390;
	sub_833E3328(ctx, base);
	// stw r30,9636(r31)
	PPC_STORE_U32(ctx.r31.u32 + 9636, ctx.r30.u32);
loc_83267394:
	// bl 0x82c10e98
	ctx.lr = 0x83267398;
	sub_82C10E98(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r30,9632(r29)
	PPC_STORE_U32(ctx.r29.u32 + 9632, ctx.r30.u32);
loc_832673A0:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x833a01fc
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832673A8"))) PPC_WEAK_FUNC(sub_832673A8);
PPC_FUNC_IMPL(__imp__sub_832673A8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x833a01a8
	ctx.lr = 0x832673B0;
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
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x83267440
	if (ctx.cr6.lt) goto loc_83267440;
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// blt cr6,0x83267440
	if (ctx.cr6.lt) goto loc_83267440;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x83267440
	if (ctx.cr6.eq) goto loc_83267440;
	// lis r11,-31827
	ctx.r11.s64 = -2085814272;
	// lwz r10,9632(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 9632);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x83267404
	if (ctx.cr6.eq) goto loc_83267404;
	// lis r11,-32219
	ctx.r11.s64 = -2111504384;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r4,r11,4948
	ctx.r4.s64 = ctx.r11.s64 + 4948;
	// bl 0x83257c00
	ctx.lr = 0x832673FC;
	sub_83257C00(ctx, base);
	// li r3,-1
	ctx.r3.s64 = -1;
	// b 0x83267458
	goto loc_83267458;
loc_83267404:
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r10,9632(r11)
	PPC_STORE_U32(ctx.r11.u32 + 9632, ctx.r10.u32);
	// bl 0x82c10e98
	ctx.lr = 0x83267410;
	sub_82C10E98(ctx, base);
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83267280
	ctx.lr = 0x83267424;
	sub_83267280(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x83267438
	if (ctx.cr0.eq) goto loc_83267438;
	// bl 0x83267338
	ctx.lr = 0x83267430;
	sub_83267338(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// b 0x83267458
	goto loc_83267458;
loc_83267438:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x83267458
	goto loc_83267458;
loc_83267440:
	// lis r11,-32219
	ctx.r11.s64 = -2111504384;
	// li r5,-2
	ctx.r5.s64 = -2;
	// addi r4,r11,4936
	ctx.r4.s64 = ctx.r11.s64 + 4936;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x83257c28
	ctx.lr = 0x83267454;
	sub_83257C28(ctx, base);
	// li r3,-2
	ctx.r3.s64 = -2;
loc_83267458:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x833a01f8
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83267460"))) PPC_WEAK_FUNC(sub_83267460);
PPC_FUNC_IMPL(__imp__sub_83267460) {
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
	// lwz r3,4(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// li r30,0
	ctx.r30.s64 = 0;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x83267490
	if (ctx.cr6.eq) goto loc_83267490;
	// bl 0x833e3328
	ctx.lr = 0x8326748C;
	sub_833E3328(ctx, base);
	// stw r30,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r30.u32);
loc_83267490:
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x832674a4
	if (ctx.cr6.eq) goto loc_832674A4;
	// bl 0x8325aa00
	ctx.lr = 0x832674A0;
	sub_8325AA00(ctx, base);
	// stw r30,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r30.u32);
loc_832674A4:
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x832674b8
	if (ctx.cr6.eq) goto loc_832674B8;
	// bl 0x8325a8e8
	ctx.lr = 0x832674B4;
	sub_8325A8E8(ctx, base);
	// stw r30,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r30.u32);
loc_832674B8:
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x832674cc
	if (ctx.cr6.eq) goto loc_832674CC;
	// bl 0x83258ee8
	ctx.lr = 0x832674C8;
	sub_83258EE8(ctx, base);
	// stw r30,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r30.u32);
loc_832674CC:
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

__attribute__((alias("__imp__sub_832674E4"))) PPC_WEAK_FUNC(sub_832674E4);
PPC_FUNC_IMPL(__imp__sub_832674E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832674E8"))) PPC_WEAK_FUNC(sub_832674E8);
PPC_FUNC_IMPL(__imp__sub_832674E8) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,12(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// b 0x8325a938
	sub_8325A938(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832674F0"))) PPC_WEAK_FUNC(sub_832674F0);
PPC_FUNC_IMPL(__imp__sub_832674F0) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,12(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// b 0x8325a978
	sub_8325A978(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832674F8"))) PPC_WEAK_FUNC(sub_832674F8);
PPC_FUNC_IMPL(__imp__sub_832674F8) {
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
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r3,8(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// li r30,0
	ctx.r30.s64 = 0;
	// bl 0x83265150
	ctx.lr = 0x83267520;
	sub_83265150(ctx, base);
	// lwz r11,116(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 116);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x832675e0
	if (ctx.cr6.eq) goto loc_832675E0;
	// lwz r11,72(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 72);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x83267758
	if (!ctx.cr6.gt) goto loc_83267758;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// ble cr6,0x83267560
	if (!ctx.cr6.gt) goto loc_83267560;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// beq cr6,0x83267590
	if (ctx.cr6.eq) goto loc_83267590;
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// beq cr6,0x83267574
	if (ctx.cr6.eq) goto loc_83267574;
	// cmpwi cr6,r11,5
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 5, ctx.xer);
	// beq cr6,0x83267588
	if (ctx.cr6.eq) goto loc_83267588;
	// cmpwi cr6,r11,6
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 6, ctx.xer);
	// bne cr6,0x83267758
	if (!ctx.cr6.eq) goto loc_83267758;
loc_83267560:
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// bl 0x83265970
	ctx.lr = 0x83267568;
	sub_83265970(ctx, base);
	// li r11,3
	ctx.r11.s64 = 3;
loc_8326756C:
	// li r30,1
	ctx.r30.s64 = 1;
	// b 0x83267754
	goto loc_83267754;
loc_83267574:
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x83267588
	if (ctx.cr6.eq) goto loc_83267588;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bne cr6,0x83267758
	if (!ctx.cr6.eq) goto loc_83267758;
loc_83267588:
	// stw r30,72(r31)
	PPC_STORE_U32(ctx.r31.u32 + 72, ctx.r30.u32);
	// b 0x83267758
	goto loc_83267758;
loc_83267590:
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x83267758
	if (!ctx.cr6.eq) goto loc_83267758;
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// bl 0x832652a0
	ctx.lr = 0x832675A8;
	sub_832652A0(ctx, base);
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x83267588
	if (ctx.cr6.eq) goto loc_83267588;
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// bl 0x83265258
	ctx.lr = 0x832675C0;
	sub_83265258(ctx, base);
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x832660f8
	ctx.lr = 0x832675D8;
	sub_832660F8(ctx, base);
	// li r11,4
	ctx.r11.s64 = 4;
	// b 0x83267754
	goto loc_83267754;
loc_832675E0:
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmpwi cr6,r10,3
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 3, ctx.xer);
	// bne cr6,0x832675fc
	if (!ctx.cr6.eq) goto loc_832675FC;
	// li r11,6
	ctx.r11.s64 = 6;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r11,72(r31)
	PPC_STORE_U32(ctx.r31.u32 + 72, ctx.r11.u32);
	// b 0x8326775c
	goto loc_8326775C;
loc_832675FC:
	// lwz r11,72(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 72);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// blt cr6,0x8326772c
	if (ctx.cr6.lt) goto loc_8326772C;
	// beq cr6,0x83267708
	if (ctx.cr6.eq) goto loc_83267708;
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// blt cr6,0x8326762c
	if (ctx.cr6.lt) goto loc_8326762C;
	// cmplwi cr6,r11,4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 4, ctx.xer);
	// bne cr6,0x83267758
	if (!ctx.cr6.eq) goto loc_83267758;
	// cmpwi cr6,r10,2
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 2, ctx.xer);
	// bne cr6,0x83267758
	if (!ctx.cr6.eq) goto loc_83267758;
	// li r11,5
	ctx.r11.s64 = 5;
	// b 0x83267754
	goto loc_83267754;
loc_8326762C:
	// cmpwi cr6,r10,2
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 2, ctx.xer);
	// bne cr6,0x832676b0
	if (!ctx.cr6.eq) goto loc_832676B0;
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// bl 0x83265a40
	ctx.lr = 0x83267640;
	sub_83265A40(ctx, base);
	// ld r10,64(r31)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r31.u32 + 64);
	// ld r11,88(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// ld r9,56(r31)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r31.u32 + 56);
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// add r11,r9,r11
	ctx.r11.u64 = ctx.r9.u64 + ctx.r11.u64;
	// std r10,64(r31)
	PPC_STORE_U64(ctx.r31.u32 + 64, ctx.r10.u64);
	// std r11,56(r31)
	PPC_STORE_U64(ctx.r31.u32 + 56, ctx.r11.u64);
	// ld r9,48(r31)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r31.u32 + 48);
	// cmpd cr6,r11,r9
	ctx.cr6.compare<int64_t>(ctx.r11.s64, ctx.r9.s64, ctx.xer);
	// blt cr6,0x8326766c
	if (ctx.cr6.lt) goto loc_8326766C;
	// std r30,56(r31)
	PPC_STORE_U64(ctx.r31.u32 + 56, ctx.r30.u64);
loc_8326766C:
	// ld r11,104(r31)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r31.u32 + 104);
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmpd cr6,r10,r11
	ctx.cr6.compare<int64_t>(ctx.r10.s64, ctx.r11.s64, ctx.xer);
	// bge cr6,0x83267684
	if (!ctx.cr6.lt) goto loc_83267684;
	// bl 0x83265970
	ctx.lr = 0x83267680;
	sub_83265970(ctx, base);
	// b 0x832676ac
	goto loc_832676AC;
loc_83267684:
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x83265258
	ctx.lr = 0x8326768C;
	sub_83265258(ctx, base);
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x832660f8
	ctx.lr = 0x832676A4;
	sub_832660F8(ctx, base);
	// li r11,4
	ctx.r11.s64 = 4;
	// stw r11,72(r31)
	PPC_STORE_U32(ctx.r31.u32 + 72, ctx.r11.u32);
loc_832676AC:
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
loc_832676B0:
	// ld r4,64(r31)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r31.u32 + 64);
	// ld r11,104(r31)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r31.u32 + 104);
	// cmpd cr6,r4,r11
	ctx.cr6.compare<int64_t>(ctx.r4.s64, ctx.r11.s64, ctx.xer);
	// bge cr6,0x83267758
	if (!ctx.cr6.lt) goto loc_83267758;
	// cmpwi cr6,r10,1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 1, ctx.xer);
	// beq cr6,0x83267758
	if (ctx.cr6.eq) goto loc_83267758;
	// ld r11,48(r31)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r31.u32 + 48);
	// ld r9,88(r31)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r31.u32 + 88);
	// rldicl r10,r11,1,63
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u64, 1) & 0x1;
	// subf r9,r9,r4
	ctx.r9.s64 = ctx.r4.s64 - ctx.r9.s64;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// sradi r7,r11,1
	ctx.xer.ca = (ctx.r11.s64 < 0) & ((ctx.r11.u64 & 0x1) != 0);
	ctx.r7.s64 = ctx.r11.s64 >> 1;
	// cmpd cr6,r9,r7
	ctx.cr6.compare<int64_t>(ctx.r9.s64, ctx.r7.s64, ctx.xer);
	// bgt cr6,0x83267758
	if (ctx.cr6.gt) goto loc_83267758;
	// ld r11,56(r31)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r31.u32 + 56);
	// mr r5,r7
	ctx.r5.u64 = ctx.r7.u64;
	// lwz r10,40(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// extsw r11,r11
	ctx.r11.s64 = ctx.r11.s32;
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// add r6,r11,r10
	ctx.r6.u64 = ctx.r11.u64 + ctx.r10.u64;
	// bl 0x832660f8
	ctx.lr = 0x83267704;
	sub_832660F8(ctx, base);
	// b 0x83267758
	goto loc_83267758;
loc_83267708:
	// cmpwi cr6,r10,2
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 2, ctx.xer);
	// bne cr6,0x83267758
	if (!ctx.cr6.eq) goto loc_83267758;
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// bl 0x83265970
	ctx.lr = 0x83267718;
	sub_83265970(ctx, base);
	// addi r4,r31,104
	ctx.r4.s64 = ctx.r31.s64 + 104;
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// bl 0x832653e8
	ctx.lr = 0x83267724;
	sub_832653E8(ctx, base);
	// li r11,2
	ctx.r11.s64 = 2;
	// b 0x8326756c
	goto loc_8326756C;
loc_8326772C:
	// li r7,0
	ctx.r7.s64 = 0;
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x832660f8
	ctx.lr = 0x83267744;
	sub_832660F8(ctx, base);
	// subfic r11,r3,0
	ctx.xer.ca = ctx.r3.u32 <= 0;
	ctx.r11.s64 = 0 - ctx.r3.s64;
	// subfe r11,r11,r11
	temp.u8 = (~ctx.r11.u32 + ctx.r11.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r11.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// andi. r11,r11,5
	ctx.r11.u64 = ctx.r11.u64 & 5;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
loc_83267754:
	// stw r11,72(r31)
	PPC_STORE_U32(ctx.r31.u32 + 72, ctx.r11.u32);
loc_83267758:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
loc_8326775C:
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

__attribute__((alias("__imp__sub_83267774"))) PPC_WEAK_FUNC(sub_83267774);
PPC_FUNC_IMPL(__imp__sub_83267774) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83267778"))) PPC_WEAK_FUNC(sub_83267778);
PPC_FUNC_IMPL(__imp__sub_83267778) {
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
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r3,12(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// li r30,0
	ctx.r30.s64 = 0;
	// bl 0x8326cfc8
	ctx.lr = 0x832677A0;
	sub_8326CFC8(ctx, base);
	// lwz r11,116(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 116);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x83267860
	if (ctx.cr6.eq) goto loc_83267860;
	// lwz r11,96(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 96);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x832679c8
	if (!ctx.cr6.gt) goto loc_832679C8;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// ble cr6,0x832677e0
	if (!ctx.cr6.gt) goto loc_832677E0;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// beq cr6,0x83267810
	if (ctx.cr6.eq) goto loc_83267810;
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// beq cr6,0x832677f4
	if (ctx.cr6.eq) goto loc_832677F4;
	// cmpwi cr6,r11,5
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 5, ctx.xer);
	// beq cr6,0x83267808
	if (ctx.cr6.eq) goto loc_83267808;
	// cmpwi cr6,r11,6
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 6, ctx.xer);
	// bne cr6,0x832679c8
	if (!ctx.cr6.eq) goto loc_832679C8;
loc_832677E0:
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// bl 0x8326d318
	ctx.lr = 0x832677E8;
	sub_8326D318(ctx, base);
	// li r11,3
	ctx.r11.s64 = 3;
loc_832677EC:
	// li r30,1
	ctx.r30.s64 = 1;
	// b 0x832679c4
	goto loc_832679C4;
loc_832677F4:
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x83267808
	if (ctx.cr6.eq) goto loc_83267808;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bne cr6,0x832679c8
	if (!ctx.cr6.eq) goto loc_832679C8;
loc_83267808:
	// stw r30,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r30.u32);
	// b 0x832679c8
	goto loc_832679C8;
loc_83267810:
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x832679c8
	if (!ctx.cr6.eq) goto loc_832679C8;
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// bl 0x8326d150
	ctx.lr = 0x83267828;
	sub_8326D150(ctx, base);
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x83267808
	if (ctx.cr6.eq) goto loc_83267808;
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// bl 0x8326d108
	ctx.lr = 0x83267840;
	sub_8326D108(ctx, base);
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x8326d498
	ctx.lr = 0x83267858;
	sub_8326D498(ctx, base);
	// li r11,4
	ctx.r11.s64 = 4;
	// b 0x832679c4
	goto loc_832679C4;
loc_83267860:
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmpwi cr6,r10,3
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 3, ctx.xer);
	// bne cr6,0x8326787c
	if (!ctx.cr6.eq) goto loc_8326787C;
	// li r11,6
	ctx.r11.s64 = 6;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r11,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r11.u32);
	// b 0x832679cc
	goto loc_832679CC;
loc_8326787C:
	// lwz r11,96(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 96);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// blt cr6,0x8326799c
	if (ctx.cr6.lt) goto loc_8326799C;
	// beq cr6,0x83267978
	if (ctx.cr6.eq) goto loc_83267978;
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// blt cr6,0x832678ac
	if (ctx.cr6.lt) goto loc_832678AC;
	// cmplwi cr6,r11,4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 4, ctx.xer);
	// bne cr6,0x832679c8
	if (!ctx.cr6.eq) goto loc_832679C8;
	// cmpwi cr6,r10,2
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 2, ctx.xer);
	// bne cr6,0x832679c8
	if (!ctx.cr6.eq) goto loc_832679C8;
	// li r11,5
	ctx.r11.s64 = 5;
	// b 0x832679c4
	goto loc_832679C4;
loc_832678AC:
	// cmpwi cr6,r10,2
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 2, ctx.xer);
	// bne cr6,0x8326793c
	if (!ctx.cr6.eq) goto loc_8326793C;
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// bl 0x8326d048
	ctx.lr = 0x832678C0;
	sub_8326D048(ctx, base);
	// ld r10,88(r31)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r31.u32 + 88);
	// ld r11,88(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// ld r9,80(r31)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r31.u32 + 80);
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// add r11,r9,r11
	ctx.r11.u64 = ctx.r9.u64 + ctx.r11.u64;
	// std r10,88(r31)
	PPC_STORE_U64(ctx.r31.u32 + 88, ctx.r10.u64);
	// std r11,80(r31)
	PPC_STORE_U64(ctx.r31.u32 + 80, ctx.r11.u64);
	// ld r9,48(r31)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r31.u32 + 48);
	// cmpd cr6,r11,r9
	ctx.cr6.compare<int64_t>(ctx.r11.s64, ctx.r9.s64, ctx.xer);
	// blt cr6,0x832678ec
	if (ctx.cr6.lt) goto loc_832678EC;
	// std r30,80(r31)
	PPC_STORE_U64(ctx.r31.u32 + 80, ctx.r30.u64);
loc_832678EC:
	// ld r11,104(r31)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r31.u32 + 104);
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// cmpd cr6,r10,r11
	ctx.cr6.compare<int64_t>(ctx.r10.s64, ctx.r11.s64, ctx.xer);
	// bge cr6,0x83267904
	if (!ctx.cr6.lt) goto loc_83267904;
	// bl 0x8326d318
	ctx.lr = 0x83267900;
	sub_8326D318(ctx, base);
	// b 0x83267938
	goto loc_83267938;
loc_83267904:
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x8326d108
	ctx.lr = 0x8326790C;
	sub_8326D108(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// bl 0x8326d0c0
	ctx.lr = 0x83267918;
	sub_8326D0C0(ctx, base);
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x8326d498
	ctx.lr = 0x83267930;
	sub_8326D498(ctx, base);
	// li r11,4
	ctx.r11.s64 = 4;
	// stw r11,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r11.u32);
loc_83267938:
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
loc_8326793C:
	// cmpwi cr6,r10,1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 1, ctx.xer);
	// beq cr6,0x832679c8
	if (ctx.cr6.eq) goto loc_832679C8;
	// ld r4,88(r31)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r31.u32 + 88);
	// ld r11,64(r31)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r31.u32 + 64);
	// subf r7,r4,r11
	ctx.r7.s64 = ctx.r11.s64 - ctx.r4.s64;
	// cmpdi cr6,r7,0
	ctx.cr6.compare<int64_t>(ctx.r7.s64, 0, ctx.xer);
	// ble cr6,0x832679c8
	if (!ctx.cr6.gt) goto loc_832679C8;
	// ld r11,80(r31)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r31.u32 + 80);
	// mr r5,r7
	ctx.r5.u64 = ctx.r7.u64;
	// lwz r10,40(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// extsw r11,r11
	ctx.r11.s64 = ctx.r11.s32;
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// add r6,r11,r10
	ctx.r6.u64 = ctx.r11.u64 + ctx.r10.u64;
	// bl 0x8326d498
	ctx.lr = 0x83267974;
	sub_8326D498(ctx, base);
	// b 0x832679c8
	goto loc_832679C8;
loc_83267978:
	// cmpwi cr6,r10,2
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 2, ctx.xer);
	// bne cr6,0x832679c8
	if (!ctx.cr6.eq) goto loc_832679C8;
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// bl 0x8326d318
	ctx.lr = 0x83267988;
	sub_8326D318(ctx, base);
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// bl 0x8326d150
	ctx.lr = 0x83267994;
	sub_8326D150(ctx, base);
	// li r11,2
	ctx.r11.s64 = 2;
	// b 0x832677ec
	goto loc_832677EC;
loc_8326799C:
	// li r7,0
	ctx.r7.s64 = 0;
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x8326d498
	ctx.lr = 0x832679B4;
	sub_8326D498(ctx, base);
	// subfic r11,r3,0
	ctx.xer.ca = ctx.r3.u32 <= 0;
	ctx.r11.s64 = 0 - ctx.r3.s64;
	// subfe r11,r11,r11
	temp.u8 = (~ctx.r11.u32 + ctx.r11.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r11.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// andi. r11,r11,5
	ctx.r11.u64 = ctx.r11.u64 & 5;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
loc_832679C4:
	// stw r11,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r11.u32);
loc_832679C8:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
loc_832679CC:
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

__attribute__((alias("__imp__sub_832679E4"))) PPC_WEAK_FUNC(sub_832679E4);
PPC_FUNC_IMPL(__imp__sub_832679E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832679E8"))) PPC_WEAK_FUNC(sub_832679E8);
PPC_FUNC_IMPL(__imp__sub_832679E8) {
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
	// std r3,128(r1)
	PPC_STORE_U64(ctx.r1.u32 + 128, ctx.r3.u64);
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// lwz r4,128(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// li r3,120
	ctx.r3.s64 = 120;
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// bge cr6,0x83267a30
	if (!ctx.cr6.lt) goto loc_83267A30;
	// lis r11,-32219
	ctx.r11.s64 = -2111504384;
	// addi r4,r11,5080
	ctx.r4.s64 = ctx.r11.s64 + 5080;
loc_83267A1C:
	// li r5,-2
	ctx.r5.s64 = -2;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x83257c28
	ctx.lr = 0x83267A28;
	sub_83257C28(ctx, base);
	// li r3,-2
	ctx.r3.s64 = -2;
	// b 0x83267a40
	goto loc_83267A40;
loc_83267A30:
	// bne cr6,0x83267a58
	if (!ctx.cr6.eq) goto loc_83267A58;
	// li r11,0
	ctx.r11.s64 = 0;
loc_83267A38:
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
	// li r3,0
	ctx.r3.s64 = 0;
loc_83267A40:
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
loc_83267A58:
	// lwz r11,132(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// li r31,36
	ctx.r31.s64 = 36;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// blt cr6,0x83267a88
	if (ctx.cr6.lt) goto loc_83267A88;
	// beq cr6,0x83267a80
	if (ctx.cr6.eq) goto loc_83267A80;
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// blt cr6,0x83267a90
	if (ctx.cr6.lt) goto loc_83267A90;
	// lis r11,-32219
	ctx.r11.s64 = -2111504384;
	// addi r4,r11,5068
	ctx.r4.s64 = ctx.r11.s64 + 5068;
	// b 0x83267a1c
	goto loc_83267A1C;
loc_83267A80:
	// li r31,108
	ctx.r31.s64 = 108;
	// b 0x83267a8c
	goto loc_83267A8C;
loc_83267A88:
	// li r31,328
	ctx.r31.s64 = 328;
loc_83267A8C:
	// li r3,192
	ctx.r3.s64 = 192;
loc_83267A90:
	// bl 0x833e3268
	ctx.lr = 0x83267A94;
	sub_833E3268(ctx, base);
	// add r11,r3,r31
	ctx.r11.u64 = ctx.r3.u64 + ctx.r31.u64;
	// b 0x83267a38
	goto loc_83267A38;
}

__attribute__((alias("__imp__sub_83267A9C"))) PPC_WEAK_FUNC(sub_83267A9C);
PPC_FUNC_IMPL(__imp__sub_83267A9C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83267AA0"))) PPC_WEAK_FUNC(sub_83267AA0);
PPC_FUNC_IMPL(__imp__sub_83267AA0) {
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
	// lis r11,-31827
	ctx.r11.s64 = -2085814272;
	// addi r31,r11,9644
	ctx.r31.s64 = ctx.r11.s64 + 9644;
	// lwz r11,9644(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 9644);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x83267adc
	if (!ctx.cr6.eq) goto loc_83267ADC;
	// lis r11,-32219
	ctx.r11.s64 = -2111504384;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r4,r11,5092
	ctx.r4.s64 = ctx.r11.s64 + 5092;
	// bl 0x83257c00
	ctx.lr = 0x83267AD4;
	sub_83257C00(ctx, base);
	// li r3,-1
	ctx.r3.s64 = -1;
	// b 0x83267b04
	goto loc_83267B04;
loc_83267ADC:
	// bl 0x82c10e98
	ctx.lr = 0x83267AE0;
	sub_82C10E98(ctx, base);
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x83267af8
	if (ctx.cr6.eq) goto loc_83267AF8;
	// bl 0x83267460
	ctx.lr = 0x83267AF0;
	sub_83267460(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
loc_83267AF8:
	// li r11,0
	ctx.r11.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
loc_83267B04:
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

__attribute__((alias("__imp__sub_83267B18"))) PPC_WEAK_FUNC(sub_83267B18);
PPC_FUNC_IMPL(__imp__sub_83267B18) {
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
	// lwz r11,24(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x83267c24
	if (ctx.cr6.eq) goto loc_83267C24;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x83267c24
	if (ctx.cr6.eq) goto loc_83267C24;
	// lwz r3,4(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x83267b54
	if (ctx.cr6.eq) goto loc_83267B54;
	// bl 0x83258f60
	ctx.lr = 0x83267B54;
	sub_83258F60(ctx, base);
loc_83267B54:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x832674f8
	ctx.lr = 0x83267B5C;
	sub_832674F8(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83267778
	ctx.lr = 0x83267B68;
	sub_83267778(ctx, base);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// or r30,r3,r30
	ctx.r30.u64 = ctx.r3.u64 | ctx.r30.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x83267b80
	if (ctx.cr6.eq) goto loc_83267B80;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// bl 0x83258fc0
	ctx.lr = 0x83267B80;
	sub_83258FC0(ctx, base);
loc_83267B80:
	// lwz r8,72(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 72);
	// li r9,3
	ctx.r9.s64 = 3;
	// cmpwi cr6,r8,6
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 6, ctx.xer);
	// bne cr6,0x83267b9c
	if (!ctx.cr6.eq) goto loc_83267B9C;
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r9,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r9.u32);
	// stw r11,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r11.u32);
loc_83267B9C:
	// lwz r11,96(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 96);
	// li r10,2
	ctx.r10.s64 = 2;
	// cmpwi cr6,r11,6
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 6, ctx.xer);
	// bne cr6,0x83267bb4
	if (!ctx.cr6.eq) goto loc_83267BB4;
	// stw r9,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r9.u32);
	// stw r10,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r10.u32);
loc_83267BB4:
	// lwz r9,116(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 116);
	// cmpwi cr6,r9,1
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 1, ctx.xer);
	// bne cr6,0x83267bd8
	if (!ctx.cr6.eq) goto loc_83267BD8;
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// bne cr6,0x83267bec
	if (!ctx.cr6.eq) goto loc_83267BEC;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x83267bec
	if (!ctx.cr6.eq) goto loc_83267BEC;
	// stw r11,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r11.u32);
	// b 0x83267bec
	goto loc_83267BEC;
loc_83267BD8:
	// cmpwi cr6,r8,5
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 5, ctx.xer);
	// bne cr6,0x83267bec
	if (!ctx.cr6.eq) goto loc_83267BEC;
	// cmpwi cr6,r11,5
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 5, ctx.xer);
	// bne cr6,0x83267bec
	if (!ctx.cr6.eq) goto loc_83267BEC;
	// stw r10,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r10.u32);
loc_83267BEC:
	// ld r11,104(r31)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r31.u32 + 104);
	// cmpdi cr6,r11,0
	ctx.cr6.compare<int64_t>(ctx.r11.s64, 0, ctx.xer);
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// beq cr6,0x83267c1c
	if (ctx.cr6.eq) goto loc_83267C1C;
	// lfd f0,88(r31)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r31.u32 + 88);
	// lfd f13,80(r1)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// fcfid f13,f13
	ctx.f13.f64 = double(ctx.f13.s64);
	// frsp f0,f0
	ctx.f0.f64 = double(float(ctx.f0.f64));
	// frsp f13,f13
	ctx.f13.f64 = double(float(ctx.f13.f64));
	// fdivs f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 / ctx.f13.f64));
	// stfs f0,112(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 112, temp.u32);
loc_83267C1C:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// b 0x83267c28
	goto loc_83267C28;
loc_83267C24:
	// li r3,0
	ctx.r3.s64 = 0;
loc_83267C28:
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

__attribute__((alias("__imp__sub_83267C40"))) PPC_WEAK_FUNC(sub_83267C40);
PPC_FUNC_IMPL(__imp__sub_83267C40) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x833a01a8
	ctx.lr = 0x83267C48;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r28,0
	ctx.r28.s64 = 0;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x83267c64
	if (ctx.cr6.eq) goto loc_83267C64;
	// bl 0x83258f60
	ctx.lr = 0x83267C64;
	sub_83258F60(ctx, base);
loc_83267C64:
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// bl 0x8313bd90
	ctx.lr = 0x83267C6C;
	sub_8313BD90(ctx, base);
	// mr. r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// li r30,0
	ctx.r30.s64 = 0;
	// ble 0x83267ca8
	if (!ctx.cr0.gt) goto loc_83267CA8;
loc_83267C78:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// bl 0x833e33b0
	ctx.lr = 0x83267C84;
	sub_833E33B0(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x83267c9c
	if (ctx.cr0.eq) goto loc_83267C9C;
	// bl 0x83267b18
	ctx.lr = 0x83267C90;
	sub_83267B18(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x83267c9c
	if (ctx.cr0.eq) goto loc_83267C9C;
	// li r28,1
	ctx.r28.s64 = 1;
loc_83267C9C:
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// cmpw cr6,r30,r29
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r29.s32, ctx.xer);
	// blt cr6,0x83267c78
	if (ctx.cr6.lt) goto loc_83267C78;
loc_83267CA8:
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x83267cb8
	if (ctx.cr6.eq) goto loc_83267CB8;
	// bl 0x83258fc0
	ctx.lr = 0x83267CB8;
	sub_83258FC0(ctx, base);
loc_83267CB8:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x833a01f8
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83267CC4"))) PPC_WEAK_FUNC(sub_83267CC4);
PPC_FUNC_IMPL(__imp__sub_83267CC4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83267CC8"))) PPC_WEAK_FUNC(sub_83267CC8);
PPC_FUNC_IMPL(__imp__sub_83267CC8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x833a01a4
	ctx.lr = 0x83267CD0;
	__savegprlr_27(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x83267e44
	if (ctx.cr6.eq) goto loc_83267E44;
	// addi r11,r5,7
	ctx.r11.s64 = ctx.r5.s64 + 7;
	// li r5,28
	ctx.r5.s64 = 28;
	// rlwinm r31,r11,0,0,28
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFF8;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r28,120
	ctx.r28.s64 = 120;
	// bl 0x833a2b30
	ctx.lr = 0x83267D04;
	sub_833A2B30(ctx, base);
	// lwz r11,4(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// addi r30,r31,28
	ctx.r30.s64 = ctx.r31.s64 + 28;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x83267d1c
	if (ctx.cr6.eq) goto loc_83267D1C;
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x83267d4c
	if (!ctx.cr6.eq) goto loc_83267D4C;
loc_83267D1C:
	// li r4,72
	ctx.r4.s64 = 72;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// li r28,192
	ctx.r28.s64 = 192;
	// bl 0x83258e70
	ctx.lr = 0x83267D2C;
	sub_83258E70(ctx, base);
	// stw r3,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r3.u32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne 0x83267d48
	if (!ctx.cr0.eq) goto loc_83267D48;
loc_83267D38:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83267460
	ctx.lr = 0x83267D40;
	sub_83267460(ctx, base);
	// li r3,-1
	ctx.r3.s64 = -1;
	// b 0x83267e48
	goto loc_83267E48;
loc_83267D48:
	// addi r30,r30,72
	ctx.r30.s64 = ctx.r30.s64 + 72;
loc_83267D4C:
	// lwz r11,4(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x83267e04
	if (!ctx.cr6.eq) goto loc_83267E04;
	// li r4,72
	ctx.r4.s64 = 72;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8325a980
	ctx.lr = 0x83267D64;
	sub_8325A980(ctx, base);
	// stw r3,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r3.u32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x83267d38
	if (ctx.cr0.eq) goto loc_83267D38;
	// li r5,48
	ctx.r5.s64 = 48;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r30,r30,72
	ctx.r30.s64 = ctx.r30.s64 + 72;
	// bl 0x833a2b30
	ctx.lr = 0x83267D84;
	sub_833A2B30(ctx, base);
	// lis r11,-31962
	ctx.r11.s64 = -2094661632;
	// lis r10,-31962
	ctx.r10.s64 = -2094661632;
	// stw r31,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r31.u32);
	// addi r11,r11,31808
	ctx.r11.s64 = ctx.r11.s64 + 31808;
	// stw r31,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r31.u32);
	// lis r9,-31962
	ctx.r9.s64 = -2094661632;
	// stw r31,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r31.u32);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// addi r10,r10,29936
	ctx.r10.s64 = ctx.r10.s64 + 29936;
	// addi r9,r9,29928
	ctx.r9.s64 = ctx.r9.s64 + 29928;
	// ld r8,104(r1)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r1.u32 + 104);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r10,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r10.u32);
	// stw r9,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r9.u32);
	// li r4,148
	ctx.r4.s64 = 148;
	// stw r11,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r11.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// ld r5,80(r1)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// ld r7,96(r1)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r1.u32 + 96);
	// ld r6,88(r1)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// ld r9,112(r1)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r1.u32 + 112);
	// ld r10,120(r1)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r1.u32 + 120);
	// bl 0x8325ab70
	ctx.lr = 0x83267DE0;
	sub_8325AB70(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// stw r3,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r3.u32);
	// beq 0x83267d38
	if (ctx.cr0.eq) goto loc_83267D38;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r30,r30,148
	ctx.r30.s64 = ctx.r30.s64 + 148;
	// bl 0x8325aab0
	ctx.lr = 0x83267DF8;
	sub_8325AAB0(ctx, base);
	// li r4,5
	ctx.r4.s64 = 5;
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// bl 0x8325ac08
	ctx.lr = 0x83267E04;
	sub_8325AC08(ctx, base);
loc_83267E04:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwz r4,0(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// bl 0x833e3268
	ctx.lr = 0x83267E10;
	sub_833E3268(ctx, base);
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// lwz r4,0(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x833e3298
	ctx.lr = 0x83267E24;
	sub_833E3298(ctx, base);
	// stw r3,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r3.u32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x83267d38
	if (ctx.cr0.eq) goto loc_83267D38;
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// stw r11,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r11.u32);
	// lwz r11,4(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// stw r11,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r11.u32);
	// stw r31,0(r27)
	PPC_STORE_U32(ctx.r27.u32 + 0, ctx.r31.u32);
loc_83267E44:
	// li r3,0
	ctx.r3.s64 = 0;
loc_83267E48:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x833a01f4
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83267E50"))) PPC_WEAK_FUNC(sub_83267E50);
PPC_FUNC_IMPL(__imp__sub_83267E50) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x833a01ac
	ctx.lr = 0x83267E58;
	__savegprlr_29(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31827
	ctx.r11.s64 = -2085814272;
	// std r3,144(r1)
	PPC_STORE_U64(ctx.r1.u32 + 144, ctx.r3.u64);
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// addi r31,r11,9644
	ctx.r31.s64 = ctx.r11.s64 + 9644;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// lwz r11,9644(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 9644);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x83267e94
	if (ctx.cr6.eq) goto loc_83267E94;
	// lis r11,-32219
	ctx.r11.s64 = -2111504384;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r4,r11,5152
	ctx.r4.s64 = ctx.r11.s64 + 5152;
	// bl 0x83257c00
	ctx.lr = 0x83267E8C;
	sub_83257C00(ctx, base);
	// li r3,-1
	ctx.r3.s64 = -1;
	// b 0x83267f00
	goto loc_83267F00;
loc_83267E94:
	// li r11,1
	ctx.r11.s64 = 1;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// bl 0x832679e8
	ctx.lr = 0x83267EA4;
	sub_832679E8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x83267ebc
	if (ctx.cr0.eq) goto loc_83267EBC;
loc_83267EAC:
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
loc_83267EB0:
	// bl 0x83267aa0
	ctx.lr = 0x83267EB4;
	sub_83267AA0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// b 0x83267f00
	goto loc_83267F00;
loc_83267EBC:
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmpw cr6,r29,r11
	ctx.cr6.compare<int32_t>(ctx.r29.s32, ctx.r11.s32, ctx.xer);
	// bge cr6,0x83267ee4
	if (!ctx.cr6.lt) goto loc_83267EE4;
	// lis r11,-32219
	ctx.r11.s64 = -2111504384;
	// li r5,-2
	ctx.r5.s64 = -2;
	// addi r4,r11,5140
	ctx.r4.s64 = ctx.r11.s64 + 5140;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x83257c28
	ctx.lr = 0x83267EDC;
	sub_83257C28(ctx, base);
	// li r31,-2
	ctx.r31.s64 = -2;
	// b 0x83267eb0
	goto loc_83267EB0;
loc_83267EE4:
	// bl 0x82c10e98
	ctx.lr = 0x83267EE8;
	sub_82C10E98(ctx, base);
	// addi r3,r31,4
	ctx.r3.s64 = ctx.r31.s64 + 4;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// addi r4,r1,144
	ctx.r4.s64 = ctx.r1.s64 + 144;
	// bl 0x83267cc8
	ctx.lr = 0x83267EF8;
	sub_83267CC8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x83267eac
	if (!ctx.cr0.eq) goto loc_83267EAC;
loc_83267F00:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x833a01fc
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83267F08"))) PPC_WEAK_FUNC(sub_83267F08);
PPC_FUNC_IMPL(__imp__sub_83267F08) {
	PPC_FUNC_PROLOGUE();
	// li r3,32
	ctx.r3.s64 = 32;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83267F10"))) PPC_WEAK_FUNC(sub_83267F10);
PPC_FUNC_IMPL(__imp__sub_83267F10) {
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
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x83267f88
	if (ctx.cr6.eq) goto loc_83267F88;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x83267f88
	if (ctx.cr6.eq) goto loc_83267F88;
	// lis r11,-32219
	ctx.r11.s64 = -2111504384;
	// li r5,3
	ctx.r5.s64 = 3;
	// addi r4,r11,5288
	ctx.r4.s64 = ctx.r11.s64 + 5288;
	// bl 0x833aca30
	ctx.lr = 0x83267F4C;
	sub_833ACA30(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x83267f60
	if (!ctx.cr0.eq) goto loc_83267F60;
loc_83267F54:
	// li r11,0
	ctx.r11.s64 = 0;
loc_83267F58:
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
	// b 0x83267fa0
	goto loc_83267FA0;
loc_83267F60:
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// li r5,6
	ctx.r5.s64 = 6;
	// addi r4,r11,29420
	ctx.r4.s64 = ctx.r11.s64 + 29420;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x833aca30
	ctx.lr = 0x83267F74;
	sub_833ACA30(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// li r3,0
	ctx.r3.s64 = 0;
	// beq 0x83267f54
	if (ctx.cr0.eq) goto loc_83267F54;
	// li r11,1
	ctx.r11.s64 = 1;
	// b 0x83267f58
	goto loc_83267F58;
loc_83267F88:
	// lis r11,-32219
	ctx.r11.s64 = -2111504384;
	// li r5,-2
	ctx.r5.s64 = -2;
	// addi r4,r11,5276
	ctx.r4.s64 = ctx.r11.s64 + 5276;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x83257c28
	ctx.lr = 0x83267F9C;
	sub_83257C28(ctx, base);
	// li r3,-1
	ctx.r3.s64 = -1;
loc_83267FA0:
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

__attribute__((alias("__imp__sub_83267FB8"))) PPC_WEAK_FUNC(sub_83267FB8);
PPC_FUNC_IMPL(__imp__sub_83267FB8) {
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
	// beq cr6,0x8326800c
	if (ctx.cr6.eq) goto loc_8326800C;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x8326800c
	if (ctx.cr6.eq) goto loc_8326800C;
	// bl 0x833becd0
	ctx.lr = 0x83267FE0;
	sub_833BECD0(ctx, base);
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// bne cr6,0x83267ff8
	if (!ctx.cr6.eq) goto loc_83267FF8;
	// li r3,0
	ctx.r3.s64 = 0;
loc_83267FEC:
	// li r11,0
	ctx.r11.s64 = 0;
loc_83267FF0:
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// b 0x83268024
	goto loc_83268024;
loc_83267FF8:
	// rlwinm. r11,r3,0,27,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 0) & 0x10;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// li r3,0
	ctx.r3.s64 = 0;
	// bne 0x83267fec
	if (!ctx.cr0.eq) goto loc_83267FEC;
	// li r11,1
	ctx.r11.s64 = 1;
	// b 0x83267ff0
	goto loc_83267FF0;
loc_8326800C:
	// lis r11,-32219
	ctx.r11.s64 = -2111504384;
	// li r5,-2
	ctx.r5.s64 = -2;
	// addi r4,r11,5292
	ctx.r4.s64 = ctx.r11.s64 + 5292;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x83257c28
	ctx.lr = 0x83268020;
	sub_83257C28(ctx, base);
	// li r3,-1
	ctx.r3.s64 = -1;
loc_83268024:
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

__attribute__((alias("__imp__sub_83268038"))) PPC_WEAK_FUNC(sub_83268038);
PPC_FUNC_IMPL(__imp__sub_83268038) {
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
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x8326806c
	if (!ctx.cr6.eq) goto loc_8326806C;
	// lis r11,-32219
	ctx.r11.s64 = -2111504384;
	// li r5,-2
	ctx.r5.s64 = -2;
	// addi r4,r11,5360
	ctx.r4.s64 = ctx.r11.s64 + 5360;
	// bl 0x83257c28
	ctx.lr = 0x83268064;
	sub_83257C28(ctx, base);
loc_83268064:
	// li r3,-1
	ctx.r3.s64 = -1;
	// b 0x832680a0
	goto loc_832680A0;
loc_8326806C:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82da0400
	ctx.lr = 0x83268074;
	sub_82DA0400(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x8326809c
	if (!ctx.cr0.eq) goto loc_8326809C;
	// bl 0x82d9fb18
	ctx.lr = 0x83268080;
	sub_82D9FB18(ctx, base);
	// lis r11,-32219
	ctx.r11.s64 = -2111504384;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// addi r4,r11,5304
	ctx.r4.s64 = ctx.r11.s64 + 5304;
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x83257c20
	ctx.lr = 0x83268098;
	sub_83257C20(ctx, base);
	// b 0x83268064
	goto loc_83268064;
loc_8326809C:
	// li r3,0
	ctx.r3.s64 = 0;
loc_832680A0:
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

__attribute__((alias("__imp__sub_832680B4"))) PPC_WEAK_FUNC(sub_832680B4);
PPC_FUNC_IMPL(__imp__sub_832680B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832680B8"))) PPC_WEAK_FUNC(sub_832680B8);
PPC_FUNC_IMPL(__imp__sub_832680B8) {
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
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8326811c
	if (ctx.cr6.eq) goto loc_8326811C;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x8326811c
	if (ctx.cr6.eq) goto loc_8326811C;
	// bl 0x82d9ecf8
	ctx.lr = 0x832680E8;
	sub_82D9ECF8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x83268114
	if (!ctx.cr0.eq) goto loc_83268114;
	// bl 0x82d9fb18
	ctx.lr = 0x832680F4;
	sub_82D9FB18(ctx, base);
	// lis r11,-32219
	ctx.r11.s64 = -2111504384;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// addi r4,r11,5384
	ctx.r4.s64 = ctx.r11.s64 + 5384;
	// mr r7,r30
	ctx.r7.u64 = ctx.r30.u64;
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x83257b70
	ctx.lr = 0x83268110;
	sub_83257B70(ctx, base);
	// b 0x83268130
	goto loc_83268130;
loc_83268114:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x83268134
	goto loc_83268134;
loc_8326811C:
	// lis r11,-32219
	ctx.r11.s64 = -2111504384;
	// li r5,-2
	ctx.r5.s64 = -2;
	// addi r4,r11,5372
	ctx.r4.s64 = ctx.r11.s64 + 5372;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x83257c28
	ctx.lr = 0x83268130;
	sub_83257C28(ctx, base);
loc_83268130:
	// li r3,-1
	ctx.r3.s64 = -1;
loc_83268134:
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

__attribute__((alias("__imp__sub_8326814C"))) PPC_WEAK_FUNC(sub_8326814C);
PPC_FUNC_IMPL(__imp__sub_8326814C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83268150"))) PPC_WEAK_FUNC(sub_83268150);
PPC_FUNC_IMPL(__imp__sub_83268150) {
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
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// beq cr6,0x8326817c
	if (ctx.cr6.eq) goto loc_8326817C;
	// bl 0x82d9f098
	ctx.lr = 0x83268174;
	sub_82D9F098(ctx, base);
	// li r11,-1
	ctx.r11.s64 = -1;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
loc_8326817C:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83266ba0
	ctx.lr = 0x83268184;
	sub_83266BA0(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
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

__attribute__((alias("__imp__sub_8326819C"))) PPC_WEAK_FUNC(sub_8326819C);
PPC_FUNC_IMPL(__imp__sub_8326819C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832681A0"))) PPC_WEAK_FUNC(sub_832681A0);
PPC_FUNC_IMPL(__imp__sub_832681A0) {
	PPC_FUNC_PROLOGUE();
	// ld r11,24(r3)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r3.u32 + 24);
	// li r3,0
	ctx.r3.s64 = 0;
	// std r11,0(r4)
	PPC_STORE_U64(ctx.r4.u32 + 0, ctx.r11.u64);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_832681B0"))) PPC_WEAK_FUNC(sub_832681B0);
PPC_FUNC_IMPL(__imp__sub_832681B0) {
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
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// bl 0x833bf168
	ctx.lr = 0x832681C4;
	sub_833BF168(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x832681ec
	if (!ctx.cr0.eq) goto loc_832681EC;
	// bl 0x82d9fb18
	ctx.lr = 0x832681D0;
	sub_82D9FB18(ctx, base);
	// lis r11,-32219
	ctx.r11.s64 = -2111504384;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// addi r4,r11,5460
	ctx.r4.s64 = ctx.r11.s64 + 5460;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x83257c10
	ctx.lr = 0x832681E4;
	sub_83257C10(ctx, base);
	// li r3,-1
	ctx.r3.s64 = -1;
	// b 0x832681f4
	goto loc_832681F4;
loc_832681EC:
	// bl 0x833bf050
	ctx.lr = 0x832681F0;
	sub_833BF050(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
loc_832681F4:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83268204"))) PPC_WEAK_FUNC(sub_83268204);
PPC_FUNC_IMPL(__imp__sub_83268204) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83268208"))) PPC_WEAK_FUNC(sub_83268208);
PPC_FUNC_IMPL(__imp__sub_83268208) {
	PPC_FUNC_PROLOGUE();
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x83268218
	if (ctx.cr6.eq) goto loc_83268218;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
loc_83268218:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83268220"))) PPC_WEAK_FUNC(sub_83268220);
PPC_FUNC_IMPL(__imp__sub_83268220) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31845
	ctx.r11.s64 = -2086993920;
	// addi r3,r11,-5864
	ctx.r3.s64 = ctx.r11.s64 + -5864;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8326822C"))) PPC_WEAK_FUNC(sub_8326822C);
PPC_FUNC_IMPL(__imp__sub_8326822C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83268230"))) PPC_WEAK_FUNC(sub_83268230);
PPC_FUNC_IMPL(__imp__sub_83268230) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x833a01a4
	ctx.lr = 0x83268238;
	__savegprlr_27(ctx, base);
	// stwu r1,-400(r1)
	ea = -400 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// li r11,0
	ctx.r11.s64 = 0;
	// li r5,259
	ctx.r5.s64 = 259;
	// li r4,0
	ctx.r4.s64 = 0;
	// stb r11,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r11.u8);
	// addi r3,r1,81
	ctx.r3.s64 = ctx.r1.s64 + 81;
	// bl 0x833a2b30
	ctx.lr = 0x83268258;
	sub_833A2B30(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x833a77b0
	ctx.lr = 0x83268260;
	sub_833A77B0(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,1
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 1, ctx.xer);
	// blt cr6,0x832682e4
	if (ctx.cr6.lt) goto loc_832682E4;
	// lbz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r29.u32 + 0);
	// li r30,1
	ctx.r30.s64 = 1;
	// cmpwi cr6,r3,1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 1, ctx.xer);
	// stb r11,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r11.u8);
	// ble cr6,0x832682e4
	if (!ctx.cr6.gt) goto loc_832682E4;
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// addi r31,r29,1
	ctx.r31.s64 = ctx.r29.s64 + 1;
	// subf r27,r29,r11
	ctx.r27.s64 = ctx.r11.s64 - ctx.r29.s64;
loc_8326828C:
	// lbz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 0);
	// cmplwi cr6,r11,92
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 92, ctx.xer);
	// bne cr6,0x832682cc
	if (!ctx.cr6.eq) goto loc_832682CC;
	// add r11,r30,r29
	ctx.r11.u64 = ctx.r30.u64 + ctx.r29.u64;
	// lbz r11,-1(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + -1);
	// cmplwi cr6,r11,58
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 58, ctx.xer);
	// beq cr6,0x832682cc
	if (ctx.cr6.eq) goto loc_832682CC;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x833becd0
	ctx.lr = 0x832682B0;
	sub_833BECD0(ctx, base);
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// bne cr6,0x832682cc
	if (!ctx.cr6.eq) goto loc_832682CC;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x833be9a8
	ctx.lr = 0x832682C4;
	sub_833BE9A8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x832682f0
	if (ctx.cr0.eq) goto loc_832682F0;
loc_832682CC:
	// lbz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 0);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// cmpw cr6,r30,r28
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r28.s32, ctx.xer);
	// stbx r11,r27,r31
	PPC_STORE_U8(ctx.r27.u32 + ctx.r31.u32, ctx.r11.u8);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// blt cr6,0x8326828c
	if (ctx.cr6.lt) goto loc_8326828C;
loc_832682E4:
	// li r3,0
	ctx.r3.s64 = 0;
loc_832682E8:
	// addi r1,r1,400
	ctx.r1.s64 = ctx.r1.s64 + 400;
	// b 0x833a01f4
	__restgprlr_27(ctx, base);
	return;
loc_832682F0:
	// li r3,-1
	ctx.r3.s64 = -1;
	// b 0x832682e8
	goto loc_832682E8;
}

__attribute__((alias("__imp__sub_832682F8"))) PPC_WEAK_FUNC(sub_832682F8);
PPC_FUNC_IMPL(__imp__sub_832682F8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x833a01ac
	ctx.lr = 0x83268300;
	__savegprlr_29(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r10,0
	ctx.r10.s64 = 0;
	// std r4,152(r1)
	PPC_STORE_U64(ctx.r1.u32 + 152, ctx.r4.u64);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// std r10,16(r3)
	PPC_STORE_U64(ctx.r3.u32 + 16, ctx.r10.u64);
	// mr r29,r6
	ctx.r29.u64 = ctx.r6.u64;
	// cmpd cr6,r5,r7
	ctx.cr6.compare<int64_t>(ctx.r5.s64, ctx.r7.s64, ctx.xer);
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// blt cr6,0x83268328
	if (ctx.cr6.lt) goto loc_83268328;
	// mr r30,r7
	ctx.r30.u64 = ctx.r7.u64;
loc_83268328:
	// ld r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r31.u32 + 8);
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// cmpd cr6,r30,r11
	ctx.cr6.compare<int64_t>(ctx.r30.s64, ctx.r11.s64, ctx.xer);
	// blt cr6,0x8326833c
	if (ctx.cr6.lt) goto loc_8326833C;
	// mr r30,r11
	ctx.r30.u64 = ctx.r11.u64;
loc_8326833C:
	// cmpdi cr6,r30,0
	ctx.cr6.compare<int64_t>(ctx.r30.s64, 0, ctx.xer);
	// ble cr6,0x832683c0
	if (!ctx.cr6.gt) goto loc_832683C0;
	// lwz r11,152(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 152);
	// li r6,0
	ctx.r6.s64 = 0;
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r4,156(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 156);
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// bl 0x833be310
	ctx.lr = 0x83268364;
	sub_833BE310(ctx, base);
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// bne cr6,0x83268370
	if (!ctx.cr6.eq) goto loc_83268370;
	// bl 0x82d9fb18
	ctx.lr = 0x83268370;
	sub_82D9FB18(ctx, base);
loc_83268370:
	// li r7,0
	ctx.r7.s64 = 0;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// rotlwi r5,r30,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r30.u32, 0);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x82d9f0f8
	ctx.lr = 0x83268388;
	sub_82D9F0F8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x832683b8
	if (!ctx.cr0.eq) goto loc_832683B8;
	// bl 0x82d9fb18
	ctx.lr = 0x83268394;
	sub_82D9FB18(ctx, base);
	// lis r11,-32219
	ctx.r11.s64 = -2111504384;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// addi r4,r11,5516
	ctx.r4.s64 = ctx.r11.s64 + 5516;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x83257c10
	ctx.lr = 0x832683A8;
	sub_83257C10(ctx, base);
	// li r11,-1
	ctx.r11.s64 = -1;
	// li r3,-1
	ctx.r3.s64 = -1;
	// std r11,16(r31)
	PPC_STORE_U64(ctx.r31.u32 + 16, ctx.r11.u64);
	// b 0x832683c4
	goto loc_832683C4;
loc_832683B8:
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// std r11,16(r31)
	PPC_STORE_U64(ctx.r31.u32 + 16, ctx.r11.u64);
loc_832683C0:
	// li r3,0
	ctx.r3.s64 = 0;
loc_832683C4:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x833a01fc
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832683CC"))) PPC_WEAK_FUNC(sub_832683CC);
PPC_FUNC_IMPL(__imp__sub_832683CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832683D0"))) PPC_WEAK_FUNC(sub_832683D0);
PPC_FUNC_IMPL(__imp__sub_832683D0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x833a01a8
	ctx.lr = 0x832683D8;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r11,0
	ctx.r11.s64 = 0;
	// std r4,152(r1)
	PPC_STORE_U64(ctx.r1.u32 + 152, ctx.r4.u64);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// std r11,24(r3)
	PPC_STORE_U64(ctx.r3.u32 + 24, ctx.r11.u64);
	// mr r29,r6
	ctx.r29.u64 = ctx.r6.u64;
	// cmpd cr6,r5,r7
	ctx.cr6.compare<int64_t>(ctx.r5.s64, ctx.r7.s64, ctx.xer);
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// blt cr6,0x83268404
	if (ctx.cr6.lt) goto loc_83268404;
	// mr r30,r7
	ctx.r30.u64 = ctx.r7.u64;
loc_83268404:
	// cmpdi cr6,r30,0
	ctx.cr6.compare<int64_t>(ctx.r30.s64, 0, ctx.xer);
	// ble cr6,0x832684a0
	if (!ctx.cr6.gt) goto loc_832684A0;
	// lwz r10,152(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 152);
	// li r6,0
	ctx.r6.s64 = 0;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r4,156(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 156);
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// bl 0x833be310
	ctx.lr = 0x8326842C;
	sub_833BE310(ctx, base);
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// bne cr6,0x83268438
	if (!ctx.cr6.eq) goto loc_83268438;
	// bl 0x82d9fb18
	ctx.lr = 0x83268438;
	sub_82D9FB18(ctx, base);
loc_83268438:
	// li r7,0
	ctx.r7.s64 = 0;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// rotlwi r5,r30,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r30.u32, 0);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x82d9f518
	ctx.lr = 0x83268450;
	sub_82D9F518(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x83268480
	if (!ctx.cr0.eq) goto loc_83268480;
	// bl 0x82d9fb18
	ctx.lr = 0x8326845C;
	sub_82D9FB18(ctx, base);
	// lis r11,-32219
	ctx.r11.s64 = -2111504384;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// addi r4,r11,5564
	ctx.r4.s64 = ctx.r11.s64 + 5564;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x83257c10
	ctx.lr = 0x83268470;
	sub_83257C10(ctx, base);
	// li r11,-1
	ctx.r11.s64 = -1;
	// li r3,-1
	ctx.r3.s64 = -1;
	// std r11,24(r31)
	PPC_STORE_U64(ctx.r31.u32 + 24, ctx.r11.u64);
	// b 0x832684a4
	goto loc_832684A4;
loc_83268480:
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// add r10,r11,r28
	ctx.r10.u64 = ctx.r11.u64 + ctx.r28.u64;
	// std r11,24(r31)
	PPC_STORE_U64(ctx.r31.u32 + 24, ctx.r11.u64);
	// ld r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r31.u32 + 8);
	// cmpd cr6,r11,r10
	ctx.cr6.compare<int64_t>(ctx.r11.s64, ctx.r10.s64, ctx.xer);
	// bgt cr6,0x8326849c
	if (ctx.cr6.gt) goto loc_8326849C;
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
loc_8326849C:
	// std r11,8(r31)
	PPC_STORE_U64(ctx.r31.u32 + 8, ctx.r11.u64);
loc_832684A0:
	// li r3,0
	ctx.r3.s64 = 0;
loc_832684A4:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x833a01f8
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832684AC"))) PPC_WEAK_FUNC(sub_832684AC);
PPC_FUNC_IMPL(__imp__sub_832684AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832684B0"))) PPC_WEAK_FUNC(sub_832684B0);
PPC_FUNC_IMPL(__imp__sub_832684B0) {
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
	// std r4,136(r1)
	PPC_STORE_U64(ctx.r1.u32 + 136, ctx.r4.u64);
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// lwz r4,140(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 140);
	// li r6,0
	ctx.r6.s64 = 0;
	// lwz r11,136(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 136);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// bl 0x833be310
	ctx.lr = 0x832684EC;
	sub_833BE310(ctx, base);
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// bne cr6,0x832684f8
	if (!ctx.cr6.eq) goto loc_832684F8;
	// bl 0x82d9fb18
	ctx.lr = 0x832684F8;
	sub_82D9FB18(ctx, base);
loc_832684F8:
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x833be268
	ctx.lr = 0x83268500;
	sub_833BE268(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x83268528
	if (!ctx.cr0.eq) goto loc_83268528;
	// bl 0x82d9fb18
	ctx.lr = 0x8326850C;
	sub_82D9FB18(ctx, base);
	// lis r11,-32219
	ctx.r11.s64 = -2111504384;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// addi r4,r11,5612
	ctx.r4.s64 = ctx.r11.s64 + 5612;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x83257c10
	ctx.lr = 0x83268520;
	sub_83257C10(ctx, base);
	// li r3,-1
	ctx.r3.s64 = -1;
	// b 0x83268534
	goto loc_83268534;
loc_83268528:
	// std r30,8(r31)
	PPC_STORE_U64(ctx.r31.u32 + 8, ctx.r30.u64);
	// bl 0x833bf050
	ctx.lr = 0x83268530;
	sub_833BF050(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
loc_83268534:
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

__attribute__((alias("__imp__sub_8326854C"))) PPC_WEAK_FUNC(sub_8326854C);
PPC_FUNC_IMPL(__imp__sub_8326854C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83268550"))) PPC_WEAK_FUNC(sub_83268550);
PPC_FUNC_IMPL(__imp__sub_83268550) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x833a0198
	ctx.lr = 0x83268558;
	__savegprlr_24(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r26,r5
	ctx.r26.u64 = ctx.r5.u64;
	// mr r24,r6
	ctx.r24.u64 = ctx.r6.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x83268788
	if (ctx.cr6.eq) goto loc_83268788;
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// beq cr6,0x83268788
	if (ctx.cr6.eq) goto loc_83268788;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x83266b78
	ctx.lr = 0x83268584;
	sub_83266B78(ctx, base);
	// mr. r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r25.s32, 0, ctx.xer);
	// beq 0x83268764
	if (ctx.cr0.eq) goto loc_83268764;
	// lwz r11,88(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// cmplwi cr6,r11,32
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 32, ctx.xer);
	// blt cr6,0x83268764
	if (ctx.cr6.lt) goto loc_83268764;
	// li r28,-1
	ctx.r28.s64 = -1;
	// li r29,0
	ctx.r29.s64 = 0;
	// stw r28,0(r25)
	PPC_STORE_U32(ctx.r25.u32 + 0, ctx.r28.u32);
	// li r30,0
	ctx.r30.s64 = 0;
	// std r28,8(r25)
	PPC_STORE_U64(ctx.r25.u32 + 8, ctx.r28.u64);
	// cmplwi cr6,r31,1
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 1, ctx.xer);
	// std r28,16(r25)
	PPC_STORE_U64(ctx.r25.u32 + 16, ctx.r28.u64);
	// std r28,24(r25)
	PPC_STORE_U64(ctx.r25.u32 + 24, ctx.r28.u64);
	// blt cr6,0x83268600
	if (ctx.cr6.lt) goto loc_83268600;
	// beq cr6,0x832685f8
	if (ctx.cr6.eq) goto loc_832685F8;
	// cmplwi cr6,r31,3
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 3, ctx.xer);
	// blt cr6,0x832685f0
	if (ctx.cr6.lt) goto loc_832685F0;
	// beq cr6,0x832685e0
	if (ctx.cr6.eq) goto loc_832685E0;
	// cmplwi cr6,r31,5
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 5, ctx.xer);
	// blt cr6,0x83268600
	if (ctx.cr6.lt) goto loc_83268600;
	// beq cr6,0x832685e8
	if (ctx.cr6.eq) goto loc_832685E8;
	// cmplwi cr6,r31,10
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 10, ctx.xer);
	// bne cr6,0x83268604
	if (!ctx.cr6.eq) goto loc_83268604;
loc_832685E0:
	// li r29,3
	ctx.r29.s64 = 3;
	// b 0x83268604
	goto loc_83268604;
loc_832685E8:
	// li r29,5
	ctx.r29.s64 = 5;
	// b 0x83268604
	goto loc_83268604;
loc_832685F0:
	// li r29,1
	ctx.r29.s64 = 1;
	// b 0x83268604
	goto loc_83268604;
loc_832685F8:
	// li r29,2
	ctx.r29.s64 = 2;
	// b 0x83268604
	goto loc_83268604;
loc_83268600:
	// li r29,4
	ctx.r29.s64 = 4;
loc_83268604:
	// cmplwi cr6,r26,1
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, 1, ctx.xer);
	// blt cr6,0x83268628
	if (ctx.cr6.lt) goto loc_83268628;
	// beq cr6,0x83268620
	if (ctx.cr6.eq) goto loc_83268620;
	// cmplwi cr6,r26,3
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, 3, ctx.xer);
	// bge cr6,0x8326862c
	if (!ctx.cr6.lt) goto loc_8326862C;
	// lis r30,-16384
	ctx.r30.s64 = -1073741824;
	// b 0x83268634
	goto loc_83268634;
loc_83268620:
	// lis r30,16384
	ctx.r30.s64 = 1073741824;
	// b 0x83268634
	goto loc_83268634;
loc_83268628:
	// lis r30,-32768
	ctx.r30.s64 = -2147483648;
loc_8326862C:
	// cmpwi cr6,r26,0
	ctx.cr6.compare<int32_t>(ctx.r26.s32, 0, ctx.xer);
	// beq cr6,0x8326863c
	if (ctx.cr6.eq) goto loc_8326863C;
loc_83268634:
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x83268230
	ctx.lr = 0x8326863C;
	sub_83268230(ctx, base);
loc_8326863C:
	// lis r31,-31827
	ctx.r31.s64 = -2085814272;
	// li r9,0
	ctx.r9.s64 = 0;
	// lis r8,2048
	ctx.r8.s64 = 134217728;
	// mr r7,r29
	ctx.r7.u64 = ctx.r29.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// lwz r11,9652(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 9652);
	// li r5,3
	ctx.r5.s64 = 3;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bne cr6,0x83268670
	if (!ctx.cr6.eq) goto loc_83268670;
	// bl 0x833bf1a8
	ctx.lr = 0x8326866C;
	sub_833BF1A8(ctx, base);
	// b 0x83268674
	goto loc_83268674;
loc_83268670:
	// bl 0x82d9f2e0
	ctx.lr = 0x83268674;
	sub_82D9F2E0(ctx, base);
loc_83268674:
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// bne cr6,0x832686cc
	if (!ctx.cr6.eq) goto loc_832686CC;
	// lis r11,-32768
	ctx.r11.s64 = -2147483648;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x83268690
	if (!ctx.cr6.eq) goto loc_83268690;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// b 0x832686cc
	goto loc_832686CC;
loc_83268690:
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x83268230
	ctx.lr = 0x83268698;
	sub_83268230(ctx, base);
	// lwz r11,9652(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 9652);
	// li r9,0
	ctx.r9.s64 = 0;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// lis r8,2048
	ctx.r8.s64 = 134217728;
	// mr r7,r29
	ctx.r7.u64 = ctx.r29.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,3
	ctx.r5.s64 = 3;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bne cr6,0x832686c8
	if (!ctx.cr6.eq) goto loc_832686C8;
	// bl 0x833bf1a8
	ctx.lr = 0x832686C4;
	sub_833BF1A8(ctx, base);
	// b 0x832686cc
	goto loc_832686CC;
loc_832686C8:
	// bl 0x82d9f2e0
	ctx.lr = 0x832686CC;
	sub_82D9F2E0(ctx, base);
loc_832686CC:
	// stw r3,0(r25)
	PPC_STORE_U32(ctx.r25.u32 + 0, ctx.r3.u32);
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// bne cr6,0x83268700
	if (!ctx.cr6.eq) goto loc_83268700;
	// bl 0x82d9fb18
	ctx.lr = 0x832686DC;
	sub_82D9FB18(ctx, base);
	// lis r11,-32219
	ctx.r11.s64 = -2111504384;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// addi r4,r11,5808
	ctx.r4.s64 = ctx.r11.s64 + 5808;
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x83257c20
	ctx.lr = 0x832686F4;
	sub_83257C20(ctx, base);
loc_832686F4:
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x83268150
	ctx.lr = 0x832686FC;
	sub_83268150(ctx, base);
	// b 0x8326879c
	goto loc_8326879C;
loc_83268700:
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bl 0x82d9f278
	ctx.lr = 0x83268710;
	sub_82D9F278(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// bne cr6,0x83268728
	if (!ctx.cr6.eq) goto loc_83268728;
	// bl 0x82d9fb18
	ctx.lr = 0x83268720;
	sub_82D9FB18(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne 0x83268748
	if (!ctx.cr0.eq) goto loc_83268748;
loc_83268728:
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r31,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r31.u32);
	// stw r11,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r11.u32);
	// ld r11,88(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// std r11,8(r25)
	PPC_STORE_U64(ctx.r25.u32 + 8, ctx.r11.u64);
	// stw r25,0(r24)
	PPC_STORE_U32(ctx.r24.u32 + 0, ctx.r25.u32);
	// b 0x832687a0
	goto loc_832687A0;
loc_83268748:
	// bl 0x82d9fb18
	ctx.lr = 0x8326874C;
	sub_82D9FB18(ctx, base);
	// lis r11,-32219
	ctx.r11.s64 = -2111504384;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// addi r4,r11,5760
	ctx.r4.s64 = ctx.r11.s64 + 5760;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x83257c10
	ctx.lr = 0x83268760;
	sub_83257C10(ctx, base);
	// b 0x832686f4
	goto loc_832686F4;
loc_83268764:
	// lis r11,-32219
	ctx.r11.s64 = -2111504384;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r4,r11,5672
	ctx.r4.s64 = ctx.r11.s64 + 5672;
	// bl 0x83257c00
	ctx.lr = 0x83268774;
	sub_83257C00(ctx, base);
	// cmplwi cr6,r25,0
	ctx.cr6.compare<uint32_t>(ctx.r25.u32, 0, ctx.xer);
	// beq cr6,0x8326879c
	if (ctx.cr6.eq) goto loc_8326879C;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x83266ba0
	ctx.lr = 0x83268784;
	sub_83266BA0(ctx, base);
	// b 0x8326879c
	goto loc_8326879C;
loc_83268788:
	// lis r11,-32219
	ctx.r11.s64 = -2111504384;
	// li r5,-2
	ctx.r5.s64 = -2;
	// addi r4,r11,5656
	ctx.r4.s64 = ctx.r11.s64 + 5656;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x83257c28
	ctx.lr = 0x8326879C;
	sub_83257C28(ctx, base);
loc_8326879C:
	// li r3,-1
	ctx.r3.s64 = -1;
loc_832687A0:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x833a01e8
	__restgprlr_24(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832687A8"))) PPC_WEAK_FUNC(sub_832687A8);
PPC_FUNC_IMPL(__imp__sub_832687A8) {
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
	// lwz r3,212(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 212);
	// li r30,0
	ctx.r30.s64 = 0;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x832687d8
	if (ctx.cr6.eq) goto loc_832687D8;
	// bl 0x8325aa00
	ctx.lr = 0x832687D4;
	sub_8325AA00(ctx, base);
	// stw r30,212(r31)
	PPC_STORE_U32(ctx.r31.u32 + 212, ctx.r30.u32);
loc_832687D8:
	// lwz r3,136(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 136);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x832687ec
	if (ctx.cr6.eq) goto loc_832687EC;
	// bl 0x8325a8e8
	ctx.lr = 0x832687E8;
	sub_8325A8E8(ctx, base);
	// stw r30,136(r31)
	PPC_STORE_U32(ctx.r31.u32 + 136, ctx.r30.u32);
loc_832687EC:
	// lwz r3,92(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 92);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x83268800
	if (ctx.cr6.eq) goto loc_83268800;
	// bl 0x8326d4d8
	ctx.lr = 0x832687FC;
	sub_8326D4D8(ctx, base);
	// stw r30,92(r31)
	PPC_STORE_U32(ctx.r31.u32 + 92, ctx.r30.u32);
loc_83268800:
	// li r5,216
	ctx.r5.s64 = 216;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x833a2b30
	ctx.lr = 0x83268810;
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

__attribute__((alias("__imp__sub_83268828"))) PPC_WEAK_FUNC(sub_83268828);
PPC_FUNC_IMPL(__imp__sub_83268828) {
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
	// lwz r3,92(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 92);
	// bl 0x8326d610
	ctx.lr = 0x83268848;
	sub_8326D610(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8326888c
	if (ctx.cr0.eq) goto loc_8326888C;
	// lwz r31,8(r3)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x83268864;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmplwi cr6,r3,1
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 1, ctx.xer);
	// blt cr6,0x83268878
	if (ctx.cr6.lt) goto loc_83268878;
	// bne cr6,0x83268888
	if (!ctx.cr6.eq) goto loc_83268888;
	// li r5,1
	ctx.r5.s64 = 1;
	// b 0x8326887c
	goto loc_8326887C;
loc_83268878:
	// li r5,0
	ctx.r5.s64 = 0;
loc_8326887C:
	// addi r4,r31,8
	ctx.r4.s64 = ctx.r31.s64 + 8;
	// lwz r3,92(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 92);
	// bl 0x8326d680
	ctx.lr = 0x83268888;
	sub_8326D680(ctx, base);
loc_83268888:
	// li r3,1
	ctx.r3.s64 = 1;
loc_8326888C:
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

__attribute__((alias("__imp__sub_832688A4"))) PPC_WEAK_FUNC(sub_832688A4);
PPC_FUNC_IMPL(__imp__sub_832688A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832688A8"))) PPC_WEAK_FUNC(sub_832688A8);
PPC_FUNC_IMPL(__imp__sub_832688A8) {
	PPC_FUNC_PROLOGUE();
	// b 0x83268828
	sub_83268828(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832688AC"))) PPC_WEAK_FUNC(sub_832688AC);
PPC_FUNC_IMPL(__imp__sub_832688AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832688B0"))) PPC_WEAK_FUNC(sub_832688B0);
PPC_FUNC_IMPL(__imp__sub_832688B0) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,100(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 100);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// lwz r3,212(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 212);
	// b 0x8325aab0
	sub_8325AAB0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832688C4"))) PPC_WEAK_FUNC(sub_832688C4);
PPC_FUNC_IMPL(__imp__sub_832688C4) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_832688C8"))) PPC_WEAK_FUNC(sub_832688C8);
PPC_FUNC_IMPL(__imp__sub_832688C8) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,100(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 100);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// lwz r3,212(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 212);
	// b 0x8325ac08
	sub_8325AC08(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832688DC"))) PPC_WEAK_FUNC(sub_832688DC);
PPC_FUNC_IMPL(__imp__sub_832688DC) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_832688E0"))) PPC_WEAK_FUNC(sub_832688E0);
PPC_FUNC_IMPL(__imp__sub_832688E0) {
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
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// li r5,216
	ctx.r5.s64 = 216;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x833a2b30
	ctx.lr = 0x83268908;
	sub_833A2B30(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8326d548
	ctx.lr = 0x83268910;
	sub_8326D548(ctx, base);
	// stw r3,92(r31)
	PPC_STORE_U32(ctx.r31.u32 + 92, ctx.r3.u32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne 0x8326892c
	if (!ctx.cr0.eq) goto loc_8326892C;
loc_8326891C:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x832687a8
	ctx.lr = 0x83268924;
	sub_832687A8(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x83268a08
	goto loc_83268A08;
loc_8326892C:
	// addi r3,r31,100
	ctx.r3.s64 = ctx.r31.s64 + 100;
	// li r5,36
	ctx.r5.s64 = 36;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x833a1390
	ctx.lr = 0x8326893C;
	sub_833A1390(ctx, base);
	// lwz r11,100(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 100);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x83268a04
	if (ctx.cr6.eq) goto loc_83268A04;
	// li r4,72
	ctx.r4.s64 = 72;
	// addi r3,r31,140
	ctx.r3.s64 = ctx.r31.s64 + 140;
	// bl 0x8325a980
	ctx.lr = 0x83268954;
	sub_8325A980(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// stw r3,136(r31)
	PPC_STORE_U32(ctx.r31.u32 + 136, ctx.r3.u32);
	// beq 0x8326891c
	if (ctx.cr0.eq) goto loc_8326891C;
	// li r5,48
	ctx.r5.s64 = 48;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x833a2b30
	ctx.lr = 0x83268970;
	sub_833A2B30(ctx, base);
	// lis r11,-31961
	ctx.r11.s64 = -2094596096;
	// lis r10,-31938
	ctx.r10.s64 = -2093088768;
	// lwz r8,112(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 112);
	// lis r9,-31938
	ctx.r9.s64 = -2093088768;
	// lwz r7,116(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 116);
	// addi r10,r10,11504
	ctx.r10.s64 = ctx.r10.s64 + 11504;
	// lwz r6,120(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 120);
	// addi r9,r9,11496
	ctx.r9.s64 = ctx.r9.s64 + 11496;
	// lwz r5,132(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 132);
	// addi r11,r11,-30552
	ctx.r11.s64 = ctx.r11.s64 + -30552;
	// stw r10,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r10.u32);
	// stw r9,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r9.u32);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// stw r8,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r8.u32);
	// stw r7,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r7.u32);
	// stw r6,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r6.u32);
	// stw r5,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r5.u32);
	// stw r31,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r31.u32);
	// lwz r4,128(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 128);
	// lwz r3,124(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 124);
	// lwz r11,136(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 136);
	// lwz r10,104(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 104);
	// lwz r9,108(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 108);
	// ld r5,80(r1)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// stw r10,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r10.u32);
	// stw r9,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r9.u32);
	// stw r11,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r11.u32);
	// ld r7,96(r1)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r1.u32 + 96);
	// ld r6,88(r1)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// ld r8,104(r1)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r1.u32 + 104);
	// ld r9,112(r1)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r1.u32 + 112);
	// ld r10,120(r1)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r1.u32 + 120);
	// bl 0x8325ab70
	ctx.lr = 0x832689F8;
	sub_8325AB70(ctx, base);
	// stw r3,212(r31)
	PPC_STORE_U32(ctx.r31.u32 + 212, ctx.r3.u32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8326891c
	if (ctx.cr0.eq) goto loc_8326891C;
loc_83268A04:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_83268A08:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
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

__attribute__((alias("__imp__sub_83268A20"))) PPC_WEAK_FUNC(sub_83268A20);
PPC_FUNC_IMPL(__imp__sub_83268A20) {
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
	// addi r4,r4,8
	ctx.r4.s64 = ctx.r4.s64 + 8;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r3,92(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 92);
	// bl 0x8326d5c0
	ctx.lr = 0x83268A40;
	sub_8326D5C0(ctx, base);
	// lwz r11,100(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 100);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x83268a54
	if (!ctx.cr6.eq) goto loc_83268A54;
	// lwz r3,136(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 136);
	// bl 0x8325a978
	ctx.lr = 0x83268A54;
	sub_8325A978(ctx, base);
loc_83268A54:
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

__attribute__((alias("__imp__sub_83268A68"))) PPC_WEAK_FUNC(sub_83268A68);
PPC_FUNC_IMPL(__imp__sub_83268A68) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,100(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 100);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x83268a7c
	if (!ctx.cr6.eq) goto loc_83268A7C;
	// lwz r3,136(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 136);
	// b 0x8325a978
	sub_8325A978(ctx, base);
	return;
loc_83268A7C:
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// b 0x83268828
	sub_83268828(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83268A88"))) PPC_WEAK_FUNC(sub_83268A88);
PPC_FUNC_IMPL(__imp__sub_83268A88) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83268A8C"))) PPC_WEAK_FUNC(sub_83268A8C);
PPC_FUNC_IMPL(__imp__sub_83268A8C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83268A90"))) PPC_WEAK_FUNC(sub_83268A90);
PPC_FUNC_IMPL(__imp__sub_83268A90) {
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
	// lwz r3,4(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x83268b4c
	if (ctx.cr6.eq) goto loc_83268B4C;
	// lwz r11,316(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 316);
	// li r4,0
	ctx.r4.s64 = 0;
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x83268acc
	if (ctx.cr6.eq) goto loc_83268ACC;
	// li r4,1
	ctx.r4.s64 = 1;
loc_83268ACC:
	// bl 0x83265258
	ctx.lr = 0x83268AD0;
	sub_83265258(ctx, base);
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// beq cr6,0x83268b18
	if (ctx.cr6.eq) goto loc_83268B18;
	// lwz r4,320(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 320);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x83268b18
	if (ctx.cr6.eq) goto loc_83268B18;
	// lwz r11,316(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 316);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x83268b18
	if (ctx.cr6.eq) goto loc_83268B18;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r5,344(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 344);
	// li r8,0
	ctx.r8.s64 = 0;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// bl 0x83266050
	ctx.lr = 0x83268B0C;
	sub_83266050(ctx, base);
	// li r11,19
	ctx.r11.s64 = 19;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// b 0x83268b4c
	goto loc_83268B4C;
loc_83268B18:
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// bl 0x83265970
	ctx.lr = 0x83268B20;
	sub_83265970(ctx, base);
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// bl 0x83266170
	ctx.lr = 0x83268B28;
	sub_83266170(ctx, base);
	// lwz r10,320(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 320);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x83268b4c
	if (ctx.cr6.eq) goto loc_83268B4C;
	// lwz r10,316(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 316);
	// cmpwi cr6,r10,1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 1, ctx.xer);
	// beq cr6,0x83268b4c
	if (ctx.cr6.eq) goto loc_83268B4C;
	// stw r11,320(r31)
	PPC_STORE_U32(ctx.r31.u32 + 320, ctx.r11.u32);
loc_83268B4C:
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

__attribute__((alias("__imp__sub_83268B64"))) PPC_WEAK_FUNC(sub_83268B64);
PPC_FUNC_IMPL(__imp__sub_83268B64) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83268B68"))) PPC_WEAK_FUNC(sub_83268B68);
PPC_FUNC_IMPL(__imp__sub_83268B68) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x833a01ac
	ctx.lr = 0x83268B70;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// lwz r3,352(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 352);
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r30,r6
	ctx.r30.u64 = ctx.r6.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x83268b9c
	if (ctx.cr6.eq) goto loc_83268B9C;
	// mr r5,r6
	ctx.r5.u64 = ctx.r6.u64;
	// bl 0x8326d778
	ctx.lr = 0x83268B94;
	sub_8326D778(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne 0x83268bc8
	if (!ctx.cr0.eq) goto loc_83268BC8;
loc_83268B9C:
	// lwz r3,392(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 392);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x83268bb4
	if (ctx.cr6.eq) goto loc_83268BB4;
	// add r4,r31,r30
	ctx.r4.u64 = ctx.r31.u64 + ctx.r30.u64;
	// bl 0x833e3190
	ctx.lr = 0x83268BB0;
	sub_833E3190(ctx, base);
	// b 0x83268bc8
	goto loc_83268BC8;
loc_83268BB4:
	// lis r11,-32219
	ctx.r11.s64 = -2111504384;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r4,r11,6048
	ctx.r4.s64 = ctx.r11.s64 + 6048;
	// bl 0x83257c00
	ctx.lr = 0x83268BC4;
	sub_83257C00(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
loc_83268BC8:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x833a01fc
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83268BD0"))) PPC_WEAK_FUNC(sub_83268BD0);
PPC_FUNC_IMPL(__imp__sub_83268BD0) {
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
	// lwz r3,352(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 352);
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// bl 0x8326d8d8
	ctx.lr = 0x83268BF4;
	sub_8326D8D8(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x83268c0c
	if (ctx.cr0.eq) goto loc_83268C0C;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r3,352(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 352);
	// bl 0x8326d830
	ctx.lr = 0x83268C08;
	sub_8326D830(ctx, base);
	// b 0x83268c34
	goto loc_83268C34;
loc_83268C0C:
	// lwz r3,392(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 392);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x83268c24
	if (ctx.cr6.eq) goto loc_83268C24;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x833e3208
	ctx.lr = 0x83268C20;
	sub_833E3208(ctx, base);
	// b 0x83268c34
	goto loc_83268C34;
loc_83268C24:
	// lis r11,-32219
	ctx.r11.s64 = -2111504384;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r4,r11,6084
	ctx.r4.s64 = ctx.r11.s64 + 6084;
	// bl 0x83257c00
	ctx.lr = 0x83268C34;
	sub_83257C00(ctx, base);
loc_83268C34:
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

__attribute__((alias("__imp__sub_83268C4C"))) PPC_WEAK_FUNC(sub_83268C4C);
PPC_FUNC_IMPL(__imp__sub_83268C4C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83268C50"))) PPC_WEAK_FUNC(sub_83268C50);
PPC_FUNC_IMPL(__imp__sub_83268C50) {
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
	// lwz r11,20(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r30,0
	ctx.r30.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x83268c94
	if (ctx.cr6.eq) goto loc_83268C94;
	// addi r3,r3,196
	ctx.r3.s64 = ctx.r3.s64 + 196;
	// bl 0x8326ad68
	ctx.lr = 0x83268C80;
	sub_8326AD68(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,16(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// bl 0x83268bd0
	ctx.lr = 0x83268C8C;
	sub_83268BD0(ctx, base);
	// stw r30,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r30.u32);
	// stw r30,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r30.u32);
loc_83268C94:
	// lwz r11,28(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x83268cbc
	if (ctx.cr6.eq) goto loc_83268CBC;
	// addi r3,r31,268
	ctx.r3.s64 = ctx.r31.s64 + 268;
	// bl 0x8326a7e0
	ctx.lr = 0x83268CA8;
	sub_8326A7E0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,24(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// bl 0x83268bd0
	ctx.lr = 0x83268CB4;
	sub_83268BD0(ctx, base);
	// stw r30,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r30.u32);
	// stw r30,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r30.u32);
loc_83268CBC:
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x83268ce4
	if (ctx.cr6.eq) goto loc_83268CE4;
	// addi r3,r31,184
	ctx.r3.s64 = ctx.r31.s64 + 184;
	// bl 0x8326a3f0
	ctx.lr = 0x83268CD0;
	sub_8326A3F0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,8(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// bl 0x83268bd0
	ctx.lr = 0x83268CDC;
	sub_83268BD0(ctx, base);
	// stw r30,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r30.u32);
	// stw r30,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r30.u32);
loc_83268CE4:
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x83268d04
	if (ctx.cr6.eq) goto loc_83268D04;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,8(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// bl 0x83268bd0
	ctx.lr = 0x83268CFC;
	sub_83268BD0(ctx, base);
	// stw r30,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r30.u32);
	// stw r30,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r30.u32);
loc_83268D04:
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

__attribute__((alias("__imp__sub_83268D1C"))) PPC_WEAK_FUNC(sub_83268D1C);
PPC_FUNC_IMPL(__imp__sub_83268D1C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83268D20"))) PPC_WEAK_FUNC(sub_83268D20);
PPC_FUNC_IMPL(__imp__sub_83268D20) {
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
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x83268a90
	ctx.lr = 0x83268D3C;
	sub_83268A90(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83268c50
	ctx.lr = 0x83268D44;
	sub_83268C50(ctx, base);
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

__attribute__((alias("__imp__sub_83268D58"))) PPC_WEAK_FUNC(sub_83268D58);
PPC_FUNC_IMPL(__imp__sub_83268D58) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmpwi cr6,r11,19
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 19, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// li r4,1
	ctx.r4.s64 = 1;
	// b 0x83268a90
	sub_83268A90(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83268D6C"))) PPC_WEAK_FUNC(sub_83268D6C);
PPC_FUNC_IMPL(__imp__sub_83268D6C) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83268D70"))) PPC_WEAK_FUNC(sub_83268D70);
PPC_FUNC_IMPL(__imp__sub_83268D70) {
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
	// li r3,2048
	ctx.r3.s64 = 2048;
	// bl 0x8326b6c8
	ctx.lr = 0x83268D90;
	sub_8326B6C8(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// clrlwi. r11,r3,27
	ctx.r11.u64 = ctx.r3.u32 & 0x1F;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x83268da4
	if (ctx.cr0.eq) goto loc_83268DA4;
	// rlwinm r11,r3,0,0,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 0) & 0xFFFFFFE0;
	// addi r31,r11,32
	ctx.r31.s64 = ctx.r11.s64 + 32;
loc_83268DA4:
	// bl 0x8310aec0
	ctx.lr = 0x83268DA8;
	sub_8310AEC0(ctx, base);
	// addi r11,r3,1
	ctx.r11.s64 = ctx.r3.s64 + 1;
	// mulli r11,r11,28
	ctx.r11.s64 = ctx.r11.s64 * 28;
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// add r3,r11,r30
	ctx.r3.u64 = ctx.r11.u64 + ctx.r30.u64;
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

__attribute__((alias("__imp__sub_83268DD0"))) PPC_WEAK_FUNC(sub_83268DD0);
PPC_FUNC_IMPL(__imp__sub_83268DD0) {
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
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x83268e18
	if (ctx.cr6.eq) goto loc_83268E18;
	// addi r30,r3,40
	ctx.r30.s64 = ctx.r3.s64 + 40;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8326b6f8
	ctx.lr = 0x83268E00;
	sub_8326B6F8(ctx, base);
	// cmpldi cr6,r3,0
	ctx.cr6.compare<uint64_t>(ctx.r3.u64, 0, ctx.xer);
	// beq cr6,0x83268e44
	if (ctx.cr6.eq) goto loc_83268E44;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8326bd60
	ctx.lr = 0x83268E10;
	sub_8326BD60(ctx, base);
	// lwz r30,400(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 400);
	// b 0x83268e1c
	goto loc_83268E1C;
loc_83268E18:
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
loc_83268E1C:
	// clrlwi. r11,r3,27
	ctx.r11.u64 = ctx.r3.u32 & 0x1F;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// beq 0x83268e30
	if (ctx.cr0.eq) goto loc_83268E30;
	// rlwinm r11,r3,0,0,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 0) & 0xFFFFFFE0;
	// addi r31,r11,32
	ctx.r31.s64 = ctx.r11.s64 + 32;
loc_83268E30:
	// bl 0x8310bd48
	ctx.lr = 0x83268E34;
	sub_8310BD48(ctx, base);
	// addi r11,r3,1
	ctx.r11.s64 = ctx.r3.s64 + 1;
	// mulli r11,r11,28
	ctx.r11.s64 = ctx.r11.s64 * 28;
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// add r3,r11,r30
	ctx.r3.u64 = ctx.r11.u64 + ctx.r30.u64;
loc_83268E44:
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

__attribute__((alias("__imp__sub_83268E5C"))) PPC_WEAK_FUNC(sub_83268E5C);
PPC_FUNC_IMPL(__imp__sub_83268E5C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83268E60"))) PPC_WEAK_FUNC(sub_83268E60);
PPC_FUNC_IMPL(__imp__sub_83268E60) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x833a01a8
	ctx.lr = 0x83268E68;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r3,r5
	ctx.r3.u64 = ctx.r5.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// bl 0x83268d70
	ctx.lr = 0x83268E80;
	sub_83268D70(ctx, base);
	// lwz r11,4(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x83268ec0
	if (!ctx.cr6.gt) goto loc_83268EC0;
	// clrlwi. r10,r11,27
	ctx.r10.u64 = ctx.r11.u32 & 0x1F;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x83268ea0
	if (ctx.cr0.eq) goto loc_83268EA0;
	// rlwinm r11,r11,0,0,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFE0;
	// addi r11,r11,32
	ctx.r11.s64 = ctx.r11.s64 + 32;
loc_83268EA0:
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + ctx.r30.u64;
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// bl 0x8310aec0
	ctx.lr = 0x83268EAC;
	sub_8310AEC0(ctx, base);
	// addi r11,r3,1
	ctx.r11.s64 = ctx.r3.s64 + 1;
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// mulli r11,r11,28
	ctx.r11.s64 = ctx.r11.s64 * 28;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
loc_83268EC0:
	// lwz r4,0(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// ble cr6,0x83268edc
	if (!ctx.cr6.gt) goto loc_83268EDC;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x83268dd0
	ctx.lr = 0x83268ED8;
	sub_83268DD0(ctx, base);
	// stw r3,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r3.u32);
loc_83268EDC:
	// lwz r11,8(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x83268f18
	if (!ctx.cr6.gt) goto loc_83268F18;
	// clrlwi. r10,r11,27
	ctx.r10.u64 = ctx.r11.u32 & 0x1F;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x83268ef8
	if (ctx.cr0.eq) goto loc_83268EF8;
	// rlwinm r11,r11,0,0,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFE0;
	// addi r11,r11,32
	ctx.r11.s64 = ctx.r11.s64 + 32;
loc_83268EF8:
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + ctx.r30.u64;
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// bl 0x83110080
	ctx.lr = 0x83268F04;
	sub_83110080(ctx, base);
	// addi r11,r3,1
	ctx.r11.s64 = ctx.r3.s64 + 1;
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// mulli r11,r11,28
	ctx.r11.s64 = ctx.r11.s64 * 28;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
loc_83268F18:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x833a01f8
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83268F24"))) PPC_WEAK_FUNC(sub_83268F24);
PPC_FUNC_IMPL(__imp__sub_83268F24) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83268F28"))) PPC_WEAK_FUNC(sub_83268F28);
PPC_FUNC_IMPL(__imp__sub_83268F28) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x833a01a0
	ctx.lr = 0x83268F30;
	__savegprlr_26(ctx, base);
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// stw r11,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r11.u32);
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// mr r26,r6
	ctx.r26.u64 = ctx.r6.u64;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// mr r27,r7
	ctx.r27.u64 = ctx.r7.u64;
	// stw r11,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r11.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// stw r11,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r11.u32);
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// beq cr6,0x83268fcc
	if (ctx.cr6.eq) goto loc_83268FCC;
	// addi r30,r3,40
	ctx.r30.s64 = ctx.r3.s64 + 40;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8326b6c0
	ctx.lr = 0x83268F78;
	sub_8326B6C0(ctx, base);
	// cmpldi cr6,r3,0
	ctx.cr6.compare<uint64_t>(ctx.r3.u64, 0, ctx.xer);
	// beq cr6,0x83268f8c
	if (ctx.cr6.eq) goto loc_83268F8C;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8326b6d0
	ctx.lr = 0x83268F88;
	sub_8326B6D0(ctx, base);
	// stw r3,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r3.u32);
loc_83268F8C:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8326d910
	ctx.lr = 0x83268F94;
	sub_8326D910(ctx, base);
	// cmpldi cr6,r3,0
	ctx.cr6.compare<uint64_t>(ctx.r3.u64, 0, ctx.xer);
	// beq cr6,0x83268fa8
	if (ctx.cr6.eq) goto loc_83268FA8;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8326bd40
	ctx.lr = 0x83268FA4;
	sub_8326BD40(ctx, base);
	// stw r3,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r3.u32);
loc_83268FA8:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8326b6f8
	ctx.lr = 0x83268FB0;
	sub_8326B6F8(ctx, base);
	// cmpldi cr6,r3,0
	ctx.cr6.compare<uint64_t>(ctx.r3.u64, 0, ctx.xer);
	// beq cr6,0x83268fc4
	if (ctx.cr6.eq) goto loc_83268FC4;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8326bd60
	ctx.lr = 0x83268FC0;
	sub_8326BD60(ctx, base);
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
loc_83268FC4:
	// lwz r5,400(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 400);
	// b 0x83268fdc
	goto loc_83268FDC;
loc_83268FCC:
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x83260420
	ctx.lr = 0x83268FD8;
	sub_83260420(ctx, base);
	// lwz r5,136(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 136);
loc_83268FDC:
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x83268e60
	ctx.lr = 0x83268FE8;
	sub_83268E60(ctx, base);
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x83268ff4
	if (ctx.cr6.eq) goto loc_83268FF4;
	// stw r3,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r3.u32);
loc_83268FF4:
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// beq cr6,0x83269004
	if (ctx.cr6.eq) goto loc_83269004;
	// lwz r11,100(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// stw r11,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r11.u32);
loc_83269004:
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// beq cr6,0x83269014
	if (ctx.cr6.eq) goto loc_83269014;
	// lwz r11,96(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// stw r11,0(r27)
	PPC_STORE_U32(ctx.r27.u32 + 0, ctx.r11.u32);
loc_83269014:
	// cmplwi cr6,r26,0
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, 0, ctx.xer);
	// beq cr6,0x83269024
	if (ctx.cr6.eq) goto loc_83269024;
	// lwz r11,104(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// stw r11,0(r26)
	PPC_STORE_U32(ctx.r26.u32 + 0, ctx.r11.u32);
loc_83269024:
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x833a01f0
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8326902C"))) PPC_WEAK_FUNC(sub_8326902C);
PPC_FUNC_IMPL(__imp__sub_8326902C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83269030"))) PPC_WEAK_FUNC(sub_83269030);
PPC_FUNC_IMPL(__imp__sub_83269030) {
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
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r7,r1,84
	ctx.r7.s64 = ctx.r1.s64 + 84;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// stw r11,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r11.u32);
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x83268f28
	ctx.lr = 0x83269068;
	sub_83268F28(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r10,84(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// li r3,0
	ctx.r3.s64 = 0;
	// lwz r9,88(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// add r5,r11,r9
	ctx.r5.u64 = ctx.r11.u64 + ctx.r9.u64;
	// lwz r11,392(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 392);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8326909c
	if (ctx.cr6.eq) goto loc_8326909C;
	// lis r11,-32219
	ctx.r11.s64 = -2111504384;
	// addi r4,r11,6312
	ctx.r4.s64 = ctx.r11.s64 + 6312;
	// bl 0x83257c00
	ctx.lr = 0x83269098;
	sub_83257C00(ctx, base);
	// b 0x832690c4
	goto loc_832690C4;
loc_8326909C:
	// lwz r11,356(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 356);
	// cmpw cr6,r11,r5
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r5.s32, ctx.xer);
	// bge cr6,0x832690b8
	if (!ctx.cr6.lt) goto loc_832690B8;
	// lis r10,-32219
	ctx.r10.s64 = -2111504384;
	// subf r5,r11,r5
	ctx.r5.s64 = ctx.r5.s64 - ctx.r11.s64;
	// addi r4,r10,6216
	ctx.r4.s64 = ctx.r10.s64 + 6216;
	// b 0x832690c0
	goto loc_832690C0;
loc_832690B8:
	// lis r11,-32219
	ctx.r11.s64 = -2111504384;
	// addi r4,r11,6128
	ctx.r4.s64 = ctx.r11.s64 + 6128;
loc_832690C0:
	// bl 0x83257c10
	ctx.lr = 0x832690C4;
	sub_83257C10(ctx, base);
loc_832690C4:
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

__attribute__((alias("__imp__sub_832690D8"))) PPC_WEAK_FUNC(sub_832690D8);
PPC_FUNC_IMPL(__imp__sub_832690D8) {
	PPC_FUNC_PROLOGUE();
	// stw r4,396(r3)
	PPC_STORE_U32(ctx.r3.u32 + 396, ctx.r4.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_832690E0"))) PPC_WEAK_FUNC(sub_832690E0);
PPC_FUNC_IMPL(__imp__sub_832690E0) {
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
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r11.u32);
	// cmpwi cr6,r10,18
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 18, ctx.xer);
	// stw r11,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r11.u32);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// beq cr6,0x83269114
	if (ctx.cr6.eq) goto loc_83269114;
	// li r3,-1
	ctx.r3.s64 = -1;
	// b 0x8326914c
	goto loc_8326914C;
loc_83269114:
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// addi r6,r1,84
	ctx.r6.s64 = ctx.r1.s64 + 84;
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// addi r4,r1,92
	ctx.r4.s64 = ctx.r1.s64 + 92;
	// bl 0x83268f28
	ctx.lr = 0x83269128;
	sub_83268F28(ctx, base);
	// lwz r9,80(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r10,88(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// lwz r8,92(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// add r3,r11,r10
	ctx.r3.u64 = ctx.r11.u64 + ctx.r10.u64;
	// cmpw cr6,r3,r8
	ctx.cr6.compare<int32_t>(ctx.r3.s32, ctx.r8.s32, ctx.xer);
	// bge cr6,0x8326914c
	if (!ctx.cr6.lt) goto loc_8326914C;
	// mr r3,r8
	ctx.r3.u64 = ctx.r8.u64;
loc_8326914C:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8326915C"))) PPC_WEAK_FUNC(sub_8326915C);
PPC_FUNC_IMPL(__imp__sub_8326915C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83269160"))) PPC_WEAK_FUNC(sub_83269160);
PPC_FUNC_IMPL(__imp__sub_83269160) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x833a01a8
	ctx.lr = 0x83269168;
	__savegprlr_28(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// cmpwi cr6,r11,18
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 18, ctx.xer);
	// bne cr6,0x832691ec
	if (!ctx.cr6.eq) goto loc_832691EC;
	// addi r28,r3,40
	ctx.r28.s64 = ctx.r3.s64 + 40;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x8326b6c0
	ctx.lr = 0x83269190;
	sub_8326B6C0(ctx, base);
	// cmpldi cr6,r3,0
	ctx.cr6.compare<uint64_t>(ctx.r3.u64, 0, ctx.xer);
	// beq cr6,0x832691ec
	if (ctx.cr6.eq) goto loc_832691EC;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x8326b708
	ctx.lr = 0x832691A0;
	sub_8326B708(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r31,184
	ctx.r3.s64 = ctx.r31.s64 + 184;
	// beq 0x832691bc
	if (ctx.cr0.eq) goto loc_832691BC;
	// bl 0x8326a678
	ctx.lr = 0x832691B8;
	sub_8326A678(ctx, base);
	// b 0x832691c0
	goto loc_832691C0;
loc_832691BC:
	// bl 0x8326a5a0
	ctx.lr = 0x832691C0;
	sub_8326A5A0(ctx, base);
loc_832691C0:
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x832691ec
	if (ctx.cr6.eq) goto loc_832691EC;
	// lwz r11,92(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// li r3,1
	ctx.r3.s64 = 1;
	// lwz r9,88(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// ld r10,96(r1)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r1.u32 + 96);
	// stw r11,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r11.u32);
	// stw r9,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r9.u32);
	// ld r11,328(r31)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r31.u32 + 328);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// b 0x832691fc
	goto loc_832691FC;
loc_832691EC:
	// li r11,0
	ctx.r11.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r11,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r11.u32);
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
loc_832691FC:
	// std r11,8(r30)
	PPC_STORE_U64(ctx.r30.u32 + 8, ctx.r11.u64);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x833a01f8
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83269208"))) PPC_WEAK_FUNC(sub_83269208);
PPC_FUNC_IMPL(__imp__sub_83269208) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x833a01ac
	ctx.lr = 0x83269210;
	__savegprlr_29(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// cmpwi cr6,r11,18
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 18, ctx.xer);
	// bne cr6,0x83269278
	if (!ctx.cr6.eq) goto loc_83269278;
	// addi r3,r3,40
	ctx.r3.s64 = ctx.r3.s64 + 40;
	// bl 0x8326b6c0
	ctx.lr = 0x83269234;
	sub_8326B6C0(ctx, base);
	// cmpldi cr6,r3,0
	ctx.cr6.compare<uint64_t>(ctx.r3.u64, 0, ctx.xer);
	// beq cr6,0x83269278
	if (ctx.cr6.eq) goto loc_83269278;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r30,184
	ctx.r3.s64 = ctx.r30.s64 + 184;
	// bl 0x8326a430
	ctx.lr = 0x8326924C;
	sub_8326A430(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x83269278
	if (ctx.cr0.eq) goto loc_83269278;
	// lwz r11,92(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// li r3,1
	ctx.r3.s64 = 1;
	// lwz r9,88(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// ld r10,96(r1)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r1.u32 + 96);
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// ld r11,328(r30)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r30.u32 + 328);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// b 0x83269288
	goto loc_83269288;
loc_83269278:
	// li r11,0
	ctx.r11.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
loc_83269288:
	// std r11,8(r31)
	PPC_STORE_U64(ctx.r31.u32 + 8, ctx.r11.u64);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x833a01fc
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83269294"))) PPC_WEAK_FUNC(sub_83269294);
PPC_FUNC_IMPL(__imp__sub_83269294) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83269298"))) PPC_WEAK_FUNC(sub_83269298);
PPC_FUNC_IMPL(__imp__sub_83269298) {
	PPC_FUNC_PROLOGUE();
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x832692f0
	if (ctx.cr6.eq) goto loc_832692F0;
	// lwz r10,0(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r10,0(r5)
	PPC_STORE_U32(ctx.r5.u32 + 0, ctx.r10.u32);
	// lwz r10,4(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// stw r10,4(r5)
	PPC_STORE_U32(ctx.r5.u32 + 4, ctx.r10.u32);
	// lwz r10,12(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 12);
	// stw r10,12(r5)
	PPC_STORE_U32(ctx.r5.u32 + 12, ctx.r10.u32);
	// lwz r10,8(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	// stw r10,8(r5)
	PPC_STORE_U32(ctx.r5.u32 + 8, ctx.r10.u32);
	// ld r11,328(r11)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r11.u32 + 328);
	// ld r10,16(r4)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r4.u32 + 16);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// std r11,16(r5)
	PPC_STORE_U64(ctx.r5.u32 + 16, ctx.r11.u64);
	// lwz r11,24(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 24);
	// stw r11,24(r5)
	PPC_STORE_U32(ctx.r5.u32 + 24, ctx.r11.u32);
	// lwz r11,28(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 28);
	// stw r11,28(r5)
	PPC_STORE_U32(ctx.r5.u32 + 28, ctx.r11.u32);
	// lwz r11,32(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 32);
	// b 0x83269314
	goto loc_83269314;
loc_832692F0:
	// li r11,0
	ctx.r11.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r11,0(r5)
	PPC_STORE_U32(ctx.r5.u32 + 0, ctx.r11.u32);
	// stw r11,4(r5)
	PPC_STORE_U32(ctx.r5.u32 + 4, ctx.r11.u32);
	// stw r11,12(r5)
	PPC_STORE_U32(ctx.r5.u32 + 12, ctx.r11.u32);
	// stw r11,8(r5)
	PPC_STORE_U32(ctx.r5.u32 + 8, ctx.r11.u32);
	// std r11,16(r5)
	PPC_STORE_U64(ctx.r5.u32 + 16, ctx.r11.u64);
	// stw r11,24(r5)
	PPC_STORE_U32(ctx.r5.u32 + 24, ctx.r11.u32);
	// stw r11,28(r5)
	PPC_STORE_U32(ctx.r5.u32 + 28, ctx.r11.u32);
loc_83269314:
	// stw r11,32(r5)
	PPC_STORE_U32(ctx.r5.u32 + 32, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8326931C"))) PPC_WEAK_FUNC(sub_8326931C);
PPC_FUNC_IMPL(__imp__sub_8326931C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83269320"))) PPC_WEAK_FUNC(sub_83269320);
PPC_FUNC_IMPL(__imp__sub_83269320) {
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
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addi r31,r3,320
	ctx.r31.s64 = ctx.r3.s64 + 320;
	// lwz r3,320(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 320);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x83269368
	if (!ctx.cr6.eq) goto loc_83269368;
	// lwz r3,4(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x83269368
	if (ctx.cr6.eq) goto loc_83269368;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x832652a0
	ctx.lr = 0x83269358;
	sub_832652A0(ctx, base);
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// li r3,0
	ctx.r3.s64 = 0;
	// beq cr6,0x83269368
	if (ctx.cr6.eq) goto loc_83269368;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
loc_83269368:
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

__attribute__((alias("__imp__sub_8326937C"))) PPC_WEAK_FUNC(sub_8326937C);
PPC_FUNC_IMPL(__imp__sub_8326937C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83269380"))) PPC_WEAK_FUNC(sub_83269380);
PPC_FUNC_IMPL(__imp__sub_83269380) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,344(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 344);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83269388"))) PPC_WEAK_FUNC(sub_83269388);
PPC_FUNC_IMPL(__imp__sub_83269388) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x833a01ac
	ctx.lr = 0x83269390;
	__savegprlr_29(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r11,304(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 304);
	// lwz r10,308(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 308);
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// lwz r9,312(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 312);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// stw r9,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r9.u32);
	// bl 0x82822bf8
	ctx.lr = 0x832693C4;
	sub_82822BF8(ctx, base);
	// li r6,1
	ctx.r6.s64 = 1;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r31,196
	ctx.r3.s64 = ctx.r31.s64 + 196;
	// bl 0x8326b438
	ctx.lr = 0x832693D8;
	sub_8326B438(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bgt 0x832693e8
	if (ctx.cr0.gt) goto loc_832693E8;
loc_832693E0:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x83269428
	goto loc_83269428;
loc_832693E8:
	// lwz r11,12(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 12);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// addi r3,r31,184
	ctx.r3.s64 = ctx.r31.s64 + 184;
	// lwz r11,16(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// clrlwi r5,r11,2
	ctx.r5.u64 = ctx.r11.u32 & 0x3FFFFFFF;
	// bl 0x8326a430
	ctx.lr = 0x83269400;
	sub_8326A430(ctx, base);
	// cmpwi cr6,r3,1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 1, ctx.xer);
	// bne cr6,0x832693e0
	if (!ctx.cr6.eq) goto loc_832693E0;
	// lwz r11,104(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// lwz r9,108(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	// ld r10,112(r1)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r1.u32 + 112);
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
	// stw r9,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r9.u32);
	// ld r11,328(r31)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r31.u32 + 328);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// std r11,8(r30)
	PPC_STORE_U64(ctx.r30.u32 + 8, ctx.r11.u64);
loc_83269428:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x833a01fc
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83269430"))) PPC_WEAK_FUNC(sub_83269430);
PPC_FUNC_IMPL(__imp__sub_83269430) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r4,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r4.u32);
	// addi r10,r1,112
	ctx.r10.s64 = ctx.r1.s64 + 112;
	// stw r5,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r5.u32);
	// sth r11,100(r1)
	PPC_STORE_U16(ctx.r1.u32 + 100, ctx.r11.u16);
	// li r9,1
	ctx.r9.s64 = 1;
	// li r11,18000
	ctx.r11.s64 = 18000;
	// stw r6,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r6.u32);
	// stw r10,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r10.u32);
	// mr r5,r7
	ctx.r5.u64 = ctx.r7.u64;
	// stw r9,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r9.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// sth r11,102(r1)
	PPC_STORE_U16(ctx.r1.u32 + 102, ctx.r11.u16);
	// bl 0x83269388
	ctx.lr = 0x83269474;
	sub_83269388(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83269484"))) PPC_WEAK_FUNC(sub_83269484);
PPC_FUNC_IMPL(__imp__sub_83269484) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83269488"))) PPC_WEAK_FUNC(sub_83269488);
PPC_FUNC_IMPL(__imp__sub_83269488) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x833a01a4
	ctx.lr = 0x83269490;
	__savegprlr_27(ctx, base);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
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
	// cmpwi cr6,r11,18
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 18, ctx.xer);
	// bne cr6,0x832694c4
	if (!ctx.cr6.eq) goto loc_832694C4;
	// addi r3,r3,40
	ctx.r3.s64 = ctx.r3.s64 + 40;
	// bl 0x8326b6f8
	ctx.lr = 0x832694BC;
	sub_8326B6F8(ctx, base);
	// cmpldi cr6,r3,0
	ctx.cr6.compare<uint64_t>(ctx.r3.u64, 0, ctx.xer);
	// bne cr6,0x832694cc
	if (!ctx.cr6.eq) goto loc_832694CC;
loc_832694C4:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x83269508
	goto loc_83269508;
loc_832694CC:
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r30,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r30.u32);
	// addi r10,r1,112
	ctx.r10.s64 = ctx.r1.s64 + 112;
	// stw r29,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r29.u32);
	// stw r11,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r11.u32);
	// li r9,1
	ctx.r9.s64 = 1;
	// li r11,18756
	ctx.r11.s64 = 18756;
	// sth r28,100(r1)
	PPC_STORE_U16(ctx.r1.u32 + 100, ctx.r28.u16);
	// stw r10,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r10.u32);
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// stw r9,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r9.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// sth r11,102(r1)
	PPC_STORE_U16(ctx.r1.u32 + 102, ctx.r11.u16);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83269388
	ctx.lr = 0x83269508;
	sub_83269388(ctx, base);
loc_83269508:
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x833a01f4
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83269510"))) PPC_WEAK_FUNC(sub_83269510);
PPC_FUNC_IMPL(__imp__sub_83269510) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x833a01a8
	ctx.lr = 0x83269518;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// mr r28,r6
	ctx.r28.u64 = ctx.r6.u64;
	// mr r29,r7
	ctx.r29.u64 = ctx.r7.u64;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x83269568
	if (ctx.cr6.eq) goto loc_83269568;
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// beq cr6,0x83269568
	if (ctx.cr6.eq) goto loc_83269568;
	// bl 0x833e3108
	ctx.lr = 0x83269544;
	sub_833E3108(ctx, base);
	// stw r3,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r3.u32);
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x833e3140
	ctx.lr = 0x83269554;
	sub_833E3140(ctx, base);
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x833e3168
	ctx.lr = 0x83269564;
	sub_833E3168(ctx, base);
	// b 0x83269574
	goto loc_83269574;
loc_83269568:
	// bl 0x833e3108
	ctx.lr = 0x8326956C;
	sub_833E3108(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
loc_83269574:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x833a01f8
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8326957C"))) PPC_WEAK_FUNC(sub_8326957C);
PPC_FUNC_IMPL(__imp__sub_8326957C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83269580"))) PPC_WEAK_FUNC(sub_83269580);
PPC_FUNC_IMPL(__imp__sub_83269580) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31827
	ctx.r11.s64 = -2085814272;
	// mr r6,r4
	ctx.r6.u64 = ctx.r4.u64;
	// addi r4,r11,9656
	ctx.r4.s64 = ctx.r11.s64 + 9656;
	// mr r7,r5
	ctx.r7.u64 = ctx.r5.u64;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// addi r3,r4,20
	ctx.r3.s64 = ctx.r4.s64 + 20;
	// b 0x83269510
	sub_83269510(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8326959C"))) PPC_WEAK_FUNC(sub_8326959C);
PPC_FUNC_IMPL(__imp__sub_8326959C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832695A0"))) PPC_WEAK_FUNC(sub_832695A0);
PPC_FUNC_IMPL(__imp__sub_832695A0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-31827
	ctx.r11.s64 = -2085814272;
	// lwz r11,9676(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 9676);
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

__attribute__((alias("__imp__sub_832695B4"))) PPC_WEAK_FUNC(sub_832695B4);
PPC_FUNC_IMPL(__imp__sub_832695B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832695B8"))) PPC_WEAK_FUNC(sub_832695B8);
PPC_FUNC_IMPL(__imp__sub_832695B8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x833a01ac
	ctx.lr = 0x832695C0;
	__savegprlr_29(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r10,3
	ctx.r10.s64 = 3;
	// li r30,0
	ctx.r30.s64 = 0;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// addi r11,r31,4
	ctx.r11.s64 = ctx.r31.s64 + 4;
	// stw r30,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r30.u32);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_832695E4:
	// stw r30,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r30.u32);
	// stwu r30,8(r11)
	ea = 8 + ctx.r11.u32;
	PPC_STORE_U32(ea, ctx.r30.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x832695e4
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_832695E4;
	// lis r11,-31961
	ctx.r11.s64 = -2094596096;
	// stw r31,368(r31)
	PPC_STORE_U32(ctx.r31.u32 + 368, ctx.r31.u32);
	// lis r10,-31961
	ctx.r10.s64 = -2094596096;
	// stw r30,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r30.u32);
	// addi r11,r11,-29848
	ctx.r11.s64 = ctx.r11.s64 + -29848;
	// std r30,328(r31)
	PPC_STORE_U64(ctx.r31.u32 + 328, ctx.r30.u64);
	// addi r10,r10,-29744
	ctx.r10.s64 = ctx.r10.s64 + -29744;
	// std r30,336(r31)
	PPC_STORE_U64(ctx.r31.u32 + 336, ctx.r30.u64);
	// stw r30,344(r31)
	PPC_STORE_U32(ctx.r31.u32 + 344, ctx.r30.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// stw r30,316(r31)
	PPC_STORE_U32(ctx.r31.u32 + 316, ctx.r30.u32);
	// stw r30,396(r31)
	PPC_STORE_U32(ctx.r31.u32 + 396, ctx.r30.u32);
	// stw r11,360(r31)
	PPC_STORE_U32(ctx.r31.u32 + 360, ctx.r11.u32);
	// stw r10,364(r31)
	PPC_STORE_U32(ctx.r31.u32 + 364, ctx.r10.u32);
	// beq cr6,0x83269680
	if (ctx.cr6.eq) goto loc_83269680;
	// li r5,2
	ctx.r5.s64 = 2;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x8326d6d8
	ctx.lr = 0x83269638;
	sub_8326D6D8(ctx, base);
	// subfic r10,r3,0
	ctx.xer.ca = ctx.r3.u32 <= 0;
	ctx.r10.s64 = 0 - ctx.r3.s64;
	// lis r11,-31827
	ctx.r11.s64 = -2085814272;
	// stw r3,352(r31)
	PPC_STORE_U32(ctx.r31.u32 + 352, ctx.r3.u32);
	// subfe r10,r10,r10
	temp.u8 = (~ctx.r10.u32 + ctx.r10.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r10.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r10.u64 = ~ctx.r10.u64 + ctx.r10.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// addi r11,r11,9656
	ctx.r11.s64 = ctx.r11.s64 + 9656;
	// and r10,r10,r29
	ctx.r10.u64 = ctx.r10.u64 & ctx.r29.u64;
	// stw r10,356(r31)
	PPC_STORE_U32(ctx.r31.u32 + 356, ctx.r10.u32);
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x83269670
	if (!ctx.cr6.eq) goto loc_83269670;
	// addi r3,r31,372
	ctx.r3.s64 = ctx.r31.s64 + 372;
	// bl 0x833e3108
	ctx.lr = 0x83269668;
	sub_833E3108(ctx, base);
	// stw r30,392(r31)
	PPC_STORE_U32(ctx.r31.u32 + 392, ctx.r30.u32);
	// b 0x832696a8
	goto loc_832696A8;
loc_83269670:
	// lwz r7,4(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r6,8(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r5,0(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// b 0x8326969c
	goto loc_8326969C;
loc_83269680:
	// lis r11,-31827
	ctx.r11.s64 = -2085814272;
	// stw r30,352(r31)
	PPC_STORE_U32(ctx.r31.u32 + 352, ctx.r30.u32);
	// stw r30,356(r31)
	PPC_STORE_U32(ctx.r31.u32 + 356, ctx.r30.u32);
	// addi r10,r11,9656
	ctx.r10.s64 = ctx.r11.s64 + 9656;
	// lwz r5,9656(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 9656);
	// lwz r6,8(r10)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// lwz r7,4(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
loc_8326969C:
	// addi r4,r31,372
	ctx.r4.s64 = ctx.r31.s64 + 372;
	// addi r3,r31,392
	ctx.r3.s64 = ctx.r31.s64 + 392;
	// bl 0x83269510
	ctx.lr = 0x832696A8;
	sub_83269510(ctx, base);
loc_832696A8:
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x83260420
	ctx.lr = 0x832696B4;
	sub_83260420(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r30,408(r31)
	PPC_STORE_U32(ctx.r31.u32 + 408, ctx.r30.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,404(r31)
	PPC_STORE_U32(ctx.r31.u32 + 404, ctx.r11.u32);
	// stw r30,412(r31)
	PPC_STORE_U32(ctx.r31.u32 + 412, ctx.r30.u32);
	// stw r30,416(r31)
	PPC_STORE_U32(ctx.r31.u32 + 416, ctx.r30.u32);
	// std r30,424(r31)
	PPC_STORE_U64(ctx.r31.u32 + 424, ctx.r30.u64);
	// lwz r11,104(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// stw r11,400(r31)
	PPC_STORE_U32(ctx.r31.u32 + 400, ctx.r11.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x833a01fc
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832696E0"))) PPC_WEAK_FUNC(sub_832696E0);
PPC_FUNC_IMPL(__imp__sub_832696E0) {
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
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8326974c
	if (ctx.cr6.eq) goto loc_8326974C;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmpwi cr6,r11,19
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 19, ctx.xer);
	// bne cr6,0x83269738
	if (!ctx.cr6.eq) goto loc_83269738;
	// lwz r3,4(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x83269738
	if (ctx.cr6.eq) goto loc_83269738;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x83265150
	ctx.lr = 0x8326971C;
	sub_83265150(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// bne cr6,0x83269738
	if (!ctx.cr6.eq) goto loc_83269738;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// bl 0x83266170
	ctx.lr = 0x83269730;
	sub_83266170(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
loc_83269738:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x83269750
	if (!ctx.cr6.eq) goto loc_83269750;
	// bl 0x83268c50
	ctx.lr = 0x8326974C;
	sub_83268C50(ctx, base);
loc_8326974C:
	// li r3,0
	ctx.r3.s64 = 0;
loc_83269750:
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

__attribute__((alias("__imp__sub_83269764"))) PPC_WEAK_FUNC(sub_83269764);
PPC_FUNC_IMPL(__imp__sub_83269764) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83269768"))) PPC_WEAK_FUNC(sub_83269768);
PPC_FUNC_IMPL(__imp__sub_83269768) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x833a01a0
	ctx.lr = 0x83269770;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r26,r3,348
	ctx.r26.s64 = ctx.r3.s64 + 348;
	// lwz r30,0(r3)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r28,0
	ctx.r28.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// mr r27,r28
	ctx.r27.u64 = ctx.r28.u64;
	// bl 0x833e2bf8
	ctx.lr = 0x83269794;
	sub_833E2BF8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x832697a4
	if (ctx.cr0.eq) goto loc_832697A4;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x83269d94
	goto loc_83269D94;
loc_832697A4:
	// cmplwi cr6,r30,18
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 18, ctx.xer);
	// bgt cr6,0x83269d48
	if (ctx.cr6.gt) goto loc_83269D48;
	// lis r12,-32219
	ctx.r12.s64 = -2111504384;
	// rlwinm r0,r30,1,0,30
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r12,r12,6008
	ctx.r12.s64 = ctx.r12.s64 + 6008;
	// lhzx r0,r12,r0
	ctx.r0.u64 = PPC_LOAD_U16(ctx.r12.u32 + ctx.r0.u32);
	// lis r12,-31961
	ctx.r12.s64 = -2094596096;
	// addi r12,r12,-26668
	ctx.r12.s64 = ctx.r12.s64 + -26668;
	// nop 
	// add r12,r12,r0
	ctx.r12.u64 = ctx.r12.u64 + ctx.r0.u64;
	// mtctr r12
	ctx.ctr.u64 = ctx.r12.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
	// std r28,336(r31)
	PPC_STORE_U64(ctx.r31.u32 + 336, ctx.r28.u64);
	// lis r11,-32219
	ctx.r11.s64 = -2111504384;
	// li r7,0
	ctx.r7.s64 = 0;
	// lwz r6,400(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 400);
	// addi r5,r11,6116
	ctx.r5.s64 = ctx.r11.s64 + 6116;
	// li r4,2048
	ctx.r4.s64 = 2048;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83268b68
	ctx.lr = 0x832697F4;
	sub_83268B68(ctx, base);
	// stw r3,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r3.u32);
	// lwz r11,400(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 400);
	// add r10,r11,r3
	ctx.r10.u64 = ctx.r11.u64 + ctx.r3.u64;
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// twllei r11,0
	// divwu r10,r10,r11
	ctx.r10.u32 = ctx.r10.u32 / ctx.r11.u32;
	// mullw. r30,r10,r11
	ctx.r30.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r11.s32);
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// stw r30,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r30.u32);
	// bne 0x8326982c
	if (!ctx.cr0.eq) goto loc_8326982C;
	// lis r11,-32219
	ctx.r11.s64 = -2111504384;
	// addi r4,r11,6912
	ctx.r4.s64 = ctx.r11.s64 + 6912;
loc_83269820:
	// li r3,0
	ctx.r3.s64 = 0;
loc_83269824:
	// bl 0x83257c00
	ctx.lr = 0x83269828;
	sub_83257C00(ctx, base);
	// b 0x83269d7c
	goto loc_83269D7C;
loc_8326982C:
	// lwz r11,320(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 320);
	// addi r29,r31,320
	ctx.r29.s64 = ctx.r31.s64 + 320;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x83269848
	if (!ctx.cr6.eq) goto loc_83269848;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// bl 0x832652a0
	ctx.lr = 0x83269848;
	sub_832652A0(ctx, base);
loc_83269848:
	// lwz r4,0(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// li r9,2048
	ctx.r9.s64 = 2048;
	// ld r10,328(r31)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r31.u32 + 328);
	// mr r8,r30
	ctx.r8.u64 = ctx.r30.u64;
	// ld r11,336(r31)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r31.u32 + 336);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// lwz r5,344(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 344);
	// li r7,2048
	ctx.r7.s64 = 2048;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// add r6,r10,r11
	ctx.r6.u64 = ctx.r10.u64 + ctx.r11.u64;
	// bne cr6,0x83269880
	if (!ctx.cr6.eq) goto loc_83269880;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x83265f90
	ctx.lr = 0x8326987C;
	sub_83265F90(ctx, base);
	// b 0x83269884
	goto loc_83269884;
loc_83269880:
	// bl 0x83266050
	ctx.lr = 0x83269884;
	sub_83266050(ctx, base);
loc_83269884:
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// beq cr6,0x83269d7c
	if (ctx.cr6.eq) goto loc_83269D7C;
	// li r30,4
	ctx.r30.s64 = 4;
	// b 0x83269d5c
	goto loc_83269D5C;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x83269d5c
	if (ctx.cr6.eq) goto loc_83269D5C;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x83265150
	ctx.lr = 0x832698A8;
	sub_83265150(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// bne cr6,0x83269d5c
	if (!ctx.cr6.eq) goto loc_83269D5C;
	// addi r29,r31,40
	ctx.r29.s64 = ctx.r31.s64 + 40;
	// lwz r5,12(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// addi r6,r31,360
	ctx.r6.s64 = ctx.r31.s64 + 360;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r3,r31,32
	ctx.r3.s64 = ctx.r31.s64 + 32;
	// bl 0x8326bdc8
	ctx.lr = 0x832698CC;
	sub_8326BDC8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x83269924
	if (ctx.cr0.eq) goto loc_83269924;
	// cmpwi cr6,r3,2
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 2, ctx.xer);
	// bne cr6,0x832698e8
	if (!ctx.cr6.eq) goto loc_832698E8;
	// lis r11,-32219
	ctx.r11.s64 = -2111504384;
	// addi r4,r11,6824
	ctx.r4.s64 = ctx.r11.s64 + 6824;
	// b 0x83269820
	goto loc_83269820;
loc_832698E8:
	// cmpwi cr6,r3,3
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 3, ctx.xer);
	// bne cr6,0x83269918
	if (!ctx.cr6.eq) goto loc_83269918;
	// lwz r11,392(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 392);
	// li r3,0
	ctx.r3.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8326990c
	if (ctx.cr6.eq) goto loc_8326990C;
	// lis r11,-32219
	ctx.r11.s64 = -2111504384;
	// addi r4,r11,6720
	ctx.r4.s64 = ctx.r11.s64 + 6720;
	// b 0x83269824
	goto loc_83269824;
loc_8326990C:
	// lis r11,-32219
	ctx.r11.s64 = -2111504384;
	// addi r4,r11,6576
	ctx.r4.s64 = ctx.r11.s64 + 6576;
	// b 0x83269824
	goto loc_83269824;
loc_83269918:
	// lis r11,-32219
	ctx.r11.s64 = -2111504384;
	// addi r4,r11,6488
	ctx.r4.s64 = ctx.r11.s64 + 6488;
	// b 0x83269820
	goto loc_83269820;
loc_83269924:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,8(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// bl 0x83268bd0
	ctx.lr = 0x83269930;
	sub_83268BD0(ctx, base);
	// stw r28,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r28.u32);
	// stw r28,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r28.u32);
	// lwz r11,396(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 396);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x8326994c
	if (!ctx.cr6.eq) goto loc_8326994C;
loc_83269944:
	// li r30,18
	ctx.r30.s64 = 18;
	// b 0x83269d5c
	goto loc_83269D5C;
loc_8326994C:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8326b6c0
	ctx.lr = 0x83269954;
	sub_8326B6C0(ctx, base);
	// cmpldi cr6,r3,0
	ctx.cr6.compare<uint64_t>(ctx.r3.u64, 0, ctx.xer);
	// beq cr6,0x83269964
	if (ctx.cr6.eq) goto loc_83269964;
	// li r30,5
	ctx.r30.s64 = 5;
	// b 0x83269978
	goto loc_83269978;
loc_83269964:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8326b6f8
	ctx.lr = 0x8326996C;
	sub_8326B6F8(ctx, base);
	// cmpldi cr6,r3,0
	ctx.cr6.compare<uint64_t>(ctx.r3.u64, 0, ctx.xer);
	// beq cr6,0x83269978
	if (ctx.cr6.eq) goto loc_83269978;
	// li r30,9
	ctx.r30.s64 = 9;
loc_83269978:
	// li r27,1
	ctx.r27.s64 = 1;
	// b 0x83269d54
	goto loc_83269D54;
	// addi r30,r31,40
	ctx.r30.s64 = ctx.r31.s64 + 40;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8323db48
	ctx.lr = 0x8326998C;
	sub_8323DB48(ctx, base);
	// std r3,336(r31)
	PPC_STORE_U64(ctx.r31.u32 + 336, ctx.r3.u64);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8326b6c0
	ctx.lr = 0x83269998;
	sub_8326B6C0(ctx, base);
	// rotlwi r30,r3,0
	ctx.r30.u64 = __builtin_rotateleft32(ctx.r3.u32, 0);
	// clrlwi. r11,r30,27
	ctx.r11.u64 = ctx.r30.u32 & 0x1F;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x832699ac
	if (ctx.cr0.eq) goto loc_832699AC;
	// rlwinm r11,r30,0,0,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 0) & 0xFFFFFFE0;
	// addi r30,r11,32
	ctx.r30.s64 = ctx.r11.s64 + 32;
loc_832699AC:
	// lis r11,-32219
	ctx.r11.s64 = -2111504384;
	// lwz r6,400(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 400);
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r5,r11,6116
	ctx.r5.s64 = ctx.r11.s64 + 6116;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83268b68
	ctx.lr = 0x832699C8;
	sub_83268B68(ctx, base);
	// stw r3,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r3.u32);
	// lwz r11,400(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 400);
	// add r10,r11,r3
	ctx.r10.u64 = ctx.r11.u64 + ctx.r3.u64;
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// twllei r11,0
	// divwu r10,r10,r11
	ctx.r10.u32 = ctx.r10.u32 / ctx.r11.u32;
	// mullw. r29,r10,r11
	ctx.r29.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r11.s32);
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// stw r29,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r29.u32);
	// bne 0x832699f8
	if (!ctx.cr0.eq) goto loc_832699F8;
loc_832699EC:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83269030
	ctx.lr = 0x832699F4;
	sub_83269030(ctx, base);
	// b 0x83269d7c
	goto loc_83269D7C;
loc_832699F8:
	// lwz r11,320(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 320);
	// addi r28,r31,320
	ctx.r28.s64 = ctx.r31.s64 + 320;
	// extsw r30,r30
	ctx.r30.s64 = ctx.r30.s32;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x83269a18
	if (!ctx.cr6.eq) goto loc_83269A18;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// bl 0x832652a0
	ctx.lr = 0x83269A18;
	sub_832652A0(ctx, base);
loc_83269A18:
	// lwz r4,0(r28)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// mr r9,r30
	ctx.r9.u64 = ctx.r30.u64;
	// ld r10,328(r31)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r31.u32 + 328);
	// mr r8,r29
	ctx.r8.u64 = ctx.r29.u64;
	// ld r11,336(r31)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r31.u32 + 336);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// lwz r5,344(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 344);
	// mr r7,r30
	ctx.r7.u64 = ctx.r30.u64;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// add r6,r10,r11
	ctx.r6.u64 = ctx.r10.u64 + ctx.r11.u64;
	// bne cr6,0x83269a50
	if (!ctx.cr6.eq) goto loc_83269A50;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x83265f90
	ctx.lr = 0x83269A4C;
	sub_83265F90(ctx, base);
	// b 0x83269a54
	goto loc_83269A54;
loc_83269A50:
	// bl 0x83266050
	ctx.lr = 0x83269A54;
	sub_83266050(ctx, base);
loc_83269A54:
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// beq cr6,0x83269d7c
	if (ctx.cr6.eq) goto loc_83269D7C;
	// li r30,6
	ctx.r30.s64 = 6;
	// b 0x83269d5c
	goto loc_83269D5C;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x83269d5c
	if (ctx.cr6.eq) goto loc_83269D5C;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x83265150
	ctx.lr = 0x83269A78;
	sub_83265150(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// bne cr6,0x83269d5c
	if (!ctx.cr6.eq) goto loc_83269D5C;
	// addi r30,r31,40
	ctx.r30.s64 = ctx.r31.s64 + 40;
	// lwz r5,12(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// addi r6,r31,360
	ctx.r6.s64 = ctx.r31.s64 + 360;
	// addi r4,r31,184
	ctx.r4.s64 = ctx.r31.s64 + 184;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8326bd80
	ctx.lr = 0x83269A9C;
	sub_8326BD80(ctx, base);
	// cmpwi cr6,r3,1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 1, ctx.xer);
	// beq cr6,0x83269abc
	if (ctx.cr6.eq) goto loc_83269ABC;
	// lwz r11,112(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 112);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x832699ec
	if (ctx.cr6.eq) goto loc_832699EC;
	// lis r11,-32219
	ctx.r11.s64 = -2111504384;
	// addi r4,r11,6440
	ctx.r4.s64 = ctx.r11.s64 + 6440;
	// b 0x83269820
	goto loc_83269820;
loc_83269ABC:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8326b6f8
	ctx.lr = 0x83269AC4;
	sub_8326B6F8(ctx, base);
	// cmpldi cr6,r3,0
	ctx.cr6.compare<uint64_t>(ctx.r3.u64, 0, ctx.xer);
	// beq cr6,0x83269ad8
	if (ctx.cr6.eq) goto loc_83269AD8;
	// li r30,9
	ctx.r30.s64 = 9;
loc_83269AD0:
	// li r27,1
	ctx.r27.s64 = 1;
	// b 0x83269d5c
	goto loc_83269D5C;
loc_83269AD8:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8326d910
	ctx.lr = 0x83269AE0;
	sub_8326D910(ctx, base);
	// cmpldi cr6,r3,0
	ctx.cr6.compare<uint64_t>(ctx.r3.u64, 0, ctx.xer);
	// beq cr6,0x83269944
	if (ctx.cr6.eq) goto loc_83269944;
	// li r30,7
	ctx.r30.s64 = 7;
	// b 0x83269ad0
	goto loc_83269AD0;
	// addi r30,r31,40
	ctx.r30.s64 = ctx.r31.s64 + 40;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8326b6f0
	ctx.lr = 0x83269AFC;
	sub_8326B6F0(ctx, base);
	// std r3,336(r31)
	PPC_STORE_U64(ctx.r31.u32 + 336, ctx.r3.u64);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8326b6f8
	ctx.lr = 0x83269B08;
	sub_8326B6F8(ctx, base);
	// rotlwi r30,r3,0
	ctx.r30.u64 = __builtin_rotateleft32(ctx.r3.u32, 0);
	// clrlwi. r11,r30,27
	ctx.r11.u64 = ctx.r30.u32 & 0x1F;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x83269b1c
	if (ctx.cr0.eq) goto loc_83269B1C;
	// rlwinm r11,r30,0,0,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 0) & 0xFFFFFFE0;
	// addi r30,r11,32
	ctx.r30.s64 = ctx.r11.s64 + 32;
loc_83269B1C:
	// lis r11,-32219
	ctx.r11.s64 = -2111504384;
	// lwz r6,400(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 400);
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r5,r11,6116
	ctx.r5.s64 = ctx.r11.s64 + 6116;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83268b68
	ctx.lr = 0x83269B38;
	sub_83268B68(ctx, base);
	// stw r3,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r3.u32);
	// lwz r11,400(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 400);
	// add r10,r11,r3
	ctx.r10.u64 = ctx.r11.u64 + ctx.r3.u64;
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// twllei r11,0
	// divwu r10,r10,r11
	ctx.r10.u32 = ctx.r10.u32 / ctx.r11.u32;
	// mullw. r29,r10,r11
	ctx.r29.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r11.s32);
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// stw r29,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r29.u32);
	// beq 0x832699ec
	if (ctx.cr0.eq) goto loc_832699EC;
	// lwz r11,320(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 320);
	// addi r28,r31,320
	ctx.r28.s64 = ctx.r31.s64 + 320;
	// extsw r30,r30
	ctx.r30.s64 = ctx.r30.s32;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x83269b7c
	if (!ctx.cr6.eq) goto loc_83269B7C;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// bl 0x832652a0
	ctx.lr = 0x83269B7C;
	sub_832652A0(ctx, base);
loc_83269B7C:
	// lwz r4,0(r28)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// mr r9,r30
	ctx.r9.u64 = ctx.r30.u64;
	// ld r10,328(r31)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r31.u32 + 328);
	// mr r8,r29
	ctx.r8.u64 = ctx.r29.u64;
	// ld r11,336(r31)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r31.u32 + 336);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// lwz r5,344(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 344);
	// mr r7,r30
	ctx.r7.u64 = ctx.r30.u64;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// add r6,r10,r11
	ctx.r6.u64 = ctx.r10.u64 + ctx.r11.u64;
	// bne cr6,0x83269bb4
	if (!ctx.cr6.eq) goto loc_83269BB4;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x83265f90
	ctx.lr = 0x83269BB0;
	sub_83265F90(ctx, base);
	// b 0x83269bb8
	goto loc_83269BB8;
loc_83269BB4:
	// bl 0x83266050
	ctx.lr = 0x83269BB8;
	sub_83266050(ctx, base);
loc_83269BB8:
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// beq cr6,0x83269d7c
	if (ctx.cr6.eq) goto loc_83269D7C;
	// li r30,10
	ctx.r30.s64 = 10;
	// b 0x83269d5c
	goto loc_83269D5C;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x83269d5c
	if (ctx.cr6.eq) goto loc_83269D5C;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x83265150
	ctx.lr = 0x83269BDC;
	sub_83265150(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// bne cr6,0x83269d5c
	if (!ctx.cr6.eq) goto loc_83269D5C;
	// addi r30,r31,40
	ctx.r30.s64 = ctx.r31.s64 + 40;
	// lwz r5,28(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// addi r6,r31,360
	ctx.r6.s64 = ctx.r31.s64 + 360;
	// addi r4,r31,268
	ctx.r4.s64 = ctx.r31.s64 + 268;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8326bd98
	ctx.lr = 0x83269C00;
	sub_8326BD98(ctx, base);
	// cmpwi cr6,r3,1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 1, ctx.xer);
	// bne cr6,0x832699ec
	if (!ctx.cr6.eq) goto loc_832699EC;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8326d910
	ctx.lr = 0x83269C10;
	sub_8326D910(ctx, base);
	// cmpldi cr6,r3,0
	ctx.cr6.compare<uint64_t>(ctx.r3.u64, 0, ctx.xer);
	// beq cr6,0x83269944
	if (ctx.cr6.eq) goto loc_83269944;
	// addi r30,r31,40
	ctx.r30.s64 = ctx.r31.s64 + 40;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8326b700
	ctx.lr = 0x83269C24;
	sub_8326B700(ctx, base);
	// std r3,336(r31)
	PPC_STORE_U64(ctx.r31.u32 + 336, ctx.r3.u64);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8326d910
	ctx.lr = 0x83269C30;
	sub_8326D910(ctx, base);
	// rotlwi r30,r3,0
	ctx.r30.u64 = __builtin_rotateleft32(ctx.r3.u32, 0);
	// clrlwi. r11,r30,27
	ctx.r11.u64 = ctx.r30.u32 & 0x1F;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x83269c44
	if (ctx.cr0.eq) goto loc_83269C44;
	// rlwinm r11,r30,0,0,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 0) & 0xFFFFFFE0;
	// addi r30,r11,32
	ctx.r30.s64 = ctx.r11.s64 + 32;
loc_83269C44:
	// lis r11,-32219
	ctx.r11.s64 = -2111504384;
	// lwz r6,400(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 400);
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r5,r11,6116
	ctx.r5.s64 = ctx.r11.s64 + 6116;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83268b68
	ctx.lr = 0x83269C60;
	sub_83268B68(ctx, base);
	// stw r3,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r3.u32);
	// lwz r11,400(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 400);
	// add r10,r11,r3
	ctx.r10.u64 = ctx.r11.u64 + ctx.r3.u64;
	// twllei r11,0
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// divwu r10,r10,r11
	ctx.r10.u32 = ctx.r10.u32 / ctx.r11.u32;
	// mullw. r29,r10,r11
	ctx.r29.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r11.s32);
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// stw r29,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r29.u32);
	// beq 0x832699ec
	if (ctx.cr0.eq) goto loc_832699EC;
	// lwz r11,320(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 320);
	// addi r28,r31,320
	ctx.r28.s64 = ctx.r31.s64 + 320;
	// extsw r30,r30
	ctx.r30.s64 = ctx.r30.s32;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x83269ca4
	if (!ctx.cr6.eq) goto loc_83269CA4;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// bl 0x832652a0
	ctx.lr = 0x83269CA4;
	sub_832652A0(ctx, base);
loc_83269CA4:
	// lwz r4,0(r28)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// mr r9,r30
	ctx.r9.u64 = ctx.r30.u64;
	// ld r11,328(r31)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r31.u32 + 328);
	// mr r8,r29
	ctx.r8.u64 = ctx.r29.u64;
	// ld r10,336(r31)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r31.u32 + 336);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// lwz r5,344(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 344);
	// mr r7,r30
	ctx.r7.u64 = ctx.r30.u64;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// add r6,r11,r10
	ctx.r6.u64 = ctx.r11.u64 + ctx.r10.u64;
	// bne cr6,0x83269cdc
	if (!ctx.cr6.eq) goto loc_83269CDC;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x83265f90
	ctx.lr = 0x83269CD8;
	sub_83265F90(ctx, base);
	// b 0x83269ce0
	goto loc_83269CE0;
loc_83269CDC:
	// bl 0x83266050
	ctx.lr = 0x83269CE0;
	sub_83266050(ctx, base);
loc_83269CE0:
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// beq cr6,0x83269d7c
	if (ctx.cr6.eq) goto loc_83269D7C;
	// li r30,8
	ctx.r30.s64 = 8;
	// b 0x83269d5c
	goto loc_83269D5C;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x83269d5c
	if (ctx.cr6.eq) goto loc_83269D5C;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x83265150
	ctx.lr = 0x83269D04;
	sub_83265150(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// bne cr6,0x83269d5c
	if (!ctx.cr6.eq) goto loc_83269D5C;
	// addi r7,r31,184
	ctx.r7.s64 = ctx.r31.s64 + 184;
	// lwz r5,20(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// addi r6,r31,360
	ctx.r6.s64 = ctx.r31.s64 + 360;
	// addi r4,r31,196
	ctx.r4.s64 = ctx.r31.s64 + 196;
	// addi r3,r31,40
	ctx.r3.s64 = ctx.r31.s64 + 40;
	// bl 0x8326bdb0
	ctx.lr = 0x83269D28;
	sub_8326BDB0(ctx, base);
	// cmpwi cr6,r3,1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 1, ctx.xer);
	// beq cr6,0x83269944
	if (ctx.cr6.eq) goto loc_83269944;
	// lwz r11,120(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 120);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x832699ec
	if (ctx.cr6.eq) goto loc_832699EC;
	// lis r11,-32219
	ctx.r11.s64 = -2111504384;
	// addi r4,r11,6396
	ctx.r4.s64 = ctx.r11.s64 + 6396;
	// b 0x83269820
	goto loc_83269820;
loc_83269D48:
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83268a90
	ctx.lr = 0x83269D54;
	sub_83268A90(ctx, base);
loc_83269D54:
	// cmpwi cr6,r30,-1
	ctx.cr6.compare<int32_t>(ctx.r30.s32, -1, ctx.xer);
	// beq cr6,0x83269d80
	if (ctx.cr6.eq) goto loc_83269D80;
loc_83269D5C:
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x83269d7c
	if (ctx.cr6.eq) goto loc_83269D7C;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x83265150
	ctx.lr = 0x83269D70;
	sub_83265150(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bne cr6,0x83269d80
	if (!ctx.cr6.eq) goto loc_83269D80;
loc_83269D7C:
	// li r30,-1
	ctx.r30.s64 = -1;
loc_83269D80:
	// stw r30,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r30.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x833e2bf8
	ctx.lr = 0x83269D90;
	sub_833E2BF8(ctx, base);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
loc_83269D94:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x833a01f0
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83269D9C"))) PPC_WEAK_FUNC(sub_83269D9C);
PPC_FUNC_IMPL(__imp__sub_83269D9C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83269DA0"))) PPC_WEAK_FUNC(sub_83269DA0);
PPC_FUNC_IMPL(__imp__sub_83269DA0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x833a01a4
	ctx.lr = 0x83269DA8;
	__savegprlr_27(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r30,r3,40
	ctx.r30.s64 = ctx.r3.s64 + 40;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// mr r27,r5
	ctx.r27.u64 = ctx.r5.u64;
	// mr r29,r6
	ctx.r29.u64 = ctx.r6.u64;
	// bl 0x8326b710
	ctx.lr = 0x83269DC8;
	sub_8326B710(ctx, base);
	// cmpwi cr6,r3,1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 1, ctx.xer);
	// bne cr6,0x83269e6c
	if (!ctx.cr6.eq) goto loc_83269E6C;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmpwi cr6,r11,18
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 18, ctx.xer);
	// bne cr6,0x83269e6c
	if (!ctx.cr6.eq) goto loc_83269E6C;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8326b6c0
	ctx.lr = 0x83269DE4;
	sub_8326B6C0(ctx, base);
	// cmpldi cr6,r3,0
	ctx.cr6.compare<uint64_t>(ctx.r3.u64, 0, ctx.xer);
	// beq cr6,0x83269e6c
	if (ctx.cr6.eq) goto loc_83269E6C;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmpwi cr6,r11,18
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 18, ctx.xer);
	// bne cr6,0x83269e6c
	if (!ctx.cr6.eq) goto loc_83269E6C;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8326b6f8
	ctx.lr = 0x83269E00;
	sub_8326B6F8(ctx, base);
	// cmpldi cr6,r3,0
	ctx.cr6.compare<uint64_t>(ctx.r3.u64, 0, ctx.xer);
	// beq cr6,0x83269e6c
	if (ctx.cr6.eq) goto loc_83269E6C;
	// addi r6,r31,184
	ctx.r6.s64 = ctx.r31.s64 + 184;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r31,268
	ctx.r3.s64 = ctx.r31.s64 + 268;
	// bl 0x8326abf8
	ctx.lr = 0x83269E1C;
	sub_8326ABF8(ctx, base);
	// cmpwi cr6,r3,1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 1, ctx.xer);
	// bne cr6,0x83269e6c
	if (!ctx.cr6.eq) goto loc_83269E6C;
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// beq cr6,0x83269e3c
	if (ctx.cr6.eq) goto loc_83269E3C;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83269298
	ctx.lr = 0x83269E3C;
	sub_83269298(ctx, base);
loc_83269E3C:
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x83269e64
	if (ctx.cr6.eq) goto loc_83269E64;
	// lwz r11,92(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// lwz r9,88(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// ld r10,96(r1)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r1.u32 + 96);
	// stw r11,4(r29)
	PPC_STORE_U32(ctx.r29.u32 + 4, ctx.r11.u32);
	// stw r9,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r9.u32);
	// ld r11,328(r31)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r31.u32 + 328);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// std r11,8(r29)
	PPC_STORE_U64(ctx.r29.u32 + 8, ctx.r11.u64);
loc_83269E64:
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x83269e70
	goto loc_83269E70;
loc_83269E6C:
	// li r3,0
	ctx.r3.s64 = 0;
loc_83269E70:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x833a01f4
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83269E78"))) PPC_WEAK_FUNC(sub_83269E78);
PPC_FUNC_IMPL(__imp__sub_83269E78) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x833a01a8
	ctx.lr = 0x83269E80;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// li r30,0
	ctx.r30.s64 = 0;
	// cmpwi cr6,r11,18
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 18, ctx.xer);
	// beq cr6,0x83269ea8
	if (ctx.cr6.eq) goto loc_83269EA8;
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// bne cr6,0x83269eb4
	if (!ctx.cr6.eq) goto loc_83269EB4;
loc_83269EA8:
	// stw r30,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r30.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83268c50
	ctx.lr = 0x83269EB4;
	sub_83268C50(ctx, base);
loc_83269EB4:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x83269ed8
	if (ctx.cr6.eq) goto loc_83269ED8;
	// lis r11,-32219
	ctx.r11.s64 = -2111504384;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r4,r11,7048
	ctx.r4.s64 = ctx.r11.s64 + 7048;
	// bl 0x83257c00
	ctx.lr = 0x83269ED0;
	sub_83257C00(ctx, base);
loc_83269ED0:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x83269fa0
	goto loc_83269FA0;
loc_83269ED8:
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83268a90
	ctx.lr = 0x83269EE4;
	sub_83268A90(ctx, base);
	// std r30,336(r31)
	PPC_STORE_U64(ctx.r31.u32 + 336, ctx.r30.u64);
	// stw r30,348(r31)
	PPC_STORE_U32(ctx.r31.u32 + 348, ctx.r30.u32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x83261a58
	ctx.lr = 0x83269EF4;
	sub_83261A58(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x83269f20
	if (ctx.cr0.eq) goto loc_83269F20;
	// ld r11,8(r29)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r29.u32 + 8);
	// li r10,1
	ctx.r10.s64 = 1;
	// std r11,328(r31)
	PPC_STORE_U64(ctx.r31.u32 + 328, ctx.r11.u64);
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// stw r11,320(r31)
	PPC_STORE_U32(ctx.r31.u32 + 320, ctx.r11.u32);
	// lwz r11,24(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 24);
	// stw r11,344(r31)
	PPC_STORE_U32(ctx.r31.u32 + 344, ctx.r11.u32);
	// stw r10,316(r31)
	PPC_STORE_U32(ctx.r31.u32 + 316, ctx.r10.u32);
	// b 0x83269f30
	goto loc_83269F30;
loc_83269F20:
	// stw r28,344(r31)
	PPC_STORE_U32(ctx.r31.u32 + 344, ctx.r28.u32);
	// std r30,328(r31)
	PPC_STORE_U64(ctx.r31.u32 + 328, ctx.r30.u64);
	// stw r30,320(r31)
	PPC_STORE_U32(ctx.r31.u32 + 320, ctx.r30.u32);
	// stw r30,316(r31)
	PPC_STORE_U32(ctx.r31.u32 + 316, ctx.r30.u32);
loc_83269F30:
	// addi r3,r31,32
	ctx.r3.s64 = ctx.r31.s64 + 32;
	// bl 0x8326b718
	ctx.lr = 0x83269F38;
	sub_8326B718(ctx, base);
	// addi r3,r31,40
	ctx.r3.s64 = ctx.r31.s64 + 40;
	// bl 0x8326b690
	ctx.lr = 0x83269F40;
	sub_8326B690(ctx, base);
	// addi r3,r31,184
	ctx.r3.s64 = ctx.r31.s64 + 184;
	// bl 0x828a4c98
	ctx.lr = 0x83269F48;
	sub_828A4C98(ctx, base);
	// addi r3,r31,196
	ctx.r3.s64 = ctx.r31.s64 + 196;
	// bl 0x8326acc0
	ctx.lr = 0x83269F50;
	sub_8326ACC0(ctx, base);
	// addi r3,r31,304
	ctx.r3.s64 = ctx.r31.s64 + 304;
	// bl 0x8326ace8
	ctx.lr = 0x83269F58;
	sub_8326ACE8(ctx, base);
	// addi r3,r31,268
	ctx.r3.s64 = ctx.r31.s64 + 268;
	// bl 0x8326a7b0
	ctx.lr = 0x83269F60;
	sub_8326A7B0(ctx, base);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// addi r30,r31,4
	ctx.r30.s64 = ctx.r31.s64 + 4;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x83269ed0
	if (!ctx.cr6.eq) goto loc_83269ED0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x832663b0
	ctx.lr = 0x83269F78;
	sub_832663B0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x83269ed0
	if (!ctx.cr0.eq) goto loc_83269ED0;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// bl 0x83265258
	ctx.lr = 0x83269F8C;
	sub_83265258(ctx, base);
	// li r11,3
	ctx.r11.s64 = 3;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// bl 0x83269768
	ctx.lr = 0x83269F9C;
	sub_83269768(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
loc_83269FA0:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x833a01f8
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83269FA8"))) PPC_WEAK_FUNC(sub_83269FA8);
PPC_FUNC_IMPL(__imp__sub_83269FA8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x833a01a4
	ctx.lr = 0x83269FB0;
	__savegprlr_27(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r28,r3,40
	ctx.r28.s64 = ctx.r3.s64 + 40;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// mr r27,r6
	ctx.r27.u64 = ctx.r6.u64;
	// bl 0x8326b710
	ctx.lr = 0x83269FD0;
	sub_8326B710(ctx, base);
	// cmpwi cr6,r3,1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 1, ctx.xer);
	// bne cr6,0x83269ffc
	if (!ctx.cr6.eq) goto loc_83269FFC;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x83269da0
	ctx.lr = 0x83269FEC;
	sub_83269DA0(ctx, base);
	// cmpwi cr6,r3,1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 1, ctx.xer);
	// bne cr6,0x8326a098
	if (!ctx.cr6.eq) goto loc_8326A098;
loc_83269FF4:
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x8326a0cc
	goto loc_8326A0CC;
loc_83269FFC:
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// cmpwi cr6,r11,18
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 18, ctx.xer);
	// bne cr6,0x8326a098
	if (!ctx.cr6.eq) goto loc_8326A098;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x8326b6f8
	ctx.lr = 0x8326A010;
	sub_8326B6F8(ctx, base);
	// cmpldi cr6,r3,0
	ctx.cr6.compare<uint64_t>(ctx.r3.u64, 0, ctx.xer);
	// beq cr6,0x8326a098
	if (ctx.cr6.eq) goto loc_8326A098;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r29,268
	ctx.r3.s64 = ctx.r29.s64 + 268;
	// bl 0x8326b9a8
	ctx.lr = 0x8326A028;
	sub_8326B9A8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x8326a098
	if (ctx.cr0.eq) goto loc_8326A098;
	// ld r10,96(r1)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r1.u32 + 96);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// lwz r9,88(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// lwz r8,84(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// beq cr6,0x8326a058
	if (ctx.cr6.eq) goto loc_8326A058;
	// stw r9,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r9.u32);
	// stw r8,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r8.u32);
	// ld r11,328(r29)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r29.u32 + 328);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// std r11,8(r30)
	PPC_STORE_U64(ctx.r30.u32 + 8, ctx.r11.u64);
loc_8326A058:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x83269ff4
	if (ctx.cr6.eq) goto loc_83269FF4;
	// li r11,0
	ctx.r11.s64 = 0;
	// lwz r7,104(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// clrlwi r6,r27,16
	ctx.r6.u64 = ctx.r27.u32 & 0xFFFF;
	// stw r9,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r9.u32);
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// stw r11,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r11.u32);
	// stw r8,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r8.u32);
	// stw r6,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r6.u32);
	// ld r11,328(r29)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r29.u32 + 328);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// std r11,16(r31)
	PPC_STORE_U64(ctx.r31.u32 + 16, ctx.r11.u64);
	// stw r7,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r7.u32);
	// b 0x83269ff4
	goto loc_83269FF4;
loc_8326A098:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x8326a0b0
	if (ctx.cr6.eq) goto loc_8326A0B0;
	// li r5,16
	ctx.r5.s64 = 16;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x833a2b30
	ctx.lr = 0x8326A0B0;
	sub_833A2B30(ctx, base);
loc_8326A0B0:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x8326a0c8
	if (ctx.cr6.eq) goto loc_8326A0C8;
	// li r5,40
	ctx.r5.s64 = 40;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x833a2b30
	ctx.lr = 0x8326A0C8;
	sub_833A2B30(ctx, base);
loc_8326A0C8:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8326A0CC:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x833a01f4
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8326A0D4"))) PPC_WEAK_FUNC(sub_8326A0D4);
PPC_FUNC_IMPL(__imp__sub_8326A0D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8326A0D8"))) PPC_WEAK_FUNC(sub_8326A0D8);
PPC_FUNC_IMPL(__imp__sub_8326A0D8) {
	PPC_FUNC_PROLOGUE();
	// mr r6,r5
	ctx.r6.u64 = ctx.r5.u64;
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// b 0x83269fa8
	sub_83269FA8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8326A0E8"))) PPC_WEAK_FUNC(sub_8326A0E8);
PPC_FUNC_IMPL(__imp__sub_8326A0E8) {
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
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x83259340
	ctx.lr = 0x8326A10C;
	sub_83259340(ctx, base);
	// mr. r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// bge 0x8326a11c
	if (!ctx.cr0.lt) goto loc_8326A11C;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x8326a128
	goto loc_8326A128;
loc_8326A11C:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83259648
	ctx.lr = 0x8326A128;
	sub_83259648(ctx, base);
loc_8326A128:
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

__attribute__((alias("__imp__sub_8326A140"))) PPC_WEAK_FUNC(sub_8326A140);
PPC_FUNC_IMPL(__imp__sub_8326A140) {
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
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x83259340
	ctx.lr = 0x8326A164;
	sub_83259340(ctx, base);
	// mr. r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// bge 0x8326a174
	if (!ctx.cr0.lt) goto loc_8326A174;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x8326a180
	goto loc_8326A180;
loc_8326A174:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83259558
	ctx.lr = 0x8326A180;
	sub_83259558(ctx, base);
loc_8326A180:
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

__attribute__((alias("__imp__sub_8326A198"))) PPC_WEAK_FUNC(sub_8326A198);
PPC_FUNC_IMPL(__imp__sub_8326A198) {
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
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x83259340
	ctx.lr = 0x8326A1BC;
	sub_83259340(ctx, base);
	// mr. r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// bge 0x8326a1cc
	if (!ctx.cr0.lt) goto loc_8326A1CC;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x8326a1d8
	goto loc_8326A1D8;
loc_8326A1CC:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83259480
	ctx.lr = 0x8326A1D8;
	sub_83259480(ctx, base);
loc_8326A1D8:
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

__attribute__((alias("__imp__sub_8326A1F0"))) PPC_WEAK_FUNC(sub_8326A1F0);
PPC_FUNC_IMPL(__imp__sub_8326A1F0) {
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
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x83259340
	ctx.lr = 0x8326A214;
	sub_83259340(ctx, base);
	// mr. r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// bge 0x8326a224
	if (!ctx.cr0.lt) goto loc_8326A224;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x8326a230
	goto loc_8326A230;
loc_8326A224:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83259790
	ctx.lr = 0x8326A230;
	sub_83259790(ctx, base);
loc_8326A230:
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

__attribute__((alias("__imp__sub_8326A248"))) PPC_WEAK_FUNC(sub_8326A248);
PPC_FUNC_IMPL(__imp__sub_8326A248) {
	PPC_FUNC_PROLOGUE();
	// extsb r11,r3
	ctx.r11.s64 = ctx.r3.s8;
	// extsb r10,r4
	ctx.r10.s64 = ctx.r4.s8;
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// bne cr6,0x8326a260
	if (!ctx.cr6.eq) goto loc_8326A260;
loc_8326A258:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_8326A260:
	// cmpwi cr6,r11,97
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 97, ctx.xer);
	// blt cr6,0x8326a27c
	if (ctx.cr6.lt) goto loc_8326A27C;
	// cmpwi cr6,r11,122
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 122, ctx.xer);
	// bgt cr6,0x8326a27c
	if (ctx.cr6.gt) goto loc_8326A27C;
	// addi r11,r11,-32
	ctx.r11.s64 = ctx.r11.s64 + -32;
	// extsb r3,r11
	ctx.r3.s64 = ctx.r11.s8;
	// b 0x8326a288
	goto loc_8326A288;
loc_8326A27C:
	// cmpwi cr6,r11,92
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 92, ctx.xer);
	// bne cr6,0x8326a288
	if (!ctx.cr6.eq) goto loc_8326A288;
	// li r3,47
	ctx.r3.s64 = 47;
loc_8326A288:
	// cmpwi cr6,r10,97
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 97, ctx.xer);
	// blt cr6,0x8326a2a4
	if (ctx.cr6.lt) goto loc_8326A2A4;
	// cmpwi cr6,r10,122
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 122, ctx.xer);
	// bgt cr6,0x8326a2a4
	if (ctx.cr6.gt) goto loc_8326A2A4;
	// addi r11,r10,-32
	ctx.r11.s64 = ctx.r10.s64 + -32;
	// extsb r4,r11
	ctx.r4.s64 = ctx.r11.s8;
	// b 0x8326a2b0
	goto loc_8326A2B0;
loc_8326A2A4:
	// cmpwi cr6,r10,92
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 92, ctx.xer);
	// bne cr6,0x8326a2b0
	if (!ctx.cr6.eq) goto loc_8326A2B0;
	// li r4,47
	ctx.r4.s64 = 47;
loc_8326A2B0:
	// extsb r11,r3
	ctx.r11.s64 = ctx.r3.s8;
	// extsb r10,r4
	ctx.r10.s64 = ctx.r4.s8;
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// beq cr6,0x8326a258
	if (ctx.cr6.eq) goto loc_8326A258;
	// li r3,1
	ctx.r3.s64 = 1;
	// bgtlr cr6
	if (ctx.cr6.gt) return;
	// li r3,-1
	ctx.r3.s64 = -1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8326A2D0"))) PPC_WEAK_FUNC(sub_8326A2D0);
PPC_FUNC_IMPL(__imp__sub_8326A2D0) {
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
	// li r4,47
	ctx.r4.s64 = 47;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lbz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r3.u32 + 0);
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// bl 0x8326a248
	ctx.lr = 0x8326A300;
	sub_8326A248(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x8326a30c
	if (!ctx.cr0.eq) goto loc_8326A30C;
	// li r9,1
	ctx.r9.s64 = 1;
loc_8326A30C:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x8326a37c
	if (ctx.cr6.eq) goto loc_8326A37C;
	// lbz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 0);
	// extsb. r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8326a37c
	if (ctx.cr0.eq) goto loc_8326A37C;
	// cmpwi cr6,r11,47
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 47, ctx.xer);
	// bne cr6,0x8326a338
	if (!ctx.cr6.eq) goto loc_8326A338;
	// li r8,1
	ctx.r8.s64 = 1;
	// b 0x8326a338
	goto loc_8326A338;
loc_8326A330:
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
loc_8326A338:
	// lbzx r6,r8,r30
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r8.u32 + ctx.r30.u32);
	// lbzx r7,r9,r31
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r9.u32 + ctx.r31.u32);
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// mr r3,r7
	ctx.r3.u64 = ctx.r7.u64;
	// bl 0x8326a248
	ctx.lr = 0x8326A34C;
	sub_8326A248(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x8326a330
	if (ctx.cr0.eq) goto loc_8326A330;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// ble cr6,0x8326a3d4
	if (!ctx.cr6.gt) goto loc_8326A3D4;
	// extsb. r11,r6
	ctx.r11.s64 = ctx.r6.s8;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8326a3d4
	if (!ctx.cr0.eq) goto loc_8326A3D4;
	// li r4,47
	ctx.r4.s64 = 47;
	// mr r3,r7
	ctx.r3.u64 = ctx.r7.u64;
	// bl 0x8326a248
	ctx.lr = 0x8326A370;
	sub_8326A248(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x8326a3d4
	if (!ctx.cr0.eq) goto loc_8326A3D4;
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
loc_8326A37C:
	// add r7,r9,r31
	ctx.r7.u64 = ctx.r9.u64 + ctx.r31.u64;
	// lbz r8,0(r5)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r5.u32 + 0);
	// lbzx r9,r9,r31
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r9.u32 + ctx.r31.u32);
	// mr r4,r8
	ctx.r4.u64 = ctx.r8.u64;
	// mr r3,r9
	ctx.r3.u64 = ctx.r9.u64;
	// bl 0x8326a248
	ctx.lr = 0x8326A394;
	sub_8326A248(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x8326a3d4
	if (!ctx.cr0.eq) goto loc_8326A3D4;
	// mr r6,r5
	ctx.r6.u64 = ctx.r5.u64;
loc_8326A3A0:
	// extsb. r11,r9
	ctx.r11.s64 = ctx.r9.s8;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8326a3b0
	if (!ctx.cr0.eq) goto loc_8326A3B0;
	// extsb. r11,r8
	ctx.r11.s64 = ctx.r8.s8;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8326a3d0
	if (ctx.cr0.eq) goto loc_8326A3D0;
loc_8326A3B0:
	// lbzu r9,1(r7)
	ea = 1 + ctx.r7.u32;
	ctx.r9.u64 = PPC_LOAD_U8(ea);
	ctx.r7.u32 = ea;
	// lbzu r8,1(r6)
	ea = 1 + ctx.r6.u32;
	ctx.r8.u64 = PPC_LOAD_U8(ea);
	ctx.r6.u32 = ea;
	// mr r3,r9
	ctx.r3.u64 = ctx.r9.u64;
	// mr r4,r8
	ctx.r4.u64 = ctx.r8.u64;
	// bl 0x8326a248
	ctx.lr = 0x8326A3C4;
	sub_8326A248(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x8326a3a0
	if (ctx.cr0.eq) goto loc_8326A3A0;
	// b 0x8326a3d4
	goto loc_8326A3D4;
loc_8326A3D0:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8326A3D4:
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

__attribute__((alias("__imp__sub_8326A3EC"))) PPC_WEAK_FUNC(sub_8326A3EC);
PPC_FUNC_IMPL(__imp__sub_8326A3EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8326A3F0"))) PPC_WEAK_FUNC(sub_8326A3F0);
PPC_FUNC_IMPL(__imp__sub_8326A3F0) {
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
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8326a41c
	if (ctx.cr6.eq) goto loc_8326A41C;
	// bl 0x83259ff8
	ctx.lr = 0x8326A414;
	sub_83259FF8(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
loc_8326A41C:
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

__attribute__((alias("__imp__sub_8326A430"))) PPC_WEAK_FUNC(sub_8326A430);
PPC_FUNC_IMPL(__imp__sub_8326A430) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x833a01a8
	ctx.lr = 0x8326A438;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r29,0(r3)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// bne cr6,0x8326a46c
	if (!ctx.cr6.eq) goto loc_8326A46C;
	// lis r11,-32219
	ctx.r11.s64 = -2111504384;
	// addi r4,r11,7436
	ctx.r4.s64 = ctx.r11.s64 + 7436;
loc_8326A45C:
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x83257c00
	ctx.lr = 0x8326A464;
	sub_83257C00(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x8326a598
	goto loc_8326A598;
loc_8326A46C:
	// lwz r11,4(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// cmpw cr6,r11,r30
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r30.s32, ctx.xer);
	// bgt cr6,0x8326a484
	if (ctx.cr6.gt) goto loc_8326A484;
	// lis r11,-32219
	ctx.r11.s64 = -2111504384;
	// addi r4,r11,7360
	ctx.r4.s64 = ctx.r11.s64 + 7360;
	// b 0x8326a45c
	goto loc_8326A45C;
loc_8326A484:
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r5,r11,25924
	ctx.r5.s64 = ctx.r11.s64 + 25924;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8326a1f0
	ctx.lr = 0x8326A498;
	sub_8326A1F0(ctx, base);
	// stw r3,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r3.u32);
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r5,r11,30080
	ctx.r5.s64 = ctx.r11.s64 + 30080;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8326a1f0
	ctx.lr = 0x8326A4B0;
	sub_8326A1F0(ctx, base);
	// stw r3,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r3.u32);
	// lis r11,-32219
	ctx.r11.s64 = -2111504384;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r5,r11,7348
	ctx.r5.s64 = ctx.r11.s64 + 7348;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8326a140
	ctx.lr = 0x8326A4C8;
	sub_8326A140(ctx, base);
	// stw r3,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r3.u32);
	// lis r11,-32219
	ctx.r11.s64 = -2111504384;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r5,r11,7336
	ctx.r5.s64 = ctx.r11.s64 + 7336;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8326a140
	ctx.lr = 0x8326A4E0;
	sub_8326A140(ctx, base);
	// stw r3,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r3.u32);
	// lwz r11,8(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 8);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lhz r11,96(r11)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r11.u32 + 96);
	// cmplwi cr6,r11,8
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 8, ctx.xer);
	// lis r11,-32219
	ctx.r11.s64 = -2111504384;
	// addi r5,r11,7324
	ctx.r5.s64 = ctx.r11.s64 + 7324;
	// blt cr6,0x8326a518
	if (ctx.cr6.lt) goto loc_8326A518;
	// bl 0x8326a0e8
	ctx.lr = 0x8326A508;
	sub_8326A0E8(ctx, base);
	// lwz r11,8(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 8);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// add r11,r3,r11
	ctx.r11.u64 = ctx.r3.u64 + ctx.r11.u64;
	// b 0x8326a520
	goto loc_8326A520;
loc_8326A518:
	// bl 0x8326a0e8
	ctx.lr = 0x8326A51C;
	sub_8326A0E8(ctx, base);
	// addi r11,r3,2048
	ctx.r11.s64 = ctx.r3.s64 + 2048;
loc_8326A520:
	// std r11,16(r31)
	PPC_STORE_U64(ctx.r31.u32 + 16, ctx.r11.u64);
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r5,r11,20640
	ctx.r5.s64 = ctx.r11.s64 + 20640;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8326a140
	ctx.lr = 0x8326A538;
	sub_8326A140(ctx, base);
	// stw r3,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r3.u32);
	// lis r11,-32219
	ctx.r11.s64 = -2111504384;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r5,r11,7312
	ctx.r5.s64 = ctx.r11.s64 + 7312;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8326a1f0
	ctx.lr = 0x8326A550;
	sub_8326A1F0(ctx, base);
	// stw r3,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r3.u32);
	// lis r11,-32219
	ctx.r11.s64 = -2111504384;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r5,r11,7308
	ctx.r5.s64 = ctx.r11.s64 + 7308;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8326a140
	ctx.lr = 0x8326A568;
	sub_8326A140(ctx, base);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// stw r3,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r3.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8326a584
	if (!ctx.cr6.eq) goto loc_8326A584;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r10,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r10.u32);
	// beq cr6,0x8326a594
	if (ctx.cr6.eq) goto loc_8326A594;
loc_8326A584:
	// lwz r10,12(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x8326a594
	if (!ctx.cr6.eq) goto loc_8326A594;
	// stw r11,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r11.u32);
loc_8326A594:
	// li r3,1
	ctx.r3.s64 = 1;
loc_8326A598:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x833a01f8
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8326A5A0"))) PPC_WEAK_FUNC(sub_8326A5A0);
PPC_FUNC_IMPL(__imp__sub_8326A5A0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x833a0194
	ctx.lr = 0x8326A5A8;
	__savegprlr_23(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r25,r4
	ctx.r25.u64 = ctx.r4.u64;
	// mr r23,r5
	ctx.r23.u64 = ctx.r5.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8326a5dc
	if (!ctx.cr6.eq) goto loc_8326A5DC;
	// lis r11,-32219
	ctx.r11.s64 = -2111504384;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r4,r11,7272
	ctx.r4.s64 = ctx.r11.s64 + 7272;
	// bl 0x83257c00
	ctx.lr = 0x8326A5D4;
	sub_83257C00(ctx, base);
	// li r24,0
	ctx.r24.s64 = 0;
	// b 0x8326a5e0
	goto loc_8326A5E0;
loc_8326A5DC:
	// lwz r24,4(r28)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
loc_8326A5E0:
	// li r31,0
	ctx.r31.s64 = 0;
	// cmpwi cr6,r24,0
	ctx.cr6.compare<int32_t>(ctx.r24.s32, 0, ctx.xer);
	// ble cr6,0x8326a648
	if (!ctx.cr6.gt) goto loc_8326A648;
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r27,r10,25924
	ctx.r27.s64 = ctx.r10.s64 + 25924;
	// addi r26,r11,30080
	ctx.r26.s64 = ctx.r11.s64 + 30080;
loc_8326A5FC:
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// lwz r3,0(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x8326a1f0
	ctx.lr = 0x8326A60C;
	sub_8326A1F0(ctx, base);
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r3,0(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// bl 0x8326a1f0
	ctx.lr = 0x8326A620;
	sub_8326A1F0(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// bl 0x8326a2d0
	ctx.lr = 0x8326A634;
	sub_8326A2D0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x8326a654
	if (ctx.cr0.eq) goto loc_8326A654;
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// cmpw cr6,r31,r24
	ctx.cr6.compare<int32_t>(ctx.r31.s32, ctx.r24.s32, ctx.xer);
	// blt cr6,0x8326a5fc
	if (ctx.cr6.lt) goto loc_8326A5FC;
loc_8326A648:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8326A64C:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x833a01e4
	__restgprlr_23(ctx, base);
	return;
loc_8326A654:
	// stw r30,4(r25)
	PPC_STORE_U32(ctx.r25.u32 + 4, ctx.r30.u32);
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// stw r29,0(r25)
	PPC_STORE_U32(ctx.r25.u32 + 0, ctx.r29.u32);
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x8326a430
	ctx.lr = 0x8326A66C;
	sub_8326A430(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x8326a64c
	goto loc_8326A64C;
}

__attribute__((alias("__imp__sub_8326A674"))) PPC_WEAK_FUNC(sub_8326A674);
PPC_FUNC_IMPL(__imp__sub_8326A674) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8326A678"))) PPC_WEAK_FUNC(sub_8326A678);
PPC_FUNC_IMPL(__imp__sub_8326A678) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x833a0190
	ctx.lr = 0x8326A680;
	__savegprlr_22(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r22,r4
	ctx.r22.u64 = ctx.r4.u64;
	// mr r23,r5
	ctx.r23.u64 = ctx.r5.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8326a6b4
	if (!ctx.cr6.eq) goto loc_8326A6B4;
	// lis r11,-32219
	ctx.r11.s64 = -2111504384;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r4,r11,7272
	ctx.r4.s64 = ctx.r11.s64 + 7272;
	// bl 0x83257c00
	ctx.lr = 0x8326A6AC;
	sub_83257C00(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// b 0x8326a6b8
	goto loc_8326A6B8;
loc_8326A6B4:
	// lwz r11,4(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
loc_8326A6B8:
	// addi r27,r11,-1
	ctx.r27.s64 = ctx.r11.s64 + -1;
	// lwz r3,0(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// srawi r10,r27,1
	ctx.xer.ca = (ctx.r27.s32 < 0) & ((ctx.r27.u32 & 0x1) != 0);
	ctx.r10.s64 = ctx.r27.s32 >> 1;
	// addi r26,r11,30080
	ctx.r26.s64 = ctx.r11.s64 + 30080;
	// addze r11,r10
	temp.s64 = ctx.r10.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r10.u32;
	ctx.r11.s64 = temp.s64;
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// clrlwi r31,r11,16
	ctx.r31.u64 = ctx.r11.u32 & 0xFFFF;
	// li r24,0
	ctx.r24.s64 = 0;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x8326a1f0
	ctx.lr = 0x8326A6E4;
	sub_8326A1F0(ctx, base);
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r25,r11,25924
	ctx.r25.s64 = ctx.r11.s64 + 25924;
	// b 0x8326a754
	goto loc_8326A754;
loc_8326A6F0:
	// clrlwi r11,r24,16
	ctx.r11.u64 = ctx.r24.u32 & 0xFFFF;
	// cmpw cr6,r11,r27
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r27.s32, ctx.xer);
	// bge cr6,0x8326a7a4
	if (!ctx.cr6.lt) goto loc_8326A7A4;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bge cr6,0x8326a728
	if (!ctx.cr6.lt) goto loc_8326A728;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x8326a720
	if (ctx.cr6.eq) goto loc_8326A720;
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x8326a7a4
	if (ctx.cr6.eq) goto loc_8326A7A4;
	// addis r11,r31,1
	ctx.r11.s64 = ctx.r31.s64 + 65536;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// clrlwi r31,r11,16
	ctx.r31.u64 = ctx.r11.u32 & 0xFFFF;
loc_8326A720:
	// clrlwi r27,r31,16
	ctx.r27.u64 = ctx.r31.u32 & 0xFFFF;
	// b 0x8326a730
	goto loc_8326A730;
loc_8326A728:
	// addi r11,r31,1
	ctx.r11.s64 = ctx.r31.s64 + 1;
	// clrlwi r24,r11,16
	ctx.r24.u64 = ctx.r11.u32 & 0xFFFF;
loc_8326A730:
	// clrlwi r11,r24,16
	ctx.r11.u64 = ctx.r24.u32 & 0xFFFF;
	// lwz r3,0(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// add r11,r11,r27
	ctx.r11.u64 = ctx.r11.u64 + ctx.r27.u64;
	// srawi r11,r11,1
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 1;
	// addze r11,r11
	temp.s64 = ctx.r11.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r11.u32;
	ctx.r11.s64 = temp.s64;
	// clrlwi r31,r11,16
	ctx.r31.u64 = ctx.r11.u32 & 0xFFFF;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x8326a1f0
	ctx.lr = 0x8326A754;
	sub_8326A1F0(ctx, base);
loc_8326A754:
	// mr r5,r25
	ctx.r5.u64 = ctx.r25.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r3,0(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// bl 0x8326a1f0
	ctx.lr = 0x8326A768;
	sub_8326A1F0(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// bl 0x8326a2d0
	ctx.lr = 0x8326A77C;
	sub_8326A2D0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x8326a6f0
	if (!ctx.cr0.eq) goto loc_8326A6F0;
	// stw r30,4(r22)
	PPC_STORE_U32(ctx.r22.u32 + 4, ctx.r30.u32);
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// stw r29,0(r22)
	PPC_STORE_U32(ctx.r22.u32 + 0, ctx.r29.u32);
	// mr r4,r22
	ctx.r4.u64 = ctx.r22.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x8326a430
	ctx.lr = 0x8326A79C;
	sub_8326A430(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x8326a7a8
	goto loc_8326A7A8;
loc_8326A7A4:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8326A7A8:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x833a01e0
	__restgprlr_22(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8326A7B0"))) PPC_WEAK_FUNC(sub_8326A7B0);
PPC_FUNC_IMPL(__imp__sub_8326A7B0) {
	PPC_FUNC_PROLOGUE();
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// stw r11,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r11.u32);
	// sth r11,16(r3)
	PPC_STORE_U16(ctx.r3.u32 + 16, ctx.r11.u16);
	// stw r11,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r11.u32);
	// stw r11,24(r3)
	PPC_STORE_U32(ctx.r3.u32 + 24, ctx.r11.u32);
	// stw r11,28(r3)
	PPC_STORE_U32(ctx.r3.u32 + 28, ctx.r11.u32);
	// stw r11,32(r3)
	PPC_STORE_U32(ctx.r3.u32 + 32, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8326A7DC"))) PPC_WEAK_FUNC(sub_8326A7DC);
PPC_FUNC_IMPL(__imp__sub_8326A7DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8326A7E0"))) PPC_WEAK_FUNC(sub_8326A7E0);
PPC_FUNC_IMPL(__imp__sub_8326A7E0) {
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
	// lwz r3,4(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// li r30,0
	ctx.r30.s64 = 0;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8326a810
	if (ctx.cr6.eq) goto loc_8326A810;
	// bl 0x83259ff8
	ctx.lr = 0x8326A80C;
	sub_83259FF8(ctx, base);
	// stw r30,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r30.u32);
loc_8326A810:
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8326a824
	if (ctx.cr6.eq) goto loc_8326A824;
	// bl 0x83259ff8
	ctx.lr = 0x8326A820;
	sub_83259FF8(ctx, base);
	// stw r30,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r30.u32);
loc_8326A824:
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

__attribute__((alias("__imp__sub_8326A83C"))) PPC_WEAK_FUNC(sub_8326A83C);
PPC_FUNC_IMPL(__imp__sub_8326A83C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8326A840"))) PPC_WEAK_FUNC(sub_8326A840);
PPC_FUNC_IMPL(__imp__sub_8326A840) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x833a0198
	ctx.lr = 0x8326A848;
	__savegprlr_24(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// mr r25,r5
	ctx.r25.u64 = ctx.r5.u64;
	// li r27,0
	ctx.r27.s64 = 0;
	// clrlwi r29,r5,16
	ctx.r29.u64 = ctx.r5.u32 & 0xFFFF;
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// bgt cr6,0x8326a870
	if (ctx.cr6.gt) goto loc_8326A870;
loc_8326A868:
	// lis r3,-32768
	ctx.r3.s64 = -2147483648;
	// b 0x8326a970
	goto loc_8326A970;
loc_8326A870:
	// clrlwi r30,r29,16
	ctx.r30.u64 = ctx.r29.u32 & 0xFFFF;
	// li r5,0
	ctx.r5.s64 = 0;
	// srawi r11,r30,1
	ctx.xer.ca = (ctx.r30.s32 < 0) & ((ctx.r30.u32 & 0x1) != 0);
	ctx.r11.s64 = ctx.r30.s32 >> 1;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// addze r11,r11
	temp.s64 = ctx.r11.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r11.u32;
	ctx.r11.s64 = temp.s64;
	// clrlwi r31,r11,16
	ctx.r31.u64 = ctx.r11.u32 & 0xFFFF;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x83259480
	ctx.lr = 0x8326A890;
	sub_83259480(ctx, base);
	// clrlwi r11,r3,16
	ctx.r11.u64 = ctx.r3.u32 & 0xFFFF;
	// cmpw cr6,r11,r28
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r28.s32, ctx.xer);
	// beq cr6,0x8326a914
	if (ctx.cr6.eq) goto loc_8326A914;
	// lis r10,0
	ctx.r10.s64 = 0;
	// ori r24,r10,65535
	ctx.r24.u64 = ctx.r10.u64 | 65535;
loc_8326A8A4:
	// clrlwi r10,r27,16
	ctx.r10.u64 = ctx.r27.u32 & 0xFFFF;
	// cmplw cr6,r10,r30
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r30.u32, ctx.xer);
	// bge cr6,0x8326a91c
	if (!ctx.cr6.lt) goto loc_8326A91C;
	// cmpw cr6,r11,r28
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r28.s32, ctx.xer);
	// ble cr6,0x8326a8d8
	if (!ctx.cr6.gt) goto loc_8326A8D8;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x8326a8d0
	if (ctx.cr6.eq) goto loc_8326A8D0;
	// cmplw cr6,r31,r10
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x8326a91c
	if (ctx.cr6.eq) goto loc_8326A91C;
	// add r11,r31,r24
	ctx.r11.u64 = ctx.r31.u64 + ctx.r24.u64;
	// clrlwi r31,r11,16
	ctx.r31.u64 = ctx.r11.u32 & 0xFFFF;
loc_8326A8D0:
	// mr r29,r31
	ctx.r29.u64 = ctx.r31.u64;
	// b 0x8326a8e0
	goto loc_8326A8E0;
loc_8326A8D8:
	// addi r11,r31,1
	ctx.r11.s64 = ctx.r31.s64 + 1;
	// clrlwi r27,r11,16
	ctx.r27.u64 = ctx.r11.u32 & 0xFFFF;
loc_8326A8E0:
	// clrlwi r11,r27,16
	ctx.r11.u64 = ctx.r27.u32 & 0xFFFF;
	// clrlwi r30,r29,16
	ctx.r30.u64 = ctx.r29.u32 & 0xFFFF;
	// li r5,0
	ctx.r5.s64 = 0;
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + ctx.r30.u64;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// srawi r11,r11,1
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 1;
	// addze r11,r11
	temp.s64 = ctx.r11.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r11.u32;
	ctx.r11.s64 = temp.s64;
	// clrlwi r31,r11,16
	ctx.r31.u64 = ctx.r11.u32 & 0xFFFF;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x83259480
	ctx.lr = 0x8326A908;
	sub_83259480(ctx, base);
	// clrlwi r11,r3,16
	ctx.r11.u64 = ctx.r3.u32 & 0xFFFF;
	// cmpw cr6,r11,r28
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r28.s32, ctx.xer);
	// bne cr6,0x8326a8a4
	if (!ctx.cr6.eq) goto loc_8326A8A4;
loc_8326A914:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// b 0x8326a970
	goto loc_8326A970;
loc_8326A91C:
	// cmpw cr6,r31,r25
	ctx.cr6.compare<int32_t>(ctx.r31.s32, ctx.r25.s32, ctx.xer);
	// blt cr6,0x8326a92c
	if (ctx.cr6.lt) goto loc_8326A92C;
	// add r9,r25,r24
	ctx.r9.u64 = ctx.r25.u64 + ctx.r24.u64;
	// clrlwi r31,r9,16
	ctx.r31.u64 = ctx.r9.u32 & 0xFFFF;
loc_8326A92C:
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x8326a93c
	if (!ctx.cr6.eq) goto loc_8326A93C;
	// cmpw cr6,r11,r28
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r28.s32, ctx.xer);
	// bgt cr6,0x8326a868
	if (ctx.cr6.gt) goto loc_8326A868;
loc_8326A93C:
	// clrlwi. r30,r31,16
	ctx.r30.u64 = ctx.r31.u32 & 0xFFFF;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// beq 0x8326a968
	if (ctx.cr0.eq) goto loc_8326A968;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x83259480
	ctx.lr = 0x8326A954;
	sub_83259480(ctx, base);
	// clrlwi r11,r3,16
	ctx.r11.u64 = ctx.r3.u32 & 0xFFFF;
	// cmpw cr6,r11,r28
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r28.s32, ctx.xer);
	// ble cr6,0x8326a968
	if (!ctx.cr6.gt) goto loc_8326A968;
	// add r11,r30,r24
	ctx.r11.u64 = ctx.r30.u64 + ctx.r24.u64;
	// clrlwi r31,r11,16
	ctx.r31.u64 = ctx.r11.u32 & 0xFFFF;
loc_8326A968:
	// clrlwi r11,r31,16
	ctx.r11.u64 = ctx.r31.u32 & 0xFFFF;
	// subfic r3,r11,-1
	ctx.xer.ca = ctx.r11.u32 <= 4294967295;
	ctx.r3.s64 = -1 - ctx.r11.s64;
loc_8326A970:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x833a01e8
	__restgprlr_24(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8326A978"))) PPC_WEAK_FUNC(sub_8326A978);
PPC_FUNC_IMPL(__imp__sub_8326A978) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x833a0198
	ctx.lr = 0x8326A980;
	__savegprlr_24(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// clrlwi r11,r6,16
	ctx.r11.u64 = ctx.r6.u32 & 0xFFFF;
	// lwz r30,20(r3)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// addis r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 65536;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// mr r25,r5
	ctx.r25.u64 = ctx.r5.u64;
	// clrlwi r11,r11,16
	ctx.r11.u64 = ctx.r11.u32 & 0xFFFF;
	// li r31,0
	ctx.r31.s64 = 0;
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// mr r27,r11
	ctx.r27.u64 = ctx.r11.u64;
	// subfic r24,r11,-1
	ctx.xer.ca = ctx.r11.u32 <= 4294967295;
	ctx.r24.s64 = -1 - ctx.r11.s64;
	// ble cr6,0x8326a9ec
	if (!ctx.cr6.gt) goto loc_8326A9EC;
	// clrldi r26,r24,32
	ctx.r26.u64 = ctx.r24.u64 & 0xFFFFFFFF;
loc_8326A9BC:
	// li r5,1
	ctx.r5.s64 = 1;
	// lwz r3,0(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x83259480
	ctx.lr = 0x8326A9CC;
	sub_83259480(ctx, base);
	// clrlwi r11,r3,16
	ctx.r11.u64 = ctx.r3.u32 & 0xFFFF;
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// add r11,r11,r27
	ctx.r11.u64 = ctx.r11.u64 + ctx.r27.u64;
	// cmpw cr6,r31,r28
	ctx.cr6.compare<int32_t>(ctx.r31.s32, ctx.r28.s32, ctx.xer);
	// clrldi r11,r11,32
	ctx.r11.u64 = ctx.r11.u64 & 0xFFFFFFFF;
	// and r11,r11,r26
	ctx.r11.u64 = ctx.r11.u64 & ctx.r26.u64;
	// add r30,r11,r30
	ctx.r30.u64 = ctx.r11.u64 + ctx.r30.u64;
	// blt cr6,0x8326a9bc
	if (ctx.cr6.lt) goto loc_8326A9BC;
loc_8326A9EC:
	// li r31,0
	ctx.r31.s64 = 0;
	// cmpwi cr6,r25,0
	ctx.cr6.compare<int32_t>(ctx.r25.s32, 0, ctx.xer);
	// ble cr6,0x8326aa28
	if (!ctx.cr6.gt) goto loc_8326AA28;
	// clrldi r28,r24,32
	ctx.r28.u64 = ctx.r24.u64 & 0xFFFFFFFF;
loc_8326A9FC:
	// li r5,1
	ctx.r5.s64 = 1;
	// lwz r3,4(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x83259558
	ctx.lr = 0x8326AA0C;
	sub_83259558(ctx, base);
	// add r11,r3,r27
	ctx.r11.u64 = ctx.r3.u64 + ctx.r27.u64;
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// clrldi r11,r11,32
	ctx.r11.u64 = ctx.r11.u64 & 0xFFFFFFFF;
	// cmpw cr6,r31,r25
	ctx.cr6.compare<int32_t>(ctx.r31.s32, ctx.r25.s32, ctx.xer);
	// and r11,r11,r28
	ctx.r11.u64 = ctx.r11.u64 & ctx.r28.u64;
	// add r30,r11,r30
	ctx.r30.u64 = ctx.r11.u64 + ctx.r30.u64;
	// blt cr6,0x8326a9fc
	if (ctx.cr6.lt) goto loc_8326A9FC;
loc_8326AA28:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x833a01e8
	__restgprlr_24(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8326AA34"))) PPC_WEAK_FUNC(sub_8326AA34);
PPC_FUNC_IMPL(__imp__sub_8326AA34) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8326AA38"))) PPC_WEAK_FUNC(sub_8326AA38);
PPC_FUNC_IMPL(__imp__sub_8326AA38) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x833a0194
	ctx.lr = 0x8326AA40;
	__savegprlr_23(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// clrlwi r11,r6,16
	ctx.r11.u64 = ctx.r6.u32 & 0xFFFF;
	// lwz r9,24(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// lwz r10,28(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 28);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addis r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 65536;
	// lwz r30,20(r3)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// addi r8,r9,-1
	ctx.r8.s64 = ctx.r9.s64 + -1;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// cntlzw r8,r8
	ctx.r8.u64 = ctx.r8.u32 == 0 ? 32 : __builtin_clz(ctx.r8.u32);
	// clrlwi r11,r11,16
	ctx.r11.u64 = ctx.r11.u32 & 0xFFFF;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// mr r25,r5
	ctx.r25.u64 = ctx.r5.u64;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// mr r24,r11
	ctx.r24.u64 = ctx.r11.u64;
	// subfic r23,r11,-1
	ctx.xer.ca = ctx.r11.u32 <= 4294967295;
	ctx.r23.s64 = -1 - ctx.r11.s64;
	// rlwinm r26,r8,27,31,31
	ctx.r26.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 27) & 0x1;
	// beq cr6,0x8326aaf0
	if (ctx.cr6.eq) goto loc_8326AAF0;
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// beq cr6,0x8326aaf0
	if (ctx.cr6.eq) goto loc_8326AAF0;
	// addi r11,r9,-1
	ctx.r11.s64 = ctx.r9.s64 + -1;
	// cmpw cr6,r4,r11
	ctx.cr6.compare<int32_t>(ctx.r4.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x8326aaf0
	if (ctx.cr6.lt) goto loc_8326AAF0;
	// rotlwi r8,r9,0
	ctx.r8.u64 = __builtin_rotateleft32(ctx.r9.u32, 0);
	// addi r11,r4,1
	ctx.r11.s64 = ctx.r4.s64 + 1;
	// twllei r8,0
	// divw r7,r11,r8
	ctx.r7.s32 = ctx.r11.s32 / ctx.r8.s32;
	// rotlwi r9,r11,1
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r11.u32, 1);
	// mullw r11,r7,r8
	ctx.r11.s64 = int64_t(ctx.r7.s32) * int64_t(ctx.r8.s32);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// addi r7,r9,-1
	ctx.r7.s64 = ctx.r9.s64 + -1;
	// divw r6,r11,r8
	ctx.r6.s32 = ctx.r11.s32 / ctx.r8.s32;
	// rotlwi r9,r11,1
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r11.u32, 1);
	// subf r6,r26,r6
	ctx.r6.s64 = ctx.r6.s64 - ctx.r26.s64;
	// addi r9,r9,-1
	ctx.r9.s64 = ctx.r9.s64 + -1;
	// rlwinm r6,r6,3,0,28
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 3) & 0xFFFFFFF8;
	// andc r7,r8,r7
	ctx.r7.u64 = ctx.r8.u64 & ~ctx.r7.u64;
	// andc r9,r8,r9
	ctx.r9.u64 = ctx.r8.u64 & ~ctx.r9.u64;
	// twllei r8,0
	// twlgei r7,-1
	// ldx r10,r6,r10
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r6.u32 + ctx.r10.u32);
	// twlgei r9,-1
	// add r30,r10,r30
	ctx.r30.u64 = ctx.r10.u64 + ctx.r30.u64;
	// b 0x8326aaf4
	goto loc_8326AAF4;
loc_8326AAF0:
	// li r11,0
	ctx.r11.s64 = 0;
loc_8326AAF4:
	// mr r29,r11
	ctx.r29.u64 = ctx.r11.u64;
	// cmpw cr6,r11,r28
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r28.s32, ctx.xer);
	// bge cr6,0x8326ab34
	if (!ctx.cr6.lt) goto loc_8326AB34;
	// clrldi r27,r23,32
	ctx.r27.u64 = ctx.r23.u64 & 0xFFFFFFFF;
loc_8326AB04:
	// li r5,1
	ctx.r5.s64 = 1;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x83259480
	ctx.lr = 0x8326AB14;
	sub_83259480(ctx, base);
	// clrlwi r11,r3,16
	ctx.r11.u64 = ctx.r3.u32 & 0xFFFF;
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// add r11,r11,r24
	ctx.r11.u64 = ctx.r11.u64 + ctx.r24.u64;
	// cmpw cr6,r29,r28
	ctx.cr6.compare<int32_t>(ctx.r29.s32, ctx.r28.s32, ctx.xer);
	// clrldi r11,r11,32
	ctx.r11.u64 = ctx.r11.u64 & 0xFFFFFFFF;
	// and r11,r11,r27
	ctx.r11.u64 = ctx.r11.u64 & ctx.r27.u64;
	// add r30,r11,r30
	ctx.r30.u64 = ctx.r11.u64 + ctx.r30.u64;
	// blt cr6,0x8326ab04
	if (ctx.cr6.lt) goto loc_8326AB04;
loc_8326AB34:
	// lwz r9,32(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x8326abac
	if (ctx.cr6.eq) goto loc_8326ABAC;
	// cmpwi cr6,r25,0
	ctx.cr6.compare<int32_t>(ctx.r25.s32, 0, ctx.xer);
	// beq cr6,0x8326abac
	if (ctx.cr6.eq) goto loc_8326ABAC;
	// lwz r11,24(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// cmpw cr6,r25,r11
	ctx.cr6.compare<int32_t>(ctx.r25.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x8326abac
	if (ctx.cr6.lt) goto loc_8326ABAC;
	// lwz r8,24(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// addi r11,r25,1
	ctx.r11.s64 = ctx.r25.s64 + 1;
	// divw r7,r11,r8
	ctx.r7.s32 = ctx.r11.s32 / ctx.r8.s32;
	// rotlwi r10,r11,1
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r11.u32, 1);
	// mullw r11,r7,r8
	ctx.r11.s64 = int64_t(ctx.r7.s32) * int64_t(ctx.r8.s32);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// addi r7,r10,-1
	ctx.r7.s64 = ctx.r10.s64 + -1;
	// divw r6,r11,r8
	ctx.r6.s32 = ctx.r11.s32 / ctx.r8.s32;
	// rotlwi r10,r11,1
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r11.u32, 1);
	// subf r6,r26,r6
	ctx.r6.s64 = ctx.r6.s64 - ctx.r26.s64;
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// rlwinm r6,r6,3,0,28
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 3) & 0xFFFFFFF8;
	// andc r10,r8,r10
	ctx.r10.u64 = ctx.r8.u64 & ~ctx.r10.u64;
	// andc r7,r8,r7
	ctx.r7.u64 = ctx.r8.u64 & ~ctx.r7.u64;
	// twlgei r10,-1
	// twllei r8,0
	// ldx r10,r6,r9
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r6.u32 + ctx.r9.u32);
	// twllei r8,0
	// twlgei r7,-1
	// add r30,r10,r30
	ctx.r30.u64 = ctx.r10.u64 + ctx.r30.u64;
	// b 0x8326abb0
	goto loc_8326ABB0;
loc_8326ABAC:
	// li r11,0
	ctx.r11.s64 = 0;
loc_8326ABB0:
	// mr r29,r11
	ctx.r29.u64 = ctx.r11.u64;
	// cmpw cr6,r11,r25
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r25.s32, ctx.xer);
	// bge cr6,0x8326abec
	if (!ctx.cr6.lt) goto loc_8326ABEC;
	// clrldi r28,r23,32
	ctx.r28.u64 = ctx.r23.u64 & 0xFFFFFFFF;
loc_8326ABC0:
	// li r5,1
	ctx.r5.s64 = 1;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x83259558
	ctx.lr = 0x8326ABD0;
	sub_83259558(ctx, base);
	// add r11,r3,r24
	ctx.r11.u64 = ctx.r3.u64 + ctx.r24.u64;
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// clrldi r11,r11,32
	ctx.r11.u64 = ctx.r11.u64 & 0xFFFFFFFF;
	// cmpw cr6,r29,r25
	ctx.cr6.compare<int32_t>(ctx.r29.s32, ctx.r25.s32, ctx.xer);
	// and r11,r11,r28
	ctx.r11.u64 = ctx.r11.u64 & ctx.r28.u64;
	// add r30,r11,r30
	ctx.r30.u64 = ctx.r11.u64 + ctx.r30.u64;
	// blt cr6,0x8326abc0
	if (ctx.cr6.lt) goto loc_8326ABC0;
loc_8326ABEC:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x833a01e4
	__restgprlr_23(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8326ABF8"))) PPC_WEAK_FUNC(sub_8326ABF8);
PPC_FUNC_IMPL(__imp__sub_8326ABF8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x833a019c
	ctx.lr = 0x8326AC00;
	__savegprlr_25(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r30,12(r3)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// mr r26,r4
	ctx.r26.u64 = ctx.r4.u64;
	// mr r27,r5
	ctx.r27.u64 = ctx.r5.u64;
	// rlwinm r31,r30,31,1,31
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 31) & 0x7FFFFFFF;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// lwz r3,4(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// mr r25,r6
	ctx.r25.u64 = ctx.r6.u64;
	// li r28,0
	ctx.r28.s64 = 0;
	// bl 0x83259558
	ctx.lr = 0x8326AC30;
	sub_83259558(ctx, base);
	// clrlwi r27,r27,16
	ctx.r27.u64 = ctx.r27.u32 & 0xFFFF;
	// b 0x8326ac80
	goto loc_8326AC80;
loc_8326AC38:
	// cmplw cr6,r28,r30
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, ctx.r30.u32, ctx.xer);
	// bge cr6,0x8326acb0
	if (!ctx.cr6.lt) goto loc_8326ACB0;
	// cmplw cr6,r3,r27
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r27.u32, ctx.xer);
	// ble cr6,0x8326ac64
	if (!ctx.cr6.gt) goto loc_8326AC64;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x8326ac5c
	if (ctx.cr6.eq) goto loc_8326AC5C;
	// cmplw cr6,r31,r28
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r28.u32, ctx.xer);
	// beq cr6,0x8326acb0
	if (ctx.cr6.eq) goto loc_8326ACB0;
	// addi r31,r31,-1
	ctx.r31.s64 = ctx.r31.s64 + -1;
loc_8326AC5C:
	// mr r30,r31
	ctx.r30.u64 = ctx.r31.u64;
	// b 0x8326ac68
	goto loc_8326AC68;
loc_8326AC64:
	// addi r28,r31,1
	ctx.r28.s64 = ctx.r31.s64 + 1;
loc_8326AC68:
	// add r11,r30,r28
	ctx.r11.u64 = ctx.r30.u64 + ctx.r28.u64;
	// lwz r3,4(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// li r5,0
	ctx.r5.s64 = 0;
	// rlwinm r31,r11,31,1,31
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 31) & 0x7FFFFFFF;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x83259558
	ctx.lr = 0x8326AC80;
	sub_83259558(ctx, base);
loc_8326AC80:
	// cmplw cr6,r3,r27
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r27.u32, ctx.xer);
	// bne cr6,0x8326ac38
	if (!ctx.cr6.eq) goto loc_8326AC38;
	// li r5,1
	ctx.r5.s64 = 1;
	// lwz r3,4(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x83259558
	ctx.lr = 0x8326AC98;
	sub_83259558(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x8326a430
	ctx.lr = 0x8326ACA8;
	sub_8326A430(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x8326acb4
	goto loc_8326ACB4;
loc_8326ACB0:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8326ACB4:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x833a01ec
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8326ACBC"))) PPC_WEAK_FUNC(sub_8326ACBC);
PPC_FUNC_IMPL(__imp__sub_8326ACBC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8326ACC0"))) PPC_WEAK_FUNC(sub_8326ACC0);
PPC_FUNC_IMPL(__imp__sub_8326ACC0) {
	PPC_FUNC_PROLOGUE();
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// stw r11,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r11.u32);
	// stw r11,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r11.u32);
	// stw r11,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r11.u32);
	// stw r11,24(r3)
	PPC_STORE_U32(ctx.r3.u32 + 24, ctx.r11.u32);
	// sth r11,40(r3)
	PPC_STORE_U16(ctx.r3.u32 + 40, ctx.r11.u16);
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8326ACE8"))) PPC_WEAK_FUNC(sub_8326ACE8);
PPC_FUNC_IMPL(__imp__sub_8326ACE8) {
	PPC_FUNC_PROLOGUE();
	// li r11,-1
	ctx.r11.s64 = -1;
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8326ACF4"))) PPC_WEAK_FUNC(sub_8326ACF4);
PPC_FUNC_IMPL(__imp__sub_8326ACF4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8326ACF8"))) PPC_WEAK_FUNC(sub_8326ACF8);
PPC_FUNC_IMPL(__imp__sub_8326ACF8) {
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
	// lwz r3,12(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// li r30,0
	ctx.r30.s64 = 0;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8326ad28
	if (ctx.cr6.eq) goto loc_8326AD28;
	// bl 0x83259ff8
	ctx.lr = 0x8326AD24;
	sub_83259FF8(ctx, base);
	// stw r30,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r30.u32);
loc_8326AD28:
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8326ad3c
	if (ctx.cr6.eq) goto loc_8326AD3C;
	// bl 0x83259ff8
	ctx.lr = 0x8326AD38;
	sub_83259FF8(ctx, base);
	// stw r30,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r30.u32);
loc_8326AD3C:
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8326ad50
	if (ctx.cr6.eq) goto loc_8326AD50;
	// bl 0x83259ff8
	ctx.lr = 0x8326AD4C;
	sub_83259FF8(ctx, base);
	// stw r30,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r30.u32);
loc_8326AD50:
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

__attribute__((alias("__imp__sub_8326AD68"))) PPC_WEAK_FUNC(sub_8326AD68);
PPC_FUNC_IMPL(__imp__sub_8326AD68) {
	PPC_FUNC_PROLOGUE();
	// b 0x8326acf8
	sub_8326ACF8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8326AD6C"))) PPC_WEAK_FUNC(sub_8326AD6C);
PPC_FUNC_IMPL(__imp__sub_8326AD6C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8326AD70"))) PPC_WEAK_FUNC(sub_8326AD70);
PPC_FUNC_IMPL(__imp__sub_8326AD70) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x833a01ac
	ctx.lr = 0x8326AD78;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32219
	ctx.r11.s64 = -2111504384;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// addi r5,r11,7472
	ctx.r5.s64 = ctx.r11.s64 + 7472;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r3,4(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// bl 0x8326a1f0
	ctx.lr = 0x8326AD9C;
	sub_8326A1F0(ctx, base);
	// stw r3,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r3.u32);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// li r5,1
	ctx.r5.s64 = 1;
	// bl 0x83259640
	ctx.lr = 0x8326ADB0;
	sub_83259640(ctx, base);
	// stw r3,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r3.u32);
	// li r5,2
	ctx.r5.s64 = 2;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x83259640
	ctx.lr = 0x8326ADC4;
	sub_83259640(ctx, base);
	// stw r3,8(r30)
	PPC_STORE_U32(ctx.r30.u32 + 8, ctx.r3.u32);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x833a01fc
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8326ADD4"))) PPC_WEAK_FUNC(sub_8326ADD4);
PPC_FUNC_IMPL(__imp__sub_8326ADD4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8326ADD8"))) PPC_WEAK_FUNC(sub_8326ADD8);
PPC_FUNC_IMPL(__imp__sub_8326ADD8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x833a01ac
	ctx.lr = 0x8326ADE0;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r3,8(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// bl 0x83259480
	ctx.lr = 0x8326AE00;
	sub_83259480(ctx, base);
	// sth r3,0(r30)
	PPC_STORE_U16(ctx.r30.u32 + 0, ctx.r3.u16);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// li r5,1
	ctx.r5.s64 = 1;
	// bl 0x83259640
	ctx.lr = 0x8326AE14;
	sub_83259640(ctx, base);
	// stw r3,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r3.u32);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// li r5,2
	ctx.r5.s64 = 2;
	// bl 0x83259640
	ctx.lr = 0x8326AE28;
	sub_83259640(ctx, base);
	// stw r3,8(r30)
	PPC_STORE_U32(ctx.r30.u32 + 8, ctx.r3.u32);
	// li r5,3
	ctx.r5.s64 = 3;
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x83259640
	ctx.lr = 0x8326AE3C;
	sub_83259640(ctx, base);
	// stw r3,12(r30)
	PPC_STORE_U32(ctx.r30.u32 + 12, ctx.r3.u32);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x833a01fc
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8326AE4C"))) PPC_WEAK_FUNC(sub_8326AE4C);
PPC_FUNC_IMPL(__imp__sub_8326AE4C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8326AE50"))) PPC_WEAK_FUNC(sub_8326AE50);
PPC_FUNC_IMPL(__imp__sub_8326AE50) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x833a0198
	ctx.lr = 0x8326AE58;
	__savegprlr_24(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// mr r24,r5
	ctx.r24.u64 = ctx.r5.u64;
	// mr r26,r6
	ctx.r26.u64 = ctx.r6.u64;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// bne cr6,0x8326ae88
	if (!ctx.cr6.eq) goto loc_8326AE88;
	// li r11,-1
	ctx.r11.s64 = -1;
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r11,0(r5)
	PPC_STORE_U32(ctx.r5.u32 + 0, ctx.r11.u32);
	// stw r11,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r11.u32);
	// b 0x8326af34
	goto loc_8326AF34;
loc_8326AE88:
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// stw r11,0(r26)
	PPC_STORE_U32(ctx.r26.u32 + 0, ctx.r11.u32);
	// bl 0x833a77b0
	ctx.lr = 0x8326AE98;
	sub_833A77B0(ctx, base);
	// lwz r11,24(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 24);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// li r30,0
	ctx.r30.s64 = 0;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x8326af30
	if (!ctx.cr6.gt) goto loc_8326AF30;
	// lis r11,-32219
	ctx.r11.s64 = -2111504384;
	// addi r25,r11,7488
	ctx.r25.s64 = ctx.r11.s64 + 7488;
loc_8326AEB4:
	// mr r5,r25
	ctx.r5.u64 = ctx.r25.u64;
	// lwz r3,12(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 12);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x8326a1f0
	ctx.lr = 0x8326AEC4;
	sub_8326A1F0(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x8326af20
	if (ctx.cr0.eq) goto loc_8326AF20;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x833a77b0
	ctx.lr = 0x8326AED4;
	sub_833A77B0(ctx, base);
	// cmpw cr6,r27,r3
	ctx.cr6.compare<int32_t>(ctx.r27.s32, ctx.r3.s32, ctx.xer);
	// bne cr6,0x8326af20
	if (!ctx.cr6.eq) goto loc_8326AF20;
	// li r8,0
	ctx.r8.s64 = 0;
	// cmpwi cr6,r27,0
	ctx.cr6.compare<int32_t>(ctx.r27.s32, 0, ctx.xer);
	// ble cr6,0x8326af14
	if (!ctx.cr6.gt) goto loc_8326AF14;
	// mr r9,r28
	ctx.r9.u64 = ctx.r28.u64;
	// subf r7,r28,r31
	ctx.r7.s64 = ctx.r31.s64 - ctx.r28.s64;
loc_8326AEF0:
	// lbzx r4,r7,r9
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r7.u32 + ctx.r9.u32);
	// lbz r3,0(r9)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r9.u32 + 0);
	// bl 0x8326a248
	ctx.lr = 0x8326AEFC;
	sub_8326A248(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x8326af18
	if (!ctx.cr0.eq) goto loc_8326AF18;
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// cmpw cr6,r8,r27
	ctx.cr6.compare<int32_t>(ctx.r8.s32, ctx.r27.s32, ctx.xer);
	// blt cr6,0x8326aef0
	if (ctx.cr6.lt) goto loc_8326AEF0;
loc_8326AF14:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8326AF18:
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x8326af3c
	if (ctx.cr6.eq) goto loc_8326AF3C;
loc_8326AF20:
	// lwz r11,24(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 24);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// cmpw cr6,r30,r11
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x8326aeb4
	if (ctx.cr6.lt) goto loc_8326AEB4;
loc_8326AF30:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8326AF34:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x833a01e8
	__restgprlr_24(ctx, base);
	return;
loc_8326AF3C:
	// stw r30,0(r24)
	PPC_STORE_U32(ctx.r24.u32 + 0, ctx.r30.u32);
	// lis r11,-32219
	ctx.r11.s64 = -2111504384;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r3,12(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 12);
	// addi r5,r11,7480
	ctx.r5.s64 = ctx.r11.s64 + 7480;
	// bl 0x8326a198
	ctx.lr = 0x8326AF54;
	sub_8326A198(ctx, base);
	// clrlwi. r11,r3,16
	ctx.r11.u64 = ctx.r3.u32 & 0xFFFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,0(r26)
	PPC_STORE_U32(ctx.r26.u32 + 0, ctx.r11.u32);
	// bgt 0x8326af68
	if (ctx.cr0.gt) goto loc_8326AF68;
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,0(r26)
	PPC_STORE_U32(ctx.r26.u32 + 0, ctx.r11.u32);
loc_8326AF68:
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x8326af34
	goto loc_8326AF34;
}

__attribute__((alias("__imp__sub_8326AF70"))) PPC_WEAK_FUNC(sub_8326AF70);
PPC_FUNC_IMPL(__imp__sub_8326AF70) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x833a01a8
	ctx.lr = 0x8326AF78;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,24(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// mr r30,r6
	ctx.r30.u64 = ctx.r6.u64;
	// cmpw cr6,r6,r11
	ctx.cr6.compare<int32_t>(ctx.r6.s32, ctx.r11.s32, ctx.xer);
	// ble cr6,0x8326afa8
	if (!ctx.cr6.gt) goto loc_8326AFA8;
	// li r11,0
	ctx.r11.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
	// b 0x8326afdc
	goto loc_8326AFDC;
loc_8326AFA8:
	// lis r11,-32219
	ctx.r11.s64 = -2111504384;
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r5,r11,7488
	ctx.r5.s64 = ctx.r11.s64 + 7488;
	// bl 0x8326a1f0
	ctx.lr = 0x8326AFBC;
	sub_8326A1F0(ctx, base);
	// stw r3,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r3.u32);
	// lis r11,-32219
	ctx.r11.s64 = -2111504384;
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r5,r11,7480
	ctx.r5.s64 = ctx.r11.s64 + 7480;
	// bl 0x8326a198
	ctx.lr = 0x8326AFD4;
	sub_8326A198(ctx, base);
	// clrlwi r11,r3,16
	ctx.r11.u64 = ctx.r3.u32 & 0xFFFF;
	// li r3,1
	ctx.r3.s64 = 1;
loc_8326AFDC:
	// stw r11,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r11.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x833a01f8
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8326AFE8"))) PPC_WEAK_FUNC(sub_8326AFE8);
PPC_FUNC_IMPL(__imp__sub_8326AFE8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x833a0198
	ctx.lr = 0x8326AFF0;
	__savegprlr_24(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r26,r5
	ctx.r26.u64 = ctx.r5.u64;
	// li r28,0
	ctx.r28.s64 = 0;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// bne cr6,0x8326b014
	if (!ctx.cr6.eq) goto loc_8326B014;
loc_8326B00C:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x8326b094
	goto loc_8326B094;
loc_8326B014:
	// lbz r11,0(r26)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r26.u32 + 0);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x8326b00c
	if (ctx.cr0.eq) goto loc_8326B00C;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x833a77b0
	ctx.lr = 0x8326B028;
	sub_833A77B0(ctx, base);
	// mr r24,r3
	ctx.r24.u64 = ctx.r3.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x8326ad70
	ctx.lr = 0x8326B03C;
	sub_8326AD70(ctx, base);
	// lwz r11,8(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// neg r27,r11
	ctx.r27.s64 = -ctx.r11.s64;
loc_8326B044:
	// lbzx r11,r28,r26
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r28.u32 + ctx.r26.u32);
	// li r31,0
	ctx.r31.s64 = 0;
	// cmplwi cr6,r11,47
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 47, ctx.xer);
	// bne cr6,0x8326b058
	if (!ctx.cr6.eq) goto loc_8326B058;
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
loc_8326B058:
	// lbzx r11,r28,r26
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r28.u32 + ctx.r26.u32);
	// add r30,r28,r26
	ctx.r30.u64 = ctx.r28.u64 + ctx.r26.u64;
	// extsb r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	// cmpwi cr6,r11,47
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 47, ctx.xer);
	// beq cr6,0x8326b090
	if (ctx.cr6.eq) goto loc_8326B090;
loc_8326B06C:
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8326b088
	if (ctx.cr6.eq) goto loc_8326B088;
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// lbzx r11,r30,r31
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + ctx.r31.u32);
	// extsb r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	// cmpwi cr6,r11,47
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 47, ctx.xer);
	// bne cr6,0x8326b06c
	if (!ctx.cr6.eq) goto loc_8326B06C;
loc_8326B088:
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// bne cr6,0x8326b100
	if (!ctx.cr6.eq) goto loc_8326B100;
loc_8326B090:
	// li r3,-1
	ctx.r3.s64 = -1;
loc_8326B094:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x833a01e8
	__restgprlr_24(ctx, base);
	return;
loc_8326B09C:
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x8326ad70
	ctx.lr = 0x8326B0AC;
	sub_8326AD70(ctx, base);
	// lwz r3,0(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// bl 0x833a77b0
	ctx.lr = 0x8326B0B4;
	sub_833A77B0(ctx, base);
	// mr r8,r3
	ctx.r8.u64 = ctx.r3.u64;
	// cmpw cr6,r3,r31
	ctx.cr6.compare<int32_t>(ctx.r3.s32, ctx.r31.s32, ctx.xer);
	// bne cr6,0x8326b0fc
	if (!ctx.cr6.eq) goto loc_8326B0FC;
	// li r9,0
	ctx.r9.s64 = 0;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// ble cr6,0x8326b0f0
	if (!ctx.cr6.gt) goto loc_8326B0F0;
	// lwz r7,0(r29)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
loc_8326B0D0:
	// lbzx r4,r9,r30
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r9.u32 + ctx.r30.u32);
	// lbzx r3,r7,r9
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r7.u32 + ctx.r9.u32);
	// bl 0x8326a248
	ctx.lr = 0x8326B0DC;
	sub_8326A248(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x8326b0f4
	if (!ctx.cr0.eq) goto loc_8326B0F4;
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// cmpw cr6,r9,r8
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r8.s32, ctx.xer);
	// blt cr6,0x8326b0d0
	if (ctx.cr6.lt) goto loc_8326B0D0;
loc_8326B0F0:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8326B0F4:
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x8326b10c
	if (ctx.cr6.eq) goto loc_8326B10C;
loc_8326B0FC:
	// lwz r27,4(r29)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
loc_8326B100:
	// cmpwi cr6,r27,0
	ctx.cr6.compare<int32_t>(ctx.r27.s32, 0, ctx.xer);
	// bgt cr6,0x8326b09c
	if (ctx.cr6.gt) goto loc_8326B09C;
	// b 0x8326b090
	goto loc_8326B090;
loc_8326B10C:
	// lwz r10,8(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bge cr6,0x8326b130
	if (!ctx.cr6.lt) goto loc_8326B130;
	// add r11,r31,r28
	ctx.r11.u64 = ctx.r31.u64 + ctx.r28.u64;
	// cmpw cr6,r11,r24
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r24.s32, ctx.xer);
	// bge cr6,0x8326b130
	if (!ctx.cr6.lt) goto loc_8326B130;
	// neg r27,r10
	ctx.r27.s64 = -ctx.r10.s64;
	// mr r28,r11
	ctx.r28.u64 = ctx.r11.u64;
	// b 0x8326b044
	goto loc_8326B044;
loc_8326B130:
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// b 0x8326b094
	goto loc_8326B094;
}

__attribute__((alias("__imp__sub_8326B138"))) PPC_WEAK_FUNC(sub_8326B138);
PPC_FUNC_IMPL(__imp__sub_8326B138) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x833a017c
	ctx.lr = 0x8326B140;
	__savegprlr_17(ctx, base);
	// stwu r1,-272(r1)
	ea = -272 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,52(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 52);
	// mr r29,r10
	ctx.r29.u64 = ctx.r10.u64;
	// stw r10,348(r1)
	PPC_STORE_U32(ctx.r1.u32 + 348, ctx.r10.u32);
	// mr r24,r4
	ctx.r24.u64 = ctx.r4.u64;
	// srawi r10,r11,31
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x7FFFFFFF) != 0);
	ctx.r10.s64 = ctx.r11.s32 >> 31;
	// lwz r30,0(r8)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	// mr r23,r5
	ctx.r23.u64 = ctx.r5.u64;
	// xor r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 ^ ctx.r10.u64;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// subf r26,r10,r11
	ctx.r26.s64 = ctx.r11.s64 - ctx.r10.s64;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// lwz r3,28(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 28);
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// mr r17,r6
	ctx.r17.u64 = ctx.r6.u64;
	// mr r31,r7
	ctx.r31.u64 = ctx.r7.u64;
	// mr r28,r8
	ctx.r28.u64 = ctx.r8.u64;
	// mr r25,r9
	ctx.r25.u64 = ctx.r9.u64;
	// li r18,0
	ctx.r18.s64 = 0;
	// li r19,0
	ctx.r19.s64 = 0;
	// bl 0x8326a430
	ctx.lr = 0x8326B194;
	sub_8326A430(ctx, base);
	// lhz r11,22(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 22);
	// cmplwi cr6,r11,18000
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 18000, ctx.xer);
	// lwz r20,120(r1)
	ctx.r20.u64 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	// lwz r22,100(r1)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// lwz r21,96(r1)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// bne cr6,0x8326b274
	if (!ctx.cr6.eq) goto loc_8326B274;
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8326b1d0
	if (ctx.cr6.eq) goto loc_8326B1D0;
	// mr r5,r22
	ctx.r5.u64 = ctx.r22.u64;
	// mr r4,r21
	ctx.r4.u64 = ctx.r21.u64;
	// bl 0x8326a2d0
	ctx.lr = 0x8326B1C4;
	sub_8326A2D0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x8326b280
	if (!ctx.cr0.eq) goto loc_8326B280;
loc_8326B1CC:
	// li r18,1
	ctx.r18.s64 = 1;
loc_8326B1D0:
	// lwz r11,8(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 8);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x8326b1e4
	if (!ctx.cr6.gt) goto loc_8326B1E4;
	// mr r29,r11
	ctx.r29.u64 = ctx.r11.u64;
	// stw r11,348(r1)
	PPC_STORE_U32(ctx.r1.u32 + 348, ctx.r11.u32);
loc_8326B1E4:
	// cmpwi cr6,r29,-1
	ctx.cr6.compare<int32_t>(ctx.r29.s32, -1, ctx.xer);
	// bne cr6,0x8326b204
	if (!ctx.cr6.eq) goto loc_8326B204;
	// mr r6,r25
	ctx.r6.u64 = ctx.r25.u64;
	// addi r5,r1,348
	ctx.r5.s64 = ctx.r1.s64 + 348;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x8326af70
	ctx.lr = 0x8326B200;
	sub_8326AF70(ctx, base);
	// lwz r29,348(r1)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r1.u32 + 348);
loc_8326B204:
	// addi r11,r29,-1
	ctx.r11.s64 = ctx.r29.s64 + -1;
	// stw r29,4(r28)
	PPC_STORE_U32(ctx.r28.u32 + 4, ctx.r29.u32);
	// lwz r10,0(r24)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r24.u32 + 0);
	// cmplwi cr6,r23,0
	ctx.cr6.compare<uint32_t>(ctx.r23.u32, 0, ctx.xer);
	// add r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lwz r29,108(r1)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	// subfic r9,r11,-1
	ctx.xer.ca = ctx.r11.u32 <= 4294967295;
	ctx.r9.s64 = -1 - ctx.r11.s64;
	// and r28,r10,r9
	ctx.r28.u64 = ctx.r10.u64 & ctx.r9.u64;
	// beq cr6,0x8326b240
	if (ctx.cr6.eq) goto loc_8326B240;
	// lwz r10,104(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// cmplw cr6,r10,r29
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r29.u32, ctx.xer);
	// bne cr6,0x8326b240
	if (!ctx.cr6.eq) goto loc_8326B240;
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// beq cr6,0x8326b240
	if (ctx.cr6.eq) goto loc_8326B240;
	// li r19,1
	ctx.r19.s64 = 1;
loc_8326B240:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x8326b308
	if (ctx.cr6.eq) goto loc_8326B308;
	// lwz r11,356(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 356);
	// ld r31,112(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + 112);
	// stw r21,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r21.u32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r22,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r22.u32);
	// stw r29,8(r30)
	PPC_STORE_U32(ctx.r30.u32 + 8, ctx.r29.u32);
	// stw r26,16(r30)
	PPC_STORE_U32(ctx.r30.u32 + 16, ctx.r26.u32);
	// sth r20,20(r30)
	PPC_STORE_U16(ctx.r30.u32 + 20, ctx.r20.u16);
	// bne cr6,0x8326b288
	if (!ctx.cr6.eq) goto loc_8326B288;
	// stw r28,12(r30)
	PPC_STORE_U32(ctx.r30.u32 + 12, ctx.r28.u32);
	// b 0x8326b298
	goto loc_8326B298;
loc_8326B274:
	// lhz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 20);
	// cmplw cr6,r11,r20
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r20.u32, ctx.xer);
	// beq cr6,0x8326b1cc
	if (ctx.cr6.eq) goto loc_8326B1CC;
loc_8326B280:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x8326b314
	goto loc_8326B314;
loc_8326B288:
	// lwz r11,4(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 4);
	// extsw r10,r31
	ctx.r10.s64 = ctx.r31.s32;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r11,12(r30)
	PPC_STORE_U32(ctx.r30.u32 + 12, ctx.r11.u32);
loc_8326B298:
	// cmpwi cr6,r19,0
	ctx.cr6.compare<int32_t>(ctx.r19.s32, 0, ctx.xer);
	// beq cr6,0x8326b308
	if (ctx.cr6.eq) goto loc_8326B308;
	// srawi r11,r17,31
	ctx.xer.ca = (ctx.r17.s32 < 0) & ((ctx.r17.u32 & 0x7FFFFFFF) != 0);
	ctx.r11.s64 = ctx.r17.s32 >> 31;
	// lwz r3,28(r27)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r27.u32 + 28);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// xor r10,r17,r11
	ctx.r10.u64 = ctx.r17.u64 ^ ctx.r11.u64;
	// subf r5,r11,r10
	ctx.r5.s64 = ctx.r10.s64 - ctx.r11.s64;
	// bl 0x8326a430
	ctx.lr = 0x8326B2B8;
	sub_8326A430(ctx, base);
	// lwz r11,108(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	// lwz r10,104(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x8326b308
	if (!ctx.cr6.eq) goto loc_8326B308;
	// ld r9,112(r1)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r1.u32 + 112);
	// cmpd cr6,r31,r9
	ctx.cr6.compare<int64_t>(ctx.r31.s64, ctx.r9.s64, ctx.xer);
	// blt cr6,0x8326b308
	if (ctx.cr6.lt) goto loc_8326B308;
	// lwz r11,12(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// lwz r10,12(r23)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r23.u32 + 12);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x8326b308
	if (ctx.cr6.lt) goto loc_8326B308;
	// rotlwi r9,r9,0
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r9.u32, 0);
	// rotlwi r8,r31,0
	ctx.r8.u64 = __builtin_rotateleft32(ctx.r31.u32, 0);
	// subf r11,r10,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r10.s64;
	// subf r10,r9,r8
	ctx.r10.s64 = ctx.r8.s64 - ctx.r9.s64;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x8326b308
	if (!ctx.cr6.eq) goto loc_8326B308;
	// lwz r11,16(r23)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r23.u32 + 16);
	// oris r11,r11,32768
	ctx.r11.u64 = ctx.r11.u64 | 2147483648;
	// stw r11,16(r23)
	PPC_STORE_U32(ctx.r23.u32 + 16, ctx.r11.u32);
loc_8326B308:
	// add r11,r29,r28
	ctx.r11.u64 = ctx.r29.u64 + ctx.r28.u64;
	// addi r3,r18,1
	ctx.r3.s64 = ctx.r18.s64 + 1;
	// stw r11,0(r24)
	PPC_STORE_U32(ctx.r24.u32 + 0, ctx.r11.u32);
loc_8326B314:
	// addi r1,r1,272
	ctx.r1.s64 = ctx.r1.s64 + 272;
	// b 0x833a01cc
	__restgprlr_17(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8326B31C"))) PPC_WEAK_FUNC(sub_8326B31C);
PPC_FUNC_IMPL(__imp__sub_8326B31C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8326B320"))) PPC_WEAK_FUNC(sub_8326B320);
PPC_FUNC_IMPL(__imp__sub_8326B320) {
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
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// addi r4,r3,60
	ctx.r4.s64 = ctx.r3.s64 + 60;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x8326ad70
	ctx.lr = 0x8326B348;
	sub_8326AD70(ctx, base);
	// lwz r9,68(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 68);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// stw r9,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r9.u32);
	// lwz r8,64(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 64);
	// beq cr6,0x8326b374
	if (ctx.cr6.eq) goto loc_8326B374;
	// lwz r11,36(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// neg r11,r11
	ctx.r11.s64 = -ctx.r11.s64;
	// cmpw cr6,r9,r11
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r11.s32, ctx.xer);
	// bne cr6,0x8326b374
	if (!ctx.cr6.eq) goto loc_8326B374;
loc_8326B36C:
	// li r3,-2
	ctx.r3.s64 = -2;
	// b 0x8326b420
	goto loc_8326B420;
loc_8326B374:
	// lhz r11,42(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 42);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x8326b388
	if (!ctx.cr0.eq) goto loc_8326B388;
loc_8326B380:
	// li r3,-1
	ctx.r3.s64 = -1;
	// b 0x8326b420
	goto loc_8326B420;
loc_8326B388:
	// lis r11,-31827
	ctx.r11.s64 = -2085814272;
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// addi r11,r11,9688
	ctx.r11.s64 = ctx.r11.s64 + 9688;
	// lwz r10,64(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 64);
	// bge cr6,0x8326b3bc
	if (!ctx.cr6.lt) goto loc_8326B3BC;
	// lwz r7,36(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// neg r6,r8
	ctx.r6.s64 = -ctx.r8.s64;
	// cmpw cr6,r7,r6
	ctx.cr6.compare<int32_t>(ctx.r7.s32, ctx.r6.s32, ctx.xer);
	// bne cr6,0x8326b3bc
	if (!ctx.cr6.eq) goto loc_8326B3BC;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bge cr6,0x8326b380
	if (!ctx.cr6.lt) goto loc_8326B380;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x8326b36c
	if (ctx.cr6.eq) goto loc_8326B36C;
loc_8326B3BC:
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bge cr6,0x8326b414
	if (!ctx.cr6.lt) goto loc_8326B414;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x8326b3f8
	if (ctx.cr6.eq) goto loc_8326B3F8;
	// rlwinm r7,r10,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// add r7,r7,r11
	ctx.r7.u64 = ctx.r7.u64 + ctx.r11.u64;
	// lwz r7,-4(r7)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r7.u32 + -4);
	// cmpw cr6,r7,r9
	ctx.cr6.compare<int32_t>(ctx.r7.s32, ctx.r9.s32, ctx.xer);
	// bne cr6,0x8326b3f8
	if (!ctx.cr6.eq) goto loc_8326B3F8;
	// srawi r9,r8,31
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x7FFFFFFF) != 0);
	ctx.r9.s64 = ctx.r8.s32 >> 31;
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// xor r8,r8,r9
	ctx.r8.u64 = ctx.r8.u64 ^ ctx.r9.u64;
	// stw r10,64(r11)
	PPC_STORE_U32(ctx.r11.u32 + 64, ctx.r10.u32);
	// subf r3,r9,r8
	ctx.r3.s64 = ctx.r8.s64 - ctx.r9.s64;
	// b 0x8326b420
	goto loc_8326B420;
loc_8326B3F8:
	// rlwinm r8,r10,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stw r10,64(r11)
	PPC_STORE_U32(ctx.r11.u32 + 64, ctx.r10.u32);
	// stwx r9,r8,r11
	PPC_STORE_U32(ctx.r8.u32 + ctx.r11.u32, ctx.r9.u32);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// neg r3,r11
	ctx.r3.s64 = -ctx.r11.s64;
	// b 0x8326b420
	goto loc_8326B420;
loc_8326B414:
	// srawi r11,r8,31
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x7FFFFFFF) != 0);
	ctx.r11.s64 = ctx.r8.s32 >> 31;
	// xor r10,r8,r11
	ctx.r10.u64 = ctx.r8.u64 ^ ctx.r11.u64;
	// subf r3,r11,r10
	ctx.r3.s64 = ctx.r10.s64 - ctx.r11.s64;
loc_8326B420:
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

__attribute__((alias("__imp__sub_8326B438"))) PPC_WEAK_FUNC(sub_8326B438);
PPC_FUNC_IMPL(__imp__sub_8326B438) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x833a0178
	ctx.lr = 0x8326B440;
	__savegprlr_16(ctx, base);
	// stwu r1,-256(r1)
	ea = -256 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-31827
	ctx.r10.s64 = -2085814272;
	// lwz r9,4(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// li r21,-1
	ctx.r21.s64 = -1;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// stw r11,9752(r10)
	PPC_STORE_U32(ctx.r10.u32 + 9752, ctx.r11.u32);
	// mr r25,r6
	ctx.r25.u64 = ctx.r6.u64;
	// li r18,0
	ctx.r18.s64 = 0;
	// mr r16,r21
	ctx.r16.u64 = ctx.r21.u64;
	// li r23,0
	ctx.r23.s64 = 0;
	// li r24,0
	ctx.r24.s64 = 0;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x8326b488
	if (!ctx.cr6.eq) goto loc_8326B488;
loc_8326B480:
	// li r3,-1
	ctx.r3.s64 = -1;
	// b 0x8326b680
	goto loc_8326B680;
loc_8326B488:
	// addi r6,r1,100
	ctx.r6.s64 = ctx.r1.s64 + 100;
	// lwz r4,4(r28)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// addi r5,r1,104
	ctx.r5.s64 = ctx.r1.s64 + 104;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8326ae50
	ctx.lr = 0x8326B49C;
	sub_8326AE50(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x8326b480
	if (ctx.cr0.eq) goto loc_8326B480;
	// addi r29,r31,60
	ctx.r29.s64 = ctx.r31.s64 + 60;
	// lwz r5,0(r28)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x8326afe8
	ctx.lr = 0x8326B4B8;
	sub_8326AFE8(ctx, base);
	// mr. r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// blt 0x8326b480
	if (ctx.cr0.lt) goto loc_8326B480;
	// stw r30,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r30.u32);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// stw r30,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r30.u32);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8326ad70
	ctx.lr = 0x8326B4D8;
	sub_8326AD70(ctx, base);
	// lwz r11,68(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 68);
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// rlwinm r11,r11,1,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0x1;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// sth r11,42(r31)
	PPC_STORE_U16(ctx.r31.u32 + 42, ctx.r11.u16);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,4(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 4);
	// stw r11,0(r27)
	PPC_STORE_U32(ctx.r27.u32 + 0, ctx.r11.u32);
	// bl 0x8326b320
	ctx.lr = 0x8326B4FC;
	sub_8326B320(ctx, base);
	// mr r19,r3
	ctx.r19.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// blt cr6,0x8326b67c
	if (ctx.cr6.lt) goto loc_8326B67C;
	// lwz r26,100(r1)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// lwz r17,104(r1)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
loc_8326B510:
	// lwz r11,96(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt cr6,0x8326b638
	if (ctx.cr6.lt) goto loc_8326B638;
	// mr r22,r11
	ctx.r22.u64 = ctx.r11.u64;
	// addi r29,r31,44
	ctx.r29.s64 = ctx.r31.s64 + 44;
loc_8326B524:
	// mr r5,r22
	ctx.r5.u64 = ctx.r22.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8326add8
	ctx.lr = 0x8326B534;
	sub_8326ADD8(ctx, base);
	// lwz r11,52(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	// mulli r30,r18,24
	ctx.r30.s64 = ctx.r18.s64 * 24;
	// neg r5,r11
	ctx.r5.s64 = -ctx.r11.s64;
	// lwz r20,48(r31)
	ctx.r20.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
loc_8326B544:
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8326add8
	ctx.lr = 0x8326B550;
	sub_8326ADD8(ctx, base);
	// lhz r9,0(r29)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r29.u32 + 0);
	// cmpw cr6,r17,r9
	ctx.cr6.compare<int32_t>(ctx.r17.s32, ctx.r9.s32, ctx.xer);
	// beq cr6,0x8326b564
	if (ctx.cr6.eq) goto loc_8326B564;
	// cmpwi cr6,r17,-1
	ctx.cr6.compare<int32_t>(ctx.r17.s32, -1, ctx.xer);
	// bne cr6,0x8326b61c
	if (!ctx.cr6.eq) goto loc_8326B61C;
loc_8326B564:
	// lwz r11,12(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 12);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8326b5c4
	if (ctx.cr6.eq) goto loc_8326B5C4;
	// lwz r10,16(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 16);
	// cmpw cr6,r18,r10
	ctx.cr6.compare<int32_t>(ctx.r18.s32, ctx.r10.s32, ctx.xer);
	// bge cr6,0x8326b480
	if (!ctx.cr6.lt) goto loc_8326B480;
	// add r11,r30,r11
	ctx.r11.u64 = ctx.r30.u64 + ctx.r11.u64;
	// stw r25,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r25.u32);
	// mr r10,r26
	ctx.r10.u64 = ctx.r26.u64;
	// stw r21,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r21.u32);
	// stw r11,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r11.u32);
	// addi r8,r1,104
	ctx.r8.s64 = ctx.r1.s64 + 104;
	// mr r7,r28
	ctx.r7.u64 = ctx.r28.u64;
	// mr r6,r24
	ctx.r6.u64 = ctx.r24.u64;
	// mr r5,r23
	ctx.r5.u64 = ctx.r23.u64;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8326b138
	ctx.lr = 0x8326B5AC;
	sub_8326B138(ctx, base);
	// cmpwi cr6,r3,2
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 2, ctx.xer);
	// beq cr6,0x8326b688
	if (ctx.cr6.eq) goto loc_8326B688;
	// lwz r11,12(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 12);
	// lwz r24,52(r31)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	// add r23,r11,r30
	ctx.r23.u64 = ctx.r11.u64 + ctx.r30.u64;
	// b 0x8326b5fc
	goto loc_8326B5FC;
loc_8326B5C4:
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r25,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r25.u32);
	// mr r10,r26
	ctx.r10.u64 = ctx.r26.u64;
	// stw r21,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r21.u32);
	// addi r8,r1,104
	ctx.r8.s64 = ctx.r1.s64 + 104;
	// stw r11,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r11.u32);
	// mr r7,r28
	ctx.r7.u64 = ctx.r28.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8326b138
	ctx.lr = 0x8326B5F4;
	sub_8326B138(ctx, base);
	// cmpwi cr6,r3,2
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 2, ctx.xer);
	// beq cr6,0x8326b688
	if (ctx.cr6.eq) goto loc_8326B688;
loc_8326B5FC:
	// lwz r11,108(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	// cmpw cr6,r11,r16
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r16.s32, ctx.xer);
	// ble cr6,0x8326b60c
	if (!ctx.cr6.gt) goto loc_8326B60C;
	// mr r16,r11
	ctx.r16.u64 = ctx.r11.u64;
loc_8326B60C:
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x8326b61c
	if (ctx.cr6.eq) goto loc_8326B61C;
	// addi r18,r18,1
	ctx.r18.s64 = ctx.r18.s64 + 1;
	// addi r30,r30,24
	ctx.r30.s64 = ctx.r30.s64 + 24;
loc_8326B61C:
	// lwz r5,48(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// bgt cr6,0x8326b544
	if (ctx.cr6.gt) goto loc_8326B544;
	// cmpwi cr6,r20,0
	ctx.cr6.compare<int32_t>(ctx.r20.s32, 0, ctx.xer);
	// ble cr6,0x8326b638
	if (!ctx.cr6.gt) goto loc_8326B638;
	// addi r22,r22,1
	ctx.r22.s64 = ctx.r22.s64 + 1;
	// b 0x8326b524
	goto loc_8326B524;
loc_8326B638:
	// cmpwi cr6,r19,0
	ctx.cr6.compare<int32_t>(ctx.r19.s32, 0, ctx.xer);
	// ble cr6,0x8326b668
	if (!ctx.cr6.gt) goto loc_8326B668;
	// lwz r11,36(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// cmpw cr6,r11,r19
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r19.s32, ctx.xer);
	// beq cr6,0x8326b668
	if (ctx.cr6.eq) goto loc_8326B668;
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// mr r4,r19
	ctx.r4.u64 = ctx.r19.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8326b320
	ctx.lr = 0x8326B65C;
	sub_8326B320(ctx, base);
	// mr r19,r3
	ctx.r19.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// bge cr6,0x8326b510
	if (!ctx.cr6.lt) goto loc_8326B510;
loc_8326B668:
	// cmpwi cr6,r16,0
	ctx.cr6.compare<int32_t>(ctx.r16.s32, 0, ctx.xer);
	// ble cr6,0x8326b67c
	if (!ctx.cr6.gt) goto loc_8326B67C;
	// lwz r11,0(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// add r11,r11,r16
	ctx.r11.u64 = ctx.r11.u64 + ctx.r16.u64;
	// stw r11,0(r27)
	PPC_STORE_U32(ctx.r27.u32 + 0, ctx.r11.u32);
loc_8326B67C:
	// mr r3,r18
	ctx.r3.u64 = ctx.r18.u64;
loc_8326B680:
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// b 0x833a01c8
	__restgprlr_16(ctx, base);
	return;
loc_8326B688:
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x8326b680
	goto loc_8326B680;
}

__attribute__((alias("__imp__sub_8326B690"))) PPC_WEAK_FUNC(sub_8326B690);
PPC_FUNC_IMPL(__imp__sub_8326B690) {
	PPC_FUNC_PROLOGUE();
	// li r11,0
	ctx.r11.s64 = 0;
	// std r11,8(r3)
	PPC_STORE_U64(ctx.r3.u32 + 8, ctx.r11.u64);
	// std r11,16(r3)
	PPC_STORE_U64(ctx.r3.u32 + 16, ctx.r11.u64);
	// std r11,24(r3)
	PPC_STORE_U64(ctx.r3.u32 + 24, ctx.r11.u64);
	// std r11,32(r3)
	PPC_STORE_U64(ctx.r3.u32 + 32, ctx.r11.u64);
	// std r11,40(r3)
	PPC_STORE_U64(ctx.r3.u32 + 40, ctx.r11.u64);
	// std r11,48(r3)
	PPC_STORE_U64(ctx.r3.u32 + 48, ctx.r11.u64);
	// std r11,56(r3)
	PPC_STORE_U64(ctx.r3.u32 + 56, ctx.r11.u64);
	// std r11,64(r3)
	PPC_STORE_U64(ctx.r3.u32 + 64, ctx.r11.u64);
	// stw r11,136(r3)
	PPC_STORE_U32(ctx.r3.u32 + 136, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8326B6BC"))) PPC_WEAK_FUNC(sub_8326B6BC);
PPC_FUNC_IMPL(__imp__sub_8326B6BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8326B6C0"))) PPC_WEAK_FUNC(sub_8326B6C0);
PPC_FUNC_IMPL(__imp__sub_8326B6C0) {
	PPC_FUNC_PROLOGUE();
	// ld r3,16(r3)
	ctx.r3.u64 = PPC_LOAD_U64(ctx.r3.u32 + 16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8326B6C8"))) PPC_WEAK_FUNC(sub_8326B6C8);
PPC_FUNC_IMPL(__imp__sub_8326B6C8) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,1848
	ctx.r3.s64 = ctx.r3.s64 + 1848;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8326B6D0"))) PPC_WEAK_FUNC(sub_8326B6D0);
PPC_FUNC_IMPL(__imp__sub_8326B6D0) {
	PPC_FUNC_PROLOGUE();
	// li r11,0
	ctx.r11.s64 = 0;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8326b6e4
	if (ctx.cr6.eq) goto loc_8326B6E4;
	// ld r11,16(r3)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r3.u32 + 16);
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
loc_8326B6E4:
	// addi r3,r11,488
	ctx.r3.s64 = ctx.r11.s64 + 488;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8326B6EC"))) PPC_WEAK_FUNC(sub_8326B6EC);
PPC_FUNC_IMPL(__imp__sub_8326B6EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8326B6F0"))) PPC_WEAK_FUNC(sub_8326B6F0);
PPC_FUNC_IMPL(__imp__sub_8326B6F0) {
	PPC_FUNC_PROLOGUE();
	// ld r3,40(r3)
	ctx.r3.u64 = PPC_LOAD_U64(ctx.r3.u32 + 40);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8326B6F8"))) PPC_WEAK_FUNC(sub_8326B6F8);
PPC_FUNC_IMPL(__imp__sub_8326B6F8) {
	PPC_FUNC_PROLOGUE();
	// ld r3,48(r3)
	ctx.r3.u64 = PPC_LOAD_U64(ctx.r3.u32 + 48);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8326B700"))) PPC_WEAK_FUNC(sub_8326B700);
PPC_FUNC_IMPL(__imp__sub_8326B700) {
	PPC_FUNC_PROLOGUE();
	// ld r3,56(r3)
	ctx.r3.u64 = PPC_LOAD_U64(ctx.r3.u32 + 56);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8326B708"))) PPC_WEAK_FUNC(sub_8326B708);
PPC_FUNC_IMPL(__imp__sub_8326B708) {
	PPC_FUNC_PROLOGUE();
	// lhz r3,110(r3)
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r3.u32 + 110);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8326B710"))) PPC_WEAK_FUNC(sub_8326B710);
PPC_FUNC_IMPL(__imp__sub_8326B710) {
	PPC_FUNC_PROLOGUE();
	// lhz r3,112(r3)
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r3.u32 + 112);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8326B718"))) PPC_WEAK_FUNC(sub_8326B718);
PPC_FUNC_IMPL(__imp__sub_8326B718) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32219
	ctx.r11.s64 = -2111504384;
	// lis r10,-31827
	ctx.r10.s64 = -2085814272;
	// addi r11,r11,7176
	ctx.r11.s64 = ctx.r11.s64 + 7176;
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// stw r11,9680(r10)
	PPC_STORE_U32(ctx.r10.u32 + 9680, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8326B734"))) PPC_WEAK_FUNC(sub_8326B734);
PPC_FUNC_IMPL(__imp__sub_8326B734) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8326B738"))) PPC_WEAK_FUNC(sub_8326B738);
PPC_FUNC_IMPL(__imp__sub_8326B738) {
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
	// ld r11,16(r5)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r5.u32 + 16);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lbz r10,4(r4)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r4.u32 + 4);
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// cmplwi r10,0
	ctx.cr0.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// addi r11,r11,-16
	ctx.r11.s64 = ctx.r11.s64 + -16;
	// bne 0x8326b79c
	if (!ctx.cr0.eq) goto loc_8326B79C;
	// addi r9,r4,16
	ctx.r9.s64 = ctx.r4.s64 + 16;
	// li r10,25951
	ctx.r10.s64 = 25951;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8326b79c
	if (ctx.cr6.eq) goto loc_8326B79C;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// addi r11,r9,-1
	ctx.r11.s64 = ctx.r9.s64 + -1;
loc_8326B784:
	// lbz r9,1(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 1);
	// xor r9,r9,r10
	ctx.r9.u64 = ctx.r9.u64 ^ ctx.r10.u64;
	// mulli r10,r10,16661
	ctx.r10.s64 = ctx.r10.s64 * 16661;
	// clrlwi r9,r9,24
	ctx.r9.u64 = ctx.r9.u32 & 0xFF;
	// stbu r9,1(r11)
	ea = 1 + ctx.r11.u32;
	PPC_STORE_U8(ea, ctx.r9.u8);
	ctx.r11.u32 = ea;
	// bdnz 0x8326b784
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8326B784;
loc_8326B79C:
	// ld r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r31.u32 + 16);
	// addi r4,r4,16
	ctx.r4.s64 = ctx.r4.s64 + 16;
	// mr r3,r6
	ctx.r3.u64 = ctx.r6.u64;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x8325a238
	ctx.lr = 0x8326B7B0;
	sub_8325A238(ctx, base);
	// stw r3,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r3.u32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne 0x8326b7c8
	if (!ctx.cr0.eq) goto loc_8326B7C8;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,72(r31)
	PPC_STORE_U32(ctx.r31.u32 + 72, ctx.r11.u32);
	// b 0x8326b7d8
	goto loc_8326B7D8;
loc_8326B7C8:
	// bl 0x83112010
	ctx.lr = 0x8326B7CC;
	sub_83112010(ctx, base);
	// stw r3,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r3.u32);
	// stw r31,8(r30)
	PPC_STORE_U32(ctx.r30.u32 + 8, ctx.r31.u32);
	// li r3,1
	ctx.r3.s64 = 1;
loc_8326B7D8:
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

__attribute__((alias("__imp__sub_8326B7F0"))) PPC_WEAK_FUNC(sub_8326B7F0);
PPC_FUNC_IMPL(__imp__sub_8326B7F0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x833a0194
	ctx.lr = 0x8326B7F8;
	__savegprlr_23(ctx, base);
	// stwu r1,-224(r1)
	ea = -224 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lhz r10,108(r5)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r5.u32 + 108);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// ld r11,48(r5)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r5.u32 + 48);
	// mr r25,r5
	ctx.r25.u64 = ctx.r5.u64;
	// mr r24,r6
	ctx.r24.u64 = ctx.r6.u64;
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// sth r10,16(r3)
	PPC_STORE_U16(ctx.r3.u32 + 16, ctx.r10.u16);
	// addi r11,r11,-16
	ctx.r11.s64 = ctx.r11.s64 + -16;
	// lwz r10,0(r5)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// stw r10,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r10.u32);
	// lbz r10,4(r4)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r4.u32 + 4);
	// cmplwi r10,0
	ctx.cr0.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne 0x8326b860
	if (!ctx.cr0.eq) goto loc_8326B860;
	// addi r9,r4,16
	ctx.r9.s64 = ctx.r4.s64 + 16;
	// li r10,25951
	ctx.r10.s64 = 25951;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8326b860
	if (ctx.cr6.eq) goto loc_8326B860;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// addi r11,r9,-1
	ctx.r11.s64 = ctx.r9.s64 + -1;
loc_8326B848:
	// lbz r9,1(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 1);
	// xor r9,r9,r10
	ctx.r9.u64 = ctx.r9.u64 ^ ctx.r10.u64;
	// mulli r10,r10,16661
	ctx.r10.s64 = ctx.r10.s64 * 16661;
	// clrlwi r9,r9,24
	ctx.r9.u64 = ctx.r9.u32 & 0xFF;
	// stbu r9,1(r11)
	ea = 1 + ctx.r11.u32;
	PPC_STORE_U8(ea, ctx.r9.u8);
	ctx.r11.u32 = ea;
	// bdnz 0x8326b848
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8326B848;
loc_8326B860:
	// ld r11,48(r25)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r25.u32 + 48);
	// addi r4,r4,16
	ctx.r4.s64 = ctx.r4.s64 + 16;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x8325a238
	ctx.lr = 0x8326B874;
	sub_8325A238(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// bne 0x8326b88c
	if (!ctx.cr0.eq) goto loc_8326B88C;
	// li r11,0
	ctx.r11.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r11,76(r25)
	PPC_STORE_U32(ctx.r25.u32 + 76, ctx.r11.u32);
	// b 0x8326b9a0
	goto loc_8326B9A0;
loc_8326B88C:
	// lhz r11,112(r25)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r25.u32 + 112);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x8326b984
	if (!ctx.cr0.eq) goto loc_8326B984;
	// lis r11,-32219
	ctx.r11.s64 = -2111504384;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,7504
	ctx.r4.s64 = ctx.r11.s64 + 7504;
	// bl 0x83259340
	ctx.lr = 0x8326B8A8;
	sub_83259340(ctx, base);
	// mr. r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// li r23,0
	ctx.r23.s64 = 0;
	// bge 0x8326b8c0
	if (!ctx.cr0.lt) goto loc_8326B8C0;
	// li r27,-1
	ctx.r27.s64 = -1;
	// mr r26,r23
	ctx.r26.u64 = ctx.r23.u64;
	// b 0x8326b8d8
	goto loc_8326B8D8;
loc_8326B8C0:
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83259bb0
	ctx.lr = 0x8326B8D0;
	sub_83259BB0(ctx, base);
	// lwz r27,92(r1)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// lwz r26,88(r1)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
loc_8326B8D8:
	// lis r11,-32219
	ctx.r11.s64 = -2111504384;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,7496
	ctx.r4.s64 = ctx.r11.s64 + 7496;
	// bl 0x83259340
	ctx.lr = 0x8326B8E8;
	sub_83259340(ctx, base);
	// mr. r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// bge 0x8326b8fc
	if (!ctx.cr0.lt) goto loc_8326B8FC;
	// li r30,-1
	ctx.r30.s64 = -1;
	// mr r29,r23
	ctx.r29.u64 = ctx.r23.u64;
	// b 0x8326b914
	goto loc_8326B914;
loc_8326B8FC:
	// addi r6,r1,112
	ctx.r6.s64 = ctx.r1.s64 + 112;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83259bb0
	ctx.lr = 0x8326B90C;
	sub_83259BB0(ctx, base);
	// lwz r30,124(r1)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 124);
	// lwz r29,120(r1)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r1.u32 + 120);
loc_8326B914:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83259ff8
	ctx.lr = 0x8326B91C;
	sub_83259FF8(ctx, base);
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x8325a238
	ctx.lr = 0x8326B92C;
	sub_8325A238(ctx, base);
	// stw r3,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r3.u32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne 0x8326b940
	if (!ctx.cr0.eq) goto loc_8326B940;
	// stw r23,76(r25)
	PPC_STORE_U32(ctx.r25.u32 + 76, ctx.r23.u32);
	// b 0x8326b9a0
	goto loc_8326B9A0;
loc_8326B940:
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x8325a238
	ctx.lr = 0x8326B950;
	sub_8325A238(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// stw r3,4(r28)
	PPC_STORE_U32(ctx.r28.u32 + 4, ctx.r3.u32);
	// bne 0x8326b970
	if (!ctx.cr0.eq) goto loc_8326B970;
	// stw r23,76(r25)
	PPC_STORE_U32(ctx.r25.u32 + 76, ctx.r23.u32);
	// lwz r3,0(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// bl 0x83259ff8
	ctx.lr = 0x8326B968;
	sub_83259FF8(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x8326b9a0
	goto loc_8326B9A0;
loc_8326B970:
	// lwz r3,0(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// bl 0x83112010
	ctx.lr = 0x8326B978;
	sub_83112010(ctx, base);
	// stw r3,8(r28)
	PPC_STORE_U32(ctx.r28.u32 + 8, ctx.r3.u32);
	// lwz r3,4(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// b 0x8326b994
	goto loc_8326B994;
loc_8326B984:
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r31,4(r28)
	PPC_STORE_U32(ctx.r28.u32 + 4, ctx.r31.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,8(r28)
	PPC_STORE_U32(ctx.r28.u32 + 8, ctx.r11.u32);
loc_8326B994:
	// bl 0x83112010
	ctx.lr = 0x8326B998;
	sub_83112010(ctx, base);
	// stw r3,12(r28)
	PPC_STORE_U32(ctx.r28.u32 + 12, ctx.r3.u32);
	// li r3,1
	ctx.r3.s64 = 1;
loc_8326B9A0:
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x833a01e4
	__restgprlr_23(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8326B9A8"))) PPC_WEAK_FUNC(sub_8326B9A8);
PPC_FUNC_IMPL(__imp__sub_8326B9A8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x833a01a4
	ctx.lr = 0x8326B9B0;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// clrlwi r30,r5,16
	ctx.r30.u64 = ctx.r5.u32 & 0xFFFF;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// mr r27,r5
	ctx.r27.u64 = ctx.r5.u64;
	// lwz r5,8(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// bl 0x8326a840
	ctx.lr = 0x8326B9D4;
	sub_8326A840(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r5,12(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// bl 0x8326a840
	ctx.lr = 0x8326B9E8;
	sub_8326A840(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// sth r27,0(r28)
	PPC_STORE_U16(ctx.r28.u32 + 0, ctx.r27.u16);
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// blt cr6,0x8326baac
	if (ctx.cr6.lt) goto loc_8326BAAC;
	// lis r11,-32768
	ctx.r11.s64 = -2147483648;
	// cmpw cr6,r3,r11
	ctx.cr6.compare<int32_t>(ctx.r3.s32, ctx.r11.s32, ctx.xer);
	// beq cr6,0x8326ba08
	if (ctx.cr6.eq) goto loc_8326BA08;
	// neg r29,r29
	ctx.r29.s64 = -ctx.r29.s64;
loc_8326BA08:
	// lwz r11,24(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// lhz r6,16(r31)
	ctx.r6.u64 = PPC_LOAD_U16(ctx.r31.u32 + 16);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// ble cr6,0x8326ba2c
	if (!ctx.cr6.gt) goto loc_8326BA2C;
	// bl 0x8326aa38
	ctx.lr = 0x8326BA28;
	sub_8326AA38(ctx, base);
	// b 0x8326ba30
	goto loc_8326BA30;
loc_8326BA2C:
	// bl 0x8326a978
	ctx.lr = 0x8326BA30;
	sub_8326A978(ctx, base);
loc_8326BA30:
	// std r3,16(r28)
	PPC_STORE_U64(ctx.r28.u32 + 16, ctx.r3.u64);
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x83259480
	ctx.lr = 0x8326BA44;
	sub_83259480(ctx, base);
	// clrlwi r11,r3,16
	ctx.r11.u64 = ctx.r3.u32 & 0xFFFF;
	// stw r11,4(r28)
	PPC_STORE_U32(ctx.r28.u32 + 4, ctx.r11.u32);
	// li r5,2
	ctx.r5.s64 = 2;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x83259480
	ctx.lr = 0x8326BA5C;
	sub_83259480(ctx, base);
	// clrlwi r11,r3,16
	ctx.r11.u64 = ctx.r3.u32 & 0xFFFF;
	// stw r11,8(r28)
	PPC_STORE_U32(ctx.r28.u32 + 8, ctx.r11.u32);
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x83259338
	ctx.lr = 0x8326BA6C;
	sub_83259338(ctx, base);
	// li r27,0
	ctx.r27.s64 = 0;
	// cmplwi cr6,r3,3
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 3, ctx.xer);
	// ble cr6,0x8326ba90
	if (!ctx.cr6.gt) goto loc_8326BA90;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
loc_8326BA80:
	// li r5,3
	ctx.r5.s64 = 3;
	// bl 0x83259558
	ctx.lr = 0x8326BA88;
	sub_83259558(ctx, base);
	// stw r3,24(r28)
	PPC_STORE_U32(ctx.r28.u32 + 24, ctx.r3.u32);
	// b 0x8326ba94
	goto loc_8326BA94;
loc_8326BA90:
	// stw r27,24(r28)
	PPC_STORE_U32(ctx.r28.u32 + 24, ctx.r27.u32);
loc_8326BA94:
	// lwz r11,4(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8326baa4
	if (!ctx.cr6.eq) goto loc_8326BAA4;
	// stw r27,24(r28)
	PPC_STORE_U32(ctx.r28.u32 + 24, ctx.r27.u32);
loc_8326BAA4:
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x8326bb3c
	goto loc_8326BB3C;
loc_8326BAAC:
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// blt cr6,0x8326bb38
	if (ctx.cr6.lt) goto loc_8326BB38;
	// lis r11,-32768
	ctx.r11.s64 = -2147483648;
	// cmpw cr6,r30,r11
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r11.s32, ctx.xer);
	// beq cr6,0x8326bac4
	if (ctx.cr6.eq) goto loc_8326BAC4;
	// neg r30,r30
	ctx.r30.s64 = -ctx.r30.s64;
loc_8326BAC4:
	// lwz r11,24(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// lhz r6,16(r31)
	ctx.r6.u64 = PPC_LOAD_U16(ctx.r31.u32 + 16);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// ble cr6,0x8326bae8
	if (!ctx.cr6.gt) goto loc_8326BAE8;
	// bl 0x8326aa38
	ctx.lr = 0x8326BAE4;
	sub_8326AA38(ctx, base);
	// b 0x8326baec
	goto loc_8326BAEC;
loc_8326BAE8:
	// bl 0x8326a978
	ctx.lr = 0x8326BAEC;
	sub_8326A978(ctx, base);
loc_8326BAEC:
	// std r3,16(r28)
	PPC_STORE_U64(ctx.r28.u32 + 16, ctx.r3.u64);
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// bl 0x83259558
	ctx.lr = 0x8326BB00;
	sub_83259558(ctx, base);
	// stw r3,4(r28)
	PPC_STORE_U32(ctx.r28.u32 + 4, ctx.r3.u32);
	// li r5,2
	ctx.r5.s64 = 2;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x83259558
	ctx.lr = 0x8326BB14;
	sub_83259558(ctx, base);
	// stw r3,8(r28)
	PPC_STORE_U32(ctx.r28.u32 + 8, ctx.r3.u32);
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// bl 0x83259338
	ctx.lr = 0x8326BB20;
	sub_83259338(ctx, base);
	// li r27,0
	ctx.r27.s64 = 0;
	// cmplwi cr6,r3,3
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 3, ctx.xer);
	// ble cr6,0x8326ba90
	if (!ctx.cr6.gt) goto loc_8326BA90;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// b 0x8326ba80
	goto loc_8326BA80;
loc_8326BB38:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8326BB3C:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x833a01f4
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8326BB44"))) PPC_WEAK_FUNC(sub_8326BB44);
PPC_FUNC_IMPL(__imp__sub_8326BB44) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8326BB48"))) PPC_WEAK_FUNC(sub_8326BB48);
PPC_FUNC_IMPL(__imp__sub_8326BB48) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x833a018c
	ctx.lr = 0x8326BB50;
	__savegprlr_21(ctx, base);
	// stwu r1,-272(r1)
	ea = -272 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r10,0(r5)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// ld r11,64(r5)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r5.u32 + 64);
	// mr r23,r5
	ctx.r23.u64 = ctx.r5.u64;
	// stw r7,28(r3)
	PPC_STORE_U32(ctx.r3.u32 + 28, ctx.r7.u32);
	// mr r22,r6
	ctx.r22.u64 = ctx.r6.u64;
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// addi r11,r11,-16
	ctx.r11.s64 = ctx.r11.s64 + -16;
	// lhz r10,108(r5)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r5.u32 + 108);
	// sth r10,40(r3)
	PPC_STORE_U16(ctx.r3.u32 + 40, ctx.r10.u16);
	// lbz r10,4(r4)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r4.u32 + 4);
	// cmplwi r10,0
	ctx.cr0.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne 0x8326bbbc
	if (!ctx.cr0.eq) goto loc_8326BBBC;
	// addi r9,r4,16
	ctx.r9.s64 = ctx.r4.s64 + 16;
	// li r10,25951
	ctx.r10.s64 = 25951;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8326bbbc
	if (ctx.cr6.eq) goto loc_8326BBBC;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// addi r11,r9,-1
	ctx.r11.s64 = ctx.r9.s64 + -1;
loc_8326BBA4:
	// lbz r9,1(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 1);
	// xor r9,r9,r10
	ctx.r9.u64 = ctx.r9.u64 ^ ctx.r10.u64;
	// mulli r10,r10,16661
	ctx.r10.s64 = ctx.r10.s64 * 16661;
	// clrlwi r9,r9,24
	ctx.r9.u64 = ctx.r9.u32 & 0xFF;
	// stbu r9,1(r11)
	ea = 1 + ctx.r11.u32;
	PPC_STORE_U8(ea, ctx.r9.u8);
	ctx.r11.u32 = ea;
	// bdnz 0x8326bba4
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8326BBA4;
loc_8326BBBC:
	// ld r11,64(r23)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r23.u32 + 64);
	// addi r4,r4,16
	ctx.r4.s64 = ctx.r4.s64 + 16;
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x8325a238
	ctx.lr = 0x8326BBD0;
	sub_8325A238(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// bne 0x8326bbe8
	if (!ctx.cr0.eq) goto loc_8326BBE8;
	// li r11,0
	ctx.r11.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r11,80(r23)
	PPC_STORE_U32(ctx.r23.u32 + 80, ctx.r11.u32);
	// b 0x8326bd38
	goto loc_8326BD38;
loc_8326BBE8:
	// lis r11,-32219
	ctx.r11.s64 = -2111504384;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,7532
	ctx.r4.s64 = ctx.r11.s64 + 7532;
	// bl 0x83259340
	ctx.lr = 0x8326BBF8;
	sub_83259340(ctx, base);
	// mr. r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// li r21,0
	ctx.r21.s64 = 0;
	// bge 0x8326bc10
	if (!ctx.cr0.lt) goto loc_8326BC10;
	// li r25,-1
	ctx.r25.s64 = -1;
	// mr r24,r21
	ctx.r24.u64 = ctx.r21.u64;
	// b 0x8326bc28
	goto loc_8326BC28;
loc_8326BC10:
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83259bb0
	ctx.lr = 0x8326BC20;
	sub_83259BB0(ctx, base);
	// lwz r25,92(r1)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// lwz r24,88(r1)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
loc_8326BC28:
	// lis r11,-32219
	ctx.r11.s64 = -2111504384;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,7524
	ctx.r4.s64 = ctx.r11.s64 + 7524;
	// bl 0x83259340
	ctx.lr = 0x8326BC38;
	sub_83259340(ctx, base);
	// mr. r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// bge 0x8326bc4c
	if (!ctx.cr0.lt) goto loc_8326BC4C;
	// li r27,-1
	ctx.r27.s64 = -1;
	// mr r26,r21
	ctx.r26.u64 = ctx.r21.u64;
	// b 0x8326bc64
	goto loc_8326BC64;
loc_8326BC4C:
	// addi r6,r1,112
	ctx.r6.s64 = ctx.r1.s64 + 112;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83259bb0
	ctx.lr = 0x8326BC5C;
	sub_83259BB0(ctx, base);
	// lwz r27,124(r1)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r1.u32 + 124);
	// lwz r26,120(r1)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r1.u32 + 120);
loc_8326BC64:
	// lis r11,-32219
	ctx.r11.s64 = -2111504384;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,7512
	ctx.r4.s64 = ctx.r11.s64 + 7512;
	// bl 0x83259340
	ctx.lr = 0x8326BC74;
	sub_83259340(ctx, base);
	// mr. r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// bge 0x8326bc88
	if (!ctx.cr0.lt) goto loc_8326BC88;
	// li r29,-1
	ctx.r29.s64 = -1;
	// mr r28,r21
	ctx.r28.u64 = ctx.r21.u64;
	// b 0x8326bca0
	goto loc_8326BCA0;
loc_8326BC88:
	// addi r6,r1,144
	ctx.r6.s64 = ctx.r1.s64 + 144;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83259bb0
	ctx.lr = 0x8326BC98;
	sub_83259BB0(ctx, base);
	// lwz r29,156(r1)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r1.u32 + 156);
	// lwz r28,152(r1)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r1.u32 + 152);
loc_8326BCA0:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83259ff8
	ctx.lr = 0x8326BCA8;
	sub_83259FF8(ctx, base);
	// mr r5,r25
	ctx.r5.u64 = ctx.r25.u64;
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// bl 0x8325a238
	ctx.lr = 0x8326BCB8;
	sub_8325A238(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// stw r3,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r3.u32);
	// bne 0x8326bcd8
	if (!ctx.cr0.eq) goto loc_8326BCD8;
loc_8326BCC4:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8326acf8
	ctx.lr = 0x8326BCCC;
	sub_8326ACF8(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r21,80(r23)
	PPC_STORE_U32(ctx.r23.u32 + 80, ctx.r21.u32);
	// b 0x8326bd38
	goto loc_8326BD38;
loc_8326BCD8:
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// bl 0x8325a238
	ctx.lr = 0x8326BCE8;
	sub_8325A238(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// stw r3,8(r30)
	PPC_STORE_U32(ctx.r30.u32 + 8, ctx.r3.u32);
	// beq 0x8326bcc4
	if (ctx.cr0.eq) goto loc_8326BCC4;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// bl 0x8325a238
	ctx.lr = 0x8326BD04;
	sub_8325A238(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// stw r3,12(r30)
	PPC_STORE_U32(ctx.r30.u32 + 12, ctx.r3.u32);
	// beq 0x8326bcc4
	if (ctx.cr0.eq) goto loc_8326BCC4;
	// lwz r3,4(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// bl 0x83112010
	ctx.lr = 0x8326BD18;
	sub_83112010(ctx, base);
	// stw r3,16(r30)
	PPC_STORE_U32(ctx.r30.u32 + 16, ctx.r3.u32);
	// lwz r3,8(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// bl 0x83112010
	ctx.lr = 0x8326BD24;
	sub_83112010(ctx, base);
	// stw r3,20(r30)
	PPC_STORE_U32(ctx.r30.u32 + 20, ctx.r3.u32);
	// lwz r3,12(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// bl 0x83112010
	ctx.lr = 0x8326BD30;
	sub_83112010(ctx, base);
	// stw r3,24(r30)
	PPC_STORE_U32(ctx.r30.u32 + 24, ctx.r3.u32);
	// li r3,1
	ctx.r3.s64 = 1;
loc_8326BD38:
	// addi r1,r1,272
	ctx.r1.s64 = ctx.r1.s64 + 272;
	// b 0x833a01dc
	__restgprlr_21(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8326BD40"))) PPC_WEAK_FUNC(sub_8326BD40);
PPC_FUNC_IMPL(__imp__sub_8326BD40) {
	PPC_FUNC_PROLOGUE();
	// li r11,0
	ctx.r11.s64 = 0;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8326bd54
	if (ctx.cr6.eq) goto loc_8326BD54;
	// ld r11,64(r3)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r3.u32 + 64);
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
loc_8326BD54:
	// addi r3,r11,1512
	ctx.r3.s64 = ctx.r11.s64 + 1512;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8326BD5C"))) PPC_WEAK_FUNC(sub_8326BD5C);
PPC_FUNC_IMPL(__imp__sub_8326BD5C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8326BD60"))) PPC_WEAK_FUNC(sub_8326BD60);
PPC_FUNC_IMPL(__imp__sub_8326BD60) {
	PPC_FUNC_PROLOGUE();
	// li r11,0
	ctx.r11.s64 = 0;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8326bd74
	if (ctx.cr6.eq) goto loc_8326BD74;
	// ld r11,48(r3)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r3.u32 + 48);
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
loc_8326BD74:
	// addi r3,r11,1024
	ctx.r3.s64 = ctx.r11.s64 + 1024;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8326BD7C"))) PPC_WEAK_FUNC(sub_8326BD7C);
PPC_FUNC_IMPL(__imp__sub_8326BD7C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8326BD80"))) PPC_WEAK_FUNC(sub_8326BD80);
PPC_FUNC_IMPL(__imp__sub_8326BD80) {
	PPC_FUNC_PROLOGUE();
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// b 0x8326b738
	sub_8326B738(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8326BD94"))) PPC_WEAK_FUNC(sub_8326BD94);
PPC_FUNC_IMPL(__imp__sub_8326BD94) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8326BD98"))) PPC_WEAK_FUNC(sub_8326BD98);
PPC_FUNC_IMPL(__imp__sub_8326BD98) {
	PPC_FUNC_PROLOGUE();
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// b 0x8326b7f0
	sub_8326B7F0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8326BDAC"))) PPC_WEAK_FUNC(sub_8326BDAC);
PPC_FUNC_IMPL(__imp__sub_8326BDAC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8326BDB0"))) PPC_WEAK_FUNC(sub_8326BDB0);
PPC_FUNC_IMPL(__imp__sub_8326BDB0) {
	PPC_FUNC_PROLOGUE();
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// b 0x8326bb48
	sub_8326BB48(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8326BDC4"))) PPC_WEAK_FUNC(sub_8326BDC4);
PPC_FUNC_IMPL(__imp__sub_8326BDC4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8326BDC8"))) PPC_WEAK_FUNC(sub_8326BDC8);
PPC_FUNC_IMPL(__imp__sub_8326BDC8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x833a01ac
	ctx.lr = 0x8326BDD0;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lbz r10,0(r5)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r5.u32 + 0);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r11,r5
	ctx.r11.u64 = ctx.r5.u64;
	// cmplwi cr6,r10,67
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 67, ctx.xer);
	// bne cr6,0x8326be10
	if (!ctx.cr6.eq) goto loc_8326BE10;
	// lbz r10,1(r5)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r5.u32 + 1);
	// cmplwi cr6,r10,80
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 80, ctx.xer);
	// bne cr6,0x8326be10
	if (!ctx.cr6.eq) goto loc_8326BE10;
	// lbz r10,2(r5)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r5.u32 + 2);
	// cmplwi cr6,r10,75
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 75, ctx.xer);
	// bne cr6,0x8326be10
	if (!ctx.cr6.eq) goto loc_8326BE10;
	// lbz r10,3(r5)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r5.u32 + 3);
	// cmplwi cr6,r10,32
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 32, ctx.xer);
	// beq cr6,0x8326be18
	if (ctx.cr6.eq) goto loc_8326BE18;
loc_8326BE10:
	// li r3,2
	ctx.r3.s64 = 2;
	// b 0x8326c0e8
	goto loc_8326C0E8;
loc_8326BE18:
	// lbz r10,11(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 11);
	// lbz r9,10(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 10);
	// rotlwi r10,r10,8
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r10.u32, 8);
	// lbz r8,9(r11)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + 9);
	// lbz r7,8(r11)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r11.u32 + 8);
	// or r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 | ctx.r9.u64;
	// rlwinm r10,r10,8,0,23
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 8) & 0xFFFFFF00;
	// or r10,r10,r8
	ctx.r10.u64 = ctx.r10.u64 | ctx.r8.u64;
	// rlwinm r10,r10,8,0,23
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 8) & 0xFFFFFF00;
	// or r5,r10,r7
	ctx.r5.u64 = ctx.r10.u64 | ctx.r7.u64;
	// addi r10,r5,16
	ctx.r10.s64 = ctx.r5.s64 + 16;
	// cmplwi cr6,r10,2048
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 2048, ctx.xer);
	// ble cr6,0x8326be54
	if (!ctx.cr6.gt) goto loc_8326BE54;
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x8326c0e8
	goto loc_8326C0E8;
loc_8326BE54:
	// lbz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 4);
	// cmplwi r10,0
	ctx.cr0.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne 0x8326be90
	if (!ctx.cr0.eq) goto loc_8326BE90;
	// addi r10,r11,16
	ctx.r10.s64 = ctx.r11.s64 + 16;
	// li r9,25951
	ctx.r9.s64 = 25951;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x8326be90
	if (ctx.cr6.eq) goto loc_8326BE90;
	// mtctr r5
	ctx.ctr.u64 = ctx.r5.u64;
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
loc_8326BE78:
	// lbz r8,1(r10)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + 1);
	// xor r8,r8,r9
	ctx.r8.u64 = ctx.r8.u64 ^ ctx.r9.u64;
	// mulli r9,r9,16661
	ctx.r9.s64 = ctx.r9.s64 * 16661;
	// clrlwi r8,r8,24
	ctx.r8.u64 = ctx.r8.u32 & 0xFF;
	// stbu r8,1(r10)
	ea = 1 + ctx.r10.u32;
	PPC_STORE_U8(ea, ctx.r8.u8);
	ctx.r10.u32 = ea;
	// bdnz 0x8326be78
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8326BE78;
loc_8326BE90:
	// addi r4,r11,16
	ctx.r4.s64 = ctx.r11.s64 + 16;
	// mr r3,r6
	ctx.r3.u64 = ctx.r6.u64;
	// bl 0x8325a238
	ctx.lr = 0x8326BE9C;
	sub_8325A238(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// bne 0x8326beac
	if (!ctx.cr0.eq) goto loc_8326BEAC;
	// li r3,3
	ctx.r3.s64 = 3;
	// b 0x8326c0e8
	goto loc_8326C0E8;
loc_8326BEAC:
	// lis r11,-32219
	ctx.r11.s64 = -2111504384;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r5,r11,7728
	ctx.r5.s64 = ctx.r11.s64 + 7728;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8326a0e8
	ctx.lr = 0x8326BEC0;
	sub_8326A0E8(ctx, base);
	// stw r3,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r3.u32);
	// lis r10,-32219
	ctx.r10.s64 = -2111504384;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r5,r10,7716
	ctx.r5.s64 = ctx.r10.s64 + 7716;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8326a0e8
	ctx.lr = 0x8326BED8;
	sub_8326A0E8(ctx, base);
	// std r3,8(r30)
	PPC_STORE_U64(ctx.r30.u32 + 8, ctx.r3.u64);
	// lis r11,-32219
	ctx.r11.s64 = -2111504384;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r5,r11,7708
	ctx.r5.s64 = ctx.r11.s64 + 7708;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8326a0e8
	ctx.lr = 0x8326BEF0;
	sub_8326A0E8(ctx, base);
	// std r3,16(r30)
	PPC_STORE_U64(ctx.r30.u32 + 16, ctx.r3.u64);
	// lis r11,-32219
	ctx.r11.s64 = -2111504384;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r5,r11,7696
	ctx.r5.s64 = ctx.r11.s64 + 7696;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8326a0e8
	ctx.lr = 0x8326BF08;
	sub_8326A0E8(ctx, base);
	// std r3,24(r30)
	PPC_STORE_U64(ctx.r30.u32 + 24, ctx.r3.u64);
	// lis r11,-32219
	ctx.r11.s64 = -2111504384;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r5,r11,7684
	ctx.r5.s64 = ctx.r11.s64 + 7684;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8326a0e8
	ctx.lr = 0x8326BF20;
	sub_8326A0E8(ctx, base);
	// std r3,32(r30)
	PPC_STORE_U64(ctx.r30.u32 + 32, ctx.r3.u64);
	// lis r11,-32219
	ctx.r11.s64 = -2111504384;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r5,r11,7672
	ctx.r5.s64 = ctx.r11.s64 + 7672;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8326a0e8
	ctx.lr = 0x8326BF38;
	sub_8326A0E8(ctx, base);
	// std r3,40(r30)
	PPC_STORE_U64(ctx.r30.u32 + 40, ctx.r3.u64);
	// lis r11,-32219
	ctx.r11.s64 = -2111504384;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r5,r11,7660
	ctx.r5.s64 = ctx.r11.s64 + 7660;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8326a0e8
	ctx.lr = 0x8326BF50;
	sub_8326A0E8(ctx, base);
	// std r3,48(r30)
	PPC_STORE_U64(ctx.r30.u32 + 48, ctx.r3.u64);
	// lis r11,-32219
	ctx.r11.s64 = -2111504384;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r5,r11,7648
	ctx.r5.s64 = ctx.r11.s64 + 7648;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8326a0e8
	ctx.lr = 0x8326BF68;
	sub_8326A0E8(ctx, base);
	// std r3,56(r30)
	PPC_STORE_U64(ctx.r30.u32 + 56, ctx.r3.u64);
	// lis r11,-32219
	ctx.r11.s64 = -2111504384;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r5,r11,7636
	ctx.r5.s64 = ctx.r11.s64 + 7636;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8326a0e8
	ctx.lr = 0x8326BF80;
	sub_8326A0E8(ctx, base);
	// std r3,64(r30)
	PPC_STORE_U64(ctx.r30.u32 + 64, ctx.r3.u64);
	// lis r11,-32219
	ctx.r11.s64 = -2111504384;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r5,r11,7628
	ctx.r5.s64 = ctx.r11.s64 + 7628;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8326a198
	ctx.lr = 0x8326BF98;
	sub_8326A198(ctx, base);
	// sth r3,96(r30)
	PPC_STORE_U16(ctx.r30.u32 + 96, ctx.r3.u16);
	// lis r11,-32219
	ctx.r11.s64 = -2111504384;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r5,r11,7616
	ctx.r5.s64 = ctx.r11.s64 + 7616;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8326a198
	ctx.lr = 0x8326BFB0;
	sub_8326A198(ctx, base);
	// sth r3,98(r30)
	PPC_STORE_U16(ctx.r30.u32 + 98, ctx.r3.u16);
	// lis r11,-32219
	ctx.r11.s64 = -2111504384;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r5,r11,7480
	ctx.r5.s64 = ctx.r11.s64 + 7480;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8326a198
	ctx.lr = 0x8326BFC8;
	sub_8326A198(ctx, base);
	// sth r3,108(r30)
	PPC_STORE_U16(ctx.r30.u32 + 108, ctx.r3.u16);
	// lis r11,-32219
	ctx.r11.s64 = -2111504384;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r5,r11,7608
	ctx.r5.s64 = ctx.r11.s64 + 7608;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8326a198
	ctx.lr = 0x8326BFE0;
	sub_8326A198(ctx, base);
	// lis r11,-32219
	ctx.r11.s64 = -2111504384;
	// sth r3,110(r30)
	PPC_STORE_U16(ctx.r30.u32 + 110, ctx.r3.u16);
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r5,r11,7604
	ctx.r5.s64 = ctx.r11.s64 + 7604;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8326a198
	ctx.lr = 0x8326BFF8;
	sub_8326A198(ctx, base);
	// sth r3,112(r30)
	PPC_STORE_U16(ctx.r30.u32 + 112, ctx.r3.u16);
	// lis r11,-32219
	ctx.r11.s64 = -2111504384;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r5,r11,7596
	ctx.r5.s64 = ctx.r11.s64 + 7596;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8326a140
	ctx.lr = 0x8326C010;
	sub_8326A140(ctx, base);
	// stw r3,116(r30)
	PPC_STORE_U32(ctx.r30.u32 + 116, ctx.r3.u32);
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r5,r11,23132
	ctx.r5.s64 = ctx.r11.s64 + 23132;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8326a1f0
	ctx.lr = 0x8326C028;
	sub_8326A1F0(ctx, base);
	// stw r3,128(r30)
	PPC_STORE_U32(ctx.r30.u32 + 128, ctx.r3.u32);
	// lis r11,-32219
	ctx.r11.s64 = -2111504384;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r5,r11,7588
	ctx.r5.s64 = ctx.r11.s64 + 7588;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8326a1f0
	ctx.lr = 0x8326C040;
	sub_8326A1F0(ctx, base);
	// stw r3,132(r30)
	PPC_STORE_U32(ctx.r30.u32 + 132, ctx.r3.u32);
	// lis r11,-32219
	ctx.r11.s64 = -2111504384;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r5,r11,7580
	ctx.r5.s64 = ctx.r11.s64 + 7580;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8326a140
	ctx.lr = 0x8326C058;
	sub_8326A140(ctx, base);
	// stw r3,72(r30)
	PPC_STORE_U32(ctx.r30.u32 + 72, ctx.r3.u32);
	// lis r11,-32219
	ctx.r11.s64 = -2111504384;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r5,r11,7572
	ctx.r5.s64 = ctx.r11.s64 + 7572;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8326a140
	ctx.lr = 0x8326C070;
	sub_8326A140(ctx, base);
	// stw r3,76(r30)
	PPC_STORE_U32(ctx.r30.u32 + 76, ctx.r3.u32);
	// lis r11,-32219
	ctx.r11.s64 = -2111504384;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r5,r11,7564
	ctx.r5.s64 = ctx.r11.s64 + 7564;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8326a140
	ctx.lr = 0x8326C088;
	sub_8326A140(ctx, base);
	// stw r3,80(r30)
	PPC_STORE_U32(ctx.r30.u32 + 80, ctx.r3.u32);
	// lis r11,-32219
	ctx.r11.s64 = -2111504384;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r5,r11,7556
	ctx.r5.s64 = ctx.r11.s64 + 7556;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8326a140
	ctx.lr = 0x8326C0A0;
	sub_8326A140(ctx, base);
	// stw r3,120(r30)
	PPC_STORE_U32(ctx.r30.u32 + 120, ctx.r3.u32);
	// lis r11,-32219
	ctx.r11.s64 = -2111504384;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r5,r11,7548
	ctx.r5.s64 = ctx.r11.s64 + 7548;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8326a140
	ctx.lr = 0x8326C0B8;
	sub_8326A140(ctx, base);
	// stw r3,124(r30)
	PPC_STORE_U32(ctx.r30.u32 + 124, ctx.r3.u32);
	// lis r11,-32219
	ctx.r11.s64 = -2111504384;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r5,r11,7540
	ctx.r5.s64 = ctx.r11.s64 + 7540;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8326a140
	ctx.lr = 0x8326C0D0;
	sub_8326A140(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,4(r29)
	PPC_STORE_U32(ctx.r29.u32 + 4, ctx.r11.u32);
	// stw r11,84(r30)
	PPC_STORE_U32(ctx.r30.u32 + 84, ctx.r11.u32);
	// bl 0x83259ff8
	ctx.lr = 0x8326C0E4;
	sub_83259FF8(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
loc_8326C0E8:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x833a01fc
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8326C0F0"))) PPC_WEAK_FUNC(sub_8326C0F0);
PPC_FUNC_IMPL(__imp__sub_8326C0F0) {
	PPC_FUNC_PROLOGUE();
	// stw r4,92(r3)
	PPC_STORE_U32(ctx.r3.u32 + 92, ctx.r4.u32);
	// stw r5,96(r3)
	PPC_STORE_U32(ctx.r3.u32 + 96, ctx.r5.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8326C0FC"))) PPC_WEAK_FUNC(sub_8326C0FC);
PPC_FUNC_IMPL(__imp__sub_8326C0FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8326C100"))) PPC_WEAK_FUNC(sub_8326C100);
PPC_FUNC_IMPL(__imp__sub_8326C100) {
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
	// li r5,104
	ctx.r5.s64 = 104;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x833a2b30
	ctx.lr = 0x8326C120;
	sub_833A2B30(ctx, base);
	// lis r11,-31845
	ctx.r11.s64 = -2086993920;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,-5796(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -5796);
	// stw r11,60(r31)
	PPC_STORE_U32(ctx.r31.u32 + 60, ctx.r11.u32);
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

__attribute__((alias("__imp__sub_8326C144"))) PPC_WEAK_FUNC(sub_8326C144);
PPC_FUNC_IMPL(__imp__sub_8326C144) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8326C148"))) PPC_WEAK_FUNC(sub_8326C148);
PPC_FUNC_IMPL(__imp__sub_8326C148) {
	PPC_FUNC_PROLOGUE();
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x8326c158
	if (ctx.cr6.eq) goto loc_8326C158;
	// lwz r11,20(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
loc_8326C158:
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lwz r11,24(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// stw r11,0(r5)
	PPC_STORE_U32(ctx.r5.u32 + 0, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8326C16C"))) PPC_WEAK_FUNC(sub_8326C16C);
PPC_FUNC_IMPL(__imp__sub_8326C16C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8326C170"))) PPC_WEAK_FUNC(sub_8326C170);
PPC_FUNC_IMPL(__imp__sub_8326C170) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x833a01a0
	ctx.lr = 0x8326C178;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,12(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8326c1b4
	if (ctx.cr6.eq) goto loc_8326C1B4;
	// cmpwi cr6,r11,6
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 6, ctx.xer);
	// beq cr6,0x8326c1b4
	if (ctx.cr6.eq) goto loc_8326C1B4;
	// cmpwi cr6,r11,7
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 7, ctx.xer);
	// beq cr6,0x8326c1b4
	if (ctx.cr6.eq) goto loc_8326C1B4;
	// lis r11,-32219
	ctx.r11.s64 = -2111504384;
	// addi r4,r11,7904
	ctx.r4.s64 = ctx.r11.s64 + 7904;
loc_8326C1A4:
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x83257c00
	ctx.lr = 0x8326C1AC;
	sub_83257C00(ctx, base);
	// li r3,-1
	ctx.r3.s64 = -1;
	// b 0x8326c304
	goto loc_8326C304;
loc_8326C1B4:
	// lwz r3,268(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 268);
	// lwz r11,252(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 252);
	// cmpw cr6,r3,r11
	ctx.cr6.compare<int32_t>(ctx.r3.s32, ctx.r11.s32, ctx.xer);
	// bge cr6,0x8326c1d0
	if (!ctx.cr6.lt) goto loc_8326C1D0;
	// lis r11,-32219
	ctx.r11.s64 = -2111504384;
	// addi r4,r11,7848
	ctx.r4.s64 = ctx.r11.s64 + 7848;
	// b 0x8326c1a4
	goto loc_8326C1A4;
loc_8326C1D0:
	// ld r29,240(r1)
	ctx.r29.u64 = PPC_LOAD_U64(ctx.r1.u32 + 240);
	// cmpdi cr6,r29,0
	ctx.cr6.compare<int64_t>(ctx.r29.s64, 0, ctx.xer);
	// bge cr6,0x8326c1e8
	if (!ctx.cr6.lt) goto loc_8326C1E8;
	// lis r11,-32219
	ctx.r11.s64 = -2111504384;
	// addi r4,r11,7812
	ctx.r4.s64 = ctx.r11.s64 + 7812;
	// b 0x8326c1a4
	goto loc_8326C1A4;
loc_8326C1E8:
	// lwz r27,236(r1)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r1.u32 + 236);
	// li r30,0
	ctx.r30.s64 = 0;
	// lwz r28,228(r1)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r1.u32 + 228);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// lwz r26,260(r1)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r1.u32 + 260);
	// stw r8,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r8.u32);
	// extsb r8,r6
	ctx.r8.s64 = ctx.r6.s8;
	// stw r4,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r4.u32);
	// stw r10,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r10.u32);
	// std r29,48(r31)
	PPC_STORE_U64(ctx.r31.u32 + 48, ctx.r29.u64);
	// stb r30,90(r31)
	PPC_STORE_U8(ctx.r31.u32 + 90, ctx.r30.u8);
	// stw r28,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r28.u32);
	// stw r5,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r5.u32);
	// stb r27,85(r31)
	PPC_STORE_U8(ctx.r31.u32 + 85, ctx.r27.u8);
	// stb r8,86(r31)
	PPC_STORE_U8(ctx.r31.u32 + 86, ctx.r8.u8);
	// stb r7,88(r31)
	PPC_STORE_U8(ctx.r31.u32 + 88, ctx.r7.u8);
	// stb r9,89(r31)
	PPC_STORE_U8(ctx.r31.u32 + 89, ctx.r9.u8);
	// stw r11,56(r31)
	PPC_STORE_U32(ctx.r31.u32 + 56, ctx.r11.u32);
	// stw r26,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r26.u32);
	// stw r3,76(r31)
	PPC_STORE_U32(ctx.r31.u32 + 76, ctx.r3.u32);
	// stb r30,87(r31)
	PPC_STORE_U8(ctx.r31.u32 + 87, ctx.r30.u8);
	// stw r30,68(r31)
	PPC_STORE_U32(ctx.r31.u32 + 68, ctx.r30.u32);
	// stw r30,72(r31)
	PPC_STORE_U32(ctx.r31.u32 + 72, ctx.r30.u32);
	// stw r30,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r30.u32);
	// stw r30,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r30.u32);
	// stb r30,84(r31)
	PPC_STORE_U8(ctx.r31.u32 + 84, ctx.r30.u8);
	// stw r30,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r30.u32);
	// ble cr6,0x8326c260
	if (!ctx.cr6.gt) goto loc_8326C260;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bgt cr6,0x8326c30c
	if (ctx.cr6.gt) goto loc_8326C30C;
loc_8326C260:
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x8326c278
	if (ctx.cr6.eq) goto loc_8326C278;
	// extsb. r11,r8
	ctx.r11.s64 = ctx.r8.s8;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8326c2f8
	if (ctx.cr0.eq) goto loc_8326C2F8;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// bne cr6,0x8326c288
	if (!ctx.cr6.eq) goto loc_8326C288;
loc_8326C278:
	// extsb. r11,r8
	ctx.r11.s64 = ctx.r8.s8;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8326c2f8
	if (!ctx.cr0.eq) goto loc_8326C2F8;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x8326c30c
	if (ctx.cr6.eq) goto loc_8326C30C;
loc_8326C288:
	// extsb. r11,r8
	ctx.r11.s64 = ctx.r8.s8;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8326c30c
	if (ctx.cr0.eq) goto loc_8326C30C;
	// lwz r11,92(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 92);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8326c2bc
	if (ctx.cr6.eq) goto loc_8326C2BC;
	// li r8,0
	ctx.r8.s64 = 0;
	// lwz r3,96(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 96);
	// li r7,0
	ctx.r7.s64 = 0;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// li r5,5
	ctx.r5.s64 = 5;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bctrl 
	ctx.lr = 0x8326C2BC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8326C2BC:
	// lwz r4,4(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x83266c48
	ctx.lr = 0x8326C2C8;
	sub_83266C48(ctx, base);
	// lwz r11,92(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 92);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8326c2f4
	if (ctx.cr6.eq) goto loc_8326C2F4;
	// li r8,0
	ctx.r8.s64 = 0;
	// lwz r6,32(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// li r7,0
	ctx.r7.s64 = 0;
	// lwz r3,96(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 96);
	// li r5,6
	ctx.r5.s64 = 6;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bctrl 
	ctx.lr = 0x8326C2F4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8326C2F4:
	// stw r30,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r30.u32);
loc_8326C2F8:
	// li r11,6
	ctx.r11.s64 = 6;
loc_8326C2FC:
	// stw r11,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r11.u32);
	// li r3,0
	ctx.r3.s64 = 0;
loc_8326C304:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x833a01f0
	__restgprlr_26(ctx, base);
	return;
loc_8326C30C:
	// li r11,1
	ctx.r11.s64 = 1;
	// b 0x8326c2fc
	goto loc_8326C2FC;
}

__attribute__((alias("__imp__sub_8326C314"))) PPC_WEAK_FUNC(sub_8326C314);
PPC_FUNC_IMPL(__imp__sub_8326C314) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8326C318"))) PPC_WEAK_FUNC(sub_8326C318);
PPC_FUNC_IMPL(__imp__sub_8326C318) {
	PPC_FUNC_PROLOGUE();
	// lwz r4,4(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// li r11,1
	ctx.r11.s64 = 1;
	// stb r11,87(r3)
	PPC_STORE_U8(ctx.r3.u32 + 87, ctx.r11.u8);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// b 0x83266d20
	sub_83266D20(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8326C334"))) PPC_WEAK_FUNC(sub_8326C334);
PPC_FUNC_IMPL(__imp__sub_8326C334) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8326C338"))) PPC_WEAK_FUNC(sub_8326C338);
PPC_FUNC_IMPL(__imp__sub_8326C338) {
	PPC_FUNC_PROLOGUE();
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r4,32(r3)
	PPC_STORE_U32(ctx.r3.u32 + 32, ctx.r4.u32);
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r5,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r5.u32);
	// stb r11,90(r3)
	PPC_STORE_U8(ctx.r3.u32 + 90, ctx.r11.u8);
	// std r6,48(r3)
	PPC_STORE_U64(ctx.r3.u32 + 48, ctx.r6.u64);
	// stw r11,68(r3)
	PPC_STORE_U32(ctx.r3.u32 + 68, ctx.r11.u32);
	// stw r11,72(r3)
	PPC_STORE_U32(ctx.r3.u32 + 72, ctx.r11.u32);
	// stw r11,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r11.u32);
	// stw r11,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r11.u32);
	// stb r11,84(r3)
	PPC_STORE_U8(ctx.r3.u32 + 84, ctx.r11.u8);
	// stw r11,24(r3)
	PPC_STORE_U32(ctx.r3.u32 + 24, ctx.r11.u32);
	// stw r10,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8326C370"))) PPC_WEAK_FUNC(sub_8326C370);
PPC_FUNC_IMPL(__imp__sub_8326C370) {
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
	// lwz r11,12(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8326c404
	if (ctx.cr6.eq) goto loc_8326C404;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x8326c3f0
	if (ctx.cr6.eq) goto loc_8326C3F0;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// li r30,0
	ctx.r30.s64 = 0;
	// beq cr6,0x8326c3c0
	if (ctx.cr6.eq) goto loc_8326C3C0;
	// cmpwi cr6,r11,6
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 6, ctx.xer);
	// stw r30,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r30.u32);
	// stw r30,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r30.u32);
	// bne cr6,0x8326c404
	if (!ctx.cr6.eq) goto loc_8326C404;
	// stw r30,72(r3)
	PPC_STORE_U32(ctx.r3.u32 + 72, ctx.r30.u32);
	// b 0x8326c404
	goto loc_8326C404;
loc_8326C3C0:
	// lbz r11,86(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 86);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x8326c3d8
	if (!ctx.cr0.eq) goto loc_8326C3D8;
	// lbz r11,90(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 90);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x8326c3e8
	if (ctx.cr0.eq) goto loc_8326C3E8;
loc_8326C3D8:
	// lwz r4,4(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x83266c48
	ctx.lr = 0x8326C3E4;
	sub_83266C48(ctx, base);
	// stw r30,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r30.u32);
loc_8326C3E8:
	// stw r30,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r30.u32);
	// b 0x8326c404
	goto loc_8326C404;
loc_8326C3F0:
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8326c404
	if (!ctx.cr6.eq) goto loc_8326C404;
	// li r11,3
	ctx.r11.s64 = 3;
	// stw r11,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r11.u32);
loc_8326C404:
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

__attribute__((alias("__imp__sub_8326C41C"))) PPC_WEAK_FUNC(sub_8326C41C);
PPC_FUNC_IMPL(__imp__sub_8326C41C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8326C420"))) PPC_WEAK_FUNC(sub_8326C420);
PPC_FUNC_IMPL(__imp__sub_8326C420) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x833a01ac
	ctx.lr = 0x8326C428;
	__savegprlr_29(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r4,4(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r29,r3,4
	ctx.r29.s64 = ctx.r3.s64 + 4;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x8326c464
	if (ctx.cr6.eq) goto loc_8326C464;
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// bl 0x83266c88
	ctx.lr = 0x8326C44C;
	sub_83266C88(ctx, base);
	// li r11,2
	ctx.r11.s64 = 2;
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r11,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r11.u32);
	// ld r11,88(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// std r11,40(r31)
	PPC_STORE_U64(ctx.r31.u32 + 40, ctx.r11.u64);
	// b 0x8326c57c
	goto loc_8326C57C;
loc_8326C464:
	// lis r11,-31827
	ctx.r11.s64 = -2085814272;
	// lwz r11,9760(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 9760);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8326c578
	if (!ctx.cr6.eq) goto loc_8326C578;
	// lbz r11,85(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 85);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x8326c4a4
	if (ctx.cr0.eq) goto loc_8326C4A4;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// lwz r4,32(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x83266bc0
	ctx.lr = 0x8326C490;
	sub_83266BC0(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8326c4a4
	if (!ctx.cr6.eq) goto loc_8326C4A4;
	// li r10,1
	ctx.r10.s64 = 1;
	// b 0x8326c56c
	goto loc_8326C56C;
loc_8326C4A4:
	// lwz r11,92(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 92);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8326c4d0
	if (ctx.cr6.eq) goto loc_8326C4D0;
	// li r8,0
	ctx.r8.s64 = 0;
	// lwz r6,32(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// li r7,0
	ctx.r7.s64 = 0;
	// lwz r3,96(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 96);
	// li r5,1
	ctx.r5.s64 = 1;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bctrl 
	ctx.lr = 0x8326C4D0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8326C4D0:
	// lbz r11,91(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 91);
	// li r5,10
	ctx.r5.s64 = 10;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// beq cr6,0x8326c4e4
	if (ctx.cr6.eq) goto loc_8326C4E4;
	// li r5,3
	ctx.r5.s64 = 3;
loc_8326C4E4:
	// mr r7,r29
	ctx.r7.u64 = ctx.r29.u64;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r6,0
	ctx.r6.s64 = 0;
	// lwz r4,32(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// bl 0x83266c10
	ctx.lr = 0x8326C4F8;
	sub_83266C10(ctx, base);
	// lwz r11,92(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 92);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8326c528
	if (ctx.cr6.eq) goto loc_8326C528;
	// li r8,0
	ctx.r8.s64 = 0;
	// lwz r6,32(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// li r7,0
	ctx.r7.s64 = 0;
	// lwz r3,96(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 96);
	// li r5,2
	ctx.r5.s64 = 2;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bctrl 
	ctx.lr = 0x8326C528;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8326C528:
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// bne cr6,0x8326c564
	if (!ctx.cr6.eq) goto loc_8326C564;
	// lwz r4,0(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x8326c564
	if (ctx.cr6.eq) goto loc_8326C564;
	// li r11,1
	ctx.r11.s64 = 1;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// stb r11,90(r31)
	PPC_STORE_U8(ctx.r31.u32 + 90, ctx.r11.u8);
	// bl 0x83266c88
	ctx.lr = 0x8326C550;
	sub_83266C88(ctx, base);
	// li r11,2
	ctx.r11.s64 = 2;
	// stw r11,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r11.u32);
	// ld r11,88(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// std r11,40(r31)
	PPC_STORE_U64(ctx.r31.u32 + 40, ctx.r11.u64);
	// b 0x8326c578
	goto loc_8326C578;
loc_8326C564:
	// stw r30,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r30.u32);
	// li r10,2
	ctx.r10.s64 = 2;
loc_8326C56C:
	// li r11,7
	ctx.r11.s64 = 7;
	// stw r10,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r10.u32);
	// stw r11,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r11.u32);
loc_8326C578:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8326C57C:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x833a01fc
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8326C584"))) PPC_WEAK_FUNC(sub_8326C584);
PPC_FUNC_IMPL(__imp__sub_8326C584) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8326C588"))) PPC_WEAK_FUNC(sub_8326C588);
PPC_FUNC_IMPL(__imp__sub_8326C588) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x833a01ac
	ctx.lr = 0x8326C590;
	__savegprlr_29(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,16(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r29,1
	ctx.r29.s64 = 1;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8326c6c0
	if (!ctx.cr6.eq) goto loc_8326C6C0;
	// lbz r11,87(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 87);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x8326c6c0
	if (!ctx.cr0.eq) goto loc_8326C6C0;
	// lwz r11,68(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 68);
	// lis r9,32767
	ctx.r9.s64 = 2147418112;
	// ld r8,48(r3)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r3.u32 + 48);
	// extsw r10,r11
	ctx.r10.s64 = ctx.r11.s32;
	// ld r7,40(r3)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r3.u32 + 40);
	// ori r9,r9,65535
	ctx.r9.u64 = ctx.r9.u64 | 65535;
	// add r30,r8,r10
	ctx.r30.u64 = ctx.r8.u64 + ctx.r10.u64;
	// subf r10,r30,r7
	ctx.r10.s64 = ctx.r7.s64 - ctx.r30.s64;
	// cmpd cr6,r10,r9
	ctx.cr6.compare<int64_t>(ctx.r10.s64, ctx.r9.s64, ctx.xer);
	// blt cr6,0x8326c5e0
	if (ctx.cr6.lt) goto loc_8326C5E0;
	// mr r10,r9
	ctx.r10.u64 = ctx.r9.u64;
loc_8326C5E0:
	// lwz r8,56(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// extsw r9,r10
	ctx.r9.s64 = ctx.r10.s32;
	// lwz r10,60(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 60);
	// subf r11,r11,r8
	ctx.r11.s64 = ctx.r8.s64 - ctx.r11.s64;
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// blt cr6,0x8326c5fc
	if (ctx.cr6.lt) goto loc_8326C5FC;
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
loc_8326C5FC:
	// cmpw cr6,r11,r9
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r9.s32, ctx.xer);
	// stw r11,64(r31)
	PPC_STORE_U32(ctx.r31.u32 + 64, ctx.r11.u32);
	// blt cr6,0x8326c60c
	if (ctx.cr6.lt) goto loc_8326C60C;
	// mr r11,r9
	ctx.r11.u64 = ctx.r9.u64;
loc_8326C60C:
	// stw r11,64(r31)
	PPC_STORE_U32(ctx.r31.u32 + 64, ctx.r11.u32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8326c628
	if (!ctx.cr6.eq) goto loc_8326C628;
	// li r11,3
	ctx.r11.s64 = 3;
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r11,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r11.u32);
	// b 0x8326c7ac
	goto loc_8326C7AC;
loc_8326C628:
	// lis r10,-31827
	ctx.r10.s64 = -2085814272;
	// lwz r10,9760(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 9760);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x8326c640
	if (ctx.cr6.eq) goto loc_8326C640;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x8326c7ac
	goto loc_8326C7AC;
loc_8326C640:
	// lwz r10,92(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 92);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8326c66c
	if (ctx.cr6.eq) goto loc_8326C66C;
	// mr r8,r11
	ctx.r8.u64 = ctx.r11.u64;
	// lwz r6,32(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// mr r7,r30
	ctx.r7.u64 = ctx.r30.u64;
	// lwz r3,96(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 96);
	// li r5,3
	ctx.r5.s64 = 3;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bctrl 
	ctx.lr = 0x8326C66C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8326C66C:
	// lwz r11,68(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 68);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// lwz r9,76(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 76);
	// lwz r10,80(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	// subf r9,r11,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r11.s64;
	// lwa r6,64(r31)
	ctx.r6.s64 = int32_t(PPC_LOAD_U32(ctx.r31.u32 + 64));
	// add r7,r10,r11
	ctx.r7.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwz r4,4(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// extsw r8,r9
	ctx.r8.s64 = ctx.r9.s32;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x83266cb8
	ctx.lr = 0x8326C698;
	sub_83266CB8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x8326c6bc
	if (ctx.cr0.eq) goto loc_8326C6BC;
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r3,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r3.u32);
	// stb r11,84(r31)
	PPC_STORE_U8(ctx.r31.u32 + 84, ctx.r11.u8);
loc_8326C6AC:
	// li r10,3
	ctx.r10.s64 = 3;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r10,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r10.u32);
	// b 0x8326c7ac
	goto loc_8326C7AC;
loc_8326C6BC:
	// stw r29,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r29.u32);
loc_8326C6C0:
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x8326c79c
	if (!ctx.cr6.eq) goto loc_8326C79C;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r4,4(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// bl 0x83266cf0
	ctx.lr = 0x8326C6DC;
	sub_83266CF0(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8326c79c
	if (ctx.cr6.eq) goto loc_8326C79C;
	// li r11,0
	ctx.r11.s64 = 0;
	// lwz r4,4(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// stw r11,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r11.u32);
	// bl 0x83266d40
	ctx.lr = 0x8326C700;
	sub_83266D40(ctx, base);
	// lwz r11,92(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 92);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8326c738
	if (ctx.cr6.eq) goto loc_8326C738;
	// lwa r10,68(r31)
	ctx.r10.s64 = int32_t(PPC_LOAD_U32(ctx.r31.u32 + 68));
	// li r5,4
	ctx.r5.s64 = 4;
	// ld r8,88(r1)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// ld r9,48(r31)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r31.u32 + 48);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// extsw r8,r8
	ctx.r8.s64 = ctx.r8.s32;
	// lwz r6,32(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// add r7,r10,r9
	ctx.r7.u64 = ctx.r10.u64 + ctx.r9.u64;
	// lwz r3,96(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 96);
	// bctrl 
	ctx.lr = 0x8326C738;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8326C738:
	// ld r11,88(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// cmpdi cr6,r11,0
	ctx.cr6.compare<int64_t>(ctx.r11.s64, 0, ctx.xer);
	// bge cr6,0x8326c754
	if (!ctx.cr6.lt) goto loc_8326C754;
	// li r11,-1
	ctx.r11.s64 = -1;
	// stb r29,84(r31)
	PPC_STORE_U8(ctx.r31.u32 + 84, ctx.r29.u8);
	// stw r11,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r11.u32);
	// b 0x8326c6ac
	goto loc_8326C6AC;
loc_8326C754:
	// lwz r10,68(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 68);
	// extsw r11,r11
	ctx.r11.s64 = ctx.r11.s32;
	// lwz r9,56(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r11,68(r31)
	PPC_STORE_U32(ctx.r31.u32 + 68, ctx.r11.u32);
	// cmpw cr6,r11,r9
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r9.s32, ctx.xer);
	// bge cr6,0x8326c794
	if (!ctx.cr6.lt) goto loc_8326C794;
	// lwz r10,76(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 76);
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// bge cr6,0x8326c794
	if (!ctx.cr6.lt) goto loc_8326C794;
	// ld r10,48(r31)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r31.u32 + 48);
	// extsw r11,r11
	ctx.r11.s64 = ctx.r11.s32;
	// ld r9,40(r31)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r31.u32 + 40);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// cmpd cr6,r11,r9
	ctx.cr6.compare<int64_t>(ctx.r11.s64, ctx.r9.s64, ctx.xer);
	// blt cr6,0x8326c79c
	if (ctx.cr6.lt) goto loc_8326C79C;
loc_8326C794:
	// li r11,3
	ctx.r11.s64 = 3;
	// stw r11,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r11.u32);
loc_8326C79C:
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// addi r11,r11,-3
	ctx.r11.s64 = ctx.r11.s64 + -3;
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r3,r11,27,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
loc_8326C7AC:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x833a01fc
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8326C7B4"))) PPC_WEAK_FUNC(sub_8326C7B4);
PPC_FUNC_IMPL(__imp__sub_8326C7B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8326C7B8"))) PPC_WEAK_FUNC(sub_8326C7B8);
PPC_FUNC_IMPL(__imp__sub_8326C7B8) {
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
	// lbz r11,86(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 86);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x8326c7f0
	if (!ctx.cr0.eq) goto loc_8326C7F0;
	// lbz r11,90(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 90);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x8326c860
	if (ctx.cr0.eq) goto loc_8326C860;
	// lbz r11,84(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 84);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x8326c860
	if (ctx.cr0.eq) goto loc_8326C860;
loc_8326C7F0:
	// lwz r11,92(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 92);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8326c81c
	if (ctx.cr6.eq) goto loc_8326C81C;
	// li r8,0
	ctx.r8.s64 = 0;
	// lwz r6,32(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// li r7,0
	ctx.r7.s64 = 0;
	// lwz r3,96(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 96);
	// li r5,5
	ctx.r5.s64 = 5;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bctrl 
	ctx.lr = 0x8326C81C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8326C81C:
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r4,4(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// bl 0x83266c48
	ctx.lr = 0x8326C828;
	sub_83266C48(ctx, base);
	// lwz r11,92(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 92);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8326c854
	if (ctx.cr6.eq) goto loc_8326C854;
	// li r8,0
	ctx.r8.s64 = 0;
	// lwz r6,32(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// li r7,0
	ctx.r7.s64 = 0;
	// lwz r3,96(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 96);
	// li r5,6
	ctx.r5.s64 = 6;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bctrl 
	ctx.lr = 0x8326C854;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8326C854:
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// stb r11,90(r31)
	PPC_STORE_U8(ctx.r31.u32 + 90, ctx.r11.u8);
loc_8326C860:
	// lbz r11,84(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 84);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x8326c880
	if (ctx.cr0.eq) goto loc_8326C880;
	// li r11,7
	ctx.r11.s64 = 7;
	// li r10,3
	ctx.r10.s64 = 3;
	// stw r11,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r11.u32);
	// stw r10,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r10.u32);
	// b 0x8326c8bc
	goto loc_8326C8BC;
loc_8326C880:
	// lbz r11,88(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 88);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x8326c894
	if (ctx.cr0.eq) goto loc_8326C894;
	// li r11,4
	ctx.r11.s64 = 4;
	// b 0x8326c8a4
	goto loc_8326C8A4;
loc_8326C894:
	// lbz r11,89(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 89);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x8326c8ac
	if (ctx.cr0.eq) goto loc_8326C8AC;
	// li r11,5
	ctx.r11.s64 = 5;
loc_8326C8A4:
	// stw r11,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r11.u32);
	// b 0x8326c8bc
	goto loc_8326C8BC;
loc_8326C8AC:
	// lwz r11,68(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 68);
	// li r10,6
	ctx.r10.s64 = 6;
	// stw r10,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r10.u32);
	// stw r11,72(r31)
	PPC_STORE_U32(ctx.r31.u32 + 72, ctx.r11.u32);
loc_8326C8BC:
	// li r3,0
	ctx.r3.s64 = 0;
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

__attribute__((alias("__imp__sub_8326C8D4"))) PPC_WEAK_FUNC(sub_8326C8D4);
PPC_FUNC_IMPL(__imp__sub_8326C8D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8326C8D8"))) PPC_WEAK_FUNC(sub_8326C8D8);
PPC_FUNC_IMPL(__imp__sub_8326C8D8) {
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
	// lwz r4,56(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 56);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r3,80(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 80);
	// bl 0x833e3600
	ctx.lr = 0x8326C8FC;
	sub_833E3600(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bgt cr6,0x8326c92c
	if (ctx.cr6.gt) goto loc_8326C92C;
	// lis r11,-32219
	ctx.r11.s64 = -2111504384;
	// addi r4,r11,8140
	ctx.r4.s64 = ctx.r11.s64 + 8140;
loc_8326C910:
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x83257c00
	ctx.lr = 0x8326C918;
	sub_83257C00(ctx, base);
	// li r11,7
	ctx.r11.s64 = 7;
	// li r10,6
	ctx.r10.s64 = 6;
	// stw r11,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r11.u32);
	// stw r10,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r10.u32);
	// b 0x8326c984
	goto loc_8326C984;
loc_8326C92C:
	// lwz r10,76(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 76);
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// ble cr6,0x8326c944
	if (!ctx.cr6.gt) goto loc_8326C944;
	// lis r11,-32219
	ctx.r11.s64 = -2111504384;
	// addi r4,r11,8080
	ctx.r4.s64 = ctx.r11.s64 + 8080;
	// b 0x8326c910
	goto loc_8326C910;
loc_8326C944:
	// lwz r4,80(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	// extsw r7,r11
	ctx.r7.s64 = ctx.r11.s32;
	// lwa r5,68(r31)
	ctx.r5.s64 = int32_t(PPC_LOAD_U32(ctx.r31.u32 + 68));
	// mr r6,r4
	ctx.r6.u64 = ctx.r4.u64;
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// bl 0x833e3580
	ctx.lr = 0x8326C95C;
	sub_833E3580(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// rotlwi r10,r3,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r3.u32, 0);
	// cmpw cr6,r10,r11
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r11.s32, ctx.xer);
	// beq cr6,0x8326c978
	if (ctx.cr6.eq) goto loc_8326C978;
	// lis r11,-32219
	ctx.r11.s64 = -2111504384;
	// addi r4,r11,8040
	ctx.r4.s64 = ctx.r11.s64 + 8040;
	// b 0x8326c910
	goto loc_8326C910;
loc_8326C978:
	// li r10,6
	ctx.r10.s64 = 6;
	// stw r11,72(r31)
	PPC_STORE_U32(ctx.r31.u32 + 72, ctx.r11.u32);
	// stw r10,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r10.u32);
loc_8326C984:
	// li r3,0
	ctx.r3.s64 = 0;
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

__attribute__((alias("__imp__sub_8326C99C"))) PPC_WEAK_FUNC(sub_8326C99C);
PPC_FUNC_IMPL(__imp__sub_8326C99C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8326C9A0"))) PPC_WEAK_FUNC(sub_8326C9A0);
PPC_FUNC_IMPL(__imp__sub_8326C9A0) {
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
	// lbz r11,87(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 87);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x8326c9c4
	if (ctx.cr0.eq) goto loc_8326C9C4;
	// bl 0x8326c370
	ctx.lr = 0x8326C9C4;
	sub_8326C370(ctx, base);
loc_8326C9C4:
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x8326c9e0
	if (!ctx.cr6.eq) goto loc_8326C9E0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8326c420
	ctx.lr = 0x8326C9D8;
	sub_8326C420(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x8326ca58
	if (ctx.cr0.eq) goto loc_8326CA58;
loc_8326C9E0:
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// bne cr6,0x8326c9fc
	if (!ctx.cr6.eq) goto loc_8326C9FC;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8326c588
	ctx.lr = 0x8326C9F4;
	sub_8326C588(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x8326ca58
	if (ctx.cr0.eq) goto loc_8326CA58;
loc_8326C9FC:
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bne cr6,0x8326ca18
	if (!ctx.cr6.eq) goto loc_8326CA18;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8326c7b8
	ctx.lr = 0x8326CA10;
	sub_8326C7B8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x8326ca58
	if (ctx.cr0.eq) goto loc_8326CA58;
loc_8326CA18:
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// bne cr6,0x8326ca48
	if (!ctx.cr6.eq) goto loc_8326CA48;
	// lis r11,-32219
	ctx.r11.s64 = -2111504384;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r4,r11,7984
	ctx.r4.s64 = ctx.r11.s64 + 7984;
	// bl 0x83257c00
	ctx.lr = 0x8326CA34;
	sub_83257C00(ctx, base);
	// li r11,7
	ctx.r11.s64 = 7;
	// li r10,5
	ctx.r10.s64 = 5;
	// stw r11,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r11.u32);
	// stw r10,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r10.u32);
	// b 0x8326ca58
	goto loc_8326CA58;
loc_8326CA48:
	// cmpwi cr6,r11,5
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 5, ctx.xer);
	// bne cr6,0x8326ca58
	if (!ctx.cr6.eq) goto loc_8326CA58;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8326c8d8
	ctx.lr = 0x8326CA58;
	sub_8326C8D8(ctx, base);
loc_8326CA58:
	// lbz r11,87(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 87);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x8326ca6c
	if (ctx.cr0.eq) goto loc_8326CA6C;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8326c370
	ctx.lr = 0x8326CA6C;
	sub_8326C370(ctx, base);
loc_8326CA6C:
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

__attribute__((alias("__imp__sub_8326CA80"))) PPC_WEAK_FUNC(sub_8326CA80);
PPC_FUNC_IMPL(__imp__sub_8326CA80) {
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
	// lwz r11,12(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x8326cac0
	if (ctx.cr6.eq) goto loc_8326CAC0;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x8326cac0
	if (ctx.cr6.eq) goto loc_8326CAC0;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// beq cr6,0x8326cac0
	if (ctx.cr6.eq) goto loc_8326CAC0;
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// beq cr6,0x8326cac0
	if (ctx.cr6.eq) goto loc_8326CAC0;
	// cmpwi cr6,r11,5
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 5, ctx.xer);
	// bne cr6,0x8326cb04
	if (!ctx.cr6.eq) goto loc_8326CB04;
loc_8326CAC0:
	// lis r11,-32219
	ctx.r11.s64 = -2111504384;
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r4,r11,8192
	ctx.r4.s64 = ctx.r11.s64 + 8192;
	// bl 0x83257c00
	ctx.lr = 0x8326CAD0;
	sub_83257C00(ctx, base);
	// b 0x8326caf8
	goto loc_8326CAF8;
loc_8326CAD4:
	// lwz r4,4(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// li r11,1
	ctx.r11.s64 = 1;
	// stb r11,87(r31)
	PPC_STORE_U8(ctx.r31.u32 + 87, ctx.r11.u8);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x8326caf0
	if (ctx.cr6.eq) goto loc_8326CAF0;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x83266d20
	ctx.lr = 0x8326CAF0;
	sub_83266D20(ctx, base);
loc_8326CAF0:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8326c9a0
	ctx.lr = 0x8326CAF8;
	sub_8326C9A0(ctx, base);
loc_8326CAF8:
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8326cad4
	if (!ctx.cr6.eq) goto loc_8326CAD4;
loc_8326CB04:
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

__attribute__((alias("__imp__sub_8326CB18"))) PPC_WEAK_FUNC(sub_8326CB18);
PPC_FUNC_IMPL(__imp__sub_8326CB18) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x833a01ac
	ctx.lr = 0x8326CB20;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x8326cb8c
	if (ctx.cr6.eq) goto loc_8326CB8C;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8326cb8c
	if (ctx.cr6.eq) goto loc_8326CB8C;
	// mr r3,r5
	ctx.r3.u64 = ctx.r5.u64;
	// bl 0x833a77b0
	ctx.lr = 0x8326CB48;
	sub_833A77B0(ctx, base);
	// addi r10,r3,1
	ctx.r10.s64 = ctx.r3.s64 + 1;
	// cmplw cr6,r10,r30
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r30.u32, ctx.xer);
	// bgt cr6,0x8326cb8c
	if (ctx.cr6.gt) goto loc_8326CB8C;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8326cb84
	if (ctx.cr6.eq) goto loc_8326CB84;
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// subf r9,r29,r31
	ctx.r9.s64 = ctx.r31.s64 - ctx.r29.s64;
loc_8326CB68:
	// lbzx r10,r9,r11
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r9.u32 + ctx.r11.u32);
	// cmplwi cr6,r10,47
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 47, ctx.xer);
	// bne cr6,0x8326cb78
	if (!ctx.cr6.eq) goto loc_8326CB78;
	// li r10,92
	ctx.r10.s64 = 92;
loc_8326CB78:
	// stb r10,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r10.u8);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// bdnz 0x8326cb68
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8326CB68;
loc_8326CB84:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// b 0x8326cb90
	goto loc_8326CB90;
loc_8326CB8C:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8326CB90:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x833a01fc
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8326CB98"))) PPC_WEAK_FUNC(sub_8326CB98);
PPC_FUNC_IMPL(__imp__sub_8326CB98) {
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
	// bl 0x83266ba0
	ctx.lr = 0x8326CBA8;
	sub_83266BA0(ctx, base);
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

__attribute__((alias("__imp__sub_8326CBBC"))) PPC_WEAK_FUNC(sub_8326CBBC);
PPC_FUNC_IMPL(__imp__sub_8326CBBC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8326CBC0"))) PPC_WEAK_FUNC(sub_8326CBC0);
PPC_FUNC_IMPL(__imp__sub_8326CBC0) {
	PPC_FUNC_PROLOGUE();
	// ld r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r3.u32 + 8);
	// li r3,0
	ctx.r3.s64 = 0;
	// std r11,0(r4)
	PPC_STORE_U64(ctx.r4.u32 + 0, ctx.r11.u64);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8326CBD0"))) PPC_WEAK_FUNC(sub_8326CBD0);
PPC_FUNC_IMPL(__imp__sub_8326CBD0) {
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
	// mr r3,r6
	ctx.r3.u64 = ctx.r6.u64;
	// cmpd cr6,r5,r7
	ctx.cr6.compare<int64_t>(ctx.r5.s64, ctx.r7.s64, ctx.xer);
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// std r11,16(r30)
	PPC_STORE_U64(ctx.r30.u32 + 16, ctx.r11.u64);
	// blt cr6,0x8326cc04
	if (ctx.cr6.lt) goto loc_8326CC04;
	// mr r31,r7
	ctx.r31.u64 = ctx.r7.u64;
loc_8326CC04:
	// ld r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r30.u32 + 8);
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// cmpd cr6,r31,r11
	ctx.cr6.compare<int64_t>(ctx.r31.s64, ctx.r11.s64, ctx.xer);
	// blt cr6,0x8326cc18
	if (ctx.cr6.lt) goto loc_8326CC18;
	// mr r31,r11
	ctx.r31.u64 = ctx.r11.u64;
loc_8326CC18:
	// cmpdi cr6,r31,0
	ctx.cr6.compare<int64_t>(ctx.r31.s64, 0, ctx.xer);
	// ble cr6,0x8326cc3c
	if (!ctx.cr6.gt) goto loc_8326CC3C;
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// extsw r11,r4
	ctx.r11.s64 = ctx.r4.s32;
	// rotlwi r6,r31,0
	ctx.r6.u64 = __builtin_rotateleft32(ctx.r31.u32, 0);
	// add r5,r11,r10
	ctx.r5.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rotlwi r4,r7,0
	ctx.r4.u64 = __builtin_rotateleft32(ctx.r7.u32, 0);
	// bl 0x8325a350
	ctx.lr = 0x8326CC38;
	sub_8325A350(ctx, base);
	// std r31,16(r30)
	PPC_STORE_U64(ctx.r30.u32 + 16, ctx.r31.u64);
loc_8326CC3C:
	// li r3,0
	ctx.r3.s64 = 0;
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

__attribute__((alias("__imp__sub_8326CC58"))) PPC_WEAK_FUNC(sub_8326CC58);
PPC_FUNC_IMPL(__imp__sub_8326CC58) {
	PPC_FUNC_PROLOGUE();
	// li r11,1
	ctx.r11.s64 = 1;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8326CC68"))) PPC_WEAK_FUNC(sub_8326CC68);
PPC_FUNC_IMPL(__imp__sub_8326CC68) {
	PPC_FUNC_PROLOGUE();
	// ld r11,16(r3)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r3.u32 + 16);
	// li r3,0
	ctx.r3.s64 = 0;
	// std r11,0(r4)
	PPC_STORE_U64(ctx.r4.u32 + 0, ctx.r11.u64);
	// blr 
	return;
}

