#include "ppc_recomp_shared.h"

__attribute__((alias("__imp__sub_83288198"))) PPC_WEAK_FUNC(sub_83288198);
PPC_FUNC_IMPL(__imp__sub_83288198) {
	PPC_FUNC_PROLOGUE();
	// li r6,0
	ctx.r6.s64 = 0;
	// b 0x83287ea0
	sub_83287EA0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832881A0"))) PPC_WEAK_FUNC(sub_832881A0);
PPC_FUNC_IMPL(__imp__sub_832881A0) {
	PPC_FUNC_PROLOGUE();
	// li r6,1
	ctx.r6.s64 = 1;
	// b 0x83287ea0
	sub_83287EA0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832881A8"))) PPC_WEAK_FUNC(sub_832881A8);
PPC_FUNC_IMPL(__imp__sub_832881A8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x833a0198
	ctx.lr = 0x832881B0;
	__savegprlr_24(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mulli r11,r4,116
	ctx.r11.s64 = ctx.r4.s64 * 116;
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// addi r11,r11,5072
	ctx.r11.s64 = ctx.r11.s64 + 5072;
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// mr r28,r6
	ctx.r28.u64 = ctx.r6.u64;
	// li r25,0
	ctx.r25.s64 = 0;
	// lwz r30,20(r11)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// addi r29,r11,16
	ctx.r29.s64 = ctx.r11.s64 + 16;
	// beq cr6,0x83288290
	if (ctx.cr6.eq) goto loc_83288290;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x83288290
	if (ctx.cr6.eq) goto loc_83288290;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x83288290
	if (ctx.cr6.eq) goto loc_83288290;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x83287850
	ctx.lr = 0x83288204;
	sub_83287850(ctx, base);
	// cmpw cr6,r3,r31
	ctx.cr6.compare<int32_t>(ctx.r3.s32, ctx.r31.s32, ctx.xer);
	// bge cr6,0x8328823c
	if (!ctx.cr6.lt) goto loc_8328823C;
	// subf r24,r3,r31
	ctx.r24.s64 = ctx.r31.s64 - ctx.r3.s64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r5,r24
	ctx.r5.u64 = ctx.r24.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x83287850
	ctx.lr = 0x83288220;
	sub_83287850(ctx, base);
	// cmpw cr6,r3,r24
	ctx.cr6.compare<int32_t>(ctx.r3.s32, ctx.r24.s32, ctx.xer);
	// bge cr6,0x8328823c
	if (!ctx.cr6.lt) goto loc_8328823C;
	// lis r4,-256
	ctx.r4.s64 = -16777216;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// ori r4,r4,1035
	ctx.r4.u64 = ctx.r4.u64 | 1035;
	// bl 0x83282390
	ctx.lr = 0x83288238;
	sub_83282390(ctx, base);
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
loc_8328823C:
	// cmpwi cr6,r28,1
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 1, ctx.xer);
	// bne cr6,0x8328826c
	if (!ctx.cr6.eq) goto loc_8328826C;
	// cmpwi cr6,r27,1
	ctx.cr6.compare<int32_t>(ctx.r27.s32, 1, ctx.xer);
	// bne cr6,0x83288254
	if (!ctx.cr6.eq) goto loc_83288254;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x83287f68
	ctx.lr = 0x83288254;
	sub_83287F68(ctx, base);
loc_83288254:
	// lwz r11,36(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 36);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt cr6,0x83288280
	if (ctx.cr6.lt) goto loc_83288280;
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// stw r11,36(r29)
	PPC_STORE_U32(ctx.r29.u32 + 36, ctx.r11.u32);
	// b 0x83288280
	goto loc_83288280;
loc_8328826C:
	// lwz r11,32(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt cr6,0x83288280
	if (ctx.cr6.lt) goto loc_83288280;
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// stw r11,32(r29)
	PPC_STORE_U32(ctx.r29.u32 + 32, ctx.r11.u32);
loc_83288280:
	// li r11,1
	ctx.r11.s64 = 1;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// stw r11,100(r26)
	PPC_STORE_U32(ctx.r26.u32 + 100, ctx.r11.u32);
	// b 0x83288294
	goto loc_83288294;
loc_83288290:
	// li r3,0
	ctx.r3.s64 = 0;
loc_83288294:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x833a01e8
	__restgprlr_24(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8328829C"))) PPC_WEAK_FUNC(sub_8328829C);
PPC_FUNC_IMPL(__imp__sub_8328829C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832882A0"))) PPC_WEAK_FUNC(sub_832882A0);
PPC_FUNC_IMPL(__imp__sub_832882A0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// bl 0x832881a0
	ctx.lr = 0x832882B4;
	sub_832881A0(ctx, base);
	// lwz r10,92(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// add r3,r10,r11
	ctx.r3.u64 = ctx.r10.u64 + ctx.r11.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_832882D0"))) PPC_WEAK_FUNC(sub_832882D0);
PPC_FUNC_IMPL(__imp__sub_832882D0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x833a01ac
	ctx.lr = 0x832882D8;
	__savegprlr_29(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r31,r5,8
	ctx.r31.s64 = ctx.r5.s64 + 8;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// mr r7,r5
	ctx.r7.u64 = ctx.r5.u64;
	// lwz r5,4(r5)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r5.u32 + 4);
	// bl 0x832874b0
	ctx.lr = 0x832882FC;
	sub_832874B0(ctx, base);
	// lwz r11,44(r7)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + 44);
	// lwz r10,8(r7)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r7.u32 + 8);
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// divw r9,r10,r11
	ctx.r9.s32 = ctx.r10.s32 / ctx.r11.s32;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mullw r11,r9,r11
	ctx.r11.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r11.s32);
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// subf r7,r11,r10
	ctx.r7.s64 = ctx.r10.s64 - ctx.r11.s64;
	// bl 0x83288090
	ctx.lr = 0x83288324;
	sub_83288090(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x832883dc
	if (!ctx.cr0.eq) goto loc_832883DC;
	// li r7,2048
	ctx.r7.s64 = 2048;
	// li r6,1
	ctx.r6.s64 = 1;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x83288090
	ctx.lr = 0x83288344;
	sub_83288090(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x832883dc
	if (!ctx.cr0.eq) goto loc_832883DC;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,2
	ctx.r6.s64 = 2;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x83288090
	ctx.lr = 0x83288364;
	sub_83288090(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x832883dc
	if (!ctx.cr0.eq) goto loc_832883DC;
	// li r7,3
	ctx.r7.s64 = 3;
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x83287cf0
	ctx.lr = 0x83288384;
	sub_83287CF0(ctx, base);
	// li r6,4
	ctx.r6.s64 = 4;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x83287d88
	ctx.lr = 0x83288398;
	sub_83287D88(ctx, base);
	// li r7,5
	ctx.r7.s64 = 5;
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x83287cf0
	ctx.lr = 0x832883B0;
	sub_83287CF0(ctx, base);
	// li r6,6
	ctx.r6.s64 = 6;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x83287d88
	ctx.lr = 0x832883C4;
	sub_83287D88(ctx, base);
	// li r6,7
	ctx.r6.s64 = 7;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x83287e08
	ctx.lr = 0x832883D8;
	sub_83287E08(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
loc_832883DC:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x833a01fc
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832883E4"))) PPC_WEAK_FUNC(sub_832883E4);
PPC_FUNC_IMPL(__imp__sub_832883E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832883E8"))) PPC_WEAK_FUNC(sub_832883E8);
PPC_FUNC_IMPL(__imp__sub_832883E8) {
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
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// bl 0x832876b8
	ctx.lr = 0x8328840C;
	sub_832876B8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// beq 0x83288428
	if (ctx.cr0.eq) goto loc_83288428;
	// lis r4,-256
	ctx.r4.s64 = -16777216;
	// ori r4,r4,1032
	ctx.r4.u64 = ctx.r4.u64 | 1032;
	// bl 0x83282390
	ctx.lr = 0x83288424;
	sub_83282390(ctx, base);
	// b 0x83288484
	goto loc_83288484;
loc_83288428:
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x83285b70
	ctx.lr = 0x83288430;
	sub_83285B70(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x83288440
	if (ctx.cr0.eq) goto loc_83288440;
	// li r5,0
	ctx.r5.s64 = 0;
	// b 0x83288478
	goto loc_83288478;
loc_83288440:
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83285b70
	ctx.lr = 0x8328844C;
	sub_83285B70(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x8328845c
	if (ctx.cr0.eq) goto loc_8328845C;
	// li r5,1
	ctx.r5.s64 = 1;
	// b 0x83288478
	goto loc_83288478;
loc_8328845C:
	// li r4,3
	ctx.r4.s64 = 3;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83285b70
	ctx.lr = 0x83288468;
	sub_83285B70(ctx, base);
	// subfic r11,r3,0
	ctx.xer.ca = ctx.r3.u32 <= 0;
	ctx.r11.s64 = 0 - ctx.r3.s64;
	// li r10,2
	ctx.r10.s64 = 2;
	// subfe r11,r11,r11
	temp.u8 = (~ctx.r11.u32 + ctx.r11.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r11.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r5,r11,r10
	ctx.r5.u64 = ctx.r11.u64 & ctx.r10.u64;
loc_83288478:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83288128
	ctx.lr = 0x83288484;
	sub_83288128(ctx, base);
loc_83288484:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8328849C"))) PPC_WEAK_FUNC(sub_8328849C);
PPC_FUNC_IMPL(__imp__sub_8328849C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832884A0"))) PPC_WEAK_FUNC(sub_832884A0);
PPC_FUNC_IMPL(__imp__sub_832884A0) {
	PPC_FUNC_PROLOGUE();
	// li r6,0
	ctx.r6.s64 = 0;
	// b 0x832881a8
	sub_832881A8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832884A8"))) PPC_WEAK_FUNC(sub_832884A8);
PPC_FUNC_IMPL(__imp__sub_832884A8) {
	PPC_FUNC_PROLOGUE();
	// li r6,1
	ctx.r6.s64 = 1;
	// b 0x832881a8
	sub_832881A8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832884B0"))) PPC_WEAK_FUNC(sub_832884B0);
PPC_FUNC_IMPL(__imp__sub_832884B0) {
	PPC_FUNC_PROLOGUE();
	// b 0x833a1390
	sub_833A1390(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832884B4"))) PPC_WEAK_FUNC(sub_832884B4);
PPC_FUNC_IMPL(__imp__sub_832884B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832884B8"))) PPC_WEAK_FUNC(sub_832884B8);
PPC_FUNC_IMPL(__imp__sub_832884B8) {
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
	// stw r11,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_832884D4"))) PPC_WEAK_FUNC(sub_832884D4);
PPC_FUNC_IMPL(__imp__sub_832884D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832884D8"))) PPC_WEAK_FUNC(sub_832884D8);
PPC_FUNC_IMPL(__imp__sub_832884D8) {
	PPC_FUNC_PROLOGUE();
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// stw r11,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r11.u32);
	// stw r11,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_832884EC"))) PPC_WEAK_FUNC(sub_832884EC);
PPC_FUNC_IMPL(__imp__sub_832884EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832884F0"))) PPC_WEAK_FUNC(sub_832884F0);
PPC_FUNC_IMPL(__imp__sub_832884F0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x833a01ac
	ctx.lr = 0x832884F8;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r10,r4,7
	ctx.r10.s64 = ctx.r4.s64 + 7;
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// rlwinm r29,r10,0,0,28
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFF8;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// subf r11,r29,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r29.s64;
	// li r4,0
	ctx.r4.s64 = 0;
	// add r31,r11,r5
	ctx.r31.u64 = ctx.r11.u64 + ctx.r5.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// bl 0x833a2b30
	ctx.lr = 0x83288524;
	sub_833A2B30(ctx, base);
	// srawi r10,r31,4
	ctx.xer.ca = (ctx.r31.s32 < 0) & ((ctx.r31.u32 & 0xF) != 0);
	ctx.r10.s64 = ctx.r31.s32 >> 4;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r29,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r29.u32);
	// addze r10,r10
	temp.s64 = ctx.r10.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r10.u32;
	ctx.r10.s64 = temp.s64;
	// stw r11,8(r30)
	PPC_STORE_U32(ctx.r30.u32 + 8, ctx.r11.u32);
	// stw r10,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r10.u32);
	// stw r11,12(r30)
	PPC_STORE_U32(ctx.r30.u32 + 12, ctx.r11.u32);
	// stw r11,16(r30)
	PPC_STORE_U32(ctx.r30.u32 + 16, ctx.r11.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x833a01fc
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8328854C"))) PPC_WEAK_FUNC(sub_8328854C);
PPC_FUNC_IMPL(__imp__sub_8328854C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83288550"))) PPC_WEAK_FUNC(sub_83288550);
PPC_FUNC_IMPL(__imp__sub_83288550) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lwz r10,8(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lwz r9,4(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmpw cr6,r10,r9
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r9.s32, ctx.xer);
	// bne cr6,0x83288570
	if (!ctx.cr6.eq) goto loc_83288570;
	// li r11,1
	ctx.r11.s64 = 1;
	// li r3,-1
	ctx.r3.s64 = -1;
	// b 0x832885cc
	goto loc_832885CC;
loc_83288570:
	// lwz r9,12(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm r7,r9,4,0,27
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 4) & 0xFFFFFFF0;
	// ld r6,0(r4)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r4.u32 + 0);
	// addi r8,r9,1
	ctx.r8.s64 = ctx.r9.s64 + 1;
	// add r3,r7,r10
	ctx.r3.u64 = ctx.r7.u64 + ctx.r10.u64;
	// stdx r6,r7,r10
	PPC_STORE_U64(ctx.r7.u32 + ctx.r10.u32, ctx.r6.u64);
	// ld r10,8(r4)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r4.u32 + 8);
	// std r10,8(r3)
	PPC_STORE_U64(ctx.r3.u32 + 8, ctx.r10.u64);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmpw cr6,r8,r10
	ctx.cr6.compare<int32_t>(ctx.r8.s32, ctx.r10.s32, ctx.xer);
	// blt cr6,0x832885a8
	if (ctx.cr6.lt) goto loc_832885A8;
	// subf r9,r10,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r10.s64;
	// addi r8,r9,1
	ctx.r8.s64 = ctx.r9.s64 + 1;
loc_832885A8:
	// lwz r9,8(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// rlwinm r7,r10,1,31,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0x1;
	// stw r8,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r8.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// srawi r8,r9,31
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x7FFFFFFF) != 0);
	ctx.r8.s64 = ctx.r9.s32 >> 31;
	// stw r9,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r9.u32);
	// subfc r11,r10,r9
	ctx.xer.ca = ctx.r9.u32 >= ctx.r10.u32;
	ctx.r11.s64 = ctx.r9.s64 - ctx.r10.s64;
	// adde r11,r7,r8
	temp.u8 = (ctx.r7.u32 + ctx.r8.u32 < ctx.r7.u32) | (ctx.r7.u32 + ctx.r8.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ctx.r7.u64 + ctx.r8.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
loc_832885CC:
	// stw r11,0(r5)
	PPC_STORE_U32(ctx.r5.u32 + 0, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_832885D4"))) PPC_WEAK_FUNC(sub_832885D4);
PPC_FUNC_IMPL(__imp__sub_832885D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832885D8"))) PPC_WEAK_FUNC(sub_832885D8);
PPC_FUNC_IMPL(__imp__sub_832885D8) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lwz r11,16(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// rlwinm r11,r11,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// add r9,r11,r10
	ctx.r9.u64 = ctx.r11.u64 + ctx.r10.u64;
	// ldx r11,r11,r10
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r11.u32 + ctx.r10.u32);
	// std r11,0(r4)
	PPC_STORE_U64(ctx.r4.u32 + 0, ctx.r11.u64);
	// ld r11,8(r9)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r9.u32 + 8);
	// std r11,8(r4)
	PPC_STORE_U64(ctx.r4.u32 + 8, ctx.r11.u64);
	// lwz r10,4(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// lwz r11,16(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// addi r9,r11,1
	ctx.r9.s64 = ctx.r11.s64 + 1;
	// cmpw cr6,r9,r10
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r10.s32, ctx.xer);
	// blt cr6,0x83288620
	if (ctx.cr6.lt) goto loc_83288620;
	// subf r11,r10,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r10.s64;
	// addi r9,r11,1
	ctx.r9.s64 = ctx.r11.s64 + 1;
loc_83288620:
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// stw r9,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r9.u32);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83288634"))) PPC_WEAK_FUNC(sub_83288634);
PPC_FUNC_IMPL(__imp__sub_83288634) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83288638"))) PPC_WEAK_FUNC(sub_83288638);
PPC_FUNC_IMPL(__imp__sub_83288638) {
	PPC_FUNC_PROLOGUE();
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x833a01a8
	ctx.lr = 0x83288640;
	__savegprlr_28(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lwz r28,8(r3)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// lwz r7,4(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// add r31,r5,r6
	ctx.r31.u64 = ctx.r5.u64 + ctx.r6.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// cmpwi cr6,r28,0
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// lwz r8,16(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// ble cr6,0x832886e8
	if (!ctx.cr6.gt) goto loc_832886E8;
	// lwz r30,0(r11)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm r9,r8,4,0,27
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 4) & 0xFFFFFFF0;
	// rlwinm r29,r7,4,0,27
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 4) & 0xFFFFFFF0;
loc_8328866C:
	// add r11,r9,r30
	ctx.r11.u64 = ctx.r9.u64 + ctx.r30.u64;
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// cmplw cr6,r11,r31
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r31.u32, ctx.xer);
	// bgt cr6,0x83288690
	if (ctx.cr6.gt) goto loc_83288690;
	// cmplw cr6,r10,r4
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r4.u32, ctx.xer);
	// bgt cr6,0x832886b4
	if (ctx.cr6.gt) goto loc_832886B4;
	// b 0x832886ac
	goto loc_832886AC;
loc_83288690:
	// cmplw cr6,r10,r4
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r4.u32, ctx.xer);
	// bgt cr6,0x832886a0
	if (ctx.cr6.gt) goto loc_832886A0;
	// cmplw cr6,r4,r31
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r31.u32, ctx.xer);
	// blt cr6,0x832886ec
	if (ctx.cr6.lt) goto loc_832886EC;
loc_832886A0:
	// cmplw cr6,r5,r4
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, ctx.r4.u32, ctx.xer);
	// bgt cr6,0x832886b4
	if (ctx.cr6.gt) goto loc_832886B4;
	// subf r11,r6,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r6.s64;
loc_832886AC:
	// cmplw cr6,r4,r11
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x832886ec
	if (ctx.cr6.lt) goto loc_832886EC;
loc_832886B4:
	// addi r11,r8,1
	ctx.r11.s64 = ctx.r8.s64 + 1;
	// cmpw cr6,r11,r7
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r7.s32, ctx.xer);
	// bge cr6,0x832886cc
	if (!ctx.cr6.lt) goto loc_832886CC;
	// mr r8,r11
	ctx.r8.u64 = ctx.r11.u64;
	// addi r9,r9,16
	ctx.r9.s64 = ctx.r9.s64 + 16;
	// b 0x832886dc
	goto loc_832886DC;
loc_832886CC:
	// subf r10,r29,r9
	ctx.r10.s64 = ctx.r9.s64 - ctx.r29.s64;
	// subf r11,r7,r8
	ctx.r11.s64 = ctx.r8.s64 - ctx.r7.s64;
	// addi r9,r10,16
	ctx.r9.s64 = ctx.r10.s64 + 16;
	// addi r8,r11,1
	ctx.r8.s64 = ctx.r11.s64 + 1;
loc_832886DC:
	// addi r3,r3,1
	ctx.r3.s64 = ctx.r3.s64 + 1;
	// cmpw cr6,r3,r28
	ctx.cr6.compare<int32_t>(ctx.r3.s32, ctx.r28.s32, ctx.xer);
	// blt cr6,0x8328866c
	if (ctx.cr6.lt) goto loc_8328866C;
loc_832886E8:
	// li r3,-1
	ctx.r3.s64 = -1;
loc_832886EC:
	// b 0x833a01f8
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832886F0"))) PPC_WEAK_FUNC(sub_832886F0);
PPC_FUNC_IMPL(__imp__sub_832886F0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// mulli r11,r4,116
	ctx.r11.s64 = ctx.r4.s64 * 116;
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// lwz r10,5128(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 5128);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x8328870c
	if (!ctx.cr6.eq) goto loc_8328870C;
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_8328870C:
	// lwz r10,5136(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 5136);
	// lwz r11,5132(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 5132);
	// srawi r9,r10,31
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x7FFFFFFF) != 0);
	ctx.r9.s64 = ctx.r10.s32 >> 31;
	// rlwinm r8,r11,1,31,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0x1;
	// subfc r11,r11,r10
	ctx.xer.ca = ctx.r10.u32 >= ctx.r11.u32;
	ctx.r11.s64 = ctx.r10.s64 - ctx.r11.s64;
	// adde r3,r8,r9
	temp.u8 = (ctx.r8.u32 + ctx.r9.u32 < ctx.r8.u32) | (ctx.r8.u32 + ctx.r9.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r3.u64 = ctx.r8.u64 + ctx.r9.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83288728"))) PPC_WEAK_FUNC(sub_83288728);
PPC_FUNC_IMPL(__imp__sub_83288728) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x833a01ac
	ctx.lr = 0x83288730;
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
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x83288780
	if (ctx.cr6.eq) goto loc_83288780;
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// ble cr6,0x83288780
	if (!ctx.cr6.gt) goto loc_83288780;
	// bl 0x83282090
	ctx.lr = 0x83288754;
	sub_83282090(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x83288770
	if (ctx.cr0.eq) goto loc_83288770;
	// lis r4,-256
	ctx.r4.s64 = -16777216;
	// li r3,0
	ctx.r3.s64 = 0;
	// ori r4,r4,357
	ctx.r4.u64 = ctx.r4.u64 | 357;
	// bl 0x83282390
	ctx.lr = 0x8328876C;
	sub_83282390(ctx, base);
	// b 0x83288784
	goto loc_83288784;
loc_83288770:
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r30,5244
	ctx.r3.s64 = ctx.r30.s64 + 5244;
	// bl 0x832884f0
	ctx.lr = 0x83288780;
	sub_832884F0(ctx, base);
loc_83288780:
	// li r3,0
	ctx.r3.s64 = 0;
loc_83288784:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x833a01fc
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8328878C"))) PPC_WEAK_FUNC(sub_8328878C);
PPC_FUNC_IMPL(__imp__sub_8328878C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83288790"))) PPC_WEAK_FUNC(sub_83288790);
PPC_FUNC_IMPL(__imp__sub_83288790) {
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
	// li r10,0
	ctx.r10.s64 = 0;
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// stw r10,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r10.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// ld r10,0(r5)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r5.u32 + 0);
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// cmpdi cr6,r10,0
	ctx.cr6.compare<int64_t>(ctx.r10.s64, 0, ctx.xer);
	// blt cr6,0x832887fc
	if (ctx.cr6.lt) goto loc_832887FC;
	// mulli r11,r11,116
	ctx.r11.s64 = ctx.r11.s64 * 116;
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// addi r3,r11,5128
	ctx.r3.s64 = ctx.r11.s64 + 5128;
	// lwz r11,5128(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 5128);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x832887fc
	if (ctx.cr6.eq) goto loc_832887FC;
	// mr r5,r6
	ctx.r5.u64 = ctx.r6.u64;
	// bl 0x83288550
	ctx.lr = 0x832887E0;
	sub_83288550(ctx, base);
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// bne cr6,0x832887fc
	if (!ctx.cr6.eq) goto loc_832887FC;
	// lis r4,-256
	ctx.r4.s64 = -16777216;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// ori r4,r4,1057
	ctx.r4.u64 = ctx.r4.u64 | 1057;
	// bl 0x83282390
	ctx.lr = 0x832887F8;
	sub_83282390(ctx, base);
	// b 0x83288800
	goto loc_83288800;
loc_832887FC:
	// li r3,0
	ctx.r3.s64 = 0;
loc_83288800:
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

__attribute__((alias("__imp__sub_83288814"))) PPC_WEAK_FUNC(sub_83288814);
PPC_FUNC_IMPL(__imp__sub_83288814) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83288818"))) PPC_WEAK_FUNC(sub_83288818);
PPC_FUNC_IMPL(__imp__sub_83288818) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x833a01ac
	ctx.lr = 0x83288820;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r29,8(r3)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r5,r6
	ctx.r5.u64 = ctx.r6.u64;
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// beq cr6,0x83288890
	if (ctx.cr6.eq) goto loc_83288890;
	// mr r6,r7
	ctx.r6.u64 = ctx.r7.u64;
	// bl 0x83288638
	ctx.lr = 0x83288844;
	sub_83288638(ctx, base);
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// beq cr6,0x83288890
	if (ctx.cr6.eq) goto loc_83288890;
	// lwz r9,16(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// add r11,r9,r3
	ctx.r11.u64 = ctx.r9.u64 + ctx.r3.u64;
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// blt cr6,0x83288868
	if (ctx.cr6.lt) goto loc_83288868;
	// subf r11,r10,r9
	ctx.r11.s64 = ctx.r9.s64 - ctx.r10.s64;
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
loc_83288868:
	// lwz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// rlwinm r10,r11,4,0,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// subf r8,r3,r29
	ctx.r8.s64 = ctx.r29.s64 - ctx.r3.s64;
	// stw r11,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r11.u32);
	// add r11,r10,r9
	ctx.r11.u64 = ctx.r10.u64 + ctx.r9.u64;
	// stw r8,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r8.u32);
	// ldx r10,r10,r9
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r10.u32 + ctx.r9.u32);
	// std r10,0(r30)
	PPC_STORE_U64(ctx.r30.u32 + 0, ctx.r10.u64);
	// ld r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r11.u32 + 8);
	// std r11,8(r30)
	PPC_STORE_U64(ctx.r30.u32 + 8, ctx.r11.u64);
loc_83288890:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x833a01fc
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83288898"))) PPC_WEAK_FUNC(sub_83288898);
PPC_FUNC_IMPL(__imp__sub_83288898) {
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
	// mulli r11,r4,116
	ctx.r11.s64 = ctx.r4.s64 * 116;
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// li r8,-1
	ctx.r8.s64 = -1;
	// addi r9,r11,5088
	ctx.r9.s64 = ctx.r11.s64 + 5088;
	// std r8,0(r6)
	PPC_STORE_U64(ctx.r6.u32 + 0, ctx.r8.u64);
	// mr r10,r5
	ctx.r10.u64 = ctx.r5.u64;
	// mr r5,r6
	ctx.r5.u64 = ctx.r6.u64;
	// lwz r8,5128(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 5128);
	// addi r3,r9,40
	ctx.r3.s64 = ctx.r9.s64 + 40;
	// lwz r6,5096(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 5096);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// lwz r7,5100(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 5100);
	// beq cr6,0x83288904
	if (ctx.cr6.eq) goto loc_83288904;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x832888ec
	if (!ctx.cr6.eq) goto loc_832888EC;
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// bl 0x832885d8
	ctx.lr = 0x832888E8;
	sub_832885D8(ctx, base);
	// b 0x83288904
	goto loc_83288904;
loc_832888EC:
	// add r11,r7,r6
	ctx.r11.u64 = ctx.r7.u64 + ctx.r6.u64;
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x832888fc
	if (ctx.cr6.lt) goto loc_832888FC;
	// subf r10,r7,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r7.s64;
loc_832888FC:
	// mr r4,r10
	ctx.r4.u64 = ctx.r10.u64;
	// bl 0x83288818
	ctx.lr = 0x83288904;
	sub_83288818(ctx, base);
loc_83288904:
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

__attribute__((alias("__imp__sub_83288918"))) PPC_WEAK_FUNC(sub_83288918);
PPC_FUNC_IMPL(__imp__sub_83288918) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// bl 0x83285f38
	ctx.lr = 0x83288938;
	sub_83285F38(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// li r3,0
	ctx.r3.s64 = 0;
	// beq 0x83288954
	if (ctx.cr0.eq) goto loc_83288954;
	// lis r4,-254
	ctx.r4.s64 = -16646144;
	// ori r4,r4,513
	ctx.r4.u64 = ctx.r4.u64 | 513;
	// bl 0x83286018
	ctx.lr = 0x83288950;
	sub_83286018(ctx, base);
	// b 0x83288968
	goto loc_83288968;
loc_83288954:
	// ld r11,24(r31)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r31.u32 + 24);
	// addi r10,r31,24
	ctx.r10.s64 = ctx.r31.s64 + 24;
	// std r11,0(r30)
	PPC_STORE_U64(ctx.r30.u32 + 0, ctx.r11.u64);
	// ld r11,32(r31)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r31.u32 + 32);
	// std r11,8(r30)
	PPC_STORE_U64(ctx.r30.u32 + 8, ctx.r11.u64);
loc_83288968:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83288980"))) PPC_WEAK_FUNC(sub_83288980);
PPC_FUNC_IMPL(__imp__sub_83288980) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x833a01ac
	ctx.lr = 0x83288988;
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
	// bl 0x83285f38
	ctx.lr = 0x8328899C;
	sub_83285F38(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x832889b8
	if (ctx.cr0.eq) goto loc_832889B8;
	// lis r4,-254
	ctx.r4.s64 = -16646144;
	// li r3,0
	ctx.r3.s64 = 0;
	// ori r4,r4,514
	ctx.r4.u64 = ctx.r4.u64 | 514;
	// bl 0x83286018
	ctx.lr = 0x832889B4;
	sub_83286018(ctx, base);
	// b 0x832889d4
	goto loc_832889D4;
loc_832889B8:
	// rlwinm r11,r29,5,0,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 5) & 0xFFFFFFE0;
	// li r5,32
	ctx.r5.s64 = 32;
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r4,r11,72
	ctx.r4.s64 = ctx.r11.s64 + 72;
	// bl 0x833a1390
	ctx.lr = 0x832889D0;
	sub_833A1390(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
loc_832889D4:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x833a01fc
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832889DC"))) PPC_WEAK_FUNC(sub_832889DC);
PPC_FUNC_IMPL(__imp__sub_832889DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832889E0"))) PPC_WEAK_FUNC(sub_832889E0);
PPC_FUNC_IMPL(__imp__sub_832889E0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// bl 0x83285f38
	ctx.lr = 0x83288A00;
	sub_83285F38(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x83288a1c
	if (ctx.cr0.eq) goto loc_83288A1C;
	// lis r4,-254
	ctx.r4.s64 = -16646144;
	// li r3,0
	ctx.r3.s64 = 0;
	// ori r4,r4,515
	ctx.r4.u64 = ctx.r4.u64 | 515;
	// bl 0x83286018
	ctx.lr = 0x83288A18;
	sub_83286018(ctx, base);
	// b 0x83288a3c
	goto loc_83288A3C;
loc_83288A1C:
	// li r11,5
	ctx.r11.s64 = 5;
	// addi r10,r31,160
	ctx.r10.s64 = ctx.r31.s64 + 160;
	// addi r9,r30,-8
	ctx.r9.s64 = ctx.r30.s64 + -8;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
loc_83288A2C:
	// ldu r11,8(r10)
	ea = 8 + ctx.r10.u32;
	ctx.r11.u64 = PPC_LOAD_U64(ea);
	ctx.r10.u32 = ea;
	// stdu r11,8(r9)
	ea = 8 + ctx.r9.u32;
	PPC_STORE_U64(ea, ctx.r11.u64);
	ctx.r9.u32 = ea;
	// bdnz 0x83288a2c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_83288A2C;
	// li r3,0
	ctx.r3.s64 = 0;
loc_83288A3C:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83288A54"))) PPC_WEAK_FUNC(sub_83288A54);
PPC_FUNC_IMPL(__imp__sub_83288A54) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83288A58"))) PPC_WEAK_FUNC(sub_83288A58);
PPC_FUNC_IMPL(__imp__sub_83288A58) {
	PPC_FUNC_PROLOGUE();
	// lbz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 0);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x83288ac0
	if (!ctx.cr0.eq) goto loc_83288AC0;
	// lbz r11,1(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 1);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x83288ac0
	if (!ctx.cr0.eq) goto loc_83288AC0;
	// lbz r11,2(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 2);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// bne cr6,0x83288ac0
	if (!ctx.cr6.eq) goto loc_83288AC0;
	// lbz r11,3(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 3);
	// cmpwi cr6,r11,185
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 185, ctx.xer);
	// beq cr6,0x83288ab8
	if (ctx.cr6.eq) goto loc_83288AB8;
	// cmpwi cr6,r11,186
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 186, ctx.xer);
	// beq cr6,0x83288ab0
	if (ctx.cr6.eq) goto loc_83288AB0;
	// cmpwi cr6,r11,187
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 187, ctx.xer);
	// beq cr6,0x83288aa8
	if (ctx.cr6.eq) goto loc_83288AA8;
	// cmplwi cr6,r11,188
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 188, ctx.xer);
	// blt cr6,0x83288ac0
	if (ctx.cr6.lt) goto loc_83288AC0;
	// lis r3,4
	ctx.r3.s64 = 262144;
	// blr 
	return;
loc_83288AA8:
	// lis r3,2
	ctx.r3.s64 = 131072;
	// blr 
	return;
loc_83288AB0:
	// lis r3,1
	ctx.r3.s64 = 65536;
	// blr 
	return;
loc_83288AB8:
	// lis r3,8
	ctx.r3.s64 = 524288;
	// blr 
	return;
loc_83288AC0:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83288AC8"))) PPC_WEAK_FUNC(sub_83288AC8);
PPC_FUNC_IMPL(__imp__sub_83288AC8) {
	PPC_FUNC_PROLOGUE();
	// b 0x83285080
	sub_83285080(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83288ACC"))) PPC_WEAK_FUNC(sub_83288ACC);
PPC_FUNC_IMPL(__imp__sub_83288ACC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83288AD0"))) PPC_WEAK_FUNC(sub_83288AD0);
PPC_FUNC_IMPL(__imp__sub_83288AD0) {
	PPC_FUNC_PROLOGUE();
	// b 0x83285098
	sub_83285098(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83288AD4"))) PPC_WEAK_FUNC(sub_83288AD4);
PPC_FUNC_IMPL(__imp__sub_83288AD4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83288AD8"))) PPC_WEAK_FUNC(sub_83288AD8);
PPC_FUNC_IMPL(__imp__sub_83288AD8) {
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
	// stw r11,144(r3)
	PPC_STORE_U32(ctx.r3.u32 + 144, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83288AF4"))) PPC_WEAK_FUNC(sub_83288AF4);
PPC_FUNC_IMPL(__imp__sub_83288AF4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83288AF8"))) PPC_WEAK_FUNC(sub_83288AF8);
PPC_FUNC_IMPL(__imp__sub_83288AF8) {
	PPC_FUNC_PROLOGUE();
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// stw r11,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r11.u32);
	// stw r11,144(r3)
	PPC_STORE_U32(ctx.r3.u32 + 144, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83288B0C"))) PPC_WEAK_FUNC(sub_83288B0C);
PPC_FUNC_IMPL(__imp__sub_83288B0C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83288B10"))) PPC_WEAK_FUNC(sub_83288B10);
PPC_FUNC_IMPL(__imp__sub_83288B10) {
	PPC_FUNC_PROLOGUE();
	// lbz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 0);
	// lbz r10,1(r3)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r3.u32 + 1);
	// rotlwi r11,r11,8
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 8);
	// lbz r9,2(r3)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r3.u32 + 2);
	// lbz r8,3(r3)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r3.u32 + 3);
	// or r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 | ctx.r10.u64;
	// rlwinm r11,r11,8,0,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 8) & 0xFFFFFF00;
	// or r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 | ctx.r9.u64;
	// rlwinm r11,r11,8,0,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 8) & 0xFFFFFF00;
	// or r3,r11,r8
	ctx.r3.u64 = ctx.r11.u64 | ctx.r8.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83288B3C"))) PPC_WEAK_FUNC(sub_83288B3C);
PPC_FUNC_IMPL(__imp__sub_83288B3C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83288B40"))) PPC_WEAK_FUNC(sub_83288B40);
PPC_FUNC_IMPL(__imp__sub_83288B40) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
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
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// bl 0x832857b0
	ctx.lr = 0x83288B58;
	sub_832857B0(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// bne 0x83288b68
	if (!ctx.cr0.eq) goto loc_83288B68;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x83288b94
	goto loc_83288B94;
loc_83288B68:
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x832850b0
	ctx.lr = 0x83288B74;
	sub_832850B0(ctx, base);
	// subfic r11,r3,0
	ctx.xer.ca = ctx.r3.u32 <= 0;
	ctx.r11.s64 = 0 - ctx.r3.s64;
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// subfe r11,r11,r11
	temp.u8 = (~ctx.r11.u32 + ctx.r11.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r11.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 & ctx.r10.u64;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bl 0x83285818
	ctx.lr = 0x83288B90;
	sub_83285818(ctx, base);
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
loc_83288B94:
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

__attribute__((alias("__imp__sub_83288BA8"))) PPC_WEAK_FUNC(sub_83288BA8);
PPC_FUNC_IMPL(__imp__sub_83288BA8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x833a01ac
	ctx.lr = 0x83288BB0;
	__savegprlr_29(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// cmpw cr6,r4,r5
	ctx.cr6.compare<int32_t>(ctx.r4.s32, ctx.r5.s32, ctx.xer);
	// bgt cr6,0x83288bf8
	if (ctx.cr6.gt) goto loc_83288BF8;
loc_83288BC8:
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// clrlwi r4,r31,24
	ctx.r4.u64 = ctx.r31.u32 & 0xFF;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x83285230
	ctx.lr = 0x83288BD8;
	sub_83285230(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x83288bec
	if (ctx.cr0.eq) goto loc_83288BEC;
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x83288c04
	if (!ctx.cr6.eq) goto loc_83288C04;
loc_83288BEC:
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// cmpw cr6,r31,r30
	ctx.cr6.compare<int32_t>(ctx.r31.s32, ctx.r30.s32, ctx.xer);
	// ble cr6,0x83288bc8
	if (!ctx.cr6.gt) goto loc_83288BC8;
loc_83288BF8:
	// li r3,0
	ctx.r3.s64 = 0;
loc_83288BFC:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x833a01fc
	__restgprlr_29(ctx, base);
	return;
loc_83288C04:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// b 0x83288bfc
	goto loc_83288BFC;
}

__attribute__((alias("__imp__sub_83288C0C"))) PPC_WEAK_FUNC(sub_83288C0C);
PPC_FUNC_IMPL(__imp__sub_83288C0C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83288C10"))) PPC_WEAK_FUNC(sub_83288C10);
PPC_FUNC_IMPL(__imp__sub_83288C10) {
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
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x83288C2C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// li r3,-1
	ctx.r3.s64 = -1;
	// beq 0x83288c3c
	if (ctx.cr0.eq) goto loc_83288C3C;
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
loc_83288C3C:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83288C4C"))) PPC_WEAK_FUNC(sub_83288C4C);
PPC_FUNC_IMPL(__imp__sub_83288C4C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83288C50"))) PPC_WEAK_FUNC(sub_83288C50);
PPC_FUNC_IMPL(__imp__sub_83288C50) {
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
	// mr r11,r5
	ctx.r11.u64 = ctx.r5.u64;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// clrlwi r4,r4,24
	ctx.r4.u64 = ctx.r4.u32 & 0xFF;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x83288C70;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// li r3,-1
	ctx.r3.s64 = -1;
	// beq 0x83288c80
	if (ctx.cr0.eq) goto loc_83288C80;
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
loc_83288C80:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83288C90"))) PPC_WEAK_FUNC(sub_83288C90);
PPC_FUNC_IMPL(__imp__sub_83288C90) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,192(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 192);
	// stw r11,2388(r3)
	PPC_STORE_U32(ctx.r3.u32 + 2388, ctx.r11.u32);
	// lwz r11,196(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 196);
	// stw r11,2392(r3)
	PPC_STORE_U32(ctx.r3.u32 + 2392, ctx.r11.u32);
	// lwz r11,200(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 200);
	// stw r11,2396(r3)
	PPC_STORE_U32(ctx.r3.u32 + 2396, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83288CAC"))) PPC_WEAK_FUNC(sub_83288CAC);
PPC_FUNC_IMPL(__imp__sub_83288CAC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83288CB0"))) PPC_WEAK_FUNC(sub_83288CB0);
PPC_FUNC_IMPL(__imp__sub_83288CB0) {
	PPC_FUNC_PROLOGUE();
	// lwz r10,156(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 156);
	// addi r11,r3,156
	ctx.r11.s64 = ctx.r3.s64 + 156;
	// li r3,-1
	ctx.r3.s64 = -1;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lwz r10,112(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 112);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lwz r3,116(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 116);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83288CD8"))) PPC_WEAK_FUNC(sub_83288CD8);
PPC_FUNC_IMPL(__imp__sub_83288CD8) {
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
	// bl 0x83288b10
	ctx.lr = 0x83288CE8;
	sub_83288B10(ctx, base);
	// addi r11,r3,-447
	ctx.r11.s64 = ctx.r3.s64 + -447;
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

__attribute__((alias("__imp__sub_83288D04"))) PPC_WEAK_FUNC(sub_83288D04);
PPC_FUNC_IMPL(__imp__sub_83288D04) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83288D08"))) PPC_WEAK_FUNC(sub_83288D08);
PPC_FUNC_IMPL(__imp__sub_83288D08) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31960
	ctx.r11.s64 = -2094530560;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// addi r4,r11,21160
	ctx.r4.s64 = ctx.r11.s64 + 21160;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// bl 0x83288c10
	ctx.lr = 0x83288D30;
	sub_83288C10(ctx, base);
	// stw r3,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r3.u32);
	// lis r11,-31960
	ctx.r11.s64 = -2094530560;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r4,r11,21200
	ctx.r4.s64 = ctx.r11.s64 + 21200;
	// bl 0x83288c10
	ctx.lr = 0x83288D44;
	sub_83288C10(ctx, base);
	// stw r3,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r3.u32);
	// lis r11,-31960
	ctx.r11.s64 = -2094530560;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r4,r11,21240
	ctx.r4.s64 = ctx.r11.s64 + 21240;
	// bl 0x83288c10
	ctx.lr = 0x83288D58;
	sub_83288C10(ctx, base);
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// stw r3,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r3.u32);
	// bne cr6,0x83288d6c
	if (!ctx.cr6.eq) goto loc_83288D6C;
	// li r11,2
	ctx.r11.s64 = 2;
	// stw r11,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r11.u32);
loc_83288D6C:
	// lis r11,-31960
	ctx.r11.s64 = -2094530560;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r4,r11,21280
	ctx.r4.s64 = ctx.r11.s64 + 21280;
	// bl 0x83288c10
	ctx.lr = 0x83288D7C;
	sub_83288C10(ctx, base);
	// stw r3,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r3.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83288D98"))) PPC_WEAK_FUNC(sub_83288D98);
PPC_FUNC_IMPL(__imp__sub_83288D98) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31960
	ctx.r11.s64 = -2094530560;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// addi r4,r11,21320
	ctx.r4.s64 = ctx.r11.s64 + 21320;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x83288c10
	ctx.lr = 0x83288DC0;
	sub_83288C10(ctx, base);
	// stw r3,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r3.u32);
	// lis r11,-31960
	ctx.r11.s64 = -2094530560;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,21360
	ctx.r4.s64 = ctx.r11.s64 + 21360;
	// bl 0x83288c10
	ctx.lr = 0x83288DD4;
	sub_83288C10(ctx, base);
	// stw r3,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r3.u32);
	// lis r11,-31960
	ctx.r11.s64 = -2094530560;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,21400
	ctx.r4.s64 = ctx.r11.s64 + 21400;
	// bl 0x83288c10
	ctx.lr = 0x83288DE8;
	sub_83288C10(ctx, base);
	// stw r3,8(r30)
	PPC_STORE_U32(ctx.r30.u32 + 8, ctx.r3.u32);
	// lis r11,-31960
	ctx.r11.s64 = -2094530560;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,21440
	ctx.r4.s64 = ctx.r11.s64 + 21440;
	// bl 0x83288c10
	ctx.lr = 0x83288DFC;
	sub_83288C10(ctx, base);
	// stw r3,12(r30)
	PPC_STORE_U32(ctx.r30.u32 + 12, ctx.r3.u32);
	// lis r11,-31960
	ctx.r11.s64 = -2094530560;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,21520
	ctx.r4.s64 = ctx.r11.s64 + 21520;
	// bl 0x83288c10
	ctx.lr = 0x83288E10;
	sub_83288C10(ctx, base);
	// stw r3,16(r30)
	PPC_STORE_U32(ctx.r30.u32 + 16, ctx.r3.u32);
	// lis r11,-31960
	ctx.r11.s64 = -2094530560;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,21560
	ctx.r4.s64 = ctx.r11.s64 + 21560;
	// bl 0x83288c10
	ctx.lr = 0x83288E24;
	sub_83288C10(ctx, base);
	// stw r3,20(r30)
	PPC_STORE_U32(ctx.r30.u32 + 20, ctx.r3.u32);
	// lis r11,-31960
	ctx.r11.s64 = -2094530560;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,21600
	ctx.r4.s64 = ctx.r11.s64 + 21600;
	// bl 0x83288c10
	ctx.lr = 0x83288E38;
	sub_83288C10(ctx, base);
	// stw r3,24(r30)
	PPC_STORE_U32(ctx.r30.u32 + 24, ctx.r3.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83288E54"))) PPC_WEAK_FUNC(sub_83288E54);
PPC_FUNC_IMPL(__imp__sub_83288E54) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83288E58"))) PPC_WEAK_FUNC(sub_83288E58);
PPC_FUNC_IMPL(__imp__sub_83288E58) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x833a01ac
	ctx.lr = 0x83288E60;
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
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// beq cr6,0x83288ed0
	if (ctx.cr6.eq) goto loc_83288ED0;
	// lis r11,-31960
	ctx.r11.s64 = -2094530560;
	// addi r5,r11,21712
	ctx.r5.s64 = ctx.r11.s64 + 21712;
	// bl 0x83288c50
	ctx.lr = 0x83288E84;
	sub_83288C50(ctx, base);
	// stw r3,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r3.u32);
	// lis r11,-31960
	ctx.r11.s64 = -2094530560;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r5,r11,21752
	ctx.r5.s64 = ctx.r11.s64 + 21752;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x83288c50
	ctx.lr = 0x83288E9C;
	sub_83288C50(ctx, base);
	// stw r3,4(r29)
	PPC_STORE_U32(ctx.r29.u32 + 4, ctx.r3.u32);
	// lis r11,-31960
	ctx.r11.s64 = -2094530560;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r5,r11,21792
	ctx.r5.s64 = ctx.r11.s64 + 21792;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x83288c50
	ctx.lr = 0x83288EB4;
	sub_83288C50(ctx, base);
	// stw r3,8(r29)
	PPC_STORE_U32(ctx.r29.u32 + 8, ctx.r3.u32);
	// lis r11,-31960
	ctx.r11.s64 = -2094530560;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r5,r11,21832
	ctx.r5.s64 = ctx.r11.s64 + 21832;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x83288c50
	ctx.lr = 0x83288ECC;
	sub_83288C50(ctx, base);
	// stw r3,12(r29)
	PPC_STORE_U32(ctx.r29.u32 + 12, ctx.r3.u32);
loc_83288ED0:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x833a01fc
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83288ED8"))) PPC_WEAK_FUNC(sub_83288ED8);
PPC_FUNC_IMPL(__imp__sub_83288ED8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x833a01a0
	ctx.lr = 0x83288EE0;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31960
	ctx.r11.s64 = -2094530560;
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// addi r5,r11,21872
	ctx.r5.s64 = ctx.r11.s64 + 21872;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// bl 0x83288c50
	ctx.lr = 0x83288EFC;
	sub_83288C50(ctx, base);
	// stw r3,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r3.u32);
	// lis r11,-31960
	ctx.r11.s64 = -2094530560;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r5,r11,21912
	ctx.r5.s64 = ctx.r11.s64 + 21912;
	// bl 0x83288c50
	ctx.lr = 0x83288F14;
	sub_83288C50(ctx, base);
	// stw r3,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r3.u32);
	// addi r28,r31,12
	ctx.r28.s64 = ctx.r31.s64 + 12;
	// addi r27,r31,8
	ctx.r27.s64 = ctx.r31.s64 + 8;
	// clrlwi r26,r29,24
	ctx.r26.u64 = ctx.r29.u32 & 0xFF;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x832855c0
	ctx.lr = 0x83288F38;
	sub_832855C0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x83288f4c
	if (!ctx.cr0.eq) goto loc_83288F4C;
	// li r11,-1
	ctx.r11.s64 = -1;
	// stw r11,0(r27)
	PPC_STORE_U32(ctx.r27.u32 + 0, ctx.r11.u32);
	// stw r11,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r11.u32);
loc_83288F4C:
	// lis r11,-31960
	ctx.r11.s64 = -2094530560;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r5,r11,21992
	ctx.r5.s64 = ctx.r11.s64 + 21992;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x83288c50
	ctx.lr = 0x83288F60;
	sub_83288C50(ctx, base);
	// stw r3,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r3.u32);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x83285258
	ctx.lr = 0x83288F74;
	sub_83285258(ctx, base);
	// subfic r11,r3,0
	ctx.xer.ca = ctx.r3.u32 <= 0;
	ctx.r11.s64 = 0 - ctx.r3.s64;
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// subfe r11,r11,r11
	temp.u8 = (~ctx.r11.u32 + ctx.r11.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r11.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 & ctx.r10.u64;
	// addic r10,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// subfe r11,r10,r11
	temp.u8 = (~ctx.r10.u32 + ctx.r11.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r10.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// stw r11,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r11.u32);
	// beq cr6,0x83289044
	if (ctx.cr6.eq) goto loc_83289044;
	// lis r11,-31960
	ctx.r11.s64 = -2094530560;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r5,r11,22032
	ctx.r5.s64 = ctx.r11.s64 + 22032;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x83288c50
	ctx.lr = 0x83288FB0;
	sub_83288C50(ctx, base);
	// stw r3,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r3.u32);
	// lis r11,-31960
	ctx.r11.s64 = -2094530560;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r5,r11,22072
	ctx.r5.s64 = ctx.r11.s64 + 22072;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x83288c50
	ctx.lr = 0x83288FC8;
	sub_83288C50(ctx, base);
	// stw r3,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r3.u32);
	// lis r11,-31960
	ctx.r11.s64 = -2094530560;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r5,r11,22112
	ctx.r5.s64 = ctx.r11.s64 + 22112;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x83288c50
	ctx.lr = 0x83288FE0;
	sub_83288C50(ctx, base);
	// stw r3,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r3.u32);
	// lis r11,-31960
	ctx.r11.s64 = -2094530560;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r5,r11,22152
	ctx.r5.s64 = ctx.r11.s64 + 22152;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x83288c50
	ctx.lr = 0x83288FF8;
	sub_83288C50(ctx, base);
	// stw r3,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r3.u32);
	// lis r11,-31960
	ctx.r11.s64 = -2094530560;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r5,r11,22192
	ctx.r5.s64 = ctx.r11.s64 + 22192;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x83288c50
	ctx.lr = 0x83289010;
	sub_83288C50(ctx, base);
	// stw r3,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r3.u32);
	// lis r11,-31960
	ctx.r11.s64 = -2094530560;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r5,r11,22232
	ctx.r5.s64 = ctx.r11.s64 + 22232;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x83288c50
	ctx.lr = 0x83289028;
	sub_83288C50(ctx, base);
	// stw r3,44(r31)
	PPC_STORE_U32(ctx.r31.u32 + 44, ctx.r3.u32);
	// lis r11,-31960
	ctx.r11.s64 = -2094530560;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r5,r11,22272
	ctx.r5.s64 = ctx.r11.s64 + 22272;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x83288c50
	ctx.lr = 0x83289040;
	sub_83288C50(ctx, base);
	// stw r3,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r3.u32);
loc_83289044:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x833a01f0
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8328904C"))) PPC_WEAK_FUNC(sub_8328904C);
PPC_FUNC_IMPL(__imp__sub_8328904C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83289050"))) PPC_WEAK_FUNC(sub_83289050);
PPC_FUNC_IMPL(__imp__sub_83289050) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x833a01ac
	ctx.lr = 0x83289058;
	__savegprlr_29(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// bl 0x832850b0
	ctx.lr = 0x8328906C;
	sub_832850B0(ctx, base);
	// subfic r11,r3,0
	ctx.xer.ca = ctx.r3.u32 <= 0;
	ctx.r11.s64 = 0 - ctx.r3.s64;
	// lwz r10,84(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// subfe r11,r11,r11
	temp.u8 = (~ctx.r11.u32 + ctx.r11.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r11.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 & ctx.r10.u64;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x83289190
	if (ctx.cr6.eq) goto loc_83289190;
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// addi r4,r1,92
	ctx.r4.s64 = ctx.r1.s64 + 92;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x83285280
	ctx.lr = 0x83289098;
	sub_83285280(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x832890b4
	if (!ctx.cr0.eq) goto loc_832890B4;
	// li r10,0
	ctx.r10.s64 = 0;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r10,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r10.u32);
	// stw r11,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r11.u32);
	// b 0x832890bc
	goto loc_832890BC;
loc_832890B4:
	// lwz r11,88(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// lwz r10,92(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
loc_832890BC:
	// stw r10,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r10.u32);
	// mulli r10,r10,100
	ctx.r10.s64 = ctx.r10.s64 * 100;
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// add r29,r10,r11
	ctx.r29.u64 = ctx.r10.u64 + ctx.r11.u64;
	// bl 0x832853e8
	ctx.lr = 0x832890D8;
	sub_832853E8(ctx, base);
	// subfic r11,r3,0
	ctx.xer.ca = ctx.r3.u32 <= 0;
	ctx.r11.s64 = 0 - ctx.r3.s64;
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmpwi cr6,r29,110
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 110, ctx.xer);
	// subfe r11,r11,r11
	temp.u8 = (~ctx.r11.u32 + ctx.r11.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r11.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 & ctx.r10.u64;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bge cr6,0x832890fc
	if (!ctx.cr6.lt) goto loc_832890FC;
	// neg r11,r11
	ctx.r11.s64 = -ctx.r11.s64;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
loc_832890FC:
	// stw r11,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r11.u32);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x83288d08
	ctx.lr = 0x8328910C;
	sub_83288D08(ctx, base);
	// addi r4,r31,32
	ctx.r4.s64 = ctx.r31.s64 + 32;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x83288d98
	ctx.lr = 0x83289118;
	sub_83288D98(ctx, base);
	// li r5,189
	ctx.r5.s64 = 189;
	// li r4,189
	ctx.r4.s64 = 189;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x83288ba8
	ctx.lr = 0x83289128;
	sub_83288BA8(ctx, base);
	// stw r3,60(r31)
	PPC_STORE_U32(ctx.r31.u32 + 60, ctx.r3.u32);
	// li r5,191
	ctx.r5.s64 = 191;
	// li r4,191
	ctx.r4.s64 = 191;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x83288ba8
	ctx.lr = 0x8328913C;
	sub_83288BA8(ctx, base);
	// stw r3,64(r31)
	PPC_STORE_U32(ctx.r31.u32 + 64, ctx.r3.u32);
	// li r5,223
	ctx.r5.s64 = 223;
	// li r4,192
	ctx.r4.s64 = 192;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x83288ba8
	ctx.lr = 0x83289150;
	sub_83288BA8(ctx, base);
	// stw r3,68(r31)
	PPC_STORE_U32(ctx.r31.u32 + 68, ctx.r3.u32);
	// li r5,239
	ctx.r5.s64 = 239;
	// li r4,224
	ctx.r4.s64 = 224;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x83288ba8
	ctx.lr = 0x83289164;
	sub_83288BA8(ctx, base);
	// stw r3,72(r31)
	PPC_STORE_U32(ctx.r31.u32 + 72, ctx.r3.u32);
	// addi r5,r31,76
	ctx.r5.s64 = ctx.r31.s64 + 76;
	// lwz r4,68(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 68);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x83288e58
	ctx.lr = 0x83289178;
	sub_83288E58(ctx, base);
	// addi r5,r31,92
	ctx.r5.s64 = ctx.r31.s64 + 92;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r4,72(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 72);
	// bl 0x83288ed8
	ctx.lr = 0x83289188;
	sub_83288ED8(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
loc_83289190:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x833a01fc
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83289198"))) PPC_WEAK_FUNC(sub_83289198);
PPC_FUNC_IMPL(__imp__sub_83289198) {
	PPC_FUNC_PROLOGUE();
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
	// lwz r4,144(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 144);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r3,r3,148
	ctx.r3.s64 = ctx.r3.s64 + 148;
	// bl 0x832857b0
	ctx.lr = 0x832891C0;
	sub_832857B0(ctx, base);
	// mr. r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// bne 0x832891dc
	if (!ctx.cr0.eq) goto loc_832891DC;
	// lis r4,-256
	ctx.r4.s64 = -16777216;
	// li r3,0
	ctx.r3.s64 = 0;
	// ori r4,r4,562
	ctx.r4.u64 = ctx.r4.u64 | 562;
	// bl 0x83282390
	ctx.lr = 0x832891D8;
	sub_83282390(ctx, base);
	// b 0x832891f0
	goto loc_832891F0;
loc_832891DC:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x83289050
	ctx.lr = 0x832891E8;
	sub_83289050(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x83285818
	ctx.lr = 0x832891F0;
	sub_83285818(ctx, base);
loc_832891F0:
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

__attribute__((alias("__imp__sub_83289208"))) PPC_WEAK_FUNC(sub_83289208);
PPC_FUNC_IMPL(__imp__sub_83289208) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x833a01a8
	ctx.lr = 0x83289210;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,3404(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 3404);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x83289238
	if (ctx.cr6.eq) goto loc_83289238;
	// lwz r3,3408(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 3408);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x83289238;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_83289238:
	// lwz r11,156(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 156);
	// addi r30,r31,156
	ctx.r30.s64 = ctx.r31.s64 + 156;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x83289250
	if (ctx.cr6.eq) goto loc_83289250;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x83289284
	goto loc_83289284;
loc_83289250:
	// cmpwi cr6,r29,2048
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 2048, ctx.xer);
	// blt cr6,0x8328925c
	if (ctx.cr6.lt) goto loc_8328925C;
	// li r29,2048
	ctx.r29.s64 = 2048;
loc_8328925C:
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// addi r3,r30,148
	ctx.r3.s64 = ctx.r30.s64 + 148;
	// bl 0x832884b0
	ctx.lr = 0x8328926C;
	sub_832884B0(ctx, base);
	// stw r29,144(r30)
	PPC_STORE_U32(ctx.r30.u32 + 144, ctx.r29.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x83289198
	ctx.lr = 0x83289278;
	sub_83289198(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83288c90
	ctx.lr = 0x83289280;
	sub_83288C90(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
loc_83289284:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x833a01f8
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8328928C"))) PPC_WEAK_FUNC(sub_8328928C);
PPC_FUNC_IMPL(__imp__sub_8328928C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83289290"))) PPC_WEAK_FUNC(sub_83289290);
PPC_FUNC_IMPL(__imp__sub_83289290) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x833a01a8
	ctx.lr = 0x83289298;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r29,r7
	ctx.r29.u64 = ctx.r7.u64;
	// stw r11,0(r7)
	PPC_STORE_U32(ctx.r7.u32 + 0, ctx.r11.u32);
	// cmpwi cr6,r4,2
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 2, ctx.xer);
	// beq cr6,0x832892bc
	if (ctx.cr6.eq) goto loc_832892BC;
loc_832892B4:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x83289320
	goto loc_83289320;
loc_832892BC:
	// addi r7,r5,-6
	ctx.r7.s64 = ctx.r5.s64 + -6;
	// addi r6,r6,6
	ctx.r6.s64 = ctx.r6.s64 + 6;
	// mr r3,r7
	ctx.r3.u64 = ctx.r7.u64;
	// bl 0x83288cd8
	ctx.lr = 0x832892CC;
	sub_83288CD8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x832892ec
	if (!ctx.cr0.eq) goto loc_832892EC;
	// addi r7,r7,-2
	ctx.r7.s64 = ctx.r7.s64 + -2;
	// addi r6,r6,2
	ctx.r6.s64 = ctx.r6.s64 + 2;
	// mr r3,r7
	ctx.r3.u64 = ctx.r7.u64;
	// bl 0x83288cd8
	ctx.lr = 0x832892E4;
	sub_83288CD8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x832892b4
	if (ctx.cr0.eq) goto loc_832892B4;
loc_832892EC:
	// addi r31,r7,-12
	ctx.r31.s64 = ctx.r7.s64 + -12;
	// addi r30,r6,12
	ctx.r30.s64 = ctx.r6.s64 + 12;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x83288b40
	ctx.lr = 0x83289300;
	sub_83288B40(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x832892b4
	if (ctx.cr0.eq) goto loc_832892B4;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x83289208
	ctx.lr = 0x83289318;
	sub_83289208(ctx, base);
	// stw r3,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r3.u32);
	// li r3,1
	ctx.r3.s64 = 1;
loc_83289320:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x833a01f8
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83289328"))) PPC_WEAK_FUNC(sub_83289328);
PPC_FUNC_IMPL(__imp__sub_83289328) {
	PPC_FUNC_PROLOGUE();
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// bne cr6,0x8328934c
	if (!ctx.cr6.eq) goto loc_8328934C;
	// xor. r11,r3,r4
	ctx.r11.u64 = ctx.r3.u64 ^ ctx.r4.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt 0x83289344
	if (ctx.cr0.lt) goto loc_83289344;
	// lis r3,32767
	ctx.r3.s64 = 2147418112;
	// ori r3,r3,65535
	ctx.r3.u64 = ctx.r3.u64 | 65535;
	// blr 
	return;
loc_83289344:
	// lis r3,-32768
	ctx.r3.s64 = -2147483648;
	// blr 
	return;
loc_8328934C:
	// extsw r11,r3
	ctx.r11.s64 = ctx.r3.s32;
	// extsw r10,r4
	ctx.r10.s64 = ctx.r4.s32;
	// extsw r9,r5
	ctx.r9.s64 = ctx.r5.s32;
	// mulld r11,r11,r10
	ctx.r11.s64 = ctx.r11.s64 * ctx.r10.s64;
	// divd r11,r11,r9
	ctx.r11.s64 = ctx.r11.s64 / ctx.r9.s64;
	// extsw r3,r11
	ctx.r3.s64 = ctx.r11.s32;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83289368"))) PPC_WEAK_FUNC(sub_83289368);
PPC_FUNC_IMPL(__imp__sub_83289368) {
	PPC_FUNC_PROLOGUE();
	// extsw r10,r5
	ctx.r10.s64 = ctx.r5.s32;
	// extsw r11,r4
	ctx.r11.s64 = ctx.r4.s32;
	// extsw r9,r3
	ctx.r9.s64 = ctx.r3.s32;
	// extsw r8,r6
	ctx.r8.s64 = ctx.r6.s32;
	// mulld r11,r11,r10
	ctx.r11.s64 = ctx.r11.s64 * ctx.r10.s64;
	// mulld r10,r9,r8
	ctx.r10.s64 = ctx.r9.s64 * ctx.r8.s64;
	// cmpd cr6,r10,r11
	ctx.cr6.compare<int64_t>(ctx.r10.s64, ctx.r11.s64, ctx.xer);
	// li r3,1
	ctx.r3.s64 = 1;
	// blelr cr6
	if (!ctx.cr6.gt) return;
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83289394"))) PPC_WEAK_FUNC(sub_83289394);
PPC_FUNC_IMPL(__imp__sub_83289394) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83289398"))) PPC_WEAK_FUNC(sub_83289398);
PPC_FUNC_IMPL(__imp__sub_83289398) {
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
	// bl 0x82d6da88
	ctx.lr = 0x832893A8;
	sub_82D6DA88(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x832893c0
	if (ctx.cr0.eq) goto loc_832893C0;
	// lis r4,-253
	ctx.r4.s64 = -16580608;
	// ori r4,r4,65283
	ctx.r4.u64 = ctx.r4.u64 | 65283;
loc_832893B8:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x83289400
	goto loc_83289400;
loc_832893C0:
	// lis r11,-32219
	ctx.r11.s64 = -2111504384;
	// li r5,128
	ctx.r5.s64 = 128;
	// addi r3,r11,21384
	ctx.r3.s64 = ctx.r11.s64 + 21384;
	// li r4,5420
	ctx.r4.s64 = 5420;
	// bl 0x832911f0
	ctx.lr = 0x832893D4;
	sub_832911F0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x832893e8
	if (ctx.cr0.eq) goto loc_832893E8;
	// lis r4,-253
	ctx.r4.s64 = -16580608;
	// ori r4,r4,65287
	ctx.r4.u64 = ctx.r4.u64 | 65287;
	// b 0x832893b8
	goto loc_832893B8;
loc_832893E8:
	// bl 0x8328b540
	ctx.lr = 0x832893EC;
	sub_8328B540(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// li r3,0
	ctx.r3.s64 = 0;
	// beq 0x83289404
	if (ctx.cr0.eq) goto loc_83289404;
	// lis r4,-253
	ctx.r4.s64 = -16580608;
	// ori r4,r4,65289
	ctx.r4.u64 = ctx.r4.u64 | 65289;
loc_83289400:
	// bl 0x8328c178
	ctx.lr = 0x83289404;
	sub_8328C178(ctx, base);
loc_83289404:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83289414"))) PPC_WEAK_FUNC(sub_83289414);
PPC_FUNC_IMPL(__imp__sub_83289414) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83289418"))) PPC_WEAK_FUNC(sub_83289418);
PPC_FUNC_IMPL(__imp__sub_83289418) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lis r10,-31827
	ctx.r10.s64 = -2085814272;
	// li r11,384
	ctx.r11.s64 = 384;
	// addi r8,r10,15400
	ctx.r8.s64 = ctx.r10.s64 + 15400;
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r10,r8,-1
	ctx.r10.s64 = ctx.r8.s64 + -1;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
loc_83289430:
	// stbu r9,1(r10)
	ea = 1 + ctx.r10.u32;
	PPC_STORE_U8(ea, ctx.r9.u8);
	ctx.r10.u32 = ea;
	// bdnz 0x83289430
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_83289430;
	// li r9,256
	ctx.r9.s64 = 256;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r11,r8,384
	ctx.r11.s64 = ctx.r8.s64 + 384;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_83289448:
	// clrlwi r9,r10,24
	ctx.r9.u64 = ctx.r10.u32 & 0xFF;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stb r9,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r9.u8);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// bdnz 0x83289448
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_83289448;
	// li r10,384
	ctx.r10.s64 = 384;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// li r9,255
	ctx.r9.s64 = 255;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_8328946C:
	// stbu r9,1(r11)
	ea = 1 + ctx.r11.u32;
	PPC_STORE_U8(ea, ctx.r9.u8);
	ctx.r11.u32 = ea;
	// bdnz 0x8328946c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8328946C;
	// lis r10,-31822
	ctx.r10.s64 = -2085486592;
	// addi r11,r8,384
	ctx.r11.s64 = ctx.r8.s64 + 384;
	// stw r11,-568(r10)
	PPC_STORE_U32(ctx.r10.u32 + -568, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83289484"))) PPC_WEAK_FUNC(sub_83289484);
PPC_FUNC_IMPL(__imp__sub_83289484) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83289488"))) PPC_WEAK_FUNC(sub_83289488);
PPC_FUNC_IMPL(__imp__sub_83289488) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lis r11,-31827
	ctx.r11.s64 = -2085814272;
	// addi r11,r11,16424
	ctx.r11.s64 = ctx.r11.s64 + 16424;
	// lwz r10,84(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 84);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// blelr cr6
	if (!ctx.cr6.gt) return;
	// lwz r11,88(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 88);
	// addi r9,r10,-1
	ctx.r9.s64 = ctx.r10.s64 + -1;
	// li r8,6
	ctx.r8.s64 = 6;
	// addi r10,r11,-28280
	ctx.r10.s64 = ctx.r11.s64 + -28280;
	// divwu r11,r9,r8
	ctx.r11.u32 = ctx.r9.u32 / ctx.r8.u32;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
loc_832894B8:
	// lis r11,0
	ctx.r11.s64 = 0;
	// li r9,1
	ctx.r9.s64 = 1;
	// ori r11,r11,33024
	ctx.r11.u64 = ctx.r11.u64 | 33024;
	// stwux r9,r10,r11
	ea = ctx.r10.u32 + ctx.r11.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r10.u32 = ea;
	// bdnz 0x832894b8
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_832894B8;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_832894D0"))) PPC_WEAK_FUNC(sub_832894D0);
PPC_FUNC_IMPL(__imp__sub_832894D0) {
	PPC_FUNC_PROLOGUE();
	// lwz r10,4416(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4416);
	// addi r11,r3,2816
	ctx.r11.s64 = ctx.r3.s64 + 2816;
	// addi r9,r3,256
	ctx.r9.s64 = ctx.r3.s64 + 256;
	// stw r3,4628(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4628, ctx.r3.u32);
	// addi r8,r11,384
	ctx.r8.s64 = ctx.r11.s64 + 384;
	// stw r11,4632(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4632, ctx.r11.u32);
	// addi r11,r3,384
	ctx.r11.s64 = ctx.r3.s64 + 384;
	// stw r8,4636(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4636, ctx.r8.u32);
	// addi r7,r3,512
	ctx.r7.s64 = ctx.r3.s64 + 512;
	// stw r10,4624(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4624, ctx.r10.u32);
	// addi r8,r3,640
	ctx.r8.s64 = ctx.r3.s64 + 640;
	// addi r10,r3,128
	ctx.r10.s64 = ctx.r3.s64 + 128;
	// stw r9,5256(r3)
	PPC_STORE_U32(ctx.r3.u32 + 5256, ctx.r9.u32);
	// stw r11,5260(r3)
	PPC_STORE_U32(ctx.r3.u32 + 5260, ctx.r11.u32);
	// stw r7,5264(r3)
	PPC_STORE_U32(ctx.r3.u32 + 5264, ctx.r7.u32);
	// stw r8,5268(r3)
	PPC_STORE_U32(ctx.r3.u32 + 5268, ctx.r8.u32);
	// stw r3,5272(r3)
	PPC_STORE_U32(ctx.r3.u32 + 5272, ctx.r3.u32);
	// stw r10,5276(r3)
	PPC_STORE_U32(ctx.r3.u32 + 5276, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8328951C"))) PPC_WEAK_FUNC(sub_8328951C);
PPC_FUNC_IMPL(__imp__sub_8328951C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83289520"))) PPC_WEAK_FUNC(sub_83289520);
PPC_FUNC_IMPL(__imp__sub_83289520) {
	PPC_FUNC_PROLOGUE();
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,-1
	ctx.r10.s64 = -1;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// li r8,1
	ctx.r8.s64 = 1;
	// li r9,255
	ctx.r9.s64 = 255;
	// li r7,3
	ctx.r7.s64 = 3;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
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
	// stw r11,28(r3)
	PPC_STORE_U32(ctx.r3.u32 + 28, ctx.r11.u32);
	// stw r11,32(r3)
	PPC_STORE_U32(ctx.r3.u32 + 32, ctx.r11.u32);
	// stw r11,36(r3)
	PPC_STORE_U32(ctx.r3.u32 + 36, ctx.r11.u32);
	// stw r11,40(r3)
	PPC_STORE_U32(ctx.r3.u32 + 40, ctx.r11.u32);
	// stw r11,44(r3)
	PPC_STORE_U32(ctx.r3.u32 + 44, ctx.r11.u32);
	// stw r11,48(r3)
	PPC_STORE_U32(ctx.r3.u32 + 48, ctx.r11.u32);
	// stw r11,52(r3)
	PPC_STORE_U32(ctx.r3.u32 + 52, ctx.r11.u32);
	// stw r7,56(r3)
	PPC_STORE_U32(ctx.r3.u32 + 56, ctx.r7.u32);
	// stw r8,60(r3)
	PPC_STORE_U32(ctx.r3.u32 + 60, ctx.r8.u32);
	// stw r8,64(r3)
	PPC_STORE_U32(ctx.r3.u32 + 64, ctx.r8.u32);
	// stw r8,68(r3)
	PPC_STORE_U32(ctx.r3.u32 + 68, ctx.r8.u32);
	// stw r11,72(r3)
	PPC_STORE_U32(ctx.r3.u32 + 72, ctx.r11.u32);
	// stw r11,76(r3)
	PPC_STORE_U32(ctx.r3.u32 + 76, ctx.r11.u32);
	// sth r10,80(r3)
	PPC_STORE_U16(ctx.r3.u32 + 80, ctx.r10.u16);
	// sth r10,82(r3)
	PPC_STORE_U16(ctx.r3.u32 + 82, ctx.r10.u16);
	// stb r11,84(r3)
	PPC_STORE_U8(ctx.r3.u32 + 84, ctx.r11.u8);
	// stb r10,85(r3)
	PPC_STORE_U8(ctx.r3.u32 + 85, ctx.r10.u8);
	// stb r10,86(r3)
	PPC_STORE_U8(ctx.r3.u32 + 86, ctx.r10.u8);
	// stb r10,87(r3)
	PPC_STORE_U8(ctx.r3.u32 + 87, ctx.r10.u8);
	// stb r11,88(r3)
	PPC_STORE_U8(ctx.r3.u32 + 88, ctx.r11.u8);
	// stb r8,89(r3)
	PPC_STORE_U8(ctx.r3.u32 + 89, ctx.r8.u8);
	// stb r11,90(r3)
	PPC_STORE_U8(ctx.r3.u32 + 90, ctx.r11.u8);
	// stb r11,91(r3)
	PPC_STORE_U8(ctx.r3.u32 + 91, ctx.r11.u8);
	// stb r11,92(r3)
	PPC_STORE_U8(ctx.r3.u32 + 92, ctx.r11.u8);
	// stb r9,93(r3)
	PPC_STORE_U8(ctx.r3.u32 + 93, ctx.r9.u8);
	// stb r10,94(r3)
	PPC_STORE_U8(ctx.r3.u32 + 94, ctx.r10.u8);
	// stb r10,95(r3)
	PPC_STORE_U8(ctx.r3.u32 + 95, ctx.r10.u8);
	// stb r10,96(r3)
	PPC_STORE_U8(ctx.r3.u32 + 96, ctx.r10.u8);
	// stb r11,97(r3)
	PPC_STORE_U8(ctx.r3.u32 + 97, ctx.r11.u8);
	// stb r9,98(r3)
	PPC_STORE_U8(ctx.r3.u32 + 98, ctx.r9.u8);
	// stb r9,99(r3)
	PPC_STORE_U8(ctx.r3.u32 + 99, ctx.r9.u8);
	// stb r9,100(r3)
	PPC_STORE_U8(ctx.r3.u32 + 100, ctx.r9.u8);
	// stw r11,104(r3)
	PPC_STORE_U32(ctx.r3.u32 + 104, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_832895DC"))) PPC_WEAK_FUNC(sub_832895DC);
PPC_FUNC_IMPL(__imp__sub_832895DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832895E0"))) PPC_WEAK_FUNC(sub_832895E0);
PPC_FUNC_IMPL(__imp__sub_832895E0) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31827
	ctx.r10.s64 = -2085814272;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r10,r10,16424
	ctx.r10.s64 = ctx.r10.s64 + 16424;
	// lwz r3,88(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + 88);
	// lwz r10,84(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 84);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// ble cr6,0x8328961c
	if (!ctx.cr6.gt) goto loc_8328961C;
loc_832895FC:
	// lwz r9,4744(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4744);
	// cmpwi cr6,r9,1
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 1, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// addi r11,r11,6
	ctx.r11.s64 = ctx.r11.s64 + 6;
	// addis r3,r3,1
	ctx.r3.s64 = ctx.r3.s64 + 65536;
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// addi r3,r3,-32512
	ctx.r3.s64 = ctx.r3.s64 + -32512;
	// blt cr6,0x832895fc
	if (ctx.cr6.lt) goto loc_832895FC;
loc_8328961C:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83289624"))) PPC_WEAK_FUNC(sub_83289624);
PPC_FUNC_IMPL(__imp__sub_83289624) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83289628"))) PPC_WEAK_FUNC(sub_83289628);
PPC_FUNC_IMPL(__imp__sub_83289628) {
	PPC_FUNC_PROLOGUE();
	// addi r11,r3,2816
	ctx.r11.s64 = ctx.r3.s64 + 2816;
	// addi r10,r3,768
	ctx.r10.s64 = ctx.r3.s64 + 768;
	// addi r9,r3,5256
	ctx.r9.s64 = ctx.r3.s64 + 5256;
	// stw r11,4544(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4544, ctx.r11.u32);
	// stw r10,4516(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4516, ctx.r10.u32);
	// stw r9,4520(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4520, ctx.r9.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83289644"))) PPC_WEAK_FUNC(sub_83289644);
PPC_FUNC_IMPL(__imp__sub_83289644) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83289648"))) PPC_WEAK_FUNC(sub_83289648);
PPC_FUNC_IMPL(__imp__sub_83289648) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,4496(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4496);
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
	// lwz r11,4500(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4500);
	// stw r11,0(r5)
	PPC_STORE_U32(ctx.r5.u32 + 0, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8328965C"))) PPC_WEAK_FUNC(sub_8328965C);
PPC_FUNC_IMPL(__imp__sub_8328965C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83289660"))) PPC_WEAK_FUNC(sub_83289660);
PPC_FUNC_IMPL(__imp__sub_83289660) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31827
	ctx.r11.s64 = -2085814272;
	// addi r11,r11,16424
	ctx.r11.s64 = ctx.r11.s64 + 16424;
	// lwz r10,88(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 88);
	// lwz r11,84(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 84);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blelr cr6
	if (!ctx.cr6.gt) return;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// li r9,6
	ctx.r9.s64 = 6;
	// divwu r11,r11,r9
	ctx.r11.u32 = ctx.r11.u32 / ctx.r9.u32;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
loc_8328968C:
	// lwz r11,4744(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4744);
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// bne cr6,0x832896a4
	if (!ctx.cr6.eq) goto loc_832896A4;
	// addi r11,r3,1188
	ctx.r11.s64 = ctx.r3.s64 + 1188;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r4,r11,r10
	PPC_STORE_U32(ctx.r11.u32 + ctx.r10.u32, ctx.r4.u32);
loc_832896A4:
	// addis r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 65536;
	// addi r10,r10,-32512
	ctx.r10.s64 = ctx.r10.s64 + -32512;
	// bdnz 0x8328968c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8328968C;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_832896B4"))) PPC_WEAK_FUNC(sub_832896B4);
PPC_FUNC_IMPL(__imp__sub_832896B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832896B8"))) PPC_WEAK_FUNC(sub_832896B8);
PPC_FUNC_IMPL(__imp__sub_832896B8) {
	PPC_FUNC_PROLOGUE();
	// stw r4,4816(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4816, ctx.r4.u32);
	// stw r6,4824(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4824, ctx.r6.u32);
	// stw r5,4820(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4820, ctx.r5.u32);
	// b 0x82c10e98
	sub_82C10E98(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832896C8"))) PPC_WEAK_FUNC(sub_832896C8);
PPC_FUNC_IMPL(__imp__sub_832896C8) {
	PPC_FUNC_PROLOGUE();
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x832896dc
	if (!ctx.cr6.eq) goto loc_832896DC;
loc_832896D4:
	// li r3,-1
	ctx.r3.s64 = -1;
	// blr 
	return;
loc_832896DC:
	// lwz r10,4744(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4744);
	// cmpwi cr6,r10,2
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 2, ctx.xer);
	// bne cr6,0x832896d4
	if (!ctx.cr6.eq) goto loc_832896D4;
	// lis r10,-31827
	ctx.r10.s64 = -2085814272;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r11,15392(r10)
	PPC_STORE_U32(ctx.r10.u32 + 15392, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_832896F8"))) PPC_WEAK_FUNC(sub_832896F8);
PPC_FUNC_IMPL(__imp__sub_832896F8) {
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
	// bl 0x83289418
	ctx.lr = 0x83289710;
	sub_83289418(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x83289734
	if (ctx.cr6.eq) goto loc_83289734;
	// lis r11,-31827
	ctx.r11.s64 = -2085814272;
	// li r5,256
	ctx.r5.s64 = 256;
	// addi r4,r11,15400
	ctx.r4.s64 = ctx.r11.s64 + 15400;
	// bl 0x83292d68
	ctx.lr = 0x83289728;
	sub_83292D68(ctx, base);
	// lis r10,-31822
	ctx.r10.s64 = -2085486592;
	// addi r11,r31,384
	ctx.r11.s64 = ctx.r31.s64 + 384;
	// stw r11,-568(r10)
	PPC_STORE_U32(ctx.r10.u32 + -568, ctx.r11.u32);
loc_83289734:
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

__attribute__((alias("__imp__sub_83289748"))) PPC_WEAK_FUNC(sub_83289748);
PPC_FUNC_IMPL(__imp__sub_83289748) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// lis r10,-31827
	ctx.r10.s64 = -2085814272;
	// lis r9,-31822
	ctx.r9.s64 = -2085486592;
	// addi r8,r10,16424
	ctx.r8.s64 = ctx.r10.s64 + 16424;
	// lis r7,-31822
	ctx.r7.s64 = -2085486592;
	// lwz r10,-920(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + -920);
	// lis r6,-31822
	ctx.r6.s64 = -2085486592;
	// lis r5,-31822
	ctx.r5.s64 = -2085486592;
	// lis r4,-31822
	ctx.r4.s64 = -2085486592;
	// lwz r11,80(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 80);
	// lis r8,-31822
	ctx.r8.s64 = -2085486592;
	// lis r31,-31822
	ctx.r31.s64 = -2085486592;
	// stw r10,4368(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4368, ctx.r10.u32);
	// addi r30,r11,4576
	ctx.r30.s64 = ctx.r11.s64 + 4576;
	// lwz r10,-936(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + -936);
	// addi r10,r10,-16
	ctx.r10.s64 = ctx.r10.s64 + -16;
	// stw r10,4372(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4372, ctx.r10.u32);
	// addi r9,r11,4608
	ctx.r9.s64 = ctx.r11.s64 + 4608;
	// addi r10,r11,4352
	ctx.r10.s64 = ctx.r11.s64 + 4352;
	// lwz r11,-960(r7)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + -960);
	// addi r11,r11,-32
	ctx.r11.s64 = ctx.r11.s64 + -32;
	// stw r11,4376(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4376, ctx.r11.u32);
	// lwz r11,-924(r6)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + -924);
	// addi r11,r11,-32
	ctx.r11.s64 = ctx.r11.s64 + -32;
	// stw r11,4380(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4380, ctx.r11.u32);
	// lwz r11,-1004(r5)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + -1004);
	// stw r11,4384(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4384, ctx.r11.u32);
	// lwz r11,-1000(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + -1000);
	// stw r11,4388(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4388, ctx.r11.u32);
	// lwz r11,-928(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + -928);
	// stw r30,4408(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4408, ctx.r30.u32);
	// stw r9,4412(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4412, ctx.r9.u32);
	// stw r10,4400(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4400, ctx.r10.u32);
	// stw r11,4392(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4392, ctx.r11.u32);
	// lwz r11,-568(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -568);
	// stw r11,4416(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4416, ctx.r11.u32);
	// bl 0x832894d0
	ctx.lr = 0x832897F0;
	sub_832894D0(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83289808"))) PPC_WEAK_FUNC(sub_83289808);
PPC_FUNC_IMPL(__imp__sub_83289808) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x833a01a8
	ctx.lr = 0x83289810;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r11,r4,127
	ctx.r11.s64 = ctx.r4.s64 + 127;
	// addi r10,r3,1
	ctx.r10.s64 = ctx.r3.s64 + 1;
	// rlwinm r30,r11,0,0,24
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFF80;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// rlwinm r5,r10,11,2,20
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 11) & 0x3FFFF800;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8328be48
	ctx.lr = 0x83289834;
	sub_8328BE48(ctx, base);
	// lis r11,-31827
	ctx.r11.s64 = -2085814272;
	// lis r10,-32219
	ctx.r10.s64 = -2111504384;
	// addi r28,r11,16424
	ctx.r28.s64 = ctx.r11.s64 + 16424;
	// mulli r11,r31,5504
	ctx.r11.s64 = ctx.r31.s64 * 5504;
	// addi r4,r10,21312
	ctx.r4.s64 = ctx.r10.s64 + 21312;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// li r5,64
	ctx.r5.s64 = 64;
	// add r29,r11,r30
	ctx.r29.u64 = ctx.r11.u64 + ctx.r30.u64;
	// bl 0x832884b0
	ctx.lr = 0x83289858;
	sub_832884B0(ctx, base);
	// addi r11,r29,1056
	ctx.r11.s64 = ctx.r29.s64 + 1056;
	// stw r29,76(r28)
	PPC_STORE_U32(ctx.r28.u32 + 76, ctx.r29.u32);
	// stw r11,80(r28)
	PPC_STORE_U32(ctx.r28.u32 + 80, ctx.r11.u32);
	// stw r31,84(r28)
	PPC_STORE_U32(ctx.r28.u32 + 84, ctx.r31.u32);
	// stw r30,88(r28)
	PPC_STORE_U32(ctx.r28.u32 + 88, ctx.r30.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x833a01f8
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83289874"))) PPC_WEAK_FUNC(sub_83289874);
PPC_FUNC_IMPL(__imp__sub_83289874) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83289878"))) PPC_WEAK_FUNC(sub_83289878);
PPC_FUNC_IMPL(__imp__sub_83289878) {
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
	// bl 0x82c10e98
	ctx.lr = 0x83289888;
	sub_82C10E98(ctx, base);
	// bl 0x83292e38
	ctx.lr = 0x8328988C;
	sub_83292E38(ctx, base);
	// bl 0x82c10e98
	ctx.lr = 0x83289890;
	sub_82C10E98(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_832898A0"))) PPC_WEAK_FUNC(sub_832898A0);
PPC_FUNC_IMPL(__imp__sub_832898A0) {
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
	// addi r3,r3,4472
	ctx.r3.s64 = ctx.r3.s64 + 4472;
	// bl 0x83293678
	ctx.lr = 0x832898BC;
	sub_83293678(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83289628
	ctx.lr = 0x832898C4;
	sub_83289628(ctx, base);
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

__attribute__((alias("__imp__sub_832898D8"))) PPC_WEAK_FUNC(sub_832898D8);
PPC_FUNC_IMPL(__imp__sub_832898D8) {
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
	// bl 0x832896c8
	ctx.lr = 0x832898F0;
	sub_832896C8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x8328990c
	if (ctx.cr0.eq) goto loc_8328990C;
	// lis r4,-253
	ctx.r4.s64 = -16580608;
	// li r3,0
	ctx.r3.s64 = 0;
	// ori r4,r4,513
	ctx.r4.u64 = ctx.r4.u64 | 513;
	// bl 0x8328c178
	ctx.lr = 0x83289908;
	sub_8328C178(ctx, base);
	// b 0x83289928
	goto loc_83289928;
loc_8328990C:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82c10e98
	ctx.lr = 0x83289914;
	sub_82C10E98(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83292e80
	ctx.lr = 0x8328991C;
	sub_83292E80(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r11,4744(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4744, ctx.r11.u32);
loc_83289928:
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

__attribute__((alias("__imp__sub_8328993C"))) PPC_WEAK_FUNC(sub_8328993C);
PPC_FUNC_IMPL(__imp__sub_8328993C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83289940"))) PPC_WEAK_FUNC(sub_83289940);
PPC_FUNC_IMPL(__imp__sub_83289940) {
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
	// mr r7,r3
	ctx.r7.u64 = ctx.r3.u64;
	// mr r8,r4
	ctx.r8.u64 = ctx.r4.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x83289974
	if (!ctx.cr6.eq) goto loc_83289974;
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// mr r3,r8
	ctx.r3.u64 = ctx.r8.u64;
	// bl 0x83289660
	ctx.lr = 0x83289968;
	sub_83289660(ctx, base);
	// lis r11,-31827
	ctx.r11.s64 = -2085814272;
	// addi r11,r11,16424
	ctx.r11.s64 = ctx.r11.s64 + 16424;
	// b 0x8328999c
	goto loc_8328999C;
loc_83289974:
	// mr r3,r7
	ctx.r3.u64 = ctx.r7.u64;
	// bl 0x832896c8
	ctx.lr = 0x8328997C;
	sub_832896C8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x83289998
	if (ctx.cr0.eq) goto loc_83289998;
	// lis r4,-253
	ctx.r4.s64 = -16580608;
	// li r3,0
	ctx.r3.s64 = 0;
	// ori r4,r4,514
	ctx.r4.u64 = ctx.r4.u64 | 514;
	// bl 0x8328c178
	ctx.lr = 0x83289994;
	sub_8328C178(ctx, base);
	// b 0x832899b4
	goto loc_832899B4;
loc_83289998:
	// addi r11,r7,4752
	ctx.r11.s64 = ctx.r7.s64 + 4752;
loc_8328999C:
	// rlwinm r10,r8,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r4,r8
	ctx.r4.u64 = ctx.r8.u64;
	// mr r3,r7
	ctx.r3.u64 = ctx.r7.u64;
	// stwx r5,r10,r11
	PPC_STORE_U32(ctx.r10.u32 + ctx.r11.u32, ctx.r5.u32);
	// bl 0x82c10e98
	ctx.lr = 0x832899B0;
	sub_82C10E98(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
loc_832899B4:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_832899C4"))) PPC_WEAK_FUNC(sub_832899C4);
PPC_FUNC_IMPL(__imp__sub_832899C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832899C8"))) PPC_WEAK_FUNC(sub_832899C8);
PPC_FUNC_IMPL(__imp__sub_832899C8) {
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
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x832899ec
	if (!ctx.cr6.eq) goto loc_832899EC;
	// lis r11,-31827
	ctx.r11.s64 = -2085814272;
	// addi r11,r11,16424
	ctx.r11.s64 = ctx.r11.s64 + 16424;
	// b 0x83289a14
	goto loc_83289A14;
loc_832899EC:
	// mr r3,r9
	ctx.r3.u64 = ctx.r9.u64;
	// bl 0x832896c8
	ctx.lr = 0x832899F4;
	sub_832896C8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x83289a10
	if (ctx.cr0.eq) goto loc_83289A10;
	// lis r4,-253
	ctx.r4.s64 = -16580608;
	// li r3,0
	ctx.r3.s64 = 0;
	// ori r4,r4,528
	ctx.r4.u64 = ctx.r4.u64 | 528;
	// bl 0x8328c178
	ctx.lr = 0x83289A0C;
	sub_8328C178(ctx, base);
	// b 0x83289a24
	goto loc_83289A24;
loc_83289A10:
	// addi r11,r9,4752
	ctx.r11.s64 = ctx.r9.s64 + 4752;
loc_83289A14:
	// rlwinm r10,r4,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// li r3,0
	ctx.r3.s64 = 0;
	// lwzx r11,r10,r11
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// stw r11,0(r5)
	PPC_STORE_U32(ctx.r5.u32 + 0, ctx.r11.u32);
loc_83289A24:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83289A34"))) PPC_WEAK_FUNC(sub_83289A34);
PPC_FUNC_IMPL(__imp__sub_83289A34) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83289A38"))) PPC_WEAK_FUNC(sub_83289A38);
PPC_FUNC_IMPL(__imp__sub_83289A38) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x833a01ac
	ctx.lr = 0x83289A40;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31827
	ctx.r11.s64 = -2085814272;
	// lis r10,-32219
	ctx.r10.s64 = -2111504384;
	// addi r31,r11,16424
	ctx.r31.s64 = ctx.r11.s64 + 16424;
	// addi r11,r10,21224
	ctx.r11.s64 = ctx.r10.s64 + 21224;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// stw r11,-1028(r31)
	PPC_STORE_U32(ctx.r31.u32 + -1028, ctx.r11.u32);
	// bl 0x83289398
	ctx.lr = 0x83289A64;
	sub_83289398(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x83289a84
	if (ctx.cr0.eq) goto loc_83289A84;
	// lis r11,-253
	ctx.r11.s64 = -16580608;
	// ori r11,r11,65285
	ctx.r11.u64 = ctx.r11.u64 | 65285;
	// cmpw cr6,r3,r11
	ctx.cr6.compare<int32_t>(ctx.r3.s32, ctx.r11.s32, ctx.xer);
	// bne cr6,0x83289ae0
	if (!ctx.cr6.eq) goto loc_83289AE0;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// b 0x83289ae0
	goto loc_83289AE0;
loc_83289A84:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82c10e98
	ctx.lr = 0x83289A8C;
	sub_82C10E98(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x83289808
	ctx.lr = 0x83289A98;
	sub_83289808(ctx, base);
	// lwz r31,80(r31)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	// bl 0x82c10e98
	ctx.lr = 0x83289AA0;
	sub_82C10E98(ctx, base);
	// bl 0x83289c48
	ctx.lr = 0x83289AA4;
	sub_83289C48(ctx, base);
	// bl 0x82c10e98
	ctx.lr = 0x83289AA8;
	sub_82C10E98(ctx, base);
	// bl 0x83292e30
	ctx.lr = 0x83289AAC;
	sub_83292E30(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r31,4656
	ctx.r3.s64 = ctx.r31.s64 + 4656;
	// bl 0x83292d10
	ctx.lr = 0x83289AB8;
	sub_83292D10(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83293aa0
	ctx.lr = 0x83289AC0;
	sub_83293AA0(ctx, base);
	// bl 0x83293590
	ctx.lr = 0x83289AC4;
	sub_83293590(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x832937f0
	ctx.lr = 0x83289ACC;
	sub_832937F0(ctx, base);
	// addi r3,r31,6112
	ctx.r3.s64 = ctx.r31.s64 + 6112;
	// bl 0x832896f8
	ctx.lr = 0x83289AD4;
	sub_832896F8(ctx, base);
	// bl 0x83289488
	ctx.lr = 0x83289AD8;
	sub_83289488(ctx, base);
	// bl 0x82c10e98
	ctx.lr = 0x83289ADC;
	sub_82C10E98(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
loc_83289AE0:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x833a01fc
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83289AE8"))) PPC_WEAK_FUNC(sub_83289AE8);
PPC_FUNC_IMPL(__imp__sub_83289AE8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x833a01ac
	ctx.lr = 0x83289AF0;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x83289748
	ctx.lr = 0x83289AFC;
	sub_83289748(ctx, base);
	// li r30,0
	ctx.r30.s64 = 0;
	// lis r11,-31827
	ctx.r11.s64 = -2085814272;
	// stw r30,4748(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4748, ctx.r30.u32);
	// li r5,64
	ctx.r5.s64 = 64;
	// addi r4,r11,16424
	ctx.r4.s64 = ctx.r11.s64 + 16424;
	// addi r3,r3,4752
	ctx.r3.s64 = ctx.r3.s64 + 4752;
	// bl 0x832884b0
	ctx.lr = 0x83289B18;
	sub_832884B0(ctx, base);
	// lis r11,32767
	ctx.r11.s64 = 2147418112;
	// stw r30,4820(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4820, ctx.r30.u32);
	// addi r3,r31,4956
	ctx.r3.s64 = ctx.r31.s64 + 4956;
	// ori r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 65535;
	// stw r30,4824(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4824, ctx.r30.u32);
	// stw r11,4816(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4816, ctx.r11.u32);
	// bl 0x832884b8
	ctx.lr = 0x83289B34;
	sub_832884B8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83293b90
	ctx.lr = 0x83289B3C;
	sub_83293B90(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x832898a0
	ctx.lr = 0x83289B44;
	sub_832898A0(ctx, base);
	// addi r3,r31,4828
	ctx.r3.s64 = ctx.r31.s64 + 4828;
	// bl 0x83289520
	ctx.lr = 0x83289B4C;
	sub_83289520(ctx, base);
	// stw r30,5280(r31)
	PPC_STORE_U32(ctx.r31.u32 + 5280, ctx.r30.u32);
	// stw r30,5284(r31)
	PPC_STORE_U32(ctx.r31.u32 + 5284, ctx.r30.u32);
	// mr r29,r30
	ctx.r29.u64 = ctx.r30.u64;
	// stw r30,5240(r31)
	PPC_STORE_U32(ctx.r31.u32 + 5240, ctx.r30.u32);
	// stw r30,5244(r31)
	PPC_STORE_U32(ctx.r31.u32 + 5244, ctx.r30.u32);
	// stw r30,5248(r31)
	PPC_STORE_U32(ctx.r31.u32 + 5248, ctx.r30.u32);
	// stw r30,5252(r31)
	PPC_STORE_U32(ctx.r31.u32 + 5252, ctx.r30.u32);
	// stw r30,5300(r31)
	PPC_STORE_U32(ctx.r31.u32 + 5300, ctx.r30.u32);
loc_83289B6C:
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83289d50
	ctx.lr = 0x83289B84;
	sub_83289D50(ctx, base);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// cmpwi cr6,r29,4
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 4, ctx.xer);
	// blt cr6,0x83289b6c
	if (ctx.cr6.lt) goto loc_83289B6C;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83289d70
	ctx.lr = 0x83289BA0;
	sub_83289D70(ctx, base);
	// stw r30,5412(r31)
	PPC_STORE_U32(ctx.r31.u32 + 5412, ctx.r30.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83292e40
	ctx.lr = 0x83289BAC;
	sub_83292E40(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d6da88
	ctx.lr = 0x83289BB4;
	sub_82D6DA88(ctx, base);
	// li r11,2
	ctx.r11.s64 = 2;
	// stw r3,5328(r31)
	PPC_STORE_U32(ctx.r31.u32 + 5328, ctx.r3.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,4744(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4744, ctx.r11.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x833a01fc
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83289BCC"))) PPC_WEAK_FUNC(sub_83289BCC);
PPC_FUNC_IMPL(__imp__sub_83289BCC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83289BD0"))) PPC_WEAK_FUNC(sub_83289BD0);
PPC_FUNC_IMPL(__imp__sub_83289BD0) {
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
	// bl 0x832895e0
	ctx.lr = 0x83289BE0;
	sub_832895E0(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x83289bec
	if (ctx.cr0.eq) goto loc_83289BEC;
	// bl 0x83289ae8
	ctx.lr = 0x83289BEC;
	sub_83289AE8(ctx, base);
loc_83289BEC:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83289BFC"))) PPC_WEAK_FUNC(sub_83289BFC);
PPC_FUNC_IMPL(__imp__sub_83289BFC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83289C00"))) PPC_WEAK_FUNC(sub_83289C00);
PPC_FUNC_IMPL(__imp__sub_83289C00) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31827
	ctx.r10.s64 = -2085814272;
	// lwz r11,16640(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 16640);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,16640(r10)
	PPC_STORE_U32(ctx.r10.u32 + 16640, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83289C14"))) PPC_WEAK_FUNC(sub_83289C14);
PPC_FUNC_IMPL(__imp__sub_83289C14) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83289C18"))) PPC_WEAK_FUNC(sub_83289C18);
PPC_FUNC_IMPL(__imp__sub_83289C18) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// rlwinm. r11,r4,30,2,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 30) & 0x3FFFFFFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blelr 
	if (!ctx.cr0.gt) return;
	// lis r10,-31959
	ctx.r10.s64 = -2094465024;
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// addi r9,r10,-25600
	ctx.r9.s64 = ctx.r10.s64 + -25600;
	// addi r10,r3,-4
	ctx.r10.s64 = ctx.r3.s64 + -4;
	// beqlr 
	if (ctx.cr0.eq) return;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
loc_83289C38:
	// stwu r9,4(r10)
	ea = 4 + ctx.r10.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r10.u32 = ea;
	// bdnz 0x83289c38
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_83289C38;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83289C44"))) PPC_WEAK_FUNC(sub_83289C44);
PPC_FUNC_IMPL(__imp__sub_83289C44) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83289C48"))) PPC_WEAK_FUNC(sub_83289C48);
PPC_FUNC_IMPL(__imp__sub_83289C48) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x833a019c
	ctx.lr = 0x83289C50;
	__savegprlr_25(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31827
	ctx.r11.s64 = -2085814272;
	// li r4,40
	ctx.r4.s64 = 40;
	// addi r8,r11,16520
	ctx.r8.s64 = ctx.r11.s64 + 16520;
	// addi r3,r8,164
	ctx.r3.s64 = ctx.r8.s64 + 164;
	// bl 0x83289c18
	ctx.lr = 0x83289C68;
	sub_83289C18(ctx, base);
	// mr r3,r8
	ctx.r3.u64 = ctx.r8.u64;
	// li r4,80
	ctx.r4.s64 = 80;
	// bl 0x83289c18
	ctx.lr = 0x83289C74;
	sub_83289C18(ctx, base);
	// addi r3,r8,80
	ctx.r3.s64 = ctx.r8.s64 + 80;
	// li r4,40
	ctx.r4.s64 = 40;
	// bl 0x83289c18
	ctx.lr = 0x83289C80;
	sub_83289C18(ctx, base);
	// addi r3,r8,124
	ctx.r3.s64 = ctx.r8.s64 + 124;
	// bl 0x83289c18
	ctx.lr = 0x83289C88;
	sub_83289C18(ctx, base);
	// addi r3,r8,204
	ctx.r3.s64 = ctx.r8.s64 + 204;
	// bl 0x83289c18
	ctx.lr = 0x83289C90;
	sub_83289C18(ctx, base);
	// lis r11,-31895
	ctx.r11.s64 = -2090270720;
	// lis r10,-31895
	ctx.r10.s64 = -2090270720;
	// lis r9,-31895
	ctx.r9.s64 = -2090270720;
	// addi r11,r11,6344
	ctx.r11.s64 = ctx.r11.s64 + 6344;
	// addi r10,r10,6344
	ctx.r10.s64 = ctx.r10.s64 + 6344;
	// addi r9,r9,6632
	ctx.r9.s64 = ctx.r9.s64 + 6632;
	// stw r11,168(r8)
	PPC_STORE_U32(ctx.r8.u32 + 168, ctx.r11.u32);
	// lis r25,-31895
	ctx.r25.s64 = -2090270720;
	// stw r10,172(r8)
	PPC_STORE_U32(ctx.r8.u32 + 172, ctx.r10.u32);
	// lis r26,-31895
	ctx.r26.s64 = -2090270720;
	// stw r9,176(r8)
	PPC_STORE_U32(ctx.r8.u32 + 176, ctx.r9.u32);
	// lis r27,-31895
	ctx.r27.s64 = -2090270720;
	// addi r11,r25,5832
	ctx.r11.s64 = ctx.r25.s64 + 5832;
	// addi r10,r26,5832
	ctx.r10.s64 = ctx.r26.s64 + 5832;
	// addi r9,r27,5832
	ctx.r9.s64 = ctx.r27.s64 + 5832;
	// stw r11,4(r8)
	PPC_STORE_U32(ctx.r8.u32 + 4, ctx.r11.u32);
	// lis r28,-31895
	ctx.r28.s64 = -2090270720;
	// stw r10,8(r8)
	PPC_STORE_U32(ctx.r8.u32 + 8, ctx.r10.u32);
	// lis r29,-31895
	ctx.r29.s64 = -2090270720;
	// stw r9,12(r8)
	PPC_STORE_U32(ctx.r8.u32 + 12, ctx.r9.u32);
	// lis r30,-31895
	ctx.r30.s64 = -2090270720;
	// addi r11,r28,5832
	ctx.r11.s64 = ctx.r28.s64 + 5832;
	// addi r10,r29,5832
	ctx.r10.s64 = ctx.r29.s64 + 5832;
	// addi r9,r30,5832
	ctx.r9.s64 = ctx.r30.s64 + 5832;
	// stw r11,16(r8)
	PPC_STORE_U32(ctx.r8.u32 + 16, ctx.r11.u32);
	// lis r31,-31895
	ctx.r31.s64 = -2090270720;
	// stw r10,44(r8)
	PPC_STORE_U32(ctx.r8.u32 + 44, ctx.r10.u32);
	// lis r3,-31895
	ctx.r3.s64 = -2090270720;
	// stw r9,48(r8)
	PPC_STORE_U32(ctx.r8.u32 + 48, ctx.r9.u32);
	// lis r4,-31895
	ctx.r4.s64 = -2090270720;
	// addi r11,r31,5832
	ctx.r11.s64 = ctx.r31.s64 + 5832;
	// addi r10,r3,5832
	ctx.r10.s64 = ctx.r3.s64 + 5832;
	// addi r9,r4,6832
	ctx.r9.s64 = ctx.r4.s64 + 6832;
	// stw r11,52(r8)
	PPC_STORE_U32(ctx.r8.u32 + 52, ctx.r11.u32);
	// lis r5,-31895
	ctx.r5.s64 = -2090270720;
	// stw r10,56(r8)
	PPC_STORE_U32(ctx.r8.u32 + 56, ctx.r10.u32);
	// lis r6,-31895
	ctx.r6.s64 = -2090270720;
	// stw r9,88(r8)
	PPC_STORE_U32(ctx.r8.u32 + 88, ctx.r9.u32);
	// lis r7,-31895
	ctx.r7.s64 = -2090270720;
	// addi r11,r5,6832
	ctx.r11.s64 = ctx.r5.s64 + 6832;
	// addi r10,r6,7144
	ctx.r10.s64 = ctx.r6.s64 + 7144;
	// addi r9,r7,7456
	ctx.r9.s64 = ctx.r7.s64 + 7456;
	// stw r11,92(r8)
	PPC_STORE_U32(ctx.r8.u32 + 92, ctx.r11.u32);
	// stw r10,136(r8)
	PPC_STORE_U32(ctx.r8.u32 + 136, ctx.r10.u32);
	// stw r9,216(r8)
	PPC_STORE_U32(ctx.r8.u32 + 216, ctx.r9.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x833a01ec
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83289D4C"))) PPC_WEAK_FUNC(sub_83289D4C);
PPC_FUNC_IMPL(__imp__sub_83289D4C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83289D50"))) PPC_WEAK_FUNC(sub_83289D50);
PPC_FUNC_IMPL(__imp__sub_83289D50) {
	PPC_FUNC_PROLOGUE();
	// mulli r11,r4,12
	ctx.r11.s64 = ctx.r4.s64 * 12;
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// addi r10,r11,5336
	ctx.r10.s64 = ctx.r11.s64 + 5336;
	// stw r5,5336(r11)
	PPC_STORE_U32(ctx.r11.u32 + 5336, ctx.r5.u32);
	// stw r6,5340(r11)
	PPC_STORE_U32(ctx.r11.u32 + 5340, ctx.r6.u32);
	// stw r7,5344(r11)
	PPC_STORE_U32(ctx.r11.u32 + 5344, ctx.r7.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83289D6C"))) PPC_WEAK_FUNC(sub_83289D6C);
PPC_FUNC_IMPL(__imp__sub_83289D6C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83289D70"))) PPC_WEAK_FUNC(sub_83289D70);
PPC_FUNC_IMPL(__imp__sub_83289D70) {
	PPC_FUNC_PROLOGUE();
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r4,5384(r3)
	PPC_STORE_U32(ctx.r3.u32 + 5384, ctx.r4.u32);
	// stw r5,5388(r3)
	PPC_STORE_U32(ctx.r3.u32 + 5388, ctx.r5.u32);
	// stw r11,5392(r3)
	PPC_STORE_U32(ctx.r3.u32 + 5392, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83289D84"))) PPC_WEAK_FUNC(sub_83289D84);
PPC_FUNC_IMPL(__imp__sub_83289D84) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83289D88"))) PPC_WEAK_FUNC(sub_83289D88);
PPC_FUNC_IMPL(__imp__sub_83289D88) {
	PPC_FUNC_PROLOGUE();
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x83289d98
	if (ctx.cr6.eq) goto loc_83289D98;
	// lwz r11,5384(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 5384);
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
loc_83289D98:
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lwz r11,5392(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 5392);
	// stw r11,0(r5)
	PPC_STORE_U32(ctx.r5.u32 + 0, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83289DAC"))) PPC_WEAK_FUNC(sub_83289DAC);
PPC_FUNC_IMPL(__imp__sub_83289DAC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83289DB0"))) PPC_WEAK_FUNC(sub_83289DB0);
PPC_FUNC_IMPL(__imp__sub_83289DB0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// lis r5,32767
	ctx.r5.s64 = 2147418112;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r6,r4
	ctx.r6.u64 = ctx.r4.u64;
	// ori r5,r5,65535
	ctx.r5.u64 = ctx.r5.u64 | 65535;
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r11,24(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x83289DEC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r11,28(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x83289E08;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// bge cr6,0x83289e1c
	if (!ctx.cr6.lt) goto loc_83289E1C;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x83289e24
	goto loc_83289E24;
loc_83289E1C:
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x8328b5a0
	ctx.lr = 0x83289E24;
	sub_8328B5A0(ctx, base);
loc_83289E24:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83289E3C"))) PPC_WEAK_FUNC(sub_83289E3C);
PPC_FUNC_IMPL(__imp__sub_83289E3C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83289E40"))) PPC_WEAK_FUNC(sub_83289E40);
PPC_FUNC_IMPL(__imp__sub_83289E40) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// lwz r3,5240(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 5240);
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x83289ecc
	if (!ctx.cr6.eq) goto loc_83289ECC;
	// li r5,64
	ctx.r5.s64 = 64;
	// lwz r3,0(r4)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// lwz r4,4(r4)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// bl 0x8328b648
	ctx.lr = 0x83289E78;
	sub_8328B648(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x83289ec8
	if (ctx.cr0.eq) goto loc_83289EC8;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r3,r3,4
	ctx.r3.s64 = ctx.r3.s64 + 4;
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// li r5,-1
	ctx.r5.s64 = -1;
	// subf r11,r3,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r3.s64;
	// add r4,r11,r10
	ctx.r4.u64 = ctx.r11.u64 + ctx.r10.u64;
	// bl 0x8328b648
	ctx.lr = 0x83289E9C;
	sub_8328B648(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x83289ec8
	if (ctx.cr0.eq) goto loc_83289EC8;
	// bl 0x8328b5a0
	ctx.lr = 0x83289EA8;
	sub_8328B5A0(ctx, base);
	// rlwinm. r11,r3,0,27,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 0) & 0x10;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x83289eb8
	if (ctx.cr0.eq) goto loc_83289EB8;
	// li r11,2
	ctx.r11.s64 = 2;
	// b 0x83289ec4
	goto loc_83289EC4;
loc_83289EB8:
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x83289ec8
	if (ctx.cr6.eq) goto loc_83289EC8;
	// li r11,1
	ctx.r11.s64 = 1;
loc_83289EC4:
	// stw r11,5240(r30)
	PPC_STORE_U32(ctx.r30.u32 + 5240, ctx.r11.u32);
loc_83289EC8:
	// lwz r3,5240(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 5240);
loc_83289ECC:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83289EE4"))) PPC_WEAK_FUNC(sub_83289EE4);
PPC_FUNC_IMPL(__imp__sub_83289EE4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83289EE8"))) PPC_WEAK_FUNC(sub_83289EE8);
PPC_FUNC_IMPL(__imp__sub_83289EE8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31822
	ctx.r11.s64 = -2085486592;
	// addi r11,r11,-1040
	ctx.r11.s64 = ctx.r11.s64 + -1040;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// stw r11,4396(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4396, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83289EFC"))) PPC_WEAK_FUNC(sub_83289EFC);
PPC_FUNC_IMPL(__imp__sub_83289EFC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83289F00"))) PPC_WEAK_FUNC(sub_83289F00);
PPC_FUNC_IMPL(__imp__sub_83289F00) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31822
	ctx.r11.s64 = -2085486592;
	// li r5,64
	ctx.r5.s64 = 64;
	// addi r11,r11,-1024
	ctx.r11.s64 = ctx.r11.s64 + -1024;
	// addi r3,r3,2304
	ctx.r3.s64 = ctx.r3.s64 + 2304;
	// lwz r4,4(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// b 0x83292d68
	sub_83292D68(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83289F18"))) PPC_WEAK_FUNC(sub_83289F18);
PPC_FUNC_IMPL(__imp__sub_83289F18) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// li r11,64
	ctx.r11.s64 = 64;
	// addi r10,r3,2560
	ctx.r10.s64 = ctx.r3.s64 + 2560;
	// lis r9,16256
	ctx.r9.s64 = 1065353216;
	// addi r10,r10,-4
	ctx.r10.s64 = ctx.r10.s64 + -4;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
loc_83289F2C:
	// stwu r9,4(r10)
	ea = 4 + ctx.r10.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r10.u32 = ea;
	// bdnz 0x83289f2c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_83289F2C;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83289F38"))) PPC_WEAK_FUNC(sub_83289F38);
PPC_FUNC_IMPL(__imp__sub_83289F38) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x833a01a8
	ctx.lr = 0x83289F40;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r11,2
	ctx.r11.s64 = 2;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// stw r11,5332(r3)
	PPC_STORE_U32(ctx.r3.u32 + 5332, ctx.r11.u32);
	// li r28,0
	ctx.r28.s64 = 0;
	// lwz r11,4876(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4876);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,4876(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4876, ctx.r11.u32);
	// addi r29,r3,5288
	ctx.r29.s64 = ctx.r3.s64 + 5288;
	// stw r28,5400(r3)
	PPC_STORE_U32(ctx.r3.u32 + 5400, ctx.r28.u32);
	// lis r5,32767
	ctx.r5.s64 = 2147418112;
	// stw r28,5404(r3)
	PPC_STORE_U32(ctx.r3.u32 + 5404, ctx.r28.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r28,4932(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4932, ctx.r28.u32);
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
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
	ctx.lr = 0x83289F98;
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
	// lwzu r8,4(r11)
	ea = 4 + ctx.r11.u32;
	ctx.r8.u64 = PPC_LOAD_U32(ea);
	ctx.r11.u32 = ea;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// beq 0x83289fb8
	if (ctx.cr0.eq) goto loc_83289FB8;
	// slw r8,r8,r10
	ctx.r8.u64 = ctx.r10.u8 & 0x20 ? 0 : (ctx.r8.u32 << (ctx.r10.u8 & 0x3F));
loc_83289FB8:
	// lwz r7,0(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// addi r4,r11,4
	ctx.r4.s64 = ctx.r11.s64 + 4;
	// cmpwi cr6,r10,7
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 7, ctx.xer);
	// blt cr6,0x83289ffc
	if (ctx.cr6.lt) goto loc_83289FFC;
	// addic. r11,r10,-7
	ctx.xer.ca = ctx.r10.u32 > 6;
	ctx.r11.s64 = ctx.r10.s64 + -7;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x83289fe8
	if (ctx.cr0.eq) goto loc_83289FE8;
	// subfic r9,r11,25
	ctx.xer.ca = ctx.r11.u32 <= 25;
	ctx.r9.s64 = 25 - ctx.r11.s64;
	// slw r10,r7,r11
	ctx.r10.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r7.u32 << (ctx.r11.u8 & 0x3F));
	// srw r9,r7,r9
	ctx.r9.u64 = ctx.r9.u8 & 0x20 ? 0 : (ctx.r7.u32 >> (ctx.r9.u8 & 0x3F));
	// or r9,r9,r8
	ctx.r9.u64 = ctx.r9.u64 | ctx.r8.u64;
	// rlwinm r9,r9,25,7,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 25) & 0x1FFFFFF;
	// b 0x83289ff0
	goto loc_83289FF0;
loc_83289FE8:
	// rlwinm r9,r8,25,7,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 25) & 0x1FFFFFF;
	// mr r10,r7
	ctx.r10.u64 = ctx.r7.u64;
loc_83289FF0:
	// lwz r7,0(r4)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// addi r4,r4,4
	ctx.r4.s64 = ctx.r4.s64 + 4;
	// b 0x8328a008
	goto loc_8328A008;
loc_83289FFC:
	// addi r11,r10,25
	ctx.r11.s64 = ctx.r10.s64 + 25;
	// rlwinm r9,r8,25,7,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 25) & 0x1FFFFFF;
	// rlwinm r10,r8,25,0,6
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 25) & 0xFE000000;
loc_8328A008:
	// rlwinm r8,r9,26,6,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 26) & 0x3FFFFFF;
	// clrlwi r9,r9,26
	ctx.r9.u64 = ctx.r9.u32 & 0x3F;
	// rlwinm r6,r8,25,7,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 25) & 0x1FFFFFF;
	// stw r9,4872(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4872, ctx.r9.u32);
	// clrlwi r8,r8,26
	ctx.r8.u64 = ctx.r8.u32 & 0x3F;
	// rlwinm r9,r6,26,6,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 26) & 0x3FFFFFF;
	// clrlwi r6,r6,26
	ctx.r6.u64 = ctx.r6.u32 & 0x3F;
	// stw r8,4868(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4868, ctx.r8.u32);
	// clrlwi r8,r9,27
	ctx.r8.u64 = ctx.r9.u32 & 0x1F;
	// stw r6,4864(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4864, ctx.r6.u32);
	// rlwinm r9,r9,27,5,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 27) & 0x7FFFFFF;
	// rlwinm r6,r10,1,31,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0x1;
	// stw r8,4860(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4860, ctx.r8.u32);
	// stw r9,4856(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4856, ctx.r9.u32);
	// cmpwi cr6,r11,31
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 31, ctx.xer);
	// stw r6,5072(r31)
	PPC_STORE_U32(ctx.r31.u32 + 5072, ctx.r6.u32);
	// bne cr6,0x8328a058
	if (!ctx.cr6.eq) goto loc_8328A058;
	// mr r11,r28
	ctx.r11.u64 = ctx.r28.u64;
	// addi r4,r4,4
	ctx.r4.s64 = ctx.r4.s64 + 4;
	// b 0x8328a060
	goto loc_8328A060;
loc_8328A058:
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// rlwinm r7,r10,1,0,30
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
loc_8328A060:
	// rlwinm r10,r7,1,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 1) & 0x1;
	// cmpwi cr6,r11,31
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 31, ctx.xer);
	// stw r10,5076(r31)
	PPC_STORE_U32(ctx.r31.u32 + 5076, ctx.r10.u32);
	// bne cr6,0x8328a07c
	if (!ctx.cr6.eq) goto loc_8328A07C;
	// mr r11,r28
	ctx.r11.u64 = ctx.r28.u64;
	// addi r4,r4,4
	ctx.r4.s64 = ctx.r4.s64 + 4;
	// b 0x8328a080
	goto loc_8328A080;
loc_8328A07C:
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
loc_8328A080:
	// addi r11,r11,7
	ctx.r11.s64 = ctx.r11.s64 + 7;
	// lwz r10,0(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// srawi r11,r11,3
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x7) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 3;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// subf r11,r10,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r10.s64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// add r11,r11,r4
	ctx.r11.u64 = ctx.r11.u64 + ctx.r4.u64;
	// addi r4,r11,-8
	ctx.r4.s64 = ctx.r11.s64 + -8;
	// bl 0x832f0da8
	ctx.lr = 0x8328A0A8;
	sub_832F0DA8(ctx, base);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r11,32(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8328A0C4;
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
	ctx.lr = 0x8328A0E0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x833a01f8
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8328A0EC"))) PPC_WEAK_FUNC(sub_8328A0EC);
PPC_FUNC_IMPL(__imp__sub_8328A0EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8328A0F0"))) PPC_WEAK_FUNC(sub_8328A0F0);
PPC_FUNC_IMPL(__imp__sub_8328A0F0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x833a01a0
	ctx.lr = 0x8328A0F8;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r11,3
	ctx.r11.s64 = 3;
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// stw r11,5332(r3)
	PPC_STORE_U32(ctx.r3.u32 + 5332, ctx.r11.u32);
	// addi r28,r3,5288
	ctx.r28.s64 = ctx.r3.s64 + 5288;
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// lis r5,32767
	ctx.r5.s64 = 2147418112;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// ori r5,r5,65535
	ctx.r5.u64 = ctx.r5.u64 | 65535;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// addi r30,r31,4828
	ctx.r30.s64 = ctx.r31.s64 + 4828;
	// lwz r11,24(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8328A138;
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
	// lwzu r9,4(r11)
	ea = 4 + ctx.r11.u32;
	ctx.r9.u64 = PPC_LOAD_U32(ea);
	ctx.r11.u32 = ea;
	// addi r8,r11,4
	ctx.r8.s64 = ctx.r11.s64 + 4;
	// slw r11,r9,r10
	ctx.r11.u64 = ctx.r10.u8 & 0x20 ? 0 : (ctx.r9.u32 << (ctx.r10.u8 & 0x3F));
	// bne 0x8328a15c
	if (!ctx.cr0.eq) goto loc_8328A15C;
	// mr r11,r9
	ctx.r11.u64 = ctx.r9.u64;
loc_8328A15C:
	// lwz r5,0(r8)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	// addi r29,r8,4
	ctx.r29.s64 = ctx.r8.s64 + 4;
	// cmpwi cr6,r10,22
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 22, ctx.xer);
	// blt cr6,0x8328a1a4
	if (ctx.cr6.lt) goto loc_8328A1A4;
	// addic. r10,r10,-22
	ctx.xer.ca = ctx.r10.u32 > 21;
	ctx.r10.s64 = ctx.r10.s64 + -22;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x8328a18c
	if (ctx.cr0.eq) goto loc_8328A18C;
	// subfic r9,r10,10
	ctx.xer.ca = ctx.r10.u32 <= 10;
	ctx.r9.s64 = 10 - ctx.r10.s64;
	// srw r9,r5,r9
	ctx.r9.u64 = ctx.r9.u8 & 0x20 ? 0 : (ctx.r5.u32 >> (ctx.r9.u8 & 0x3F));
	// or r9,r9,r11
	ctx.r9.u64 = ctx.r9.u64 | ctx.r11.u64;
	// slw r11,r5,r10
	ctx.r11.u64 = ctx.r10.u8 & 0x20 ? 0 : (ctx.r5.u32 << (ctx.r10.u8 & 0x3F));
	// rlwinm r9,r9,10,22,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 10) & 0x3FF;
	// b 0x8328a194
	goto loc_8328A194;
loc_8328A18C:
	// rlwinm r9,r11,10,22,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 10) & 0x3FF;
	// mr r11,r5
	ctx.r11.u64 = ctx.r5.u64;
loc_8328A194:
	// stw r9,20(r30)
	PPC_STORE_U32(ctx.r30.u32 + 20, ctx.r9.u32);
	// lwz r5,0(r29)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// addi r29,r29,4
	ctx.r29.s64 = ctx.r29.s64 + 4;
	// b 0x8328a1b4
	goto loc_8328A1B4;
loc_8328A1A4:
	// rlwinm r9,r11,10,22,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 10) & 0x3FF;
	// addi r10,r10,10
	ctx.r10.s64 = ctx.r10.s64 + 10;
	// stw r9,20(r30)
	PPC_STORE_U32(ctx.r30.u32 + 20, ctx.r9.u32);
	// rlwinm r11,r11,10,0,21
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 10) & 0xFFFFFC00;
loc_8328A1B4:
	// cmpwi cr6,r10,29
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 29, ctx.xer);
	// blt cr6,0x8328a1f0
	if (ctx.cr6.lt) goto loc_8328A1F0;
	// addic. r10,r10,-29
	ctx.xer.ca = ctx.r10.u32 > 28;
	ctx.r10.s64 = ctx.r10.s64 + -29;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x8328a1dc
	if (ctx.cr0.eq) goto loc_8328A1DC;
	// subfic r9,r10,3
	ctx.xer.ca = ctx.r10.u32 <= 3;
	ctx.r9.s64 = 3 - ctx.r10.s64;
	// srw r9,r5,r9
	ctx.r9.u64 = ctx.r9.u8 & 0x20 ? 0 : (ctx.r5.u32 >> (ctx.r9.u8 & 0x3F));
	// or r9,r9,r11
	ctx.r9.u64 = ctx.r9.u64 | ctx.r11.u64;
	// slw r11,r5,r10
	ctx.r11.u64 = ctx.r10.u8 & 0x20 ? 0 : (ctx.r5.u32 << (ctx.r10.u8 & 0x3F));
	// rlwinm r9,r9,3,29,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 3) & 0x7;
	// b 0x8328a1e4
	goto loc_8328A1E4;
loc_8328A1DC:
	// rlwinm r9,r11,3,29,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0x7;
	// mr r11,r5
	ctx.r11.u64 = ctx.r5.u64;
loc_8328A1E4:
	// lwz r5,0(r29)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// addi r29,r29,4
	ctx.r29.s64 = ctx.r29.s64 + 4;
	// b 0x8328a1fc
	goto loc_8328A1FC;
loc_8328A1F0:
	// rlwinm r9,r11,3,29,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0x7;
	// addi r10,r10,3
	ctx.r10.s64 = ctx.r10.s64 + 3;
	// rlwinm r11,r11,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
loc_8328A1FC:
	// cmpwi cr6,r10,16
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 16, ctx.xer);
	// stw r9,24(r30)
	PPC_STORE_U32(ctx.r30.u32 + 24, ctx.r9.u32);
	// blt cr6,0x8328a23c
	if (ctx.cr6.lt) goto loc_8328A23C;
	// addic. r10,r10,-16
	ctx.xer.ca = ctx.r10.u32 > 15;
	ctx.r10.s64 = ctx.r10.s64 + -16;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x8328a224
	if (ctx.cr0.eq) goto loc_8328A224;
	// subfic r8,r10,16
	ctx.xer.ca = ctx.r10.u32 <= 16;
	ctx.r8.s64 = 16 - ctx.r10.s64;
	// slw r9,r5,r10
	ctx.r9.u64 = ctx.r10.u8 & 0x20 ? 0 : (ctx.r5.u32 << (ctx.r10.u8 & 0x3F));
	// srw r8,r5,r8
	ctx.r8.u64 = ctx.r8.u8 & 0x20 ? 0 : (ctx.r5.u32 >> (ctx.r8.u8 & 0x3F));
	// or r11,r8,r11
	ctx.r11.u64 = ctx.r8.u64 | ctx.r11.u64;
	// b 0x8328a228
	goto loc_8328A228;
loc_8328A224:
	// mr r9,r5
	ctx.r9.u64 = ctx.r5.u64;
loc_8328A228:
	// rlwinm r11,r11,16,16,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 16) & 0xFFFF;
	// stw r11,5080(r31)
	PPC_STORE_U32(ctx.r31.u32 + 5080, ctx.r11.u32);
	// lwz r5,0(r29)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// addi r29,r29,4
	ctx.r29.s64 = ctx.r29.s64 + 4;
	// b 0x8328a24c
	goto loc_8328A24C;
loc_8328A23C:
	// rlwinm r9,r11,16,16,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 16) & 0xFFFF;
	// addi r10,r10,16
	ctx.r10.s64 = ctx.r10.s64 + 16;
	// stw r9,5080(r31)
	PPC_STORE_U32(ctx.r31.u32 + 5080, ctx.r9.u32);
	// rlwinm r9,r11,16,0,15
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 16) & 0xFFFF0000;
loc_8328A24C:
	// lwz r4,24(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 24);
	// cmpwi cr6,r4,1
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 1, ctx.xer);
	// beq cr6,0x8328a284
	if (ctx.cr6.eq) goto loc_8328A284;
	// cmpwi cr6,r4,2
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 2, ctx.xer);
	// beq cr6,0x8328a284
	if (ctx.cr6.eq) goto loc_8328A284;
	// lwz r8,5400(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 5400);
	// lwz r11,5404(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 5404);
	// rlwinm r8,r8,16,0,15
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 16) & 0xFFFF0000;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addis r8,r8,-1
	ctx.r8.s64 = ctx.r8.s64 + -65536;
	// stw r11,5404(r31)
	PPC_STORE_U32(ctx.r31.u32 + 5404, ctx.r11.u32);
	// or r11,r8,r11
	ctx.r11.u64 = ctx.r8.u64 | ctx.r11.u64;
	// stw r11,104(r30)
	PPC_STORE_U32(ctx.r30.u32 + 104, ctx.r11.u32);
	// b 0x8328a2a0
	goto loc_8328A2A0;
loc_8328A284:
	// lwz r11,5400(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 5400);
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r8,5404(r31)
	PPC_STORE_U32(ctx.r31.u32 + 5404, ctx.r8.u32);
	// rlwinm r8,r11,16,0,15
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 16) & 0xFFFF0000;
	// stw r11,5400(r31)
	PPC_STORE_U32(ctx.r31.u32 + 5400, ctx.r11.u32);
	// stw r8,104(r30)
	PPC_STORE_U32(ctx.r30.u32 + 104, ctx.r8.u32);
loc_8328A2A0:
	// cmpwi cr6,r4,2
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 2, ctx.xer);
	// beq cr6,0x8328a2b0
	if (ctx.cr6.eq) goto loc_8328A2B0;
	// cmpwi cr6,r4,3
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 3, ctx.xer);
	// bne cr6,0x8328a344
	if (!ctx.cr6.eq) goto loc_8328A344;
loc_8328A2B0:
	// rlwinm r11,r9,1,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0x1;
	// cmpwi cr6,r10,31
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 31, ctx.xer);
	// stw r11,5132(r31)
	PPC_STORE_U32(ctx.r31.u32 + 5132, ctx.r11.u32);
	// bne cr6,0x8328a410
	if (!ctx.cr6.eq) goto loc_8328A410;
	// mr r11,r5
	ctx.r11.u64 = ctx.r5.u64;
	// lwz r5,0(r29)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r29,r29,4
	ctx.r29.s64 = ctx.r29.s64 + 4;
loc_8328A2D0:
	// addi r10,r10,3
	ctx.r10.s64 = ctx.r10.s64 + 3;
	// rlwinm r9,r11,3,0,28
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
loc_8328A2D8:
	// rlwinm r8,r11,3,29,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0x7;
	// li r7,1
	ctx.r7.s64 = 1;
	// addi r11,r8,-1
	ctx.r11.s64 = ctx.r8.s64 + -1;
	// cmpwi cr6,r4,3
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 3, ctx.xer);
	// subfic r8,r11,27
	ctx.xer.ca = ctx.r11.u32 <= 27;
	ctx.r8.s64 = 27 - ctx.r11.s64;
	// stw r11,5136(r31)
	PPC_STORE_U32(ctx.r31.u32 + 5136, ctx.r11.u32);
	// slw r11,r7,r11
	ctx.r11.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r7.u32 << (ctx.r11.u8 & 0x3F));
	// stw r8,5140(r31)
	PPC_STORE_U32(ctx.r31.u32 + 5140, ctx.r8.u32);
	// stw r11,5144(r31)
	PPC_STORE_U32(ctx.r31.u32 + 5144, ctx.r11.u32);
	// bne cr6,0x8328a344
	if (!ctx.cr6.eq) goto loc_8328A344;
	// rlwinm r11,r9,1,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0x1;
	// cmpwi cr6,r10,31
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 31, ctx.xer);
	// stw r11,5168(r31)
	PPC_STORE_U32(ctx.r31.u32 + 5168, ctx.r11.u32);
	// bne cr6,0x8328a44c
	if (!ctx.cr6.eq) goto loc_8328A44C;
	// mr r11,r5
	ctx.r11.u64 = ctx.r5.u64;
	// lwz r5,0(r29)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r29,r29,4
	ctx.r29.s64 = ctx.r29.s64 + 4;
loc_8328A320:
	// addi r10,r10,3
	ctx.r10.s64 = ctx.r10.s64 + 3;
	// rlwinm r9,r11,3,0,28
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
loc_8328A328:
	// rlwinm r8,r11,3,29,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0x7;
	// addi r11,r8,-1
	ctx.r11.s64 = ctx.r8.s64 + -1;
	// subfic r8,r11,27
	ctx.xer.ca = ctx.r11.u32 <= 27;
	ctx.r8.s64 = 27 - ctx.r11.s64;
	// stw r11,5172(r31)
	PPC_STORE_U32(ctx.r31.u32 + 5172, ctx.r11.u32);
	// slw r11,r7,r11
	ctx.r11.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r7.u32 << (ctx.r11.u8 & 0x3F));
	// stw r8,5176(r31)
	PPC_STORE_U32(ctx.r31.u32 + 5176, ctx.r8.u32);
	// stw r11,5180(r31)
	PPC_STORE_U32(ctx.r31.u32 + 5180, ctx.r11.u32);
loc_8328A344:
	// lis r8,-32219
	ctx.r8.s64 = -2111504384;
	// lwz r11,4776(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4776);
	// rlwinm r7,r4,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r6,4768(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4768);
	// addi r8,r8,21392
	ctx.r8.s64 = ctx.r8.s64 + 21392;
	// addi r11,r11,-3
	ctx.r11.s64 = ctx.r11.s64 + -3;
	// lis r3,-31827
	ctx.r3.s64 = -2085814272;
	// addic r30,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r30.s64 = ctx.r11.s64 + -1;
	// rlwinm r6,r6,1,0,30
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 1) & 0xFFFFFFFE;
	// lwzx r26,r7,r8
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r7.u32 + ctx.r8.u32);
	// subfe r8,r30,r11
	temp.u8 = (~ctx.r30.u32 + ctx.r11.u32 < ~ctx.r30.u32) | (~ctx.r30.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r8.u64 = ~ctx.r30.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// addi r11,r3,16520
	ctx.r11.s64 = ctx.r3.s64 + 16520;
	// mulli r7,r8,5
	ctx.r7.s64 = ctx.r8.s64 * 5;
	// stw r26,5084(r31)
	PPC_STORE_U32(ctx.r31.u32 + 5084, ctx.r26.u32);
	// add r7,r7,r4
	ctx.r7.u64 = ctx.r7.u64 + ctx.r4.u64;
	// add r8,r6,r8
	ctx.r8.u64 = ctx.r6.u64 + ctx.r8.u64;
	// addi r6,r11,164
	ctx.r6.s64 = ctx.r11.s64 + 164;
	// rlwinm r7,r7,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// mulli r8,r8,5
	ctx.r8.s64 = ctx.r8.s64 * 5;
	// add r8,r8,r4
	ctx.r8.u64 = ctx.r8.u64 + ctx.r4.u64;
	// addi r4,r11,124
	ctx.r4.s64 = ctx.r11.s64 + 124;
	// rlwinm r8,r8,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r6,r7,r6
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + ctx.r6.u32);
	// addi r3,r11,80
	ctx.r3.s64 = ctx.r11.s64 + 80;
	// addi r30,r11,204
	ctx.r30.s64 = ctx.r11.s64 + 204;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// stw r6,5088(r31)
	PPC_STORE_U32(ctx.r31.u32 + 5088, ctx.r6.u32);
	// lwzx r11,r8,r11
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r11.u32);
	// stw r11,5100(r31)
	PPC_STORE_U32(ctx.r31.u32 + 5100, ctx.r11.u32);
	// lwzx r11,r7,r4
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + ctx.r4.u32);
	// stw r11,5108(r31)
	PPC_STORE_U32(ctx.r31.u32 + 5108, ctx.r11.u32);
	// lwzx r11,r7,r3
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + ctx.r3.u32);
	// stw r11,5112(r31)
	PPC_STORE_U32(ctx.r31.u32 + 5112, ctx.r11.u32);
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// lwzx r8,r7,r30
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r7.u32 + ctx.r30.u32);
	// stw r8,5116(r31)
	PPC_STORE_U32(ctx.r31.u32 + 5116, ctx.r8.u32);
	// stw r11,5104(r31)
	PPC_STORE_U32(ctx.r31.u32 + 5104, ctx.r11.u32);
	// bge cr6,0x8328a4ac
	if (!ctx.cr6.lt) goto loc_8328A4AC;
	// lwz r7,0(r28)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// addi r11,r10,7
	ctx.r11.s64 = ctx.r10.s64 + 7;
	// lwz r6,5292(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 5292);
loc_8328A3E8:
	// addi r10,r10,9
	ctx.r10.s64 = ctx.r10.s64 + 9;
	// addi r11,r11,9
	ctx.r11.s64 = ctx.r11.s64 + 9;
	// cmpwi cr6,r10,32
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 32, ctx.xer);
	// blt cr6,0x8328a488
	if (ctx.cr6.lt) goto loc_8328A488;
	// addi r10,r10,-32
	ctx.r10.s64 = ctx.r10.s64 + -32;
	// addi r11,r11,-32
	ctx.r11.s64 = ctx.r11.s64 + -32;
	// slw r9,r5,r10
	ctx.r9.u64 = ctx.r10.u8 & 0x20 ? 0 : (ctx.r5.u32 << (ctx.r10.u8 & 0x3F));
	// lwz r5,0(r29)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// addi r29,r29,4
	ctx.r29.s64 = ctx.r29.s64 + 4;
	// b 0x8328a48c
	goto loc_8328A48C;
loc_8328A410:
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// rlwinm r11,r9,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// cmpwi cr6,r10,29
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 29, ctx.xer);
	// blt cr6,0x8328a2d0
	if (ctx.cr6.lt) goto loc_8328A2D0;
	// addic. r10,r10,-29
	ctx.xer.ca = ctx.r10.u32 > 28;
	ctx.r10.s64 = ctx.r10.s64 + -29;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x8328a43c
	if (ctx.cr0.eq) goto loc_8328A43C;
	// subfic r8,r10,3
	ctx.xer.ca = ctx.r10.u32 <= 3;
	ctx.r8.s64 = 3 - ctx.r10.s64;
	// slw r9,r5,r10
	ctx.r9.u64 = ctx.r10.u8 & 0x20 ? 0 : (ctx.r5.u32 << (ctx.r10.u8 & 0x3F));
	// srw r8,r5,r8
	ctx.r8.u64 = ctx.r8.u8 & 0x20 ? 0 : (ctx.r5.u32 >> (ctx.r8.u8 & 0x3F));
	// or r11,r8,r11
	ctx.r11.u64 = ctx.r8.u64 | ctx.r11.u64;
	// b 0x8328a440
	goto loc_8328A440;
loc_8328A43C:
	// mr r9,r5
	ctx.r9.u64 = ctx.r5.u64;
loc_8328A440:
	// lwz r5,0(r29)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// addi r29,r29,4
	ctx.r29.s64 = ctx.r29.s64 + 4;
	// b 0x8328a2d8
	goto loc_8328A2D8;
loc_8328A44C:
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// rlwinm r11,r9,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// cmpwi cr6,r10,29
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 29, ctx.xer);
	// blt cr6,0x8328a320
	if (ctx.cr6.lt) goto loc_8328A320;
	// addic. r10,r10,-29
	ctx.xer.ca = ctx.r10.u32 > 28;
	ctx.r10.s64 = ctx.r10.s64 + -29;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x8328a478
	if (ctx.cr0.eq) goto loc_8328A478;
	// subfic r8,r10,3
	ctx.xer.ca = ctx.r10.u32 <= 3;
	ctx.r8.s64 = 3 - ctx.r10.s64;
	// slw r9,r5,r10
	ctx.r9.u64 = ctx.r10.u8 & 0x20 ? 0 : (ctx.r5.u32 << (ctx.r10.u8 & 0x3F));
	// srw r8,r5,r8
	ctx.r8.u64 = ctx.r8.u8 & 0x20 ? 0 : (ctx.r5.u32 >> (ctx.r8.u8 & 0x3F));
	// or r11,r8,r11
	ctx.r11.u64 = ctx.r8.u64 | ctx.r11.u64;
	// b 0x8328a47c
	goto loc_8328A47C;
loc_8328A478:
	// mr r9,r5
	ctx.r9.u64 = ctx.r5.u64;
loc_8328A47C:
	// lwz r5,0(r29)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// addi r29,r29,4
	ctx.r29.s64 = ctx.r29.s64 + 4;
	// b 0x8328a328
	goto loc_8328A328;
loc_8328A488:
	// rlwinm r9,r9,9,0,22
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 9) & 0xFFFFFE00;
loc_8328A48C:
	// srawi r8,r11,3
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x7) != 0);
	ctx.r8.s64 = ctx.r11.s32 >> 3;
	// subf r8,r7,r8
	ctx.r8.s64 = ctx.r8.s64 - ctx.r7.s64;
	// add r8,r8,r29
	ctx.r8.u64 = ctx.r8.u64 + ctx.r29.u64;
	// addi r8,r8,-8
	ctx.r8.s64 = ctx.r8.s64 + -8;
	// cmpw cr6,r6,r8
	ctx.cr6.compare<int32_t>(ctx.r6.s32, ctx.r8.s32, ctx.xer);
	// ble cr6,0x8328a528
	if (!ctx.cr6.gt) goto loc_8328A528;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// blt cr6,0x8328a3e8
	if (ctx.cr6.lt) goto loc_8328A3E8;
loc_8328A4AC:
	// addi r11,r10,1
	ctx.r11.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r11,32
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 32, ctx.xer);
	// blt cr6,0x8328a4c0
	if (ctx.cr6.lt) goto loc_8328A4C0;
	// addi r11,r11,-32
	ctx.r11.s64 = ctx.r11.s64 + -32;
	// addi r29,r29,4
	ctx.r29.s64 = ctx.r29.s64 + 4;
loc_8328A4C0:
	// addi r11,r11,7
	ctx.r11.s64 = ctx.r11.s64 + 7;
	// lwz r10,0(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// srawi r11,r11,3
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x7) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 3;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// subf r11,r10,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r10.s64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// add r11,r11,r29
	ctx.r11.u64 = ctx.r11.u64 + ctx.r29.u64;
	// addi r4,r11,-8
	ctx.r4.s64 = ctx.r11.s64 + -8;
	// bl 0x832f0da8
	ctx.lr = 0x8328A4E8;
	sub_832F0DA8(ctx, base);
	// lwz r11,0(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// lwz r11,32(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8328A504;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,0(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// lwz r11,28(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8328A520;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x8328a52c
	goto loc_8328A52C;
loc_8328A528:
	// li r3,-3
	ctx.r3.s64 = -3;
loc_8328A52C:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x833a01f0
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8328A534"))) PPC_WEAK_FUNC(sub_8328A534);
PPC_FUNC_IMPL(__imp__sub_8328A534) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8328A538"))) PPC_WEAK_FUNC(sub_8328A538);
PPC_FUNC_IMPL(__imp__sub_8328A538) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x833a0198
	ctx.lr = 0x8328A540;
	__savegprlr_24(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r24,0
	ctx.r24.s64 = 0;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// addic. r27,r5,-4
	ctx.xer.ca = ctx.r5.u32 > 3;
	ctx.r27.s64 = ctx.r5.s64 + -4;
	ctx.cr0.compare<int32_t>(ctx.r27.s32, 0, ctx.xer);
	// addi r30,r4,4
	ctx.r30.s64 = ctx.r4.s64 + 4;
	// mr r31,r24
	ctx.r31.u64 = ctx.r24.u64;
	// ble 0x8328a610
	if (!ctx.cr0.gt) goto loc_8328A610;
	// lis r10,-32219
	ctx.r10.s64 = -2111504384;
	// lis r11,-32219
	ctx.r11.s64 = -2111504384;
	// addi r25,r10,21420
	ctx.r25.s64 = ctx.r10.s64 + 21420;
	// addi r26,r11,21412
	ctx.r26.s64 = ctx.r11.s64 + 21412;
loc_8328A56C:
	// add r28,r31,r30
	ctx.r28.u64 = ctx.r31.u64 + ctx.r30.u64;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// li r5,7
	ctx.r5.s64 = 7;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x833a31f0
	ctx.lr = 0x8328A580;
	sub_833A31F0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x8328a5ac
	if (!ctx.cr0.eq) goto loc_8328A5AC;
	// add r11,r31,r30
	ctx.r11.u64 = ctx.r31.u64 + ctx.r30.u64;
	// addi r3,r11,16
	ctx.r3.s64 = ctx.r11.s64 + 16;
	// bl 0x833a3508
	ctx.lr = 0x8328A594;
	sub_833A3508(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x8328a5a4
	if (!ctx.cr0.eq) goto loc_8328A5A4;
	// stw r24,5300(r29)
	PPC_STORE_U32(ctx.r29.u32 + 5300, ctx.r24.u32);
	// b 0x8328a5ac
	goto loc_8328A5AC;
loc_8328A5A4:
	// li r11,3
	ctx.r11.s64 = 3;
	// stw r11,5300(r29)
	PPC_STORE_U32(ctx.r29.u32 + 5300, ctx.r11.u32);
loc_8328A5AC:
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// li r5,7
	ctx.r5.s64 = 7;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x833a31f0
	ctx.lr = 0x8328A5BC;
	sub_833A31F0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x8328a5f4
	if (!ctx.cr0.eq) goto loc_8328A5F4;
	// add r11,r31,r30
	ctx.r11.u64 = ctx.r31.u64 + ctx.r30.u64;
	// addi r3,r11,16
	ctx.r3.s64 = ctx.r11.s64 + 16;
	// bl 0x833a3508
	ctx.lr = 0x8328A5D0;
	sub_833A3508(ctx, base);
	// stw r3,5244(r29)
	PPC_STORE_U32(ctx.r29.u32 + 5244, ctx.r3.u32);
	// add r11,r31,r30
	ctx.r11.u64 = ctx.r31.u64 + ctx.r30.u64;
	// addi r3,r11,24
	ctx.r3.s64 = ctx.r11.s64 + 24;
	// bl 0x833a3508
	ctx.lr = 0x8328A5E0;
	sub_833A3508(ctx, base);
	// stw r3,5248(r29)
	PPC_STORE_U32(ctx.r29.u32 + 5248, ctx.r3.u32);
	// add r11,r31,r30
	ctx.r11.u64 = ctx.r31.u64 + ctx.r30.u64;
	// addi r3,r11,32
	ctx.r3.s64 = ctx.r11.s64 + 32;
	// bl 0x833a3508
	ctx.lr = 0x8328A5F0;
	sub_833A3508(ctx, base);
	// stw r3,5252(r29)
	PPC_STORE_U32(ctx.r29.u32 + 5252, ctx.r3.u32);
loc_8328A5F4:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x8328b5a0
	ctx.lr = 0x8328A5FC;
	sub_8328B5A0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x8328a610
	if (!ctx.cr0.eq) goto loc_8328A610;
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// cmpw cr6,r31,r27
	ctx.cr6.compare<int32_t>(ctx.r31.s32, ctx.r27.s32, ctx.xer);
	// blt cr6,0x8328a56c
	if (ctx.cr6.lt) goto loc_8328A56C;
loc_8328A610:
	// lwz r11,5244(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 5244);
	// cmpwi cr6,r11,8
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 8, ctx.xer);
	// bne cr6,0x8328a620
	if (!ctx.cr6.eq) goto loc_8328A620;
	// li r24,-1
	ctx.r24.s64 = -1;
loc_8328A620:
	// cmpwi cr6,r11,9
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 9, ctx.xer);
	// bne cr6,0x8328a62c
	if (!ctx.cr6.eq) goto loc_8328A62C;
	// li r24,-1
	ctx.r24.s64 = -1;
loc_8328A62C:
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x833a01e8
	__restgprlr_24(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8328A638"))) PPC_WEAK_FUNC(sub_8328A638);
PPC_FUNC_IMPL(__imp__sub_8328A638) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x833a01ac
	ctx.lr = 0x8328A640;
	__savegprlr_29(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// b 0x8328a6b0
	goto loc_8328A6B0;
loc_8328A64C:
	// li r5,-1
	ctx.r5.s64 = -1;
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x8328b648
	ctx.lr = 0x8328A658;
	sub_8328B648(ctx, base);
	// mr. r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// bne 0x8328a704
	if (!ctx.cr0.eq) goto loc_8328A704;
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// addi r6,r1,88
	ctx.r6.s64 = ctx.r1.s64 + 88;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,-3
	ctx.r4.s64 = ctx.r11.s64 + -3;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x832f0da8
	ctx.lr = 0x8328A678;
	sub_832F0DA8(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,32(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8328A694;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,28(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8328A6B0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8328A6B0:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lis r5,32767
	ctx.r5.s64 = 2147418112;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// ori r5,r5,65535
	ctx.r5.u64 = ctx.r5.u64 | 65535;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,24(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8328A6D4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r4,84(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmpwi cr6,r4,4
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 4, ctx.xer);
	// bge cr6,0x8328a64c
	if (!ctx.cr6.lt) goto loc_8328A64C;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,28(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8328A6FC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r29,0
	ctx.r29.s64 = 0;
	// b 0x8328a760
	goto loc_8328A760;
loc_8328A704:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8328b5a0
	ctx.lr = 0x8328A70C;
	sub_8328B5A0(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// addi r6,r1,88
	ctx.r6.s64 = ctx.r1.s64 + 88;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// subf r4,r11,r30
	ctx.r4.s64 = ctx.r30.s64 - ctx.r11.s64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x832f0da8
	ctx.lr = 0x8328A728;
	sub_832F0DA8(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,32(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8328A744;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,28(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8328A760;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8328A760:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x833a01fc
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8328A76C"))) PPC_WEAK_FUNC(sub_8328A76C);
PPC_FUNC_IMPL(__imp__sub_8328A76C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8328A770"))) PPC_WEAK_FUNC(sub_8328A770);
PPC_FUNC_IMPL(__imp__sub_8328A770) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x833a01a8
	ctx.lr = 0x8328A778;
	__savegprlr_28(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// b 0x8328a7ec
	goto loc_8328A7EC;
loc_8328A788:
	// li r5,-1
	ctx.r5.s64 = -1;
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x8328b648
	ctx.lr = 0x8328A794;
	sub_8328B648(ctx, base);
	// mr. r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// bne 0x8328a844
	if (!ctx.cr0.eq) goto loc_8328A844;
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// addi r6,r1,88
	ctx.r6.s64 = ctx.r1.s64 + 88;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,-3
	ctx.r4.s64 = ctx.r11.s64 + -3;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x832f0da8
	ctx.lr = 0x8328A7B4;
	sub_832F0DA8(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,32(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8328A7D0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,28(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8328A7EC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8328A7EC:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lis r5,32767
	ctx.r5.s64 = 2147418112;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// ori r5,r5,65535
	ctx.r5.u64 = ctx.r5.u64 | 65535;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,24(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8328A810;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r4,84(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmpwi cr6,r4,4
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 4, ctx.xer);
	// bge cr6,0x8328a788
	if (!ctx.cr6.lt) goto loc_8328A788;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,28(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8328A838;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r29,0
	ctx.r29.s64 = 0;
	// stw r29,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r29.u32);
	// b 0x8328a8ac
	goto loc_8328A8AC;
loc_8328A844:
	// lbz r11,3(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 3);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// ori r11,r11,256
	ctx.r11.u64 = ctx.r11.u64 | 256;
	// stw r11,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r11.u32);
	// bl 0x8328b5a0
	ctx.lr = 0x8328A858;
	sub_8328B5A0(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// addi r6,r1,88
	ctx.r6.s64 = ctx.r1.s64 + 88;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// subf r4,r11,r30
	ctx.r4.s64 = ctx.r30.s64 - ctx.r11.s64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x832f0da8
	ctx.lr = 0x8328A874;
	sub_832F0DA8(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,32(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8328A890;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,28(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8328A8AC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8328A8AC:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x833a01f8
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8328A8B8"))) PPC_WEAK_FUNC(sub_8328A8B8);
PPC_FUNC_IMPL(__imp__sub_8328A8B8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// lwz r11,24(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8328A8E8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cntlzw r11,r30
	ctx.r11.u64 = ctx.r30.u32 == 0 ? 32 : __builtin_clz(ctx.r30.u32);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// rlwinm r4,r11,27,31,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r11,32(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8328A908;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r3,84(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8328A924"))) PPC_WEAK_FUNC(sub_8328A924);
PPC_FUNC_IMPL(__imp__sub_8328A924) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8328A928"))) PPC_WEAK_FUNC(sub_8328A928);
PPC_FUNC_IMPL(__imp__sub_8328A928) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x833a01a8
	ctx.lr = 0x8328A930;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// bl 0x8328a8b8
	ctx.lr = 0x8328A944;
	sub_8328A8B8(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpw cr6,r3,r30
	ctx.cr6.compare<int32_t>(ctx.r3.s32, ctx.r30.s32, ctx.xer);
	// blt cr6,0x8328a954
	if (ctx.cr6.lt) goto loc_8328A954;
	// b 0x8328a968
	goto loc_8328A968;
loc_8328A954:
	// subf r5,r31,r30
	ctx.r5.s64 = ctx.r30.s64 - ctx.r31.s64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8328a8b8
	ctx.lr = 0x8328A964;
	sub_8328A8B8(ctx, base);
	// add r3,r3,r31
	ctx.r3.u64 = ctx.r3.u64 + ctx.r31.u64;
loc_8328A968:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x833a01f8
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8328A970"))) PPC_WEAK_FUNC(sub_8328A970);
PPC_FUNC_IMPL(__imp__sub_8328A970) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x833a0194
	ctx.lr = 0x8328A978;
	__savegprlr_23(ctx, base);
	// stfd f31,-88(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -88, ctx.f31.u64);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r25,0
	ctx.r25.s64 = 0;
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r25,5244(r3)
	PPC_STORE_U32(ctx.r3.u32 + 5244, ctx.r25.u32);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// stw r11,5332(r3)
	PPC_STORE_U32(ctx.r3.u32 + 5332, ctx.r11.u32);
	// mr r24,r4
	ctx.r24.u64 = ctx.r4.u64;
	// stw r25,5300(r3)
	PPC_STORE_U32(ctx.r3.u32 + 5300, ctx.r25.u32);
	// bl 0x83289ee8
	ctx.lr = 0x8328A9A0;
	sub_83289EE8(ctx, base);
	// lwz r11,4880(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4880);
	// addi r23,r3,5288
	ctx.r23.s64 = ctx.r3.s64 + 5288;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// lis r5,32767
	ctx.r5.s64 = 2147418112;
	// stw r11,4880(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4880, ctx.r11.u32);
	// addi r27,r3,4828
	ctx.r27.s64 = ctx.r3.s64 + 4828;
	// stw r25,5400(r3)
	PPC_STORE_U32(ctx.r3.u32 + 5400, ctx.r25.u32);
	// mr r6,r23
	ctx.r6.u64 = ctx.r23.u64;
	// stw r25,5404(r3)
	PPC_STORE_U32(ctx.r3.u32 + 5404, ctx.r25.u32);
	// ori r5,r5,65535
	ctx.r5.u64 = ctx.r5.u64 | 65535;
	// stw r25,4932(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4932, ctx.r25.u32);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// lwz r11,0(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 0);
	// lwz r11,24(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8328A9E4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r10,5288(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 5288);
	// rlwinm r11,r10,0,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFC;
	// subf r10,r11,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r11.s64;
	// rlwinm. r10,r10,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0xFFFFFFF8;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// lwzu r9,4(r11)
	ea = 4 + ctx.r11.u32;
	ctx.r9.u64 = PPC_LOAD_U32(ea);
	ctx.r11.u32 = ea;
	// addi r8,r11,4
	ctx.r8.s64 = ctx.r11.s64 + 4;
	// slw r11,r9,r10
	ctx.r11.u64 = ctx.r10.u8 & 0x20 ? 0 : (ctx.r9.u32 << (ctx.r10.u8 & 0x3F));
	// bne 0x8328aa08
	if (!ctx.cr0.eq) goto loc_8328AA08;
	// mr r11,r9
	ctx.r11.u64 = ctx.r9.u64;
loc_8328AA08:
	// lwz r31,0(r8)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	// addi r26,r8,4
	ctx.r26.s64 = ctx.r8.s64 + 4;
	// cmpwi cr6,r10,20
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 20, ctx.xer);
	// blt cr6,0x8328aa50
	if (ctx.cr6.lt) goto loc_8328AA50;
	// addic. r10,r10,-20
	ctx.xer.ca = ctx.r10.u32 > 19;
	ctx.r10.s64 = ctx.r10.s64 + -20;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x8328aa38
	if (ctx.cr0.eq) goto loc_8328AA38;
	// subfic r9,r10,12
	ctx.xer.ca = ctx.r10.u32 <= 12;
	ctx.r9.s64 = 12 - ctx.r10.s64;
	// srw r9,r31,r9
	ctx.r9.u64 = ctx.r9.u8 & 0x20 ? 0 : (ctx.r31.u32 >> (ctx.r9.u8 & 0x3F));
	// or r9,r9,r11
	ctx.r9.u64 = ctx.r9.u64 | ctx.r11.u64;
	// slw r11,r31,r10
	ctx.r11.u64 = ctx.r10.u8 & 0x20 ? 0 : (ctx.r31.u32 << (ctx.r10.u8 & 0x3F));
	// rlwinm r9,r9,12,20,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 12) & 0xFFF;
	// b 0x8328aa40
	goto loc_8328AA40;
loc_8328AA38:
	// rlwinm r9,r11,12,20,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 12) & 0xFFF;
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
loc_8328AA40:
	// stw r9,0(r27)
	PPC_STORE_U32(ctx.r27.u32 + 0, ctx.r9.u32);
	// lwz r31,0(r26)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// addi r26,r26,4
	ctx.r26.s64 = ctx.r26.s64 + 4;
	// b 0x8328aa60
	goto loc_8328AA60;
loc_8328AA50:
	// rlwinm r9,r11,12,20,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 12) & 0xFFF;
	// addi r10,r10,12
	ctx.r10.s64 = ctx.r10.s64 + 12;
	// stw r9,0(r27)
	PPC_STORE_U32(ctx.r27.u32 + 0, ctx.r9.u32);
	// rlwinm r11,r11,12,0,19
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 12) & 0xFFFFF000;
loc_8328AA60:
	// cmpwi cr6,r10,20
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 20, ctx.xer);
	// blt cr6,0x8328aaa0
	if (ctx.cr6.lt) goto loc_8328AAA0;
	// addic. r10,r10,-20
	ctx.xer.ca = ctx.r10.u32 > 19;
	ctx.r10.s64 = ctx.r10.s64 + -20;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x8328aa88
	if (ctx.cr0.eq) goto loc_8328AA88;
	// subfic r9,r10,12
	ctx.xer.ca = ctx.r10.u32 <= 12;
	ctx.r9.s64 = 12 - ctx.r10.s64;
	// srw r9,r31,r9
	ctx.r9.u64 = ctx.r9.u8 & 0x20 ? 0 : (ctx.r31.u32 >> (ctx.r9.u8 & 0x3F));
	// or r9,r9,r11
	ctx.r9.u64 = ctx.r9.u64 | ctx.r11.u64;
	// slw r11,r31,r10
	ctx.r11.u64 = ctx.r10.u8 & 0x20 ? 0 : (ctx.r31.u32 << (ctx.r10.u8 & 0x3F));
	// rlwinm r9,r9,12,20,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 12) & 0xFFF;
	// b 0x8328aa90
	goto loc_8328AA90;
loc_8328AA88:
	// rlwinm r9,r11,12,20,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 12) & 0xFFF;
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
loc_8328AA90:
	// stw r9,4(r27)
	PPC_STORE_U32(ctx.r27.u32 + 4, ctx.r9.u32);
	// lwz r31,0(r26)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// addi r26,r26,4
	ctx.r26.s64 = ctx.r26.s64 + 4;
	// b 0x8328aab0
	goto loc_8328AAB0;
loc_8328AAA0:
	// rlwinm r9,r11,12,20,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 12) & 0xFFF;
	// addi r10,r10,12
	ctx.r10.s64 = ctx.r10.s64 + 12;
	// rlwinm r11,r11,12,0,19
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 12) & 0xFFFFF000;
	// stw r9,4(r27)
	PPC_STORE_U32(ctx.r27.u32 + 4, ctx.r9.u32);
loc_8328AAB0:
	// cmpwi cr6,r10,28
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 28, ctx.xer);
	// blt cr6,0x8328aaf0
	if (ctx.cr6.lt) goto loc_8328AAF0;
	// addic. r10,r10,-28
	ctx.xer.ca = ctx.r10.u32 > 27;
	ctx.r10.s64 = ctx.r10.s64 + -28;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x8328aad8
	if (ctx.cr0.eq) goto loc_8328AAD8;
	// subfic r9,r10,4
	ctx.xer.ca = ctx.r10.u32 <= 4;
	ctx.r9.s64 = 4 - ctx.r10.s64;
	// srw r9,r31,r9
	ctx.r9.u64 = ctx.r9.u8 & 0x20 ? 0 : (ctx.r31.u32 >> (ctx.r9.u8 & 0x3F));
	// or r9,r9,r11
	ctx.r9.u64 = ctx.r9.u64 | ctx.r11.u64;
	// slw r11,r31,r10
	ctx.r11.u64 = ctx.r10.u8 & 0x20 ? 0 : (ctx.r31.u32 << (ctx.r10.u8 & 0x3F));
	// rlwinm r9,r9,4,28,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 4) & 0xF;
	// b 0x8328aae0
	goto loc_8328AAE0;
loc_8328AAD8:
	// rlwinm r9,r11,4,28,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xF;
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
loc_8328AAE0:
	// stw r9,5056(r30)
	PPC_STORE_U32(ctx.r30.u32 + 5056, ctx.r9.u32);
	// lwz r31,0(r26)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// addi r26,r26,4
	ctx.r26.s64 = ctx.r26.s64 + 4;
	// b 0x8328ab00
	goto loc_8328AB00;
loc_8328AAF0:
	// rlwinm r9,r11,4,28,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xF;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// rlwinm r11,r11,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// stw r9,5056(r30)
	PPC_STORE_U32(ctx.r30.u32 + 5056, ctx.r9.u32);
loc_8328AB00:
	// cmpwi cr6,r10,28
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 28, ctx.xer);
	// blt cr6,0x8328ab3c
	if (ctx.cr6.lt) goto loc_8328AB3C;
	// addic. r10,r10,-28
	ctx.xer.ca = ctx.r10.u32 > 27;
	ctx.r10.s64 = ctx.r10.s64 + -28;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x8328ab28
	if (ctx.cr0.eq) goto loc_8328AB28;
	// subfic r9,r10,4
	ctx.xer.ca = ctx.r10.u32 <= 4;
	ctx.r9.s64 = 4 - ctx.r10.s64;
	// srw r9,r31,r9
	ctx.r9.u64 = ctx.r9.u8 & 0x20 ? 0 : (ctx.r31.u32 >> (ctx.r9.u8 & 0x3F));
	// or r9,r9,r11
	ctx.r9.u64 = ctx.r9.u64 | ctx.r11.u64;
	// slw r11,r31,r10
	ctx.r11.u64 = ctx.r10.u8 & 0x20 ? 0 : (ctx.r31.u32 << (ctx.r10.u8 & 0x3F));
	// rlwinm r9,r9,4,28,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 4) & 0xF;
	// b 0x8328ab30
	goto loc_8328AB30;
loc_8328AB28:
	// rlwinm r9,r11,4,28,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xF;
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
loc_8328AB30:
	// lwz r31,0(r26)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// addi r26,r26,4
	ctx.r26.s64 = ctx.r26.s64 + 4;
	// b 0x8328ab48
	goto loc_8328AB48;
loc_8328AB3C:
	// rlwinm r9,r11,4,28,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xF;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// rlwinm r11,r11,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
loc_8328AB48:
	// stw r9,16(r27)
	PPC_STORE_U32(ctx.r27.u32 + 16, ctx.r9.u32);
	// cmpwi cr6,r10,14
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 14, ctx.xer);
	// blt cr6,0x8328ab8c
	if (ctx.cr6.lt) goto loc_8328AB8C;
	// addic. r10,r10,-14
	ctx.xer.ca = ctx.r10.u32 > 13;
	ctx.r10.s64 = ctx.r10.s64 + -14;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x8328ab74
	if (ctx.cr0.eq) goto loc_8328AB74;
	// subfic r9,r10,18
	ctx.xer.ca = ctx.r10.u32 <= 18;
	ctx.r9.s64 = 18 - ctx.r10.s64;
	// srw r9,r31,r9
	ctx.r9.u64 = ctx.r9.u8 & 0x20 ? 0 : (ctx.r31.u32 >> (ctx.r9.u8 & 0x3F));
	// or r9,r9,r11
	ctx.r9.u64 = ctx.r9.u64 | ctx.r11.u64;
	// slw r11,r31,r10
	ctx.r11.u64 = ctx.r10.u8 & 0x20 ? 0 : (ctx.r31.u32 << (ctx.r10.u8 & 0x3F));
	// rlwinm r9,r9,18,14,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 18) & 0x3FFFF;
	// b 0x8328ab7c
	goto loc_8328AB7C;
loc_8328AB74:
	// rlwinm r9,r11,18,14,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 18) & 0x3FFFF;
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
loc_8328AB7C:
	// stw r9,5060(r30)
	PPC_STORE_U32(ctx.r30.u32 + 5060, ctx.r9.u32);
	// lwz r31,0(r26)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// addi r26,r26,4
	ctx.r26.s64 = ctx.r26.s64 + 4;
	// b 0x8328ab9c
	goto loc_8328AB9C;
loc_8328AB8C:
	// rlwinm r9,r11,18,14,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 18) & 0x3FFFF;
	// addi r10,r10,18
	ctx.r10.s64 = ctx.r10.s64 + 18;
	// rlwinm r11,r11,18,0,13
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 18) & 0xFFFC0000;
	// stw r9,5060(r30)
	PPC_STORE_U32(ctx.r30.u32 + 5060, ctx.r9.u32);
loc_8328AB9C:
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r10,32
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 32, ctx.xer);
	// blt cr6,0x8328abbc
	if (ctx.cr6.lt) goto loc_8328ABBC;
	// addi r10,r10,-32
	ctx.r10.s64 = ctx.r10.s64 + -32;
	// slw r11,r31,r10
	ctx.r11.u64 = ctx.r10.u8 & 0x20 ? 0 : (ctx.r31.u32 << (ctx.r10.u8 & 0x3F));
	// lwz r31,0(r26)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// addi r26,r26,4
	ctx.r26.s64 = ctx.r26.s64 + 4;
	// b 0x8328abc0
	goto loc_8328ABC0;
loc_8328ABBC:
	// rlwinm r11,r11,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
loc_8328ABC0:
	// cmpwi cr6,r10,22
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 22, ctx.xer);
	// blt cr6,0x8328ac00
	if (ctx.cr6.lt) goto loc_8328AC00;
	// addic. r10,r10,-22
	ctx.xer.ca = ctx.r10.u32 > 21;
	ctx.r10.s64 = ctx.r10.s64 + -22;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x8328abe8
	if (ctx.cr0.eq) goto loc_8328ABE8;
	// subfic r9,r10,10
	ctx.xer.ca = ctx.r10.u32 <= 10;
	ctx.r9.s64 = 10 - ctx.r10.s64;
	// srw r9,r31,r9
	ctx.r9.u64 = ctx.r9.u8 & 0x20 ? 0 : (ctx.r31.u32 >> (ctx.r9.u8 & 0x3F));
	// or r9,r9,r11
	ctx.r9.u64 = ctx.r9.u64 | ctx.r11.u64;
	// slw r11,r31,r10
	ctx.r11.u64 = ctx.r10.u8 & 0x20 ? 0 : (ctx.r31.u32 << (ctx.r10.u8 & 0x3F));
	// rlwinm r9,r9,10,22,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 10) & 0x3FF;
	// b 0x8328abf0
	goto loc_8328ABF0;
loc_8328ABE8:
	// rlwinm r9,r11,10,22,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 10) & 0x3FF;
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
loc_8328ABF0:
	// stw r9,5064(r30)
	PPC_STORE_U32(ctx.r30.u32 + 5064, ctx.r9.u32);
	// lwz r31,0(r26)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// addi r26,r26,4
	ctx.r26.s64 = ctx.r26.s64 + 4;
	// b 0x8328ac10
	goto loc_8328AC10;
loc_8328AC00:
	// rlwinm r9,r11,10,22,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 10) & 0x3FF;
	// addi r10,r10,10
	ctx.r10.s64 = ctx.r10.s64 + 10;
	// rlwinm r11,r11,10,0,21
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 10) & 0xFFFFFC00;
	// stw r9,5064(r30)
	PPC_STORE_U32(ctx.r30.u32 + 5064, ctx.r9.u32);
loc_8328AC10:
	// rlwinm r9,r11,1,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0x1;
	// cmpwi cr6,r10,31
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 31, ctx.xer);
	// stw r9,5068(r30)
	PPC_STORE_U32(ctx.r30.u32 + 5068, ctx.r9.u32);
	// bne cr6,0x8328ac34
	if (!ctx.cr6.eq) goto loc_8328AC34;
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
	// lwz r31,0(r26)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// mr r10,r25
	ctx.r10.u64 = ctx.r25.u64;
	// addi r26,r26,4
	ctx.r26.s64 = ctx.r26.s64 + 4;
	// b 0x8328ac3c
	goto loc_8328AC3C;
loc_8328AC34:
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// rlwinm r11,r11,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
loc_8328AC3C:
	// rlwinm r9,r11,1,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0x1;
	// cmpwi cr6,r10,31
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 31, ctx.xer);
	// bne cr6,0x8328ac5c
	if (!ctx.cr6.eq) goto loc_8328AC5C;
	// mr r29,r31
	ctx.r29.u64 = ctx.r31.u64;
	// lwz r31,0(r26)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// mr r28,r25
	ctx.r28.u64 = ctx.r25.u64;
	// addi r26,r26,4
	ctx.r26.s64 = ctx.r26.s64 + 4;
	// b 0x8328ac64
	goto loc_8328AC64;
loc_8328AC5C:
	// addi r28,r10,1
	ctx.r28.s64 = ctx.r10.s64 + 1;
	// rlwinm r29,r11,1,0,30
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
loc_8328AC64:
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// lfs f31,-12580(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -12580);
	ctx.f31.f64 = double(temp.f32);
	// beq cr6,0x8328ad04
	if (ctx.cr6.eq) goto loc_8328AD04;
	// li r11,64
	ctx.r11.s64 = 64;
	// mr r10,r25
	ctx.r10.u64 = ctx.r25.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
loc_8328AC80:
	// cmpwi cr6,r28,24
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 24, ctx.xer);
	// blt cr6,0x8328acbc
	if (ctx.cr6.lt) goto loc_8328ACBC;
	// addic. r28,r28,-24
	ctx.xer.ca = ctx.r28.u32 > 23;
	ctx.r28.s64 = ctx.r28.s64 + -24;
	ctx.cr0.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// beq 0x8328aca8
	if (ctx.cr0.eq) goto loc_8328ACA8;
	// subfic r11,r28,8
	ctx.xer.ca = ctx.r28.u32 <= 8;
	ctx.r11.s64 = 8 - ctx.r28.s64;
	// srw r11,r31,r11
	ctx.r11.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r31.u32 >> (ctx.r11.u8 & 0x3F));
	// or r11,r11,r29
	ctx.r11.u64 = ctx.r11.u64 | ctx.r29.u64;
	// slw r29,r31,r28
	ctx.r29.u64 = ctx.r28.u8 & 0x20 ? 0 : (ctx.r31.u32 << (ctx.r28.u8 & 0x3F));
	// rlwinm r11,r11,8,24,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 8) & 0xFF;
	// b 0x8328acb0
	goto loc_8328ACB0;
loc_8328ACA8:
	// rlwinm r11,r29,8,24,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 8) & 0xFF;
	// mr r29,r31
	ctx.r29.u64 = ctx.r31.u64;
loc_8328ACB0:
	// lwz r31,0(r26)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// addi r26,r26,4
	ctx.r26.s64 = ctx.r26.s64 + 4;
	// b 0x8328acc8
	goto loc_8328ACC8;
loc_8328ACBC:
	// rlwinm r11,r29,8,24,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 8) & 0xFF;
	// addi r28,r28,8
	ctx.r28.s64 = ctx.r28.s64 + 8;
	// rlwinm r29,r29,8,0,23
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 8) & 0xFFFFFF00;
loc_8328ACC8:
	// clrldi r11,r11,32
	ctx.r11.u64 = ctx.r11.u64 & 0xFFFFFFFF;
	// lwz r9,4396(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4396);
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// lbzx r11,r9,r10
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r9.u32 + ctx.r10.u32);
	// frsp f0,f0
	ctx.f0.f64 = double(float(ctx.f0.f64));
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// extsb r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	// addi r11,r11,576
	ctx.r11.s64 = ctx.r11.s64 + 576;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// fmuls f0,f0,f31
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f31.f64));
	// stfsx f0,r11,r30
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + ctx.r30.u32, temp.u32);
	// bdnz 0x8328ac80
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8328AC80;
	// b 0x8328ad0c
	goto loc_8328AD0C;
loc_8328AD04:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x83289f00
	ctx.lr = 0x8328AD0C;
	sub_83289F00(ctx, base);
loc_8328AD0C:
	// rlwinm r10,r29,1,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 1) & 0x1;
	// cmpwi cr6,r28,31
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 31, ctx.xer);
	// bne cr6,0x8328ad2c
	if (!ctx.cr6.eq) goto loc_8328AD2C;
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
	// lwz r31,0(r26)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// mr r8,r25
	ctx.r8.u64 = ctx.r25.u64;
	// addi r26,r26,4
	ctx.r26.s64 = ctx.r26.s64 + 4;
	// b 0x8328ad34
	goto loc_8328AD34;
loc_8328AD2C:
	// addi r8,r28,1
	ctx.r8.s64 = ctx.r28.s64 + 1;
	// rlwinm r11,r29,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 1) & 0xFFFFFFFE;
loc_8328AD34:
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8328adcc
	if (ctx.cr6.eq) goto loc_8328ADCC;
	// li r10,64
	ctx.r10.s64 = 64;
	// mr r9,r25
	ctx.r9.u64 = ctx.r25.u64;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_8328AD48:
	// cmpwi cr6,r8,24
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 24, ctx.xer);
	// blt cr6,0x8328ad84
	if (ctx.cr6.lt) goto loc_8328AD84;
	// addic. r8,r8,-24
	ctx.xer.ca = ctx.r8.u32 > 23;
	ctx.r8.s64 = ctx.r8.s64 + -24;
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq 0x8328ad70
	if (ctx.cr0.eq) goto loc_8328AD70;
	// subfic r10,r8,8
	ctx.xer.ca = ctx.r8.u32 <= 8;
	ctx.r10.s64 = 8 - ctx.r8.s64;
	// srw r10,r31,r10
	ctx.r10.u64 = ctx.r10.u8 & 0x20 ? 0 : (ctx.r31.u32 >> (ctx.r10.u8 & 0x3F));
	// or r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 | ctx.r11.u64;
	// slw r11,r31,r8
	ctx.r11.u64 = ctx.r8.u8 & 0x20 ? 0 : (ctx.r31.u32 << (ctx.r8.u8 & 0x3F));
	// rlwinm r10,r10,8,24,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 8) & 0xFF;
	// b 0x8328ad78
	goto loc_8328AD78;
loc_8328AD70:
	// rlwinm r10,r11,8,24,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 8) & 0xFF;
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
loc_8328AD78:
	// lwz r31,0(r26)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// addi r26,r26,4
	ctx.r26.s64 = ctx.r26.s64 + 4;
	// b 0x8328ad90
	goto loc_8328AD90;
loc_8328AD84:
	// rlwinm r10,r11,8,24,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 8) & 0xFF;
	// addi r8,r8,8
	ctx.r8.s64 = ctx.r8.s64 + 8;
	// rlwinm r11,r11,8,0,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 8) & 0xFFFFFF00;
loc_8328AD90:
	// clrldi r10,r10,32
	ctx.r10.u64 = ctx.r10.u64 & 0xFFFFFFFF;
	// lwz r7,4396(r30)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4396);
	// std r10,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r10.u64);
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// lbzx r10,r7,r9
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r7.u32 + ctx.r9.u32);
	// frsp f0,f0
	ctx.f0.f64 = double(float(ctx.f0.f64));
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// extsb r10,r10
	ctx.r10.s64 = ctx.r10.s8;
	// addi r10,r10,640
	ctx.r10.s64 = ctx.r10.s64 + 640;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// fmuls f0,f0,f31
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f31.f64));
	// stfsx f0,r10,r30
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r10.u32 + ctx.r30.u32, temp.u32);
	// bdnz 0x8328ad48
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8328AD48;
	// b 0x8328add4
	goto loc_8328ADD4;
loc_8328ADCC:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x83289f18
	ctx.lr = 0x8328ADD4;
	sub_83289F18(ctx, base);
loc_8328ADD4:
	// lwz r10,0(r27)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// addi r9,r8,7
	ctx.r9.s64 = ctx.r8.s64 + 7;
	// lwz r11,4(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 4);
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// addi r10,r10,15
	ctx.r10.s64 = ctx.r10.s64 + 15;
	// addi r8,r11,15
	ctx.r8.s64 = ctx.r11.s64 + 15;
	// srawi r11,r10,4
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0xF) != 0);
	ctx.r11.s64 = ctx.r10.s32 >> 4;
	// srawi r10,r8,4
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0xF) != 0);
	ctx.r10.s64 = ctx.r8.s32 >> 4;
	// stw r11,8(r27)
	PPC_STORE_U32(ctx.r27.u32 + 8, ctx.r11.u32);
	// srawi r9,r9,3
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x7) != 0);
	ctx.r9.s64 = ctx.r9.s32 >> 3;
	// mullw r11,r10,r11
	ctx.r11.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r11.s32);
	// stw r10,12(r27)
	PPC_STORE_U32(ctx.r27.u32 + 12, ctx.r10.u32);
	// lwz r10,5060(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 5060);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// mr r5,r23
	ctx.r5.u64 = ctx.r23.u64;
	// stw r11,5216(r30)
	PPC_STORE_U32(ctx.r30.u32 + 5216, ctx.r11.u32);
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// stw r10,72(r27)
	PPC_STORE_U32(ctx.r27.u32 + 72, ctx.r10.u32);
	// lwz r11,5064(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 5064);
	// stw r11,76(r27)
	PPC_STORE_U32(ctx.r27.u32 + 76, ctx.r11.u32);
	// lwz r11,5056(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 5056);
	// stb r11,89(r27)
	PPC_STORE_U8(ctx.r27.u32 + 89, ctx.r11.u8);
	// lwz r11,5068(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 5068);
	// stb r11,90(r27)
	PPC_STORE_U8(ctx.r27.u32 + 90, ctx.r11.u8);
	// lwz r11,0(r23)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r23.u32 + 0);
	// subf r11,r11,r9
	ctx.r11.s64 = ctx.r9.s64 - ctx.r11.s64;
	// add r11,r11,r26
	ctx.r11.u64 = ctx.r11.u64 + ctx.r26.u64;
	// addi r4,r11,-8
	ctx.r4.s64 = ctx.r11.s64 + -8;
	// bl 0x832f0da8
	ctx.lr = 0x8328AE48;
	sub_832F0DA8(ctx, base);
	// lwz r11,0(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 0);
	// mr r5,r23
	ctx.r5.u64 = ctx.r23.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// lwz r11,32(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8328AE64;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,0(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 0);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// lwz r11,28(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8328AE80;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// lfd f31,-88(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -88);
	// b 0x833a01e4
	__restgprlr_23(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8328AE90"))) PPC_WEAK_FUNC(sub_8328AE90);
PPC_FUNC_IMPL(__imp__sub_8328AE90) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x833a01ac
	ctx.lr = 0x8328AE98;
	__savegprlr_29(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// addi r31,r3,5288
	ctx.r31.s64 = ctx.r3.s64 + 5288;
	// lis r5,32767
	ctx.r5.s64 = 2147418112;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// lwz r11,24(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// ori r5,r5,65535
	ctx.r5.u64 = ctx.r5.u64 | 65535;
	// li r4,1
	ctx.r4.s64 = 1;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8328AECC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r10,5288(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 5288);
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// rlwinm r11,r10,0,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFC;
	// mr r9,r10
	ctx.r9.u64 = ctx.r10.u64;
	// subf r10,r11,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r11.s64;
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// rlwinm r10,r10,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0xFFFFFFF8;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// addi r10,r10,7
	ctx.r10.s64 = ctx.r10.s64 + 7;
	// srawi r10,r10,3
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x7) != 0);
	ctx.r10.s64 = ctx.r10.s32 >> 3;
	// subf r10,r9,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r9.s64;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// addi r4,r11,-4
	ctx.r4.s64 = ctx.r11.s64 + -4;
	// bl 0x832f0da8
	ctx.lr = 0x8328AF08;
	sub_832F0DA8(ctx, base);
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r11,32(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8328AF24;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r11,28(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8328AF40;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8328a638
	ctx.lr = 0x8328AF48;
	sub_8328A638(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x833a01fc
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8328AF54"))) PPC_WEAK_FUNC(sub_8328AF54);
PPC_FUNC_IMPL(__imp__sub_8328AF54) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8328AF58"))) PPC_WEAK_FUNC(sub_8328AF58);
PPC_FUNC_IMPL(__imp__sub_8328AF58) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x833a0198
	ctx.lr = 0x8328AF60;
	__savegprlr_24(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r31,r5,-3
	ctx.r31.s64 = ctx.r5.s64 + -3;
	// lwz r28,5332(r3)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r3.u32 + 5332);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r26,r4
	ctx.r26.u64 = ctx.r4.u64;
	// li r25,0
	ctx.r25.s64 = 0;
	// li r24,0
	ctx.r24.s64 = 0;
	// li r30,4
	ctx.r30.s64 = 4;
	// cmpwi cr6,r31,4
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 4, ctx.xer);
	// ble cr6,0x8328afa4
	if (!ctx.cr6.gt) goto loc_8328AFA4;
loc_8328AF88:
	// add r3,r30,r26
	ctx.r3.u64 = ctx.r30.u64 + ctx.r26.u64;
	// bl 0x8328b5a0
	ctx.lr = 0x8328AF90;
	sub_8328B5A0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x8328afa4
	if (!ctx.cr0.eq) goto loc_8328AFA4;
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// cmpw cr6,r30,r31
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r31.s32, ctx.xer);
	// blt cr6,0x8328af88
	if (ctx.cr6.lt) goto loc_8328AF88;
loc_8328AFA4:
	// cmpw cr6,r30,r31
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r31.s32, ctx.xer);
	// bne cr6,0x8328afb0
	if (!ctx.cr6.eq) goto loc_8328AFB0;
	// li r24,-1
	ctx.r24.s64 = -1;
loc_8328AFB0:
	// cmpwi cr6,r28,1
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 1, ctx.xer);
	// bne cr6,0x8328afcc
	if (!ctx.cr6.eq) goto loc_8328AFCC;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8328a538
	ctx.lr = 0x8328AFC8;
	sub_8328A538(ctx, base);
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
loc_8328AFCC:
	// mulli r11,r28,12
	ctx.r11.s64 = ctx.r28.s64 * 12;
	// add r27,r11,r29
	ctx.r27.u64 = ctx.r11.u64 + ctx.r29.u64;
	// lwz r31,5336(r27)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r27.u32 + 5336);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x8328b0ac
	if (ctx.cr6.eq) goto loc_8328B0AC;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,24(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8328B000;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// lwz r5,84(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x833a1390
	ctx.lr = 0x8328B010;
	sub_833A1390(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,32(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8328B02C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmpw cr6,r11,r30
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r30.s32, ctx.xer);
	// bge cr6,0x8328b088
	if (!ctx.cr6.lt) goto loc_8328B088;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// subf r5,r11,r30
	ctx.r5.s64 = ctx.r30.s64 - ctx.r11.s64;
	// addi r6,r1,88
	ctx.r6.s64 = ctx.r1.s64 + 88;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,24(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 24);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8328B058;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r5,92(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// add r4,r11,r26
	ctx.r4.u64 = ctx.r11.u64 + ctx.r26.u64;
	// lwz r3,88(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// bl 0x833a1390
	ctx.lr = 0x8328B06C;
	sub_833A1390(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,32(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8328B088;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8328B088:
	// addi r11,r28,445
	ctx.r11.s64 = ctx.r28.s64 + 445;
	// mulli r11,r11,12
	ctx.r11.s64 = ctx.r11.s64 * 12;
	// lwzx r11,r11,r29
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r29.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8328b0ac
	if (ctx.cr6.eq) goto loc_8328B0AC;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// lwz r3,5344(r27)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r27.u32 + 5344);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8328B0AC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8328B0AC:
	// cmpwi cr6,r28,3
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 3, ctx.xer);
	// bne cr6,0x8328b0dc
	if (!ctx.cr6.eq) goto loc_8328B0DC;
	// lwz r3,5384(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 5384);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8328b0dc
	if (ctx.cr6.eq) goto loc_8328B0DC;
	// lwz r5,5388(r29)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r29.u32 + 5388);
	// cmpw cr6,r30,r5
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r5.s32, ctx.xer);
	// bge cr6,0x8328b0d0
	if (!ctx.cr6.lt) goto loc_8328B0D0;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
loc_8328B0D0:
	// stw r5,5392(r29)
	PPC_STORE_U32(ctx.r29.u32 + 5392, ctx.r5.u32);
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// bl 0x833a1390
	ctx.lr = 0x8328B0DC;
	sub_833A1390(ctx, base);
loc_8328B0DC:
	// cmpwi cr6,r25,0
	ctx.cr6.compare<int32_t>(ctx.r25.s32, 0, ctx.xer);
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bne cr6,0x8328b0ec
	if (!ctx.cr6.eq) goto loc_8328B0EC;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
loc_8328B0EC:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x833a01e8
	__restgprlr_24(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8328B0F4"))) PPC_WEAK_FUNC(sub_8328B0F4);
PPC_FUNC_IMPL(__imp__sub_8328B0F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8328B0F8"))) PPC_WEAK_FUNC(sub_8328B0F8);
PPC_FUNC_IMPL(__imp__sub_8328B0F8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x833a01ac
	ctx.lr = 0x8328B100;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r9,5280(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 5280);
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// lwz r10,4756(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4756);
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// addi r11,r3,4956
	ctx.r11.s64 = ctx.r3.s64 + 4956;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x8328b15c
	if (ctx.cr6.eq) goto loc_8328B15C;
	// lwz r9,5284(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 5284);
	// li r8,0
	ctx.r8.s64 = 0;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// stw r8,5280(r3)
	PPC_STORE_U32(ctx.r3.u32 + 5280, ctx.r8.u32);
	// stw r9,5284(r3)
	PPC_STORE_U32(ctx.r3.u32 + 5284, ctx.r9.u32);
	// lwz r9,12(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// stw r9,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r9.u32);
	// bne cr6,0x8328b150
	if (!ctx.cr6.eq) goto loc_8328B150;
	// li r3,-2
	ctx.r3.s64 = -2;
	// b 0x8328b1a8
	goto loc_8328B1A8;
loc_8328B150:
	// lwz r9,16(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// stw r9,16(r11)
	PPC_STORE_U32(ctx.r11.u32 + 16, ctx.r9.u32);
loc_8328B15C:
	// cntlzw r11,r10
	ctx.r11.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
	// rlwinm r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// addi r30,r11,-3
	ctx.r30.s64 = ctx.r11.s64 + -3;
	// b 0x8328b18c
	goto loc_8328B18C;
loc_8328B16C:
	// and. r11,r3,r29
	ctx.r11.u64 = ctx.r3.u64 & ctx.r29.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8328b1a0
	if (!ctx.cr0.eq) goto loc_8328B1A0;
	// li r5,4
	ctx.r5.s64 = 4;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8328a8b8
	ctx.lr = 0x8328B184;
	sub_8328A8B8(ctx, base);
	// cmpwi cr6,r3,4
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 4, ctx.xer);
	// bne cr6,0x8328b1a4
	if (!ctx.cr6.eq) goto loc_8328B1A4;
loc_8328B18C:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8328a638
	ctx.lr = 0x8328B194;
	sub_8328A638(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x8328b16c
	if (!ctx.cr0.eq) goto loc_8328B16C;
	// b 0x8328b1a4
	goto loc_8328B1A4;
loc_8328B1A0:
	// li r30,0
	ctx.r30.s64 = 0;
loc_8328B1A4:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
loc_8328B1A8:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x833a01fc
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8328B1B0"))) PPC_WEAK_FUNC(sub_8328B1B0);
PPC_FUNC_IMPL(__imp__sub_8328B1B0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x833a01a4
	ctx.lr = 0x8328B1B8;
	__savegprlr_27(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// addi r30,r3,5288
	ctx.r30.s64 = ctx.r3.s64 + 5288;
	// lis r5,32767
	ctx.r5.s64 = 2147418112;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// lwz r11,24(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// ori r5,r5,65535
	ctx.r5.u64 = ctx.r5.u64 | 65535;
	// li r4,1
	ctx.r4.s64 = 1;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8328B1EC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r4,5288(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 5288);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r5,5292(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 5292);
	// rlwinm r11,r4,0,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 0) & 0xFFFFFFFC;
	// subf r10,r11,r4
	ctx.r10.s64 = ctx.r4.s64 - ctx.r11.s64;
	// addi r29,r11,8
	ctx.r29.s64 = ctx.r11.s64 + 8;
	// rlwinm r28,r10,3,0,28
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0xFFFFFFF8;
	// bl 0x8328af58
	ctx.lr = 0x8328B20C;
	sub_8328AF58(ctx, base);
	// addi r11,r28,7
	ctx.r11.s64 = ctx.r28.s64 + 7;
	// lwz r10,5288(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 5288);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// srawi r11,r11,3
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x7) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 3;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// subf r11,r10,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r10.s64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// add r11,r11,r29
	ctx.r11.u64 = ctx.r11.u64 + ctx.r29.u64;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,-4
	ctx.r4.s64 = ctx.r11.s64 + -4;
	// bl 0x832f0da8
	ctx.lr = 0x8328B238;
	sub_832F0DA8(ctx, base);
	// lwz r11,0(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r11,32(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8328B254;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,0(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r11,28(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8328B270;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x8328a638
	ctx.lr = 0x8328B278;
	sub_8328A638(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x833a01f4
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8328B284"))) PPC_WEAK_FUNC(sub_8328B284);
PPC_FUNC_IMPL(__imp__sub_8328B284) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8328B288"))) PPC_WEAK_FUNC(sub_8328B288);
PPC_FUNC_IMPL(__imp__sub_8328B288) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x833a01ac
	ctx.lr = 0x8328B290;
	__savegprlr_29(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// bl 0x832896c8
	ctx.lr = 0x8328B2A0;
	sub_832896C8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x8328b2bc
	if (ctx.cr0.eq) goto loc_8328B2BC;
	// lis r4,-253
	ctx.r4.s64 = -16580608;
	// li r3,0
	ctx.r3.s64 = 0;
	// ori r4,r4,524
	ctx.r4.u64 = ctx.r4.u64 | 524;
loc_8328B2B4:
	// bl 0x8328c178
	ctx.lr = 0x8328B2B8;
	sub_8328C178(ctx, base);
	// b 0x8328b3fc
	goto loc_8328B3FC;
loc_8328B2BC:
	// li r11,0
	ctx.r11.s64 = 0;
	// lis r5,32767
	ctx.r5.s64 = 2147418112;
	// stw r11,5392(r30)
	PPC_STORE_U32(ctx.r30.u32 + 5392, ctx.r11.u32);
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// ori r5,r5,65535
	ctx.r5.u64 = ctx.r5.u64 | 65535;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,24(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8328B2E8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,28(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8328B304;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// lwz r10,84(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stw r11,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r11.u32);
	// stw r10,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r10.u32);
	// bl 0x83289e40
	ctx.lr = 0x8328B320;
	sub_83289E40(ctx, base);
	// cmpwi cr6,r3,2
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 2, ctx.xer);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bne cr6,0x8328b3d4
	if (!ctx.cr6.eq) goto loc_8328B3D4;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x82822bb8
	ctx.lr = 0x8328B334;
	sub_82822BB8(ctx, base);
	// b 0x8328b3fc
	goto loc_8328B3FC;
loc_8328B338:
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83289db0
	ctx.lr = 0x8328B344;
	sub_83289DB0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x8328b3f8
	if (ctx.cr0.eq) goto loc_8328B3F8;
	// clrlwi. r11,r3,30
	ctx.r11.u64 = ctx.r3.u32 & 0x3;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8328b3f8
	if (!ctx.cr0.eq) goto loc_8328B3F8;
	// rlwinm. r11,r3,0,24,24
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 0) & 0x80;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8328b3f4
	if (!ctx.cr0.eq) goto loc_8328B3F4;
	// cmpwi cr6,r3,4
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 4, ctx.xer);
	// beq cr6,0x8328b3c4
	if (ctx.cr6.eq) goto loc_8328B3C4;
	// cmpwi cr6,r3,8
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 8, ctx.xer);
	// beq cr6,0x8328b3b4
	if (ctx.cr6.eq) goto loc_8328B3B4;
	// cmpwi cr6,r3,16
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 16, ctx.xer);
	// beq cr6,0x8328b3a4
	if (ctx.cr6.eq) goto loc_8328B3A4;
	// cmpwi cr6,r3,32
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 32, ctx.xer);
	// beq cr6,0x8328b394
	if (ctx.cr6.eq) goto loc_8328B394;
	// cmpwi cr6,r3,64
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 64, ctx.xer);
	// bne cr6,0x8328b3d0
	if (!ctx.cr6.eq) goto loc_8328B3D0;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8328a970
	ctx.lr = 0x8328B390;
	sub_8328A970(ctx, base);
	// b 0x8328b3d0
	goto loc_8328B3D0;
loc_8328B394:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8328b1b0
	ctx.lr = 0x8328B3A0;
	sub_8328B1B0(ctx, base);
	// b 0x8328b3d0
	goto loc_8328B3D0;
loc_8328B3A4:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8328ae90
	ctx.lr = 0x8328B3B0;
	sub_8328AE90(ctx, base);
	// b 0x8328b3d0
	goto loc_8328B3D0;
loc_8328B3B4:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x83289f38
	ctx.lr = 0x8328B3C0;
	sub_83289F38(ctx, base);
	// b 0x8328b3d0
	goto loc_8328B3D0;
loc_8328B3C4:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8328a0f0
	ctx.lr = 0x8328B3D0;
	sub_8328A0F0(ctx, base);
loc_8328B3D0:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
loc_8328B3D4:
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// li r4,-1
	ctx.r4.s64 = -1;
	// bl 0x8328b0f8
	ctx.lr = 0x8328B3E0;
	sub_8328B0F8(ctx, base);
	// mr. r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// beq 0x8328b338
	if (ctx.cr0.eq) goto loc_8328B338;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// b 0x8328b2b4
	goto loc_8328B2B4;
loc_8328B3F4:
	// li r29,-2
	ctx.r29.s64 = -2;
loc_8328B3F8:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
loc_8328B3FC:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x833a01fc
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8328B404"))) PPC_WEAK_FUNC(sub_8328B404);
PPC_FUNC_IMPL(__imp__sub_8328B404) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8328B408"))) PPC_WEAK_FUNC(sub_8328B408);
PPC_FUNC_IMPL(__imp__sub_8328B408) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x833a01a8
	ctx.lr = 0x8328B410;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// lwz r3,0(r4)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// lwz r4,4(r4)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// bl 0x832eed98
	ctx.lr = 0x8328B42C;
	sub_832EED98(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// bne 0x8328b43c
	if (!ctx.cr0.eq) goto loc_8328B43C;
	// li r3,-1
	ctx.r3.s64 = -1;
	// b 0x8328b488
	goto loc_8328B488;
loc_8328B43C:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8328b288
	ctx.lr = 0x8328B448;
	sub_8328B288(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,36(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8328B464;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// subf r11,r3,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r3.s64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r11.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8328B484;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
loc_8328B488:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x833a01f8
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8328B490"))) PPC_WEAK_FUNC(sub_8328B490);
PPC_FUNC_IMPL(__imp__sub_8328B490) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// li r11,256
	ctx.r11.s64 = 256;
	// li r10,0
	ctx.r10.s64 = 0;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
loc_8328B49C:
	// ori r11,r10,256
	ctx.r11.u64 = ctx.r10.u64 | 256;
	// cmplwi cr6,r11,256
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 256, ctx.xer);
	// bne cr6,0x8328b4b0
	if (!ctx.cr6.eq) goto loc_8328B4B0;
	// li r11,4
	ctx.r11.s64 = 4;
	// b 0x8328b528
	goto loc_8328B528;
loc_8328B4B0:
	// cmplwi cr6,r11,257
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 257, ctx.xer);
	// bne cr6,0x8328b4c0
	if (!ctx.cr6.eq) goto loc_8328B4C0;
	// li r11,3
	ctx.r11.s64 = 3;
	// b 0x8328b528
	goto loc_8328B528;
loc_8328B4C0:
	// ble cr6,0x8328b4d4
	if (!ctx.cr6.gt) goto loc_8328B4D4;
	// cmplwi cr6,r11,431
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 431, ctx.xer);
	// bgt cr6,0x8328b4d4
	if (ctx.cr6.gt) goto loc_8328B4D4;
	// li r11,1
	ctx.r11.s64 = 1;
	// b 0x8328b528
	goto loc_8328B528;
loc_8328B4D4:
	// cmplwi cr6,r11,434
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 434, ctx.xer);
	// bne cr6,0x8328b4e4
	if (!ctx.cr6.eq) goto loc_8328B4E4;
	// li r11,32
	ctx.r11.s64 = 32;
	// b 0x8328b528
	goto loc_8328B528;
loc_8328B4E4:
	// cmplwi cr6,r11,435
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 435, ctx.xer);
	// bne cr6,0x8328b4f4
	if (!ctx.cr6.eq) goto loc_8328B4F4;
	// li r11,64
	ctx.r11.s64 = 64;
	// b 0x8328b528
	goto loc_8328B528;
loc_8328B4F4:
	// cmplwi cr6,r11,437
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 437, ctx.xer);
	// bne cr6,0x8328b504
	if (!ctx.cr6.eq) goto loc_8328B504;
	// li r11,16
	ctx.r11.s64 = 16;
	// b 0x8328b528
	goto loc_8328B528;
loc_8328B504:
	// cmplwi cr6,r11,439
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 439, ctx.xer);
	// bne cr6,0x8328b514
	if (!ctx.cr6.eq) goto loc_8328B514;
	// li r11,128
	ctx.r11.s64 = 128;
	// b 0x8328b528
	goto loc_8328B528;
loc_8328B514:
	// addi r11,r11,-440
	ctx.r11.s64 = ctx.r11.s64 + -440;
	// li r9,8
	ctx.r9.s64 = 8;
	// addic r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// subfe r11,r11,r11
	temp.u8 = (~ctx.r11.u32 + ctx.r11.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r11.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 & ctx.r9.u64;
loc_8328B528:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// stbx r11,r10,r3
	PPC_STORE_U8(ctx.r10.u32 + ctx.r3.u32, ctx.r11.u8);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// bdnz 0x8328b49c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8328B49C;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8328B53C"))) PPC_WEAK_FUNC(sub_8328B53C);
PPC_FUNC_IMPL(__imp__sub_8328B53C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8328B540"))) PPC_WEAK_FUNC(sub_8328B540);
PPC_FUNC_IMPL(__imp__sub_8328B540) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-352(r1)
	ea = -352 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8328b490
	ctx.lr = 0x8328B554;
	sub_8328B490(ctx, base);
	// lis r10,-32219
	ctx.r10.s64 = -2111504384;
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// addi r10,r10,21432
	ctx.r10.s64 = ctx.r10.s64 + 21432;
	// addi r8,r11,256
	ctx.r8.s64 = ctx.r11.s64 + 256;
loc_8328B564:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r7,0(r10)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// subf. r9,r7,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r7.s64;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x8328b584
	if (!ctx.cr0.eq) goto loc_8328B584;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpw cr6,r11,r8
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r8.s32, ctx.xer);
	// bne cr6,0x8328b564
	if (!ctx.cr6.eq) goto loc_8328B564;
loc_8328B584:
	// subfic r11,r9,0
	ctx.xer.ca = ctx.r9.u32 <= 0;
	ctx.r11.s64 = 0 - ctx.r9.s64;
	// subfe r3,r11,r11
	temp.u8 = (~ctx.r11.u32 + ctx.r11.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r3.u64 = ~ctx.r11.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// addi r1,r1,352
	ctx.r1.s64 = ctx.r1.s64 + 352;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8328B59C"))) PPC_WEAK_FUNC(sub_8328B59C);
PPC_FUNC_IMPL(__imp__sub_8328B59C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8328B5A0"))) PPC_WEAK_FUNC(sub_8328B5A0);
PPC_FUNC_IMPL(__imp__sub_8328B5A0) {
	PPC_FUNC_PROLOGUE();
	// lbz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 0);
	// lbz r10,1(r3)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r3.u32 + 1);
	// rotlwi r11,r11,8
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 8);
	// lbz r9,2(r3)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r3.u32 + 2);
	// or r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 | ctx.r10.u64;
	// rlwinm r11,r11,8,0,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 8) & 0xFFFFFF00;
	// or r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 | ctx.r9.u64;
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x8328b5cc
	if (ctx.cr6.eq) goto loc_8328B5CC;
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_8328B5CC:
	// lis r11,-32219
	ctx.r11.s64 = -2111504384;
	// lbz r10,3(r3)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r3.u32 + 3);
	// addi r11,r11,21432
	ctx.r11.s64 = ctx.r11.s64 + 21432;
	// lbzx r3,r10,r11
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r10.u32 + ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8328B5E0"))) PPC_WEAK_FUNC(sub_8328B5E0);
PPC_FUNC_IMPL(__imp__sub_8328B5E0) {
	PPC_FUNC_PROLOGUE();
	// li r10,-256
	ctx.r10.s64 = -256;
	// addi r6,r3,-1
	ctx.r6.s64 = ctx.r3.s64 + -1;
	// li r11,0
	ctx.r11.s64 = 0;
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// ble cr6,0x8328b638
	if (!ctx.cr6.gt) goto loc_8328B638;
	// lis r8,-32219
	ctx.r8.s64 = -2111504384;
	// mr r9,r6
	ctx.r9.u64 = ctx.r6.u64;
	// addi r7,r8,21432
	ctx.r7.s64 = ctx.r8.s64 + 21432;
loc_8328B600:
	// lbz r8,0(r9)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r9.u32 + 0);
	// lis r3,256
	ctx.r3.s64 = 16777216;
	// or r8,r8,r10
	ctx.r8.u64 = ctx.r8.u64 | ctx.r10.u64;
	// rlwinm r10,r8,8,0,23
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 8) & 0xFFFFFF00;
	// cmplw cr6,r10,r3
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r3.u32, ctx.xer);
	// bne cr6,0x8328b628
	if (!ctx.cr6.eq) goto loc_8328B628;
	// rlwinm r8,r8,8,24,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 8) & 0xFF;
	// lbzx r8,r8,r7
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r8.u32 + ctx.r7.u32);
	// and. r8,r8,r5
	ctx.r8.u64 = ctx.r8.u64 & ctx.r5.u64;
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// bne 0x8328b640
	if (!ctx.cr0.eq) goto loc_8328B640;
loc_8328B628:
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r9,r9,-1
	ctx.r9.s64 = ctx.r9.s64 + -1;
	// cmpw cr6,r11,r4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r4.s32, ctx.xer);
	// blt cr6,0x8328b600
	if (ctx.cr6.lt) goto loc_8328B600;
loc_8328B638:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_8328B640:
	// subf r3,r11,r6
	ctx.r3.s64 = ctx.r6.s64 - ctx.r11.s64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8328B648"))) PPC_WEAK_FUNC(sub_8328B648);
PPC_FUNC_IMPL(__imp__sub_8328B648) {
	PPC_FUNC_PROLOGUE();
	// li r10,-256
	ctx.r10.s64 = -256;
	// li r11,0
	ctx.r11.s64 = 0;
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// ble cr6,0x8328b698
	if (!ctx.cr6.gt) goto loc_8328B698;
	// lis r9,-32219
	ctx.r9.s64 = -2111504384;
	// addi r7,r9,21432
	ctx.r7.s64 = ctx.r9.s64 + 21432;
loc_8328B660:
	// lbzx r8,r11,r3
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + ctx.r3.u32);
	// add r9,r11,r3
	ctx.r9.u64 = ctx.r11.u64 + ctx.r3.u64;
	// li r6,128
	ctx.r6.s64 = 128;
	// dcbt r6,r9
	// cmplwi cr6,r10,256
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 256, ctx.xer);
	// bne cr6,0x8328b684
	if (!ctx.cr6.eq) goto loc_8328B684;
	// lbzx r6,r8,r7
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r8.u32 + ctx.r7.u32);
	// and. r6,r6,r5
	ctx.r6.u64 = ctx.r6.u64 & ctx.r5.u64;
	ctx.cr0.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// bne 0x8328b6a0
	if (!ctx.cr0.eq) goto loc_8328B6A0;
loc_8328B684:
	// or r10,r8,r10
	ctx.r10.u64 = ctx.r8.u64 | ctx.r10.u64;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// rlwinm r10,r10,8,0,23
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 8) & 0xFFFFFF00;
	// cmpw cr6,r11,r4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r4.s32, ctx.xer);
	// blt cr6,0x8328b660
	if (ctx.cr6.lt) goto loc_8328B660;
loc_8328B698:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_8328B6A0:
	// addi r3,r9,-3
	ctx.r3.s64 = ctx.r9.s64 + -3;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8328B6A8"))) PPC_WEAK_FUNC(sub_8328B6A8);
PPC_FUNC_IMPL(__imp__sub_8328B6A8) {
	PPC_FUNC_PROLOGUE();
	// cmpdi cr6,r5,0
	ctx.cr6.compare<int64_t>(ctx.r5.s64, 0, ctx.xer);
	// bne cr6,0x8328b6d4
	if (!ctx.cr6.eq) goto loc_8328B6D4;
	// xor r11,r3,r4
	ctx.r11.u64 = ctx.r3.u64 ^ ctx.r4.u64;
	// cmpdi cr6,r11,0
	ctx.cr6.compare<int64_t>(ctx.r11.s64, 0, ctx.xer);
	// blt cr6,0x8328b6c8
	if (ctx.cr6.lt) goto loc_8328B6C8;
	// li r3,-1
	ctx.r3.s64 = -1;
	// clrldi r3,r3,1
	ctx.r3.u64 = ctx.r3.u64 & 0x7FFFFFFFFFFFFFFF;
	// blr 
	return;
loc_8328B6C8:
	// li r3,1
	ctx.r3.s64 = 1;
	// rldicr r3,r3,63,63
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r3.u64, 63) & 0xFFFFFFFFFFFFFFFF;
	// blr 
	return;
loc_8328B6D4:
	// li r11,1
	ctx.r11.s64 = 1;
	// cmpdi cr6,r3,0
	ctx.cr6.compare<int64_t>(ctx.r3.s64, 0, ctx.xer);
	// bge cr6,0x8328b6e8
	if (!ctx.cr6.lt) goto loc_8328B6E8;
	// neg r3,r3
	ctx.r3.s64 = -ctx.r3.s64;
	// li r11,-1
	ctx.r11.s64 = -1;
loc_8328B6E8:
	// cmpdi cr6,r4,0
	ctx.cr6.compare<int64_t>(ctx.r4.s64, 0, ctx.xer);
	// bge cr6,0x8328b6f8
	if (!ctx.cr6.lt) goto loc_8328B6F8;
	// neg r4,r4
	ctx.r4.s64 = -ctx.r4.s64;
	// neg r11,r11
	ctx.r11.s64 = -ctx.r11.s64;
loc_8328B6F8:
	// cmpdi cr6,r5,0
	ctx.cr6.compare<int64_t>(ctx.r5.s64, 0, ctx.xer);
	// bge cr6,0x8328b708
	if (!ctx.cr6.lt) goto loc_8328B708;
	// neg r5,r5
	ctx.r5.s64 = -ctx.r5.s64;
	// neg r11,r11
	ctx.r11.s64 = -ctx.r11.s64;
loc_8328B708:
	// rldicl r10,r5,1,63
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r5.u64, 1) & 0x1;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// add r11,r10,r5
	ctx.r11.u64 = ctx.r10.u64 + ctx.r5.u64;
	// mulld r9,r3,r4
	ctx.r9.s64 = ctx.r3.s64 * ctx.r4.s64;
	// sradi r11,r11,1
	ctx.xer.ca = (ctx.r11.s64 < 0) & ((ctx.r11.u64 & 0x1) != 0);
	ctx.r11.s64 = ctx.r11.s64 >> 1;
	// add r11,r9,r11
	ctx.r11.u64 = ctx.r9.u64 + ctx.r11.u64;
	// divd r3,r11,r5
	ctx.r3.s64 = ctx.r11.s64 / ctx.r5.s64;
	// bgelr cr6
	if (!ctx.cr6.lt) return;
	// neg r3,r3
	ctx.r3.s64 = -ctx.r3.s64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8328B730"))) PPC_WEAK_FUNC(sub_8328B730);
PPC_FUNC_IMPL(__imp__sub_8328B730) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// bl 0x832896c8
	ctx.lr = 0x8328B750;
	sub_832896C8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x8328b76c
	if (ctx.cr0.eq) goto loc_8328B76C;
	// lis r4,-253
	ctx.r4.s64 = -16580608;
	// li r3,0
	ctx.r3.s64 = 0;
	// ori r4,r4,524
	ctx.r4.u64 = ctx.r4.u64 | 524;
	// bl 0x8328c178
	ctx.lr = 0x8328B768;
	sub_8328C178(ctx, base);
	// b 0x8328b780
	goto loc_8328B780;
loc_8328B76C:
	// addi r4,r31,4828
	ctx.r4.s64 = ctx.r31.s64 + 4828;
	// li r5,128
	ctx.r5.s64 = 128;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x833a1390
	ctx.lr = 0x8328B77C;
	sub_833A1390(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
loc_8328B780:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8328B798"))) PPC_WEAK_FUNC(sub_8328B798);
PPC_FUNC_IMPL(__imp__sub_8328B798) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// bl 0x832896c8
	ctx.lr = 0x8328B7B8;
	sub_832896C8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// li r3,0
	ctx.r3.s64 = 0;
	// beq 0x8328b7d4
	if (ctx.cr0.eq) goto loc_8328B7D4;
	// lis r4,-253
	ctx.r4.s64 = -16580608;
	// ori r4,r4,525
	ctx.r4.u64 = ctx.r4.u64 | 525;
	// bl 0x8328c178
	ctx.lr = 0x8328B7D0;
	sub_8328C178(ctx, base);
	// b 0x8328b7dc
	goto loc_8328B7DC;
loc_8328B7D4:
	// lwz r11,5060(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 5060);
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
loc_8328B7DC:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8328B7F4"))) PPC_WEAK_FUNC(sub_8328B7F4);
PPC_FUNC_IMPL(__imp__sub_8328B7F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8328B7F8"))) PPC_WEAK_FUNC(sub_8328B7F8);
PPC_FUNC_IMPL(__imp__sub_8328B7F8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x833a01a8
	ctx.lr = 0x8328B800;
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
	// bl 0x832896c8
	ctx.lr = 0x8328B818;
	sub_832896C8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x8328b834
	if (ctx.cr0.eq) goto loc_8328B834;
	// lis r4,-253
	ctx.r4.s64 = -16580608;
	// li r3,0
	ctx.r3.s64 = 0;
	// ori r4,r4,527
	ctx.r4.u64 = ctx.r4.u64 | 527;
	// bl 0x8328c178
	ctx.lr = 0x8328B830;
	sub_8328C178(ctx, base);
	// b 0x8328b87c
	goto loc_8328B87C;
loc_8328B834:
	// lwz r11,5064(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 5064);
	// lis r10,3
	ctx.r10.s64 = 196608;
	// rlwinm r11,r11,11,0,20
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 11) & 0xFFFFF800;
	// ori r10,r10,65535
	ctx.r10.u64 = ctx.r10.u64 | 65535;
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
	// lwz r11,5080(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 5080);
	// stw r11,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r11.u32);
	// lwz r11,5060(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 5060);
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// bne cr6,0x8328b864
	if (!ctx.cr6.eq) goto loc_8328B864;
	// li r11,-1
	ctx.r11.s64 = -1;
	// b 0x8328b874
	goto loc_8328B874;
loc_8328B864:
	// lwz r10,5080(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 5080);
	// li r9,1800
	ctx.r9.s64 = 1800;
	// mullw r11,r10,r11
	ctx.r11.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r11.s32);
	// divw r11,r11,r9
	ctx.r11.s32 = ctx.r11.s32 / ctx.r9.s32;
loc_8328B874:
	// stw r11,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r11.u32);
	// li r3,0
	ctx.r3.s64 = 0;
loc_8328B87C:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x833a01f8
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8328B884"))) PPC_WEAK_FUNC(sub_8328B884);
PPC_FUNC_IMPL(__imp__sub_8328B884) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8328B888"))) PPC_WEAK_FUNC(sub_8328B888);
PPC_FUNC_IMPL(__imp__sub_8328B888) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x833a01ac
	ctx.lr = 0x8328B890;
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
	// bl 0x832896c8
	ctx.lr = 0x8328B8A4;
	sub_832896C8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// li r3,0
	ctx.r3.s64 = 0;
	// beq 0x8328b8c0
	if (ctx.cr0.eq) goto loc_8328B8C0;
	// lis r4,-253
	ctx.r4.s64 = -16580608;
	// ori r4,r4,526
	ctx.r4.u64 = ctx.r4.u64 | 526;
	// bl 0x8328c178
	ctx.lr = 0x8328B8BC;
	sub_8328C178(ctx, base);
	// b 0x8328b8d0
	goto loc_8328B8D0;
loc_8328B8C0:
	// lwz r11,5072(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 5072);
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
	// lwz r11,5076(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 5076);
	// stw r11,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r11.u32);
loc_8328B8D0:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x833a01fc
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8328B8D8"))) PPC_WEAK_FUNC(sub_8328B8D8);
PPC_FUNC_IMPL(__imp__sub_8328B8D8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// std r31,-8(r1)
	PPC_STORE_U64(ctx.r1.u32 + -8, ctx.r31.u64);
	// rlwinm r11,r3,0,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 0) & 0xFFFFFFFC;
	// subf r10,r11,r3
	ctx.r10.s64 = ctx.r3.s64 - ctx.r11.s64;
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
	// beq 0x8328b90c
	if (ctx.cr0.eq) goto loc_8328B90C;
	// subfic r7,r10,32
	ctx.xer.ca = ctx.r10.u32 <= 32;
	ctx.r7.s64 = 32 - ctx.r10.s64;
	// srw r7,r9,r7
	ctx.r7.u64 = ctx.r7.u8 & 0x20 ? 0 : (ctx.r9.u32 >> (ctx.r7.u8 & 0x3F));
	// or r11,r7,r11
	ctx.r11.u64 = ctx.r7.u64 | ctx.r11.u64;
	// slw r9,r9,r10
	ctx.r9.u64 = ctx.r10.u8 & 0x20 ? 0 : (ctx.r9.u32 << (ctx.r10.u8 & 0x3F));
loc_8328B90C:
	// lwz r7,0(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	// addi r6,r8,4
	ctx.r6.s64 = ctx.r8.s64 + 4;
	// cmplwi cr6,r11,257
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 257, ctx.xer);
	// bne cr6,0x8328bb50
	if (!ctx.cr6.eq) goto loc_8328BB50;
	// cmpwi cr6,r10,27
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 27, ctx.xer);
	// blt cr6,0x8328b940
	if (ctx.cr6.lt) goto loc_8328B940;
	// addic. r11,r10,-27
	ctx.xer.ca = ctx.r10.u32 > 26;
	ctx.r11.s64 = ctx.r10.s64 + -27;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// slw r10,r7,r11
	ctx.r10.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r7.u32 << (ctx.r11.u8 & 0x3F));
	// bne 0x8328b934
	if (!ctx.cr0.eq) goto loc_8328B934;
	// mr r10,r7
	ctx.r10.u64 = ctx.r7.u64;
loc_8328B934:
	// lwz r7,0(r6)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	// addi r6,r6,4
	ctx.r6.s64 = ctx.r6.s64 + 4;
	// b 0x8328b948
	goto loc_8328B948;
loc_8328B940:
	// addi r11,r10,5
	ctx.r11.s64 = ctx.r10.s64 + 5;
	// rlwinm r10,r9,5,0,26
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 5) & 0xFFFFFFE0;
loc_8328B948:
	// rlwinm r9,r10,1,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0x1;
	// cmpwi cr6,r11,31
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 31, ctx.xer);
	// bne cr6,0x8328b968
	if (!ctx.cr6.eq) goto loc_8328B968;
	// mr r10,r7
	ctx.r10.u64 = ctx.r7.u64;
	// lwz r7,0(r6)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r6,r6,4
	ctx.r6.s64 = ctx.r6.s64 + 4;
	// b 0x8328b970
	goto loc_8328B970;
loc_8328B968:
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// rlwinm r10,r10,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
loc_8328B970:
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x8328bb50
	if (!ctx.cr6.eq) goto loc_8328BB50;
	// rlwinm r8,r10,1,31,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0x1;
	// cmpwi cr6,r11,31
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 31, ctx.xer);
	// bne cr6,0x8328b998
	if (!ctx.cr6.eq) goto loc_8328B998;
	// mr r9,r7
	ctx.r9.u64 = ctx.r7.u64;
	// lwz r7,0(r6)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r6,r6,4
	ctx.r6.s64 = ctx.r6.s64 + 4;
	// b 0x8328b9a0
	goto loc_8328B9A0;
loc_8328B998:
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// rlwinm r9,r10,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
loc_8328B9A0:
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x8328bb50
	if (ctx.cr6.eq) goto loc_8328BB50;
	// rlwinm r10,r9,6,26,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 6) & 0x3F;
	// cmpwi cr6,r11,26
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 26, ctx.xer);
	// ble cr6,0x8328b9c0
	if (!ctx.cr6.gt) goto loc_8328B9C0;
	// subfic r8,r11,58
	ctx.xer.ca = ctx.r11.u32 <= 58;
	ctx.r8.s64 = 58 - ctx.r11.s64;
	// srw r8,r7,r8
	ctx.r8.u64 = ctx.r8.u8 & 0x20 ? 0 : (ctx.r7.u32 >> (ctx.r8.u8 & 0x3F));
	// or r10,r8,r10
	ctx.r10.u64 = ctx.r8.u64 | ctx.r10.u64;
loc_8328B9C0:
	// cmplwi cr6,r10,11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 11, ctx.xer);
	// beq cr6,0x8328b9ec
	if (ctx.cr6.eq) goto loc_8328B9EC;
	// cmplwi cr6,r10,21
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 21, ctx.xer);
	// ble cr6,0x8328bb50
	if (!ctx.cr6.gt) goto loc_8328BB50;
	// cmplwi cr6,r10,23
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 23, ctx.xer);
	// bgt cr6,0x8328bb50
	if (ctx.cr6.gt) goto loc_8328BB50;
	// addi r11,r11,5
	ctx.r11.s64 = ctx.r11.s64 + 5;
	// cmpwi cr6,r11,32
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 32, ctx.xer);
	// bge cr6,0x8328b9f8
	if (!ctx.cr6.lt) goto loc_8328B9F8;
	// rlwinm r9,r9,5,0,26
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 5) & 0xFFFFFFE0;
	// b 0x8328ba10
	goto loc_8328BA10;
loc_8328B9EC:
	// addi r11,r11,6
	ctx.r11.s64 = ctx.r11.s64 + 6;
	// cmpwi cr6,r11,32
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 32, ctx.xer);
	// blt cr6,0x8328ba0c
	if (ctx.cr6.lt) goto loc_8328BA0C;
loc_8328B9F8:
	// addi r11,r11,-32
	ctx.r11.s64 = ctx.r11.s64 + -32;
	// slw r9,r7,r11
	ctx.r9.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r7.u32 << (ctx.r11.u8 & 0x3F));
	// lwz r7,0(r6)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	// addi r6,r6,4
	ctx.r6.s64 = ctx.r6.s64 + 4;
	// b 0x8328ba10
	goto loc_8328BA10;
loc_8328BA0C:
	// rlwinm r9,r9,6,0,25
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 6) & 0xFFFFFFC0;
loc_8328BA10:
	// addi r8,r5,-1
	ctx.r8.s64 = ctx.r5.s64 + -1;
loc_8328BA14:
	// rlwinm r10,r9,11,21,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 11) & 0x7FF;
	// cmpwi cr6,r11,21
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 21, ctx.xer);
	// ble cr6,0x8328ba2c
	if (!ctx.cr6.gt) goto loc_8328BA2C;
	// subfic r5,r11,53
	ctx.xer.ca = ctx.r11.u32 <= 53;
	ctx.r5.s64 = 53 - ctx.r11.s64;
	// srw r5,r7,r5
	ctx.r5.u64 = ctx.r5.u8 & 0x20 ? 0 : (ctx.r7.u32 >> (ctx.r5.u8 & 0x3F));
	// or r10,r5,r10
	ctx.r10.u64 = ctx.r5.u64 | ctx.r10.u64;
loc_8328BA2C:
	// cmplwi cr6,r10,8
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 8, ctx.xer);
	// bne cr6,0x8328ba64
	if (!ctx.cr6.eq) goto loc_8328BA64;
	// addi r11,r11,11
	ctx.r11.s64 = ctx.r11.s64 + 11;
	// cmpwi cr6,r11,32
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 32, ctx.xer);
	// blt cr6,0x8328ba54
	if (ctx.cr6.lt) goto loc_8328BA54;
	// addi r11,r11,-32
	ctx.r11.s64 = ctx.r11.s64 + -32;
	// slw r9,r7,r11
	ctx.r9.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r7.u32 << (ctx.r11.u8 & 0x3F));
	// lwz r7,0(r6)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	// addi r6,r6,4
	ctx.r6.s64 = ctx.r6.s64 + 4;
	// b 0x8328ba58
	goto loc_8328BA58;
loc_8328BA54:
	// rlwinm r9,r9,11,0,20
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 11) & 0xFFFFF800;
loc_8328BA58:
	// addi r8,r8,-33
	ctx.r8.s64 = ctx.r8.s64 + -33;
	// cmpwi cr6,r8,33
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 33, ctx.xer);
	// bgt cr6,0x8328ba14
	if (ctx.cr6.gt) goto loc_8328BA14;
loc_8328BA64:
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// ble cr6,0x8328bb50
	if (!ctx.cr6.gt) goto loc_8328BB50;
	// cmpwi cr6,r8,33
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 33, ctx.xer);
	// bgt cr6,0x8328bb50
	if (ctx.cr6.gt) goto loc_8328BB50;
	// lis r10,-32219
	ctx.r10.s64 = -2111504384;
	// rlwinm r8,r8,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r10,r10,21688
	ctx.r10.s64 = ctx.r10.s64 + 21688;
	// lhzx r5,r8,r10
	ctx.r5.u64 = PPC_LOAD_U16(ctx.r8.u32 + ctx.r10.u32);
	// clrlwi r10,r5,24
	ctx.r10.u64 = ctx.r5.u32 & 0xFF;
	// subfic r8,r10,32
	ctx.xer.ca = ctx.r10.u32 <= 32;
	ctx.r8.s64 = 32 - ctx.r10.s64;
	// cmpw cr6,r11,r8
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r8.s32, ctx.xer);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// blt cr6,0x8328bac4
	if (ctx.cr6.lt) goto loc_8328BAC4;
	// addic. r11,r11,-32
	ctx.xer.ca = ctx.r11.u32 > 31;
	ctx.r11.s64 = ctx.r11.s64 + -32;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8328bab4
	if (ctx.cr0.eq) goto loc_8328BAB4;
	// subf r31,r11,r10
	ctx.r31.s64 = ctx.r10.s64 - ctx.r11.s64;
	// slw r10,r7,r11
	ctx.r10.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r7.u32 << (ctx.r11.u8 & 0x3F));
	// srw r7,r7,r31
	ctx.r7.u64 = ctx.r31.u8 & 0x20 ? 0 : (ctx.r7.u32 >> (ctx.r31.u8 & 0x3F));
	// or r9,r7,r9
	ctx.r9.u64 = ctx.r7.u64 | ctx.r9.u64;
	// b 0x8328bab8
	goto loc_8328BAB8;
loc_8328BAB4:
	// mr r10,r7
	ctx.r10.u64 = ctx.r7.u64;
loc_8328BAB8:
	// lwz r7,0(r6)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	// addi r6,r6,4
	ctx.r6.s64 = ctx.r6.s64 + 4;
	// b 0x8328bac8
	goto loc_8328BAC8;
loc_8328BAC4:
	// slw r10,r9,r10
	ctx.r10.u64 = ctx.r10.u8 & 0x20 ? 0 : (ctx.r9.u32 << (ctx.r10.u8 & 0x3F));
loc_8328BAC8:
	// srw r8,r9,r8
	ctx.r8.u64 = ctx.r8.u8 & 0x20 ? 0 : (ctx.r9.u32 >> (ctx.r8.u8 & 0x3F));
	// extsh r9,r5
	ctx.r9.s64 = ctx.r5.s16;
	// rlwinm r9,r9,24,8,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 24) & 0xFFFFFF;
	// cmplw cr6,r8,r9
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r9.u32, ctx.xer);
	// bne cr6,0x8328bb50
	if (!ctx.cr6.eq) goto loc_8328BB50;
	// rlwinm r10,r10,6,26,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 6) & 0x3F;
	// cmpwi cr6,r11,26
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 26, ctx.xer);
	// ble cr6,0x8328baf4
	if (!ctx.cr6.gt) goto loc_8328BAF4;
	// subfic r9,r11,58
	ctx.xer.ca = ctx.r11.u32 <= 58;
	ctx.r9.s64 = 58 - ctx.r11.s64;
	// srw r9,r7,r9
	ctx.r9.u64 = ctx.r9.u8 & 0x20 ? 0 : (ctx.r7.u32 >> (ctx.r9.u8 & 0x3F));
	// or r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 | ctx.r10.u64;
loc_8328BAF4:
	// cmplwi cr6,r10,11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 11, ctx.xer);
	// beq cr6,0x8328bb14
	if (ctx.cr6.eq) goto loc_8328BB14;
	// cmplwi cr6,r10,21
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 21, ctx.xer);
	// ble cr6,0x8328bb50
	if (!ctx.cr6.gt) goto loc_8328BB50;
	// cmplwi cr6,r10,23
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 23, ctx.xer);
	// bgt cr6,0x8328bb50
	if (ctx.cr6.gt) goto loc_8328BB50;
	// addi r11,r11,5
	ctx.r11.s64 = ctx.r11.s64 + 5;
	// b 0x8328bb18
	goto loc_8328BB18;
loc_8328BB14:
	// addi r11,r11,6
	ctx.r11.s64 = ctx.r11.s64 + 6;
loc_8328BB18:
	// cmpwi cr6,r11,32
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 32, ctx.xer);
	// blt cr6,0x8328bb28
	if (ctx.cr6.lt) goto loc_8328BB28;
	// addi r6,r6,4
	ctx.r6.s64 = ctx.r6.s64 + 4;
	// addi r11,r11,-32
	ctx.r11.s64 = ctx.r11.s64 + -32;
loc_8328BB28:
	// addi r11,r11,7
	ctx.r11.s64 = ctx.r11.s64 + 7;
	// srawi r11,r11,3
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x7) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 3;
	// srawi r10,r4,31
	ctx.xer.ca = (ctx.r4.s32 < 0) & ((ctx.r4.u32 & 0x7FFFFFFF) != 0);
	ctx.r10.s64 = ctx.r4.s32 >> 31;
	// subf r11,r3,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r3.s64;
	// add r11,r11,r6
	ctx.r11.u64 = ctx.r11.u64 + ctx.r6.u64;
	// addi r11,r11,-8
	ctx.r11.s64 = ctx.r11.s64 + -8;
	// rlwinm r9,r11,1,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0x1;
	// subfc r11,r11,r4
	ctx.xer.ca = ctx.r4.u32 >= ctx.r11.u32;
	ctx.r11.s64 = ctx.r4.s64 - ctx.r11.s64;
	// adde r3,r9,r10
	temp.u8 = (ctx.r9.u32 + ctx.r10.u32 < ctx.r9.u32) | (ctx.r9.u32 + ctx.r10.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r3.u64 = ctx.r9.u64 + ctx.r10.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// b 0x8328bb54
	goto loc_8328BB54;
loc_8328BB50:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8328BB54:
	// ld r31,-8(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8328BB5C"))) PPC_WEAK_FUNC(sub_8328BB5C);
PPC_FUNC_IMPL(__imp__sub_8328BB5C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8328BB60"))) PPC_WEAK_FUNC(sub_8328BB60);
PPC_FUNC_IMPL(__imp__sub_8328BB60) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x833a01ac
	ctx.lr = 0x8328BB68;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// rlwinm r11,r3,0,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 0) & 0xFFFFFFFC;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// subf r10,r11,r3
	ctx.r10.s64 = ctx.r3.s64 - ctx.r11.s64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
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
	// beq 0x8328bba4
	if (ctx.cr0.eq) goto loc_8328BBA4;
	// subfic r7,r10,32
	ctx.xer.ca = ctx.r10.u32 <= 32;
	ctx.r7.s64 = 32 - ctx.r10.s64;
	// srw r7,r9,r7
	ctx.r7.u64 = ctx.r7.u8 & 0x20 ? 0 : (ctx.r9.u32 >> (ctx.r7.u8 & 0x3F));
	// or r11,r7,r11
	ctx.r11.u64 = ctx.r7.u64 | ctx.r11.u64;
	// slw r9,r9,r10
	ctx.r9.u64 = ctx.r10.u8 & 0x20 ? 0 : (ctx.r9.u32 << (ctx.r10.u8 & 0x3F));
loc_8328BBA4:
	// lwz r7,0(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	// addi r6,r8,4
	ctx.r6.s64 = ctx.r8.s64 + 4;
	// cmplwi cr6,r11,257
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 257, ctx.xer);
	// bne cr6,0x8328bda0
	if (!ctx.cr6.eq) goto loc_8328BDA0;
	// cmpwi cr6,r10,27
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 27, ctx.xer);
	// blt cr6,0x8328bbd8
	if (ctx.cr6.lt) goto loc_8328BBD8;
	// addic. r11,r10,-27
	ctx.xer.ca = ctx.r10.u32 > 26;
	ctx.r11.s64 = ctx.r10.s64 + -27;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// slw r10,r7,r11
	ctx.r10.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r7.u32 << (ctx.r11.u8 & 0x3F));
	// bne 0x8328bbcc
	if (!ctx.cr0.eq) goto loc_8328BBCC;
	// mr r10,r7
	ctx.r10.u64 = ctx.r7.u64;
loc_8328BBCC:
	// lwz r7,0(r6)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	// addi r6,r6,4
	ctx.r6.s64 = ctx.r6.s64 + 4;
	// b 0x8328bbe0
	goto loc_8328BBE0;
loc_8328BBD8:
	// addi r11,r10,5
	ctx.r11.s64 = ctx.r10.s64 + 5;
	// rlwinm r10,r9,5,0,26
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 5) & 0xFFFFFFE0;
loc_8328BBE0:
	// rlwinm r9,r10,1,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0x1;
	// cmpwi cr6,r11,31
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 31, ctx.xer);
	// bne cr6,0x8328bc00
	if (!ctx.cr6.eq) goto loc_8328BC00;
	// mr r10,r7
	ctx.r10.u64 = ctx.r7.u64;
	// lwz r7,0(r6)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r6,r6,4
	ctx.r6.s64 = ctx.r6.s64 + 4;
	// b 0x8328bc08
	goto loc_8328BC08;
loc_8328BC00:
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// rlwinm r10,r10,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
loc_8328BC08:
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x8328bda0
	if (!ctx.cr6.eq) goto loc_8328BDA0;
	// rlwinm r8,r10,1,31,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0x1;
	// cmpwi cr6,r11,31
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 31, ctx.xer);
	// bne cr6,0x8328bc30
	if (!ctx.cr6.eq) goto loc_8328BC30;
	// mr r9,r7
	ctx.r9.u64 = ctx.r7.u64;
	// lwz r7,0(r6)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r6,r6,4
	ctx.r6.s64 = ctx.r6.s64 + 4;
	// b 0x8328bc38
	goto loc_8328BC38;
loc_8328BC30:
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// rlwinm r9,r10,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
loc_8328BC38:
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x8328bda0
	if (ctx.cr6.eq) goto loc_8328BDA0;
	// rlwinm r10,r9,5,27,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 5) & 0x1F;
	// cmpwi cr6,r11,27
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 27, ctx.xer);
	// ble cr6,0x8328bc58
	if (!ctx.cr6.gt) goto loc_8328BC58;
	// subfic r8,r11,59
	ctx.xer.ca = ctx.r11.u32 <= 59;
	ctx.r8.s64 = 59 - ctx.r11.s64;
	// srw r8,r7,r8
	ctx.r8.u64 = ctx.r8.u8 & 0x20 ? 0 : (ctx.r7.u32 >> (ctx.r8.u8 & 0x3F));
	// or r10,r8,r10
	ctx.r10.u64 = ctx.r8.u64 | ctx.r10.u64;
loc_8328BC58:
	// cmplwi cr6,r10,7
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 7, ctx.xer);
	// bne cr6,0x8328bda0
	if (!ctx.cr6.eq) goto loc_8328BDA0;
	// addi r11,r11,5
	ctx.r11.s64 = ctx.r11.s64 + 5;
	// cmpwi cr6,r11,32
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 32, ctx.xer);
	// blt cr6,0x8328bc80
	if (ctx.cr6.lt) goto loc_8328BC80;
	// addi r11,r11,-32
	ctx.r11.s64 = ctx.r11.s64 + -32;
	// slw r8,r7,r11
	ctx.r8.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r7.u32 << (ctx.r11.u8 & 0x3F));
	// lwz r7,0(r6)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	// addi r6,r6,4
	ctx.r6.s64 = ctx.r6.s64 + 4;
	// b 0x8328bc84
	goto loc_8328BC84;
loc_8328BC80:
	// rlwinm r8,r9,5,0,26
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 5) & 0xFFFFFFE0;
loc_8328BC84:
	// addi r9,r5,-1
	ctx.r9.s64 = ctx.r5.s64 + -1;
loc_8328BC88:
	// rlwinm r10,r8,11,21,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 11) & 0x7FF;
	// cmpwi cr6,r11,21
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 21, ctx.xer);
	// ble cr6,0x8328bca0
	if (!ctx.cr6.gt) goto loc_8328BCA0;
	// subfic r5,r11,53
	ctx.xer.ca = ctx.r11.u32 <= 53;
	ctx.r5.s64 = 53 - ctx.r11.s64;
	// srw r5,r7,r5
	ctx.r5.u64 = ctx.r5.u8 & 0x20 ? 0 : (ctx.r7.u32 >> (ctx.r5.u8 & 0x3F));
	// or r10,r5,r10
	ctx.r10.u64 = ctx.r5.u64 | ctx.r10.u64;
loc_8328BCA0:
	// cmplwi cr6,r10,8
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 8, ctx.xer);
	// bne cr6,0x8328bcd8
	if (!ctx.cr6.eq) goto loc_8328BCD8;
	// addi r11,r11,11
	ctx.r11.s64 = ctx.r11.s64 + 11;
	// cmpwi cr6,r11,32
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 32, ctx.xer);
	// blt cr6,0x8328bcc8
	if (ctx.cr6.lt) goto loc_8328BCC8;
	// addi r11,r11,-32
	ctx.r11.s64 = ctx.r11.s64 + -32;
	// slw r8,r7,r11
	ctx.r8.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r7.u32 << (ctx.r11.u8 & 0x3F));
	// lwz r7,0(r6)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	// addi r6,r6,4
	ctx.r6.s64 = ctx.r6.s64 + 4;
	// b 0x8328bccc
	goto loc_8328BCCC;
loc_8328BCC8:
	// rlwinm r8,r8,11,0,20
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 11) & 0xFFFFF800;
loc_8328BCCC:
	// addi r9,r9,-33
	ctx.r9.s64 = ctx.r9.s64 + -33;
	// cmpwi cr6,r9,33
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 33, ctx.xer);
	// bgt cr6,0x8328bc88
	if (ctx.cr6.gt) goto loc_8328BC88;
loc_8328BCD8:
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// ble cr6,0x8328bda0
	if (!ctx.cr6.gt) goto loc_8328BDA0;
	// cmpwi cr6,r9,33
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 33, ctx.xer);
	// bgt cr6,0x8328bda0
	if (ctx.cr6.gt) goto loc_8328BDA0;
	// lis r10,-32219
	ctx.r10.s64 = -2111504384;
	// rlwinm r9,r9,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r10,r10,21688
	ctx.r10.s64 = ctx.r10.s64 + 21688;
	// lhzx r5,r9,r10
	ctx.r5.u64 = PPC_LOAD_U16(ctx.r9.u32 + ctx.r10.u32);
	// clrlwi r10,r5,24
	ctx.r10.u64 = ctx.r5.u32 & 0xFF;
	// subfic r9,r10,32
	ctx.xer.ca = ctx.r10.u32 <= 32;
	ctx.r9.s64 = 32 - ctx.r10.s64;
	// cmpw cr6,r11,r9
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r9.s32, ctx.xer);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// blt cr6,0x8328bd38
	if (ctx.cr6.lt) goto loc_8328BD38;
	// addic. r11,r11,-32
	ctx.xer.ca = ctx.r11.u32 > 31;
	ctx.r11.s64 = ctx.r11.s64 + -32;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8328bd28
	if (ctx.cr0.eq) goto loc_8328BD28;
	// subf r4,r11,r10
	ctx.r4.s64 = ctx.r10.s64 - ctx.r11.s64;
	// slw r10,r7,r11
	ctx.r10.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r7.u32 << (ctx.r11.u8 & 0x3F));
	// srw r7,r7,r4
	ctx.r7.u64 = ctx.r4.u8 & 0x20 ? 0 : (ctx.r7.u32 >> (ctx.r4.u8 & 0x3F));
	// or r8,r7,r8
	ctx.r8.u64 = ctx.r7.u64 | ctx.r8.u64;
	// b 0x8328bd2c
	goto loc_8328BD2C;
loc_8328BD28:
	// mr r10,r7
	ctx.r10.u64 = ctx.r7.u64;
loc_8328BD2C:
	// lwz r7,0(r6)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	// addi r6,r6,4
	ctx.r6.s64 = ctx.r6.s64 + 4;
	// b 0x8328bd3c
	goto loc_8328BD3C;
loc_8328BD38:
	// slw r10,r8,r10
	ctx.r10.u64 = ctx.r10.u8 & 0x20 ? 0 : (ctx.r8.u32 << (ctx.r10.u8 & 0x3F));
loc_8328BD3C:
	// srw r9,r8,r9
	ctx.r9.u64 = ctx.r9.u8 & 0x20 ? 0 : (ctx.r8.u32 >> (ctx.r9.u8 & 0x3F));
	// extsh r8,r5
	ctx.r8.s64 = ctx.r5.s16;
	// rlwinm r8,r8,24,8,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 24) & 0xFFFFFF;
	// cmplw cr6,r9,r8
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r8.u32, ctx.xer);
	// bne cr6,0x8328bda0
	if (!ctx.cr6.eq) goto loc_8328BDA0;
	// rlwinm r10,r10,5,27,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 5) & 0x1F;
	// cmpwi cr6,r11,27
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 27, ctx.xer);
	// ble cr6,0x8328bd68
	if (!ctx.cr6.gt) goto loc_8328BD68;
	// subfic r9,r11,59
	ctx.xer.ca = ctx.r11.u32 <= 59;
	ctx.r9.s64 = 59 - ctx.r11.s64;
	// srw r9,r7,r9
	ctx.r9.u64 = ctx.r9.u8 & 0x20 ? 0 : (ctx.r7.u32 >> (ctx.r9.u8 & 0x3F));
	// or r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 | ctx.r10.u64;
loc_8328BD68:
	// cmplwi cr6,r10,7
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 7, ctx.xer);
	// bne cr6,0x8328bda0
	if (!ctx.cr6.eq) goto loc_8328BDA0;
	// addi r11,r11,5
	ctx.r11.s64 = ctx.r11.s64 + 5;
	// cmpwi cr6,r11,32
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 32, ctx.xer);
	// blt cr6,0x8328bd84
	if (ctx.cr6.lt) goto loc_8328BD84;
	// addi r11,r11,-32
	ctx.r11.s64 = ctx.r11.s64 + -32;
	// addi r6,r6,4
	ctx.r6.s64 = ctx.r6.s64 + 4;
loc_8328BD84:
	// addi r11,r11,7
	ctx.r11.s64 = ctx.r11.s64 + 7;
	// srawi r11,r11,3
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x7) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 3;
	// add r11,r11,r6
	ctx.r11.u64 = ctx.r11.u64 + ctx.r6.u64;
	// addi r3,r11,-8
	ctx.r3.s64 = ctx.r11.s64 + -8;
	// subf r11,r30,r3
	ctx.r11.s64 = ctx.r3.s64 - ctx.r30.s64;
	// cmpw cr6,r11,r29
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r29.s32, ctx.xer);
	// ble cr6,0x8328bdf0
	if (!ctx.cr6.gt) goto loc_8328BDF0;
loc_8328BDA0:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8328BDA4:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x833a01fc
	__restgprlr_29(ctx, base);
	return;
loc_8328BDAC:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8328b5a0
	ctx.lr = 0x8328BDB4;
	sub_8328B5A0(ctx, base);
	// rlwinm. r11,r3,0,29,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 0) & 0x4;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8328bddc
	if (ctx.cr0.eq) goto loc_8328BDDC;
	// lbz r11,5(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 5);
	// lbz r10,6(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 6);
	// rlwinm r11,r11,1,29,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0x6;
	// rlwinm r10,r10,25,7,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 25) & 0x1FFFFFF;
	// or r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 | ctx.r10.u64;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bne cr6,0x8328bda0
	if (!ctx.cr6.eq) goto loc_8328BDA0;
	// b 0x8328bde4
	goto loc_8328BDE4;
loc_8328BDDC:
	// rlwinm. r11,r3,0,25,25
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 0) & 0x40;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8328be08
	if (ctx.cr0.eq) goto loc_8328BE08;
loc_8328BDE4:
	// subf r11,r30,r31
	ctx.r11.s64 = ctx.r31.s64 - ctx.r30.s64;
	// addi r3,r31,1
	ctx.r3.s64 = ctx.r31.s64 + 1;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
loc_8328BDF0:
	// li r5,204
	ctx.r5.s64 = 204;
	// subf r4,r11,r29
	ctx.r4.s64 = ctx.r29.s64 - ctx.r11.s64;
	// bl 0x8328b648
	ctx.lr = 0x8328BDFC;
	sub_8328B648(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// bne 0x8328bdac
	if (!ctx.cr0.eq) goto loc_8328BDAC;
	// b 0x8328bda0
	goto loc_8328BDA0;
loc_8328BE08:
	// rlwinm. r11,r3,0,24,24
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 0) & 0x80;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8328be28
	if (ctx.cr0.eq) goto loc_8328BE28;
	// subf r11,r30,r31
	ctx.r11.s64 = ctx.r31.s64 - ctx.r30.s64;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
loc_8328BE18:
	// cmpw cr6,r11,r29
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r29.s32, ctx.xer);
	// bgt cr6,0x8328bda0
	if (ctx.cr6.gt) goto loc_8328BDA0;
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x8328bda4
	goto loc_8328BDA4;
loc_8328BE28:
	// rlwinm. r11,r3,0,28,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 0) & 0x8;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8328bda0
	if (ctx.cr0.eq) goto loc_8328BDA0;
	// lbz r11,7(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 7);
	// rlwinm. r11,r11,0,25,25
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x40;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8328bda0
	if (ctx.cr0.eq) goto loc_8328BDA0;
	// subf r11,r30,r31
	ctx.r11.s64 = ctx.r31.s64 - ctx.r30.s64;
	// addi r11,r11,7
	ctx.r11.s64 = ctx.r11.s64 + 7;
	// b 0x8328be18
	goto loc_8328BE18;
}

__attribute__((alias("__imp__sub_8328BE48"))) PPC_WEAK_FUNC(sub_8328BE48);
PPC_FUNC_IMPL(__imp__sub_8328BE48) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// rlwinm r11,r5,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// clrlwi. r10,r5,28
	ctx.r10.u64 = ctx.r5.u32 & 0xF;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// beq 0x8328be64
	if (ctx.cr0.eq) goto loc_8328BE64;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_8328BE5C:
	// stwu r4,-4(r11)
	ea = -4 + ctx.r11.u32;
	PPC_STORE_U32(ea, ctx.r4.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x8328be5c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8328BE5C;
loc_8328BE64:
	// rlwinm. r10,r5,28,4,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 28) & 0xFFFFFFF;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beqlr 
	if (ctx.cr0.eq) return;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_8328BE70:
	// stwu r4,-4(r11)
	ea = -4 + ctx.r11.u32;
	PPC_STORE_U32(ea, ctx.r4.u32);
	ctx.r11.u32 = ea;
	// stwu r4,-4(r11)
	ea = -4 + ctx.r11.u32;
	PPC_STORE_U32(ea, ctx.r4.u32);
	ctx.r11.u32 = ea;
	// stwu r4,-4(r11)
	ea = -4 + ctx.r11.u32;
	PPC_STORE_U32(ea, ctx.r4.u32);
	ctx.r11.u32 = ea;
	// stwu r4,-4(r11)
	ea = -4 + ctx.r11.u32;
	PPC_STORE_U32(ea, ctx.r4.u32);
	ctx.r11.u32 = ea;
	// stwu r4,-4(r11)
	ea = -4 + ctx.r11.u32;
	PPC_STORE_U32(ea, ctx.r4.u32);
	ctx.r11.u32 = ea;
	// stwu r4,-4(r11)
	ea = -4 + ctx.r11.u32;
	PPC_STORE_U32(ea, ctx.r4.u32);
	ctx.r11.u32 = ea;
	// stwu r4,-4(r11)
	ea = -4 + ctx.r11.u32;
	PPC_STORE_U32(ea, ctx.r4.u32);
	ctx.r11.u32 = ea;
	// stwu r4,-4(r11)
	ea = -4 + ctx.r11.u32;
	PPC_STORE_U32(ea, ctx.r4.u32);
	ctx.r11.u32 = ea;
	// stwu r4,-4(r11)
	ea = -4 + ctx.r11.u32;
	PPC_STORE_U32(ea, ctx.r4.u32);
	ctx.r11.u32 = ea;
	// stwu r4,-4(r11)
	ea = -4 + ctx.r11.u32;
	PPC_STORE_U32(ea, ctx.r4.u32);
	ctx.r11.u32 = ea;
	// stwu r4,-4(r11)
	ea = -4 + ctx.r11.u32;
	PPC_STORE_U32(ea, ctx.r4.u32);
	ctx.r11.u32 = ea;
	// stwu r4,-4(r11)
	ea = -4 + ctx.r11.u32;
	PPC_STORE_U32(ea, ctx.r4.u32);
	ctx.r11.u32 = ea;
	// stwu r4,-4(r11)
	ea = -4 + ctx.r11.u32;
	PPC_STORE_U32(ea, ctx.r4.u32);
	ctx.r11.u32 = ea;
	// stwu r4,-4(r11)
	ea = -4 + ctx.r11.u32;
	PPC_STORE_U32(ea, ctx.r4.u32);
	ctx.r11.u32 = ea;
	// stwu r4,-4(r11)
	ea = -4 + ctx.r11.u32;
	PPC_STORE_U32(ea, ctx.r4.u32);
	ctx.r11.u32 = ea;
	// stwu r4,-4(r11)
	ea = -4 + ctx.r11.u32;
	PPC_STORE_U32(ea, ctx.r4.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x8328be70
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8328BE70;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8328BEB8"))) PPC_WEAK_FUNC(sub_8328BEB8);
PPC_FUNC_IMPL(__imp__sub_8328BEB8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x833a01a4
	ctx.lr = 0x8328BEC0;
	__savegprlr_27(ctx, base);
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
	// bl 0x832896c8
	ctx.lr = 0x8328BED4;
	sub_832896C8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x8328beec
	if (ctx.cr0.eq) goto loc_8328BEEC;
	// lis r4,-253
	ctx.r4.s64 = -16580608;
	// li r3,0
	ctx.r3.s64 = 0;
	// ori r4,r4,521
	ctx.r4.u64 = ctx.r4.u64 | 521;
	// b 0x8328c038
	goto loc_8328C038;
loc_8328BEEC:
	// lwz r9,40(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 40);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x8328c02c
	if (ctx.cr6.eq) goto loc_8328C02C;
	// lwz r10,32(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 32);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8328c02c
	if (ctx.cr6.eq) goto loc_8328C02C;
	// lwz r11,36(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 36);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8328c02c
	if (ctx.cr6.eq) goto loc_8328C02C;
	// clrlwi. r8,r9,25
	ctx.r8.u64 = ctx.r9.u32 & 0x7F;
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// bne 0x8328c02c
	if (!ctx.cr0.eq) goto loc_8328C02C;
	// clrlwi. r8,r10,25
	ctx.r8.u64 = ctx.r10.u32 & 0x7F;
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// bne 0x8328c02c
	if (!ctx.cr0.eq) goto loc_8328C02C;
	// clrlwi. r8,r11,25
	ctx.r8.u64 = ctx.r11.u32 & 0x7F;
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// bne 0x8328c02c
	if (!ctx.cr0.eq) goto loc_8328C02C;
	// cmplw cr6,r9,r10
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x8328c02c
	if (ctx.cr6.eq) goto loc_8328C02C;
	// cmplw cr6,r9,r11
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x8328c02c
	if (ctx.cr6.eq) goto loc_8328C02C;
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x8328c02c
	if (ctx.cr6.eq) goto loc_8328C02C;
	// lha r10,46(r30)
	ctx.r10.s64 = int16_t(PPC_LOAD_U16(ctx.r30.u32 + 46));
	// cmpwi r10,0
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// ble 0x8328c02c
	if (!ctx.cr0.gt) goto loc_8328C02C;
	// lha r11,44(r30)
	ctx.r11.s64 = int16_t(PPC_LOAD_U16(ctx.r30.u32 + 44));
	// cmpwi r11,0
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble 0x8328c02c
	if (!ctx.cr0.gt) goto loc_8328C02C;
	// cmpwi cr6,r10,16384
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 16384, ctx.xer);
	// bgt cr6,0x8328c02c
	if (ctx.cr6.gt) goto loc_8328C02C;
	// cmpwi cr6,r11,16384
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 16384, ctx.xer);
	// bgt cr6,0x8328c02c
	if (ctx.cr6.gt) goto loc_8328C02C;
	// clrlwi. r10,r10,25
	ctx.r10.u64 = ctx.r10.u32 & 0x7F;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x8328c02c
	if (!ctx.cr0.eq) goto loc_8328C02C;
	// clrlwi. r11,r11,25
	ctx.r11.u64 = ctx.r11.u32 & 0x7F;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8328c02c
	if (!ctx.cr0.eq) goto loc_8328C02C;
	// lwz r11,5240(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 5240);
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// bne cr6,0x8328bf98
	if (!ctx.cr6.eq) goto loc_8328BF98;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82822bb8
	ctx.lr = 0x8328BF94;
	sub_82822BB8(ctx, base);
	// b 0x8328c03c
	goto loc_8328C03C;
loc_8328BF98:
	// addi r3,r31,4976
	ctx.r3.s64 = ctx.r31.s64 + 4976;
	// lwz r28,4968(r31)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4968);
	// li r5,64
	ctx.r5.s64 = 64;
	// lwz r27,4972(r31)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4972);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r11,r31,4956
	ctx.r11.s64 = ctx.r31.s64 + 4956;
	// bl 0x833a1390
	ctx.lr = 0x8328BFB4;
	sub_833A1390(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83293568
	ctx.lr = 0x8328BFBC;
	sub_83293568(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83293b30
	ctx.lr = 0x8328BFC4;
	sub_83293B30(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83293b70
	ctx.lr = 0x8328BFCC;
	sub_83293B70(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83293820
	ctx.lr = 0x8328BFD4;
	sub_83293820(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83293990
	ctx.lr = 0x8328BFDC;
	sub_83293990(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x832931a0
	ctx.lr = 0x8328BFE8;
	sub_832931A0(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82c10e98
	ctx.lr = 0x8328BFF4;
	sub_82C10E98(ctx, base);
	// addi r4,r31,4828
	ctx.r4.s64 = ctx.r31.s64 + 4828;
	// li r5,128
	ctx.r5.s64 = 128;
	// lwz r3,48(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 48);
	// bl 0x833a1390
	ctx.lr = 0x8328C004;
	sub_833A1390(ctx, base);
	// lwz r11,4968(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4968);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// subf r11,r28,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r28.s64;
	// stw r11,52(r30)
	PPC_STORE_U32(ctx.r30.u32 + 52, ctx.r11.u32);
	// lwz r11,4972(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4972);
	// subf r11,r27,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r27.s64;
	// stw r11,56(r30)
	PPC_STORE_U32(ctx.r30.u32 + 56, ctx.r11.u32);
	// lhz r11,5036(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 5036);
	// sth r11,60(r30)
	PPC_STORE_U16(ctx.r30.u32 + 60, ctx.r11.u16);
	// b 0x8328c03c
	goto loc_8328C03C;
loc_8328C02C:
	// lis r4,-253
	ctx.r4.s64 = -16580608;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// ori r4,r4,774
	ctx.r4.u64 = ctx.r4.u64 | 774;
loc_8328C038:
	// bl 0x8328c178
	ctx.lr = 0x8328C03C;
	sub_8328C178(ctx, base);
loc_8328C03C:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x833a01f4
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8328C044"))) PPC_WEAK_FUNC(sub_8328C044);
PPC_FUNC_IMPL(__imp__sub_8328C044) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8328C048"))) PPC_WEAK_FUNC(sub_8328C048);
PPC_FUNC_IMPL(__imp__sub_8328C048) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x833a01ac
	ctx.lr = 0x8328C050;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// bl 0x832896c8
	ctx.lr = 0x8328C060;
	sub_832896C8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x8328c078
	if (ctx.cr0.eq) goto loc_8328C078;
	// lis r4,-253
	ctx.r4.s64 = -16580608;
	// li r3,0
	ctx.r3.s64 = 0;
	// ori r4,r4,522
	ctx.r4.u64 = ctx.r4.u64 | 522;
	// b 0x8328c0c8
	goto loc_8328C0C8;
loc_8328C078:
	// lis r30,-253
	ctx.r30.s64 = -16580608;
	// ori r30,r30,773
	ctx.r30.u64 = ctx.r30.u64 | 773;
	// b 0x8328c0a8
	goto loc_8328C0A8;
loc_8328C084:
	// andi. r11,r3,204
	ctx.r11.u64 = ctx.r3.u64 & 204;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// cmpwi r11,0
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8328c0bc
	if (!ctx.cr0.eq) goto loc_8328C0BC;
	// li r5,4
	ctx.r5.s64 = 4;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8328a8b8
	ctx.lr = 0x8328C0A0;
	sub_8328A8B8(ctx, base);
	// cmpwi cr6,r3,4
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 4, ctx.xer);
	// bne cr6,0x8328c0c0
	if (!ctx.cr6.eq) goto loc_8328C0C0;
loc_8328C0A8:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8328a638
	ctx.lr = 0x8328C0B0;
	sub_8328A638(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x8328c084
	if (!ctx.cr0.eq) goto loc_8328C084;
	// b 0x8328c0c0
	goto loc_8328C0C0;
loc_8328C0BC:
	// li r30,0
	ctx.r30.s64 = 0;
loc_8328C0C0:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
loc_8328C0C8:
	// bl 0x8328c178
	ctx.lr = 0x8328C0CC;
	sub_8328C178(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x833a01fc
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8328C0D4"))) PPC_WEAK_FUNC(sub_8328C0D4);
PPC_FUNC_IMPL(__imp__sub_8328C0D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8328C0D8"))) PPC_WEAK_FUNC(sub_8328C0D8);
PPC_FUNC_IMPL(__imp__sub_8328C0D8) {
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
	// bl 0x832896c8
	ctx.lr = 0x8328C0F0;
	sub_832896C8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x8328c10c
	if (ctx.cr0.eq) goto loc_8328C10C;
	// lis r4,-253
	ctx.r4.s64 = -16580608;
	// li r3,0
	ctx.r3.s64 = 0;
	// ori r4,r4,529
	ctx.r4.u64 = ctx.r4.u64 | 529;
	// bl 0x8328c178
	ctx.lr = 0x8328C108;
	sub_8328C178(ctx, base);
	// b 0x8328c138
	goto loc_8328C138;
loc_8328C10C:
	// lwz r11,5240(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 5240);
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r10,5412(r31)
	PPC_STORE_U32(ctx.r31.u32 + 5412, ctx.r10.u32);
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// bne cr6,0x8328c128
	if (!ctx.cr6.eq) goto loc_8328C128;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82c10e98
	ctx.lr = 0x8328C128;
	sub_82C10E98(ctx, base);
loc_8328C128:
	// lwz r3,5416(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 5416);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8328c138
	if (ctx.cr6.eq) goto loc_8328C138;
	// bl 0x83293d50
	ctx.lr = 0x8328C138;
	sub_83293D50(ctx, base);
loc_8328C138:
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

__attribute__((alias("__imp__sub_8328C14C"))) PPC_WEAK_FUNC(sub_8328C14C);
PPC_FUNC_IMPL(__imp__sub_8328C14C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8328C150"))) PPC_WEAK_FUNC(sub_8328C150);
PPC_FUNC_IMPL(__imp__sub_8328C150) {
	PPC_FUNC_PROLOGUE();
	// stw r4,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r4.u32);
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lwz r3,4(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_8328C174"))) PPC_WEAK_FUNC(sub_8328C174);
PPC_FUNC_IMPL(__imp__sub_8328C174) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8328C178"))) PPC_WEAK_FUNC(sub_8328C178);
PPC_FUNC_IMPL(__imp__sub_8328C178) {
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
	// bne cr6,0x8328c1a0
	if (!ctx.cr6.eq) goto loc_8328C1A0;
	// lis r11,-31827
	ctx.r11.s64 = -2085814272;
	// addi r3,r11,16764
	ctx.r3.s64 = ctx.r11.s64 + 16764;
	// b 0x8328c1a4
	goto loc_8328C1A4;
loc_8328C1A0:
	// addi r3,r3,4956
	ctx.r3.s64 = ctx.r3.s64 + 4956;
loc_8328C1A4:
	// bl 0x8328c150
	ctx.lr = 0x8328C1A8;
	sub_8328C150(ctx, base);
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

__attribute__((alias("__imp__sub_8328C1C0"))) PPC_WEAK_FUNC(sub_8328C1C0);
PPC_FUNC_IMPL(__imp__sub_8328C1C0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x833a01ac
	ctx.lr = 0x8328C1C8;
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
	// bne cr6,0x8328c1ec
	if (!ctx.cr6.eq) goto loc_8328C1EC;
	// lis r11,-31827
	ctx.r11.s64 = -2085814272;
	// addi r11,r11,16764
	ctx.r11.s64 = ctx.r11.s64 + 16764;
	// b 0x8328c214
	goto loc_8328C214;
loc_8328C1EC:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x832896c8
	ctx.lr = 0x8328C1F4;
	sub_832896C8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x8328c210
	if (ctx.cr0.eq) goto loc_8328C210;
	// lis r4,-253
	ctx.r4.s64 = -16580608;
	// li r3,0
	ctx.r3.s64 = 0;
	// ori r4,r4,515
	ctx.r4.u64 = ctx.r4.u64 | 515;
	// bl 0x8328c178
	ctx.lr = 0x8328C20C;
	sub_8328C178(ctx, base);
	// b 0x8328c220
	goto loc_8328C220;
loc_8328C210:
	// addi r11,r31,4956
	ctx.r11.s64 = ctx.r31.s64 + 4956;
loc_8328C214:
	// stw r30,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r30.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r29,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r29.u32);
loc_8328C220:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x833a01fc
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8328C228"))) PPC_WEAK_FUNC(sub_8328C228);
PPC_FUNC_IMPL(__imp__sub_8328C228) {
	PPC_FUNC_PROLOGUE();
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8328C23C"))) PPC_WEAK_FUNC(sub_8328C23C);
PPC_FUNC_IMPL(__imp__sub_8328C23C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8328C240"))) PPC_WEAK_FUNC(sub_8328C240);
PPC_FUNC_IMPL(__imp__sub_8328C240) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8328C24C"))) PPC_WEAK_FUNC(sub_8328C24C);
PPC_FUNC_IMPL(__imp__sub_8328C24C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8328C250"))) PPC_WEAK_FUNC(sub_8328C250);
PPC_FUNC_IMPL(__imp__sub_8328C250) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
	// lwz r10,8(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// subf r11,r10,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r10.s64;
	// stw r11,0(r5)
	PPC_STORE_U32(ctx.r5.u32 + 0, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8328C278"))) PPC_WEAK_FUNC(sub_8328C278);
PPC_FUNC_IMPL(__imp__sub_8328C278) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32219
	ctx.r11.s64 = -2111504384;
	// lis r10,-31827
	ctx.r10.s64 = -2085814272;
	// addi r11,r11,21832
	ctx.r11.s64 = ctx.r11.s64 + 21832;
	// cmplwi cr6,r4,12
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 12, ctx.xer);
	// stw r11,16784(r10)
	PPC_STORE_U32(ctx.r10.u32 + 16784, ctx.r11.u32);
	// bge cr6,0x8328c298
	if (!ctx.cr6.lt) goto loc_8328C298;
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_8328C298:
	// b 0x8328c228
	sub_8328C228(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8328C29C"))) PPC_WEAK_FUNC(sub_8328C29C);
PPC_FUNC_IMPL(__imp__sub_8328C29C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8328C2A0"))) PPC_WEAK_FUNC(sub_8328C2A0);
PPC_FUNC_IMPL(__imp__sub_8328C2A0) {
	PPC_FUNC_PROLOGUE();
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// b 0x8328c250
	sub_8328C250(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8328C2AC"))) PPC_WEAK_FUNC(sub_8328C2AC);
PPC_FUNC_IMPL(__imp__sub_8328C2AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8328C2B0"))) PPC_WEAK_FUNC(sub_8328C2B0);
PPC_FUNC_IMPL(__imp__sub_8328C2B0) {
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
	// bl 0x8328c4a0
	ctx.lr = 0x8328C2C8;
	sub_8328C4A0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x8328c2e4
	if (!ctx.cr0.eq) goto loc_8328C2E4;
	// bl 0x8328c4c8
	ctx.lr = 0x8328C2D4;
	sub_8328C4C8(ctx, base);
	// lis r11,-31827
	ctx.r11.s64 = -2085814272;
	// std r3,16792(r11)
	PPC_STORE_U64(ctx.r11.u32 + 16792, ctx.r3.u64);
	// bl 0x8328c410
	ctx.lr = 0x8328C2E0;
	sub_8328C410(ctx, base);
	// b 0x8328c350
	goto loc_8328C350;
loc_8328C2E4:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x8328c32c
	if (ctx.cr6.eq) goto loc_8328C32C;
	// lwz r11,104(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 104);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8328c32c
	if (ctx.cr6.eq) goto loc_8328C32C;
	// lwz r11,4228(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4228);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8328c32c
	if (ctx.cr6.eq) goto loc_8328C32C;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// lwz r3,4248(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4248);
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8328C318;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwa r11,80(r1)
	ctx.r11.s64 = int32_t(PPC_LOAD_U32(ctx.r1.u32 + 80));
	// lis r10,-31827
	ctx.r10.s64 = -2085814272;
	// lwa r3,84(r1)
	ctx.r3.s64 = int32_t(PPC_LOAD_U32(ctx.r1.u32 + 84));
	// std r11,16792(r10)
	PPC_STORE_U64(ctx.r10.u32 + 16792, ctx.r11.u64);
	// b 0x8328c350
	goto loc_8328C350;
loc_8328C32C:
	// lis r11,-31822
	ctx.r11.s64 = -2085486592;
	// lis r9,-31827
	ctx.r9.s64 = -2085814272;
	// addi r10,r11,1568
	ctx.r10.s64 = ctx.r11.s64 + 1568;
	// lwa r11,424(r10)
	ctx.r11.s64 = int32_t(PPC_LOAD_U32(ctx.r10.u32 + 424));
	// lwz r8,412(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 412);
	// lwz r10,428(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 428);
	// std r11,16792(r9)
	PPC_STORE_U64(ctx.r9.u32 + 16792, ctx.r11.u64);
	// mullw r10,r8,r10
	ctx.r10.s64 = int64_t(ctx.r8.s32) * int64_t(ctx.r10.s32);
	// extsw r3,r10
	ctx.r3.s64 = ctx.r10.s32;
loc_8328C350:
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

__attribute__((alias("__imp__sub_8328C364"))) PPC_WEAK_FUNC(sub_8328C364);
PPC_FUNC_IMPL(__imp__sub_8328C364) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8328C368"))) PPC_WEAK_FUNC(sub_8328C368);
PPC_FUNC_IMPL(__imp__sub_8328C368) {
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
	// ld r11,16792(r31)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r31.u32 + 16792);
	// cmpdi cr6,r11,0
	ctx.cr6.compare<int64_t>(ctx.r11.s64, 0, ctx.xer);
	// bne cr6,0x8328c390
	if (!ctx.cr6.eq) goto loc_8328C390;
	// bl 0x8328c2b0
	ctx.lr = 0x8328C38C;
	sub_8328C2B0(ctx, base);
	// ld r11,16792(r31)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r31.u32 + 16792);
loc_8328C390:
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
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

__attribute__((alias("__imp__sub_8328C3A8"))) PPC_WEAK_FUNC(sub_8328C3A8);
PPC_FUNC_IMPL(__imp__sub_8328C3A8) {
	PPC_FUNC_PROLOGUE();
	// li r10,-1
	ctx.r10.s64 = -1;
	// li r11,0
	ctx.r11.s64 = 0;
	// clrldi r10,r10,1
	ctx.r10.u64 = ctx.r10.u64 & 0x7FFFFFFFFFFFFFFF;
	// std r11,0(r3)
	PPC_STORE_U64(ctx.r3.u32 + 0, ctx.r11.u64);
	// std r10,8(r3)
	PPC_STORE_U64(ctx.r3.u32 + 8, ctx.r10.u64);
	// std r11,16(r3)
	PPC_STORE_U64(ctx.r3.u32 + 16, ctx.r11.u64);
	// stw r11,24(r3)
	PPC_STORE_U32(ctx.r3.u32 + 24, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8328C3C8"))) PPC_WEAK_FUNC(sub_8328C3C8);
PPC_FUNC_IMPL(__imp__sub_8328C3C8) {
	PPC_FUNC_PROLOGUE();
	// ld r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r3.u32 + 0);
	// add r10,r11,r4
	ctx.r10.u64 = ctx.r11.u64 + ctx.r4.u64;
	// ld r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r3.u32 + 8);
	// std r10,0(r3)
	PPC_STORE_U64(ctx.r3.u32 + 0, ctx.r10.u64);
	// cmpd cr6,r4,r11
	ctx.cr6.compare<int64_t>(ctx.r4.s64, ctx.r11.s64, ctx.xer);
	// bge cr6,0x8328c3e4
	if (!ctx.cr6.lt) goto loc_8328C3E4;
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
loc_8328C3E4:
	// std r11,8(r3)
	PPC_STORE_U64(ctx.r3.u32 + 8, ctx.r11.u64);
	// ld r11,16(r3)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r3.u32 + 16);
	// cmpd cr6,r4,r11
	ctx.cr6.compare<int64_t>(ctx.r4.s64, ctx.r11.s64, ctx.xer);
	// ble cr6,0x8328c3f8
	if (!ctx.cr6.gt) goto loc_8328C3F8;
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
loc_8328C3F8:
	// lwz r10,24(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// std r11,16(r3)
	PPC_STORE_U64(ctx.r3.u32 + 16, ctx.r11.u64);
	// addi r11,r10,1
	ctx.r11.s64 = ctx.r10.s64 + 1;
	// stw r11,24(r3)
	PPC_STORE_U32(ctx.r3.u32 + 24, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8328C40C"))) PPC_WEAK_FUNC(sub_8328C40C);
PPC_FUNC_IMPL(__imp__sub_8328C40C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8328C410"))) PPC_WEAK_FUNC(sub_8328C410);
PPC_FUNC_IMPL(__imp__sub_8328C410) {
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
	// lis r11,-31822
	ctx.r11.s64 = -2085486592;
	// lwz r11,-572(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -572);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x8328c458
	if (!ctx.cr6.gt) goto loc_8328C458;
	// lis r11,-31822
	ctx.r11.s64 = -2085486592;
	// lwz r11,-576(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -576);
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// beq cr6,0x8328c458
	if (ctx.cr6.eq) goto loc_8328C458;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x833bdef8
	ctx.lr = 0x8328C444;
	sub_833BDEF8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x8328c458
	if (ctx.cr0.eq) goto loc_8328C458;
	// ld r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// cmpdi cr6,r3,0
	ctx.cr6.compare<int64_t>(ctx.r3.s64, 0, ctx.xer);
	// bne cr6,0x8328c45c
	if (!ctx.cr6.eq) goto loc_8328C45C;
loc_8328C458:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8328C45C:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8328C46C"))) PPC_WEAK_FUNC(sub_8328C46C);
PPC_FUNC_IMPL(__imp__sub_8328C46C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8328C470"))) PPC_WEAK_FUNC(sub_8328C470);
PPC_FUNC_IMPL(__imp__sub_8328C470) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31822
	ctx.r11.s64 = -2085486592;
	// lwz r10,-572(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + -572);
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// stw r10,-572(r11)
	PPC_STORE_U32(ctx.r11.u32 + -572, ctx.r10.u32);
	// lwz r10,-572(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + -572);
	// lwz r9,-572(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + -572);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bgelr cr6
	if (!ctx.cr6.lt) return;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r10,-572(r11)
	PPC_STORE_U32(ctx.r11.u32 + -572, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8328C49C"))) PPC_WEAK_FUNC(sub_8328C49C);
PPC_FUNC_IMPL(__imp__sub_8328C49C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8328C4A0"))) PPC_WEAK_FUNC(sub_8328C4A0);
PPC_FUNC_IMPL(__imp__sub_8328C4A0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31822
	ctx.r11.s64 = -2085486592;
	// ld r11,-584(r11)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r11.u32 + -584);
	// cmpdi cr6,r11,1
	ctx.cr6.compare<int64_t>(ctx.r11.s64, 1, ctx.xer);
	// beq cr6,0x8328c4bc
	if (ctx.cr6.eq) goto loc_8328C4BC;
	// cmpdi cr6,r11,0
	ctx.cr6.compare<int64_t>(ctx.r11.s64, 0, ctx.xer);
	// li r3,0
	ctx.r3.s64 = 0;
	// bnelr cr6
	if (!ctx.cr6.eq) return;
loc_8328C4BC:
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8328C4C4"))) PPC_WEAK_FUNC(sub_8328C4C4);
PPC_FUNC_IMPL(__imp__sub_8328C4C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8328C4C8"))) PPC_WEAK_FUNC(sub_8328C4C8);
PPC_FUNC_IMPL(__imp__sub_8328C4C8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31822
	ctx.r11.s64 = -2085486592;
	// ld r3,-584(r11)
	ctx.r3.u64 = PPC_LOAD_U64(ctx.r11.u32 + -584);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8328C4D4"))) PPC_WEAK_FUNC(sub_8328C4D4);
PPC_FUNC_IMPL(__imp__sub_8328C4D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8328C4D8"))) PPC_WEAK_FUNC(sub_8328C4D8);
PPC_FUNC_IMPL(__imp__sub_8328C4D8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31822
	ctx.r11.s64 = -2085486592;
	// std r3,-584(r11)
	PPC_STORE_U64(ctx.r11.u32 + -584, ctx.r3.u64);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8328C4E4"))) PPC_WEAK_FUNC(sub_8328C4E4);
PPC_FUNC_IMPL(__imp__sub_8328C4E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8328C4E8"))) PPC_WEAK_FUNC(sub_8328C4E8);
PPC_FUNC_IMPL(__imp__sub_8328C4E8) {
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
	// lis r11,-32219
	ctx.r11.s64 = -2111504384;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r11,21988
	ctx.r3.s64 = ctx.r11.s64 + 21988;
	// bl 0x832f72f0
	ctx.lr = 0x8328C50C;
	sub_832F72F0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x8328c518
	if (!ctx.cr0.eq) goto loc_8328C518;
	// lwz r31,80(r1)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
loc_8328C518:
	// lis r9,-31822
	ctx.r9.s64 = -2085486592;
	// lis r11,-31822
	ctx.r11.s64 = -2085486592;
	// lwz r10,-572(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + -572);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stw r10,-572(r9)
	PPC_STORE_U32(ctx.r9.u32 + -572, ctx.r10.u32);
	// lwz r10,-572(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + -572);
	// cmpwi cr6,r10,1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 1, ctx.xer);
	// ble cr6,0x8328c544
	if (!ctx.cr6.gt) goto loc_8328C544;
	// lwz r10,-576(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + -576);
	// cmpw cr6,r10,r31
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r31.s32, ctx.xer);
	// beq cr6,0x8328c590
	if (ctx.cr6.eq) goto loc_8328C590;
loc_8328C544:
	// cmpwi cr6,r31,-1
	ctx.cr6.compare<int32_t>(ctx.r31.s32, -1, ctx.xer);
	// stw r31,-576(r11)
	PPC_STORE_U32(ctx.r11.u32 + -576, ctx.r31.u32);
	// beq cr6,0x8328c588
	if (ctx.cr6.eq) goto loc_8328C588;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x833be0e0
	ctx.lr = 0x8328C558;
	sub_833BE0E0(ctx, base);
	// lis r10,762
	ctx.r10.s64 = 49938432;
	// ld r11,88(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// ori r10,r10,61568
	ctx.r10.u64 = ctx.r10.u64 | 61568;
	// cmpd cr6,r11,r10
	ctx.cr6.compare<int64_t>(ctx.r11.s64, ctx.r10.s64, ctx.xer);
	// bne cr6,0x8328c574
	if (!ctx.cr6.eq) goto loc_8328C574;
	// lis r11,761
	ctx.r11.s64 = 49872896;
	// ori r11,r11,2104
	ctx.r11.u64 = ctx.r11.u64 | 2104;
loc_8328C574:
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x8328c588
	if (ctx.cr6.eq) goto loc_8328C588;
	// cmpdi cr6,r11,0
	ctx.cr6.compare<int64_t>(ctx.r11.s64, 0, ctx.xer);
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// bne cr6,0x8328c58c
	if (!ctx.cr6.eq) goto loc_8328C58C;
loc_8328C588:
	// li r3,1
	ctx.r3.s64 = 1;
loc_8328C58C:
	// bl 0x8328c4d8
	ctx.lr = 0x8328C590;
	sub_8328C4D8(ctx, base);
loc_8328C590:
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

__attribute__((alias("__imp__sub_8328C5A4"))) PPC_WEAK_FUNC(sub_8328C5A4);
PPC_FUNC_IMPL(__imp__sub_8328C5A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8328C5A8"))) PPC_WEAK_FUNC(sub_8328C5A8);
PPC_FUNC_IMPL(__imp__sub_8328C5A8) {
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
	// li r5,240
	ctx.r5.s64 = 240;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r3,24
	ctx.r3.s64 = ctx.r3.s64 + 24;
	// bl 0x833a2b30
	ctx.lr = 0x8328C5CC;
	sub_833A2B30(ctx, base);
	// lwz r11,436(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 436);
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r10,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r10.u32);
	// stw r11,436(r31)
	PPC_STORE_U32(ctx.r31.u32 + 436, ctx.r11.u32);
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

__attribute__((alias("__imp__sub_8328C5F4"))) PPC_WEAK_FUNC(sub_8328C5F4);
PPC_FUNC_IMPL(__imp__sub_8328C5F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8328C5F8"))) PPC_WEAK_FUNC(sub_8328C5F8);
PPC_FUNC_IMPL(__imp__sub_8328C5F8) {
	PPC_FUNC_PROLOGUE();
	// ld r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r4.u32 + 0);
	// addi r10,r3,312
	ctx.r10.s64 = ctx.r3.s64 + 312;
	// std r11,312(r3)
	PPC_STORE_U64(ctx.r3.u32 + 312, ctx.r11.u64);
	// ld r11,8(r4)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r4.u32 + 8);
	// std r11,320(r3)
	PPC_STORE_U64(ctx.r3.u32 + 320, ctx.r11.u64);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8328C610"))) PPC_WEAK_FUNC(sub_8328C610);
PPC_FUNC_IMPL(__imp__sub_8328C610) {
	PPC_FUNC_PROLOGUE();
	// ld r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r4.u32 + 0);
	// addi r10,r3,328
	ctx.r10.s64 = ctx.r3.s64 + 328;
	// std r11,328(r3)
	PPC_STORE_U64(ctx.r3.u32 + 328, ctx.r11.u64);
	// ld r11,8(r4)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r4.u32 + 8);
	// std r11,336(r3)
	PPC_STORE_U64(ctx.r3.u32 + 336, ctx.r11.u64);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8328C628"))) PPC_WEAK_FUNC(sub_8328C628);
PPC_FUNC_IMPL(__imp__sub_8328C628) {
	PPC_FUNC_PROLOGUE();
	// ld r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r4.u32 + 0);
	// addi r10,r3,344
	ctx.r10.s64 = ctx.r3.s64 + 344;
	// std r11,344(r3)
	PPC_STORE_U64(ctx.r3.u32 + 344, ctx.r11.u64);
	// ld r11,8(r4)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r4.u32 + 8);
	// std r11,352(r3)
	PPC_STORE_U64(ctx.r3.u32 + 352, ctx.r11.u64);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8328C640"))) PPC_WEAK_FUNC(sub_8328C640);
PPC_FUNC_IMPL(__imp__sub_8328C640) {
	PPC_FUNC_PROLOGUE();
	// ld r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r4.u32 + 0);
	// addi r10,r3,360
	ctx.r10.s64 = ctx.r3.s64 + 360;
	// std r11,360(r3)
	PPC_STORE_U64(ctx.r3.u32 + 360, ctx.r11.u64);
	// ld r11,8(r4)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r4.u32 + 8);
	// std r11,368(r3)
	PPC_STORE_U64(ctx.r3.u32 + 368, ctx.r11.u64);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8328C658"))) PPC_WEAK_FUNC(sub_8328C658);
PPC_FUNC_IMPL(__imp__sub_8328C658) {
	PPC_FUNC_PROLOGUE();
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// blelr cr6
	if (!ctx.cr6.gt) return;
	// stw r4,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r4.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8328C668"))) PPC_WEAK_FUNC(sub_8328C668);
PPC_FUNC_IMPL(__imp__sub_8328C668) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,416(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 416);
	// lwz r10,12(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// stw r11,416(r3)
	PPC_STORE_U32(ctx.r3.u32 + 416, ctx.r11.u32);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// ld r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r4.u32 + 0);
	// ld r10,304(r3)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r3.u32 + 304);
	// ld r9,8(r4)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r4.u32 + 8);
	// mulld r11,r10,r11
	ctx.r11.s64 = ctx.r10.s64 * ctx.r11.s64;
	// ld r10,296(r3)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r3.u32 + 296);
	// divd r11,r11,r9
	ctx.r11.s64 = ctx.r11.s64 / ctx.r9.s64;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// std r11,296(r3)
	PPC_STORE_U64(ctx.r3.u32 + 296, ctx.r11.u64);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8328C6A4"))) PPC_WEAK_FUNC(sub_8328C6A4);
PPC_FUNC_IMPL(__imp__sub_8328C6A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8328C6A8"))) PPC_WEAK_FUNC(sub_8328C6A8);
PPC_FUNC_IMPL(__imp__sub_8328C6A8) {
	PPC_FUNC_PROLOGUE();
	// stw r4,408(r3)
	PPC_STORE_U32(ctx.r3.u32 + 408, ctx.r4.u32);
	// stw r5,412(r3)
	PPC_STORE_U32(ctx.r3.u32 + 412, ctx.r5.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8328C6B4"))) PPC_WEAK_FUNC(sub_8328C6B4);
PPC_FUNC_IMPL(__imp__sub_8328C6B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8328C6B8"))) PPC_WEAK_FUNC(sub_8328C6B8);
PPC_FUNC_IMPL(__imp__sub_8328C6B8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lwz r9,16(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// li r10,0
	ctx.r10.s64 = 0;
	// li r11,0
	ctx.r11.s64 = 0;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// ble cr6,0x8328c6e4
	if (!ctx.cr6.gt) goto loc_8328C6E4;
	// addi r8,r3,20
	ctx.r8.s64 = ctx.r3.s64 + 20;
loc_8328C6D0:
	// lwzu r7,4(r8)
	ea = 4 + ctx.r8.u32;
	ctx.r7.u64 = PPC_LOAD_U32(ea);
	ctx.r8.u32 = ea;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// add r10,r7,r10
	ctx.r10.u64 = ctx.r7.u64 + ctx.r10.u64;
	// cmpw cr6,r11,r9
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r9.s32, ctx.xer);
	// blt cr6,0x8328c6d0
	if (ctx.cr6.lt) goto loc_8328C6D0;
loc_8328C6E4:
	// divw r3,r10,r9
	ctx.r3.s32 = ctx.r10.s32 / ctx.r9.s32;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8328C6EC"))) PPC_WEAK_FUNC(sub_8328C6EC);
PPC_FUNC_IMPL(__imp__sub_8328C6EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8328C6F0"))) PPC_WEAK_FUNC(sub_8328C6F0);
PPC_FUNC_IMPL(__imp__sub_8328C6F0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-448(r1)
	ea = -448 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32219
	ctx.r11.s64 = -2111504384;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,22000
	ctx.r4.s64 = ctx.r11.s64 + 22000;
	// li r5,351
	ctx.r5.s64 = 351;
	// bl 0x833a1390
	ctx.lr = 0x8328C714;
	sub_833A1390(ctx, base);
	// lis r31,-31827
	ctx.r31.s64 = -2085814272;
	// lwz r3,16804(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16804);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8328c794
	if (ctx.cr6.eq) goto loc_8328C794;
	// lis r11,-31827
	ctx.r11.s64 = -2085814272;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r5,16800(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16800);
	// bl 0x833a2b30
	ctx.lr = 0x8328C734;
	sub_833A2B30(ctx, base);
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// lis r10,-31822
	ctx.r10.s64 = -2085486592;
	// addi r9,r11,-1
	ctx.r9.s64 = ctx.r11.s64 + -1;
	// lwz r11,16804(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16804);
	// addi r8,r11,-1
	ctx.r8.s64 = ctx.r11.s64 + -1;
	// stw r11,-596(r10)
	PPC_STORE_U32(ctx.r10.u32 + -596, ctx.r11.u32);
loc_8328C74C:
	// lbzu r11,1(r9)
	ea = 1 + ctx.r9.u32;
	ctx.r11.u64 = PPC_LOAD_U8(ea);
	ctx.r9.u32 = ea;
	// extsb. r7,r11
	ctx.r7.s64 = ctx.r11.s8;
	ctx.cr0.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// stbu r11,1(r8)
	ea = 1 + ctx.r8.u32;
	PPC_STORE_U8(ea, ctx.r11.u8);
	ctx.r8.u32 = ea;
	// bne 0x8328c74c
	if (!ctx.cr0.eq) goto loc_8328C74C;
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// mr r9,r11
	ctx.r9.u64 = ctx.r11.u64;
loc_8328C764:
	// lbz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// bne cr6,0x8328c764
	if (!ctx.cr6.eq) goto loc_8328C764;
	// subf r9,r9,r11
	ctx.r9.s64 = ctx.r11.s64 - ctx.r9.s64;
	// lwz r11,-596(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -596);
	// lis r8,-31822
	ctx.r8.s64 = -2085486592;
	// addi r9,r9,-1
	ctx.r9.s64 = ctx.r9.s64 + -1;
	// rotlwi r9,r9,0
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r9.u32, 0);
	// add r11,r9,r11
	ctx.r11.u64 = ctx.r9.u64 + ctx.r11.u64;
	// stw r11,-596(r10)
	PPC_STORE_U32(ctx.r10.u32 + -596, ctx.r11.u32);
	// stw r11,-600(r8)
	PPC_STORE_U32(ctx.r8.u32 + -600, ctx.r11.u32);
loc_8328C794:
	// addi r1,r1,448
	ctx.r1.s64 = ctx.r1.s64 + 448;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8328C7A8"))) PPC_WEAK_FUNC(sub_8328C7A8);
PPC_FUNC_IMPL(__imp__sub_8328C7A8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x833a0180
	ctx.lr = 0x8328C7B0;
	__savegprlr_18(ctx, base);
	// stwu r1,-672(r1)
	ea = -672 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31827
	ctx.r11.s64 = -2085814272;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// lwz r11,16804(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16804);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8328c934
	if (ctx.cr6.eq) goto loc_8328C934;
	// lwz r7,416(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 416);
	// lis r10,-31822
	ctx.r10.s64 = -2085486592;
	// ld r11,400(r3)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r3.u32 + 400);
	// lis r8,-32219
	ctx.r8.s64 = -2111504384;
	// ld r9,296(r3)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r3.u32 + 296);
	// extsw r6,r11
	ctx.r6.s64 = ctx.r11.s32;
	// ld r29,392(r3)
	ctx.r29.u64 = PPC_LOAD_U64(ctx.r3.u32 + 392);
	// addi r4,r8,22352
	ctx.r4.s64 = ctx.r8.s64 + 22352;
	// ld r27,384(r3)
	ctx.r27.u64 = PPC_LOAD_U64(ctx.r3.u32 + 384);
	// lwz r11,2428(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 2428);
	// extsw r9,r9
	ctx.r9.s64 = ctx.r9.s32;
	// stw r7,268(r1)
	PPC_STORE_U32(ctx.r1.u32 + 268, ctx.r7.u32);
	// lwz r8,448(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 448);
	// subf r31,r9,r6
	ctx.r31.s64 = ctx.r6.s64 - ctx.r9.s64;
	// lwz r10,424(r5)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r5.u32 + 424);
	// lwz r7,420(r5)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r5.u32 + 420);
	// stw r29,260(r1)
	PPC_STORE_U32(ctx.r1.u32 + 260, ctx.r29.u32);
	// stw r27,252(r1)
	PPC_STORE_U32(ctx.r1.u32 + 252, ctx.r27.u32);
	// stw r8,244(r1)
	PPC_STORE_U32(ctx.r1.u32 + 244, ctx.r8.u32);
	// stw r10,212(r1)
	PPC_STORE_U32(ctx.r1.u32 + 212, ctx.r10.u32);
	// stw r7,204(r1)
	PPC_STORE_U32(ctx.r1.u32 + 204, ctx.r7.u32);
	// stw r11,276(r1)
	PPC_STORE_U32(ctx.r1.u32 + 276, ctx.r11.u32);
	// stw r31,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r31.u32);
	// ld r11,280(r5)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r5.u32 + 280);
	// ld r10,264(r5)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r5.u32 + 264);
	// ld r8,288(r5)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r5.u32 + 288);
	// mulli r7,r11,1000
	ctx.r7.s64 = ctx.r11.s64 * 1000;
	// stw r6,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r6.u32);
	// lwz r30,444(r3)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r3.u32 + 444);
	// lwz r28,432(r3)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r3.u32 + 432);
	// lwz r26,428(r3)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r3.u32 + 428);
	// lwz r29,440(r5)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r5.u32 + 440);
	// lwz r27,436(r5)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r5.u32 + 436);
	// lwz r25,8(r5)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r5.u32 + 8);
	// extsw r10,r10
	ctx.r10.s64 = ctx.r10.s32;
	// lwz r24,4(r5)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r5.u32 + 4);
	// divd r7,r7,r8
	ctx.r7.s64 = ctx.r7.s64 / ctx.r8.s64;
	// lwz r23,472(r5)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r5.u32 + 472);
	// divd r31,r11,r8
	ctx.r31.s64 = ctx.r11.s64 / ctx.r8.s64;
	// lwz r22,468(r5)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r5.u32 + 468);
	// subf r8,r9,r10
	ctx.r8.s64 = ctx.r10.s64 - ctx.r9.s64;
	// lwz r21,464(r5)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r5.u32 + 464);
	// lwz r20,460(r5)
	ctx.r20.u64 = PPC_LOAD_U32(ctx.r5.u32 + 460);
	// sradi r6,r11,32
	ctx.xer.ca = (ctx.r11.s64 < 0) & ((ctx.r11.u64 & 0xFFFFFFFF) != 0);
	ctx.r6.s64 = ctx.r11.s64 >> 32;
	// lwz r19,456(r5)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r5.u32 + 456);
	// addi r3,r1,288
	ctx.r3.s64 = ctx.r1.s64 + 288;
	// lwz r18,452(r5)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r5.u32 + 452);
	// extsw r7,r7
	ctx.r7.s64 = ctx.r7.s32;
	// stw r8,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r8.u32);
	// rotlwi r8,r6,0
	ctx.r8.u64 = __builtin_rotateleft32(ctx.r6.u32, 0);
	// stw r9,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r9.u32);
	// extsw r9,r11
	ctx.r9.s64 = ctx.r11.s32;
	// stw r10,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r10.u32);
	// clrlwi r10,r11,1
	ctx.r10.u64 = ctx.r11.u32 & 0x7FFFFFFF;
	// extsw r6,r31
	ctx.r6.s64 = ctx.r31.s32;
	// stw r30,236(r1)
	PPC_STORE_U32(ctx.r1.u32 + 236, ctx.r30.u32);
	// stw r28,228(r1)
	PPC_STORE_U32(ctx.r1.u32 + 228, ctx.r28.u32);
	// stw r26,220(r1)
	PPC_STORE_U32(ctx.r1.u32 + 220, ctx.r26.u32);
	// stw r29,196(r1)
	PPC_STORE_U32(ctx.r1.u32 + 196, ctx.r29.u32);
	// stw r27,188(r1)
	PPC_STORE_U32(ctx.r1.u32 + 188, ctx.r27.u32);
	// stw r25,180(r1)
	PPC_STORE_U32(ctx.r1.u32 + 180, ctx.r25.u32);
	// stw r24,172(r1)
	PPC_STORE_U32(ctx.r1.u32 + 172, ctx.r24.u32);
	// stw r23,164(r1)
	PPC_STORE_U32(ctx.r1.u32 + 164, ctx.r23.u32);
	// stw r22,156(r1)
	PPC_STORE_U32(ctx.r1.u32 + 156, ctx.r22.u32);
	// stw r21,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, ctx.r21.u32);
	// stw r20,140(r1)
	PPC_STORE_U32(ctx.r1.u32 + 140, ctx.r20.u32);
	// stw r19,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r19.u32);
	// stw r18,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r18.u32);
	// bl 0x833a2630
	ctx.lr = 0x8328C8DC;
	sub_833A2630(ctx, base);
	// lis r11,-31822
	ctx.r11.s64 = -2085486592;
	// addi r9,r1,287
	ctx.r9.s64 = ctx.r1.s64 + 287;
	// lwz r10,-596(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + -596);
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
loc_8328C8EC:
	// lbzu r8,1(r9)
	ea = 1 + ctx.r9.u32;
	ctx.r8.u64 = PPC_LOAD_U8(ea);
	ctx.r9.u32 = ea;
	// extsb. r7,r8
	ctx.r7.s64 = ctx.r8.s8;
	ctx.cr0.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// stbu r8,1(r10)
	ea = 1 + ctx.r10.u32;
	PPC_STORE_U8(ea, ctx.r8.u8);
	ctx.r10.u32 = ea;
	// bne 0x8328c8ec
	if (!ctx.cr0.eq) goto loc_8328C8EC;
	// lis r10,-31827
	ctx.r10.s64 = -2085814272;
	// lis r9,-31827
	ctx.r9.s64 = -2085814272;
	// lwz r8,16804(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 16804);
	// lwz r9,16800(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + 16800);
	// lwz r10,-596(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + -596);
	// add r9,r9,r8
	ctx.r9.u64 = ctx.r9.u64 + ctx.r8.u64;
	// add r10,r10,r3
	ctx.r10.u64 = ctx.r10.u64 + ctx.r3.u64;
	// addi r9,r9,-1024
	ctx.r9.s64 = ctx.r9.s64 + -1024;
	// stw r10,-596(r11)
	PPC_STORE_U32(ctx.r11.u32 + -596, ctx.r10.u32);
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// blt cr6,0x8328c934
	if (ctx.cr6.lt) goto loc_8328C934;
	// lis r10,-31822
	ctx.r10.s64 = -2085486592;
	// lwz r10,-600(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + -600);
	// stw r10,-596(r11)
	PPC_STORE_U32(ctx.r11.u32 + -596, ctx.r10.u32);
loc_8328C934:
	// addi r1,r1,672
	ctx.r1.s64 = ctx.r1.s64 + 672;
	// b 0x833a01d0
	__restgprlr_18(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8328C93C"))) PPC_WEAK_FUNC(sub_8328C93C);
PPC_FUNC_IMPL(__imp__sub_8328C93C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8328C940"))) PPC_WEAK_FUNC(sub_8328C940);
PPC_FUNC_IMPL(__imp__sub_8328C940) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x833a01ac
	ctx.lr = 0x8328C948;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r5,480
	ctx.r5.s64 = 480;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// bl 0x833a2b30
	ctx.lr = 0x8328C95C;
	sub_833A2B30(ctx, base);
	// li r30,1
	ctx.r30.s64 = 1;
	// li r31,0
	ctx.r31.s64 = 0;
	// li r11,10
	ctx.r11.s64 = 10;
	// stw r30,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r30.u32);
	// stw r31,4(r29)
	PPC_STORE_U32(ctx.r29.u32 + 4, ctx.r31.u32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// stw r31,8(r29)
	PPC_STORE_U32(ctx.r29.u32 + 8, ctx.r31.u32);
	// stw r30,12(r29)
	PPC_STORE_U32(ctx.r29.u32 + 12, ctx.r30.u32);
	// stw r11,16(r29)
	PPC_STORE_U32(ctx.r29.u32 + 16, ctx.r11.u32);
	// bl 0x8328c5a8
	ctx.lr = 0x8328C984;
	sub_8328C5A8(ctx, base);
	// lis r11,15
	ctx.r11.s64 = 983040;
	// lis r9,3
	ctx.r9.s64 = 196608;
	// std r31,264(r29)
	PPC_STORE_U64(ctx.r29.u32 + 264, ctx.r31.u64);
	// ori r11,r11,16960
	ctx.r11.u64 = ctx.r11.u64 | 16960;
	// std r30,272(r29)
	PPC_STORE_U64(ctx.r29.u32 + 272, ctx.r30.u64);
	// li r10,-1
	ctx.r10.s64 = -1;
	// std r31,280(r29)
	PPC_STORE_U64(ctx.r29.u32 + 280, ctx.r31.u64);
	// li r8,16683
	ctx.r8.s64 = 16683;
	// std r30,288(r29)
	PPC_STORE_U64(ctx.r29.u32 + 288, ctx.r30.u64);
	// ori r9,r9,3392
	ctx.r9.u64 = ctx.r9.u64 | 3392;
	// std r31,296(r29)
	PPC_STORE_U64(ctx.r29.u32 + 296, ctx.r31.u64);
	// std r30,304(r29)
	PPC_STORE_U64(ctx.r29.u32 + 304, ctx.r30.u64);
	// std r8,312(r29)
	PPC_STORE_U64(ctx.r29.u32 + 312, ctx.r8.u64);
	// std r11,320(r29)
	PPC_STORE_U64(ctx.r29.u32 + 320, ctx.r11.u64);
	// std r9,328(r29)
	PPC_STORE_U64(ctx.r29.u32 + 328, ctx.r9.u64);
	// std r11,336(r29)
	PPC_STORE_U64(ctx.r29.u32 + 336, ctx.r11.u64);
	// std r31,344(r29)
	PPC_STORE_U64(ctx.r29.u32 + 344, ctx.r31.u64);
	// std r11,352(r29)
	PPC_STORE_U64(ctx.r29.u32 + 352, ctx.r11.u64);
	// std r31,360(r29)
	PPC_STORE_U64(ctx.r29.u32 + 360, ctx.r31.u64);
	// std r11,368(r29)
	PPC_STORE_U64(ctx.r29.u32 + 368, ctx.r11.u64);
	// std r10,376(r29)
	PPC_STORE_U64(ctx.r29.u32 + 376, ctx.r10.u64);
	// std r10,384(r29)
	PPC_STORE_U64(ctx.r29.u32 + 384, ctx.r10.u64);
	// std r31,392(r29)
	PPC_STORE_U64(ctx.r29.u32 + 392, ctx.r31.u64);
	// std r31,400(r29)
	PPC_STORE_U64(ctx.r29.u32 + 400, ctx.r31.u64);
	// stw r30,408(r29)
	PPC_STORE_U32(ctx.r29.u32 + 408, ctx.r30.u32);
	// stw r30,412(r29)
	PPC_STORE_U32(ctx.r29.u32 + 412, ctx.r30.u32);
	// stw r31,416(r29)
	PPC_STORE_U32(ctx.r29.u32 + 416, ctx.r31.u32);
	// stw r31,420(r29)
	PPC_STORE_U32(ctx.r29.u32 + 420, ctx.r31.u32);
	// stw r31,424(r29)
	PPC_STORE_U32(ctx.r29.u32 + 424, ctx.r31.u32);
	// stw r31,428(r29)
	PPC_STORE_U32(ctx.r29.u32 + 428, ctx.r31.u32);
	// stw r31,432(r29)
	PPC_STORE_U32(ctx.r29.u32 + 432, ctx.r31.u32);
	// stw r31,436(r29)
	PPC_STORE_U32(ctx.r29.u32 + 436, ctx.r31.u32);
	// stw r31,440(r29)
	PPC_STORE_U32(ctx.r29.u32 + 440, ctx.r31.u32);
	// stw r31,444(r29)
	PPC_STORE_U32(ctx.r29.u32 + 444, ctx.r31.u32);
	// stw r31,448(r29)
	PPC_STORE_U32(ctx.r29.u32 + 448, ctx.r31.u32);
	// stw r31,452(r29)
	PPC_STORE_U32(ctx.r29.u32 + 452, ctx.r31.u32);
	// stw r31,456(r29)
	PPC_STORE_U32(ctx.r29.u32 + 456, ctx.r31.u32);
	// stw r31,460(r29)
	PPC_STORE_U32(ctx.r29.u32 + 460, ctx.r31.u32);
	// stw r31,464(r29)
	PPC_STORE_U32(ctx.r29.u32 + 464, ctx.r31.u32);
	// stw r31,468(r29)
	PPC_STORE_U32(ctx.r29.u32 + 468, ctx.r31.u32);
	// stw r31,472(r29)
	PPC_STORE_U32(ctx.r29.u32 + 472, ctx.r31.u32);
	// bl 0x8328c6f0
	ctx.lr = 0x8328CA2C;
	sub_8328C6F0(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x833a01fc
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8328CA34"))) PPC_WEAK_FUNC(sub_8328CA34);
PPC_FUNC_IMPL(__imp__sub_8328CA34) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8328CA38"))) PPC_WEAK_FUNC(sub_8328CA38);
PPC_FUNC_IMPL(__imp__sub_8328CA38) {
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
	// lwz r11,20(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// lwz r10,16(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// divw r9,r11,r10
	ctx.r9.s32 = ctx.r11.s32 / ctx.r10.s32;
	// mullw r10,r9,r10
	ctx.r10.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r10.s32);
	// subf r11,r10,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r10.s64;
	// addi r11,r11,6
	ctx.r11.s64 = ctx.r11.s64 + 6;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r4,r11,r3
	PPC_STORE_U32(ctx.r11.u32 + ctx.r3.u32, ctx.r4.u32);
	// lwz r11,20(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r11.u32);
	// bl 0x8328c6b8
	ctx.lr = 0x8328CA78;
	sub_8328C6B8(ctx, base);
	// stw r3,444(r6)
	PPC_STORE_U32(ctx.r6.u32 + 444, ctx.r3.u32);
	// stw r3,448(r6)
	PPC_STORE_U32(ctx.r6.u32 + 448, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8328CA90"))) PPC_WEAK_FUNC(sub_8328CA90);
PPC_FUNC_IMPL(__imp__sub_8328CA90) {
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
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// li r10,0
	ctx.r10.s64 = 0;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x8328cad0
	if (!ctx.cr6.gt) goto loc_8328CAD0;
	// addi r11,r3,20
	ctx.r11.s64 = ctx.r3.s64 + 20;
loc_8328CAB4:
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// subf r9,r4,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r4.s64;
	// stwu r9,4(r11)
	ea = 4 + ctx.r11.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r11.u32 = ea;
	// lwz r9,16(r6)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r6.u32 + 16);
	// cmpw cr6,r10,r9
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r9.s32, ctx.xer);
	// blt cr6,0x8328cab4
	if (ctx.cr6.lt) goto loc_8328CAB4;
loc_8328CAD0:
	// mr r3,r6
	ctx.r3.u64 = ctx.r6.u64;
	// bl 0x8328c6b8
	ctx.lr = 0x8328CAD8;
	sub_8328C6B8(ctx, base);
	// stw r3,448(r6)
	PPC_STORE_U32(ctx.r6.u32 + 448, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8328CAEC"))) PPC_WEAK_FUNC(sub_8328CAEC);
PPC_FUNC_IMPL(__imp__sub_8328CAEC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8328CAF0"))) PPC_WEAK_FUNC(sub_8328CAF0);
PPC_FUNC_IMPL(__imp__sub_8328CAF0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x833a01a0
	ctx.lr = 0x8328CAF8;
	__savegprlr_26(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// ld r11,8(r5)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r5.u32 + 8);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r27,r6
	ctx.r27.u64 = ctx.r6.u64;
	// cmpdi cr6,r11,1
	ctx.cr6.compare<int64_t>(ctx.r11.s64, 1, ctx.xer);
	// beq cr6,0x8328cf48
	if (ctx.cr6.eq) goto loc_8328CF48;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8328cf48
	if (ctx.cr6.eq) goto loc_8328CF48;
	// ld r11,376(r3)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r3.u32 + 376);
	// cmpdi cr6,r11,-1
	ctx.cr6.compare<int64_t>(ctx.r11.s64, -1, ctx.xer);
	// bne cr6,0x8328cb34
	if (!ctx.cr6.eq) goto loc_8328CB34;
	// ld r11,0(r5)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r5.u32 + 0);
	// std r11,376(r3)
	PPC_STORE_U64(ctx.r3.u32 + 376, ctx.r11.u64);
loc_8328CB34:
	// ld r10,0(r5)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r5.u32 + 0);
	// ld r9,376(r31)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r31.u32 + 376);
	// ld r28,8(r5)
	ctx.r28.u64 = PPC_LOAD_U64(ctx.r5.u32 + 8);
	// subf r29,r9,r10
	ctx.r29.s64 = ctx.r10.s64 - ctx.r9.s64;
	// ld r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r30.u32 + 0);
	// ld r10,400(r31)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r31.u32 + 400);
	// std r29,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r29.u64);
	// cmpd cr6,r10,r11
	ctx.cr6.compare<int64_t>(ctx.r10.s64, ctx.r11.s64, ctx.xer);
	// std r28,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r28.u64);
	// ble cr6,0x8328cb60
	if (!ctx.cr6.gt) goto loc_8328CB60;
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
loc_8328CB60:
	// std r11,0(r30)
	PPC_STORE_U64(ctx.r30.u32 + 0, ctx.r11.u64);
	// li r26,0
	ctx.r26.s64 = 0;
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmpwi cr6,r10,1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 1, ctx.xer);
	// bne cr6,0x8328cbb4
	if (!ctx.cr6.eq) goto loc_8328CBB4;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x8328cb84
	if (!ctx.cr6.eq) goto loc_8328CB84;
	// stw r26,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r26.u32);
loc_8328CB84:
	// lwz r11,416(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 416);
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// blt cr6,0x8328cb98
	if (ctx.cr6.lt) goto loc_8328CB98;
	// li r11,2
	ctx.r11.s64 = 2;
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
loc_8328CB98:
	// ld r11,384(r31)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r31.u32 + 384);
	// cmpdi cr6,r11,-1
	ctx.cr6.compare<int64_t>(ctx.r11.s64, -1, ctx.xer);
	// bne cr6,0x8328cc38
	if (!ctx.cr6.eq) goto loc_8328CC38;
	// std r29,384(r31)
	PPC_STORE_U64(ctx.r31.u32 + 384, ctx.r29.u64);
	// ld r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r30.u32 + 0);
	// std r11,392(r31)
	PPC_STORE_U64(ctx.r31.u32 + 392, ctx.r11.u64);
	// b 0x8328cc38
	goto loc_8328CC38;
loc_8328CBB4:
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x8328cbc8
	if (ctx.cr6.eq) goto loc_8328CBC8;
	// cmpwi cr6,r10,2
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 2, ctx.xer);
	// bne cr6,0x8328cc38
	if (!ctx.cr6.eq) goto loc_8328CC38;
loc_8328CBC8:
	// ld r10,400(r31)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r31.u32 + 400);
	// cmpd cr6,r11,r10
	ctx.cr6.compare<int64_t>(ctx.r11.s64, ctx.r10.s64, ctx.xer);
	// ble cr6,0x8328cc24
	if (!ctx.cr6.gt) goto loc_8328CC24;
	// li r10,1
	ctx.r10.s64 = 1;
	// ld r11,384(r31)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r31.u32 + 384);
	// stw r10,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r10.u32);
	// cmpdi cr6,r11,-1
	ctx.cr6.compare<int64_t>(ctx.r11.s64, -1, ctx.xer);
	// ld r10,8(r30)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r30.u32 + 8);
	// bne cr6,0x8328cbf8
	if (!ctx.cr6.eq) goto loc_8328CBF8;
	// ld r11,344(r31)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r31.u32 + 344);
	// ld r9,352(r31)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r31.u32 + 352);
	// b 0x8328cc00
	goto loc_8328CC00;
loc_8328CBF8:
	// ld r11,360(r31)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r31.u32 + 360);
	// ld r9,368(r31)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r31.u32 + 368);
loc_8328CC00:
	// mulld r11,r11,r10
	ctx.r11.s64 = ctx.r11.s64 * ctx.r10.s64;
	// std r29,384(r31)
	PPC_STORE_U64(ctx.r31.u32 + 384, ctx.r29.u64);
	// ld r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r30.u32 + 0);
	// divd r11,r11,r9
	ctx.r11.s64 = ctx.r11.s64 / ctx.r9.s64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// std r11,392(r31)
	PPC_STORE_U64(ctx.r31.u32 + 392, ctx.r11.u64);
	// bl 0x8328c5a8
	ctx.lr = 0x8328CC20;
	sub_8328C5A8(ctx, base);
	// b 0x8328cc38
	goto loc_8328CC38;
loc_8328CC24:
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8328cc38
	if (!ctx.cr6.eq) goto loc_8328CC38;
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
loc_8328CC38:
	// ld r11,400(r31)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r31.u32 + 400);
	// ld r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r30.u32 + 0);
	// mr r9,r11
	ctx.r9.u64 = ctx.r11.u64;
	// cmpd cr6,r11,r10
	ctx.cr6.compare<int64_t>(ctx.r11.s64, ctx.r10.s64, ctx.xer);
	// bgt cr6,0x8328cc50
	if (ctx.cr6.gt) goto loc_8328CC50;
	// mr r9,r10
	ctx.r9.u64 = ctx.r10.u64;
loc_8328CC50:
	// ld r11,384(r31)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r31.u32 + 384);
	// std r9,400(r31)
	PPC_STORE_U64(ctx.r31.u32 + 400, ctx.r9.u64);
	// cmpdi cr6,r11,-1
	ctx.cr6.compare<int64_t>(ctx.r11.s64, -1, ctx.xer);
	// bne cr6,0x8328cc68
	if (!ctx.cr6.eq) goto loc_8328CC68;
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// b 0x8328cc80
	goto loc_8328CC80;
loc_8328CC68:
	// ld r10,8(r30)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r30.u32 + 8);
	// subf r8,r11,r29
	ctx.r8.s64 = ctx.r29.s64 - ctx.r11.s64;
	// ld r11,392(r31)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r31.u32 + 392);
	// mulld r10,r8,r10
	ctx.r10.s64 = ctx.r8.s64 * ctx.r10.s64;
	// divd r10,r10,r28
	ctx.r10.s64 = ctx.r10.s64 / ctx.r28.s64;
	// add r5,r10,r11
	ctx.r5.u64 = ctx.r10.u64 + ctx.r11.u64;
loc_8328CC80:
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8328ccc4
	if (!ctx.cr6.eq) goto loc_8328CCC4;
	// cmpd cr6,r5,r9
	ctx.cr6.compare<int64_t>(ctx.r5.s64, ctx.r9.s64, ctx.xer);
	// ble cr6,0x8328cdf8
	if (!ctx.cr6.gt) goto loc_8328CDF8;
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// std r29,384(r31)
	PPC_STORE_U64(ctx.r31.u32 + 384, ctx.r29.u64);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8328ccac
	if (ctx.cr6.eq) goto loc_8328CCAC;
	// std r9,392(r31)
	PPC_STORE_U64(ctx.r31.u32 + 392, ctx.r9.u64);
	// b 0x8328ccb4
	goto loc_8328CCB4;
loc_8328CCAC:
	// ld r11,296(r31)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r31.u32 + 296);
	// std r11,392(r31)
	PPC_STORE_U64(ctx.r31.u32 + 392, ctx.r11.u64);
loc_8328CCB4:
	// lwz r11,420(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 420);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,420(r31)
	PPC_STORE_U32(ctx.r31.u32 + 420, ctx.r11.u32);
	// b 0x8328cdf8
	goto loc_8328CDF8;
loc_8328CCC4:
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// bne cr6,0x8328ccfc
	if (!ctx.cr6.eq) goto loc_8328CCFC;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// std r29,384(r31)
	PPC_STORE_U64(ctx.r31.u32 + 384, ctx.r29.u64);
	// beq cr6,0x8328cce4
	if (ctx.cr6.eq) goto loc_8328CCE4;
	// std r9,392(r31)
	PPC_STORE_U64(ctx.r31.u32 + 392, ctx.r9.u64);
	// b 0x8328ccec
	goto loc_8328CCEC;
loc_8328CCE4:
	// ld r11,296(r31)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r31.u32 + 296);
	// std r11,392(r31)
	PPC_STORE_U64(ctx.r31.u32 + 392, ctx.r11.u64);
loc_8328CCEC:
	// lwz r11,424(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 424);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,424(r31)
	PPC_STORE_U32(ctx.r31.u32 + 424, ctx.r11.u32);
	// b 0x8328cdf8
	goto loc_8328CDF8;
loc_8328CCFC:
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x8328cdf8
	if (!ctx.cr6.eq) goto loc_8328CDF8;
	// ld r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r30.u32 + 0);
	// subf r10,r5,r11
	ctx.r10.s64 = ctx.r11.s64 - ctx.r5.s64;
	// cmpdi cr6,r10,0
	ctx.cr6.compare<int64_t>(ctx.r10.s64, 0, ctx.xer);
	// bge cr6,0x8328cd18
	if (!ctx.cr6.lt) goto loc_8328CD18;
	// subf r10,r11,r5
	ctx.r10.s64 = ctx.r5.s64 - ctx.r11.s64;
loc_8328CD18:
	// ld r9,328(r31)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r31.u32 + 328);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// ld r8,8(r30)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r30.u32 + 8);
	// ld r7,336(r31)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r31.u32 + 336);
	// mulld r9,r9,r8
	ctx.r9.s64 = ctx.r9.s64 * ctx.r8.s64;
	// divd r9,r9,r7
	ctx.r9.s64 = ctx.r9.s64 / ctx.r7.s64;
	// cmpd cr6,r10,r9
	ctx.cr6.compare<int64_t>(ctx.r10.s64, ctx.r9.s64, ctx.xer);
	// ble cr6,0x8328cd58
	if (!ctx.cr6.gt) goto loc_8328CD58;
	// std r29,384(r31)
	PPC_STORE_U64(ctx.r31.u32 + 384, ctx.r29.u64);
	// ld r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r30.u32 + 0);
	// std r11,392(r31)
	PPC_STORE_U64(ctx.r31.u32 + 392, ctx.r11.u64);
	// bl 0x8328c5a8
	ctx.lr = 0x8328CD48;
	sub_8328C5A8(ctx, base);
	// lwz r11,440(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 440);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,440(r31)
	PPC_STORE_U32(ctx.r31.u32 + 440, ctx.r11.u32);
	// b 0x8328cdf8
	goto loc_8328CDF8;
loc_8328CD58:
	// extsw r11,r11
	ctx.r11.s64 = ctx.r11.s32;
	// extsw r10,r5
	ctx.r10.s64 = ctx.r5.s32;
	// subf r4,r10,r11
	ctx.r4.s64 = ctx.r11.s64 - ctx.r10.s64;
	// bl 0x8328ca38
	ctx.lr = 0x8328CD68;
	sub_8328CA38(ctx, base);
	// extsw r10,r3
	ctx.r10.s64 = ctx.r3.s32;
	// ld r9,8(r30)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r30.u32 + 8);
	// ld r11,312(r31)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r31.u32 + 312);
	// sradi r8,r10,63
	ctx.xer.ca = (ctx.r10.s64 < 0) & ((ctx.r10.u64 & 0x7FFFFFFFFFFFFFFF) != 0);
	ctx.r8.s64 = ctx.r10.s64 >> 63;
	// ld r7,320(r31)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r31.u32 + 320);
	// mulld r11,r11,r9
	ctx.r11.s64 = ctx.r11.s64 * ctx.r9.s64;
	// xor r9,r10,r8
	ctx.r9.u64 = ctx.r10.u64 ^ ctx.r8.u64;
	// divd r11,r11,r7
	ctx.r11.s64 = ctx.r11.s64 / ctx.r7.s64;
	// subf r9,r8,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r8.s64;
	// cmpd cr6,r9,r11
	ctx.cr6.compare<int64_t>(ctx.r9.s64, ctx.r11.s64, ctx.xer);
	// ble cr6,0x8328cdf8
	if (!ctx.cr6.gt) goto loc_8328CDF8;
	// cmpd cr6,r10,r11
	ctx.cr6.compare<int64_t>(ctx.r10.s64, ctx.r11.s64, ctx.xer);
	// rldicr r10,r10,1,62
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u64, 1) & 0xFFFFFFFFFFFFFFFE;
	// divd r10,r10,r11
	ctx.r10.s64 = ctx.r10.s64 / ctx.r11.s64;
	// ble cr6,0x8328cdbc
	if (!ctx.cr6.gt) goto loc_8328CDBC;
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// lwz r8,428(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 428);
	// extsw r9,r10
	ctx.r9.s64 = ctx.r10.s32;
	// add r9,r9,r8
	ctx.r9.u64 = ctx.r9.u64 + ctx.r8.u64;
	// stw r9,428(r31)
	PPC_STORE_U32(ctx.r31.u32 + 428, ctx.r9.u32);
	// b 0x8328cdd0
	goto loc_8328CDD0;
loc_8328CDBC:
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// lwz r9,432(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 432);
	// extsw r8,r10
	ctx.r8.s64 = ctx.r10.s32;
	// subf r9,r8,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r8.s64;
	// stw r9,432(r31)
	PPC_STORE_U32(ctx.r31.u32 + 432, ctx.r9.u32);
loc_8328CDD0:
	// mulld r11,r10,r11
	ctx.r11.s64 = ctx.r10.s64 * ctx.r11.s64;
	// std r29,384(r31)
	PPC_STORE_U64(ctx.r31.u32 + 384, ctx.r29.u64);
	// rldicl r10,r11,1,63
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u64, 1) & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// sradi r11,r11,1
	ctx.xer.ca = (ctx.r11.s64 < 0) & ((ctx.r11.u64 & 0x1) != 0);
	ctx.r11.s64 = ctx.r11.s64 >> 1;
	// add r10,r11,r5
	ctx.r10.u64 = ctx.r11.u64 + ctx.r5.u64;
	// extsw r4,r11
	ctx.r4.s64 = ctx.r11.s32;
	// std r10,392(r31)
	PPC_STORE_U64(ctx.r31.u32 + 392, ctx.r10.u64);
	// bl 0x8328ca90
	ctx.lr = 0x8328CDF8;
	sub_8328CA90(ctx, base);
loc_8328CDF8:
	// ld r11,384(r31)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r31.u32 + 384);
	// cmpdi cr6,r11,-1
	ctx.cr6.compare<int64_t>(ctx.r11.s64, -1, ctx.xer);
	// bne cr6,0x8328ce0c
	if (!ctx.cr6.eq) goto loc_8328CE0C;
	// mr r10,r26
	ctx.r10.u64 = ctx.r26.u64;
	// b 0x8328ce24
	goto loc_8328CE24;
loc_8328CE0C:
	// ld r9,8(r30)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r30.u32 + 8);
	// subf r11,r11,r29
	ctx.r11.s64 = ctx.r29.s64 - ctx.r11.s64;
	// ld r10,392(r31)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r31.u32 + 392);
	// mulld r11,r11,r9
	ctx.r11.s64 = ctx.r11.s64 * ctx.r9.s64;
	// divd r11,r11,r28
	ctx.r11.s64 = ctx.r11.s64 / ctx.r28.s64;
	// add r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 + ctx.r10.u64;
loc_8328CE24:
	// std r10,0(r27)
	PPC_STORE_U64(ctx.r27.u32 + 0, ctx.r10.u64);
	// addi r11,r31,296
	ctx.r11.s64 = ctx.r31.s64 + 296;
	// ld r9,8(r30)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r30.u32 + 8);
	// std r9,8(r27)
	PPC_STORE_U64(ctx.r27.u32 + 8, ctx.r9.u64);
	// ld r9,296(r31)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r31.u32 + 296);
	// cmpd cr6,r10,r9
	ctx.cr6.compare<int64_t>(ctx.r10.s64, ctx.r9.s64, ctx.xer);
	// bge cr6,0x8328ce50
	if (!ctx.cr6.lt) goto loc_8328CE50;
	// ld r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r11.u32 + 0);
	// std r10,0(r27)
	PPC_STORE_U64(ctx.r27.u32 + 0, ctx.r10.u64);
	// ld r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r11.u32 + 8);
	// std r10,8(r27)
	PPC_STORE_U64(ctx.r27.u32 + 8, ctx.r10.u64);
loc_8328CE50:
	// addi r9,r1,80
	ctx.r9.s64 = ctx.r1.s64 + 80;
	// ld r8,0(r30)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r30.u32 + 0);
	// addi r7,r31,264
	ctx.r7.s64 = ctx.r31.s64 + 264;
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// ld r7,0(r9)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r9.u32 + 0);
	// ld r9,8(r9)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r9.u32 + 8);
	// std r8,264(r31)
	PPC_STORE_U64(ctx.r31.u32 + 264, ctx.r8.u64);
	// ld r8,8(r30)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r30.u32 + 8);
	// std r8,272(r31)
	PPC_STORE_U64(ctx.r31.u32 + 272, ctx.r8.u64);
	// std r9,288(r31)
	PPC_STORE_U64(ctx.r31.u32 + 288, ctx.r9.u64);
	// std r7,280(r31)
	PPC_STORE_U64(ctx.r31.u32 + 280, ctx.r7.u64);
	// ld r9,0(r27)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r27.u32 + 0);
	// std r9,0(r11)
	PPC_STORE_U64(ctx.r11.u32 + 0, ctx.r9.u64);
	// ld r9,8(r27)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r27.u32 + 8);
	// std r9,8(r11)
	PPC_STORE_U64(ctx.r11.u32 + 8, ctx.r9.u64);
	// ld r9,0(r30)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r30.u32 + 0);
	// ld r11,0(r27)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r27.u32 + 0);
	// extsw r11,r11
	ctx.r11.s64 = ctx.r11.s32;
	// extsw r9,r9
	ctx.r9.s64 = ctx.r9.s32;
	// subf r11,r11,r9
	ctx.r11.s64 = ctx.r9.s64 - ctx.r11.s64;
	// bne cr6,0x8328ced4
	if (!ctx.cr6.eq) goto loc_8328CED4;
	// lwz r10,452(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 452);
	// cmpw cr6,r10,r11
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r11.s32, ctx.xer);
	// bgt cr6,0x8328ceb8
	if (ctx.cr6.gt) goto loc_8328CEB8;
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
loc_8328CEB8:
	// stw r10,452(r31)
	PPC_STORE_U32(ctx.r31.u32 + 452, ctx.r10.u32);
	// lwz r10,456(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 456);
	// cmpw cr6,r10,r11
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r11.s32, ctx.xer);
	// bge cr6,0x8328cecc
	if (!ctx.cr6.lt) goto loc_8328CECC;
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
loc_8328CECC:
	// stw r11,456(r31)
	PPC_STORE_U32(ctx.r31.u32 + 456, ctx.r11.u32);
	// b 0x8328cf30
	goto loc_8328CF30;
loc_8328CED4:
	// cmpwi cr6,r10,2
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 2, ctx.xer);
	// bne cr6,0x8328cf08
	if (!ctx.cr6.eq) goto loc_8328CF08;
	// lwz r10,460(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 460);
	// cmpw cr6,r10,r11
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r11.s32, ctx.xer);
	// bgt cr6,0x8328ceec
	if (ctx.cr6.gt) goto loc_8328CEEC;
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
loc_8328CEEC:
	// stw r10,460(r31)
	PPC_STORE_U32(ctx.r31.u32 + 460, ctx.r10.u32);
	// lwz r10,464(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 464);
	// cmpw cr6,r10,r11
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r11.s32, ctx.xer);
	// bge cr6,0x8328cf00
	if (!ctx.cr6.lt) goto loc_8328CF00;
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
loc_8328CF00:
	// stw r11,464(r31)
	PPC_STORE_U32(ctx.r31.u32 + 464, ctx.r11.u32);
	// b 0x8328cf30
	goto loc_8328CF30;
loc_8328CF08:
	// lwz r10,468(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 468);
	// cmpw cr6,r10,r11
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r11.s32, ctx.xer);
	// bgt cr6,0x8328cf18
	if (ctx.cr6.gt) goto loc_8328CF18;
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
loc_8328CF18:
	// stw r10,468(r31)
	PPC_STORE_U32(ctx.r31.u32 + 468, ctx.r10.u32);
	// lwz r10,472(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 472);
	// cmpw cr6,r10,r11
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r11.s32, ctx.xer);
	// bge cr6,0x8328cf2c
	if (!ctx.cr6.lt) goto loc_8328CF2C;
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
loc_8328CF2C:
	// stw r11,472(r31)
	PPC_STORE_U32(ctx.r31.u32 + 472, ctx.r11.u32);
loc_8328CF30:
	// lis r11,-31822
	ctx.r11.s64 = -2085486592;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r31,-592(r11)
	PPC_STORE_U32(ctx.r11.u32 + -592, ctx.r31.u32);
	// bl 0x8328c7a8
	ctx.lr = 0x8328CF40;
	sub_8328C7A8(ctx, base);
	// stw r26,416(r31)
	PPC_STORE_U32(ctx.r31.u32 + 416, ctx.r26.u32);
	// b 0x8328cf58
	goto loc_8328CF58;
loc_8328CF48:
	// ld r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r30.u32 + 0);
	// std r11,0(r27)
	PPC_STORE_U64(ctx.r27.u32 + 0, ctx.r11.u64);
	// ld r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r30.u32 + 8);
	// std r11,8(r27)
	PPC_STORE_U64(ctx.r27.u32 + 8, ctx.r11.u64);
loc_8328CF58:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x833a01f0
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8328CF60"))) PPC_WEAK_FUNC(sub_8328CF60);
PPC_FUNC_IMPL(__imp__sub_8328CF60) {
	PPC_FUNC_PROLOGUE();
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
	// lwz r11,408(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 408);
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// lwz r10,412(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 412);
	// mr r30,r6
	ctx.r30.u64 = ctx.r6.u64;
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// bne cr6,0x8328cf94
	if (!ctx.cr6.eq) goto loc_8328CF94;
	// bl 0x8328caf0
	ctx.lr = 0x8328CF90;
	sub_8328CAF0(ctx, base);
	// b 0x8328cfd0
	goto loc_8328CFD0;
loc_8328CF94:
	// ld r9,8(r31)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r31.u32 + 8);
	// extsw r11,r11
	ctx.r11.s64 = ctx.r11.s32;
	// ld r8,0(r31)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r31.u32 + 0);
	// extsw r10,r10
	ctx.r10.s64 = ctx.r10.s32;
	// mulld r11,r11,r9
	ctx.r11.s64 = ctx.r11.s64 * ctx.r9.s64;
	// std r8,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r8.u64);
	// divd r11,r11,r10
	ctx.r11.s64 = ctx.r11.s64 / ctx.r10.s64;
	// addi r6,r1,96
	ctx.r6.s64 = ctx.r1.s64 + 96;
	// std r11,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r11.u64);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x8328caf0
	ctx.lr = 0x8328CFC0;
	sub_8328CAF0(ctx, base);
	// ld r11,96(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 96);
	// std r11,0(r30)
	PPC_STORE_U64(ctx.r30.u32 + 0, ctx.r11.u64);
	// ld r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r31.u32 + 8);
	// std r11,8(r30)
	PPC_STORE_U64(ctx.r30.u32 + 8, ctx.r11.u64);
loc_8328CFD0:
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

__attribute__((alias("__imp__sub_8328CFE8"))) PPC_WEAK_FUNC(sub_8328CFE8);
PPC_FUNC_IMPL(__imp__sub_8328CFE8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// std r31,-8(r1)
	PPC_STORE_U64(ctx.r1.u32 + -8, ctx.r31.u64);
	// lwz r8,4(r4)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// lwz r9,12(r4)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r4.u32 + 12);
	// rlwinm r7,r8,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r11,8(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	// lwz r10,0(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// lwz r31,12(r3)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// subf r6,r7,r9
	ctx.r6.s64 = ctx.r9.s64 - ctx.r7.s64;
	// lwz r9,0(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// subf r4,r8,r31
	ctx.r4.s64 = ctx.r31.s64 - ctx.r8.s64;
	// add r10,r10,r5
	ctx.r10.u64 = ctx.r10.u64 + ctx.r5.u64;
	// ble cr6,0x8328d04c
	if (!ctx.cr6.gt) goto loc_8328D04C;
	// addi r9,r9,-1
	ctx.r9.s64 = ctx.r9.s64 + -1;
	// addi r10,r10,-4
	ctx.r10.s64 = ctx.r10.s64 + -4;
loc_8328D024:
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// ble cr6,0x8328d03c
	if (!ctx.cr6.gt) goto loc_8328D03C;
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
loc_8328D030:
	// lbzu r7,1(r9)
	ea = 1 + ctx.r9.u32;
	ctx.r7.u64 = PPC_LOAD_U8(ea);
	ctx.r9.u32 = ea;
	// stbu r7,4(r10)
	ea = 4 + ctx.r10.u32;
	PPC_STORE_U8(ea, ctx.r7.u8);
	ctx.r10.u32 = ea;
	// bdnz 0x8328d030
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8328D030;
loc_8328D03C:
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// add r10,r10,r6
	ctx.r10.u64 = ctx.r10.u64 + ctx.r6.u64;
	// add r9,r9,r4
	ctx.r9.u64 = ctx.r9.u64 + ctx.r4.u64;
	// bne 0x8328d024
	if (!ctx.cr0.eq) goto loc_8328D024;
loc_8328D04C:
	// ld r31,-8(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8328D054"))) PPC_WEAK_FUNC(sub_8328D054);
PPC_FUNC_IMPL(__imp__sub_8328D054) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8328D058"))) PPC_WEAK_FUNC(sub_8328D058);
PPC_FUNC_IMPL(__imp__sub_8328D058) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// std r31,-8(r1)
	PPC_STORE_U64(ctx.r1.u32 + -8, ctx.r31.u64);
	// lwz r8,4(r4)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// lwz r9,12(r4)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r4.u32 + 12);
	// rlwinm r7,r8,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r11,8(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	// lwz r10,0(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// lwz r31,12(r3)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// subf r4,r7,r9
	ctx.r4.s64 = ctx.r9.s64 - ctx.r7.s64;
	// lwz r9,0(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// subf r3,r8,r31
	ctx.r3.s64 = ctx.r31.s64 - ctx.r8.s64;
	// add r10,r10,r6
	ctx.r10.u64 = ctx.r10.u64 + ctx.r6.u64;
	// ble cr6,0x8328d0c0
	if (!ctx.cr6.gt) goto loc_8328D0C0;
	// addi r9,r9,-1
	ctx.r9.s64 = ctx.r9.s64 + -1;
	// addi r10,r10,-4
	ctx.r10.s64 = ctx.r10.s64 + -4;
loc_8328D094:
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// ble cr6,0x8328d0b0
	if (!ctx.cr6.gt) goto loc_8328D0B0;
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
loc_8328D0A0:
	// lbzu r7,1(r9)
	ea = 1 + ctx.r9.u32;
	ctx.r7.u64 = PPC_LOAD_U8(ea);
	ctx.r9.u32 = ea;
	// lbzx r7,r7,r5
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r7.u32 + ctx.r5.u32);
	// stbu r7,4(r10)
	ea = 4 + ctx.r10.u32;
	PPC_STORE_U8(ea, ctx.r7.u8);
	ctx.r10.u32 = ea;
	// bdnz 0x8328d0a0
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8328D0A0;
loc_8328D0B0:
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// add r10,r10,r4
	ctx.r10.u64 = ctx.r10.u64 + ctx.r4.u64;
	// add r9,r9,r3
	ctx.r9.u64 = ctx.r9.u64 + ctx.r3.u64;
	// bne 0x8328d094
	if (!ctx.cr0.eq) goto loc_8328D094;
loc_8328D0C0:
	// ld r31,-8(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8328D0C8"))) PPC_WEAK_FUNC(sub_8328D0C8);
PPC_FUNC_IMPL(__imp__sub_8328D0C8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// li r9,16
	ctx.r9.s64 = 16;
	// lis r11,-31827
	ctx.r11.s64 = -2085814272;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r11,r11,21064
	ctx.r11.s64 = ctx.r11.s64 + 21064;
	// li r10,16
	ctx.r10.s64 = 16;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// addi r8,r11,-2048
	ctx.r8.s64 = ctx.r11.s64 + -2048;
	// addi r8,r8,-8
	ctx.r8.s64 = ctx.r8.s64 + -8;
	// lfd f13,12456(r9)
	ctx.fpscr.disableFlushMode();
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r9.u32 + 12456);
loc_8328D0F0:
	// extsw r9,r7
	ctx.r9.s64 = ctx.r7.s32;
	// addi r7,r7,3
	ctx.r7.s64 = ctx.r7.s64 + 3;
	// std r9,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r9.u64);
	// lfd f0,-16(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// fmul f0,f0,f13
	ctx.f0.f64 = ctx.f0.f64 * ctx.f13.f64;
	// stfdu f0,8(r8)
	ea = 8 + ctx.r8.u32;
	PPC_STORE_U64(ea, ctx.f0.u64);
	ctx.r8.u32 = ea;
	// bdnz 0x8328d0f0
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8328D0F0;
	// li r8,160
	ctx.r8.s64 = 160;
	// addi r9,r11,-2048
	ctx.r9.s64 = ctx.r11.s64 + -2048;
	// addi r9,r9,120
	ctx.r9.s64 = ctx.r9.s64 + 120;
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// lis r8,-32219
	ctx.r8.s64 = -2111504384;
	// lfd f0,22560(r8)
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r8.u32 + 22560);
loc_8328D128:
	// addi r8,r10,-16
	ctx.r8.s64 = ctx.r10.s64 + -16;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// extsw r8,r8
	ctx.r8.s64 = ctx.r8.s32;
	// std r8,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r8.u64);
	// lfd f12,-16(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f12.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// fcfid f12,f12
	ctx.f12.f64 = double(ctx.f12.s64);
	// fmadd f12,f12,f13,f0
	ctx.f12.f64 = ctx.f12.f64 * ctx.f13.f64 + ctx.f0.f64;
	// stfdu f12,8(r9)
	ea = 8 + ctx.r9.u32;
	PPC_STORE_U64(ea, ctx.f12.u64);
	ctx.r9.u32 = ea;
	// bdnz 0x8328d128
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8328D128;
	// cmpwi cr6,r10,192
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 192, ctx.xer);
	// bge cr6,0x8328d198
	if (!ctx.cr6.lt) goto loc_8328D198;
	// subfic r9,r10,192
	ctx.xer.ca = ctx.r10.u32 <= 192;
	ctx.r9.s64 = 192 - ctx.r10.s64;
	// addi r8,r11,-2048
	ctx.r8.s64 = ctx.r11.s64 + -2048;
	// rlwinm r7,r10,3,0,28
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0xFFFFFFF8;
	// add r8,r7,r8
	ctx.r8.u64 = ctx.r7.u64 + ctx.r8.u64;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// lis r9,-32219
	ctx.r9.s64 = -2111504384;
	// addi r8,r8,-8
	ctx.r8.s64 = ctx.r8.s64 + -8;
	// lfd f0,22552(r9)
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r9.u32 + 22552);
loc_8328D174:
	// addi r9,r10,-176
	ctx.r9.s64 = ctx.r10.s64 + -176;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// extsw r9,r9
	ctx.r9.s64 = ctx.r9.s32;
	// std r9,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r9.u64);
	// lfd f13,-16(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// fcfid f13,f13
	ctx.f13.f64 = double(ctx.f13.s64);
	// fadd f13,f13,f0
	ctx.f13.f64 = ctx.f13.f64 + ctx.f0.f64;
	// stfdu f13,8(r8)
	ea = 8 + ctx.r8.u32;
	PPC_STORE_U64(ea, ctx.f13.u64);
	ctx.r8.u32 = ea;
	// bdnz 0x8328d174
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8328D174;
loc_8328D198:
	// cmpwi cr6,r10,256
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 256, ctx.xer);
	// bge cr6,0x8328d200
	if (!ctx.cr6.lt) goto loc_8328D200;
	// subfic r9,r10,256
	ctx.xer.ca = ctx.r10.u32 <= 256;
	ctx.r9.s64 = 256 - ctx.r10.s64;
	// rlwinm r7,r10,3,0,28
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0xFFFFFFF8;
	// addi r8,r11,-2048
	ctx.r8.s64 = ctx.r11.s64 + -2048;
	// lis r6,-32247
	ctx.r6.s64 = -2113339392;
	// add r8,r7,r8
	ctx.r8.u64 = ctx.r7.u64 + ctx.r8.u64;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// lis r9,-32241
	ctx.r9.s64 = -2112946176;
	// lis r7,-32219
	ctx.r7.s64 = -2111504384;
	// addi r8,r8,-8
	ctx.r8.s64 = ctx.r8.s64 + -8;
	// lfd f12,14384(r6)
	ctx.fpscr.disableFlushMode();
	ctx.f12.u64 = PPC_LOAD_U64(ctx.r6.u32 + 14384);
	// lfd f13,-4760(r9)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r9.u32 + -4760);
	// lfd f11,22544(r7)
	ctx.f11.u64 = PPC_LOAD_U64(ctx.r7.u32 + 22544);
loc_8328D1D0:
	// addi r9,r10,-192
	ctx.r9.s64 = ctx.r10.s64 + -192;
	// extsw r9,r9
	ctx.r9.s64 = ctx.r9.s32;
	// std r9,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r9.u64);
	// lfd f0,-16(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// fmadd f0,f0,f12,f11
	ctx.f0.f64 = ctx.f0.f64 * ctx.f12.f64 + ctx.f11.f64;
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// ble cr6,0x8328d1f4
	if (!ctx.cr6.gt) goto loc_8328D1F4;
	// fmr f0,f13
	ctx.f0.f64 = ctx.f13.f64;
loc_8328D1F4:
	// stfdu f0,8(r8)
	ctx.fpscr.disableFlushMode();
	ea = 8 + ctx.r8.u32;
	PPC_STORE_U64(ea, ctx.f0.u64);
	ctx.r8.u32 = ea;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// bdnz 0x8328d1d0
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8328D1D0;
loc_8328D200:
	// li r7,24
	ctx.r7.s64 = 24;
	// lis r6,-32228
	ctx.r6.s64 = -2112094208;
	// li r10,0
	ctx.r10.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r9,0
	ctx.r9.s64 = 0;
	// mtctr r7
	ctx.ctr.u64 = ctx.r7.u64;
	// lis r7,-32219
	ctx.r7.s64 = -2111504384;
	// lfd f13,-29624(r6)
	ctx.fpscr.disableFlushMode();
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r6.u32 + -29624);
	// lfd f0,22536(r7)
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r7.u32 + 22536);
loc_8328D224:
	// extsw r6,r10
	ctx.r6.s64 = ctx.r10.s32;
	// addi r7,r11,-4240
	ctx.r7.s64 = ctx.r11.s64 + -4240;
	// std r6,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r6.u64);
	// lfd f12,-16(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f12.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// fcfid f12,f12
	ctx.f12.f64 = double(ctx.f12.s64);
	// addi r6,r11,-4240
	ctx.r6.s64 = ctx.r11.s64 + -4240;
	// fmul f12,f12,f13
	ctx.f12.f64 = ctx.f12.f64 * ctx.f13.f64;
	// addi r7,r7,1024
	ctx.r7.s64 = ctx.r7.s64 + 1024;
	// addi r5,r11,1024
	ctx.r5.s64 = ctx.r11.s64 + 1024;
	// addi r6,r6,1024
	ctx.r6.s64 = ctx.r6.s64 + 1024;
	// addi r4,r11,1024
	ctx.r4.s64 = ctx.r11.s64 + 1024;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// fadd f11,f12,f0
	ctx.f11.f64 = ctx.f12.f64 + ctx.f0.f64;
	// stfdx f11,r9,r7
	PPC_STORE_U64(ctx.r9.u32 + ctx.r7.u32, ctx.f11.u64);
	// stfdx f11,r9,r5
	PPC_STORE_U64(ctx.r9.u32 + ctx.r5.u32, ctx.f11.u64);
	// fsub f12,f0,f12
	ctx.f12.f64 = ctx.f0.f64 - ctx.f12.f64;
	// stfdx f12,r8,r6
	PPC_STORE_U64(ctx.r8.u32 + ctx.r6.u32, ctx.f12.u64);
	// addi r9,r9,8
	ctx.r9.s64 = ctx.r9.s64 + 8;
	// stfdx f12,r8,r4
	PPC_STORE_U64(ctx.r8.u32 + ctx.r4.u32, ctx.f12.u64);
	// addi r8,r8,-8
	ctx.r8.s64 = ctx.r8.s64 + -8;
	// bdnz 0x8328d224
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8328D224;
	// cmpwi cr6,r10,128
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 128, ctx.xer);
	// bge cr6,0x8328d2fc
	if (!ctx.cr6.lt) goto loc_8328D2FC;
	// subfic r7,r10,128
	ctx.xer.ca = ctx.r10.u32 <= 128;
	ctx.r7.s64 = 128 - ctx.r10.s64;
	// lis r6,-32219
	ctx.r6.s64 = -2111504384;
	// neg r9,r10
	ctx.r9.s64 = -ctx.r10.s64;
	// addi r8,r10,-24
	ctx.r8.s64 = ctx.r10.s64 + -24;
	// rlwinm r9,r9,3,0,28
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 3) & 0xFFFFFFF8;
	// mtctr r7
	ctx.ctr.u64 = ctx.r7.u64;
	// lis r7,-32241
	ctx.r7.s64 = -2112946176;
	// lfd f13,22528(r6)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r6.u32 + 22528);
	// rlwinm r10,r10,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0xFFFFFFF8;
	// lfd f12,-5432(r7)
	ctx.f12.u64 = PPC_LOAD_U64(ctx.r7.u32 + -5432);
loc_8328D2A8:
	// extsw r6,r8
	ctx.r6.s64 = ctx.r8.s32;
	// addi r7,r11,-4240
	ctx.r7.s64 = ctx.r11.s64 + -4240;
	// std r6,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r6.u64);
	// addi r6,r11,-4240
	ctx.r6.s64 = ctx.r11.s64 + -4240;
	// addi r7,r7,1024
	ctx.r7.s64 = ctx.r7.s64 + 1024;
	// addi r5,r11,1024
	ctx.r5.s64 = ctx.r11.s64 + 1024;
	// addi r6,r6,1024
	ctx.r6.s64 = ctx.r6.s64 + 1024;
	// addi r4,r11,1024
	ctx.r4.s64 = ctx.r11.s64 + 1024;
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// lfd f11,-16(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f11.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// fcfid f11,f11
	ctx.f11.f64 = double(ctx.f11.s64);
	// fmadd f11,f11,f13,f12
	ctx.f11.f64 = ctx.f11.f64 * ctx.f13.f64 + ctx.f12.f64;
	// fadd f10,f11,f0
	ctx.f10.f64 = ctx.f11.f64 + ctx.f0.f64;
	// stfdx f10,r10,r7
	PPC_STORE_U64(ctx.r10.u32 + ctx.r7.u32, ctx.f10.u64);
	// stfdx f10,r10,r5
	PPC_STORE_U64(ctx.r10.u32 + ctx.r5.u32, ctx.f10.u64);
	// fsub f11,f0,f11
	ctx.f11.f64 = ctx.f0.f64 - ctx.f11.f64;
	// stfdx f11,r9,r6
	PPC_STORE_U64(ctx.r9.u32 + ctx.r6.u32, ctx.f11.u64);
	// addi r10,r10,8
	ctx.r10.s64 = ctx.r10.s64 + 8;
	// stfdx f11,r9,r4
	PPC_STORE_U64(ctx.r9.u32 + ctx.r4.u32, ctx.f11.u64);
	// addi r9,r9,-8
	ctx.r9.s64 = ctx.r9.s64 + -8;
	// bdnz 0x8328d2a8
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8328D2A8;
loc_8328D2FC:
	// lis r10,-32230
	ctx.r10.s64 = -2112225280;
	// lfd f0,22992(r10)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r10.u32 + 22992);
	// stfd f0,-4240(r11)
	PPC_STORE_U64(ctx.r11.u32 + -4240, ctx.f0.u64);
	// stfd f0,0(r11)
	PPC_STORE_U64(ctx.r11.u32 + 0, ctx.f0.u64);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8328D310"))) PPC_WEAK_FUNC(sub_8328D310);
PPC_FUNC_IMPL(__imp__sub_8328D310) {
	PPC_FUNC_PROLOGUE();
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// addi r12,r1,-8
	ctx.r12.s64 = ctx.r1.s64 + -8;
	// bl 0x833a18dc
	ctx.lr = 0x8328D320;
	__savefpr_21(ctx, base);
	// lfd f10,40(r3)
	ctx.fpscr.disableFlushMode();
	ctx.f10.u64 = PPC_LOAD_U64(ctx.r3.u32 + 40);
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// lfd f9,48(r3)
	ctx.f9.u64 = PPC_LOAD_U64(ctx.r3.u32 + 48);
	// lis r10,-32219
	ctx.r10.s64 = -2111504384;
	// lfd f8,64(r3)
	ctx.f8.u64 = PPC_LOAD_U64(ctx.r3.u32 + 64);
	// fmul f7,f9,f10
	ctx.f7.f64 = ctx.f9.f64 * ctx.f10.f64;
	// lfd f11,24(r3)
	ctx.f11.u64 = PPC_LOAD_U64(ctx.r3.u32 + 24);
	// lis r9,-32219
	ctx.r9.s64 = -2111504384;
	// fmul f6,f8,f11
	ctx.f6.f64 = ctx.f8.f64 * ctx.f11.f64;
	// lfd f5,8(r3)
	ctx.f5.u64 = PPC_LOAD_U64(ctx.r3.u32 + 8);
	// lfd f4,32(r3)
	ctx.f4.u64 = PPC_LOAD_U64(ctx.r3.u32 + 32);
	// fmul f3,f9,f5
	ctx.f3.f64 = ctx.f9.f64 * ctx.f5.f64;
	// lfd f28,16(r3)
	ctx.f28.u64 = PPC_LOAD_U64(ctx.r3.u32 + 16);
	// fmul f27,f9,f4
	ctx.f27.f64 = ctx.f9.f64 * ctx.f4.f64;
	// lfd f2,56(r3)
	ctx.f2.u64 = PPC_LOAD_U64(ctx.r3.u32 + 56);
	// fmul f9,f9,f28
	ctx.f9.f64 = ctx.f9.f64 * ctx.f28.f64;
	// fmul f26,f2,f28
	ctx.f26.f64 = ctx.f2.f64 * ctx.f28.f64;
	// lfd f30,0(r3)
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r3.u32 + 0);
	// fmul f1,f8,f4
	ctx.f1.f64 = ctx.f8.f64 * ctx.f4.f64;
	// lfd f12,-4600(r11)
	ctx.f12.u64 = PPC_LOAD_U64(ctx.r11.u32 + -4600);
	// fmul f31,f2,f10
	ctx.f31.f64 = ctx.f2.f64 * ctx.f10.f64;
	// lfd f0,22576(r10)
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r10.u32 + 22576);
	// fmul f29,f2,f11
	ctx.f29.f64 = ctx.f2.f64 * ctx.f11.f64;
	// lfd f13,22568(r9)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r9.u32 + 22568);
	// fmul f24,f7,f5
	ctx.f24.f64 = ctx.f7.f64 * ctx.f5.f64;
	// fmul f22,f11,f28
	ctx.f22.f64 = ctx.f11.f64 * ctx.f28.f64;
	// fmul f23,f6,f5
	ctx.f23.f64 = ctx.f6.f64 * ctx.f5.f64;
	// fmul f11,f11,f5
	ctx.f11.f64 = ctx.f11.f64 * ctx.f5.f64;
	// fmul f25,f4,f28
	ctx.f25.f64 = ctx.f4.f64 * ctx.f28.f64;
	// fmsub f9,f8,f30,f9
	ctx.f9.f64 = ctx.f8.f64 * ctx.f30.f64 - ctx.f9.f64;
	// fmsub f26,f8,f5,f26
	ctx.f26.f64 = ctx.f8.f64 * ctx.f5.f64 - ctx.f26.f64;
	// fsub f7,f6,f7
	ctx.f7.f64 = ctx.f6.f64 - ctx.f7.f64;
	// fsub f21,f1,f31
	ctx.f21.f64 = ctx.f1.f64 - ctx.f31.f64;
	// fsub f6,f29,f27
	ctx.f6.f64 = ctx.f29.f64 - ctx.f27.f64;
	// fmadd f8,f1,f30,f24
	ctx.f8.f64 = ctx.f1.f64 * ctx.f30.f64 + ctx.f24.f64;
	// fmsub f3,f2,f30,f3
	ctx.f3.f64 = ctx.f2.f64 * ctx.f30.f64 - ctx.f3.f64;
	// fmadd f1,f31,f30,f23
	ctx.f1.f64 = ctx.f31.f64 * ctx.f30.f64 + ctx.f23.f64;
	// fmsub f11,f4,f30,f11
	ctx.f11.f64 = ctx.f4.f64 * ctx.f30.f64 - ctx.f11.f64;
	// fmsub f5,f10,f5,f25
	ctx.f5.f64 = ctx.f10.f64 * ctx.f5.f64 - ctx.f25.f64;
	// fmsub f10,f10,f30,f22
	ctx.f10.f64 = ctx.f10.f64 * ctx.f30.f64 - ctx.f22.f64;
	// fmadd f8,f29,f28,f8
	ctx.f8.f64 = ctx.f29.f64 * ctx.f28.f64 + ctx.f8.f64;
	// fmadd f4,f27,f28,f1
	ctx.f4.f64 = ctx.f27.f64 * ctx.f28.f64 + ctx.f1.f64;
	// fsub f8,f8,f4
	ctx.f8.f64 = ctx.f8.f64 - ctx.f4.f64;
	// fdiv f12,f12,f8
	ctx.f12.f64 = ctx.f12.f64 / ctx.f8.f64;
	// fmul f8,f21,f12
	ctx.f8.f64 = ctx.f21.f64 * ctx.f12.f64;
	// fmul f4,f26,f12
	ctx.f4.f64 = ctx.f26.f64 * ctx.f12.f64;
	// fmul f5,f5,f12
	ctx.f5.f64 = ctx.f5.f64 * ctx.f12.f64;
	// fmul f7,f7,f12
	ctx.f7.f64 = ctx.f7.f64 * ctx.f12.f64;
	// fmul f9,f9,f12
	ctx.f9.f64 = ctx.f9.f64 * ctx.f12.f64;
	// fmul f10,f10,f12
	ctx.f10.f64 = ctx.f10.f64 * ctx.f12.f64;
	// fmul f6,f6,f12
	ctx.f6.f64 = ctx.f6.f64 * ctx.f12.f64;
	// fmul f3,f3,f12
	ctx.f3.f64 = ctx.f3.f64 * ctx.f12.f64;
	// fmul f12,f11,f12
	ctx.f12.f64 = ctx.f11.f64 * ctx.f12.f64;
	// fmul f11,f8,f0
	ctx.f11.f64 = ctx.f8.f64 * ctx.f0.f64;
	// stfd f11,0(r4)
	PPC_STORE_U64(ctx.r4.u32 + 0, ctx.f11.u64);
	// fmul f11,f4,f13
	ctx.f11.f64 = ctx.f4.f64 * ctx.f13.f64;
	// stfd f11,8(r4)
	PPC_STORE_U64(ctx.r4.u32 + 8, ctx.f11.u64);
	// fmul f11,f5,f0
	ctx.f11.f64 = ctx.f5.f64 * ctx.f0.f64;
	// stfd f11,16(r4)
	PPC_STORE_U64(ctx.r4.u32 + 16, ctx.f11.u64);
	// fmul f11,f7,f13
	ctx.f11.f64 = ctx.f7.f64 * ctx.f13.f64;
	// stfd f11,24(r4)
	PPC_STORE_U64(ctx.r4.u32 + 24, ctx.f11.u64);
	// fmul f11,f9,f0
	ctx.f11.f64 = ctx.f9.f64 * ctx.f0.f64;
	// stfd f11,32(r4)
	PPC_STORE_U64(ctx.r4.u32 + 32, ctx.f11.u64);
	// fmul f11,f10,f13
	ctx.f11.f64 = ctx.f10.f64 * ctx.f13.f64;
	// stfd f11,40(r4)
	PPC_STORE_U64(ctx.r4.u32 + 40, ctx.f11.u64);
	// fmul f11,f6,f0
	ctx.f11.f64 = ctx.f6.f64 * ctx.f0.f64;
	// stfd f11,48(r4)
	PPC_STORE_U64(ctx.r4.u32 + 48, ctx.f11.u64);
	// fmul f13,f3,f13
	ctx.f13.f64 = ctx.f3.f64 * ctx.f13.f64;
	// stfd f13,56(r4)
	PPC_STORE_U64(ctx.r4.u32 + 56, ctx.f13.u64);
	// fmul f0,f12,f0
	ctx.f0.f64 = ctx.f12.f64 * ctx.f0.f64;
	// stfd f0,64(r4)
	PPC_STORE_U64(ctx.r4.u32 + 64, ctx.f0.u64);
	// addi r12,r1,-8
	ctx.r12.s64 = ctx.r1.s64 + -8;
	// bl 0x833a1928
	ctx.lr = 0x8328D444;
	__restfpr_21(ctx, base);
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8328D450"))) PPC_WEAK_FUNC(sub_8328D450);
PPC_FUNC_IMPL(__imp__sub_8328D450) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// std r31,-8(r1)
	PPC_STORE_U64(ctx.r1.u32 + -8, ctx.r31.u64);
	// li r7,256
	ctx.r7.s64 = 256;
	// subf r6,r3,r4
	ctx.r6.s64 = ctx.r4.s64 - ctx.r3.s64;
	// addi r10,r4,-2
	ctx.r10.s64 = ctx.r4.s64 + -2;
	// addi r11,r3,4
	ctx.r11.s64 = ctx.r3.s64 + 4;
	// lis r5,-32219
	ctx.r5.s64 = -2111504384;
	// mtctr r7
	ctx.ctr.u64 = ctx.r7.u64;
	// lis r7,-32219
	ctx.r7.s64 = -2111504384;
	// lis r4,-32219
	ctx.r4.s64 = -2111504384;
	// lis r3,-32248
	ctx.r3.s64 = -2113404928;
	// lis r31,-32219
	ctx.r31.s64 = -2111504384;
	// lfs f11,22596(r5)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 22596);
	ctx.f11.f64 = double(temp.f32);
	// li r9,-8192
	ctx.r9.s64 = -8192;
	// lfs f10,22592(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 22592);
	ctx.f10.f64 = double(temp.f32);
	// li r8,8192
	ctx.r8.s64 = 8192;
	// lfs f12,22588(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 22588);
	ctx.f12.f64 = double(temp.f32);
	// li r7,0
	ctx.r7.s64 = 0;
	// lfs f0,-9180(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + -9180);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,22584(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 22584);
	ctx.f13.f64 = double(temp.f32);
loc_8328D49C:
	// extsw r5,r9
	ctx.r5.s64 = ctx.r9.s32;
	// sth r7,0(r11)
	PPC_STORE_U16(ctx.r11.u32 + 0, ctx.r7.u16);
	// extsw r4,r8
	ctx.r4.s64 = ctx.r8.s32;
	// sth r7,2(r11)
	PPC_STORE_U16(ctx.r11.u32 + 2, ctx.r7.u16);
	// std r5,-32(r1)
	PPC_STORE_U64(ctx.r1.u32 + -32, ctx.r5.u64);
	// lfd f9,-32(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f9.u64 = PPC_LOAD_U64(ctx.r1.u32 + -32);
	// std r4,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.r4.u64);
	// lfd f8,-24(r1)
	ctx.f8.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// fcfid f8,f8
	ctx.f8.f64 = double(ctx.f8.s64);
	// addi r9,r9,64
	ctx.r9.s64 = ctx.r9.s64 + 64;
	// fcfid f9,f9
	ctx.f9.f64 = double(ctx.f9.s64);
	// addi r8,r8,-64
	ctx.r8.s64 = ctx.r8.s64 + -64;
	// frsp f8,f8
	ctx.f8.f64 = double(float(ctx.f8.f64));
	// frsp f9,f9
	ctx.f9.f64 = double(float(ctx.f9.f64));
	// fmadds f7,f8,f12,f0
	ctx.f7.f64 = double(float(ctx.f8.f64 * ctx.f12.f64 + ctx.f0.f64));
	// fmadds f8,f8,f11,f0
	ctx.f8.f64 = double(float(ctx.f8.f64 * ctx.f11.f64 + ctx.f0.f64));
	// fmadds f6,f9,f10,f0
	ctx.f6.f64 = double(float(ctx.f9.f64 * ctx.f10.f64 + ctx.f0.f64));
	// fctiwz f7,f7
	ctx.f7.s64 = (ctx.f7.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f7.f64));
	// stfd f7,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.f7.u64);
	// lhz r5,-10(r1)
	ctx.r5.u64 = PPC_LOAD_U16(ctx.r1.u32 + -10);
	// fctiwz f8,f8
	ctx.f8.s64 = (ctx.f8.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f8.f64));
	// stfd f8,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.f8.u64);
	// lhz r4,-10(r1)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r1.u32 + -10);
	// fmadds f9,f9,f13,f0
	ctx.f9.f64 = double(float(ctx.f9.f64 * ctx.f13.f64 + ctx.f0.f64));
	// sth r5,-2(r11)
	PPC_STORE_U16(ctx.r11.u32 + -2, ctx.r5.u16);
	// fctiwz f8,f6
	ctx.f8.s64 = (ctx.f6.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f6.f64));
	// stfd f8,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.f8.u64);
	// lhz r3,-10(r1)
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r1.u32 + -10);
	// fctiwz f9,f9
	ctx.f9.s64 = (ctx.f9.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f9.f64));
	// stfd f9,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.f9.u64);
	// lhz r31,-10(r1)
	ctx.r31.u64 = PPC_LOAD_U16(ctx.r1.u32 + -10);
	// sth r31,-4(r11)
	PPC_STORE_U16(ctx.r11.u32 + -4, ctx.r31.u16);
	// sth r7,2(r10)
	PPC_STORE_U16(ctx.r10.u32 + 2, ctx.r7.u16);
	// sth r4,4(r10)
	PPC_STORE_U16(ctx.r10.u32 + 4, ctx.r4.u16);
	// sthx r3,r6,r11
	PPC_STORE_U16(ctx.r6.u32 + ctx.r11.u32, ctx.r3.u16);
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// sthu r7,8(r10)
	ea = 8 + ctx.r10.u32;
	PPC_STORE_U16(ea, ctx.r7.u16);
	ctx.r10.u32 = ea;
	// bdnz 0x8328d49c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8328D49C;
	// ld r31,-8(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8328D53C"))) PPC_WEAK_FUNC(sub_8328D53C);
PPC_FUNC_IMPL(__imp__sub_8328D53C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8328D540"))) PPC_WEAK_FUNC(sub_8328D540);
PPC_FUNC_IMPL(__imp__sub_8328D540) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// lwz r10,20(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// lwz r9,36(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 36);
	// lwz r8,16(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// lwz r7,32(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// lwz r6,48(r3)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// lwz r3,4(r4)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// lwz r31,8(r4)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	// lwz r30,12(r4)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r4.u32 + 12);
	// lwz r4,16(r4)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r4.u32 + 16);
	// lwz r5,0(r5)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// stw r11,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r11.u32);
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// stw r10,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r10.u32);
	// stw r4,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r4.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r9,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r9.u32);
	// stw r8,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r8.u32);
	// stw r7,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r7.u32);
	// stw r6,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r6.u32);
	// stw r31,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r31.u32);
	// stw r30,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r30.u32);
	// bne cr6,0x8328d5c4
	if (!ctx.cr6.eq) goto loc_8328D5C4;
	// li r5,3
	ctx.r5.s64 = 3;
	// bl 0x8328cfe8
	ctx.lr = 0x8328D5C0;
	sub_8328CFE8(ctx, base);
	// b 0x8328d5cc
	goto loc_8328D5CC;
loc_8328D5C4:
	// li r6,3
	ctx.r6.s64 = 3;
	// bl 0x8328d058
	ctx.lr = 0x8328D5CC;
	sub_8328D058(ctx, base);
loc_8328D5CC:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8328D5E4"))) PPC_WEAK_FUNC(sub_8328D5E4);
PPC_FUNC_IMPL(__imp__sub_8328D5E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8328D5E8"))) PPC_WEAK_FUNC(sub_8328D5E8);
PPC_FUNC_IMPL(__imp__sub_8328D5E8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x833a01a8
	ctx.lr = 0x8328D5F0;
	__savegprlr_28(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// addi r4,r6,4096
	ctx.r4.s64 = ctx.r6.s64 + 4096;
	// addi r3,r6,2048
	ctx.r3.s64 = ctx.r6.s64 + 2048;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// mr r31,r6
	ctx.r31.u64 = ctx.r6.u64;
	// bl 0x8328d450
	ctx.lr = 0x8328D610;
	sub_8328D450(ctx, base);
	// li r11,256
	ctx.r11.s64 = 256;
	// lis r8,-32219
	ctx.r8.s64 = -2111504384;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r10,r31,-4
	ctx.r10.s64 = ctx.r31.s64 + -4;
	// mr r9,r7
	ctx.r9.u64 = ctx.r7.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfd f0,22600(r8)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r8.u32 + 22600);
	// lfd f13,12456(r11)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r11.u32 + 12456);
loc_8328D634:
	// addi r11,r9,-16
	ctx.r11.s64 = ctx.r9.s64 + -16;
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// extsw r11,r11
	ctx.r11.s64 = ctx.r11.s32;
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lfd f12,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f12.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f12,f12
	ctx.f12.f64 = double(ctx.f12.s64);
	// fmadd f12,f12,f0,f13
	ctx.f12.f64 = ctx.f12.f64 * ctx.f0.f64 + ctx.f13.f64;
	// fctiwz f12,f12
	ctx.f12.s64 = (ctx.f12.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f12.f64));
	// stfd f12,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.f12.u64);
	// lhz r11,94(r1)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r1.u32 + 94);
	// sth r11,4(r10)
	PPC_STORE_U16(ctx.r10.u32 + 4, ctx.r11.u16);
	// sth r11,6(r10)
	PPC_STORE_U16(ctx.r10.u32 + 6, ctx.r11.u16);
	// sthu r11,8(r10)
	ea = 8 + ctx.r10.u32;
	PPC_STORE_U16(ea, ctx.r11.u16);
	ctx.r10.u32 = ea;
	// bdnz 0x8328d634
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8328D634;
	// subf r10,r29,r28
	ctx.r10.s64 = ctx.r28.s64 - ctx.r29.s64;
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// extsw r9,r10
	ctx.r9.s64 = ctx.r10.s32;
	// cmpwi cr6,r30,1
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 1, ctx.xer);
	// std r9,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r9.u64);
	// lfd f0,88(r1)
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// lfd f0,-4760(r11)
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r11.u32 + -4760);
	// li r11,256
	ctx.r11.s64 = 256;
	// fdiv f0,f0,f13
	ctx.f0.f64 = ctx.f0.f64 / ctx.f13.f64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bne cr6,0x8328d704
	if (!ctx.cr6.eq) goto loc_8328D704;
	// mr r8,r7
	ctx.r8.u64 = ctx.r7.u64;
	// addi r9,r31,6
	ctx.r9.s64 = ctx.r31.s64 + 6;
	// add r10,r10,r29
	ctx.r10.u64 = ctx.r10.u64 + ctx.r29.u64;
loc_8328D6A8:
	// cmpw cr6,r8,r29
	ctx.cr6.compare<int32_t>(ctx.r8.s32, ctx.r29.s32, ctx.xer);
	// bge cr6,0x8328d6b8
	if (!ctx.cr6.lt) goto loc_8328D6B8;
	// li r11,16320
	ctx.r11.s64 = 16320;
	// b 0x8328d6ec
	goto loc_8328D6EC;
loc_8328D6B8:
	// cmpw cr6,r8,r28
	ctx.cr6.compare<int32_t>(ctx.r8.s32, ctx.r28.s32, ctx.xer);
	// ble cr6,0x8328d6c8
	if (!ctx.cr6.gt) goto loc_8328D6C8;
	// sth r7,0(r9)
	PPC_STORE_U16(ctx.r9.u32 + 0, ctx.r7.u16);
	// b 0x8328d6f0
	goto loc_8328D6F0;
loc_8328D6C8:
	// extsw r11,r10
	ctx.r11.s64 = ctx.r10.s32;
	// std r11,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r11.u64);
	// lfd f13,88(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// fcfid f13,f13
	ctx.f13.f64 = double(ctx.f13.s64);
	// fmul f13,f13,f0
	ctx.f13.f64 = ctx.f13.f64 * ctx.f0.f64;
	// fctiwz f13,f13
	ctx.f13.s64 = (ctx.f13.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f13.f64));
	// stfd f13,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.f13.u64);
	// lhz r11,86(r1)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r1.u32 + 86);
	// rotlwi r11,r11,6
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 6);
loc_8328D6EC:
	// sth r11,0(r9)
	PPC_STORE_U16(ctx.r9.u32 + 0, ctx.r11.u16);
loc_8328D6F0:
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// addi r9,r9,8
	ctx.r9.s64 = ctx.r9.s64 + 8;
	// bdnz 0x8328d6a8
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8328D6A8;
	// b 0x8328d768
	goto loc_8328D768;
loc_8328D704:
	// mr r9,r7
	ctx.r9.u64 = ctx.r7.u64;
	// neg r8,r29
	ctx.r8.s64 = -ctx.r29.s64;
	// addi r10,r31,6
	ctx.r10.s64 = ctx.r31.s64 + 6;
loc_8328D710:
	// cmpw cr6,r9,r29
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r29.s32, ctx.xer);
	// bge cr6,0x8328d720
	if (!ctx.cr6.lt) goto loc_8328D720;
	// sth r7,0(r10)
	PPC_STORE_U16(ctx.r10.u32 + 0, ctx.r7.u16);
	// b 0x8328d758
	goto loc_8328D758;
loc_8328D720:
	// cmpw cr6,r9,r28
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r28.s32, ctx.xer);
	// ble cr6,0x8328d730
	if (!ctx.cr6.gt) goto loc_8328D730;
	// li r11,16320
	ctx.r11.s64 = 16320;
	// b 0x8328d754
	goto loc_8328D754;
loc_8328D730:
	// extsw r11,r8
	ctx.r11.s64 = ctx.r8.s32;
	// std r11,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r11.u64);
	// lfd f13,88(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// fcfid f13,f13
	ctx.f13.f64 = double(ctx.f13.s64);
	// fmul f13,f13,f0
	ctx.f13.f64 = ctx.f13.f64 * ctx.f0.f64;
	// fctiwz f13,f13
	ctx.f13.s64 = (ctx.f13.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f13.f64));
	// stfd f13,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.f13.u64);
	// lhz r11,86(r1)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r1.u32 + 86);
	// rotlwi r11,r11,6
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 6);
loc_8328D754:
	// sth r11,0(r10)
	PPC_STORE_U16(ctx.r10.u32 + 0, ctx.r11.u16);
loc_8328D758:
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// addi r10,r10,8
	ctx.r10.s64 = ctx.r10.s64 + 8;
	// bdnz 0x8328d710
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8328D710;
loc_8328D768:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x833a01f8
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8328D770"))) PPC_WEAK_FUNC(sub_8328D770);
PPC_FUNC_IMPL(__imp__sub_8328D770) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x833a01a8
	ctx.lr = 0x8328D778;
	__savegprlr_28(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r4,r3,4096
	ctx.r4.s64 = ctx.r3.s64 + 4096;
	// addi r3,r3,2048
	ctx.r3.s64 = ctx.r3.s64 + 2048;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// mr r29,r6
	ctx.r29.u64 = ctx.r6.u64;
	// bl 0x8328d450
	ctx.lr = 0x8328D798;
	sub_8328D450(ctx, base);
	// li r10,9
	ctx.r10.s64 = 9;
	// clrlwi r9,r28,24
	ctx.r9.u64 = ctx.r28.u32 & 0xFF;
	// addi r11,r31,-2
	ctx.r11.s64 = ctx.r31.s64 + -2;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// li r10,0
	ctx.r10.s64 = 0;
loc_8328D7AC:
	// sth r10,2(r11)
	PPC_STORE_U16(ctx.r11.u32 + 2, ctx.r10.u16);
	// sth r10,4(r11)
	PPC_STORE_U16(ctx.r11.u32 + 4, ctx.r10.u16);
	// sth r10,6(r11)
	PPC_STORE_U16(ctx.r11.u32 + 6, ctx.r10.u16);
	// sthu r9,8(r11)
	ea = 8 + ctx.r11.u32;
	PPC_STORE_U16(ea, ctx.r9.u16);
	ctx.r11.u32 = ea;
	// bdnz 0x8328d7ac
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8328D7AC;
	// li r9,125
	ctx.r9.s64 = 125;
	// lis r7,-32219
	ctx.r7.s64 = -2111504384;
	// lis r6,-32241
	ctx.r6.s64 = -2112946176;
	// lis r5,-32230
	ctx.r5.s64 = -2112225280;
	// lis r4,-32242
	ctx.r4.s64 = -2113011712;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lfd f10,22616(r7)
	ctx.fpscr.disableFlushMode();
	ctx.f10.u64 = PPC_LOAD_U64(ctx.r7.u32 + 22616);
	// rlwinm r8,r30,6,18,25
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 6) & 0x3FC0;
	// lfd f11,-4760(r6)
	ctx.f11.u64 = PPC_LOAD_U64(ctx.r6.u32 + -4760);
	// li r10,9
	ctx.r10.s64 = 9;
	// lfd f12,22992(r5)
	ctx.f12.u64 = PPC_LOAD_U64(ctx.r5.u32 + 22992);
	// addi r11,r31,70
	ctx.r11.s64 = ctx.r31.s64 + 70;
	// lfd f13,21928(r4)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r4.u32 + 21928);
	// lfd f9,12456(r9)
	ctx.f9.u64 = PPC_LOAD_U64(ctx.r9.u32 + 12456);
loc_8328D7FC:
	// extsw r9,r10
	ctx.r9.s64 = ctx.r10.s32;
	// std r9,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r9.u64);
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// fsub f0,f0,f13
	ctx.f0.f64 = ctx.f0.f64 - ctx.f13.f64;
	// fcmpu cr6,f0,f12
	ctx.cr6.compare(ctx.f0.f64, ctx.f12.f64);
	// bge cr6,0x8328d820
	if (!ctx.cr6.lt) goto loc_8328D820;
	// fmr f0,f12
	ctx.f0.f64 = ctx.f12.f64;
	// b 0x8328d82c
	goto loc_8328D82C;
loc_8328D820:
	// fcmpu cr6,f0,f11
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f0.f64, ctx.f11.f64);
	// ble cr6,0x8328d82c
	if (!ctx.cr6.gt) goto loc_8328D82C;
	// fmr f0,f11
	ctx.f0.f64 = ctx.f11.f64;
loc_8328D82C:
	// fmadd f0,f0,f10,f9
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = ctx.f0.f64 * ctx.f10.f64 + ctx.f9.f64;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// fctiwz f0,f0
	ctx.f0.s64 = (ctx.f0.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f0.f64));
	// stfd f0,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.f0.u64);
	// lhz r9,94(r1)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r1.u32 + 94);
	// sth r9,2(r11)
	PPC_STORE_U16(ctx.r11.u32 + 2, ctx.r9.u16);
	// sth r9,4(r11)
	PPC_STORE_U16(ctx.r11.u32 + 4, ctx.r9.u16);
	// sth r9,6(r11)
	PPC_STORE_U16(ctx.r11.u32 + 6, ctx.r9.u16);
	// sthu r8,8(r11)
	ea = 8 + ctx.r11.u32;
	PPC_STORE_U16(ea, ctx.r8.u16);
	ctx.r11.u32 = ea;
	// bdnz 0x8328d7fc
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8328D7FC;
	// li r9,122
	ctx.r9.s64 = 122;
	// rlwinm r8,r29,6,18,25
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 6) & 0x3FC0;
	// li r10,134
	ctx.r10.s64 = 134;
	// addi r11,r31,1070
	ctx.r11.s64 = ctx.r31.s64 + 1070;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// lis r9,-32219
	ctx.r9.s64 = -2111504384;
	// lfd f13,22608(r9)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r9.u32 + 22608);
loc_8328D870:
	// extsw r9,r10
	ctx.r9.s64 = ctx.r10.s32;
	// std r9,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r9.u64);
	// lfd f0,88(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// fsub f0,f13,f0
	ctx.f0.f64 = ctx.f13.f64 - ctx.f0.f64;
	// fcmpu cr6,f0,f12
	ctx.cr6.compare(ctx.f0.f64, ctx.f12.f64);
	// bge cr6,0x8328d894
	if (!ctx.cr6.lt) goto loc_8328D894;
	// fmr f0,f12
	ctx.f0.f64 = ctx.f12.f64;
	// b 0x8328d8a0
	goto loc_8328D8A0;
loc_8328D894:
	// fcmpu cr6,f0,f11
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f0.f64, ctx.f11.f64);
	// ble cr6,0x8328d8a0
	if (!ctx.cr6.gt) goto loc_8328D8A0;
	// fmr f0,f11
	ctx.f0.f64 = ctx.f11.f64;
loc_8328D8A0:
	// fmadd f0,f0,f10,f9
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = ctx.f0.f64 * ctx.f10.f64 + ctx.f9.f64;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// fctiwz f0,f0
	ctx.f0.s64 = (ctx.f0.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f0.f64));
	// stfd f0,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.f0.u64);
	// lhz r9,86(r1)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r1.u32 + 86);
	// sth r9,2(r11)
	PPC_STORE_U16(ctx.r11.u32 + 2, ctx.r9.u16);
	// sth r9,4(r11)
	PPC_STORE_U16(ctx.r11.u32 + 4, ctx.r9.u16);
	// sth r9,6(r11)
	PPC_STORE_U16(ctx.r11.u32 + 6, ctx.r9.u16);
	// sthu r8,8(r11)
	ea = 8 + ctx.r11.u32;
	PPC_STORE_U16(ea, ctx.r8.u16);
	ctx.r11.u32 = ea;
	// bdnz 0x8328d870
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8328D870;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x833a01f8
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8328D8D0"))) PPC_WEAK_FUNC(sub_8328D8D0);
PPC_FUNC_IMPL(__imp__sub_8328D8D0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x833a01a8
	ctx.lr = 0x8328D8D8;
	__savegprlr_28(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r4,r3,4096
	ctx.r4.s64 = ctx.r3.s64 + 4096;
	// addi r3,r3,2048
	ctx.r3.s64 = ctx.r3.s64 + 2048;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// mr r29,r6
	ctx.r29.u64 = ctx.r6.u64;
	// bl 0x8328d450
	ctx.lr = 0x8328D8F8;
	sub_8328D450(ctx, base);
	// li r11,48
	ctx.r11.s64 = 48;
	// clrlwi r9,r28,24
	ctx.r9.u64 = ctx.r28.u32 & 0xFF;
	// addi r10,r31,-2
	ctx.r10.s64 = ctx.r31.s64 + -2;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
loc_8328D908:
	// sthu r9,8(r10)
	ea = 8 + ctx.r10.u32;
	PPC_STORE_U16(ea, ctx.r9.u16);
	ctx.r10.u32 = ea;
	// bdnz 0x8328d908
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8328D908;
	// li r11,82
	ctx.r11.s64 = 82;
	// rlwinm r9,r30,6,18,25
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 6) & 0x3FC0;
	// addi r10,r31,382
	ctx.r10.s64 = ctx.r31.s64 + 382;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
loc_8328D920:
	// sthu r9,8(r10)
	ea = 8 + ctx.r10.u32;
	PPC_STORE_U16(ea, ctx.r9.u16);
	ctx.r10.u32 = ea;
	// bdnz 0x8328d920
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8328D920;
	// li r11,126
	ctx.r11.s64 = 126;
	// rlwinm r9,r29,6,18,25
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 6) & 0x3FC0;
	// addi r10,r31,1038
	ctx.r10.s64 = ctx.r31.s64 + 1038;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
loc_8328D938:
	// sthu r9,8(r10)
	ea = 8 + ctx.r10.u32;
	PPC_STORE_U16(ea, ctx.r9.u16);
	ctx.r10.u32 = ea;
	// bdnz 0x8328d938
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8328D938;
	// li r10,64
	ctx.r10.s64 = 64;
	// addi r11,r31,-4
	ctx.r11.s64 = ctx.r31.s64 + -4;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// li r10,-1160
	ctx.r10.s64 = -1160;
loc_8328D950:
	// sth r10,4(r11)
	PPC_STORE_U16(ctx.r11.u32 + 4, ctx.r10.u16);
	// sth r10,6(r11)
	PPC_STORE_U16(ctx.r11.u32 + 6, ctx.r10.u16);
	// sthu r10,8(r11)
	ea = 8 + ctx.r11.u32;
	PPC_STORE_U16(ea, ctx.r10.u16);
	ctx.r11.u32 = ea;
	// bdnz 0x8328d950
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8328D950;
	// li r9,64
	ctx.r9.s64 = 64;
	// lis r8,-32219
	ctx.r8.s64 = -2111504384;
	// lis r7,-32241
	ctx.r7.s64 = -2112946176;
	// lis r6,-32230
	ctx.r6.s64 = -2112225280;
	// lis r5,-32219
	ctx.r5.s64 = -2111504384;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lfd f12,22648(r8)
	ctx.fpscr.disableFlushMode();
	ctx.f12.u64 = PPC_LOAD_U64(ctx.r8.u32 + 22648);
	// li r10,64
	ctx.r10.s64 = 64;
	// lfd f10,-4760(r7)
	ctx.f10.u64 = PPC_LOAD_U64(ctx.r7.u32 + -4760);
	// addi r11,r31,508
	ctx.r11.s64 = ctx.r31.s64 + 508;
	// lfd f11,22992(r6)
	ctx.f11.u64 = PPC_LOAD_U64(ctx.r6.u32 + 22992);
	// lfd f13,22640(r5)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r5.u32 + 22640);
	// lfd f9,12456(r9)
	ctx.f9.u64 = PPC_LOAD_U64(ctx.r9.u32 + 12456);
loc_8328D998:
	// extsw r9,r10
	ctx.r9.s64 = ctx.r10.s32;
	// std r9,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r9.u64);
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// fsub f0,f0,f13
	ctx.f0.f64 = ctx.f0.f64 - ctx.f13.f64;
	// fcmpu cr6,f0,f11
	ctx.cr6.compare(ctx.f0.f64, ctx.f11.f64);
	// bge cr6,0x8328d9bc
	if (!ctx.cr6.lt) goto loc_8328D9BC;
	// fmr f0,f11
	ctx.f0.f64 = ctx.f11.f64;
	// b 0x8328d9c8
	goto loc_8328D9C8;
loc_8328D9BC:
	// fcmpu cr6,f0,f10
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f0.f64, ctx.f10.f64);
	// ble cr6,0x8328d9c8
	if (!ctx.cr6.gt) goto loc_8328D9C8;
	// fmr f0,f10
	ctx.f0.f64 = ctx.f10.f64;
loc_8328D9C8:
	// fmadd f0,f0,f12,f9
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = ctx.f0.f64 * ctx.f12.f64 + ctx.f9.f64;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// fctiwz f0,f0
	ctx.f0.s64 = (ctx.f0.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f0.f64));
	// stfd f0,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.f0.u64);
	// lhz r9,94(r1)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r1.u32 + 94);
	// sth r9,4(r11)
	PPC_STORE_U16(ctx.r11.u32 + 4, ctx.r9.u16);
	// sth r9,6(r11)
	PPC_STORE_U16(ctx.r11.u32 + 6, ctx.r9.u16);
	// sthu r9,8(r11)
	ea = 8 + ctx.r11.u32;
	PPC_STORE_U16(ea, ctx.r9.u16);
	ctx.r11.u32 = ea;
	// bdnz 0x8328d998
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8328D998;
	// li r9,128
	ctx.r9.s64 = 128;
	// lis r8,-32219
	ctx.r8.s64 = -2111504384;
	// li r10,128
	ctx.r10.s64 = 128;
	// addi r11,r31,1020
	ctx.r11.s64 = ctx.r31.s64 + 1020;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// lis r9,-32219
	ctx.r9.s64 = -2111504384;
	// lfd f13,22632(r8)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r8.u32 + 22632);
	// lfd f12,22624(r9)
	ctx.f12.u64 = PPC_LOAD_U64(ctx.r9.u32 + 22624);
loc_8328DA0C:
	// extsw r9,r10
	ctx.r9.s64 = ctx.r10.s32;
	// std r9,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r9.u64);
	// lfd f0,88(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// fsub f0,f13,f0
	ctx.f0.f64 = ctx.f13.f64 - ctx.f0.f64;
	// fcmpu cr6,f0,f11
	ctx.cr6.compare(ctx.f0.f64, ctx.f11.f64);
	// bge cr6,0x8328da30
	if (!ctx.cr6.lt) goto loc_8328DA30;
	// fmr f0,f11
	ctx.f0.f64 = ctx.f11.f64;
	// b 0x8328da3c
	goto loc_8328DA3C;
loc_8328DA30:
	// fcmpu cr6,f0,f10
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f0.f64, ctx.f10.f64);
	// ble cr6,0x8328da3c
	if (!ctx.cr6.gt) goto loc_8328DA3C;
	// fmr f0,f10
	ctx.f0.f64 = ctx.f10.f64;
loc_8328DA3C:
	// fmadd f0,f0,f12,f9
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = ctx.f0.f64 * ctx.f12.f64 + ctx.f9.f64;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// fctiwz f0,f0
	ctx.f0.s64 = (ctx.f0.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f0.f64));
	// stfd f0,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.f0.u64);
	// lhz r9,86(r1)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r1.u32 + 86);
	// sth r9,4(r11)
	PPC_STORE_U16(ctx.r11.u32 + 4, ctx.r9.u16);
	// sth r9,6(r11)
	PPC_STORE_U16(ctx.r11.u32 + 6, ctx.r9.u16);
	// sthu r9,8(r11)
	ea = 8 + ctx.r11.u32;
	PPC_STORE_U16(ea, ctx.r9.u16);
	ctx.r11.u32 = ea;
	// bdnz 0x8328da0c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8328DA0C;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x833a01f8
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8328DA68"))) PPC_WEAK_FUNC(sub_8328DA68);
PPC_FUNC_IMPL(__imp__sub_8328DA68) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x833a01a0
	ctx.lr = 0x8328DA70;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31827
	ctx.r11.s64 = -2085814272;
	// lis r10,-31845
	ctx.r10.s64 = -2086993920;
	// addi r8,r11,16808
	ctx.r8.s64 = ctx.r11.s64 + 16808;
	// addi r3,r10,5216
	ctx.r3.s64 = ctx.r10.s64 + 5216;
	// addi r4,r8,2136
	ctx.r4.s64 = ctx.r8.s64 + 2136;
	// bl 0x8328d310
	ctx.lr = 0x8328DA8C;
	sub_8328D310(ctx, base);
	// lwz r6,4(r8)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r8.u32 + 4);
	// lwz r5,0(r8)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	// li r4,256
	ctx.r4.s64 = 256;
	// lwz r7,8(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 8);
	// addi r9,r6,6
	ctx.r9.s64 = ctx.r6.s64 + 6;
	// subf r31,r5,r6
	ctx.r31.s64 = ctx.r6.s64 - ctx.r5.s64;
	// addi r10,r5,2
	ctx.r10.s64 = ctx.r5.s64 + 2;
	// subf r30,r5,r7
	ctx.r30.s64 = ctx.r7.s64 - ctx.r5.s64;
	// subf r29,r6,r7
	ctx.r29.s64 = ctx.r7.s64 - ctx.r6.s64;
	// mtctr r4
	ctx.ctr.u64 = ctx.r4.u64;
	// lis r6,-32219
	ctx.r6.s64 = -2111504384;
	// lis r5,-32256
	ctx.r5.s64 = -2113929216;
	// li r28,0
	ctx.r28.s64 = 0;
	// mr r11,r28
	ctx.r11.u64 = ctx.r28.u64;
	// lfd f13,22536(r6)
	ctx.fpscr.disableFlushMode();
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r6.u32 + 22536);
	// lfd f0,12456(r5)
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r5.u32 + 12456);
loc_8328DACC:
	// addi r5,r8,2208
	ctx.r5.s64 = ctx.r8.s64 + 2208;
	// lfd f12,2136(r8)
	ctx.fpscr.disableFlushMode();
	ctx.f12.u64 = PPC_LOAD_U64(ctx.r8.u32 + 2136);
	// li r27,16320
	ctx.r27.s64 = 16320;
	// addi r4,r8,16
	ctx.r4.s64 = ctx.r8.s64 + 16;
	// addi r6,r8,4256
	ctx.r6.s64 = ctx.r8.s64 + 4256;
	// add r3,r11,r7
	ctx.r3.u64 = ctx.r11.u64 + ctx.r7.u64;
	// lfdx f11,r11,r5
	ctx.f11.u64 = PPC_LOAD_U64(ctx.r11.u32 + ctx.r5.u32);
	// fmadd f12,f11,f12,f0
	ctx.f12.f64 = ctx.f11.f64 * ctx.f12.f64 + ctx.f0.f64;
	// fctiwz f12,f12
	ctx.f12.s64 = (ctx.f12.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f12.f64));
	// stfd f12,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.f12.u64);
	// lhz r26,86(r1)
	ctx.r26.u64 = PPC_LOAD_U16(ctx.r1.u32 + 86);
	// sth r26,2(r10)
	PPC_STORE_U16(ctx.r10.u32 + 2, ctx.r26.u16);
	// lfdx f11,r11,r5
	ctx.f11.u64 = PPC_LOAD_U64(ctx.r11.u32 + ctx.r5.u32);
	// lfd f12,2160(r8)
	ctx.f12.u64 = PPC_LOAD_U64(ctx.r8.u32 + 2160);
	// fmadd f12,f11,f12,f0
	ctx.f12.f64 = ctx.f11.f64 * ctx.f12.f64 + ctx.f0.f64;
	// fctiwz f12,f12
	ctx.f12.s64 = (ctx.f12.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f12.f64));
	// stfd f12,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.f12.u64);
	// lhz r26,86(r1)
	ctx.r26.u64 = PPC_LOAD_U16(ctx.r1.u32 + 86);
	// sth r26,0(r10)
	PPC_STORE_U16(ctx.r10.u32 + 0, ctx.r26.u16);
	// lfdx f11,r11,r5
	ctx.f11.u64 = PPC_LOAD_U64(ctx.r11.u32 + ctx.r5.u32);
	// lfd f12,2184(r8)
	ctx.f12.u64 = PPC_LOAD_U64(ctx.r8.u32 + 2184);
	// sth r27,4(r10)
	PPC_STORE_U16(ctx.r10.u32 + 4, ctx.r27.u16);
	// fmadd f12,f11,f12,f0
	ctx.f12.f64 = ctx.f11.f64 * ctx.f12.f64 + ctx.f0.f64;
	// fctiwz f12,f12
	ctx.f12.s64 = (ctx.f12.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f12.f64));
	// stfd f12,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.f12.u64);
	// lhz r5,86(r1)
	ctx.r5.u64 = PPC_LOAD_U16(ctx.r1.u32 + 86);
	// sth r5,-2(r10)
	PPC_STORE_U16(ctx.r10.u32 + -2, ctx.r5.u16);
	// lfdx f12,r11,r4
	ctx.f12.u64 = PPC_LOAD_U64(ctx.r11.u32 + ctx.r4.u32);
	// fsub f11,f12,f13
	ctx.f11.f64 = ctx.f12.f64 - ctx.f13.f64;
	// lfd f12,2144(r8)
	ctx.f12.u64 = PPC_LOAD_U64(ctx.r8.u32 + 2144);
	// fmadd f12,f11,f12,f0
	ctx.f12.f64 = ctx.f11.f64 * ctx.f12.f64 + ctx.f0.f64;
	// fctiwz f12,f12
	ctx.f12.s64 = (ctx.f12.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f12.f64));
	// stfd f12,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.f12.u64);
	// lhz r5,86(r1)
	ctx.r5.u64 = PPC_LOAD_U16(ctx.r1.u32 + 86);
	// sth r5,-2(r9)
	PPC_STORE_U16(ctx.r9.u32 + -2, ctx.r5.u16);
	// lfdx f12,r11,r4
	ctx.f12.u64 = PPC_LOAD_U64(ctx.r11.u32 + ctx.r4.u32);
	// fsub f11,f12,f13
	ctx.f11.f64 = ctx.f12.f64 - ctx.f13.f64;
	// lfd f12,2168(r8)
	ctx.f12.u64 = PPC_LOAD_U64(ctx.r8.u32 + 2168);
	// fmadd f12,f11,f12,f0
	ctx.f12.f64 = ctx.f11.f64 * ctx.f12.f64 + ctx.f0.f64;
	// fctiwz f12,f12
	ctx.f12.s64 = (ctx.f12.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f12.f64));
	// stfd f12,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.f12.u64);
	// lhz r5,86(r1)
	ctx.r5.u64 = PPC_LOAD_U16(ctx.r1.u32 + 86);
	// sthx r5,r31,r10
	PPC_STORE_U16(ctx.r31.u32 + ctx.r10.u32, ctx.r5.u16);
	// lfdx f12,r11,r4
	ctx.f12.u64 = PPC_LOAD_U64(ctx.r11.u32 + ctx.r4.u32);
	// fsub f11,f12,f13
	ctx.f11.f64 = ctx.f12.f64 - ctx.f13.f64;
	// lfd f12,2192(r8)
	ctx.f12.u64 = PPC_LOAD_U64(ctx.r8.u32 + 2192);
	// sth r28,0(r9)
	PPC_STORE_U16(ctx.r9.u32 + 0, ctx.r28.u16);
	// fmadd f12,f11,f12,f0
	ctx.f12.f64 = ctx.f11.f64 * ctx.f12.f64 + ctx.f0.f64;
	// fctiwz f12,f12
	ctx.f12.s64 = (ctx.f12.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f12.f64));
	// stfd f12,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.f12.u64);
	// lhz r5,86(r1)
	ctx.r5.u64 = PPC_LOAD_U16(ctx.r1.u32 + 86);
	// sth r5,-6(r9)
	PPC_STORE_U16(ctx.r9.u32 + -6, ctx.r5.u16);
	// lfd f12,2152(r8)
	ctx.f12.u64 = PPC_LOAD_U64(ctx.r8.u32 + 2152);
	// lfdx f11,r11,r6
	ctx.f11.u64 = PPC_LOAD_U64(ctx.r11.u32 + ctx.r6.u32);
	// fsub f11,f11,f13
	ctx.f11.f64 = ctx.f11.f64 - ctx.f13.f64;
	// fmadd f12,f11,f12,f0
	ctx.f12.f64 = ctx.f11.f64 * ctx.f12.f64 + ctx.f0.f64;
	// fctiwz f12,f12
	ctx.f12.s64 = (ctx.f12.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f12.f64));
	// stfd f12,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.f12.u64);
	// lhz r5,86(r1)
	ctx.r5.u64 = PPC_LOAD_U16(ctx.r1.u32 + 86);
	// sth r5,4(r3)
	PPC_STORE_U16(ctx.r3.u32 + 4, ctx.r5.u16);
	// lfd f12,2176(r8)
	ctx.f12.u64 = PPC_LOAD_U64(ctx.r8.u32 + 2176);
	// lfdx f11,r11,r6
	ctx.f11.u64 = PPC_LOAD_U64(ctx.r11.u32 + ctx.r6.u32);
	// fsub f11,f11,f13
	ctx.f11.f64 = ctx.f11.f64 - ctx.f13.f64;
	// fmadd f12,f11,f12,f0
	ctx.f12.f64 = ctx.f11.f64 * ctx.f12.f64 + ctx.f0.f64;
	// fctiwz f12,f12
	ctx.f12.s64 = (ctx.f12.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f12.f64));
	// stfd f12,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.f12.u64);
	// lhz r5,86(r1)
	ctx.r5.u64 = PPC_LOAD_U16(ctx.r1.u32 + 86);
	// sthx r5,r30,r10
	PPC_STORE_U16(ctx.r30.u32 + ctx.r10.u32, ctx.r5.u16);
	// addi r10,r10,8
	ctx.r10.s64 = ctx.r10.s64 + 8;
	// lfd f12,2200(r8)
	ctx.f12.u64 = PPC_LOAD_U64(ctx.r8.u32 + 2200);
	// lfdx f11,r11,r6
	ctx.f11.u64 = PPC_LOAD_U64(ctx.r11.u32 + ctx.r6.u32);
	// fsub f11,f11,f13
	ctx.f11.f64 = ctx.f11.f64 - ctx.f13.f64;
	// fmadd f12,f11,f12,f0
	ctx.f12.f64 = ctx.f11.f64 * ctx.f12.f64 + ctx.f0.f64;
	// sthx r28,r29,r9
	PPC_STORE_U16(ctx.r29.u32 + ctx.r9.u32, ctx.r28.u16);
	// addi r9,r9,8
	ctx.r9.s64 = ctx.r9.s64 + 8;
	// fctiwz f12,f12
	ctx.f12.s64 = (ctx.f12.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f12.f64));
	// stfd f12,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.f12.u64);
	// lhz r6,86(r1)
	ctx.r6.u64 = PPC_LOAD_U16(ctx.r1.u32 + 86);
	// sthx r6,r11,r7
	PPC_STORE_U16(ctx.r11.u32 + ctx.r7.u32, ctx.r6.u16);
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// bdnz 0x8328dacc
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8328DACC;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x833a01f0
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8328DC18"))) PPC_WEAK_FUNC(sub_8328DC18);
PPC_FUNC_IMPL(__imp__sub_8328DC18) {
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
	// lis r9,-31827
	ctx.r9.s64 = -2085814272;
	// addi r11,r3,2048
	ctx.r11.s64 = ctx.r3.s64 + 2048;
	// addi r8,r9,16808
	ctx.r8.s64 = ctx.r9.s64 + 16808;
	// addi r10,r3,4096
	ctx.r10.s64 = ctx.r3.s64 + 4096;
	// stw r3,16808(r9)
	PPC_STORE_U32(ctx.r9.u32 + 16808, ctx.r3.u32);
	// stw r11,4(r8)
	PPC_STORE_U32(ctx.r8.u32 + 4, ctx.r11.u32);
	// stw r10,8(r8)
	PPC_STORE_U32(ctx.r8.u32 + 8, ctx.r10.u32);
	// bl 0x8328d0c8
	ctx.lr = 0x8328DC44;
	sub_8328D0C8(ctx, base);
	// bl 0x8328da68
	ctx.lr = 0x8328DC48;
	sub_8328DA68(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8328DC58"))) PPC_WEAK_FUNC(sub_8328DC58);
PPC_FUNC_IMPL(__imp__sub_8328DC58) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// li r10,256
	ctx.r10.s64 = 256;
	// lis r11,-31827
	ctx.r11.s64 = -2085814272;
	// lis r7,-32219
	ctx.r7.s64 = -2111504384;
	// addi r11,r11,23112
	ctx.r11.s64 = ctx.r11.s64 + 23112;
	// lis r6,-32219
	ctx.r6.s64 = -2111504384;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// lis r10,-32219
	ctx.r10.s64 = -2111504384;
	// addi r9,r11,3072
	ctx.r9.s64 = ctx.r11.s64 + 3072;
	// lfd f12,22704(r7)
	ctx.fpscr.disableFlushMode();
	ctx.f12.u64 = PPC_LOAD_U64(ctx.r7.u32 + 22704);
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r9,r9,-4
	ctx.r9.s64 = ctx.r9.s64 + -4;
	// lfd f13,22696(r6)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r6.u32 + 22696);
	// lfd f0,22688(r10)
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r10.u32 + 22688);
loc_8328DC8C:
	// addi r10,r8,-16
	ctx.r10.s64 = ctx.r8.s64 + -16;
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// extsw r10,r10
	ctx.r10.s64 = ctx.r10.s32;
	// std r10,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r10.u64);
	// lfd f11,-16(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f11.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// fcfid f11,f11
	ctx.f11.f64 = double(ctx.f11.s64);
	// fmadd f11,f11,f13,f12
	ctx.f11.f64 = ctx.f11.f64 * ctx.f13.f64 + ctx.f12.f64;
	// fmul f11,f11,f0
	ctx.f11.f64 = ctx.f11.f64 * ctx.f0.f64;
	// fctiwz f11,f11
	ctx.f11.s64 = (ctx.f11.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f11.f64));
	// stfd f11,-8(r1)
	PPC_STORE_U64(ctx.r1.u32 + -8, ctx.f11.u64);
	// lwz r10,-4(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + -4);
	// stwu r10,4(r9)
	ea = 4 + ctx.r9.u32;
	PPC_STORE_U32(ea, ctx.r10.u32);
	ctx.r9.u32 = ea;
	// bdnz 0x8328dc8c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8328DC8C;
	// li r8,256
	ctx.r8.s64 = 256;
	// lis r7,-32219
	ctx.r7.s64 = -2111504384;
	// lis r6,-32219
	ctx.r6.s64 = -2111504384;
	// lis r5,-32219
	ctx.r5.s64 = -2111504384;
	// li r9,-128
	ctx.r9.s64 = -128;
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// lis r8,-32219
	ctx.r8.s64 = -2111504384;
	// lfd f11,22680(r7)
	ctx.f11.u64 = PPC_LOAD_U64(ctx.r7.u32 + 22680);
	// li r10,0
	ctx.r10.s64 = 0;
	// lfd f12,22672(r6)
	ctx.f12.u64 = PPC_LOAD_U64(ctx.r6.u32 + 22672);
	// lfd f13,22664(r5)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r5.u32 + 22664);
	// lfd f10,22656(r8)
	ctx.f10.u64 = PPC_LOAD_U64(ctx.r8.u32 + 22656);
loc_8328DCF0:
	// extsw r8,r9
	ctx.r8.s64 = ctx.r9.s32;
	// addi r7,r11,4096
	ctx.r7.s64 = ctx.r11.s64 + 4096;
	// std r8,-8(r1)
	PPC_STORE_U64(ctx.r1.u32 + -8, ctx.r8.u64);
	// lfd f9,-8(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f9.u64 = PPC_LOAD_U64(ctx.r1.u32 + -8);
	// fcfid f9,f9
	ctx.f9.f64 = double(ctx.f9.s64);
	// addi r8,r11,2048
	ctx.r8.s64 = ctx.r11.s64 + 2048;
	// fmul f8,f9,f13
	ctx.f8.f64 = ctx.f9.f64 * ctx.f13.f64;
	// addi r6,r11,1024
	ctx.r6.s64 = ctx.r11.s64 + 1024;
	// fmul f7,f9,f12
	ctx.f7.f64 = ctx.f9.f64 * ctx.f12.f64;
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// fmul f6,f9,f11
	ctx.f6.f64 = ctx.f9.f64 * ctx.f11.f64;
	// fmul f9,f9,f10
	ctx.f9.f64 = ctx.f9.f64 * ctx.f10.f64;
	// fmul f8,f8,f0
	ctx.f8.f64 = ctx.f8.f64 * ctx.f0.f64;
	// fmul f7,f7,f0
	ctx.f7.f64 = ctx.f7.f64 * ctx.f0.f64;
	// fmul f6,f6,f0
	ctx.f6.f64 = ctx.f6.f64 * ctx.f0.f64;
	// fmul f9,f9,f0
	ctx.f9.f64 = ctx.f9.f64 * ctx.f0.f64;
	// fctiwz f8,f8
	ctx.f8.s64 = (ctx.f8.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f8.f64));
	// stfiwx f8,r10,r11
	PPC_STORE_U32(ctx.r10.u32 + ctx.r11.u32, ctx.f8.u32);
	// fctiwz f8,f7
	ctx.f8.s64 = (ctx.f7.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f7.f64));
	// stfiwx f8,r10,r7
	PPC_STORE_U32(ctx.r10.u32 + ctx.r7.u32, ctx.f8.u32);
	// fctiwz f8,f6
	ctx.f8.s64 = (ctx.f6.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f6.f64));
	// stfiwx f8,r10,r8
	PPC_STORE_U32(ctx.r10.u32 + ctx.r8.u32, ctx.f8.u32);
	// fctiwz f9,f9
	ctx.f9.s64 = (ctx.f9.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f9.f64));
	// stfiwx f9,r10,r6
	PPC_STORE_U32(ctx.r10.u32 + ctx.r6.u32, ctx.f9.u32);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// bdnz 0x8328dcf0
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8328DCF0;
	// li r9,256
	ctx.r9.s64 = 256;
	// addi r11,r11,5120
	ctx.r11.s64 = ctx.r11.s64 + 5120;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r11,r11,2044
	ctx.r11.s64 = ctx.r11.s64 + 2044;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_8328DD6C:
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r10,-1020(r11)
	PPC_STORE_U32(ctx.r11.u32 + -1020, ctx.r10.u32);
	// li r8,255
	ctx.r8.s64 = 255;
	// stw r9,-2044(r11)
	PPC_STORE_U32(ctx.r11.u32 + -2044, ctx.r9.u32);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stwu r8,4(r11)
	ea = 4 + ctx.r11.u32;
	PPC_STORE_U32(ea, ctx.r8.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x8328dd6c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8328DD6C;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8328DD8C"))) PPC_WEAK_FUNC(sub_8328DD8C);
PPC_FUNC_IMPL(__imp__sub_8328DD8C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8328DD90"))) PPC_WEAK_FUNC(sub_8328DD90);
PPC_FUNC_IMPL(__imp__sub_8328DD90) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x833a0170
	ctx.lr = 0x8328DD98;
	__savegprlr_14(ctx, base);
	// lwz r31,4(r4)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// lwz r11,8(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	// srawi r10,r31,3
	ctx.xer.ca = (ctx.r31.s32 < 0) & ((ctx.r31.u32 & 0x7) != 0);
	ctx.r10.s64 = ctx.r31.s32 >> 3;
	// lwz r9,12(r4)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r4.u32 + 12);
	// lwz r6,12(r3)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// addze r28,r10
	temp.s64 = ctx.r10.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r10.u32;
	ctx.r28.s64 = temp.s64;
	// lwz r27,20(r3)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// srawi r11,r11,1
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 1;
	// lwz r25,16(r3)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// rlwinm r26,r9,30,2,31
	ctx.r26.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 30) & 0x3FFFFFFF;
	// lwz r7,0(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addze. r10,r11
	temp.s64 = ctx.r11.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r11.u32;
	ctx.r10.s64 = temp.s64;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// lwz r9,0(r4)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// srawi r11,r31,1
	ctx.xer.ca = (ctx.r31.s32 < 0) & ((ctx.r31.u32 & 0x1) != 0);
	ctx.r11.s64 = ctx.r31.s32 >> 1;
	// lwz r30,4(r3)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// rlwinm r24,r6,1,0,30
	ctx.r24.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz r29,8(r3)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// addze r11,r11
	temp.s64 = ctx.r11.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r11.u32;
	ctx.r11.s64 = temp.s64;
	// stw r28,-172(r1)
	PPC_STORE_U32(ctx.r1.u32 + -172, ctx.r28.u32);
	// rlwinm r8,r6,0,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 0) & 0xFFFFFFFC;
	// stw r7,-256(r1)
	PPC_STORE_U32(ctx.r1.u32 + -256, ctx.r7.u32);
	// rlwinm r5,r26,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r26.u32 | (ctx.r26.u64 << 32), 2) & 0xFFFFFFFC;
	// subf r27,r11,r27
	ctx.r27.s64 = ctx.r27.s64 - ctx.r11.s64;
	// subf r25,r11,r25
	ctx.r25.s64 = ctx.r25.s64 - ctx.r11.s64;
	// subf r11,r31,r24
	ctx.r11.s64 = ctx.r24.s64 - ctx.r31.s64;
	// rotlwi r4,r31,0
	ctx.r4.u64 = __builtin_rotateleft32(ctx.r31.u32, 0);
	// add r6,r8,r7
	ctx.r6.u64 = ctx.r8.u64 + ctx.r7.u64;
	// add r3,r5,r9
	ctx.r3.u64 = ctx.r5.u64 + ctx.r9.u64;
	// rlwinm r31,r26,1,0,30
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r26.u32 | (ctx.r26.u64 << 32), 1) & 0xFFFFFFFE;
	// stw r6,-252(r1)
	PPC_STORE_U32(ctx.r1.u32 + -252, ctx.r6.u32);
	// stw r3,-248(r1)
	PPC_STORE_U32(ctx.r1.u32 + -248, ctx.r3.u32);
	// rlwinm r11,r11,30,2,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 30) & 0x3FFFFFFF;
	// rlwinm r8,r27,30,2,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 30) & 0x3FFFFFFF;
	// rlwinm r5,r25,30,2,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r25.u32 | (ctx.r25.u64 << 32), 30) & 0x3FFFFFFF;
	// subf r31,r4,r31
	ctx.r31.s64 = ctx.r31.s64 - ctx.r4.s64;
	// beq 0x8328e678
	if (ctx.cr0.eq) goto loc_8328E678;
	// rlwinm r4,r5,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// stw r10,-216(r1)
	PPC_STORE_U32(ctx.r1.u32 + -216, ctx.r10.u32);
	// rlwinm r8,r8,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// stw r4,-156(r1)
	PPC_STORE_U32(ctx.r1.u32 + -156, ctx.r4.u32);
	// rlwinm r4,r11,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lis r11,-31827
	ctx.r11.s64 = -2085814272;
	// stw r8,-160(r1)
	PPC_STORE_U32(ctx.r1.u32 + -160, ctx.r8.u32);
	// rlwinm r31,r31,2,0,29
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFFFFFFFC;
	// stw r4,-168(r1)
	PPC_STORE_U32(ctx.r1.u32 + -168, ctx.r4.u32);
	// addi r11,r11,23112
	ctx.r11.s64 = ctx.r11.s64 + 23112;
	// mr r5,r10
	ctx.r5.u64 = ctx.r10.u64;
	// stw r31,-164(r1)
	PPC_STORE_U32(ctx.r1.u32 + -164, ctx.r31.u32);
	// addi r10,r29,-4
	ctx.r10.s64 = ctx.r29.s64 + -4;
	// stw r11,-236(r1)
	PPC_STORE_U32(ctx.r1.u32 + -236, ctx.r11.u32);
	// addi r8,r30,-4
	ctx.r8.s64 = ctx.r30.s64 + -4;
loc_8328DE64:
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// beq cr6,0x8328e640
	if (ctx.cr6.eq) goto loc_8328E640;
	// mtctr r28
	ctx.ctr.u64 = ctx.r28.u64;
loc_8328DE70:
	// lwzu r4,4(r10)
	ea = 4 + ctx.r10.u32;
	ctx.r4.u64 = PPC_LOAD_U32(ea);
	ctx.r10.u32 = ea;
	// addi r30,r11,2048
	ctx.r30.s64 = ctx.r11.s64 + 2048;
	// lwzu r5,4(r8)
	ea = 4 + ctx.r8.u32;
	ctx.r5.u64 = PPC_LOAD_U32(ea);
	ctx.r8.u32 = ea;
	// addi r31,r11,4096
	ctx.r31.s64 = ctx.r11.s64 + 4096;
	// lwz r29,0(r7)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r7.u32 + 0);
	// rlwinm r7,r4,10,22,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 10) & 0x3FC;
	// lwz r27,0(r6)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	// rlwinm r28,r5,10,22,29
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 10) & 0x3FC;
	// rlwinm r26,r29,10,22,29
	ctx.r26.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 10) & 0x3FC;
	// addi r6,r11,3072
	ctx.r6.s64 = ctx.r11.s64 + 3072;
	// stw r10,-220(r1)
	PPC_STORE_U32(ctx.r1.u32 + -220, ctx.r10.u32);
	// addi r25,r11,1024
	ctx.r25.s64 = ctx.r11.s64 + 1024;
	// stw r8,-224(r1)
	PPC_STORE_U32(ctx.r1.u32 + -224, ctx.r8.u32);
	// lwzx r10,r7,r30
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r7.u32 + ctx.r30.u32);
	// addi r24,r11,5120
	ctx.r24.s64 = ctx.r11.s64 + 5120;
	// lwzx r31,r28,r31
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r28.u32 + ctx.r31.u32);
	// addi r23,r11,5120
	ctx.r23.s64 = ctx.r11.s64 + 5120;
	// lwzx r8,r7,r11
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r7.u32 + ctx.r11.u32);
	// lis r30,-1
	ctx.r30.s64 = -65536;
	// lwzx r6,r26,r6
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r26.u32 + ctx.r6.u32);
	// add r10,r31,r10
	ctx.r10.u64 = ctx.r31.u64 + ctx.r10.u64;
	// lwzx r7,r28,r25
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r28.u32 + ctx.r25.u32);
	// addi r26,r11,5120
	ctx.r26.s64 = ctx.r11.s64 + 5120;
	// add r31,r6,r8
	ctx.r31.u64 = ctx.r6.u64 + ctx.r8.u64;
	// stw r5,-232(r1)
	PPC_STORE_U32(ctx.r1.u32 + -232, ctx.r5.u32);
	// subf r28,r10,r6
	ctx.r28.s64 = ctx.r6.s64 - ctx.r10.s64;
	// stw r4,-228(r1)
	PPC_STORE_U32(ctx.r1.u32 + -228, ctx.r4.u32);
	// srawi r31,r31,20
	ctx.xer.ca = (ctx.r31.s32 < 0) & ((ctx.r31.u32 & 0xFFFFF) != 0);
	ctx.r31.s64 = ctx.r31.s32 >> 20;
	// srawi r28,r28,20
	ctx.xer.ca = (ctx.r28.s32 < 0) & ((ctx.r28.u32 & 0xFFFFF) != 0);
	ctx.r28.s64 = ctx.r28.s32 >> 20;
	// rlwinm r31,r31,2,0,29
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFFFFFFFC;
	// stw r7,-240(r1)
	PPC_STORE_U32(ctx.r1.u32 + -240, ctx.r7.u32);
	// add r6,r6,r7
	ctx.r6.u64 = ctx.r6.u64 + ctx.r7.u64;
	// rlwinm r28,r28,2,0,29
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 2) & 0xFFFFFFFC;
	// srawi r6,r6,20
	ctx.xer.ca = (ctx.r6.s32 < 0) & ((ctx.r6.u32 & 0xFFFFF) != 0);
	ctx.r6.s64 = ctx.r6.s32 >> 20;
	// addi r25,r11,3072
	ctx.r25.s64 = ctx.r11.s64 + 3072;
	// lwzx r31,r31,r24
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r24.u32);
	// rlwinm r6,r6,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r24,r29,18,22,29
	ctx.r24.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 18) & 0x3FC;
	// rlwimi r30,r31,8,16,23
	ctx.r30.u64 = (__builtin_rotateleft32(ctx.r31.u32, 8) & 0xFF00) | (ctx.r30.u64 & 0xFFFFFFFFFFFF00FF);
	// lwzx r28,r28,r23
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r28.u32 + ctx.r23.u32);
	// addi r31,r11,5120
	ctx.r31.s64 = ctx.r11.s64 + 5120;
	// or r30,r30,r28
	ctx.r30.u64 = ctx.r30.u64 | ctx.r28.u64;
	// lwzx r6,r6,r26
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r6.u32 + ctx.r26.u32);
	// addi r28,r11,5120
	ctx.r28.s64 = ctx.r11.s64 + 5120;
	// rlwinm r30,r30,8,0,23
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 8) & 0xFFFFFF00;
	// lis r26,-1
	ctx.r26.s64 = -65536;
	// or r6,r30,r6
	ctx.r6.u64 = ctx.r30.u64 | ctx.r6.u64;
	// addi r30,r11,5120
	ctx.r30.s64 = ctx.r11.s64 + 5120;
	// stw r6,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r6.u32);
	// addi r23,r11,3072
	ctx.r23.s64 = ctx.r11.s64 + 3072;
	// lwzx r6,r24,r25
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r24.u32 + ctx.r25.u32);
	// add r25,r6,r8
	ctx.r25.u64 = ctx.r6.u64 + ctx.r8.u64;
	// srawi r25,r25,20
	ctx.xer.ca = (ctx.r25.s32 < 0) & ((ctx.r25.u32 & 0xFFFFF) != 0);
	ctx.r25.s64 = ctx.r25.s32 >> 20;
	// subf r24,r10,r6
	ctx.r24.s64 = ctx.r6.s64 - ctx.r10.s64;
	// rlwinm r25,r25,2,0,29
	ctx.r25.u64 = __builtin_rotateleft64(ctx.r25.u32 | (ctx.r25.u64 << 32), 2) & 0xFFFFFFFC;
	// srawi r24,r24,20
	ctx.xer.ca = (ctx.r24.s32 < 0) & ((ctx.r24.u32 & 0xFFFFF) != 0);
	ctx.r24.s64 = ctx.r24.s32 >> 20;
	// add r6,r6,r7
	ctx.r6.u64 = ctx.r6.u64 + ctx.r7.u64;
	// rlwinm r24,r24,2,0,29
	ctx.r24.u64 = __builtin_rotateleft64(ctx.r24.u32 | (ctx.r24.u64 << 32), 2) & 0xFFFFFFFC;
	// srawi r6,r6,20
	ctx.xer.ca = (ctx.r6.s32 < 0) & ((ctx.r6.u32 & 0xFFFFF) != 0);
	ctx.r6.s64 = ctx.r6.s32 >> 20;
	// lwzx r31,r25,r31
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r25.u32 + ctx.r31.u32);
	// rlwinm r6,r6,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r6,r6,r30
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r6.u32 + ctx.r30.u32);
	// rlwinm r30,r27,10,22,29
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 10) & 0x3FC;
	// rlwimi r26,r31,8,16,23
	ctx.r26.u64 = (__builtin_rotateleft32(ctx.r31.u32, 8) & 0xFF00) | (ctx.r26.u64 & 0xFFFFFFFFFFFF00FF);
	// lwzx r31,r24,r28
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r24.u32 + ctx.r28.u32);
	// lis r28,-1
	ctx.r28.s64 = -65536;
	// or r31,r26,r31
	ctx.r31.u64 = ctx.r26.u64 | ctx.r31.u64;
	// rlwinm r31,r31,8,0,23
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 8) & 0xFFFFFF00;
	// addi r26,r11,5120
	ctx.r26.s64 = ctx.r11.s64 + 5120;
	// or r6,r31,r6
	ctx.r6.u64 = ctx.r31.u64 | ctx.r6.u64;
	// addi r31,r11,5120
	ctx.r31.s64 = ctx.r11.s64 + 5120;
	// stwu r6,4(r9)
	ea = 4 + ctx.r9.u32;
	PPC_STORE_U32(ea, ctx.r6.u32);
	ctx.r9.u32 = ea;
	// addi r6,r11,5120
	ctx.r6.s64 = ctx.r11.s64 + 5120;
	// stw r9,-244(r1)
	PPC_STORE_U32(ctx.r1.u32 + -244, ctx.r9.u32);
	// lwzx r9,r30,r23
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r23.u32);
	// add r30,r9,r8
	ctx.r30.u64 = ctx.r9.u64 + ctx.r8.u64;
	// srawi r30,r30,20
	ctx.xer.ca = (ctx.r30.s32 < 0) & ((ctx.r30.u32 & 0xFFFFF) != 0);
	ctx.r30.s64 = ctx.r30.s32 >> 20;
	// subf r25,r10,r9
	ctx.r25.s64 = ctx.r9.s64 - ctx.r10.s64;
	// rlwinm r30,r30,2,0,29
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 2) & 0xFFFFFFFC;
	// srawi r25,r25,20
	ctx.xer.ca = (ctx.r25.s32 < 0) & ((ctx.r25.u32 & 0xFFFFF) != 0);
	ctx.r25.s64 = ctx.r25.s32 >> 20;
	// add r9,r9,r7
	ctx.r9.u64 = ctx.r9.u64 + ctx.r7.u64;
	// rlwinm r7,r25,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r25.u32 | (ctx.r25.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r6,r30,r6
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r6.u32);
	// srawi r9,r9,20
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0xFFFFF) != 0);
	ctx.r9.s64 = ctx.r9.s32 >> 20;
	// lwz r30,-240(r1)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + -240);
	// rlwimi r28,r6,8,16,23
	ctx.r28.u64 = (__builtin_rotateleft32(ctx.r6.u32, 8) & 0xFF00) | (ctx.r28.u64 & 0xFFFFFFFFFFFF00FF);
	// rlwinm r9,r9,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r6,r11,3072
	ctx.r6.s64 = ctx.r11.s64 + 3072;
	// lwzx r7,r7,r31
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r7.u32 + ctx.r31.u32);
	// rlwinm r31,r27,18,22,29
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 18) & 0x3FC;
	// addi r25,r11,5120
	ctx.r25.s64 = ctx.r11.s64 + 5120;
	// or r7,r28,r7
	ctx.r7.u64 = ctx.r28.u64 | ctx.r7.u64;
	// lwzx r9,r9,r26
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r26.u32);
	// addi r28,r11,5120
	ctx.r28.s64 = ctx.r11.s64 + 5120;
	// rlwinm r7,r7,8,0,23
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 8) & 0xFFFFFF00;
	// lis r26,-1
	ctx.r26.s64 = -65536;
	// or r9,r7,r9
	ctx.r9.u64 = ctx.r7.u64 | ctx.r9.u64;
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// rlwinm r9,r29,26,22,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 26) & 0x3FC;
	// addi r7,r11,5120
	ctx.r7.s64 = ctx.r11.s64 + 5120;
	// stw r9,-240(r1)
	PPC_STORE_U32(ctx.r1.u32 + -240, ctx.r9.u32);
	// addi r16,r11,5120
	ctx.r16.s64 = ctx.r11.s64 + 5120;
	// addi r14,r11,3072
	ctx.r14.s64 = ctx.r11.s64 + 3072;
	// addi r3,r11,3072
	ctx.r3.s64 = ctx.r11.s64 + 3072;
	// stw r16,-208(r1)
	PPC_STORE_U32(ctx.r1.u32 + -208, ctx.r16.u32);
	// addi r24,r11,4096
	ctx.r24.s64 = ctx.r11.s64 + 4096;
	// stw r14,-204(r1)
	PPC_STORE_U32(ctx.r1.u32 + -204, ctx.r14.u32);
	// addi r23,r11,2048
	ctx.r23.s64 = ctx.r11.s64 + 2048;
	// addi r22,r11,1024
	ctx.r22.s64 = ctx.r11.s64 + 1024;
	// addi r21,r11,5120
	ctx.r21.s64 = ctx.r11.s64 + 5120;
	// addi r20,r11,5120
	ctx.r20.s64 = ctx.r11.s64 + 5120;
	// addi r19,r11,5120
	ctx.r19.s64 = ctx.r11.s64 + 5120;
	// addi r18,r11,3072
	ctx.r18.s64 = ctx.r11.s64 + 3072;
	// addi r17,r11,5120
	ctx.r17.s64 = ctx.r11.s64 + 5120;
	// addi r15,r11,5120
	ctx.r15.s64 = ctx.r11.s64 + 5120;
	// lwz r11,-248(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + -248);
	// rlwinm r5,r5,18,22,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 18) & 0x3FC;
	// rlwinm r4,r4,18,22,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 18) & 0x3FC;
	// lis r14,-1
	ctx.r14.s64 = -65536;
	// rlwinm r29,r29,2,22,29
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 2) & 0x3FC;
	// lis r16,-1
	ctx.r16.s64 = -65536;
	// lwzx r9,r31,r6
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r6.u32);
	// add r8,r9,r8
	ctx.r8.u64 = ctx.r9.u64 + ctx.r8.u64;
	// subf r10,r10,r9
	ctx.r10.s64 = ctx.r9.s64 - ctx.r10.s64;
	// srawi r8,r8,20
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0xFFFFF) != 0);
	ctx.r8.s64 = ctx.r8.s32 >> 20;
	// srawi r10,r10,20
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0xFFFFF) != 0);
	ctx.r10.s64 = ctx.r10.s32 >> 20;
	// rlwinm r8,r8,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// add r9,r9,r30
	ctx.r9.u64 = ctx.r9.u64 + ctx.r30.u64;
	// srawi r9,r9,20
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0xFFFFF) != 0);
	ctx.r9.s64 = ctx.r9.s32 >> 20;
	// lwzx r8,r8,r25
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r25.u32);
	// lwzx r10,r10,r28
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r28.u32);
	// rlwinm r9,r9,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwimi r26,r8,8,16,23
	ctx.r26.u64 = (__builtin_rotateleft32(ctx.r8.u32, 8) & 0xFF00) | (ctx.r26.u64 & 0xFFFFFFFFFFFF00FF);
	// or r10,r26,r10
	ctx.r10.u64 = ctx.r26.u64 | ctx.r10.u64;
	// lwzx r9,r9,r7
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r7.u32);
	// rlwinm r10,r10,8,0,23
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 8) & 0xFFFFFF00;
	// lwz r7,-240(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + -240);
	// or r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 | ctx.r9.u64;
	// stwu r10,4(r11)
	ea = 4 + ctx.r11.u32;
	PPC_STORE_U32(ea, ctx.r10.u32);
	ctx.r11.u32 = ea;
	// lwzx r9,r5,r22
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r5.u32 + ctx.r22.u32);
	// lwzx r10,r7,r3
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r7.u32 + ctx.r3.u32);
	// lwzx r7,r5,r24
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r5.u32 + ctx.r24.u32);
	// lwzx r8,r4,r23
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r4.u32 + ctx.r23.u32);
	// add r8,r7,r8
	ctx.r8.u64 = ctx.r7.u64 + ctx.r8.u64;
	// stw r11,-248(r1)
	PPC_STORE_U32(ctx.r1.u32 + -248, ctx.r11.u32);
	// subf r7,r8,r10
	ctx.r7.s64 = ctx.r10.s64 - ctx.r8.s64;
	// lwz r11,-236(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + -236);
	// add r5,r10,r9
	ctx.r5.u64 = ctx.r10.u64 + ctx.r9.u64;
	// stw r8,-212(r1)
	PPC_STORE_U32(ctx.r1.u32 + -212, ctx.r8.u32);
	// lwzx r6,r4,r11
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r4.u32 + ctx.r11.u32);
	// add r10,r10,r6
	ctx.r10.u64 = ctx.r10.u64 + ctx.r6.u64;
	// srawi r10,r10,20
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0xFFFFF) != 0);
	ctx.r10.s64 = ctx.r10.s32 >> 20;
	// stw r6,-240(r1)
	PPC_STORE_U32(ctx.r1.u32 + -240, ctx.r6.u32);
	// srawi r7,r7,20
	ctx.xer.ca = (ctx.r7.s32 < 0) & ((ctx.r7.u32 & 0xFFFFF) != 0);
	ctx.r7.s64 = ctx.r7.s32 >> 20;
	// srawi r5,r5,20
	ctx.xer.ca = (ctx.r5.s32 < 0) & ((ctx.r5.u32 & 0xFFFFF) != 0);
	ctx.r5.s64 = ctx.r5.s32 >> 20;
	// rlwinm r7,r7,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r5,r5,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r7,r7,r20
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r7.u32 + ctx.r20.u32);
	// lwzx r5,r5,r19
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r5.u32 + ctx.r19.u32);
	// lwzx r10,r10,r21
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r21.u32);
	// rlwimi r14,r10,8,16,23
	ctx.r14.u64 = (__builtin_rotateleft32(ctx.r10.u32, 8) & 0xFF00) | (ctx.r14.u64 & 0xFFFFFFFFFFFF00FF);
	// lwz r22,-228(r1)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r1.u32 + -228);
	// rotlwi r3,r6,0
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r6.u32, 0);
	// or r10,r14,r7
	ctx.r10.u64 = ctx.r14.u64 | ctx.r7.u64;
	// rotlwi r28,r6,0
	ctx.r28.u64 = __builtin_rotateleft32(ctx.r6.u32, 0);
	// rlwinm r10,r10,8,0,23
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 8) & 0xFFFFFF00;
	// addi r14,r11,3072
	ctx.r14.s64 = ctx.r11.s64 + 3072;
	// or r7,r10,r5
	ctx.r7.u64 = ctx.r10.u64 | ctx.r5.u64;
	// lwz r10,-244(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + -244);
	// stwu r7,4(r10)
	ea = 4 + ctx.r10.u32;
	PPC_STORE_U32(ea, ctx.r7.u32);
	ctx.r10.u32 = ea;
	// addi r4,r11,5120
	ctx.r4.s64 = ctx.r11.s64 + 5120;
	// lwz r7,-232(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + -232);
	// addi r31,r11,5120
	ctx.r31.s64 = ctx.r11.s64 + 5120;
	// stw r14,-200(r1)
	PPC_STORE_U32(ctx.r1.u32 + -200, ctx.r14.u32);
	// addi r14,r11,1024
	ctx.r14.s64 = ctx.r11.s64 + 1024;
	// rlwinm r7,r7,26,22,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 26) & 0x3FC;
	// stw r14,-240(r1)
	PPC_STORE_U32(ctx.r1.u32 + -240, ctx.r14.u32);
	// addi r14,r11,5120
	ctx.r14.s64 = ctx.r11.s64 + 5120;
	// stw r7,-212(r1)
	PPC_STORE_U32(ctx.r1.u32 + -212, ctx.r7.u32);
	// addi r30,r11,5120
	ctx.r30.s64 = ctx.r11.s64 + 5120;
	// stw r14,-184(r1)
	PPC_STORE_U32(ctx.r1.u32 + -184, ctx.r14.u32);
	// addi r14,r11,5120
	ctx.r14.s64 = ctx.r11.s64 + 5120;
	// addi r26,r11,5120
	ctx.r26.s64 = ctx.r11.s64 + 5120;
	// stw r14,-196(r1)
	PPC_STORE_U32(ctx.r1.u32 + -196, ctx.r14.u32);
	// addi r14,r11,5120
	ctx.r14.s64 = ctx.r11.s64 + 5120;
	// addi r24,r11,5120
	ctx.r24.s64 = ctx.r11.s64 + 5120;
	// stw r14,-188(r1)
	PPC_STORE_U32(ctx.r1.u32 + -188, ctx.r14.u32);
	// addi r14,r11,3072
	ctx.r14.s64 = ctx.r11.s64 + 3072;
	// addi r23,r11,3072
	ctx.r23.s64 = ctx.r11.s64 + 3072;
	// addi r21,r11,5120
	ctx.r21.s64 = ctx.r11.s64 + 5120;
	// stw r14,-180(r1)
	PPC_STORE_U32(ctx.r1.u32 + -180, ctx.r14.u32);
	// addi r20,r11,4096
	ctx.r20.s64 = ctx.r11.s64 + 4096;
	// addi r19,r11,2048
	ctx.r19.s64 = ctx.r11.s64 + 2048;
	// addi r11,r11,5120
	ctx.r11.s64 = ctx.r11.s64 + 5120;
	// rlwinm r5,r27,26,22,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 26) & 0x3FC;
	// stw r11,-176(r1)
	PPC_STORE_U32(ctx.r1.u32 + -176, ctx.r11.u32);
	// lis r11,-1
	ctx.r11.s64 = -65536;
	// rotlwi r25,r8,0
	ctx.r25.u64 = __builtin_rotateleft32(ctx.r8.u32, 0);
	// rlwinm r27,r27,2,22,29
	ctx.r27.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 2) & 0x3FC;
	// lwzx r7,r29,r18
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r29.u32 + ctx.r18.u32);
	// rlwinm r29,r22,26,22,29
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r22.u32 | (ctx.r22.u64 << 32), 26) & 0x3FC;
	// lis r22,-1
	ctx.r22.s64 = -65536;
	// add r6,r7,r6
	ctx.r6.u64 = ctx.r7.u64 + ctx.r6.u64;
	// subf r18,r8,r7
	ctx.r18.s64 = ctx.r7.s64 - ctx.r8.s64;
	// stw r22,-192(r1)
	PPC_STORE_U32(ctx.r1.u32 + -192, ctx.r22.u32);
	// srawi r6,r6,20
	ctx.xer.ca = (ctx.r6.s32 < 0) & ((ctx.r6.u32 & 0xFFFFF) != 0);
	ctx.r6.s64 = ctx.r6.s32 >> 20;
	// srawi r18,r18,20
	ctx.xer.ca = (ctx.r18.s32 < 0) & ((ctx.r18.u32 & 0xFFFFF) != 0);
	ctx.r18.s64 = ctx.r18.s32 >> 20;
	// rlwinm r6,r6,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r18,r18,2,0,29
	ctx.r18.u64 = __builtin_rotateleft64(ctx.r18.u32 | (ctx.r18.u64 << 32), 2) & 0xFFFFFFFC;
	// add r7,r7,r9
	ctx.r7.u64 = ctx.r7.u64 + ctx.r9.u64;
	// lis r14,-1
	ctx.r14.s64 = -65536;
	// srawi r7,r7,20
	ctx.xer.ca = (ctx.r7.s32 < 0) & ((ctx.r7.u32 & 0xFFFFF) != 0);
	ctx.r7.s64 = ctx.r7.s32 >> 20;
	// lwzx r6,r6,r15
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r6.u32 + ctx.r15.u32);
	// lis r22,-1
	ctx.r22.s64 = -65536;
	// lwzx r18,r18,r17
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r18.u32 + ctx.r17.u32);
	// rlwinm r7,r7,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwimi r16,r6,8,16,23
	ctx.r16.u64 = (__builtin_rotateleft32(ctx.r6.u32, 8) & 0xFF00) | (ctx.r16.u64 & 0xFFFFFFFFFFFF00FF);
	// or r6,r16,r18
	ctx.r6.u64 = ctx.r16.u64 | ctx.r18.u64;
	// lwz r18,-208(r1)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r1.u32 + -208);
	// rlwinm r6,r6,8,0,23
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 8) & 0xFFFFFF00;
	// lwzx r7,r7,r18
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r7.u32 + ctx.r18.u32);
	// lwz r18,-204(r1)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r1.u32 + -204);
	// or r7,r6,r7
	ctx.r7.u64 = ctx.r6.u64 | ctx.r7.u64;
	// stw r11,-204(r1)
	PPC_STORE_U32(ctx.r1.u32 + -204, ctx.r11.u32);
	// stwu r7,4(r10)
	ea = 4 + ctx.r10.u32;
	PPC_STORE_U32(ea, ctx.r7.u32);
	ctx.r10.u32 = ea;
	// stw r10,-244(r1)
	PPC_STORE_U32(ctx.r1.u32 + -244, ctx.r10.u32);
	// lwz r10,-248(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + -248);
	// lwzx r11,r5,r18
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + ctx.r18.u32);
	// lwz r5,-204(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + -204);
	// add r7,r11,r3
	ctx.r7.u64 = ctx.r11.u64 + ctx.r3.u64;
	// subf r8,r8,r11
	ctx.r8.s64 = ctx.r11.s64 - ctx.r8.s64;
	// srawi r7,r7,20
	ctx.xer.ca = (ctx.r7.s32 < 0) & ((ctx.r7.u32 & 0xFFFFF) != 0);
	ctx.r7.s64 = ctx.r7.s32 >> 20;
	// srawi r8,r8,20
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0xFFFFF) != 0);
	ctx.r8.s64 = ctx.r8.s32 >> 20;
	// rlwinm r7,r7,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// rlwinm r8,r8,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// srawi r11,r11,20
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0xFFFFF) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 20;
	// lwzx r7,r7,r4
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r7.u32 + ctx.r4.u32);
	// rlwimi r5,r7,8,16,23
	ctx.r5.u64 = (__builtin_rotateleft32(ctx.r7.u32, 8) & 0xFF00) | (ctx.r5.u64 & 0xFFFFFFFFFFFF00FF);
	// lwzx r8,r8,r31
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r31.u32);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// or r8,r5,r8
	ctx.r8.u64 = ctx.r5.u64 | ctx.r8.u64;
	// lwzx r11,r11,r30
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r30.u32);
	// lwz r5,-212(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + -212);
	// lis r30,-1
	ctx.r30.s64 = -65536;
	// rlwinm r8,r8,8,0,23
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 8) & 0xFFFFFF00;
	// lwz r4,-240(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + -240);
	// lwz r31,-252(r1)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + -252);
	// or r11,r8,r11
	ctx.r11.u64 = ctx.r8.u64 | ctx.r11.u64;
	// stwu r11,4(r10)
	ea = 4 + ctx.r10.u32;
	PPC_STORE_U32(ea, ctx.r11.u32);
	ctx.r10.u32 = ea;
	// lwzx r11,r27,r23
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + ctx.r23.u32);
	// add r8,r11,r28
	ctx.r8.u64 = ctx.r11.u64 + ctx.r28.u64;
	// srawi r8,r8,20
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0xFFFFF) != 0);
	ctx.r8.s64 = ctx.r8.s32 >> 20;
	// subf r7,r25,r11
	ctx.r7.s64 = ctx.r11.s64 - ctx.r25.s64;
	// lwz r25,-200(r1)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r1.u32 + -200);
	// rlwinm r8,r8,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// srawi r7,r7,20
	ctx.xer.ca = (ctx.r7.s32 < 0) & ((ctx.r7.u32 & 0xFFFFF) != 0);
	ctx.r7.s64 = ctx.r7.s32 >> 20;
	// srawi r11,r11,20
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0xFFFFF) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 20;
	// rlwinm r7,r7,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r9,r8,r26
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r26.u32);
	// rlwinm r8,r11,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwimi r14,r9,8,16,23
	ctx.r14.u64 = (__builtin_rotateleft32(ctx.r9.u32, 8) & 0xFF00) | (ctx.r14.u64 & 0xFFFFFFFFFFFF00FF);
	// lwz r11,-256(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + -256);
	// lwzx r8,r8,r21
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r21.u32);
	// lis r28,-1
	ctx.r28.s64 = -65536;
	// lwzx r9,r7,r24
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r7.u32 + ctx.r24.u32);
	// or r9,r14,r9
	ctx.r9.u64 = ctx.r14.u64 | ctx.r9.u64;
	// rlwinm r9,r9,8,0,23
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 8) & 0xFFFFFF00;
	// lwz r21,-196(r1)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r1.u32 + -196);
	// or r9,r9,r8
	ctx.r9.u64 = ctx.r9.u64 | ctx.r8.u64;
	// stwu r9,4(r10)
	ea = 4 + ctx.r10.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r10.u32 = ea;
	// lwzu r8,4(r11)
	ea = 4 + ctx.r11.u32;
	ctx.r8.u64 = PPC_LOAD_U32(ea);
	ctx.r11.u32 = ea;
	// addi r9,r11,4
	ctx.r9.s64 = ctx.r11.s64 + 4;
	// rlwinm r6,r8,10,22,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 10) & 0x3FC;
	// lwz r11,-236(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + -236);
	// stw r9,-256(r1)
	PPC_STORE_U32(ctx.r1.u32 + -256, ctx.r9.u32);
	// lwzx r7,r29,r19
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r29.u32 + ctx.r19.u32);
	// addi r27,r11,5120
	ctx.r27.s64 = ctx.r11.s64 + 5120;
	// lwzx r3,r5,r20
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r5.u32 + ctx.r20.u32);
	// add r7,r3,r7
	ctx.r7.u64 = ctx.r3.u64 + ctx.r7.u64;
	// lwzx r9,r6,r25
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r6.u32 + ctx.r25.u32);
	// subf r25,r7,r9
	ctx.r25.s64 = ctx.r9.s64 - ctx.r7.s64;
	// lwzx r6,r29,r11
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r29.u32 + ctx.r11.u32);
	// add r29,r9,r6
	ctx.r29.u64 = ctx.r9.u64 + ctx.r6.u64;
	// srawi r29,r29,20
	ctx.xer.ca = (ctx.r29.s32 < 0) & ((ctx.r29.u32 & 0xFFFFF) != 0);
	ctx.r29.s64 = ctx.r29.s32 >> 20;
	// lwzx r5,r5,r4
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r5.u32 + ctx.r4.u32);
	// srawi r25,r25,20
	ctx.xer.ca = (ctx.r25.s32 < 0) & ((ctx.r25.u32 & 0xFFFFF) != 0);
	ctx.r25.s64 = ctx.r25.s32 >> 20;
	// lwzu r4,4(r31)
	ea = 4 + ctx.r31.u32;
	ctx.r4.u64 = PPC_LOAD_U32(ea);
	ctx.r31.u32 = ea;
	// rlwinm r29,r29,2,0,29
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r25,r25,2,0,29
	ctx.r25.u64 = __builtin_rotateleft64(ctx.r25.u32 | (ctx.r25.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r3,r8,18,22,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 18) & 0x3FC;
	// addi r26,r11,5120
	ctx.r26.s64 = ctx.r11.s64 + 5120;
	// addi r23,r11,3072
	ctx.r23.s64 = ctx.r11.s64 + 3072;
	// lwzx r29,r29,r21
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r29.u32 + ctx.r21.u32);
	// lwz r21,-192(r1)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r1.u32 + -192);
	// rlwimi r21,r29,8,16,23
	ctx.r21.u64 = (__builtin_rotateleft32(ctx.r29.u32, 8) & 0xFF00) | (ctx.r21.u64 & 0xFFFFFFFFFFFF00FF);
	// lwz r29,-188(r1)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r1.u32 + -188);
	// lwzx r29,r25,r29
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r25.u32 + ctx.r29.u32);
	// add r24,r9,r5
	ctx.r24.u64 = ctx.r9.u64 + ctx.r5.u64;
	// lwz r9,-244(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + -244);
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// srawi r24,r24,20
	ctx.xer.ca = (ctx.r24.s32 < 0) & ((ctx.r24.u32 & 0xFFFFF) != 0);
	ctx.r24.s64 = ctx.r24.s32 >> 20;
	// stw r4,-200(r1)
	PPC_STORE_U32(ctx.r1.u32 + -200, ctx.r4.u32);
	// stw r31,-252(r1)
	PPC_STORE_U32(ctx.r1.u32 + -252, ctx.r31.u32);
	// rlwinm r25,r24,2,0,29
	ctx.r25.u64 = __builtin_rotateleft64(ctx.r24.u32 | (ctx.r24.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r24,-184(r1)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r1.u32 + -184);
	// lwzx r25,r25,r24
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r25.u32 + ctx.r24.u32);
	// rlwinm r24,r4,10,22,29
	ctx.r24.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 10) & 0x3FC;
	// or r29,r21,r29
	ctx.r29.u64 = ctx.r21.u64 | ctx.r29.u64;
	// rlwinm r29,r29,8,0,23
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 8) & 0xFFFFFF00;
	// or r29,r29,r25
	ctx.r29.u64 = ctx.r29.u64 | ctx.r25.u64;
	// stwu r29,4(r9)
	ea = 4 + ctx.r9.u32;
	PPC_STORE_U32(ea, ctx.r29.u32);
	ctx.r9.u32 = ea;
	// lwz r29,-180(r1)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r1.u32 + -180);
	// lwzx r3,r3,r29
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + ctx.r29.u32);
	// add r29,r3,r6
	ctx.r29.u64 = ctx.r3.u64 + ctx.r6.u64;
	// subf r25,r7,r3
	ctx.r25.s64 = ctx.r3.s64 - ctx.r7.s64;
	// srawi r31,r29,20
	ctx.xer.ca = (ctx.r29.s32 < 0) & ((ctx.r29.u32 & 0xFFFFF) != 0);
	ctx.r31.s64 = ctx.r29.s32 >> 20;
	// add r3,r3,r5
	ctx.r3.u64 = ctx.r3.u64 + ctx.r5.u64;
	// srawi r29,r25,20
	ctx.xer.ca = (ctx.r25.s32 < 0) & ((ctx.r25.u32 & 0xFFFFF) != 0);
	ctx.r29.s64 = ctx.r25.s32 >> 20;
	// srawi r3,r3,20
	ctx.xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0xFFFFF) != 0);
	ctx.r3.s64 = ctx.r3.s32 >> 20;
	// rlwinm r31,r31,2,0,29
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r20,-176(r1)
	ctx.r20.u64 = PPC_LOAD_U32(ctx.r1.u32 + -176);
	// rlwinm r29,r29,2,0,29
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r3,r3,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r19,-232(r1)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r1.u32 + -232);
	// addi r21,r11,5120
	ctx.r21.s64 = ctx.r11.s64 + 5120;
	// lwz r18,-228(r1)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r1.u32 + -228);
	// addi r25,r11,5120
	ctx.r25.s64 = ctx.r11.s64 + 5120;
	// rlwinm r17,r8,26,22,29
	ctx.r17.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 26) & 0x3FC;
	// lwzx r31,r31,r20
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r20.u32);
	// addi r20,r11,5120
	ctx.r20.s64 = ctx.r11.s64 + 5120;
	// lwzx r3,r3,r27
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + ctx.r27.u32);
	// addi r27,r11,3072
	ctx.r27.s64 = ctx.r11.s64 + 3072;
	// rlwimi r22,r31,8,16,23
	ctx.r22.u64 = (__builtin_rotateleft32(ctx.r31.u32, 8) & 0xFF00) | (ctx.r22.u64 & 0xFFFFFFFFFFFF00FF);
	// lwzx r31,r29,r26
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r29.u32 + ctx.r26.u32);
	// rlwinm r29,r4,18,22,29
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 18) & 0x3FC;
	// or r31,r22,r31
	ctx.r31.u64 = ctx.r22.u64 | ctx.r31.u64;
	// addi r22,r11,5120
	ctx.r22.s64 = ctx.r11.s64 + 5120;
	// rlwinm r31,r31,8,0,23
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 8) & 0xFFFFFF00;
	// addi r26,r11,5120
	ctx.r26.s64 = ctx.r11.s64 + 5120;
	// or r3,r31,r3
	ctx.r3.u64 = ctx.r31.u64 | ctx.r3.u64;
	// addi r31,r11,5120
	ctx.r31.s64 = ctx.r11.s64 + 5120;
	// stwu r3,4(r9)
	ea = 4 + ctx.r9.u32;
	PPC_STORE_U32(ea, ctx.r3.u32);
	ctx.r9.u32 = ea;
	// addi r16,r11,3072
	ctx.r16.s64 = ctx.r11.s64 + 3072;
	// lwzx r3,r24,r23
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r24.u32 + ctx.r23.u32);
	// add r24,r3,r6
	ctx.r24.u64 = ctx.r3.u64 + ctx.r6.u64;
	// subf r23,r7,r3
	ctx.r23.s64 = ctx.r3.s64 - ctx.r7.s64;
	// srawi r24,r24,20
	ctx.xer.ca = (ctx.r24.s32 < 0) & ((ctx.r24.u32 & 0xFFFFF) != 0);
	ctx.r24.s64 = ctx.r24.s32 >> 20;
	// srawi r23,r23,20
	ctx.xer.ca = (ctx.r23.s32 < 0) & ((ctx.r23.u32 & 0xFFFFF) != 0);
	ctx.r23.s64 = ctx.r23.s32 >> 20;
	// rlwinm r24,r24,2,0,29
	ctx.r24.u64 = __builtin_rotateleft64(ctx.r24.u32 | (ctx.r24.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r23,r23,2,0,29
	ctx.r23.u64 = __builtin_rotateleft64(ctx.r23.u32 | (ctx.r23.u64 << 32), 2) & 0xFFFFFFFC;
	// add r3,r3,r5
	ctx.r3.u64 = ctx.r3.u64 + ctx.r5.u64;
	// srawi r3,r3,20
	ctx.xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0xFFFFF) != 0);
	ctx.r3.s64 = ctx.r3.s32 >> 20;
	// lwzx r24,r24,r21
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r24.u32 + ctx.r21.u32);
	// rlwinm r21,r19,2,22,29
	ctx.r21.u64 = __builtin_rotateleft64(ctx.r19.u32 | (ctx.r19.u64 << 32), 2) & 0x3FC;
	// lwzx r23,r23,r20
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r23.u32 + ctx.r20.u32);
	// rlwinm r3,r3,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwimi r30,r24,8,16,23
	ctx.r30.u64 = (__builtin_rotateleft32(ctx.r24.u32, 8) & 0xFF00) | (ctx.r30.u64 & 0xFFFFFFFFFFFF00FF);
	// addi r24,r11,4096
	ctx.r24.s64 = ctx.r11.s64 + 4096;
	// addi r20,r11,1024
	ctx.r20.s64 = ctx.r11.s64 + 1024;
	// rlwinm r19,r4,26,22,29
	ctx.r19.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 26) & 0x3FC;
	// lwzx r3,r3,r25
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + ctx.r25.u32);
	// rlwinm r25,r18,2,22,29
	ctx.r25.u64 = __builtin_rotateleft64(ctx.r18.u32 | (ctx.r18.u64 << 32), 2) & 0x3FC;
	// or r30,r30,r23
	ctx.r30.u64 = ctx.r30.u64 | ctx.r23.u64;
	// addi r23,r11,2048
	ctx.r23.s64 = ctx.r11.s64 + 2048;
	// rlwinm r30,r30,8,0,23
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 8) & 0xFFFFFF00;
	// lis r18,-1
	ctx.r18.s64 = -65536;
	// or r3,r30,r3
	ctx.r3.u64 = ctx.r30.u64 | ctx.r3.u64;
	// rlwinm r30,r8,2,22,29
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0x3FC;
	// stwu r3,4(r10)
	ea = 4 + ctx.r10.u32;
	PPC_STORE_U32(ea, ctx.r3.u32);
	ctx.r10.u32 = ea;
	// lwzx r3,r29,r27
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + ctx.r27.u32);
	// add r8,r3,r6
	ctx.r8.u64 = ctx.r3.u64 + ctx.r6.u64;
	// subf r7,r7,r3
	ctx.r7.s64 = ctx.r3.s64 - ctx.r7.s64;
	// add r6,r3,r5
	ctx.r6.u64 = ctx.r3.u64 + ctx.r5.u64;
	// srawi r8,r8,20
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0xFFFFF) != 0);
	ctx.r8.s64 = ctx.r8.s32 >> 20;
	// srawi r7,r7,20
	ctx.xer.ca = (ctx.r7.s32 < 0) & ((ctx.r7.u32 & 0xFFFFF) != 0);
	ctx.r7.s64 = ctx.r7.s32 >> 20;
	// srawi r6,r6,20
	ctx.xer.ca = (ctx.r6.s32 < 0) & ((ctx.r6.u32 & 0xFFFFF) != 0);
	ctx.r6.s64 = ctx.r6.s32 >> 20;
	// rlwinm r8,r8,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r6,r6,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r7,r7,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r3,r11,5120
	ctx.r3.s64 = ctx.r11.s64 + 5120;
	// addi r29,r11,5120
	ctx.r29.s64 = ctx.r11.s64 + 5120;
	// lwzx r8,r8,r31
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r31.u32);
	// rlwimi r28,r8,8,16,23
	ctx.r28.u64 = (__builtin_rotateleft32(ctx.r8.u32, 8) & 0xFF00) | (ctx.r28.u64 & 0xFFFFFFFFFFFF00FF);
	// lwzx r6,r6,r22
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r6.u32 + ctx.r22.u32);
	// lis r31,-1
	ctx.r31.s64 = -65536;
	// lwzx r8,r7,r26
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r7.u32 + ctx.r26.u32);
	// or r8,r28,r8
	ctx.r8.u64 = ctx.r28.u64 | ctx.r8.u64;
	// rlwinm r8,r8,8,0,23
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 8) & 0xFFFFFF00;
	// addi r27,r11,5120
	ctx.r27.s64 = ctx.r11.s64 + 5120;
	// or r8,r8,r6
	ctx.r8.u64 = ctx.r8.u64 | ctx.r6.u64;
	// addi r26,r11,3072
	ctx.r26.s64 = ctx.r11.s64 + 3072;
	// stwu r8,4(r10)
	ea = 4 + ctx.r10.u32;
	PPC_STORE_U32(ea, ctx.r8.u32);
	ctx.r10.u32 = ea;
	// addi r28,r11,5120
	ctx.r28.s64 = ctx.r11.s64 + 5120;
	// lwzx r4,r21,r24
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r21.u32 + ctx.r24.u32);
	// addi r22,r11,5120
	ctx.r22.s64 = ctx.r11.s64 + 5120;
	// lwzx r8,r25,r23
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r25.u32 + ctx.r23.u32);
	// addi r24,r11,3072
	ctx.r24.s64 = ctx.r11.s64 + 3072;
	// add r8,r4,r8
	ctx.r8.u64 = ctx.r4.u64 + ctx.r8.u64;
	// lwzx r5,r17,r16
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r17.u32 + ctx.r16.u32);
	// addi r17,r11,5120
	ctx.r17.s64 = ctx.r11.s64 + 5120;
	// lwzx r6,r21,r20
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r21.u32 + ctx.r20.u32);
	// lwzx r7,r25,r11
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r25.u32 + ctx.r11.u32);
	// subf r4,r8,r5
	ctx.r4.s64 = ctx.r5.s64 - ctx.r8.s64;
	// addi r23,r11,5120
	ctx.r23.s64 = ctx.r11.s64 + 5120;
	// add r25,r5,r7
	ctx.r25.u64 = ctx.r5.u64 + ctx.r7.u64;
	// add r5,r5,r6
	ctx.r5.u64 = ctx.r5.u64 + ctx.r6.u64;
	// srawi r25,r25,20
	ctx.xer.ca = (ctx.r25.s32 < 0) & ((ctx.r25.u32 & 0xFFFFF) != 0);
	ctx.r25.s64 = ctx.r25.s32 >> 20;
	// srawi r4,r4,20
	ctx.xer.ca = (ctx.r4.s32 < 0) & ((ctx.r4.u32 & 0xFFFFF) != 0);
	ctx.r4.s64 = ctx.r4.s32 >> 20;
	// rlwinm r25,r25,2,0,29
	ctx.r25.u64 = __builtin_rotateleft64(ctx.r25.u32 | (ctx.r25.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r4,r4,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// srawi r5,r5,20
	ctx.xer.ca = (ctx.r5.s32 < 0) & ((ctx.r5.u32 & 0xFFFFF) != 0);
	ctx.r5.s64 = ctx.r5.s32 >> 20;
	// rlwinm r5,r5,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r3,r25,r3
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r25.u32 + ctx.r3.u32);
	// lis r25,-1
	ctx.r25.s64 = -65536;
	// lwzx r4,r4,r29
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r4.u32 + ctx.r29.u32);
	// rlwimi r31,r3,8,16,23
	ctx.r31.u64 = (__builtin_rotateleft32(ctx.r3.u32, 8) & 0xFF00) | (ctx.r31.u64 & 0xFFFFFFFFFFFF00FF);
	// addi r3,r11,5120
	ctx.r3.s64 = ctx.r11.s64 + 5120;
	// or r4,r31,r4
	ctx.r4.u64 = ctx.r31.u64 | ctx.r4.u64;
	// lwzx r5,r5,r27
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r5.u32 + ctx.r27.u32);
	// lwz r27,-200(r1)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r1.u32 + -200);
	// rlwinm r4,r4,8,0,23
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 8) & 0xFFFFFF00;
	// or r5,r4,r5
	ctx.r5.u64 = ctx.r4.u64 | ctx.r5.u64;
	// lis r4,-1
	ctx.r4.s64 = -65536;
	// stwu r5,4(r9)
	ea = 4 + ctx.r9.u32;
	PPC_STORE_U32(ea, ctx.r5.u32);
	ctx.r9.u32 = ea;
	// lwzx r5,r30,r26
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r26.u32);
	// add r31,r5,r7
	ctx.r31.u64 = ctx.r5.u64 + ctx.r7.u64;
	// subf r29,r8,r5
	ctx.r29.s64 = ctx.r5.s64 - ctx.r8.s64;
	// add r5,r5,r6
	ctx.r5.u64 = ctx.r5.u64 + ctx.r6.u64;
	// srawi r31,r31,20
	ctx.xer.ca = (ctx.r31.s32 < 0) & ((ctx.r31.u32 & 0xFFFFF) != 0);
	ctx.r31.s64 = ctx.r31.s32 >> 20;
	// srawi r29,r29,20
	ctx.xer.ca = (ctx.r29.s32 < 0) & ((ctx.r29.u32 & 0xFFFFF) != 0);
	ctx.r29.s64 = ctx.r29.s32 >> 20;
	// srawi r5,r5,20
	ctx.xer.ca = (ctx.r5.s32 < 0) & ((ctx.r5.u32 & 0xFFFFF) != 0);
	ctx.r5.s64 = ctx.r5.s32 >> 20;
	// rlwinm r31,r31,2,0,29
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r5,r5,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r29,r29,2,0,29
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r30,r11,5120
	ctx.r30.s64 = ctx.r11.s64 + 5120;
	// addi r26,r11,3072
	ctx.r26.s64 = ctx.r11.s64 + 3072;
	// lwzx r31,r31,r28
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r28.u32);
	// rlwimi r18,r31,8,16,23
	ctx.r18.u64 = (__builtin_rotateleft32(ctx.r31.u32, 8) & 0xFF00) | (ctx.r18.u64 & 0xFFFFFFFFFFFF00FF);
	// lwzx r5,r5,r17
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r5.u32 + ctx.r17.u32);
	// rlwinm r28,r27,2,22,29
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 2) & 0x3FC;
	// lwzx r29,r29,r22
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r29.u32 + ctx.r22.u32);
	// or r29,r18,r29
	ctx.r29.u64 = ctx.r18.u64 | ctx.r29.u64;
	// rlwinm r29,r29,8,0,23
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 8) & 0xFFFFFF00;
	// addi r31,r11,5120
	ctx.r31.s64 = ctx.r11.s64 + 5120;
	// or r5,r29,r5
	ctx.r5.u64 = ctx.r29.u64 | ctx.r5.u64;
	// addi r27,r11,5120
	ctx.r27.s64 = ctx.r11.s64 + 5120;
	// stwu r5,4(r9)
	ea = 4 + ctx.r9.u32;
	PPC_STORE_U32(ea, ctx.r5.u32);
	ctx.r9.u32 = ea;
	// addi r29,r11,5120
	ctx.r29.s64 = ctx.r11.s64 + 5120;
	// lwzx r5,r19,r24
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r19.u32 + ctx.r24.u32);
	// add r24,r5,r7
	ctx.r24.u64 = ctx.r5.u64 + ctx.r7.u64;
	// subf r22,r8,r5
	ctx.r22.s64 = ctx.r5.s64 - ctx.r8.s64;
	// srawi r24,r24,20
	ctx.xer.ca = (ctx.r24.s32 < 0) & ((ctx.r24.u32 & 0xFFFFF) != 0);
	ctx.r24.s64 = ctx.r24.s32 >> 20;
	// srawi r22,r22,20
	ctx.xer.ca = (ctx.r22.s32 < 0) & ((ctx.r22.u32 & 0xFFFFF) != 0);
	ctx.r22.s64 = ctx.r22.s32 >> 20;
	// rlwinm r24,r24,2,0,29
	ctx.r24.u64 = __builtin_rotateleft64(ctx.r24.u32 | (ctx.r24.u64 << 32), 2) & 0xFFFFFFFC;
	// add r5,r5,r6
	ctx.r5.u64 = ctx.r5.u64 + ctx.r6.u64;
	// rlwinm r22,r22,2,0,29
	ctx.r22.u64 = __builtin_rotateleft64(ctx.r22.u32 | (ctx.r22.u64 << 32), 2) & 0xFFFFFFFC;
	// srawi r5,r5,20
	ctx.xer.ca = (ctx.r5.s32 < 0) & ((ctx.r5.u32 & 0xFFFFF) != 0);
	ctx.r5.s64 = ctx.r5.s32 >> 20;
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// lwzx r24,r24,r23
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r24.u32 + ctx.r23.u32);
	// rlwinm r5,r5,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwimi r4,r24,8,16,23
	ctx.r4.u64 = (__builtin_rotateleft32(ctx.r24.u32, 8) & 0xFF00) | (ctx.r4.u64 & 0xFFFFFFFFFFFF00FF);
	// lwzx r3,r22,r3
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r22.u32 + ctx.r3.u32);
	// or r4,r4,r3
	ctx.r4.u64 = ctx.r4.u64 | ctx.r3.u64;
	// lwzx r5,r5,r30
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r5.u32 + ctx.r30.u32);
	// rlwinm r4,r4,8,0,23
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 8) & 0xFFFFFF00;
	// or r5,r4,r5
	ctx.r5.u64 = ctx.r4.u64 | ctx.r5.u64;
	// stwu r5,4(r10)
	ea = 4 + ctx.r10.u32;
	PPC_STORE_U32(ea, ctx.r5.u32);
	ctx.r10.u32 = ea;
	// lwzx r5,r28,r26
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r28.u32 + ctx.r26.u32);
	// add r7,r5,r7
	ctx.r7.u64 = ctx.r5.u64 + ctx.r7.u64;
	// subf r8,r8,r5
	ctx.r8.s64 = ctx.r5.s64 - ctx.r8.s64;
	// srawi r7,r7,20
	ctx.xer.ca = (ctx.r7.s32 < 0) & ((ctx.r7.u32 & 0xFFFFF) != 0);
	ctx.r7.s64 = ctx.r7.s32 >> 20;
	// srawi r8,r8,20
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0xFFFFF) != 0);
	ctx.r8.s64 = ctx.r8.s32 >> 20;
	// rlwinm r7,r7,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r8,r8,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// add r6,r5,r6
	ctx.r6.u64 = ctx.r5.u64 + ctx.r6.u64;
	// srawi r6,r6,20
	ctx.xer.ca = (ctx.r6.s32 < 0) & ((ctx.r6.u32 & 0xFFFFF) != 0);
	ctx.r6.s64 = ctx.r6.s32 >> 20;
	// lwzx r7,r7,r31
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r7.u32 + ctx.r31.u32);
	// rlwimi r25,r7,8,16,23
	ctx.r25.u64 = (__builtin_rotateleft32(ctx.r7.u32, 8) & 0xFF00) | (ctx.r25.u64 & 0xFFFFFFFFFFFF00FF);
	// lwzx r8,r8,r27
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r27.u32);
	// or r8,r25,r8
	ctx.r8.u64 = ctx.r25.u64 | ctx.r8.u64;
	// rlwinm r7,r6,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r8,r8,8,0,23
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 8) & 0xFFFFFF00;
	// lwzx r7,r7,r29
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r7.u32 + ctx.r29.u32);
	// lwz r6,-252(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + -252);
	// or r8,r8,r7
	ctx.r8.u64 = ctx.r8.u64 | ctx.r7.u64;
	// lwz r7,-256(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + -256);
	// stwu r8,4(r10)
	ea = 4 + ctx.r10.u32;
	PPC_STORE_U32(ea, ctx.r8.u32);
	ctx.r10.u32 = ea;
	// lwz r8,-224(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + -224);
	// addi r3,r10,4
	ctx.r3.s64 = ctx.r10.s64 + 4;
	// lwz r10,-220(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + -220);
	// stw r3,-248(r1)
	PPC_STORE_U32(ctx.r1.u32 + -248, ctx.r3.u32);
	// bdnz 0x8328de70
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8328DE70;
	// lwz r28,-172(r1)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r1.u32 + -172);
	// lwz r5,-216(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + -216);
	// lwz r4,-168(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + -168);
	// lwz r31,-164(r1)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + -164);
loc_8328E640:
	// lwz r30,-160(r1)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + -160);
	// addic. r5,r5,-1
	ctx.xer.ca = ctx.r5.u32 > 0;
	ctx.r5.s64 = ctx.r5.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// lwz r29,-156(r1)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r1.u32 + -156);
	// add r7,r4,r7
	ctx.r7.u64 = ctx.r4.u64 + ctx.r7.u64;
	// add r6,r4,r6
	ctx.r6.u64 = ctx.r4.u64 + ctx.r6.u64;
	// stw r5,-216(r1)
	PPC_STORE_U32(ctx.r1.u32 + -216, ctx.r5.u32);
	// add r3,r31,r3
	ctx.r3.u64 = ctx.r31.u64 + ctx.r3.u64;
	// stw r7,-256(r1)
	PPC_STORE_U32(ctx.r1.u32 + -256, ctx.r7.u32);
	// stw r6,-252(r1)
	PPC_STORE_U32(ctx.r1.u32 + -252, ctx.r6.u32);
	// add r10,r30,r10
	ctx.r10.u64 = ctx.r30.u64 + ctx.r10.u64;
	// add r8,r29,r8
	ctx.r8.u64 = ctx.r29.u64 + ctx.r8.u64;
	// stw r3,-248(r1)
	PPC_STORE_U32(ctx.r1.u32 + -248, ctx.r3.u32);
	// add r9,r31,r9
	ctx.r9.u64 = ctx.r31.u64 + ctx.r9.u64;
	// bne 0x8328de64
	if (!ctx.cr0.eq) goto loc_8328DE64;
loc_8328E678:
	// b 0x833a01c0
	__restgprlr_14(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8328E67C"))) PPC_WEAK_FUNC(sub_8328E67C);
PPC_FUNC_IMPL(__imp__sub_8328E67C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8328E680"))) PPC_WEAK_FUNC(sub_8328E680);
PPC_FUNC_IMPL(__imp__sub_8328E680) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// lwz r10,20(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// lwz r9,36(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 36);
	// lwz r8,16(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// lwz r7,32(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// lwz r6,48(r3)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// lwz r3,4(r4)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// lwz r31,8(r4)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	// lwz r30,12(r4)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r4.u32 + 12);
	// lwz r4,16(r4)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r4.u32 + 16);
	// lwz r5,0(r5)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// stw r11,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r11.u32);
	// stw r10,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r10.u32);
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// stw r9,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r9.u32);
	// stw r8,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r8.u32);
	// stw r7,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r7.u32);
	// stw r6,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r6.u32);
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// stw r31,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r31.u32);
	// stw r30,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r30.u32);
	// stw r4,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r4.u32);
	// bne cr6,0x8328e6fc
	if (!ctx.cr6.eq) goto loc_8328E6FC;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x8328dd90
	ctx.lr = 0x8328E6FC;
	sub_8328DD90(ctx, base);
loc_8328E6FC:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8328E714"))) PPC_WEAK_FUNC(sub_8328E714);
PPC_FUNC_IMPL(__imp__sub_8328E714) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8328E718"))) PPC_WEAK_FUNC(sub_8328E718);
PPC_FUNC_IMPL(__imp__sub_8328E718) {
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
	// lis r11,-31822
	ctx.r11.s64 = -2085486592;
	// li r5,296
	ctx.r5.s64 = 296;
	// addi r31,r11,-896
	ctx.r31.s64 = ctx.r11.s64 + -896;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x833a2b30
	ctx.lr = 0x8328E740;
	sub_833A2B30(ctx, base);
	// li r11,8
	ctx.r11.s64 = 8;
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
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

__attribute__((alias("__imp__sub_8328E75C"))) PPC_WEAK_FUNC(sub_8328E75C);
PPC_FUNC_IMPL(__imp__sub_8328E75C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8328E760"))) PPC_WEAK_FUNC(sub_8328E760);
PPC_FUNC_IMPL(__imp__sub_8328E760) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31822
	ctx.r10.s64 = -2085486592;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r10,r10,-896
	ctx.r10.s64 = ctx.r10.s64 + -896;
	// lwz r9,4(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// cmpwi r9,0
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// ble 0x8328e798
	if (!ctx.cr0.gt) goto loc_8328E798;
	// addi r3,r10,8
	ctx.r3.s64 = ctx.r10.s64 + 8;
loc_8328E77C:
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r3,r3,36
	ctx.r3.s64 = ctx.r3.s64 + 36;
	// cmpw cr6,r11,r9
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r9.s32, ctx.xer);
	// blt cr6,0x8328e77c
	if (ctx.cr6.lt) goto loc_8328E77C;
loc_8328E798:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8328E7A0"))) PPC_WEAK_FUNC(sub_8328E7A0);
PPC_FUNC_IMPL(__imp__sub_8328E7A0) {
	PPC_FUNC_PROLOGUE();
	// li r10,31
	ctx.r10.s64 = 31;
	// li r9,100
	ctx.r9.s64 = 100;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r10,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r10.u32);
	// stw r9,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r9.u32);
	// li r8,1
	ctx.r8.s64 = 1;
	// li r10,127
	ctx.r10.s64 = 127;
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// li r9,255
	ctx.r9.s64 = 255;
	// stw r8,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r8.u32);
	// stb r11,20(r3)
	PPC_STORE_U8(ctx.r3.u32 + 20, ctx.r11.u8);
	// stb r10,21(r3)
	PPC_STORE_U8(ctx.r3.u32 + 21, ctx.r10.u8);
	// stb r9,22(r3)
	PPC_STORE_U8(ctx.r3.u32 + 22, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8328E7D8"))) PPC_WEAK_FUNC(sub_8328E7D8);
PPC_FUNC_IMPL(__imp__sub_8328E7D8) {
	PPC_FUNC_PROLOGUE();
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lis r10,-31822
	ctx.r10.s64 = -2085486592;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// lwz r11,-896(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -896);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stw r11,-896(r10)
	PPC_STORE_U32(ctx.r10.u32 + -896, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8328E7FC"))) PPC_WEAK_FUNC(sub_8328E7FC);
PPC_FUNC_IMPL(__imp__sub_8328E7FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8328E800"))) PPC_WEAK_FUNC(sub_8328E800);
PPC_FUNC_IMPL(__imp__sub_8328E800) {
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
	// lwz r11,24(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r6,r5
	ctx.r6.u64 = ctx.r5.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8328e838
	if (ctx.cr6.eq) goto loc_8328E838;
	// lwz r5,16(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// lwz r4,12(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// lwz r3,8(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// bctrl 
	ctx.lr = 0x8328E838;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8328E838:
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
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

__attribute__((alias("__imp__sub_8328E854"))) PPC_WEAK_FUNC(sub_8328E854);
PPC_FUNC_IMPL(__imp__sub_8328E854) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

