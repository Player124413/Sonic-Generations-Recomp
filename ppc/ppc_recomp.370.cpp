#include "ppc_recomp_shared.h"

__attribute__((alias("__imp__sub_830F92F0"))) PPC_WEAK_FUNC(sub_830F92F0);
PPC_FUNC_IMPL(__imp__sub_830F92F0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x833a0198
	ctx.lr = 0x830F92F8;
	__savegprlr_24(ctx, base);
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,1
	ctx.r11.s64 = 65536;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// ori r11,r11,49176
	ctx.r11.u64 = ctx.r11.u64 | 49176;
	// lbzx r11,r3,r11
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + ctx.r11.u32);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x830f9628
	if (!ctx.cr0.eq) goto loc_830F9628;
	// addis r29,r3,3
	ctx.r29.s64 = ctx.r3.s64 + 196608;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// addi r29,r29,-32672
	ctx.r29.s64 = ctx.r29.s64 + -32672;
	// lwz r4,0(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// bl 0x830d58e8
	ctx.lr = 0x830F9328;
	sub_830D58E8(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// bl 0x830d6d70
	ctx.lr = 0x830F9330;
	sub_830D6D70(ctx, base);
	// lis r11,-32228
	ctx.r11.s64 = -2112094208;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r4,r11,-6592
	ctx.r4.s64 = ctx.r11.s64 + -6592;
	// bl 0x830d67b8
	ctx.lr = 0x830F9340;
	sub_830D67B8(ctx, base);
	// lis r11,2
	ctx.r11.s64 = 131072;
	// lis r10,1
	ctx.r10.s64 = 65536;
	// lis r24,-31827
	ctx.r24.s64 = -2085814272;
	// ori r25,r11,32844
	ctx.r25.u64 = ctx.r11.u64 | 32844;
	// ori r26,r10,49168
	ctx.r26.u64 = ctx.r10.u64 | 49168;
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x830f9524
	if (ctx.cr0.eq) goto loc_830F9524;
	// lis r11,-32228
	ctx.r11.s64 = -2112094208;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r4,r11,-6576
	ctx.r4.s64 = ctx.r11.s64 + -6576;
	// bl 0x830d67b8
	ctx.lr = 0x830F936C;
	sub_830D67B8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x830f9524
	if (ctx.cr0.eq) goto loc_830F9524;
	// lis r11,-32228
	ctx.r11.s64 = -2112094208;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r4,r11,-6564
	ctx.r4.s64 = ctx.r11.s64 + -6564;
	// bl 0x830d67b8
	ctx.lr = 0x830F9384;
	sub_830D67B8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x830f9524
	if (ctx.cr0.eq) goto loc_830F9524;
	// lis r11,-32228
	ctx.r11.s64 = -2112094208;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r4,r11,-6548
	ctx.r4.s64 = ctx.r11.s64 + -6548;
	// bl 0x830d67b8
	ctx.lr = 0x830F939C;
	sub_830D67B8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x830f9524
	if (ctx.cr0.eq) goto loc_830F9524;
	// lis r11,-32228
	ctx.r11.s64 = -2112094208;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r4,r11,-6528
	ctx.r4.s64 = ctx.r11.s64 + -6528;
	// bl 0x830d67b8
	ctx.lr = 0x830F93B4;
	sub_830D67B8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x830f9524
	if (ctx.cr0.eq) goto loc_830F9524;
	// lis r11,-32228
	ctx.r11.s64 = -2112094208;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r4,r11,-6516
	ctx.r4.s64 = ctx.r11.s64 + -6516;
	// bl 0x830d67b8
	ctx.lr = 0x830F93CC;
	sub_830D67B8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x830f9524
	if (ctx.cr0.eq) goto loc_830F9524;
	// lis r11,-32228
	ctx.r11.s64 = -2112094208;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r4,r11,-6504
	ctx.r4.s64 = ctx.r11.s64 + -6504;
	// bl 0x830d67b8
	ctx.lr = 0x830F93E4;
	sub_830D67B8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x830f9524
	if (ctx.cr0.eq) goto loc_830F9524;
	// lis r11,-32228
	ctx.r11.s64 = -2112094208;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r4,r11,-6816
	ctx.r4.s64 = ctx.r11.s64 + -6816;
	// bl 0x830d67b8
	ctx.lr = 0x830F93FC;
	sub_830D67B8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x830f94b0
	if (ctx.cr0.eq) goto loc_830F94B0;
	// lis r11,-32228
	ctx.r11.s64 = -2112094208;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r4,r11,-6804
	ctx.r4.s64 = ctx.r11.s64 + -6804;
	// bl 0x830d67b8
	ctx.lr = 0x830F9414;
	sub_830D67B8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x830f94b0
	if (ctx.cr0.eq) goto loc_830F94B0;
	// lis r11,-32228
	ctx.r11.s64 = -2112094208;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r4,r11,-6792
	ctx.r4.s64 = ctx.r11.s64 + -6792;
	// bl 0x830d67b8
	ctx.lr = 0x830F942C;
	sub_830D67B8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x830f94b0
	if (ctx.cr0.eq) goto loc_830F94B0;
	// lis r11,-32228
	ctx.r11.s64 = -2112094208;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r4,r11,-6780
	ctx.r4.s64 = ctx.r11.s64 + -6780;
	// bl 0x830d67b8
	ctx.lr = 0x830F9444;
	sub_830D67B8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x830f94b0
	if (ctx.cr0.eq) goto loc_830F94B0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8313d0e8
	ctx.lr = 0x830F9454;
	sub_8313D0E8(ctx, base);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,999
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 999, ctx.xer);
	// lwz r3,0(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// addis r31,r28,2
	ctx.r31.s64 = ctx.r28.s64 + 131072;
	// addi r31,r31,-16364
	ctx.r31.s64 = ctx.r31.s64 + -16364;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bne cr6,0x830f94a4
	if (!ctx.cr6.eq) goto loc_830F94A4;
	// bctrl 
	ctx.lr = 0x830F9480;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r30,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r30.u32);
	// li r6,16384
	ctx.r6.s64 = 16384;
	// lwz r3,-5096(r24)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r24.u32 + -5096);
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// lwz r7,0(r29)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x830fdc20
	ctx.lr = 0x830F949C;
	sub_830FDC20(ctx, base);
	// stwx r3,r28,r25
	PPC_STORE_U32(ctx.r28.u32 + ctx.r25.u32, ctx.r3.u32);
	// b 0x830f95b0
	goto loc_830F95B0;
loc_830F94A4:
	// bctrl 
	ctx.lr = 0x830F94A8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r30,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r30.u32);
	// b 0x830f95b0
	goto loc_830F95B0;
loc_830F94B0:
	// lwz r3,0(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x830F94C8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwzx r11,r28,r26
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + ctx.r26.u32);
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x830f94dc
	if (ctx.cr6.eq) goto loc_830F94DC;
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x830f9550
	if (!ctx.cr6.eq) goto loc_830F9550;
loc_830F94DC:
	// lwz r3,0(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// mr r27,r11
	ctx.r27.u64 = ctx.r11.u64;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// addis r31,r28,2
	ctx.r31.s64 = ctx.r28.s64 + 131072;
	// addi r31,r31,-16364
	ctx.r31.s64 = ctx.r31.s64 + -16364;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bne cr6,0x830f9514
	if (!ctx.cr6.eq) goto loc_830F9514;
	// bctrl 
	ctx.lr = 0x830F9508;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r10,-32228
	ctx.r10.s64 = -2112094208;
	// addi r3,r10,-6724
	ctx.r3.s64 = ctx.r10.s64 + -6724;
	// b 0x830f959c
	goto loc_830F959C;
loc_830F9514:
	// bctrl 
	ctx.lr = 0x830F9518;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r10,-32228
	ctx.r10.s64 = -2112094208;
	// addi r3,r10,-6764
	ctx.r3.s64 = ctx.r10.s64 + -6764;
	// b 0x830f959c
	goto loc_830F959C;
loc_830F9524:
	// lwz r3,0(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x830F953C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwzx r11,r28,r26
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + ctx.r26.u32);
	// cmpwi cr6,r11,6
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 6, ctx.xer);
	// beq cr6,0x830f9558
	if (ctx.cr6.eq) goto loc_830F9558;
	// cmpwi cr6,r11,5
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 5, ctx.xer);
	// beq cr6,0x830f9558
	if (ctx.cr6.eq) goto loc_830F9558;
loc_830F9550:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x830f962c
	goto loc_830F962C;
loc_830F9558:
	// lwz r3,0(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// mr r27,r11
	ctx.r27.u64 = ctx.r11.u64;
	// cmpwi cr6,r11,6
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 6, ctx.xer);
	// addis r31,r28,2
	ctx.r31.s64 = ctx.r28.s64 + 131072;
	// addi r31,r31,-16364
	ctx.r31.s64 = ctx.r31.s64 + -16364;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bne cr6,0x830f9590
	if (!ctx.cr6.eq) goto loc_830F9590;
	// bctrl 
	ctx.lr = 0x830F9584;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r10,-32228
	ctx.r10.s64 = -2112094208;
	// addi r3,r10,-6428
	ctx.r3.s64 = ctx.r10.s64 + -6428;
	// b 0x830f959c
	goto loc_830F959C;
loc_830F9590:
	// bctrl 
	ctx.lr = 0x830F9594;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r10,-32228
	ctx.r10.s64 = -2112094208;
	// addi r3,r10,-6472
	ctx.r3.s64 = ctx.r10.s64 + -6472;
loc_830F959C:
	// li r11,0
	ctx.r11.s64 = 0;
	// lwz r4,0(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// bl 0x830d58e8
	ctx.lr = 0x830F95AC;
	sub_830D58E8(ctx, base);
	// stw r3,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r3.u32);
loc_830F95B0:
	// lwzx r11,r28,r25
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + ctx.r25.u32);
	// add r30,r28,r25
	ctx.r30.u64 = ctx.r28.u64 + ctx.r25.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x830f9624
	if (!ctx.cr6.eq) goto loc_830F9624;
	// li r6,16384
	ctx.r6.s64 = 16384;
	// lwz r3,-5096(r24)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r24.u32 + -5096);
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// lwz r7,0(r29)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// bl 0x830fdb10
	ctx.lr = 0x830F95D8;
	sub_830FDB10(ctx, base);
	// stw r3,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r3.u32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne 0x830f9624
	if (!ctx.cr0.eq) goto loc_830F9624;
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// lis r9,-32228
	ctx.r9.s64 = -2112094208;
	// li r10,0
	ctx.r10.s64 = 0;
	// lwz r7,0(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r4,r9,21880
	ctx.r4.s64 = ctx.r9.s64 + 21880;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r6,98
	ctx.r6.s64 = 98;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// li r5,1358
	ctx.r5.s64 = 1358;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x830f8ea8
	ctx.lr = 0x830F9614;
	sub_830F8EA8(ctx, base);
	// lis r11,-32194
	ctx.r11.s64 = -2109865984;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// addi r4,r11,-27696
	ctx.r4.s64 = ctx.r11.s64 + -27696;
	// bl 0x833a7198
	ctx.lr = 0x830F9624;
	sub_833A7198(ctx, base);
loc_830F9624:
	// stwx r27,r28,r26
	PPC_STORE_U32(ctx.r28.u32 + ctx.r26.u32, ctx.r27.u32);
loc_830F9628:
	// li r3,1
	ctx.r3.s64 = 1;
loc_830F962C:
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x833a01e8
	__restgprlr_24(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_830F9634"))) PPC_WEAK_FUNC(sub_830F9634);
PPC_FUNC_IMPL(__imp__sub_830F9634) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_830F9638"))) PPC_WEAK_FUNC(sub_830F9638);
PPC_FUNC_IMPL(__imp__sub_830F9638) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x833a01ac
	ctx.lr = 0x830F9640;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addis r30,r3,2
	ctx.r30.s64 = ctx.r3.s64 + 131072;
	// addis r29,r3,3
	ctx.r29.s64 = ctx.r3.s64 + 196608;
	// addi r30,r30,-16352
	ctx.r30.s64 = ctx.r30.s64 + -16352;
	// addi r29,r29,-32732
	ctx.r29.s64 = ctx.r29.s64 + -32732;
	// lis r11,1
	ctx.r11.s64 = 65536;
	// li r10,0
	ctx.r10.s64 = 0;
	// ori r11,r11,49188
	ctx.r11.u64 = ctx.r11.u64 | 49188;
	// lwz r9,0(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r8,0(r29)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// subf. r31,r9,r8
	ctx.r31.s64 = ctx.r8.s64 - ctx.r9.s64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x830f9694
	if (ctx.cr0.eq) goto loc_830F9694;
	// mtctr r31
	ctx.ctr.u64 = ctx.r31.u64;
	// add r7,r3,r11
	ctx.r7.u64 = ctx.r3.u64 + ctx.r11.u64;
loc_830F9678:
	// lwz r8,0(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// add r9,r10,r3
	ctx.r9.u64 = ctx.r10.u64 + ctx.r3.u64;
	// add r9,r9,r8
	ctx.r9.u64 = ctx.r9.u64 + ctx.r8.u64;
	// lbzx r9,r9,r11
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r9.u32 + ctx.r11.u32);
	// stbx r9,r7,r10
	PPC_STORE_U8(ctx.r7.u32 + ctx.r10.u32, ctx.r9.u8);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// bdnz 0x830f9678
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_830F9678;
loc_830F9694:
	// lis r10,2
	ctx.r10.s64 = 131072;
	// add r8,r31,r3
	ctx.r8.u64 = ctx.r31.u64 + ctx.r3.u64;
	// ori r10,r10,32836
	ctx.r10.u64 = ctx.r10.u64 | 32836;
	// add r4,r8,r11
	ctx.r4.u64 = ctx.r8.u64 + ctx.r11.u64;
	// lis r9,0
	ctx.r9.s64 = 0;
	// ori r9,r9,49152
	ctx.r9.u64 = ctx.r9.u64 | 49152;
	// lwzx r3,r3,r10
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + ctx.r10.u32);
	// subf r5,r31,r9
	ctx.r5.s64 = ctx.r9.s64 - ctx.r31.s64;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x830F96C4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// add r11,r3,r31
	ctx.r11.u64 = ctx.r3.u64 + ctx.r31.u64;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r11.u32);
	// stw r10,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r10.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x833a01fc
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_830F96DC"))) PPC_WEAK_FUNC(sub_830F96DC);
PPC_FUNC_IMPL(__imp__sub_830F96DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_830F96E0"))) PPC_WEAK_FUNC(sub_830F96E0);
PPC_FUNC_IMPL(__imp__sub_830F96E0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x833a01a0
	ctx.lr = 0x830F96E8;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addis r29,r3,3
	ctx.r29.s64 = ctx.r3.s64 + 196608;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r29,r29,-32732
	ctx.r29.s64 = ctx.r29.s64 + -32732;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// mr r27,r5
	ctx.r27.u64 = ctx.r5.u64;
	// mr r26,r6
	ctx.r26.u64 = ctx.r6.u64;
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x830f9718
	if (!ctx.cr6.eq) goto loc_830F9718;
loc_830F9710:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x830f9794
	goto loc_830F9794;
loc_830F9718:
	// addis r30,r31,2
	ctx.r30.s64 = ctx.r31.s64 + 131072;
	// addi r30,r30,-16352
	ctx.r30.s64 = ctx.r30.s64 + -16352;
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// subf r10,r10,r11
	ctx.r10.s64 = ctx.r11.s64 - ctx.r10.s64;
	// cmplwi cr6,r10,100
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 100, ctx.xer);
	// bge cr6,0x830f9744
	if (!ctx.cr6.lt) goto loc_830F9744;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x830f9638
	ctx.lr = 0x830F9738;
	sub_830F9638(ctx, base);
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x830f9710
	if (ctx.cr6.eq) goto loc_830F9710;
loc_830F9744:
	// lis r8,2
	ctx.r8.s64 = 131072;
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r9,r27
	ctx.r9.u64 = ctx.r27.u64;
	// ori r5,r8,32844
	ctx.r5.u64 = ctx.r8.u64 | 32844;
	// add r4,r10,r31
	ctx.r4.u64 = ctx.r10.u64 + ctx.r31.u64;
	// addi r8,r1,80
	ctx.r8.s64 = ctx.r1.s64 + 80;
	// addis r4,r4,2
	ctx.r4.s64 = ctx.r4.s64 + 131072;
	// mr r7,r26
	ctx.r7.u64 = ctx.r26.u64;
	// lwzx r3,r31,r5
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r5.u32);
	// subf r5,r10,r11
	ctx.r5.s64 = ctx.r11.s64 - ctx.r10.s64;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// addi r4,r4,-16348
	ctx.r4.s64 = ctx.r4.s64 + -16348;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x830F9784;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
loc_830F9794:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x833a01f0
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_830F979C"))) PPC_WEAK_FUNC(sub_830F979C);
PPC_FUNC_IMPL(__imp__sub_830F979C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_830F97A0"))) PPC_WEAK_FUNC(sub_830F97A0);
PPC_FUNC_IMPL(__imp__sub_830F97A0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x833a0170
	ctx.lr = 0x830F97A8;
	__savegprlr_14(ctx, base);
	// stwu r1,-288(r1)
	ea = -288 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r29,396(r1)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r1.u32 + 396);
	// mr r21,r8
	ctx.r21.u64 = ctx.r8.u64;
	// mr r15,r9
	ctx.r15.u64 = ctx.r9.u64;
	// mr r20,r10
	ctx.r20.u64 = ctx.r10.u64;
	// lis r11,1
	ctx.r11.s64 = 65536;
	// lis r10,1
	ctx.r10.s64 = 65536;
	// lis r9,1
	ctx.r9.s64 = 65536;
	// lis r8,1
	ctx.r8.s64 = 65536;
	// addis r23,r31,1
	ctx.r23.s64 = ctx.r31.s64 + 65536;
	// addis r25,r31,2
	ctx.r25.s64 = ctx.r31.s64 + 131072;
	// addis r26,r31,2
	ctx.r26.s64 = ctx.r31.s64 + 131072;
	// ori r11,r11,49160
	ctx.r11.u64 = ctx.r11.u64 | 49160;
	// ori r10,r10,49164
	ctx.r10.u64 = ctx.r10.u64 | 49164;
	// ori r9,r9,49176
	ctx.r9.u64 = ctx.r9.u64 | 49176;
	// ori r8,r8,49177
	ctx.r8.u64 = ctx.r8.u64 | 49177;
	// addi r23,r23,-32764
	ctx.r23.s64 = ctx.r23.s64 + -32764;
	// addi r25,r25,-16368
	ctx.r25.s64 = ctx.r25.s64 + -16368;
	// addi r26,r26,-16364
	ctx.r26.s64 = ctx.r26.s64 + -16364;
	// mr r16,r7
	ctx.r16.u64 = ctx.r7.u64;
	// li r30,0
	ctx.r30.s64 = 0;
	// li r22,1
	ctx.r22.s64 = 1;
	// li r7,4
	ctx.r7.s64 = 4;
	// stw r30,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r30.u32);
	// stwx r22,r31,r11
	PPC_STORE_U32(ctx.r31.u32 + ctx.r11.u32, ctx.r22.u32);
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// stwx r22,r31,r10
	PPC_STORE_U32(ctx.r31.u32 + ctx.r10.u32, ctx.r22.u32);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// stbx r22,r31,r9
	PPC_STORE_U8(ctx.r31.u32 + ctx.r9.u32, ctx.r22.u8);
	// mr r24,r5
	ctx.r24.u64 = ctx.r5.u64;
	// stbx r30,r31,r8
	PPC_STORE_U8(ctx.r31.u32 + ctx.r8.u32, ctx.r30.u8);
	// mr r19,r6
	ctx.r19.u64 = ctx.r6.u64;
	// stw r30,0(r23)
	PPC_STORE_U32(ctx.r23.u32 + 0, ctx.r30.u32);
	// stw r7,0(r25)
	PPC_STORE_U32(ctx.r25.u32 + 0, ctx.r7.u32);
	// stw r30,0(r26)
	PPC_STORE_U32(ctx.r26.u32 + 0, ctx.r30.u32);
	// bl 0x830d58e8
	ctx.lr = 0x830F983C;
	sub_830D58E8(ctx, base);
	// lis r11,1
	ctx.r11.s64 = 65536;
	// lis r10,2
	ctx.r10.s64 = 131072;
	// lbz r9,383(r1)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r1.u32 + 383);
	// ori r11,r11,49180
	ctx.r11.u64 = ctx.r11.u64 | 49180;
	// lis r8,2
	ctx.r8.s64 = 131072;
	// lis r7,2
	ctx.r7.s64 = 131072;
	// lis r6,2
	ctx.r6.s64 = 131072;
	// lis r5,2
	ctx.r5.s64 = 131072;
	// addis r27,r31,2
	ctx.r27.s64 = ctx.r31.s64 + 131072;
	// stwx r3,r31,r11
	PPC_STORE_U32(ctx.r31.u32 + ctx.r11.u32, ctx.r3.u32);
	// addis r28,r31,3
	ctx.r28.s64 = ctx.r31.s64 + 196608;
	// addis r17,r31,3
	ctx.r17.s64 = ctx.r31.s64 + 196608;
	// addis r14,r31,3
	ctx.r14.s64 = ctx.r31.s64 + 196608;
	// ori r10,r10,32808
	ctx.r10.u64 = ctx.r10.u64 | 32808;
	// ori r8,r8,32816
	ctx.r8.u64 = ctx.r8.u64 | 32816;
	// ori r7,r7,32820
	ctx.r7.u64 = ctx.r7.u64 | 32820;
	// ori r6,r6,32824
	ctx.r6.u64 = ctx.r6.u64 | 32824;
	// ori r5,r5,32829
	ctx.r5.u64 = ctx.r5.u64 | 32829;
	// addi r27,r27,-16352
	ctx.r27.s64 = ctx.r27.s64 + -16352;
	// addi r28,r28,-32732
	ctx.r28.s64 = ctx.r28.s64 + -32732;
	// stbx r30,r31,r8
	PPC_STORE_U8(ctx.r31.u32 + ctx.r8.u32, ctx.r30.u8);
	// addi r17,r17,-32724
	ctx.r17.s64 = ctx.r17.s64 + -32724;
	// stwx r20,r31,r7
	PPC_STORE_U32(ctx.r31.u32 + ctx.r7.u32, ctx.r20.u32);
	// addi r14,r14,-32708
	ctx.r14.s64 = ctx.r14.s64 + -32708;
	// stwx r30,r31,r6
	PPC_STORE_U32(ctx.r31.u32 + ctx.r6.u32, ctx.r30.u32);
	// li r11,-1
	ctx.r11.s64 = -1;
	// stbx r9,r31,r5
	PPC_STORE_U8(ctx.r31.u32 + ctx.r5.u32, ctx.r9.u8);
	// stw r30,0(r27)
	PPC_STORE_U32(ctx.r27.u32 + 0, ctx.r30.u32);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// stw r30,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r30.u32);
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// stw r21,0(r17)
	PPC_STORE_U32(ctx.r17.u32 + 0, ctx.r21.u32);
	// stb r30,0(r14)
	PPC_STORE_U8(ctx.r14.u32 + 0, ctx.r30.u8);
	// stwx r11,r31,r10
	PPC_STORE_U32(ctx.r31.u32 + ctx.r10.u32, ctx.r11.u32);
	// bl 0x830d58e8
	ctx.lr = 0x830F98C8;
	sub_830D58E8(ctx, base);
	// addis r21,r31,3
	ctx.r21.s64 = ctx.r31.s64 + 196608;
	// addis r20,r31,3
	ctx.r20.s64 = ctx.r31.s64 + 196608;
	// lbz r9,375(r1)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r1.u32 + 375);
	// lwz r4,388(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 388);
	// lis r11,2
	ctx.r11.s64 = 131072;
	// lis r10,2
	ctx.r10.s64 = 131072;
	// lis r8,2
	ctx.r8.s64 = 131072;
	// addi r21,r21,-32696
	ctx.r21.s64 = ctx.r21.s64 + -32696;
	// addi r20,r20,-32692
	ctx.r20.s64 = ctx.r20.s64 + -32692;
	// addis r18,r31,3
	ctx.r18.s64 = ctx.r31.s64 + 196608;
	// addis r24,r31,3
	ctx.r24.s64 = ctx.r31.s64 + 196608;
	// stb r30,0(r21)
	PPC_STORE_U8(ctx.r21.u32 + 0, ctx.r30.u8);
	// ori r11,r11,32832
	ctx.r11.u64 = ctx.r11.u64 | 32832;
	// stw r30,0(r20)
	PPC_STORE_U32(ctx.r20.u32 + 0, ctx.r30.u32);
	// ori r10,r10,32836
	ctx.r10.u64 = ctx.r10.u64 | 32836;
	// ori r8,r8,32841
	ctx.r8.u64 = ctx.r8.u64 | 32841;
	// addi r18,r18,-32688
	ctx.r18.s64 = ctx.r18.s64 + -32688;
	// addi r24,r24,-32672
	ctx.r24.s64 = ctx.r24.s64 + -32672;
	// stwx r3,r31,r11
	PPC_STORE_U32(ctx.r31.u32 + ctx.r11.u32, ctx.r3.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stwx r19,r31,r10
	PPC_STORE_U32(ctx.r31.u32 + ctx.r10.u32, ctx.r19.u32);
	// stbx r9,r31,r8
	PPC_STORE_U8(ctx.r31.u32 + ctx.r8.u32, ctx.r9.u8);
	// stw r15,0(r18)
	PPC_STORE_U32(ctx.r18.u32 + 0, ctx.r15.u32);
	// stw r29,0(r24)
	PPC_STORE_U32(ctx.r24.u32 + 0, ctx.r29.u32);
	// bl 0x830ed250
	ctx.lr = 0x830F992C;
	sub_830ED250(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x830f9638
	ctx.lr = 0x830F9934;
	sub_830F9638(ctx, base);
	// mr r3,r16
	ctx.r3.u64 = ctx.r16.u64;
	// lwz r4,0(r24)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r24.u32 + 0);
	// bl 0x830d58e8
	ctx.lr = 0x830F9940;
	sub_830D58E8(ctx, base);
	// stw r3,0(r26)
	PPC_STORE_U32(ctx.r26.u32 + 0, ctx.r3.u32);
	// bl 0x830d6d70
	ctx.lr = 0x830F9948;
	sub_830D6D70(ctx, base);
	// lis r19,-31827
	ctx.r19.s64 = -2085814272;
	// lwz r3,-5096(r19)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r19.u32 + -5096);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,24(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x830F9960;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stb r3,0(r14)
	PPC_STORE_U8(ctx.r14.u32 + 0, ctx.r3.u8);
	// lwz r3,0(r26)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// bl 0x8313d0e8
	ctx.lr = 0x830F996C;
	sub_8313D0E8(ctx, base);
	// stw r3,0(r25)
	PPC_STORE_U32(ctx.r25.u32 + 0, ctx.r3.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// ble 0x830f9aa4
	if (!ctx.cr0.gt) goto loc_830F9AA4;
	// cmpwi cr6,r3,2
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 2, ctx.xer);
	// ble cr6,0x830f9a0c
	if (!ctx.cr6.gt) goto loc_830F9A0C;
	// cmpwi cr6,r3,4
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 4, ctx.xer);
	// beq cr6,0x830f99cc
	if (ctx.cr6.eq) goto loc_830F99CC;
	// ble cr6,0x830f9aa4
	if (!ctx.cr6.gt) goto loc_830F9AA4;
	// cmpwi cr6,r3,6
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 6, ctx.xer);
	// bgt cr6,0x830f9aa4
	if (ctx.cr6.gt) goto loc_830F9AA4;
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// cmplwi cr6,r11,2
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 2, ctx.xer);
	// blt cr6,0x830f9aa4
	if (ctx.cr6.lt) goto loc_830F9AA4;
	// lwz r11,0(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// lis r10,1
	ctx.r10.s64 = 65536;
	// ori r10,r10,49188
	ctx.r10.u64 = ctx.r10.u64 | 49188;
	// add r9,r11,r31
	ctx.r9.u64 = ctx.r11.u64 + ctx.r31.u64;
	// lhzx r10,r9,r10
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r9.u32 + ctx.r10.u32);
	// cmplwi cr6,r10,65279
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 65279, ctx.xer);
	// beq cr6,0x830f99c4
	if (ctx.cr6.eq) goto loc_830F99C4;
	// cmplwi cr6,r10,65534
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 65534, ctx.xer);
	// bne cr6,0x830f9aa4
	if (!ctx.cr6.eq) goto loc_830F9AA4;
loc_830F99C4:
	// addi r11,r11,2
	ctx.r11.s64 = ctx.r11.s64 + 2;
	// b 0x830f9aa0
	goto loc_830F9AA0;
loc_830F99CC:
	// lis r29,-32227
	ctx.r29.s64 = -2112028672;
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// lwz r5,1036(r29)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r29.u32 + 1036);
	// cmplw cr6,r11,r5
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r5.u32, ctx.xer);
	// ble cr6,0x830f9aa4
	if (!ctx.cr6.gt) goto loc_830F9AA4;
	// lis r11,-32227
	ctx.r11.s64 = -2112028672;
	// addis r3,r31,2
	ctx.r3.s64 = ctx.r31.s64 + 131072;
	// addi r4,r11,1032
	ctx.r4.s64 = ctx.r11.s64 + 1032;
	// addi r3,r3,-16348
	ctx.r3.s64 = ctx.r3.s64 + -16348;
	// bl 0x830d5f80
	ctx.lr = 0x830F99F4;
	sub_830D5F80(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x830f9aa4
	if (!ctx.cr0.eq) goto loc_830F9AA4;
	// lwz r10,0(r27)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// lwz r11,1036(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 1036);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// b 0x830f9aa0
	goto loc_830F9AA0;
loc_830F9A0C:
	// lis r11,1
	ctx.r11.s64 = 65536;
	// lwz r7,0(r28)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// lis r9,1
	ctx.r9.s64 = 65536;
	// lis r8,1
	ctx.r8.s64 = 65536;
	// lis r6,1
	ctx.r6.s64 = 65536;
	// ori r10,r11,49189
	ctx.r10.u64 = ctx.r11.u64 | 49189;
	// ori r9,r9,49190
	ctx.r9.u64 = ctx.r9.u64 | 49190;
	// ori r8,r8,49191
	ctx.r8.u64 = ctx.r8.u64 | 49191;
	// ori r11,r6,49188
	ctx.r11.u64 = ctx.r6.u64 | 49188;
	// cmplwi cr6,r7,4
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 4, ctx.xer);
	// ble cr6,0x830f9a68
	if (!ctx.cr6.gt) goto loc_830F9A68;
	// lbzx r7,r31,r11
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r31.u32 + ctx.r11.u32);
	// cmplwi r7,0
	ctx.cr0.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// bne 0x830f9a68
	if (!ctx.cr0.eq) goto loc_830F9A68;
	// lbzx r7,r31,r10
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r31.u32 + ctx.r10.u32);
	// cmplwi r7,0
	ctx.cr0.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// bne 0x830f9a68
	if (!ctx.cr0.eq) goto loc_830F9A68;
	// lbzx r7,r31,r9
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r31.u32 + ctx.r9.u32);
	// cmplwi cr6,r7,254
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 254, ctx.xer);
	// bne cr6,0x830f9a68
	if (!ctx.cr6.eq) goto loc_830F9A68;
	// lbzx r7,r31,r8
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r31.u32 + ctx.r8.u32);
	// cmplwi cr6,r7,255
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 255, ctx.xer);
	// beq cr6,0x830f9a98
	if (ctx.cr6.eq) goto loc_830F9A98;
loc_830F9A68:
	// lbzx r11,r31,r11
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + ctx.r11.u32);
	// cmplwi cr6,r11,255
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 255, ctx.xer);
	// bne cr6,0x830f9aa4
	if (!ctx.cr6.eq) goto loc_830F9AA4;
	// lbzx r11,r31,r10
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + ctx.r10.u32);
	// cmplwi cr6,r11,254
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 254, ctx.xer);
	// bne cr6,0x830f9aa4
	if (!ctx.cr6.eq) goto loc_830F9AA4;
	// lbzx r11,r31,r9
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + ctx.r9.u32);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x830f9aa4
	if (!ctx.cr0.eq) goto loc_830F9AA4;
	// lbzx r11,r31,r8
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + ctx.r8.u32);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x830f9aa4
	if (!ctx.cr0.eq) goto loc_830F9AA4;
loc_830F9A98:
	// lwz r11,0(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
loc_830F9AA0:
	// stw r11,0(r27)
	PPC_STORE_U32(ctx.r27.u32 + 0, ctx.r11.u32);
loc_830F9AA4:
	// lwz r4,0(r25)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r25.u32 + 0);
	// stb r30,0(r21)
	PPC_STORE_U8(ctx.r21.u32 + 0, ctx.r30.u8);
	// cmpwi cr6,r4,5
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 5, ctx.xer);
	// beq cr6,0x830f9abc
	if (ctx.cr6.eq) goto loc_830F9ABC;
	// cmpwi cr6,r4,1
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 1, ctx.xer);
	// bne cr6,0x830f9ac0
	if (!ctx.cr6.eq) goto loc_830F9AC0;
loc_830F9ABC:
	// stb r22,0(r21)
	PPC_STORE_U8(ctx.r21.u32 + 0, ctx.r22.u8);
loc_830F9AC0:
	// lwz r3,-5096(r19)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r19.u32 + -5096);
	// cmpwi cr6,r4,999
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 999, ctx.xer);
	// lwz r7,0(r24)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r24.u32 + 0);
	// li r6,16384
	ctx.r6.s64 = 16384;
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// bne cr6,0x830f9ae4
	if (!ctx.cr6.eq) goto loc_830F9AE4;
	// lwz r4,0(r26)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// bl 0x830fdc20
	ctx.lr = 0x830F9AE0;
	sub_830FDC20(ctx, base);
	// b 0x830f9ae8
	goto loc_830F9AE8;
loc_830F9AE4:
	// bl 0x830fdb10
	ctx.lr = 0x830F9AE8;
	sub_830FDB10(ctx, base);
loc_830F9AE8:
	// rotlwi r11,r3,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r3.u32, 0);
	// stw r3,0(r20)
	PPC_STORE_U32(ctx.r20.u32 + 0, ctx.r3.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x830f9b38
	if (!ctx.cr6.eq) goto loc_830F9B38;
	// lwz r11,0(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 0);
	// lis r9,-32228
	ctx.r9.s64 = -2112094208;
	// li r10,0
	ctx.r10.s64 = 0;
	// lwz r7,0(r26)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// addi r4,r9,21880
	ctx.r4.s64 = ctx.r9.s64 + 21880;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r6,98
	ctx.r6.s64 = 98;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// li r5,311
	ctx.r5.s64 = 311;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x830f8ea8
	ctx.lr = 0x830F9B28;
	sub_830F8EA8(ctx, base);
	// lis r11,-32194
	ctx.r11.s64 = -2109865984;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// addi r4,r11,-27696
	ctx.r4.s64 = ctx.r11.s64 + -27696;
	// bl 0x833a7198
	ctx.lr = 0x830F9B38;
	sub_833A7198(ctx, base);
loc_830F9B38:
	// lwz r11,0(r18)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r18.u32 + 0);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x830f9b94
	if (!ctx.cr6.eq) goto loc_830F9B94;
	// lwz r11,0(r17)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r17.u32 + 0);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x830f9b94
	if (!ctx.cr6.eq) goto loc_830F9B94;
	// lwz r11,0(r23)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r23.u32 + 0);
	// lis r10,0
	ctx.r10.s64 = 0;
	// li r9,32
	ctx.r9.s64 = 32;
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// ori r10,r10,32776
	ctx.r10.u64 = ctx.r10.u64 | 32776;
	// stbx r30,r11,r10
	PPC_STORE_U8(ctx.r11.u32 + ctx.r10.u32, ctx.r30.u8);
	// lwz r11,0(r23)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r23.u32 + 0);
	// addi r11,r11,12290
	ctx.r11.s64 = ctx.r11.s64 + 12290;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r30,r11,r31
	PPC_STORE_U32(ctx.r11.u32 + ctx.r31.u32, ctx.r30.u32);
	// lwz r11,0(r23)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r23.u32 + 0);
	// addi r11,r11,2
	ctx.r11.s64 = ctx.r11.s64 + 2;
	// rlwinm r11,r11,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// sthx r9,r11,r31
	PPC_STORE_U16(ctx.r11.u32 + ctx.r31.u32, ctx.r9.u16);
	// lwz r11,0(r23)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r23.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,0(r23)
	PPC_STORE_U32(ctx.r23.u32 + 0, ctx.r11.u32);
loc_830F9B94:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,288
	ctx.r1.s64 = ctx.r1.s64 + 288;
	// b 0x833a01c0
	__restgprlr_14(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_830F9BA0"))) PPC_WEAK_FUNC(sub_830F9BA0);
PPC_FUNC_IMPL(__imp__sub_830F9BA0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x833a0178
	ctx.lr = 0x830F9BA8;
	__savegprlr_16(ctx, base);
	// stwu r1,-272(r1)
	ea = -272 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r25,380(r1)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r1.u32 + 380);
	// mr r27,r8
	ctx.r27.u64 = ctx.r8.u64;
	// mr r18,r9
	ctx.r18.u64 = ctx.r9.u64;
	// mr r23,r10
	ctx.r23.u64 = ctx.r10.u64;
	// lis r11,1
	ctx.r11.s64 = 65536;
	// lis r10,1
	ctx.r10.s64 = 65536;
	// lis r9,1
	ctx.r9.s64 = 65536;
	// lis r8,1
	ctx.r8.s64 = 65536;
	// addis r29,r31,1
	ctx.r29.s64 = ctx.r31.s64 + 65536;
	// addis r17,r31,2
	ctx.r17.s64 = ctx.r31.s64 + 131072;
	// addis r24,r31,2
	ctx.r24.s64 = ctx.r31.s64 + 131072;
	// ori r11,r11,49160
	ctx.r11.u64 = ctx.r11.u64 | 49160;
	// ori r10,r10,49164
	ctx.r10.u64 = ctx.r10.u64 | 49164;
	// ori r9,r9,49176
	ctx.r9.u64 = ctx.r9.u64 | 49176;
	// ori r8,r8,49177
	ctx.r8.u64 = ctx.r8.u64 | 49177;
	// addi r29,r29,-32764
	ctx.r29.s64 = ctx.r29.s64 + -32764;
	// addi r17,r17,-16368
	ctx.r17.s64 = ctx.r17.s64 + -16368;
	// addi r24,r24,-16364
	ctx.r24.s64 = ctx.r24.s64 + -16364;
	// mr r19,r7
	ctx.r19.u64 = ctx.r7.u64;
	// li r30,0
	ctx.r30.s64 = 0;
	// li r26,1
	ctx.r26.s64 = 1;
	// li r7,4
	ctx.r7.s64 = 4;
	// stw r30,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r30.u32);
	// stwx r26,r31,r11
	PPC_STORE_U32(ctx.r31.u32 + ctx.r11.u32, ctx.r26.u32);
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// stwx r26,r31,r10
	PPC_STORE_U32(ctx.r31.u32 + ctx.r10.u32, ctx.r26.u32);
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// stbx r26,r31,r9
	PPC_STORE_U8(ctx.r31.u32 + ctx.r9.u32, ctx.r26.u8);
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// stbx r30,r31,r8
	PPC_STORE_U8(ctx.r31.u32 + ctx.r8.u32, ctx.r30.u8);
	// mr r20,r6
	ctx.r20.u64 = ctx.r6.u64;
	// stw r30,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r30.u32);
	// stw r7,0(r17)
	PPC_STORE_U32(ctx.r17.u32 + 0, ctx.r7.u32);
	// stw r30,0(r24)
	PPC_STORE_U32(ctx.r24.u32 + 0, ctx.r30.u32);
	// bl 0x830d58e8
	ctx.lr = 0x830F9C3C;
	sub_830D58E8(ctx, base);
	// lis r11,1
	ctx.r11.s64 = 65536;
	// lis r10,1
	ctx.r10.s64 = 65536;
	// lbz r9,367(r1)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r1.u32 + 367);
	// ori r11,r11,49180
	ctx.r11.u64 = ctx.r11.u64 | 49180;
	// ori r10,r10,49184
	ctx.r10.u64 = ctx.r10.u64 | 49184;
	// lis r8,2
	ctx.r8.s64 = 131072;
	// lis r4,2
	ctx.r4.s64 = 131072;
	// ori r8,r8,32804
	ctx.r8.u64 = ctx.r8.u64 | 32804;
	// lis r7,2
	ctx.r7.s64 = 131072;
	// stwx r3,r31,r11
	PPC_STORE_U32(ctx.r31.u32 + ctx.r11.u32, ctx.r3.u32);
	// lis r6,2
	ctx.r6.s64 = 131072;
	// stwx r30,r31,r10
	PPC_STORE_U32(ctx.r31.u32 + ctx.r10.u32, ctx.r30.u32);
	// lis r5,2
	ctx.r5.s64 = 131072;
	// lis r22,2
	ctx.r22.s64 = 131072;
	// addis r21,r31,3
	ctx.r21.s64 = ctx.r31.s64 + 196608;
	// stwx r30,r31,r8
	PPC_STORE_U32(ctx.r31.u32 + ctx.r8.u32, ctx.r30.u32);
	// addis r16,r31,3
	ctx.r16.s64 = ctx.r31.s64 + 196608;
	// ori r11,r4,32824
	ctx.r11.u64 = ctx.r4.u64 | 32824;
	// ori r7,r7,32808
	ctx.r7.u64 = ctx.r7.u64 | 32808;
	// ori r6,r6,32816
	ctx.r6.u64 = ctx.r6.u64 | 32816;
	// ori r5,r5,32820
	ctx.r5.u64 = ctx.r5.u64 | 32820;
	// ori r10,r22,32829
	ctx.r10.u64 = ctx.r22.u64 | 32829;
	// addi r21,r21,-32724
	ctx.r21.s64 = ctx.r21.s64 + -32724;
	// stwx r30,r31,r11
	PPC_STORE_U32(ctx.r31.u32 + ctx.r11.u32, ctx.r30.u32);
	// addi r16,r16,-32708
	ctx.r16.s64 = ctx.r16.s64 + -32708;
	// li r8,-1
	ctx.r8.s64 = -1;
	// stbx r30,r31,r6
	PPC_STORE_U8(ctx.r31.u32 + ctx.r6.u32, ctx.r30.u8);
	// stwx r23,r31,r5
	PPC_STORE_U32(ctx.r31.u32 + ctx.r5.u32, ctx.r23.u32);
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// stwx r8,r31,r7
	PPC_STORE_U32(ctx.r31.u32 + ctx.r7.u32, ctx.r8.u32);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// stw r27,0(r21)
	PPC_STORE_U32(ctx.r21.u32 + 0, ctx.r27.u32);
	// stb r30,0(r16)
	PPC_STORE_U8(ctx.r16.u32 + 0, ctx.r30.u8);
	// stbx r9,r31,r10
	PPC_STORE_U8(ctx.r31.u32 + ctx.r10.u32, ctx.r9.u8);
	// bl 0x830d58e8
	ctx.lr = 0x830F9CC8;
	sub_830D58E8(ctx, base);
	// addis r27,r31,3
	ctx.r27.s64 = ctx.r31.s64 + 196608;
	// addis r23,r31,3
	ctx.r23.s64 = ctx.r31.s64 + 196608;
	// lbz r9,359(r1)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r1.u32 + 359);
	// lwz r4,372(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 372);
	// lis r11,2
	ctx.r11.s64 = 131072;
	// lis r10,2
	ctx.r10.s64 = 131072;
	// lis r8,2
	ctx.r8.s64 = 131072;
	// addi r27,r27,-32696
	ctx.r27.s64 = ctx.r27.s64 + -32696;
	// addi r23,r23,-32692
	ctx.r23.s64 = ctx.r23.s64 + -32692;
	// addis r22,r31,3
	ctx.r22.s64 = ctx.r31.s64 + 196608;
	// addis r28,r31,3
	ctx.r28.s64 = ctx.r31.s64 + 196608;
	// stb r30,0(r27)
	PPC_STORE_U8(ctx.r27.u32 + 0, ctx.r30.u8);
	// ori r11,r11,32832
	ctx.r11.u64 = ctx.r11.u64 | 32832;
	// stw r30,0(r23)
	PPC_STORE_U32(ctx.r23.u32 + 0, ctx.r30.u32);
	// ori r10,r10,32836
	ctx.r10.u64 = ctx.r10.u64 | 32836;
	// ori r8,r8,32841
	ctx.r8.u64 = ctx.r8.u64 | 32841;
	// addi r22,r22,-32688
	ctx.r22.s64 = ctx.r22.s64 + -32688;
	// addi r28,r28,-32672
	ctx.r28.s64 = ctx.r28.s64 + -32672;
	// stwx r3,r31,r11
	PPC_STORE_U32(ctx.r31.u32 + ctx.r11.u32, ctx.r3.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stwx r20,r31,r10
	PPC_STORE_U32(ctx.r31.u32 + ctx.r10.u32, ctx.r20.u32);
	// stbx r9,r31,r8
	PPC_STORE_U8(ctx.r31.u32 + ctx.r8.u32, ctx.r9.u8);
	// stw r18,0(r22)
	PPC_STORE_U32(ctx.r22.u32 + 0, ctx.r18.u32);
	// stw r25,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r25.u32);
	// bl 0x830ed250
	ctx.lr = 0x830F9D2C;
	sub_830ED250(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x830f9638
	ctx.lr = 0x830F9D34;
	sub_830F9638(ctx, base);
	// lis r25,-31827
	ctx.r25.s64 = -2085814272;
	// lwz r3,-5096(r25)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r25.u32 + -5096);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,24(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x830F9D4C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stb r3,0(r16)
	PPC_STORE_U8(ctx.r16.u32 + 0, ctx.r3.u8);
	// mr r3,r19
	ctx.r3.u64 = ctx.r19.u64;
	// stw r19,0(r17)
	PPC_STORE_U32(ctx.r17.u32 + 0, ctx.r19.u32);
	// lwz r20,0(r28)
	ctx.r20.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// mr r4,r20
	ctx.r4.u64 = ctx.r20.u64;
	// bl 0x8313d2f0
	ctx.lr = 0x830F9D64;
	sub_8313D2F0(ctx, base);
	// mr r4,r20
	ctx.r4.u64 = ctx.r20.u64;
	// bl 0x830d58e8
	ctx.lr = 0x830F9D6C;
	sub_830D58E8(ctx, base);
	// lwz r4,0(r17)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r17.u32 + 0);
	// stw r3,0(r24)
	PPC_STORE_U32(ctx.r24.u32 + 0, ctx.r3.u32);
	// cmpwi cr6,r4,5
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 5, ctx.xer);
	// stb r30,0(r27)
	PPC_STORE_U8(ctx.r27.u32 + 0, ctx.r30.u8);
	// beq cr6,0x830f9d88
	if (ctx.cr6.eq) goto loc_830F9D88;
	// cmpwi cr6,r4,1
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 1, ctx.xer);
	// bne cr6,0x830f9d8c
	if (!ctx.cr6.eq) goto loc_830F9D8C;
loc_830F9D88:
	// stb r26,0(r27)
	PPC_STORE_U8(ctx.r27.u32 + 0, ctx.r26.u8);
loc_830F9D8C:
	// li r6,16384
	ctx.r6.s64 = 16384;
	// lwz r3,-5096(r25)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r25.u32 + -5096);
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// lwz r7,0(r28)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// bl 0x830fdb10
	ctx.lr = 0x830F9DA0;
	sub_830FDB10(ctx, base);
	// stw r3,0(r23)
	PPC_STORE_U32(ctx.r23.u32 + 0, ctx.r3.u32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne 0x830f9dec
	if (!ctx.cr0.eq) goto loc_830F9DEC;
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// lis r9,-32228
	ctx.r9.s64 = -2112094208;
	// li r10,0
	ctx.r10.s64 = 0;
	// lwz r7,0(r24)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r24.u32 + 0);
	// addi r4,r9,21880
	ctx.r4.s64 = ctx.r9.s64 + 21880;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r6,98
	ctx.r6.s64 = 98;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// li r5,407
	ctx.r5.s64 = 407;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x830f8ea8
	ctx.lr = 0x830F9DDC;
	sub_830F8EA8(ctx, base);
	// lis r11,-32194
	ctx.r11.s64 = -2109865984;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// addi r4,r11,-27696
	ctx.r4.s64 = ctx.r11.s64 + -27696;
	// bl 0x833a7198
	ctx.lr = 0x830F9DEC;
	sub_833A7198(ctx, base);
loc_830F9DEC:
	// lwz r11,0(r22)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r22.u32 + 0);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x830f9e48
	if (!ctx.cr6.eq) goto loc_830F9E48;
	// lwz r11,0(r21)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r21.u32 + 0);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x830f9e48
	if (!ctx.cr6.eq) goto loc_830F9E48;
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// lis r10,0
	ctx.r10.s64 = 0;
	// li r9,32
	ctx.r9.s64 = 32;
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// ori r10,r10,32776
	ctx.r10.u64 = ctx.r10.u64 | 32776;
	// stbx r30,r11,r10
	PPC_STORE_U8(ctx.r11.u32 + ctx.r10.u32, ctx.r30.u8);
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// addi r11,r11,12290
	ctx.r11.s64 = ctx.r11.s64 + 12290;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r30,r11,r31
	PPC_STORE_U32(ctx.r11.u32 + ctx.r31.u32, ctx.r30.u32);
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// addi r11,r11,2
	ctx.r11.s64 = ctx.r11.s64 + 2;
	// rlwinm r11,r11,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// sthx r9,r11,r31
	PPC_STORE_U16(ctx.r11.u32 + ctx.r31.u32, ctx.r9.u16);
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r11.u32);
loc_830F9E48:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,272
	ctx.r1.s64 = ctx.r1.s64 + 272;
	// b 0x833a01c8
	__restgprlr_16(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_830F9E54"))) PPC_WEAK_FUNC(sub_830F9E54);
PPC_FUNC_IMPL(__imp__sub_830F9E54) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_830F9E58"))) PPC_WEAK_FUNC(sub_830F9E58);
PPC_FUNC_IMPL(__imp__sub_830F9E58) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x833a019c
	ctx.lr = 0x830F9E60;
	__savegprlr_25(ctx, base);
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addis r25,r3,2
	ctx.r25.s64 = ctx.r3.s64 + 131072;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r25,r25,-16359
	ctx.r25.s64 = ctx.r25.s64 + -16359;
	// lbz r11,0(r25)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r25.u32 + 0);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x830f9e84
	if (ctx.cr0.eq) goto loc_830F9E84;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x830fa118
	goto loc_830FA118;
loc_830F9E84:
	// addis r27,r31,1
	ctx.r27.s64 = ctx.r31.s64 + 65536;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r27,r27,-32764
	ctx.r27.s64 = ctx.r27.s64 + -32764;
	// lwz r10,0(r27)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// subf r26,r11,r10
	ctx.r26.s64 = ctx.r10.s64 - ctx.r11.s64;
	// cmplwi cr6,r26,16384
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, 16384, ctx.xer);
	// bne cr6,0x830f9ea8
	if (!ctx.cr6.eq) goto loc_830F9EA8;
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x830fa118
	goto loc_830FA118;
loc_830F9EA8:
	// addis r28,r31,3
	ctx.r28.s64 = ctx.r31.s64 + 196608;
	// addi r28,r28,-32692
	ctx.r28.s64 = ctx.r28.s64 + -32692;
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x830f9f7c
	if (!ctx.cr6.eq) goto loc_830F9F7C;
	// lis r11,1
	ctx.r11.s64 = 65536;
	// ori r11,r11,49168
	ctx.r11.u64 = ctx.r11.u64 | 49168;
	// lwzx r11,r31,r11
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r11.u32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x830f9f04
	if (!ctx.cr6.eq) goto loc_830F9F04;
	// lis r11,2
	ctx.r11.s64 = 131072;
	// lis r10,-32228
	ctx.r10.s64 = -2112094208;
	// ori r11,r11,32864
	ctx.r11.u64 = ctx.r11.u64 | 32864;
	// li r6,75
	ctx.r6.s64 = 75;
	// addi r4,r10,21880
	ctx.r4.s64 = ctx.r10.s64 + 21880;
	// li r5,490
	ctx.r5.s64 = 490;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// lwzx r7,r31,r11
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r11.u32);
	// bl 0x830d5dc0
	ctx.lr = 0x830F9EF4;
	sub_830D5DC0(ctx, base);
	// lis r11,-32194
	ctx.r11.s64 = -2109865984;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// addi r4,r11,-28596
	ctx.r4.s64 = ctx.r11.s64 + -28596;
	// bl 0x833a7198
	ctx.lr = 0x830F9F04;
	sub_833A7198(ctx, base);
loc_830F9F04:
	// addis r30,r31,3
	ctx.r30.s64 = ctx.r31.s64 + 196608;
	// addis r29,r31,2
	ctx.r29.s64 = ctx.r31.s64 + 131072;
	// lis r11,-31827
	ctx.r11.s64 = -2085814272;
	// addi r30,r30,-32672
	ctx.r30.s64 = ctx.r30.s64 + -32672;
	// addi r29,r29,-16364
	ctx.r29.s64 = ctx.r29.s64 + -16364;
	// li r6,16384
	ctx.r6.s64 = 16384;
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// lwz r3,-5096(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -5096);
	// lwz r7,0(r30)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r4,0(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// bl 0x830fdc20
	ctx.lr = 0x830F9F30;
	sub_830FDC20(ctx, base);
	// stw r3,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r3.u32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne 0x830f9f7c
	if (!ctx.cr0.eq) goto loc_830F9F7C;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lis r9,-32228
	ctx.r9.s64 = -2112094208;
	// li r10,0
	ctx.r10.s64 = 0;
	// lwz r7,0(r29)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// addi r4,r9,21880
	ctx.r4.s64 = ctx.r9.s64 + 21880;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r6,98
	ctx.r6.s64 = 98;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// li r5,510
	ctx.r5.s64 = 510;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x830f8ea8
	ctx.lr = 0x830F9F6C;
	sub_830F8EA8(ctx, base);
	// lis r11,-32194
	ctx.r11.s64 = -2109865984;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// addi r4,r11,-27696
	ctx.r4.s64 = ctx.r11.s64 + -27696;
	// bl 0x833a7198
	ctx.lr = 0x830F9F7C;
	sub_833A7198(ctx, base);
loc_830F9F7C:
	// addis r29,r31,3
	ctx.r29.s64 = ctx.r31.s64 + 196608;
	// lis r11,0
	ctx.r11.s64 = 0;
	// addi r29,r29,-32707
	ctx.r29.s64 = ctx.r29.s64 + -32707;
	// ori r6,r11,32776
	ctx.r6.u64 = ctx.r11.u64 | 32776;
	// li r30,0
	ctx.r30.s64 = 0;
	// lbz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r29.u32 + 0);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x830f9fd8
	if (ctx.cr0.eq) goto loc_830F9FD8;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// ble cr6,0x830f9fd8
	if (!ctx.cr6.gt) goto loc_830F9FD8;
	// addis r10,r31,3
	ctx.r10.s64 = ctx.r31.s64 + 196608;
	// add r7,r31,r6
	ctx.r7.u64 = ctx.r31.u64 + ctx.r6.u64;
	// addi r10,r10,-32712
	ctx.r10.s64 = ctx.r10.s64 + -32712;
loc_830F9FB8:
	// lbzx r8,r7,r11
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r7.u32 + ctx.r11.u32);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// lwz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// add r9,r8,r9
	ctx.r9.u64 = ctx.r8.u64 + ctx.r9.u64;
	// stw r9,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
	// lwz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// blt cr6,0x830f9fb8
	if (ctx.cr6.lt) goto loc_830F9FB8;
loc_830F9FD8:
	// mr r10,r30
	ctx.r10.u64 = ctx.r30.u64;
	// cmplwi cr6,r26,0
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, 0, ctx.xer);
	// beq cr6,0x830fa02c
	if (ctx.cr6.eq) goto loc_830FA02C;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r9,0(r27)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// bge cr6,0x830fa02c
	if (!ctx.cr6.lt) goto loc_830FA02C;
	// addi r9,r11,1
	ctx.r9.s64 = ctx.r11.s64 + 1;
	// add r7,r31,r6
	ctx.r7.u64 = ctx.r31.u64 + ctx.r6.u64;
	// rlwinm r9,r9,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r8,r31,2
	ctx.r8.s64 = ctx.r31.s64 + 2;
	// add r9,r9,r31
	ctx.r9.u64 = ctx.r9.u64 + ctx.r31.u64;
loc_830FA008:
	// lhzu r5,2(r9)
	ea = 2 + ctx.r9.u32;
	ctx.r5.u64 = PPC_LOAD_U16(ea);
	ctx.r9.u32 = ea;
	// sthu r5,2(r8)
	ea = 2 + ctx.r8.u32;
	PPC_STORE_U16(ea, ctx.r5.u16);
	ctx.r8.u32 = ea;
	// lbzx r5,r7,r11
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r7.u32 + ctx.r11.u32);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stbx r5,r7,r10
	PPC_STORE_U8(ctx.r7.u32 + ctx.r10.u32, ctx.r5.u8);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// lwz r5,0(r27)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// cmplw cr6,r11,r5
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r5.u32, ctx.xer);
	// blt cr6,0x830fa008
	if (ctx.cr6.lt) goto loc_830FA008;
loc_830FA02C:
	// addi r11,r10,2
	ctx.r11.s64 = ctx.r10.s64 + 2;
	// mr r9,r6
	ctx.r9.u64 = ctx.r6.u64;
	// add r10,r10,r31
	ctx.r10.u64 = ctx.r10.u64 + ctx.r31.u64;
	// rlwinm r11,r11,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// subfic r6,r26,16384
	ctx.xer.ca = ctx.r26.u32 <= 16384;
	ctx.r6.s64 = 16384 - ctx.r26.s64;
	// add r5,r10,r9
	ctx.r5.u64 = ctx.r10.u64 + ctx.r9.u64;
	// add r4,r11,r31
	ctx.r4.u64 = ctx.r11.u64 + ctx.r31.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x830f96e0
	ctx.lr = 0x830FA050;
	sub_830F96E0(ctx, base);
	// add. r10,r3,r26
	ctx.r10.u64 = ctx.r3.u64 + ctx.r26.u64;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r30,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r30.u32);
	// stw r10,0(r27)
	PPC_STORE_U32(ctx.r27.u32 + 0, ctx.r10.u32);
	// bne 0x830fa0b0
	if (!ctx.cr0.eq) goto loc_830FA0B0;
	// lis r10,2
	ctx.r10.s64 = 131072;
	// ori r10,r10,32848
	ctx.r10.u64 = ctx.r10.u64 | 32848;
	// lwzx r10,r31,r10
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r10.u32);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x830fa0b0
	if (!ctx.cr6.eq) goto loc_830FA0B0;
	// lis r10,2
	ctx.r10.s64 = 131072;
	// ori r10,r10,32812
	ctx.r10.u64 = ctx.r10.u64 | 32812;
	// lwzx r10,r31,r10
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r10.u32);
	// cmpwi cr6,r10,1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 1, ctx.xer);
	// bne cr6,0x830fa0b0
	if (!ctx.cr6.eq) goto loc_830FA0B0;
	// addis r10,r31,3
	ctx.r10.s64 = ctx.r31.s64 + 196608;
	// addi r10,r10,-32720
	ctx.r10.s64 = ctx.r10.s64 + -32720;
	// lbz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// cmplwi r9,0
	ctx.cr0.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne 0x830fa0b0
	if (!ctx.cr0.eq) goto loc_830FA0B0;
	// li r9,32
	ctx.r9.s64 = 32;
	// stw r11,0(r27)
	PPC_STORE_U32(ctx.r27.u32 + 0, ctx.r11.u32);
	// stb r11,0(r10)
	PPC_STORE_U8(ctx.r10.u32 + 0, ctx.r11.u8);
	// sth r9,4(r31)
	PPC_STORE_U16(ctx.r31.u32 + 4, ctx.r9.u16);
loc_830FA0B0:
	// lwz r9,0(r27)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x830fa0c0
	if (!ctx.cr6.eq) goto loc_830FA0C0;
	// stb r11,0(r25)
	PPC_STORE_U8(ctx.r25.u32 + 0, ctx.r11.u8);
loc_830FA0C0:
	// lbz r10,0(r29)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r29.u32 + 0);
	// cmplwi r10,0
	ctx.cr0.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq 0x830fa10c
	if (ctx.cr0.eq) goto loc_830FA10C;
	// lis r10,0
	ctx.r10.s64 = 0;
	// cmplwi cr6,r9,1
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 1, ctx.xer);
	// ori r10,r10,49160
	ctx.r10.u64 = ctx.r10.u64 | 49160;
	// stwx r30,r31,r10
	PPC_STORE_U32(ctx.r31.u32 + ctx.r10.u32, ctx.r30.u32);
	// ble cr6,0x830fa10c
	if (!ctx.cr6.gt) goto loc_830FA10C;
	// addis r7,r31,1
	ctx.r7.s64 = ctx.r31.s64 + 65536;
	// add r10,r31,r10
	ctx.r10.u64 = ctx.r31.u64 + ctx.r10.u64;
	// addi r7,r7,-32761
	ctx.r7.s64 = ctx.r7.s64 + -32761;
loc_830FA0EC:
	// lbzx r8,r7,r11
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r7.u32 + ctx.r11.u32);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// lwz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// add r9,r8,r9
	ctx.r9.u64 = ctx.r8.u64 + ctx.r9.u64;
	// stwu r9,4(r10)
	ea = 4 + ctx.r10.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r10.u32 = ea;
	// lwz r9,0(r27)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// blt cr6,0x830fa0ec
	if (ctx.cr6.lt) goto loc_830FA0EC;
loc_830FA10C:
	// lwz r11,0(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// addic r10,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// subfe r3,r10,r11
	temp.u8 = (~ctx.r10.u32 + ctx.r11.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r3.u64 = ~ctx.r10.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
loc_830FA118:
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x833a01ec
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_830FA120"))) PPC_WEAK_FUNC(sub_830FA120);
PPC_FUNC_IMPL(__imp__sub_830FA120) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x833a01a4
	ctx.lr = 0x830FA128;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addis r28,r3,1
	ctx.r28.s64 = ctx.r3.s64 + 65536;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r28,r28,-32764
	ctx.r28.s64 = ctx.r28.s64 + -32764;
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// lwz r10,0(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x830fa164
	if (!ctx.cr6.eq) goto loc_830FA164;
	// bl 0x830f9e58
	ctx.lr = 0x830FA154;
	sub_830F9E58(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x830fa164
	if (!ctx.cr0.eq) goto loc_830FA164;
loc_830FA15C:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x830fa32c
	goto loc_830FA32C;
loc_830FA164:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lis r9,2
	ctx.r9.s64 = 131072;
	// lis r8,2
	ctx.r8.s64 = 131072;
	// clrlwi. r10,r30,24
	ctx.r10.u64 = ctx.r30.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// ori r30,r9,32852
	ctx.r30.u64 = ctx.r9.u64 | 32852;
	// ori r8,r8,32860
	ctx.r8.u64 = ctx.r8.u64 | 32860;
	// mr r7,r11
	ctx.r7.u64 = ctx.r11.u64;
	// bne 0x830fa1f4
	if (!ctx.cr0.eq) goto loc_830FA1F4;
	// lwzx r10,r31,r8
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r8.u32);
	// cmpwi cr6,r10,1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 1, ctx.xer);
	// bne cr6,0x830fa1d0
	if (!ctx.cr6.eq) goto loc_830FA1D0;
	// addi r9,r11,2
	ctx.r9.s64 = ctx.r11.s64 + 2;
	// rlwinm r10,r9,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// lhzx r10,r10,r31
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r10.u32 + ctx.r31.u32);
	// cmplwi cr6,r10,55296
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 55296, ctx.xer);
	// blt cr6,0x830fa1d0
	if (ctx.cr6.lt) goto loc_830FA1D0;
	// cmplwi cr6,r10,56191
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 56191, ctx.xer);
	// bgt cr6,0x830fa1d0
	if (ctx.cr6.gt) goto loc_830FA1D0;
	// addi r11,r11,3
	ctx.r11.s64 = ctx.r11.s64 + 3;
	// rlwinm r11,r11,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// lhzx r11,r11,r31
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r11.u32 + ctx.r31.u32);
	// cmplwi cr6,r11,56320
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 56320, ctx.xer);
	// blt cr6,0x830fa15c
	if (ctx.cr6.lt) goto loc_830FA15C;
	// cmplwi cr6,r11,57343
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 57343, ctx.xer);
	// bgt cr6,0x830fa15c
	if (ctx.cr6.gt) goto loc_830FA15C;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// b 0x830fa1f4
	goto loc_830FA1F4;
loc_830FA1D0:
	// addi r10,r11,2
	ctx.r10.s64 = ctx.r11.s64 + 2;
	// lwzx r9,r31,r30
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r30.u32);
	// rlwinm r10,r10,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// lhzx r10,r10,r31
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r10.u32 + ctx.r31.u32);
	// lbzx r10,r10,r9
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r10.u32 + ctx.r9.u32);
	// rlwinm. r10,r10,0,30,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x2;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x830fa15c
	if (ctx.cr0.eq) goto loc_830FA15C;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
loc_830FA1F4:
	// add r29,r31,r8
	ctx.r29.u64 = ctx.r31.u64 + ctx.r8.u64;
loc_830FA1F8:
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// lwz r10,0(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// beq cr6,0x830fa314
	if (ctx.cr6.eq) goto loc_830FA314;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x830fa24c
	if (!ctx.cr6.lt) goto loc_830FA24C;
	// lwzx r10,r31,r30
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r30.u32);
loc_830FA218:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r9,r11,2
	ctx.r9.s64 = ctx.r11.s64 + 2;
	// rlwinm r9,r9,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// lhzx r9,r9,r31
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r9.u32 + ctx.r31.u32);
	// lbzx r9,r9,r10
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r9.u32 + ctx.r10.u32);
	// rlwinm. r9,r9,0,29,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x4;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq 0x830fa24c
	if (ctx.cr0.eq) goto loc_830FA24C;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// lwz r9,0(r28)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// blt cr6,0x830fa218
	if (ctx.cr6.lt) goto loc_830FA218;
loc_830FA24C:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplw cr6,r11,r7
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r7.u32, ctx.xer);
	// beq cr6,0x830fa288
	if (ctx.cr6.eq) goto loc_830FA288;
	// addis r9,r31,2
	ctx.r9.s64 = ctx.r31.s64 + 131072;
	// addi r10,r7,2
	ctx.r10.s64 = ctx.r7.s64 + 2;
	// addi r9,r9,-16376
	ctx.r9.s64 = ctx.r9.s64 + -16376;
	// rlwinm r10,r10,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// subf r5,r7,r11
	ctx.r5.s64 = ctx.r11.s64 - ctx.r7.s64;
	// add r4,r10,r31
	ctx.r4.u64 = ctx.r10.u64 + ctx.r31.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// lwz r8,0(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// subf r10,r7,r8
	ctx.r10.s64 = ctx.r8.s64 - ctx.r7.s64;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stw r11,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r11.u32);
	// bl 0x830db3b8
	ctx.lr = 0x830FA288;
	sub_830DB3B8(ctx, base);
loc_830FA288:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r10,0(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x830fa320
	if (ctx.cr6.lt) goto loc_830FA320;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x830f9e58
	ctx.lr = 0x830FA2A0;
	sub_830F9E58(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x830fa320
	if (ctx.cr0.eq) goto loc_830FA320;
	// lwz r7,0(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// b 0x830fa1f8
	goto loc_830FA1F8;
loc_830FA2B0:
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r9,r10,2
	ctx.r9.s64 = ctx.r10.s64 + 2;
	// rlwinm r11,r9,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// lhzx r11,r11,r31
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r11.u32 + ctx.r31.u32);
	// cmplwi cr6,r11,55296
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 55296, ctx.xer);
	// blt cr6,0x830fa2f4
	if (ctx.cr6.lt) goto loc_830FA2F4;
	// cmplwi cr6,r11,56191
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 56191, ctx.xer);
	// bgt cr6,0x830fa2f4
	if (ctx.cr6.gt) goto loc_830FA2F4;
	// addi r11,r10,3
	ctx.r11.s64 = ctx.r10.s64 + 3;
	// rlwinm r11,r11,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// lhzx r11,r11,r31
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r11.u32 + ctx.r31.u32);
	// cmplwi cr6,r11,56320
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 56320, ctx.xer);
	// blt cr6,0x830fa24c
	if (ctx.cr6.lt) goto loc_830FA24C;
	// cmplwi cr6,r11,57343
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 57343, ctx.xer);
	// bgt cr6,0x830fa24c
	if (ctx.cr6.gt) goto loc_830FA24C;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// b 0x830fa30c
	goto loc_830FA30C;
loc_830FA2F4:
	// lwzx r9,r31,r30
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r30.u32);
	// lbzx r11,r9,r11
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r9.u32 + ctx.r11.u32);
	// rlwinm. r11,r11,0,29,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x4;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x830fa24c
	if (ctx.cr0.eq) goto loc_830FA24C;
	// addi r11,r10,1
	ctx.r11.s64 = ctx.r10.s64 + 1;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
loc_830FA30C:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r10,0(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
loc_830FA314:
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x830fa2b0
	if (ctx.cr6.lt) goto loc_830FA2B0;
	// b 0x830fa24c
	goto loc_830FA24C;
loc_830FA320:
	// lwz r11,0(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// addic r10,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// subfe r3,r10,r11
	temp.u8 = (~ctx.r10.u32 + ctx.r11.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r3.u64 = ~ctx.r10.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
loc_830FA32C:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x833a01f4
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_830FA334"))) PPC_WEAK_FUNC(sub_830FA334);
PPC_FUNC_IMPL(__imp__sub_830FA334) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_830FA338"))) PPC_WEAK_FUNC(sub_830FA338);
PPC_FUNC_IMPL(__imp__sub_830FA338) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x833a0198
	ctx.lr = 0x830FA340;
	__savegprlr_24(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r11,-1
	ctx.r11.s64 = -1;
	// addis r25,r3,1
	ctx.r25.s64 = ctx.r3.s64 + 65536;
	// stw r11,0(r5)
	PPC_STORE_U32(ctx.r5.u32 + 0, ctx.r11.u32);
	// lis r11,2
	ctx.r11.s64 = 131072;
	// lis r10,2
	ctx.r10.s64 = 131072;
	// lis r9,1
	ctx.r9.s64 = 65536;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r27,r5
	ctx.r27.u64 = ctx.r5.u64;
	// addi r25,r25,-32764
	ctx.r25.s64 = ctx.r25.s64 + -32764;
	// ori r24,r11,32860
	ctx.r24.u64 = ctx.r11.u64 | 32860;
	// ori r26,r10,32852
	ctx.r26.u64 = ctx.r10.u64 | 32852;
	// ori r30,r9,49160
	ctx.r30.u64 = ctx.r9.u64 | 49160;
loc_830FA378:
	// li r28,1
	ctx.r28.s64 = 1;
loc_830FA37C:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r10,0(r25)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r25.u32 + 0);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x830fa39c
	if (!ctx.cr6.eq) goto loc_830FA39C;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x830f9e58
	ctx.lr = 0x830FA394;
	sub_830F9E58(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x830fa548
	if (ctx.cr0.eq) goto loc_830FA548;
loc_830FA39C:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// clrlwi. r10,r28,24
	ctx.r10.u64 = ctx.r28.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// mr r8,r11
	ctx.r8.u64 = ctx.r11.u64;
	// beq 0x830fa4a4
	if (ctx.cr0.eq) goto loc_830FA4A4;
	// lwzx r10,r31,r24
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r24.u32);
	// li r28,0
	ctx.r28.s64 = 0;
	// cmpwi cr6,r10,1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 1, ctx.xer);
	// bne cr6,0x830fa400
	if (!ctx.cr6.eq) goto loc_830FA400;
	// addi r9,r11,2
	ctx.r9.s64 = ctx.r11.s64 + 2;
	// rlwinm r10,r9,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// lhzx r10,r10,r31
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r10.u32 + ctx.r31.u32);
	// cmplwi cr6,r10,55296
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 55296, ctx.xer);
	// blt cr6,0x830fa400
	if (ctx.cr6.lt) goto loc_830FA400;
	// cmplwi cr6,r10,56191
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 56191, ctx.xer);
	// bgt cr6,0x830fa400
	if (ctx.cr6.gt) goto loc_830FA400;
	// addi r11,r11,3
	ctx.r11.s64 = ctx.r11.s64 + 3;
	// rlwinm r11,r11,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// lhzx r11,r11,r31
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r11.u32 + ctx.r31.u32);
	// cmplwi cr6,r11,56320
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 56320, ctx.xer);
	// blt cr6,0x830fa3f4
	if (ctx.cr6.lt) goto loc_830FA3F4;
	// cmplwi cr6,r11,57343
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 57343, ctx.xer);
	// ble cr6,0x830fa484
	if (!ctx.cr6.gt) goto loc_830FA484;
loc_830FA3F4:
	// li r3,0
	ctx.r3.s64 = 0;
loc_830FA3F8:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x833a01e8
	__restgprlr_24(ctx, base);
	return;
loc_830FA400:
	// addi r10,r11,2
	ctx.r10.s64 = ctx.r11.s64 + 2;
	// lwzx r9,r31,r26
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r26.u32);
	// rlwinm r10,r10,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// lhzx r10,r10,r31
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r10.u32 + ctx.r31.u32);
	// lbzx r9,r9,r10
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r9.u32 + ctx.r10.u32);
	// rlwinm. r9,r9,0,30,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x2;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq 0x830fa428
	if (ctx.cr0.eq) goto loc_830FA428;
	// cmplwi cr6,r10,58
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 58, ctx.xer);
	// li r10,1
	ctx.r10.s64 = 1;
	// bne cr6,0x830fa42c
	if (!ctx.cr6.eq) goto loc_830FA42C;
loc_830FA428:
	// li r10,0
	ctx.r10.s64 = 0;
loc_830FA42C:
	// clrlwi. r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x830fa3f4
	if (ctx.cr0.eq) goto loc_830FA3F4;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// b 0x830fa4a0
	goto loc_830FA4A0;
loc_830FA43C:
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r9,r10,2
	ctx.r9.s64 = ctx.r10.s64 + 2;
	// rlwinm r11,r9,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// lhzx r11,r11,r31
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r11.u32 + ctx.r31.u32);
	// cmplwi cr6,r11,55296
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 55296, ctx.xer);
	// blt cr6,0x830fa48c
	if (ctx.cr6.lt) goto loc_830FA48C;
	// cmplwi cr6,r11,56191
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 56191, ctx.xer);
	// bgt cr6,0x830fa48c
	if (ctx.cr6.gt) goto loc_830FA48C;
	// lwzx r11,r31,r24
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r24.u32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x830fa4b4
	if (ctx.cr6.eq) goto loc_830FA4B4;
	// addi r11,r10,3
	ctx.r11.s64 = ctx.r10.s64 + 3;
	// rlwinm r11,r11,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// lhzx r11,r11,r31
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r11.u32 + ctx.r31.u32);
	// cmplwi cr6,r11,56320
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 56320, ctx.xer);
	// blt cr6,0x830fa4b4
	if (ctx.cr6.lt) goto loc_830FA4B4;
	// cmplwi cr6,r11,57343
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 57343, ctx.xer);
	// bgt cr6,0x830fa4b4
	if (ctx.cr6.gt) goto loc_830FA4B4;
loc_830FA484:
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// b 0x830fa4a4
	goto loc_830FA4A4;
loc_830FA48C:
	// lwzx r9,r31,r26
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r26.u32);
	// lbzx r11,r9,r11
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r9.u32 + ctx.r11.u32);
	// clrlwi. r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x830fa4b4
	if (ctx.cr0.eq) goto loc_830FA4B4;
	// addi r11,r10,1
	ctx.r11.s64 = ctx.r10.s64 + 1;
loc_830FA4A0:
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
loc_830FA4A4:
	// lwz r10,0(r25)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r25.u32 + 0);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x830fa43c
	if (ctx.cr6.lt) goto loc_830FA43C;
loc_830FA4B4:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplw cr6,r11,r8
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r8.u32, ctx.xer);
	// beq cr6,0x830fa4e8
	if (ctx.cr6.eq) goto loc_830FA4E8;
	// lwzx r10,r31,r30
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r30.u32);
	// subf r9,r8,r11
	ctx.r9.s64 = ctx.r11.s64 - ctx.r8.s64;
	// addi r7,r8,2
	ctx.r7.s64 = ctx.r8.s64 + 2;
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// subf r5,r8,r11
	ctx.r5.s64 = ctx.r11.s64 - ctx.r8.s64;
	// stwx r10,r31,r30
	PPC_STORE_U32(ctx.r31.u32 + ctx.r30.u32, ctx.r10.u32);
	// rlwinm r11,r7,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 1) & 0xFFFFFFFE;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// add r4,r11,r31
	ctx.r4.u64 = ctx.r11.u64 + ctx.r31.u64;
	// bl 0x830db3b8
	ctx.lr = 0x830FA4E8;
	sub_830DB3B8(ctx, base);
loc_830FA4E8:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r10,0(r25)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r25.u32 + 0);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x830fa37c
	if (!ctx.cr6.lt) goto loc_830FA37C;
	// addi r11,r11,2
	ctx.r11.s64 = ctx.r11.s64 + 2;
	// rlwinm r11,r11,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// lhzx r11,r11,r31
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r11.u32 + ctx.r31.u32);
	// cmplwi cr6,r11,58
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 58, ctx.xer);
	// bne cr6,0x830fa548
	if (!ctx.cr6.eq) goto loc_830FA548;
	// lwz r11,0(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// bne cr6,0x830fa3f4
	if (!ctx.cr6.eq) goto loc_830FA3F4;
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// li r4,58
	ctx.r4.s64 = 58;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// stw r11,0(r27)
	PPC_STORE_U32(ctx.r27.u32 + 0, ctx.r11.u32);
	// bl 0x830d5880
	ctx.lr = 0x830FA52C;
	sub_830D5880(ctx, base);
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwzx r11,r31,r30
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r30.u32);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// stwx r11,r31,r30
	PPC_STORE_U32(ctx.r31.u32 + ctx.r30.u32, ctx.r11.u32);
	// b 0x830fa378
	goto loc_830FA378;
loc_830FA548:
	// clrlwi. r11,r28,24
	ctx.r11.u64 = ctx.r28.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x830fa3f4
	if (!ctx.cr0.eq) goto loc_830FA3F4;
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// addic r10,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// subfe r3,r10,r11
	temp.u8 = (~ctx.r10.u32 + ctx.r11.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r3.u64 = ~ctx.r10.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// b 0x830fa3f8
	goto loc_830FA3F8;
}

__attribute__((alias("__imp__sub_830FA560"))) PPC_WEAK_FUNC(sub_830FA560);
PPC_FUNC_IMPL(__imp__sub_830FA560) {
	PPC_FUNC_PROLOGUE();
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
	// lis r11,0
	ctx.r11.s64 = 0;
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// ori r11,r11,32772
	ctx.r11.u64 = ctx.r11.u64 | 32772;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// lwzx r11,r3,r11
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + ctx.r11.u32);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x830fa5a8
	if (!ctx.cr6.eq) goto loc_830FA5A8;
	// bl 0x830f9e58
	ctx.lr = 0x830FA598;
	sub_830F9E58(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x830fa5a8
	if (!ctx.cr0.eq) goto loc_830FA5A8;
loc_830FA5A0:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x830fa5f4
	goto loc_830FA5F4;
loc_830FA5A8:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r11,r11,2
	ctx.r11.s64 = ctx.r11.s64 + 2;
	// rlwinm r11,r11,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// lhzx r11,r11,r31
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r11.u32 + ctx.r31.u32);
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// cmplwi cr6,r11,34
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 34, ctx.xer);
	// beq cr6,0x830fa5cc
	if (ctx.cr6.eq) goto loc_830FA5CC;
	// cmplwi cr6,r11,39
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 39, ctx.xer);
	// bne cr6,0x830fa5a0
	if (!ctx.cr6.eq) goto loc_830FA5A0;
loc_830FA5CC:
	// addis r10,r31,2
	ctx.r10.s64 = ctx.r31.s64 + 131072;
	// sth r11,0(r30)
	PPC_STORE_U16(ctx.r30.u32 + 0, ctx.r11.u16);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r9,r11,1
	ctx.r9.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,-16376
	ctx.r10.s64 = ctx.r10.s64 + -16376;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// li r3,1
	ctx.r3.s64 = 1;
	// lwz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r11.u32);
loc_830FA5F4:
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

__attribute__((alias("__imp__sub_830FA60C"))) PPC_WEAK_FUNC(sub_830FA60C);
PPC_FUNC_IMPL(__imp__sub_830FA60C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_830FA610"))) PPC_WEAK_FUNC(sub_830FA610);
PPC_FUNC_IMPL(__imp__sub_830FA610) {
	PPC_FUNC_PROLOGUE();
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
	// lis r11,0
	ctx.r11.s64 = 0;
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// ori r11,r11,32772
	ctx.r11.u64 = ctx.r11.u64 | 32772;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// lwzx r11,r3,r11
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + ctx.r11.u32);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x830fa650
	if (!ctx.cr6.eq) goto loc_830FA650;
	// bl 0x830f9e58
	ctx.lr = 0x830FA648;
	sub_830F9E58(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x830fa690
	if (ctx.cr0.eq) goto loc_830FA690;
loc_830FA650:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// clrlwi r10,r30,16
	ctx.r10.u64 = ctx.r30.u32 & 0xFFFF;
	// addi r9,r11,2
	ctx.r9.s64 = ctx.r11.s64 + 2;
	// rlwinm r9,r9,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// lhzx r9,r9,r31
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r9.u32 + ctx.r31.u32);
	// cmplw cr6,r9,r10
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x830fa690
	if (!ctx.cr6.eq) goto loc_830FA690;
	// addis r10,r31,2
	ctx.r10.s64 = ctx.r31.s64 + 131072;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,-16376
	ctx.r10.s64 = ctx.r10.s64 + -16376;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// li r3,1
	ctx.r3.s64 = 1;
	// lwz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r11.u32);
	// b 0x830fa694
	goto loc_830FA694;
loc_830FA690:
	// li r3,0
	ctx.r3.s64 = 0;
loc_830FA694:
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

__attribute__((alias("__imp__sub_830FA6AC"))) PPC_WEAK_FUNC(sub_830FA6AC);
PPC_FUNC_IMPL(__imp__sub_830FA6AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_830FA6B0"))) PPC_WEAK_FUNC(sub_830FA6B0);
PPC_FUNC_IMPL(__imp__sub_830FA6B0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x833a019c
	ctx.lr = 0x830FA6B8;
	__savegprlr_25(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r25,r4
	ctx.r25.u64 = ctx.r4.u64;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x830fa6fc
	if (ctx.cr6.eq) goto loc_830FA6FC;
	// lhz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r4.u32 + 0);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x830fa6fc
	if (ctx.cr0.eq) goto loc_830FA6FC;
	// lhz r10,2(r4)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r4.u32 + 2);
	// addi r11,r4,2
	ctx.r11.s64 = ctx.r4.s64 + 2;
	// b 0x830fa6e8
	goto loc_830FA6E8;
loc_830FA6E4:
	// lhzu r10,2(r11)
	ea = 2 + ctx.r11.u32;
	ctx.r10.u64 = PPC_LOAD_U16(ea);
	ctx.r11.u32 = ea;
loc_830FA6E8:
	// cmplwi r10,0
	ctx.cr0.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne 0x830fa6e4
	if (!ctx.cr0.eq) goto loc_830FA6E4;
	// subf r11,r25,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r25.s64;
	// srawi r27,r11,1
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1) != 0);
	ctx.r27.s64 = ctx.r11.s32 >> 1;
	// b 0x830fa700
	goto loc_830FA700;
loc_830FA6FC:
	// li r27,0
	ctx.r27.s64 = 0;
loc_830FA700:
	// addis r26,r31,1
	ctx.r26.s64 = ctx.r31.s64 + 65536;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r26,r26,-32764
	ctx.r26.s64 = ctx.r26.s64 + -32764;
	// lwz r10,0(r26)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// subf r30,r11,r10
	ctx.r30.s64 = ctx.r10.s64 - ctx.r11.s64;
	// cmplw cr6,r27,r10
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, ctx.r10.u32, ctx.xer);
	// bgt cr6,0x830fa784
	if (ctx.cr6.gt) goto loc_830FA784;
	// cmplw cr6,r30,r27
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r27.u32, ctx.xer);
	// bge cr6,0x830fa74c
	if (!ctx.cr6.lt) goto loc_830FA74C;
loc_830FA724:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x830f9e58
	ctx.lr = 0x830FA72C;
	sub_830F9E58(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r10,0(r26)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// subf r10,r11,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r11.s64;
	// cmplw cr6,r10,r30
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r30.u32, ctx.xer);
	// beq cr6,0x830fa77c
	if (ctx.cr6.eq) goto loc_830FA77C;
	// mr r30,r10
	ctx.r30.u64 = ctx.r10.u64;
	// cmplw cr6,r10,r27
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r27.u32, ctx.xer);
	// blt cr6,0x830fa724
	if (ctx.cr6.lt) goto loc_830FA724;
loc_830FA74C:
	// addi r11,r11,2
	ctx.r11.s64 = ctx.r11.s64 + 2;
	// rlwinm r5,r27,1,0,30
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r11,r11,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// add r3,r11,r31
	ctx.r3.u64 = ctx.r11.u64 + ctx.r31.u64;
	// bl 0x833ab6f0
	ctx.lr = 0x830FA764;
	sub_833AB6F0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x830fa77c
	if (!ctx.cr0.eq) goto loc_830FA77C;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// add r11,r11,r27
	ctx.r11.u64 = ctx.r11.u64 + ctx.r27.u64;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// b 0x830fa830
	goto loc_830FA830;
loc_830FA77C:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x830fa848
	goto loc_830FA848;
loc_830FA784:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// bne cr6,0x830fa7a4
	if (!ctx.cr6.eq) goto loc_830FA7A4;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x830f9e58
	ctx.lr = 0x830FA794;
	sub_830F9E58(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r10,0(r26)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// subf. r30,r11,r10
	ctx.r30.s64 = ctx.r10.s64 - ctx.r11.s64;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// beq 0x830fa77c
	if (ctx.cr0.eq) goto loc_830FA77C;
loc_830FA7A4:
	// addi r11,r11,2
	ctx.r11.s64 = ctx.r11.s64 + 2;
	// rlwinm r5,r30,1,0,30
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r11,r11,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// add r3,r11,r31
	ctx.r3.u64 = ctx.r11.u64 + ctx.r31.u64;
	// bl 0x833ab6f0
	ctx.lr = 0x830FA7BC;
	sub_833AB6F0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x830fa77c
	if (!ctx.cr0.eq) goto loc_830FA77C;
	// subf. r29,r30,r27
	ctx.r29.s64 = ctx.r27.s64 - ctx.r30.s64;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// mr r28,r30
	ctx.r28.u64 = ctx.r30.u64;
	// b 0x830fa820
	goto loc_830FA820;
loc_830FA7D0:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x830f9e58
	ctx.lr = 0x830FA7D8;
	sub_830F9E58(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r10,0(r26)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// subf. r30,r11,r10
	ctx.r30.s64 = ctx.r10.s64 - ctx.r11.s64;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// beq 0x830fa77c
	if (ctx.cr0.eq) goto loc_830FA77C;
	// cmplw cr6,r30,r29
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r29.u32, ctx.xer);
	// ble cr6,0x830fa7f4
	if (!ctx.cr6.gt) goto loc_830FA7F4;
	// mr r30,r29
	ctx.r30.u64 = ctx.r29.u64;
loc_830FA7F4:
	// addi r11,r11,2
	ctx.r11.s64 = ctx.r11.s64 + 2;
	// rlwinm r10,r28,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r11,r11,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r5,r30,1,0,30
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 1) & 0xFFFFFFFE;
	// add r4,r10,r25
	ctx.r4.u64 = ctx.r10.u64 + ctx.r25.u64;
	// add r3,r11,r31
	ctx.r3.u64 = ctx.r11.u64 + ctx.r31.u64;
	// bl 0x833ab6f0
	ctx.lr = 0x830FA810;
	sub_833AB6F0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x830fa77c
	if (!ctx.cr0.eq) goto loc_830FA77C;
	// subf. r29,r30,r29
	ctx.r29.s64 = ctx.r29.s64 - ctx.r30.s64;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// add r28,r28,r30
	ctx.r28.u64 = ctx.r28.u64 + ctx.r30.u64;
loc_830FA820:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + ctx.r30.u64;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// bne 0x830fa7d0
	if (!ctx.cr0.eq) goto loc_830FA7D0;
loc_830FA830:
	// addis r10,r31,2
	ctx.r10.s64 = ctx.r31.s64 + 131072;
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r10,r10,-16376
	ctx.r10.s64 = ctx.r10.s64 + -16376;
	// lwz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// add r11,r27,r11
	ctx.r11.u64 = ctx.r27.u64 + ctx.r11.u64;
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r11.u32);
loc_830FA848:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x833a01ec
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_830FA850"))) PPC_WEAK_FUNC(sub_830FA850);
PPC_FUNC_IMPL(__imp__sub_830FA850) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x833a01a4
	ctx.lr = 0x830FA858;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x830fa89c
	if (ctx.cr6.eq) goto loc_830FA89C;
	// lhz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r4.u32 + 0);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x830fa89c
	if (ctx.cr0.eq) goto loc_830FA89C;
	// lhz r10,2(r4)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r4.u32 + 2);
	// addi r11,r4,2
	ctx.r11.s64 = ctx.r4.s64 + 2;
	// b 0x830fa888
	goto loc_830FA888;
loc_830FA884:
	// lhzu r10,2(r11)
	ea = 2 + ctx.r11.u32;
	ctx.r10.u64 = PPC_LOAD_U16(ea);
	ctx.r11.u32 = ea;
loc_830FA888:
	// cmplwi r10,0
	ctx.cr0.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne 0x830fa884
	if (!ctx.cr0.eq) goto loc_830FA884;
	// subf r11,r27,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r27.s64;
	// srawi r28,r11,1
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1) != 0);
	ctx.r28.s64 = ctx.r11.s32 >> 1;
	// b 0x830fa8a0
	goto loc_830FA8A0;
loc_830FA89C:
	// li r28,0
	ctx.r28.s64 = 0;
loc_830FA8A0:
	// addis r29,r30,1
	ctx.r29.s64 = ctx.r30.s64 + 65536;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// addi r29,r29,-32764
	ctx.r29.s64 = ctx.r29.s64 + -32764;
	// lwz r10,0(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// subf r31,r11,r10
	ctx.r31.s64 = ctx.r10.s64 - ctx.r11.s64;
	// cmplw cr6,r31,r28
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r28.u32, ctx.xer);
	// bge cr6,0x830fa8e4
	if (!ctx.cr6.lt) goto loc_830FA8E4;
loc_830FA8BC:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x830f9e58
	ctx.lr = 0x830FA8C4;
	sub_830F9E58(ctx, base);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r10,0(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// subf r10,r11,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r11.s64;
	// cmplw cr6,r10,r31
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r31.u32, ctx.xer);
	// beq cr6,0x830fa90c
	if (ctx.cr6.eq) goto loc_830FA90C;
	// mr r31,r10
	ctx.r31.u64 = ctx.r10.u64;
	// cmplw cr6,r10,r28
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r28.u32, ctx.xer);
	// blt cr6,0x830fa8bc
	if (ctx.cr6.lt) goto loc_830FA8BC;
loc_830FA8E4:
	// addi r11,r11,2
	ctx.r11.s64 = ctx.r11.s64 + 2;
	// rlwinm r5,r28,1,0,30
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r11,r11,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// add r3,r11,r30
	ctx.r3.u64 = ctx.r11.u64 + ctx.r30.u64;
	// bl 0x833ab6f0
	ctx.lr = 0x830FA8FC;
	sub_833AB6F0(ctx, base);
	// cntlzw r11,r3
	ctx.r11.u64 = ctx.r3.u32 == 0 ? 32 : __builtin_clz(ctx.r3.u32);
	// rlwinm r3,r11,27,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
loc_830FA904:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x833a01f4
	__restgprlr_27(ctx, base);
	return;
loc_830FA90C:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x830fa904
	goto loc_830FA904;
}

__attribute__((alias("__imp__sub_830FA914"))) PPC_WEAK_FUNC(sub_830FA914);
PPC_FUNC_IMPL(__imp__sub_830FA914) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_830FA918"))) PPC_WEAK_FUNC(sub_830FA918);
PPC_FUNC_IMPL(__imp__sub_830FA918) {
	PPC_FUNC_PROLOGUE();
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
	// lhz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r4.u32 + 0);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// cmplwi cr6,r11,13
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 13, ctx.xer);
	// bne cr6,0x830fa9e4
	if (!ctx.cr6.eq) goto loc_830FA9E4;
	// addis r10,r3,2
	ctx.r10.s64 = ctx.r3.s64 + 131072;
	// lis r11,2
	ctx.r11.s64 = 131072;
	// addi r10,r10,-16372
	ctx.r10.s64 = ctx.r10.s64 + -16372;
	// ori r8,r11,32820
	ctx.r8.u64 = ctx.r11.u64 | 32820;
	// lis r9,1
	ctx.r9.s64 = 65536;
	// li r7,1
	ctx.r7.s64 = 1;
	// ori r9,r9,49160
	ctx.r9.u64 = ctx.r9.u64 | 49160;
	// lwz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// lwzx r8,r3,r8
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + ctx.r8.u32);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmpwi cr6,r8,1
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 1, ctx.xer);
	// stwx r7,r3,r9
	PPC_STORE_U32(ctx.r3.u32 + ctx.r9.u32, ctx.r7.u32);
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r11.u32);
	// bne cr6,0x830faaf0
	if (!ctx.cr6.eq) goto loc_830FAAF0;
	// lis r11,0
	ctx.r11.s64 = 0;
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// ori r11,r11,32772
	ctx.r11.u64 = ctx.r11.u64 | 32772;
	// lwzx r11,r3,r11
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + ctx.r11.u32);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x830fa99c
	if (ctx.cr6.lt) goto loc_830FA99C;
	// bl 0x830f9e58
	ctx.lr = 0x830FA994;
	sub_830F9E58(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x830fa9d8
	if (ctx.cr0.eq) goto loc_830FA9D8;
loc_830FA99C:
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r11,r10,2
	ctx.r11.s64 = ctx.r10.s64 + 2;
	// rlwinm r11,r11,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// lhzx r11,r11,r31
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r11.u32 + ctx.r31.u32);
	// cmplwi cr6,r11,10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 10, ctx.xer);
	// beq cr6,0x830fa9d0
	if (ctx.cr6.eq) goto loc_830FA9D0;
	// cmplwi cr6,r11,133
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 133, ctx.xer);
	// bne cr6,0x830fa9d8
	if (!ctx.cr6.eq) goto loc_830FA9D8;
	// lis r11,2
	ctx.r11.s64 = 131072;
	// ori r11,r11,32856
	ctx.r11.u64 = ctx.r11.u64 | 32856;
	// lbzx r11,r31,r11
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + ctx.r11.u32);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x830fa9d8
	if (ctx.cr0.eq) goto loc_830FA9D8;
loc_830FA9D0:
	// addi r11,r10,1
	ctx.r11.s64 = ctx.r10.s64 + 1;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
loc_830FA9D8:
	// li r11,10
	ctx.r11.s64 = 10;
	// sth r11,0(r30)
	PPC_STORE_U16(ctx.r30.u32 + 0, ctx.r11.u16);
	// b 0x830faaf0
	goto loc_830FAAF0;
loc_830FA9E4:
	// cmplwi cr6,r11,10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 10, ctx.xer);
	// bne cr6,0x830faa08
	if (!ctx.cr6.eq) goto loc_830FAA08;
	// lis r11,1
	ctx.r11.s64 = 65536;
	// addis r10,r31,2
	ctx.r10.s64 = ctx.r31.s64 + 131072;
	// ori r8,r11,49160
	ctx.r8.u64 = ctx.r11.u64 | 49160;
	// li r9,1
	ctx.r9.s64 = 1;
	// addi r10,r10,-16372
	ctx.r10.s64 = ctx.r10.s64 + -16372;
	// stwx r9,r31,r8
	PPC_STORE_U32(ctx.r31.u32 + ctx.r8.u32, ctx.r9.u32);
	// b 0x830faa20
	goto loc_830FAA20;
loc_830FAA08:
	// cmplwi cr6,r11,133
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 133, ctx.xer);
	// beq cr6,0x830faa30
	if (ctx.cr6.eq) goto loc_830FAA30;
	// cmplwi cr6,r11,8232
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 8232, ctx.xer);
	// beq cr6,0x830faa30
	if (ctx.cr6.eq) goto loc_830FAA30;
	// addis r10,r31,2
	ctx.r10.s64 = ctx.r31.s64 + 131072;
	// addi r10,r10,-16376
	ctx.r10.s64 = ctx.r10.s64 + -16376;
loc_830FAA20:
	// lwz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r11.u32);
	// b 0x830faaf0
	goto loc_830FAAF0;
loc_830FAA30:
	// clrlwi. r11,r5,24
	ctx.r11.u64 = ctx.r5.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x830faa9c
	if (ctx.cr0.eq) goto loc_830FAA9C;
	// lis r11,2
	ctx.r11.s64 = 131072;
	// ori r11,r11,32860
	ctx.r11.u64 = ctx.r11.u64 | 32860;
	// lwzx r11,r31,r11
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r11.u32);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x830faa9c
	if (!ctx.cr6.eq) goto loc_830FAA9C;
	// lis r11,2
	ctx.r11.s64 = 131072;
	// lis r10,2
	ctx.r10.s64 = 131072;
	// ori r11,r11,32864
	ctx.r11.u64 = ctx.r11.u64 | 32864;
	// ori r7,r10,32832
	ctx.r7.u64 = ctx.r10.u64 | 32832;
	// lis r9,-32228
	ctx.r9.s64 = -2112094208;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r4,r9,21880
	ctx.r4.s64 = ctx.r9.s64 + 21880;
	// lwzx r11,r31,r11
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r11.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// lwzx r7,r31,r7
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r7.u32);
	// li r6,72
	ctx.r6.s64 = 72;
	// li r5,1838
	ctx.r5.s64 = 1838;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// bl 0x830f8ea8
	ctx.lr = 0x830FAA8C;
	sub_830F8EA8(ctx, base);
	// lis r11,-32194
	ctx.r11.s64 = -2109865984;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// addi r4,r11,-27696
	ctx.r4.s64 = ctx.r11.s64 + -27696;
	// bl 0x833a7198
	ctx.lr = 0x830FAA9C;
	sub_833A7198(ctx, base);
loc_830FAA9C:
	// lis r11,2
	ctx.r11.s64 = 131072;
	// ori r11,r11,32856
	ctx.r11.u64 = ctx.r11.u64 | 32856;
	// lbzx r11,r31,r11
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + ctx.r11.u32);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x830faaf0
	if (ctx.cr0.eq) goto loc_830FAAF0;
	// lis r11,2
	ctx.r11.s64 = 131072;
	// ori r11,r11,32820
	ctx.r11.u64 = ctx.r11.u64 | 32820;
	// lwzx r11,r31,r11
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r11.u32);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x830faaf0
	if (!ctx.cr6.eq) goto loc_830FAAF0;
	// addis r10,r31,2
	ctx.r10.s64 = ctx.r31.s64 + 131072;
	// lis r11,1
	ctx.r11.s64 = 65536;
	// addi r10,r10,-16372
	ctx.r10.s64 = ctx.r10.s64 + -16372;
	// ori r8,r11,49160
	ctx.r8.u64 = ctx.r11.u64 | 49160;
	// li r9,1
	ctx.r9.s64 = 1;
	// li r7,10
	ctx.r7.s64 = 10;
	// lwz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// stwx r9,r31,r8
	PPC_STORE_U32(ctx.r31.u32 + ctx.r8.u32, ctx.r9.u32);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r11.u32);
	// sth r7,0(r30)
	PPC_STORE_U16(ctx.r30.u32 + 0, ctx.r7.u16);
loc_830FAAF0:
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

__attribute__((alias("__imp__sub_830FAB08"))) PPC_WEAK_FUNC(sub_830FAB08);
PPC_FUNC_IMPL(__imp__sub_830FAB08) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x833a01a8
	ctx.lr = 0x830FAB10;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addis r29,r3,1
	ctx.r29.s64 = ctx.r3.s64 + 65536;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// addi r29,r29,-32764
	ctx.r29.s64 = ctx.r29.s64 + -32764;
loc_830FAB24:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r10,0(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x830fabb8
	if (!ctx.cr6.lt) goto loc_830FABB8;
	// addis r30,r31,3
	ctx.r30.s64 = ctx.r31.s64 + 196608;
	// addi r30,r30,-32684
	ctx.r30.s64 = ctx.r30.s64 + -32684;
loc_830FAB3C:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r9,0(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// addi r10,r11,2
	ctx.r10.s64 = ctx.r11.s64 + 2;
	// rlwinm r10,r10,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// lhzx r4,r10,r31
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r10.u32 + ctx.r31.u32);
	// mr r10,r4
	ctx.r10.u64 = ctx.r4.u64;
	// lbzx r9,r9,r4
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r9.u32 + ctx.r4.u32);
	// sth r4,80(r1)
	PPC_STORE_U16(ctx.r1.u32 + 80, ctx.r4.u16);
	// rlwinm. r9,r9,0,0,24
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFFFF80;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq 0x830fabd4
	if (ctx.cr0.eq) goto loc_830FABD4;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// rlwinm. r10,r10,0,29,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x6;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// bne 0x830fab8c
	if (!ctx.cr0.eq) goto loc_830FAB8C;
	// addis r10,r31,2
	ctx.r10.s64 = ctx.r31.s64 + 131072;
	// addi r10,r10,-16376
	ctx.r10.s64 = ctx.r10.s64 + -16376;
	// lwz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r11.u32);
	// b 0x830faba0
	goto loc_830FABA0;
loc_830FAB8C:
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x830fa918
	ctx.lr = 0x830FAB9C;
	sub_830FA918(ctx, base);
	// lhz r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r1.u32 + 80);
loc_830FABA0:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x830d5880
	ctx.lr = 0x830FABA8;
	sub_830D5880(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r10,0(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x830fab3c
	if (ctx.cr6.lt) goto loc_830FAB3C;
loc_830FABB8:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x830f9e58
	ctx.lr = 0x830FABC0;
	sub_830F9E58(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x830fab24
	if (!ctx.cr0.eq) goto loc_830FAB24;
	// li r3,0
	ctx.r3.s64 = 0;
loc_830FABCC:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x833a01f8
	__restgprlr_28(ctx, base);
	return;
loc_830FABD4:
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x830fabcc
	goto loc_830FABCC;
}

__attribute__((alias("__imp__sub_830FABDC"))) PPC_WEAK_FUNC(sub_830FABDC);
PPC_FUNC_IMPL(__imp__sub_830FABDC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_830FABE0"))) PPC_WEAK_FUNC(sub_830FABE0);
PPC_FUNC_IMPL(__imp__sub_830FABE0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x833a01a4
	ctx.lr = 0x830FABE8;
	__savegprlr_27(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addis r29,r3,1
	ctx.r29.s64 = ctx.r3.s64 + 65536;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// mr r27,r5
	ctx.r27.u64 = ctx.r5.u64;
	// addi r29,r29,-32764
	ctx.r29.s64 = ctx.r29.s64 + -32764;
loc_830FAC00:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r10,0(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x830faca4
	if (!ctx.cr6.lt) goto loc_830FACA4;
	// addis r30,r31,3
	ctx.r30.s64 = ctx.r31.s64 + 196608;
	// addi r30,r30,-32684
	ctx.r30.s64 = ctx.r30.s64 + -32684;
loc_830FAC18:
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r9,0(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// addi r11,r10,2
	ctx.r11.s64 = ctx.r10.s64 + 2;
	// rlwinm r11,r11,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// lhzx r4,r11,r31
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r11.u32 + ctx.r31.u32);
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// lbzx r9,r9,r4
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r9.u32 + ctx.r4.u32);
	// sth r4,80(r1)
	PPC_STORE_U16(ctx.r1.u32 + 80, ctx.r4.u16);
	// rlwinm. r9,r9,0,0,24
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFFFF80;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x830facc0
	if (!ctx.cr0.eq) goto loc_830FACC0;
	// clrlwi r9,r27,16
	ctx.r9.u64 = ctx.r27.u32 & 0xFFFF;
	// cmplw cr6,r4,r9
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x830facc0
	if (ctx.cr6.eq) goto loc_830FACC0;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// andi. r11,r11,57170
	ctx.r11.u64 = ctx.r11.u64 & 57170;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x830fac78
	if (ctx.cr0.eq) goto loc_830FAC78;
	// addis r10,r31,2
	ctx.r10.s64 = ctx.r31.s64 + 131072;
	// addi r10,r10,-16376
	ctx.r10.s64 = ctx.r10.s64 + -16376;
	// lwz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r11.u32);
	// b 0x830fac8c
	goto loc_830FAC8C;
loc_830FAC78:
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x830fa918
	ctx.lr = 0x830FAC88;
	sub_830FA918(ctx, base);
	// lhz r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r1.u32 + 80);
loc_830FAC8C:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x830d5880
	ctx.lr = 0x830FAC94;
	sub_830D5880(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r10,0(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x830fac18
	if (ctx.cr6.lt) goto loc_830FAC18;
loc_830FACA4:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x830f9e58
	ctx.lr = 0x830FACAC;
	sub_830F9E58(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x830fac00
	if (!ctx.cr0.eq) goto loc_830FAC00;
	// li r3,0
	ctx.r3.s64 = 0;
loc_830FACB8:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x833a01f4
	__restgprlr_27(ctx, base);
	return;
loc_830FACC0:
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x830facb8
	goto loc_830FACB8;
}

__attribute__((alias("__imp__sub_830FACC8"))) PPC_WEAK_FUNC(sub_830FACC8);
PPC_FUNC_IMPL(__imp__sub_830FACC8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x833a0194
	ctx.lr = 0x830FACD0;
	__savegprlr_23(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addis r29,r3,2
	ctx.r29.s64 = ctx.r3.s64 + 131072;
	// addis r30,r3,2
	ctx.r30.s64 = ctx.r3.s64 + 131072;
	// addi r29,r29,-16372
	ctx.r29.s64 = ctx.r29.s64 + -16372;
	// addi r30,r30,-16376
	ctx.r30.s64 = ctx.r30.s64 + -16376;
	// addis r28,r3,1
	ctx.r28.s64 = ctx.r3.s64 + 65536;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r23,r4
	ctx.r23.u64 = ctx.r4.u64;
	// lwz r25,0(r29)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// mr r26,r5
	ctx.r26.u64 = ctx.r5.u64;
	// lwz r24,0(r30)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// addi r28,r28,-32764
	ctx.r28.s64 = ctx.r28.s64 + -32764;
loc_830FAD00:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r10,0(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x830fad80
	if (!ctx.cr6.lt) goto loc_830FAD80;
	// addis r27,r31,3
	ctx.r27.s64 = ctx.r31.s64 + 196608;
	// addi r27,r27,-32684
	ctx.r27.s64 = ctx.r27.s64 + -32684;
loc_830FAD18:
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r9,0(r27)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// addi r11,r10,2
	ctx.r11.s64 = ctx.r10.s64 + 2;
	// rlwinm r11,r11,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// lhzx r11,r11,r31
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r11.u32 + ctx.r31.u32);
	// mr r8,r11
	ctx.r8.u64 = ctx.r11.u64;
	// lbzx r9,r11,r9
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + ctx.r9.u32);
	// rlwinm. r9,r9,0,0,24
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFFFF80;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq 0x830fadc0
	if (ctx.cr0.eq) goto loc_830FADC0;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// sth r11,80(r1)
	PPC_STORE_U16(ctx.r1.u32 + 80, ctx.r11.u16);
	// rlwinm. r11,r11,0,29,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x6;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// bne 0x830fad60
	if (!ctx.cr0.eq) goto loc_830FAD60;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
	// b 0x830fad70
	goto loc_830FAD70;
loc_830FAD60:
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x830fa918
	ctx.lr = 0x830FAD70;
	sub_830FA918(ctx, base);
loc_830FAD70:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r10,0(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x830fad18
	if (ctx.cr6.lt) goto loc_830FAD18;
loc_830FAD80:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x830f9e58
	ctx.lr = 0x830FAD88;
	sub_830F9E58(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x830fad00
	if (!ctx.cr0.eq) goto loc_830FAD00;
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// cmpw cr6,r25,r11
	ctx.cr6.compare<int32_t>(ctx.r25.s32, ctx.r11.s32, ctx.xer);
	// bne cr6,0x830fadac
	if (!ctx.cr6.eq) goto loc_830FADAC;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// cmpw cr6,r24,r11
	ctx.cr6.compare<int32_t>(ctx.r24.s32, ctx.r11.s32, ctx.xer);
	// li r11,0
	ctx.r11.s64 = 0;
	// beq cr6,0x830fadb0
	if (ctx.cr6.eq) goto loc_830FADB0;
loc_830FADAC:
	// li r11,1
	ctx.r11.s64 = 1;
loc_830FADB0:
	// li r3,0
	ctx.r3.s64 = 0;
loc_830FADB4:
	// stb r11,0(r23)
	PPC_STORE_U8(ctx.r23.u32 + 0, ctx.r11.u8);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x833a01e4
	__restgprlr_23(ctx, base);
	return;
loc_830FADC0:
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// cmpw cr6,r25,r11
	ctx.cr6.compare<int32_t>(ctx.r25.s32, ctx.r11.s32, ctx.xer);
	// bne cr6,0x830faddc
	if (!ctx.cr6.eq) goto loc_830FADDC;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// cmpw cr6,r24,r11
	ctx.cr6.compare<int32_t>(ctx.r24.s32, ctx.r11.s32, ctx.xer);
	// li r11,0
	ctx.r11.s64 = 0;
	// beq cr6,0x830fade0
	if (ctx.cr6.eq) goto loc_830FADE0;
loc_830FADDC:
	// li r11,1
	ctx.r11.s64 = 1;
loc_830FADE0:
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x830fadb4
	goto loc_830FADB4;
}

__attribute__((alias("__imp__sub_830FADE8"))) PPC_WEAK_FUNC(sub_830FADE8);
PPC_FUNC_IMPL(__imp__sub_830FADE8) {
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
	// lis r11,0
	ctx.r11.s64 = 0;
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// ori r11,r11,32772
	ctx.r11.u64 = ctx.r11.u64 | 32772;
	// lwzx r11,r3,r11
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + ctx.r11.u32);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x830fae20
	if (!ctx.cr6.eq) goto loc_830FAE20;
	// bl 0x830f9e58
	ctx.lr = 0x830FAE18;
	sub_830F9E58(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x830fae8c
	if (ctx.cr0.eq) goto loc_830FAE8C;
loc_830FAE20:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lis r10,2
	ctx.r10.s64 = 131072;
	// addi r9,r11,2
	ctx.r9.s64 = ctx.r11.s64 + 2;
	// ori r10,r10,32852
	ctx.r10.u64 = ctx.r10.u64 | 32852;
	// rlwinm r9,r9,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// lwzx r8,r31,r10
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r10.u32);
	// lhzx r10,r9,r31
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r9.u32 + ctx.r31.u32);
	// lbzx r9,r8,r10
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r8.u32 + ctx.r10.u32);
	// sth r10,80(r1)
	PPC_STORE_U16(ctx.r1.u32 + 80, ctx.r10.u16);
	// rlwinm. r9,r9,0,0,24
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFFFF80;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq 0x830fae8c
	if (ctx.cr0.eq) goto loc_830FAE8C;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// rlwinm. r10,r10,0,29,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x6;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// bne 0x830fae74
	if (!ctx.cr0.eq) goto loc_830FAE74;
	// addis r10,r31,2
	ctx.r10.s64 = ctx.r31.s64 + 131072;
	// addi r10,r10,-16376
	ctx.r10.s64 = ctx.r10.s64 + -16376;
	// lwz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r11.u32);
	// b 0x830fae84
	goto loc_830FAE84;
loc_830FAE74:
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x830fa918
	ctx.lr = 0x830FAE84;
	sub_830FA918(ctx, base);
loc_830FAE84:
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x830fae90
	goto loc_830FAE90;
loc_830FAE8C:
	// li r3,0
	ctx.r3.s64 = 0;
loc_830FAE90:
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

__attribute__((alias("__imp__sub_830FAEA4"))) PPC_WEAK_FUNC(sub_830FAEA4);
PPC_FUNC_IMPL(__imp__sub_830FAEA4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_830FAEA8"))) PPC_WEAK_FUNC(sub_830FAEA8);
PPC_FUNC_IMPL(__imp__sub_830FAEA8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lwz r25,17952(r26)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r26.u32 + 17952);
	// lwz r16,21984(r28)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r28.u32 + 21984);
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x833a0190
	ctx.lr = 0x830FAEB8;
	__savegprlr_22(ctx, base);
	// addi r31,r1,-288
	ctx.r31.s64 = ctx.r1.s64 + -288;
	// stwu r1,-288(r1)
	ea = -288 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,1
	ctx.r11.s64 = 65536;
	// lis r10,0
	ctx.r10.s64 = 0;
	// ori r11,r11,49168
	ctx.r11.u64 = ctx.r11.u64 | 49168;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r22,0
	ctx.r22.s64 = 0;
	// ori r24,r10,32772
	ctx.r24.u64 = ctx.r10.u64 | 32772;
	// li r23,1
	ctx.r23.s64 = 1;
	// lwzx r9,r3,r11
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + ctx.r11.u32);
	// cmpwi r9,0
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq 0x830fb4b4
	if (ctx.cr0.eq) goto loc_830FB4B4;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// ble cr6,0x830fb420
	if (!ctx.cr6.gt) goto loc_830FB420;
	// cmpwi cr6,r9,2
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 2, ctx.xer);
	// ble cr6,0x830fb1fc
	if (!ctx.cr6.gt) goto loc_830FB1FC;
	// cmpwi cr6,r9,4
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 4, ctx.xer);
	// beq cr6,0x830fb044
	if (ctx.cr6.eq) goto loc_830FB044;
	// ble cr6,0x830fb420
	if (!ctx.cr6.gt) goto loc_830FB420;
	// cmpwi cr6,r9,6
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 6, ctx.xer);
	// bgt cr6,0x830fb420
	if (ctx.cr6.gt) goto loc_830FB420;
	// addis r26,r3,3
	ctx.r26.s64 = ctx.r3.s64 + 196608;
	// addi r26,r26,-32732
	ctx.r26.s64 = ctx.r26.s64 + -32732;
	// lwz r8,0(r26)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// cmplwi cr6,r8,2
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 2, ctx.xer);
	// blt cr6,0x830fb580
	if (ctx.cr6.lt) goto loc_830FB580;
	// addis r27,r3,2
	ctx.r27.s64 = ctx.r3.s64 + 131072;
	// mr r28,r22
	ctx.r28.u64 = ctx.r22.u64;
	// addi r27,r27,-16352
	ctx.r27.s64 = ctx.r27.s64 + -16352;
	// lwz r11,0(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// add r10,r11,r3
	ctx.r10.u64 = ctx.r11.u64 + ctx.r3.u64;
	// addis r29,r10,2
	ctx.r29.s64 = ctx.r10.s64 + 131072;
	// addi r29,r29,-16348
	ctx.r29.s64 = ctx.r29.s64 + -16348;
	// lhz r10,0(r29)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r29.u32 + 0);
	// cmplwi cr6,r10,65279
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 65279, ctx.xer);
	// beq cr6,0x830faf50
	if (ctx.cr6.eq) goto loc_830FAF50;
	// cmplwi cr6,r10,65534
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 65534, ctx.xer);
	// bne cr6,0x830faf60
	if (!ctx.cr6.eq) goto loc_830FAF60;
loc_830FAF50:
	// addi r11,r11,2
	ctx.r11.s64 = ctx.r11.s64 + 2;
	// addi r29,r29,2
	ctx.r29.s64 = ctx.r29.s64 + 2;
	// stw r11,0(r27)
	PPC_STORE_U32(ctx.r27.u32 + 0, ctx.r11.u32);
	// mr r28,r11
	ctx.r28.u64 = ctx.r11.u64;
loc_830FAF60:
	// lis r10,-32227
	ctx.r10.s64 = -2112028672;
	// subf r11,r11,r8
	ctx.r11.s64 = ctx.r8.s64 - ctx.r11.s64;
	// lwz r5,976(r10)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r10.u32 + 976);
	// cmplw cr6,r11,r5
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r5.u32, ctx.xer);
	// bge cr6,0x830faf7c
	if (!ctx.cr6.lt) goto loc_830FAF7C;
loc_830FAF74:
	// stw r28,0(r27)
	PPC_STORE_U32(ctx.r27.u32 + 0, ctx.r28.u32);
	// b 0x830fb580
	goto loc_830FB580;
loc_830FAF7C:
	// cmpwi cr6,r9,5
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 5, ctx.xer);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bne cr6,0x830fb038
	if (!ctx.cr6.eq) goto loc_830FB038;
	// lis r11,-32227
	ctx.r11.s64 = -2112028672;
	// addi r4,r11,952
	ctx.r4.s64 = ctx.r11.s64 + 952;
loc_830FAF90:
	// bl 0x833ab6f0
	ctx.lr = 0x830FAF94;
	sub_833AB6F0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x830faf74
	if (!ctx.cr0.eq) goto loc_830FAF74;
	// lwz r11,0(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// lwz r10,0(r26)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x830fb580
	if (!ctx.cr6.lt) goto loc_830FB580;
	// addis r7,r30,3
	ctx.r7.s64 = ctx.r30.s64 + 196608;
	// lis r10,0
	ctx.r10.s64 = 0;
	// addi r7,r7,-32696
	ctx.r7.s64 = ctx.r7.s64 + -32696;
	// add r11,r30,r24
	ctx.r11.u64 = ctx.r30.u64 + ctx.r24.u64;
	// addi r8,r29,-2
	ctx.r8.s64 = ctx.r29.s64 + -2;
	// ori r28,r10,32776
	ctx.r28.u64 = ctx.r10.u64 | 32776;
loc_830FAFC4:
	// lwz r10,0(r27)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// lbz r9,0(r7)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r7.u32 + 0);
	// addi r6,r10,2
	ctx.r6.s64 = ctx.r10.s64 + 2;
	// lhzu r10,2(r8)
	ea = 2 + ctx.r8.u32;
	ctx.r10.u64 = PPC_LOAD_U16(ea);
	ctx.r8.u32 = ea;
	// cmplwi r9,0
	ctx.cr0.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// stw r6,0(r27)
	PPC_STORE_U32(ctx.r27.u32 + 0, ctx.r6.u32);
	// beq 0x830fafec
	if (ctx.cr0.eq) goto loc_830FAFEC;
	// rlwinm r9,r10,8,16,23
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 8) & 0xFF00;
	// rlwinm r10,r10,24,24,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 24) & 0xFF;
	// or r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 | ctx.r10.u64;
loc_830FAFEC:
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// li r6,2
	ctx.r6.s64 = 2;
	// clrlwi r5,r10,16
	ctx.r5.u64 = ctx.r10.u32 & 0xFFFF;
	// add r9,r9,r30
	ctx.r9.u64 = ctx.r9.u64 + ctx.r30.u64;
	// cmplwi cr6,r5,62
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 62, ctx.xer);
	// stbx r6,r9,r28
	PPC_STORE_U8(ctx.r9.u32 + ctx.r28.u32, ctx.r6.u8);
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// addi r9,r9,2
	ctx.r9.s64 = ctx.r9.s64 + 2;
	// rlwinm r9,r9,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// sthx r10,r9,r30
	PPC_STORE_U16(ctx.r9.u32 + ctx.r30.u32, ctx.r10.u16);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// beq cr6,0x830fb580
	if (ctx.cr6.eq) goto loc_830FB580;
	// lwz r10,0(r27)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// lwz r9,0(r26)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// blt cr6,0x830fafc4
	if (ctx.cr6.lt) goto loc_830FAFC4;
	// b 0x830fb580
	goto loc_830FB580;
loc_830FB038:
	// lis r11,-32227
	ctx.r11.s64 = -2112028672;
	// addi r4,r11,964
	ctx.r4.s64 = ctx.r11.s64 + 964;
	// b 0x830faf90
	goto loc_830FAF90;
loc_830FB044:
	// addis r26,r30,3
	ctx.r26.s64 = ctx.r30.s64 + 196608;
	// lis r29,-32227
	ctx.r29.s64 = -2112028672;
	// addi r26,r26,-32732
	ctx.r26.s64 = ctx.r26.s64 + -32732;
	// lis r11,1
	ctx.r11.s64 = 65536;
	// addis r28,r30,2
	ctx.r28.s64 = ctx.r30.s64 + 131072;
	// ori r27,r11,49184
	ctx.r27.u64 = ctx.r11.u64 | 49184;
	// lwz r5,1036(r29)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r29.u32 + 1036);
	// addi r28,r28,-16348
	ctx.r28.s64 = ctx.r28.s64 + -16348;
	// lwz r11,0(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// cmplw cr6,r11,r5
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r5.u32, ctx.xer);
	// ble cr6,0x830fb0a0
	if (!ctx.cr6.gt) goto loc_830FB0A0;
	// lis r11,-32227
	ctx.r11.s64 = -2112028672;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// addi r4,r11,1032
	ctx.r4.s64 = ctx.r11.s64 + 1032;
	// bl 0x830d5f80
	ctx.lr = 0x830FB080;
	sub_830D5F80(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x830fb0a0
	if (!ctx.cr0.eq) goto loc_830FB0A0;
	// lwz r11,1036(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 1036);
	// lwzx r10,r30,r27
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r27.u32);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stwx r11,r30,r27
	PPC_STORE_U32(ctx.r30.u32 + ctx.r27.u32, ctx.r11.u32);
	// lwz r11,1036(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 1036);
	// add r28,r11,r28
	ctx.r28.u64 = ctx.r11.u64 + ctx.r28.u64;
loc_830FB0A0:
	// lis r11,-32227
	ctx.r11.s64 = -2112028672;
	// lwz r10,0(r26)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// lwz r5,936(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 936);
	// cmplw cr6,r10,r5
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r5.u32, ctx.xer);
	// blt cr6,0x830fb580
	if (ctx.cr6.lt) goto loc_830FB580;
	// lis r11,-32227
	ctx.r11.s64 = -2112028672;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// addi r4,r11,928
	ctx.r4.s64 = ctx.r11.s64 + 928;
	// bl 0x830d5f80
	ctx.lr = 0x830FB0C4;
	sub_830D5F80(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x830fb580
	if (!ctx.cr0.eq) goto loc_830FB580;
	// lwz r11,0(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// add r9,r30,r27
	ctx.r9.u64 = ctx.r30.u64 + ctx.r27.u64;
	// lwzx r10,r30,r27
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r27.u32);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// bge cr6,0x830fb580
	if (!ctx.cr6.lt) goto loc_830FB580;
	// lis r10,0
	ctx.r10.s64 = 0;
	// addi r8,r28,-1
	ctx.r8.s64 = ctx.r28.s64 + -1;
	// add r11,r30,r24
	ctx.r11.u64 = ctx.r30.u64 + ctx.r24.u64;
	// ori r28,r10,32776
	ctx.r28.u64 = ctx.r10.u64 | 32776;
loc_830FB0F0:
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r7,0(r9)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// add r6,r10,r30
	ctx.r6.u64 = ctx.r10.u64 + ctx.r30.u64;
	// lbzu r10,1(r8)
	ea = 1 + ctx.r8.u32;
	ctx.r10.u64 = PPC_LOAD_U8(ea);
	ctx.r8.u32 = ea;
	// addi r7,r7,1
	ctx.r7.s64 = ctx.r7.s64 + 1;
	// extsb r5,r10
	ctx.r5.s64 = ctx.r10.s8;
	// stw r7,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r7.u32);
	// extsb r7,r10
	ctx.r7.s64 = ctx.r10.s8;
	// cmpwi cr6,r7,62
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 62, ctx.xer);
	// stbx r23,r6,r28
	PPC_STORE_U8(ctx.r6.u32 + ctx.r28.u32, ctx.r23.u8);
	// lwz r7,0(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// addi r7,r7,2
	ctx.r7.s64 = ctx.r7.s64 + 2;
	// rlwinm r7,r7,1,0,30
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 1) & 0xFFFFFFFE;
	// sthx r5,r7,r30
	PPC_STORE_U16(ctx.r7.u32 + ctx.r30.u32, ctx.r5.u16);
	// lwz r7,0(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// addi r7,r7,1
	ctx.r7.s64 = ctx.r7.s64 + 1;
	// stw r7,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r7.u32);
	// beq cr6,0x830fb580
	if (ctx.cr6.eq) goto loc_830FB580;
	// rlwinm. r10,r10,0,24,24
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x80;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x830fb154
	if (!ctx.cr0.eq) goto loc_830FB154;
	// lwz r10,0(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// lwz r7,0(r26)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// cmplw cr6,r10,r7
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r7.u32, ctx.xer);
	// blt cr6,0x830fb0f0
	if (ctx.cr6.lt) goto loc_830FB0F0;
	// b 0x830fb580
	goto loc_830FB580;
loc_830FB154:
	// li r22,0
	ctx.r22.s64 = 0;
	// addis r29,r30,3
	ctx.r29.s64 = ctx.r30.s64 + 196608;
	// stw r22,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r22.u32);
	// lis r11,1
	ctx.r11.s64 = 65536;
	// stw r22,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r22.u32);
	// addi r29,r29,-32672
	ctx.r29.s64 = ctx.r29.s64 + -32672;
	// ori r11,r11,49180
	ctx.r11.u64 = ctx.r11.u64 | 49180;
	// lwz r3,0(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// lwzx r4,r30,r11
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r11.u32);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x830FB188;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r11,1
	ctx.r11.s64 = 65536;
	// ori r11,r11,49172
	ctx.r11.u64 = ctx.r11.u64 | 49172;
	// lwz r3,0(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// lwzx r4,r30,r11
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r11.u32);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x830FB1A8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r11,2
	ctx.r11.s64 = 131072;
	// lwz r9,0(r29)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// ori r11,r11,32832
	ctx.r11.u64 = ctx.r11.u64 | 32832;
	// stw r9,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r9.u32);
	// stw r9,100(r31)
	PPC_STORE_U32(ctx.r31.u32 + 100, ctx.r9.u32);
	// lwzx r7,r30,r11
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r11.u32);
	// stw r7,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r7.u32);
	// lis r11,-32228
	ctx.r11.s64 = -2112094208;
	// stw r9,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r9.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r4,r11,21880
	ctx.r4.s64 = ctx.r11.s64 + 21880;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r6,71
	ctx.r6.s64 = 71;
	// li r5,1534
	ctx.r5.s64 = 1534;
	// addi r3,r31,112
	ctx.r3.s64 = ctx.r31.s64 + 112;
	// bl 0x830f8ea8
	ctx.lr = 0x830FB1EC;
	sub_830F8EA8(ctx, base);
	// lis r11,-32194
	ctx.r11.s64 = -2109865984;
	// addi r3,r31,112
	ctx.r3.s64 = ctx.r31.s64 + 112;
	// addi r4,r11,-27696
	ctx.r4.s64 = ctx.r11.s64 + -27696;
	// bl 0x833a7198
	ctx.lr = 0x830FB1FC;
	sub_833A7198(ctx, base);
loc_830FB1FC:
	// addis r6,r30,2
	ctx.r6.s64 = ctx.r30.s64 + 131072;
	// lis r10,2
	ctx.r10.s64 = 131072;
	// addi r6,r6,-16348
	ctx.r6.s64 = ctx.r6.s64 + -16348;
	// lis r9,1
	ctx.r9.s64 = 65536;
	// lis r8,1
	ctx.r8.s64 = 65536;
	// lis r5,1
	ctx.r5.s64 = 65536;
	// ori r7,r10,32804
	ctx.r7.u64 = ctx.r10.u64 | 32804;
	// lbz r11,0(r6)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r6.u32 + 0);
	// ori r10,r9,49189
	ctx.r10.u64 = ctx.r9.u64 | 49189;
	// ori r9,r8,49190
	ctx.r9.u64 = ctx.r8.u64 | 49190;
	// ori r8,r5,49191
	ctx.r8.u64 = ctx.r5.u64 | 49191;
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x830fb254
	if (!ctx.cr0.eq) goto loc_830FB254;
	// lbzx r5,r30,r10
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r30.u32 + ctx.r10.u32);
	// cmplwi r5,0
	ctx.cr0.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// bne 0x830fb254
	if (!ctx.cr0.eq) goto loc_830FB254;
	// lbzx r5,r30,r9
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r30.u32 + ctx.r9.u32);
	// cmplwi cr6,r5,254
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 254, ctx.xer);
	// bne cr6,0x830fb254
	if (!ctx.cr6.eq) goto loc_830FB254;
	// lbzx r5,r30,r8
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r30.u32 + ctx.r8.u32);
	// cmplwi cr6,r5,255
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 255, ctx.xer);
	// beq cr6,0x830fb280
	if (ctx.cr6.eq) goto loc_830FB280;
loc_830FB254:
	// cmplwi cr6,r11,255
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 255, ctx.xer);
	// bne cr6,0x830fb2c0
	if (!ctx.cr6.eq) goto loc_830FB2C0;
	// lbzx r11,r30,r10
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + ctx.r10.u32);
	// cmplwi cr6,r11,254
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 254, ctx.xer);
	// bne cr6,0x830fb2c0
	if (!ctx.cr6.eq) goto loc_830FB2C0;
	// lbzx r11,r30,r9
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + ctx.r9.u32);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x830fb2c0
	if (!ctx.cr0.eq) goto loc_830FB2C0;
	// lbzx r11,r30,r8
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + ctx.r8.u32);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x830fb2c0
	if (!ctx.cr0.eq) goto loc_830FB2C0;
loc_830FB280:
	// lwzx r9,r30,r7
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r7.u32);
	// mr r11,r22
	ctx.r11.u64 = ctx.r22.u64;
	// add r10,r30,r7
	ctx.r10.u64 = ctx.r30.u64 + ctx.r7.u64;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// ble cr6,0x830fb2b4
	if (!ctx.cr6.gt) goto loc_830FB2B4;
	// addis r9,r30,2
	ctx.r9.s64 = ctx.r30.s64 + 131072;
	// addi r9,r9,-16344
	ctx.r9.s64 = ctx.r9.s64 + -16344;
loc_830FB29C:
	// lbzx r8,r9,r11
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r9.u32 + ctx.r11.u32);
	// stbx r8,r6,r11
	PPC_STORE_U8(ctx.r6.u32 + ctx.r11.u32, ctx.r8.u8);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// lwz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmplw cr6,r11,r8
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r8.u32, ctx.xer);
	// blt cr6,0x830fb29c
	if (ctx.cr6.lt) goto loc_830FB29C;
loc_830FB2B4:
	// lwz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// addi r11,r11,-4
	ctx.r11.s64 = ctx.r11.s64 + -4;
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r11.u32);
loc_830FB2C0:
	// addis r10,r30,2
	ctx.r10.s64 = ctx.r30.s64 + 131072;
	// add r7,r30,r7
	ctx.r7.u64 = ctx.r30.u64 + ctx.r7.u64;
	// addi r10,r10,-16352
	ctx.r10.s64 = ctx.r10.s64 + -16352;
	// lwz r9,0(r7)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r7.u32 + 0);
	// lwz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// bge cr6,0x830fb580
	if (!ctx.cr6.lt) goto loc_830FB580;
	// addis r8,r30,3
	ctx.r8.s64 = ctx.r30.s64 + 196608;
	// lis r11,0
	ctx.r11.s64 = 0;
	// addi r9,r6,-4
	ctx.r9.s64 = ctx.r6.s64 + -4;
	// addi r8,r8,-32696
	ctx.r8.s64 = ctx.r8.s64 + -32696;
	// ori r28,r11,32776
	ctx.r28.u64 = ctx.r11.u64 | 32776;
loc_830FB2F0:
	// lwz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// lbz r6,0(r8)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r8.u32 + 0);
	// addi r5,r11,4
	ctx.r5.s64 = ctx.r11.s64 + 4;
	// lwzu r11,4(r9)
	ea = 4 + ctx.r9.u32;
	ctx.r11.u64 = PPC_LOAD_U32(ea);
	ctx.r9.u32 = ea;
	// cmplwi r6,0
	ctx.cr0.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// stw r5,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r5.u32);
	// beq 0x830fb328
	if (ctx.cr0.eq) goto loc_830FB328;
	// mr r6,r11
	ctx.r6.u64 = ctx.r11.u64;
	// mr r5,r11
	ctx.r5.u64 = ctx.r11.u64;
	// rlwimi r6,r11,16,16,31
	ctx.r6.u64 = (__builtin_rotateleft32(ctx.r11.u32, 16) & 0xFFFF) | (ctx.r6.u64 & 0xFFFFFFFFFFFF0000);
	// rlwimi r5,r11,16,0,15
	ctx.r5.u64 = (__builtin_rotateleft32(ctx.r11.u32, 16) & 0xFFFF0000) | (ctx.r5.u64 & 0xFFFFFFFF0000FFFF);
	// rlwinm r11,r6,24,16,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 24) & 0xFFFF;
	// rlwinm r6,r5,8,0,15
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 8) & 0xFFFF0000;
	// or r11,r11,r6
	ctx.r11.u64 = ctx.r11.u64 | ctx.r6.u64;
loc_830FB328:
	// cmplwi cr6,r11,65535
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 65535, ctx.xer);
	// bgt cr6,0x830fb37c
	if (ctx.cr6.gt) goto loc_830FB37C;
	// mr r6,r11
	ctx.r6.u64 = ctx.r11.u64;
	// cmplwi cr6,r11,62
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 62, ctx.xer);
	// lwzx r11,r30,r24
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r24.u32);
	// li r5,4
	ctx.r5.s64 = 4;
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + ctx.r30.u64;
	// stbx r5,r11,r28
	PPC_STORE_U8(ctx.r11.u32 + ctx.r28.u32, ctx.r5.u8);
	// lwzx r11,r30,r24
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r24.u32);
	// addi r11,r11,2
	ctx.r11.s64 = ctx.r11.s64 + 2;
	// rlwinm r11,r11,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// sthx r6,r11,r30
	PPC_STORE_U16(ctx.r11.u32 + ctx.r30.u32, ctx.r6.u16);
	// lwzx r11,r30,r24
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r24.u32);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stwx r11,r30,r24
	PPC_STORE_U32(ctx.r30.u32 + ctx.r24.u32, ctx.r11.u32);
	// beq cr6,0x830fb580
	if (ctx.cr6.eq) goto loc_830FB580;
	// lwz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// lwz r6,0(r7)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + 0);
	// cmplw cr6,r11,r6
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r6.u32, ctx.xer);
	// blt cr6,0x830fb2f0
	if (ctx.cr6.lt) goto loc_830FB2F0;
	// b 0x830fb580
	goto loc_830FB580;
loc_830FB37C:
	// stw r22,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r22.u32);
	// addis r29,r30,3
	ctx.r29.s64 = ctx.r30.s64 + 196608;
	// stwx r22,r30,r24
	PPC_STORE_U32(ctx.r30.u32 + ctx.r24.u32, ctx.r22.u32);
	// lis r11,1
	ctx.r11.s64 = 65536;
	// addi r29,r29,-32672
	ctx.r29.s64 = ctx.r29.s64 + -32672;
	// ori r11,r11,49180
	ctx.r11.u64 = ctx.r11.u64 | 49180;
	// lwz r3,0(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// lwzx r4,r30,r11
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r11.u32);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x830FB3AC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r11,1
	ctx.r11.s64 = 65536;
	// lwz r3,0(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// ori r11,r11,49172
	ctx.r11.u64 = ctx.r11.u64 | 49172;
	// lwzx r4,r30,r11
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r11.u32);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x830FB3CC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r11,2
	ctx.r11.s64 = 131072;
	// lwz r9,0(r29)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// ori r11,r11,32832
	ctx.r11.u64 = ctx.r11.u64 | 32832;
	// stw r9,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r9.u32);
	// stw r9,100(r31)
	PPC_STORE_U32(ctx.r31.u32 + 100, ctx.r9.u32);
	// lwzx r7,r30,r11
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r11.u32);
	// stw r7,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r7.u32);
	// lis r11,-32228
	ctx.r11.s64 = -2112094208;
	// stw r9,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r9.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r4,r11,21880
	ctx.r4.s64 = ctx.r11.s64 + 21880;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r6,71
	ctx.r6.s64 = 71;
	// li r5,1455
	ctx.r5.s64 = 1455;
	// addi r3,r31,144
	ctx.r3.s64 = ctx.r31.s64 + 144;
	// bl 0x830f8ea8
	ctx.lr = 0x830FB410;
	sub_830F8EA8(ctx, base);
	// lis r11,-32194
	ctx.r11.s64 = -2109865984;
	// addi r3,r31,144
	ctx.r3.s64 = ctx.r31.s64 + 144;
	// addi r4,r11,-27696
	ctx.r4.s64 = ctx.r11.s64 + -27696;
	// bl 0x833a7198
	ctx.lr = 0x830FB420;
	sub_833A7198(ctx, base);
loc_830FB420:
	// addis r29,r30,3
	ctx.r29.s64 = ctx.r30.s64 + 196608;
	// lis r11,1
	ctx.r11.s64 = 65536;
	// addi r29,r29,-32672
	ctx.r29.s64 = ctx.r29.s64 + -32672;
	// ori r11,r11,49180
	ctx.r11.u64 = ctx.r11.u64 | 49180;
	// lwz r3,0(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// lwzx r4,r30,r11
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r11.u32);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x830FB448;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r11,1
	ctx.r11.s64 = 65536;
	// lwz r3,0(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// ori r11,r11,49172
	ctx.r11.u64 = ctx.r11.u64 | 49172;
	// lwzx r4,r30,r11
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r11.u32);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x830FB468;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r11,2
	ctx.r11.s64 = 131072;
	// lwz r3,0(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// ori r11,r11,32832
	ctx.r11.u64 = ctx.r11.u64 | 32832;
	// lwzx r4,r30,r11
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r11.u32);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x830FB488;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r11,-32228
	ctx.r11.s64 = -2112094208;
	// lwz r7,0(r29)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// li r6,70
	ctx.r6.s64 = 70;
	// addi r4,r11,21880
	ctx.r4.s64 = ctx.r11.s64 + 21880;
	// li r5,1650
	ctx.r5.s64 = 1650;
	// addi r3,r31,176
	ctx.r3.s64 = ctx.r31.s64 + 176;
	// bl 0x830f8df0
	ctx.lr = 0x830FB4A4;
	sub_830F8DF0(ctx, base);
	// lis r11,-32194
	ctx.r11.s64 = -2109865984;
	// addi r3,r31,176
	ctx.r3.s64 = ctx.r31.s64 + 176;
	// addi r4,r11,-27696
	ctx.r4.s64 = ctx.r11.s64 + -27696;
	// bl 0x833a7198
	ctx.lr = 0x830FB4B4;
	sub_833A7198(ctx, base);
loc_830FB4B4:
	// addis r26,r30,2
	ctx.r26.s64 = ctx.r30.s64 + 131072;
	// addi r26,r26,-16348
	ctx.r26.s64 = ctx.r26.s64 + -16348;
	// lbz r3,0(r26)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r26.u32 + 0);
	// bl 0x8313d350
	ctx.lr = 0x830FB4C4;
	sub_8313D350(ctx, base);
	// addis r27,r30,2
	ctx.r27.s64 = ctx.r30.s64 + 131072;
	// lwzx r11,r30,r24
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r24.u32);
	// lis r10,0
	ctx.r10.s64 = 0;
	// addi r27,r27,-16352
	ctx.r27.s64 = ctx.r27.s64 + -16352;
	// ori r28,r10,32776
	ctx.r28.u64 = ctx.r10.u64 | 32776;
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + ctx.r30.u64;
	// clrlwi r8,r3,16
	ctx.r8.u64 = ctx.r3.u32 & 0xFFFF;
	// add r29,r30,r24
	ctx.r29.u64 = ctx.r30.u64 + ctx.r24.u64;
	// lwz r10,0(r27)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// addi r9,r26,1
	ctx.r9.s64 = ctx.r26.s64 + 1;
	// cmplwi cr6,r8,62
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 62, ctx.xer);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stw r10,0(r27)
	PPC_STORE_U32(ctx.r27.u32 + 0, ctx.r10.u32);
	// stbx r23,r11,r28
	PPC_STORE_U8(ctx.r11.u32 + ctx.r28.u32, ctx.r23.u8);
	// lwzx r11,r30,r24
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r24.u32);
	// addi r11,r11,2
	ctx.r11.s64 = ctx.r11.s64 + 2;
	// rlwinm r11,r11,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// sthx r3,r11,r30
	PPC_STORE_U16(ctx.r11.u32 + ctx.r30.u32, ctx.r3.u16);
	// lwzx r11,r30,r24
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r24.u32);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stwx r11,r30,r24
	PPC_STORE_U32(ctx.r30.u32 + ctx.r24.u32, ctx.r11.u32);
	// beq cr6,0x830fb580
	if (ctx.cr6.eq) goto loc_830FB580;
	// addis r25,r30,3
	ctx.r25.s64 = ctx.r30.s64 + 196608;
	// addi r26,r9,-1
	ctx.r26.s64 = ctx.r9.s64 + -1;
	// addi r25,r25,-32732
	ctx.r25.s64 = ctx.r25.s64 + -32732;
loc_830FB528:
	// lwz r11,0(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// lwz r10,0(r25)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r25.u32 + 0);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x830fb580
	if (ctx.cr6.eq) goto loc_830FB580;
	// lbzu r3,1(r26)
	ea = 1 + ctx.r26.u32;
	ctx.r3.u64 = PPC_LOAD_U8(ea);
	ctx.r26.u32 = ea;
	// bl 0x8313d350
	ctx.lr = 0x830FB540;
	sub_8313D350(ctx, base);
	// lwz r11,0(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// clrlwi r10,r3,16
	ctx.r10.u64 = ctx.r3.u32 & 0xFFFF;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,62
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 62, ctx.xer);
	// stw r11,0(r27)
	PPC_STORE_U32(ctx.r27.u32 + 0, ctx.r11.u32);
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + ctx.r30.u64;
	// stbx r23,r11,r28
	PPC_STORE_U8(ctx.r11.u32 + ctx.r28.u32, ctx.r23.u8);
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// addi r11,r11,2
	ctx.r11.s64 = ctx.r11.s64 + 2;
	// rlwinm r11,r11,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// sthx r3,r11,r30
	PPC_STORE_U16(ctx.r11.u32 + ctx.r30.u32, ctx.r3.u16);
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r11.u32);
	// bne cr6,0x830fb528
	if (!ctx.cr6.eq) goto loc_830FB528;
loc_830FB580:
	// lis r11,2
	ctx.r11.s64 = 131072;
	// ori r11,r11,32848
	ctx.r11.u64 = ctx.r11.u64 | 32848;
	// lwzx r11,r30,r11
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r11.u32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x830fb5c8
	if (!ctx.cr6.eq) goto loc_830FB5C8;
	// lis r11,2
	ctx.r11.s64 = 131072;
	// ori r11,r11,32812
	ctx.r11.u64 = ctx.r11.u64 | 32812;
	// lwzx r11,r30,r11
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r11.u32);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x830fb5c8
	if (!ctx.cr6.eq) goto loc_830FB5C8;
	// lwzx r11,r30,r24
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r24.u32);
	// li r10,32
	ctx.r10.s64 = 32;
	// addi r11,r11,2
	ctx.r11.s64 = ctx.r11.s64 + 2;
	// rlwinm r11,r11,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// sthx r10,r11,r30
	PPC_STORE_U16(ctx.r11.u32 + ctx.r30.u32, ctx.r10.u16);
	// lwzx r11,r30,r24
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r24.u32);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stwx r11,r30,r24
	PPC_STORE_U32(ctx.r30.u32 + ctx.r24.u32, ctx.r11.u32);
loc_830FB5C8:
	// lis r11,2
	ctx.r11.s64 = 131072;
	// ori r11,r11,32829
	ctx.r11.u64 = ctx.r11.u64 | 32829;
	// lbzx r11,r30,r11
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + ctx.r11.u32);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x830fb628
	if (ctx.cr0.eq) goto loc_830FB628;
	// lis r11,0
	ctx.r11.s64 = 0;
	// lwzx r8,r30,r24
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r24.u32);
	// add r9,r30,r24
	ctx.r9.u64 = ctx.r30.u64 + ctx.r24.u64;
	// ori r10,r11,49160
	ctx.r10.u64 = ctx.r11.u64 | 49160;
	// mr r11,r23
	ctx.r11.u64 = ctx.r23.u64;
	// cmplwi cr6,r8,1
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 1, ctx.xer);
	// stwx r22,r30,r10
	PPC_STORE_U32(ctx.r30.u32 + ctx.r10.u32, ctx.r22.u32);
	// ble cr6,0x830fb628
	if (!ctx.cr6.gt) goto loc_830FB628;
	// addis r6,r30,1
	ctx.r6.s64 = ctx.r30.s64 + 65536;
	// add r10,r30,r10
	ctx.r10.u64 = ctx.r30.u64 + ctx.r10.u64;
	// addi r6,r6,-32761
	ctx.r6.s64 = ctx.r6.s64 + -32761;
loc_830FB608:
	// lbzx r7,r6,r11
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r6.u32 + ctx.r11.u32);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// lwz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// add r8,r7,r8
	ctx.r8.u64 = ctx.r7.u64 + ctx.r8.u64;
	// stwu r8,4(r10)
	ea = 4 + ctx.r10.u32;
	PPC_STORE_U32(ea, ctx.r8.u32);
	ctx.r10.u32 = ea;
	// lwz r8,0(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// cmplw cr6,r11,r8
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r8.u32, ctx.xer);
	// blt cr6,0x830fb608
	if (ctx.cr6.lt) goto loc_830FB608;
loc_830FB628:
	// addi r1,r31,288
	ctx.r1.s64 = ctx.r31.s64 + 288;
	// b 0x833a01e0
	__restgprlr_22(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_830FAEB0"))) PPC_WEAK_FUNC(sub_830FAEB0);
PPC_FUNC_IMPL(__imp__sub_830FAEB0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x833a0190
	ctx.lr = 0x830FAEB8;
	__savegprlr_22(ctx, base);
	// addi r31,r1,-288
	ctx.r31.s64 = ctx.r1.s64 + -288;
	// stwu r1,-288(r1)
	ea = -288 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,1
	ctx.r11.s64 = 65536;
	// lis r10,0
	ctx.r10.s64 = 0;
	// ori r11,r11,49168
	ctx.r11.u64 = ctx.r11.u64 | 49168;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r22,0
	ctx.r22.s64 = 0;
	// ori r24,r10,32772
	ctx.r24.u64 = ctx.r10.u64 | 32772;
	// li r23,1
	ctx.r23.s64 = 1;
	// lwzx r9,r3,r11
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + ctx.r11.u32);
	// cmpwi r9,0
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq 0x830fb4b4
	if (ctx.cr0.eq) goto loc_830FB4B4;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// ble cr6,0x830fb420
	if (!ctx.cr6.gt) goto loc_830FB420;
	// cmpwi cr6,r9,2
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 2, ctx.xer);
	// ble cr6,0x830fb1fc
	if (!ctx.cr6.gt) goto loc_830FB1FC;
	// cmpwi cr6,r9,4
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 4, ctx.xer);
	// beq cr6,0x830fb044
	if (ctx.cr6.eq) goto loc_830FB044;
	// ble cr6,0x830fb420
	if (!ctx.cr6.gt) goto loc_830FB420;
	// cmpwi cr6,r9,6
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 6, ctx.xer);
	// bgt cr6,0x830fb420
	if (ctx.cr6.gt) goto loc_830FB420;
	// addis r26,r3,3
	ctx.r26.s64 = ctx.r3.s64 + 196608;
	// addi r26,r26,-32732
	ctx.r26.s64 = ctx.r26.s64 + -32732;
	// lwz r8,0(r26)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// cmplwi cr6,r8,2
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 2, ctx.xer);
	// blt cr6,0x830fb580
	if (ctx.cr6.lt) goto loc_830FB580;
	// addis r27,r3,2
	ctx.r27.s64 = ctx.r3.s64 + 131072;
	// mr r28,r22
	ctx.r28.u64 = ctx.r22.u64;
	// addi r27,r27,-16352
	ctx.r27.s64 = ctx.r27.s64 + -16352;
	// lwz r11,0(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// add r10,r11,r3
	ctx.r10.u64 = ctx.r11.u64 + ctx.r3.u64;
	// addis r29,r10,2
	ctx.r29.s64 = ctx.r10.s64 + 131072;
	// addi r29,r29,-16348
	ctx.r29.s64 = ctx.r29.s64 + -16348;
	// lhz r10,0(r29)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r29.u32 + 0);
	// cmplwi cr6,r10,65279
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 65279, ctx.xer);
	// beq cr6,0x830faf50
	if (ctx.cr6.eq) goto loc_830FAF50;
	// cmplwi cr6,r10,65534
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 65534, ctx.xer);
	// bne cr6,0x830faf60
	if (!ctx.cr6.eq) goto loc_830FAF60;
loc_830FAF50:
	// addi r11,r11,2
	ctx.r11.s64 = ctx.r11.s64 + 2;
	// addi r29,r29,2
	ctx.r29.s64 = ctx.r29.s64 + 2;
	// stw r11,0(r27)
	PPC_STORE_U32(ctx.r27.u32 + 0, ctx.r11.u32);
	// mr r28,r11
	ctx.r28.u64 = ctx.r11.u64;
loc_830FAF60:
	// lis r10,-32227
	ctx.r10.s64 = -2112028672;
	// subf r11,r11,r8
	ctx.r11.s64 = ctx.r8.s64 - ctx.r11.s64;
	// lwz r5,976(r10)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r10.u32 + 976);
	// cmplw cr6,r11,r5
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r5.u32, ctx.xer);
	// bge cr6,0x830faf7c
	if (!ctx.cr6.lt) goto loc_830FAF7C;
loc_830FAF74:
	// stw r28,0(r27)
	PPC_STORE_U32(ctx.r27.u32 + 0, ctx.r28.u32);
	// b 0x830fb580
	goto loc_830FB580;
loc_830FAF7C:
	// cmpwi cr6,r9,5
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 5, ctx.xer);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bne cr6,0x830fb038
	if (!ctx.cr6.eq) goto loc_830FB038;
	// lis r11,-32227
	ctx.r11.s64 = -2112028672;
	// addi r4,r11,952
	ctx.r4.s64 = ctx.r11.s64 + 952;
loc_830FAF90:
	// bl 0x833ab6f0
	ctx.lr = 0x830FAF94;
	sub_833AB6F0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x830faf74
	if (!ctx.cr0.eq) goto loc_830FAF74;
	// lwz r11,0(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// lwz r10,0(r26)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x830fb580
	if (!ctx.cr6.lt) goto loc_830FB580;
	// addis r7,r30,3
	ctx.r7.s64 = ctx.r30.s64 + 196608;
	// lis r10,0
	ctx.r10.s64 = 0;
	// addi r7,r7,-32696
	ctx.r7.s64 = ctx.r7.s64 + -32696;
	// add r11,r30,r24
	ctx.r11.u64 = ctx.r30.u64 + ctx.r24.u64;
	// addi r8,r29,-2
	ctx.r8.s64 = ctx.r29.s64 + -2;
	// ori r28,r10,32776
	ctx.r28.u64 = ctx.r10.u64 | 32776;
loc_830FAFC4:
	// lwz r10,0(r27)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// lbz r9,0(r7)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r7.u32 + 0);
	// addi r6,r10,2
	ctx.r6.s64 = ctx.r10.s64 + 2;
	// lhzu r10,2(r8)
	ea = 2 + ctx.r8.u32;
	ctx.r10.u64 = PPC_LOAD_U16(ea);
	ctx.r8.u32 = ea;
	// cmplwi r9,0
	ctx.cr0.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// stw r6,0(r27)
	PPC_STORE_U32(ctx.r27.u32 + 0, ctx.r6.u32);
	// beq 0x830fafec
	if (ctx.cr0.eq) goto loc_830FAFEC;
	// rlwinm r9,r10,8,16,23
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 8) & 0xFF00;
	// rlwinm r10,r10,24,24,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 24) & 0xFF;
	// or r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 | ctx.r10.u64;
loc_830FAFEC:
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// li r6,2
	ctx.r6.s64 = 2;
	// clrlwi r5,r10,16
	ctx.r5.u64 = ctx.r10.u32 & 0xFFFF;
	// add r9,r9,r30
	ctx.r9.u64 = ctx.r9.u64 + ctx.r30.u64;
	// cmplwi cr6,r5,62
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 62, ctx.xer);
	// stbx r6,r9,r28
	PPC_STORE_U8(ctx.r9.u32 + ctx.r28.u32, ctx.r6.u8);
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// addi r9,r9,2
	ctx.r9.s64 = ctx.r9.s64 + 2;
	// rlwinm r9,r9,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// sthx r10,r9,r30
	PPC_STORE_U16(ctx.r9.u32 + ctx.r30.u32, ctx.r10.u16);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// beq cr6,0x830fb580
	if (ctx.cr6.eq) goto loc_830FB580;
	// lwz r10,0(r27)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// lwz r9,0(r26)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// blt cr6,0x830fafc4
	if (ctx.cr6.lt) goto loc_830FAFC4;
	// b 0x830fb580
	goto loc_830FB580;
loc_830FB038:
	// lis r11,-32227
	ctx.r11.s64 = -2112028672;
	// addi r4,r11,964
	ctx.r4.s64 = ctx.r11.s64 + 964;
	// b 0x830faf90
	goto loc_830FAF90;
loc_830FB044:
	// addis r26,r30,3
	ctx.r26.s64 = ctx.r30.s64 + 196608;
	// lis r29,-32227
	ctx.r29.s64 = -2112028672;
	// addi r26,r26,-32732
	ctx.r26.s64 = ctx.r26.s64 + -32732;
	// lis r11,1
	ctx.r11.s64 = 65536;
	// addis r28,r30,2
	ctx.r28.s64 = ctx.r30.s64 + 131072;
	// ori r27,r11,49184
	ctx.r27.u64 = ctx.r11.u64 | 49184;
	// lwz r5,1036(r29)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r29.u32 + 1036);
	// addi r28,r28,-16348
	ctx.r28.s64 = ctx.r28.s64 + -16348;
	// lwz r11,0(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// cmplw cr6,r11,r5
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r5.u32, ctx.xer);
	// ble cr6,0x830fb0a0
	if (!ctx.cr6.gt) goto loc_830FB0A0;
	// lis r11,-32227
	ctx.r11.s64 = -2112028672;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// addi r4,r11,1032
	ctx.r4.s64 = ctx.r11.s64 + 1032;
	// bl 0x830d5f80
	ctx.lr = 0x830FB080;
	sub_830D5F80(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x830fb0a0
	if (!ctx.cr0.eq) goto loc_830FB0A0;
	// lwz r11,1036(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 1036);
	// lwzx r10,r30,r27
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r27.u32);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stwx r11,r30,r27
	PPC_STORE_U32(ctx.r30.u32 + ctx.r27.u32, ctx.r11.u32);
	// lwz r11,1036(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 1036);
	// add r28,r11,r28
	ctx.r28.u64 = ctx.r11.u64 + ctx.r28.u64;
loc_830FB0A0:
	// lis r11,-32227
	ctx.r11.s64 = -2112028672;
	// lwz r10,0(r26)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// lwz r5,936(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 936);
	// cmplw cr6,r10,r5
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r5.u32, ctx.xer);
	// blt cr6,0x830fb580
	if (ctx.cr6.lt) goto loc_830FB580;
	// lis r11,-32227
	ctx.r11.s64 = -2112028672;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// addi r4,r11,928
	ctx.r4.s64 = ctx.r11.s64 + 928;
	// bl 0x830d5f80
	ctx.lr = 0x830FB0C4;
	sub_830D5F80(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x830fb580
	if (!ctx.cr0.eq) goto loc_830FB580;
	// lwz r11,0(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// add r9,r30,r27
	ctx.r9.u64 = ctx.r30.u64 + ctx.r27.u64;
	// lwzx r10,r30,r27
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r27.u32);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// bge cr6,0x830fb580
	if (!ctx.cr6.lt) goto loc_830FB580;
	// lis r10,0
	ctx.r10.s64 = 0;
	// addi r8,r28,-1
	ctx.r8.s64 = ctx.r28.s64 + -1;
	// add r11,r30,r24
	ctx.r11.u64 = ctx.r30.u64 + ctx.r24.u64;
	// ori r28,r10,32776
	ctx.r28.u64 = ctx.r10.u64 | 32776;
loc_830FB0F0:
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r7,0(r9)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// add r6,r10,r30
	ctx.r6.u64 = ctx.r10.u64 + ctx.r30.u64;
	// lbzu r10,1(r8)
	ea = 1 + ctx.r8.u32;
	ctx.r10.u64 = PPC_LOAD_U8(ea);
	ctx.r8.u32 = ea;
	// addi r7,r7,1
	ctx.r7.s64 = ctx.r7.s64 + 1;
	// extsb r5,r10
	ctx.r5.s64 = ctx.r10.s8;
	// stw r7,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r7.u32);
	// extsb r7,r10
	ctx.r7.s64 = ctx.r10.s8;
	// cmpwi cr6,r7,62
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 62, ctx.xer);
	// stbx r23,r6,r28
	PPC_STORE_U8(ctx.r6.u32 + ctx.r28.u32, ctx.r23.u8);
	// lwz r7,0(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// addi r7,r7,2
	ctx.r7.s64 = ctx.r7.s64 + 2;
	// rlwinm r7,r7,1,0,30
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 1) & 0xFFFFFFFE;
	// sthx r5,r7,r30
	PPC_STORE_U16(ctx.r7.u32 + ctx.r30.u32, ctx.r5.u16);
	// lwz r7,0(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// addi r7,r7,1
	ctx.r7.s64 = ctx.r7.s64 + 1;
	// stw r7,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r7.u32);
	// beq cr6,0x830fb580
	if (ctx.cr6.eq) goto loc_830FB580;
	// rlwinm. r10,r10,0,24,24
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x80;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x830fb154
	if (!ctx.cr0.eq) goto loc_830FB154;
	// lwz r10,0(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// lwz r7,0(r26)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// cmplw cr6,r10,r7
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r7.u32, ctx.xer);
	// blt cr6,0x830fb0f0
	if (ctx.cr6.lt) goto loc_830FB0F0;
	// b 0x830fb580
	goto loc_830FB580;
loc_830FB154:
	// li r22,0
	ctx.r22.s64 = 0;
	// addis r29,r30,3
	ctx.r29.s64 = ctx.r30.s64 + 196608;
	// stw r22,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r22.u32);
	// lis r11,1
	ctx.r11.s64 = 65536;
	// stw r22,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r22.u32);
	// addi r29,r29,-32672
	ctx.r29.s64 = ctx.r29.s64 + -32672;
	// ori r11,r11,49180
	ctx.r11.u64 = ctx.r11.u64 | 49180;
	// lwz r3,0(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// lwzx r4,r30,r11
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r11.u32);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x830FB188;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r11,1
	ctx.r11.s64 = 65536;
	// ori r11,r11,49172
	ctx.r11.u64 = ctx.r11.u64 | 49172;
	// lwz r3,0(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// lwzx r4,r30,r11
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r11.u32);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x830FB1A8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r11,2
	ctx.r11.s64 = 131072;
	// lwz r9,0(r29)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// ori r11,r11,32832
	ctx.r11.u64 = ctx.r11.u64 | 32832;
	// stw r9,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r9.u32);
	// stw r9,100(r31)
	PPC_STORE_U32(ctx.r31.u32 + 100, ctx.r9.u32);
	// lwzx r7,r30,r11
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r11.u32);
	// stw r7,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r7.u32);
	// lis r11,-32228
	ctx.r11.s64 = -2112094208;
	// stw r9,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r9.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r4,r11,21880
	ctx.r4.s64 = ctx.r11.s64 + 21880;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r6,71
	ctx.r6.s64 = 71;
	// li r5,1534
	ctx.r5.s64 = 1534;
	// addi r3,r31,112
	ctx.r3.s64 = ctx.r31.s64 + 112;
	// bl 0x830f8ea8
	ctx.lr = 0x830FB1EC;
	sub_830F8EA8(ctx, base);
	// lis r11,-32194
	ctx.r11.s64 = -2109865984;
	// addi r3,r31,112
	ctx.r3.s64 = ctx.r31.s64 + 112;
	// addi r4,r11,-27696
	ctx.r4.s64 = ctx.r11.s64 + -27696;
	// bl 0x833a7198
	ctx.lr = 0x830FB1FC;
	sub_833A7198(ctx, base);
loc_830FB1FC:
	// addis r6,r30,2
	ctx.r6.s64 = ctx.r30.s64 + 131072;
	// lis r10,2
	ctx.r10.s64 = 131072;
	// addi r6,r6,-16348
	ctx.r6.s64 = ctx.r6.s64 + -16348;
	// lis r9,1
	ctx.r9.s64 = 65536;
	// lis r8,1
	ctx.r8.s64 = 65536;
	// lis r5,1
	ctx.r5.s64 = 65536;
	// ori r7,r10,32804
	ctx.r7.u64 = ctx.r10.u64 | 32804;
	// lbz r11,0(r6)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r6.u32 + 0);
	// ori r10,r9,49189
	ctx.r10.u64 = ctx.r9.u64 | 49189;
	// ori r9,r8,49190
	ctx.r9.u64 = ctx.r8.u64 | 49190;
	// ori r8,r5,49191
	ctx.r8.u64 = ctx.r5.u64 | 49191;
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x830fb254
	if (!ctx.cr0.eq) goto loc_830FB254;
	// lbzx r5,r30,r10
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r30.u32 + ctx.r10.u32);
	// cmplwi r5,0
	ctx.cr0.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// bne 0x830fb254
	if (!ctx.cr0.eq) goto loc_830FB254;
	// lbzx r5,r30,r9
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r30.u32 + ctx.r9.u32);
	// cmplwi cr6,r5,254
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 254, ctx.xer);
	// bne cr6,0x830fb254
	if (!ctx.cr6.eq) goto loc_830FB254;
	// lbzx r5,r30,r8
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r30.u32 + ctx.r8.u32);
	// cmplwi cr6,r5,255
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 255, ctx.xer);
	// beq cr6,0x830fb280
	if (ctx.cr6.eq) goto loc_830FB280;
loc_830FB254:
	// cmplwi cr6,r11,255
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 255, ctx.xer);
	// bne cr6,0x830fb2c0
	if (!ctx.cr6.eq) goto loc_830FB2C0;
	// lbzx r11,r30,r10
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + ctx.r10.u32);
	// cmplwi cr6,r11,254
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 254, ctx.xer);
	// bne cr6,0x830fb2c0
	if (!ctx.cr6.eq) goto loc_830FB2C0;
	// lbzx r11,r30,r9
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + ctx.r9.u32);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x830fb2c0
	if (!ctx.cr0.eq) goto loc_830FB2C0;
	// lbzx r11,r30,r8
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + ctx.r8.u32);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x830fb2c0
	if (!ctx.cr0.eq) goto loc_830FB2C0;
loc_830FB280:
	// lwzx r9,r30,r7
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r7.u32);
	// mr r11,r22
	ctx.r11.u64 = ctx.r22.u64;
	// add r10,r30,r7
	ctx.r10.u64 = ctx.r30.u64 + ctx.r7.u64;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// ble cr6,0x830fb2b4
	if (!ctx.cr6.gt) goto loc_830FB2B4;
	// addis r9,r30,2
	ctx.r9.s64 = ctx.r30.s64 + 131072;
	// addi r9,r9,-16344
	ctx.r9.s64 = ctx.r9.s64 + -16344;
loc_830FB29C:
	// lbzx r8,r9,r11
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r9.u32 + ctx.r11.u32);
	// stbx r8,r6,r11
	PPC_STORE_U8(ctx.r6.u32 + ctx.r11.u32, ctx.r8.u8);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// lwz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmplw cr6,r11,r8
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r8.u32, ctx.xer);
	// blt cr6,0x830fb29c
	if (ctx.cr6.lt) goto loc_830FB29C;
loc_830FB2B4:
	// lwz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// addi r11,r11,-4
	ctx.r11.s64 = ctx.r11.s64 + -4;
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r11.u32);
loc_830FB2C0:
	// addis r10,r30,2
	ctx.r10.s64 = ctx.r30.s64 + 131072;
	// add r7,r30,r7
	ctx.r7.u64 = ctx.r30.u64 + ctx.r7.u64;
	// addi r10,r10,-16352
	ctx.r10.s64 = ctx.r10.s64 + -16352;
	// lwz r9,0(r7)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r7.u32 + 0);
	// lwz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// bge cr6,0x830fb580
	if (!ctx.cr6.lt) goto loc_830FB580;
	// addis r8,r30,3
	ctx.r8.s64 = ctx.r30.s64 + 196608;
	// lis r11,0
	ctx.r11.s64 = 0;
	// addi r9,r6,-4
	ctx.r9.s64 = ctx.r6.s64 + -4;
	// addi r8,r8,-32696
	ctx.r8.s64 = ctx.r8.s64 + -32696;
	// ori r28,r11,32776
	ctx.r28.u64 = ctx.r11.u64 | 32776;
loc_830FB2F0:
	// lwz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// lbz r6,0(r8)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r8.u32 + 0);
	// addi r5,r11,4
	ctx.r5.s64 = ctx.r11.s64 + 4;
	// lwzu r11,4(r9)
	ea = 4 + ctx.r9.u32;
	ctx.r11.u64 = PPC_LOAD_U32(ea);
	ctx.r9.u32 = ea;
	// cmplwi r6,0
	ctx.cr0.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// stw r5,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r5.u32);
	// beq 0x830fb328
	if (ctx.cr0.eq) goto loc_830FB328;
	// mr r6,r11
	ctx.r6.u64 = ctx.r11.u64;
	// mr r5,r11
	ctx.r5.u64 = ctx.r11.u64;
	// rlwimi r6,r11,16,16,31
	ctx.r6.u64 = (__builtin_rotateleft32(ctx.r11.u32, 16) & 0xFFFF) | (ctx.r6.u64 & 0xFFFFFFFFFFFF0000);
	// rlwimi r5,r11,16,0,15
	ctx.r5.u64 = (__builtin_rotateleft32(ctx.r11.u32, 16) & 0xFFFF0000) | (ctx.r5.u64 & 0xFFFFFFFF0000FFFF);
	// rlwinm r11,r6,24,16,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 24) & 0xFFFF;
	// rlwinm r6,r5,8,0,15
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 8) & 0xFFFF0000;
	// or r11,r11,r6
	ctx.r11.u64 = ctx.r11.u64 | ctx.r6.u64;
loc_830FB328:
	// cmplwi cr6,r11,65535
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 65535, ctx.xer);
	// bgt cr6,0x830fb37c
	if (ctx.cr6.gt) goto loc_830FB37C;
	// mr r6,r11
	ctx.r6.u64 = ctx.r11.u64;
	// cmplwi cr6,r11,62
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 62, ctx.xer);
	// lwzx r11,r30,r24
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r24.u32);
	// li r5,4
	ctx.r5.s64 = 4;
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + ctx.r30.u64;
	// stbx r5,r11,r28
	PPC_STORE_U8(ctx.r11.u32 + ctx.r28.u32, ctx.r5.u8);
	// lwzx r11,r30,r24
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r24.u32);
	// addi r11,r11,2
	ctx.r11.s64 = ctx.r11.s64 + 2;
	// rlwinm r11,r11,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// sthx r6,r11,r30
	PPC_STORE_U16(ctx.r11.u32 + ctx.r30.u32, ctx.r6.u16);
	// lwzx r11,r30,r24
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r24.u32);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stwx r11,r30,r24
	PPC_STORE_U32(ctx.r30.u32 + ctx.r24.u32, ctx.r11.u32);
	// beq cr6,0x830fb580
	if (ctx.cr6.eq) goto loc_830FB580;
	// lwz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// lwz r6,0(r7)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + 0);
	// cmplw cr6,r11,r6
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r6.u32, ctx.xer);
	// blt cr6,0x830fb2f0
	if (ctx.cr6.lt) goto loc_830FB2F0;
	// b 0x830fb580
	goto loc_830FB580;
loc_830FB37C:
	// stw r22,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r22.u32);
	// addis r29,r30,3
	ctx.r29.s64 = ctx.r30.s64 + 196608;
	// stwx r22,r30,r24
	PPC_STORE_U32(ctx.r30.u32 + ctx.r24.u32, ctx.r22.u32);
	// lis r11,1
	ctx.r11.s64 = 65536;
	// addi r29,r29,-32672
	ctx.r29.s64 = ctx.r29.s64 + -32672;
	// ori r11,r11,49180
	ctx.r11.u64 = ctx.r11.u64 | 49180;
	// lwz r3,0(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// lwzx r4,r30,r11
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r11.u32);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x830FB3AC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r11,1
	ctx.r11.s64 = 65536;
	// lwz r3,0(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// ori r11,r11,49172
	ctx.r11.u64 = ctx.r11.u64 | 49172;
	// lwzx r4,r30,r11
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r11.u32);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x830FB3CC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r11,2
	ctx.r11.s64 = 131072;
	// lwz r9,0(r29)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// ori r11,r11,32832
	ctx.r11.u64 = ctx.r11.u64 | 32832;
	// stw r9,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r9.u32);
	// stw r9,100(r31)
	PPC_STORE_U32(ctx.r31.u32 + 100, ctx.r9.u32);
	// lwzx r7,r30,r11
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r11.u32);
	// stw r7,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r7.u32);
	// lis r11,-32228
	ctx.r11.s64 = -2112094208;
	// stw r9,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r9.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r4,r11,21880
	ctx.r4.s64 = ctx.r11.s64 + 21880;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r6,71
	ctx.r6.s64 = 71;
	// li r5,1455
	ctx.r5.s64 = 1455;
	// addi r3,r31,144
	ctx.r3.s64 = ctx.r31.s64 + 144;
	// bl 0x830f8ea8
	ctx.lr = 0x830FB410;
	sub_830F8EA8(ctx, base);
	// lis r11,-32194
	ctx.r11.s64 = -2109865984;
	// addi r3,r31,144
	ctx.r3.s64 = ctx.r31.s64 + 144;
	// addi r4,r11,-27696
	ctx.r4.s64 = ctx.r11.s64 + -27696;
	// bl 0x833a7198
	ctx.lr = 0x830FB420;
	sub_833A7198(ctx, base);
loc_830FB420:
	// addis r29,r30,3
	ctx.r29.s64 = ctx.r30.s64 + 196608;
	// lis r11,1
	ctx.r11.s64 = 65536;
	// addi r29,r29,-32672
	ctx.r29.s64 = ctx.r29.s64 + -32672;
	// ori r11,r11,49180
	ctx.r11.u64 = ctx.r11.u64 | 49180;
	// lwz r3,0(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// lwzx r4,r30,r11
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r11.u32);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x830FB448;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r11,1
	ctx.r11.s64 = 65536;
	// lwz r3,0(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// ori r11,r11,49172
	ctx.r11.u64 = ctx.r11.u64 | 49172;
	// lwzx r4,r30,r11
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r11.u32);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x830FB468;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r11,2
	ctx.r11.s64 = 131072;
	// lwz r3,0(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// ori r11,r11,32832
	ctx.r11.u64 = ctx.r11.u64 | 32832;
	// lwzx r4,r30,r11
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r11.u32);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x830FB488;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r11,-32228
	ctx.r11.s64 = -2112094208;
	// lwz r7,0(r29)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// li r6,70
	ctx.r6.s64 = 70;
	// addi r4,r11,21880
	ctx.r4.s64 = ctx.r11.s64 + 21880;
	// li r5,1650
	ctx.r5.s64 = 1650;
	// addi r3,r31,176
	ctx.r3.s64 = ctx.r31.s64 + 176;
	// bl 0x830f8df0
	ctx.lr = 0x830FB4A4;
	sub_830F8DF0(ctx, base);
	// lis r11,-32194
	ctx.r11.s64 = -2109865984;
	// addi r3,r31,176
	ctx.r3.s64 = ctx.r31.s64 + 176;
	// addi r4,r11,-27696
	ctx.r4.s64 = ctx.r11.s64 + -27696;
	// bl 0x833a7198
	ctx.lr = 0x830FB4B4;
	sub_833A7198(ctx, base);
loc_830FB4B4:
	// addis r26,r30,2
	ctx.r26.s64 = ctx.r30.s64 + 131072;
	// addi r26,r26,-16348
	ctx.r26.s64 = ctx.r26.s64 + -16348;
	// lbz r3,0(r26)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r26.u32 + 0);
	// bl 0x8313d350
	ctx.lr = 0x830FB4C4;
	sub_8313D350(ctx, base);
	// addis r27,r30,2
	ctx.r27.s64 = ctx.r30.s64 + 131072;
	// lwzx r11,r30,r24
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r24.u32);
	// lis r10,0
	ctx.r10.s64 = 0;
	// addi r27,r27,-16352
	ctx.r27.s64 = ctx.r27.s64 + -16352;
	// ori r28,r10,32776
	ctx.r28.u64 = ctx.r10.u64 | 32776;
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + ctx.r30.u64;
	// clrlwi r8,r3,16
	ctx.r8.u64 = ctx.r3.u32 & 0xFFFF;
	// add r29,r30,r24
	ctx.r29.u64 = ctx.r30.u64 + ctx.r24.u64;
	// lwz r10,0(r27)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// addi r9,r26,1
	ctx.r9.s64 = ctx.r26.s64 + 1;
	// cmplwi cr6,r8,62
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 62, ctx.xer);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stw r10,0(r27)
	PPC_STORE_U32(ctx.r27.u32 + 0, ctx.r10.u32);
	// stbx r23,r11,r28
	PPC_STORE_U8(ctx.r11.u32 + ctx.r28.u32, ctx.r23.u8);
	// lwzx r11,r30,r24
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r24.u32);
	// addi r11,r11,2
	ctx.r11.s64 = ctx.r11.s64 + 2;
	// rlwinm r11,r11,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// sthx r3,r11,r30
	PPC_STORE_U16(ctx.r11.u32 + ctx.r30.u32, ctx.r3.u16);
	// lwzx r11,r30,r24
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r24.u32);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stwx r11,r30,r24
	PPC_STORE_U32(ctx.r30.u32 + ctx.r24.u32, ctx.r11.u32);
	// beq cr6,0x830fb580
	if (ctx.cr6.eq) goto loc_830FB580;
	// addis r25,r30,3
	ctx.r25.s64 = ctx.r30.s64 + 196608;
	// addi r26,r9,-1
	ctx.r26.s64 = ctx.r9.s64 + -1;
	// addi r25,r25,-32732
	ctx.r25.s64 = ctx.r25.s64 + -32732;
loc_830FB528:
	// lwz r11,0(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// lwz r10,0(r25)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r25.u32 + 0);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x830fb580
	if (ctx.cr6.eq) goto loc_830FB580;
	// lbzu r3,1(r26)
	ea = 1 + ctx.r26.u32;
	ctx.r3.u64 = PPC_LOAD_U8(ea);
	ctx.r26.u32 = ea;
	// bl 0x8313d350
	ctx.lr = 0x830FB540;
	sub_8313D350(ctx, base);
	// lwz r11,0(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// clrlwi r10,r3,16
	ctx.r10.u64 = ctx.r3.u32 & 0xFFFF;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,62
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 62, ctx.xer);
	// stw r11,0(r27)
	PPC_STORE_U32(ctx.r27.u32 + 0, ctx.r11.u32);
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + ctx.r30.u64;
	// stbx r23,r11,r28
	PPC_STORE_U8(ctx.r11.u32 + ctx.r28.u32, ctx.r23.u8);
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// addi r11,r11,2
	ctx.r11.s64 = ctx.r11.s64 + 2;
	// rlwinm r11,r11,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// sthx r3,r11,r30
	PPC_STORE_U16(ctx.r11.u32 + ctx.r30.u32, ctx.r3.u16);
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r11.u32);
	// bne cr6,0x830fb528
	if (!ctx.cr6.eq) goto loc_830FB528;
loc_830FB580:
	// lis r11,2
	ctx.r11.s64 = 131072;
	// ori r11,r11,32848
	ctx.r11.u64 = ctx.r11.u64 | 32848;
	// lwzx r11,r30,r11
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r11.u32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x830fb5c8
	if (!ctx.cr6.eq) goto loc_830FB5C8;
	// lis r11,2
	ctx.r11.s64 = 131072;
	// ori r11,r11,32812
	ctx.r11.u64 = ctx.r11.u64 | 32812;
	// lwzx r11,r30,r11
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r11.u32);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x830fb5c8
	if (!ctx.cr6.eq) goto loc_830FB5C8;
	// lwzx r11,r30,r24
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r24.u32);
	// li r10,32
	ctx.r10.s64 = 32;
	// addi r11,r11,2
	ctx.r11.s64 = ctx.r11.s64 + 2;
	// rlwinm r11,r11,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// sthx r10,r11,r30
	PPC_STORE_U16(ctx.r11.u32 + ctx.r30.u32, ctx.r10.u16);
	// lwzx r11,r30,r24
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r24.u32);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stwx r11,r30,r24
	PPC_STORE_U32(ctx.r30.u32 + ctx.r24.u32, ctx.r11.u32);
loc_830FB5C8:
	// lis r11,2
	ctx.r11.s64 = 131072;
	// ori r11,r11,32829
	ctx.r11.u64 = ctx.r11.u64 | 32829;
	// lbzx r11,r30,r11
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + ctx.r11.u32);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x830fb628
	if (ctx.cr0.eq) goto loc_830FB628;
	// lis r11,0
	ctx.r11.s64 = 0;
	// lwzx r8,r30,r24
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r24.u32);
	// add r9,r30,r24
	ctx.r9.u64 = ctx.r30.u64 + ctx.r24.u64;
	// ori r10,r11,49160
	ctx.r10.u64 = ctx.r11.u64 | 49160;
	// mr r11,r23
	ctx.r11.u64 = ctx.r23.u64;
	// cmplwi cr6,r8,1
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 1, ctx.xer);
	// stwx r22,r30,r10
	PPC_STORE_U32(ctx.r30.u32 + ctx.r10.u32, ctx.r22.u32);
	// ble cr6,0x830fb628
	if (!ctx.cr6.gt) goto loc_830FB628;
	// addis r6,r30,1
	ctx.r6.s64 = ctx.r30.s64 + 65536;
	// add r10,r30,r10
	ctx.r10.u64 = ctx.r30.u64 + ctx.r10.u64;
	// addi r6,r6,-32761
	ctx.r6.s64 = ctx.r6.s64 + -32761;
loc_830FB608:
	// lbzx r7,r6,r11
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r6.u32 + ctx.r11.u32);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// lwz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// add r8,r7,r8
	ctx.r8.u64 = ctx.r7.u64 + ctx.r8.u64;
	// stwu r8,4(r10)
	ea = 4 + ctx.r10.u32;
	PPC_STORE_U32(ea, ctx.r8.u32);
	ctx.r10.u32 = ea;
	// lwz r8,0(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// cmplw cr6,r11,r8
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r8.u32, ctx.xer);
	// blt cr6,0x830fb608
	if (ctx.cr6.lt) goto loc_830FB608;
loc_830FB628:
	// addi r1,r31,288
	ctx.r1.s64 = ctx.r31.s64 + 288;
	// b 0x833a01e0
	__restgprlr_22(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_830FB630"))) PPC_WEAK_FUNC(sub_830FB630);
PPC_FUNC_IMPL(__imp__sub_830FB630) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// addi r31,r12,-288
	ctx.r31.s64 = ctx.r12.s64 + -288;
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r3,r31,96
	ctx.r3.s64 = ctx.r31.s64 + 96;
	// bl 0x831b4220
	ctx.lr = 0x830FB648;
	sub_831B4220(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830FB658"))) PPC_WEAK_FUNC(sub_830FB658);
PPC_FUNC_IMPL(__imp__sub_830FB658) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// addi r31,r12,-288
	ctx.r31.s64 = ctx.r12.s64 + -288;
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r3,r31,96
	ctx.r3.s64 = ctx.r31.s64 + 96;
	// bl 0x831b4220
	ctx.lr = 0x830FB670;
	sub_831B4220(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830FB680"))) PPC_WEAK_FUNC(sub_830FB680);
PPC_FUNC_IMPL(__imp__sub_830FB680) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x833a0180
	ctx.lr = 0x830FB688;
	__savegprlr_18(ctx, base);
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r28,308(r1)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r1.u32 + 308);
	// mr r25,r7
	ctx.r25.u64 = ctx.r7.u64;
	// mr r24,r8
	ctx.r24.u64 = ctx.r8.u64;
	// mr r23,r9
	ctx.r23.u64 = ctx.r9.u64;
	// mr r22,r10
	ctx.r22.u64 = ctx.r10.u64;
	// lis r11,0
	ctx.r11.s64 = 0;
	// lis r10,1
	ctx.r10.s64 = 65536;
	// lis r9,1
	ctx.r9.s64 = 65536;
	// lis r8,1
	ctx.r8.s64 = 65536;
	// lis r7,1
	ctx.r7.s64 = 65536;
	// addis r21,r31,2
	ctx.r21.s64 = ctx.r31.s64 + 131072;
	// ori r11,r11,32772
	ctx.r11.u64 = ctx.r11.u64 | 32772;
	// ori r10,r10,49160
	ctx.r10.u64 = ctx.r10.u64 | 49160;
	// ori r9,r9,49164
	ctx.r9.u64 = ctx.r9.u64 | 49164;
	// ori r8,r8,49176
	ctx.r8.u64 = ctx.r8.u64 | 49176;
	// ori r7,r7,49177
	ctx.r7.u64 = ctx.r7.u64 | 49177;
	// addi r21,r21,-16364
	ctx.r21.s64 = ctx.r21.s64 + -16364;
	// li r30,0
	ctx.r30.s64 = 0;
	// li r27,1
	ctx.r27.s64 = 1;
	// stw r30,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r30.u32);
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// stwx r30,r31,r11
	PPC_STORE_U32(ctx.r31.u32 + ctx.r11.u32, ctx.r30.u32);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// stwx r27,r31,r10
	PPC_STORE_U32(ctx.r31.u32 + ctx.r10.u32, ctx.r27.u32);
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// stwx r27,r31,r9
	PPC_STORE_U32(ctx.r31.u32 + ctx.r9.u32, ctx.r27.u32);
	// mr r26,r6
	ctx.r26.u64 = ctx.r6.u64;
	// stbx r30,r31,r8
	PPC_STORE_U8(ctx.r31.u32 + ctx.r8.u32, ctx.r30.u8);
	// stbx r30,r31,r7
	PPC_STORE_U8(ctx.r31.u32 + ctx.r7.u32, ctx.r30.u8);
	// stw r30,0(r21)
	PPC_STORE_U32(ctx.r21.u32 + 0, ctx.r30.u32);
	// bl 0x830d58e8
	ctx.lr = 0x830FB70C;
	sub_830D58E8(ctx, base);
	// lis r11,1
	ctx.r11.s64 = 65536;
	// lis r10,1
	ctx.r10.s64 = 65536;
	// lbz r9,295(r1)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r1.u32 + 295);
	// ori r11,r11,49180
	ctx.r11.u64 = ctx.r11.u64 | 49180;
	// ori r10,r10,49184
	ctx.r10.u64 = ctx.r10.u64 | 49184;
	// lis r4,2
	ctx.r4.s64 = 131072;
	// lis r20,2
	ctx.r20.s64 = 131072;
	// lis r8,2
	ctx.r8.s64 = 131072;
	// lis r7,2
	ctx.r7.s64 = 131072;
	// stwx r3,r31,r11
	PPC_STORE_U32(ctx.r31.u32 + ctx.r11.u32, ctx.r3.u32);
	// lis r6,2
	ctx.r6.s64 = 131072;
	// stwx r30,r31,r10
	PPC_STORE_U32(ctx.r31.u32 + ctx.r10.u32, ctx.r30.u32);
	// lis r5,2
	ctx.r5.s64 = 131072;
	// addis r19,r31,3
	ctx.r19.s64 = ctx.r31.s64 + 196608;
	// addis r18,r31,3
	ctx.r18.s64 = ctx.r31.s64 + 196608;
	// ori r11,r4,32824
	ctx.r11.u64 = ctx.r4.u64 | 32824;
	// ori r10,r20,32829
	ctx.r10.u64 = ctx.r20.u64 | 32829;
	// ori r8,r8,32808
	ctx.r8.u64 = ctx.r8.u64 | 32808;
	// ori r7,r7,32812
	ctx.r7.u64 = ctx.r7.u64 | 32812;
	// ori r6,r6,32816
	ctx.r6.u64 = ctx.r6.u64 | 32816;
	// ori r5,r5,32820
	ctx.r5.u64 = ctx.r5.u64 | 32820;
	// stwx r30,r31,r11
	PPC_STORE_U32(ctx.r31.u32 + ctx.r11.u32, ctx.r30.u32);
	// addi r19,r19,-32732
	ctx.r19.s64 = ctx.r19.s64 + -32732;
	// stbx r9,r31,r10
	PPC_STORE_U8(ctx.r31.u32 + ctx.r10.u32, ctx.r9.u8);
	// addi r18,r18,-32708
	ctx.r18.s64 = ctx.r18.s64 + -32708;
	// li r20,-1
	ctx.r20.s64 = -1;
	// stwx r25,r31,r7
	PPC_STORE_U32(ctx.r31.u32 + ctx.r7.u32, ctx.r25.u32);
	// stbx r30,r31,r6
	PPC_STORE_U8(ctx.r31.u32 + ctx.r6.u32, ctx.r30.u8);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// stwx r23,r31,r5
	PPC_STORE_U32(ctx.r31.u32 + ctx.r5.u32, ctx.r23.u32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// stw r30,0(r19)
	PPC_STORE_U32(ctx.r19.u32 + 0, ctx.r30.u32);
	// stb r30,0(r18)
	PPC_STORE_U8(ctx.r18.u32 + 0, ctx.r30.u8);
	// stwx r20,r31,r8
	PPC_STORE_U32(ctx.r31.u32 + ctx.r8.u32, ctx.r20.u32);
	// bl 0x830d58e8
	ctx.lr = 0x830FB798;
	sub_830D58E8(ctx, base);
	// lis r11,2
	ctx.r11.s64 = 131072;
	// lis r10,2
	ctx.r10.s64 = 131072;
	// lwz r4,300(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 300);
	// lis r9,2
	ctx.r9.s64 = 131072;
	// lis r8,2
	ctx.r8.s64 = 131072;
	// addis r29,r31,3
	ctx.r29.s64 = ctx.r31.s64 + 196608;
	// addis r25,r31,3
	ctx.r25.s64 = ctx.r31.s64 + 196608;
	// lis r7,2
	ctx.r7.s64 = 131072;
	// addi r29,r29,-32696
	ctx.r29.s64 = ctx.r29.s64 + -32696;
	// addi r25,r25,-32672
	ctx.r25.s64 = ctx.r25.s64 + -32672;
	// ori r11,r11,32832
	ctx.r11.u64 = ctx.r11.u64 | 32832;
	// ori r10,r10,32836
	ctx.r10.u64 = ctx.r10.u64 | 32836;
	// ori r9,r9,32841
	ctx.r9.u64 = ctx.r9.u64 | 32841;
	// ori r8,r8,32844
	ctx.r8.u64 = ctx.r8.u64 | 32844;
	// ori r7,r7,32848
	ctx.r7.u64 = ctx.r7.u64 | 32848;
	// stwx r3,r31,r11
	PPC_STORE_U32(ctx.r31.u32 + ctx.r11.u32, ctx.r3.u32);
	// stb r30,0(r29)
	PPC_STORE_U8(ctx.r29.u32 + 0, ctx.r30.u8);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r28,0(r25)
	PPC_STORE_U32(ctx.r25.u32 + 0, ctx.r28.u32);
	// stwx r26,r31,r10
	PPC_STORE_U32(ctx.r31.u32 + ctx.r10.u32, ctx.r26.u32);
	// stbx r22,r31,r9
	PPC_STORE_U8(ctx.r31.u32 + ctx.r9.u32, ctx.r22.u8);
	// stwx r30,r31,r8
	PPC_STORE_U32(ctx.r31.u32 + ctx.r8.u32, ctx.r30.u32);
	// stwx r24,r31,r7
	PPC_STORE_U32(ctx.r31.u32 + ctx.r7.u32, ctx.r24.u32);
	// bl 0x830ed250
	ctx.lr = 0x830FB7F8;
	sub_830ED250(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x830f9638
	ctx.lr = 0x830FB800;
	sub_830F9638(ctx, base);
	// lis r11,-31827
	ctx.r11.s64 = -2085814272;
	// lwz r3,-5096(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -5096);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,24(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x830FB818;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stb r3,0(r18)
	PPC_STORE_U8(ctx.r18.u32 + 0, ctx.r3.u8);
	// addis r3,r31,2
	ctx.r3.s64 = ctx.r31.s64 + 131072;
	// lwz r4,0(r19)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r19.u32 + 0);
	// addi r3,r3,-16348
	ctx.r3.s64 = ctx.r3.s64 + -16348;
	// bl 0x8313cef8
	ctx.lr = 0x830FB82C;
	sub_8313CEF8(ctx, base);
	// addis r28,r31,2
	ctx.r28.s64 = ctx.r31.s64 + 131072;
	// lwz r26,0(r25)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r25.u32 + 0);
	// addi r28,r28,-16368
	ctx.r28.s64 = ctx.r28.s64 + -16368;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// stw r3,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r3.u32);
	// bl 0x8313d2f0
	ctx.lr = 0x830FB844;
	sub_8313D2F0(ctx, base);
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// bl 0x830d58e8
	ctx.lr = 0x830FB84C;
	sub_830D58E8(ctx, base);
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// stw r3,0(r21)
	PPC_STORE_U32(ctx.r21.u32 + 0, ctx.r3.u32);
	// cmpwi cr6,r11,5
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 5, ctx.xer);
	// stb r30,0(r29)
	PPC_STORE_U8(ctx.r29.u32 + 0, ctx.r30.u8);
	// beq cr6,0x830fb868
	if (ctx.cr6.eq) goto loc_830FB868;
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x830fb86c
	if (!ctx.cr6.eq) goto loc_830FB86C;
loc_830FB868:
	// stb r27,0(r29)
	PPC_STORE_U8(ctx.r29.u32 + 0, ctx.r27.u8);
loc_830FB86C:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x830faeb0
	ctx.lr = 0x830FB874;
	sub_830FAEB0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x833a01d0
	__restgprlr_18(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_830FB880"))) PPC_WEAK_FUNC(sub_830FB880);
PPC_FUNC_IMPL(__imp__sub_830FB880) {
	PPC_FUNC_PROLOGUE();
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
	// lis r11,-32228
	ctx.r11.s64 = -2112094208;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// addi r11,r11,-8048
	ctx.r11.s64 = ctx.r11.s64 + -8048;
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// bl 0x830d58e8
	ctx.lr = 0x830FB8B4;
	sub_830D58E8(ctx, base);
	// stw r3,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r3.u32);
	// stw r30,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r30.u32);
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

__attribute__((alias("__imp__sub_830FB8D8"))) PPC_WEAK_FUNC(sub_830FB8D8);
PPC_FUNC_IMPL(__imp__sub_830FB8D8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lwz r25,17952(r26)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r26.u32 + 17952);
	// lwz r16,22336(r28)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r28.u32 + 22336);
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x833a019c
	ctx.lr = 0x830FB8E8;
	__savegprlr_25(ctx, base);
	// addi r31,r1,-144
	ctx.r31.s64 = ctx.r1.s64 + -144;
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// stw r3,164(r31)
	PPC_STORE_U32(ctx.r31.u32 + 164, ctx.r3.u32);
	// mr r5,r9
	ctx.r5.u64 = ctx.r9.u64;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r29,r9
	ctx.r29.u64 = ctx.r9.u64;
	// mr r27,r6
	ctx.r27.u64 = ctx.r6.u64;
	// mr r26,r7
	ctx.r26.u64 = ctx.r7.u64;
	// mr r25,r8
	ctx.r25.u64 = ctx.r8.u64;
	// bl 0x830fb880
	ctx.lr = 0x830FB914;
	sub_830FB880(ctx, base);
	// lis r11,-32228
	ctx.r11.s64 = -2112094208;
	// stw r25,12(r30)
	PPC_STORE_U32(ctx.r30.u32 + 12, ctx.r25.u32);
	// stw r26,16(r30)
	PPC_STORE_U32(ctx.r30.u32 + 16, ctx.r26.u32);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r11,r11,22320
	ctx.r11.s64 = ctx.r11.s64 + 22320;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
	// bl 0x830d58e8
	ctx.lr = 0x830FB934;
	sub_830D58E8(ctx, base);
	// stw r3,20(r30)
	PPC_STORE_U32(ctx.r30.u32 + 20, ctx.r3.u32);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x830d58e8
	ctx.lr = 0x830FB944;
	sub_830D58E8(ctx, base);
	// stw r3,24(r30)
	PPC_STORE_U32(ctx.r30.u32 + 24, ctx.r3.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r31,144
	ctx.r1.s64 = ctx.r31.s64 + 144;
	// b 0x833a01ec
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_830FB8E0"))) PPC_WEAK_FUNC(sub_830FB8E0);
PPC_FUNC_IMPL(__imp__sub_830FB8E0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x833a019c
	ctx.lr = 0x830FB8E8;
	__savegprlr_25(ctx, base);
	// addi r31,r1,-144
	ctx.r31.s64 = ctx.r1.s64 + -144;
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// stw r3,164(r31)
	PPC_STORE_U32(ctx.r31.u32 + 164, ctx.r3.u32);
	// mr r5,r9
	ctx.r5.u64 = ctx.r9.u64;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r29,r9
	ctx.r29.u64 = ctx.r9.u64;
	// mr r27,r6
	ctx.r27.u64 = ctx.r6.u64;
	// mr r26,r7
	ctx.r26.u64 = ctx.r7.u64;
	// mr r25,r8
	ctx.r25.u64 = ctx.r8.u64;
	// bl 0x830fb880
	ctx.lr = 0x830FB914;
	sub_830FB880(ctx, base);
	// lis r11,-32228
	ctx.r11.s64 = -2112094208;
	// stw r25,12(r30)
	PPC_STORE_U32(ctx.r30.u32 + 12, ctx.r25.u32);
	// stw r26,16(r30)
	PPC_STORE_U32(ctx.r30.u32 + 16, ctx.r26.u32);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r11,r11,22320
	ctx.r11.s64 = ctx.r11.s64 + 22320;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
	// bl 0x830d58e8
	ctx.lr = 0x830FB934;
	sub_830D58E8(ctx, base);
	// stw r3,20(r30)
	PPC_STORE_U32(ctx.r30.u32 + 20, ctx.r3.u32);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x830d58e8
	ctx.lr = 0x830FB944;
	sub_830D58E8(ctx, base);
	// stw r3,24(r30)
	PPC_STORE_U32(ctx.r30.u32 + 24, ctx.r3.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r31,144
	ctx.r1.s64 = ctx.r31.s64 + 144;
	// b 0x833a01ec
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_830FB954"))) PPC_WEAK_FUNC(sub_830FB954);
PPC_FUNC_IMPL(__imp__sub_830FB954) {
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
	// lwz r3,164(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 164);
	// bl 0x830dccb8
	ctx.lr = 0x830FB96C;
	sub_830DCCB8(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830FB97C"))) PPC_WEAK_FUNC(sub_830FB97C);
PPC_FUNC_IMPL(__imp__sub_830FB97C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_830FB980"))) PPC_WEAK_FUNC(sub_830FB980);
PPC_FUNC_IMPL(__imp__sub_830FB980) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lwz r25,17952(r26)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r26.u32 + 17952);
	// lwz r16,22392(r28)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r28.u32 + 22392);
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x833a01ac
	ctx.lr = 0x830FB990;
	__savegprlr_29(ctx, base);
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
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// bl 0x830dcc58
	ctx.lr = 0x830FB9A8;
	sub_830DCC58(ctx, base);
	// lis r10,-32228
	ctx.r10.s64 = -2112094208;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r10,r10,22320
	ctx.r10.s64 = ctx.r10.s64 + 22320;
	// stw r10,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r10.u32);
	// lwz r10,12(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 12);
	// stw r10,12(r30)
	PPC_STORE_U32(ctx.r30.u32 + 12, ctx.r10.u32);
	// lwz r10,16(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 16);
	// stw r10,16(r30)
	PPC_STORE_U32(ctx.r30.u32 + 16, ctx.r10.u32);
	// stw r11,20(r30)
	PPC_STORE_U32(ctx.r30.u32 + 20, ctx.r11.u32);
	// stw r11,24(r30)
	PPC_STORE_U32(ctx.r30.u32 + 24, ctx.r11.u32);
	// lwz r4,8(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// lwz r3,20(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 20);
	// bl 0x830d58e8
	ctx.lr = 0x830FB9DC;
	sub_830D58E8(ctx, base);
	// stw r3,20(r30)
	PPC_STORE_U32(ctx.r30.u32 + 20, ctx.r3.u32);
	// lwz r4,8(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// lwz r3,24(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 24);
	// bl 0x830d58e8
	ctx.lr = 0x830FB9EC;
	sub_830D58E8(ctx, base);
	// stw r3,24(r30)
	PPC_STORE_U32(ctx.r30.u32 + 24, ctx.r3.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r31,112
	ctx.r1.s64 = ctx.r31.s64 + 112;
	// b 0x833a01fc
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_830FB988"))) PPC_WEAK_FUNC(sub_830FB988);
PPC_FUNC_IMPL(__imp__sub_830FB988) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x833a01ac
	ctx.lr = 0x830FB990;
	__savegprlr_29(ctx, base);
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
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// bl 0x830dcc58
	ctx.lr = 0x830FB9A8;
	sub_830DCC58(ctx, base);
	// lis r10,-32228
	ctx.r10.s64 = -2112094208;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r10,r10,22320
	ctx.r10.s64 = ctx.r10.s64 + 22320;
	// stw r10,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r10.u32);
	// lwz r10,12(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 12);
	// stw r10,12(r30)
	PPC_STORE_U32(ctx.r30.u32 + 12, ctx.r10.u32);
	// lwz r10,16(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 16);
	// stw r10,16(r30)
	PPC_STORE_U32(ctx.r30.u32 + 16, ctx.r10.u32);
	// stw r11,20(r30)
	PPC_STORE_U32(ctx.r30.u32 + 20, ctx.r11.u32);
	// stw r11,24(r30)
	PPC_STORE_U32(ctx.r30.u32 + 24, ctx.r11.u32);
	// lwz r4,8(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// lwz r3,20(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 20);
	// bl 0x830d58e8
	ctx.lr = 0x830FB9DC;
	sub_830D58E8(ctx, base);
	// stw r3,20(r30)
	PPC_STORE_U32(ctx.r30.u32 + 20, ctx.r3.u32);
	// lwz r4,8(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// lwz r3,24(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 24);
	// bl 0x830d58e8
	ctx.lr = 0x830FB9EC;
	sub_830D58E8(ctx, base);
	// stw r3,24(r30)
	PPC_STORE_U32(ctx.r30.u32 + 24, ctx.r3.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r31,112
	ctx.r1.s64 = ctx.r31.s64 + 112;
	// b 0x833a01fc
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_830FB9FC"))) PPC_WEAK_FUNC(sub_830FB9FC);
PPC_FUNC_IMPL(__imp__sub_830FB9FC) {
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
	// bl 0x830dccb8
	ctx.lr = 0x830FBA14;
	sub_830DCCB8(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830FBA24"))) PPC_WEAK_FUNC(sub_830FBA24);
PPC_FUNC_IMPL(__imp__sub_830FBA24) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_830FBA28"))) PPC_WEAK_FUNC(sub_830FBA28);
PPC_FUNC_IMPL(__imp__sub_830FBA28) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lwz r25,17952(r26)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r26.u32 + 17952);
	// lwz r16,22448(r28)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r28.u32 + 22448);
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
	// lis r11,-32228
	ctx.r11.s64 = -2112094208;
	// stw r3,132(r31)
	PPC_STORE_U32(ctx.r31.u32 + 132, ctx.r3.u32);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r11,r11,22320
	ctx.r11.s64 = ctx.r11.s64 + 22320;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// lwz r3,8(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// lwz r4,20(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 20);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x830FBA74;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r3,8(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// lwz r4,24(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 24);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x830FBA8C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r11,-32228
	ctx.r11.s64 = -2112094208;
	// lwz r3,8(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// addi r11,r11,-8048
	ctx.r11.s64 = ctx.r11.s64 + -8048;
	// lwz r4,4(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x830FBAB0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
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

__attribute__((alias("__imp__sub_830FBA30"))) PPC_WEAK_FUNC(sub_830FBA30);
PPC_FUNC_IMPL(__imp__sub_830FBA30) {
	PPC_FUNC_PROLOGUE();
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
	// lis r11,-32228
	ctx.r11.s64 = -2112094208;
	// stw r3,132(r31)
	PPC_STORE_U32(ctx.r31.u32 + 132, ctx.r3.u32);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r11,r11,22320
	ctx.r11.s64 = ctx.r11.s64 + 22320;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// lwz r3,8(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// lwz r4,20(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 20);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x830FBA74;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r3,8(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// lwz r4,24(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 24);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x830FBA8C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r11,-32228
	ctx.r11.s64 = -2112094208;
	// lwz r3,8(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// addi r11,r11,-8048
	ctx.r11.s64 = ctx.r11.s64 + -8048;
	// lwz r4,4(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x830FBAB0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
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

__attribute__((alias("__imp__sub_830FBAC8"))) PPC_WEAK_FUNC(sub_830FBAC8);
PPC_FUNC_IMPL(__imp__sub_830FBAC8) {
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
	// bl 0x830dccb8
	ctx.lr = 0x830FBAE0;
	sub_830DCCB8(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830FBAF0"))) PPC_WEAK_FUNC(sub_830FBAF0);
PPC_FUNC_IMPL(__imp__sub_830FBAF0) {
	PPC_FUNC_PROLOGUE();
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
	// bl 0x830fba30
	ctx.lr = 0x830FBB10;
	sub_830FBA30(ctx, base);
	// clrlwi. r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x830fbb20
	if (ctx.cr0.eq) goto loc_830FBB20;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x830dd3e0
	ctx.lr = 0x830FBB20;
	sub_830DD3E0(ctx, base);
loc_830FBB20:
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

__attribute__((alias("__imp__sub_830FBB3C"))) PPC_WEAK_FUNC(sub_830FBB3C);
PPC_FUNC_IMPL(__imp__sub_830FBB3C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_830FBB40"))) PPC_WEAK_FUNC(sub_830FBB40);
PPC_FUNC_IMPL(__imp__sub_830FBB40) {
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
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// bl 0x8313d410
	ctx.lr = 0x830FBB58;
	sub_8313D410(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x833a8040
	ctx.lr = 0x830FBB60;
	sub_833A8040(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r3,r3,64
	ctx.r3.s64 = ctx.r3.s64 + 64;
	// addi r4,r11,26804
	ctx.r4.s64 = ctx.r11.s64 + 26804;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// bl 0x833a83d8
	ctx.lr = 0x830FBB74;
	sub_833A83D8(ctx, base);
	// li r3,-1
	ctx.r3.s64 = -1;
	// bl 0x833a41d8
	ctx.lr = 0x830FBB7C;
	sub_833A41D8(ctx, base);
}

__attribute__((alias("__imp__sub_830FBB7C"))) PPC_WEAK_FUNC(sub_830FBB7C);
PPC_FUNC_IMPL(__imp__sub_830FBB7C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_830FBB80"))) PPC_WEAK_FUNC(sub_830FBB80);
PPC_FUNC_IMPL(__imp__sub_830FBB80) {
	PPC_FUNC_PROLOGUE();
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// b 0x82e01698
	sub_82E01698(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_830FBB88"))) PPC_WEAK_FUNC(sub_830FBB88);
PPC_FUNC_IMPL(__imp__sub_830FBB88) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lwz r25,17952(r26)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r26.u32 + 17952);
	// lwz r16,22604(r28)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r28.u32 + 22604);
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// li r0,0
	ctx.r0.s64 = 0;
	// stw r0,4(r1)
	PPC_STORE_U32(ctx.r1.u32 + 4, ctx.r0.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// addi r31,r1,-112
	ctx.r31.s64 = ctx.r1.s64 + -112;
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// bl 0x82e01690
	ctx.lr = 0x830FBBB4;
	sub_82E01690(ctx, base);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x830fbbd0
	if (!ctx.cr6.eq) goto loc_830FBBD0;
	// lis r11,-32194
	ctx.r11.s64 = -2109865984;
	// addi r3,r31,80
	ctx.r3.s64 = ctx.r31.s64 + 80;
	// addi r4,r11,-27636
	ctx.r4.s64 = ctx.r11.s64 + -27636;
	// bl 0x833a7198
	ctx.lr = 0x830FBBD0;
	sub_833A7198(ctx, base);
loc_830FBBD0:
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

__attribute__((alias("__imp__sub_830FBB90"))) PPC_WEAK_FUNC(sub_830FBB90);
PPC_FUNC_IMPL(__imp__sub_830FBB90) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// li r0,0
	ctx.r0.s64 = 0;
	// stw r0,4(r1)
	PPC_STORE_U32(ctx.r1.u32 + 4, ctx.r0.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// addi r31,r1,-112
	ctx.r31.s64 = ctx.r1.s64 + -112;
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// bl 0x82e01690
	ctx.lr = 0x830FBBB4;
	sub_82E01690(ctx, base);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x830fbbd0
	if (!ctx.cr6.eq) goto loc_830FBBD0;
	// lis r11,-32194
	ctx.r11.s64 = -2109865984;
	// addi r3,r31,80
	ctx.r3.s64 = ctx.r31.s64 + 80;
	// addi r4,r11,-27636
	ctx.r4.s64 = ctx.r11.s64 + -27636;
	// bl 0x833a7198
	ctx.lr = 0x830FBBD0;
	sub_833A7198(ctx, base);
loc_830FBBD0:
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

__attribute__((alias("__imp__sub_830FBBE4"))) PPC_WEAK_FUNC(sub_830FBBE4);
PPC_FUNC_IMPL(__imp__sub_830FBBE4) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lwz r25,17952(r26)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r26.u32 + 17952);
	// lwz r16,22604(r28)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r28.u32 + 22604);
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
	// lis r11,-32194
	ctx.r11.s64 = -2109865984;
	// addi r3,r31,81
	ctx.r3.s64 = ctx.r31.s64 + 81;
	// addi r4,r11,-27636
	ctx.r4.s64 = ctx.r11.s64 + -27636;
	// bl 0x833a7198
	ctx.lr = 0x830FBC0C;
	sub_833A7198(ctx, base);
	// .long 0x0
}

__attribute__((alias("__imp__sub_830FBBEC"))) PPC_WEAK_FUNC(sub_830FBBEC);
PPC_FUNC_IMPL(__imp__sub_830FBBEC) {
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
	// lis r11,-32194
	ctx.r11.s64 = -2109865984;
	// addi r3,r31,81
	ctx.r3.s64 = ctx.r31.s64 + 81;
	// addi r4,r11,-27636
	ctx.r4.s64 = ctx.r11.s64 + -27636;
	// bl 0x833a7198
	ctx.lr = 0x830FBC0C;
	sub_833A7198(ctx, base);
}

__attribute__((alias("__imp__sub_830FBC10"))) PPC_WEAK_FUNC(sub_830FBC10);
PPC_FUNC_IMPL(__imp__sub_830FBC10) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lwz r25,17952(r26)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r26.u32 + 17952);
	// lwz r16,22716(r28)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r28.u32 + 22716);
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// li r0,0
	ctx.r0.s64 = 0;
	// stw r0,4(r1)
	PPC_STORE_U32(ctx.r1.u32 + 4, ctx.r0.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// addi r31,r1,-96
	ctx.r31.s64 = ctx.r1.s64 + -96;
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// bl 0x830f61f0
	ctx.lr = 0x830FBC38;
	sub_830F61F0(ctx, base);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// bl 0x83149e50
	ctx.lr = 0x830FBC40;
	sub_83149E50(ctx, base);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// bl 0x83147c20
	ctx.lr = 0x830FBC48;
	sub_83147C20(ctx, base);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// bl 0x830f6290
	ctx.lr = 0x830FBC50;
	sub_830F6290(ctx, base);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// bl 0x830ddbb0
	ctx.lr = 0x830FBC58;
	sub_830DDBB0(ctx, base);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// bl 0x830e5878
	ctx.lr = 0x830FBC60;
	sub_830E5878(ctx, base);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// bl 0x83101b48
	ctx.lr = 0x830FBC68;
	sub_83101B48(ctx, base);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// bl 0x8311e2b8
	ctx.lr = 0x830FBC70;
	sub_8311E2B8(ctx, base);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// bl 0x83145990
	ctx.lr = 0x830FBC78;
	sub_83145990(ctx, base);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// bl 0x830edf18
	ctx.lr = 0x830FBC80;
	sub_830EDF18(ctx, base);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// bl 0x83143488
	ctx.lr = 0x830FBC88;
	sub_83143488(ctx, base);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// bl 0x830de380
	ctx.lr = 0x830FBC90;
	sub_830DE380(ctx, base);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// bl 0x8311a1b8
	ctx.lr = 0x830FBC98;
	sub_8311A1B8(ctx, base);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// bl 0x83143060
	ctx.lr = 0x830FBCA0;
	sub_83143060(ctx, base);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// bl 0x831416d0
	ctx.lr = 0x830FBCA8;
	sub_831416D0(ctx, base);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// bl 0x83140ae0
	ctx.lr = 0x830FBCB0;
	sub_83140AE0(ctx, base);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// bl 0x8313fc70
	ctx.lr = 0x830FBCB8;
	sub_8313FC70(ctx, base);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// b 0x830fbcc0
	goto loc_830FBCC0;
loc_830FBCC0:
	// addi r1,r31,96
	ctx.r1.s64 = ctx.r31.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830FBC18"))) PPC_WEAK_FUNC(sub_830FBC18);
PPC_FUNC_IMPL(__imp__sub_830FBC18) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// li r0,0
	ctx.r0.s64 = 0;
	// stw r0,4(r1)
	PPC_STORE_U32(ctx.r1.u32 + 4, ctx.r0.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// addi r31,r1,-96
	ctx.r31.s64 = ctx.r1.s64 + -96;
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// bl 0x830f61f0
	ctx.lr = 0x830FBC38;
	sub_830F61F0(ctx, base);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// bl 0x83149e50
	ctx.lr = 0x830FBC40;
	sub_83149E50(ctx, base);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// bl 0x83147c20
	ctx.lr = 0x830FBC48;
	sub_83147C20(ctx, base);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// bl 0x830f6290
	ctx.lr = 0x830FBC50;
	sub_830F6290(ctx, base);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// bl 0x830ddbb0
	ctx.lr = 0x830FBC58;
	sub_830DDBB0(ctx, base);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// bl 0x830e5878
	ctx.lr = 0x830FBC60;
	sub_830E5878(ctx, base);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// bl 0x83101b48
	ctx.lr = 0x830FBC68;
	sub_83101B48(ctx, base);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// bl 0x8311e2b8
	ctx.lr = 0x830FBC70;
	sub_8311E2B8(ctx, base);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// bl 0x83145990
	ctx.lr = 0x830FBC78;
	sub_83145990(ctx, base);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// bl 0x830edf18
	ctx.lr = 0x830FBC80;
	sub_830EDF18(ctx, base);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// bl 0x83143488
	ctx.lr = 0x830FBC88;
	sub_83143488(ctx, base);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// bl 0x830de380
	ctx.lr = 0x830FBC90;
	sub_830DE380(ctx, base);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// bl 0x8311a1b8
	ctx.lr = 0x830FBC98;
	sub_8311A1B8(ctx, base);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// bl 0x83143060
	ctx.lr = 0x830FBCA0;
	sub_83143060(ctx, base);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// bl 0x831416d0
	ctx.lr = 0x830FBCA8;
	sub_831416D0(ctx, base);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// bl 0x83140ae0
	ctx.lr = 0x830FBCB0;
	sub_83140AE0(ctx, base);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// bl 0x8313fc70
	ctx.lr = 0x830FBCB8;
	sub_8313FC70(ctx, base);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// b 0x830fbcc0
	goto loc_830FBCC0;
loc_830FBCC0:
	// addi r1,r31,96
	ctx.r1.s64 = ctx.r31.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830FBCD4"))) PPC_WEAK_FUNC(sub_830FBCD4);
PPC_FUNC_IMPL(__imp__sub_830FBCD4) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lwz r25,17952(r26)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r26.u32 + 17952);
	// lwz r16,22716(r28)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r28.u32 + 22716);
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r3,7
	ctx.r3.s64 = 7;
	// bl 0x830fbfc0
	ctx.lr = 0x830FBCF0;
	sub_830FBFC0(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lis r3,-31984
	ctx.r3.s64 = -2096103424;
	// addi r3,r3,-17216
	ctx.r3.s64 = ctx.r3.s64 + -17216;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830FBCDC"))) PPC_WEAK_FUNC(sub_830FBCDC);
PPC_FUNC_IMPL(__imp__sub_830FBCDC) {
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
	// li r3,7
	ctx.r3.s64 = 7;
	// bl 0x830fbfc0
	ctx.lr = 0x830FBCF0;
	sub_830FBFC0(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lis r3,-31984
	ctx.r3.s64 = -2096103424;
	// addi r3,r3,-17216
	ctx.r3.s64 = ctx.r3.s64 + -17216;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830FBD08"))) PPC_WEAK_FUNC(sub_830FBD08);
PPC_FUNC_IMPL(__imp__sub_830FBD08) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x833a01ac
	ctx.lr = 0x830FBD10;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r30,-31827
	ctx.r30.s64 = -2085814272;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// lis r31,-31827
	ctx.r31.s64 = -2085814272;
	// lwz r4,-4824(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + -4824);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x830fbd48
	if (ctx.cr6.eq) goto loc_830FBD48;
	// lwz r3,-5084(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -5084);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x830FBD40;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,-4824(r30)
	PPC_STORE_U32(ctx.r30.u32 + -4824, ctx.r11.u32);
loc_830FBD48:
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x830fbd80
	if (ctx.cr6.eq) goto loc_830FBD80;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r4,-5084(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + -5084);
	// bl 0x830d6070
	ctx.lr = 0x830FBD5C;
	sub_830D6070(ctx, base);
	// stw r3,-4824(r30)
	PPC_STORE_U32(ctx.r30.u32 + -4824, ctx.r3.u32);
	// lis r11,-31846
	ctx.r11.s64 = -2087059456;
	// lwz r6,-5084(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + -5084);
	// li r5,2
	ctx.r5.s64 = 2;
	// addi r31,r11,24224
	ctx.r31.s64 = ctx.r11.s64 + 24224;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x830d61a8
	ctx.lr = 0x830FBD78;
	sub_830D61A8(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// sth r11,4(r31)
	PPC_STORE_U16(ctx.r31.u32 + 4, ctx.r11.u16);
loc_830FBD80:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x833a01fc
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_830FBD88"))) PPC_WEAK_FUNC(sub_830FBD88);
PPC_FUNC_IMPL(__imp__sub_830FBD88) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x833a01ac
	ctx.lr = 0x830FBD90;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r31,-31827
	ctx.r31.s64 = -2085814272;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// lis r30,-31827
	ctx.r30.s64 = -2085814272;
	// lwz r4,-4820(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + -4820);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x830fbdc8
	if (ctx.cr6.eq) goto loc_830FBDC8;
	// lwz r3,-5084(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + -5084);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x830FBDC0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,-4820(r31)
	PPC_STORE_U32(ctx.r31.u32 + -4820, ctx.r11.u32);
loc_830FBDC8:
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x830fbde0
	if (ctx.cr6.eq) goto loc_830FBDE0;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r4,-5084(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + -5084);
	// bl 0x830d6070
	ctx.lr = 0x830FBDDC;
	sub_830D6070(ctx, base);
	// stw r3,-4820(r31)
	PPC_STORE_U32(ctx.r31.u32 + -4820, ctx.r3.u32);
loc_830FBDE0:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x833a01fc
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_830FBDE8"))) PPC_WEAK_FUNC(sub_830FBDE8);
PPC_FUNC_IMPL(__imp__sub_830FBDE8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31846
	ctx.r11.s64 = -2087059456;
	// addi r3,r11,24224
	ctx.r3.s64 = ctx.r11.s64 + 24224;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830FBDF4"))) PPC_WEAK_FUNC(sub_830FBDF4);
PPC_FUNC_IMPL(__imp__sub_830FBDF4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_830FBDF8"))) PPC_WEAK_FUNC(sub_830FBDF8);
PPC_FUNC_IMPL(__imp__sub_830FBDF8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lwz r25,17952(r26)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r26.u32 + 17952);
	// lwz r16,22816(r28)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r28.u32 + 22816);
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x833a01ac
	ctx.lr = 0x830FBE08;
	__savegprlr_29(ctx, base);
	// addi r31,r1,-112
	ctx.r31.s64 = ctx.r1.s64 + -112;
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r6
	ctx.r29.u64 = ctx.r6.u64;
	// stw r3,132(r31)
	PPC_STORE_U32(ctx.r31.u32 + 132, ctx.r3.u32);
	// mr r6,r7
	ctx.r6.u64 = ctx.r7.u64;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// bl 0x830de230
	ctx.lr = 0x830FBE24;
	sub_830DE230(ctx, base);
	// lis r11,-32228
	ctx.r11.s64 = -2112094208;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r11,r11,22792
	ctx.r11.s64 = ctx.r11.s64 + 22792;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
	// bl 0x830de610
	ctx.lr = 0x830FBE3C;
	sub_830DE610(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r31,112
	ctx.r1.s64 = ctx.r31.s64 + 112;
	// b 0x833a01fc
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_830FBE00"))) PPC_WEAK_FUNC(sub_830FBE00);
PPC_FUNC_IMPL(__imp__sub_830FBE00) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x833a01ac
	ctx.lr = 0x830FBE08;
	__savegprlr_29(ctx, base);
	// addi r31,r1,-112
	ctx.r31.s64 = ctx.r1.s64 + -112;
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r6
	ctx.r29.u64 = ctx.r6.u64;
	// stw r3,132(r31)
	PPC_STORE_U32(ctx.r31.u32 + 132, ctx.r3.u32);
	// mr r6,r7
	ctx.r6.u64 = ctx.r7.u64;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// bl 0x830de230
	ctx.lr = 0x830FBE24;
	sub_830DE230(ctx, base);
	// lis r11,-32228
	ctx.r11.s64 = -2112094208;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r11,r11,22792
	ctx.r11.s64 = ctx.r11.s64 + 22792;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
	// bl 0x830de610
	ctx.lr = 0x830FBE3C;
	sub_830DE610(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r31,112
	ctx.r1.s64 = ctx.r31.s64 + 112;
	// b 0x833a01fc
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_830FBE48"))) PPC_WEAK_FUNC(sub_830FBE48);
PPC_FUNC_IMPL(__imp__sub_830FBE48) {
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
	// bl 0x830de178
	ctx.lr = 0x830FBE60;
	sub_830DE178(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830FBE70"))) PPC_WEAK_FUNC(sub_830FBE70);
PPC_FUNC_IMPL(__imp__sub_830FBE70) {
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
	// bl 0x830de2a8
	ctx.lr = 0x830FBE88;
	sub_830DE2A8(ctx, base);
	// lis r11,-32228
	ctx.r11.s64 = -2112094208;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r11,r11,22792
	ctx.r11.s64 = ctx.r11.s64 + 22792;
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

__attribute__((alias("__imp__sub_830FBEAC"))) PPC_WEAK_FUNC(sub_830FBEAC);
PPC_FUNC_IMPL(__imp__sub_830FBEAC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_830FBEB0"))) PPC_WEAK_FUNC(sub_830FBEB0);
PPC_FUNC_IMPL(__imp__sub_830FBEB0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32228
	ctx.r11.s64 = -2112094208;
	// addi r11,r11,22792
	ctx.r11.s64 = ctx.r11.s64 + 22792;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// b 0x830de178
	sub_830DE178(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_830FBEC0"))) PPC_WEAK_FUNC(sub_830FBEC0);
PPC_FUNC_IMPL(__imp__sub_830FBEC0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lwz r25,17952(r26)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r26.u32 + 17952);
	// lwz r16,22872(r28)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r28.u32 + 22872);
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x833a01ac
	ctx.lr = 0x830FBED0;
	__savegprlr_29(ctx, base);
	// addi r31,r1,-128
	ctx.r31.s64 = ctx.r1.s64 + -128;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// stw r3,148(r31)
	PPC_STORE_U32(ctx.r31.u32 + 148, ctx.r3.u32);
	// li r3,24
	ctx.r3.s64 = 24;
	// lwz r4,20(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 20);
	// bl 0x830dd390
	ctx.lr = 0x830FBEEC;
	sub_830DD390(ctx, base);
	// mr. r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// stw r30,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r30.u32);
	// beq 0x830fbf18
	if (ctx.cr0.eq) goto loc_830FBF18;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x830de2a8
	ctx.lr = 0x830FBF04;
	sub_830DE2A8(ctx, base);
	// lis r11,-32228
	ctx.r11.s64 = -2112094208;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r11,r11,22792
	ctx.r11.s64 = ctx.r11.s64 + 22792;
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
	// b 0x830fbf1c
	goto loc_830FBF1C;
loc_830FBF18:
	// li r3,0
	ctx.r3.s64 = 0;
loc_830FBF1C:
	// addi r1,r31,128
	ctx.r1.s64 = ctx.r31.s64 + 128;
	// b 0x833a01fc
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_830FBEC8"))) PPC_WEAK_FUNC(sub_830FBEC8);
PPC_FUNC_IMPL(__imp__sub_830FBEC8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x833a01ac
	ctx.lr = 0x830FBED0;
	__savegprlr_29(ctx, base);
	// addi r31,r1,-128
	ctx.r31.s64 = ctx.r1.s64 + -128;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// stw r3,148(r31)
	PPC_STORE_U32(ctx.r31.u32 + 148, ctx.r3.u32);
	// li r3,24
	ctx.r3.s64 = 24;
	// lwz r4,20(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 20);
	// bl 0x830dd390
	ctx.lr = 0x830FBEEC;
	sub_830DD390(ctx, base);
	// mr. r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// stw r30,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r30.u32);
	// beq 0x830fbf18
	if (ctx.cr0.eq) goto loc_830FBF18;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x830de2a8
	ctx.lr = 0x830FBF04;
	sub_830DE2A8(ctx, base);
	// lis r11,-32228
	ctx.r11.s64 = -2112094208;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r11,r11,22792
	ctx.r11.s64 = ctx.r11.s64 + 22792;
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
	// b 0x830fbf1c
	goto loc_830FBF1C;
loc_830FBF18:
	// li r3,0
	ctx.r3.s64 = 0;
loc_830FBF1C:
	// addi r1,r31,128
	ctx.r1.s64 = ctx.r31.s64 + 128;
	// b 0x833a01fc
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_830FBF24"))) PPC_WEAK_FUNC(sub_830FBF24);
PPC_FUNC_IMPL(__imp__sub_830FBF24) {
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
	// lwz r4,20(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// lwz r3,80(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	// bl 0x830dd3e0
	ctx.lr = 0x830FBF44;
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

__attribute__((alias("__imp__sub_830FBF54"))) PPC_WEAK_FUNC(sub_830FBF54);
PPC_FUNC_IMPL(__imp__sub_830FBF54) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_830FBF58"))) PPC_WEAK_FUNC(sub_830FBF58);
PPC_FUNC_IMPL(__imp__sub_830FBF58) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32228
	ctx.r11.s64 = -2112094208;
	// addi r3,r11,-5116
	ctx.r3.s64 = ctx.r11.s64 + -5116;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830FBF64"))) PPC_WEAK_FUNC(sub_830FBF64);
PPC_FUNC_IMPL(__imp__sub_830FBF64) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_830FBF68"))) PPC_WEAK_FUNC(sub_830FBF68);
PPC_FUNC_IMPL(__imp__sub_830FBF68) {
	PPC_FUNC_PROLOGUE();
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
	// lis r11,-32228
	ctx.r11.s64 = -2112094208;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r11,r11,22792
	ctx.r11.s64 = ctx.r11.s64 + 22792;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// bl 0x830de178
	ctx.lr = 0x830FBF94;
	sub_830DE178(ctx, base);
	// clrlwi. r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x830fbfa4
	if (ctx.cr0.eq) goto loc_830FBFA4;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x830dd3e0
	ctx.lr = 0x830FBFA4;
	sub_830DD3E0(ctx, base);
loc_830FBFA4:
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

__attribute__((alias("__imp__sub_830FBFC0"))) PPC_WEAK_FUNC(sub_830FBFC0);
PPC_FUNC_IMPL(__imp__sub_830FBFC0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31827
	ctx.r11.s64 = -2085814272;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r11,-5092(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -5092);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x830fbfe8
	if (ctx.cr6.eq) goto loc_830FBFE8;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// lwz r11,4(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
loc_830FBFE8:
	// lis r11,-31827
	ctx.r11.s64 = -2085814272;
	// lwz r3,-5088(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -5088);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_830FC000"))) PPC_WEAK_FUNC(sub_830FC000);
PPC_FUNC_IMPL(__imp__sub_830FC000) {
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
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x833be310
	ctx.lr = 0x830FC024;
	sub_833BE310(ctx, base);
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// bne cr6,0x830fc058
	if (!ctx.cr6.eq) goto loc_830FC058;
	// lis r11,-32228
	ctx.r11.s64 = -2112094208;
	// mr r7,r31
	ctx.r7.u64 = ctx.r31.u64;
	// addi r4,r11,22920
	ctx.r4.s64 = ctx.r11.s64 + 22920;
	// li r6,32
	ctx.r6.s64 = 32;
	// li r5,131
	ctx.r5.s64 = 131;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x830fbe00
	ctx.lr = 0x830FC048;
	sub_830FBE00(ctx, base);
	// lis r11,-32194
	ctx.r11.s64 = -2109865984;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,-27552
	ctx.r4.s64 = ctx.r11.s64 + -27552;
	// bl 0x833a7198
	ctx.lr = 0x830FC058;
	sub_833A7198(ctx, base);
loc_830FC058:
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

__attribute__((alias("__imp__sub_830FC06C"))) PPC_WEAK_FUNC(sub_830FC06C);
PPC_FUNC_IMPL(__imp__sub_830FC06C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_830FC070"))) PPC_WEAK_FUNC(sub_830FC070);
PPC_FUNC_IMPL(__imp__sub_830FC070) {
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
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// bl 0x82d9f098
	ctx.lr = 0x830FC088;
	sub_82D9F098(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x830fc0bc
	if (!ctx.cr0.eq) goto loc_830FC0BC;
	// lis r11,-32228
	ctx.r11.s64 = -2112094208;
	// mr r7,r31
	ctx.r7.u64 = ctx.r31.u64;
	// addi r4,r11,22920
	ctx.r4.s64 = ctx.r11.s64 + 22920;
	// li r6,33
	ctx.r6.s64 = 33;
	// li r5,140
	ctx.r5.s64 = 140;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x830fbe00
	ctx.lr = 0x830FC0AC;
	sub_830FBE00(ctx, base);
	// lis r11,-32194
	ctx.r11.s64 = -2109865984;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,-27552
	ctx.r4.s64 = ctx.r11.s64 + -27552;
	// bl 0x833a7198
	ctx.lr = 0x830FC0BC;
	sub_833A7198(ctx, base);
loc_830FC0BC:
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

__attribute__((alias("__imp__sub_830FC0D0"))) PPC_WEAK_FUNC(sub_830FC0D0);
PPC_FUNC_IMPL(__imp__sub_830FC0D0) {
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
	// li r9,0
	ctx.r9.s64 = 0;
	// lis r8,2048
	ctx.r8.s64 = 134217728;
	// li r7,3
	ctx.r7.s64 = 3;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,1
	ctx.r5.s64 = 1;
	// lis r4,-32768
	ctx.r4.s64 = -2147483648;
	// bl 0x82d9f2e0
	ctx.lr = 0x830FC0F8;
	sub_82D9F2E0(ctx, base);
	// li r11,-1
	ctx.r11.s64 = -1;
	// subf r11,r3,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r3.s64;
	// subfic r11,r11,0
	ctx.xer.ca = ctx.r11.u32 <= 0;
	ctx.r11.s64 = 0 - ctx.r11.s64;
	// subfe r11,r11,r11
	temp.u8 = (~ctx.r11.u32 + ctx.r11.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r11.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r3,r11,r3
	ctx.r3.u64 = ctx.r11.u64 & ctx.r3.u64;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830FC11C"))) PPC_WEAK_FUNC(sub_830FC11C);
PPC_FUNC_IMPL(__imp__sub_830FC11C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_830FC120"))) PPC_WEAK_FUNC(sub_830FC120);
PPC_FUNC_IMPL(__imp__sub_830FC120) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x833a01a8
	ctx.lr = 0x830FC128;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x830fc2a4
	if (ctx.cr6.eq) goto loc_830FC2A4;
	// lhz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 0);
	// cmplwi cr6,r11,47
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 47, ctx.xer);
	// bne cr6,0x830fc1c4
	if (!ctx.cr6.eq) goto loc_830FC1C4;
	// addi r10,r3,2
	ctx.r10.s64 = ctx.r3.s64 + 2;
	// lhz r9,2(r3)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r3.u32 + 2);
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// b 0x830fc158
	goto loc_830FC158;
loc_830FC154:
	// lhzu r9,2(r11)
	ea = 2 + ctx.r11.u32;
	ctx.r9.u64 = PPC_LOAD_U16(ea);
	ctx.r11.u32 = ea;
loc_830FC158:
	// cmplwi r9,0
	ctx.cr0.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne 0x830fc154
	if (!ctx.cr0.eq) goto loc_830FC154;
	// subf r11,r3,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r3.s64;
	// srawi r11,r11,1
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 1;
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// ble cr6,0x830fc1c4
	if (!ctx.cr6.gt) goto loc_830FC1C4;
	// lhz r9,4(r3)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r3.u32 + 4);
	// cmplwi cr6,r9,58
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 58, ctx.xer);
	// bne cr6,0x830fc1a4
	if (!ctx.cr6.eq) goto loc_830FC1A4;
	// lhz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r10.u32 + 0);
	// cmplwi cr6,r11,65
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 65, ctx.xer);
	// blt cr6,0x830fc190
	if (ctx.cr6.lt) goto loc_830FC190;
	// cmplwi cr6,r11,90
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 90, ctx.xer);
	// ble cr6,0x830fc1a0
	if (!ctx.cr6.gt) goto loc_830FC1A0;
loc_830FC190:
	// cmplwi cr6,r11,97
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 97, ctx.xer);
	// blt cr6,0x830fc1a4
	if (ctx.cr6.lt) goto loc_830FC1A4;
	// cmplwi cr6,r11,122
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 122, ctx.xer);
	// bgt cr6,0x830fc1a4
	if (ctx.cr6.gt) goto loc_830FC1A4;
loc_830FC1A0:
	// mr r3,r10
	ctx.r3.u64 = ctx.r10.u64;
loc_830FC1A4:
	// lhz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r10.u32 + 0);
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// bne cr6,0x830fc1c4
	if (!ctx.cr6.eq) goto loc_830FC1C4;
	// cmplwi cr6,r11,47
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 47, ctx.xer);
	// beq cr6,0x830fc1c0
	if (ctx.cr6.eq) goto loc_830FC1C0;
	// cmplwi cr6,r11,92
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 92, ctx.xer);
	// bne cr6,0x830fc1c4
	if (!ctx.cr6.eq) goto loc_830FC1C4;
loc_830FC1C0:
	// mr r3,r10
	ctx.r3.u64 = ctx.r10.u64;
loc_830FC1C4:
	// lhz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 0);
	// li r31,0
	ctx.r31.s64 = 0;
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// b 0x830fc1e8
	goto loc_830FC1E8;
loc_830FC1D4:
	// cmplwi cr6,r11,165
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 165, ctx.xer);
	// beq cr6,0x830fc1f0
	if (ctx.cr6.eq) goto loc_830FC1F0;
	// cmplwi cr6,r11,8361
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 8361, ctx.xer);
	// beq cr6,0x830fc1f0
	if (ctx.cr6.eq) goto loc_830FC1F0;
	// lhzu r11,2(r10)
	ea = 2 + ctx.r10.u32;
	ctx.r11.u64 = PPC_LOAD_U16(ea);
	ctx.r10.u32 = ea;
loc_830FC1E8:
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x830fc1d4
	if (!ctx.cr0.eq) goto loc_830FC1D4;
loc_830FC1F0:
	// lhz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r10.u32 + 0);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x830fc240
	if (ctx.cr0.eq) goto loc_830FC240;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x830d58e8
	ctx.lr = 0x830FC204;
	sub_830D58E8(ctx, base);
	// lhz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r3.u32 + 0);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// b 0x830fc234
	goto loc_830FC234;
loc_830FC214:
	// lhz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r11.u32 + 0);
	// cmplwi cr6,r10,165
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 165, ctx.xer);
	// beq cr6,0x830fc228
	if (ctx.cr6.eq) goto loc_830FC228;
	// cmplwi cr6,r10,8361
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 8361, ctx.xer);
	// bne cr6,0x830fc230
	if (!ctx.cr6.eq) goto loc_830FC230;
loc_830FC228:
	// li r10,47
	ctx.r10.s64 = 47;
	// sth r10,0(r11)
	PPC_STORE_U16(ctx.r11.u32 + 0, ctx.r10.u16);
loc_830FC230:
	// lhzu r10,2(r11)
	ea = 2 + ctx.r11.u32;
	ctx.r10.u64 = PPC_LOAD_U16(ea);
	ctx.r11.u32 = ea;
loc_830FC234:
	// cmplwi r10,0
	ctx.cr0.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne 0x830fc214
	if (!ctx.cr0.eq) goto loc_830FC214;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_830FC240:
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x830d60f8
	ctx.lr = 0x830FC248;
	sub_830D60F8(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// bl 0x830fc0d0
	ctx.lr = 0x830FC254;
	sub_830FC0D0(ctx, base);
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x830FC270;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x830fc290
	if (ctx.cr6.eq) goto loc_830FC290;
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x830FC290;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_830FC290:
	// li r11,-1
	ctx.r11.s64 = -1;
	// subf r11,r30,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r30.s64;
	// subfic r11,r11,0
	ctx.xer.ca = ctx.r11.u32 <= 0;
	ctx.r11.s64 = 0 - ctx.r11.s64;
	// subfe r11,r11,r11
	temp.u8 = (~ctx.r11.u32 + ctx.r11.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r11.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r3,r11,r30
	ctx.r3.u64 = ctx.r11.u64 & ctx.r30.u64;
loc_830FC2A4:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x833a01f8
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_830FC2AC"))) PPC_WEAK_FUNC(sub_830FC2AC);
PPC_FUNC_IMPL(__imp__sub_830FC2AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_830FC2B0"))) PPC_WEAK_FUNC(sub_830FC2B0);
PPC_FUNC_IMPL(__imp__sub_830FC2B0) {
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
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,128
	ctx.r8.s64 = 128;
	// li r7,2
	ctx.r7.s64 = 2;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// lis r4,16384
	ctx.r4.s64 = 1073741824;
	// bl 0x82d9f2e0
	ctx.lr = 0x830FC2D8;
	sub_82D9F2E0(ctx, base);
	// li r11,-1
	ctx.r11.s64 = -1;
	// subf r11,r3,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r3.s64;
	// subfic r11,r11,0
	ctx.xer.ca = ctx.r11.u32 <= 0;
	ctx.r11.s64 = 0 - ctx.r11.s64;
	// subfe r11,r11,r11
	temp.u8 = (~ctx.r11.u32 + ctx.r11.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r11.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r3,r11,r3
	ctx.r3.u64 = ctx.r11.u64 & ctx.r3.u64;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830FC2FC"))) PPC_WEAK_FUNC(sub_830FC2FC);
PPC_FUNC_IMPL(__imp__sub_830FC2FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_830FC300"))) PPC_WEAK_FUNC(sub_830FC300);
PPC_FUNC_IMPL(__imp__sub_830FC300) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x833a01a8
	ctx.lr = 0x830FC308;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x830fc3f8
	if (ctx.cr6.eq) goto loc_830FC3F8;
	// lhz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 0);
	// li r31,0
	ctx.r31.s64 = 0;
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// b 0x830fc33c
	goto loc_830FC33C;
loc_830FC328:
	// cmplwi cr6,r11,165
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 165, ctx.xer);
	// beq cr6,0x830fc344
	if (ctx.cr6.eq) goto loc_830FC344;
	// cmplwi cr6,r11,8361
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 8361, ctx.xer);
	// beq cr6,0x830fc344
	if (ctx.cr6.eq) goto loc_830FC344;
	// lhzu r11,2(r10)
	ea = 2 + ctx.r10.u32;
	ctx.r11.u64 = PPC_LOAD_U16(ea);
	ctx.r10.u32 = ea;
loc_830FC33C:
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x830fc328
	if (!ctx.cr0.eq) goto loc_830FC328;
loc_830FC344:
	// lhz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r10.u32 + 0);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x830fc394
	if (ctx.cr0.eq) goto loc_830FC394;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x830d58e8
	ctx.lr = 0x830FC358;
	sub_830D58E8(ctx, base);
	// lhz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r3.u32 + 0);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// b 0x830fc388
	goto loc_830FC388;
loc_830FC368:
	// lhz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r11.u32 + 0);
	// cmplwi cr6,r10,165
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 165, ctx.xer);
	// beq cr6,0x830fc37c
	if (ctx.cr6.eq) goto loc_830FC37C;
	// cmplwi cr6,r10,8361
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 8361, ctx.xer);
	// bne cr6,0x830fc384
	if (!ctx.cr6.eq) goto loc_830FC384;
loc_830FC37C:
	// li r10,47
	ctx.r10.s64 = 47;
	// sth r10,0(r11)
	PPC_STORE_U16(ctx.r11.u32 + 0, ctx.r10.u16);
loc_830FC384:
	// lhzu r10,2(r11)
	ea = 2 + ctx.r11.u32;
	ctx.r10.u64 = PPC_LOAD_U16(ea);
	ctx.r11.u32 = ea;
loc_830FC388:
	// cmplwi r10,0
	ctx.cr0.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne 0x830fc368
	if (!ctx.cr0.eq) goto loc_830FC368;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_830FC394:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x830d60f8
	ctx.lr = 0x830FC39C;
	sub_830D60F8(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// bl 0x830fc2b0
	ctx.lr = 0x830FC3A8;
	sub_830FC2B0(ctx, base);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x830FC3C4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x830fc3e4
	if (ctx.cr6.eq) goto loc_830FC3E4;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x830FC3E4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_830FC3E4:
	// li r11,-1
	ctx.r11.s64 = -1;
	// subf r11,r29,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r29.s64;
	// subfic r11,r11,0
	ctx.xer.ca = ctx.r11.u32 <= 0;
	ctx.r11.s64 = 0 - ctx.r11.s64;
	// subfe r11,r11,r11
	temp.u8 = (~ctx.r11.u32 + ctx.r11.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r11.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r3,r11,r29
	ctx.r3.u64 = ctx.r11.u64 & ctx.r29.u64;
loc_830FC3F8:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x833a01f8
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_830FC400"))) PPC_WEAK_FUNC(sub_830FC400);
PPC_FUNC_IMPL(__imp__sub_830FC400) {
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
	// li r10,0
	ctx.r10.s64 = 0;
	// mr r11,r5
	ctx.r11.u64 = ctx.r5.u64;
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// mr r31,r6
	ctx.r31.u64 = ctx.r6.u64;
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// mr r4,r11
	ctx.r4.u64 = ctx.r11.u64;
	// bl 0x82d9f0f8
	ctx.lr = 0x830FC434;
	sub_82D9F0F8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x830fc474
	if (!ctx.cr0.eq) goto loc_830FC474;
	// bl 0x82d9fb18
	ctx.lr = 0x830FC440;
	sub_82D9FB18(ctx, base);
	// cmplwi cr6,r3,109
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 109, ctx.xer);
	// beq cr6,0x830fc474
	if (ctx.cr6.eq) goto loc_830FC474;
	// lis r11,-32228
	ctx.r11.s64 = -2112094208;
	// mr r7,r31
	ctx.r7.u64 = ctx.r31.u64;
	// addi r4,r11,22920
	ctx.r4.s64 = ctx.r11.s64 + 22920;
	// li r6,37
	ctx.r6.s64 = 37;
	// li r5,394
	ctx.r5.s64 = 394;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x830fbe00
	ctx.lr = 0x830FC464;
	sub_830FBE00(ctx, base);
	// lis r11,-32194
	ctx.r11.s64 = -2109865984;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// addi r4,r11,-27552
	ctx.r4.s64 = ctx.r11.s64 + -27552;
	// bl 0x833a7198
	ctx.lr = 0x830FC474;
	sub_833A7198(ctx, base);
loc_830FC474:
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
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

__attribute__((alias("__imp__sub_830FC48C"))) PPC_WEAK_FUNC(sub_830FC48C);
PPC_FUNC_IMPL(__imp__sub_830FC48C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_830FC490"))) PPC_WEAK_FUNC(sub_830FC490);
PPC_FUNC_IMPL(__imp__sub_830FC490) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x833a01a4
	ctx.lr = 0x830FC498;
	__savegprlr_27(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// mr r27,r6
	ctx.r27.u64 = ctx.r6.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x830fc534
	if (ctx.cr6.eq) goto loc_830FC534;
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// ble cr6,0x830fc534
	if (!ctx.cr6.gt) goto loc_830FC534;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x830fc534
	if (ctx.cr6.eq) goto loc_830FC534;
	// li r28,0
	ctx.r28.s64 = 0;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// b 0x830fc4e8
	goto loc_830FC4E8;
loc_830FC4D0:
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplw cr6,r11,r31
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r31.u32, ctx.xer);
	// bge cr6,0x830fc534
	if (!ctx.cr6.lt) goto loc_830FC534;
	// add r30,r11,r30
	ctx.r30.u64 = ctx.r11.u64 + ctx.r30.u64;
	// subf r31,r11,r31
	ctx.r31.s64 = ctx.r31.s64 - ctx.r11.s64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
loc_830FC4E8:
	// stw r28,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r28.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82d9f518
	ctx.lr = 0x830FC500;
	sub_82D9F518(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x830fc4d0
	if (!ctx.cr0.eq) goto loc_830FC4D0;
	// lis r11,-32228
	ctx.r11.s64 = -2112094208;
	// mr r7,r27
	ctx.r7.u64 = ctx.r27.u64;
	// addi r4,r11,22920
	ctx.r4.s64 = ctx.r11.s64 + 22920;
	// li r6,38
	ctx.r6.s64 = 38;
	// li r5,416
	ctx.r5.s64 = 416;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x830fbe00
	ctx.lr = 0x830FC524;
	sub_830FBE00(ctx, base);
	// lis r11,-32194
	ctx.r11.s64 = -2109865984;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// addi r4,r11,-27552
	ctx.r4.s64 = ctx.r11.s64 + -27552;
	// bl 0x833a7198
	ctx.lr = 0x830FC534;
	sub_833A7198(ctx, base);
loc_830FC534:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x833a01f4
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_830FC53C"))) PPC_WEAK_FUNC(sub_830FC53C);
PPC_FUNC_IMPL(__imp__sub_830FC53C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_830FC540"))) PPC_WEAK_FUNC(sub_830FC540);
PPC_FUNC_IMPL(__imp__sub_830FC540) {
	PPC_FUNC_PROLOGUE();
	// lhz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r3.u32 + 0);
	// mr. r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x830fc554
	if (!ctx.cr0.eq) goto loc_830FC554;
loc_830FC54C:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_830FC554:
	// lhz r9,2(r3)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r3.u32 + 2);
	// cmplwi cr6,r9,58
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 58, ctx.xer);
	// bne cr6,0x830fc580
	if (!ctx.cr6.eq) goto loc_830FC580;
	// cmplwi cr6,r11,65
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 65, ctx.xer);
	// blt cr6,0x830fc570
	if (ctx.cr6.lt) goto loc_830FC570;
	// cmplwi cr6,r11,90
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 90, ctx.xer);
	// ble cr6,0x830fc54c
	if (!ctx.cr6.gt) goto loc_830FC54C;
loc_830FC570:
	// cmplwi cr6,r11,97
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 97, ctx.xer);
	// blt cr6,0x830fc580
	if (ctx.cr6.lt) goto loc_830FC580;
	// cmplwi cr6,r11,122
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 122, ctx.xer);
	// ble cr6,0x830fc54c
	if (!ctx.cr6.gt) goto loc_830FC54C;
loc_830FC580:
	// clrlwi r11,r10,16
	ctx.r11.u64 = ctx.r10.u32 & 0xFFFF;
	// cmplwi cr6,r11,92
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 92, ctx.xer);
	// beq cr6,0x830fc5a0
	if (ctx.cr6.eq) goto loc_830FC5A0;
	// cmplwi cr6,r11,165
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 165, ctx.xer);
	// beq cr6,0x830fc5a0
	if (ctx.cr6.eq) goto loc_830FC5A0;
	// cmplwi cr6,r11,8361
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 8361, ctx.xer);
	// li r11,0
	ctx.r11.s64 = 0;
	// bne cr6,0x830fc5a4
	if (!ctx.cr6.eq) goto loc_830FC5A4;
loc_830FC5A0:
	// li r11,1
	ctx.r11.s64 = 1;
loc_830FC5A4:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r3,r11,27,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830FC5B4"))) PPC_WEAK_FUNC(sub_830FC5B4);
PPC_FUNC_IMPL(__imp__sub_830FC5B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_830FC5B8"))) PPC_WEAK_FUNC(sub_830FC5B8);
PPC_FUNC_IMPL(__imp__sub_830FC5B8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r11,3189
	ctx.r3.s64 = ctx.r11.s64 + 3189;
	// b 0x830d6188
	sub_830D6188(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_830FC5C8"))) PPC_WEAK_FUNC(sub_830FC5C8);
PPC_FUNC_IMPL(__imp__sub_830FC5C8) {
	PPC_FUNC_PROLOGUE();
	// b 0x82e01698
	sub_82E01698(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_830FC5CC"))) PPC_WEAK_FUNC(sub_830FC5CC);
PPC_FUNC_IMPL(__imp__sub_830FC5CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_830FC5D0"))) PPC_WEAK_FUNC(sub_830FC5D0);
PPC_FUNC_IMPL(__imp__sub_830FC5D0) {
	PPC_FUNC_PROLOGUE();
loc_830FC5D0:
	// mfmsr r10
	ctx.r10.u64 = ctx.msr;
	// mtmsrd r13,1
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// lwarx r11,0,r3
	ctx.reserved.u32 = *(uint32_t*)(base + ctx.r3.u32);
	ctx.r11.u64 = __builtin_bswap32(ctx.reserved.u32);
	// cmpw cr6,r11,r5
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r5.s32, ctx.xer);
	// bne cr6,0x830fc5f4
	if (!ctx.cr6.eq) goto loc_830FC5F4;
	// stwcx. r4,0,r3
	ctx.cr0.lt = 0;
	ctx.cr0.gt = 0;
	ctx.cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ctx.r3.u32), ctx.reserved.s32, __builtin_bswap32(ctx.r4.s32));
	ctx.cr0.so = ctx.xer.so;
	// mtmsrd r10,1
	ctx.msr = (ctx.r10.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// bne 0x830fc5d0
	if (!ctx.cr0.eq) goto loc_830FC5D0;
	// b 0x830fc5fc
	goto loc_830FC5FC;
loc_830FC5F4:
	// stwcx. r11,0,r3
	ctx.cr0.lt = 0;
	ctx.cr0.gt = 0;
	ctx.cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ctx.r3.u32), ctx.reserved.s32, __builtin_bswap32(ctx.r11.s32));
	ctx.cr0.so = ctx.xer.so;
	// mtmsrd r10,1
	ctx.msr = (ctx.r10.u32 & 0x8020) | (ctx.msr & ~0x8020);
loc_830FC5FC:
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830FC604"))) PPC_WEAK_FUNC(sub_830FC604);
PPC_FUNC_IMPL(__imp__sub_830FC604) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_830FC608"))) PPC_WEAK_FUNC(sub_830FC608);
PPC_FUNC_IMPL(__imp__sub_830FC608) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lwz r25,17952(r26)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r26.u32 + 17952);
	// lwz r16,23108(r28)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r28.u32 + 23108);
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// li r0,0
	ctx.r0.s64 = 0;
	// stw r0,4(r1)
	PPC_STORE_U32(ctx.r1.u32 + 4, ctx.r0.u32);
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
	// lis r11,-31827
	ctx.r11.s64 = -2085814272;
	// li r3,8
	ctx.r3.s64 = 8;
	// lwz r4,-5084(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + -5084);
	// bl 0x830dd390
	ctx.lr = 0x830FC644;
	sub_830DD390(ctx, base);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// stw r3,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r3.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x830fc670
	if (ctx.cr6.eq) goto loc_830FC670;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x8314a060
	ctx.lr = 0x830FC660;
	sub_8314A060(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// b 0x830fc674
	goto loc_830FC674;
loc_830FC670:
	// li r11,0
	ctx.r11.s64 = 0;
loc_830FC674:
	// b 0x830fc67c
	// ERROR 830FC67C
	return;
}

__attribute__((alias("__imp__sub_830FC610"))) PPC_WEAK_FUNC(sub_830FC610);
PPC_FUNC_IMPL(__imp__sub_830FC610) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// li r0,0
	ctx.r0.s64 = 0;
	// stw r0,4(r1)
	PPC_STORE_U32(ctx.r1.u32 + 4, ctx.r0.u32);
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
	// lis r11,-31827
	ctx.r11.s64 = -2085814272;
	// li r3,8
	ctx.r3.s64 = 8;
	// lwz r4,-5084(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + -5084);
	// bl 0x830dd390
	ctx.lr = 0x830FC644;
	sub_830DD390(ctx, base);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// stw r3,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r3.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x830fc670
	if (ctx.cr6.eq) goto loc_830FC670;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x8314a060
	ctx.lr = 0x830FC660;
	sub_8314A060(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// b 0x830fc674
	goto loc_830FC674;
loc_830FC670:
	// li r11,0
	ctx.r11.s64 = 0;
loc_830FC674:
	// b 0x830fc67c
	goto loc_830FC67C;
	// lwz r11,80(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
loc_830FC67C:
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
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

__attribute__((alias("__imp__sub_830FC678"))) PPC_WEAK_FUNC(sub_830FC678);
PPC_FUNC_IMPL(__imp__sub_830FC678) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,80(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
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

__attribute__((alias("__imp__sub_830FC698"))) PPC_WEAK_FUNC(sub_830FC698);
PPC_FUNC_IMPL(__imp__sub_830FC698) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lwz r25,17952(r26)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r26.u32 + 17952);
	// lwz r16,23108(r28)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r28.u32 + 23108);
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
	ctx.lr = 0x830FC6B8;
	sub_833A7198(ctx, base);
	// lwz r25,17952(r26)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r26.u32 + 17952);
	// lwz r16,23108(r28)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r28.u32 + 23108);
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
	// li r4,4
	ctx.r4.s64 = 4;
	// lwz r3,-5092(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -5092);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x830fc6e8
	if (!ctx.cr6.eq) goto loc_830FC6E8;
	// lis r11,-31827
	ctx.r11.s64 = -2085814272;
	// lwz r3,-5088(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -5088);
loc_830FC6E8:
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x830FC6F8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lis r3,-31984
	ctx.r3.s64 = -2096103424;
	// addi r3,r3,-14728
	ctx.r3.s64 = ctx.r3.s64 + -14728;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830FC6A0"))) PPC_WEAK_FUNC(sub_830FC6A0);
PPC_FUNC_IMPL(__imp__sub_830FC6A0) {
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
	ctx.lr = 0x830FC6B8;
	sub_833A7198(ctx, base);
}

__attribute__((alias("__imp__sub_830FC6C0"))) PPC_WEAK_FUNC(sub_830FC6C0);
PPC_FUNC_IMPL(__imp__sub_830FC6C0) {
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
	// li r4,4
	ctx.r4.s64 = 4;
	// lwz r3,-5092(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -5092);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x830fc6e8
	if (!ctx.cr6.eq) goto loc_830FC6E8;
	// lis r11,-31827
	ctx.r11.s64 = -2085814272;
	// lwz r3,-5088(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -5088);
loc_830FC6E8:
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x830FC6F8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lis r3,-31984
	ctx.r3.s64 = -2096103424;
	// addi r3,r3,-14728
	ctx.r3.s64 = ctx.r3.s64 + -14728;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830FC710"))) PPC_WEAK_FUNC(sub_830FC710);
PPC_FUNC_IMPL(__imp__sub_830FC710) {
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
	// lis r11,-31827
	ctx.r11.s64 = -2085814272;
	// lwz r4,-5084(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + -5084);
	// lwz r3,80(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	// bl 0x830dd3e0
	ctx.lr = 0x830FC730;
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

__attribute__((alias("__imp__sub_830FC740"))) PPC_WEAK_FUNC(sub_830FC740);
PPC_FUNC_IMPL(__imp__sub_830FC740) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lwz r25,17952(r26)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r26.u32 + 17952);
	// lwz r16,23192(r28)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r28.u32 + 23192);
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
	// lis r11,-31827
	ctx.r11.s64 = -2085814272;
	// li r3,8
	ctx.r3.s64 = 8;
	// lwz r4,-5084(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + -5084);
	// bl 0x830dd390
	ctx.lr = 0x830FC76C;
	sub_830DD390(ctx, base);
	// stw r3,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r3.u32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x830fc780
	if (ctx.cr0.eq) goto loc_830FC780;
	// bl 0x8314afb0
	ctx.lr = 0x830FC77C;
	sub_8314AFB0(ctx, base);
	// b 0x830fc784
	goto loc_830FC784;
loc_830FC780:
	// li r3,0
	ctx.r3.s64 = 0;
loc_830FC784:
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

__attribute__((alias("__imp__sub_830FC748"))) PPC_WEAK_FUNC(sub_830FC748);
PPC_FUNC_IMPL(__imp__sub_830FC748) {
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
	// lis r11,-31827
	ctx.r11.s64 = -2085814272;
	// li r3,8
	ctx.r3.s64 = 8;
	// lwz r4,-5084(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + -5084);
	// bl 0x830dd390
	ctx.lr = 0x830FC76C;
	sub_830DD390(ctx, base);
	// stw r3,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r3.u32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x830fc780
	if (ctx.cr0.eq) goto loc_830FC780;
	// bl 0x8314afb0
	ctx.lr = 0x830FC77C;
	sub_8314AFB0(ctx, base);
	// b 0x830fc784
	goto loc_830FC784;
loc_830FC780:
	// li r3,0
	ctx.r3.s64 = 0;
loc_830FC784:
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

__attribute__((alias("__imp__sub_830FC798"))) PPC_WEAK_FUNC(sub_830FC798);
PPC_FUNC_IMPL(__imp__sub_830FC798) {
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
	// lis r11,-31827
	ctx.r11.s64 = -2085814272;
	// lwz r4,-5084(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + -5084);
	// lwz r3,80(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	// bl 0x830dd3e0
	ctx.lr = 0x830FC7B8;
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

__attribute__((alias("__imp__sub_830FC7C8"))) PPC_WEAK_FUNC(sub_830FC7C8);
PPC_FUNC_IMPL(__imp__sub_830FC7C8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mr r9,r3
	ctx.r9.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x830fc8b0
	if (ctx.cr6.eq) goto loc_830FC8B0;
	// lhz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 0);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x830fc8b0
	if (ctx.cr0.eq) goto loc_830FC8B0;
	// lhz r8,2(r3)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r3.u32 + 2);
	// addi r11,r3,2
	ctx.r11.s64 = ctx.r3.s64 + 2;
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// b 0x830fc7f4
	goto loc_830FC7F4;
loc_830FC7F0:
	// lhzu r8,2(r11)
	ea = 2 + ctx.r11.u32;
	ctx.r8.u64 = PPC_LOAD_U16(ea);
	ctx.r11.u32 = ea;
loc_830FC7F4:
	// cmplwi r8,0
	ctx.cr0.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// bne 0x830fc7f0
	if (!ctx.cr0.eq) goto loc_830FC7F0;
	// subf r11,r9,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r9.s64;
	// li r3,-1
	ctx.r3.s64 = -1;
	// srawi r8,r11,1
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1) != 0);
	ctx.r8.s64 = ctx.r11.s32 >> 1;
loc_830FC808:
	// cmpwi cr6,r8,4
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 4, ctx.xer);
	// bltlr cr6
	if (ctx.cr6.lt) return;
	// lhz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r10.u32 + 0);
	// cmplwi cr6,r11,92
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 92, ctx.xer);
	// beq cr6,0x830fc838
	if (ctx.cr6.eq) goto loc_830FC838;
	// cmplwi cr6,r11,47
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 47, ctx.xer);
	// beq cr6,0x830fc838
	if (ctx.cr6.eq) goto loc_830FC838;
	// cmplwi cr6,r11,165
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 165, ctx.xer);
	// beq cr6,0x830fc838
	if (ctx.cr6.eq) goto loc_830FC838;
	// cmplwi cr6,r11,8361
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 8361, ctx.xer);
	// li r11,0
	ctx.r11.s64 = 0;
	// bne cr6,0x830fc83c
	if (!ctx.cr6.eq) goto loc_830FC83C;
loc_830FC838:
	// li r11,1
	ctx.r11.s64 = 1;
loc_830FC83C:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x830fc890
	if (ctx.cr0.eq) goto loc_830FC890;
	// lhz r11,2(r10)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r10.u32 + 2);
	// cmplwi cr6,r11,46
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 46, ctx.xer);
	// bne cr6,0x830fc890
	if (!ctx.cr6.eq) goto loc_830FC890;
	// lhz r11,4(r10)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r10.u32 + 4);
	// cmplwi cr6,r11,46
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 46, ctx.xer);
	// bne cr6,0x830fc890
	if (!ctx.cr6.eq) goto loc_830FC890;
	// lhz r11,6(r10)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r10.u32 + 6);
	// cmplwi cr6,r11,92
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 92, ctx.xer);
	// beq cr6,0x830fc884
	if (ctx.cr6.eq) goto loc_830FC884;
	// cmplwi cr6,r11,47
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 47, ctx.xer);
	// beq cr6,0x830fc884
	if (ctx.cr6.eq) goto loc_830FC884;
	// cmplwi cr6,r11,165
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 165, ctx.xer);
	// beq cr6,0x830fc884
	if (ctx.cr6.eq) goto loc_830FC884;
	// cmplwi cr6,r11,8361
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 8361, ctx.xer);
	// li r11,0
	ctx.r11.s64 = 0;
	// bne cr6,0x830fc888
	if (!ctx.cr6.eq) goto loc_830FC888;
loc_830FC884:
	// li r11,1
	ctx.r11.s64 = 1;
loc_830FC888:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x830fc8a4
	if (!ctx.cr0.eq) goto loc_830FC8A4;
loc_830FC890:
	// lhzu r11,2(r10)
	ea = 2 + ctx.r10.u32;
	ctx.r11.u64 = PPC_LOAD_U16(ea);
	ctx.r10.u32 = ea;
	// addi r8,r8,-1
	ctx.r8.s64 = ctx.r8.s64 + -1;
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x830fc808
	if (!ctx.cr0.eq) goto loc_830FC808;
	// blr 
	return;
loc_830FC8A4:
	// subf r11,r9,r10
	ctx.r11.s64 = ctx.r10.s64 - ctx.r9.s64;
	// srawi r3,r11,1
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1) != 0);
	ctx.r3.s64 = ctx.r11.s32 >> 1;
	// blr 
	return;
loc_830FC8B0:
	// li r3,-1
	ctx.r3.s64 = -1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830FC8B8"))) PPC_WEAK_FUNC(sub_830FC8B8);
PPC_FUNC_IMPL(__imp__sub_830FC8B8) {
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
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// li r3,28
	ctx.r3.s64 = 28;
	// bl 0x830dd390
	ctx.lr = 0x830FC8D4;
	sub_830DD390(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x830fc8f0
	if (ctx.cr0.eq) goto loc_830FC8F0;
	// li r5,28
	ctx.r5.s64 = 28;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x833a2b30
	ctx.lr = 0x830FC8EC;
	sub_833A2B30(ctx, base);
	// b 0x830fc8f4
	goto loc_830FC8F4;
loc_830FC8F0:
	// li r31,0
	ctx.r31.s64 = 0;
loc_830FC8F4:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8368fda4
	ctx.lr = 0x830FC8FC;
	__imp__RtlInitializeCriticalSection(ctx, base);
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

__attribute__((alias("__imp__sub_830FC914"))) PPC_WEAK_FUNC(sub_830FC914);
PPC_FUNC_IMPL(__imp__sub_830FC914) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_830FC918"))) PPC_WEAK_FUNC(sub_830FC918);
PPC_FUNC_IMPL(__imp__sub_830FC918) {
	PPC_FUNC_PROLOGUE();
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
	// beq cr6,0x830fca88
	if (ctx.cr6.eq) goto loc_830FCA88;
	// lhz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 0);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x830fca88
	if (ctx.cr0.eq) goto loc_830FCA88;
	// bl 0x830d58e8
	ctx.lr = 0x830FC94C;
	sub_830D58E8(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x830fc984
	if (ctx.cr0.eq) goto loc_830FC984;
	// lhz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 0);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x830fc984
	if (ctx.cr0.eq) goto loc_830FC984;
	// lhz r10,2(r3)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r3.u32 + 2);
	// addi r11,r3,2
	ctx.r11.s64 = ctx.r3.s64 + 2;
	// b 0x830fc970
	goto loc_830FC970;
loc_830FC96C:
	// lhzu r10,2(r11)
	ea = 2 + ctx.r11.u32;
	ctx.r10.u64 = PPC_LOAD_U16(ea);
	ctx.r11.u32 = ea;
loc_830FC970:
	// cmplwi r10,0
	ctx.cr0.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne 0x830fc96c
	if (!ctx.cr0.eq) goto loc_830FC96C;
	// subf r11,r3,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r3.s64;
	// srawi r11,r11,1
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 1;
	// b 0x830fc988
	goto loc_830FC988;
loc_830FC984:
	// li r11,0
	ctx.r11.s64 = 0;
loc_830FC988:
	// lhz r9,0(r3)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r3.u32 + 0);
	// mr r7,r11
	ctx.r7.u64 = ctx.r11.u64;
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
	// stw r30,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r30.u32);
	// cmplwi r9,0
	ctx.cr0.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq 0x830fca74
	if (ctx.cr0.eq) goto loc_830FCA74;
loc_830FC9A4:
	// cmpwi cr6,r7,3
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 3, ctx.xer);
	// blt cr6,0x830fca3c
	if (ctx.cr6.lt) goto loc_830FCA3C;
	// clrlwi r10,r9,16
	ctx.r10.u64 = ctx.r9.u32 & 0xFFFF;
	// cmplwi cr6,r10,92
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 92, ctx.xer);
	// beq cr6,0x830fc9d4
	if (ctx.cr6.eq) goto loc_830FC9D4;
	// cmplwi cr6,r10,47
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 47, ctx.xer);
	// beq cr6,0x830fc9d4
	if (ctx.cr6.eq) goto loc_830FC9D4;
	// cmplwi cr6,r10,165
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 165, ctx.xer);
	// beq cr6,0x830fc9d4
	if (ctx.cr6.eq) goto loc_830FC9D4;
	// cmplwi cr6,r10,8361
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 8361, ctx.xer);
	// li r10,0
	ctx.r10.s64 = 0;
	// bne cr6,0x830fc9d8
	if (!ctx.cr6.eq) goto loc_830FC9D8;
loc_830FC9D4:
	// li r10,1
	ctx.r10.s64 = 1;
loc_830FC9D8:
	// clrlwi. r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x830fca30
	if (ctx.cr0.eq) goto loc_830FCA30;
	// lhz r10,2(r3)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r3.u32 + 2);
	// cmplwi cr6,r10,46
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 46, ctx.xer);
	// bne cr6,0x830fca30
	if (!ctx.cr6.eq) goto loc_830FCA30;
	// lhz r10,4(r3)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r3.u32 + 4);
	// addi r8,r3,4
	ctx.r8.s64 = ctx.r3.s64 + 4;
	// cmplwi cr6,r10,92
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 92, ctx.xer);
	// beq cr6,0x830fca18
	if (ctx.cr6.eq) goto loc_830FCA18;
	// cmplwi cr6,r10,47
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 47, ctx.xer);
	// beq cr6,0x830fca18
	if (ctx.cr6.eq) goto loc_830FCA18;
	// cmplwi cr6,r10,165
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 165, ctx.xer);
	// beq cr6,0x830fca18
	if (ctx.cr6.eq) goto loc_830FCA18;
	// cmplwi cr6,r10,8361
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 8361, ctx.xer);
	// li r10,0
	ctx.r10.s64 = 0;
	// bne cr6,0x830fca1c
	if (!ctx.cr6.eq) goto loc_830FCA1C;
loc_830FCA18:
	// li r10,1
	ctx.r10.s64 = 1;
loc_830FCA1C:
	// clrlwi. r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x830fca30
	if (ctx.cr0.eq) goto loc_830FCA30;
	// mr r3,r8
	ctx.r3.u64 = ctx.r8.u64;
	// addi r7,r7,-2
	ctx.r7.s64 = ctx.r7.s64 + -2;
	// b 0x830fca68
	goto loc_830FCA68;
loc_830FCA30:
	// sth r9,0(r11)
	PPC_STORE_U16(ctx.r11.u32 + 0, ctx.r9.u16);
	// addi r7,r7,-1
	ctx.r7.s64 = ctx.r7.s64 + -1;
	// b 0x830fca60
	goto loc_830FCA60;
loc_830FCA3C:
	// cmpwi cr6,r7,1
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 1, ctx.xer);
	// bne cr6,0x830fca4c
	if (!ctx.cr6.eq) goto loc_830FCA4C;
	// sth r9,0(r11)
	PPC_STORE_U16(ctx.r11.u32 + 0, ctx.r9.u16);
	// b 0x830fca60
	goto loc_830FCA60;
loc_830FCA4C:
	// cmpwi cr6,r7,2
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 2, ctx.xer);
	// bne cr6,0x830fca68
	if (!ctx.cr6.eq) goto loc_830FCA68;
	// sth r9,0(r11)
	PPC_STORE_U16(ctx.r11.u32 + 0, ctx.r9.u16);
	// lhzu r10,2(r3)
	ea = 2 + ctx.r3.u32;
	ctx.r10.u64 = PPC_LOAD_U16(ea);
	ctx.r3.u32 = ea;
	// sthu r10,2(r11)
	ea = 2 + ctx.r11.u32;
	PPC_STORE_U16(ea, ctx.r10.u16);
	ctx.r11.u32 = ea;
loc_830FCA60:
	// addi r3,r3,2
	ctx.r3.s64 = ctx.r3.s64 + 2;
	// addi r11,r11,2
	ctx.r11.s64 = ctx.r11.s64 + 2;
loc_830FCA68:
	// lhz r9,0(r3)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r3.u32 + 0);
	// mr. r10,r9
	ctx.r10.u64 = ctx.r9.u64;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x830fc9a4
	if (!ctx.cr0.eq) goto loc_830FC9A4;
loc_830FCA74:
	// li r10,0
	ctx.r10.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// sth r10,0(r11)
	PPC_STORE_U16(ctx.r11.u32 + 0, ctx.r10.u16);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x831b3a50
	ctx.lr = 0x830FCA88;
	sub_831B3A50(ctx, base);
loc_830FCA88:
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

__attribute__((alias("__imp__sub_830FCAA0"))) PPC_WEAK_FUNC(sub_830FCAA0);
PPC_FUNC_IMPL(__imp__sub_830FCAA0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lwz r25,17952(r26)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r26.u32 + 17952);
	// lwz r16,23256(r28)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r28.u32 + 23256);
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x833a0194
	ctx.lr = 0x830FCAB0;
	__savegprlr_23(ctx, base);
	// addi r31,r1,-176
	ctx.r31.s64 = ctx.r1.s64 + -176;
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x830fcaf8
	if (ctx.cr6.eq) goto loc_830FCAF8;
	// lhz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 0);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x830fcaf8
	if (ctx.cr0.eq) goto loc_830FCAF8;
	// lhz r10,2(r3)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r3.u32 + 2);
	// addi r11,r3,2
	ctx.r11.s64 = ctx.r3.s64 + 2;
	// b 0x830fcae4
	goto loc_830FCAE4;
loc_830FCAE0:
	// lhzu r10,2(r11)
	ea = 2 + ctx.r11.u32;
	ctx.r10.u64 = PPC_LOAD_U16(ea);
	ctx.r11.u32 = ea;
loc_830FCAE4:
	// cmplwi r10,0
	ctx.cr0.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne 0x830fcae0
	if (!ctx.cr0.eq) goto loc_830FCAE0;
	// subf r11,r30,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r30.s64;
	// srawi r11,r11,1
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 1;
	// b 0x830fcafc
	goto loc_830FCAFC;
loc_830FCAF8:
	// li r11,0
	ctx.r11.s64 = 0;
loc_830FCAFC:
	// lwz r10,0(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// rlwinm r29,r11,1,0,30
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// lwz r11,4(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x830FCB1C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// stw r28,92(r31)
	PPC_STORE_U32(ctx.r31.u32 + 92, ctx.r28.u32);
	// stw r3,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r3.u32);
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x830FCB40;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r24,r3
	ctx.r24.u64 = ctx.r3.u64;
	// stw r28,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r28.u32);
	// stw r3,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r3.u32);
	// addi r23,r30,2
	ctx.r23.s64 = ctx.r30.s64 + 2;
	// li r26,1
	ctx.r26.s64 = 1;
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// bl 0x830fc7c8
	ctx.lr = 0x830FCB5C;
	sub_830FC7C8(ctx, base);
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// beq cr6,0x830fccc8
	if (ctx.cr6.eq) goto loc_830FCCC8;
loc_830FCB64:
	// add r25,r26,r3
	ctx.r25.u64 = ctx.r26.u64 + ctx.r3.u64;
	// mr r7,r28
	ctx.r7.u64 = ctx.r28.u64;
	// addi r29,r25,-1
	ctx.r29.s64 = ctx.r25.s64 + -1;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x830d7cd0
	ctx.lr = 0x830FCB84;
	sub_830D7CD0(ctx, base);
	// cmpwi r29,0
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// blt 0x830fccb0
	if (ctx.cr0.lt) goto loc_830FCCB0;
	// rlwinm r11,r29,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 1) & 0xFFFFFFFE;
	// add r10,r11,r27
	ctx.r10.u64 = ctx.r11.u64 + ctx.r27.u64;
loc_830FCB94:
	// lhz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r10.u32 + 0);
	// cmplwi cr6,r11,92
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 92, ctx.xer);
	// beq cr6,0x830fcbbc
	if (ctx.cr6.eq) goto loc_830FCBBC;
	// cmplwi cr6,r11,47
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 47, ctx.xer);
	// beq cr6,0x830fcbbc
	if (ctx.cr6.eq) goto loc_830FCBBC;
	// cmplwi cr6,r11,165
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 165, ctx.xer);
	// beq cr6,0x830fcbbc
	if (ctx.cr6.eq) goto loc_830FCBBC;
	// cmplwi cr6,r11,8361
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 8361, ctx.xer);
	// li r11,0
	ctx.r11.s64 = 0;
	// bne cr6,0x830fcbc0
	if (!ctx.cr6.eq) goto loc_830FCBC0;
loc_830FCBBC:
	// li r11,1
	ctx.r11.s64 = 1;
loc_830FCBC0:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x830fcbd4
	if (!ctx.cr0.eq) goto loc_830FCBD4;
	// addic. r29,r29,-1
	ctx.xer.ca = ctx.r29.u32 > 0;
	ctx.r29.s64 = ctx.r29.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// addi r10,r10,-2
	ctx.r10.s64 = ctx.r10.s64 + -2;
	// bge 0x830fcb94
	if (!ctx.cr0.lt) goto loc_830FCB94;
loc_830FCBD4:
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// blt cr6,0x830fccb0
	if (ctx.cr6.lt) goto loc_830FCCB0;
	// addi r11,r29,1
	ctx.r11.s64 = ctx.r29.s64 + 1;
	// rlwinm r11,r11,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// lhzx r11,r11,r30
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r11.u32 + ctx.r30.u32);
	// cmplwi cr6,r11,46
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 46, ctx.xer);
	// bne cr6,0x830fcc10
	if (!ctx.cr6.eq) goto loc_830FCC10;
	// addi r11,r29,2
	ctx.r11.s64 = ctx.r29.s64 + 2;
	// rlwinm r11,r11,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// lhzx r11,r11,r30
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r11.u32 + ctx.r30.u32);
	// cmplwi cr6,r11,46
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 46, ctx.xer);
	// bne cr6,0x830fcc10
	if (!ctx.cr6.eq) goto loc_830FCC10;
	// addi r11,r29,3
	ctx.r11.s64 = ctx.r29.s64 + 3;
	// cmpw cr6,r11,r25
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r25.s32, ctx.xer);
	// beq cr6,0x830fccb0
	if (ctx.cr6.eq) goto loc_830FCCB0;
loc_830FCC10:
	// mr r7,r28
	ctx.r7.u64 = ctx.r28.u64;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x830d7cd0
	ctx.lr = 0x830FCC28;
	sub_830D7CD0(ctx, base);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x830fcc60
	if (ctx.cr6.eq) goto loc_830FCC60;
	// lhz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r30.u32 + 0);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x830fcc60
	if (ctx.cr0.eq) goto loc_830FCC60;
	// lhz r10,0(r23)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r23.u32 + 0);
	// mr r11,r23
	ctx.r11.u64 = ctx.r23.u64;
	// b 0x830fcc4c
	goto loc_830FCC4C;
loc_830FCC48:
	// lhzu r10,2(r11)
	ea = 2 + ctx.r11.u32;
	ctx.r10.u64 = PPC_LOAD_U16(ea);
	ctx.r11.u32 = ea;
loc_830FCC4C:
	// cmplwi r10,0
	ctx.cr0.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne 0x830fcc48
	if (!ctx.cr0.eq) goto loc_830FCC48;
	// subf r11,r30,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r30.s64;
	// srawi r6,r11,1
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1) != 0);
	ctx.r6.s64 = ctx.r11.s32 >> 1;
	// b 0x830fcc64
	goto loc_830FCC64;
loc_830FCC60:
	// li r6,0
	ctx.r6.s64 = 0;
loc_830FCC64:
	// mr r7,r28
	ctx.r7.u64 = ctx.r28.u64;
	// addi r5,r25,3
	ctx.r5.s64 = ctx.r25.s64 + 3;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x830d7cd0
	ctx.lr = 0x830FCC78;
	sub_830D7CD0(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// sth r11,0(r30)
	PPC_STORE_U16(ctx.r30.u32 + 0, ctx.r11.u16);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x830d65b8
	ctx.lr = 0x830FCC8C;
	sub_830D65B8(ctx, base);
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x830d65b8
	ctx.lr = 0x830FCC98;
	sub_830D65B8(ctx, base);
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// bne cr6,0x830fcca8
	if (!ctx.cr6.eq) goto loc_830FCCA8;
	// li r26,1
	ctx.r26.s64 = 1;
	// b 0x830fccb4
	goto loc_830FCCB4;
loc_830FCCA8:
	// mr r26,r29
	ctx.r26.u64 = ctx.r29.u64;
	// b 0x830fccb4
	goto loc_830FCCB4;
loc_830FCCB0:
	// addi r26,r26,4
	ctx.r26.s64 = ctx.r26.s64 + 4;
loc_830FCCB4:
	// rlwinm r11,r26,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r26.u32 | (ctx.r26.u64 << 32), 1) & 0xFFFFFFFE;
	// add r3,r11,r30
	ctx.r3.u64 = ctx.r11.u64 + ctx.r30.u64;
	// bl 0x830fc7c8
	ctx.lr = 0x830FCCC0;
	sub_830FC7C8(ctx, base);
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// bne cr6,0x830fcb64
	if (!ctx.cr6.eq) goto loc_830FCB64;
loc_830FCCC8:
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r31,80
	ctx.r3.s64 = ctx.r31.s64 + 80;
	// bl 0x831b3a50
	ctx.lr = 0x830FCCD4;
	sub_831B3A50(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r31,88
	ctx.r3.s64 = ctx.r31.s64 + 88;
	// bl 0x831b3a50
	ctx.lr = 0x830FCCE0;
	sub_831B3A50(ctx, base);
	// addi r1,r31,176
	ctx.r1.s64 = ctx.r31.s64 + 176;
	// b 0x833a01e4
	__restgprlr_23(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_830FCAA8"))) PPC_WEAK_FUNC(sub_830FCAA8);
PPC_FUNC_IMPL(__imp__sub_830FCAA8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x833a0194
	ctx.lr = 0x830FCAB0;
	__savegprlr_23(ctx, base);
	// addi r31,r1,-176
	ctx.r31.s64 = ctx.r1.s64 + -176;
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x830fcaf8
	if (ctx.cr6.eq) goto loc_830FCAF8;
	// lhz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 0);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x830fcaf8
	if (ctx.cr0.eq) goto loc_830FCAF8;
	// lhz r10,2(r3)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r3.u32 + 2);
	// addi r11,r3,2
	ctx.r11.s64 = ctx.r3.s64 + 2;
	// b 0x830fcae4
	goto loc_830FCAE4;
loc_830FCAE0:
	// lhzu r10,2(r11)
	ea = 2 + ctx.r11.u32;
	ctx.r10.u64 = PPC_LOAD_U16(ea);
	ctx.r11.u32 = ea;
loc_830FCAE4:
	// cmplwi r10,0
	ctx.cr0.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne 0x830fcae0
	if (!ctx.cr0.eq) goto loc_830FCAE0;
	// subf r11,r30,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r30.s64;
	// srawi r11,r11,1
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 1;
	// b 0x830fcafc
	goto loc_830FCAFC;
loc_830FCAF8:
	// li r11,0
	ctx.r11.s64 = 0;
loc_830FCAFC:
	// lwz r10,0(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// rlwinm r29,r11,1,0,30
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// lwz r11,4(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x830FCB1C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// stw r28,92(r31)
	PPC_STORE_U32(ctx.r31.u32 + 92, ctx.r28.u32);
	// stw r3,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r3.u32);
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x830FCB40;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r24,r3
	ctx.r24.u64 = ctx.r3.u64;
	// stw r28,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r28.u32);
	// stw r3,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r3.u32);
	// addi r23,r30,2
	ctx.r23.s64 = ctx.r30.s64 + 2;
	// li r26,1
	ctx.r26.s64 = 1;
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// bl 0x830fc7c8
	ctx.lr = 0x830FCB5C;
	sub_830FC7C8(ctx, base);
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// beq cr6,0x830fccc8
	if (ctx.cr6.eq) goto loc_830FCCC8;
loc_830FCB64:
	// add r25,r26,r3
	ctx.r25.u64 = ctx.r26.u64 + ctx.r3.u64;
	// mr r7,r28
	ctx.r7.u64 = ctx.r28.u64;
	// addi r29,r25,-1
	ctx.r29.s64 = ctx.r25.s64 + -1;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x830d7cd0
	ctx.lr = 0x830FCB84;
	sub_830D7CD0(ctx, base);
	// cmpwi r29,0
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// blt 0x830fccb0
	if (ctx.cr0.lt) goto loc_830FCCB0;
	// rlwinm r11,r29,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 1) & 0xFFFFFFFE;
	// add r10,r11,r27
	ctx.r10.u64 = ctx.r11.u64 + ctx.r27.u64;
loc_830FCB94:
	// lhz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r10.u32 + 0);
	// cmplwi cr6,r11,92
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 92, ctx.xer);
	// beq cr6,0x830fcbbc
	if (ctx.cr6.eq) goto loc_830FCBBC;
	// cmplwi cr6,r11,47
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 47, ctx.xer);
	// beq cr6,0x830fcbbc
	if (ctx.cr6.eq) goto loc_830FCBBC;
	// cmplwi cr6,r11,165
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 165, ctx.xer);
	// beq cr6,0x830fcbbc
	if (ctx.cr6.eq) goto loc_830FCBBC;
	// cmplwi cr6,r11,8361
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 8361, ctx.xer);
	// li r11,0
	ctx.r11.s64 = 0;
	// bne cr6,0x830fcbc0
	if (!ctx.cr6.eq) goto loc_830FCBC0;
loc_830FCBBC:
	// li r11,1
	ctx.r11.s64 = 1;
loc_830FCBC0:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x830fcbd4
	if (!ctx.cr0.eq) goto loc_830FCBD4;
	// addic. r29,r29,-1
	ctx.xer.ca = ctx.r29.u32 > 0;
	ctx.r29.s64 = ctx.r29.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// addi r10,r10,-2
	ctx.r10.s64 = ctx.r10.s64 + -2;
	// bge 0x830fcb94
	if (!ctx.cr0.lt) goto loc_830FCB94;
loc_830FCBD4:
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// blt cr6,0x830fccb0
	if (ctx.cr6.lt) goto loc_830FCCB0;
	// addi r11,r29,1
	ctx.r11.s64 = ctx.r29.s64 + 1;
	// rlwinm r11,r11,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// lhzx r11,r11,r30
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r11.u32 + ctx.r30.u32);
	// cmplwi cr6,r11,46
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 46, ctx.xer);
	// bne cr6,0x830fcc10
	if (!ctx.cr6.eq) goto loc_830FCC10;
	// addi r11,r29,2
	ctx.r11.s64 = ctx.r29.s64 + 2;
	// rlwinm r11,r11,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// lhzx r11,r11,r30
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r11.u32 + ctx.r30.u32);
	// cmplwi cr6,r11,46
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 46, ctx.xer);
	// bne cr6,0x830fcc10
	if (!ctx.cr6.eq) goto loc_830FCC10;
	// addi r11,r29,3
	ctx.r11.s64 = ctx.r29.s64 + 3;
	// cmpw cr6,r11,r25
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r25.s32, ctx.xer);
	// beq cr6,0x830fccb0
	if (ctx.cr6.eq) goto loc_830FCCB0;
loc_830FCC10:
	// mr r7,r28
	ctx.r7.u64 = ctx.r28.u64;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x830d7cd0
	ctx.lr = 0x830FCC28;
	sub_830D7CD0(ctx, base);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x830fcc60
	if (ctx.cr6.eq) goto loc_830FCC60;
	// lhz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r30.u32 + 0);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x830fcc60
	if (ctx.cr0.eq) goto loc_830FCC60;
	// lhz r10,0(r23)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r23.u32 + 0);
	// mr r11,r23
	ctx.r11.u64 = ctx.r23.u64;
	// b 0x830fcc4c
	goto loc_830FCC4C;
loc_830FCC48:
	// lhzu r10,2(r11)
	ea = 2 + ctx.r11.u32;
	ctx.r10.u64 = PPC_LOAD_U16(ea);
	ctx.r11.u32 = ea;
loc_830FCC4C:
	// cmplwi r10,0
	ctx.cr0.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne 0x830fcc48
	if (!ctx.cr0.eq) goto loc_830FCC48;
	// subf r11,r30,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r30.s64;
	// srawi r6,r11,1
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1) != 0);
	ctx.r6.s64 = ctx.r11.s32 >> 1;
	// b 0x830fcc64
	goto loc_830FCC64;
loc_830FCC60:
	// li r6,0
	ctx.r6.s64 = 0;
loc_830FCC64:
	// mr r7,r28
	ctx.r7.u64 = ctx.r28.u64;
	// addi r5,r25,3
	ctx.r5.s64 = ctx.r25.s64 + 3;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x830d7cd0
	ctx.lr = 0x830FCC78;
	sub_830D7CD0(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// sth r11,0(r30)
	PPC_STORE_U16(ctx.r30.u32 + 0, ctx.r11.u16);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x830d65b8
	ctx.lr = 0x830FCC8C;
	sub_830D65B8(ctx, base);
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x830d65b8
	ctx.lr = 0x830FCC98;
	sub_830D65B8(ctx, base);
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// bne cr6,0x830fcca8
	if (!ctx.cr6.eq) goto loc_830FCCA8;
	// li r26,1
	ctx.r26.s64 = 1;
	// b 0x830fccb4
	goto loc_830FCCB4;
loc_830FCCA8:
	// mr r26,r29
	ctx.r26.u64 = ctx.r29.u64;
	// b 0x830fccb4
	goto loc_830FCCB4;
loc_830FCCB0:
	// addi r26,r26,4
	ctx.r26.s64 = ctx.r26.s64 + 4;
loc_830FCCB4:
	// rlwinm r11,r26,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r26.u32 | (ctx.r26.u64 << 32), 1) & 0xFFFFFFFE;
	// add r3,r11,r30
	ctx.r3.u64 = ctx.r11.u64 + ctx.r30.u64;
	// bl 0x830fc7c8
	ctx.lr = 0x830FCCC0;
	sub_830FC7C8(ctx, base);
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// bne cr6,0x830fcb64
	if (!ctx.cr6.eq) goto loc_830FCB64;
loc_830FCCC8:
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r31,80
	ctx.r3.s64 = ctx.r31.s64 + 80;
	// bl 0x831b3a50
	ctx.lr = 0x830FCCD4;
	sub_831B3A50(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r31,88
	ctx.r3.s64 = ctx.r31.s64 + 88;
	// bl 0x831b3a50
	ctx.lr = 0x830FCCE0;
	sub_831B3A50(ctx, base);
	// addi r1,r31,176
	ctx.r1.s64 = ctx.r31.s64 + 176;
	// b 0x833a01e4
	__restgprlr_23(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_830FCCE8"))) PPC_WEAK_FUNC(sub_830FCCE8);
PPC_FUNC_IMPL(__imp__sub_830FCCE8) {
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
	// addi r3,r31,88
	ctx.r3.s64 = ctx.r31.s64 + 88;
	// bl 0x831b4220
	ctx.lr = 0x830FCD00;
	sub_831B4220(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830FCD10"))) PPC_WEAK_FUNC(sub_830FCD10);
PPC_FUNC_IMPL(__imp__sub_830FCD10) {
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
	// addi r3,r31,80
	ctx.r3.s64 = ctx.r31.s64 + 80;
	// bl 0x831b4220
	ctx.lr = 0x830FCD28;
	sub_831B4220(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830FCD38"))) PPC_WEAK_FUNC(sub_830FCD38);
PPC_FUNC_IMPL(__imp__sub_830FCD38) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x833a01a0
	ctx.lr = 0x830FCD40;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// li r26,0
	ctx.r26.s64 = 0;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x830fcd8c
	if (ctx.cr6.eq) goto loc_830FCD8C;
	// lhz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 0);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x830fcd8c
	if (ctx.cr0.eq) goto loc_830FCD8C;
	// lhz r10,2(r3)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r3.u32 + 2);
	// addi r11,r3,2
	ctx.r11.s64 = ctx.r3.s64 + 2;
	// b 0x830fcd78
	goto loc_830FCD78;
loc_830FCD74:
	// lhzu r10,2(r11)
	ea = 2 + ctx.r11.u32;
	ctx.r10.u64 = PPC_LOAD_U16(ea);
	ctx.r11.u32 = ea;
loc_830FCD78:
	// cmplwi r10,0
	ctx.cr0.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne 0x830fcd74
	if (!ctx.cr0.eq) goto loc_830FCD74;
	// subf r11,r30,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r30.s64;
	// srawi r10,r11,1
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1) != 0);
	ctx.r10.s64 = ctx.r11.s32 >> 1;
	// b 0x830fcd90
	goto loc_830FCD90;
loc_830FCD8C:
	// mr r10,r26
	ctx.r10.u64 = ctx.r26.u64;
loc_830FCD90:
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// beq cr6,0x830fcdc8
	if (ctx.cr6.eq) goto loc_830FCDC8;
	// lhz r11,0(r27)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r27.u32 + 0);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x830fcdc8
	if (ctx.cr0.eq) goto loc_830FCDC8;
	// lhz r9,2(r27)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r27.u32 + 2);
	// addi r11,r27,2
	ctx.r11.s64 = ctx.r27.s64 + 2;
	// b 0x830fcdb4
	goto loc_830FCDB4;
loc_830FCDB0:
	// lhzu r9,2(r11)
	ea = 2 + ctx.r11.u32;
	ctx.r9.u64 = PPC_LOAD_U16(ea);
	ctx.r11.u32 = ea;
loc_830FCDB4:
	// cmplwi r9,0
	ctx.cr0.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne 0x830fcdb0
	if (!ctx.cr0.eq) goto loc_830FCDB0;
	// subf r11,r27,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r27.s64;
	// srawi r11,r11,1
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 1;
	// b 0x830fcdcc
	goto loc_830FCDCC;
loc_830FCDC8:
	// mr r11,r26
	ctx.r11.u64 = ctx.r26.u64;
loc_830FCDCC:
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lwz r9,0(r28)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// addi r11,r11,2
	ctx.r11.s64 = ctx.r11.s64 + 2;
	// rlwinm r4,r11,1,0,30
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz r11,4(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x830FCDEC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// sth r26,0(r3)
	PPC_STORE_U16(ctx.r3.u32 + 0, ctx.r26.u16);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x830fced8
	if (ctx.cr6.eq) goto loc_830FCED8;
	// lhz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r30.u32 + 0);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x830fced8
	if (ctx.cr0.eq) goto loc_830FCED8;
	// lhz r10,2(r30)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r30.u32 + 2);
	// addi r11,r30,2
	ctx.r11.s64 = ctx.r30.s64 + 2;
	// b 0x830fce18
	goto loc_830FCE18;
loc_830FCE14:
	// lhzu r10,2(r11)
	ea = 2 + ctx.r11.u32;
	ctx.r10.u64 = PPC_LOAD_U16(ea);
	ctx.r11.u32 = ea;
loc_830FCE18:
	// cmplwi r10,0
	ctx.cr0.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne 0x830fce14
	if (!ctx.cr0.eq) goto loc_830FCE14;
	// subf r11,r30,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r30.s64;
	// srawi r11,r11,1
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 1;
	// rlwinm r11,r11,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + ctx.r30.u64;
	// addi r11,r11,-2
	ctx.r11.s64 = ctx.r11.s64 + -2;
	// cmplw cr6,r11,r30
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r30.u32, ctx.xer);
	// blt cr6,0x830fced8
	if (ctx.cr6.lt) goto loc_830FCED8;
loc_830FCE3C:
	// lhz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r11.u32 + 0);
	// cmplwi cr6,r10,92
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 92, ctx.xer);
	// beq cr6,0x830fce64
	if (ctx.cr6.eq) goto loc_830FCE64;
	// cmplwi cr6,r10,47
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 47, ctx.xer);
	// beq cr6,0x830fce64
	if (ctx.cr6.eq) goto loc_830FCE64;
	// cmplwi cr6,r10,165
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 165, ctx.xer);
	// beq cr6,0x830fce64
	if (ctx.cr6.eq) goto loc_830FCE64;
	// cmplwi cr6,r10,8361
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 8361, ctx.xer);
	// mr r10,r26
	ctx.r10.u64 = ctx.r26.u64;
	// bne cr6,0x830fce68
	if (!ctx.cr6.eq) goto loc_830FCE68;
loc_830FCE64:
	// li r10,1
	ctx.r10.s64 = 1;
loc_830FCE68:
	// clrlwi. r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x830fce7c
	if (!ctx.cr0.eq) goto loc_830FCE7C;
	// addi r11,r11,-2
	ctx.r11.s64 = ctx.r11.s64 + -2;
	// cmplw cr6,r11,r30
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r30.u32, ctx.xer);
	// bge cr6,0x830fce3c
	if (!ctx.cr6.lt) goto loc_830FCE3C;
loc_830FCE7C:
	// cmplw cr6,r11,r30
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r30.u32, ctx.xer);
	// blt cr6,0x830fced8
	if (ctx.cr6.lt) goto loc_830FCED8;
	// subf r11,r30,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r30.s64;
	// mr r7,r28
	ctx.r7.u64 = ctx.r28.u64;
	// srawi r29,r11,1
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1) != 0);
	ctx.r29.s64 = ctx.r11.s32 >> 1;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r6,r29,1
	ctx.r6.s64 = ctx.r29.s64 + 1;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x830d7cd0
	ctx.lr = 0x830FCEA4;
	sub_830D7CD0(ctx, base);
	// addi r11,r29,1
	ctx.r11.s64 = ctx.r29.s64 + 1;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// rlwinm r11,r11,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// sthx r26,r11,r31
	PPC_STORE_U16(ctx.r11.u32 + ctx.r31.u32, ctx.r26.u16);
	// bl 0x830d65b8
	ctx.lr = 0x830FCEBC;
	sub_830D65B8(ctx, base);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x830fc918
	ctx.lr = 0x830FCEC8;
	sub_830FC918(ctx, base);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x830fcaa8
	ctx.lr = 0x830FCED4;
	sub_830FCAA8(ctx, base);
	// b 0x830fcee4
	goto loc_830FCEE4;
loc_830FCED8:
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x830d6950
	ctx.lr = 0x830FCEE4;
	sub_830D6950(ctx, base);
loc_830FCEE4:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x833a01f0
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_830FCEF0"))) PPC_WEAK_FUNC(sub_830FCEF0);
PPC_FUNC_IMPL(__imp__sub_830FCEF0) {
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
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// bl 0x830fc8b8
	ctx.lr = 0x830FCF14;
	sub_830FC8B8(ctx, base);
	// stw r3,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r3.u32);
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

__attribute__((alias("__imp__sub_830FCF30"))) PPC_WEAK_FUNC(sub_830FCF30);
PPC_FUNC_IMPL(__imp__sub_830FCF30) {
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
	// beq cr6,0x830fcf5c
	if (ctx.cr6.eq) goto loc_830FCF5C;
	// bl 0x830fc5c8
	ctx.lr = 0x830FCF54;
	sub_830FC5C8(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
loc_830FCF5C:
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

__attribute__((alias("__imp__sub_830FCF70"))) PPC_WEAK_FUNC(sub_830FCF70);
PPC_FUNC_IMPL(__imp__sub_830FCF70) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// b 0x82e04da0
	sub_82E04DA0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_830FCF78"))) PPC_WEAK_FUNC(sub_830FCF78);
PPC_FUNC_IMPL(__imp__sub_830FCF78) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// b 0x82e035b0
	sub_82E035B0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_830FCF80"))) PPC_WEAK_FUNC(sub_830FCF80);
PPC_FUNC_IMPL(__imp__sub_830FCF80) {
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
	// stw r4,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r4.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r3,0(r4)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// bl 0x82e04da0
	ctx.lr = 0x830FCFA0;
	sub_82E04DA0(ctx, base);
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

__attribute__((alias("__imp__sub_830FCFB8"))) PPC_WEAK_FUNC(sub_830FCFB8);
PPC_FUNC_IMPL(__imp__sub_830FCFB8) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r3,0(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// b 0x82e035b0
	sub_82E035B0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_830FCFC4"))) PPC_WEAK_FUNC(sub_830FCFC4);
PPC_FUNC_IMPL(__imp__sub_830FCFC4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_830FCFC8"))) PPC_WEAK_FUNC(sub_830FCFC8);
PPC_FUNC_IMPL(__imp__sub_830FCFC8) {
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
	// lwz r3,-4808(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -4808);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x830fcffc
	if (ctx.cr6.eq) goto loc_830FCFFC;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x830FCFFC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_830FCFFC:
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,-4808(r31)
	PPC_STORE_U32(ctx.r31.u32 + -4808, ctx.r11.u32);
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

__attribute__((alias("__imp__sub_830FD018"))) PPC_WEAK_FUNC(sub_830FD018);
PPC_FUNC_IMPL(__imp__sub_830FD018) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32228
	ctx.r11.s64 = -2112094208;
	// addi r11,r11,23376
	ctx.r11.s64 = ctx.r11.s64 + 23376;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830FD028"))) PPC_WEAK_FUNC(sub_830FD028);
PPC_FUNC_IMPL(__imp__sub_830FD028) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32228
	ctx.r11.s64 = -2112094208;
	// lwz r10,12(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// lwz r4,8(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// addi r11,r11,23420
	ctx.r11.s64 = ctx.r11.s64 + 23420;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// mr r3,r10
	ctx.r3.u64 = ctx.r10.u64;
	// lwz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_830FD050"))) PPC_WEAK_FUNC(sub_830FD050);
PPC_FUNC_IMPL(__imp__sub_830FD050) {
	PPC_FUNC_PROLOGUE();
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
	// lis r11,-32228
	ctx.r11.s64 = -2112094208;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// addi r11,r11,23420
	ctx.r11.s64 = ctx.r11.s64 + 23420;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r4,8(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x830FD090;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi. r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x830fd0a0
	if (ctx.cr0.eq) goto loc_830FD0A0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x830dd3e0
	ctx.lr = 0x830FD0A0;
	sub_830DD3E0(ctx, base);
loc_830FD0A0:
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

__attribute__((alias("__imp__sub_830FD0BC"))) PPC_WEAK_FUNC(sub_830FD0BC);
PPC_FUNC_IMPL(__imp__sub_830FD0BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_830FD0C0"))) PPC_WEAK_FUNC(sub_830FD0C0);
PPC_FUNC_IMPL(__imp__sub_830FD0C0) {
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
	// lis r11,-32228
	ctx.r11.s64 = -2112094208;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r11,r11,23420
	ctx.r11.s64 = ctx.r11.s64 + 23420;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// stw r6,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r6.u32);
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// stw r5,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r5.u32);
	// stw r10,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r10.u32);
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// bl 0x830d58e8
	ctx.lr = 0x830FD0FC;
	sub_830D58E8(ctx, base);
	// stw r3,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r3.u32);
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

__attribute__((alias("__imp__sub_830FD118"))) PPC_WEAK_FUNC(sub_830FD118);
PPC_FUNC_IMPL(__imp__sub_830FD118) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32228
	ctx.r11.s64 = -2112094208;
	// addi r11,r11,23436
	ctx.r11.s64 = ctx.r11.s64 + 23436;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830FD128"))) PPC_WEAK_FUNC(sub_830FD128);
PPC_FUNC_IMPL(__imp__sub_830FD128) {
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
	// lis r11,-32228
	ctx.r11.s64 = -2112094208;
	// lis r10,-31827
	ctx.r10.s64 = -2085814272;
	// addi r11,r11,23368
	ctx.r11.s64 = ctx.r11.s64 + 23368;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// lwz r4,-5084(r10)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + -5084);
	// bl 0x830d58e8
	ctx.lr = 0x830FD158;
	sub_830D58E8(ctx, base);
	// lis r11,-32228
	ctx.r11.s64 = -2112094208;
	// addi r11,r11,23472
	ctx.r11.s64 = ctx.r11.s64 + 23472;
	// stw r3,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r3.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
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

__attribute__((alias("__imp__sub_830FD180"))) PPC_WEAK_FUNC(sub_830FD180);
PPC_FUNC_IMPL(__imp__sub_830FD180) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lwz r25,17952(r26)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r26.u32 + 17952);
	// lwz r16,23488(r28)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r28.u32 + 23488);
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x833a01a8
	ctx.lr = 0x830FD190;
	__savegprlr_28(ctx, base);
	// addi r31,r1,-128
	ctx.r31.s64 = ctx.r1.s64 + -128;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// stw r5,164(r31)
	PPC_STORE_U32(ctx.r31.u32 + 164, ctx.r5.u32);
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// li r3,16
	ctx.r3.s64 = 16;
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// bl 0x830dd390
	ctx.lr = 0x830FD1B4;
	sub_830DD390(ctx, base);
	// stw r3,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r3.u32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x830fd1d4
	if (ctx.cr0.eq) goto loc_830FD1D4;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// lwz r4,4(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// bl 0x8314b2c8
	ctx.lr = 0x830FD1D0;
	sub_8314B2C8(ctx, base);
	// b 0x830fd1d8
	goto loc_830FD1D8;
loc_830FD1D4:
	// li r3,0
	ctx.r3.s64 = 0;
loc_830FD1D8:
	// addi r1,r31,128
	ctx.r1.s64 = ctx.r31.s64 + 128;
	// b 0x833a01f8
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_830FD188"))) PPC_WEAK_FUNC(sub_830FD188);
PPC_FUNC_IMPL(__imp__sub_830FD188) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x833a01a8
	ctx.lr = 0x830FD190;
	__savegprlr_28(ctx, base);
	// addi r31,r1,-128
	ctx.r31.s64 = ctx.r1.s64 + -128;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// stw r5,164(r31)
	PPC_STORE_U32(ctx.r31.u32 + 164, ctx.r5.u32);
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// li r3,16
	ctx.r3.s64 = 16;
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// bl 0x830dd390
	ctx.lr = 0x830FD1B4;
	sub_830DD390(ctx, base);
	// stw r3,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r3.u32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x830fd1d4
	if (ctx.cr0.eq) goto loc_830FD1D4;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// lwz r4,4(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// bl 0x8314b2c8
	ctx.lr = 0x830FD1D0;
	sub_8314B2C8(ctx, base);
	// b 0x830fd1d8
	goto loc_830FD1D8;
loc_830FD1D4:
	// li r3,0
	ctx.r3.s64 = 0;
loc_830FD1D8:
	// addi r1,r31,128
	ctx.r1.s64 = ctx.r31.s64 + 128;
	// b 0x833a01f8
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_830FD1E0"))) PPC_WEAK_FUNC(sub_830FD1E0);
PPC_FUNC_IMPL(__imp__sub_830FD1E0) {
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
	// lwz r4,164(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 164);
	// lwz r3,80(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	// bl 0x830dd3e0
	ctx.lr = 0x830FD1FC;
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

__attribute__((alias("__imp__sub_830FD20C"))) PPC_WEAK_FUNC(sub_830FD20C);
PPC_FUNC_IMPL(__imp__sub_830FD20C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_830FD210"))) PPC_WEAK_FUNC(sub_830FD210);
PPC_FUNC_IMPL(__imp__sub_830FD210) {
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
	// lis r11,-32228
	ctx.r11.s64 = -2112094208;
	// lis r10,-31827
	ctx.r10.s64 = -2085814272;
	// addi r11,r11,23368
	ctx.r11.s64 = ctx.r11.s64 + 23368;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// lwz r4,-5084(r10)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + -5084);
	// bl 0x830d58e8
	ctx.lr = 0x830FD240;
	sub_830D58E8(ctx, base);
	// lis r11,-32228
	ctx.r11.s64 = -2112094208;
	// addi r11,r11,23536
	ctx.r11.s64 = ctx.r11.s64 + 23536;
	// stw r3,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r3.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
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

__attribute__((alias("__imp__sub_830FD268"))) PPC_WEAK_FUNC(sub_830FD268);
PPC_FUNC_IMPL(__imp__sub_830FD268) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lwz r25,17952(r26)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r26.u32 + 17952);
	// lwz r16,23552(r28)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r28.u32 + 23552);
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x833a01a8
	ctx.lr = 0x830FD278;
	__savegprlr_28(ctx, base);
	// addi r31,r1,-128
	ctx.r31.s64 = ctx.r1.s64 + -128;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// stw r5,164(r31)
	PPC_STORE_U32(ctx.r31.u32 + 164, ctx.r5.u32);
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// li r3,16
	ctx.r3.s64 = 16;
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// bl 0x830dd390
	ctx.lr = 0x830FD29C;
	sub_830DD390(ctx, base);
	// stw r3,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r3.u32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x830fd2bc
	if (ctx.cr0.eq) goto loc_830FD2BC;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// lwz r4,4(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// bl 0x8314b3f8
	ctx.lr = 0x830FD2B8;
	sub_8314B3F8(ctx, base);
	// b 0x830fd2c0
	goto loc_830FD2C0;
loc_830FD2BC:
	// li r3,0
	ctx.r3.s64 = 0;
loc_830FD2C0:
	// addi r1,r31,128
	ctx.r1.s64 = ctx.r31.s64 + 128;
	// b 0x833a01f8
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_830FD270"))) PPC_WEAK_FUNC(sub_830FD270);
PPC_FUNC_IMPL(__imp__sub_830FD270) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x833a01a8
	ctx.lr = 0x830FD278;
	__savegprlr_28(ctx, base);
	// addi r31,r1,-128
	ctx.r31.s64 = ctx.r1.s64 + -128;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// stw r5,164(r31)
	PPC_STORE_U32(ctx.r31.u32 + 164, ctx.r5.u32);
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// li r3,16
	ctx.r3.s64 = 16;
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// bl 0x830dd390
	ctx.lr = 0x830FD29C;
	sub_830DD390(ctx, base);
	// stw r3,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r3.u32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x830fd2bc
	if (ctx.cr0.eq) goto loc_830FD2BC;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// lwz r4,4(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// bl 0x8314b3f8
	ctx.lr = 0x830FD2B8;
	sub_8314B3F8(ctx, base);
	// b 0x830fd2c0
	goto loc_830FD2C0;
loc_830FD2BC:
	// li r3,0
	ctx.r3.s64 = 0;
loc_830FD2C0:
	// addi r1,r31,128
	ctx.r1.s64 = ctx.r31.s64 + 128;
	// b 0x833a01f8
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_830FD2C8"))) PPC_WEAK_FUNC(sub_830FD2C8);
PPC_FUNC_IMPL(__imp__sub_830FD2C8) {
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
	// lwz r4,164(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 164);
	// lwz r3,80(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	// bl 0x830dd3e0
	ctx.lr = 0x830FD2E4;
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

__attribute__((alias("__imp__sub_830FD2F4"))) PPC_WEAK_FUNC(sub_830FD2F4);
PPC_FUNC_IMPL(__imp__sub_830FD2F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_830FD2F8"))) PPC_WEAK_FUNC(sub_830FD2F8);
PPC_FUNC_IMPL(__imp__sub_830FD2F8) {
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
	// lis r11,-32228
	ctx.r11.s64 = -2112094208;
	// lis r10,-31827
	ctx.r10.s64 = -2085814272;
	// addi r11,r11,23368
	ctx.r11.s64 = ctx.r11.s64 + 23368;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// lwz r4,-5084(r10)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + -5084);
	// bl 0x830d58e8
	ctx.lr = 0x830FD328;
	sub_830D58E8(ctx, base);
	// lis r11,-32228
	ctx.r11.s64 = -2112094208;
	// addi r11,r11,23600
	ctx.r11.s64 = ctx.r11.s64 + 23600;
	// stw r3,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r3.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
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

__attribute__((alias("__imp__sub_830FD350"))) PPC_WEAK_FUNC(sub_830FD350);
PPC_FUNC_IMPL(__imp__sub_830FD350) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lwz r25,17952(r26)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r26.u32 + 17952);
	// lwz r16,23616(r28)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r28.u32 + 23616);
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x833a01a8
	ctx.lr = 0x830FD360;
	__savegprlr_28(ctx, base);
	// addi r31,r1,-128
	ctx.r31.s64 = ctx.r1.s64 + -128;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// stw r5,164(r31)
	PPC_STORE_U32(ctx.r31.u32 + 164, ctx.r5.u32);
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// li r3,16
	ctx.r3.s64 = 16;
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// bl 0x830dd390
	ctx.lr = 0x830FD384;
	sub_830DD390(ctx, base);
	// stw r3,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r3.u32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x830fd3a4
	if (ctx.cr0.eq) goto loc_830FD3A4;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// lwz r4,4(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// bl 0x8314b8f8
	ctx.lr = 0x830FD3A0;
	sub_8314B8F8(ctx, base);
	// b 0x830fd3a8
	goto loc_830FD3A8;
loc_830FD3A4:
	// li r3,0
	ctx.r3.s64 = 0;
loc_830FD3A8:
	// addi r1,r31,128
	ctx.r1.s64 = ctx.r31.s64 + 128;
	// b 0x833a01f8
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_830FD358"))) PPC_WEAK_FUNC(sub_830FD358);
PPC_FUNC_IMPL(__imp__sub_830FD358) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x833a01a8
	ctx.lr = 0x830FD360;
	__savegprlr_28(ctx, base);
	// addi r31,r1,-128
	ctx.r31.s64 = ctx.r1.s64 + -128;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// stw r5,164(r31)
	PPC_STORE_U32(ctx.r31.u32 + 164, ctx.r5.u32);
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// li r3,16
	ctx.r3.s64 = 16;
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// bl 0x830dd390
	ctx.lr = 0x830FD384;
	sub_830DD390(ctx, base);
	// stw r3,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r3.u32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x830fd3a4
	if (ctx.cr0.eq) goto loc_830FD3A4;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// lwz r4,4(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// bl 0x8314b8f8
	ctx.lr = 0x830FD3A0;
	sub_8314B8F8(ctx, base);
	// b 0x830fd3a8
	goto loc_830FD3A8;
loc_830FD3A4:
	// li r3,0
	ctx.r3.s64 = 0;
loc_830FD3A8:
	// addi r1,r31,128
	ctx.r1.s64 = ctx.r31.s64 + 128;
	// b 0x833a01f8
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_830FD3B0"))) PPC_WEAK_FUNC(sub_830FD3B0);
PPC_FUNC_IMPL(__imp__sub_830FD3B0) {
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
	// lwz r4,164(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 164);
	// lwz r3,80(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	// bl 0x830dd3e0
	ctx.lr = 0x830FD3CC;
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

__attribute__((alias("__imp__sub_830FD3DC"))) PPC_WEAK_FUNC(sub_830FD3DC);
PPC_FUNC_IMPL(__imp__sub_830FD3DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_830FD3E0"))) PPC_WEAK_FUNC(sub_830FD3E0);
PPC_FUNC_IMPL(__imp__sub_830FD3E0) {
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
	// lis r11,-32228
	ctx.r11.s64 = -2112094208;
	// lis r10,-31827
	ctx.r10.s64 = -2085814272;
	// addi r11,r11,23368
	ctx.r11.s64 = ctx.r11.s64 + 23368;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// lwz r4,-5084(r10)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + -5084);
	// bl 0x830d58e8
	ctx.lr = 0x830FD410;
	sub_830D58E8(ctx, base);
	// lis r11,-32228
	ctx.r11.s64 = -2112094208;
	// addi r11,r11,23664
	ctx.r11.s64 = ctx.r11.s64 + 23664;
	// stw r3,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r3.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
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

__attribute__((alias("__imp__sub_830FD438"))) PPC_WEAK_FUNC(sub_830FD438);
PPC_FUNC_IMPL(__imp__sub_830FD438) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lwz r25,17952(r26)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r26.u32 + 17952);
	// lwz r16,23680(r28)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r28.u32 + 23680);
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x833a01a8
	ctx.lr = 0x830FD448;
	__savegprlr_28(ctx, base);
	// addi r31,r1,-128
	ctx.r31.s64 = ctx.r1.s64 + -128;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// stw r5,164(r31)
	PPC_STORE_U32(ctx.r31.u32 + 164, ctx.r5.u32);
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// li r3,16
	ctx.r3.s64 = 16;
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// bl 0x830dd390
	ctx.lr = 0x830FD46C;
	sub_830DD390(ctx, base);
	// stw r3,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r3.u32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x830fd48c
	if (ctx.cr0.eq) goto loc_830FD48C;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// lwz r4,4(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// bl 0x8314c0a0
	ctx.lr = 0x830FD488;
	sub_8314C0A0(ctx, base);
	// b 0x830fd490
	goto loc_830FD490;
loc_830FD48C:
	// li r3,0
	ctx.r3.s64 = 0;
loc_830FD490:
	// addi r1,r31,128
	ctx.r1.s64 = ctx.r31.s64 + 128;
	// b 0x833a01f8
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_830FD440"))) PPC_WEAK_FUNC(sub_830FD440);
PPC_FUNC_IMPL(__imp__sub_830FD440) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x833a01a8
	ctx.lr = 0x830FD448;
	__savegprlr_28(ctx, base);
	// addi r31,r1,-128
	ctx.r31.s64 = ctx.r1.s64 + -128;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// stw r5,164(r31)
	PPC_STORE_U32(ctx.r31.u32 + 164, ctx.r5.u32);
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// li r3,16
	ctx.r3.s64 = 16;
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// bl 0x830dd390
	ctx.lr = 0x830FD46C;
	sub_830DD390(ctx, base);
	// stw r3,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r3.u32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x830fd48c
	if (ctx.cr0.eq) goto loc_830FD48C;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// lwz r4,4(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// bl 0x8314c0a0
	ctx.lr = 0x830FD488;
	sub_8314C0A0(ctx, base);
	// b 0x830fd490
	goto loc_830FD490;
loc_830FD48C:
	// li r3,0
	ctx.r3.s64 = 0;
loc_830FD490:
	// addi r1,r31,128
	ctx.r1.s64 = ctx.r31.s64 + 128;
	// b 0x833a01f8
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_830FD498"))) PPC_WEAK_FUNC(sub_830FD498);
PPC_FUNC_IMPL(__imp__sub_830FD498) {
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
	// lwz r4,164(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 164);
	// lwz r3,80(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	// bl 0x830dd3e0
	ctx.lr = 0x830FD4B4;
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

__attribute__((alias("__imp__sub_830FD4C4"))) PPC_WEAK_FUNC(sub_830FD4C4);
PPC_FUNC_IMPL(__imp__sub_830FD4C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_830FD4C8"))) PPC_WEAK_FUNC(sub_830FD4C8);
PPC_FUNC_IMPL(__imp__sub_830FD4C8) {
	PPC_FUNC_PROLOGUE();
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
	// lis r11,-32228
	ctx.r11.s64 = -2112094208;
	// lis r10,-31827
	ctx.r10.s64 = -2085814272;
	// addi r11,r11,23368
	ctx.r11.s64 = ctx.r11.s64 + 23368;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// lwz r4,-5084(r10)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + -5084);
	// bl 0x830d58e8
	ctx.lr = 0x830FD500;
	sub_830D58E8(ctx, base);
	// lis r11,-32228
	ctx.r11.s64 = -2112094208;
	// addi r11,r11,23728
	ctx.r11.s64 = ctx.r11.s64 + 23728;
	// stw r3,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r3.u32);
	// stb r30,8(r31)
	PPC_STORE_U8(ctx.r31.u32 + 8, ctx.r30.u8);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
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

__attribute__((alias("__imp__sub_830FD530"))) PPC_WEAK_FUNC(sub_830FD530);
PPC_FUNC_IMPL(__imp__sub_830FD530) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lwz r25,17952(r26)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r26.u32 + 17952);
	// lwz r16,23744(r28)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r28.u32 + 23744);
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x833a01a8
	ctx.lr = 0x830FD540;
	__savegprlr_28(ctx, base);
	// addi r31,r1,-128
	ctx.r31.s64 = ctx.r1.s64 + -128;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// stw r5,164(r31)
	PPC_STORE_U32(ctx.r31.u32 + 164, ctx.r5.u32);
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// li r3,20
	ctx.r3.s64 = 20;
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// bl 0x830dd390
	ctx.lr = 0x830FD564;
	sub_830DD390(ctx, base);
	// stw r3,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r3.u32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x830fd588
	if (ctx.cr0.eq) goto loc_830FD588;
	// mr r7,r29
	ctx.r7.u64 = ctx.r29.u64;
	// lwz r4,4(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// lbz r6,8(r30)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r30.u32 + 8);
	// bl 0x8314c2b8
	ctx.lr = 0x830FD584;
	sub_8314C2B8(ctx, base);
	// b 0x830fd58c
	goto loc_830FD58C;
loc_830FD588:
	// li r3,0
	ctx.r3.s64 = 0;
loc_830FD58C:
	// addi r1,r31,128
	ctx.r1.s64 = ctx.r31.s64 + 128;
	// b 0x833a01f8
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_830FD538"))) PPC_WEAK_FUNC(sub_830FD538);
PPC_FUNC_IMPL(__imp__sub_830FD538) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x833a01a8
	ctx.lr = 0x830FD540;
	__savegprlr_28(ctx, base);
	// addi r31,r1,-128
	ctx.r31.s64 = ctx.r1.s64 + -128;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// stw r5,164(r31)
	PPC_STORE_U32(ctx.r31.u32 + 164, ctx.r5.u32);
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// li r3,20
	ctx.r3.s64 = 20;
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// bl 0x830dd390
	ctx.lr = 0x830FD564;
	sub_830DD390(ctx, base);
	// stw r3,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r3.u32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x830fd588
	if (ctx.cr0.eq) goto loc_830FD588;
	// mr r7,r29
	ctx.r7.u64 = ctx.r29.u64;
	// lwz r4,4(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// lbz r6,8(r30)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r30.u32 + 8);
	// bl 0x8314c2b8
	ctx.lr = 0x830FD584;
	sub_8314C2B8(ctx, base);
	// b 0x830fd58c
	goto loc_830FD58C;
loc_830FD588:
	// li r3,0
	ctx.r3.s64 = 0;
loc_830FD58C:
	// addi r1,r31,128
	ctx.r1.s64 = ctx.r31.s64 + 128;
	// b 0x833a01f8
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_830FD594"))) PPC_WEAK_FUNC(sub_830FD594);
PPC_FUNC_IMPL(__imp__sub_830FD594) {
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
	// lwz r4,164(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 164);
	// lwz r3,80(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	// bl 0x830dd3e0
	ctx.lr = 0x830FD5B0;
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

__attribute__((alias("__imp__sub_830FD5C0"))) PPC_WEAK_FUNC(sub_830FD5C0);
PPC_FUNC_IMPL(__imp__sub_830FD5C0) {
	PPC_FUNC_PROLOGUE();
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
	// lis r11,-32228
	ctx.r11.s64 = -2112094208;
	// lis r10,-31827
	ctx.r10.s64 = -2085814272;
	// addi r11,r11,23368
	ctx.r11.s64 = ctx.r11.s64 + 23368;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// lwz r4,-5084(r10)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + -5084);
	// bl 0x830d58e8
	ctx.lr = 0x830FD5F8;
	sub_830D58E8(ctx, base);
	// lis r11,-32228
	ctx.r11.s64 = -2112094208;
	// addi r11,r11,23792
	ctx.r11.s64 = ctx.r11.s64 + 23792;
	// stw r3,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r3.u32);
	// stb r30,8(r31)
	PPC_STORE_U8(ctx.r31.u32 + 8, ctx.r30.u8);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
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

__attribute__((alias("__imp__sub_830FD628"))) PPC_WEAK_FUNC(sub_830FD628);
PPC_FUNC_IMPL(__imp__sub_830FD628) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lwz r25,17952(r26)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r26.u32 + 17952);
	// lwz r16,23808(r28)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r28.u32 + 23808);
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x833a01a8
	ctx.lr = 0x830FD638;
	__savegprlr_28(ctx, base);
	// addi r31,r1,-128
	ctx.r31.s64 = ctx.r1.s64 + -128;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// stw r5,164(r31)
	PPC_STORE_U32(ctx.r31.u32 + 164, ctx.r5.u32);
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// li r3,20
	ctx.r3.s64 = 20;
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// bl 0x830dd390
	ctx.lr = 0x830FD65C;
	sub_830DD390(ctx, base);
	// stw r3,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r3.u32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x830fd680
	if (ctx.cr0.eq) goto loc_830FD680;
	// mr r7,r29
	ctx.r7.u64 = ctx.r29.u64;
	// lwz r4,4(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// lbz r6,8(r30)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r30.u32 + 8);
	// bl 0x8314c490
	ctx.lr = 0x830FD67C;
	sub_8314C490(ctx, base);
	// b 0x830fd684
	goto loc_830FD684;
loc_830FD680:
	// li r3,0
	ctx.r3.s64 = 0;
loc_830FD684:
	// addi r1,r31,128
	ctx.r1.s64 = ctx.r31.s64 + 128;
	// b 0x833a01f8
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_830FD630"))) PPC_WEAK_FUNC(sub_830FD630);
PPC_FUNC_IMPL(__imp__sub_830FD630) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x833a01a8
	ctx.lr = 0x830FD638;
	__savegprlr_28(ctx, base);
	// addi r31,r1,-128
	ctx.r31.s64 = ctx.r1.s64 + -128;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// stw r5,164(r31)
	PPC_STORE_U32(ctx.r31.u32 + 164, ctx.r5.u32);
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// li r3,20
	ctx.r3.s64 = 20;
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// bl 0x830dd390
	ctx.lr = 0x830FD65C;
	sub_830DD390(ctx, base);
	// stw r3,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r3.u32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x830fd680
	if (ctx.cr0.eq) goto loc_830FD680;
	// mr r7,r29
	ctx.r7.u64 = ctx.r29.u64;
	// lwz r4,4(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// lbz r6,8(r30)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r30.u32 + 8);
	// bl 0x8314c490
	ctx.lr = 0x830FD67C;
	sub_8314C490(ctx, base);
	// b 0x830fd684
	goto loc_830FD684;
loc_830FD680:
	// li r3,0
	ctx.r3.s64 = 0;
loc_830FD684:
	// addi r1,r31,128
	ctx.r1.s64 = ctx.r31.s64 + 128;
	// b 0x833a01f8
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_830FD68C"))) PPC_WEAK_FUNC(sub_830FD68C);
PPC_FUNC_IMPL(__imp__sub_830FD68C) {
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
	// lwz r4,164(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 164);
	// lwz r3,80(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	// bl 0x830dd3e0
	ctx.lr = 0x830FD6A8;
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

__attribute__((alias("__imp__sub_830FD6B8"))) PPC_WEAK_FUNC(sub_830FD6B8);
PPC_FUNC_IMPL(__imp__sub_830FD6B8) {
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
	// lis r11,-32228
	ctx.r11.s64 = -2112094208;
	// lis r10,-31827
	ctx.r10.s64 = -2085814272;
	// addi r11,r11,23368
	ctx.r11.s64 = ctx.r11.s64 + 23368;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// lwz r4,-5084(r10)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + -5084);
	// bl 0x830d58e8
	ctx.lr = 0x830FD6E8;
	sub_830D58E8(ctx, base);
	// lis r11,-32228
	ctx.r11.s64 = -2112094208;
	// addi r11,r11,23856
	ctx.r11.s64 = ctx.r11.s64 + 23856;
	// stw r3,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r3.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
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

__attribute__((alias("__imp__sub_830FD710"))) PPC_WEAK_FUNC(sub_830FD710);
PPC_FUNC_IMPL(__imp__sub_830FD710) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lwz r25,17952(r26)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r26.u32 + 17952);
	// lwz r16,23872(r28)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r28.u32 + 23872);
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x833a01a8
	ctx.lr = 0x830FD720;
	__savegprlr_28(ctx, base);
	// addi r31,r1,-128
	ctx.r31.s64 = ctx.r1.s64 + -128;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// stw r5,164(r31)
	PPC_STORE_U32(ctx.r31.u32 + 164, ctx.r5.u32);
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// li r3,28
	ctx.r3.s64 = 28;
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// bl 0x830dd390
	ctx.lr = 0x830FD744;
	sub_830DD390(ctx, base);
	// stw r3,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r3.u32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x830fd764
	if (ctx.cr0.eq) goto loc_830FD764;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// lwz r4,4(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// bl 0x8313d368
	ctx.lr = 0x830FD760;
	sub_8313D368(ctx, base);
	// b 0x830fd768
	goto loc_830FD768;
loc_830FD764:
	// li r3,0
	ctx.r3.s64 = 0;
loc_830FD768:
	// addi r1,r31,128
	ctx.r1.s64 = ctx.r31.s64 + 128;
	// b 0x833a01f8
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_830FD718"))) PPC_WEAK_FUNC(sub_830FD718);
PPC_FUNC_IMPL(__imp__sub_830FD718) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x833a01a8
	ctx.lr = 0x830FD720;
	__savegprlr_28(ctx, base);
	// addi r31,r1,-128
	ctx.r31.s64 = ctx.r1.s64 + -128;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// stw r5,164(r31)
	PPC_STORE_U32(ctx.r31.u32 + 164, ctx.r5.u32);
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// li r3,28
	ctx.r3.s64 = 28;
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// bl 0x830dd390
	ctx.lr = 0x830FD744;
	sub_830DD390(ctx, base);
	// stw r3,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r3.u32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x830fd764
	if (ctx.cr0.eq) goto loc_830FD764;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// lwz r4,4(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// bl 0x8313d368
	ctx.lr = 0x830FD760;
	sub_8313D368(ctx, base);
	// b 0x830fd768
	goto loc_830FD768;
loc_830FD764:
	// li r3,0
	ctx.r3.s64 = 0;
loc_830FD768:
	// addi r1,r31,128
	ctx.r1.s64 = ctx.r31.s64 + 128;
	// b 0x833a01f8
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_830FD770"))) PPC_WEAK_FUNC(sub_830FD770);
PPC_FUNC_IMPL(__imp__sub_830FD770) {
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
	// lwz r4,164(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 164);
	// lwz r3,80(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	// bl 0x830dd3e0
	ctx.lr = 0x830FD78C;
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

__attribute__((alias("__imp__sub_830FD79C"))) PPC_WEAK_FUNC(sub_830FD79C);
PPC_FUNC_IMPL(__imp__sub_830FD79C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_830FD7A0"))) PPC_WEAK_FUNC(sub_830FD7A0);
PPC_FUNC_IMPL(__imp__sub_830FD7A0) {
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
	// lis r11,-32228
	ctx.r11.s64 = -2112094208;
	// lis r10,-31827
	ctx.r10.s64 = -2085814272;
	// addi r11,r11,23368
	ctx.r11.s64 = ctx.r11.s64 + 23368;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// lwz r4,-5084(r10)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + -5084);
	// bl 0x830d58e8
	ctx.lr = 0x830FD7D0;
	sub_830D58E8(ctx, base);
	// lis r11,-32228
	ctx.r11.s64 = -2112094208;
	// addi r11,r11,23920
	ctx.r11.s64 = ctx.r11.s64 + 23920;
	// stw r3,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r3.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
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

__attribute__((alias("__imp__sub_830FD7F8"))) PPC_WEAK_FUNC(sub_830FD7F8);
PPC_FUNC_IMPL(__imp__sub_830FD7F8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lwz r25,17952(r26)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r26.u32 + 17952);
	// lwz r16,23936(r28)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r28.u32 + 23936);
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x833a01a8
	ctx.lr = 0x830FD808;
	__savegprlr_28(ctx, base);
	// addi r31,r1,-128
	ctx.r31.s64 = ctx.r1.s64 + -128;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// stw r5,164(r31)
	PPC_STORE_U32(ctx.r31.u32 + 164, ctx.r5.u32);
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// li r3,28
	ctx.r3.s64 = 28;
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// bl 0x830dd390
	ctx.lr = 0x830FD82C;
	sub_830DD390(ctx, base);
	// stw r3,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r3.u32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x830fd84c
	if (ctx.cr0.eq) goto loc_830FD84C;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// lwz r4,4(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// bl 0x8314c740
	ctx.lr = 0x830FD848;
	sub_8314C740(ctx, base);
	// b 0x830fd850
	goto loc_830FD850;
loc_830FD84C:
	// li r3,0
	ctx.r3.s64 = 0;
loc_830FD850:
	// addi r1,r31,128
	ctx.r1.s64 = ctx.r31.s64 + 128;
	// b 0x833a01f8
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_830FD800"))) PPC_WEAK_FUNC(sub_830FD800);
PPC_FUNC_IMPL(__imp__sub_830FD800) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x833a01a8
	ctx.lr = 0x830FD808;
	__savegprlr_28(ctx, base);
	// addi r31,r1,-128
	ctx.r31.s64 = ctx.r1.s64 + -128;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// stw r5,164(r31)
	PPC_STORE_U32(ctx.r31.u32 + 164, ctx.r5.u32);
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// li r3,28
	ctx.r3.s64 = 28;
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// bl 0x830dd390
	ctx.lr = 0x830FD82C;
	sub_830DD390(ctx, base);
	// stw r3,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r3.u32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x830fd84c
	if (ctx.cr0.eq) goto loc_830FD84C;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// lwz r4,4(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// bl 0x8314c740
	ctx.lr = 0x830FD848;
	sub_8314C740(ctx, base);
	// b 0x830fd850
	goto loc_830FD850;
loc_830FD84C:
	// li r3,0
	ctx.r3.s64 = 0;
loc_830FD850:
	// addi r1,r31,128
	ctx.r1.s64 = ctx.r31.s64 + 128;
	// b 0x833a01f8
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_830FD858"))) PPC_WEAK_FUNC(sub_830FD858);
PPC_FUNC_IMPL(__imp__sub_830FD858) {
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
	// lwz r4,164(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 164);
	// lwz r3,80(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	// bl 0x830dd3e0
	ctx.lr = 0x830FD874;
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

__attribute__((alias("__imp__sub_830FD884"))) PPC_WEAK_FUNC(sub_830FD884);
PPC_FUNC_IMPL(__imp__sub_830FD884) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_830FD888"))) PPC_WEAK_FUNC(sub_830FD888);
PPC_FUNC_IMPL(__imp__sub_830FD888) {
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
	// lis r11,-32228
	ctx.r11.s64 = -2112094208;
	// lis r10,-31827
	ctx.r10.s64 = -2085814272;
	// addi r11,r11,23368
	ctx.r11.s64 = ctx.r11.s64 + 23368;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// lwz r4,-5084(r10)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + -5084);
	// bl 0x830d58e8
	ctx.lr = 0x830FD8B8;
	sub_830D58E8(ctx, base);
	// lis r11,-32228
	ctx.r11.s64 = -2112094208;
	// addi r11,r11,23984
	ctx.r11.s64 = ctx.r11.s64 + 23984;
	// stw r3,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r3.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
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

__attribute__((alias("__imp__sub_830FD8E0"))) PPC_WEAK_FUNC(sub_830FD8E0);
PPC_FUNC_IMPL(__imp__sub_830FD8E0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lwz r25,17952(r26)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r26.u32 + 17952);
	// lwz r16,24000(r28)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r28.u32 + 24000);
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x833a01a8
	ctx.lr = 0x830FD8F0;
	__savegprlr_28(ctx, base);
	// addi r31,r1,-128
	ctx.r31.s64 = ctx.r1.s64 + -128;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// stw r5,164(r31)
	PPC_STORE_U32(ctx.r31.u32 + 164, ctx.r5.u32);
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// li r3,28
	ctx.r3.s64 = 28;
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// bl 0x830dd390
	ctx.lr = 0x830FD914;
	sub_830DD390(ctx, base);
	// stw r3,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r3.u32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x830fd934
	if (ctx.cr0.eq) goto loc_830FD934;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// lwz r4,4(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// bl 0x8314c790
	ctx.lr = 0x830FD930;
	sub_8314C790(ctx, base);
	// b 0x830fd938
	goto loc_830FD938;
loc_830FD934:
	// li r3,0
	ctx.r3.s64 = 0;
loc_830FD938:
	// addi r1,r31,128
	ctx.r1.s64 = ctx.r31.s64 + 128;
	// b 0x833a01f8
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_830FD8E8"))) PPC_WEAK_FUNC(sub_830FD8E8);
PPC_FUNC_IMPL(__imp__sub_830FD8E8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x833a01a8
	ctx.lr = 0x830FD8F0;
	__savegprlr_28(ctx, base);
	// addi r31,r1,-128
	ctx.r31.s64 = ctx.r1.s64 + -128;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// stw r5,164(r31)
	PPC_STORE_U32(ctx.r31.u32 + 164, ctx.r5.u32);
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// li r3,28
	ctx.r3.s64 = 28;
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// bl 0x830dd390
	ctx.lr = 0x830FD914;
	sub_830DD390(ctx, base);
	// stw r3,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r3.u32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x830fd934
	if (ctx.cr0.eq) goto loc_830FD934;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// lwz r4,4(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// bl 0x8314c790
	ctx.lr = 0x830FD930;
	sub_8314C790(ctx, base);
	// b 0x830fd938
	goto loc_830FD938;
loc_830FD934:
	// li r3,0
	ctx.r3.s64 = 0;
loc_830FD938:
	// addi r1,r31,128
	ctx.r1.s64 = ctx.r31.s64 + 128;
	// b 0x833a01f8
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_830FD940"))) PPC_WEAK_FUNC(sub_830FD940);
PPC_FUNC_IMPL(__imp__sub_830FD940) {
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
	// lwz r4,164(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 164);
	// lwz r3,80(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	// bl 0x830dd3e0
	ctx.lr = 0x830FD95C;
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

__attribute__((alias("__imp__sub_830FD96C"))) PPC_WEAK_FUNC(sub_830FD96C);
PPC_FUNC_IMPL(__imp__sub_830FD96C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_830FD970"))) PPC_WEAK_FUNC(sub_830FD970);
PPC_FUNC_IMPL(__imp__sub_830FD970) {
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
	// lis r11,-32228
	ctx.r11.s64 = -2112094208;
	// lis r10,-31827
	ctx.r10.s64 = -2085814272;
	// addi r11,r11,23368
	ctx.r11.s64 = ctx.r11.s64 + 23368;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// lwz r4,-5084(r10)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + -5084);
	// bl 0x830d58e8
	ctx.lr = 0x830FD9A0;
	sub_830D58E8(ctx, base);
	// lis r11,-32228
	ctx.r11.s64 = -2112094208;
	// addi r11,r11,24048
	ctx.r11.s64 = ctx.r11.s64 + 24048;
	// stw r3,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r3.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
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

__attribute__((alias("__imp__sub_830FD9C8"))) PPC_WEAK_FUNC(sub_830FD9C8);
PPC_FUNC_IMPL(__imp__sub_830FD9C8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lwz r25,17952(r26)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r26.u32 + 17952);
	// lwz r16,24064(r28)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r28.u32 + 24064);
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x833a01a8
	ctx.lr = 0x830FD9D8;
	__savegprlr_28(ctx, base);
	// addi r31,r1,-128
	ctx.r31.s64 = ctx.r1.s64 + -128;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// stw r5,164(r31)
	PPC_STORE_U32(ctx.r31.u32 + 164, ctx.r5.u32);
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// li r3,28
	ctx.r3.s64 = 28;
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// bl 0x830dd390
	ctx.lr = 0x830FD9FC;
	sub_830DD390(ctx, base);
	// stw r3,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r3.u32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x830fda1c
	if (ctx.cr0.eq) goto loc_830FDA1C;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// lwz r4,4(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// bl 0x8314c7e0
	ctx.lr = 0x830FDA18;
	sub_8314C7E0(ctx, base);
	// b 0x830fda20
	goto loc_830FDA20;
loc_830FDA1C:
	// li r3,0
	ctx.r3.s64 = 0;
loc_830FDA20:
	// addi r1,r31,128
	ctx.r1.s64 = ctx.r31.s64 + 128;
	// b 0x833a01f8
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_830FD9D0"))) PPC_WEAK_FUNC(sub_830FD9D0);
PPC_FUNC_IMPL(__imp__sub_830FD9D0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x833a01a8
	ctx.lr = 0x830FD9D8;
	__savegprlr_28(ctx, base);
	// addi r31,r1,-128
	ctx.r31.s64 = ctx.r1.s64 + -128;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// stw r5,164(r31)
	PPC_STORE_U32(ctx.r31.u32 + 164, ctx.r5.u32);
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// li r3,28
	ctx.r3.s64 = 28;
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// bl 0x830dd390
	ctx.lr = 0x830FD9FC;
	sub_830DD390(ctx, base);
	// stw r3,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r3.u32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x830fda1c
	if (ctx.cr0.eq) goto loc_830FDA1C;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// lwz r4,4(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// bl 0x8314c7e0
	ctx.lr = 0x830FDA18;
	sub_8314C7E0(ctx, base);
	// b 0x830fda20
	goto loc_830FDA20;
loc_830FDA1C:
	// li r3,0
	ctx.r3.s64 = 0;
loc_830FDA20:
	// addi r1,r31,128
	ctx.r1.s64 = ctx.r31.s64 + 128;
	// b 0x833a01f8
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_830FDA28"))) PPC_WEAK_FUNC(sub_830FDA28);
PPC_FUNC_IMPL(__imp__sub_830FDA28) {
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
	// lwz r4,164(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 164);
	// lwz r3,80(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	// bl 0x830dd3e0
	ctx.lr = 0x830FDA44;
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

__attribute__((alias("__imp__sub_830FDA54"))) PPC_WEAK_FUNC(sub_830FDA54);
PPC_FUNC_IMPL(__imp__sub_830FDA54) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_830FDA58"))) PPC_WEAK_FUNC(sub_830FDA58);
PPC_FUNC_IMPL(__imp__sub_830FDA58) {
	PPC_FUNC_PROLOGUE();
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
	// lis r11,-32228
	ctx.r11.s64 = -2112094208;
	// lis r10,-31827
	ctx.r10.s64 = -2085814272;
	// addi r11,r11,23368
	ctx.r11.s64 = ctx.r11.s64 + 23368;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// lwz r4,4(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r3,-5084(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + -5084);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x830FDA9C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi. r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x830fdaac
	if (ctx.cr0.eq) goto loc_830FDAAC;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x830dd3e0
	ctx.lr = 0x830FDAAC;
	sub_830DD3E0(ctx, base);
loc_830FDAAC:
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

__attribute__((alias("__imp__sub_830FDAC8"))) PPC_WEAK_FUNC(sub_830FDAC8);
PPC_FUNC_IMPL(__imp__sub_830FDAC8) {
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
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r11,r11,23376
	ctx.r11.s64 = ctx.r11.s64 + 23376;
	// clrlwi. r10,r4,31
	ctx.r10.u64 = ctx.r4.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// beq 0x830fdaf4
	if (ctx.cr0.eq) goto loc_830FDAF4;
	// bl 0x830dd3e0
	ctx.lr = 0x830FDAF4;
	sub_830DD3E0(ctx, base);
loc_830FDAF4:
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

__attribute__((alias("__imp__sub_830FDB0C"))) PPC_WEAK_FUNC(sub_830FDB0C);
PPC_FUNC_IMPL(__imp__sub_830FDB0C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_830FDB10"))) PPC_WEAK_FUNC(sub_830FDB10);
PPC_FUNC_IMPL(__imp__sub_830FDB10) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x833a01a0
	ctx.lr = 0x830FDB18;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// mr r26,r6
	ctx.r26.u64 = ctx.r6.u64;
	// mr r30,r7
	ctx.r30.u64 = ctx.r7.u64;
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// blt cr6,0x830fdbc0
	if (ctx.cr6.lt) goto loc_830FDBC0;
	// cmpwi cr6,r4,7
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 7, ctx.xer);
	// bgt cr6,0x830fdbc0
	if (ctx.cr6.gt) goto loc_830FDBC0;
	// lis r11,-31827
	ctx.r11.s64 = -2085814272;
	// lwz r3,-4808(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -4808);
	// bl 0x831a0220
	ctx.lr = 0x830FDB4C;
	sub_831A0220(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x830fdb80
	if (ctx.cr0.eq) goto loc_830FDB80;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x830FDB6C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addic r10,r3,-1
	ctx.xer.ca = ctx.r3.u32 > 0;
	ctx.r10.s64 = ctx.r3.s64 + -1;
	// li r11,2
	ctx.r11.s64 = 2;
	// subfe r10,r10,r10
	temp.u8 = (~ctx.r10.u32 + ctx.r10.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r10.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r10.u64 = ~ctx.r10.u64 + ctx.r10.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 & ctx.r11.u64;
	// b 0x830fdbc8
	goto loc_830FDBC8;
loc_830FDB80:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r27,0(r29)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8313d2f0
	ctx.lr = 0x830FDB90;
	sub_8313D2F0(ctx, base);
	// lwz r11,36(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 36);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r6,r26
	ctx.r6.u64 = ctx.r26.u64;
	// mr r7,r30
	ctx.r7.u64 = ctx.r30.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x830FDBB0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x830fdbcc
	if (ctx.cr0.eq) goto loc_830FDBCC;
	// li r11,0
	ctx.r11.s64 = 0;
	// b 0x830fdbc8
	goto loc_830FDBC8;
loc_830FDBC0:
	// li r11,2
	ctx.r11.s64 = 2;
	// li r3,0
	ctx.r3.s64 = 0;
loc_830FDBC8:
	// stw r11,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r11.u32);
loc_830FDBCC:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x833a01f0
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_830FDBD4"))) PPC_WEAK_FUNC(sub_830FDBD4);
PPC_FUNC_IMPL(__imp__sub_830FDBD4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_830FDBD8"))) PPC_WEAK_FUNC(sub_830FDBD8);
PPC_FUNC_IMPL(__imp__sub_830FDBD8) {
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
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r11,r11,23436
	ctx.r11.s64 = ctx.r11.s64 + 23436;
	// clrlwi. r10,r4,31
	ctx.r10.u64 = ctx.r4.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// beq 0x830fdc04
	if (ctx.cr0.eq) goto loc_830FDC04;
	// bl 0x830dd3e0
	ctx.lr = 0x830FDC04;
	sub_830DD3E0(ctx, base);
loc_830FDC04:
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

__attribute__((alias("__imp__sub_830FDC1C"))) PPC_WEAK_FUNC(sub_830FDC1C);
PPC_FUNC_IMPL(__imp__sub_830FDC1C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_830FDC20"))) PPC_WEAK_FUNC(sub_830FDC20);
PPC_FUNC_IMPL(__imp__sub_830FDC20) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x833a01a4
	ctx.lr = 0x830FDC28;
	__savegprlr_27(ctx, base);
	// ld r12,-4096(r1)
	ctx.r12.u64 = PPC_LOAD_U64(ctx.r1.u32 + -4096);
	// stwu r1,-4256(r1)
	ea = -4256 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31827
	ctx.r11.s64 = -2085814272;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// mr r28,r6
	ctx.r28.u64 = ctx.r6.u64;
	// lbz r11,-4816(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + -4816);
	// mr r27,r7
	ctx.r27.u64 = ctx.r7.u64;
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x830fdc74
	if (ctx.cr0.eq) goto loc_830FDC74;
	// bl 0x83143538
	ctx.lr = 0x830FDC58;
	sub_83143538(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x831432f0
	ctx.lr = 0x830FDC60;
	sub_831432F0(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x830fdc74
	if (!ctx.cr0.eq) goto loc_830FDC74;
	// li r11,1
	ctx.r11.s64 = 1;
loc_830FDC6C:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x830fdd20
	goto loc_830FDD20;
loc_830FDC74:
	// li r5,2048
	ctx.r5.s64 = 2048;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x830d6990
	ctx.lr = 0x830FDC84;
	sub_830D6990(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x830fdc94
	if (!ctx.cr0.eq) goto loc_830FDC94;
	// li r11,2
	ctx.r11.s64 = 2;
	// b 0x830fdc6c
	goto loc_830FDC6C;
loc_830FDC94:
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x830d6d70
	ctx.lr = 0x830FDC9C;
	sub_830D6D70(ctx, base);
	// lis r11,-31827
	ctx.r11.s64 = -2085814272;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// lwz r3,-4812(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -4812);
	// bl 0x830ec0c8
	ctx.lr = 0x830FDCB0;
	sub_830EC0C8(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x830fdcf0
	if (ctx.cr0.eq) goto loc_830FDCF0;
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x830fdcf0
	if (ctx.cr6.eq) goto loc_830FDCF0;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x830FDCDC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addic r10,r3,-1
	ctx.xer.ca = ctx.r3.u32 > 0;
	ctx.r10.s64 = ctx.r3.s64 + -1;
	// li r11,2
	ctx.r11.s64 = 2;
	// subfe r10,r10,r10
	temp.u8 = (~ctx.r10.u32 + ctx.r10.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r10.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r10.u64 = ~ctx.r10.u64 + ctx.r10.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 & ctx.r11.u64;
	// b 0x830fdd20
	goto loc_830FDD20;
loc_830FDCF0:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r7,r27
	ctx.r7.u64 = ctx.r27.u64;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r11,36(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x830FDD14;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x830fdd24
	if (ctx.cr0.eq) goto loc_830FDD24;
	// li r11,0
	ctx.r11.s64 = 0;
loc_830FDD20:
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
loc_830FDD24:
	// addi r1,r1,4256
	ctx.r1.s64 = ctx.r1.s64 + 4256;
	// b 0x833a01f4
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_830FDD2C"))) PPC_WEAK_FUNC(sub_830FDD2C);
PPC_FUNC_IMPL(__imp__sub_830FDD2C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_830FDD30"))) PPC_WEAK_FUNC(sub_830FDD30);
PPC_FUNC_IMPL(__imp__sub_830FDD30) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lwz r25,17952(r26)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r26.u32 + 17952);
	// lwz r16,24552(r28)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r28.u32 + 24552);
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x833a01a8
	ctx.lr = 0x830FDD40;
	__savegprlr_28(ctx, base);
	// addi r31,r1,-128
	ctx.r31.s64 = ctx.r1.s64 + -128;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r30,8
	ctx.r30.s64 = 8;
	// lis r28,-31827
	ctx.r28.s64 = -2085814272;
loc_830FDD50:
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r3,-4808(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + -4808);
	// bl 0x830f4660
	ctx.lr = 0x830FDD5C;
	sub_830F4660(ctx, base);
	// addic. r30,r30,-1
	ctx.xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// bne 0x830fdd50
	if (!ctx.cr0.eq) goto loc_830FDD50;
	// li r3,8
	ctx.r3.s64 = 8;
	// bl 0x830dd340
	ctx.lr = 0x830FDD6C;
	sub_830DD340(ctx, base);
	// stw r3,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r3.u32);
	// lis r11,-32228
	ctx.r11.s64 = -2112094208;
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// addi r29,r11,-6252
	ctx.r29.s64 = ctx.r11.s64 + -6252;
	// beq 0x830fdd90
	if (ctx.cr0.eq) goto loc_830FDD90;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x830fd128
	ctx.lr = 0x830FDD88;
	sub_830FD128(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// b 0x830fdd94
	goto loc_830FDD94;
loc_830FDD90:
	// li r4,0
	ctx.r4.s64 = 0;
loc_830FDD94:
	// lwz r11,-4808(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + -4808);
	// li r5,7
	ctx.r5.s64 = 7;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r11,4(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x830FDDB0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r3,8
	ctx.r3.s64 = 8;
	// bl 0x830dd340
	ctx.lr = 0x830FDDB8;
	sub_830DD340(ctx, base);
	// stw r3,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r3.u32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x830fddd4
	if (ctx.cr0.eq) goto loc_830FDDD4;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x830fd128
	ctx.lr = 0x830FDDCC;
	sub_830FD128(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// b 0x830fddd8
	goto loc_830FDDD8;
loc_830FDDD4:
	// li r5,0
	ctx.r5.s64 = 0;
loc_830FDDD8:
	// lis r30,-31827
	ctx.r30.s64 = -2085814272;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// lwz r3,-4812(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + -4812);
	// bl 0x8315f5d0
	ctx.lr = 0x830FDDE8;
	sub_8315F5D0(ctx, base);
	// li r3,8
	ctx.r3.s64 = 8;
	// bl 0x830dd340
	ctx.lr = 0x830FDDF0;
	sub_830DD340(ctx, base);
	// stw r3,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r3.u32);
	// lis r11,-32228
	ctx.r11.s64 = -2112094208;
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// addi r29,r11,-6684
	ctx.r29.s64 = ctx.r11.s64 + -6684;
	// beq 0x830fde14
	if (ctx.cr0.eq) goto loc_830FDE14;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x830fd210
	ctx.lr = 0x830FDE0C;
	sub_830FD210(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// b 0x830fde18
	goto loc_830FDE18;
loc_830FDE14:
	// li r4,0
	ctx.r4.s64 = 0;
loc_830FDE18:
	// lwz r11,-4808(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + -4808);
	// li r5,3
	ctx.r5.s64 = 3;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r11,4(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x830FDE34;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r3,8
	ctx.r3.s64 = 8;
	// bl 0x830dd340
	ctx.lr = 0x830FDE3C;
	sub_830DD340(ctx, base);
	// stw r3,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r3.u32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x830fde58
	if (ctx.cr0.eq) goto loc_830FDE58;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x830fd210
	ctx.lr = 0x830FDE50;
	sub_830FD210(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// b 0x830fde5c
	goto loc_830FDE5C;
loc_830FDE58:
	// li r5,0
	ctx.r5.s64 = 0;
loc_830FDE5C:
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// lwz r3,-4812(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + -4812);
	// bl 0x8315f5d0
	ctx.lr = 0x830FDE68;
	sub_8315F5D0(ctx, base);
	// li r3,8
	ctx.r3.s64 = 8;
	// bl 0x830dd340
	ctx.lr = 0x830FDE70;
	sub_830DD340(ctx, base);
	// stw r3,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r3.u32);
	// lis r11,-32228
	ctx.r11.s64 = -2112094208;
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// addi r29,r11,-6664
	ctx.r29.s64 = ctx.r11.s64 + -6664;
	// beq 0x830fde94
	if (ctx.cr0.eq) goto loc_830FDE94;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x830fd210
	ctx.lr = 0x830FDE8C;
	sub_830FD210(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// b 0x830fde98
	goto loc_830FDE98;
loc_830FDE94:
	// li r5,0
	ctx.r5.s64 = 0;
loc_830FDE98:
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// lwz r3,-4812(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + -4812);
	// bl 0x8315f5d0
	ctx.lr = 0x830FDEA4;
	sub_8315F5D0(ctx, base);
	// li r3,8
	ctx.r3.s64 = 8;
	// bl 0x830dd340
	ctx.lr = 0x830FDEAC;
	sub_830DD340(ctx, base);
	// stw r3,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r3.u32);
	// lis r11,-32228
	ctx.r11.s64 = -2112094208;
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// addi r29,r11,-6648
	ctx.r29.s64 = ctx.r11.s64 + -6648;
	// beq 0x830fded0
	if (ctx.cr0.eq) goto loc_830FDED0;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x830fd210
	ctx.lr = 0x830FDEC8;
	sub_830FD210(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// b 0x830fded4
	goto loc_830FDED4;
loc_830FDED0:
	// li r5,0
	ctx.r5.s64 = 0;
loc_830FDED4:
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// lwz r3,-4812(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + -4812);
	// bl 0x8315f5d0
	ctx.lr = 0x830FDEE0;
	sub_8315F5D0(ctx, base);
	// li r3,8
	ctx.r3.s64 = 8;
	// bl 0x830dd340
	ctx.lr = 0x830FDEE8;
	sub_830DD340(ctx, base);
	// stw r3,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r3.u32);
	// lis r11,-32228
	ctx.r11.s64 = -2112094208;
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// addi r29,r11,-6636
	ctx.r29.s64 = ctx.r11.s64 + -6636;
	// beq 0x830fdf0c
	if (ctx.cr0.eq) goto loc_830FDF0C;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x830fd210
	ctx.lr = 0x830FDF04;
	sub_830FD210(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// b 0x830fdf10
	goto loc_830FDF10;
loc_830FDF0C:
	// li r5,0
	ctx.r5.s64 = 0;
loc_830FDF10:
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// lwz r3,-4812(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + -4812);
	// bl 0x8315f5d0
	ctx.lr = 0x830FDF1C;
	sub_8315F5D0(ctx, base);
	// li r3,8
	ctx.r3.s64 = 8;
	// bl 0x830dd340
	ctx.lr = 0x830FDF24;
	sub_830DD340(ctx, base);
	// stw r3,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r3.u32);
	// lis r11,-32228
	ctx.r11.s64 = -2112094208;
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// addi r29,r11,-6616
	ctx.r29.s64 = ctx.r11.s64 + -6616;
	// beq 0x830fdf48
	if (ctx.cr0.eq) goto loc_830FDF48;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x830fd2f8
	ctx.lr = 0x830FDF40;
	sub_830FD2F8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// b 0x830fdf4c
	goto loc_830FDF4C;
loc_830FDF48:
	// li r4,0
	ctx.r4.s64 = 0;
loc_830FDF4C:
	// lwz r11,-4808(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + -4808);
	// li r5,4
	ctx.r5.s64 = 4;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r11,4(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x830FDF68;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r3,8
	ctx.r3.s64 = 8;
	// bl 0x830dd340
	ctx.lr = 0x830FDF70;
	sub_830DD340(ctx, base);
	// stw r3,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r3.u32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x830fdf8c
	if (ctx.cr0.eq) goto loc_830FDF8C;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x830fd2f8
	ctx.lr = 0x830FDF84;
	sub_830FD2F8(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// b 0x830fdf90
	goto loc_830FDF90;
loc_830FDF8C:
	// li r5,0
	ctx.r5.s64 = 0;
loc_830FDF90:
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// lwz r3,-4812(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + -4812);
	// bl 0x8315f5d0
	ctx.lr = 0x830FDF9C;
	sub_8315F5D0(ctx, base);
	// li r3,8
	ctx.r3.s64 = 8;
	// bl 0x830dd340
	ctx.lr = 0x830FDFA4;
	sub_830DD340(ctx, base);
	// stw r3,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r3.u32);
	// lis r11,-32228
	ctx.r11.s64 = -2112094208;
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// addi r29,r11,-6604
	ctx.r29.s64 = ctx.r11.s64 + -6604;
	// beq 0x830fdfc8
	if (ctx.cr0.eq) goto loc_830FDFC8;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x830fd2f8
	ctx.lr = 0x830FDFC0;
	sub_830FD2F8(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// b 0x830fdfcc
	goto loc_830FDFCC;
loc_830FDFC8:
	// li r5,0
	ctx.r5.s64 = 0;
loc_830FDFCC:
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// lwz r3,-4812(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + -4812);
	// bl 0x8315f5d0
	ctx.lr = 0x830FDFD8;
	sub_8315F5D0(ctx, base);
	// li r3,8
	ctx.r3.s64 = 8;
	// bl 0x830dd340
	ctx.lr = 0x830FDFE0;
	sub_830DD340(ctx, base);
	// stw r3,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r3.u32);
	// lis r11,-32228
	ctx.r11.s64 = -2112094208;
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// addi r29,r11,-7316
	ctx.r29.s64 = ctx.r11.s64 + -7316;
	// beq 0x830fe004
	if (ctx.cr0.eq) goto loc_830FE004;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x830fd3e0
	ctx.lr = 0x830FDFFC;
	sub_830FD3E0(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// b 0x830fe008
	goto loc_830FE008;
loc_830FE004:
	// li r5,0
	ctx.r5.s64 = 0;
loc_830FE008:
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// lwz r3,-4812(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + -4812);
	// bl 0x8315f5d0
	ctx.lr = 0x830FE014;
	sub_8315F5D0(ctx, base);
	// li r3,8
	ctx.r3.s64 = 8;
	// bl 0x830dd340
	ctx.lr = 0x830FE01C;
	sub_830DD340(ctx, base);
	// stw r3,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r3.u32);
	// lis r11,-32228
	ctx.r11.s64 = -2112094208;
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// addi r29,r11,-7296
	ctx.r29.s64 = ctx.r11.s64 + -7296;
	// beq 0x830fe040
	if (ctx.cr0.eq) goto loc_830FE040;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x830fd3e0
	ctx.lr = 0x830FE038;
	sub_830FD3E0(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// b 0x830fe044
	goto loc_830FE044;
loc_830FE040:
	// li r5,0
	ctx.r5.s64 = 0;
loc_830FE044:
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// lwz r3,-4812(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + -4812);
	// bl 0x8315f5d0
	ctx.lr = 0x830FE050;
	sub_8315F5D0(ctx, base);
	// li r3,8
	ctx.r3.s64 = 8;
	// bl 0x830dd340
	ctx.lr = 0x830FE058;
	sub_830DD340(ctx, base);
	// stw r3,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r3.u32);
	// lis r11,-32228
	ctx.r11.s64 = -2112094208;
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// addi r29,r11,-7272
	ctx.r29.s64 = ctx.r11.s64 + -7272;
	// beq 0x830fe07c
	if (ctx.cr0.eq) goto loc_830FE07C;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x830fd3e0
	ctx.lr = 0x830FE074;
	sub_830FD3E0(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// b 0x830fe080
	goto loc_830FE080;
loc_830FE07C:
	// li r5,0
	ctx.r5.s64 = 0;
loc_830FE080:
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// lwz r3,-4812(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + -4812);
	// bl 0x8315f5d0
	ctx.lr = 0x830FE08C;
	sub_8315F5D0(ctx, base);
	// li r3,8
	ctx.r3.s64 = 8;
	// bl 0x830dd340
	ctx.lr = 0x830FE094;
	sub_830DD340(ctx, base);
	// stw r3,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r3.u32);
	// lis r11,-32228
	ctx.r11.s64 = -2112094208;
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// addi r29,r11,-7248
	ctx.r29.s64 = ctx.r11.s64 + -7248;
	// beq 0x830fe0b8
	if (ctx.cr0.eq) goto loc_830FE0B8;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x830fd3e0
	ctx.lr = 0x830FE0B0;
	sub_830FD3E0(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// b 0x830fe0bc
	goto loc_830FE0BC;
loc_830FE0B8:
	// li r5,0
	ctx.r5.s64 = 0;
loc_830FE0BC:
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// lwz r3,-4812(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + -4812);
	// bl 0x8315f5d0
	ctx.lr = 0x830FE0C8;
	sub_8315F5D0(ctx, base);
	// li r3,8
	ctx.r3.s64 = 8;
	// bl 0x830dd340
	ctx.lr = 0x830FE0D0;
	sub_830DD340(ctx, base);
	// stw r3,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r3.u32);
	// lis r11,-32228
	ctx.r11.s64 = -2112094208;
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// addi r29,r11,-7232
	ctx.r29.s64 = ctx.r11.s64 + -7232;
	// beq 0x830fe0f4
	if (ctx.cr0.eq) goto loc_830FE0F4;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x830fd3e0
	ctx.lr = 0x830FE0EC;
	sub_830FD3E0(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// b 0x830fe0f8
	goto loc_830FE0F8;
loc_830FE0F4:
	// li r5,0
	ctx.r5.s64 = 0;
loc_830FE0F8:
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// lwz r3,-4812(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + -4812);
	// bl 0x8315f5d0
	ctx.lr = 0x830FE104;
	sub_8315F5D0(ctx, base);
	// li r3,8
	ctx.r3.s64 = 8;
	// bl 0x830dd340
	ctx.lr = 0x830FE10C;
	sub_830DD340(ctx, base);
	// stw r3,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r3.u32);
	// lis r11,-32228
	ctx.r11.s64 = -2112094208;
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// addi r29,r11,-7216
	ctx.r29.s64 = ctx.r11.s64 + -7216;
	// beq 0x830fe130
	if (ctx.cr0.eq) goto loc_830FE130;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x830fd3e0
	ctx.lr = 0x830FE128;
	sub_830FD3E0(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// b 0x830fe134
	goto loc_830FE134;
loc_830FE130:
	// li r5,0
	ctx.r5.s64 = 0;
loc_830FE134:
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// lwz r3,-4812(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + -4812);
	// bl 0x8315f5d0
	ctx.lr = 0x830FE140;
	sub_8315F5D0(ctx, base);
	// li r3,8
	ctx.r3.s64 = 8;
	// bl 0x830dd340
	ctx.lr = 0x830FE148;
	sub_830DD340(ctx, base);
	// stw r3,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r3.u32);
	// lis r11,-32228
	ctx.r11.s64 = -2112094208;
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// addi r29,r11,-7200
	ctx.r29.s64 = ctx.r11.s64 + -7200;
	// beq 0x830fe16c
	if (ctx.cr0.eq) goto loc_830FE16C;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x830fd3e0
	ctx.lr = 0x830FE164;
	sub_830FD3E0(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// b 0x830fe170
	goto loc_830FE170;
loc_830FE16C:
	// li r5,0
	ctx.r5.s64 = 0;
loc_830FE170:
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// lwz r3,-4812(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + -4812);
	// bl 0x8315f5d0
	ctx.lr = 0x830FE17C;
	sub_8315F5D0(ctx, base);
	// li r3,8
	ctx.r3.s64 = 8;
	// bl 0x830dd340
	ctx.lr = 0x830FE184;
	sub_830DD340(ctx, base);
	// stw r3,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r3.u32);
	// lis r11,-32228
	ctx.r11.s64 = -2112094208;
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// addi r29,r11,-7184
	ctx.r29.s64 = ctx.r11.s64 + -7184;
	// beq 0x830fe1a8
	if (ctx.cr0.eq) goto loc_830FE1A8;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x830fd3e0
	ctx.lr = 0x830FE1A0;
	sub_830FD3E0(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// b 0x830fe1ac
	goto loc_830FE1AC;
loc_830FE1A8:
	// li r5,0
	ctx.r5.s64 = 0;
loc_830FE1AC:
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// lwz r3,-4812(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + -4812);
	// bl 0x8315f5d0
	ctx.lr = 0x830FE1B8;
	sub_8315F5D0(ctx, base);
	// li r3,8
	ctx.r3.s64 = 8;
	// bl 0x830dd340
	ctx.lr = 0x830FE1C0;
	sub_830DD340(ctx, base);
	// stw r3,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r3.u32);
	// lis r11,-32228
	ctx.r11.s64 = -2112094208;
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// addi r29,r11,-7168
	ctx.r29.s64 = ctx.r11.s64 + -7168;
	// beq 0x830fe1e4
	if (ctx.cr0.eq) goto loc_830FE1E4;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x830fd3e0
	ctx.lr = 0x830FE1DC;
	sub_830FD3E0(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// b 0x830fe1e8
	goto loc_830FE1E8;
loc_830FE1E4:
	// li r5,0
	ctx.r5.s64 = 0;
loc_830FE1E8:
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// lwz r3,-4812(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + -4812);
	// bl 0x8315f5d0
	ctx.lr = 0x830FE1F4;
	sub_8315F5D0(ctx, base);
	// li r3,8
	ctx.r3.s64 = 8;
	// bl 0x830dd340
	ctx.lr = 0x830FE1FC;
	sub_830DD340(ctx, base);
	// stw r3,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r3.u32);
	// lis r11,-32228
	ctx.r11.s64 = -2112094208;
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// addi r29,r11,-7156
	ctx.r29.s64 = ctx.r11.s64 + -7156;
	// beq 0x830fe220
	if (ctx.cr0.eq) goto loc_830FE220;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x830fd3e0
	ctx.lr = 0x830FE218;
	sub_830FD3E0(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// b 0x830fe224
	goto loc_830FE224;
loc_830FE220:
	// li r5,0
	ctx.r5.s64 = 0;
loc_830FE224:
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// lwz r3,-4812(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + -4812);
	// bl 0x8315f5d0
	ctx.lr = 0x830FE230;
	sub_8315F5D0(ctx, base);
	// li r3,8
	ctx.r3.s64 = 8;
	// bl 0x830dd340
	ctx.lr = 0x830FE238;
	sub_830DD340(ctx, base);
	// stw r3,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r3.u32);
	// lis r11,-32228
	ctx.r11.s64 = -2112094208;
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// addi r29,r11,-7132
	ctx.r29.s64 = ctx.r11.s64 + -7132;
	// beq 0x830fe25c
	if (ctx.cr0.eq) goto loc_830FE25C;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x830fd3e0
	ctx.lr = 0x830FE254;
	sub_830FD3E0(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// b 0x830fe260
	goto loc_830FE260;
loc_830FE25C:
	// li r5,0
	ctx.r5.s64 = 0;
loc_830FE260:
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// lwz r3,-4812(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + -4812);
	// bl 0x8315f5d0
	ctx.lr = 0x830FE26C;
	sub_8315F5D0(ctx, base);
	// li r3,8
	ctx.r3.s64 = 8;
	// bl 0x830dd340
	ctx.lr = 0x830FE274;
	sub_830DD340(ctx, base);
	// stw r3,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r3.u32);
	// lis r11,-32228
	ctx.r11.s64 = -2112094208;
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// addi r29,r11,-7108
	ctx.r29.s64 = ctx.r11.s64 + -7108;
	// beq 0x830fe298
	if (ctx.cr0.eq) goto loc_830FE298;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x830fd3e0
	ctx.lr = 0x830FE290;
	sub_830FD3E0(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// b 0x830fe29c
	goto loc_830FE29C;
loc_830FE298:
	// li r5,0
	ctx.r5.s64 = 0;
loc_830FE29C:
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// lwz r3,-4812(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + -4812);
	// bl 0x8315f5d0
	ctx.lr = 0x830FE2A8;
	sub_8315F5D0(ctx, base);
	// li r3,12
	ctx.r3.s64 = 12;
	// bl 0x830dd340
	ctx.lr = 0x830FE2B0;
	sub_830DD340(ctx, base);
	// stw r3,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r3.u32);
	// lis r11,-32228
	ctx.r11.s64 = -2112094208;
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// addi r29,r11,-6428
	ctx.r29.s64 = ctx.r11.s64 + -6428;
	// beq 0x830fe2d8
	if (ctx.cr0.eq) goto loc_830FE2D8;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x830fd4c8
	ctx.lr = 0x830FE2D0;
	sub_830FD4C8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// b 0x830fe2dc
	goto loc_830FE2DC;
loc_830FE2D8:
	// li r4,0
	ctx.r4.s64 = 0;
loc_830FE2DC:
	// lwz r11,-4808(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + -4808);
	// li r5,6
	ctx.r5.s64 = 6;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r11,4(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x830FE2F8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r3,12
	ctx.r3.s64 = 12;
	// bl 0x830dd340
	ctx.lr = 0x830FE300;
	sub_830DD340(ctx, base);
	// stw r3,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r3.u32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x830fe320
	if (ctx.cr0.eq) goto loc_830FE320;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x830fd4c8
	ctx.lr = 0x830FE318;
	sub_830FD4C8(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// b 0x830fe324
	goto loc_830FE324;
loc_830FE320:
	// li r5,0
	ctx.r5.s64 = 0;
loc_830FE324:
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// lwz r3,-4812(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + -4812);
	// bl 0x8315f5d0
	ctx.lr = 0x830FE330;
	sub_8315F5D0(ctx, base);
	// li r3,12
	ctx.r3.s64 = 12;
	// bl 0x830dd340
	ctx.lr = 0x830FE338;
	sub_830DD340(ctx, base);
	// stw r3,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r3.u32);
	// lis r11,-32228
	ctx.r11.s64 = -2112094208;
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// addi r29,r11,-6404
	ctx.r29.s64 = ctx.r11.s64 + -6404;
	// beq 0x830fe360
	if (ctx.cr0.eq) goto loc_830FE360;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x830fd4c8
	ctx.lr = 0x830FE358;
	sub_830FD4C8(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// b 0x830fe364
	goto loc_830FE364;
loc_830FE360:
	// li r5,0
	ctx.r5.s64 = 0;
loc_830FE364:
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// lwz r3,-4812(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + -4812);
	// bl 0x8315f5d0
	ctx.lr = 0x830FE370;
	sub_8315F5D0(ctx, base);
	// li r3,12
	ctx.r3.s64 = 12;
	// bl 0x830dd340
	ctx.lr = 0x830FE378;
	sub_830DD340(ctx, base);
	// stw r3,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r3.u32);
	// lis r11,-32228
	ctx.r11.s64 = -2112094208;
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// addi r29,r11,-6724
	ctx.r29.s64 = ctx.r11.s64 + -6724;
	// beq 0x830fe3a0
	if (ctx.cr0.eq) goto loc_830FE3A0;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x830fd5c0
	ctx.lr = 0x830FE398;
	sub_830FD5C0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// b 0x830fe3a4
	goto loc_830FE3A4;
loc_830FE3A0:
	// li r4,0
	ctx.r4.s64 = 0;
loc_830FE3A4:
	// lwz r11,-4808(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + -4808);
	// li r5,2
	ctx.r5.s64 = 2;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r11,4(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x830FE3C0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r3,12
	ctx.r3.s64 = 12;
	// bl 0x830dd340
	ctx.lr = 0x830FE3C8;
	sub_830DD340(ctx, base);
	// stw r3,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r3.u32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x830fe3e8
	if (ctx.cr0.eq) goto loc_830FE3E8;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x830fd5c0
	ctx.lr = 0x830FE3E0;
	sub_830FD5C0(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// b 0x830fe3ec
	goto loc_830FE3EC;
loc_830FE3E8:
	// li r5,0
	ctx.r5.s64 = 0;
loc_830FE3EC:
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// lwz r3,-4812(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + -4812);
	// bl 0x8315f5d0
	ctx.lr = 0x830FE3F8;
	sub_8315F5D0(ctx, base);
	// li r3,12
	ctx.r3.s64 = 12;
	// bl 0x830dd340
	ctx.lr = 0x830FE400;
	sub_830DD340(ctx, base);
	// stw r3,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r3.u32);
	// lis r11,-32228
	ctx.r11.s64 = -2112094208;
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// addi r29,r11,-6700
	ctx.r29.s64 = ctx.r11.s64 + -6700;
	// beq 0x830fe428
	if (ctx.cr0.eq) goto loc_830FE428;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x830fd5c0
	ctx.lr = 0x830FE420;
	sub_830FD5C0(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// b 0x830fe42c
	goto loc_830FE42C;
loc_830FE428:
	// li r5,0
	ctx.r5.s64 = 0;
loc_830FE42C:
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// lwz r3,-4812(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + -4812);
	// bl 0x8315f5d0
	ctx.lr = 0x830FE438;
	sub_8315F5D0(ctx, base);
	// li r3,12
	ctx.r3.s64 = 12;
	// bl 0x830dd340
	ctx.lr = 0x830FE440;
	sub_830DD340(ctx, base);
	// stw r3,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r3.u32);
	// lis r11,-32228
	ctx.r11.s64 = -2112094208;
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// addi r29,r11,-6472
	ctx.r29.s64 = ctx.r11.s64 + -6472;
	// beq 0x830fe468
	if (ctx.cr0.eq) goto loc_830FE468;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// li r5,1
	ctx.r5.s64 = 1;
	// bl 0x830fd4c8
	ctx.lr = 0x830FE460;
	sub_830FD4C8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// b 0x830fe46c
	goto loc_830FE46C;
loc_830FE468:
	// li r4,0
	ctx.r4.s64 = 0;
loc_830FE46C:
	// lwz r11,-4808(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + -4808);
	// li r5,5
	ctx.r5.s64 = 5;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r11,4(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x830FE488;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r3,12
	ctx.r3.s64 = 12;
	// bl 0x830dd340
	ctx.lr = 0x830FE490;
	sub_830DD340(ctx, base);
	// stw r3,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r3.u32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x830fe4b0
	if (ctx.cr0.eq) goto loc_830FE4B0;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// li r5,1
	ctx.r5.s64 = 1;
	// bl 0x830fd4c8
	ctx.lr = 0x830FE4A8;
	sub_830FD4C8(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// b 0x830fe4b4
	goto loc_830FE4B4;
loc_830FE4B0:
	// li r5,0
	ctx.r5.s64 = 0;
loc_830FE4B4:
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// lwz r3,-4812(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + -4812);
	// bl 0x8315f5d0
	ctx.lr = 0x830FE4C0;
	sub_8315F5D0(ctx, base);
	// li r3,12
	ctx.r3.s64 = 12;
	// bl 0x830dd340
	ctx.lr = 0x830FE4C8;
	sub_830DD340(ctx, base);
	// stw r3,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r3.u32);
	// lis r11,-32228
	ctx.r11.s64 = -2112094208;
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// addi r29,r11,-6448
	ctx.r29.s64 = ctx.r11.s64 + -6448;
	// beq 0x830fe4f0
	if (ctx.cr0.eq) goto loc_830FE4F0;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// li r5,1
	ctx.r5.s64 = 1;
	// bl 0x830fd4c8
	ctx.lr = 0x830FE4E8;
	sub_830FD4C8(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// b 0x830fe4f4
	goto loc_830FE4F4;
loc_830FE4F0:
	// li r5,0
	ctx.r5.s64 = 0;
loc_830FE4F4:
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// lwz r3,-4812(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + -4812);
	// bl 0x8315f5d0
	ctx.lr = 0x830FE500;
	sub_8315F5D0(ctx, base);
	// li r3,12
	ctx.r3.s64 = 12;
	// bl 0x830dd340
	ctx.lr = 0x830FE508;
	sub_830DD340(ctx, base);
	// stw r3,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r3.u32);
	// lis r11,-32228
	ctx.r11.s64 = -2112094208;
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// addi r29,r11,-6764
	ctx.r29.s64 = ctx.r11.s64 + -6764;
	// beq 0x830fe530
	if (ctx.cr0.eq) goto loc_830FE530;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// li r5,1
	ctx.r5.s64 = 1;
	// bl 0x830fd5c0
	ctx.lr = 0x830FE528;
	sub_830FD5C0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// b 0x830fe534
	goto loc_830FE534;
loc_830FE530:
	// li r4,0
	ctx.r4.s64 = 0;
loc_830FE534:
	// lwz r11,-4808(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + -4808);
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r11,4(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x830FE550;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r3,12
	ctx.r3.s64 = 12;
	// bl 0x830dd340
	ctx.lr = 0x830FE558;
	sub_830DD340(ctx, base);
	// stw r3,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r3.u32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x830fe578
	if (ctx.cr0.eq) goto loc_830FE578;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// li r5,1
	ctx.r5.s64 = 1;
	// bl 0x830fd5c0
	ctx.lr = 0x830FE570;
	sub_830FD5C0(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// b 0x830fe57c
	goto loc_830FE57C;
loc_830FE578:
	// li r5,0
	ctx.r5.s64 = 0;
loc_830FE57C:
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// lwz r3,-4812(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + -4812);
	// bl 0x8315f5d0
	ctx.lr = 0x830FE588;
	sub_8315F5D0(ctx, base);
	// li r3,12
	ctx.r3.s64 = 12;
	// bl 0x830dd340
	ctx.lr = 0x830FE590;
	sub_830DD340(ctx, base);
	// stw r3,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r3.u32);
	// lis r11,-32228
	ctx.r11.s64 = -2112094208;
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// addi r29,r11,-6740
	ctx.r29.s64 = ctx.r11.s64 + -6740;
	// beq 0x830fe5b8
	if (ctx.cr0.eq) goto loc_830FE5B8;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// li r5,1
	ctx.r5.s64 = 1;
	// bl 0x830fd5c0
	ctx.lr = 0x830FE5B0;
	sub_830FD5C0(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// b 0x830fe5bc
	goto loc_830FE5BC;
loc_830FE5B8:
	// li r5,0
	ctx.r5.s64 = 0;
loc_830FE5BC:
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// lwz r3,-4812(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + -4812);
	// bl 0x8315f5d0
	ctx.lr = 0x830FE5C8;
	sub_8315F5D0(ctx, base);
	// li r3,12
	ctx.r3.s64 = 12;
	// bl 0x830dd340
	ctx.lr = 0x830FE5D0;
	sub_830DD340(ctx, base);
	// stw r3,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r3.u32);
	// lis r11,-32228
	ctx.r11.s64 = -2112094208;
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// addi r29,r11,-6592
	ctx.r29.s64 = ctx.r11.s64 + -6592;
	// beq 0x830fe5f8
	if (ctx.cr0.eq) goto loc_830FE5F8;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x830fd4c8
	ctx.lr = 0x830FE5F0;
	sub_830FD4C8(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// b 0x830fe5fc
	goto loc_830FE5FC;
loc_830FE5F8:
	// li r5,0
	ctx.r5.s64 = 0;
loc_830FE5FC:
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// lwz r3,-4812(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + -4812);
	// bl 0x8315f5d0
	ctx.lr = 0x830FE608;
	sub_8315F5D0(ctx, base);
	// li r3,12
	ctx.r3.s64 = 12;
	// bl 0x830dd340
	ctx.lr = 0x830FE610;
	sub_830DD340(ctx, base);
	// stw r3,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r3.u32);
	// lis r11,-32228
	ctx.r11.s64 = -2112094208;
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// addi r29,r11,-6576
	ctx.r29.s64 = ctx.r11.s64 + -6576;
	// beq 0x830fe638
	if (ctx.cr0.eq) goto loc_830FE638;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x830fd4c8
	ctx.lr = 0x830FE630;
	sub_830FD4C8(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// b 0x830fe63c
	goto loc_830FE63C;
loc_830FE638:
	// li r5,0
	ctx.r5.s64 = 0;
loc_830FE63C:
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// lwz r3,-4812(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + -4812);
	// bl 0x8315f5d0
	ctx.lr = 0x830FE648;
	sub_8315F5D0(ctx, base);
	// li r3,12
	ctx.r3.s64 = 12;
	// bl 0x830dd340
	ctx.lr = 0x830FE650;
	sub_830DD340(ctx, base);
	// stw r3,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r3.u32);
	// lis r11,-32228
	ctx.r11.s64 = -2112094208;
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// addi r29,r11,-6564
	ctx.r29.s64 = ctx.r11.s64 + -6564;
	// beq 0x830fe678
	if (ctx.cr0.eq) goto loc_830FE678;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x830fd4c8
	ctx.lr = 0x830FE670;
	sub_830FD4C8(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// b 0x830fe67c
	goto loc_830FE67C;
loc_830FE678:
	// li r5,0
	ctx.r5.s64 = 0;
loc_830FE67C:
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// lwz r3,-4812(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + -4812);
	// bl 0x8315f5d0
	ctx.lr = 0x830FE688;
	sub_8315F5D0(ctx, base);
	// li r3,12
	ctx.r3.s64 = 12;
	// bl 0x830dd340
	ctx.lr = 0x830FE690;
	sub_830DD340(ctx, base);
	// stw r3,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r3.u32);
	// lis r11,-32228
	ctx.r11.s64 = -2112094208;
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// addi r29,r11,-6548
	ctx.r29.s64 = ctx.r11.s64 + -6548;
	// beq 0x830fe6b8
	if (ctx.cr0.eq) goto loc_830FE6B8;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x830fd4c8
	ctx.lr = 0x830FE6B0;
	sub_830FD4C8(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// b 0x830fe6bc
	goto loc_830FE6BC;
loc_830FE6B8:
	// li r5,0
	ctx.r5.s64 = 0;
loc_830FE6BC:
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// lwz r3,-4812(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + -4812);
	// bl 0x8315f5d0
	ctx.lr = 0x830FE6C8;
	sub_8315F5D0(ctx, base);
	// li r3,12
	ctx.r3.s64 = 12;
	// bl 0x830dd340
	ctx.lr = 0x830FE6D0;
	sub_830DD340(ctx, base);
	// stw r3,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r3.u32);
	// lis r11,-32228
	ctx.r11.s64 = -2112094208;
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// addi r29,r11,-6528
	ctx.r29.s64 = ctx.r11.s64 + -6528;
	// beq 0x830fe6f8
	if (ctx.cr0.eq) goto loc_830FE6F8;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x830fd4c8
	ctx.lr = 0x830FE6F0;
	sub_830FD4C8(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// b 0x830fe6fc
	goto loc_830FE6FC;
loc_830FE6F8:
	// li r5,0
	ctx.r5.s64 = 0;
loc_830FE6FC:
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// lwz r3,-4812(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + -4812);
	// bl 0x8315f5d0
	ctx.lr = 0x830FE708;
	sub_8315F5D0(ctx, base);
	// li r3,12
	ctx.r3.s64 = 12;
	// bl 0x830dd340
	ctx.lr = 0x830FE710;
	sub_830DD340(ctx, base);
	// stw r3,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r3.u32);
	// lis r11,-32228
	ctx.r11.s64 = -2112094208;
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// addi r29,r11,-6516
	ctx.r29.s64 = ctx.r11.s64 + -6516;
	// beq 0x830fe738
	if (ctx.cr0.eq) goto loc_830FE738;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x830fd4c8
	ctx.lr = 0x830FE730;
	sub_830FD4C8(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// b 0x830fe73c
	goto loc_830FE73C;
loc_830FE738:
	// li r5,0
	ctx.r5.s64 = 0;
loc_830FE73C:
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// lwz r3,-4812(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + -4812);
	// bl 0x8315f5d0
	ctx.lr = 0x830FE748;
	sub_8315F5D0(ctx, base);
	// li r3,12
	ctx.r3.s64 = 12;
	// bl 0x830dd340
	ctx.lr = 0x830FE750;
	sub_830DD340(ctx, base);
	// stw r3,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r3.u32);
	// lis r11,-32228
	ctx.r11.s64 = -2112094208;
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// addi r29,r11,-6504
	ctx.r29.s64 = ctx.r11.s64 + -6504;
	// beq 0x830fe778
	if (ctx.cr0.eq) goto loc_830FE778;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x830fd4c8
	ctx.lr = 0x830FE770;
	sub_830FD4C8(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// b 0x830fe77c
	goto loc_830FE77C;
loc_830FE778:
	// li r5,0
	ctx.r5.s64 = 0;
loc_830FE77C:
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// lwz r3,-4812(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + -4812);
	// bl 0x8315f5d0
	ctx.lr = 0x830FE788;
	sub_8315F5D0(ctx, base);
	// li r3,12
	ctx.r3.s64 = 12;
	// bl 0x830dd340
	ctx.lr = 0x830FE790;
	sub_830DD340(ctx, base);
	// stw r3,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r3.u32);
	// lis r11,-32228
	ctx.r11.s64 = -2112094208;
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// addi r29,r11,-6816
	ctx.r29.s64 = ctx.r11.s64 + -6816;
	// beq 0x830fe7b8
	if (ctx.cr0.eq) goto loc_830FE7B8;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x830fd5c0
	ctx.lr = 0x830FE7B0;
	sub_830FD5C0(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// b 0x830fe7bc
	goto loc_830FE7BC;
loc_830FE7B8:
	// li r5,0
	ctx.r5.s64 = 0;
loc_830FE7BC:
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// lwz r3,-4812(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + -4812);
	// bl 0x8315f5d0
	ctx.lr = 0x830FE7C8;
	sub_8315F5D0(ctx, base);
	// li r3,12
	ctx.r3.s64 = 12;
	// bl 0x830dd340
	ctx.lr = 0x830FE7D0;
	sub_830DD340(ctx, base);
	// stw r3,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r3.u32);
	// lis r11,-32228
	ctx.r11.s64 = -2112094208;
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// addi r29,r11,-6804
	ctx.r29.s64 = ctx.r11.s64 + -6804;
	// beq 0x830fe7f8
	if (ctx.cr0.eq) goto loc_830FE7F8;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x830fd5c0
	ctx.lr = 0x830FE7F0;
	sub_830FD5C0(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// b 0x830fe7fc
	goto loc_830FE7FC;
loc_830FE7F8:
	// li r5,0
	ctx.r5.s64 = 0;
loc_830FE7FC:
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// lwz r3,-4812(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + -4812);
	// bl 0x8315f5d0
	ctx.lr = 0x830FE808;
	sub_8315F5D0(ctx, base);
	// li r3,12
	ctx.r3.s64 = 12;
	// bl 0x830dd340
	ctx.lr = 0x830FE810;
	sub_830DD340(ctx, base);
	// stw r3,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r3.u32);
	// lis r11,-32228
	ctx.r11.s64 = -2112094208;
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// addi r29,r11,-6792
	ctx.r29.s64 = ctx.r11.s64 + -6792;
	// beq 0x830fe838
	if (ctx.cr0.eq) goto loc_830FE838;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x830fd5c0
	ctx.lr = 0x830FE830;
	sub_830FD5C0(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// b 0x830fe83c
	goto loc_830FE83C;
loc_830FE838:
	// li r5,0
	ctx.r5.s64 = 0;
loc_830FE83C:
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// lwz r3,-4812(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + -4812);
	// bl 0x8315f5d0
	ctx.lr = 0x830FE848;
	sub_8315F5D0(ctx, base);
	// li r3,12
	ctx.r3.s64 = 12;
	// bl 0x830dd340
	ctx.lr = 0x830FE850;
	sub_830DD340(ctx, base);
	// stw r3,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r3.u32);
	// lis r11,-32228
	ctx.r11.s64 = -2112094208;
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// addi r29,r11,-6780
	ctx.r29.s64 = ctx.r11.s64 + -6780;
	// beq 0x830fe878
	if (ctx.cr0.eq) goto loc_830FE878;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x830fd5c0
	ctx.lr = 0x830FE870;
	sub_830FD5C0(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// b 0x830fe87c
	goto loc_830FE87C;
loc_830FE878:
	// li r5,0
	ctx.r5.s64 = 0;
loc_830FE87C:
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// lwz r3,-4812(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + -4812);
	// bl 0x8315f5d0
	ctx.lr = 0x830FE888;
	sub_8315F5D0(ctx, base);
	// li r3,8
	ctx.r3.s64 = 8;
	// bl 0x830dd340
	ctx.lr = 0x830FE890;
	sub_830DD340(ctx, base);
	// stw r3,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r3.u32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x830fe8b0
	if (ctx.cr0.eq) goto loc_830FE8B0;
	// lis r11,-32228
	ctx.r11.s64 = -2112094208;
	// addi r4,r11,-7808
	ctx.r4.s64 = ctx.r11.s64 + -7808;
	// bl 0x830fd6b8
	ctx.lr = 0x830FE8A8;
	sub_830FD6B8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// b 0x830fe8b4
	goto loc_830FE8B4;
loc_830FE8B0:
	// li r4,0
	ctx.r4.s64 = 0;
loc_830FE8B4:
	// lwz r11,-4808(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + -4808);
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r11,4(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x830FE8D0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r3,8
	ctx.r3.s64 = 8;
	// bl 0x830dd340
	ctx.lr = 0x830FE8D8;
	sub_830DD340(ctx, base);
	// stw r3,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r3.u32);
	// lis r11,-32228
	ctx.r11.s64 = -2112094208;
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// addi r29,r11,-7568
	ctx.r29.s64 = ctx.r11.s64 + -7568;
	// beq 0x830fe8fc
	if (ctx.cr0.eq) goto loc_830FE8FC;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x830fd6b8
	ctx.lr = 0x830FE8F4;
	sub_830FD6B8(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// b 0x830fe900
	goto loc_830FE900;
loc_830FE8FC:
	// li r5,0
	ctx.r5.s64 = 0;
loc_830FE900:
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// lwz r3,-4812(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + -4812);
	// bl 0x8315f5d0
	ctx.lr = 0x830FE90C;
	sub_8315F5D0(ctx, base);
	// li r3,8
	ctx.r3.s64 = 8;
	// bl 0x830dd340
	ctx.lr = 0x830FE914;
	sub_830DD340(ctx, base);
	// stw r3,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r3.u32);
	// lis r11,-32228
	ctx.r11.s64 = -2112094208;
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// addi r29,r11,-7540
	ctx.r29.s64 = ctx.r11.s64 + -7540;
	// beq 0x830fe938
	if (ctx.cr0.eq) goto loc_830FE938;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x830fd6b8
	ctx.lr = 0x830FE930;
	sub_830FD6B8(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// b 0x830fe93c
	goto loc_830FE93C;
loc_830FE938:
	// li r5,0
	ctx.r5.s64 = 0;
loc_830FE93C:
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// lwz r3,-4812(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + -4812);
	// bl 0x8315f5d0
	ctx.lr = 0x830FE948;
	sub_8315F5D0(ctx, base);
	// li r3,8
	ctx.r3.s64 = 8;
	// bl 0x830dd340
	ctx.lr = 0x830FE950;
	sub_830DD340(ctx, base);
	// stw r3,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r3.u32);
	// lis r11,-32228
	ctx.r11.s64 = -2112094208;
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// addi r29,r11,-7524
	ctx.r29.s64 = ctx.r11.s64 + -7524;
	// beq 0x830fe974
	if (ctx.cr0.eq) goto loc_830FE974;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x830fd7a0
	ctx.lr = 0x830FE96C;
	sub_830FD7A0(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// b 0x830fe978
	goto loc_830FE978;
loc_830FE974:
	// li r5,0
	ctx.r5.s64 = 0;
loc_830FE978:
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// lwz r3,-4812(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + -4812);
	// bl 0x8315f5d0
	ctx.lr = 0x830FE984;
	sub_8315F5D0(ctx, base);
	// li r3,8
	ctx.r3.s64 = 8;
	// bl 0x830dd340
	ctx.lr = 0x830FE98C;
	sub_830DD340(ctx, base);
	// stw r3,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r3.u32);
	// lis r11,-32228
	ctx.r11.s64 = -2112094208;
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// addi r29,r11,-7508
	ctx.r29.s64 = ctx.r11.s64 + -7508;
	// beq 0x830fe9b0
	if (ctx.cr0.eq) goto loc_830FE9B0;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x830fd7a0
	ctx.lr = 0x830FE9A8;
	sub_830FD7A0(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// b 0x830fe9b4
	goto loc_830FE9B4;
loc_830FE9B0:
	// li r5,0
	ctx.r5.s64 = 0;
loc_830FE9B4:
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// lwz r3,-4812(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + -4812);
	// bl 0x8315f5d0
	ctx.lr = 0x830FE9C0;
	sub_8315F5D0(ctx, base);
	// li r3,8
	ctx.r3.s64 = 8;
	// bl 0x830dd340
	ctx.lr = 0x830FE9C8;
	sub_830DD340(ctx, base);
	// stw r3,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r3.u32);
	// lis r11,-32228
	ctx.r11.s64 = -2112094208;
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// addi r29,r11,-7488
	ctx.r29.s64 = ctx.r11.s64 + -7488;
	// beq 0x830fe9ec
	if (ctx.cr0.eq) goto loc_830FE9EC;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x830fd888
	ctx.lr = 0x830FE9E4;
	sub_830FD888(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// b 0x830fe9f0
	goto loc_830FE9F0;
loc_830FE9EC:
	// li r5,0
	ctx.r5.s64 = 0;
loc_830FE9F0:
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// lwz r3,-4812(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + -4812);
	// bl 0x8315f5d0
	ctx.lr = 0x830FE9FC;
	sub_8315F5D0(ctx, base);
	// li r3,8
	ctx.r3.s64 = 8;
	// bl 0x830dd340
	ctx.lr = 0x830FEA04;
	sub_830DD340(ctx, base);
	// stw r3,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r3.u32);
	// lis r11,-32228
	ctx.r11.s64 = -2112094208;
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// addi r29,r11,-7472
	ctx.r29.s64 = ctx.r11.s64 + -7472;
	// beq 0x830fea28
	if (ctx.cr0.eq) goto loc_830FEA28;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x830fd888
	ctx.lr = 0x830FEA20;
	sub_830FD888(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// b 0x830fea2c
	goto loc_830FEA2C;
loc_830FEA28:
	// li r5,0
	ctx.r5.s64 = 0;
loc_830FEA2C:
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// lwz r3,-4812(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + -4812);
	// bl 0x8315f5d0
	ctx.lr = 0x830FEA38;
	sub_8315F5D0(ctx, base);
	// li r3,8
	ctx.r3.s64 = 8;
	// bl 0x830dd340
	ctx.lr = 0x830FEA40;
	sub_830DD340(ctx, base);
	// stw r3,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r3.u32);
	// lis r11,-32228
	ctx.r11.s64 = -2112094208;
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// addi r29,r11,-7452
	ctx.r29.s64 = ctx.r11.s64 + -7452;
	// beq 0x830fea64
	if (ctx.cr0.eq) goto loc_830FEA64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x830fd888
	ctx.lr = 0x830FEA5C;
	sub_830FD888(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// b 0x830fea68
	goto loc_830FEA68;
loc_830FEA64:
	// li r5,0
	ctx.r5.s64 = 0;
loc_830FEA68:
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// lwz r3,-4812(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + -4812);
	// bl 0x8315f5d0
	ctx.lr = 0x830FEA74;
	sub_8315F5D0(ctx, base);
	// li r3,8
	ctx.r3.s64 = 8;
	// bl 0x830dd340
	ctx.lr = 0x830FEA7C;
	sub_830DD340(ctx, base);
	// stw r3,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r3.u32);
	// lis r11,-32228
	ctx.r11.s64 = -2112094208;
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// addi r29,r11,-7428
	ctx.r29.s64 = ctx.r11.s64 + -7428;
	// beq 0x830feaa0
	if (ctx.cr0.eq) goto loc_830FEAA0;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x830fd888
	ctx.lr = 0x830FEA98;
	sub_830FD888(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// b 0x830feaa4
	goto loc_830FEAA4;
loc_830FEAA0:
	// li r5,0
	ctx.r5.s64 = 0;
loc_830FEAA4:
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// lwz r3,-4812(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + -4812);
	// bl 0x8315f5d0
	ctx.lr = 0x830FEAB0;
	sub_8315F5D0(ctx, base);
	// li r3,8
	ctx.r3.s64 = 8;
	// bl 0x830dd340
	ctx.lr = 0x830FEAB8;
	sub_830DD340(ctx, base);
	// stw r3,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r3.u32);
	// lis r11,-32228
	ctx.r11.s64 = -2112094208;
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// addi r29,r11,-6280
	ctx.r29.s64 = ctx.r11.s64 + -6280;
	// beq 0x830feadc
	if (ctx.cr0.eq) goto loc_830FEADC;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x830fd970
	ctx.lr = 0x830FEAD4;
	sub_830FD970(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// b 0x830feae0
	goto loc_830FEAE0;
loc_830FEADC:
	// li r5,0
	ctx.r5.s64 = 0;
loc_830FEAE0:
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// lwz r3,-4812(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + -4812);
	// bl 0x8315f5d0
	ctx.lr = 0x830FEAEC;
	sub_8315F5D0(ctx, base);
	// addi r1,r31,128
	ctx.r1.s64 = ctx.r31.s64 + 128;
	// b 0x833a01f8
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_830FDD38"))) PPC_WEAK_FUNC(sub_830FDD38);
PPC_FUNC_IMPL(__imp__sub_830FDD38) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x833a01a8
	ctx.lr = 0x830FDD40;
	__savegprlr_28(ctx, base);
	// addi r31,r1,-128
	ctx.r31.s64 = ctx.r1.s64 + -128;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r30,8
	ctx.r30.s64 = 8;
	// lis r28,-31827
	ctx.r28.s64 = -2085814272;
loc_830FDD50:
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r3,-4808(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + -4808);
	// bl 0x830f4660
	ctx.lr = 0x830FDD5C;
	sub_830F4660(ctx, base);
	// addic. r30,r30,-1
	ctx.xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// bne 0x830fdd50
	if (!ctx.cr0.eq) goto loc_830FDD50;
	// li r3,8
	ctx.r3.s64 = 8;
	// bl 0x830dd340
	ctx.lr = 0x830FDD6C;
	sub_830DD340(ctx, base);
	// stw r3,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r3.u32);
	// lis r11,-32228
	ctx.r11.s64 = -2112094208;
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// addi r29,r11,-6252
	ctx.r29.s64 = ctx.r11.s64 + -6252;
	// beq 0x830fdd90
	if (ctx.cr0.eq) goto loc_830FDD90;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x830fd128
	ctx.lr = 0x830FDD88;
	sub_830FD128(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// b 0x830fdd94
	goto loc_830FDD94;
loc_830FDD90:
	// li r4,0
	ctx.r4.s64 = 0;
loc_830FDD94:
	// lwz r11,-4808(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + -4808);
	// li r5,7
	ctx.r5.s64 = 7;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r11,4(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x830FDDB0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r3,8
	ctx.r3.s64 = 8;
	// bl 0x830dd340
	ctx.lr = 0x830FDDB8;
	sub_830DD340(ctx, base);
	// stw r3,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r3.u32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x830fddd4
	if (ctx.cr0.eq) goto loc_830FDDD4;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x830fd128
	ctx.lr = 0x830FDDCC;
	sub_830FD128(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// b 0x830fddd8
	goto loc_830FDDD8;
loc_830FDDD4:
	// li r5,0
	ctx.r5.s64 = 0;
loc_830FDDD8:
	// lis r30,-31827
	ctx.r30.s64 = -2085814272;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// lwz r3,-4812(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + -4812);
	// bl 0x8315f5d0
	ctx.lr = 0x830FDDE8;
	sub_8315F5D0(ctx, base);
	// li r3,8
	ctx.r3.s64 = 8;
	// bl 0x830dd340
	ctx.lr = 0x830FDDF0;
	sub_830DD340(ctx, base);
	// stw r3,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r3.u32);
	// lis r11,-32228
	ctx.r11.s64 = -2112094208;
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// addi r29,r11,-6684
	ctx.r29.s64 = ctx.r11.s64 + -6684;
	// beq 0x830fde14
	if (ctx.cr0.eq) goto loc_830FDE14;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x830fd210
	ctx.lr = 0x830FDE0C;
	sub_830FD210(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// b 0x830fde18
	goto loc_830FDE18;
loc_830FDE14:
	// li r4,0
	ctx.r4.s64 = 0;
loc_830FDE18:
	// lwz r11,-4808(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + -4808);
	// li r5,3
	ctx.r5.s64 = 3;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r11,4(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x830FDE34;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r3,8
	ctx.r3.s64 = 8;
	// bl 0x830dd340
	ctx.lr = 0x830FDE3C;
	sub_830DD340(ctx, base);
	// stw r3,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r3.u32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x830fde58
	if (ctx.cr0.eq) goto loc_830FDE58;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x830fd210
	ctx.lr = 0x830FDE50;
	sub_830FD210(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// b 0x830fde5c
	goto loc_830FDE5C;
loc_830FDE58:
	// li r5,0
	ctx.r5.s64 = 0;
loc_830FDE5C:
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// lwz r3,-4812(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + -4812);
	// bl 0x8315f5d0
	ctx.lr = 0x830FDE68;
	sub_8315F5D0(ctx, base);
	// li r3,8
	ctx.r3.s64 = 8;
	// bl 0x830dd340
	ctx.lr = 0x830FDE70;
	sub_830DD340(ctx, base);
	// stw r3,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r3.u32);
	// lis r11,-32228
	ctx.r11.s64 = -2112094208;
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// addi r29,r11,-6664
	ctx.r29.s64 = ctx.r11.s64 + -6664;
	// beq 0x830fde94
	if (ctx.cr0.eq) goto loc_830FDE94;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x830fd210
	ctx.lr = 0x830FDE8C;
	sub_830FD210(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// b 0x830fde98
	goto loc_830FDE98;
loc_830FDE94:
	// li r5,0
	ctx.r5.s64 = 0;
loc_830FDE98:
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// lwz r3,-4812(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + -4812);
	// bl 0x8315f5d0
	ctx.lr = 0x830FDEA4;
	sub_8315F5D0(ctx, base);
	// li r3,8
	ctx.r3.s64 = 8;
	// bl 0x830dd340
	ctx.lr = 0x830FDEAC;
	sub_830DD340(ctx, base);
	// stw r3,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r3.u32);
	// lis r11,-32228
	ctx.r11.s64 = -2112094208;
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// addi r29,r11,-6648
	ctx.r29.s64 = ctx.r11.s64 + -6648;
	// beq 0x830fded0
	if (ctx.cr0.eq) goto loc_830FDED0;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x830fd210
	ctx.lr = 0x830FDEC8;
	sub_830FD210(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// b 0x830fded4
	goto loc_830FDED4;
loc_830FDED0:
	// li r5,0
	ctx.r5.s64 = 0;
loc_830FDED4:
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// lwz r3,-4812(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + -4812);
	// bl 0x8315f5d0
	ctx.lr = 0x830FDEE0;
	sub_8315F5D0(ctx, base);
	// li r3,8
	ctx.r3.s64 = 8;
	// bl 0x830dd340
	ctx.lr = 0x830FDEE8;
	sub_830DD340(ctx, base);
	// stw r3,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r3.u32);
	// lis r11,-32228
	ctx.r11.s64 = -2112094208;
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// addi r29,r11,-6636
	ctx.r29.s64 = ctx.r11.s64 + -6636;
	// beq 0x830fdf0c
	if (ctx.cr0.eq) goto loc_830FDF0C;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x830fd210
	ctx.lr = 0x830FDF04;
	sub_830FD210(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// b 0x830fdf10
	goto loc_830FDF10;
loc_830FDF0C:
	// li r5,0
	ctx.r5.s64 = 0;
loc_830FDF10:
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// lwz r3,-4812(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + -4812);
	// bl 0x8315f5d0
	ctx.lr = 0x830FDF1C;
	sub_8315F5D0(ctx, base);
	// li r3,8
	ctx.r3.s64 = 8;
	// bl 0x830dd340
	ctx.lr = 0x830FDF24;
	sub_830DD340(ctx, base);
	// stw r3,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r3.u32);
	// lis r11,-32228
	ctx.r11.s64 = -2112094208;
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// addi r29,r11,-6616
	ctx.r29.s64 = ctx.r11.s64 + -6616;
	// beq 0x830fdf48
	if (ctx.cr0.eq) goto loc_830FDF48;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x830fd2f8
	ctx.lr = 0x830FDF40;
	sub_830FD2F8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// b 0x830fdf4c
	goto loc_830FDF4C;
loc_830FDF48:
	// li r4,0
	ctx.r4.s64 = 0;
loc_830FDF4C:
	// lwz r11,-4808(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + -4808);
	// li r5,4
	ctx.r5.s64 = 4;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r11,4(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x830FDF68;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r3,8
	ctx.r3.s64 = 8;
	// bl 0x830dd340
	ctx.lr = 0x830FDF70;
	sub_830DD340(ctx, base);
	// stw r3,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r3.u32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x830fdf8c
	if (ctx.cr0.eq) goto loc_830FDF8C;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x830fd2f8
	ctx.lr = 0x830FDF84;
	sub_830FD2F8(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// b 0x830fdf90
	goto loc_830FDF90;
loc_830FDF8C:
	// li r5,0
	ctx.r5.s64 = 0;
loc_830FDF90:
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// lwz r3,-4812(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + -4812);
	// bl 0x8315f5d0
	ctx.lr = 0x830FDF9C;
	sub_8315F5D0(ctx, base);
	// li r3,8
	ctx.r3.s64 = 8;
	// bl 0x830dd340
	ctx.lr = 0x830FDFA4;
	sub_830DD340(ctx, base);
	// stw r3,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r3.u32);
	// lis r11,-32228
	ctx.r11.s64 = -2112094208;
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// addi r29,r11,-6604
	ctx.r29.s64 = ctx.r11.s64 + -6604;
	// beq 0x830fdfc8
	if (ctx.cr0.eq) goto loc_830FDFC8;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x830fd2f8
	ctx.lr = 0x830FDFC0;
	sub_830FD2F8(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// b 0x830fdfcc
	goto loc_830FDFCC;
loc_830FDFC8:
	// li r5,0
	ctx.r5.s64 = 0;
loc_830FDFCC:
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// lwz r3,-4812(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + -4812);
	// bl 0x8315f5d0
	ctx.lr = 0x830FDFD8;
	sub_8315F5D0(ctx, base);
	// li r3,8
	ctx.r3.s64 = 8;
	// bl 0x830dd340
	ctx.lr = 0x830FDFE0;
	sub_830DD340(ctx, base);
	// stw r3,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r3.u32);
	// lis r11,-32228
	ctx.r11.s64 = -2112094208;
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// addi r29,r11,-7316
	ctx.r29.s64 = ctx.r11.s64 + -7316;
	// beq 0x830fe004
	if (ctx.cr0.eq) goto loc_830FE004;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x830fd3e0
	ctx.lr = 0x830FDFFC;
	sub_830FD3E0(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// b 0x830fe008
	goto loc_830FE008;
loc_830FE004:
	// li r5,0
	ctx.r5.s64 = 0;
loc_830FE008:
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// lwz r3,-4812(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + -4812);
	// bl 0x8315f5d0
	ctx.lr = 0x830FE014;
	sub_8315F5D0(ctx, base);
	// li r3,8
	ctx.r3.s64 = 8;
	// bl 0x830dd340
	ctx.lr = 0x830FE01C;
	sub_830DD340(ctx, base);
	// stw r3,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r3.u32);
	// lis r11,-32228
	ctx.r11.s64 = -2112094208;
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// addi r29,r11,-7296
	ctx.r29.s64 = ctx.r11.s64 + -7296;
	// beq 0x830fe040
	if (ctx.cr0.eq) goto loc_830FE040;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x830fd3e0
	ctx.lr = 0x830FE038;
	sub_830FD3E0(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// b 0x830fe044
	goto loc_830FE044;
loc_830FE040:
	// li r5,0
	ctx.r5.s64 = 0;
loc_830FE044:
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// lwz r3,-4812(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + -4812);
	// bl 0x8315f5d0
	ctx.lr = 0x830FE050;
	sub_8315F5D0(ctx, base);
	// li r3,8
	ctx.r3.s64 = 8;
	// bl 0x830dd340
	ctx.lr = 0x830FE058;
	sub_830DD340(ctx, base);
	// stw r3,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r3.u32);
	// lis r11,-32228
	ctx.r11.s64 = -2112094208;
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// addi r29,r11,-7272
	ctx.r29.s64 = ctx.r11.s64 + -7272;
	// beq 0x830fe07c
	if (ctx.cr0.eq) goto loc_830FE07C;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x830fd3e0
	ctx.lr = 0x830FE074;
	sub_830FD3E0(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// b 0x830fe080
	goto loc_830FE080;
loc_830FE07C:
	// li r5,0
	ctx.r5.s64 = 0;
loc_830FE080:
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// lwz r3,-4812(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + -4812);
	// bl 0x8315f5d0
	ctx.lr = 0x830FE08C;
	sub_8315F5D0(ctx, base);
	// li r3,8
	ctx.r3.s64 = 8;
	// bl 0x830dd340
	ctx.lr = 0x830FE094;
	sub_830DD340(ctx, base);
	// stw r3,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r3.u32);
	// lis r11,-32228
	ctx.r11.s64 = -2112094208;
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// addi r29,r11,-7248
	ctx.r29.s64 = ctx.r11.s64 + -7248;
	// beq 0x830fe0b8
	if (ctx.cr0.eq) goto loc_830FE0B8;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x830fd3e0
	ctx.lr = 0x830FE0B0;
	sub_830FD3E0(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// b 0x830fe0bc
	goto loc_830FE0BC;
loc_830FE0B8:
	// li r5,0
	ctx.r5.s64 = 0;
loc_830FE0BC:
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// lwz r3,-4812(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + -4812);
	// bl 0x8315f5d0
	ctx.lr = 0x830FE0C8;
	sub_8315F5D0(ctx, base);
	// li r3,8
	ctx.r3.s64 = 8;
	// bl 0x830dd340
	ctx.lr = 0x830FE0D0;
	sub_830DD340(ctx, base);
	// stw r3,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r3.u32);
	// lis r11,-32228
	ctx.r11.s64 = -2112094208;
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// addi r29,r11,-7232
	ctx.r29.s64 = ctx.r11.s64 + -7232;
	// beq 0x830fe0f4
	if (ctx.cr0.eq) goto loc_830FE0F4;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x830fd3e0
	ctx.lr = 0x830FE0EC;
	sub_830FD3E0(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// b 0x830fe0f8
	goto loc_830FE0F8;
loc_830FE0F4:
	// li r5,0
	ctx.r5.s64 = 0;
loc_830FE0F8:
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// lwz r3,-4812(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + -4812);
	// bl 0x8315f5d0
	ctx.lr = 0x830FE104;
	sub_8315F5D0(ctx, base);
	// li r3,8
	ctx.r3.s64 = 8;
	// bl 0x830dd340
	ctx.lr = 0x830FE10C;
	sub_830DD340(ctx, base);
	// stw r3,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r3.u32);
	// lis r11,-32228
	ctx.r11.s64 = -2112094208;
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// addi r29,r11,-7216
	ctx.r29.s64 = ctx.r11.s64 + -7216;
	// beq 0x830fe130
	if (ctx.cr0.eq) goto loc_830FE130;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x830fd3e0
	ctx.lr = 0x830FE128;
	sub_830FD3E0(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// b 0x830fe134
	goto loc_830FE134;
loc_830FE130:
	// li r5,0
	ctx.r5.s64 = 0;
loc_830FE134:
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// lwz r3,-4812(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + -4812);
	// bl 0x8315f5d0
	ctx.lr = 0x830FE140;
	sub_8315F5D0(ctx, base);
	// li r3,8
	ctx.r3.s64 = 8;
	// bl 0x830dd340
	ctx.lr = 0x830FE148;
	sub_830DD340(ctx, base);
	// stw r3,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r3.u32);
	// lis r11,-32228
	ctx.r11.s64 = -2112094208;
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// addi r29,r11,-7200
	ctx.r29.s64 = ctx.r11.s64 + -7200;
	// beq 0x830fe16c
	if (ctx.cr0.eq) goto loc_830FE16C;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x830fd3e0
	ctx.lr = 0x830FE164;
	sub_830FD3E0(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// b 0x830fe170
	goto loc_830FE170;
loc_830FE16C:
	// li r5,0
	ctx.r5.s64 = 0;
loc_830FE170:
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// lwz r3,-4812(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + -4812);
	// bl 0x8315f5d0
	ctx.lr = 0x830FE17C;
	sub_8315F5D0(ctx, base);
	// li r3,8
	ctx.r3.s64 = 8;
	// bl 0x830dd340
	ctx.lr = 0x830FE184;
	sub_830DD340(ctx, base);
	// stw r3,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r3.u32);
	// lis r11,-32228
	ctx.r11.s64 = -2112094208;
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// addi r29,r11,-7184
	ctx.r29.s64 = ctx.r11.s64 + -7184;
	// beq 0x830fe1a8
	if (ctx.cr0.eq) goto loc_830FE1A8;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x830fd3e0
	ctx.lr = 0x830FE1A0;
	sub_830FD3E0(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// b 0x830fe1ac
	goto loc_830FE1AC;
loc_830FE1A8:
	// li r5,0
	ctx.r5.s64 = 0;
loc_830FE1AC:
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// lwz r3,-4812(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + -4812);
	// bl 0x8315f5d0
	ctx.lr = 0x830FE1B8;
	sub_8315F5D0(ctx, base);
	// li r3,8
	ctx.r3.s64 = 8;
	// bl 0x830dd340
	ctx.lr = 0x830FE1C0;
	sub_830DD340(ctx, base);
	// stw r3,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r3.u32);
	// lis r11,-32228
	ctx.r11.s64 = -2112094208;
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// addi r29,r11,-7168
	ctx.r29.s64 = ctx.r11.s64 + -7168;
	// beq 0x830fe1e4
	if (ctx.cr0.eq) goto loc_830FE1E4;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x830fd3e0
	ctx.lr = 0x830FE1DC;
	sub_830FD3E0(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// b 0x830fe1e8
	goto loc_830FE1E8;
loc_830FE1E4:
	// li r5,0
	ctx.r5.s64 = 0;
loc_830FE1E8:
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// lwz r3,-4812(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + -4812);
	// bl 0x8315f5d0
	ctx.lr = 0x830FE1F4;
	sub_8315F5D0(ctx, base);
	// li r3,8
	ctx.r3.s64 = 8;
	// bl 0x830dd340
	ctx.lr = 0x830FE1FC;
	sub_830DD340(ctx, base);
	// stw r3,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r3.u32);
	// lis r11,-32228
	ctx.r11.s64 = -2112094208;
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// addi r29,r11,-7156
	ctx.r29.s64 = ctx.r11.s64 + -7156;
	// beq 0x830fe220
	if (ctx.cr0.eq) goto loc_830FE220;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x830fd3e0
	ctx.lr = 0x830FE218;
	sub_830FD3E0(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// b 0x830fe224
	goto loc_830FE224;
loc_830FE220:
	// li r5,0
	ctx.r5.s64 = 0;
loc_830FE224:
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// lwz r3,-4812(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + -4812);
	// bl 0x8315f5d0
	ctx.lr = 0x830FE230;
	sub_8315F5D0(ctx, base);
	// li r3,8
	ctx.r3.s64 = 8;
	// bl 0x830dd340
	ctx.lr = 0x830FE238;
	sub_830DD340(ctx, base);
	// stw r3,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r3.u32);
	// lis r11,-32228
	ctx.r11.s64 = -2112094208;
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// addi r29,r11,-7132
	ctx.r29.s64 = ctx.r11.s64 + -7132;
	// beq 0x830fe25c
	if (ctx.cr0.eq) goto loc_830FE25C;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x830fd3e0
	ctx.lr = 0x830FE254;
	sub_830FD3E0(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// b 0x830fe260
	goto loc_830FE260;
loc_830FE25C:
	// li r5,0
	ctx.r5.s64 = 0;
loc_830FE260:
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// lwz r3,-4812(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + -4812);
	// bl 0x8315f5d0
	ctx.lr = 0x830FE26C;
	sub_8315F5D0(ctx, base);
	// li r3,8
	ctx.r3.s64 = 8;
	// bl 0x830dd340
	ctx.lr = 0x830FE274;
	sub_830DD340(ctx, base);
	// stw r3,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r3.u32);
	// lis r11,-32228
	ctx.r11.s64 = -2112094208;
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// addi r29,r11,-7108
	ctx.r29.s64 = ctx.r11.s64 + -7108;
	// beq 0x830fe298
	if (ctx.cr0.eq) goto loc_830FE298;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x830fd3e0
	ctx.lr = 0x830FE290;
	sub_830FD3E0(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// b 0x830fe29c
	goto loc_830FE29C;
loc_830FE298:
	// li r5,0
	ctx.r5.s64 = 0;
loc_830FE29C:
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// lwz r3,-4812(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + -4812);
	// bl 0x8315f5d0
	ctx.lr = 0x830FE2A8;
	sub_8315F5D0(ctx, base);
	// li r3,12
	ctx.r3.s64 = 12;
	// bl 0x830dd340
	ctx.lr = 0x830FE2B0;
	sub_830DD340(ctx, base);
	// stw r3,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r3.u32);
	// lis r11,-32228
	ctx.r11.s64 = -2112094208;
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// addi r29,r11,-6428
	ctx.r29.s64 = ctx.r11.s64 + -6428;
	// beq 0x830fe2d8
	if (ctx.cr0.eq) goto loc_830FE2D8;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x830fd4c8
	ctx.lr = 0x830FE2D0;
	sub_830FD4C8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// b 0x830fe2dc
	goto loc_830FE2DC;
loc_830FE2D8:
	// li r4,0
	ctx.r4.s64 = 0;
loc_830FE2DC:
	// lwz r11,-4808(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + -4808);
	// li r5,6
	ctx.r5.s64 = 6;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r11,4(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x830FE2F8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r3,12
	ctx.r3.s64 = 12;
	// bl 0x830dd340
	ctx.lr = 0x830FE300;
	sub_830DD340(ctx, base);
	// stw r3,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r3.u32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x830fe320
	if (ctx.cr0.eq) goto loc_830FE320;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x830fd4c8
	ctx.lr = 0x830FE318;
	sub_830FD4C8(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// b 0x830fe324
	goto loc_830FE324;
loc_830FE320:
	// li r5,0
	ctx.r5.s64 = 0;
loc_830FE324:
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// lwz r3,-4812(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + -4812);
	// bl 0x8315f5d0
	ctx.lr = 0x830FE330;
	sub_8315F5D0(ctx, base);
	// li r3,12
	ctx.r3.s64 = 12;
	// bl 0x830dd340
	ctx.lr = 0x830FE338;
	sub_830DD340(ctx, base);
	// stw r3,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r3.u32);
	// lis r11,-32228
	ctx.r11.s64 = -2112094208;
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// addi r29,r11,-6404
	ctx.r29.s64 = ctx.r11.s64 + -6404;
	// beq 0x830fe360
	if (ctx.cr0.eq) goto loc_830FE360;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x830fd4c8
	ctx.lr = 0x830FE358;
	sub_830FD4C8(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// b 0x830fe364
	goto loc_830FE364;
loc_830FE360:
	// li r5,0
	ctx.r5.s64 = 0;
loc_830FE364:
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// lwz r3,-4812(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + -4812);
	// bl 0x8315f5d0
	ctx.lr = 0x830FE370;
	sub_8315F5D0(ctx, base);
	// li r3,12
	ctx.r3.s64 = 12;
	// bl 0x830dd340
	ctx.lr = 0x830FE378;
	sub_830DD340(ctx, base);
	// stw r3,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r3.u32);
	// lis r11,-32228
	ctx.r11.s64 = -2112094208;
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// addi r29,r11,-6724
	ctx.r29.s64 = ctx.r11.s64 + -6724;
	// beq 0x830fe3a0
	if (ctx.cr0.eq) goto loc_830FE3A0;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x830fd5c0
	ctx.lr = 0x830FE398;
	sub_830FD5C0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// b 0x830fe3a4
	goto loc_830FE3A4;
loc_830FE3A0:
	// li r4,0
	ctx.r4.s64 = 0;
loc_830FE3A4:
	// lwz r11,-4808(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + -4808);
	// li r5,2
	ctx.r5.s64 = 2;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r11,4(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x830FE3C0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r3,12
	ctx.r3.s64 = 12;
	// bl 0x830dd340
	ctx.lr = 0x830FE3C8;
	sub_830DD340(ctx, base);
	// stw r3,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r3.u32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x830fe3e8
	if (ctx.cr0.eq) goto loc_830FE3E8;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x830fd5c0
	ctx.lr = 0x830FE3E0;
	sub_830FD5C0(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// b 0x830fe3ec
	goto loc_830FE3EC;
loc_830FE3E8:
	// li r5,0
	ctx.r5.s64 = 0;
loc_830FE3EC:
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// lwz r3,-4812(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + -4812);
	// bl 0x8315f5d0
	ctx.lr = 0x830FE3F8;
	sub_8315F5D0(ctx, base);
	// li r3,12
	ctx.r3.s64 = 12;
	// bl 0x830dd340
	ctx.lr = 0x830FE400;
	sub_830DD340(ctx, base);
	// stw r3,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r3.u32);
	// lis r11,-32228
	ctx.r11.s64 = -2112094208;
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// addi r29,r11,-6700
	ctx.r29.s64 = ctx.r11.s64 + -6700;
	// beq 0x830fe428
	if (ctx.cr0.eq) goto loc_830FE428;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x830fd5c0
	ctx.lr = 0x830FE420;
	sub_830FD5C0(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// b 0x830fe42c
	goto loc_830FE42C;
loc_830FE428:
	// li r5,0
	ctx.r5.s64 = 0;
loc_830FE42C:
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// lwz r3,-4812(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + -4812);
	// bl 0x8315f5d0
	ctx.lr = 0x830FE438;
	sub_8315F5D0(ctx, base);
	// li r3,12
	ctx.r3.s64 = 12;
	// bl 0x830dd340
	ctx.lr = 0x830FE440;
	sub_830DD340(ctx, base);
	// stw r3,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r3.u32);
	// lis r11,-32228
	ctx.r11.s64 = -2112094208;
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// addi r29,r11,-6472
	ctx.r29.s64 = ctx.r11.s64 + -6472;
	// beq 0x830fe468
	if (ctx.cr0.eq) goto loc_830FE468;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// li r5,1
	ctx.r5.s64 = 1;
	// bl 0x830fd4c8
	ctx.lr = 0x830FE460;
	sub_830FD4C8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// b 0x830fe46c
	goto loc_830FE46C;
loc_830FE468:
	// li r4,0
	ctx.r4.s64 = 0;
loc_830FE46C:
	// lwz r11,-4808(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + -4808);
	// li r5,5
	ctx.r5.s64 = 5;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r11,4(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x830FE488;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r3,12
	ctx.r3.s64 = 12;
	// bl 0x830dd340
	ctx.lr = 0x830FE490;
	sub_830DD340(ctx, base);
	// stw r3,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r3.u32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x830fe4b0
	if (ctx.cr0.eq) goto loc_830FE4B0;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// li r5,1
	ctx.r5.s64 = 1;
	// bl 0x830fd4c8
	ctx.lr = 0x830FE4A8;
	sub_830FD4C8(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// b 0x830fe4b4
	goto loc_830FE4B4;
loc_830FE4B0:
	// li r5,0
	ctx.r5.s64 = 0;
loc_830FE4B4:
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// lwz r3,-4812(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + -4812);
	// bl 0x8315f5d0
	ctx.lr = 0x830FE4C0;
	sub_8315F5D0(ctx, base);
	// li r3,12
	ctx.r3.s64 = 12;
	// bl 0x830dd340
	ctx.lr = 0x830FE4C8;
	sub_830DD340(ctx, base);
	// stw r3,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r3.u32);
	// lis r11,-32228
	ctx.r11.s64 = -2112094208;
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// addi r29,r11,-6448
	ctx.r29.s64 = ctx.r11.s64 + -6448;
	// beq 0x830fe4f0
	if (ctx.cr0.eq) goto loc_830FE4F0;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// li r5,1
	ctx.r5.s64 = 1;
	// bl 0x830fd4c8
	ctx.lr = 0x830FE4E8;
	sub_830FD4C8(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// b 0x830fe4f4
	goto loc_830FE4F4;
loc_830FE4F0:
	// li r5,0
	ctx.r5.s64 = 0;
loc_830FE4F4:
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// lwz r3,-4812(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + -4812);
	// bl 0x8315f5d0
	ctx.lr = 0x830FE500;
	sub_8315F5D0(ctx, base);
	// li r3,12
	ctx.r3.s64 = 12;
	// bl 0x830dd340
	ctx.lr = 0x830FE508;
	sub_830DD340(ctx, base);
	// stw r3,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r3.u32);
	// lis r11,-32228
	ctx.r11.s64 = -2112094208;
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// addi r29,r11,-6764
	ctx.r29.s64 = ctx.r11.s64 + -6764;
	// beq 0x830fe530
	if (ctx.cr0.eq) goto loc_830FE530;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// li r5,1
	ctx.r5.s64 = 1;
	// bl 0x830fd5c0
	ctx.lr = 0x830FE528;
	sub_830FD5C0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// b 0x830fe534
	goto loc_830FE534;
loc_830FE530:
	// li r4,0
	ctx.r4.s64 = 0;
loc_830FE534:
	// lwz r11,-4808(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + -4808);
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r11,4(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x830FE550;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r3,12
	ctx.r3.s64 = 12;
	// bl 0x830dd340
	ctx.lr = 0x830FE558;
	sub_830DD340(ctx, base);
	// stw r3,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r3.u32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x830fe578
	if (ctx.cr0.eq) goto loc_830FE578;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// li r5,1
	ctx.r5.s64 = 1;
	// bl 0x830fd5c0
	ctx.lr = 0x830FE570;
	sub_830FD5C0(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// b 0x830fe57c
	goto loc_830FE57C;
loc_830FE578:
	// li r5,0
	ctx.r5.s64 = 0;
loc_830FE57C:
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// lwz r3,-4812(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + -4812);
	// bl 0x8315f5d0
	ctx.lr = 0x830FE588;
	sub_8315F5D0(ctx, base);
	// li r3,12
	ctx.r3.s64 = 12;
	// bl 0x830dd340
	ctx.lr = 0x830FE590;
	sub_830DD340(ctx, base);
	// stw r3,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r3.u32);
	// lis r11,-32228
	ctx.r11.s64 = -2112094208;
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// addi r29,r11,-6740
	ctx.r29.s64 = ctx.r11.s64 + -6740;
	// beq 0x830fe5b8
	if (ctx.cr0.eq) goto loc_830FE5B8;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// li r5,1
	ctx.r5.s64 = 1;
	// bl 0x830fd5c0
	ctx.lr = 0x830FE5B0;
	sub_830FD5C0(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// b 0x830fe5bc
	goto loc_830FE5BC;
loc_830FE5B8:
	// li r5,0
	ctx.r5.s64 = 0;
loc_830FE5BC:
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// lwz r3,-4812(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + -4812);
	// bl 0x8315f5d0
	ctx.lr = 0x830FE5C8;
	sub_8315F5D0(ctx, base);
	// li r3,12
	ctx.r3.s64 = 12;
	// bl 0x830dd340
	ctx.lr = 0x830FE5D0;
	sub_830DD340(ctx, base);
	// stw r3,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r3.u32);
	// lis r11,-32228
	ctx.r11.s64 = -2112094208;
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// addi r29,r11,-6592
	ctx.r29.s64 = ctx.r11.s64 + -6592;
	// beq 0x830fe5f8
	if (ctx.cr0.eq) goto loc_830FE5F8;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x830fd4c8
	ctx.lr = 0x830FE5F0;
	sub_830FD4C8(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// b 0x830fe5fc
	goto loc_830FE5FC;
loc_830FE5F8:
	// li r5,0
	ctx.r5.s64 = 0;
loc_830FE5FC:
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// lwz r3,-4812(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + -4812);
	// bl 0x8315f5d0
	ctx.lr = 0x830FE608;
	sub_8315F5D0(ctx, base);
	// li r3,12
	ctx.r3.s64 = 12;
	// bl 0x830dd340
	ctx.lr = 0x830FE610;
	sub_830DD340(ctx, base);
	// stw r3,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r3.u32);
	// lis r11,-32228
	ctx.r11.s64 = -2112094208;
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// addi r29,r11,-6576
	ctx.r29.s64 = ctx.r11.s64 + -6576;
	// beq 0x830fe638
	if (ctx.cr0.eq) goto loc_830FE638;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x830fd4c8
	ctx.lr = 0x830FE630;
	sub_830FD4C8(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// b 0x830fe63c
	goto loc_830FE63C;
loc_830FE638:
	// li r5,0
	ctx.r5.s64 = 0;
loc_830FE63C:
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// lwz r3,-4812(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + -4812);
	// bl 0x8315f5d0
	ctx.lr = 0x830FE648;
	sub_8315F5D0(ctx, base);
	// li r3,12
	ctx.r3.s64 = 12;
	// bl 0x830dd340
	ctx.lr = 0x830FE650;
	sub_830DD340(ctx, base);
	// stw r3,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r3.u32);
	// lis r11,-32228
	ctx.r11.s64 = -2112094208;
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// addi r29,r11,-6564
	ctx.r29.s64 = ctx.r11.s64 + -6564;
	// beq 0x830fe678
	if (ctx.cr0.eq) goto loc_830FE678;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x830fd4c8
	ctx.lr = 0x830FE670;
	sub_830FD4C8(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// b 0x830fe67c
	goto loc_830FE67C;
loc_830FE678:
	// li r5,0
	ctx.r5.s64 = 0;
loc_830FE67C:
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// lwz r3,-4812(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + -4812);
	// bl 0x8315f5d0
	ctx.lr = 0x830FE688;
	sub_8315F5D0(ctx, base);
	// li r3,12
	ctx.r3.s64 = 12;
	// bl 0x830dd340
	ctx.lr = 0x830FE690;
	sub_830DD340(ctx, base);
	// stw r3,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r3.u32);
	// lis r11,-32228
	ctx.r11.s64 = -2112094208;
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// addi r29,r11,-6548
	ctx.r29.s64 = ctx.r11.s64 + -6548;
	// beq 0x830fe6b8
	if (ctx.cr0.eq) goto loc_830FE6B8;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x830fd4c8
	ctx.lr = 0x830FE6B0;
	sub_830FD4C8(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// b 0x830fe6bc
	goto loc_830FE6BC;
loc_830FE6B8:
	// li r5,0
	ctx.r5.s64 = 0;
loc_830FE6BC:
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// lwz r3,-4812(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + -4812);
	// bl 0x8315f5d0
	ctx.lr = 0x830FE6C8;
	sub_8315F5D0(ctx, base);
	// li r3,12
	ctx.r3.s64 = 12;
	// bl 0x830dd340
	ctx.lr = 0x830FE6D0;
	sub_830DD340(ctx, base);
	// stw r3,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r3.u32);
	// lis r11,-32228
	ctx.r11.s64 = -2112094208;
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// addi r29,r11,-6528
	ctx.r29.s64 = ctx.r11.s64 + -6528;
	// beq 0x830fe6f8
	if (ctx.cr0.eq) goto loc_830FE6F8;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x830fd4c8
	ctx.lr = 0x830FE6F0;
	sub_830FD4C8(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// b 0x830fe6fc
	goto loc_830FE6FC;
loc_830FE6F8:
	// li r5,0
	ctx.r5.s64 = 0;
loc_830FE6FC:
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// lwz r3,-4812(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + -4812);
	// bl 0x8315f5d0
	ctx.lr = 0x830FE708;
	sub_8315F5D0(ctx, base);
	// li r3,12
	ctx.r3.s64 = 12;
	// bl 0x830dd340
	ctx.lr = 0x830FE710;
	sub_830DD340(ctx, base);
	// stw r3,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r3.u32);
	// lis r11,-32228
	ctx.r11.s64 = -2112094208;
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// addi r29,r11,-6516
	ctx.r29.s64 = ctx.r11.s64 + -6516;
	// beq 0x830fe738
	if (ctx.cr0.eq) goto loc_830FE738;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x830fd4c8
	ctx.lr = 0x830FE730;
	sub_830FD4C8(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// b 0x830fe73c
	goto loc_830FE73C;
loc_830FE738:
	// li r5,0
	ctx.r5.s64 = 0;
loc_830FE73C:
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// lwz r3,-4812(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + -4812);
	// bl 0x8315f5d0
	ctx.lr = 0x830FE748;
	sub_8315F5D0(ctx, base);
	// li r3,12
	ctx.r3.s64 = 12;
	// bl 0x830dd340
	ctx.lr = 0x830FE750;
	sub_830DD340(ctx, base);
	// stw r3,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r3.u32);
	// lis r11,-32228
	ctx.r11.s64 = -2112094208;
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// addi r29,r11,-6504
	ctx.r29.s64 = ctx.r11.s64 + -6504;
	// beq 0x830fe778
	if (ctx.cr0.eq) goto loc_830FE778;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x830fd4c8
	ctx.lr = 0x830FE770;
	sub_830FD4C8(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// b 0x830fe77c
	goto loc_830FE77C;
loc_830FE778:
	// li r5,0
	ctx.r5.s64 = 0;
loc_830FE77C:
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// lwz r3,-4812(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + -4812);
	// bl 0x8315f5d0
	ctx.lr = 0x830FE788;
	sub_8315F5D0(ctx, base);
	// li r3,12
	ctx.r3.s64 = 12;
	// bl 0x830dd340
	ctx.lr = 0x830FE790;
	sub_830DD340(ctx, base);
	// stw r3,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r3.u32);
	// lis r11,-32228
	ctx.r11.s64 = -2112094208;
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// addi r29,r11,-6816
	ctx.r29.s64 = ctx.r11.s64 + -6816;
	// beq 0x830fe7b8
	if (ctx.cr0.eq) goto loc_830FE7B8;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x830fd5c0
	ctx.lr = 0x830FE7B0;
	sub_830FD5C0(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// b 0x830fe7bc
	goto loc_830FE7BC;
loc_830FE7B8:
	// li r5,0
	ctx.r5.s64 = 0;
loc_830FE7BC:
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// lwz r3,-4812(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + -4812);
	// bl 0x8315f5d0
	ctx.lr = 0x830FE7C8;
	sub_8315F5D0(ctx, base);
	// li r3,12
	ctx.r3.s64 = 12;
	// bl 0x830dd340
	ctx.lr = 0x830FE7D0;
	sub_830DD340(ctx, base);
	// stw r3,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r3.u32);
	// lis r11,-32228
	ctx.r11.s64 = -2112094208;
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// addi r29,r11,-6804
	ctx.r29.s64 = ctx.r11.s64 + -6804;
	// beq 0x830fe7f8
	if (ctx.cr0.eq) goto loc_830FE7F8;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x830fd5c0
	ctx.lr = 0x830FE7F0;
	sub_830FD5C0(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// b 0x830fe7fc
	goto loc_830FE7FC;
loc_830FE7F8:
	// li r5,0
	ctx.r5.s64 = 0;
loc_830FE7FC:
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// lwz r3,-4812(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + -4812);
	// bl 0x8315f5d0
	ctx.lr = 0x830FE808;
	sub_8315F5D0(ctx, base);
	// li r3,12
	ctx.r3.s64 = 12;
	// bl 0x830dd340
	ctx.lr = 0x830FE810;
	sub_830DD340(ctx, base);
	// stw r3,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r3.u32);
	// lis r11,-32228
	ctx.r11.s64 = -2112094208;
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// addi r29,r11,-6792
	ctx.r29.s64 = ctx.r11.s64 + -6792;
	// beq 0x830fe838
	if (ctx.cr0.eq) goto loc_830FE838;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x830fd5c0
	ctx.lr = 0x830FE830;
	sub_830FD5C0(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// b 0x830fe83c
	goto loc_830FE83C;
loc_830FE838:
	// li r5,0
	ctx.r5.s64 = 0;
loc_830FE83C:
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// lwz r3,-4812(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + -4812);
	// bl 0x8315f5d0
	ctx.lr = 0x830FE848;
	sub_8315F5D0(ctx, base);
	// li r3,12
	ctx.r3.s64 = 12;
	// bl 0x830dd340
	ctx.lr = 0x830FE850;
	sub_830DD340(ctx, base);
	// stw r3,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r3.u32);
	// lis r11,-32228
	ctx.r11.s64 = -2112094208;
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// addi r29,r11,-6780
	ctx.r29.s64 = ctx.r11.s64 + -6780;
	// beq 0x830fe878
	if (ctx.cr0.eq) goto loc_830FE878;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x830fd5c0
	ctx.lr = 0x830FE870;
	sub_830FD5C0(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// b 0x830fe87c
	goto loc_830FE87C;
loc_830FE878:
	// li r5,0
	ctx.r5.s64 = 0;
loc_830FE87C:
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// lwz r3,-4812(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + -4812);
	// bl 0x8315f5d0
	ctx.lr = 0x830FE888;
	sub_8315F5D0(ctx, base);
	// li r3,8
	ctx.r3.s64 = 8;
	// bl 0x830dd340
	ctx.lr = 0x830FE890;
	sub_830DD340(ctx, base);
	// stw r3,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r3.u32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x830fe8b0
	if (ctx.cr0.eq) goto loc_830FE8B0;
	// lis r11,-32228
	ctx.r11.s64 = -2112094208;
	// addi r4,r11,-7808
	ctx.r4.s64 = ctx.r11.s64 + -7808;
	// bl 0x830fd6b8
	ctx.lr = 0x830FE8A8;
	sub_830FD6B8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// b 0x830fe8b4
	goto loc_830FE8B4;
loc_830FE8B0:
	// li r4,0
	ctx.r4.s64 = 0;
loc_830FE8B4:
	// lwz r11,-4808(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + -4808);
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r11,4(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x830FE8D0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r3,8
	ctx.r3.s64 = 8;
	// bl 0x830dd340
	ctx.lr = 0x830FE8D8;
	sub_830DD340(ctx, base);
	// stw r3,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r3.u32);
	// lis r11,-32228
	ctx.r11.s64 = -2112094208;
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// addi r29,r11,-7568
	ctx.r29.s64 = ctx.r11.s64 + -7568;
	// beq 0x830fe8fc
	if (ctx.cr0.eq) goto loc_830FE8FC;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x830fd6b8
	ctx.lr = 0x830FE8F4;
	sub_830FD6B8(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// b 0x830fe900
	goto loc_830FE900;
loc_830FE8FC:
	// li r5,0
	ctx.r5.s64 = 0;
loc_830FE900:
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// lwz r3,-4812(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + -4812);
	// bl 0x8315f5d0
	ctx.lr = 0x830FE90C;
	sub_8315F5D0(ctx, base);
	// li r3,8
	ctx.r3.s64 = 8;
	// bl 0x830dd340
	ctx.lr = 0x830FE914;
	sub_830DD340(ctx, base);
	// stw r3,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r3.u32);
	// lis r11,-32228
	ctx.r11.s64 = -2112094208;
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// addi r29,r11,-7540
	ctx.r29.s64 = ctx.r11.s64 + -7540;
	// beq 0x830fe938
	if (ctx.cr0.eq) goto loc_830FE938;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x830fd6b8
	ctx.lr = 0x830FE930;
	sub_830FD6B8(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// b 0x830fe93c
	goto loc_830FE93C;
loc_830FE938:
	// li r5,0
	ctx.r5.s64 = 0;
loc_830FE93C:
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// lwz r3,-4812(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + -4812);
	// bl 0x8315f5d0
	ctx.lr = 0x830FE948;
	sub_8315F5D0(ctx, base);
	// li r3,8
	ctx.r3.s64 = 8;
	// bl 0x830dd340
	ctx.lr = 0x830FE950;
	sub_830DD340(ctx, base);
	// stw r3,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r3.u32);
	// lis r11,-32228
	ctx.r11.s64 = -2112094208;
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// addi r29,r11,-7524
	ctx.r29.s64 = ctx.r11.s64 + -7524;
	// beq 0x830fe974
	if (ctx.cr0.eq) goto loc_830FE974;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x830fd7a0
	ctx.lr = 0x830FE96C;
	sub_830FD7A0(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// b 0x830fe978
	goto loc_830FE978;
loc_830FE974:
	// li r5,0
	ctx.r5.s64 = 0;
loc_830FE978:
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// lwz r3,-4812(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + -4812);
	// bl 0x8315f5d0
	ctx.lr = 0x830FE984;
	sub_8315F5D0(ctx, base);
	// li r3,8
	ctx.r3.s64 = 8;
	// bl 0x830dd340
	ctx.lr = 0x830FE98C;
	sub_830DD340(ctx, base);
	// stw r3,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r3.u32);
	// lis r11,-32228
	ctx.r11.s64 = -2112094208;
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// addi r29,r11,-7508
	ctx.r29.s64 = ctx.r11.s64 + -7508;
	// beq 0x830fe9b0
	if (ctx.cr0.eq) goto loc_830FE9B0;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x830fd7a0
	ctx.lr = 0x830FE9A8;
	sub_830FD7A0(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// b 0x830fe9b4
	goto loc_830FE9B4;
loc_830FE9B0:
	// li r5,0
	ctx.r5.s64 = 0;
loc_830FE9B4:
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// lwz r3,-4812(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + -4812);
	// bl 0x8315f5d0
	ctx.lr = 0x830FE9C0;
	sub_8315F5D0(ctx, base);
	// li r3,8
	ctx.r3.s64 = 8;
	// bl 0x830dd340
	ctx.lr = 0x830FE9C8;
	sub_830DD340(ctx, base);
	// stw r3,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r3.u32);
	// lis r11,-32228
	ctx.r11.s64 = -2112094208;
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// addi r29,r11,-7488
	ctx.r29.s64 = ctx.r11.s64 + -7488;
	// beq 0x830fe9ec
	if (ctx.cr0.eq) goto loc_830FE9EC;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x830fd888
	ctx.lr = 0x830FE9E4;
	sub_830FD888(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// b 0x830fe9f0
	goto loc_830FE9F0;
loc_830FE9EC:
	// li r5,0
	ctx.r5.s64 = 0;
loc_830FE9F0:
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// lwz r3,-4812(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + -4812);
	// bl 0x8315f5d0
	ctx.lr = 0x830FE9FC;
	sub_8315F5D0(ctx, base);
	// li r3,8
	ctx.r3.s64 = 8;
	// bl 0x830dd340
	ctx.lr = 0x830FEA04;
	sub_830DD340(ctx, base);
	// stw r3,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r3.u32);
	// lis r11,-32228
	ctx.r11.s64 = -2112094208;
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// addi r29,r11,-7472
	ctx.r29.s64 = ctx.r11.s64 + -7472;
	// beq 0x830fea28
	if (ctx.cr0.eq) goto loc_830FEA28;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x830fd888
	ctx.lr = 0x830FEA20;
	sub_830FD888(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// b 0x830fea2c
	goto loc_830FEA2C;
loc_830FEA28:
	// li r5,0
	ctx.r5.s64 = 0;
loc_830FEA2C:
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// lwz r3,-4812(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + -4812);
	// bl 0x8315f5d0
	ctx.lr = 0x830FEA38;
	sub_8315F5D0(ctx, base);
	// li r3,8
	ctx.r3.s64 = 8;
	// bl 0x830dd340
	ctx.lr = 0x830FEA40;
	sub_830DD340(ctx, base);
	// stw r3,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r3.u32);
	// lis r11,-32228
	ctx.r11.s64 = -2112094208;
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// addi r29,r11,-7452
	ctx.r29.s64 = ctx.r11.s64 + -7452;
	// beq 0x830fea64
	if (ctx.cr0.eq) goto loc_830FEA64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x830fd888
	ctx.lr = 0x830FEA5C;
	sub_830FD888(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// b 0x830fea68
	goto loc_830FEA68;
loc_830FEA64:
	// li r5,0
	ctx.r5.s64 = 0;
loc_830FEA68:
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// lwz r3,-4812(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + -4812);
	// bl 0x8315f5d0
	ctx.lr = 0x830FEA74;
	sub_8315F5D0(ctx, base);
	// li r3,8
	ctx.r3.s64 = 8;
	// bl 0x830dd340
	ctx.lr = 0x830FEA7C;
	sub_830DD340(ctx, base);
	// stw r3,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r3.u32);
	// lis r11,-32228
	ctx.r11.s64 = -2112094208;
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// addi r29,r11,-7428
	ctx.r29.s64 = ctx.r11.s64 + -7428;
	// beq 0x830feaa0
	if (ctx.cr0.eq) goto loc_830FEAA0;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x830fd888
	ctx.lr = 0x830FEA98;
	sub_830FD888(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// b 0x830feaa4
	goto loc_830FEAA4;
loc_830FEAA0:
	// li r5,0
	ctx.r5.s64 = 0;
loc_830FEAA4:
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// lwz r3,-4812(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + -4812);
	// bl 0x8315f5d0
	ctx.lr = 0x830FEAB0;
	sub_8315F5D0(ctx, base);
	// li r3,8
	ctx.r3.s64 = 8;
	// bl 0x830dd340
	ctx.lr = 0x830FEAB8;
	sub_830DD340(ctx, base);
	// stw r3,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r3.u32);
	// lis r11,-32228
	ctx.r11.s64 = -2112094208;
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// addi r29,r11,-6280
	ctx.r29.s64 = ctx.r11.s64 + -6280;
	// beq 0x830feadc
	if (ctx.cr0.eq) goto loc_830FEADC;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x830fd970
	ctx.lr = 0x830FEAD4;
	sub_830FD970(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// b 0x830feae0
	goto loc_830FEAE0;
loc_830FEADC:
	// li r5,0
	ctx.r5.s64 = 0;
loc_830FEAE0:
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// lwz r3,-4812(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + -4812);
	// bl 0x8315f5d0
	ctx.lr = 0x830FEAEC;
	sub_8315F5D0(ctx, base);
	// addi r1,r31,128
	ctx.r1.s64 = ctx.r31.s64 + 128;
	// b 0x833a01f8
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_830FEAF4"))) PPC_WEAK_FUNC(sub_830FEAF4);
PPC_FUNC_IMPL(__imp__sub_830FEAF4) {
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
	// lwz r3,80(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	// bl 0x830dd3e0
	ctx.lr = 0x830FEB0C;
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

__attribute__((alias("__imp__sub_830FEB1C"))) PPC_WEAK_FUNC(sub_830FEB1C);
PPC_FUNC_IMPL(__imp__sub_830FEB1C) {
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
	// lwz r3,80(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	// bl 0x830dd3e0
	ctx.lr = 0x830FEB34;
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

__attribute__((alias("__imp__sub_830FEB44"))) PPC_WEAK_FUNC(sub_830FEB44);
PPC_FUNC_IMPL(__imp__sub_830FEB44) {
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
	// lwz r3,80(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	// bl 0x830dd3e0
	ctx.lr = 0x830FEB5C;
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

__attribute__((alias("__imp__sub_830FEB6C"))) PPC_WEAK_FUNC(sub_830FEB6C);
PPC_FUNC_IMPL(__imp__sub_830FEB6C) {
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
	// lwz r3,80(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	// bl 0x830dd3e0
	ctx.lr = 0x830FEB84;
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

__attribute__((alias("__imp__sub_830FEB94"))) PPC_WEAK_FUNC(sub_830FEB94);
PPC_FUNC_IMPL(__imp__sub_830FEB94) {
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
	// lwz r3,80(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	// bl 0x830dd3e0
	ctx.lr = 0x830FEBAC;
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

__attribute__((alias("__imp__sub_830FEBBC"))) PPC_WEAK_FUNC(sub_830FEBBC);
PPC_FUNC_IMPL(__imp__sub_830FEBBC) {
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
	// lwz r3,80(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	// bl 0x830dd3e0
	ctx.lr = 0x830FEBD4;
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

__attribute__((alias("__imp__sub_830FEBE4"))) PPC_WEAK_FUNC(sub_830FEBE4);
PPC_FUNC_IMPL(__imp__sub_830FEBE4) {
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
	// lwz r3,80(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	// bl 0x830dd3e0
	ctx.lr = 0x830FEBFC;
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

__attribute__((alias("__imp__sub_830FEC0C"))) PPC_WEAK_FUNC(sub_830FEC0C);
PPC_FUNC_IMPL(__imp__sub_830FEC0C) {
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
	// lwz r3,80(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	// bl 0x830dd3e0
	ctx.lr = 0x830FEC24;
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

__attribute__((alias("__imp__sub_830FEC34"))) PPC_WEAK_FUNC(sub_830FEC34);
PPC_FUNC_IMPL(__imp__sub_830FEC34) {
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
	// lwz r3,80(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	// bl 0x830dd3e0
	ctx.lr = 0x830FEC4C;
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

__attribute__((alias("__imp__sub_830FEC5C"))) PPC_WEAK_FUNC(sub_830FEC5C);
PPC_FUNC_IMPL(__imp__sub_830FEC5C) {
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
	// lwz r3,80(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	// bl 0x830dd3e0
	ctx.lr = 0x830FEC74;
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

__attribute__((alias("__imp__sub_830FEC84"))) PPC_WEAK_FUNC(sub_830FEC84);
PPC_FUNC_IMPL(__imp__sub_830FEC84) {
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
	// lwz r3,80(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	// bl 0x830dd3e0
	ctx.lr = 0x830FEC9C;
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

__attribute__((alias("__imp__sub_830FECAC"))) PPC_WEAK_FUNC(sub_830FECAC);
PPC_FUNC_IMPL(__imp__sub_830FECAC) {
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
	// lwz r3,80(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	// bl 0x830dd3e0
	ctx.lr = 0x830FECC4;
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

__attribute__((alias("__imp__sub_830FECD4"))) PPC_WEAK_FUNC(sub_830FECD4);
PPC_FUNC_IMPL(__imp__sub_830FECD4) {
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
	// lwz r3,80(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	// bl 0x830dd3e0
	ctx.lr = 0x830FECEC;
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

__attribute__((alias("__imp__sub_830FECFC"))) PPC_WEAK_FUNC(sub_830FECFC);
PPC_FUNC_IMPL(__imp__sub_830FECFC) {
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
	// lwz r3,80(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	// bl 0x830dd3e0
	ctx.lr = 0x830FED14;
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

__attribute__((alias("__imp__sub_830FED24"))) PPC_WEAK_FUNC(sub_830FED24);
PPC_FUNC_IMPL(__imp__sub_830FED24) {
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
	// lwz r3,80(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	// bl 0x830dd3e0
	ctx.lr = 0x830FED3C;
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

__attribute__((alias("__imp__sub_830FED4C"))) PPC_WEAK_FUNC(sub_830FED4C);
PPC_FUNC_IMPL(__imp__sub_830FED4C) {
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
	// lwz r3,80(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	// bl 0x830dd3e0
	ctx.lr = 0x830FED64;
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

__attribute__((alias("__imp__sub_830FED74"))) PPC_WEAK_FUNC(sub_830FED74);
PPC_FUNC_IMPL(__imp__sub_830FED74) {
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
	// lwz r3,80(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	// bl 0x830dd3e0
	ctx.lr = 0x830FED8C;
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

__attribute__((alias("__imp__sub_830FED9C"))) PPC_WEAK_FUNC(sub_830FED9C);
PPC_FUNC_IMPL(__imp__sub_830FED9C) {
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
	// lwz r3,80(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	// bl 0x830dd3e0
	ctx.lr = 0x830FEDB4;
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

__attribute__((alias("__imp__sub_830FEDC4"))) PPC_WEAK_FUNC(sub_830FEDC4);
PPC_FUNC_IMPL(__imp__sub_830FEDC4) {
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
	// lwz r3,80(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	// bl 0x830dd3e0
	ctx.lr = 0x830FEDDC;
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

__attribute__((alias("__imp__sub_830FEDEC"))) PPC_WEAK_FUNC(sub_830FEDEC);
PPC_FUNC_IMPL(__imp__sub_830FEDEC) {
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
	// lwz r3,80(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	// bl 0x830dd3e0
	ctx.lr = 0x830FEE04;
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

__attribute__((alias("__imp__sub_830FEE14"))) PPC_WEAK_FUNC(sub_830FEE14);
PPC_FUNC_IMPL(__imp__sub_830FEE14) {
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
	// lwz r3,80(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	// bl 0x830dd3e0
	ctx.lr = 0x830FEE2C;
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

__attribute__((alias("__imp__sub_830FEE3C"))) PPC_WEAK_FUNC(sub_830FEE3C);
PPC_FUNC_IMPL(__imp__sub_830FEE3C) {
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
	// lwz r3,80(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	// bl 0x830dd3e0
	ctx.lr = 0x830FEE54;
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

__attribute__((alias("__imp__sub_830FEE64"))) PPC_WEAK_FUNC(sub_830FEE64);
PPC_FUNC_IMPL(__imp__sub_830FEE64) {
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
	// lwz r3,80(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	// bl 0x830dd3e0
	ctx.lr = 0x830FEE7C;
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

__attribute__((alias("__imp__sub_830FEE8C"))) PPC_WEAK_FUNC(sub_830FEE8C);
PPC_FUNC_IMPL(__imp__sub_830FEE8C) {
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
	// lwz r3,80(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	// bl 0x830dd3e0
	ctx.lr = 0x830FEEA4;
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

__attribute__((alias("__imp__sub_830FEEB4"))) PPC_WEAK_FUNC(sub_830FEEB4);
PPC_FUNC_IMPL(__imp__sub_830FEEB4) {
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
	// lwz r3,80(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	// bl 0x830dd3e0
	ctx.lr = 0x830FEECC;
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

__attribute__((alias("__imp__sub_830FEEDC"))) PPC_WEAK_FUNC(sub_830FEEDC);
PPC_FUNC_IMPL(__imp__sub_830FEEDC) {
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
	// lwz r3,80(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	// bl 0x830dd3e0
	ctx.lr = 0x830FEEF4;
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

__attribute__((alias("__imp__sub_830FEF04"))) PPC_WEAK_FUNC(sub_830FEF04);
PPC_FUNC_IMPL(__imp__sub_830FEF04) {
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
	// lwz r3,80(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	// bl 0x830dd3e0
	ctx.lr = 0x830FEF1C;
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

__attribute__((alias("__imp__sub_830FEF2C"))) PPC_WEAK_FUNC(sub_830FEF2C);
PPC_FUNC_IMPL(__imp__sub_830FEF2C) {
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
	// lwz r3,80(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	// bl 0x830dd3e0
	ctx.lr = 0x830FEF44;
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

__attribute__((alias("__imp__sub_830FEF54"))) PPC_WEAK_FUNC(sub_830FEF54);
PPC_FUNC_IMPL(__imp__sub_830FEF54) {
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
	// lwz r3,80(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	// bl 0x830dd3e0
	ctx.lr = 0x830FEF6C;
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

__attribute__((alias("__imp__sub_830FEF7C"))) PPC_WEAK_FUNC(sub_830FEF7C);
PPC_FUNC_IMPL(__imp__sub_830FEF7C) {
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
	// lwz r3,80(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	// bl 0x830dd3e0
	ctx.lr = 0x830FEF94;
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

__attribute__((alias("__imp__sub_830FEFA4"))) PPC_WEAK_FUNC(sub_830FEFA4);
PPC_FUNC_IMPL(__imp__sub_830FEFA4) {
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
	// lwz r3,80(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	// bl 0x830dd3e0
	ctx.lr = 0x830FEFBC;
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

__attribute__((alias("__imp__sub_830FEFCC"))) PPC_WEAK_FUNC(sub_830FEFCC);
PPC_FUNC_IMPL(__imp__sub_830FEFCC) {
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
	// lwz r3,80(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	// bl 0x830dd3e0
	ctx.lr = 0x830FEFE4;
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

__attribute__((alias("__imp__sub_830FEFF4"))) PPC_WEAK_FUNC(sub_830FEFF4);
PPC_FUNC_IMPL(__imp__sub_830FEFF4) {
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
	// lwz r3,80(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	// bl 0x830dd3e0
	ctx.lr = 0x830FF00C;
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

__attribute__((alias("__imp__sub_830FF01C"))) PPC_WEAK_FUNC(sub_830FF01C);
PPC_FUNC_IMPL(__imp__sub_830FF01C) {
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
	// lwz r3,80(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	// bl 0x830dd3e0
	ctx.lr = 0x830FF034;
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

__attribute__((alias("__imp__sub_830FF044"))) PPC_WEAK_FUNC(sub_830FF044);
PPC_FUNC_IMPL(__imp__sub_830FF044) {
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
	// lwz r3,80(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	// bl 0x830dd3e0
	ctx.lr = 0x830FF05C;
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

__attribute__((alias("__imp__sub_830FF06C"))) PPC_WEAK_FUNC(sub_830FF06C);
PPC_FUNC_IMPL(__imp__sub_830FF06C) {
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
	// lwz r3,80(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	// bl 0x830dd3e0
	ctx.lr = 0x830FF084;
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

__attribute__((alias("__imp__sub_830FF094"))) PPC_WEAK_FUNC(sub_830FF094);
PPC_FUNC_IMPL(__imp__sub_830FF094) {
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
	// lwz r3,80(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	// bl 0x830dd3e0
	ctx.lr = 0x830FF0AC;
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

__attribute__((alias("__imp__sub_830FF0BC"))) PPC_WEAK_FUNC(sub_830FF0BC);
PPC_FUNC_IMPL(__imp__sub_830FF0BC) {
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
	// lwz r3,80(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	// bl 0x830dd3e0
	ctx.lr = 0x830FF0D4;
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

__attribute__((alias("__imp__sub_830FF0E4"))) PPC_WEAK_FUNC(sub_830FF0E4);
PPC_FUNC_IMPL(__imp__sub_830FF0E4) {
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
	// lwz r3,80(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	// bl 0x830dd3e0
	ctx.lr = 0x830FF0FC;
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

__attribute__((alias("__imp__sub_830FF10C"))) PPC_WEAK_FUNC(sub_830FF10C);
PPC_FUNC_IMPL(__imp__sub_830FF10C) {
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
	// lwz r3,80(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	// bl 0x830dd3e0
	ctx.lr = 0x830FF124;
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

__attribute__((alias("__imp__sub_830FF134"))) PPC_WEAK_FUNC(sub_830FF134);
PPC_FUNC_IMPL(__imp__sub_830FF134) {
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
	// lwz r3,80(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	// bl 0x830dd3e0
	ctx.lr = 0x830FF14C;
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

__attribute__((alias("__imp__sub_830FF15C"))) PPC_WEAK_FUNC(sub_830FF15C);
PPC_FUNC_IMPL(__imp__sub_830FF15C) {
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
	// lwz r3,80(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	// bl 0x830dd3e0
	ctx.lr = 0x830FF174;
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

__attribute__((alias("__imp__sub_830FF184"))) PPC_WEAK_FUNC(sub_830FF184);
PPC_FUNC_IMPL(__imp__sub_830FF184) {
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
	// lwz r3,80(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	// bl 0x830dd3e0
	ctx.lr = 0x830FF19C;
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

__attribute__((alias("__imp__sub_830FF1AC"))) PPC_WEAK_FUNC(sub_830FF1AC);
PPC_FUNC_IMPL(__imp__sub_830FF1AC) {
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
	// lwz r3,80(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	// bl 0x830dd3e0
	ctx.lr = 0x830FF1C4;
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

__attribute__((alias("__imp__sub_830FF1D4"))) PPC_WEAK_FUNC(sub_830FF1D4);
PPC_FUNC_IMPL(__imp__sub_830FF1D4) {
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
	// lwz r3,80(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	// bl 0x830dd3e0
	ctx.lr = 0x830FF1EC;
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

__attribute__((alias("__imp__sub_830FF1FC"))) PPC_WEAK_FUNC(sub_830FF1FC);
PPC_FUNC_IMPL(__imp__sub_830FF1FC) {
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
	// lwz r3,80(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	// bl 0x830dd3e0
	ctx.lr = 0x830FF214;
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

__attribute__((alias("__imp__sub_830FF224"))) PPC_WEAK_FUNC(sub_830FF224);
PPC_FUNC_IMPL(__imp__sub_830FF224) {
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
	// lwz r3,80(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	// bl 0x830dd3e0
	ctx.lr = 0x830FF23C;
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

__attribute__((alias("__imp__sub_830FF24C"))) PPC_WEAK_FUNC(sub_830FF24C);
PPC_FUNC_IMPL(__imp__sub_830FF24C) {
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
	// lwz r3,80(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	// bl 0x830dd3e0
	ctx.lr = 0x830FF264;
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

__attribute__((alias("__imp__sub_830FF274"))) PPC_WEAK_FUNC(sub_830FF274);
PPC_FUNC_IMPL(__imp__sub_830FF274) {
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
	// lwz r3,80(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	// bl 0x830dd3e0
	ctx.lr = 0x830FF28C;
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

__attribute__((alias("__imp__sub_830FF29C"))) PPC_WEAK_FUNC(sub_830FF29C);
PPC_FUNC_IMPL(__imp__sub_830FF29C) {
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
	// lwz r3,80(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	// bl 0x830dd3e0
	ctx.lr = 0x830FF2B4;
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

__attribute__((alias("__imp__sub_830FF2C4"))) PPC_WEAK_FUNC(sub_830FF2C4);
PPC_FUNC_IMPL(__imp__sub_830FF2C4) {
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
	// lwz r3,80(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	// bl 0x830dd3e0
	ctx.lr = 0x830FF2DC;
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

__attribute__((alias("__imp__sub_830FF2EC"))) PPC_WEAK_FUNC(sub_830FF2EC);
PPC_FUNC_IMPL(__imp__sub_830FF2EC) {
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
	// lwz r3,80(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	// bl 0x830dd3e0
	ctx.lr = 0x830FF304;
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

__attribute__((alias("__imp__sub_830FF314"))) PPC_WEAK_FUNC(sub_830FF314);
PPC_FUNC_IMPL(__imp__sub_830FF314) {
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
	// lwz r3,80(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	// bl 0x830dd3e0
	ctx.lr = 0x830FF32C;
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

__attribute__((alias("__imp__sub_830FF33C"))) PPC_WEAK_FUNC(sub_830FF33C);
PPC_FUNC_IMPL(__imp__sub_830FF33C) {
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
	// lwz r3,80(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	// bl 0x830dd3e0
	ctx.lr = 0x830FF354;
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

__attribute__((alias("__imp__sub_830FF364"))) PPC_WEAK_FUNC(sub_830FF364);
PPC_FUNC_IMPL(__imp__sub_830FF364) {
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
	// lwz r3,80(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	// bl 0x830dd3e0
	ctx.lr = 0x830FF37C;
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

__attribute__((alias("__imp__sub_830FF38C"))) PPC_WEAK_FUNC(sub_830FF38C);
PPC_FUNC_IMPL(__imp__sub_830FF38C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_830FF390"))) PPC_WEAK_FUNC(sub_830FF390);
PPC_FUNC_IMPL(__imp__sub_830FF390) {
	PPC_FUNC_PROLOGUE();
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
	// lwz r31,-4812(r30)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r30.u32 + -4812);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x830ff3c4
	if (ctx.cr6.eq) goto loc_830FF3C4;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x831147f8
	ctx.lr = 0x830FF3BC;
	sub_831147F8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x830dd3e0
	ctx.lr = 0x830FF3C4;
	sub_830DD3E0(ctx, base);
loc_830FF3C4:
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,-4812(r30)
	PPC_STORE_U32(ctx.r30.u32 + -4812, ctx.r11.u32);
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

__attribute__((alias("__imp__sub_830FF3E4"))) PPC_WEAK_FUNC(sub_830FF3E4);
PPC_FUNC_IMPL(__imp__sub_830FF3E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_830FF3E8"))) PPC_WEAK_FUNC(sub_830FF3E8);
PPC_FUNC_IMPL(__imp__sub_830FF3E8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lwz r25,17952(r26)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r26.u32 + 17952);
	// lwz r16,25496(r28)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r28.u32 + 25496);
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x833a01a4
	ctx.lr = 0x830FF3F8;
	__savegprlr_27(ctx, base);
	// addi r31,r1,-144
	ctx.r31.s64 = ctx.r1.s64 + -144;
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-32228
	ctx.r10.s64 = -2112094208;
	// lis r11,-31827
	ctx.r11.s64 = -2085814272;
	// addi r10,r10,23376
	ctx.r10.s64 = ctx.r10.s64 + 23376;
	// addi r29,r11,-4812
	ctx.r29.s64 = ctx.r11.s64 + -4812;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// lis r28,-31827
	ctx.r28.s64 = -2085814272;
	// lwz r11,-4812(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -4812);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x830ff49c
	if (!ctx.cr6.eq) goto loc_830FF49C;
	// li r3,28
	ctx.r3.s64 = 28;
	// bl 0x830dd340
	ctx.lr = 0x830FF430;
	sub_830DD340(ctx, base);
	// stw r3,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r3.u32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x830ff450
	if (ctx.cr0.eq) goto loc_830FF450;
	// li r4,103
	ctx.r4.s64 = 103;
	// lwz r5,-5084(r28)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r28.u32 + -5084);
	// bl 0x8311ceb0
	ctx.lr = 0x830FF448;
	sub_8311CEB0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// b 0x830ff454
	goto loc_830FF454;
loc_830FF450:
	// li r30,0
	ctx.r30.s64 = 0;
loc_830FF454:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x830fc5d0
	ctx.lr = 0x830FF464;
	sub_830FC5D0(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x830ff488
	if (ctx.cr0.eq) goto loc_830FF488;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x830ff49c
	if (ctx.cr6.eq) goto loc_830FF49C;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x831147f8
	ctx.lr = 0x830FF47C;
	sub_831147F8(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x830dd3e0
	ctx.lr = 0x830FF484;
	sub_830DD3E0(ctx, base);
	// b 0x830ff49c
	goto loc_830FF49C;
loc_830FF488:
	// lis r11,-31984
	ctx.r11.s64 = -2096103424;
	// lis r10,-31827
	ctx.r10.s64 = -2085814272;
	// addi r4,r11,-3184
	ctx.r4.s64 = ctx.r11.s64 + -3184;
	// addi r3,r10,-4792
	ctx.r3.s64 = ctx.r10.s64 + -4792;
	// bl 0x830ff598
	ctx.lr = 0x830FF49C;
	sub_830FF598(ctx, base);
loc_830FF49C:
	// lis r11,-31827
	ctx.r11.s64 = -2085814272;
	// addi r29,r11,-4808
	ctx.r29.s64 = ctx.r11.s64 + -4808;
	// lwz r11,-4808(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -4808);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x830ff53c
	if (!ctx.cr6.eq) goto loc_830FF53C;
	// li r3,24
	ctx.r3.s64 = 24;
	// bl 0x830dd340
	ctx.lr = 0x830FF4B8;
	sub_830DD340(ctx, base);
	// mr. r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// stw r30,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r30.u32);
	// beq 0x830ff4e8
	if (ctx.cr0.eq) goto loc_830FF4E8;
	// li r5,1
	ctx.r5.s64 = 1;
	// lwz r6,-5084(r28)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r28.u32 + -5084);
	// li r4,8
	ctx.r4.s64 = 8;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x830dd918
	ctx.lr = 0x830FF4D8;
	sub_830DD918(ctx, base);
	// lis r11,-32227
	ctx.r11.s64 = -2112028672;
	// addi r11,r11,-28032
	ctx.r11.s64 = ctx.r11.s64 + -28032;
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
	// b 0x830ff4ec
	goto loc_830FF4EC;
loc_830FF4E8:
	// li r30,0
	ctx.r30.s64 = 0;
loc_830FF4EC:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x830fc5d0
	ctx.lr = 0x830FF4FC;
	sub_830FC5D0(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x830ff528
	if (ctx.cr0.eq) goto loc_830FF528;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x830ff53c
	if (ctx.cr6.eq) goto loc_830FF53C;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x830FF524;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// b 0x830ff53c
	goto loc_830FF53C;
loc_830FF528:
	// lis r11,-31984
	ctx.r11.s64 = -2096103424;
	// lis r10,-31827
	ctx.r10.s64 = -2085814272;
	// addi r4,r11,-12344
	ctx.r4.s64 = ctx.r11.s64 + -12344;
	// addi r3,r10,-4804
	ctx.r3.s64 = ctx.r10.s64 + -4804;
	// bl 0x830ff598
	ctx.lr = 0x830FF53C;
	sub_830FF598(ctx, base);
loc_830FF53C:
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// addi r1,r31,144
	ctx.r1.s64 = ctx.r31.s64 + 144;
	// b 0x833a01f4
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_830FF3F0"))) PPC_WEAK_FUNC(sub_830FF3F0);
PPC_FUNC_IMPL(__imp__sub_830FF3F0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x833a01a4
	ctx.lr = 0x830FF3F8;
	__savegprlr_27(ctx, base);
	// addi r31,r1,-144
	ctx.r31.s64 = ctx.r1.s64 + -144;
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-32228
	ctx.r10.s64 = -2112094208;
	// lis r11,-31827
	ctx.r11.s64 = -2085814272;
	// addi r10,r10,23376
	ctx.r10.s64 = ctx.r10.s64 + 23376;
	// addi r29,r11,-4812
	ctx.r29.s64 = ctx.r11.s64 + -4812;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// lis r28,-31827
	ctx.r28.s64 = -2085814272;
	// lwz r11,-4812(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -4812);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x830ff49c
	if (!ctx.cr6.eq) goto loc_830FF49C;
	// li r3,28
	ctx.r3.s64 = 28;
	// bl 0x830dd340
	ctx.lr = 0x830FF430;
	sub_830DD340(ctx, base);
	// stw r3,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r3.u32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x830ff450
	if (ctx.cr0.eq) goto loc_830FF450;
	// li r4,103
	ctx.r4.s64 = 103;
	// lwz r5,-5084(r28)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r28.u32 + -5084);
	// bl 0x8311ceb0
	ctx.lr = 0x830FF448;
	sub_8311CEB0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// b 0x830ff454
	goto loc_830FF454;
loc_830FF450:
	// li r30,0
	ctx.r30.s64 = 0;
loc_830FF454:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x830fc5d0
	ctx.lr = 0x830FF464;
	sub_830FC5D0(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x830ff488
	if (ctx.cr0.eq) goto loc_830FF488;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x830ff49c
	if (ctx.cr6.eq) goto loc_830FF49C;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x831147f8
	ctx.lr = 0x830FF47C;
	sub_831147F8(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x830dd3e0
	ctx.lr = 0x830FF484;
	sub_830DD3E0(ctx, base);
	// b 0x830ff49c
	goto loc_830FF49C;
loc_830FF488:
	// lis r11,-31984
	ctx.r11.s64 = -2096103424;
	// lis r10,-31827
	ctx.r10.s64 = -2085814272;
	// addi r4,r11,-3184
	ctx.r4.s64 = ctx.r11.s64 + -3184;
	// addi r3,r10,-4792
	ctx.r3.s64 = ctx.r10.s64 + -4792;
	// bl 0x830ff598
	ctx.lr = 0x830FF49C;
	sub_830FF598(ctx, base);
loc_830FF49C:
	// lis r11,-31827
	ctx.r11.s64 = -2085814272;
	// addi r29,r11,-4808
	ctx.r29.s64 = ctx.r11.s64 + -4808;
	// lwz r11,-4808(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -4808);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x830ff53c
	if (!ctx.cr6.eq) goto loc_830FF53C;
	// li r3,24
	ctx.r3.s64 = 24;
	// bl 0x830dd340
	ctx.lr = 0x830FF4B8;
	sub_830DD340(ctx, base);
	// mr. r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// stw r30,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r30.u32);
	// beq 0x830ff4e8
	if (ctx.cr0.eq) goto loc_830FF4E8;
	// li r5,1
	ctx.r5.s64 = 1;
	// lwz r6,-5084(r28)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r28.u32 + -5084);
	// li r4,8
	ctx.r4.s64 = 8;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x830dd918
	ctx.lr = 0x830FF4D8;
	sub_830DD918(ctx, base);
	// lis r11,-32227
	ctx.r11.s64 = -2112028672;
	// addi r11,r11,-28032
	ctx.r11.s64 = ctx.r11.s64 + -28032;
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
	// b 0x830ff4ec
	goto loc_830FF4EC;
loc_830FF4E8:
	// li r30,0
	ctx.r30.s64 = 0;
loc_830FF4EC:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x830fc5d0
	ctx.lr = 0x830FF4FC;
	sub_830FC5D0(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x830ff528
	if (ctx.cr0.eq) goto loc_830FF528;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x830ff53c
	if (ctx.cr6.eq) goto loc_830FF53C;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x830FF524;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// b 0x830ff53c
	goto loc_830FF53C;
loc_830FF528:
	// lis r11,-31984
	ctx.r11.s64 = -2096103424;
	// lis r10,-31827
	ctx.r10.s64 = -2085814272;
	// addi r4,r11,-12344
	ctx.r4.s64 = ctx.r11.s64 + -12344;
	// addi r3,r10,-4804
	ctx.r3.s64 = ctx.r10.s64 + -4804;
	// bl 0x830ff598
	ctx.lr = 0x830FF53C;
	sub_830FF598(ctx, base);
loc_830FF53C:
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// addi r1,r31,144
	ctx.r1.s64 = ctx.r31.s64 + 144;
	// b 0x833a01f4
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_830FF548"))) PPC_WEAK_FUNC(sub_830FF548);
PPC_FUNC_IMPL(__imp__sub_830FF548) {
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
	// lwz r3,80(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	// bl 0x830dd3e0
	ctx.lr = 0x830FF560;
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

__attribute__((alias("__imp__sub_830FF570"))) PPC_WEAK_FUNC(sub_830FF570);
PPC_FUNC_IMPL(__imp__sub_830FF570) {
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
	// lwz r3,80(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	// bl 0x830dd3e0
	ctx.lr = 0x830FF588;
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

__attribute__((alias("__imp__sub_830FF598"))) PPC_WEAK_FUNC(sub_830FF598);
PPC_FUNC_IMPL(__imp__sub_830FF598) {
	PPC_FUNC_PROLOGUE();
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
	// lis r30,-31827
	ctx.r30.s64 = -2085814272;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r3,-5104(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + -5104);
	// bl 0x830fcf70
	ctx.lr = 0x830FF5C0;
	sub_830FCF70(ctx, base);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x830ff5f8
	if (!ctx.cr6.eq) goto loc_830FF5F8;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x830ff5f8
	if (!ctx.cr6.eq) goto loc_830FF5F8;
	// lis r10,-31827
	ctx.r10.s64 = -2085814272;
	// lwz r11,-5108(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -5108);
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// stw r31,-5108(r10)
	PPC_STORE_U32(ctx.r10.u32 + -5108, ctx.r31.u32);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x830ff5f8
	if (ctx.cr6.eq) goto loc_830FF5F8;
	// stw r31,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r31.u32);
loc_830FF5F8:
	// lwz r3,-5104(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + -5104);
	// bl 0x830fcf78
	ctx.lr = 0x830FF600;
	sub_830FCF78(ctx, base);
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

__attribute__((alias("__imp__sub_830FF618"))) PPC_WEAK_FUNC(sub_830FF618);
PPC_FUNC_IMPL(__imp__sub_830FF618) {
	PPC_FUNC_PROLOGUE();
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
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r3,-5104(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + -5104);
	// bl 0x830fcf70
	ctx.lr = 0x830FF63C;
	sub_830FCF70(ctx, base);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x830ff650
	if (ctx.cr6.eq) goto loc_830FF650;
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// stw r10,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r10.u32);
loc_830FF650:
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x830ff66c
	if (!ctx.cr6.eq) goto loc_830FF66C;
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lis r10,-31827
	ctx.r10.s64 = -2085814272;
	// stw r11,-5108(r10)
	PPC_STORE_U32(ctx.r10.u32 + -5108, ctx.r11.u32);
	// b 0x830ff674
	goto loc_830FF674;
loc_830FF66C:
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
loc_830FF674:
	// lwz r3,-5104(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + -5104);
	// bl 0x830fcf78
	ctx.lr = 0x830FF67C;
	sub_830FCF78(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
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

__attribute__((alias("__imp__sub_830FF6A4"))) PPC_WEAK_FUNC(sub_830FF6A4);
PPC_FUNC_IMPL(__imp__sub_830FF6A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_830FF6A8"))) PPC_WEAK_FUNC(sub_830FF6A8);
PPC_FUNC_IMPL(__imp__sub_830FF6A8) {
	PPC_FUNC_PROLOGUE();
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830FF6BC"))) PPC_WEAK_FUNC(sub_830FF6BC);
PPC_FUNC_IMPL(__imp__sub_830FF6BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_830FF6C0"))) PPC_WEAK_FUNC(sub_830FF6C0);
PPC_FUNC_IMPL(__imp__sub_830FF6C0) {
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
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x830ff6e8
	if (ctx.cr6.eq) goto loc_830FF6E8;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x830FF6E8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_830FF6E8:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x830ff618
	ctx.lr = 0x830FF6F0;
	sub_830FF618(ctx, base);
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

