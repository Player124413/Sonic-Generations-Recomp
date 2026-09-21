#include "ppc_recomp_shared.h"

__attribute__((alias("__imp__sub_830EDFF8"))) PPC_WEAK_FUNC(sub_830EDFF8);
PPC_FUNC_IMPL(__imp__sub_830EDFF8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x833a01ac
	ctx.lr = 0x830EE000;
	__savegprlr_29(ctx, base);
	// stwu r1,-2208(r1)
	ea = -2208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// bl 0x830ed200
	ctx.lr = 0x830EE014;
	sub_830ED200(ctx, base);
	// mr. r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// beq 0x830ee028
	if (ctx.cr0.eq) goto loc_830EE028;
	// lwz r11,32(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r11.u32);
loc_830EE028:
	// lwz r11,108(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 108);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x830ee09c
	if (ctx.cr6.eq) goto loc_830EE09C;
	// bl 0x830ede48
	ctx.lr = 0x830EE038;
	sub_830EDE48(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r6,1023
	ctx.r6.s64 = 1023;
	// addi r5,r1,128
	ctx.r5.s64 = ctx.r1.s64 + 128;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x830EE054;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// addi r3,r31,128
	ctx.r3.s64 = ctx.r31.s64 + 128;
	// bl 0x830f52b8
	ctx.lr = 0x830EE060;
	sub_830F52B8(ctx, base);
	// lwz r3,108(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 108);
	// lis r11,-32228
	ctx.r11.s64 = -2112094208;
	// lwz r10,120(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// lwz r9,116(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// addi r5,r11,-5832
	ctx.r5.s64 = ctx.r11.s64 + -5832;
	// lwz r8,112(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// addi r7,r1,128
	ctx.r7.s64 = ctx.r1.s64 + 128;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// lwz r11,124(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 124);
	// lwz r30,0(r3)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x830EE09C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_830EE09C:
	// cmpwi cr6,r29,171
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 171, ctx.xer);
	// blt cr6,0x830ee0b0
	if (ctx.cr6.lt) goto loc_830EE0B0;
	// cmpwi cr6,r29,312
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 312, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// ble cr6,0x830ee0b4
	if (!ctx.cr6.gt) goto loc_830EE0B4;
loc_830EE0B0:
	// li r11,0
	ctx.r11.s64 = 0;
loc_830EE0B4:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x830ee0d8
	if (ctx.cr0.eq) goto loc_830EE0D8;
	// lbz r11,11(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 11);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x830ee0d8
	if (ctx.cr0.eq) goto loc_830EE0D8;
	// lbz r11,13(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 13);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// beq 0x830ee0dc
	if (ctx.cr0.eq) goto loc_830EE0DC;
loc_830EE0D8:
	// li r11,0
	ctx.r11.s64 = 0;
loc_830EE0DC:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x830ee0f8
	if (ctx.cr0.eq) goto loc_830EE0F8;
	// stw r29,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r29.u32);
	// lis r11,-32194
	ctx.r11.s64 = -2109865984;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// addi r4,r11,-27860
	ctx.r4.s64 = ctx.r11.s64 + -27860;
	// bl 0x833a7198
	ctx.lr = 0x830EE0F8;
	sub_833A7198(ctx, base);
loc_830EE0F8:
	// addi r1,r1,2208
	ctx.r1.s64 = ctx.r1.s64 + 2208;
	// b 0x833a01fc
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_830EE100"))) PPC_WEAK_FUNC(sub_830EE100);
PPC_FUNC_IMPL(__imp__sub_830EE100) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x833a019c
	ctx.lr = 0x830EE108;
	__savegprlr_25(ctx, base);
	// ld r12,-4096(r1)
	ctx.r12.u64 = PPC_LOAD_U64(ctx.r1.u32 + -4096);
	// stwu r1,-4288(r1)
	ea = -4288 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// mr r27,r6
	ctx.r27.u64 = ctx.r6.u64;
	// mr r26,r7
	ctx.r26.u64 = ctx.r7.u64;
	// mr r25,r8
	ctx.r25.u64 = ctx.r8.u64;
	// bl 0x830ed200
	ctx.lr = 0x830EE130;
	sub_830ED200(ctx, base);
	// mr. r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// beq 0x830ee144
	if (ctx.cr0.eq) goto loc_830EE144;
	// lwz r11,32(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r11.u32);
loc_830EE144:
	// lwz r11,108(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 108);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x830ee1d0
	if (ctx.cr6.eq) goto loc_830EE1D0;
	// bl 0x830ede48
	ctx.lr = 0x830EE154;
	sub_830EDE48(ctx, base);
	// lwz r11,220(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 220);
	// mr r7,r28
	ctx.r7.u64 = ctx.r28.u64;
	// lwz r28,0(r3)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r10,r25
	ctx.r10.u64 = ctx.r25.u64;
	// mr r9,r26
	ctx.r9.u64 = ctx.r26.u64;
	// mr r8,r27
	ctx.r8.u64 = ctx.r27.u64;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// li r6,2047
	ctx.r6.s64 = 2047;
	// lwz r11,8(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 8);
	// addi r5,r1,128
	ctx.r5.s64 = ctx.r1.s64 + 128;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x830EE188;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// addi r3,r31,128
	ctx.r3.s64 = ctx.r31.s64 + 128;
	// bl 0x830f52b8
	ctx.lr = 0x830EE194;
	sub_830F52B8(ctx, base);
	// lwz r3,108(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 108);
	// lis r11,-32228
	ctx.r11.s64 = -2112094208;
	// lwz r10,120(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// lwz r9,116(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// addi r5,r11,-5832
	ctx.r5.s64 = ctx.r11.s64 + -5832;
	// lwz r8,112(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// addi r7,r1,128
	ctx.r7.s64 = ctx.r1.s64 + 128;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r11,124(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 124);
	// lwz r29,0(r3)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// lwz r11,4(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x830EE1D0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_830EE1D0:
	// cmpwi cr6,r30,171
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 171, ctx.xer);
	// blt cr6,0x830ee1e4
	if (ctx.cr6.lt) goto loc_830EE1E4;
	// cmpwi cr6,r30,312
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 312, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// ble cr6,0x830ee1e8
	if (!ctx.cr6.gt) goto loc_830EE1E8;
loc_830EE1E4:
	// li r11,0
	ctx.r11.s64 = 0;
loc_830EE1E8:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x830ee20c
	if (ctx.cr0.eq) goto loc_830EE20C;
	// lbz r11,11(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 11);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x830ee20c
	if (ctx.cr0.eq) goto loc_830EE20C;
	// lbz r11,13(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 13);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// beq 0x830ee210
	if (ctx.cr0.eq) goto loc_830EE210;
loc_830EE20C:
	// li r11,0
	ctx.r11.s64 = 0;
loc_830EE210:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x830ee22c
	if (ctx.cr0.eq) goto loc_830EE22C;
	// stw r30,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r30.u32);
	// lis r11,-32194
	ctx.r11.s64 = -2109865984;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// addi r4,r11,-27860
	ctx.r4.s64 = ctx.r11.s64 + -27860;
	// bl 0x833a7198
	ctx.lr = 0x830EE22C;
	sub_833A7198(ctx, base);
loc_830EE22C:
	// addi r1,r1,4288
	ctx.r1.s64 = ctx.r1.s64 + 4288;
	// b 0x833a01ec
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_830EE234"))) PPC_WEAK_FUNC(sub_830EE234);
PPC_FUNC_IMPL(__imp__sub_830EE234) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_830EE238"))) PPC_WEAK_FUNC(sub_830EE238);
PPC_FUNC_IMPL(__imp__sub_830EE238) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x833a019c
	ctx.lr = 0x830EE240;
	__savegprlr_25(ctx, base);
	// ld r12,-4096(r1)
	ctx.r12.u64 = PPC_LOAD_U64(ctx.r1.u32 + -4096);
	// stwu r1,-4288(r1)
	ea = -4288 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// mr r27,r6
	ctx.r27.u64 = ctx.r6.u64;
	// mr r26,r7
	ctx.r26.u64 = ctx.r7.u64;
	// mr r25,r8
	ctx.r25.u64 = ctx.r8.u64;
	// bl 0x830ed200
	ctx.lr = 0x830EE268;
	sub_830ED200(ctx, base);
	// mr. r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// beq 0x830ee27c
	if (ctx.cr0.eq) goto loc_830EE27C;
	// lwz r11,32(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r11.u32);
loc_830EE27C:
	// lwz r11,108(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 108);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x830ee308
	if (ctx.cr6.eq) goto loc_830EE308;
	// bl 0x830ede48
	ctx.lr = 0x830EE28C;
	sub_830EDE48(ctx, base);
	// lwz r11,220(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 220);
	// mr r7,r28
	ctx.r7.u64 = ctx.r28.u64;
	// lwz r28,0(r3)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r10,r25
	ctx.r10.u64 = ctx.r25.u64;
	// mr r9,r26
	ctx.r9.u64 = ctx.r26.u64;
	// mr r8,r27
	ctx.r8.u64 = ctx.r27.u64;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// li r6,2047
	ctx.r6.s64 = 2047;
	// lwz r11,4(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// addi r5,r1,128
	ctx.r5.s64 = ctx.r1.s64 + 128;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x830EE2C0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// addi r3,r31,128
	ctx.r3.s64 = ctx.r31.s64 + 128;
	// bl 0x830f52b8
	ctx.lr = 0x830EE2CC;
	sub_830F52B8(ctx, base);
	// lwz r3,108(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 108);
	// lis r11,-32228
	ctx.r11.s64 = -2112094208;
	// lwz r10,120(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// lwz r9,116(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// addi r5,r11,-5832
	ctx.r5.s64 = ctx.r11.s64 + -5832;
	// lwz r8,112(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// addi r7,r1,128
	ctx.r7.s64 = ctx.r1.s64 + 128;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r11,124(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 124);
	// lwz r29,0(r3)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// lwz r11,4(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x830EE308;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_830EE308:
	// cmpwi cr6,r30,171
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 171, ctx.xer);
	// blt cr6,0x830ee31c
	if (ctx.cr6.lt) goto loc_830EE31C;
	// cmpwi cr6,r30,312
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 312, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// ble cr6,0x830ee320
	if (!ctx.cr6.gt) goto loc_830EE320;
loc_830EE31C:
	// li r11,0
	ctx.r11.s64 = 0;
loc_830EE320:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x830ee344
	if (ctx.cr0.eq) goto loc_830EE344;
	// lbz r11,11(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 11);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x830ee344
	if (ctx.cr0.eq) goto loc_830EE344;
	// lbz r11,13(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 13);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// beq 0x830ee348
	if (ctx.cr0.eq) goto loc_830EE348;
loc_830EE344:
	// li r11,0
	ctx.r11.s64 = 0;
loc_830EE348:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x830ee364
	if (ctx.cr0.eq) goto loc_830EE364;
	// stw r30,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r30.u32);
	// lis r11,-32194
	ctx.r11.s64 = -2109865984;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// addi r4,r11,-27860
	ctx.r4.s64 = ctx.r11.s64 + -27860;
	// bl 0x833a7198
	ctx.lr = 0x830EE364;
	sub_833A7198(ctx, base);
loc_830EE364:
	// addi r1,r1,4288
	ctx.r1.s64 = ctx.r1.s64 + 4288;
	// b 0x833a01ec
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_830EE36C"))) PPC_WEAK_FUNC(sub_830EE36C);
PPC_FUNC_IMPL(__imp__sub_830EE36C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_830EE370"))) PPC_WEAK_FUNC(sub_830EE370);
PPC_FUNC_IMPL(__imp__sub_830EE370) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x833a0198
	ctx.lr = 0x830EE378;
	__savegprlr_24(ctx, base);
	// ld r12,-4096(r1)
	ctx.r12.u64 = PPC_LOAD_U64(ctx.r1.u32 + -4096);
	// stwu r1,-4304(r1)
	ea = -4304 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// mr r27,r6
	ctx.r27.u64 = ctx.r6.u64;
	// mr r26,r7
	ctx.r26.u64 = ctx.r7.u64;
	// mr r25,r8
	ctx.r25.u64 = ctx.r8.u64;
	// mr r24,r9
	ctx.r24.u64 = ctx.r9.u64;
	// bl 0x830ed200
	ctx.lr = 0x830EE3A4;
	sub_830ED200(ctx, base);
	// mr. r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// beq 0x830ee3b8
	if (ctx.cr0.eq) goto loc_830EE3B8;
	// lwz r11,32(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r11.u32);
loc_830EE3B8:
	// lwz r11,108(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 108);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x830ee444
	if (ctx.cr6.eq) goto loc_830EE444;
	// bl 0x830ede48
	ctx.lr = 0x830EE3C8;
	sub_830EDE48(ctx, base);
	// lwz r11,220(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 220);
	// mr r7,r27
	ctx.r7.u64 = ctx.r27.u64;
	// lwz r27,0(r3)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r10,r24
	ctx.r10.u64 = ctx.r24.u64;
	// mr r9,r25
	ctx.r9.u64 = ctx.r25.u64;
	// mr r8,r26
	ctx.r8.u64 = ctx.r26.u64;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// li r6,2047
	ctx.r6.s64 = 2047;
	// lwz r11,8(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 8);
	// addi r5,r1,128
	ctx.r5.s64 = ctx.r1.s64 + 128;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x830EE3FC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// addi r3,r31,128
	ctx.r3.s64 = ctx.r31.s64 + 128;
	// bl 0x830f52b8
	ctx.lr = 0x830EE408;
	sub_830F52B8(ctx, base);
	// lwz r3,108(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 108);
	// lis r11,-32228
	ctx.r11.s64 = -2112094208;
	// lwz r10,120(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// lwz r9,116(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// addi r5,r11,-7672
	ctx.r5.s64 = ctx.r11.s64 + -7672;
	// lwz r8,112(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// addi r7,r1,128
	ctx.r7.s64 = ctx.r1.s64 + 128;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// lwz r11,124(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 124);
	// lwz r30,0(r3)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x830EE444;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_830EE444:
	// cmpwi cr6,r29,171
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 171, ctx.xer);
	// blt cr6,0x830ee458
	if (ctx.cr6.lt) goto loc_830EE458;
	// cmpwi cr6,r29,312
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 312, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// ble cr6,0x830ee45c
	if (!ctx.cr6.gt) goto loc_830EE45C;
loc_830EE458:
	// li r11,0
	ctx.r11.s64 = 0;
loc_830EE45C:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x830ee480
	if (ctx.cr0.eq) goto loc_830EE480;
	// lbz r11,11(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 11);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x830ee480
	if (ctx.cr0.eq) goto loc_830EE480;
	// lbz r11,13(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 13);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// beq 0x830ee484
	if (ctx.cr0.eq) goto loc_830EE484;
loc_830EE480:
	// li r11,0
	ctx.r11.s64 = 0;
loc_830EE484:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x830ee4a0
	if (ctx.cr0.eq) goto loc_830EE4A0;
	// stw r29,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r29.u32);
	// lis r11,-32194
	ctx.r11.s64 = -2109865984;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// addi r4,r11,-27860
	ctx.r4.s64 = ctx.r11.s64 + -27860;
	// bl 0x833a7198
	ctx.lr = 0x830EE4A0;
	sub_833A7198(ctx, base);
loc_830EE4A0:
	// addi r1,r1,4304
	ctx.r1.s64 = ctx.r1.s64 + 4304;
	// b 0x833a01e8
	__restgprlr_24(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_830EE4A8"))) PPC_WEAK_FUNC(sub_830EE4A8);
PPC_FUNC_IMPL(__imp__sub_830EE4A8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lwz r25,17952(r26)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r26.u32 + 17952);
	// lwz r16,10544(r28)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r28.u32 + 10544);
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x833a0184
	ctx.lr = 0x830EE4B8;
	__savegprlr_19(ctx, base);
	// addi r31,r1,-240
	ctx.r31.s64 = ctx.r1.s64 + -240;
	// stwu r1,-240(r1)
	ea = -240 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r28,r3,128
	ctx.r28.s64 = ctx.r3.s64 + 128;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x830f4f08
	ctx.lr = 0x830EE4D0;
	sub_830F4F08(ctx, base);
	// lis r11,2
	ctx.r11.s64 = 131072;
	// lwz r10,136(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 136);
	// clrlwi r9,r3,16
	ctx.r9.u64 = ctx.r3.u32 & 0xFFFF;
	// ori r19,r11,32852
	ctx.r19.u64 = ctx.r11.u64 | 32852;
	// lwzx r11,r10,r19
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r19.u32);
	// lbzx r11,r11,r9
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + ctx.r9.u32);
	// rlwinm. r11,r11,0,0,24
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFF80;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x830ee508
	if (ctx.cr0.eq) goto loc_830EE508;
	// li r4,194
	ctx.r4.s64 = 194;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x830edff8
	ctx.lr = 0x830EE4FC;
	sub_830EDFF8(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x830f50e0
	ctx.lr = 0x830EE508;
	sub_830F50E0(ctx, base);
loc_830EE508:
	// addi r29,r30,224
	ctx.r29.s64 = ctx.r30.s64 + 224;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x830e4258
	ctx.lr = 0x830EE514;
	sub_830E4258(ctx, base);
	// mr r24,r3
	ctx.r24.u64 = ctx.r3.u64;
	// mr r20,r29
	ctx.r20.u64 = ctx.r29.u64;
	// stw r3,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r3.u32);
	// stw r29,92(r31)
	PPC_STORE_U32(ctx.r31.u32 + 92, ctx.r29.u32);
	// lwz r11,24(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// li r22,0
	ctx.r22.s64 = 0;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// stw r22,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r22.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// sth r22,0(r11)
	PPC_STORE_U16(ctx.r11.u32 + 0, ctx.r22.u16);
	// lwz r3,136(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 136);
	// bl 0x830fa120
	ctx.lr = 0x830EE544;
	sub_830FA120(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x830ee568
	if (!ctx.cr0.eq) goto loc_830EE568;
	// li r4,194
	ctx.r4.s64 = 194;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x830edff8
	ctx.lr = 0x830EE558;
	sub_830EDFF8(ctx, base);
	// li r4,62
	ctx.r4.s64 = 62;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x830ed2b8
	ctx.lr = 0x830EE564;
	sub_830ED2B8(ctx, base);
	// b 0x830ee838
	goto loc_830EE838;
loc_830EE568:
	// lwz r11,0(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 0);
	// lwz r10,24(r24)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r24.u32 + 24);
	// rlwinm r11,r11,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// sthx r22,r11,r10
	PPC_STORE_U16(ctx.r11.u32 + ctx.r10.u32, ctx.r22.u16);
	// lwz r11,0(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 0);
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// lwz r21,24(r24)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r24.u32 + 24);
	// bne cr6,0x830ee5d0
	if (!ctx.cr6.eq) goto loc_830EE5D0;
	// lhz r11,0(r21)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r21.u32 + 0);
	// cmplwi cr6,r11,120
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 120, ctx.xer);
	// beq cr6,0x830ee59c
	if (ctx.cr6.eq) goto loc_830EE59C;
	// cmplwi cr6,r11,88
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 88, ctx.xer);
	// bne cr6,0x830ee5d0
	if (!ctx.cr6.eq) goto loc_830EE5D0;
loc_830EE59C:
	// lhz r11,2(r21)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r21.u32 + 2);
	// cmplwi cr6,r11,109
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 109, ctx.xer);
	// beq cr6,0x830ee5b0
	if (ctx.cr6.eq) goto loc_830EE5B0;
	// cmplwi cr6,r11,77
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 77, ctx.xer);
	// bne cr6,0x830ee5d0
	if (!ctx.cr6.eq) goto loc_830EE5D0;
loc_830EE5B0:
	// lhz r11,4(r21)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r21.u32 + 4);
	// cmplwi cr6,r11,108
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 108, ctx.xer);
	// beq cr6,0x830ee5c4
	if (ctx.cr6.eq) goto loc_830EE5C4;
	// cmplwi cr6,r11,76
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 76, ctx.xer);
	// bne cr6,0x830ee5d0
	if (!ctx.cr6.eq) goto loc_830EE5D0;
loc_830EE5C4:
	// li r4,283
	ctx.r4.s64 = 283;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x830edff8
	ctx.lr = 0x830EE5D0;
	sub_830EDFF8(ctx, base);
loc_830EE5D0:
	// lbz r11,10(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 10);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x830ee5fc
	if (ctx.cr0.eq) goto loc_830EE5FC;
	// li r4,58
	ctx.r4.s64 = 58;
	// mr r3,r21
	ctx.r3.u64 = ctx.r21.u64;
	// bl 0x830d6af0
	ctx.lr = 0x830EE5E8;
	sub_830D6AF0(ctx, base);
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// beq cr6,0x830ee5fc
	if (ctx.cr6.eq) goto loc_830EE5FC;
	// li r4,290
	ctx.r4.s64 = 290;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x830edff8
	ctx.lr = 0x830EE5FC;
	sub_830EDFF8(ctx, base);
loc_830EE5FC:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x830e4258
	ctx.lr = 0x830EE604;
	sub_830E4258(ctx, base);
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// mr r23,r29
	ctx.r23.u64 = ctx.r29.u64;
	// stw r3,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r3.u32);
	// stw r29,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r29.u32);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x830f4ff0
	ctx.lr = 0x830EE61C;
	sub_830F4FF0(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// beq 0x830ee750
	if (ctx.cr0.eq) goto loc_830EE750;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x830f50e0
	ctx.lr = 0x830EE630;
	sub_830F50E0(ctx, base);
	// mr r25,r22
	ctx.r25.u64 = ctx.r22.u64;
	// b 0x830ee704
	goto loc_830EE704;
loc_830EE638:
	// cmplwi cr6,r29,63
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 63, ctx.xer);
	// bne cr6,0x830ee654
	if (!ctx.cr6.eq) goto loc_830EE654;
	// li r4,62
	ctx.r4.s64 = 62;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x830f4f70
	ctx.lr = 0x830EE64C;
	sub_830F4F70(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x830ee7c4
	if (!ctx.cr0.eq) goto loc_830EE7C4;
loc_830EE654:
	// cmplwi cr6,r29,55296
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 55296, ctx.xer);
	// blt cr6,0x830ee684
	if (ctx.cr6.lt) goto loc_830EE684;
	// cmplwi cr6,r29,56319
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 56319, ctx.xer);
	// bgt cr6,0x830ee684
	if (ctx.cr6.gt) goto loc_830EE684;
	// clrlwi. r11,r25,24
	ctx.r11.u64 = ctx.r25.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x830ee67c
	if (ctx.cr0.eq) goto loc_830EE67C;
	// li r4,249
	ctx.r4.s64 = 249;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x830edff8
	ctx.lr = 0x830EE678;
	sub_830EDFF8(ctx, base);
	// b 0x830ee6f8
	goto loc_830EE6F8;
loc_830EE67C:
	// li r25,1
	ctx.r25.s64 = 1;
	// b 0x830ee6f8
	goto loc_830EE6F8;
loc_830EE684:
	// clrlwi. r11,r25,24
	ctx.r11.u64 = ctx.r25.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x830ee6ac
	if (ctx.cr0.eq) goto loc_830EE6AC;
	// cmplwi cr6,r29,56320
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 56320, ctx.xer);
	// blt cr6,0x830ee69c
	if (ctx.cr6.lt) goto loc_830EE69C;
	// cmplwi cr6,r29,57343
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 57343, ctx.xer);
	// ble cr6,0x830ee6f4
	if (!ctx.cr6.gt) goto loc_830EE6F4;
loc_830EE69C:
	// li r4,249
	ctx.r4.s64 = 249;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x830edff8
	ctx.lr = 0x830EE6A8;
	sub_830EDFF8(ctx, base);
	// b 0x830ee6f4
	goto loc_830EE6F4;
loc_830EE6AC:
	// lwz r11,136(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 136);
	// lwzx r11,r11,r19
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r19.u32);
	// lbzx r11,r11,r29
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + ctx.r29.u32);
	// rlwinm. r11,r11,0,25,25
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x40;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x830ee6f4
	if (!ctx.cr0.eq) goto loc_830EE6F4;
	// li r6,16
	ctx.r6.s64 = 16;
	// lwz r7,220(r30)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r30.u32 + 220);
	// li r5,8
	ctx.r5.s64 = 8;
	// addi r4,r31,96
	ctx.r4.s64 = ctx.r31.s64 + 96;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x830d6590
	ctx.lr = 0x830EE6D8;
	sub_830D6590(ctx, base);
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r31,96
	ctx.r5.s64 = ctx.r31.s64 + 96;
	// li r4,196
	ctx.r4.s64 = 196;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x830ee100
	ctx.lr = 0x830EE6F4;
	sub_830EE100(ctx, base);
loc_830EE6F4:
	// mr r25,r22
	ctx.r25.u64 = ctx.r22.u64;
loc_830EE6F8:
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x830d5880
	ctx.lr = 0x830EE704;
	sub_830D5880(ctx, base);
loc_830EE704:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x830f4dd0
	ctx.lr = 0x830EE70C;
	sub_830F4DD0(ctx, base);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// clrlwi. r29,r3,16
	ctx.r29.u64 = ctx.r3.u32 & 0xFFFF;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// bne 0x830ee638
	if (!ctx.cr0.eq) goto loc_830EE638;
	// li r4,195
	ctx.r4.s64 = 195;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x830edff8
	ctx.lr = 0x830EE724;
	sub_830EDFF8(ctx, base);
	// lis r11,-32228
	ctx.r11.s64 = -2112094208;
	// li r6,47
	ctx.r6.s64 = 47;
	// lwz r7,220(r30)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r30.u32 + 220);
	// addi r4,r11,10440
	ctx.r4.s64 = ctx.r11.s64 + 10440;
	// li r5,1203
	ctx.r5.s64 = 1203;
	// addi r3,r31,96
	ctx.r3.s64 = ctx.r31.s64 + 96;
	// bl 0x830ed320
	ctx.lr = 0x830EE740;
	sub_830ED320(ctx, base);
	// lis r11,-32194
	ctx.r11.s64 = -2109865984;
	// addi r3,r31,96
	ctx.r3.s64 = ctx.r31.s64 + 96;
	// addi r4,r11,-27808
	ctx.r4.s64 = ctx.r11.s64 + -27808;
	// bl 0x833a7198
	ctx.lr = 0x830EE750;
	sub_833A7198(ctx, base);
loc_830EE750:
	// li r4,63
	ctx.r4.s64 = 63;
	// bl 0x830f4f70
	ctx.lr = 0x830EE758;
	sub_830F4F70(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x830ee788
	if (!ctx.cr0.eq) goto loc_830EE788;
	// li r4,195
	ctx.r4.s64 = 195;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x830edff8
	ctx.lr = 0x830EE76C;
	sub_830EDFF8(ctx, base);
	// li r4,62
	ctx.r4.s64 = 62;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x830ed2b8
	ctx.lr = 0x830EE778;
	sub_830ED2B8(ctx, base);
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// bl 0x830e4388
	ctx.lr = 0x830EE784;
	sub_830E4388(ctx, base);
	// b 0x830ee838
	goto loc_830EE838;
loc_830EE788:
	// li r4,62
	ctx.r4.s64 = 62;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x830f4f70
	ctx.lr = 0x830EE794;
	sub_830F4F70(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x830ee7c4
	if (!ctx.cr0.eq) goto loc_830EE7C4;
	// li r4,195
	ctx.r4.s64 = 195;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x830edff8
	ctx.lr = 0x830EE7A8;
	sub_830EDFF8(ctx, base);
	// li r4,62
	ctx.r4.s64 = 62;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x830ed2b8
	ctx.lr = 0x830EE7B4;
	sub_830ED2B8(ctx, base);
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// bl 0x830e4388
	ctx.lr = 0x830EE7C0;
	sub_830E4388(ctx, base);
	// b 0x830ee838
	goto loc_830EE838;
loc_830EE7C4:
	// lwz r11,0(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// lwz r10,24(r26)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r26.u32 + 24);
	// rlwinm r11,r11,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// sthx r22,r11,r10
	PPC_STORE_U16(ctx.r11.u32 + ctx.r10.u32, ctx.r22.u16);
	// lwz r5,24(r26)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r26.u32 + 24);
	// lwz r11,96(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 96);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x830ee7fc
	if (ctx.cr6.eq) goto loc_830EE7FC;
	// rotlwi r3,r11,0
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// mr r4,r21
	ctx.r4.u64 = ctx.r21.u64;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x830EE7FC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_830EE7FC:
	// lwz r11,472(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 472);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x830ee82c
	if (ctx.cr6.eq) goto loc_830EE82C;
	// rotlwi r10,r11,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// lwz r11,464(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 464);
	// addi r9,r30,432
	ctx.r9.s64 = ctx.r30.s64 + 432;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// li r8,1
	ctx.r8.s64 = 1;
	// stw r9,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r9.u32);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwz r11,-4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -4);
	// stb r8,33(r11)
	PPC_STORE_U8(ctx.r11.u32 + 33, ctx.r8.u8);
loc_830EE82C:
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// bl 0x830e4388
	ctx.lr = 0x830EE838;
	sub_830E4388(ctx, base);
loc_830EE838:
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// mr r3,r20
	ctx.r3.u64 = ctx.r20.u64;
	// bl 0x830e4388
	ctx.lr = 0x830EE844;
	sub_830E4388(ctx, base);
	// addi r1,r31,240
	ctx.r1.s64 = ctx.r31.s64 + 240;
	// b 0x833a01d4
	__restgprlr_19(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_830EE4B0"))) PPC_WEAK_FUNC(sub_830EE4B0);
PPC_FUNC_IMPL(__imp__sub_830EE4B0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x833a0184
	ctx.lr = 0x830EE4B8;
	__savegprlr_19(ctx, base);
	// addi r31,r1,-240
	ctx.r31.s64 = ctx.r1.s64 + -240;
	// stwu r1,-240(r1)
	ea = -240 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r28,r3,128
	ctx.r28.s64 = ctx.r3.s64 + 128;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x830f4f08
	ctx.lr = 0x830EE4D0;
	sub_830F4F08(ctx, base);
	// lis r11,2
	ctx.r11.s64 = 131072;
	// lwz r10,136(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 136);
	// clrlwi r9,r3,16
	ctx.r9.u64 = ctx.r3.u32 & 0xFFFF;
	// ori r19,r11,32852
	ctx.r19.u64 = ctx.r11.u64 | 32852;
	// lwzx r11,r10,r19
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r19.u32);
	// lbzx r11,r11,r9
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + ctx.r9.u32);
	// rlwinm. r11,r11,0,0,24
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFF80;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x830ee508
	if (ctx.cr0.eq) goto loc_830EE508;
	// li r4,194
	ctx.r4.s64 = 194;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x830edff8
	ctx.lr = 0x830EE4FC;
	sub_830EDFF8(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x830f50e0
	ctx.lr = 0x830EE508;
	sub_830F50E0(ctx, base);
loc_830EE508:
	// addi r29,r30,224
	ctx.r29.s64 = ctx.r30.s64 + 224;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x830e4258
	ctx.lr = 0x830EE514;
	sub_830E4258(ctx, base);
	// mr r24,r3
	ctx.r24.u64 = ctx.r3.u64;
	// mr r20,r29
	ctx.r20.u64 = ctx.r29.u64;
	// stw r3,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r3.u32);
	// stw r29,92(r31)
	PPC_STORE_U32(ctx.r31.u32 + 92, ctx.r29.u32);
	// lwz r11,24(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// li r22,0
	ctx.r22.s64 = 0;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// stw r22,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r22.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// sth r22,0(r11)
	PPC_STORE_U16(ctx.r11.u32 + 0, ctx.r22.u16);
	// lwz r3,136(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 136);
	// bl 0x830fa120
	ctx.lr = 0x830EE544;
	sub_830FA120(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x830ee568
	if (!ctx.cr0.eq) goto loc_830EE568;
	// li r4,194
	ctx.r4.s64 = 194;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x830edff8
	ctx.lr = 0x830EE558;
	sub_830EDFF8(ctx, base);
	// li r4,62
	ctx.r4.s64 = 62;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x830ed2b8
	ctx.lr = 0x830EE564;
	sub_830ED2B8(ctx, base);
	// b 0x830ee838
	goto loc_830EE838;
loc_830EE568:
	// lwz r11,0(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 0);
	// lwz r10,24(r24)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r24.u32 + 24);
	// rlwinm r11,r11,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// sthx r22,r11,r10
	PPC_STORE_U16(ctx.r11.u32 + ctx.r10.u32, ctx.r22.u16);
	// lwz r11,0(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 0);
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// lwz r21,24(r24)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r24.u32 + 24);
	// bne cr6,0x830ee5d0
	if (!ctx.cr6.eq) goto loc_830EE5D0;
	// lhz r11,0(r21)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r21.u32 + 0);
	// cmplwi cr6,r11,120
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 120, ctx.xer);
	// beq cr6,0x830ee59c
	if (ctx.cr6.eq) goto loc_830EE59C;
	// cmplwi cr6,r11,88
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 88, ctx.xer);
	// bne cr6,0x830ee5d0
	if (!ctx.cr6.eq) goto loc_830EE5D0;
loc_830EE59C:
	// lhz r11,2(r21)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r21.u32 + 2);
	// cmplwi cr6,r11,109
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 109, ctx.xer);
	// beq cr6,0x830ee5b0
	if (ctx.cr6.eq) goto loc_830EE5B0;
	// cmplwi cr6,r11,77
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 77, ctx.xer);
	// bne cr6,0x830ee5d0
	if (!ctx.cr6.eq) goto loc_830EE5D0;
loc_830EE5B0:
	// lhz r11,4(r21)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r21.u32 + 4);
	// cmplwi cr6,r11,108
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 108, ctx.xer);
	// beq cr6,0x830ee5c4
	if (ctx.cr6.eq) goto loc_830EE5C4;
	// cmplwi cr6,r11,76
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 76, ctx.xer);
	// bne cr6,0x830ee5d0
	if (!ctx.cr6.eq) goto loc_830EE5D0;
loc_830EE5C4:
	// li r4,283
	ctx.r4.s64 = 283;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x830edff8
	ctx.lr = 0x830EE5D0;
	sub_830EDFF8(ctx, base);
loc_830EE5D0:
	// lbz r11,10(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 10);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x830ee5fc
	if (ctx.cr0.eq) goto loc_830EE5FC;
	// li r4,58
	ctx.r4.s64 = 58;
	// mr r3,r21
	ctx.r3.u64 = ctx.r21.u64;
	// bl 0x830d6af0
	ctx.lr = 0x830EE5E8;
	sub_830D6AF0(ctx, base);
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// beq cr6,0x830ee5fc
	if (ctx.cr6.eq) goto loc_830EE5FC;
	// li r4,290
	ctx.r4.s64 = 290;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x830edff8
	ctx.lr = 0x830EE5FC;
	sub_830EDFF8(ctx, base);
loc_830EE5FC:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x830e4258
	ctx.lr = 0x830EE604;
	sub_830E4258(ctx, base);
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// mr r23,r29
	ctx.r23.u64 = ctx.r29.u64;
	// stw r3,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r3.u32);
	// stw r29,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r29.u32);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x830f4ff0
	ctx.lr = 0x830EE61C;
	sub_830F4FF0(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// beq 0x830ee750
	if (ctx.cr0.eq) goto loc_830EE750;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x830f50e0
	ctx.lr = 0x830EE630;
	sub_830F50E0(ctx, base);
	// mr r25,r22
	ctx.r25.u64 = ctx.r22.u64;
	// b 0x830ee704
	goto loc_830EE704;
loc_830EE638:
	// cmplwi cr6,r29,63
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 63, ctx.xer);
	// bne cr6,0x830ee654
	if (!ctx.cr6.eq) goto loc_830EE654;
	// li r4,62
	ctx.r4.s64 = 62;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x830f4f70
	ctx.lr = 0x830EE64C;
	sub_830F4F70(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x830ee7c4
	if (!ctx.cr0.eq) goto loc_830EE7C4;
loc_830EE654:
	// cmplwi cr6,r29,55296
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 55296, ctx.xer);
	// blt cr6,0x830ee684
	if (ctx.cr6.lt) goto loc_830EE684;
	// cmplwi cr6,r29,56319
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 56319, ctx.xer);
	// bgt cr6,0x830ee684
	if (ctx.cr6.gt) goto loc_830EE684;
	// clrlwi. r11,r25,24
	ctx.r11.u64 = ctx.r25.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x830ee67c
	if (ctx.cr0.eq) goto loc_830EE67C;
	// li r4,249
	ctx.r4.s64 = 249;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x830edff8
	ctx.lr = 0x830EE678;
	sub_830EDFF8(ctx, base);
	// b 0x830ee6f8
	goto loc_830EE6F8;
loc_830EE67C:
	// li r25,1
	ctx.r25.s64 = 1;
	// b 0x830ee6f8
	goto loc_830EE6F8;
loc_830EE684:
	// clrlwi. r11,r25,24
	ctx.r11.u64 = ctx.r25.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x830ee6ac
	if (ctx.cr0.eq) goto loc_830EE6AC;
	// cmplwi cr6,r29,56320
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 56320, ctx.xer);
	// blt cr6,0x830ee69c
	if (ctx.cr6.lt) goto loc_830EE69C;
	// cmplwi cr6,r29,57343
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 57343, ctx.xer);
	// ble cr6,0x830ee6f4
	if (!ctx.cr6.gt) goto loc_830EE6F4;
loc_830EE69C:
	// li r4,249
	ctx.r4.s64 = 249;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x830edff8
	ctx.lr = 0x830EE6A8;
	sub_830EDFF8(ctx, base);
	// b 0x830ee6f4
	goto loc_830EE6F4;
loc_830EE6AC:
	// lwz r11,136(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 136);
	// lwzx r11,r11,r19
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r19.u32);
	// lbzx r11,r11,r29
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + ctx.r29.u32);
	// rlwinm. r11,r11,0,25,25
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x40;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x830ee6f4
	if (!ctx.cr0.eq) goto loc_830EE6F4;
	// li r6,16
	ctx.r6.s64 = 16;
	// lwz r7,220(r30)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r30.u32 + 220);
	// li r5,8
	ctx.r5.s64 = 8;
	// addi r4,r31,96
	ctx.r4.s64 = ctx.r31.s64 + 96;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x830d6590
	ctx.lr = 0x830EE6D8;
	sub_830D6590(ctx, base);
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r31,96
	ctx.r5.s64 = ctx.r31.s64 + 96;
	// li r4,196
	ctx.r4.s64 = 196;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x830ee100
	ctx.lr = 0x830EE6F4;
	sub_830EE100(ctx, base);
loc_830EE6F4:
	// mr r25,r22
	ctx.r25.u64 = ctx.r22.u64;
loc_830EE6F8:
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x830d5880
	ctx.lr = 0x830EE704;
	sub_830D5880(ctx, base);
loc_830EE704:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x830f4dd0
	ctx.lr = 0x830EE70C;
	sub_830F4DD0(ctx, base);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// clrlwi. r29,r3,16
	ctx.r29.u64 = ctx.r3.u32 & 0xFFFF;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// bne 0x830ee638
	if (!ctx.cr0.eq) goto loc_830EE638;
	// li r4,195
	ctx.r4.s64 = 195;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x830edff8
	ctx.lr = 0x830EE724;
	sub_830EDFF8(ctx, base);
	// lis r11,-32228
	ctx.r11.s64 = -2112094208;
	// li r6,47
	ctx.r6.s64 = 47;
	// lwz r7,220(r30)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r30.u32 + 220);
	// addi r4,r11,10440
	ctx.r4.s64 = ctx.r11.s64 + 10440;
	// li r5,1203
	ctx.r5.s64 = 1203;
	// addi r3,r31,96
	ctx.r3.s64 = ctx.r31.s64 + 96;
	// bl 0x830ed320
	ctx.lr = 0x830EE740;
	sub_830ED320(ctx, base);
	// lis r11,-32194
	ctx.r11.s64 = -2109865984;
	// addi r3,r31,96
	ctx.r3.s64 = ctx.r31.s64 + 96;
	// addi r4,r11,-27808
	ctx.r4.s64 = ctx.r11.s64 + -27808;
	// bl 0x833a7198
	ctx.lr = 0x830EE750;
	sub_833A7198(ctx, base);
loc_830EE750:
	// li r4,63
	ctx.r4.s64 = 63;
	// bl 0x830f4f70
	ctx.lr = 0x830EE758;
	sub_830F4F70(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x830ee788
	if (!ctx.cr0.eq) goto loc_830EE788;
	// li r4,195
	ctx.r4.s64 = 195;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x830edff8
	ctx.lr = 0x830EE76C;
	sub_830EDFF8(ctx, base);
	// li r4,62
	ctx.r4.s64 = 62;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x830ed2b8
	ctx.lr = 0x830EE778;
	sub_830ED2B8(ctx, base);
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// bl 0x830e4388
	ctx.lr = 0x830EE784;
	sub_830E4388(ctx, base);
	// b 0x830ee838
	goto loc_830EE838;
loc_830EE788:
	// li r4,62
	ctx.r4.s64 = 62;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x830f4f70
	ctx.lr = 0x830EE794;
	sub_830F4F70(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x830ee7c4
	if (!ctx.cr0.eq) goto loc_830EE7C4;
	// li r4,195
	ctx.r4.s64 = 195;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x830edff8
	ctx.lr = 0x830EE7A8;
	sub_830EDFF8(ctx, base);
	// li r4,62
	ctx.r4.s64 = 62;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x830ed2b8
	ctx.lr = 0x830EE7B4;
	sub_830ED2B8(ctx, base);
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// bl 0x830e4388
	ctx.lr = 0x830EE7C0;
	sub_830E4388(ctx, base);
	// b 0x830ee838
	goto loc_830EE838;
loc_830EE7C4:
	// lwz r11,0(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// lwz r10,24(r26)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r26.u32 + 24);
	// rlwinm r11,r11,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// sthx r22,r11,r10
	PPC_STORE_U16(ctx.r11.u32 + ctx.r10.u32, ctx.r22.u16);
	// lwz r5,24(r26)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r26.u32 + 24);
	// lwz r11,96(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 96);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x830ee7fc
	if (ctx.cr6.eq) goto loc_830EE7FC;
	// rotlwi r3,r11,0
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// mr r4,r21
	ctx.r4.u64 = ctx.r21.u64;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x830EE7FC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_830EE7FC:
	// lwz r11,472(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 472);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x830ee82c
	if (ctx.cr6.eq) goto loc_830EE82C;
	// rotlwi r10,r11,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// lwz r11,464(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 464);
	// addi r9,r30,432
	ctx.r9.s64 = ctx.r30.s64 + 432;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// li r8,1
	ctx.r8.s64 = 1;
	// stw r9,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r9.u32);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwz r11,-4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -4);
	// stb r8,33(r11)
	PPC_STORE_U8(ctx.r11.u32 + 33, ctx.r8.u8);
loc_830EE82C:
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// bl 0x830e4388
	ctx.lr = 0x830EE838;
	sub_830E4388(ctx, base);
loc_830EE838:
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// mr r3,r20
	ctx.r3.u64 = ctx.r20.u64;
	// bl 0x830e4388
	ctx.lr = 0x830EE844;
	sub_830E4388(ctx, base);
	// addi r1,r31,240
	ctx.r1.s64 = ctx.r31.s64 + 240;
	// b 0x833a01d4
	__restgprlr_19(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_830EE84C"))) PPC_WEAK_FUNC(sub_830EE84C);
PPC_FUNC_IMPL(__imp__sub_830EE84C) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// addi r31,r12,-240
	ctx.r31.s64 = ctx.r12.s64 + -240;
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
	// bl 0x830d9068
	ctx.lr = 0x830EE864;
	sub_830D9068(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830EE874"))) PPC_WEAK_FUNC(sub_830EE874);
PPC_FUNC_IMPL(__imp__sub_830EE874) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// addi r31,r12,-240
	ctx.r31.s64 = ctx.r12.s64 + -240;
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
	// bl 0x830d9068
	ctx.lr = 0x830EE88C;
	sub_830D9068(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830EE89C"))) PPC_WEAK_FUNC(sub_830EE89C);
PPC_FUNC_IMPL(__imp__sub_830EE89C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_830EE8A0"))) PPC_WEAK_FUNC(sub_830EE8A0);
PPC_FUNC_IMPL(__imp__sub_830EE8A0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lwz r25,17952(r26)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r26.u32 + 17952);
	// lwz r16,10744(r28)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r28.u32 + 10744);
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x833a0170
	ctx.lr = 0x830EE8B0;
	__savegprlr_14(ctx, base);
	// addi r31,r1,-336
	ctx.r31.s64 = ctx.r1.s64 + -336;
	// stwu r1,-336(r1)
	ea = -336 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r30,r3,224
	ctx.r30.s64 = ctx.r3.s64 + 224;
	// stw r4,364(r31)
	PPC_STORE_U32(ctx.r31.u32 + 364, ctx.r4.u32);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mr r20,r4
	ctx.r20.u64 = ctx.r4.u64;
	// bl 0x830e4258
	ctx.lr = 0x830EE8D0;
	sub_830E4258(ctx, base);
	// mr r23,r3
	ctx.r23.u64 = ctx.r3.u64;
	// stw r30,124(r31)
	PPC_STORE_U32(ctx.r31.u32 + 124, ctx.r30.u32);
	// stw r3,120(r31)
	PPC_STORE_U32(ctx.r31.u32 + 120, ctx.r3.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x830e4258
	ctx.lr = 0x830EE8E4;
	sub_830E4258(ctx, base);
	// mr r24,r3
	ctx.r24.u64 = ctx.r3.u64;
	// stw r30,140(r31)
	PPC_STORE_U32(ctx.r31.u32 + 140, ctx.r30.u32);
	// stw r3,136(r31)
	PPC_STORE_U32(ctx.r31.u32 + 136, ctx.r3.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x830e4258
	ctx.lr = 0x830EE8F8;
	sub_830E4258(ctx, base);
	// mr r22,r3
	ctx.r22.u64 = ctx.r3.u64;
	// stw r30,108(r31)
	PPC_STORE_U32(ctx.r31.u32 + 108, ctx.r30.u32);
	// stw r3,104(r31)
	PPC_STORE_U32(ctx.r31.u32 + 104, ctx.r3.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x830e4258
	ctx.lr = 0x830EE90C;
	sub_830E4258(ctx, base);
	// mr r21,r3
	ctx.r21.u64 = ctx.r3.u64;
	// stw r30,116(r31)
	PPC_STORE_U32(ctx.r31.u32 + 116, ctx.r30.u32);
	// stw r3,112(r31)
	PPC_STORE_U32(ctx.r31.u32 + 112, ctx.r3.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x830e4258
	ctx.lr = 0x830EE920;
	sub_830E4258(ctx, base);
	// mr r16,r3
	ctx.r16.u64 = ctx.r3.u64;
	// stw r30,132(r31)
	PPC_STORE_U32(ctx.r31.u32 + 132, ctx.r30.u32);
	// stw r3,128(r31)
	PPC_STORE_U32(ctx.r31.u32 + 128, ctx.r3.u32);
	// addi r26,r29,128
	ctx.r26.s64 = ctx.r29.s64 + 128;
	// li r27,-1
	ctx.r27.s64 = -1;
	// stw r23,160(r31)
	PPC_STORE_U32(ctx.r31.u32 + 160, ctx.r23.u32);
	// li r25,0
	ctx.r25.s64 = 0;
	// stw r24,164(r31)
	PPC_STORE_U32(ctx.r31.u32 + 164, ctx.r24.u32);
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// stw r27,156(r31)
	PPC_STORE_U32(ctx.r31.u32 + 156, ctx.r27.u32);
	// li r4,1
	ctx.r4.s64 = 1;
	// stw r27,144(r31)
	PPC_STORE_U32(ctx.r31.u32 + 144, ctx.r27.u32);
	// stw r22,168(r31)
	PPC_STORE_U32(ctx.r31.u32 + 168, ctx.r22.u32);
	// stw r21,172(r31)
	PPC_STORE_U32(ctx.r31.u32 + 172, ctx.r21.u32);
	// stw r27,148(r31)
	PPC_STORE_U32(ctx.r31.u32 + 148, ctx.r27.u32);
	// stw r27,152(r31)
	PPC_STORE_U32(ctx.r31.u32 + 152, ctx.r27.u32);
	// stw r25,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r25.u32);
	// bl 0x830f50e0
	ctx.lr = 0x830EE968;
	sub_830F50E0(ctx, base);
	// clrlwi r28,r3,24
	ctx.r28.u64 = ctx.r3.u32 & 0xFF;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x830f4f08
	ctx.lr = 0x830EE974;
	sub_830F4F08(ctx, base);
	// clrlwi r11,r3,16
	ctx.r11.u64 = ctx.r3.u32 & 0xFFFF;
	// cmplwi cr6,r11,63
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 63, ctx.xer);
	// beq cr6,0x830eed4c
	if (ctx.cr6.eq) goto loc_830EED4C;
	// lis r9,-32228
	ctx.r9.s64 = -2112094208;
	// lis r8,-32228
	ctx.r8.s64 = -2112094208;
	// addi r9,r9,-7080
	ctx.r9.s64 = ctx.r9.s64 + -7080;
	// lis r7,-32228
	ctx.r7.s64 = -2112094208;
	// lis r6,-32228
	ctx.r6.s64 = -2112094208;
	// stw r9,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r9.u32);
	// lis r30,2
	ctx.r30.s64 = 131072;
	// lis r11,-31848
	ctx.r11.s64 = -2087190528;
	// lis r27,2
	ctx.r27.s64 = 131072;
	// lis r23,2
	ctx.r23.s64 = 131072;
	// lis r10,-31847
	ctx.r10.s64 = -2087124992;
	// lis r5,-32228
	ctx.r5.s64 = -2112094208;
	// lis r4,-32228
	ctx.r4.s64 = -2112094208;
	// lis r3,-32228
	ctx.r3.s64 = -2112094208;
	// addi r8,r8,-5748
	ctx.r8.s64 = ctx.r8.s64 + -5748;
	// addi r7,r7,-6912
	ctx.r7.s64 = ctx.r7.s64 + -6912;
	// addi r9,r6,-6904
	ctx.r9.s64 = ctx.r6.s64 + -6904;
	// stw r8,92(r31)
	PPC_STORE_U32(ctx.r31.u32 + 92, ctx.r8.u32);
	// ori r21,r30,32860
	ctx.r21.u64 = ctx.r30.u64 | 32860;
	// stw r7,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r7.u32);
	// li r20,1
	ctx.r20.s64 = 1;
	// stw r9,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r9.u32);
	// ori r22,r27,32856
	ctx.r22.u64 = ctx.r27.u64 | 32856;
	// ori r23,r23,32852
	ctx.r23.u64 = ctx.r23.u64 | 32852;
	// lis r18,-31827
	ctx.r18.s64 = -2085814272;
	// addi r19,r11,23400
	ctx.r19.s64 = ctx.r11.s64 + 23400;
	// addi r17,r10,23400
	ctx.r17.s64 = ctx.r10.s64 + 23400;
	// addi r15,r5,-6936
	ctx.r15.s64 = ctx.r5.s64 + -6936;
	// addi r30,r4,-7764
	ctx.r30.s64 = ctx.r4.s64 + -7764;
	// addi r14,r3,-6384
	ctx.r14.s64 = ctx.r3.s64 + -6384;
loc_830EE9F8:
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// bne cr6,0x830eea18
	if (!ctx.cr6.eq) goto loc_830EEA18;
	// lwz r11,80(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x830eea18
	if (ctx.cr6.eq) goto loc_830EEA18;
	// li r4,207
	ctx.r4.s64 = 207;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x830edff8
	ctx.lr = 0x830EEA18;
	sub_830EDFF8(ctx, base);
loc_830EEA18:
	// li r5,61
	ctx.r5.s64 = 61;
	// mr r4,r16
	ctx.r4.u64 = ctx.r16.u64;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x830f4ea8
	ctx.lr = 0x830EEA28;
	sub_830F4EA8(ctx, base);
	// lwz r11,0(r16)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r16.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x830eea40
	if (!ctx.cr6.eq) goto loc_830EEA40;
	// li r4,187
	ctx.r4.s64 = 187;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x830edff8
	ctx.lr = 0x830EEA40;
	sub_830EDFF8(ctx, base);
loc_830EEA40:
	// lwz r11,0(r16)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r16.u32 + 0);
	// mr r4,r14
	ctx.r4.u64 = ctx.r14.u64;
	// lwz r10,24(r16)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r16.u32 + 24);
	// rlwinm r11,r11,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// sthx r25,r11,r10
	PPC_STORE_U16(ctx.r11.u32 + ctx.r10.u32, ctx.r25.u16);
	// lwz r3,24(r16)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r16.u32 + 24);
	// bl 0x830d8d28
	ctx.lr = 0x830EEA5C;
	sub_830D8D28(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x830eeaac
	if (ctx.cr0.eq) goto loc_830EEAAC;
	// mr r27,r25
	ctx.r27.u64 = ctx.r25.u64;
loc_830EEA68:
	// rlwinm r10,r27,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r11,r31,144
	ctx.r11.s64 = ctx.r31.s64 + 144;
	// lwzx r9,r10,r11
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// cmpwi cr6,r9,-1
	ctx.cr6.compare<int32_t>(ctx.r9.s32, -1, ctx.xer);
	// beq cr6,0x830eeb10
	if (ctx.cr6.eq) goto loc_830EEB10;
	// li r4,268
	ctx.r4.s64 = 268;
loc_830EEA80:
	// lwz r11,0(r16)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r16.u32 + 0);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r10,24(r16)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r16.u32 + 24);
	// li r6,0
	ctx.r6.s64 = 0;
	// rlwinm r11,r11,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// sthx r25,r11,r10
	PPC_STORE_U16(ctx.r11.u32 + ctx.r10.u32, ctx.r25.u16);
	// lwz r5,24(r16)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r16.u32 + 24);
	// bl 0x830ee100
	ctx.lr = 0x830EEAA8;
	sub_830EE100(ctx, base);
	// b 0x830eeb20
	goto loc_830EEB20;
loc_830EEAAC:
	// lwz r11,0(r16)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r16.u32 + 0);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r10,24(r16)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r16.u32 + 24);
	// rlwinm r11,r11,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// sthx r25,r11,r10
	PPC_STORE_U16(ctx.r11.u32 + ctx.r10.u32, ctx.r25.u16);
	// lwz r3,24(r16)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r16.u32 + 24);
	// bl 0x830d8d28
	ctx.lr = 0x830EEAC8;
	sub_830D8D28(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x830eead8
	if (ctx.cr0.eq) goto loc_830EEAD8;
	// mr r27,r20
	ctx.r27.u64 = ctx.r20.u64;
	// b 0x830eea68
	goto loc_830EEA68;
loc_830EEAD8:
	// lwz r11,0(r16)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r16.u32 + 0);
	// mr r4,r15
	ctx.r4.u64 = ctx.r15.u64;
	// lwz r10,24(r16)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r16.u32 + 24);
	// rlwinm r11,r11,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// sthx r25,r11,r10
	PPC_STORE_U16(ctx.r11.u32 + ctx.r10.u32, ctx.r25.u16);
	// lwz r3,24(r16)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r16.u32 + 24);
	// bl 0x830d8d28
	ctx.lr = 0x830EEAF4;
	sub_830D8D28(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x830eeb04
	if (ctx.cr0.eq) goto loc_830EEB04;
	// li r27,2
	ctx.r27.s64 = 2;
	// b 0x830eea68
	goto loc_830EEA68;
loc_830EEB04:
	// li r4,187
	ctx.r4.s64 = 187;
	// li r27,3
	ctx.r27.s64 = 3;
	// b 0x830eea80
	goto loc_830EEA80;
loc_830EEB10:
	// lwz r9,80(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// stw r9,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r9.u32);
	// stwx r9,r10,r11
	PPC_STORE_U32(ctx.r10.u32 + ctx.r11.u32, ctx.r9.u32);
loc_830EEB20:
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x830ed900
	ctx.lr = 0x830EEB2C;
	sub_830ED900(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x830eeb40
	if (!ctx.cr0.eq) goto loc_830EEB40;
	// li r4,180
	ctx.r4.s64 = 180;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x830edff8
	ctx.lr = 0x830EEB40;
	sub_830EDFF8(ctx, base);
loc_830EEB40:
	// rlwinm r11,r27,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r10,r31,160
	ctx.r10.s64 = ctx.r31.s64 + 160;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwzx r28,r11,r10
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// bl 0x830ed870
	ctx.lr = 0x830EEB58;
	sub_830ED870(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x830eef84
	if (ctx.cr0.eq) goto loc_830EEF84;
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// cmpwi cr6,r27,0
	ctx.cr6.compare<int32_t>(ctx.r27.s32, 0, ctx.xer);
	// lwz r10,24(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 24);
	// rlwinm r11,r11,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// stw r28,100(r31)
	PPC_STORE_U32(ctx.r31.u32 + 100, ctx.r28.u32);
	// sthx r25,r11,r10
	PPC_STORE_U16(ctx.r11.u32 + ctx.r10.u32, ctx.r25.u16);
	// lwz r28,24(r28)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r28.u32 + 24);
	// bne cr6,0x830eec10
	if (!ctx.cr6.eq) goto loc_830EEC10;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwz r4,84(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 84);
	// bl 0x830d8d28
	ctx.lr = 0x830EEB8C;
	sub_830D8D28(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x830eebd0
	if (ctx.cr0.eq) goto loc_830EEBD0;
	// lwz r11,364(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 364);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x830eebbc
	if (!ctx.cr6.eq) goto loc_830EEBBC;
	// stw r20,216(r29)
	PPC_STORE_U32(ctx.r29.u32 + 216, ctx.r20.u32);
	// lwz r11,8(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 8);
	// stw r20,32(r26)
	PPC_STORE_U32(ctx.r26.u32 + 32, ctx.r20.u32);
	// stwx r20,r11,r21
	PPC_STORE_U32(ctx.r11.u32 + ctx.r21.u32, ctx.r20.u32);
	// stbx r20,r11,r22
	PPC_STORE_U8(ctx.r11.u32 + ctx.r22.u32, ctx.r20.u8);
	// stwx r17,r11,r23
	PPC_STORE_U32(ctx.r11.u32 + ctx.r23.u32, ctx.r17.u32);
	// b 0x830eed14
	goto loc_830EED14;
loc_830EEBBC:
	// lwz r11,216(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 216);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x830eed14
	if (ctx.cr6.eq) goto loc_830EED14;
loc_830EEBC8:
	// li r4,189
	ctx.r4.s64 = 189;
	// b 0x830eec2c
	goto loc_830EEC2C;
loc_830EEBD0:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwz r4,88(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 88);
	// bl 0x830d8d28
	ctx.lr = 0x830EEBDC;
	sub_830D8D28(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x830eebc8
	if (ctx.cr0.eq) goto loc_830EEBC8;
	// lwz r11,364(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 364);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x830eed14
	if (!ctx.cr6.eq) goto loc_830EED14;
	// stw r25,216(r29)
	PPC_STORE_U32(ctx.r29.u32 + 216, ctx.r25.u32);
	// stw r25,32(r26)
	PPC_STORE_U32(ctx.r26.u32 + 32, ctx.r25.u32);
	// lwz r10,8(r26)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r26.u32 + 8);
	// stwx r25,r10,r21
	PPC_STORE_U32(ctx.r10.u32 + ctx.r21.u32, ctx.r25.u32);
	// lbz r11,-5008(r18)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r18.u32 + -5008);
	// stwx r19,r10,r23
	PPC_STORE_U32(ctx.r10.u32 + ctx.r23.u32, ctx.r19.u32);
	// stbx r11,r10,r22
	PPC_STORE_U8(ctx.r10.u32 + ctx.r22.u32, ctx.r11.u8);
	// b 0x830eed14
	goto loc_830EED14;
loc_830EEC10:
	// cmpwi cr6,r27,1
	ctx.cr6.compare<int32_t>(ctx.r27.s32, 1, ctx.xer);
	// bne cr6,0x830eec48
	if (!ctx.cr6.eq) goto loc_830EEC48;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x830d7bb8
	ctx.lr = 0x830EEC20;
	sub_830D7BB8(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x830eed14
	if (!ctx.cr0.eq) goto loc_830EED14;
	// li r4,191
	ctx.r4.s64 = 191;
loc_830EEC2C:
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x830ee100
	ctx.lr = 0x830EEC44;
	sub_830EE100(ctx, base);
	// b 0x830eed14
	goto loc_830EED14;
loc_830EEC48:
	// cmpwi cr6,r27,2
	ctx.cr6.compare<int32_t>(ctx.r27.s32, 2, ctx.xer);
	// bne cr6,0x830eed14
	if (!ctx.cr6.eq) goto loc_830EED14;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwz r4,92(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 92);
	// bl 0x830d8d28
	ctx.lr = 0x830EEC5C;
	sub_830D8D28(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x830eecd4
	if (!ctx.cr0.eq) goto loc_830EECD4;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwz r4,96(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 96);
	// bl 0x830d8d28
	ctx.lr = 0x830EEC70;
	sub_830D8D28(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x830eed10
	if (!ctx.cr0.eq) goto loc_830EED10;
	// li r4,192
	ctx.r4.s64 = 192;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x830edff8
	ctx.lr = 0x830EEC84;
	sub_830EDFF8(ctx, base);
	// lwz r11,104(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 104);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r10,3
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 3, ctx.xer);
	// stw r10,100(r31)
	PPC_STORE_U32(ctx.r31.u32 + 100, ctx.r10.u32);
	// bne cr6,0x830eecdc
	if (!ctx.cr6.eq) goto loc_830EECDC;
	// lhz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r28.u32 + 0);
	// cmplwi cr6,r11,121
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 121, ctx.xer);
	// beq cr6,0x830eecac
	if (ctx.cr6.eq) goto loc_830EECAC;
	// cmplwi cr6,r11,89
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 89, ctx.xer);
	// bne cr6,0x830eecdc
	if (!ctx.cr6.eq) goto loc_830EECDC;
loc_830EECAC:
	// lhz r11,2(r28)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r28.u32 + 2);
	// cmplwi cr6,r11,101
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 101, ctx.xer);
	// beq cr6,0x830eecc0
	if (ctx.cr6.eq) goto loc_830EECC0;
	// cmplwi cr6,r11,69
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 69, ctx.xer);
	// bne cr6,0x830eecdc
	if (!ctx.cr6.eq) goto loc_830EECDC;
loc_830EECC0:
	// lhz r11,4(r28)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r28.u32 + 4);
	// cmplwi cr6,r11,115
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 115, ctx.xer);
	// beq cr6,0x830eecd4
	if (ctx.cr6.eq) goto loc_830EECD4;
	// cmplwi cr6,r11,83
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 83, ctx.xer);
	// bne cr6,0x830eecdc
	if (!ctx.cr6.eq) goto loc_830EECDC;
loc_830EECD4:
	// stb r20,14(r29)
	PPC_STORE_U8(ctx.r29.u32 + 14, ctx.r20.u8);
	// b 0x830eed14
	goto loc_830EED14;
loc_830EECDC:
	// stw r10,100(r31)
	PPC_STORE_U32(ctx.r31.u32 + 100, ctx.r10.u32);
	// cmplwi cr6,r10,2
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 2, ctx.xer);
	// bne cr6,0x830eed14
	if (!ctx.cr6.eq) goto loc_830EED14;
	// lhz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r28.u32 + 0);
	// cmplwi cr6,r11,110
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 110, ctx.xer);
	// beq cr6,0x830eecfc
	if (ctx.cr6.eq) goto loc_830EECFC;
	// cmplwi cr6,r11,78
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 78, ctx.xer);
	// bne cr6,0x830eed14
	if (!ctx.cr6.eq) goto loc_830EED14;
loc_830EECFC:
	// lhz r11,2(r28)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r28.u32 + 2);
	// cmplwi cr6,r11,111
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 111, ctx.xer);
	// beq cr6,0x830eed10
	if (ctx.cr6.eq) goto loc_830EED10;
	// cmplwi cr6,r11,79
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 79, ctx.xer);
	// bne cr6,0x830eed14
	if (!ctx.cr6.eq) goto loc_830EED14;
loc_830EED10:
	// stb r25,14(r29)
	PPC_STORE_U8(ctx.r29.u32 + 14, ctx.r25.u8);
loc_830EED14:
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x830f50e0
	ctx.lr = 0x830EED20;
	sub_830F50E0(ctx, base);
	// clrlwi r28,r3,24
	ctx.r28.u64 = ctx.r3.u32 & 0xFF;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x830f4f08
	ctx.lr = 0x830EED2C;
	sub_830F4F08(ctx, base);
	// clrlwi r11,r3,16
	ctx.r11.u64 = ctx.r3.u32 & 0xFFFF;
	// cmplwi cr6,r11,63
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 63, ctx.xer);
	// bne cr6,0x830ee9f8
	if (!ctx.cr6.eq) goto loc_830EE9F8;
	// lwz r27,148(r31)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r31.u32 + 148);
	// lwz r21,112(r31)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r31.u32 + 112);
	// lwz r22,104(r31)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r31.u32 + 104);
	// lwz r23,120(r31)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r31.u32 + 120);
	// lwz r20,364(r31)
	ctx.r20.u64 = PPC_LOAD_U32(ctx.r31.u32 + 364);
loc_830EED4C:
	// mr r8,r25
	ctx.r8.u64 = ctx.r25.u64;
	// mr r9,r25
	ctx.r9.u64 = ctx.r25.u64;
	// addi r10,r31,144
	ctx.r10.s64 = ctx.r31.s64 + 144;
loc_830EED58:
	// lwz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// beq cr6,0x830eed74
	if (ctx.cr6.eq) goto loc_830EED74;
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// cmpw cr6,r11,r8
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r8.s32, ctx.xer);
	// bne cr6,0x830eed88
	if (!ctx.cr6.eq) goto loc_830EED88;
	// mr r8,r11
	ctx.r8.u64 = ctx.r11.u64;
loc_830EED74:
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// cmpwi cr6,r9,2
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 2, ctx.xer);
	// blt cr6,0x830eed58
	if (ctx.cr6.lt) goto loc_830EED58;
	// b 0x830eed94
	goto loc_830EED94;
loc_830EED88:
	// li r4,269
	ctx.r4.s64 = 269;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x830edff8
	ctx.lr = 0x830EED94;
	sub_830EDFF8(ctx, base);
loc_830EED94:
	// cmpwi cr6,r20,1
	ctx.cr6.compare<int32_t>(ctx.r20.s32, 1, ctx.xer);
	// bne cr6,0x830eedb0
	if (!ctx.cr6.eq) goto loc_830EEDB0;
	// lwz r11,144(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 144);
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// bne cr6,0x830eede4
	if (!ctx.cr6.eq) goto loc_830EEDE4;
	// li r4,285
	ctx.r4.s64 = 285;
	// b 0x830eeddc
	goto loc_830EEDDC;
loc_830EEDB0:
	// cmpwi cr6,r20,0
	ctx.cr6.compare<int32_t>(ctx.r20.s32, 0, ctx.xer);
	// bne cr6,0x830eede4
	if (!ctx.cr6.eq) goto loc_830EEDE4;
	// lwz r11,152(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 152);
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// beq cr6,0x830eedd0
	if (ctx.cr6.eq) goto loc_830EEDD0;
	// li r4,286
	ctx.r4.s64 = 286;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x830edff8
	ctx.lr = 0x830EEDD0;
	sub_830EDFF8(ctx, base);
loc_830EEDD0:
	// cmpwi cr6,r27,-1
	ctx.cr6.compare<int32_t>(ctx.r27.s32, -1, ctx.xer);
	// bne cr6,0x830eede4
	if (!ctx.cr6.eq) goto loc_830EEDE4;
	// li r4,287
	ctx.r4.s64 = 287;
loc_830EEDDC:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x830edff8
	ctx.lr = 0x830EEDE4;
	sub_830EDFF8(ctx, base);
loc_830EEDE4:
	// li r4,63
	ctx.r4.s64 = 63;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x830f4f70
	ctx.lr = 0x830EEDF0;
	sub_830F4F70(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x830eee0c
	if (ctx.cr0.eq) goto loc_830EEE0C;
	// li r4,62
	ctx.r4.s64 = 62;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x830f4f70
	ctx.lr = 0x830EEE04;
	sub_830F4F70(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x830eee24
	if (!ctx.cr0.eq) goto loc_830EEE24;
loc_830EEE0C:
	// li r4,190
	ctx.r4.s64 = 190;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x830edff8
	ctx.lr = 0x830EEE18;
	sub_830EDFF8(ctx, base);
	// li r4,62
	ctx.r4.s64 = 62;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x830ed2b8
	ctx.lr = 0x830EEE24;
	sub_830ED2B8(ctx, base);
loc_830EEE24:
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x830f5288
	ctx.lr = 0x830EEE2C;
	sub_830F5288(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// cmpwi cr6,r27,-1
	ctx.cr6.compare<int32_t>(ctx.r27.s32, -1, ctx.xer);
	// beq cr6,0x830eee90
	if (ctx.cr6.eq) goto loc_830EEE90;
	// lwz r11,0(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 0);
	// lwz r10,24(r24)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r24.u32 + 24);
	// rlwinm r11,r11,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// sthx r25,r11,r10
	PPC_STORE_U16(ctx.r11.u32 + ctx.r10.u32, ctx.r25.u16);
	// lwz r3,136(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 136);
	// lwz r4,24(r24)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r24.u32 + 24);
	// bl 0x830f92f0
	ctx.lr = 0x830EEE54;
	sub_830F92F0(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// lwz r11,0(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 0);
	// lwz r10,24(r24)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r24.u32 + 24);
	// rlwinm r11,r11,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// sthx r25,r11,r10
	PPC_STORE_U16(ctx.r11.u32 + ctx.r10.u32, ctx.r25.u16);
	// bne 0x830eee8c
	if (!ctx.cr0.eq) goto loc_830EEE8C;
	// li r8,0
	ctx.r8.s64 = 0;
	// lwz r5,24(r24)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r24.u32 + 24);
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r4,4
	ctx.r4.s64 = 4;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x830ee100
	ctx.lr = 0x830EEE88;
	sub_830EE100(ctx, base);
	// b 0x830eee90
	goto loc_830EEE90;
loc_830EEE8C:
	// lwz r28,24(r24)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r24.u32 + 24);
loc_830EEE90:
	// cmpwi cr6,r20,1
	ctx.cr6.compare<int32_t>(ctx.r20.s32, 1, ctx.xer);
	// bne cr6,0x830eeefc
	if (!ctx.cr6.eq) goto loc_830EEEFC;
	// lwz r11,96(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 96);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x830eef4c
	if (ctx.cr6.eq) goto loc_830EEF4C;
	// lwz r11,0(r22)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r22.u32 + 0);
	// mr r7,r28
	ctx.r7.u64 = ctx.r28.u64;
	// lwz r10,24(r22)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r22.u32 + 24);
	// rlwinm r11,r11,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// sthx r25,r11,r10
	PPC_STORE_U16(ctx.r11.u32 + ctx.r10.u32, ctx.r25.u16);
	// lwz r10,24(r24)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r24.u32 + 24);
	// lwz r6,24(r22)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r22.u32 + 24);
	// lwz r11,0(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 0);
	// rlwinm r11,r11,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// sthx r25,r11,r10
	PPC_STORE_U16(ctx.r11.u32 + ctx.r10.u32, ctx.r25.u16);
	// lwz r11,24(r23)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r23.u32 + 24);
	// lwz r5,24(r24)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r24.u32 + 24);
	// lwz r10,0(r23)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r23.u32 + 0);
	// rlwinm r10,r10,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// sthx r25,r10,r11
	PPC_STORE_U16(ctx.r10.u32 + ctx.r11.u32, ctx.r25.u16);
	// lwz r3,96(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 96);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,48(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 48);
	// lwz r4,24(r23)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r23.u32 + 24);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x830EEEF8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// b 0x830eef4c
	goto loc_830EEF4C;
loc_830EEEFC:
	// cmpwi cr6,r20,0
	ctx.cr6.compare<int32_t>(ctx.r20.s32, 0, ctx.xer);
	// bne cr6,0x830eef4c
	if (!ctx.cr6.eq) goto loc_830EEF4C;
	// lwz r11,100(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 100);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x830eef4c
	if (ctx.cr6.eq) goto loc_830EEF4C;
	// lwz r11,0(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 0);
	// lwz r10,24(r24)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r24.u32 + 24);
	// rlwinm r11,r11,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// sthx r25,r11,r10
	PPC_STORE_U16(ctx.r11.u32 + ctx.r10.u32, ctx.r25.u16);
	// lwz r11,0(r23)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r23.u32 + 0);
	// lwz r10,24(r23)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r23.u32 + 24);
	// rlwinm r11,r11,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz r5,24(r24)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r24.u32 + 24);
	// sthx r25,r11,r10
	PPC_STORE_U16(ctx.r11.u32 + ctx.r10.u32, ctx.r25.u16);
	// lwz r3,100(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 100);
	// lwz r4,24(r23)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r23.u32 + 24);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,64(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 64);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x830EEF4C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_830EEF4C:
	// mr r4,r16
	ctx.r4.u64 = ctx.r16.u64;
	// lwz r3,132(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 132);
	// bl 0x830e4388
	ctx.lr = 0x830EEF58;
	sub_830E4388(ctx, base);
	// mr r4,r21
	ctx.r4.u64 = ctx.r21.u64;
	// lwz r3,116(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 116);
	// bl 0x830e4388
	ctx.lr = 0x830EEF64;
	sub_830E4388(ctx, base);
	// mr r4,r22
	ctx.r4.u64 = ctx.r22.u64;
	// lwz r3,108(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 108);
	// bl 0x830e4388
	ctx.lr = 0x830EEF70;
	sub_830E4388(ctx, base);
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// lwz r3,140(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 140);
	// bl 0x830e4388
	ctx.lr = 0x830EEF7C;
	sub_830E4388(ctx, base);
	// mr r4,r23
	ctx.r4.u64 = ctx.r23.u64;
	// b 0x830eefd0
	goto loc_830EEFD0;
loc_830EEF84:
	// li r4,209
	ctx.r4.s64 = 209;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x830edff8
	ctx.lr = 0x830EEF90;
	sub_830EDFF8(ctx, base);
	// li r4,62
	ctx.r4.s64 = 62;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x830ed2b8
	ctx.lr = 0x830EEF9C;
	sub_830ED2B8(ctx, base);
	// mr r4,r16
	ctx.r4.u64 = ctx.r16.u64;
	// lwz r3,132(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 132);
	// bl 0x830e4388
	ctx.lr = 0x830EEFA8;
	sub_830E4388(ctx, base);
	// lwz r4,112(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 112);
	// lwz r3,116(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 116);
	// bl 0x830e4388
	ctx.lr = 0x830EEFB4;
	sub_830E4388(ctx, base);
	// lwz r4,104(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 104);
	// lwz r3,108(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 108);
	// bl 0x830e4388
	ctx.lr = 0x830EEFC0;
	sub_830E4388(ctx, base);
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// lwz r3,140(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 140);
	// bl 0x830e4388
	ctx.lr = 0x830EEFCC;
	sub_830E4388(ctx, base);
	// lwz r4,120(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 120);
loc_830EEFD0:
	// lwz r3,124(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 124);
	// bl 0x830e4388
	ctx.lr = 0x830EEFD8;
	sub_830E4388(ctx, base);
	// addi r1,r31,336
	ctx.r1.s64 = ctx.r31.s64 + 336;
	// b 0x833a01c0
	__restgprlr_14(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_830EE8A8"))) PPC_WEAK_FUNC(sub_830EE8A8);
PPC_FUNC_IMPL(__imp__sub_830EE8A8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x833a0170
	ctx.lr = 0x830EE8B0;
	__savegprlr_14(ctx, base);
	// addi r31,r1,-336
	ctx.r31.s64 = ctx.r1.s64 + -336;
	// stwu r1,-336(r1)
	ea = -336 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r30,r3,224
	ctx.r30.s64 = ctx.r3.s64 + 224;
	// stw r4,364(r31)
	PPC_STORE_U32(ctx.r31.u32 + 364, ctx.r4.u32);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mr r20,r4
	ctx.r20.u64 = ctx.r4.u64;
	// bl 0x830e4258
	ctx.lr = 0x830EE8D0;
	sub_830E4258(ctx, base);
	// mr r23,r3
	ctx.r23.u64 = ctx.r3.u64;
	// stw r30,124(r31)
	PPC_STORE_U32(ctx.r31.u32 + 124, ctx.r30.u32);
	// stw r3,120(r31)
	PPC_STORE_U32(ctx.r31.u32 + 120, ctx.r3.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x830e4258
	ctx.lr = 0x830EE8E4;
	sub_830E4258(ctx, base);
	// mr r24,r3
	ctx.r24.u64 = ctx.r3.u64;
	// stw r30,140(r31)
	PPC_STORE_U32(ctx.r31.u32 + 140, ctx.r30.u32);
	// stw r3,136(r31)
	PPC_STORE_U32(ctx.r31.u32 + 136, ctx.r3.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x830e4258
	ctx.lr = 0x830EE8F8;
	sub_830E4258(ctx, base);
	// mr r22,r3
	ctx.r22.u64 = ctx.r3.u64;
	// stw r30,108(r31)
	PPC_STORE_U32(ctx.r31.u32 + 108, ctx.r30.u32);
	// stw r3,104(r31)
	PPC_STORE_U32(ctx.r31.u32 + 104, ctx.r3.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x830e4258
	ctx.lr = 0x830EE90C;
	sub_830E4258(ctx, base);
	// mr r21,r3
	ctx.r21.u64 = ctx.r3.u64;
	// stw r30,116(r31)
	PPC_STORE_U32(ctx.r31.u32 + 116, ctx.r30.u32);
	// stw r3,112(r31)
	PPC_STORE_U32(ctx.r31.u32 + 112, ctx.r3.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x830e4258
	ctx.lr = 0x830EE920;
	sub_830E4258(ctx, base);
	// mr r16,r3
	ctx.r16.u64 = ctx.r3.u64;
	// stw r30,132(r31)
	PPC_STORE_U32(ctx.r31.u32 + 132, ctx.r30.u32);
	// stw r3,128(r31)
	PPC_STORE_U32(ctx.r31.u32 + 128, ctx.r3.u32);
	// addi r26,r29,128
	ctx.r26.s64 = ctx.r29.s64 + 128;
	// li r27,-1
	ctx.r27.s64 = -1;
	// stw r23,160(r31)
	PPC_STORE_U32(ctx.r31.u32 + 160, ctx.r23.u32);
	// li r25,0
	ctx.r25.s64 = 0;
	// stw r24,164(r31)
	PPC_STORE_U32(ctx.r31.u32 + 164, ctx.r24.u32);
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// stw r27,156(r31)
	PPC_STORE_U32(ctx.r31.u32 + 156, ctx.r27.u32);
	// li r4,1
	ctx.r4.s64 = 1;
	// stw r27,144(r31)
	PPC_STORE_U32(ctx.r31.u32 + 144, ctx.r27.u32);
	// stw r22,168(r31)
	PPC_STORE_U32(ctx.r31.u32 + 168, ctx.r22.u32);
	// stw r21,172(r31)
	PPC_STORE_U32(ctx.r31.u32 + 172, ctx.r21.u32);
	// stw r27,148(r31)
	PPC_STORE_U32(ctx.r31.u32 + 148, ctx.r27.u32);
	// stw r27,152(r31)
	PPC_STORE_U32(ctx.r31.u32 + 152, ctx.r27.u32);
	// stw r25,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r25.u32);
	// bl 0x830f50e0
	ctx.lr = 0x830EE968;
	sub_830F50E0(ctx, base);
	// clrlwi r28,r3,24
	ctx.r28.u64 = ctx.r3.u32 & 0xFF;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x830f4f08
	ctx.lr = 0x830EE974;
	sub_830F4F08(ctx, base);
	// clrlwi r11,r3,16
	ctx.r11.u64 = ctx.r3.u32 & 0xFFFF;
	// cmplwi cr6,r11,63
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 63, ctx.xer);
	// beq cr6,0x830eed4c
	if (ctx.cr6.eq) goto loc_830EED4C;
	// lis r9,-32228
	ctx.r9.s64 = -2112094208;
	// lis r8,-32228
	ctx.r8.s64 = -2112094208;
	// addi r9,r9,-7080
	ctx.r9.s64 = ctx.r9.s64 + -7080;
	// lis r7,-32228
	ctx.r7.s64 = -2112094208;
	// lis r6,-32228
	ctx.r6.s64 = -2112094208;
	// stw r9,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r9.u32);
	// lis r30,2
	ctx.r30.s64 = 131072;
	// lis r11,-31848
	ctx.r11.s64 = -2087190528;
	// lis r27,2
	ctx.r27.s64 = 131072;
	// lis r23,2
	ctx.r23.s64 = 131072;
	// lis r10,-31847
	ctx.r10.s64 = -2087124992;
	// lis r5,-32228
	ctx.r5.s64 = -2112094208;
	// lis r4,-32228
	ctx.r4.s64 = -2112094208;
	// lis r3,-32228
	ctx.r3.s64 = -2112094208;
	// addi r8,r8,-5748
	ctx.r8.s64 = ctx.r8.s64 + -5748;
	// addi r7,r7,-6912
	ctx.r7.s64 = ctx.r7.s64 + -6912;
	// addi r9,r6,-6904
	ctx.r9.s64 = ctx.r6.s64 + -6904;
	// stw r8,92(r31)
	PPC_STORE_U32(ctx.r31.u32 + 92, ctx.r8.u32);
	// ori r21,r30,32860
	ctx.r21.u64 = ctx.r30.u64 | 32860;
	// stw r7,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r7.u32);
	// li r20,1
	ctx.r20.s64 = 1;
	// stw r9,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r9.u32);
	// ori r22,r27,32856
	ctx.r22.u64 = ctx.r27.u64 | 32856;
	// ori r23,r23,32852
	ctx.r23.u64 = ctx.r23.u64 | 32852;
	// lis r18,-31827
	ctx.r18.s64 = -2085814272;
	// addi r19,r11,23400
	ctx.r19.s64 = ctx.r11.s64 + 23400;
	// addi r17,r10,23400
	ctx.r17.s64 = ctx.r10.s64 + 23400;
	// addi r15,r5,-6936
	ctx.r15.s64 = ctx.r5.s64 + -6936;
	// addi r30,r4,-7764
	ctx.r30.s64 = ctx.r4.s64 + -7764;
	// addi r14,r3,-6384
	ctx.r14.s64 = ctx.r3.s64 + -6384;
loc_830EE9F8:
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// bne cr6,0x830eea18
	if (!ctx.cr6.eq) goto loc_830EEA18;
	// lwz r11,80(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x830eea18
	if (ctx.cr6.eq) goto loc_830EEA18;
	// li r4,207
	ctx.r4.s64 = 207;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x830edff8
	ctx.lr = 0x830EEA18;
	sub_830EDFF8(ctx, base);
loc_830EEA18:
	// li r5,61
	ctx.r5.s64 = 61;
	// mr r4,r16
	ctx.r4.u64 = ctx.r16.u64;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x830f4ea8
	ctx.lr = 0x830EEA28;
	sub_830F4EA8(ctx, base);
	// lwz r11,0(r16)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r16.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x830eea40
	if (!ctx.cr6.eq) goto loc_830EEA40;
	// li r4,187
	ctx.r4.s64 = 187;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x830edff8
	ctx.lr = 0x830EEA40;
	sub_830EDFF8(ctx, base);
loc_830EEA40:
	// lwz r11,0(r16)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r16.u32 + 0);
	// mr r4,r14
	ctx.r4.u64 = ctx.r14.u64;
	// lwz r10,24(r16)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r16.u32 + 24);
	// rlwinm r11,r11,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// sthx r25,r11,r10
	PPC_STORE_U16(ctx.r11.u32 + ctx.r10.u32, ctx.r25.u16);
	// lwz r3,24(r16)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r16.u32 + 24);
	// bl 0x830d8d28
	ctx.lr = 0x830EEA5C;
	sub_830D8D28(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x830eeaac
	if (ctx.cr0.eq) goto loc_830EEAAC;
	// mr r27,r25
	ctx.r27.u64 = ctx.r25.u64;
loc_830EEA68:
	// rlwinm r10,r27,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r11,r31,144
	ctx.r11.s64 = ctx.r31.s64 + 144;
	// lwzx r9,r10,r11
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// cmpwi cr6,r9,-1
	ctx.cr6.compare<int32_t>(ctx.r9.s32, -1, ctx.xer);
	// beq cr6,0x830eeb10
	if (ctx.cr6.eq) goto loc_830EEB10;
	// li r4,268
	ctx.r4.s64 = 268;
loc_830EEA80:
	// lwz r11,0(r16)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r16.u32 + 0);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r10,24(r16)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r16.u32 + 24);
	// li r6,0
	ctx.r6.s64 = 0;
	// rlwinm r11,r11,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// sthx r25,r11,r10
	PPC_STORE_U16(ctx.r11.u32 + ctx.r10.u32, ctx.r25.u16);
	// lwz r5,24(r16)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r16.u32 + 24);
	// bl 0x830ee100
	ctx.lr = 0x830EEAA8;
	sub_830EE100(ctx, base);
	// b 0x830eeb20
	goto loc_830EEB20;
loc_830EEAAC:
	// lwz r11,0(r16)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r16.u32 + 0);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r10,24(r16)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r16.u32 + 24);
	// rlwinm r11,r11,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// sthx r25,r11,r10
	PPC_STORE_U16(ctx.r11.u32 + ctx.r10.u32, ctx.r25.u16);
	// lwz r3,24(r16)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r16.u32 + 24);
	// bl 0x830d8d28
	ctx.lr = 0x830EEAC8;
	sub_830D8D28(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x830eead8
	if (ctx.cr0.eq) goto loc_830EEAD8;
	// mr r27,r20
	ctx.r27.u64 = ctx.r20.u64;
	// b 0x830eea68
	goto loc_830EEA68;
loc_830EEAD8:
	// lwz r11,0(r16)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r16.u32 + 0);
	// mr r4,r15
	ctx.r4.u64 = ctx.r15.u64;
	// lwz r10,24(r16)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r16.u32 + 24);
	// rlwinm r11,r11,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// sthx r25,r11,r10
	PPC_STORE_U16(ctx.r11.u32 + ctx.r10.u32, ctx.r25.u16);
	// lwz r3,24(r16)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r16.u32 + 24);
	// bl 0x830d8d28
	ctx.lr = 0x830EEAF4;
	sub_830D8D28(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x830eeb04
	if (ctx.cr0.eq) goto loc_830EEB04;
	// li r27,2
	ctx.r27.s64 = 2;
	// b 0x830eea68
	goto loc_830EEA68;
loc_830EEB04:
	// li r4,187
	ctx.r4.s64 = 187;
	// li r27,3
	ctx.r27.s64 = 3;
	// b 0x830eea80
	goto loc_830EEA80;
loc_830EEB10:
	// lwz r9,80(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// stw r9,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r9.u32);
	// stwx r9,r10,r11
	PPC_STORE_U32(ctx.r10.u32 + ctx.r11.u32, ctx.r9.u32);
loc_830EEB20:
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x830ed900
	ctx.lr = 0x830EEB2C;
	sub_830ED900(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x830eeb40
	if (!ctx.cr0.eq) goto loc_830EEB40;
	// li r4,180
	ctx.r4.s64 = 180;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x830edff8
	ctx.lr = 0x830EEB40;
	sub_830EDFF8(ctx, base);
loc_830EEB40:
	// rlwinm r11,r27,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r10,r31,160
	ctx.r10.s64 = ctx.r31.s64 + 160;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwzx r28,r11,r10
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// bl 0x830ed870
	ctx.lr = 0x830EEB58;
	sub_830ED870(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x830eef84
	if (ctx.cr0.eq) goto loc_830EEF84;
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// cmpwi cr6,r27,0
	ctx.cr6.compare<int32_t>(ctx.r27.s32, 0, ctx.xer);
	// lwz r10,24(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 24);
	// rlwinm r11,r11,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// stw r28,100(r31)
	PPC_STORE_U32(ctx.r31.u32 + 100, ctx.r28.u32);
	// sthx r25,r11,r10
	PPC_STORE_U16(ctx.r11.u32 + ctx.r10.u32, ctx.r25.u16);
	// lwz r28,24(r28)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r28.u32 + 24);
	// bne cr6,0x830eec10
	if (!ctx.cr6.eq) goto loc_830EEC10;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwz r4,84(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 84);
	// bl 0x830d8d28
	ctx.lr = 0x830EEB8C;
	sub_830D8D28(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x830eebd0
	if (ctx.cr0.eq) goto loc_830EEBD0;
	// lwz r11,364(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 364);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x830eebbc
	if (!ctx.cr6.eq) goto loc_830EEBBC;
	// stw r20,216(r29)
	PPC_STORE_U32(ctx.r29.u32 + 216, ctx.r20.u32);
	// lwz r11,8(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 8);
	// stw r20,32(r26)
	PPC_STORE_U32(ctx.r26.u32 + 32, ctx.r20.u32);
	// stwx r20,r11,r21
	PPC_STORE_U32(ctx.r11.u32 + ctx.r21.u32, ctx.r20.u32);
	// stbx r20,r11,r22
	PPC_STORE_U8(ctx.r11.u32 + ctx.r22.u32, ctx.r20.u8);
	// stwx r17,r11,r23
	PPC_STORE_U32(ctx.r11.u32 + ctx.r23.u32, ctx.r17.u32);
	// b 0x830eed14
	goto loc_830EED14;
loc_830EEBBC:
	// lwz r11,216(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 216);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x830eed14
	if (ctx.cr6.eq) goto loc_830EED14;
loc_830EEBC8:
	// li r4,189
	ctx.r4.s64 = 189;
	// b 0x830eec2c
	goto loc_830EEC2C;
loc_830EEBD0:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwz r4,88(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 88);
	// bl 0x830d8d28
	ctx.lr = 0x830EEBDC;
	sub_830D8D28(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x830eebc8
	if (ctx.cr0.eq) goto loc_830EEBC8;
	// lwz r11,364(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 364);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x830eed14
	if (!ctx.cr6.eq) goto loc_830EED14;
	// stw r25,216(r29)
	PPC_STORE_U32(ctx.r29.u32 + 216, ctx.r25.u32);
	// stw r25,32(r26)
	PPC_STORE_U32(ctx.r26.u32 + 32, ctx.r25.u32);
	// lwz r10,8(r26)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r26.u32 + 8);
	// stwx r25,r10,r21
	PPC_STORE_U32(ctx.r10.u32 + ctx.r21.u32, ctx.r25.u32);
	// lbz r11,-5008(r18)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r18.u32 + -5008);
	// stwx r19,r10,r23
	PPC_STORE_U32(ctx.r10.u32 + ctx.r23.u32, ctx.r19.u32);
	// stbx r11,r10,r22
	PPC_STORE_U8(ctx.r10.u32 + ctx.r22.u32, ctx.r11.u8);
	// b 0x830eed14
	goto loc_830EED14;
loc_830EEC10:
	// cmpwi cr6,r27,1
	ctx.cr6.compare<int32_t>(ctx.r27.s32, 1, ctx.xer);
	// bne cr6,0x830eec48
	if (!ctx.cr6.eq) goto loc_830EEC48;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x830d7bb8
	ctx.lr = 0x830EEC20;
	sub_830D7BB8(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x830eed14
	if (!ctx.cr0.eq) goto loc_830EED14;
	// li r4,191
	ctx.r4.s64 = 191;
loc_830EEC2C:
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x830ee100
	ctx.lr = 0x830EEC44;
	sub_830EE100(ctx, base);
	// b 0x830eed14
	goto loc_830EED14;
loc_830EEC48:
	// cmpwi cr6,r27,2
	ctx.cr6.compare<int32_t>(ctx.r27.s32, 2, ctx.xer);
	// bne cr6,0x830eed14
	if (!ctx.cr6.eq) goto loc_830EED14;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwz r4,92(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 92);
	// bl 0x830d8d28
	ctx.lr = 0x830EEC5C;
	sub_830D8D28(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x830eecd4
	if (!ctx.cr0.eq) goto loc_830EECD4;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwz r4,96(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 96);
	// bl 0x830d8d28
	ctx.lr = 0x830EEC70;
	sub_830D8D28(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x830eed10
	if (!ctx.cr0.eq) goto loc_830EED10;
	// li r4,192
	ctx.r4.s64 = 192;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x830edff8
	ctx.lr = 0x830EEC84;
	sub_830EDFF8(ctx, base);
	// lwz r11,104(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 104);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r10,3
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 3, ctx.xer);
	// stw r10,100(r31)
	PPC_STORE_U32(ctx.r31.u32 + 100, ctx.r10.u32);
	// bne cr6,0x830eecdc
	if (!ctx.cr6.eq) goto loc_830EECDC;
	// lhz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r28.u32 + 0);
	// cmplwi cr6,r11,121
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 121, ctx.xer);
	// beq cr6,0x830eecac
	if (ctx.cr6.eq) goto loc_830EECAC;
	// cmplwi cr6,r11,89
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 89, ctx.xer);
	// bne cr6,0x830eecdc
	if (!ctx.cr6.eq) goto loc_830EECDC;
loc_830EECAC:
	// lhz r11,2(r28)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r28.u32 + 2);
	// cmplwi cr6,r11,101
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 101, ctx.xer);
	// beq cr6,0x830eecc0
	if (ctx.cr6.eq) goto loc_830EECC0;
	// cmplwi cr6,r11,69
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 69, ctx.xer);
	// bne cr6,0x830eecdc
	if (!ctx.cr6.eq) goto loc_830EECDC;
loc_830EECC0:
	// lhz r11,4(r28)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r28.u32 + 4);
	// cmplwi cr6,r11,115
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 115, ctx.xer);
	// beq cr6,0x830eecd4
	if (ctx.cr6.eq) goto loc_830EECD4;
	// cmplwi cr6,r11,83
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 83, ctx.xer);
	// bne cr6,0x830eecdc
	if (!ctx.cr6.eq) goto loc_830EECDC;
loc_830EECD4:
	// stb r20,14(r29)
	PPC_STORE_U8(ctx.r29.u32 + 14, ctx.r20.u8);
	// b 0x830eed14
	goto loc_830EED14;
loc_830EECDC:
	// stw r10,100(r31)
	PPC_STORE_U32(ctx.r31.u32 + 100, ctx.r10.u32);
	// cmplwi cr6,r10,2
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 2, ctx.xer);
	// bne cr6,0x830eed14
	if (!ctx.cr6.eq) goto loc_830EED14;
	// lhz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r28.u32 + 0);
	// cmplwi cr6,r11,110
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 110, ctx.xer);
	// beq cr6,0x830eecfc
	if (ctx.cr6.eq) goto loc_830EECFC;
	// cmplwi cr6,r11,78
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 78, ctx.xer);
	// bne cr6,0x830eed14
	if (!ctx.cr6.eq) goto loc_830EED14;
loc_830EECFC:
	// lhz r11,2(r28)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r28.u32 + 2);
	// cmplwi cr6,r11,111
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 111, ctx.xer);
	// beq cr6,0x830eed10
	if (ctx.cr6.eq) goto loc_830EED10;
	// cmplwi cr6,r11,79
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 79, ctx.xer);
	// bne cr6,0x830eed14
	if (!ctx.cr6.eq) goto loc_830EED14;
loc_830EED10:
	// stb r25,14(r29)
	PPC_STORE_U8(ctx.r29.u32 + 14, ctx.r25.u8);
loc_830EED14:
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x830f50e0
	ctx.lr = 0x830EED20;
	sub_830F50E0(ctx, base);
	// clrlwi r28,r3,24
	ctx.r28.u64 = ctx.r3.u32 & 0xFF;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x830f4f08
	ctx.lr = 0x830EED2C;
	sub_830F4F08(ctx, base);
	// clrlwi r11,r3,16
	ctx.r11.u64 = ctx.r3.u32 & 0xFFFF;
	// cmplwi cr6,r11,63
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 63, ctx.xer);
	// bne cr6,0x830ee9f8
	if (!ctx.cr6.eq) goto loc_830EE9F8;
	// lwz r27,148(r31)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r31.u32 + 148);
	// lwz r21,112(r31)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r31.u32 + 112);
	// lwz r22,104(r31)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r31.u32 + 104);
	// lwz r23,120(r31)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r31.u32 + 120);
	// lwz r20,364(r31)
	ctx.r20.u64 = PPC_LOAD_U32(ctx.r31.u32 + 364);
loc_830EED4C:
	// mr r8,r25
	ctx.r8.u64 = ctx.r25.u64;
	// mr r9,r25
	ctx.r9.u64 = ctx.r25.u64;
	// addi r10,r31,144
	ctx.r10.s64 = ctx.r31.s64 + 144;
loc_830EED58:
	// lwz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// beq cr6,0x830eed74
	if (ctx.cr6.eq) goto loc_830EED74;
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// cmpw cr6,r11,r8
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r8.s32, ctx.xer);
	// bne cr6,0x830eed88
	if (!ctx.cr6.eq) goto loc_830EED88;
	// mr r8,r11
	ctx.r8.u64 = ctx.r11.u64;
loc_830EED74:
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// cmpwi cr6,r9,2
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 2, ctx.xer);
	// blt cr6,0x830eed58
	if (ctx.cr6.lt) goto loc_830EED58;
	// b 0x830eed94
	goto loc_830EED94;
loc_830EED88:
	// li r4,269
	ctx.r4.s64 = 269;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x830edff8
	ctx.lr = 0x830EED94;
	sub_830EDFF8(ctx, base);
loc_830EED94:
	// cmpwi cr6,r20,1
	ctx.cr6.compare<int32_t>(ctx.r20.s32, 1, ctx.xer);
	// bne cr6,0x830eedb0
	if (!ctx.cr6.eq) goto loc_830EEDB0;
	// lwz r11,144(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 144);
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// bne cr6,0x830eede4
	if (!ctx.cr6.eq) goto loc_830EEDE4;
	// li r4,285
	ctx.r4.s64 = 285;
	// b 0x830eeddc
	goto loc_830EEDDC;
loc_830EEDB0:
	// cmpwi cr6,r20,0
	ctx.cr6.compare<int32_t>(ctx.r20.s32, 0, ctx.xer);
	// bne cr6,0x830eede4
	if (!ctx.cr6.eq) goto loc_830EEDE4;
	// lwz r11,152(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 152);
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// beq cr6,0x830eedd0
	if (ctx.cr6.eq) goto loc_830EEDD0;
	// li r4,286
	ctx.r4.s64 = 286;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x830edff8
	ctx.lr = 0x830EEDD0;
	sub_830EDFF8(ctx, base);
loc_830EEDD0:
	// cmpwi cr6,r27,-1
	ctx.cr6.compare<int32_t>(ctx.r27.s32, -1, ctx.xer);
	// bne cr6,0x830eede4
	if (!ctx.cr6.eq) goto loc_830EEDE4;
	// li r4,287
	ctx.r4.s64 = 287;
loc_830EEDDC:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x830edff8
	ctx.lr = 0x830EEDE4;
	sub_830EDFF8(ctx, base);
loc_830EEDE4:
	// li r4,63
	ctx.r4.s64 = 63;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x830f4f70
	ctx.lr = 0x830EEDF0;
	sub_830F4F70(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x830eee0c
	if (ctx.cr0.eq) goto loc_830EEE0C;
	// li r4,62
	ctx.r4.s64 = 62;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x830f4f70
	ctx.lr = 0x830EEE04;
	sub_830F4F70(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x830eee24
	if (!ctx.cr0.eq) goto loc_830EEE24;
loc_830EEE0C:
	// li r4,190
	ctx.r4.s64 = 190;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x830edff8
	ctx.lr = 0x830EEE18;
	sub_830EDFF8(ctx, base);
	// li r4,62
	ctx.r4.s64 = 62;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x830ed2b8
	ctx.lr = 0x830EEE24;
	sub_830ED2B8(ctx, base);
loc_830EEE24:
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x830f5288
	ctx.lr = 0x830EEE2C;
	sub_830F5288(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// cmpwi cr6,r27,-1
	ctx.cr6.compare<int32_t>(ctx.r27.s32, -1, ctx.xer);
	// beq cr6,0x830eee90
	if (ctx.cr6.eq) goto loc_830EEE90;
	// lwz r11,0(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 0);
	// lwz r10,24(r24)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r24.u32 + 24);
	// rlwinm r11,r11,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// sthx r25,r11,r10
	PPC_STORE_U16(ctx.r11.u32 + ctx.r10.u32, ctx.r25.u16);
	// lwz r3,136(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 136);
	// lwz r4,24(r24)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r24.u32 + 24);
	// bl 0x830f92f0
	ctx.lr = 0x830EEE54;
	sub_830F92F0(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// lwz r11,0(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 0);
	// lwz r10,24(r24)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r24.u32 + 24);
	// rlwinm r11,r11,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// sthx r25,r11,r10
	PPC_STORE_U16(ctx.r11.u32 + ctx.r10.u32, ctx.r25.u16);
	// bne 0x830eee8c
	if (!ctx.cr0.eq) goto loc_830EEE8C;
	// li r8,0
	ctx.r8.s64 = 0;
	// lwz r5,24(r24)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r24.u32 + 24);
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r4,4
	ctx.r4.s64 = 4;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x830ee100
	ctx.lr = 0x830EEE88;
	sub_830EE100(ctx, base);
	// b 0x830eee90
	goto loc_830EEE90;
loc_830EEE8C:
	// lwz r28,24(r24)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r24.u32 + 24);
loc_830EEE90:
	// cmpwi cr6,r20,1
	ctx.cr6.compare<int32_t>(ctx.r20.s32, 1, ctx.xer);
	// bne cr6,0x830eeefc
	if (!ctx.cr6.eq) goto loc_830EEEFC;
	// lwz r11,96(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 96);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x830eef4c
	if (ctx.cr6.eq) goto loc_830EEF4C;
	// lwz r11,0(r22)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r22.u32 + 0);
	// mr r7,r28
	ctx.r7.u64 = ctx.r28.u64;
	// lwz r10,24(r22)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r22.u32 + 24);
	// rlwinm r11,r11,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// sthx r25,r11,r10
	PPC_STORE_U16(ctx.r11.u32 + ctx.r10.u32, ctx.r25.u16);
	// lwz r10,24(r24)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r24.u32 + 24);
	// lwz r6,24(r22)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r22.u32 + 24);
	// lwz r11,0(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 0);
	// rlwinm r11,r11,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// sthx r25,r11,r10
	PPC_STORE_U16(ctx.r11.u32 + ctx.r10.u32, ctx.r25.u16);
	// lwz r11,24(r23)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r23.u32 + 24);
	// lwz r5,24(r24)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r24.u32 + 24);
	// lwz r10,0(r23)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r23.u32 + 0);
	// rlwinm r10,r10,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// sthx r25,r10,r11
	PPC_STORE_U16(ctx.r10.u32 + ctx.r11.u32, ctx.r25.u16);
	// lwz r3,96(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 96);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,48(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 48);
	// lwz r4,24(r23)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r23.u32 + 24);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x830EEEF8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// b 0x830eef4c
	goto loc_830EEF4C;
loc_830EEEFC:
	// cmpwi cr6,r20,0
	ctx.cr6.compare<int32_t>(ctx.r20.s32, 0, ctx.xer);
	// bne cr6,0x830eef4c
	if (!ctx.cr6.eq) goto loc_830EEF4C;
	// lwz r11,100(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 100);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x830eef4c
	if (ctx.cr6.eq) goto loc_830EEF4C;
	// lwz r11,0(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 0);
	// lwz r10,24(r24)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r24.u32 + 24);
	// rlwinm r11,r11,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// sthx r25,r11,r10
	PPC_STORE_U16(ctx.r11.u32 + ctx.r10.u32, ctx.r25.u16);
	// lwz r11,0(r23)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r23.u32 + 0);
	// lwz r10,24(r23)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r23.u32 + 24);
	// rlwinm r11,r11,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz r5,24(r24)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r24.u32 + 24);
	// sthx r25,r11,r10
	PPC_STORE_U16(ctx.r11.u32 + ctx.r10.u32, ctx.r25.u16);
	// lwz r3,100(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 100);
	// lwz r4,24(r23)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r23.u32 + 24);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,64(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 64);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x830EEF4C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_830EEF4C:
	// mr r4,r16
	ctx.r4.u64 = ctx.r16.u64;
	// lwz r3,132(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 132);
	// bl 0x830e4388
	ctx.lr = 0x830EEF58;
	sub_830E4388(ctx, base);
	// mr r4,r21
	ctx.r4.u64 = ctx.r21.u64;
	// lwz r3,116(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 116);
	// bl 0x830e4388
	ctx.lr = 0x830EEF64;
	sub_830E4388(ctx, base);
	// mr r4,r22
	ctx.r4.u64 = ctx.r22.u64;
	// lwz r3,108(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 108);
	// bl 0x830e4388
	ctx.lr = 0x830EEF70;
	sub_830E4388(ctx, base);
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// lwz r3,140(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 140);
	// bl 0x830e4388
	ctx.lr = 0x830EEF7C;
	sub_830E4388(ctx, base);
	// mr r4,r23
	ctx.r4.u64 = ctx.r23.u64;
	// b 0x830eefd0
	goto loc_830EEFD0;
loc_830EEF84:
	// li r4,209
	ctx.r4.s64 = 209;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x830edff8
	ctx.lr = 0x830EEF90;
	sub_830EDFF8(ctx, base);
	// li r4,62
	ctx.r4.s64 = 62;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x830ed2b8
	ctx.lr = 0x830EEF9C;
	sub_830ED2B8(ctx, base);
	// mr r4,r16
	ctx.r4.u64 = ctx.r16.u64;
	// lwz r3,132(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 132);
	// bl 0x830e4388
	ctx.lr = 0x830EEFA8;
	sub_830E4388(ctx, base);
	// lwz r4,112(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 112);
	// lwz r3,116(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 116);
	// bl 0x830e4388
	ctx.lr = 0x830EEFB4;
	sub_830E4388(ctx, base);
	// lwz r4,104(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 104);
	// lwz r3,108(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 108);
	// bl 0x830e4388
	ctx.lr = 0x830EEFC0;
	sub_830E4388(ctx, base);
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// lwz r3,140(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 140);
	// bl 0x830e4388
	ctx.lr = 0x830EEFCC;
	sub_830E4388(ctx, base);
	// lwz r4,120(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 120);
loc_830EEFD0:
	// lwz r3,124(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 124);
	// bl 0x830e4388
	ctx.lr = 0x830EEFD8;
	sub_830E4388(ctx, base);
	// addi r1,r31,336
	ctx.r1.s64 = ctx.r31.s64 + 336;
	// b 0x833a01c0
	__restgprlr_14(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_830EEFE0"))) PPC_WEAK_FUNC(sub_830EEFE0);
PPC_FUNC_IMPL(__imp__sub_830EEFE0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// addi r31,r12,-336
	ctx.r31.s64 = ctx.r12.s64 + -336;
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r3,r31,120
	ctx.r3.s64 = ctx.r31.s64 + 120;
	// bl 0x830d9068
	ctx.lr = 0x830EEFF8;
	sub_830D9068(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830EF008"))) PPC_WEAK_FUNC(sub_830EF008);
PPC_FUNC_IMPL(__imp__sub_830EF008) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// addi r31,r12,-336
	ctx.r31.s64 = ctx.r12.s64 + -336;
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r3,r31,136
	ctx.r3.s64 = ctx.r31.s64 + 136;
	// bl 0x830d9068
	ctx.lr = 0x830EF020;
	sub_830D9068(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830EF030"))) PPC_WEAK_FUNC(sub_830EF030);
PPC_FUNC_IMPL(__imp__sub_830EF030) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// addi r31,r12,-336
	ctx.r31.s64 = ctx.r12.s64 + -336;
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r3,r31,104
	ctx.r3.s64 = ctx.r31.s64 + 104;
	// bl 0x830d9068
	ctx.lr = 0x830EF048;
	sub_830D9068(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830EF058"))) PPC_WEAK_FUNC(sub_830EF058);
PPC_FUNC_IMPL(__imp__sub_830EF058) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// addi r31,r12,-336
	ctx.r31.s64 = ctx.r12.s64 + -336;
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r3,r31,112
	ctx.r3.s64 = ctx.r31.s64 + 112;
	// bl 0x830d9068
	ctx.lr = 0x830EF070;
	sub_830D9068(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830EF080"))) PPC_WEAK_FUNC(sub_830EF080);
PPC_FUNC_IMPL(__imp__sub_830EF080) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// addi r31,r12,-336
	ctx.r31.s64 = ctx.r12.s64 + -336;
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r3,r31,128
	ctx.r3.s64 = ctx.r31.s64 + 128;
	// bl 0x830d9068
	ctx.lr = 0x830EF098;
	sub_830D9068(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830EF0A8"))) PPC_WEAK_FUNC(sub_830EF0A8);
PPC_FUNC_IMPL(__imp__sub_830EF0A8) {
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
	// lwz r3,136(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 136);
	// clrlwi. r11,r4,24
	ctx.r11.u64 = ctx.r4.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x830ef1c4
	if (ctx.cr0.eq) goto loc_830EF1C4;
	// lis r11,-32228
	ctx.r11.s64 = -2112094208;
	// addi r4,r11,-6120
	ctx.r4.s64 = ctx.r11.s64 + -6120;
	// bl 0x830fa850
	ctx.lr = 0x830EF0D4;
	sub_830FA850(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// lwz r3,136(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 136);
	// beq 0x830ef144
	if (ctx.cr0.eq) goto loc_830EF144;
	// lis r11,-32228
	ctx.r11.s64 = -2112094208;
	// addi r4,r11,-6108
	ctx.r4.s64 = ctx.r11.s64 + -6108;
	// bl 0x830fa6b0
	ctx.lr = 0x830EF0EC;
	sub_830FA6B0(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x830ef1ac
	if (!ctx.cr0.eq) goto loc_830EF1AC;
	// lis r11,-32228
	ctx.r11.s64 = -2112094208;
	// lwz r3,136(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 136);
	// addi r4,r11,-6092
	ctx.r4.s64 = ctx.r11.s64 + -6092;
	// bl 0x830fa6b0
	ctx.lr = 0x830EF104;
	sub_830FA6B0(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x830ef1ac
	if (!ctx.cr0.eq) goto loc_830EF1AC;
	// lis r11,-32228
	ctx.r11.s64 = -2112094208;
	// lwz r3,136(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 136);
	// addi r4,r11,-6076
	ctx.r4.s64 = ctx.r11.s64 + -6076;
	// bl 0x830fa6b0
	ctx.lr = 0x830EF11C;
	sub_830FA6B0(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x830ef1ac
	if (!ctx.cr0.eq) goto loc_830EF1AC;
	// lis r11,-32228
	ctx.r11.s64 = -2112094208;
	// addi r4,r11,-6060
	ctx.r4.s64 = ctx.r11.s64 + -6060;
loc_830EF12C:
	// lwz r3,136(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 136);
	// bl 0x830fa6b0
	ctx.lr = 0x830EF134;
	sub_830FA6B0(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x830ef1ac
	if (!ctx.cr0.eq) goto loc_830EF1AC;
loc_830EF13C:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x830ef1b0
	goto loc_830EF1B0;
loc_830EF144:
	// lis r11,-32228
	ctx.r11.s64 = -2112094208;
	// addi r4,r11,-6044
	ctx.r4.s64 = ctx.r11.s64 + -6044;
	// bl 0x830fa6b0
	ctx.lr = 0x830EF150;
	sub_830FA6B0(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x830ef1a0
	if (!ctx.cr0.eq) goto loc_830EF1A0;
	// lis r11,-32228
	ctx.r11.s64 = -2112094208;
	// lwz r3,136(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 136);
	// addi r4,r11,-6028
	ctx.r4.s64 = ctx.r11.s64 + -6028;
	// bl 0x830fa6b0
	ctx.lr = 0x830EF168;
	sub_830FA6B0(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x830ef1a0
	if (!ctx.cr0.eq) goto loc_830EF1A0;
	// lis r11,-32228
	ctx.r11.s64 = -2112094208;
	// lwz r3,136(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 136);
	// addi r4,r11,-6012
	ctx.r4.s64 = ctx.r11.s64 + -6012;
	// bl 0x830fa6b0
	ctx.lr = 0x830EF180;
	sub_830FA6B0(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x830ef1a0
	if (!ctx.cr0.eq) goto loc_830EF1A0;
	// lis r11,-32228
	ctx.r11.s64 = -2112094208;
	// addi r4,r11,-5996
	ctx.r4.s64 = ctx.r11.s64 + -5996;
loc_830EF190:
	// lwz r3,136(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 136);
	// bl 0x830fa6b0
	ctx.lr = 0x830EF198;
	sub_830FA6B0(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x830ef13c
	if (ctx.cr0.eq) goto loc_830EF13C;
loc_830EF1A0:
	// li r4,271
	ctx.r4.s64 = 271;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x830edff8
	ctx.lr = 0x830EF1AC;
	sub_830EDFF8(ctx, base);
loc_830EF1AC:
	// li r3,1
	ctx.r3.s64 = 1;
loc_830EF1B0:
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
loc_830EF1C4:
	// lis r11,-32228
	ctx.r11.s64 = -2112094208;
	// addi r4,r11,-6224
	ctx.r4.s64 = ctx.r11.s64 + -6224;
	// bl 0x830fa850
	ctx.lr = 0x830EF1D0;
	sub_830FA850(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// lwz r3,136(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 136);
	// beq 0x830ef22c
	if (ctx.cr0.eq) goto loc_830EF22C;
	// lis r11,-32228
	ctx.r11.s64 = -2112094208;
	// addi r4,r11,-6216
	ctx.r4.s64 = ctx.r11.s64 + -6216;
	// bl 0x830fa6b0
	ctx.lr = 0x830EF1E8;
	sub_830FA6B0(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x830ef1ac
	if (!ctx.cr0.eq) goto loc_830EF1AC;
	// lis r11,-32228
	ctx.r11.s64 = -2112094208;
	// lwz r3,136(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 136);
	// addi r4,r11,-6204
	ctx.r4.s64 = ctx.r11.s64 + -6204;
	// bl 0x830fa6b0
	ctx.lr = 0x830EF200;
	sub_830FA6B0(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x830ef1ac
	if (!ctx.cr0.eq) goto loc_830EF1AC;
	// lis r11,-32228
	ctx.r11.s64 = -2112094208;
	// lwz r3,136(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 136);
	// addi r4,r11,-6180
	ctx.r4.s64 = ctx.r11.s64 + -6180;
	// bl 0x830fa6b0
	ctx.lr = 0x830EF218;
	sub_830FA6B0(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x830ef1ac
	if (!ctx.cr0.eq) goto loc_830EF1AC;
	// lis r11,-32228
	ctx.r11.s64 = -2112094208;
	// addi r4,r11,-6192
	ctx.r4.s64 = ctx.r11.s64 + -6192;
	// b 0x830ef12c
	goto loc_830EF12C;
loc_830EF22C:
	// lis r11,-32228
	ctx.r11.s64 = -2112094208;
	// addi r4,r11,-6168
	ctx.r4.s64 = ctx.r11.s64 + -6168;
	// bl 0x830fa6b0
	ctx.lr = 0x830EF238;
	sub_830FA6B0(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x830ef1a0
	if (!ctx.cr0.eq) goto loc_830EF1A0;
	// lis r11,-32228
	ctx.r11.s64 = -2112094208;
	// lwz r3,136(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 136);
	// addi r4,r11,-6156
	ctx.r4.s64 = ctx.r11.s64 + -6156;
	// bl 0x830fa6b0
	ctx.lr = 0x830EF250;
	sub_830FA6B0(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x830ef1a0
	if (!ctx.cr0.eq) goto loc_830EF1A0;
	// lis r11,-32228
	ctx.r11.s64 = -2112094208;
	// lwz r3,136(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 136);
	// addi r4,r11,-6132
	ctx.r4.s64 = ctx.r11.s64 + -6132;
	// bl 0x830fa6b0
	ctx.lr = 0x830EF268;
	sub_830FA6B0(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x830ef1a0
	if (!ctx.cr0.eq) goto loc_830EF1A0;
	// lis r11,-32228
	ctx.r11.s64 = -2112094208;
	// addi r4,r11,-6144
	ctx.r4.s64 = ctx.r11.s64 + -6144;
	// b 0x830ef190
	goto loc_830EF190;
}

__attribute__((alias("__imp__sub_830EF27C"))) PPC_WEAK_FUNC(sub_830EF27C);
PPC_FUNC_IMPL(__imp__sub_830EF27C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_830EF280"))) PPC_WEAK_FUNC(sub_830EF280);
PPC_FUNC_IMPL(__imp__sub_830EF280) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lwz r25,17952(r26)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r26.u32 + 17952);
	// lwz r16,10952(r28)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r28.u32 + 10952);
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x833a01a4
	ctx.lr = 0x830EF290;
	__savegprlr_27(ctx, base);
	// addi r31,r1,-144
	ctx.r31.s64 = ctx.r1.s64 + -144;
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,136(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 136);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// stw r11,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r11.u32);
	// beq 0x830ef2dc
	if (ctx.cr0.eq) goto loc_830EF2DC;
	// lis r10,0
	ctx.r10.s64 = 0;
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stw r11,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r11.u32);
	// ori r10,r10,32772
	ctx.r10.u64 = ctx.r10.u64 | 32772;
	// lwzx r11,r11,r10
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// subf. r11,r9,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r9.s64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x830ef2dc
	if (ctx.cr0.eq) goto loc_830EF2DC;
	// addi r30,r3,128
	ctx.r30.s64 = ctx.r3.s64 + 128;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x830f4f08
	ctx.lr = 0x830EF2D8;
	sub_830F4F08(ctx, base);
	// b 0x830ef300
	goto loc_830EF300;
loc_830EF2DC:
	// addi r30,r29,128
	ctx.r30.s64 = ctx.r29.s64 + 128;
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r30,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r30.u32);
	// lbz r28,28(r30)
	ctx.r28.u64 = PPC_LOAD_U8(ctx.r30.u32 + 28);
	// stb r11,28(r30)
	PPC_STORE_U8(ctx.r30.u32 + 28, ctx.r11.u8);
	// stb r28,80(r31)
	PPC_STORE_U8(ctx.r31.u32 + 80, ctx.r28.u8);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x830f4f08
	ctx.lr = 0x830EF2FC;
	sub_830F4F08(ctx, base);
	// stb r28,28(r30)
	PPC_STORE_U8(ctx.r30.u32 + 28, ctx.r28.u8);
loc_830EF300:
	// clrlwi. r11,r3,16
	ctx.r11.u64 = ctx.r3.u32 & 0xFFFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x830ef310
	if (!ctx.cr0.eq) goto loc_830EF310;
	// li r3,4
	ctx.r3.s64 = 4;
	// b 0x830ef3d4
	goto loc_830EF3D4;
loc_830EF310:
	// cmplwi cr6,r11,60
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 60, ctx.xer);
	// beq cr6,0x830ef320
	if (ctx.cr6.eq) goto loc_830EF320;
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x830ef3d4
	goto loc_830EF3D4;
loc_830EF320:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x830f4dd0
	ctx.lr = 0x830EF328;
	sub_830F4DD0(ctx, base);
	// lis r11,2
	ctx.r11.s64 = 131072;
	// lwz r10,136(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 136);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// ori r11,r11,32808
	ctx.r11.u64 = ctx.r11.u64 | 32808;
	// lwzx r11,r10,r11
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// stw r11,0(r27)
	PPC_STORE_U32(ctx.r27.u32 + 0, ctx.r11.u32);
	// bl 0x830f4f08
	ctx.lr = 0x830EF344;
	sub_830F4F08(ctx, base);
	// clrlwi r11,r3,16
	ctx.r11.u64 = ctx.r3.u32 & 0xFFFF;
	// cmplwi cr6,r11,47
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 47, ctx.xer);
	// bne cr6,0x830ef364
	if (!ctx.cr6.eq) goto loc_830EF364;
	// li r29,3
	ctx.r29.s64 = 3;
loc_830EF354:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x830f4dd0
	ctx.lr = 0x830EF35C;
	sub_830F4DD0(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// b 0x830ef3d4
	goto loc_830EF3D4;
loc_830EF364:
	// cmplwi cr6,r11,33
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 33, ctx.xer);
	// bne cr6,0x830ef3c0
	if (!ctx.cr6.eq) goto loc_830EF3C0;
	// lis r11,-32228
	ctx.r11.s64 = -2112094208;
	// lwz r3,136(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 136);
	// addi r4,r11,10928
	ctx.r4.s64 = ctx.r11.s64 + 10928;
	// bl 0x830fa6b0
	ctx.lr = 0x830EF37C;
	sub_830FA6B0(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x830ef38c
	if (ctx.cr0.eq) goto loc_830EF38C;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x830ef3d4
	goto loc_830EF3D4;
loc_830EF38C:
	// lis r11,-32228
	ctx.r11.s64 = -2112094208;
	// lwz r3,136(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 136);
	// addi r4,r11,10920
	ctx.r4.s64 = ctx.r11.s64 + 10920;
	// bl 0x830fa6b0
	ctx.lr = 0x830EF39C;
	sub_830FA6B0(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x830ef3ac
	if (ctx.cr0.eq) goto loc_830EF3AC;
	// li r3,2
	ctx.r3.s64 = 2;
	// b 0x830ef3d4
	goto loc_830EF3D4;
loc_830EF3AC:
	// li r4,173
	ctx.r4.s64 = 173;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x830edff8
	ctx.lr = 0x830EF3B8;
	sub_830EDFF8(ctx, base);
	// li r3,7
	ctx.r3.s64 = 7;
	// b 0x830ef3d4
	goto loc_830EF3D4;
loc_830EF3C0:
	// cmplwi cr6,r11,63
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 63, ctx.xer);
	// bne cr6,0x830ef3d0
	if (!ctx.cr6.eq) goto loc_830EF3D0;
	// li r29,5
	ctx.r29.s64 = 5;
	// b 0x830ef354
	goto loc_830EF354;
loc_830EF3D0:
	// li r3,6
	ctx.r3.s64 = 6;
loc_830EF3D4:
	// addi r1,r31,144
	ctx.r1.s64 = ctx.r31.s64 + 144;
	// b 0x833a01f4
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_830EF288"))) PPC_WEAK_FUNC(sub_830EF288);
PPC_FUNC_IMPL(__imp__sub_830EF288) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x833a01a4
	ctx.lr = 0x830EF290;
	__savegprlr_27(ctx, base);
	// addi r31,r1,-144
	ctx.r31.s64 = ctx.r1.s64 + -144;
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,136(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 136);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// stw r11,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r11.u32);
	// beq 0x830ef2dc
	if (ctx.cr0.eq) goto loc_830EF2DC;
	// lis r10,0
	ctx.r10.s64 = 0;
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stw r11,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r11.u32);
	// ori r10,r10,32772
	ctx.r10.u64 = ctx.r10.u64 | 32772;
	// lwzx r11,r11,r10
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// subf. r11,r9,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r9.s64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x830ef2dc
	if (ctx.cr0.eq) goto loc_830EF2DC;
	// addi r30,r3,128
	ctx.r30.s64 = ctx.r3.s64 + 128;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x830f4f08
	ctx.lr = 0x830EF2D8;
	sub_830F4F08(ctx, base);
	// b 0x830ef300
	goto loc_830EF300;
loc_830EF2DC:
	// addi r30,r29,128
	ctx.r30.s64 = ctx.r29.s64 + 128;
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r30,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r30.u32);
	// lbz r28,28(r30)
	ctx.r28.u64 = PPC_LOAD_U8(ctx.r30.u32 + 28);
	// stb r11,28(r30)
	PPC_STORE_U8(ctx.r30.u32 + 28, ctx.r11.u8);
	// stb r28,80(r31)
	PPC_STORE_U8(ctx.r31.u32 + 80, ctx.r28.u8);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x830f4f08
	ctx.lr = 0x830EF2FC;
	sub_830F4F08(ctx, base);
	// stb r28,28(r30)
	PPC_STORE_U8(ctx.r30.u32 + 28, ctx.r28.u8);
loc_830EF300:
	// clrlwi. r11,r3,16
	ctx.r11.u64 = ctx.r3.u32 & 0xFFFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x830ef310
	if (!ctx.cr0.eq) goto loc_830EF310;
	// li r3,4
	ctx.r3.s64 = 4;
	// b 0x830ef3d4
	goto loc_830EF3D4;
loc_830EF310:
	// cmplwi cr6,r11,60
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 60, ctx.xer);
	// beq cr6,0x830ef320
	if (ctx.cr6.eq) goto loc_830EF320;
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x830ef3d4
	goto loc_830EF3D4;
loc_830EF320:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x830f4dd0
	ctx.lr = 0x830EF328;
	sub_830F4DD0(ctx, base);
	// lis r11,2
	ctx.r11.s64 = 131072;
	// lwz r10,136(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 136);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// ori r11,r11,32808
	ctx.r11.u64 = ctx.r11.u64 | 32808;
	// lwzx r11,r10,r11
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// stw r11,0(r27)
	PPC_STORE_U32(ctx.r27.u32 + 0, ctx.r11.u32);
	// bl 0x830f4f08
	ctx.lr = 0x830EF344;
	sub_830F4F08(ctx, base);
	// clrlwi r11,r3,16
	ctx.r11.u64 = ctx.r3.u32 & 0xFFFF;
	// cmplwi cr6,r11,47
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 47, ctx.xer);
	// bne cr6,0x830ef364
	if (!ctx.cr6.eq) goto loc_830EF364;
	// li r29,3
	ctx.r29.s64 = 3;
loc_830EF354:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x830f4dd0
	ctx.lr = 0x830EF35C;
	sub_830F4DD0(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// b 0x830ef3d4
	goto loc_830EF3D4;
loc_830EF364:
	// cmplwi cr6,r11,33
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 33, ctx.xer);
	// bne cr6,0x830ef3c0
	if (!ctx.cr6.eq) goto loc_830EF3C0;
	// lis r11,-32228
	ctx.r11.s64 = -2112094208;
	// lwz r3,136(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 136);
	// addi r4,r11,10928
	ctx.r4.s64 = ctx.r11.s64 + 10928;
	// bl 0x830fa6b0
	ctx.lr = 0x830EF37C;
	sub_830FA6B0(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x830ef38c
	if (ctx.cr0.eq) goto loc_830EF38C;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x830ef3d4
	goto loc_830EF3D4;
loc_830EF38C:
	// lis r11,-32228
	ctx.r11.s64 = -2112094208;
	// lwz r3,136(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 136);
	// addi r4,r11,10920
	ctx.r4.s64 = ctx.r11.s64 + 10920;
	// bl 0x830fa6b0
	ctx.lr = 0x830EF39C;
	sub_830FA6B0(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x830ef3ac
	if (ctx.cr0.eq) goto loc_830EF3AC;
	// li r3,2
	ctx.r3.s64 = 2;
	// b 0x830ef3d4
	goto loc_830EF3D4;
loc_830EF3AC:
	// li r4,173
	ctx.r4.s64 = 173;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x830edff8
	ctx.lr = 0x830EF3B8;
	sub_830EDFF8(ctx, base);
	// li r3,7
	ctx.r3.s64 = 7;
	// b 0x830ef3d4
	goto loc_830EF3D4;
loc_830EF3C0:
	// cmplwi cr6,r11,63
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 63, ctx.xer);
	// bne cr6,0x830ef3d0
	if (!ctx.cr6.eq) goto loc_830EF3D0;
	// li r29,5
	ctx.r29.s64 = 5;
	// b 0x830ef354
	goto loc_830EF354;
loc_830EF3D0:
	// li r3,6
	ctx.r3.s64 = 6;
loc_830EF3D4:
	// addi r1,r31,144
	ctx.r1.s64 = ctx.r31.s64 + 144;
	// b 0x833a01f4
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_830EF3DC"))) PPC_WEAK_FUNC(sub_830EF3DC);
PPC_FUNC_IMPL(__imp__sub_830EF3DC) {
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
	// addi r3,r31,80
	ctx.r3.s64 = ctx.r31.s64 + 80;
	// bl 0x830ed308
	ctx.lr = 0x830EF3F4;
	sub_830ED308(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830EF404"))) PPC_WEAK_FUNC(sub_830EF404);
PPC_FUNC_IMPL(__imp__sub_830EF404) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_830EF408"))) PPC_WEAK_FUNC(sub_830EF408);
PPC_FUNC_IMPL(__imp__sub_830EF408) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x833a0194
	ctx.lr = 0x830EF410;
	__savegprlr_23(ctx, base);
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r30,r3,128
	ctx.r30.s64 = ctx.r3.s64 + 128;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// mr r25,r4
	ctx.r25.u64 = ctx.r4.u64;
	// li r23,0
	ctx.r23.s64 = 0;
	// li r4,120
	ctx.r4.s64 = 120;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mr r24,r5
	ctx.r24.u64 = ctx.r5.u64;
	// mr r29,r23
	ctx.r29.u64 = ctx.r23.u64;
	// mr r31,r23
	ctx.r31.u64 = ctx.r23.u64;
	// li r28,10
	ctx.r28.s64 = 10;
	// bl 0x830f4f70
	ctx.lr = 0x830EF440;
	sub_830F4F70(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x830ef468
	if (!ctx.cr0.eq) goto loc_830EF468;
	// li r4,88
	ctx.r4.s64 = 88;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x830f4f70
	ctx.lr = 0x830EF454;
	sub_830F4F70(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x830ef46c
	if (ctx.cr0.eq) goto loc_830EF46C;
	// li r4,267
	ctx.r4.s64 = 267;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x830edff8
	ctx.lr = 0x830EF468;
	sub_830EDFF8(ctx, base);
loc_830EF468:
	// li r28,16
	ctx.r28.s64 = 16;
loc_830EF46C:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x830f4f08
	ctx.lr = 0x830EF474;
	sub_830F4F08(ctx, base);
	// clrlwi. r11,r3,16
	ctx.r11.u64 = ctx.r3.u32 & 0xFFFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x830ef52c
	if (ctx.cr0.eq) goto loc_830EF52C;
	// lis r10,16
	ctx.r10.s64 = 1048576;
	// ori r26,r10,65535
	ctx.r26.u64 = ctx.r10.u64 | 65535;
loc_830EF484:
	// cmplwi cr6,r11,59
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 59, ctx.xer);
	// beq cr6,0x830ef558
	if (ctx.cr6.eq) goto loc_830EF558;
	// cmplwi cr6,r11,48
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 48, ctx.xer);
	// blt cr6,0x830ef4a4
	if (ctx.cr6.lt) goto loc_830EF4A4;
	// cmplwi cr6,r11,57
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 57, ctx.xer);
	// bgt cr6,0x830ef4a4
	if (ctx.cr6.gt) goto loc_830EF4A4;
	// addi r11,r11,-48
	ctx.r11.s64 = ctx.r11.s64 + -48;
	// b 0x830ef4d0
	goto loc_830EF4D0;
loc_830EF4A4:
	// cmplwi cr6,r11,65
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 65, ctx.xer);
	// blt cr6,0x830ef4bc
	if (ctx.cr6.lt) goto loc_830EF4BC;
	// cmplwi cr6,r11,70
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 70, ctx.xer);
	// bgt cr6,0x830ef4bc
	if (ctx.cr6.gt) goto loc_830EF4BC;
	// addi r11,r11,-55
	ctx.r11.s64 = ctx.r11.s64 + -55;
	// b 0x830ef4d0
	goto loc_830EF4D0;
loc_830EF4BC:
	// cmplwi cr6,r11,97
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 97, ctx.xer);
	// blt cr6,0x830ef5e0
	if (ctx.cr6.lt) goto loc_830EF5E0;
	// cmplwi cr6,r11,102
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 102, ctx.xer);
	// bgt cr6,0x830ef5e0
	if (ctx.cr6.gt) goto loc_830EF5E0;
	// addi r11,r11,-87
	ctx.r11.s64 = ctx.r11.s64 + -87;
loc_830EF4D0:
	// cmplw cr6,r11,r28
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r28.u32, ctx.xer);
	// blt cr6,0x830ef500
	if (ctx.cr6.lt) goto loc_830EF500;
	// sth r3,80(r1)
	PPC_STORE_U16(ctx.r1.u32 + 80, ctx.r3.u16);
	// li r8,0
	ctx.r8.s64 = 0;
	// sth r23,82(r1)
	PPC_STORE_U16(ctx.r1.u32 + 82, ctx.r23.u16);
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// li r4,273
	ctx.r4.s64 = 273;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x830ee100
	ctx.lr = 0x830EF4FC;
	sub_830EE100(ctx, base);
	// b 0x830ef510
	goto loc_830EF510;
loc_830EF500:
	// mullw r10,r28,r31
	ctx.r10.s64 = int64_t(ctx.r28.s32) * int64_t(ctx.r31.s32);
	// add r31,r10,r11
	ctx.r31.u64 = ctx.r10.u64 + ctx.r11.u64;
	// cmplw cr6,r31,r26
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r26.u32, ctx.xer);
	// bgt cr6,0x830ef5d8
	if (ctx.cr6.gt) goto loc_830EF5D8;
loc_830EF510:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// li r29,1
	ctx.r29.s64 = 1;
	// bl 0x830f4dd0
	ctx.lr = 0x830EF51C;
	sub_830F4DD0(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x830f4f08
	ctx.lr = 0x830EF524;
	sub_830F4F08(ctx, base);
	// clrlwi. r11,r3,16
	ctx.r11.u64 = ctx.r3.u32 & 0xFFFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x830ef484
	if (!ctx.cr0.eq) goto loc_830EF484;
loc_830EF52C:
	// lis r11,-32228
	ctx.r11.s64 = -2112094208;
	// lwz r7,220(r27)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r27.u32 + 220);
	// li r6,47
	ctx.r6.s64 = 47;
	// addi r4,r11,10440
	ctx.r4.s64 = ctx.r11.s64 + 10440;
	// li r5,2094
	ctx.r5.s64 = 2094;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x830ed320
	ctx.lr = 0x830EF548;
	sub_830ED320(ctx, base);
	// lis r11,-32194
	ctx.r11.s64 = -2109865984;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// addi r4,r11,-27808
	ctx.r4.s64 = ctx.r11.s64 + -27808;
	// bl 0x833a7198
	ctx.lr = 0x830EF558;
	sub_833A7198(ctx, base);
loc_830EF558:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x830f4dd0
	ctx.lr = 0x830EF560;
	sub_830F4DD0(ctx, base);
	// lis r11,1
	ctx.r11.s64 = 65536;
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x830ef5a0
	if (ctx.cr6.lt) goto loc_830EF5A0;
	// cmplw cr6,r31,r26
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r26.u32, ctx.xer);
	// bgt cr6,0x830ef5a0
	if (ctx.cr6.gt) goto loc_830EF5A0;
	// subf r11,r11,r31
	ctx.r11.s64 = ctx.r31.s64 - ctx.r11.s64;
	// rlwinm r10,r11,22,10,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 22) & 0x3FFFFF;
	// clrlwi r11,r11,22
	ctx.r11.u64 = ctx.r11.u32 & 0x3FF;
	// addis r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 65536;
	// addis r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 65536;
	// addi r10,r10,-10240
	ctx.r10.s64 = ctx.r10.s64 + -10240;
	// addi r11,r11,-9216
	ctx.r11.s64 = ctx.r11.s64 + -9216;
	// sth r10,0(r25)
	PPC_STORE_U16(ctx.r25.u32 + 0, ctx.r10.u16);
	// sth r11,0(r24)
	PPC_STORE_U16(ctx.r24.u32 + 0, ctx.r11.u16);
loc_830EF598:
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x830ef600
	goto loc_830EF600;
loc_830EF5A0:
	// cmplwi cr6,r31,65533
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 65533, ctx.xer);
	// bgt cr6,0x830ef5d8
	if (ctx.cr6.gt) goto loc_830EF5D8;
	// sth r31,0(r25)
	PPC_STORE_U16(ctx.r25.u32 + 0, ctx.r31.u16);
	// lis r10,2
	ctx.r10.s64 = 131072;
	// sth r23,0(r24)
	PPC_STORE_U16(ctx.r24.u32 + 0, ctx.r23.u16);
	// lhz r9,0(r25)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r25.u32 + 0);
	// ori r11,r10,32852
	ctx.r11.u64 = ctx.r10.u64 | 32852;
	// lwz r10,136(r27)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r27.u32 + 136);
	// lwzx r11,r10,r11
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// lbzx r11,r11,r9
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + ctx.r9.u32);
	// rlwinm. r10,r11,0,25,25
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x40;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x830ef598
	if (!ctx.cr0.eq) goto loc_830EF598;
	// rlwinm. r11,r11,0,26,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x20;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x830ef598
	if (!ctx.cr0.eq) goto loc_830EF598;
loc_830EF5D8:
	// li r4,224
	ctx.r4.s64 = 224;
	// b 0x830ef5f4
	goto loc_830EF5F4;
loc_830EF5E0:
	// clrlwi. r11,r29,24
	ctx.r11.u64 = ctx.r29.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// sth r23,0(r25)
	PPC_STORE_U16(ctx.r25.u32 + 0, ctx.r23.u16);
	// li r4,225
	ctx.r4.s64 = 225;
	// bne 0x830ef5f4
	if (!ctx.cr0.eq) goto loc_830EF5F4;
	// li r4,260
	ctx.r4.s64 = 260;
loc_830EF5F4:
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x830edff8
	ctx.lr = 0x830EF5FC;
	sub_830EDFF8(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
loc_830EF600:
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x833a01e4
	__restgprlr_23(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_830EF608"))) PPC_WEAK_FUNC(sub_830EF608);
PPC_FUNC_IMPL(__imp__sub_830EF608) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lwz r25,17952(r26)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r26.u32 + 17952);
	// lwz r16,11024(r28)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r28.u32 + 11024);
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x833a0194
	ctx.lr = 0x830EF618;
	__savegprlr_23(ctx, base);
	// addi r31,r1,-208
	ctx.r31.s64 = ctx.r1.s64 + -208;
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r23,r3,224
	ctx.r23.s64 = ctx.r3.s64 + 224;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// bl 0x830e4258
	ctx.lr = 0x830EF630;
	sub_830E4258(ctx, base);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// stw r23,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r23.u32);
	// stw r3,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r3.u32);
	// addi r24,r30,128
	ctx.r24.s64 = ctx.r30.s64 + 128;
	// li r26,0
	ctx.r26.s64 = 0;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// li r25,0
	ctx.r25.s64 = 0;
	// b 0x830ef768
	goto loc_830EF768;
loc_830EF650:
	// cmplwi cr6,r29,55296
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 55296, ctx.xer);
	// blt cr6,0x830ef680
	if (ctx.cr6.lt) goto loc_830EF680;
	// cmplwi cr6,r29,56319
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 56319, ctx.xer);
	// bgt cr6,0x830ef680
	if (ctx.cr6.gt) goto loc_830EF680;
	// clrlwi. r11,r25,24
	ctx.r11.u64 = ctx.r25.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x830ef678
	if (ctx.cr0.eq) goto loc_830EF678;
	// li r4,249
	ctx.r4.s64 = 249;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x830edff8
	ctx.lr = 0x830EF674;
	sub_830EDFF8(ctx, base);
	// b 0x830ef6fc
	goto loc_830EF6FC;
loc_830EF678:
	// li r25,1
	ctx.r25.s64 = 1;
	// b 0x830ef6fc
	goto loc_830EF6FC;
loc_830EF680:
	// clrlwi. r11,r25,24
	ctx.r11.u64 = ctx.r25.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x830ef6a8
	if (ctx.cr0.eq) goto loc_830EF6A8;
	// cmplwi cr6,r29,56320
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 56320, ctx.xer);
	// blt cr6,0x830ef698
	if (ctx.cr6.lt) goto loc_830EF698;
	// cmplwi cr6,r29,57343
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 57343, ctx.xer);
	// ble cr6,0x830ef6f8
	if (!ctx.cr6.gt) goto loc_830EF6F8;
loc_830EF698:
	// li r4,249
	ctx.r4.s64 = 249;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x830edff8
	ctx.lr = 0x830EF6A4;
	sub_830EDFF8(ctx, base);
	// b 0x830ef6f8
	goto loc_830EF6F8;
loc_830EF6A8:
	// lis r11,2
	ctx.r11.s64 = 131072;
	// lwz r10,136(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 136);
	// ori r11,r11,32852
	ctx.r11.u64 = ctx.r11.u64 | 32852;
	// lwzx r11,r10,r11
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// lbzx r11,r11,r29
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + ctx.r29.u32);
	// rlwinm. r11,r11,0,25,25
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x40;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x830ef6f8
	if (!ctx.cr0.eq) goto loc_830EF6F8;
	// li r6,16
	ctx.r6.s64 = 16;
	// lwz r7,220(r30)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r30.u32 + 220);
	// li r5,8
	ctx.r5.s64 = 8;
	// addi r4,r31,96
	ctx.r4.s64 = ctx.r31.s64 + 96;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x830d6590
	ctx.lr = 0x830EF6DC;
	sub_830D6590(ctx, base);
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r31,96
	ctx.r5.s64 = ctx.r31.s64 + 96;
	// li r4,196
	ctx.r4.s64 = 196;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x830ee100
	ctx.lr = 0x830EF6F8;
	sub_830EE100(ctx, base);
loc_830EF6F8:
	// li r25,0
	ctx.r25.s64 = 0;
loc_830EF6FC:
	// cmpwi cr6,r26,0
	ctx.cr6.compare<int32_t>(ctx.r26.s32, 0, ctx.xer);
	// bne cr6,0x830ef724
	if (!ctx.cr6.eq) goto loc_830EF724;
	// cmplwi cr6,r29,45
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 45, ctx.xer);
	// bne cr6,0x830ef714
	if (!ctx.cr6.eq) goto loc_830EF714;
	// li r26,1
	ctx.r26.s64 = 1;
	// b 0x830ef764
	goto loc_830EF764;
loc_830EF714:
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x830d5880
	ctx.lr = 0x830EF720;
	sub_830D5880(ctx, base);
	// b 0x830ef764
	goto loc_830EF764;
loc_830EF724:
	// cmpwi cr6,r26,1
	ctx.cr6.compare<int32_t>(ctx.r26.s32, 1, ctx.xer);
	// bne cr6,0x830ef75c
	if (!ctx.cr6.eq) goto loc_830EF75C;
	// cmplwi cr6,r29,45
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 45, ctx.xer);
	// bne cr6,0x830ef73c
	if (!ctx.cr6.eq) goto loc_830EF73C;
	// li r26,2
	ctx.r26.s64 = 2;
	// b 0x830ef764
	goto loc_830EF764;
loc_830EF73C:
	// li r4,45
	ctx.r4.s64 = 45;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x830d5880
	ctx.lr = 0x830EF748;
	sub_830D5880(ctx, base);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x830d5880
	ctx.lr = 0x830EF754;
	sub_830D5880(ctx, base);
	// li r26,0
	ctx.r26.s64 = 0;
	// b 0x830ef764
	goto loc_830EF764;
loc_830EF75C:
	// cmpwi cr6,r26,2
	ctx.cr6.compare<int32_t>(ctx.r26.s32, 2, ctx.xer);
	// beq cr6,0x830ef7b0
	if (ctx.cr6.eq) goto loc_830EF7B0;
loc_830EF764:
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
loc_830EF768:
	// bl 0x830f4dd0
	ctx.lr = 0x830EF76C;
	sub_830F4DD0(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// clrlwi. r29,r3,16
	ctx.r29.u64 = ctx.r3.u32 & 0xFFFF;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// bne 0x830ef650
	if (!ctx.cr0.eq) goto loc_830EF650;
	// li r4,193
	ctx.r4.s64 = 193;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x830edff8
	ctx.lr = 0x830EF784;
	sub_830EDFF8(ctx, base);
	// lis r11,-32228
	ctx.r11.s64 = -2112094208;
	// li r6,47
	ctx.r6.s64 = 47;
	// lwz r7,220(r30)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r30.u32 + 220);
	// addi r4,r11,10440
	ctx.r4.s64 = ctx.r11.s64 + 10440;
	// li r5,2216
	ctx.r5.s64 = 2216;
	// addi r3,r31,96
	ctx.r3.s64 = ctx.r31.s64 + 96;
	// bl 0x830ed320
	ctx.lr = 0x830EF7A0;
	sub_830ED320(ctx, base);
	// lis r11,-32194
	ctx.r11.s64 = -2109865984;
	// addi r3,r31,96
	ctx.r3.s64 = ctx.r31.s64 + 96;
	// addi r4,r11,-27808
	ctx.r4.s64 = ctx.r11.s64 + -27808;
	// bl 0x833a7198
	ctx.lr = 0x830EF7B0;
	sub_833A7198(ctx, base);
loc_830EF7B0:
	// cmplwi cr6,r29,62
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 62, ctx.xer);
	// beq cr6,0x830ef7d4
	if (ctx.cr6.eq) goto loc_830EF7D4;
	// li r4,263
	ctx.r4.s64 = 263;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x830edff8
	ctx.lr = 0x830EF7C4;
	sub_830EDFF8(ctx, base);
	// li r4,62
	ctx.r4.s64 = 62;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x830ed2b8
	ctx.lr = 0x830EF7D0;
	sub_830ED2B8(ctx, base);
	// b 0x830ef83c
	goto loc_830EF83C;
loc_830EF7D4:
	// lwz r11,96(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 96);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x830ef80c
	if (ctx.cr6.eq) goto loc_830EF80C;
	// lwz r11,0(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// li r10,0
	ctx.r10.s64 = 0;
	// lwz r9,24(r27)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r27.u32 + 24);
	// rlwinm r11,r11,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// sthx r10,r11,r9
	PPC_STORE_U16(ctx.r11.u32 + ctx.r9.u32, ctx.r10.u16);
	// lwz r3,96(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 96);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r4,24(r27)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r27.u32 + 24);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x830EF80C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_830EF80C:
	// lwz r11,472(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 472);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x830ef83c
	if (ctx.cr6.eq) goto loc_830EF83C;
	// rotlwi r10,r11,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// lwz r11,464(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 464);
	// addi r9,r30,432
	ctx.r9.s64 = ctx.r30.s64 + 432;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// li r8,1
	ctx.r8.s64 = 1;
	// stw r9,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r9.u32);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwz r11,-4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -4);
	// stb r8,33(r11)
	PPC_STORE_U8(ctx.r11.u32 + 33, ctx.r8.u8);
loc_830EF83C:
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// bl 0x830e4388
	ctx.lr = 0x830EF848;
	sub_830E4388(ctx, base);
	// addi r1,r31,208
	ctx.r1.s64 = ctx.r31.s64 + 208;
	// b 0x833a01e4
	__restgprlr_23(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_830EF610"))) PPC_WEAK_FUNC(sub_830EF610);
PPC_FUNC_IMPL(__imp__sub_830EF610) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x833a0194
	ctx.lr = 0x830EF618;
	__savegprlr_23(ctx, base);
	// addi r31,r1,-208
	ctx.r31.s64 = ctx.r1.s64 + -208;
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r23,r3,224
	ctx.r23.s64 = ctx.r3.s64 + 224;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// bl 0x830e4258
	ctx.lr = 0x830EF630;
	sub_830E4258(ctx, base);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// stw r23,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r23.u32);
	// stw r3,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r3.u32);
	// addi r24,r30,128
	ctx.r24.s64 = ctx.r30.s64 + 128;
	// li r26,0
	ctx.r26.s64 = 0;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// li r25,0
	ctx.r25.s64 = 0;
	// b 0x830ef768
	goto loc_830EF768;
loc_830EF650:
	// cmplwi cr6,r29,55296
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 55296, ctx.xer);
	// blt cr6,0x830ef680
	if (ctx.cr6.lt) goto loc_830EF680;
	// cmplwi cr6,r29,56319
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 56319, ctx.xer);
	// bgt cr6,0x830ef680
	if (ctx.cr6.gt) goto loc_830EF680;
	// clrlwi. r11,r25,24
	ctx.r11.u64 = ctx.r25.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x830ef678
	if (ctx.cr0.eq) goto loc_830EF678;
	// li r4,249
	ctx.r4.s64 = 249;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x830edff8
	ctx.lr = 0x830EF674;
	sub_830EDFF8(ctx, base);
	// b 0x830ef6fc
	goto loc_830EF6FC;
loc_830EF678:
	// li r25,1
	ctx.r25.s64 = 1;
	// b 0x830ef6fc
	goto loc_830EF6FC;
loc_830EF680:
	// clrlwi. r11,r25,24
	ctx.r11.u64 = ctx.r25.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x830ef6a8
	if (ctx.cr0.eq) goto loc_830EF6A8;
	// cmplwi cr6,r29,56320
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 56320, ctx.xer);
	// blt cr6,0x830ef698
	if (ctx.cr6.lt) goto loc_830EF698;
	// cmplwi cr6,r29,57343
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 57343, ctx.xer);
	// ble cr6,0x830ef6f8
	if (!ctx.cr6.gt) goto loc_830EF6F8;
loc_830EF698:
	// li r4,249
	ctx.r4.s64 = 249;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x830edff8
	ctx.lr = 0x830EF6A4;
	sub_830EDFF8(ctx, base);
	// b 0x830ef6f8
	goto loc_830EF6F8;
loc_830EF6A8:
	// lis r11,2
	ctx.r11.s64 = 131072;
	// lwz r10,136(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 136);
	// ori r11,r11,32852
	ctx.r11.u64 = ctx.r11.u64 | 32852;
	// lwzx r11,r10,r11
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// lbzx r11,r11,r29
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + ctx.r29.u32);
	// rlwinm. r11,r11,0,25,25
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x40;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x830ef6f8
	if (!ctx.cr0.eq) goto loc_830EF6F8;
	// li r6,16
	ctx.r6.s64 = 16;
	// lwz r7,220(r30)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r30.u32 + 220);
	// li r5,8
	ctx.r5.s64 = 8;
	// addi r4,r31,96
	ctx.r4.s64 = ctx.r31.s64 + 96;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x830d6590
	ctx.lr = 0x830EF6DC;
	sub_830D6590(ctx, base);
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r31,96
	ctx.r5.s64 = ctx.r31.s64 + 96;
	// li r4,196
	ctx.r4.s64 = 196;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x830ee100
	ctx.lr = 0x830EF6F8;
	sub_830EE100(ctx, base);
loc_830EF6F8:
	// li r25,0
	ctx.r25.s64 = 0;
loc_830EF6FC:
	// cmpwi cr6,r26,0
	ctx.cr6.compare<int32_t>(ctx.r26.s32, 0, ctx.xer);
	// bne cr6,0x830ef724
	if (!ctx.cr6.eq) goto loc_830EF724;
	// cmplwi cr6,r29,45
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 45, ctx.xer);
	// bne cr6,0x830ef714
	if (!ctx.cr6.eq) goto loc_830EF714;
	// li r26,1
	ctx.r26.s64 = 1;
	// b 0x830ef764
	goto loc_830EF764;
loc_830EF714:
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x830d5880
	ctx.lr = 0x830EF720;
	sub_830D5880(ctx, base);
	// b 0x830ef764
	goto loc_830EF764;
loc_830EF724:
	// cmpwi cr6,r26,1
	ctx.cr6.compare<int32_t>(ctx.r26.s32, 1, ctx.xer);
	// bne cr6,0x830ef75c
	if (!ctx.cr6.eq) goto loc_830EF75C;
	// cmplwi cr6,r29,45
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 45, ctx.xer);
	// bne cr6,0x830ef73c
	if (!ctx.cr6.eq) goto loc_830EF73C;
	// li r26,2
	ctx.r26.s64 = 2;
	// b 0x830ef764
	goto loc_830EF764;
loc_830EF73C:
	// li r4,45
	ctx.r4.s64 = 45;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x830d5880
	ctx.lr = 0x830EF748;
	sub_830D5880(ctx, base);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x830d5880
	ctx.lr = 0x830EF754;
	sub_830D5880(ctx, base);
	// li r26,0
	ctx.r26.s64 = 0;
	// b 0x830ef764
	goto loc_830EF764;
loc_830EF75C:
	// cmpwi cr6,r26,2
	ctx.cr6.compare<int32_t>(ctx.r26.s32, 2, ctx.xer);
	// beq cr6,0x830ef7b0
	if (ctx.cr6.eq) goto loc_830EF7B0;
loc_830EF764:
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
loc_830EF768:
	// bl 0x830f4dd0
	ctx.lr = 0x830EF76C;
	sub_830F4DD0(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// clrlwi. r29,r3,16
	ctx.r29.u64 = ctx.r3.u32 & 0xFFFF;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// bne 0x830ef650
	if (!ctx.cr0.eq) goto loc_830EF650;
	// li r4,193
	ctx.r4.s64 = 193;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x830edff8
	ctx.lr = 0x830EF784;
	sub_830EDFF8(ctx, base);
	// lis r11,-32228
	ctx.r11.s64 = -2112094208;
	// li r6,47
	ctx.r6.s64 = 47;
	// lwz r7,220(r30)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r30.u32 + 220);
	// addi r4,r11,10440
	ctx.r4.s64 = ctx.r11.s64 + 10440;
	// li r5,2216
	ctx.r5.s64 = 2216;
	// addi r3,r31,96
	ctx.r3.s64 = ctx.r31.s64 + 96;
	// bl 0x830ed320
	ctx.lr = 0x830EF7A0;
	sub_830ED320(ctx, base);
	// lis r11,-32194
	ctx.r11.s64 = -2109865984;
	// addi r3,r31,96
	ctx.r3.s64 = ctx.r31.s64 + 96;
	// addi r4,r11,-27808
	ctx.r4.s64 = ctx.r11.s64 + -27808;
	// bl 0x833a7198
	ctx.lr = 0x830EF7B0;
	sub_833A7198(ctx, base);
loc_830EF7B0:
	// cmplwi cr6,r29,62
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 62, ctx.xer);
	// beq cr6,0x830ef7d4
	if (ctx.cr6.eq) goto loc_830EF7D4;
	// li r4,263
	ctx.r4.s64 = 263;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x830edff8
	ctx.lr = 0x830EF7C4;
	sub_830EDFF8(ctx, base);
	// li r4,62
	ctx.r4.s64 = 62;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x830ed2b8
	ctx.lr = 0x830EF7D0;
	sub_830ED2B8(ctx, base);
	// b 0x830ef83c
	goto loc_830EF83C;
loc_830EF7D4:
	// lwz r11,96(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 96);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x830ef80c
	if (ctx.cr6.eq) goto loc_830EF80C;
	// lwz r11,0(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// li r10,0
	ctx.r10.s64 = 0;
	// lwz r9,24(r27)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r27.u32 + 24);
	// rlwinm r11,r11,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// sthx r10,r11,r9
	PPC_STORE_U16(ctx.r11.u32 + ctx.r9.u32, ctx.r10.u16);
	// lwz r3,96(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 96);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r4,24(r27)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r27.u32 + 24);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x830EF80C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_830EF80C:
	// lwz r11,472(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 472);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x830ef83c
	if (ctx.cr6.eq) goto loc_830EF83C;
	// rotlwi r10,r11,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// lwz r11,464(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 464);
	// addi r9,r30,432
	ctx.r9.s64 = ctx.r30.s64 + 432;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// li r8,1
	ctx.r8.s64 = 1;
	// stw r9,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r9.u32);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwz r11,-4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -4);
	// stb r8,33(r11)
	PPC_STORE_U8(ctx.r11.u32 + 33, ctx.r8.u8);
loc_830EF83C:
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// bl 0x830e4388
	ctx.lr = 0x830EF848;
	sub_830E4388(ctx, base);
	// addi r1,r31,208
	ctx.r1.s64 = ctx.r31.s64 + 208;
	// b 0x833a01e4
	__restgprlr_23(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_830EF850"))) PPC_WEAK_FUNC(sub_830EF850);
PPC_FUNC_IMPL(__imp__sub_830EF850) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// addi r31,r12,-208
	ctx.r31.s64 = ctx.r12.s64 + -208;
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
	// bl 0x830d9068
	ctx.lr = 0x830EF868;
	sub_830D9068(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830EF878"))) PPC_WEAK_FUNC(sub_830EF878);
PPC_FUNC_IMPL(__imp__sub_830EF878) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x833a019c
	ctx.lr = 0x830EF880;
	__savegprlr_25(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,16(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x830ef92c
	if (ctx.cr6.eq) goto loc_830EF92C;
	// lwz r11,12(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// li r25,0
	ctx.r25.s64 = 0;
	// mr r26,r25
	ctx.r26.u64 = ctx.r25.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x830ef928
	if (!ctx.cr6.gt) goto loc_830EF928;
	// mr r29,r25
	ctx.r29.u64 = ctx.r25.u64;
loc_830EF8AC:
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lwzx r30,r11,r29
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r29.u32);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x830ef90c
	if (ctx.cr6.eq) goto loc_830EF90C;
loc_830EF8BC:
	// lbz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 4);
	// lwz r27,4(r30)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x830ef8e8
	if (ctx.cr0.eq) goto loc_830EF8E8;
	// lwz r28,0(r30)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// beq cr6,0x830ef8e8
	if (ctx.cr6.eq) goto loc_830EF8E8;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x830f8ae8
	ctx.lr = 0x830EF8E0;
	sub_830F8AE8(ctx, base);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x830dd3e0
	ctx.lr = 0x830EF8E8;
	sub_830DD3E0(ctx, base);
loc_830EF8E8:
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x830EF900;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r30,r27
	ctx.r30.u64 = ctx.r27.u64;
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// bne cr6,0x830ef8bc
	if (!ctx.cr6.eq) goto loc_830EF8BC;
loc_830EF90C:
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addi r26,r26,1
	ctx.r26.s64 = ctx.r26.s64 + 1;
	// stwx r25,r11,r29
	PPC_STORE_U32(ctx.r11.u32 + ctx.r29.u32, ctx.r25.u32);
	// addi r29,r29,4
	ctx.r29.s64 = ctx.r29.s64 + 4;
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// cmplw cr6,r26,r11
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x830ef8ac
	if (ctx.cr6.lt) goto loc_830EF8AC;
loc_830EF928:
	// stw r25,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r25.u32);
loc_830EF92C:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x833a01ec
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_830EF934"))) PPC_WEAK_FUNC(sub_830EF934);
PPC_FUNC_IMPL(__imp__sub_830EF934) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_830EF938"))) PPC_WEAK_FUNC(sub_830EF938);
PPC_FUNC_IMPL(__imp__sub_830EF938) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x833a01a8
	ctx.lr = 0x830EF940;
	__savegprlr_28(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// cmplw cr6,r5,r11
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x830ef988
	if (ctx.cr6.lt) goto loc_830EF988;
	// lis r11,-32228
	ctx.r11.s64 = -2112094208;
	// lwz r7,20(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// li r6,116
	ctx.r6.s64 = 116;
	// addi r4,r11,-11428
	ctx.r4.s64 = ctx.r11.s64 + -11428;
	// li r5,68
	ctx.r5.s64 = 68;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x830d56c0
	ctx.lr = 0x830EF978;
	sub_830D56C0(ctx, base);
	// lis r11,-32194
	ctx.r11.s64 = -2109865984;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,-28420
	ctx.r4.s64 = ctx.r11.s64 + -28420;
	// bl 0x833a7198
	ctx.lr = 0x830EF988;
	sub_833A7198(ctx, base);
loc_830EF988:
	// lbz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 4);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x830ef9b8
	if (ctx.cr0.eq) goto loc_830EF9B8;
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// rlwinm r10,r30,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r29,r10,r11
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x830ef9b8
	if (ctx.cr6.eq) goto loc_830EF9B8;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x830f8ae8
	ctx.lr = 0x830EF9B0;
	sub_830F8AE8(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x830dd3e0
	ctx.lr = 0x830EF9B8;
	sub_830DD3E0(ctx, base);
loc_830EF9B8:
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// rlwinm r10,r30,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r28,r10,r11
	PPC_STORE_U32(ctx.r10.u32 + ctx.r11.u32, ctx.r28.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x833a01f8
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_830EF9CC"))) PPC_WEAK_FUNC(sub_830EF9CC);
PPC_FUNC_IMPL(__imp__sub_830EF9CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_830EF9D0"))) PPC_WEAK_FUNC(sub_830EF9D0);
PPC_FUNC_IMPL(__imp__sub_830EF9D0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x833a01a4
	ctx.lr = 0x830EF9D8;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// li r27,0
	ctx.r27.s64 = 0;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r29,r27
	ctx.r29.u64 = ctx.r27.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x830efa40
	if (!ctx.cr6.gt) goto loc_830EFA40;
	// mr r30,r27
	ctx.r30.u64 = ctx.r27.u64;
loc_830EF9F8:
	// lbz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 4);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x830efa24
	if (ctx.cr0.eq) goto loc_830EFA24;
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// lwzx r28,r11,r30
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r30.u32);
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// beq cr6,0x830efa24
	if (ctx.cr6.eq) goto loc_830EFA24;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x830f8ae8
	ctx.lr = 0x830EFA1C;
	sub_830F8AE8(ctx, base);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x830dd3e0
	ctx.lr = 0x830EFA24;
	sub_830DD3E0(ctx, base);
loc_830EFA24:
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// stwx r27,r11,r30
	PPC_STORE_U32(ctx.r11.u32 + ctx.r30.u32, ctx.r27.u32);
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmplw cr6,r29,r11
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x830ef9f8
	if (ctx.cr6.lt) goto loc_830EF9F8;
loc_830EFA40:
	// stw r27,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r27.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x833a01f4
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_830EFA4C"))) PPC_WEAK_FUNC(sub_830EFA4C);
PPC_FUNC_IMPL(__imp__sub_830EFA4C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_830EFA50"))) PPC_WEAK_FUNC(sub_830EFA50);
PPC_FUNC_IMPL(__imp__sub_830EFA50) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x833a01ac
	ctx.lr = 0x830EFA58;
	__savegprlr_29(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// cmplw cr6,r4,r11
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x830efa9c
	if (ctx.cr6.lt) goto loc_830EFA9C;
	// lis r11,-32228
	ctx.r11.s64 = -2112094208;
	// lwz r7,20(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// li r6,116
	ctx.r6.s64 = 116;
	// addi r4,r11,-11428
	ctx.r4.s64 = ctx.r11.s64 + -11428;
	// li r5,145
	ctx.r5.s64 = 145;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x830d56c0
	ctx.lr = 0x830EFA8C;
	sub_830D56C0(ctx, base);
	// lis r11,-32194
	ctx.r11.s64 = -2109865984;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,-28420
	ctx.r4.s64 = ctx.r11.s64 + -28420;
	// bl 0x833a7198
	ctx.lr = 0x830EFA9C;
	sub_833A7198(ctx, base);
loc_830EFA9C:
	// lbz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 4);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x830efacc
	if (ctx.cr0.eq) goto loc_830EFACC;
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// rlwinm r10,r30,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r29,r10,r11
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x830efacc
	if (ctx.cr6.eq) goto loc_830EFACC;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x830f8ae8
	ctx.lr = 0x830EFAC4;
	sub_830F8AE8(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x830dd3e0
	ctx.lr = 0x830EFACC;
	sub_830DD3E0(ctx, base);
loc_830EFACC:
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x830efaf0
	if (!ctx.cr6.eq) goto loc_830EFAF0;
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// rlwinm r10,r30,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 2) & 0xFFFFFFFC;
	// li r9,0
	ctx.r9.s64 = 0;
	// stwx r9,r10,r11
	PPC_STORE_U32(ctx.r10.u32 + ctx.r11.u32, ctx.r9.u32);
	// b 0x830efb40
	goto loc_830EFB40;
loc_830EFAF0:
	// mr r10,r30
	ctx.r10.u64 = ctx.r30.u64;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// bge cr6,0x830efb28
	if (!ctx.cr6.lt) goto loc_830EFB28;
	// rlwinm r11,r30,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 2) & 0xFFFFFFFC;
loc_830EFB00:
	// lwz r9,16(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// add r9,r9,r11
	ctx.r9.u64 = ctx.r9.u64 + ctx.r11.u64;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// lwz r8,4(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// stw r8,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r8.u32);
	// lwz r9,8(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addi r9,r9,-1
	ctx.r9.s64 = ctx.r9.s64 + -1;
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// blt cr6,0x830efb00
	if (ctx.cr6.lt) goto loc_830EFB00;
loc_830EFB28:
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r9,-4(r11)
	PPC_STORE_U32(ctx.r11.u32 + -4, ctx.r9.u32);
loc_830EFB40:
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x833a01fc
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_830EFB54"))) PPC_WEAK_FUNC(sub_830EFB54);
PPC_FUNC_IMPL(__imp__sub_830EFB54) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_830EFB58"))) PPC_WEAK_FUNC(sub_830EFB58);
PPC_FUNC_IMPL(__imp__sub_830EFB58) {
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
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x830efbac
	if (ctx.cr6.eq) goto loc_830EFBAC;
	// lbz r10,4(r3)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r3.u32 + 4);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// cmplwi r10,0
	ctx.cr0.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// beq 0x830efbac
	if (ctx.cr0.eq) goto loc_830EFBAC;
	// lwz r10,16(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r31,r11,r10
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x830efbac
	if (ctx.cr6.eq) goto loc_830EFBAC;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x830f8ae8
	ctx.lr = 0x830EFBA4;
	sub_830F8AE8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x830dd3e0
	ctx.lr = 0x830EFBAC;
	sub_830DD3E0(ctx, base);
loc_830EFBAC:
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

__attribute__((alias("__imp__sub_830EFBC0"))) PPC_WEAK_FUNC(sub_830EFBC0);
PPC_FUNC_IMPL(__imp__sub_830EFBC0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x833a01a8
	ctx.lr = 0x830EFBC8;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lbz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 4);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x830efc24
	if (ctx.cr0.eq) goto loc_830EFC24;
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// li r28,0
	ctx.r28.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x830efc24
	if (!ctx.cr6.gt) goto loc_830EFC24;
	// li r31,0
	ctx.r31.s64 = 0;
loc_830EFBF0:
	// lwz r11,16(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// lwzx r29,r11,r31
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r31.u32);
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x830efc10
	if (ctx.cr6.eq) goto loc_830EFC10;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x830f8ae8
	ctx.lr = 0x830EFC08;
	sub_830F8AE8(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x830dd3e0
	ctx.lr = 0x830EFC10;
	sub_830DD3E0(ctx, base);
loc_830EFC10:
	// lwz r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// cmplw cr6,r28,r11
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x830efbf0
	if (ctx.cr6.lt) goto loc_830EFBF0;
loc_830EFC24:
	// lwz r3,20(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 20);
	// lwz r4,16(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x830EFC3C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x833a01f8
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_830EFC44"))) PPC_WEAK_FUNC(sub_830EFC44);
PPC_FUNC_IMPL(__imp__sub_830EFC44) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_830EFC48"))) PPC_WEAK_FUNC(sub_830EFC48);
PPC_FUNC_IMPL(__imp__sub_830EFC48) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lwz r25,17952(r26)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r26.u32 + 17952);
	// lwz r16,11136(r28)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r28.u32 + 11136);
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x833a01a4
	ctx.lr = 0x830EFC58;
	__savegprlr_27(ctx, base);
	// addi r31,r1,-128
	ctx.r31.s64 = ctx.r1.s64 + -128;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32228
	ctx.r11.s64 = -2112094208;
	// stw r3,148(r31)
	PPC_STORE_U32(ctx.r31.u32 + 148, ctx.r3.u32);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r11,r11,11104
	ctx.r11.s64 = ctx.r11.s64 + 11104;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// lbz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 4);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x830efcc8
	if (ctx.cr0.eq) goto loc_830EFCC8;
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// li r27,0
	ctx.r27.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x830efcc8
	if (!ctx.cr6.gt) goto loc_830EFCC8;
	// li r29,0
	ctx.r29.s64 = 0;
loc_830EFC94:
	// lwz r11,16(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// lwzx r28,r11,r29
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r29.u32);
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// beq cr6,0x830efcb4
	if (ctx.cr6.eq) goto loc_830EFCB4;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x830f8ae8
	ctx.lr = 0x830EFCAC;
	sub_830F8AE8(ctx, base);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x830dd3e0
	ctx.lr = 0x830EFCB4;
	sub_830DD3E0(ctx, base);
loc_830EFCB4:
	// lwz r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// addi r27,r27,1
	ctx.r27.s64 = ctx.r27.s64 + 1;
	// addi r29,r29,4
	ctx.r29.s64 = ctx.r29.s64 + 4;
	// cmplw cr6,r27,r11
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x830efc94
	if (ctx.cr6.lt) goto loc_830EFC94;
loc_830EFCC8:
	// lwz r3,20(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 20);
	// lwz r4,16(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x830EFCE0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r11,-32228
	ctx.r11.s64 = -2112094208;
	// addi r11,r11,10200
	ctx.r11.s64 = ctx.r11.s64 + 10200;
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
	// addi r1,r31,128
	ctx.r1.s64 = ctx.r31.s64 + 128;
	// b 0x833a01f4
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_830EFC50"))) PPC_WEAK_FUNC(sub_830EFC50);
PPC_FUNC_IMPL(__imp__sub_830EFC50) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x833a01a4
	ctx.lr = 0x830EFC58;
	__savegprlr_27(ctx, base);
	// addi r31,r1,-128
	ctx.r31.s64 = ctx.r1.s64 + -128;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32228
	ctx.r11.s64 = -2112094208;
	// stw r3,148(r31)
	PPC_STORE_U32(ctx.r31.u32 + 148, ctx.r3.u32);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r11,r11,11104
	ctx.r11.s64 = ctx.r11.s64 + 11104;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// lbz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 4);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x830efcc8
	if (ctx.cr0.eq) goto loc_830EFCC8;
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// li r27,0
	ctx.r27.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x830efcc8
	if (!ctx.cr6.gt) goto loc_830EFCC8;
	// li r29,0
	ctx.r29.s64 = 0;
loc_830EFC94:
	// lwz r11,16(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// lwzx r28,r11,r29
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r29.u32);
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// beq cr6,0x830efcb4
	if (ctx.cr6.eq) goto loc_830EFCB4;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x830f8ae8
	ctx.lr = 0x830EFCAC;
	sub_830F8AE8(ctx, base);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x830dd3e0
	ctx.lr = 0x830EFCB4;
	sub_830DD3E0(ctx, base);
loc_830EFCB4:
	// lwz r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// addi r27,r27,1
	ctx.r27.s64 = ctx.r27.s64 + 1;
	// addi r29,r29,4
	ctx.r29.s64 = ctx.r29.s64 + 4;
	// cmplw cr6,r27,r11
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x830efc94
	if (ctx.cr6.lt) goto loc_830EFC94;
loc_830EFCC8:
	// lwz r3,20(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 20);
	// lwz r4,16(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x830EFCE0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r11,-32228
	ctx.r11.s64 = -2112094208;
	// addi r11,r11,10200
	ctx.r11.s64 = ctx.r11.s64 + 10200;
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
	// addi r1,r31,128
	ctx.r1.s64 = ctx.r31.s64 + 128;
	// b 0x833a01f4
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_830EFCF4"))) PPC_WEAK_FUNC(sub_830EFCF4);
PPC_FUNC_IMPL(__imp__sub_830EFCF4) {
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
	// bl 0x830edbf8
	ctx.lr = 0x830EFD0C;
	sub_830EDBF8(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830EFD1C"))) PPC_WEAK_FUNC(sub_830EFD1C);
PPC_FUNC_IMPL(__imp__sub_830EFD1C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_830EFD20"))) PPC_WEAK_FUNC(sub_830EFD20);
PPC_FUNC_IMPL(__imp__sub_830EFD20) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// bl 0x830efc50
	ctx.lr = 0x830EFD40;
	sub_830EFC50(ctx, base);
	// clrlwi. r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x830efd50
	if (ctx.cr0.eq) goto loc_830EFD50;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x830dd3e0
	ctx.lr = 0x830EFD50;
	sub_830DD3E0(ctx, base);
loc_830EFD50:
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

__attribute__((alias("__imp__sub_830EFD6C"))) PPC_WEAK_FUNC(sub_830EFD6C);
PPC_FUNC_IMPL(__imp__sub_830EFD6C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_830EFD70"))) PPC_WEAK_FUNC(sub_830EFD70);
PPC_FUNC_IMPL(__imp__sub_830EFD70) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lwz r25,17952(r26)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r26.u32 + 17952);
	// lwz r16,11300(r28)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r28.u32 + 11300);
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// li r0,0
	ctx.r0.s64 = 0;
	// stw r0,4(r1)
	PPC_STORE_U32(ctx.r1.u32 + 4, ctx.r0.u32);
	// bl 0x833a01a8
	ctx.lr = 0x830EFD88;
	__savegprlr_28(ctx, base);
	// addi r31,r1,-288
	ctx.r31.s64 = ctx.r1.s64 + -288;
	// stwu r1,-288(r1)
	ea = -288 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// stw r3,308(r31)
	PPC_STORE_U32(ctx.r31.u32 + 308, ctx.r3.u32);
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// addi r3,r31,192
	ctx.r3.s64 = ctx.r31.s64 + 192;
	// lwz r4,220(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 220);
	// bl 0x8311b358
	ctx.lr = 0x830EFDA8;
	sub_8311B358(ctx, base);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// addi r4,r31,192
	ctx.r4.s64 = ctx.r31.s64 + 192;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8311c318
	ctx.lr = 0x830EFDB8;
	sub_8311C318(ctx, base);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x830eff60
	if (ctx.cr0.eq) goto loc_830EFF60;
	// addi r3,r31,192
	ctx.r3.s64 = ctx.r31.s64 + 192;
	// bl 0x8311b408
	ctx.lr = 0x830EFDCC;
	sub_8311B408(ctx, base);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x830efe98
	if (ctx.cr0.eq) goto loc_830EFE98;
	// lbz r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 8);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x830efe20
	if (!ctx.cr0.eq) goto loc_830EFE20;
	// li r3,24
	ctx.r3.s64 = 24;
	// lwz r4,220(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 220);
	// bl 0x830dd390
	ctx.lr = 0x830EFDF0;
	sub_830DD390(ctx, base);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// stw r3,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r3.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x830efe14
	if (ctx.cr6.eq) goto loc_830EFE14;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// lwz r5,220(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + 220);
	// bl 0x830ddea0
	ctx.lr = 0x830EFE0C;
	sub_830DDEA0(ctx, base);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// b 0x830efe18
	goto loc_830EFE18;
loc_830EFE14:
	// li r3,0
	ctx.r3.s64 = 0;
loc_830EFE18:
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// b 0x830effa4
	goto loc_830EFFA4;
loc_830EFE20:
	// lis r11,-32228
	ctx.r11.s64 = -2112094208;
	// lwz r7,220(r30)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r30.u32 + 220);
	// li r6,103
	ctx.r6.s64 = 103;
	// addi r4,r11,10440
	ctx.r4.s64 = ctx.r11.s64 + 10440;
	// li r5,377
	ctx.r5.s64 = 377;
	// addi r3,r31,96
	ctx.r3.s64 = ctx.r31.s64 + 96;
	// bl 0x830dee18
	ctx.lr = 0x830EFE3C;
	sub_830DEE18(ctx, base);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// li r11,1
	ctx.r11.s64 = 1;
	// lwz r7,112(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 112);
	// lis r10,-32228
	ctx.r10.s64 = -2112094208;
	// lwz r5,100(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 100);
	// stb r11,13(r30)
	PPC_STORE_U8(ctx.r30.u32 + 13, ctx.r11.u8);
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r6,r10,-4792
	ctx.r6.s64 = ctx.r10.s64 + -4792;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r4,292
	ctx.r4.s64 = 292;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x830ee370
	ctx.lr = 0x830EFE6C;
	sub_830EE370(ctx, base);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// lis r11,-32228
	ctx.r11.s64 = -2112094208;
	// addi r3,r31,96
	ctx.r3.s64 = ctx.r31.s64 + 96;
	// addi r11,r11,2016
	ctx.r11.s64 = ctx.r11.s64 + 2016;
	// stw r11,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r11.u32);
	// bl 0x830de178
	ctx.lr = 0x830EFE84;
	sub_830DE178(ctx, base);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
loc_830EFE88:
	// addi r3,r31,192
	ctx.r3.s64 = ctx.r31.s64 + 192;
	// bl 0x8311bee8
	ctx.lr = 0x830EFE90;
	sub_8311BEE8(ctx, base);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// b 0x830f0048
	goto loc_830F0048;
loc_830EFE98:
	// lbz r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 8);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x830eff24
	if (ctx.cr0.eq) goto loc_830EFF24;
	// addi r3,r31,192
	ctx.r3.s64 = ctx.r31.s64 + 192;
	// bl 0x8311b440
	ctx.lr = 0x830EFEAC;
	sub_8311B440(ctx, base);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x830eff24
	if (ctx.cr0.eq) goto loc_830EFF24;
	// lis r11,-32228
	ctx.r11.s64 = -2112094208;
	// lwz r7,220(r30)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r30.u32 + 220);
	// li r6,99
	ctx.r6.s64 = 99;
	// addi r4,r11,10440
	ctx.r4.s64 = ctx.r11.s64 + 10440;
	// li r5,392
	ctx.r5.s64 = 392;
	// addi r3,r31,128
	ctx.r3.s64 = ctx.r31.s64 + 128;
	// bl 0x830dee18
	ctx.lr = 0x830EFED4;
	sub_830DEE18(ctx, base);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// li r11,1
	ctx.r11.s64 = 1;
	// lwz r7,144(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 144);
	// lis r10,-32228
	ctx.r10.s64 = -2112094208;
	// lwz r5,132(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 132);
	// stb r11,13(r30)
	PPC_STORE_U8(ctx.r30.u32 + 13, ctx.r11.u8);
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r6,r10,-4792
	ctx.r6.s64 = ctx.r10.s64 + -4792;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r4,292
	ctx.r4.s64 = 292;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x830ee370
	ctx.lr = 0x830EFF04;
	sub_830EE370(ctx, base);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// lis r11,-32228
	ctx.r11.s64 = -2112094208;
	// addi r3,r31,128
	ctx.r3.s64 = ctx.r31.s64 + 128;
	// addi r11,r11,2016
	ctx.r11.s64 = ctx.r11.s64 + 2016;
	// stw r11,128(r31)
	PPC_STORE_U32(ctx.r31.u32 + 128, ctx.r11.u32);
	// bl 0x830de178
	ctx.lr = 0x830EFF1C;
	sub_830DE178(ctx, base);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// b 0x830efe88
	goto loc_830EFE88;
loc_830EFF24:
	// li r3,72
	ctx.r3.s64 = 72;
	// lwz r4,220(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 220);
	// bl 0x830dd390
	ctx.lr = 0x830EFF30;
	sub_830DD390(ctx, base);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// stw r3,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r3.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x830eff58
	if (ctx.cr6.eq) goto loc_830EFF58;
	// addi r4,r31,192
	ctx.r4.s64 = ctx.r31.s64 + 192;
	// lwz r5,220(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + 220);
	// bl 0x8311b150
	ctx.lr = 0x830EFF4C;
	sub_8311B150(ctx, base);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// b 0x830eff5c
	goto loc_830EFF5C;
loc_830EFF58:
	// li r29,0
	ctx.r29.s64 = 0;
loc_830EFF5C:
	// b 0x830effa4
	goto loc_830EFFA4;
loc_830EFF60:
	// lbz r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 8);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x830effdc
	if (!ctx.cr0.eq) goto loc_830EFFDC;
	// li r3,24
	ctx.r3.s64 = 24;
	// lwz r4,220(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 220);
	// bl 0x830dd390
	ctx.lr = 0x830EFF78;
	sub_830DD390(ctx, base);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// stw r3,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r3.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x830eff9c
	if (ctx.cr6.eq) goto loc_830EFF9C;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// lwz r5,220(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + 220);
	// bl 0x830ddea0
	ctx.lr = 0x830EFF94;
	sub_830DDEA0(ctx, base);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// b 0x830effa0
	goto loc_830EFFA0;
loc_830EFF9C:
	// li r3,0
	ctx.r3.s64 = 0;
loc_830EFFA0:
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
loc_830EFFA4:
	// addi r3,r31,192
	ctx.r3.s64 = ctx.r31.s64 + 192;
	// bl 0x8311bee8
	ctx.lr = 0x830EFFAC;
	sub_8311BEE8(ctx, base);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// stw r29,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r29.u32);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r11,28(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x830EFFCC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r31,80
	ctx.r3.s64 = ctx.r31.s64 + 80;
	// bl 0x8312c778
	ctx.lr = 0x830EFFD8;
	sub_8312C778(ctx, base);
	// b 0x830f0048
	goto loc_830F0048;
loc_830EFFDC:
	// lis r11,-32228
	ctx.r11.s64 = -2112094208;
	// lwz r7,220(r30)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r30.u32 + 220);
	// li r6,99
	ctx.r6.s64 = 99;
	// addi r4,r11,10440
	ctx.r4.s64 = ctx.r11.s64 + 10440;
	// li r5,414
	ctx.r5.s64 = 414;
	// addi r3,r31,160
	ctx.r3.s64 = ctx.r31.s64 + 160;
	// bl 0x830dee18
	ctx.lr = 0x830EFFF8;
	sub_830DEE18(ctx, base);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// li r11,1
	ctx.r11.s64 = 1;
	// lwz r7,176(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 176);
	// lis r10,-32228
	ctx.r10.s64 = -2112094208;
	// lwz r5,164(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 164);
	// stb r11,13(r30)
	PPC_STORE_U8(ctx.r30.u32 + 13, ctx.r11.u8);
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r6,r10,-4792
	ctx.r6.s64 = ctx.r10.s64 + -4792;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r4,292
	ctx.r4.s64 = 292;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x830ee370
	ctx.lr = 0x830F0028;
	sub_830EE370(ctx, base);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// lis r11,-32228
	ctx.r11.s64 = -2112094208;
	// addi r3,r31,160
	ctx.r3.s64 = ctx.r31.s64 + 160;
	// addi r11,r11,2016
	ctx.r11.s64 = ctx.r11.s64 + 2016;
	// stw r11,160(r31)
	PPC_STORE_U32(ctx.r31.u32 + 160, ctx.r11.u32);
	// bl 0x830de178
	ctx.lr = 0x830F0040;
	sub_830DE178(ctx, base);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// b 0x830efe88
	goto loc_830EFE88;
loc_830F0048:
	// addi r1,r31,288
	ctx.r1.s64 = ctx.r31.s64 + 288;
	// b 0x833a01f8
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_830EFD78"))) PPC_WEAK_FUNC(sub_830EFD78);
PPC_FUNC_IMPL(__imp__sub_830EFD78) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// li r0,0
	ctx.r0.s64 = 0;
	// stw r0,4(r1)
	PPC_STORE_U32(ctx.r1.u32 + 4, ctx.r0.u32);
	// bl 0x833a01a8
	ctx.lr = 0x830EFD88;
	__savegprlr_28(ctx, base);
	// addi r31,r1,-288
	ctx.r31.s64 = ctx.r1.s64 + -288;
	// stwu r1,-288(r1)
	ea = -288 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// stw r3,308(r31)
	PPC_STORE_U32(ctx.r31.u32 + 308, ctx.r3.u32);
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// addi r3,r31,192
	ctx.r3.s64 = ctx.r31.s64 + 192;
	// lwz r4,220(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 220);
	// bl 0x8311b358
	ctx.lr = 0x830EFDA8;
	sub_8311B358(ctx, base);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// addi r4,r31,192
	ctx.r4.s64 = ctx.r31.s64 + 192;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8311c318
	ctx.lr = 0x830EFDB8;
	sub_8311C318(ctx, base);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x830eff60
	if (ctx.cr0.eq) goto loc_830EFF60;
	// addi r3,r31,192
	ctx.r3.s64 = ctx.r31.s64 + 192;
	// bl 0x8311b408
	ctx.lr = 0x830EFDCC;
	sub_8311B408(ctx, base);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x830efe98
	if (ctx.cr0.eq) goto loc_830EFE98;
	// lbz r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 8);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x830efe20
	if (!ctx.cr0.eq) goto loc_830EFE20;
	// li r3,24
	ctx.r3.s64 = 24;
	// lwz r4,220(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 220);
	// bl 0x830dd390
	ctx.lr = 0x830EFDF0;
	sub_830DD390(ctx, base);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// stw r3,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r3.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x830efe14
	if (ctx.cr6.eq) goto loc_830EFE14;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// lwz r5,220(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + 220);
	// bl 0x830ddea0
	ctx.lr = 0x830EFE0C;
	sub_830DDEA0(ctx, base);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// b 0x830efe18
	goto loc_830EFE18;
loc_830EFE14:
	// li r3,0
	ctx.r3.s64 = 0;
loc_830EFE18:
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// b 0x830effa4
	goto loc_830EFFA4;
loc_830EFE20:
	// lis r11,-32228
	ctx.r11.s64 = -2112094208;
	// lwz r7,220(r30)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r30.u32 + 220);
	// li r6,103
	ctx.r6.s64 = 103;
	// addi r4,r11,10440
	ctx.r4.s64 = ctx.r11.s64 + 10440;
	// li r5,377
	ctx.r5.s64 = 377;
	// addi r3,r31,96
	ctx.r3.s64 = ctx.r31.s64 + 96;
	// bl 0x830dee18
	ctx.lr = 0x830EFE3C;
	sub_830DEE18(ctx, base);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// li r11,1
	ctx.r11.s64 = 1;
	// lwz r7,112(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 112);
	// lis r10,-32228
	ctx.r10.s64 = -2112094208;
	// lwz r5,100(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 100);
	// stb r11,13(r30)
	PPC_STORE_U8(ctx.r30.u32 + 13, ctx.r11.u8);
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r6,r10,-4792
	ctx.r6.s64 = ctx.r10.s64 + -4792;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r4,292
	ctx.r4.s64 = 292;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x830ee370
	ctx.lr = 0x830EFE6C;
	sub_830EE370(ctx, base);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// lis r11,-32228
	ctx.r11.s64 = -2112094208;
	// addi r3,r31,96
	ctx.r3.s64 = ctx.r31.s64 + 96;
	// addi r11,r11,2016
	ctx.r11.s64 = ctx.r11.s64 + 2016;
	// stw r11,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r11.u32);
	// bl 0x830de178
	ctx.lr = 0x830EFE84;
	sub_830DE178(ctx, base);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
loc_830EFE88:
	// addi r3,r31,192
	ctx.r3.s64 = ctx.r31.s64 + 192;
	// bl 0x8311bee8
	ctx.lr = 0x830EFE90;
	sub_8311BEE8(ctx, base);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// b 0x830f0048
	goto loc_830F0048;
loc_830EFE98:
	// lbz r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 8);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x830eff24
	if (ctx.cr0.eq) goto loc_830EFF24;
	// addi r3,r31,192
	ctx.r3.s64 = ctx.r31.s64 + 192;
	// bl 0x8311b440
	ctx.lr = 0x830EFEAC;
	sub_8311B440(ctx, base);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x830eff24
	if (ctx.cr0.eq) goto loc_830EFF24;
	// lis r11,-32228
	ctx.r11.s64 = -2112094208;
	// lwz r7,220(r30)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r30.u32 + 220);
	// li r6,99
	ctx.r6.s64 = 99;
	// addi r4,r11,10440
	ctx.r4.s64 = ctx.r11.s64 + 10440;
	// li r5,392
	ctx.r5.s64 = 392;
	// addi r3,r31,128
	ctx.r3.s64 = ctx.r31.s64 + 128;
	// bl 0x830dee18
	ctx.lr = 0x830EFED4;
	sub_830DEE18(ctx, base);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// li r11,1
	ctx.r11.s64 = 1;
	// lwz r7,144(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 144);
	// lis r10,-32228
	ctx.r10.s64 = -2112094208;
	// lwz r5,132(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 132);
	// stb r11,13(r30)
	PPC_STORE_U8(ctx.r30.u32 + 13, ctx.r11.u8);
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r6,r10,-4792
	ctx.r6.s64 = ctx.r10.s64 + -4792;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r4,292
	ctx.r4.s64 = 292;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x830ee370
	ctx.lr = 0x830EFF04;
	sub_830EE370(ctx, base);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// lis r11,-32228
	ctx.r11.s64 = -2112094208;
	// addi r3,r31,128
	ctx.r3.s64 = ctx.r31.s64 + 128;
	// addi r11,r11,2016
	ctx.r11.s64 = ctx.r11.s64 + 2016;
	// stw r11,128(r31)
	PPC_STORE_U32(ctx.r31.u32 + 128, ctx.r11.u32);
	// bl 0x830de178
	ctx.lr = 0x830EFF1C;
	sub_830DE178(ctx, base);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// b 0x830efe88
	goto loc_830EFE88;
loc_830EFF24:
	// li r3,72
	ctx.r3.s64 = 72;
	// lwz r4,220(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 220);
	// bl 0x830dd390
	ctx.lr = 0x830EFF30;
	sub_830DD390(ctx, base);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// stw r3,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r3.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x830eff58
	if (ctx.cr6.eq) goto loc_830EFF58;
	// addi r4,r31,192
	ctx.r4.s64 = ctx.r31.s64 + 192;
	// lwz r5,220(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + 220);
	// bl 0x8311b150
	ctx.lr = 0x830EFF4C;
	sub_8311B150(ctx, base);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// b 0x830eff5c
	goto loc_830EFF5C;
loc_830EFF58:
	// li r29,0
	ctx.r29.s64 = 0;
loc_830EFF5C:
	// b 0x830effa4
	goto loc_830EFFA4;
loc_830EFF60:
	// lbz r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 8);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x830effdc
	if (!ctx.cr0.eq) goto loc_830EFFDC;
	// li r3,24
	ctx.r3.s64 = 24;
	// lwz r4,220(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 220);
	// bl 0x830dd390
	ctx.lr = 0x830EFF78;
	sub_830DD390(ctx, base);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// stw r3,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r3.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x830eff9c
	if (ctx.cr6.eq) goto loc_830EFF9C;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// lwz r5,220(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + 220);
	// bl 0x830ddea0
	ctx.lr = 0x830EFF94;
	sub_830DDEA0(ctx, base);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// b 0x830effa0
	goto loc_830EFFA0;
loc_830EFF9C:
	// li r3,0
	ctx.r3.s64 = 0;
loc_830EFFA0:
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
loc_830EFFA4:
	// addi r3,r31,192
	ctx.r3.s64 = ctx.r31.s64 + 192;
	// bl 0x8311bee8
	ctx.lr = 0x830EFFAC;
	sub_8311BEE8(ctx, base);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// stw r29,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r29.u32);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r11,28(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x830EFFCC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r31,80
	ctx.r3.s64 = ctx.r31.s64 + 80;
	// bl 0x8312c778
	ctx.lr = 0x830EFFD8;
	sub_8312C778(ctx, base);
	// b 0x830f0048
	goto loc_830F0048;
loc_830EFFDC:
	// lis r11,-32228
	ctx.r11.s64 = -2112094208;
	// lwz r7,220(r30)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r30.u32 + 220);
	// li r6,99
	ctx.r6.s64 = 99;
	// addi r4,r11,10440
	ctx.r4.s64 = ctx.r11.s64 + 10440;
	// li r5,414
	ctx.r5.s64 = 414;
	// addi r3,r31,160
	ctx.r3.s64 = ctx.r31.s64 + 160;
	// bl 0x830dee18
	ctx.lr = 0x830EFFF8;
	sub_830DEE18(ctx, base);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// li r11,1
	ctx.r11.s64 = 1;
	// lwz r7,176(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 176);
	// lis r10,-32228
	ctx.r10.s64 = -2112094208;
	// lwz r5,164(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 164);
	// stb r11,13(r30)
	PPC_STORE_U8(ctx.r30.u32 + 13, ctx.r11.u8);
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r6,r10,-4792
	ctx.r6.s64 = ctx.r10.s64 + -4792;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r4,292
	ctx.r4.s64 = 292;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x830ee370
	ctx.lr = 0x830F0028;
	sub_830EE370(ctx, base);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// lis r11,-32228
	ctx.r11.s64 = -2112094208;
	// addi r3,r31,160
	ctx.r3.s64 = ctx.r31.s64 + 160;
	// addi r11,r11,2016
	ctx.r11.s64 = ctx.r11.s64 + 2016;
	// stw r11,160(r31)
	PPC_STORE_U32(ctx.r31.u32 + 160, ctx.r11.u32);
	// bl 0x830de178
	ctx.lr = 0x830F0040;
	sub_830DE178(ctx, base);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// b 0x830efe88
	goto loc_830EFE88;
loc_830F0048:
	// addi r1,r31,288
	ctx.r1.s64 = ctx.r31.s64 + 288;
	// b 0x833a01f8
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_830F0050"))) PPC_WEAK_FUNC(sub_830F0050);
PPC_FUNC_IMPL(__imp__sub_830F0050) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lwz r25,17952(r26)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r26.u32 + 17952);
	// lwz r16,11300(r28)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r28.u32 + 11300);
	// addi r31,r12,-288
	ctx.r31.s64 = ctx.r12.s64 + -288;
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r29,308(r31)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r31.u32 + 308);
	// li r11,1
	ctx.r11.s64 = 1;
	// lwz r30,84(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 84);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stb r11,13(r29)
	PPC_STORE_U8(ctx.r29.u32 + 13, ctx.r11.u8);
	// bl 0x830ed1a0
	ctx.lr = 0x830F0080;
	sub_830ED1A0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x830f00ac
	if (!ctx.cr0.eq) goto loc_830F00AC;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r28,16(r30)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// lwz r30,4(r30)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x830F00A4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r4,7
	ctx.r4.s64 = 7;
	// b 0x830f00e8
	goto loc_830F00E8;
loc_830F00AC:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x830ed1a0
	ctx.lr = 0x830F00B4;
	sub_830ED1A0(ctx, base);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// cmpwi cr6,r3,2
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 2, ctx.xer);
	// lwz r28,16(r30)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r30,4(r30)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// blt cr6,0x830f00e0
	if (ctx.cr6.lt) goto loc_830F00E0;
	// bctrl 
	ctx.lr = 0x830F00D8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r4,292
	ctx.r4.s64 = 292;
	// b 0x830f00e8
	goto loc_830F00E8;
loc_830F00E0:
	// bctrl 
	ctx.lr = 0x830F00E4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r4,157
	ctx.r4.s64 = 157;
loc_830F00E8:
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// mr r7,r28
	ctx.r7.u64 = ctx.r28.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x830ee370
	ctx.lr = 0x830F0104;
	sub_830EE370(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lis r3,-31985
	ctx.r3.s64 = -2096168960;
	// addi r3,r3,72
	ctx.r3.s64 = ctx.r3.s64 + 72;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// b 0x833a01f8
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_830F0058"))) PPC_WEAK_FUNC(sub_830F0058);
PPC_FUNC_IMPL(__imp__sub_830F0058) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// addi r31,r12,-288
	ctx.r31.s64 = ctx.r12.s64 + -288;
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r29,308(r31)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r31.u32 + 308);
	// li r11,1
	ctx.r11.s64 = 1;
	// lwz r30,84(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 84);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stb r11,13(r29)
	PPC_STORE_U8(ctx.r29.u32 + 13, ctx.r11.u8);
	// bl 0x830ed1a0
	ctx.lr = 0x830F0080;
	sub_830ED1A0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x830f00ac
	if (!ctx.cr0.eq) goto loc_830F00AC;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r28,16(r30)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// lwz r30,4(r30)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x830F00A4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r4,7
	ctx.r4.s64 = 7;
	// b 0x830f00e8
	goto loc_830F00E8;
loc_830F00AC:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x830ed1a0
	ctx.lr = 0x830F00B4;
	sub_830ED1A0(ctx, base);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// cmpwi cr6,r3,2
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 2, ctx.xer);
	// lwz r28,16(r30)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r30,4(r30)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// blt cr6,0x830f00e0
	if (ctx.cr6.lt) goto loc_830F00E0;
	// bctrl 
	ctx.lr = 0x830F00D8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r4,292
	ctx.r4.s64 = 292;
	// b 0x830f00e8
	goto loc_830F00E8;
loc_830F00E0:
	// bctrl 
	ctx.lr = 0x830F00E4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r4,157
	ctx.r4.s64 = 157;
loc_830F00E8:
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// mr r7,r28
	ctx.r7.u64 = ctx.r28.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x830ee370
	ctx.lr = 0x830F0104;
	sub_830EE370(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lis r3,-31985
	ctx.r3.s64 = -2096168960;
	// addi r3,r3,72
	ctx.r3.s64 = ctx.r3.s64 + 72;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// b 0x833a01f8
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_830F011C"))) PPC_WEAK_FUNC(sub_830F011C);
PPC_FUNC_IMPL(__imp__sub_830F011C) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// addi r31,r12,-288
	ctx.r31.s64 = ctx.r12.s64 + -288;
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r3,r31,192
	ctx.r3.s64 = ctx.r31.s64 + 192;
	// bl 0x8311bee8
	ctx.lr = 0x830F0134;
	sub_8311BEE8(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830F0144"))) PPC_WEAK_FUNC(sub_830F0144);
PPC_FUNC_IMPL(__imp__sub_830F0144) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// addi r31,r12,-288
	ctx.r31.s64 = ctx.r12.s64 + -288;
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,308(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 308);
	// lwz r4,220(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 220);
	// lwz r3,80(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	// bl 0x830dd3e0
	ctx.lr = 0x830F0164;
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

__attribute__((alias("__imp__sub_830F0174"))) PPC_WEAK_FUNC(sub_830F0174);
PPC_FUNC_IMPL(__imp__sub_830F0174) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// addi r31,r12,-288
	ctx.r31.s64 = ctx.r12.s64 + -288;
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r3,r31,96
	ctx.r3.s64 = ctx.r31.s64 + 96;
	// bl 0x830def60
	ctx.lr = 0x830F018C;
	sub_830DEF60(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830F019C"))) PPC_WEAK_FUNC(sub_830F019C);
PPC_FUNC_IMPL(__imp__sub_830F019C) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// addi r31,r12,-288
	ctx.r31.s64 = ctx.r12.s64 + -288;
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r3,r31,128
	ctx.r3.s64 = ctx.r31.s64 + 128;
	// bl 0x830def60
	ctx.lr = 0x830F01B4;
	sub_830DEF60(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830F01C4"))) PPC_WEAK_FUNC(sub_830F01C4);
PPC_FUNC_IMPL(__imp__sub_830F01C4) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// addi r31,r12,-288
	ctx.r31.s64 = ctx.r12.s64 + -288;
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,308(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 308);
	// lwz r4,220(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 220);
	// lwz r3,80(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	// bl 0x830dd3e0
	ctx.lr = 0x830F01E4;
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

__attribute__((alias("__imp__sub_830F01F4"))) PPC_WEAK_FUNC(sub_830F01F4);
PPC_FUNC_IMPL(__imp__sub_830F01F4) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// addi r31,r12,-288
	ctx.r31.s64 = ctx.r12.s64 + -288;
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,308(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 308);
	// lwz r4,220(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 220);
	// lwz r3,80(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	// bl 0x830dd3e0
	ctx.lr = 0x830F0214;
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

__attribute__((alias("__imp__sub_830F0224"))) PPC_WEAK_FUNC(sub_830F0224);
PPC_FUNC_IMPL(__imp__sub_830F0224) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// addi r31,r12,-288
	ctx.r31.s64 = ctx.r12.s64 + -288;
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
	// bl 0x830f4658
	ctx.lr = 0x830F023C;
	sub_830F4658(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830F024C"))) PPC_WEAK_FUNC(sub_830F024C);
PPC_FUNC_IMPL(__imp__sub_830F024C) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// addi r31,r12,-288
	ctx.r31.s64 = ctx.r12.s64 + -288;
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r3,r31,160
	ctx.r3.s64 = ctx.r31.s64 + 160;
	// bl 0x830def60
	ctx.lr = 0x830F0264;
	sub_830DEF60(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830F0274"))) PPC_WEAK_FUNC(sub_830F0274);
PPC_FUNC_IMPL(__imp__sub_830F0274) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_830F0278"))) PPC_WEAK_FUNC(sub_830F0278);
PPC_FUNC_IMPL(__imp__sub_830F0278) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lwz r25,17952(r26)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r26.u32 + 17952);
	// lwz r16,11792(r28)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r28.u32 + 11792);
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
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// lwz r4,220(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 220);
	// bl 0x830d6188
	ctx.lr = 0x830F02A8;
	sub_830D6188(ctx, base);
	// lwz r11,220(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 220);
	// stw r3,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r3.u32);
	// stw r11,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r11.u32);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x830efd78
	ctx.lr = 0x830F02C0;
	sub_830EFD78(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r31,80
	ctx.r3.s64 = ctx.r31.s64 + 80;
	// bl 0x831b3a50
	ctx.lr = 0x830F02CC;
	sub_831B3A50(ctx, base);
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

__attribute__((alias("__imp__sub_830F0280"))) PPC_WEAK_FUNC(sub_830F0280);
PPC_FUNC_IMPL(__imp__sub_830F0280) {
	PPC_FUNC_PROLOGUE();
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
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// lwz r4,220(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 220);
	// bl 0x830d6188
	ctx.lr = 0x830F02A8;
	sub_830D6188(ctx, base);
	// lwz r11,220(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 220);
	// stw r3,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r3.u32);
	// stw r11,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r11.u32);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x830efd78
	ctx.lr = 0x830F02C0;
	sub_830EFD78(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r31,80
	ctx.r3.s64 = ctx.r31.s64 + 80;
	// bl 0x831b3a50
	ctx.lr = 0x830F02CC;
	sub_831B3A50(ctx, base);
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

__attribute__((alias("__imp__sub_830F02E4"))) PPC_WEAK_FUNC(sub_830F02E4);
PPC_FUNC_IMPL(__imp__sub_830F02E4) {
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
	// bl 0x831b4220
	ctx.lr = 0x830F02FC;
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

__attribute__((alias("__imp__sub_830F030C"))) PPC_WEAK_FUNC(sub_830F030C);
PPC_FUNC_IMPL(__imp__sub_830F030C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_830F0310"))) PPC_WEAK_FUNC(sub_830F0310);
PPC_FUNC_IMPL(__imp__sub_830F0310) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lwz r25,17952(r26)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r26.u32 + 17952);
	// lwz r16,11864(r28)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r28.u32 + 11864);
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x833a01ac
	ctx.lr = 0x830F0320;
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
	// bl 0x830edd38
	ctx.lr = 0x830F0334;
	sub_830EDD38(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r31,80
	ctx.r3.s64 = ctx.r31.s64 + 80;
	// bl 0x830fcf80
	ctx.lr = 0x830F0340;
	sub_830FCF80(ctx, base);
	// lis r10,-31827
	ctx.r10.s64 = -2085814272;
	// addi r3,r31,80
	ctx.r3.s64 = ctx.r31.s64 + 80;
	// lwz r11,-4928(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -4928);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,-4928(r10)
	PPC_STORE_U32(ctx.r10.u32 + -4928, ctx.r11.u32);
	// stw r11,80(r30)
	PPC_STORE_U32(ctx.r30.u32 + 80, ctx.r11.u32);
	// bl 0x830fcfb8
	ctx.lr = 0x830F035C;
	sub_830FCFB8(ctx, base);
	// li r3,24
	ctx.r3.s64 = 24;
	// lwz r4,220(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 220);
	// bl 0x830dd390
	ctx.lr = 0x830F0368;
	sub_830DD390(ctx, base);
	// mr. r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// stw r29,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r29.u32);
	// beq 0x830f039c
	if (ctx.cr0.eq) goto loc_830F039C;
	// li r5,1
	ctx.r5.s64 = 1;
	// lwz r6,220(r30)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r30.u32 + 220);
	// li r4,32
	ctx.r4.s64 = 32;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x830edc50
	ctx.lr = 0x830F0388;
	sub_830EDC50(ctx, base);
	// lis r10,-32228
	ctx.r10.s64 = -2112094208;
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
	// addi r10,r10,11104
	ctx.r10.s64 = ctx.r10.s64 + 11104;
	// stw r10,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r10.u32);
	// b 0x830f03a0
	goto loc_830F03A0;
loc_830F039C:
	// li r11,0
	ctx.r11.s64 = 0;
loc_830F03A0:
	// stw r11,88(r30)
	PPC_STORE_U32(ctx.r30.u32 + 88, ctx.r11.u32);
	// li r3,28
	ctx.r3.s64 = 28;
	// lwz r4,220(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 220);
	// bl 0x830dd390
	ctx.lr = 0x830F03B0;
	sub_830DD390(ctx, base);
	// stw r3,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r3.u32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x830f03c8
	if (ctx.cr0.eq) goto loc_830F03C8;
	// lwz r4,220(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 220);
	// bl 0x8311cf60
	ctx.lr = 0x830F03C4;
	sub_8311CF60(ctx, base);
	// b 0x830f03cc
	goto loc_830F03CC;
loc_830F03C8:
	// li r3,0
	ctx.r3.s64 = 0;
loc_830F03CC:
	// stw r3,120(r30)
	PPC_STORE_U32(ctx.r30.u32 + 120, ctx.r3.u32);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r4,r30,432
	ctx.r4.s64 = ctx.r30.s64 + 432;
	// lwz r11,52(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 52);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x830F03E4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r3,220(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 220);
	// lwz r11,76(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 76);
	// rlwinm r4,r11,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x830F0400;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r3,64(r30)
	PPC_STORE_U32(ctx.r30.u32 + 64, ctx.r3.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r11,76(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 76);
	// rlwinm r5,r11,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x833a2b30
	ctx.lr = 0x830F0414;
	sub_833A2B30(ctx, base);
	// lwz r3,220(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 220);
	// li r4,256
	ctx.r4.s64 = 256;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x830F042C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,64(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 64);
	// li r5,256
	ctx.r5.s64 = 256;
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r3,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r3.u32);
	// lwz r11,64(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 64);
	// lwz r3,0(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// bl 0x833a2b30
	ctx.lr = 0x830F0448;
	sub_833A2B30(ctx, base);
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// addi r3,r30,292
	ctx.r3.s64 = ctx.r30.s64 + 292;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x830f0488
	if (ctx.cr6.eq) goto loc_830F0488;
	// lwz r10,4(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// stw r30,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r30.u32);
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x830f0490
	if (!ctx.cr6.lt) goto loc_830F0490;
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x830f0490
	if (ctx.cr6.lt) goto loc_830F0490;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x830de7c0
	ctx.lr = 0x830F0484;
	sub_830DE7C0(ctx, base);
	// b 0x830f0490
	goto loc_830F0490;
loc_830F0488:
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r11.u32);
loc_830F0490:
	// lwz r11,172(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 172);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x830f04c4
	if (ctx.cr6.eq) goto loc_830F04C4;
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r11,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r11.u32);
	// addi r9,r30,128
	ctx.r9.s64 = ctx.r30.s64 + 128;
	// addi r8,r30,224
	ctx.r8.s64 = ctx.r30.s64 + 224;
	// stb r10,17(r30)
	PPC_STORE_U8(ctx.r30.u32 + 17, ctx.r10.u8);
	// stw r30,16(r11)
	PPC_STORE_U32(ctx.r11.u32 + 16, ctx.r30.u32);
	// stw r9,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r9.u32);
	// stw r8,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r8.u32);
	// lwz r10,108(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 108);
	// stw r10,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r10.u32);
loc_830F04C4:
	// addi r1,r31,128
	ctx.r1.s64 = ctx.r31.s64 + 128;
	// b 0x833a01fc
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_830F0318"))) PPC_WEAK_FUNC(sub_830F0318);
PPC_FUNC_IMPL(__imp__sub_830F0318) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x833a01ac
	ctx.lr = 0x830F0320;
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
	// bl 0x830edd38
	ctx.lr = 0x830F0334;
	sub_830EDD38(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r31,80
	ctx.r3.s64 = ctx.r31.s64 + 80;
	// bl 0x830fcf80
	ctx.lr = 0x830F0340;
	sub_830FCF80(ctx, base);
	// lis r10,-31827
	ctx.r10.s64 = -2085814272;
	// addi r3,r31,80
	ctx.r3.s64 = ctx.r31.s64 + 80;
	// lwz r11,-4928(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -4928);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,-4928(r10)
	PPC_STORE_U32(ctx.r10.u32 + -4928, ctx.r11.u32);
	// stw r11,80(r30)
	PPC_STORE_U32(ctx.r30.u32 + 80, ctx.r11.u32);
	// bl 0x830fcfb8
	ctx.lr = 0x830F035C;
	sub_830FCFB8(ctx, base);
	// li r3,24
	ctx.r3.s64 = 24;
	// lwz r4,220(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 220);
	// bl 0x830dd390
	ctx.lr = 0x830F0368;
	sub_830DD390(ctx, base);
	// mr. r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// stw r29,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r29.u32);
	// beq 0x830f039c
	if (ctx.cr0.eq) goto loc_830F039C;
	// li r5,1
	ctx.r5.s64 = 1;
	// lwz r6,220(r30)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r30.u32 + 220);
	// li r4,32
	ctx.r4.s64 = 32;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x830edc50
	ctx.lr = 0x830F0388;
	sub_830EDC50(ctx, base);
	// lis r10,-32228
	ctx.r10.s64 = -2112094208;
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
	// addi r10,r10,11104
	ctx.r10.s64 = ctx.r10.s64 + 11104;
	// stw r10,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r10.u32);
	// b 0x830f03a0
	goto loc_830F03A0;
loc_830F039C:
	// li r11,0
	ctx.r11.s64 = 0;
loc_830F03A0:
	// stw r11,88(r30)
	PPC_STORE_U32(ctx.r30.u32 + 88, ctx.r11.u32);
	// li r3,28
	ctx.r3.s64 = 28;
	// lwz r4,220(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 220);
	// bl 0x830dd390
	ctx.lr = 0x830F03B0;
	sub_830DD390(ctx, base);
	// stw r3,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r3.u32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x830f03c8
	if (ctx.cr0.eq) goto loc_830F03C8;
	// lwz r4,220(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 220);
	// bl 0x8311cf60
	ctx.lr = 0x830F03C4;
	sub_8311CF60(ctx, base);
	// b 0x830f03cc
	goto loc_830F03CC;
loc_830F03C8:
	// li r3,0
	ctx.r3.s64 = 0;
loc_830F03CC:
	// stw r3,120(r30)
	PPC_STORE_U32(ctx.r30.u32 + 120, ctx.r3.u32);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r4,r30,432
	ctx.r4.s64 = ctx.r30.s64 + 432;
	// lwz r11,52(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 52);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x830F03E4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r3,220(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 220);
	// lwz r11,76(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 76);
	// rlwinm r4,r11,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x830F0400;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r3,64(r30)
	PPC_STORE_U32(ctx.r30.u32 + 64, ctx.r3.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r11,76(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 76);
	// rlwinm r5,r11,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x833a2b30
	ctx.lr = 0x830F0414;
	sub_833A2B30(ctx, base);
	// lwz r3,220(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 220);
	// li r4,256
	ctx.r4.s64 = 256;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x830F042C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,64(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 64);
	// li r5,256
	ctx.r5.s64 = 256;
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r3,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r3.u32);
	// lwz r11,64(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 64);
	// lwz r3,0(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// bl 0x833a2b30
	ctx.lr = 0x830F0448;
	sub_833A2B30(ctx, base);
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// addi r3,r30,292
	ctx.r3.s64 = ctx.r30.s64 + 292;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x830f0488
	if (ctx.cr6.eq) goto loc_830F0488;
	// lwz r10,4(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// stw r30,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r30.u32);
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x830f0490
	if (!ctx.cr6.lt) goto loc_830F0490;
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x830f0490
	if (ctx.cr6.lt) goto loc_830F0490;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x830de7c0
	ctx.lr = 0x830F0484;
	sub_830DE7C0(ctx, base);
	// b 0x830f0490
	goto loc_830F0490;
loc_830F0488:
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r11.u32);
loc_830F0490:
	// lwz r11,172(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 172);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x830f04c4
	if (ctx.cr6.eq) goto loc_830F04C4;
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r11,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r11.u32);
	// addi r9,r30,128
	ctx.r9.s64 = ctx.r30.s64 + 128;
	// addi r8,r30,224
	ctx.r8.s64 = ctx.r30.s64 + 224;
	// stb r10,17(r30)
	PPC_STORE_U8(ctx.r30.u32 + 17, ctx.r10.u8);
	// stw r30,16(r11)
	PPC_STORE_U32(ctx.r11.u32 + 16, ctx.r30.u32);
	// stw r9,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r9.u32);
	// stw r8,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r8.u32);
	// lwz r10,108(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 108);
	// stw r10,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r10.u32);
loc_830F04C4:
	// addi r1,r31,128
	ctx.r1.s64 = ctx.r31.s64 + 128;
	// b 0x833a01fc
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_830F04CC"))) PPC_WEAK_FUNC(sub_830F04CC);
PPC_FUNC_IMPL(__imp__sub_830F04CC) {
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
	// lwz r4,220(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 220);
	// lwz r3,80(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	// bl 0x830dd3e0
	ctx.lr = 0x830F04EC;
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

__attribute__((alias("__imp__sub_830F04FC"))) PPC_WEAK_FUNC(sub_830F04FC);
PPC_FUNC_IMPL(__imp__sub_830F04FC) {
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
	// lwz r4,220(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 220);
	// lwz r3,80(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	// bl 0x830dd3e0
	ctx.lr = 0x830F051C;
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

__attribute__((alias("__imp__sub_830F052C"))) PPC_WEAK_FUNC(sub_830F052C);
PPC_FUNC_IMPL(__imp__sub_830F052C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_830F0530"))) PPC_WEAK_FUNC(sub_830F0530);
PPC_FUNC_IMPL(__imp__sub_830F0530) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lwz r25,17952(r26)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r26.u32 + 17952);
	// lwz r16,12004(r28)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r28.u32 + 12004);
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// li r0,0
	ctx.r0.s64 = 0;
	// stw r0,4(r1)
	PPC_STORE_U32(ctx.r1.u32 + 4, ctx.r0.u32);
	// bl 0x833a01a0
	ctx.lr = 0x830F0548;
	__savegprlr_26(ctx, base);
	// addi r31,r1,-160
	ctx.r31.s64 = ctx.r1.s64 + -160;
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r29,r3,224
	ctx.r29.s64 = ctx.r3.s64 + 224;
	// stw r3,180(r31)
	PPC_STORE_U32(ctx.r31.u32 + 180, ctx.r3.u32);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x830e4258
	ctx.lr = 0x830F0564;
	sub_830E4258(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// stw r29,92(r31)
	PPC_STORE_U32(ctx.r31.u32 + 92, ctx.r29.u32);
	// stw r3,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r3.u32);
	// lis r10,-32228
	ctx.r10.s64 = -2112094208;
	// lis r11,-32228
	ctx.r11.s64 = -2112094208;
	// addi r26,r10,-6988
	ctx.r26.s64 = ctx.r10.s64 + -6988;
	// addi r27,r11,-7872
	ctx.r27.s64 = ctx.r11.s64 + -7872;
loc_830F0580:
	// addi r29,r30,128
	ctx.r29.s64 = ctx.r30.s64 + 128;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x830f4f08
	ctx.lr = 0x830F058C;
	sub_830F4F08(ctx, base);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// clrlwi. r11,r3,16
	ctx.r11.u64 = ctx.r3.u32 & 0xFFFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// sth r3,80(r31)
	PPC_STORE_U16(ctx.r31.u32 + 80, ctx.r3.u16);
	// beq 0x830f06d0
	if (ctx.cr0.eq) goto loc_830F06D0;
	// cmplwi cr6,r11,60
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 60, ctx.xer);
	// bne cr6,0x830f062c
	if (!ctx.cr6.eq) goto loc_830F062C;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x830ef0a8
	ctx.lr = 0x830F05B0;
	sub_830EF0A8(ctx, base);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x830f05c8
	if (ctx.cr0.eq) goto loc_830F05C8;
	// li r4,204
	ctx.r4.s64 = 204;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// b 0x830f0614
	goto loc_830F0614;
loc_830F05C8:
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// lwz r3,136(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 136);
	// bl 0x830fa6b0
	ctx.lr = 0x830F05D4;
	sub_830FA6B0(ctx, base);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x830f05ec
	if (ctx.cr0.eq) goto loc_830F05EC;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x830ee4b0
	ctx.lr = 0x830F05E8;
	sub_830EE4B0(ctx, base);
	// b 0x830f06a4
	goto loc_830F06A4;
loc_830F05EC:
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// lwz r3,136(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 136);
	// bl 0x830fa6b0
	ctx.lr = 0x830F05F8;
	sub_830FA6B0(ctx, base);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// beq 0x830f0610
	if (ctx.cr0.eq) goto loc_830F0610;
	// bl 0x830ef610
	ctx.lr = 0x830F060C;
	sub_830EF610(ctx, base);
	// b 0x830f06a4
	goto loc_830F06A4;
loc_830F0610:
	// li r4,206
	ctx.r4.s64 = 206;
loc_830F0614:
	// bl 0x830edff8
	ctx.lr = 0x830F0618;
	sub_830EDFF8(ctx, base);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// li r4,62
	ctx.r4.s64 = 62;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x830ed2b8
	ctx.lr = 0x830F0628;
	sub_830ED2B8(ctx, base);
	// b 0x830f06a4
	goto loc_830F06A4;
loc_830F062C:
	// lis r10,2
	ctx.r10.s64 = 131072;
	// lwz r9,136(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 136);
	// ori r10,r10,32852
	ctx.r10.u64 = ctx.r10.u64 | 32852;
	// lwzx r10,r9,r10
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r10.u32);
	// lbzx r11,r10,r11
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r10.u32 + ctx.r11.u32);
	// rlwinm. r11,r11,0,0,24
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFF80;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x830f06ac
	if (ctx.cr0.eq) goto loc_830F06AC;
	// lwz r11,96(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 96);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x830f069c
	if (ctx.cr6.eq) goto loc_830F069C;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// bl 0x830f4e38
	ctx.lr = 0x830F0660;
	sub_830F4E38(ctx, base);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// lwz r5,0(r28)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// li r11,0
	ctx.r11.s64 = 0;
	// lwz r10,24(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 24);
	// li r6,0
	ctx.r6.s64 = 0;
	// rlwinm r9,r5,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 1) & 0xFFFFFFFE;
	// stw r5,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r5.u32);
	// sthx r11,r9,r10
	PPC_STORE_U16(ctx.r9.u32 + ctx.r10.u32, ctx.r11.u16);
	// lwz r3,96(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 96);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,28(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// lwz r4,24(r28)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r28.u32 + 24);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x830F0698;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// b 0x830f06a4
	goto loc_830F06A4;
loc_830F069C:
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x830f50e0
	ctx.lr = 0x830F06A4;
	sub_830F50E0(ctx, base);
loc_830F06A4:
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// b 0x830f06cc
	goto loc_830F06CC;
loc_830F06AC:
	// li r4,206
	ctx.r4.s64 = 206;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x830edff8
	ctx.lr = 0x830F06B8;
	sub_830EDFF8(ctx, base);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// li r4,62
	ctx.r4.s64 = 62;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x830ed2b8
	ctx.lr = 0x830F06C8;
	sub_830ED2B8(ctx, base);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
loc_830F06CC:
	// b 0x830f0580
	goto loc_830F0580;
loc_830F06D0:
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// lwz r3,92(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 92);
	// bl 0x830e4388
	ctx.lr = 0x830F06DC;
	sub_830E4388(ctx, base);
	// addi r1,r31,160
	ctx.r1.s64 = ctx.r31.s64 + 160;
	// b 0x833a01f0
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_830F0538"))) PPC_WEAK_FUNC(sub_830F0538);
PPC_FUNC_IMPL(__imp__sub_830F0538) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// li r0,0
	ctx.r0.s64 = 0;
	// stw r0,4(r1)
	PPC_STORE_U32(ctx.r1.u32 + 4, ctx.r0.u32);
	// bl 0x833a01a0
	ctx.lr = 0x830F0548;
	__savegprlr_26(ctx, base);
	// addi r31,r1,-160
	ctx.r31.s64 = ctx.r1.s64 + -160;
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r29,r3,224
	ctx.r29.s64 = ctx.r3.s64 + 224;
	// stw r3,180(r31)
	PPC_STORE_U32(ctx.r31.u32 + 180, ctx.r3.u32);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x830e4258
	ctx.lr = 0x830F0564;
	sub_830E4258(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// stw r29,92(r31)
	PPC_STORE_U32(ctx.r31.u32 + 92, ctx.r29.u32);
	// stw r3,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r3.u32);
loc_830F0570:
	// lis r10,-32228
	ctx.r10.s64 = -2112094208;
	// lis r11,-32228
	ctx.r11.s64 = -2112094208;
	// addi r26,r10,-6988
	ctx.r26.s64 = ctx.r10.s64 + -6988;
	// addi r27,r11,-7872
	ctx.r27.s64 = ctx.r11.s64 + -7872;
loc_830F0580:
	// addi r29,r30,128
	ctx.r29.s64 = ctx.r30.s64 + 128;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x830f4f08
	ctx.lr = 0x830F058C;
	sub_830F4F08(ctx, base);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// clrlwi. r11,r3,16
	ctx.r11.u64 = ctx.r3.u32 & 0xFFFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// sth r3,80(r31)
	PPC_STORE_U16(ctx.r31.u32 + 80, ctx.r3.u16);
	// beq 0x830f06d0
	if (ctx.cr0.eq) goto loc_830F06D0;
	// cmplwi cr6,r11,60
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 60, ctx.xer);
	// bne cr6,0x830f062c
	if (!ctx.cr6.eq) goto loc_830F062C;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x830ef0a8
	ctx.lr = 0x830F05B0;
	sub_830EF0A8(ctx, base);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x830f05c8
	if (ctx.cr0.eq) goto loc_830F05C8;
	// li r4,204
	ctx.r4.s64 = 204;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// b 0x830f0614
	goto loc_830F0614;
loc_830F05C8:
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// lwz r3,136(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 136);
	// bl 0x830fa6b0
	ctx.lr = 0x830F05D4;
	sub_830FA6B0(ctx, base);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x830f05ec
	if (ctx.cr0.eq) goto loc_830F05EC;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x830ee4b0
	ctx.lr = 0x830F05E8;
	sub_830EE4B0(ctx, base);
	// b 0x830f06a4
	goto loc_830F06A4;
loc_830F05EC:
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// lwz r3,136(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 136);
	// bl 0x830fa6b0
	ctx.lr = 0x830F05F8;
	sub_830FA6B0(ctx, base);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// beq 0x830f0610
	if (ctx.cr0.eq) goto loc_830F0610;
	// bl 0x830ef610
	ctx.lr = 0x830F060C;
	sub_830EF610(ctx, base);
	// b 0x830f06a4
	goto loc_830F06A4;
loc_830F0610:
	// li r4,206
	ctx.r4.s64 = 206;
loc_830F0614:
	// bl 0x830edff8
	ctx.lr = 0x830F0618;
	sub_830EDFF8(ctx, base);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// li r4,62
	ctx.r4.s64 = 62;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x830ed2b8
	ctx.lr = 0x830F0628;
	sub_830ED2B8(ctx, base);
	// b 0x830f06a4
	goto loc_830F06A4;
loc_830F062C:
	// lis r10,2
	ctx.r10.s64 = 131072;
	// lwz r9,136(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 136);
	// ori r10,r10,32852
	ctx.r10.u64 = ctx.r10.u64 | 32852;
	// lwzx r10,r9,r10
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r10.u32);
	// lbzx r11,r10,r11
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r10.u32 + ctx.r11.u32);
	// rlwinm. r11,r11,0,0,24
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFF80;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x830f06ac
	if (ctx.cr0.eq) goto loc_830F06AC;
	// lwz r11,96(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 96);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x830f069c
	if (ctx.cr6.eq) goto loc_830F069C;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// bl 0x830f4e38
	ctx.lr = 0x830F0660;
	sub_830F4E38(ctx, base);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// lwz r5,0(r28)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// li r11,0
	ctx.r11.s64 = 0;
	// lwz r10,24(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 24);
	// li r6,0
	ctx.r6.s64 = 0;
	// rlwinm r9,r5,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 1) & 0xFFFFFFFE;
	// stw r5,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r5.u32);
	// sthx r11,r9,r10
	PPC_STORE_U16(ctx.r9.u32 + ctx.r10.u32, ctx.r11.u16);
	// lwz r3,96(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 96);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,28(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// lwz r4,24(r28)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r28.u32 + 24);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x830F0698;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// b 0x830f06a4
	goto loc_830F06A4;
loc_830F069C:
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x830f50e0
	ctx.lr = 0x830F06A4;
	sub_830F50E0(ctx, base);
loc_830F06A4:
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// b 0x830f06cc
	goto loc_830F06CC;
loc_830F06AC:
	// li r4,206
	ctx.r4.s64 = 206;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x830edff8
	ctx.lr = 0x830F06B8;
	sub_830EDFF8(ctx, base);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// li r4,62
	ctx.r4.s64 = 62;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x830ed2b8
	ctx.lr = 0x830F06C8;
	sub_830ED2B8(ctx, base);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
loc_830F06CC:
	// b 0x830f0580
	goto loc_830F0580;
loc_830F06D0:
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// lwz r3,92(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 92);
	// bl 0x830e4388
	ctx.lr = 0x830F06DC;
	sub_830E4388(ctx, base);
	// addi r1,r31,160
	ctx.r1.s64 = ctx.r31.s64 + 160;
	// b 0x833a01f0
	__restgprlr_26(ctx, base);
	return;
	// lwz r30,180(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 180);
	// lwz r28,88(r31)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r31.u32 + 88);
	// b 0x830f0570
	goto loc_830F0570;
}

__attribute__((alias("__imp__sub_830F06E4"))) PPC_WEAK_FUNC(sub_830F06E4);
PPC_FUNC_IMPL(__imp__sub_830F06E4) {
	PPC_FUNC_PROLOGUE();
	// lwz r30,180(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 180);
	// lwz r28,88(r31)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r31.u32 + 88);
	// b 0x830f0570
	// ERROR 830F0570
	return;
}

__attribute__((alias("__imp__sub_830F06F0"))) PPC_WEAK_FUNC(sub_830F06F0);
PPC_FUNC_IMPL(__imp__sub_830F06F0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lwz r25,17952(r26)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r26.u32 + 17952);
	// lwz r16,12004(r28)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r28.u32 + 12004);
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
	// li r4,259
	ctx.r4.s64 = 259;
	// lwz r3,180(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 180);
	// bl 0x830edff8
	ctx.lr = 0x830F0714;
	sub_830EDFF8(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lis r3,-31985
	ctx.r3.s64 = -2096168960;
	// addi r3,r3,1764
	ctx.r3.s64 = ctx.r3.s64 + 1764;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// b 0x833a01f0
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_830F06F8"))) PPC_WEAK_FUNC(sub_830F06F8);
PPC_FUNC_IMPL(__imp__sub_830F06F8) {
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
	// li r4,259
	ctx.r4.s64 = 259;
	// lwz r3,180(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 180);
	// bl 0x830edff8
	ctx.lr = 0x830F0714;
	sub_830EDFF8(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lis r3,-31985
	ctx.r3.s64 = -2096168960;
	// addi r3,r3,1764
	ctx.r3.s64 = ctx.r3.s64 + 1764;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// b 0x833a01f0
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_830F072C"))) PPC_WEAK_FUNC(sub_830F072C);
PPC_FUNC_IMPL(__imp__sub_830F072C) {
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
	// addi r3,r31,88
	ctx.r3.s64 = ctx.r31.s64 + 88;
	// bl 0x830d9068
	ctx.lr = 0x830F0744;
	sub_830D9068(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830F0754"))) PPC_WEAK_FUNC(sub_830F0754);
PPC_FUNC_IMPL(__imp__sub_830F0754) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_830F0758"))) PPC_WEAK_FUNC(sub_830F0758);
PPC_FUNC_IMPL(__imp__sub_830F0758) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lwz r25,17952(r26)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r26.u32 + 17952);
	// lwz r16,12308(r28)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r28.u32 + 12308);
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// li r0,0
	ctx.r0.s64 = 0;
	// stw r0,4(r1)
	PPC_STORE_U32(ctx.r1.u32 + 4, ctx.r0.u32);
	// bl 0x833a0190
	ctx.lr = 0x830F0770;
	__savegprlr_22(ctx, base);
	// addi r31,r1,-192
	ctx.r31.s64 = ctx.r1.s64 + -192;
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r29,r3,224
	ctx.r29.s64 = ctx.r3.s64 + 224;
	// stw r3,212(r31)
	PPC_STORE_U32(ctx.r31.u32 + 212, ctx.r3.u32);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// li r22,0
	ctx.r22.s64 = 0;
	// bl 0x830e4258
	ctx.lr = 0x830F0790;
	sub_830E4258(ctx, base);
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// stw r3,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r3.u32);
	// stw r29,92(r31)
	PPC_STORE_U32(ctx.r31.u32 + 92, ctx.r29.u32);
	// lis r11,-32228
	ctx.r11.s64 = -2112094208;
	// lis r10,-32228
	ctx.r10.s64 = -2112094208;
	// lis r9,-32228
	ctx.r9.s64 = -2112094208;
	// addi r25,r11,-7828
	ctx.r25.s64 = ctx.r11.s64 + -7828;
	// addi r24,r10,-7872
	ctx.r24.s64 = ctx.r10.s64 + -7872;
	// addi r23,r9,-6988
	ctx.r23.s64 = ctx.r9.s64 + -6988;
loc_830F07B4:
	// addi r27,r30,128
	ctx.r27.s64 = ctx.r30.s64 + 128;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x830f4f08
	ctx.lr = 0x830F07C0;
	sub_830F4F08(ctx, base);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// clrlwi r28,r3,16
	ctx.r28.u64 = ctx.r3.u32 & 0xFFFF;
	// sth r3,80(r31)
	PPC_STORE_U16(ctx.r31.u32 + 80, ctx.r3.u16);
	// cmplwi cr6,r28,60
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 60, ctx.xer);
	// bne cr6,0x830f092c
	if (!ctx.cr6.eq) goto loc_830F092C;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x830ef0a8
	ctx.lr = 0x830F07E0;
	sub_830EF0A8(ctx, base);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x830f0838
	if (ctx.cr0.eq) goto loc_830F0838;
	// lis r10,1
	ctx.r10.s64 = 65536;
	// lwz r11,136(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 136);
	// ori r10,r10,49164
	ctx.r10.u64 = ctx.r10.u64 | 49164;
	// lwzx r10,r11,r10
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// cmpwi cr6,r10,1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 1, ctx.xer);
	// bne cr6,0x830f0818
	if (!ctx.cr6.eq) goto loc_830F0818;
	// lis r10,1
	ctx.r10.s64 = 65536;
	// ori r10,r10,49160
	ctx.r10.u64 = ctx.r10.u64 | 49160;
	// lwzx r11,r11,r10
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// cmpwi cr6,r11,7
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 7, ctx.xer);
	// beq cr6,0x830f0828
	if (ctx.cr6.eq) goto loc_830F0828;
loc_830F0818:
	// li r4,284
	ctx.r4.s64 = 284;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x830edff8
	ctx.lr = 0x830F0824;
	sub_830EDFF8(ctx, base);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
loc_830F0828:
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x830ee8a8
	ctx.lr = 0x830F0834;
	sub_830EE8A8(ctx, base);
	// b 0x830f09d0
	goto loc_830F09D0;
loc_830F0838:
	// mr r4,r23
	ctx.r4.u64 = ctx.r23.u64;
	// lwz r3,136(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 136);
	// bl 0x830fa6b0
	ctx.lr = 0x830F0844;
	sub_830FA6B0(ctx, base);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x830f085c
	if (ctx.cr0.eq) goto loc_830F085C;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x830ee4b0
	ctx.lr = 0x830F0858;
	sub_830EE4B0(ctx, base);
	// b 0x830f09d0
	goto loc_830F09D0;
loc_830F085C:
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// lwz r3,136(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 136);
	// bl 0x830fa6b0
	ctx.lr = 0x830F0868;
	sub_830FA6B0(ctx, base);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x830f0880
	if (ctx.cr0.eq) goto loc_830F0880;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x830ef610
	ctx.lr = 0x830F087C;
	sub_830EF610(ctx, base);
	// b 0x830f09d0
	goto loc_830F09D0;
loc_830F0880:
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// lwz r3,136(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 136);
	// bl 0x830fa6b0
	ctx.lr = 0x830F088C;
	sub_830FA6B0(ctx, base);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x830f0918
	if (ctx.cr0.eq) goto loc_830F0918;
	// clrlwi. r11,r22,24
	ctx.r11.u64 = ctx.r22.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x830f08b0
	if (ctx.cr0.eq) goto loc_830F08B0;
	// li r4,311
	ctx.r4.s64 = 311;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x830edff8
	ctx.lr = 0x830F08AC;
	sub_830EDFF8(ctx, base);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
loc_830F08B0:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r11,56(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 56);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x830F08C4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// lbz r11,16(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 16);
	// li r22,1
	ctx.r22.s64 = 1;
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x830f07b4
	if (ctx.cr0.eq) goto loc_830F07B4;
	// lwz r3,188(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 188);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,24(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x830F08EC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x830f07b4
	if (!ctx.cr0.eq) goto loc_830F07B4;
	// lwz r3,172(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 172);
	// li r5,1
	ctx.r5.s64 = 1;
	// lbz r4,22(r30)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r30.u32 + 22);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x830F0914;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// b 0x830f09d0
	goto loc_830F09D0;
loc_830F0918:
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x830e4388
	ctx.lr = 0x830F0924;
	sub_830E4388(ctx, base);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// b 0x830f09f0
	// ERROR 830F09F0
	return;
loc_830F092C:
	// lis r11,2
	ctx.r11.s64 = 131072;
	// lwz r10,136(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 136);
	// ori r11,r11,32852
	ctx.r11.u64 = ctx.r11.u64 | 32852;
	// lwzx r11,r10,r11
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// lbzx r11,r11,r28
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + ctx.r28.u32);
	// rlwinm. r11,r11,0,0,24
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFF80;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x830f09ac
	if (ctx.cr0.eq) goto loc_830F09AC;
	// lwz r11,96(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 96);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x830f099c
	if (ctx.cr6.eq) goto loc_830F099C;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x830f4e38
	ctx.lr = 0x830F0960;
	sub_830F4E38(ctx, base);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// lwz r5,0(r26)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// li r11,0
	ctx.r11.s64 = 0;
	// lwz r10,24(r26)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r26.u32 + 24);
	// li r6,0
	ctx.r6.s64 = 0;
	// rlwinm r9,r5,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 1) & 0xFFFFFFFE;
	// stw r5,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r5.u32);
	// sthx r11,r9,r10
	PPC_STORE_U16(ctx.r9.u32 + ctx.r10.u32, ctx.r11.u16);
	// lwz r3,96(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 96);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,28(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// lwz r4,24(r26)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r26.u32 + 24);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x830F0998;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// b 0x830f09d0
	goto loc_830F09D0;
loc_830F099C:
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x830f50e0
	ctx.lr = 0x830F09A8;
	sub_830F50E0(ctx, base);
	// b 0x830f09d0
	goto loc_830F09D0;
loc_830F09AC:
	// li r4,186
	ctx.r4.s64 = 186;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x830edff8
	ctx.lr = 0x830F09B8;
	sub_830EDFF8(ctx, base);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// beq cr6,0x830f09d8
	if (ctx.cr6.eq) goto loc_830F09D8;
	// li r4,62
	ctx.r4.s64 = 62;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x830ed2b8
	ctx.lr = 0x830F09D0;
	sub_830ED2B8(ctx, base);
loc_830F09D0:
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// b 0x830f07b4
	goto loc_830F07B4;
loc_830F09D8:
	// b 0x830f09e4
	// ERROR 830F09E4
	return;
}

__attribute__((alias("__imp__sub_830F0760"))) PPC_WEAK_FUNC(sub_830F0760);
PPC_FUNC_IMPL(__imp__sub_830F0760) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// li r0,0
	ctx.r0.s64 = 0;
	// stw r0,4(r1)
	PPC_STORE_U32(ctx.r1.u32 + 4, ctx.r0.u32);
	// bl 0x833a0190
	ctx.lr = 0x830F0770;
	__savegprlr_22(ctx, base);
	// addi r31,r1,-192
	ctx.r31.s64 = ctx.r1.s64 + -192;
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r29,r3,224
	ctx.r29.s64 = ctx.r3.s64 + 224;
	// stw r3,212(r31)
	PPC_STORE_U32(ctx.r31.u32 + 212, ctx.r3.u32);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// li r22,0
	ctx.r22.s64 = 0;
	// bl 0x830e4258
	ctx.lr = 0x830F0790;
	sub_830E4258(ctx, base);
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// stw r3,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r3.u32);
	// stw r29,92(r31)
	PPC_STORE_U32(ctx.r31.u32 + 92, ctx.r29.u32);
	// lis r11,-32228
	ctx.r11.s64 = -2112094208;
	// lis r10,-32228
	ctx.r10.s64 = -2112094208;
	// lis r9,-32228
	ctx.r9.s64 = -2112094208;
	// addi r25,r11,-7828
	ctx.r25.s64 = ctx.r11.s64 + -7828;
	// addi r24,r10,-7872
	ctx.r24.s64 = ctx.r10.s64 + -7872;
	// addi r23,r9,-6988
	ctx.r23.s64 = ctx.r9.s64 + -6988;
loc_830F07B4:
	// addi r27,r30,128
	ctx.r27.s64 = ctx.r30.s64 + 128;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x830f4f08
	ctx.lr = 0x830F07C0;
	sub_830F4F08(ctx, base);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// clrlwi r28,r3,16
	ctx.r28.u64 = ctx.r3.u32 & 0xFFFF;
	// sth r3,80(r31)
	PPC_STORE_U16(ctx.r31.u32 + 80, ctx.r3.u16);
	// cmplwi cr6,r28,60
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 60, ctx.xer);
	// bne cr6,0x830f092c
	if (!ctx.cr6.eq) goto loc_830F092C;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x830ef0a8
	ctx.lr = 0x830F07E0;
	sub_830EF0A8(ctx, base);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x830f0838
	if (ctx.cr0.eq) goto loc_830F0838;
	// lis r10,1
	ctx.r10.s64 = 65536;
	// lwz r11,136(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 136);
	// ori r10,r10,49164
	ctx.r10.u64 = ctx.r10.u64 | 49164;
	// lwzx r10,r11,r10
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// cmpwi cr6,r10,1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 1, ctx.xer);
	// bne cr6,0x830f0818
	if (!ctx.cr6.eq) goto loc_830F0818;
	// lis r10,1
	ctx.r10.s64 = 65536;
	// ori r10,r10,49160
	ctx.r10.u64 = ctx.r10.u64 | 49160;
	// lwzx r11,r11,r10
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// cmpwi cr6,r11,7
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 7, ctx.xer);
	// beq cr6,0x830f0828
	if (ctx.cr6.eq) goto loc_830F0828;
loc_830F0818:
	// li r4,284
	ctx.r4.s64 = 284;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x830edff8
	ctx.lr = 0x830F0824;
	sub_830EDFF8(ctx, base);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
loc_830F0828:
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x830ee8a8
	ctx.lr = 0x830F0834;
	sub_830EE8A8(ctx, base);
	// b 0x830f09d0
	goto loc_830F09D0;
loc_830F0838:
	// mr r4,r23
	ctx.r4.u64 = ctx.r23.u64;
	// lwz r3,136(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 136);
	// bl 0x830fa6b0
	ctx.lr = 0x830F0844;
	sub_830FA6B0(ctx, base);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x830f085c
	if (ctx.cr0.eq) goto loc_830F085C;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x830ee4b0
	ctx.lr = 0x830F0858;
	sub_830EE4B0(ctx, base);
	// b 0x830f09d0
	goto loc_830F09D0;
loc_830F085C:
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// lwz r3,136(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 136);
	// bl 0x830fa6b0
	ctx.lr = 0x830F0868;
	sub_830FA6B0(ctx, base);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x830f0880
	if (ctx.cr0.eq) goto loc_830F0880;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x830ef610
	ctx.lr = 0x830F087C;
	sub_830EF610(ctx, base);
	// b 0x830f09d0
	goto loc_830F09D0;
loc_830F0880:
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// lwz r3,136(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 136);
	// bl 0x830fa6b0
	ctx.lr = 0x830F088C;
	sub_830FA6B0(ctx, base);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x830f0918
	if (ctx.cr0.eq) goto loc_830F0918;
	// clrlwi. r11,r22,24
	ctx.r11.u64 = ctx.r22.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x830f08b0
	if (ctx.cr0.eq) goto loc_830F08B0;
	// li r4,311
	ctx.r4.s64 = 311;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x830edff8
	ctx.lr = 0x830F08AC;
	sub_830EDFF8(ctx, base);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
loc_830F08B0:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r11,56(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 56);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x830F08C4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// lbz r11,16(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 16);
	// li r22,1
	ctx.r22.s64 = 1;
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x830f07b4
	if (ctx.cr0.eq) goto loc_830F07B4;
	// lwz r3,188(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 188);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,24(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x830F08EC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x830f07b4
	if (!ctx.cr0.eq) goto loc_830F07B4;
	// lwz r3,172(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 172);
	// li r5,1
	ctx.r5.s64 = 1;
	// lbz r4,22(r30)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r30.u32 + 22);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x830F0914;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// b 0x830f09d0
	goto loc_830F09D0;
loc_830F0918:
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x830e4388
	ctx.lr = 0x830F0924;
	sub_830E4388(ctx, base);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// b 0x830f09f0
	goto loc_830F09F0;
loc_830F092C:
	// lis r11,2
	ctx.r11.s64 = 131072;
	// lwz r10,136(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 136);
	// ori r11,r11,32852
	ctx.r11.u64 = ctx.r11.u64 | 32852;
	// lwzx r11,r10,r11
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// lbzx r11,r11,r28
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + ctx.r28.u32);
	// rlwinm. r11,r11,0,0,24
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFF80;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x830f09ac
	if (ctx.cr0.eq) goto loc_830F09AC;
	// lwz r11,96(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 96);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x830f099c
	if (ctx.cr6.eq) goto loc_830F099C;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x830f4e38
	ctx.lr = 0x830F0960;
	sub_830F4E38(ctx, base);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// lwz r5,0(r26)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// li r11,0
	ctx.r11.s64 = 0;
	// lwz r10,24(r26)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r26.u32 + 24);
	// li r6,0
	ctx.r6.s64 = 0;
	// rlwinm r9,r5,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 1) & 0xFFFFFFFE;
	// stw r5,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r5.u32);
	// sthx r11,r9,r10
	PPC_STORE_U16(ctx.r9.u32 + ctx.r10.u32, ctx.r11.u16);
	// lwz r3,96(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 96);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,28(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// lwz r4,24(r26)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r26.u32 + 24);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x830F0998;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// b 0x830f09d0
	goto loc_830F09D0;
loc_830F099C:
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x830f50e0
	ctx.lr = 0x830F09A8;
	sub_830F50E0(ctx, base);
	// b 0x830f09d0
	goto loc_830F09D0;
loc_830F09AC:
	// li r4,186
	ctx.r4.s64 = 186;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x830edff8
	ctx.lr = 0x830F09B8;
	sub_830EDFF8(ctx, base);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// beq cr6,0x830f09d8
	if (ctx.cr6.eq) goto loc_830F09D8;
	// li r4,62
	ctx.r4.s64 = 62;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x830ed2b8
	ctx.lr = 0x830F09D0;
	sub_830ED2B8(ctx, base);
loc_830F09D0:
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// b 0x830f07b4
	goto loc_830F07B4;
loc_830F09D8:
	// b 0x830f09e4
	goto loc_830F09E4;
	// lwz r29,92(r31)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r31.u32 + 92);
	// lwz r26,88(r31)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r31.u32 + 88);
loc_830F09E4:
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x830e4388
	ctx.lr = 0x830F09F0;
	sub_830E4388(ctx, base);
loc_830F09F0:
	// addi r1,r31,192
	ctx.r1.s64 = ctx.r31.s64 + 192;
	// b 0x833a01e0
	__restgprlr_22(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_830F09DC"))) PPC_WEAK_FUNC(sub_830F09DC);
PPC_FUNC_IMPL(__imp__sub_830F09DC) {
	PPC_FUNC_PROLOGUE();
	// lwz r29,92(r31)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r31.u32 + 92);
	// lwz r26,88(r31)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r31.u32 + 88);
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x830e4388
	ctx.lr = 0x830F09F0;
	sub_830E4388(ctx, base);
	// addi r1,r31,192
	ctx.r1.s64 = ctx.r31.s64 + 192;
	// b 0x833a01e0
	__restgprlr_22(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_830F09F8"))) PPC_WEAK_FUNC(sub_830F09F8);
PPC_FUNC_IMPL(__imp__sub_830F09F8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lwz r25,17952(r26)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r26.u32 + 17952);
	// lwz r16,12308(r28)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r28.u32 + 12308);
	// addi r31,r12,-192
	ctx.r31.s64 = ctx.r12.s64 + -192;
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
	// li r8,0
	ctx.r8.s64 = 0;
	// lwz r3,212(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 212);
	// addi r5,r11,12232
	ctx.r5.s64 = ctx.r11.s64 + 12232;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r4,255
	ctx.r4.s64 = 255;
	// bl 0x830ee238
	ctx.lr = 0x830F0A30;
	sub_830EE238(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lis r3,-31985
	ctx.r3.s64 = -2096168960;
	// addi r3,r3,2524
	ctx.r3.s64 = ctx.r3.s64 + 2524;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// b 0x833a01e0
	__restgprlr_22(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_830F0A00"))) PPC_WEAK_FUNC(sub_830F0A00);
PPC_FUNC_IMPL(__imp__sub_830F0A00) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// addi r31,r12,-192
	ctx.r31.s64 = ctx.r12.s64 + -192;
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
	// li r8,0
	ctx.r8.s64 = 0;
	// lwz r3,212(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 212);
	// addi r5,r11,12232
	ctx.r5.s64 = ctx.r11.s64 + 12232;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r4,255
	ctx.r4.s64 = 255;
	// bl 0x830ee238
	ctx.lr = 0x830F0A30;
	sub_830EE238(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lis r3,-31985
	ctx.r3.s64 = -2096168960;
	// addi r3,r3,2524
	ctx.r3.s64 = ctx.r3.s64 + 2524;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// b 0x833a01e0
	__restgprlr_22(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_830F0A48"))) PPC_WEAK_FUNC(sub_830F0A48);
PPC_FUNC_IMPL(__imp__sub_830F0A48) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// addi r31,r12,-192
	ctx.r31.s64 = ctx.r12.s64 + -192;
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
	// bl 0x830d9068
	ctx.lr = 0x830F0A60;
	sub_830D9068(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830F0A70"))) PPC_WEAK_FUNC(sub_830F0A70);
PPC_FUNC_IMPL(__imp__sub_830F0A70) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lwz r25,17952(r26)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r26.u32 + 17952);
	// lwz r16,12732(r28)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r28.u32 + 12732);
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// li r0,0
	ctx.r0.s64 = 0;
	// stw r0,4(r1)
	PPC_STORE_U32(ctx.r1.u32 + 4, ctx.r0.u32);
	// bl 0x833a01a0
	ctx.lr = 0x830F0A88;
	__savegprlr_26(ctx, base);
	// addi r31,r1,-352
	ctx.r31.s64 = ctx.r1.s64 + -352;
	// stwu r1,-352(r1)
	ea = -352 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,104(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 104);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// stw r3,372(r31)
	PPC_STORE_U32(ctx.r31.u32 + 372, ctx.r3.u32);
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// mr r27,r5
	ctx.r27.u64 = ctx.r5.u64;
	// mr r26,r6
	ctx.r26.u64 = ctx.r6.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x830f0b0c
	if (ctx.cr6.eq) goto loc_830F0B0C;
	// addi r29,r3,128
	ctx.r29.s64 = ctx.r3.s64 + 128;
	// addi r4,r31,272
	ctx.r4.s64 = ctx.r31.s64 + 272;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x830f52b8
	ctx.lr = 0x830F0AC0;
	sub_830F52B8(ctx, base);
	// lis r11,-32228
	ctx.r11.s64 = -2112094208;
	// li r10,4
	ctx.r10.s64 = 4;
	// stw r28,104(r31)
	PPC_STORE_U32(ctx.r31.u32 + 104, ctx.r28.u32);
	// addi r11,r11,-5740
	ctx.r11.s64 = ctx.r11.s64 + -5740;
	// stw r29,116(r31)
	PPC_STORE_U32(ctx.r31.u32 + 116, ctx.r29.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r10,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r10.u32);
	// stw r11,100(r31)
	PPC_STORE_U32(ctx.r31.u32 + 100, ctx.r11.u32);
	// addi r4,r31,96
	ctx.r4.s64 = ctx.r31.s64 + 96;
	// stw r9,112(r31)
	PPC_STORE_U32(ctx.r31.u32 + 112, ctx.r9.u32);
	// lwz r3,104(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 104);
	// lwz r11,272(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 272);
	// stw r11,108(r31)
	PPC_STORE_U32(ctx.r31.u32 + 108, ctx.r11.u32);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,16(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x830F0B04;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr. r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// bne 0x830f0d2c
	if (!ctx.cr0.eq) goto loc_830F0D2C;
loc_830F0B0C:
	// lbz r11,29(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 29);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x830f0dd8
	if (!ctx.cr0.eq) goto loc_830F0DD8;
	// addi r3,r31,224
	ctx.r3.s64 = ctx.r31.s64 + 224;
	// lwz r4,220(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 220);
	// bl 0x8311b358
	ctx.lr = 0x830F0B24;
	sub_8311B358(ctx, base);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// addi r4,r31,224
	ctx.r4.s64 = ctx.r31.s64 + 224;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x8311c318
	ctx.lr = 0x830F0B34;
	sub_8311C318(ctx, base);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x830f0cdc
	if (ctx.cr0.eq) goto loc_830F0CDC;
	// addi r3,r31,224
	ctx.r3.s64 = ctx.r31.s64 + 224;
	// bl 0x8311b408
	ctx.lr = 0x830F0B48;
	sub_8311B408(ctx, base);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x830f0c14
	if (ctx.cr0.eq) goto loc_830F0C14;
	// lbz r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 8);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x830f0b9c
	if (!ctx.cr0.eq) goto loc_830F0B9C;
	// li r3,24
	ctx.r3.s64 = 24;
	// lwz r4,220(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 220);
	// bl 0x830dd390
	ctx.lr = 0x830F0B6C;
	sub_830DD390(ctx, base);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// stw r3,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r3.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x830f0b94
	if (ctx.cr6.eq) goto loc_830F0B94;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// lwz r5,220(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + 220);
	// bl 0x830ddea0
	ctx.lr = 0x830F0B88;
	sub_830DDEA0(ctx, base);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// b 0x830f0b98
	goto loc_830F0B98;
loc_830F0B94:
	// li r29,0
	ctx.r29.s64 = 0;
loc_830F0B98:
	// b 0x830f0d20
	goto loc_830F0D20;
loc_830F0B9C:
	// lis r11,-32228
	ctx.r11.s64 = -2112094208;
	// lwz r7,220(r30)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r30.u32 + 220);
	// li r6,103
	ctx.r6.s64 = 103;
	// addi r4,r11,10440
	ctx.r4.s64 = ctx.r11.s64 + 10440;
	// li r5,1760
	ctx.r5.s64 = 1760;
	// addi r3,r31,128
	ctx.r3.s64 = ctx.r31.s64 + 128;
	// bl 0x830dee18
	ctx.lr = 0x830F0BB8;
	sub_830DEE18(ctx, base);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// li r11,1
	ctx.r11.s64 = 1;
	// lwz r7,144(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 144);
	// lis r10,-32228
	ctx.r10.s64 = -2112094208;
	// lwz r5,132(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 132);
	// stb r11,13(r30)
	PPC_STORE_U8(ctx.r30.u32 + 13, ctx.r11.u8);
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r6,r10,-4792
	ctx.r6.s64 = ctx.r10.s64 + -4792;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r4,292
	ctx.r4.s64 = 292;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x830ee370
	ctx.lr = 0x830F0BE8;
	sub_830EE370(ctx, base);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// lis r11,-32228
	ctx.r11.s64 = -2112094208;
	// addi r3,r31,128
	ctx.r3.s64 = ctx.r31.s64 + 128;
	// addi r11,r11,2016
	ctx.r11.s64 = ctx.r11.s64 + 2016;
	// stw r11,128(r31)
	PPC_STORE_U32(ctx.r31.u32 + 128, ctx.r11.u32);
	// bl 0x830de178
	ctx.lr = 0x830F0C00;
	sub_830DE178(ctx, base);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
loc_830F0C04:
	// addi r3,r31,224
	ctx.r3.s64 = ctx.r31.s64 + 224;
	// bl 0x8311bee8
	ctx.lr = 0x830F0C0C;
	sub_8311BEE8(ctx, base);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// b 0x830f0dd8
	goto loc_830F0DD8;
loc_830F0C14:
	// lbz r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 8);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x830f0ca0
	if (ctx.cr0.eq) goto loc_830F0CA0;
	// addi r3,r31,224
	ctx.r3.s64 = ctx.r31.s64 + 224;
	// bl 0x8311b440
	ctx.lr = 0x830F0C28;
	sub_8311B440(ctx, base);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x830f0ca0
	if (ctx.cr0.eq) goto loc_830F0CA0;
	// lis r11,-32228
	ctx.r11.s64 = -2112094208;
	// lwz r7,220(r30)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r30.u32 + 220);
	// li r6,99
	ctx.r6.s64 = 99;
	// addi r4,r11,10440
	ctx.r4.s64 = ctx.r11.s64 + 10440;
	// li r5,1775
	ctx.r5.s64 = 1775;
	// addi r3,r31,160
	ctx.r3.s64 = ctx.r31.s64 + 160;
	// bl 0x830dee18
	ctx.lr = 0x830F0C50;
	sub_830DEE18(ctx, base);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// li r11,1
	ctx.r11.s64 = 1;
	// lwz r7,176(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 176);
	// lis r10,-32228
	ctx.r10.s64 = -2112094208;
	// lwz r5,164(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 164);
	// stb r11,13(r30)
	PPC_STORE_U8(ctx.r30.u32 + 13, ctx.r11.u8);
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r6,r10,-4792
	ctx.r6.s64 = ctx.r10.s64 + -4792;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r4,292
	ctx.r4.s64 = 292;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x830ee370
	ctx.lr = 0x830F0C80;
	sub_830EE370(ctx, base);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// lis r11,-32228
	ctx.r11.s64 = -2112094208;
	// addi r3,r31,160
	ctx.r3.s64 = ctx.r31.s64 + 160;
	// addi r11,r11,2016
	ctx.r11.s64 = ctx.r11.s64 + 2016;
	// stw r11,160(r31)
	PPC_STORE_U32(ctx.r31.u32 + 160, ctx.r11.u32);
	// bl 0x830de178
	ctx.lr = 0x830F0C98;
	sub_830DE178(ctx, base);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// b 0x830f0c04
	goto loc_830F0C04;
loc_830F0CA0:
	// li r3,72
	ctx.r3.s64 = 72;
	// lwz r4,220(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 220);
	// bl 0x830dd390
	ctx.lr = 0x830F0CAC;
	sub_830DD390(ctx, base);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// stw r3,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r3.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x830f0cd4
	if (ctx.cr6.eq) goto loc_830F0CD4;
	// addi r4,r31,224
	ctx.r4.s64 = ctx.r31.s64 + 224;
	// lwz r5,220(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + 220);
	// bl 0x8311b150
	ctx.lr = 0x830F0CC8;
	sub_8311B150(ctx, base);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// b 0x830f0cd8
	goto loc_830F0CD8;
loc_830F0CD4:
	// li r29,0
	ctx.r29.s64 = 0;
loc_830F0CD8:
	// b 0x830f0d20
	goto loc_830F0D20;
loc_830F0CDC:
	// lbz r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 8);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x830f0d6c
	if (!ctx.cr0.eq) goto loc_830F0D6C;
	// li r3,24
	ctx.r3.s64 = 24;
	// lwz r4,220(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 220);
	// bl 0x830dd390
	ctx.lr = 0x830F0CF4;
	sub_830DD390(ctx, base);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// stw r3,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r3.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x830f0d1c
	if (ctx.cr6.eq) goto loc_830F0D1C;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// lwz r5,220(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + 220);
	// bl 0x830ddea0
	ctx.lr = 0x830F0D10;
	sub_830DDEA0(ctx, base);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// b 0x830f0d20
	goto loc_830F0D20;
loc_830F0D1C:
	// li r29,0
	ctx.r29.s64 = 0;
loc_830F0D20:
	// addi r3,r31,224
	ctx.r3.s64 = ctx.r31.s64 + 224;
	// bl 0x8311bee8
	ctx.lr = 0x830F0D28;
	sub_8311BEE8(ctx, base);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
loc_830F0D2C:
	// stw r29,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r29.u32);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r6,r26
	ctx.r6.u64 = ctx.r26.u64;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r11,36(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x830F0D50;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r31,80
	ctx.r3.s64 = ctx.r31.s64 + 80;
	// bl 0x8312c778
	ctx.lr = 0x830F0D60;
	sub_8312C778(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
loc_830F0D64:
	// addi r1,r31,352
	ctx.r1.s64 = ctx.r31.s64 + 352;
	// b 0x833a01f0
	__restgprlr_26(ctx, base);
	return;
loc_830F0D6C:
	// lis r11,-32228
	ctx.r11.s64 = -2112094208;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r4,r11,10440
	ctx.r4.s64 = ctx.r11.s64 + 10440;
	// li r6,99
	ctx.r6.s64 = 99;
	// li r5,1797
	ctx.r5.s64 = 1797;
	// addi r3,r31,192
	ctx.r3.s64 = ctx.r31.s64 + 192;
	// bl 0x830dee18
	ctx.lr = 0x830F0D88;
	sub_830DEE18(ctx, base);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// li r11,1
	ctx.r11.s64 = 1;
	// lwz r7,208(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 208);
	// lis r10,-32228
	ctx.r10.s64 = -2112094208;
	// lwz r5,196(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 196);
	// stb r11,13(r30)
	PPC_STORE_U8(ctx.r30.u32 + 13, ctx.r11.u8);
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r6,r10,-4792
	ctx.r6.s64 = ctx.r10.s64 + -4792;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r4,292
	ctx.r4.s64 = 292;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x830ee370
	ctx.lr = 0x830F0DB8;
	sub_830EE370(ctx, base);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// lis r11,-32228
	ctx.r11.s64 = -2112094208;
	// addi r3,r31,192
	ctx.r3.s64 = ctx.r31.s64 + 192;
	// addi r11,r11,2016
	ctx.r11.s64 = ctx.r11.s64 + 2016;
	// stw r11,192(r31)
	PPC_STORE_U32(ctx.r31.u32 + 192, ctx.r11.u32);
	// bl 0x830de178
	ctx.lr = 0x830F0DD0;
	sub_830DE178(ctx, base);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// b 0x830f0c04
	goto loc_830F0C04;
loc_830F0DD8:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x830f0d64
	goto loc_830F0D64;
}

__attribute__((alias("__imp__sub_830F0A78"))) PPC_WEAK_FUNC(sub_830F0A78);
PPC_FUNC_IMPL(__imp__sub_830F0A78) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// li r0,0
	ctx.r0.s64 = 0;
	// stw r0,4(r1)
	PPC_STORE_U32(ctx.r1.u32 + 4, ctx.r0.u32);
	// bl 0x833a01a0
	ctx.lr = 0x830F0A88;
	__savegprlr_26(ctx, base);
	// addi r31,r1,-352
	ctx.r31.s64 = ctx.r1.s64 + -352;
	// stwu r1,-352(r1)
	ea = -352 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,104(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 104);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// stw r3,372(r31)
	PPC_STORE_U32(ctx.r31.u32 + 372, ctx.r3.u32);
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// mr r27,r5
	ctx.r27.u64 = ctx.r5.u64;
	// mr r26,r6
	ctx.r26.u64 = ctx.r6.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x830f0b0c
	if (ctx.cr6.eq) goto loc_830F0B0C;
	// addi r29,r3,128
	ctx.r29.s64 = ctx.r3.s64 + 128;
	// addi r4,r31,272
	ctx.r4.s64 = ctx.r31.s64 + 272;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x830f52b8
	ctx.lr = 0x830F0AC0;
	sub_830F52B8(ctx, base);
	// lis r11,-32228
	ctx.r11.s64 = -2112094208;
	// li r10,4
	ctx.r10.s64 = 4;
	// stw r28,104(r31)
	PPC_STORE_U32(ctx.r31.u32 + 104, ctx.r28.u32);
	// addi r11,r11,-5740
	ctx.r11.s64 = ctx.r11.s64 + -5740;
	// stw r29,116(r31)
	PPC_STORE_U32(ctx.r31.u32 + 116, ctx.r29.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r10,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r10.u32);
	// stw r11,100(r31)
	PPC_STORE_U32(ctx.r31.u32 + 100, ctx.r11.u32);
	// addi r4,r31,96
	ctx.r4.s64 = ctx.r31.s64 + 96;
	// stw r9,112(r31)
	PPC_STORE_U32(ctx.r31.u32 + 112, ctx.r9.u32);
	// lwz r3,104(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 104);
	// lwz r11,272(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 272);
	// stw r11,108(r31)
	PPC_STORE_U32(ctx.r31.u32 + 108, ctx.r11.u32);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,16(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x830F0B04;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr. r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// bne 0x830f0d2c
	if (!ctx.cr0.eq) goto loc_830F0D2C;
loc_830F0B0C:
	// lbz r11,29(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 29);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x830f0dd8
	if (!ctx.cr0.eq) goto loc_830F0DD8;
	// addi r3,r31,224
	ctx.r3.s64 = ctx.r31.s64 + 224;
	// lwz r4,220(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 220);
	// bl 0x8311b358
	ctx.lr = 0x830F0B24;
	sub_8311B358(ctx, base);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// addi r4,r31,224
	ctx.r4.s64 = ctx.r31.s64 + 224;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x8311c318
	ctx.lr = 0x830F0B34;
	sub_8311C318(ctx, base);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x830f0cdc
	if (ctx.cr0.eq) goto loc_830F0CDC;
	// addi r3,r31,224
	ctx.r3.s64 = ctx.r31.s64 + 224;
	// bl 0x8311b408
	ctx.lr = 0x830F0B48;
	sub_8311B408(ctx, base);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x830f0c14
	if (ctx.cr0.eq) goto loc_830F0C14;
	// lbz r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 8);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x830f0b9c
	if (!ctx.cr0.eq) goto loc_830F0B9C;
	// li r3,24
	ctx.r3.s64 = 24;
	// lwz r4,220(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 220);
	// bl 0x830dd390
	ctx.lr = 0x830F0B6C;
	sub_830DD390(ctx, base);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// stw r3,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r3.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x830f0b94
	if (ctx.cr6.eq) goto loc_830F0B94;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// lwz r5,220(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + 220);
	// bl 0x830ddea0
	ctx.lr = 0x830F0B88;
	sub_830DDEA0(ctx, base);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// b 0x830f0b98
	goto loc_830F0B98;
loc_830F0B94:
	// li r29,0
	ctx.r29.s64 = 0;
loc_830F0B98:
	// b 0x830f0d20
	goto loc_830F0D20;
loc_830F0B9C:
	// lis r11,-32228
	ctx.r11.s64 = -2112094208;
	// lwz r7,220(r30)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r30.u32 + 220);
	// li r6,103
	ctx.r6.s64 = 103;
	// addi r4,r11,10440
	ctx.r4.s64 = ctx.r11.s64 + 10440;
	// li r5,1760
	ctx.r5.s64 = 1760;
	// addi r3,r31,128
	ctx.r3.s64 = ctx.r31.s64 + 128;
	// bl 0x830dee18
	ctx.lr = 0x830F0BB8;
	sub_830DEE18(ctx, base);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// li r11,1
	ctx.r11.s64 = 1;
	// lwz r7,144(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 144);
	// lis r10,-32228
	ctx.r10.s64 = -2112094208;
	// lwz r5,132(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 132);
	// stb r11,13(r30)
	PPC_STORE_U8(ctx.r30.u32 + 13, ctx.r11.u8);
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r6,r10,-4792
	ctx.r6.s64 = ctx.r10.s64 + -4792;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r4,292
	ctx.r4.s64 = 292;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x830ee370
	ctx.lr = 0x830F0BE8;
	sub_830EE370(ctx, base);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// lis r11,-32228
	ctx.r11.s64 = -2112094208;
	// addi r3,r31,128
	ctx.r3.s64 = ctx.r31.s64 + 128;
	// addi r11,r11,2016
	ctx.r11.s64 = ctx.r11.s64 + 2016;
	// stw r11,128(r31)
	PPC_STORE_U32(ctx.r31.u32 + 128, ctx.r11.u32);
	// bl 0x830de178
	ctx.lr = 0x830F0C00;
	sub_830DE178(ctx, base);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
loc_830F0C04:
	// addi r3,r31,224
	ctx.r3.s64 = ctx.r31.s64 + 224;
	// bl 0x8311bee8
	ctx.lr = 0x830F0C0C;
	sub_8311BEE8(ctx, base);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// b 0x830f0dd8
	goto loc_830F0DD8;
loc_830F0C14:
	// lbz r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 8);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x830f0ca0
	if (ctx.cr0.eq) goto loc_830F0CA0;
	// addi r3,r31,224
	ctx.r3.s64 = ctx.r31.s64 + 224;
	// bl 0x8311b440
	ctx.lr = 0x830F0C28;
	sub_8311B440(ctx, base);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x830f0ca0
	if (ctx.cr0.eq) goto loc_830F0CA0;
	// lis r11,-32228
	ctx.r11.s64 = -2112094208;
	// lwz r7,220(r30)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r30.u32 + 220);
	// li r6,99
	ctx.r6.s64 = 99;
	// addi r4,r11,10440
	ctx.r4.s64 = ctx.r11.s64 + 10440;
	// li r5,1775
	ctx.r5.s64 = 1775;
	// addi r3,r31,160
	ctx.r3.s64 = ctx.r31.s64 + 160;
	// bl 0x830dee18
	ctx.lr = 0x830F0C50;
	sub_830DEE18(ctx, base);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// li r11,1
	ctx.r11.s64 = 1;
	// lwz r7,176(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 176);
	// lis r10,-32228
	ctx.r10.s64 = -2112094208;
	// lwz r5,164(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 164);
	// stb r11,13(r30)
	PPC_STORE_U8(ctx.r30.u32 + 13, ctx.r11.u8);
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r6,r10,-4792
	ctx.r6.s64 = ctx.r10.s64 + -4792;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r4,292
	ctx.r4.s64 = 292;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x830ee370
	ctx.lr = 0x830F0C80;
	sub_830EE370(ctx, base);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// lis r11,-32228
	ctx.r11.s64 = -2112094208;
	// addi r3,r31,160
	ctx.r3.s64 = ctx.r31.s64 + 160;
	// addi r11,r11,2016
	ctx.r11.s64 = ctx.r11.s64 + 2016;
	// stw r11,160(r31)
	PPC_STORE_U32(ctx.r31.u32 + 160, ctx.r11.u32);
	// bl 0x830de178
	ctx.lr = 0x830F0C98;
	sub_830DE178(ctx, base);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// b 0x830f0c04
	goto loc_830F0C04;
loc_830F0CA0:
	// li r3,72
	ctx.r3.s64 = 72;
	// lwz r4,220(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 220);
	// bl 0x830dd390
	ctx.lr = 0x830F0CAC;
	sub_830DD390(ctx, base);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// stw r3,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r3.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x830f0cd4
	if (ctx.cr6.eq) goto loc_830F0CD4;
	// addi r4,r31,224
	ctx.r4.s64 = ctx.r31.s64 + 224;
	// lwz r5,220(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + 220);
	// bl 0x8311b150
	ctx.lr = 0x830F0CC8;
	sub_8311B150(ctx, base);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// b 0x830f0cd8
	goto loc_830F0CD8;
loc_830F0CD4:
	// li r29,0
	ctx.r29.s64 = 0;
loc_830F0CD8:
	// b 0x830f0d20
	goto loc_830F0D20;
loc_830F0CDC:
	// lbz r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 8);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x830f0d6c
	if (!ctx.cr0.eq) goto loc_830F0D6C;
	// li r3,24
	ctx.r3.s64 = 24;
	// lwz r4,220(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 220);
	// bl 0x830dd390
	ctx.lr = 0x830F0CF4;
	sub_830DD390(ctx, base);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// stw r3,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r3.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x830f0d1c
	if (ctx.cr6.eq) goto loc_830F0D1C;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// lwz r5,220(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + 220);
	// bl 0x830ddea0
	ctx.lr = 0x830F0D10;
	sub_830DDEA0(ctx, base);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// b 0x830f0d20
	goto loc_830F0D20;
loc_830F0D1C:
	// li r29,0
	ctx.r29.s64 = 0;
loc_830F0D20:
	// addi r3,r31,224
	ctx.r3.s64 = ctx.r31.s64 + 224;
	// bl 0x8311bee8
	ctx.lr = 0x830F0D28;
	sub_8311BEE8(ctx, base);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
loc_830F0D2C:
	// stw r29,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r29.u32);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r6,r26
	ctx.r6.u64 = ctx.r26.u64;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r11,36(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x830F0D50;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r31,80
	ctx.r3.s64 = ctx.r31.s64 + 80;
	// bl 0x8312c778
	ctx.lr = 0x830F0D60;
	sub_8312C778(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
loc_830F0D64:
	// addi r1,r31,352
	ctx.r1.s64 = ctx.r31.s64 + 352;
	// b 0x833a01f0
	__restgprlr_26(ctx, base);
	return;
loc_830F0D6C:
	// lis r11,-32228
	ctx.r11.s64 = -2112094208;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r4,r11,10440
	ctx.r4.s64 = ctx.r11.s64 + 10440;
	// li r6,99
	ctx.r6.s64 = 99;
	// li r5,1797
	ctx.r5.s64 = 1797;
	// addi r3,r31,192
	ctx.r3.s64 = ctx.r31.s64 + 192;
	// bl 0x830dee18
	ctx.lr = 0x830F0D88;
	sub_830DEE18(ctx, base);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// li r11,1
	ctx.r11.s64 = 1;
	// lwz r7,208(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 208);
	// lis r10,-32228
	ctx.r10.s64 = -2112094208;
	// lwz r5,196(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 196);
	// stb r11,13(r30)
	PPC_STORE_U8(ctx.r30.u32 + 13, ctx.r11.u8);
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r6,r10,-4792
	ctx.r6.s64 = ctx.r10.s64 + -4792;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r4,292
	ctx.r4.s64 = 292;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x830ee370
	ctx.lr = 0x830F0DB8;
	sub_830EE370(ctx, base);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// lis r11,-32228
	ctx.r11.s64 = -2112094208;
	// addi r3,r31,192
	ctx.r3.s64 = ctx.r31.s64 + 192;
	// addi r11,r11,2016
	ctx.r11.s64 = ctx.r11.s64 + 2016;
	// stw r11,192(r31)
	PPC_STORE_U32(ctx.r31.u32 + 192, ctx.r11.u32);
	// bl 0x830de178
	ctx.lr = 0x830F0DD0;
	sub_830DE178(ctx, base);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// b 0x830f0c04
	goto loc_830F0C04;
loc_830F0DD8:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x830f0d64
	goto loc_830F0D64;
}

__attribute__((alias("__imp__sub_830F0DE0"))) PPC_WEAK_FUNC(sub_830F0DE0);
PPC_FUNC_IMPL(__imp__sub_830F0DE0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lwz r25,17952(r26)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r26.u32 + 17952);
	// lwz r16,12732(r28)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r28.u32 + 12732);
	// addi r31,r12,-352
	ctx.r31.s64 = ctx.r12.s64 + -352;
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r29,372(r31)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r31.u32 + 372);
	// li r11,1
	ctx.r11.s64 = 1;
	// lwz r30,120(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 120);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stb r11,13(r29)
	PPC_STORE_U8(ctx.r29.u32 + 13, ctx.r11.u8);
	// bl 0x830ed1a0
	ctx.lr = 0x830F0E10;
	sub_830ED1A0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x830f0e3c
	if (!ctx.cr0.eq) goto loc_830F0E3C;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r28,16(r30)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// lwz r30,4(r30)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x830F0E34;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r4,7
	ctx.r4.s64 = 7;
	// b 0x830f0e78
	goto loc_830F0E78;
loc_830F0E3C:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x830ed1a0
	ctx.lr = 0x830F0E44;
	sub_830ED1A0(ctx, base);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// cmpwi cr6,r3,2
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 2, ctx.xer);
	// lwz r28,16(r30)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r30,4(r30)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// blt cr6,0x830f0e70
	if (ctx.cr6.lt) goto loc_830F0E70;
	// bctrl 
	ctx.lr = 0x830F0E68;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r4,292
	ctx.r4.s64 = 292;
	// b 0x830f0e78
	goto loc_830F0E78;
loc_830F0E70:
	// bctrl 
	ctx.lr = 0x830F0E74;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r4,157
	ctx.r4.s64 = 157;
loc_830F0E78:
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// mr r7,r28
	ctx.r7.u64 = ctx.r28.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x830ee370
	ctx.lr = 0x830F0E94;
	sub_830EE370(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lis r3,-31985
	ctx.r3.s64 = -2096168960;
	// addi r3,r3,3544
	ctx.r3.s64 = ctx.r3.s64 + 3544;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// b 0x833a01f0
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_830F0DE8"))) PPC_WEAK_FUNC(sub_830F0DE8);
PPC_FUNC_IMPL(__imp__sub_830F0DE8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// addi r31,r12,-352
	ctx.r31.s64 = ctx.r12.s64 + -352;
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r29,372(r31)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r31.u32 + 372);
	// li r11,1
	ctx.r11.s64 = 1;
	// lwz r30,120(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 120);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stb r11,13(r29)
	PPC_STORE_U8(ctx.r29.u32 + 13, ctx.r11.u8);
	// bl 0x830ed1a0
	ctx.lr = 0x830F0E10;
	sub_830ED1A0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x830f0e3c
	if (!ctx.cr0.eq) goto loc_830F0E3C;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r28,16(r30)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// lwz r30,4(r30)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x830F0E34;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r4,7
	ctx.r4.s64 = 7;
	// b 0x830f0e78
	goto loc_830F0E78;
loc_830F0E3C:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x830ed1a0
	ctx.lr = 0x830F0E44;
	sub_830ED1A0(ctx, base);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// cmpwi cr6,r3,2
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 2, ctx.xer);
	// lwz r28,16(r30)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r30,4(r30)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// blt cr6,0x830f0e70
	if (ctx.cr6.lt) goto loc_830F0E70;
	// bctrl 
	ctx.lr = 0x830F0E68;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r4,292
	ctx.r4.s64 = 292;
	// b 0x830f0e78
	goto loc_830F0E78;
loc_830F0E70:
	// bctrl 
	ctx.lr = 0x830F0E74;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r4,157
	ctx.r4.s64 = 157;
loc_830F0E78:
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// mr r7,r28
	ctx.r7.u64 = ctx.r28.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x830ee370
	ctx.lr = 0x830F0E94;
	sub_830EE370(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lis r3,-31985
	ctx.r3.s64 = -2096168960;
	// addi r3,r3,3544
	ctx.r3.s64 = ctx.r3.s64 + 3544;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// b 0x833a01f0
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_830F0EAC"))) PPC_WEAK_FUNC(sub_830F0EAC);
PPC_FUNC_IMPL(__imp__sub_830F0EAC) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// addi r31,r12,-352
	ctx.r31.s64 = ctx.r12.s64 + -352;
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r3,r31,224
	ctx.r3.s64 = ctx.r31.s64 + 224;
	// bl 0x8311bee8
	ctx.lr = 0x830F0EC4;
	sub_8311BEE8(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830F0ED4"))) PPC_WEAK_FUNC(sub_830F0ED4);
PPC_FUNC_IMPL(__imp__sub_830F0ED4) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// addi r31,r12,-352
	ctx.r31.s64 = ctx.r12.s64 + -352;
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,372(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 372);
	// lwz r4,220(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 220);
	// lwz r3,80(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	// bl 0x830dd3e0
	ctx.lr = 0x830F0EF4;
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

__attribute__((alias("__imp__sub_830F0F04"))) PPC_WEAK_FUNC(sub_830F0F04);
PPC_FUNC_IMPL(__imp__sub_830F0F04) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// addi r31,r12,-352
	ctx.r31.s64 = ctx.r12.s64 + -352;
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r3,r31,128
	ctx.r3.s64 = ctx.r31.s64 + 128;
	// bl 0x830def60
	ctx.lr = 0x830F0F1C;
	sub_830DEF60(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830F0F2C"))) PPC_WEAK_FUNC(sub_830F0F2C);
PPC_FUNC_IMPL(__imp__sub_830F0F2C) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// addi r31,r12,-352
	ctx.r31.s64 = ctx.r12.s64 + -352;
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r3,r31,160
	ctx.r3.s64 = ctx.r31.s64 + 160;
	// bl 0x830def60
	ctx.lr = 0x830F0F44;
	sub_830DEF60(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830F0F54"))) PPC_WEAK_FUNC(sub_830F0F54);
PPC_FUNC_IMPL(__imp__sub_830F0F54) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// addi r31,r12,-352
	ctx.r31.s64 = ctx.r12.s64 + -352;
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,372(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 372);
	// lwz r4,220(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 220);
	// lwz r3,80(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	// bl 0x830dd3e0
	ctx.lr = 0x830F0F74;
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

__attribute__((alias("__imp__sub_830F0F84"))) PPC_WEAK_FUNC(sub_830F0F84);
PPC_FUNC_IMPL(__imp__sub_830F0F84) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// addi r31,r12,-352
	ctx.r31.s64 = ctx.r12.s64 + -352;
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,372(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 372);
	// lwz r4,220(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 220);
	// lwz r3,80(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	// bl 0x830dd3e0
	ctx.lr = 0x830F0FA4;
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

__attribute__((alias("__imp__sub_830F0FB4"))) PPC_WEAK_FUNC(sub_830F0FB4);
PPC_FUNC_IMPL(__imp__sub_830F0FB4) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// addi r31,r12,-352
	ctx.r31.s64 = ctx.r12.s64 + -352;
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
	// bl 0x830f4658
	ctx.lr = 0x830F0FCC;
	sub_830F4658(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830F0FDC"))) PPC_WEAK_FUNC(sub_830F0FDC);
PPC_FUNC_IMPL(__imp__sub_830F0FDC) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// addi r31,r12,-352
	ctx.r31.s64 = ctx.r12.s64 + -352;
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r3,r31,192
	ctx.r3.s64 = ctx.r31.s64 + 192;
	// bl 0x830def60
	ctx.lr = 0x830F0FF4;
	sub_830DEF60(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830F1004"))) PPC_WEAK_FUNC(sub_830F1004);
PPC_FUNC_IMPL(__imp__sub_830F1004) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_830F1008"))) PPC_WEAK_FUNC(sub_830F1008);
PPC_FUNC_IMPL(__imp__sub_830F1008) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lwz r25,17952(r26)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r26.u32 + 17952);
	// lwz r16,13240(r28)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r28.u32 + 13240);
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x833a01a8
	ctx.lr = 0x830F1018;
	__savegprlr_28(ctx, base);
	// addi r31,r1,-128
	ctx.r31.s64 = ctx.r1.s64 + -128;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// mr r28,r6
	ctx.r28.u64 = ctx.r6.u64;
	// lwz r4,220(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 220);
	// bl 0x830d6188
	ctx.lr = 0x830F1038;
	sub_830D6188(ctx, base);
	// lwz r11,220(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 220);
	// stw r3,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r3.u32);
	// stw r11,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r11.u32);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x830f0a78
	ctx.lr = 0x830F1058;
	sub_830F0A78(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r31,80
	ctx.r3.s64 = ctx.r31.s64 + 80;
	// bl 0x831b3a50
	ctx.lr = 0x830F1068;
	sub_831B3A50(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r31,128
	ctx.r1.s64 = ctx.r31.s64 + 128;
	// b 0x833a01f8
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_830F1010"))) PPC_WEAK_FUNC(sub_830F1010);
PPC_FUNC_IMPL(__imp__sub_830F1010) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x833a01a8
	ctx.lr = 0x830F1018;
	__savegprlr_28(ctx, base);
	// addi r31,r1,-128
	ctx.r31.s64 = ctx.r1.s64 + -128;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// mr r28,r6
	ctx.r28.u64 = ctx.r6.u64;
	// lwz r4,220(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 220);
	// bl 0x830d6188
	ctx.lr = 0x830F1038;
	sub_830D6188(ctx, base);
	// lwz r11,220(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 220);
	// stw r3,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r3.u32);
	// stw r11,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r11.u32);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x830f0a78
	ctx.lr = 0x830F1058;
	sub_830F0A78(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r31,80
	ctx.r3.s64 = ctx.r31.s64 + 80;
	// bl 0x831b3a50
	ctx.lr = 0x830F1068;
	sub_831B3A50(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r31,128
	ctx.r1.s64 = ctx.r31.s64 + 128;
	// b 0x833a01f8
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_830F1074"))) PPC_WEAK_FUNC(sub_830F1074);
PPC_FUNC_IMPL(__imp__sub_830F1074) {
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
	// bl 0x831b4220
	ctx.lr = 0x830F108C;
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

__attribute__((alias("__imp__sub_830F109C"))) PPC_WEAK_FUNC(sub_830F109C);
PPC_FUNC_IMPL(__imp__sub_830F109C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_830F10A0"))) PPC_WEAK_FUNC(sub_830F10A0);
PPC_FUNC_IMPL(__imp__sub_830F10A0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lwz r25,17952(r26)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r26.u32 + 17952);
	// lwz r16,13312(r28)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r28.u32 + 13312);
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// addi r31,r1,-144
	ctx.r31.s64 = ctx.r1.s64 + -144;
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lbz r10,21(r3)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r3.u32 + 21);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r11,r5
	ctx.r11.u64 = ctx.r5.u64;
	// cmplwi r10,0
	ctx.cr0.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq 0x830f1100
	if (ctx.cr0.eq) goto loc_830F1100;
	// lis r11,-32228
	ctx.r11.s64 = -2112094208;
	// lwz r7,220(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 220);
	// li r6,118
	ctx.r6.s64 = 118;
	// addi r4,r11,10440
	ctx.r4.s64 = ctx.r11.s64 + 10440;
	// li r5,1890
	ctx.r5.s64 = 1890;
	// addi r3,r31,96
	ctx.r3.s64 = ctx.r31.s64 + 96;
	// bl 0x830d5dc0
	ctx.lr = 0x830F10F0;
	sub_830D5DC0(ctx, base);
	// lis r11,-32194
	ctx.r11.s64 = -2109865984;
	// addi r3,r31,96
	ctx.r3.s64 = ctx.r31.s64 + 96;
	// addi r4,r11,-28596
	ctx.r4.s64 = ctx.r11.s64 + -28596;
	// bl 0x833a7198
	ctx.lr = 0x830F1100;
	sub_833A7198(ctx, base);
loc_830F1100:
	// lbz r10,22(r30)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r30.u32 + 22);
	// cmplwi r10,0
	ctx.cr0.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq 0x830f11bc
	if (ctx.cr0.eq) goto loc_830F11BC;
	// clrlwi. r10,r4,24
	ctx.r10.u64 = ctx.r4.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x830f11bc
	if (ctx.cr0.eq) goto loc_830F11BC;
	// lbz r10,27(r30)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r30.u32 + 27);
	// cmplwi r10,0
	ctx.cr0.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne 0x830f11bc
	if (!ctx.cr0.eq) goto loc_830F11BC;
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r4,r11
	ctx.r4.u64 = ctx.r11.u64;
	// mr r5,r6
	ctx.r5.u64 = ctx.r6.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r11,64(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 64);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x830F113C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x830f11bc
	if (ctx.cr0.eq) goto loc_830F11BC;
	// stw r3,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r3.u32);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,16(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x830F1158;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r3,180(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 180);
	// bl 0x830ec670
	ctx.lr = 0x830F1164;
	sub_830EC670(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x830f11b0
	if (ctx.cr0.eq) goto loc_830F11B0;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,16(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x830F117C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x830f11b0
	if (!ctx.cr0.eq) goto loc_830F11B0;
	// lis r11,-32228
	ctx.r11.s64 = -2112094208;
	// lwz r7,220(r30)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r30.u32 + 220);
	// li r6,118
	ctx.r6.s64 = 118;
	// addi r4,r11,10440
	ctx.r4.s64 = ctx.r11.s64 + 10440;
	// li r5,1901
	ctx.r5.s64 = 1901;
	// addi r3,r31,96
	ctx.r3.s64 = ctx.r31.s64 + 96;
	// bl 0x830d5dc0
	ctx.lr = 0x830F11A0;
	sub_830D5DC0(ctx, base);
	// lis r11,-32194
	ctx.r11.s64 = -2109865984;
	// addi r3,r31,96
	ctx.r3.s64 = ctx.r31.s64 + 96;
	// addi r4,r11,-28596
	ctx.r4.s64 = ctx.r11.s64 + -28596;
	// bl 0x833a7198
	ctx.lr = 0x830F11B0;
	sub_833A7198(ctx, base);
loc_830F11B0:
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r31,80
	ctx.r3.s64 = ctx.r31.s64 + 80;
	// bl 0x8312c778
	ctx.lr = 0x830F11BC;
	sub_8312C778(ctx, base);
loc_830F11BC:
	// addi r1,r31,144
	ctx.r1.s64 = ctx.r31.s64 + 144;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830F10A8"))) PPC_WEAK_FUNC(sub_830F10A8);
PPC_FUNC_IMPL(__imp__sub_830F10A8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// addi r31,r1,-144
	ctx.r31.s64 = ctx.r1.s64 + -144;
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lbz r10,21(r3)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r3.u32 + 21);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r11,r5
	ctx.r11.u64 = ctx.r5.u64;
	// cmplwi r10,0
	ctx.cr0.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq 0x830f1100
	if (ctx.cr0.eq) goto loc_830F1100;
	// lis r11,-32228
	ctx.r11.s64 = -2112094208;
	// lwz r7,220(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 220);
	// li r6,118
	ctx.r6.s64 = 118;
	// addi r4,r11,10440
	ctx.r4.s64 = ctx.r11.s64 + 10440;
	// li r5,1890
	ctx.r5.s64 = 1890;
	// addi r3,r31,96
	ctx.r3.s64 = ctx.r31.s64 + 96;
	// bl 0x830d5dc0
	ctx.lr = 0x830F10F0;
	sub_830D5DC0(ctx, base);
	// lis r11,-32194
	ctx.r11.s64 = -2109865984;
	// addi r3,r31,96
	ctx.r3.s64 = ctx.r31.s64 + 96;
	// addi r4,r11,-28596
	ctx.r4.s64 = ctx.r11.s64 + -28596;
	// bl 0x833a7198
	ctx.lr = 0x830F1100;
	sub_833A7198(ctx, base);
loc_830F1100:
	// lbz r10,22(r30)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r30.u32 + 22);
	// cmplwi r10,0
	ctx.cr0.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq 0x830f11bc
	if (ctx.cr0.eq) goto loc_830F11BC;
	// clrlwi. r10,r4,24
	ctx.r10.u64 = ctx.r4.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x830f11bc
	if (ctx.cr0.eq) goto loc_830F11BC;
	// lbz r10,27(r30)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r30.u32 + 27);
	// cmplwi r10,0
	ctx.cr0.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne 0x830f11bc
	if (!ctx.cr0.eq) goto loc_830F11BC;
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r4,r11
	ctx.r4.u64 = ctx.r11.u64;
	// mr r5,r6
	ctx.r5.u64 = ctx.r6.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r11,64(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 64);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x830F113C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x830f11bc
	if (ctx.cr0.eq) goto loc_830F11BC;
	// stw r3,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r3.u32);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,16(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x830F1158;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r3,180(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 180);
	// bl 0x830ec670
	ctx.lr = 0x830F1164;
	sub_830EC670(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x830f11b0
	if (ctx.cr0.eq) goto loc_830F11B0;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,16(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x830F117C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x830f11b0
	if (!ctx.cr0.eq) goto loc_830F11B0;
	// lis r11,-32228
	ctx.r11.s64 = -2112094208;
	// lwz r7,220(r30)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r30.u32 + 220);
	// li r6,118
	ctx.r6.s64 = 118;
	// addi r4,r11,10440
	ctx.r4.s64 = ctx.r11.s64 + 10440;
	// li r5,1901
	ctx.r5.s64 = 1901;
	// addi r3,r31,96
	ctx.r3.s64 = ctx.r31.s64 + 96;
	// bl 0x830d5dc0
	ctx.lr = 0x830F11A0;
	sub_830D5DC0(ctx, base);
	// lis r11,-32194
	ctx.r11.s64 = -2109865984;
	// addi r3,r31,96
	ctx.r3.s64 = ctx.r31.s64 + 96;
	// addi r4,r11,-28596
	ctx.r4.s64 = ctx.r11.s64 + -28596;
	// bl 0x833a7198
	ctx.lr = 0x830F11B0;
	sub_833A7198(ctx, base);
loc_830F11B0:
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r31,80
	ctx.r3.s64 = ctx.r31.s64 + 80;
	// bl 0x8312c778
	ctx.lr = 0x830F11BC;
	sub_8312C778(ctx, base);
loc_830F11BC:
	// addi r1,r31,144
	ctx.r1.s64 = ctx.r31.s64 + 144;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830F11D4"))) PPC_WEAK_FUNC(sub_830F11D4);
PPC_FUNC_IMPL(__imp__sub_830F11D4) {
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
	// addi r3,r31,80
	ctx.r3.s64 = ctx.r31.s64 + 80;
	// bl 0x830f4658
	ctx.lr = 0x830F11EC;
	sub_830F4658(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830F11FC"))) PPC_WEAK_FUNC(sub_830F11FC);
PPC_FUNC_IMPL(__imp__sub_830F11FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_830F1200"))) PPC_WEAK_FUNC(sub_830F1200);
PPC_FUNC_IMPL(__imp__sub_830F1200) {
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
	// bl 0x830ef878
	ctx.lr = 0x830F1218;
	sub_830EF878(ctx, base);
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
	ctx.lr = 0x830F1230;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r3,20(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x830f1250
	if (ctx.cr6.eq) goto loc_830F1250;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x830F1250;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_830F1250:
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

__attribute__((alias("__imp__sub_830F1264"))) PPC_WEAK_FUNC(sub_830F1264);
PPC_FUNC_IMPL(__imp__sub_830F1264) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_830F1268"))) PPC_WEAK_FUNC(sub_830F1268);
PPC_FUNC_IMPL(__imp__sub_830F1268) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x833a01ac
	ctx.lr = 0x830F1270;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r3,88(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 88);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x830f1298
	if (ctx.cr6.eq) goto loc_830F1298;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x830F1298;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_830F1298:
	// lwz r30,92(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 92);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x830f12b4
	if (ctx.cr6.eq) goto loc_830F12B4;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x830f1200
	ctx.lr = 0x830F12AC;
	sub_830F1200(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x830dd3e0
	ctx.lr = 0x830F12B4;
	sub_830DD3E0(ctx, base);
loc_830F12B4:
	// lwz r3,120(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 120);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x830f12d4
	if (ctx.cr6.eq) goto loc_830F12D4;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x830F12D4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_830F12D4:
	// lwz r3,220(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 220);
	// lwz r4,200(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 200);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x830F12EC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r3,220(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 220);
	// lwz r4,204(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 204);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x830F1304;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r3,220(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 220);
	// lwz r4,208(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 208);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x830F131C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,64(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 64);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x830f1378
	if (ctx.cr6.eq) goto loc_830F1378;
	// li r30,0
	ctx.r30.s64 = 0;
	// li r29,0
	ctx.r29.s64 = 0;
loc_830F1330:
	// lwz r3,220(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 220);
	// lwz r11,64(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 64);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwzx r4,r11,r29
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r29.u32);
	// lwz r11,8(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x830F134C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,68(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 68);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// addi r29,r29,4
	ctx.r29.s64 = ctx.r29.s64 + 4;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// ble cr6,0x830f1330
	if (!ctx.cr6.gt) goto loc_830F1330;
	// lwz r3,220(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 220);
	// lwz r4,64(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 64);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x830F1378;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_830F1378:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x833a01fc
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_830F1380"))) PPC_WEAK_FUNC(sub_830F1380);
PPC_FUNC_IMPL(__imp__sub_830F1380) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lwz r25,17952(r26)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r26.u32 + 17952);
	// lwz r16,13588(r28)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r28.u32 + 13588);
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// li r0,0
	ctx.r0.s64 = 0;
	// stw r0,4(r1)
	PPC_STORE_U32(ctx.r1.u32 + 4, ctx.r0.u32);
	// bl 0x833a01a0
	ctx.lr = 0x830F1398;
	__savegprlr_26(ctx, base);
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
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// mr r27,r5
	ctx.r27.u64 = ctx.r5.u64;
	// mr r26,r6
	ctx.r26.u64 = ctx.r6.u64;
	// lis r10,-32228
	ctx.r10.s64 = -2112094208;
	// li r29,0
	ctx.r29.s64 = 0;
	// li r11,1
	ctx.r11.s64 = 1;
	// lis r9,16
	ctx.r9.s64 = 1048576;
	// stb r29,8(r3)
	PPC_STORE_U8(ctx.r3.u32 + 8, ctx.r29.u8);
	// addi r10,r10,13368
	ctx.r10.s64 = ctx.r10.s64 + 13368;
	// stb r29,9(r3)
	PPC_STORE_U8(ctx.r3.u32 + 9, ctx.r29.u8);
	// li r8,2
	ctx.r8.s64 = 2;
	// stw r9,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r9.u32);
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// stb r29,10(r3)
	PPC_STORE_U8(ctx.r3.u32 + 10, ctx.r29.u8);
	// addi r3,r3,128
	ctx.r3.s64 = ctx.r3.s64 + 128;
	// stb r11,11(r30)
	PPC_STORE_U8(ctx.r30.u32 + 11, ctx.r11.u8);
	// stb r29,12(r30)
	PPC_STORE_U8(ctx.r30.u32 + 12, ctx.r29.u8);
	// stb r29,13(r30)
	PPC_STORE_U8(ctx.r30.u32 + 13, ctx.r29.u8);
	// stb r29,14(r30)
	PPC_STORE_U8(ctx.r30.u32 + 14, ctx.r29.u8);
	// stb r11,15(r30)
	PPC_STORE_U8(ctx.r30.u32 + 15, ctx.r11.u8);
	// stb r29,16(r30)
	PPC_STORE_U8(ctx.r30.u32 + 16, ctx.r29.u8);
	// stb r29,17(r30)
	PPC_STORE_U8(ctx.r30.u32 + 17, ctx.r29.u8);
	// stb r29,18(r30)
	PPC_STORE_U8(ctx.r30.u32 + 18, ctx.r29.u8);
	// stb r29,19(r30)
	PPC_STORE_U8(ctx.r30.u32 + 19, ctx.r29.u8);
	// stb r11,20(r30)
	PPC_STORE_U8(ctx.r30.u32 + 20, ctx.r11.u8);
	// stb r29,21(r30)
	PPC_STORE_U8(ctx.r30.u32 + 21, ctx.r29.u8);
	// stb r29,22(r30)
	PPC_STORE_U8(ctx.r30.u32 + 22, ctx.r29.u8);
	// stb r11,23(r30)
	PPC_STORE_U8(ctx.r30.u32 + 23, ctx.r11.u8);
	// stb r11,24(r30)
	PPC_STORE_U8(ctx.r30.u32 + 24, ctx.r11.u8);
	// stb r29,25(r30)
	PPC_STORE_U8(ctx.r30.u32 + 25, ctx.r29.u8);
	// stb r29,26(r30)
	PPC_STORE_U8(ctx.r30.u32 + 26, ctx.r29.u8);
	// stb r29,27(r30)
	PPC_STORE_U8(ctx.r30.u32 + 27, ctx.r29.u8);
	// stb r29,28(r30)
	PPC_STORE_U8(ctx.r30.u32 + 28, ctx.r29.u8);
	// stb r29,29(r30)
	PPC_STORE_U8(ctx.r30.u32 + 29, ctx.r29.u8);
	// stb r29,30(r30)
	PPC_STORE_U8(ctx.r30.u32 + 30, ctx.r29.u8);
	// stw r29,32(r30)
	PPC_STORE_U32(ctx.r30.u32 + 32, ctx.r29.u32);
	// stw r29,36(r30)
	PPC_STORE_U32(ctx.r30.u32 + 36, ctx.r29.u32);
	// stw r29,40(r30)
	PPC_STORE_U32(ctx.r30.u32 + 40, ctx.r29.u32);
	// stw r29,44(r30)
	PPC_STORE_U32(ctx.r30.u32 + 44, ctx.r29.u32);
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
	// stw r8,76(r30)
	PPC_STORE_U32(ctx.r30.u32 + 76, ctx.r8.u32);
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
	// stw r29,104(r30)
	PPC_STORE_U32(ctx.r30.u32 + 104, ctx.r29.u32);
	// stw r29,108(r30)
	PPC_STORE_U32(ctx.r30.u32 + 108, ctx.r29.u32);
	// stw r29,112(r30)
	PPC_STORE_U32(ctx.r30.u32 + 112, ctx.r29.u32);
	// stw r29,116(r30)
	PPC_STORE_U32(ctx.r30.u32 + 116, ctx.r29.u32);
	// stw r29,120(r30)
	PPC_STORE_U32(ctx.r30.u32 + 120, ctx.r29.u32);
	// stb r29,124(r30)
	PPC_STORE_U8(ctx.r30.u32 + 124, ctx.r29.u8);
	// bl 0x830f3d68
	ctx.lr = 0x830F149C;
	sub_830F3D68(ctx, base);
	// stw r28,172(r30)
	PPC_STORE_U32(ctx.r30.u32 + 172, ctx.r28.u32);
	// stw r29,176(r30)
	PPC_STORE_U32(ctx.r30.u32 + 176, ctx.r29.u32);
	// addi r3,r30,224
	ctx.r3.s64 = ctx.r30.s64 + 224;
	// stw r27,180(r30)
	PPC_STORE_U32(ctx.r30.u32 + 180, ctx.r27.u32);
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// lwz r11,24(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 24);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// stw r26,220(r30)
	PPC_STORE_U32(ctx.r30.u32 + 220, ctx.r26.u32);
	// stw r29,188(r30)
	PPC_STORE_U32(ctx.r30.u32 + 188, ctx.r29.u32);
	// stw r29,192(r30)
	PPC_STORE_U32(ctx.r30.u32 + 192, ctx.r29.u32);
	// stw r29,196(r30)
	PPC_STORE_U32(ctx.r30.u32 + 196, ctx.r29.u32);
	// stw r11,184(r30)
	PPC_STORE_U32(ctx.r30.u32 + 184, ctx.r11.u32);
	// stw r29,200(r30)
	PPC_STORE_U32(ctx.r30.u32 + 200, ctx.r29.u32);
	// stw r29,204(r30)
	PPC_STORE_U32(ctx.r30.u32 + 204, ctx.r29.u32);
	// stw r29,208(r30)
	PPC_STORE_U32(ctx.r30.u32 + 208, ctx.r29.u32);
	// stw r29,212(r30)
	PPC_STORE_U32(ctx.r30.u32 + 212, ctx.r29.u32);
	// stw r29,216(r30)
	PPC_STORE_U32(ctx.r30.u32 + 216, ctx.r29.u32);
	// bl 0x830e4158
	ctx.lr = 0x830F14E4;
	sub_830E4158(ctx, base);
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// li r4,1023
	ctx.r4.s64 = 1023;
	// addi r3,r30,236
	ctx.r3.s64 = ctx.r30.s64 + 236;
	// bl 0x830e40b8
	ctx.lr = 0x830F14F4;
	sub_830E40B8(ctx, base);
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// li r4,1023
	ctx.r4.s64 = 1023;
	// addi r3,r30,264
	ctx.r3.s64 = ctx.r30.s64 + 264;
	// bl 0x830e40b8
	ctx.lr = 0x830F1504;
	sub_830E40B8(ctx, base);
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// li r4,1023
	ctx.r4.s64 = 1023;
	// addi r3,r30,292
	ctx.r3.s64 = ctx.r30.s64 + 292;
	// bl 0x830e40b8
	ctx.lr = 0x830F1514;
	sub_830E40B8(ctx, base);
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// li r4,1023
	ctx.r4.s64 = 1023;
	// addi r3,r30,320
	ctx.r3.s64 = ctx.r30.s64 + 320;
	// bl 0x830e40b8
	ctx.lr = 0x830F1524;
	sub_830E40B8(ctx, base);
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// li r4,1023
	ctx.r4.s64 = 1023;
	// addi r3,r30,348
	ctx.r3.s64 = ctx.r30.s64 + 348;
	// bl 0x830e40b8
	ctx.lr = 0x830F1534;
	sub_830E40B8(ctx, base);
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// li r4,1023
	ctx.r4.s64 = 1023;
	// addi r3,r30,376
	ctx.r3.s64 = ctx.r30.s64 + 376;
	// bl 0x830e40b8
	ctx.lr = 0x830F1544;
	sub_830E40B8(ctx, base);
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// li r4,1023
	ctx.r4.s64 = 1023;
	// addi r3,r30,404
	ctx.r3.s64 = ctx.r30.s64 + 404;
	// bl 0x830e40b8
	ctx.lr = 0x830F1554;
	sub_830E40B8(ctx, base);
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// addi r3,r30,432
	ctx.r3.s64 = ctx.r30.s64 + 432;
	// bl 0x8311da60
	ctx.lr = 0x830F1560;
	sub_8311DA60(ctx, base);
	// lis r11,-31985
	ctx.r11.s64 = -2096168960;
	// stw r29,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r29.u32);
	// addi r11,r11,4712
	ctx.r11.s64 = ctx.r11.s64 + 4712;
	// stw r30,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r30.u32);
	// stw r11,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r11.u32);
	// ld r11,80(r31)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r31.u32 + 80);
	// std r11,104(r31)
	PPC_STORE_U64(ctx.r31.u32 + 104, ctx.r11.u64);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x830f0318
	ctx.lr = 0x830F1584;
	sub_830F0318(ctx, base);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r31,176
	ctx.r1.s64 = ctx.r31.s64 + 176;
	// b 0x833a01f0
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_830F1388"))) PPC_WEAK_FUNC(sub_830F1388);
PPC_FUNC_IMPL(__imp__sub_830F1388) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// li r0,0
	ctx.r0.s64 = 0;
	// stw r0,4(r1)
	PPC_STORE_U32(ctx.r1.u32 + 4, ctx.r0.u32);
	// bl 0x833a01a0
	ctx.lr = 0x830F1398;
	__savegprlr_26(ctx, base);
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
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// mr r27,r5
	ctx.r27.u64 = ctx.r5.u64;
	// mr r26,r6
	ctx.r26.u64 = ctx.r6.u64;
	// lis r10,-32228
	ctx.r10.s64 = -2112094208;
	// li r29,0
	ctx.r29.s64 = 0;
	// li r11,1
	ctx.r11.s64 = 1;
	// lis r9,16
	ctx.r9.s64 = 1048576;
	// stb r29,8(r3)
	PPC_STORE_U8(ctx.r3.u32 + 8, ctx.r29.u8);
	// addi r10,r10,13368
	ctx.r10.s64 = ctx.r10.s64 + 13368;
	// stb r29,9(r3)
	PPC_STORE_U8(ctx.r3.u32 + 9, ctx.r29.u8);
	// li r8,2
	ctx.r8.s64 = 2;
	// stw r9,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r9.u32);
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// stb r29,10(r3)
	PPC_STORE_U8(ctx.r3.u32 + 10, ctx.r29.u8);
	// addi r3,r3,128
	ctx.r3.s64 = ctx.r3.s64 + 128;
	// stb r11,11(r30)
	PPC_STORE_U8(ctx.r30.u32 + 11, ctx.r11.u8);
	// stb r29,12(r30)
	PPC_STORE_U8(ctx.r30.u32 + 12, ctx.r29.u8);
	// stb r29,13(r30)
	PPC_STORE_U8(ctx.r30.u32 + 13, ctx.r29.u8);
	// stb r29,14(r30)
	PPC_STORE_U8(ctx.r30.u32 + 14, ctx.r29.u8);
	// stb r11,15(r30)
	PPC_STORE_U8(ctx.r30.u32 + 15, ctx.r11.u8);
	// stb r29,16(r30)
	PPC_STORE_U8(ctx.r30.u32 + 16, ctx.r29.u8);
	// stb r29,17(r30)
	PPC_STORE_U8(ctx.r30.u32 + 17, ctx.r29.u8);
	// stb r29,18(r30)
	PPC_STORE_U8(ctx.r30.u32 + 18, ctx.r29.u8);
	// stb r29,19(r30)
	PPC_STORE_U8(ctx.r30.u32 + 19, ctx.r29.u8);
	// stb r11,20(r30)
	PPC_STORE_U8(ctx.r30.u32 + 20, ctx.r11.u8);
	// stb r29,21(r30)
	PPC_STORE_U8(ctx.r30.u32 + 21, ctx.r29.u8);
	// stb r29,22(r30)
	PPC_STORE_U8(ctx.r30.u32 + 22, ctx.r29.u8);
	// stb r11,23(r30)
	PPC_STORE_U8(ctx.r30.u32 + 23, ctx.r11.u8);
	// stb r11,24(r30)
	PPC_STORE_U8(ctx.r30.u32 + 24, ctx.r11.u8);
	// stb r29,25(r30)
	PPC_STORE_U8(ctx.r30.u32 + 25, ctx.r29.u8);
	// stb r29,26(r30)
	PPC_STORE_U8(ctx.r30.u32 + 26, ctx.r29.u8);
	// stb r29,27(r30)
	PPC_STORE_U8(ctx.r30.u32 + 27, ctx.r29.u8);
	// stb r29,28(r30)
	PPC_STORE_U8(ctx.r30.u32 + 28, ctx.r29.u8);
	// stb r29,29(r30)
	PPC_STORE_U8(ctx.r30.u32 + 29, ctx.r29.u8);
	// stb r29,30(r30)
	PPC_STORE_U8(ctx.r30.u32 + 30, ctx.r29.u8);
	// stw r29,32(r30)
	PPC_STORE_U32(ctx.r30.u32 + 32, ctx.r29.u32);
	// stw r29,36(r30)
	PPC_STORE_U32(ctx.r30.u32 + 36, ctx.r29.u32);
	// stw r29,40(r30)
	PPC_STORE_U32(ctx.r30.u32 + 40, ctx.r29.u32);
	// stw r29,44(r30)
	PPC_STORE_U32(ctx.r30.u32 + 44, ctx.r29.u32);
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
	// stw r8,76(r30)
	PPC_STORE_U32(ctx.r30.u32 + 76, ctx.r8.u32);
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
	// stw r29,104(r30)
	PPC_STORE_U32(ctx.r30.u32 + 104, ctx.r29.u32);
	// stw r29,108(r30)
	PPC_STORE_U32(ctx.r30.u32 + 108, ctx.r29.u32);
	// stw r29,112(r30)
	PPC_STORE_U32(ctx.r30.u32 + 112, ctx.r29.u32);
	// stw r29,116(r30)
	PPC_STORE_U32(ctx.r30.u32 + 116, ctx.r29.u32);
	// stw r29,120(r30)
	PPC_STORE_U32(ctx.r30.u32 + 120, ctx.r29.u32);
	// stb r29,124(r30)
	PPC_STORE_U8(ctx.r30.u32 + 124, ctx.r29.u8);
	// bl 0x830f3d68
	ctx.lr = 0x830F149C;
	sub_830F3D68(ctx, base);
	// stw r28,172(r30)
	PPC_STORE_U32(ctx.r30.u32 + 172, ctx.r28.u32);
	// stw r29,176(r30)
	PPC_STORE_U32(ctx.r30.u32 + 176, ctx.r29.u32);
	// addi r3,r30,224
	ctx.r3.s64 = ctx.r30.s64 + 224;
	// stw r27,180(r30)
	PPC_STORE_U32(ctx.r30.u32 + 180, ctx.r27.u32);
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// lwz r11,24(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 24);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// stw r26,220(r30)
	PPC_STORE_U32(ctx.r30.u32 + 220, ctx.r26.u32);
	// stw r29,188(r30)
	PPC_STORE_U32(ctx.r30.u32 + 188, ctx.r29.u32);
	// stw r29,192(r30)
	PPC_STORE_U32(ctx.r30.u32 + 192, ctx.r29.u32);
	// stw r29,196(r30)
	PPC_STORE_U32(ctx.r30.u32 + 196, ctx.r29.u32);
	// stw r11,184(r30)
	PPC_STORE_U32(ctx.r30.u32 + 184, ctx.r11.u32);
	// stw r29,200(r30)
	PPC_STORE_U32(ctx.r30.u32 + 200, ctx.r29.u32);
	// stw r29,204(r30)
	PPC_STORE_U32(ctx.r30.u32 + 204, ctx.r29.u32);
	// stw r29,208(r30)
	PPC_STORE_U32(ctx.r30.u32 + 208, ctx.r29.u32);
	// stw r29,212(r30)
	PPC_STORE_U32(ctx.r30.u32 + 212, ctx.r29.u32);
	// stw r29,216(r30)
	PPC_STORE_U32(ctx.r30.u32 + 216, ctx.r29.u32);
	// bl 0x830e4158
	ctx.lr = 0x830F14E4;
	sub_830E4158(ctx, base);
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// li r4,1023
	ctx.r4.s64 = 1023;
	// addi r3,r30,236
	ctx.r3.s64 = ctx.r30.s64 + 236;
	// bl 0x830e40b8
	ctx.lr = 0x830F14F4;
	sub_830E40B8(ctx, base);
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// li r4,1023
	ctx.r4.s64 = 1023;
	// addi r3,r30,264
	ctx.r3.s64 = ctx.r30.s64 + 264;
	// bl 0x830e40b8
	ctx.lr = 0x830F1504;
	sub_830E40B8(ctx, base);
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// li r4,1023
	ctx.r4.s64 = 1023;
	// addi r3,r30,292
	ctx.r3.s64 = ctx.r30.s64 + 292;
	// bl 0x830e40b8
	ctx.lr = 0x830F1514;
	sub_830E40B8(ctx, base);
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// li r4,1023
	ctx.r4.s64 = 1023;
	// addi r3,r30,320
	ctx.r3.s64 = ctx.r30.s64 + 320;
	// bl 0x830e40b8
	ctx.lr = 0x830F1524;
	sub_830E40B8(ctx, base);
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// li r4,1023
	ctx.r4.s64 = 1023;
	// addi r3,r30,348
	ctx.r3.s64 = ctx.r30.s64 + 348;
	// bl 0x830e40b8
	ctx.lr = 0x830F1534;
	sub_830E40B8(ctx, base);
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// li r4,1023
	ctx.r4.s64 = 1023;
	// addi r3,r30,376
	ctx.r3.s64 = ctx.r30.s64 + 376;
	// bl 0x830e40b8
	ctx.lr = 0x830F1544;
	sub_830E40B8(ctx, base);
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// li r4,1023
	ctx.r4.s64 = 1023;
	// addi r3,r30,404
	ctx.r3.s64 = ctx.r30.s64 + 404;
	// bl 0x830e40b8
	ctx.lr = 0x830F1554;
	sub_830E40B8(ctx, base);
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// addi r3,r30,432
	ctx.r3.s64 = ctx.r30.s64 + 432;
	// bl 0x8311da60
	ctx.lr = 0x830F1560;
	sub_8311DA60(ctx, base);
	// lis r11,-31985
	ctx.r11.s64 = -2096168960;
	// stw r29,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r29.u32);
	// addi r11,r11,4712
	ctx.r11.s64 = ctx.r11.s64 + 4712;
	// stw r30,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r30.u32);
	// stw r11,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r11.u32);
	// ld r11,80(r31)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r31.u32 + 80);
	// std r11,104(r31)
	PPC_STORE_U64(ctx.r31.u32 + 104, ctx.r11.u64);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x830f0318
	ctx.lr = 0x830F1584;
	sub_830F0318(ctx, base);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r31,176
	ctx.r1.s64 = ctx.r31.s64 + 176;
	// b 0x833a01f0
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_830F1594"))) PPC_WEAK_FUNC(sub_830F1594);
PPC_FUNC_IMPL(__imp__sub_830F1594) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lwz r25,17952(r26)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r26.u32 + 17952);
	// lwz r16,13588(r28)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r28.u32 + 13588);
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
	// li r29,0
	ctx.r29.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r29,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r29.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r29,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r29.u32);
	// ld r11,80(r31)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r31.u32 + 80);
	// stw r29,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r29.u32);
	// std r11,104(r31)
	PPC_STORE_U64(ctx.r31.u32 + 104, ctx.r11.u64);
	// bl 0x833a7198
	ctx.lr = 0x830F15D0;
	sub_833A7198(ctx, base);
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
	// lwz r3,196(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 196);
	// bl 0x830ed1f0
	ctx.lr = 0x830F15E8;
	sub_830ED1F0(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830F159C"))) PPC_WEAK_FUNC(sub_830F159C);
PPC_FUNC_IMPL(__imp__sub_830F159C) {
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
	// li r29,0
	ctx.r29.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r29,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r29.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r29,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r29.u32);
	// ld r11,80(r31)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r31.u32 + 80);
	// stw r29,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r29.u32);
	// std r11,104(r31)
	PPC_STORE_U64(ctx.r31.u32 + 104, ctx.r11.u64);
	// bl 0x833a7198
	ctx.lr = 0x830F15D0;
	sub_833A7198(ctx, base);
}

__attribute__((alias("__imp__sub_830F15D0"))) PPC_WEAK_FUNC(sub_830F15D0);
PPC_FUNC_IMPL(__imp__sub_830F15D0) {
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
	// lwz r3,196(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 196);
	// bl 0x830ed1f0
	ctx.lr = 0x830F15E8;
	sub_830ED1F0(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830F15F8"))) PPC_WEAK_FUNC(sub_830F15F8);
PPC_FUNC_IMPL(__imp__sub_830F15F8) {
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
	// addi r3,r11,128
	ctx.r3.s64 = ctx.r11.s64 + 128;
	// bl 0x830f46c0
	ctx.lr = 0x830F1614;
	sub_830F46C0(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830F1624"))) PPC_WEAK_FUNC(sub_830F1624);
PPC_FUNC_IMPL(__imp__sub_830F1624) {
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
	// addi r3,r11,224
	ctx.r3.s64 = ctx.r11.s64 + 224;
	// bl 0x830e4410
	ctx.lr = 0x830F1640;
	sub_830E4410(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830F1650"))) PPC_WEAK_FUNC(sub_830F1650);
PPC_FUNC_IMPL(__imp__sub_830F1650) {
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
	// addi r3,r11,236
	ctx.r3.s64 = ctx.r11.s64 + 236;
	// bl 0x830e4138
	ctx.lr = 0x830F166C;
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

__attribute__((alias("__imp__sub_830F167C"))) PPC_WEAK_FUNC(sub_830F167C);
PPC_FUNC_IMPL(__imp__sub_830F167C) {
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
	// addi r3,r11,264
	ctx.r3.s64 = ctx.r11.s64 + 264;
	// bl 0x830e4138
	ctx.lr = 0x830F1698;
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

__attribute__((alias("__imp__sub_830F16A8"))) PPC_WEAK_FUNC(sub_830F16A8);
PPC_FUNC_IMPL(__imp__sub_830F16A8) {
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
	// addi r3,r11,292
	ctx.r3.s64 = ctx.r11.s64 + 292;
	// bl 0x830e4138
	ctx.lr = 0x830F16C4;
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

__attribute__((alias("__imp__sub_830F16D4"))) PPC_WEAK_FUNC(sub_830F16D4);
PPC_FUNC_IMPL(__imp__sub_830F16D4) {
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
	// addi r3,r11,320
	ctx.r3.s64 = ctx.r11.s64 + 320;
	// bl 0x830e4138
	ctx.lr = 0x830F16F0;
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

__attribute__((alias("__imp__sub_830F1700"))) PPC_WEAK_FUNC(sub_830F1700);
PPC_FUNC_IMPL(__imp__sub_830F1700) {
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
	// addi r3,r11,348
	ctx.r3.s64 = ctx.r11.s64 + 348;
	// bl 0x830e4138
	ctx.lr = 0x830F171C;
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

__attribute__((alias("__imp__sub_830F172C"))) PPC_WEAK_FUNC(sub_830F172C);
PPC_FUNC_IMPL(__imp__sub_830F172C) {
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
	// addi r3,r11,376
	ctx.r3.s64 = ctx.r11.s64 + 376;
	// bl 0x830e4138
	ctx.lr = 0x830F1748;
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

__attribute__((alias("__imp__sub_830F1758"))) PPC_WEAK_FUNC(sub_830F1758);
PPC_FUNC_IMPL(__imp__sub_830F1758) {
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
	// addi r3,r11,404
	ctx.r3.s64 = ctx.r11.s64 + 404;
	// bl 0x830e4138
	ctx.lr = 0x830F1774;
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

__attribute__((alias("__imp__sub_830F1784"))) PPC_WEAK_FUNC(sub_830F1784);
PPC_FUNC_IMPL(__imp__sub_830F1784) {
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
	// addi r3,r11,432
	ctx.r3.s64 = ctx.r11.s64 + 432;
	// bl 0x8311e030
	ctx.lr = 0x830F17A0;
	sub_8311E030(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830F17B0"))) PPC_WEAK_FUNC(sub_830F17B0);
PPC_FUNC_IMPL(__imp__sub_830F17B0) {
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
	// addi r3,r31,96
	ctx.r3.s64 = ctx.r31.s64 + 96;
	// bl 0x8319be68
	ctx.lr = 0x830F17C8;
	sub_8319BE68(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830F17D8"))) PPC_WEAK_FUNC(sub_830F17D8);
PPC_FUNC_IMPL(__imp__sub_830F17D8) {
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
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,60(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 60);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x830F17F4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830F1808"))) PPC_WEAK_FUNC(sub_830F1808);
PPC_FUNC_IMPL(__imp__sub_830F1808) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lwz r25,17952(r26)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r26.u32 + 17952);
	// lwz r16,13840(r28)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r28.u32 + 13840);
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
	// addi r11,r11,13368
	ctx.r11.s64 = ctx.r11.s64 + 13368;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// bl 0x830f1268
	ctx.lr = 0x830F1840;
	sub_830F1268(ctx, base);
	// addi r3,r30,432
	ctx.r3.s64 = ctx.r30.s64 + 432;
	// bl 0x8311e030
	ctx.lr = 0x830F1848;
	sub_8311E030(ctx, base);
	// lwz r3,420(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 420);
	// addi r11,r30,404
	ctx.r11.s64 = ctx.r30.s64 + 404;
	// lwz r4,428(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 428);
	// stw r11,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r11.u32);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x830F1868;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r3,392(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 392);
	// addi r11,r30,376
	ctx.r11.s64 = ctx.r30.s64 + 376;
	// lwz r4,400(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 400);
	// stw r11,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r11.u32);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x830F1888;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r3,364(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 364);
	// addi r11,r30,348
	ctx.r11.s64 = ctx.r30.s64 + 348;
	// lwz r4,372(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 372);
	// stw r11,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r11.u32);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x830F18A8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r3,336(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 336);
	// addi r11,r30,320
	ctx.r11.s64 = ctx.r30.s64 + 320;
	// lwz r4,344(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 344);
	// stw r11,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r11.u32);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x830F18C8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r3,308(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 308);
	// addi r11,r30,292
	ctx.r11.s64 = ctx.r30.s64 + 292;
	// lwz r4,316(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 316);
	// stw r11,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r11.u32);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x830F18E8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r11,r30,264
	ctx.r11.s64 = ctx.r30.s64 + 264;
	// lwz r3,280(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 280);
	// lwz r4,288(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 288);
	// stw r11,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r11.u32);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x830F1908;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r3,252(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 252);
	// addi r11,r30,236
	ctx.r11.s64 = ctx.r30.s64 + 236;
	// lwz r4,260(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 260);
	// stw r11,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r11.u32);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x830F1928;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r3,r30,224
	ctx.r3.s64 = ctx.r30.s64 + 224;
	// bl 0x830e4410
	ctx.lr = 0x830F1930;
	sub_830E4410(ctx, base);
	// addi r3,r30,128
	ctx.r3.s64 = ctx.r30.s64 + 128;
	// bl 0x830f46c0
	ctx.lr = 0x830F1938;
	sub_830F46C0(ctx, base);
	// lis r11,-32228
	ctx.r11.s64 = -2112094208;
	// addi r11,r11,19428
	ctx.r11.s64 = ctx.r11.s64 + 19428;
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

__attribute__((alias("__imp__sub_830F1810"))) PPC_WEAK_FUNC(sub_830F1810);
PPC_FUNC_IMPL(__imp__sub_830F1810) {
	PPC_FUNC_PROLOGUE();
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
	// addi r11,r11,13368
	ctx.r11.s64 = ctx.r11.s64 + 13368;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// bl 0x830f1268
	ctx.lr = 0x830F1840;
	sub_830F1268(ctx, base);
	// addi r3,r30,432
	ctx.r3.s64 = ctx.r30.s64 + 432;
	// bl 0x8311e030
	ctx.lr = 0x830F1848;
	sub_8311E030(ctx, base);
	// lwz r3,420(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 420);
	// addi r11,r30,404
	ctx.r11.s64 = ctx.r30.s64 + 404;
	// lwz r4,428(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 428);
	// stw r11,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r11.u32);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x830F1868;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r3,392(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 392);
	// addi r11,r30,376
	ctx.r11.s64 = ctx.r30.s64 + 376;
	// lwz r4,400(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 400);
	// stw r11,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r11.u32);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x830F1888;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r3,364(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 364);
	// addi r11,r30,348
	ctx.r11.s64 = ctx.r30.s64 + 348;
	// lwz r4,372(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 372);
	// stw r11,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r11.u32);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x830F18A8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r3,336(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 336);
	// addi r11,r30,320
	ctx.r11.s64 = ctx.r30.s64 + 320;
	// lwz r4,344(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 344);
	// stw r11,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r11.u32);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x830F18C8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r3,308(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 308);
	// addi r11,r30,292
	ctx.r11.s64 = ctx.r30.s64 + 292;
	// lwz r4,316(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 316);
	// stw r11,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r11.u32);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x830F18E8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r11,r30,264
	ctx.r11.s64 = ctx.r30.s64 + 264;
	// lwz r3,280(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 280);
	// lwz r4,288(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 288);
	// stw r11,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r11.u32);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x830F1908;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r3,252(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 252);
	// addi r11,r30,236
	ctx.r11.s64 = ctx.r30.s64 + 236;
	// lwz r4,260(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 260);
	// stw r11,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r11.u32);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x830F1928;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r3,r30,224
	ctx.r3.s64 = ctx.r30.s64 + 224;
	// bl 0x830e4410
	ctx.lr = 0x830F1930;
	sub_830E4410(ctx, base);
	// addi r3,r30,128
	ctx.r3.s64 = ctx.r30.s64 + 128;
	// bl 0x830f46c0
	ctx.lr = 0x830F1938;
	sub_830F46C0(ctx, base);
	// lis r11,-32228
	ctx.r11.s64 = -2112094208;
	// addi r11,r11,19428
	ctx.r11.s64 = ctx.r11.s64 + 19428;
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

__attribute__((alias("__imp__sub_830F195C"))) PPC_WEAK_FUNC(sub_830F195C);
PPC_FUNC_IMPL(__imp__sub_830F195C) {
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
	// bl 0x830ed1f0
	ctx.lr = 0x830F1974;
	sub_830ED1F0(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830F1984"))) PPC_WEAK_FUNC(sub_830F1984);
PPC_FUNC_IMPL(__imp__sub_830F1984) {
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
	// lwz r11,132(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 132);
	// addi r3,r11,128
	ctx.r3.s64 = ctx.r11.s64 + 128;
	// bl 0x830f46c0
	ctx.lr = 0x830F19A0;
	sub_830F46C0(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830F19B0"))) PPC_WEAK_FUNC(sub_830F19B0);
PPC_FUNC_IMPL(__imp__sub_830F19B0) {
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
	// lwz r11,132(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 132);
	// addi r3,r11,224
	ctx.r3.s64 = ctx.r11.s64 + 224;
	// bl 0x830e4410
	ctx.lr = 0x830F19CC;
	sub_830E4410(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830F19DC"))) PPC_WEAK_FUNC(sub_830F19DC);
PPC_FUNC_IMPL(__imp__sub_830F19DC) {
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
	// lwz r11,132(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 132);
	// addi r3,r11,236
	ctx.r3.s64 = ctx.r11.s64 + 236;
	// bl 0x830e4138
	ctx.lr = 0x830F19F8;
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

__attribute__((alias("__imp__sub_830F1A08"))) PPC_WEAK_FUNC(sub_830F1A08);
PPC_FUNC_IMPL(__imp__sub_830F1A08) {
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
	// lwz r11,132(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 132);
	// addi r3,r11,264
	ctx.r3.s64 = ctx.r11.s64 + 264;
	// bl 0x830e4138
	ctx.lr = 0x830F1A24;
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

__attribute__((alias("__imp__sub_830F1A34"))) PPC_WEAK_FUNC(sub_830F1A34);
PPC_FUNC_IMPL(__imp__sub_830F1A34) {
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
	// lwz r11,132(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 132);
	// addi r3,r11,292
	ctx.r3.s64 = ctx.r11.s64 + 292;
	// bl 0x830e4138
	ctx.lr = 0x830F1A50;
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

__attribute__((alias("__imp__sub_830F1A60"))) PPC_WEAK_FUNC(sub_830F1A60);
PPC_FUNC_IMPL(__imp__sub_830F1A60) {
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
	// lwz r11,132(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 132);
	// addi r3,r11,320
	ctx.r3.s64 = ctx.r11.s64 + 320;
	// bl 0x830e4138
	ctx.lr = 0x830F1A7C;
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

__attribute__((alias("__imp__sub_830F1A8C"))) PPC_WEAK_FUNC(sub_830F1A8C);
PPC_FUNC_IMPL(__imp__sub_830F1A8C) {
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
	// lwz r11,132(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 132);
	// addi r3,r11,348
	ctx.r3.s64 = ctx.r11.s64 + 348;
	// bl 0x830e4138
	ctx.lr = 0x830F1AA8;
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

__attribute__((alias("__imp__sub_830F1AB8"))) PPC_WEAK_FUNC(sub_830F1AB8);
PPC_FUNC_IMPL(__imp__sub_830F1AB8) {
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
	// lwz r11,132(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 132);
	// addi r3,r11,376
	ctx.r3.s64 = ctx.r11.s64 + 376;
	// bl 0x830e4138
	ctx.lr = 0x830F1AD4;
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

__attribute__((alias("__imp__sub_830F1AE4"))) PPC_WEAK_FUNC(sub_830F1AE4);
PPC_FUNC_IMPL(__imp__sub_830F1AE4) {
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
	// lwz r11,132(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 132);
	// addi r3,r11,404
	ctx.r3.s64 = ctx.r11.s64 + 404;
	// bl 0x830e4138
	ctx.lr = 0x830F1B00;
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

__attribute__((alias("__imp__sub_830F1B10"))) PPC_WEAK_FUNC(sub_830F1B10);
PPC_FUNC_IMPL(__imp__sub_830F1B10) {
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
	// lwz r11,132(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 132);
	// addi r3,r11,432
	ctx.r3.s64 = ctx.r11.s64 + 432;
	// bl 0x8311e030
	ctx.lr = 0x830F1B2C;
	sub_8311E030(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830F1B3C"))) PPC_WEAK_FUNC(sub_830F1B3C);
PPC_FUNC_IMPL(__imp__sub_830F1B3C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_830F1B40"))) PPC_WEAK_FUNC(sub_830F1B40);
PPC_FUNC_IMPL(__imp__sub_830F1B40) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// bl 0x830f1810
	ctx.lr = 0x830F1B60;
	sub_830F1810(ctx, base);
	// clrlwi. r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x830f1b70
	if (ctx.cr0.eq) goto loc_830F1B70;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x830dd3e0
	ctx.lr = 0x830F1B70;
	sub_830DD3E0(ctx, base);
loc_830F1B70:
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

__attribute__((alias("__imp__sub_830F1B8C"))) PPC_WEAK_FUNC(sub_830F1B8C);
PPC_FUNC_IMPL(__imp__sub_830F1B8C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_830F1B90"))) PPC_WEAK_FUNC(sub_830F1B90);
PPC_FUNC_IMPL(__imp__sub_830F1B90) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lwz r25,17952(r26)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r26.u32 + 17952);
	// lwz r16,13976(r28)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r28.u32 + 13976);
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x833a01ac
	ctx.lr = 0x830F1BA0;
	__savegprlr_29(ctx, base);
	// addi r31,r1,-144
	ctx.r31.s64 = ctx.r1.s64 + -144;
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r3,120(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 120);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r29,220(r30)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r30.u32 + 220);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x830F1BC4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r31,80
	ctx.r3.s64 = ctx.r31.s64 + 80;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// bl 0x83114120
	ctx.lr = 0x830F1BD8;
	sub_83114120(ctx, base);
loc_830F1BD8:
	// lwz r11,88(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 88);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x830f1bfc
	if (!ctx.cr6.eq) goto loc_830F1BFC;
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
	// beq cr6,0x830f1c00
	if (ctx.cr6.eq) goto loc_830F1C00;
loc_830F1BFC:
	// li r11,1
	ctx.r11.s64 = 1;
loc_830F1C00:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x830f1c54
	if (ctx.cr0.eq) goto loc_830F1C54;
	// addi r3,r31,80
	ctx.r3.s64 = ctx.r31.s64 + 80;
	// bl 0x83102500
	ctx.lr = 0x830F1C10;
	sub_83102500(ctx, base);
	// lbz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 4);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x830f1bd8
	if (!ctx.cr0.eq) goto loc_830F1BD8;
	// lbz r11,5(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 5);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x830f1bd8
	if (ctx.cr0.eq) goto loc_830F1BD8;
	// lbz r11,16(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 16);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x830f1bd8
	if (ctx.cr0.eq) goto loc_830F1BD8;
	// li r8,0
	ctx.r8.s64 = 0;
	// lwz r5,8(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// li r7,0
	ctx.r7.s64 = 0;
	// lwz r3,172(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 172);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r4,13
	ctx.r4.s64 = 13;
	// bl 0x8311e658
	ctx.lr = 0x830F1C50;
	sub_8311E658(ctx, base);
	// b 0x830f1bd8
	goto loc_830F1BD8;
loc_830F1C54:
	// addi r3,r31,80
	ctx.r3.s64 = ctx.r31.s64 + 80;
	// bl 0x83114e70
	ctx.lr = 0x830F1C5C;
	sub_83114E70(ctx, base);
	// addi r1,r31,144
	ctx.r1.s64 = ctx.r31.s64 + 144;
	// b 0x833a01fc
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_830F1B98"))) PPC_WEAK_FUNC(sub_830F1B98);
PPC_FUNC_IMPL(__imp__sub_830F1B98) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x833a01ac
	ctx.lr = 0x830F1BA0;
	__savegprlr_29(ctx, base);
	// addi r31,r1,-144
	ctx.r31.s64 = ctx.r1.s64 + -144;
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r3,120(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 120);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r29,220(r30)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r30.u32 + 220);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x830F1BC4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r31,80
	ctx.r3.s64 = ctx.r31.s64 + 80;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// bl 0x83114120
	ctx.lr = 0x830F1BD8;
	sub_83114120(ctx, base);
loc_830F1BD8:
	// lwz r11,88(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 88);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x830f1bfc
	if (!ctx.cr6.eq) goto loc_830F1BFC;
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
	// beq cr6,0x830f1c00
	if (ctx.cr6.eq) goto loc_830F1C00;
loc_830F1BFC:
	// li r11,1
	ctx.r11.s64 = 1;
loc_830F1C00:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x830f1c54
	if (ctx.cr0.eq) goto loc_830F1C54;
	// addi r3,r31,80
	ctx.r3.s64 = ctx.r31.s64 + 80;
	// bl 0x83102500
	ctx.lr = 0x830F1C10;
	sub_83102500(ctx, base);
	// lbz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 4);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x830f1bd8
	if (!ctx.cr0.eq) goto loc_830F1BD8;
	// lbz r11,5(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 5);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x830f1bd8
	if (ctx.cr0.eq) goto loc_830F1BD8;
	// lbz r11,16(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 16);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x830f1bd8
	if (ctx.cr0.eq) goto loc_830F1BD8;
	// li r8,0
	ctx.r8.s64 = 0;
	// lwz r5,8(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// li r7,0
	ctx.r7.s64 = 0;
	// lwz r3,172(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 172);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r4,13
	ctx.r4.s64 = 13;
	// bl 0x8311e658
	ctx.lr = 0x830F1C50;
	sub_8311E658(ctx, base);
	// b 0x830f1bd8
	goto loc_830F1BD8;
loc_830F1C54:
	// addi r3,r31,80
	ctx.r3.s64 = ctx.r31.s64 + 80;
	// bl 0x83114e70
	ctx.lr = 0x830F1C5C;
	sub_83114E70(ctx, base);
	// addi r1,r31,144
	ctx.r1.s64 = ctx.r31.s64 + 144;
	// b 0x833a01fc
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_830F1C64"))) PPC_WEAK_FUNC(sub_830F1C64);
PPC_FUNC_IMPL(__imp__sub_830F1C64) {
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
	// addi r3,r31,80
	ctx.r3.s64 = ctx.r31.s64 + 80;
	// bl 0x83114e70
	ctx.lr = 0x830F1C7C;
	sub_83114E70(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830F1C8C"))) PPC_WEAK_FUNC(sub_830F1C8C);
PPC_FUNC_IMPL(__imp__sub_830F1C8C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_830F1C90"))) PPC_WEAK_FUNC(sub_830F1C90);
PPC_FUNC_IMPL(__imp__sub_830F1C90) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lwz r25,17952(r26)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r26.u32 + 17952);
	// lwz r16,14048(r28)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r28.u32 + 14048);
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x833a01a8
	ctx.lr = 0x830F1CA0;
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
	// li r3,648
	ctx.r3.s64 = 648;
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// bl 0x830dd390
	ctx.lr = 0x830F1CC4;
	sub_830DD390(ctx, base);
	// stw r3,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r3.u32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x830f1ce4
	if (ctx.cr0.eq) goto loc_830F1CE4;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x831246a0
	ctx.lr = 0x830F1CE0;
	sub_831246A0(ctx, base);
	// b 0x830f1ce8
	goto loc_830F1CE8;
loc_830F1CE4:
	// li r3,0
	ctx.r3.s64 = 0;
loc_830F1CE8:
	// addi r1,r31,128
	ctx.r1.s64 = ctx.r31.s64 + 128;
	// b 0x833a01f8
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_830F1C98"))) PPC_WEAK_FUNC(sub_830F1C98);
PPC_FUNC_IMPL(__imp__sub_830F1C98) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x833a01a8
	ctx.lr = 0x830F1CA0;
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
	// li r3,648
	ctx.r3.s64 = 648;
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// bl 0x830dd390
	ctx.lr = 0x830F1CC4;
	sub_830DD390(ctx, base);
	// stw r3,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r3.u32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x830f1ce4
	if (ctx.cr0.eq) goto loc_830F1CE4;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x831246a0
	ctx.lr = 0x830F1CE0;
	sub_831246A0(ctx, base);
	// b 0x830f1ce8
	goto loc_830F1CE8;
loc_830F1CE4:
	// li r3,0
	ctx.r3.s64 = 0;
loc_830F1CE8:
	// addi r1,r31,128
	ctx.r1.s64 = ctx.r31.s64 + 128;
	// b 0x833a01f8
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_830F1CF0"))) PPC_WEAK_FUNC(sub_830F1CF0);
PPC_FUNC_IMPL(__imp__sub_830F1CF0) {
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
	ctx.lr = 0x830F1D0C;
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

__attribute__((alias("__imp__sub_830F1D1C"))) PPC_WEAK_FUNC(sub_830F1D1C);
PPC_FUNC_IMPL(__imp__sub_830F1D1C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_830F1D20"))) PPC_WEAK_FUNC(sub_830F1D20);
PPC_FUNC_IMPL(__imp__sub_830F1D20) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lwz r25,17952(r26)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r26.u32 + 17952);
	// lwz r16,14128(r28)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r28.u32 + 14128);
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x833a01a4
	ctx.lr = 0x830F1D30;
	__savegprlr_27(ctx, base);
	// addi r31,r1,-144
	ctx.r31.s64 = ctx.r1.s64 + -144;
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32228
	ctx.r11.s64 = -2112094208;
	// stw r6,188(r31)
	PPC_STORE_U32(ctx.r31.u32 + 188, ctx.r6.u32);
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// addi r4,r11,-5600
	ctx.r4.s64 = ctx.r11.s64 + -5600;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// mr r30,r6
	ctx.r30.u64 = ctx.r6.u64;
	// bl 0x830d8d28
	ctx.lr = 0x830F1D58;
	sub_830D8D28(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x830f1d94
	if (ctx.cr0.eq) goto loc_830F1D94;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// li r3,528
	ctx.r3.s64 = 528;
	// bl 0x830dd390
	ctx.lr = 0x830F1D6C;
	sub_830DD390(ctx, base);
	// stw r3,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r3.u32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x830f1d8c
	if (ctx.cr0.eq) goto loc_830F1D8C;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x831358d0
	ctx.lr = 0x830F1D88;
	sub_831358D0(ctx, base);
	// b 0x830f1d90
	goto loc_830F1D90;
loc_830F1D8C:
	// li r3,0
	ctx.r3.s64 = 0;
loc_830F1D90:
	// b 0x830f1e7c
	goto loc_830F1E7C;
loc_830F1D94:
	// lis r11,-32228
	ctx.r11.s64 = -2112094208;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// addi r4,r11,-5572
	ctx.r4.s64 = ctx.r11.s64 + -5572;
	// bl 0x830d8d28
	ctx.lr = 0x830F1DA4;
	sub_830D8D28(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x830f1de0
	if (ctx.cr0.eq) goto loc_830F1DE0;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// li r3,648
	ctx.r3.s64 = 648;
	// bl 0x830dd390
	ctx.lr = 0x830F1DB8;
	sub_830DD390(ctx, base);
	// stw r3,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r3.u32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x830f1dd8
	if (ctx.cr0.eq) goto loc_830F1DD8;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x831246a0
	ctx.lr = 0x830F1DD4;
	sub_831246A0(ctx, base);
	// b 0x830f1ddc
	goto loc_830F1DDC;
loc_830F1DD8:
	// li r3,0
	ctx.r3.s64 = 0;
loc_830F1DDC:
	// b 0x830f1e7c
	goto loc_830F1E7C;
loc_830F1DE0:
	// lis r11,-32228
	ctx.r11.s64 = -2112094208;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// addi r4,r11,-5544
	ctx.r4.s64 = ctx.r11.s64 + -5544;
	// bl 0x830d8d28
	ctx.lr = 0x830F1DF0;
	sub_830D8D28(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x830f1e2c
	if (ctx.cr0.eq) goto loc_830F1E2C;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// li r3,636
	ctx.r3.s64 = 636;
	// bl 0x830dd390
	ctx.lr = 0x830F1E04;
	sub_830DD390(ctx, base);
	// stw r3,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r3.u32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x830f1e24
	if (ctx.cr0.eq) goto loc_830F1E24;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x83131d68
	ctx.lr = 0x830F1E20;
	sub_83131D68(ctx, base);
	// b 0x830f1e28
	goto loc_830F1E28;
loc_830F1E24:
	// li r3,0
	ctx.r3.s64 = 0;
loc_830F1E28:
	// b 0x830f1e7c
	goto loc_830F1E7C;
loc_830F1E2C:
	// lis r11,-32228
	ctx.r11.s64 = -2112094208;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// addi r4,r11,-5516
	ctx.r4.s64 = ctx.r11.s64 + -5516;
	// bl 0x830d8d28
	ctx.lr = 0x830F1E3C;
	sub_830D8D28(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x830f1e78
	if (ctx.cr0.eq) goto loc_830F1E78;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// li r3,532
	ctx.r3.s64 = 532;
	// bl 0x830dd390
	ctx.lr = 0x830F1E50;
	sub_830DD390(ctx, base);
	// stw r3,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r3.u32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x830f1e70
	if (ctx.cr0.eq) goto loc_830F1E70;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x83129878
	ctx.lr = 0x830F1E6C;
	sub_83129878(ctx, base);
	// b 0x830f1e74
	goto loc_830F1E74;
loc_830F1E70:
	// li r3,0
	ctx.r3.s64 = 0;
loc_830F1E74:
	// b 0x830f1e7c
	goto loc_830F1E7C;
loc_830F1E78:
	// li r3,0
	ctx.r3.s64 = 0;
loc_830F1E7C:
	// addi r1,r31,144
	ctx.r1.s64 = ctx.r31.s64 + 144;
	// b 0x833a01f4
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_830F1D28"))) PPC_WEAK_FUNC(sub_830F1D28);
PPC_FUNC_IMPL(__imp__sub_830F1D28) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x833a01a4
	ctx.lr = 0x830F1D30;
	__savegprlr_27(ctx, base);
	// addi r31,r1,-144
	ctx.r31.s64 = ctx.r1.s64 + -144;
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32228
	ctx.r11.s64 = -2112094208;
	// stw r6,188(r31)
	PPC_STORE_U32(ctx.r31.u32 + 188, ctx.r6.u32);
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// addi r4,r11,-5600
	ctx.r4.s64 = ctx.r11.s64 + -5600;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// mr r30,r6
	ctx.r30.u64 = ctx.r6.u64;
	// bl 0x830d8d28
	ctx.lr = 0x830F1D58;
	sub_830D8D28(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x830f1d94
	if (ctx.cr0.eq) goto loc_830F1D94;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// li r3,528
	ctx.r3.s64 = 528;
	// bl 0x830dd390
	ctx.lr = 0x830F1D6C;
	sub_830DD390(ctx, base);
	// stw r3,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r3.u32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x830f1d8c
	if (ctx.cr0.eq) goto loc_830F1D8C;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x831358d0
	ctx.lr = 0x830F1D88;
	sub_831358D0(ctx, base);
	// b 0x830f1d90
	goto loc_830F1D90;
loc_830F1D8C:
	// li r3,0
	ctx.r3.s64 = 0;
loc_830F1D90:
	// b 0x830f1e7c
	goto loc_830F1E7C;
loc_830F1D94:
	// lis r11,-32228
	ctx.r11.s64 = -2112094208;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// addi r4,r11,-5572
	ctx.r4.s64 = ctx.r11.s64 + -5572;
	// bl 0x830d8d28
	ctx.lr = 0x830F1DA4;
	sub_830D8D28(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x830f1de0
	if (ctx.cr0.eq) goto loc_830F1DE0;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// li r3,648
	ctx.r3.s64 = 648;
	// bl 0x830dd390
	ctx.lr = 0x830F1DB8;
	sub_830DD390(ctx, base);
	// stw r3,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r3.u32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x830f1dd8
	if (ctx.cr0.eq) goto loc_830F1DD8;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x831246a0
	ctx.lr = 0x830F1DD4;
	sub_831246A0(ctx, base);
	// b 0x830f1ddc
	goto loc_830F1DDC;
loc_830F1DD8:
	// li r3,0
	ctx.r3.s64 = 0;
loc_830F1DDC:
	// b 0x830f1e7c
	goto loc_830F1E7C;
loc_830F1DE0:
	// lis r11,-32228
	ctx.r11.s64 = -2112094208;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// addi r4,r11,-5544
	ctx.r4.s64 = ctx.r11.s64 + -5544;
	// bl 0x830d8d28
	ctx.lr = 0x830F1DF0;
	sub_830D8D28(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x830f1e2c
	if (ctx.cr0.eq) goto loc_830F1E2C;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// li r3,636
	ctx.r3.s64 = 636;
	// bl 0x830dd390
	ctx.lr = 0x830F1E04;
	sub_830DD390(ctx, base);
	// stw r3,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r3.u32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x830f1e24
	if (ctx.cr0.eq) goto loc_830F1E24;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x83131d68
	ctx.lr = 0x830F1E20;
	sub_83131D68(ctx, base);
	// b 0x830f1e28
	goto loc_830F1E28;
loc_830F1E24:
	// li r3,0
	ctx.r3.s64 = 0;
loc_830F1E28:
	// b 0x830f1e7c
	goto loc_830F1E7C;
loc_830F1E2C:
	// lis r11,-32228
	ctx.r11.s64 = -2112094208;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// addi r4,r11,-5516
	ctx.r4.s64 = ctx.r11.s64 + -5516;
	// bl 0x830d8d28
	ctx.lr = 0x830F1E3C;
	sub_830D8D28(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x830f1e78
	if (ctx.cr0.eq) goto loc_830F1E78;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// li r3,532
	ctx.r3.s64 = 532;
	// bl 0x830dd390
	ctx.lr = 0x830F1E50;
	sub_830DD390(ctx, base);
	// stw r3,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r3.u32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x830f1e70
	if (ctx.cr0.eq) goto loc_830F1E70;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x83129878
	ctx.lr = 0x830F1E6C;
	sub_83129878(ctx, base);
	// b 0x830f1e74
	goto loc_830F1E74;
loc_830F1E70:
	// li r3,0
	ctx.r3.s64 = 0;
loc_830F1E74:
	// b 0x830f1e7c
	goto loc_830F1E7C;
loc_830F1E78:
	// li r3,0
	ctx.r3.s64 = 0;
loc_830F1E7C:
	// addi r1,r31,144
	ctx.r1.s64 = ctx.r31.s64 + 144;
	// b 0x833a01f4
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_830F1E84"))) PPC_WEAK_FUNC(sub_830F1E84);
PPC_FUNC_IMPL(__imp__sub_830F1E84) {
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
	// lwz r4,188(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 188);
	// lwz r3,80(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	// bl 0x830dd3e0
	ctx.lr = 0x830F1EA0;
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

__attribute__((alias("__imp__sub_830F1EB0"))) PPC_WEAK_FUNC(sub_830F1EB0);
PPC_FUNC_IMPL(__imp__sub_830F1EB0) {
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
	// lwz r4,188(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 188);
	// lwz r3,80(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	// bl 0x830dd3e0
	ctx.lr = 0x830F1ECC;
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

__attribute__((alias("__imp__sub_830F1EDC"))) PPC_WEAK_FUNC(sub_830F1EDC);
PPC_FUNC_IMPL(__imp__sub_830F1EDC) {
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
	// lwz r4,188(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 188);
	// lwz r3,80(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	// bl 0x830dd3e0
	ctx.lr = 0x830F1EF8;
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

__attribute__((alias("__imp__sub_830F1F08"))) PPC_WEAK_FUNC(sub_830F1F08);
PPC_FUNC_IMPL(__imp__sub_830F1F08) {
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
	// lwz r4,188(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 188);
	// lwz r3,80(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	// bl 0x830dd3e0
	ctx.lr = 0x830F1F24;
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

__attribute__((alias("__imp__sub_830F1F34"))) PPC_WEAK_FUNC(sub_830F1F34);
PPC_FUNC_IMPL(__imp__sub_830F1F34) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_830F1F38"))) PPC_WEAK_FUNC(sub_830F1F38);
PPC_FUNC_IMPL(__imp__sub_830F1F38) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x833a019c
	ctx.lr = 0x830F1F40;
	__savegprlr_25(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// mr r5,r9
	ctx.r5.u64 = ctx.r9.u64;
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r28,r6
	ctx.r28.u64 = ctx.r6.u64;
	// lwz r6,236(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 236);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r27,r7
	ctx.r27.u64 = ctx.r7.u64;
	// mr r26,r8
	ctx.r26.u64 = ctx.r8.u64;
	// mr r25,r10
	ctx.r25.u64 = ctx.r10.u64;
	// bl 0x83136668
	ctx.lr = 0x830F1F70;
	sub_83136668(ctx, base);
	// lwz r9,228(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 228);
	// lis r10,-32228
	ctx.r10.s64 = -2112094208;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r25,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r25.u32);
	// addi r8,r10,14232
	ctx.r8.s64 = ctx.r10.s64 + 14232;
	// stw r30,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r30.u32);
	// stw r29,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r29.u32);
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r28,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r28.u32);
	// stw r9,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r9.u32);
	// stw r8,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r8.u32);
	// sth r11,20(r31)
	PPC_STORE_U16(ctx.r31.u32 + 20, ctx.r11.u16);
	// sth r11,22(r31)
	PPC_STORE_U16(ctx.r31.u32 + 22, ctx.r11.u16);
	// stw r27,44(r31)
	PPC_STORE_U32(ctx.r31.u32 + 44, ctx.r27.u32);
	// stw r26,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r26.u32);
	// lwz r11,48(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 48);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x830f1fec
	if (ctx.cr6.eq) goto loc_830F1FEC;
	// rlwinm. r9,r11,0,30,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq 0x830f1fc4
	if (ctx.cr0.eq) goto loc_830F1FC4;
	// sth r10,20(r31)
	PPC_STORE_U16(ctx.r31.u32 + 20, ctx.r10.u16);
loc_830F1FC4:
	// rlwinm. r9,r11,0,29,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x4;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq 0x830f1fd8
	if (ctx.cr0.eq) goto loc_830F1FD8;
	// lhz r9,20(r31)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r31.u32 + 20);
	// ori r9,r9,2
	ctx.r9.u64 = ctx.r9.u64 | 2;
	// sth r9,20(r31)
	PPC_STORE_U16(ctx.r31.u32 + 20, ctx.r9.u16);
loc_830F1FD8:
	// clrlwi. r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x830f1fec
	if (ctx.cr0.eq) goto loc_830F1FEC;
	// lhz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 20);
	// ori r11,r11,4
	ctx.r11.u64 = ctx.r11.u64 | 4;
	// sth r11,20(r31)
	PPC_STORE_U16(ctx.r31.u32 + 20, ctx.r11.u16);
loc_830F1FEC:
	// lwz r11,44(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 44);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x830f2018
	if (ctx.cr6.eq) goto loc_830F2018;
	// rlwinm. r9,r11,0,30,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq 0x830f2004
	if (ctx.cr0.eq) goto loc_830F2004;
	// sth r10,22(r31)
	PPC_STORE_U16(ctx.r31.u32 + 22, ctx.r10.u16);
loc_830F2004:
	// rlwinm. r11,r11,0,29,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x4;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x830f2018
	if (ctx.cr0.eq) goto loc_830F2018;
	// lhz r11,22(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 22);
	// ori r11,r11,2
	ctx.r11.u64 = ctx.r11.u64 | 2;
	// sth r11,22(r31)
	PPC_STORE_U16(ctx.r31.u32 + 22, ctx.r11.u16);
loc_830F2018:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x833a01ec
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_830F2024"))) PPC_WEAK_FUNC(sub_830F2024);
PPC_FUNC_IMPL(__imp__sub_830F2024) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_830F2028"))) PPC_WEAK_FUNC(sub_830F2028);
PPC_FUNC_IMPL(__imp__sub_830F2028) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,28(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 28);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r3,24(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830F2038"))) PPC_WEAK_FUNC(sub_830F2038);
PPC_FUNC_IMPL(__imp__sub_830F2038) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// lwz r10,28(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 28);
	// lwz r3,124(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 124);
	// lwz r11,8(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r4,16(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// lwz r11,36(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 36);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_830F205C"))) PPC_WEAK_FUNC(sub_830F205C);
PPC_FUNC_IMPL(__imp__sub_830F205C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_830F2060"))) PPC_WEAK_FUNC(sub_830F2060);
PPC_FUNC_IMPL(__imp__sub_830F2060) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,28(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 28);
	// lwz r11,52(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 52);
	// clrlwi r3,r11,31
	ctx.r3.u64 = ctx.r11.u32 & 0x1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830F2070"))) PPC_WEAK_FUNC(sub_830F2070);
PPC_FUNC_IMPL(__imp__sub_830F2070) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x833a01a0
	ctx.lr = 0x830F2078;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,16(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x830f2128
	if (ctx.cr6.eq) goto loc_830F2128;
	// lwz r11,12(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// li r26,0
	ctx.r26.s64 = 0;
	// mr r27,r26
	ctx.r27.u64 = ctx.r26.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x830f2124
	if (!ctx.cr6.gt) goto loc_830F2124;
	// mr r29,r26
	ctx.r29.u64 = ctx.r26.u64;
loc_830F20A4:
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lwzx r30,r11,r29
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r29.u32);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x830f2108
	if (ctx.cr6.eq) goto loc_830F2108;
loc_830F20B4:
	// lbz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 4);
	// lwz r28,4(r30)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x830f20e4
	if (ctx.cr0.eq) goto loc_830F20E4;
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x830f20e4
	if (ctx.cr6.eq) goto loc_830F20E4;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x830F20E4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_830F20E4:
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x830F20FC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r30,r28
	ctx.r30.u64 = ctx.r28.u64;
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// bne cr6,0x830f20b4
	if (!ctx.cr6.eq) goto loc_830F20B4;
loc_830F2108:
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addi r27,r27,1
	ctx.r27.s64 = ctx.r27.s64 + 1;
	// stwx r26,r11,r29
	PPC_STORE_U32(ctx.r11.u32 + ctx.r29.u32, ctx.r26.u32);
	// addi r29,r29,4
	ctx.r29.s64 = ctx.r29.s64 + 4;
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// cmplw cr6,r27,r11
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x830f20a4
	if (ctx.cr6.lt) goto loc_830F20A4;
loc_830F2124:
	// stw r26,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r26.u32);
loc_830F2128:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x833a01f0
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_830F2130"))) PPC_WEAK_FUNC(sub_830F2130);
PPC_FUNC_IMPL(__imp__sub_830F2130) {
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
	// bl 0x830f2070
	ctx.lr = 0x830F2148;
	sub_830F2070(ctx, base);
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
	ctx.lr = 0x830F2160;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r3,20(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x830f2180
	if (ctx.cr6.eq) goto loc_830F2180;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x830F2180;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_830F2180:
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

__attribute__((alias("__imp__sub_830F2194"))) PPC_WEAK_FUNC(sub_830F2194);
PPC_FUNC_IMPL(__imp__sub_830F2194) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_830F2198"))) PPC_WEAK_FUNC(sub_830F2198);
PPC_FUNC_IMPL(__imp__sub_830F2198) {
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
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x830f21cc
	if (ctx.cr6.eq) goto loc_830F21CC;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x830F21CC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_830F21CC:
	// lwz r31,12(r31)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x830f21e8
	if (ctx.cr6.eq) goto loc_830F21E8;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x830f2130
	ctx.lr = 0x830F21E0;
	sub_830F2130(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x830dd3e0
	ctx.lr = 0x830F21E8;
	sub_830DD3E0(ctx, base);
loc_830F21E8:
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

__attribute__((alias("__imp__sub_830F21FC"))) PPC_WEAK_FUNC(sub_830F21FC);
PPC_FUNC_IMPL(__imp__sub_830F21FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_830F2200"))) PPC_WEAK_FUNC(sub_830F2200);
PPC_FUNC_IMPL(__imp__sub_830F2200) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lwz r25,17952(r26)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r26.u32 + 17952);
	// lwz r16,14264(r28)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r28.u32 + 14264);
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x833a01ac
	ctx.lr = 0x830F2210;
	__savegprlr_29(ctx, base);
	// addi r31,r1,-128
	ctx.r31.s64 = ctx.r1.s64 + -128;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32228
	ctx.r11.s64 = -2112094208;
	// stw r3,148(r31)
	PPC_STORE_U32(ctx.r31.u32 + 148, ctx.r3.u32);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// addi r11,r11,14232
	ctx.r11.s64 = ctx.r11.s64 + 14232;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// lwz r30,48(r3)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x830f224c
	if (ctx.cr6.eq) goto loc_830F224C;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stw r30,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r30.u32);
	// bl 0x830f2198
	ctx.lr = 0x830F2244;
	sub_830F2198(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x830dd3e0
	ctx.lr = 0x830F224C;
	sub_830DD3E0(ctx, base);
loc_830F224C:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x831366d0
	ctx.lr = 0x830F2254;
	sub_831366D0(ctx, base);
	// addi r1,r31,128
	ctx.r1.s64 = ctx.r31.s64 + 128;
	// b 0x833a01fc
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_830F2208"))) PPC_WEAK_FUNC(sub_830F2208);
PPC_FUNC_IMPL(__imp__sub_830F2208) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x833a01ac
	ctx.lr = 0x830F2210;
	__savegprlr_29(ctx, base);
	// addi r31,r1,-128
	ctx.r31.s64 = ctx.r1.s64 + -128;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32228
	ctx.r11.s64 = -2112094208;
	// stw r3,148(r31)
	PPC_STORE_U32(ctx.r31.u32 + 148, ctx.r3.u32);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// addi r11,r11,14232
	ctx.r11.s64 = ctx.r11.s64 + 14232;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// lwz r30,48(r3)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x830f224c
	if (ctx.cr6.eq) goto loc_830F224C;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stw r30,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r30.u32);
	// bl 0x830f2198
	ctx.lr = 0x830F2244;
	sub_830F2198(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x830dd3e0
	ctx.lr = 0x830F224C;
	sub_830DD3E0(ctx, base);
loc_830F224C:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x831366d0
	ctx.lr = 0x830F2254;
	sub_831366D0(ctx, base);
	// addi r1,r31,128
	ctx.r1.s64 = ctx.r31.s64 + 128;
	// b 0x833a01fc
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_830F225C"))) PPC_WEAK_FUNC(sub_830F225C);
PPC_FUNC_IMPL(__imp__sub_830F225C) {
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
	// bl 0x831366d0
	ctx.lr = 0x830F2274;
	sub_831366D0(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830F2284"))) PPC_WEAK_FUNC(sub_830F2284);
PPC_FUNC_IMPL(__imp__sub_830F2284) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_830F2288"))) PPC_WEAK_FUNC(sub_830F2288);
PPC_FUNC_IMPL(__imp__sub_830F2288) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// bl 0x830f2208
	ctx.lr = 0x830F22A8;
	sub_830F2208(ctx, base);
	// clrlwi. r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x830f22b8
	if (ctx.cr0.eq) goto loc_830F22B8;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x830dd3e0
	ctx.lr = 0x830F22B8;
	sub_830DD3E0(ctx, base);
loc_830F22B8:
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

__attribute__((alias("__imp__sub_830F22D4"))) PPC_WEAK_FUNC(sub_830F22D4);
PPC_FUNC_IMPL(__imp__sub_830F22D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_830F22D8"))) PPC_WEAK_FUNC(sub_830F22D8);
PPC_FUNC_IMPL(__imp__sub_830F22D8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32228
	ctx.r11.s64 = -2112094208;
	// lis r10,-32228
	ctx.r10.s64 = -2112094208;
	// lis r9,-32228
	ctx.r9.s64 = -2112094208;
	// addi r8,r11,5004
	ctx.r8.s64 = ctx.r11.s64 + 5004;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r10,r10,17700
	ctx.r10.s64 = ctx.r10.s64 + 17700;
	// stw r8,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r8.u32);
	// addi r9,r9,17688
	ctx.r9.s64 = ctx.r9.s64 + 17688;
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// stw r9,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r9.u32);
	// stw r5,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r5.u32);
	// stw r4,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r4.u32);
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

__attribute__((alias("__imp__sub_830F2320"))) PPC_WEAK_FUNC(sub_830F2320);
PPC_FUNC_IMPL(__imp__sub_830F2320) {
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
	// lis r10,-32228
	ctx.r10.s64 = -2112094208;
	// addi r11,r11,5004
	ctx.r11.s64 = ctx.r11.s64 + 5004;
	// addi r10,r10,5004
	ctx.r10.s64 = ctx.r10.s64 + 5004;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// clrlwi. r9,r4,31
	ctx.r9.u64 = ctx.r4.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// beq 0x830f2358
	if (ctx.cr0.eq) goto loc_830F2358;
	// bl 0x82e01698
	ctx.lr = 0x830F2358;
	sub_82E01698(ctx, base);
loc_830F2358:
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

__attribute__((alias("__imp__sub_830F2370"))) PPC_WEAK_FUNC(sub_830F2370);
PPC_FUNC_IMPL(__imp__sub_830F2370) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// addi r30,r3,4
	ctx.r30.s64 = ctx.r3.s64 + 4;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r4,12
	ctx.r4.s64 = 12;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x830F23A4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x830f23d8
	if (ctx.cr0.eq) goto loc_830F23D8;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x830F23C4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x830f23d8
	if (ctx.cr0.eq) goto loc_830F23D8;
	// lwz r3,20(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x830f23dc
	if (!ctx.cr6.eq) goto loc_830F23DC;
loc_830F23D8:
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
loc_830F23DC:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830F23F4"))) PPC_WEAK_FUNC(sub_830F23F4);
PPC_FUNC_IMPL(__imp__sub_830F23F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_830F23F8"))) PPC_WEAK_FUNC(sub_830F23F8);
PPC_FUNC_IMPL(__imp__sub_830F23F8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// addi r30,r3,4
	ctx.r30.s64 = ctx.r3.s64 + 4;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r4,12
	ctx.r4.s64 = 12;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x830F242C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x830f2468
	if (ctx.cr0.eq) goto loc_830F2468;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x830F244C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x830f2468
	if (ctx.cr0.eq) goto loc_830F2468;
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x830f2468
	if (ctx.cr6.eq) goto loc_830F2468;
	// lwz r3,24(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// b 0x830f246c
	goto loc_830F246C;
loc_830F2468:
	// lwz r3,16(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
loc_830F246C:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830F2484"))) PPC_WEAK_FUNC(sub_830F2484);
PPC_FUNC_IMPL(__imp__sub_830F2484) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_830F2488"))) PPC_WEAK_FUNC(sub_830F2488);
PPC_FUNC_IMPL(__imp__sub_830F2488) {
	PPC_FUNC_PROLOGUE();
	// cmpwi cr6,r4,3
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 3, ctx.xer);
	// beq cr6,0x830f24e8
	if (ctx.cr6.eq) goto loc_830F24E8;
	// cmpwi cr6,r4,4
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 4, ctx.xer);
	// beq cr6,0x830f24e0
	if (ctx.cr6.eq) goto loc_830F24E0;
	// cmpwi cr6,r4,7
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 7, ctx.xer);
	// beq cr6,0x830f24d8
	if (ctx.cr6.eq) goto loc_830F24D8;
	// cmpwi cr6,r4,8
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 8, ctx.xer);
	// beq cr6,0x830f24d0
	if (ctx.cr6.eq) goto loc_830F24D0;
	// cmpwi cr6,r4,10
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 10, ctx.xer);
	// beq cr6,0x830f24c8
	if (ctx.cr6.eq) goto loc_830F24C8;
	// cmpwi cr6,r4,11
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 11, ctx.xer);
	// beq cr6,0x830f24c0
	if (ctx.cr6.eq) goto loc_830F24C0;
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_830F24C0:
	// lwz r3,28(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 28);
	// blr 
	return;
loc_830F24C8:
	// lwz r3,24(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// blr 
	return;
loc_830F24D0:
	// lwz r3,20(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// blr 
	return;
loc_830F24D8:
	// lwz r3,16(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// blr 
	return;
loc_830F24E0:
	// lwz r3,12(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// blr 
	return;
loc_830F24E8:
	// lwz r3,8(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830F24F0"))) PPC_WEAK_FUNC(sub_830F24F0);
PPC_FUNC_IMPL(__imp__sub_830F24F0) {
	PPC_FUNC_PROLOGUE();
	// cmplwi cr6,r4,1
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 1, ctx.xer);
	// blt cr6,0x830f2580
	if (ctx.cr6.lt) goto loc_830F2580;
	// beq cr6,0x830f2574
	if (ctx.cr6.eq) goto loc_830F2574;
	// cmplwi cr6,r4,3
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 3, ctx.xer);
	// blt cr6,0x830f255c
	if (ctx.cr6.lt) goto loc_830F255C;
	// cmplwi cr6,r4,5
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 5, ctx.xer);
	// beq cr6,0x830f2550
	if (ctx.cr6.eq) goto loc_830F2550;
	// cmplwi cr6,r4,6
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 6, ctx.xer);
	// beq cr6,0x830f2544
	if (ctx.cr6.eq) goto loc_830F2544;
	// cmplwi cr6,r4,9
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 9, ctx.xer);
	// beq cr6,0x830f2538
	if (ctx.cr6.eq) goto loc_830F2538;
	// cmplwi cr6,r4,12
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 12, ctx.xer);
	// beq cr6,0x830f252c
	if (ctx.cr6.eq) goto loc_830F252C;
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_830F252C:
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// rlwinm r3,r11,23,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 23) & 0x1;
	// blr 
	return;
loc_830F2538:
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// rlwinm r3,r11,24,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 24) & 0x1;
	// blr 
	return;
loc_830F2544:
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// rlwinm r3,r11,25,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 25) & 0x1;
	// blr 
	return;
loc_830F2550:
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// rlwinm r3,r11,26,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 26) & 0x1;
	// blr 
	return;
loc_830F255C:
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// rlwinm r11,r11,0,26,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x20;
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// addi r3,r11,15
	ctx.r3.s64 = ctx.r11.s64 + 15;
	// blr 
	return;
loc_830F2574:
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// srawi r11,r11,2
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x3) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 2;
	// b 0x830f2584
	goto loc_830F2584;
loc_830F2580:
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
loc_830F2584:
	// clrlwi r3,r11,30
	ctx.r3.u64 = ctx.r11.u32 & 0x3;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830F258C"))) PPC_WEAK_FUNC(sub_830F258C);
PPC_FUNC_IMPL(__imp__sub_830F258C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_830F2590"))) PPC_WEAK_FUNC(sub_830F2590);
PPC_FUNC_IMPL(__imp__sub_830F2590) {
	PPC_FUNC_PROLOGUE();
	// cmpwi cr6,r4,3
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 3, ctx.xer);
	// beq cr6,0x830f25e8
	if (ctx.cr6.eq) goto loc_830F25E8;
	// cmpwi cr6,r4,4
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 4, ctx.xer);
	// beq cr6,0x830f25e0
	if (ctx.cr6.eq) goto loc_830F25E0;
	// cmpwi cr6,r4,7
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 7, ctx.xer);
	// beq cr6,0x830f25d8
	if (ctx.cr6.eq) goto loc_830F25D8;
	// cmpwi cr6,r4,8
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 8, ctx.xer);
	// beq cr6,0x830f25d0
	if (ctx.cr6.eq) goto loc_830F25D0;
	// cmpwi cr6,r4,10
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 10, ctx.xer);
	// beq cr6,0x830f25c8
	if (ctx.cr6.eq) goto loc_830F25C8;
	// cmpwi cr6,r4,11
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 11, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// stw r5,32(r3)
	PPC_STORE_U32(ctx.r3.u32 + 32, ctx.r5.u32);
	// blr 
	return;
loc_830F25C8:
	// stw r5,28(r3)
	PPC_STORE_U32(ctx.r3.u32 + 28, ctx.r5.u32);
	// blr 
	return;
loc_830F25D0:
	// stw r5,24(r3)
	PPC_STORE_U32(ctx.r3.u32 + 24, ctx.r5.u32);
	// blr 
	return;
loc_830F25D8:
	// stw r5,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r5.u32);
	// blr 
	return;
loc_830F25E0:
	// stw r5,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r5.u32);
	// blr 
	return;
loc_830F25E8:
	// stw r5,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r5.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830F25F0"))) PPC_WEAK_FUNC(sub_830F25F0);
PPC_FUNC_IMPL(__imp__sub_830F25F0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// cmplwi cr6,r4,1
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 1, ctx.xer);
	// blt cr6,0x830f2670
	if (ctx.cr6.lt) goto loc_830F2670;
	// beq cr6,0x830f2668
	if (ctx.cr6.eq) goto loc_830F2668;
	// cmplwi cr6,r4,3
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 3, ctx.xer);
	// blt cr6,0x830f2658
	if (ctx.cr6.lt) goto loc_830F2658;
	// cmplwi cr6,r4,5
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 5, ctx.xer);
	// beq cr6,0x830f2650
	if (ctx.cr6.eq) goto loc_830F2650;
	// cmplwi cr6,r4,6
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 6, ctx.xer);
	// beq cr6,0x830f2648
	if (ctx.cr6.eq) goto loc_830F2648;
	// cmplwi cr6,r4,9
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 9, ctx.xer);
	// beq cr6,0x830f2640
	if (ctx.cr6.eq) goto loc_830F2640;
	// cmplwi cr6,r4,12
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 12, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// li r9,512
	ctx.r9.s64 = 512;
loc_830F2628:
	// subfic r11,r5,0
	ctx.xer.ca = ctx.r5.u32 <= 0;
	ctx.r11.s64 = 0 - ctx.r5.s64;
loc_830F262C:
	// subfe r11,r11,r11
	temp.u8 = (~ctx.r11.u32 + ctx.r11.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r11.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// lwz r10,8(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// and r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 & ctx.r9.u64;
	// or r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 | ctx.r10.u64;
	// b 0x830f267c
	goto loc_830F267C;
loc_830F2640:
	// li r9,256
	ctx.r9.s64 = 256;
	// b 0x830f2628
	goto loc_830F2628;
loc_830F2648:
	// li r9,128
	ctx.r9.s64 = 128;
	// b 0x830f2628
	goto loc_830F2628;
loc_830F2650:
	// li r9,64
	ctx.r9.s64 = 64;
	// b 0x830f2628
	goto loc_830F2628;
loc_830F2658:
	// addi r11,r5,-15
	ctx.r11.s64 = ctx.r5.s64 + -15;
	// li r9,32
	ctx.r9.s64 = 32;
	// addic r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// b 0x830f262c
	goto loc_830F262C;
loc_830F2668:
	// rlwinm r10,r5,2,28,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xC;
	// b 0x830f2674
	goto loc_830F2674;
loc_830F2670:
	// clrlwi r10,r5,30
	ctx.r10.u64 = ctx.r5.u32 & 0x3;
loc_830F2674:
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// or r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 | ctx.r11.u64;
loc_830F267C:
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830F2684"))) PPC_WEAK_FUNC(sub_830F2684);
PPC_FUNC_IMPL(__imp__sub_830F2684) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_830F2688"))) PPC_WEAK_FUNC(sub_830F2688);
PPC_FUNC_IMPL(__imp__sub_830F2688) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-4
	ctx.r3.s64 = ctx.r3.s64 + -4;
	// b 0x830f2320
	sub_830F2320(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_830F2690"))) PPC_WEAK_FUNC(sub_830F2690);
PPC_FUNC_IMPL(__imp__sub_830F2690) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// lwz r25,17952(r26)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r26.u32 + 17952);
	// lwz r16,17736(r28)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r28.u32 + 17736);
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x833a01a8
	ctx.lr = 0x830F26A0;
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
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// lis r10,-32228
	ctx.r10.s64 = -2112094208;
	// addi r11,r3,4
	ctx.r11.s64 = ctx.r3.s64 + 4;
	// addi r10,r10,5004
	ctx.r10.s64 = ctx.r10.s64 + 5004;
	// stw r11,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r11.u32);
	// stw r10,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r10.u32);
	// lis r10,-32228
	ctx.r10.s64 = -2112094208;
	// lis r9,-32228
	ctx.r9.s64 = -2112094208;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r10,r10,17700
	ctx.r10.s64 = ctx.r10.s64 + 17700;
	// addi r9,r9,17688
	ctx.r9.s64 = ctx.r9.s64 + 17688;
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// mr r3,r5
	ctx.r3.u64 = ctx.r5.u64;
	// stw r11,12(r30)
	PPC_STORE_U32(ctx.r30.u32 + 12, ctx.r11.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r11,16(r30)
	PPC_STORE_U32(ctx.r30.u32 + 16, ctx.r11.u32);
	// stw r11,20(r30)
	PPC_STORE_U32(ctx.r30.u32 + 20, ctx.r11.u32);
	// stw r11,24(r30)
	PPC_STORE_U32(ctx.r30.u32 + 24, ctx.r11.u32);
	// stw r11,28(r30)
	PPC_STORE_U32(ctx.r30.u32 + 28, ctx.r11.u32);
	// stw r11,32(r30)
	PPC_STORE_U32(ctx.r30.u32 + 32, ctx.r11.u32);
	// stw r9,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r9.u32);
	// lwz r11,0(r5)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x830F271C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lwz r10,8(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// clrlwi r11,r11,30
	ctx.r11.u64 = ctx.r11.u32 & 0x3;
	// li r4,1
	ctx.r4.s64 = 1;
	// or r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 | ctx.r10.u64;
	// stw r11,8(r30)
	PPC_STORE_U32(ctx.r30.u32 + 8, ctx.r11.u32);
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x830F2748;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lwz r10,8(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// rlwinm r11,r11,2,28,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xC;
	// li r4,2
	ctx.r4.s64 = 2;
	// or r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 | ctx.r10.u64;
	// stw r11,8(r30)
	PPC_STORE_U32(ctx.r30.u32 + 8, ctx.r11.u32);
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x830F2774;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r9,r3,-15
	ctx.r9.s64 = ctx.r3.s64 + -15;
	// lwz r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// li r10,32
	ctx.r10.s64 = 32;
	// addic r9,r9,-1
	ctx.xer.ca = ctx.r9.u32 > 0;
	ctx.r9.s64 = ctx.r9.s64 + -1;
	// li r4,5
	ctx.r4.s64 = 5;
	// subfe r9,r9,r9
	temp.u8 = (~ctx.r9.u32 + ctx.r9.u32 < ~ctx.r9.u32) | (~ctx.r9.u32 + ctx.r9.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r9.u64 = ~ctx.r9.u64 + ctx.r9.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// and r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 & ctx.r10.u64;
	// or r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 | ctx.r11.u64;
	// stw r11,8(r30)
	PPC_STORE_U32(ctx.r30.u32 + 8, ctx.r11.u32);
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x830F27AC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// subfic r11,r3,0
	ctx.xer.ca = ctx.r3.u32 <= 0;
	ctx.r11.s64 = 0 - ctx.r3.s64;
	// lwz r10,8(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// li r9,64
	ctx.r9.s64 = 64;
	// subfe r11,r11,r11
	temp.u8 = (~ctx.r11.u32 + ctx.r11.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r11.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// and r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 & ctx.r9.u64;
	// li r4,6
	ctx.r4.s64 = 6;
	// or r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 | ctx.r10.u64;
	// stw r11,8(r30)
	PPC_STORE_U32(ctx.r30.u32 + 8, ctx.r11.u32);
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x830F27E0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// subfic r11,r3,0
	ctx.xer.ca = ctx.r3.u32 <= 0;
	ctx.r11.s64 = 0 - ctx.r3.s64;
	// li r9,128
	ctx.r9.s64 = 128;
	// lwz r10,8(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// subfe r11,r11,r11
	temp.u8 = (~ctx.r11.u32 + ctx.r11.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r11.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// and r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 & ctx.r9.u64;
	// li r4,9
	ctx.r4.s64 = 9;
	// or r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 | ctx.r10.u64;
	// stw r11,8(r30)
	PPC_STORE_U32(ctx.r30.u32 + 8, ctx.r11.u32);
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x830F2814;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// subfic r11,r3,0
	ctx.xer.ca = ctx.r3.u32 <= 0;
	ctx.r11.s64 = 0 - ctx.r3.s64;
	// lwz r10,8(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// li r9,256
	ctx.r9.s64 = 256;
	// subfe r11,r11,r11
	temp.u8 = (~ctx.r11.u32 + ctx.r11.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r11.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// and r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 & ctx.r9.u64;
	// li r4,12
	ctx.r4.s64 = 12;
	// or r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 | ctx.r10.u64;
	// stw r11,8(r30)
	PPC_STORE_U32(ctx.r30.u32 + 8, ctx.r11.u32);
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x830F2848;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// subfic r11,r3,0
	ctx.xer.ca = ctx.r3.u32 <= 0;
	ctx.r11.s64 = 0 - ctx.r3.s64;
	// lwz r10,8(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// li r9,512
	ctx.r9.s64 = 512;
	// subfe r11,r11,r11
	temp.u8 = (~ctx.r11.u32 + ctx.r11.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r11.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// and r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 & ctx.r9.u64;
	// li r4,3
	ctx.r4.s64 = 3;
	// or r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 | ctx.r10.u64;
	// stw r11,8(r30)
	PPC_STORE_U32(ctx.r30.u32 + 8, ctx.r11.u32);
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x830F287C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x830e6ce8
	ctx.lr = 0x830F2888;
	sub_830E6CE8(ctx, base);
	// stw r3,12(r30)
	PPC_STORE_U32(ctx.r30.u32 + 12, ctx.r3.u32);
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// li r4,4
	ctx.r4.s64 = 4;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x830F28A4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x830e6ce8
	ctx.lr = 0x830F28B0;
	sub_830E6CE8(ctx, base);
	// stw r3,16(r30)
	PPC_STORE_U32(ctx.r30.u32 + 16, ctx.r3.u32);
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// li r4,7
	ctx.r4.s64 = 7;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x830F28CC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x830e6ce8
	ctx.lr = 0x830F28D8;
	sub_830E6CE8(ctx, base);
	// stw r3,20(r30)
	PPC_STORE_U32(ctx.r30.u32 + 20, ctx.r3.u32);
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// li r4,8
	ctx.r4.s64 = 8;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x830F28F4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x830e6ce8
	ctx.lr = 0x830F2900;
	sub_830E6CE8(ctx, base);
	// stw r3,24(r30)
	PPC_STORE_U32(ctx.r30.u32 + 24, ctx.r3.u32);
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// li r4,10
	ctx.r4.s64 = 10;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x830F291C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x830e6ce8
	ctx.lr = 0x830F2928;
	sub_830E6CE8(ctx, base);
	// stw r3,28(r30)
	PPC_STORE_U32(ctx.r30.u32 + 28, ctx.r3.u32);
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// li r4,11
	ctx.r4.s64 = 11;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x830F2944;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x830e6ce8
	ctx.lr = 0x830F2950;
	sub_830E6CE8(ctx, base);
	// stw r3,32(r30)
	PPC_STORE_U32(ctx.r30.u32 + 32, ctx.r3.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r31,128
	ctx.r1.s64 = ctx.r31.s64 + 128;
	// b 0x833a01f8
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_830F2698"))) PPC_WEAK_FUNC(sub_830F2698);
PPC_FUNC_IMPL(__imp__sub_830F2698) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x833a01a8
	ctx.lr = 0x830F26A0;
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
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// lis r10,-32228
	ctx.r10.s64 = -2112094208;
	// addi r11,r3,4
	ctx.r11.s64 = ctx.r3.s64 + 4;
	// addi r10,r10,5004
	ctx.r10.s64 = ctx.r10.s64 + 5004;
	// stw r11,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r11.u32);
	// stw r10,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r10.u32);
	// lis r10,-32228
	ctx.r10.s64 = -2112094208;
	// lis r9,-32228
	ctx.r9.s64 = -2112094208;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r10,r10,17700
	ctx.r10.s64 = ctx.r10.s64 + 17700;
	// addi r9,r9,17688
	ctx.r9.s64 = ctx.r9.s64 + 17688;
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// mr r3,r5
	ctx.r3.u64 = ctx.r5.u64;
	// stw r11,12(r30)
	PPC_STORE_U32(ctx.r30.u32 + 12, ctx.r11.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r11,16(r30)
	PPC_STORE_U32(ctx.r30.u32 + 16, ctx.r11.u32);
	// stw r11,20(r30)
	PPC_STORE_U32(ctx.r30.u32 + 20, ctx.r11.u32);
	// stw r11,24(r30)
	PPC_STORE_U32(ctx.r30.u32 + 24, ctx.r11.u32);
	// stw r11,28(r30)
	PPC_STORE_U32(ctx.r30.u32 + 28, ctx.r11.u32);
	// stw r11,32(r30)
	PPC_STORE_U32(ctx.r30.u32 + 32, ctx.r11.u32);
	// stw r9,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r9.u32);
	// lwz r11,0(r5)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x830F271C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lwz r10,8(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// clrlwi r11,r11,30
	ctx.r11.u64 = ctx.r11.u32 & 0x3;
	// li r4,1
	ctx.r4.s64 = 1;
	// or r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 | ctx.r10.u64;
	// stw r11,8(r30)
	PPC_STORE_U32(ctx.r30.u32 + 8, ctx.r11.u32);
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x830F2748;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lwz r10,8(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// rlwinm r11,r11,2,28,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xC;
	// li r4,2
	ctx.r4.s64 = 2;
	// or r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 | ctx.r10.u64;
	// stw r11,8(r30)
	PPC_STORE_U32(ctx.r30.u32 + 8, ctx.r11.u32);
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x830F2774;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r9,r3,-15
	ctx.r9.s64 = ctx.r3.s64 + -15;
	// lwz r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// li r10,32
	ctx.r10.s64 = 32;
	// addic r9,r9,-1
	ctx.xer.ca = ctx.r9.u32 > 0;
	ctx.r9.s64 = ctx.r9.s64 + -1;
	// li r4,5
	ctx.r4.s64 = 5;
	// subfe r9,r9,r9
	temp.u8 = (~ctx.r9.u32 + ctx.r9.u32 < ~ctx.r9.u32) | (~ctx.r9.u32 + ctx.r9.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r9.u64 = ~ctx.r9.u64 + ctx.r9.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// and r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 & ctx.r10.u64;
	// or r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 | ctx.r11.u64;
	// stw r11,8(r30)
	PPC_STORE_U32(ctx.r30.u32 + 8, ctx.r11.u32);
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x830F27AC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// subfic r11,r3,0
	ctx.xer.ca = ctx.r3.u32 <= 0;
	ctx.r11.s64 = 0 - ctx.r3.s64;
	// lwz r10,8(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// li r9,64
	ctx.r9.s64 = 64;
	// subfe r11,r11,r11
	temp.u8 = (~ctx.r11.u32 + ctx.r11.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r11.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// and r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 & ctx.r9.u64;
	// li r4,6
	ctx.r4.s64 = 6;
	// or r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 | ctx.r10.u64;
	// stw r11,8(r30)
	PPC_STORE_U32(ctx.r30.u32 + 8, ctx.r11.u32);
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x830F27E0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// subfic r11,r3,0
	ctx.xer.ca = ctx.r3.u32 <= 0;
	ctx.r11.s64 = 0 - ctx.r3.s64;
	// li r9,128
	ctx.r9.s64 = 128;
	// lwz r10,8(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// subfe r11,r11,r11
	temp.u8 = (~ctx.r11.u32 + ctx.r11.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r11.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// and r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 & ctx.r9.u64;
	// li r4,9
	ctx.r4.s64 = 9;
	// or r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 | ctx.r10.u64;
	// stw r11,8(r30)
	PPC_STORE_U32(ctx.r30.u32 + 8, ctx.r11.u32);
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x830F2814;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// subfic r11,r3,0
	ctx.xer.ca = ctx.r3.u32 <= 0;
	ctx.r11.s64 = 0 - ctx.r3.s64;
	// lwz r10,8(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// li r9,256
	ctx.r9.s64 = 256;
	// subfe r11,r11,r11
	temp.u8 = (~ctx.r11.u32 + ctx.r11.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r11.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// and r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 & ctx.r9.u64;
	// li r4,12
	ctx.r4.s64 = 12;
	// or r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 | ctx.r10.u64;
	// stw r11,8(r30)
	PPC_STORE_U32(ctx.r30.u32 + 8, ctx.r11.u32);
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x830F2848;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// subfic r11,r3,0
	ctx.xer.ca = ctx.r3.u32 <= 0;
	ctx.r11.s64 = 0 - ctx.r3.s64;
	// lwz r10,8(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// li r9,512
	ctx.r9.s64 = 512;
	// subfe r11,r11,r11
	temp.u8 = (~ctx.r11.u32 + ctx.r11.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r11.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// and r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 & ctx.r9.u64;
	// li r4,3
	ctx.r4.s64 = 3;
	// or r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 | ctx.r10.u64;
	// stw r11,8(r30)
	PPC_STORE_U32(ctx.r30.u32 + 8, ctx.r11.u32);
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x830F287C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x830e6ce8
	ctx.lr = 0x830F2888;
	sub_830E6CE8(ctx, base);
	// stw r3,12(r30)
	PPC_STORE_U32(ctx.r30.u32 + 12, ctx.r3.u32);
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// li r4,4
	ctx.r4.s64 = 4;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x830F28A4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x830e6ce8
	ctx.lr = 0x830F28B0;
	sub_830E6CE8(ctx, base);
	// stw r3,16(r30)
	PPC_STORE_U32(ctx.r30.u32 + 16, ctx.r3.u32);
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// li r4,7
	ctx.r4.s64 = 7;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x830F28CC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x830e6ce8
	ctx.lr = 0x830F28D8;
	sub_830E6CE8(ctx, base);
	// stw r3,20(r30)
	PPC_STORE_U32(ctx.r30.u32 + 20, ctx.r3.u32);
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// li r4,8
	ctx.r4.s64 = 8;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x830F28F4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x830e6ce8
	ctx.lr = 0x830F2900;
	sub_830E6CE8(ctx, base);
	// stw r3,24(r30)
	PPC_STORE_U32(ctx.r30.u32 + 24, ctx.r3.u32);
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// li r4,10
	ctx.r4.s64 = 10;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x830F291C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x830e6ce8
	ctx.lr = 0x830F2928;
	sub_830E6CE8(ctx, base);
	// stw r3,28(r30)
	PPC_STORE_U32(ctx.r30.u32 + 28, ctx.r3.u32);
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// li r4,11
	ctx.r4.s64 = 11;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x830F2944;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x830e6ce8
	ctx.lr = 0x830F2950;
	sub_830E6CE8(ctx, base);
	// stw r3,32(r30)
	PPC_STORE_U32(ctx.r30.u32 + 32, ctx.r3.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r31,128
	ctx.r1.s64 = ctx.r31.s64 + 128;
	// b 0x833a01f8
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_830F2960"))) PPC_WEAK_FUNC(sub_830F2960);
PPC_FUNC_IMPL(__imp__sub_830F2960) {
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
	// bl 0x830d8c88
	ctx.lr = 0x830F2978;
	sub_830D8C88(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830F2988"))) PPC_WEAK_FUNC(sub_830F2988);
PPC_FUNC_IMPL(__imp__sub_830F2988) {
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
	// addi r3,r11,4
	ctx.r3.s64 = ctx.r11.s64 + 4;
	// bl 0x830d8c88
	ctx.lr = 0x830F29A4;
	sub_830D8C88(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830F29B4"))) PPC_WEAK_FUNC(sub_830F29B4);
PPC_FUNC_IMPL(__imp__sub_830F29B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_830F29B8"))) PPC_WEAK_FUNC(sub_830F29B8);
PPC_FUNC_IMPL(__imp__sub_830F29B8) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,16(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// cmplw cr6,r4,r11
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x830f29cc
	if (ctx.cr6.lt) goto loc_830F29CC;
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_830F29CC:
	// lwz r3,4(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// b 0x831a0220
	sub_831A0220(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_830F29D4"))) PPC_WEAK_FUNC(sub_830F29D4);
PPC_FUNC_IMPL(__imp__sub_830F29D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_830F29D8"))) PPC_WEAK_FUNC(sub_830F29D8);
PPC_FUNC_IMPL(__imp__sub_830F29D8) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,16(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// cmplw cr6,r4,r11
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x830f29ec
	if (ctx.cr6.lt) goto loc_830F29EC;
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_830F29EC:
	// lwz r3,8(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// b 0x831a0220
	sub_831A0220(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_830F29F4"))) PPC_WEAK_FUNC(sub_830F29F4);
PPC_FUNC_IMPL(__imp__sub_830F29F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_830F29F8"))) PPC_WEAK_FUNC(sub_830F29F8);
PPC_FUNC_IMPL(__imp__sub_830F29F8) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,16(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// cmplw cr6,r4,r11
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x830f2a0c
	if (ctx.cr6.lt) goto loc_830F2A0C;
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_830F2A0C:
	// lwz r3,12(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// b 0x831a0220
	sub_831A0220(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_830F2A14"))) PPC_WEAK_FUNC(sub_830F2A14);
PPC_FUNC_IMPL(__imp__sub_830F2A14) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_830F2A18"))) PPC_WEAK_FUNC(sub_830F2A18);
PPC_FUNC_IMPL(__imp__sub_830F2A18) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x833a01a8
	ctx.lr = 0x830F2A20;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,16(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// li r31,0
	ctx.r31.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x830f2a90
	if (!ctx.cr6.gt) goto loc_830F2A90;
loc_830F2A40:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r3,8(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// bl 0x831a0220
	ctx.lr = 0x830F2A4C;
	sub_831A0220(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x830d8d28
	ctx.lr = 0x830F2A58;
	sub_830D8D28(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x830f2a80
	if (ctx.cr0.eq) goto loc_830F2A80;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r3,12(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// bl 0x831a0220
	ctx.lr = 0x830F2A6C;
	sub_831A0220(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x830d8d28
	ctx.lr = 0x830F2A78;
	sub_830D8D28(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x830f2a9c
	if (!ctx.cr0.eq) goto loc_830F2A9C;
loc_830F2A80:
	// lwz r11,16(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x830f2a40
	if (ctx.cr6.lt) goto loc_830F2A40;
loc_830F2A90:
	// li r3,0
	ctx.r3.s64 = 0;
loc_830F2A94:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x833a01f8
	__restgprlr_28(ctx, base);
	return;
loc_830F2A9C:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r3,4(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// bl 0x831a0220
	ctx.lr = 0x830F2AA8;
	sub_831A0220(ctx, base);
	// b 0x830f2a94
	goto loc_830F2A94;
}

__attribute__((alias("__imp__sub_830F2AAC"))) PPC_WEAK_FUNC(sub_830F2AAC);
PPC_FUNC_IMPL(__imp__sub_830F2AAC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_830F2AB0"))) PPC_WEAK_FUNC(sub_830F2AB0);
PPC_FUNC_IMPL(__imp__sub_830F2AB0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lwz r25,17952(r26)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r26.u32 + 17952);
	// lwz r16,17816(r28)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r28.u32 + 17816);
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x833a01a4
	ctx.lr = 0x830F2AC0;
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
	// li r27,0
	ctx.r27.s64 = 0;
	// stw r27,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r27.u32);
	// li r3,24
	ctx.r3.s64 = 24;
	// stw r4,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r4.u32);
	// stw r27,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r27.u32);
	// stw r27,8(r30)
	PPC_STORE_U32(ctx.r30.u32 + 8, ctx.r27.u32);
	// stw r27,12(r30)
	PPC_STORE_U32(ctx.r30.u32 + 12, ctx.r27.u32);
	// bl 0x830dd390
	ctx.lr = 0x830F2AF0;
	sub_830DD390(ctx, base);
	// mr. r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// stw r29,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r29.u32);
	// beq 0x830f2b24
	if (ctx.cr0.eq) goto loc_830F2B24;
	// li r5,1
	ctx.r5.s64 = 1;
	// lwz r6,0(r30)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// li r4,10
	ctx.r4.s64 = 10;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8315d600
	ctx.lr = 0x830F2B10;
	sub_8315D600(ctx, base);
	// lis r10,-32222
	ctx.r10.s64 = -2111700992;
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
	// addi r10,r10,3848
	ctx.r10.s64 = ctx.r10.s64 + 3848;
	// stw r10,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r10.u32);
	// b 0x830f2b28
	goto loc_830F2B28;
loc_830F2B24:
	// mr r11,r27
	ctx.r11.u64 = ctx.r27.u64;
loc_830F2B28:
	// stw r11,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r11.u32);
	// li r3,24
	ctx.r3.s64 = 24;
	// lwz r4,0(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// bl 0x830dd390
	ctx.lr = 0x830F2B38;
	sub_830DD390(ctx, base);
	// mr. r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// stw r29,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r29.u32);
	// lis r11,-32228
	ctx.r11.s64 = -2112094208;
	// addi r28,r11,-11380
	ctx.r28.s64 = ctx.r11.s64 + -11380;
	// beq 0x830f2b6c
	if (ctx.cr0.eq) goto loc_830F2B6C;
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r6,0(r30)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// li r4,10
	ctx.r4.s64 = 10;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x830d7ac0
	ctx.lr = 0x830F2B60;
	sub_830D7AC0(ctx, base);
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
	// stw r28,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r28.u32);
	// b 0x830f2b70
	goto loc_830F2B70;
loc_830F2B6C:
	// mr r11,r27
	ctx.r11.u64 = ctx.r27.u64;
loc_830F2B70:
	// stw r11,8(r30)
	PPC_STORE_U32(ctx.r30.u32 + 8, ctx.r11.u32);
	// li r3,24
	ctx.r3.s64 = 24;
	// lwz r4,0(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// bl 0x830dd390
	ctx.lr = 0x830F2B80;
	sub_830DD390(ctx, base);
	// mr. r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// stw r29,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r29.u32);
	// beq 0x830f2bac
	if (ctx.cr0.eq) goto loc_830F2BAC;
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r6,0(r30)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// li r4,10
	ctx.r4.s64 = 10;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x830d7ac0
	ctx.lr = 0x830F2BA0;
	sub_830D7AC0(ctx, base);
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
	// stw r28,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r28.u32);
	// b 0x830f2bb0
	goto loc_830F2BB0;
loc_830F2BAC:
	// mr r11,r27
	ctx.r11.u64 = ctx.r27.u64;
loc_830F2BB0:
	// stw r11,12(r30)
	PPC_STORE_U32(ctx.r30.u32 + 12, ctx.r11.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r31,144
	ctx.r1.s64 = ctx.r31.s64 + 144;
	// b 0x833a01f4
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_830F2AB8"))) PPC_WEAK_FUNC(sub_830F2AB8);
PPC_FUNC_IMPL(__imp__sub_830F2AB8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x833a01a4
	ctx.lr = 0x830F2AC0;
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
	// li r27,0
	ctx.r27.s64 = 0;
	// stw r27,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r27.u32);
	// li r3,24
	ctx.r3.s64 = 24;
	// stw r4,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r4.u32);
	// stw r27,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r27.u32);
	// stw r27,8(r30)
	PPC_STORE_U32(ctx.r30.u32 + 8, ctx.r27.u32);
	// stw r27,12(r30)
	PPC_STORE_U32(ctx.r30.u32 + 12, ctx.r27.u32);
	// bl 0x830dd390
	ctx.lr = 0x830F2AF0;
	sub_830DD390(ctx, base);
	// mr. r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// stw r29,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r29.u32);
	// beq 0x830f2b24
	if (ctx.cr0.eq) goto loc_830F2B24;
	// li r5,1
	ctx.r5.s64 = 1;
	// lwz r6,0(r30)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// li r4,10
	ctx.r4.s64 = 10;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8315d600
	ctx.lr = 0x830F2B10;
	sub_8315D600(ctx, base);
	// lis r10,-32222
	ctx.r10.s64 = -2111700992;
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
	// addi r10,r10,3848
	ctx.r10.s64 = ctx.r10.s64 + 3848;
	// stw r10,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r10.u32);
	// b 0x830f2b28
	goto loc_830F2B28;
loc_830F2B24:
	// mr r11,r27
	ctx.r11.u64 = ctx.r27.u64;
loc_830F2B28:
	// stw r11,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r11.u32);
	// li r3,24
	ctx.r3.s64 = 24;
	// lwz r4,0(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// bl 0x830dd390
	ctx.lr = 0x830F2B38;
	sub_830DD390(ctx, base);
	// mr. r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// stw r29,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r29.u32);
	// lis r11,-32228
	ctx.r11.s64 = -2112094208;
	// addi r28,r11,-11380
	ctx.r28.s64 = ctx.r11.s64 + -11380;
	// beq 0x830f2b6c
	if (ctx.cr0.eq) goto loc_830F2B6C;
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r6,0(r30)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// li r4,10
	ctx.r4.s64 = 10;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x830d7ac0
	ctx.lr = 0x830F2B60;
	sub_830D7AC0(ctx, base);
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
	// stw r28,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r28.u32);
	// b 0x830f2b70
	goto loc_830F2B70;
loc_830F2B6C:
	// mr r11,r27
	ctx.r11.u64 = ctx.r27.u64;
loc_830F2B70:
	// stw r11,8(r30)
	PPC_STORE_U32(ctx.r30.u32 + 8, ctx.r11.u32);
	// li r3,24
	ctx.r3.s64 = 24;
	// lwz r4,0(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// bl 0x830dd390
	ctx.lr = 0x830F2B80;
	sub_830DD390(ctx, base);
	// mr. r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// stw r29,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r29.u32);
	// beq 0x830f2bac
	if (ctx.cr0.eq) goto loc_830F2BAC;
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r6,0(r30)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// li r4,10
	ctx.r4.s64 = 10;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x830d7ac0
	ctx.lr = 0x830F2BA0;
	sub_830D7AC0(ctx, base);
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
	// stw r28,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r28.u32);
	// b 0x830f2bb0
	goto loc_830F2BB0;
loc_830F2BAC:
	// mr r11,r27
	ctx.r11.u64 = ctx.r27.u64;
loc_830F2BB0:
	// stw r11,12(r30)
	PPC_STORE_U32(ctx.r30.u32 + 12, ctx.r11.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r31,144
	ctx.r1.s64 = ctx.r31.s64 + 144;
	// b 0x833a01f4
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_830F2BC0"))) PPC_WEAK_FUNC(sub_830F2BC0);
PPC_FUNC_IMPL(__imp__sub_830F2BC0) {
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
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r3,80(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	// bl 0x830dd3e0
	ctx.lr = 0x830F2BE0;
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

__attribute__((alias("__imp__sub_830F2BF0"))) PPC_WEAK_FUNC(sub_830F2BF0);
PPC_FUNC_IMPL(__imp__sub_830F2BF0) {
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
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r3,80(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	// bl 0x830dd3e0
	ctx.lr = 0x830F2C10;
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

__attribute__((alias("__imp__sub_830F2C20"))) PPC_WEAK_FUNC(sub_830F2C20);
PPC_FUNC_IMPL(__imp__sub_830F2C20) {
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
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r3,80(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	// bl 0x830dd3e0
	ctx.lr = 0x830F2C40;
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

__attribute__((alias("__imp__sub_830F2C50"))) PPC_WEAK_FUNC(sub_830F2C50);
PPC_FUNC_IMPL(__imp__sub_830F2C50) {
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
	// stw r4,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r4.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// addi r4,r3,-12
	ctx.r4.s64 = ctx.r3.s64 + -12;
	// addi r3,r3,8
	ctx.r3.s64 = ctx.r3.s64 + 8;
	// bl 0x83101a30
	ctx.lr = 0x830F2C7C;
	sub_83101A30(ctx, base);
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

__attribute__((alias("__imp__sub_830F2C94"))) PPC_WEAK_FUNC(sub_830F2C94);
PPC_FUNC_IMPL(__imp__sub_830F2C94) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_830F2C98"))) PPC_WEAK_FUNC(sub_830F2C98);
PPC_FUNC_IMPL(__imp__sub_830F2C98) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r4,r3,-12
	ctx.r4.s64 = ctx.r3.s64 + -12;
	// addi r3,r3,8
	ctx.r3.s64 = ctx.r3.s64 + 8;
	// bl 0x83101a30
	ctx.lr = 0x830F2CC0;
	sub_83101A30(ctx, base);
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830F2CEC"))) PPC_WEAK_FUNC(sub_830F2CEC);
PPC_FUNC_IMPL(__imp__sub_830F2CEC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_830F2CF0"))) PPC_WEAK_FUNC(sub_830F2CF0);
PPC_FUNC_IMPL(__imp__sub_830F2CF0) {
	PPC_FUNC_PROLOGUE();
	// stw r4,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r4.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830F2CF8"))) PPC_WEAK_FUNC(sub_830F2CF8);
PPC_FUNC_IMPL(__imp__sub_830F2CF8) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,8
	ctx.r3.s64 = ctx.r3.s64 + 8;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830F2D00"))) PPC_WEAK_FUNC(sub_830F2D00);
PPC_FUNC_IMPL(__imp__sub_830F2D00) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
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

__attribute__((alias("__imp__sub_830F2D10"))) PPC_WEAK_FUNC(sub_830F2D10);
PPC_FUNC_IMPL(__imp__sub_830F2D10) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x833a01ac
	ctx.lr = 0x830F2D18;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x830f2de8
	if (ctx.cr6.eq) goto loc_830F2DE8;
	// addi r30,r3,-8
	ctx.r30.s64 = ctx.r3.s64 + -8;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x830e4a38
	ctx.lr = 0x830F2D38;
	sub_830E4A38(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x830f2d48
	if (ctx.cr0.eq) goto loc_830F2D48;
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x830f2dec
	goto loc_830F2DEC;
loc_830F2D48:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x830e4a50
	ctx.lr = 0x830F2D54;
	sub_830E4A50(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x830f2de8
	if (ctx.cr0.eq) goto loc_830F2DE8;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r31,4(r29)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// lwz r11,24(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// b 0x830f2dbc
	goto loc_830F2DBC;
loc_830F2D70:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x830f2dd4
	if (ctx.cr6.eq) goto loc_830F2DD4;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,108(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 108);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x830F2D90;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x830f2de8
	if (ctx.cr0.eq) goto loc_830F2DE8;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,36(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x830F2DAC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r11,36(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 36);
loc_830F2DBC:
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x830F2DC4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// bne cr6,0x830f2d70
	if (!ctx.cr6.eq) goto loc_830F2D70;
	// b 0x830f2ddc
	goto loc_830F2DDC;
loc_830F2DD4:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne cr6,0x830f2de8
	if (!ctx.cr6.eq) goto loc_830F2DE8;
loc_830F2DDC:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// li r3,1
	ctx.r3.s64 = 1;
	// beq cr6,0x830f2dec
	if (ctx.cr6.eq) goto loc_830F2DEC;
loc_830F2DE8:
	// li r3,0
	ctx.r3.s64 = 0;
loc_830F2DEC:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x833a01fc
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_830F2DF4"))) PPC_WEAK_FUNC(sub_830F2DF4);
PPC_FUNC_IMPL(__imp__sub_830F2DF4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_830F2DF8"))) PPC_WEAK_FUNC(sub_830F2DF8);
PPC_FUNC_IMPL(__imp__sub_830F2DF8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x833a01ac
	ctx.lr = 0x830F2E00;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r3,4(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x830f2e64
	if (ctx.cr6.eq) goto loc_830F2E64;
	// lis r30,-32228
	ctx.r30.s64 = -2112094208;
	// lis r29,-32228
	ctx.r29.s64 = -2112094208;
loc_830F2E18:
	// lhz r11,4304(r29)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r29.u32 + 4304);
	// addi r9,r3,12
	ctx.r9.s64 = ctx.r3.s64 + 12;
	// lhz r10,8(r3)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r3.u32 + 8);
	// and. r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 & ctx.r11.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x830f2e30
	if (!ctx.cr0.eq) goto loc_830F2E30;
	// addi r9,r3,28
	ctx.r9.s64 = ctx.r3.s64 + 28;
loc_830F2E30:
	// addi r10,r3,4
	ctx.r10.s64 = ctx.r3.s64 + 4;
	// lhz r11,4312(r30)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r30.u32 + 4312);
	// lhz r10,8(r3)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r3.u32 + 8);
	// lwz r31,4(r9)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// or r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 | ctx.r11.u64;
	// sth r11,8(r3)
	PPC_STORE_U16(ctx.r3.u32 + 8, ctx.r11.u16);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,152(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 152);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x830F2E58;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne cr6,0x830f2e18
	if (!ctx.cr6.eq) goto loc_830F2E18;
loc_830F2E64:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x833a01fc
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_830F2E6C"))) PPC_WEAK_FUNC(sub_830F2E6C);
PPC_FUNC_IMPL(__imp__sub_830F2E6C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_830F2E70"))) PPC_WEAK_FUNC(sub_830F2E70);
PPC_FUNC_IMPL(__imp__sub_830F2E70) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,180(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 180);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_830F2E84"))) PPC_WEAK_FUNC(sub_830F2E84);
PPC_FUNC_IMPL(__imp__sub_830F2E84) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_830F2E88"))) PPC_WEAK_FUNC(sub_830F2E88);
PPC_FUNC_IMPL(__imp__sub_830F2E88) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,184(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 184);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_830F2E9C"))) PPC_WEAK_FUNC(sub_830F2E9C);
PPC_FUNC_IMPL(__imp__sub_830F2E9C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_830F2EA0"))) PPC_WEAK_FUNC(sub_830F2EA0);
PPC_FUNC_IMPL(__imp__sub_830F2EA0) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x830f2eb4
	if (!ctx.cr6.eq) goto loc_830F2EB4;
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_830F2EB4:
	// lis r10,-32228
	ctx.r10.s64 = -2112094208;
	// lhz r9,8(r11)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r11.u32 + 8);
	// lhz r10,4304(r10)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r10.u32 + 4304);
	// and. r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 & ctx.r10.u64;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x830f2ed0
	if (ctx.cr0.eq) goto loc_830F2ED0;
	// addi r11,r11,12
	ctx.r11.s64 = ctx.r11.s64 + 12;
	// b 0x830f2ed4
	goto loc_830F2ED4;
loc_830F2ED0:
	// addi r11,r11,28
	ctx.r11.s64 = ctx.r11.s64 + 28;
loc_830F2ED4:
	// lwz r3,0(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830F2EDC"))) PPC_WEAK_FUNC(sub_830F2EDC);
PPC_FUNC_IMPL(__imp__sub_830F2EDC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_830F2EE0"))) PPC_WEAK_FUNC(sub_830F2EE0);
PPC_FUNC_IMPL(__imp__sub_830F2EE0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x833a01a4
	ctx.lr = 0x830F2EE8;
	__savegprlr_27(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// bne cr6,0x830f2f3c
	if (!ctx.cr6.eq) goto loc_830F2F3C;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x830f2f14
	if (ctx.cr6.eq) goto loc_830F2F14;
	// lwz r6,148(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 148);
	// b 0x830f2f1c
	goto loc_830F2F1C;
loc_830F2F14:
	// lis r11,-31827
	ctx.r11.s64 = -2085814272;
	// lwz r6,-5084(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + -5084);
loc_830F2F1C:
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,3
	ctx.r4.s64 = 3;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x83101920
	ctx.lr = 0x830F2F2C;
	sub_83101920(ctx, base);
	// lis r11,-32194
	ctx.r11.s64 = -2109865984;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,-28032
	ctx.r4.s64 = ctx.r11.s64 + -28032;
	// bl 0x833a7198
	ctx.lr = 0x830F2F3C;
	sub_833A7198(ctx, base);
loc_830F2F3C:
	// lis r11,-32228
	ctx.r11.s64 = -2112094208;
	// lhz r10,-4(r27)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r27.u32 + -4);
	// lhz r11,4264(r11)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r11.u32 + 4264);
	// and. r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 & ctx.r11.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x830f2f8c
	if (ctx.cr0.eq) goto loc_830F2F8C;
	// lwz r11,0(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x830f2f64
	if (ctx.cr6.eq) goto loc_830F2F64;
	// lwz r6,148(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 148);
	// b 0x830f2f6c
	goto loc_830F2F6C;
loc_830F2F64:
	// lis r11,-31827
	ctx.r11.s64 = -2085814272;
	// lwz r6,-5084(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + -5084);
loc_830F2F6C:
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,7
	ctx.r4.s64 = 7;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x83101920
	ctx.lr = 0x830F2F7C;
	sub_83101920(ctx, base);
	// lis r11,-32194
	ctx.r11.s64 = -2109865984;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,-28032
	ctx.r4.s64 = ctx.r11.s64 + -28032;
	// bl 0x833a7198
	ctx.lr = 0x830F2F8C;
	sub_833A7198(ctx, base);
loc_830F2F8C:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r30,0(r27)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// lwz r11,44(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 44);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x830F2FA4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmplw cr6,r3,r30
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r30.u32, ctx.xer);
	// beq cr6,0x830f2fe4
	if (ctx.cr6.eq) goto loc_830F2FE4;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x830f2fbc
	if (ctx.cr6.eq) goto loc_830F2FBC;
	// lwz r6,148(r30)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r30.u32 + 148);
	// b 0x830f2fc4
	goto loc_830F2FC4;
loc_830F2FBC:
	// lis r11,-31827
	ctx.r11.s64 = -2085814272;
	// lwz r6,-5084(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + -5084);
loc_830F2FC4:
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,4
	ctx.r4.s64 = 4;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x83101920
	ctx.lr = 0x830F2FD4;
	sub_83101920(ctx, base);
	// lis r11,-32194
	ctx.r11.s64 = -2109865984;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,-28032
	ctx.r4.s64 = ctx.r11.s64 + -28032;
	// bl 0x833a7198
	ctx.lr = 0x830F2FE4;
	sub_833A7198(ctx, base);
loc_830F2FE4:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,68(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 68);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x830F2FF8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x830f3088
	if (ctx.cr0.eq) goto loc_830F3088;
	// lwz r11,-12(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + -12);
	// addi r3,r27,-12
	ctx.r3.s64 = ctx.r27.s64 + -12;
	// li r30,1
	ctx.r30.s64 = 1;
	// lwz r11,16(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x830F3018;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_830F3018:
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x830f3044
	if (ctx.cr6.eq) goto loc_830F3044;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// subf r10,r31,r3
	ctx.r10.s64 = ctx.r3.s64 - ctx.r31.s64;
	// addic r9,r10,-1
	ctx.xer.ca = ctx.r10.u32 > 0;
	ctx.r9.s64 = ctx.r10.s64 + -1;
	// subfe r30,r9,r10
	temp.u8 = (~ctx.r9.u32 + ctx.r10.u32 < ~ctx.r9.u32) | (~ctx.r9.u32 + ctx.r10.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r30.u64 = ~ctx.r9.u64 + ctx.r10.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// lwz r11,16(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x830F303C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi. r11,r30,24
	ctx.r11.u64 = ctx.r30.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x830f3018
	if (!ctx.cr0.eq) goto loc_830F3018;
loc_830F3044:
	// clrlwi. r11,r30,24
	ctx.r11.u64 = ctx.r30.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x830f3088
	if (!ctx.cr0.eq) goto loc_830F3088;
	// lwz r11,0(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x830f3060
	if (ctx.cr6.eq) goto loc_830F3060;
	// lwz r6,148(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 148);
	// b 0x830f3068
	goto loc_830F3068;
loc_830F3060:
	// lis r11,-31827
	ctx.r11.s64 = -2085814272;
	// lwz r6,-5084(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + -5084);
loc_830F3068:
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,3
	ctx.r4.s64 = 3;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x83101920
	ctx.lr = 0x830F3078;
	sub_83101920(ctx, base);
	// lis r11,-32194
	ctx.r11.s64 = -2109865984;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,-28032
	ctx.r4.s64 = ctx.r11.s64 + -28032;
	// bl 0x833a7198
	ctx.lr = 0x830F3088;
	sub_833A7198(ctx, base);
loc_830F3088:
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// beq cr6,0x830f310c
	if (ctx.cr6.eq) goto loc_830F310C;
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwz r11,16(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x830F30A4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r11,r27,-12
	ctx.r11.s64 = ctx.r27.s64 + -12;
	// cmplw cr6,r3,r11
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x830f30ec
	if (ctx.cr6.eq) goto loc_830F30EC;
	// lwz r11,0(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x830f30c4
	if (ctx.cr6.eq) goto loc_830F30C4;
	// lwz r6,148(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 148);
	// b 0x830f30cc
	goto loc_830F30CC;
loc_830F30C4:
	// lis r11,-31827
	ctx.r11.s64 = -2085814272;
	// lwz r6,-5084(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + -5084);
loc_830F30CC:
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,8
	ctx.r4.s64 = 8;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x83101920
	ctx.lr = 0x830F30DC;
	sub_83101920(ctx, base);
	// lis r11,-32194
	ctx.r11.s64 = -2109865984;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,-28032
	ctx.r4.s64 = ctx.r11.s64 + -28032;
	// bl 0x833a7198
	ctx.lr = 0x830F30EC;
	sub_833A7198(ctx, base);
loc_830F30EC:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,104(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 104);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x830F3104;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x830f3514
	if (!ctx.cr0.eq) goto loc_830F3514;
loc_830F310C:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x830F3120;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// extsh r11,r3
	ctx.r11.s64 = ctx.r3.s16;
	// cmpwi cr6,r11,11
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 11, ctx.xer);
	// bne cr6,0x830f3200
	if (!ctx.cr6.eq) goto loc_830F3200;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,24(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x830F3140;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr. r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// beq 0x830f31e0
	if (ctx.cr0.eq) goto loc_830F31E0;
	// addi r29,r27,-12
	ctx.r29.s64 = ctx.r27.s64 + -12;
loc_830F314C:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x830e6ad8
	ctx.lr = 0x830F3158;
	sub_830E6AD8(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x830f3180
	if (ctx.cr0.eq) goto loc_830F3180;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r11,36(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x830F3174;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr. r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// bne 0x830f314c
	if (!ctx.cr0.eq) goto loc_830F314C;
	// b 0x830f31e0
	goto loc_830F31E0;
loc_830F3180:
	// lwz r11,0(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x830f3194
	if (ctx.cr6.eq) goto loc_830F3194;
	// lwz r6,148(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 148);
	// b 0x830f319c
	goto loc_830F319C;
loc_830F3194:
	// lis r11,-31827
	ctx.r11.s64 = -2085814272;
	// lwz r6,-5084(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + -5084);
loc_830F319C:
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,3
	ctx.r4.s64 = 3;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x83101920
	ctx.lr = 0x830F31AC;
	sub_83101920(ctx, base);
	// lis r11,-32194
	ctx.r11.s64 = -2109865984;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,-28032
	ctx.r4.s64 = ctx.r11.s64 + -28032;
	// bl 0x833a7198
	ctx.lr = 0x830F31BC;
	sub_833A7198(ctx, base);
loc_830F31BC:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,24(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x830F31D0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// bl 0x830f2ee0
	ctx.lr = 0x830F31E0;
	sub_830F2EE0(ctx, base);
loc_830F31E0:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,68(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 68);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x830F31F4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x830f31bc
	if (!ctx.cr0.eq) goto loc_830F31BC;
	// b 0x830f34ac
	goto loc_830F34AC;
loc_830F3200:
	// addi r30,r27,-12
	ctx.r30.s64 = ctx.r27.s64 + -12;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x830e6ad8
	ctx.lr = 0x830F3210;
	sub_830E6AD8(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x830f3254
	if (!ctx.cr0.eq) goto loc_830F3254;
	// lwz r11,0(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x830f322c
	if (ctx.cr6.eq) goto loc_830F322C;
	// lwz r6,148(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 148);
	// b 0x830f3234
	goto loc_830F3234;
loc_830F322C:
	// lis r11,-31827
	ctx.r11.s64 = -2085814272;
	// lwz r6,-5084(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + -5084);
loc_830F3234:
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,3
	ctx.r4.s64 = 3;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x83101920
	ctx.lr = 0x830F3244;
	sub_83101920(ctx, base);
	// lis r11,-32194
	ctx.r11.s64 = -2109865984;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,-28032
	ctx.r4.s64 = ctx.r11.s64 + -28032;
	// bl 0x833a7198
	ctx.lr = 0x830F3254;
	sub_833A7198(ctx, base);
loc_830F3254:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,16(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x830F3268;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x830f3284
	if (ctx.cr0.eq) goto loc_830F3284;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r11,60(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 60);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x830F3284;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_830F3284:
	// lis r11,-32228
	ctx.r11.s64 = -2112094208;
	// stw r30,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r30.u32);
	// lhz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r31.u32 + 8);
	// addi r7,r31,4
	ctx.r7.s64 = ctx.r31.s64 + 4;
	// lhz r11,4276(r11)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r11.u32 + 4276);
	// or r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 | ctx.r11.u64;
	// sth r11,8(r31)
	PPC_STORE_U16(ctx.r31.u32 + 8, ctx.r11.u16);
	// lwz r11,4(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x830f32e4
	if (!ctx.cr6.eq) goto loc_830F32E4;
	// stw r31,4(r27)
	PPC_STORE_U32(ctx.r27.u32 + 4, ctx.r31.u32);
	// lis r11,-32228
	ctx.r11.s64 = -2112094208;
	// lis r9,-32228
	ctx.r9.s64 = -2112094208;
	// lhz r11,4280(r11)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r11.u32 + 4280);
	// lhz r10,4(r7)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r7.u32 + 4);
	// or r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 | ctx.r11.u64;
	// sth r11,4(r7)
	PPC_STORE_U16(ctx.r7.u32 + 4, ctx.r11.u16);
	// lhz r11,4304(r9)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r9.u32 + 4304);
	// lhz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r31.u32 + 8);
	// and. r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 & ctx.r11.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// addi r11,r31,12
	ctx.r11.s64 = ctx.r31.s64 + 12;
	// bne 0x830f3364
	if (!ctx.cr0.eq) goto loc_830F3364;
	// addi r11,r31,28
	ctx.r11.s64 = ctx.r31.s64 + 28;
	// b 0x830f3364
	goto loc_830F3364;
loc_830F32E4:
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// bne cr6,0x830f336c
	if (!ctx.cr6.eq) goto loc_830F336C;
	// lis r8,-32228
	ctx.r8.s64 = -2112094208;
	// lhz r7,8(r11)
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r11.u32 + 8);
	// lhz r9,4304(r8)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r8.u32 + 4304);
	// and. r10,r7,r9
	ctx.r10.u64 = ctx.r7.u64 & ctx.r9.u64;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x830f3308
	if (ctx.cr0.eq) goto loc_830F3308;
	// addi r11,r11,12
	ctx.r11.s64 = ctx.r11.s64 + 12;
	// b 0x830f330c
	goto loc_830F330C;
loc_830F3308:
	// addi r11,r11,28
	ctx.r11.s64 = ctx.r11.s64 + 28;
loc_830F330C:
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lhz r11,8(r10)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r10.u32 + 8);
	// and. r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 & ctx.r9.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// addi r11,r10,12
	ctx.r11.s64 = ctx.r10.s64 + 12;
	// bne 0x830f3324
	if (!ctx.cr0.eq) goto loc_830F3324;
	// addi r11,r10,28
	ctx.r11.s64 = ctx.r10.s64 + 28;
loc_830F3324:
	// stw r31,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r31.u32);
	// lhz r9,8(r31)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r31.u32 + 8);
	// lhz r11,4304(r8)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r8.u32 + 4304);
	// and. r11,r9,r11
	ctx.r11.u64 = ctx.r9.u64 & ctx.r11.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// addi r11,r31,12
	ctx.r11.s64 = ctx.r31.s64 + 12;
	// bne 0x830f3340
	if (!ctx.cr0.eq) goto loc_830F3340;
	// addi r11,r31,28
	ctx.r11.s64 = ctx.r31.s64 + 28;
loc_830F3340:
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// lwz r11,4(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 4);
	// lhz r10,4304(r8)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r8.u32 + 4304);
	// lhz r9,8(r11)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r11.u32 + 8);
	// and. r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 & ctx.r10.u64;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x830f3360
	if (ctx.cr0.eq) goto loc_830F3360;
	// addi r11,r11,12
	ctx.r11.s64 = ctx.r11.s64 + 12;
	// b 0x830f3364
	goto loc_830F3364;
loc_830F3360:
	// addi r11,r11,28
	ctx.r11.s64 = ctx.r11.s64 + 28;
loc_830F3364:
	// stw r31,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r31.u32);
	// b 0x830f34ac
	goto loc_830F34AC;
loc_830F336C:
	// cmplw cr6,r28,r11
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, ctx.r11.u32, ctx.xer);
	// lis r9,-32228
	ctx.r9.s64 = -2112094208;
	// bne cr6,0x830f3424
	if (!ctx.cr6.eq) goto loc_830F3424;
	// lis r6,-32228
	ctx.r6.s64 = -2112094208;
	// lhz r8,8(r11)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r11.u32 + 8);
	// addi r10,r11,4
	ctx.r10.s64 = ctx.r11.s64 + 4;
	// lhz r10,4280(r6)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r6.u32 + 4280);
	// andc r10,r8,r10
	ctx.r10.u64 = ctx.r8.u64 & ~ctx.r10.u64;
	// sth r10,8(r11)
	PPC_STORE_U16(ctx.r11.u32 + 8, ctx.r10.u16);
	// lhz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r31.u32 + 8);
	// lhz r11,4304(r9)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r9.u32 + 4304);
	// and. r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 & ctx.r11.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// addi r11,r31,12
	ctx.r11.s64 = ctx.r31.s64 + 12;
	// bne 0x830f33a8
	if (!ctx.cr0.eq) goto loc_830F33A8;
	// addi r11,r31,28
	ctx.r11.s64 = ctx.r31.s64 + 28;
loc_830F33A8:
	// lwz r10,4(r27)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r27.u32 + 4);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// lwz r11,4(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 4);
	// lhz r10,4304(r9)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r9.u32 + 4304);
	// lhz r8,8(r11)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r11.u32 + 8);
	// and. r8,r8,r10
	ctx.r8.u64 = ctx.r8.u64 & ctx.r10.u64;
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// addi r8,r11,12
	ctx.r8.s64 = ctx.r11.s64 + 12;
	// bne 0x830f33cc
	if (!ctx.cr0.eq) goto loc_830F33CC;
	// addi r8,r11,28
	ctx.r8.s64 = ctx.r11.s64 + 28;
loc_830F33CC:
	// lhz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 8);
	// and. r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 & ctx.r10.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// addi r11,r31,12
	ctx.r11.s64 = ctx.r31.s64 + 12;
	// bne 0x830f33e0
	if (!ctx.cr0.eq) goto loc_830F33E0;
	// addi r11,r31,28
	ctx.r11.s64 = ctx.r31.s64 + 28;
loc_830F33E0:
	// lwz r10,0(r8)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// lwz r11,4(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 4);
	// lhz r10,4304(r9)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r9.u32 + 4304);
	// lhz r9,8(r11)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r11.u32 + 8);
	// and. r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 & ctx.r10.u64;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x830f3404
	if (ctx.cr0.eq) goto loc_830F3404;
	// addi r11,r11,12
	ctx.r11.s64 = ctx.r11.s64 + 12;
	// b 0x830f3408
	goto loc_830F3408;
loc_830F3404:
	// addi r11,r11,28
	ctx.r11.s64 = ctx.r11.s64 + 28;
loc_830F3408:
	// stw r31,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r31.u32);
	// stw r31,4(r27)
	PPC_STORE_U32(ctx.r27.u32 + 4, ctx.r31.u32);
	// lhz r10,4(r7)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r7.u32 + 4);
	// lhz r11,4280(r6)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r6.u32 + 4280);
	// or r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 | ctx.r11.u64;
	// sth r11,4(r7)
	PPC_STORE_U16(ctx.r7.u32 + 4, ctx.r11.u16);
	// b 0x830f34ac
	goto loc_830F34AC;
loc_830F3424:
	// lhz r8,8(r28)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r28.u32 + 8);
	// lhz r10,4304(r9)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r9.u32 + 4304);
	// and. r11,r8,r10
	ctx.r11.u64 = ctx.r8.u64 & ctx.r10.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// addi r11,r28,12
	ctx.r11.s64 = ctx.r28.s64 + 12;
	// bne 0x830f343c
	if (!ctx.cr0.eq) goto loc_830F343C;
	// addi r11,r28,28
	ctx.r11.s64 = ctx.r28.s64 + 28;
loc_830F343C:
	// lhz r7,8(r31)
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r31.u32 + 8);
	// lwz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// and. r11,r7,r10
	ctx.r11.u64 = ctx.r7.u64 & ctx.r10.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// addi r11,r31,12
	ctx.r11.s64 = ctx.r31.s64 + 12;
	// bne 0x830f3454
	if (!ctx.cr0.eq) goto loc_830F3454;
	// addi r11,r31,28
	ctx.r11.s64 = ctx.r31.s64 + 28;
loc_830F3454:
	// stw r28,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r28.u32);
	// lhz r11,4304(r9)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r9.u32 + 4304);
	// lhz r10,8(r8)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r8.u32 + 8);
	// and. r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 & ctx.r11.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// addi r11,r8,12
	ctx.r11.s64 = ctx.r8.s64 + 12;
	// bne 0x830f3470
	if (!ctx.cr0.eq) goto loc_830F3470;
	// addi r11,r8,28
	ctx.r11.s64 = ctx.r8.s64 + 28;
loc_830F3470:
	// stw r31,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r31.u32);
	// lhz r11,4304(r9)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r9.u32 + 4304);
	// lhz r10,8(r28)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r28.u32 + 8);
	// and. r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 & ctx.r11.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// addi r11,r28,12
	ctx.r11.s64 = ctx.r28.s64 + 12;
	// bne 0x830f348c
	if (!ctx.cr0.eq) goto loc_830F348C;
	// addi r11,r28,28
	ctx.r11.s64 = ctx.r28.s64 + 28;
loc_830F348C:
	// stw r31,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r31.u32);
	// lhz r11,4304(r9)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r9.u32 + 4304);
	// lhz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r31.u32 + 8);
	// and. r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 & ctx.r11.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// addi r11,r31,12
	ctx.r11.s64 = ctx.r31.s64 + 12;
	// bne 0x830f34a8
	if (!ctx.cr0.eq) goto loc_830F34A8;
	// addi r11,r31,28
	ctx.r11.s64 = ctx.r31.s64 + 28;
loc_830F34A8:
	// stw r8,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r8.u32);
loc_830F34AC:
	// lwz r3,0(r27)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,180(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 180);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x830F34C0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r3,0(r27)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x830f3514
	if (ctx.cr6.eq) goto loc_830F3514;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,164(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 164);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x830F34DC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr. r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// beq 0x830f3514
	if (ctx.cr0.eq) goto loc_830F3514;
	// lwz r29,8(r28)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r28.u32 + 8);
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x830f3514
	if (ctx.cr6.eq) goto loc_830F3514;
	// li r30,0
	ctx.r30.s64 = 0;
loc_830F34F4:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x831a0220
	ctx.lr = 0x830F3500;
	sub_831A0220(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x83107640
	ctx.lr = 0x830F3508;
	sub_83107640(ctx, base);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// cmplw cr6,r30,r29
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r29.u32, ctx.xer);
	// blt cr6,0x830f34f4
	if (ctx.cr6.lt) goto loc_830F34F4;
loc_830F3514:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x833a01f4
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_830F3520"))) PPC_WEAK_FUNC(sub_830F3520);
PPC_FUNC_IMPL(__imp__sub_830F3520) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x833a01a0
	ctx.lr = 0x830F3528;
	__savegprlr_26(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32228
	ctx.r11.s64 = -2112094208;
	// lhz r10,-4(r3)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r3.u32 + -4);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// lhz r11,4264(r11)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r11.u32 + 4264);
	// and. r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 & ctx.r11.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x830f3584
	if (ctx.cr0.eq) goto loc_830F3584;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x830f355c
	if (ctx.cr6.eq) goto loc_830F355C;
	// lwz r6,148(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 148);
	// b 0x830f3564
	goto loc_830F3564;
loc_830F355C:
	// lis r11,-31827
	ctx.r11.s64 = -2085814272;
	// lwz r6,-5084(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + -5084);
loc_830F3564:
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,7
	ctx.r4.s64 = 7;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x83101920
	ctx.lr = 0x830F3574;
	sub_83101920(ctx, base);
	// lis r11,-32194
	ctx.r11.s64 = -2109865984;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,-28032
	ctx.r4.s64 = ctx.r11.s64 + -28032;
	// bl 0x833a7198
	ctx.lr = 0x830F3584;
	sub_833A7198(ctx, base);
loc_830F3584:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x830f3820
	if (ctx.cr6.eq) goto loc_830F3820;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r11,16(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x830F35A0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r11,r27,-12
	ctx.r11.s64 = ctx.r27.s64 + -12;
	// cmplw cr6,r3,r11
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x830f3820
	if (!ctx.cr6.eq) goto loc_830F3820;
	// lwz r3,0(r27)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// li r26,0
	ctx.r26.s64 = 0;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x830f3678
	if (ctx.cr6.eq) goto loc_830F3678;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,168(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 168);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x830F35CC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr. r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// beq 0x830f3618
	if (ctx.cr0.eq) goto loc_830F3618;
	// lwz r28,8(r29)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// beq cr6,0x830f3618
	if (ctx.cr6.eq) goto loc_830F3618;
	// mr r31,r26
	ctx.r31.u64 = ctx.r26.u64;
loc_830F35E4:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x831a0220
	ctx.lr = 0x830F35F0;
	sub_831A0220(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x830f360c
	if (ctx.cr0.eq) goto loc_830F360C;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x831a0220
	ctx.lr = 0x830F3604;
	sub_831A0220(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x83106328
	ctx.lr = 0x830F360C;
	sub_83106328(ctx, base);
loc_830F360C:
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// cmplw cr6,r31,r28
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r28.u32, ctx.xer);
	// blt cr6,0x830f35e4
	if (ctx.cr6.lt) goto loc_830F35E4;
loc_830F3618:
	// lwz r3,0(r27)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,164(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 164);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x830F362C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr. r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// beq 0x830f3678
	if (ctx.cr0.eq) goto loc_830F3678;
	// lwz r28,8(r29)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// beq cr6,0x830f3678
	if (ctx.cr6.eq) goto loc_830F3678;
	// mr r31,r26
	ctx.r31.u64 = ctx.r26.u64;
loc_830F3644:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x831a0220
	ctx.lr = 0x830F3650;
	sub_831A0220(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x830f366c
	if (ctx.cr0.eq) goto loc_830F366C;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x831a0220
	ctx.lr = 0x830F3664;
	sub_831A0220(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x831074b0
	ctx.lr = 0x830F366C;
	sub_831074B0(ctx, base);
loc_830F366C:
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// cmplw cr6,r31,r28
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r28.u32, ctx.xer);
	// blt cr6,0x830f3644
	if (ctx.cr6.lt) goto loc_830F3644;
loc_830F3678:
	// lwz r11,4(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 4);
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x830f371c
	if (!ctx.cr6.eq) goto loc_830F371C;
	// lis r10,-32228
	ctx.r10.s64 = -2112094208;
	// lhz r8,8(r30)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r30.u32 + 8);
	// lis r9,-32228
	ctx.r9.s64 = -2112094208;
	// addi r11,r30,4
	ctx.r11.s64 = ctx.r30.s64 + 4;
	// addi r7,r9,4304
	ctx.r7.s64 = ctx.r9.s64 + 4304;
	// lhz r9,4280(r10)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r10.u32 + 4280);
	// andc r9,r8,r9
	ctx.r9.u64 = ctx.r8.u64 & ~ctx.r9.u64;
	// sth r9,8(r30)
	PPC_STORE_U16(ctx.r30.u32 + 8, ctx.r9.u16);
	// clrlwi r9,r9,16
	ctx.r9.u64 = ctx.r9.u32 & 0xFFFF;
	// lhz r11,0(r7)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r7.u32 + 0);
	// and. r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 & ctx.r9.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// addi r11,r30,12
	ctx.r11.s64 = ctx.r30.s64 + 12;
	// bne 0x830f36bc
	if (!ctx.cr0.eq) goto loc_830F36BC;
	// addi r11,r30,28
	ctx.r11.s64 = ctx.r30.s64 + 28;
loc_830F36BC:
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// stw r11,4(r27)
	PPC_STORE_U32(ctx.r27.u32 + 4, ctx.r11.u32);
	// beq cr6,0x830f3798
	if (ctx.cr6.eq) goto loc_830F3798;
	// addi r9,r11,4
	ctx.r9.s64 = ctx.r11.s64 + 4;
	// lhz r10,4280(r10)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r10.u32 + 4280);
	// lhz r9,8(r11)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r11.u32 + 8);
	// or r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 | ctx.r10.u64;
	// addi r9,r30,12
	ctx.r9.s64 = ctx.r30.s64 + 12;
	// sth r10,8(r11)
	PPC_STORE_U16(ctx.r11.u32 + 8, ctx.r10.u16);
	// lhz r10,8(r30)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r30.u32 + 8);
	// lhz r11,0(r7)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r7.u32 + 0);
	// and. r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 & ctx.r11.u64;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x830f36f8
	if (!ctx.cr0.eq) goto loc_830F36F8;
	// addi r9,r30,28
	ctx.r9.s64 = ctx.r30.s64 + 28;
loc_830F36F8:
	// lwz r10,4(r27)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r27.u32 + 4);
	// lhz r8,8(r10)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r10.u32 + 8);
	// and. r11,r8,r11
	ctx.r11.u64 = ctx.r8.u64 & ctx.r11.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// addi r11,r10,12
	ctx.r11.s64 = ctx.r10.s64 + 12;
	// bne 0x830f3710
	if (!ctx.cr0.eq) goto loc_830F3710;
	// addi r11,r10,28
	ctx.r11.s64 = ctx.r10.s64 + 28;
loc_830F3710:
	// lwz r10,0(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// b 0x830f3798
	goto loc_830F3798;
loc_830F371C:
	// lis r11,-32228
	ctx.r11.s64 = -2112094208;
	// lhz r10,8(r30)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r30.u32 + 8);
	// addi r7,r11,4304
	ctx.r7.s64 = ctx.r11.s64 + 4304;
	// lhz r9,4304(r11)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r11.u32 + 4304);
	// and. r11,r9,r10
	ctx.r11.u64 = ctx.r9.u64 & ctx.r10.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// addi r10,r30,12
	ctx.r10.s64 = ctx.r30.s64 + 12;
	// bne 0x830f373c
	if (!ctx.cr0.eq) goto loc_830F373C;
	// addi r10,r30,28
	ctx.r10.s64 = ctx.r30.s64 + 28;
loc_830F373C:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// lwz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// addi r11,r30,12
	ctx.r11.s64 = ctx.r30.s64 + 12;
	// bne cr6,0x830f3750
	if (!ctx.cr6.eq) goto loc_830F3750;
	// addi r11,r30,28
	ctx.r11.s64 = ctx.r30.s64 + 28;
loc_830F3750:
	// lhz r10,8(r8)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r8.u32 + 8);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// and. r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 & ctx.r9.u64;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// addi r10,r8,12
	ctx.r10.s64 = ctx.r8.s64 + 12;
	// bne 0x830f3768
	if (!ctx.cr0.eq) goto loc_830F3768;
	// addi r10,r8,28
	ctx.r10.s64 = ctx.r8.s64 + 28;
loc_830F3768:
	// stw r11,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r11.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// lhz r10,0(r7)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r7.u32 + 0);
	// bne cr6,0x830f377c
	if (!ctx.cr6.eq) goto loc_830F377C;
	// lwz r11,4(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 4);
loc_830F377C:
	// lhz r9,8(r11)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r11.u32 + 8);
	// and. r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 & ctx.r10.u64;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x830f3790
	if (ctx.cr0.eq) goto loc_830F3790;
	// addi r11,r11,12
	ctx.r11.s64 = ctx.r11.s64 + 12;
	// b 0x830f3794
	goto loc_830F3794;
loc_830F3790:
	// addi r11,r11,28
	ctx.r11.s64 = ctx.r11.s64 + 28;
loc_830F3794:
	// stw r8,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r8.u32);
loc_830F3798:
	// lwz r11,0(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// addi r10,r11,12
	ctx.r10.s64 = ctx.r11.s64 + 12;
	// bne cr6,0x830f37ac
	if (!ctx.cr6.eq) goto loc_830F37AC;
	// mr r10,r26
	ctx.r10.u64 = ctx.r26.u64;
loc_830F37AC:
	// stw r10,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r10.u32);
	// lis r10,-32228
	ctx.r10.s64 = -2112094208;
	// addi r11,r30,4
	ctx.r11.s64 = ctx.r30.s64 + 4;
	// lhz r10,4276(r10)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r10.u32 + 4276);
	// lhz r9,8(r30)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r30.u32 + 8);
	// andc r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 & ~ctx.r10.u64;
	// sth r10,8(r30)
	PPC_STORE_U16(ctx.r30.u32 + 8, ctx.r10.u16);
	// clrlwi r10,r10,16
	ctx.r10.u64 = ctx.r10.u32 & 0xFFFF;
	// lhz r11,0(r7)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r7.u32 + 0);
	// and. r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 & ctx.r10.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// addi r11,r30,12
	ctx.r11.s64 = ctx.r30.s64 + 12;
	// bne 0x830f37e0
	if (!ctx.cr0.eq) goto loc_830F37E0;
	// addi r11,r30,28
	ctx.r11.s64 = ctx.r30.s64 + 28;
loc_830F37E0:
	// stw r26,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r26.u32);
	// lhz r10,8(r30)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r30.u32 + 8);
	// lhz r11,0(r7)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r7.u32 + 0);
	// and. r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 & ctx.r10.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// addi r11,r30,12
	ctx.r11.s64 = ctx.r30.s64 + 12;
	// bne 0x830f37fc
	if (!ctx.cr0.eq) goto loc_830F37FC;
	// addi r11,r30,28
	ctx.r11.s64 = ctx.r30.s64 + 28;
loc_830F37FC:
	// stw r26,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r26.u32);
	// lwz r3,0(r27)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,180(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 180);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x830F3814;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x833a01f0
	__restgprlr_26(ctx, base);
	return;
loc_830F3820:
	// lwz r11,0(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x830f3834
	if (ctx.cr6.eq) goto loc_830F3834;
	// lwz r6,148(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 148);
	// b 0x830f383c
	goto loc_830F383C;
loc_830F3834:
	// lis r11,-31827
	ctx.r11.s64 = -2085814272;
	// lwz r6,-5084(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + -5084);
loc_830F383C:
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,8
	ctx.r4.s64 = 8;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x83101920
	ctx.lr = 0x830F384C;
	sub_83101920(ctx, base);
	// lis r11,-32194
	ctx.r11.s64 = -2109865984;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,-28032
	ctx.r4.s64 = ctx.r11.s64 + -28032;
	// bl 0x833a7198
	ctx.lr = 0x830F385C;
	sub_833A7198(ctx, base);
}

__attribute__((alias("__imp__sub_830F385C"))) PPC_WEAK_FUNC(sub_830F385C);
PPC_FUNC_IMPL(__imp__sub_830F385C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_830F3860"))) PPC_WEAK_FUNC(sub_830F3860);
PPC_FUNC_IMPL(__imp__sub_830F3860) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// bl 0x830f2ee0
	ctx.lr = 0x830F3880;
	sub_830F2EE0(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x830f3520
	ctx.lr = 0x830F388C;
	sub_830F3520(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830F38A4"))) PPC_WEAK_FUNC(sub_830F38A4);
PPC_FUNC_IMPL(__imp__sub_830F38A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_830F38A8"))) PPC_WEAK_FUNC(sub_830F38A8);
PPC_FUNC_IMPL(__imp__sub_830F38A8) {
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
	// lis r10,-32228
	ctx.r10.s64 = -2112094208;
	// addi r11,r3,-12
	ctx.r11.s64 = ctx.r3.s64 + -12;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// stw r11,4(r4)
	PPC_STORE_U32(ctx.r4.u32 + 4, ctx.r11.u32);
	// addi r11,r4,4
	ctx.r11.s64 = ctx.r4.s64 + 4;
	// lhz r9,8(r4)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r4.u32 + 8);
	// lhz r10,4276(r10)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r10.u32 + 4276);
	// or r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 | ctx.r10.u64;
	// sth r10,8(r4)
	PPC_STORE_U16(ctx.r4.u32 + 8, ctx.r10.u16);
	// lwz r10,4(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x830f3960
	if (ctx.cr6.eq) goto loc_830F3960;
	// lis r8,-32228
	ctx.r8.s64 = -2112094208;
	// lhz r7,8(r10)
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r10.u32 + 8);
	// lhz r9,4304(r8)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r8.u32 + 4304);
	// and. r11,r7,r9
	ctx.r11.u64 = ctx.r7.u64 & ctx.r9.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// addi r11,r10,12
	ctx.r11.s64 = ctx.r10.s64 + 12;
	// bne 0x830f3904
	if (!ctx.cr0.eq) goto loc_830F3904;
	// addi r11,r10,28
	ctx.r11.s64 = ctx.r10.s64 + 28;
loc_830F3904:
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lhz r11,8(r10)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r10.u32 + 8);
	// and. r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 & ctx.r9.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// addi r11,r10,12
	ctx.r11.s64 = ctx.r10.s64 + 12;
	// bne 0x830f391c
	if (!ctx.cr0.eq) goto loc_830F391C;
	// addi r11,r10,28
	ctx.r11.s64 = ctx.r10.s64 + 28;
loc_830F391C:
	// stw r31,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r31.u32);
	// lhz r9,8(r31)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r31.u32 + 8);
	// lhz r11,4304(r8)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r8.u32 + 4304);
	// and. r11,r9,r11
	ctx.r11.u64 = ctx.r9.u64 & ctx.r11.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// addi r11,r31,12
	ctx.r11.s64 = ctx.r31.s64 + 12;
	// bne 0x830f3938
	if (!ctx.cr0.eq) goto loc_830F3938;
	// addi r11,r31,28
	ctx.r11.s64 = ctx.r31.s64 + 28;
loc_830F3938:
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// lhz r10,4304(r8)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r8.u32 + 4304);
	// lhz r9,8(r11)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r11.u32 + 8);
	// and. r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 & ctx.r10.u64;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x830f3958
	if (ctx.cr0.eq) goto loc_830F3958;
	// addi r11,r11,12
	ctx.r11.s64 = ctx.r11.s64 + 12;
	// b 0x830f3994
	goto loc_830F3994;
loc_830F3958:
	// addi r11,r11,28
	ctx.r11.s64 = ctx.r11.s64 + 28;
	// b 0x830f3994
	goto loc_830F3994;
loc_830F3960:
	// stw r31,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r31.u32);
	// lis r10,-32228
	ctx.r10.s64 = -2112094208;
	// lis r9,-32228
	ctx.r9.s64 = -2112094208;
	// lhz r10,4280(r10)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r10.u32 + 4280);
	// lhz r8,4(r11)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r11.u32 + 4);
	// or r10,r8,r10
	ctx.r10.u64 = ctx.r8.u64 | ctx.r10.u64;
	// sth r10,4(r11)
	PPC_STORE_U16(ctx.r11.u32 + 4, ctx.r10.u16);
	// lhz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r31.u32 + 8);
	// lhz r11,4304(r9)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r9.u32 + 4304);
	// and. r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 & ctx.r11.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// addi r11,r31,12
	ctx.r11.s64 = ctx.r31.s64 + 12;
	// bne 0x830f3994
	if (!ctx.cr0.eq) goto loc_830F3994;
	// addi r11,r31,28
	ctx.r11.s64 = ctx.r31.s64 + 28;
loc_830F3994:
	// stw r31,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r31.u32);
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,180(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 180);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x830F39AC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
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

__attribute__((alias("__imp__sub_830F39C4"))) PPC_WEAK_FUNC(sub_830F39C4);
PPC_FUNC_IMPL(__imp__sub_830F39C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_830F39C8"))) PPC_WEAK_FUNC(sub_830F39C8);
PPC_FUNC_IMPL(__imp__sub_830F39C8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x833a01a4
	ctx.lr = 0x830F39D0;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r31,4(r3)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x830f3acc
	if (ctx.cr6.eq) goto loc_830F3ACC;
	// lis r27,-32228
	ctx.r27.s64 = -2112094208;
loc_830F39E8:
	// lhz r11,4304(r27)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r27.u32 + 4304);
	// lhz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r31.u32 + 8);
	// and. r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 & ctx.r11.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// addi r11,r31,12
	ctx.r11.s64 = ctx.r31.s64 + 12;
	// bne 0x830f3a00
	if (!ctx.cr0.eq) goto loc_830F3A00;
	// addi r11,r31,28
	ctx.r11.s64 = ctx.r31.s64 + 28;
loc_830F3A00:
	// lwz r30,4(r11)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x830f3a8c
	if (ctx.cr6.eq) goto loc_830F3A8C;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x830F3A20;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// extsh r11,r3
	ctx.r11.s64 = ctx.r3.s16;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bne cr6,0x830f3a8c
	if (!ctx.cr6.eq) goto loc_830F3A8C;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x830F3A40;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// extsh r11,r3
	ctx.r11.s64 = ctx.r3.s16;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bne cr6,0x830f3a8c
	if (!ctx.cr6.eq) goto loc_830F3A8C;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r29,0(r31)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r11,156(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 156);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x830F3A64;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,168(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 168);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x830F3A78;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x830f3520
	ctx.lr = 0x830F3A84;
	sub_830F3520(ctx, base);
	// mr r30,r31
	ctx.r30.u64 = ctx.r31.u64;
	// b 0x830f3ac0
	goto loc_830F3AC0;
loc_830F3A8C:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x830F3AA0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// extsh r11,r3
	ctx.r11.s64 = ctx.r3.s16;
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x830f3ac0
	if (!ctx.cr6.eq) goto loc_830F3AC0;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,76(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 76);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x830F3AC0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_830F3AC0:
	// mr r31,r30
	ctx.r31.u64 = ctx.r30.u64;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// bne cr6,0x830f39e8
	if (!ctx.cr6.eq) goto loc_830F39E8;
loc_830F3ACC:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x833a01f4
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_830F3AD4"))) PPC_WEAK_FUNC(sub_830F3AD4);
PPC_FUNC_IMPL(__imp__sub_830F3AD4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_830F3AD8"))) PPC_WEAK_FUNC(sub_830F3AD8);
PPC_FUNC_IMPL(__imp__sub_830F3AD8) {
	PPC_FUNC_PROLOGUE();
	// li r5,0
	ctx.r5.s64 = 0;
	// b 0x830f2ee0
	sub_830F2EE0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_830F3AE0"))) PPC_WEAK_FUNC(sub_830F3AE0);
PPC_FUNC_IMPL(__imp__sub_830F3AE0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// lwz r11,24(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// b 0x830f3b3c
	goto loc_830F3B3C;
loc_830F3B08:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,48(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 48);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x830F3B20;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x830f2ee0
	ctx.lr = 0x830F3B30;
	sub_830F2EE0(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,36(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 36);
loc_830F3B3C:
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x830F3B44;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// bne 0x830f3b08
	if (!ctx.cr0.eq) goto loc_830F3B08;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830F3B64"))) PPC_WEAK_FUNC(sub_830F3B64);
PPC_FUNC_IMPL(__imp__sub_830F3B64) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_830F3B68"))) PPC_WEAK_FUNC(sub_830F3B68);
PPC_FUNC_IMPL(__imp__sub_830F3B68) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// blt cr6,0x830f3bc8
	if (ctx.cr6.lt) goto loc_830F3BC8;
	// lis r11,1
	ctx.r11.s64 = 65536;
	// ori r11,r11,49177
	ctx.r11.u64 = ctx.r11.u64 | 49177;
	// lbzx r11,r3,r11
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + ctx.r11.u32);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x830f3bb8
	if (ctx.cr0.eq) goto loc_830F3BB8;
loc_830F3BB0:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x830f3c24
	goto loc_830F3C24;
loc_830F3BB8:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x830f9e58
	ctx.lr = 0x830F3BC0;
	sub_830F9E58(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x830f3bb0
	if (ctx.cr0.eq) goto loc_830F3BB0;
loc_830F3BC8:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r11,r11,2
	ctx.r11.s64 = ctx.r11.s64 + 2;
	// rlwinm r11,r11,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// lhzx r11,r11,r31
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r11.u32 + ctx.r31.u32);
	// sth r11,0(r30)
	PPC_STORE_U16(ctx.r30.u32 + 0, ctx.r11.u16);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// lhz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r30.u32 + 0);
	// andi. r11,r11,57168
	ctx.r11.u64 = ctx.r11.u64 & 57168;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x830f3c10
	if (ctx.cr0.eq) goto loc_830F3C10;
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
	// b 0x830f3c20
	goto loc_830F3C20;
loc_830F3C10:
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x830fa918
	ctx.lr = 0x830F3C20;
	sub_830FA918(ctx, base);
loc_830F3C20:
	// li r3,1
	ctx.r3.s64 = 1;
loc_830F3C24:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830F3C3C"))) PPC_WEAK_FUNC(sub_830F3C3C);
PPC_FUNC_IMPL(__imp__sub_830F3C3C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_830F3C40"))) PPC_WEAK_FUNC(sub_830F3C40);
PPC_FUNC_IMPL(__imp__sub_830F3C40) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// blt cr6,0x830f3c90
	if (ctx.cr6.lt) goto loc_830F3C90;
	// bl 0x830f9e58
	ctx.lr = 0x830F3C78;
	sub_830F9E58(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x830f3c90
	if (!ctx.cr0.eq) goto loc_830F3C90;
	// li r11,0
	ctx.r11.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
	// sth r11,0(r30)
	PPC_STORE_U16(ctx.r30.u32 + 0, ctx.r11.u16);
	// b 0x830f3cf4
	goto loc_830F3CF4;
loc_830F3C90:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r11,r11,2
	ctx.r11.s64 = ctx.r11.s64 + 2;
	// rlwinm r11,r11,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// lhzx r10,r11,r31
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r11.u32 + ctx.r31.u32);
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// cmplwi cr6,r10,13
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 13, ctx.xer);
	// sth r10,0(r30)
	PPC_STORE_U16(ctx.r30.u32 + 0, ctx.r10.u16);
	// beq cr6,0x830f3cd4
	if (ctx.cr6.eq) goto loc_830F3CD4;
	// lis r10,2
	ctx.r10.s64 = 131072;
	// ori r10,r10,32856
	ctx.r10.u64 = ctx.r10.u64 | 32856;
	// lbzx r10,r31,r10
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + ctx.r10.u32);
	// cmplwi r10,0
	ctx.cr0.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq 0x830f3cf0
	if (ctx.cr0.eq) goto loc_830F3CF0;
	// cmplwi cr6,r11,133
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 133, ctx.xer);
	// beq cr6,0x830f3cd4
	if (ctx.cr6.eq) goto loc_830F3CD4;
	// cmplwi cr6,r11,8232
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 8232, ctx.xer);
	// bne cr6,0x830f3cf0
	if (!ctx.cr6.eq) goto loc_830F3CF0;
loc_830F3CD4:
	// lis r11,2
	ctx.r11.s64 = 131072;
	// ori r11,r11,32820
	ctx.r11.u64 = ctx.r11.u64 | 32820;
	// lwzx r11,r31,r11
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r11.u32);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x830f3cf0
	if (!ctx.cr6.eq) goto loc_830F3CF0;
	// li r11,10
	ctx.r11.s64 = 10;
	// sth r11,0(r30)
	PPC_STORE_U16(ctx.r30.u32 + 0, ctx.r11.u16);
loc_830F3CF0:
	// li r3,1
	ctx.r3.s64 = 1;
loc_830F3CF4:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830F3D0C"))) PPC_WEAK_FUNC(sub_830F3D0C);
PPC_FUNC_IMPL(__imp__sub_830F3D0C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_830F3D10"))) PPC_WEAK_FUNC(sub_830F3D10);
PPC_FUNC_IMPL(__imp__sub_830F3D10) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32228
	ctx.r11.s64 = -2112094208;
	// addi r11,r11,17928
	ctx.r11.s64 = ctx.r11.s64 + 17928;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830F3D20"))) PPC_WEAK_FUNC(sub_830F3D20);
PPC_FUNC_IMPL(__imp__sub_830F3D20) {
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
	// addi r11,r11,17928
	ctx.r11.s64 = ctx.r11.s64 + 17928;
	// clrlwi. r10,r4,31
	ctx.r10.u64 = ctx.r4.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// beq 0x830f3d4c
	if (ctx.cr0.eq) goto loc_830F3D4C;
	// bl 0x82e01698
	ctx.lr = 0x830F3D4C;
	sub_82E01698(ctx, base);
loc_830F3D4C:
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

__attribute__((alias("__imp__sub_830F3D64"))) PPC_WEAK_FUNC(sub_830F3D64);
PPC_FUNC_IMPL(__imp__sub_830F3D64) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_830F3D68"))) PPC_WEAK_FUNC(sub_830F3D68);
PPC_FUNC_IMPL(__imp__sub_830F3D68) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-32228
	ctx.r10.s64 = -2112094208;
	// stw r4,40(r3)
	PPC_STORE_U32(ctx.r3.u32 + 40, ctx.r4.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r10,r10,17948
	ctx.r10.s64 = ctx.r10.s64 + 17948;
	// li r9,1
	ctx.r9.s64 = 1;
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// stw r11,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r11.u32);
	// stw r11,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r11.u32);
	// stw r9,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r9.u32);
	// stw r11,24(r3)
	PPC_STORE_U32(ctx.r3.u32 + 24, ctx.r11.u32);
	// stb r11,28(r3)
	PPC_STORE_U8(ctx.r3.u32 + 28, ctx.r11.u8);
	// stw r11,32(r3)
	PPC_STORE_U32(ctx.r3.u32 + 32, ctx.r11.u32);
	// stb r11,36(r3)
	PPC_STORE_U8(ctx.r3.u32 + 36, ctx.r11.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830F3DA8"))) PPC_WEAK_FUNC(sub_830F3DA8);
PPC_FUNC_IMPL(__imp__sub_830F3DA8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lwz r25,17952(r26)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r26.u32 + 17952);
	// lwz r16,17984(r28)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r28.u32 + 17984);
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x833a0194
	ctx.lr = 0x830F3DB8;
	__savegprlr_23(ctx, base);
	// addi r31,r1,-208
	ctx.r31.s64 = ctx.r1.s64 + -208;
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// stw r3,228(r31)
	PPC_STORE_U32(ctx.r31.u32 + 228, ctx.r3.u32);
	// li r3,24
	ctx.r3.s64 = 24;
	// mr r26,r4
	ctx.r26.u64 = ctx.r4.u64;
	// mr r25,r5
	ctx.r25.u64 = ctx.r5.u64;
	// mr r24,r6
	ctx.r24.u64 = ctx.r6.u64;
	// lwz r4,40(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 40);
	// mr r29,r7
	ctx.r29.u64 = ctx.r7.u64;
	// mr r28,r8
	ctx.r28.u64 = ctx.r8.u64;
	// mr r27,r9
	ctx.r27.u64 = ctx.r9.u64;
	// mr r23,r10
	ctx.r23.u64 = ctx.r10.u64;
	// bl 0x830dd390
	ctx.lr = 0x830F3DF0;
	sub_830DD390(ctx, base);
	// stw r3,112(r31)
	PPC_STORE_U32(ctx.r31.u32 + 112, ctx.r3.u32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x830f3e24
	if (ctx.cr0.eq) goto loc_830F3E24;
	// clrlwi r11,r27,24
	ctx.r11.u64 = ctx.r27.u32 & 0xFF;
	// lwz r7,40(r30)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r30.u32 + 40);
	// rlwinm r5,r28,1,0,30
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 1) & 0xFFFFFFFE;
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// rlwinm r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// addi r6,r11,1
	ctx.r6.s64 = ctx.r11.s64 + 1;
	// bl 0x830e3168
	ctx.lr = 0x830F3E1C;
	sub_830E3168(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// b 0x830f3e28
	goto loc_830F3E28;
loc_830F3E24:
	// li r29,0
	ctx.r29.s64 = 0;
loc_830F3E28:
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// bne cr6,0x830f3e38
	if (!ctx.cr6.eq) goto loc_830F3E38;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x830f3edc
	goto loc_830F3EDC;
loc_830F3E38:
	// lis r3,2
	ctx.r3.s64 = 131072;
	// lwz r4,40(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 40);
	// ori r3,r3,32868
	ctx.r3.u64 = ctx.r3.u64 | 32868;
	// bl 0x830dd390
	ctx.lr = 0x830F3E48;
	sub_830DD390(ctx, base);
	// stw r3,112(r31)
	PPC_STORE_U32(ctx.r31.u32 + 112, ctx.r3.u32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x830f3e94
	if (ctx.cr0.eq) goto loc_830F3E94;
	// lwz r4,32(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 32);
	// li r7,0
	ctx.r7.s64 = 0;
	// lwz r11,40(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 40);
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r7,87(r1)
	PPC_STORE_U8(ctx.r1.u32 + 87, ctx.r7.u8);
	// mr r9,r24
	ctx.r9.u64 = ctx.r24.u64;
	// mr r8,r25
	ctx.r8.u64 = ctx.r25.u64;
	// stb r23,95(r1)
	PPC_STORE_U8(ctx.r1.u32 + 95, ctx.r23.u8);
	// li r7,7
	ctx.r7.s64 = 7;
	// stw r4,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r4.u32);
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r11,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r11.u32);
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// bl 0x830f9ba0
	ctx.lr = 0x830F3E90;
	sub_830F9BA0(ctx, base);
	// b 0x830f3e98
	goto loc_830F3E98;
loc_830F3E94:
	// li r3,0
	ctx.r3.s64 = 0;
loc_830F3E98:
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x830f3ec0
	if (!ctx.cr6.eq) goto loc_830F3EC0;
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
	ctx.lr = 0x830F3EB8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x830f3edc
	goto loc_830F3EDC;
loc_830F3EC0:
	// lis r10,2
	ctx.r10.s64 = 131072;
	// lwz r11,20(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 20);
	// ori r10,r10,32808
	ctx.r10.u64 = ctx.r10.u64 | 32808;
	// addi r9,r11,1
	ctx.r9.s64 = ctx.r11.s64 + 1;
	// stw r9,20(r30)
	PPC_STORE_U32(ctx.r30.u32 + 20, ctx.r9.u32);
	// stw r11,112(r31)
	PPC_STORE_U32(ctx.r31.u32 + 112, ctx.r11.u32);
	// stwx r11,r3,r10
	PPC_STORE_U32(ctx.r3.u32 + ctx.r10.u32, ctx.r11.u32);
loc_830F3EDC:
	// addi r1,r31,208
	ctx.r1.s64 = ctx.r31.s64 + 208;
	// b 0x833a01e4
	__restgprlr_23(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_830F3DB0"))) PPC_WEAK_FUNC(sub_830F3DB0);
PPC_FUNC_IMPL(__imp__sub_830F3DB0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x833a0194
	ctx.lr = 0x830F3DB8;
	__savegprlr_23(ctx, base);
	// addi r31,r1,-208
	ctx.r31.s64 = ctx.r1.s64 + -208;
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// stw r3,228(r31)
	PPC_STORE_U32(ctx.r31.u32 + 228, ctx.r3.u32);
	// li r3,24
	ctx.r3.s64 = 24;
	// mr r26,r4
	ctx.r26.u64 = ctx.r4.u64;
	// mr r25,r5
	ctx.r25.u64 = ctx.r5.u64;
	// mr r24,r6
	ctx.r24.u64 = ctx.r6.u64;
	// lwz r4,40(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 40);
	// mr r29,r7
	ctx.r29.u64 = ctx.r7.u64;
	// mr r28,r8
	ctx.r28.u64 = ctx.r8.u64;
	// mr r27,r9
	ctx.r27.u64 = ctx.r9.u64;
	// mr r23,r10
	ctx.r23.u64 = ctx.r10.u64;
	// bl 0x830dd390
	ctx.lr = 0x830F3DF0;
	sub_830DD390(ctx, base);
	// stw r3,112(r31)
	PPC_STORE_U32(ctx.r31.u32 + 112, ctx.r3.u32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x830f3e24
	if (ctx.cr0.eq) goto loc_830F3E24;
	// clrlwi r11,r27,24
	ctx.r11.u64 = ctx.r27.u32 & 0xFF;
	// lwz r7,40(r30)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r30.u32 + 40);
	// rlwinm r5,r28,1,0,30
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 1) & 0xFFFFFFFE;
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// rlwinm r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// addi r6,r11,1
	ctx.r6.s64 = ctx.r11.s64 + 1;
	// bl 0x830e3168
	ctx.lr = 0x830F3E1C;
	sub_830E3168(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// b 0x830f3e28
	goto loc_830F3E28;
loc_830F3E24:
	// li r29,0
	ctx.r29.s64 = 0;
loc_830F3E28:
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// bne cr6,0x830f3e38
	if (!ctx.cr6.eq) goto loc_830F3E38;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x830f3edc
	goto loc_830F3EDC;
loc_830F3E38:
	// lis r3,2
	ctx.r3.s64 = 131072;
	// lwz r4,40(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 40);
	// ori r3,r3,32868
	ctx.r3.u64 = ctx.r3.u64 | 32868;
	// bl 0x830dd390
	ctx.lr = 0x830F3E48;
	sub_830DD390(ctx, base);
	// stw r3,112(r31)
	PPC_STORE_U32(ctx.r31.u32 + 112, ctx.r3.u32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x830f3e94
	if (ctx.cr0.eq) goto loc_830F3E94;
	// lwz r4,32(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 32);
	// li r7,0
	ctx.r7.s64 = 0;
	// lwz r11,40(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 40);
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r7,87(r1)
	PPC_STORE_U8(ctx.r1.u32 + 87, ctx.r7.u8);
	// mr r9,r24
	ctx.r9.u64 = ctx.r24.u64;
	// mr r8,r25
	ctx.r8.u64 = ctx.r25.u64;
	// stb r23,95(r1)
	PPC_STORE_U8(ctx.r1.u32 + 95, ctx.r23.u8);
	// li r7,7
	ctx.r7.s64 = 7;
	// stw r4,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r4.u32);
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r11,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r11.u32);
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// bl 0x830f9ba0
	ctx.lr = 0x830F3E90;
	sub_830F9BA0(ctx, base);
	// b 0x830f3e98
	goto loc_830F3E98;
loc_830F3E94:
	// li r3,0
	ctx.r3.s64 = 0;
loc_830F3E98:
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x830f3ec0
	if (!ctx.cr6.eq) goto loc_830F3EC0;
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
	ctx.lr = 0x830F3EB8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x830f3edc
	goto loc_830F3EDC;
loc_830F3EC0:
	// lis r10,2
	ctx.r10.s64 = 131072;
	// lwz r11,20(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 20);
	// ori r10,r10,32808
	ctx.r10.u64 = ctx.r10.u64 | 32808;
	// addi r9,r11,1
	ctx.r9.s64 = ctx.r11.s64 + 1;
	// stw r9,20(r30)
	PPC_STORE_U32(ctx.r30.u32 + 20, ctx.r9.u32);
	// stw r11,112(r31)
	PPC_STORE_U32(ctx.r31.u32 + 112, ctx.r11.u32);
	// stwx r11,r3,r10
	PPC_STORE_U32(ctx.r3.u32 + ctx.r10.u32, ctx.r11.u32);
loc_830F3EDC:
	// addi r1,r31,208
	ctx.r1.s64 = ctx.r31.s64 + 208;
	// b 0x833a01e4
	__restgprlr_23(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_830F3EE4"))) PPC_WEAK_FUNC(sub_830F3EE4);
PPC_FUNC_IMPL(__imp__sub_830F3EE4) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// addi r31,r12,-208
	ctx.r31.s64 = ctx.r12.s64 + -208;
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,228(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 228);
	// lwz r4,40(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 40);
	// lwz r3,112(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 112);
	// bl 0x830dd3e0
	ctx.lr = 0x830F3F04;
	sub_830DD3E0(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830F3F14"))) PPC_WEAK_FUNC(sub_830F3F14);
PPC_FUNC_IMPL(__imp__sub_830F3F14) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// addi r31,r12,-208
	ctx.r31.s64 = ctx.r12.s64 + -208;
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,228(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 228);
	// lwz r4,40(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 40);
	// lwz r3,112(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 112);
	// bl 0x830dd3e0
	ctx.lr = 0x830F3F34;
	sub_830DD3E0(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830F3F44"))) PPC_WEAK_FUNC(sub_830F3F44);
PPC_FUNC_IMPL(__imp__sub_830F3F44) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_830F3F48"))) PPC_WEAK_FUNC(sub_830F3F48);
PPC_FUNC_IMPL(__imp__sub_830F3F48) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x830f3f84
	if (ctx.cr6.eq) goto loc_830F3F84;
	// lis r10,2
	ctx.r10.s64 = 131072;
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// ori r10,r10,32848
	ctx.r10.u64 = ctx.r10.u64 | 32848;
	// lwzx r10,r11,r10
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x830f3f84
	if (!ctx.cr6.eq) goto loc_830F3F84;
	// lis r10,2
	ctx.r10.s64 = 131072;
	// li r3,1
	ctx.r3.s64 = 1;
	// ori r10,r10,32812
	ctx.r10.u64 = ctx.r10.u64 | 32812;
	// lwzx r11,r11,r10
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
loc_830F3F84:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830F3F8C"))) PPC_WEAK_FUNC(sub_830F3F8C);
PPC_FUNC_IMPL(__imp__sub_830F3F8C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_830F3F90"))) PPC_WEAK_FUNC(sub_830F3F90);
PPC_FUNC_IMPL(__imp__sub_830F3F90) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32228
	ctx.r11.s64 = -2112094208;
	// addi r11,r11,18064
	ctx.r11.s64 = ctx.r11.s64 + 18064;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830F3FA0"))) PPC_WEAK_FUNC(sub_830F3FA0);
PPC_FUNC_IMPL(__imp__sub_830F3FA0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x833a01a8
	ctx.lr = 0x830F3FA8;
	__savegprlr_28(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// cmplw cr6,r5,r11
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x830f3ff0
	if (ctx.cr6.lt) goto loc_830F3FF0;
	// lis r11,-32228
	ctx.r11.s64 = -2112094208;
	// lwz r7,20(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// li r6,116
	ctx.r6.s64 = 116;
	// addi r4,r11,-11428
	ctx.r4.s64 = ctx.r11.s64 + -11428;
	// li r5,68
	ctx.r5.s64 = 68;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x830d56c0
	ctx.lr = 0x830F3FE0;
	sub_830D56C0(ctx, base);
	// lis r11,-32194
	ctx.r11.s64 = -2109865984;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,-28420
	ctx.r4.s64 = ctx.r11.s64 + -28420;
	// bl 0x833a7198
	ctx.lr = 0x830F3FF0;
	sub_833A7198(ctx, base);
loc_830F3FF0:
	// lbz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 4);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x830f4020
	if (ctx.cr0.eq) goto loc_830F4020;
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// rlwinm r10,r30,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r29,r10,r11
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x830f4020
	if (ctx.cr6.eq) goto loc_830F4020;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x830f9110
	ctx.lr = 0x830F4018;
	sub_830F9110(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x830dd3e0
	ctx.lr = 0x830F4020;
	sub_830DD3E0(ctx, base);
loc_830F4020:
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// rlwinm r10,r30,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r28,r10,r11
	PPC_STORE_U32(ctx.r10.u32 + ctx.r11.u32, ctx.r28.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x833a01f8
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_830F4034"))) PPC_WEAK_FUNC(sub_830F4034);
PPC_FUNC_IMPL(__imp__sub_830F4034) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_830F4038"))) PPC_WEAK_FUNC(sub_830F4038);
PPC_FUNC_IMPL(__imp__sub_830F4038) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x833a01a4
	ctx.lr = 0x830F4040;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// li r27,0
	ctx.r27.s64 = 0;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r29,r27
	ctx.r29.u64 = ctx.r27.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x830f40a8
	if (!ctx.cr6.gt) goto loc_830F40A8;
	// mr r30,r27
	ctx.r30.u64 = ctx.r27.u64;
loc_830F4060:
	// lbz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 4);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x830f408c
	if (ctx.cr0.eq) goto loc_830F408C;
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// lwzx r28,r11,r30
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r30.u32);
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// beq cr6,0x830f408c
	if (ctx.cr6.eq) goto loc_830F408C;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x830f9110
	ctx.lr = 0x830F4084;
	sub_830F9110(ctx, base);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x830dd3e0
	ctx.lr = 0x830F408C;
	sub_830DD3E0(ctx, base);
loc_830F408C:
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// stwx r27,r11,r30
	PPC_STORE_U32(ctx.r11.u32 + ctx.r30.u32, ctx.r27.u32);
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmplw cr6,r29,r11
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x830f4060
	if (ctx.cr6.lt) goto loc_830F4060;
loc_830F40A8:
	// stw r27,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r27.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x833a01f4
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_830F40B4"))) PPC_WEAK_FUNC(sub_830F40B4);
PPC_FUNC_IMPL(__imp__sub_830F40B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_830F40B8"))) PPC_WEAK_FUNC(sub_830F40B8);
PPC_FUNC_IMPL(__imp__sub_830F40B8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x833a01ac
	ctx.lr = 0x830F40C0;
	__savegprlr_29(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// cmplw cr6,r4,r11
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x830f4104
	if (ctx.cr6.lt) goto loc_830F4104;
	// lis r11,-32228
	ctx.r11.s64 = -2112094208;
	// lwz r7,20(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// li r6,116
	ctx.r6.s64 = 116;
	// addi r4,r11,-11428
	ctx.r4.s64 = ctx.r11.s64 + -11428;
	// li r5,145
	ctx.r5.s64 = 145;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x830d56c0
	ctx.lr = 0x830F40F4;
	sub_830D56C0(ctx, base);
	// lis r11,-32194
	ctx.r11.s64 = -2109865984;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,-28420
	ctx.r4.s64 = ctx.r11.s64 + -28420;
	// bl 0x833a7198
	ctx.lr = 0x830F4104;
	sub_833A7198(ctx, base);
loc_830F4104:
	// lbz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 4);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x830f4134
	if (ctx.cr0.eq) goto loc_830F4134;
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// rlwinm r10,r30,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r29,r10,r11
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x830f4134
	if (ctx.cr6.eq) goto loc_830F4134;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x830f9110
	ctx.lr = 0x830F412C;
	sub_830F9110(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x830dd3e0
	ctx.lr = 0x830F4134;
	sub_830DD3E0(ctx, base);
loc_830F4134:
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x830f4158
	if (!ctx.cr6.eq) goto loc_830F4158;
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// rlwinm r10,r30,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 2) & 0xFFFFFFFC;
	// li r9,0
	ctx.r9.s64 = 0;
	// stwx r9,r10,r11
	PPC_STORE_U32(ctx.r10.u32 + ctx.r11.u32, ctx.r9.u32);
	// b 0x830f41a8
	goto loc_830F41A8;
loc_830F4158:
	// mr r10,r30
	ctx.r10.u64 = ctx.r30.u64;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// bge cr6,0x830f4190
	if (!ctx.cr6.lt) goto loc_830F4190;
	// rlwinm r11,r30,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 2) & 0xFFFFFFFC;
loc_830F4168:
	// lwz r9,16(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// add r9,r9,r11
	ctx.r9.u64 = ctx.r9.u64 + ctx.r11.u64;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// lwz r8,4(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// stw r8,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r8.u32);
	// lwz r9,8(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addi r9,r9,-1
	ctx.r9.s64 = ctx.r9.s64 + -1;
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// blt cr6,0x830f4168
	if (ctx.cr6.lt) goto loc_830F4168;
loc_830F4190:
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r9,-4(r11)
	PPC_STORE_U32(ctx.r11.u32 + -4, ctx.r9.u32);
loc_830F41A8:
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x833a01fc
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_830F41BC"))) PPC_WEAK_FUNC(sub_830F41BC);
PPC_FUNC_IMPL(__imp__sub_830F41BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_830F41C0"))) PPC_WEAK_FUNC(sub_830F41C0);
PPC_FUNC_IMPL(__imp__sub_830F41C0) {
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
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x830f4214
	if (ctx.cr6.eq) goto loc_830F4214;
	// lbz r10,4(r3)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r3.u32 + 4);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// cmplwi r10,0
	ctx.cr0.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// beq 0x830f4214
	if (ctx.cr0.eq) goto loc_830F4214;
	// lwz r10,16(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r31,r11,r10
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x830f4214
	if (ctx.cr6.eq) goto loc_830F4214;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x830f9110
	ctx.lr = 0x830F420C;
	sub_830F9110(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x830dd3e0
	ctx.lr = 0x830F4214;
	sub_830DD3E0(ctx, base);
loc_830F4214:
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

__attribute__((alias("__imp__sub_830F4228"))) PPC_WEAK_FUNC(sub_830F4228);
PPC_FUNC_IMPL(__imp__sub_830F4228) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x833a01a8
	ctx.lr = 0x830F4230;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lbz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 4);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x830f428c
	if (ctx.cr0.eq) goto loc_830F428C;
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// li r28,0
	ctx.r28.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x830f428c
	if (!ctx.cr6.gt) goto loc_830F428C;
	// li r31,0
	ctx.r31.s64 = 0;
loc_830F4258:
	// lwz r11,16(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// lwzx r29,r11,r31
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r31.u32);
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x830f4278
	if (ctx.cr6.eq) goto loc_830F4278;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x830f9110
	ctx.lr = 0x830F4270;
	sub_830F9110(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x830dd3e0
	ctx.lr = 0x830F4278;
	sub_830DD3E0(ctx, base);
loc_830F4278:
	// lwz r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// cmplw cr6,r28,r11
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x830f4258
	if (ctx.cr6.lt) goto loc_830F4258;
loc_830F428C:
	// lwz r3,20(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 20);
	// lwz r4,16(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x830F42A4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x833a01f8
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_830F42AC"))) PPC_WEAK_FUNC(sub_830F42AC);
PPC_FUNC_IMPL(__imp__sub_830F42AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_830F42B0"))) PPC_WEAK_FUNC(sub_830F42B0);
PPC_FUNC_IMPL(__imp__sub_830F42B0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lwz r25,17952(r26)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r26.u32 + 17952);
	// lwz r16,18120(r28)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r28.u32 + 18120);
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x833a01a4
	ctx.lr = 0x830F42C0;
	__savegprlr_27(ctx, base);
	// addi r31,r1,-128
	ctx.r31.s64 = ctx.r1.s64 + -128;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32228
	ctx.r11.s64 = -2112094208;
	// stw r3,148(r31)
	PPC_STORE_U32(ctx.r31.u32 + 148, ctx.r3.u32);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r11,r11,18088
	ctx.r11.s64 = ctx.r11.s64 + 18088;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// lbz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 4);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x830f4330
	if (ctx.cr0.eq) goto loc_830F4330;
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// li r27,0
	ctx.r27.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x830f4330
	if (!ctx.cr6.gt) goto loc_830F4330;
	// li r29,0
	ctx.r29.s64 = 0;
loc_830F42FC:
	// lwz r11,16(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// lwzx r28,r11,r29
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r29.u32);
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// beq cr6,0x830f431c
	if (ctx.cr6.eq) goto loc_830F431C;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x830f9110
	ctx.lr = 0x830F4314;
	sub_830F9110(ctx, base);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x830dd3e0
	ctx.lr = 0x830F431C;
	sub_830DD3E0(ctx, base);
loc_830F431C:
	// lwz r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// addi r27,r27,1
	ctx.r27.s64 = ctx.r27.s64 + 1;
	// addi r29,r29,4
	ctx.r29.s64 = ctx.r29.s64 + 4;
	// cmplw cr6,r27,r11
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x830f42fc
	if (ctx.cr6.lt) goto loc_830F42FC;
loc_830F4330:
	// lwz r3,20(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 20);
	// lwz r4,16(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x830F4348;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r11,-32228
	ctx.r11.s64 = -2112094208;
	// addi r11,r11,18064
	ctx.r11.s64 = ctx.r11.s64 + 18064;
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
	// addi r1,r31,128
	ctx.r1.s64 = ctx.r31.s64 + 128;
	// b 0x833a01f4
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_830F42B8"))) PPC_WEAK_FUNC(sub_830F42B8);
PPC_FUNC_IMPL(__imp__sub_830F42B8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x833a01a4
	ctx.lr = 0x830F42C0;
	__savegprlr_27(ctx, base);
	// addi r31,r1,-128
	ctx.r31.s64 = ctx.r1.s64 + -128;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32228
	ctx.r11.s64 = -2112094208;
	// stw r3,148(r31)
	PPC_STORE_U32(ctx.r31.u32 + 148, ctx.r3.u32);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r11,r11,18088
	ctx.r11.s64 = ctx.r11.s64 + 18088;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// lbz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 4);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x830f4330
	if (ctx.cr0.eq) goto loc_830F4330;
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// li r27,0
	ctx.r27.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x830f4330
	if (!ctx.cr6.gt) goto loc_830F4330;
	// li r29,0
	ctx.r29.s64 = 0;
loc_830F42FC:
	// lwz r11,16(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// lwzx r28,r11,r29
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r29.u32);
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// beq cr6,0x830f431c
	if (ctx.cr6.eq) goto loc_830F431C;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x830f9110
	ctx.lr = 0x830F4314;
	sub_830F9110(ctx, base);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x830dd3e0
	ctx.lr = 0x830F431C;
	sub_830DD3E0(ctx, base);
loc_830F431C:
	// lwz r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// addi r27,r27,1
	ctx.r27.s64 = ctx.r27.s64 + 1;
	// addi r29,r29,4
	ctx.r29.s64 = ctx.r29.s64 + 4;
	// cmplw cr6,r27,r11
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x830f42fc
	if (ctx.cr6.lt) goto loc_830F42FC;
loc_830F4330:
	// lwz r3,20(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 20);
	// lwz r4,16(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x830F4348;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r11,-32228
	ctx.r11.s64 = -2112094208;
	// addi r11,r11,18064
	ctx.r11.s64 = ctx.r11.s64 + 18064;
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
	// addi r1,r31,128
	ctx.r1.s64 = ctx.r31.s64 + 128;
	// b 0x833a01f4
	__restgprlr_27(ctx, base);
	return;
}

