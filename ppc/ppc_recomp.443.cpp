#include "ppc_recomp_shared.h"

__attribute__((alias("__imp__sub_832F99D0"))) PPC_WEAK_FUNC(sub_832F99D0);
PPC_FUNC_IMPL(__imp__sub_832F99D0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x833a019c
	ctx.lr = 0x832F99D8;
	__savegprlr_25(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31823
	ctx.r11.s64 = -2085552128;
	// addi r26,r11,8324
	ctx.r26.s64 = ctx.r11.s64 + 8324;
	// lwz r3,-12(r26)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r26.u32 + -12);
	// bl 0x832f7660
	ctx.lr = 0x832F99EC;
	sub_832F7660(ctx, base);
	// lwz r11,-8(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + -8);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// bl 0x832f7660
	ctx.lr = 0x832F99FC;
	sub_832F7660(ctx, base);
	// cmpwi cr6,r31,1
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 1, ctx.xer);
	// bne cr6,0x832f9a0c
	if (!ctx.cr6.eq) goto loc_832F9A0C;
	// cmpwi cr6,r3,1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 1, ctx.xer);
	// beq cr6,0x832f9e74
	if (ctx.cr6.eq) goto loc_832F9E74;
loc_832F9A0C:
	// lis r11,-31823
	ctx.r11.s64 = -2085552128;
	// li r25,1
	ctx.r25.s64 = 1;
	// addi r30,r11,-28824
	ctx.r30.s64 = ctx.r11.s64 + -28824;
	// lis r11,-32210
	ctx.r11.s64 = -2110914560;
	// addi r31,r30,392
	ctx.r31.s64 = ctx.r30.s64 + 392;
	// li r28,3
	ctx.r28.s64 = 3;
	// li r27,0
	ctx.r27.s64 = 0;
	// addi r29,r11,-16148
	ctx.r29.s64 = ctx.r11.s64 + -16148;
loc_832F9A2C:
	// lwz r11,-392(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -392);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x832f9aac
	if (!ctx.cr6.eq) goto loc_832F9AAC;
	// lwz r11,-384(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -384);
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bne cr6,0x832f9aac
	if (!ctx.cr6.eq) goto loc_832F9AAC;
	// lwz r4,-80(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + -80);
	// lwz r3,64(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 64);
	// bl 0x832f78b0
	ctx.lr = 0x832F9A50;
	sub_832F78B0(ctx, base);
	// cmpwi cr6,r3,1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 1, ctx.xer);
	// bne cr6,0x832f9aac
	if (!ctx.cr6.eq) goto loc_832F9AAC;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x832f9a7c
	if (!ctx.cr6.eq) goto loc_832F9A7C;
	// lwz r11,-96(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -96);
	// stw r25,-388(r31)
	PPC_STORE_U32(ctx.r31.u32 + -388, ctx.r25.u32);
	// rlwinm r11,r11,11,0,20
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 11) & 0xFFFFF800;
	// extsw r11,r11
	ctx.r11.s64 = ctx.r11.s32;
	// std r11,-88(r31)
	PPC_STORE_U64(ctx.r31.u32 + -88, ctx.r11.u64);
	// b 0x832f9aa4
	goto loc_832F9AA4;
loc_832F9A7C:
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// lwz r6,4(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// addi r3,r30,-448
	ctx.r3.s64 = ctx.r30.s64 + -448;
	// addi r7,r31,-376
	ctx.r7.s64 = ctx.r31.s64 + -376;
	// li r4,324
	ctx.r4.s64 = 324;
	// bl 0x832ff9a8
	ctx.lr = 0x832F9A94;
	sub_832FF9A8(ctx, base);
	// addi r3,r30,-448
	ctx.r3.s64 = ctx.r30.s64 + -448;
	// bl 0x832f8608
	ctx.lr = 0x832F9A9C;
	sub_832F8608(ctx, base);
	// stw r28,-388(r31)
	PPC_STORE_U32(ctx.r31.u32 + -388, ctx.r28.u32);
	// std r27,-88(r31)
	PPC_STORE_U64(ctx.r31.u32 + -88, ctx.r27.u64);
loc_832F9AA4:
	// stw r27,-384(r31)
	PPC_STORE_U32(ctx.r31.u32 + -384, ctx.r27.u32);
	// stw r27,-80(r31)
	PPC_STORE_U32(ctx.r31.u32 + -80, ctx.r27.u32);
loc_832F9AAC:
	// addis r11,r30,1
	ctx.r11.s64 = ctx.r30.s64 + 65536;
	// addi r31,r31,464
	ctx.r31.s64 = ctx.r31.s64 + 464;
	// addi r11,r11,-28024
	ctx.r11.s64 = ctx.r11.s64 + -28024;
	// cmpw cr6,r31,r11
	ctx.cr6.compare<int32_t>(ctx.r31.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x832f9a2c
	if (ctx.cr6.lt) goto loc_832F9A2C;
	// lis r11,-32210
	ctx.r11.s64 = -2110914560;
	// addi r31,r30,344
	ctx.r31.s64 = ctx.r30.s64 + 344;
	// addi r29,r11,-16084
	ctx.r29.s64 = ctx.r11.s64 + -16084;
loc_832F9ACC:
	// lwz r11,-344(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -344);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x832f9b54
	if (!ctx.cr6.eq) goto loc_832F9B54;
	// lwz r11,-336(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -336);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x832f9b54
	if (!ctx.cr6.eq) goto loc_832F9B54;
	// lwz r4,-32(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + -32);
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// ble cr6,0x832f9b54
	if (!ctx.cr6.gt) goto loc_832F9B54;
	// lwz r3,112(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 112);
	// bl 0x832f78b0
	ctx.lr = 0x832F9AF8;
	sub_832F78B0(ctx, base);
	// cmpwi cr6,r3,1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 1, ctx.xer);
	// bne cr6,0x832f9b54
	if (!ctx.cr6.eq) goto loc_832F9B54;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x832f9b28
	if (!ctx.cr6.eq) goto loc_832F9B28;
	// lwz r11,-20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -20);
	// ld r10,-16(r31)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r31.u32 + -16);
	// lwz r9,-8(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + -8);
	// stw r11,-68(r31)
	PPC_STORE_U32(ctx.r31.u32 + -68, ctx.r11.u32);
	// std r10,-64(r31)
	PPC_STORE_U64(ctx.r31.u32 + -64, ctx.r10.u64);
	// stw r9,-56(r31)
	PPC_STORE_U32(ctx.r31.u32 + -56, ctx.r9.u32);
	// b 0x832f9b4c
	goto loc_832F9B4C;
loc_832F9B28:
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// lwz r6,4(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// addi r3,r30,-448
	ctx.r3.s64 = ctx.r30.s64 + -448;
	// addi r7,r31,-328
	ctx.r7.s64 = ctx.r31.s64 + -328;
	// li r4,324
	ctx.r4.s64 = 324;
	// bl 0x832ff9a8
	ctx.lr = 0x832F9B40;
	sub_832FF9A8(ctx, base);
	// addi r3,r30,-448
	ctx.r3.s64 = ctx.r30.s64 + -448;
	// bl 0x832f8608
	ctx.lr = 0x832F9B48;
	sub_832F8608(ctx, base);
	// stw r28,-340(r31)
	PPC_STORE_U32(ctx.r31.u32 + -340, ctx.r28.u32);
loc_832F9B4C:
	// stw r27,-336(r31)
	PPC_STORE_U32(ctx.r31.u32 + -336, ctx.r27.u32);
	// stw r27,-32(r31)
	PPC_STORE_U32(ctx.r31.u32 + -32, ctx.r27.u32);
loc_832F9B54:
	// addis r11,r30,1
	ctx.r11.s64 = ctx.r30.s64 + 65536;
	// addi r31,r31,464
	ctx.r31.s64 = ctx.r31.s64 + 464;
	// addi r11,r11,-28072
	ctx.r11.s64 = ctx.r11.s64 + -28072;
	// cmpw cr6,r31,r11
	ctx.cr6.compare<int32_t>(ctx.r31.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x832f9acc
	if (ctx.cr6.lt) goto loc_832F9ACC;
	// lis r11,-32210
	ctx.r11.s64 = -2110914560;
	// addi r31,r30,392
	ctx.r31.s64 = ctx.r30.s64 + 392;
	// addi r29,r11,-16024
	ctx.r29.s64 = ctx.r11.s64 + -16024;
loc_832F9B74:
	// lwz r11,-392(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -392);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x832f9bfc
	if (!ctx.cr6.eq) goto loc_832F9BFC;
	// lwz r11,-384(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -384);
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// bne cr6,0x832f9bfc
	if (!ctx.cr6.eq) goto loc_832F9BFC;
	// lwz r4,-80(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + -80);
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// ble cr6,0x832f9bfc
	if (!ctx.cr6.gt) goto loc_832F9BFC;
	// lwz r3,64(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 64);
	// bl 0x832f78b0
	ctx.lr = 0x832F9BA0;
	sub_832F78B0(ctx, base);
	// cmpwi cr6,r3,1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 1, ctx.xer);
	// bne cr6,0x832f9bfc
	if (!ctx.cr6.eq) goto loc_832F9BFC;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x832f9bcc
	if (!ctx.cr6.eq) goto loc_832F9BCC;
	// lwz r11,-96(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -96);
	// stw r25,-388(r31)
	PPC_STORE_U32(ctx.r31.u32 + -388, ctx.r25.u32);
	// rlwinm r11,r11,11,0,20
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 11) & 0xFFFFF800;
	// extsw r11,r11
	ctx.r11.s64 = ctx.r11.s32;
	// std r11,-88(r31)
	PPC_STORE_U64(ctx.r31.u32 + -88, ctx.r11.u64);
	// b 0x832f9bf4
	goto loc_832F9BF4;
loc_832F9BCC:
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// lwz r6,4(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// addi r3,r30,-448
	ctx.r3.s64 = ctx.r30.s64 + -448;
	// addi r7,r31,-376
	ctx.r7.s64 = ctx.r31.s64 + -376;
	// li r4,324
	ctx.r4.s64 = 324;
	// bl 0x832ff9a8
	ctx.lr = 0x832F9BE4;
	sub_832FF9A8(ctx, base);
	// addi r3,r30,-448
	ctx.r3.s64 = ctx.r30.s64 + -448;
	// bl 0x832f8608
	ctx.lr = 0x832F9BEC;
	sub_832F8608(ctx, base);
	// stw r28,-388(r31)
	PPC_STORE_U32(ctx.r31.u32 + -388, ctx.r28.u32);
	// std r27,-88(r31)
	PPC_STORE_U64(ctx.r31.u32 + -88, ctx.r27.u64);
loc_832F9BF4:
	// stw r27,-384(r31)
	PPC_STORE_U32(ctx.r31.u32 + -384, ctx.r27.u32);
	// stw r27,-80(r31)
	PPC_STORE_U32(ctx.r31.u32 + -80, ctx.r27.u32);
loc_832F9BFC:
	// addis r11,r30,1
	ctx.r11.s64 = ctx.r30.s64 + 65536;
	// addi r31,r31,464
	ctx.r31.s64 = ctx.r31.s64 + 464;
	// addi r11,r11,-28024
	ctx.r11.s64 = ctx.r11.s64 + -28024;
	// cmpw cr6,r31,r11
	ctx.cr6.compare<int32_t>(ctx.r31.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x832f9b74
	if (ctx.cr6.lt) goto loc_832F9B74;
	// lis r11,-32210
	ctx.r11.s64 = -2110914560;
	// addi r31,r30,344
	ctx.r31.s64 = ctx.r30.s64 + 344;
	// addi r29,r11,-15960
	ctx.r29.s64 = ctx.r11.s64 + -15960;
loc_832F9C1C:
	// lwz r11,-344(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -344);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x832f9ca4
	if (!ctx.cr6.eq) goto loc_832F9CA4;
	// lwz r11,-336(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -336);
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// bne cr6,0x832f9ca4
	if (!ctx.cr6.eq) goto loc_832F9CA4;
	// lwz r4,-32(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + -32);
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// ble cr6,0x832f9ca4
	if (!ctx.cr6.gt) goto loc_832F9CA4;
	// lwz r3,112(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 112);
	// bl 0x832f78b0
	ctx.lr = 0x832F9C48;
	sub_832F78B0(ctx, base);
	// cmpwi cr6,r3,1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 1, ctx.xer);
	// bne cr6,0x832f9ca4
	if (!ctx.cr6.eq) goto loc_832F9CA4;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x832f9c78
	if (!ctx.cr6.eq) goto loc_832F9C78;
	// lwz r11,-20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -20);
	// ld r10,-16(r31)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r31.u32 + -16);
	// lwz r9,-8(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + -8);
	// stw r11,-68(r31)
	PPC_STORE_U32(ctx.r31.u32 + -68, ctx.r11.u32);
	// std r10,-64(r31)
	PPC_STORE_U64(ctx.r31.u32 + -64, ctx.r10.u64);
	// stw r9,-56(r31)
	PPC_STORE_U32(ctx.r31.u32 + -56, ctx.r9.u32);
	// b 0x832f9c9c
	goto loc_832F9C9C;
loc_832F9C78:
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// lwz r6,4(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// addi r3,r30,-448
	ctx.r3.s64 = ctx.r30.s64 + -448;
	// addi r7,r31,-328
	ctx.r7.s64 = ctx.r31.s64 + -328;
	// li r4,324
	ctx.r4.s64 = 324;
	// bl 0x832ff9a8
	ctx.lr = 0x832F9C90;
	sub_832FF9A8(ctx, base);
	// addi r3,r30,-448
	ctx.r3.s64 = ctx.r30.s64 + -448;
	// bl 0x832f8608
	ctx.lr = 0x832F9C98;
	sub_832F8608(ctx, base);
	// stw r28,-340(r31)
	PPC_STORE_U32(ctx.r31.u32 + -340, ctx.r28.u32);
loc_832F9C9C:
	// stw r27,-336(r31)
	PPC_STORE_U32(ctx.r31.u32 + -336, ctx.r27.u32);
	// stw r27,-32(r31)
	PPC_STORE_U32(ctx.r31.u32 + -32, ctx.r27.u32);
loc_832F9CA4:
	// addis r11,r30,1
	ctx.r11.s64 = ctx.r30.s64 + 65536;
	// addi r31,r31,464
	ctx.r31.s64 = ctx.r31.s64 + 464;
	// addi r11,r11,-28072
	ctx.r11.s64 = ctx.r11.s64 + -28072;
	// cmpw cr6,r31,r11
	ctx.cr6.compare<int32_t>(ctx.r31.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x832f9c1c
	if (ctx.cr6.lt) goto loc_832F9C1C;
	// lis r11,-32210
	ctx.r11.s64 = -2110914560;
	// addi r31,r30,428
	ctx.r31.s64 = ctx.r30.s64 + 428;
	// addi r29,r11,-15900
	ctx.r29.s64 = ctx.r11.s64 + -15900;
loc_832F9CC4:
	// lwz r11,-428(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -428);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x832f9d54
	if (!ctx.cr6.eq) goto loc_832F9D54;
	// lwz r11,-420(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -420);
	// cmpwi cr6,r11,5
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 5, ctx.xer);
	// bne cr6,0x832f9d54
	if (!ctx.cr6.eq) goto loc_832F9D54;
	// lwz r4,-116(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + -116);
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// ble cr6,0x832f9d54
	if (!ctx.cr6.gt) goto loc_832F9D54;
	// lwz r3,28(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// bl 0x832f78b0
	ctx.lr = 0x832F9CF0;
	sub_832F78B0(ctx, base);
	// cmpwi cr6,r3,1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 1, ctx.xer);
	// bne cr6,0x832f9d54
	if (!ctx.cr6.eq) goto loc_832F9D54;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x832f9d28
	if (!ctx.cr6.eq) goto loc_832F9D28;
	// lwz r11,-4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -4);
	// ld r10,-12(r31)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r31.u32 + -12);
	// lwz r9,-136(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + -136);
	// cmpw cr6,r9,r11
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r11.s32, ctx.xer);
	// stw r11,-140(r31)
	PPC_STORE_U32(ctx.r31.u32 + -140, ctx.r11.u32);
	// std r10,-148(r31)
	PPC_STORE_U64(ctx.r31.u32 + -148, ctx.r10.u64);
	// ble cr6,0x832f9d4c
	if (!ctx.cr6.gt) goto loc_832F9D4C;
	// stw r11,-136(r31)
	PPC_STORE_U32(ctx.r31.u32 + -136, ctx.r11.u32);
	// b 0x832f9d4c
	goto loc_832F9D4C;
loc_832F9D28:
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// lwz r6,4(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// addi r3,r30,-448
	ctx.r3.s64 = ctx.r30.s64 + -448;
	// addi r7,r31,-412
	ctx.r7.s64 = ctx.r31.s64 + -412;
	// li r4,324
	ctx.r4.s64 = 324;
	// bl 0x832ff9a8
	ctx.lr = 0x832F9D40;
	sub_832FF9A8(ctx, base);
	// addi r3,r30,-448
	ctx.r3.s64 = ctx.r30.s64 + -448;
	// bl 0x832f8608
	ctx.lr = 0x832F9D48;
	sub_832F8608(ctx, base);
	// stw r28,-424(r31)
	PPC_STORE_U32(ctx.r31.u32 + -424, ctx.r28.u32);
loc_832F9D4C:
	// stw r27,-420(r31)
	PPC_STORE_U32(ctx.r31.u32 + -420, ctx.r27.u32);
	// stw r27,-116(r31)
	PPC_STORE_U32(ctx.r31.u32 + -116, ctx.r27.u32);
loc_832F9D54:
	// addis r11,r30,1
	ctx.r11.s64 = ctx.r30.s64 + 65536;
	// addi r31,r31,464
	ctx.r31.s64 = ctx.r31.s64 + 464;
	// addi r11,r11,-27988
	ctx.r11.s64 = ctx.r11.s64 + -27988;
	// cmpw cr6,r31,r11
	ctx.cr6.compare<int32_t>(ctx.r31.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x832f9cc4
	if (ctx.cr6.lt) goto loc_832F9CC4;
	// lis r11,-32210
	ctx.r11.s64 = -2110914560;
	// addi r31,r30,448
	ctx.r31.s64 = ctx.r30.s64 + 448;
	// addi r29,r11,-15840
	ctx.r29.s64 = ctx.r11.s64 + -15840;
loc_832F9D74:
	// lwz r11,-448(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -448);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x832f9de8
	if (!ctx.cr6.eq) goto loc_832F9DE8;
	// lwz r11,-440(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -440);
	// cmpwi cr6,r11,6
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 6, ctx.xer);
	// bne cr6,0x832f9de8
	if (!ctx.cr6.eq) goto loc_832F9DE8;
	// lwz r4,-136(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + -136);
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// ble cr6,0x832f9de8
	if (!ctx.cr6.gt) goto loc_832F9DE8;
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// bl 0x832f78b0
	ctx.lr = 0x832F9DA0;
	sub_832F78B0(ctx, base);
	// cmpwi cr6,r3,1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 1, ctx.xer);
	// bne cr6,0x832f9de8
	if (!ctx.cr6.eq) goto loc_832F9DE8;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x832f9dbc
	if (!ctx.cr6.eq) goto loc_832F9DBC;
	// stw r27,-172(r31)
	PPC_STORE_U32(ctx.r31.u32 + -172, ctx.r27.u32);
	// b 0x832f9de0
	goto loc_832F9DE0;
loc_832F9DBC:
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// lwz r6,4(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// addi r3,r30,-448
	ctx.r3.s64 = ctx.r30.s64 + -448;
	// addi r7,r31,-432
	ctx.r7.s64 = ctx.r31.s64 + -432;
	// li r4,324
	ctx.r4.s64 = 324;
	// bl 0x832ff9a8
	ctx.lr = 0x832F9DD4;
	sub_832FF9A8(ctx, base);
	// addi r3,r30,-448
	ctx.r3.s64 = ctx.r30.s64 + -448;
	// bl 0x832f8608
	ctx.lr = 0x832F9DDC;
	sub_832F8608(ctx, base);
	// stw r28,-444(r31)
	PPC_STORE_U32(ctx.r31.u32 + -444, ctx.r28.u32);
loc_832F9DE0:
	// stw r27,-440(r31)
	PPC_STORE_U32(ctx.r31.u32 + -440, ctx.r27.u32);
	// stw r27,-136(r31)
	PPC_STORE_U32(ctx.r31.u32 + -136, ctx.r27.u32);
loc_832F9DE8:
	// addis r11,r30,1
	ctx.r11.s64 = ctx.r30.s64 + 65536;
	// addi r31,r31,464
	ctx.r31.s64 = ctx.r31.s64 + 464;
	// addi r11,r11,-27968
	ctx.r11.s64 = ctx.r11.s64 + -27968;
	// cmpw cr6,r31,r11
	ctx.cr6.compare<int32_t>(ctx.r31.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x832f9d74
	if (ctx.cr6.lt) goto loc_832F9D74;
	// lwz r11,-4(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + -4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x832f9e74
	if (ctx.cr6.eq) goto loc_832F9E74;
	// lwz r4,0(r26)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// ble cr6,0x832f9e74
	if (!ctx.cr6.gt) goto loc_832F9E74;
	// lwz r3,-8(r26)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r26.u32 + -8);
	// bl 0x832f78b0
	ctx.lr = 0x832F9E1C;
	sub_832F78B0(ctx, base);
	// cmpwi cr6,r3,1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 1, ctx.xer);
	// bne cr6,0x832f9e74
	if (!ctx.cr6.eq) goto loc_832F9E74;
	// lwz r11,-4(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + -4);
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x832f9e60
	if (ctx.cr6.eq) goto loc_832F9E60;
	// lis r10,-32210
	ctx.r10.s64 = -2110914560;
	// lwz r8,4(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// addi r3,r30,-448
	ctx.r3.s64 = ctx.r30.s64 + -448;
	// lwz r7,0(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// addi r5,r10,-15776
	ctx.r5.s64 = ctx.r10.s64 + -15776;
	// lwz r6,16(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// li r4,324
	ctx.r4.s64 = 324;
	// bl 0x832ff9a8
	ctx.lr = 0x832F9E54;
	sub_832FF9A8(ctx, base);
	// addi r3,r30,-448
	ctx.r3.s64 = ctx.r30.s64 + -448;
	// bl 0x832f8608
	ctx.lr = 0x832F9E5C;
	sub_832F8608(ctx, base);
	// lwz r11,-4(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + -4);
loc_832F9E60:
	// stw r25,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r25.u32);
	// mr r10,r27
	ctx.r10.u64 = ctx.r27.u64;
	// mr r11,r27
	ctx.r11.u64 = ctx.r27.u64;
	// stw r27,0(r26)
	PPC_STORE_U32(ctx.r26.u32 + 0, ctx.r27.u32);
	// stw r27,-4(r26)
	PPC_STORE_U32(ctx.r26.u32 + -4, ctx.r27.u32);
loc_832F9E74:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x833a01ec
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832F9E7C"))) PPC_WEAK_FUNC(sub_832F9E7C);
PPC_FUNC_IMPL(__imp__sub_832F9E7C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832F9E80"))) PPC_WEAK_FUNC(sub_832F9E80);
PPC_FUNC_IMPL(__imp__sub_832F9E80) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x833a01ac
	ctx.lr = 0x832F9E88;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31823
	ctx.r11.s64 = -2085552128;
	// addi r29,r11,8324
	ctx.r29.s64 = ctx.r11.s64 + 8324;
	// lwz r3,-12(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + -12);
	// bl 0x832f7660
	ctx.lr = 0x832F9E9C;
	sub_832F7660(ctx, base);
	// lwz r11,-8(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + -8);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// bl 0x832f7660
	ctx.lr = 0x832F9EAC;
	sub_832F7660(ctx, base);
	// cmpwi cr6,r31,1
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 1, ctx.xer);
	// bne cr6,0x832f9ebc
	if (!ctx.cr6.eq) goto loc_832F9EBC;
	// cmpwi cr6,r3,1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 1, ctx.xer);
	// beq cr6,0x832fa094
	if (ctx.cr6.eq) goto loc_832FA094;
loc_832F9EBC:
	// lis r11,-31823
	ctx.r11.s64 = -2085552128;
	// addi r30,r11,-28824
	ctx.r30.s64 = ctx.r11.s64 + -28824;
	// addi r31,r30,320
	ctx.r31.s64 = ctx.r30.s64 + 320;
loc_832F9EC8:
	// lwz r11,-320(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -320);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x832f9f04
	if (!ctx.cr6.eq) goto loc_832F9F04;
	// lwz r11,-312(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -312);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x832f9f04
	if (!ctx.cr6.eq) goto loc_832F9F04;
	// lwz r11,-8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -8);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bgt cr6,0x832f9f04
	if (ctx.cr6.gt) goto loc_832F9F04;
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
	// lwz r3,136(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 136);
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// addi r4,r11,-30744
	ctx.r4.s64 = ctx.r11.s64 + -30744;
	// bl 0x832f76f8
	ctx.lr = 0x832F9F00;
	sub_832F76F8(ctx, base);
	// stw r3,-8(r31)
	PPC_STORE_U32(ctx.r31.u32 + -8, ctx.r3.u32);
loc_832F9F04:
	// addis r11,r30,1
	ctx.r11.s64 = ctx.r30.s64 + 65536;
	// addi r31,r31,464
	ctx.r31.s64 = ctx.r31.s64 + 464;
	// addi r11,r11,-28096
	ctx.r11.s64 = ctx.r11.s64 + -28096;
	// cmpw cr6,r31,r11
	ctx.cr6.compare<int32_t>(ctx.r31.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x832f9ec8
	if (ctx.cr6.lt) goto loc_832F9EC8;
	// addi r31,r30,352
	ctx.r31.s64 = ctx.r30.s64 + 352;
loc_832F9F1C:
	// lwz r11,-352(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -352);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x832f9f58
	if (!ctx.cr6.eq) goto loc_832F9F58;
	// lwz r11,-344(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -344);
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// bne cr6,0x832f9f58
	if (!ctx.cr6.eq) goto loc_832F9F58;
	// lwz r11,-40(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -40);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bgt cr6,0x832f9f58
	if (ctx.cr6.gt) goto loc_832F9F58;
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
	// lwz r3,104(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 104);
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// addi r4,r11,-30016
	ctx.r4.s64 = ctx.r11.s64 + -30016;
	// bl 0x832f76f8
	ctx.lr = 0x832F9F54;
	sub_832F76F8(ctx, base);
	// stw r3,-40(r31)
	PPC_STORE_U32(ctx.r31.u32 + -40, ctx.r3.u32);
loc_832F9F58:
	// addis r11,r30,1
	ctx.r11.s64 = ctx.r30.s64 + 65536;
	// addi r31,r31,464
	ctx.r31.s64 = ctx.r31.s64 + 464;
	// addi r11,r11,-28064
	ctx.r11.s64 = ctx.r11.s64 + -28064;
	// cmpw cr6,r31,r11
	ctx.cr6.compare<int32_t>(ctx.r31.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x832f9f1c
	if (ctx.cr6.lt) goto loc_832F9F1C;
	// addi r31,r30,320
	ctx.r31.s64 = ctx.r30.s64 + 320;
loc_832F9F70:
	// lwz r11,-320(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -320);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x832f9fac
	if (!ctx.cr6.eq) goto loc_832F9FAC;
	// lwz r11,-312(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -312);
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// bne cr6,0x832f9fac
	if (!ctx.cr6.eq) goto loc_832F9FAC;
	// lwz r11,-8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -8);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bgt cr6,0x832f9fac
	if (ctx.cr6.gt) goto loc_832F9FAC;
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
	// lwz r3,136(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 136);
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// addi r4,r11,-30504
	ctx.r4.s64 = ctx.r11.s64 + -30504;
	// bl 0x832f76f8
	ctx.lr = 0x832F9FA8;
	sub_832F76F8(ctx, base);
	// stw r3,-8(r31)
	PPC_STORE_U32(ctx.r31.u32 + -8, ctx.r3.u32);
loc_832F9FAC:
	// addis r11,r30,1
	ctx.r11.s64 = ctx.r30.s64 + 65536;
	// addi r31,r31,464
	ctx.r31.s64 = ctx.r31.s64 + 464;
	// addi r11,r11,-28096
	ctx.r11.s64 = ctx.r11.s64 + -28096;
	// cmpw cr6,r31,r11
	ctx.cr6.compare<int32_t>(ctx.r31.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x832f9f70
	if (ctx.cr6.lt) goto loc_832F9F70;
	// addi r31,r30,408
	ctx.r31.s64 = ctx.r30.s64 + 408;
loc_832F9FC4:
	// lwz r11,-408(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -408);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x832fa000
	if (!ctx.cr6.eq) goto loc_832FA000;
	// lwz r11,-400(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -400);
	// cmpwi cr6,r11,5
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 5, ctx.xer);
	// bne cr6,0x832fa000
	if (!ctx.cr6.eq) goto loc_832FA000;
	// lwz r11,-96(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -96);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bgt cr6,0x832fa000
	if (ctx.cr6.gt) goto loc_832FA000;
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
	// lwz r3,48(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// addi r4,r11,-29720
	ctx.r4.s64 = ctx.r11.s64 + -29720;
	// bl 0x832f76f8
	ctx.lr = 0x832F9FFC;
	sub_832F76F8(ctx, base);
	// stw r3,-96(r31)
	PPC_STORE_U32(ctx.r31.u32 + -96, ctx.r3.u32);
loc_832FA000:
	// addis r11,r30,1
	ctx.r11.s64 = ctx.r30.s64 + 65536;
	// addi r31,r31,464
	ctx.r31.s64 = ctx.r31.s64 + 464;
	// addi r11,r11,-28008
	ctx.r11.s64 = ctx.r11.s64 + -28008;
	// cmpw cr6,r31,r11
	ctx.cr6.compare<int32_t>(ctx.r31.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x832f9fc4
	if (ctx.cr6.lt) goto loc_832F9FC4;
	// addi r31,r30,440
	ctx.r31.s64 = ctx.r30.s64 + 440;
loc_832FA018:
	// lwz r11,-440(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -440);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x832fa054
	if (!ctx.cr6.eq) goto loc_832FA054;
	// lwz r11,-432(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -432);
	// cmpwi cr6,r11,6
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 6, ctx.xer);
	// bne cr6,0x832fa054
	if (!ctx.cr6.eq) goto loc_832FA054;
	// lwz r11,-128(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -128);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bgt cr6,0x832fa054
	if (ctx.cr6.gt) goto loc_832FA054;
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
	// lwz r3,16(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// addi r4,r11,-29544
	ctx.r4.s64 = ctx.r11.s64 + -29544;
	// bl 0x832f76f8
	ctx.lr = 0x832FA050;
	sub_832F76F8(ctx, base);
	// stw r3,-128(r31)
	PPC_STORE_U32(ctx.r31.u32 + -128, ctx.r3.u32);
loc_832FA054:
	// addis r11,r30,1
	ctx.r11.s64 = ctx.r30.s64 + 65536;
	// addi r31,r31,464
	ctx.r31.s64 = ctx.r31.s64 + 464;
	// addi r11,r11,-27976
	ctx.r11.s64 = ctx.r11.s64 + -27976;
	// cmpw cr6,r31,r11
	ctx.cr6.compare<int32_t>(ctx.r31.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x832fa018
	if (ctx.cr6.lt) goto loc_832FA018;
	// lwz r5,-4(r29)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r29.u32 + -4);
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x832fa094
	if (ctx.cr6.eq) goto loc_832FA094;
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bgt cr6,0x832fa094
	if (ctx.cr6.gt) goto loc_832FA094;
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
	// lwz r3,-8(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + -8);
	// addi r4,r11,-29448
	ctx.r4.s64 = ctx.r11.s64 + -29448;
	// bl 0x832f76f8
	ctx.lr = 0x832FA090;
	sub_832F76F8(ctx, base);
	// stw r3,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r3.u32);
loc_832FA094:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x833a01fc
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832FA09C"))) PPC_WEAK_FUNC(sub_832FA09C);
PPC_FUNC_IMPL(__imp__sub_832FA09C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832FA0A0"))) PPC_WEAK_FUNC(sub_832FA0A0);
PPC_FUNC_IMPL(__imp__sub_832FA0A0) {
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
	// stwu r1,-368(r1)
	ea = -368 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r30,-31823
	ctx.r30.s64 = -2085552128;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r3,8304(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8304);
	// bl 0x832f40c0
	ctx.lr = 0x832FA0C4;
	sub_832F40C0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bge 0x832fa0d8
	if (!ctx.cr0.lt) goto loc_832FA0D8;
	// lis r11,-32210
	ctx.r11.s64 = -2110914560;
	// addi r3,r11,-16416
	ctx.r3.s64 = ctx.r11.s64 + -16416;
	// bl 0x832f8608
	ctx.lr = 0x832FA0D8;
	sub_832F8608(ctx, base);
loc_832FA0D8:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne cr6,0x832fa0f4
	if (!ctx.cr6.eq) goto loc_832FA0F4;
	// lis r11,-32210
	ctx.r11.s64 = -2110914560;
	// addi r3,r11,-15704
	ctx.r3.s64 = ctx.r11.s64 + -15704;
	// bl 0x832f8608
	ctx.lr = 0x832FA0EC;
	sub_832F8608(ctx, base);
loc_832FA0EC:
	// li r31,0
	ctx.r31.s64 = 0;
	// b 0x832fa118
	goto loc_832FA118;
loc_832FA0F4:
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83306010
	ctx.lr = 0x832FA100;
	sub_83306010(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x833becd0
	ctx.lr = 0x832FA108;
	sub_833BECD0(ctx, base);
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// beq cr6,0x832fa0ec
	if (ctx.cr6.eq) goto loc_832FA0EC;
	// not r11,r3
	ctx.r11.u64 = ~ctx.r3.u64;
	// rlwinm r31,r11,28,31,31
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 28) & 0x1;
loc_832FA118:
	// lwz r3,8304(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8304);
	// bl 0x832f4158
	ctx.lr = 0x832FA120;
	sub_832F4158(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bge 0x832fa134
	if (!ctx.cr0.lt) goto loc_832FA134;
	// lis r11,-32210
	ctx.r11.s64 = -2110914560;
	// addi r3,r11,-16320
	ctx.r3.s64 = ctx.r11.s64 + -16320;
	// bl 0x832f8608
	ctx.lr = 0x832FA134;
	sub_832F8608(ctx, base);
loc_832FA134:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,368
	ctx.r1.s64 = ctx.r1.s64 + 368;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_832FA150"))) PPC_WEAK_FUNC(sub_832FA150);
PPC_FUNC_IMPL(__imp__sub_832FA150) {
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
	// lis r30,-31823
	ctx.r30.s64 = -2085552128;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r3,8304(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8304);
	// bl 0x832f40c0
	ctx.lr = 0x832FA174;
	sub_832F40C0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bge 0x832fa188
	if (!ctx.cr0.lt) goto loc_832FA188;
	// lis r11,-32210
	ctx.r11.s64 = -2110914560;
	// addi r3,r11,-16416
	ctx.r3.s64 = ctx.r11.s64 + -16416;
	// bl 0x832f8608
	ctx.lr = 0x832FA188;
	sub_832F8608(ctx, base);
loc_832FA188:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne cr6,0x832fa1a4
	if (!ctx.cr6.eq) goto loc_832FA1A4;
	// lis r11,-32210
	ctx.r11.s64 = -2110914560;
	// addi r3,r11,-15504
	ctx.r3.s64 = ctx.r11.s64 + -15504;
loc_832FA198:
	// bl 0x832f8608
	ctx.lr = 0x832FA19C;
	sub_832F8608(ctx, base);
	// li r31,0
	ctx.r31.s64 = 0;
	// b 0x832fa1c8
	goto loc_832FA1C8;
loc_832FA1A4:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x832fa1bc
	if (!ctx.cr6.eq) goto loc_832FA1BC;
	// lis r11,-32210
	ctx.r11.s64 = -2110914560;
	// addi r3,r11,-15544
	ctx.r3.s64 = ctx.r11.s64 + -15544;
	// b 0x832fa198
	goto loc_832FA198;
loc_832FA1BC:
	// ld r11,280(r31)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r31.u32 + 280);
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lwz r31,84(r1)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
loc_832FA1C8:
	// lwz r3,8304(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8304);
	// bl 0x832f4158
	ctx.lr = 0x832FA1D0;
	sub_832F4158(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bge 0x832fa1e4
	if (!ctx.cr0.lt) goto loc_832FA1E4;
	// lis r11,-32210
	ctx.r11.s64 = -2110914560;
	// addi r3,r11,-16320
	ctx.r3.s64 = ctx.r11.s64 + -16320;
	// bl 0x832f8608
	ctx.lr = 0x832FA1E4;
	sub_832F8608(ctx, base);
loc_832FA1E4:
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

__attribute__((alias("__imp__sub_832FA200"))) PPC_WEAK_FUNC(sub_832FA200);
PPC_FUNC_IMPL(__imp__sub_832FA200) {
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
	// lis r30,-31823
	ctx.r30.s64 = -2085552128;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r3,8304(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8304);
	// bl 0x832f40c0
	ctx.lr = 0x832FA224;
	sub_832F40C0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bge 0x832fa238
	if (!ctx.cr0.lt) goto loc_832FA238;
	// lis r11,-32210
	ctx.r11.s64 = -2110914560;
	// addi r3,r11,-16416
	ctx.r3.s64 = ctx.r11.s64 + -16416;
	// bl 0x832f8608
	ctx.lr = 0x832FA238;
	sub_832F8608(ctx, base);
loc_832FA238:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne cr6,0x832fa254
	if (!ctx.cr6.eq) goto loc_832FA254;
	// lis r11,-32210
	ctx.r11.s64 = -2110914560;
	// addi r3,r11,-15424
	ctx.r3.s64 = ctx.r11.s64 + -15424;
loc_832FA248:
	// bl 0x832f8608
	ctx.lr = 0x832FA24C;
	sub_832F8608(ctx, base);
	// li r31,0
	ctx.r31.s64 = 0;
	// b 0x832fa278
	goto loc_832FA278;
loc_832FA254:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x832fa26c
	if (!ctx.cr6.eq) goto loc_832FA26C;
	// lis r11,-32210
	ctx.r11.s64 = -2110914560;
	// addi r3,r11,-15464
	ctx.r3.s64 = ctx.r11.s64 + -15464;
	// b 0x832fa248
	goto loc_832FA248;
loc_832FA26C:
	// ld r11,280(r31)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r31.u32 + 280);
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lwz r31,80(r1)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
loc_832FA278:
	// lwz r3,8304(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8304);
	// bl 0x832f4158
	ctx.lr = 0x832FA280;
	sub_832F4158(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bge 0x832fa294
	if (!ctx.cr0.lt) goto loc_832FA294;
	// lis r11,-32210
	ctx.r11.s64 = -2110914560;
	// addi r3,r11,-16320
	ctx.r3.s64 = ctx.r11.s64 + -16320;
	// bl 0x832f8608
	ctx.lr = 0x832FA294;
	sub_832F8608(ctx, base);
loc_832FA294:
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

__attribute__((alias("__imp__sub_832FA2B0"))) PPC_WEAK_FUNC(sub_832FA2B0);
PPC_FUNC_IMPL(__imp__sub_832FA2B0) {
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
	// lis r30,-31823
	ctx.r30.s64 = -2085552128;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r3,8304(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8304);
	// bl 0x832f40c0
	ctx.lr = 0x832FA2D4;
	sub_832F40C0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bge 0x832fa2e8
	if (!ctx.cr0.lt) goto loc_832FA2E8;
	// lis r11,-32210
	ctx.r11.s64 = -2110914560;
	// addi r3,r11,-16416
	ctx.r3.s64 = ctx.r11.s64 + -16416;
	// bl 0x832f8608
	ctx.lr = 0x832FA2E8;
	sub_832F8608(ctx, base);
loc_832FA2E8:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne cr6,0x832fa304
	if (!ctx.cr6.eq) goto loc_832FA304;
	// lis r11,-32210
	ctx.r11.s64 = -2110914560;
	// addi r3,r11,-15344
	ctx.r3.s64 = ctx.r11.s64 + -15344;
loc_832FA2F8:
	// bl 0x832f8608
	ctx.lr = 0x832FA2FC;
	sub_832F8608(ctx, base);
	// li r31,0
	ctx.r31.s64 = 0;
	// b 0x832fa328
	goto loc_832FA328;
loc_832FA304:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x832fa31c
	if (!ctx.cr6.eq) goto loc_832FA31C;
	// lis r11,-32210
	ctx.r11.s64 = -2110914560;
	// addi r3,r11,-15384
	ctx.r3.s64 = ctx.r11.s64 + -15384;
	// b 0x832fa2f8
	goto loc_832FA2F8;
loc_832FA31C:
	// ld r11,280(r31)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r31.u32 + 280);
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lwz r31,84(r1)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
loc_832FA328:
	// lwz r3,8304(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8304);
	// bl 0x832f4158
	ctx.lr = 0x832FA330;
	sub_832F4158(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bge 0x832fa344
	if (!ctx.cr0.lt) goto loc_832FA344;
	// lis r11,-32210
	ctx.r11.s64 = -2110914560;
	// addi r3,r11,-16320
	ctx.r3.s64 = ctx.r11.s64 + -16320;
	// bl 0x832f8608
	ctx.lr = 0x832FA344;
	sub_832F8608(ctx, base);
loc_832FA344:
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

__attribute__((alias("__imp__sub_832FA360"))) PPC_WEAK_FUNC(sub_832FA360);
PPC_FUNC_IMPL(__imp__sub_832FA360) {
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
	// lis r31,-31823
	ctx.r31.s64 = -2085552128;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r3,8304(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8304);
	// bl 0x832f40c0
	ctx.lr = 0x832FA384;
	sub_832F40C0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bge 0x832fa398
	if (!ctx.cr0.lt) goto loc_832FA398;
	// lis r11,-32210
	ctx.r11.s64 = -2110914560;
	// addi r3,r11,-16416
	ctx.r3.s64 = ctx.r11.s64 + -16416;
	// bl 0x832f8608
	ctx.lr = 0x832FA398;
	sub_832F8608(ctx, base);
loc_832FA398:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x832f9460
	ctx.lr = 0x832FA3A0;
	sub_832F9460(ctx, base);
	// lwz r3,8304(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8304);
	// bl 0x832f4158
	ctx.lr = 0x832FA3A8;
	sub_832F4158(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bge 0x832fa3bc
	if (!ctx.cr0.lt) goto loc_832FA3BC;
	// lis r11,-32210
	ctx.r11.s64 = -2110914560;
	// addi r3,r11,-16320
	ctx.r3.s64 = ctx.r11.s64 + -16320;
	// bl 0x832f8608
	ctx.lr = 0x832FA3BC;
	sub_832F8608(ctx, base);
loc_832FA3BC:
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

__attribute__((alias("__imp__sub_832FA3D4"))) PPC_WEAK_FUNC(sub_832FA3D4);
PPC_FUNC_IMPL(__imp__sub_832FA3D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832FA3D8"))) PPC_WEAK_FUNC(sub_832FA3D8);
PPC_FUNC_IMPL(__imp__sub_832FA3D8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x833a01a8
	ctx.lr = 0x832FA3E0;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r28,-31823
	ctx.r28.s64 = -2085552128;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// lwz r3,8304(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 8304);
	// bl 0x832f40c0
	ctx.lr = 0x832FA3FC;
	sub_832F40C0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bge 0x832fa410
	if (!ctx.cr0.lt) goto loc_832FA410;
	// lis r11,-32210
	ctx.r11.s64 = -2110914560;
	// addi r3,r11,-16416
	ctx.r3.s64 = ctx.r11.s64 + -16416;
	// bl 0x832f8608
	ctx.lr = 0x832FA410;
	sub_832F8608(ctx, base);
loc_832FA410:
	// li r11,0
	ctx.r11.s64 = 0;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne cr6,0x832fa430
	if (!ctx.cr6.eq) goto loc_832FA430;
	// lis r11,-32210
	ctx.r11.s64 = -2110914560;
	// addi r3,r11,-15004
	ctx.r3.s64 = ctx.r11.s64 + -15004;
loc_832FA424:
	// bl 0x832f8608
	ctx.lr = 0x832FA428;
	sub_832F8608(ctx, base);
	// li r31,0
	ctx.r31.s64 = 0;
	// b 0x832fa4a0
	goto loc_832FA4A0;
loc_832FA430:
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x832fa448
	if (!ctx.cr6.eq) goto loc_832FA448;
	// lis r11,-32210
	ctx.r11.s64 = -2110914560;
	// addi r3,r11,-15044
	ctx.r3.s64 = ctx.r11.s64 + -15044;
	// b 0x832fa424
	goto loc_832FA424;
loc_832FA448:
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// bne cr6,0x832fa458
	if (!ctx.cr6.eq) goto loc_832FA458;
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
	// b 0x832fa478
	goto loc_832FA478;
loc_832FA458:
	// cmpwi cr6,r29,2
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 2, ctx.xer);
	// bne cr6,0x832fa468
	if (!ctx.cr6.eq) goto loc_832FA468;
	// lwz r11,288(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 288);
	// b 0x832fa474
	goto loc_832FA474;
loc_832FA468:
	// cmpwi cr6,r29,1
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 1, ctx.xer);
	// bne cr6,0x832fa478
	if (!ctx.cr6.eq) goto loc_832FA478;
	// lwz r11,292(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 292);
loc_832FA474:
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + ctx.r30.u64;
loc_832FA478:
	// lwz r10,288(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 288);
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// blt cr6,0x832fa488
	if (ctx.cr6.lt) goto loc_832FA488;
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
loc_832FA488:
	// subfic r10,r11,0
	ctx.xer.ca = ctx.r11.u32 <= 0;
	ctx.r10.s64 = 0 - ctx.r11.s64;
	// rlwinm r10,r11,1,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0x1;
	// addme r10,r10
	temp.u64 = ctx.r10.u32 + ctx.xer.ca + 0xFFFFFFFF;
	ctx.xer.ca = temp.u64 >> 32;
	ctx.r10.u64 = temp.u32;
	// and r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 & ctx.r11.u64;
	// stw r11,292(r31)
	PPC_STORE_U32(ctx.r31.u32 + 292, ctx.r11.u32);
	// mr r31,r11
	ctx.r31.u64 = ctx.r11.u64;
loc_832FA4A0:
	// lwz r3,8304(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 8304);
	// bl 0x832f4158
	ctx.lr = 0x832FA4A8;
	sub_832F4158(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bge 0x832fa4bc
	if (!ctx.cr0.lt) goto loc_832FA4BC;
	// lis r11,-32210
	ctx.r11.s64 = -2110914560;
	// addi r3,r11,-16320
	ctx.r3.s64 = ctx.r11.s64 + -16320;
	// bl 0x832f8608
	ctx.lr = 0x832FA4BC;
	sub_832F8608(ctx, base);
loc_832FA4BC:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x833a01f8
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832FA4C8"))) PPC_WEAK_FUNC(sub_832FA4C8);
PPC_FUNC_IMPL(__imp__sub_832FA4C8) {
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
	// lis r30,-31823
	ctx.r30.s64 = -2085552128;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r3,8304(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8304);
	// bl 0x832f40c0
	ctx.lr = 0x832FA4EC;
	sub_832F40C0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bge 0x832fa500
	if (!ctx.cr0.lt) goto loc_832FA500;
	// lis r11,-32210
	ctx.r11.s64 = -2110914560;
	// addi r3,r11,-16416
	ctx.r3.s64 = ctx.r11.s64 + -16416;
	// bl 0x832f8608
	ctx.lr = 0x832FA500;
	sub_832F8608(ctx, base);
loc_832FA500:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne cr6,0x832fa51c
	if (!ctx.cr6.eq) goto loc_832FA51C;
	// lis r11,-32210
	ctx.r11.s64 = -2110914560;
	// addi r3,r11,-14924
	ctx.r3.s64 = ctx.r11.s64 + -14924;
loc_832FA510:
	// bl 0x832f8608
	ctx.lr = 0x832FA514;
	sub_832F8608(ctx, base);
	// li r31,0
	ctx.r31.s64 = 0;
	// b 0x832fa538
	goto loc_832FA538;
loc_832FA51C:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x832fa534
	if (!ctx.cr6.eq) goto loc_832FA534;
	// lis r11,-32210
	ctx.r11.s64 = -2110914560;
	// addi r3,r11,-14964
	ctx.r3.s64 = ctx.r11.s64 + -14964;
	// b 0x832fa510
	goto loc_832FA510;
loc_832FA534:
	// lwz r31,292(r31)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r31.u32 + 292);
loc_832FA538:
	// lwz r3,8304(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8304);
	// bl 0x832f4158
	ctx.lr = 0x832FA540;
	sub_832F4158(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bge 0x832fa554
	if (!ctx.cr0.lt) goto loc_832FA554;
	// lis r11,-32210
	ctx.r11.s64 = -2110914560;
	// addi r3,r11,-16320
	ctx.r3.s64 = ctx.r11.s64 + -16320;
	// bl 0x832f8608
	ctx.lr = 0x832FA554;
	sub_832F8608(ctx, base);
loc_832FA554:
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

__attribute__((alias("__imp__sub_832FA570"))) PPC_WEAK_FUNC(sub_832FA570);
PPC_FUNC_IMPL(__imp__sub_832FA570) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x833a01a8
	ctx.lr = 0x832FA578;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r31,-31823
	ctx.r31.s64 = -2085552128;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// lwz r3,8304(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8304);
	// bl 0x832f40c0
	ctx.lr = 0x832FA594;
	sub_832F40C0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bge 0x832fa5a8
	if (!ctx.cr0.lt) goto loc_832FA5A8;
	// lis r11,-32210
	ctx.r11.s64 = -2110914560;
	// addi r3,r11,-16416
	ctx.r3.s64 = ctx.r11.s64 + -16416;
	// bl 0x832f8608
	ctx.lr = 0x832FA5A8;
	sub_832F8608(ctx, base);
loc_832FA5A8:
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x832f9578
	ctx.lr = 0x832FA5B8;
	sub_832F9578(ctx, base);
	// lwz r11,8304(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8304);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// bl 0x832f4158
	ctx.lr = 0x832FA5C8;
	sub_832F4158(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bge 0x832fa5dc
	if (!ctx.cr0.lt) goto loc_832FA5DC;
	// lis r11,-32210
	ctx.r11.s64 = -2110914560;
	// addi r3,r11,-16320
	ctx.r3.s64 = ctx.r11.s64 + -16320;
	// bl 0x832f8608
	ctx.lr = 0x832FA5DC;
	sub_832F8608(ctx, base);
loc_832FA5DC:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x833a01f8
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832FA5E8"))) PPC_WEAK_FUNC(sub_832FA5E8);
PPC_FUNC_IMPL(__imp__sub_832FA5E8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x833a01a8
	ctx.lr = 0x832FA5F0;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r31,-31823
	ctx.r31.s64 = -2085552128;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// lwz r3,8304(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8304);
	// bl 0x832f40c0
	ctx.lr = 0x832FA60C;
	sub_832F40C0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bge 0x832fa620
	if (!ctx.cr0.lt) goto loc_832FA620;
	// lis r11,-32210
	ctx.r11.s64 = -2110914560;
	// addi r3,r11,-16416
	ctx.r3.s64 = ctx.r11.s64 + -16416;
	// bl 0x832f8608
	ctx.lr = 0x832FA620;
	sub_832F8608(ctx, base);
loc_832FA620:
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x832f96d0
	ctx.lr = 0x832FA630;
	sub_832F96D0(ctx, base);
	// lwz r11,8304(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8304);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// bl 0x832f4158
	ctx.lr = 0x832FA640;
	sub_832F4158(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bge 0x832fa654
	if (!ctx.cr0.lt) goto loc_832FA654;
	// lis r11,-32210
	ctx.r11.s64 = -2110914560;
	// addi r3,r11,-16320
	ctx.r3.s64 = ctx.r11.s64 + -16320;
	// bl 0x832f8608
	ctx.lr = 0x832FA654;
	sub_832F8608(ctx, base);
loc_832FA654:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x833a01f8
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832FA660"))) PPC_WEAK_FUNC(sub_832FA660);
PPC_FUNC_IMPL(__imp__sub_832FA660) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x833a01ac
	ctx.lr = 0x832FA668;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r29,-31823
	ctx.r29.s64 = -2085552128;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// lwz r3,8304(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8304);
	// bl 0x832f40c0
	ctx.lr = 0x832FA680;
	sub_832F40C0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bge 0x832fa694
	if (!ctx.cr0.lt) goto loc_832FA694;
	// lis r11,-32210
	ctx.r11.s64 = -2110914560;
	// addi r3,r11,-16416
	ctx.r3.s64 = ctx.r11.s64 + -16416;
	// bl 0x832f8608
	ctx.lr = 0x832FA694;
	sub_832F8608(ctx, base);
loc_832FA694:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne cr6,0x832fa6b0
	if (!ctx.cr6.eq) goto loc_832FA6B0;
	// lis r11,-32210
	ctx.r11.s64 = -2110914560;
	// addi r3,r11,-14396
	ctx.r3.s64 = ctx.r11.s64 + -14396;
loc_832FA6A4:
	// bl 0x832f8608
	ctx.lr = 0x832FA6A8;
	sub_832F8608(ctx, base);
loc_832FA6A8:
	// li r30,-1
	ctx.r30.s64 = -1;
	// b 0x832fa738
	goto loc_832FA738;
loc_832FA6B0:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x832fa6c8
	if (!ctx.cr6.eq) goto loc_832FA6C8;
	// lis r11,-32210
	ctx.r11.s64 = -2110914560;
	// addi r3,r11,-14436
	ctx.r3.s64 = ctx.r11.s64 + -14436;
	// b 0x832fa6a4
	goto loc_832FA6A4;
loc_832FA6C8:
	// cmpdi cr6,r30,0
	ctx.cr6.compare<int64_t>(ctx.r30.s64, 0, ctx.xer);
	// bge cr6,0x832fa6dc
	if (!ctx.cr6.lt) goto loc_832FA6DC;
	// lis r11,-32210
	ctx.r11.s64 = -2110914560;
	// addi r3,r11,-14472
	ctx.r3.s64 = ctx.r11.s64 + -14472;
	// b 0x832fa6a4
	goto loc_832FA6A4;
loc_832FA6DC:
	// lwz r11,276(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 276);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x832fa6a8
	if (ctx.cr6.eq) goto loc_832FA6A8;
	// lwz r10,12(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// cmpwi cr6,r10,1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 1, ctx.xer);
	// beq cr6,0x832fa704
	if (ctx.cr6.eq) goto loc_832FA704;
	// lis r11,-32210
	ctx.r11.s64 = -2110914560;
	// addi r3,r11,-14532
	ctx.r3.s64 = ctx.r11.s64 + -14532;
	// bl 0x832f8608
	ctx.lr = 0x832FA700;
	sub_832F8608(ctx, base);
	// b 0x832fa734
	goto loc_832FA734;
loc_832FA704:
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x832fa734
	if (!ctx.cr6.eq) goto loc_832FA734;
	// ld r10,280(r31)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r31.u32 + 280);
	// cmpd cr6,r10,r30
	ctx.cr6.compare<int64_t>(ctx.r10.s64, ctx.r30.s64, ctx.xer);
	// beq cr6,0x832fa734
	if (ctx.cr6.eq) goto loc_832FA734;
	// li r10,5
	ctx.r10.s64 = 5;
	// std r30,416(r31)
	PPC_STORE_U64(ctx.r31.u32 + 416, ctx.r30.u64);
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r11,408(r31)
	PPC_STORE_U32(ctx.r31.u32 + 408, ctx.r11.u32);
	// stw r10,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r10.u32);
	// stw r9,428(r31)
	PPC_STORE_U32(ctx.r31.u32 + 428, ctx.r9.u32);
loc_832FA734:
	// li r30,0
	ctx.r30.s64 = 0;
loc_832FA738:
	// lwz r3,8304(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8304);
	// bl 0x832f4158
	ctx.lr = 0x832FA740;
	sub_832F4158(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bge 0x832fa754
	if (!ctx.cr0.lt) goto loc_832FA754;
	// lis r11,-32210
	ctx.r11.s64 = -2110914560;
	// addi r3,r11,-16320
	ctx.r3.s64 = ctx.r11.s64 + -16320;
	// bl 0x832f8608
	ctx.lr = 0x832FA754;
	sub_832F8608(ctx, base);
loc_832FA754:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x833a01fc
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832FA760"))) PPC_WEAK_FUNC(sub_832FA760);
PPC_FUNC_IMPL(__imp__sub_832FA760) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x833a01ac
	ctx.lr = 0x832FA768;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r29,-31823
	ctx.r29.s64 = -2085552128;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// lwz r3,8304(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8304);
	// bl 0x832f40c0
	ctx.lr = 0x832FA780;
	sub_832F40C0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bge 0x832fa794
	if (!ctx.cr0.lt) goto loc_832FA794;
	// lis r11,-32210
	ctx.r11.s64 = -2110914560;
	// addi r3,r11,-16416
	ctx.r3.s64 = ctx.r11.s64 + -16416;
	// bl 0x832f8608
	ctx.lr = 0x832FA794;
	sub_832F8608(ctx, base);
loc_832FA794:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne cr6,0x832fa7b0
	if (!ctx.cr6.eq) goto loc_832FA7B0;
	// lis r11,-32210
	ctx.r11.s64 = -2110914560;
	// addi r3,r11,-14316
	ctx.r3.s64 = ctx.r11.s64 + -14316;
loc_832FA7A4:
	// bl 0x832f8608
	ctx.lr = 0x832FA7A8;
	sub_832F8608(ctx, base);
loc_832FA7A8:
	// li r30,-1
	ctx.r30.s64 = -1;
	// b 0x832fa808
	goto loc_832FA808;
loc_832FA7B0:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x832fa7c8
	if (!ctx.cr6.eq) goto loc_832FA7C8;
	// lis r11,-32210
	ctx.r11.s64 = -2110914560;
	// addi r3,r11,-14356
	ctx.r3.s64 = ctx.r11.s64 + -14356;
	// b 0x832fa7a4
	goto loc_832FA7A4;
loc_832FA7C8:
	// lwz r10,276(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 276);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x832fa7a8
	if (ctx.cr6.eq) goto loc_832FA7A8;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x832fa7e8
	if (ctx.cr6.eq) goto loc_832FA7E8;
	// li r30,0
	ctx.r30.s64 = 0;
	// b 0x832fa808
	goto loc_832FA808;
loc_832FA7E8:
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r30,444(r31)
	PPC_STORE_U32(ctx.r31.u32 + 444, ctx.r30.u32);
	// li r9,6
	ctx.r9.s64 = 6;
	// stw r10,440(r31)
	PPC_STORE_U32(ctx.r31.u32 + 440, ctx.r10.u32);
	// stw r11,448(r31)
	PPC_STORE_U32(ctx.r31.u32 + 448, ctx.r11.u32);
	// mr r30,r11
	ctx.r30.u64 = ctx.r11.u64;
	// stw r11,452(r31)
	PPC_STORE_U32(ctx.r31.u32 + 452, ctx.r11.u32);
	// stw r9,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r9.u32);
loc_832FA808:
	// lwz r3,8304(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8304);
	// bl 0x832f4158
	ctx.lr = 0x832FA810;
	sub_832F4158(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bge 0x832fa824
	if (!ctx.cr0.lt) goto loc_832FA824;
	// lis r11,-32210
	ctx.r11.s64 = -2110914560;
	// addi r3,r11,-16320
	ctx.r3.s64 = ctx.r11.s64 + -16320;
	// bl 0x832f8608
	ctx.lr = 0x832FA824;
	sub_832F8608(ctx, base);
loc_832FA824:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x833a01fc
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832FA830"))) PPC_WEAK_FUNC(sub_832FA830);
PPC_FUNC_IMPL(__imp__sub_832FA830) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x833a01ac
	ctx.lr = 0x832FA838;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31823
	ctx.r11.s64 = -2085552128;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r30,r11,8320
	ctx.r30.s64 = ctx.r11.s64 + 8320;
	// lwz r3,-16(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + -16);
	// bl 0x832f40c0
	ctx.lr = 0x832FA850;
	sub_832F40C0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bge 0x832fa864
	if (!ctx.cr0.lt) goto loc_832FA864;
	// lis r11,-32210
	ctx.r11.s64 = -2110914560;
	// addi r3,r11,-16416
	ctx.r3.s64 = ctx.r11.s64 + -16416;
	// bl 0x832f8608
	ctx.lr = 0x832FA864;
	sub_832F8608(ctx, base);
loc_832FA864:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne cr6,0x832fa880
	if (!ctx.cr6.eq) goto loc_832FA880;
	// lis r11,-32210
	ctx.r11.s64 = -2110914560;
	// addi r3,r11,-14276
	ctx.r3.s64 = ctx.r11.s64 + -14276;
	// bl 0x832f8608
	ctx.lr = 0x832FA878;
	sub_832F8608(ctx, base);
loc_832FA878:
	// li r29,-1
	ctx.r29.s64 = -1;
	// b 0x832fa8a0
	goto loc_832FA8A0;
loc_832FA880:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x832fa878
	if (!ctx.cr6.eq) goto loc_832FA878;
	// stw r31,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r31.u32);
	// mr r29,r11
	ctx.r29.u64 = ctx.r11.u64;
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// stw r11,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r11.u32);
	// stw r11,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r11.u32);
loc_832FA8A0:
	// lwz r3,-16(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + -16);
	// bl 0x832f4158
	ctx.lr = 0x832FA8A8;
	sub_832F4158(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bge 0x832fa8bc
	if (!ctx.cr0.lt) goto loc_832FA8BC;
	// lis r11,-32210
	ctx.r11.s64 = -2110914560;
	// addi r3,r11,-16320
	ctx.r3.s64 = ctx.r11.s64 + -16320;
	// bl 0x832f8608
	ctx.lr = 0x832FA8BC;
	sub_832F8608(ctx, base);
loc_832FA8BC:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x833a01fc
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832FA8C8"))) PPC_WEAK_FUNC(sub_832FA8C8);
PPC_FUNC_IMPL(__imp__sub_832FA8C8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x833a01ac
	ctx.lr = 0x832FA8D0;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r29,-31823
	ctx.r29.s64 = -2085552128;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r3,8304(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8304);
	// bl 0x832f40c0
	ctx.lr = 0x832FA8E4;
	sub_832F40C0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bge 0x832fa8f8
	if (!ctx.cr0.lt) goto loc_832FA8F8;
	// lis r11,-32210
	ctx.r11.s64 = -2110914560;
	// addi r3,r11,-16416
	ctx.r3.s64 = ctx.r11.s64 + -16416;
	// bl 0x832f8608
	ctx.lr = 0x832FA8F8;
	sub_832F8608(ctx, base);
loc_832FA8F8:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne cr6,0x832fa910
	if (!ctx.cr6.eq) goto loc_832FA910;
	// lis r11,-32210
	ctx.r11.s64 = -2110914560;
	// addi r3,r11,-14196
	ctx.r3.s64 = ctx.r11.s64 + -14196;
loc_832FA908:
	// bl 0x832f8608
	ctx.lr = 0x832FA90C;
	sub_832F8608(ctx, base);
	// b 0x832fa950
	goto loc_832FA950;
loc_832FA910:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x832fa928
	if (!ctx.cr6.eq) goto loc_832FA928;
	// lis r11,-32210
	ctx.r11.s64 = -2110914560;
	// addi r3,r11,-14236
	ctx.r3.s64 = ctx.r11.s64 + -14236;
	// b 0x832fa908
	goto loc_832FA908;
loc_832FA928:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// li r30,0
	ctx.r30.s64 = 0;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// bne cr6,0x832fa94c
	if (!ctx.cr6.eq) goto loc_832FA94C;
	// lwz r4,312(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 312);
	// lwz r3,456(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 456);
	// bl 0x832f7b10
	ctx.lr = 0x832FA944;
	sub_832F7B10(ctx, base);
	// stw r30,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r30.u32);
	// stw r30,312(r31)
	PPC_STORE_U32(ctx.r31.u32 + 312, ctx.r30.u32);
loc_832FA94C:
	// stw r30,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r30.u32);
loc_832FA950:
	// lwz r3,8304(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8304);
	// bl 0x832f4158
	ctx.lr = 0x832FA958;
	sub_832F4158(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bge 0x832fa96c
	if (!ctx.cr0.lt) goto loc_832FA96C;
	// lis r11,-32210
	ctx.r11.s64 = -2110914560;
	// addi r3,r11,-16320
	ctx.r3.s64 = ctx.r11.s64 + -16320;
	// bl 0x832f8608
	ctx.lr = 0x832FA96C;
	sub_832F8608(ctx, base);
loc_832FA96C:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x833a01fc
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832FA974"))) PPC_WEAK_FUNC(sub_832FA974);
PPC_FUNC_IMPL(__imp__sub_832FA974) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832FA978"))) PPC_WEAK_FUNC(sub_832FA978);
PPC_FUNC_IMPL(__imp__sub_832FA978) {
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
	// lis r30,-31823
	ctx.r30.s64 = -2085552128;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r3,8304(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8304);
	// bl 0x832f40c0
	ctx.lr = 0x832FA99C;
	sub_832F40C0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bge 0x832fa9b0
	if (!ctx.cr0.lt) goto loc_832FA9B0;
	// lis r11,-32210
	ctx.r11.s64 = -2110914560;
	// addi r3,r11,-16416
	ctx.r3.s64 = ctx.r11.s64 + -16416;
	// bl 0x832f8608
	ctx.lr = 0x832FA9B0;
	sub_832F8608(ctx, base);
loc_832FA9B0:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne cr6,0x832fa9cc
	if (!ctx.cr6.eq) goto loc_832FA9CC;
	// lis r11,-32210
	ctx.r11.s64 = -2110914560;
	// addi r3,r11,-14116
	ctx.r3.s64 = ctx.r11.s64 + -14116;
loc_832FA9C0:
	// bl 0x832f8608
	ctx.lr = 0x832FA9C4;
	sub_832F8608(ctx, base);
	// li r31,0
	ctx.r31.s64 = 0;
	// b 0x832fa9e8
	goto loc_832FA9E8;
loc_832FA9CC:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x832fa9e4
	if (!ctx.cr6.eq) goto loc_832FA9E4;
	// lis r11,-32210
	ctx.r11.s64 = -2110914560;
	// addi r3,r11,-14156
	ctx.r3.s64 = ctx.r11.s64 + -14156;
	// b 0x832fa9c0
	goto loc_832FA9C0;
loc_832FA9E4:
	// lwz r31,4(r31)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
loc_832FA9E8:
	// lwz r3,8304(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8304);
	// bl 0x832f4158
	ctx.lr = 0x832FA9F0;
	sub_832F4158(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bge 0x832faa04
	if (!ctx.cr0.lt) goto loc_832FAA04;
	// lis r11,-32210
	ctx.r11.s64 = -2110914560;
	// addi r3,r11,-16320
	ctx.r3.s64 = ctx.r11.s64 + -16320;
	// bl 0x832f8608
	ctx.lr = 0x832FAA04;
	sub_832F8608(ctx, base);
loc_832FAA04:
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

__attribute__((alias("__imp__sub_832FAA20"))) PPC_WEAK_FUNC(sub_832FAA20);
PPC_FUNC_IMPL(__imp__sub_832FAA20) {
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
	// lis r30,-31823
	ctx.r30.s64 = -2085552128;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r3,8304(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8304);
	// bl 0x832f40c0
	ctx.lr = 0x832FAA44;
	sub_832F40C0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bge 0x832faa58
	if (!ctx.cr0.lt) goto loc_832FAA58;
	// lis r11,-32210
	ctx.r11.s64 = -2110914560;
	// addi r3,r11,-16416
	ctx.r3.s64 = ctx.r11.s64 + -16416;
	// bl 0x832f8608
	ctx.lr = 0x832FAA58;
	sub_832F8608(ctx, base);
loc_832FAA58:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne cr6,0x832faa74
	if (!ctx.cr6.eq) goto loc_832FAA74;
	// lis r11,-32210
	ctx.r11.s64 = -2110914560;
	// addi r3,r11,-13992
	ctx.r3.s64 = ctx.r11.s64 + -13992;
loc_832FAA68:
	// bl 0x832f8608
	ctx.lr = 0x832FAA6C;
	sub_832F8608(ctx, base);
	// li r31,0
	ctx.r31.s64 = 0;
	// b 0x832faa98
	goto loc_832FAA98;
loc_832FAA74:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x832faa8c
	if (!ctx.cr6.eq) goto loc_832FAA8C;
	// lis r11,-32210
	ctx.r11.s64 = -2110914560;
	// addi r3,r11,-14032
	ctx.r3.s64 = ctx.r11.s64 + -14032;
	// b 0x832faa68
	goto loc_832FAA68;
loc_832FAA8C:
	// ld r11,304(r31)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r31.u32 + 304);
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lwz r31,84(r1)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
loc_832FAA98:
	// lwz r3,8304(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8304);
	// bl 0x832f4158
	ctx.lr = 0x832FAAA0;
	sub_832F4158(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bge 0x832faab4
	if (!ctx.cr0.lt) goto loc_832FAAB4;
	// lis r11,-32210
	ctx.r11.s64 = -2110914560;
	// addi r3,r11,-16320
	ctx.r3.s64 = ctx.r11.s64 + -16320;
	// bl 0x832f8608
	ctx.lr = 0x832FAAB4;
	sub_832F8608(ctx, base);
loc_832FAAB4:
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

__attribute__((alias("__imp__sub_832FAAD0"))) PPC_WEAK_FUNC(sub_832FAAD0);
PPC_FUNC_IMPL(__imp__sub_832FAAD0) {
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
	// lis r30,-31823
	ctx.r30.s64 = -2085552128;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r3,8304(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8304);
	// bl 0x832f40c0
	ctx.lr = 0x832FAAF4;
	sub_832F40C0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bge 0x832fab08
	if (!ctx.cr0.lt) goto loc_832FAB08;
	// lis r11,-32210
	ctx.r11.s64 = -2110914560;
	// addi r3,r11,-16416
	ctx.r3.s64 = ctx.r11.s64 + -16416;
	// bl 0x832f8608
	ctx.lr = 0x832FAB08;
	sub_832F8608(ctx, base);
loc_832FAB08:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne cr6,0x832fab24
	if (!ctx.cr6.eq) goto loc_832FAB24;
	// lis r11,-32210
	ctx.r11.s64 = -2110914560;
	// addi r3,r11,-13912
	ctx.r3.s64 = ctx.r11.s64 + -13912;
loc_832FAB18:
	// bl 0x832f8608
	ctx.lr = 0x832FAB1C;
	sub_832F8608(ctx, base);
	// li r31,0
	ctx.r31.s64 = 0;
	// b 0x832fab48
	goto loc_832FAB48;
loc_832FAB24:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x832fab3c
	if (!ctx.cr6.eq) goto loc_832FAB3C;
	// lis r11,-32210
	ctx.r11.s64 = -2110914560;
	// addi r3,r11,-13952
	ctx.r3.s64 = ctx.r11.s64 + -13952;
	// b 0x832fab18
	goto loc_832FAB18;
loc_832FAB3C:
	// ld r11,304(r31)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r31.u32 + 304);
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lwz r31,80(r1)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
loc_832FAB48:
	// lwz r3,8304(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8304);
	// bl 0x832f4158
	ctx.lr = 0x832FAB50;
	sub_832F4158(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bge 0x832fab64
	if (!ctx.cr0.lt) goto loc_832FAB64;
	// lis r11,-32210
	ctx.r11.s64 = -2110914560;
	// addi r3,r11,-16320
	ctx.r3.s64 = ctx.r11.s64 + -16320;
	// bl 0x832f8608
	ctx.lr = 0x832FAB64;
	sub_832F8608(ctx, base);
loc_832FAB64:
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

__attribute__((alias("__imp__sub_832FAB80"))) PPC_WEAK_FUNC(sub_832FAB80);
PPC_FUNC_IMPL(__imp__sub_832FAB80) {
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
	// lis r30,-31823
	ctx.r30.s64 = -2085552128;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r3,8304(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8304);
	// bl 0x832f40c0
	ctx.lr = 0x832FABA4;
	sub_832F40C0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bge 0x832fabb8
	if (!ctx.cr0.lt) goto loc_832FABB8;
	// lis r11,-32210
	ctx.r11.s64 = -2110914560;
	// addi r3,r11,-16416
	ctx.r3.s64 = ctx.r11.s64 + -16416;
	// bl 0x832f8608
	ctx.lr = 0x832FABB8;
	sub_832F8608(ctx, base);
loc_832FABB8:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne cr6,0x832fabd4
	if (!ctx.cr6.eq) goto loc_832FABD4;
	// lis r11,-32210
	ctx.r11.s64 = -2110914560;
	// addi r3,r11,-13832
	ctx.r3.s64 = ctx.r11.s64 + -13832;
loc_832FABC8:
	// bl 0x832f8608
	ctx.lr = 0x832FABCC;
	sub_832F8608(ctx, base);
	// li r31,0
	ctx.r31.s64 = 0;
	// b 0x832fabf8
	goto loc_832FABF8;
loc_832FABD4:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x832fabec
	if (!ctx.cr6.eq) goto loc_832FABEC;
	// lis r11,-32210
	ctx.r11.s64 = -2110914560;
	// addi r3,r11,-13872
	ctx.r3.s64 = ctx.r11.s64 + -13872;
	// b 0x832fabc8
	goto loc_832FABC8;
loc_832FABEC:
	// ld r11,304(r31)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r31.u32 + 304);
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lwz r31,84(r1)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
loc_832FABF8:
	// lwz r3,8304(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8304);
	// bl 0x832f4158
	ctx.lr = 0x832FAC00;
	sub_832F4158(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bge 0x832fac14
	if (!ctx.cr0.lt) goto loc_832FAC14;
	// lis r11,-32210
	ctx.r11.s64 = -2110914560;
	// addi r3,r11,-16320
	ctx.r3.s64 = ctx.r11.s64 + -16320;
	// bl 0x832f8608
	ctx.lr = 0x832FAC14;
	sub_832F8608(ctx, base);
loc_832FAC14:
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

__attribute__((alias("__imp__sub_832FAC30"))) PPC_WEAK_FUNC(sub_832FAC30);
PPC_FUNC_IMPL(__imp__sub_832FAC30) {
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
	// lis r30,-31823
	ctx.r30.s64 = -2085552128;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r3,8304(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8304);
	// bl 0x832f40c0
	ctx.lr = 0x832FAC54;
	sub_832F40C0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bge 0x832fac68
	if (!ctx.cr0.lt) goto loc_832FAC68;
	// lis r11,-32210
	ctx.r11.s64 = -2110914560;
	// addi r3,r11,-16416
	ctx.r3.s64 = ctx.r11.s64 + -16416;
	// bl 0x832f8608
	ctx.lr = 0x832FAC68;
	sub_832F8608(ctx, base);
loc_832FAC68:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne cr6,0x832fac84
	if (!ctx.cr6.eq) goto loc_832FAC84;
	// lis r11,-32210
	ctx.r11.s64 = -2110914560;
	// addi r3,r11,-13752
	ctx.r3.s64 = ctx.r11.s64 + -13752;
loc_832FAC78:
	// bl 0x832f8608
	ctx.lr = 0x832FAC7C;
	sub_832F8608(ctx, base);
	// li r31,0
	ctx.r31.s64 = 0;
	// b 0x832faca8
	goto loc_832FACA8;
loc_832FAC84:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x832fac9c
	if (!ctx.cr6.eq) goto loc_832FAC9C;
	// lis r11,-32210
	ctx.r11.s64 = -2110914560;
	// addi r3,r11,-13792
	ctx.r3.s64 = ctx.r11.s64 + -13792;
	// b 0x832fac78
	goto loc_832FAC78;
loc_832FAC9C:
	// lwz r11,276(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 276);
	// addic r10,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// subfe r31,r10,r11
	temp.u8 = (~ctx.r10.u32 + ctx.r11.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r31.u64 = ~ctx.r10.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
loc_832FACA8:
	// lwz r3,8304(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8304);
	// bl 0x832f4158
	ctx.lr = 0x832FACB0;
	sub_832F4158(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bge 0x832facc4
	if (!ctx.cr0.lt) goto loc_832FACC4;
	// lis r11,-32210
	ctx.r11.s64 = -2110914560;
	// addi r3,r11,-16320
	ctx.r3.s64 = ctx.r11.s64 + -16320;
	// bl 0x832f8608
	ctx.lr = 0x832FACC4;
	sub_832F8608(ctx, base);
loc_832FACC4:
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

__attribute__((alias("__imp__sub_832FACE0"))) PPC_WEAK_FUNC(sub_832FACE0);
PPC_FUNC_IMPL(__imp__sub_832FACE0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x833a01ac
	ctx.lr = 0x832FACE8;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31823
	ctx.r11.s64 = -2085552128;
	// addi r31,r11,8316
	ctx.r31.s64 = ctx.r11.s64 + 8316;
	// addi r8,r31,-16
	ctx.r8.s64 = ctx.r31.s64 + -16;
loc_832FACF8:
	// mfmsr r9
	ctx.r9.u64 = ctx.msr;
	// mtmsrd r13,1
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// lwarx r10,0,r8
	ctx.reserved.u32 = *(uint32_t*)(base + ctx.r8.u32);
	ctx.r10.u64 = __builtin_bswap32(ctx.reserved.u32);
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// stwcx. r10,0,r8
	ctx.cr0.lt = 0;
	ctx.cr0.gt = 0;
	ctx.cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ctx.r8.u32), ctx.reserved.s32, __builtin_bswap32(ctx.r10.s32));
	ctx.cr0.so = ctx.xer.so;
	// mtmsrd r9,1
	ctx.msr = (ctx.r9.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// bne 0x832facf8
	if (!ctx.cr0.eq) goto loc_832FACF8;
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x832fade0
	if (!ctx.cr6.eq) goto loc_832FADE0;
	// lwz r3,-12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -12);
	// bl 0x832f40c0
	ctx.lr = 0x832FAD28;
	sub_832F40C0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bge 0x832fad3c
	if (!ctx.cr0.lt) goto loc_832FAD3C;
	// lis r11,-32210
	ctx.r11.s64 = -2110914560;
	// addi r3,r11,-16416
	ctx.r3.s64 = ctx.r11.s64 + -16416;
	// bl 0x832f8608
	ctx.lr = 0x832FAD3C;
	sub_832F8608(ctx, base);
loc_832FAD3C:
	// lis r11,-31823
	ctx.r11.s64 = -2085552128;
	// addi r29,r11,-28824
	ctx.r29.s64 = ctx.r11.s64 + -28824;
	// mr r30,r29
	ctx.r30.u64 = ctx.r29.u64;
loc_832FAD48:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x832fad5c
	if (ctx.cr6.eq) goto loc_832FAD5C;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x832f9460
	ctx.lr = 0x832FAD5C;
	sub_832F9460(ctx, base);
loc_832FAD5C:
	// addis r11,r29,1
	ctx.r11.s64 = ctx.r29.s64 + 65536;
	// addi r30,r30,464
	ctx.r30.s64 = ctx.r30.s64 + 464;
	// addi r11,r11,-28416
	ctx.r11.s64 = ctx.r11.s64 + -28416;
	// cmpw cr6,r30,r11
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x832fad48
	if (ctx.cr6.lt) goto loc_832FAD48;
	// lwz r3,-4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -4);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x832fad88
	if (ctx.cr6.eq) goto loc_832FAD88;
	// bl 0x832f7b50
	ctx.lr = 0x832FAD80;
	sub_832F7B50(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,-4(r31)
	PPC_STORE_U32(ctx.r31.u32 + -4, ctx.r11.u32);
loc_832FAD88:
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x832fada0
	if (ctx.cr6.eq) goto loc_832FADA0;
	// bl 0x832f7b50
	ctx.lr = 0x832FAD98;
	sub_832F7B50(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
loc_832FADA0:
	// bl 0x832f73f0
	ctx.lr = 0x832FADA4;
	sub_832F73F0(ctx, base);
	// lwz r3,-12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -12);
	// bl 0x832f4158
	ctx.lr = 0x832FADAC;
	sub_832F4158(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bge 0x832fadc0
	if (!ctx.cr0.lt) goto loc_832FADC0;
	// lis r11,-32210
	ctx.r11.s64 = -2110914560;
	// addi r3,r11,-16320
	ctx.r3.s64 = ctx.r11.s64 + -16320;
	// bl 0x832f8608
	ctx.lr = 0x832FADC0;
	sub_832F8608(ctx, base);
loc_832FADC0:
	// lwz r3,-12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -12);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x832fadd8
	if (ctx.cr6.eq) goto loc_832FADD8;
	// bl 0x832f4030
	ctx.lr = 0x832FADD0;
	sub_832F4030(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,-12(r31)
	PPC_STORE_U32(ctx.r31.u32 + -12, ctx.r11.u32);
loc_832FADD8:
	// bl 0x832f8150
	ctx.lr = 0x832FADDC;
	sub_832F8150(ctx, base);
	// bl 0x83305fc8
	ctx.lr = 0x832FADE0;
	sub_83305FC8(ctx, base);
loc_832FADE0:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x833a01fc
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832FADE8"))) PPC_WEAK_FUNC(sub_832FADE8);
PPC_FUNC_IMPL(__imp__sub_832FADE8) {
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
	// lis r31,-31823
	ctx.r31.s64 = -2085552128;
	// lwz r3,8304(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8304);
	// bl 0x832f40c0
	ctx.lr = 0x832FAE04;
	sub_832F40C0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bge 0x832fae18
	if (!ctx.cr0.lt) goto loc_832FAE18;
	// lis r11,-32210
	ctx.r11.s64 = -2110914560;
	// addi r3,r11,-16416
	ctx.r3.s64 = ctx.r11.s64 + -16416;
	// bl 0x832f8608
	ctx.lr = 0x832FAE18;
	sub_832F8608(ctx, base);
loc_832FAE18:
	// bl 0x832f99d0
	ctx.lr = 0x832FAE1C;
	sub_832F99D0(ctx, base);
	// lwz r3,8304(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8304);
	// bl 0x832f4158
	ctx.lr = 0x832FAE24;
	sub_832F4158(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bge 0x832fae38
	if (!ctx.cr0.lt) goto loc_832FAE38;
	// lis r11,-32210
	ctx.r11.s64 = -2110914560;
	// addi r3,r11,-16320
	ctx.r3.s64 = ctx.r11.s64 + -16320;
	// bl 0x832f8608
	ctx.lr = 0x832FAE38;
	sub_832F8608(ctx, base);
loc_832FAE38:
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

__attribute__((alias("__imp__sub_832FAE4C"))) PPC_WEAK_FUNC(sub_832FAE4C);
PPC_FUNC_IMPL(__imp__sub_832FAE4C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832FAE50"))) PPC_WEAK_FUNC(sub_832FAE50);
PPC_FUNC_IMPL(__imp__sub_832FAE50) {
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
	// lis r31,-31823
	ctx.r31.s64 = -2085552128;
	// lwz r3,8304(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8304);
	// bl 0x832f40c0
	ctx.lr = 0x832FAE6C;
	sub_832F40C0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bge 0x832fae80
	if (!ctx.cr0.lt) goto loc_832FAE80;
	// lis r11,-32210
	ctx.r11.s64 = -2110914560;
	// addi r3,r11,-16416
	ctx.r3.s64 = ctx.r11.s64 + -16416;
	// bl 0x832f8608
	ctx.lr = 0x832FAE80;
	sub_832F8608(ctx, base);
loc_832FAE80:
	// bl 0x832f9e80
	ctx.lr = 0x832FAE84;
	sub_832F9E80(ctx, base);
	// lwz r3,8304(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8304);
	// bl 0x832f4158
	ctx.lr = 0x832FAE8C;
	sub_832F4158(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bge 0x832faea0
	if (!ctx.cr0.lt) goto loc_832FAEA0;
	// lis r11,-32210
	ctx.r11.s64 = -2110914560;
	// addi r3,r11,-16320
	ctx.r3.s64 = ctx.r11.s64 + -16320;
	// bl 0x832f8608
	ctx.lr = 0x832FAEA0;
	sub_832F8608(ctx, base);
loc_832FAEA0:
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

__attribute__((alias("__imp__sub_832FAEB4"))) PPC_WEAK_FUNC(sub_832FAEB4);
PPC_FUNC_IMPL(__imp__sub_832FAEB4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832FAEB8"))) PPC_WEAK_FUNC(sub_832FAEB8);
PPC_FUNC_IMPL(__imp__sub_832FAEB8) {
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
	// cmpwi cr6,r4,301
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 301, ctx.xer);
	// bgt cr6,0x832faf28
	if (ctx.cr6.gt) goto loc_832FAF28;
	// beq cr6,0x832faf20
	if (ctx.cr6.eq) goto loc_832FAF20;
	// cmpwi cr6,r4,200
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 200, ctx.xer);
	// beq cr6,0x832faf18
	if (ctx.cr6.eq) goto loc_832FAF18;
	// cmpwi cr6,r4,201
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 201, ctx.xer);
	// beq cr6,0x832faf10
	if (ctx.cr6.eq) goto loc_832FAF10;
	// cmpwi cr6,r4,202
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 202, ctx.xer);
	// beq cr6,0x832faf08
	if (ctx.cr6.eq) goto loc_832FAF08;
	// cmpwi cr6,r4,203
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 203, ctx.xer);
	// beq cr6,0x832faf00
	if (ctx.cr6.eq) goto loc_832FAF00;
	// cmpwi cr6,r4,300
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 300, ctx.xer);
	// bne cr6,0x832faf50
	if (!ctx.cr6.eq) goto loc_832FAF50;
	// bl 0x832fa150
	ctx.lr = 0x832FAEFC;
	sub_832FA150(ctx, base);
	// b 0x832faf80
	goto loc_832FAF80;
loc_832FAF00:
	// bl 0x832f9008
	ctx.lr = 0x832FAF04;
	sub_832F9008(ctx, base);
	// b 0x832faf80
	goto loc_832FAF80;
loc_832FAF08:
	// bl 0x832f8f88
	ctx.lr = 0x832FAF0C;
	sub_832F8F88(ctx, base);
	// b 0x832faf80
	goto loc_832FAF80;
loc_832FAF10:
	// bl 0x832fab80
	ctx.lr = 0x832FAF14;
	sub_832FAB80(ctx, base);
	// b 0x832faf80
	goto loc_832FAF80;
loc_832FAF18:
	// bl 0x832faad0
	ctx.lr = 0x832FAF1C;
	sub_832FAAD0(ctx, base);
	// b 0x832faf80
	goto loc_832FAF80;
loc_832FAF20:
	// bl 0x832fa200
	ctx.lr = 0x832FAF24;
	sub_832FA200(ctx, base);
	// b 0x832faf80
	goto loc_832FAF80;
loc_832FAF28:
	// cmpwi cr6,r4,302
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 302, ctx.xer);
	// beq cr6,0x832faf7c
	if (ctx.cr6.eq) goto loc_832FAF7C;
	// cmpwi cr6,r4,400
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 400, ctx.xer);
	// beq cr6,0x832faf74
	if (ctx.cr6.eq) goto loc_832FAF74;
	// cmpwi cr6,r4,500
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 500, ctx.xer);
	// beq cr6,0x832faf68
	if (ctx.cr6.eq) goto loc_832FAF68;
	// cmpwi cr6,r4,501
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 501, ctx.xer);
	// beq cr6,0x832faf60
	if (ctx.cr6.eq) goto loc_832FAF60;
	// cmpwi cr6,r4,600
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 600, ctx.xer);
	// beq cr6,0x832faf58
	if (ctx.cr6.eq) goto loc_832FAF58;
loc_832FAF50:
	// li r3,-1
	ctx.r3.s64 = -1;
	// b 0x832faf80
	goto loc_832FAF80;
loc_832FAF58:
	// bl 0x832fac30
	ctx.lr = 0x832FAF5C;
	sub_832FAC30(ctx, base);
	// b 0x832faf80
	goto loc_832FAF80;
loc_832FAF60:
	// bl 0x832f9890
	ctx.lr = 0x832FAF64;
	sub_832F9890(ctx, base);
	// b 0x832faf80
	goto loc_832FAF80;
loc_832FAF68:
	// bl 0x832fae50
	ctx.lr = 0x832FAF6C;
	sub_832FAE50(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x832faf80
	goto loc_832FAF80;
loc_832FAF74:
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x832faf80
	goto loc_832FAF80;
loc_832FAF7C:
	// bl 0x832fa2b0
	ctx.lr = 0x832FAF80;
	sub_832FA2B0(ctx, base);
loc_832FAF80:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_832FAF90"))) PPC_WEAK_FUNC(sub_832FAF90);
PPC_FUNC_IMPL(__imp__sub_832FAF90) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x833a01a8
	ctx.lr = 0x832FAF98;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r28,-31823
	ctx.r28.s64 = -2085552128;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// lwz r3,8304(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 8304);
	// bl 0x832f40c0
	ctx.lr = 0x832FAFB0;
	sub_832F40C0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bge 0x832fafc4
	if (!ctx.cr0.lt) goto loc_832FAFC4;
	// lis r11,-32210
	ctx.r11.s64 = -2110914560;
	// addi r3,r11,-16416
	ctx.r3.s64 = ctx.r11.s64 + -16416;
	// bl 0x832f8608
	ctx.lr = 0x832FAFC4;
	sub_832F8608(ctx, base);
loc_832FAFC4:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// bne cr6,0x832fafe0
	if (!ctx.cr6.eq) goto loc_832FAFE0;
	// lis r11,-32210
	ctx.r11.s64 = -2110914560;
	// addi r3,r11,-13620
	ctx.r3.s64 = ctx.r11.s64 + -13620;
	// bl 0x832f8608
	ctx.lr = 0x832FAFD8;
	sub_832F8608(ctx, base);
	// li r31,0
	ctx.r31.s64 = 0;
	// b 0x832fb018
	goto loc_832FB018;
loc_832FAFE0:
	// li r31,0
	ctx.r31.s64 = 0;
	// cmplwi cr6,r29,1
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 1, ctx.xer);
	// blt cr6,0x832fb00c
	if (ctx.cr6.lt) goto loc_832FB00C;
	// beq cr6,0x832fb000
	if (ctx.cr6.eq) goto loc_832FB000;
	// lis r11,-32210
	ctx.r11.s64 = -2110914560;
	// addi r3,r11,-13664
	ctx.r3.s64 = ctx.r11.s64 + -13664;
	// bl 0x832f8608
	ctx.lr = 0x832FAFFC;
	sub_832F8608(ctx, base);
	// b 0x832fb018
	goto loc_832FB018;
loc_832FB000:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x832f9350
	ctx.lr = 0x832FB008;
	sub_832F9350(ctx, base);
	// b 0x832fb014
	goto loc_832FB014;
loc_832FB00C:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x832f9140
	ctx.lr = 0x832FB014;
	sub_832F9140(ctx, base);
loc_832FB014:
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
loc_832FB018:
	// lwz r3,8304(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 8304);
	// bl 0x832f4158
	ctx.lr = 0x832FB020;
	sub_832F4158(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bge 0x832fb034
	if (!ctx.cr0.lt) goto loc_832FB034;
	// lis r11,-32210
	ctx.r11.s64 = -2110914560;
	// addi r3,r11,-16320
	ctx.r3.s64 = ctx.r11.s64 + -16320;
	// bl 0x832f8608
	ctx.lr = 0x832FB034;
	sub_832F8608(ctx, base);
loc_832FB034:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x833a01f8
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832FB040"))) PPC_WEAK_FUNC(sub_832FB040);
PPC_FUNC_IMPL(__imp__sub_832FB040) {
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
	// lis r11,-31823
	ctx.r11.s64 = -2085552128;
	// addi r8,r11,8332
	ctx.r8.s64 = ctx.r11.s64 + 8332;
loc_832FB054:
	// mfmsr r9
	ctx.r9.u64 = ctx.msr;
	// mtmsrd r13,1
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// lwarx r10,0,r8
	ctx.reserved.u32 = *(uint32_t*)(base + ctx.r8.u32);
	ctx.r10.u64 = __builtin_bswap32(ctx.reserved.u32);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stwcx. r10,0,r8
	ctx.cr0.lt = 0;
	ctx.cr0.gt = 0;
	ctx.cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ctx.r8.u32), ctx.reserved.s32, __builtin_bswap32(ctx.r10.s32));
	ctx.cr0.so = ctx.xer.so;
	// mtmsrd r9,1
	ctx.msr = (ctx.r9.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// bne 0x832fb054
	if (!ctx.cr0.eq) goto loc_832FB054;
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// cmpwi cr6,r10,1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 1, ctx.xer);
	// bne cr6,0x832fb084
	if (!ctx.cr6.eq) goto loc_832FB084;
	// bl 0x832f8678
	ctx.lr = 0x832FB080;
	sub_832F8678(ctx, base);
	// bl 0x83306760
	ctx.lr = 0x832FB084;
	sub_83306760(ctx, base);
loc_832FB084:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_832FB094"))) PPC_WEAK_FUNC(sub_832FB094);
PPC_FUNC_IMPL(__imp__sub_832FB094) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832FB098"))) PPC_WEAK_FUNC(sub_832FB098);
PPC_FUNC_IMPL(__imp__sub_832FB098) {
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
	// lis r11,-31823
	ctx.r11.s64 = -2085552128;
	// addi r8,r11,8332
	ctx.r8.s64 = ctx.r11.s64 + 8332;
loc_832FB0AC:
	// mfmsr r9
	ctx.r9.u64 = ctx.msr;
	// mtmsrd r13,1
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// lwarx r10,0,r8
	ctx.reserved.u32 = *(uint32_t*)(base + ctx.r8.u32);
	ctx.r10.u64 = __builtin_bswap32(ctx.reserved.u32);
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// stwcx. r10,0,r8
	ctx.cr0.lt = 0;
	ctx.cr0.gt = 0;
	ctx.cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ctx.r8.u32), ctx.reserved.s32, __builtin_bswap32(ctx.r10.s32));
	ctx.cr0.so = ctx.xer.so;
	// mtmsrd r9,1
	ctx.msr = (ctx.r9.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// bne 0x832fb0ac
	if (!ctx.cr0.eq) goto loc_832FB0AC;
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x832fb0dc
	if (!ctx.cr6.eq) goto loc_832FB0DC;
	// bl 0x83306990
	ctx.lr = 0x832FB0D8;
	sub_83306990(ctx, base);
	// bl 0x832f86f0
	ctx.lr = 0x832FB0DC;
	sub_832F86F0(ctx, base);
loc_832FB0DC:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_832FB0EC"))) PPC_WEAK_FUNC(sub_832FB0EC);
PPC_FUNC_IMPL(__imp__sub_832FB0EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832FB0F0"))) PPC_WEAK_FUNC(sub_832FB0F0);
PPC_FUNC_IMPL(__imp__sub_832FB0F0) {
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
	// bl 0x832f8758
	ctx.lr = 0x832FB100;
	sub_832F8758(ctx, base);
	// bl 0x83306a80
	ctx.lr = 0x832FB104;
	sub_83306A80(ctx, base);
	// bl 0x832f8798
	ctx.lr = 0x832FB108;
	sub_832F8798(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_832FB118"))) PPC_WEAK_FUNC(sub_832FB118);
PPC_FUNC_IMPL(__imp__sub_832FB118) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31823
	ctx.r11.s64 = -2085552128;
	// addi r11,r11,9816
	ctx.r11.s64 = ctx.r11.s64 + 9816;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// rotlwi r10,r10,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// lwz r3,4(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_832FB13C"))) PPC_WEAK_FUNC(sub_832FB13C);
PPC_FUNC_IMPL(__imp__sub_832FB13C) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_832FB140"))) PPC_WEAK_FUNC(sub_832FB140);
PPC_FUNC_IMPL(__imp__sub_832FB140) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x833a01ac
	ctx.lr = 0x832FB148;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31823
	ctx.r11.s64 = -2085552128;
	// lis r29,-31823
	ctx.r29.s64 = -2085552128;
	// addi r31,r11,8336
	ctx.r31.s64 = ctx.r11.s64 + 8336;
	// lis r10,-32210
	ctx.r10.s64 = -2110914560;
	// addi r11,r10,-13508
	ctx.r11.s64 = ctx.r10.s64 + -13508;
	// lwz r30,9824(r29)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r29.u32 + 9824);
	// stw r11,656(r31)
	PPC_STORE_U32(ctx.r31.u32 + 656, ctx.r11.u32);
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// bne cr6,0x832fb1a8
	if (!ctx.cr6.eq) goto loc_832FB1A8;
	// addi r3,r31,16
	ctx.r3.s64 = ctx.r31.s64 + 16;
	// li r5,640
	ctx.r5.s64 = 640;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x833a2b30
	ctx.lr = 0x832FB180;
	sub_833A2B30(ctx, base);
	// addi r3,r31,968
	ctx.r3.s64 = ctx.r31.s64 + 968;
	// li r5,512
	ctx.r5.s64 = 512;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x833a2b30
	ctx.lr = 0x832FB190;
	sub_833A2B30(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r5,9
	ctx.r5.s64 = 9;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x833a2b30
	ctx.lr = 0x832FB1A0;
	sub_833A2B30(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stb r11,0(r31)
	PPC_STORE_U8(ctx.r31.u32 + 0, ctx.r11.u8);
loc_832FB1A8:
	// addi r11,r30,1
	ctx.r11.s64 = ctx.r30.s64 + 1;
	// stw r11,9824(r29)
	PPC_STORE_U32(ctx.r29.u32 + 9824, ctx.r11.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x833a01fc
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832FB1B8"))) PPC_WEAK_FUNC(sub_832FB1B8);
PPC_FUNC_IMPL(__imp__sub_832FB1B8) {
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
	// lis r10,-31823
	ctx.r10.s64 = -2085552128;
	// lwz r11,9824(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 9824);
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,9824(r10)
	PPC_STORE_U32(ctx.r10.u32 + 9824, ctx.r11.u32);
	// bne 0x832fb254
	if (!ctx.cr0.eq) goto loc_832FB254;
	// lis r11,-31823
	ctx.r11.s64 = -2085552128;
	// addi r30,r11,8336
	ctx.r30.s64 = ctx.r11.s64 + 8336;
	// addi r31,r30,16
	ctx.r31.s64 = ctx.r30.s64 + 16;
loc_832FB1EC:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x832fb208
	if (ctx.cr6.eq) goto loc_832FB208;
	// lwz r11,20(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x832FB208;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_832FB208:
	// addi r11,r30,16
	ctx.r11.s64 = ctx.r30.s64 + 16;
	// addi r31,r31,8
	ctx.r31.s64 = ctx.r31.s64 + 8;
	// addi r11,r11,640
	ctx.r11.s64 = ctx.r11.s64 + 640;
	// cmpw cr6,r31,r11
	ctx.cr6.compare<int32_t>(ctx.r31.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x832fb1ec
	if (ctx.cr6.lt) goto loc_832FB1EC;
	// addi r3,r30,16
	ctx.r3.s64 = ctx.r30.s64 + 16;
	// li r5,640
	ctx.r5.s64 = 640;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x833a2b30
	ctx.lr = 0x832FB22C;
	sub_833A2B30(ctx, base);
	// addi r3,r30,968
	ctx.r3.s64 = ctx.r30.s64 + 968;
	// li r5,512
	ctx.r5.s64 = 512;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x833a2b30
	ctx.lr = 0x832FB23C;
	sub_833A2B30(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// li r5,9
	ctx.r5.s64 = 9;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x833a2b30
	ctx.lr = 0x832FB24C;
	sub_833A2B30(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stb r11,0(r30)
	PPC_STORE_U8(ctx.r30.u32 + 0, ctx.r11.u8);
loc_832FB254:
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

__attribute__((alias("__imp__sub_832FB26C"))) PPC_WEAK_FUNC(sub_832FB26C);
PPC_FUNC_IMPL(__imp__sub_832FB26C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832FB270"))) PPC_WEAK_FUNC(sub_832FB270);
PPC_FUNC_IMPL(__imp__sub_832FB270) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x833a01a4
	ctx.lr = 0x832FB278;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
loc_832FB284:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x832fb284
	if (!ctx.cr6.eq) goto loc_832FB284;
	// subf r11,r28,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r28.s64;
	// lis r10,-31823
	ctx.r10.s64 = -2085552128;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// addi r29,r10,9304
	ctx.r29.s64 = ctx.r10.s64 + 9304;
	// rotlwi r27,r11,0
	ctx.r27.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// li r30,0
	ctx.r30.s64 = 0;
	// addi r31,r29,4
	ctx.r31.s64 = ctx.r29.s64 + 4;
loc_832FB2B0:
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x833a31f0
	ctx.lr = 0x832FB2C0;
	sub_833A31F0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x832fb2e4
	if (ctx.cr0.eq) goto loc_832FB2E4;
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// addi r31,r31,16
	ctx.r31.s64 = ctx.r31.s64 + 16;
	// cmplwi cr6,r30,32
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 32, ctx.xer);
	// blt cr6,0x832fb2b0
	if (ctx.cr6.lt) goto loc_832FB2B0;
	// li r3,0
	ctx.r3.s64 = 0;
loc_832FB2DC:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x833a01f4
	__restgprlr_27(ctx, base);
	return;
loc_832FB2E4:
	// rlwinm r11,r30,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 4) & 0xFFFFFFF0;
	// lwzx r3,r11,r29
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r29.u32);
	// b 0x832fb2dc
	goto loc_832FB2DC;
}

__attribute__((alias("__imp__sub_832FB2F0"))) PPC_WEAK_FUNC(sub_832FB2F0);
PPC_FUNC_IMPL(__imp__sub_832FB2F0) {
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
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x832fb434
	if (ctx.cr6.eq) goto loc_832FB434;
	// li r30,0
	ctx.r30.s64 = 0;
	// mr r10,r5
	ctx.r10.u64 = ctx.r5.u64;
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
	// subf r7,r5,r31
	ctx.r7.s64 = ctx.r31.s64 - ctx.r5.s64;
loc_832FB324:
	// lbz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// extsb r8,r9
	ctx.r8.s64 = ctx.r9.s8;
	// cmpwi cr6,r8,58
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 58, ctx.xer);
	// beq cr6,0x832fb350
	if (ctx.cr6.eq) goto loc_832FB350;
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq cr6,0x832fb350
	if (ctx.cr6.eq) goto loc_832FB350;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stbx r9,r7,r10
	PPC_STORE_U8(ctx.r7.u32 + ctx.r10.u32, ctx.r9.u8);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r11,297
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 297, ctx.xer);
	// blt cr6,0x832fb324
	if (ctx.cr6.lt) goto loc_832FB324;
loc_832FB350:
	// lbzx r10,r11,r5
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + ctx.r5.u32);
	// stbx r30,r11,r31
	PPC_STORE_U8(ctx.r11.u32 + ctx.r31.u32, ctx.r30.u8);
	// cmplwi r10,0
	ctx.cr0.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne 0x832fb394
	if (!ctx.cr0.eq) goto loc_832FB394;
	// mr r10,r31
	ctx.r10.u64 = ctx.r31.u64;
loc_832FB364:
	// lbz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x832fb364
	if (!ctx.cr6.eq) goto loc_832FB364;
	// subf r11,r31,r10
	ctx.r11.s64 = ctx.r10.s64 - ctx.r31.s64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// addi r5,r11,1
	ctx.r5.s64 = ctx.r11.s64 + 1;
	// bl 0x833a1390
	ctx.lr = 0x832FB38C;
	sub_833A1390(ctx, base);
	// stb r30,0(r31)
	PPC_STORE_U8(ctx.r31.u32 + 0, ctx.r30.u8);
	// b 0x832fb434
	goto loc_832FB434;
loc_832FB394:
	// addi r10,r11,1
	ctx.r10.s64 = ctx.r11.s64 + 1;
	// cmpwi cr6,r10,2
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 2, ctx.xer);
	// bne cr6,0x832fb3a8
	if (!ctx.cr6.eq) goto loc_832FB3A8;
	// mr r10,r30
	ctx.r10.u64 = ctx.r30.u64;
	// stb r30,0(r31)
	PPC_STORE_U8(ctx.r31.u32 + 0, ctx.r30.u8);
loc_832FB3A8:
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// cmpwi cr6,r10,297
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 297, ctx.xer);
	// bge cr6,0x832fb3d4
	if (!ctx.cr6.lt) goto loc_832FB3D4;
	// subf r8,r10,r3
	ctx.r8.s64 = ctx.r3.s64 - ctx.r10.s64;
loc_832FB3B8:
	// lbzx r9,r11,r5
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + ctx.r5.u32);
	// cmplwi r9,0
	ctx.cr0.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq 0x832fb3d4
	if (ctx.cr0.eq) goto loc_832FB3D4;
	// stbx r9,r8,r11
	PPC_STORE_U8(ctx.r8.u32 + ctx.r11.u32, ctx.r9.u8);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmpwi cr6,r11,297
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 297, ctx.xer);
	// blt cr6,0x832fb3b8
	if (ctx.cr6.lt) goto loc_832FB3B8;
loc_832FB3D4:
	// subf r10,r10,r11
	ctx.r10.s64 = ctx.r11.s64 - ctx.r10.s64;
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
	// stbx r30,r10,r3
	PPC_STORE_U8(ctx.r10.u32 + ctx.r3.u32, ctx.r30.u8);
loc_832FB3E0:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x832fb3e0
	if (!ctx.cr6.eq) goto loc_832FB3E0;
	// subf r10,r31,r11
	ctx.r10.s64 = ctx.r11.s64 - ctx.r31.s64;
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// rotlwi r10,r10,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// addic. r9,r10,1
	ctx.xer.ca = ctx.r10.u32 > 4294967294;
	ctx.r9.s64 = ctx.r10.s64 + 1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq 0x832fb434
	if (ctx.cr0.eq) goto loc_832FB434;
loc_832FB408:
	// lbzx r10,r11,r31
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + ctx.r31.u32);
	// extsb r10,r10
	ctx.r10.s64 = ctx.r10.s8;
	// cmpwi cr6,r10,97
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 97, ctx.xer);
	// blt cr6,0x832fb428
	if (ctx.cr6.lt) goto loc_832FB428;
	// cmpwi cr6,r10,122
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 122, ctx.xer);
	// bgt cr6,0x832fb428
	if (ctx.cr6.gt) goto loc_832FB428;
	// addi r10,r10,-32
	ctx.r10.s64 = ctx.r10.s64 + -32;
	// stbx r10,r11,r31
	PPC_STORE_U8(ctx.r11.u32 + ctx.r31.u32, ctx.r10.u8);
loc_832FB428:
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// blt cr6,0x832fb408
	if (ctx.cr6.lt) goto loc_832FB408;
loc_832FB434:
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

__attribute__((alias("__imp__sub_832FB44C"))) PPC_WEAK_FUNC(sub_832FB44C);
PPC_FUNC_IMPL(__imp__sub_832FB44C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832FB450"))) PPC_WEAK_FUNC(sub_832FB450);
PPC_FUNC_IMPL(__imp__sub_832FB450) {
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
	// bne cr6,0x832fb48c
	if (!ctx.cr6.eq) goto loc_832FB48C;
	// lis r11,-31823
	ctx.r11.s64 = -2085552128;
	// addi r11,r11,9816
	ctx.r11.s64 = ctx.r11.s64 + 9816;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x832fb4e8
	if (ctx.cr6.eq) goto loc_832FB4E8;
	// lis r9,-32210
	ctx.r9.s64 = -2110914560;
	// addi r4,r9,-13428
	ctx.r4.s64 = ctx.r9.s64 + -13428;
	// b 0x832fb4d4
	goto loc_832FB4D4;
loc_832FB48C:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r11,20(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x832fb4b8
	if (ctx.cr6.eq) goto loc_832FB4B8;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x832FB4A8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// b 0x832fb4e8
	goto loc_832FB4E8;
loc_832FB4B8:
	// lis r11,-31823
	ctx.r11.s64 = -2085552128;
	// addi r11,r11,9816
	ctx.r11.s64 = ctx.r11.s64 + 9816;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x832fb4e8
	if (ctx.cr6.eq) goto loc_832FB4E8;
	// lis r9,-32210
	ctx.r9.s64 = -2110914560;
	// addi r4,r9,-13452
	ctx.r4.s64 = ctx.r9.s64 + -13452;
loc_832FB4D4:
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r3,4(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x832FB4E8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_832FB4E8:
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

__attribute__((alias("__imp__sub_832FB4FC"))) PPC_WEAK_FUNC(sub_832FB4FC);
PPC_FUNC_IMPL(__imp__sub_832FB4FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832FB500"))) PPC_WEAK_FUNC(sub_832FB500);
PPC_FUNC_IMPL(__imp__sub_832FB500) {
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
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x832fb550
	if (!ctx.cr6.eq) goto loc_832FB550;
	// lis r11,-31823
	ctx.r11.s64 = -2085552128;
	// addi r11,r11,9816
	ctx.r11.s64 = ctx.r11.s64 + 9816;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x832fb548
	if (ctx.cr6.eq) goto loc_832FB548;
	// rotlwi r10,r10,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// lwz r3,4(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lis r9,-32210
	ctx.r9.s64 = -2110914560;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r9,-13376
	ctx.r4.s64 = ctx.r9.s64 + -13376;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x832FB548;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_832FB548:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x832fb5ac
	goto loc_832FB5AC;
loc_832FB550:
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,28(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x832fb574
	if (ctx.cr6.eq) goto loc_832FB574;
	// lwz r3,4(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x832FB56C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// b 0x832fb5a8
	goto loc_832FB5A8;
loc_832FB574:
	// lis r11,-31823
	ctx.r11.s64 = -2085552128;
	// li r31,0
	ctx.r31.s64 = 0;
	// addi r11,r11,9816
	ctx.r11.s64 = ctx.r11.s64 + 9816;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x832fb5a8
	if (ctx.cr6.eq) goto loc_832FB5A8;
	// rotlwi r10,r10,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// lwz r3,4(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lis r9,-32210
	ctx.r9.s64 = -2110914560;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r9,-13400
	ctx.r4.s64 = ctx.r9.s64 + -13400;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x832FB5A8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_832FB5A8:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_832FB5AC:
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

__attribute__((alias("__imp__sub_832FB5C0"))) PPC_WEAK_FUNC(sub_832FB5C0);
PPC_FUNC_IMPL(__imp__sub_832FB5C0) {
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
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x832fb610
	if (!ctx.cr6.eq) goto loc_832FB610;
	// lis r11,-31823
	ctx.r11.s64 = -2085552128;
	// addi r11,r11,9816
	ctx.r11.s64 = ctx.r11.s64 + 9816;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x832fb608
	if (ctx.cr6.eq) goto loc_832FB608;
	// rotlwi r10,r10,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// lwz r3,4(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lis r9,-32210
	ctx.r9.s64 = -2110914560;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r9,-13324
	ctx.r4.s64 = ctx.r9.s64 + -13324;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x832FB608;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_832FB608:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x832fb66c
	goto loc_832FB66C;
loc_832FB610:
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,24(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x832fb634
	if (ctx.cr6.eq) goto loc_832FB634;
	// lwz r3,4(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x832FB62C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// b 0x832fb668
	goto loc_832FB668;
loc_832FB634:
	// lis r11,-31823
	ctx.r11.s64 = -2085552128;
	// li r31,0
	ctx.r31.s64 = 0;
	// addi r11,r11,9816
	ctx.r11.s64 = ctx.r11.s64 + 9816;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x832fb668
	if (ctx.cr6.eq) goto loc_832FB668;
	// rotlwi r10,r10,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// lwz r3,4(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lis r9,-32210
	ctx.r9.s64 = -2110914560;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r9,-13348
	ctx.r4.s64 = ctx.r9.s64 + -13348;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x832FB668;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_832FB668:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_832FB66C:
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

__attribute__((alias("__imp__sub_832FB680"))) PPC_WEAK_FUNC(sub_832FB680);
PPC_FUNC_IMPL(__imp__sub_832FB680) {
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
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x832fb6d0
	if (!ctx.cr6.eq) goto loc_832FB6D0;
	// lis r11,-31823
	ctx.r11.s64 = -2085552128;
	// addi r11,r11,9816
	ctx.r11.s64 = ctx.r11.s64 + 9816;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x832fb6c8
	if (ctx.cr6.eq) goto loc_832FB6C8;
	// rotlwi r10,r10,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// lwz r3,4(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lis r9,-32210
	ctx.r9.s64 = -2110914560;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r9,-13272
	ctx.r4.s64 = ctx.r9.s64 + -13272;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x832FB6C8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_832FB6C8:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x832fb72c
	goto loc_832FB72C;
loc_832FB6D0:
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,32(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x832fb6f4
	if (ctx.cr6.eq) goto loc_832FB6F4;
	// lwz r3,4(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x832FB6EC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// b 0x832fb728
	goto loc_832FB728;
loc_832FB6F4:
	// lis r11,-31823
	ctx.r11.s64 = -2085552128;
	// li r31,0
	ctx.r31.s64 = 0;
	// addi r11,r11,9816
	ctx.r11.s64 = ctx.r11.s64 + 9816;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x832fb728
	if (ctx.cr6.eq) goto loc_832FB728;
	// rotlwi r10,r10,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// lwz r3,4(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lis r9,-32210
	ctx.r9.s64 = -2110914560;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r9,-13296
	ctx.r4.s64 = ctx.r9.s64 + -13296;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x832FB728;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_832FB728:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_832FB72C:
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

__attribute__((alias("__imp__sub_832FB740"))) PPC_WEAK_FUNC(sub_832FB740);
PPC_FUNC_IMPL(__imp__sub_832FB740) {
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
	// lis r11,-31823
	ctx.r11.s64 = -2085552128;
	// addi r30,r11,9304
	ctx.r30.s64 = ctx.r11.s64 + 9304;
	// mr r31,r30
	ctx.r31.u64 = ctx.r30.u64;
loc_832FB760:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x832fb780
	if (ctx.cr6.eq) goto loc_832FB780;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x832fb780
	if (ctx.cr6.eq) goto loc_832FB780;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x832FB780;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_832FB780:
	// addi r31,r31,16
	ctx.r31.s64 = ctx.r31.s64 + 16;
	// addi r11,r30,512
	ctx.r11.s64 = ctx.r30.s64 + 512;
	// cmpw cr6,r31,r11
	ctx.cr6.compare<int32_t>(ctx.r31.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x832fb760
	if (ctx.cr6.lt) goto loc_832FB760;
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

__attribute__((alias("__imp__sub_832FB7A8"))) PPC_WEAK_FUNC(sub_832FB7A8);
PPC_FUNC_IMPL(__imp__sub_832FB7A8) {
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
	// lis r11,-31823
	ctx.r11.s64 = -2085552128;
	// addi r30,r11,9304
	ctx.r30.s64 = ctx.r11.s64 + 9304;
	// mr r31,r30
	ctx.r31.u64 = ctx.r30.u64;
loc_832FB7C8:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x832fb7f8
	if (ctx.cr6.eq) goto loc_832FB7F8;
	// lwz r11,96(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 96);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x832fb7f8
	if (ctx.cr6.eq) goto loc_832FB7F8;
	// li r6,0
	ctx.r6.s64 = 0;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,500
	ctx.r4.s64 = 500;
	// li r3,0
	ctx.r3.s64 = 0;
	// bctrl 
	ctx.lr = 0x832FB7F8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_832FB7F8:
	// addi r31,r31,16
	ctx.r31.s64 = ctx.r31.s64 + 16;
	// addi r11,r30,512
	ctx.r11.s64 = ctx.r30.s64 + 512;
	// cmpw cr6,r31,r11
	ctx.cr6.compare<int32_t>(ctx.r31.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x832fb7c8
	if (ctx.cr6.lt) goto loc_832FB7C8;
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

__attribute__((alias("__imp__sub_832FB820"))) PPC_WEAK_FUNC(sub_832FB820);
PPC_FUNC_IMPL(__imp__sub_832FB820) {
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
	// li r31,3
	ctx.r31.s64 = 3;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x832fb874
	if (!ctx.cr6.eq) goto loc_832FB874;
	// lis r11,-31823
	ctx.r11.s64 = -2085552128;
	// addi r11,r11,9816
	ctx.r11.s64 = ctx.r11.s64 + 9816;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x832fb86c
	if (ctx.cr6.eq) goto loc_832FB86C;
	// rotlwi r10,r10,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// lwz r3,4(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lis r9,-32210
	ctx.r9.s64 = -2110914560;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r9,-13216
	ctx.r4.s64 = ctx.r9.s64 + -13216;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x832FB86C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_832FB86C:
	// li r3,3
	ctx.r3.s64 = 3;
	// b 0x832fb8cc
	goto loc_832FB8CC;
loc_832FB874:
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,44(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 44);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x832fb898
	if (ctx.cr6.eq) goto loc_832FB898;
	// lwz r3,4(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x832FB890;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// b 0x832fb8c8
	goto loc_832FB8C8;
loc_832FB898:
	// lis r11,-31823
	ctx.r11.s64 = -2085552128;
	// addi r11,r11,9816
	ctx.r11.s64 = ctx.r11.s64 + 9816;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x832fb8c8
	if (ctx.cr6.eq) goto loc_832FB8C8;
	// rotlwi r10,r10,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// lwz r3,4(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lis r9,-32210
	ctx.r9.s64 = -2110914560;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r9,-13244
	ctx.r4.s64 = ctx.r9.s64 + -13244;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x832FB8C8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_832FB8C8:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_832FB8CC:
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

__attribute__((alias("__imp__sub_832FB8E0"))) PPC_WEAK_FUNC(sub_832FB8E0);
PPC_FUNC_IMPL(__imp__sub_832FB8E0) {
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
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x832fb930
	if (!ctx.cr6.eq) goto loc_832FB930;
	// lis r11,-31823
	ctx.r11.s64 = -2085552128;
	// addi r11,r11,9816
	ctx.r11.s64 = ctx.r11.s64 + 9816;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x832fb928
	if (ctx.cr6.eq) goto loc_832FB928;
	// rotlwi r10,r10,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// lwz r3,4(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lis r9,-32210
	ctx.r9.s64 = -2110914560;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r9,-13188
	ctx.r4.s64 = ctx.r9.s64 + -13188;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x832FB928;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_832FB928:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x832fb95c
	goto loc_832FB95C;
loc_832FB930:
	// lwz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// li r3,1
	ctx.r3.s64 = 1;
	// lwz r11,96(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 96);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x832fb95c
	if (ctx.cr6.eq) goto loc_832FB95C;
	// li r6,0
	ctx.r6.s64 = 0;
	// lwz r3,4(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// li r5,0
	ctx.r5.s64 = 0;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// li r4,600
	ctx.r4.s64 = 600;
	// bctrl 
	ctx.lr = 0x832FB95C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_832FB95C:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_832FB96C"))) PPC_WEAK_FUNC(sub_832FB96C);
PPC_FUNC_IMPL(__imp__sub_832FB96C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832FB970"))) PPC_WEAK_FUNC(sub_832FB970);
PPC_FUNC_IMPL(__imp__sub_832FB970) {
	PPC_FUNC_PROLOGUE();
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// li r3,0
	ctx.r3.s64 = 0;
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lwz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// lwz r11,96(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 96);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lwz r3,4(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// li r4,501
	ctx.r4.s64 = 501;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_832FB9A8"))) PPC_WEAK_FUNC(sub_832FB9A8);
PPC_FUNC_IMPL(__imp__sub_832FB9A8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_832FB9AC"))) PPC_WEAK_FUNC(sub_832FB9AC);
PPC_FUNC_IMPL(__imp__sub_832FB9AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832FB9B0"))) PPC_WEAK_FUNC(sub_832FB9B0);
PPC_FUNC_IMPL(__imp__sub_832FB9B0) {
	PPC_FUNC_PROLOGUE();
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x832fb9d4
	if (!ctx.cr6.eq) goto loc_832FB9D4;
	// lis r9,-31823
	ctx.r9.s64 = -2085552128;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r8,r9,9820
	ctx.r8.s64 = ctx.r9.s64 + 9820;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r10,9820(r9)
	PPC_STORE_U32(ctx.r9.u32 + 9820, ctx.r10.u32);
	// stw r11,-4(r8)
	PPC_STORE_U32(ctx.r8.u32 + -4, ctx.r11.u32);
	// blr 
	return;
loc_832FB9D4:
	// lis r11,-31823
	ctx.r11.s64 = -2085552128;
	// addi r10,r11,9820
	ctx.r10.s64 = ctx.r11.s64 + 9820;
	// stw r4,9820(r11)
	PPC_STORE_U32(ctx.r11.u32 + 9820, ctx.r4.u32);
	// stw r3,-4(r10)
	PPC_STORE_U32(ctx.r10.u32 + -4, ctx.r3.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_832FB9E8"))) PPC_WEAK_FUNC(sub_832FB9E8);
PPC_FUNC_IMPL(__imp__sub_832FB9E8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x833a01ac
	ctx.lr = 0x832FB9F0;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31823
	ctx.r11.s64 = -2085552128;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// addi r30,r11,8336
	ctx.r30.s64 = ctx.r11.s64 + 8336;
	// bne cr6,0x832fba10
	if (!ctx.cr6.eq) goto loc_832FBA10;
	// mr r31,r30
	ctx.r31.u64 = ctx.r30.u64;
loc_832FBA10:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x832fb270
	ctx.lr = 0x832FBA18;
	sub_832FB270(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x832fba78
	if (ctx.cr0.eq) goto loc_832FBA78;
	// lwz r11,96(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 96);
	// li r3,0
	ctx.r3.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x832fba44
	if (ctx.cr6.eq) goto loc_832FBA44;
	// li r6,0
	ctx.r6.s64 = 0;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,100
	ctx.r4.s64 = 100;
	// bctrl 
	ctx.lr = 0x832FBA44;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_832FBA44:
	// cmpwi cr6,r3,1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 1, ctx.xer);
	// bne cr6,0x832fba78
	if (!ctx.cr6.eq) goto loc_832FBA78;
	// addi r3,r30,664
	ctx.r3.s64 = ctx.r30.s64 + 664;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// li r4,297
	ctx.r4.s64 = 297;
	// bl 0x832ff8e8
	ctx.lr = 0x832FBA5C;
	sub_832FF8E8(ctx, base);
	// lis r11,-32210
	ctx.r11.s64 = -2110914560;
	// addi r7,r30,664
	ctx.r7.s64 = ctx.r30.s64 + 664;
	// addi r5,r11,-13148
	ctx.r5.s64 = ctx.r11.s64 + -13148;
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// li r4,297
	ctx.r4.s64 = 297;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x832ff9a8
	ctx.lr = 0x832FBA78;
	sub_832FF9A8(ctx, base);
loc_832FBA78:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x833a01fc
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832FBA80"))) PPC_WEAK_FUNC(sub_832FBA80);
PPC_FUNC_IMPL(__imp__sub_832FBA80) {
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
	// bne cr6,0x832fbad8
	if (!ctx.cr6.eq) goto loc_832FBAD8;
	// lis r11,-31823
	ctx.r11.s64 = -2085552128;
	// addi r11,r11,9816
	ctx.r11.s64 = ctx.r11.s64 + 9816;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x832fbad0
	if (ctx.cr6.eq) goto loc_832FBAD0;
	// lis r9,-32210
	ctx.r9.s64 = -2110914560;
	// addi r4,r9,-13092
	ctx.r4.s64 = ctx.r9.s64 + -13092;
loc_832FBABC:
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r3,4(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x832FBAD0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_832FBAD0:
	// li r3,-1
	ctx.r3.s64 = -1;
	// b 0x832fbb68
	goto loc_832FBB68;
loc_832FBAD8:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lis r3,32767
	ctx.r3.s64 = 2147418112;
	// ori r3,r3,65535
	ctx.r3.u64 = ctx.r3.u64 | 65535;
	// lwz r11,96(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 96);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x832fbb68
	if (ctx.cr6.eq) goto loc_832FBB68;
	// li r6,0
	ctx.r6.s64 = 0;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// li r5,0
	ctx.r5.s64 = 0;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// li r4,301
	ctx.r4.s64 = 301;
	// bctrl 
	ctx.lr = 0x832FBB08;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// bne cr6,0x832fbb34
	if (!ctx.cr6.eq) goto loc_832FBB34;
loc_832FBB14:
	// lis r11,-31823
	ctx.r11.s64 = -2085552128;
	// addi r11,r11,9816
	ctx.r11.s64 = ctx.r11.s64 + 9816;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x832fbad0
	if (ctx.cr6.eq) goto loc_832FBAD0;
	// lis r9,-32210
	ctx.r9.s64 = -2110914560;
	// addi r4,r9,-13140
	ctx.r4.s64 = ctx.r9.s64 + -13140;
	// b 0x832fbabc
	goto loc_832FBABC;
loc_832FBB34:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// li r4,302
	ctx.r4.s64 = 302;
	// lwz r11,96(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 96);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x832FBB54;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// beq cr6,0x832fbb14
	if (ctx.cr6.eq) goto loc_832FBB14;
	// rldicr r11,r30,32,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u64, 32) & 0xFFFFFFFF00000000;
	// clrldi r10,r3,32
	ctx.r10.u64 = ctx.r3.u64 & 0xFFFFFFFF;
	// add r3,r11,r10
	ctx.r3.u64 = ctx.r11.u64 + ctx.r10.u64;
loc_832FBB68:
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

__attribute__((alias("__imp__sub_832FBB80"))) PPC_WEAK_FUNC(sub_832FBB80);
PPC_FUNC_IMPL(__imp__sub_832FBB80) {
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
	// bne cr6,0x832fbbcc
	if (!ctx.cr6.eq) goto loc_832FBBCC;
	// lis r11,-31823
	ctx.r11.s64 = -2085552128;
	// addi r11,r11,9816
	ctx.r11.s64 = ctx.r11.s64 + 9816;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x832fbbc4
	if (ctx.cr6.eq) goto loc_832FBBC4;
	// rotlwi r10,r10,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// lwz r3,4(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lis r9,-32210
	ctx.r9.s64 = -2110914560;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r9,-13044
	ctx.r4.s64 = ctx.r9.s64 + -13044;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x832FBBC4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_832FBBC4:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x832fbbfc
	goto loc_832FBBFC;
loc_832FBBCC:
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,96(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 96);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x832fbbf8
	if (ctx.cr6.eq) goto loc_832FBBF8;
	// li r6,0
	ctx.r6.s64 = 0;
	// lwz r3,4(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// li r5,0
	ctx.r5.s64 = 0;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// li r4,400
	ctx.r4.s64 = 400;
	// bctrl 
	ctx.lr = 0x832FBBF4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// b 0x832fbbfc
	goto loc_832FBBFC;
loc_832FBBF8:
	// li r3,1
	ctx.r3.s64 = 1;
loc_832FBBFC:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_832FBC0C"))) PPC_WEAK_FUNC(sub_832FBC0C);
PPC_FUNC_IMPL(__imp__sub_832FBC0C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832FBC10"))) PPC_WEAK_FUNC(sub_832FBC10);
PPC_FUNC_IMPL(__imp__sub_832FBC10) {
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
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
loc_832FBC2C:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x832fbc2c
	if (!ctx.cr6.eq) goto loc_832FBC2C;
	// subf r10,r31,r11
	ctx.r10.s64 = ctx.r11.s64 - ctx.r31.s64;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// rotlwi r10,r10,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// addic. r9,r10,1
	ctx.xer.ca = ctx.r10.u32 > 4294967294;
	ctx.r9.s64 = ctx.r10.s64 + 1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq 0x832fbc80
	if (ctx.cr0.eq) goto loc_832FBC80;
loc_832FBC54:
	// lbzx r10,r11,r31
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + ctx.r31.u32);
	// extsb r10,r10
	ctx.r10.s64 = ctx.r10.s8;
	// cmpwi cr6,r10,97
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 97, ctx.xer);
	// blt cr6,0x832fbc74
	if (ctx.cr6.lt) goto loc_832FBC74;
	// cmpwi cr6,r10,122
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 122, ctx.xer);
	// bgt cr6,0x832fbc74
	if (ctx.cr6.gt) goto loc_832FBC74;
	// addi r10,r10,-32
	ctx.r10.s64 = ctx.r10.s64 + -32;
	// stbx r10,r11,r31
	PPC_STORE_U8(ctx.r11.u32 + ctx.r31.u32, ctx.r10.u8);
loc_832FBC74:
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// blt cr6,0x832fbc54
	if (ctx.cr6.lt) goto loc_832FBC54;
loc_832FBC80:
	// mtctr r4
	ctx.ctr.u64 = ctx.r4.u64;
	// bctrl 
	ctx.lr = 0x832FBC88;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x832fb270
	ctx.lr = 0x832FBC94;
	sub_832FB270(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne 0x832fbd18
	if (!ctx.cr0.eq) goto loc_832FBD18;
	// lis r11,-31823
	ctx.r11.s64 = -2085552128;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r11,r11,9304
	ctx.r11.s64 = ctx.r11.s64 + 9304;
	// addi r9,r11,4
	ctx.r9.s64 = ctx.r11.s64 + 4;
loc_832FBCAC:
	// lbz r8,0(r9)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r9.u32 + 0);
	// cmplwi r8,0
	ctx.cr0.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq 0x832fbccc
	if (ctx.cr0.eq) goto loc_832FBCCC;
	// addi r9,r9,16
	ctx.r9.s64 = ctx.r9.s64 + 16;
	// addi r8,r11,516
	ctx.r8.s64 = ctx.r11.s64 + 516;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpw cr6,r9,r8
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r8.s32, ctx.xer);
	// blt cr6,0x832fbcac
	if (ctx.cr6.lt) goto loc_832FBCAC;
loc_832FBCCC:
	// cmpwi cr6,r10,32
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 32, ctx.xer);
	// bne cr6,0x832fbcdc
	if (!ctx.cr6.eq) goto loc_832FBCDC;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x832fbd1c
	goto loc_832FBD1C;
loc_832FBCDC:
	// rlwinm r10,r10,4,0,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 4) & 0xFFFFFFF0;
	// mr r9,r31
	ctx.r9.u64 = ctx.r31.u64;
	// stwx r30,r10,r11
	PPC_STORE_U32(ctx.r10.u32 + ctx.r11.u32, ctx.r30.u32);
loc_832FBCE8:
	// lbz r8,0(r9)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r9.u32 + 0);
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// bne cr6,0x832fbce8
	if (!ctx.cr6.eq) goto loc_832FBCE8;
	// subf r9,r31,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r31.s64;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// addi r9,r9,-1
	ctx.r9.s64 = ctx.r9.s64 + -1;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// rotlwi r9,r9,0
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r9.u32, 0);
	// add r3,r10,r11
	ctx.r3.u64 = ctx.r10.u64 + ctx.r11.u64;
	// addi r5,r9,1
	ctx.r5.s64 = ctx.r9.s64 + 1;
	// bl 0x833a1390
	ctx.lr = 0x832FBD18;
	sub_833A1390(ctx, base);
loc_832FBD18:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
loc_832FBD1C:
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

__attribute__((alias("__imp__sub_832FBD34"))) PPC_WEAK_FUNC(sub_832FBD34);
PPC_FUNC_IMPL(__imp__sub_832FBD34) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832FBD38"))) PPC_WEAK_FUNC(sub_832FBD38);
PPC_FUNC_IMPL(__imp__sub_832FBD38) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x833a01a8
	ctx.lr = 0x832FBD40;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x832fbd7c
	if (!ctx.cr6.eq) goto loc_832FBD7C;
	// lis r11,-31823
	ctx.r11.s64 = -2085552128;
	// addi r11,r11,9816
	ctx.r11.s64 = ctx.r11.s64 + 9816;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x832fbe6c
	if (ctx.cr6.eq) goto loc_832FBE6C;
	// rotlwi r10,r10,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// lwz r3,4(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lis r9,-32210
	ctx.r9.s64 = -2110914560;
	// addi r4,r9,-12960
	ctx.r4.s64 = ctx.r9.s64 + -12960;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// b 0x832fbe64
	goto loc_832FBE64;
loc_832FBD7C:
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
loc_832FBD80:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x832fbd80
	if (!ctx.cr6.eq) goto loc_832FBD80;
	// subf r11,r29,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r29.s64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi. r28,r11,0
	ctx.r28.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	ctx.cr0.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// bne 0x832fbdb0
	if (!ctx.cr0.eq) goto loc_832FBDB0;
	// lis r10,-31823
	ctx.r10.s64 = -2085552128;
	// li r11,0
	ctx.r11.s64 = 0;
	// stb r11,8336(r10)
	PPC_STORE_U8(ctx.r10.u32 + 8336, ctx.r11.u8);
	// b 0x832fbe6c
	goto loc_832FBE6C;
loc_832FBDB0:
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
loc_832FBDB4:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x832fbdb4
	if (!ctx.cr6.eq) goto loc_832FBDB4;
	// subf r10,r29,r11
	ctx.r10.s64 = ctx.r11.s64 - ctx.r29.s64;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// rotlwi r10,r10,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// addic. r9,r10,1
	ctx.xer.ca = ctx.r10.u32 > 4294967294;
	ctx.r9.s64 = ctx.r10.s64 + 1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq 0x832fbe08
	if (ctx.cr0.eq) goto loc_832FBE08;
loc_832FBDDC:
	// lbzx r10,r11,r29
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + ctx.r29.u32);
	// extsb r10,r10
	ctx.r10.s64 = ctx.r10.s8;
	// cmpwi cr6,r10,97
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 97, ctx.xer);
	// blt cr6,0x832fbdfc
	if (ctx.cr6.lt) goto loc_832FBDFC;
	// cmpwi cr6,r10,122
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 122, ctx.xer);
	// bgt cr6,0x832fbdfc
	if (ctx.cr6.gt) goto loc_832FBDFC;
	// addi r10,r10,-32
	ctx.r10.s64 = ctx.r10.s64 + -32;
	// stbx r10,r11,r29
	PPC_STORE_U8(ctx.r11.u32 + ctx.r29.u32, ctx.r10.u8);
loc_832FBDFC:
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// blt cr6,0x832fbddc
	if (ctx.cr6.lt) goto loc_832FBDDC;
loc_832FBE08:
	// lis r11,-31823
	ctx.r11.s64 = -2085552128;
	// addi r30,r11,9816
	ctx.r30.s64 = ctx.r11.s64 + 9816;
	// addi r11,r30,-512
	ctx.r11.s64 = ctx.r30.s64 + -512;
	// addi r31,r11,4
	ctx.r31.s64 = ctx.r11.s64 + 4;
loc_832FBE18:
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x833a31f0
	ctx.lr = 0x832FBE28;
	sub_833A31F0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x832fbe74
	if (ctx.cr0.eq) goto loc_832FBE74;
	// addi r11,r30,-512
	ctx.r11.s64 = ctx.r30.s64 + -512;
	// addi r31,r31,16
	ctx.r31.s64 = ctx.r31.s64 + 16;
	// addi r11,r11,516
	ctx.r11.s64 = ctx.r11.s64 + 516;
	// cmpw cr6,r31,r11
	ctx.cr6.compare<int32_t>(ctx.r31.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x832fbe18
	if (ctx.cr6.lt) goto loc_832FBE18;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x832fbe6c
	if (ctx.cr6.eq) goto loc_832FBE6C;
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// lwz r3,4(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// lis r10,-32210
	ctx.r10.s64 = -2110914560;
	// addi r4,r10,-13000
	ctx.r4.s64 = ctx.r10.s64 + -13000;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
loc_832FBE64:
	// li r5,0
	ctx.r5.s64 = 0;
	// bctrl 
	ctx.lr = 0x832FBE6C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_832FBE6C:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x833a01f8
	__restgprlr_28(ctx, base);
	return;
loc_832FBE74:
	// lis r11,-31823
	ctx.r11.s64 = -2085552128;
	// addi r5,r28,1
	ctx.r5.s64 = ctx.r28.s64 + 1;
	// addi r3,r11,8336
	ctx.r3.s64 = ctx.r11.s64 + 8336;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x833a1390
	ctx.lr = 0x832FBE88;
	sub_833A1390(ctx, base);
	// b 0x832fbe6c
	goto loc_832FBE6C;
}

__attribute__((alias("__imp__sub_832FBE8C"))) PPC_WEAK_FUNC(sub_832FBE8C);
PPC_FUNC_IMPL(__imp__sub_832FBE8C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832FBE90"))) PPC_WEAK_FUNC(sub_832FBE90);
PPC_FUNC_IMPL(__imp__sub_832FBE90) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x833a01a0
	ctx.lr = 0x832FBE98;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lbz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r3.u32 + 0);
	// lis r11,-31823
	ctx.r11.s64 = -2085552128;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// mr r26,r5
	ctx.r26.u64 = ctx.r5.u64;
	// li r27,0
	ctx.r27.s64 = 0;
	// cmplwi r10,0
	ctx.cr0.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// addi r31,r11,8336
	ctx.r31.s64 = ctx.r11.s64 + 8336;
	// bne 0x832fbf1c
	if (!ctx.cr0.eq) goto loc_832FBF1C;
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
	// mr r9,r31
	ctx.r9.u64 = ctx.r31.u64;
loc_832FBEC8:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x832fbec8
	if (!ctx.cr6.eq) goto loc_832FBEC8;
	// subf r11,r9,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r9.s64;
	// lbz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 0);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// cmplwi r10,0
	ctx.cr0.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bne 0x832fbef8
	if (!ctx.cr0.eq) goto loc_832FBEF8;
	// stb r27,0(r30)
	PPC_STORE_U8(ctx.r30.u32 + 0, ctx.r27.u8);
	// b 0x832fbf08
	goto loc_832FBF08;
loc_832FBEF8:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r5,r11,1
	ctx.r5.s64 = ctx.r11.s64 + 1;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x833a1390
	ctx.lr = 0x832FBF08;
	sub_833A1390(ctx, base);
loc_832FBF08:
	// lbz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 0);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x832fbf1c
	if (!ctx.cr0.eq) goto loc_832FBF1C;
loc_832FBF14:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x832fbfa4
	goto loc_832FBFA4;
loc_832FBF1C:
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x832fb9e8
	ctx.lr = 0x832FBF28;
	sub_832FB9E8(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x832fb270
	ctx.lr = 0x832FBF30;
	sub_832FB270(ctx, base);
	// mr. r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// bne 0x832fbfa0
	if (!ctx.cr0.eq) goto loc_832FBFA0;
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
	// mr r9,r31
	ctx.r9.u64 = ctx.r31.u64;
loc_832FBF40:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x832fbf40
	if (!ctx.cr6.eq) goto loc_832FBF40;
	// subf r11,r9,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r9.s64;
	// lbz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 0);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// cmplwi r10,0
	ctx.cr0.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bne 0x832fbf70
	if (!ctx.cr0.eq) goto loc_832FBF70;
	// stb r27,0(r30)
	PPC_STORE_U8(ctx.r30.u32 + 0, ctx.r27.u8);
	// b 0x832fbf80
	goto loc_832FBF80;
loc_832FBF70:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r5,r11,1
	ctx.r5.s64 = ctx.r11.s64 + 1;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x833a1390
	ctx.lr = 0x832FBF80;
	sub_833A1390(ctx, base);
loc_832FBF80:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x832fb270
	ctx.lr = 0x832FBF88;
	sub_832FB270(ctx, base);
	// mr. r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// beq 0x832fbf14
	if (ctx.cr0.eq) goto loc_832FBF14;
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// li r4,297
	ctx.r4.s64 = 297;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x832ff8e8
	ctx.lr = 0x832FBFA0;
	sub_832FF8E8(ctx, base);
loc_832FBFA0:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
loc_832FBFA4:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x833a01f0
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832FBFAC"))) PPC_WEAK_FUNC(sub_832FBFAC);
PPC_FUNC_IMPL(__imp__sub_832FBFAC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832FBFB0"))) PPC_WEAK_FUNC(sub_832FBFB0);
PPC_FUNC_IMPL(__imp__sub_832FBFB0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x833a01a0
	ctx.lr = 0x832FBFB8;
	__savegprlr_26(ctx, base);
	// stwu r1,-752(r1)
	ea = -752 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// mr r26,r5
	ctx.r26.u64 = ctx.r5.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x832fbffc
	if (!ctx.cr6.eq) goto loc_832FBFFC;
	// lis r11,-31823
	ctx.r11.s64 = -2085552128;
loc_832FBFD4:
	// addi r11,r11,9816
	ctx.r11.s64 = ctx.r11.s64 + 9816;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x832fc144
	if (ctx.cr6.eq) goto loc_832FC144;
	// rotlwi r10,r10,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// lwz r3,4(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lis r9,-32210
	ctx.r9.s64 = -2110914560;
	// addi r4,r9,-12796
	ctx.r4.s64 = ctx.r9.s64 + -12796;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// b 0x832fc13c
	goto loc_832FC13C;
loc_832FBFFC:
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,384
	ctx.r3.s64 = ctx.r1.s64 + 384;
	// bl 0x832fb2f0
	ctx.lr = 0x832FC00C;
	sub_832FB2F0(ctx, base);
	// lbz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// lis r11,-31823
	ctx.r11.s64 = -2085552128;
	// beq 0x832fbfd4
	if (ctx.cr0.eq) goto loc_832FBFD4;
	// addi r30,r11,9816
	ctx.r30.s64 = ctx.r11.s64 + 9816;
	// li r29,0
	ctx.r29.s64 = 0;
	// addi r11,r30,-1464
	ctx.r11.s64 = ctx.r30.s64 + -1464;
	// mr r10,r29
	ctx.r10.u64 = ctx.r29.u64;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
loc_832FC030:
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x832fc054
	if (ctx.cr6.eq) goto loc_832FC054;
	// addi r9,r30,-1464
	ctx.r9.s64 = ctx.r30.s64 + -1464;
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// addi r9,r9,644
	ctx.r9.s64 = ctx.r9.s64 + 644;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpw cr6,r11,r9
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r9.s32, ctx.xer);
	// blt cr6,0x832fc030
	if (ctx.cr6.lt) goto loc_832FC030;
loc_832FC054:
	// cmpwi cr6,r10,80
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 80, ctx.xer);
	// beq cr6,0x832fc06c
	if (ctx.cr6.eq) goto loc_832FC06C;
	// addi r11,r30,-1464
	ctx.r11.s64 = ctx.r30.s64 + -1464;
	// rlwinm r10,r10,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0xFFFFFFF8;
	// add. r31,r10,r11
	ctx.r31.u64 = ctx.r10.u64 + ctx.r11.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// bne 0x832fc084
	if (!ctx.cr0.eq) goto loc_832FC084;
loc_832FC06C:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x832fc144
	if (ctx.cr6.eq) goto loc_832FC144;
	// lis r10,-32210
	ctx.r10.s64 = -2110914560;
	// addi r4,r10,-12832
	ctx.r4.s64 = ctx.r10.s64 + -12832;
	// b 0x832fc130
	goto loc_832FC130;
loc_832FC084:
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,384
	ctx.r3.s64 = ctx.r1.s64 + 384;
	// bl 0x832fbe90
	ctx.lr = 0x832FC094;
	sub_832FBE90(ctx, base);
	// stw r3,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r3.u32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne 0x832fc0c0
	if (!ctx.cr0.eq) goto loc_832FC0C0;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// stw r29,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r29.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// stw r29,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r29.u32);
	// beq cr6,0x832fc144
	if (ctx.cr6.eq) goto loc_832FC144;
	// lis r10,-32210
	ctx.r10.s64 = -2110914560;
	// addi r4,r10,-12864
	ctx.r4.s64 = ctx.r10.s64 + -12864;
	// b 0x832fc130
	goto loc_832FC130;
loc_832FC0C0:
	// lwz r11,16(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x832fc114
	if (ctx.cr6.eq) goto loc_832FC114;
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bctrl 
	ctx.lr = 0x832FC0E0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// stw r3,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r3.u32);
	// bne 0x832fc10c
	if (!ctx.cr0.eq) goto loc_832FC10C;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// stw r29,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r29.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// stw r29,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r29.u32);
	// beq cr6,0x832fc144
	if (ctx.cr6.eq) goto loc_832FC144;
	// lis r10,-32210
	ctx.r10.s64 = -2110914560;
	// addi r4,r10,-12896
	ctx.r4.s64 = ctx.r10.s64 + -12896;
	// b 0x832fc130
	goto loc_832FC130;
loc_832FC10C:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// b 0x832fc148
	goto loc_832FC148;
loc_832FC114:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// stw r29,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r29.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// stw r29,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r29.u32);
	// beq cr6,0x832fc144
	if (ctx.cr6.eq) goto loc_832FC144;
	// lis r10,-32210
	ctx.r10.s64 = -2110914560;
	// addi r4,r10,-12920
	ctx.r4.s64 = ctx.r10.s64 + -12920;
loc_832FC130:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r3,4(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
loc_832FC13C:
	// li r5,0
	ctx.r5.s64 = 0;
	// bctrl 
	ctx.lr = 0x832FC144;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_832FC144:
	// li r3,0
	ctx.r3.s64 = 0;
loc_832FC148:
	// addi r1,r1,752
	ctx.r1.s64 = ctx.r1.s64 + 752;
	// b 0x833a01f0
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832FC150"))) PPC_WEAK_FUNC(sub_832FC150);
PPC_FUNC_IMPL(__imp__sub_832FC150) {
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
	// stwu r1,-720(r1)
	ea = -720 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x832fc19c
	if (!ctx.cr6.eq) goto loc_832FC19C;
loc_832FC170:
	// lis r11,-31823
	ctx.r11.s64 = -2085552128;
	// addi r11,r11,9816
	ctx.r11.s64 = ctx.r11.s64 + 9816;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x832fc244
	if (ctx.cr6.eq) goto loc_832FC244;
	// rotlwi r10,r10,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// lwz r3,4(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lis r9,-32210
	ctx.r9.s64 = -2110914560;
	// addi r4,r9,-12696
	ctx.r4.s64 = ctx.r9.s64 + -12696;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// b 0x832fc23c
	goto loc_832FC23C;
loc_832FC19C:
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,384
	ctx.r3.s64 = ctx.r1.s64 + 384;
	// bl 0x832fb2f0
	ctx.lr = 0x832FC1AC;
	sub_832FB2F0(ctx, base);
	// lbz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x832fc170
	if (ctx.cr0.eq) goto loc_832FC170;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,384
	ctx.r3.s64 = ctx.r1.s64 + 384;
	// bl 0x832fbe90
	ctx.lr = 0x832FC1C8;
	sub_832FBE90(ctx, base);
	// lis r11,-31823
	ctx.r11.s64 = -2085552128;
	// mr. r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// addi r31,r11,9816
	ctx.r31.s64 = ctx.r11.s64 + 9816;
	// bne 0x832fc200
	if (!ctx.cr0.eq) goto loc_832FC200;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x832fc200
	if (ctx.cr6.eq) goto loc_832FC200;
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lis r10,-32210
	ctx.r10.s64 = -2110914560;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r10,-12732
	ctx.r4.s64 = ctx.r10.s64 + -12732;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x832FC200;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_832FC200:
	// lwz r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x832fc21c
	if (ctx.cr6.eq) goto loc_832FC21C;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x832FC218;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// b 0x832fc248
	goto loc_832FC248;
loc_832FC21C:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x832fc244
	if (ctx.cr6.eq) goto loc_832FC244;
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lis r10,-32210
	ctx.r10.s64 = -2110914560;
	// addi r4,r10,-12764
	ctx.r4.s64 = ctx.r10.s64 + -12764;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
loc_832FC23C:
	// li r5,0
	ctx.r5.s64 = 0;
	// bctrl 
	ctx.lr = 0x832FC244;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_832FC244:
	// li r3,0
	ctx.r3.s64 = 0;
loc_832FC248:
	// addi r1,r1,720
	ctx.r1.s64 = ctx.r1.s64 + 720;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_832FC260"))) PPC_WEAK_FUNC(sub_832FC260);
PPC_FUNC_IMPL(__imp__sub_832FC260) {
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
	// bne cr6,0x832fc2a8
	if (!ctx.cr6.eq) goto loc_832FC2A8;
	// lis r11,-31823
	ctx.r11.s64 = -2085552128;
	// addi r11,r11,9816
	ctx.r11.s64 = ctx.r11.s64 + 9816;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x832fc31c
	if (ctx.cr6.eq) goto loc_832FC31C;
	// lis r9,-32210
	ctx.r9.s64 = -2110914560;
	// addi r4,r9,-12584
	ctx.r4.s64 = ctx.r9.s64 + -12584;
loc_832FC290:
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r3,4(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x832FC2A4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// b 0x832fc31c
	goto loc_832FC31C;
loc_832FC2A8:
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// bne cr6,0x832fc2d0
	if (!ctx.cr6.eq) goto loc_832FC2D0;
	// lis r11,-31823
	ctx.r11.s64 = -2085552128;
	// addi r11,r11,9816
	ctx.r11.s64 = ctx.r11.s64 + 9816;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x832fc31c
	if (ctx.cr6.eq) goto loc_832FC31C;
	// lis r9,-32210
	ctx.r9.s64 = -2110914560;
	// addi r4,r9,-12620
	ctx.r4.s64 = ctx.r9.s64 + -12620;
	// b 0x832fc290
	goto loc_832FC290;
loc_832FC2D0:
	// bl 0x832fbc10
	ctx.lr = 0x832FC2D4;
	sub_832FBC10(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne 0x832fc2fc
	if (!ctx.cr0.eq) goto loc_832FC2FC;
	// lis r11,-31823
	ctx.r11.s64 = -2085552128;
	// addi r11,r11,9816
	ctx.r11.s64 = ctx.r11.s64 + 9816;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x832fc31c
	if (ctx.cr6.eq) goto loc_832FC31C;
	// lis r9,-32210
	ctx.r9.s64 = -2110914560;
	// addi r4,r9,-12656
	ctx.r4.s64 = ctx.r9.s64 + -12656;
	// b 0x832fc290
	goto loc_832FC290;
loc_832FC2FC:
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x832fc31c
	if (ctx.cr6.eq) goto loc_832FC31C;
	// lis r10,-31952
	ctx.r10.s64 = -2094006272;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r10,-20200
	ctx.r3.s64 = ctx.r10.s64 + -20200;
	// bctrl 
	ctx.lr = 0x832FC31C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_832FC31C:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_832FC32C"))) PPC_WEAK_FUNC(sub_832FC32C);
PPC_FUNC_IMPL(__imp__sub_832FC32C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832FC330"))) PPC_WEAK_FUNC(sub_832FC330);
PPC_FUNC_IMPL(__imp__sub_832FC330) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32210
	ctx.r11.s64 = -2110914560;
	// lis r10,-31823
	ctx.r10.s64 = -2085552128;
	// addi r11,r11,-12472
	ctx.r11.s64 = ctx.r11.s64 + -12472;
	// lis r9,-31844
	ctx.r9.s64 = -2086928384;
	// addi r3,r9,-29304
	ctx.r3.s64 = ctx.r9.s64 + -29304;
	// stw r11,9828(r10)
	PPC_STORE_U32(ctx.r10.u32 + 9828, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_832FC34C"))) PPC_WEAK_FUNC(sub_832FC34C);
PPC_FUNC_IMPL(__imp__sub_832FC34C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832FC350"))) PPC_WEAK_FUNC(sub_832FC350);
PPC_FUNC_IMPL(__imp__sub_832FC350) {
	PPC_FUNC_PROLOGUE();
	// mr r9,r3
	ctx.r9.u64 = ctx.r3.u64;
	// li r3,0
	ctx.r3.s64 = 0;
loc_832FC358:
	// lbz r11,0(r9)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r9.u32 + 0);
	// extsb r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	// cmpwi cr6,r11,48
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 48, ctx.xer);
	// blt cr6,0x832fc378
	if (ctx.cr6.lt) goto loc_832FC378;
	// cmpwi cr6,r11,57
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 57, ctx.xer);
	// bgt cr6,0x832fc378
	if (ctx.cr6.gt) goto loc_832FC378;
	// addi r11,r11,-48
	ctx.r11.s64 = ctx.r11.s64 + -48;
	// b 0x832fc3a4
	goto loc_832FC3A4;
loc_832FC378:
	// cmpwi cr6,r11,97
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 97, ctx.xer);
	// blt cr6,0x832fc390
	if (ctx.cr6.lt) goto loc_832FC390;
	// cmpwi cr6,r11,102
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 102, ctx.xer);
	// bgt cr6,0x832fc390
	if (ctx.cr6.gt) goto loc_832FC390;
	// addi r11,r11,-87
	ctx.r11.s64 = ctx.r11.s64 + -87;
	// b 0x832fc3a4
	goto loc_832FC3A4;
loc_832FC390:
	// cmpwi cr6,r11,65
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 65, ctx.xer);
	// blt cr6,0x832fc3b4
	if (ctx.cr6.lt) goto loc_832FC3B4;
	// cmpwi cr6,r11,70
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 70, ctx.xer);
	// bgt cr6,0x832fc3b4
	if (ctx.cr6.gt) goto loc_832FC3B4;
	// addi r11,r11,-55
	ctx.r11.s64 = ctx.r11.s64 + -55;
loc_832FC3A4:
	// mullw r10,r3,r5
	ctx.r10.s64 = int64_t(ctx.r3.s32) * int64_t(ctx.r5.s32);
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// add r3,r10,r11
	ctx.r3.u64 = ctx.r10.u64 + ctx.r11.u64;
	// b 0x832fc358
	goto loc_832FC358;
loc_832FC3B4:
	// stw r9,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r9.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_832FC3BC"))) PPC_WEAK_FUNC(sub_832FC3BC);
PPC_FUNC_IMPL(__imp__sub_832FC3BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832FC3C0"))) PPC_WEAK_FUNC(sub_832FC3C0);
PPC_FUNC_IMPL(__imp__sub_832FC3C0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x833a01ac
	ctx.lr = 0x832FC3C8;
	__savegprlr_29(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
loc_832FC3D8:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x832fc3d8
	if (!ctx.cr6.eq) goto loc_832FC3D8;
	// subf r11,r31,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r31.s64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// cmplwi cr6,r11,18
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 18, ctx.xer);
	// blt cr6,0x832fc44c
	if (ctx.cr6.lt) goto loc_832FC44C;
	// lis r11,-31815
	ctx.r11.s64 = -2085027840;
	// lis r10,-32210
	ctx.r10.s64 = -2110914560;
	// addi r30,r11,-22240
	ctx.r30.s64 = ctx.r11.s64 + -22240;
	// addi r5,r10,-12392
	ctx.r5.s64 = ctx.r10.s64 + -12392;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// li r7,18
	ctx.r7.s64 = 18;
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// li r4,300
	ctx.r4.s64 = 300;
	// bl 0x832ff9a8
	ctx.lr = 0x832FC420;
	sub_832FF9A8(ctx, base);
	// lis r11,-31823
	ctx.r11.s64 = -2085552128;
	// lwz r10,9832(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 9832);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x832fc44c
	if (ctx.cr6.eq) goto loc_832FC44C;
	// lwz r11,9832(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 9832);
	// lis r10,-31823
	ctx.r10.s64 = -2085552128;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r3,9836(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + 9836);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x832FC44C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_832FC44C:
	// stw r31,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r31.u32);
	// li r5,16
	ctx.r5.s64 = 16;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x832fc350
	ctx.lr = 0x832FC460;
	sub_832FC350(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// cmplwi r10,0
	ctx.cr0.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq 0x832fc47c
	if (ctx.cr0.eq) goto loc_832FC47C;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
loc_832FC47C:
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x832fc498
	if (ctx.cr6.eq) goto loc_832FC498;
	// li r5,16
	ctx.r5.s64 = 16;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// bl 0x833a3b08
	ctx.lr = 0x832FC494;
	sub_833A3B08(ctx, base);
	// stw r3,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r3.u32);
loc_832FC498:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x833a01fc
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832FC4A4"))) PPC_WEAK_FUNC(sub_832FC4A4);
PPC_FUNC_IMPL(__imp__sub_832FC4A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832FC4A8"))) PPC_WEAK_FUNC(sub_832FC4A8);
PPC_FUNC_IMPL(__imp__sub_832FC4A8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31823
	ctx.r11.s64 = -2085552128;
	// lis r10,-31823
	ctx.r10.s64 = -2085552128;
	// stw r3,9832(r11)
	PPC_STORE_U32(ctx.r11.u32 + 9832, ctx.r3.u32);
	// stw r4,9836(r10)
	PPC_STORE_U32(ctx.r10.u32 + 9836, ctx.r4.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_832FC4BC"))) PPC_WEAK_FUNC(sub_832FC4BC);
PPC_FUNC_IMPL(__imp__sub_832FC4BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832FC4C0"))) PPC_WEAK_FUNC(sub_832FC4C0);
PPC_FUNC_IMPL(__imp__sub_832FC4C0) {
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
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x832fc3c0
	ctx.lr = 0x832FC4D4;
	sub_832FC3C0(ctx, base);
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_832FC4E8"))) PPC_WEAK_FUNC(sub_832FC4E8);
PPC_FUNC_IMPL(__imp__sub_832FC4E8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31815
	ctx.r11.s64 = -2085027840;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r11,r11,-21920
	ctx.r11.s64 = ctx.r11.s64 + -21920;
	// li r9,0
	ctx.r9.s64 = 0;
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
loc_832FC4FC:
	// lbz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// cmplwi r8,0
	ctx.cr0.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq 0x832fc520
	if (ctx.cr0.eq) goto loc_832FC520;
	// addi r10,r10,56
	ctx.r10.s64 = ctx.r10.s64 + 56;
	// addi r8,r11,4480
	ctx.r8.s64 = ctx.r11.s64 + 4480;
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// cmpw cr6,r10,r8
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r8.s32, ctx.xer);
	// blt cr6,0x832fc4fc
	if (ctx.cr6.lt) goto loc_832FC4FC;
	// blr 
	return;
loc_832FC520:
	// mulli r10,r9,56
	ctx.r10.s64 = ctx.r9.s64 * 56;
	// add r3,r10,r11
	ctx.r3.u64 = ctx.r10.u64 + ctx.r11.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_832FC52C"))) PPC_WEAK_FUNC(sub_832FC52C);
PPC_FUNC_IMPL(__imp__sub_832FC52C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832FC530"))) PPC_WEAK_FUNC(sub_832FC530);
PPC_FUNC_IMPL(__imp__sub_832FC530) {
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
	// li r11,2048
	ctx.r11.s64 = 2048;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r3,28
	ctx.r3.s64 = ctx.r3.s64 + 28;
	// bl 0x832fc3c0
	ctx.lr = 0x832FC558;
	sub_832FC3C0(ctx, base);
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// li r11,0
	ctx.r11.s64 = 0;
	// li r9,1
	ctx.r9.s64 = 1;
	// stw r11,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r11.u32);
	// stw r11,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r11.u32);
	// stw r11,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r11.u32);
	// stb r11,1(r31)
	PPC_STORE_U8(ctx.r31.u32 + 1, ctx.r11.u8);
	// stw r10,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r10.u32);
	// stb r9,0(r31)
	PPC_STORE_U8(ctx.r31.u32 + 0, ctx.r9.u8);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// add r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 + ctx.r10.u64;
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// divw r11,r10,r11
	ctx.r11.s32 = ctx.r10.s32 / ctx.r11.s32;
	// stw r11,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r11.u32);
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

__attribute__((alias("__imp__sub_832FC5A4"))) PPC_WEAK_FUNC(sub_832FC5A4);
PPC_FUNC_IMPL(__imp__sub_832FC5A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832FC5A8"))) PPC_WEAK_FUNC(sub_832FC5A8);
PPC_FUNC_IMPL(__imp__sub_832FC5A8) {
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
	// mr r7,r3
	ctx.r7.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x832fc5fc
	if (!ctx.cr6.eq) goto loc_832FC5FC;
	// lis r11,-31823
	ctx.r11.s64 = -2085552128;
	// lwz r10,9832(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 9832);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x832fc5f4
	if (ctx.cr6.eq) goto loc_832FC5F4;
	// lis r9,-32210
	ctx.r9.s64 = -2110914560;
	// addi r4,r9,-12244
	ctx.r4.s64 = ctx.r9.s64 + -12244;
loc_832FC5DC:
	// lwz r11,9832(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 9832);
	// lis r10,-31823
	ctx.r10.s64 = -2085552128;
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r3,9836(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + 9836);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x832FC5F4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_832FC5F4:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x832fc664
	goto loc_832FC664;
loc_832FC5FC:
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// beq cr6,0x832fc620
	if (ctx.cr6.eq) goto loc_832FC620;
	// lis r11,-31823
	ctx.r11.s64 = -2085552128;
	// lwz r10,9832(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 9832);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x832fc5f4
	if (ctx.cr6.eq) goto loc_832FC5F4;
	// lis r9,-32210
	ctx.r9.s64 = -2110914560;
	// addi r4,r9,-12280
	ctx.r4.s64 = ctx.r9.s64 + -12280;
	// b 0x832fc5dc
	goto loc_832FC5DC;
loc_832FC620:
	// bl 0x832fc4e8
	ctx.lr = 0x832FC624;
	sub_832FC4E8(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// bne 0x832fc648
	if (!ctx.cr0.eq) goto loc_832FC648;
	// lis r11,-31823
	ctx.r11.s64 = -2085552128;
	// lwz r10,9832(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 9832);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x832fc5f4
	if (ctx.cr6.eq) goto loc_832FC5F4;
	// lis r9,-32210
	ctx.r9.s64 = -2110914560;
	// addi r4,r9,-12328
	ctx.r4.s64 = ctx.r9.s64 + -12328;
	// b 0x832fc5dc
	goto loc_832FC5DC;
loc_832FC648:
	// mr r5,r7
	ctx.r5.u64 = ctx.r7.u64;
	// li r4,18
	ctx.r4.s64 = 18;
	// addi r3,r31,28
	ctx.r3.s64 = ctx.r31.s64 + 28;
	// bl 0x832ff8e8
	ctx.lr = 0x832FC658;
	sub_832FF8E8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x832fc530
	ctx.lr = 0x832FC660;
	sub_832FC530(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_832FC664:
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

__attribute__((alias("__imp__sub_832FC678"))) PPC_WEAK_FUNC(sub_832FC678);
PPC_FUNC_IMPL(__imp__sub_832FC678) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x833a01ac
	ctx.lr = 0x832FC680;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x832fc6d0
	if (!ctx.cr6.eq) goto loc_832FC6D0;
	// lis r11,-31823
	ctx.r11.s64 = -2085552128;
	// lwz r10,9832(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 9832);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x832fc6c8
	if (ctx.cr6.eq) goto loc_832FC6C8;
	// lwz r11,9832(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 9832);
	// lis r10,-31823
	ctx.r10.s64 = -2085552128;
	// lis r9,-32210
	ctx.r9.s64 = -2110914560;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r9,-12208
	ctx.r4.s64 = ctx.r9.s64 + -12208;
	// lwz r3,9836(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + 9836);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x832FC6C8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_832FC6C8:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x832fc740
	goto loc_832FC740;
loc_832FC6D0:
	// bl 0x832f51c8
	ctx.lr = 0x832FC6D4;
	sub_832F51C8(ctx, base);
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// bne cr6,0x832fc6e4
	if (!ctx.cr6.eq) goto loc_832FC6E4;
	// stw r30,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r30.u32);
	// b 0x832fc70c
	goto loc_832FC70C;
loc_832FC6E4:
	// cmpwi cr6,r29,2
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 2, ctx.xer);
	// bne cr6,0x832fc6f8
	if (!ctx.cr6.eq) goto loc_832FC6F8;
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + ctx.r30.u64;
	// b 0x832fc708
	goto loc_832FC708;
loc_832FC6F8:
	// cmpwi cr6,r29,1
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 1, ctx.xer);
	// bne cr6,0x832fc70c
	if (!ctx.cr6.eq) goto loc_832FC70C;
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// add r11,r30,r11
	ctx.r11.u64 = ctx.r30.u64 + ctx.r11.u64;
loc_832FC708:
	// stw r11,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r11.u32);
loc_832FC70C:
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// lwz r10,16(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// cmpw cr6,r10,r11
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r11.s32, ctx.xer);
	// bge cr6,0x832fc720
	if (!ctx.cr6.lt) goto loc_832FC720;
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
loc_832FC720:
	// subfic r10,r11,0
	ctx.xer.ca = ctx.r11.u32 <= 0;
	ctx.r10.s64 = 0 - ctx.r11.s64;
	// stw r11,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r11.u32);
	// rlwinm r10,r11,1,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0x1;
	// addme r10,r10
	temp.u64 = ctx.r10.u32 + ctx.xer.ca + 0xFFFFFFFF;
	ctx.xer.ca = temp.u64 >> 32;
	ctx.r10.u64 = temp.u32;
	// and r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 & ctx.r11.u64;
	// stw r11,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r11.u32);
	// bl 0x832f56a8
	ctx.lr = 0x832FC73C;
	sub_832F56A8(ctx, base);
	// lwz r3,16(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
loc_832FC740:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x833a01fc
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832FC748"))) PPC_WEAK_FUNC(sub_832FC748);
PPC_FUNC_IMPL(__imp__sub_832FC748) {
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
	// bne cr6,0x832fc794
	if (!ctx.cr6.eq) goto loc_832FC794;
	// lis r11,-31823
	ctx.r11.s64 = -2085552128;
	// lwz r10,9832(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 9832);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x832fc78c
	if (ctx.cr6.eq) goto loc_832FC78C;
	// lwz r11,9832(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 9832);
	// lis r10,-31823
	ctx.r10.s64 = -2085552128;
	// lis r9,-32210
	ctx.r9.s64 = -2110914560;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r9,-12180
	ctx.r4.s64 = ctx.r9.s64 + -12180;
	// lwz r3,9836(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + 9836);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x832FC78C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_832FC78C:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x832fc798
	goto loc_832FC798;
loc_832FC794:
	// lwz r3,16(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
loc_832FC798:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_832FC7A8"))) PPC_WEAK_FUNC(sub_832FC7A8);
PPC_FUNC_IMPL(__imp__sub_832FC7A8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x833a01a8
	ctx.lr = 0x832FC7B0;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x832fc800
	if (!ctx.cr6.eq) goto loc_832FC800;
	// lis r11,-31823
	ctx.r11.s64 = -2085552128;
	// lwz r10,9832(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 9832);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x832fc7f8
	if (ctx.cr6.eq) goto loc_832FC7F8;
	// lis r9,-32210
	ctx.r9.s64 = -2110914560;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r9,-12084
	ctx.r4.s64 = ctx.r9.s64 + -12084;
loc_832FC7E4:
	// lwz r11,9832(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 9832);
	// lis r10,-31823
	ctx.r10.s64 = -2085552128;
	// lwz r3,9836(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + 9836);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x832FC7F8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_832FC7F8:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x832fc958
	goto loc_832FC958;
loc_832FC800:
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// bge cr6,0x832fc828
	if (!ctx.cr6.lt) goto loc_832FC828;
	// lis r11,-31823
	ctx.r11.s64 = -2085552128;
	// lwz r10,9832(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 9832);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x832fc7f8
	if (ctx.cr6.eq) goto loc_832FC7F8;
	// lis r9,-32210
	ctx.r9.s64 = -2110914560;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// addi r4,r9,-12116
	ctx.r4.s64 = ctx.r9.s64 + -12116;
	// b 0x832fc7e4
	goto loc_832FC7E4;
loc_832FC828:
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// bne cr6,0x832fc850
	if (!ctx.cr6.eq) goto loc_832FC850;
	// lis r11,-31823
	ctx.r11.s64 = -2085552128;
	// lwz r10,9832(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 9832);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x832fc7f8
	if (ctx.cr6.eq) goto loc_832FC7F8;
	// lis r9,-32210
	ctx.r9.s64 = -2110914560;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// addi r4,r9,-12152
	ctx.r4.s64 = ctx.r9.s64 + -12152;
	// b 0x832fc7e4
	goto loc_832FC7E4;
loc_832FC850:
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// bne cr6,0x832fc868
	if (!ctx.cr6.eq) goto loc_832FC868;
	// li r11,1
	ctx.r11.s64 = 1;
	// li r3,0
	ctx.r3.s64 = 0;
	// stb r11,1(r31)
	PPC_STORE_U8(ctx.r31.u32 + 1, ctx.r11.u8);
	// b 0x832fc958
	goto loc_832FC958;
loc_832FC868:
	// lbz r11,1(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 1);
	// cmplwi cr6,r11,2
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 2, ctx.xer);
	// beq cr6,0x832fc7f8
	if (ctx.cr6.eq) goto loc_832FC7F8;
	// bl 0x832f51c8
	ctx.lr = 0x832FC878;
	sub_832F51C8(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// lwz r10,16(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// stw r11,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r11.u32);
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// subf r11,r10,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r10.s64;
	// cmpw cr6,r30,r11
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r11.s32, ctx.xer);
	// bge cr6,0x832fc898
	if (!ctx.cr6.lt) goto loc_832FC898;
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
loc_832FC898:
	// lwz r9,4(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// stw r11,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r11.u32);
	// mullw. r11,r9,r11
	ctx.r11.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r11.s32);
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// mullw r10,r9,r10
	ctx.r10.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r10.s32);
	// bne 0x832fc8bc
	if (!ctx.cr0.eq) goto loc_832FC8BC;
	// li r11,1
	ctx.r11.s64 = 1;
	// stb r11,1(r31)
	PPC_STORE_U8(ctx.r31.u32 + 1, ctx.r11.u8);
	// bl 0x832f56a8
	ctx.lr = 0x832FC8B8;
	sub_832F56A8(ctx, base);
	// b 0x832fc7f8
	goto loc_832FC7F8;
loc_832FC8BC:
	// li r9,2
	ctx.r9.s64 = 2;
	// stw r10,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r10.u32);
	// stw r11,52(r31)
	PPC_STORE_U32(ctx.r31.u32 + 52, ctx.r11.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stb r9,1(r31)
	PPC_STORE_U8(ctx.r31.u32 + 1, ctx.r9.u8);
	// addi r3,r31,28
	ctx.r3.s64 = ctx.r31.s64 + 28;
	// bl 0x832fc3c0
	ctx.lr = 0x832FC8D8;
	sub_832FC3C0(ctx, base);
	// lwz r10,48(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// lwz r9,80(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// lwz r11,52(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	// subf r30,r10,r9
	ctx.r30.s64 = ctx.r9.s64 - ctx.r10.s64;
	// cmpw cr6,r11,r30
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r30.s32, ctx.xer);
	// bgt cr6,0x832fc8f8
	if (ctx.cr6.gt) goto loc_832FC8F8;
	// mr r30,r11
	ctx.r30.u64 = ctx.r11.u64;
loc_832FC8F8:
	// bl 0x832f56a8
	ctx.lr = 0x832FC8FC;
	sub_832F56A8(ctx, base);
	// lwz r11,48(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// add r4,r11,r29
	ctx.r4.u64 = ctx.r11.u64 + ctx.r29.u64;
	// bl 0x833a1390
	ctx.lr = 0x832FC910;
	sub_833A1390(ctx, base);
	// lwz r11,52(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	// subf. r5,r30,r11
	ctx.r5.s64 = ctx.r11.s64 - ctx.r30.s64;
	ctx.cr0.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// ble 0x832fc928
	if (!ctx.cr0.gt) goto loc_832FC928;
	// li r4,0
	ctx.r4.s64 = 0;
	// add r3,r30,r28
	ctx.r3.u64 = ctx.r30.u64 + ctx.r28.u64;
	// bl 0x833a2b30
	ctx.lr = 0x832FC928;
	sub_833A2B30(ctx, base);
loc_832FC928:
	// bl 0x832f51c8
	ctx.lr = 0x832FC92C;
	sub_832F51C8(ctx, base);
	// lwz r11,24(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// lwz r10,16(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// li r9,1
	ctx.r9.s64 = 1;
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stb r9,1(r31)
	PPC_STORE_U8(ctx.r31.u32 + 1, ctx.r9.u8);
	// stw r10,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r10.u32);
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// mullw r11,r11,r10
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r10.s32);
	// stw r11,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r11.u32);
	// bl 0x832f56a8
	ctx.lr = 0x832FC954;
	sub_832F56A8(ctx, base);
	// lwz r3,24(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
loc_832FC958:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x833a01f8
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832FC960"))) PPC_WEAK_FUNC(sub_832FC960);
PPC_FUNC_IMPL(__imp__sub_832FC960) {
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
	// bne cr6,0x832fc9b0
	if (!ctx.cr6.eq) goto loc_832FC9B0;
	// lis r11,-31823
	ctx.r11.s64 = -2085552128;
	// lwz r10,9832(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 9832);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x832fc9c0
	if (ctx.cr6.eq) goto loc_832FC9C0;
	// lwz r11,9832(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 9832);
	// lis r10,-31823
	ctx.r10.s64 = -2085552128;
	// lis r9,-32210
	ctx.r9.s64 = -2110914560;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r9,-12056
	ctx.r4.s64 = ctx.r9.s64 + -12056;
	// lwz r3,9836(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + 9836);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x832FC9AC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// b 0x832fc9c0
	goto loc_832FC9C0;
loc_832FC9B0:
	// bl 0x832f51c8
	ctx.lr = 0x832FC9B4;
	sub_832F51C8(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stb r11,1(r31)
	PPC_STORE_U8(ctx.r31.u32 + 1, ctx.r11.u8);
	// bl 0x832f56a8
	ctx.lr = 0x832FC9C0;
	sub_832F56A8(ctx, base);
loc_832FC9C0:
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

__attribute__((alias("__imp__sub_832FC9D4"))) PPC_WEAK_FUNC(sub_832FC9D4);
PPC_FUNC_IMPL(__imp__sub_832FC9D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832FC9D8"))) PPC_WEAK_FUNC(sub_832FC9D8);
PPC_FUNC_IMPL(__imp__sub_832FC9D8) {
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
	// bne cr6,0x832fca24
	if (!ctx.cr6.eq) goto loc_832FCA24;
	// lis r11,-31823
	ctx.r11.s64 = -2085552128;
	// lwz r10,9832(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 9832);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x832fca1c
	if (ctx.cr6.eq) goto loc_832FCA1C;
	// lwz r11,9832(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 9832);
	// lis r10,-31823
	ctx.r10.s64 = -2085552128;
	// lis r9,-32210
	ctx.r9.s64 = -2110914560;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r9,-12056
	ctx.r4.s64 = ctx.r9.s64 + -12056;
	// lwz r3,9836(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + 9836);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x832FCA1C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_832FCA1C:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x832fca2c
	goto loc_832FCA2C;
loc_832FCA24:
	// lbz r11,1(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 1);
	// extsb r3,r11
	ctx.r3.s64 = ctx.r11.s8;
loc_832FCA2C:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_832FCA3C"))) PPC_WEAK_FUNC(sub_832FCA3C);
PPC_FUNC_IMPL(__imp__sub_832FCA3C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832FCA40"))) PPC_WEAK_FUNC(sub_832FCA40);
PPC_FUNC_IMPL(__imp__sub_832FCA40) {
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
	// bne cr6,0x832fca8c
	if (!ctx.cr6.eq) goto loc_832FCA8C;
	// lis r11,-31823
	ctx.r11.s64 = -2085552128;
	// lwz r10,9832(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 9832);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x832fca84
	if (ctx.cr6.eq) goto loc_832FCA84;
	// lwz r11,9832(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 9832);
	// lis r10,-31823
	ctx.r10.s64 = -2085552128;
	// lis r9,-32210
	ctx.r9.s64 = -2110914560;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r9,-12032
	ctx.r4.s64 = ctx.r9.s64 + -12032;
	// lwz r3,9836(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + 9836);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x832FCA84;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_832FCA84:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x832fca90
	goto loc_832FCA90;
loc_832FCA8C:
	// lwz r3,4(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
loc_832FCA90:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_832FCAA0"))) PPC_WEAK_FUNC(sub_832FCAA0);
PPC_FUNC_IMPL(__imp__sub_832FCAA0) {
	PPC_FUNC_PROLOGUE();
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x832fcad8
	if (!ctx.cr6.eq) goto loc_832FCAD8;
	// lis r11,-31823
	ctx.r11.s64 = -2085552128;
	// lwz r10,9832(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 9832);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lwz r11,9832(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 9832);
	// lis r10,-31823
	ctx.r10.s64 = -2085552128;
	// lis r9,-32210
	ctx.r9.s64 = -2110914560;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r9,-12008
	ctx.r4.s64 = ctx.r9.s64 + -12008;
	// lwz r3,9836(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + 9836);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
loc_832FCAD8:
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// lwz r9,16(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// lwz r10,4(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// add r11,r11,r4
	ctx.r11.u64 = ctx.r11.u64 + ctx.r4.u64;
	// lwz r8,24(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// mullw r10,r10,r9
	ctx.r10.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r9.s32);
	// stw r4,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r4.u32);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// divw r10,r10,r4
	ctx.r10.s32 = ctx.r10.s32 / ctx.r4.s32;
	// divw r11,r11,r4
	ctx.r11.s32 = ctx.r11.s32 / ctx.r4.s32;
	// mullw r9,r8,r4
	ctx.r9.s64 = int64_t(ctx.r8.s32) * int64_t(ctx.r4.s32);
	// stw r10,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r10.u32);
	// stw r11,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r11.u32);
	// stw r9,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r9.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_832FCB14"))) PPC_WEAK_FUNC(sub_832FCB14);
PPC_FUNC_IMPL(__imp__sub_832FCB14) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832FCB18"))) PPC_WEAK_FUNC(sub_832FCB18);
PPC_FUNC_IMPL(__imp__sub_832FCB18) {
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
	// bne cr6,0x832fcb64
	if (!ctx.cr6.eq) goto loc_832FCB64;
	// lis r11,-31823
	ctx.r11.s64 = -2085552128;
	// lwz r10,9832(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 9832);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x832fcb5c
	if (ctx.cr6.eq) goto loc_832FCB5C;
	// lwz r11,9832(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 9832);
	// lis r10,-31823
	ctx.r10.s64 = -2085552128;
	// lis r9,-32210
	ctx.r9.s64 = -2110914560;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r9,-12056
	ctx.r4.s64 = ctx.r9.s64 + -12056;
	// lwz r3,9836(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + 9836);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x832FCB5C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_832FCB5C:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x832fcb68
	goto loc_832FCB68;
loc_832FCB64:
	// lwz r3,20(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
loc_832FCB68:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_832FCB78"))) PPC_WEAK_FUNC(sub_832FCB78);
PPC_FUNC_IMPL(__imp__sub_832FCB78) {
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
	// li r11,0
	ctx.r11.s64 = 0;
	// cmpwi cr6,r4,299
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 299, ctx.xer);
	// bgt cr6,0x832fcbe8
	if (ctx.cr6.gt) goto loc_832FCBE8;
	// beq cr6,0x832fcc20
	if (ctx.cr6.eq) goto loc_832FCC20;
	// cmpwi cr6,r4,200
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 200, ctx.xer);
	// beq cr6,0x832fcc20
	if (ctx.cr6.eq) goto loc_832FCC20;
	// cmpwi cr6,r4,201
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 201, ctx.xer);
	// beq cr6,0x832fcbd4
	if (ctx.cr6.eq) goto loc_832FCBD4;
	// cmpwi cr6,r4,202
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 202, ctx.xer);
	// beq cr6,0x832fcc20
	if (ctx.cr6.eq) goto loc_832FCC20;
	// cmpwi cr6,r4,203
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 203, ctx.xer);
	// beq cr6,0x832fcbc4
	if (ctx.cr6.eq) goto loc_832FCBC4;
	// cmpwi cr6,r4,204
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 204, ctx.xer);
	// beq cr6,0x832fcc20
	if (ctx.cr6.eq) goto loc_832FCC20;
	// cmpwi cr6,r4,205
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 205, ctx.xer);
	// bne cr6,0x832fcc10
	if (!ctx.cr6.eq) goto loc_832FCC10;
loc_832FCBC4:
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x832fc3c0
	ctx.lr = 0x832FCBCC;
	sub_832FC3C0(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// b 0x832fcc34
	goto loc_832FCC34;
loc_832FCBD4:
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x832fcc34
	if (ctx.cr6.eq) goto loc_832FCC34;
	// bl 0x832fcb18
	ctx.lr = 0x832FCBE0;
	sub_832FCB18(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// b 0x832fcc34
	goto loc_832FCC34;
loc_832FCBE8:
	// cmpwi cr6,r4,300
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 300, ctx.xer);
	// beq cr6,0x832fcc28
	if (ctx.cr6.eq) goto loc_832FCC28;
	// cmpwi cr6,r4,301
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 301, ctx.xer);
	// beq cr6,0x832fcc20
	if (ctx.cr6.eq) goto loc_832FCC20;
	// cmpwi cr6,r4,302
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 302, ctx.xer);
	// beq cr6,0x832fcc28
	if (ctx.cr6.eq) goto loc_832FCC28;
	// cmpwi cr6,r4,400
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 400, ctx.xer);
	// beq cr6,0x832fcc20
	if (ctx.cr6.eq) goto loc_832FCC20;
	// cmpwi cr6,r4,600
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 600, ctx.xer);
	// beq cr6,0x832fcc18
	if (ctx.cr6.eq) goto loc_832FCC18;
loc_832FCC10:
	// li r11,-1
	ctx.r11.s64 = -1;
	// b 0x832fcc34
	goto loc_832FCC34;
loc_832FCC18:
	// li r11,1
	ctx.r11.s64 = 1;
	// b 0x832fcc34
	goto loc_832FCC34;
loc_832FCC20:
	// li r11,0
	ctx.r11.s64 = 0;
	// b 0x832fcc34
	goto loc_832FCC34;
loc_832FCC28:
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x832fcc34
	if (ctx.cr6.eq) goto loc_832FCC34;
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
loc_832FCC34:
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_832FCC48"))) PPC_WEAK_FUNC(sub_832FCC48);
PPC_FUNC_IMPL(__imp__sub_832FCC48) {
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
	// beq cr6,0x832fcc8c
	if (ctx.cr6.eq) goto loc_832FCC8C;
	// bl 0x832fc960
	ctx.lr = 0x832FCC68;
	sub_832FC960(ctx, base);
	// lbz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 0);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// bne cr6,0x832fcc8c
	if (!ctx.cr6.eq) goto loc_832FCC8C;
	// li r11,0
	ctx.r11.s64 = 0;
	// li r5,56
	ctx.r5.s64 = 56;
	// li r4,0
	ctx.r4.s64 = 0;
	// stb r11,0(r31)
	PPC_STORE_U8(ctx.r31.u32 + 0, ctx.r11.u8);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x833a2b30
	ctx.lr = 0x832FCC8C;
	sub_833A2B30(ctx, base);
loc_832FCC8C:
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

__attribute__((alias("__imp__sub_832FCCA0"))) PPC_WEAK_FUNC(sub_832FCCA0);
PPC_FUNC_IMPL(__imp__sub_832FCCA0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x833a01ac
	ctx.lr = 0x832FCCA8;
	__savegprlr_29(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addis r29,r3,2
	ctx.r29.s64 = ctx.r3.s64 + 131072;
	// lis r11,2
	ctx.r11.s64 = 131072;
	// addi r29,r29,48
	ctx.r29.s64 = ctx.r29.s64 + 48;
	// ori r30,r11,8
	ctx.r30.u64 = ctx.r11.u64 | 8;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x832fccf0
	if (ctx.cr6.eq) goto loc_832FCCF0;
	// lwzx r3,r3,r30
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + ctx.r30.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,80(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 80);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x832FCCE8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r11.u32);
loc_832FCCF0:
	// lwzx r3,r31,r30
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r30.u32);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,88(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 88);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x832FCD04;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwzx r3,r31,r30
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r30.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,100(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 100);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x832FCD20;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r11,2
	ctx.r11.s64 = 131072;
	// ld r10,88(r1)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// li r3,0
	ctx.r3.s64 = 0;
	// ori r11,r11,120
	ctx.r11.u64 = ctx.r11.u64 | 120;
	// stdx r10,r31,r11
	PPC_STORE_U64(ctx.r31.u32 + ctx.r11.u32, ctx.r10.u64);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x833a01fc
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832FCD3C"))) PPC_WEAK_FUNC(sub_832FCD3C);
PPC_FUNC_IMPL(__imp__sub_832FCD3C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832FCD40"))) PPC_WEAK_FUNC(sub_832FCD40);
PPC_FUNC_IMPL(__imp__sub_832FCD40) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x833a01a4
	ctx.lr = 0x832FCD48;
	__savegprlr_27(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addis r29,r3,2
	ctx.r29.s64 = ctx.r3.s64 + 131072;
	// addis r28,r3,2
	ctx.r28.s64 = ctx.r3.s64 + 131072;
	// addi r29,r29,112
	ctx.r29.s64 = ctx.r29.s64 + 112;
	// addi r28,r28,56
	ctx.r28.s64 = ctx.r28.s64 + 56;
	// lis r9,2
	ctx.r9.s64 = 131072;
	// lis r11,2
	ctx.r11.s64 = 131072;
	// ori r30,r9,60
	ctx.r30.u64 = ctx.r9.u64 | 60;
	// lwz r10,0(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r9,0(r28)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// ori r11,r11,116
	ctx.r11.u64 = ctx.r11.u64 | 116;
	// cmpw cr6,r10,r9
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r9.s32, ctx.xer);
	// bne cr6,0x832fcd90
	if (!ctx.cr6.eq) goto loc_832FCD90;
	// lfsx f0,r3,r11
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + ctx.r11.u32);
	ctx.f0.f64 = double(temp.f32);
	// lfsx f13,r3,r30
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + ctx.r30.u32);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// beq cr6,0x832fcdf0
	if (ctx.cr6.eq) goto loc_832FCDF0;
loc_832FCD90:
	// extsw r10,r10
	ctx.r10.s64 = ctx.r10.s32;
	// lfsx f13,r31,r11
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r11.u32);
	ctx.f13.f64 = double(temp.f32);
	// lis r9,2
	ctx.r9.s64 = 131072;
	// std r10,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r10.u64);
	// lfd f0,80(r1)
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// ori r10,r9,8
	ctx.r10.u64 = ctx.r9.u64 | 8;
	// frsp f12,f0
	ctx.f12.f64 = double(float(ctx.f0.f64));
	// lwzx r3,r31,r10
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r10.u32);
	// add r27,r31,r11
	ctx.r27.u64 = ctx.r31.u64 + ctx.r11.u64;
	// lis r9,-32241
	ctx.r9.s64 = -2112946176;
	// lis r10,-31844
	ctx.r10.s64 = -2086928384;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lfs f0,30572(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 30572);
	ctx.f0.f64 = double(temp.f32);
	// lwz r5,-29196(r10)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r10.u32 + -29196);
	// fmuls f13,f12,f13
	ctx.f13.f64 = double(float(ctx.f12.f64 * ctx.f13.f64));
	// lwz r11,104(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 104);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// fmuls f1,f13,f0
	ctx.f1.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// bctrl 
	ctx.lr = 0x832FCDE0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// lfs f0,0(r27)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// stfsx f0,r31,r30
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + ctx.r30.u32, temp.u32);
	// stw r11,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r11.u32);
loc_832FCDF0:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x833a01f4
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832FCDFC"))) PPC_WEAK_FUNC(sub_832FCDFC);
PPC_FUNC_IMPL(__imp__sub_832FCDFC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832FCE00"))) PPC_WEAK_FUNC(sub_832FCE00);
PPC_FUNC_IMPL(__imp__sub_832FCE00) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x833a01a4
	ctx.lr = 0x832FCE08;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addis r28,r3,2
	ctx.r28.s64 = ctx.r3.s64 + 131072;
	// lis r11,2
	ctx.r11.s64 = 131072;
	// addi r28,r28,96
	ctx.r28.s64 = ctx.r28.s64 + 96;
	// ori r11,r11,100
	ctx.r11.u64 = ctx.r11.u64 | 100;
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// li r29,0
	ctx.r29.s64 = 0;
	// lwz r10,0(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// lwzx r31,r3,r11
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + ctx.r11.u32);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// ble cr6,0x832fce74
	if (!ctx.cr6.gt) goto loc_832FCE74;
	// addis r30,r3,2
	ctx.r30.s64 = ctx.r3.s64 + 131072;
	// addi r30,r30,88
	ctx.r30.s64 = ctx.r30.s64 + 88;
loc_832FCE3C:
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,36(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x832FCE54;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpw cr6,r31,r3
	ctx.cr6.compare<int32_t>(ctx.r31.s32, ctx.r3.s32, ctx.xer);
	// blt cr6,0x832fce60
	if (ctx.cr6.lt) goto loc_832FCE60;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
loc_832FCE60:
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// cmpw cr6,r29,r11
	ctx.cr6.compare<int32_t>(ctx.r29.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x832fce3c
	if (ctx.cr6.lt) goto loc_832FCE3C;
loc_832FCE74:
	// subfic r11,r31,0
	ctx.xer.ca = ctx.r31.u32 <= 0;
	ctx.r11.s64 = 0 - ctx.r31.s64;
	// rlwinm r11,r31,1,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 1) & 0x1;
	// li r3,0
	ctx.r3.s64 = 0;
	// addme r11,r11
	temp.u64 = ctx.r11.u32 + ctx.xer.ca + 0xFFFFFFFF;
	ctx.xer.ca = temp.u64 >> 32;
	ctx.r11.u64 = temp.u32;
	// and r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 & ctx.r31.u64;
	// stw r11,0(r27)
	PPC_STORE_U32(ctx.r27.u32 + 0, ctx.r11.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x833a01f4
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832FCE94"))) PPC_WEAK_FUNC(sub_832FCE94);
PPC_FUNC_IMPL(__imp__sub_832FCE94) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832FCE98"))) PPC_WEAK_FUNC(sub_832FCE98);
PPC_FUNC_IMPL(__imp__sub_832FCE98) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x833a0194
	ctx.lr = 0x832FCEA0;
	__savegprlr_23(ctx, base);
	// stfd f31,-88(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -88, ctx.f31.u64);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,2
	ctx.r11.s64 = 131072;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// ori r11,r11,8
	ctx.r11.u64 = ctx.r11.u64 | 8;
	// add r23,r3,r11
	ctx.r23.u64 = ctx.r3.u64 + ctx.r11.u64;
	// lwzx r10,r3,r11
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + ctx.r11.u32);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x832fd13c
	if (ctx.cr6.eq) goto loc_832FD13C;
	// addis r25,r3,2
	ctx.r25.s64 = ctx.r3.s64 + 131072;
	// addis r31,r3,2
	ctx.r31.s64 = ctx.r3.s64 + 131072;
	// addi r25,r25,44
	ctx.r25.s64 = ctx.r25.s64 + 44;
	// addi r31,r31,200
	ctx.r31.s64 = ctx.r31.s64 + 200;
	// li r27,0
	ctx.r27.s64 = 0;
	// lwz r10,0(r25)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r25.u32 + 0);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// ble cr6,0x832fd13c
	if (!ctx.cr6.gt) goto loc_832FD13C;
	// add r28,r3,r11
	ctx.r28.u64 = ctx.r3.u64 + ctx.r11.u64;
	// lis r11,-32230
	ctx.r11.s64 = -2112225280;
	// lis r10,0
	ctx.r10.s64 = 0;
	// lis r9,2
	ctx.r9.s64 = 131072;
	// ori r26,r10,32812
	ctx.r26.u64 = ctx.r10.u64 | 32812;
	// ori r29,r9,192
	ctx.r29.u64 = ctx.r9.u64 | 192;
	// lfs f31,24284(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 24284);
	ctx.f31.f64 = double(temp.f32);
	// lis r24,-31823
	ctx.r24.s64 = -2085552128;
loc_832FCF04:
	// lwz r3,4(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x832FCF1C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r10,10156(r24)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r24.u32 + 10156);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// ble cr6,0x832fcf4c
	if (!ctx.cr6.gt) goto loc_832FCF4C;
	// cmpwi cr6,r10,2
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 2, ctx.xer);
	// bgt cr6,0x832fcf4c
	if (ctx.cr6.gt) goto loc_832FCF4C;
	// lwz r6,88(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// cmplwi cr6,r6,2
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 2, ctx.xer);
	// bge cr6,0x832fcf44
	if (!ctx.cr6.lt) goto loc_832FCF44;
	// mr r11,r6
	ctx.r11.u64 = ctx.r6.u64;
	// b 0x832fcf60
	goto loc_832FCF60;
loc_832FCF44:
	// li r11,2
	ctx.r11.s64 = 2;
	// b 0x832fcf60
	goto loc_832FCF60;
loc_832FCF4C:
	// lwz r6,88(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// cmplwi cr6,r6,6
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 6, ctx.xer);
	// mr r11,r6
	ctx.r11.u64 = ctx.r6.u64;
	// blt cr6,0x832fcf60
	if (ctx.cr6.lt) goto loc_832FCF60;
	// li r11,6
	ctx.r11.s64 = 6;
loc_832FCF60:
	// cmpwi cr6,r11,6
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 6, ctx.xer);
	// blt cr6,0x832fcfe4
	if (ctx.cr6.lt) goto loc_832FCFE4;
	// lis r7,0
	ctx.r7.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// ori r7,r7,32800
	ctx.r7.u64 = ctx.r7.u64 | 32800;
loc_832FCF78:
	// li r9,6
	ctx.r9.s64 = 6;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r10,r5,-8
	ctx.r10.s64 = ctx.r5.s64 + -8;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_832FCF88:
	// add r9,r7,r11
	ctx.r9.u64 = ctx.r7.u64 + ctx.r11.u64;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// rlwinm r9,r9,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// lfsx f0,r9,r30
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r30.u32);
	ctx.f0.f64 = double(temp.f32);
	// stfsu f0,8(r10)
	temp.f32 = float(ctx.f0.f64);
	ea = 8 + ctx.r10.u32;
	PPC_STORE_U32(ea, temp.u32);
	ctx.r10.u32 = ea;
	// bdnz 0x832fcf88
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_832FCF88;
	// cmpw cr6,r11,r6
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r6.s32, ctx.xer);
	// bge cr6,0x832fcfcc
	if (!ctx.cr6.lt) goto loc_832FCFCC;
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// subf r9,r11,r6
	ctx.r9.s64 = ctx.r6.s64 - ctx.r11.s64;
	// add r11,r10,r8
	ctx.r11.u64 = ctx.r10.u64 + ctx.r8.u64;
	// addi r11,r11,-2
	ctx.r11.s64 = ctx.r11.s64 + -2;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
loc_832FCFC4:
	// stfsu f31,8(r11)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	ea = 8 + ctx.r11.u32;
	PPC_STORE_U32(ea, temp.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x832fcfc4
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_832FCFC4;
loc_832FCFCC:
	// addi r7,r7,6
	ctx.r7.s64 = ctx.r7.s64 + 6;
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// addi r5,r5,4
	ctx.r5.s64 = ctx.r5.s64 + 4;
	// cmpw cr6,r7,r26
	ctx.cr6.compare<int32_t>(ctx.r7.s32, ctx.r26.s32, ctx.xer);
	// blt cr6,0x832fcf78
	if (ctx.cr6.lt) goto loc_832FCF78;
	// b 0x832fd108
	goto loc_832FD108;
loc_832FCFE4:
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// blt cr6,0x832fd0c8
	if (ctx.cr6.lt) goto loc_832FD0C8;
	// cmpwi cr6,r10,2
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 2, ctx.xer);
	// bne cr6,0x832fd074
	if (!ctx.cr6.eq) goto loc_832FD074;
	// li r8,0
	ctx.r8.s64 = 0;
	// mr r7,r31
	ctx.r7.u64 = ctx.r31.u64;
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
loc_832FD000:
	// li r9,2
	ctx.r9.s64 = 2;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r10,r7,-8
	ctx.r10.s64 = ctx.r7.s64 + -8;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_832FD010:
	// add r9,r5,r11
	ctx.r9.u64 = ctx.r5.u64 + ctx.r11.u64;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// rlwinm r9,r9,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// lfsx f0,r9,r30
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r30.u32);
	ctx.f0.f64 = double(temp.f32);
	// stfsu f0,8(r10)
	temp.f32 = float(ctx.f0.f64);
	ea = 8 + ctx.r10.u32;
	PPC_STORE_U32(ea, temp.u32);
	ctx.r10.u32 = ea;
	// bdnz 0x832fd010
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_832FD010;
	// cmpw cr6,r11,r6
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r6.s32, ctx.xer);
	// bge cr6,0x832fd054
	if (!ctx.cr6.lt) goto loc_832FD054;
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// subf r9,r11,r6
	ctx.r9.s64 = ctx.r6.s64 - ctx.r11.s64;
	// add r11,r10,r8
	ctx.r11.u64 = ctx.r10.u64 + ctx.r8.u64;
	// addi r11,r11,-2
	ctx.r11.s64 = ctx.r11.s64 + -2;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
loc_832FD04C:
	// stfsu f31,8(r11)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	ea = 8 + ctx.r11.u32;
	PPC_STORE_U32(ea, temp.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x832fd04c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_832FD04C;
loc_832FD054:
	// lis r11,0
	ctx.r11.s64 = 0;
	// addi r5,r5,2
	ctx.r5.s64 = ctx.r5.s64 + 2;
	// ori r11,r11,32816
	ctx.r11.u64 = ctx.r11.u64 | 32816;
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// addi r7,r7,4
	ctx.r7.s64 = ctx.r7.s64 + 4;
	// cmpw cr6,r5,r11
	ctx.cr6.compare<int32_t>(ctx.r5.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x832fd000
	if (ctx.cr6.lt) goto loc_832FD000;
	// b 0x832fd108
	goto loc_832FD108;
loc_832FD074:
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
	// add r8,r30,r29
	ctx.r8.u64 = ctx.r30.u64 + ctx.r29.u64;
	// li r7,2
	ctx.r7.s64 = 2;
loc_832FD080:
	// li r9,2
	ctx.r9.s64 = 2;
	// addi r10,r11,-8
	ctx.r10.s64 = ctx.r11.s64 + -8;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_832FD08C:
	// lfs f0,0(r8)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// stfsu f0,8(r10)
	temp.f32 = float(ctx.f0.f64);
	ea = 8 + ctx.r10.u32;
	PPC_STORE_U32(ea, temp.u32);
	ctx.r10.u32 = ea;
	// bdnz 0x832fd08c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_832FD08C;
	// cmpwi cr6,r6,2
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 2, ctx.xer);
	// ble cr6,0x832fd0b4
	if (!ctx.cr6.gt) goto loc_832FD0B4;
	// addi r10,r6,-2
	ctx.r10.s64 = ctx.r6.s64 + -2;
	// addi r9,r11,8
	ctx.r9.s64 = ctx.r11.s64 + 8;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_832FD0AC:
	// stfsu f31,8(r9)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	ea = 8 + ctx.r9.u32;
	PPC_STORE_U32(ea, temp.u32);
	ctx.r9.u32 = ea;
	// bdnz 0x832fd0ac
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_832FD0AC;
loc_832FD0B4:
	// addic. r7,r7,-1
	ctx.xer.ca = ctx.r7.u32 > 0;
	ctx.r7.s64 = ctx.r7.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// addi r8,r8,4
	ctx.r8.s64 = ctx.r8.s64 + 4;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bne 0x832fd080
	if (!ctx.cr0.eq) goto loc_832FD080;
	// b 0x832fd108
	goto loc_832FD108;
loc_832FD0C8:
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
	// add r10,r30,r29
	ctx.r10.u64 = ctx.r30.u64 + ctx.r29.u64;
	// li r9,2
	ctx.r9.s64 = 2;
loc_832FD0D4:
	// lfs f0,0(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// cmpwi cr6,r6,1
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 1, ctx.xer);
	// stfs f0,0(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// ble cr6,0x832fd0f8
	if (!ctx.cr6.gt) goto loc_832FD0F8;
	// addi r8,r6,-1
	ctx.r8.s64 = ctx.r6.s64 + -1;
	// mr r7,r11
	ctx.r7.u64 = ctx.r11.u64;
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
loc_832FD0F0:
	// stfsu f31,8(r7)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	ea = 8 + ctx.r7.u32;
	PPC_STORE_U32(ea, temp.u32);
	ctx.r7.u32 = ea;
	// bdnz 0x832fd0f0
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_832FD0F0;
loc_832FD0F8:
	// addic. r9,r9,-1
	ctx.xer.ca = ctx.r9.u32 > 0;
	ctx.r9.s64 = ctx.r9.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bne 0x832fd0d4
	if (!ctx.cr0.eq) goto loc_832FD0D4;
loc_832FD108:
	// lwz r3,0(r23)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r23.u32 + 0);
	// li r8,0
	ctx.r8.s64 = 0;
	// mr r7,r31
	ctx.r7.u64 = ctx.r31.u64;
	// lwzu r4,4(r28)
	ea = 4 + ctx.r28.u32;
	ctx.r4.u64 = PPC_LOAD_U32(ea);
	ctx.r28.u32 = ea;
	// li r5,2
	ctx.r5.s64 = 2;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,64(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 64);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x832FD12C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,0(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 0);
	// addi r27,r27,1
	ctx.r27.s64 = ctx.r27.s64 + 1;
	// cmpw cr6,r27,r11
	ctx.cr6.compare<int32_t>(ctx.r27.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x832fcf04
	if (ctx.cr6.lt) goto loc_832FCF04;
loc_832FD13C:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// lfd f31,-88(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -88);
	// b 0x833a01e4
	__restgprlr_23(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832FD14C"))) PPC_WEAK_FUNC(sub_832FD14C);
PPC_FUNC_IMPL(__imp__sub_832FD14C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832FD150"))) PPC_WEAK_FUNC(sub_832FD150);
PPC_FUNC_IMPL(__imp__sub_832FD150) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31823
	ctx.r10.s64 = -2085552128;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r11,10136(r10)
	PPC_STORE_U32(ctx.r10.u32 + 10136, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_832FD164"))) PPC_WEAK_FUNC(sub_832FD164);
PPC_FUNC_IMPL(__imp__sub_832FD164) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832FD168"))) PPC_WEAK_FUNC(sub_832FD168);
PPC_FUNC_IMPL(__imp__sub_832FD168) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x833a01a4
	ctx.lr = 0x832FD170;
	__savegprlr_27(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,2
	ctx.r11.s64 = 131072;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// ori r11,r11,96
	ctx.r11.u64 = ctx.r11.u64 | 96;
	// lwzx r30,r3,r11
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r3.u32 + ctx.r11.u32);
	// cmpwi cr6,r30,2
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 2, ctx.xer);
	// blt cr6,0x832fd190
	if (ctx.cr6.lt) goto loc_832FD190;
	// li r30,2
	ctx.r30.s64 = 2;
loc_832FD190:
	// addis r27,r29,2
	ctx.r27.s64 = ctx.r29.s64 + 131072;
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// addi r27,r27,104
	ctx.r27.s64 = ctx.r27.s64 + 104;
	// lwz r11,0(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// divw r10,r4,r11
	ctx.r10.s32 = ctx.r4.s32 / ctx.r11.s32;
	// mullw r28,r10,r11
	ctx.r28.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r11.s32);
	// ble cr6,0x832fd1f8
	if (!ctx.cr6.gt) goto loc_832FD1F8;
	// addis r31,r29,2
	ctx.r31.s64 = ctx.r29.s64 + 131072;
	// addi r31,r31,84
	ctx.r31.s64 = ctx.r31.s64 + 84;
loc_832FD1B4:
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,24(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x832FD1D4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwzu r3,4(r31)
	ea = 4 + ctx.r31.u32;
	ctx.r3.u64 = PPC_LOAD_U32(ea);
	ctx.r31.u32 = ea;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,32(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x832FD1F0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addic. r30,r30,-1
	ctx.xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// bne 0x832fd1b4
	if (!ctx.cr0.eq) goto loc_832FD1B4;
loc_832FD1F8:
	// addis r9,r29,2
	ctx.r9.s64 = ctx.r29.s64 + 131072;
	// lwz r11,0(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r9,r9,72
	ctx.r9.s64 = ctx.r9.s64 + 72;
	// divw r11,r28,r11
	ctx.r11.s32 = ctx.r28.s32 / ctx.r11.s32;
	// extsw r10,r11
	ctx.r10.s64 = ctx.r11.s32;
	// ld r11,0(r9)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r9.u32 + 0);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// std r11,0(r9)
	PPC_STORE_U64(ctx.r9.u32 + 0, ctx.r11.u64);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x833a01f4
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832FD224"))) PPC_WEAK_FUNC(sub_832FD224);
PPC_FUNC_IMPL(__imp__sub_832FD224) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832FD228"))) PPC_WEAK_FUNC(sub_832FD228);
PPC_FUNC_IMPL(__imp__sub_832FD228) {
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
	// lis r11,-31823
	ctx.r11.s64 = -2085552128;
	// addi r31,r11,10148
	ctx.r31.s64 = ctx.r11.s64 + 10148;
	// addi r8,r31,-16
	ctx.r8.s64 = ctx.r31.s64 + -16;
loc_832FD244:
	// mfmsr r9
	ctx.r9.u64 = ctx.msr;
	// mtmsrd r13,1
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// lwarx r10,0,r8
	ctx.reserved.u32 = *(uint32_t*)(base + ctx.r8.u32);
	ctx.r10.u64 = __builtin_bswap32(ctx.reserved.u32);
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// stwcx. r10,0,r8
	ctx.cr0.lt = 0;
	ctx.cr0.gt = 0;
	ctx.cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ctx.r8.u32), ctx.reserved.s32, __builtin_bswap32(ctx.r10.s32));
	ctx.cr0.so = ctx.xer.so;
	// mtmsrd r9,1
	ctx.msr = (ctx.r9.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// bne 0x832fd244
	if (!ctx.cr0.eq) goto loc_832FD244;
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x832fd284
	if (!ctx.cr6.eq) goto loc_832FD284;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x832fd284
	if (ctx.cr6.eq) goto loc_832FD284;
	// bl 0x832f4030
	ctx.lr = 0x832FD27C;
	sub_832F4030(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
loc_832FD284:
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

__attribute__((alias("__imp__sub_832FD29C"))) PPC_WEAK_FUNC(sub_832FD29C);
PPC_FUNC_IMPL(__imp__sub_832FD29C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832FD2A0"))) PPC_WEAK_FUNC(sub_832FD2A0);
PPC_FUNC_IMPL(__imp__sub_832FD2A0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x833a017c
	ctx.lr = 0x832FD2A8;
	__savegprlr_17(ctx, base);
	// stwu r1,-288(r1)
	ea = -288 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addis r26,r3,2
	ctx.r26.s64 = ctx.r3.s64 + 131072;
	// rlwinm r11,r4,11,0,20
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 11) & 0xFFFFF800;
	// addi r26,r26,96
	ctx.r26.s64 = ctx.r26.s64 + 96;
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// addi r18,r11,8
	ctx.r18.s64 = ctx.r11.s64 + 8;
	// mr r19,r5
	ctx.r19.u64 = ctx.r5.u64;
	// lwz r10,0(r26)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// li r22,0
	ctx.r22.s64 = 0;
	// mr r23,r5
	ctx.r23.u64 = ctx.r5.u64;
	// rlwinm. r11,r10,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// mr r24,r18
	ctx.r24.u64 = ctx.r18.u64;
	// ble 0x832fd4a0
	if (!ctx.cr0.gt) goto loc_832FD4A0;
	// lis r10,2
	ctx.r10.s64 = 131072;
	// mr r17,r11
	ctx.r17.u64 = ctx.r11.u64;
	// ori r20,r10,88
	ctx.r20.u64 = ctx.r10.u64 | 88;
	// add r21,r3,r20
	ctx.r21.u64 = ctx.r3.u64 + ctx.r20.u64;
loc_832FD2F0:
	// lwz r3,0(r21)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r21.u32 + 0);
	// rlwinm r28,r23,1,0,30
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r23.u32 | (ctx.r23.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r6,r1,96
	ctx.r6.s64 = ctx.r1.s64 + 96;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,24(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x832FD314;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,0(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// li r30,1
	ctx.r30.s64 = 1;
	// lwz r10,100(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// ble cr6,0x832fd368
	if (!ctx.cr6.gt) goto loc_832FD368;
	// addi r31,r1,108
	ctx.r31.s64 = ctx.r1.s64 + 108;
	// add r29,r25,r20
	ctx.r29.u64 = ctx.r25.u64 + ctx.r20.u64;
loc_832FD330:
	// lwzu r3,4(r29)
	ea = 4 + ctx.r29.u32;
	ctx.r3.u64 = PPC_LOAD_U32(ea);
	ctx.r29.u32 = ea;
	// addi r6,r31,-4
	ctx.r6.s64 = ctx.r31.s64 + -4;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,24(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x832FD350;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,0(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r31,r31,8
	ctx.r31.s64 = ctx.r31.s64 + 8;
	// cmpw cr6,r30,r11
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x832fd330
	if (ctx.cr6.lt) goto loc_832FD330;
loc_832FD368:
	// rlwinm r27,r10,31,1,31
	ctx.r27.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 31) & 0x7FFFFFFF;
	// cmpw cr6,r27,r23
	ctx.cr6.compare<int32_t>(ctx.r27.s32, ctx.r23.s32, ctx.xer);
	// blt cr6,0x832fd378
	if (ctx.cr6.lt) goto loc_832FD378;
	// mr r27,r23
	ctx.r27.u64 = ctx.r23.u64;
loc_832FD378:
	// mr r9,r22
	ctx.r9.u64 = ctx.r22.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x832fd3a8
	if (!ctx.cr6.gt) goto loc_832FD3A8;
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// addi r7,r1,96
	ctx.r7.s64 = ctx.r1.s64 + 96;
	// addi r8,r10,-4
	ctx.r8.s64 = ctx.r10.s64 + -4;
	// addi r10,r7,-8
	ctx.r10.s64 = ctx.r7.s64 + -8;
loc_832FD394:
	// lwzu r7,8(r10)
	ea = 8 + ctx.r10.u32;
	ctx.r7.u64 = PPC_LOAD_U32(ea);
	ctx.r10.u32 = ea;
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// cmpw cr6,r9,r11
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r11.s32, ctx.xer);
	// stwu r7,4(r8)
	ea = 4 + ctx.r8.u32;
	PPC_STORE_U32(ea, ctx.r7.u32);
	ctx.r8.u32 = ea;
	// blt cr6,0x832fd394
	if (ctx.cr6.lt) goto loc_832FD394;
loc_832FD3A8:
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x832fd3f0
	if (ctx.cr6.eq) goto loc_832FD3F0;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// bne cr6,0x832fd418
	if (!ctx.cr6.eq) goto loc_832FD418;
	// cmpwi cr6,r27,0
	ctx.cr6.compare<int32_t>(ctx.r27.s32, 0, ctx.xer);
	// ble cr6,0x832fd418
	if (!ctx.cr6.gt) goto loc_832FD418;
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// mtctr r27
	ctx.ctr.u64 = ctx.r27.u64;
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// subf r10,r11,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r11.s64;
loc_832FD3D0:
	// lhzx r9,r10,r11
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r10.u32 + ctx.r11.u32);
	// sth r9,0(r24)
	PPC_STORE_U16(ctx.r24.u32 + 0, ctx.r9.u16);
	// lhz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r11.u32 + 0);
	// addi r11,r11,2
	ctx.r11.s64 = ctx.r11.s64 + 2;
	// sthu r9,2(r24)
	ea = 2 + ctx.r24.u32;
	PPC_STORE_U16(ea, ctx.r9.u16);
	ctx.r24.u32 = ea;
	// addi r24,r24,2
	ctx.r24.s64 = ctx.r24.s64 + 2;
	// bdnz 0x832fd3d0
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_832FD3D0;
	// b 0x832fd418
	goto loc_832FD418;
loc_832FD3F0:
	// cmpwi cr6,r27,0
	ctx.cr6.compare<int32_t>(ctx.r27.s32, 0, ctx.xer);
	// ble cr6,0x832fd418
	if (!ctx.cr6.gt) goto loc_832FD418;
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// mtctr r27
	ctx.ctr.u64 = ctx.r27.u64;
	// addi r11,r11,-2
	ctx.r11.s64 = ctx.r11.s64 + -2;
loc_832FD404:
	// lhzu r10,2(r11)
	ea = 2 + ctx.r11.u32;
	ctx.r10.u64 = PPC_LOAD_U16(ea);
	ctx.r11.u32 = ea;
	// sth r10,0(r24)
	PPC_STORE_U16(ctx.r24.u32 + 0, ctx.r10.u16);
	// sthu r22,2(r24)
	ea = 2 + ctx.r24.u32;
	PPC_STORE_U16(ea, ctx.r22.u16);
	ctx.r24.u32 = ea;
	// addi r24,r24,2
	ctx.r24.s64 = ctx.r24.s64 + 2;
	// bdnz 0x832fd404
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_832FD404;
loc_832FD418:
	// lwz r11,0(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// rlwinm r28,r27,1,0,30
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 1) & 0xFFFFFFFE;
	// mr r29,r22
	ctx.r29.u64 = ctx.r22.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x832fd494
	if (!ctx.cr6.gt) goto loc_832FD494;
	// addi r31,r1,96
	ctx.r31.s64 = ctx.r1.s64 + 96;
	// addi r30,r21,-4
	ctx.r30.s64 = ctx.r21.s64 + -4;
loc_832FD434:
	// addi r6,r1,88
	ctx.r6.s64 = ctx.r1.s64 + 88;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x832f0da8
	ctx.lr = 0x832FD448;
	sub_832F0DA8(ctx, base);
	// lwz r3,4(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,32(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x832FD464;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwzu r3,4(r30)
	ea = 4 + ctx.r30.u32;
	ctx.r3.u64 = PPC_LOAD_U32(ea);
	ctx.r30.u32 = ea;
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,28(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x832FD480;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,0(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// addi r31,r31,8
	ctx.r31.s64 = ctx.r31.s64 + 8;
	// cmpw cr6,r29,r11
	ctx.cr6.compare<int32_t>(ctx.r29.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x832fd434
	if (ctx.cr6.lt) goto loc_832FD434;
loc_832FD494:
	// addic. r17,r17,-1
	ctx.xer.ca = ctx.r17.u32 > 0;
	ctx.r17.s64 = ctx.r17.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r17.s32, 0, ctx.xer);
	// subf r23,r27,r23
	ctx.r23.s64 = ctx.r23.s64 - ctx.r27.s64;
	// bne 0x832fd2f0
	if (!ctx.cr0.eq) goto loc_832FD2F0;
loc_832FD4A0:
	// addi r11,r1,112
	ctx.r11.s64 = ctx.r1.s64 + 112;
	// lis r9,2
	ctx.r9.s64 = 131072;
	// subf r10,r23,r19
	ctx.r10.s64 = ctx.r19.s64 - ctx.r23.s64;
	// ori r9,r9,8
	ctx.r9.u64 = ctx.r9.u64 | 8;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// std r22,0(r11)
	PPC_STORE_U64(ctx.r11.u32 + 0, ctx.r22.u64);
	// li r5,0
	ctx.r5.s64 = 0;
	// std r22,8(r11)
	PPC_STORE_U64(ctx.r11.u32 + 8, ctx.r22.u64);
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// std r22,16(r11)
	PPC_STORE_U64(ctx.r11.u32 + 16, ctx.r22.u64);
	// std r22,24(r11)
	PPC_STORE_U64(ctx.r11.u32 + 24, ctx.r22.u64);
	// lwzx r3,r25,r9
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r25.u32 + ctx.r9.u32);
	// stw r22,32(r11)
	PPC_STORE_U32(ctx.r11.u32 + 32, ctx.r22.u32);
	// stw r18,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r18.u32);
	// stw r10,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r10.u32);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,84(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 84);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x832FD4EC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr. r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// bge 0x832fd520
	if (!ctx.cr0.lt) goto loc_832FD520;
	// lis r11,-31823
	ctx.r11.s64 = -2085552128;
	// lis r10,-32210
	ctx.r10.s64 = -2110914560;
	// addi r31,r11,9840
	ctx.r31.s64 = ctx.r11.s64 + 9840;
	// addi r5,r10,-11368
	ctx.r5.s64 = ctx.r10.s64 + -11368;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r4,256
	ctx.r4.s64 = 256;
	// bl 0x832ff9a8
	ctx.lr = 0x832FD510;
	sub_832FF9A8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x832f8608
	ctx.lr = 0x832FD518;
	sub_832F8608(ctx, base);
	// li r3,-1
	ctx.r3.s64 = -1;
	// b 0x832fd524
	goto loc_832FD524;
loc_832FD520:
	// li r3,0
	ctx.r3.s64 = 0;
loc_832FD524:
	// addi r1,r1,288
	ctx.r1.s64 = ctx.r1.s64 + 288;
	// b 0x833a01cc
	__restgprlr_17(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832FD52C"))) PPC_WEAK_FUNC(sub_832FD52C);
PPC_FUNC_IMPL(__imp__sub_832FD52C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832FD530"))) PPC_WEAK_FUNC(sub_832FD530);
PPC_FUNC_IMPL(__imp__sub_832FD530) {
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
	// addis r31,r3,2
	ctx.r31.s64 = ctx.r3.s64 + 131072;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r31,r31,8
	ctx.r31.s64 = ctx.r31.s64 + 8;
	// li r5,256
	ctx.r5.s64 = 256;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,100(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 100);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x832FD56C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmplwi cr6,r11,64
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 64, ctx.xer);
	// bge cr6,0x832fd610
	if (!ctx.cr6.lt) goto loc_832FD610;
	// addi r10,r1,96
	ctx.r10.s64 = ctx.r1.s64 + 96;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r11,0
	ctx.r11.s64 = 0;
	// lis r9,-32210
	ctx.r9.s64 = -2110914560;
	// li r8,4
	ctx.r8.s64 = 4;
	// addi r9,r9,-11916
	ctx.r9.s64 = ctx.r9.s64 + -11916;
	// std r11,0(r10)
	PPC_STORE_U64(ctx.r10.u32 + 0, ctx.r11.u64);
	// li r7,64
	ctx.r7.s64 = 64;
	// std r11,8(r10)
	PPC_STORE_U64(ctx.r10.u32 + 8, ctx.r11.u64);
	// li r5,0
	ctx.r5.s64 = 0;
	// std r11,16(r10)
	PPC_STORE_U64(ctx.r10.u32 + 16, ctx.r11.u64);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// std r11,24(r10)
	PPC_STORE_U64(ctx.r10.u32 + 24, ctx.r11.u64);
	// stw r11,32(r10)
	PPC_STORE_U32(ctx.r10.u32 + 32, ctx.r11.u32);
	// stw r9,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r9.u32);
	// stw r8,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r8.u32);
	// stw r7,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r7.u32);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,84(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 84);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x832FD5CC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr. r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// bge 0x832fd600
	if (!ctx.cr0.lt) goto loc_832FD600;
	// lis r11,-31823
	ctx.r11.s64 = -2085552128;
	// lis r10,-32210
	ctx.r10.s64 = -2110914560;
	// addi r31,r11,9840
	ctx.r31.s64 = ctx.r11.s64 + 9840;
	// addi r5,r10,-11288
	ctx.r5.s64 = ctx.r10.s64 + -11288;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r4,256
	ctx.r4.s64 = 256;
	// bl 0x832ff9a8
	ctx.lr = 0x832FD5F0;
	sub_832FF9A8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x832f8608
	ctx.lr = 0x832FD5F8;
	sub_832F8608(ctx, base);
	// li r3,-1
	ctx.r3.s64 = -1;
	// b 0x832fd614
	goto loc_832FD614;
loc_832FD600:
	// lis r11,2
	ctx.r11.s64 = 131072;
	// li r10,1
	ctx.r10.s64 = 1;
	// ori r11,r11,52
	ctx.r11.u64 = ctx.r11.u64 | 52;
	// stwx r10,r30,r11
	PPC_STORE_U32(ctx.r30.u32 + ctx.r11.u32, ctx.r10.u32);
loc_832FD610:
	// li r3,0
	ctx.r3.s64 = 0;
loc_832FD614:
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

__attribute__((alias("__imp__sub_832FD62C"))) PPC_WEAK_FUNC(sub_832FD62C);
PPC_FUNC_IMPL(__imp__sub_832FD62C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832FD630"))) PPC_WEAK_FUNC(sub_832FD630);
PPC_FUNC_IMPL(__imp__sub_832FD630) {
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
	// lis r11,-31823
	ctx.r11.s64 = -2085552128;
	// addi r31,r11,10136
	ctx.r31.s64 = ctx.r11.s64 + 10136;
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// bl 0x832f40c0
	ctx.lr = 0x832FD650;
	sub_832F40C0(ctx, base);
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x832fd674
	if (ctx.cr6.eq) goto loc_832FD674;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lis r10,-31844
	ctx.r10.s64 = -2086928384;
	// lwz r11,52(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 52);
	// lwz r4,-29196(r10)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + -29196);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x832FD674;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_832FD674:
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// bl 0x832f4158
	ctx.lr = 0x832FD67C;
	sub_832F4158(ctx, base);
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

__attribute__((alias("__imp__sub_832FD694"))) PPC_WEAK_FUNC(sub_832FD694);
PPC_FUNC_IMPL(__imp__sub_832FD694) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832FD698"))) PPC_WEAK_FUNC(sub_832FD698);
PPC_FUNC_IMPL(__imp__sub_832FD698) {
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
	// addis r3,r3,2
	ctx.r3.s64 = ctx.r3.s64 + 131072;
	// li r5,16
	ctx.r5.s64 = 16;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r3,176
	ctx.r3.s64 = ctx.r3.s64 + 176;
	// bl 0x833a2b30
	ctx.lr = 0x832FD6C0;
	sub_833A2B30(ctx, base);
	// li r9,2
	ctx.r9.s64 = 2;
	// lis r8,-32210
	ctx.r8.s64 = -2110914560;
	// addis r10,r31,2
	ctx.r10.s64 = ctx.r31.s64 + 131072;
	// addis r11,r31,2
	ctx.r11.s64 = ctx.r31.s64 + 131072;
	// addi r10,r10,180
	ctx.r10.s64 = ctx.r10.s64 + 180;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// lis r9,-32245
	ctx.r9.s64 = -2113208320;
	// lfs f0,-10524(r8)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + -10524);
	ctx.f0.f64 = double(temp.f32);
	// addi r11,r11,136
	ctx.r11.s64 = ctx.r11.s64 + 136;
	// lfs f13,12452(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 12452);
	ctx.f13.f64 = double(temp.f32);
loc_832FD6E8:
	// lfs f12,0(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f12.f64 = double(temp.f32);
	// fmuls f12,f12,f0
	ctx.f12.f64 = double(float(ctx.f12.f64 * ctx.f0.f64));
	// lfs f11,8(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,-8(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -8);
	ctx.f10.f64 = double(temp.f32);
	// fmadds f12,f11,f0,f12
	ctx.f12.f64 = double(float(ctx.f11.f64 * ctx.f0.f64 + ctx.f12.f64));
	// fadds f12,f12,f10
	ctx.f12.f64 = double(float(ctx.f12.f64 + ctx.f10.f64));
	// fcmpu cr6,f12,f13
	ctx.cr6.compare(ctx.f12.f64, ctx.f13.f64);
	// ble cr6,0x832fd710
	if (!ctx.cr6.gt) goto loc_832FD710;
	// stfs f13,-4(r10)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r10.u32 + -4, temp.u32);
	// b 0x832fd714
	goto loc_832FD714;
loc_832FD710:
	// stfs f12,-4(r10)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r10.u32 + -4, temp.u32);
loc_832FD714:
	// lfs f12,0(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f12.f64 = double(temp.f32);
	// fmuls f12,f12,f0
	ctx.f12.f64 = double(float(ctx.f12.f64 * ctx.f0.f64));
	// lfs f11,12(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,-4(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -4);
	ctx.f10.f64 = double(temp.f32);
	// fmadds f12,f11,f0,f12
	ctx.f12.f64 = double(float(ctx.f11.f64 * ctx.f0.f64 + ctx.f12.f64));
	// fadds f12,f12,f10
	ctx.f12.f64 = double(float(ctx.f12.f64 + ctx.f10.f64));
	// fcmpu cr6,f12,f13
	ctx.cr6.compare(ctx.f12.f64, ctx.f13.f64);
	// ble cr6,0x832fd73c
	if (!ctx.cr6.gt) goto loc_832FD73C;
	// stfs f13,0(r10)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r10.u32 + 0, temp.u32);
	// b 0x832fd740
	goto loc_832FD740;
loc_832FD73C:
	// stfs f12,0(r10)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r10.u32 + 0, temp.u32);
loc_832FD740:
	// addi r11,r11,24
	ctx.r11.s64 = ctx.r11.s64 + 24;
	// addi r10,r10,8
	ctx.r10.s64 = ctx.r10.s64 + 8;
	// bdnz 0x832fd6e8
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_832FD6E8;
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

__attribute__((alias("__imp__sub_832FD764"))) PPC_WEAK_FUNC(sub_832FD764);
PPC_FUNC_IMPL(__imp__sub_832FD764) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832FD768"))) PPC_WEAK_FUNC(sub_832FD768);
PPC_FUNC_IMPL(__imp__sub_832FD768) {
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
	// addis r31,r3,2
	ctx.r31.s64 = ctx.r3.s64 + 131072;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r31,r31,192
	ctx.r31.s64 = ctx.r31.s64 + 192;
	// li r5,8
	ctx.r5.s64 = 8;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x833a2b30
	ctx.lr = 0x832FD798;
	sub_833A2B30(ctx, base);
	// li r10,2
	ctx.r10.s64 = 2;
	// lis r9,-32248
	ctx.r9.s64 = -2113404928;
	// lis r8,-32210
	ctx.r8.s64 = -2110914560;
	// addis r11,r30,2
	ctx.r11.s64 = ctx.r30.s64 + 131072;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// lis r10,-32245
	ctx.r10.s64 = -2113208320;
	// lfs f11,-9180(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + -9180);
	ctx.f11.f64 = double(temp.f32);
	// addi r11,r11,136
	ctx.r11.s64 = ctx.r11.s64 + 136;
	// lfs f0,-10524(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + -10524);
	ctx.f0.f64 = double(temp.f32);
	// lfs f12,12452(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 12452);
	ctx.f12.f64 = double(temp.f32);
loc_832FD7C0:
	// lfs f9,-8(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -8);
	ctx.f9.f64 = double(temp.f32);
	// lfs f10,8(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f10.f64 = double(temp.f32);
	// lfs f13,0(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// fmadds f10,f10,f0,f9
	ctx.f10.f64 = double(float(ctx.f10.f64 * ctx.f0.f64 + ctx.f9.f64));
	// lfs f8,12(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	ctx.f8.f64 = double(temp.f32);
	// fmuls f13,f13,f0
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// lfs f9,-4(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -4);
	ctx.f9.f64 = double(temp.f32);
	// fmadds f9,f8,f0,f9
	ctx.f9.f64 = double(float(ctx.f8.f64 * ctx.f0.f64 + ctx.f9.f64));
	// fadds f10,f10,f13
	ctx.f10.f64 = double(float(ctx.f10.f64 + ctx.f13.f64));
	// fadds f13,f9,f13
	ctx.f13.f64 = double(float(ctx.f9.f64 + ctx.f13.f64));
	// fadds f13,f10,f13
	ctx.f13.f64 = double(float(ctx.f10.f64 + ctx.f13.f64));
	// fmuls f13,f13,f11
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f11.f64));
	// fcmpu cr6,f13,f12
	ctx.cr6.compare(ctx.f13.f64, ctx.f12.f64);
	// ble cr6,0x832fd800
	if (!ctx.cr6.gt) goto loc_832FD800;
	// stfs f12,0(r31)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r31.u32 + 0, temp.u32);
	// b 0x832fd804
	goto loc_832FD804;
loc_832FD800:
	// stfs f13,0(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 0, temp.u32);
loc_832FD804:
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// addi r11,r11,24
	ctx.r11.s64 = ctx.r11.s64 + 24;
	// bdnz 0x832fd7c0
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_832FD7C0;
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

__attribute__((alias("__imp__sub_832FD82C"))) PPC_WEAK_FUNC(sub_832FD82C);
PPC_FUNC_IMPL(__imp__sub_832FD82C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832FD830"))) PPC_WEAK_FUNC(sub_832FD830);
PPC_FUNC_IMPL(__imp__sub_832FD830) {
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
	// stfd f31,-32(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -32, ctx.f31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r30,-31823
	ctx.r30.s64 = -2085552128;
	// fmr f31,f1
	ctx.f31.f64 = ctx.f1.f64;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r3,10148(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 10148);
	// bl 0x832f40c0
	ctx.lr = 0x832FD85C;
	sub_832F40C0(ctx, base);
	// lis r11,-32210
	ctx.r11.s64 = -2110914560;
	// lfs f0,-11828(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -11828);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f31,f0
	ctx.cr6.compare(ctx.f31.f64, ctx.f0.f64);
	// bgt cr6,0x832fd878
	if (ctx.cr6.gt) goto loc_832FD878;
	// lis r11,-32230
	ctx.r11.s64 = -2112225280;
	// lfs f1,24284(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 24284);
	ctx.f1.f64 = double(temp.f32);
	// b 0x832fd894
	goto loc_832FD894;
loc_832FD878:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// lfs f0,4796(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 4796);
	ctx.f0.f64 = double(temp.f32);
	// lfd f1,-8128(r10)
	ctx.f1.u64 = PPC_LOAD_U64(ctx.r10.u32 + -8128);
	// fmuls f2,f31,f0
	ctx.f2.f64 = double(float(ctx.f31.f64 * ctx.f0.f64));
	// bl 0x833a0678
	ctx.lr = 0x832FD890;
	sub_833A0678(ctx, base);
	// frsp f1,f1
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = double(float(ctx.f1.f64));
loc_832FD894:
	// lis r11,2
	ctx.r11.s64 = 131072;
	// ori r11,r11,8
	ctx.r11.u64 = ctx.r11.u64 | 8;
	// lwzx r3,r31,r11
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r11.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x832fd8bc
	if (ctx.cr6.eq) goto loc_832FD8BC;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r11,48(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 48);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x832FD8BC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_832FD8BC:
	// lis r11,2
	ctx.r11.s64 = 131072;
	// lwz r3,10148(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 10148);
	// ori r11,r11,108
	ctx.r11.u64 = ctx.r11.u64 | 108;
	// stfsx f31,r31,r11
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + ctx.r11.u32, temp.u32);
	// bl 0x832f4158
	ctx.lr = 0x832FD8D0;
	sub_832F4158(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// lfd f31,-32(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -32);
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_832FD8F0"))) PPC_WEAK_FUNC(sub_832FD8F0);
PPC_FUNC_IMPL(__imp__sub_832FD8F0) {
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
	// lis r11,2
	ctx.r11.s64 = 131072;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// ori r11,r11,248
	ctx.r11.u64 = ctx.r11.u64 | 248;
	// lwzx r11,r3,r11
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + ctx.r11.u32);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x832fda04
	if (ctx.cr6.eq) goto loc_832FDA04;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x832fce00
	ctx.lr = 0x832FD924;
	sub_832FCE00(ctx, base);
	// lis r11,2
	ctx.r11.s64 = 131072;
	// lis r10,2
	ctx.r10.s64 = 131072;
	// lwz r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// ori r11,r11,252
	ctx.r11.u64 = ctx.r11.u64 | 252;
	// ori r30,r10,56
	ctx.r30.u64 = ctx.r10.u64 | 56;
	// lwzx r11,r31,r11
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r11.u32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x832fd97c
	if (!ctx.cr6.eq) goto loc_832FD97C;
	// lis r11,2
	ctx.r11.s64 = 131072;
	// lwzx r10,r31,r30
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r30.u32);
	// li r9,15
	ctx.r9.s64 = 15;
	// ori r8,r11,100
	ctx.r8.u64 = ctx.r11.u64 | 100;
	// divw r11,r10,r9
	ctx.r11.s32 = ctx.r10.s32 / ctx.r9.s32;
	// rlwinm r11,r11,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// lwzx r10,r31,r8
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r8.u32);
	// srawi r10,r10,1
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x1) != 0);
	ctx.r10.s64 = ctx.r10.s32 >> 1;
	// addze r10,r10
	temp.s64 = ctx.r10.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r10.u32;
	ctx.r10.s64 = temp.s64;
	// cmpw cr6,r10,r11
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r11.s32, ctx.xer);
	// bge cr6,0x832fd974
	if (!ctx.cr6.lt) goto loc_832FD974;
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
loc_832FD974:
	// cmpw cr6,r4,r11
	ctx.cr6.compare<int32_t>(ctx.r4.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x832fda04
	if (ctx.cr6.lt) goto loc_832FDA04;
loc_832FD97C:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x832fd168
	ctx.lr = 0x832FD984;
	sub_832FD168(ctx, base);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x833be0e0
	ctx.lr = 0x832FD98C;
	sub_833BE0E0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x832fd9b0
	if (ctx.cr0.eq) goto loc_832FD9B0;
	// ld r11,88(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// cmpdi cr6,r11,0
	ctx.cr6.compare<int64_t>(ctx.r11.s64, 0, ctx.xer);
	// ble cr6,0x832fd9b0
	if (!ctx.cr6.gt) goto loc_832FD9B0;
	// lis r10,2
	ctx.r10.s64 = 131072;
	// ori r10,r10,264
	ctx.r10.u64 = ctx.r10.u64 | 264;
	// stdx r11,r31,r10
	PPC_STORE_U64(ctx.r31.u32 + ctx.r10.u32, ctx.r11.u64);
	// b 0x832fd9c0
	goto loc_832FD9C0;
loc_832FD9B0:
	// lis r11,2
	ctx.r11.s64 = 131072;
	// li r10,1
	ctx.r10.s64 = 1;
	// ori r11,r11,264
	ctx.r11.u64 = ctx.r11.u64 | 264;
	// stdx r10,r31,r11
	PPC_STORE_U64(ctx.r31.u32 + ctx.r11.u32, ctx.r10.u64);
loc_832FD9C0:
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x833bdef8
	ctx.lr = 0x832FD9C8;
	sub_833BDEF8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x832fd9ec
	if (!ctx.cr0.eq) goto loc_832FD9EC;
	// addis r9,r31,2
	ctx.r9.s64 = ctx.r31.s64 + 131072;
	// lwax r10,r31,r30
	ctx.r10.s64 = int32_t(PPC_LOAD_U32(ctx.r31.u32 + ctx.r30.u32));
	// addi r9,r9,272
	ctx.r9.s64 = ctx.r9.s64 + 272;
	// ld r11,0(r9)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r9.u32 + 0);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// std r11,0(r9)
	PPC_STORE_U64(ctx.r9.u32 + 0, ctx.r11.u64);
	// b 0x832fd9fc
	goto loc_832FD9FC;
loc_832FD9EC:
	// lis r11,2
	ctx.r11.s64 = 131072;
	// ld r10,96(r1)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r1.u32 + 96);
	// ori r11,r11,272
	ctx.r11.u64 = ctx.r11.u64 | 272;
	// stdx r10,r31,r11
	PPC_STORE_U64(ctx.r31.u32 + ctx.r11.u32, ctx.r10.u64);
loc_832FD9FC:
	// li r11,2
	ctx.r11.s64 = 2;
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
loc_832FDA04:
	// li r3,0
	ctx.r3.s64 = 0;
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

__attribute__((alias("__imp__sub_832FDA20"))) PPC_WEAK_FUNC(sub_832FDA20);
PPC_FUNC_IMPL(__imp__sub_832FDA20) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x833a01ac
	ctx.lr = 0x832FDA28;
	__savegprlr_29(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x833bdef8
	ctx.lr = 0x832FDA38;
	sub_833BDEF8(ctx, base);
	// lis r11,2
	ctx.r11.s64 = 131072;
	// lis r9,2
	ctx.r9.s64 = 131072;
	// ori r10,r11,272
	ctx.r10.u64 = ctx.r11.u64 | 272;
	// ori r11,r9,264
	ctx.r11.u64 = ctx.r9.u64 | 264;
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x832fda64
	if (!ctx.cr0.eq) goto loc_832FDA64;
	// ldx r9,r31,r10
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r31.u32 + ctx.r10.u32);
	// ldx r8,r31,r11
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r31.u32 + ctx.r11.u32);
	// add r8,r9,r8
	ctx.r8.u64 = ctx.r9.u64 + ctx.r8.u64;
	// std r8,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r8.u64);
	// b 0x832fda68
	goto loc_832FDA68;
loc_832FDA64:
	// ld r8,88(r1)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
loc_832FDA68:
	// lis r7,2
	ctx.r7.s64 = 131072;
	// ldx r11,r31,r11
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r31.u32 + ctx.r11.u32);
	// add r9,r31,r10
	ctx.r9.u64 = ctx.r31.u64 + ctx.r10.u64;
	// ori r10,r7,56
	ctx.r10.u64 = ctx.r7.u64 | 56;
	// ld r7,0(r9)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r9.u32 + 0);
	// lwzx r10,r31,r10
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r10.u32);
	// subf r7,r7,r8
	ctx.r7.s64 = ctx.r8.s64 - ctx.r7.s64;
	// extsw r6,r10
	ctx.r6.s64 = ctx.r10.s32;
	// mulld r7,r7,r6
	ctx.r7.s64 = ctx.r7.s64 * ctx.r6.s64;
	// divd r11,r7,r11
	ctx.r11.s64 = ctx.r7.s64 / ctx.r11.s64;
	// extsw. r11,r11
	ctx.r11.s64 = ctx.r11.s32;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bge 0x832fdaa0
	if (!ctx.cr0.lt) goto loc_832FDAA0;
	// li r11,0
	ctx.r11.s64 = 0;
	// b 0x832fdab4
	goto loc_832FDAB4;
loc_832FDAA0:
	// li r7,60
	ctx.r7.s64 = 60;
	// divw r10,r10,r7
	ctx.r10.s32 = ctx.r10.s32 / ctx.r7.s32;
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// ble cr6,0x832fdab4
	if (!ctx.cr6.gt) goto loc_832FDAB4;
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
loc_832FDAB4:
	// lis r10,2
	ctx.r10.s64 = 131072;
	// std r8,0(r9)
	PPC_STORE_U64(ctx.r9.u32 + 0, ctx.r8.u64);
	// lis r9,2
	ctx.r9.s64 = 131072;
	// ori r10,r10,248
	ctx.r10.u64 = ctx.r10.u64 | 248;
	// ori r30,r9,280
	ctx.r30.u64 = ctx.r9.u64 | 280;
	// lwzx r10,r31,r10
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r10.u32);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x832fdae4
	if (!ctx.cr6.eq) goto loc_832FDAE4;
	// ldx r10,r31,r30
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r31.u32 + ctx.r30.u32);
	// extsw r11,r11
	ctx.r11.s64 = ctx.r11.s32;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stdx r11,r31,r30
	PPC_STORE_U64(ctx.r31.u32 + ctx.r30.u32, ctx.r11.u64);
loc_832FDAE4:
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x832fce00
	ctx.lr = 0x832FDAF0;
	sub_832FCE00(ctx, base);
	// lwz r29,80(r1)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// ble cr6,0x832fdb08
	if (!ctx.cr6.gt) goto loc_832FDB08;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x832fd168
	ctx.lr = 0x832FDB08;
	sub_832FD168(ctx, base);
loc_832FDB08:
	// addis r11,r31,2
	ctx.r11.s64 = ctx.r31.s64 + 131072;
	// addi r11,r11,252
	ctx.r11.s64 = ctx.r11.s64 + 252;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmpwi cr6,r10,1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 1, ctx.xer);
	// bne cr6,0x832fdb5c
	if (!ctx.cr6.eq) goto loc_832FDB5C;
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// bgt cr6,0x832fdb5c
	if (ctx.cr6.gt) goto loc_832FDB5C;
	// lis r10,2
	ctx.r10.s64 = 131072;
	// ldx r9,r31,r30
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r31.u32 + ctx.r30.u32);
	// lis r8,2
	ctx.r8.s64 = 131072;
	// ori r10,r10,104
	ctx.r10.u64 = ctx.r10.u64 | 104;
	// ori r8,r8,72
	ctx.r8.u64 = ctx.r8.u64 | 72;
	// lwax r10,r31,r10
	ctx.r10.s64 = int32_t(PPC_LOAD_U32(ctx.r31.u32 + ctx.r10.u32));
	// ldx r8,r31,r8
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r31.u32 + ctx.r8.u32);
	// mulld r10,r10,r8
	ctx.r10.s64 = ctx.r10.s64 * ctx.r8.s64;
	// cmpd cr6,r9,r10
	ctx.cr6.compare<int64_t>(ctx.r9.s64, ctx.r10.s64, ctx.xer);
	// blt cr6,0x832fdb5c
	if (ctx.cr6.lt) goto loc_832FDB5C;
	// li r10,3
	ctx.r10.s64 = 3;
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r10,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r10.u32);
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
loc_832FDB5C:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x833a01fc
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832FDB68"))) PPC_WEAK_FUNC(sub_832FDB68);
PPC_FUNC_IMPL(__imp__sub_832FDB68) {
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
	// lis r11,-31823
	ctx.r11.s64 = -2085552128;
	// lis r8,-32210
	ctx.r8.s64 = -2110914560;
	// addi r31,r11,10096
	ctx.r31.s64 = ctx.r11.s64 + 10096;
	// addi r11,r8,-11912
	ctx.r11.s64 = ctx.r8.s64 + -11912;
	// addi r8,r31,36
	ctx.r8.s64 = ctx.r31.s64 + 36;
	// stw r11,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r11.u32);
loc_832FDB90:
	// mfmsr r9
	ctx.r9.u64 = ctx.msr;
	// mtmsrd r13,1
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// lwarx r10,0,r8
	ctx.reserved.u32 = *(uint32_t*)(base + ctx.r8.u32);
	ctx.r10.u64 = __builtin_bswap32(ctx.reserved.u32);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stwcx. r10,0,r8
	ctx.cr0.lt = 0;
	ctx.cr0.gt = 0;
	ctx.cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ctx.r8.u32), ctx.reserved.s32, __builtin_bswap32(ctx.r10.s32));
	ctx.cr0.so = ctx.xer.so;
	// mtmsrd r9,1
	ctx.msr = (ctx.r9.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// bne 0x832fdb90
	if (!ctx.cr0.eq) goto loc_832FDB90;
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// cmpwi cr6,r10,1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 1, ctx.xer);
	// bne cr6,0x832fdbe4
	if (!ctx.cr6.eq) goto loc_832FDBE4;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r4,32
	ctx.r4.s64 = 32;
	// bl 0x832f3f50
	ctx.lr = 0x832FDBC4;
	sub_832F3F50(ctx, base);
	// stw r3,52(r31)
	PPC_STORE_U32(ctx.r31.u32 + 52, ctx.r3.u32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne 0x832fdbe4
	if (!ctx.cr0.eq) goto loc_832FDBE4;
	// lis r11,-32210
	ctx.r11.s64 = -2110914560;
	// addi r3,r11,-11824
	ctx.r3.s64 = ctx.r11.s64 + -11824;
	// bl 0x832f8608
	ctx.lr = 0x832FDBDC;
	sub_832F8608(ctx, base);
	// li r3,-1
	ctx.r3.s64 = -1;
	// b 0x832fdbe8
	goto loc_832FDBE8;
loc_832FDBE4:
	// li r3,0
	ctx.r3.s64 = 0;
loc_832FDBE8:
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

__attribute__((alias("__imp__sub_832FDBFC"))) PPC_WEAK_FUNC(sub_832FDBFC);
PPC_FUNC_IMPL(__imp__sub_832FDBFC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832FDC00"))) PPC_WEAK_FUNC(sub_832FDC00);
PPC_FUNC_IMPL(__imp__sub_832FDC00) {
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
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x832fdc34
	if (!ctx.cr6.eq) goto loc_832FDC34;
	// lis r11,-32210
	ctx.r11.s64 = -2110914560;
	// addi r3,r11,-10300
	ctx.r3.s64 = ctx.r11.s64 + -10300;
loc_832FDC28:
	// bl 0x832f8608
	ctx.lr = 0x832FDC2C;
	sub_832F8608(ctx, base);
	// li r3,-1
	ctx.r3.s64 = -1;
	// b 0x832fdd08
	goto loc_832FDD08;
loc_832FDC34:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x832fdc4c
	if (!ctx.cr6.eq) goto loc_832FDC4C;
	// lis r11,-32210
	ctx.r11.s64 = -2110914560;
	// addi r3,r11,-10340
	ctx.r3.s64 = ctx.r11.s64 + -10340;
	// b 0x832fdc28
	goto loc_832FDC28;
loc_832FDC4C:
	// addis r31,r30,2
	ctx.r31.s64 = ctx.r30.s64 + 131072;
	// addi r31,r31,8
	ctx.r31.s64 = ctx.r31.s64 + 8;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x832fdc9c
	if (ctx.cr6.eq) goto loc_832FDC9C;
	// lis r11,2
	ctx.r11.s64 = 131072;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// ori r11,r11,288
	ctx.r11.u64 = ctx.r11.u64 | 288;
	// lwzx r11,r30,r11
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r11.u32);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x832FDC78;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r3,2
	ctx.r3.s64 = 2;
	// bl 0x82d9f510
	ctx.lr = 0x832FDC80;
	sub_82D9F510(ctx, base);
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,72(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 72);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x832FDC94;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
loc_832FDC9C:
	// lis r5,2
	ctx.r5.s64 = 131072;
	// li r4,0
	ctx.r4.s64 = 0;
	// ori r5,r5,304
	ctx.r5.u64 = ctx.r5.u64 | 304;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x833a2b30
	ctx.lr = 0x832FDCB0;
	sub_833A2B30(ctx, base);
	// lis r11,-31823
	ctx.r11.s64 = -2085552128;
	// addi r31,r11,10168
	ctx.r31.s64 = ctx.r11.s64 + 10168;
	// lwz r11,10168(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 10168);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x832fdcf0
	if (!ctx.cr6.eq) goto loc_832FDCF0;
	// lwz r3,-16(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -16);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x832fdce0
	if (!ctx.cr6.eq) goto loc_832FDCE0;
	// bl 0x82da4698
	ctx.lr = 0x832FDCD4;
	sub_82DA4698(ctx, base);
	// stw r3,-16(r31)
	PPC_STORE_U32(ctx.r31.u32 + -16, ctx.r3.u32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x832fdd04
	if (ctx.cr0.eq) goto loc_832FDD04;
loc_832FDCE0:
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82da3ac0
	ctx.lr = 0x832FDCEC;
	sub_82DA3AC0(ctx, base);
	// b 0x832fdd04
	goto loc_832FDD04;
loc_832FDCF0:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x832FDD04;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_832FDD04:
	// li r3,0
	ctx.r3.s64 = 0;
loc_832FDD08:
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

__attribute__((alias("__imp__sub_832FDD20"))) PPC_WEAK_FUNC(sub_832FDD20);
PPC_FUNC_IMPL(__imp__sub_832FDD20) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x833a01ac
	ctx.lr = 0x832FDD28;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r29,-31823
	ctx.r29.s64 = -2085552128;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r3,10148(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 10148);
	// bl 0x832f40c0
	ctx.lr = 0x832FDD3C;
	sub_832F40C0(ctx, base);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne cr6,0x832fdd58
	if (!ctx.cr6.eq) goto loc_832FDD58;
	// lis r11,-32210
	ctx.r11.s64 = -2110914560;
	// addi r3,r11,-11732
	ctx.r3.s64 = ctx.r11.s64 + -11732;
loc_832FDD4C:
	// bl 0x832f8608
	ctx.lr = 0x832FDD50;
	sub_832F8608(ctx, base);
	// li r30,-1
	ctx.r30.s64 = -1;
	// b 0x832fddb0
	goto loc_832FDDB0;
loc_832FDD58:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x832fdd70
	if (!ctx.cr6.eq) goto loc_832FDD70;
	// lis r11,-32210
	ctx.r11.s64 = -2110914560;
	// addi r3,r11,-11772
	ctx.r3.s64 = ctx.r11.s64 + -11772;
	// b 0x832fdd4c
	goto loc_832FDD4C;
loc_832FDD70:
	// lis r11,2
	ctx.r11.s64 = 131072;
	// lis r10,2
	ctx.r10.s64 = 131072;
	// lis r9,2
	ctx.r9.s64 = 131072;
	// lis r8,2
	ctx.r8.s64 = 131072;
	// ori r7,r11,72
	ctx.r7.u64 = ctx.r11.u64 | 72;
	// ori r10,r10,280
	ctx.r10.u64 = ctx.r10.u64 | 280;
	// ori r9,r9,252
	ctx.r9.u64 = ctx.r9.u64 | 252;
	// ori r8,r8,52
	ctx.r8.u64 = ctx.r8.u64 | 52;
	// li r11,0
	ctx.r11.s64 = 0;
	// li r6,1
	ctx.r6.s64 = 1;
	// stdx r11,r31,r7
	PPC_STORE_U64(ctx.r31.u32 + ctx.r7.u32, ctx.r11.u64);
	// mr r30,r11
	ctx.r30.u64 = ctx.r11.u64;
	// stdx r11,r31,r10
	PPC_STORE_U64(ctx.r31.u32 + ctx.r10.u32, ctx.r11.u64);
	// stwx r11,r31,r9
	PPC_STORE_U32(ctx.r31.u32 + ctx.r9.u32, ctx.r11.u32);
	// stwx r11,r31,r8
	PPC_STORE_U32(ctx.r31.u32 + ctx.r8.u32, ctx.r11.u32);
	// stw r6,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r6.u32);
loc_832FDDB0:
	// lwz r3,10148(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 10148);
	// bl 0x832f4158
	ctx.lr = 0x832FDDB8;
	sub_832F4158(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x833a01fc
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832FDDC4"))) PPC_WEAK_FUNC(sub_832FDDC4);
PPC_FUNC_IMPL(__imp__sub_832FDDC4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832FDDC8"))) PPC_WEAK_FUNC(sub_832FDDC8);
PPC_FUNC_IMPL(__imp__sub_832FDDC8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x833a01ac
	ctx.lr = 0x832FDDD0;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r29,-31823
	ctx.r29.s64 = -2085552128;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r3,10148(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 10148);
	// bl 0x832f40c0
	ctx.lr = 0x832FDDE4;
	sub_832F40C0(ctx, base);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne cr6,0x832fde00
	if (!ctx.cr6.eq) goto loc_832FDE00;
	// lis r11,-32210
	ctx.r11.s64 = -2110914560;
	// addi r3,r11,-11652
	ctx.r3.s64 = ctx.r11.s64 + -11652;
loc_832FDDF4:
	// bl 0x832f8608
	ctx.lr = 0x832FDDF8;
	sub_832F8608(ctx, base);
	// li r31,-1
	ctx.r31.s64 = -1;
	// b 0x832fde48
	goto loc_832FDE48;
loc_832FDE00:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x832fde18
	if (!ctx.cr6.eq) goto loc_832FDE18;
	// lis r11,-32210
	ctx.r11.s64 = -2110914560;
	// addi r3,r11,-11692
	ctx.r3.s64 = ctx.r11.s64 + -11692;
	// b 0x832fddf4
	goto loc_832FDDF4;
loc_832FDE18:
	// lis r11,2
	ctx.r11.s64 = 131072;
	// li r30,0
	ctx.r30.s64 = 0;
	// ori r11,r11,72
	ctx.r11.u64 = ctx.r11.u64 | 72;
	// stw r30,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r30.u32);
	// lis r10,2
	ctx.r10.s64 = 131072;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// ori r10,r10,288
	ctx.r10.u64 = ctx.r10.u64 | 288;
	// stdx r30,r31,r11
	PPC_STORE_U64(ctx.r31.u32 + ctx.r11.u32, ctx.r30.u64);
	// lwzx r11,r31,r10
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r10.u32);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x832FDE44;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r31,r30
	ctx.r31.u64 = ctx.r30.u64;
loc_832FDE48:
	// lwz r3,10148(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 10148);
	// bl 0x832f4158
	ctx.lr = 0x832FDE50;
	sub_832F4158(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x833a01fc
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832FDE5C"))) PPC_WEAK_FUNC(sub_832FDE5C);
PPC_FUNC_IMPL(__imp__sub_832FDE5C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832FDE60"))) PPC_WEAK_FUNC(sub_832FDE60);
PPC_FUNC_IMPL(__imp__sub_832FDE60) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x833a01ac
	ctx.lr = 0x832FDE68;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r29,-31823
	ctx.r29.s64 = -2085552128;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r3,10148(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 10148);
	// bl 0x832f40c0
	ctx.lr = 0x832FDE7C;
	sub_832F40C0(ctx, base);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne cr6,0x832fde98
	if (!ctx.cr6.eq) goto loc_832FDE98;
	// lis r11,-32210
	ctx.r11.s64 = -2110914560;
	// addi r3,r11,-11572
	ctx.r3.s64 = ctx.r11.s64 + -11572;
loc_832FDE8C:
	// bl 0x832f8608
	ctx.lr = 0x832FDE90;
	sub_832F8608(ctx, base);
	// li r30,-1
	ctx.r30.s64 = -1;
	// b 0x832fdec4
	goto loc_832FDEC4;
loc_832FDE98:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x832fdeb0
	if (!ctx.cr6.eq) goto loc_832FDEB0;
	// lis r11,-32210
	ctx.r11.s64 = -2110914560;
	// addi r3,r11,-11612
	ctx.r3.s64 = ctx.r11.s64 + -11612;
	// b 0x832fde8c
	goto loc_832FDE8C;
loc_832FDEB0:
	// lis r11,2
	ctx.r11.s64 = 131072;
	// li r10,1
	ctx.r10.s64 = 1;
	// ori r11,r11,248
	ctx.r11.u64 = ctx.r11.u64 | 248;
	// li r30,0
	ctx.r30.s64 = 0;
	// stwx r10,r31,r11
	PPC_STORE_U32(ctx.r31.u32 + ctx.r11.u32, ctx.r10.u32);
loc_832FDEC4:
	// lwz r3,10148(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 10148);
	// bl 0x832f4158
	ctx.lr = 0x832FDECC;
	sub_832F4158(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x833a01fc
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832FDED8"))) PPC_WEAK_FUNC(sub_832FDED8);
PPC_FUNC_IMPL(__imp__sub_832FDED8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x833a01ac
	ctx.lr = 0x832FDEE0;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r29,-31823
	ctx.r29.s64 = -2085552128;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r3,10148(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 10148);
	// bl 0x832f40c0
	ctx.lr = 0x832FDEF4;
	sub_832F40C0(ctx, base);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne cr6,0x832fdf10
	if (!ctx.cr6.eq) goto loc_832FDF10;
	// lis r11,-32210
	ctx.r11.s64 = -2110914560;
	// addi r3,r11,-11492
	ctx.r3.s64 = ctx.r11.s64 + -11492;
loc_832FDF04:
	// bl 0x832f8608
	ctx.lr = 0x832FDF08;
	sub_832F8608(ctx, base);
	// li r30,-1
	ctx.r30.s64 = -1;
	// b 0x832fdf38
	goto loc_832FDF38;
loc_832FDF10:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x832fdf28
	if (!ctx.cr6.eq) goto loc_832FDF28;
	// lis r11,-32210
	ctx.r11.s64 = -2110914560;
	// addi r3,r11,-11532
	ctx.r3.s64 = ctx.r11.s64 + -11532;
	// b 0x832fdf04
	goto loc_832FDF04;
loc_832FDF28:
	// lis r11,2
	ctx.r11.s64 = 131072;
	// li r30,0
	ctx.r30.s64 = 0;
	// ori r11,r11,248
	ctx.r11.u64 = ctx.r11.u64 | 248;
	// stwx r30,r31,r11
	PPC_STORE_U32(ctx.r31.u32 + ctx.r11.u32, ctx.r30.u32);
loc_832FDF38:
	// lwz r3,10148(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 10148);
	// bl 0x832f4158
	ctx.lr = 0x832FDF40;
	sub_832F4158(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x833a01fc
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832FDF4C"))) PPC_WEAK_FUNC(sub_832FDF4C);
PPC_FUNC_IMPL(__imp__sub_832FDF4C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832FDF50"))) PPC_WEAK_FUNC(sub_832FDF50);
PPC_FUNC_IMPL(__imp__sub_832FDF50) {
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
	// lis r30,-31823
	ctx.r30.s64 = -2085552128;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r3,10148(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 10148);
	// bl 0x832f40c0
	ctx.lr = 0x832FDF74;
	sub_832F40C0(ctx, base);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne cr6,0x832fdf90
	if (!ctx.cr6.eq) goto loc_832FDF90;
	// lis r11,-32210
	ctx.r11.s64 = -2110914560;
	// addi r3,r11,-11412
	ctx.r3.s64 = ctx.r11.s64 + -11412;
loc_832FDF84:
	// bl 0x832f8608
	ctx.lr = 0x832FDF88;
	sub_832F8608(ctx, base);
	// li r31,-1
	ctx.r31.s64 = -1;
	// b 0x832fe000
	goto loc_832FE000;
loc_832FDF90:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x832fdfa8
	if (!ctx.cr6.eq) goto loc_832FDFA8;
	// lis r11,-32210
	ctx.r11.s64 = -2110914560;
	// addi r3,r11,-11452
	ctx.r3.s64 = ctx.r11.s64 + -11452;
	// b 0x832fdf84
	goto loc_832FDF84;
loc_832FDFA8:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x832fdfdc
	if (ctx.cr6.eq) goto loc_832FDFDC;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x832fdfd0
	if (ctx.cr6.eq) goto loc_832FDFD0;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bne cr6,0x832fdffc
	if (!ctx.cr6.eq) goto loc_832FDFFC;
	// lis r11,2
	ctx.r11.s64 = 131072;
	// ori r11,r11,300
	ctx.r11.u64 = ctx.r11.u64 | 300;
	// b 0x832fdfe4
	goto loc_832FDFE4;
loc_832FDFD0:
	// lis r11,2
	ctx.r11.s64 = 131072;
	// ori r11,r11,296
	ctx.r11.u64 = ctx.r11.u64 | 296;
	// b 0x832fdfe4
	goto loc_832FDFE4;
loc_832FDFDC:
	// lis r11,2
	ctx.r11.s64 = 131072;
	// ori r11,r11,292
	ctx.r11.u64 = ctx.r11.u64 | 292;
loc_832FDFE4:
	// lwzx r11,r31,r11
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r11.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x832fdffc
	if (ctx.cr6.eq) goto loc_832FDFFC;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x832FDFFC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_832FDFFC:
	// li r31,0
	ctx.r31.s64 = 0;
loc_832FE000:
	// lwz r3,10148(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 10148);
	// bl 0x832f4158
	ctx.lr = 0x832FE008;
	sub_832F4158(ctx, base);
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

__attribute__((alias("__imp__sub_832FE024"))) PPC_WEAK_FUNC(sub_832FE024);
PPC_FUNC_IMPL(__imp__sub_832FE024) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832FE028"))) PPC_WEAK_FUNC(sub_832FE028);
PPC_FUNC_IMPL(__imp__sub_832FE028) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x833a0190
	ctx.lr = 0x832FE030;
	__savegprlr_22(ctx, base);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addis r23,r3,2
	ctx.r23.s64 = ctx.r3.s64 + 131072;
	// addis r22,r3,2
	ctx.r22.s64 = ctx.r3.s64 + 131072;
	// addi r23,r23,104
	ctx.r23.s64 = ctx.r23.s64 + 104;
	// srawi r10,r4,1
	ctx.xer.ca = (ctx.r4.s32 < 0) & ((ctx.r4.u32 & 0x1) != 0);
	ctx.r10.s64 = ctx.r4.s32 >> 1;
	// addi r22,r22,252
	ctx.r22.s64 = ctx.r22.s64 + 252;
	// addze r30,r10
	temp.s64 = ctx.r10.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r10.u32;
	ctx.r30.s64 = temp.s64;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// lwz r11,0(r23)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r23.u32 + 0);
	// lwz r10,0(r22)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r22.u32 + 0);
	// divw r9,r30,r11
	ctx.r9.s32 = ctx.r30.s32 / ctx.r11.s32;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// extsw r27,r9
	ctx.r27.s64 = ctx.r9.s32;
	// beq cr6,0x832fe07c
	if (ctx.cr6.eq) goto loc_832FE07C;
	// divw r10,r30,r11
	ctx.r10.s32 = ctx.r30.s32 / ctx.r11.s32;
	// mullw r11,r10,r11
	ctx.r11.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r11.s32);
	// subf. r11,r11,r30
	ctx.r11.s64 = ctx.r30.s64 - ctx.r11.s64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble 0x832fe07c
	if (!ctx.cr0.gt) goto loc_832FE07C;
	// addi r27,r27,1
	ctx.r27.s64 = ctx.r27.s64 + 1;
loc_832FE07C:
	// addis r24,r29,2
	ctx.r24.s64 = ctx.r29.s64 + 131072;
	// li r5,256
	ctx.r5.s64 = 256;
	// addi r24,r24,8
	ctx.r24.s64 = ctx.r24.s64 + 8;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r3,0(r24)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r24.u32 + 0);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,100(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 100);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x832FE0A0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// subfic r11,r11,64
	ctx.xer.ca = ctx.r11.u32 <= 64;
	ctx.r11.s64 = 64 - ctx.r11.s64;
	// extsw r11,r11
	ctx.r11.s64 = ctx.r11.s32;
	// cmpd cr6,r27,r11
	ctx.cr6.compare<int64_t>(ctx.r27.s64, ctx.r11.s64, ctx.xer);
	// blt cr6,0x832fe0b8
	if (ctx.cr6.lt) goto loc_832FE0B8;
	// mr r27,r11
	ctx.r27.u64 = ctx.r11.u64;
loc_832FE0B8:
	// li r26,0
	ctx.r26.s64 = 0;
	// cmpdi cr6,r27,0
	ctx.cr6.compare<int64_t>(ctx.r27.s64, 0, ctx.xer);
	// ble cr6,0x832fe174
	if (!ctx.cr6.gt) goto loc_832FE174;
	// lis r11,2
	ctx.r11.s64 = 131072;
	// ori r25,r11,72
	ctx.r25.u64 = ctx.r11.u64 | 72;
loc_832FE0CC:
	// lwz r28,0(r23)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r23.u32 + 0);
	// cmpw cr6,r30,r28
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r28.s32, ctx.xer);
	// bgt cr6,0x832fe0dc
	if (ctx.cr6.gt) goto loc_832FE0DC;
	// mr r28,r30
	ctx.r28.u64 = ctx.r30.u64;
loc_832FE0DC:
	// lwz r11,0(r22)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r22.u32 + 0);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x832fe100
	if (!ctx.cr6.eq) goto loc_832FE100;
	// lis r11,2
	ctx.r11.s64 = 131072;
	// ldx r10,r29,r25
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r29.u32 + ctx.r25.u32);
	// ori r11,r11,80
	ctx.r11.u64 = ctx.r11.u64 | 80;
	// ldx r11,r29,r11
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r29.u32 + ctx.r11.u32);
	// cmpd cr6,r10,r11
	ctx.cr6.compare<int64_t>(ctx.r10.s64, ctx.r11.s64, ctx.xer);
	// bge cr6,0x832fe174
	if (!ctx.cr6.lt) goto loc_832FE174;
loc_832FE100:
	// lwz r3,0(r24)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r24.u32 + 0);
	// li r5,256
	ctx.r5.s64 = 256;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,100(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 100);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x832FE11C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmplwi cr6,r11,64
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 64, ctx.xer);
	// bge cr6,0x832fe174
	if (!ctx.cr6.lt) goto loc_832FE174;
	// ldx r11,r29,r25
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r29.u32 + ctx.r25.u32);
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// sradi r10,r11,6
	ctx.xer.ca = (ctx.r11.s64 < 0) & ((ctx.r11.u64 & 0x3F) != 0);
	ctx.r10.s64 = ctx.r11.s64 >> 6;
	// add r31,r29,r25
	ctx.r31.u64 = ctx.r29.u64 + ctx.r25.u64;
	// addze r10,r10
	temp.s64 = ctx.r10.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r10.u32;
	ctx.r10.s64 = temp.s64;
	// rldicr r10,r10,6,57
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u64, 6) & 0xFFFFFFFFFFFFFFC0;
	// subf r11,r10,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r10.s64;
	// extsw r4,r11
	ctx.r4.s64 = ctx.r11.s32;
	// bl 0x832fd2a0
	ctx.lr = 0x832FE150;
	sub_832FD2A0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x832fe174
	if (ctx.cr0.lt) goto loc_832FE174;
	// ld r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r31.u32 + 0);
	// addi r26,r26,1
	ctx.r26.s64 = ctx.r26.s64 + 1;
	// subf r30,r28,r30
	ctx.r30.s64 = ctx.r30.s64 - ctx.r28.s64;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmpd cr6,r26,r27
	ctx.cr6.compare<int64_t>(ctx.r26.s64, ctx.r27.s64, ctx.xer);
	// std r11,0(r31)
	PPC_STORE_U64(ctx.r31.u32 + 0, ctx.r11.u64);
	// blt cr6,0x832fe0cc
	if (ctx.cr6.lt) goto loc_832FE0CC;
loc_832FE174:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x833a01e0
	__restgprlr_22(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832FE180"))) PPC_WEAK_FUNC(sub_832FE180);
PPC_FUNC_IMPL(__imp__sub_832FE180) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x833a01ac
	ctx.lr = 0x832FE188;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r29,-31823
	ctx.r29.s64 = -2085552128;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r3,10148(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 10148);
	// bl 0x832f40c0
	ctx.lr = 0x832FE19C;
	sub_832F40C0(ctx, base);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne cr6,0x832fe1b8
	if (!ctx.cr6.eq) goto loc_832FE1B8;
	// lis r11,-32210
	ctx.r11.s64 = -2110914560;
	// addi r3,r11,-11168
	ctx.r3.s64 = ctx.r11.s64 + -11168;
loc_832FE1AC:
	// bl 0x832f8608
	ctx.lr = 0x832FE1B0;
	sub_832F8608(ctx, base);
	// li r30,-1
	ctx.r30.s64 = -1;
	// b 0x832fe1e4
	goto loc_832FE1E4;
loc_832FE1B8:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x832fe1d0
	if (!ctx.cr6.eq) goto loc_832FE1D0;
	// lis r11,-32210
	ctx.r11.s64 = -2110914560;
	// addi r3,r11,-11208
	ctx.r3.s64 = ctx.r11.s64 + -11208;
	// b 0x832fe1ac
	goto loc_832FE1AC;
loc_832FE1D0:
	// lis r11,2
	ctx.r11.s64 = 131072;
	// li r10,1
	ctx.r10.s64 = 1;
	// ori r11,r11,252
	ctx.r11.u64 = ctx.r11.u64 | 252;
	// li r30,0
	ctx.r30.s64 = 0;
	// stwx r10,r31,r11
	PPC_STORE_U32(ctx.r31.u32 + ctx.r11.u32, ctx.r10.u32);
loc_832FE1E4:
	// lwz r3,10148(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 10148);
	// bl 0x832f4158
	ctx.lr = 0x832FE1EC;
	sub_832F4158(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x833a01fc
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832FE1F8"))) PPC_WEAK_FUNC(sub_832FE1F8);
PPC_FUNC_IMPL(__imp__sub_832FE1F8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x833a01ac
	ctx.lr = 0x832FE200;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r29,-31823
	ctx.r29.s64 = -2085552128;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// lwz r3,10148(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 10148);
	// bl 0x832f40c0
	ctx.lr = 0x832FE218;
	sub_832F40C0(ctx, base);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne cr6,0x832fe234
	if (!ctx.cr6.eq) goto loc_832FE234;
	// lis r11,-32210
	ctx.r11.s64 = -2110914560;
	// addi r3,r11,-11088
	ctx.r3.s64 = ctx.r11.s64 + -11088;
loc_832FE228:
	// bl 0x832f8608
	ctx.lr = 0x832FE22C;
	sub_832F8608(ctx, base);
	// li r31,-1
	ctx.r31.s64 = -1;
	// b 0x832fe260
	goto loc_832FE260;
loc_832FE234:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x832fe24c
	if (!ctx.cr6.eq) goto loc_832FE24C;
	// lis r11,-32210
	ctx.r11.s64 = -2110914560;
	// addi r3,r11,-11128
	ctx.r3.s64 = ctx.r11.s64 + -11128;
	// b 0x832fe228
	goto loc_832FE228;
loc_832FE24C:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x832fe25c
	if (ctx.cr6.eq) goto loc_832FE25C;
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
loc_832FE25C:
	// li r31,0
	ctx.r31.s64 = 0;
loc_832FE260:
	// lwz r3,10148(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 10148);
	// bl 0x832f4158
	ctx.lr = 0x832FE268;
	sub_832F4158(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x833a01fc
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832FE274"))) PPC_WEAK_FUNC(sub_832FE274);
PPC_FUNC_IMPL(__imp__sub_832FE274) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832FE278"))) PPC_WEAK_FUNC(sub_832FE278);
PPC_FUNC_IMPL(__imp__sub_832FE278) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x833a01ac
	ctx.lr = 0x832FE280;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r29,-31823
	ctx.r29.s64 = -2085552128;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// lwz r3,10148(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 10148);
	// bl 0x832f40c0
	ctx.lr = 0x832FE298;
	sub_832F40C0(ctx, base);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne cr6,0x832fe2b4
	if (!ctx.cr6.eq) goto loc_832FE2B4;
	// lis r11,-32210
	ctx.r11.s64 = -2110914560;
	// addi r3,r11,-11008
	ctx.r3.s64 = ctx.r11.s64 + -11008;
loc_832FE2A8:
	// bl 0x832f8608
	ctx.lr = 0x832FE2AC;
	sub_832F8608(ctx, base);
	// li r31,-1
	ctx.r31.s64 = -1;
	// b 0x832fe2e8
	goto loc_832FE2E8;
loc_832FE2B4:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x832fe2cc
	if (!ctx.cr6.eq) goto loc_832FE2CC;
	// lis r11,-32210
	ctx.r11.s64 = -2110914560;
	// addi r3,r11,-11048
	ctx.r3.s64 = ctx.r11.s64 + -11048;
	// b 0x832fe2a8
	goto loc_832FE2A8;
loc_832FE2CC:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x832fe2e4
	if (ctx.cr6.eq) goto loc_832FE2E4;
	// lis r11,2
	ctx.r11.s64 = 131072;
	// ori r11,r11,112
	ctx.r11.u64 = ctx.r11.u64 | 112;
	// lwzx r11,r31,r11
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r11.u32);
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
loc_832FE2E4:
	// li r31,0
	ctx.r31.s64 = 0;
loc_832FE2E8:
	// lwz r3,10148(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 10148);
	// bl 0x832f4158
	ctx.lr = 0x832FE2F0;
	sub_832F4158(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x833a01fc
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832FE2FC"))) PPC_WEAK_FUNC(sub_832FE2FC);
PPC_FUNC_IMPL(__imp__sub_832FE2FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832FE300"))) PPC_WEAK_FUNC(sub_832FE300);
PPC_FUNC_IMPL(__imp__sub_832FE300) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x833a01ac
	ctx.lr = 0x832FE308;
	__savegprlr_29(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r29,-31823
	ctx.r29.s64 = -2085552128;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// lwz r3,10148(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 10148);
	// bl 0x832f40c0
	ctx.lr = 0x832FE320;
	sub_832F40C0(ctx, base);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne cr6,0x832fe33c
	if (!ctx.cr6.eq) goto loc_832FE33C;
	// lis r11,-32210
	ctx.r11.s64 = -2110914560;
	// addi r3,r11,-10928
	ctx.r3.s64 = ctx.r11.s64 + -10928;
loc_832FE330:
	// bl 0x832f8608
	ctx.lr = 0x832FE334;
	sub_832F8608(ctx, base);
	// li r31,-1
	ctx.r31.s64 = -1;
	// b 0x832fe3c8
	goto loc_832FE3C8;
loc_832FE33C:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x832fe354
	if (!ctx.cr6.eq) goto loc_832FE354;
	// lis r11,-32210
	ctx.r11.s64 = -2110914560;
	// addi r3,r11,-10968
	ctx.r3.s64 = ctx.r11.s64 + -10968;
	// b 0x832fe330
	goto loc_832FE330;
loc_832FE354:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x832fe3c4
	if (ctx.cr6.eq) goto loc_832FE3C4;
	// lis r11,2
	ctx.r11.s64 = 131072;
	// ori r11,r11,8
	ctx.r11.u64 = ctx.r11.u64 | 8;
	// lwzx r3,r31,r11
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r11.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x832fe3b4
	if (ctx.cr6.eq) goto loc_832FE3B4;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r11,100(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 100);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x832FE388;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addis r11,r31,2
	ctx.r11.s64 = ctx.r31.s64 + 131072;
	// ld r10,88(r1)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// addi r11,r11,120
	ctx.r11.s64 = ctx.r11.s64 + 120;
	// ld r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r11.u32 + 0);
	// cmpld cr6,r10,r9
	ctx.cr6.compare<uint64_t>(ctx.r10.u64, ctx.r9.u64, ctx.xer);
	// bge cr6,0x832fe3a8
	if (!ctx.cr6.lt) goto loc_832FE3A8;
	// li r9,0
	ctx.r9.s64 = 0;
	// std r9,0(r11)
	PPC_STORE_U64(ctx.r11.u32 + 0, ctx.r9.u64);
loc_832FE3A8:
	// ld r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r11.u32 + 0);
	// subf r11,r11,r10
	ctx.r11.s64 = ctx.r10.s64 - ctx.r11.s64;
	// b 0x832fe3c0
	goto loc_832FE3C0;
loc_832FE3B4:
	// lis r11,2
	ctx.r11.s64 = 131072;
	// ori r11,r11,280
	ctx.r11.u64 = ctx.r11.u64 | 280;
	// ldx r11,r31,r11
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r31.u32 + ctx.r11.u32);
loc_832FE3C0:
	// std r11,0(r30)
	PPC_STORE_U64(ctx.r30.u32 + 0, ctx.r11.u64);
loc_832FE3C4:
	// li r31,0
	ctx.r31.s64 = 0;
loc_832FE3C8:
	// lwz r3,10148(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 10148);
	// bl 0x832f4158
	ctx.lr = 0x832FE3D0;
	sub_832F4158(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x833a01fc
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832FE3DC"))) PPC_WEAK_FUNC(sub_832FE3DC);
PPC_FUNC_IMPL(__imp__sub_832FE3DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832FE3E0"))) PPC_WEAK_FUNC(sub_832FE3E0);
PPC_FUNC_IMPL(__imp__sub_832FE3E0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x833a01ac
	ctx.lr = 0x832FE3E8;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r29,-31823
	ctx.r29.s64 = -2085552128;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// lwz r3,10148(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 10148);
	// bl 0x832f40c0
	ctx.lr = 0x832FE400;
	sub_832F40C0(ctx, base);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne cr6,0x832fe41c
	if (!ctx.cr6.eq) goto loc_832FE41C;
	// lis r11,-32210
	ctx.r11.s64 = -2110914560;
	// addi r3,r11,-10848
	ctx.r3.s64 = ctx.r11.s64 + -10848;
loc_832FE410:
	// bl 0x832f8608
	ctx.lr = 0x832FE414;
	sub_832F8608(ctx, base);
	// li r31,-1
	ctx.r31.s64 = -1;
	// b 0x832fe460
	goto loc_832FE460;
loc_832FE41C:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x832fe434
	if (!ctx.cr6.eq) goto loc_832FE434;
	// lis r11,-32210
	ctx.r11.s64 = -2110914560;
	// addi r3,r11,-10888
	ctx.r3.s64 = ctx.r11.s64 + -10888;
	// b 0x832fe410
	goto loc_832FE410;
loc_832FE434:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x832fe45c
	if (ctx.cr6.eq) goto loc_832FE45C;
	// lis r11,2
	ctx.r11.s64 = 131072;
	// lis r10,2
	ctx.r10.s64 = 131072;
	// ori r11,r11,104
	ctx.r11.u64 = ctx.r11.u64 | 104;
	// ori r10,r10,72
	ctx.r10.u64 = ctx.r10.u64 | 72;
	// lwax r11,r31,r11
	ctx.r11.s64 = int32_t(PPC_LOAD_U32(ctx.r31.u32 + ctx.r11.u32));
	// ldx r10,r31,r10
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r31.u32 + ctx.r10.u32);
	// mulld r11,r11,r10
	ctx.r11.s64 = ctx.r11.s64 * ctx.r10.s64;
	// std r11,0(r30)
	PPC_STORE_U64(ctx.r30.u32 + 0, ctx.r11.u64);
loc_832FE45C:
	// li r31,0
	ctx.r31.s64 = 0;
loc_832FE460:
	// lwz r3,10148(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 10148);
	// bl 0x832f4158
	ctx.lr = 0x832FE468;
	sub_832F4158(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x833a01fc
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832FE474"))) PPC_WEAK_FUNC(sub_832FE474);
PPC_FUNC_IMPL(__imp__sub_832FE474) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832FE478"))) PPC_WEAK_FUNC(sub_832FE478);
PPC_FUNC_IMPL(__imp__sub_832FE478) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x833a01ac
	ctx.lr = 0x832FE480;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r29,-31823
	ctx.r29.s64 = -2085552128;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// lwz r3,10148(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 10148);
	// bl 0x832f40c0
	ctx.lr = 0x832FE498;
	sub_832F40C0(ctx, base);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne cr6,0x832fe4b4
	if (!ctx.cr6.eq) goto loc_832FE4B4;
	// lis r11,-32210
	ctx.r11.s64 = -2110914560;
	// addi r3,r11,-10768
	ctx.r3.s64 = ctx.r11.s64 + -10768;
loc_832FE4A8:
	// bl 0x832f8608
	ctx.lr = 0x832FE4AC;
	sub_832F8608(ctx, base);
	// li r31,-1
	ctx.r31.s64 = -1;
	// b 0x832fe4e8
	goto loc_832FE4E8;
loc_832FE4B4:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x832fe4cc
	if (!ctx.cr6.eq) goto loc_832FE4CC;
	// lis r11,-32210
	ctx.r11.s64 = -2110914560;
	// addi r3,r11,-10808
	ctx.r3.s64 = ctx.r11.s64 + -10808;
	// b 0x832fe4a8
	goto loc_832FE4A8;
loc_832FE4CC:
	// addis r11,r31,2
	ctx.r11.s64 = ctx.r31.s64 + 131072;
	// addi r11,r11,112
	ctx.r11.s64 = ctx.r11.s64 + 112;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmpw cr6,r10,r30
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r30.s32, ctx.xer);
	// beq cr6,0x832fe4e4
	if (ctx.cr6.eq) goto loc_832FE4E4;
	// stw r30,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r30.u32);
loc_832FE4E4:
	// li r31,0
	ctx.r31.s64 = 0;
loc_832FE4E8:
	// lwz r3,10148(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 10148);
	// bl 0x832f4158
	ctx.lr = 0x832FE4F0;
	sub_832F4158(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x833a01fc
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832FE4FC"))) PPC_WEAK_FUNC(sub_832FE4FC);
PPC_FUNC_IMPL(__imp__sub_832FE4FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832FE500"))) PPC_WEAK_FUNC(sub_832FE500);
PPC_FUNC_IMPL(__imp__sub_832FE500) {
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
	// stfd f31,-32(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -32, ctx.f31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r30,-31823
	ctx.r30.s64 = -2085552128;
	// fmr f31,f1
	ctx.f31.f64 = ctx.f1.f64;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r3,10148(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 10148);
	// bl 0x832f40c0
	ctx.lr = 0x832FE52C;
	sub_832F40C0(ctx, base);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne cr6,0x832fe548
	if (!ctx.cr6.eq) goto loc_832FE548;
	// lis r11,-32210
	ctx.r11.s64 = -2110914560;
	// addi r3,r11,-10688
	ctx.r3.s64 = ctx.r11.s64 + -10688;
loc_832FE53C:
	// bl 0x832f8608
	ctx.lr = 0x832FE540;
	sub_832F8608(ctx, base);
	// li r31,-1
	ctx.r31.s64 = -1;
	// b 0x832fe57c
	goto loc_832FE57C;
loc_832FE548:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x832fe560
	if (!ctx.cr6.eq) goto loc_832FE560;
	// lis r11,-32210
	ctx.r11.s64 = -2110914560;
	// addi r3,r11,-10728
	ctx.r3.s64 = ctx.r11.s64 + -10728;
	// b 0x832fe53c
	goto loc_832FE53C;
loc_832FE560:
	// addis r11,r31,2
	ctx.r11.s64 = ctx.r31.s64 + 131072;
	// addi r11,r11,116
	ctx.r11.s64 = ctx.r11.s64 + 116;
	// lfs f0,0(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f31
	ctx.cr6.compare(ctx.f0.f64, ctx.f31.f64);
	// beq cr6,0x832fe578
	if (ctx.cr6.eq) goto loc_832FE578;
	// stfs f31,0(r11)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r11.u32 + 0, temp.u32);
loc_832FE578:
	// li r31,0
	ctx.r31.s64 = 0;
loc_832FE57C:
	// lwz r3,10148(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 10148);
	// bl 0x832f4158
	ctx.lr = 0x832FE584;
	sub_832F4158(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// lfd f31,-32(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -32);
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_832FE5A4"))) PPC_WEAK_FUNC(sub_832FE5A4);
PPC_FUNC_IMPL(__imp__sub_832FE5A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832FE5A8"))) PPC_WEAK_FUNC(sub_832FE5A8);
PPC_FUNC_IMPL(__imp__sub_832FE5A8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x833a01a8
	ctx.lr = 0x832FE5B0;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r28,-31823
	ctx.r28.s64 = -2085552128;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// lwz r3,10148(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 10148);
	// bl 0x832f40c0
	ctx.lr = 0x832FE5C8;
	sub_832F40C0(ctx, base);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne cr6,0x832fe5dc
	if (!ctx.cr6.eq) goto loc_832FE5DC;
	// lis r11,-32210
	ctx.r11.s64 = -2110914560;
	// addi r3,r11,-10564
	ctx.r3.s64 = ctx.r11.s64 + -10564;
	// b 0x832fe620
	goto loc_832FE620;
loc_832FE5DC:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x832fe5f4
	if (!ctx.cr6.eq) goto loc_832FE5F4;
	// lis r11,-32210
	ctx.r11.s64 = -2110914560;
	// addi r3,r11,-10604
	ctx.r3.s64 = ctx.r11.s64 + -10604;
	// b 0x832fe620
	goto loc_832FE620;
loc_832FE5F4:
	// cmpwi cr6,r29,1
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 1, ctx.xer);
	// blt cr6,0x832fe618
	if (ctx.cr6.lt) goto loc_832FE618;
	// cmpwi cr6,r29,2
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 2, ctx.xer);
	// bgt cr6,0x832fe618
	if (ctx.cr6.gt) goto loc_832FE618;
	// lis r11,2
	ctx.r11.s64 = 131072;
	// li r30,0
	ctx.r30.s64 = 0;
	// ori r11,r11,96
	ctx.r11.u64 = ctx.r11.u64 | 96;
	// stwx r29,r31,r11
	PPC_STORE_U32(ctx.r31.u32 + ctx.r11.u32, ctx.r29.u32);
	// b 0x832fe628
	goto loc_832FE628;
loc_832FE618:
	// lis r11,-32210
	ctx.r11.s64 = -2110914560;
	// addi r3,r11,-10648
	ctx.r3.s64 = ctx.r11.s64 + -10648;
loc_832FE620:
	// bl 0x832f8608
	ctx.lr = 0x832FE624;
	sub_832F8608(ctx, base);
	// li r30,-1
	ctx.r30.s64 = -1;
loc_832FE628:
	// lwz r3,10148(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 10148);
	// bl 0x832f4158
	ctx.lr = 0x832FE630;
	sub_832F4158(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x833a01f8
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832FE63C"))) PPC_WEAK_FUNC(sub_832FE63C);
PPC_FUNC_IMPL(__imp__sub_832FE63C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832FE640"))) PPC_WEAK_FUNC(sub_832FE640);
PPC_FUNC_IMPL(__imp__sub_832FE640) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x833a01a8
	ctx.lr = 0x832FE648;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r28,-31823
	ctx.r28.s64 = -2085552128;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// lwz r3,10148(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 10148);
	// bl 0x832f40c0
	ctx.lr = 0x832FE660;
	sub_832F40C0(ctx, base);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne cr6,0x832fe67c
	if (!ctx.cr6.eq) goto loc_832FE67C;
	// lis r11,-32210
	ctx.r11.s64 = -2110914560;
	// addi r3,r11,-10688
	ctx.r3.s64 = ctx.r11.s64 + -10688;
loc_832FE670:
	// bl 0x832f8608
	ctx.lr = 0x832FE674;
	sub_832F8608(ctx, base);
	// li r30,-1
	ctx.r30.s64 = -1;
	// b 0x832fe6b4
	goto loc_832FE6B4;
loc_832FE67C:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x832fe694
	if (!ctx.cr6.eq) goto loc_832FE694;
	// lis r11,-32210
	ctx.r11.s64 = -2110914560;
	// addi r3,r11,-10728
	ctx.r3.s64 = ctx.r11.s64 + -10728;
	// b 0x832fe670
	goto loc_832FE670;
loc_832FE694:
	// lis r11,2
	ctx.r11.s64 = 131072;
	// lis r10,2
	ctx.r10.s64 = 131072;
	// ori r11,r11,104
	ctx.r11.u64 = ctx.r11.u64 | 104;
	// ori r10,r10,80
	ctx.r10.u64 = ctx.r10.u64 | 80;
	// li r30,0
	ctx.r30.s64 = 0;
	// lwax r11,r31,r11
	ctx.r11.s64 = int32_t(PPC_LOAD_U32(ctx.r31.u32 + ctx.r11.u32));
	// divd r11,r29,r11
	ctx.r11.s64 = ctx.r29.s64 / ctx.r11.s64;
	// stdx r11,r31,r10
	PPC_STORE_U64(ctx.r31.u32 + ctx.r10.u32, ctx.r11.u64);
loc_832FE6B4:
	// lwz r3,10148(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 10148);
	// bl 0x832f4158
	ctx.lr = 0x832FE6BC;
	sub_832F4158(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x833a01f8
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832FE6C8"))) PPC_WEAK_FUNC(sub_832FE6C8);
PPC_FUNC_IMPL(__imp__sub_832FE6C8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x833a01a4
	ctx.lr = 0x832FE6D0;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r27,-31823
	ctx.r27.s64 = -2085552128;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// mr r28,r6
	ctx.r28.u64 = ctx.r6.u64;
	// lwz r3,10148(r27)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r27.u32 + 10148);
	// bl 0x832f40c0
	ctx.lr = 0x832FE6F0;
	sub_832F40C0(ctx, base);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x832fe7b8
	if (ctx.cr6.eq) goto loc_832FE7B8;
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x832fe7b8
	if (ctx.cr6.eq) goto loc_832FE7B8;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x832fe718
	if (!ctx.cr6.eq) goto loc_832FE718;
	// lis r11,-32210
	ctx.r11.s64 = -2110914560;
	// addi r3,r11,-10424
	ctx.r3.s64 = ctx.r11.s64 + -10424;
	// b 0x832fe7c0
	goto loc_832FE7C0;
loc_832FE718:
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// beq cr6,0x832fe7ac
	if (ctx.cr6.eq) goto loc_832FE7AC;
	// cmpwi cr6,r30,2
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 2, ctx.xer);
	// bgt cr6,0x832fe7ac
	if (ctx.cr6.gt) goto loc_832FE7AC;
	// li r11,0
	ctx.r11.s64 = 0;
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// ble cr6,0x832fe75c
	if (!ctx.cr6.gt) goto loc_832FE75C;
	// addis r9,r31,2
	ctx.r9.s64 = ctx.r31.s64 + 131072;
	// mtctr r30
	ctx.ctr.u64 = ctx.r30.u64;
	// addi r10,r29,-4
	ctx.r10.s64 = ctx.r29.s64 + -4;
	// addi r9,r9,84
	ctx.r9.s64 = ctx.r9.s64 + 84;
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
loc_832FE748:
	// lwzu r8,4(r10)
	ea = 4 + ctx.r10.u32;
	ctx.r8.u64 = PPC_LOAD_U32(ea);
	ctx.r10.u32 = ea;
	// stwu r8,4(r9)
	ea = 4 + ctx.r9.u32;
	PPC_STORE_U32(ea, ctx.r8.u32);
	ctx.r9.u32 = ea;
	// bdnz 0x832fe748
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_832FE748;
	// cmpwi cr6,r30,2
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 2, ctx.xer);
	// bge cr6,0x832fe78c
	if (!ctx.cr6.lt) goto loc_832FE78C;
loc_832FE75C:
	// addis r9,r11,1
	ctx.r9.s64 = ctx.r11.s64 + 65536;
	// subfic r10,r11,2
	ctx.xer.ca = ctx.r11.u32 <= 2;
	ctx.r10.s64 = 2 - ctx.r11.s64;
	// addi r9,r9,-32746
	ctx.r9.s64 = ctx.r9.s64 + -32746;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// rlwinm r11,r9,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// li r9,0
	ctx.r9.s64 = 0;
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// addi r11,r11,-4
	ctx.r11.s64 = ctx.r11.s64 + -4;
	// beq cr6,0x832fe78c
	if (ctx.cr6.eq) goto loc_832FE78C;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_832FE784:
	// stwu r9,4(r11)
	ea = 4 + ctx.r11.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x832fe784
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_832FE784;
loc_832FE78C:
	// lis r11,2
	ctx.r11.s64 = 131072;
	// lis r10,2
	ctx.r10.s64 = 131072;
	// ori r11,r11,96
	ctx.r11.u64 = ctx.r11.u64 | 96;
	// ori r10,r10,100
	ctx.r10.u64 = ctx.r10.u64 | 100;
	// li r29,0
	ctx.r29.s64 = 0;
	// stwx r30,r31,r11
	PPC_STORE_U32(ctx.r31.u32 + ctx.r11.u32, ctx.r30.u32);
	// stwx r28,r31,r10
	PPC_STORE_U32(ctx.r31.u32 + ctx.r10.u32, ctx.r28.u32);
	// b 0x832fe7c8
	goto loc_832FE7C8;
loc_832FE7AC:
	// lis r11,-32210
	ctx.r11.s64 = -2110914560;
	// addi r3,r11,-10480
	ctx.r3.s64 = ctx.r11.s64 + -10480;
	// b 0x832fe7c0
	goto loc_832FE7C0;
loc_832FE7B8:
	// lis r11,-32210
	ctx.r11.s64 = -2110914560;
	// addi r3,r11,-10520
	ctx.r3.s64 = ctx.r11.s64 + -10520;
loc_832FE7C0:
	// bl 0x832f8608
	ctx.lr = 0x832FE7C4;
	sub_832F8608(ctx, base);
	// li r29,-1
	ctx.r29.s64 = -1;
loc_832FE7C8:
	// lwz r3,10148(r27)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r27.u32 + 10148);
	// bl 0x832f4158
	ctx.lr = 0x832FE7D0;
	sub_832F4158(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x833a01f4
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832FE7DC"))) PPC_WEAK_FUNC(sub_832FE7DC);
PPC_FUNC_IMPL(__imp__sub_832FE7DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832FE7E0"))) PPC_WEAK_FUNC(sub_832FE7E0);
PPC_FUNC_IMPL(__imp__sub_832FE7E0) {
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
	// beq cr6,0x832fe830
	if (ctx.cr6.eq) goto loc_832FE830;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x832FE810;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,88(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// cmplwi cr6,r11,6
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 6, ctx.xer);
	// ble cr6,0x832fe830
	if (!ctx.cr6.gt) goto loc_832FE830;
	// lis r11,-32210
	ctx.r11.s64 = -2110914560;
	// addi r3,r11,-10384
	ctx.r3.s64 = ctx.r11.s64 + -10384;
	// bl 0x832f8608
	ctx.lr = 0x832FE828;
	sub_832F8608(ctx, base);
	// li r3,-1
	ctx.r3.s64 = -1;
	// b 0x832fe83c
	goto loc_832FE83C;
loc_832FE830:
	// lis r11,-31823
	ctx.r11.s64 = -2085552128;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r31,10144(r11)
	PPC_STORE_U32(ctx.r11.u32 + 10144, ctx.r31.u32);
loc_832FE83C:
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

__attribute__((alias("__imp__sub_832FE850"))) PPC_WEAK_FUNC(sub_832FE850);
PPC_FUNC_IMPL(__imp__sub_832FE850) {
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
	// lis r30,-31823
	ctx.r30.s64 = -2085552128;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r3,10148(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 10148);
	// bl 0x832f40c0
	ctx.lr = 0x832FE874;
	sub_832F40C0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x832fdc00
	ctx.lr = 0x832FE87C;
	sub_832FDC00(ctx, base);
	// lwz r11,10148(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 10148);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// bl 0x832f4158
	ctx.lr = 0x832FE88C;
	sub_832F4158(ctx, base);
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

__attribute__((alias("__imp__sub_832FE8A8"))) PPC_WEAK_FUNC(sub_832FE8A8);
PPC_FUNC_IMPL(__imp__sub_832FE8A8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x833a01ac
	ctx.lr = 0x832FE8B0;
	__savegprlr_29(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x832fcca0
	ctx.lr = 0x832FE8BC;
	sub_832FCCA0(ctx, base);
	// addis r29,r31,2
	ctx.r29.s64 = ctx.r31.s64 + 131072;
	// addi r29,r29,248
	ctx.r29.s64 = ctx.r29.s64 + 248;
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x832fe9f0
	if (!ctx.cr6.eq) goto loc_832FE9F0;
	// lis r11,2
	ctx.r11.s64 = 131072;
	// addis r30,r31,2
	ctx.r30.s64 = ctx.r31.s64 + 131072;
	// ori r11,r11,112
	ctx.r11.u64 = ctx.r11.u64 | 112;
	// addi r30,r30,56
	ctx.r30.s64 = ctx.r30.s64 + 56;
	// lwzx r11,r31,r11
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r11.u32);
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// bne cr6,0x832fe910
	if (!ctx.cr6.eq) goto loc_832FE910;
	// lis r11,2
	ctx.r11.s64 = 131072;
	// lis r10,2
	ctx.r10.s64 = 131072;
	// ori r11,r11,116
	ctx.r11.u64 = ctx.r11.u64 | 116;
	// ori r10,r10,60
	ctx.r10.u64 = ctx.r10.u64 | 60;
	// lfsx f0,r31,r11
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r11.u32);
	ctx.f0.f64 = double(temp.f32);
	// lfsx f13,r31,r10
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r10.u32);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// beq cr6,0x832fe918
	if (ctx.cr6.eq) goto loc_832FE918;
loc_832FE910:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x832fcd40
	ctx.lr = 0x832FE918;
	sub_832FCD40(ctx, base);
loc_832FE918:
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x832fce00
	ctx.lr = 0x832FE924;
	sub_832FCE00(ctx, base);
	// lis r11,2
	ctx.r11.s64 = 131072;
	// lwz r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// ori r11,r11,252
	ctx.r11.u64 = ctx.r11.u64 | 252;
	// lwzx r11,r31,r11
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r11.u32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x832fe974
	if (!ctx.cr6.eq) goto loc_832FE974;
	// lis r11,2
	ctx.r11.s64 = 131072;
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// li r9,15
	ctx.r9.s64 = 15;
	// ori r8,r11,100
	ctx.r8.u64 = ctx.r11.u64 | 100;
	// divw r11,r10,r9
	ctx.r11.s32 = ctx.r10.s32 / ctx.r9.s32;
	// rlwinm r11,r11,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// lwzx r10,r31,r8
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r8.u32);
	// srawi r10,r10,1
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x1) != 0);
	ctx.r10.s64 = ctx.r10.s32 >> 1;
	// addze r10,r10
	temp.s64 = ctx.r10.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r10.u32;
	ctx.r10.s64 = temp.s64;
	// cmpw cr6,r10,r11
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r11.s32, ctx.xer);
	// bge cr6,0x832fe96c
	if (!ctx.cr6.lt) goto loc_832FE96C;
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
loc_832FE96C:
	// cmpw cr6,r4,r11
	ctx.cr6.compare<int32_t>(ctx.r4.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x832fe9f0
	if (ctx.cr6.lt) goto loc_832FE9F0;
loc_832FE974:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x832fe028
	ctx.lr = 0x832FE97C;
	sub_832FE028(ctx, base);
	// addis r30,r31,2
	ctx.r30.s64 = ctx.r31.s64 + 131072;
	// li r5,256
	ctx.r5.s64 = 256;
	// addi r30,r30,8
	ctx.r30.s64 = ctx.r30.s64 + 8;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,100(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 100);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x832FE9A0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x832fe9e8
	if (!ctx.cr6.eq) goto loc_832FE9E8;
	// lwz r11,100(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x832fe9e8
	if (ctx.cr6.eq) goto loc_832FE9E8;
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lis r11,-31844
	ctx.r11.s64 = -2086928384;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r5,-29196(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + -29196);
	// lwz r11,76(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 76);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x832FE9D8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r11,2
	ctx.r11.s64 = 131072;
	// li r10,1
	ctx.r10.s64 = 1;
	// ori r11,r11,48
	ctx.r11.u64 = ctx.r11.u64 | 48;
	// stwx r10,r31,r11
	PPC_STORE_U32(ctx.r31.u32 + ctx.r11.u32, ctx.r10.u32);
loc_832FE9E8:
	// li r11,2
	ctx.r11.s64 = 2;
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
loc_832FE9F0:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x833a01fc
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832FE9FC"))) PPC_WEAK_FUNC(sub_832FE9FC);
PPC_FUNC_IMPL(__imp__sub_832FE9FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832FEA00"))) PPC_WEAK_FUNC(sub_832FEA00);
PPC_FUNC_IMPL(__imp__sub_832FEA00) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x833a01a0
	ctx.lr = 0x832FEA08;
	__savegprlr_26(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x832fce00
	ctx.lr = 0x832FEA18;
	sub_832FCE00(ctx, base);
	// lwz r26,80(r1)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmpwi cr6,r26,0
	ctx.cr6.compare<int32_t>(ctx.r26.s32, 0, ctx.xer);
	// ble cr6,0x832fea30
	if (!ctx.cr6.gt) goto loc_832FEA30;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x832fe028
	ctx.lr = 0x832FEA30;
	sub_832FE028(ctx, base);
loc_832FEA30:
	// addis r30,r31,2
	ctx.r30.s64 = ctx.r31.s64 + 131072;
	// lis r11,2
	ctx.r11.s64 = 131072;
	// addi r30,r30,48
	ctx.r30.s64 = ctx.r30.s64 + 48;
	// ori r28,r11,8
	ctx.r28.u64 = ctx.r11.u64 | 8;
	// li r27,0
	ctx.r27.s64 = 0;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x832feabc
	if (!ctx.cr6.eq) goto loc_832FEABC;
	// lwzx r3,r31,r28
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r28.u32);
	// li r5,256
	ctx.r5.s64 = 256;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// add r29,r31,r28
	ctx.r29.u64 = ctx.r31.u64 + ctx.r28.u64;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,100(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 100);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x832FEA70;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r11,2
	ctx.r11.s64 = 131072;
	// ori r11,r11,248
	ctx.r11.u64 = ctx.r11.u64 | 248;
	// lwzx r11,r31,r11
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r11.u32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x832feaf4
	if (!ctx.cr6.eq) goto loc_832FEAF4;
	// lwz r11,100(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x832feaf4
	if (ctx.cr6.eq) goto loc_832FEAF4;
	// lwz r3,0(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// lis r11,-31844
	ctx.r11.s64 = -2086928384;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r5,-29196(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + -29196);
	// lwz r11,76(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 76);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x832FEAB0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
	// b 0x832feaf4
	goto loc_832FEAF4;
loc_832FEABC:
	// lis r11,2
	ctx.r11.s64 = 131072;
	// ori r11,r11,248
	ctx.r11.u64 = ctx.r11.u64 | 248;
	// lwzx r11,r31,r11
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r11.u32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x832feaf4
	if (ctx.cr6.eq) goto loc_832FEAF4;
	// lwzx r3,r31,r28
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r28.u32);
	// lis r11,-31844
	ctx.r11.s64 = -2086928384;
	// li r4,32
	ctx.r4.s64 = 32;
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r5,-29196(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + -29196);
	// lwz r11,80(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 80);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x832FEAF0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r27,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r27.u32);
loc_832FEAF4:
	// lis r11,2
	ctx.r11.s64 = 131072;
	// lis r10,2
	ctx.r10.s64 = 131072;
	// ori r11,r11,112
	ctx.r11.u64 = ctx.r11.u64 | 112;
	// ori r10,r10,56
	ctx.r10.u64 = ctx.r10.u64 | 56;
	// lwzx r11,r31,r11
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r11.u32);
	// lwzx r10,r31,r10
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r10.u32);
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// bne cr6,0x832feb34
	if (!ctx.cr6.eq) goto loc_832FEB34;
	// lis r11,2
	ctx.r11.s64 = 131072;
	// lis r10,2
	ctx.r10.s64 = 131072;
	// ori r11,r11,116
	ctx.r11.u64 = ctx.r11.u64 | 116;
	// ori r10,r10,60
	ctx.r10.u64 = ctx.r10.u64 | 60;
	// lfsx f0,r31,r11
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r11.u32);
	ctx.f0.f64 = double(temp.f32);
	// lfsx f13,r31,r10
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r10.u32);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// beq cr6,0x832feb3c
	if (ctx.cr6.eq) goto loc_832FEB3C;
loc_832FEB34:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x832fcd40
	ctx.lr = 0x832FEB3C;
	sub_832FCD40(ctx, base);
loc_832FEB3C:
	// addis r30,r31,2
	ctx.r30.s64 = ctx.r31.s64 + 131072;
	// addi r30,r30,252
	ctx.r30.s64 = ctx.r30.s64 + 252;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x832feba8
	if (ctx.cr6.eq) goto loc_832FEBA8;
	// cmpwi cr6,r26,0
	ctx.cr6.compare<int32_t>(ctx.r26.s32, 0, ctx.xer);
	// bgt cr6,0x832feba8
	if (ctx.cr6.gt) goto loc_832FEBA8;
	// lis r11,2
	ctx.r11.s64 = 131072;
	// ori r11,r11,52
	ctx.r11.u64 = ctx.r11.u64 | 52;
	// lwzx r11,r31,r11
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r11.u32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x832feb74
	if (!ctx.cr6.eq) goto loc_832FEB74;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x832fd530
	ctx.lr = 0x832FEB74;
	sub_832FD530(ctx, base);
loc_832FEB74:
	// lwzx r3,r31,r28
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r28.u32);
	// li r5,256
	ctx.r5.s64 = 256;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,100(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 100);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x832FEB90;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,100(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x832feba8
	if (!ctx.cr6.eq) goto loc_832FEBA8;
	// li r11,3
	ctx.r11.s64 = 3;
	// stw r27,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r27.u32);
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
loc_832FEBA8:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x833a01f0
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832FEBB4"))) PPC_WEAK_FUNC(sub_832FEBB4);
PPC_FUNC_IMPL(__imp__sub_832FEBB4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832FEBB8"))) PPC_WEAK_FUNC(sub_832FEBB8);
PPC_FUNC_IMPL(__imp__sub_832FEBB8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x833a01a8
	ctx.lr = 0x832FEBC0;
	__savegprlr_28(ctx, base);
	// stfd f31,-48(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -48, ctx.f31.u64);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r28,-31823
	ctx.r28.s64 = -2085552128;
	// fmr f31,f1
	ctx.f31.f64 = ctx.f1.f64;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// lwz r3,10148(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 10148);
	// bl 0x832f40c0
	ctx.lr = 0x832FEBE4;
	sub_832F40C0(ctx, base);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne cr6,0x832febf8
	if (!ctx.cr6.eq) goto loc_832FEBF8;
	// lis r11,-32210
	ctx.r11.s64 = -2110914560;
	// addi r3,r11,-10176
	ctx.r3.s64 = ctx.r11.s64 + -10176;
	// b 0x832feca8
	goto loc_832FECA8;
loc_832FEBF8:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x832fec10
	if (!ctx.cr6.eq) goto loc_832FEC10;
	// lis r11,-32210
	ctx.r11.s64 = -2110914560;
	// addi r3,r11,-10216
	ctx.r3.s64 = ctx.r11.s64 + -10216;
	// b 0x832feca8
	goto loc_832FECA8;
loc_832FEC10:
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// blt cr6,0x832feca0
	if (ctx.cr6.lt) goto loc_832FECA0;
	// cmpwi cr6,r30,2
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 2, ctx.xer);
	// bgt cr6,0x832feca0
	if (ctx.cr6.gt) goto loc_832FECA0;
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// blt cr6,0x832feca0
	if (ctx.cr6.lt) goto loc_832FECA0;
	// cmpwi cr6,r29,6
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 6, ctx.xer);
	// bgt cr6,0x832feca0
	if (ctx.cr6.gt) goto loc_832FECA0;
	// lis r11,-32210
	ctx.r11.s64 = -2110914560;
	// lfs f0,-11828(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -11828);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f31,f0
	ctx.cr6.compare(ctx.f31.f64, ctx.f0.f64);
	// bgt cr6,0x832fec4c
	if (ctx.cr6.gt) goto loc_832FEC4C;
	// lis r11,-32230
	ctx.r11.s64 = -2112225280;
	// lfs f0,24284(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 24284);
	ctx.f0.f64 = double(temp.f32);
	// b 0x832fec68
	goto loc_832FEC68;
loc_832FEC4C:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// lfs f0,4796(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 4796);
	ctx.f0.f64 = double(temp.f32);
	// lfd f1,-8128(r10)
	ctx.f1.u64 = PPC_LOAD_U64(ctx.r10.u32 + -8128);
	// fmuls f2,f31,f0
	ctx.f2.f64 = double(float(ctx.f31.f64 * ctx.f0.f64));
	// bl 0x833a0678
	ctx.lr = 0x832FEC64;
	sub_833A0678(ctx, base);
	// frsp f0,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f1.f64));
loc_832FEC68:
	// mulli r11,r30,6
	ctx.r11.s64 = ctx.r30.s64 * 6;
	// add r11,r11,r29
	ctx.r11.u64 = ctx.r11.u64 + ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addis r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 65536;
	// addi r11,r11,-32736
	ctx.r11.s64 = ctx.r11.s64 + -32736;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// stfsx f0,r11,r31
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + ctx.r31.u32, temp.u32);
	// bl 0x832fd698
	ctx.lr = 0x832FEC88;
	sub_832FD698(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x832fd768
	ctx.lr = 0x832FEC90;
	sub_832FD768(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x832fce98
	ctx.lr = 0x832FEC98;
	sub_832FCE98(ctx, base);
	// li r31,0
	ctx.r31.s64 = 0;
	// b 0x832fecb0
	goto loc_832FECB0;
loc_832FECA0:
	// lis r11,-32210
	ctx.r11.s64 = -2110914560;
	// addi r3,r11,-10260
	ctx.r3.s64 = ctx.r11.s64 + -10260;
loc_832FECA8:
	// bl 0x832f8608
	ctx.lr = 0x832FECAC;
	sub_832F8608(ctx, base);
	// li r31,-1
	ctx.r31.s64 = -1;
loc_832FECB0:
	// lwz r3,10148(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 10148);
	// bl 0x832f4158
	ctx.lr = 0x832FECB8;
	sub_832F4158(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lfd f31,-48(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -48);
	// b 0x833a01f8
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832FECC8"))) PPC_WEAK_FUNC(sub_832FECC8);
PPC_FUNC_IMPL(__imp__sub_832FECC8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x833a0194
	ctx.lr = 0x832FECD0;
	__savegprlr_23(ctx, base);
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r23,r3
	ctx.r23.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x832fecf4
	if (!ctx.cr6.eq) goto loc_832FECF4;
	// lis r11,-32210
	ctx.r11.s64 = -2110914560;
	// addi r3,r11,-10032
	ctx.r3.s64 = ctx.r11.s64 + -10032;
loc_832FECE8:
	// bl 0x832f8608
	ctx.lr = 0x832FECEC;
	sub_832F8608(ctx, base);
	// li r3,-1
	ctx.r3.s64 = -1;
	// b 0x832ff000
	goto loc_832FF000;
loc_832FECF4:
	// lis r11,-31823
	ctx.r11.s64 = -2085552128;
	// li r29,0
	ctx.r29.s64 = 0;
	// addi r30,r11,10160
	ctx.r30.s64 = ctx.r11.s64 + 10160;
	// stw r29,0(r23)
	PPC_STORE_U32(ctx.r23.u32 + 0, ctx.r29.u32);
	// lwz r11,10160(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 10160);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x832fed40
	if (!ctx.cr6.eq) goto loc_832FED40;
	// lwz r3,-8(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + -8);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x832fed2c
	if (!ctx.cr6.eq) goto loc_832FED2C;
	// bl 0x82da4698
	ctx.lr = 0x832FED20;
	sub_82DA4698(ctx, base);
	// stw r3,-8(r30)
	PPC_STORE_U32(ctx.r30.u32 + -8, ctx.r3.u32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x832fed64
	if (ctx.cr0.eq) goto loc_832FED64;
loc_832FED2C:
	// lis r5,2
	ctx.r5.s64 = 131072;
	// li r4,8
	ctx.r4.s64 = 8;
	// ori r5,r5,304
	ctx.r5.u64 = ctx.r5.u64 | 304;
	// bl 0x82da31c8
	ctx.lr = 0x832FED3C;
	sub_82DA31C8(ctx, base);
	// b 0x832fed58
	goto loc_832FED58;
loc_832FED40:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lis r4,2
	ctx.r4.s64 = 131072;
	// lwz r3,4(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// ori r4,r4,304
	ctx.r4.u64 = ctx.r4.u64 | 304;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x832FED58;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_832FED58:
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x832fed70
	if (!ctx.cr6.eq) goto loc_832FED70;
loc_832FED64:
	// lis r11,-32210
	ctx.r11.s64 = -2110914560;
	// addi r3,r11,-10072
	ctx.r3.s64 = ctx.r11.s64 + -10072;
	// b 0x832fece8
	goto loc_832FECE8;
loc_832FED70:
	// lis r5,2
	ctx.r5.s64 = 131072;
	// li r4,0
	ctx.r4.s64 = 0;
	// ori r5,r5,304
	ctx.r5.u64 = ctx.r5.u64 | 304;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x833a2b30
	ctx.lr = 0x832FED84;
	sub_833A2B30(ctx, base);
	// lwz r3,-24(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + -24);
	// lis r11,2
	ctx.r11.s64 = 131072;
	// lis r10,0
	ctx.r10.s64 = 0;
	// ori r27,r11,8
	ctx.r27.u64 = ctx.r11.u64 | 8;
	// li r26,1
	ctx.r26.s64 = 1;
	// li r24,2
	ctx.r24.s64 = 2;
	// li r25,16
	ctx.r25.s64 = 16;
	// ori r28,r10,48000
	ctx.r28.u64 = ctx.r10.u64 | 48000;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x832feefc
	if (ctx.cr6.eq) goto loc_832FEEFC;
	// addi r11,r1,96
	ctx.r11.s64 = ctx.r1.s64 + 96;
	// lwz r9,-16(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + -16);
	// lis r10,2
	ctx.r10.s64 = 131072;
	// li r8,18
	ctx.r8.s64 = 18;
	// ori r10,r10,60928
	ctx.r10.u64 = ctx.r10.u64 | 60928;
	// li r7,4
	ctx.r7.s64 = 4;
	// stw r29,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r29.u32);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// stw r29,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r29.u32);
	// stw r29,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r29.u32);
	// stw r29,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r29.u32);
	// sth r29,16(r11)
	PPC_STORE_U16(ctx.r11.u32 + 16, ctx.r29.u16);
	// addis r11,r31,2
	ctx.r11.s64 = ctx.r31.s64 + 131072;
	// stw r10,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r10.u32);
	// addis r10,r31,2
	ctx.r10.s64 = ctx.r31.s64 + 131072;
	// sth r8,112(r1)
	PPC_STORE_U16(ctx.r1.u32 + 112, ctx.r8.u16);
	// addi r11,r11,44
	ctx.r11.s64 = ctx.r11.s64 + 44;
	// sth r26,96(r1)
	PPC_STORE_U16(ctx.r1.u32 + 96, ctx.r26.u16);
	// addi r10,r10,12
	ctx.r10.s64 = ctx.r10.s64 + 12;
	// sth r24,98(r1)
	PPC_STORE_U16(ctx.r1.u32 + 98, ctx.r24.u16);
	// sth r25,110(r1)
	PPC_STORE_U16(ctx.r1.u32 + 110, ctx.r25.u16);
	// stw r28,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r28.u32);
	// sth r7,108(r1)
	PPC_STORE_U16(ctx.r1.u32 + 108, ctx.r7.u16);
	// beq cr6,0x832fee18
	if (ctx.cr6.eq) goto loc_832FEE18;
	// stw r9,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
	// stw r26,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r26.u32);
	// b 0x832fee20
	goto loc_832FEE20;
loc_832FEE18:
	// stw r29,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r29.u32);
	// stw r29,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r29.u32);
loc_832FEE20:
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// ble cr6,0x832feefc
	if (!ctx.cr6.gt) goto loc_832FEEFC;
	// stw r29,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r29.u32);
	// addi r8,r1,80
	ctx.r8.s64 = ctx.r1.s64 + 80;
	// lwz r10,0(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// lis r9,-32245
	ctx.r9.s64 = -2113208320;
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lfs f1,8960(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 8960);
	ctx.f1.f64 = double(temp.f32);
	// stw r8,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// addi r9,r1,88
	ctx.r9.s64 = ctx.r1.s64 + 88;
	// stw r11,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r11.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// add r4,r31,r27
	ctx.r4.u64 = ctx.r31.u64 + ctx.r27.u64;
	// lwz r6,-20(r30)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r30.u32 + -20);
	// lwz r11,32(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x832FEE78;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr. r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// bge 0x832feea4
	if (!ctx.cr0.lt) goto loc_832FEEA4;
	// lis r11,-31823
	ctx.r11.s64 = -2085552128;
	// lis r10,-32210
	ctx.r10.s64 = -2110914560;
	// addi r31,r11,9840
	ctx.r31.s64 = ctx.r11.s64 + 9840;
	// addi r5,r10,-10136
	ctx.r5.s64 = ctx.r10.s64 + -10136;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r4,256
	ctx.r4.s64 = 256;
	// bl 0x832ff9a8
	ctx.lr = 0x832FEE9C;
	sub_832FF9A8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// b 0x832fece8
	goto loc_832FECE8;
loc_832FEEA4:
	// addis r3,r31,2
	ctx.r3.s64 = ctx.r31.s64 + 131072;
	// li r5,48
	ctx.r5.s64 = 48;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r3,128
	ctx.r3.s64 = ctx.r3.s64 + 128;
	// bl 0x833a2b30
	ctx.lr = 0x832FEEB8;
	sub_833A2B30(ctx, base);
	// addis r3,r31,2
	ctx.r3.s64 = ctx.r31.s64 + 131072;
	// li r5,16
	ctx.r5.s64 = 16;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r3,176
	ctx.r3.s64 = ctx.r3.s64 + 176;
	// bl 0x833a2b30
	ctx.lr = 0x832FEECC;
	sub_833A2B30(ctx, base);
	// addis r3,r31,2
	ctx.r3.s64 = ctx.r31.s64 + 131072;
	// li r5,8
	ctx.r5.s64 = 8;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r3,192
	ctx.r3.s64 = ctx.r3.s64 + 192;
	// bl 0x833a2b30
	ctx.lr = 0x832FEEE0;
	sub_833A2B30(ctx, base);
	// addis r3,r31,2
	ctx.r3.s64 = ctx.r31.s64 + 131072;
	// li r5,48
	ctx.r5.s64 = 48;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r3,200
	ctx.r3.s64 = ctx.r3.s64 + 200;
	// bl 0x833a2b30
	ctx.lr = 0x832FEEF4;
	sub_833A2B30(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x832fce98
	ctx.lr = 0x832FEEFC;
	sub_832FCE98(ctx, base);
loc_832FEEFC:
	// lwzx r11,r31,r27
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r27.u32);
	// lis r10,2
	ctx.r10.s64 = 131072;
	// lis r9,2
	ctx.r9.s64 = 131072;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// lis r11,2
	ctx.r11.s64 = 131072;
	// lis r8,2
	ctx.r8.s64 = 131072;
	// ori r11,r11,288
	ctx.r11.u64 = ctx.r11.u64 | 288;
	// ori r10,r10,292
	ctx.r10.u64 = ctx.r10.u64 | 292;
	// ori r9,r9,296
	ctx.r9.u64 = ctx.r9.u64 | 296;
	// ori r8,r8,300
	ctx.r8.u64 = ctx.r8.u64 | 300;
	// beq cr6,0x832fef50
	if (ctx.cr6.eq) goto loc_832FEF50;
	// lis r7,-31952
	ctx.r7.s64 = -2094006272;
	// lis r6,-31952
	ctx.r6.s64 = -2094006272;
	// addi r7,r7,-13152
	ctx.r7.s64 = ctx.r7.s64 + -13152;
	// lis r5,-31952
	ctx.r5.s64 = -2094006272;
	// lis r4,-32041
	ctx.r4.s64 = -2099838976;
	// stwx r7,r31,r11
	PPC_STORE_U32(ctx.r31.u32 + ctx.r11.u32, ctx.r7.u32);
	// addi r6,r6,-5976
	ctx.r6.s64 = ctx.r6.s64 + -5976;
	// addi r5,r5,-5632
	ctx.r5.s64 = ctx.r5.s64 + -5632;
	// addi r11,r4,-9592
	ctx.r11.s64 = ctx.r4.s64 + -9592;
	// b 0x832fef74
	goto loc_832FEF74;
loc_832FEF50:
	// lis r7,-32041
	ctx.r7.s64 = -2099838976;
	// lis r6,-31952
	ctx.r6.s64 = -2094006272;
	// addi r7,r7,-9592
	ctx.r7.s64 = ctx.r7.s64 + -9592;
	// lis r5,-31952
	ctx.r5.s64 = -2094006272;
	// lis r4,-32041
	ctx.r4.s64 = -2099838976;
	// stwx r7,r31,r11
	PPC_STORE_U32(ctx.r31.u32 + ctx.r11.u32, ctx.r7.u32);
	// addi r6,r6,-10000
	ctx.r6.s64 = ctx.r6.s64 + -10000;
	// addi r5,r5,-9696
	ctx.r5.s64 = ctx.r5.s64 + -9696;
	// addi r11,r4,-9592
	ctx.r11.s64 = ctx.r4.s64 + -9592;
loc_832FEF74:
	// stwx r5,r31,r9
	PPC_STORE_U32(ctx.r31.u32 + ctx.r9.u32, ctx.r5.u32);
	// lis r9,2
	ctx.r9.s64 = 131072;
	// stwx r6,r31,r10
	PPC_STORE_U32(ctx.r31.u32 + ctx.r10.u32, ctx.r6.u32);
	// lis r10,2
	ctx.r10.s64 = 131072;
	// stwx r11,r31,r8
	PPC_STORE_U32(ctx.r31.u32 + ctx.r8.u32, ctx.r11.u32);
	// ori r9,r9,56
	ctx.r9.u64 = ctx.r9.u64 | 56;
	// ori r10,r10,96
	ctx.r10.u64 = ctx.r10.u64 | 96;
	// stw r26,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r26.u32);
	// lis r8,2
	ctx.r8.s64 = 131072;
	// lis r11,2
	ctx.r11.s64 = 131072;
	// ori r8,r8,112
	ctx.r8.u64 = ctx.r8.u64 | 112;
	// lis r7,2
	ctx.r7.s64 = 131072;
	// stwx r28,r31,r9
	PPC_STORE_U32(ctx.r31.u32 + ctx.r9.u32, ctx.r28.u32);
	// lis r6,2
	ctx.r6.s64 = 131072;
	// stwx r24,r31,r10
	PPC_STORE_U32(ctx.r31.u32 + ctx.r10.u32, ctx.r24.u32);
	// lis r5,2
	ctx.r5.s64 = 131072;
	// lis r4,2
	ctx.r4.s64 = 131072;
	// lis r3,-32245
	ctx.r3.s64 = -2113208320;
	// stwx r28,r31,r8
	PPC_STORE_U32(ctx.r31.u32 + ctx.r8.u32, ctx.r28.u32);
	// ori r11,r11,80
	ctx.r11.u64 = ctx.r11.u64 | 80;
	// ori r7,r7,60
	ctx.r7.u64 = ctx.r7.u64 | 60;
	// ori r6,r6,116
	ctx.r6.u64 = ctx.r6.u64 | 116;
	// ori r5,r5,64
	ctx.r5.u64 = ctx.r5.u64 | 64;
	// ori r10,r4,104
	ctx.r10.u64 = ctx.r4.u64 | 104;
	// lfs f0,12452(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 12452);
	ctx.f0.f64 = double(temp.f32);
	// li r9,-1
	ctx.r9.s64 = -1;
	// li r8,512
	ctx.r8.s64 = 512;
	// stfsx f0,r31,r7
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + ctx.r7.u32, temp.u32);
	// clrldi r9,r9,1
	ctx.r9.u64 = ctx.r9.u64 & 0x7FFFFFFFFFFFFFFF;
	// stfsx f0,r31,r6
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + ctx.r6.u32, temp.u32);
	// stwx r25,r31,r5
	PPC_STORE_U32(ctx.r31.u32 + ctx.r5.u32, ctx.r25.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// stdx r9,r31,r11
	PPC_STORE_U64(ctx.r31.u32 + ctx.r11.u32, ctx.r9.u64);
	// stwx r8,r31,r10
	PPC_STORE_U32(ctx.r31.u32 + ctx.r10.u32, ctx.r8.u32);
	// stw r31,0(r23)
	PPC_STORE_U32(ctx.r23.u32 + 0, ctx.r31.u32);
loc_832FF000:
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x833a01e4
	__restgprlr_23(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832FF008"))) PPC_WEAK_FUNC(sub_832FF008);
PPC_FUNC_IMPL(__imp__sub_832FF008) {
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
	// lis r30,-31823
	ctx.r30.s64 = -2085552128;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r3,10148(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 10148);
	// bl 0x832f40c0
	ctx.lr = 0x832FF02C;
	sub_832F40C0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x832fecc8
	ctx.lr = 0x832FF034;
	sub_832FECC8(ctx, base);
	// lwz r11,10148(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 10148);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// bl 0x832f4158
	ctx.lr = 0x832FF044;
	sub_832F4158(ctx, base);
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

__attribute__((alias("__imp__sub_832FF060"))) PPC_WEAK_FUNC(sub_832FF060);
PPC_FUNC_IMPL(__imp__sub_832FF060) {
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
	// lis r11,-31823
	ctx.r11.s64 = -2085552128;
	// addi r31,r11,10176
	ctx.r31.s64 = ctx.r11.s64 + 10176;
	// addi r8,r31,1408
	ctx.r8.s64 = ctx.r31.s64 + 1408;
loc_832FF07C:
	// mfmsr r9
	ctx.r9.u64 = ctx.msr;
	// mtmsrd r13,1
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// lwarx r10,0,r8
	ctx.reserved.u32 = *(uint32_t*)(base + ctx.r8.u32);
	ctx.r10.u64 = __builtin_bswap32(ctx.reserved.u32);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stwcx. r10,0,r8
	ctx.cr0.lt = 0;
	ctx.cr0.gt = 0;
	ctx.cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ctx.r8.u32), ctx.reserved.s32, __builtin_bswap32(ctx.r10.s32));
	ctx.cr0.so = ctx.xer.so;
	// mtmsrd r9,1
	ctx.msr = (ctx.r9.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// bne 0x832ff07c
	if (!ctx.cr0.eq) goto loc_832FF07C;
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// cmpwi cr6,r10,1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 1, ctx.xer);
	// bne cr6,0x832ff0b8
	if (!ctx.cr6.eq) goto loc_832FF0B8;
	// bl 0x832fdb68
	ctx.lr = 0x832FF0A8;
	sub_832FDB68(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r5,1408
	ctx.r5.s64 = 1408;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x833a2b30
	ctx.lr = 0x832FF0B8;
	sub_833A2B30(ctx, base);
loc_832FF0B8:
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

__attribute__((alias("__imp__sub_832FF0CC"))) PPC_WEAK_FUNC(sub_832FF0CC);
PPC_FUNC_IMPL(__imp__sub_832FF0CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832FF0D0"))) PPC_WEAK_FUNC(sub_832FF0D0);
PPC_FUNC_IMPL(__imp__sub_832FF0D0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x833a01a8
	ctx.lr = 0x832FF0D8;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31823
	ctx.r11.s64 = -2085552128;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// addi r10,r11,10176
	ctx.r10.s64 = ctx.r11.s64 + 10176;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// li r9,0
	ctx.r9.s64 = 0;
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
loc_832FF0F4:
	// lwz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mr r29,r11
	ctx.r29.u64 = ctx.r11.u64;
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq cr6,0x832ff118
	if (ctx.cr6.eq) goto loc_832FF118;
	// addi r11,r11,44
	ctx.r11.s64 = ctx.r11.s64 + 44;
	// addi r8,r10,1408
	ctx.r8.s64 = ctx.r10.s64 + 1408;
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// cmpw cr6,r11,r8
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r8.s32, ctx.xer);
	// blt cr6,0x832ff0f4
	if (ctx.cr6.lt) goto loc_832FF0F4;
loc_832FF118:
	// cmpwi cr6,r9,32
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 32, ctx.xer);
	// beq cr6,0x832ff194
	if (ctx.cr6.eq) goto loc_832FF194;
	// li r5,44
	ctx.r5.s64 = 44;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x833a2b30
	ctx.lr = 0x832FF130;
	sub_833A2B30(ctx, base);
	// addi r31,r29,36
	ctx.r31.s64 = ctx.r29.s64 + 36;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x832ff008
	ctx.lr = 0x832FF13C;
	sub_832FF008(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x832ff194
	if (ctx.cr0.lt) goto loc_832FF194;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x832ff194
	if (ctx.cr6.eq) goto loc_832FF194;
	// li r6,8224
	ctx.r6.s64 = 8224;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// bl 0x832fe6c8
	ctx.lr = 0x832FF160;
	sub_832FE6C8(ctx, base);
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// ble cr6,0x832ff180
	if (!ctx.cr6.gt) goto loc_832FF180;
	// addi r11,r28,-4
	ctx.r11.s64 = ctx.r28.s64 + -4;
	// mtctr r30
	ctx.ctr.u64 = ctx.r30.u64;
	// addi r10,r29,24
	ctx.r10.s64 = ctx.r29.s64 + 24;
loc_832FF174:
	// lwzu r9,4(r11)
	ea = 4 + ctx.r11.u32;
	ctx.r9.u64 = PPC_LOAD_U32(ea);
	ctx.r11.u32 = ea;
	// stwu r9,4(r10)
	ea = 4 + ctx.r10.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r10.u32 = ea;
	// bdnz 0x832ff174
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_832FF174;
loc_832FF180:
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r30,8(r29)
	PPC_STORE_U32(ctx.r29.u32 + 8, ctx.r30.u32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// stw r11,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r11.u32);
	// b 0x832ff198
	goto loc_832FF198;
loc_832FF194:
	// li r3,0
	ctx.r3.s64 = 0;
loc_832FF198:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x833a01f8
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832FF1A0"))) PPC_WEAK_FUNC(sub_832FF1A0);
PPC_FUNC_IMPL(__imp__sub_832FF1A0) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,36(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 36);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// b 0x832fddc8
	sub_832FDDC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832FF1B0"))) PPC_WEAK_FUNC(sub_832FF1B0);
PPC_FUNC_IMPL(__imp__sub_832FF1B0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_832FF1B4"))) PPC_WEAK_FUNC(sub_832FF1B4);
PPC_FUNC_IMPL(__imp__sub_832FF1B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832FF1B8"))) PPC_WEAK_FUNC(sub_832FF1B8);
PPC_FUNC_IMPL(__imp__sub_832FF1B8) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,36(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 36);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// b 0x832fddc8
	sub_832FDDC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832FF1D0"))) PPC_WEAK_FUNC(sub_832FF1D0);
PPC_FUNC_IMPL(__imp__sub_832FF1D0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_832FF1D4"))) PPC_WEAK_FUNC(sub_832FF1D4);
PPC_FUNC_IMPL(__imp__sub_832FF1D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832FF1D8"))) PPC_WEAK_FUNC(sub_832FF1D8);
PPC_FUNC_IMPL(__imp__sub_832FF1D8) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,36(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 36);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// cmpwi cr6,r4,1
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 1, ctx.xer);
	// bne cr6,0x832ff1f0
	if (!ctx.cr6.eq) goto loc_832FF1F0;
	// b 0x832fdd20
	sub_832FDD20(ctx, base);
	return;
loc_832FF1F0:
	// b 0x832fddc8
	sub_832FDDC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832FF1F4"))) PPC_WEAK_FUNC(sub_832FF1F4);
PPC_FUNC_IMPL(__imp__sub_832FF1F4) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_832FF1F8"))) PPC_WEAK_FUNC(sub_832FF1F8);
PPC_FUNC_IMPL(__imp__sub_832FF1F8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x833a01ac
	ctx.lr = 0x832FF200;
	__savegprlr_29(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r3,36(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 36);
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x832ff240
	if (ctx.cr6.eq) goto loc_832FF240;
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// bl 0x832fe300
	ctx.lr = 0x832FF224;
	sub_832FE300(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r3,36(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// bl 0x832fe278
	ctx.lr = 0x832FF230;
	sub_832FE278(ctx, base);
	// ld r11,88(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
	// stw r10,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r10.u32);
loc_832FF240:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x833a01fc
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832FF248"))) PPC_WEAK_FUNC(sub_832FF248);
PPC_FUNC_IMPL(__imp__sub_832FF248) {
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
	// lwz r3,28(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 28);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,36(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x832FF26C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// rlwinm r3,r3,31,1,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 31) & 0x7FFFFFFF;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_832FF280"))) PPC_WEAK_FUNC(sub_832FF280);
PPC_FUNC_IMPL(__imp__sub_832FF280) {
	PPC_FUNC_PROLOGUE();
	// lis r3,32767
	ctx.r3.s64 = 2147418112;
	// ori r3,r3,65535
	ctx.r3.u64 = ctx.r3.u64 | 65535;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_832FF28C"))) PPC_WEAK_FUNC(sub_832FF28C);
PPC_FUNC_IMPL(__imp__sub_832FF28C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832FF290"))) PPC_WEAK_FUNC(sub_832FF290);
PPC_FUNC_IMPL(__imp__sub_832FF290) {
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
	// lwz r3,36(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 36);
	// li r31,0
	ctx.r31.s64 = 0;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x832ff2c8
	if (ctx.cr6.eq) goto loc_832FF2C8;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x832fe1f8
	ctx.lr = 0x832FF2B8;
	sub_832FE1F8(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// bne cr6,0x832ff2c8
	if (!ctx.cr6.eq) goto loc_832FF2C8;
	// li r31,2
	ctx.r31.s64 = 2;
loc_832FF2C8:
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

__attribute__((alias("__imp__sub_832FF2E0"))) PPC_WEAK_FUNC(sub_832FF2E0);
PPC_FUNC_IMPL(__imp__sub_832FF2E0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x833a01ac
	ctx.lr = 0x832FF2E8;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31823
	ctx.r11.s64 = -2085552128;
	// li r29,0
	ctx.r29.s64 = 0;
	// addi r30,r11,10176
	ctx.r30.s64 = ctx.r11.s64 + 10176;
	// addi r31,r30,36
	ctx.r31.s64 = ctx.r30.s64 + 36;
loc_832FF2FC:
	// lwz r11,-36(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -36);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x832ff31c
	if (ctx.cr6.eq) goto loc_832FF31C;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x832ff318
	if (ctx.cr6.eq) goto loc_832FF318;
	// bl 0x832fdf50
	ctx.lr = 0x832FF318;
	sub_832FDF50(ctx, base);
loc_832FF318:
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
loc_832FF31C:
	// addi r31,r31,44
	ctx.r31.s64 = ctx.r31.s64 + 44;
	// addi r11,r30,1444
	ctx.r11.s64 = ctx.r30.s64 + 1444;
	// cmpw cr6,r31,r11
	ctx.cr6.compare<int32_t>(ctx.r31.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x832ff2fc
	if (ctx.cr6.lt) goto loc_832FF2FC;
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// ble cr6,0x832ff338
	if (!ctx.cr6.gt) goto loc_832FF338;
	// bl 0x832fd630
	ctx.lr = 0x832FF338;
	sub_832FD630(ctx, base);
loc_832FF338:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x833a01fc
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832FF340"))) PPC_WEAK_FUNC(sub_832FF340);
PPC_FUNC_IMPL(__imp__sub_832FF340) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,36(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 36);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// b 0x832fe5a8
	sub_832FE5A8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832FF350"))) PPC_WEAK_FUNC(sub_832FF350);
PPC_FUNC_IMPL(__imp__sub_832FF350) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_832FF354"))) PPC_WEAK_FUNC(sub_832FF354);
PPC_FUNC_IMPL(__imp__sub_832FF354) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832FF358"))) PPC_WEAK_FUNC(sub_832FF358);
PPC_FUNC_IMPL(__imp__sub_832FF358) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,36(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 36);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// b 0x832fe478
	sub_832FE478(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832FF368"))) PPC_WEAK_FUNC(sub_832FF368);
PPC_FUNC_IMPL(__imp__sub_832FF368) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_832FF36C"))) PPC_WEAK_FUNC(sub_832FF36C);
PPC_FUNC_IMPL(__imp__sub_832FF36C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832FF370"))) PPC_WEAK_FUNC(sub_832FF370);
PPC_FUNC_IMPL(__imp__sub_832FF370) {
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
	// mulli r11,r4,100
	ctx.r11.s64 = ctx.r4.s64 * 100;
	// lwz r10,36(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 36);
	// add r11,r11,r5
	ctx.r11.u64 = ctx.r11.u64 + ctx.r5.u64;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// stw r11,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r11.u32);
	// beq cr6,0x832ff3f4
	if (ctx.cr6.eq) goto loc_832FF3F4;
	// extsw r11,r5
	ctx.r11.s64 = ctx.r5.s32;
	// extsw r10,r4
	ctx.r10.s64 = ctx.r4.s32;
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// std r10,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r10.u64);
	// lfd f13,80(r1)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f12,f0
	ctx.f12.f64 = double(ctx.f0.s64);
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// fcfid f13,f13
	ctx.f13.f64 = double(ctx.f13.s64);
	// lfs f0,22800(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 22800);
	ctx.f0.f64 = double(temp.f32);
	// frsp f12,f12
	ctx.f12.f64 = double(float(ctx.f12.f64));
	// lis r10,-32219
	ctx.r10.s64 = -2111504384;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// lfd f1,14384(r11)
	ctx.f1.u64 = PPC_LOAD_U64(ctx.r11.u32 + 14384);
	// frsp f11,f13
	ctx.f11.f64 = double(float(ctx.f13.f64));
	// lfs f13,-12760(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -12760);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f0,f11,f0
	ctx.f0.f64 = double(float(ctx.f11.f64 * ctx.f0.f64));
	// fmadds f2,f12,f13,f0
	ctx.f2.f64 = double(float(ctx.f12.f64 * ctx.f13.f64 + ctx.f0.f64));
	// bl 0x833a0678
	ctx.lr = 0x832FF3E8;
	sub_833A0678(ctx, base);
	// lwz r3,36(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// frsp f1,f1
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = double(float(ctx.f1.f64));
	// bl 0x832fe500
	ctx.lr = 0x832FF3F4;
	sub_832FE500(ctx, base);
loc_832FF3F4:
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

__attribute__((alias("__imp__sub_832FF408"))) PPC_WEAK_FUNC(sub_832FF408);
PPC_FUNC_IMPL(__imp__sub_832FF408) {
	PPC_FUNC_PROLOGUE();
	// li r11,100
	ctx.r11.s64 = 100;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x832ff420
	if (ctx.cr6.eq) goto loc_832FF420;
	// lwz r10,16(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// divw r10,r10,r11
	ctx.r10.s32 = ctx.r10.s32 / ctx.r11.s32;
	// stw r10,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r10.u32);
loc_832FF420:
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lwz r10,16(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// divw r11,r10,r11
	ctx.r11.s32 = ctx.r10.s32 / ctx.r11.s32;
	// mulli r11,r11,100
	ctx.r11.s64 = ctx.r11.s64 * 100;
	// subf r11,r11,r10
	ctx.r11.s64 = ctx.r10.s64 - ctx.r11.s64;
	// stw r11,0(r5)
	PPC_STORE_U32(ctx.r5.u32 + 0, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_832FF440"))) PPC_WEAK_FUNC(sub_832FF440);
PPC_FUNC_IMPL(__imp__sub_832FF440) {
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
	// lwz r3,36(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 36);
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x832ff48c
	if (ctx.cr6.eq) goto loc_832FF48C;
	// extsw r11,r4
	ctx.r11.s64 = ctx.r4.s32;
	// lis r10,-32245
	ctx.r10.s64 = -2113208320;
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// frsp f13,f0
	ctx.f13.f64 = double(float(ctx.f0.f64));
	// lfs f0,-4124(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -4124);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f1,f13,f0
	ctx.f1.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// bl 0x832fd830
	ctx.lr = 0x832FF48C;
	sub_832FD830(ctx, base);
loc_832FF48C:
	// stw r31,12(r30)
	PPC_STORE_U32(ctx.r30.u32 + 12, ctx.r31.u32);
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

__attribute__((alias("__imp__sub_832FF4A8"))) PPC_WEAK_FUNC(sub_832FF4A8);
PPC_FUNC_IMPL(__imp__sub_832FF4A8) {
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
	// stfd f30,-40(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -40, ctx.f30.u64);
	// stfd f31,-32(r1)
	PPC_STORE_U64(ctx.r1.u32 + -32, ctx.f31.u64);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r11,r4,5
	ctx.r11.s64 = ctx.r4.s64 + 5;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// stwx r5,r11,r3
	PPC_STORE_U32(ctx.r11.u32 + ctx.r3.u32, ctx.r5.u32);
	// lwz r11,40(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 40);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x832ff5d0
	if (!ctx.cr6.eq) goto loc_832FF5D0;
	// addi r11,r5,15
	ctx.r11.s64 = ctx.r5.s64 + 15;
	// addi r10,r5,-15
	ctx.r10.s64 = ctx.r5.s64 + -15;
	// srawi r9,r11,31
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x7FFFFFFF) != 0);
	ctx.r9.s64 = ctx.r11.s32 >> 31;
	// srawi r8,r10,31
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x7FFFFFFF) != 0);
	ctx.r8.s64 = ctx.r10.s32 >> 31;
	// srawi r7,r5,31
	ctx.xer.ca = (ctx.r5.s32 < 0) & ((ctx.r5.u32 & 0x7FFFFFFF) != 0);
	ctx.r7.s64 = ctx.r5.s32 >> 31;
	// xor r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 ^ ctx.r9.u64;
	// xor r10,r10,r8
	ctx.r10.u64 = ctx.r10.u64 ^ ctx.r8.u64;
	// subf r11,r9,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r9.s64;
	// xor r6,r5,r7
	ctx.r6.u64 = ctx.r5.u64 ^ ctx.r7.u64;
	// subf r9,r8,r10
	ctx.r9.s64 = ctx.r10.s64 - ctx.r8.s64;
	// subf r10,r7,r6
	ctx.r10.s64 = ctx.r6.s64 - ctx.r7.s64;
	// cmpwi cr6,r11,15
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 15, ctx.xer);
	// blt cr6,0x832ff51c
	if (ctx.cr6.lt) goto loc_832FF51C;
	// li r11,15
	ctx.r11.s64 = 15;
loc_832FF51C:
	// cmpwi cr6,r9,15
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 15, ctx.xer);
	// blt cr6,0x832ff528
	if (ctx.cr6.lt) goto loc_832FF528;
	// li r9,15
	ctx.r9.s64 = 15;
loc_832FF528:
	// cmpwi cr6,r10,15
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 15, ctx.xer);
	// blt cr6,0x832ff534
	if (ctx.cr6.lt) goto loc_832FF534;
	// li r10,15
	ctx.r10.s64 = 15;
loc_832FF534:
	// lis r8,-32210
	ctx.r8.s64 = -2110914560;
	// lwz r3,36(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// rlwinm r9,r9,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r8,r8,-9920
	ctx.r8.s64 = ctx.r8.s64 + -9920;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lfsx f31,r9,r8
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r8.u32);
	ctx.f31.f64 = double(temp.f32);
	// lfsx f30,r10,r8
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r8.u32);
	ctx.f30.f64 = double(temp.f32);
	// lfsx f1,r11,r8
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r8.u32);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x832febb8
	ctx.lr = 0x832FF564;
	sub_832FEBB8(ctx, base);
	// li r5,1
	ctx.r5.s64 = 1;
	// lwz r3,36(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x832febb8
	ctx.lr = 0x832FF578;
	sub_832FEBB8(ctx, base);
	// li r5,2
	ctx.r5.s64 = 2;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r3,36(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// fmr f1,f30
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f30.f64;
	// bl 0x832febb8
	ctx.lr = 0x832FF58C;
	sub_832FEBB8(ctx, base);
	// lis r11,-32210
	ctx.r11.s64 = -2110914560;
	// li r5,3
	ctx.r5.s64 = 3;
	// lwz r3,36(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lfs f31,-11828(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -11828);
	ctx.f31.f64 = double(temp.f32);
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x832febb8
	ctx.lr = 0x832FF5A8;
	sub_832FEBB8(ctx, base);
	// li r5,4
	ctx.r5.s64 = 4;
	// lwz r3,36(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x832febb8
	ctx.lr = 0x832FF5BC;
	sub_832FEBB8(ctx, base);
	// li r5,5
	ctx.r5.s64 = 5;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r3,36(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x832febb8
	ctx.lr = 0x832FF5D0;
	sub_832FEBB8(ctx, base);
loc_832FF5D0:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// lfd f30,-40(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -40);
	// lfd f31,-32(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -32);
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_832FF5F0"))) PPC_WEAK_FUNC(sub_832FF5F0);
PPC_FUNC_IMPL(__imp__sub_832FF5F0) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,36(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 36);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// b 0x832fe180
	sub_832FE180(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832FF600"))) PPC_WEAK_FUNC(sub_832FF600);
PPC_FUNC_IMPL(__imp__sub_832FF600) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_832FF604"))) PPC_WEAK_FUNC(sub_832FF604);
PPC_FUNC_IMPL(__imp__sub_832FF604) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832FF608"))) PPC_WEAK_FUNC(sub_832FF608);
PPC_FUNC_IMPL(__imp__sub_832FF608) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,36(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 36);
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// beq cr6,0x832ff618
	if (ctx.cr6.eq) goto loc_832FF618;
	// b 0x832fde60
	sub_832FDE60(ctx, base);
	return;
loc_832FF618:
	// b 0x832fded8
	sub_832FDED8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832FF61C"))) PPC_WEAK_FUNC(sub_832FF61C);
PPC_FUNC_IMPL(__imp__sub_832FF61C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832FF620"))) PPC_WEAK_FUNC(sub_832FF620);
PPC_FUNC_IMPL(__imp__sub_832FF620) {
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
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r3,36(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 36);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x832ff674
	if (ctx.cr6.eq) goto loc_832FF674;
	// extsw r11,r6
	ctx.r11.s64 = ctx.r6.s32;
	// lis r10,-32210
	ctx.r10.s64 = -2110914560;
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// frsp f13,f0
	ctx.f13.f64 = double(float(ctx.f0.f64));
	// rlwinm r9,r5,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r10,r10,-9856
	ctx.r10.s64 = ctx.r10.s64 + -9856;
	// lfs f0,-4124(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -4124);
	ctx.f0.f64 = double(temp.f32);
	// lwzx r5,r9,r10
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r10.u32);
	// fmuls f1,f13,f0
	ctx.f1.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// bl 0x832febb8
	ctx.lr = 0x832FF674;
	sub_832FEBB8(ctx, base);
loc_832FF674:
	// li r11,1
	ctx.r11.s64 = 1;
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

__attribute__((alias("__imp__sub_832FF690"))) PPC_WEAK_FUNC(sub_832FF690);
PPC_FUNC_IMPL(__imp__sub_832FF690) {
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
	// stfd f31,-32(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -32, ctx.f31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,36(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 36);
	// li r31,0
	ctx.r31.s64 = 0;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// stw r31,40(r3)
	PPC_STORE_U32(ctx.r3.u32 + 40, ctx.r31.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x832ff74c
	if (ctx.cr6.eq) goto loc_832FF74C;
	// lis r11,-32210
	ctx.r11.s64 = -2110914560;
	// lfs f31,-11828(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -11828);
	ctx.f31.f64 = double(temp.f32);
loc_832FF6C8:
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r3,36(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 36);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x832febb8
	ctx.lr = 0x832FF6DC;
	sub_832FEBB8(ctx, base);
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r3,36(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 36);
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x832febb8
	ctx.lr = 0x832FF6F0;
	sub_832FEBB8(ctx, base);
	// li r5,2
	ctx.r5.s64 = 2;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r3,36(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 36);
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x832febb8
	ctx.lr = 0x832FF704;
	sub_832FEBB8(ctx, base);
	// li r5,3
	ctx.r5.s64 = 3;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r3,36(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 36);
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x832febb8
	ctx.lr = 0x832FF718;
	sub_832FEBB8(ctx, base);
	// li r5,4
	ctx.r5.s64 = 4;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r3,36(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 36);
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x832febb8
	ctx.lr = 0x832FF72C;
	sub_832FEBB8(ctx, base);
	// li r5,5
	ctx.r5.s64 = 5;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r3,36(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 36);
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x832febb8
	ctx.lr = 0x832FF740;
	sub_832FEBB8(ctx, base);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// cmpwi cr6,r31,2
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 2, ctx.xer);
	// blt cr6,0x832ff6c8
	if (ctx.cr6.lt) goto loc_832FF6C8;
loc_832FF74C:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// lfd f31,-32(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -32);
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_832FF768"))) PPC_WEAK_FUNC(sub_832FF768);
PPC_FUNC_IMPL(__imp__sub_832FF768) {
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
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r3,36(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 36);
	// bl 0x832fe3e0
	ctx.lr = 0x832FF788;
	sub_832FE3E0(ctx, base);
	// lwz r3,28(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,36(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x832FF7A0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// ld r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// rlwinm r10,r3,31,1,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 31) & 0x7FFFFFFF;
	// add r3,r10,r11
	ctx.r3.u64 = ctx.r10.u64 + ctx.r11.u64;
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

__attribute__((alias("__imp__sub_832FF7C0"))) PPC_WEAK_FUNC(sub_832FF7C0);
PPC_FUNC_IMPL(__imp__sub_832FF7C0) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,36(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 36);
	// b 0x832fe640
	sub_832FE640(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832FF7C8"))) PPC_WEAK_FUNC(sub_832FF7C8);
PPC_FUNC_IMPL(__imp__sub_832FF7C8) {
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
	// lwz r3,36(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 36);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x832ff7ec
	if (ctx.cr6.eq) goto loc_832FF7EC;
	// bl 0x832fddc8
	ctx.lr = 0x832FF7EC;
	sub_832FDDC8(ctx, base);
loc_832FF7EC:
	// lwz r3,36(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x832ff804
	if (ctx.cr6.eq) goto loc_832FF804;
	// bl 0x832fe850
	ctx.lr = 0x832FF7FC;
	sub_832FE850(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r11.u32);
loc_832FF804:
	// li r5,44
	ctx.r5.s64 = 44;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x833a2b30
	ctx.lr = 0x832FF814;
	sub_833A2B30(ctx, base);
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

__attribute__((alias("__imp__sub_832FF828"))) PPC_WEAK_FUNC(sub_832FF828);
PPC_FUNC_IMPL(__imp__sub_832FF828) {
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
	// lis r11,-31823
	ctx.r11.s64 = -2085552128;
	// addi r30,r11,10176
	ctx.r30.s64 = ctx.r11.s64 + 10176;
	// addi r8,r30,1408
	ctx.r8.s64 = ctx.r30.s64 + 1408;
loc_832FF848:
	// mfmsr r9
	ctx.r9.u64 = ctx.msr;
	// mtmsrd r13,1
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// lwarx r10,0,r8
	ctx.reserved.u32 = *(uint32_t*)(base + ctx.r8.u32);
	ctx.r10.u64 = __builtin_bswap32(ctx.reserved.u32);
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// stwcx. r10,0,r8
	ctx.cr0.lt = 0;
	ctx.cr0.gt = 0;
	ctx.cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ctx.r8.u32), ctx.reserved.s32, __builtin_bswap32(ctx.r10.s32));
	ctx.cr0.so = ctx.xer.so;
	// mtmsrd r9,1
	ctx.msr = (ctx.r9.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// bne 0x832ff848
	if (!ctx.cr0.eq) goto loc_832FF848;
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x832ff8ac
	if (!ctx.cr6.eq) goto loc_832FF8AC;
	// mr r31,r30
	ctx.r31.u64 = ctx.r30.u64;
loc_832FF874:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x832ff888
	if (ctx.cr6.eq) goto loc_832FF888;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x832ff7c8
	ctx.lr = 0x832FF888;
	sub_832FF7C8(ctx, base);
loc_832FF888:
	// addi r31,r31,44
	ctx.r31.s64 = ctx.r31.s64 + 44;
	// addi r11,r30,1408
	ctx.r11.s64 = ctx.r30.s64 + 1408;
	// cmpw cr6,r31,r11
	ctx.cr6.compare<int32_t>(ctx.r31.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x832ff874
	if (ctx.cr6.lt) goto loc_832FF874;
	// bl 0x832fd228
	ctx.lr = 0x832FF89C;
	sub_832FD228(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// li r5,1408
	ctx.r5.s64 = 1408;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x833a2b30
	ctx.lr = 0x832FF8AC;
	sub_833A2B30(ctx, base);
loc_832FF8AC:
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

__attribute__((alias("__imp__sub_832FF8C4"))) PPC_WEAK_FUNC(sub_832FF8C4);
PPC_FUNC_IMPL(__imp__sub_832FF8C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832FF8C8"))) PPC_WEAK_FUNC(sub_832FF8C8);
PPC_FUNC_IMPL(__imp__sub_832FF8C8) {
	PPC_FUNC_PROLOGUE();
	// b 0x832f5288
	sub_832F5288(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832FF8CC"))) PPC_WEAK_FUNC(sub_832FF8CC);
PPC_FUNC_IMPL(__imp__sub_832FF8CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832FF8D0"))) PPC_WEAK_FUNC(sub_832FF8D0);
PPC_FUNC_IMPL(__imp__sub_832FF8D0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32210
	ctx.r11.s64 = -2110914560;
	// lis r10,-31823
	ctx.r10.s64 = -2085552128;
	// addi r11,r11,-9760
	ctx.r11.s64 = ctx.r11.s64 + -9760;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// stw r11,11588(r10)
	PPC_STORE_U32(ctx.r10.u32 + 11588, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_832FF8E8"))) PPC_WEAK_FUNC(sub_832FF8E8);
PPC_FUNC_IMPL(__imp__sub_832FF8E8) {
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
	// bl 0x833a7018
	ctx.lr = 0x832FF900;
	sub_833A7018(ctx, base);
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

__attribute__((alias("__imp__sub_832FF918"))) PPC_WEAK_FUNC(sub_832FF918);
PPC_FUNC_IMPL(__imp__sub_832FF918) {
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
	// bl 0x833acab0
	ctx.lr = 0x832FF930;
	sub_833ACAB0(ctx, base);
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

__attribute__((alias("__imp__sub_832FF948"))) PPC_WEAK_FUNC(sub_832FF948);
PPC_FUNC_IMPL(__imp__sub_832FF948) {
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
	// bl 0x833acbf8
	ctx.lr = 0x832FF960;
	sub_833ACBF8(ctx, base);
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

__attribute__((alias("__imp__sub_832FF978"))) PPC_WEAK_FUNC(sub_832FF978);
PPC_FUNC_IMPL(__imp__sub_832FF978) {
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
	// bl 0x833ac730
	ctx.lr = 0x832FF990;
	sub_833AC730(ctx, base);
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

__attribute__((alias("__imp__sub_832FF9A8"))) PPC_WEAK_FUNC(sub_832FF9A8);
PPC_FUNC_IMPL(__imp__sub_832FF9A8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r6,40(r1)
	PPC_STORE_U64(ctx.r1.u32 + 40, ctx.r6.u64);
	// std r7,48(r1)
	PPC_STORE_U64(ctx.r1.u32 + 48, ctx.r7.u64);
	// std r8,56(r1)
	PPC_STORE_U64(ctx.r1.u32 + 56, ctx.r8.u64);
	// std r9,64(r1)
	PPC_STORE_U64(ctx.r1.u32 + 64, ctx.r9.u64);
	// std r10,72(r1)
	PPC_STORE_U64(ctx.r1.u32 + 72, ctx.r10.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// stw r5,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r5.u32);
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// addi r10,r1,136
	ctx.r10.s64 = ctx.r1.s64 + 136;
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// lwz r6,80(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x833a4408
	ctx.lr = 0x832FF9E0;
	sub_833A4408(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_832FF9F0"))) PPC_WEAK_FUNC(sub_832FF9F0);
PPC_FUNC_IMPL(__imp__sub_832FF9F0) {
	PPC_FUNC_PROLOGUE();
	// b 0x833a4408
	sub_833A4408(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832FF9F4"))) PPC_WEAK_FUNC(sub_832FF9F4);
PPC_FUNC_IMPL(__imp__sub_832FF9F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832FF9F8"))) PPC_WEAK_FUNC(sub_832FF9F8);
PPC_FUNC_IMPL(__imp__sub_832FF9F8) {
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
	// lis r11,-31815
	ctx.r11.s64 = -2085027840;
	// li r5,256
	ctx.r5.s64 = 256;
	// addi r3,r11,-22496
	ctx.r3.s64 = ctx.r11.s64 + -22496;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x833a2b30
	ctx.lr = 0x832FFA18;
	sub_833A2B30(ctx, base);
	// lis r9,-31823
	ctx.r9.s64 = -2085552128;
	// lis r8,-31823
	ctx.r8.s64 = -2085552128;
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,11624(r9)
	PPC_STORE_U32(ctx.r9.u32 + 11624, ctx.r11.u32);
	// stw r10,11628(r8)
	PPC_STORE_U32(ctx.r8.u32 + 11628, ctx.r10.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_832FFA40"))) PPC_WEAK_FUNC(sub_832FFA40);
PPC_FUNC_IMPL(__imp__sub_832FFA40) {
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
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x832ffa68
	if (!ctx.cr6.eq) goto loc_832FFA68;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,22888
	ctx.r3.s64 = ctx.r11.s64 + 22888;
	// b 0x832ffaac
	goto loc_832FFAAC;
loc_832FFA68:
	// lis r11,-31815
	ctx.r11.s64 = -2085027840;
	// li r6,255
	ctx.r6.s64 = 255;
	// addi r31,r11,-22496
	ctx.r31.s64 = ctx.r11.s64 + -22496;
	// li r4,256
	ctx.r4.s64 = 256;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x832ff918
	ctx.lr = 0x832FFA80;
	sub_832FF918(ctx, base);
	// lis r11,-31823
	ctx.r11.s64 = -2085552128;
	// lwz r10,11624(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 11624);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x832ffaa8
	if (ctx.cr6.eq) goto loc_832FFAA8;
	// lwz r11,11624(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 11624);
	// lis r10,-31823
	ctx.r10.s64 = -2085552128;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r3,11628(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + 11628);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x832FFAA8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_832FFAA8:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_832FFAAC:
	// bl 0x832f51d0
	ctx.lr = 0x832FFAB0;
	sub_832F51D0(ctx, base);
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

__attribute__((alias("__imp__sub_832FFAC4"))) PPC_WEAK_FUNC(sub_832FFAC4);
PPC_FUNC_IMPL(__imp__sub_832FFAC4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832FFAC8"))) PPC_WEAK_FUNC(sub_832FFAC8);
PPC_FUNC_IMPL(__imp__sub_832FFAC8) {
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
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x832ffb50
	if (ctx.cr6.eq) goto loc_832FFB50;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x832ffb50
	if (ctx.cr6.eq) goto loc_832FFB50;
	// lis r11,-31815
	ctx.r11.s64 = -2085027840;
	// li r6,255
	ctx.r6.s64 = 255;
	// addi r31,r11,-22496
	ctx.r31.s64 = ctx.r11.s64 + -22496;
	// li r4,256
	ctx.r4.s64 = 256;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x832ff918
	ctx.lr = 0x832FFB0C;
	sub_832FF918(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r6,255
	ctx.r6.s64 = 255;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// li r4,256
	ctx.r4.s64 = 256;
	// bl 0x832ff948
	ctx.lr = 0x832FFB20;
	sub_832FF948(ctx, base);
	// lis r11,-31823
	ctx.r11.s64 = -2085552128;
	// lwz r10,11624(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 11624);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x832ffb48
	if (ctx.cr6.eq) goto loc_832FFB48;
	// lwz r11,11624(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 11624);
	// lis r10,-31823
	ctx.r10.s64 = -2085552128;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r3,11628(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + 11628);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x832FFB48;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_832FFB48:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// b 0x832ffb58
	goto loc_832FFB58;
loc_832FFB50:
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,22888
	ctx.r3.s64 = ctx.r11.s64 + 22888;
loc_832FFB58:
	// bl 0x832f51d0
	ctx.lr = 0x832FFB5C;
	sub_832F51D0(ctx, base);
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

__attribute__((alias("__imp__sub_832FFB74"))) PPC_WEAK_FUNC(sub_832FFB74);
PPC_FUNC_IMPL(__imp__sub_832FFB74) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832FFB78"))) PPC_WEAK_FUNC(sub_832FFB78);
PPC_FUNC_IMPL(__imp__sub_832FFB78) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// li r8,0
	ctx.r8.s64 = 0;
	// li r10,10
	ctx.r10.s64 = 10;
	// mr r11,r8
	ctx.r11.u64 = ctx.r8.u64;
loc_832FFB84:
	// divw r9,r3,r10
	ctx.r9.s32 = ctx.r3.s32 / ctx.r10.s32;
	// mulli r9,r9,10
	ctx.r9.s64 = ctx.r9.s64 * 10;
	// subf r9,r9,r3
	ctx.r9.s64 = ctx.r3.s64 - ctx.r9.s64;
	// divw. r3,r3,r10
	ctx.r3.s32 = ctx.r3.s32 / ctx.r10.s32;
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// stbx r9,r11,r4
	PPC_STORE_U8(ctx.r11.u32 + ctx.r4.u32, ctx.r9.u8);
	// beq 0x832ffbac
	if (ctx.cr0.eq) goto loc_832FFBAC;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmpwi cr6,r11,32
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 32, ctx.xer);
	// blt cr6,0x832ffb84
	if (ctx.cr6.lt) goto loc_832FFB84;
	// b 0x832ffbb0
	goto loc_832FFBB0;
loc_832FFBAC:
	// stbx r8,r11,r4
	PPC_STORE_U8(ctx.r11.u32 + ctx.r4.u32, ctx.r8.u8);
loc_832FFBB0:
	// lis r11,-31823
	ctx.r11.s64 = -2085552128;
	// addi r9,r11,11592
	ctx.r9.s64 = ctx.r11.s64 + 11592;
	// mr r11,r9
	ctx.r11.u64 = ctx.r9.u64;
	// mr r10,r9
	ctx.r10.u64 = ctx.r9.u64;
loc_832FFBC0:
	// lbz r7,0(r11)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// bne cr6,0x832ffbc0
	if (!ctx.cr6.eq) goto loc_832FFBC0;
	// subf r11,r10,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r10.s64;
	// addi r10,r5,-1
	ctx.r10.s64 = ctx.r5.s64 + -1;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// blt cr6,0x832ffbec
	if (ctx.cr6.lt) goto loc_832FFBEC;
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
loc_832FFBEC:
	// mr r10,r8
	ctx.r10.u64 = ctx.r8.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x832ffc10
	if (!ctx.cr6.gt) goto loc_832FFC10;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
loc_832FFC00:
	// lbzu r9,-1(r11)
	ea = -1 + ctx.r11.u32;
	ctx.r9.u64 = PPC_LOAD_U8(ea);
	ctx.r11.u32 = ea;
	// stbx r9,r10,r4
	PPC_STORE_U8(ctx.r10.u32 + ctx.r4.u32, ctx.r9.u8);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// bdnz 0x832ffc00
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_832FFC00;
loc_832FFC10:
	// stbx r8,r10,r4
	PPC_STORE_U8(ctx.r10.u32 + ctx.r4.u32, ctx.r8.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_832FFC18"))) PPC_WEAK_FUNC(sub_832FFC18);
PPC_FUNC_IMPL(__imp__sub_832FFC18) {
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
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r5,r6
	ctx.r5.u64 = ctx.r6.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x832ffb78
	ctx.lr = 0x832FFC40;
	sub_832FFB78(ctx, base);
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
loc_832FFC44:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x832ffc44
	if (!ctx.cr6.eq) goto loc_832FFC44;
	// subf r11,r31,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r31.s64;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// addi r5,r10,18016
	ctx.r5.s64 = ctx.r10.s64 + 18016;
	// subf r11,r11,r6
	ctx.r11.s64 = ctx.r6.s64 - ctx.r11.s64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r6,r11,-1
	ctx.r6.s64 = ctx.r11.s64 + -1;
	// bl 0x832ff948
	ctx.lr = 0x832FFC7C;
	sub_832FF948(ctx, base);
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
loc_832FFC80:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x832ffc80
	if (!ctx.cr6.eq) goto loc_832FFC80;
	// subf r10,r31,r11
	ctx.r10.s64 = ctx.r11.s64 - ctx.r31.s64;
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// rotlwi r10,r10,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
loc_832FFCA0:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x832ffca0
	if (!ctx.cr6.eq) goto loc_832FFCA0;
	// subf r11,r31,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r31.s64;
	// subfic r5,r10,4
	ctx.xer.ca = ctx.r10.u32 <= 4;
	ctx.r5.s64 = 4 - ctx.r10.s64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// add r4,r11,r31
	ctx.r4.u64 = ctx.r11.u64 + ctx.r31.u64;
	// bl 0x832ffb78
	ctx.lr = 0x832FFCCC;
	sub_832FFB78(ctx, base);
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

__attribute__((alias("__imp__sub_832FFCE4"))) PPC_WEAK_FUNC(sub_832FFCE4);
PPC_FUNC_IMPL(__imp__sub_832FFCE4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832FFCE8"))) PPC_WEAK_FUNC(sub_832FFCE8);
PPC_FUNC_IMPL(__imp__sub_832FFCE8) {
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
	// bl 0x832f8758
	ctx.lr = 0x832FFCFC;
	sub_832F8758(ctx, base);
	// lis r11,-31823
	ctx.r11.s64 = -2085552128;
	// lis r10,-31823
	ctx.r10.s64 = -2085552128;
	// addi r31,r10,11640
	ctx.r31.s64 = ctx.r10.s64 + 11640;
	// lwz r10,11632(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 11632);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x832ffd24
	if (ctx.cr6.eq) goto loc_832FFD24;
	// rotlwi r11,r10,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// lwz r3,-4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x832FFD24;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_832FFD24:
	// bl 0x832f01f0
	ctx.lr = 0x832FFD28;
	sub_832F01F0(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x832ffd44
	if (ctx.cr6.eq) goto loc_832FFD44;
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x832FFD44;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_832FFD44:
	// bl 0x832f8798
	ctx.lr = 0x832FFD48;
	sub_832F8798(ctx, base);
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

__attribute__((alias("__imp__sub_832FFD5C"))) PPC_WEAK_FUNC(sub_832FFD5C);
PPC_FUNC_IMPL(__imp__sub_832FFD5C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832FFD60"))) PPC_WEAK_FUNC(sub_832FFD60);
PPC_FUNC_IMPL(__imp__sub_832FFD60) {
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
	// bl 0x832f8758
	ctx.lr = 0x832FFD78;
	sub_832F8758(ctx, base);
	// bl 0x82c10e98
	ctx.lr = 0x832FFD7C;
	sub_82C10E98(ctx, base);
	// lis r31,-31823
	ctx.r31.s64 = -2085552128;
	// lwz r11,11648(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 11648);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x832ffd94
	if (ctx.cr6.eq) goto loc_832FFD94;
	// bl 0x82c10e98
	ctx.lr = 0x832FFD90;
	sub_82C10E98(ctx, base);
	// b 0x832ffe34
	goto loc_832FFE34;
loc_832FFD94:
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,11648(r31)
	PPC_STORE_U32(ctx.r31.u32 + 11648, ctx.r11.u32);
	// bl 0x82c10e98
	ctx.lr = 0x832FFDA0;
	sub_82C10E98(ctx, base);
	// lis r11,-31823
	ctx.r11.s64 = -2085552128;
	// lis r10,-31823
	ctx.r10.s64 = -2085552128;
	// addi r30,r10,11664
	ctx.r30.s64 = ctx.r10.s64 + 11664;
	// lwz r10,11656(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 11656);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x832ffdc8
	if (ctx.cr6.eq) goto loc_832FFDC8;
	// rotlwi r11,r10,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// lwz r3,-4(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + -4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x832FFDC8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_832FFDC8:
	// li r11,3
	ctx.r11.s64 = 3;
	// stw r11,11648(r31)
	PPC_STORE_U32(ctx.r31.u32 + 11648, ctx.r11.u32);
	// bl 0x832f4cf8
	ctx.lr = 0x832FFDD4;
	sub_832F4CF8(ctx, base);
	// li r11,4
	ctx.r11.s64 = 4;
	// stw r11,11648(r31)
	PPC_STORE_U32(ctx.r31.u32 + 11648, ctx.r11.u32);
	// bl 0x832f4f58
	ctx.lr = 0x832FFDE0;
	sub_832F4F58(ctx, base);
	// li r11,5
	ctx.r11.s64 = 5;
	// stw r11,11648(r31)
	PPC_STORE_U32(ctx.r31.u32 + 11648, ctx.r11.u32);
	// bl 0x832f0a90
	ctx.lr = 0x832FFDEC;
	sub_832F0A90(ctx, base);
	// li r11,6
	ctx.r11.s64 = 6;
	// stw r11,11648(r31)
	PPC_STORE_U32(ctx.r31.u32 + 11648, ctx.r11.u32);
	// bl 0x832f4f58
	ctx.lr = 0x832FFDF8;
	sub_832F4F58(ctx, base);
	// li r11,7
	ctx.r11.s64 = 7;
	// stw r11,11648(r31)
	PPC_STORE_U32(ctx.r31.u32 + 11648, ctx.r11.u32);
	// bl 0x832f4cf8
	ctx.lr = 0x832FFE04;
	sub_832F4CF8(ctx, base);
	// li r11,9
	ctx.r11.s64 = 9;
	// stw r11,11648(r31)
	PPC_STORE_U32(ctx.r31.u32 + 11648, ctx.r11.u32);
	// bl 0x832f42c8
	ctx.lr = 0x832FFE10;
	sub_832F42C8(ctx, base);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// li r10,0
	ctx.r10.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// stw r10,11648(r31)
	PPC_STORE_U32(ctx.r31.u32 + 11648, ctx.r10.u32);
	// beq cr6,0x832ffe34
	if (ctx.cr6.eq) goto loc_832FFE34;
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// lwz r3,4(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x832FFE34;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_832FFE34:
	// bl 0x832f8798
	ctx.lr = 0x832FFE38;
	sub_832F8798(ctx, base);
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

__attribute__((alias("__imp__sub_832FFE50"))) PPC_WEAK_FUNC(sub_832FFE50);
PPC_FUNC_IMPL(__imp__sub_832FFE50) {
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
	// lis r30,-31823
	ctx.r30.s64 = -2085552128;
	// lis r11,-32210
	ctx.r11.s64 = -2110914560;
	// lis r10,-31823
	ctx.r10.s64 = -2085552128;
	// addi r11,r11,-9600
	ctx.r11.s64 = ctx.r11.s64 + -9600;
	// lwz r31,11676(r30)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r30.u32 + 11676);
	// stw r11,11672(r10)
	PPC_STORE_U32(ctx.r10.u32 + 11672, ctx.r11.u32);
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// bne cr6,0x832fff18
	if (!ctx.cr6.eq) goto loc_832FFF18;
	// lis r11,-31815
	ctx.r11.s64 = -2085027840;
	// li r5,832
	ctx.r5.s64 = 832;
	// addi r3,r11,-23328
	ctx.r3.s64 = ctx.r11.s64 + -23328;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x833a2b30
	ctx.lr = 0x832FFE98;
	sub_833A2B30(ctx, base);
	// lis r11,-31815
	ctx.r11.s64 = -2085027840;
	// li r5,1024
	ctx.r5.s64 = 1024;
	// addi r3,r11,-24352
	ctx.r3.s64 = ctx.r11.s64 + -24352;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x833a2b30
	ctx.lr = 0x832FFEAC;
	sub_833A2B30(ctx, base);
	// lis r11,-31815
	ctx.r11.s64 = -2085027840;
	// li r5,256
	ctx.r5.s64 = 256;
	// addi r3,r11,-24704
	ctx.r3.s64 = ctx.r11.s64 + -24704;
	// li r4,255
	ctx.r4.s64 = 255;
	// bl 0x833a2b30
	ctx.lr = 0x832FFEC0;
	sub_833A2B30(ctx, base);
	// lis r11,-31815
	ctx.r11.s64 = -2085027840;
	// li r5,32
	ctx.r5.s64 = 32;
	// addi r3,r11,-24416
	ctx.r3.s64 = ctx.r11.s64 + -24416;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x833a2b30
	ctx.lr = 0x832FFED4;
	sub_833A2B30(ctx, base);
	// lis r8,-31815
	ctx.r8.s64 = -2085027840;
	// lis r7,-31815
	ctx.r7.s64 = -2085027840;
	// lis r6,-31815
	ctx.r6.s64 = -2085027840;
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,0
	ctx.r10.s64 = 0;
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r11,-24448(r8)
	PPC_STORE_U32(ctx.r8.u32 + -24448, ctx.r11.u32);
	// stw r10,-24444(r7)
	PPC_STORE_U32(ctx.r7.u32 + -24444, ctx.r10.u32);
	// lis r8,-31815
	ctx.r8.s64 = -2085027840;
	// stw r9,-24380(r6)
	PPC_STORE_U32(ctx.r6.u32 + -24380, ctx.r9.u32);
	// lis r7,-31815
	ctx.r7.s64 = -2085027840;
	// lis r6,-31815
	ctx.r6.s64 = -2085027840;
	// li r10,-1
	ctx.r10.s64 = -1;
	// li r9,1
	ctx.r9.s64 = 1;
	// stw r11,-24384(r8)
	PPC_STORE_U32(ctx.r8.u32 + -24384, ctx.r11.u32);
	// stw r10,-24736(r7)
	PPC_STORE_U32(ctx.r7.u32 + -24736, ctx.r10.u32);
	// stw r9,-24732(r6)
	PPC_STORE_U32(ctx.r6.u32 + -24732, ctx.r9.u32);
loc_832FFF18:
	// addi r11,r31,1
	ctx.r11.s64 = ctx.r31.s64 + 1;
	// stw r11,11676(r30)
	PPC_STORE_U32(ctx.r30.u32 + 11676, ctx.r11.u32);
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

__attribute__((alias("__imp__sub_832FFF38"))) PPC_WEAK_FUNC(sub_832FFF38);
PPC_FUNC_IMPL(__imp__sub_832FFF38) {
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
	// lis r10,-31823
	ctx.r10.s64 = -2085552128;
	// lwz r11,11676(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 11676);
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,11676(r10)
	PPC_STORE_U32(ctx.r10.u32 + 11676, ctx.r11.u32);
	// bne 0x832ffff0
	if (!ctx.cr0.eq) goto loc_832FFFF0;
	// bl 0x832f0ce0
	ctx.lr = 0x832FFF5C;
	sub_832F0CE0(ctx, base);
	// lis r8,-31815
	ctx.r8.s64 = -2085027840;
	// lis r7,-31815
	ctx.r7.s64 = -2085027840;
	// lis r6,-31815
	ctx.r6.s64 = -2085027840;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r11,1
	ctx.r11.s64 = 1;
	// li r10,-1
	ctx.r10.s64 = -1;
	// stw r11,-24732(r8)
	PPC_STORE_U32(ctx.r8.u32 + -24732, ctx.r11.u32);
	// lis r8,-31815
	ctx.r8.s64 = -2085027840;
	// stw r10,-24736(r7)
	PPC_STORE_U32(ctx.r7.u32 + -24736, ctx.r10.u32);
	// lis r7,-31815
	ctx.r7.s64 = -2085027840;
	// stw r9,-24384(r6)
	PPC_STORE_U32(ctx.r6.u32 + -24384, ctx.r9.u32);
	// lis r6,-31815
	ctx.r6.s64 = -2085027840;
	// lis r5,-31815
	ctx.r5.s64 = -2085027840;
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r3,r5,-24416
	ctx.r3.s64 = ctx.r5.s64 + -24416;
	// stw r11,-24380(r8)
	PPC_STORE_U32(ctx.r8.u32 + -24380, ctx.r11.u32);
	// li r5,32
	ctx.r5.s64 = 32;
	// stw r10,-24444(r7)
	PPC_STORE_U32(ctx.r7.u32 + -24444, ctx.r10.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r9,-24448(r6)
	PPC_STORE_U32(ctx.r6.u32 + -24448, ctx.r9.u32);
	// bl 0x833a2b30
	ctx.lr = 0x832FFFB4;
	sub_833A2B30(ctx, base);
	// lis r11,-31815
	ctx.r11.s64 = -2085027840;
	// li r5,256
	ctx.r5.s64 = 256;
	// addi r3,r11,-24704
	ctx.r3.s64 = ctx.r11.s64 + -24704;
	// li r4,255
	ctx.r4.s64 = 255;
	// bl 0x833a2b30
	ctx.lr = 0x832FFFC8;
	sub_833A2B30(ctx, base);
	// lis r11,-31815
	ctx.r11.s64 = -2085027840;
	// li r5,1024
	ctx.r5.s64 = 1024;
	// addi r3,r11,-24352
	ctx.r3.s64 = ctx.r11.s64 + -24352;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x833a2b30
	ctx.lr = 0x832FFFDC;
	sub_833A2B30(ctx, base);
	// lis r11,-31815
	ctx.r11.s64 = -2085027840;
	// li r5,832
	ctx.r5.s64 = 832;
	// addi r3,r11,-23328
	ctx.r3.s64 = ctx.r11.s64 + -23328;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x833a2b30
	ctx.lr = 0x832FFFF0;
	sub_833A2B30(ctx, base);
loc_832FFFF0:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83300000"))) PPC_WEAK_FUNC(sub_83300000);
PPC_FUNC_IMPL(__imp__sub_83300000) {
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
	// lis r31,-31823
	ctx.r31.s64 = -2085552128;
	// lwz r11,11680(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 11680);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x83300038
	if (!ctx.cr6.eq) goto loc_83300038;
	// bl 0x832f3000
	ctx.lr = 0x83300024;
	sub_832F3000(ctx, base);
	// lis r11,-31815
	ctx.r11.s64 = -2085027840;
	// li r5,5760
	ctx.r5.s64 = 5760;
	// addi r3,r11,-30496
	ctx.r3.s64 = ctx.r11.s64 + -30496;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x833a2b30
	ctx.lr = 0x83300038;
	sub_833A2B30(ctx, base);
loc_83300038:
	// lwz r11,11680(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 11680);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,11680(r31)
	PPC_STORE_U32(ctx.r31.u32 + 11680, ctx.r11.u32);
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

__attribute__((alias("__imp__sub_83300058"))) PPC_WEAK_FUNC(sub_83300058);
PPC_FUNC_IMPL(__imp__sub_83300058) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31823
	ctx.r10.s64 = -2085552128;
	// lwz r11,11680(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 11680);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stw r11,11680(r10)
	PPC_STORE_U32(ctx.r10.u32 + 11680, ctx.r11.u32);
	// lwz r11,11680(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 11680);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// lis r11,-31815
	ctx.r11.s64 = -2085027840;
	// li r5,5760
	ctx.r5.s64 = 5760;
	// addi r3,r11,-30496
	ctx.r3.s64 = ctx.r11.s64 + -30496;
	// li r4,0
	ctx.r4.s64 = 0;
	// b 0x833a2b30
	sub_833A2B30(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83300088"))) PPC_WEAK_FUNC(sub_83300088);
PPC_FUNC_IMPL(__imp__sub_83300088) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8330008C"))) PPC_WEAK_FUNC(sub_8330008C);
PPC_FUNC_IMPL(__imp__sub_8330008C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83300090"))) PPC_WEAK_FUNC(sub_83300090);
PPC_FUNC_IMPL(__imp__sub_83300090) {
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
	// beq cr6,0x833000dc
	if (ctx.cr6.eq) goto loc_833000DC;
	// lwz r3,4(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x833000c4
	if (ctx.cr6.eq) goto loc_833000C4;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// bl 0x832f30a0
	ctx.lr = 0x833000C4;
	sub_832F30A0(ctx, base);
loc_833000C4:
	// bl 0x82c10e98
	ctx.lr = 0x833000C8;
	sub_82C10E98(ctx, base);
	// li r5,180
	ctx.r5.s64 = 180;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x833a2b30
	ctx.lr = 0x833000D8;
	sub_833A2B30(ctx, base);
	// bl 0x82c10e98
	ctx.lr = 0x833000DC;
	sub_82C10E98(ctx, base);
loc_833000DC:
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

__attribute__((alias("__imp__sub_833000F0"))) PPC_WEAK_FUNC(sub_833000F0);
PPC_FUNC_IMPL(__imp__sub_833000F0) {
	PPC_FUNC_PROLOGUE();
	// lbz r11,1(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 1);
	// extsb r3,r11
	ctx.r3.s64 = ctx.r11.s8;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_833000FC"))) PPC_WEAK_FUNC(sub_833000FC);
PPC_FUNC_IMPL(__imp__sub_833000FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83300100"))) PPC_WEAK_FUNC(sub_83300100);
PPC_FUNC_IMPL(__imp__sub_83300100) {
	PPC_FUNC_PROLOGUE();
	// stw r4,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r4.u32);
	// lwz r3,4(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// b 0x83304b70
	sub_83304B70(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8330010C"))) PPC_WEAK_FUNC(sub_8330010C);
PPC_FUNC_IMPL(__imp__sub_8330010C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83300110"))) PPC_WEAK_FUNC(sub_83300110);
PPC_FUNC_IMPL(__imp__sub_83300110) {
	PPC_FUNC_PROLOGUE();
	// stw r4,56(r3)
	PPC_STORE_U32(ctx.r3.u32 + 56, ctx.r4.u32);
	// lwz r3,4(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// b 0x83304b90
	sub_83304B90(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8330011C"))) PPC_WEAK_FUNC(sub_8330011C);
PPC_FUNC_IMPL(__imp__sub_8330011C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83300120"))) PPC_WEAK_FUNC(sub_83300120);
PPC_FUNC_IMPL(__imp__sub_83300120) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,4(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// b 0x83304c10
	sub_83304C10(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83300128"))) PPC_WEAK_FUNC(sub_83300128);
PPC_FUNC_IMPL(__imp__sub_83300128) {
	PPC_FUNC_PROLOGUE();
	// lis r10,32767
	ctx.r10.s64 = 2147418112;
	// li r11,0
	ctx.r11.s64 = 0;
	// ori r10,r10,65535
	ctx.r10.u64 = ctx.r10.u64 | 65535;
	// li r9,-1
	ctx.r9.s64 = -1;
	// stw r11,160(r3)
	PPC_STORE_U32(ctx.r3.u32 + 160, ctx.r11.u32);
	// li r8,1
	ctx.r8.s64 = 1;
	// stw r11,44(r3)
	PPC_STORE_U32(ctx.r3.u32 + 44, ctx.r11.u32);
	// stw r11,48(r3)
	PPC_STORE_U32(ctx.r3.u32 + 48, ctx.r11.u32);
	// stw r11,52(r3)
	PPC_STORE_U32(ctx.r3.u32 + 52, ctx.r11.u32);
	// stw r10,56(r3)
	PPC_STORE_U32(ctx.r3.u32 + 56, ctx.r10.u32);
	// stw r9,60(r3)
	PPC_STORE_U32(ctx.r3.u32 + 60, ctx.r9.u32);
	// stw r11,64(r3)
	PPC_STORE_U32(ctx.r3.u32 + 64, ctx.r11.u32);
	// stw r11,68(r3)
	PPC_STORE_U32(ctx.r3.u32 + 68, ctx.r11.u32);
	// stb r11,3(r3)
	PPC_STORE_U8(ctx.r3.u32 + 3, ctx.r11.u8);
	// stw r11,168(r3)
	PPC_STORE_U32(ctx.r3.u32 + 168, ctx.r11.u32);
	// stw r11,172(r3)
	PPC_STORE_U32(ctx.r3.u32 + 172, ctx.r11.u32);
	// stb r8,1(r3)
	PPC_STORE_U8(ctx.r3.u32 + 1, ctx.r8.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83300170"))) PPC_WEAK_FUNC(sub_83300170);
PPC_FUNC_IMPL(__imp__sub_83300170) {
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
	// lwz r3,4(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// bl 0x832f3558
	ctx.lr = 0x8330018C;
	sub_832F3558(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stb r11,1(r31)
	PPC_STORE_U8(ctx.r31.u32 + 1, ctx.r11.u8);
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

__attribute__((alias("__imp__sub_833001A8"))) PPC_WEAK_FUNC(sub_833001A8);
PPC_FUNC_IMPL(__imp__sub_833001A8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x833a019c
	ctx.lr = 0x833001B0;
	__savegprlr_25(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r29,8(r3)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// lis r5,0
	ctx.r5.s64 = 0;
	// lwz r31,4(r3)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// ori r5,r5,51200
	ctx.r5.u64 = ctx.r5.u64 | 51200;
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r11,24(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x833001E4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r5,84(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// bgt cr6,0x83300210
	if (ctx.cr6.gt) goto loc_83300210;
loc_833001F0:
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r11,28(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8330020C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// b 0x83300448
	goto loc_83300448;
loc_83300210:
	// lhz r11,154(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 154);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x8330025c
	if (!ctx.cr0.eq) goto loc_8330025C;
	// lhz r11,152(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 152);
	// cmplwi cr6,r11,13
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 13, ctx.xer);
	// beq cr6,0x8330025c
	if (ctx.cr6.eq) goto loc_8330025C;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x832f0da8
	ctx.lr = 0x8330023C;
	sub_832F0DA8(ctx, base);
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r11,32(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x83300258;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r5,84(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
loc_8330025C:
	// cmpwi cr6,r5,16
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 16, ctx.xer);
	// blt cr6,0x833001f0
	if (ctx.cr6.lt) goto loc_833001F0;
	// lhz r11,152(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 152);
	// cmplwi cr6,r11,13
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 13, ctx.xer);
	// beq cr6,0x83300294
	if (ctx.cr6.eq) goto loc_83300294;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x832f3d60
	ctx.lr = 0x8330027C;
	sub_832F3D60(ctx, base);
	// mr. r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// beq 0x833001f0
	if (ctx.cr0.eq) goto loc_833001F0;
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmpw cr6,r30,r11
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r11.s32, ctx.xer);
	// ble cr6,0x83300298
	if (!ctx.cr6.gt) goto loc_83300298;
	// b 0x833001f0
	goto loc_833001F0;
loc_83300294:
	// li r30,-1
	ctx.r30.s64 = -1;
loc_83300298:
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// bge cr6,0x833002d0
	if (!ctx.cr6.lt) goto loc_833002D0;
	// lhz r11,152(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 152);
	// cmplwi cr6,r11,13
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 13, ctx.xer);
	// bne cr6,0x833002b8
	if (!ctx.cr6.eq) goto loc_833002B8;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x832f3110
	ctx.lr = 0x833002B4;
	sub_832F3110(ctx, base);
	// b 0x833002cc
	goto loc_833002CC;
loc_833002B8:
	// lhz r11,154(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 154);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x833003e0
	if (ctx.cr0.eq) goto loc_833003E0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x832f3d50
	ctx.lr = 0x833002CC;
	sub_832F3D50(ctx, base);
loc_833002CC:
	// li r30,0
	ctx.r30.s64 = 0;
loc_833002D0:
	// lwz r11,80(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 80);
	// stw r30,160(r28)
	PPC_STORE_U32(ctx.r28.u32 + 160, ctx.r30.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8330032c
	if (ctx.cr6.eq) goto loc_8330032C;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x832f31c8
	ctx.lr = 0x833002E8;
	sub_832F31C8(ctx, base);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x832f31d0
	ctx.lr = 0x833002F4;
	sub_832F31D0(ctx, base);
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83110a28
	ctx.lr = 0x83300300;
	sub_83110A28(ctx, base);
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83110d80
	ctx.lr = 0x8330030C;
	sub_83110D80(ctx, base);
	// lwz r11,80(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 80);
	// mr r7,r3
	ctx.r7.u64 = ctx.r3.u64;
	// lwz r3,84(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 84);
	// mr r6,r25
	ctx.r6.u64 = ctx.r25.u64;
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8330032C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8330032C:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x832f31c8
	ctx.lr = 0x83300334;
	sub_832F31C8(ctx, base);
	// cmpwi cr6,r3,4
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 4, ctx.xer);
	// bne cr6,0x83300344
	if (!ctx.cr6.eq) goto loc_83300344;
	// li r11,1
	ctx.r11.s64 = 1;
	// stb r11,3(r28)
	PPC_STORE_U8(ctx.r28.u32 + 3, ctx.r11.u8);
loc_83300344:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x832f31c8
	ctx.lr = 0x8330034C;
	sub_832F31C8(ctx, base);
	// cmpwi cr6,r3,2
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 2, ctx.xer);
	// bne cr6,0x83300370
	if (!ctx.cr6.eq) goto loc_83300370;
	// lwz r5,84(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmpwi cr6,r5,64
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 64, ctx.xer);
	// blt cr6,0x83300364
	if (ctx.cr6.lt) goto loc_83300364;
	// li r5,64
	ctx.r5.s64 = 64;
loc_83300364:
	// addi r3,r28,96
	ctx.r3.s64 = ctx.r28.s64 + 96;
	// lwz r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x833a1390
	ctx.lr = 0x83300370;
	sub_833A1390(ctx, base);
loc_83300370:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x832f31c8
	ctx.lr = 0x83300378;
	sub_832F31C8(ctx, base);
	// cmpwi cr6,r3,10
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 10, ctx.xer);
	// beq cr6,0x83300424
	if (ctx.cr6.eq) goto loc_83300424;
	// cmpwi cr6,r3,11
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 11, ctx.xer);
	// beq cr6,0x83300424
	if (ctx.cr6.eq) goto loc_83300424;
	// cmpwi cr6,r3,12
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 12, ctx.xer);
	// beq cr6,0x83300424
	if (ctx.cr6.eq) goto loc_83300424;
	// cmpwi cr6,r3,20
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 20, ctx.xer);
	// beq cr6,0x83300424
	if (ctx.cr6.eq) goto loc_83300424;
	// cmpwi cr6,r3,15
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 15, ctx.xer);
	// beq cr6,0x83300424
	if (ctx.cr6.eq) goto loc_83300424;
	// cmpwi cr6,r3,13
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 13, ctx.xer);
	// beq cr6,0x83300424
	if (ctx.cr6.eq) goto loc_83300424;
	// addi r6,r1,88
	ctx.r6.s64 = ctx.r1.s64 + 88;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x832f0da8
	ctx.lr = 0x833003BC;
	sub_832F0DA8(ctx, base);
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r11,32(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x833003D8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// b 0x83300428
	goto loc_83300428;
loc_833003E0:
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r11,28(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x833003FC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// bl 0x832f2ff0
	ctx.lr = 0x83300400;
	sub_832F2FF0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x8330041c
	if (!ctx.cr0.eq) goto loc_8330041C;
	// lis r11,-32210
	ctx.r11.s64 = -2110914560;
	// lis r10,-32210
	ctx.r10.s64 = -2110914560;
	// addi r4,r11,-9488
	ctx.r4.s64 = ctx.r11.s64 + -9488;
	// addi r3,r10,-9520
	ctx.r3.s64 = ctx.r10.s64 + -9520;
	// bl 0x832ffac8
	ctx.lr = 0x8330041C;
	sub_832FFAC8(ctx, base);
loc_8330041C:
	// li r11,4
	ctx.r11.s64 = 4;
	// b 0x83300444
	goto loc_83300444;
loc_83300424:
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
loc_83300428:
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r11,28(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x83300440;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r11,2
	ctx.r11.s64 = 2;
loc_83300444:
	// stb r11,1(r28)
	PPC_STORE_U8(ctx.r28.u32 + 1, ctx.r11.u8);
loc_83300448:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x833a01ec
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83300450"))) PPC_WEAK_FUNC(sub_83300450);
PPC_FUNC_IMPL(__imp__sub_83300450) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x833a0198
	ctx.lr = 0x83300458;
	__savegprlr_24(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r26,12(r3)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r30,r3,12
	ctx.r30.s64 = ctx.r3.s64 + 12;
	// lwz r3,4(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// mr r25,r5
	ctx.r25.u64 = ctx.r5.u64;
	// mr r24,r6
	ctx.r24.u64 = ctx.r6.u64;
	// li r29,0
	ctx.r29.s64 = 0;
	// bl 0x832f31d0
	ctx.lr = 0x83300480;
	sub_832F31D0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// ble 0x833004c8
	if (!ctx.cr0.gt) goto loc_833004C8;
	// addi r28,r30,-4
	ctx.r28.s64 = ctx.r30.s64 + -4;
	// addi r30,r31,28
	ctx.r30.s64 = ctx.r31.s64 + 28;
loc_83300490:
	// lwzu r3,4(r28)
	ea = 4 + ctx.r28.u32;
	ctx.r3.u64 = PPC_LOAD_U32(ea);
	ctx.r28.u32 = ea;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// li r5,16384
	ctx.r5.s64 = 16384;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,24(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x833004B0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// addi r30,r30,8
	ctx.r30.s64 = ctx.r30.s64 + 8;
	// bl 0x832f31d0
	ctx.lr = 0x833004C0;
	sub_832F31D0(ctx, base);
	// cmpw cr6,r29,r3
	ctx.cr6.compare<int32_t>(ctx.r29.s32, ctx.r3.s32, ctx.xer);
	// blt cr6,0x83300490
	if (ctx.cr6.lt) goto loc_83300490;
loc_833004C8:
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x832ee2b8
	ctx.lr = 0x833004D0;
	sub_832EE2B8(ctx, base);
	// lwz r11,28(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// subf r11,r3,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r3.s64;
	// srawi r11,r11,1
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 1;
	// addze r11,r11
	temp.s64 = ctx.r11.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r11.u32;
	ctx.r11.s64 = temp.s64;
	// stw r11,0(r27)
	PPC_STORE_U32(ctx.r27.u32 + 0, ctx.r11.u32);
	// lwz r11,56(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// lwz r10,32(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// srawi r10,r10,1
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x1) != 0);
	ctx.r10.s64 = ctx.r10.s32 >> 1;
	// addze r10,r10
	temp.s64 = ctx.r10.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r10.u32;
	ctx.r10.s64 = temp.s64;
	// cmpw cr6,r10,r11
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r11.s32, ctx.xer);
	// bge cr6,0x83300500
	if (!ctx.cr6.lt) goto loc_83300500;
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
loc_83300500:
	// stw r11,0(r25)
	PPC_STORE_U32(ctx.r25.u32 + 0, ctx.r11.u32);
	// lwz r11,60(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 60);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt cr6,0x8330051c
	if (ctx.cr6.lt) goto loc_8330051C;
	// lwz r10,64(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 64);
	// subf r11,r10,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r10.s64;
	// b 0x83300524
	goto loc_83300524;
loc_8330051C:
	// lis r11,8191
	ctx.r11.s64 = 536805376;
	// ori r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 65535;
loc_83300524:
	// stw r11,0(r24)
	PPC_STORE_U32(ctx.r24.u32 + 0, ctx.r11.u32);
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// bl 0x8310f538
	ctx.lr = 0x83300530;
	sub_8310F538(ctx, base);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x833a01e8
	__restgprlr_24(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83300538"))) PPC_WEAK_FUNC(sub_83300538);
PPC_FUNC_IMPL(__imp__sub_83300538) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x833a01a4
	ctx.lr = 0x83300540;
	__savegprlr_27(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lbz r11,2(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 2);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r10,168(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 168);
	// li r29,0
	ctx.r29.s64 = 0;
	// extsb. r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// rlwinm r28,r10,1,0,30
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// ble 0x833005c8
	if (!ctx.cr0.gt) goto loc_833005C8;
	// addi r30,r3,8
	ctx.r30.s64 = ctx.r3.s64 + 8;
loc_83300564:
	// lwz r3,4(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// lis r5,32767
	ctx.r5.s64 = 2147418112;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// ori r5,r5,65535
	ctx.r5.u64 = ctx.r5.u64 | 65535;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,24(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x83300588;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmpw cr6,r28,r11
	ctx.cr6.compare<int32_t>(ctx.r28.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x83300598
	if (ctx.cr6.lt) goto loc_83300598;
	// mr r28,r11
	ctx.r28.u64 = ctx.r11.u64;
loc_83300598:
	// lwzu r3,4(r30)
	ea = 4 + ctx.r30.u32;
	ctx.r3.u64 = PPC_LOAD_U32(ea);
	ctx.r30.u32 = ea;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,28(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x833005B4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lbz r11,2(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 2);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// extsb r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	// cmpw cr6,r29,r11
	ctx.cr6.compare<int32_t>(ctx.r29.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x83300564
	if (ctx.cr6.lt) goto loc_83300564;
loc_833005C8:
	// srawi r11,r28,1
	ctx.xer.ca = (ctx.r28.s32 < 0) & ((ctx.r28.u32 & 0x1) != 0);
	ctx.r11.s64 = ctx.r28.s32 >> 1;
	// addze r27,r11
	temp.s64 = ctx.r11.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r11.u32;
	ctx.r27.s64 = temp.s64;
	// rlwinm. r28,r27,1,0,30
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 1) & 0xFFFFFFFE;
	ctx.cr0.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// ble 0x83300658
	if (!ctx.cr0.gt) goto loc_83300658;
	// lbz r11,2(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 2);
	// li r29,0
	ctx.r29.s64 = 0;
	// extsb. r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble 0x8330064c
	if (!ctx.cr0.gt) goto loc_8330064C;
	// addi r30,r31,8
	ctx.r30.s64 = ctx.r31.s64 + 8;
loc_833005EC:
	// lwz r3,4(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,24(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8330060C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x833a2b30
	ctx.lr = 0x8330061C;
	sub_833A2B30(ctx, base);
	// lwzu r3,4(r30)
	ea = 4 + ctx.r30.u32;
	ctx.r3.u64 = PPC_LOAD_U32(ea);
	ctx.r30.u32 = ea;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,32(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x83300638;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lbz r11,2(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 2);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// extsb r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	// cmpw cr6,r29,r11
	ctx.cr6.compare<int32_t>(ctx.r29.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x833005ec
	if (ctx.cr6.lt) goto loc_833005EC;
loc_8330064C:
	// lwz r11,168(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 168);
	// subf r11,r27,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r27.s64;
	// stw r11,168(r31)
	PPC_STORE_U32(ctx.r31.u32 + 168, ctx.r11.u32);
loc_83300658:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x833a01f4
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83300660"))) PPC_WEAK_FUNC(sub_83300660);
PPC_FUNC_IMPL(__imp__sub_83300660) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x833a01a4
	ctx.lr = 0x83300668;
	__savegprlr_27(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lbz r11,2(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 2);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r10,172(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 172);
	// li r29,0
	ctx.r29.s64 = 0;
	// extsb. r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// rlwinm r28,r10,1,0,30
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// ble 0x833006f0
	if (!ctx.cr0.gt) goto loc_833006F0;
	// addi r30,r3,8
	ctx.r30.s64 = ctx.r3.s64 + 8;
loc_8330068C:
	// lwz r3,4(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// lis r5,32767
	ctx.r5.s64 = 2147418112;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// ori r5,r5,65535
	ctx.r5.u64 = ctx.r5.u64 | 65535;
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,24(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x833006B0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmpw cr6,r28,r11
	ctx.cr6.compare<int32_t>(ctx.r28.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x833006c0
	if (ctx.cr6.lt) goto loc_833006C0;
	// mr r28,r11
	ctx.r28.u64 = ctx.r11.u64;
loc_833006C0:
	// lwzu r3,4(r30)
	ea = 4 + ctx.r30.u32;
	ctx.r3.u64 = PPC_LOAD_U32(ea);
	ctx.r30.u32 = ea;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,28(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x833006DC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lbz r11,2(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 2);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// extsb r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	// cmpw cr6,r29,r11
	ctx.cr6.compare<int32_t>(ctx.r29.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x8330068c
	if (ctx.cr6.lt) goto loc_8330068C;
loc_833006F0:
	// srawi r11,r28,1
	ctx.xer.ca = (ctx.r28.s32 < 0) & ((ctx.r28.u32 & 0x1) != 0);
	ctx.r11.s64 = ctx.r28.s32 >> 1;
	// addze r27,r11
	temp.s64 = ctx.r11.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r11.u32;
	ctx.r27.s64 = temp.s64;
	// rlwinm. r28,r27,1,0,30
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 1) & 0xFFFFFFFE;
	ctx.cr0.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// ble 0x83300770
	if (!ctx.cr0.gt) goto loc_83300770;
	// lbz r11,2(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 2);
	// li r29,0
	ctx.r29.s64 = 0;
	// extsb. r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble 0x83300764
	if (!ctx.cr0.gt) goto loc_83300764;
	// addi r30,r31,8
	ctx.r30.s64 = ctx.r31.s64 + 8;
loc_83300714:
	// lwz r3,4(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,24(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x83300734;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwzu r3,4(r30)
	ea = 4 + ctx.r30.u32;
	ctx.r3.u64 = PPC_LOAD_U32(ea);
	ctx.r30.u32 = ea;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,32(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x83300750;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lbz r11,2(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 2);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// extsb r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	// cmpw cr6,r29,r11
	ctx.cr6.compare<int32_t>(ctx.r29.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x83300714
	if (ctx.cr6.lt) goto loc_83300714;
loc_83300764:
	// lwz r11,172(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 172);
	// subf r11,r27,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r27.s64;
	// stw r11,172(r31)
	PPC_STORE_U32(ctx.r31.u32 + 172, ctx.r11.u32);
loc_83300770:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x833a01f4
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83300778"))) PPC_WEAK_FUNC(sub_83300778);
PPC_FUNC_IMPL(__imp__sub_83300778) {
	PPC_FUNC_PROLOGUE();
	// stw r4,164(r3)
	PPC_STORE_U32(ctx.r3.u32 + 164, ctx.r4.u32);
	// lwz r3,4(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// b 0x832f34c8
	sub_832F34C8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83300784"))) PPC_WEAK_FUNC(sub_83300784);
PPC_FUNC_IMPL(__imp__sub_83300784) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83300788"))) PPC_WEAK_FUNC(sub_83300788);
PPC_FUNC_IMPL(__imp__sub_83300788) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,4(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// b 0x832f3100
	sub_832F3100(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83300790"))) PPC_WEAK_FUNC(sub_83300790);
PPC_FUNC_IMPL(__imp__sub_83300790) {
	PPC_FUNC_PROLOGUE();
	// stw r4,80(r3)
	PPC_STORE_U32(ctx.r3.u32 + 80, ctx.r4.u32);
	// stw r5,84(r3)
	PPC_STORE_U32(ctx.r3.u32 + 84, ctx.r5.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8330079C"))) PPC_WEAK_FUNC(sub_8330079C);
PPC_FUNC_IMPL(__imp__sub_8330079C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_833007A0"))) PPC_WEAK_FUNC(sub_833007A0);
PPC_FUNC_IMPL(__imp__sub_833007A0) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,4(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// b 0x832f31c8
	sub_832F31C8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_833007A8"))) PPC_WEAK_FUNC(sub_833007A8);
PPC_FUNC_IMPL(__imp__sub_833007A8) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,4(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// b 0x83110a28
	sub_83110A28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_833007B0"))) PPC_WEAK_FUNC(sub_833007B0);
PPC_FUNC_IMPL(__imp__sub_833007B0) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,4(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// b 0x832f31d0
	sub_832F31D0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_833007B8"))) PPC_WEAK_FUNC(sub_833007B8);
PPC_FUNC_IMPL(__imp__sub_833007B8) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,4(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// b 0x832f3220
	sub_832F3220(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_833007C0"))) PPC_WEAK_FUNC(sub_833007C0);
PPC_FUNC_IMPL(__imp__sub_833007C0) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,4(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// b 0x8287b288
	sub_8287B288(ctx, base);
	return;
}

