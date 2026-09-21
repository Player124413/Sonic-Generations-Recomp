#include "ppc_recomp_shared.h"

__attribute__((alias("__imp__sub_832711A8"))) PPC_WEAK_FUNC(sub_832711A8);
PPC_FUNC_IMPL(__imp__sub_832711A8) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// stw r11,4(r4)
	PPC_STORE_U32(ctx.r4.u32 + 4, ctx.r11.u32);
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// stw r11,8(r4)
	PPC_STORE_U32(ctx.r4.u32 + 8, ctx.r11.u32);
	// lha r11,14(r3)
	ctx.r11.s64 = int16_t(PPC_LOAD_U16(ctx.r3.u32 + 14));
	// stw r11,12(r4)
	PPC_STORE_U32(ctx.r4.u32 + 12, ctx.r11.u32);
	// lha r11,12(r3)
	ctx.r11.s64 = int16_t(PPC_LOAD_U16(ctx.r3.u32 + 12));
	// stw r11,16(r4)
	PPC_STORE_U32(ctx.r4.u32 + 16, ctx.r11.u32);
	// lha r11,12(r3)
	ctx.r11.s64 = int16_t(PPC_LOAD_U16(ctx.r3.u32 + 12));
	// stw r11,20(r4)
	PPC_STORE_U32(ctx.r4.u32 + 20, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_832711DC"))) PPC_WEAK_FUNC(sub_832711DC);
PPC_FUNC_IMPL(__imp__sub_832711DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832711E0"))) PPC_WEAK_FUNC(sub_832711E0);
PPC_FUNC_IMPL(__imp__sub_832711E0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	ctx.lr = 0x83271200;
	sub_8326DF70(ctx, base);
	// cmpwi cr6,r3,1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 1, ctx.xer);
	// beq cr6,0x83271218
	if (ctx.cr6.eq) goto loc_83271218;
	// lis r11,-32219
	ctx.r11.s64 = -2111504384;
	// addi r3,r11,13748
	ctx.r3.s64 = ctx.r11.s64 + 13748;
	// bl 0x83278688
	ctx.lr = 0x83271214;
	sub_83278688(ctx, base);
	// b 0x83271234
	goto loc_83271234;
loc_83271218:
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83270e58
	ctx.lr = 0x83271224;
	sub_83270E58(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8326e348
	ctx.lr = 0x8327122C;
	sub_8326E348(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x8327f1f0
	ctx.lr = 0x83271234;
	sub_8327F1F0(ctx, base);
loc_83271234:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8327124C"))) PPC_WEAK_FUNC(sub_8327124C);
PPC_FUNC_IMPL(__imp__sub_8327124C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83271250"))) PPC_WEAK_FUNC(sub_83271250);
PPC_FUNC_IMPL(__imp__sub_83271250) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x833a01a8
	ctx.lr = 0x83271258;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x8326df70
	ctx.lr = 0x83271264;
	sub_8326DF70(ctx, base);
	// cmpwi cr6,r3,1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 1, ctx.xer);
	// beq cr6,0x8327127c
	if (ctx.cr6.eq) goto loc_8327127C;
	// lis r11,-32219
	ctx.r11.s64 = -2111504384;
	// addi r3,r11,13788
	ctx.r3.s64 = ctx.r11.s64 + 13788;
	// bl 0x83278688
	ctx.lr = 0x83271278;
	sub_83278688(ctx, base);
	// b 0x832712bc
	goto loc_832712BC;
loc_8327127C:
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r30,160(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 160);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r29,164(r31)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r31.u32 + 164);
	// lwz r28,168(r31)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r31.u32 + 168);
	// bl 0x83270e58
	ctx.lr = 0x83271294;
	sub_83270E58(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8326e348
	ctx.lr = 0x8327129C;
	sub_8326E348(ctx, base);
	// cmpw cr6,r29,r28
	ctx.cr6.compare<int32_t>(ctx.r29.s32, ctx.r28.s32, ctx.xer);
	// ble cr6,0x832712bc
	if (!ctx.cr6.gt) goto loc_832712BC;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x8327f458
	ctx.lr = 0x832712AC;
	sub_8327F458(ctx, base);
	// lwz r11,168(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 168);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,168(r31)
	PPC_STORE_U32(ctx.r31.u32 + 168, ctx.r11.u32);
	// stw r11,164(r31)
	PPC_STORE_U32(ctx.r31.u32 + 164, ctx.r11.u32);
loc_832712BC:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x833a01f8
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832712C4"))) PPC_WEAK_FUNC(sub_832712C4);
PPC_FUNC_IMPL(__imp__sub_832712C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832712C8"))) PPC_WEAK_FUNC(sub_832712C8);
PPC_FUNC_IMPL(__imp__sub_832712C8) {
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
	ctx.lr = 0x832712E0;
	sub_8326DF70(ctx, base);
	// cmpwi cr6,r3,1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 1, ctx.xer);
	// beq cr6,0x832712fc
	if (ctx.cr6.eq) goto loc_832712FC;
	// lis r11,-32219
	ctx.r11.s64 = -2111504384;
	// addi r3,r11,13832
	ctx.r3.s64 = ctx.r11.s64 + 13832;
	// bl 0x83278688
	ctx.lr = 0x832712F4;
	sub_83278688(ctx, base);
loc_832712F4:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x83271310
	goto loc_83271310;
loc_832712FC:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8326e348
	ctx.lr = 0x83271304;
	sub_8326E348(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x832712f4
	if (ctx.cr0.eq) goto loc_832712F4;
	// bl 0x83285020
	ctx.lr = 0x83271310;
	sub_83285020(ctx, base);
loc_83271310:
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

__attribute__((alias("__imp__sub_83271324"))) PPC_WEAK_FUNC(sub_83271324);
PPC_FUNC_IMPL(__imp__sub_83271324) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83271328"))) PPC_WEAK_FUNC(sub_83271328);
PPC_FUNC_IMPL(__imp__sub_83271328) {
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
	// bl 0x83285460
	ctx.lr = 0x8327133C;
	sub_83285460(ctx, base);
	// cmpwi cr6,r3,1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 1, ctx.xer);
	// li r3,-1
	ctx.r3.s64 = -1;
	// bne cr6,0x8327134c
	if (!ctx.cr6.eq) goto loc_8327134C;
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
loc_8327134C:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8327135C"))) PPC_WEAK_FUNC(sub_8327135C);
PPC_FUNC_IMPL(__imp__sub_8327135C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83271360"))) PPC_WEAK_FUNC(sub_83271360);
PPC_FUNC_IMPL(__imp__sub_83271360) {
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
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x83285488
	ctx.lr = 0x83271374;
	sub_83285488(ctx, base);
	// addi r11,r3,-1
	ctx.r11.s64 = ctx.r3.s64 + -1;
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// addic r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// subfe r11,r11,r11
	temp.u8 = (~ctx.r11.u32 + ctx.r11.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r11.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r3,r11,r10
	ctx.r3.u64 = ctx.r11.u64 & ctx.r10.u64;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83271398"))) PPC_WEAK_FUNC(sub_83271398);
PPC_FUNC_IMPL(__imp__sub_83271398) {
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
	// bl 0x832853e8
	ctx.lr = 0x832713AC;
	sub_832853E8(ctx, base);
	// cmpwi cr6,r3,1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 1, ctx.xer);
	// beq cr6,0x832713bc
	if (ctx.cr6.eq) goto loc_832713BC;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x832713c4
	goto loc_832713C4;
loc_832713BC:
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// rlwinm r3,r11,3,0,28
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
loc_832713C4:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_832713D4"))) PPC_WEAK_FUNC(sub_832713D4);
PPC_FUNC_IMPL(__imp__sub_832713D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832713D8"))) PPC_WEAK_FUNC(sub_832713D8);
PPC_FUNC_IMPL(__imp__sub_832713D8) {
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
	// lwz r4,224(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 224);
	// bl 0x83270388
	ctx.lr = 0x832713EC;
	sub_83270388(ctx, base);
	// cmpwi cr6,r3,81
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 81, ctx.xer);
	// beq cr6,0x832713fc
	if (ctx.cr6.eq) goto loc_832713FC;
	// cmpwi cr6,r3,97
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 97, ctx.xer);
	// bne cr6,0x83271400
	if (!ctx.cr6.eq) goto loc_83271400;
loc_832713FC:
	// li r3,65
	ctx.r3.s64 = 65;
loc_83271400:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83271410"))) PPC_WEAK_FUNC(sub_83271410);
PPC_FUNC_IMPL(__imp__sub_83271410) {
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
	// li r4,224
	ctx.r4.s64 = 224;
	// bl 0x83285728
	ctx.lr = 0x83271428;
	sub_83285728(ctx, base);
	// cmpwi cr6,r3,1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 1, ctx.xer);
	// beq cr6,0x83271438
	if (ctx.cr6.eq) goto loc_83271438;
loc_83271430:
	// li r3,17
	ctx.r3.s64 = 17;
	// b 0x83271468
	goto loc_83271468;
loc_83271438:
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x83271464
	if (ctx.cr6.eq) goto loc_83271464;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// beq cr6,0x8327145c
	if (ctx.cr6.eq) goto loc_8327145C;
	// cmpwi cr6,r11,6
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 6, ctx.xer);
	// bne cr6,0x83271430
	if (!ctx.cr6.eq) goto loc_83271430;
	// li r3,97
	ctx.r3.s64 = 97;
	// b 0x83271468
	goto loc_83271468;
loc_8327145C:
	// li r3,81
	ctx.r3.s64 = 81;
	// b 0x83271468
	goto loc_83271468;
loc_83271464:
	// li r3,33
	ctx.r3.s64 = 33;
loc_83271468:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83271478"))) PPC_WEAK_FUNC(sub_83271478);
PPC_FUNC_IMPL(__imp__sub_83271478) {
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
	// bl 0x83285370
	ctx.lr = 0x8327148C;
	sub_83285370(ctx, base);
	// cmpwi cr6,r3,1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 1, ctx.xer);
	// li r3,-1
	ctx.r3.s64 = -1;
	// bne cr6,0x8327149c
	if (!ctx.cr6.eq) goto loc_8327149C;
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
loc_8327149C:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_832714AC"))) PPC_WEAK_FUNC(sub_832714AC);
PPC_FUNC_IMPL(__imp__sub_832714AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832714B0"))) PPC_WEAK_FUNC(sub_832714B0);
PPC_FUNC_IMPL(__imp__sub_832714B0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// li r9,8
	ctx.r9.s64 = 8;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r10,r3,212
	ctx.r10.s64 = ctx.r3.s64 + 212;
	// stw r11,220(r3)
	PPC_STORE_U32(ctx.r3.u32 + 220, ctx.r11.u32);
	// stw r11,224(r3)
	PPC_STORE_U32(ctx.r3.u32 + 224, ctx.r11.u32);
	// stw r11,228(r3)
	PPC_STORE_U32(ctx.r3.u32 + 228, ctx.r11.u32);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_832714CC:
	// li r9,17
	ctx.r9.s64 = 17;
	// stw r11,20(r10)
	PPC_STORE_U32(ctx.r10.u32 + 20, ctx.r11.u32);
	// stw r11,24(r10)
	PPC_STORE_U32(ctx.r10.u32 + 24, ctx.r11.u32);
	// stw r11,44(r10)
	PPC_STORE_U32(ctx.r10.u32 + 44, ctx.r11.u32);
	// stw r11,48(r10)
	PPC_STORE_U32(ctx.r10.u32 + 48, ctx.r11.u32);
	// stw r11,52(r10)
	PPC_STORE_U32(ctx.r10.u32 + 52, ctx.r11.u32);
	// stwu r9,56(r10)
	ea = 56 + ctx.r10.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r10.u32 = ea;
	// bdnz 0x832714cc
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_832714CC;
	// li r9,32
	ctx.r9.s64 = 32;
	// stw r11,680(r3)
	PPC_STORE_U32(ctx.r3.u32 + 680, ctx.r11.u32);
	// addi r10,r3,680
	ctx.r10.s64 = ctx.r3.s64 + 680;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_832714FC:
	// stw r11,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r11.u32);
	// stw r11,8(r10)
	PPC_STORE_U32(ctx.r10.u32 + 8, ctx.r11.u32);
	// stw r11,12(r10)
	PPC_STORE_U32(ctx.r10.u32 + 12, ctx.r11.u32);
	// stwu r11,16(r10)
	ea = 16 + ctx.r10.u32;
	PPC_STORE_U32(ea, ctx.r11.u32);
	ctx.r10.u32 = ea;
	// bdnz 0x832714fc
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_832714FC;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83271514"))) PPC_WEAK_FUNC(sub_83271514);
PPC_FUNC_IMPL(__imp__sub_83271514) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83271518"))) PPC_WEAK_FUNC(sub_83271518);
PPC_FUNC_IMPL(__imp__sub_83271518) {
	PPC_FUNC_PROLOGUE();
	// cmpwi cr6,r3,1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 1, ctx.xer);
	// beq cr6,0x8327156c
	if (ctx.cr6.eq) goto loc_8327156C;
	// ble cr6,0x83271564
	if (!ctx.cr6.gt) goto loc_83271564;
	// cmpwi cr6,r3,5
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 5, ctx.xer);
	// ble cr6,0x8327155c
	if (!ctx.cr6.gt) goto loc_8327155C;
	// cmpwi cr6,r3,6
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 6, ctx.xer);
	// beq cr6,0x83271554
	if (ctx.cr6.eq) goto loc_83271554;
	// cmpwi cr6,r3,7
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 7, ctx.xer);
	// beq cr6,0x8327154c
	if (ctx.cr6.eq) goto loc_8327154C;
	// cmpwi cr6,r3,8
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 8, ctx.xer);
	// bne cr6,0x83271564
	if (!ctx.cr6.eq) goto loc_83271564;
	// li r3,5
	ctx.r3.s64 = 5;
	// blr 
	return;
loc_8327154C:
	// li r3,4
	ctx.r3.s64 = 4;
	// blr 
	return;
loc_83271554:
	// li r3,3
	ctx.r3.s64 = 3;
	// blr 
	return;
loc_8327155C:
	// li r3,2
	ctx.r3.s64 = 2;
	// blr 
	return;
loc_83271564:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_8327156C:
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83271574"))) PPC_WEAK_FUNC(sub_83271574);
PPC_FUNC_IMPL(__imp__sub_83271574) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83271578"))) PPC_WEAK_FUNC(sub_83271578);
PPC_FUNC_IMPL(__imp__sub_83271578) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x833a019c
	ctx.lr = 0x83271580;
	__savegprlr_25(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x8326e348
	ctx.lr = 0x8327158C;
	sub_8326E348(ctx, base);
	// lwz r11,1504(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1504);
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// li r25,0
	ctx.r25.s64 = 0;
	// li r28,-1
	ctx.r28.s64 = -1;
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x83271604
	if (!ctx.cr6.eq) goto loc_83271604;
	// lwz r11,1528(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1528);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x83271604
	if (!ctx.cr6.eq) goto loc_83271604;
	// lwz r5,1532(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1532);
	// rlwinm r11,r5,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 4) & 0xFFFFFFF0;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// lwz r11,684(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 684);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x832715f4
	if (!ctx.cr6.eq) goto loc_832715F4;
	// addi r11,r5,43
	ctx.r11.s64 = ctx.r5.s64 + 43;
	// rlwinm r11,r11,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// lwzx r11,r11,r31
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r31.u32);
	// cmpwi cr6,r11,5
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 5, ctx.xer);
	// bne cr6,0x832715f4
	if (!ctx.cr6.eq) goto loc_832715F4;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8326ec80
	ctx.lr = 0x832715EC;
	sub_8326EC80(ctx, base);
	// li r25,1
	ctx.r25.s64 = 1;
	// b 0x83271604
	goto loc_83271604;
loc_832715F4:
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r28,-1
	ctx.r28.s64 = -1;
	// bl 0x8326e630
	ctx.lr = 0x83271604;
	sub_8326E630(ctx, base);
loc_83271604:
	// lwz r11,1544(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1544);
	// li r27,0
	ctx.r27.s64 = 0;
	// li r30,-1
	ctx.r30.s64 = -1;
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x8327165c
	if (!ctx.cr6.eq) goto loc_8327165C;
	// lwz r11,1568(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1568);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x8327165c
	if (!ctx.cr6.eq) goto loc_8327165C;
	// lwz r5,1572(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1572);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// rlwinm r11,r5,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 4) & 0xFFFFFFF0;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// lwz r11,684(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 684);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x83271654
	if (!ctx.cr6.eq) goto loc_83271654;
	// bl 0x8326ec80
	ctx.lr = 0x8327164C;
	sub_8326EC80(ctx, base);
	// li r27,1
	ctx.r27.s64 = 1;
	// b 0x8327165c
	goto loc_8327165C;
loc_83271654:
	// li r30,-1
	ctx.r30.s64 = -1;
	// bl 0x8326e630
	ctx.lr = 0x8327165C;
	sub_8326E630(ctx, base);
loc_8327165C:
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// li r4,30
	ctx.r4.s64 = 30;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// li r29,0
	ctx.r29.s64 = 0;
	// bl 0x83274db0
	ctx.lr = 0x83271670;
	sub_83274DB0(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// bne cr6,0x832716c0
	if (!ctx.cr6.eq) goto loc_832716C0;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r10,r31,684
	ctx.r10.s64 = ctx.r31.s64 + 684;
loc_83271684:
	// lwz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmpwi cr6,r9,1
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 1, ctx.xer);
	// bne cr6,0x832716a0
	if (!ctx.cr6.eq) goto loc_832716A0;
	// cmpw cr6,r11,r28
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r28.s32, ctx.xer);
	// beq cr6,0x832716a0
	if (ctx.cr6.eq) goto loc_832716A0;
	// cmpw cr6,r11,r30
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r30.s32, ctx.xer);
	// bne cr6,0x832716b4
	if (!ctx.cr6.eq) goto loc_832716B4;
loc_832716A0:
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,16
	ctx.r10.s64 = ctx.r10.s64 + 16;
	// cmpwi cr6,r11,32
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 32, ctx.xer);
	// blt cr6,0x83271684
	if (ctx.cr6.lt) goto loc_83271684;
	// b 0x83271720
	goto loc_83271720;
loc_832716B4:
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// beq cr6,0x83271720
	if (ctx.cr6.eq) goto loc_83271720;
loc_832716C0:
	// cmpw cr6,r11,r28
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r28.s32, ctx.xer);
	// beq cr6,0x83271720
	if (ctx.cr6.eq) goto loc_83271720;
	// cmpw cr6,r11,r30
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r30.s32, ctx.xer);
	// beq cr6,0x83271720
	if (ctx.cr6.eq) goto loc_83271720;
	// addi r11,r11,43
	ctx.r11.s64 = ctx.r11.s64 + 43;
	// rlwinm r11,r11,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// lwzx r11,r11,r31
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r31.u32);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x832716e8
	if (!ctx.cr6.eq) goto loc_832716E8;
	// li r29,1
	ctx.r29.s64 = 1;
loc_832716E8:
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// bne cr6,0x83271700
	if (!ctx.cr6.eq) goto loc_83271700;
	// lwz r10,15072(r26)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r26.u32 + 15072);
	// cmpwi cr6,r10,1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 1, ctx.xer);
	// bne cr6,0x83271700
	if (!ctx.cr6.eq) goto loc_83271700;
	// li r29,1
	ctx.r29.s64 = 1;
loc_83271700:
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x83271718
	if (!ctx.cr6.eq) goto loc_83271718;
	// lwz r11,15076(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 15076);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x83271718
	if (!ctx.cr6.eq) goto loc_83271718;
	// li r29,1
	ctx.r29.s64 = 1;
loc_83271718:
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// bne cr6,0x8327172c
	if (!ctx.cr6.eq) goto loc_8327172C;
loc_83271720:
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8326ded8
	ctx.lr = 0x8327172C;
	sub_8326DED8(ctx, base);
loc_8327172C:
	// cmpwi cr6,r25,1
	ctx.cr6.compare<int32_t>(ctx.r25.s32, 1, ctx.xer);
	// beq cr6,0x8327173c
	if (ctx.cr6.eq) goto loc_8327173C;
	// cmpwi cr6,r27,1
	ctx.cr6.compare<int32_t>(ctx.r27.s32, 1, ctx.xer);
	// bne cr6,0x8327174c
	if (!ctx.cr6.eq) goto loc_8327174C;
loc_8327173C:
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,67
	ctx.r4.s64 = 67;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8326def8
	ctx.lr = 0x8327174C;
	sub_8326DEF8(ctx, base);
loc_8327174C:
	// cmpwi cr6,r25,1
	ctx.cr6.compare<int32_t>(ctx.r25.s32, 1, ctx.xer);
	// bne cr6,0x8327176c
	if (!ctx.cr6.eq) goto loc_8327176C;
	// li r4,4
	ctx.r4.s64 = 4;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8326e0b8
	ctx.lr = 0x83271760;
	sub_8326E0B8(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8326ded8
	ctx.lr = 0x8327176C;
	sub_8326DED8(ctx, base);
loc_8327176C:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x833a01ec
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83271774"))) PPC_WEAK_FUNC(sub_83271774);
PPC_FUNC_IMPL(__imp__sub_83271774) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83271778"))) PPC_WEAK_FUNC(sub_83271778);
PPC_FUNC_IMPL(__imp__sub_83271778) {
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
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x832854b0
	ctx.lr = 0x8327178C;
	sub_832854B0(ctx, base);
	// addi r11,r3,-1
	ctx.r11.s64 = ctx.r3.s64 + -1;
	// ld r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// addic r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// subfe r11,r11,r11
	temp.u8 = (~ctx.r11.u32 + ctx.r11.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r11.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r3,r11,r10
	ctx.r3.u64 = ctx.r11.u64 & ctx.r10.u64;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_832717B0"))) PPC_WEAK_FUNC(sub_832717B0);
PPC_FUNC_IMPL(__imp__sub_832717B0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x833a01a4
	ctx.lr = 0x832717B8;
	__savegprlr_27(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// li r4,224
	ctx.r4.s64 = 224;
	// stw r11,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r11.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r11,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r11.u32);
	// mr r28,r6
	ctx.r28.u64 = ctx.r6.u64;
	// stw r11,0(r7)
	PPC_STORE_U32(ctx.r7.u32 + 0, ctx.r11.u32);
	// mr r27,r7
	ctx.r27.u64 = ctx.r7.u64;
	// bl 0x83285230
	ctx.lr = 0x832717F0;
	sub_83285230(ctx, base);
	// cmpwi cr6,r3,1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 1, ctx.xer);
	// bne cr6,0x83271870
	if (!ctx.cr6.eq) goto loc_83271870;
	// lwz r11,88(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x83271870
	if (!ctx.cr6.eq) goto loc_83271870;
	// addi r6,r1,84
	ctx.r6.s64 = ctx.r1.s64 + 84;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// li r4,224
	ctx.r4.s64 = 224;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x832855c0
	ctx.lr = 0x83271818;
	sub_832855C0(ctx, base);
	// cmpwi cr6,r3,1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 1, ctx.xer);
	// bne cr6,0x83271870
	if (!ctx.cr6.eq) goto loc_83271870;
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// lwz r10,84(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// li r4,224
	ctx.r4.s64 = 224;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
	// stw r10,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r10.u32);
	// bl 0x83285750
	ctx.lr = 0x83271840;
	sub_83285750(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x83271850
	if (ctx.cr0.eq) goto loc_83271850;
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// stw r11,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r11.u32);
loc_83271850:
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// li r4,224
	ctx.r4.s64 = 224;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83285778
	ctx.lr = 0x83271860;
	sub_83285778(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x83271870
	if (ctx.cr0.eq) goto loc_83271870;
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// stw r11,0(r27)
	PPC_STORE_U32(ctx.r27.u32 + 0, ctx.r11.u32);
loc_83271870:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x833a01f4
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83271878"))) PPC_WEAK_FUNC(sub_83271878);
PPC_FUNC_IMPL(__imp__sub_83271878) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// li r4,224
	ctx.r4.s64 = 224;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r30,0
	ctx.r30.s64 = 0;
	// bl 0x83285230
	ctx.lr = 0x832718A0;
	sub_83285230(ctx, base);
	// cmpwi cr6,r3,1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 1, ctx.xer);
	// bne cr6,0x832718e4
	if (!ctx.cr6.eq) goto loc_832718E4;
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x832718e4
	if (!ctx.cr6.eq) goto loc_832718E4;
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// li r4,224
	ctx.r4.s64 = 224;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83285610
	ctx.lr = 0x832718C4;
	sub_83285610(ctx, base);
	// cmpwi cr6,r3,1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 1, ctx.xer);
	// bne cr6,0x832718e4
	if (!ctx.cr6.eq) goto loc_832718E4;
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bne cr6,0x832718dc
	if (!ctx.cr6.eq) goto loc_832718DC;
	// li r30,1
	ctx.r30.s64 = 1;
loc_832718DC:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// b 0x832718e8
	goto loc_832718E8;
loc_832718E4:
	// li r3,0
	ctx.r3.s64 = 0;
loc_832718E8:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83271900"))) PPC_WEAK_FUNC(sub_83271900);
PPC_FUNC_IMPL(__imp__sub_83271900) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// li r4,224
	ctx.r4.s64 = 224;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r30,0
	ctx.r30.s64 = 0;
	// bl 0x83285230
	ctx.lr = 0x83271928;
	sub_83285230(ctx, base);
	// cmpwi cr6,r3,1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 1, ctx.xer);
	// bne cr6,0x8327196c
	if (!ctx.cr6.eq) goto loc_8327196C;
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x8327196c
	if (!ctx.cr6.eq) goto loc_8327196C;
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// li r4,224
	ctx.r4.s64 = 224;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83285610
	ctx.lr = 0x8327194C;
	sub_83285610(ctx, base);
	// cmpwi cr6,r3,1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 1, ctx.xer);
	// bne cr6,0x8327196c
	if (!ctx.cr6.eq) goto loc_8327196C;
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmpwi cr6,r11,9
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 9, ctx.xer);
	// bne cr6,0x83271964
	if (!ctx.cr6.eq) goto loc_83271964;
	// li r30,1
	ctx.r30.s64 = 1;
loc_83271964:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// b 0x83271970
	goto loc_83271970;
loc_8327196C:
	// li r3,0
	ctx.r3.s64 = 0;
loc_83271970:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83271988"))) PPC_WEAK_FUNC(sub_83271988);
PPC_FUNC_IMPL(__imp__sub_83271988) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lwz r11,224(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 224);
	// srawi r10,r11,3
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x7) != 0);
	ctx.r10.s64 = ctx.r11.s32 >> 3;
	// addze r10,r10
	temp.s64 = ctx.r10.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r10.u32;
	ctx.r10.s64 = temp.s64;
	// rlwinm r10,r10,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0xFFFFFFF8;
	// subf r11,r10,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r10.s64;
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
	// lwz r3,264(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 264);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_832719BC"))) PPC_WEAK_FUNC(sub_832719BC);
PPC_FUNC_IMPL(__imp__sub_832719BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832719C0"))) PPC_WEAK_FUNC(sub_832719C0);
PPC_FUNC_IMPL(__imp__sub_832719C0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x833a0170
	ctx.lr = 0x832719C8;
	__savegprlr_14(ctx, base);
	// stwu r1,-256(r1)
	ea = -256 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r27,0
	ctx.r27.s64 = 0;
	// lwz r19,32(r4)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r4.u32 + 32);
	// lwz r28,96(r3)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r3.u32 + 96);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// stw r27,2044(r3)
	PPC_STORE_U32(ctx.r3.u32 + 2044, ctx.r27.u32);
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// lwz r3,28(r4)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r4.u32 + 28);
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// bl 0x83270f48
	ctx.lr = 0x832719F0;
	sub_83270F48(ctx, base);
	// mr r18,r3
	ctx.r18.u64 = ctx.r3.u64;
	// lwz r22,0(r4)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// lwz r21,4(r4)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// lwz r17,8(r4)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	// lwz r16,12(r4)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r4.u32 + 12);
	// lwz r3,16(r4)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r4.u32 + 16);
	// bl 0x83270f70
	ctx.lr = 0x83271A0C;
	sub_83270F70(ctx, base);
	// lwz r11,36(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 36);
	// mr r15,r3
	ctx.r15.u64 = ctx.r3.u64;
	// lwz r10,40(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 40);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// lwz r25,52(r30)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r30.u32 + 52);
	// lwz r24,24(r30)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r30.u32 + 24);
	// lwz r14,48(r30)
	ctx.r14.u64 = PPC_LOAD_U32(ctx.r30.u32 + 48);
	// lwz r28,44(r30)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r30.u32 + 44);
	// stw r11,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r11.u32);
	// stw r10,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r10.u32);
	// bl 0x83277320
	ctx.lr = 0x83271A3C;
	sub_83277320(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x83271a50
	if (ctx.cr0.eq) goto loc_83271A50;
	// lis r11,-32219
	ctx.r11.s64 = -2111504384;
	// addi r3,r11,13884
	ctx.r3.s64 = ctx.r11.s64 + 13884;
	// bl 0x83278688
	ctx.lr = 0x83271A50;
	sub_83278688(ctx, base);
loc_83271A50:
	// srawi r11,r28,3
	ctx.xer.ca = (ctx.r28.s32 < 0) & ((ctx.r28.u32 & 0x7) != 0);
	ctx.r11.s64 = ctx.r28.s32 >> 3;
	// lwz r26,56(r30)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r30.u32 + 56);
	// lwz r20,60(r30)
	ctx.r20.u64 = PPC_LOAD_U32(ctx.r30.u32 + 60);
	// addze r11,r11
	temp.s64 = ctx.r11.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r11.u32;
	ctx.r11.s64 = temp.s64;
	// stw r27,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r27.u32);
	// rlwinm r11,r11,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// subf r11,r11,r28
	ctx.r11.s64 = ctx.r28.s64 - ctx.r11.s64;
	// mulli r11,r11,56
	ctx.r11.s64 = ctx.r11.s64 * 56;
	// add r11,r11,r29
	ctx.r11.u64 = ctx.r11.u64 + ctx.r29.u64;
	// lwz r10,232(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 232);
	// cmpwi cr6,r10,1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 1, ctx.xer);
	// bne cr6,0x83271aa4
	if (!ctx.cr6.eq) goto loc_83271AA4;
	// lwz r23,248(r11)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r11.u32 + 248);
	// lwz r27,252(r11)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r11.u32 + 252);
	// cmpwi cr6,r23,0
	ctx.cr6.compare<int32_t>(ctx.r23.s32, 0, ctx.xer);
	// beq cr6,0x83271aa4
	if (ctx.cr6.eq) goto loc_83271AA4;
	// cmpwi cr6,r27,0
	ctx.cr6.compare<int32_t>(ctx.r27.s32, 0, ctx.xer);
	// beq cr6,0x83271aa4
	if (ctx.cr6.eq) goto loc_83271AA4;
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// b 0x83271aac
	goto loc_83271AAC;
loc_83271AA4:
	// mr r27,r21
	ctx.r27.u64 = ctx.r21.u64;
	// mr r23,r22
	ctx.r23.u64 = ctx.r22.u64;
loc_83271AAC:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x832705e8
	ctx.lr = 0x83271AB4;
	sub_832705E8(ctx, base);
	// cmpwi cr6,r3,17
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 17, ctx.xer);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bne cr6,0x83271ae0
	if (!ctx.cr6.eq) goto loc_83271AE0;
	// bl 0x832713d8
	ctx.lr = 0x83271AC4;
	sub_832713D8(ctx, base);
	// cmpwi cr6,r3,33
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 33, ctx.xer);
	// bne cr6,0x83271b20
	if (!ctx.cr6.eq) goto loc_83271B20;
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x83271b20
	if (ctx.cr6.eq) goto loc_83271B20;
	// rlwinm r27,r27,1,0,30
	ctx.r27.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 1) & 0xFFFFFFFE;
	// b 0x83271b20
	goto loc_83271B20;
loc_83271AE0:
	// bl 0x832705e8
	ctx.lr = 0x83271AE4;
	sub_832705E8(ctx, base);
	// cmpwi cr6,r3,33
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 33, ctx.xer);
	// beq cr6,0x83271b0c
	if (ctx.cr6.eq) goto loc_83271B0C;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x832705e8
	ctx.lr = 0x83271AF4;
	sub_832705E8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x83271b20
	if (!ctx.cr0.eq) goto loc_83271B20;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x832713d8
	ctx.lr = 0x83271B04;
	sub_832713D8(ctx, base);
	// cmpwi cr6,r3,33
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 33, ctx.xer);
	// bne cr6,0x83271b20
	if (!ctx.cr6.eq) goto loc_83271B20;
loc_83271B0C:
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x83271b20
	if (!ctx.cr6.eq) goto loc_83271B20;
	// srawi r11,r27,1
	ctx.xer.ca = (ctx.r27.s32 < 0) & ((ctx.r27.u32 & 0x1) != 0);
	ctx.r11.s64 = ctx.r27.s32 >> 1;
	// addze r27,r11
	temp.s64 = ctx.r11.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r11.u32;
	ctx.r27.s64 = temp.s64;
loc_83271B20:
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// lwz r10,88(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r9,92(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// stw r19,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r19.u32);
	// stw r18,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r18.u32);
	// stw r22,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r22.u32);
	// stw r21,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r21.u32);
	// stw r23,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r23.u32);
	// stw r27,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r27.u32);
	// stw r17,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r17.u32);
	// stw r16,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r16.u32);
	// stw r15,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r15.u32);
	// stw r11,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r11.u32);
	// stw r26,44(r31)
	PPC_STORE_U32(ctx.r31.u32 + 44, ctx.r26.u32);
	// stw r25,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r25.u32);
	// stw r24,52(r31)
	PPC_STORE_U32(ctx.r31.u32 + 52, ctx.r24.u32);
	// stw r28,56(r31)
	PPC_STORE_U32(ctx.r31.u32 + 56, ctx.r28.u32);
	// stw r20,60(r31)
	PPC_STORE_U32(ctx.r31.u32 + 60, ctx.r20.u32);
	// stw r14,64(r31)
	PPC_STORE_U32(ctx.r31.u32 + 64, ctx.r14.u32);
	// stw r10,68(r31)
	PPC_STORE_U32(ctx.r31.u32 + 68, ctx.r10.u32);
	// stw r9,72(r31)
	PPC_STORE_U32(ctx.r31.u32 + 72, ctx.r9.u32);
	// stw r25,1680(r29)
	PPC_STORE_U32(ctx.r29.u32 + 1680, ctx.r25.u32);
	// stw r24,1684(r29)
	PPC_STORE_U32(ctx.r29.u32 + 1684, ctx.r24.u32);
	// stw r26,1688(r29)
	PPC_STORE_U32(ctx.r29.u32 + 1688, ctx.r26.u32);
	// bl 0x83270ed0
	ctx.lr = 0x83271B90;
	sub_83270ED0(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x832710e0
	ctx.lr = 0x83271B9C;
	sub_832710E0(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r5,164(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 164);
	// lwz r4,160(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 160);
	// bl 0x83270fd8
	ctx.lr = 0x83271BAC;
	sub_83270FD8(ctx, base);
	// stw r3,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r3.u32);
	// addi r3,r31,104
	ctx.r3.s64 = ctx.r31.s64 + 104;
	// addi r4,r30,80
	ctx.r4.s64 = ctx.r30.s64 + 80;
	// li r5,56
	ctx.r5.s64 = 56;
	// bl 0x833a1390
	ctx.lr = 0x83271BC0;
	sub_833A1390(ctx, base);
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// b 0x833a01c0
	__restgprlr_14(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83271BC8"))) PPC_WEAK_FUNC(sub_83271BC8);
PPC_FUNC_IMPL(__imp__sub_83271BC8) {
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
	// mr r31,r6
	ctx.r31.u64 = ctx.r6.u64;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// bl 0x832845a0
	ctx.lr = 0x83271BE4;
	sub_832845A0(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x832711a8
	ctx.lr = 0x83271BF0;
	sub_832711A8(ctx, base);
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

__attribute__((alias("__imp__sub_83271C04"))) PPC_WEAK_FUNC(sub_83271C04);
PPC_FUNC_IMPL(__imp__sub_83271C04) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83271C08"))) PPC_WEAK_FUNC(sub_83271C08);
PPC_FUNC_IMPL(__imp__sub_83271C08) {
	PPC_FUNC_PROLOGUE();
	// b 0x83271988
	sub_83271988(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83271C0C"))) PPC_WEAK_FUNC(sub_83271C0C);
PPC_FUNC_IMPL(__imp__sub_83271C0C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83271C10"))) PPC_WEAK_FUNC(sub_83271C10);
PPC_FUNC_IMPL(__imp__sub_83271C10) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x833a0198
	ctx.lr = 0x83271C18;
	__savegprlr_24(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,680(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 680);
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// mr r25,r4
	ctx.r25.u64 = ctx.r4.u64;
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x83271d0c
	if (ctx.cr6.eq) goto loc_83271D0C;
	// li r28,0
	ctx.r28.s64 = 0;
	// li r24,1
	ctx.r24.s64 = 1;
	// mr r29,r28
	ctx.r29.u64 = ctx.r28.u64;
loc_83271C3C:
	// rlwinm r11,r29,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 4) & 0xFFFFFFF0;
	// addi r10,r29,43
	ctx.r10.s64 = ctx.r29.s64 + 43;
	// add r31,r11,r26
	ctx.r31.u64 = ctx.r11.u64 + ctx.r26.u64;
	// rlwinm r27,r10,4,0,27
	ctx.r27.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 4) & 0xFFFFFFF0;
	// addi r11,r29,192
	ctx.r11.s64 = ctx.r29.s64 + 192;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// clrlwi r30,r11,24
	ctx.r30.u64 = ctx.r11.u32 & 0xFF;
	// stw r28,684(r31)
	PPC_STORE_U32(ctx.r31.u32 + 684, ctx.r28.u32);
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// stwx r28,r27,r26
	PPC_STORE_U32(ctx.r27.u32 + ctx.r26.u32, ctx.r28.u32);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// stw r28,692(r31)
	PPC_STORE_U32(ctx.r31.u32 + 692, ctx.r28.u32);
	// stw r28,696(r31)
	PPC_STORE_U32(ctx.r31.u32 + 696, ctx.r28.u32);
	// bl 0x83285230
	ctx.lr = 0x83271C74;
	sub_83285230(ctx, base);
	// cmpwi cr6,r3,1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 1, ctx.xer);
	// bne cr6,0x83271cf0
	if (!ctx.cr6.eq) goto loc_83271CF0;
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x83271cf0
	if (!ctx.cr6.eq) goto loc_83271CF0;
	// stw r24,684(r31)
	PPC_STORE_U32(ctx.r31.u32 + 684, ctx.r24.u32);
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x832854d0
	ctx.lr = 0x83271C9C;
	sub_832854D0(ctx, base);
	// cmpwi cr6,r3,1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 1, ctx.xer);
	// bne cr6,0x83271cb0
	if (!ctx.cr6.eq) goto loc_83271CB0;
	// lwz r3,84(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// bl 0x83271518
	ctx.lr = 0x83271CAC;
	sub_83271518(ctx, base);
	// stwx r3,r27,r26
	PPC_STORE_U32(ctx.r27.u32 + ctx.r26.u32, ctx.r3.u32);
loc_83271CB0:
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x83285520
	ctx.lr = 0x83271CC0;
	sub_83285520(ctx, base);
	// cmpwi cr6,r3,1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 1, ctx.xer);
	// bne cr6,0x83271cd0
	if (!ctx.cr6.eq) goto loc_83271CD0;
	// lwz r11,88(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// stw r11,692(r31)
	PPC_STORE_U32(ctx.r31.u32 + 692, ctx.r11.u32);
loc_83271CD0:
	// addi r5,r1,92
	ctx.r5.s64 = ctx.r1.s64 + 92;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x83285548
	ctx.lr = 0x83271CE0;
	sub_83285548(ctx, base);
	// cmpwi cr6,r3,1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 1, ctx.xer);
	// bne cr6,0x83271cf0
	if (!ctx.cr6.eq) goto loc_83271CF0;
	// lwz r11,92(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// stw r11,696(r31)
	PPC_STORE_U32(ctx.r31.u32 + 696, ctx.r11.u32);
loc_83271CF0:
	// addi r11,r29,1
	ctx.r11.s64 = ctx.r29.s64 + 1;
	// clrlwi r29,r11,24
	ctx.r29.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r29,32
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 32, ctx.xer);
	// blt cr6,0x83271c3c
	if (ctx.cr6.lt) goto loc_83271C3C;
	// stw r24,680(r26)
	PPC_STORE_U32(ctx.r26.u32 + 680, ctx.r24.u32);
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x83271578
	ctx.lr = 0x83271D0C;
	sub_83271578(ctx, base);
loc_83271D0C:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x833a01e8
	__restgprlr_24(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83271D14"))) PPC_WEAK_FUNC(sub_83271D14);
PPC_FUNC_IMPL(__imp__sub_83271D14) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83271D18"))) PPC_WEAK_FUNC(sub_83271D18);
PPC_FUNC_IMPL(__imp__sub_83271D18) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x833a01ac
	ctx.lr = 0x83271D20;
	__savegprlr_29(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// li r5,168
	ctx.r5.s64 = 168;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x833a2b30
	ctx.lr = 0x83271D40;
	sub_833A2B30(ctx, base);
	// li r11,-1
	ctx.r11.s64 = -1;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r11.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r10,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r10.u32);
	// stw r11,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r11.u32);
	// bl 0x8326df70
	ctx.lr = 0x83271D5C;
	sub_8326DF70(ctx, base);
	// cmpwi cr6,r3,1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 1, ctx.xer);
	// beq cr6,0x83271d78
	if (ctx.cr6.eq) goto loc_83271D78;
	// lis r11,-32219
	ctx.r11.s64 = -2111504384;
	// addi r3,r11,13916
	ctx.r3.s64 = ctx.r11.s64 + 13916;
	// bl 0x83278688
	ctx.lr = 0x83271D70;
	sub_83278688(ctx, base);
loc_83271D70:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x83271df0
	goto loc_83271DF0;
loc_83271D78:
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83270e58
	ctx.lr = 0x83271D84;
	sub_83270E58(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8326e348
	ctx.lr = 0x83271D8C;
	sub_8326E348(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x83271d70
	if (ctx.cr0.eq) goto loc_83271D70;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x8327f050
	ctx.lr = 0x83271DA0;
	sub_8327F050(ctx, base);
	// cmpwi cr6,r3,1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 1, ctx.xer);
	// bne cr6,0x83271df0
	if (!ctx.cr6.eq) goto loc_83271DF0;
	// lwz r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r4,160(r31)
	PPC_STORE_U32(ctx.r31.u32 + 160, ctx.r4.u32);
	// bl 0x83271060
	ctx.lr = 0x83271DB8;
	sub_83271060(ctx, base);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// lwz r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x832719c0
	ctx.lr = 0x83271DC4;
	sub_832719C0(ctx, base);
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r10,56(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 56);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r11.u32);
	// stw r10,224(r31)
	PPC_STORE_U32(ctx.r31.u32 + 224, ctx.r10.u32);
	// bl 0x83270e80
	ctx.lr = 0x83271DE0;
	sub_83270E80(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83270dc8
	ctx.lr = 0x83271DEC;
	sub_83270DC8(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
loc_83271DF0:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x833a01fc
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83271DF8"))) PPC_WEAK_FUNC(sub_83271DF8);
PPC_FUNC_IMPL(__imp__sub_83271DF8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x833a01a4
	ctx.lr = 0x83271E00;
	__savegprlr_27(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// bl 0x8326df70
	ctx.lr = 0x83271E10;
	sub_8326DF70(ctx, base);
	// cmpwi cr6,r3,1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 1, ctx.xer);
	// beq cr6,0x83271e44
	if (ctx.cr6.eq) goto loc_83271E44;
	// lis r11,-32219
	ctx.r11.s64 = -2111504384;
	// addi r3,r11,13956
	ctx.r3.s64 = ctx.r11.s64 + 13956;
	// bl 0x83278688
	ctx.lr = 0x83271E24;
	sub_83278688(ctx, base);
loc_83271E24:
	// li r5,168
	ctx.r5.s64 = 168;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x833a2b30
	ctx.lr = 0x83271E34;
	sub_833A2B30(ctx, base);
loc_83271E34:
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r11.u32);
loc_83271E3C:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x833a01f4
	__restgprlr_27(ctx, base);
	return;
loc_83271E44:
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83270e58
	ctx.lr = 0x83271E50;
	sub_83270E58(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8326e348
	ctx.lr = 0x83271E58;
	sub_8326E348(ctx, base);
	// mr. r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r27.s32, 0, ctx.xer);
	// beq 0x83271e24
	if (ctx.cr0.eq) goto loc_83271E24;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x8327f2c0
	ctx.lr = 0x83271E6C;
	sub_8327F2C0(ctx, base);
	// lwz r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x83271e34
	if (ctx.cr6.eq) goto loc_83271E34;
	// lwz r11,120(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 120);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x83271ed8
	if (!ctx.cr6.eq) goto loc_83271ED8;
	// lwz r28,24(r31)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// li r30,0
	ctx.r30.s64 = 0;
	// cmpwi cr6,r28,0
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// ble cr6,0x83271ed8
	if (!ctx.cr6.gt) goto loc_83271ED8;
loc_83271E94:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x832712c8
	ctx.lr = 0x83271E9C;
	sub_832712C8(ctx, base);
	// cmpwi cr6,r3,1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 1, ctx.xer);
	// bne cr6,0x83271ed4
	if (!ctx.cr6.eq) goto loc_83271ED4;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// lwz r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x8327f458
	ctx.lr = 0x83271EB0;
	sub_8327F458(ctx, base);
	// lwz r11,172(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 172);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// stw r11,172(r31)
	PPC_STORE_U32(ctx.r31.u32 + 172, ctx.r11.u32);
	// bl 0x8327f2c0
	ctx.lr = 0x83271EC8;
	sub_8327F2C0(ctx, base);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// cmpw cr6,r30,r28
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r28.s32, ctx.xer);
	// blt cr6,0x83271e94
	if (ctx.cr6.lt) goto loc_83271E94;
loc_83271ED4:
	// lwz r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
loc_83271ED8:
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x83271e34
	if (ctx.cr6.eq) goto loc_83271E34;
	// lwz r11,164(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 164);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r4,160(r31)
	PPC_STORE_U32(ctx.r31.u32 + 160, ctx.r4.u32);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,164(r31)
	PPC_STORE_U32(ctx.r31.u32 + 164, ctx.r11.u32);
	// bl 0x83271060
	ctx.lr = 0x83271EF8;
	sub_83271060(ctx, base);
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// lwz r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x832719c0
	ctx.lr = 0x83271F04;
	sub_832719C0(ctx, base);
	// lwz r11,44(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 44);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// lwz r10,56(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 56);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,4(r29)
	PPC_STORE_U32(ctx.r29.u32 + 4, ctx.r11.u32);
	// stw r10,224(r31)
	PPC_STORE_U32(ctx.r31.u32 + 224, ctx.r10.u32);
	// bl 0x83270e80
	ctx.lr = 0x83271F20;
	sub_83270E80(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83270dc8
	ctx.lr = 0x83271F2C;
	sub_83270DC8(ctx, base);
	// b 0x83271e3c
	goto loc_83271E3C;
}

__attribute__((alias("__imp__sub_83271F30"))) PPC_WEAK_FUNC(sub_83271F30);
PPC_FUNC_IMPL(__imp__sub_83271F30) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x833a018c
	ctx.lr = 0x83271F38;
	__savegprlr_21(ctx, base);
	// stwu r1,-240(r1)
	ea = -240 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// cmpwi cr6,r5,2048
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 2048, ctx.xer);
	// lwz r11,220(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 220);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,220(r30)
	PPC_STORE_U32(ctx.r30.u32 + 220, ctx.r11.u32);
	// blt cr6,0x832720dc
	if (ctx.cr6.lt) goto loc_832720DC;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x832720dc
	if (ctx.cr6.eq) goto loc_832720DC;
	// addi r5,r1,112
	ctx.r5.s64 = ctx.r1.s64 + 112;
	// bl 0x832857b0
	ctx.lr = 0x83271F6C;
	sub_832857B0(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// bne 0x83271f84
	if (!ctx.cr0.eq) goto loc_83271F84;
	// lis r11,-32219
	ctx.r11.s64 = -2111504384;
	// addi r3,r11,14000
	ctx.r3.s64 = ctx.r11.s64 + 14000;
	// bl 0x83278688
	ctx.lr = 0x83271F80;
	sub_83278688(ctx, base);
	// b 0x832720dc
	goto loc_832720DC;
loc_83271F84:
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x832850b0
	ctx.lr = 0x83271F90;
	sub_832850B0(ctx, base);
	// cmpwi cr6,r3,1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 1, ctx.xer);
	// bne cr6,0x832720d4
	if (!ctx.cr6.eq) goto loc_832720D4;
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x832720d4
	if (!ctx.cr6.eq) goto loc_832720D4;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83271878
	ctx.lr = 0x83271FAC;
	sub_83271878(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83271900
	ctx.lr = 0x83271FB8;
	sub_83271900(ctx, base);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83271328
	ctx.lr = 0x83271FC4;
	sub_83271328(ctx, base);
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83271410
	ctx.lr = 0x83271FD0;
	sub_83271410(ctx, base);
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83271398
	ctx.lr = 0x83271FDC;
	sub_83271398(ctx, base);
	// mr r24,r3
	ctx.r24.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83271360
	ctx.lr = 0x83271FE8;
	sub_83271360(ctx, base);
	// mr r23,r3
	ctx.r23.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83271478
	ctx.lr = 0x83271FF4;
	sub_83271478(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// addi r7,r1,96
	ctx.r7.s64 = ctx.r1.s64 + 96;
	// addi r6,r1,92
	ctx.r6.s64 = ctx.r1.s64 + 92;
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x832717b0
	ctx.lr = 0x83272010;
	sub_832717B0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83271778
	ctx.lr = 0x83272018;
	sub_83271778(ctx, base);
	// mr r22,r3
	ctx.r22.u64 = ctx.r3.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x83271c10
	ctx.lr = 0x83272028;
	sub_83271C10(ctx, base);
	// lwz r11,228(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 228);
	// lwz r9,220(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 220);
	// li r8,1
	ctx.r8.s64 = 1;
	// mulli r10,r11,56
	ctx.r10.s64 = ctx.r11.s64 * 56;
	// lwz r6,84(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r5,88(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// lwz r4,92(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// lwz r21,96(r1)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// addi r7,r11,5
	ctx.r7.s64 = ctx.r11.s64 + 5;
	// add r11,r10,r30
	ctx.r11.u64 = ctx.r10.u64 + ctx.r30.u64;
	// mulli r10,r7,56
	ctx.r10.s64 = ctx.r7.s64 * 56;
	// stw r28,256(r11)
	PPC_STORE_U32(ctx.r11.u32 + 256, ctx.r28.u32);
	// stdx r22,r10,r30
	PPC_STORE_U64(ctx.r10.u32 + ctx.r30.u32, ctx.r22.u64);
	// stw r27,260(r11)
	PPC_STORE_U32(ctx.r11.u32 + 260, ctx.r27.u32);
	// stw r26,264(r11)
	PPC_STORE_U32(ctx.r11.u32 + 264, ctx.r26.u32);
	// addi r9,r9,-1
	ctx.r9.s64 = ctx.r9.s64 + -1;
	// stw r25,268(r11)
	PPC_STORE_U32(ctx.r11.u32 + 268, ctx.r25.u32);
	// stw r24,272(r11)
	PPC_STORE_U32(ctx.r11.u32 + 272, ctx.r24.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r23,276(r11)
	PPC_STORE_U32(ctx.r11.u32 + 276, ctx.r23.u32);
	// stw r9,236(r11)
	PPC_STORE_U32(ctx.r11.u32 + 236, ctx.r9.u32);
	// stw r6,240(r11)
	PPC_STORE_U32(ctx.r11.u32 + 240, ctx.r6.u32);
	// stw r5,244(r11)
	PPC_STORE_U32(ctx.r11.u32 + 244, ctx.r5.u32);
	// stw r4,248(r11)
	PPC_STORE_U32(ctx.r11.u32 + 248, ctx.r4.u32);
	// stw r21,252(r11)
	PPC_STORE_U32(ctx.r11.u32 + 252, ctx.r21.u32);
	// stw r8,232(r11)
	PPC_STORE_U32(ctx.r11.u32 + 232, ctx.r8.u32);
	// lwz r11,228(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 228);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// srawi r10,r11,3
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x7) != 0);
	ctx.r10.s64 = ctx.r11.s32 >> 3;
	// addze r10,r10
	temp.s64 = ctx.r10.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r10.u32;
	ctx.r10.s64 = temp.s64;
	// rlwinm r10,r10,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0xFFFFFFF8;
	// subf r11,r10,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r10.s64;
	// stw r11,228(r30)
	PPC_STORE_U32(ctx.r30.u32 + 228, ctx.r11.u32);
	// bl 0x83285818
	ctx.lr = 0x832720B0;
	sub_83285818(ctx, base);
	// lwz r11,2036(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 2036);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x832720dc
	if (ctx.cr6.eq) goto loc_832720DC;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// lwz r5,2040(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + 2040);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x832720D0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// b 0x832720dc
	goto loc_832720DC;
loc_832720D4:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83285818
	ctx.lr = 0x832720DC;
	sub_83285818(ctx, base);
loc_832720DC:
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// b 0x833a01dc
	__restgprlr_21(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832720E4"))) PPC_WEAK_FUNC(sub_832720E4);
PPC_FUNC_IMPL(__imp__sub_832720E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832720E8"))) PPC_WEAK_FUNC(sub_832720E8);
PPC_FUNC_IMPL(__imp__sub_832720E8) {
	PPC_FUNC_PROLOGUE();
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lwz r3,96(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 96);
	// lis r10,-31961
	ctx.r10.s64 = -2094596096;
	// mr r5,r11
	ctx.r5.u64 = ctx.r11.u64;
	// addi r4,r10,7984
	ctx.r4.s64 = ctx.r10.s64 + 7984;
	// b 0x83274d10
	sub_83274D10(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83272100"))) PPC_WEAK_FUNC(sub_83272100);
PPC_FUNC_IMPL(__imp__sub_83272100) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x833a01a8
	ctx.lr = 0x83272108;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// bl 0x8326df70
	ctx.lr = 0x83272118;
	sub_8326DF70(ctx, base);
	// cmpwi cr6,r3,1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 1, ctx.xer);
	// beq cr6,0x83272130
	if (ctx.cr6.eq) goto loc_83272130;
	// lis r11,-32219
	ctx.r11.s64 = -2111504384;
	// addi r3,r11,14196
	ctx.r3.s64 = ctx.r11.s64 + 14196;
loc_83272128:
	// bl 0x83278688
	ctx.lr = 0x8327212C;
	sub_83278688(ctx, base);
	// b 0x832721ec
	goto loc_832721EC;
loc_83272130:
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// bne cr6,0x83272144
	if (!ctx.cr6.eq) goto loc_83272144;
	// lis r11,-32219
	ctx.r11.s64 = -2111504384;
	// addi r3,r11,14156
	ctx.r3.s64 = ctx.r11.s64 + 14156;
	// b 0x83272128
	goto loc_83272128;
loc_83272144:
	// lis r30,-31816
	ctx.r30.s64 = -2085093376;
	// lis r11,-31845
	ctx.r11.s64 = -2086993920;
	// addi r29,r11,-2904
	ctx.r29.s64 = ctx.r11.s64 + -2904;
	// lwz r3,13264(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 13264);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8327217c
	if (ctx.cr6.eq) goto loc_8327217C;
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
	ctx.lr = 0x83272178;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r3,13264(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 13264);
loc_8327217C:
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmpwi cr6,r11,10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 10, ctx.xer);
	// beq cr6,0x832721d0
	if (ctx.cr6.eq) goto loc_832721D0;
	// cmpwi cr6,r11,12
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 12, ctx.xer);
	// beq cr6,0x832721d0
	if (ctx.cr6.eq) goto loc_832721D0;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// lwz r3,108(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 108);
	// bl 0x832f03e0
	ctx.lr = 0x8327219C;
	sub_832F03E0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bge 0x832721c0
	if (!ctx.cr0.lt) goto loc_832721C0;
	// li r11,4
	ctx.r11.s64 = 4;
	// lis r10,-32219
	ctx.r10.s64 = -2111504384;
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// addi r3,r10,14108
	ctx.r3.s64 = ctx.r10.s64 + 14108;
	// bl 0x83278688
	ctx.lr = 0x832721BC;
	sub_83278688(ctx, base);
	// b 0x832721cc
	goto loc_832721CC;
loc_832721C0:
	// lwz r11,156(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 156);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,156(r31)
	PPC_STORE_U32(ctx.r31.u32 + 156, ctx.r11.u32);
loc_832721CC:
	// lwz r3,13264(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 13264);
loc_832721D0:
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x832721ec
	if (ctx.cr6.eq) goto loc_832721EC;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r4,r29,108
	ctx.r4.s64 = ctx.r29.s64 + 108;
	// lwz r11,36(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x832721EC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_832721EC:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x833a01f8
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832721F4"))) PPC_WEAK_FUNC(sub_832721F4);
PPC_FUNC_IMPL(__imp__sub_832721F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832721F8"))) PPC_WEAK_FUNC(sub_832721F8);
PPC_FUNC_IMPL(__imp__sub_832721F8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x833a01ac
	ctx.lr = 0x83272200;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// stw r4,140(r1)
	PPC_STORE_U32(ctx.r1.u32 + 140, ctx.r4.u32);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// bl 0x8326df70
	ctx.lr = 0x83272210;
	sub_8326DF70(ctx, base);
	// cmpwi cr6,r3,1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 1, ctx.xer);
	// beq cr6,0x83272228
	if (ctx.cr6.eq) goto loc_83272228;
	// lis r11,-32219
	ctx.r11.s64 = -2111504384;
	// addi r3,r11,14244
	ctx.r3.s64 = ctx.r11.s64 + 14244;
	// bl 0x83278688
	ctx.lr = 0x83272224;
	sub_83278688(ctx, base);
	// b 0x8327228c
	goto loc_8327228C;
loc_83272228:
	// lis r30,-31816
	ctx.r30.s64 = -2085093376;
	// lis r11,-31845
	ctx.r11.s64 = -2086993920;
	// addi r31,r11,-2256
	ctx.r31.s64 = ctx.r11.s64 + -2256;
	// lwz r3,13264(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 13264);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x83272260
	if (ctx.cr6.eq) goto loc_83272260;
	// addi r11,r1,140
	ctx.r11.s64 = ctx.r1.s64 + 140;
	// stw r29,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r29.u32);
	// addi r4,r31,4
	ctx.r4.s64 = ctx.r31.s64 + 4;
	// stw r11,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r11.u32);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,36(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x83272260;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_83272260:
	// lwz r4,140(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 140);
	// lwz r3,108(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 108);
	// bl 0x832f0388
	ctx.lr = 0x8327226C;
	sub_832F0388(ctx, base);
	// lwz r3,13264(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 13264);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8327228c
	if (ctx.cr6.eq) goto loc_8327228C;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r4,r31,108
	ctx.r4.s64 = ctx.r31.s64 + 108;
	// lwz r11,36(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8327228C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8327228C:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x833a01fc
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83272294"))) PPC_WEAK_FUNC(sub_83272294);
PPC_FUNC_IMPL(__imp__sub_83272294) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83272298"))) PPC_WEAK_FUNC(sub_83272298);
PPC_FUNC_IMPL(__imp__sub_83272298) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,108(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 108);
	// b 0x832f02b0
	sub_832F02B0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832722A0"))) PPC_WEAK_FUNC(sub_832722A0);
PPC_FUNC_IMPL(__imp__sub_832722A0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x833a01a8
	ctx.lr = 0x832722A8;
	__savegprlr_28(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// bl 0x8326df70
	ctx.lr = 0x832722BC;
	sub_8326DF70(ctx, base);
	// cmpwi cr6,r3,1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 1, ctx.xer);
	// beq cr6,0x832722d4
	if (ctx.cr6.eq) goto loc_832722D4;
	// lis r11,-32219
	ctx.r11.s64 = -2111504384;
	// addi r3,r11,14340
	ctx.r3.s64 = ctx.r11.s64 + 14340;
	// bl 0x83278688
	ctx.lr = 0x832722D0;
	sub_83278688(ctx, base);
	// b 0x83272334
	goto loc_83272334;
loc_832722D4:
	// addi r8,r1,80
	ctx.r8.s64 = ctx.r1.s64 + 80;
	// lwz r28,108(r31)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r31.u32 + 108);
	// addi r7,r1,84
	ctx.r7.s64 = ctx.r1.s64 + 84;
	// lwz r5,1264(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1264);
	// addi r6,r1,88
	ctx.r6.s64 = ctx.r1.s64 + 88;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x832f0d48
	ctx.lr = 0x832722F4;
	sub_832F0D48(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x83272320
	if (!ctx.cr0.eq) goto loc_83272320;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x832f0c98
	ctx.lr = 0x83272304;
	sub_832F0C98(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwz r7,80(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r6,84(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r5,88(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// bl 0x832f00d8
	ctx.lr = 0x8327231C;
	sub_832F00D8(ctx, base);
	// b 0x83272334
	goto loc_83272334;
loc_83272320:
	// lis r11,-32219
	ctx.r11.s64 = -2111504384;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// addi r3,r11,14288
	ctx.r3.s64 = ctx.r11.s64 + 14288;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x83278688
	ctx.lr = 0x83272334;
	sub_83278688(ctx, base);
loc_83272334:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x833a01f8
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8327233C"))) PPC_WEAK_FUNC(sub_8327233C);
PPC_FUNC_IMPL(__imp__sub_8327233C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83272340"))) PPC_WEAK_FUNC(sub_83272340);
PPC_FUNC_IMPL(__imp__sub_83272340) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x833a01a8
	ctx.lr = 0x83272348;
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
	ctx.lr = 0x83272360;
	sub_8326DF70(ctx, base);
	// cmpwi cr6,r3,1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 1, ctx.xer);
	// beq cr6,0x83272378
	if (ctx.cr6.eq) goto loc_83272378;
	// lis r11,-32219
	ctx.r11.s64 = -2111504384;
	// addi r3,r11,14384
	ctx.r3.s64 = ctx.r11.s64 + 14384;
	// bl 0x83278688
	ctx.lr = 0x83272374;
	sub_83278688(ctx, base);
	// b 0x83272390
	goto loc_83272390;
loc_83272378:
	// mr r7,r28
	ctx.r7.u64 = ctx.r28.u64;
	// lwz r3,108(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 108);
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x832f00d8
	ctx.lr = 0x83272390;
	sub_832F00D8(ctx, base);
loc_83272390:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x833a01f8
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83272398"))) PPC_WEAK_FUNC(sub_83272398);
PPC_FUNC_IMPL(__imp__sub_83272398) {
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
	// bl 0x832f0258
	ctx.lr = 0x832723A8;
	sub_832F0258(ctx, base);
	// addi r11,r3,-3
	ctx.r11.s64 = ctx.r3.s64 + -3;
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

__attribute__((alias("__imp__sub_832723C4"))) PPC_WEAK_FUNC(sub_832723C4);
PPC_FUNC_IMPL(__imp__sub_832723C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832723C8"))) PPC_WEAK_FUNC(sub_832723C8);
PPC_FUNC_IMPL(__imp__sub_832723C8) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,108(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 108);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// b 0x832f0308
	sub_832F0308(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832723D8"))) PPC_WEAK_FUNC(sub_832723D8);
PPC_FUNC_IMPL(__imp__sub_832723D8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_832723DC"))) PPC_WEAK_FUNC(sub_832723DC);
PPC_FUNC_IMPL(__imp__sub_832723DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832723E0"))) PPC_WEAK_FUNC(sub_832723E0);
PPC_FUNC_IMPL(__imp__sub_832723E0) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,108(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 108);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// b 0x832f0188
	sub_832F0188(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832723F0"))) PPC_WEAK_FUNC(sub_832723F0);
PPC_FUNC_IMPL(__imp__sub_832723F0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_832723F4"))) PPC_WEAK_FUNC(sub_832723F4);
PPC_FUNC_IMPL(__imp__sub_832723F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832723F8"))) PPC_WEAK_FUNC(sub_832723F8);
PPC_FUNC_IMPL(__imp__sub_832723F8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	ctx.lr = 0x83272418;
	sub_8326DF70(ctx, base);
	// cmpwi cr6,r3,1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 1, ctx.xer);
	// beq cr6,0x83272430
	if (ctx.cr6.eq) goto loc_83272430;
	// lis r11,-32219
	ctx.r11.s64 = -2111504384;
	// addi r3,r11,14436
	ctx.r3.s64 = ctx.r11.s64 + 14436;
	// bl 0x83278688
	ctx.lr = 0x8327242C;
	sub_83278688(ctx, base);
	// b 0x8327244c
	goto loc_8327244C;
loc_83272430:
	// lbz r11,152(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 152);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// bne cr6,0x83272448
	if (!ctx.cr6.eq) goto loc_83272448;
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// bne cr6,0x83272448
	if (!ctx.cr6.eq) goto loc_83272448;
	// stb r11,153(r31)
	PPC_STORE_U8(ctx.r31.u32 + 153, ctx.r11.u8);
loc_83272448:
	// stb r30,152(r31)
	PPC_STORE_U8(ctx.r31.u32 + 152, ctx.r30.u8);
loc_8327244C:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83272464"))) PPC_WEAK_FUNC(sub_83272464);
PPC_FUNC_IMPL(__imp__sub_83272464) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83272468"))) PPC_WEAK_FUNC(sub_83272468);
PPC_FUNC_IMPL(__imp__sub_83272468) {
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
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// li r4,54
	ctx.r4.s64 = 54;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x8326df10
	ctx.lr = 0x83272488;
	sub_8326DF10(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r3,96(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 96);
	// bl 0x83277320
	ctx.lr = 0x83272494;
	sub_83277320(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bgt cr6,0x832724bc
	if (ctx.cr6.gt) goto loc_832724BC;
	// lis r11,-32219
	ctx.r11.s64 = -2111504384;
	// addi r3,r11,14480
	ctx.r3.s64 = ctx.r11.s64 + 14480;
	// bl 0x83278688
	ctx.lr = 0x832724AC;
	sub_83278688(ctx, base);
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// li r3,-1
	ctx.r3.s64 = -1;
	// stw r11,1640(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1640, ctx.r11.u32);
	// b 0x832724e8
	goto loc_832724E8;
loc_832724BC:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83271c08
	ctx.lr = 0x832724C4;
	sub_83271C08(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// mulli r10,r3,1000
	ctx.r10.s64 = ctx.r3.s64 * 1000;
	// lwz r9,84(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// divw r11,r10,r11
	ctx.r11.s32 = ctx.r10.s32 / ctx.r11.s32;
	// mulli r11,r11,3000
	ctx.r11.s64 = ctx.r11.s64 * 3000;
	// srawi r11,r11,1
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 1;
	// addze r11,r11
	temp.s64 = ctx.r11.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r11.u32;
	ctx.r11.s64 = temp.s64;
	// subf r3,r11,r9
	ctx.r3.s64 = ctx.r9.s64 - ctx.r11.s64;
	// stw r3,1640(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1640, ctx.r3.u32);
loc_832724E8:
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

__attribute__((alias("__imp__sub_832724FC"))) PPC_WEAK_FUNC(sub_832724FC);
PPC_FUNC_IMPL(__imp__sub_832724FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83272500"))) PPC_WEAK_FUNC(sub_83272500);
PPC_FUNC_IMPL(__imp__sub_83272500) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x833a01ac
	ctx.lr = 0x83272508;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x8326df70
	ctx.lr = 0x83272514;
	sub_8326DF70(ctx, base);
	// cmpwi cr6,r3,1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 1, ctx.xer);
	// beq cr6,0x8327252c
	if (ctx.cr6.eq) goto loc_8327252C;
	// lis r11,-32219
	ctx.r11.s64 = -2111504384;
	// addi r3,r11,14524
	ctx.r3.s64 = ctx.r11.s64 + 14524;
	// bl 0x83278688
	ctx.lr = 0x83272528;
	sub_83278688(ctx, base);
	// b 0x832725d0
	goto loc_832725D0;
loc_8327252C:
	// lis r29,-31816
	ctx.r29.s64 = -2085093376;
	// lis r11,-31845
	ctx.r11.s64 = -2086993920;
	// addi r30,r11,-2688
	ctx.r30.s64 = ctx.r11.s64 + -2688;
	// lwz r3,13264(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 13264);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8327255c
	if (ctx.cr6.eq) goto loc_8327255C;
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
	ctx.lr = 0x8327255C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8327255C:
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x832723f8
	ctx.lr = 0x83272568;
	sub_832723F8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,1292(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1292);
	// bl 0x832701a0
	ctx.lr = 0x83272574;
	sub_832701A0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8326fa70
	ctx.lr = 0x8327257C;
	sub_8326FA70(ctx, base);
	// lwz r3,108(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 108);
	// bl 0x832f0520
	ctx.lr = 0x83272584;
	sub_832F0520(ctx, base);
	// lwz r3,1288(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1288);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x832725a0
	if (ctx.cr6.eq) goto loc_832725A0;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,20(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x832725A0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_832725A0:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x832730a0
	ctx.lr = 0x832725A8;
	sub_832730A0(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,1600(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1600, ctx.r11.u32);
	// lwz r3,13264(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 13264);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x832725d0
	if (ctx.cr6.eq) goto loc_832725D0;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r4,r30,108
	ctx.r4.s64 = ctx.r30.s64 + 108;
	// lwz r11,36(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x832725D0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_832725D0:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x833a01fc
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832725D8"))) PPC_WEAK_FUNC(sub_832725D8);
PPC_FUNC_IMPL(__imp__sub_832725D8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x833a01a8
	ctx.lr = 0x832725E0;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// bl 0x8326df70
	ctx.lr = 0x832725F0;
	sub_8326DF70(ctx, base);
	// cmpwi cr6,r3,1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 1, ctx.xer);
	// beq cr6,0x83272608
	if (ctx.cr6.eq) goto loc_83272608;
	// lis r11,-32219
	ctx.r11.s64 = -2111504384;
	// addi r3,r11,14616
	ctx.r3.s64 = ctx.r11.s64 + 14616;
loc_83272600:
	// bl 0x83278688
	ctx.lr = 0x83272604;
	sub_83278688(ctx, base);
	// b 0x832726d4
	goto loc_832726D4;
loc_83272608:
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// bne cr6,0x8327261c
	if (!ctx.cr6.eq) goto loc_8327261C;
	// lis r11,-32219
	ctx.r11.s64 = -2111504384;
	// addi r3,r11,14572
	ctx.r3.s64 = ctx.r11.s64 + 14572;
	// b 0x83272600
	goto loc_83272600;
loc_8327261C:
	// lis r28,-31816
	ctx.r28.s64 = -2085093376;
	// lis r11,-31845
	ctx.r11.s64 = -2086993920;
	// addi r30,r11,-3768
	ctx.r30.s64 = ctx.r11.s64 + -3768;
	// lwz r3,13264(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 13264);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x83272650
	if (ctx.cr6.eq) goto loc_83272650;
	// stw r31,12(r30)
	PPC_STORE_U32(ctx.r30.u32 + 12, ctx.r31.u32);
	// addi r4,r30,4
	ctx.r4.s64 = ctx.r30.s64 + 4;
	// stw r29,24(r30)
	PPC_STORE_U32(ctx.r30.u32 + 24, ctx.r29.u32);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,36(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x83272650;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_83272650:
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8326fb08
	ctx.lr = 0x8327265C;
	sub_8326FB08(ctx, base);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmpwi cr6,r11,10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 10, ctx.xer);
	// beq cr6,0x832726b4
	if (ctx.cr6.eq) goto loc_832726B4;
	// cmpwi cr6,r11,12
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 12, ctx.xer);
	// beq cr6,0x832726b4
	if (ctx.cr6.eq) goto loc_832726B4;
	// lwz r3,108(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 108);
	// bl 0x832f0440
	ctx.lr = 0x83272678;
	sub_832F0440(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,1264(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1264);
	// bl 0x83272100
	ctx.lr = 0x83272684;
	sub_83272100(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x832721f8
	ctx.lr = 0x83272690;
	sub_832721F8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83272500
	ctx.lr = 0x83272698;
	sub_83272500(ctx, base);
	// lwz r10,1612(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1612);
	// li r11,1
	ctx.r11.s64 = 1;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// stw r11,1616(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1616, ctx.r11.u32);
	// stw r11,1608(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1608, ctx.r11.u32);
	// bne cr6,0x832726b4
	if (!ctx.cr6.eq) goto loc_832726B4;
	// stw r11,1620(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1620, ctx.r11.u32);
loc_832726B4:
	// lwz r3,13264(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 13264);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x832726d4
	if (ctx.cr6.eq) goto loc_832726D4;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r4,r30,108
	ctx.r4.s64 = ctx.r30.s64 + 108;
	// lwz r11,36(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x832726D4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_832726D4:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x833a01f8
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832726DC"))) PPC_WEAK_FUNC(sub_832726DC);
PPC_FUNC_IMPL(__imp__sub_832726DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832726E0"))) PPC_WEAK_FUNC(sub_832726E0);
PPC_FUNC_IMPL(__imp__sub_832726E0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x833a01ac
	ctx.lr = 0x832726E8;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// bl 0x8326df70
	ctx.lr = 0x832726F4;
	sub_8326DF70(ctx, base);
	// cmpwi cr6,r3,1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 1, ctx.xer);
	// beq cr6,0x8327270c
	if (ctx.cr6.eq) goto loc_8327270C;
	// lis r11,-32219
	ctx.r11.s64 = -2111504384;
	// addi r3,r11,14664
	ctx.r3.s64 = ctx.r11.s64 + 14664;
	// bl 0x83278688
	ctx.lr = 0x83272708;
	sub_83278688(ctx, base);
	// b 0x83272768
	goto loc_83272768;
loc_8327270C:
	// lis r30,-31816
	ctx.r30.s64 = -2085093376;
	// lis r11,-31845
	ctx.r11.s64 = -2086993920;
	// addi r31,r11,-2472
	ctx.r31.s64 = ctx.r11.s64 + -2472;
	// lwz r3,13264(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 13264);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8327273c
	if (ctx.cr6.eq) goto loc_8327273C;
	// stw r29,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r29.u32);
	// addi r4,r31,4
	ctx.r4.s64 = ctx.r31.s64 + 4;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,36(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8327273C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8327273C:
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x832723f8
	ctx.lr = 0x83272748;
	sub_832723F8(ctx, base);
	// lwz r3,13264(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 13264);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x83272768
	if (ctx.cr6.eq) goto loc_83272768;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r4,r31,108
	ctx.r4.s64 = ctx.r31.s64 + 108;
	// lwz r11,36(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x83272768;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_83272768:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x833a01fc
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83272770"))) PPC_WEAK_FUNC(sub_83272770);
PPC_FUNC_IMPL(__imp__sub_83272770) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x833a01ac
	ctx.lr = 0x83272778;
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
	// bl 0x8326df70
	ctx.lr = 0x8327278C;
	sub_8326DF70(ctx, base);
	// cmpwi cr6,r3,1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 1, ctx.xer);
	// beq cr6,0x832727a4
	if (ctx.cr6.eq) goto loc_832727A4;
	// lis r11,-32219
	ctx.r11.s64 = -2111504384;
	// addi r3,r11,14716
	ctx.r3.s64 = ctx.r11.s64 + 14716;
	// bl 0x83278688
	ctx.lr = 0x832727A0;
	sub_83278688(ctx, base);
	// b 0x832727f8
	goto loc_832727F8;
loc_832727A4:
	// lwz r3,108(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 108);
	// bl 0x832f0440
	ctx.lr = 0x832727AC;
	sub_832F0440(ctx, base);
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x832722a0
	ctx.lr = 0x832727BC;
	sub_832722A0(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x832721f8
	ctx.lr = 0x832727C8;
	sub_832721F8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83272500
	ctx.lr = 0x832727D0;
	sub_83272500(ctx, base);
	// li r10,2
	ctx.r10.s64 = 2;
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r30,1624(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1624, ctx.r30.u32);
	// stw r10,1616(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1616, ctx.r10.u32);
	// stw r29,1628(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1628, ctx.r29.u32);
	// stw r11,1608(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1608, ctx.r11.u32);
	// lwz r10,1612(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1612);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x832727f8
	if (!ctx.cr6.eq) goto loc_832727F8;
	// stw r11,1620(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1620, ctx.r11.u32);
loc_832727F8:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x833a01fc
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83272800"))) PPC_WEAK_FUNC(sub_83272800);
PPC_FUNC_IMPL(__imp__sub_83272800) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x833a01a8
	ctx.lr = 0x83272808;
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
	// bl 0x8326df70
	ctx.lr = 0x83272820;
	sub_8326DF70(ctx, base);
	// cmpwi cr6,r3,1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 1, ctx.xer);
	// beq cr6,0x83272838
	if (ctx.cr6.eq) goto loc_83272838;
	// lis r11,-32219
	ctx.r11.s64 = -2111504384;
	// addi r3,r11,14764
	ctx.r3.s64 = ctx.r11.s64 + 14764;
	// bl 0x83278688
	ctx.lr = 0x83272834;
	sub_83278688(ctx, base);
	// b 0x8327289c
	goto loc_8327289C;
loc_83272838:
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8326fb08
	ctx.lr = 0x83272844;
	sub_8326FB08(ctx, base);
	// lwz r3,108(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 108);
	// bl 0x832f0440
	ctx.lr = 0x8327284C;
	sub_832F0440(ctx, base);
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// lwz r4,1264(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1264);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83272340
	ctx.lr = 0x83272860;
	sub_83272340(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x832721f8
	ctx.lr = 0x8327286C;
	sub_832721F8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83272500
	ctx.lr = 0x83272874;
	sub_83272500(ctx, base);
	// li r10,3
	ctx.r10.s64 = 3;
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r30,1632(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1632, ctx.r30.u32);
	// stw r10,1616(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1616, ctx.r10.u32);
	// stw r29,1636(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1636, ctx.r29.u32);
	// stw r11,1608(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1608, ctx.r11.u32);
	// lwz r10,1612(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1612);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x8327289c
	if (!ctx.cr6.eq) goto loc_8327289C;
	// stw r11,1620(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1620, ctx.r11.u32);
loc_8327289C:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x833a01f8
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832728A4"))) PPC_WEAK_FUNC(sub_832728A4);
PPC_FUNC_IMPL(__imp__sub_832728A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832728A8"))) PPC_WEAK_FUNC(sub_832728A8);
PPC_FUNC_IMPL(__imp__sub_832728A8) {
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
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x8326e1f0
	ctx.lr = 0x832728C8;
	sub_8326E1F0(ctx, base);
	// lwz r11,1616(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1616);
	// li r10,1
	ctx.r10.s64 = 1;
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// stw r10,1612(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1612, ctx.r10.u32);
	// beq cr6,0x83272918
	if (ctx.cr6.eq) goto loc_83272918;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x83272904
	if (ctx.cr6.eq) goto loc_83272904;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bne cr6,0x83272924
	if (!ctx.cr6.eq) goto loc_83272924;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r6,1636(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1636);
	// lwz r5,1632(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1632);
	// lwz r4,1264(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1264);
	// bl 0x83272800
	ctx.lr = 0x83272900;
	sub_83272800(ctx, base);
	// b 0x83272924
	goto loc_83272924;
loc_83272904:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r5,1628(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1628);
	// lwz r4,1624(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1624);
	// bl 0x83272770
	ctx.lr = 0x83272914;
	sub_83272770(ctx, base);
	// b 0x83272924
	goto loc_83272924;
loc_83272918:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,1264(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1264);
	// bl 0x832725d8
	ctx.lr = 0x83272924;
	sub_832725D8(ctx, base);
loc_83272924:
	// lwz r11,1644(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1644);
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r10,1612(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1612, ctx.r10.u32);
	// stw r11,1644(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1644, ctx.r11.u32);
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

__attribute__((alias("__imp__sub_8327294C"))) PPC_WEAK_FUNC(sub_8327294C);
PPC_FUNC_IMPL(__imp__sub_8327294C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83272950"))) PPC_WEAK_FUNC(sub_83272950);
PPC_FUNC_IMPL(__imp__sub_83272950) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x833a01ac
	ctx.lr = 0x83272958;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x8326df70
	ctx.lr = 0x83272964;
	sub_8326DF70(ctx, base);
	// cmpwi cr6,r3,1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 1, ctx.xer);
	// beq cr6,0x8327297c
	if (ctx.cr6.eq) goto loc_8327297C;
	// lis r11,-32219
	ctx.r11.s64 = -2111504384;
	// addi r3,r11,14816
	ctx.r3.s64 = ctx.r11.s64 + 14816;
	// bl 0x83278688
	ctx.lr = 0x83272978;
	sub_83278688(ctx, base);
	// b 0x832729e8
	goto loc_832729E8;
loc_8327297C:
	// lis r29,-31816
	ctx.r29.s64 = -2085093376;
	// lis r11,-31845
	ctx.r11.s64 = -2086993920;
	// addi r30,r11,-3552
	ctx.r30.s64 = ctx.r11.s64 + -3552;
	// lwz r3,13264(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 13264);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x832729ac
	if (ctx.cr6.eq) goto loc_832729AC;
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
	ctx.lr = 0x832729AC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_832729AC:
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x832721f8
	ctx.lr = 0x832729B8;
	sub_832721F8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x832726e0
	ctx.lr = 0x832729C0;
	sub_832726E0(ctx, base);
	// li r11,4
	ctx.r11.s64 = 4;
	// stw r11,1620(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1620, ctx.r11.u32);
	// lwz r3,13264(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 13264);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x832729e8
	if (ctx.cr6.eq) goto loc_832729E8;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r4,r30,108
	ctx.r4.s64 = ctx.r30.s64 + 108;
	// lwz r11,36(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x832729E8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_832729E8:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x833a01fc
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832729F0"))) PPC_WEAK_FUNC(sub_832729F0);
PPC_FUNC_IMPL(__imp__sub_832729F0) {
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
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x8326e1f0
	ctx.lr = 0x83272A10;
	sub_8326E1F0(ctx, base);
	// lwz r10,1640(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1640);
	// li r11,1000
	ctx.r11.s64 = 1000;
	// lwz r9,80(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r8,84(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// divw r11,r10,r11
	ctx.r11.s32 = ctx.r10.s32 / ctx.r11.s32;
	// divw r10,r8,r9
	ctx.r10.s32 = ctx.r8.s32 / ctx.r9.s32;
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// bgt cr6,0x83272a4c
	if (ctx.cr6.gt) goto loc_83272A4C;
	// lwz r11,1620(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1620);
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// bne cr6,0x83272a4c
	if (!ctx.cr6.eq) goto loc_83272A4C;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83272950
	ctx.lr = 0x83272A44;
	sub_83272950(ctx, base);
	// li r11,3
	ctx.r11.s64 = 3;
	// stw r11,1620(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1620, ctx.r11.u32);
loc_83272A4C:
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

__attribute__((alias("__imp__sub_83272A60"))) PPC_WEAK_FUNC(sub_83272A60);
PPC_FUNC_IMPL(__imp__sub_83272A60) {
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
	// lwz r11,1604(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1604);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x83272af0
	if (ctx.cr6.eq) goto loc_83272AF0;
	// lwz r11,1608(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1608);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x83272af0
	if (ctx.cr6.eq) goto loc_83272AF0;
	// lwz r11,1620(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1620);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x83272abc
	if (!ctx.cr6.eq) goto loc_83272ABC;
	// bl 0x8326e440
	ctx.lr = 0x83272A9C;
	sub_8326E440(ctx, base);
	// cmpwi cr6,r3,2
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 2, ctx.xer);
	// bne cr6,0x83272abc
	if (!ctx.cr6.eq) goto loc_83272ABC;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83272468
	ctx.lr = 0x83272AAC;
	sub_83272468(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x83272af0
	if (ctx.cr0.lt) goto loc_83272AF0;
	// li r11,2
	ctx.r11.s64 = 2;
	// stw r11,1620(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1620, ctx.r11.u32);
loc_83272ABC:
	// lwz r11,1620(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1620);
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x83272ad0
	if (ctx.cr6.eq) goto loc_83272AD0;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bne cr6,0x83272af0
	if (!ctx.cr6.eq) goto loc_83272AF0;
loc_83272AD0:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8326df90
	ctx.lr = 0x83272AD8;
	sub_8326DF90(ctx, base);
	// cmpwi cr6,r3,3
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 3, ctx.xer);
	// bne cr6,0x83272ae8
	if (!ctx.cr6.eq) goto loc_83272AE8;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x832728a8
	ctx.lr = 0x83272AE8;
	sub_832728A8(ctx, base);
loc_83272AE8:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x832729f0
	ctx.lr = 0x83272AF0;
	sub_832729F0(ctx, base);
loc_83272AF0:
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

__attribute__((alias("__imp__sub_83272B04"))) PPC_WEAK_FUNC(sub_83272B04);
PPC_FUNC_IMPL(__imp__sub_83272B04) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83272B08"))) PPC_WEAK_FUNC(sub_83272B08);
PPC_FUNC_IMPL(__imp__sub_83272B08) {
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
	// bl 0x832ed6d0
	ctx.lr = 0x83272B18;
	sub_832ED6D0(ctx, base);
	// mulli r3,r3,1000
	ctx.r3.s64 = ctx.r3.s64 * 1000;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83272B2C"))) PPC_WEAK_FUNC(sub_83272B2C);
PPC_FUNC_IMPL(__imp__sub_83272B2C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83272B30"))) PPC_WEAK_FUNC(sub_83272B30);
PPC_FUNC_IMPL(__imp__sub_83272B30) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x833a01a8
	ctx.lr = 0x83272B38;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31845
	ctx.r11.s64 = -2086993920;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r11,-100
	ctx.r3.s64 = ctx.r11.s64 + -100;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// mr r28,r6
	ctx.r28.u64 = ctx.r6.u64;
	// bl 0x8326e598
	ctx.lr = 0x83272B5C;
	sub_8326E598(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x832700b0
	ctx.lr = 0x83272B64;
	sub_832700B0(ctx, base);
	// mr r7,r28
	ctx.r7.u64 = ctx.r28.u64;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8326eab0
	ctx.lr = 0x83272B7C;
	sub_8326EAB0(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x833a01f8
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83272B84"))) PPC_WEAK_FUNC(sub_83272B84);
PPC_FUNC_IMPL(__imp__sub_83272B84) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83272B88"))) PPC_WEAK_FUNC(sub_83272B88);
PPC_FUNC_IMPL(__imp__sub_83272B88) {
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
	// bl 0x832700b0
	ctx.lr = 0x83272BA0;
	sub_832700B0(ctx, base);
	// addi r3,r31,1504
	ctx.r3.s64 = ctx.r31.s64 + 1504;
	// bl 0x8326ec08
	ctx.lr = 0x83272BA8;
	sub_8326EC08(ctx, base);
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

__attribute__((alias("__imp__sub_83272BBC"))) PPC_WEAK_FUNC(sub_83272BBC);
PPC_FUNC_IMPL(__imp__sub_83272BBC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83272BC0"))) PPC_WEAK_FUNC(sub_83272BC0);
PPC_FUNC_IMPL(__imp__sub_83272BC0) {
	PPC_FUNC_PROLOGUE();
	// b 0x832f2b50
	sub_832F2B50(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83272BC4"))) PPC_WEAK_FUNC(sub_83272BC4);
PPC_FUNC_IMPL(__imp__sub_83272BC4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83272BC8"))) PPC_WEAK_FUNC(sub_83272BC8);
PPC_FUNC_IMPL(__imp__sub_83272BC8) {
	PPC_FUNC_PROLOGUE();
	// b 0x832f2630
	sub_832F2630(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83272BCC"))) PPC_WEAK_FUNC(sub_83272BCC);
PPC_FUNC_IMPL(__imp__sub_83272BCC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83272BD0"))) PPC_WEAK_FUNC(sub_83272BD0);
PPC_FUNC_IMPL(__imp__sub_83272BD0) {
	PPC_FUNC_PROLOGUE();
	// mr r6,r4
	ctx.r6.u64 = ctx.r4.u64;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// li r4,2
	ctx.r4.s64 = 2;
	// li r3,3
	ctx.r3.s64 = 3;
	// b 0x832f2c00
	sub_832F2C00(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83272BE4"))) PPC_WEAK_FUNC(sub_83272BE4);
PPC_FUNC_IMPL(__imp__sub_83272BE4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83272BE8"))) PPC_WEAK_FUNC(sub_83272BE8);
PPC_FUNC_IMPL(__imp__sub_83272BE8) {
	PPC_FUNC_PROLOGUE();
	// b 0x832f2998
	sub_832F2998(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83272BEC"))) PPC_WEAK_FUNC(sub_83272BEC);
PPC_FUNC_IMPL(__imp__sub_83272BEC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83272BF0"))) PPC_WEAK_FUNC(sub_83272BF0);
PPC_FUNC_IMPL(__imp__sub_83272BF0) {
	PPC_FUNC_PROLOGUE();
	// b 0x832f29d0
	sub_832F29D0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83272BF4"))) PPC_WEAK_FUNC(sub_83272BF4);
PPC_FUNC_IMPL(__imp__sub_83272BF4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83272BF8"))) PPC_WEAK_FUNC(sub_83272BF8);
PPC_FUNC_IMPL(__imp__sub_83272BF8) {
	PPC_FUNC_PROLOGUE();
	// b 0x832f1f30
	sub_832F1F30(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83272BFC"))) PPC_WEAK_FUNC(sub_83272BFC);
PPC_FUNC_IMPL(__imp__sub_83272BFC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83272C00"))) PPC_WEAK_FUNC(sub_83272C00);
PPC_FUNC_IMPL(__imp__sub_83272C00) {
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
	// bl 0x832f1a68
	ctx.lr = 0x83272C10;
	sub_832F1A68(ctx, base);
	// cmplwi cr6,r3,1
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 1, ctx.xer);
	// blt cr6,0x83272c48
	if (ctx.cr6.lt) goto loc_83272C48;
	// beq cr6,0x83272c40
	if (ctx.cr6.eq) goto loc_83272C40;
	// cmplwi cr6,r3,3
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 3, ctx.xer);
	// blt cr6,0x83272c38
	if (ctx.cr6.lt) goto loc_83272C38;
	// beq cr6,0x83272c30
	if (ctx.cr6.eq) goto loc_83272C30;
	// li r3,4
	ctx.r3.s64 = 4;
	// b 0x83272c4c
	goto loc_83272C4C;
loc_83272C30:
	// li r3,3
	ctx.r3.s64 = 3;
	// b 0x83272c4c
	goto loc_83272C4C;
loc_83272C38:
	// li r3,2
	ctx.r3.s64 = 2;
	// b 0x83272c4c
	goto loc_83272C4C;
loc_83272C40:
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x83272c4c
	goto loc_83272C4C;
loc_83272C48:
	// li r3,0
	ctx.r3.s64 = 0;
loc_83272C4C:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83272C5C"))) PPC_WEAK_FUNC(sub_83272C5C);
PPC_FUNC_IMPL(__imp__sub_83272C5C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83272C60"))) PPC_WEAK_FUNC(sub_83272C60);
PPC_FUNC_IMPL(__imp__sub_83272C60) {
	PPC_FUNC_PROLOGUE();
	// b 0x832f1f68
	sub_832F1F68(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83272C64"))) PPC_WEAK_FUNC(sub_83272C64);
PPC_FUNC_IMPL(__imp__sub_83272C64) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83272C68"))) PPC_WEAK_FUNC(sub_83272C68);
PPC_FUNC_IMPL(__imp__sub_83272C68) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x833a01ac
	ctx.lr = 0x83272C70;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// li r31,0
	ctx.r31.s64 = 0;
loc_83272C80:
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x832f25b0
	ctx.lr = 0x83272C90;
	sub_832F25B0(ctx, base);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// cmpwi cr6,r31,3
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 3, ctx.xer);
	// blt cr6,0x83272c80
	if (ctx.cr6.lt) goto loc_83272C80;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x833a01fc
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83272CA4"))) PPC_WEAK_FUNC(sub_83272CA4);
PPC_FUNC_IMPL(__imp__sub_83272CA4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83272CA8"))) PPC_WEAK_FUNC(sub_83272CA8);
PPC_FUNC_IMPL(__imp__sub_83272CA8) {
	PPC_FUNC_PROLOGUE();
	// li r4,0
	ctx.r4.s64 = 0;
	// b 0x832f1d58
	sub_832F1D58(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83272CB0"))) PPC_WEAK_FUNC(sub_83272CB0);
PPC_FUNC_IMPL(__imp__sub_83272CB0) {
	PPC_FUNC_PROLOGUE();
	// b 0x832f1c10
	sub_832F1C10(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83272CB4"))) PPC_WEAK_FUNC(sub_83272CB4);
PPC_FUNC_IMPL(__imp__sub_83272CB4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83272CB8"))) PPC_WEAK_FUNC(sub_83272CB8);
PPC_FUNC_IMPL(__imp__sub_83272CB8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x833a01a8
	ctx.lr = 0x83272CC0;
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
	// bl 0x832f1ac0
	ctx.lr = 0x83272CD4;
	sub_832F1AC0(ctx, base);
	// bl 0x83272b08
	ctx.lr = 0x83272CD8;
	sub_83272B08(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x832f1a68
	ctx.lr = 0x83272CE4;
	sub_832F1A68(ctx, base);
	// lwz r10,688(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 688);
	// cmpwi cr6,r3,3
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 3, ctx.xer);
	// beq cr6,0x83272d20
	if (ctx.cr6.eq) goto loc_83272D20;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// blt cr6,0x83272d00
	if (ctx.cr6.lt) goto loc_83272D00;
	// stw r11,688(r31)
	PPC_STORE_U32(ctx.r31.u32 + 688, ctx.r11.u32);
loc_83272D00:
	// std r28,696(r31)
	PPC_STORE_U64(ctx.r31.u32 + 696, ctx.r28.u64);
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x83272d48
	if (!ctx.cr6.eq) goto loc_83272D48;
	// lis r11,0
	ctx.r11.s64 = 0;
	// ori r11,r11,48000
	ctx.r11.u64 = ctx.r11.u64 | 48000;
	// stw r11,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r11.u32);
	// b 0x83272d48
	goto loc_83272D48;
loc_83272D20:
	// ld r11,696(r31)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r31.u32 + 696);
	// lis r9,15
	ctx.r9.s64 = 983040;
	// lwa r8,0(r29)
	ctx.r8.s64 = int32_t(PPC_LOAD_U32(ctx.r29.u32 + 0));
	// subf r11,r11,r28
	ctx.r11.s64 = ctx.r28.s64 - ctx.r11.s64;
	// ori r9,r9,16960
	ctx.r9.u64 = ctx.r9.u64 | 16960;
	// mulld r11,r11,r8
	ctx.r11.s64 = ctx.r11.s64 * ctx.r8.s64;
	// divd r11,r11,r9
	ctx.r11.s64 = ctx.r11.s64 / ctx.r9.s64;
	// extsw r11,r11
	ctx.r11.s64 = ctx.r11.s32;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
loc_83272D48:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x833a01f8
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83272D50"))) PPC_WEAK_FUNC(sub_83272D50);
PPC_FUNC_IMPL(__imp__sub_83272D50) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x833a01ac
	ctx.lr = 0x83272D58;
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
	// bl 0x8326e690
	ctx.lr = 0x83272D6C;
	sub_8326E690(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x83272d84
	if (ctx.cr0.eq) goto loc_83272D84;
	// lis r11,-32219
	ctx.r11.s64 = -2111504384;
	// addi r3,r11,14936
	ctx.r3.s64 = ctx.r11.s64 + 14936;
	// bl 0x83278688
	ctx.lr = 0x83272D80;
	sub_83278688(ctx, base);
	// b 0x83272dcc
	goto loc_83272DCC;
loc_83272D84:
	// li r6,1
	ctx.r6.s64 = 1;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83272b30
	ctx.lr = 0x83272D98;
	sub_83272B30(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8326e690
	ctx.lr = 0x83272DA0;
	sub_8326E690(ctx, base);
	// mr. r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// beq 0x83272dcc
	if (ctx.cr0.eq) goto loc_83272DCC;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x832f2e48
	ctx.lr = 0x83272DB8;
	sub_832F2E48(ctx, base);
	// lis r11,-31961
	ctx.r11.s64 = -2094596096;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// addi r4,r11,11448
	ctx.r4.s64 = ctx.r11.s64 + 11448;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8326f220
	ctx.lr = 0x83272DCC;
	sub_8326F220(ctx, base);
loc_83272DCC:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x833a01fc
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83272DD4"))) PPC_WEAK_FUNC(sub_83272DD4);
PPC_FUNC_IMPL(__imp__sub_83272DD4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83272DD8"))) PPC_WEAK_FUNC(sub_83272DD8);
PPC_FUNC_IMPL(__imp__sub_83272DD8) {
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
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x8326e0b8
	ctx.lr = 0x83272DF4;
	sub_8326E0B8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x8326f220
	ctx.lr = 0x83272E04;
	sub_8326F220(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8326e690
	ctx.lr = 0x83272E0C;
	sub_8326E690(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x83272e18
	if (ctx.cr0.eq) goto loc_83272E18;
	// bl 0x832f2d38
	ctx.lr = 0x83272E18;
	sub_832F2D38(ctx, base);
loc_83272E18:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83272b88
	ctx.lr = 0x83272E20;
	sub_83272B88(ctx, base);
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

__attribute__((alias("__imp__sub_83272E34"))) PPC_WEAK_FUNC(sub_83272E34);
PPC_FUNC_IMPL(__imp__sub_83272E34) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83272E38"))) PPC_WEAK_FUNC(sub_83272E38);
PPC_FUNC_IMPL(__imp__sub_83272E38) {
	PPC_FUNC_PROLOGUE();
	// cmplwi cr6,r4,140
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 140, ctx.xer);
	// bge cr6,0x83272e48
	if (!ctx.cr6.lt) goto loc_83272E48;
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_83272E48:
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83272E54"))) PPC_WEAK_FUNC(sub_83272E54);
PPC_FUNC_IMPL(__imp__sub_83272E54) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83272E58"))) PPC_WEAK_FUNC(sub_83272E58);
PPC_FUNC_IMPL(__imp__sub_83272E58) {
	PPC_FUNC_PROLOGUE();
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83272E64"))) PPC_WEAK_FUNC(sub_83272E64);
PPC_FUNC_IMPL(__imp__sub_83272E64) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83272E68"))) PPC_WEAK_FUNC(sub_83272E68);
PPC_FUNC_IMPL(__imp__sub_83272E68) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x83272e88
	if (!ctx.cr6.eq) goto loc_83272E88;
	// lwz r11,64(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 64);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x83272e88
	if (!ctx.cr6.eq) goto loc_83272E88;
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
	// blr 
	return;
loc_83272E88:
	// lwz r11,64(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 64);
	// addi r11,r11,2047
	ctx.r11.s64 = ctx.r11.s64 + 2047;
	// srawi r11,r11,11
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x7FF) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 11;
	// addze r11,r11
	temp.s64 = ctx.r11.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r11.u32;
	ctx.r11.s64 = temp.s64;
	// rlwinm r11,r11,11,0,20
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 11) & 0xFFFFF800;
	// cmpwi cr6,r11,4096
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4096, ctx.xer);
	// bgt cr6,0x83272ea8
	if (ctx.cr6.gt) goto loc_83272EA8;
	// li r11,4096
	ctx.r11.s64 = 4096;
loc_83272EA8:
	// lwz r10,0(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// blelr cr6
	if (!ctx.cr6.gt) return;
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmpwi cr6,r10,10
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 10, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// cmpwi cr6,r10,12
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 12, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// stw r11,0(r5)
	PPC_STORE_U32(ctx.r5.u32 + 0, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83272ED4"))) PPC_WEAK_FUNC(sub_83272ED4);
PPC_FUNC_IMPL(__imp__sub_83272ED4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83272ED8"))) PPC_WEAK_FUNC(sub_83272ED8);
PPC_FUNC_IMPL(__imp__sub_83272ED8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lwz r10,8(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// lwz r9,12(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// srawi r11,r10,1
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x1) != 0);
	ctx.r11.s64 = ctx.r10.s32 >> 1;
	// addze r11,r11
	temp.s64 = ctx.r11.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r11.u32;
	ctx.r11.s64 = temp.s64;
	// addi r11,r11,31
	ctx.r11.s64 = ctx.r11.s64 + 31;
	// srawi r11,r11,5
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1F) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 5;
	// addze r11,r11
	temp.s64 = ctx.r11.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r11.u32;
	ctx.r11.s64 = temp.s64;
	// srawi r8,r9,1
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x1) != 0);
	ctx.r8.s64 = ctx.r9.s32 >> 1;
	// rlwinm r11,r11,5,0,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 5) & 0xFFFFFFE0;
	// addze r8,r8
	temp.s64 = ctx.r8.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r8.u32;
	ctx.r8.s64 = temp.s64;
	// stw r11,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r11.u32);
	// stw r8,0(r7)
	PPC_STORE_U32(ctx.r7.u32 + 0, ctx.r8.u32);
	// stw r10,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r10.u32);
	// stw r9,0(r5)
	PPC_STORE_U32(ctx.r5.u32 + 0, ctx.r9.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83272F14"))) PPC_WEAK_FUNC(sub_83272F14);
PPC_FUNC_IMPL(__imp__sub_83272F14) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83272F18"))) PPC_WEAK_FUNC(sub_83272F18);
PPC_FUNC_IMPL(__imp__sub_83272F18) {
	PPC_FUNC_PROLOGUE();
	// cmpwi cr6,r4,1
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 1, ctx.xer);
	// bne cr6,0x83272f28
	if (!ctx.cr6.eq) goto loc_83272F28;
loc_83272F20:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_83272F28:
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// bne cr6,0x83272f48
	if (!ctx.cr6.eq) goto loc_83272F48;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// ble cr6,0x83272f48
	if (!ctx.cr6.gt) goto loc_83272F48;
	// cmpwi cr6,r3,3
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 3, ctx.xer);
	// ble cr6,0x83272f20
	if (!ctx.cr6.gt) goto loc_83272F20;
	// cmpwi cr6,r3,5
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 5, ctx.xer);
	// beq cr6,0x83272f20
	if (ctx.cr6.eq) goto loc_83272F20;
loc_83272F48:
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83272F50"))) PPC_WEAK_FUNC(sub_83272F50);
PPC_FUNC_IMPL(__imp__sub_83272F50) {
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
	// cmplwi cr6,r3,1
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 1, ctx.xer);
	// blt cr6,0x83272f80
	if (ctx.cr6.lt) goto loc_83272F80;
	// beq cr6,0x83272f9c
	if (ctx.cr6.eq) goto loc_83272F9C;
	// cmplwi cr6,r3,3
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 3, ctx.xer);
	// blt cr6,0x83272f94
	if (ctx.cr6.lt) goto loc_83272F94;
	// beq cr6,0x83272f80
	if (ctx.cr6.eq) goto loc_83272F80;
	// lis r11,-32219
	ctx.r11.s64 = -2111504384;
	// addi r3,r11,15084
	ctx.r3.s64 = ctx.r11.s64 + 15084;
	// bl 0x83278688
	ctx.lr = 0x83272F80;
	sub_83278688(ctx, base);
loc_83272F80:
	// li r3,3
	ctx.r3.s64 = 3;
loc_83272F84:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_83272F94:
	// li r3,2
	ctx.r3.s64 = 2;
	// b 0x83272f84
	goto loc_83272F84;
loc_83272F9C:
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x83272f84
	goto loc_83272F84;
}

__attribute__((alias("__imp__sub_83272FA4"))) PPC_WEAK_FUNC(sub_83272FA4);
PPC_FUNC_IMPL(__imp__sub_83272FA4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83272FA8"))) PPC_WEAK_FUNC(sub_83272FA8);
PPC_FUNC_IMPL(__imp__sub_83272FA8) {
	PPC_FUNC_PROLOGUE();
	// li r11,16384
	ctx.r11.s64 = 16384;
	// li r10,256
	ctx.r10.s64 = 256;
	// li r9,1248
	ctx.r9.s64 = 1248;
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
	// addi r3,r11,1248
	ctx.r3.s64 = ctx.r11.s64 + 1248;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83272FD4"))) PPC_WEAK_FUNC(sub_83272FD4);
PPC_FUNC_IMPL(__imp__sub_83272FD4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83272FD8"))) PPC_WEAK_FUNC(sub_83272FD8);
PPC_FUNC_IMPL(__imp__sub_83272FD8) {
	PPC_FUNC_PROLOGUE();
	// li r3,256
	ctx.r3.s64 = 256;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83272FE0"))) PPC_WEAK_FUNC(sub_83272FE0);
PPC_FUNC_IMPL(__imp__sub_83272FE0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r4,12(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r3,8(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// bl 0x83270308
	ctx.lr = 0x83273004;
	sub_83270308(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x832706d8
	ctx.lr = 0x83273010;
	sub_832706D8(ctx, base);
	// cmpwi cr6,r3,1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 1, ctx.xer);
	// addis r3,r31,2
	ctx.r3.s64 = ctx.r31.s64 + 131072;
	// beq cr6,0x83273020
	if (ctx.cr6.eq) goto loc_83273020;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_83273020:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83273038"))) PPC_WEAK_FUNC(sub_83273038);
PPC_FUNC_IMPL(__imp__sub_83273038) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// addi r11,r3,15
	ctx.r11.s64 = ctx.r3.s64 + 15;
	// addi r10,r4,15
	ctx.r10.s64 = ctx.r4.s64 + 15;
	// srawi r11,r11,4
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0xF) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 4;
	// addze r11,r11
	temp.s64 = ctx.r11.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r11.u32;
	ctx.r11.s64 = temp.s64;
	// srawi r9,r10,4
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0xF) != 0);
	ctx.r9.s64 = ctx.r10.s32 >> 4;
	// rlwinm r10,r11,4,0,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// addze r11,r9
	temp.s64 = ctx.r9.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r9.u32;
	ctx.r11.s64 = temp.s64;
	// srawi r9,r10,1
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x1) != 0);
	ctx.r9.s64 = ctx.r10.s32 >> 1;
	// rlwinm r8,r11,4,0,27
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// addze r9,r9
	temp.s64 = ctx.r9.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r9.u32;
	ctx.r9.s64 = temp.s64;
	// addi r10,r10,127
	ctx.r10.s64 = ctx.r10.s64 + 127;
	// addi r9,r9,127
	ctx.r9.s64 = ctx.r9.s64 + 127;
	// srawi r9,r9,7
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x7F) != 0);
	ctx.r9.s64 = ctx.r9.s32 >> 7;
	// addze r9,r9
	temp.s64 = ctx.r9.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r9.u32;
	ctx.r9.s64 = temp.s64;
	// srawi r8,r8,1
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x1) != 0);
	ctx.r8.s64 = ctx.r8.s32 >> 1;
	// addze r8,r8
	temp.s64 = ctx.r8.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r8.u32;
	ctx.r8.s64 = temp.s64;
	// srawi r7,r10,7
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x7F) != 0);
	ctx.r7.s64 = ctx.r10.s32 >> 7;
	// mullw r10,r9,r8
	ctx.r10.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r8.s32);
	// addze r9,r7
	temp.s64 = ctx.r7.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r7.u32;
	ctx.r9.s64 = temp.s64;
	// mullw r11,r9,r11
	ctx.r11.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r11.s32);
	// rlwinm r11,r11,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// rlwinm r11,r11,8,0,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 8) & 0xFFFFFF00;
	// addi r3,r11,128
	ctx.r3.s64 = ctx.r11.s64 + 128;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8327309C"))) PPC_WEAK_FUNC(sub_8327309C);
PPC_FUNC_IMPL(__imp__sub_8327309C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832730A0"))) PPC_WEAK_FUNC(sub_832730A0);
PPC_FUNC_IMPL(__imp__sub_832730A0) {
	PPC_FUNC_PROLOGUE();
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
	// lwz r11,1288(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1288);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r30,96(r3)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r3.u32 + 96);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x832731b0
	if (ctx.cr6.eq) goto loc_832731B0;
	// lwz r9,1324(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1324);
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// bne cr6,0x832730f4
	if (!ctx.cr6.eq) goto loc_832730F4;
	// li r10,0
	ctx.r10.s64 = 0;
	// li r8,2
	ctx.r8.s64 = 2;
	// stw r10,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r10.u32);
	// stw r8,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r8.u32);
	// stw r10,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r10.u32);
	// stw r10,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r10.u32);
	// stw r10,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r10.u32);
	// b 0x8327314c
	goto loc_8327314C;
loc_832730F4:
	// lwz r10,1292(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1292);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x83273124
	if (!ctx.cr6.eq) goto loc_83273124;
	// lwz r8,1296(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1296);
	// li r10,0
	ctx.r10.s64 = 0;
	// lwz r7,1300(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1300);
	// lwz r6,1304(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1304);
	// stw r10,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r10.u32);
	// stw r8,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r8.u32);
	// stw r7,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r7.u32);
	// stw r6,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r6.u32);
	// b 0x83273148
	goto loc_83273148;
loc_83273124:
	// lwz r7,1312(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1312);
	// li r8,0
	ctx.r8.s64 = 0;
	// lwz r6,1316(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1316);
	// lwz r5,1320(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1320);
	// lwz r10,1308(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1308);
	// stw r8,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r8.u32);
	// stw r7,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r7.u32);
	// stw r6,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r6.u32);
	// stw r5,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r5.u32);
loc_83273148:
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
loc_8327314C:
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// li r4,85
	ctx.r4.s64 = 85;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bne cr6,0x83273170
	if (!ctx.cr6.eq) goto loc_83273170;
	// li r5,1
	ctx.r5.s64 = 1;
	// bl 0x83274ee0
	ctx.lr = 0x83273168;
	sub_83274EE0(ctx, base);
	// li r5,2048
	ctx.r5.s64 = 2048;
	// b 0x8327317c
	goto loc_8327317C;
loc_83273170:
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x83274ee0
	ctx.lr = 0x83273178;
	sub_83274EE0(ctx, base);
	// li r5,4
	ctx.r5.s64 = 4;
loc_8327317C:
	// li r4,86
	ctx.r4.s64 = 86;
	// lwz r3,96(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 96);
	// bl 0x83274ee0
	ctx.lr = 0x83273188;
	sub_83274EE0(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8327e8f8
	ctx.lr = 0x83273194;
	sub_8327E8F8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x832731b0
	if (ctx.cr0.eq) goto loc_832731B0;
	// li r3,-312
	ctx.r3.s64 = -312;
	// bl 0x8326ef70
	ctx.lr = 0x832731A4;
	sub_8326EF70(ctx, base);
	// lis r11,-32219
	ctx.r11.s64 = -2111504384;
	// addi r3,r11,15124
	ctx.r3.s64 = ctx.r11.s64 + 15124;
	// bl 0x83278688
	ctx.lr = 0x832731B0;
	sub_83278688(ctx, base);
loc_832731B0:
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

__attribute__((alias("__imp__sub_832731C8"))) PPC_WEAK_FUNC(sub_832731C8);
PPC_FUNC_IMPL(__imp__sub_832731C8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x833a01a8
	ctx.lr = 0x832731D0;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r10,r4
	ctx.r10.u64 = ctx.r4.u64;
	// lwz r4,68(r4)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r4.u32 + 68);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// lwz r3,0(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// bl 0x83272f18
	ctx.lr = 0x832731EC;
	sub_83272F18(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// li r6,0
	ctx.r6.s64 = 0;
	// beq 0x83273208
	if (ctx.cr0.eq) goto loc_83273208;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r6,0(r5)
	PPC_STORE_U32(ctx.r5.u32 + 0, ctx.r6.u32);
	// stw r6,4(r5)
	PPC_STORE_U32(ctx.r5.u32 + 4, ctx.r6.u32);
	// b 0x83273300
	goto loc_83273300;
loc_83273208:
	// lwz r11,8(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// mr r30,r6
	ctx.r30.u64 = ctx.r6.u64;
	// lwz r9,12(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// addi r11,r11,15
	ctx.r11.s64 = ctx.r11.s64 + 15;
	// lwz r8,40(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 40);
	// addi r9,r9,15
	ctx.r9.s64 = ctx.r9.s64 + 15;
	// srawi r11,r11,4
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0xF) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 4;
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// addze r11,r11
	temp.s64 = ctx.r11.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r11.u32;
	ctx.r11.s64 = temp.s64;
	// srawi r7,r9,4
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0xF) != 0);
	ctx.r7.s64 = ctx.r9.s32 >> 4;
	// rlwinm r9,r11,4,0,27
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// addze r11,r7
	temp.s64 = ctx.r7.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r7.u32;
	ctx.r11.s64 = temp.s64;
	// srawi r7,r9,1
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x1) != 0);
	ctx.r7.s64 = ctx.r9.s32 >> 1;
	// rlwinm r5,r11,4,0,27
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// addze r7,r7
	temp.s64 = ctx.r7.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r7.u32;
	ctx.r7.s64 = temp.s64;
	// addi r9,r9,127
	ctx.r9.s64 = ctx.r9.s64 + 127;
	// addi r7,r7,127
	ctx.r7.s64 = ctx.r7.s64 + 127;
	// srawi r7,r7,7
	ctx.xer.ca = (ctx.r7.s32 < 0) & ((ctx.r7.u32 & 0x7F) != 0);
	ctx.r7.s64 = ctx.r7.s32 >> 7;
	// addze r7,r7
	temp.s64 = ctx.r7.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r7.u32;
	ctx.r7.s64 = temp.s64;
	// srawi r5,r5,1
	ctx.xer.ca = (ctx.r5.s32 < 0) & ((ctx.r5.u32 & 0x1) != 0);
	ctx.r5.s64 = ctx.r5.s32 >> 1;
	// addze r5,r5
	temp.s64 = ctx.r5.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r5.u32;
	ctx.r5.s64 = temp.s64;
	// srawi r4,r9,7
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x7F) != 0);
	ctx.r4.s64 = ctx.r9.s32 >> 7;
	// mullw r9,r7,r5
	ctx.r9.s64 = int64_t(ctx.r7.s32) * int64_t(ctx.r5.s32);
	// addze r7,r4
	temp.s64 = ctx.r4.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r4.u32;
	ctx.r7.s64 = temp.s64;
	// mullw r11,r7,r11
	ctx.r11.s64 = int64_t(ctx.r7.s32) * int64_t(ctx.r11.s32);
	// rlwinm r11,r11,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// add r11,r9,r11
	ctx.r11.u64 = ctx.r9.u64 + ctx.r11.u64;
	// rlwinm r11,r11,8,0,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 8) & 0xFFFFFF00;
	// addi r31,r11,128
	ctx.r31.s64 = ctx.r11.s64 + 128;
	// beq cr6,0x832732c0
	if (ctx.cr6.eq) goto loc_832732C0;
	// cmpwi cr6,r8,2
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 2, ctx.xer);
	// blt cr6,0x832732b0
	if (ctx.cr6.lt) goto loc_832732B0;
	// lwz r11,44(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 44);
	// cmpw cr6,r11,r31
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r31.s32, ctx.xer);
	// blt cr6,0x832732b0
	if (ctx.cr6.lt) goto loc_832732B0;
	// lwz r11,48(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 48);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stw r11,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r11.u32);
	// lwz r11,48(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 48);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// stw r11,4(r29)
	PPC_STORE_U32(ctx.r29.u32 + 4, ctx.r11.u32);
	// b 0x832732e0
	goto loc_832732E0;
loc_832732B0:
	// stw r6,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r6.u32);
	// li r30,-1
	ctx.r30.s64 = -1;
	// stw r6,4(r29)
	PPC_STORE_U32(ctx.r29.u32 + 4, ctx.r6.u32);
	// b 0x832732e0
	goto loc_832732E0;
loc_832732C0:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x83285858
	ctx.lr = 0x832732CC;
	sub_83285858(ctx, base);
	// stw r3,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r3.u32);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x83285858
	ctx.lr = 0x832732DC;
	sub_83285858(ctx, base);
	// stw r3,4(r29)
	PPC_STORE_U32(ctx.r29.u32 + 4, ctx.r3.u32);
loc_832732E0:
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x832732f8
	if (ctx.cr6.eq) goto loc_832732F8;
	// lwz r11,4(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x832732fc
	if (!ctx.cr6.eq) goto loc_832732FC;
loc_832732F8:
	// li r30,-1
	ctx.r30.s64 = -1;
loc_832732FC:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
loc_83273300:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x833a01f8
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83273308"))) PPC_WEAK_FUNC(sub_83273308);
PPC_FUNC_IMPL(__imp__sub_83273308) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x833a019c
	ctx.lr = 0x83273310;
	__savegprlr_25(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// lwz r28,16(r4)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r4.u32 + 16);
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// lwz r4,68(r4)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r4.u32 + 68);
	// mr r27,r5
	ctx.r27.u64 = ctx.r5.u64;
	// li r25,0
	ctx.r25.s64 = 0;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x83272f18
	ctx.lr = 0x83273334;
	sub_83272F18(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x83273368
	if (ctx.cr0.eq) goto loc_83273368;
	// cmpwi cr6,r28,0
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// ble cr6,0x83273360
	if (!ctx.cr6.gt) goto loc_83273360;
	// addi r11,r5,-4
	ctx.r11.s64 = ctx.r5.s64 + -4;
	// li r10,0
	ctx.r10.s64 = 0;
	// cmplwi r28,0
	ctx.cr0.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// beq 0x83273360
	if (ctx.cr0.eq) goto loc_83273360;
	// mtctr r28
	ctx.ctr.u64 = ctx.r28.u64;
loc_83273358:
	// stwu r10,4(r11)
	ea = 4 + ctx.r11.u32;
	PPC_STORE_U32(ea, ctx.r10.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x83273358
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_83273358;
loc_83273360:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x83273478
	goto loc_83273478;
loc_83273368:
	// lwz r30,8(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r29,12(r31)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// lwz r3,36(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// bl 0x83272f50
	ctx.lr = 0x83273378;
	sub_83272F50(ctx, base);
	// addi r11,r30,15
	ctx.r11.s64 = ctx.r30.s64 + 15;
	// addi r10,r29,15
	ctx.r10.s64 = ctx.r29.s64 + 15;
	// srawi r11,r11,4
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0xF) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 4;
	// addze r11,r11
	temp.s64 = ctx.r11.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r11.u32;
	ctx.r11.s64 = temp.s64;
	// srawi r9,r10,4
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0xF) != 0);
	ctx.r9.s64 = ctx.r10.s32 >> 4;
	// rlwinm r10,r11,4,0,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// addze r11,r9
	temp.s64 = ctx.r9.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r9.u32;
	ctx.r11.s64 = temp.s64;
	// srawi r9,r10,1
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x1) != 0);
	ctx.r9.s64 = ctx.r10.s32 >> 1;
	// addi r7,r10,127
	ctx.r7.s64 = ctx.r10.s64 + 127;
	// addze r9,r9
	temp.s64 = ctx.r9.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r9.u32;
	ctx.r9.s64 = temp.s64;
	// rlwinm r8,r11,4,0,27
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// addi r10,r9,127
	ctx.r10.s64 = ctx.r9.s64 + 127;
	// srawi r10,r10,7
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x7F) != 0);
	ctx.r10.s64 = ctx.r10.s32 >> 7;
	// addze r9,r10
	temp.s64 = ctx.r10.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r10.u32;
	ctx.r9.s64 = temp.s64;
	// srawi r10,r8,1
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x1) != 0);
	ctx.r10.s64 = ctx.r8.s32 >> 1;
	// addze r8,r10
	temp.s64 = ctx.r10.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r10.u32;
	ctx.r8.s64 = temp.s64;
	// lwz r10,40(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// srawi r7,r7,7
	ctx.xer.ca = (ctx.r7.s32 < 0) & ((ctx.r7.u32 & 0x7F) != 0);
	ctx.r7.s64 = ctx.r7.s32 >> 7;
	// mullw r9,r9,r8
	ctx.r9.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r8.s32);
	// addze r8,r7
	temp.s64 = ctx.r7.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r7.u32;
	ctx.r8.s64 = temp.s64;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// mullw r11,r8,r11
	ctx.r11.s64 = int64_t(ctx.r8.s32) * int64_t(ctx.r11.s32);
	// rlwinm r11,r11,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// add r11,r9,r11
	ctx.r11.u64 = ctx.r9.u64 + ctx.r11.u64;
	// rlwinm r11,r11,8,0,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 8) & 0xFFFFFF00;
	// addi r30,r11,128
	ctx.r30.s64 = ctx.r11.s64 + 128;
	// beq cr6,0x83273440
	if (ctx.cr6.eq) goto loc_83273440;
	// addi r11,r28,2
	ctx.r11.s64 = ctx.r28.s64 + 2;
	// cmpw cr6,r10,r11
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x83273438
	if (ctx.cr6.lt) goto loc_83273438;
	// lwz r11,44(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 44);
	// cmpw cr6,r11,r30
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r30.s32, ctx.xer);
	// blt cr6,0x83273438
	if (ctx.cr6.lt) goto loc_83273438;
	// cmpwi cr6,r28,0
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// ble cr6,0x83273474
	if (!ctx.cr6.gt) goto loc_83273474;
	// mtctr r28
	ctx.ctr.u64 = ctx.r28.u64;
	// mr r11,r27
	ctx.r11.u64 = ctx.r27.u64;
	// subfic r9,r27,8
	ctx.xer.ca = ctx.r27.u32 <= 8;
	ctx.r9.s64 = 8 - ctx.r27.s64;
loc_83273410:
	// lwz r10,48(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// lwzx r10,r10,r11
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// bne cr6,0x8327342c
	if (!ctx.cr6.eq) goto loc_8327342C;
	// li r25,-1
	ctx.r25.s64 = -1;
loc_8327342C:
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x83273410
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_83273410;
	// b 0x83273474
	goto loc_83273474;
loc_83273438:
	// li r25,-1
	ctx.r25.s64 = -1;
	// b 0x83273474
	goto loc_83273474;
loc_83273440:
	// cmpwi cr6,r28,0
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// ble cr6,0x83273474
	if (!ctx.cr6.gt) goto loc_83273474;
	// mr r31,r27
	ctx.r31.u64 = ctx.r27.u64;
loc_8327344C:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x83285858
	ctx.lr = 0x83273458;
	sub_83285858(ctx, base);
	// stw r3,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r3.u32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne 0x83273468
	if (!ctx.cr0.eq) goto loc_83273468;
	// li r25,-1
	ctx.r25.s64 = -1;
loc_83273468:
	// addic. r28,r28,-1
	ctx.xer.ca = ctx.r28.u32 > 0;
	ctx.r28.s64 = ctx.r28.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// bne 0x8327344c
	if (!ctx.cr0.eq) goto loc_8327344C;
loc_83273474:
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
loc_83273478:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x833a01ec
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83273480"))) PPC_WEAK_FUNC(sub_83273480);
PPC_FUNC_IMPL(__imp__sub_83273480) {
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
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x83273540
	if (ctx.cr6.eq) goto loc_83273540;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x83273508
	if (ctx.cr6.eq) goto loc_83273508;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// beq cr6,0x832734fc
	if (ctx.cr6.eq) goto loc_832734FC;
	// cmpwi cr6,r11,8
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 8, ctx.xer);
	// beq cr6,0x832734d4
	if (ctx.cr6.eq) goto loc_832734D4;
	// cmpwi cr6,r11,9
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 9, ctx.xer);
	// beq cr6,0x832734f0
	if (ctx.cr6.eq) goto loc_832734F0;
	// cmpwi cr6,r11,11
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 11, ctx.xer);
	// beq cr6,0x832734e4
	if (ctx.cr6.eq) goto loc_832734E4;
	// cmpwi cr6,r11,12
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 12, ctx.xer);
	// bne cr6,0x83273578
	if (!ctx.cr6.eq) goto loc_83273578;
loc_832734D4:
	// lis r11,-32219
	ctx.r11.s64 = -2111504384;
	// addi r3,r11,15236
	ctx.r3.s64 = ctx.r11.s64 + 15236;
loc_832734DC:
	// bl 0x83278688
	ctx.lr = 0x832734E0;
	sub_83278688(ctx, base);
	// b 0x83273578
	goto loc_83273578;
loc_832734E4:
	// lis r11,-32219
	ctx.r11.s64 = -2111504384;
	// addi r3,r11,15196
	ctx.r3.s64 = ctx.r11.s64 + 15196;
	// b 0x832734dc
	goto loc_832734DC;
loc_832734F0:
	// lis r11,-32219
	ctx.r11.s64 = -2111504384;
	// addi r3,r11,15156
	ctx.r3.s64 = ctx.r11.s64 + 15156;
	// b 0x832734dc
	goto loc_832734DC;
loc_832734FC:
	// lis r11,-31845
	ctx.r11.s64 = -2086993920;
	// addi r4,r11,5112
	ctx.r4.s64 = ctx.r11.s64 + 5112;
	// b 0x83273548
	goto loc_83273548;
loc_83273508:
	// lis r11,-31845
	ctx.r11.s64 = -2086993920;
	// li r5,100
	ctx.r5.s64 = 100;
	// addi r4,r11,4984
	ctx.r4.s64 = ctx.r11.s64 + 4984;
	// bl 0x833a1390
	ctx.lr = 0x83273518;
	sub_833A1390(ctx, base);
	// lis r10,-31827
	ctx.r10.s64 = -2085814272;
	// li r9,2048
	ctx.r9.s64 = 2048;
	// addi r11,r10,10144
	ctx.r11.s64 = ctx.r10.s64 + 10144;
	// lwz r11,304(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 304);
	// stw r11,1296(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1296, ctx.r11.u32);
	// lwz r11,10144(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 10144);
	// addi r11,r11,-2048
	ctx.r11.s64 = ctx.r11.s64 + -2048;
	// stw r9,1304(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1304, ctx.r9.u32);
	// stw r11,1300(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1300, ctx.r11.u32);
	// b 0x83273578
	goto loc_83273578;
loc_83273540:
	// lis r11,-31845
	ctx.r11.s64 = -2086993920;
	// addi r4,r11,4848
	ctx.r4.s64 = ctx.r11.s64 + 4848;
loc_83273548:
	// li r5,100
	ctx.r5.s64 = 100;
	// bl 0x833a1390
	ctx.lr = 0x83273550;
	sub_833A1390(ctx, base);
	// lis r9,-31827
	ctx.r9.s64 = -2085814272;
	// lis r11,-31845
	ctx.r11.s64 = -2086993920;
	// addi r10,r9,10144
	ctx.r10.s64 = ctx.r9.s64 + 10144;
	// lwz r11,-44(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -44);
	// lwz r10,304(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 304);
	// stw r10,1296(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1296, ctx.r10.u32);
	// lwz r10,10144(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 10144);
	// subf r10,r11,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r11.s64;
	// stw r10,1300(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1300, ctx.r10.u32);
	// stw r11,1304(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1304, ctx.r11.u32);
loc_83273578:
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

__attribute__((alias("__imp__sub_8327358C"))) PPC_WEAK_FUNC(sub_8327358C);
PPC_FUNC_IMPL(__imp__sub_8327358C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83273590"))) PPC_WEAK_FUNC(sub_83273590);
PPC_FUNC_IMPL(__imp__sub_83273590) {
	PPC_FUNC_PROLOGUE();
	// cmpwi cr6,r3,2
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 2, ctx.xer);
	// blt cr6,0x832735c8
	if (ctx.cr6.lt) goto loc_832735C8;
	// cmpwi cr6,r3,3
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 3, ctx.xer);
	// ble cr6,0x832735c0
	if (!ctx.cr6.gt) goto loc_832735C0;
	// cmpwi cr6,r3,6
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 6, ctx.xer);
	// beq cr6,0x832735c0
	if (ctx.cr6.eq) goto loc_832735C0;
	// cmpwi cr6,r3,8
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 8, ctx.xer);
	// beq cr6,0x832735c0
	if (ctx.cr6.eq) goto loc_832735C0;
	// cmpwi cr6,r3,10
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 10, ctx.xer);
	// beq cr6,0x832735c0
	if (ctx.cr6.eq) goto loc_832735C0;
	// cmpwi cr6,r3,12
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 12, ctx.xer);
	// bne cr6,0x832735c8
	if (!ctx.cr6.eq) goto loc_832735C8;
loc_832735C0:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_832735C8:
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_832735D0"))) PPC_WEAK_FUNC(sub_832735D0);
PPC_FUNC_IMPL(__imp__sub_832735D0) {
	PPC_FUNC_PROLOGUE();
	// addi r11,r3,1196
	ctx.r11.s64 = ctx.r3.s64 + 1196;
	// stw r4,1196(r3)
	PPC_STORE_U32(ctx.r3.u32 + 1196, ctx.r4.u32);
	// stw r5,1200(r3)
	PPC_STORE_U32(ctx.r3.u32 + 1200, ctx.r5.u32);
	// stw r6,1204(r3)
	PPC_STORE_U32(ctx.r3.u32 + 1204, ctx.r6.u32);
	// stw r11,1220(r3)
	PPC_STORE_U32(ctx.r3.u32 + 1220, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_832735E8"))) PPC_WEAK_FUNC(sub_832735E8);
PPC_FUNC_IMPL(__imp__sub_832735E8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x833a01a8
	ctx.lr = 0x832735F0;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,1220(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1220);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x83273614
	if (!ctx.cr6.eq) goto loc_83273614;
	// lis r11,-32219
	ctx.r11.s64 = -2111504384;
	// addi r3,r11,15336
	ctx.r3.s64 = ctx.r11.s64 + 15336;
loc_8327360C:
	// bl 0x83278688
	ctx.lr = 0x83273610;
	sub_83278688(ctx, base);
	// b 0x83273660
	goto loc_83273660;
loc_83273614:
	// lwz r10,24(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 24);
	// lwz r31,8(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// addi r30,r10,3
	ctx.r30.s64 = ctx.r10.s64 + 3;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r28,0(r11)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mullw r11,r30,r31
	ctx.r11.s64 = int64_t(ctx.r30.s32) * int64_t(ctx.r31.s32);
	// cmpw cr6,r10,r11
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r11.s32, ctx.xer);
	// bge cr6,0x83273640
	if (!ctx.cr6.lt) goto loc_83273640;
	// lis r11,-32219
	ctx.r11.s64 = -2111504384;
	// addi r3,r11,15276
	ctx.r3.s64 = ctx.r11.s64 + 15276;
	// b 0x8327360c
	goto loc_8327360C;
loc_83273640:
	// bl 0x8326ee18
	ctx.lr = 0x83273644;
	sub_8326EE18(ctx, base);
	// cmpwi cr6,r3,1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 1, ctx.xer);
	// bne cr6,0x83273660
	if (!ctx.cr6.eq) goto loc_83273660;
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// lwz r3,96(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 96);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// bl 0x83284d90
	ctx.lr = 0x83273660;
	sub_83284D90(ctx, base);
loc_83273660:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x833a01f8
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83273668"))) PPC_WEAK_FUNC(sub_83273668);
PPC_FUNC_IMPL(__imp__sub_83273668) {
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
	// bl 0x83280050
	ctx.lr = 0x83273678;
	sub_83280050(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x83273694
	if (ctx.cr0.eq) goto loc_83273694;
	// li r3,-306
	ctx.r3.s64 = -306;
	// bl 0x8326ef70
	ctx.lr = 0x83273688;
	sub_8326EF70(ctx, base);
	// lis r11,-32219
	ctx.r11.s64 = -2111504384;
	// addi r3,r11,15392
	ctx.r3.s64 = ctx.r11.s64 + 15392;
	// bl 0x83278688
	ctx.lr = 0x83273694;
	sub_83278688(ctx, base);
loc_83273694:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_832736A4"))) PPC_WEAK_FUNC(sub_832736A4);
PPC_FUNC_IMPL(__imp__sub_832736A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832736A8"))) PPC_WEAK_FUNC(sub_832736A8);
PPC_FUNC_IMPL(__imp__sub_832736A8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x833a01ac
	ctx.lr = 0x832736B0;
	__savegprlr_29(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r31,96(r3)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 96);
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,8
	ctx.r4.s64 = 8;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r29,r6
	ctx.r29.u64 = ctx.r6.u64;
	// bl 0x83274ee0
	ctx.lr = 0x832736D0;
	sub_83274EE0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x83274ee0
	ctx.lr = 0x832736E0;
	sub_83274EE0(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83274ee0
	ctx.lr = 0x832736F0;
	sub_83274EE0(ctx, base);
	// mullw r11,r30,r29
	ctx.r11.s64 = int64_t(ctx.r30.s32) * int64_t(ctx.r29.s32);
	// mulli r11,r11,1000
	ctx.r11.s64 = ctx.r11.s64 * 1000;
	// extsw r11,r11
	ctx.r11.s64 = ctx.r11.s32;
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// frsp f13,f0
	ctx.f13.f64 = double(float(ctx.f0.f64));
	// lfs f0,-9180(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -9180);
	ctx.f0.f64 = double(temp.f32);
	// fadds f0,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 + ctx.f0.f64));
	// fctiwz f13,f0
	ctx.f13.s64 = (ctx.f0.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f0.f64));
	// stfd f13,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.f13.u64);
	// lwz r30,84(r1)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// extsw r11,r30
	ctx.r11.s64 = ctx.r30.s32;
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lfd f13,80(r1)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f13,f13
	ctx.f13.f64 = double(ctx.f13.s64);
	// frsp f13,f13
	ctx.f13.f64 = double(float(ctx.f13.f64));
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// ble cr6,0x83273744
	if (!ctx.cr6.gt) goto loc_83273744;
	// addi r30,r30,-1
	ctx.r30.s64 = ctx.r30.s64 + -1;
loc_83273744:
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// li r4,45
	ctx.r4.s64 = 45;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83274ee0
	ctx.lr = 0x83273754;
	sub_83274EE0(ctx, base);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// li r4,44
	ctx.r4.s64 = 44;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83274ee0
	ctx.lr = 0x83273764;
	sub_83274EE0(ctx, base);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// li r4,42
	ctx.r4.s64 = 42;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83274ee0
	ctx.lr = 0x83273774;
	sub_83274EE0(ctx, base);
	// li r5,2
	ctx.r5.s64 = 2;
	// li r4,15
	ctx.r4.s64 = 15;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83274ee0
	ctx.lr = 0x83273784;
	sub_83274EE0(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,51
	ctx.r4.s64 = 51;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83274ee0
	ctx.lr = 0x83273794;
	sub_83274EE0(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,14
	ctx.r4.s64 = 14;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83274ee0
	ctx.lr = 0x832737A4;
	sub_83274EE0(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,28
	ctx.r4.s64 = 28;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83274ee0
	ctx.lr = 0x832737B4;
	sub_83274EE0(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,5
	ctx.r4.s64 = 5;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83279970
	ctx.lr = 0x832737C4;
	sub_83279970(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x833a01fc
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832737CC"))) PPC_WEAK_FUNC(sub_832737CC);
PPC_FUNC_IMPL(__imp__sub_832737CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832737D0"))) PPC_WEAK_FUNC(sub_832737D0);
PPC_FUNC_IMPL(__imp__sub_832737D0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// lwz r30,96(r3)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r3.u32 + 96);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r11,96(r3)
	PPC_STORE_U32(ctx.r3.u32 + 96, ctx.r11.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x83280158
	ctx.lr = 0x832737FC;
	sub_83280158(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x83273818
	if (ctx.cr0.eq) goto loc_83273818;
	// lis r11,-32219
	ctx.r11.s64 = -2111504384;
	// addi r3,r11,15476
	ctx.r3.s64 = ctx.r11.s64 + 15476;
loc_8327380C:
	// bl 0x83278688
	ctx.lr = 0x83273810;
	sub_83278688(ctx, base);
	// li r3,-1
	ctx.r3.s64 = -1;
	// b 0x83273858
	goto loc_83273858;
loc_83273818:
	// stw r30,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r30.u32);
	// lis r11,-31961
	ctx.r11.s64 = -2094596096;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// addi r4,r11,-4152
	ctx.r4.s64 = ctx.r11.s64 + -4152;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x83282450
	ctx.lr = 0x83273830;
	sub_83282450(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x8327384c
	if (ctx.cr0.eq) goto loc_8327384C;
	// li r3,-303
	ctx.r3.s64 = -303;
	// bl 0x8326ef70
	ctx.lr = 0x83273840;
	sub_8326EF70(ctx, base);
	// lis r11,-32219
	ctx.r11.s64 = -2111504384;
	// addi r3,r11,15424
	ctx.r3.s64 = ctx.r11.s64 + 15424;
	// b 0x8327380c
	goto loc_8327380C;
loc_8327384C:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x832735e8
	ctx.lr = 0x83273854;
	sub_832735E8(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
loc_83273858:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83273870"))) PPC_WEAK_FUNC(sub_83273870);
PPC_FUNC_IMPL(__imp__sub_83273870) {
	PPC_FUNC_PROLOGUE();
	// lwz r5,1304(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1304);
	// lwz r4,1300(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1300);
	// lwz r3,1296(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1296);
	// b 0x832ee4c0
	sub_832EE4C0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83273880"))) PPC_WEAK_FUNC(sub_83273880);
PPC_FUNC_IMPL(__imp__sub_83273880) {
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
	ctx.lr = 0x83273898;
	sub_8326ECF0(ctx, base);
	// lwz r10,24(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// li r11,0
	ctx.r11.s64 = 0;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x832738c8
	if (!ctx.cr6.eq) goto loc_832738C8;
	// lwz r10,40(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 40);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x832738b8
	if (!ctx.cr6.eq) goto loc_832738B8;
	// li r11,-1
	ctx.r11.s64 = -1;
loc_832738B8:
	// lwz r10,44(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 44);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x832738c8
	if (!ctx.cr6.eq) goto loc_832738C8;
	// li r11,-1
	ctx.r11.s64 = -1;
loc_832738C8:
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

__attribute__((alias("__imp__sub_832738E0"))) PPC_WEAK_FUNC(sub_832738E0);
PPC_FUNC_IMPL(__imp__sub_832738E0) {
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
	// lwz r11,24(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 24);
	// li r10,0
	ctx.r10.s64 = 0;
	// lwz r9,28(r4)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r4.u32 + 28);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r10,1364(r3)
	PPC_STORE_U32(ctx.r3.u32 + 1364, ctx.r10.u32);
	// stw r11,1352(r3)
	PPC_STORE_U32(ctx.r3.u32 + 1352, ctx.r11.u32);
	// stw r9,1356(r3)
	PPC_STORE_U32(ctx.r3.u32 + 1356, ctx.r9.u32);
	// stw r11,1360(r3)
	PPC_STORE_U32(ctx.r3.u32 + 1360, ctx.r11.u32);
	// bl 0x83285820
	ctx.lr = 0x83273914;
	sub_83285820(ctx, base);
	// li r11,32
	ctx.r11.s64 = 32;
	// addi r10,r31,1376
	ctx.r10.s64 = ctx.r31.s64 + 1376;
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r10,r10,-4
	ctx.r10.s64 = ctx.r10.s64 + -4;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
loc_83273928:
	// stwu r9,4(r10)
	ea = 4 + ctx.r10.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r10.u32 = ea;
	// bdnz 0x83273928
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_83273928;
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

__attribute__((alias("__imp__sub_83273944"))) PPC_WEAK_FUNC(sub_83273944);
PPC_FUNC_IMPL(__imp__sub_83273944) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83273948"))) PPC_WEAK_FUNC(sub_83273948);
PPC_FUNC_IMPL(__imp__sub_83273948) {
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
	// lwz r11,36(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 36);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r3,1
	ctx.r3.s64 = 1;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x83273984
	if (ctx.cr6.eq) goto loc_83273984;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// beq cr6,0x83273984
	if (ctx.cr6.eq) goto loc_83273984;
	// lis r11,-32219
	ctx.r11.s64 = -2111504384;
	// addi r3,r11,15568
	ctx.r3.s64 = ctx.r11.s64 + 15568;
	// bl 0x83278688
	ctx.lr = 0x83273980;
	sub_83278688(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
loc_83273984:
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// cmpwi cr6,r11,14
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 14, ctx.xer);
	// ble cr6,0x832739a0
	if (!ctx.cr6.gt) goto loc_832739A0;
	// lis r11,-32219
	ctx.r11.s64 = -2111504384;
	// addi r3,r11,15524
	ctx.r3.s64 = ctx.r11.s64 + 15524;
	// bl 0x83278688
	ctx.lr = 0x8327399C;
	sub_83278688(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
loc_832739A0:
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

__attribute__((alias("__imp__sub_832739B4"))) PPC_WEAK_FUNC(sub_832739B4);
PPC_FUNC_IMPL(__imp__sub_832739B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832739B8"))) PPC_WEAK_FUNC(sub_832739B8);
PPC_FUNC_IMPL(__imp__sub_832739B8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x833a01ac
	ctx.lr = 0x832739C0;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r4,20(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r30,r3,8
	ctx.r30.s64 = ctx.r3.s64 + 8;
	// lwz r3,16(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// bl 0x83270308
	ctx.lr = 0x832739D8;
	sub_83270308(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x83285858
	ctx.lr = 0x832739E8;
	sub_83285858(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne 0x83273a0c
	if (!ctx.cr0.eq) goto loc_83273A0C;
	// lis r11,-32219
	ctx.r11.s64 = -2111504384;
	// addi r3,r11,15644
	ctx.r3.s64 = ctx.r11.s64 + 15644;
loc_832739F8:
	// bl 0x83278688
	ctx.lr = 0x832739FC;
	sub_83278688(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83285950
	ctx.lr = 0x83273A04;
	sub_83285950(ctx, base);
	// li r3,-1
	ctx.r3.s64 = -1;
	// b 0x83273a60
	goto loc_83273A60;
loc_83273A0C:
	// stw r3,212(r31)
	PPC_STORE_U32(ctx.r31.u32 + 212, ctx.r3.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stw r29,216(r31)
	PPC_STORE_U32(ctx.r31.u32 + 216, ctx.r29.u32);
	// bl 0x832706d8
	ctx.lr = 0x83273A1C;
	sub_832706D8(ctx, base);
	// cmpwi cr6,r3,1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 1, ctx.xer);
	// bne cr6,0x83273a50
	if (!ctx.cr6.eq) goto loc_83273A50;
	// lis r4,2
	ctx.r4.s64 = 131072;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83285858
	ctx.lr = 0x83273A30;
	sub_83285858(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne 0x83273a44
	if (!ctx.cr0.eq) goto loc_83273A44;
	// lis r11,-32219
	ctx.r11.s64 = -2111504384;
	// addi r3,r11,15604
	ctx.r3.s64 = ctx.r11.s64 + 15604;
	// b 0x832739f8
	goto loc_832739F8;
loc_83273A44:
	// lis r11,2
	ctx.r11.s64 = 131072;
	// stw r3,1228(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1228, ctx.r3.u32);
	// b 0x83273a58
	goto loc_83273A58;
loc_83273A50:
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,1228(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1228, ctx.r11.u32);
loc_83273A58:
	// stw r11,1232(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1232, ctx.r11.u32);
	// li r3,0
	ctx.r3.s64 = 0;
loc_83273A60:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x833a01fc
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83273A68"))) PPC_WEAK_FUNC(sub_83273A68);
PPC_FUNC_IMPL(__imp__sub_83273A68) {
	PPC_FUNC_PROLOGUE();
	// lwz r10,1364(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1364);
	// addi r11,r3,1352
	ctx.r11.s64 = ctx.r3.s64 + 1352;
	// lwz r8,1356(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1356);
	// add r9,r10,r4
	ctx.r9.u64 = ctx.r10.u64 + ctx.r4.u64;
	// cmplw cr6,r9,r8
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r8.u32, ctx.xer);
	// ble cr6,0x83273a88
	if (!ctx.cr6.gt) goto loc_83273A88;
	// li r10,0
	ctx.r10.s64 = 0;
	// b 0x83273a98
	goto loc_83273A98;
loc_83273A88:
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// stw r9,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r9.u32);
	// add r9,r10,r4
	ctx.r9.u64 = ctx.r10.u64 + ctx.r4.u64;
	// stw r9,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r9.u32);
loc_83273A98:
	// mr r3,r10
	ctx.r3.u64 = ctx.r10.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83273AA0"))) PPC_WEAK_FUNC(sub_83273AA0);
PPC_FUNC_IMPL(__imp__sub_83273AA0) {
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
	ctx.lr = 0x83273AB8;
	sub_8326ECF0(ctx, base);
	// lwz r11,40(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 40);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r3,48(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x83273ACC;
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

__attribute__((alias("__imp__sub_83273AE0"))) PPC_WEAK_FUNC(sub_83273AE0);
PPC_FUNC_IMPL(__imp__sub_83273AE0) {
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
	ctx.lr = 0x83273AF8;
	sub_8326ECF0(ctx, base);
	// lwz r11,44(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 44);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r3,48(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x83273B0C;
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

__attribute__((alias("__imp__sub_83273B20"))) PPC_WEAK_FUNC(sub_83273B20);
PPC_FUNC_IMPL(__imp__sub_83273B20) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x833a01a4
	ctx.lr = 0x83273B28;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31827
	ctx.r11.s64 = -2085814272;
	// li r27,1
	ctx.r27.s64 = 1;
	// addi r31,r11,10192
	ctx.r31.s64 = ctx.r11.s64 + 10192;
	// li r29,0
	ctx.r29.s64 = 0;
	// addi r28,r31,-40
	ctx.r28.s64 = ctx.r31.s64 + -40;
	// mr r30,r31
	ctx.r30.u64 = ctx.r31.u64;
loc_83273B44:
	// li r4,32
	ctx.r4.s64 = 32;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x832f3f50
	ctx.lr = 0x83273B50;
	sub_832F3F50(ctx, base);
	// stw r3,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r3.u32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x83273b78
	if (ctx.cr0.eq) goto loc_83273B78;
	// addi r30,r30,32
	ctx.r30.s64 = ctx.r30.s64 + 32;
	// addi r11,r31,256
	ctx.r11.s64 = ctx.r31.s64 + 256;
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// addi r28,r28,4
	ctx.r28.s64 = ctx.r28.s64 + 4;
	// cmpw cr6,r30,r11
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x83273b44
	if (ctx.cr6.lt) goto loc_83273B44;
	// b 0x83273b9c
	goto loc_83273B9C;
loc_83273B78:
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// ble cr6,0x83273b98
	if (!ctx.cr6.gt) goto loc_83273B98;
	// addi r11,r31,-40
	ctx.r11.s64 = ctx.r31.s64 + -40;
	// addi r31,r11,-4
	ctx.r31.s64 = ctx.r11.s64 + -4;
loc_83273B88:
	// lwzu r3,4(r31)
	ea = 4 + ctx.r31.u32;
	ctx.r3.u64 = PPC_LOAD_U32(ea);
	ctx.r31.u32 = ea;
	// bl 0x832f4030
	ctx.lr = 0x83273B90;
	sub_832F4030(ctx, base);
	// addic. r29,r29,-1
	ctx.xer.ca = ctx.r29.u32 > 0;
	ctx.r29.s64 = ctx.r29.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// bne 0x83273b88
	if (!ctx.cr0.eq) goto loc_83273B88;
loc_83273B98:
	// li r27,0
	ctx.r27.s64 = 0;
loc_83273B9C:
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x833a01f4
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83273BA8"))) PPC_WEAK_FUNC(sub_83273BA8);
PPC_FUNC_IMPL(__imp__sub_83273BA8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// addi r30,r11,10152
	ctx.r30.s64 = ctx.r11.s64 + 10152;
	// mr r31,r30
	ctx.r31.u64 = ctx.r30.u64;
loc_83273BC8:
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x83273be0
	if (ctx.cr6.eq) goto loc_83273BE0;
	// bl 0x832f4030
	ctx.lr = 0x83273BD8;
	sub_832F4030(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
loc_83273BE0:
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// addi r11,r30,32
	ctx.r11.s64 = ctx.r30.s64 + 32;
	// cmpw cr6,r31,r11
	ctx.cr6.compare<int32_t>(ctx.r31.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x83273bc8
	if (ctx.cr6.lt) goto loc_83273BC8;
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

__attribute__((alias("__imp__sub_83273C0C"))) PPC_WEAK_FUNC(sub_83273C0C);
PPC_FUNC_IMPL(__imp__sub_83273C0C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83273C10"))) PPC_WEAK_FUNC(sub_83273C10);
PPC_FUNC_IMPL(__imp__sub_83273C10) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,1668(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1668);
	// li r3,0
	ctx.r3.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// b 0x832f40c0
	sub_832F40C0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83273C28"))) PPC_WEAK_FUNC(sub_83273C28);
PPC_FUNC_IMPL(__imp__sub_83273C28) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83273C2C"))) PPC_WEAK_FUNC(sub_83273C2C);
PPC_FUNC_IMPL(__imp__sub_83273C2C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83273C30"))) PPC_WEAK_FUNC(sub_83273C30);
PPC_FUNC_IMPL(__imp__sub_83273C30) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,1668(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1668);
	// li r3,0
	ctx.r3.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// b 0x832f4158
	sub_832F4158(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83273C48"))) PPC_WEAK_FUNC(sub_83273C48);
PPC_FUNC_IMPL(__imp__sub_83273C48) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83273C4C"))) PPC_WEAK_FUNC(sub_83273C4C);
PPC_FUNC_IMPL(__imp__sub_83273C4C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83273C50"))) PPC_WEAK_FUNC(sub_83273C50);
PPC_FUNC_IMPL(__imp__sub_83273C50) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x833a01a4
	ctx.lr = 0x83273C58;
	__savegprlr_27(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r10,20(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// lwz r31,0(r3)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bgt cr6,0x83273c74
	if (ctx.cr6.gt) goto loc_83273C74;
	// li r10,1
	ctx.r10.s64 = 1;
loc_83273C74:
	// lwz r30,56(r3)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r3.u32 + 56);
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// beq cr6,0x83273cc8
	if (ctx.cr6.eq) goto loc_83273CC8;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x83273cc4
	if (ctx.cr6.eq) goto loc_83273CC4;
	// extsw r11,r11
	ctx.r11.s64 = ctx.r11.s32;
	// lfs f0,60(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 60);
	ctx.f0.f64 = double(temp.f32);
	// lis r10,0
	ctx.r10.s64 = 0;
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lfd f13,80(r1)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f13,f13
	ctx.f13.f64 = double(ctx.f13.s64);
	// ori r10,r10,32768
	ctx.r10.u64 = ctx.r10.u64 | 32768;
	// frsp f13,f13
	ctx.f13.f64 = double(float(ctx.f13.f64));
	// fmuls f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f13.f64));
	// fctiwz f0,f0
	ctx.f0.s64 = (ctx.f0.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f0.f64));
	// stfd f0,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.f0.u64);
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// bgt cr6,0x83273cc4
	if (ctx.cr6.gt) goto loc_83273CC4;
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
loc_83273CC4:
	// li r10,1
	ctx.r10.s64 = 1;
loc_83273CC8:
	// cmpwi cr6,r31,2
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 2, ctx.xer);
	// beq cr6,0x83273d8c
	if (ctx.cr6.eq) goto loc_83273D8C;
	// cmpwi cr6,r31,6
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 6, ctx.xer);
	// beq cr6,0x83273d8c
	if (ctx.cr6.eq) goto loc_83273D8C;
	// cmpwi cr6,r31,8
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 8, ctx.xer);
	// beq cr6,0x83273d8c
	if (ctx.cr6.eq) goto loc_83273D8C;
	// cmpwi cr6,r31,10
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 10, ctx.xer);
	// beq cr6,0x83273d8c
	if (ctx.cr6.eq) goto loc_83273D8C;
	// cmpwi cr6,r31,12
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 12, ctx.xer);
	// beq cr6,0x83273d8c
	if (ctx.cr6.eq) goto loc_83273D8C;
	// cmpwi cr6,r31,3
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 3, ctx.xer);
	// bne cr6,0x83273d34
	if (!ctx.cr6.eq) goto loc_83273D34;
	// srawi r31,r11,3
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x7) != 0);
	ctx.r31.s64 = ctx.r11.s32 >> 3;
	// li r11,0
	ctx.r11.s64 = 0;
	// addze r31,r31
	temp.s64 = ctx.r31.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r31.u32;
	ctx.r31.s64 = temp.s64;
	// srawi r31,r31,11
	ctx.xer.ca = (ctx.r31.s32 < 0) & ((ctx.r31.u32 & 0x7FF) != 0);
	ctx.r31.s64 = ctx.r31.s32 >> 11;
	// addze r31,r31
	temp.s64 = ctx.r31.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r31.u32;
	ctx.r31.s64 = temp.s64;
	// rlwinm r30,r31,11,0,20
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 11) & 0xFFFFF800;
	// mullw r10,r31,r10
	ctx.r10.s64 = int64_t(ctx.r31.s32) * int64_t(ctx.r10.s32);
	// srawi r31,r30,1
	ctx.xer.ca = (ctx.r30.s32 < 0) & ((ctx.r30.u32 & 0x1) != 0);
	ctx.r31.s64 = ctx.r30.s32 >> 1;
	// rlwinm r30,r10,11,0,20
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 11) & 0xFFFFF800;
	// addze r10,r31
	temp.s64 = ctx.r31.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r31.u32;
	ctx.r10.s64 = temp.s64;
	// stw r30,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r30.u32);
	// addi r10,r10,2048
	ctx.r10.s64 = ctx.r10.s64 + 2048;
	// stw r11,0(r5)
	PPC_STORE_U32(ctx.r5.u32 + 0, ctx.r11.u32);
	// stw r10,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r10.u32);
	// b 0x83273db4
	goto loc_83273DB4;
loc_83273D34:
	// srawi r11,r11,3
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x7) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 3;
	// li r31,0
	ctx.r31.s64 = 0;
	// addze r11,r11
	temp.s64 = ctx.r11.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r11.u32;
	ctx.r11.s64 = temp.s64;
	// lis r30,0
	ctx.r30.s64 = 0;
	// srawi r11,r11,11
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x7FF) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 11;
	// li r29,24012
	ctx.r29.s64 = 24012;
	// addze r11,r11
	temp.s64 = ctx.r11.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r11.u32;
	ctx.r11.s64 = temp.s64;
	// li r28,24332
	ctx.r28.s64 = 24332;
	// rlwinm r27,r11,11,0,20
	ctx.r27.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 11) & 0xFFFFF800;
	// mullw r11,r11,r10
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r10.s32);
	// srawi r10,r27,1
	ctx.xer.ca = (ctx.r27.s32 < 0) & ((ctx.r27.u32 & 0x1) != 0);
	ctx.r10.s64 = ctx.r27.s32 >> 1;
	// rlwinm r27,r11,11,0,20
	ctx.r27.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 11) & 0xFFFFF800;
	// addze r11,r10
	temp.s64 = ctx.r10.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r10.u32;
	ctx.r11.s64 = temp.s64;
	// stw r27,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r27.u32);
	// ori r10,r30,33216
	ctx.r10.u64 = ctx.r30.u64 | 33216;
	// addi r11,r11,2048
	ctx.r11.s64 = ctx.r11.s64 + 2048;
	// stw r31,0(r5)
	PPC_STORE_U32(ctx.r5.u32 + 0, ctx.r31.u32);
	// stw r11,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r11.u32);
	// stw r29,0(r7)
	PPC_STORE_U32(ctx.r7.u32 + 0, ctx.r29.u32);
	// stw r28,0(r8)
	PPC_STORE_U32(ctx.r8.u32 + 0, ctx.r28.u32);
	// stw r10,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r10.u32);
	// b 0x83273dc0
	goto loc_83273DC0;
loc_83273D8C:
	// srawi r31,r11,3
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x7) != 0);
	ctx.r31.s64 = ctx.r11.s32 >> 3;
	// li r11,0
	ctx.r11.s64 = 0;
	// addze r31,r31
	temp.s64 = ctx.r31.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r31.u32;
	ctx.r31.s64 = temp.s64;
	// srawi r31,r31,11
	ctx.xer.ca = (ctx.r31.s32 < 0) & ((ctx.r31.u32 & 0x7FF) != 0);
	ctx.r31.s64 = ctx.r31.s32 >> 11;
	// addze r31,r31
	temp.s64 = ctx.r31.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r31.u32;
	ctx.r31.s64 = temp.s64;
	// mullw r10,r31,r10
	ctx.r10.s64 = int64_t(ctx.r31.s32) * int64_t(ctx.r10.s32);
	// rlwinm r10,r10,11,0,20
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 11) & 0xFFFFF800;
	// stw r10,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r10.u32);
	// stw r11,0(r5)
	PPC_STORE_U32(ctx.r5.u32 + 0, ctx.r11.u32);
	// stw r11,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r11.u32);
loc_83273DB4:
	// stw r11,0(r7)
	PPC_STORE_U32(ctx.r7.u32 + 0, ctx.r11.u32);
	// stw r11,0(r8)
	PPC_STORE_U32(ctx.r8.u32 + 0, ctx.r11.u32);
	// stw r11,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r11.u32);
loc_83273DC0:
	// mr r5,r6
	ctx.r5.u64 = ctx.r6.u64;
	// bl 0x83272e68
	ctx.lr = 0x83273DC8;
	sub_83272E68(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x833a01f4
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83273DD0"))) PPC_WEAK_FUNC(sub_83273DD0);
PPC_FUNC_IMPL(__imp__sub_83273DD0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r6,48(r3)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// li r30,1
	ctx.r30.s64 = 1;
	// lwz r5,40(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 40);
	// lwz r31,44(r3)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 44);
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// lwz r10,8(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// lwz r9,12(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// beq cr6,0x83273e98
	if (ctx.cr6.eq) goto loc_83273E98;
	// lwz r4,68(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 68);
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// bl 0x83272f18
	ctx.lr = 0x83273E10;
	sub_83272F18(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x83273eb8
	if (!ctx.cr0.eq) goto loc_83273EB8;
	// cmpwi cr6,r5,2
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 2, ctx.xer);
	// bgt cr6,0x83273e3c
	if (ctx.cr6.gt) goto loc_83273E3C;
	// cmpwi cr6,r5,16
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 16, ctx.xer);
	// ble cr6,0x83273e3c
	if (!ctx.cr6.gt) goto loc_83273E3C;
	// lis r11,-32219
	ctx.r11.s64 = -2111504384;
	// addi r3,r11,15788
	ctx.r3.s64 = ctx.r11.s64 + 15788;
loc_83273E30:
	// bl 0x83278688
	ctx.lr = 0x83273E34;
	sub_83278688(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x83273ebc
	goto loc_83273EBC;
loc_83273E3C:
	// mr r4,r9
	ctx.r4.u64 = ctx.r9.u64;
	// mr r3,r10
	ctx.r3.u64 = ctx.r10.u64;
	// bl 0x83273038
	ctx.lr = 0x83273E48;
	sub_83273038(ctx, base);
	// cmpw cr6,r31,r3
	ctx.cr6.compare<int32_t>(ctx.r31.s32, ctx.r3.s32, ctx.xer);
	// bge cr6,0x83273e5c
	if (!ctx.cr6.lt) goto loc_83273E5C;
	// lis r11,-32219
	ctx.r11.s64 = -2111504384;
	// addi r3,r11,15752
	ctx.r3.s64 = ctx.r11.s64 + 15752;
	// b 0x83273e30
	goto loc_83273E30;
loc_83273E5C:
	// li r10,0
	ctx.r10.s64 = 0;
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// ble cr6,0x83273eb8
	if (!ctx.cr6.gt) goto loc_83273EB8;
	// mr r11,r6
	ctx.r11.u64 = ctx.r6.u64;
loc_83273E6C:
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x83273e8c
	if (ctx.cr6.eq) goto loc_83273E8C;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// cmpw cr6,r10,r5
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r5.s32, ctx.xer);
	// blt cr6,0x83273e6c
	if (ctx.cr6.lt) goto loc_83273E6C;
	// b 0x83273eb8
	goto loc_83273EB8;
loc_83273E8C:
	// lis r11,-32219
	ctx.r11.s64 = -2111504384;
	// addi r3,r11,15716
	ctx.r3.s64 = ctx.r11.s64 + 15716;
	// b 0x83273e30
	goto loc_83273E30;
loc_83273E98:
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// bne cr6,0x83273ea8
	if (!ctx.cr6.eq) goto loc_83273EA8;
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq cr6,0x83273eb4
	if (ctx.cr6.eq) goto loc_83273EB4;
loc_83273EA8:
	// lis r11,-32219
	ctx.r11.s64 = -2111504384;
	// addi r3,r11,15680
	ctx.r3.s64 = ctx.r11.s64 + 15680;
	// bl 0x83278688
	ctx.lr = 0x83273EB4;
	sub_83278688(ctx, base);
loc_83273EB4:
	// li r30,0
	ctx.r30.s64 = 0;
loc_83273EB8:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
loc_83273EBC:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83273ED4"))) PPC_WEAK_FUNC(sub_83273ED4);
PPC_FUNC_IMPL(__imp__sub_83273ED4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83273ED8"))) PPC_WEAK_FUNC(sub_83273ED8);
PPC_FUNC_IMPL(__imp__sub_83273ED8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// beq cr6,0x83274038
	if (ctx.cr6.eq) goto loc_83274038;
	// bl 0x83273c10
	ctx.lr = 0x83273EFC;
	sub_83273C10(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x83278eb0
	ctx.lr = 0x83273F04;
	sub_83278EB0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8326f848
	ctx.lr = 0x83273F0C;
	sub_8326F848(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83272e58
	ctx.lr = 0x83273F14;
	sub_83272E58(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x83278eb0
	ctx.lr = 0x83273F1C;
	sub_83278EB0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83270760
	ctx.lr = 0x83273F24;
	sub_83270760(ctx, base);
	// lwz r3,208(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 208);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x83273f34
	if (ctx.cr6.eq) goto loc_83273F34;
	// bl 0x83270318
	ctx.lr = 0x83273F34;
	sub_83270318(ctx, base);
loc_83273F34:
	// lwz r3,108(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 108);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x83273f44
	if (ctx.cr6.eq) goto loc_83273F44;
	// bl 0x832f04c8
	ctx.lr = 0x83273F44;
	sub_832F04C8(ctx, base);
loc_83273F44:
	// lwz r3,100(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 100);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x83273f54
	if (ctx.cr6.eq) goto loc_83273F54;
	// bl 0x832769e8
	ctx.lr = 0x83273F54;
	sub_832769E8(ctx, base);
loc_83273F54:
	// lwz r3,1292(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1292);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x83273f70
	if (ctx.cr6.eq) goto loc_83273F70;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x83273F70;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_83273F70:
	// lwz r3,1324(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1324);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x83273f8c
	if (ctx.cr6.eq) goto loc_83273F8C;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x83273F8C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_83273F8C:
	// lwz r3,1596(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1596);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x83273f9c
	if (ctx.cr6.eq) goto loc_83273F9C;
	// bl 0x83272e58
	ctx.lr = 0x83273F9C;
	sub_83272E58(ctx, base);
loc_83273F9C:
	// lwz r3,96(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 96);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x83273fac
	if (ctx.cr6.eq) goto loc_83273FAC;
	// bl 0x83273668
	ctx.lr = 0x83273FAC;
	sub_83273668(ctx, base);
loc_83273FAC:
	// addi r3,r31,1504
	ctx.r3.s64 = ctx.r31.s64 + 1504;
	// bl 0x8326ec08
	ctx.lr = 0x83273FB4;
	sub_8326EC08(ctx, base);
	// addi r3,r31,1544
	ctx.r3.s64 = ctx.r31.s64 + 1544;
	// bl 0x8326ec08
	ctx.lr = 0x83273FBC;
	sub_8326EC08(ctx, base);
	// lwz r11,1712(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1712);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x83273fd4
	if (ctx.cr6.eq) goto loc_83273FD4;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x83273FD4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_83273FD4:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83285950
	ctx.lr = 0x83273FDC;
	sub_83285950(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83285850
	ctx.lr = 0x83273FE4;
	sub_83285850(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x83273ff8
	if (ctx.cr0.eq) goto loc_83273FF8;
	// lis r11,-32219
	ctx.r11.s64 = -2111504384;
	// addi r3,r11,15824
	ctx.r3.s64 = ctx.r11.s64 + 15824;
	// bl 0x83278688
	ctx.lr = 0x83273FF8;
	sub_83278688(ctx, base);
loc_83273FF8:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83272e58
	ctx.lr = 0x83274000;
	sub_83272E58(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83273c30
	ctx.lr = 0x83274008;
	sub_83273C30(ctx, base);
	// lwz r3,1668(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1668);
	// bl 0x832f40c0
	ctx.lr = 0x83274010;
	sub_832F40C0(ctx, base);
	// lwz r30,1668(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1668);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x83274038
	if (ctx.cr0.lt) goto loc_83274038;
	// li r5,2048
	ctx.r5.s64 = 2048;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x833a2b30
	ctx.lr = 0x8327402C;
	sub_833A2B30(ctx, base);
	// stw r30,1668(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1668, ctx.r30.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x832f4158
	ctx.lr = 0x83274038;
	sub_832F4158(ctx, base);
loc_83274038:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83274050"))) PPC_WEAK_FUNC(sub_83274050);
PPC_FUNC_IMPL(__imp__sub_83274050) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x833a01a8
	ctx.lr = 0x83274058;
	__savegprlr_28(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// bl 0x83273dd0
	ctx.lr = 0x8327406C;
	sub_83273DD0(ctx, base);
	// cmpwi cr6,r3,1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 1, ctx.xer);
	// bne cr6,0x83274084
	if (!ctx.cr6.eq) goto loc_83274084;
loc_83274074:
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
	// stw r11,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r11.u32);
	// b 0x83274138
	goto loc_83274138;
loc_83274084:
	// lwz r4,68(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 68);
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x83272f18
	ctx.lr = 0x83274090;
	sub_83272F18(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x83274074
	if (!ctx.cr0.eq) goto loc_83274074;
	// addi r7,r1,88
	ctx.r7.s64 = ctx.r1.s64 + 88;
	// lwz r28,16(r31)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// addi r6,r1,92
	ctx.r6.s64 = ctx.r1.s64 + 92;
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83272ed8
	ctx.lr = 0x832740B4;
	sub_83272ED8(ctx, base);
	// lwz r3,36(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// bl 0x83272f50
	ctx.lr = 0x832740BC;
	sub_83272F50(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r10,84(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// addi r11,r11,15
	ctx.r11.s64 = ctx.r11.s64 + 15;
	// addi r10,r10,15
	ctx.r10.s64 = ctx.r10.s64 + 15;
	// srawi r11,r11,4
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0xF) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 4;
	// addze r11,r11
	temp.s64 = ctx.r11.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r11.u32;
	ctx.r11.s64 = temp.s64;
	// srawi r9,r10,4
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0xF) != 0);
	ctx.r9.s64 = ctx.r10.s32 >> 4;
	// rlwinm r10,r11,4,0,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// addze r11,r9
	temp.s64 = ctx.r9.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r9.u32;
	ctx.r11.s64 = temp.s64;
	// srawi r9,r10,1
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x1) != 0);
	ctx.r9.s64 = ctx.r10.s32 >> 1;
	// rlwinm r8,r11,4,0,27
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// addze r9,r9
	temp.s64 = ctx.r9.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r9.u32;
	ctx.r9.s64 = temp.s64;
	// addi r10,r10,127
	ctx.r10.s64 = ctx.r10.s64 + 127;
	// addi r9,r9,127
	ctx.r9.s64 = ctx.r9.s64 + 127;
	// srawi r9,r9,7
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x7F) != 0);
	ctx.r9.s64 = ctx.r9.s32 >> 7;
	// addze r9,r9
	temp.s64 = ctx.r9.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r9.u32;
	ctx.r9.s64 = temp.s64;
	// srawi r8,r8,1
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x1) != 0);
	ctx.r8.s64 = ctx.r8.s32 >> 1;
	// addze r8,r8
	temp.s64 = ctx.r8.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r8.u32;
	ctx.r8.s64 = temp.s64;
	// srawi r7,r10,7
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x7F) != 0);
	ctx.r7.s64 = ctx.r10.s32 >> 7;
	// mullw r10,r9,r8
	ctx.r10.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r8.s32);
	// addze r9,r7
	temp.s64 = ctx.r7.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r7.u32;
	ctx.r9.s64 = temp.s64;
	// mullw r11,r9,r11
	ctx.r11.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r11.s32);
	// rlwinm r11,r11,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// rlwinm r10,r11,8,0,23
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 8) & 0xFFFFFF00;
	// rlwinm r11,r11,9,0,22
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 9) & 0xFFFFFE00;
	// addi r10,r10,128
	ctx.r10.s64 = ctx.r10.s64 + 128;
	// addi r11,r11,256
	ctx.r11.s64 = ctx.r11.s64 + 256;
	// mullw r10,r10,r28
	ctx.r10.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r28.s32);
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
	// stw r10,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r10.u32);
loc_83274138:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x833a01f8
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83274140"))) PPC_WEAK_FUNC(sub_83274140);
PPC_FUNC_IMPL(__imp__sub_83274140) {
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
	// addi r9,r1,108
	ctx.r9.s64 = ctx.r1.s64 + 108;
	// addi r8,r1,104
	ctx.r8.s64 = ctx.r1.s64 + 104;
	// addi r7,r1,100
	ctx.r7.s64 = ctx.r1.s64 + 100;
	// addi r6,r1,96
	ctx.r6.s64 = ctx.r1.s64 + 96;
	// addi r5,r1,92
	ctx.r5.s64 = ctx.r1.s64 + 92;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x83273c50
	ctx.lr = 0x83274170;
	sub_83273C50(ctx, base);
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// bl 0x83274050
	ctx.lr = 0x8327417C;
	sub_83274050(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r11,r11,-10
	ctx.r11.s64 = ctx.r11.s64 + -10;
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// subfic r11,r11,0
	ctx.xer.ca = ctx.r11.u32 <= 0;
	ctx.r11.s64 = 0 - ctx.r11.s64;
	// addi r3,r1,116
	ctx.r3.s64 = ctx.r1.s64 + 116;
	// subfe r11,r11,r11
	temp.u8 = (~ctx.r11.u32 + ctx.r11.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r11.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r31,r11,r10
	ctx.r31.u64 = ctx.r11.u64 & ctx.r10.u64;
	// bl 0x83272fa8
	ctx.lr = 0x832741A4;
	sub_83272FA8(ctx, base);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// bl 0x83272fd8
	ctx.lr = 0x832741AC;
	sub_83272FD8(ctx, base);
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// add r10,r10,r3
	ctx.r10.u64 = ctx.r10.u64 + ctx.r3.u64;
	// lwz r9,88(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwz r6,92(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// lwz r7,96(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// lwz r8,100(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// lwz r9,104(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// lwz r10,108(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	// add r11,r11,r6
	ctx.r11.u64 = ctx.r11.u64 + ctx.r6.u64;
	// add r11,r11,r7
	ctx.r11.u64 = ctx.r11.u64 + ctx.r7.u64;
	// add r11,r11,r8
	ctx.r11.u64 = ctx.r11.u64 + ctx.r8.u64;
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// addi r3,r11,2528
	ctx.r3.s64 = ctx.r11.s64 + 2528;
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

__attribute__((alias("__imp__sub_83274204"))) PPC_WEAK_FUNC(sub_83274204);
PPC_FUNC_IMPL(__imp__sub_83274204) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83274208"))) PPC_WEAK_FUNC(sub_83274208);
PPC_FUNC_IMPL(__imp__sub_83274208) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// bne cr6,0x83274234
	if (!ctx.cr6.eq) goto loc_83274234;
	// lis r11,-32219
	ctx.r11.s64 = -2111504384;
	// addi r3,r11,15952
	ctx.r3.s64 = ctx.r11.s64 + 15952;
	// b 0x8327429c
	goto loc_8327429C;
loc_83274234:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmpwi cr6,r11,6
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 6, ctx.xer);
	// beq cr6,0x83274294
	if (ctx.cr6.eq) goto loc_83274294;
	// cmpwi cr6,r11,10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 10, ctx.xer);
	// beq cr6,0x83274294
	if (ctx.cr6.eq) goto loc_83274294;
	// cmpwi cr6,r11,9
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 9, ctx.xer);
	// beq cr6,0x83274260
	if (ctx.cr6.eq) goto loc_83274260;
	// cmpwi cr6,r11,8
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 8, ctx.xer);
	// beq cr6,0x83274260
	if (ctx.cr6.eq) goto loc_83274260;
	// cmpwi cr6,r11,11
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 11, ctx.xer);
	// bne cr6,0x83274278
	if (!ctx.cr6.eq) goto loc_83274278;
loc_83274260:
	// bl 0x82d6da88
	ctx.lr = 0x83274264;
	sub_82D6DA88(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x83274278
	if (!ctx.cr0.eq) goto loc_83274278;
	// lis r11,-32219
	ctx.r11.s64 = -2111504384;
	// addi r3,r11,15900
	ctx.r3.s64 = ctx.r11.s64 + 15900;
	// b 0x8327429c
	goto loc_8327429C;
loc_83274278:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83274140
	ctx.lr = 0x83274280;
	sub_83274140(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83272fe0
	ctx.lr = 0x8327428C;
	sub_83272FE0(ctx, base);
	// add r3,r3,r30
	ctx.r3.u64 = ctx.r3.u64 + ctx.r30.u64;
	// b 0x832742a4
	goto loc_832742A4;
loc_83274294:
	// lis r11,-32219
	ctx.r11.s64 = -2111504384;
	// addi r3,r11,15848
	ctx.r3.s64 = ctx.r11.s64 + 15848;
loc_8327429C:
	// bl 0x83278688
	ctx.lr = 0x832742A0;
	sub_83278688(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
loc_832742A4:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_832742BC"))) PPC_WEAK_FUNC(sub_832742BC);
PPC_FUNC_IMPL(__imp__sub_832742BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832742C0"))) PPC_WEAK_FUNC(sub_832742C0);
PPC_FUNC_IMPL(__imp__sub_832742C0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x833a0170
	ctx.lr = 0x832742C8;
	__savegprlr_14(ctx, base);
	// stwu r1,-448(r1)
	ea = -448 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31827
	ctx.r11.s64 = -2085814272;
	// lwz r24,16(r4)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r4.u32 + 16);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// lwz r17,8(r4)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	// addi r31,r11,10144
	ctx.r31.s64 = ctx.r11.s64 + 10144;
	// lwz r16,12(r4)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r4.u32 + 12);
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// addi r9,r31,460
	ctx.r9.s64 = ctx.r31.s64 + 460;
	// addi r8,r31,316
	ctx.r8.s64 = ctx.r31.s64 + 316;
	// addi r7,r31,4
	ctx.r7.s64 = ctx.r31.s64 + 4;
	// addi r6,r31,40
	ctx.r6.s64 = ctx.r31.s64 + 40;
	// addi r5,r31,308
	ctx.r5.s64 = ctx.r31.s64 + 308;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x83273c50
	ctx.lr = 0x83274308;
	sub_83273C50(ctx, base);
	// addi r5,r31,44
	ctx.r5.s64 = ctx.r31.s64 + 44;
	// addi r4,r31,312
	ctx.r4.s64 = ctx.r31.s64 + 312;
	// bl 0x83274050
	ctx.lr = 0x83274314;
	sub_83274050(ctx, base);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x83272fa8
	ctx.lr = 0x83274324;
	sub_83272FA8(ctx, base);
	// bl 0x83272fd8
	ctx.lr = 0x83274328;
	sub_83272FD8(ctx, base);
	// lwz r11,308(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 308);
	// lwz r10,40(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// lwz r9,4(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r3,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r3.u32);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// addi r4,r11,128
	ctx.r4.s64 = ctx.r11.s64 + 128;
	// bl 0x83285858
	ctx.lr = 0x8327434C;
	sub_83285858(ctx, base);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r20,r3
	ctx.r20.u64 = ctx.r3.u64;
	// cmpwi cr6,r11,10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 10, ctx.xer);
	// bne cr6,0x83274364
	if (!ctx.cr6.eq) goto loc_83274364;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// b 0x83274378
	goto loc_83274378;
loc_83274364:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// addi r4,r11,64
	ctx.r4.s64 = ctx.r11.s64 + 64;
	// bl 0x83285858
	ctx.lr = 0x83274374;
	sub_83285858(ctx, base);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
loc_83274378:
	// addi r5,r1,104
	ctx.r5.s64 = ctx.r1.s64 + 104;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x832731c8
	ctx.lr = 0x83274388;
	sub_832731C8(ctx, base);
	// mr r19,r3
	ctx.r19.u64 = ctx.r3.u64;
	// addi r5,r1,224
	ctx.r5.s64 = ctx.r1.s64 + 224;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x83273308
	ctx.lr = 0x8327439C;
	sub_83273308(ctx, base);
	// mr r18,r3
	ctx.r18.u64 = ctx.r3.u64;
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// bl 0x83273590
	ctx.lr = 0x832743A8;
	sub_83273590(ctx, base);
	// li r23,0
	ctx.r23.s64 = 0;
	// cmpwi cr6,r3,1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 1, ctx.xer);
	// bne cr6,0x832743d8
	if (!ctx.cr6.eq) goto loc_832743D8;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwz r4,316(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 316);
	// bl 0x83285858
	ctx.lr = 0x832743C0;
	sub_83285858(ctx, base);
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwz r4,460(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 460);
	// bl 0x83285858
	ctx.lr = 0x832743D0;
	sub_83285858(ctx, base);
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// b 0x832743e0
	goto loc_832743E0;
loc_832743D8:
	// mr r26,r23
	ctx.r26.u64 = ctx.r23.u64;
	// mr r25,r23
	ctx.r25.u64 = ctx.r23.u64;
loc_832743E0:
	// li r4,2048
	ctx.r4.s64 = 2048;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x83285858
	ctx.lr = 0x832743EC;
	sub_83285858(ctx, base);
	// lwz r21,84(r1)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// mr r15,r3
	ctx.r15.u64 = ctx.r3.u64;
	// mr r4,r21
	ctx.r4.u64 = ctx.r21.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x83285858
	ctx.lr = 0x83274400;
	sub_83285858(ctx, base);
	// mr r22,r3
	ctx.r22.u64 = ctx.r3.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwz r4,96(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// bl 0x83285858
	ctx.lr = 0x83274410;
	sub_83285858(ctx, base);
	// mr r14,r3
	ctx.r14.u64 = ctx.r3.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwz r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x83285858
	ctx.lr = 0x83274420;
	sub_83285858(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwz r4,92(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// bl 0x83285858
	ctx.lr = 0x83274430;
	sub_83285858(ctx, base);
	// li r11,288
	ctx.r11.s64 = 288;
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// li r4,288
	ctx.r4.s64 = 288;
	// stw r11,1332(r28)
	PPC_STORE_U32(ctx.r28.u32 + 1332, ctx.r11.u32);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x83285858
	ctx.lr = 0x83274448;
	sub_83285858(ctx, base);
	// cmplwi cr6,r20,0
	ctx.cr6.compare<uint32_t>(ctx.r20.u32, 0, ctx.xer);
	// stw r3,1328(r28)
	PPC_STORE_U32(ctx.r28.u32 + 1328, ctx.r3.u32);
	// beq cr6,0x832746e4
	if (ctx.cr6.eq) goto loc_832746E4;
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// beq cr6,0x832746e4
	if (ctx.cr6.eq) goto loc_832746E4;
	// cmpwi cr6,r19,0
	ctx.cr6.compare<int32_t>(ctx.r19.s32, 0, ctx.xer);
	// bne cr6,0x832746e4
	if (!ctx.cr6.eq) goto loc_832746E4;
	// cmpwi cr6,r18,0
	ctx.cr6.compare<int32_t>(ctx.r18.s32, 0, ctx.xer);
	// bne cr6,0x832746e4
	if (!ctx.cr6.eq) goto loc_832746E4;
	// cmplwi cr6,r22,0
	ctx.cr6.compare<uint32_t>(ctx.r22.u32, 0, ctx.xer);
	// beq cr6,0x832746e4
	if (ctx.cr6.eq) goto loc_832746E4;
	// cmplwi cr6,r14,0
	ctx.cr6.compare<uint32_t>(ctx.r14.u32, 0, ctx.xer);
	// beq cr6,0x832746e4
	if (ctx.cr6.eq) goto loc_832746E4;
	// cmplwi cr6,r15,0
	ctx.cr6.compare<uint32_t>(ctx.r15.u32, 0, ctx.xer);
	// beq cr6,0x832746e4
	if (ctx.cr6.eq) goto loc_832746E4;
	// lwz r19,80(r1)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r19,0
	ctx.cr6.compare<uint32_t>(ctx.r19.u32, 0, ctx.xer);
	// beq cr6,0x832746e4
	if (ctx.cr6.eq) goto loc_832746E4;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x832746e4
	if (ctx.cr6.eq) goto loc_832746E4;
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x832746e4
	if (ctx.cr6.eq) goto loc_832746E4;
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// bl 0x83273590
	ctx.lr = 0x832744A8;
	sub_83273590(ctx, base);
	// cmpwi cr6,r3,1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 1, ctx.xer);
	// bne cr6,0x832744cc
	if (!ctx.cr6.eq) goto loc_832744CC;
	// cmplwi cr6,r26,0
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, 0, ctx.xer);
	// beq cr6,0x832744c0
	if (ctx.cr6.eq) goto loc_832744C0;
	// cmplwi cr6,r25,0
	ctx.cr6.compare<uint32_t>(ctx.r25.u32, 0, ctx.xer);
	// bne cr6,0x832744cc
	if (!ctx.cr6.eq) goto loc_832744CC;
loc_832744C0:
	// lis r11,-32219
	ctx.r11.s64 = -2111504384;
	// addi r3,r11,16152
	ctx.r3.s64 = ctx.r11.s64 + 16152;
	// b 0x832746ec
	goto loc_832746EC;
loc_832744CC:
	// addi r11,r27,63
	ctx.r11.s64 = ctx.r27.s64 + 63;
	// addi r7,r1,88
	ctx.r7.s64 = ctx.r1.s64 + 88;
	// rlwinm r11,r11,0,0,25
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFC0;
	// addi r6,r1,100
	ctx.r6.s64 = ctx.r1.s64 + 100;
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// stw r11,304(r31)
	PPC_STORE_U32(ctx.r31.u32 + 304, ctx.r11.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x83272ed8
	ctx.lr = 0x832744F0;
	sub_83272ED8(ctx, base);
	// lis r11,-31845
	ctx.r11.s64 = -2086993920;
	// lis r10,-31845
	ctx.r10.s64 = -2086993920;
	// lwz r9,80(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// addi r29,r11,4948
	ctx.r29.s64 = ctx.r11.s64 + 4948;
	// lwz r8,84(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// addi r27,r10,5084
	ctx.r27.s64 = ctx.r10.s64 + 5084;
	// mr r11,r23
	ctx.r11.u64 = ctx.r23.u64;
	// mr r10,r23
	ctx.r10.u64 = ctx.r23.u64;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// stw r23,16(r29)
	PPC_STORE_U32(ctx.r29.u32 + 16, ctx.r23.u32);
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// stw r23,32(r29)
	PPC_STORE_U32(ctx.r29.u32 + 32, ctx.r23.u32);
	// stw r24,28(r29)
	PPC_STORE_U32(ctx.r29.u32 + 28, ctx.r24.u32);
	// stw r26,8(r27)
	PPC_STORE_U32(ctx.r27.u32 + 8, ctx.r26.u32);
	// stw r25,24(r27)
	PPC_STORE_U32(ctx.r27.u32 + 24, ctx.r25.u32);
	// stw r9,8(r29)
	PPC_STORE_U32(ctx.r29.u32 + 8, ctx.r9.u32);
	// stw r8,12(r29)
	PPC_STORE_U32(ctx.r29.u32 + 12, ctx.r8.u32);
	// stw r9,20(r29)
	PPC_STORE_U32(ctx.r29.u32 + 20, ctx.r9.u32);
	// stw r8,24(r29)
	PPC_STORE_U32(ctx.r29.u32 + 24, ctx.r8.u32);
	// lwz r11,100(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// lwz r10,88(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// stw r11,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r11.u32);
	// stw r10,4(r29)
	PPC_STORE_U32(ctx.r29.u32 + 4, ctx.r10.u32);
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// bl 0x83273480
	ctx.lr = 0x83274554;
	sub_83273480(ctx, base);
	// lis r11,-31845
	ctx.r11.s64 = -2086993920;
	// lwz r10,-44(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + -44);
	// lwz r11,308(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 308);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r10,156(r1)
	PPC_STORE_U32(ctx.r1.u32 + 156, ctx.r10.u32);
	// beq cr6,0x83274580
	if (ctx.cr6.eq) goto loc_83274580;
	// divw r9,r11,r10
	ctx.r9.s32 = ctx.r11.s32 / ctx.r10.s32;
	// mullw r10,r9,r10
	ctx.r10.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r10.s32);
	// subf r10,r10,r11
	ctx.r10.s64 = ctx.r11.s64 - ctx.r10.s64;
	// subf r11,r10,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r10.s64;
	// stw r11,308(r31)
	PPC_STORE_U32(ctx.r31.u32 + 308, ctx.r11.u32);
loc_83274580:
	// lwz r3,36(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 36);
	// bl 0x83272f50
	ctx.lr = 0x83274588;
	sub_83272F50(ctx, base);
	// lwz r8,76(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + 76);
	// addi r5,r1,224
	ctx.r5.s64 = ctx.r1.s64 + 224;
	// lwz r7,52(r30)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r30.u32 + 52);
	// addi r4,r1,104
	ctx.r4.s64 = ctx.r1.s64 + 104;
	// lwz r6,40(r30)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r30.u32 + 40);
	// lwz r26,44(r30)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r30.u32 + 44);
	// lwz r11,308(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 308);
	// stw r8,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r8.u32);
	// stw r7,164(r1)
	PPC_STORE_U32(ctx.r1.u32 + 164, ctx.r7.u32);
	// lwz r25,48(r30)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r30.u32 + 48);
	// lwz r10,40(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// lwz r18,72(r30)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r30.u32 + 72);
	// lwz r9,4(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r8,0(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// stw r3,176(r1)
	PPC_STORE_U32(ctx.r1.u32 + 176, ctx.r3.u32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// stw r6,196(r1)
	PPC_STORE_U32(ctx.r1.u32 + 196, ctx.r6.u32);
	// stw r20,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r20.u32);
	// stw r26,200(r1)
	PPC_STORE_U32(ctx.r1.u32 + 200, ctx.r26.u32);
	// stw r11,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r11.u32);
	// stw r25,204(r1)
	PPC_STORE_U32(ctx.r1.u32 + 204, ctx.r25.u32);
	// stw r10,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r10.u32);
	// stw r18,192(r1)
	PPC_STORE_U32(ctx.r1.u32 + 192, ctx.r18.u32);
	// stw r9,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r9.u32);
	// stw r8,152(r1)
	PPC_STORE_U32(ctx.r1.u32 + 152, ctx.r8.u32);
	// stw r24,160(r1)
	PPC_STORE_U32(ctx.r1.u32 + 160, ctx.r24.u32);
	// stw r17,168(r1)
	PPC_STORE_U32(ctx.r1.u32 + 168, ctx.r17.u32);
	// stw r16,172(r1)
	PPC_STORE_U32(ctx.r1.u32 + 172, ctx.r16.u32);
	// lwz r7,88(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// stw r22,180(r1)
	PPC_STORE_U32(ctx.r1.u32 + 180, ctx.r22.u32);
	// stw r21,184(r1)
	PPC_STORE_U32(ctx.r1.u32 + 184, ctx.r21.u32);
	// stw r23,188(r1)
	PPC_STORE_U32(ctx.r1.u32 + 188, ctx.r23.u32);
	// stw r7,208(r1)
	PPC_STORE_U32(ctx.r1.u32 + 208, ctx.r7.u32);
	// bl 0x83284328
	ctx.lr = 0x83274610;
	sub_83284328(ctx, base);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x83274624
	if (ctx.cr6.eq) goto loc_83274624;
	// cmpwi cr6,r11,9
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 9, ctx.xer);
	// bne cr6,0x8327462c
	if (!ctx.cr6.eq) goto loc_8327462C;
loc_83274624:
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x83280e90
	ctx.lr = 0x8327462C;
	sub_83280E90(ctx, base);
loc_8327462C:
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x8327ff08
	ctx.lr = 0x83274638;
	sub_8327FF08(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// bne 0x83274658
	if (!ctx.cr0.eq) goto loc_83274658;
	// li r3,-305
	ctx.r3.s64 = -305;
	// bl 0x8326ef70
	ctx.lr = 0x83274648;
	sub_8326EF70(ctx, base);
	// lis r11,-32219
	ctx.r11.s64 = -2111504384;
	// addi r3,r11,16108
	ctx.r3.s64 = ctx.r11.s64 + 16108;
loc_83274650:
	// bl 0x83278688
	ctx.lr = 0x83274654;
	sub_83278688(ctx, base);
	// b 0x832746f8
	goto loc_832746F8;
loc_83274658:
	// lis r11,-31961
	ctx.r11.s64 = -2094596096;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// addi r4,r11,-4152
	ctx.r4.s64 = ctx.r11.s64 + -4152;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83282450
	ctx.lr = 0x8327466C;
	sub_83282450(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x83274688
	if (ctx.cr0.eq) goto loc_83274688;
	// li r3,-303
	ctx.r3.s64 = -303;
	// bl 0x8326ef70
	ctx.lr = 0x8327467C;
	sub_8326EF70(ctx, base);
	// lis r11,-32219
	ctx.r11.s64 = -2111504384;
	// addi r3,r11,16068
	ctx.r3.s64 = ctx.r11.s64 + 16068;
	// b 0x83274650
	goto loc_83274650;
loc_83274688:
	// mr r3,r14
	ctx.r3.u64 = ctx.r14.u64;
	// lwz r4,96(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// bl 0x83272e38
	ctx.lr = 0x83274694;
	sub_83272E38(ctx, base);
	// stw r3,1596(r28)
	PPC_STORE_U32(ctx.r28.u32 + 1596, ctx.r3.u32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne 0x832746ac
	if (!ctx.cr0.eq) goto loc_832746AC;
	// lis r11,-32219
	ctx.r11.s64 = -2111504384;
	// addi r3,r11,16028
	ctx.r3.s64 = ctx.r11.s64 + 16028;
	// b 0x83274650
	goto loc_83274650;
loc_832746AC:
	// lwz r11,92(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// li r6,64
	ctx.r6.s64 = 64;
	// li r5,2048
	ctx.r5.s64 = 2048;
	// stw r19,1264(r28)
	PPC_STORE_U32(ctx.r28.u32 + 1264, ctx.r19.u32);
	// mr r4,r15
	ctx.r4.u64 = ctx.r15.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// stw r11,1268(r28)
	PPC_STORE_U32(ctx.r28.u32 + 1268, ctx.r11.u32);
	// bl 0x832735d0
	ctx.lr = 0x832746CC;
	sub_832735D0(ctx, base);
	// stw r23,1600(r28)
	PPC_STORE_U32(ctx.r28.u32 + 1600, ctx.r23.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r23,1664(r28)
	PPC_STORE_U32(ctx.r28.u32 + 1664, ctx.r23.u32);
	// stw r23,1672(r28)
	PPC_STORE_U32(ctx.r28.u32 + 1672, ctx.r23.u32);
	// stw r23,1676(r28)
	PPC_STORE_U32(ctx.r28.u32 + 1676, ctx.r23.u32);
	// b 0x832746fc
	goto loc_832746FC;
loc_832746E4:
	// lis r11,-32219
	ctx.r11.s64 = -2111504384;
	// addi r3,r11,16000
	ctx.r3.s64 = ctx.r11.s64 + 16000;
loc_832746EC:
	// bl 0x83278688
	ctx.lr = 0x832746F0;
	sub_83278688(ctx, base);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x83285950
	ctx.lr = 0x832746F8;
	sub_83285950(ctx, base);
loc_832746F8:
	// li r3,0
	ctx.r3.s64 = 0;
loc_832746FC:
	// addi r1,r1,448
	ctx.r1.s64 = ctx.r1.s64 + 448;
	// b 0x833a01c0
	__restgprlr_14(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83274704"))) PPC_WEAK_FUNC(sub_83274704);
PPC_FUNC_IMPL(__imp__sub_83274704) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83274708"))) PPC_WEAK_FUNC(sub_83274708);
PPC_FUNC_IMPL(__imp__sub_83274708) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x833a01ac
	ctx.lr = 0x83274710;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x8326fda0
	ctx.lr = 0x8327471C;
	sub_8326FDA0(ctx, base);
	// lis r29,-31816
	ctx.r29.s64 = -2085093376;
	// lis r11,-31845
	ctx.r11.s64 = -2086993920;
	// addi r30,r11,-5064
	ctx.r30.s64 = ctx.r11.s64 + -5064;
	// lwz r3,13264(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 13264);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8327474c
	if (ctx.cr6.eq) goto loc_8327474C;
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
	ctx.lr = 0x8327474C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8327474C:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83273ed8
	ctx.lr = 0x83274754;
	sub_83273ED8(ctx, base);
	// lwz r3,13264(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 13264);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x83274774
	if (ctx.cr6.eq) goto loc_83274774;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r4,r30,108
	ctx.r4.s64 = ctx.r30.s64 + 108;
	// lwz r11,36(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x83274774;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_83274774:
	// bl 0x8326ecf0
	ctx.lr = 0x83274778;
	sub_8326ECF0(ctx, base);
	// lwz r11,16492(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16492);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stw r11,16492(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16492, ctx.r11.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x833a01fc
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8327478C"))) PPC_WEAK_FUNC(sub_8327478C);
PPC_FUNC_IMPL(__imp__sub_8327478C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83274790"))) PPC_WEAK_FUNC(sub_83274790);
PPC_FUNC_IMPL(__imp__sub_83274790) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x833a0198
	ctx.lr = 0x83274798;
	__savegprlr_24(ctx, base);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x832747bc
	if (!ctx.cr6.eq) goto loc_832747BC;
	// lis r11,-32219
	ctx.r11.s64 = -2111504384;
	// addi r3,r11,16552
	ctx.r3.s64 = ctx.r11.s64 + 16552;
loc_832747B0:
	// bl 0x83278688
	ctx.lr = 0x832747B4;
	sub_83278688(ctx, base);
loc_832747B4:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x83274b58
	goto loc_83274B58;
loc_832747BC:
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x83273948
	ctx.lr = 0x832747C4;
	sub_83273948(ctx, base);
	// cmpwi cr6,r3,1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 1, ctx.xer);
	// bne cr6,0x832747b4
	if (!ctx.cr6.eq) goto loc_832747B4;
	// bl 0x8326ecf0
	ctx.lr = 0x832747D0;
	sub_8326ECF0(ctx, base);
	// li r30,0
	ctx.r30.s64 = 0;
	// mr r24,r3
	ctx.r24.u64 = ctx.r3.u64;
	// addi r29,r3,104
	ctx.r29.s64 = ctx.r3.s64 + 104;
	// mr r28,r30
	ctx.r28.u64 = ctx.r30.u64;
loc_832747E0:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// mr r31,r29
	ctx.r31.u64 = ctx.r29.u64;
	// bl 0x8326df70
	ctx.lr = 0x832747EC;
	sub_8326DF70(ctx, base);
	// cmpwi cr6,r3,1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 1, ctx.xer);
	// bne cr6,0x83274804
	if (!ctx.cr6.eq) goto loc_83274804;
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// addi r29,r29,2048
	ctx.r29.s64 = ctx.r29.s64 + 2048;
	// cmpwi cr6,r28,8
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 8, ctx.xer);
	// blt cr6,0x832747e0
	if (ctx.cr6.lt) goto loc_832747E0;
loc_83274804:
	// cmpwi cr6,r28,8
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 8, ctx.xer);
	// bne cr6,0x83274820
	if (!ctx.cr6.eq) goto loc_83274820;
	// li r3,-11
	ctx.r3.s64 = -11;
	// bl 0x8326ef70
	ctx.lr = 0x83274814;
	sub_8326EF70(ctx, base);
	// lis r11,-32219
	ctx.r11.s64 = -2111504384;
	// addi r3,r11,16472
	ctx.r3.s64 = ctx.r11.s64 + 16472;
	// b 0x832747b0
	goto loc_832747B0;
loc_83274820:
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x83273880
	ctx.lr = 0x83274828;
	sub_83273880(ctx, base);
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// bne cr6,0x8327483c
	if (!ctx.cr6.eq) goto loc_8327483C;
	// lis r11,-32219
	ctx.r11.s64 = -2111504384;
	// addi r3,r11,16408
	ctx.r3.s64 = ctx.r11.s64 + 16408;
	// b 0x832747b0
	goto loc_832747B0;
loc_8327483C:
	// lis r11,-31827
	ctx.r11.s64 = -2085814272;
	// rlwinm r25,r28,2,0,29
	ctx.r25.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r26,r11,10152
	ctx.r26.s64 = ctx.r11.s64 + 10152;
	// lwzx r3,r25,r26
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r25.u32 + ctx.r26.u32);
	// bl 0x832f40c0
	ctx.lr = 0x83274850;
	sub_832F40C0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x832747b4
	if (ctx.cr0.lt) goto loc_832747B4;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x83274870
	if (ctx.cr6.eq) goto loc_83274870;
	// li r5,2048
	ctx.r5.s64 = 2048;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x833a2b30
	ctx.lr = 0x83274870;
	sub_833A2B30(ctx, base);
loc_83274870:
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x832738e0
	ctx.lr = 0x8327487C;
	sub_832738E0(ctx, base);
	// addi r29,r31,8
	ctx.r29.s64 = ctx.r31.s64 + 8;
	// li r5,84
	ctx.r5.s64 = 84;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x833a1390
	ctx.lr = 0x83274890;
	sub_833A1390(ctx, base);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x83273dd0
	ctx.lr = 0x83274898;
	sub_83273DD0(ctx, base);
	// cmpwi cr6,r3,1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 1, ctx.xer);
	// bne cr6,0x832748ac
	if (!ctx.cr6.eq) goto loc_832748AC;
	// lwz r11,48(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// addi r11,r11,-2
	ctx.r11.s64 = ctx.r11.s64 + -2;
	// stw r11,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r11.u32);
loc_832748AC:
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x832742c0
	ctx.lr = 0x832748B8;
	sub_832742C0(ctx, base);
	// mr. r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// stw r28,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r28.u32);
	// bne 0x832748dc
	if (!ctx.cr0.eq) goto loc_832748DC;
	// lis r11,-32219
	ctx.r11.s64 = -2111504384;
	// addi r3,r11,16372
	ctx.r3.s64 = ctx.r11.s64 + 16372;
loc_832748CC:
	// bl 0x83278688
	ctx.lr = 0x832748D0;
	sub_83278688(ctx, base);
loc_832748D0:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_832748D4:
	// bl 0x83274708
	ctx.lr = 0x832748D8;
	sub_83274708(ctx, base);
	// b 0x832747b4
	goto loc_832747B4;
loc_832748DC:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x832735e8
	ctx.lr = 0x832748E4;
	sub_832735E8(ctx, base);
	// addi r9,r1,88
	ctx.r9.s64 = ctx.r1.s64 + 88;
	// addi r8,r1,92
	ctx.r8.s64 = ctx.r1.s64 + 92;
	// addi r7,r1,96
	ctx.r7.s64 = ctx.r1.s64 + 96;
	// addi r6,r1,100
	ctx.r6.s64 = ctx.r1.s64 + 100;
	// addi r5,r1,104
	ctx.r5.s64 = ctx.r1.s64 + 104;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x83273c50
	ctx.lr = 0x83274904;
	sub_83273C50(ctx, base);
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r6,12(r24)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r24.u32 + 12);
	// lwz r5,8(r24)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r24.u32 + 8);
	// bl 0x832736a8
	ctx.lr = 0x83274918;
	sub_832736A8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83273870
	ctx.lr = 0x83274920;
	sub_83273870(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// stw r3,1292(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1292, ctx.r3.u32);
	// bne 0x83274938
	if (!ctx.cr0.eq) goto loc_83274938;
	// lis r11,-32219
	ctx.r11.s64 = -2111504384;
	// addi r3,r11,16336
	ctx.r3.s64 = ctx.r11.s64 + 16336;
	// b 0x832748cc
	goto loc_832748CC;
loc_83274938:
	// li r3,1
	ctx.r3.s64 = 1;
	// lwz r5,1332(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1332);
	// lwz r4,1328(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1328);
	// bl 0x832ef848
	ctx.lr = 0x83274948;
	sub_832EF848(ctx, base);
	// stw r3,1324(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1324, ctx.r3.u32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne 0x83274960
	if (!ctx.cr0.eq) goto loc_83274960;
	// lis r11,-32219
	ctx.r11.s64 = -2111504384;
	// addi r3,r11,16292
	ctx.r3.s64 = ctx.r11.s64 + 16292;
	// b 0x832748cc
	goto loc_832748CC;
loc_83274960:
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// li r29,1
	ctx.r29.s64 = 1;
	// stw r30,140(r31)
	PPC_STORE_U32(ctx.r31.u32 + 140, ctx.r30.u32);
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// stw r29,92(r31)
	PPC_STORE_U32(ctx.r31.u32 + 92, ctx.r29.u32);
	// li r4,3
	ctx.r4.s64 = 3;
	// stw r30,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r30.u32);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// stw r11,124(r31)
	PPC_STORE_U32(ctx.r31.u32 + 124, ctx.r11.u32);
	// lwz r11,32(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 32);
	// stw r11,112(r31)
	PPC_STORE_U32(ctx.r31.u32 + 112, ctx.r11.u32);
	// lwz r11,32(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 32);
	// stw r11,116(r31)
	PPC_STORE_U32(ctx.r31.u32 + 116, ctx.r11.u32);
	// bl 0x83274e28
	ctx.lr = 0x83274998;
	sub_83274E28(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x832749a8
	if (ctx.cr0.eq) goto loc_832749A8;
	// stw r30,104(r31)
	PPC_STORE_U32(ctx.r31.u32 + 104, ctx.r30.u32);
	// b 0x832749b0
	goto loc_832749B0;
loc_832749A8:
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// stw r11,104(r31)
	PPC_STORE_U32(ctx.r31.u32 + 104, ctx.r11.u32);
loc_832749B0:
	// stw r29,144(r31)
	PPC_STORE_U32(ctx.r31.u32 + 144, ctx.r29.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r29,148(r31)
	PPC_STORE_U32(ctx.r31.u32 + 148, ctx.r29.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stb r30,152(r31)
	PPC_STORE_U8(ctx.r31.u32 + 152, ctx.r30.u8);
	// stb r30,153(r31)
	PPC_STORE_U8(ctx.r31.u32 + 153, ctx.r30.u8);
	// stb r30,154(r31)
	PPC_STORE_U8(ctx.r31.u32 + 154, ctx.r30.u8);
	// stb r30,155(r31)
	PPC_STORE_U8(ctx.r31.u32 + 155, ctx.r30.u8);
	// stw r30,128(r31)
	PPC_STORE_U32(ctx.r31.u32 + 128, ctx.r30.u32);
	// bl 0x83278d60
	ctx.lr = 0x832749D8;
	sub_83278D60(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83278d68
	ctx.lr = 0x832749E4;
	sub_83278D68(ctx, base);
	// stw r29,120(r31)
	PPC_STORE_U32(ctx.r31.u32 + 120, ctx.r29.u32);
	// stw r30,172(r31)
	PPC_STORE_U32(ctx.r31.u32 + 172, ctx.r30.u32);
	// lwz r3,1292(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1292);
	// bl 0x832769e0
	ctx.lr = 0x832749F4;
	sub_832769E0(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// stw r3,100(r31)
	PPC_STORE_U32(ctx.r31.u32 + 100, ctx.r3.u32);
	// bne 0x83274a0c
	if (!ctx.cr0.eq) goto loc_83274A0C;
	// lis r11,-32219
	ctx.r11.s64 = -2111504384;
	// addi r3,r11,16248
	ctx.r3.s64 = ctx.r11.s64 + 16248;
	// b 0x832748cc
	goto loc_832748CC;
loc_83274A0C:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8326fa70
	ctx.lr = 0x83274A14;
	sub_8326FA70(ctx, base);
	// lwz r3,1292(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1292);
	// bl 0x832f0058
	ctx.lr = 0x83274A1C;
	sub_832F0058(ctx, base);
	// stw r30,156(r31)
	PPC_STORE_U32(ctx.r31.u32 + 156, ctx.r30.u32);
	// stw r3,108(r31)
	PPC_STORE_U32(ctx.r31.u32 + 108, ctx.r3.u32);
	// lwz r4,100(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 100);
	// bl 0x832f0098
	ctx.lr = 0x83274A2C;
	sub_832F0098(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x832739b8
	ctx.lr = 0x83274A34;
	sub_832739B8(ctx, base);
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// beq cr6,0x832748d0
	if (ctx.cr6.eq) goto loc_832748D0;
	// lwz r6,12(r27)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r27.u32 + 12);
	// lwz r5,8(r27)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r27.u32 + 8);
	// lwz r4,216(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 216);
	// lwz r3,212(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 212);
	// bl 0x83270310
	ctx.lr = 0x83274A50;
	sub_83270310(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne 0x83274a64
	if (!ctx.cr0.eq) goto loc_83274A64;
	// lis r11,-32219
	ctx.r11.s64 = -2111504384;
	// addi r3,r11,16220
	ctx.r3.s64 = ctx.r11.s64 + 16220;
	// b 0x832748cc
	goto loc_832748CC;
loc_83274A64:
	// stw r3,208(r31)
	PPC_STORE_U32(ctx.r31.u32 + 208, ctx.r3.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,40(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// bl 0x832705c0
	ctx.lr = 0x83274A74;
	sub_832705C0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x832706f8
	ctx.lr = 0x83274A7C;
	sub_832706F8(ctx, base);
	// stw r3,1224(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1224, ctx.r3.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83270788
	ctx.lr = 0x83274A88;
	sub_83270788(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x83274a9c
	if (ctx.cr0.eq) goto loc_83274A9C;
	// lis r11,-32219
	ctx.r11.s64 = -2111504384;
	// addi r3,r11,16180
	ctx.r3.s64 = ctx.r11.s64 + 16180;
	// b 0x832748cc
	goto loc_832748CC;
loc_83274A9C:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x832707e0
	ctx.lr = 0x83274AA4;
	sub_832707E0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x832714b0
	ctx.lr = 0x83274AAC;
	sub_832714B0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x832720e8
	ctx.lr = 0x83274AB4;
	sub_832720E8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8326df80
	ctx.lr = 0x83274ABC;
	sub_8326DF80(ctx, base);
	// lis r11,-31961
	ctx.r11.s64 = -2094596096;
	// lis r10,-31961
	ctx.r10.s64 = -2094596096;
	// stw r30,1620(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1620, ctx.r30.u32);
	// lis r9,-31961
	ctx.r9.s64 = -2094596096;
	// stw r30,1604(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1604, ctx.r30.u32);
	// lis r8,-31961
	ctx.r8.s64 = -2094596096;
	// stw r30,1608(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1608, ctx.r30.u32);
	// lis r7,-32041
	ctx.r7.s64 = -2099838976;
	// stw r30,1612(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1612, ctx.r30.u32);
	// addi r11,r11,304
	ctx.r11.s64 = ctx.r11.s64 + 304;
	// stw r30,1644(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1644, ctx.r30.u32);
	// li r6,-1
	ctx.r6.s64 = -1;
	// stw r30,1648(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1648, ctx.r30.u32);
	// addi r10,r10,488
	ctx.r10.s64 = ctx.r10.s64 + 488;
	// stw r30,1652(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1652, ctx.r30.u32);
	// addi r9,r9,7448
	ctx.r9.s64 = ctx.r9.s64 + 7448;
	// stw r6,1640(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1640, ctx.r6.u32);
	// addi r8,r8,4576
	ctx.r8.s64 = ctx.r8.s64 + 4576;
	// stw r30,1656(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1656, ctx.r30.u32);
	// addi r7,r7,-9592
	ctx.r7.s64 = ctx.r7.s64 + -9592;
	// stw r30,1660(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1660, ctx.r30.u32);
	// stw r11,1692(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1692, ctx.r11.u32);
	// stw r10,1696(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1696, ctx.r10.u32);
	// stw r9,1700(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1700, ctx.r9.u32);
	// stw r8,1704(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1704, ctx.r8.u32);
	// stw r7,1708(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1708, ctx.r7.u32);
	// stw r30,2036(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2036, ctx.r30.u32);
	// stw r30,2040(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2040, ctx.r30.u32);
	// stw r30,2044(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2044, ctx.r30.u32);
	// lwzx r11,r25,r26
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + ctx.r26.u32);
	// stw r11,1668(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1668, ctx.r11.u32);
	// lwzx r3,r25,r26
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r25.u32 + ctx.r26.u32);
	// bl 0x832f4158
	ctx.lr = 0x83274B40;
	sub_832F4158(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// blt 0x832748d4
	if (ctx.cr0.lt) goto loc_832748D4;
	// lwz r11,16492(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 16492);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,16492(r24)
	PPC_STORE_U32(ctx.r24.u32 + 16492, ctx.r11.u32);
loc_83274B58:
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x833a01e8
	__restgprlr_24(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83274B60"))) PPC_WEAK_FUNC(sub_83274B60);
PPC_FUNC_IMPL(__imp__sub_83274B60) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x833a0194
	ctx.lr = 0x83274B68;
	__savegprlr_23(ctx, base);
	// stwu r1,-736(r1)
	ea = -736 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r30,-31816
	ctx.r30.s64 = -2085093376;
	// lis r11,-31845
	ctx.r11.s64 = -2086993920;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r29,r11,-5280
	ctx.r29.s64 = ctx.r11.s64 + -5280;
	// lwz r11,13264(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 13264);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x83274c10
	if (ctx.cr6.eq) goto loc_83274C10;
	// lwz r11,48(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// lis r10,-32219
	ctx.r10.s64 = -2111504384;
	// lwz r28,44(r3)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r3.u32 + 44);
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// lwz r27,40(r31)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// addi r4,r10,16596
	ctx.r4.s64 = ctx.r10.s64 + 16596;
	// lwz r26,36(r31)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// lwz r25,32(r31)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// lwz r24,28(r31)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// lwz r23,24(r31)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// lwz r10,20(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// lwz r9,16(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// lwz r8,12(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// lwz r7,8(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r6,4(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r5,0(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// stw r11,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r11.u32);
	// stw r28,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r28.u32);
	// stw r27,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r27.u32);
	// stw r26,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r26.u32);
	// stw r25,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r25.u32);
	// stw r24,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r24.u32);
	// stw r23,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r23.u32);
	// bl 0x833a2630
	ctx.lr = 0x83274BE8;
	sub_833A2630(ctx, base);
	// lwz r3,13264(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 13264);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x83274c10
	if (ctx.cr6.eq) goto loc_83274C10;
	// addi r11,r1,144
	ctx.r11.s64 = ctx.r1.s64 + 144;
	// addi r4,r29,4
	ctx.r4.s64 = ctx.r29.s64 + 4;
	// stw r11,12(r29)
	PPC_STORE_U32(ctx.r29.u32 + 12, ctx.r11.u32);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,36(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x83274C10;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_83274C10:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83274790
	ctx.lr = 0x83274C18;
	sub_83274790(ctx, base);
	// lwz r11,13264(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 13264);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x83274c44
	if (ctx.cr6.eq) goto loc_83274C44;
	// stw r3,116(r29)
	PPC_STORE_U32(ctx.r29.u32 + 116, ctx.r3.u32);
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// addi r4,r29,108
	ctx.r4.s64 = ctx.r29.s64 + 108;
	// lwz r11,36(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x83274C44;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_83274C44:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,736
	ctx.r1.s64 = ctx.r1.s64 + 736;
	// b 0x833a01e4
	__restgprlr_23(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83274C50"))) PPC_WEAK_FUNC(sub_83274C50);
PPC_FUNC_IMPL(__imp__sub_83274C50) {
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
	ctx.lr = 0x83274C68;
	sub_83282090(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x83274c80
	if (ctx.cr0.eq) goto loc_83274C80;
	// lis r4,-256
	ctx.r4.s64 = -16777216;
	// li r3,0
	ctx.r3.s64 = 0;
	// ori r4,r4,273
	ctx.r4.u64 = ctx.r4.u64 | 273;
	// bl 0x83282390
	ctx.lr = 0x83274C80;
	sub_83282390(ctx, base);
loc_83274C80:
	// lwz r3,104(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 104);
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

__attribute__((alias("__imp__sub_83274C98"))) PPC_WEAK_FUNC(sub_83274C98);
PPC_FUNC_IMPL(__imp__sub_83274C98) {
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
	// cmpwi cr6,r4,6
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 6, ctx.xer);
	// bne cr6,0x83274cc8
	if (!ctx.cr6.eq) goto loc_83274CC8;
	// cmpwi cr6,r5,1
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 1, ctx.xer);
	// bne cr6,0x83274cec
	if (!ctx.cr6.eq) goto loc_83274CEC;
	// li r4,3
	ctx.r4.s64 = 3;
	// bl 0x83285b70
	ctx.lr = 0x83274CBC;
	sub_83285B70(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x83274cec
	if (!ctx.cr0.eq) goto loc_83274CEC;
	// b 0x83274cf0
	goto loc_83274CF0;
loc_83274CC8:
	// cmpwi cr6,r4,5
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 5, ctx.xer);
	// bne cr6,0x83274cec
	if (!ctx.cr6.eq) goto loc_83274CEC;
	// cmpwi cr6,r5,1
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 1, ctx.xer);
	// bne cr6,0x83274cec
	if (!ctx.cr6.eq) goto loc_83274CEC;
	// li r4,2
	ctx.r4.s64 = 2;
	// bl 0x83285b70
	ctx.lr = 0x83274CE0;
	sub_83285B70(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// li r3,0
	ctx.r3.s64 = 0;
	// beq 0x83274cf0
	if (ctx.cr0.eq) goto loc_83274CF0;
loc_83274CEC:
	// li r3,1
	ctx.r3.s64 = 1;
loc_83274CF0:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83274D00"))) PPC_WEAK_FUNC(sub_83274D00);
PPC_FUNC_IMPL(__imp__sub_83274D00) {
	PPC_FUNC_PROLOGUE();
	// addi r11,r4,651
	ctx.r11.s64 = ctx.r4.s64 + 651;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r3,r11,r3
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r3.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83274D10"))) PPC_WEAK_FUNC(sub_83274D10);
PPC_FUNC_IMPL(__imp__sub_83274D10) {
	PPC_FUNC_PROLOGUE();
	// stw r5,3408(r3)
	PPC_STORE_U32(ctx.r3.u32 + 3408, ctx.r5.u32);
	// stw r4,3404(r3)
	PPC_STORE_U32(ctx.r3.u32 + 3404, ctx.r4.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83274D1C"))) PPC_WEAK_FUNC(sub_83274D1C);
PPC_FUNC_IMPL(__imp__sub_83274D1C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83274D20"))) PPC_WEAK_FUNC(sub_83274D20);
PPC_FUNC_IMPL(__imp__sub_83274D20) {
	PPC_FUNC_PROLOGUE();
	// mulli r11,r4,68
	ctx.r11.s64 = ctx.r4.s64 * 68;
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// lwz r11,8312(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8312);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x83274d38
	if (ctx.cr6.eq) goto loc_83274D38;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
loc_83274D38:
	// stw r11,0(r5)
	PPC_STORE_U32(ctx.r5.u32 + 0, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83274D40"))) PPC_WEAK_FUNC(sub_83274D40);
PPC_FUNC_IMPL(__imp__sub_83274D40) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x833a01ac
	ctx.lr = 0x83274D48;
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
	// bl 0x83274c98
	ctx.lr = 0x83274D5C;
	sub_83274C98(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x83274d70
	if (ctx.cr0.eq) goto loc_83274D70;
	// addi r11,r30,651
	ctx.r11.s64 = ctx.r30.s64 + 651;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r29,r11,r31
	PPC_STORE_U32(ctx.r11.u32 + ctx.r31.u32, ctx.r29.u32);
loc_83274D70:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x833a01fc
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83274D78"))) PPC_WEAK_FUNC(sub_83274D78);
PPC_FUNC_IMPL(__imp__sub_83274D78) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x833a01ac
	ctx.lr = 0x83274D80;
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
	// bl 0x83274c98
	ctx.lr = 0x83274D94;
	sub_83274C98(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x83274da8
	if (ctx.cr0.eq) goto loc_83274DA8;
	// addi r11,r30,751
	ctx.r11.s64 = ctx.r30.s64 + 751;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r29,r11,r31
	PPC_STORE_U32(ctx.r11.u32 + ctx.r31.u32, ctx.r29.u32);
loc_83274DA8:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x833a01fc
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83274DB0"))) PPC_WEAK_FUNC(sub_83274DB0);
PPC_FUNC_IMPL(__imp__sub_83274DB0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x833a01ac
	ctx.lr = 0x83274DB8;
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
	// bne cr6,0x83274de8
	if (!ctx.cr6.eq) goto loc_83274DE8;
	// lis r11,-31822
	ctx.r11.s64 = -2085486592;
	// rlwinm r10,r4,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r11,r11,1568
	ctx.r11.s64 = ctx.r11.s64 + 1568;
	// lwzx r11,r10,r11
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// stw r11,0(r5)
	PPC_STORE_U32(ctx.r5.u32 + 0, ctx.r11.u32);
	// b 0x83274e1c
	goto loc_83274E1C;
loc_83274DE8:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83282090
	ctx.lr = 0x83274DF0;
	sub_83282090(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x83274e0c
	if (ctx.cr0.eq) goto loc_83274E0C;
	// lis r4,-256
	ctx.r4.s64 = -16777216;
	// li r3,0
	ctx.r3.s64 = 0;
	// ori r4,r4,275
	ctx.r4.u64 = ctx.r4.u64 | 275;
	// bl 0x83282390
	ctx.lr = 0x83274E08;
	sub_83282390(ctx, base);
	// b 0x83274e20
	goto loc_83274E20;
loc_83274E0C:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83274d00
	ctx.lr = 0x83274E18;
	sub_83274D00(ctx, base);
	// stw r3,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r3.u32);
loc_83274E1C:
	// li r3,0
	ctx.r3.s64 = 0;
loc_83274E20:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x833a01fc
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83274E28"))) PPC_WEAK_FUNC(sub_83274E28);
PPC_FUNC_IMPL(__imp__sub_83274E28) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x833a01ac
	ctx.lr = 0x83274E30;
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
	ctx.lr = 0x83274E44;
	sub_83282090(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x83274e60
	if (ctx.cr0.eq) goto loc_83274E60;
	// lis r4,-256
	ctx.r4.s64 = -16777216;
	// li r3,0
	ctx.r3.s64 = 0;
	// ori r4,r4,279
	ctx.r4.u64 = ctx.r4.u64 | 279;
	// bl 0x83282390
	ctx.lr = 0x83274E5C;
	sub_83282390(ctx, base);
	// b 0x83274e74
	goto loc_83274E74;
loc_83274E60:
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83274d20
	ctx.lr = 0x83274E70;
	sub_83274D20(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
loc_83274E74:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x833a01fc
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83274E7C"))) PPC_WEAK_FUNC(sub_83274E7C);
PPC_FUNC_IMPL(__imp__sub_83274E7C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83274E80"))) PPC_WEAK_FUNC(sub_83274E80);
PPC_FUNC_IMPL(__imp__sub_83274E80) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x833a01a4
	ctx.lr = 0x83274E88;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31822
	ctx.r11.s64 = -2085486592;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// addi r29,r11,1568
	ctx.r29.s64 = ctx.r11.s64 + 1568;
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// addi r31,r29,508
	ctx.r31.s64 = ctx.r29.s64 + 508;
loc_83274EA0:
	// lwz r30,0(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x83282090
	ctx.lr = 0x83274EAC;
	sub_83282090(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x83274ec4
	if (!ctx.cr0.eq) goto loc_83274EC4;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x83274d40
	ctx.lr = 0x83274EC4;
	sub_83274D40(ctx, base);
loc_83274EC4:
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// addi r11,r29,540
	ctx.r11.s64 = ctx.r29.s64 + 540;
	// cmpw cr6,r31,r11
	ctx.cr6.compare<int32_t>(ctx.r31.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x83274ea0
	if (ctx.cr6.lt) goto loc_83274EA0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x833a01f4
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83274EDC"))) PPC_WEAK_FUNC(sub_83274EDC);
PPC_FUNC_IMPL(__imp__sub_83274EDC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83274EE0"))) PPC_WEAK_FUNC(sub_83274EE0);
PPC_FUNC_IMPL(__imp__sub_83274EE0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x833a01ac
	ctx.lr = 0x83274EE8;
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
	// bne cr6,0x83274f20
	if (!ctx.cr6.eq) goto loc_83274F20;
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x83274e80
	ctx.lr = 0x83274F0C;
	sub_83274E80(ctx, base);
	// lis r11,-31822
	ctx.r11.s64 = -2085486592;
	// rlwinm r10,r30,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r11,r11,1568
	ctx.r11.s64 = ctx.r11.s64 + 1568;
	// stwx r29,r10,r11
	PPC_STORE_U32(ctx.r10.u32 + ctx.r11.u32, ctx.r29.u32);
	// b 0x83274f64
	goto loc_83274F64;
loc_83274F20:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83282090
	ctx.lr = 0x83274F28;
	sub_83282090(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x83274f44
	if (ctx.cr0.eq) goto loc_83274F44;
	// lis r4,-256
	ctx.r4.s64 = -16777216;
	// li r3,0
	ctx.r3.s64 = 0;
	// ori r4,r4,274
	ctx.r4.u64 = ctx.r4.u64 | 274;
	// bl 0x83282390
	ctx.lr = 0x83274F40;
	sub_83282390(ctx, base);
	// b 0x83274f68
	goto loc_83274F68;
loc_83274F44:
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83274d40
	ctx.lr = 0x83274F54;
	sub_83274D40(ctx, base);
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83274d78
	ctx.lr = 0x83274F64;
	sub_83274D78(ctx, base);
loc_83274F64:
	// li r3,0
	ctx.r3.s64 = 0;
loc_83274F68:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x833a01fc
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83274F70"))) PPC_WEAK_FUNC(sub_83274F70);
PPC_FUNC_IMPL(__imp__sub_83274F70) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x833a01a4
	ctx.lr = 0x83274F78;
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
	// bl 0x83282090
	ctx.lr = 0x83274F94;
	sub_83282090(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x83274fb0
	if (ctx.cr0.eq) goto loc_83274FB0;
	// lis r4,-256
	ctx.r4.s64 = -16777216;
	// li r3,0
	ctx.r3.s64 = 0;
	// ori r4,r4,369
	ctx.r4.u64 = ctx.r4.u64 | 369;
	// bl 0x83282390
	ctx.lr = 0x83274FAC;
	sub_83282390(ctx, base);
	// b 0x83274fdc
	goto loc_83274FDC;
loc_83274FB0:
	// cmpwi cr6,r30,188
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 188, ctx.xer);
	// blt cr6,0x83274fd8
	if (ctx.cr6.lt) goto loc_83274FD8;
	// cmpwi cr6,r30,255
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 255, ctx.xer);
	// bgt cr6,0x83274fd8
	if (ctx.cr6.gt) goto loc_83274FD8;
	// addi r11,r30,-171
	ctx.r11.s64 = ctx.r30.s64 + -171;
	// lwz r10,8380(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8380);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// stw r28,340(r10)
	PPC_STORE_U32(ctx.r10.u32 + 340, ctx.r28.u32);
	// stw r27,344(r10)
	PPC_STORE_U32(ctx.r10.u32 + 344, ctx.r27.u32);
	// stwx r29,r11,r10
	PPC_STORE_U32(ctx.r11.u32 + ctx.r10.u32, ctx.r29.u32);
loc_83274FD8:
	// li r3,0
	ctx.r3.s64 = 0;
loc_83274FDC:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x833a01f4
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83274FE4"))) PPC_WEAK_FUNC(sub_83274FE4);
PPC_FUNC_IMPL(__imp__sub_83274FE4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83274FE8"))) PPC_WEAK_FUNC(sub_83274FE8);
PPC_FUNC_IMPL(__imp__sub_83274FE8) {
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
	// bl 0x83286258
	ctx.lr = 0x83274FF8;
	sub_83286258(ctx, base);
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

__attribute__((alias("__imp__sub_8327500C"))) PPC_WEAK_FUNC(sub_8327500C);
PPC_FUNC_IMPL(__imp__sub_8327500C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83275010"))) PPC_WEAK_FUNC(sub_83275010);
PPC_FUNC_IMPL(__imp__sub_83275010) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,8380(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8380);
	// lwz r5,3416(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 3416);
	// lwz r4,3412(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 3412);
	// lwz r3,0(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// b 0x83286340
	sub_83286340(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83275024"))) PPC_WEAK_FUNC(sub_83275024);
PPC_FUNC_IMPL(__imp__sub_83275024) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83275028"))) PPC_WEAK_FUNC(sub_83275028);
PPC_FUNC_IMPL(__imp__sub_83275028) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x833a01a8
	ctx.lr = 0x83275030;
	__savegprlr_28(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// lwz r4,8388(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8388);
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r11,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r11.u32);
	// mr r29,r7
	ctx.r29.u64 = ctx.r7.u64;
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
	// stw r11,0(r7)
	PPC_STORE_U32(ctx.r7.u32 + 0, ctx.r11.u32);
	// bl 0x832881a0
	ctx.lr = 0x83275060;
	sub_832881A0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x832750d0
	if (!ctx.cr0.eq) goto loc_832750D0;
	// lwz r9,80(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r10,92(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stw r9,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r9.u32);
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
	// stw r10,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r10.u32);
	// lwz r5,0(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// cmpwi cr6,r5,2048
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 2048, ctx.xer);
	// blt cr6,0x832750cc
	if (ctx.cr6.lt) goto loc_832750CC;
	// lwz r4,0(r28)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// lwz r11,15100(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 15100);
	// cmplw cr6,r4,r11
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x832750cc
	if (ctx.cr6.eq) goto loc_832750CC;
	// lwz r11,15096(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 15096);
	// clrlwi. r11,r11,21
	ctx.r11.u64 = ctx.r11.u32 & 0x7FF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x832750cc
	if (!ctx.cr0.eq) goto loc_832750CC;
	// lwz r11,15088(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 15088);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x832750c4
	if (ctx.cr6.eq) goto loc_832750C4;
	// lwz r3,15092(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 15092);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x832750C4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_832750C4:
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// stw r11,15100(r31)
	PPC_STORE_U32(ctx.r31.u32 + 15100, ctx.r11.u32);
loc_832750CC:
	// li r3,0
	ctx.r3.s64 = 0;
loc_832750D0:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x833a01f8
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832750D8"))) PPC_WEAK_FUNC(sub_832750D8);
PPC_FUNC_IMPL(__imp__sub_832750D8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// lwz r4,8388(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8388);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// bl 0x832884a8
	ctx.lr = 0x83275100;
	sub_832884A8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x83275114
	if (!ctx.cr0.eq) goto loc_83275114;
	// lwz r11,15096(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 15096);
	// add r11,r30,r11
	ctx.r11.u64 = ctx.r30.u64 + ctx.r11.u64;
	// stw r11,15096(r31)
	PPC_STORE_U32(ctx.r31.u32 + 15096, ctx.r11.u32);
loc_83275114:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8327512C"))) PPC_WEAK_FUNC(sub_8327512C);
PPC_FUNC_IMPL(__imp__sub_8327512C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83275130"))) PPC_WEAK_FUNC(sub_83275130);
PPC_FUNC_IMPL(__imp__sub_83275130) {
	PPC_FUNC_PROLOGUE();
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// stw r4,15088(r3)
	PPC_STORE_U32(ctx.r3.u32 + 15088, ctx.r4.u32);
	// stw r5,15092(r3)
	PPC_STORE_U32(ctx.r3.u32 + 15092, ctx.r5.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83275144"))) PPC_WEAK_FUNC(sub_83275144);
PPC_FUNC_IMPL(__imp__sub_83275144) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83275148"))) PPC_WEAK_FUNC(sub_83275148);
PPC_FUNC_IMPL(__imp__sub_83275148) {
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
	// lwz r11,3436(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 3436);
	// mr r10,r4
	ctx.r10.u64 = ctx.r4.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x83275184
	if (ctx.cr6.eq) goto loc_83275184;
	// ld r9,2480(r3)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r3.u32 + 2480);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stb r10,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r10.u8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// std r5,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r5.u64);
	// lwz r3,3440(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 3440);
	// std r9,96(r1)
	PPC_STORE_U64(ctx.r1.u32 + 96, ctx.r9.u64);
	// bctrl 
	ctx.lr = 0x83275184;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_83275184:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83275194"))) PPC_WEAK_FUNC(sub_83275194);
PPC_FUNC_IMPL(__imp__sub_83275194) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83275198"))) PPC_WEAK_FUNC(sub_83275198);
PPC_FUNC_IMPL(__imp__sub_83275198) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// li r11,0
	ctx.r11.s64 = 0;
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// ble cr6,0x832751c0
	if (!ctx.cr6.gt) goto loc_832751C0;
	// addi r9,r3,-1
	ctx.r9.s64 = ctx.r3.s64 + -1;
loc_832751A8:
	// lbzu r10,1(r9)
	ea = 1 + ctx.r9.u32;
	ctx.r10.u64 = PPC_LOAD_U8(ea);
	ctx.r9.u32 = ea;
	// cmplwi r10,0
	ctx.cr0.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne 0x832751c8
	if (!ctx.cr0.eq) goto loc_832751C8;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmpw cr6,r11,r4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r4.s32, ctx.xer);
	// blt cr6,0x832751a8
	if (ctx.cr6.lt) goto loc_832751A8;
loc_832751C0:
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
loc_832751C8:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_832751D0"))) PPC_WEAK_FUNC(sub_832751D0);
PPC_FUNC_IMPL(__imp__sub_832751D0) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,8388(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8388);
	// mulli r11,r11,116
	ctx.r11.s64 = ctx.r11.s64 * 116;
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// addi r3,r11,5088
	ctx.r3.s64 = ctx.r11.s64 + 5088;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_832751E4"))) PPC_WEAK_FUNC(sub_832751E4);
PPC_FUNC_IMPL(__imp__sub_832751E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832751E8"))) PPC_WEAK_FUNC(sub_832751E8);
PPC_FUNC_IMPL(__imp__sub_832751E8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r11,24(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8327521C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r5,84(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x832884b0
	ctx.lr = 0x8327522C;
	sub_832884B0(ctx, base);
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
	ctx.lr = 0x83275248;
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

__attribute__((alias("__imp__sub_83275264"))) PPC_WEAK_FUNC(sub_83275264);
PPC_FUNC_IMPL(__imp__sub_83275264) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83275268"))) PPC_WEAK_FUNC(sub_83275268);
PPC_FUNC_IMPL(__imp__sub_83275268) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x833a0194
	ctx.lr = 0x83275270;
	__savegprlr_23(ctx, base);
	// stwu r1,-240(r1)
	ea = -240 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r25,r5
	ctx.r25.u64 = ctx.r5.u64;
	// addi r5,r1,128
	ctx.r5.s64 = ctx.r1.s64 + 128;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r24,r4
	ctx.r24.u64 = ctx.r4.u64;
	// mr r31,r6
	ctx.r31.u64 = ctx.r6.u64;
	// mr r29,r7
	ctx.r29.u64 = ctx.r7.u64;
	// bl 0x83288198
	ctx.lr = 0x83275290;
	sub_83288198(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x832753d4
	if (!ctx.cr0.eq) goto loc_832753D4;
	// lwz r11,132(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// lwz r10,140(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 140);
	// mr r28,r11
	ctx.r28.u64 = ctx.r11.u64;
	// lwz r27,128(r1)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwz r26,136(r1)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r1.u32 + 136);
	// lwz r23,148(r1)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r1.u32 + 148);
	// cmpw cr6,r31,r11
	ctx.cr6.compare<int32_t>(ctx.r31.s32, ctx.r11.s32, ctx.xer);
	// ble cr6,0x832752c4
	if (!ctx.cr6.gt) goto loc_832752C4;
loc_832752BC:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x832753d4
	goto loc_832753D4;
loc_832752C4:
	// cmpwi cr6,r24,1
	ctx.cr6.compare<int32_t>(ctx.r24.s32, 1, ctx.xer);
	// bne cr6,0x83275348
	if (!ctx.cr6.eq) goto loc_83275348;
	// lis r11,-31822
	ctx.r11.s64 = -2085486592;
	// lwz r10,2436(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 2436);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x83275300
	if (ctx.cr6.eq) goto loc_83275300;
	// std r29,112(r1)
	PPC_STORE_U64(ctx.r1.u32 + 112, ctx.r29.u64);
	// rotlwi r11,r10,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// stw r31,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r31.u32);
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// addi r3,r30,5004
	ctx.r3.s64 = ctx.r30.s64 + 5004;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x832752F8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// beq cr6,0x832752bc
	if (ctx.cr6.eq) goto loc_832752BC;
loc_83275300:
	// cmpdi cr6,r29,0
	ctx.cr6.compare<int64_t>(ctx.r29.s64, 0, ctx.xer);
	// blt cr6,0x83275384
	if (ctx.cr6.lt) goto loc_83275384;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x832886f0
	ctx.lr = 0x83275314;
	sub_832886F0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x832752bc
	if (!ctx.cr0.eq) goto loc_832752BC;
	// std r29,96(r1)
	PPC_STORE_U64(ctx.r1.u32 + 96, ctx.r29.u64);
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// stw r27,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r27.u32);
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// stw r31,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r31.u32);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x83288790
	ctx.lr = 0x8327533C;
	sub_83288790(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x83275384
	if (ctx.cr0.eq) goto loc_83275384;
	// b 0x832753d4
	goto loc_832753D4;
loc_83275348:
	// cmpwi cr6,r24,2
	ctx.cr6.compare<int32_t>(ctx.r24.s32, 2, ctx.xer);
	// bne cr6,0x83275384
	if (!ctx.cr6.eq) goto loc_83275384;
	// lis r11,-31822
	ctx.r11.s64 = -2085486592;
	// lwz r10,2436(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 2436);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x83275384
	if (ctx.cr6.eq) goto loc_83275384;
	// std r29,112(r1)
	PPC_STORE_U64(ctx.r1.u32 + 112, ctx.r29.u64);
	// rotlwi r11,r10,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// stw r31,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r31.u32);
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// addi r3,r30,4992
	ctx.r3.s64 = ctx.r30.s64 + 4992;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8327537C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// beq cr6,0x832752bc
	if (ctx.cr6.eq) goto loc_832752BC;
loc_83275384:
	// cmpw cr6,r31,r28
	ctx.cr6.compare<int32_t>(ctx.r31.s32, ctx.r28.s32, ctx.xer);
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bgt cr6,0x8327539c
	if (ctx.cr6.gt) goto loc_8327539C;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// b 0x832753b0
	goto loc_832753B0;
loc_8327539C:
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// bl 0x832884b0
	ctx.lr = 0x832753A4;
	sub_832884B0(ctx, base);
	// subf r5,r28,r31
	ctx.r5.s64 = ctx.r31.s64 - ctx.r28.s64;
	// add r4,r28,r25
	ctx.r4.u64 = ctx.r28.u64 + ctx.r25.u64;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
loc_832753B0:
	// bl 0x832884b0
	ctx.lr = 0x832753B4;
	sub_832884B0(ctx, base);
	// mr r6,r23
	ctx.r6.u64 = ctx.r23.u64;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x832884a0
	ctx.lr = 0x832753C8;
	sub_832884A0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x832753d4
	if (!ctx.cr0.eq) goto loc_832753D4;
	// li r3,1
	ctx.r3.s64 = 1;
loc_832753D4:
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// b 0x833a01e4
	__restgprlr_23(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832753DC"))) PPC_WEAK_FUNC(sub_832753DC);
PPC_FUNC_IMPL(__imp__sub_832753DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832753E0"))) PPC_WEAK_FUNC(sub_832753E0);
PPC_FUNC_IMPL(__imp__sub_832753E0) {
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
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x83285b50
	ctx.lr = 0x83275400;
	sub_83285B50(ctx, base);
	// lwz r4,8396(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8396);
	// cmpwi cr6,r4,8
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 8, ctx.xer);
	// beq cr6,0x83275418
	if (ctx.cr6.eq) goto loc_83275418;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83287b08
	ctx.lr = 0x83275418;
	sub_83287B08(ctx, base);
loc_83275418:
	// lwz r4,8392(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8392);
	// cmpwi cr6,r4,8
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 8, ctx.xer);
	// beq cr6,0x83275430
	if (ctx.cr6.eq) goto loc_83275430;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83287b08
	ctx.lr = 0x83275430;
	sub_83287B08(ctx, base);
loc_83275430:
	// lwz r4,8400(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8400);
	// cmpwi cr6,r4,8
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 8, ctx.xer);
	// beq cr6,0x83275448
	if (ctx.cr6.eq) goto loc_83275448;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83287b08
	ctx.lr = 0x83275448;
	sub_83287B08(ctx, base);
loc_83275448:
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

__attribute__((alias("__imp__sub_8327545C"))) PPC_WEAK_FUNC(sub_8327545C);
PPC_FUNC_IMPL(__imp__sub_8327545C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83275460"))) PPC_WEAK_FUNC(sub_83275460);
PPC_FUNC_IMPL(__imp__sub_83275460) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r4,8396(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8396);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r30,1
	ctx.r30.s64 = 1;
	// cmpwi cr6,r4,8
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 8, ctx.xer);
	// beq cr6,0x83275490
	if (ctx.cr6.eq) goto loc_83275490;
	// bl 0x83287b20
	ctx.lr = 0x8327548C;
	sub_83287B20(ctx, base);
	// clrlwi r30,r3,31
	ctx.r30.u64 = ctx.r3.u32 & 0x1;
loc_83275490:
	// lwz r4,8392(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8392);
	// cmpwi cr6,r4,8
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 8, ctx.xer);
	// beq cr6,0x832754a8
	if (ctx.cr6.eq) goto loc_832754A8;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83287b20
	ctx.lr = 0x832754A4;
	sub_83287B20(ctx, base);
	// and r30,r3,r30
	ctx.r30.u64 = ctx.r3.u64 & ctx.r30.u64;
loc_832754A8:
	// lwz r4,8400(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8400);
	// cmpwi cr6,r4,8
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 8, ctx.xer);
	// beq cr6,0x832754c0
	if (ctx.cr6.eq) goto loc_832754C0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83287b20
	ctx.lr = 0x832754BC;
	sub_83287B20(ctx, base);
	// and r30,r3,r30
	ctx.r30.u64 = ctx.r3.u64 & ctx.r30.u64;
loc_832754C0:
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

__attribute__((alias("__imp__sub_832754DC"))) PPC_WEAK_FUNC(sub_832754DC);
PPC_FUNC_IMPL(__imp__sub_832754DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832754E0"))) PPC_WEAK_FUNC(sub_832754E0);
PPC_FUNC_IMPL(__imp__sub_832754E0) {
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
	// lis r11,8
	ctx.r11.s64 = 524288;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpw cr6,r4,r11
	ctx.cr6.compare<int32_t>(ctx.r4.s32, ctx.r11.s32, ctx.xer);
	// bne cr6,0x83275520
	if (!ctx.cr6.eq) goto loc_83275520;
	// bl 0x83282720
	ctx.lr = 0x83275504;
	sub_83282720(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x83275520
	if (!ctx.cr0.eq) goto loc_83275520;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83282750
	ctx.lr = 0x83275514;
	sub_83282750(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// li r3,1
	ctx.r3.s64 = 1;
	// beq 0x83275524
	if (ctx.cr0.eq) goto loc_83275524;
loc_83275520:
	// li r3,0
	ctx.r3.s64 = 0;
loc_83275524:
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

__attribute__((alias("__imp__sub_83275538"))) PPC_WEAK_FUNC(sub_83275538);
PPC_FUNC_IMPL(__imp__sub_83275538) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x833a01ac
	ctx.lr = 0x83275540;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// lwz r4,8388(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8388);
	// lwz r30,8380(r3)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8380);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x83287b20
	ctx.lr = 0x83275558;
	sub_83287B20(ctx, base);
	// cmpwi cr6,r3,1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 1, ctx.xer);
	// bne cr6,0x83275574
	if (!ctx.cr6.eq) goto loc_83275574;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,64(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 64);
	// bl 0x832753e0
	ctx.lr = 0x8327556C;
	sub_832753E0(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// b 0x83275578
	goto loc_83275578;
loc_83275574:
	// li r11,0
	ctx.r11.s64 = 0;
loc_83275578:
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x83275584
	if (ctx.cr6.eq) goto loc_83275584;
	// stw r11,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r11.u32);
loc_83275584:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x833a01fc
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8327558C"))) PPC_WEAK_FUNC(sub_8327558C);
PPC_FUNC_IMPL(__imp__sub_8327558C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83275590"))) PPC_WEAK_FUNC(sub_83275590);
PPC_FUNC_IMPL(__imp__sub_83275590) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r4,8396(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8396);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r30,0
	ctx.r30.s64 = 0;
	// cmpwi cr6,r4,8
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 8, ctx.xer);
	// beq cr6,0x832755c0
	if (ctx.cr6.eq) goto loc_832755C0;
	// bl 0x83287ae8
	ctx.lr = 0x832755BC;
	sub_83287AE8(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
loc_832755C0:
	// lwz r4,8392(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8392);
	// cmpwi cr6,r4,8
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 8, ctx.xer);
	// beq cr6,0x832755d8
	if (ctx.cr6.eq) goto loc_832755D8;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83287ae8
	ctx.lr = 0x832755D4;
	sub_83287AE8(ctx, base);
	// or r30,r3,r30
	ctx.r30.u64 = ctx.r3.u64 | ctx.r30.u64;
loc_832755D8:
	// lwz r4,8400(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8400);
	// cmpwi cr6,r4,8
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 8, ctx.xer);
	// beq cr6,0x832755f0
	if (ctx.cr6.eq) goto loc_832755F0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83287ae8
	ctx.lr = 0x832755EC;
	sub_83287AE8(ctx, base);
	// or r30,r3,r30
	ctx.r30.u64 = ctx.r3.u64 | ctx.r30.u64;
loc_832755F0:
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

__attribute__((alias("__imp__sub_8327560C"))) PPC_WEAK_FUNC(sub_8327560C);
PPC_FUNC_IMPL(__imp__sub_8327560C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83275610"))) PPC_WEAK_FUNC(sub_83275610);
PPC_FUNC_IMPL(__imp__sub_83275610) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// lwz r4,8396(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8396);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r4,8
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 8, ctx.xer);
	// beq cr6,0x83275640
	if (ctx.cr6.eq) goto loc_83275640;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// bl 0x83287ad0
	ctx.lr = 0x83275640;
	sub_83287AD0(ctx, base);
loc_83275640:
	// lwz r4,8392(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8392);
	// cmpwi cr6,r4,8
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 8, ctx.xer);
	// beq cr6,0x83275658
	if (ctx.cr6.eq) goto loc_83275658;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83287ad0
	ctx.lr = 0x83275658;
	sub_83287AD0(ctx, base);
loc_83275658:
	// lwz r4,8400(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8400);
	// cmpwi cr6,r4,8
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 8, ctx.xer);
	// beq cr6,0x83275670
	if (ctx.cr6.eq) goto loc_83275670;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83287ad0
	ctx.lr = 0x83275670;
	sub_83287AD0(ctx, base);
loc_83275670:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83275688"))) PPC_WEAK_FUNC(sub_83275688);
PPC_FUNC_IMPL(__imp__sub_83275688) {
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
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// lwz r31,2692(r3)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 2692);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bgt cr6,0x832756c0
	if (ctx.cr6.gt) goto loc_832756C0;
	// bl 0x832751d0
	ctx.lr = 0x832756B0;
	sub_832751D0(ctx, base);
	// lwz r11,12(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bgt cr6,0x832756c0
	if (ctx.cr6.gt) goto loc_832756C0;
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
loc_832756C0:
	// cmpw cr6,r11,r31
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r31.s32, ctx.xer);
	// bge cr6,0x832756cc
	if (!ctx.cr6.lt) goto loc_832756CC;
	// mr r31,r11
	ctx.r31.u64 = ctx.r11.u64;
loc_832756CC:
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r10
	ctx.r3.u64 = ctx.r10.u64;
	// bl 0x83287968
	ctx.lr = 0x832756D8;
	sub_83287968(ctx, base);
	// srawi r10,r3,31
	ctx.xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0x7FFFFFFF) != 0);
	ctx.r10.s64 = ctx.r3.s32 >> 31;
	// rlwinm r11,r31,1,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 1) & 0x1;
	// subfc r9,r31,r3
	ctx.xer.ca = ctx.r3.u32 >= ctx.r31.u32;
	ctx.r9.s64 = ctx.r3.s64 - ctx.r31.s64;
	// adde r3,r11,r10
	temp.u8 = (ctx.r11.u32 + ctx.r10.u32 < ctx.r11.u32) | (ctx.r11.u32 + ctx.r10.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r3.u64 = ctx.r11.u64 + ctx.r10.u64 + ctx.xer.ca;
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

__attribute__((alias("__imp__sub_832756FC"))) PPC_WEAK_FUNC(sub_832756FC);
PPC_FUNC_IMPL(__imp__sub_832756FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83275700"))) PPC_WEAK_FUNC(sub_83275700);
PPC_FUNC_IMPL(__imp__sub_83275700) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// lwz r30,8380(r3)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8380);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x83274d00
	ctx.lr = 0x83275724;
	sub_83274D00(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x83275778
	if (ctx.cr0.eq) goto loc_83275778;
	// li r4,80
	ctx.r4.s64 = 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83274d00
	ctx.lr = 0x83275738;
	sub_83274D00(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x83275778
	if (ctx.cr0.eq) goto loc_83275778;
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83287968
	ctx.lr = 0x8327574C;
	sub_83287968(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x83275778
	if (!ctx.cr0.eq) goto loc_83275778;
	// li r4,6
	ctx.r4.s64 = 6;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83285b40
	ctx.lr = 0x83275760;
	sub_83285B40(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x83275778
	if (ctx.cr0.eq) goto loc_83275778;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,6
	ctx.r4.s64 = 6;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83274d40
	ctx.lr = 0x83275778;
	sub_83274D40(ctx, base);
loc_83275778:
	// li r4,5
	ctx.r4.s64 = 5;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83274d00
	ctx.lr = 0x83275784;
	sub_83274D00(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x832757e4
	if (ctx.cr0.eq) goto loc_832757E4;
	// li r4,79
	ctx.r4.s64 = 79;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83274d00
	ctx.lr = 0x83275798;
	sub_83274D00(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x832757e4
	if (ctx.cr0.eq) goto loc_832757E4;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83287968
	ctx.lr = 0x832757AC;
	sub_83287968(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x832757e4
	if (!ctx.cr0.eq) goto loc_832757E4;
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x832757e4
	if (!ctx.cr6.eq) goto loc_832757E4;
	// li r4,7
	ctx.r4.s64 = 7;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83285b40
	ctx.lr = 0x832757CC;
	sub_83285B40(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x832757e4
	if (ctx.cr0.eq) goto loc_832757E4;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,5
	ctx.r4.s64 = 5;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83274d40
	ctx.lr = 0x832757E4;
	sub_83274D40(ctx, base);
loc_832757E4:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_832757FC"))) PPC_WEAK_FUNC(sub_832757FC);
PPC_FUNC_IMPL(__imp__sub_832757FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83275800"))) PPC_WEAK_FUNC(sub_83275800);
PPC_FUNC_IMPL(__imp__sub_83275800) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x833a019c
	ctx.lr = 0x83275808;
	__savegprlr_25(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r31,8380(r3)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8380);
	// mr r26,r4
	ctx.r26.u64 = ctx.r4.u64;
	// mr r25,r5
	ctx.r25.u64 = ctx.r5.u64;
	// li r30,0
	ctx.r30.s64 = 0;
	// li r29,0
	ctx.r29.s64 = 0;
	// li r28,0
	ctx.r28.s64 = 0;
	// lwz r27,0(r31)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
loc_83275828:
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x83288980
	ctx.lr = 0x83275838;
	sub_83288980(ctx, base);
	// lwz r11,88(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// cmpw cr6,r30,r11
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r11.s32, ctx.xer);
	// bgt cr6,0x83275848
	if (ctx.cr6.gt) goto loc_83275848;
	// mr r30,r11
	ctx.r30.u64 = ctx.r11.u64;
loc_83275848:
	// lwz r11,92(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// cmpw cr6,r29,r11
	ctx.cr6.compare<int32_t>(ctx.r29.s32, ctx.r11.s32, ctx.xer);
	// bgt cr6,0x83275858
	if (ctx.cr6.gt) goto loc_83275858;
	// mr r29,r11
	ctx.r29.u64 = ctx.r11.u64;
loc_83275858:
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// cmpwi cr6,r28,3
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 3, ctx.xer);
	// blt cr6,0x83275828
	if (ctx.cr6.lt) goto loc_83275828;
	// stw r29,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r29.u32);
	// stw r30,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r30.u32);
	// stw r30,0(r26)
	PPC_STORE_U32(ctx.r26.u32 + 0, ctx.r30.u32);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// stw r11,0(r25)
	PPC_STORE_U32(ctx.r25.u32 + 0, ctx.r11.u32);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x833a01ec
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83275880"))) PPC_WEAK_FUNC(sub_83275880);
PPC_FUNC_IMPL(__imp__sub_83275880) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x833a01ac
	ctx.lr = 0x83275888;
	__savegprlr_29(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r29,8380(r3)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8380);
	// addi r31,r3,2352
	ctx.r31.s64 = ctx.r3.s64 + 2352;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r30,0(r29)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x83288918
	ctx.lr = 0x832758A4;
	sub_83288918(ctx, base);
	// lwz r11,92(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// beq cr6,0x832758bc
	if (ctx.cr6.eq) goto loc_832758BC;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x832758bc
	if (!ctx.cr6.gt) goto loc_832758BC;
	// stw r11,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r11.u32);
loc_832758BC:
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x83288980
	ctx.lr = 0x832758CC;
	sub_83288980(ctx, base);
	// lwz r11,112(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// beq cr6,0x832758dc
	if (ctx.cr6.eq) goto loc_832758DC;
	// stw r11,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r11.u32);
loc_832758DC:
	// lwz r11,36(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// bne cr6,0x832758f0
	if (!ctx.cr6.eq) goto loc_832758F0;
	// lwz r11,8(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// stw r11,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r11.u32);
loc_832758F0:
	// lwz r11,40(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// bne cr6,0x83275904
	if (!ctx.cr6.eq) goto loc_83275904;
	// lwz r11,4(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// stw r11,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r11.u32);
loc_83275904:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x833a01fc
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8327590C"))) PPC_WEAK_FUNC(sub_8327590C);
PPC_FUNC_IMPL(__imp__sub_8327590C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83275910"))) PPC_WEAK_FUNC(sub_83275910);
PPC_FUNC_IMPL(__imp__sub_83275910) {
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
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r3,5092(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 5092);
	// bl 0x83287ff0
	ctx.lr = 0x83275934;
	sub_83287FF0(ctx, base);
	// lwz r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// ld r3,2472(r31)
	ctx.r3.u64 = PPC_LOAD_U64(ctx.r31.u32 + 2472);
	// bl 0x83287c70
	ctx.lr = 0x83275940;
	sub_83287C70(ctx, base);
	// std r3,2472(r31)
	PPC_STORE_U64(ctx.r31.u32 + 2472, ctx.r3.u64);
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

__attribute__((alias("__imp__sub_83275958"))) PPC_WEAK_FUNC(sub_83275958);
PPC_FUNC_IMPL(__imp__sub_83275958) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lis r11,32767
	ctx.r11.s64 = 2147418112;
	// li r7,68
	ctx.r7.s64 = 68;
	// ori r9,r11,65535
	ctx.r9.u64 = ctx.r11.u64 | 65535;
	// li r8,-1
	ctx.r8.s64 = -1;
	// stw r9,40(r3)
	PPC_STORE_U32(ctx.r3.u32 + 40, ctx.r9.u32);
	// li r11,-1
	ctx.r11.s64 = -1;
	// stw r9,44(r3)
	PPC_STORE_U32(ctx.r3.u32 + 44, ctx.r9.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// clrldi r8,r8,1
	ctx.r8.u64 = ctx.r8.u64 & 0x7FFFFFFFFFFFFFFF;
	// mtctr r7
	ctx.ctr.u64 = ctx.r7.u64;
	// addi r9,r3,68
	ctx.r9.s64 = ctx.r3.s64 + 68;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// stw r10,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r10.u32);
	// stw r10,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r10.u32);
	// addi r9,r9,-4
	ctx.r9.s64 = ctx.r9.s64 + -4;
	// stw r10,64(r3)
	PPC_STORE_U32(ctx.r3.u32 + 64, ctx.r10.u32);
	// std r11,16(r3)
	PPC_STORE_U64(ctx.r3.u32 + 16, ctx.r11.u64);
	// std r8,24(r3)
	PPC_STORE_U64(ctx.r3.u32 + 24, ctx.r8.u64);
	// std r8,32(r3)
	PPC_STORE_U64(ctx.r3.u32 + 32, ctx.r8.u64);
	// stw r11,48(r3)
	PPC_STORE_U32(ctx.r3.u32 + 48, ctx.r11.u32);
	// stw r11,52(r3)
	PPC_STORE_U32(ctx.r3.u32 + 52, ctx.r11.u32);
	// stw r11,56(r3)
	PPC_STORE_U32(ctx.r3.u32 + 56, ctx.r11.u32);
	// stw r11,60(r3)
	PPC_STORE_U32(ctx.r3.u32 + 60, ctx.r11.u32);
loc_832759B4:
	// stwu r10,4(r9)
	ea = 4 + ctx.r9.u32;
	PPC_STORE_U32(ea, ctx.r10.u32);
	ctx.r9.u32 = ea;
	// bdnz 0x832759b4
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_832759B4;
	// stw r10,340(r3)
	PPC_STORE_U32(ctx.r3.u32 + 340, ctx.r10.u32);
	// stw r10,344(r3)
	PPC_STORE_U32(ctx.r3.u32 + 344, ctx.r10.u32);
	// stw r11,348(r3)
	PPC_STORE_U32(ctx.r3.u32 + 348, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_832759CC"))) PPC_WEAK_FUNC(sub_832759CC);
PPC_FUNC_IMPL(__imp__sub_832759CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832759D0"))) PPC_WEAK_FUNC(sub_832759D0);
PPC_FUNC_IMPL(__imp__sub_832759D0) {
	PPC_FUNC_PROLOGUE();
	// b 0x83282390
	sub_83282390(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832759D4"))) PPC_WEAK_FUNC(sub_832759D4);
PPC_FUNC_IMPL(__imp__sub_832759D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832759D8"))) PPC_WEAK_FUNC(sub_832759D8);
PPC_FUNC_IMPL(__imp__sub_832759D8) {
	PPC_FUNC_PROLOGUE();
	// b 0x83286180
	sub_83286180(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832759DC"))) PPC_WEAK_FUNC(sub_832759DC);
PPC_FUNC_IMPL(__imp__sub_832759DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832759E0"))) PPC_WEAK_FUNC(sub_832759E0);
PPC_FUNC_IMPL(__imp__sub_832759E0) {
	PPC_FUNC_PROLOGUE();
	// lis r4,-256
	ctx.r4.s64 = -16777216;
	// ori r4,r4,3339
	ctx.r4.u64 = ctx.r4.u64 | 3339;
	// b 0x83282390
	sub_83282390(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832759EC"))) PPC_WEAK_FUNC(sub_832759EC);
PPC_FUNC_IMPL(__imp__sub_832759EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832759F0"))) PPC_WEAK_FUNC(sub_832759F0);
PPC_FUNC_IMPL(__imp__sub_832759F0) {
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
	ctx.lr = 0x83275A00;
	sub_82D6DA88(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x83275a18
	if (ctx.cr0.eq) goto loc_83275A18;
	// lis r4,-256
	ctx.r4.s64 = -16777216;
	// li r3,0
	ctx.r3.s64 = 0;
	// ori r4,r4,3328
	ctx.r4.u64 = ctx.r4.u64 | 3328;
	// bl 0x832759d0
	ctx.lr = 0x83275A18;
	sub_832759D0(ctx, base);
loc_83275A18:
	// lis r11,-31816
	ctx.r11.s64 = -2085093376;
	// li r3,8
	ctx.r3.s64 = 8;
	// addi r4,r11,10816
	ctx.r4.s64 = ctx.r11.s64 + 10816;
	// bl 0x832862f8
	ctx.lr = 0x83275A28;
	sub_832862F8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// li r3,0
	ctx.r3.s64 = 0;
	// beq 0x83275a44
	if (ctx.cr0.eq) goto loc_83275A44;
	// lis r4,-256
	ctx.r4.s64 = -16777216;
	// ori r4,r4,3329
	ctx.r4.u64 = ctx.r4.u64 | 3329;
	// bl 0x832759d0
	ctx.lr = 0x83275A40;
	sub_832759D0(ctx, base);
	// b 0x83275a50
	goto loc_83275A50;
loc_83275A44:
	// lis r10,-31816
	ctx.r10.s64 = -2085093376;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,10796(r10)
	PPC_STORE_U32(ctx.r10.u32 + 10796, ctx.r11.u32);
loc_83275A50:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83275A60"))) PPC_WEAK_FUNC(sub_83275A60);
PPC_FUNC_IMPL(__imp__sub_83275A60) {
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
	// bl 0x832751d0
	ctx.lr = 0x83275A70;
	sub_832751D0(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x83275a9c
	if (!ctx.cr6.eq) goto loc_83275A9C;
	// lwz r11,16(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x83275a94
	if (!ctx.cr6.eq) goto loc_83275A94;
	// lwz r11,20(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x83275a9c
	if (ctx.cr6.eq) goto loc_83275A9C;
loc_83275A94:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x83275ab4
	goto loc_83275AB4;
loc_83275A9C:
	// lwz r11,12(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// lwz r10,8(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r3,r11,27,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
loc_83275AB4:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83275AC4"))) PPC_WEAK_FUNC(sub_83275AC4);
PPC_FUNC_IMPL(__imp__sub_83275AC4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83275AC8"))) PPC_WEAK_FUNC(sub_83275AC8);
PPC_FUNC_IMPL(__imp__sub_83275AC8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x833a019c
	ctx.lr = 0x83275AD0;
	__savegprlr_25(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// li r4,6
	ctx.r4.s64 = 6;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// mr r26,r5
	ctx.r26.u64 = ctx.r5.u64;
	// mr r25,r6
	ctx.r25.u64 = ctx.r6.u64;
	// mr r28,r7
	ctx.r28.u64 = ctx.r7.u64;
	// bl 0x83274d00
	ctx.lr = 0x83275AF0;
	sub_83274D00(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x83275b00
	if (!ctx.cr0.eq) goto loc_83275B00;
loc_83275AF8:
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x83275c18
	goto loc_83275C18;
loc_83275B00:
	// lwz r31,8380(r27)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r27.u32 + 8380);
	// lwz r11,60(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 60);
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// bne cr6,0x83275b14
	if (!ctx.cr6.eq) goto loc_83275B14;
	// stw r30,60(r31)
	PPC_STORE_U32(ctx.r31.u32 + 60, ctx.r30.u32);
loc_83275B14:
	// lwz r11,52(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// bne cr6,0x83275b24
	if (!ctx.cr6.eq) goto loc_83275B24;
	// stw r30,52(r31)
	PPC_STORE_U32(ctx.r31.u32 + 52, ctx.r30.u32);
loc_83275B24:
	// li r4,30
	ctx.r4.s64 = 30;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x83274d00
	ctx.lr = 0x83275B30;
	sub_83274D00(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// beq cr6,0x83275b78
	if (ctx.cr6.eq) goto loc_83275B78;
	// li r4,55
	ctx.r4.s64 = 55;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x83274d00
	ctx.lr = 0x83275B48;
	sub_83274D00(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x83275b60
	if (ctx.cr0.eq) goto loc_83275B60;
	// lwz r11,44(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 44);
	// cmpw cr6,r30,r11
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x83275b74
	if (ctx.cr6.lt) goto loc_83275B74;
	// b 0x83275b78
	goto loc_83275B78;
loc_83275B60:
	// lwz r11,52(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	// subf r11,r30,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r30.s64;
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm. r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x83275b78
	if (ctx.cr0.eq) goto loc_83275B78;
loc_83275B74:
	// stw r29,60(r31)
	PPC_STORE_U32(ctx.r31.u32 + 60, ctx.r29.u32);
loc_83275B78:
	// lwz r11,60(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 60);
	// stw r30,44(r31)
	PPC_STORE_U32(ctx.r31.u32 + 44, ctx.r30.u32);
	// cmpw cr6,r11,r30
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r30.s32, ctx.xer);
	// bne cr6,0x83275af8
	if (!ctx.cr6.eq) goto loc_83275AF8;
	// li r4,90
	ctx.r4.s64 = 90;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x83274d00
	ctx.lr = 0x83275B94;
	sub_83274D00(ctx, base);
	// cmpwi cr6,r3,1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 1, ctx.xer);
	// bne cr6,0x83275bd0
	if (!ctx.cr6.eq) goto loc_83275BD0;
	// ld r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r31.u32 + 16);
	// cmpdi cr6,r11,-1
	ctx.cr6.compare<int64_t>(ctx.r11.s64, -1, ctx.xer);
	// beq cr6,0x83275af8
	if (ctx.cr6.eq) goto loc_83275AF8;
	// li r10,-1
	ctx.r10.s64 = -1;
	// ld r9,32(r31)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r31.u32 + 32);
	// clrldi r10,r10,1
	ctx.r10.u64 = ctx.r10.u64 & 0x7FFFFFFFFFFFFFFF;
	// cmpd cr6,r9,r10
	ctx.cr6.compare<int64_t>(ctx.r9.s64, ctx.r10.s64, ctx.xer);
	// bne cr6,0x83275bd0
	if (!ctx.cr6.eq) goto loc_83275BD0;
	// cmpdi cr6,r28,-1
	ctx.cr6.compare<int64_t>(ctx.r28.s64, -1, ctx.xer);
	// beq cr6,0x83275af8
	if (ctx.cr6.eq) goto loc_83275AF8;
	// addi r10,r28,3103
	ctx.r10.s64 = ctx.r28.s64 + 3103;
	// cmpd cr6,r10,r11
	ctx.cr6.compare<int64_t>(ctx.r10.s64, ctx.r11.s64, ctx.xer);
	// blt cr6,0x83275af8
	if (ctx.cr6.lt) goto loc_83275AF8;
loc_83275BD0:
	// cmpdi cr6,r28,0
	ctx.cr6.compare<int64_t>(ctx.r28.s64, 0, ctx.xer);
	// blt cr6,0x83275c00
	if (ctx.cr6.lt) goto loc_83275C00;
	// ld r11,24(r31)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r31.u32 + 24);
	// cmpd cr6,r28,r11
	ctx.cr6.compare<int64_t>(ctx.r28.s64, ctx.r11.s64, ctx.xer);
	// bge cr6,0x83275be8
	if (!ctx.cr6.lt) goto loc_83275BE8;
	// mr r11,r28
	ctx.r11.u64 = ctx.r28.u64;
loc_83275BE8:
	// std r11,24(r31)
	PPC_STORE_U64(ctx.r31.u32 + 24, ctx.r11.u64);
	// ld r11,32(r31)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r31.u32 + 32);
	// cmpd cr6,r28,r11
	ctx.cr6.compare<int64_t>(ctx.r28.s64, ctx.r11.s64, ctx.xer);
	// bge cr6,0x83275bfc
	if (!ctx.cr6.lt) goto loc_83275BFC;
	// mr r11,r28
	ctx.r11.u64 = ctx.r28.u64;
loc_83275BFC:
	// std r11,32(r31)
	PPC_STORE_U64(ctx.r31.u32 + 32, ctx.r11.u64);
loc_83275C00:
	// mr r7,r28
	ctx.r7.u64 = ctx.r28.u64;
	// lwz r4,8396(r27)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r27.u32 + 8396);
	// mr r6,r25
	ctx.r6.u64 = ctx.r25.u64;
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x83275268
	ctx.lr = 0x83275C18;
	sub_83275268(ctx, base);
loc_83275C18:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x833a01ec
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83275C20"))) PPC_WEAK_FUNC(sub_83275C20);
PPC_FUNC_IMPL(__imp__sub_83275C20) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// li r4,59
	ctx.r4.s64 = 59;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x83274d00
	ctx.lr = 0x83275C44;
	sub_83274D00(ctx, base);
	// cmpwi cr6,r3,1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 1, ctx.xer);
	// beq cr6,0x83275c74
	if (ctx.cr6.eq) goto loc_83275C74;
	// cmpwi cr6,r3,2
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 2, ctx.xer);
	// bne cr6,0x83275c74
	if (!ctx.cr6.eq) goto loc_83275C74;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83275800
	ctx.lr = 0x83275C64;
	sub_83275800(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// li r3,2
	ctx.r3.s64 = 2;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// bge cr6,0x83275c78
	if (!ctx.cr6.lt) goto loc_83275C78;
loc_83275C74:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
loc_83275C78:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83275C90"))) PPC_WEAK_FUNC(sub_83275C90);
PPC_FUNC_IMPL(__imp__sub_83275C90) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x833a01ac
	ctx.lr = 0x83275C98;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// lwz r11,36(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x83275CBC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpw cr6,r3,r31
	ctx.cr6.compare<int32_t>(ctx.r3.s32, ctx.r31.s32, ctx.xer);
	// bge cr6,0x83275ccc
	if (!ctx.cr6.lt) goto loc_83275CCC;
loc_83275CC4:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x83275d18
	goto loc_83275D18;
loc_83275CCC:
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x832751e8
	ctx.lr = 0x83275CDC;
	sub_832751E8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x83275cc4
	if (ctx.cr0.eq) goto loc_83275CC4;
	// subf. r31,r3,r31
	ctx.r31.s64 = ctx.r31.s64 - ctx.r3.s64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// ble 0x83275d14
	if (!ctx.cr0.gt) goto loc_83275D14;
	// add r4,r3,r29
	ctx.r4.u64 = ctx.r3.u64 + ctx.r29.u64;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x832751e8
	ctx.lr = 0x83275CFC;
	sub_832751E8(ctx, base);
	// cmpw cr6,r3,r31
	ctx.cr6.compare<int32_t>(ctx.r3.s32, ctx.r31.s32, ctx.xer);
	// beq cr6,0x83275d14
	if (ctx.cr6.eq) goto loc_83275D14;
	// lis r10,-31816
	ctx.r10.s64 = -2085093376;
	// lwz r11,10796(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 10796);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,10796(r10)
	PPC_STORE_U32(ctx.r10.u32 + 10796, ctx.r11.u32);
loc_83275D14:
	// li r3,1
	ctx.r3.s64 = 1;
loc_83275D18:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x833a01fc
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83275D20"))) PPC_WEAK_FUNC(sub_83275D20);
PPC_FUNC_IMPL(__imp__sub_83275D20) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x833a019c
	ctx.lr = 0x83275D28;
	__savegprlr_25(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r28,8380(r3)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8380);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r29,8388(r3)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8388);
	// mr r26,r5
	ctx.r26.u64 = ctx.r5.u64;
	// mr r25,r6
	ctx.r25.u64 = ctx.r6.u64;
	// addi r31,r3,8372
	ctx.r31.s64 = ctx.r3.s64 + 8372;
	// cmpwi cr6,r5,4
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 4, ctx.xer);
	// blt cr6,0x83275da0
	if (ctx.cr6.lt) goto loc_83275DA0;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// bl 0x83288a58
	ctx.lr = 0x83275D54;
	sub_83288A58(ctx, base);
	// lis r11,8
	ctx.r11.s64 = 524288;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// cmpw cr6,r3,r11
	ctx.cr6.compare<int32_t>(ctx.r3.s32, ctx.r11.s32, ctx.xer);
	// bne cr6,0x83275d8c
	if (!ctx.cr6.eq) goto loc_83275D8C;
	// lwz r11,32(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bge cr6,0x83275d84
	if (!ctx.cr6.lt) goto loc_83275D84;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x83287958
	ctx.lr = 0x83275D7C;
	sub_83287958(ctx, base);
	// addi r11,r3,4
	ctx.r11.s64 = ctx.r3.s64 + 4;
	// stw r11,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r11.u32);
loc_83275D84:
	// li r11,1
	ctx.r11.s64 = 1;
	// b 0x83275d98
	goto loc_83275D98;
loc_83275D8C:
	// cmpwi cr6,r27,0
	ctx.cr6.compare<int32_t>(ctx.r27.s32, 0, ctx.xer);
	// beq cr6,0x83275da4
	if (ctx.cr6.eq) goto loc_83275DA4;
	// li r11,0
	ctx.r11.s64 = 0;
loc_83275D98:
	// stw r11,64(r28)
	PPC_STORE_U32(ctx.r28.u32 + 64, ctx.r11.u32);
	// b 0x83275da4
	goto loc_83275DA4;
loc_83275DA0:
	// li r27,0
	ctx.r27.s64 = 0;
loc_83275DA4:
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x832754e0
	ctx.lr = 0x83275DB0;
	sub_832754E0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x83275dcc
	if (ctx.cr0.eq) goto loc_83275DCC;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x832753e0
	ctx.lr = 0x83275DC4;
	sub_832753E0(ctx, base);
loc_83275DC4:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x83275e20
	goto loc_83275E20;
loc_83275DCC:
	// cmpwi cr6,r25,4
	ctx.cr6.compare<int32_t>(ctx.r25.s32, 4, ctx.xer);
	// bge cr6,0x83275dec
	if (!ctx.cr6.lt) goto loc_83275DEC;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x83275538
	ctx.lr = 0x83275DE0;
	sub_83275538(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x83275dc4
	if (!ctx.cr6.eq) goto loc_83275DC4;
loc_83275DEC:
	// cmpwi cr6,r26,64
	ctx.cr6.compare<int32_t>(ctx.r26.s32, 64, ctx.xer);
	// bge cr6,0x83275e1c
	if (!ctx.cr6.lt) goto loc_83275E1C;
	// lis r11,1
	ctx.r11.s64 = 65536;
	// cmpw cr6,r27,r11
	ctx.cr6.compare<int32_t>(ctx.r27.s32, ctx.r11.s32, ctx.xer);
	// beq cr6,0x83275e0c
	if (ctx.cr6.eq) goto loc_83275E0C;
	// lis r11,4
	ctx.r11.s64 = 262144;
	// cmpw cr6,r27,r11
	ctx.cr6.compare<int32_t>(ctx.r27.s32, ctx.r11.s32, ctx.xer);
	// bne cr6,0x83275e1c
	if (!ctx.cr6.eq) goto loc_83275E1C;
loc_83275E0C:
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x83275538
	ctx.lr = 0x83275E18;
	sub_83275538(ctx, base);
	// b 0x83275dc4
	goto loc_83275DC4;
loc_83275E1C:
	// li r3,1
	ctx.r3.s64 = 1;
loc_83275E20:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x833a01ec
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83275E28"))) PPC_WEAK_FUNC(sub_83275E28);
PPC_FUNC_IMPL(__imp__sub_83275E28) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// bl 0x83275590
	ctx.lr = 0x83275E44;
	sub_83275590(ctx, base);
	// cmpwi cr6,r3,1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 1, ctx.xer);
	// beq cr6,0x83275e84
	if (ctx.cr6.eq) goto loc_83275E84;
	// lwz r30,8388(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8388);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x83287ae8
	ctx.lr = 0x83275E5C;
	sub_83287AE8(ctx, base);
	// cmpwi cr6,r3,1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 1, ctx.xer);
	// bne cr6,0x83275e84
	if (!ctx.cr6.eq) goto loc_83275E84;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83275688
	ctx.lr = 0x83275E70;
	sub_83275688(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x83275e84
	if (ctx.cr0.eq) goto loc_83275E84;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83275610
	ctx.lr = 0x83275E84;
	sub_83275610(ctx, base);
loc_83275E84:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83275E9C"))) PPC_WEAK_FUNC(sub_83275E9C);
PPC_FUNC_IMPL(__imp__sub_83275E9C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83275EA0"))) PPC_WEAK_FUNC(sub_83275EA0);
PPC_FUNC_IMPL(__imp__sub_83275EA0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x833a01ac
	ctx.lr = 0x83275EA8;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r29,r3,8920
	ctx.r29.s64 = ctx.r3.s64 + 8920;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r29,8380(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8380, ctx.r29.u32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x83275958
	ctx.lr = 0x83275EC0;
	sub_83275958(ctx, base);
	// bl 0x832862c8
	ctx.lr = 0x83275EC4;
	sub_832862C8(ctx, base);
	// mr. r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// bne 0x83275ee0
	if (!ctx.cr0.eq) goto loc_83275EE0;
	// lis r4,-256
	ctx.r4.s64 = -16777216;
	// ori r4,r4,3336
	ctx.r4.u64 = ctx.r4.u64 | 3336;
loc_83275ED4:
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x83282390
	ctx.lr = 0x83275EDC;
	sub_83282390(ctx, base);
	// b 0x83275f2c
	goto loc_83275F2C;
loc_83275EE0:
	// lis r11,-31961
	ctx.r11.s64 = -2094596096;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// addi r4,r11,22992
	ctx.r4.s64 = ctx.r11.s64 + 22992;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x83286060
	ctx.lr = 0x83275EF4;
	sub_83286060(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x83275f10
	if (ctx.cr0.eq) goto loc_83275F10;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x832759d8
	ctx.lr = 0x83275F04;
	sub_832759D8(ctx, base);
	// lis r4,-256
	ctx.r4.s64 = -16777216;
	// ori r4,r4,3337
	ctx.r4.u64 = ctx.r4.u64 | 3337;
	// b 0x83275ed4
	goto loc_83275ED4;
loc_83275F10:
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r30,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r30.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r11,15088(r31)
	PPC_STORE_U32(ctx.r31.u32 + 15088, ctx.r11.u32);
	// stw r11,15092(r31)
	PPC_STORE_U32(ctx.r31.u32 + 15092, ctx.r11.u32);
	// stw r11,15096(r31)
	PPC_STORE_U32(ctx.r31.u32 + 15096, ctx.r11.u32);
	// stw r11,15100(r31)
	PPC_STORE_U32(ctx.r31.u32 + 15100, ctx.r11.u32);
loc_83275F2C:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x833a01fc
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83275F34"))) PPC_WEAK_FUNC(sub_83275F34);
PPC_FUNC_IMPL(__imp__sub_83275F34) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83275F38"))) PPC_WEAK_FUNC(sub_83275F38);
PPC_FUNC_IMPL(__imp__sub_83275F38) {
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
	// lwz r11,8380(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8380);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r3,0(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// bl 0x832759d8
	ctx.lr = 0x83275F58;
	sub_832759D8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x83275f74
	if (ctx.cr0.eq) goto loc_83275F74;
	// lis r4,-256
	ctx.r4.s64 = -16777216;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// ori r4,r4,3338
	ctx.r4.u64 = ctx.r4.u64 | 3338;
	// bl 0x83282390
	ctx.lr = 0x83275F70;
	sub_83282390(ctx, base);
	// b 0x83275f78
	goto loc_83275F78;
loc_83275F74:
	// li r3,0
	ctx.r3.s64 = 0;
loc_83275F78:
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

__attribute__((alias("__imp__sub_83275F8C"))) PPC_WEAK_FUNC(sub_83275F8C);
PPC_FUNC_IMPL(__imp__sub_83275F8C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83275F90"))) PPC_WEAK_FUNC(sub_83275F90);
PPC_FUNC_IMPL(__imp__sub_83275F90) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x833a01a4
	ctx.lr = 0x83275F98;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// stw r11,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r11.u32);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// lwz r4,44(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 44);
	// addi r11,r4,3
	ctx.r11.s64 = ctx.r4.s64 + 3;
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// mr r27,r6
	ctx.r27.u64 = ctx.r6.u64;
	// cmpw cr6,r5,r11
	ctx.cr6.compare<int32_t>(ctx.r5.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x83275fdc
	if (ctx.cr6.lt) goto loc_83275FDC;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x83275198
	ctx.lr = 0x83275FCC;
	sub_83275198(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x83275fdc
	if (ctx.cr0.eq) goto loc_83275FDC;
	// stw r4,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r4.u32);
	// b 0x83276064
	goto loc_83276064;
loc_83275FDC:
	// li r30,0
	ctx.r30.s64 = 0;
	// b 0x83276004
	goto loc_83276004;
loc_83275FE4:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x83288a58
	ctx.lr = 0x83275FEC;
	sub_83288A58(ctx, base);
	// andis. r11,r3,13
	ctx.r11.u64 = ctx.r3.u64 & 851968;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// cmpwi r11,0
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x83276060
	if (!ctx.cr0.eq) goto loc_83276060;
	// addi r31,r31,-1
	ctx.r31.s64 = ctx.r31.s64 + -1;
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
loc_83276004:
	// cmpwi cr6,r31,4
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 4, ctx.xer);
	// bge cr6,0x83275fe4
	if (!ctx.cr6.lt) goto loc_83275FE4;
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// ble cr6,0x83276060
	if (!ctx.cr6.gt) goto loc_83276060;
	// cmpwi cr6,r31,4
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 4, ctx.xer);
	// bge cr6,0x83276038
	if (!ctx.cr6.lt) goto loc_83276038;
	// add r4,r29,r31
	ctx.r4.u64 = ctx.r29.u64 + ctx.r31.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x83275a60
	ctx.lr = 0x83276028;
	sub_83275A60(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x83276038
	if (ctx.cr0.eq) goto loc_83276038;
	// add r30,r30,r31
	ctx.r30.u64 = ctx.r30.u64 + ctx.r31.u64;
	// li r31,0
	ctx.r31.s64 = 0;
loc_83276038:
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// ble cr6,0x83276060
	if (!ctx.cr6.gt) goto loc_83276060;
	// cmpwi cr6,r31,4
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 4, ctx.xer);
	// bge cr6,0x83276060
	if (!ctx.cr6.lt) goto loc_83276060;
	// li r4,85
	ctx.r4.s64 = 85;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x83274d00
	ctx.lr = 0x83276054;
	sub_83274D00(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x83276060
	if (ctx.cr0.eq) goto loc_83276060;
	// add r30,r30,r31
	ctx.r30.u64 = ctx.r30.u64 + ctx.r31.u64;
loc_83276060:
	// stw r30,0(r27)
	PPC_STORE_U32(ctx.r27.u32 + 0, ctx.r30.u32);
loc_83276064:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x833a01f4
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8327606C"))) PPC_WEAK_FUNC(sub_8327606C);
PPC_FUNC_IMPL(__imp__sub_8327606C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83276070"))) PPC_WEAK_FUNC(sub_83276070);
PPC_FUNC_IMPL(__imp__sub_83276070) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x833a01a8
	ctx.lr = 0x83276078;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// mr r5,r8
	ctx.r5.u64 = ctx.r8.u64;
	// mr r4,r7
	ctx.r4.u64 = ctx.r7.u64;
	// mr r29,r6
	ctx.r29.u64 = ctx.r6.u64;
	// bl 0x83275c90
	ctx.lr = 0x83276094;
	sub_83275C90(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 1, ctx.xer);
	// bne cr6,0x832760b8
	if (!ctx.cr6.eq) goto loc_832760B8;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x832760b8
	if (ctx.cr6.eq) goto loc_832760B8;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mtctr r31
	ctx.ctr.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bctrl 
	ctx.lr = 0x832760B8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_832760B8:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x833a01f8
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832760C4"))) PPC_WEAK_FUNC(sub_832760C4);
PPC_FUNC_IMPL(__imp__sub_832760C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832760C8"))) PPC_WEAK_FUNC(sub_832760C8);
PPC_FUNC_IMPL(__imp__sub_832760C8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x833a019c
	ctx.lr = 0x832760D0;
	__savegprlr_25(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// li r4,5
	ctx.r4.s64 = 5;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r27,r5
	ctx.r27.u64 = ctx.r5.u64;
	// mr r25,r6
	ctx.r25.u64 = ctx.r6.u64;
	// mr r26,r7
	ctx.r26.u64 = ctx.r7.u64;
	// bl 0x83274d00
	ctx.lr = 0x832760F0;
	sub_83274D00(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x83276100
	if (!ctx.cr0.eq) goto loc_83276100;
loc_832760F8:
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x83276258
	goto loc_83276258;
loc_83276100:
	// lwz r31,8380(r30)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8380);
	// lwz r11,56(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// bne cr6,0x8327614c
	if (!ctx.cr6.eq) goto loc_8327614C;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x83275c20
	ctx.lr = 0x8327611C;
	sub_83275C20(ctx, base);
	// stw r3,56(r31)
	PPC_STORE_U32(ctx.r31.u32 + 56, ctx.r3.u32);
	// li r5,1
	ctx.r5.s64 = 1;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x83288980
	ctx.lr = 0x83276130;
	sub_83288980(ctx, base);
	// lwz r11,92(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// bne cr6,0x8327614c
	if (!ctx.cr6.eq) goto loc_8327614C;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,73
	ctx.r4.s64 = 73;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x83274d40
	ctx.lr = 0x8327614C;
	sub_83274D40(ctx, base);
loc_8327614C:
	// lwz r11,48(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// bne cr6,0x8327615c
	if (!ctx.cr6.eq) goto loc_8327615C;
	// stw r29,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r29.u32);
loc_8327615C:
	// li r4,29
	ctx.r4.s64 = 29;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x83274d00
	ctx.lr = 0x83276168;
	sub_83274D00(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// beq cr6,0x83276204
	if (ctx.cr6.eq) goto loc_83276204;
	// li r4,55
	ctx.r4.s64 = 55;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x83274d00
	ctx.lr = 0x83276180;
	sub_83274D00(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x83276198
	if (ctx.cr0.eq) goto loc_83276198;
	// lwz r11,40(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// cmpw cr6,r29,r11
	ctx.cr6.compare<int32_t>(ctx.r29.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x832761ac
	if (ctx.cr6.lt) goto loc_832761AC;
	// b 0x83276204
	goto loc_83276204;
loc_83276198:
	// lwz r11,48(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// subf r11,r29,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r29.s64;
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm. r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x83276204
	if (ctx.cr0.eq) goto loc_83276204;
loc_832761AC:
	// lwz r11,56(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// cmpw cr6,r11,r28
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r28.s32, ctx.xer);
	// beq cr6,0x83276204
	if (ctx.cr6.eq) goto loc_83276204;
	// cmpwi cr6,r25,4
	ctx.cr6.compare<int32_t>(ctx.r25.s32, 4, ctx.xer);
	// blt cr6,0x83276204
	if (ctx.cr6.lt) goto loc_83276204;
	// lbz r11,0(r27)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r27.u32 + 0);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x83276204
	if (!ctx.cr0.eq) goto loc_83276204;
	// lbz r11,1(r27)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r27.u32 + 1);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x83276204
	if (!ctx.cr0.eq) goto loc_83276204;
	// lbz r11,2(r27)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r27.u32 + 2);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// bne cr6,0x83276204
	if (!ctx.cr6.eq) goto loc_83276204;
	// lbz r11,3(r27)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r27.u32 + 3);
	// cmplwi cr6,r11,179
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 179, ctx.xer);
	// beq cr6,0x83276200
	if (ctx.cr6.eq) goto loc_83276200;
	// addi r11,r11,-184
	ctx.r11.s64 = ctx.r11.s64 + -184;
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm. r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x83276204
	if (ctx.cr0.eq) goto loc_83276204;
loc_83276200:
	// stw r28,56(r31)
	PPC_STORE_U32(ctx.r31.u32 + 56, ctx.r28.u32);
loc_83276204:
	// lwz r11,56(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// stw r29,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r29.u32);
	// cmpw cr6,r11,r29
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r29.s32, ctx.xer);
	// bne cr6,0x832760f8
	if (!ctx.cr6.eq) goto loc_832760F8;
	// li r4,90
	ctx.r4.s64 = 90;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x83274d00
	ctx.lr = 0x83276220;
	sub_83274D00(ctx, base);
	// cmpwi cr6,r3,1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 1, ctx.xer);
	// bne cr6,0x83276240
	if (!ctx.cr6.eq) goto loc_83276240;
	// ld r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r31.u32 + 16);
	// cmpdi cr6,r11,-1
	ctx.cr6.compare<int64_t>(ctx.r11.s64, -1, ctx.xer);
	// bne cr6,0x83276240
	if (!ctx.cr6.eq) goto loc_83276240;
	// cmpdi cr6,r26,0
	ctx.cr6.compare<int64_t>(ctx.r26.s64, 0, ctx.xer);
	// blt cr6,0x83276240
	if (ctx.cr6.lt) goto loc_83276240;
	// std r26,16(r31)
	PPC_STORE_U64(ctx.r31.u32 + 16, ctx.r26.u64);
loc_83276240:
	// mr r7,r26
	ctx.r7.u64 = ctx.r26.u64;
	// lwz r4,8392(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8392);
	// mr r6,r25
	ctx.r6.u64 = ctx.r25.u64;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x83275268
	ctx.lr = 0x83276258;
	sub_83275268(ctx, base);
loc_83276258:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x833a01ec
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83276260"))) PPC_WEAK_FUNC(sub_83276260);
PPC_FUNC_IMPL(__imp__sub_83276260) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x833a019c
	ctx.lr = 0x83276268;
	__savegprlr_25(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// lwz r4,8400(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8400);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r27,r5
	ctx.r27.u64 = ctx.r5.u64;
	// mr r26,r6
	ctx.r26.u64 = ctx.r6.u64;
	// cmpwi cr6,r4,8
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 8, ctx.xer);
	// bne cr6,0x83276290
	if (!ctx.cr6.eq) goto loc_83276290;
loc_83276288:
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x83276304
	goto loc_83276304;
loc_83276290:
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83287740
	ctx.lr = 0x832762A0;
	sub_83287740(ctx, base);
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// lwz r29,84(r1)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r28,88(r1)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// lwz r25,92(r1)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// beq cr6,0x83276288
	if (ctx.cr6.eq) goto loc_83276288;
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// bl 0x83275c90
	ctx.lr = 0x832762C4;
	sub_83275C90(ctx, base);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 1, ctx.xer);
	// bne cr6,0x83276300
	if (!ctx.cr6.eq) goto loc_83276300;
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x832762e8
	if (ctx.cr6.eq) goto loc_832762E8;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mtctr r29
	ctx.ctr.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bctrl 
	ctx.lr = 0x832762E8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_832762E8:
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// beq cr6,0x83276300
	if (ctx.cr6.eq) goto loc_83276300;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mtctr r28
	ctx.ctr.u64 = ctx.r28.u64;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bctrl 
	ctx.lr = 0x83276300;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_83276300:
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
loc_83276304:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x833a01ec
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8327630C"))) PPC_WEAK_FUNC(sub_8327630C);
PPC_FUNC_IMPL(__imp__sub_8327630C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83276310"))) PPC_WEAK_FUNC(sub_83276310);
PPC_FUNC_IMPL(__imp__sub_83276310) {
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
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x83275800
	ctx.lr = 0x83276330;
	sub_83275800(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83275e28
	ctx.lr = 0x83276338;
	sub_83275E28(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83275880
	ctx.lr = 0x83276340;
	sub_83275880(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83275700
	ctx.lr = 0x83276348;
	sub_83275700(ctx, base);
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

__attribute__((alias("__imp__sub_8327635C"))) PPC_WEAK_FUNC(sub_8327635C);
PPC_FUNC_IMPL(__imp__sub_8327635C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83276360"))) PPC_WEAK_FUNC(sub_83276360);
PPC_FUNC_IMPL(__imp__sub_83276360) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x833a0194
	ctx.lr = 0x83276368;
	__savegprlr_23(ctx, base);
	// stwu r1,-256(r1)
	ea = -256 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r28,0
	ctx.r28.s64 = 0;
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// stw r28,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r28.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r28,0(r7)
	PPC_STORE_U32(ctx.r7.u32 + 0, ctx.r28.u32);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// lwz r30,8380(r3)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8380);
	// mr r26,r5
	ctx.r26.u64 = ctx.r5.u64;
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r25,r6
	ctx.r25.u64 = ctx.r6.u64;
	// mr r31,r7
	ctx.r31.u64 = ctx.r7.u64;
	// mr r24,r28
	ctx.r24.u64 = ctx.r28.u64;
	// bl 0x832889e0
	ctx.lr = 0x832763A0;
	sub_832889E0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x832763bc
	if (ctx.cr0.eq) goto loc_832763BC;
	// lis r4,-256
	ctx.r4.s64 = -16777216;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// ori r4,r4,3334
	ctx.r4.u64 = ctx.r4.u64 | 3334;
	// bl 0x83282390
	ctx.lr = 0x832763B8;
	sub_83282390(ctx, base);
	// mr r24,r3
	ctx.r24.u64 = ctx.r3.u64;
loc_832763BC:
	// lwz r6,96(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// lwz r11,116(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// addic. r10,r6,-188
	ctx.xer.ca = ctx.r6.u32 > 187;
	ctx.r10.s64 = ctx.r6.s64 + -188;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// mr r23,r11
	ctx.r23.u64 = ctx.r11.u64;
	// blt 0x832764b8
	if (ctx.cr0.lt) goto loc_832764B8;
	// cmpwi cr6,r10,68
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 68, ctx.xer);
	// bge cr6,0x832764b8
	if (!ctx.cr6.lt) goto loc_832764B8;
	// lwz r9,100(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// blt cr6,0x83276408
	if (ctx.cr6.lt) goto loc_83276408;
	// cmpwi cr6,r9,4
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 4, ctx.xer);
	// bge cr6,0x83276408
	if (!ctx.cr6.lt) goto loc_83276408;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bge cr6,0x83276400
	if (!ctx.cr6.lt) goto loc_83276400;
	// lis r4,-256
	ctx.r4.s64 = -16777216;
	// ori r4,r4,3342
	ctx.r4.u64 = ctx.r4.u64 | 3342;
	// b 0x832764c8
	goto loc_832764C8;
loc_83276400:
	// bne cr6,0x83276418
	if (!ctx.cr6.eq) goto loc_83276418;
	// stw r28,0(r25)
	PPC_STORE_U32(ctx.r25.u32 + 0, ctx.r28.u32);
loc_83276408:
	// li r11,1
	ctx.r11.s64 = 1;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// b 0x832764d0
	goto loc_832764D0;
loc_83276418:
	// cmpw cr6,r26,r11
	ctx.cr6.compare<int32_t>(ctx.r26.s32, ctx.r11.s32, ctx.xer);
	// bge cr6,0x83276434
	if (!ctx.cr6.lt) goto loc_83276434;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x83275538
	ctx.lr = 0x8327642C;
	sub_83275538(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x832764d0
	goto loc_832764D0;
loc_83276434:
	// addi r10,r10,17
	ctx.r10.s64 = ctx.r10.s64 + 17;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r3,r10,r30
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r30.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x83276460
	if (ctx.cr6.eq) goto loc_83276460;
	// mr r8,r11
	ctx.r8.u64 = ctx.r11.u64;
	// lwz r5,344(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + 344);
	// mr r7,r27
	ctx.r7.u64 = ctx.r27.u64;
	// lwz r4,340(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 340);
	// bl 0x83276070
	ctx.lr = 0x8327645C;
	sub_83276070(ctx, base);
	// b 0x83276490
	goto loc_83276490;
loc_83276460:
	// lis r10,-32219
	ctx.r10.s64 = -2111504384;
	// ld r7,80(r1)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// rlwinm r9,r9,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r4,104(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// addi r10,r10,16720
	ctx.r10.s64 = ctx.r10.s64 + 16720;
	// mr r6,r11
	ctx.r6.u64 = ctx.r11.u64;
	// addi r8,r1,128
	ctx.r8.s64 = ctx.r1.s64 + 128;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwzx r11,r9,r10
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r10.u32);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x83276490;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_83276490:
	// rotlwi r11,r3,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r3.u32, 0);
	// stw r3,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r3.u32);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// blt cr6,0x832764b0
	if (ctx.cr6.lt) goto loc_832764B0;
	// beq cr6,0x832764ac
	if (ctx.cr6.eq) goto loc_832764AC;
	// mr r24,r11
	ctx.r24.u64 = ctx.r11.u64;
	// b 0x832764b0
	goto loc_832764B0;
loc_832764AC:
	// stw r23,0(r25)
	PPC_STORE_U32(ctx.r25.u32 + 0, ctx.r23.u32);
loc_832764B0:
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// b 0x832764d0
	goto loc_832764D0;
loc_832764B8:
	// li r11,1
	ctx.r11.s64 = 1;
	// lis r4,-256
	ctx.r4.s64 = -16777216;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// ori r4,r4,3343
	ctx.r4.u64 = ctx.r4.u64 | 3343;
loc_832764C8:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x83282390
	ctx.lr = 0x832764D0;
	sub_83282390(ctx, base);
loc_832764D0:
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// b 0x833a01e4
	__restgprlr_23(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832764D8"))) PPC_WEAK_FUNC(sub_832764D8);
PPC_FUNC_IMPL(__imp__sub_832764D8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x833a01a8
	ctx.lr = 0x832764E0;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// mr r29,r6
	ctx.r29.u64 = ctx.r6.u64;
	// bl 0x83289290
	ctx.lr = 0x832764FC;
	sub_83289290(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x8327652c
	if (ctx.cr0.eq) goto loc_8327652C;
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x83276524
	if (ctx.cr6.eq) goto loc_83276524;
	// addi r6,r29,18
	ctx.r6.s64 = ctx.r29.s64 + 18;
	// addi r5,r30,-18
	ctx.r5.s64 = ctx.r30.s64 + -18;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83276260
	ctx.lr = 0x83276524;
	sub_83276260(ctx, base);
loc_83276524:
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x83276540
	goto loc_83276540;
loc_8327652C:
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83276260
	ctx.lr = 0x83276540;
	sub_83276260(ctx, base);
loc_83276540:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x833a01f8
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83276548"))) PPC_WEAK_FUNC(sub_83276548);
PPC_FUNC_IMPL(__imp__sub_83276548) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x833a018c
	ctx.lr = 0x83276550;
	__savegprlr_21(ctx, base);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r25,r6
	ctx.r25.u64 = ctx.r6.u64;
	// li r22,0
	ctx.r22.s64 = 0;
	// mr r6,r8
	ctx.r6.u64 = ctx.r8.u64;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// stw r22,0(r25)
	PPC_STORE_U32(ctx.r25.u32 + 0, ctx.r22.u32);
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// stw r22,0(r7)
	PPC_STORE_U32(ctx.r7.u32 + 0, ctx.r22.u32);
	// mr r30,r7
	ctx.r30.u64 = ctx.r7.u64;
	// lwz r24,8380(r3)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8380);
	// mr r21,r22
	ctx.r21.u64 = ctx.r22.u64;
	// lwz r27,0(r24)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r24.u32 + 0);
	// bl 0x83275d20
	ctx.lr = 0x83276588;
	sub_83275D20(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x83276794
	if (ctx.cr0.eq) goto loc_83276794;
	// cmpwi cr6,r28,4
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 4, ctx.xer);
	// blt cr6,0x832765a8
	if (ctx.cr6.lt) goto loc_832765A8;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x83288a58
	ctx.lr = 0x832765A0;
	sub_83288A58(ctx, base);
	// mr r23,r3
	ctx.r23.u64 = ctx.r3.u64;
	// b 0x832765ac
	goto loc_832765AC;
loc_832765A8:
	// mr r23,r22
	ctx.r23.u64 = ctx.r22.u64;
loc_832765AC:
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// lwz r5,3424(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 3424);
	// lwz r4,3420(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 3420);
	// bl 0x83286378
	ctx.lr = 0x832765BC;
	sub_83286378(ctx, base);
	// lwz r11,3436(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 3436);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x832765dc
	if (ctx.cr6.eq) goto loc_832765DC;
	// lis r11,-31961
	ctx.r11.s64 = -2094596096;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// addi r4,r11,20808
	ctx.r4.s64 = ctx.r11.s64 + 20808;
	// b 0x832765e4
	goto loc_832765E4;
loc_832765DC:
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
loc_832765E4:
	// bl 0x832863b0
	ctx.lr = 0x832765E8;
	sub_832863B0(ctx, base);
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// addi r6,r1,84
	ctx.r6.s64 = ctx.r1.s64 + 84;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x832863e8
	ctx.lr = 0x83276600;
	sub_832863E8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x8327661c
	if (ctx.cr0.eq) goto loc_8327661C;
	// lis r4,-256
	ctx.r4.s64 = -16777216;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// ori r4,r4,3331
	ctx.r4.u64 = ctx.r4.u64 | 3331;
	// bl 0x83282390
	ctx.lr = 0x83276618;
	sub_83282390(ctx, base);
	// mr r21,r3
	ctx.r21.u64 = ctx.r3.u64;
loc_8327661C:
	// li r4,86
	ctx.r4.s64 = 86;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83274d00
	ctx.lr = 0x83276628;
	sub_83274D00(ctx, base);
	// lwz r11,15088(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 15088);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8327663c
	if (ctx.cr6.eq) goto loc_8327663C;
	// li r27,2048
	ctx.r27.s64 = 2048;
loc_8327663C:
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lis r26,8
	ctx.r26.s64 = 524288;
	// cmpw cr6,r11,r26
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r26.s32, ctx.xer);
	// bne cr6,0x83276684
	if (!ctx.cr6.eq) goto loc_83276684;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83282720
	ctx.lr = 0x83276654;
	sub_83282720(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x83276678
	if (!ctx.cr0.eq) goto loc_83276678;
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmpw cr6,r11,r26
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r26.s32, ctx.xer);
	// bne cr6,0x83276684
	if (!ctx.cr6.eq) goto loc_83276684;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83282750
	ctx.lr = 0x83276670;
	sub_83282750(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x83276684
	if (ctx.cr0.eq) goto loc_83276684;
loc_83276678:
	// stw r27,0(r25)
	PPC_STORE_U32(ctx.r25.u32 + 0, ctx.r27.u32);
	// stw r27,348(r24)
	PPC_STORE_U32(ctx.r24.u32 + 348, ctx.r27.u32);
	// b 0x83276790
	goto loc_83276790;
loc_83276684:
	// cmpwi cr6,r23,0
	ctx.cr6.compare<int32_t>(ctx.r23.s32, 0, ctx.xer);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bne cr6,0x83276708
	if (!ctx.cr6.eq) goto loc_83276708;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x83275f90
	ctx.lr = 0x832766A0;
	sub_83275F90(ctx, base);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// stw r11,0(r25)
	PPC_STORE_U32(ctx.r25.u32 + 0, ctx.r11.u32);
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// ble cr6,0x83276790
	if (!ctx.cr6.gt) goto loc_83276790;
	// lwz r11,348(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 348);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt cr6,0x83276790
	if (ctx.cr6.lt) goto loc_83276790;
	// lwz r8,44(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 44);
	// cmpw cr6,r11,r8
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r8.s32, ctx.xer);
	// blt cr6,0x832766d4
	if (ctx.cr6.lt) goto loc_832766D4;
loc_832766CC:
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// b 0x8327678c
	goto loc_8327678C;
loc_832766D4:
	// add r9,r11,r10
	ctx.r9.u64 = ctx.r11.u64 + ctx.r10.u64;
	// cmpw cr6,r9,r8
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r8.s32, ctx.xer);
	// ble cr6,0x832766fc
	if (!ctx.cr6.gt) goto loc_832766FC;
	// lwz r9,44(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 44);
	// subf r11,r9,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r9.s64;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
	// rotlwi r10,r11,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// lwz r11,44(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 44);
	// b 0x832766cc
	goto loc_832766CC;
loc_832766FC:
	// stw r9,348(r24)
	PPC_STORE_U32(ctx.r24.u32 + 348, ctx.r9.u32);
	// stw r22,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r22.u32);
	// b 0x83276790
	goto loc_83276790;
loc_83276708:
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// rlwinm. r11,r11,0,13,13
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x40000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x83276750
	if (!ctx.cr0.eq) goto loc_83276750;
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// bl 0x83275538
	ctx.lr = 0x8327671C;
	sub_83275538(ctx, base);
	// lwz r11,88(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x83276790
	if (!ctx.cr6.eq) goto loc_83276790;
	// lwz r11,44(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 44);
	// cmpw cr6,r28,r11
	ctx.cr6.compare<int32_t>(ctx.r28.s32, ctx.r11.s32, ctx.xer);
	// ble cr6,0x83276790
	if (!ctx.cr6.gt) goto loc_83276790;
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bgt cr6,0x83276744
	if (ctx.cr6.gt) goto loc_83276744;
	// li r11,1
	ctx.r11.s64 = 1;
loc_83276744:
	// stw r11,0(r25)
	PPC_STORE_U32(ctx.r25.u32 + 0, ctx.r11.u32);
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
	// b 0x83276790
	goto loc_83276790;
loc_83276750:
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// addi r7,r1,88
	ctx.r7.s64 = ctx.r1.s64 + 88;
	// addi r6,r1,92
	ctx.r6.s64 = ctx.r1.s64 + 92;
	// add r4,r11,r29
	ctx.r4.u64 = ctx.r11.u64 + ctx.r29.u64;
	// subf r5,r11,r28
	ctx.r5.s64 = ctx.r28.s64 - ctx.r11.s64;
	// bl 0x83276360
	ctx.lr = 0x83276768;
	sub_83276360(ctx, base);
	// lwz r11,88(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// mr r21,r3
	ctx.r21.u64 = ctx.r3.u64;
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x83276788
	if (!ctx.cr6.eq) goto loc_83276788;
	// lwz r10,84(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r11,92(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r11,0(r25)
	PPC_STORE_U32(ctx.r25.u32 + 0, ctx.r11.u32);
loc_83276788:
	// li r11,-1
	ctx.r11.s64 = -1;
loc_8327678C:
	// stw r11,348(r24)
	PPC_STORE_U32(ctx.r24.u32 + 348, ctx.r11.u32);
loc_83276790:
	// mr r3,r21
	ctx.r3.u64 = ctx.r21.u64;
loc_83276794:
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x833a01dc
	__restgprlr_21(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8327679C"))) PPC_WEAK_FUNC(sub_8327679C);
PPC_FUNC_IMPL(__imp__sub_8327679C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

