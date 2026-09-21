#include "ppc_recomp_shared.h"

__attribute__((alias("__imp__sub_832767A0"))) PPC_WEAK_FUNC(sub_832767A0);
PPC_FUNC_IMPL(__imp__sub_832767A0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x833a019c
	ctx.lr = 0x832767A8;
	__savegprlr_25(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r4,75
	ctx.r4.s64 = 75;
	// lwz r25,44(r3)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r3.u32 + 44);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r29,0
	ctx.r29.s64 = 0;
	// bl 0x83274d00
	ctx.lr = 0x832767C0;
	sub_83274D00(ctx, base);
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// li r27,0
	ctx.r27.s64 = 0;
	// b 0x8327686c
	goto loc_8327686C;
loc_832767CC:
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// mr r6,r25
	ctx.r6.u64 = ctx.r25.u64;
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83275028
	ctx.lr = 0x832767E4;
	sub_83275028(ctx, base);
	// mr. r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// bne 0x83276878
	if (!ctx.cr0.eq) goto loc_83276878;
	// addi r7,r1,96
	ctx.r7.s64 = ctx.r1.s64 + 96;
	// lwz r8,80(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// addi r6,r1,92
	ctx.r6.s64 = ctx.r1.s64 + 92;
	// lwz r5,84(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,88(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// bl 0x83276548
	ctx.lr = 0x83276808;
	sub_83276548(ctx, base);
	// mr. r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// bne 0x83276878
	if (!ctx.cr0.eq) goto loc_83276878;
	// lwz r30,92(r1)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// lwz r28,96(r1)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// ld r8,2480(r31)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r31.u32 + 2480);
	// extsw r9,r30
	ctx.r9.s64 = ctx.r30.s32;
	// ld r10,2488(r31)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r31.u32 + 2488);
	// extsw r11,r28
	ctx.r11.s64 = ctx.r28.s32;
	// add r9,r9,r8
	ctx.r9.u64 = ctx.r9.u64 + ctx.r8.u64;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// std r9,2480(r31)
	PPC_STORE_U64(ctx.r31.u32 + 2480, ctx.r9.u64);
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// std r11,2488(r31)
	PPC_STORE_U64(ctx.r31.u32 + 2488, ctx.r11.u64);
	// beq cr6,0x83276878
	if (ctx.cr6.eq) goto loc_83276878;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x832750d8
	ctx.lr = 0x8327684C;
	sub_832750D8(ctx, base);
	// mr. r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// bne 0x83276878
	if (!ctx.cr0.eq) goto loc_83276878;
	// add r11,r30,r28
	ctx.r11.u64 = ctx.r30.u64 + ctx.r28.u64;
	// cmpwi cr6,r26,-1
	ctx.cr6.compare<int32_t>(ctx.r26.s32, -1, ctx.xer);
	// add r27,r11,r27
	ctx.r27.u64 = ctx.r11.u64 + ctx.r27.u64;
	// beq cr6,0x8327686c
	if (ctx.cr6.eq) goto loc_8327686C;
	// cmpw cr6,r27,r26
	ctx.cr6.compare<int32_t>(ctx.r27.s32, ctx.r26.s32, ctx.xer);
	// bge cr6,0x83276878
	if (!ctx.cr6.lt) goto loc_83276878;
loc_8327686C:
	// lwz r11,132(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 132);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x832767cc
	if (ctx.cr6.eq) goto loc_832767CC;
loc_83276878:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83275910
	ctx.lr = 0x83276880;
	sub_83275910(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x833a01ec
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8327688C"))) PPC_WEAK_FUNC(sub_8327688C);
PPC_FUNC_IMPL(__imp__sub_8327688C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83276890"))) PPC_WEAK_FUNC(sub_83276890);
PPC_FUNC_IMPL(__imp__sub_83276890) {
	PPC_FUNC_PROLOGUE();
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
	// bl 0x83275460
	ctx.lr = 0x832768AC;
	sub_83275460(ctx, base);
	// cmpwi cr6,r3,1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 1, ctx.xer);
	// bne cr6,0x832768bc
	if (!ctx.cr6.eq) goto loc_832768BC;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x832768e8
	goto loc_832768E8;
loc_832768BC:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83275010
	ctx.lr = 0x832768C4;
	sub_83275010(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x832767a0
	ctx.lr = 0x832768CC;
	sub_832767A0(ctx, base);
	// lwz r11,104(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 104);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// bne cr6,0x832768e4
	if (!ctx.cr6.eq) goto loc_832768E4;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83276310
	ctx.lr = 0x832768E4;
	sub_83276310(ctx, base);
loc_832768E4:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
loc_832768E8:
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

__attribute__((alias("__imp__sub_83276900"))) PPC_WEAK_FUNC(sub_83276900);
PPC_FUNC_IMPL(__imp__sub_83276900) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x833a01ac
	ctx.lr = 0x83276908;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r29,-31822
	ctx.r29.s64 = -2085486592;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lis r11,-31845
	ctx.r11.s64 = -2086993920;
	// addi r31,r11,2984
	ctx.r31.s64 = ctx.r11.s64 + 2984;
	// lwz r3,2364(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 2364);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x83276940
	if (ctx.cr6.eq) goto loc_83276940;
	// stw r30,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r30.u32);
	// addi r4,r31,4
	ctx.r4.s64 = ctx.r31.s64 + 4;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,36(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x83276940;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_83276940:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x83276890
	ctx.lr = 0x83276948;
	sub_83276890(ctx, base);
	// lwz r11,2364(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 2364);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x83276988
	if (ctx.cr6.eq) goto loc_83276988;
	// addi r10,r30,2472
	ctx.r10.s64 = ctx.r30.s64 + 2472;
	// addi r9,r30,2480
	ctx.r9.s64 = ctx.r30.s64 + 2480;
	// addi r8,r30,2488
	ctx.r8.s64 = ctx.r30.s64 + 2488;
	// stw r10,116(r31)
	PPC_STORE_U32(ctx.r31.u32 + 116, ctx.r10.u32);
	// stw r9,128(r31)
	PPC_STORE_U32(ctx.r31.u32 + 128, ctx.r9.u32);
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// stw r8,140(r31)
	PPC_STORE_U32(ctx.r31.u32 + 140, ctx.r8.u32);
	// addi r4,r31,108
	ctx.r4.s64 = ctx.r31.s64 + 108;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r11,36(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x83276988;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_83276988:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x833a01fc
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83276994"))) PPC_WEAK_FUNC(sub_83276994);
PPC_FUNC_IMPL(__imp__sub_83276994) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83276998"))) PPC_WEAK_FUNC(sub_83276998);
PPC_FUNC_IMPL(__imp__sub_83276998) {
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
	// bl 0x832f4510
	ctx.lr = 0x832769A8;
	sub_832F4510(ctx, base);
	// addi r11,r3,-4
	ctx.r11.s64 = ctx.r3.s64 + -4;
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

__attribute__((alias("__imp__sub_832769C4"))) PPC_WEAK_FUNC(sub_832769C4);
PPC_FUNC_IMPL(__imp__sub_832769C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832769C8"))) PPC_WEAK_FUNC(sub_832769C8);
PPC_FUNC_IMPL(__imp__sub_832769C8) {
	PPC_FUNC_PROLOGUE();
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// b 0x832f4d20
	sub_832F4D20(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832769D4"))) PPC_WEAK_FUNC(sub_832769D4);
PPC_FUNC_IMPL(__imp__sub_832769D4) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_832769D8"))) PPC_WEAK_FUNC(sub_832769D8);
PPC_FUNC_IMPL(__imp__sub_832769D8) {
	PPC_FUNC_PROLOGUE();
	// b 0x832f42f0
	sub_832F42F0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832769DC"))) PPC_WEAK_FUNC(sub_832769DC);
PPC_FUNC_IMPL(__imp__sub_832769DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832769E0"))) PPC_WEAK_FUNC(sub_832769E0);
PPC_FUNC_IMPL(__imp__sub_832769E0) {
	PPC_FUNC_PROLOGUE();
	// li r4,0
	ctx.r4.s64 = 0;
	// b 0x832f4d90
	sub_832F4D90(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832769E8"))) PPC_WEAK_FUNC(sub_832769E8);
PPC_FUNC_IMPL(__imp__sub_832769E8) {
	PPC_FUNC_PROLOGUE();
	// b 0x832f50f8
	sub_832F50F8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832769EC"))) PPC_WEAK_FUNC(sub_832769EC);
PPC_FUNC_IMPL(__imp__sub_832769EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832769F0"))) PPC_WEAK_FUNC(sub_832769F0);
PPC_FUNC_IMPL(__imp__sub_832769F0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x833a01a4
	ctx.lr = 0x832769F8;
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
	// mr r27,r7
	ctx.r27.u64 = ctx.r7.u64;
	// bl 0x832f5028
	ctx.lr = 0x83276A14;
	sub_832F5028(ctx, base);
	// extsw r11,r27
	ctx.r11.s64 = ctx.r27.s32;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// rldicr r7,r11,11,52
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r11.u64, 11) & 0xFFFFFFFFFFFFF800;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x832f4de0
	ctx.lr = 0x83276A30;
	sub_832F4DE0(ctx, base);
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x832f4628
	ctx.lr = 0x83276A3C;
	sub_832F4628(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x833a01f4
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83276A44"))) PPC_WEAK_FUNC(sub_83276A44);
PPC_FUNC_IMPL(__imp__sub_83276A44) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83276A48"))) PPC_WEAK_FUNC(sub_83276A48);
PPC_FUNC_IMPL(__imp__sub_83276A48) {
	PPC_FUNC_PROLOGUE();
	// b 0x832f4e48
	sub_832F4E48(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83276A4C"))) PPC_WEAK_FUNC(sub_83276A4C);
PPC_FUNC_IMPL(__imp__sub_83276A4C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83276A50"))) PPC_WEAK_FUNC(sub_83276A50);
PPC_FUNC_IMPL(__imp__sub_83276A50) {
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
	// bl 0x832f4ec8
	ctx.lr = 0x83276A68;
	sub_832F4EC8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x832f5028
	ctx.lr = 0x83276A70;
	sub_832F5028(ctx, base);
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

__attribute__((alias("__imp__sub_83276A84"))) PPC_WEAK_FUNC(sub_83276A84);
PPC_FUNC_IMPL(__imp__sub_83276A84) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83276A88"))) PPC_WEAK_FUNC(sub_83276A88);
PPC_FUNC_IMPL(__imp__sub_83276A88) {
	PPC_FUNC_PROLOGUE();
	// b 0x832f4510
	sub_832F4510(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83276A8C"))) PPC_WEAK_FUNC(sub_83276A8C);
PPC_FUNC_IMPL(__imp__sub_83276A8C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83276A90"))) PPC_WEAK_FUNC(sub_83276A90);
PPC_FUNC_IMPL(__imp__sub_83276A90) {
	PPC_FUNC_PROLOGUE();
	// li r10,10
	ctx.r10.s64 = 10;
	// stw r4,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r4.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// divw r9,r4,r10
	ctx.r9.s32 = ctx.r4.s32 / ctx.r10.s32;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// mulli r9,r9,10
	ctx.r9.s64 = ctx.r9.s64 * 10;
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// subf. r11,r9,r4
	ctx.r11.s64 = ctx.r4.s64 - ctx.r9.s64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x83276ac4
	if (!ctx.cr0.eq) goto loc_83276AC4;
	// divw r10,r4,r10
	ctx.r10.s32 = ctx.r4.s32 / ctx.r10.s32;
	// li r11,100
	ctx.r11.s64 = 100;
	// stw r10,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r10.u32);
	// b 0x83276acc
	goto loc_83276ACC;
loc_83276AC4:
	// li r11,1000
	ctx.r11.s64 = 1000;
	// stw r4,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r4.u32);
loc_83276ACC:
	// stw r11,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83276AD4"))) PPC_WEAK_FUNC(sub_83276AD4);
PPC_FUNC_IMPL(__imp__sub_83276AD4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83276AD8"))) PPC_WEAK_FUNC(sub_83276AD8);
PPC_FUNC_IMPL(__imp__sub_83276AD8) {
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
	// stw r11,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r11.u32);
	// stw r11,24(r3)
	PPC_STORE_U32(ctx.r3.u32 + 24, ctx.r11.u32);
	// sth r11,28(r3)
	PPC_STORE_U16(ctx.r3.u32 + 28, ctx.r11.u16);
	// sth r11,30(r3)
	PPC_STORE_U16(ctx.r3.u32 + 30, ctx.r11.u16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83276B04"))) PPC_WEAK_FUNC(sub_83276B04);
PPC_FUNC_IMPL(__imp__sub_83276B04) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83276B08"))) PPC_WEAK_FUNC(sub_83276B08);
PPC_FUNC_IMPL(__imp__sub_83276B08) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lwz r11,656(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 656);
	// cmpwi cr6,r11,-5
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -5, ctx.xer);
	// bne cr6,0x83276b1c
	if (!ctx.cr6.eq) goto loc_83276B1C;
	// stw r4,656(r3)
	PPC_STORE_U32(ctx.r3.u32 + 656, ctx.r4.u32);
	// blr 
	return;
loc_83276B1C:
	// subf. r11,r11,r4
	ctx.r11.s64 = ctx.r4.s64 - ctx.r11.s64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beqlr 
	if (ctx.cr0.eq) return;
	// lwz r10,664(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 664);
	// stw r4,656(r3)
	PPC_STORE_U32(ctx.r3.u32 + 656, ctx.r4.u32);
	// cmpw cr6,r10,r11
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r11.s32, ctx.xer);
	// bgt cr6,0x83276b38
	if (ctx.cr6.gt) goto loc_83276B38;
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
loc_83276B38:
	// stw r10,664(r3)
	PPC_STORE_U32(ctx.r3.u32 + 664, ctx.r10.u32);
	// lwz r10,668(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 668);
	// cmpw cr6,r10,r11
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x83276b4c
	if (ctx.cr6.lt) goto loc_83276B4C;
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
loc_83276B4C:
	// lis r9,32767
	ctx.r9.s64 = 2147418112;
	// stw r10,668(r3)
	PPC_STORE_U32(ctx.r3.u32 + 668, ctx.r10.u32);
	// lwz r10,660(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 660);
	// ori r9,r9,65535
	ctx.r9.u64 = ctx.r9.u64 | 65535;
	// cmpw cr6,r10,r9
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r9.s32, ctx.xer);
	// beq cr6,0x83276b80
	if (ctx.cr6.eq) goto loc_83276B80;
	// cmpw cr6,r10,r11
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r11.s32, ctx.xer);
	// ble cr6,0x83276b80
	if (!ctx.cr6.gt) goto loc_83276B80;
	// subf r9,r11,r10
	ctx.r9.s64 = ctx.r10.s64 - ctx.r11.s64;
	// srawi r9,r9,3
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x7) != 0);
	ctx.r9.s64 = ctx.r9.s32 >> 3;
	// addze. r9,r9
	temp.s64 = ctx.r9.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r9.u32;
	ctx.r9.s64 = temp.s64;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq 0x83276b80
	if (ctx.cr0.eq) goto loc_83276B80;
	// subf r11,r9,r10
	ctx.r11.s64 = ctx.r10.s64 - ctx.r9.s64;
loc_83276B80:
	// stw r11,660(r3)
	PPC_STORE_U32(ctx.r3.u32 + 660, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83276B88"))) PPC_WEAK_FUNC(sub_83276B88);
PPC_FUNC_IMPL(__imp__sub_83276B88) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,656(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 656);
	// lwz r10,660(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 660);
	// lwz r9,664(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 664);
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// add r11,r9,r11
	ctx.r11.u64 = ctx.r9.u64 + ctx.r11.u64;
	// cmpw cr6,r4,r10
	ctx.cr6.compare<int32_t>(ctx.r4.s32, ctx.r10.s32, ctx.xer);
	// bge cr6,0x83276bac
	if (!ctx.cr6.lt) goto loc_83276BAC;
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// b 0x83276bbc
	goto loc_83276BBC;
loc_83276BAC:
	// cmpw cr6,r4,r11
	ctx.cr6.compare<int32_t>(ctx.r4.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x83276bbc
	if (ctx.cr6.lt) goto loc_83276BBC;
	// lis r11,32767
	ctx.r11.s64 = 2147418112;
	// ori r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 65535;
loc_83276BBC:
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83276BC4"))) PPC_WEAK_FUNC(sub_83276BC4);
PPC_FUNC_IMPL(__imp__sub_83276BC4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83276BC8"))) PPC_WEAK_FUNC(sub_83276BC8);
PPC_FUNC_IMPL(__imp__sub_83276BC8) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,104(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 104);
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// beq cr6,0x83276bdc
	if (ctx.cr6.eq) goto loc_83276BDC;
loc_83276BD4:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_83276BDC:
	// lwz r11,112(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 112);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x83276bd4
	if (!ctx.cr6.eq) goto loc_83276BD4;
	// lwz r11,2448(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 2448);
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r3,r11,27,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83276BF8"))) PPC_WEAK_FUNC(sub_83276BF8);
PPC_FUNC_IMPL(__imp__sub_83276BF8) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,716(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 716);
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// bne cr6,0x83276c0c
	if (!ctx.cr6.eq) goto loc_83276C0C;
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_83276C0C:
	// lwz r11,108(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 108);
	// addi r11,r11,-4
	ctx.r11.s64 = ctx.r11.s64 + -4;
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r3,r11,27,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83276C20"))) PPC_WEAK_FUNC(sub_83276C20);
PPC_FUNC_IMPL(__imp__sub_83276C20) {
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
	// li r4,71
	ctx.r4.s64 = 71;
	// bl 0x83274d00
	ctx.lr = 0x83276C3C;
	sub_83274D00(ctx, base);
	// cmpwi cr6,r3,1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 1, ctx.xer);
	// bne cr6,0x83276c4c
	if (!ctx.cr6.eq) goto loc_83276C4C;
	// lwz r11,676(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 676);
	// b 0x83276c50
	goto loc_83276C50;
loc_83276C4C:
	// lwz r11,740(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 740);
loc_83276C50:
	// stw r11,720(r31)
	PPC_STORE_U32(ctx.r31.u32 + 720, ctx.r11.u32);
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

__attribute__((alias("__imp__sub_83276C68"))) PPC_WEAK_FUNC(sub_83276C68);
PPC_FUNC_IMPL(__imp__sub_83276C68) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x833a01ac
	ctx.lr = 0x83276C70;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// li r4,71
	ctx.r4.s64 = 71;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// mr r29,r6
	ctx.r29.u64 = ctx.r6.u64;
	// bl 0x83274d00
	ctx.lr = 0x83276C88;
	sub_83274D00(ctx, base);
	// cmpwi cr6,r3,1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 1, ctx.xer);
	// bne cr6,0x83276cb0
	if (!ctx.cr6.eq) goto loc_83276CB0;
	// lis r11,-31822
	ctx.r11.s64 = -2085486592;
	// lwz r10,676(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 676);
	// lwz r9,720(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 720);
	// addi r11,r11,1568
	ctx.r11.s64 = ctx.r11.s64 + 1568;
	// subf r10,r9,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r9.s64;
	// stw r10,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r10.u32);
	// lwz r11,424(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 424);
	// b 0x83276cc4
	goto loc_83276CC4;
loc_83276CB0:
	// lwz r11,740(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 740);
	// lwz r10,720(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 720);
	// subf r11,r10,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r10.s64;
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
	// lwz r11,744(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 744);
loc_83276CC4:
	// stw r11,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r11.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x833a01fc
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83276CD0"))) PPC_WEAK_FUNC(sub_83276CD0);
PPC_FUNC_IMPL(__imp__sub_83276CD0) {
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
	// li r4,6
	ctx.r4.s64 = 6;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// bl 0x83274d00
	ctx.lr = 0x83276CF0;
	sub_83274D00(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x83276d00
	if (!ctx.cr0.eq) goto loc_83276D00;
loc_83276CF8:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x83276d48
	goto loc_83276D48;
loc_83276D00:
	// li r4,51
	ctx.r4.s64 = 51;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x83274d00
	ctx.lr = 0x83276D0C;
	sub_83274D00(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x83276cf8
	if (ctx.cr0.eq) goto loc_83276CF8;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// addi r4,r30,3496
	ctx.r4.s64 = ctx.r30.s64 + 3496;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x83276c68
	ctx.lr = 0x83276D28;
	sub_83276C68(ctx, base);
	// lwz r10,84(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// divw r11,r10,r11
	ctx.r11.s32 = ctx.r10.s32 / ctx.r11.s32;
	// subfc r10,r11,r31
	ctx.xer.ca = ctx.r31.u32 >= ctx.r11.u32;
	ctx.r10.s64 = ctx.r31.s64 - ctx.r11.s64;
	// eqv r11,r11,r31
	ctx.r11.u64 = ~(ctx.r11.u64 ^ ctx.r31.u64);
	// rlwinm r11,r11,1,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0x1;
	// addze r11,r11
	temp.s64 = ctx.r11.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r11.u32;
	ctx.r11.s64 = temp.s64;
	// clrlwi r3,r11,31
	ctx.r3.u64 = ctx.r11.u32 & 0x1;
loc_83276D48:
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

__attribute__((alias("__imp__sub_83276D60"))) PPC_WEAK_FUNC(sub_83276D60);
PPC_FUNC_IMPL(__imp__sub_83276D60) {
	PPC_FUNC_PROLOGUE();
	// lwz r10,4144(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4144);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r10,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r10.u32);
	// lwz r11,4148(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4148);
	// stw r11,0(r5)
	PPC_STORE_U32(ctx.r5.u32 + 0, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83276D7C"))) PPC_WEAK_FUNC(sub_83276D7C);
PPC_FUNC_IMPL(__imp__sub_83276D7C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83276D80"))) PPC_WEAK_FUNC(sub_83276D80);
PPC_FUNC_IMPL(__imp__sub_83276D80) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,104(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 104);
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// beq cr6,0x83276dbc
	if (ctx.cr6.eq) goto loc_83276DBC;
	// cmpwi cr6,r11,-4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -4, ctx.xer);
	// beq cr6,0x83276dbc
	if (ctx.cr6.eq) goto loc_83276DBC;
	// cmpwi cr6,r11,6
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 6, ctx.xer);
	// beq cr6,0x83276dbc
	if (ctx.cr6.eq) goto loc_83276DBC;
	// cmpwi cr6,r11,-6
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -6, ctx.xer);
	// beq cr6,0x83276dbc
	if (ctx.cr6.eq) goto loc_83276DBC;
	// li r11,-1
	ctx.r11.s64 = -1;
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r10,0(r5)
	PPC_STORE_U32(ctx.r5.u32 + 0, ctx.r10.u32);
	// blr 
	return;
loc_83276DBC:
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83276DC4"))) PPC_WEAK_FUNC(sub_83276DC4);
PPC_FUNC_IMPL(__imp__sub_83276DC4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83276DC8"))) PPC_WEAK_FUNC(sub_83276DC8);
PPC_FUNC_IMPL(__imp__sub_83276DC8) {
	PPC_FUNC_PROLOGUE();
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
	// bl 0x83282090
	ctx.lr = 0x83276DE8;
	sub_83282090(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// li r3,0
	ctx.r3.s64 = 0;
	// beq 0x83276e04
	if (ctx.cr0.eq) goto loc_83276E04;
	// lis r4,-256
	ctx.r4.s64 = -16777216;
	// ori r4,r4,292
	ctx.r4.u64 = ctx.r4.u64 | 292;
	// bl 0x83282390
	ctx.lr = 0x83276E00;
	sub_83282390(ctx, base);
	// b 0x83276e08
	goto loc_83276E08;
loc_83276E04:
	// stw r30,3520(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3520, ctx.r30.u32);
loc_83276E08:
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

__attribute__((alias("__imp__sub_83276E20"))) PPC_WEAK_FUNC(sub_83276E20);
PPC_FUNC_IMPL(__imp__sub_83276E20) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x833a01ac
	ctx.lr = 0x83276E28;
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
	// bl 0x83282090
	ctx.lr = 0x83276E3C;
	sub_83282090(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// li r3,0
	ctx.r3.s64 = 0;
	// beq 0x83276e58
	if (ctx.cr0.eq) goto loc_83276E58;
	// lis r4,-256
	ctx.r4.s64 = -16777216;
	// ori r4,r4,291
	ctx.r4.u64 = ctx.r4.u64 | 291;
	// bl 0x83282390
	ctx.lr = 0x83276E54;
	sub_83282390(ctx, base);
	// b 0x83276e60
	goto loc_83276E60;
loc_83276E58:
	// stw r30,4220(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4220, ctx.r30.u32);
	// stw r29,4224(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4224, ctx.r29.u32);
loc_83276E60:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x833a01fc
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83276E68"))) PPC_WEAK_FUNC(sub_83276E68);
PPC_FUNC_IMPL(__imp__sub_83276E68) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x833a01a8
	ctx.lr = 0x83276E70;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// mr r29,r6
	ctx.r29.u64 = ctx.r6.u64;
	// bl 0x83282090
	ctx.lr = 0x83276E88;
	sub_83282090(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x83276ea4
	if (ctx.cr0.eq) goto loc_83276EA4;
	// lis r4,-256
	ctx.r4.s64 = -16777216;
	// li r3,0
	ctx.r3.s64 = 0;
	// ori r4,r4,297
	ctx.r4.u64 = ctx.r4.u64 | 297;
	// bl 0x83282390
	ctx.lr = 0x83276EA0;
	sub_83282390(ctx, base);
	// b 0x83276ec8
	goto loc_83276EC8;
loc_83276EA4:
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// stw r30,4244(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4244, ctx.r30.u32);
	// stw r29,4248(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4248, ctx.r29.u32);
	// beq cr6,0x83276ebc
	if (ctx.cr6.eq) goto loc_83276EBC;
	// stw r28,4228(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4228, ctx.r28.u32);
	// b 0x83276ec4
	goto loc_83276EC4;
loc_83276EBC:
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,4228(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4228, ctx.r11.u32);
loc_83276EC4:
	// li r3,0
	ctx.r3.s64 = 0;
loc_83276EC8:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x833a01f8
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83276ED0"))) PPC_WEAK_FUNC(sub_83276ED0);
PPC_FUNC_IMPL(__imp__sub_83276ED0) {
	PPC_FUNC_PROLOGUE();
	// addi r11,r5,874
	ctx.r11.s64 = ctx.r5.s64 + 874;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r4,r11,r3
	PPC_STORE_U32(ctx.r11.u32 + ctx.r3.u32, ctx.r4.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83276EE0"))) PPC_WEAK_FUNC(sub_83276EE0);
PPC_FUNC_IMPL(__imp__sub_83276EE0) {
	PPC_FUNC_PROLOGUE();
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
	// lis r8,-32219
	ctx.r8.s64 = -2111504384;
	// lwz r10,4(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// rlwinm r9,r11,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r8,r8,16848
	ctx.r8.s64 = ctx.r8.s64 + 16848;
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r10,r10,r8
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r8.u32);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x83276f48
	if (!ctx.cr6.eq) goto loc_83276F48;
	// lis r4,-256
	ctx.r4.s64 = -16777216;
	// li r3,0
	ctx.r3.s64 = 0;
	// ori r4,r4,545
	ctx.r4.u64 = ctx.r4.u64 | 545;
	// bl 0x83282390
	ctx.lr = 0x83276F34;
	sub_83282390(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// stw r10,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r10.u32);
	// b 0x83276f7c
	goto loc_83276F7C;
loc_83276F48:
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// li r7,4
	ctx.r7.s64 = 4;
	// beq cr6,0x83276f58
	if (ctx.cr6.eq) goto loc_83276F58;
	// li r7,10
	ctx.r7.s64 = 10;
loc_83276F58:
	// lis r9,-32219
	ctx.r9.s64 = -2111504384;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r10,r9,16808
	ctx.r10.s64 = ctx.r9.s64 + 16808;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// lwzx r3,r11,r10
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// bctrl 
	ctx.lr = 0x83276F7C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_83276F7C:
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

__attribute__((alias("__imp__sub_83276F94"))) PPC_WEAK_FUNC(sub_83276F94);
PPC_FUNC_IMPL(__imp__sub_83276F94) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83276F98"))) PPC_WEAK_FUNC(sub_83276F98);
PPC_FUNC_IMPL(__imp__sub_83276F98) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// std r30,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r30.u64);
	// std r31,-8(r1)
	PPC_STORE_U64(ctx.r1.u32 + -8, ctx.r31.u64);
	// lwz r10,8(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	// mr r31,r7
	ctx.r31.u64 = ctx.r7.u64;
	// lwz r11,12(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 12);
	// li r30,1000
	ctx.r30.s64 = 1000;
	// mulli r10,r10,60
	ctx.r10.s64 = ctx.r10.s64 * 60;
	// lwz r9,16(r4)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r4.u32 + 16);
	// lwz r8,20(r4)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r4.u32 + 20);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// divw r3,r3,r7
	ctx.r3.s32 = ctx.r3.s32 / ctx.r7.s32;
	// lwz r7,24(r4)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r4.u32 + 24);
	// mulli r11,r11,60
	ctx.r11.s64 = ctx.r11.s64 * 60;
	// lha r4,30(r4)
	ctx.r4.s64 = int16_t(PPC_LOAD_U16(ctx.r4.u32 + 30));
	// divw r10,r30,r31
	ctx.r10.s32 = ctx.r30.s32 / ctx.r31.s32;
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// add r9,r7,r8
	ctx.r9.u64 = ctx.r7.u64 + ctx.r8.u64;
	// srawi r8,r10,1
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x1) != 0);
	ctx.r8.s64 = ctx.r10.s32 >> 1;
	// mullw r10,r9,r10
	ctx.r10.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r10.s32);
	// mullw r11,r11,r3
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r3.s32);
	// addze r8,r8
	temp.s64 = ctx.r8.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r8.u32;
	ctx.r8.s64 = temp.s64;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// mullw r10,r4,r8
	ctx.r10.s64 = int64_t(ctx.r4.s32) * int64_t(ctx.r8.s32);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// mr r9,r4
	ctx.r9.u64 = ctx.r4.u64;
	// stw r11,0(r5)
	PPC_STORE_U32(ctx.r5.u32 + 0, ctx.r11.u32);
	// stw r3,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r3.u32);
	// ld r30,-16(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// ld r31,-8(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83277010"))) PPC_WEAK_FUNC(sub_83277010);
PPC_FUNC_IMPL(__imp__sub_83277010) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x833a01ac
	ctx.lr = 0x83277018;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r3,24000
	ctx.r3.s64 = 24000;
	// mr r30,r6
	ctx.r30.u64 = ctx.r6.u64;
	// mr r29,r7
	ctx.r29.u64 = ctx.r7.u64;
	// bl 0x83276f98
	ctx.lr = 0x83277030;
	sub_83276F98(ctx, base);
	// divw r11,r31,r29
	ctx.r11.s32 = ctx.r31.s32 / ctx.r29.s32;
	// stw r11,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r11.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x833a01fc
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83277040"))) PPC_WEAK_FUNC(sub_83277040);
PPC_FUNC_IMPL(__imp__sub_83277040) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x833a01ac
	ctx.lr = 0x83277048;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r3,30000
	ctx.r3.s64 = 30000;
	// mr r30,r6
	ctx.r30.u64 = ctx.r6.u64;
	// mr r29,r7
	ctx.r29.u64 = ctx.r7.u64;
	// bl 0x83276f98
	ctx.lr = 0x83277060;
	sub_83276F98(ctx, base);
	// divw r11,r31,r29
	ctx.r11.s32 = ctx.r31.s32 / ctx.r29.s32;
	// stw r11,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r11.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x833a01fc
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83277070"))) PPC_WEAK_FUNC(sub_83277070);
PPC_FUNC_IMPL(__imp__sub_83277070) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x833a01ac
	ctx.lr = 0x83277078;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lis r3,0
	ctx.r3.s64 = 0;
	// mr r30,r6
	ctx.r30.u64 = ctx.r6.u64;
	// ori r3,r3,60000
	ctx.r3.u64 = ctx.r3.u64 | 60000;
	// mr r29,r7
	ctx.r29.u64 = ctx.r7.u64;
	// bl 0x83276f98
	ctx.lr = 0x83277094;
	sub_83276F98(ctx, base);
	// divw r11,r31,r29
	ctx.r11.s32 = ctx.r31.s32 / ctx.r29.s32;
	// stw r11,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r11.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x833a01fc
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832770A4"))) PPC_WEAK_FUNC(sub_832770A4);
PPC_FUNC_IMPL(__imp__sub_832770A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832770A8"))) PPC_WEAK_FUNC(sub_832770A8);
PPC_FUNC_IMPL(__imp__sub_832770A8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x833a01ac
	ctx.lr = 0x832770B0;
	__savegprlr_29(ctx, base);
	// lis r11,0
	ctx.r11.s64 = 0;
	// lwz r10,16(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 16);
	// lwz r9,8(r4)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	// li r31,10
	ctx.r31.s64 = 10;
	// ori r30,r11,43146
	ctx.r30.u64 = ctx.r11.u64 | 43146;
	// lwz r29,12(r4)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r4.u32 + 12);
	// mulli r11,r10,12
	ctx.r11.s64 = ctx.r10.s64 * 12;
	// lwz r8,24(r4)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r4.u32 + 24);
	// lwz r10,20(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 20);
	// lha r4,30(r4)
	ctx.r4.s64 = int16_t(PPC_LOAD_U16(ctx.r4.u32 + 30));
	// mullw r9,r9,r30
	ctx.r9.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r30.s32);
	// add r9,r9,r11
	ctx.r9.u64 = ctx.r9.u64 + ctx.r11.u64;
	// mulli r11,r29,719
	ctx.r11.s64 = ctx.r29.s64 * 719;
	// add r9,r9,r11
	ctx.r9.u64 = ctx.r9.u64 + ctx.r11.u64;
	// divw r11,r29,r31
	ctx.r11.s32 = ctx.r29.s32 / ctx.r31.s32;
	// li r31,1000
	ctx.r31.s64 = 1000;
	// add r11,r9,r11
	ctx.r11.u64 = ctx.r9.u64 + ctx.r11.u64;
	// divw r9,r31,r7
	ctx.r9.s32 = ctx.r31.s32 / ctx.r7.s32;
	// rlwinm r11,r11,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// srawi r31,r9,1
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x1) != 0);
	ctx.r31.s64 = ctx.r9.s32 >> 1;
	// add r11,r11,r8
	ctx.r11.u64 = ctx.r11.u64 + ctx.r8.u64;
	// mr r8,r4
	ctx.r8.u64 = ctx.r4.u64;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// addze r10,r31
	temp.s64 = ctx.r31.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r31.u32;
	ctx.r10.s64 = temp.s64;
	// mullw r11,r11,r9
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r9.s32);
	// mullw r10,r4,r10
	ctx.r10.s64 = int64_t(ctx.r4.s32) * int64_t(ctx.r10.s32);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// divw r10,r3,r7
	ctx.r10.s32 = ctx.r3.s32 / ctx.r7.s32;
	// stw r11,0(r5)
	PPC_STORE_U32(ctx.r5.u32 + 0, ctx.r11.u32);
	// stw r10,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r10.u32);
	// b 0x833a01fc
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8327712C"))) PPC_WEAK_FUNC(sub_8327712C);
PPC_FUNC_IMPL(__imp__sub_8327712C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83277130"))) PPC_WEAK_FUNC(sub_83277130);
PPC_FUNC_IMPL(__imp__sub_83277130) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x833a01ac
	ctx.lr = 0x83277138;
	__savegprlr_29(ctx, base);
	// lis r11,0
	ctx.r11.s64 = 0;
	// lwz r10,16(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 16);
	// lwz r9,8(r4)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	// li r31,10
	ctx.r31.s64 = 10;
	// ori r30,r11,53946
	ctx.r30.u64 = ctx.r11.u64 | 53946;
	// lwz r29,12(r4)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r4.u32 + 12);
	// mulli r11,r10,15
	ctx.r11.s64 = ctx.r10.s64 * 15;
	// lwz r8,24(r4)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r4.u32 + 24);
	// lwz r10,20(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 20);
	// lha r4,30(r4)
	ctx.r4.s64 = int16_t(PPC_LOAD_U16(ctx.r4.u32 + 30));
	// mullw r9,r9,r30
	ctx.r9.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r30.s32);
	// add r9,r9,r11
	ctx.r9.u64 = ctx.r9.u64 + ctx.r11.u64;
	// mulli r11,r29,899
	ctx.r11.s64 = ctx.r29.s64 * 899;
	// add r9,r9,r11
	ctx.r9.u64 = ctx.r9.u64 + ctx.r11.u64;
	// divw r11,r29,r31
	ctx.r11.s32 = ctx.r29.s32 / ctx.r31.s32;
	// li r31,1000
	ctx.r31.s64 = 1000;
	// add r11,r9,r11
	ctx.r11.u64 = ctx.r9.u64 + ctx.r11.u64;
	// divw r9,r31,r7
	ctx.r9.s32 = ctx.r31.s32 / ctx.r7.s32;
	// rlwinm r11,r11,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// srawi r31,r9,1
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x1) != 0);
	ctx.r31.s64 = ctx.r9.s32 >> 1;
	// add r11,r11,r8
	ctx.r11.u64 = ctx.r11.u64 + ctx.r8.u64;
	// mr r8,r4
	ctx.r8.u64 = ctx.r4.u64;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// addze r10,r31
	temp.s64 = ctx.r31.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r31.u32;
	ctx.r10.s64 = temp.s64;
	// mullw r11,r11,r9
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r9.s32);
	// mullw r10,r4,r10
	ctx.r10.s64 = int64_t(ctx.r4.s32) * int64_t(ctx.r10.s32);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// divw r10,r3,r7
	ctx.r10.s32 = ctx.r3.s32 / ctx.r7.s32;
	// stw r11,0(r5)
	PPC_STORE_U32(ctx.r5.u32 + 0, ctx.r11.u32);
	// stw r10,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r10.u32);
	// b 0x833a01fc
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832771B4"))) PPC_WEAK_FUNC(sub_832771B4);
PPC_FUNC_IMPL(__imp__sub_832771B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832771B8"))) PPC_WEAK_FUNC(sub_832771B8);
PPC_FUNC_IMPL(__imp__sub_832771B8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x833a01ac
	ctx.lr = 0x832771C0;
	__savegprlr_29(ctx, base);
	// lis r11,1
	ctx.r11.s64 = 65536;
	// lwz r10,16(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 16);
	// lwz r9,8(r4)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	// li r31,10
	ctx.r31.s64 = 10;
	// ori r30,r11,42410
	ctx.r30.u64 = ctx.r11.u64 | 42410;
	// lwz r29,12(r4)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r4.u32 + 12);
	// mulli r11,r10,30
	ctx.r11.s64 = ctx.r10.s64 * 30;
	// lwz r8,24(r4)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r4.u32 + 24);
	// lwz r10,20(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 20);
	// lha r4,30(r4)
	ctx.r4.s64 = int16_t(PPC_LOAD_U16(ctx.r4.u32 + 30));
	// mullw r9,r9,r30
	ctx.r9.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r30.s32);
	// add r9,r9,r11
	ctx.r9.u64 = ctx.r9.u64 + ctx.r11.u64;
	// mulli r11,r29,1799
	ctx.r11.s64 = ctx.r29.s64 * 1799;
	// add r9,r9,r11
	ctx.r9.u64 = ctx.r9.u64 + ctx.r11.u64;
	// divw r11,r29,r31
	ctx.r11.s32 = ctx.r29.s32 / ctx.r31.s32;
	// li r31,1000
	ctx.r31.s64 = 1000;
	// add r11,r9,r11
	ctx.r11.u64 = ctx.r9.u64 + ctx.r11.u64;
	// divw r9,r31,r7
	ctx.r9.s32 = ctx.r31.s32 / ctx.r7.s32;
	// rlwinm r11,r11,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// srawi r31,r9,1
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x1) != 0);
	ctx.r31.s64 = ctx.r9.s32 >> 1;
	// add r11,r11,r8
	ctx.r11.u64 = ctx.r11.u64 + ctx.r8.u64;
	// mr r8,r4
	ctx.r8.u64 = ctx.r4.u64;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// addze r10,r31
	temp.s64 = ctx.r31.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r31.u32;
	ctx.r10.s64 = temp.s64;
	// mullw r11,r11,r9
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r9.s32);
	// mullw r10,r4,r10
	ctx.r10.s64 = int64_t(ctx.r4.s32) * int64_t(ctx.r10.s32);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// divw r10,r3,r7
	ctx.r10.s32 = ctx.r3.s32 / ctx.r7.s32;
	// stw r11,0(r5)
	PPC_STORE_U32(ctx.r5.u32 + 0, ctx.r11.u32);
	// stw r10,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r10.u32);
	// b 0x833a01fc
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8327723C"))) PPC_WEAK_FUNC(sub_8327723C);
PPC_FUNC_IMPL(__imp__sub_8327723C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83277240"))) PPC_WEAK_FUNC(sub_83277240);
PPC_FUNC_IMPL(__imp__sub_83277240) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x833a01ac
	ctx.lr = 0x83277248;
	__savegprlr_29(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31822
	ctx.r11.s64 = -2085486592;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r11,r11,1568
	ctx.r11.s64 = ctx.r11.s64 + 1568;
	// addi r29,r3,3496
	ctx.r29.s64 = ctx.r3.s64 + 3496;
	// lwz r3,424(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 424);
	// bl 0x83289328
	ctx.lr = 0x83277264;
	sub_83289328(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x832821e0
	ctx.lr = 0x83277270;
	sub_832821E0(ctx, base);
	// lwz r11,4172(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4172);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + ctx.r30.u64;
	// stw r11,4172(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4172, ctx.r11.u32);
	// lwz r11,4212(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4212);
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + ctx.r30.u64;
	// stw r11,4212(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4212, ctx.r11.u32);
	// bl 0x832821f0
	ctx.lr = 0x83277290;
	sub_832821F0(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x833a01fc
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83277298"))) PPC_WEAK_FUNC(sub_83277298);
PPC_FUNC_IMPL(__imp__sub_83277298) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x833a01ac
	ctx.lr = 0x832772A0;
	__savegprlr_29(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r3,4240(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4240);
	// addi r30,r31,3496
	ctx.r30.s64 = ctx.r31.s64 + 3496;
	// bl 0x83289328
	ctx.lr = 0x832772B4;
	sub_83289328(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x832821e0
	ctx.lr = 0x832772C0;
	sub_832821E0(ctx, base);
	// lwz r11,4236(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4236);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// add r11,r11,r29
	ctx.r11.u64 = ctx.r11.u64 + ctx.r29.u64;
	// stw r11,4236(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4236, ctx.r11.u32);
	// bl 0x832821f0
	ctx.lr = 0x832772D4;
	sub_832821F0(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x833a01fc
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832772DC"))) PPC_WEAK_FUNC(sub_832772DC);
PPC_FUNC_IMPL(__imp__sub_832772DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832772E0"))) PPC_WEAK_FUNC(sub_832772E0);
PPC_FUNC_IMPL(__imp__sub_832772E0) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,2372(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 2372);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x832772fc
	if (!ctx.cr6.eq) goto loc_832772FC;
	// li r10,29970
	ctx.r10.s64 = 29970;
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
	// stw r10,0(r5)
	PPC_STORE_U32(ctx.r5.u32 + 0, ctx.r10.u32);
	// blr 
	return;
loc_832772FC:
	// lis r10,-32219
	ctx.r10.s64 = -2111504384;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r10,r10,16808
	ctx.r10.s64 = ctx.r10.s64 + 16808;
	// li r9,1000
	ctx.r9.s64 = 1000;
	// stw r9,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r9.u32);
	// lwzx r11,r11,r10
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// stw r11,0(r5)
	PPC_STORE_U32(ctx.r5.u32 + 0, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8327731C"))) PPC_WEAK_FUNC(sub_8327731C);
PPC_FUNC_IMPL(__imp__sub_8327731C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83277320"))) PPC_WEAK_FUNC(sub_83277320);
PPC_FUNC_IMPL(__imp__sub_83277320) {
	PPC_FUNC_PROLOGUE();
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
	// li r11,-1
	ctx.r11.s64 = -1;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// bl 0x83282090
	ctx.lr = 0x83277348;
	sub_83282090(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x83277364
	if (ctx.cr0.eq) goto loc_83277364;
	// lis r4,-256
	ctx.r4.s64 = -16777216;
	// li r3,0
	ctx.r3.s64 = 0;
	// ori r4,r4,283
	ctx.r4.u64 = ctx.r4.u64 | 283;
	// bl 0x83282390
	ctx.lr = 0x83277360;
	sub_83282390(ctx, base);
	// b 0x832773a4
	goto loc_832773A4;
loc_83277364:
	// lwz r11,2372(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2372);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x832773a0
	if (ctx.cr6.eq) goto loc_832773A0;
	// lis r10,-32219
	ctx.r10.s64 = -2111504384;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r10,r10,16808
	ctx.r10.s64 = ctx.r10.s64 + 16808;
	// lwzx r11,r11,r10
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
	// lwz r11,156(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 156);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x832773a0
	if (ctx.cr6.eq) goto loc_832773A0;
	// lwz r11,264(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 264);
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// beq cr6,0x832773a0
	if (ctx.cr6.eq) goto loc_832773A0;
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
loc_832773A0:
	// li r3,0
	ctx.r3.s64 = 0;
loc_832773A4:
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

__attribute__((alias("__imp__sub_832773BC"))) PPC_WEAK_FUNC(sub_832773BC);
PPC_FUNC_IMPL(__imp__sub_832773BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832773C0"))) PPC_WEAK_FUNC(sub_832773C0);
PPC_FUNC_IMPL(__imp__sub_832773C0) {
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
	// lwz r9,4212(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4212);
	// mr r10,r4
	ctx.r10.u64 = ctx.r4.u64;
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// mr r31,r6
	ctx.r31.u64 = ctx.r6.u64;
	// addi r11,r3,3496
	ctx.r11.s64 = ctx.r3.s64 + 3496;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bge cr6,0x83277400
	if (!ctx.cr6.lt) goto loc_83277400;
	// li r10,0
	ctx.r10.s64 = 0;
	// li r9,1
	ctx.r9.s64 = 1;
	// stw r10,716(r11)
	PPC_STORE_U32(ctx.r11.u32 + 716, ctx.r10.u32);
	// stw r9,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r9.u32);
	// b 0x83277424
	goto loc_83277424;
loc_83277400:
	// lis r9,-31822
	ctx.r9.s64 = -2085486592;
	// lwz r5,716(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 716);
	// mr r3,r10
	ctx.r3.u64 = ctx.r10.u64;
	// addi r11,r9,1568
	ctx.r11.s64 = ctx.r9.s64 + 1568;
	// lwz r6,424(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 424);
	// bl 0x83289368
	ctx.lr = 0x83277418;
	sub_83289368(ctx, base);
	// addic r11,r3,-1
	ctx.xer.ca = ctx.r3.u32 > 0;
	ctx.r11.s64 = ctx.r3.s64 + -1;
	// subfe r11,r11,r3
	temp.u8 = (~ctx.r11.u32 + ctx.r3.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r3.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r11.u64 + ctx.r3.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
loc_83277424:
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

__attribute__((alias("__imp__sub_83277438"))) PPC_WEAK_FUNC(sub_83277438);
PPC_FUNC_IMPL(__imp__sub_83277438) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x833a0198
	ctx.lr = 0x83277440;
	__savegprlr_24(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,2788(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 2788);
	// li r10,10000
	ctx.r10.s64 = 10000;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mullw r11,r11,r7
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r7.s32);
	// mr r26,r6
	ctx.r26.u64 = ctx.r6.u64;
	// divw r28,r11,r10
	ctx.r28.s32 = ctx.r11.s32 / ctx.r10.s32;
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// mr r27,r5
	ctx.r27.u64 = ctx.r5.u64;
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// mr r6,r7
	ctx.r6.u64 = ctx.r7.u64;
	// add r5,r28,r26
	ctx.r5.u64 = ctx.r28.u64 + ctx.r26.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r30,r7
	ctx.r30.u64 = ctx.r7.u64;
	// mr r24,r8
	ctx.r24.u64 = ctx.r8.u64;
	// addi r29,r25,3496
	ctx.r29.s64 = ctx.r25.s64 + 3496;
	// bl 0x83289368
	ctx.lr = 0x83277484;
	sub_83289368(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x8327751c
	if (ctx.cr0.eq) goto loc_8327751C;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// subf r5,r28,r26
	ctx.r5.s64 = ctx.r26.s64 - ctx.r28.s64;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83289368
	ctx.lr = 0x832774A0;
	sub_83289368(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x832774dc
	if (ctx.cr0.eq) goto loc_832774DC;
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,0(r24)
	PPC_STORE_U32(ctx.r24.u32 + 0, ctx.r11.u32);
	// lwz r11,712(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 712);
	// cmpw cr6,r11,r31
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r31.s32, ctx.xer);
	// beq cr6,0x832775a8
	if (ctx.cr6.eq) goto loc_832775A8;
	// lwz r11,704(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 704);
	// cmpw cr6,r11,r31
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r31.s32, ctx.xer);
	// beq cr6,0x832775a8
	if (ctx.cr6.eq) goto loc_832775A8;
loc_832774C8:
	// lwz r11,700(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 700);
	// stw r31,704(r29)
	PPC_STORE_U32(ctx.r29.u32 + 704, ctx.r31.u32);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,700(r29)
	PPC_STORE_U32(ctx.r29.u32 + 700, ctx.r11.u32);
	// b 0x832775a8
	goto loc_832775A8;
loc_832774DC:
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x83276bc8
	ctx.lr = 0x832774E4;
	sub_83276BC8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x83277528
	if (!ctx.cr0.eq) goto loc_83277528;
	// srawi r11,r28,1
	ctx.xer.ca = (ctx.r28.s32 < 0) & ((ctx.r28.u32 & 0x1) != 0);
	ctx.r11.s64 = ctx.r28.s32 >> 1;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// addze r11,r11
	temp.s64 = ctx.r11.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r11.u32;
	ctx.r11.s64 = temp.s64;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// add r5,r11,r26
	ctx.r5.u64 = ctx.r11.u64 + ctx.r26.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83289368
	ctx.lr = 0x83277508;
	sub_83289368(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x8327751c
	if (ctx.cr0.eq) goto loc_8327751C;
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,0(r24)
	PPC_STORE_U32(ctx.r24.u32 + 0, ctx.r11.u32);
	// b 0x832774c8
	goto loc_832774C8;
loc_8327751C:
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,0(r24)
	PPC_STORE_U32(ctx.r24.u32 + 0, ctx.r11.u32);
	// b 0x832775a8
	goto loc_832775A8;
loc_83277528:
	// lis r11,-31822
	ctx.r11.s64 = -2085486592;
	// addi r11,r11,1568
	ctx.r11.s64 = ctx.r11.s64 + 1568;
	// lwz r11,420(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 420);
	// cmplwi cr6,r11,59940
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 59940, ctx.xer);
	// bne cr6,0x8327755c
	if (!ctx.cr6.eq) goto loc_8327755C;
	// lwz r11,2372(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 2372);
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// bgt cr6,0x8327755c
	if (ctx.cr6.gt) goto loc_8327755C;
	// lwz r11,680(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 680);
	// lwz r10,684(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 684);
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// beq cr6,0x83277560
	if (ctx.cr6.eq) goto loc_83277560;
loc_8327755C:
	// li r11,0
	ctx.r11.s64 = 0;
loc_83277560:
	// lwz r10,700(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 700);
	// cmpw cr6,r10,r11
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r11.s32, ctx.xer);
	// bgt cr6,0x83277574
	if (ctx.cr6.gt) goto loc_83277574;
	// lwz r11,708(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 708);
	// b 0x83277590
	goto loc_83277590;
loc_83277574:
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83289368
	ctx.lr = 0x83277588;
	sub_83289368(ctx, base);
	// addic r11,r3,-1
	ctx.xer.ca = ctx.r3.u32 > 0;
	ctx.r11.s64 = ctx.r3.s64 + -1;
	// subfe r11,r11,r3
	temp.u8 = (~ctx.r11.u32 + ctx.r3.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r3.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r11.u64 + ctx.r3.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
loc_83277590:
	// stw r11,0(r24)
	PPC_STORE_U32(ctx.r24.u32 + 0, ctx.r11.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,700(r29)
	PPC_STORE_U32(ctx.r29.u32 + 700, ctx.r11.u32);
	// lwz r11,0(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 0);
	// stw r11,708(r29)
	PPC_STORE_U32(ctx.r29.u32 + 708, ctx.r11.u32);
	// stw r31,712(r29)
	PPC_STORE_U32(ctx.r29.u32 + 712, ctx.r31.u32);
loc_832775A8:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x833a01e8
	__restgprlr_24(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832775B0"))) PPC_WEAK_FUNC(sub_832775B0);
PPC_FUNC_IMPL(__imp__sub_832775B0) {
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
	// lwz r11,2416(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 2416);
	// lwz r8,4128(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4128);
	// lwz r9,4132(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4132);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x832775d8
	if (!ctx.cr6.eq) goto loc_832775D8;
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x83277620
	goto loc_83277620;
loc_832775D8:
	// cmpwi cr6,r8,-5
	ctx.cr6.compare<int32_t>(ctx.r8.s32, -5, ctx.xer);
	// bne cr6,0x832775e8
	if (!ctx.cr6.eq) goto loc_832775E8;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x83277620
	goto loc_83277620;
loc_832775E8:
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// bl 0x83276d60
	ctx.lr = 0x832775F4;
	sub_83276D60(ctx, base);
	// lis r11,0
	ctx.r11.s64 = 0;
	// mulli r10,r9,2000
	ctx.r10.s64 = ctx.r9.s64 * 2000;
	// ori r11,r11,59940
	ctx.r11.u64 = ctx.r11.u64 | 59940;
	// mr r4,r9
	ctx.r4.u64 = ctx.r9.u64;
	// divw r11,r10,r11
	ctx.r11.s32 = ctx.r10.s32 / ctx.r11.s32;
	// add r3,r11,r8
	ctx.r3.u64 = ctx.r11.u64 + ctx.r8.u64;
	// lwz r6,80(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r5,84(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// bl 0x83289368
	ctx.lr = 0x83277618;
	sub_83289368(ctx, base);
	// addic r11,r3,-1
	ctx.xer.ca = ctx.r3.u32 > 0;
	ctx.r11.s64 = ctx.r3.s64 + -1;
	// subfe r3,r11,r3
	temp.u8 = (~ctx.r11.u32 + ctx.r3.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r3.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r3.u64 = ~ctx.r11.u64 + ctx.r3.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
loc_83277620:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83277630"))) PPC_WEAK_FUNC(sub_83277630);
PPC_FUNC_IMPL(__imp__sub_83277630) {
	PPC_FUNC_PROLOGUE();
	// stw r4,4176(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4176, ctx.r4.u32);
	// stw r5,4180(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4180, ctx.r5.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8327763C"))) PPC_WEAK_FUNC(sub_8327763C);
PPC_FUNC_IMPL(__imp__sub_8327763C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83277640"))) PPC_WEAK_FUNC(sub_83277640);
PPC_FUNC_IMPL(__imp__sub_83277640) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,4176(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4176);
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
	// lwz r11,4180(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4180);
	// stw r11,0(r5)
	PPC_STORE_U32(ctx.r5.u32 + 0, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83277654"))) PPC_WEAK_FUNC(sub_83277654);
PPC_FUNC_IMPL(__imp__sub_83277654) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83277658"))) PPC_WEAK_FUNC(sub_83277658);
PPC_FUNC_IMPL(__imp__sub_83277658) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x833a01ac
	ctx.lr = 0x83277660;
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
	// bl 0x83282090
	ctx.lr = 0x83277674;
	sub_83282090(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x83277690
	if (ctx.cr0.eq) goto loc_83277690;
	// lis r4,-256
	ctx.r4.s64 = -16777216;
	// li r3,0
	ctx.r3.s64 = 0;
	// ori r4,r4,299
	ctx.r4.u64 = ctx.r4.u64 | 299;
	// bl 0x83282390
	ctx.lr = 0x8327768C;
	sub_83282390(ctx, base);
	// b 0x832776bc
	goto loc_832776BC;
loc_83277690:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x832821e0
	ctx.lr = 0x83277698;
	sub_832821E0(ctx, base);
	// stw r29,5016(r31)
	PPC_STORE_U32(ctx.r31.u32 + 5016, ctx.r29.u32);
	// stw r30,5020(r31)
	PPC_STORE_U32(ctx.r31.u32 + 5020, ctx.r30.u32);
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// beq cr6,0x832776b0
	if (ctx.cr6.eq) goto loc_832776B0;
	// li r11,-1
	ctx.r11.s64 = -1;
	// stw r11,5028(r31)
	PPC_STORE_U32(ctx.r31.u32 + 5028, ctx.r11.u32);
loc_832776B0:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x832821f0
	ctx.lr = 0x832776B8;
	sub_832821F0(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
loc_832776BC:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x833a01fc
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832776C4"))) PPC_WEAK_FUNC(sub_832776C4);
PPC_FUNC_IMPL(__imp__sub_832776C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832776C8"))) PPC_WEAK_FUNC(sub_832776C8);
PPC_FUNC_IMPL(__imp__sub_832776C8) {
	PPC_FUNC_PROLOGUE();
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
	// lwz r11,5020(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 5020);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x83277744
	if (ctx.cr6.eq) goto loc_83277744;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x832821e0
	ctx.lr = 0x832776F4;
	sub_832821E0(ctx, base);
	// lwz r11,5028(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 5028);
	// li r30,0
	ctx.r30.s64 = 0;
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// bne cr6,0x8327770c
	if (!ctx.cr6.eq) goto loc_8327770C;
	// stw r30,5028(r31)
	PPC_STORE_U32(ctx.r31.u32 + 5028, ctx.r30.u32);
	// stw r30,5024(r31)
	PPC_STORE_U32(ctx.r31.u32 + 5024, ctx.r30.u32);
loc_8327770C:
	// lwz r9,5028(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 5028);
	// lwz r10,5016(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 5016);
	// lwz r8,5020(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 5020);
	// lwz r11,5024(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 5024);
	// mullw r10,r10,r9
	ctx.r10.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r9.s32);
	// mullw r9,r11,r8
	ctx.r9.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r8.s32);
	// cmpw cr6,r9,r10
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r10.s32, ctx.xer);
	// bgt cr6,0x83277738
	if (ctx.cr6.gt) goto loc_83277738;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// li r30,1
	ctx.r30.s64 = 1;
	// stw r11,5024(r31)
	PPC_STORE_U32(ctx.r31.u32 + 5024, ctx.r11.u32);
loc_83277738:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x832821f0
	ctx.lr = 0x83277740;
	sub_832821F0(ctx, base);
	// b 0x83277748
	goto loc_83277748;
loc_83277744:
	// li r30,1
	ctx.r30.s64 = 1;
loc_83277748:
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

__attribute__((alias("__imp__sub_83277764"))) PPC_WEAK_FUNC(sub_83277764);
PPC_FUNC_IMPL(__imp__sub_83277764) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83277768"))) PPC_WEAK_FUNC(sub_83277768);
PPC_FUNC_IMPL(__imp__sub_83277768) {
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
	// lwz r11,5020(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 5020);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x832777c4
	if (ctx.cr6.eq) goto loc_832777C4;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x832821e0
	ctx.lr = 0x83277790;
	sub_832821E0(ctx, base);
	// lwz r11,5028(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 5028);
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// beq cr6,0x832777bc
	if (ctx.cr6.eq) goto loc_832777BC;
	// lwz r10,5020(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 5020);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,5028(r31)
	PPC_STORE_U32(ctx.r31.u32 + 5028, ctx.r11.u32);
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// blt cr6,0x832777bc
	if (ctx.cr6.lt) goto loc_832777BC;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,5028(r31)
	PPC_STORE_U32(ctx.r31.u32 + 5028, ctx.r11.u32);
	// stw r11,5024(r31)
	PPC_STORE_U32(ctx.r31.u32 + 5024, ctx.r11.u32);
loc_832777BC:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x832821f0
	ctx.lr = 0x832777C4;
	sub_832821F0(ctx, base);
loc_832777C4:
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

__attribute__((alias("__imp__sub_832777D8"))) PPC_WEAK_FUNC(sub_832777D8);
PPC_FUNC_IMPL(__imp__sub_832777D8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// extsw r11,r3
	ctx.r11.s64 = ctx.r3.s32;
	// lis r10,-31822
	ctx.r10.s64 = -2085486592;
	// std r11,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r11.u64);
	// addi r11,r10,1568
	ctx.r11.s64 = ctx.r10.s64 + 1568;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lwa r11,420(r11)
	ctx.r11.s64 = int32_t(PPC_LOAD_U32(ctx.r11.u32 + 420));
	// lfd f0,-16(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// std r11,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r11.u64);
	// lfd f12,-16(r1)
	ctx.f12.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// fcfid f12,f12
	ctx.f12.f64 = double(ctx.f12.s64);
	// lfs f13,4152(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 4152);
	ctx.f13.f64 = double(temp.f32);
	// frsp f0,f0
	ctx.f0.f64 = double(float(ctx.f0.f64));
	// frsp f12,f12
	ctx.f12.f64 = double(float(ctx.f12.f64));
	// fdivs f0,f12,f0
	ctx.f0.f64 = double(float(ctx.f12.f64 / ctx.f0.f64));
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// bge cr6,0x83277848
	if (!ctx.cr6.lt) goto loc_83277848;
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// li r9,1
	ctx.r9.s64 = 1;
	// lfs f13,12452(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12452);
	ctx.f13.f64 = double(temp.f32);
	// fdivs f13,f13,f0
	ctx.f13.f64 = double(float(ctx.f13.f64 / ctx.f0.f64));
	// lfs f0,-9180(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -9180);
	ctx.f0.f64 = double(temp.f32);
	// fadds f0,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 + ctx.f0.f64));
	// fctiwz f0,f0
	ctx.f0.s64 = (ctx.f0.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f0.f64));
	// stfiwx f0,0,r4
	PPC_STORE_U32(ctx.r4.u32, ctx.f0.u32);
	// stw r9,0(r5)
	PPC_STORE_U32(ctx.r5.u32 + 0, ctx.r9.u32);
	// blr 
	return;
loc_83277848:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f13,20356(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 20356);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// bge cr6,0x83277864
	if (!ctx.cr6.lt) goto loc_83277864;
	// li r11,2
	ctx.r11.s64 = 2;
	// li r10,1
	ctx.r10.s64 = 1;
	// b 0x83277908
	goto loc_83277908;
loc_83277864:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f13,12384(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12384);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// bge cr6,0x83277884
	if (!ctx.cr6.lt) goto loc_83277884;
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
	// stw r11,0(r5)
	PPC_STORE_U32(ctx.r5.u32 + 0, ctx.r11.u32);
	// blr 
	return;
loc_83277884:
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// lfs f13,10064(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 10064);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// bge cr6,0x832778a0
	if (!ctx.cr6.lt) goto loc_832778A0;
	// li r11,5
	ctx.r11.s64 = 5;
	// li r10,6
	ctx.r10.s64 = 6;
	// b 0x83277908
	goto loc_83277908;
loc_832778A0:
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// lfs f13,900(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 900);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// bge cr6,0x832778b8
	if (!ctx.cr6.lt) goto loc_832778B8;
	// li r10,2
	ctx.r10.s64 = 2;
	// b 0x83277904
	goto loc_83277904;
loc_832778B8:
	// lis r11,-32219
	ctx.r11.s64 = -2111504384;
	// lfs f13,16924(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 16924);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// bge cr6,0x832778d4
	if (!ctx.cr6.lt) goto loc_832778D4;
	// li r11,5
	ctx.r11.s64 = 5;
	// li r10,12
	ctx.r10.s64 = 12;
	// b 0x83277908
	goto loc_83277908;
loc_832778D4:
	// lis r11,-32219
	ctx.r11.s64 = -2111504384;
	// lfs f13,16920(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 16920);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// bge cr6,0x832778f0
	if (!ctx.cr6.lt) goto loc_832778F0;
	// li r11,2
	ctx.r11.s64 = 2;
	// li r10,5
	ctx.r10.s64 = 5;
	// b 0x83277908
	goto loc_83277908;
loc_832778F0:
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// lfs f13,6604(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 6604);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// bge cr6,0x83277914
	if (!ctx.cr6.lt) goto loc_83277914;
	// li r10,3
	ctx.r10.s64 = 3;
loc_83277904:
	// li r11,1
	ctx.r11.s64 = 1;
loc_83277908:
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
	// stw r10,0(r5)
	PPC_STORE_U32(ctx.r5.u32 + 0, ctx.r10.u32);
	// blr 
	return;
loc_83277914:
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r10,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r10.u32);
	// lfs f13,-9180(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -9180);
	ctx.f13.f64 = double(temp.f32);
	// fadds f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 + ctx.f13.f64));
	// fctiwz f0,f0
	ctx.f0.s64 = (ctx.f0.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f0.f64));
	// stfiwx f0,0,r5
	PPC_STORE_U32(ctx.r5.u32, ctx.f0.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83277934"))) PPC_WEAK_FUNC(sub_83277934);
PPC_FUNC_IMPL(__imp__sub_83277934) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83277938"))) PPC_WEAK_FUNC(sub_83277938);
PPC_FUNC_IMPL(__imp__sub_83277938) {
	PPC_FUNC_PROLOGUE();
	// stw r4,5032(r3)
	PPC_STORE_U32(ctx.r3.u32 + 5032, ctx.r4.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83277940"))) PPC_WEAK_FUNC(sub_83277940);
PPC_FUNC_IMPL(__imp__sub_83277940) {
	PPC_FUNC_PROLOGUE();
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
	// li r4,54
	ctx.r4.s64 = 54;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// bl 0x83274d00
	ctx.lr = 0x83277964;
	sub_83274D00(ctx, base);
	// lwz r11,5032(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 5032);
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// bne cr6,0x83277978
	if (!ctx.cr6.eq) goto loc_83277978;
	// stw r3,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r3.u32);
	// b 0x83277990
	goto loc_83277990;
loc_83277978:
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// beq cr6,0x8327798c
	if (ctx.cr6.eq) goto loc_8327798C;
	// cmpw cr6,r3,r11
	ctx.cr6.compare<int32_t>(ctx.r3.s32, ctx.r11.s32, ctx.xer);
	// bge cr6,0x8327798c
	if (!ctx.cr6.lt) goto loc_8327798C;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
loc_8327798C:
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
loc_83277990:
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

__attribute__((alias("__imp__sub_832779A8"))) PPC_WEAK_FUNC(sub_832779A8);
PPC_FUNC_IMPL(__imp__sub_832779A8) {
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
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r3,r3,4
	ctx.r3.s64 = ctx.r3.s64 + 4;
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r11.u32);
	// bl 0x83276ad8
	ctx.lr = 0x832779C8;
	sub_83276AD8(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r4,36(r10)
	PPC_STORE_U32(ctx.r10.u32 + 36, ctx.r4.u32);
	// stw r11,40(r10)
	PPC_STORE_U32(ctx.r10.u32 + 40, ctx.r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_832779E4"))) PPC_WEAK_FUNC(sub_832779E4);
PPC_FUNC_IMPL(__imp__sub_832779E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832779E8"))) PPC_WEAK_FUNC(sub_832779E8);
PPC_FUNC_IMPL(__imp__sub_832779E8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x833a01ac
	ctx.lr = 0x832779F0;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31822
	ctx.r11.s64 = -2085486592;
	// lwz r10,4176(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4176);
	// lwz r9,4180(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4180);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r11,r11,1568
	ctx.r11.s64 = ctx.r11.s64 + 1568;
	// addi r31,r3,3496
	ctx.r31.s64 = ctx.r3.s64 + 3496;
	// lwz r11,428(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 428);
	// mullw r11,r10,r11
	ctx.r11.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r11.s32);
	// divw r29,r11,r9
	ctx.r29.s32 = ctx.r11.s32 / ctx.r9.s32;
	// bl 0x83276bc8
	ctx.lr = 0x83277A1C;
	sub_83276BC8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x83277a38
	if (ctx.cr0.eq) goto loc_83277A38;
	// lwz r11,676(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 676);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// add r11,r11,r29
	ctx.r11.u64 = ctx.r11.u64 + ctx.r29.u64;
	// stw r11,676(r31)
	PPC_STORE_U32(ctx.r31.u32 + 676, ctx.r11.u32);
	// bl 0x83277768
	ctx.lr = 0x83277A38;
	sub_83277768(ctx, base);
loc_83277A38:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x83276bf8
	ctx.lr = 0x83277A44;
	sub_83276BF8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x83277a58
	if (ctx.cr0.eq) goto loc_83277A58;
	// lwz r11,716(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 716);
	// add r11,r11,r29
	ctx.r11.u64 = ctx.r11.u64 + ctx.r29.u64;
	// stw r11,716(r31)
	PPC_STORE_U32(ctx.r31.u32 + 716, ctx.r11.u32);
loc_83277A58:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x833a01fc
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83277A60"))) PPC_WEAK_FUNC(sub_83277A60);
PPC_FUNC_IMPL(__imp__sub_83277A60) {
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
	// bl 0x83276cd0
	ctx.lr = 0x83277A78;
	sub_83276CD0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x83277a98
	if (ctx.cr0.eq) goto loc_83277A98;
	// lis r4,-256
	ctx.r4.s64 = -16777216;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// ori r4,r4,546
	ctx.r4.u64 = ctx.r4.u64 | 546;
	// bl 0x83282390
	ctx.lr = 0x83277A90;
	sub_83282390(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x83277a9c
	goto loc_83277A9C;
loc_83277A98:
	// li r3,0
	ctx.r3.s64 = 0;
loc_83277A9C:
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

__attribute__((alias("__imp__sub_83277AB0"))) PPC_WEAK_FUNC(sub_83277AB0);
PPC_FUNC_IMPL(__imp__sub_83277AB0) {
	PPC_FUNC_PROLOGUE();
	// b 0x83276d60
	sub_83276D60(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83277AB4"))) PPC_WEAK_FUNC(sub_83277AB4);
PPC_FUNC_IMPL(__imp__sub_83277AB4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83277AB8"))) PPC_WEAK_FUNC(sub_83277AB8);
PPC_FUNC_IMPL(__imp__sub_83277AB8) {
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
	// bl 0x83276d80
	ctx.lr = 0x83277AC8;
	sub_83276D80(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// li r3,0
	ctx.r3.s64 = 0;
	// beq 0x83277ae4
	if (ctx.cr0.eq) goto loc_83277AE4;
	// li r11,-2
	ctx.r11.s64 = -2;
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
	// stw r10,0(r5)
	PPC_STORE_U32(ctx.r5.u32 + 0, ctx.r10.u32);
loc_83277AE4:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83277AF4"))) PPC_WEAK_FUNC(sub_83277AF4);
PPC_FUNC_IMPL(__imp__sub_83277AF4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83277AF8"))) PPC_WEAK_FUNC(sub_83277AF8);
PPC_FUNC_IMPL(__imp__sub_83277AF8) {
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
	// bl 0x83276d80
	ctx.lr = 0x83277B0C;
	sub_83276D80(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// li r3,0
	ctx.r3.s64 = 0;
	// beq 0x83277b30
	if (ctx.cr0.eq) goto loc_83277B30;
	// lis r11,-31822
	ctx.r11.s64 = -2085486592;
	// lwz r10,4172(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4172);
	// addi r11,r11,1568
	ctx.r11.s64 = ctx.r11.s64 + 1568;
	// stw r10,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r10.u32);
	// lwz r11,424(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 424);
	// stw r11,0(r5)
	PPC_STORE_U32(ctx.r5.u32 + 0, ctx.r11.u32);
loc_83277B30:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83277B40"))) PPC_WEAK_FUNC(sub_83277B40);
PPC_FUNC_IMPL(__imp__sub_83277B40) {
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
	// bl 0x83276d80
	ctx.lr = 0x83277B50;
	sub_83276D80(ctx, base);
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

__attribute__((alias("__imp__sub_83277B64"))) PPC_WEAK_FUNC(sub_83277B64);
PPC_FUNC_IMPL(__imp__sub_83277B64) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83277B68"))) PPC_WEAK_FUNC(sub_83277B68);
PPC_FUNC_IMPL(__imp__sub_83277B68) {
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
	// bl 0x83276d80
	ctx.lr = 0x83277B7C;
	sub_83276D80(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x83277bb4
	if (ctx.cr0.eq) goto loc_83277BB4;
	// lwz r11,4220(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4220);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x83277ba8
	if (!ctx.cr6.eq) goto loc_83277BA8;
	// li r11,-2
	ctx.r11.s64 = -2;
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r10,0(r5)
	PPC_STORE_U32(ctx.r5.u32 + 0, ctx.r10.u32);
	// b 0x83277bb4
	goto loc_83277BB4;
loc_83277BA8:
	// lwz r3,4224(r9)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4224);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x83277BB4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_83277BB4:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83277BC4"))) PPC_WEAK_FUNC(sub_83277BC4);
PPC_FUNC_IMPL(__imp__sub_83277BC4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83277BC8"))) PPC_WEAK_FUNC(sub_83277BC8);
PPC_FUNC_IMPL(__imp__sub_83277BC8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x833a01a8
	ctx.lr = 0x83277BD0;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// bl 0x83276d80
	ctx.lr = 0x83277BE4;
	sub_83276D80(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x83277c90
	if (ctx.cr0.eq) goto loc_83277C90;
	// lwz r11,4228(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4228);
	// addi r31,r30,3496
	ctx.r31.s64 = ctx.r30.s64 + 3496;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x83277c14
	if (!ctx.cr6.eq) goto loc_83277C14;
	// li r11,-2
	ctx.r11.s64 = -2;
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r11,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r11.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r10,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r10.u32);
	// b 0x83277c90
	goto loc_83277C90;
loc_83277C14:
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// lwz r3,752(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 752);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x83277C28;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r8,r3
	ctx.r8.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x83276bc8
	ctx.lr = 0x83277C34;
	sub_83276BC8(ctx, base);
	// lwz r9,80(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x83277c70
	if (ctx.cr0.eq) goto loc_83277C70;
	// lwz r11,736(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 736);
	// cmpwi cr6,r11,-5
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -5, ctx.xer);
	// beq cr6,0x83277c70
	if (ctx.cr6.eq) goto loc_83277C70;
	// lwz r11,736(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 736);
	// subf. r11,r11,r9
	ctx.r11.s64 = ctx.r9.s64 - ctx.r11.s64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bge 0x83277c64
	if (!ctx.cr0.lt) goto loc_83277C64;
	// lwz r10,748(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 748);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
loc_83277C64:
	// lwz r10,740(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 740);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stw r11,740(r31)
	PPC_STORE_U32(ctx.r31.u32 + 740, ctx.r11.u32);
loc_83277C70:
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// mr r3,r8
	ctx.r3.u64 = ctx.r8.u64;
	// stw r9,736(r31)
	PPC_STORE_U32(ctx.r31.u32 + 736, ctx.r9.u32);
	// stw r11,744(r31)
	PPC_STORE_U32(ctx.r31.u32 + 744, ctx.r11.u32);
	// lwz r11,740(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 740);
	// stw r11,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r11.u32);
	// lwz r11,744(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 744);
	// stw r11,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r11.u32);
loc_83277C90:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x833a01f8
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83277C98"))) PPC_WEAK_FUNC(sub_83277C98);
PPC_FUNC_IMPL(__imp__sub_83277C98) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x833a01ac
	ctx.lr = 0x83277CA0;
	__savegprlr_29(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r4,2
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 2, ctx.xer);
	// bne cr6,0x83277ce0
	if (!ctx.cr6.eq) goto loc_83277CE0;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// bl 0x832772e0
	ctx.lr = 0x83277CBC;
	sub_832772E0(ctx, base);
	// lwz r30,80(r1)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r29,84(r1)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x83277240
	ctx.lr = 0x83277CD0;
	sub_83277240(ctx, base);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83277298
	ctx.lr = 0x83277CE0;
	sub_83277298(ctx, base);
loc_83277CE0:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x833a01fc
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83277CE8"))) PPC_WEAK_FUNC(sub_83277CE8);
PPC_FUNC_IMPL(__imp__sub_83277CE8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x833a01ac
	ctx.lr = 0x83277CF0;
	__savegprlr_29(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,2664(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 2664);
	// mr r9,r3
	ctx.r9.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// mr r31,r6
	ctx.r31.u64 = ctx.r6.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x83277d18
	if (!ctx.cr6.eq) goto loc_83277D18;
	// li r11,1
	ctx.r11.s64 = 1;
	// b 0x83277da8
	goto loc_83277DA8;
loc_83277D18:
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// mr r3,r9
	ctx.r3.u64 = ctx.r9.u64;
	// bl 0x83276d60
	ctx.lr = 0x83277D28;
	sub_83276D60(ctx, base);
	// lwz r6,80(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmpwi cr6,r6,1
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 1, ctx.xer);
	// bne cr6,0x83277d4c
	if (!ctx.cr6.eq) goto loc_83277D4C;
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r9
	ctx.r3.u64 = ctx.r9.u64;
	// bl 0x832773c0
	ctx.lr = 0x83277D48;
	sub_832773C0(ctx, base);
	// b 0x83277dac
	goto loc_83277DAC;
loc_83277D4C:
	// lis r11,-31822
	ctx.r11.s64 = -2085486592;
	// lwz r10,2664(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 2664);
	// mullw r8,r6,r7
	ctx.r8.s64 = int64_t(ctx.r6.s32) * int64_t(ctx.r7.s32);
	// lwz r7,84(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// addi r11,r11,1568
	ctx.r11.s64 = ctx.r11.s64 + 1568;
	// cmpwi cr6,r10,1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 1, ctx.xer);
	// lwz r11,420(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 420);
	// divw r11,r8,r11
	ctx.r11.s32 = ctx.r8.s32 / ctx.r11.s32;
	// add r5,r11,r7
	ctx.r5.u64 = ctx.r11.u64 + ctx.r7.u64;
	// beq cr6,0x83277d94
	if (ctx.cr6.eq) goto loc_83277D94;
	// mr r7,r6
	ctx.r7.u64 = ctx.r6.u64;
	// mr r6,r5
	ctx.r6.u64 = ctx.r5.u64;
	// mr r8,r31
	ctx.r8.u64 = ctx.r31.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r9
	ctx.r3.u64 = ctx.r9.u64;
	// bl 0x83277438
	ctx.lr = 0x83277D90;
	sub_83277438(ctx, base);
	// b 0x83277dac
	goto loc_83277DAC;
loc_83277D94:
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x83289368
	ctx.lr = 0x83277DA0;
	sub_83289368(ctx, base);
	// addic r11,r3,-1
	ctx.xer.ca = ctx.r3.u32 > 0;
	ctx.r11.s64 = ctx.r3.s64 + -1;
	// subfe r11,r11,r3
	temp.u8 = (~ctx.r11.u32 + ctx.r3.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r3.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r11.u64 + ctx.r3.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
loc_83277DA8:
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
loc_83277DAC:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x833a01fc
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83277DB4"))) PPC_WEAK_FUNC(sub_83277DB4);
PPC_FUNC_IMPL(__imp__sub_83277DB4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83277DB8"))) PPC_WEAK_FUNC(sub_83277DB8);
PPC_FUNC_IMPL(__imp__sub_83277DB8) {
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
	// lis r11,-31961
	ctx.r11.s64 = -2094596096;
	// mr r9,r4
	ctx.r9.u64 = ctx.r4.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r11,31416
	ctx.r4.s64 = ctx.r11.s64 + 31416;
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// bl 0x83276ed0
	ctx.lr = 0x83277DDC;
	sub_83276ED0(ctx, base);
	// lis r11,-31961
	ctx.r11.s64 = -2094596096;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r4,r11,31480
	ctx.r4.s64 = ctx.r11.s64 + 31480;
	// bl 0x83276ed0
	ctx.lr = 0x83277DEC;
	sub_83276ED0(ctx, base);
	// li r5,2
	ctx.r5.s64 = 2;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x83276ed0
	ctx.lr = 0x83277DF8;
	sub_83276ED0(ctx, base);
	// lis r11,-31961
	ctx.r11.s64 = -2094596096;
	// li r5,3
	ctx.r5.s64 = 3;
	// addi r4,r11,31552
	ctx.r4.s64 = ctx.r11.s64 + 31552;
	// bl 0x83276ed0
	ctx.lr = 0x83277E08;
	sub_83276ED0(ctx, base);
	// lis r11,-31961
	ctx.r11.s64 = -2094596096;
	// li r5,4
	ctx.r5.s64 = 4;
	// addi r4,r11,31592
	ctx.r4.s64 = ctx.r11.s64 + 31592;
	// bl 0x83276ed0
	ctx.lr = 0x83277E18;
	sub_83276ED0(ctx, base);
	// lis r11,-31961
	ctx.r11.s64 = -2094596096;
	// li r5,5
	ctx.r5.s64 = 5;
	// addi r4,r11,31688
	ctx.r4.s64 = ctx.r11.s64 + 31688;
	// bl 0x83276ed0
	ctx.lr = 0x83277E28;
	sub_83276ED0(ctx, base);
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r3,r9,28
	ctx.r3.s64 = ctx.r9.s64 + 28;
	// stw r8,24(r9)
	PPC_STORE_U32(ctx.r9.u32 + 24, ctx.r8.u32);
	// bl 0x83276ad8
	ctx.lr = 0x83277E38;
	sub_83276AD8(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r9,192
	ctx.r3.s64 = ctx.r9.s64 + 192;
	// bl 0x832779a8
	ctx.lr = 0x83277E44;
	sub_832779A8(ctx, base);
	// lis r11,32767
	ctx.r11.s64 = 2147418112;
	// addi r3,r9,60
	ctx.r3.s64 = ctx.r9.s64 + 60;
	// ori r7,r11,65535
	ctx.r7.u64 = ctx.r11.u64 | 65535;
	// mr r4,r7
	ctx.r4.u64 = ctx.r7.u64;
	// bl 0x832779a8
	ctx.lr = 0x83277E58;
	sub_832779A8(ctx, base);
	// li r4,-1
	ctx.r4.s64 = -1;
	// addi r3,r9,104
	ctx.r3.s64 = ctx.r9.s64 + 104;
	// bl 0x832779a8
	ctx.lr = 0x83277E64;
	sub_832779A8(ctx, base);
	// addi r3,r9,148
	ctx.r3.s64 = ctx.r9.s64 + 148;
	// bl 0x832779a8
	ctx.lr = 0x83277E6C;
	sub_832779A8(ctx, base);
	// addi r3,r9,236
	ctx.r3.s64 = ctx.r9.s64 + 236;
	// bl 0x832779a8
	ctx.lr = 0x83277E74;
	sub_832779A8(ctx, base);
	// mr r4,r7
	ctx.r4.u64 = ctx.r7.u64;
	// addi r3,r9,280
	ctx.r3.s64 = ctx.r9.s64 + 280;
	// bl 0x832779a8
	ctx.lr = 0x83277E80;
	sub_832779A8(ctx, base);
	// li r11,32
	ctx.r11.s64 = 32;
	// li r10,-1
	ctx.r10.s64 = -1;
	// stw r8,344(r9)
	PPC_STORE_U32(ctx.r9.u32 + 344, ctx.r8.u32);
	// addi r6,r9,356
	ctx.r6.s64 = ctx.r9.s64 + 356;
	// stw r8,348(r9)
	PPC_STORE_U32(ctx.r9.u32 + 348, ctx.r8.u32);
	// stw r8,352(r9)
	PPC_STORE_U32(ctx.r9.u32 + 352, ctx.r8.u32);
	// std r10,328(r9)
	PPC_STORE_U64(ctx.r9.u32 + 328, ctx.r10.u64);
	// addi r6,r6,-4
	ctx.r6.s64 = ctx.r6.s64 + -4;
	// std r10,336(r9)
	PPC_STORE_U64(ctx.r9.u32 + 336, ctx.r10.u64);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
loc_83277EA8:
	// stwu r8,4(r6)
	ea = 4 + ctx.r6.u32;
	PPC_STORE_U32(ea, ctx.r8.u32);
	ctx.r6.u32 = ea;
	// bdnz 0x83277ea8
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_83277EA8;
	// li r6,32
	ctx.r6.s64 = 32;
	// stw r8,488(r9)
	PPC_STORE_U32(ctx.r9.u32 + 488, ctx.r8.u32);
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r8,492(r9)
	PPC_STORE_U32(ctx.r9.u32 + 492, ctx.r8.u32);
	// addi r5,r9,504
	ctx.r5.s64 = ctx.r9.s64 + 504;
	// stw r8,496(r9)
	PPC_STORE_U32(ctx.r9.u32 + 496, ctx.r8.u32);
	// stw r8,500(r9)
	PPC_STORE_U32(ctx.r9.u32 + 500, ctx.r8.u32);
	// stw r11,484(r9)
	PPC_STORE_U32(ctx.r9.u32 + 484, ctx.r11.u32);
	// addi r5,r5,-4
	ctx.r5.s64 = ctx.r5.s64 + -4;
	// mtctr r6
	ctx.ctr.u64 = ctx.r6.u64;
loc_83277ED8:
	// stwu r8,4(r5)
	ea = 4 + ctx.r5.u32;
	PPC_STORE_U32(ea, ctx.r8.u32);
	ctx.r5.u32 = ea;
	// bdnz 0x83277ed8
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_83277ED8;
	// stw r8,676(r9)
	PPC_STORE_U32(ctx.r9.u32 + 676, ctx.r8.u32);
	// li r6,-5
	ctx.r6.s64 = -5;
	// stw r10,716(r9)
	PPC_STORE_U32(ctx.r9.u32 + 716, ctx.r10.u32);
	// li r5,100
	ctx.r5.s64 = 100;
	// stw r7,660(r9)
	PPC_STORE_U32(ctx.r9.u32 + 660, ctx.r7.u32);
	// stw r7,668(r9)
	PPC_STORE_U32(ctx.r9.u32 + 668, ctx.r7.u32);
	// stw r6,632(r9)
	PPC_STORE_U32(ctx.r9.u32 + 632, ctx.r6.u32);
	// stw r11,636(r9)
	PPC_STORE_U32(ctx.r9.u32 + 636, ctx.r11.u32);
	// stw r6,640(r9)
	PPC_STORE_U32(ctx.r9.u32 + 640, ctx.r6.u32);
	// stw r11,644(r9)
	PPC_STORE_U32(ctx.r9.u32 + 644, ctx.r11.u32);
	// stw r10,648(r9)
	PPC_STORE_U32(ctx.r9.u32 + 648, ctx.r10.u32);
	// stw r11,652(r9)
	PPC_STORE_U32(ctx.r9.u32 + 652, ctx.r11.u32);
	// stw r6,656(r9)
	PPC_STORE_U32(ctx.r9.u32 + 656, ctx.r6.u32);
	// stw r8,664(r9)
	PPC_STORE_U32(ctx.r9.u32 + 664, ctx.r8.u32);
	// stw r8,672(r9)
	PPC_STORE_U32(ctx.r9.u32 + 672, ctx.r8.u32);
	// stw r11,680(r9)
	PPC_STORE_U32(ctx.r9.u32 + 680, ctx.r11.u32);
	// stw r11,684(r9)
	PPC_STORE_U32(ctx.r9.u32 + 684, ctx.r11.u32);
	// stw r8,688(r9)
	PPC_STORE_U32(ctx.r9.u32 + 688, ctx.r8.u32);
	// stw r8,692(r9)
	PPC_STORE_U32(ctx.r9.u32 + 692, ctx.r8.u32);
	// stw r11,696(r9)
	PPC_STORE_U32(ctx.r9.u32 + 696, ctx.r11.u32);
	// stw r5,700(r9)
	PPC_STORE_U32(ctx.r9.u32 + 700, ctx.r5.u32);
	// stw r10,704(r9)
	PPC_STORE_U32(ctx.r9.u32 + 704, ctx.r10.u32);
	// lwz r7,676(r9)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r9.u32 + 676);
	// stw r6,736(r9)
	PPC_STORE_U32(ctx.r9.u32 + 736, ctx.r6.u32);
	// stw r8,740(r9)
	PPC_STORE_U32(ctx.r9.u32 + 740, ctx.r8.u32);
	// stw r11,744(r9)
	PPC_STORE_U32(ctx.r9.u32 + 744, ctx.r11.u32);
	// stw r8,708(r9)
	PPC_STORE_U32(ctx.r9.u32 + 708, ctx.r8.u32);
	// stw r10,712(r9)
	PPC_STORE_U32(ctx.r9.u32 + 712, ctx.r10.u32);
	// stw r7,720(r9)
	PPC_STORE_U32(ctx.r9.u32 + 720, ctx.r7.u32);
	// stw r8,732(r9)
	PPC_STORE_U32(ctx.r9.u32 + 732, ctx.r8.u32);
	// stw r10,748(r9)
	PPC_STORE_U32(ctx.r9.u32 + 748, ctx.r10.u32);
	// stw r8,752(r9)
	PPC_STORE_U32(ctx.r9.u32 + 752, ctx.r8.u32);
	// stw r8,1496(r9)
	PPC_STORE_U32(ctx.r9.u32 + 1496, ctx.r8.u32);
	// stw r8,1500(r9)
	PPC_STORE_U32(ctx.r9.u32 + 1500, ctx.r8.u32);
	// stw r8,1504(r9)
	PPC_STORE_U32(ctx.r9.u32 + 1504, ctx.r8.u32);
	// stw r8,1508(r9)
	PPC_STORE_U32(ctx.r9.u32 + 1508, ctx.r8.u32);
	// stw r8,1512(r9)
	PPC_STORE_U32(ctx.r9.u32 + 1512, ctx.r8.u32);
	// stw r8,1516(r9)
	PPC_STORE_U32(ctx.r9.u32 + 1516, ctx.r8.u32);
	// stw r8,1520(r9)
	PPC_STORE_U32(ctx.r9.u32 + 1520, ctx.r8.u32);
	// stw r8,1524(r9)
	PPC_STORE_U32(ctx.r9.u32 + 1524, ctx.r8.u32);
	// stw r8,1528(r9)
	PPC_STORE_U32(ctx.r9.u32 + 1528, ctx.r8.u32);
	// stw r8,1532(r9)
	PPC_STORE_U32(ctx.r9.u32 + 1532, ctx.r8.u32);
	// stw r10,1536(r9)
	PPC_STORE_U32(ctx.r9.u32 + 1536, ctx.r10.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83277F9C"))) PPC_WEAK_FUNC(sub_83277F9C);
PPC_FUNC_IMPL(__imp__sub_83277F9C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83277FA0"))) PPC_WEAK_FUNC(sub_83277FA0);
PPC_FUNC_IMPL(__imp__sub_83277FA0) {
	PPC_FUNC_PROLOGUE();
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
	// mr r9,r3
	ctx.r9.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r8,r5
	ctx.r8.u64 = ctx.r5.u64;
	// bl 0x83277ab0
	ctx.lr = 0x83277FC4;
	sub_83277AB0(ctx, base);
	// lwz r4,0(r5)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmpwi cr6,r4,1
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 1, ctx.xer);
	// beq cr6,0x83277ff8
	if (ctx.cr6.eq) goto loc_83277FF8;
	// lwz r11,3776(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 3776);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x83277ff8
	if (ctx.cr6.eq) goto loc_83277FF8;
	// lwz r5,3816(r9)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r9.u32 + 3816);
	// lwz r3,3812(r9)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r9.u32 + 3812);
	// bl 0x83289328
	ctx.lr = 0x83277FEC;
	sub_83289328(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// add r11,r3,r11
	ctx.r11.u64 = ctx.r3.u64 + ctx.r11.u64;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
loc_83277FF8:
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

__attribute__((alias("__imp__sub_83278014"))) PPC_WEAK_FUNC(sub_83278014);
PPC_FUNC_IMPL(__imp__sub_83278014) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83278018"))) PPC_WEAK_FUNC(sub_83278018);
PPC_FUNC_IMPL(__imp__sub_83278018) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x833a01ac
	ctx.lr = 0x83278020;
	__savegprlr_29(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// bl 0x832821e0
	ctx.lr = 0x83278038;
	sub_832821E0(ctx, base);
	// li r4,15
	ctx.r4.s64 = 15;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83274d00
	ctx.lr = 0x83278044;
	sub_83274D00(ctx, base);
	// addi r11,r3,874
	ctx.r11.s64 = ctx.r3.s64 + 874;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r11,r31
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r31.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x83278060
	if (!ctx.cr6.eq) goto loc_83278060;
	// lis r11,-31961
	ctx.r11.s64 = -2094596096;
	// addi r11,r11,31416
	ctx.r11.s64 = ctx.r11.s64 + 31416;
loc_83278060:
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bctrl 
	ctx.lr = 0x83278074;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x832821f0
	ctx.lr = 0x83278080;
	sub_832821F0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x833a01fc
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8327808C"))) PPC_WEAK_FUNC(sub_8327808C);
PPC_FUNC_IMPL(__imp__sub_8327808C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83278090"))) PPC_WEAK_FUNC(sub_83278090);
PPC_FUNC_IMPL(__imp__sub_83278090) {
	PPC_FUNC_PROLOGUE();
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
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r30,r3,3496
	ctx.r30.s64 = ctx.r3.s64 + 3496;
	// bl 0x83278018
	ctx.lr = 0x832780B8;
	sub_83278018(ctx, base);
	// lwz r11,4144(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4144);
	// lwz r10,84(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// bne cr6,0x832780d8
	if (!ctx.cr6.eq) goto loc_832780D8;
	// lwz r11,652(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 652);
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// beq cr6,0x83278134
	if (ctx.cr6.eq) goto loc_83278134;
loc_832780D8:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83276c20
	ctx.lr = 0x832780E4;
	sub_83276C20(ctx, base);
	// lwz r10,84(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r9,80(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lis r11,-31822
	ctx.r11.s64 = -2085486592;
	// stw r10,648(r30)
	PPC_STORE_U32(ctx.r30.u32 + 648, ctx.r10.u32);
	// stw r9,652(r30)
	PPC_STORE_U32(ctx.r30.u32 + 652, ctx.r9.u32);
	// lwz r3,2364(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 2364);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x83278134
	if (ctx.cr6.eq) goto loc_83278134;
	// lis r11,-31845
	ctx.r11.s64 = -2086993920;
	// addi r9,r1,80
	ctx.r9.s64 = ctx.r1.s64 + 80;
	// addi r11,r11,4736
	ctx.r11.s64 = ctx.r11.s64 + 4736;
	// addi r10,r1,84
	ctx.r10.s64 = ctx.r1.s64 + 84;
	// addi r4,r11,4
	ctx.r4.s64 = ctx.r11.s64 + 4;
	// stw r9,36(r11)
	PPC_STORE_U32(ctx.r11.u32 + 36, ctx.r9.u32);
	// stw r31,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r31.u32);
	// stw r10,24(r11)
	PPC_STORE_U32(ctx.r11.u32 + 24, ctx.r10.u32);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,36(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x83278134;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_83278134:
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,100(r31)
	PPC_STORE_U32(ctx.r31.u32 + 100, ctx.r11.u32);
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

__attribute__((alias("__imp__sub_83278154"))) PPC_WEAK_FUNC(sub_83278154);
PPC_FUNC_IMPL(__imp__sub_83278154) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83278158"))) PPC_WEAK_FUNC(sub_83278158);
PPC_FUNC_IMPL(__imp__sub_83278158) {
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
	// lwz r11,2660(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 2660);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x83278178
	if (ctx.cr6.eq) goto loc_83278178;
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x83278188
	goto loc_83278188;
loc_83278178:
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// lwz r7,2780(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 2780);
	// bl 0x83277ce8
	ctx.lr = 0x83278184;
	sub_83277CE8(ctx, base);
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
loc_83278188:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83278198"))) PPC_WEAK_FUNC(sub_83278198);
PPC_FUNC_IMPL(__imp__sub_83278198) {
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
	// bl 0x832779e8
	ctx.lr = 0x832781B0;
	sub_832779E8(ctx, base);
	// li r4,71
	ctx.r4.s64 = 71;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83274d00
	ctx.lr = 0x832781BC;
	sub_83274D00(ctx, base);
	// cmpwi cr6,r3,1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 1, ctx.xer);
	// bne cr6,0x832781cc
	if (!ctx.cr6.eq) goto loc_832781CC;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83278090
	ctx.lr = 0x832781CC;
	sub_83278090(ctx, base);
loc_832781CC:
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

__attribute__((alias("__imp__sub_832781E0"))) PPC_WEAK_FUNC(sub_832781E0);
PPC_FUNC_IMPL(__imp__sub_832781E0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x833a01ac
	ctx.lr = 0x832781E8;
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
	// bl 0x83282090
	ctx.lr = 0x832781FC;
	sub_83282090(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x83278218
	if (ctx.cr0.eq) goto loc_83278218;
	// lis r4,-256
	ctx.r4.s64 = -16777216;
	// li r3,0
	ctx.r3.s64 = 0;
	// ori r4,r4,289
	ctx.r4.u64 = ctx.r4.u64 | 289;
	// bl 0x83282390
	ctx.lr = 0x83278214;
	sub_83282390(ctx, base);
	// b 0x83278228
	goto loc_83278228;
loc_83278218:
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83277fa0
	ctx.lr = 0x83278228;
	sub_83277FA0(ctx, base);
loc_83278228:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x833a01fc
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83278230"))) PPC_WEAK_FUNC(sub_83278230);
PPC_FUNC_IMPL(__imp__sub_83278230) {
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
	// bl 0x83282090
	ctx.lr = 0x83278248;
	sub_83282090(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x83278264
	if (ctx.cr0.eq) goto loc_83278264;
	// lis r4,-256
	ctx.r4.s64 = -16777216;
	// li r3,0
	ctx.r3.s64 = 0;
	// ori r4,r4,298
	ctx.r4.u64 = ctx.r4.u64 | 298;
	// bl 0x83282390
	ctx.lr = 0x83278260;
	sub_83282390(ctx, base);
	// b 0x83278284
	goto loc_83278284;
loc_83278264:
	// li r4,71
	ctx.r4.s64 = 71;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83274d00
	ctx.lr = 0x83278270;
	sub_83274D00(ctx, base);
	// cmpwi cr6,r3,1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 1, ctx.xer);
	// beq cr6,0x83278280
	if (ctx.cr6.eq) goto loc_83278280;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83278090
	ctx.lr = 0x83278280;
	sub_83278090(ctx, base);
loc_83278280:
	// li r3,0
	ctx.r3.s64 = 0;
loc_83278284:
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

__attribute__((alias("__imp__sub_83278298"))) PPC_WEAK_FUNC(sub_83278298);
PPC_FUNC_IMPL(__imp__sub_83278298) {
	PPC_FUNC_PROLOGUE();
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// bne cr6,0x832782a8
	if (!ctx.cr6.eq) goto loc_832782A8;
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_832782A8:
	// lwz r5,24(r4)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r4.u32 + 24);
	// lwz r4,20(r4)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r4.u32 + 20);
	// b 0x83278158
	sub_83278158(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832782B4"))) PPC_WEAK_FUNC(sub_832782B4);
PPC_FUNC_IMPL(__imp__sub_832782B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832782B8"))) PPC_WEAK_FUNC(sub_832782B8);
PPC_FUNC_IMPL(__imp__sub_832782B8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x833a01ac
	ctx.lr = 0x832782C0;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31822
	ctx.r11.s64 = -2085486592;
	// addi r31,r11,1568
	ctx.r31.s64 = ctx.r11.s64 + 1568;
	// addi r30,r31,508
	ctx.r30.s64 = ctx.r31.s64 + 508;
	// lwz r11,412(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 412);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,412(r31)
	PPC_STORE_U32(ctx.r31.u32 + 412, ctx.r11.u32);
loc_832782DC:
	// lwz r29,0(r30)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x83282090
	ctx.lr = 0x832782E8;
	sub_83282090(ctx, base);
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// beq cr6,0x832782f8
	if (ctx.cr6.eq) goto loc_832782F8;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x83278198
	ctx.lr = 0x832782F8;
	sub_83278198(ctx, base);
loc_832782F8:
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// addi r11,r31,540
	ctx.r11.s64 = ctx.r31.s64 + 540;
	// cmpw cr6,r30,r11
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x832782dc
	if (ctx.cr6.lt) goto loc_832782DC;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x833a01fc
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83278310"))) PPC_WEAK_FUNC(sub_83278310);
PPC_FUNC_IMPL(__imp__sub_83278310) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x833a01ac
	ctx.lr = 0x83278318;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x83278368
	if (!ctx.cr6.eq) goto loc_83278368;
	// lis r11,-31822
	ctx.r11.s64 = -2085486592;
	// li r29,0
	ctx.r29.s64 = 0;
	// addi r30,r11,1568
	ctx.r30.s64 = ctx.r11.s64 + 1568;
	// addi r31,r30,508
	ctx.r31.s64 = ctx.r30.s64 + 508;
loc_83278334:
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x83278350
	if (ctx.cr6.eq) goto loc_83278350;
	// bl 0x83278230
	ctx.lr = 0x83278344;
	sub_83278230(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x83278350
	if (ctx.cr0.eq) goto loc_83278350;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
loc_83278350:
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// addi r11,r30,540
	ctx.r11.s64 = ctx.r30.s64 + 540;
	// cmpw cr6,r31,r11
	ctx.cr6.compare<int32_t>(ctx.r31.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x83278334
	if (ctx.cr6.lt) goto loc_83278334;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// b 0x8327836c
	goto loc_8327836C;
loc_83278368:
	// bl 0x83278230
	ctx.lr = 0x8327836C;
	sub_83278230(ctx, base);
loc_8327836C:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x833a01fc
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83278374"))) PPC_WEAK_FUNC(sub_83278374);
PPC_FUNC_IMPL(__imp__sub_83278374) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83278378"))) PPC_WEAK_FUNC(sub_83278378);
PPC_FUNC_IMPL(__imp__sub_83278378) {
	PPC_FUNC_PROLOGUE();
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
	// li r4,32
	ctx.r4.s64 = 32;
	// addi r31,r30,10956
	ctx.r31.s64 = ctx.r30.s64 + 10956;
	// addi r3,r31,-296
	ctx.r3.s64 = ctx.r31.s64 + -296;
	// bl 0x832f3f50
	ctx.lr = 0x832783A0;
	sub_832F3F50(ctx, base);
	// stw r3,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r3.u32);
	// bl 0x832f53f8
	ctx.lr = 0x832783A8;
	sub_832F53F8(ctx, base);
	// li r10,-1
	ctx.r10.s64 = -1;
	// li r11,-1
	ctx.r11.s64 = -1;
	// stw r10,-264(r31)
	PPC_STORE_U32(ctx.r31.u32 + -264, ctx.r10.u32);
	// li r9,-1
	ctx.r9.s64 = -1;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// stw r9,-300(r31)
	PPC_STORE_U32(ctx.r31.u32 + -300, ctx.r9.u32);
	// stw r11,-4(r31)
	PPC_STORE_U32(ctx.r31.u32 + -4, ctx.r11.u32);
	// stw r10,10956(r30)
	PPC_STORE_U32(ctx.r30.u32 + 10956, ctx.r10.u32);
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

__attribute__((alias("__imp__sub_832783E4"))) PPC_WEAK_FUNC(sub_832783E4);
PPC_FUNC_IMPL(__imp__sub_832783E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832783E8"))) PPC_WEAK_FUNC(sub_832783E8);
PPC_FUNC_IMPL(__imp__sub_832783E8) {
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
	// addi r31,r11,10956
	ctx.r31.s64 = ctx.r11.s64 + 10956;
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x83278418
	if (ctx.cr6.eq) goto loc_83278418;
	// bl 0x832f4030
	ctx.lr = 0x83278410;
	sub_832F4030(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
loc_83278418:
	// bl 0x832f5488
	ctx.lr = 0x8327841C;
	sub_832F5488(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
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

__attribute__((alias("__imp__sub_83278438"))) PPC_WEAK_FUNC(sub_83278438);
PPC_FUNC_IMPL(__imp__sub_83278438) {
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
	// mr r7,r6
	ctx.r7.u64 = ctx.r6.u64;
	// mr r6,r5
	ctx.r6.u64 = ctx.r5.u64;
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// li r3,2
	ctx.r3.s64 = 2;
	// bl 0x832f59f0
	ctx.lr = 0x83278464;
	sub_832F59F0(ctx, base);
	// lis r11,-31827
	ctx.r11.s64 = -2085814272;
	// stw r31,10692(r11)
	PPC_STORE_U32(ctx.r11.u32 + 10692, ctx.r31.u32);
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

__attribute__((alias("__imp__sub_83278480"))) PPC_WEAK_FUNC(sub_83278480);
PPC_FUNC_IMPL(__imp__sub_83278480) {
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
	// lwz r4,10692(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 10692);
	// cmpwi cr6,r4,-1
	ctx.cr6.compare<int32_t>(ctx.r4.s32, -1, ctx.xer);
	// beq cr6,0x832784b0
	if (ctx.cr6.eq) goto loc_832784B0;
	// li r3,2
	ctx.r3.s64 = 2;
	// bl 0x832f5930
	ctx.lr = 0x832784A8;
	sub_832F5930(ctx, base);
	// li r11,-1
	ctx.r11.s64 = -1;
	// stw r11,10692(r31)
	PPC_STORE_U32(ctx.r31.u32 + 10692, ctx.r11.u32);
loc_832784B0:
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

__attribute__((alias("__imp__sub_832784C4"))) PPC_WEAK_FUNC(sub_832784C4);
PPC_FUNC_IMPL(__imp__sub_832784C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832784C8"))) PPC_WEAK_FUNC(sub_832784C8);
PPC_FUNC_IMPL(__imp__sub_832784C8) {
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
	// mr r6,r5
	ctx.r6.u64 = ctx.r5.u64;
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// li r3,6
	ctx.r3.s64 = 6;
	// bl 0x832f5858
	ctx.lr = 0x832784E8;
	sub_832F5858(ctx, base);
	// lis r11,-31827
	ctx.r11.s64 = -2085814272;
	// stw r3,10656(r11)
	PPC_STORE_U32(ctx.r11.u32 + 10656, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83278500"))) PPC_WEAK_FUNC(sub_83278500);
PPC_FUNC_IMPL(__imp__sub_83278500) {
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
	// lwz r4,10656(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 10656);
	// cmpwi cr6,r4,-1
	ctx.cr6.compare<int32_t>(ctx.r4.s32, -1, ctx.xer);
	// beq cr6,0x83278530
	if (ctx.cr6.eq) goto loc_83278530;
	// li r3,6
	ctx.r3.s64 = 6;
	// bl 0x832f5930
	ctx.lr = 0x83278528;
	sub_832F5930(ctx, base);
	// li r11,-1
	ctx.r11.s64 = -1;
	// stw r11,10656(r31)
	PPC_STORE_U32(ctx.r31.u32 + 10656, ctx.r11.u32);
loc_83278530:
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

__attribute__((alias("__imp__sub_83278544"))) PPC_WEAK_FUNC(sub_83278544);
PPC_FUNC_IMPL(__imp__sub_83278544) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83278548"))) PPC_WEAK_FUNC(sub_83278548);
PPC_FUNC_IMPL(__imp__sub_83278548) {
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
	// mr r6,r5
	ctx.r6.u64 = ctx.r5.u64;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// li r3,5
	ctx.r3.s64 = 5;
	// bl 0x832f5858
	ctx.lr = 0x83278570;
	sub_832F5858(ctx, base);
	// lis r11,-31827
	ctx.r11.s64 = -2085814272;
	// addi r10,r11,10956
	ctx.r10.s64 = ctx.r11.s64 + 10956;
	// stw r31,10956(r11)
	PPC_STORE_U32(ctx.r11.u32 + 10956, ctx.r31.u32);
	// stw r3,-4(r10)
	PPC_STORE_U32(ctx.r10.u32 + -4, ctx.r3.u32);
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

__attribute__((alias("__imp__sub_83278594"))) PPC_WEAK_FUNC(sub_83278594);
PPC_FUNC_IMPL(__imp__sub_83278594) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83278598"))) PPC_WEAK_FUNC(sub_83278598);
PPC_FUNC_IMPL(__imp__sub_83278598) {
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
	// lwz r4,10952(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 10952);
	// cmpwi cr6,r4,-1
	ctx.cr6.compare<int32_t>(ctx.r4.s32, -1, ctx.xer);
	// beq cr6,0x832785c8
	if (ctx.cr6.eq) goto loc_832785C8;
	// li r3,5
	ctx.r3.s64 = 5;
	// bl 0x832f5930
	ctx.lr = 0x832785C0;
	sub_832F5930(ctx, base);
	// li r11,-1
	ctx.r11.s64 = -1;
	// stw r11,10952(r31)
	PPC_STORE_U32(ctx.r31.u32 + 10952, ctx.r11.u32);
loc_832785C8:
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

__attribute__((alias("__imp__sub_832785DC"))) PPC_WEAK_FUNC(sub_832785DC);
PPC_FUNC_IMPL(__imp__sub_832785DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832785E0"))) PPC_WEAK_FUNC(sub_832785E0);
PPC_FUNC_IMPL(__imp__sub_832785E0) {
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
	// lwz r3,10964(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 10964);
	// bl 0x832f40c0
	ctx.lr = 0x832785F8;
	sub_832F40C0(ctx, base);
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

__attribute__((alias("__imp__sub_8327860C"))) PPC_WEAK_FUNC(sub_8327860C);
PPC_FUNC_IMPL(__imp__sub_8327860C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83278610"))) PPC_WEAK_FUNC(sub_83278610);
PPC_FUNC_IMPL(__imp__sub_83278610) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31827
	ctx.r11.s64 = -2085814272;
	// lwz r3,10964(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 10964);
	// b 0x832f4158
	sub_832F4158(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8327861C"))) PPC_WEAK_FUNC(sub_8327861C);
PPC_FUNC_IMPL(__imp__sub_8327861C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83278620"))) PPC_WEAK_FUNC(sub_83278620);
PPC_FUNC_IMPL(__imp__sub_83278620) {
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
	// lwz r3,10968(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 10968);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8327864c
	if (ctx.cr6.eq) goto loc_8327864C;
	// bl 0x832f4030
	ctx.lr = 0x83278644;
	sub_832F4030(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,10968(r31)
	PPC_STORE_U32(ctx.r31.u32 + 10968, ctx.r11.u32);
loc_8327864C:
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

__attribute__((alias("__imp__sub_83278660"))) PPC_WEAK_FUNC(sub_83278660);
PPC_FUNC_IMPL(__imp__sub_83278660) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31827
	ctx.r11.s64 = -2085814272;
	// lwz r3,10968(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 10968);
	// b 0x832f40c0
	sub_832F40C0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8327866C"))) PPC_WEAK_FUNC(sub_8327866C);
PPC_FUNC_IMPL(__imp__sub_8327866C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83278670"))) PPC_WEAK_FUNC(sub_83278670);
PPC_FUNC_IMPL(__imp__sub_83278670) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31827
	ctx.r11.s64 = -2085814272;
	// lwz r3,10968(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 10968);
	// b 0x832f4158
	sub_832F4158(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8327867C"))) PPC_WEAK_FUNC(sub_8327867C);
PPC_FUNC_IMPL(__imp__sub_8327867C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83278680"))) PPC_WEAK_FUNC(sub_83278680);
PPC_FUNC_IMPL(__imp__sub_83278680) {
	PPC_FUNC_PROLOGUE();
	// b 0x832f57e0
	sub_832F57E0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83278684"))) PPC_WEAK_FUNC(sub_83278684);
PPC_FUNC_IMPL(__imp__sub_83278684) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83278688"))) PPC_WEAK_FUNC(sub_83278688);
PPC_FUNC_IMPL(__imp__sub_83278688) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x833a01ac
	ctx.lr = 0x83278690;
	__savegprlr_29(ctx, base);
	// std r4,24(r1)
	PPC_STORE_U64(ctx.r1.u32 + 24, ctx.r4.u64);
	// std r5,32(r1)
	PPC_STORE_U64(ctx.r1.u32 + 32, ctx.r5.u64);
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
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31827
	ctx.r11.s64 = -2085814272;
	// stw r3,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, ctx.r3.u32);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r31,r11,10696
	ctx.r31.s64 = ctx.r11.s64 + 10696;
	// li r5,256
	ctx.r5.s64 = 256;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x833a2b30
	ctx.lr = 0x832786D0;
	sub_833A2B30(ctx, base);
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// addi r10,r1,152
	ctx.r10.s64 = ctx.r1.s64 + 152;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// lwz r5,80(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x833ab670
	ctx.lr = 0x832786EC;
	sub_833AB670(ctx, base);
	// lis r30,-31816
	ctx.r30.s64 = -2085093376;
	// lis r11,-31845
	ctx.r11.s64 = -2086993920;
	// addi r29,r11,-1608
	ctx.r29.s64 = ctx.r11.s64 + -1608;
	// lwz r3,13264(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 13264);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8327871c
	if (ctx.cr6.eq) goto loc_8327871C;
	// stw r31,12(r29)
	PPC_STORE_U32(ctx.r29.u32 + 12, ctx.r31.u32);
	// addi r4,r29,4
	ctx.r4.s64 = ctx.r29.s64 + 4;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,36(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8327871C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8327871C:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x832ff8c8
	ctx.lr = 0x83278724;
	sub_832FF8C8(ctx, base);
	// lwz r3,13264(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 13264);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x83278744
	if (ctx.cr6.eq) goto loc_83278744;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r4,r29,108
	ctx.r4.s64 = ctx.r29.s64 + 108;
	// lwz r11,36(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x83278744;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_83278744:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x833a01fc
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8327874C"))) PPC_WEAK_FUNC(sub_8327874C);
PPC_FUNC_IMPL(__imp__sub_8327874C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83278750"))) PPC_WEAK_FUNC(sub_83278750);
PPC_FUNC_IMPL(__imp__sub_83278750) {
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
	// lis r11,-31827
	ctx.r11.s64 = -2085814272;
	// li r4,32
	ctx.r4.s64 = 32;
	// addi r31,r11,10624
	ctx.r31.s64 = ctx.r11.s64 + 10624;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x832f3f50
	ctx.lr = 0x83278774;
	sub_832F3F50(ctx, base);
	// stw r3,344(r31)
	PPC_STORE_U32(ctx.r31.u32 + 344, ctx.r3.u32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne 0x8327878c
	if (!ctx.cr0.eq) goto loc_8327878C;
	// lis r11,-32219
	ctx.r11.s64 = -2111504384;
	// addi r3,r11,16996
	ctx.r3.s64 = ctx.r11.s64 + 16996;
	// bl 0x83278688
	ctx.lr = 0x8327878C;
	sub_83278688(ctx, base);
loc_8327878C:
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

__attribute__((alias("__imp__sub_832787A0"))) PPC_WEAK_FUNC(sub_832787A0);
PPC_FUNC_IMPL(__imp__sub_832787A0) {
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
	// addi r3,r3,1504
	ctx.r3.s64 = ctx.r3.s64 + 1504;
	// lwz r11,1504(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1504);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x832787d8
	if (!ctx.cr6.eq) goto loc_832787D8;
	// bl 0x8326e908
	ctx.lr = 0x832787C8;
	sub_8326E908(ctx, base);
	// cmpwi cr6,r3,4
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 4, ctx.xer);
	// bne cr6,0x832787d8
	if (!ctx.cr6.eq) goto loc_832787D8;
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x832787fc
	goto loc_832787FC;
loc_832787D8:
	// lwz r11,1544(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1544);
	// addi r3,r31,1544
	ctx.r3.s64 = ctx.r31.s64 + 1544;
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x832787f8
	if (!ctx.cr6.eq) goto loc_832787F8;
	// bl 0x8326e908
	ctx.lr = 0x832787EC;
	sub_8326E908(ctx, base);
	// cmpwi cr6,r3,4
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 4, ctx.xer);
	// li r3,1
	ctx.r3.s64 = 1;
	// beq cr6,0x832787fc
	if (ctx.cr6.eq) goto loc_832787FC;
loc_832787F8:
	// li r3,0
	ctx.r3.s64 = 0;
loc_832787FC:
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

__attribute__((alias("__imp__sub_83278810"))) PPC_WEAK_FUNC(sub_83278810);
PPC_FUNC_IMPL(__imp__sub_83278810) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x833a01ac
	ctx.lr = 0x83278818;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r3,96(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 96);
	// bl 0x83274c50
	ctx.lr = 0x83278828;
	sub_83274C50(ctx, base);
	// cmpwi cr6,r3,3
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 3, ctx.xer);
	// bne cr6,0x832788f4
	if (!ctx.cr6.eq) goto loc_832788F4;
	// lwz r11,1504(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1504);
	// addi r29,r31,1504
	ctx.r29.s64 = ctx.r31.s64 + 1504;
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x83278870
	if (!ctx.cr6.eq) goto loc_83278870;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8326e908
	ctx.lr = 0x83278848;
	sub_8326E908(ctx, base);
	// cmpwi cr6,r3,2
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 2, ctx.xer);
	// beq cr6,0x83278870
	if (ctx.cr6.eq) goto loc_83278870;
	// lwz r3,20(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 20);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,36(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x83278868;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x832788f4
	if (!ctx.cr0.eq) goto loc_832788F4;
loc_83278870:
	// lwz r11,1544(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1544);
	// addi r30,r31,1544
	ctx.r30.s64 = ctx.r31.s64 + 1544;
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x832788b0
	if (!ctx.cr6.eq) goto loc_832788B0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8326e908
	ctx.lr = 0x83278888;
	sub_8326E908(ctx, base);
	// cmpwi cr6,r3,2
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 2, ctx.xer);
	// beq cr6,0x832788b0
	if (ctx.cr6.eq) goto loc_832788B0;
	// lwz r3,20(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 20);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,36(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x832788A8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x832788f4
	if (!ctx.cr0.eq) goto loc_832788F4;
loc_832788B0:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8326f708
	ctx.lr = 0x832788B8;
	sub_8326F708(ctx, base);
	// lbz r11,154(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 154);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x832788d0
	if (!ctx.cr0.eq) goto loc_832788D0;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8326fcb0
	ctx.lr = 0x832788D0;
	sub_8326FCB0(ctx, base);
loc_832788D0:
	// lbz r11,154(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 154);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x832788f4
	if (!ctx.cr0.eq) goto loc_832788F4;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8326e970
	ctx.lr = 0x832788E8;
	sub_8326E970(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8326e970
	ctx.lr = 0x832788F4;
	sub_8326E970(ctx, base);
loc_832788F4:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x833a01fc
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832788FC"))) PPC_WEAK_FUNC(sub_832788FC);
PPC_FUNC_IMPL(__imp__sub_832788FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83278900"))) PPC_WEAK_FUNC(sub_83278900);
PPC_FUNC_IMPL(__imp__sub_83278900) {
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
	// lwz r3,96(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 96);
	// bl 0x83274c50
	ctx.lr = 0x8327891C;
	sub_83274C50(ctx, base);
	// cmpwi cr6,r3,3
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 3, ctx.xer);
	// bne cr6,0x83278944
	if (!ctx.cr6.eq) goto loc_83278944;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8326f708
	ctx.lr = 0x8327892C;
	sub_8326F708(ctx, base);
	// lbz r11,154(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 154);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x83278944
	if (!ctx.cr0.eq) goto loc_83278944;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8326fcb0
	ctx.lr = 0x83278944;
	sub_8326FCB0(ctx, base);
loc_83278944:
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

__attribute__((alias("__imp__sub_83278958"))) PPC_WEAK_FUNC(sub_83278958);
PPC_FUNC_IMPL(__imp__sub_83278958) {
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
	// bl 0x83276a88
	ctx.lr = 0x83278974;
	sub_83276A88(ctx, base);
	// cmpwi cr6,r3,2
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 2, ctx.xer);
	// bne cr6,0x83278984
	if (!ctx.cr6.eq) goto loc_83278984;
	// li r3,-1
	ctx.r3.s64 = -1;
	// b 0x83278a10
	goto loc_83278A10;
loc_83278984:
	// lwz r11,1664(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1664);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x83278a0c
	if (ctx.cr6.eq) goto loc_83278A0C;
	// lwz r3,1288(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1288);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x832789ac
	if (ctx.cr6.eq) goto loc_832789AC;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,20(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x832789AC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_832789AC:
	// lwz r7,1284(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1284);
	// lwz r6,1280(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1280);
	// lwz r5,1276(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1276);
	// lwz r3,100(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 100);
	// lwz r4,1264(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1264);
	// bl 0x832769f0
	ctx.lr = 0x832789C4;
	sub_832769F0(ctx, base);
	// lwz r3,100(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 100);
	// bl 0x83276a48
	ctx.lr = 0x832789CC;
	sub_83276A48(ctx, base);
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// bne cr6,0x83278a04
	if (!ctx.cr6.eq) goto loc_83278A04;
	// li r11,4
	ctx.r11.s64 = 4;
	// li r3,-102
	ctx.r3.s64 = -102;
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// bl 0x8326ef70
	ctx.lr = 0x832789E4;
	sub_8326EF70(ctx, base);
	// lis r11,-32219
	ctx.r11.s64 = -2111504384;
	// lwz r4,1264(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1264);
	// addi r3,r11,17116
	ctx.r3.s64 = ctx.r11.s64 + 17116;
	// bl 0x83278688
	ctx.lr = 0x832789F4;
	sub_83278688(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// li r3,-1
	ctx.r3.s64 = -1;
	// stw r11,1272(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1272, ctx.r11.u32);
	// b 0x83278a10
	goto loc_83278A10;
loc_83278A04:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x832730a0
	ctx.lr = 0x83278A0C;
	sub_832730A0(ctx, base);
loc_83278A0C:
	// li r3,1
	ctx.r3.s64 = 1;
loc_83278A10:
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

__attribute__((alias("__imp__sub_83278A24"))) PPC_WEAK_FUNC(sub_83278A24);
PPC_FUNC_IMPL(__imp__sub_83278A24) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83278A28"))) PPC_WEAK_FUNC(sub_83278A28);
PPC_FUNC_IMPL(__imp__sub_83278A28) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x833a01a8
	ctx.lr = 0x83278A30;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,1664(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1664);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r3,96(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 96);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x83278ab8
	if (!ctx.cr6.eq) goto loc_83278AB8;
	// bl 0x83274c50
	ctx.lr = 0x83278A4C;
	sub_83274C50(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r30,4
	ctx.r30.s64 = 4;
	// li r29,4
	ctx.r29.s64 = 4;
	// bl 0x8326e558
	ctx.lr = 0x83278A64;
	sub_8326E558(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x83278a78
	if (ctx.cr0.eq) goto loc_83278A78;
	// addi r3,r31,1504
	ctx.r3.s64 = ctx.r31.s64 + 1504;
	// bl 0x8326e908
	ctx.lr = 0x83278A74;
	sub_8326E908(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
loc_83278A78:
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8326e558
	ctx.lr = 0x83278A84;
	sub_8326E558(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x83278a98
	if (ctx.cr0.eq) goto loc_83278A98;
	// addi r3,r31,1544
	ctx.r3.s64 = ctx.r31.s64 + 1544;
	// bl 0x8326e908
	ctx.lr = 0x83278A94;
	sub_8326E908(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
loc_83278A98:
	// cmpwi cr6,r28,6
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 6, ctx.xer);
	// bne cr6,0x83278ab8
	if (!ctx.cr6.eq) goto loc_83278AB8;
	// cmpwi cr6,r30,2
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 2, ctx.xer);
	// beq cr6,0x83278ab8
	if (ctx.cr6.eq) goto loc_83278AB8;
	// cmpwi cr6,r29,2
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 2, ctx.xer);
	// beq cr6,0x83278ab8
	if (ctx.cr6.eq) goto loc_83278AB8;
	// li r11,3
	ctx.r11.s64 = 3;
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
loc_83278AB8:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x833a01f8
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83278AC0"))) PPC_WEAK_FUNC(sub_83278AC0);
PPC_FUNC_IMPL(__imp__sub_83278AC0) {
	PPC_FUNC_PROLOGUE();
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
	// li r30,4
	ctx.r30.s64 = 4;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x83278af8
	if (ctx.cr6.eq) goto loc_83278AF8;
	// bl 0x83276998
	ctx.lr = 0x83278AEC;
	sub_83276998(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x83278af8
	if (ctx.cr0.eq) goto loc_83278AF8;
	// stw r30,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r30.u32);
loc_83278AF8:
	// lwz r3,108(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 108);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x83278b14
	if (ctx.cr6.eq) goto loc_83278B14;
	// bl 0x83272398
	ctx.lr = 0x83278B08;
	sub_83272398(ctx, base);
	// cmpwi cr6,r3,1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 1, ctx.xer);
	// bne cr6,0x83278b14
	if (!ctx.cr6.eq) goto loc_83278B14;
	// stw r30,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r30.u32);
loc_83278B14:
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

__attribute__((alias("__imp__sub_83278B2C"))) PPC_WEAK_FUNC(sub_83278B2C);
PPC_FUNC_IMPL(__imp__sub_83278B2C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83278B30"))) PPC_WEAK_FUNC(sub_83278B30);
PPC_FUNC_IMPL(__imp__sub_83278B30) {
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
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x83278ba0
	if (ctx.cr6.eq) goto loc_83278BA0;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// beq cr6,0x83278ba0
	if (ctx.cr6.eq) goto loc_83278BA0;
	// bl 0x8326e348
	ctx.lr = 0x83278B5C;
	sub_8326E348(ctx, base);
	// bl 0x8327e0b0
	ctx.lr = 0x83278B60;
	sub_8327E0B0(ctx, base);
	// cmpwi cr6,r3,1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 1, ctx.xer);
	// bne cr6,0x83278ba0
	if (!ctx.cr6.eq) goto loc_83278BA0;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8326e558
	ctx.lr = 0x83278B74;
	sub_8326E558(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x83278b84
	if (ctx.cr0.eq) goto loc_83278B84;
	// addi r3,r31,1504
	ctx.r3.s64 = ctx.r31.s64 + 1504;
	// bl 0x8326ea60
	ctx.lr = 0x83278B84;
	sub_8326EA60(ctx, base);
loc_83278B84:
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8326e558
	ctx.lr = 0x83278B90;
	sub_8326E558(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x83278ba0
	if (ctx.cr0.eq) goto loc_83278BA0;
	// addi r3,r31,1544
	ctx.r3.s64 = ctx.r31.s64 + 1544;
	// bl 0x8326ea60
	ctx.lr = 0x83278BA0;
	sub_8326EA60(ctx, base);
loc_83278BA0:
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

__attribute__((alias("__imp__sub_83278BB4"))) PPC_WEAK_FUNC(sub_83278BB4);
PPC_FUNC_IMPL(__imp__sub_83278BB4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83278BB8"))) PPC_WEAK_FUNC(sub_83278BB8);
PPC_FUNC_IMPL(__imp__sub_83278BB8) {
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
	// lwz r11,10976(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 10976);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x83278be0
	if (!ctx.cr6.eq) goto loc_83278BE0;
	// lis r11,-31827
	ctx.r11.s64 = -2085814272;
	// lwz r3,10980(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 10980);
	// b 0x83278be8
	goto loc_83278BE8;
loc_83278BE0:
	// bl 0x8326ecf0
	ctx.lr = 0x83278BE4;
	sub_8326ECF0(ctx, base);
	// lwz r3,16(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
loc_83278BE8:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83278BF8"))) PPC_WEAK_FUNC(sub_83278BF8);
PPC_FUNC_IMPL(__imp__sub_83278BF8) {
	PPC_FUNC_PROLOGUE();
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
	// lis r9,-31816
	ctx.r9.s64 = -2085093376;
	// lis r8,-31827
	ctx.r8.s64 = -2085814272;
	// lis r31,-31827
	ctx.r31.s64 = -2085814272;
	// lwz r10,10788(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 10788);
	// lwz r11,10972(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 10972);
	// addi r7,r10,1
	ctx.r7.s64 = ctx.r10.s64 + 1;
	// lwz r10,10132(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 10132);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmpwi cr6,r10,1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 1, ctx.xer);
	// stw r7,10788(r9)
	PPC_STORE_U32(ctx.r9.u32 + 10788, ctx.r7.u32);
	// stw r11,10972(r8)
	PPC_STORE_U32(ctx.r8.u32 + 10972, ctx.r11.u32);
	// bne cr6,0x83278c6c
	if (!ctx.cr6.eq) goto loc_83278C6C;
	// bl 0x8326ecf0
	ctx.lr = 0x83278C40;
	sub_8326ECF0(ctx, base);
	// addi r30,r3,88
	ctx.r30.s64 = ctx.r3.s64 + 88;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x83278680
	ctx.lr = 0x83278C4C;
	sub_83278680(ctx, base);
	// cmpwi cr6,r3,1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 1, ctx.xer);
	// bne cr6,0x83278c6c
	if (!ctx.cr6.eq) goto loc_83278C6C;
	// lwz r11,10132(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 10132);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x83278c64
	if (!ctx.cr6.eq) goto loc_83278C64;
	// bl 0x8327db00
	ctx.lr = 0x83278C64;
	sub_8327DB00(ctx, base);
loc_83278C64:
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
loc_83278C6C:
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

__attribute__((alias("__imp__sub_83278C84"))) PPC_WEAK_FUNC(sub_83278C84);
PPC_FUNC_IMPL(__imp__sub_83278C84) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83278C88"))) PPC_WEAK_FUNC(sub_83278C88);
PPC_FUNC_IMPL(__imp__sub_83278C88) {
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
	ctx.lr = 0x83278C98;
	sub_8326ECF0(ctx, base);
	// lwz r11,60(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 60);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x83278cb0
	if (ctx.cr6.eq) goto loc_83278CB0;
	// lwz r3,64(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 64);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x83278CB0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_83278CB0:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83278CC0"))) PPC_WEAK_FUNC(sub_83278CC0);
PPC_FUNC_IMPL(__imp__sub_83278CC0) {
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
	ctx.lr = 0x83278CD0;
	sub_8326ECF0(ctx, base);
	// lwz r11,68(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 68);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x83278ce8
	if (ctx.cr6.eq) goto loc_83278CE8;
	// lwz r3,72(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 72);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x83278CE8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_83278CE8:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83278CF8"))) PPC_WEAK_FUNC(sub_83278CF8);
PPC_FUNC_IMPL(__imp__sub_83278CF8) {
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
	ctx.lr = 0x83278D08;
	sub_8326ECF0(ctx, base);
	// lwz r11,76(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 76);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x83278d20
	if (ctx.cr6.eq) goto loc_83278D20;
	// lwz r3,80(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 80);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x83278D20;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_83278D20:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83278D30"))) PPC_WEAK_FUNC(sub_83278D30);
PPC_FUNC_IMPL(__imp__sub_83278D30) {
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
	// bl 0x8326ecf0
	ctx.lr = 0x83278D48;
	sub_8326ECF0(ctx, base);
	// stw r31,84(r3)
	PPC_STORE_U32(ctx.r3.u32 + 84, ctx.r31.u32);
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

__attribute__((alias("__imp__sub_83278D60"))) PPC_WEAK_FUNC(sub_83278D60);
PPC_FUNC_IMPL(__imp__sub_83278D60) {
	PPC_FUNC_PROLOGUE();
	// stw r4,132(r3)
	PPC_STORE_U32(ctx.r3.u32 + 132, ctx.r4.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83278D68"))) PPC_WEAK_FUNC(sub_83278D68);
PPC_FUNC_IMPL(__imp__sub_83278D68) {
	PPC_FUNC_PROLOGUE();
	// stw r4,136(r3)
	PPC_STORE_U32(ctx.r3.u32 + 136, ctx.r4.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83278D70"))) PPC_WEAK_FUNC(sub_83278D70);
PPC_FUNC_IMPL(__imp__sub_83278D70) {
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
	// bl 0x8326df70
	ctx.lr = 0x83278D88;
	sub_8326DF70(ctx, base);
	// cmpwi cr6,r3,1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 1, ctx.xer);
	// beq cr6,0x83278da4
	if (ctx.cr6.eq) goto loc_83278DA4;
	// lis r11,-32219
	ctx.r11.s64 = -2111504384;
	// addi r3,r11,17160
	ctx.r3.s64 = ctx.r11.s64 + 17160;
	// bl 0x83278688
	ctx.lr = 0x83278D9C;
	sub_83278688(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x83278db8
	goto loc_83278DB8;
loc_83278DA4:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82a3bd58
	ctx.lr = 0x83278DAC;
	sub_82A3BD58(ctx, base);
	// addi r11,r3,-1
	ctx.r11.s64 = ctx.r3.s64 + -1;
	// addic r10,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// subfe r3,r10,r11
	temp.u8 = (~ctx.r10.u32 + ctx.r11.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r3.u64 = ~ctx.r10.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
loc_83278DB8:
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

__attribute__((alias("__imp__sub_83278DCC"))) PPC_WEAK_FUNC(sub_83278DCC);
PPC_FUNC_IMPL(__imp__sub_83278DCC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83278DD0"))) PPC_WEAK_FUNC(sub_83278DD0);
PPC_FUNC_IMPL(__imp__sub_83278DD0) {
	PPC_FUNC_PROLOGUE();
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
	// bl 0x8326ecf0
	ctx.lr = 0x83278DF0;
	sub_8326ECF0(ctx, base);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x83278dfc
	if (ctx.cr6.eq) goto loc_83278DFC;
	// stw r30,128(r31)
	PPC_STORE_U32(ctx.r31.u32 + 128, ctx.r30.u32);
loc_83278DFC:
	// stw r30,36(r3)
	PPC_STORE_U32(ctx.r3.u32 + 36, ctx.r30.u32);
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

__attribute__((alias("__imp__sub_83278E18"))) PPC_WEAK_FUNC(sub_83278E18);
PPC_FUNC_IMPL(__imp__sub_83278E18) {
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
	ctx.lr = 0x83278E28;
	sub_8326ECF0(ctx, base);
	// lwz r3,36(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 36);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83278E3C"))) PPC_WEAK_FUNC(sub_83278E3C);
PPC_FUNC_IMPL(__imp__sub_83278E3C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83278E40"))) PPC_WEAK_FUNC(sub_83278E40);
PPC_FUNC_IMPL(__imp__sub_83278E40) {
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
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x832723e0
	ctx.lr = 0x83278E5C;
	sub_832723E0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83283740
	ctx.lr = 0x83278E64;
	sub_83283740(ctx, base);
	// bl 0x83276a50
	ctx.lr = 0x83278E68;
	sub_83276A50(ctx, base);
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

__attribute__((alias("__imp__sub_83278E7C"))) PPC_WEAK_FUNC(sub_83278E7C);
PPC_FUNC_IMPL(__imp__sub_83278E7C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83278E80"))) PPC_WEAK_FUNC(sub_83278E80);
PPC_FUNC_IMPL(__imp__sub_83278E80) {
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
	// bl 0x83283740
	ctx.lr = 0x83278E90;
	sub_83283740(ctx, base);
	// bl 0x832769d8
	ctx.lr = 0x83278E94;
	sub_832769D8(ctx, base);
	// addi r11,r3,-1
	ctx.r11.s64 = ctx.r3.s64 + -1;
	// addic r10,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// subfe r3,r10,r11
	temp.u8 = (~ctx.r10.u32 + ctx.r11.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r3.u64 = ~ctx.r10.u64 + ctx.r11.u64 + ctx.xer.ca;
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

__attribute__((alias("__imp__sub_83278EB0"))) PPC_WEAK_FUNC(sub_83278EB0);
PPC_FUNC_IMPL(__imp__sub_83278EB0) {
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
	// bl 0x8326ecf0
	ctx.lr = 0x83278EC8;
	sub_8326ECF0(ctx, base);
	// stw r31,16488(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16488, ctx.r31.u32);
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

__attribute__((alias("__imp__sub_83278EE0"))) PPC_WEAK_FUNC(sub_83278EE0);
PPC_FUNC_IMPL(__imp__sub_83278EE0) {
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
	ctx.lr = 0x83278EF0;
	sub_8326ECF0(ctx, base);
	// lwz r3,16488(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16488);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83278F04"))) PPC_WEAK_FUNC(sub_83278F04);
PPC_FUNC_IMPL(__imp__sub_83278F04) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83278F08"))) PPC_WEAK_FUNC(sub_83278F08);
PPC_FUNC_IMPL(__imp__sub_83278F08) {
	PPC_FUNC_PROLOGUE();
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
	// lwz r11,10132(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 10132);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x83278f64
	if (!ctx.cr6.eq) goto loc_83278F64;
	// bl 0x8326ecf0
	ctx.lr = 0x83278F30;
	sub_8326ECF0(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x83278ee0
	ctx.lr = 0x83278F38;
	sub_83278EE0(ctx, base);
	// cmpwi cr6,r3,1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 1, ctx.xer);
	// beq cr6,0x83278f64
	if (ctx.cr6.eq) goto loc_83278F64;
	// addi r31,r31,104
	ctx.r31.s64 = ctx.r31.s64 + 104;
	// li r30,8
	ctx.r30.s64 = 8;
loc_83278F48:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x83278f58
	if (ctx.cr6.eq) goto loc_83278F58;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83272a60
	ctx.lr = 0x83278F58;
	sub_83272A60(ctx, base);
loc_83278F58:
	// addic. r30,r30,-1
	ctx.xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// addi r31,r31,2048
	ctx.r31.s64 = ctx.r31.s64 + 2048;
	// bne 0x83278f48
	if (!ctx.cr0.eq) goto loc_83278F48;
loc_83278F64:
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

__attribute__((alias("__imp__sub_83278F7C"))) PPC_WEAK_FUNC(sub_83278F7C);
PPC_FUNC_IMPL(__imp__sub_83278F7C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83278F80"))) PPC_WEAK_FUNC(sub_83278F80);
PPC_FUNC_IMPL(__imp__sub_83278F80) {
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
	// lwz r11,1324(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1324);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8327900c
	if (ctx.cr6.eq) goto loc_8327900C;
	// rotlwi r3,r11,0
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
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
	ctx.lr = 0x83278FC4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,1344(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1344);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x8327900c
	if (!ctx.cr6.eq) goto loc_8327900C;
	// lwz r3,1324(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1324);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,36(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x83278FE8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,3
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 3, ctx.xer);
	// bgt cr6,0x8327900c
	if (ctx.cr6.gt) goto loc_8327900C;
	// lwz r3,1324(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1324);
	// addi r5,r31,1336
	ctx.r5.s64 = ctx.r31.s64 + 1336;
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,32(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8327900C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8327900C:
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

__attribute__((alias("__imp__sub_83279020"))) PPC_WEAK_FUNC(sub_83279020);
PPC_FUNC_IMPL(__imp__sub_83279020) {
	PPC_FUNC_PROLOGUE();
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
	// lwz r11,10132(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 10132);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x832790bc
	if (!ctx.cr6.eq) goto loc_832790BC;
	// bl 0x8326ecf0
	ctx.lr = 0x83279048;
	sub_8326ECF0(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x83278ee0
	ctx.lr = 0x83279050;
	sub_83278EE0(ctx, base);
	// cmpwi cr6,r3,1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 1, ctx.xer);
	// beq cr6,0x832790bc
	if (ctx.cr6.eq) goto loc_832790BC;
	// addi r31,r31,104
	ctx.r31.s64 = ctx.r31.s64 + 104;
	// li r30,8
	ctx.r30.s64 = 8;
loc_83279060:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x832790b0
	if (ctx.cr6.eq) goto loc_832790B0;
	// lwz r11,1272(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1272);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x8327908c
	if (!ctx.cr6.eq) goto loc_8327908C;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83278958
	ctx.lr = 0x8327907C;
	sub_83278958(ctx, base);
	// cmpwi cr6,r3,1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 1, ctx.xer);
	// bne cr6,0x8327908c
	if (!ctx.cr6.eq) goto loc_8327908C;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,1272(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1272, ctx.r11.u32);
loc_8327908C:
	// lwz r11,1664(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1664);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x832790b0
	if (!ctx.cr6.eq) goto loc_832790B0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8326fc68
	ctx.lr = 0x832790A0;
	sub_8326FC68(ctx, base);
	// cmpwi cr6,r3,1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 1, ctx.xer);
	// bne cr6,0x832790b0
	if (!ctx.cr6.eq) goto loc_832790B0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x832700b0
	ctx.lr = 0x832790B0;
	sub_832700B0(ctx, base);
loc_832790B0:
	// addic. r30,r30,-1
	ctx.xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// addi r31,r31,2048
	ctx.r31.s64 = ctx.r31.s64 + 2048;
	// bne 0x83279060
	if (!ctx.cr0.eq) goto loc_83279060;
loc_832790BC:
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

__attribute__((alias("__imp__sub_832790D4"))) PPC_WEAK_FUNC(sub_832790D4);
PPC_FUNC_IMPL(__imp__sub_832790D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832790D8"))) PPC_WEAK_FUNC(sub_832790D8);
PPC_FUNC_IMPL(__imp__sub_832790D8) {
	PPC_FUNC_PROLOGUE();
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
	// li r31,0
	ctx.r31.s64 = 0;
loc_832790F4:
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x83278dd0
	ctx.lr = 0x83279100;
	sub_83278DD0(ctx, base);
	// bl 0x832ed0b8
	ctx.lr = 0x83279104;
	sub_832ED0B8(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x83278dd0
	ctx.lr = 0x83279110;
	sub_83278DD0(ctx, base);
	// lwz r11,132(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 132);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x83279128
	if (!ctx.cr6.eq) goto loc_83279128;
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// cmpwi cr6,r31,10
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 10, ctx.xer);
	// blt cr6,0x832790f4
	if (ctx.cr6.lt) goto loc_832790F4;
loc_83279128:
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

__attribute__((alias("__imp__sub_83279140"))) PPC_WEAK_FUNC(sub_83279140);
PPC_FUNC_IMPL(__imp__sub_83279140) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,1504(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1504);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x8327915c
	if (ctx.cr6.eq) goto loc_8327915C;
	// lwz r11,1544(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1544);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x8327915c
	if (ctx.cr6.eq) goto loc_8327915C;
	// b 0x83278900
	sub_83278900(ctx, base);
	return;
loc_8327915C:
	// b 0x83278810
	sub_83278810(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83279160"))) PPC_WEAK_FUNC(sub_83279160);
PPC_FUNC_IMPL(__imp__sub_83279160) {
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
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x83279188
	if (ctx.cr6.eq) goto loc_83279188;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// bne cr6,0x832791e4
	if (!ctx.cr6.eq) goto loc_832791E4;
loc_83279188:
	// lbz r11,153(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 153);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// bne cr6,0x832791b4
	if (!ctx.cr6.eq) goto loc_832791B4;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83272298
	ctx.lr = 0x8327919C;
	sub_83272298(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x832791b4
	if (!ctx.cr0.eq) goto loc_832791B4;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8326f758
	ctx.lr = 0x832791AC;
	sub_8326F758(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stb r11,153(r31)
	PPC_STORE_U8(ctx.r31.u32 + 153, ctx.r11.u8);
loc_832791B4:
	// lbz r11,152(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 152);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x832791e4
	if (!ctx.cr0.eq) goto loc_832791E4;
	// lbz r11,153(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 153);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x832791e4
	if (!ctx.cr0.eq) goto loc_832791E4;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83272298
	ctx.lr = 0x832791D4;
	sub_83272298(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x832791e4
	if (!ctx.cr0.eq) goto loc_832791E4;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8326fac0
	ctx.lr = 0x832791E4;
	sub_8326FAC0(ctx, base);
loc_832791E4:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83278b30
	ctx.lr = 0x832791EC;
	sub_83278B30(ctx, base);
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

__attribute__((alias("__imp__sub_83279200"))) PPC_WEAK_FUNC(sub_83279200);
PPC_FUNC_IMPL(__imp__sub_83279200) {
	PPC_FUNC_PROLOGUE();
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
	// lis r31,-31816
	ctx.r31.s64 = -2085093376;
	// lis r11,-31845
	ctx.r11.s64 = -2086993920;
	// addi r30,r11,-312
	ctx.r30.s64 = ctx.r11.s64 + -312;
	// lwz r3,13264(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 13264);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x83279240
	if (ctx.cr6.eq) goto loc_83279240;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r4,r30,4
	ctx.r4.s64 = ctx.r30.s64 + 4;
	// lwz r11,36(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x83279240;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_83279240:
	// bl 0x83278bf8
	ctx.lr = 0x83279244;
	sub_83278BF8(ctx, base);
	// lwz r3,13264(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 13264);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x83279264
	if (ctx.cr6.eq) goto loc_83279264;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r4,r30,108
	ctx.r4.s64 = ctx.r30.s64 + 108;
	// lwz r11,36(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x83279264;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_83279264:
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

__attribute__((alias("__imp__sub_8327927C"))) PPC_WEAK_FUNC(sub_8327927C);
PPC_FUNC_IMPL(__imp__sub_8327927C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83279280"))) PPC_WEAK_FUNC(sub_83279280);
PPC_FUNC_IMPL(__imp__sub_83279280) {
	PPC_FUNC_PROLOGUE();
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
	// lwz r11,10132(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 10132);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x832792dc
	if (!ctx.cr6.eq) goto loc_832792DC;
	// bl 0x8326ecf0
	ctx.lr = 0x832792A8;
	sub_8326ECF0(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x83278ee0
	ctx.lr = 0x832792B0;
	sub_83278EE0(ctx, base);
	// cmpwi cr6,r3,1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 1, ctx.xer);
	// beq cr6,0x832792dc
	if (ctx.cr6.eq) goto loc_832792DC;
	// addi r31,r31,104
	ctx.r31.s64 = ctx.r31.s64 + 104;
	// li r30,8
	ctx.r30.s64 = 8;
loc_832792C0:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x832792d0
	if (ctx.cr6.eq) goto loc_832792D0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83278f80
	ctx.lr = 0x832792D0;
	sub_83278F80(ctx, base);
loc_832792D0:
	// addic. r30,r30,-1
	ctx.xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// addi r31,r31,2048
	ctx.r31.s64 = ctx.r31.s64 + 2048;
	// bne 0x832792c0
	if (!ctx.cr0.eq) goto loc_832792C0;
loc_832792DC:
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

__attribute__((alias("__imp__sub_832792F4"))) PPC_WEAK_FUNC(sub_832792F4);
PPC_FUNC_IMPL(__imp__sub_832792F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832792F8"))) PPC_WEAK_FUNC(sub_832792F8);
PPC_FUNC_IMPL(__imp__sub_832792F8) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,132(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 132);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// b 0x832790d8
	sub_832790D8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83279308"))) PPC_WEAK_FUNC(sub_83279308);
PPC_FUNC_IMPL(__imp__sub_83279308) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8327930C"))) PPC_WEAK_FUNC(sub_8327930C);
PPC_FUNC_IMPL(__imp__sub_8327930C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83279310"))) PPC_WEAK_FUNC(sub_83279310);
PPC_FUNC_IMPL(__imp__sub_83279310) {
	PPC_FUNC_PROLOGUE();
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
	// lwz r30,96(r3)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r3.u32 + 96);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x8326e038
	ctx.lr = 0x83279330;
	sub_8326E038(ctx, base);
	// lwz r11,1272(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1272);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x83279364
	if (ctx.cr6.eq) goto loc_83279364;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83279140
	ctx.lr = 0x83279344;
	sub_83279140(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x83274c50
	ctx.lr = 0x8327934C;
	sub_83274C50(ctx, base);
	// cmpwi cr6,r3,4
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 4, ctx.xer);
	// beq cr6,0x8327935c
	if (ctx.cr6.eq) goto loc_8327935C;
	// cmpwi cr6,r3,6
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 6, ctx.xer);
	// bne cr6,0x83279364
	if (!ctx.cr6.eq) goto loc_83279364;
loc_8327935C:
	// li r11,2
	ctx.r11.s64 = 2;
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
loc_83279364:
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

__attribute__((alias("__imp__sub_8327937C"))) PPC_WEAK_FUNC(sub_8327937C);
PPC_FUNC_IMPL(__imp__sub_8327937C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83279380"))) PPC_WEAK_FUNC(sub_83279380);
PPC_FUNC_IMPL(__imp__sub_83279380) {
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
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x832793b0
	if (ctx.cr6.eq) goto loc_832793B0;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// bne cr6,0x832793b8
	if (!ctx.cr6.eq) goto loc_832793B8;
	// bl 0x83278a28
	ctx.lr = 0x832793AC;
	sub_83278A28(ctx, base);
	// b 0x832793b8
	goto loc_832793B8;
loc_832793B0:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83279310
	ctx.lr = 0x832793B8;
	sub_83279310(ctx, base);
loc_832793B8:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83278ac0
	ctx.lr = 0x832793C0;
	sub_83278AC0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83279160
	ctx.lr = 0x832793C8;
	sub_83279160(ctx, base);
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

__attribute__((alias("__imp__sub_832793E0"))) PPC_WEAK_FUNC(sub_832793E0);
PPC_FUNC_IMPL(__imp__sub_832793E0) {
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
	// bl 0x83279200
	ctx.lr = 0x832793F0;
	sub_83279200(ctx, base);
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

__attribute__((alias("__imp__sub_83279404"))) PPC_WEAK_FUNC(sub_83279404);
PPC_FUNC_IMPL(__imp__sub_83279404) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83279408"))) PPC_WEAK_FUNC(sub_83279408);
PPC_FUNC_IMPL(__imp__sub_83279408) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x833a01ac
	ctx.lr = 0x83279410;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x83278d60
	ctx.lr = 0x83279420;
	sub_83278D60(ctx, base);
	// bl 0x8326df70
	ctx.lr = 0x83279424;
	sub_8326DF70(ctx, base);
	// cmpwi cr6,r3,1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 1, ctx.xer);
	// beq cr6,0x83279448
	if (ctx.cr6.eq) goto loc_83279448;
	// li r10,0
	ctx.r10.s64 = 0;
loc_83279430:
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83278d60
	ctx.lr = 0x8327943C;
	sub_83278D60(ctx, base);
	// mr r3,r10
	ctx.r3.u64 = ctx.r10.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x833a01fc
	__restgprlr_29(ctx, base);
	return;
loc_83279448:
	// lis r11,-31816
	ctx.r11.s64 = -2085093376;
	// lwz r30,96(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 96);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r31,10792(r11)
	PPC_STORE_U32(ctx.r11.u32 + 10792, ctx.r31.u32);
	// bl 0x83278d68
	ctx.lr = 0x83279460;
	sub_83278D68(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x832801f8
	ctx.lr = 0x83279468;
	sub_832801F8(ctx, base);
	// lwz r3,1324(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1324);
	// li r29,0
	ctx.r29.s64 = 0;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x83279488
	if (ctx.cr6.eq) goto loc_83279488;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x832ef798
	ctx.lr = 0x83279480;
	sub_832EF798(ctx, base);
	// stw r3,1348(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1348, ctx.r3.u32);
	// b 0x8327948c
	goto loc_8327948C;
loc_83279488:
	// stw r29,1348(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1348, ctx.r29.u32);
loc_8327948C:
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83278d68
	ctx.lr = 0x83279498;
	sub_83278D68(ctx, base);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x832794ac
	if (!ctx.cr6.eq) goto loc_832794AC;
	// stw r29,140(r31)
	PPC_STORE_U32(ctx.r31.u32 + 140, ctx.r29.u32);
	// b 0x832794bc
	goto loc_832794BC;
loc_832794AC:
	// li r11,1
	ctx.r11.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,140(r31)
	PPC_STORE_U32(ctx.r31.u32 + 140, ctx.r11.u32);
	// bl 0x83279380
	ctx.lr = 0x832794BC;
	sub_83279380(ctx, base);
loc_832794BC:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8327db30
	ctx.lr = 0x832794C4;
	sub_8327DB30(ctx, base);
	// addi r11,r3,-1
	ctx.r11.s64 = ctx.r3.s64 + -1;
	// addic r10,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// subfe r10,r10,r11
	temp.u8 = (~ctx.r10.u32 + ctx.r11.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r10.u64 = ~ctx.r10.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// b 0x83279430
	goto loc_83279430;
}

__attribute__((alias("__imp__sub_832794D4"))) PPC_WEAK_FUNC(sub_832794D4);
PPC_FUNC_IMPL(__imp__sub_832794D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832794D8"))) PPC_WEAK_FUNC(sub_832794D8);
PPC_FUNC_IMPL(__imp__sub_832794D8) {
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
	// bl 0x82c10e98
	ctx.lr = 0x832794F0;
	sub_82C10E98(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x83278dd0
	ctx.lr = 0x832794FC;
	sub_83278DD0(ctx, base);
	// bl 0x82c10e98
	ctx.lr = 0x83279500;
	sub_82C10E98(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x83278dd0
	ctx.lr = 0x8327950C;
	sub_83278DD0(ctx, base);
	// bl 0x82c10e98
	ctx.lr = 0x83279510;
	sub_82C10E98(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x832792f8
	ctx.lr = 0x83279518;
	sub_832792F8(ctx, base);
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

__attribute__((alias("__imp__sub_8327952C"))) PPC_WEAK_FUNC(sub_8327952C);
PPC_FUNC_IMPL(__imp__sub_8327952C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83279530"))) PPC_WEAK_FUNC(sub_83279530);
PPC_FUNC_IMPL(__imp__sub_83279530) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x833a01ac
	ctx.lr = 0x83279538;
	__savegprlr_29(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r31,-31816
	ctx.r31.s64 = -2085093376;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// lis r11,-31845
	ctx.r11.s64 = -2086993920;
	// addi r30,r11,-1392
	ctx.r30.s64 = ctx.r11.s64 + -1392;
	// lwz r3,13264(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 13264);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8327956c
	if (ctx.cr6.eq) goto loc_8327956C;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r4,r30,4
	ctx.r4.s64 = ctx.r30.s64 + 4;
	// lwz r11,36(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8327956C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8327956C:
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bl 0x832793e0
	ctx.lr = 0x8327957C;
	sub_832793E0(ctx, base);
	// lwz r11,13264(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 13264);
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x832795ac
	if (ctx.cr6.eq) goto loc_832795AC;
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// stw r10,116(r30)
	PPC_STORE_U32(ctx.r30.u32 + 116, ctx.r10.u32);
	// addi r4,r30,108
	ctx.r4.s64 = ctx.r30.s64 + 108;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r11,36(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x832795AC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_832795AC:
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x833a01fc
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832795B8"))) PPC_WEAK_FUNC(sub_832795B8);
PPC_FUNC_IMPL(__imp__sub_832795B8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x833a01ac
	ctx.lr = 0x832795C0;
	__savegprlr_29(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31827
	ctx.r11.s64 = -2085814272;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r11,10132(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 10132);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x832795e0
	if (ctx.cr6.eq) goto loc_832795E0;
loc_832795D8:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x832796ac
	goto loc_832796AC;
loc_832795E0:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne cr6,0x832795f8
	if (!ctx.cr6.eq) goto loc_832795F8;
	// lis r11,-32219
	ctx.r11.s64 = -2111504384;
	// addi r3,r11,17212
	ctx.r3.s64 = ctx.r11.s64 + 17212;
	// bl 0x83278688
	ctx.lr = 0x832795F4;
	sub_83278688(ctx, base);
	// b 0x832795d8
	goto loc_832795D8;
loc_832795F8:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8326df70
	ctx.lr = 0x83279600;
	sub_8326DF70(ctx, base);
	// cmpwi cr6,r3,1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 1, ctx.xer);
	// bne cr6,0x832795d8
	if (!ctx.cr6.eq) goto loc_832795D8;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82a3bd58
	ctx.lr = 0x83279610;
	sub_82A3BD58(ctx, base);
	// cmpwi cr6,r3,1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 1, ctx.xer);
	// beq cr6,0x832795d8
	if (ctx.cr6.eq) goto loc_832795D8;
	// bl 0x83278e18
	ctx.lr = 0x8327961C;
	sub_83278E18(ctx, base);
	// cmpwi cr6,r3,1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 1, ctx.xer);
	// beq cr6,0x832795d8
	if (ctx.cr6.eq) goto loc_832795D8;
	// lwz r11,1664(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1664);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x832795d8
	if (ctx.cr6.eq) goto loc_832795D8;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83273c10
	ctx.lr = 0x83279638;
	sub_83273C10(ctx, base);
	// lis r29,-31816
	ctx.r29.s64 = -2085093376;
	// lis r11,-31845
	ctx.r11.s64 = -2086993920;
	// addi r30,r11,-528
	ctx.r30.s64 = ctx.r11.s64 + -528;
	// lwz r3,13264(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 13264);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x83279668
	if (ctx.cr6.eq) goto loc_83279668;
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
	ctx.lr = 0x83279668;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_83279668:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83279408
	ctx.lr = 0x83279670;
	sub_83279408(ctx, base);
	// lwz r11,13264(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 13264);
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x832796a0
	if (ctx.cr6.eq) goto loc_832796A0;
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// stw r10,116(r30)
	PPC_STORE_U32(ctx.r30.u32 + 116, ctx.r10.u32);
	// addi r4,r30,108
	ctx.r4.s64 = ctx.r30.s64 + 108;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r11,36(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x832796A0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_832796A0:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83273c30
	ctx.lr = 0x832796A8;
	sub_83273C30(ctx, base);
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
loc_832796AC:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x833a01fc
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832796B4"))) PPC_WEAK_FUNC(sub_832796B4);
PPC_FUNC_IMPL(__imp__sub_832796B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832796B8"))) PPC_WEAK_FUNC(sub_832796B8);
PPC_FUNC_IMPL(__imp__sub_832796B8) {
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
	// bl 0x83278660
	ctx.lr = 0x832796D0;
	sub_83278660(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x832795b8
	ctx.lr = 0x832796D8;
	sub_832795B8(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x83278670
	ctx.lr = 0x832796E0;
	sub_83278670(ctx, base);
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

__attribute__((alias("__imp__sub_832796F8"))) PPC_WEAK_FUNC(sub_832796F8);
PPC_FUNC_IMPL(__imp__sub_832796F8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x833a01ac
	ctx.lr = 0x83279700;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31827
	ctx.r11.s64 = -2085814272;
	// lwz r11,10132(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 10132);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x8327971c
	if (ctx.cr6.eq) goto loc_8327971C;
loc_83279714:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x832797a0
	goto loc_832797A0;
loc_8327971C:
	// bl 0x8326ecf0
	ctx.lr = 0x83279720;
	sub_8326ECF0(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r3,r3,84
	ctx.r3.s64 = ctx.r3.s64 + 84;
	// bl 0x83278680
	ctx.lr = 0x8327972C;
	sub_83278680(ctx, base);
	// cmpwi cr6,r3,1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 1, ctx.xer);
	// bne cr6,0x83279714
	if (!ctx.cr6.eq) goto loc_83279714;
	// bl 0x83278c88
	ctx.lr = 0x83279738;
	sub_83278C88(ctx, base);
	// li r29,0
	ctx.r29.s64 = 0;
	// bl 0x83278ee0
	ctx.lr = 0x83279740;
	sub_83278EE0(ctx, base);
	// cmpwi cr6,r3,1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 1, ctx.xer);
	// beq cr6,0x83279778
	if (ctx.cr6.eq) goto loc_83279778;
	// addi r31,r31,104
	ctx.r31.s64 = ctx.r31.s64 + 104;
	// li r30,8
	ctx.r30.s64 = 8;
loc_83279750:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x8327976c
	if (ctx.cr6.eq) goto loc_8327976C;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x832796b8
	ctx.lr = 0x83279760;
	sub_832796B8(ctx, base);
	// cmpwi cr6,r3,1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 1, ctx.xer);
	// bne cr6,0x8327976c
	if (!ctx.cr6.eq) goto loc_8327976C;
	// li r29,1
	ctx.r29.s64 = 1;
loc_8327976C:
	// addic. r30,r30,-1
	ctx.xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// addi r31,r31,2048
	ctx.r31.s64 = ctx.r31.s64 + 2048;
	// bne 0x83279750
	if (!ctx.cr0.eq) goto loc_83279750;
loc_83279778:
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x83278d30
	ctx.lr = 0x83279780;
	sub_83278D30(ctx, base);
	// bl 0x83278cc0
	ctx.lr = 0x83279784;
	sub_83278CC0(ctx, base);
	// cmpwi cr6,r29,1
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 1, ctx.xer);
	// beq cr6,0x8327979c
	if (ctx.cr6.eq) goto loc_8327979C;
	// bl 0x83278e18
	ctx.lr = 0x83279790;
	sub_83278E18(ctx, base);
	// cmpwi cr6,r3,1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 1, ctx.xer);
	// beq cr6,0x8327979c
	if (ctx.cr6.eq) goto loc_8327979C;
	// bl 0x83278cf8
	ctx.lr = 0x8327979C;
	sub_83278CF8(ctx, base);
loc_8327979C:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
loc_832797A0:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x833a01fc
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832797A8"))) PPC_WEAK_FUNC(sub_832797A8);
PPC_FUNC_IMPL(__imp__sub_832797A8) {
	PPC_FUNC_PROLOGUE();
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
	// lis r30,-31816
	ctx.r30.s64 = -2085093376;
	// lis r11,-31845
	ctx.r11.s64 = -2086993920;
	// addi r31,r11,-744
	ctx.r31.s64 = ctx.r11.s64 + -744;
	// lwz r3,13264(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 13264);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x832797e8
	if (ctx.cr6.eq) goto loc_832797E8;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r4,r31,4
	ctx.r4.s64 = ctx.r31.s64 + 4;
	// lwz r11,36(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x832797E8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_832797E8:
	// bl 0x832796f8
	ctx.lr = 0x832797EC;
	sub_832796F8(ctx, base);
	// lwz r11,13264(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 13264);
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8327981c
	if (ctx.cr6.eq) goto loc_8327981C;
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// stw r10,116(r31)
	PPC_STORE_U32(ctx.r31.u32 + 116, ctx.r10.u32);
	// addi r4,r31,108
	ctx.r4.s64 = ctx.r31.s64 + 108;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r11,36(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8327981C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8327981C:
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
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

__attribute__((alias("__imp__sub_83279838"))) PPC_WEAK_FUNC(sub_83279838);
PPC_FUNC_IMPL(__imp__sub_83279838) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x833a01ac
	ctx.lr = 0x83279840;
	__savegprlr_29(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r29,-31816
	ctx.r29.s64 = -2085093376;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lis r11,-31845
	ctx.r11.s64 = -2086993920;
	// addi r31,r11,-1176
	ctx.r31.s64 = ctx.r11.s64 + -1176;
	// lwz r3,13264(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 13264);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x83279874
	if (ctx.cr6.eq) goto loc_83279874;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r4,r31,4
	ctx.r4.s64 = ctx.r31.s64 + 4;
	// lwz r11,36(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x83279874;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_83279874:
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bl 0x83279280
	ctx.lr = 0x83279884;
	sub_83279280(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x83278f08
	ctx.lr = 0x8327988C;
	sub_83278F08(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x83279020
	ctx.lr = 0x83279894;
	sub_83279020(ctx, base);
	// bl 0x83278bb8
	ctx.lr = 0x83279898;
	sub_83278BB8(ctx, base);
	// cmpwi cr6,r3,1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 1, ctx.xer);
	// bne cr6,0x832798ac
	if (!ctx.cr6.eq) goto loc_832798AC;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x832797a8
	ctx.lr = 0x832798A8;
	sub_832797A8(ctx, base);
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
loc_832798AC:
	// lwz r3,13264(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 13264);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x832798d4
	if (ctx.cr6.eq) goto loc_832798D4;
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// addi r4,r31,108
	ctx.r4.s64 = ctx.r31.s64 + 108;
	// stw r11,116(r31)
	PPC_STORE_U32(ctx.r31.u32 + 116, ctx.r11.u32);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,36(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x832798D4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_832798D4:
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x833a01fc
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832798E0"))) PPC_WEAK_FUNC(sub_832798E0);
PPC_FUNC_IMPL(__imp__sub_832798E0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x833a01ac
	ctx.lr = 0x832798E8;
	__savegprlr_29(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r30,-31816
	ctx.r30.s64 = -2085093376;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// lis r11,-31845
	ctx.r11.s64 = -2086993920;
	// addi r31,r11,-960
	ctx.r31.s64 = ctx.r11.s64 + -960;
	// lwz r3,13264(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 13264);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8327991c
	if (ctx.cr6.eq) goto loc_8327991C;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r4,r31,4
	ctx.r4.s64 = ctx.r31.s64 + 4;
	// lwz r11,36(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8327991C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8327991C:
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bl 0x83278bb8
	ctx.lr = 0x83279928;
	sub_83278BB8(ctx, base);
	// cmpwi cr6,r3,1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 1, ctx.xer);
	// beq cr6,0x8327993c
	if (ctx.cr6.eq) goto loc_8327993C;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x832797a8
	ctx.lr = 0x83279938;
	sub_832797A8(ctx, base);
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
loc_8327993C:
	// lwz r3,13264(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 13264);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x83279964
	if (ctx.cr6.eq) goto loc_83279964;
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// addi r4,r31,108
	ctx.r4.s64 = ctx.r31.s64 + 108;
	// stw r11,116(r31)
	PPC_STORE_U32(ctx.r31.u32 + 116, ctx.r11.u32);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,36(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x83279964;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_83279964:
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x833a01fc
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83279970"))) PPC_WEAK_FUNC(sub_83279970);
PPC_FUNC_IMPL(__imp__sub_83279970) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x833a01ac
	ctx.lr = 0x83279978;
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
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x832799bc
	if (ctx.cr6.eq) goto loc_832799BC;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x83282090
	ctx.lr = 0x83279998;
	sub_83282090(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x832799b4
	if (ctx.cr0.eq) goto loc_832799B4;
	// lis r4,-256
	ctx.r4.s64 = -16777216;
	// li r3,0
	ctx.r3.s64 = 0;
	// ori r4,r4,385
	ctx.r4.u64 = ctx.r4.u64 | 385;
loc_832799AC:
	// bl 0x83282390
	ctx.lr = 0x832799B0;
	sub_83282390(ctx, base);
	// b 0x832799f0
	goto loc_832799F0;
loc_832799B4:
	// lwz r11,8448(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8448);
	// lwz r3,0(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
loc_832799BC:
	// addi r11,r31,-5
	ctx.r11.s64 = ctx.r31.s64 + -5;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// subfic r11,r11,0
	ctx.xer.ca = ctx.r11.u32 <= 0;
	ctx.r11.s64 = 0 - ctx.r11.s64;
	// subfe r11,r11,r11
	temp.u8 = (~ctx.r11.u32 + ctx.r11.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r11.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r5,r11,r29
	ctx.r5.u64 = ctx.r11.u64 & ctx.r29.u64;
	// bl 0x83289940
	ctx.lr = 0x832799D4;
	sub_83289940(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x832799ec
	if (ctx.cr0.eq) goto loc_832799EC;
	// lis r4,-256
	ctx.r4.s64 = -16777216;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// ori r4,r4,3858
	ctx.r4.u64 = ctx.r4.u64 | 3858;
	// b 0x832799ac
	goto loc_832799AC;
loc_832799EC:
	// li r3,0
	ctx.r3.s64 = 0;
loc_832799F0:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x833a01fc
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832799F8"))) PPC_WEAK_FUNC(sub_832799F8);
PPC_FUNC_IMPL(__imp__sub_832799F8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x833a01a8
	ctx.lr = 0x83279A00;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,8448(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8448);
	// lwz r28,0(r11)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// bne cr6,0x83279a1c
	if (!ctx.cr6.eq) goto loc_83279A1C;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x83279a60
	goto loc_83279A60;
loc_83279A1C:
	// rlwinm r29,r5,30,2,31
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 30) & 0x3FFFFFFF;
	// cmplwi cr6,r29,16
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 16, ctx.xer);
	// ble cr6,0x83279a2c
	if (!ctx.cr6.gt) goto loc_83279A2C;
	// li r29,16
	ctx.r29.s64 = 16;
loc_83279A2C:
	// li r31,0
	ctx.r31.s64 = 0;
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// ble cr6,0x83279a5c
	if (!ctx.cr6.gt) goto loc_83279A5C;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
loc_83279A3C:
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x832899c8
	ctx.lr = 0x83279A4C;
	sub_832899C8(ctx, base);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// cmpw cr6,r31,r29
	ctx.cr6.compare<int32_t>(ctx.r31.s32, ctx.r29.s32, ctx.xer);
	// blt cr6,0x83279a3c
	if (ctx.cr6.lt) goto loc_83279A3C;
loc_83279A5C:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
loc_83279A60:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x833a01f8
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83279A68"))) PPC_WEAK_FUNC(sub_83279A68);
PPC_FUNC_IMPL(__imp__sub_83279A68) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x833a01a8
	ctx.lr = 0x83279A70;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,8448(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8448);
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// lwz r28,0(r11)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// beq cr6,0x83279ab4
	if (ctx.cr6.eq) goto loc_83279AB4;
	// li r31,0
	ctx.r31.s64 = 0;
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// ble cr6,0x83279ab4
	if (!ctx.cr6.gt) goto loc_83279AB4;
	// addi r30,r4,-4
	ctx.r30.s64 = ctx.r4.s64 + -4;
loc_83279A98:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwzu r5,4(r30)
	ea = 4 + ctx.r30.u32;
	ctx.r5.u64 = PPC_LOAD_U32(ea);
	ctx.r30.u32 = ea;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x83289940
	ctx.lr = 0x83279AA8;
	sub_83289940(ctx, base);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// cmpw cr6,r31,r29
	ctx.cr6.compare<int32_t>(ctx.r31.s32, ctx.r29.s32, ctx.xer);
	// blt cr6,0x83279a98
	if (ctx.cr6.lt) goto loc_83279A98;
loc_83279AB4:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x833a01f8
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83279ABC"))) PPC_WEAK_FUNC(sub_83279ABC);
PPC_FUNC_IMPL(__imp__sub_83279ABC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83279AC0"))) PPC_WEAK_FUNC(sub_83279AC0);
PPC_FUNC_IMPL(__imp__sub_83279AC0) {
	PPC_FUNC_PROLOGUE();
	// lwz r10,8448(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8448);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lwz r3,0(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// stw r4,3484(r11)
	PPC_STORE_U32(ctx.r11.u32 + 3484, ctx.r4.u32);
	// stw r6,3480(r11)
	PPC_STORE_U32(ctx.r11.u32 + 3480, ctx.r6.u32);
	// stw r5,3476(r11)
	PPC_STORE_U32(ctx.r11.u32 + 3476, ctx.r5.u32);
	// b 0x832896b8
	sub_832896B8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83279ADC"))) PPC_WEAK_FUNC(sub_83279ADC);
PPC_FUNC_IMPL(__imp__sub_83279ADC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83279AE0"))) PPC_WEAK_FUNC(sub_83279AE0);
PPC_FUNC_IMPL(__imp__sub_83279AE0) {
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
	// bl 0x83289878
	ctx.lr = 0x83279AF0;
	sub_83289878(ctx, base);
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

__attribute__((alias("__imp__sub_83279B04"))) PPC_WEAK_FUNC(sub_83279B04);
PPC_FUNC_IMPL(__imp__sub_83279B04) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83279B08"))) PPC_WEAK_FUNC(sub_83279B08);
PPC_FUNC_IMPL(__imp__sub_83279B08) {
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
	// li r4,28
	ctx.r4.s64 = 28;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x83274d00
	ctx.lr = 0x83279B24;
	sub_83274D00(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x83279b50
	if (ctx.cr0.eq) goto loc_83279B50;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83288cb0
	ctx.lr = 0x83279B34;
	sub_83288CB0(ctx, base);
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// beq cr6,0x83279b50
	if (ctx.cr6.eq) goto loc_83279B50;
	// cntlzw r11,r3
	ctx.r11.u64 = ctx.r3.u32 == 0 ? 32 : __builtin_clz(ctx.r3.u32);
	// li r4,5
	ctx.r4.s64 = 5;
	// rlwinm r5,r11,27,31,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83279970
	ctx.lr = 0x83279B50;
	sub_83279970(ctx, base);
loc_83279B50:
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

__attribute__((alias("__imp__sub_83279B64"))) PPC_WEAK_FUNC(sub_83279B64);
PPC_FUNC_IMPL(__imp__sub_83279B64) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83279B68"))) PPC_WEAK_FUNC(sub_83279B68);
PPC_FUNC_IMPL(__imp__sub_83279B68) {
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
	// lwz r31,8448(r3)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8448);
	// lwz r11,3488(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 3488);
	// lwz r10,3492(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 3492);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// stw r11,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r11.u32);
	// stw r10,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r10.u32);
	// beq cr6,0x83279bd0
	if (ctx.cr6.eq) goto loc_83279BD0;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x83279bd0
	if (ctx.cr6.eq) goto loc_83279BD0;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmpwi cr6,r11,192
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 192, ctx.xer);
	// bne cr6,0x83279bd0
	if (!ctx.cr6.eq) goto loc_83279BD0;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// bl 0x8328b408
	ctx.lr = 0x83279BB8;
	sub_8328B408(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x83279bd0
	if (!ctx.cr0.eq) goto loc_83279BD0;
	// li r11,2
	ctx.r11.s64 = 2;
	// li r10,200
	ctx.r10.s64 = 200;
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// stw r10,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r10.u32);
loc_83279BD0:
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

__attribute__((alias("__imp__sub_83279BE4"))) PPC_WEAK_FUNC(sub_83279BE4);
PPC_FUNC_IMPL(__imp__sub_83279BE4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83279BE8"))) PPC_WEAK_FUNC(sub_83279BE8);
PPC_FUNC_IMPL(__imp__sub_83279BE8) {
	PPC_FUNC_PROLOGUE();
	// lwz r4,8460(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8460);
	// b 0x83287b20
	sub_83287B20(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83279BF0"))) PPC_WEAK_FUNC(sub_83279BF0);
PPC_FUNC_IMPL(__imp__sub_83279BF0) {
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
	// lwz r11,48(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r31,2696(r3)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 2696);
	// addi r11,r11,2
	ctx.r11.s64 = ctx.r11.s64 + 2;
	// cmpwi cr6,r31,-1
	ctx.cr6.compare<int32_t>(ctx.r31.s32, -1, ctx.xer);
	// bne cr6,0x83279c20
	if (!ctx.cr6.eq) goto loc_83279C20;
	// mr r31,r11
	ctx.r31.u64 = ctx.r11.u64;
loc_83279C20:
	// cmpw cr6,r11,r31
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r31.s32, ctx.xer);
	// bge cr6,0x83279c2c
	if (!ctx.cr6.lt) goto loc_83279C2C;
	// mr r31,r11
	ctx.r31.u64 = ctx.r11.u64;
loc_83279C2C:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x832847b0
	ctx.lr = 0x83279C34;
	sub_832847B0(ctx, base);
	// lwz r11,124(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 124);
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// bne cr6,0x83279c48
	if (!ctx.cr6.eq) goto loc_83279C48;
	// lwz r11,2440(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 2440);
	// add r3,r11,r3
	ctx.r3.u64 = ctx.r11.u64 + ctx.r3.u64;
loc_83279C48:
	// srawi r11,r3,31
	ctx.xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0x7FFFFFFF) != 0);
	ctx.r11.s64 = ctx.r3.s32 >> 31;
	// rlwinm r10,r31,1,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 1) & 0x1;
	// subfc r9,r31,r3
	ctx.xer.ca = ctx.r3.u32 >= ctx.r31.u32;
	ctx.r9.s64 = ctx.r3.s64 - ctx.r31.s64;
	// adde r3,r10,r11
	temp.u8 = (ctx.r10.u32 + ctx.r11.u32 < ctx.r10.u32) | (ctx.r10.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r3.u64 = ctx.r10.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
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

__attribute__((alias("__imp__sub_83279C70"))) PPC_WEAK_FUNC(sub_83279C70);
PPC_FUNC_IMPL(__imp__sub_83279C70) {
	PPC_FUNC_PROLOGUE();
	// lis r11,32767
	ctx.r11.s64 = 2147418112;
	// lwz r10,3812(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 3812);
	// ori r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 65535;
	// cmpw cr6,r10,r11
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r11.s32, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,3776(r3)
	PPC_STORE_U32(ctx.r3.u32 + 3776, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83279C90"))) PPC_WEAK_FUNC(sub_83279C90);
PPC_FUNC_IMPL(__imp__sub_83279C90) {
	PPC_FUNC_PROLOGUE();
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
	// bl 0x83284768
	ctx.lr = 0x83279CB0;
	sub_83284768(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x83279cf0
	if (ctx.cr0.eq) goto loc_83279CF0;
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// bne cr6,0x83279cc8
	if (!ctx.cr6.eq) goto loc_83279CC8;
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x83279cf4
	goto loc_83279CF4;
loc_83279CC8:
	// lwz r11,124(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 124);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x83279cf0
	if (!ctx.cr6.eq) goto loc_83279CF0;
	// cmpwi cr6,r30,1
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 1, ctx.xer);
	// bne cr6,0x83279cf0
	if (!ctx.cr6.eq) goto loc_83279CF0;
	// lwz r11,2440(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2440);
	// li r3,1
	ctx.r3.s64 = 1;
	// lwz r10,2444(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2444);
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// bgt cr6,0x83279cf4
	if (ctx.cr6.gt) goto loc_83279CF4;
loc_83279CF0:
	// li r3,0
	ctx.r3.s64 = 0;
loc_83279CF4:
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

__attribute__((alias("__imp__sub_83279D0C"))) PPC_WEAK_FUNC(sub_83279D0C);
PPC_FUNC_IMPL(__imp__sub_83279D0C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83279D10"))) PPC_WEAK_FUNC(sub_83279D10);
PPC_FUNC_IMPL(__imp__sub_83279D10) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x833a01ac
	ctx.lr = 0x83279D18;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r4,76
	ctx.r4.s64 = 76;
	// lwz r29,8448(r3)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8448);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x83274d00
	ctx.lr = 0x83279D2C;
	sub_83274D00(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r4,77
	ctx.r4.s64 = 77;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83274d00
	ctx.lr = 0x83279D3C;
	sub_83274D00(ctx, base);
	// cmpwi cr6,r30,-1
	ctx.cr6.compare<int32_t>(ctx.r30.s32, -1, ctx.xer);
	// beq cr6,0x83279d58
	if (ctx.cr6.eq) goto loc_83279D58;
	// lwz r11,2416(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2416);
	// cmpw cr6,r11,r30
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r30.s32, ctx.xer);
	// blt cr6,0x83279d58
	if (ctx.cr6.lt) goto loc_83279D58;
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x83279d74
	goto loc_83279D74;
loc_83279D58:
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// beq cr6,0x83279d70
	if (ctx.cr6.eq) goto loc_83279D70;
	// lwz r11,148(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 148);
	// cmpw cr6,r11,r3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r3.s32, ctx.xer);
	// li r3,1
	ctx.r3.s64 = 1;
	// bgt cr6,0x83279d74
	if (ctx.cr6.gt) goto loc_83279D74;
loc_83279D70:
	// li r3,0
	ctx.r3.s64 = 0;
loc_83279D74:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x833a01fc
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83279D7C"))) PPC_WEAK_FUNC(sub_83279D7C);
PPC_FUNC_IMPL(__imp__sub_83279D7C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83279D80"))) PPC_WEAK_FUNC(sub_83279D80);
PPC_FUNC_IMPL(__imp__sub_83279D80) {
	PPC_FUNC_PROLOGUE();
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// lwz r4,8460(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8460);
	// b 0x83287b08
	sub_83287B08(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83279D8C"))) PPC_WEAK_FUNC(sub_83279D8C);
PPC_FUNC_IMPL(__imp__sub_83279D8C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83279D90"))) PPC_WEAK_FUNC(sub_83279D90);
PPC_FUNC_IMPL(__imp__sub_83279D90) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplw cr6,r11,r4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r4.u32, ctx.xer);
	// bgt cr6,0x83279db4
	if (ctx.cr6.gt) goto loc_83279DB4;
	// lwz r10,4(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// cmplw cr6,r4,r10
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x83279db4
	if (!ctx.cr6.lt) goto loc_83279DB4;
	// subf r3,r11,r4
	ctx.r3.s64 = ctx.r4.s64 - ctx.r11.s64;
	// blr 
	return;
loc_83279DB4:
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// cmplw cr6,r11,r4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r4.u32, ctx.xer);
	// bgt cr6,0x83279de0
	if (ctx.cr6.gt) goto loc_83279DE0;
	// lwz r10,12(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// cmplw cr6,r4,r10
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x83279de0
	if (!ctx.cr6.lt) goto loc_83279DE0;
	// lwz r10,4(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// subf r11,r11,r10
	ctx.r11.s64 = ctx.r10.s64 - ctx.r11.s64;
	// add r3,r11,r4
	ctx.r3.u64 = ctx.r11.u64 + ctx.r4.u64;
	// blr 
	return;
loc_83279DE0:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83279DE8"))) PPC_WEAK_FUNC(sub_83279DE8);
PPC_FUNC_IMPL(__imp__sub_83279DE8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x833a01ac
	ctx.lr = 0x83279DF0;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r30,8456(r3)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8456);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x83287948
	ctx.lr = 0x83279E04;
	sub_83287948(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x832882a0
	ctx.lr = 0x83279E14;
	sub_832882A0(ctx, base);
	// lwz r11,44(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 44);
	// subf r10,r3,r29
	ctx.r10.s64 = ctx.r29.s64 - ctx.r3.s64;
	// cmpw cr6,r10,r11
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r11.s32, ctx.xer);
	// bge cr6,0x83279e38
	if (!ctx.cr6.lt) goto loc_83279E38;
	// lis r4,-256
	ctx.r4.s64 = -16777216;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// ori r4,r4,3868
	ctx.r4.u64 = ctx.r4.u64 | 3868;
	// bl 0x83282390
	ctx.lr = 0x83279E34;
	sub_83282390(ctx, base);
	// b 0x83279e3c
	goto loc_83279E3C;
loc_83279E38:
	// li r3,0
	ctx.r3.s64 = 0;
loc_83279E3C:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x833a01fc
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83279E44"))) PPC_WEAK_FUNC(sub_83279E44);
PPC_FUNC_IMPL(__imp__sub_83279E44) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83279E48"))) PPC_WEAK_FUNC(sub_83279E48);
PPC_FUNC_IMPL(__imp__sub_83279E48) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x833a01a0
	ctx.lr = 0x83279E50;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r26,r5
	ctx.r26.u64 = ctx.r5.u64;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// stw r11,0(r26)
	PPC_STORE_U32(ctx.r26.u32 + 0, ctx.r11.u32);
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r4,4(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// bl 0x8328b648
	ctx.lr = 0x83279E78;
	sub_8328B648(ctx, base);
	// mr. r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// beq 0x83279e94
	if (ctx.cr0.eq) goto loc_83279E94;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8328b5a0
	ctx.lr = 0x83279E88;
	sub_8328B5A0(ctx, base);
	// stw r3,0(r26)
	PPC_STORE_U32(ctx.r26.u32 + 0, ctx.r3.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// b 0x83279f68
	goto loc_83279F68;
loc_83279E94:
	// lwz r29,12(r31)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// beq cr6,0x83279f64
	if (ctx.cr6.eq) goto loc_83279F64;
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmpwi cr6,r10,3
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 3, ctx.xer);
	// mr r30,r10
	ctx.r30.u64 = ctx.r10.u64;
	// blt cr6,0x83279eb4
	if (ctx.cr6.lt) goto loc_83279EB4;
	// li r30,3
	ctx.r30.s64 = 3;
loc_83279EB4:
	// cmpwi cr6,r29,3
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 3, ctx.xer);
	// blt cr6,0x83279ec0
	if (ctx.cr6.lt) goto loc_83279EC0;
	// li r29,3
	ctx.r29.s64 = 3;
loc_83279EC0:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// subf r11,r30,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r30.s64;
	// add r4,r11,r10
	ctx.r4.u64 = ctx.r11.u64 + ctx.r10.u64;
	// bl 0x833a1390
	ctx.lr = 0x83279ED8;
	sub_833A1390(ctx, base);
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// lwz r4,8(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// add r3,r30,r11
	ctx.r3.u64 = ctx.r30.u64 + ctx.r11.u64;
	// bl 0x833a1390
	ctx.lr = 0x83279EEC;
	sub_833A1390(ctx, base);
	// add r11,r29,r30
	ctx.r11.u64 = ctx.r29.u64 + ctx.r30.u64;
	// li r29,0
	ctx.r29.s64 = 0;
	// addic. r28,r11,-3
	ctx.xer.ca = ctx.r11.u32 > 2;
	ctx.r28.s64 = ctx.r11.s64 + -3;
	ctx.cr0.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// ble 0x83279f1c
	if (!ctx.cr0.gt) goto loc_83279F1C;
loc_83279EFC:
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// add r3,r29,r11
	ctx.r3.u64 = ctx.r29.u64 + ctx.r11.u64;
	// bl 0x8328b5a0
	ctx.lr = 0x83279F08;
	sub_8328B5A0(ctx, base);
	// and. r11,r3,r27
	ctx.r11.u64 = ctx.r3.u64 & ctx.r27.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x83279f48
	if (!ctx.cr0.eq) goto loc_83279F48;
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// cmpw cr6,r29,r28
	ctx.cr6.compare<int32_t>(ctx.r29.s32, ctx.r28.s32, ctx.xer);
	// blt cr6,0x83279efc
	if (ctx.cr6.lt) goto loc_83279EFC;
loc_83279F1C:
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// lwz r4,12(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// bl 0x8328b648
	ctx.lr = 0x83279F2C;
	sub_8328B648(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x83279f64
	if (ctx.cr0.eq) goto loc_83279F64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8328b5a0
	ctx.lr = 0x83279F3C;
	sub_8328B5A0(ctx, base);
	// stw r3,0(r26)
	PPC_STORE_U32(ctx.r26.u32 + 0, ctx.r3.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// b 0x83279f68
	goto loc_83279F68;
loc_83279F48:
	// stw r3,0(r26)
	PPC_STORE_U32(ctx.r26.u32 + 0, ctx.r3.u32);
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// subf r11,r30,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r30.s64;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// add r3,r11,r29
	ctx.r3.u64 = ctx.r11.u64 + ctx.r29.u64;
	// b 0x83279f68
	goto loc_83279F68;
loc_83279F64:
	// li r3,0
	ctx.r3.s64 = 0;
loc_83279F68:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x833a01f0
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83279F70"))) PPC_WEAK_FUNC(sub_83279F70);
PPC_FUNC_IMPL(__imp__sub_83279F70) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x833a01a0
	ctx.lr = 0x83279F78;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r11,0(r5)
	PPC_STORE_U32(ctx.r5.u32 + 0, ctx.r11.u32);
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// lwz r11,12(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// mr r26,r5
	ctx.r26.u64 = ctx.r5.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8327a04c
	if (ctx.cr6.eq) goto loc_8327A04C;
	// rotlwi r4,r11,0
	ctx.r4.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// add r3,r11,r4
	ctx.r3.u64 = ctx.r11.u64 + ctx.r4.u64;
	// bl 0x8328b5e0
	ctx.lr = 0x83279FB0;
	sub_8328B5E0(ctx, base);
	// mr. r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// beq 0x83279fcc
	if (ctx.cr0.eq) goto loc_83279FCC;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8328b5a0
	ctx.lr = 0x83279FC0;
	sub_8328B5A0(ctx, base);
	// stw r3,0(r26)
	PPC_STORE_U32(ctx.r26.u32 + 0, ctx.r3.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// b 0x8327a09c
	goto loc_8327A09C;
loc_83279FCC:
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmpwi cr6,r10,3
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 3, ctx.xer);
	// mr r30,r10
	ctx.r30.u64 = ctx.r10.u64;
	// blt cr6,0x83279fe0
	if (ctx.cr6.lt) goto loc_83279FE0;
	// li r30,3
	ctx.r30.s64 = 3;
loc_83279FE0:
	// lwz r29,12(r31)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// cmpwi cr6,r29,3
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 3, ctx.xer);
	// blt cr6,0x83279ff0
	if (ctx.cr6.lt) goto loc_83279FF0;
	// li r29,3
	ctx.r29.s64 = 3;
loc_83279FF0:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// subf r11,r30,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r30.s64;
	// add r4,r11,r10
	ctx.r4.u64 = ctx.r11.u64 + ctx.r10.u64;
	// bl 0x833a1390
	ctx.lr = 0x8327A008;
	sub_833A1390(ctx, base);
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// lwz r4,8(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// add r3,r30,r11
	ctx.r3.u64 = ctx.r30.u64 + ctx.r11.u64;
	// bl 0x833a1390
	ctx.lr = 0x8327A01C;
	sub_833A1390(ctx, base);
	// add r11,r29,r30
	ctx.r11.u64 = ctx.r29.u64 + ctx.r30.u64;
	// li r29,0
	ctx.r29.s64 = 0;
	// addic. r28,r11,-3
	ctx.xer.ca = ctx.r11.u32 > 2;
	ctx.r28.s64 = ctx.r11.s64 + -3;
	ctx.cr0.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// ble 0x8327a04c
	if (!ctx.cr0.gt) goto loc_8327A04C;
loc_8327A02C:
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// add r3,r29,r11
	ctx.r3.u64 = ctx.r29.u64 + ctx.r11.u64;
	// bl 0x8328b5a0
	ctx.lr = 0x8327A038;
	sub_8328B5A0(ctx, base);
	// and. r11,r3,r27
	ctx.r11.u64 = ctx.r3.u64 & ctx.r27.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8327a07c
	if (!ctx.cr0.eq) goto loc_8327A07C;
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// cmpw cr6,r29,r28
	ctx.cr6.compare<int32_t>(ctx.r29.s32, ctx.r28.s32, ctx.xer);
	// blt cr6,0x8327a02c
	if (ctx.cr6.lt) goto loc_8327A02C;
loc_8327A04C:
	// lwz r4,4(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// add r3,r11,r4
	ctx.r3.u64 = ctx.r11.u64 + ctx.r4.u64;
	// bl 0x8328b5e0
	ctx.lr = 0x8327A060;
	sub_8328B5E0(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x8327a098
	if (ctx.cr0.eq) goto loc_8327A098;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8328b5a0
	ctx.lr = 0x8327A070;
	sub_8328B5A0(ctx, base);
	// stw r3,0(r26)
	PPC_STORE_U32(ctx.r26.u32 + 0, ctx.r3.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// b 0x8327a09c
	goto loc_8327A09C;
loc_8327A07C:
	// stw r3,0(r26)
	PPC_STORE_U32(ctx.r26.u32 + 0, ctx.r3.u32);
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// subf r11,r30,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r30.s64;
	// add r11,r11,r29
	ctx.r11.u64 = ctx.r11.u64 + ctx.r29.u64;
	// add r3,r11,r10
	ctx.r3.u64 = ctx.r11.u64 + ctx.r10.u64;
	// b 0x8327a09c
	goto loc_8327A09C;
loc_8327A098:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8327A09C:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x833a01f0
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8327A0A4"))) PPC_WEAK_FUNC(sub_8327A0A4);
PPC_FUNC_IMPL(__imp__sub_8327A0A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8327A0A8"))) PPC_WEAK_FUNC(sub_8327A0A8);
PPC_FUNC_IMPL(__imp__sub_8327A0A8) {
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
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// lwz r4,8456(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8456);
	// bl 0x832881a0
	ctx.lr = 0x8327A0C8;
	sub_832881A0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x8327a0dc
	if (ctx.cr0.eq) goto loc_8327A0DC;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// b 0x8327a0e8
	goto loc_8327A0E8;
loc_8327A0DC:
	// lwz r10,84(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// stw r10,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r10.u32);
loc_8327A0E8:
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
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

__attribute__((alias("__imp__sub_8327A100"))) PPC_WEAK_FUNC(sub_8327A100);
PPC_FUNC_IMPL(__imp__sub_8327A100) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x833a01ac
	ctx.lr = 0x8327A108;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,8472(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8472);
	// addi r30,r3,3496
	ctx.r30.s64 = ctx.r3.s64 + 3496;
	// lwz r4,8456(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8456);
	// addi r31,r3,8440
	ctx.r31.s64 = ctx.r3.s64 + 8440;
	// addi r29,r30,148
	ctx.r29.s64 = ctx.r30.s64 + 148;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bge cr6,0x8327a134
	if (!ctx.cr6.lt) goto loc_8327A134;
	// bl 0x83287958
	ctx.lr = 0x8327A12C;
	sub_83287958(ctx, base);
	// addi r11,r3,4
	ctx.r11.s64 = ctx.r3.s64 + 4;
	// stw r11,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r11.u32);
loc_8327A134:
	// lwz r11,36(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 36);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bge cr6,0x8327a150
	if (!ctx.cr6.lt) goto loc_8327A150;
	// addi r4,r30,104
	ctx.r4.s64 = ctx.r30.s64 + 104;
	// li r5,44
	ctx.r5.s64 = 44;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x833a1390
	ctx.lr = 0x8327A150;
	sub_833A1390(ctx, base);
loc_8327A150:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x833a01fc
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8327A158"))) PPC_WEAK_FUNC(sub_8327A158);
PPC_FUNC_IMPL(__imp__sub_8327A158) {
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
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lis r10,-32219
	ctx.r10.s64 = -2111504384;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r10,r10,18176
	ctx.r10.s64 = ctx.r10.s64 + 18176;
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x8327a1e0
	if (ctx.cr6.eq) goto loc_8327A1E0;
	// lis r11,0
	ctx.r11.s64 = 0;
	// li r10,0
	ctx.r10.s64 = 0;
	// ori r11,r11,44100
	ctx.r11.u64 = ctx.r11.u64 | 44100;
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
loc_8327A198:
	// addi r11,r31,3496
	ctx.r11.s64 = ctx.r31.s64 + 3496;
	// lwz r10,3988(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 3988);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r4,3596(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 3596);
	// add r3,r10,r11
	ctx.r3.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwz r5,84(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// stw r3,3988(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3988, ctx.r3.u32);
	// bl 0x83289328
	ctx.lr = 0x8327A1B8;
	sub_83289328(ctx, base);
	// lwz r11,3844(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 3844);
	// subf r10,r11,r3
	ctx.r10.s64 = ctx.r3.s64 - ctx.r11.s64;
	// rlwinm r11,r10,1,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0x1;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// and r3,r11,r10
	ctx.r3.u64 = ctx.r11.u64 & ctx.r10.u64;
loc_8327A1CC:
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
loc_8327A1E0:
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x832828e8
	ctx.lr = 0x8327A1F0;
	sub_832828E8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x8327a198
	if (!ctx.cr0.eq) goto loc_8327A198;
	// li r3,-1
	ctx.r3.s64 = -1;
	// b 0x8327a1cc
	goto loc_8327A1CC;
}

__attribute__((alias("__imp__sub_8327A200"))) PPC_WEAK_FUNC(sub_8327A200);
PPC_FUNC_IMPL(__imp__sub_8327A200) {
	PPC_FUNC_PROLOGUE();
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
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// lwz r4,8456(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8456);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x83287a18
	ctx.lr = 0x8327A228;
	sub_83287A18(ctx, base);
	// ld r10,2504(r31)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r31.u32 + 2504);
	// extsw r11,r30
	ctx.r11.s64 = ctx.r30.s32;
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// std r11,2504(r31)
	PPC_STORE_U64(ctx.r31.u32 + 2504, ctx.r11.u64);
	// ble cr6,0x8327a248
	if (!ctx.cr6.gt) goto loc_8327A248;
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,100(r31)
	PPC_STORE_U32(ctx.r31.u32 + 100, ctx.r11.u32);
loc_8327A248:
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

__attribute__((alias("__imp__sub_8327A260"))) PPC_WEAK_FUNC(sub_8327A260);
PPC_FUNC_IMPL(__imp__sub_8327A260) {
	PPC_FUNC_PROLOGUE();
	// lwz r4,8456(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8456);
	// b 0x83287b20
	sub_83287B20(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8327A268"))) PPC_WEAK_FUNC(sub_8327A268);
PPC_FUNC_IMPL(__imp__sub_8327A268) {
	PPC_FUNC_PROLOGUE();
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// cmpwi cr6,r4,-3
	ctx.cr6.compare<int32_t>(ctx.r4.s32, -3, ctx.xer);
	// beq cr6,0x8327a2a4
	if (ctx.cr6.eq) goto loc_8327A2A4;
	// cmpwi cr6,r4,-2
	ctx.cr6.compare<int32_t>(ctx.r4.s32, -2, ctx.xer);
	// beq cr6,0x8327a294
	if (ctx.cr6.eq) goto loc_8327A294;
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// beq cr6,0x8327a28c
	if (ctx.cr6.eq) goto loc_8327A28C;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// b 0x83282390
	sub_83282390(ctx, base);
	return;
loc_8327A28C:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_8327A294:
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// bgt cr6,0x8327a28c
	if (ctx.cr6.gt) goto loc_8327A28C;
	// li r4,-2
	ctx.r4.s64 = -2;
	// b 0x83282390
	sub_83282390(ctx, base);
	return;
loc_8327A2A4:
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// bgt cr6,0x8327a28c
	if (ctx.cr6.gt) goto loc_8327A28C;
	// li r4,-3
	ctx.r4.s64 = -3;
	// b 0x83282390
	sub_83282390(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8327A2B4"))) PPC_WEAK_FUNC(sub_8327A2B4);
PPC_FUNC_IMPL(__imp__sub_8327A2B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8327A2B8"))) PPC_WEAK_FUNC(sub_8327A2B8);
PPC_FUNC_IMPL(__imp__sub_8327A2B8) {
	PPC_FUNC_PROLOGUE();
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r10,r3,10536
	ctx.r10.s64 = ctx.r3.s64 + 10536;
loc_8327A2C0:
	// lwz r9,-96(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + -96);
	// cmpwi cr6,r9,2
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 2, ctx.xer);
	// beq cr6,0x8327a2dc
	if (ctx.cr6.eq) goto loc_8327A2DC;
	// cmpwi cr6,r9,3
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 3, ctx.xer);
	// beq cr6,0x8327a2dc
	if (ctx.cr6.eq) goto loc_8327A2DC;
	// cmpwi cr6,r9,4
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 4, ctx.xer);
	// bne cr6,0x8327a2e8
	if (!ctx.cr6.eq) goto loc_8327A2E8;
loc_8327A2DC:
	// lwz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmpwi cr6,r9,-1
	ctx.cr6.compare<int32_t>(ctx.r9.s32, -1, ctx.xer);
	// beq cr6,0x8327a2fc
	if (ctx.cr6.eq) goto loc_8327A2FC;
loc_8327A2E8:
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,280
	ctx.r10.s64 = ctx.r10.s64 + 280;
	// cmpwi cr6,r11,16
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 16, ctx.xer);
	// blt cr6,0x8327a2c0
	if (ctx.cr6.lt) goto loc_8327A2C0;
	// blr 
	return;
loc_8327A2FC:
	// mulli r11,r11,280
	ctx.r11.s64 = ctx.r11.s64 * 280;
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// stw r4,10536(r11)
	PPC_STORE_U32(ctx.r11.u32 + 10536, ctx.r4.u32);
	// stw r5,10540(r11)
	PPC_STORE_U32(ctx.r11.u32 + 10540, ctx.r5.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8327A310"))) PPC_WEAK_FUNC(sub_8327A310);
PPC_FUNC_IMPL(__imp__sub_8327A310) {
	PPC_FUNC_PROLOGUE();
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,-1
	ctx.r10.s64 = -1;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// std r10,16(r3)
	PPC_STORE_U64(ctx.r3.u32 + 16, ctx.r10.u64);
	// stw r11,24(r3)
	PPC_STORE_U32(ctx.r3.u32 + 24, ctx.r11.u32);
	// stw r10,28(r3)
	PPC_STORE_U32(ctx.r3.u32 + 28, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8327A334"))) PPC_WEAK_FUNC(sub_8327A334);
PPC_FUNC_IMPL(__imp__sub_8327A334) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8327A338"))) PPC_WEAK_FUNC(sub_8327A338);
PPC_FUNC_IMPL(__imp__sub_8327A338) {
	PPC_FUNC_PROLOGUE();
	// lis r10,1373
	ctx.r10.s64 = 89980928;
	// extsw r11,r3
	ctx.r11.s64 = ctx.r3.s32;
	// ori r10,r10,19072
	ctx.r10.u64 = ctx.r10.u64 | 19072;
	// extsw r9,r4
	ctx.r9.s64 = ctx.r4.s32;
	// mulld r11,r11,r10
	ctx.r11.s64 = ctx.r11.s64 * ctx.r10.s64;
	// divd r3,r11,r9
	ctx.r3.s64 = ctx.r11.s64 / ctx.r9.s64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8327A354"))) PPC_WEAK_FUNC(sub_8327A354);
PPC_FUNC_IMPL(__imp__sub_8327A354) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8327A358"))) PPC_WEAK_FUNC(sub_8327A358);
PPC_FUNC_IMPL(__imp__sub_8327A358) {
	PPC_FUNC_PROLOGUE();
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
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// addi r3,r31,28
	ctx.r3.s64 = ctx.r31.s64 + 28;
	// addi r30,r11,3496
	ctx.r30.s64 = ctx.r11.s64 + 3496;
	// bl 0x83276ee0
	ctx.lr = 0x8327A388;
	sub_83276EE0(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// lwz r10,96(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 96);
	// addi r4,r31,24
	ctx.r4.s64 = ctx.r31.s64 + 24;
	// lwz r9,80(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r8,84(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// stw r11,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r11.u32);
	// subf r11,r10,r8
	ctx.r11.s64 = ctx.r8.s64 - ctx.r10.s64;
	// stw r11,60(r31)
	PPC_STORE_U32(ctx.r31.u32 + 60, ctx.r11.u32);
	// stw r9,64(r31)
	PPC_STORE_U32(ctx.r31.u32 + 64, ctx.r9.u32);
	// lwz r11,140(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 140);
	// lwz r10,60(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 60);
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// bgt cr6,0x8327a3c8
	if (ctx.cr6.gt) goto loc_8327A3C8;
	// addi r3,r30,104
	ctx.r3.s64 = ctx.r30.s64 + 104;
	// li r5,44
	ctx.r5.s64 = 44;
	// bl 0x833a1390
	ctx.lr = 0x8327A3C8;
	sub_833A1390(ctx, base);
loc_8327A3C8:
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

__attribute__((alias("__imp__sub_8327A3E0"))) PPC_WEAK_FUNC(sub_8327A3E0);
PPC_FUNC_IMPL(__imp__sub_8327A3E0) {
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
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r10,3600(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 3600);
	// addi r11,r3,3496
	ctx.r11.s64 = ctx.r3.s64 + 3496;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r30,r11,104
	ctx.r30.s64 = ctx.r11.s64 + 104;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x8327a414
	if (!ctx.cr6.eq) goto loc_8327A414;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x8327a484
	goto loc_8327A484;
loc_8327A414:
	// addi r4,r11,28
	ctx.r4.s64 = ctx.r11.s64 + 28;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// li r5,32
	ctx.r5.s64 = 32;
	// bl 0x833a1390
	ctx.lr = 0x8327A424;
	sub_833A1390(ctx, base);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x83276ee0
	ctx.lr = 0x8327A434;
	sub_83276EE0(ctx, base);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// addi r3,r30,4
	ctx.r3.s64 = ctx.r30.s64 + 4;
	// bl 0x83276ee0
	ctx.lr = 0x8327A444;
	sub_83276EE0(ctx, base);
	// li r4,53
	ctx.r4.s64 = 53;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83274d00
	ctx.lr = 0x8327A450;
	sub_83274D00(ctx, base);
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r9,88(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// mullw r10,r3,r10
	ctx.r10.s64 = int64_t(ctx.r3.s32) * int64_t(ctx.r10.s32);
	// cmpw cr6,r11,r9
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r9.s32, ctx.xer);
	// bgt cr6,0x8327a470
	if (ctx.cr6.gt) goto loc_8327A470;
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x8327a484
	goto loc_8327A484;
loc_8327A470:
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// srawi r9,r11,31
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x7FFFFFFF) != 0);
	ctx.r9.s64 = ctx.r11.s32 >> 31;
	// rlwinm r8,r10,1,31,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0x1;
	// subfc r11,r10,r11
	ctx.xer.ca = ctx.r11.u32 >= ctx.r10.u32;
	ctx.r11.s64 = ctx.r11.s64 - ctx.r10.s64;
	// adde r3,r8,r9
	temp.u8 = (ctx.r8.u32 + ctx.r9.u32 < ctx.r8.u32) | (ctx.r8.u32 + ctx.r9.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r3.u64 = ctx.r8.u64 + ctx.r9.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
loc_8327A484:
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

__attribute__((alias("__imp__sub_8327A49C"))) PPC_WEAK_FUNC(sub_8327A49C);
PPC_FUNC_IMPL(__imp__sub_8327A49C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8327A4A0"))) PPC_WEAK_FUNC(sub_8327A4A0);
PPC_FUNC_IMPL(__imp__sub_8327A4A0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x833a01a0
	ctx.lr = 0x8327A4A8;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32219
	ctx.r11.s64 = -2111504384;
	// rlwinm r10,r4,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r11,r11,16808
	ctx.r11.s64 = ctx.r11.s64 + 16808;
	// lis r9,-32219
	ctx.r9.s64 = -2111504384;
	// mr r27,r5
	ctx.r27.u64 = ctx.r5.u64;
	// addi r9,r9,17308
	ctx.r9.s64 = ctx.r9.s64 + 17308;
	// lis r5,1373
	ctx.r5.s64 = 89980928;
	// lwzx r30,r10,r11
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// ori r5,r5,19072
	ctx.r5.u64 = ctx.r5.u64 | 19072;
	// rlwinm r11,r30,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 1) & 0xFFFFFFFE;
	// lwzx r31,r10,r9
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// mr r26,r6
	ctx.r26.u64 = ctx.r6.u64;
	// extsw r4,r11
	ctx.r4.s64 = ctx.r11.s32;
	// mr r29,r7
	ctx.r29.u64 = ctx.r7.u64;
	// bl 0x8328b6a8
	ctx.lr = 0x8327A4EC;
	sub_8328B6A8(ctx, base);
	// extsw r11,r3
	ctx.r11.s64 = ctx.r3.s32;
	// stw r28,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r28.u32);
	// cmpwi cr6,r27,0
	ctx.cr6.compare<int32_t>(ctx.r27.s32, 0, ctx.xer);
	// srawi r10,r11,1
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1) != 0);
	ctx.r10.s64 = ctx.r11.s32 >> 1;
	// stw r27,4(r29)
	PPC_STORE_U32(ctx.r29.u32 + 4, ctx.r27.u32);
	// clrlwi r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	// subf r10,r26,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r26.s64;
	// sth r11,30(r29)
	PPC_STORE_U16(ctx.r29.u32 + 30, ctx.r11.u16);
	// subfic r11,r10,0
	ctx.xer.ca = ctx.r10.u32 <= 0;
	ctx.r11.s64 = 0 - ctx.r10.s64;
	// rlwinm r11,r10,1,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0x1;
	// addme r11,r11
	temp.u64 = ctx.r11.u32 + ctx.xer.ca + 0xFFFFFFFF;
	ctx.xer.ca = temp.u64 >> 32;
	ctx.r11.u64 = temp.u32;
	// and r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 & ctx.r10.u64;
	// beq cr6,0x8327a5fc
	if (ctx.cr6.eq) goto loc_8327A5FC;
	// cmpwi cr6,r30,29970
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 29970, ctx.xer);
	// beq cr6,0x8327a588
	if (ctx.cr6.eq) goto loc_8327A588;
	// cmplwi cr6,r30,59940
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 59940, ctx.xer);
	// bne cr6,0x8327a5fc
	if (!ctx.cr6.eq) goto loc_8327A5FC;
	// lis r11,-32219
	ctx.r11.s64 = -2111504384;
	// addi r11,r11,17376
	ctx.r11.s64 = ctx.r11.s64 + 17376;
loc_8327A538:
	// lwz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r7,4(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// divw r5,r10,r8
	ctx.r5.s32 = ctx.r10.s32 / ctx.r8.s32;
	// lwz r9,8(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// divw r6,r10,r8
	ctx.r6.s32 = ctx.r10.s32 / ctx.r8.s32;
	// mullw r8,r5,r8
	ctx.r8.s64 = int64_t(ctx.r5.s32) * int64_t(ctx.r8.s32);
	// subf r10,r8,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r8.s64;
	// divw r8,r10,r7
	ctx.r8.s32 = ctx.r10.s32 / ctx.r7.s32;
	// divw r5,r10,r7
	ctx.r5.s32 = ctx.r10.s32 / ctx.r7.s32;
	// mullw r8,r8,r7
	ctx.r8.s64 = int64_t(ctx.r8.s32) * int64_t(ctx.r7.s32);
	// subf r10,r8,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r8.s64;
	// cmpw cr6,r10,r9
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r9.s32, ctx.xer);
	// bge cr6,0x8327a598
	if (!ctx.cr6.lt) goto loc_8327A598;
	// lwz r8,20(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// li r7,0
	ctx.r7.s64 = 0;
	// divw r4,r10,r8
	ctx.r4.s32 = ctx.r10.s32 / ctx.r8.s32;
	// divw r9,r10,r8
	ctx.r9.s32 = ctx.r10.s32 / ctx.r8.s32;
	// mullw r8,r4,r8
	ctx.r8.s64 = int64_t(ctx.r4.s32) * int64_t(ctx.r8.s32);
	// subf r10,r8,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r8.s64;
	// b 0x8327a5ec
	goto loc_8327A5EC;
loc_8327A588:
	// lis r11,-32219
	ctx.r11.s64 = -2111504384;
	// addi r11,r11,17376
	ctx.r11.s64 = ctx.r11.s64 + 17376;
	// addi r11,r11,-32
	ctx.r11.s64 = ctx.r11.s64 + -32;
	// b 0x8327a538
	goto loc_8327A538;
loc_8327A598:
	// lwz r7,12(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// subf r10,r9,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r9.s64;
	// lwz r9,16(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// divw r4,r10,r7
	ctx.r4.s32 = ctx.r10.s32 / ctx.r7.s32;
	// divw r8,r10,r7
	ctx.r8.s32 = ctx.r10.s32 / ctx.r7.s32;
	// mullw r7,r4,r7
	ctx.r7.s64 = int64_t(ctx.r4.s32) * int64_t(ctx.r7.s32);
	// subf r10,r7,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r7.s64;
	// addi r7,r8,1
	ctx.r7.s64 = ctx.r8.s64 + 1;
	// cmpw cr6,r10,r9
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r9.s32, ctx.xer);
	// bge cr6,0x8327a5d0
	if (!ctx.cr6.lt) goto loc_8327A5D0;
	// lwz r8,28(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// li r9,0
	ctx.r9.s64 = 0;
	// add r10,r8,r10
	ctx.r10.u64 = ctx.r8.u64 + ctx.r10.u64;
	// b 0x8327a5ec
	goto loc_8327A5EC;
loc_8327A5D0:
	// lwz r8,20(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// subf r4,r9,r10
	ctx.r4.s64 = ctx.r10.s64 - ctx.r9.s64;
	// divw r9,r4,r8
	ctx.r9.s32 = ctx.r4.s32 / ctx.r8.s32;
	// divw r10,r4,r8
	ctx.r10.s32 = ctx.r4.s32 / ctx.r8.s32;
	// mullw r8,r9,r8
	ctx.r8.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r8.s32);
	// addi r9,r10,1
	ctx.r9.s64 = ctx.r10.s64 + 1;
	// subf r10,r8,r4
	ctx.r10.s64 = ctx.r4.s64 - ctx.r8.s64;
loc_8327A5EC:
	// lwz r11,24(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// mullw r11,r11,r5
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r5.s32);
	// add r11,r11,r7
	ctx.r11.u64 = ctx.r11.u64 + ctx.r7.u64;
	// b 0x8327a630
	goto loc_8327A630;
loc_8327A5FC:
	// li r11,60
	ctx.r11.s64 = 60;
	// divw r9,r10,r31
	ctx.r9.s32 = ctx.r10.s32 / ctx.r31.s32;
	// divw r8,r10,r31
	ctx.r8.s32 = ctx.r10.s32 / ctx.r31.s32;
	// divw r7,r9,r11
	ctx.r7.s32 = ctx.r9.s32 / ctx.r11.s32;
	// divw r6,r9,r11
	ctx.r6.s32 = ctx.r9.s32 / ctx.r11.s32;
	// divw r5,r7,r11
	ctx.r5.s32 = ctx.r7.s32 / ctx.r11.s32;
	// mulli r4,r6,60
	ctx.r4.s64 = ctx.r6.s64 * 60;
	// mullw r8,r8,r31
	ctx.r8.s64 = int64_t(ctx.r8.s32) * int64_t(ctx.r31.s32);
	// mulli r5,r5,60
	ctx.r5.s64 = ctx.r5.s64 * 60;
	// divw r6,r7,r11
	ctx.r6.s32 = ctx.r7.s32 / ctx.r11.s32;
	// subf r10,r8,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r8.s64;
	// subf r9,r4,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r4.s64;
	// subf r11,r5,r7
	ctx.r11.s64 = ctx.r7.s64 - ctx.r5.s64;
loc_8327A630:
	// stw r6,8(r29)
	PPC_STORE_U32(ctx.r29.u32 + 8, ctx.r6.u32);
	// stw r11,12(r29)
	PPC_STORE_U32(ctx.r29.u32 + 12, ctx.r11.u32);
	// stw r9,16(r29)
	PPC_STORE_U32(ctx.r29.u32 + 16, ctx.r9.u32);
	// stw r10,20(r29)
	PPC_STORE_U32(ctx.r29.u32 + 20, ctx.r10.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x833a01f0
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8327A648"))) PPC_WEAK_FUNC(sub_8327A648);
PPC_FUNC_IMPL(__imp__sub_8327A648) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x833a01a0
	ctx.lr = 0x8327A650;
	__savegprlr_26(ctx, base);
	// lha r10,30(r3)
	ctx.r10.s64 = int16_t(PPC_LOAD_U16(ctx.r3.u32 + 30));
	// lis r8,-32219
	ctx.r8.s64 = -2111504384;
	// lha r11,28(r3)
	ctx.r11.s64 = int16_t(PPC_LOAD_U16(ctx.r3.u32 + 28));
	// addi r29,r8,17308
	ctx.r29.s64 = ctx.r8.s64 + 17308;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwz r30,24(r3)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// lwz r6,0(r3)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r7,60
	ctx.r7.s64 = 60;
	// srawi r10,r11,1
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1) != 0);
	ctx.r10.s64 = ctx.r11.s32 >> 1;
	// lwz r9,20(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// rlwinm r28,r6,2,0,29
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r8,16(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// addze r10,r10
	temp.s64 = ctx.r10.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r10.u32;
	ctx.r10.s64 = temp.s64;
	// lwz r31,12(r3)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// srawi r26,r11,1
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1) != 0);
	ctx.r26.s64 = ctx.r11.s32 >> 1;
	// lwz r27,4(r3)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// add r10,r10,r30
	ctx.r10.u64 = ctx.r10.u64 + ctx.r30.u64;
	// lwz r5,8(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// cmpwi cr6,r27,0
	ctx.cr6.compare<int32_t>(ctx.r27.s32, 0, ctx.xer);
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// lwzx r30,r28,r29
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r28.u32 + ctx.r29.u32);
	// addze r29,r26
	temp.s64 = ctx.r26.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r26.u32;
	ctx.r29.s64 = temp.s64;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// rlwinm r29,r29,1,0,30
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 1) & 0xFFFFFFFE;
	// divw r9,r10,r30
	ctx.r9.s32 = ctx.r10.s32 / ctx.r30.s32;
	// divw r28,r10,r30
	ctx.r28.s32 = ctx.r10.s32 / ctx.r30.s32;
	// add r9,r9,r8
	ctx.r9.u64 = ctx.r9.u64 + ctx.r8.u64;
	// mullw r30,r28,r30
	ctx.r30.s64 = int64_t(ctx.r28.s32) * int64_t(ctx.r30.s32);
	// divw r8,r9,r7
	ctx.r8.s32 = ctx.r9.s32 / ctx.r7.s32;
	// divw r28,r9,r7
	ctx.r28.s32 = ctx.r9.s32 / ctx.r7.s32;
	// add r8,r8,r31
	ctx.r8.u64 = ctx.r8.u64 + ctx.r31.u64;
	// mulli r28,r28,60
	ctx.r28.s64 = ctx.r28.s64 * 60;
	// divw r31,r8,r7
	ctx.r31.s32 = ctx.r8.s32 / ctx.r7.s32;
	// divw r7,r8,r7
	ctx.r7.s32 = ctx.r8.s32 / ctx.r7.s32;
	// mulli r27,r31,60
	ctx.r27.s64 = ctx.r31.s64 * 60;
	// subf r31,r29,r11
	ctx.r31.s64 = ctx.r11.s64 - ctx.r29.s64;
	// subf r11,r30,r10
	ctx.r11.s64 = ctx.r10.s64 - ctx.r30.s64;
	// subf r9,r28,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r28.s64;
	// add r7,r7,r5
	ctx.r7.u64 = ctx.r7.u64 + ctx.r5.u64;
	// subf r10,r27,r8
	ctx.r10.s64 = ctx.r8.s64 - ctx.r27.s64;
	// beq cr6,0x8327a724
	if (ctx.cr6.eq) goto loc_8327A724;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne cr6,0x8327a724
	if (!ctx.cr6.eq) goto loc_8327A724;
	// li r8,10
	ctx.r8.s64 = 10;
	// divw r8,r10,r8
	ctx.r8.s32 = ctx.r10.s32 / ctx.r8.s32;
	// mulli r8,r8,10
	ctx.r8.s64 = ctx.r8.s64 * 10;
	// subf. r8,r8,r10
	ctx.r8.s64 = ctx.r10.s64 - ctx.r8.s64;
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq 0x8327a724
	if (ctx.cr0.eq) goto loc_8327A724;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8327a720
	if (ctx.cr6.eq) goto loc_8327A720;
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x8327a724
	if (!ctx.cr6.eq) goto loc_8327A724;
loc_8327A720:
	// li r11,2
	ctx.r11.s64 = 2;
loc_8327A724:
	// stw r6,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r6.u32);
	// lwz r6,4(r3)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// stw r6,4(r4)
	PPC_STORE_U32(ctx.r4.u32 + 4, ctx.r6.u32);
	// stw r7,8(r4)
	PPC_STORE_U32(ctx.r4.u32 + 8, ctx.r7.u32);
	// stw r10,12(r4)
	PPC_STORE_U32(ctx.r4.u32 + 12, ctx.r10.u32);
	// stw r9,16(r4)
	PPC_STORE_U32(ctx.r4.u32 + 16, ctx.r9.u32);
	// stw r11,20(r4)
	PPC_STORE_U32(ctx.r4.u32 + 20, ctx.r11.u32);
	// sth r31,30(r4)
	PPC_STORE_U16(ctx.r4.u32 + 30, ctx.r31.u16);
	// b 0x833a01f0
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8327A748"))) PPC_WEAK_FUNC(sub_8327A748);
PPC_FUNC_IMPL(__imp__sub_8327A748) {
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
	// lwz r10,3556(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 3556);
	// addi r11,r3,3496
	ctx.r11.s64 = ctx.r3.s64 + 3496;
	// addi r31,r11,60
	ctx.r31.s64 = ctx.r11.s64 + 60;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x8327a7bc
	if (!ctx.cr6.eq) goto loc_8327A7BC;
	// addi r4,r11,28
	ctx.r4.s64 = ctx.r11.s64 + 28;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// li r5,32
	ctx.r5.s64 = 32;
	// bl 0x833a1390
	ctx.lr = 0x8327A77C;
	sub_833A1390(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// stw r11,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r11.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x83276ee0
	ctx.lr = 0x8327A794;
	sub_83276EE0(ctx, base);
	// addi r3,r31,4
	ctx.r3.s64 = ctx.r31.s64 + 4;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// li r5,32
	ctx.r5.s64 = 32;
	// bl 0x833a1390
	ctx.lr = 0x8327A7A4;
	sub_833A1390(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r10,84(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// li r9,1
	ctx.r9.s64 = 1;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// stw r11,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r11.u32);
	// stw r10,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r10.u32);
loc_8327A7BC:
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

__attribute__((alias("__imp__sub_8327A7D0"))) PPC_WEAK_FUNC(sub_8327A7D0);
PPC_FUNC_IMPL(__imp__sub_8327A7D0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x833a01ac
	ctx.lr = 0x8327A7D8;
	__savegprlr_29(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r11,r3,3496
	ctx.r11.s64 = ctx.r3.s64 + 3496;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r4,r11,28
	ctx.r4.s64 = ctx.r11.s64 + 28;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// li r5,32
	ctx.r5.s64 = 32;
	// addi r29,r11,104
	ctx.r29.s64 = ctx.r11.s64 + 104;
	// addi r31,r11,192
	ctx.r31.s64 = ctx.r11.s64 + 192;
	// bl 0x833a1390
	ctx.lr = 0x8327A7FC;
	sub_833A1390(ctx, base);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x83276ee0
	ctx.lr = 0x8327A80C;
	sub_83276EE0(ctx, base);
	// addi r3,r31,4
	ctx.r3.s64 = ctx.r31.s64 + 4;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// li r5,32
	ctx.r5.s64 = 32;
	// bl 0x833a1390
	ctx.lr = 0x8327A81C;
	sub_833A1390(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r8,3592(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + 3592);
	// li r9,1
	ctx.r9.s64 = 1;
	// lwz r10,84(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// stw r11,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r11.u32);
	// subf r11,r8,r10
	ctx.r11.s64 = ctx.r10.s64 - ctx.r8.s64;
	// stw r11,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r11.u32);
	// lwz r10,36(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// lwz r11,36(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 36);
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// bgt cr6,0x8327a85c
	if (ctx.cr6.gt) goto loc_8327A85C;
	// li r5,44
	ctx.r5.s64 = 44;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x833a1390
	ctx.lr = 0x8327A85C;
	sub_833A1390(ctx, base);
loc_8327A85C:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x833a01fc
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8327A864"))) PPC_WEAK_FUNC(sub_8327A864);
PPC_FUNC_IMPL(__imp__sub_8327A864) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8327A868"))) PPC_WEAK_FUNC(sub_8327A868);
PPC_FUNC_IMPL(__imp__sub_8327A868) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,16(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
	// lwz r11,28(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 28);
	// stw r11,4(r4)
	PPC_STORE_U32(ctx.r4.u32 + 4, ctx.r11.u32);
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// stw r11,8(r4)
	PPC_STORE_U32(ctx.r4.u32 + 8, ctx.r11.u32);
	// lwz r11,36(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 36);
	// stw r11,12(r4)
	PPC_STORE_U32(ctx.r4.u32 + 12, ctx.r11.u32);
	// lwz r11,40(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 40);
	// stw r11,16(r4)
	PPC_STORE_U32(ctx.r4.u32 + 16, ctx.r11.u32);
	// lwz r11,44(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 44);
	// stw r11,20(r4)
	PPC_STORE_U32(ctx.r4.u32 + 20, ctx.r11.u32);
	// lwz r11,20(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// stw r11,24(r4)
	PPC_STORE_U32(ctx.r4.u32 + 24, ctx.r11.u32);
	// lbz r11,84(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 84);
	// extsb r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	// sth r11,28(r4)
	PPC_STORE_U16(ctx.r4.u32 + 28, ctx.r11.u16);
	// sth r10,30(r4)
	PPC_STORE_U16(ctx.r4.u32 + 30, ctx.r10.u16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8327A8B8"))) PPC_WEAK_FUNC(sub_8327A8B8);
PPC_FUNC_IMPL(__imp__sub_8327A8B8) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,0(r5)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// lwz r11,4(r5)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 4);
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// lwz r11,8(r5)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 8);
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// lwz r11,12(r5)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 12);
	// stw r11,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r11.u32);
	// lwz r11,16(r5)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 16);
	// stw r11,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r11.u32);
	// stw r4,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r4.u32);
	// stw r6,32(r3)
	PPC_STORE_U32(ctx.r3.u32 + 32, ctx.r6.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8327A8EC"))) PPC_WEAK_FUNC(sub_8327A8EC);
PPC_FUNC_IMPL(__imp__sub_8327A8EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8327A8F0"))) PPC_WEAK_FUNC(sub_8327A8F0);
PPC_FUNC_IMPL(__imp__sub_8327A8F0) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,8448(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8448);
	// li r3,0
	ctx.r3.s64 = 0;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x8327a910
	if (ctx.cr6.eq) goto loc_8327A910;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// b 0x8327a918
	goto loc_8327A918;
loc_8327A910:
	// cmpwi cr6,r4,2
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 2, ctx.xer);
	// beq cr6,0x8327a920
	if (ctx.cr6.eq) goto loc_8327A920;
loc_8327A918:
	// cmpwi cr6,r4,3
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 3, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
loc_8327A920:
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8327A928"))) PPC_WEAK_FUNC(sub_8327A928);
PPC_FUNC_IMPL(__imp__sub_8327A928) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x833a01a4
	ctx.lr = 0x8327A930;
	__savegprlr_27(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r30,8448(r3)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8448);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// mr r27,r5
	ctx.r27.u64 = ctx.r5.u64;
	// lwz r11,152(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 152);
	// lwz r29,4(r30)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8327a9ac
	if (ctx.cr6.eq) goto loc_8327A9AC;
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x8328b888
	ctx.lr = 0x8327A964;
	sub_8328B888(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x8327a978
	if (!ctx.cr6.eq) goto loc_8327A978;
	// li r29,5
	ctx.r29.s64 = 5;
	// b 0x8327a9ac
	goto loc_8327A9AC;
loc_8327A978:
	// lwz r11,3776(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 3776);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8327a99c
	if (!ctx.cr6.eq) goto loc_8327A99C;
	// li r4,73
	ctx.r4.s64 = 73;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83274d00
	ctx.lr = 0x8327A990;
	sub_83274D00(ctx, base);
	// cmpwi cr6,r3,1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 1, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// beq cr6,0x8327a9a0
	if (ctx.cr6.eq) goto loc_8327A9A0;
loc_8327A99C:
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
loc_8327A9A0:
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x8327a9ac
	if (!ctx.cr6.eq) goto loc_8327A9AC;
	// li r29,2
	ctx.r29.s64 = 2;
loc_8327A9AC:
	// cmpwi cr6,r27,1
	ctx.cr6.compare<int32_t>(ctx.r27.s32, 1, ctx.xer);
	// bne cr6,0x8327a9cc
	if (!ctx.cr6.eq) goto loc_8327A9CC;
	// lwz r11,24(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 24);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x8327a9c8
	if (ctx.cr6.eq) goto loc_8327A9C8;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// bne cr6,0x8327a9cc
	if (!ctx.cr6.eq) goto loc_8327A9CC;
loc_8327A9C8:
	// li r29,2
	ctx.r29.s64 = 2;
loc_8327A9CC:
	// stw r29,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r29.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x833a01f4
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8327A9D8"))) PPC_WEAK_FUNC(sub_8327A9D8);
PPC_FUNC_IMPL(__imp__sub_8327A9D8) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// li r3,3
	ctx.r3.s64 = 3;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// li r3,5
	ctx.r3.s64 = 5;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8327A9F0"))) PPC_WEAK_FUNC(sub_8327A9F0);
PPC_FUNC_IMPL(__imp__sub_8327A9F0) {
	PPC_FUNC_PROLOGUE();
	// cmpwi cr6,r4,1
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 1, ctx.xer);
	// beq cr6,0x8327aa20
	if (ctx.cr6.eq) goto loc_8327AA20;
	// cmpwi cr6,r4,2
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 2, ctx.xer);
	// beq cr6,0x8327aa18
	if (ctx.cr6.eq) goto loc_8327AA18;
	// cmpwi cr6,r4,3
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 3, ctx.xer);
	// beq cr6,0x8327aa10
	if (ctx.cr6.eq) goto loc_8327AA10;
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
loc_8327AA10:
	// lwz r11,2620(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 2620);
	// b 0x8327aa24
	goto loc_8327AA24;
loc_8327AA18:
	// lwz r11,2616(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 2616);
	// b 0x8327aa24
	goto loc_8327AA24;
loc_8327AA20:
	// lwz r11,2612(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 2612);
loc_8327AA24:
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r3,r11,27,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// blr 
	return;
}

