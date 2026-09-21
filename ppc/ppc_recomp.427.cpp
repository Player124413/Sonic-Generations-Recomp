#include "ppc_recomp_shared.h"

__attribute__((alias("__imp__sub_8327AA30"))) PPC_WEAK_FUNC(sub_8327AA30);
PPC_FUNC_IMPL(__imp__sub_8327AA30) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x833a01ac
	ctx.lr = 0x8327AA38;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// li r4,7
	ctx.r4.s64 = 7;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// bl 0x83274d00
	ctx.lr = 0x8327AA50;
	sub_83274D00(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x8327aac8
	if (!ctx.cr0.eq) goto loc_8327AAC8;
	// cmpwi cr6,r29,3
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 3, ctx.xer);
	// bne cr6,0x8327aa90
	if (!ctx.cr6.eq) goto loc_8327AA90;
	// lwz r11,2364(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2364);
	// lwz r10,2360(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2360);
	// lwz r4,4(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// mullw r5,r11,r10
	ctx.r5.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r10.s32);
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// bl 0x8328b8d8
	ctx.lr = 0x8327AA78;
	sub_8328B8D8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x8327aacc
	if (ctx.cr0.eq) goto loc_8327AACC;
	// lwz r11,2432(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2432);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,2432(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2432, ctx.r11.u32);
	// b 0x8327aacc
	goto loc_8327AACC;
loc_8327AA90:
	// cmpwi cr6,r29,2
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 2, ctx.xer);
	// bne cr6,0x8327aac8
	if (!ctx.cr6.eq) goto loc_8327AAC8;
	// lwz r11,2364(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2364);
	// lwz r10,2360(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2360);
	// lwz r4,4(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// mullw r5,r11,r10
	ctx.r5.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r10.s32);
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// bl 0x8328bb60
	ctx.lr = 0x8327AAB0;
	sub_8328BB60(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x8327aacc
	if (ctx.cr0.eq) goto loc_8327AACC;
	// lwz r11,2436(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2436);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,2436(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2436, ctx.r11.u32);
	// b 0x8327aacc
	goto loc_8327AACC;
loc_8327AAC8:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8327AACC:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x833a01fc
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8327AAD4"))) PPC_WEAK_FUNC(sub_8327AAD4);
PPC_FUNC_IMPL(__imp__sub_8327AAD4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8327AAD8"))) PPC_WEAK_FUNC(sub_8327AAD8);
PPC_FUNC_IMPL(__imp__sub_8327AAD8) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,2776(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 2776);
	// stw r11,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r11.u32);
	// lwz r11,2772(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 2772);
	// stw r11,0(r5)
	PPC_STORE_U32(ctx.r5.u32 + 0, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8327AAEC"))) PPC_WEAK_FUNC(sub_8327AAEC);
PPC_FUNC_IMPL(__imp__sub_8327AAEC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8327AAF0"))) PPC_WEAK_FUNC(sub_8327AAF0);
PPC_FUNC_IMPL(__imp__sub_8327AAF0) {
	PPC_FUNC_PROLOGUE();
	// lwz r10,3812(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 3812);
	// addi r11,r3,3496
	ctx.r11.s64 = ctx.r3.s64 + 3496;
	// lwz r9,3724(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 3724);
	// addi r4,r11,192
	ctx.r4.s64 = ctx.r11.s64 + 192;
	// cmpw cr6,r9,r10
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r10.s32, ctx.xer);
	// bgelr cr6
	if (!ctx.cr6.lt) return;
	// addi r3,r11,236
	ctx.r3.s64 = ctx.r11.s64 + 236;
	// li r5,44
	ctx.r5.s64 = 44;
	// b 0x833a1390
	sub_833A1390(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8327AB14"))) PPC_WEAK_FUNC(sub_8327AB14);
PPC_FUNC_IMPL(__imp__sub_8327AB14) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8327AB18"))) PPC_WEAK_FUNC(sub_8327AB18);
PPC_FUNC_IMPL(__imp__sub_8327AB18) {
	PPC_FUNC_PROLOGUE();
	// lbz r11,95(r4)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r4.u32 + 95);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// bne cr6,0x8327ab2c
	if (!ctx.cr6.eq) goto loc_8327AB2C;
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
loc_8327AB2C:
	// lwz r11,156(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 156);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8327ab54
	if (ctx.cr6.eq) goto loc_8327AB54;
	// lwz r11,268(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 268);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8327ab54
	if (ctx.cr6.eq) goto loc_8327AB54;
	// lwz r11,296(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 296);
	// li r3,1
	ctx.r3.s64 = 1;
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
loc_8327AB54:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8327AB5C"))) PPC_WEAK_FUNC(sub_8327AB5C);
PPC_FUNC_IMPL(__imp__sub_8327AB5C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8327AB60"))) PPC_WEAK_FUNC(sub_8327AB60);
PPC_FUNC_IMPL(__imp__sub_8327AB60) {
	PPC_FUNC_PROLOGUE();
	// lwz r9,64(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 64);
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,0
	ctx.r10.s64 = 0;
	// cmpwi cr6,r9,3
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 3, ctx.xer);
	// bne cr6,0x8327abdc
	if (!ctx.cr6.eq) goto loc_8327ABDC;
	// lwz r9,44(r4)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r4.u32 + 44);
	// cmpwi cr6,r9,2
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 2, ctx.xer);
	// beq cr6,0x8327abc4
	if (ctx.cr6.eq) goto loc_8327ABC4;
	// cmpwi cr6,r9,3
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 3, ctx.xer);
	// bne cr6,0x8327abdc
	if (!ctx.cr6.eq) goto loc_8327ABDC;
	// lwz r9,232(r4)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r4.u32 + 232);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x8327aba0
	if (ctx.cr6.eq) goto loc_8327ABA0;
	// rotlwi r10,r9,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r9.u32, 0);
	// lwz r11,76(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 76);
	// lwz r10,80(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 80);
loc_8327ABA0:
	// lwz r9,236(r4)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r4.u32 + 236);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x8327abdc
	if (ctx.cr6.eq) goto loc_8327ABDC;
	// rotlwi r8,r9,0
	ctx.r8.u64 = __builtin_rotateleft32(ctx.r9.u32, 0);
	// lwz r9,76(r8)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r8.u32 + 76);
	// lwz r8,80(r8)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r8.u32 + 80);
	// add r11,r9,r11
	ctx.r11.u64 = ctx.r9.u64 + ctx.r11.u64;
	// add r10,r8,r10
	ctx.r10.u64 = ctx.r8.u64 + ctx.r10.u64;
	// b 0x8327abdc
	goto loc_8327ABDC;
loc_8327ABC4:
	// lwz r9,232(r4)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r4.u32 + 232);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x8327abdc
	if (ctx.cr6.eq) goto loc_8327ABDC;
	// rotlwi r10,r9,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r9.u32, 0);
	// lwz r11,76(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 76);
	// lwz r10,80(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 80);
loc_8327ABDC:
	// stw r11,0(r5)
	PPC_STORE_U32(ctx.r5.u32 + 0, ctx.r11.u32);
	// stw r10,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8327ABE8"))) PPC_WEAK_FUNC(sub_8327ABE8);
PPC_FUNC_IMPL(__imp__sub_8327ABE8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x833a01ac
	ctx.lr = 0x8327ABF0;
	__savegprlr_29(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r10,3776(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 3776);
	// addi r29,r3,3496
	ctx.r29.s64 = ctx.r3.s64 + 3496;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r30,r29,280
	ctx.r30.s64 = ctx.r29.s64 + 280;
	// addi r11,r29,192
	ctx.r11.s64 = ctx.r29.s64 + 192;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x8327ac90
	if (!ctx.cr6.eq) goto loc_8327AC90;
	// addi r4,r11,4
	ctx.r4.s64 = ctx.r11.s64 + 4;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// li r5,32
	ctx.r5.s64 = 32;
	// bl 0x833a1390
	ctx.lr = 0x8327AC20;
	sub_833A1390(ctx, base);
	// li r4,3
	ctx.r4.s64 = 3;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8327a8f0
	ctx.lr = 0x8327AC2C;
	sub_8327A8F0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x8327ac50
	if (!ctx.cr0.eq) goto loc_8327AC50;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8327a9f0
	ctx.lr = 0x8327AC3C;
	sub_8327A9F0(ctx, base);
	// subfic r11,r3,0
	ctx.xer.ca = ctx.r3.u32 <= 0;
	ctx.r11.s64 = 0 - ctx.r3.s64;
	// lwz r10,120(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	// subfe r11,r11,r11
	temp.u8 = (~ctx.r11.u32 + ctx.r11.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r11.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 & ctx.r10.u64;
	// stw r11,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r11.u32);
loc_8327AC50:
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x83276ee0
	ctx.lr = 0x8327AC60;
	sub_83276EE0(ctx, base);
	// addi r3,r30,4
	ctx.r3.s64 = ctx.r30.s64 + 4;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// li r5,32
	ctx.r5.s64 = 32;
	// bl 0x833a1390
	ctx.lr = 0x8327AC70;
	sub_833A1390(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r8,96(r29)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r29.u32 + 96);
	// li r9,1
	ctx.r9.s64 = 1;
	// lwz r10,84(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// stw r9,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r9.u32);
	// stw r11,40(r30)
	PPC_STORE_U32(ctx.r30.u32 + 40, ctx.r11.u32);
	// subf r11,r8,r10
	ctx.r11.s64 = ctx.r10.s64 - ctx.r8.s64;
	// stw r11,36(r30)
	PPC_STORE_U32(ctx.r30.u32 + 36, ctx.r11.u32);
loc_8327AC90:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x833a01fc
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8327AC98"))) PPC_WEAK_FUNC(sub_8327AC98);
PPC_FUNC_IMPL(__imp__sub_8327AC98) {
	PPC_FUNC_PROLOGUE();
	// lwz r9,64(r4)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r4.u32 + 64);
	// addi r10,r4,24
	ctx.r10.s64 = ctx.r4.s64 + 24;
	// addi r11,r3,3496
	ctx.r11.s64 = ctx.r3.s64 + 3496;
	// stw r9,72(r4)
	PPC_STORE_U32(ctx.r4.u32 + 72, ctx.r9.u32);
	// lwz r9,60(r4)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r4.u32 + 60);
	// lwz r8,3812(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 3812);
	// lwz r10,3844(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 3844);
	// subf r10,r8,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r8.s64;
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// stw r10,68(r4)
	PPC_STORE_U32(ctx.r4.u32 + 68, ctx.r10.u32);
	// rotlwi r10,r10,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// lwz r9,60(r4)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r4.u32 + 60);
	// stw r9,88(r4)
	PPC_STORE_U32(ctx.r4.u32 + 88, ctx.r9.u32);
	// lwz r9,3844(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 3844);
	// lwz r8,60(r4)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r4.u32 + 60);
	// add r9,r9,r8
	ctx.r9.u64 = ctx.r9.u64 + ctx.r8.u64;
	// stw r9,92(r4)
	PPC_STORE_U32(ctx.r4.u32 + 92, ctx.r9.u32);
	// lwz r9,4136(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4136);
	// cmpw cr6,r9,r10
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r10.s32, ctx.xer);
	// bgelr cr6
	if (!ctx.cr6.lt) return;
	// stw r10,640(r11)
	PPC_STORE_U32(ctx.r11.u32 + 640, ctx.r10.u32);
	// lwz r10,72(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 72);
	// stw r10,644(r11)
	PPC_STORE_U32(ctx.r11.u32 + 644, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8327ACF8"))) PPC_WEAK_FUNC(sub_8327ACF8);
PPC_FUNC_IMPL(__imp__sub_8327ACF8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r5,4(r4)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// lwz r4,0(r4)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// bl 0x833a1390
	ctx.lr = 0x8327AD24;
	sub_833A1390(ctx, base);
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
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

__attribute__((alias("__imp__sub_8327AD44"))) PPC_WEAK_FUNC(sub_8327AD44);
PPC_FUNC_IMPL(__imp__sub_8327AD44) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8327AD48"))) PPC_WEAK_FUNC(sub_8327AD48);
PPC_FUNC_IMPL(__imp__sub_8327AD48) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,8456(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8456);
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// mr r4,r11
	ctx.r4.u64 = ctx.r11.u64;
	// b 0x832884a8
	sub_832884A8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8327AD58"))) PPC_WEAK_FUNC(sub_8327AD58);
PPC_FUNC_IMPL(__imp__sub_8327AD58) {
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
	// lwz r4,8456(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8456);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x832879e0
	ctx.lr = 0x8327AD78;
	sub_832879E0(ctx, base);
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x83287ff0
	ctx.lr = 0x8327AD88;
	sub_83287FF0(ctx, base);
	// lwz r4,84(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// ld r3,2496(r31)
	ctx.r3.u64 = PPC_LOAD_U64(ctx.r31.u32 + 2496);
	// bl 0x83287c70
	ctx.lr = 0x8327AD94;
	sub_83287C70(ctx, base);
	// std r3,2496(r31)
	PPC_STORE_U64(ctx.r31.u32 + 2496, ctx.r3.u64);
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

__attribute__((alias("__imp__sub_8327ADAC"))) PPC_WEAK_FUNC(sub_8327ADAC);
PPC_FUNC_IMPL(__imp__sub_8327ADAC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8327ADB0"))) PPC_WEAK_FUNC(sub_8327ADB0);
PPC_FUNC_IMPL(__imp__sub_8327ADB0) {
	PPC_FUNC_PROLOGUE();
	// li r5,32
	ctx.r5.s64 = 32;
	// li r4,-1
	ctx.r4.s64 = -1;
	// b 0x8328be48
	sub_8328BE48(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8327ADBC"))) PPC_WEAK_FUNC(sub_8327ADBC);
PPC_FUNC_IMPL(__imp__sub_8327ADBC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8327ADC0"))) PPC_WEAK_FUNC(sub_8327ADC0);
PPC_FUNC_IMPL(__imp__sub_8327ADC0) {
	PPC_FUNC_PROLOGUE();
	// cmpwi cr6,r4,-3
	ctx.cr6.compare<int32_t>(ctx.r4.s32, -3, ctx.xer);
	// blt cr6,0x8327add8
	if (ctx.cr6.lt) goto loc_8327ADD8;
	// cmpwi cr6,r4,-2
	ctx.cr6.compare<int32_t>(ctx.r4.s32, -2, ctx.xer);
	// blelr cr6
	if (!ctx.cr6.gt) return;
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
loc_8327ADD8:
	// rlwinm r11,r4,0,0,15
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 0) & 0xFFFF0000;
	// lis r10,-252
	ctx.r10.s64 = -16515072;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x8327adec
	if (!ctx.cr6.eq) goto loc_8327ADEC;
	// b 0x832759d0
	sub_832759D0(ctx, base);
	return;
loc_8327ADEC:
	// b 0x83282390
	sub_83282390(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8327ADF0"))) PPC_WEAK_FUNC(sub_8327ADF0);
PPC_FUNC_IMPL(__imp__sub_8327ADF0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8327ADF4"))) PPC_WEAK_FUNC(sub_8327ADF4);
PPC_FUNC_IMPL(__imp__sub_8327ADF4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8327ADF8"))) PPC_WEAK_FUNC(sub_8327ADF8);
PPC_FUNC_IMPL(__imp__sub_8327ADF8) {
	PPC_FUNC_PROLOGUE();
	// b 0x832898d8
	sub_832898D8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8327ADFC"))) PPC_WEAK_FUNC(sub_8327ADFC);
PPC_FUNC_IMPL(__imp__sub_8327ADFC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8327AE00"))) PPC_WEAK_FUNC(sub_8327AE00);
PPC_FUNC_IMPL(__imp__sub_8327AE00) {
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
	// lwz r11,8448(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8448);
	// lwz r3,0(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8327ae20
	if (ctx.cr6.eq) goto loc_8327AE20;
	// bl 0x8328c0d8
	ctx.lr = 0x8327AE20;
	sub_8328C0D8(ctx, base);
loc_8327AE20:
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

__attribute__((alias("__imp__sub_8327AE34"))) PPC_WEAK_FUNC(sub_8327AE34);
PPC_FUNC_IMPL(__imp__sub_8327AE34) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8327AE38"))) PPC_WEAK_FUNC(sub_8327AE38);
PPC_FUNC_IMPL(__imp__sub_8327AE38) {
	PPC_FUNC_PROLOGUE();
	// lis r4,-256
	ctx.r4.s64 = -16777216;
	// ori r4,r4,3853
	ctx.r4.u64 = ctx.r4.u64 | 3853;
	// b 0x83282390
	sub_83282390(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8327AE44"))) PPC_WEAK_FUNC(sub_8327AE44);
PPC_FUNC_IMPL(__imp__sub_8327AE44) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8327AE48"))) PPC_WEAK_FUNC(sub_8327AE48);
PPC_FUNC_IMPL(__imp__sub_8327AE48) {
	PPC_FUNC_PROLOGUE();
	// lwz r10,112(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 112);
	// addi r11,r4,112
	ctx.r11.s64 = ctx.r4.s64 + 112;
	// stw r10,0(r5)
	PPC_STORE_U32(ctx.r5.u32 + 0, ctx.r10.u32);
	// lwz r10,116(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 116);
	// stw r10,4(r5)
	PPC_STORE_U32(ctx.r5.u32 + 4, ctx.r10.u32);
	// lwz r10,120(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 120);
	// stw r10,8(r5)
	PPC_STORE_U32(ctx.r5.u32 + 8, ctx.r10.u32);
	// lwz r10,124(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 124);
	// stw r10,12(r5)
	PPC_STORE_U32(ctx.r5.u32 + 12, ctx.r10.u32);
	// lwz r10,136(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 136);
	// stw r10,16(r5)
	PPC_STORE_U32(ctx.r5.u32 + 16, ctx.r10.u32);
	// lwz r10,68(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 68);
	// stw r10,20(r5)
	PPC_STORE_U32(ctx.r5.u32 + 20, ctx.r10.u32);
	// lwz r10,72(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 72);
	// stw r10,24(r5)
	PPC_STORE_U32(ctx.r5.u32 + 24, ctx.r10.u32);
	// lwz r10,64(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 64);
	// stw r10,28(r5)
	PPC_STORE_U32(ctx.r5.u32 + 28, ctx.r10.u32);
	// lwz r10,8(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	// stw r10,32(r5)
	PPC_STORE_U32(ctx.r5.u32 + 32, ctx.r10.u32);
	// lwz r10,76(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 76);
	// stw r10,36(r5)
	PPC_STORE_U32(ctx.r5.u32 + 36, ctx.r10.u32);
	// lwz r10,80(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 80);
	// stw r10,40(r5)
	PPC_STORE_U32(ctx.r5.u32 + 40, ctx.r10.u32);
	// lwz r10,84(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 84);
	// stw r10,44(r5)
	PPC_STORE_U32(ctx.r5.u32 + 44, ctx.r10.u32);
	// lwz r10,88(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 88);
	// stw r10,48(r5)
	PPC_STORE_U32(ctx.r5.u32 + 48, ctx.r10.u32);
	// lwz r10,92(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 92);
	// stw r10,52(r5)
	PPC_STORE_U32(ctx.r5.u32 + 52, ctx.r10.u32);
	// lwz r10,96(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 96);
	// stw r10,56(r5)
	PPC_STORE_U32(ctx.r5.u32 + 56, ctx.r10.u32);
	// lwz r10,100(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 100);
	// stw r10,60(r5)
	PPC_STORE_U32(ctx.r5.u32 + 60, ctx.r10.u32);
	// lwz r10,104(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 104);
	// stw r10,64(r5)
	PPC_STORE_U32(ctx.r5.u32 + 64, ctx.r10.u32);
	// lwz r10,176(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 176);
	// stw r10,68(r5)
	PPC_STORE_U32(ctx.r5.u32 + 68, ctx.r10.u32);
	// lwz r10,180(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 180);
	// stw r10,72(r5)
	PPC_STORE_U32(ctx.r5.u32 + 72, ctx.r10.u32);
	// lwz r10,176(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 176);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// li r10,2
	ctx.r10.s64 = 2;
	// beq cr6,0x8327aef8
	if (ctx.cr6.eq) goto loc_8327AEF8;
	// li r10,1
	ctx.r10.s64 = 1;
loc_8327AEF8:
	// stw r10,80(r5)
	PPC_STORE_U32(ctx.r5.u32 + 80, ctx.r10.u32);
	// ld r10,240(r4)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r4.u32 + 240);
	// std r10,88(r5)
	PPC_STORE_U64(ctx.r5.u32 + 88, ctx.r10.u64);
	// lwz r10,56(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 56);
	// stw r10,96(r5)
	PPC_STORE_U32(ctx.r5.u32 + 96, ctx.r10.u32);
	// lwz r10,60(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 60);
	// stw r10,100(r5)
	PPC_STORE_U32(ctx.r5.u32 + 100, ctx.r10.u32);
	// lwz r10,72(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 72);
	// stw r10,104(r5)
	PPC_STORE_U32(ctx.r5.u32 + 104, ctx.r10.u32);
	// lwz r10,76(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 76);
	// stw r10,108(r5)
	PPC_STORE_U32(ctx.r5.u32 + 108, ctx.r10.u32);
	// lhz r10,80(r11)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r11.u32 + 80);
	// sth r10,112(r5)
	PPC_STORE_U16(ctx.r5.u32 + 112, ctx.r10.u16);
	// lhz r10,82(r11)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r11.u32 + 82);
	// sth r10,114(r5)
	PPC_STORE_U16(ctx.r5.u32 + 114, ctx.r10.u16);
	// lbz r10,85(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 85);
	// stb r10,116(r5)
	PPC_STORE_U8(ctx.r5.u32 + 116, ctx.r10.u8);
	// lbz r10,86(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 86);
	// stb r10,117(r5)
	PPC_STORE_U8(ctx.r5.u32 + 117, ctx.r10.u8);
	// lbz r10,87(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 87);
	// stb r10,118(r5)
	PPC_STORE_U8(ctx.r5.u32 + 118, ctx.r10.u8);
	// lbz r10,89(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 89);
	// stb r10,119(r5)
	PPC_STORE_U8(ctx.r5.u32 + 119, ctx.r10.u8);
	// lbz r10,90(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 90);
	// stb r10,120(r5)
	PPC_STORE_U8(ctx.r5.u32 + 120, ctx.r10.u8);
	// lbz r10,91(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 91);
	// stb r10,121(r5)
	PPC_STORE_U8(ctx.r5.u32 + 121, ctx.r10.u8);
	// lbz r10,92(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 92);
	// stb r10,122(r5)
	PPC_STORE_U8(ctx.r5.u32 + 122, ctx.r10.u8);
	// lbz r10,93(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 93);
	// stb r10,123(r5)
	PPC_STORE_U8(ctx.r5.u32 + 123, ctx.r10.u8);
	// lbz r10,94(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 94);
	// stb r10,124(r5)
	PPC_STORE_U8(ctx.r5.u32 + 124, ctx.r10.u8);
	// lbz r10,95(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 95);
	// stb r10,125(r5)
	PPC_STORE_U8(ctx.r5.u32 + 125, ctx.r10.u8);
	// lbz r10,96(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 96);
	// stb r10,126(r5)
	PPC_STORE_U8(ctx.r5.u32 + 126, ctx.r10.u8);
	// lbz r10,97(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 97);
	// stb r10,127(r5)
	PPC_STORE_U8(ctx.r5.u32 + 127, ctx.r10.u8);
	// lbz r10,98(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 98);
	// stb r10,128(r5)
	PPC_STORE_U8(ctx.r5.u32 + 128, ctx.r10.u8);
	// lbz r10,99(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 99);
	// stb r10,129(r5)
	PPC_STORE_U8(ctx.r5.u32 + 129, ctx.r10.u8);
	// lbz r11,100(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 100);
	// stb r11,130(r5)
	PPC_STORE_U8(ctx.r5.u32 + 130, ctx.r11.u8);
	// lhz r11,264(r4)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r4.u32 + 264);
	// sth r11,132(r5)
	PPC_STORE_U16(ctx.r5.u32 + 132, ctx.r11.u16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8327AFB8"))) PPC_WEAK_FUNC(sub_8327AFB8);
PPC_FUNC_IMPL(__imp__sub_8327AFB8) {
	PPC_FUNC_PROLOGUE();
	// b 0x83284fd8
	sub_83284FD8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8327AFBC"))) PPC_WEAK_FUNC(sub_8327AFBC);
PPC_FUNC_IMPL(__imp__sub_8327AFBC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8327AFC0"))) PPC_WEAK_FUNC(sub_8327AFC0);
PPC_FUNC_IMPL(__imp__sub_8327AFC0) {
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
	ctx.lr = 0x8327AFD0;
	sub_82D6DA88(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// li r3,0
	ctx.r3.s64 = 0;
	// beq 0x8327afec
	if (ctx.cr0.eq) goto loc_8327AFEC;
	// lis r4,-256
	ctx.r4.s64 = -16777216;
	// ori r4,r4,3840
	ctx.r4.u64 = ctx.r4.u64 | 3840;
loc_8327AFE4:
	// bl 0x832759d0
	ctx.lr = 0x8327AFE8;
	sub_832759D0(ctx, base);
	// b 0x8327b06c
	goto loc_8327B06C;
loc_8327AFEC:
	// lis r11,-31960
	ctx.r11.s64 = -2094530560;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r11,-21056
	ctx.r4.s64 = ctx.r11.s64 + -21056;
	// bl 0x8328c1c0
	ctx.lr = 0x8327AFFC;
	sub_8328C1C0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x8327b018
	if (ctx.cr0.eq) goto loc_8327B018;
	// lis r4,-256
	ctx.r4.s64 = -16777216;
	// li r3,0
	ctx.r3.s64 = 0;
	// ori r4,r4,3851
	ctx.r4.u64 = ctx.r4.u64 | 3851;
	// bl 0x83282390
	ctx.lr = 0x8327B014;
	sub_83282390(ctx, base);
	// b 0x8327b06c
	goto loc_8327B06C;
loc_8327B018:
	// lis r11,-31822
	ctx.r11.s64 = -2085486592;
	// li r3,48
	ctx.r3.s64 = 48;
	// addi r4,r11,2464
	ctx.r4.s64 = ctx.r11.s64 + 2464;
	// bl 0x83289a38
	ctx.lr = 0x8327B028;
	sub_83289A38(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x8327b058
	if (ctx.cr0.eq) goto loc_8327B058;
	// lis r11,-253
	ctx.r11.s64 = -16580608;
	// lis r4,-256
	ctx.r4.s64 = -16777216;
	// ori r11,r11,65285
	ctx.r11.u64 = ctx.r11.u64 | 65285;
	// cmpw cr6,r3,r11
	ctx.cr6.compare<int32_t>(ctx.r3.s32, ctx.r11.s32, ctx.xer);
	// bne cr6,0x8327b04c
	if (!ctx.cr6.eq) goto loc_8327B04C;
	// ori r4,r4,3859
	ctx.r4.u64 = ctx.r4.u64 | 3859;
	// b 0x8327b050
	goto loc_8327B050;
loc_8327B04C:
	// ori r4,r4,3841
	ctx.r4.u64 = ctx.r4.u64 | 3841;
loc_8327B050:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x8327afe4
	goto loc_8327AFE4;
loc_8327B058:
	// bl 0x832842d0
	ctx.lr = 0x8327B05C;
	sub_832842D0(ctx, base);
	// lis r10,-31816
	ctx.r10.s64 = -2085093376;
	// li r11,0
	ctx.r11.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r11,10784(r10)
	PPC_STORE_U32(ctx.r10.u32 + 10784, ctx.r11.u32);
loc_8327B06C:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8327B07C"))) PPC_WEAK_FUNC(sub_8327B07C);
PPC_FUNC_IMPL(__imp__sub_8327B07C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8327B080"))) PPC_WEAK_FUNC(sub_8327B080);
PPC_FUNC_IMPL(__imp__sub_8327B080) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x833a01ac
	ctx.lr = 0x8327B088;
	__savegprlr_29(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r4,89
	ctx.r4.s64 = 89;
	// lwz r30,8448(r3)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8448);
	// lwz r29,8456(r3)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8456);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x83274d00
	ctx.lr = 0x8327B0A0;
	sub_83274D00(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x8327b158
	if (ctx.cr0.eq) goto loc_8327B158;
	// lwz r11,288(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 288);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x8327b158
	if (ctx.cr6.eq) goto loc_8327B158;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8327a260
	ctx.lr = 0x8327B0BC;
	sub_8327A260(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x8327b158
	if (ctx.cr0.eq) goto loc_8327B158;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x832879e0
	ctx.lr = 0x8327B0D4;
	sub_832879E0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x8327b158
	if (!ctx.cr0.eq) goto loc_8327B158;
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// addi r6,r1,88
	ctx.r6.s64 = ctx.r1.s64 + 88;
	// li r5,4
	ctx.r5.s64 = 4;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,24(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8327B0FC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,92(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// beq cr6,0x8327b128
	if (ctx.cr6.eq) goto loc_8327B128;
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,28(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8327B124;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// b 0x8327b158
	goto loc_8327B158;
loc_8327B128:
	// lis r10,-32219
	ctx.r10.s64 = -2111504384;
	// lwz r11,88(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r10,17408(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 17408);
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,32(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8327B150;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,288(r30)
	PPC_STORE_U32(ctx.r30.u32 + 288, ctx.r11.u32);
loc_8327B158:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x833a01fc
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8327B160"))) PPC_WEAK_FUNC(sub_8327B160);
PPC_FUNC_IMPL(__imp__sub_8327B160) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x833a01ac
	ctx.lr = 0x8327B168;
	__savegprlr_29(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r30,8448(r3)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8448);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r29,0(r30)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// bl 0x8327a260
	ctx.lr = 0x8327B17C;
	sub_8327A260(ctx, base);
	// cmpwi cr6,r3,1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 1, ctx.xer);
	// bne cr6,0x8327b18c
	if (!ctx.cr6.eq) goto loc_8327B18C;
loc_8327B184:
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x8327b21c
	goto loc_8327B21C;
loc_8327B18C:
	// lwz r11,156(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 156);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8327b1a4
	if (ctx.cr6.eq) goto loc_8327B1A4;
	// lwz r11,280(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 280);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8327b184
	if (ctx.cr6.eq) goto loc_8327B184;
loc_8327B1A4:
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8328b798
	ctx.lr = 0x8327B1B0;
	sub_8328B798(ctx, base);
	// lis r11,3
	ctx.r11.s64 = 196608;
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// ori r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 65535;
	// cmpw cr6,r10,r11
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r11.s32, ctx.xer);
	// beq cr6,0x8327b184
	if (ctx.cr6.eq) goto loc_8327B184;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83287968
	ctx.lr = 0x8327B1D0;
	sub_83287968(ctx, base);
	// lwz r11,156(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 156);
	// cmpw cr6,r3,r11
	ctx.cr6.compare<int32_t>(ctx.r3.s32, ctx.r11.s32, ctx.xer);
	// bge cr6,0x8327b184
	if (!ctx.cr6.lt) goto loc_8327B184;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83285b70
	ctx.lr = 0x8327B1E8;
	sub_83285B70(ctx, base);
	// cntlzw r11,r3
	ctx.r11.u64 = ctx.r3.u32 == 0 ? 32 : __builtin_clz(ctx.r3.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// rlwinm r30,r11,27,31,31
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x83287968
	ctx.lr = 0x8327B1FC;
	sub_83287968(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83287948
	ctx.lr = 0x8327B20C;
	sub_83287948(ctx, base);
	// srawi r11,r29,31
	ctx.xer.ca = (ctx.r29.s32 < 0) & ((ctx.r29.u32 & 0x7FFFFFFF) != 0);
	ctx.r11.s64 = ctx.r29.s32 >> 31;
	// rlwinm r10,r3,1,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 1) & 0x1;
	// subfc r9,r3,r29
	ctx.xer.ca = ctx.r29.u32 >= ctx.r3.u32;
	ctx.r9.s64 = ctx.r29.s64 - ctx.r3.s64;
	// adde r3,r10,r11
	temp.u8 = (ctx.r10.u32 + ctx.r11.u32 < ctx.r10.u32) | (ctx.r10.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r3.u64 = ctx.r10.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
loc_8327B21C:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x833a01fc
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8327B224"))) PPC_WEAK_FUNC(sub_8327B224);
PPC_FUNC_IMPL(__imp__sub_8327B224) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8327B228"))) PPC_WEAK_FUNC(sub_8327B228);
PPC_FUNC_IMPL(__imp__sub_8327B228) {
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
	// bl 0x832847b0
	ctx.lr = 0x8327B240;
	sub_832847B0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// beq cr6,0x8327b25c
	if (ctx.cr6.eq) goto loc_8327B25C;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83279c90
	ctx.lr = 0x8327B254;
	sub_83279C90(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x8327b284
	if (ctx.cr0.eq) goto loc_8327B284;
loc_8327B25C:
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83279d80
	ctx.lr = 0x8327B268;
	sub_83279D80(ctx, base);
	// lwz r11,2416(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2416);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8327b284
	if (!ctx.cr6.eq) goto loc_8327B284;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,5
	ctx.r4.s64 = 5;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83274d40
	ctx.lr = 0x8327B284;
	sub_83274D40(ctx, base);
loc_8327B284:
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

__attribute__((alias("__imp__sub_8327B298"))) PPC_WEAK_FUNC(sub_8327B298);
PPC_FUNC_IMPL(__imp__sub_8327B298) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x833a01a8
	ctx.lr = 0x8327B2A0;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x8327b38c
	if (ctx.cr6.eq) goto loc_8327B38C;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplw cr6,r5,r11
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x8327b38c
	if (ctx.cr6.eq) goto loc_8327B38C;
	// ble cr6,0x8327b2d4
	if (!ctx.cr6.gt) goto loc_8327B2D4;
	// subf r10,r11,r5
	ctx.r10.s64 = ctx.r5.s64 - ctx.r11.s64;
	// cmpwi cr6,r10,3
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 3, ctx.xer);
	// ble cr6,0x8327b38c
	if (!ctx.cr6.gt) goto loc_8327B38C;
loc_8327B2D4:
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x8327b330
	if (ctx.cr6.lt) goto loc_8327B330;
	// lwz r10,4(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// add r9,r10,r11
	ctx.r9.u64 = ctx.r10.u64 + ctx.r11.u64;
	// cmplw cr6,r31,r9
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r9.u32, ctx.xer);
	// bge cr6,0x8327b330
	if (!ctx.cr6.lt) goto loc_8327B330;
	// subf r10,r10,r31
	ctx.r10.s64 = ctx.r31.s64 - ctx.r10.s64;
	// subf r11,r11,r10
	ctx.r11.s64 = ctx.r10.s64 - ctx.r11.s64;
	// addic. r30,r11,4
	ctx.xer.ca = ctx.r11.u32 > 4294967291;
	ctx.r30.s64 = ctx.r11.s64 + 4;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// ble 0x8327b35c
	if (!ctx.cr0.gt) goto loc_8327B35C;
	// lwz r11,12(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 12);
	// cmpw cr6,r30,r11
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r11.s32, ctx.xer);
	// bgt cr6,0x8327b38c
	if (ctx.cr6.gt) goto loc_8327B38C;
	// subfic r5,r30,4
	ctx.xer.ca = ctx.r30.u32 <= 4;
	ctx.r5.s64 = 4 - ctx.r30.s64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x833a1390
	ctx.lr = 0x8327B318;
	sub_833A1390(ctx, base);
	// addi r11,r1,84
	ctx.r11.s64 = ctx.r1.s64 + 84;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// lwz r4,8(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// subf r3,r30,r11
	ctx.r3.s64 = ctx.r11.s64 - ctx.r30.s64;
	// bl 0x833a1390
	ctx.lr = 0x8327B32C;
	sub_833A1390(ctx, base);
	// b 0x8327b364
	goto loc_8327B364;
loc_8327B330:
	// lwz r11,8(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x8327b38c
	if (ctx.cr6.lt) goto loc_8327B38C;
	// lwz r10,12(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 12);
	// add r9,r11,r10
	ctx.r9.u64 = ctx.r11.u64 + ctx.r10.u64;
	// cmplw cr6,r31,r9
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r9.u32, ctx.xer);
	// bge cr6,0x8327b38c
	if (!ctx.cr6.lt) goto loc_8327B38C;
	// subf r11,r11,r31
	ctx.r11.s64 = ctx.r31.s64 - ctx.r11.s64;
	// subf r11,r10,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r10.s64;
	// addic. r11,r11,4
	ctx.xer.ca = ctx.r11.u32 > 4294967291;
	ctx.r11.s64 = ctx.r11.s64 + 4;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bgt 0x8327b38c
	if (ctx.cr0.gt) goto loc_8327B38C;
loc_8327B35C:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
loc_8327B364:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8328b5a0
	ctx.lr = 0x8327B36C;
	sub_8328B5A0(ctx, base);
	// cmpwi cr6,r3,4
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 4, ctx.xer);
	// beq cr6,0x8327b3c8
	if (ctx.cr6.eq) goto loc_8327B3C8;
	// cmpwi cr6,r3,8
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 8, ctx.xer);
	// beq cr6,0x8327b398
	if (ctx.cr6.eq) goto loc_8327B398;
	// cmpwi cr6,r3,64
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 64, ctx.xer);
	// beq cr6,0x8327b3c0
	if (ctx.cr6.eq) goto loc_8327B3C0;
	// cmpwi cr6,r3,128
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 128, ctx.xer);
	// beq cr6,0x8327b3c0
	if (ctx.cr6.eq) goto loc_8327B3C0;
loc_8327B38C:
	// li r3,1
	ctx.r3.s64 = 1;
loc_8327B390:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x833a01f8
	__restgprlr_28(ctx, base);
	return;
loc_8327B398:
	// rlwinm. r11,r28,0,25,25
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 0) & 0x40;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8327b3c0
	if (ctx.cr0.eq) goto loc_8327B3C0;
	// li r4,8
	ctx.r4.s64 = 8;
loc_8327B3A4:
	// addi r5,r1,156
	ctx.r5.s64 = ctx.r1.s64 + 156;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x83279e48
	ctx.lr = 0x8327B3B0;
	sub_83279E48(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8327b38c
	if (ctx.cr0.eq) goto loc_8327B38C;
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// beq cr6,0x8327b38c
	if (ctx.cr6.eq) goto loc_8327B38C;
loc_8327B3C0:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x8327b390
	goto loc_8327B390;
loc_8327B3C8:
	// andi. r11,r28,72
	ctx.r11.u64 = ctx.r28.u64 & 72;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// cmpwi r11,0
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8327b3c0
	if (ctx.cr0.eq) goto loc_8327B3C0;
	// li r4,4
	ctx.r4.s64 = 4;
	// b 0x8327b3a4
	goto loc_8327B3A4;
}

__attribute__((alias("__imp__sub_8327B3DC"))) PPC_WEAK_FUNC(sub_8327B3DC);
PPC_FUNC_IMPL(__imp__sub_8327B3DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8327B3E0"))) PPC_WEAK_FUNC(sub_8327B3E0);
PPC_FUNC_IMPL(__imp__sub_8327B3E0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r30,8448(r3)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8448);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r3,264(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 264);
	// bl 0x8283ac58
	ctx.lr = 0x8327B404;
	sub_8283AC58(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x8327b42c
	if (ctx.cr0.eq) goto loc_8327B42C;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// lwz r3,264(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 264);
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// bl 0x8328c2a0
	ctx.lr = 0x8327B41C;
	sub_8328C2A0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r5,80(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r4,84(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// bl 0x8327a2b8
	ctx.lr = 0x8327B42C;
	sub_8327A2B8(ctx, base);
loc_8327B42C:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8327B444"))) PPC_WEAK_FUNC(sub_8327B444);
PPC_FUNC_IMPL(__imp__sub_8327B444) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8327B448"))) PPC_WEAK_FUNC(sub_8327B448);
PPC_FUNC_IMPL(__imp__sub_8327B448) {
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
	// lwz r10,3600(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 3600);
	// addi r31,r3,3496
	ctx.r31.s64 = ctx.r3.s64 + 3496;
	// addi r11,r31,104
	ctx.r11.s64 = ctx.r31.s64 + 104;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x8327b474
	if (!ctx.cr6.eq) goto loc_8327B474;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x8327b4a4
	goto loc_8327B4A4;
loc_8327B474:
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// addi r3,r11,4
	ctx.r3.s64 = ctx.r11.s64 + 4;
	// bl 0x8327a648
	ctx.lr = 0x8327B480;
	sub_8327A648(ctx, base);
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
	ctx.lr = 0x8327B498;
	sub_83276EE0(ctx, base);
	// lwz r11,96(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 96);
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// subf r3,r11,r10
	ctx.r3.s64 = ctx.r10.s64 - ctx.r11.s64;
loc_8327B4A4:
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

__attribute__((alias("__imp__sub_8327B4B8"))) PPC_WEAK_FUNC(sub_8327B4B8);
PPC_FUNC_IMPL(__imp__sub_8327B4B8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// b 0x8327b510
	goto loc_8327B510;
loc_8327B4D8:
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x8328b5a0
	ctx.lr = 0x8327B4E0;
	sub_8328B5A0(ctx, base);
	// cmpwi cr6,r3,128
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 128, ctx.xer);
	// bne cr6,0x8327b53c
	if (!ctx.cr6.eq) goto loc_8327B53C;
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
	ctx.lr = 0x8327B504;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r4,4
	ctx.r4.s64 = 4;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8327a200
	ctx.lr = 0x8327B510;
	sub_8327A200(ctx, base);
loc_8327B510:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// li r5,4
	ctx.r5.s64 = 4;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,24(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8327B530;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// beq cr6,0x8327b4d8
	if (ctx.cr6.eq) goto loc_8327B4D8;
loc_8327B53C:
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
	ctx.lr = 0x8327B558;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8327B570"))) PPC_WEAK_FUNC(sub_8327B570);
PPC_FUNC_IMPL(__imp__sub_8327B570) {
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
	// cmpwi cr6,r5,128
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 128, ctx.xer);
	// bne cr6,0x8327b594
	if (!ctx.cr6.eq) goto loc_8327B594;
loc_8327B58C:
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x8327b5bc
	goto loc_8327B5BC;
loc_8327B594:
	// cmpwi cr6,r4,4
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 4, ctx.xer);
	// bgt cr6,0x8327b5ac
	if (ctx.cr6.gt) goto loc_8327B5AC;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8327a260
	ctx.lr = 0x8327B5A4;
	sub_8327A260(ctx, base);
	// cmpwi cr6,r3,1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 1, ctx.xer);
	// beq cr6,0x8327b58c
	if (ctx.cr6.eq) goto loc_8327B58C;
loc_8327B5AC:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83279d10
	ctx.lr = 0x8327B5B4;
	sub_83279D10(ctx, base);
	// addic r11,r3,-1
	ctx.xer.ca = ctx.r3.u32 > 0;
	ctx.r11.s64 = ctx.r3.s64 + -1;
	// subfe r3,r11,r3
	temp.u8 = (~ctx.r11.u32 + ctx.r3.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r3.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r3.u64 = ~ctx.r11.u64 + ctx.r3.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
loc_8327B5BC:
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

__attribute__((alias("__imp__sub_8327B5D0"))) PPC_WEAK_FUNC(sub_8327B5D0);
PPC_FUNC_IMPL(__imp__sub_8327B5D0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x833a019c
	ctx.lr = 0x8327B5D8;
	__savegprlr_25(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// ld r11,328(r3)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r3.u32 + 328);
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// lwz r27,20(r5)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r5.u32 + 20);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r4,r9
	ctx.r4.u64 = ctx.r9.u64;
	// li r26,0
	ctx.r26.s64 = 0;
	// cmpdi cr6,r11,0
	ctx.cr6.compare<int64_t>(ctx.r11.s64, 0, ctx.xer);
	// bge cr6,0x8327b62c
	if (!ctx.cr6.lt) goto loc_8327B62C;
	// ld r30,0(r6)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r6.u32 + 0);
	// cmpdi cr6,r30,0
	ctx.cr6.compare<int64_t>(ctx.r30.s64, 0, ctx.xer);
	// bge cr6,0x8327b610
	if (!ctx.cr6.lt) goto loc_8327B610;
	// li r3,-1
	ctx.r3.s64 = -1;
	// b 0x8327b738
	goto loc_8327B738;
loc_8327B610:
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x8327a338
	ctx.lr = 0x8327B618;
	sub_8327A338(ctx, base);
	// subf r11,r3,r30
	ctx.r11.s64 = ctx.r30.s64 - ctx.r3.s64;
	// cmpdi cr6,r11,0
	ctx.cr6.compare<int64_t>(ctx.r11.s64, 0, ctx.xer);
	// bgt cr6,0x8327b628
	if (ctx.cr6.gt) goto loc_8327B628;
	// mr r11,r26
	ctx.r11.u64 = ctx.r26.u64;
loc_8327B628:
	// std r11,328(r29)
	PPC_STORE_U64(ctx.r29.u32 + 328, ctx.r11.u64);
loc_8327B62C:
	// ld r28,0(r6)
	ctx.r28.u64 = PPC_LOAD_U64(ctx.r6.u32 + 0);
	// cmpdi cr6,r28,0
	ctx.cr6.compare<int64_t>(ctx.r28.s64, 0, ctx.xer);
	// blt cr6,0x8327b6c4
	if (ctx.cr6.lt) goto loc_8327B6C4;
	// addi r11,r31,16
	ctx.r11.s64 = ctx.r31.s64 + 16;
	// mr r9,r6
	ctx.r9.u64 = ctx.r6.u64;
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// addi r3,r11,4
	ctx.r3.s64 = ctx.r11.s64 + 4;
loc_8327B648:
	// lbz r30,0(r10)
	ctx.r30.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// lbz r25,0(r9)
	ctx.r25.u64 = PPC_LOAD_U8(ctx.r9.u32 + 0);
	// subf. r30,r25,r30
	ctx.r30.s64 = ctx.r30.s64 - ctx.r25.s64;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// bne 0x8327b668
	if (!ctx.cr0.eq) goto loc_8327B668;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// cmpw cr6,r10,r3
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r3.s32, ctx.xer);
	// bne cr6,0x8327b648
	if (!ctx.cr6.eq) goto loc_8327B648;
loc_8327B668:
	// cmpwi r30,0
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// beq 0x8327b6c4
	if (ctx.cr0.eq) goto loc_8327B6C4;
	// ld r10,328(r29)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r29.u32 + 328);
	// subf r3,r10,r28
	ctx.r3.s64 = ctx.r28.s64 - ctx.r10.s64;
	// cmpdi cr6,r3,0
	ctx.cr6.compare<int64_t>(ctx.r3.s64, 0, ctx.xer);
	// bgt cr6,0x8327b684
	if (ctx.cr6.gt) goto loc_8327B684;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
loc_8327B684:
	// ld r10,0(r6)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r6.u32 + 0);
	// std r10,0(r11)
	PPC_STORE_U64(ctx.r11.u32 + 0, ctx.r10.u64);
	// ld r10,8(r6)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r6.u32 + 8);
	// std r10,8(r11)
	PPC_STORE_U64(ctx.r11.u32 + 8, ctx.r10.u64);
	// stw r26,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r26.u32);
	// stw r27,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r27.u32);
	// lwz r11,24(r5)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 24);
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bne cr6,0x8327b6b4
	if (!ctx.cr6.eq) goto loc_8327B6B4;
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// b 0x8327b6b8
	goto loc_8327B6B8;
loc_8327B6B4:
	// stw r26,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r26.u32);
loc_8327B6B8:
	// ld r11,0(r6)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r6.u32 + 0);
	// std r11,0(r8)
	PPC_STORE_U64(ctx.r8.u32 + 0, ctx.r11.u64);
	// b 0x8327b738
	goto loc_8327B738;
loc_8327B6C4:
	// ld r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r31.u32 + 16);
	// ld r10,328(r29)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r29.u32 + 328);
	// subf r8,r10,r11
	ctx.r8.s64 = ctx.r11.s64 - ctx.r10.s64;
	// cmpdi cr6,r8,0
	ctx.cr6.compare<int64_t>(ctx.r8.s64, 0, ctx.xer);
	// bgt cr6,0x8327b6dc
	if (ctx.cr6.gt) goto loc_8327B6DC;
	// mr r8,r26
	ctx.r8.u64 = ctx.r26.u64;
loc_8327B6DC:
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// beq cr6,0x8327b700
	if (ctx.cr6.eq) goto loc_8327B700;
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// stw r26,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r26.u32);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r26,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r26.u32);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
loc_8327B700:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r9,8(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// subf r11,r11,r27
	ctx.r11.s64 = ctx.r27.s64 - ctx.r11.s64;
	// cmpw cr6,r9,r11
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r11.s32, ctx.xer);
	// bgt cr6,0x8327b718
	if (ctx.cr6.gt) goto loc_8327B718;
	// mr r9,r11
	ctx.r9.u64 = ctx.r11.u64;
loc_8327B718:
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// stw r9,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r9.u32);
	// add r3,r10,r11
	ctx.r3.u64 = ctx.r10.u64 + ctx.r11.u64;
	// bl 0x8327a338
	ctx.lr = 0x8327B728;
	sub_8327A338(ctx, base);
	// add r3,r3,r8
	ctx.r3.u64 = ctx.r3.u64 + ctx.r8.u64;
	// cmpdi cr6,r3,0
	ctx.cr6.compare<int64_t>(ctx.r3.s64, 0, ctx.xer);
	// bgt cr6,0x8327b738
	if (ctx.cr6.gt) goto loc_8327B738;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
loc_8327B738:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x833a01ec
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8327B740"))) PPC_WEAK_FUNC(sub_8327B740);
PPC_FUNC_IMPL(__imp__sub_8327B740) {
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
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// addi r6,r30,3496
	ctx.r6.s64 = ctx.r30.s64 + 3496;
	// addi r4,r6,28
	ctx.r4.s64 = ctx.r6.s64 + 28;
	// lwz r31,8448(r30)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8448);
	// addi r7,r6,1240
	ctx.r7.s64 = ctx.r6.s64 + 1240;
	// bl 0x8327a868
	ctx.lr = 0x8327B770;
	sub_8327A868(ctx, base);
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// beq cr6,0x8327b798
	if (ctx.cr6.eq) goto loc_8327B798;
	// li r10,64
	ctx.r10.s64 = 64;
	// addi r11,r7,-4
	ctx.r11.s64 = ctx.r7.s64 + -4;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// li r10,-1
	ctx.r10.s64 = -1;
loc_8327B788:
	// sthu r10,4(r11)
	ea = 4 + ctx.r11.u32;
	PPC_STORE_U16(ea, ctx.r10.u16);
	ctx.r11.u32 = ea;
	// bdnz 0x8327b788
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8327B788;
	// sth r10,2(r7)
	PPC_STORE_U16(ctx.r7.u32 + 2, ctx.r10.u16);
	// b 0x8327b804
	goto loc_8327B804;
loc_8327B798:
	// lwz r11,24(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x8327b7ac
	if (ctx.cr6.eq) goto loc_8327B7AC;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// bne cr6,0x8327b804
	if (!ctx.cr6.eq) goto loc_8327B804;
loc_8327B7AC:
	// lwz r11,236(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 236);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8327b804
	if (ctx.cr6.eq) goto loc_8327B804;
	// lwz r11,132(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 132);
	// lwz r10,20(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// cmpw cr6,r10,r11
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r11.s32, ctx.xer);
	// bge cr6,0x8327b7cc
	if (!ctx.cr6.lt) goto loc_8327B7CC;
	// addi r10,r10,1024
	ctx.r10.s64 = ctx.r10.s64 + 1024;
loc_8327B7CC:
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// bge cr6,0x8327b804
	if (!ctx.cr6.lt) goto loc_8327B804;
	// subf r10,r11,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r11.s64;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// li r10,-1
	ctx.r10.s64 = -1;
loc_8327B7E4:
	// srawi r9,r11,6
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x3F) != 0);
	ctx.r9.s64 = ctx.r11.s32 >> 6;
	// addze r9,r9
	temp.s64 = ctx.r9.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r9.u32;
	ctx.r9.s64 = temp.s64;
	// rlwinm r9,r9,6,0,25
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 6) & 0xFFFFFFC0;
	// subf r9,r9,r11
	ctx.r9.s64 = ctx.r11.s64 - ctx.r9.s64;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// rlwinm r9,r9,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// sthx r10,r9,r7
	PPC_STORE_U16(ctx.r9.u32 + ctx.r7.u32, ctx.r10.u16);
	// bdnz 0x8327b7e4
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8327B7E4;
loc_8327B804:
	// lwz r11,20(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// lhz r9,56(r6)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r6.u32 + 56);
	// srawi r10,r11,6
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x3F) != 0);
	ctx.r10.s64 = ctx.r11.s32 >> 6;
	// addze r10,r10
	temp.s64 = ctx.r10.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r10.u32;
	ctx.r10.s64 = temp.s64;
	// rlwinm r10,r10,6,0,25
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 6) & 0xFFFFFFC0;
	// subf r10,r10,r11
	ctx.r10.s64 = ctx.r11.s64 - ctx.r10.s64;
	// rlwinm r11,r10,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r7
	ctx.r11.u64 = ctx.r11.u64 + ctx.r7.u64;
	// sth r9,0(r11)
	PPC_STORE_U16(ctx.r11.u32 + 0, ctx.r9.u16);
	// beq cr6,0x8327b838
	if (ctx.cr6.eq) goto loc_8327B838;
	// li r10,0
	ctx.r10.s64 = 0;
	// b 0x8327b8a8
	goto loc_8327B8A8;
loc_8327B838:
	// lwz r9,20(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne cr6,0x8327b85c
	if (!ctx.cr6.eq) goto loc_8327B85C;
	// lhz r9,2(r7)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r7.u32 + 2);
	// cmplwi cr6,r9,65535
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 65535, ctx.xer);
	// bne cr6,0x8327b85c
	if (!ctx.cr6.eq) goto loc_8327B85C;
	// li r10,0
	ctx.r10.s64 = 0;
	// sth r10,2(r7)
	PPC_STORE_U16(ctx.r7.u32 + 2, ctx.r10.u16);
	// b 0x8327b8ac
	goto loc_8327B8AC;
loc_8327B85C:
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r9,r10,63
	ctx.r9.s64 = ctx.r10.s64 + 63;
loc_8327B864:
	// srawi r10,r9,6
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x3F) != 0);
	ctx.r10.s64 = ctx.r9.s32 >> 6;
	// addze r10,r10
	temp.s64 = ctx.r10.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r10.u32;
	ctx.r10.s64 = temp.s64;
	// rlwinm r10,r10,6,0,25
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 6) & 0xFFFFFFC0;
	// subf r10,r10,r9
	ctx.r10.s64 = ctx.r9.s64 - ctx.r10.s64;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// add r10,r10,r7
	ctx.r10.u64 = ctx.r10.u64 + ctx.r7.u64;
	// lhz r5,0(r10)
	ctx.r5.u64 = PPC_LOAD_U16(ctx.r10.u32 + 0);
	// cmplwi cr6,r5,65535
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 65535, ctx.xer);
	// bne cr6,0x8327b89c
	if (!ctx.cr6.eq) goto loc_8327B89C;
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// addi r9,r9,-1
	ctx.r9.s64 = ctx.r9.s64 + -1;
	// cmpwi cr6,r8,64
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 64, ctx.xer);
	// blt cr6,0x8327b864
	if (ctx.cr6.lt) goto loc_8327B864;
	// b 0x8327b8ac
	goto loc_8327B8AC;
loc_8327B89C:
	// lhz r9,2(r10)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r10.u32 + 2);
	// lhz r10,0(r10)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r10.u32 + 0);
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
loc_8327B8A8:
	// sth r10,2(r11)
	PPC_STORE_U16(ctx.r11.u32 + 2, ctx.r10.u16);
loc_8327B8AC:
	// lhz r10,2(r11)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r11.u32 + 2);
	// sth r10,58(r6)
	PPC_STORE_U16(ctx.r6.u32 + 58, ctx.r10.u16);
	// lwz r10,24(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// cmpwi cr6,r10,3
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 3, ctx.xer);
	// bne cr6,0x8327b928
	if (!ctx.cr6.eq) goto loc_8327B928;
	// lha r10,0(r11)
	ctx.r10.s64 = int16_t(PPC_LOAD_U16(ctx.r11.u32 + 0));
	// cmpwi r10,0
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x8327b928
	if (ctx.cr0.eq) goto loc_8327B928;
	// lwz r9,236(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 236);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x8327b928
	if (ctx.cr6.eq) goto loc_8327B928;
	// rotlwi r9,r9,0
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r9.u32, 0);
	// lhz r11,2(r11)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r11.u32 + 2);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// extsh r8,r11
	ctx.r8.s64 = ctx.r11.s16;
	// lwz r9,132(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + 132);
	// srawi r10,r9,6
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x3F) != 0);
	ctx.r10.s64 = ctx.r9.s32 >> 6;
	// addze r11,r10
	temp.s64 = ctx.r10.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r10.u32;
	ctx.r11.s64 = temp.s64;
	// rlwinm r11,r11,6,0,25
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 6) & 0xFFFFFFC0;
	// subf r11,r11,r9
	ctx.r11.s64 = ctx.r9.s64 - ctx.r11.s64;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r7
	ctx.r11.u64 = ctx.r11.u64 + ctx.r7.u64;
	// sth r8,2(r11)
	PPC_STORE_U16(ctx.r11.u32 + 2, ctx.r8.u16);
	// lwz r11,236(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 236);
	// sth r8,58(r11)
	PPC_STORE_U16(ctx.r11.u32 + 58, ctx.r8.u16);
	// lwz r4,236(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 236);
	// bl 0x8327a358
	ctx.lr = 0x8327B91C;
	sub_8327A358(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r4,236(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 236);
	// bl 0x8327ac98
	ctx.lr = 0x8327B928;
	sub_8327AC98(ctx, base);
loc_8327B928:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8327B940"))) PPC_WEAK_FUNC(sub_8327B940);
PPC_FUNC_IMPL(__imp__sub_8327B940) {
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
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// lwz r4,16(r4)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r4.u32 + 16);
	// mr r10,r5
	ctx.r10.u64 = ctx.r5.u64;
	// addi r31,r3,3496
	ctx.r31.s64 = ctx.r3.s64 + 3496;
	// cmpdi cr6,r5,0
	ctx.cr6.compare<int64_t>(ctx.r5.s64, 0, ctx.xer);
	// lwz r30,20(r11)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// blt cr6,0x8327b988
	if (ctx.cr6.lt) goto loc_8327B988;
	// addi r7,r31,28
	ctx.r7.s64 = ctx.r31.s64 + 28;
	// lwz r5,28(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// mr r3,r10
	ctx.r3.u64 = ctx.r10.u64;
	// bl 0x8327a4a0
	ctx.lr = 0x8327B984;
	sub_8327A4A0(ctx, base);
	// b 0x8327ba1c
	goto loc_8327BA1C;
loc_8327B988:
	// lwz r11,104(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 104);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8327b9b0
	if (!ctx.cr6.eq) goto loc_8327B9B0;
	// stw r4,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r4.u32);
	// stw r11,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r11.u32);
	// stw r11,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r11.u32);
	// stw r11,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r11.u32);
	// stw r11,44(r31)
	PPC_STORE_U32(ctx.r31.u32 + 44, ctx.r11.u32);
	// stw r11,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r11.u32);
	// b 0x8327ba1c
	goto loc_8327BA1C;
loc_8327B9B0:
	// cmpwi cr6,r6,0
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// beq cr6,0x8327b9ec
	if (ctx.cr6.eq) goto loc_8327B9EC;
	// addi r4,r31,28
	ctx.r4.s64 = ctx.r31.s64 + 28;
	// addi r3,r31,108
	ctx.r3.s64 = ctx.r31.s64 + 108;
	// bl 0x8327a648
	ctx.lr = 0x8327B9C4;
	sub_8327A648(ctx, base);
	// srawi r11,r30,6
	ctx.xer.ca = (ctx.r30.s32 < 0) & ((ctx.r30.u32 & 0x3F) != 0);
	ctx.r11.s64 = ctx.r30.s32 >> 6;
	// lhz r10,58(r31)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r31.u32 + 58);
	// addze r11,r11
	temp.s64 = ctx.r11.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r11.u32;
	ctx.r11.s64 = temp.s64;
	// rlwinm r11,r11,6,0,25
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 6) & 0xFFFFFFC0;
	// subf r11,r11,r30
	ctx.r11.s64 = ctx.r30.s64 - ctx.r11.s64;
	// sth r10,1242(r31)
	PPC_STORE_U16(ctx.r31.u32 + 1242, ctx.r10.u16);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// sth r10,1242(r11)
	PPC_STORE_U16(ctx.r11.u32 + 1242, ctx.r10.u16);
	// b 0x8327ba1c
	goto loc_8327BA1C;
loc_8327B9EC:
	// lwz r11,108(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 108);
	// lwz r10,112(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 112);
	// lwz r9,116(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 116);
	// lwz r8,120(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 120);
	// lwz r7,124(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 124);
	// lwz r6,128(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 128);
	// stw r11,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r11.u32);
	// stw r10,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r10.u32);
	// stw r9,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r9.u32);
	// stw r8,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r8.u32);
	// stw r7,44(r31)
	PPC_STORE_U32(ctx.r31.u32 + 44, ctx.r7.u32);
	// stw r6,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r6.u32);
loc_8327BA1C:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8327BA34"))) PPC_WEAK_FUNC(sub_8327BA34);
PPC_FUNC_IMPL(__imp__sub_8327BA34) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8327BA38"))) PPC_WEAK_FUNC(sub_8327BA38);
PPC_FUNC_IMPL(__imp__sub_8327BA38) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x833a01a0
	ctx.lr = 0x8327BA40;
	__savegprlr_26(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,3776(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 3776);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r26,8448(r3)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8448);
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// addi r31,r3,3496
	ctx.r31.s64 = ctx.r3.s64 + 3496;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8327ba68
	if (!ctx.cr6.eq) goto loc_8327BA68;
	// li r29,0
	ctx.r29.s64 = 0;
	// b 0x8327ba7c
	goto loc_8327BA7C;
loc_8327BA68:
	// lwz r11,348(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 348);
	// lwz r9,316(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 316);
	// lwz r10,228(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 228);
	// subf r11,r9,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r9.s64;
	// add r29,r11,r10
	ctx.r29.u64 = ctx.r11.u64 + ctx.r10.u64;
loc_8327BA7C:
	// lwz r11,24(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// lwz r28,232(r31)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r31.u32 + 232);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8327baa8
	if (ctx.cr6.eq) goto loc_8327BAA8;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bctrl 
	ctx.lr = 0x8327BAA4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// b 0x8327bb7c
	goto loc_8327BB7C;
loc_8327BAA8:
	// cmpwi cr6,r27,1
	ctx.cr6.compare<int32_t>(ctx.r27.s32, 1, ctx.xer);
	// bne cr6,0x8327bac0
	if (!ctx.cr6.eq) goto loc_8327BAC0;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83276b08
	ctx.lr = 0x8327BABC;
	sub_83276B08(ctx, base);
	// b 0x8327bac8
	goto loc_8327BAC8;
loc_8327BAC0:
	// cmpwi cr6,r27,2
	ctx.cr6.compare<int32_t>(ctx.r27.s32, 2, ctx.xer);
	// bne cr6,0x8327bad8
	if (!ctx.cr6.eq) goto loc_8327BAD8;
loc_8327BAC8:
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83276b88
	ctx.lr = 0x8327BAD4;
	sub_83276B88(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
loc_8327BAD8:
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x83277640
	ctx.lr = 0x8327BAE8;
	sub_83277640(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r10,84(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmpw cr6,r10,r11
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r11.s32, ctx.xer);
	// bgt cr6,0x8327bb10
	if (ctx.cr6.gt) goto loc_8327BB10;
	// lwz r11,12(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 12);
	// lwz r10,2756(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 2756);
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// blt cr6,0x8327bb10
	if (ctx.cr6.lt) goto loc_8327BB10;
loc_8327BB08:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x8327bb7c
	goto loc_8327BB7C;
loc_8327BB10:
	// addi r5,r1,92
	ctx.r5.s64 = ctx.r1.s64 + 92;
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x83276d60
	ctx.lr = 0x8327BB20;
	sub_83276D60(ctx, base);
	// lwz r10,88(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// blt cr6,0x8327bb08
	if (ctx.cr6.lt) goto loc_8327BB08;
	// addi r6,r1,100
	ctx.r6.s64 = ctx.r1.s64 + 100;
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8327aad8
	ctx.lr = 0x8327BB40;
	sub_8327AAD8(ctx, base);
	// lwz r11,96(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// mr r3,r10
	ctx.r3.u64 = ctx.r10.u64;
	// lwz r4,92(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// mullw r11,r11,r28
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r28.s32);
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// lwz r10,100(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// divw r11,r11,r10
	ctx.r11.s32 = ctx.r11.s32 / ctx.r10.s32;
	// subf r5,r11,r29
	ctx.r5.s64 = ctx.r29.s64 - ctx.r11.s64;
	// bl 0x83289368
	ctx.lr = 0x8327BB64;
	sub_83289368(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x8327bb08
	if (!ctx.cr0.eq) goto loc_8327BB08;
	// lwz r11,12(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 12);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,12(r26)
	PPC_STORE_U32(ctx.r26.u32 + 12, ctx.r11.u32);
loc_8327BB7C:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x833a01f0
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8327BB84"))) PPC_WEAK_FUNC(sub_8327BB84);
PPC_FUNC_IMPL(__imp__sub_8327BB84) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8327BB88"))) PPC_WEAK_FUNC(sub_8327BB88);
PPC_FUNC_IMPL(__imp__sub_8327BB88) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x833a01a4
	ctx.lr = 0x8327BB90;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r30,8448(r3)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8448);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// lwz r28,0(r30)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// bl 0x8327aaf0
	ctx.lr = 0x8327BBA8;
	sub_8327AAF0(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x832ee438
	ctx.lr = 0x8327BBB8;
	sub_832EE438(ctx, base);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x8328c048
	ctx.lr = 0x8327BBC8;
	sub_8328C048(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x832ee438
	ctx.lr = 0x8327BBDC;
	sub_832EE438(ctx, base);
	// subf r27,r27,r3
	ctx.r27.s64 = ctx.r3.s64 - ctx.r27.s64;
	// lis r6,-256
	ctx.r6.s64 = -16777216;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// ori r6,r6,3847
	ctx.r6.u64 = ctx.r6.u64 | 3847;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// bl 0x8327a268
	ctx.lr = 0x8327BBF8;
	sub_8327A268(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8327a200
	ctx.lr = 0x8327BC08;
	sub_8327A200(ctx, base);
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// beq cr6,0x8327bc18
	if (ctx.cr6.eq) goto loc_8327BC18;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// b 0x8327bc40
	goto loc_8327BC40;
loc_8327BC18:
	// lbz r11,108(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 108);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x8327bc2c
	if (!ctx.cr0.eq) goto loc_8327BC2C;
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,244(r30)
	PPC_STORE_U32(ctx.r30.u32 + 244, ctx.r11.u32);
loc_8327BC2C:
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r5,44(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + 44);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8327e428
	ctx.lr = 0x8327BC3C;
	sub_8327E428(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
loc_8327BC40:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x833a01f4
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8327BC48"))) PPC_WEAK_FUNC(sub_8327BC48);
PPC_FUNC_IMPL(__imp__sub_8327BC48) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x833a01a0
	ctx.lr = 0x8327BC50;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r28,8448(r3)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8448);
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// mr r29,r6
	ctx.r29.u64 = ctx.r6.u64;
	// lwz r11,240(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 240);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8327bd20
	if (ctx.cr6.eq) goto loc_8327BD20;
	// stw r11,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r11.u32);
loc_8327BC78:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// li r5,128
	ctx.r5.s64 = 128;
	// lwz r10,0(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// sth r11,12(r10)
	PPC_STORE_U16(ctx.r10.u32 + 12, ctx.r11.u16);
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// lwz r10,4(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// sth r10,14(r11)
	PPC_STORE_U16(ctx.r11.u32 + 14, ctx.r10.u16);
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// lwz r10,8(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// sth r10,16(r11)
	PPC_STORE_U16(ctx.r11.u32 + 16, ctx.r10.u16);
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// lwz r10,12(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// sth r10,18(r11)
	PPC_STORE_U16(ctx.r11.u32 + 18, ctx.r10.u16);
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// lwz r10,24(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 24);
	// stw r10,20(r11)
	PPC_STORE_U32(ctx.r11.u32 + 20, ctx.r10.u32);
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// addi r3,r11,112
	ctx.r3.s64 = ctx.r11.s64 + 112;
	// bl 0x833a1390
	ctx.lr = 0x8327BCC8;
	sub_833A1390(ctx, base);
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// ld r10,256(r28)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r28.u32 + 256);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// std r10,240(r11)
	PPC_STORE_U64(ctx.r11.u32 + 240, ctx.r10.u64);
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// lwz r10,52(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 52);
	// stw r10,248(r11)
	PPC_STORE_U32(ctx.r11.u32 + 248, ctx.r10.u32);
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// lwz r10,48(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 48);
	// stw r10,252(r11)
	PPC_STORE_U32(ctx.r11.u32 + 252, ctx.r10.u32);
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// lwz r10,104(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 104);
	// stw r10,256(r11)
	PPC_STORE_U32(ctx.r11.u32 + 256, ctx.r10.u32);
	// bl 0x8327ab18
	ctx.lr = 0x8327BD04;
	sub_8327AB18(ctx, base);
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// li r27,0
	ctx.r27.s64 = 0;
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x8327bd74
	if (ctx.cr0.eq) goto loc_8327BD74;
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r10,260(r11)
	PPC_STORE_U32(ctx.r11.u32 + 260, ctx.r10.u32);
	// b 0x8327bd78
	goto loc_8327BD78;
loc_8327BD20:
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x83284850
	ctx.lr = 0x8327BD28;
	sub_83284850(ctx, base);
	// stw r3,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r3.u32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne 0x8327bc78
	if (!ctx.cr0.eq) goto loc_8327BC78;
	// lis r11,-31822
	ctx.r11.s64 = -2085486592;
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r10,2460(r26)
	PPC_STORE_U32(ctx.r26.u32 + 2460, ctx.r10.u32);
	// lwz r3,2364(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 2364);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8327bd6c
	if (ctx.cr6.eq) goto loc_8327BD6C;
	// lis r11,-31845
	ctx.r11.s64 = -2086993920;
	// addi r11,r11,4512
	ctx.r11.s64 = ctx.r11.s64 + 4512;
	// addi r4,r11,4
	ctx.r4.s64 = ctx.r11.s64 + 4;
	// stw r26,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r26.u32);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,36(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8327BD6C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8327BD6C:
	// li r3,-1
	ctx.r3.s64 = -1;
	// b 0x8327c044
	goto loc_8327C044;
loc_8327BD74:
	// stw r27,260(r11)
	PPC_STORE_U32(ctx.r11.u32 + 260, ctx.r27.u32);
loc_8327BD78:
	// lwz r11,64(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 64);
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// lwz r11,24(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 24);
	// bne cr6,0x8327be98
	if (!ctx.cr6.eq) goto loc_8327BE98;
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x8327bd98
	if (ctx.cr6.eq) goto loc_8327BD98;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// bne cr6,0x8327bdc4
	if (!ctx.cr6.eq) goto loc_8327BDC4;
loc_8327BD98:
	// lwz r11,240(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 240);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8327bdc4
	if (!ctx.cr6.eq) goto loc_8327BDC4;
	// lwz r3,232(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 232);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8327bdb4
	if (ctx.cr6.eq) goto loc_8327BDB4;
	// bl 0x83284960
	ctx.lr = 0x8327BDB4;
	sub_83284960(ctx, base);
loc_8327BDB4:
	// lwz r11,236(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 236);
	// stw r11,232(r28)
	PPC_STORE_U32(ctx.r28.u32 + 232, ctx.r11.u32);
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// stw r11,236(r28)
	PPC_STORE_U32(ctx.r28.u32 + 236, ctx.r11.u32);
loc_8327BDC4:
	// lwz r7,236(r28)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r28.u32 + 236);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r10,4(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// lwz r8,232(r28)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r28.u32 + 232);
	// bne cr6,0x8327bde0
	if (!ctx.cr6.eq) goto loc_8327BDE0;
	// lwz r7,0(r29)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
loc_8327BDE0:
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// bne cr6,0x8327bdec
	if (!ctx.cr6.eq) goto loc_8327BDEC;
	// mr r8,r7
	ctx.r8.u64 = ctx.r7.u64;
loc_8327BDEC:
	// addi r11,r11,15
	ctx.r11.s64 = ctx.r11.s64 + 15;
	// addi r9,r10,15
	ctx.r9.s64 = ctx.r10.s64 + 15;
	// srawi r11,r11,4
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0xF) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 4;
	// addze r11,r11
	temp.s64 = ctx.r11.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r11.u32;
	ctx.r11.s64 = temp.s64;
	// rlwinm r10,r11,4,0,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// addi r11,r10,127
	ctx.r11.s64 = ctx.r10.s64 + 127;
	// srawi r11,r11,7
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x7F) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 7;
	// addze r11,r11
	temp.s64 = ctx.r11.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r11.u32;
	ctx.r11.s64 = temp.s64;
	// srawi r10,r10,1
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x1) != 0);
	ctx.r10.s64 = ctx.r10.s32 >> 1;
	// rlwinm r6,r11,7,0,24
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 7) & 0xFFFFFF80;
	// addze r10,r10
	temp.s64 = ctx.r10.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r10.u32;
	ctx.r10.s64 = temp.s64;
	// extsh r6,r6
	ctx.r6.s64 = ctx.r6.s16;
	// addi r10,r10,127
	ctx.r10.s64 = ctx.r10.s64 + 127;
	// sth r6,14(r31)
	PPC_STORE_U16(ctx.r31.u32 + 14, ctx.r6.u16);
	// srawi r10,r10,7
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x7F) != 0);
	ctx.r10.s64 = ctx.r10.s32 >> 7;
	// addze r10,r10
	temp.s64 = ctx.r10.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r10.u32;
	ctx.r10.s64 = temp.s64;
	// srawi r9,r9,4
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0xF) != 0);
	ctx.r9.s64 = ctx.r9.s32 >> 4;
	// rlwinm r5,r10,7,0,24
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 7) & 0xFFFFFF80;
	// addze r9,r9
	temp.s64 = ctx.r9.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r9.u32;
	ctx.r9.s64 = temp.s64;
	// extsh r5,r5
	ctx.r5.s64 = ctx.r5.s16;
	// rlwinm r4,r9,4,0,27
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 4) & 0xFFFFFFF0;
	// mullw r9,r9,r11
	ctx.r9.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r11.s32);
	// sth r5,12(r31)
	PPC_STORE_U16(ctx.r31.u32 + 12, ctx.r5.u16);
	// srawi r11,r4,1
	ctx.xer.ca = (ctx.r4.s32 < 0) & ((ctx.r4.u32 & 0x1) != 0);
	ctx.r11.s64 = ctx.r4.s32 >> 1;
	// addze r11,r11
	temp.s64 = ctx.r11.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r11.u32;
	ctx.r11.s64 = temp.s64;
	// mullw r10,r11,r10
	ctx.r10.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r10.s32);
	// lwz r11,8(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 8);
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// rlwinm r8,r9,11,0,20
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 11) & 0xFFFFF800;
	// sth r6,30(r31)
	PPC_STORE_U16(ctx.r31.u32 + 30, ctx.r6.u16);
	// rlwinm r10,r10,7,0,24
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 7) & 0xFFFFFF80;
	// sth r5,28(r31)
	PPC_STORE_U16(ctx.r31.u32 + 28, ctx.r5.u16);
	// add r11,r8,r11
	ctx.r11.u64 = ctx.r8.u64 + ctx.r11.u64;
	// add r9,r11,r10
	ctx.r9.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// stw r9,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r9.u32);
	// lwz r9,8(r7)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r7.u32 + 8);
	// add r11,r9,r8
	ctx.r11.u64 = ctx.r9.u64 + ctx.r8.u64;
	// add r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r11,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r11.u32);
	// stw r9,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r9.u32);
	// stw r10,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r10.u32);
	// b 0x8327bf28
	goto loc_8327BF28;
loc_8327BE98:
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x8327bea8
	if (ctx.cr6.eq) goto loc_8327BEA8;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// bne cr6,0x8327bec8
	if (!ctx.cr6.eq) goto loc_8327BEC8;
loc_8327BEA8:
	// lwz r11,196(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 196);
	// lwz r10,192(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 192);
	// xori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 ^ 1;
	// xori r10,r10,1
	ctx.r10.u64 = ctx.r10.u64 ^ 1;
	// stw r11,196(r28)
	PPC_STORE_U32(ctx.r28.u32 + 196, ctx.r11.u32);
	// stw r10,192(r28)
	PPC_STORE_U32(ctx.r28.u32 + 192, ctx.r10.u32);
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// stw r11,236(r28)
	PPC_STORE_U32(ctx.r28.u32 + 236, ctx.r11.u32);
loc_8327BEC8:
	// lwz r10,192(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 192);
	// addi r11,r28,200
	ctx.r11.s64 = ctx.r28.s64 + 200;
	// addi r9,r31,16
	ctx.r9.s64 = ctx.r31.s64 + 16;
	// rlwinm r10,r10,4,0,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 4) & 0xFFFFFFF0;
	// add r9,r10,r11
	ctx.r9.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwzx r10,r10,r11
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// lwz r10,4(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// stw r10,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r10.u32);
	// lwz r10,8(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// stw r10,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r10.u32);
	// lwz r10,12(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 12);
	// stw r10,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r10.u32);
	// lwz r10,196(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 196);
	// rlwinm r10,r10,4,0,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 4) & 0xFFFFFFF0;
	// lwzx r9,r10,r11
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stw r9,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r9.u32);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// stw r10,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r10.u32);
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// stw r10,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r10.u32);
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// stw r11,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r11.u32);
loc_8327BF28:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r11,r11,15
	ctx.r11.s64 = ctx.r11.s64 + 15;
	// srawi r11,r11,4
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0xF) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 4;
	// addze r11,r11
	temp.s64 = ctx.r11.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r11.u32;
	ctx.r11.s64 = temp.s64;
	// rlwinm r11,r11,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// addi r11,r11,127
	ctx.r11.s64 = ctx.r11.s64 + 127;
	// srawi r11,r11,7
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x7F) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 7;
	// addze r11,r11
	temp.s64 = ctx.r11.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r11.u32;
	ctx.r11.s64 = temp.s64;
	// rlwinm r11,r11,7,0,24
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 7) & 0xFFFFFF80;
	// sth r11,46(r31)
	PPC_STORE_U16(ctx.r31.u32 + 46, ctx.r11.u16);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// addi r11,r11,15
	ctx.r11.s64 = ctx.r11.s64 + 15;
	// srawi r11,r11,4
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0xF) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 4;
	// addze r11,r11
	temp.s64 = ctx.r11.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r11.u32;
	ctx.r11.s64 = temp.s64;
	// rlwinm r11,r11,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// srawi r11,r11,1
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 1;
	// addze r11,r11
	temp.s64 = ctx.r11.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r11.u32;
	ctx.r11.s64 = temp.s64;
	// addi r11,r11,127
	ctx.r11.s64 = ctx.r11.s64 + 127;
	// srawi r11,r11,7
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x7F) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 7;
	// addze r11,r11
	temp.s64 = ctx.r11.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r11.u32;
	ctx.r11.s64 = temp.s64;
	// rlwinm r11,r11,7,0,24
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 7) & 0xFFFFFF80;
	// sth r11,44(r31)
	PPC_STORE_U16(ctx.r31.u32 + 44, ctx.r11.u16);
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// stw r11,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r11.u32);
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// addi r10,r10,15
	ctx.r10.s64 = ctx.r10.s64 + 15;
	// srawi r10,r10,4
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0xF) != 0);
	ctx.r10.s64 = ctx.r10.s32 >> 4;
	// addze r10,r10
	temp.s64 = ctx.r10.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r10.u32;
	ctx.r10.s64 = temp.s64;
	// rlwinm r10,r10,4,0,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 4) & 0xFFFFFFF0;
	// addi r9,r10,127
	ctx.r9.s64 = ctx.r10.s64 + 127;
	// lwz r10,4(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// addi r10,r10,15
	ctx.r10.s64 = ctx.r10.s64 + 15;
	// srawi r9,r9,7
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x7F) != 0);
	ctx.r9.s64 = ctx.r9.s32 >> 7;
	// addze r9,r9
	temp.s64 = ctx.r9.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r9.u32;
	ctx.r9.s64 = temp.s64;
	// srawi r10,r10,4
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0xF) != 0);
	ctx.r10.s64 = ctx.r10.s32 >> 4;
	// addze r10,r10
	temp.s64 = ctx.r10.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r10.u32;
	ctx.r10.s64 = temp.s64;
	// mullw r10,r9,r10
	ctx.r10.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r10.s32);
	// rlwinm r10,r10,11,0,20
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 11) & 0xFFFFF800;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stw r11,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r11.u32);
	// lwz r9,4(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// addi r11,r11,15
	ctx.r11.s64 = ctx.r11.s64 + 15;
	// srawi r11,r11,4
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0xF) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 4;
	// lwz r10,32(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// addi r9,r9,15
	ctx.r9.s64 = ctx.r9.s64 + 15;
	// addze r11,r11
	temp.s64 = ctx.r11.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r11.u32;
	ctx.r11.s64 = temp.s64;
	// rlwinm r11,r11,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// srawi r11,r11,1
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 1;
	// addze r11,r11
	temp.s64 = ctx.r11.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r11.u32;
	ctx.r11.s64 = temp.s64;
	// addi r11,r11,127
	ctx.r11.s64 = ctx.r11.s64 + 127;
	// srawi r11,r11,7
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x7F) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 7;
	// addze r11,r11
	temp.s64 = ctx.r11.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r11.u32;
	ctx.r11.s64 = temp.s64;
	// srawi r9,r9,4
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0xF) != 0);
	ctx.r9.s64 = ctx.r9.s32 >> 4;
	// addze r9,r9
	temp.s64 = ctx.r9.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r9.u32;
	ctx.r9.s64 = temp.s64;
	// rlwinm r9,r9,4,0,27
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 4) & 0xFFFFFFF0;
	// srawi r9,r9,1
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x1) != 0);
	ctx.r9.s64 = ctx.r9.s32 >> 1;
	// addze r9,r9
	temp.s64 = ctx.r9.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r9.u32;
	ctx.r9.s64 = temp.s64;
	// mullw r11,r11,r9
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r9.s32);
	// rlwinm r11,r11,7,0,24
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 7) & 0xFFFFFF80;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r11,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r11.u32);
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// addi r11,r11,112
	ctx.r11.s64 = ctx.r11.s64 + 112;
	// stw r27,52(r31)
	PPC_STORE_U32(ctx.r31.u32 + 52, ctx.r27.u32);
	// stw r27,56(r31)
	PPC_STORE_U32(ctx.r31.u32 + 56, ctx.r27.u32);
	// sth r27,60(r31)
	PPC_STORE_U16(ctx.r31.u32 + 60, ctx.r27.u16);
	// stw r11,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r11.u32);
	// stw r27,2460(r26)
	PPC_STORE_U32(ctx.r26.u32 + 2460, ctx.r27.u32);
loc_8327C044:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x833a01f0
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8327C04C"))) PPC_WEAK_FUNC(sub_8327C04C);
PPC_FUNC_IMPL(__imp__sub_8327C04C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8327C050"))) PPC_WEAK_FUNC(sub_8327C050);
PPC_FUNC_IMPL(__imp__sub_8327C050) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// addi r4,r3,3688
	ctx.r4.s64 = ctx.r3.s64 + 3688;
	// addi r3,r30,24
	ctx.r3.s64 = ctx.r30.s64 + 24;
	// li r5,44
	ctx.r5.s64 = 44;
	// bl 0x833a1390
	ctx.lr = 0x8327C07C;
	sub_833A1390(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8327ac98
	ctx.lr = 0x8327C088;
	sub_8327AC98(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8327C0A0"))) PPC_WEAK_FUNC(sub_8327C0A0);
PPC_FUNC_IMPL(__imp__sub_8327C0A0) {
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
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// lwz r4,8456(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8456);
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// bl 0x832881a0
	ctx.lr = 0x8327C0C8;
	sub_832881A0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x8327c0d8
	if (ctx.cr0.eq) goto loc_8327C0D8;
loc_8327C0D0:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x8327c1f4
	goto loc_8327C1F4;
loc_8327C0D8:
	// lwz r11,100(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8327c0d0
	if (ctx.cr6.eq) goto loc_8327C0D0;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x83279e48
	ctx.lr = 0x8327C0F4;
	sub_83279E48(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne 0x8327c120
	if (!ctx.cr0.eq) goto loc_8327C120;
	// lwz r10,100(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// lwz r11,108(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// addi r11,r11,-3
	ctx.r11.s64 = ctx.r11.s64 + -3;
	// subfic r10,r11,0
	ctx.xer.ca = ctx.r11.u32 <= 0;
	ctx.r10.s64 = 0 - ctx.r11.s64;
	// rlwinm r10,r11,1,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0x1;
	// addme r10,r10
	temp.u64 = ctx.r10.u32 + ctx.xer.ca + 0xFFFFFFFF;
	ctx.xer.ca = temp.u64 >> 32;
	ctx.r10.u64 = temp.u32;
	// and r31,r10,r11
	ctx.r31.u64 = ctx.r10.u64 & ctx.r11.u64;
	// b 0x8327c170
	goto loc_8327C170;
loc_8327C120:
	// lwz r11,96(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// lwz r9,100(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// cmplw cr6,r11,r3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r3.u32, ctx.xer);
	// bgt cr6,0x8327c144
	if (ctx.cr6.gt) goto loc_8327C144;
	// add r10,r11,r9
	ctx.r10.u64 = ctx.r11.u64 + ctx.r9.u64;
	// cmplw cr6,r3,r10
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x8327c144
	if (!ctx.cr6.lt) goto loc_8327C144;
	// subf r31,r11,r3
	ctx.r31.s64 = ctx.r3.s64 - ctx.r11.s64;
	// b 0x8327c170
	goto loc_8327C170;
loc_8327C144:
	// lwz r11,104(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// cmplw cr6,r11,r3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r3.u32, ctx.xer);
	// bgt cr6,0x8327c16c
	if (ctx.cr6.gt) goto loc_8327C16C;
	// lwz r10,108(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	// add r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 + ctx.r10.u64;
	// cmplw cr6,r3,r10
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x8327c16c
	if (!ctx.cr6.lt) goto loc_8327C16C;
	// subf r11,r11,r3
	ctx.r11.s64 = ctx.r3.s64 - ctx.r11.s64;
	// add r31,r11,r9
	ctx.r31.u64 = ctx.r11.u64 + ctx.r9.u64;
	// b 0x8327c170
	goto loc_8327C170;
loc_8327C16C:
	// li r31,0
	ctx.r31.s64 = 0;
loc_8327C170:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8327ad48
	ctx.lr = 0x8327C17C;
	sub_8327AD48(ctx, base);
	// lwz r8,100(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// lwz r10,104(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// li r11,0
	ctx.r11.s64 = 0;
	// subf r9,r8,r10
	ctx.r9.s64 = ctx.r10.s64 - ctx.r8.s64;
loc_8327C18C:
	// cmpwi cr6,r31,3
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 3, ctx.xer);
	// mr r10,r31
	ctx.r10.u64 = ctx.r31.u64;
	// blt cr6,0x8327c19c
	if (ctx.cr6.lt) goto loc_8327C19C;
	// li r10,3
	ctx.r10.s64 = 3;
loc_8327C19C:
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// bge cr6,0x8327c1e0
	if (!ctx.cr6.lt) goto loc_8327C1E0;
	// cmpw cr6,r11,r8
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r8.s32, ctx.xer);
	// bge cr6,0x8327c1b8
	if (!ctx.cr6.lt) goto loc_8327C1B8;
	// lwz r10,96(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// add r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 + ctx.r10.u64;
	// b 0x8327c1bc
	goto loc_8327C1BC;
loc_8327C1B8:
	// add r10,r9,r11
	ctx.r10.u64 = ctx.r9.u64 + ctx.r11.u64;
loc_8327C1BC:
	// lbz r10,0(r10)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// cmplwi r10,0
	ctx.cr0.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne 0x8327c1d0
	if (!ctx.cr0.eq) goto loc_8327C1D0;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// b 0x8327c18c
	goto loc_8327C18C;
loc_8327C1D0:
	// ld r10,2512(r30)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r30.u32 + 2512);
	// extsw r11,r31
	ctx.r11.s64 = ctx.r31.s32;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// std r11,2512(r30)
	PPC_STORE_U64(ctx.r30.u32 + 2512, ctx.r11.u64);
loc_8327C1E0:
	// ld r10,2504(r30)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r30.u32 + 2504);
	// extsw r11,r31
	ctx.r11.s64 = ctx.r31.s32;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// std r11,2504(r30)
	PPC_STORE_U64(ctx.r30.u32 + 2504, ctx.r11.u64);
loc_8327C1F4:
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

__attribute__((alias("__imp__sub_8327C20C"))) PPC_WEAK_FUNC(sub_8327C20C);
PPC_FUNC_IMPL(__imp__sub_8327C20C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8327C210"))) PPC_WEAK_FUNC(sub_8327C210);
PPC_FUNC_IMPL(__imp__sub_8327C210) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x833a01a4
	ctx.lr = 0x8327C218;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// ble cr6,0x8327c2c4
	if (!ctx.cr6.gt) goto loc_8327C2C4;
	// addi r31,r3,12
	ctx.r31.s64 = ctx.r3.s64 + 12;
	// addi r27,r4,-4
	ctx.r27.s64 = ctx.r4.s64 + -4;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// li r30,0
	ctx.r30.s64 = 0;
	// li r29,-1
	ctx.r29.s64 = -1;
loc_8327C238:
	// li r11,5
	ctx.r11.s64 = 5;
	// stw r30,-12(r31)
	PPC_STORE_U32(ctx.r31.u32 + -12, ctx.r30.u32);
	// stw r30,-8(r31)
	PPC_STORE_U32(ctx.r31.u32 + -8, ctx.r30.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// sth r30,0(r31)
	PPC_STORE_U16(ctx.r31.u32 + 0, ctx.r30.u16);
	// addi r3,r31,12
	ctx.r3.s64 = ctx.r31.s64 + 12;
	// sth r30,2(r31)
	PPC_STORE_U16(ctx.r31.u32 + 2, ctx.r30.u16);
	// sth r30,4(r31)
	PPC_STORE_U16(ctx.r31.u32 + 4, ctx.r30.u16);
	// sth r30,6(r31)
	PPC_STORE_U16(ctx.r31.u32 + 6, ctx.r30.u16);
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// bl 0x832779a8
	ctx.lr = 0x8327C264;
	sub_832779A8(ctx, base);
	// lwzu r11,4(r27)
	ea = 4 + ctx.r27.u32;
	ctx.r11.u64 = PPC_LOAD_U32(ea);
	ctx.r27.u32 = ea;
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r30,56(r31)
	PPC_STORE_U32(ctx.r31.u32 + 56, ctx.r30.u32);
	// stw r30,64(r31)
	PPC_STORE_U32(ctx.r31.u32 + 64, ctx.r30.u32);
	// addi r3,r31,100
	ctx.r3.s64 = ctx.r31.s64 + 100;
	// stw r10,60(r31)
	PPC_STORE_U32(ctx.r31.u32 + 60, ctx.r10.u32);
	// stw r30,68(r31)
	PPC_STORE_U32(ctx.r31.u32 + 68, ctx.r30.u32);
	// stw r11,-4(r31)
	PPC_STORE_U32(ctx.r31.u32 + -4, ctx.r11.u32);
	// stw r30,72(r31)
	PPC_STORE_U32(ctx.r31.u32 + 72, ctx.r30.u32);
	// stw r30,76(r31)
	PPC_STORE_U32(ctx.r31.u32 + 76, ctx.r30.u32);
	// stw r30,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r30.u32);
	// stw r29,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r29.u32);
	// stw r29,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r29.u32);
	// stw r29,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r29.u32);
	// bl 0x8327adb0
	ctx.lr = 0x8327C2A0;
	sub_8327ADB0(ctx, base);
	// std r29,228(r31)
	PPC_STORE_U64(ctx.r31.u32 + 228, ctx.r29.u64);
	// stw r30,236(r31)
	PPC_STORE_U32(ctx.r31.u32 + 236, ctx.r30.u32);
	// addic. r28,r28,-1
	ctx.xer.ca = ctx.r28.u32 > 0;
	ctx.r28.s64 = ctx.r28.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// stw r30,240(r31)
	PPC_STORE_U32(ctx.r31.u32 + 240, ctx.r30.u32);
	// stw r30,244(r31)
	PPC_STORE_U32(ctx.r31.u32 + 244, ctx.r30.u32);
	// stw r30,248(r31)
	PPC_STORE_U32(ctx.r31.u32 + 248, ctx.r30.u32);
	// sth r30,252(r31)
	PPC_STORE_U16(ctx.r31.u32 + 252, ctx.r30.u16);
	// addi r31,r31,280
	ctx.r31.s64 = ctx.r31.s64 + 280;
	// bne 0x8327c238
	if (!ctx.cr0.eq) goto loc_8327C238;
loc_8327C2C4:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x833a01f4
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8327C2CC"))) PPC_WEAK_FUNC(sub_8327C2CC);
PPC_FUNC_IMPL(__imp__sub_8327C2CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8327C2D0"))) PPC_WEAK_FUNC(sub_8327C2D0);
PPC_FUNC_IMPL(__imp__sub_8327C2D0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x833a01ac
	ctx.lr = 0x8327C2D8;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r30,8448(r3)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8448);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r29,0(r30)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x8327c328
	if (ctx.cr6.eq) goto loc_8327C328;
	// bl 0x83284520
	ctx.lr = 0x8327C2F4;
	sub_83284520(ctx, base);
	// lwz r3,264(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 264);
	// bl 0x82c10e98
	ctx.lr = 0x8327C2FC;
	sub_82C10E98(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8327adf8
	ctx.lr = 0x8327C304;
	sub_8327ADF8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x8327c320
	if (ctx.cr0.eq) goto loc_8327C320;
	// lis r4,-256
	ctx.r4.s64 = -16777216;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// ori r4,r4,3852
	ctx.r4.u64 = ctx.r4.u64 | 3852;
	// bl 0x83282390
	ctx.lr = 0x8327C31C;
	sub_83282390(ctx, base);
	// b 0x8327c32c
	goto loc_8327C32C;
loc_8327C320:
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
loc_8327C328:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8327C32C:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x833a01fc
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8327C334"))) PPC_WEAK_FUNC(sub_8327C334);
PPC_FUNC_IMPL(__imp__sub_8327C334) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8327C338"))) PPC_WEAK_FUNC(sub_8327C338);
PPC_FUNC_IMPL(__imp__sub_8327C338) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31960
	ctx.r11.s64 = -2094530560;
	// addi r6,r11,-20920
	ctx.r6.s64 = ctx.r11.s64 + -20920;
	// b 0x83284e00
	sub_83284E00(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8327C344"))) PPC_WEAK_FUNC(sub_8327C344);
PPC_FUNC_IMPL(__imp__sub_8327C344) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8327C348"))) PPC_WEAK_FUNC(sub_8327C348);
PPC_FUNC_IMPL(__imp__sub_8327C348) {
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
	// bl 0x83284768
	ctx.lr = 0x8327C360;
	sub_83284768(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x8327c370
	if (ctx.cr0.eq) goto loc_8327C370;
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x8327c398
	goto loc_8327C398;
loc_8327C370:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83279bf0
	ctx.lr = 0x8327C378;
	sub_83279BF0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x8327c394
	if (ctx.cr0.eq) goto loc_8327C394;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8327b160
	ctx.lr = 0x8327C388;
	sub_8327B160(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// li r3,1
	ctx.r3.s64 = 1;
	// bne 0x8327c398
	if (!ctx.cr0.eq) goto loc_8327C398;
loc_8327C394:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8327C398:
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

__attribute__((alias("__imp__sub_8327C3AC"))) PPC_WEAK_FUNC(sub_8327C3AC);
PPC_FUNC_IMPL(__imp__sub_8327C3AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8327C3B0"))) PPC_WEAK_FUNC(sub_8327C3B0);
PPC_FUNC_IMPL(__imp__sub_8327C3B0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x833a019c
	ctx.lr = 0x8327C3B8;
	__savegprlr_25(ctx, base);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// lwz r28,8456(r3)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8456);
	// li r31,0
	ctx.r31.s64 = 0;
	// mr r25,r4
	ctx.r25.u64 = ctx.r4.u64;
	// stw r31,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r31.u32);
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// stw r31,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r31.u32);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// stw r31,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r31.u32);
	// mr r26,r6
	ctx.r26.u64 = ctx.r6.u64;
	// stw r31,0(r7)
	PPC_STORE_U32(ctx.r7.u32 + 0, ctx.r31.u32);
	// mr r29,r7
	ctx.r29.u64 = ctx.r7.u64;
	// bl 0x832881a0
	ctx.lr = 0x8327C3F4;
	sub_832881A0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x8327c594
	if (!ctx.cr0.eq) goto loc_8327C594;
	// lwz r11,100(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8327c590
	if (ctx.cr6.eq) goto loc_8327C590;
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// li r4,206
	ctx.r4.s64 = 206;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x83279e48
	ctx.lr = 0x8327C418;
	sub_83279E48(ctx, base);
	// lwz r11,96(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// cmplw cr6,r3,r11
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x8327c480
	if (ctx.cr6.eq) goto loc_8327C480;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8327c440
	if (ctx.cr6.eq) goto loc_8327C440;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x83279d90
	ctx.lr = 0x8327C438;
	sub_83279D90(ctx, base);
	// stw r3,0(r25)
	PPC_STORE_U32(ctx.r25.u32 + 0, ctx.r3.u32);
	// b 0x8327c468
	goto loc_8327C468;
loc_8327C440:
	// lwz r10,108(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	// xoris r9,r31,32768
	ctx.r9.u64 = ctx.r31.u64 ^ 2147483648;
	// lwz r11,100(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// addi r11,r11,-3
	ctx.r11.s64 = ctx.r11.s64 + -3;
	// subf r10,r31,r11
	ctx.r10.s64 = ctx.r11.s64 - ctx.r31.s64;
	// addc r10,r10,r9
	temp.u8 = ctx.r10.u32 + ctx.r9.u32 < ctx.r10.u32;
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	ctx.xer.ca = temp.u8;
	// subfe r10,r10,r10
	temp.u8 = (~ctx.r10.u32 + ctx.r10.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r10.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r10.u64 = ~ctx.r10.u64 + ctx.r10.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 & ctx.r11.u64;
	// stw r11,0(r25)
	PPC_STORE_U32(ctx.r25.u32 + 0, ctx.r11.u32);
loc_8327C468:
	// lwz r11,0(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 0);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x8327c590
	if (!ctx.cr6.gt) goto loc_8327C590;
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,0(r26)
	PPC_STORE_U32(ctx.r26.u32 + 0, ctx.r11.u32);
	// b 0x8327c590
	goto loc_8327C590;
loc_8327C480:
	// lwz r26,88(r1)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// li r11,4
	ctx.r11.s64 = 4;
	// lwz r10,120(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	// rlwinm. r9,r26,0,24,24
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r26.u32 | (ctx.r26.u64 << 32), 0) & 0x80;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// stw r26,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r26.u32);
	// stw r10,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r10.u32);
	// stw r11,0(r25)
	PPC_STORE_U32(ctx.r25.u32 + 0, ctx.r11.u32);
	// bne 0x8327c590
	if (!ctx.cr0.eq) goto loc_8327C590;
	// addi r6,r1,84
	ctx.r6.s64 = ctx.r1.s64 + 84;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x832878c0
	ctx.lr = 0x8327C4B4;
	sub_832878C0(ctx, base);
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// lwz r5,80(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x8327b298
	ctx.lr = 0x8327C4C4;
	sub_8327B298(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x8327c528
	if (ctx.cr0.eq) goto loc_8327C528;
	// lwz r10,108(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	// stw r31,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r31.u32);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x8327c4e8
	if (!ctx.cr6.eq) goto loc_8327C4E8;
	// lwz r10,100(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// lwz r11,96(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// b 0x8327c4ec
	goto loc_8327C4EC;
loc_8327C4E8:
	// lwz r11,104(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
loc_8327C4EC:
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lwz r10,84(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x8327c534
	if (ctx.cr6.eq) goto loc_8327C534;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// li r4,204
	ctx.r4.s64 = 204;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x83279f70
	ctx.lr = 0x8327C510;
	sub_83279F70(ctx, base);
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// lwz r6,84(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x83287908
	ctx.lr = 0x8327C528;
	sub_83287908(ctx, base);
loc_8327C528:
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x8327c540
	if (!ctx.cr6.eq) goto loc_8327C540;
loc_8327C534:
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x83279de8
	ctx.lr = 0x8327C53C;
	sub_83279DE8(ctx, base);
	// b 0x8327c594
	goto loc_8327C594;
loc_8327C540:
	// bl 0x8328b5a0
	ctx.lr = 0x8327C544;
	sub_8328B5A0(ctx, base);
	// cmpwi cr6,r3,4
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 4, ctx.xer);
	// beq cr6,0x8327c59c
	if (ctx.cr6.eq) goto loc_8327C59C;
	// cmpwi cr6,r3,8
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 8, ctx.xer);
	// bne cr6,0x8327c580
	if (!ctx.cr6.eq) goto loc_8327C580;
	// rlwinm. r11,r26,0,25,25
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r26.u32 | (ctx.r26.u64 << 32), 0) & 0x40;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8327c580
	if (ctx.cr0.eq) goto loc_8327C580;
	// li r4,8
	ctx.r4.s64 = 8;
loc_8327C560:
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x83279e48
	ctx.lr = 0x8327C56C;
	sub_83279E48(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8327c534
	if (ctx.cr0.eq) goto loc_8327C534;
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplw cr6,r3,r11
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x8327c534
	if (ctx.cr6.eq) goto loc_8327C534;
loc_8327C580:
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// lwz r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x83279d90
	ctx.lr = 0x8327C58C;
	sub_83279D90(ctx, base);
	// stw r3,0(r25)
	PPC_STORE_U32(ctx.r25.u32 + 0, ctx.r3.u32);
loc_8327C590:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8327C594:
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x833a01ec
	__restgprlr_25(ctx, base);
	return;
loc_8327C59C:
	// andi. r11,r26,72
	ctx.r11.u64 = ctx.r26.u64 & 72;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// cmpwi r11,0
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8327c580
	if (ctx.cr0.eq) goto loc_8327C580;
	// li r4,4
	ctx.r4.s64 = 4;
	// b 0x8327c560
	goto loc_8327C560;
}

__attribute__((alias("__imp__sub_8327C5B0"))) PPC_WEAK_FUNC(sub_8327C5B0);
PPC_FUNC_IMPL(__imp__sub_8327C5B0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x833a01ac
	ctx.lr = 0x8327C5B8;
	__savegprlr_29(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r4,6
	ctx.r4.s64 = 6;
	// lwz r29,8448(r3)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8448);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r30,r3,3496
	ctx.r30.s64 = ctx.r3.s64 + 3496;
	// bl 0x83274d00
	ctx.lr = 0x8327C5D0;
	sub_83274D00(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bne 0x8327c68c
	if (!ctx.cr0.eq) goto loc_8327C68C;
	// bl 0x8327b448
	ctx.lr = 0x8327C5E0;
	sub_8327B448(ctx, base);
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
loc_8327C5E4:
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// ble cr6,0x8327c65c
	if (!ctx.cr6.gt) goto loc_8327C65C;
	// lwz r3,264(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 264);
	// bl 0x8328c240
	ctx.lr = 0x8327C5F4;
	sub_8328C240(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x83282800
	ctx.lr = 0x8327C600;
	sub_83282800(ctx, base);
	// lwz r11,16(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 16);
	// lis r9,-31822
	ctx.r9.s64 = -2085486592;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r29,16
	ctx.r10.s64 = ctx.r29.s64 + 16;
	// stw r11,16(r29)
	PPC_STORE_U32(ctx.r29.u32 + 16, ctx.r11.u32);
	// lwz r3,2364(r9)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r9.u32 + 2364);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8327c65c
	if (ctx.cr6.eq) goto loc_8327C65C;
	// lis r11,-31845
	ctx.r11.s64 = -2086993920;
	// addi r8,r30,348
	ctx.r8.s64 = ctx.r30.s64 + 348;
	// addi r11,r11,4624
	ctx.r11.s64 = ctx.r11.s64 + 4624;
	// addi r9,r1,80
	ctx.r9.s64 = ctx.r1.s64 + 80;
	// addi r7,r30,344
	ctx.r7.s64 = ctx.r30.s64 + 344;
	// addi r4,r11,4
	ctx.r4.s64 = ctx.r11.s64 + 4;
	// stw r10,24(r11)
	PPC_STORE_U32(ctx.r11.u32 + 24, ctx.r10.u32);
	// stw r8,48(r11)
	PPC_STORE_U32(ctx.r11.u32 + 48, ctx.r8.u32);
	// stw r31,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r31.u32);
	// stw r9,36(r11)
	PPC_STORE_U32(ctx.r11.u32 + 36, ctx.r9.u32);
	// stw r7,60(r11)
	PPC_STORE_U32(ctx.r11.u32 + 60, ctx.r7.u32);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,36(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8327C65C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8327C65C:
	// lis r4,32767
	ctx.r4.s64 = 2147418112;
	// addi r3,r30,60
	ctx.r3.s64 = ctx.r30.s64 + 60;
	// ori r4,r4,65535
	ctx.r4.u64 = ctx.r4.u64 | 65535;
	// bl 0x832779a8
	ctx.lr = 0x8327C66C;
	sub_832779A8(ctx, base);
	// li r4,-1
	ctx.r4.s64 = -1;
	// addi r3,r30,104
	ctx.r3.s64 = ctx.r30.s64 + 104;
	// bl 0x832779a8
	ctx.lr = 0x8327C678;
	sub_832779A8(ctx, base);
	// li r11,192
	ctx.r11.s64 = 192;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r11,8(r29)
	PPC_STORE_U32(ctx.r29.u32 + 8, ctx.r11.u32);
loc_8327C684:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x833a01fc
	__restgprlr_29(ctx, base);
	return;
loc_8327C68C:
	// bl 0x8327a158
	ctx.lr = 0x8327C690;
	sub_8327A158(ctx, base);
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bge 0x8327c5e4
	if (!ctx.cr0.lt) goto loc_8327C5E4;
	// li r3,-1
	ctx.r3.s64 = -1;
	// b 0x8327c684
	goto loc_8327C684;
}

__attribute__((alias("__imp__sub_8327C6A4"))) PPC_WEAK_FUNC(sub_8327C6A4);
PPC_FUNC_IMPL(__imp__sub_8327C6A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8327C6A8"))) PPC_WEAK_FUNC(sub_8327C6A8);
PPC_FUNC_IMPL(__imp__sub_8327C6A8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x833a01a0
	ctx.lr = 0x8327C6B0;
	__savegprlr_26(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r11,-1
	ctx.r11.s64 = -1;
	// lwz r26,8448(r3)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8448);
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// lwz r4,8456(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8456);
	// std r11,0(r6)
	PPC_STORE_U64(ctx.r6.u32 + 0, ctx.r11.u64);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r29,r6
	ctx.r29.u64 = ctx.r6.u64;
	// std r11,0(r7)
	PPC_STORE_U64(ctx.r7.u32 + 0, ctx.r11.u64);
	// mr r28,r7
	ctx.r28.u64 = ctx.r7.u64;
	// mr r27,r8
	ctx.r27.u64 = ctx.r8.u64;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x8327c73c
	if (ctx.cr6.eq) goto loc_8327C73C;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// bl 0x83288898
	ctx.lr = 0x8327C6EC;
	sub_83288898(ctx, base);
	// lwz r10,16(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// lis r11,-32219
	ctx.r11.s64 = -2111504384;
	// lwz r9,156(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 156);
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r11,r11,16808
	ctx.r11.s64 = ctx.r11.s64 + 16808;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// lwzx r9,r10,r11
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// beq cr6,0x8327c71c
	if (ctx.cr6.eq) goto loc_8327C71C;
	// lwz r11,264(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 264);
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// beq cr6,0x8327c71c
	if (ctx.cr6.eq) goto loc_8327C71C;
	// mr r9,r11
	ctx.r9.u64 = ctx.r11.u64;
loc_8327C71C:
	// mr r8,r28
	ctx.r8.u64 = ctx.r28.u64;
	// mr r7,r27
	ctx.r7.u64 = ctx.r27.u64;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// addi r4,r26,160
	ctx.r4.s64 = ctx.r26.s64 + 160;
	// addi r3,r31,3496
	ctx.r3.s64 = ctx.r31.s64 + 3496;
	// bl 0x8327b5d0
	ctx.lr = 0x8327C738;
	sub_8327B5D0(ctx, base);
	// std r3,0(r29)
	PPC_STORE_U64(ctx.r29.u32 + 0, ctx.r3.u64);
loc_8327C73C:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x833a01f0
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8327C744"))) PPC_WEAK_FUNC(sub_8327C744);
PPC_FUNC_IMPL(__imp__sub_8327C744) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8327C748"))) PPC_WEAK_FUNC(sub_8327C748);
PPC_FUNC_IMPL(__imp__sub_8327C748) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x833a01a8
	ctx.lr = 0x8327C750;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// li r4,52
	ctx.r4.s64 = 52;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// mr r28,r6
	ctx.r28.u64 = ctx.r6.u64;
	// bl 0x83274d00
	ctx.lr = 0x8327C76C;
	sub_83274D00(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x8327c7c4
	if (!ctx.cr0.eq) goto loc_8327C7C4;
	// cmpdi cr6,r29,0
	ctx.cr6.compare<int64_t>(ctx.r29.s64, 0, ctx.xer);
	// bge cr6,0x8327c7b0
	if (!ctx.cr6.lt) goto loc_8327C7B0;
	// lwz r11,48(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 48);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8327c7b0
	if (ctx.cr6.eq) goto loc_8327C7B0;
	// lbz r11,87(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 87);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x8327c7b0
	if (!ctx.cr0.eq) goto loc_8327C7B0;
	// cmpwi cr6,r28,0
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// beq cr6,0x8327c7e0
	if (ctx.cr6.eq) goto loc_8327C7E0;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8327a3e0
	ctx.lr = 0x8327C7A8;
	sub_8327A3E0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x8327c7e0
	if (ctx.cr0.eq) goto loc_8327C7E0;
loc_8327C7B0:
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,52
	ctx.r4.s64 = 52;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83274d40
	ctx.lr = 0x8327C7C0;
	sub_83274D40(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
loc_8327C7C4:
	// cmpwi cr6,r3,1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 1, ctx.xer);
	// bne cr6,0x8327c7e0
	if (!ctx.cr6.eq) goto loc_8327C7E0;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8327b940
	ctx.lr = 0x8327C7E0;
	sub_8327B940(ctx, base);
loc_8327C7E0:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x833a01f8
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8327C7E8"))) PPC_WEAK_FUNC(sub_8327C7E8);
PPC_FUNC_IMPL(__imp__sub_8327C7E8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x833a0190
	ctx.lr = 0x8327C7F0;
	__savegprlr_22(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r9,0(r4)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r8,4(r4)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// addi r10,r3,10320
	ctx.r10.s64 = ctx.r3.s64 + 10320;
	// addi r5,r9,15
	ctx.r5.s64 = ctx.r9.s64 + 15;
	// lwz r9,10328(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 10328);
	// addi r4,r8,15
	ctx.r4.s64 = ctx.r8.s64 + 15;
	// lwz r8,10332(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 10332);
	// addi r9,r9,15
	ctx.r9.s64 = ctx.r9.s64 + 15;
	// lwz r11,8448(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8448);
	// addi r8,r8,15
	ctx.r8.s64 = ctx.r8.s64 + 15;
	// lwz r6,10348(r3)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r3.u32 + 10348);
	// srawi r9,r9,4
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0xF) != 0);
	ctx.r9.s64 = ctx.r9.s32 >> 4;
	// addi r24,r3,10440
	ctx.r24.s64 = ctx.r3.s64 + 10440;
	// addze r9,r9
	temp.s64 = ctx.r9.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r9.u32;
	ctx.r9.s64 = temp.s64;
	// srawi r8,r8,4
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0xF) != 0);
	ctx.r8.s64 = ctx.r8.s32 >> 4;
	// rlwinm r7,r9,4,0,27
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 4) & 0xFFFFFFF0;
	// addze r9,r8
	temp.s64 = ctx.r8.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r8.u32;
	ctx.r9.s64 = temp.s64;
	// srawi r8,r5,4
	ctx.xer.ca = (ctx.r5.s32 < 0) & ((ctx.r5.u32 & 0xF) != 0);
	ctx.r8.s64 = ctx.r5.s32 >> 4;
	// addi r28,r7,127
	ctx.r28.s64 = ctx.r7.s64 + 127;
	// addze r8,r8
	temp.s64 = ctx.r8.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r8.u32;
	ctx.r8.s64 = temp.s64;
	// rlwinm r30,r9,4,0,27
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 4) & 0xFFFFFFF0;
	// rlwinm r8,r8,4,0,27
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 4) & 0xFFFFFFF0;
	// srawi r5,r8,1
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x1) != 0);
	ctx.r5.s64 = ctx.r8.s32 >> 1;
	// addi r3,r8,127
	ctx.r3.s64 = ctx.r8.s64 + 127;
	// addze r8,r5
	temp.s64 = ctx.r5.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r5.u32;
	ctx.r8.s64 = temp.s64;
	// addi r8,r8,127
	ctx.r8.s64 = ctx.r8.s64 + 127;
	// srawi r8,r8,7
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x7F) != 0);
	ctx.r8.s64 = ctx.r8.s32 >> 7;
	// addze r5,r8
	temp.s64 = ctx.r8.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r8.u32;
	ctx.r5.s64 = temp.s64;
	// srawi r8,r4,4
	ctx.xer.ca = (ctx.r4.s32 < 0) & ((ctx.r4.u32 & 0xF) != 0);
	ctx.r8.s64 = ctx.r4.s32 >> 4;
	// addze r8,r8
	temp.s64 = ctx.r8.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r8.u32;
	ctx.r8.s64 = temp.s64;
	// rlwinm r4,r8,4,0,27
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 4) & 0xFFFFFFF0;
	// srawi r4,r4,1
	ctx.xer.ca = (ctx.r4.s32 < 0) & ((ctx.r4.u32 & 0x1) != 0);
	ctx.r4.s64 = ctx.r4.s32 >> 1;
	// addze r4,r4
	temp.s64 = ctx.r4.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r4.u32;
	ctx.r4.s64 = temp.s64;
	// srawi r29,r3,7
	ctx.xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0x7F) != 0);
	ctx.r29.s64 = ctx.r3.s32 >> 7;
	// mullw r3,r4,r5
	ctx.r3.s64 = int64_t(ctx.r4.s32) * int64_t(ctx.r5.s32);
	// addze r4,r29
	temp.s64 = ctx.r29.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r29.u32;
	ctx.r4.s64 = temp.s64;
	// srawi r7,r7,1
	ctx.xer.ca = (ctx.r7.s32 < 0) & ((ctx.r7.u32 & 0x1) != 0);
	ctx.r7.s64 = ctx.r7.s32 >> 1;
	// mullw r29,r4,r8
	ctx.r29.s64 = int64_t(ctx.r4.s32) * int64_t(ctx.r8.s32);
	// addze r8,r7
	temp.s64 = ctx.r7.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r7.u32;
	ctx.r8.s64 = temp.s64;
	// rlwinm r7,r29,3,0,28
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 3) & 0xFFFFFFF8;
	// addi r27,r8,127
	ctx.r27.s64 = ctx.r8.s64 + 127;
	// add r8,r7,r3
	ctx.r8.u64 = ctx.r7.u64 + ctx.r3.u64;
	// srawi r27,r27,7
	ctx.xer.ca = (ctx.r27.s32 < 0) & ((ctx.r27.u32 & 0x7F) != 0);
	ctx.r27.s64 = ctx.r27.s32 >> 7;
	// rlwinm r7,r8,9,0,22
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 9) & 0xFFFFFE00;
	// addze r27,r27
	temp.s64 = ctx.r27.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r27.u32;
	ctx.r27.s64 = temp.s64;
	// srawi r30,r30,1
	ctx.xer.ca = (ctx.r30.s32 < 0) & ((ctx.r30.u32 & 0x1) != 0);
	ctx.r30.s64 = ctx.r30.s32 >> 1;
	// addi r26,r7,256
	ctx.r26.s64 = ctx.r7.s64 + 256;
	// addze r7,r30
	temp.s64 = ctx.r30.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r30.u32;
	ctx.r7.s64 = temp.s64;
	// srawi r30,r28,7
	ctx.xer.ca = (ctx.r28.s32 < 0) & ((ctx.r28.u32 & 0x7F) != 0);
	ctx.r30.s64 = ctx.r28.s32 >> 7;
	// mullw r7,r27,r7
	ctx.r7.s64 = int64_t(ctx.r27.s32) * int64_t(ctx.r7.s32);
	// addze r30,r30
	temp.s64 = ctx.r30.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r30.u32;
	ctx.r30.s64 = temp.s64;
	// mullw r9,r30,r9
	ctx.r9.s64 = int64_t(ctx.r30.s32) * int64_t(ctx.r9.s32);
	// rlwinm r9,r9,3,0,28
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 3) & 0xFFFFFFF8;
	// add r9,r7,r9
	ctx.r9.u64 = ctx.r7.u64 + ctx.r9.u64;
	// rlwinm r9,r9,9,0,22
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 9) & 0xFFFFFE00;
	// addi r9,r9,256
	ctx.r9.s64 = ctx.r9.s64 + 256;
	// cmpw cr6,r26,r9
	ctx.cr6.compare<int32_t>(ctx.r26.s32, ctx.r9.s32, ctx.xer);
	// ble cr6,0x8327c8f4
	if (!ctx.cr6.gt) goto loc_8327C8F4;
loc_8327C8E0:
	// lis r4,-256
	ctx.r4.s64 = -16777216;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// ori r4,r4,3863
	ctx.r4.u64 = ctx.r4.u64 | 3863;
	// bl 0x83282390
	ctx.lr = 0x8327C8F0;
	sub_83282390(ctx, base);
	// b 0x8327ca8c
	goto loc_8327CA8C;
loc_8327C8F4:
	// lwz r25,32(r10)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r10.u32 + 32);
	// cmplwi cr6,r25,0
	ctx.cr6.compare<uint32_t>(ctx.r25.u32, 0, ctx.xer);
	// bne cr6,0x8327c908
	if (!ctx.cr6.eq) goto loc_8327C908;
	// mr r30,r6
	ctx.r30.u64 = ctx.r6.u64;
	// b 0x8327c9d8
	goto loc_8327C9D8;
loc_8327C908:
	// lwz r7,8(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// li r30,1
	ctx.r30.s64 = 1;
	// lwz r9,12(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// addi r7,r7,15
	ctx.r7.s64 = ctx.r7.s64 + 15;
	// addi r9,r9,15
	ctx.r9.s64 = ctx.r9.s64 + 15;
	// srawi r7,r7,4
	ctx.xer.ca = (ctx.r7.s32 < 0) & ((ctx.r7.u32 & 0xF) != 0);
	ctx.r7.s64 = ctx.r7.s32 >> 4;
	// addze r7,r7
	temp.s64 = ctx.r7.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r7.u32;
	ctx.r7.s64 = temp.s64;
	// srawi r28,r9,4
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0xF) != 0);
	ctx.r28.s64 = ctx.r9.s32 >> 4;
	// rlwinm r9,r7,4,0,27
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 4) & 0xFFFFFFF0;
	// addze r7,r28
	temp.s64 = ctx.r28.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r28.u32;
	ctx.r7.s64 = temp.s64;
	// addi r28,r9,127
	ctx.r28.s64 = ctx.r9.s64 + 127;
	// srawi r28,r28,7
	ctx.xer.ca = (ctx.r28.s32 < 0) & ((ctx.r28.u32 & 0x7F) != 0);
	ctx.r28.s64 = ctx.r28.s32 >> 7;
	// addze r28,r28
	temp.s64 = ctx.r28.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r28.u32;
	ctx.r28.s64 = temp.s64;
	// mullw r28,r28,r7
	ctx.r28.s64 = int64_t(ctx.r28.s32) * int64_t(ctx.r7.s32);
	// rlwinm r26,r28,3,0,28
	ctx.r26.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 3) & 0xFFFFFFF8;
loc_8327C944:
	// srawi r28,r9,1
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x1) != 0);
	ctx.r28.s64 = ctx.r9.s32 >> 1;
	// rlwinm r23,r7,4,0,27
	ctx.r23.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 4) & 0xFFFFFFF0;
	// addze r27,r28
	temp.s64 = ctx.r28.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r28.u32;
	ctx.r27.s64 = temp.s64;
	// rlwinm r28,r8,8,0,23
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 8) & 0xFFFFFF00;
	// addi r22,r27,127
	ctx.r22.s64 = ctx.r27.s64 + 127;
	// addi r27,r28,128
	ctx.r27.s64 = ctx.r28.s64 + 128;
	// srawi r28,r22,7
	ctx.xer.ca = (ctx.r22.s32 < 0) & ((ctx.r22.u32 & 0x7F) != 0);
	ctx.r28.s64 = ctx.r22.s32 >> 7;
	// mullw r22,r27,r30
	ctx.r22.s64 = int64_t(ctx.r27.s32) * int64_t(ctx.r30.s32);
	// addze r28,r28
	temp.s64 = ctx.r28.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r28.u32;
	ctx.r28.s64 = temp.s64;
	// srawi r23,r23,1
	ctx.xer.ca = (ctx.r23.s32 < 0) & ((ctx.r23.u32 & 0x1) != 0);
	ctx.r23.s64 = ctx.r23.s32 >> 1;
	// addze r23,r23
	temp.s64 = ctx.r23.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r23.u32;
	ctx.r23.s64 = temp.s64;
	// mullw r28,r28,r23
	ctx.r28.s64 = int64_t(ctx.r28.s32) * int64_t(ctx.r23.s32);
	// add r28,r28,r26
	ctx.r28.u64 = ctx.r28.u64 + ctx.r26.u64;
	// rlwinm r28,r28,8,0,23
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 8) & 0xFFFFFF00;
	// addi r28,r28,128
	ctx.r28.s64 = ctx.r28.s64 + 128;
	// mullw r28,r28,r6
	ctx.r28.s64 = int64_t(ctx.r28.s32) * int64_t(ctx.r6.s32);
	// cmpw cr6,r22,r28
	ctx.cr6.compare<int32_t>(ctx.r22.s32, ctx.r28.s32, ctx.xer);
	// bgt cr6,0x8327c99c
	if (ctx.cr6.gt) goto loc_8327C99C;
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// cmpwi cr6,r30,16
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 16, ctx.xer);
	// ble cr6,0x8327c944
	if (!ctx.cr6.gt) goto loc_8327C944;
	// b 0x8327c9a0
	goto loc_8327C9A0;
loc_8327C99C:
	// addi r30,r30,-1
	ctx.r30.s64 = ctx.r30.s64 + -1;
loc_8327C9A0:
	// cmpw cr6,r30,r6
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r6.s32, ctx.xer);
	// blt cr6,0x8327c8e0
	if (ctx.cr6.lt) goto loc_8327C8E0;
	// lwz r10,16(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 16);
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// add r9,r27,r10
	ctx.r9.u64 = ctx.r27.u64 + ctx.r10.u64;
	// stw r9,10360(r31)
	PPC_STORE_U32(ctx.r31.u32 + 10360, ctx.r9.u32);
	// stw r10,10356(r31)
	PPC_STORE_U32(ctx.r31.u32 + 10356, ctx.r10.u32);
	// ble cr6,0x8327c9d8
	if (!ctx.cr6.gt) goto loc_8327C9D8;
	// mr r10,r25
	ctx.r10.u64 = ctx.r25.u64;
	// mtctr r30
	ctx.ctr.u64 = ctx.r30.u64;
	// addi r9,r31,10360
	ctx.r9.s64 = ctx.r31.s64 + 10360;
loc_8327C9CC:
	// stwu r10,4(r9)
	ea = 4 + ctx.r9.u32;
	PPC_STORE_U32(ea, ctx.r10.u32);
	ctx.r9.u32 = ea;
	// add r10,r10,r27
	ctx.r10.u64 = ctx.r10.u64 + ctx.r27.u64;
	// bdnz 0x8327c9cc
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8327C9CC;
loc_8327C9D8:
	// rlwinm r10,r4,7,0,24
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 7) & 0xFFFFFF80;
	// rlwinm r9,r5,7,0,24
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 7) & 0xFFFFFF80;
	// extsh r6,r10
	ctx.r6.s64 = ctx.r10.s16;
	// extsh r5,r9
	ctx.r5.s64 = ctx.r9.s16;
	// rlwinm r7,r29,11,0,20
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 11) & 0xFFFFF800;
	// sth r6,214(r11)
	PPC_STORE_U16(ctx.r11.u32 + 214, ctx.r6.u16);
	// sth r5,212(r11)
	PPC_STORE_U16(ctx.r11.u32 + 212, ctx.r5.u16);
	// rlwinm r8,r3,7,0,24
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 7) & 0xFFFFFF80;
	// lwz r9,10356(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 10356);
	// add r10,r7,r9
	ctx.r10.u64 = ctx.r7.u64 + ctx.r9.u64;
	// add r3,r10,r8
	ctx.r3.u64 = ctx.r10.u64 + ctx.r8.u64;
	// stw r10,200(r11)
	PPC_STORE_U32(ctx.r11.u32 + 200, ctx.r10.u32);
	// sth r6,230(r11)
	PPC_STORE_U16(ctx.r11.u32 + 230, ctx.r6.u16);
	// addi r4,r31,10356
	ctx.r4.s64 = ctx.r31.s64 + 10356;
	// sth r5,228(r11)
	PPC_STORE_U16(ctx.r11.u32 + 228, ctx.r5.u16);
	// stw r9,208(r11)
	PPC_STORE_U32(ctx.r11.u32 + 208, ctx.r9.u32);
	// stw r3,204(r11)
	PPC_STORE_U32(ctx.r11.u32 + 204, ctx.r3.u32);
	// lwz r9,10360(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 10360);
	// add r10,r9,r7
	ctx.r10.u64 = ctx.r9.u64 + ctx.r7.u64;
	// add r8,r10,r8
	ctx.r8.u64 = ctx.r10.u64 + ctx.r8.u64;
	// stw r10,216(r11)
	PPC_STORE_U32(ctx.r11.u32 + 216, ctx.r10.u32);
	// stw r9,224(r11)
	PPC_STORE_U32(ctx.r11.u32 + 224, ctx.r9.u32);
	// stw r8,220(r11)
	PPC_STORE_U32(ctx.r11.u32 + 220, ctx.r8.u32);
	// lwz r11,64(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 64);
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bne cr6,0x8327ca68
	if (!ctx.cr6.eq) goto loc_8327CA68;
	// cmpwi cr6,r30,14
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 14, ctx.xer);
	// blt cr6,0x8327ca4c
	if (ctx.cr6.lt) goto loc_8327CA4C;
	// li r30,14
	ctx.r30.s64 = 14;
loc_8327CA4C:
	// addi r11,r30,2
	ctx.r11.s64 = ctx.r30.s64 + 2;
	// li r5,2
	ctx.r5.s64 = 2;
	// stw r11,10428(r31)
	PPC_STORE_U32(ctx.r31.u32 + 10428, ctx.r11.u32);
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x8327c210
	ctx.lr = 0x8327CA60;
	sub_8327C210(ctx, base);
	// addi r3,r24,560
	ctx.r3.s64 = ctx.r24.s64 + 560;
	// b 0x8327ca7c
	goto loc_8327CA7C;
loc_8327CA68:
	// cmpwi cr6,r30,16
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 16, ctx.xer);
	// blt cr6,0x8327ca74
	if (ctx.cr6.lt) goto loc_8327CA74;
	// li r30,16
	ctx.r30.s64 = 16;
loc_8327CA74:
	// stw r30,10428(r31)
	PPC_STORE_U32(ctx.r31.u32 + 10428, ctx.r30.u32);
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
loc_8327CA7C:
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// addi r4,r31,10364
	ctx.r4.s64 = ctx.r31.s64 + 10364;
	// bl 0x8327c210
	ctx.lr = 0x8327CA88;
	sub_8327C210(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
loc_8327CA8C:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x833a01e0
	__restgprlr_22(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8327CA94"))) PPC_WEAK_FUNC(sub_8327CA94);
PPC_FUNC_IMPL(__imp__sub_8327CA94) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8327CA98"))) PPC_WEAK_FUNC(sub_8327CA98);
PPC_FUNC_IMPL(__imp__sub_8327CA98) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x833a01a8
	ctx.lr = 0x8327CAA0;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r30,8448(r3)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8448);
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// li r4,47
	ctx.r4.s64 = 47;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r28,r30,20
	ctx.r28.s64 = ctx.r30.s64 + 20;
	// bl 0x83274d00
	ctx.lr = 0x8327CABC;
	sub_83274D00(ctx, base);
	// cmpwi cr6,r3,1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 1, ctx.xer);
	// beq cr6,0x8327cc14
	if (ctx.cr6.eq) goto loc_8327CC14;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x832802c0
	ctx.lr = 0x8327CAD0;
	sub_832802C0(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8327cc14
	if (!ctx.cr6.eq) goto loc_8327CC14;
	// li r4,39
	ctx.r4.s64 = 39;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83274d00
	ctx.lr = 0x8327CAE8;
	sub_83274D00(ctx, base);
	// cmpwi cr6,r3,1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 1, ctx.xer);
	// bne cr6,0x8327caf8
	if (!ctx.cr6.eq) goto loc_8327CAF8;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x8327cc14
	goto loc_8327CC14;
loc_8327CAF8:
	// lbz r11,88(r28)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r28.u32 + 88);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x8327cb0c
	if (ctx.cr0.eq) goto loc_8327CB0C;
	// lwz r3,244(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 244);
	// b 0x8327cc14
	goto loc_8327CC14;
loc_8327CB0C:
	// lwz r30,24(r28)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r28.u32 + 24);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x8327a9f0
	ctx.lr = 0x8327CB1C;
	sub_8327A9F0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x8327cb40
	if (ctx.cr0.eq) goto loc_8327CB40;
	// lis r11,-31822
	ctx.r11.s64 = -2085486592;
	// lwz r3,2364(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 2364);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8327cbf4
	if (ctx.cr6.eq) goto loc_8327CBF4;
	// lis r10,-32219
	ctx.r10.s64 = -2111504384;
	// addi r10,r10,17436
	ctx.r10.s64 = ctx.r10.s64 + 17436;
	// b 0x8327cbd0
	goto loc_8327CBD0;
loc_8327CB40:
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8327aa30
	ctx.lr = 0x8327CB50;
	sub_8327AA30(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x8327cb74
	if (ctx.cr0.eq) goto loc_8327CB74;
	// lis r11,-31822
	ctx.r11.s64 = -2085486592;
	// lwz r3,2364(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 2364);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8327cbf4
	if (ctx.cr6.eq) goto loc_8327CBF4;
	// lis r10,-32219
	ctx.r10.s64 = -2111504384;
	// addi r10,r10,17428
	ctx.r10.s64 = ctx.r10.s64 + 17428;
	// b 0x8327cbd0
	goto loc_8327CBD0;
loc_8327CB74:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8327a8f0
	ctx.lr = 0x8327CB80;
	sub_8327A8F0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x8327cba4
	if (ctx.cr0.eq) goto loc_8327CBA4;
	// lis r11,-31822
	ctx.r11.s64 = -2085486592;
	// lwz r3,2364(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 2364);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8327cbf4
	if (ctx.cr6.eq) goto loc_8327CBF4;
	// lis r10,-32219
	ctx.r10.s64 = -2111504384;
	// addi r10,r10,17420
	ctx.r10.s64 = ctx.r10.s64 + 17420;
	// b 0x8327cbd0
	goto loc_8327CBD0;
loc_8327CBA4:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8327ba38
	ctx.lr = 0x8327CBB0;
	sub_8327BA38(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x8327cbfc
	if (ctx.cr0.eq) goto loc_8327CBFC;
	// lis r11,-31822
	ctx.r11.s64 = -2085486592;
	// lwz r3,2364(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 2364);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8327cbf4
	if (ctx.cr6.eq) goto loc_8327CBF4;
	// lis r10,-32219
	ctx.r10.s64 = -2111504384;
	// addi r10,r10,17412
	ctx.r10.s64 = ctx.r10.s64 + 17412;
loc_8327CBD0:
	// lis r11,-31845
	ctx.r11.s64 = -2086993920;
	// addi r11,r11,4288
	ctx.r11.s64 = ctx.r11.s64 + 4288;
	// addi r4,r11,4
	ctx.r4.s64 = ctx.r11.s64 + 4;
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
	ctx.lr = 0x8327CBF4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8327CBF4:
	// li r30,1
	ctx.r30.s64 = 1;
	// b 0x8327cc00
	goto loc_8327CC00;
loc_8327CBFC:
	// li r30,0
	ctx.r30.s64 = 0;
loc_8327CC00:
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8327a928
	ctx.lr = 0x8327CC10;
	sub_8327A928(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
loc_8327CC14:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x833a01f8
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8327CC1C"))) PPC_WEAK_FUNC(sub_8327CC1C);
PPC_FUNC_IMPL(__imp__sub_8327CC1C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8327CC20"))) PPC_WEAK_FUNC(sub_8327CC20);
PPC_FUNC_IMPL(__imp__sub_8327CC20) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x833a0184
	ctx.lr = 0x8327CC28;
	__savegprlr_19(ctx, base);
	// stwu r1,-272(r1)
	ea = -272 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r29,8448(r3)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8448);
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// addi r6,r1,84
	ctx.r6.s64 = ctx.r1.s64 + 84;
	// addi r21,r29,20
	ctx.r21.s64 = ctx.r29.s64 + 20;
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// mr r4,r21
	ctx.r4.u64 = ctx.r21.u64;
	// lwz r20,0(r29)
	ctx.r20.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r28,r3,2584
	ctx.r28.s64 = ctx.r3.s64 + 2584;
	// addi r19,r3,2416
	ctx.r19.s64 = ctx.r3.s64 + 2416;
	// bl 0x8327bc48
	ctx.lr = 0x8327CC58;
	sub_8327BC48(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x8327cf18
	if (!ctx.cr0.eq) goto loc_8327CF18;
	// addi r6,r1,92
	ctx.r6.s64 = ctx.r1.s64 + 92;
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8327ab60
	ctx.lr = 0x8327CC74;
	sub_8327AB60(ctx, base);
	// lwz r26,84(r1)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// addi r4,r31,14932
	ctx.r4.s64 = ctx.r31.s64 + 14932;
	// lwz r3,104(r26)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r26.u32 + 104);
	// bl 0x8327acf8
	ctx.lr = 0x8327CC84;
	sub_8327ACF8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8327abe8
	ctx.lr = 0x8327CC8C;
	sub_8327ABE8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8328c2b0
	ctx.lr = 0x8327CC94;
	sub_8328C2B0(ctx, base);
	// mr r22,r3
	ctx.r22.u64 = ctx.r3.u64;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x832ee438
	ctx.lr = 0x8327CCA8;
	sub_832EE438(ctx, base);
	// lis r25,-31822
	ctx.r25.s64 = -2085486592;
	// mr r23,r3
	ctx.r23.u64 = ctx.r3.u64;
	// lis r11,-31845
	ctx.r11.s64 = -2086993920;
	// addi r30,r11,3848
	ctx.r30.s64 = ctx.r11.s64 + 3848;
	// lwz r3,2364(r25)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r25.u32 + 2364);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8327ccf4
	if (ctx.cr6.eq) goto loc_8327CCF4;
	// addi r11,r21,24
	ctx.r11.s64 = ctx.r21.s64 + 24;
	// stw r20,12(r30)
	PPC_STORE_U32(ctx.r30.u32 + 12, ctx.r20.u32);
	// addi r10,r21,48
	ctx.r10.s64 = ctx.r21.s64 + 48;
	// addi r9,r21,104
	ctx.r9.s64 = ctx.r21.s64 + 104;
	// stw r11,24(r30)
	PPC_STORE_U32(ctx.r30.u32 + 24, ctx.r11.u32);
	// stw r10,36(r30)
	PPC_STORE_U32(ctx.r30.u32 + 36, ctx.r10.u32);
	// addi r4,r30,4
	ctx.r4.s64 = ctx.r30.s64 + 4;
	// stw r9,48(r30)
	PPC_STORE_U32(ctx.r30.u32 + 48, ctx.r9.u32);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,36(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8327CCF4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8327CCF4:
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r20
	ctx.r3.u64 = ctx.r20.u64;
	// bl 0x8328beb8
	ctx.lr = 0x8327CD04;
	sub_8328BEB8(ctx, base);
	// mr r24,r3
	ctx.r24.u64 = ctx.r3.u64;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x832ee438
	ctx.lr = 0x8327CD18;
	sub_832EE438(ctx, base);
	// lwz r11,2364(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 2364);
	// subf r10,r23,r3
	ctx.r10.s64 = ctx.r3.s64 - ctx.r23.s64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// beq cr6,0x8327cd64
	if (ctx.cr6.eq) goto loc_8327CD64;
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// addi r8,r1,152
	ctx.r8.s64 = ctx.r1.s64 + 152;
	// stw r10,116(r30)
	PPC_STORE_U32(ctx.r30.u32 + 116, ctx.r10.u32);
	// addi r10,r1,156
	ctx.r10.s64 = ctx.r1.s64 + 156;
	// stw r8,140(r30)
	PPC_STORE_U32(ctx.r30.u32 + 140, ctx.r8.u32);
	// addi r9,r1,148
	ctx.r9.s64 = ctx.r1.s64 + 148;
	// stw r10,152(r30)
	PPC_STORE_U32(ctx.r30.u32 + 152, ctx.r10.u32);
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// stw r9,128(r30)
	PPC_STORE_U32(ctx.r30.u32 + 128, ctx.r9.u32);
	// addi r4,r30,108
	ctx.r4.s64 = ctx.r30.s64 + 108;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r11,36(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8327CD64;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8327CD64:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8328c2b0
	ctx.lr = 0x8327CD6C;
	sub_8328C2B0(ctx, base);
	// lwz r11,24(r21)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r21.u32 + 24);
	// subf r4,r22,r3
	ctx.r4.s64 = ctx.r3.s64 - ctx.r22.s64;
	// rlwinm r11,r11,5,0,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 5) & 0xFFFFFFE0;
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// addi r3,r11,10096
	ctx.r3.s64 = ctx.r11.s64 + 10096;
	// bl 0x8328c3c8
	ctx.lr = 0x8327CD84;
	sub_8328C3C8(ctx, base);
	// lwz r9,12(r28)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r28.u32 + 12);
	// lwz r11,16(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 16);
	// lis r6,-256
	ctx.r6.s64 = -16777216;
	// lwz r8,148(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 148);
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// lwz r10,152(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 152);
	// ori r6,r6,3846
	ctx.r6.u64 = ctx.r6.u64 | 3846;
	// add r9,r9,r8
	ctx.r9.u64 = ctx.r9.u64 + ctx.r8.u64;
	// lwz r5,80(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r9,12(r28)
	PPC_STORE_U32(ctx.r28.u32 + 12, ctx.r9.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,16(r28)
	PPC_STORE_U32(ctx.r28.u32 + 16, ctx.r11.u32);
	// bl 0x8327a268
	ctx.lr = 0x8327CDBC;
	sub_8327A268(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x8327a200
	ctx.lr = 0x8327CDCC;
	sub_8327A200(ctx, base);
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// beq cr6,0x8327cde4
	if (ctx.cr6.eq) goto loc_8327CDE4;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x832848e8
	ctx.lr = 0x8327CDDC;
	sub_832848E8(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// b 0x8327cf1c
	goto loc_8327CF1C;
loc_8327CDE4:
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x8327cf04
	if (!ctx.cr6.gt) goto loc_8327CF04;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8327c050
	ctx.lr = 0x8327CDFC;
	sub_8327C050(ctx, base);
	// lwz r11,16(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 16);
	// lwz r9,88(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// lwz r10,92(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// stw r11,84(r26)
	PPC_STORE_U32(ctx.r26.u32 + 84, ctx.r11.u32);
	// lwz r11,252(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 252);
	// lwz r8,148(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 148);
	// add r11,r11,r8
	ctx.r11.u64 = ctx.r11.u64 + ctx.r8.u64;
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// stw r11,76(r26)
	PPC_STORE_U32(ctx.r26.u32 + 76, ctx.r11.u32);
	// lwz r11,152(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 152);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r11,80(r26)
	PPC_STORE_U32(ctx.r26.u32 + 80, ctx.r11.u32);
	// lhz r11,156(r1)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r1.u32 + 156);
	// sth r11,264(r26)
	PPC_STORE_U16(ctx.r26.u32 + 264, ctx.r11.u16);
	// lwz r11,240(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 240);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8327ce50
	if (!ctx.cr6.eq) goto loc_8327CE50;
	// lwz r11,280(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 280);
	// stw r11,96(r26)
	PPC_STORE_U32(ctx.r26.u32 + 96, ctx.r11.u32);
	// lwz r11,284(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 284);
	// stw r11,100(r26)
	PPC_STORE_U32(ctx.r26.u32 + 100, ctx.r11.u32);
loc_8327CE50:
	// lwz r10,240(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 240);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x8327ce68
	if (!ctx.cr6.eq) goto loc_8327CE68;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8327a9d8
	ctx.lr = 0x8327CE64;
	sub_8327A9D8(ctx, base);
	// stw r3,4(r29)
	PPC_STORE_U32(ctx.r29.u32 + 4, ctx.r3.u32);
loc_8327CE68:
	// lwz r11,56(r21)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r21.u32 + 56);
	// li r30,0
	ctx.r30.s64 = 0;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// beq cr6,0x8327ce88
	if (ctx.cr6.eq) goto loc_8327CE88;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x8327ce88
	if (!ctx.cr6.eq) goto loc_8327CE88;
	// stw r26,240(r29)
	PPC_STORE_U32(ctx.r29.u32 + 240, ctx.r26.u32);
	// b 0x8327ce8c
	goto loc_8327CE8C;
loc_8327CE88:
	// stw r30,240(r29)
	PPC_STORE_U32(ctx.r29.u32 + 240, ctx.r30.u32);
loc_8327CE8C:
	// lwz r11,240(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 240);
	// stw r30,244(r29)
	PPC_STORE_U32(ctx.r29.u32 + 244, ctx.r30.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// stw r30,248(r29)
	PPC_STORE_U32(ctx.r29.u32 + 248, ctx.r30.u32);
	// bne cr6,0x8327cee8
	if (!ctx.cr6.eq) goto loc_8327CEE8;
	// lwz r11,64(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 64);
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bne cr6,0x8327cecc
	if (!ctx.cr6.eq) goto loc_8327CECC;
	// lwz r11,24(r21)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r21.u32 + 24);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x8327cec0
	if (ctx.cr6.eq) goto loc_8327CEC0;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// bne cr6,0x8327cecc
	if (!ctx.cr6.eq) goto loc_8327CECC;
loc_8327CEC0:
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x83284918
	ctx.lr = 0x8327CEC8;
	sub_83284918(ctx, base);
	// b 0x8327ced4
	goto loc_8327CED4;
loc_8327CECC:
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x83284900
	ctx.lr = 0x8327CED4;
	sub_83284900(ctx, base);
loc_8327CED4:
	// addi r5,r19,12
	ctx.r5.s64 = ctx.r19.s64 + 12;
	// addi r4,r19,8
	ctx.r4.s64 = ctx.r19.s64 + 8;
	// mr r3,r20
	ctx.r3.u64 = ctx.r20.u64;
	// bl 0x83289648
	ctx.lr = 0x8327CEE4;
	sub_83289648(ctx, base);
	// stw r30,12(r29)
	PPC_STORE_U32(ctx.r29.u32 + 12, ctx.r30.u32);
loc_8327CEE8:
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r5,24(r21)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r21.u32 + 24);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8327e3f0
	ctx.lr = 0x8327CEF8;
	sub_8327E3F0(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,100(r31)
	PPC_STORE_U32(ctx.r31.u32 + 100, ctx.r11.u32);
	// b 0x8327cf18
	goto loc_8327CF18;
loc_8327CF04:
	// lwz r11,240(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 240);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8327cf18
	if (!ctx.cr6.eq) goto loc_8327CF18;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x832848e8
	ctx.lr = 0x8327CF18;
	sub_832848E8(ctx, base);
loc_8327CF18:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8327CF1C:
	// addi r1,r1,272
	ctx.r1.s64 = ctx.r1.s64 + 272;
	// b 0x833a01d4
	__restgprlr_19(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8327CF24"))) PPC_WEAK_FUNC(sub_8327CF24);
PPC_FUNC_IMPL(__imp__sub_8327CF24) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8327CF28"))) PPC_WEAK_FUNC(sub_8327CF28);
PPC_FUNC_IMPL(__imp__sub_8327CF28) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x833a01a8
	ctx.lr = 0x8327CF30;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// bl 0x83284498
	ctx.lr = 0x8327CF44;
	sub_83284498(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x8327d000
	if (!ctx.cr0.eq) goto loc_8327D000;
	// li r30,0
	ctx.r30.s64 = 0;
	// li r11,5
	ctx.r11.s64 = 5;
	// li r10,192
	ctx.r10.s64 = 192;
	// stw r30,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r30.u32);
	// li r9,1
	ctx.r9.s64 = 1;
	// stw r30,10436(r29)
	PPC_STORE_U32(ctx.r29.u32 + 10436, ctx.r30.u32);
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// li r5,16
	ctx.r5.s64 = 16;
	// stw r10,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r10.u32);
	// addi r4,r29,10364
	ctx.r4.s64 = ctx.r29.s64 + 10364;
	// stw r30,192(r31)
	PPC_STORE_U32(ctx.r31.u32 + 192, ctx.r30.u32);
	// addi r3,r29,10440
	ctx.r3.s64 = ctx.r29.s64 + 10440;
	// stw r9,196(r31)
	PPC_STORE_U32(ctx.r31.u32 + 196, ctx.r9.u32);
	// stw r30,10432(r29)
	PPC_STORE_U32(ctx.r29.u32 + 10432, ctx.r30.u32);
	// stw r30,232(r31)
	PPC_STORE_U32(ctx.r31.u32 + 232, ctx.r30.u32);
	// stw r30,236(r31)
	PPC_STORE_U32(ctx.r31.u32 + 236, ctx.r30.u32);
	// stw r30,240(r31)
	PPC_STORE_U32(ctx.r31.u32 + 240, ctx.r30.u32);
	// stw r30,244(r31)
	PPC_STORE_U32(ctx.r31.u32 + 244, ctx.r30.u32);
	// stw r30,248(r31)
	PPC_STORE_U32(ctx.r31.u32 + 248, ctx.r30.u32);
	// stw r30,252(r31)
	PPC_STORE_U32(ctx.r31.u32 + 252, ctx.r30.u32);
	// stw r30,288(r31)
	PPC_STORE_U32(ctx.r31.u32 + 288, ctx.r30.u32);
	// bl 0x8327c210
	ctx.lr = 0x8327CFA4;
	sub_8327C210(ctx, base);
	// stw r30,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r30.u32);
	// stw r30,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r30.u32);
	// addi r3,r31,20
	ctx.r3.s64 = ctx.r31.s64 + 20;
	// bl 0x8327adb0
	ctx.lr = 0x8327CFB4;
	sub_8327ADB0(ctx, base);
	// lis r11,32767
	ctx.r11.s64 = 2147418112;
	// li r28,-1
	ctx.r28.s64 = -1;
	// stw r30,152(r31)
	PPC_STORE_U32(ctx.r31.u32 + 152, ctx.r30.u32);
	// ori r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 65535;
	// addi r3,r31,160
	ctx.r3.s64 = ctx.r31.s64 + 160;
	// stw r28,148(r31)
	PPC_STORE_U32(ctx.r31.u32 + 148, ctx.r28.u32);
	// stw r11,156(r31)
	PPC_STORE_U32(ctx.r31.u32 + 156, ctx.r11.u32);
	// bl 0x8327a310
	ctx.lr = 0x8327CFD4;
	sub_8327A310(ctx, base);
	// addi r3,r29,14920
	ctx.r3.s64 = ctx.r29.s64 + 14920;
	// bl 0x83284620
	ctx.lr = 0x8327CFDC;
	sub_83284620(ctx, base);
	// li r11,16
	ctx.r11.s64 = 16;
	// addi r9,r29,10264
	ctx.r9.s64 = ctx.r29.s64 + 10264;
	// addi r10,r29,14940
	ctx.r10.s64 = ctx.r29.s64 + 14940;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
loc_8327CFEC:
	// stwu r10,280(r9)
	ea = 280 + ctx.r9.u32;
	PPC_STORE_U32(ea, ctx.r10.u32);
	ctx.r9.u32 = ea;
	// addi r10,r10,8
	ctx.r10.s64 = ctx.r10.s64 + 8;
	// bdnz 0x8327cfec
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8327CFEC;
	// li r3,0
	ctx.r3.s64 = 0;
	// std r28,256(r31)
	PPC_STORE_U64(ctx.r31.u32 + 256, ctx.r28.u64);
loc_8327D000:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x833a01f8
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8327D008"))) PPC_WEAK_FUNC(sub_8327D008);
PPC_FUNC_IMPL(__imp__sub_8327D008) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x833a01ac
	ctx.lr = 0x8327D010;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r30,8460(r3)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8460);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r29,8456(r3)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8456);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x83287ae8
	ctx.lr = 0x8327D028;
	sub_83287AE8(ctx, base);
	// cmpwi cr6,r3,1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 1, ctx.xer);
	// beq cr6,0x8327d06c
	if (ctx.cr6.eq) goto loc_8327D06C;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83287ae8
	ctx.lr = 0x8327D03C;
	sub_83287AE8(ctx, base);
	// cmpwi cr6,r3,1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 1, ctx.xer);
	// bne cr6,0x8327d06c
	if (!ctx.cr6.eq) goto loc_8327D06C;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8327c348
	ctx.lr = 0x8327D04C;
	sub_8327C348(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x8327d06c
	if (ctx.cr0.eq) goto loc_8327D06C;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83287ad0
	ctx.lr = 0x8327D064;
	sub_83287AD0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83279c70
	ctx.lr = 0x8327D06C;
	sub_83279C70(ctx, base);
loc_8327D06C:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x833a01fc
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8327D074"))) PPC_WEAK_FUNC(sub_8327D074);
PPC_FUNC_IMPL(__imp__sub_8327D074) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8327D078"))) PPC_WEAK_FUNC(sub_8327D078);
PPC_FUNC_IMPL(__imp__sub_8327D078) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// bl 0x8327c5b0
	ctx.lr = 0x8327D098;
	sub_8327C5B0(ctx, base);
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// beq cr6,0x8327d0b0
	if (ctx.cr6.eq) goto loc_8327D0B0;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8327b4b8
	ctx.lr = 0x8327D0AC;
	sub_8327B4B8(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
loc_8327D0B0:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8327D0C8"))) PPC_WEAK_FUNC(sub_8327D0C8);
PPC_FUNC_IMPL(__imp__sub_8327D0C8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x833a01a4
	ctx.lr = 0x8327D0D0;
	__savegprlr_27(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,2368(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 2368);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r28,8448(r3)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8448);
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r27,r5
	ctx.r27.u64 = ctx.r5.u64;
	// addi r29,r3,2352
	ctx.r29.s64 = ctx.r3.s64 + 2352;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8327d0fc
	if (ctx.cr6.eq) goto loc_8327D0FC;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x8327d1a4
	goto loc_8327D1A4;
loc_8327D0FC:
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8328b798
	ctx.lr = 0x8327D108;
	sub_8328B798(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x8327d124
	if (ctx.cr0.eq) goto loc_8327D124;
	// lis r4,-256
	ctx.r4.s64 = -16777216;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// ori r4,r4,3862
	ctx.r4.u64 = ctx.r4.u64 | 3862;
	// bl 0x83282390
	ctx.lr = 0x8327D120;
	sub_83282390(ctx, base);
	// b 0x8327d1a4
	goto loc_8327D1A4;
loc_8327D124:
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// addi r5,r1,92
	ctx.r5.s64 = ctx.r1.s64 + 92;
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8328b7f8
	ctx.lr = 0x8327D138;
	sub_8328B7F8(ctx, base);
	// li r4,60
	ctx.r4.s64 = 60;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83274d00
	ctx.lr = 0x8327D144;
	sub_83274D00(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x8327d154
	if (!ctx.cr0.eq) goto loc_8327D154;
	// li r11,0
	ctx.r11.s64 = 0;
	// b 0x8327d180
	goto loc_8327D180;
loc_8327D154:
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83287948
	ctx.lr = 0x8327D160;
	sub_83287948(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// bne cr6,0x8327d174
	if (!ctx.cr6.eq) goto loc_8327D174;
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
loc_8327D174:
	// cmpw cr6,r11,r3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r3.s32, ctx.xer);
	// blt cr6,0x8327d180
	if (ctx.cr6.lt) goto loc_8327D180;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
loc_8327D180:
	// stw r11,156(r28)
	PPC_STORE_U32(ctx.r28.u32 + 156, ctx.r11.u32);
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r6,84(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r4,88(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// bl 0x8327a8b8
	ctx.lr = 0x8327D198;
	sub_8327A8B8(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8327c7e8
	ctx.lr = 0x8327D1A4;
	sub_8327C7E8(ctx, base);
loc_8327D1A4:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x833a01f4
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8327D1AC"))) PPC_WEAK_FUNC(sub_8327D1AC);
PPC_FUNC_IMPL(__imp__sub_8327D1AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8327D1B0"))) PPC_WEAK_FUNC(sub_8327D1B0);
PPC_FUNC_IMPL(__imp__sub_8327D1B0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x833a01ac
	ctx.lr = 0x8327D1B8;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r4,5
	ctx.r4.s64 = 5;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x83274d00
	ctx.lr = 0x8327D1C8;
	sub_83274D00(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x8327d2ac
	if (ctx.cr0.eq) goto loc_8327D2AC;
	// addi r29,r31,9448
	ctx.r29.s64 = ctx.r31.s64 + 9448;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r29,8448(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8448, ctx.r29.u32);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x8327cf28
	ctx.lr = 0x8327D1E4;
	sub_8327CF28(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x8327d2b0
	if (!ctx.cr0.eq) goto loc_8327D2B0;
	// li r4,12
	ctx.r4.s64 = 12;
	// addi r3,r29,268
	ctx.r3.s64 = ctx.r29.s64 + 268;
	// bl 0x8328c278
	ctx.lr = 0x8327D1F8;
	sub_8328C278(ctx, base);
	// stw r3,264(r29)
	PPC_STORE_U32(ctx.r29.u32 + 264, ctx.r3.u32);
	// bl 0x83289bd0
	ctx.lr = 0x8327D200;
	sub_83289BD0(ctx, base);
	// mr. r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// bne 0x8327d21c
	if (!ctx.cr0.eq) goto loc_8327D21C;
	// lis r4,-256
	ctx.r4.s64 = -16777216;
	// ori r4,r4,3850
	ctx.r4.u64 = ctx.r4.u64 | 3850;
loc_8327D210:
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x83282390
	ctx.lr = 0x8327D218;
	sub_83282390(ctx, base);
	// b 0x8327d2b0
	goto loc_8327D2B0;
loc_8327D21C:
	// lis r11,-31960
	ctx.r11.s64 = -2094530560;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// addi r4,r11,-21056
	ctx.r4.s64 = ctx.r11.s64 + -21056;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8328c1c0
	ctx.lr = 0x8327D230;
	sub_8328C1C0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x8327d24c
	if (ctx.cr0.eq) goto loc_8327D24C;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8327adf8
	ctx.lr = 0x8327D240;
	sub_8327ADF8(ctx, base);
	// lis r4,-256
	ctx.r4.s64 = -16777216;
	// ori r4,r4,3851
	ctx.r4.u64 = ctx.r4.u64 | 3851;
	// b 0x8327d210
	goto loc_8327D210;
loc_8327D24C:
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83274d00
	ctx.lr = 0x8327D258;
	sub_83274D00(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x83289940
	ctx.lr = 0x8327D268;
	sub_83289940(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83274d00
	ctx.lr = 0x8327D274;
	sub_83274D00(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x83289940
	ctx.lr = 0x8327D284;
	sub_83289940(ctx, base);
	// li r4,6
	ctx.r4.s64 = 6;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r5,64(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 64);
	// bl 0x83289940
	ctx.lr = 0x8327D294;
	sub_83289940(ctx, base);
	// stw r30,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r30.u32);
	// bl 0x8327e520
	ctx.lr = 0x8327D29C;
	sub_8327E520(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x8327d2ac
	if (ctx.cr0.eq) goto loc_8327D2AC;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83284de8
	ctx.lr = 0x8327D2AC;
	sub_83284DE8(ctx, base);
loc_8327D2AC:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8327D2B0:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x833a01fc
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8327D2B8"))) PPC_WEAK_FUNC(sub_8327D2B8);
PPC_FUNC_IMPL(__imp__sub_8327D2B8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x833a0180
	ctx.lr = 0x8327D2C0;
	__savegprlr_18(ctx, base);
	// stwu r1,-240(r1)
	ea = -240 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r30,8448(r3)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8448);
	// li r22,0
	ctx.r22.s64 = 0;
	// mr r23,r4
	ctx.r23.u64 = ctx.r4.u64;
	// lwz r4,14932(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 14932);
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// lwz r5,14928(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 14928);
	// addi r11,r3,14920
	ctx.r11.s64 = ctx.r3.s64 + 14920;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r25,0(r30)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r19,r6
	ctx.r19.u64 = ctx.r6.u64;
	// stw r22,14936(r3)
	PPC_STORE_U32(ctx.r3.u32 + 14936, ctx.r22.u32);
	// mr r18,r7
	ctx.r18.u64 = ctx.r7.u64;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// mr r27,r8
	ctx.r27.u64 = ctx.r8.u64;
	// addi r24,r11,16
	ctx.r24.s64 = ctx.r11.s64 + 16;
	// addi r26,r30,20
	ctx.r26.s64 = ctx.r30.s64 + 20;
	// bl 0x83289d70
	ctx.lr = 0x8327D308;
	sub_83289D70(ctx, base);
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x832ee438
	ctx.lr = 0x8327D318;
	sub_832EE438(ctx, base);
	// lis r21,-31822
	ctx.r21.s64 = -2085486592;
	// stw r3,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r3.u32);
	// lis r11,-31845
	ctx.r11.s64 = -2086993920;
	// addi r28,r11,3632
	ctx.r28.s64 = ctx.r11.s64 + 3632;
	// lwz r3,2364(r21)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r21.u32 + 2364);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8327d354
	if (ctx.cr6.eq) goto loc_8327D354;
	// addi r11,r1,84
	ctx.r11.s64 = ctx.r1.s64 + 84;
	// stw r25,12(r28)
	PPC_STORE_U32(ctx.r28.u32 + 12, ctx.r25.u32);
	// addi r4,r28,4
	ctx.r4.s64 = ctx.r28.s64 + 4;
	// stw r11,24(r28)
	PPC_STORE_U32(ctx.r28.u32 + 24, ctx.r11.u32);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,36(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8327D354;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8327D354:
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x8328b288
	ctx.lr = 0x8327D360;
	sub_8328B288(ctx, base);
	// stw r3,0(r27)
	PPC_STORE_U32(ctx.r27.u32 + 0, ctx.r3.u32);
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x832ee438
	ctx.lr = 0x8327D374;
	sub_832EE438(ctx, base);
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// lis r6,-256
	ctx.r6.s64 = -16777216;
	// lwz r4,0(r27)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// subf r5,r11,r3
	ctx.r5.s64 = ctx.r3.s64 - ctx.r11.s64;
	// ori r6,r6,3844
	ctx.r6.u64 = ctx.r6.u64 | 3844;
	// stw r5,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r5.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8327a268
	ctx.lr = 0x8327D394;
	sub_8327A268(ctx, base);
	// lwz r11,2364(r21)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r21.u32 + 2364);
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8327d3d0
	if (ctx.cr6.eq) goto loc_8327D3D0;
	// addi r10,r1,88
	ctx.r10.s64 = ctx.r1.s64 + 88;
	// stw r27,128(r28)
	PPC_STORE_U32(ctx.r28.u32 + 128, ctx.r27.u32);
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// stw r10,116(r28)
	PPC_STORE_U32(ctx.r28.u32 + 116, ctx.r10.u32);
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// addi r4,r28,108
	ctx.r4.s64 = ctx.r28.s64 + 108;
	// stw r10,140(r28)
	PPC_STORE_U32(ctx.r28.u32 + 140, ctx.r10.u32);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r11,36(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8327D3D0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8327D3D0:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,88(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// bl 0x8327a200
	ctx.lr = 0x8327D3DC;
	sub_8327A200(ctx, base);
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8327d44c
	if (!ctx.cr6.eq) goto loc_8327D44C;
	// lwz r11,0(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// cmpwi cr6,r11,-2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -2, ctx.xer);
	// beq cr6,0x8327d448
	if (ctx.cr6.eq) goto loc_8327D448;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x8328b730
	ctx.lr = 0x8327D400;
	sub_8328B730(ctx, base);
	// stw r3,0(r27)
	PPC_STORE_U32(ctx.r27.u32 + 0, ctx.r3.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x8327d420
	if (ctx.cr0.eq) goto loc_8327D420;
	// lis r4,-256
	ctx.r4.s64 = -16777216;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// ori r4,r4,3845
	ctx.r4.u64 = ctx.r4.u64 | 3845;
	// bl 0x83282390
	ctx.lr = 0x8327D41C;
	sub_83282390(ctx, base);
	// b 0x8327d44c
	goto loc_8327D44C;
loc_8327D420:
	// rlwinm. r28,r19,0,25,25
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r19.u32 | (ctx.r19.u64 << 32), 0) & 0x40;
	ctx.cr0.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// beq 0x8327d454
	if (ctx.cr0.eq) goto loc_8327D454;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r5,4(r26)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r26.u32 + 4);
	// lwz r4,0(r26)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// bl 0x83284a20
	ctx.lr = 0x8327D438;
	sub_83284A20(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x8327d454
	if (ctx.cr0.eq) goto loc_8327D454;
	// li r11,-2
	ctx.r11.s64 = -2;
	// stw r11,0(r27)
	PPC_STORE_U32(ctx.r27.u32 + 0, ctx.r11.u32);
loc_8327D448:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8327D44C:
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// b 0x833a01d0
	__restgprlr_18(ctx, base);
	return;
loc_8327D454:
	// lwz r11,24(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 24);
	// addi r20,r26,24
	ctx.r20.s64 = ctx.r26.s64 + 24;
	// li r29,1
	ctx.r29.s64 = 1;
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x8327d470
	if (!ctx.cr6.eq) goto loc_8327D470;
	// stw r22,252(r30)
	PPC_STORE_U32(ctx.r30.u32 + 252, ctx.r22.u32);
	// b 0x8327d4c4
	goto loc_8327D4C4;
loc_8327D470:
	// lwz r10,64(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 64);
	// cmpwi cr6,r10,3
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 3, ctx.xer);
	// bne cr6,0x8327d4c4
	if (!ctx.cr6.eq) goto loc_8327D4C4;
	// lwz r10,236(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 236);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8327d4c4
	if (ctx.cr6.eq) goto loc_8327D4C4;
	// lwz r10,132(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 132);
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// bne cr6,0x8327d4ac
	if (!ctx.cr6.eq) goto loc_8327D4AC;
	// lwz r11,20(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 20);
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// bge cr6,0x8327d4c4
	if (!ctx.cr6.lt) goto loc_8327D4C4;
	// cmpwi cr6,r10,512
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 512, ctx.xer);
	// bge cr6,0x8327d4c4
	if (!ctx.cr6.lt) goto loc_8327D4C4;
	// b 0x8327d4c0
	goto loc_8327D4C0;
loc_8327D4AC:
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bne cr6,0x8327d4c4
	if (!ctx.cr6.eq) goto loc_8327D4C4;
	// lwz r11,20(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 20);
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// blt cr6,0x8327d4c4
	if (ctx.cr6.lt) goto loc_8327D4C4;
loc_8327D4C0:
	// stw r29,252(r30)
	PPC_STORE_U32(ctx.r30.u32 + 252, ctx.r29.u32);
loc_8327D4C4:
	// mr r5,r24
	ctx.r5.u64 = ctx.r24.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x83289d88
	ctx.lr = 0x8327D4D4;
	sub_83289D88(ctx, base);
	// lwz r11,48(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 48);
	// lwz r10,148(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 148);
	// addi r27,r26,48
	ctx.r27.s64 = ctx.r26.s64 + 48;
	// cmpw cr6,r10,r11
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r11.s32, ctx.xer);
	// beq cr6,0x8327d4f4
	if (ctx.cr6.eq) goto loc_8327D4F4;
	// stw r11,148(r30)
	PPC_STORE_U32(ctx.r30.u32 + 148, ctx.r11.u32);
	// stw r29,152(r30)
	PPC_STORE_U32(ctx.r30.u32 + 152, ctx.r29.u32);
	// b 0x8327d4f8
	goto loc_8327D4F8;
loc_8327D4F4:
	// stw r22,152(r30)
	PPC_STORE_U32(ctx.r30.u32 + 152, ctx.r22.u32);
loc_8327D4F8:
	// cmpwi cr6,r28,0
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// beq cr6,0x8327d540
	if (ctx.cr6.eq) goto loc_8327D540;
	// lwz r29,3444(r31)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r31.u32 + 3444);
	// lwz r28,3448(r31)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r31.u32 + 3448);
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x8327d540
	if (ctx.cr6.eq) goto loc_8327D540;
	// li r5,1
	ctx.r5.s64 = 1;
	// lwz r4,4(r23)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r23.u32 + 4);
	// lwz r3,0(r23)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r23.u32 + 0);
	// bl 0x8328b648
	ctx.lr = 0x8327D520;
	sub_8328B648(ctx, base);
	// mr. r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8327d540
	if (ctx.cr0.eq) goto loc_8327D540;
	// lwz r4,0(r23)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r23.u32 + 0);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// mtctr r29
	ctx.ctr.u64 = ctx.r29.u64;
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// addi r5,r11,4
	ctx.r5.s64 = ctx.r11.s64 + 4;
	// bctrl 
	ctx.lr = 0x8327D540;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8327D540:
	// li r5,4
	ctx.r5.s64 = 4;
	// lwz r4,4(r23)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r23.u32 + 4);
	// lwz r3,0(r23)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r23.u32 + 0);
	// bl 0x8328b648
	ctx.lr = 0x8327D550;
	sub_8328B648(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// addi r7,r1,96
	ctx.r7.s64 = ctx.r1.s64 + 96;
	// lwz r8,152(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + 152);
	// addi r6,r1,104
	ctx.r6.s64 = ctx.r1.s64 + 104;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8327c6a8
	ctx.lr = 0x8327D56C;
	sub_8327C6A8(ctx, base);
	// ld r10,96(r1)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r1.u32 + 96);
	// lwz r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// and. r11,r11,r19
	ctx.r11.u64 = ctx.r11.u64 & ctx.r19.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// std r10,256(r30)
	PPC_STORE_U64(ctx.r30.u32 + 256, ctx.r10.u64);
	// beq 0x8327d448
	if (ctx.cr0.eq) goto loc_8327D448;
	// li r4,88
	ctx.r4.s64 = 88;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83274d00
	ctx.lr = 0x8327D58C;
	sub_83274D00(ctx, base);
	// cmpw cr6,r18,r3
	ctx.cr6.compare<int32_t>(ctx.r18.s32, ctx.r3.s32, ctx.xer);
	// blt cr6,0x8327d448
	if (ctx.cr6.lt) goto loc_8327D448;
	// lwz r11,240(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 240);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8327d5ac
	if (ctx.cr6.eq) goto loc_8327D5AC;
	// lwz r11,56(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 56);
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bne cr6,0x8327d5fc
	if (!ctx.cr6.eq) goto loc_8327D5FC;
loc_8327D5AC:
	// lwz r11,0(r20)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r20.u32 + 0);
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// beq cr6,0x8327d5ec
	if (ctx.cr6.eq) goto loc_8327D5EC;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8327ab18
	ctx.lr = 0x8327D5C4;
	sub_8327AB18(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x8327d5ec
	if (!ctx.cr0.eq) goto loc_8327D5EC;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8327b3e0
	ctx.lr = 0x8327D5D4;
	sub_8327B3E0(ctx, base);
	// lwz r3,264(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 264);
	// bl 0x8326df80
	ctx.lr = 0x8327D5DC;
	sub_8326DF80(ctx, base);
	// li r11,-1
	ctx.r11.s64 = -1;
	// stw r11,284(r30)
	PPC_STORE_U32(ctx.r30.u32 + 284, ctx.r11.u32);
	// stw r11,280(r30)
	PPC_STORE_U32(ctx.r30.u32 + 280, ctx.r11.u32);
	// b 0x8327d5fc
	goto loc_8327D5FC;
loc_8327D5EC:
	// addi r5,r30,284
	ctx.r5.s64 = ctx.r30.s64 + 284;
	// lwz r3,264(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 264);
	// addi r4,r30,280
	ctx.r4.s64 = ctx.r30.s64 + 280;
	// bl 0x8328c250
	ctx.lr = 0x8327D5FC;
	sub_8328C250(ctx, base);
loc_8327D5FC:
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// lwz r5,152(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + 152);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8327b740
	ctx.lr = 0x8327D60C;
	sub_8327B740(ctx, base);
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// ld r5,104(r1)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r1.u32 + 104);
	// lwz r6,152(r30)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r30.u32 + 152);
	// bl 0x8327c748
	ctx.lr = 0x8327D620;
	sub_8327C748(ctx, base);
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8327a748
	ctx.lr = 0x8327D62C;
	sub_8327A748(ctx, base);
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8327a7d0
	ctx.lr = 0x8327D638;
	sub_8327A7D0(ctx, base);
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8327d0c8
	ctx.lr = 0x8327D648;
	sub_8327D0C8(ctx, base);
	// lwz r10,2364(r21)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r21.u32 + 2364);
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8327d690
	if (ctx.cr6.eq) goto loc_8327D690;
	// lis r11,-31845
	ctx.r11.s64 = -2086993920;
	// addi r9,r26,104
	ctx.r9.s64 = ctx.r26.s64 + 104;
	// addi r11,r11,4064
	ctx.r11.s64 = ctx.r11.s64 + 4064;
	// addi r8,r31,3724
	ctx.r8.s64 = ctx.r31.s64 + 3724;
	// addi r4,r11,4
	ctx.r4.s64 = ctx.r11.s64 + 4;
	// mr r3,r10
	ctx.r3.u64 = ctx.r10.u64;
	// stw r27,24(r11)
	PPC_STORE_U32(ctx.r11.u32 + 24, ctx.r27.u32);
	// stw r9,36(r11)
	PPC_STORE_U32(ctx.r11.u32 + 36, ctx.r9.u32);
	// stw r8,48(r11)
	PPC_STORE_U32(ctx.r11.u32 + 48, ctx.r8.u32);
	// stw r20,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r20.u32);
	// lwz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// lwz r11,36(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8327D690;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8327D690:
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// b 0x8327d44c
	goto loc_8327D44C;
}

__attribute__((alias("__imp__sub_8327D698"))) PPC_WEAK_FUNC(sub_8327D698);
PPC_FUNC_IMPL(__imp__sub_8327D698) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x833a0194
	ctx.lr = 0x8327D6A0;
	__savegprlr_23(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// stw r11,0(r8)
	PPC_STORE_U32(ctx.r8.u32 + 0, ctx.r11.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r25,8448(r3)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8448);
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// lwz r4,8456(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8456);
	// mr r27,r6
	ctx.r27.u64 = ctx.r6.u64;
	// stw r11,2456(r3)
	PPC_STORE_U32(ctx.r3.u32 + 2456, ctx.r11.u32);
	// mr r26,r7
	ctx.r26.u64 = ctx.r7.u64;
	// lwz r11,2416(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 2416);
	// mr r24,r8
	ctx.r24.u64 = ctx.r8.u64;
	// addi r29,r3,2416
	ctx.r29.s64 = ctx.r3.s64 + 2416;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x8327d6e8
	if (!ctx.cr6.gt) goto loc_8327D6E8;
	// lis r26,32767
	ctx.r26.s64 = 2147418112;
	// ori r26,r26,65535
	ctx.r26.u64 = ctx.r26.u64 | 65535;
loc_8327D6E8:
	// lwz r11,8(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 8);
	// cmpwi cr6,r11,204
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 204, ctx.xer);
	// bne cr6,0x8327d700
	if (!ctx.cr6.eq) goto loc_8327D700;
	// lwz r11,248(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 248);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8327d704
	if (!ctx.cr6.eq) goto loc_8327D704;
loc_8327D700:
	// andi. r30,r30,204
	ctx.r30.u64 = ctx.r30.u64 & 204;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
loc_8327D704:
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x832879e0
	ctx.lr = 0x8327D710;
	sub_832879E0(ctx, base);
	// mr. r23,r3
	ctx.r23.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r23.s32, 0, ctx.xer);
	// beq 0x8327d720
	if (ctx.cr0.eq) goto loc_8327D720;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x8327d918
	goto loc_8327D918;
loc_8327D720:
	// andi. r11,r30,200
	ctx.r11.u64 = ctx.r30.u64 & 200;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// cmpwi r11,0
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8327d73c
	if (ctx.cr0.eq) goto loc_8327D73C;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8327b3e0
	ctx.lr = 0x8327D734;
	sub_8327B3E0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83284770
	ctx.lr = 0x8327D73C;
	sub_83284770(ctx, base);
loc_8327D73C:
	// cmpwi cr6,r30,128
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 128, ctx.xer);
	// bne cr6,0x8327d790
	if (!ctx.cr6.eq) goto loc_8327D790;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8327a100
	ctx.lr = 0x8327D74C;
	sub_8327A100(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83282720
	ctx.lr = 0x8327D754;
	sub_83282720(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// beq 0x8327d774
	if (ctx.cr0.eq) goto loc_8327D774;
	// lwz r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x8327d078
	ctx.lr = 0x8327D768;
	sub_8327D078(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
loc_8327D76C:
	// bne 0x8327d914
	if (!ctx.cr0.eq) goto loc_8327D914;
	// b 0x8327d90c
	goto loc_8327D90C;
loc_8327D774:
	// bl 0x832827a8
	ctx.lr = 0x8327D778;
	sub_832827A8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x8327d790
	if (ctx.cr0.eq) goto loc_8327D790;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x8327b4b8
	ctx.lr = 0x8327D78C;
	sub_8327B4B8(ctx, base);
	// b 0x8327d90c
	goto loc_8327D90C;
loc_8327D790:
	// cmpwi cr6,r27,0
	ctx.cr6.compare<int32_t>(ctx.r27.s32, 0, ctx.xer);
	// bne cr6,0x8327d808
	if (!ctx.cr6.eq) goto loc_8327D808;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8327b570
	ctx.lr = 0x8327D7A8;
	sub_8327B570(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x8327d7c4
	if (ctx.cr0.eq) goto loc_8327D7C4;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8327b3e0
	ctx.lr = 0x8327D7B8;
	sub_8327B3E0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83284758
	ctx.lr = 0x8327D7C0;
	sub_83284758(ctx, base);
	// b 0x8327d914
	goto loc_8327D914;
loc_8327D7C4:
	// cmpwi cr6,r28,4
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 4, ctx.xer);
	// bgt cr6,0x8327d808
	if (ctx.cr6.gt) goto loc_8327D808;
	// lis r10,-31822
	ctx.r10.s64 = -2085486592;
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,40(r29)
	PPC_STORE_U32(ctx.r29.u32 + 40, ctx.r11.u32);
	// lwz r3,2364(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + 2364);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8327d914
	if (ctx.cr6.eq) goto loc_8327D914;
	// lis r11,-31845
	ctx.r11.s64 = -2086993920;
	// addi r11,r11,4400
	ctx.r11.s64 = ctx.r11.s64 + 4400;
	// addi r4,r11,4
	ctx.r4.s64 = ctx.r11.s64 + 4;
	// stw r31,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r31.u32);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,36(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8327D804;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// b 0x8327d914
	goto loc_8327D914;
loc_8327D808:
	// andi. r11,r30,76
	ctx.r11.u64 = ctx.r30.u64 & 76;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// cmpwi r11,0
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8327d8a4
	if (ctx.cr0.eq) goto loc_8327D8A4;
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8327a0a8
	ctx.lr = 0x8327D820;
	sub_8327A0A8(ctx, base);
	// addi r8,r1,84
	ctx.r8.s64 = ctx.r1.s64 + 84;
	// mr r7,r26
	ctx.r7.u64 = ctx.r26.u64;
	// lwz r5,80(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8327d2b8
	ctx.lr = 0x8327D83C;
	sub_8327D2B8(ctx, base);
	// mr. r23,r3
	ctx.r23.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r23.s32, 0, ctx.xer);
	// bne 0x8327d914
	if (!ctx.cr0.eq) goto loc_8327D914;
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// li r29,1
	ctx.r29.s64 = 1;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8327d880
	if (!ctx.cr6.eq) goto loc_8327D880;
	// lwz r11,8(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 8);
	// and. r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 & ctx.r30.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8327d87c
	if (ctx.cr0.eq) goto loc_8327D87C;
	// li r4,88
	ctx.r4.s64 = 88;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83274d00
	ctx.lr = 0x8327D86C;
	sub_83274D00(ctx, base);
	// cmpw cr6,r26,r3
	ctx.cr6.compare<int32_t>(ctx.r26.s32, ctx.r3.s32, ctx.xer);
	// blt cr6,0x8327d87c
	if (ctx.cr6.lt) goto loc_8327D87C;
	// li r11,204
	ctx.r11.s64 = 204;
	// stw r11,8(r25)
	PPC_STORE_U32(ctx.r25.u32 + 8, ctx.r11.u32);
loc_8327D87C:
	// stw r29,248(r25)
	PPC_STORE_U32(ctx.r25.u32 + 248, ctx.r29.u32);
loc_8327D880:
	// cmpwi cr6,r30,64
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 64, ctx.xer);
	// bne cr6,0x8327d89c
	if (!ctx.cr6.eq) goto loc_8327D89C;
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmpwi cr6,r11,-2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -2, ctx.xer);
	// bne cr6,0x8327d89c
	if (!ctx.cr6.eq) goto loc_8327D89C;
	// li r11,192
	ctx.r11.s64 = 192;
	// stw r11,8(r25)
	PPC_STORE_U32(ctx.r25.u32 + 8, ctx.r11.u32);
loc_8327D89C:
	// stw r29,0(r24)
	PPC_STORE_U32(ctx.r24.u32 + 0, ctx.r29.u32);
	// b 0x8327d914
	goto loc_8327D914;
loc_8327D8A4:
	// rlwinm. r11,r30,0,30,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 0) & 0x2;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8327d8ec
	if (ctx.cr0.eq) goto loc_8327D8EC;
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8327a0a8
	ctx.lr = 0x8327D8B8;
	sub_8327A0A8(ctx, base);
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8327ca98
	ctx.lr = 0x8327D8C4;
	sub_8327CA98(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// lwz r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// beq 0x8327d8e0
	if (ctx.cr0.eq) goto loc_8327D8E0;
	// bl 0x8327bb88
	ctx.lr = 0x8327D8D8;
	sub_8327BB88(ctx, base);
	// mr. r23,r3
	ctx.r23.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r23.s32, 0, ctx.xer);
	// b 0x8327d76c
	goto loc_8327D76C;
loc_8327D8E0:
	// bl 0x8327cc20
	ctx.lr = 0x8327D8E4;
	sub_8327CC20(ctx, base);
	// mr r23,r3
	ctx.r23.u64 = ctx.r3.u64;
	// b 0x8327d914
	goto loc_8327D914;
loc_8327D8EC:
	// cmpwi cr6,r30,128
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 128, ctx.xer);
	// beq cr6,0x8327d914
	if (ctx.cr6.eq) goto loc_8327D914;
	// li r5,204
	ctx.r5.s64 = 204;
	// lwz r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8327c0a0
	ctx.lr = 0x8327D904;
	sub_8327C0A0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// ble 0x8327d914
	if (!ctx.cr0.gt) goto loc_8327D914;
loc_8327D90C:
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,0(r24)
	PPC_STORE_U32(ctx.r24.u32 + 0, ctx.r11.u32);
loc_8327D914:
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
loc_8327D918:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x833a01e4
	__restgprlr_23(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8327D920"))) PPC_WEAK_FUNC(sub_8327D920);
PPC_FUNC_IMPL(__imp__sub_8327D920) {
	PPC_FUNC_PROLOGUE();
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
	// li r31,0
	ctx.r31.s64 = 0;
loc_8327D93C:
	// lwz r11,132(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 132);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8327d9a4
	if (!ctx.cr6.eq) goto loc_8327D9A4;
	// lwz r11,136(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 136);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8327d9a4
	if (!ctx.cr6.eq) goto loc_8327D9A4;
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// addi r6,r1,84
	ctx.r6.s64 = ctx.r1.s64 + 84;
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// addi r4,r1,92
	ctx.r4.s64 = ctx.r1.s64 + 92;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8327c3b0
	ctx.lr = 0x8327D96C;
	sub_8327C3B0(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// bne 0x8327d9a4
	if (!ctx.cr0.eq) goto loc_8327D9A4;
	// addi r8,r1,96
	ctx.r8.s64 = ctx.r1.s64 + 96;
	// lwz r7,80(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r6,84(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r5,88(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// lwz r4,92(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// bl 0x8327d698
	ctx.lr = 0x8327D990;
	sub_8327D698(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// bne 0x8327d9a4
	if (!ctx.cr0.eq) goto loc_8327D9A4;
	// lwz r11,96(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8327d93c
	if (!ctx.cr6.eq) goto loc_8327D93C;
loc_8327D9A4:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8327ad58
	ctx.lr = 0x8327D9AC;
	sub_8327AD58(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
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

__attribute__((alias("__imp__sub_8327D9C8"))) PPC_WEAK_FUNC(sub_8327D9C8);
PPC_FUNC_IMPL(__imp__sub_8327D9C8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r4,5
	ctx.r4.s64 = 5;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x83274d00
	ctx.lr = 0x8327D9E8;
	sub_83274D00(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x8327d9f8
	if (!ctx.cr0.eq) goto loc_8327D9F8;
loc_8327D9F0:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x8327da4c
	goto loc_8327DA4C;
loc_8327D9F8:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83279be8
	ctx.lr = 0x8327DA00;
	sub_83279BE8(ctx, base);
	// cmpwi cr6,r3,1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 1, ctx.xer);
	// beq cr6,0x8327d9f0
	if (ctx.cr6.eq) goto loc_8327D9F0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83279b08
	ctx.lr = 0x8327DA10;
	sub_83279B08(ctx, base);
	// lwz r11,104(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 104);
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// bne cr6,0x8327da24
	if (!ctx.cr6.eq) goto loc_8327DA24;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83279b68
	ctx.lr = 0x8327DA24;
	sub_83279B68(ctx, base);
loc_8327DA24:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8327b080
	ctx.lr = 0x8327DA2C;
	sub_8327B080(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8327d920
	ctx.lr = 0x8327DA34;
	sub_8327D920(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8327d008
	ctx.lr = 0x8327DA40;
	sub_8327D008(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8327b228
	ctx.lr = 0x8327DA48;
	sub_8327B228(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
loc_8327DA4C:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8327DA64"))) PPC_WEAK_FUNC(sub_8327DA64);
PPC_FUNC_IMPL(__imp__sub_8327DA64) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8327DA68"))) PPC_WEAK_FUNC(sub_8327DA68);
PPC_FUNC_IMPL(__imp__sub_8327DA68) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x833a01ac
	ctx.lr = 0x8327DA70;
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
	// addi r31,r11,3200
	ctx.r31.s64 = ctx.r11.s64 + 3200;
	// lwz r3,2364(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 2364);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8327daa8
	if (ctx.cr6.eq) goto loc_8327DAA8;
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
	ctx.lr = 0x8327DAA8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8327DAA8:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8327d9c8
	ctx.lr = 0x8327DAB0;
	sub_8327D9C8(ctx, base);
	// lwz r11,2364(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 2364);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8327daf0
	if (ctx.cr6.eq) goto loc_8327DAF0;
	// addi r10,r30,2496
	ctx.r10.s64 = ctx.r30.s64 + 2496;
	// addi r9,r30,2504
	ctx.r9.s64 = ctx.r30.s64 + 2504;
	// addi r8,r30,2512
	ctx.r8.s64 = ctx.r30.s64 + 2512;
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
	ctx.lr = 0x8327DAF0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8327DAF0:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x833a01fc
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8327DAFC"))) PPC_WEAK_FUNC(sub_8327DAFC);
PPC_FUNC_IMPL(__imp__sub_8327DAFC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8327DB00"))) PPC_WEAK_FUNC(sub_8327DB00);
PPC_FUNC_IMPL(__imp__sub_8327DB00) {
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
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x832821e0
	ctx.lr = 0x8327DB14;
	sub_832821E0(ctx, base);
	// bl 0x832782b8
	ctx.lr = 0x8327DB18;
	sub_832782B8(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x832821f0
	ctx.lr = 0x8327DB20;
	sub_832821F0(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8327DB30"))) PPC_WEAK_FUNC(sub_8327DB30);
PPC_FUNC_IMPL(__imp__sub_8327DB30) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,104(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 104);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x8327db5c
	if (ctx.cr6.eq) goto loc_8327DB5C;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x8327db5c
	if (ctx.cr6.eq) goto loc_8327DB5C;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// beq cr6,0x8327db5c
	if (ctx.cr6.eq) goto loc_8327DB5C;
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// beq cr6,0x8327db5c
	if (ctx.cr6.eq) goto loc_8327DB5C;
loc_8327DB54:
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
loc_8327DB5C:
	// lwz r11,120(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 120);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x8327db54
	if (ctx.cr6.eq) goto loc_8327DB54;
	// lwz r11,100(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 100);
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r3,r11,27,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8327DB78"))) PPC_WEAK_FUNC(sub_8327DB78);
PPC_FUNC_IMPL(__imp__sub_8327DB78) {
	PPC_FUNC_PROLOGUE();
	// li r4,2
	ctx.r4.s64 = 2;
	// b 0x83285a80
	sub_83285A80(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8327DB80"))) PPC_WEAK_FUNC(sub_8327DB80);
PPC_FUNC_IMPL(__imp__sub_8327DB80) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,108(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 108);
	// lwz r3,104(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 104);
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// bltlr cr6
	if (ctx.cr6.lt) return;
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// ble cr6,0x8327dba0
	if (!ctx.cr6.gt) goto loc_8327DBA0;
	// cmpwi cr6,r11,6
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 6, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
loc_8327DBA0:
	// li r3,2
	ctx.r3.s64 = 2;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8327DBA8"))) PPC_WEAK_FUNC(sub_8327DBA8);
PPC_FUNC_IMPL(__imp__sub_8327DBA8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,2624(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 2624);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r30,0
	ctx.r30.s64 = 0;
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x8327dbf8
	if (!ctx.cr6.eq) goto loc_8327DBF8;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x83287968
	ctx.lr = 0x8327DBD8;
	sub_83287968(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x8327dbf8
	if (!ctx.cr0.eq) goto loc_8327DBF8;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83287958
	ctx.lr = 0x8327DBEC;
	sub_83287958(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x8327dbf8
	if (!ctx.cr0.eq) goto loc_8327DBF8;
	// stw r30,2624(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2624, ctx.r30.u32);
loc_8327DBF8:
	// lwz r11,2628(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2628);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x8327dc30
	if (!ctx.cr6.eq) goto loc_8327DC30;
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83287968
	ctx.lr = 0x8327DC10;
	sub_83287968(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x8327dc30
	if (!ctx.cr0.eq) goto loc_8327DC30;
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83287958
	ctx.lr = 0x8327DC24;
	sub_83287958(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x8327dc30
	if (!ctx.cr0.eq) goto loc_8327DC30;
	// stw r30,2628(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2628, ctx.r30.u32);
loc_8327DC30:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8327DC48"))) PPC_WEAK_FUNC(sub_8327DC48);
PPC_FUNC_IMPL(__imp__sub_8327DC48) {
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
	// lwz r11,2628(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 2628);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8327dc80
	if (!ctx.cr6.eq) goto loc_8327DC80;
	// lwz r11,2664(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 2664);
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// bne cr6,0x8327dc80
	if (!ctx.cr6.eq) goto loc_8327DC80;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,15
	ctx.r4.s64 = 15;
	// bl 0x83274d40
	ctx.lr = 0x8327DC80;
	sub_83274D40(ctx, base);
loc_8327DC80:
	// lwz r11,2624(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2624);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8327dca8
	if (!ctx.cr6.eq) goto loc_8327DCA8;
	// lwz r11,2664(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2664);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x8327dca8
	if (!ctx.cr6.eq) goto loc_8327DCA8;
	// li r5,2
	ctx.r5.s64 = 2;
	// li r4,15
	ctx.r4.s64 = 15;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83274d40
	ctx.lr = 0x8327DCA8;
	sub_83274D40(ctx, base);
loc_8327DCA8:
	// lwz r11,2664(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2664);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x8327dcd4
	if (!ctx.cr6.eq) goto loc_8327DCD4;
	// lwz r11,4228(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4228);
	// li r4,15
	ctx.r4.s64 = 15;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// li r5,5
	ctx.r5.s64 = 5;
	// bne cr6,0x8327dcd0
	if (!ctx.cr6.eq) goto loc_8327DCD0;
	// li r5,1
	ctx.r5.s64 = 1;
loc_8327DCD0:
	// bl 0x83274d40
	ctx.lr = 0x8327DCD4;
	sub_83274D40(ctx, base);
loc_8327DCD4:
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

__attribute__((alias("__imp__sub_8327DCE8"))) PPC_WEAK_FUNC(sub_8327DCE8);
PPC_FUNC_IMPL(__imp__sub_8327DCE8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r10,2628(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 2628);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r11,0
	ctx.r11.s64 = 0;
	// cmpwi cr6,r10,1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 1, ctx.xer);
	// bne cr6,0x8327dd14
	if (!ctx.cr6.eq) goto loc_8327DD14;
	// li r11,1
	ctx.r11.s64 = 1;
loc_8327DD14:
	// lwz r10,2624(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 2624);
	// cmpwi cr6,r10,1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 1, ctx.xer);
	// bne cr6,0x8327dd24
	if (!ctx.cr6.eq) goto loc_8327DD24;
	// ori r11,r11,2
	ctx.r11.u64 = ctx.r11.u64 | 2;
loc_8327DD24:
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x8327dd80
	if (ctx.cr6.eq) goto loc_8327DD80;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x8327dd78
	if (ctx.cr6.eq) goto loc_8327DD78;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bne cr6,0x8327dd70
	if (!ctx.cr6.eq) goto loc_8327DD70;
	// li r4,25
	ctx.r4.s64 = 25;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x83274d00
	ctx.lr = 0x8327DD48;
	sub_83274D00(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// bne 0x8327dd84
	if (!ctx.cr0.eq) goto loc_8327DD84;
	// bl 0x8328c4a0
	ctx.lr = 0x8327DD54;
	sub_8328C4A0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x8327dd70
	if (!ctx.cr0.eq) goto loc_8327DD70;
	// li r4,72
	ctx.r4.s64 = 72;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x83274d00
	ctx.lr = 0x8327DD68;
	sub_83274D00(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x8327dd84
	if (!ctx.cr0.eq) goto loc_8327DD84;
loc_8327DD70:
	// li r31,3
	ctx.r31.s64 = 3;
	// b 0x8327dd84
	goto loc_8327DD84;
loc_8327DD78:
	// li r31,2
	ctx.r31.s64 = 2;
	// b 0x8327dd84
	goto loc_8327DD84;
loc_8327DD80:
	// li r31,1
	ctx.r31.s64 = 1;
loc_8327DD84:
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// li r4,25
	ctx.r4.s64 = 25;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x83274d40
	ctx.lr = 0x8327DD94;
	sub_83274D40(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8327DDAC"))) PPC_WEAK_FUNC(sub_8327DDAC);
PPC_FUNC_IMPL(__imp__sub_8327DDAC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8327DDB0"))) PPC_WEAK_FUNC(sub_8327DDB0);
PPC_FUNC_IMPL(__imp__sub_8327DDB0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lwz r11,76(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 76);
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

__attribute__((alias("__imp__sub_8327DDC0"))) PPC_WEAK_FUNC(sub_8327DDC0);
PPC_FUNC_IMPL(__imp__sub_8327DDC0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r4,5
	ctx.r4.s64 = 5;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// bl 0x83274d00
	ctx.lr = 0x8327DDE0;
	sub_83274D00(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x8327de04
	if (ctx.cr0.eq) goto loc_8327DE04;
	// li r4,6
	ctx.r4.s64 = 6;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x83285b60
	ctx.lr = 0x8327DDF4;
	sub_83285B60(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x8327de04
	if (ctx.cr0.eq) goto loc_8327DE04;
loc_8327DDFC:
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x8327de50
	goto loc_8327DE50;
loc_8327DE04:
	// li r4,6
	ctx.r4.s64 = 6;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x83274d00
	ctx.lr = 0x8327DE10;
	sub_83274D00(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x8327de2c
	if (ctx.cr0.eq) goto loc_8327DE2C;
	// li r4,7
	ctx.r4.s64 = 7;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x83285b60
	ctx.lr = 0x8327DE24;
	sub_83285B60(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x8327ddfc
	if (!ctx.cr0.eq) goto loc_8327DDFC;
loc_8327DE2C:
	// li r31,0
	ctx.r31.s64 = 0;
loc_8327DE30:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x83287b20
	ctx.lr = 0x8327DE3C;
	sub_83287B20(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x8327ddfc
	if (!ctx.cr0.eq) goto loc_8327DDFC;
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// cmpwi cr6,r31,8
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 8, ctx.xer);
	// blt cr6,0x8327de30
	if (ctx.cr6.lt) goto loc_8327DE30;
loc_8327DE50:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8327DE68"))) PPC_WEAK_FUNC(sub_8327DE68);
PPC_FUNC_IMPL(__imp__sub_8327DE68) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,8456(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8456);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// mulli r11,r11,116
	ctx.r11.s64 = ctx.r11.s64 * 116;
	// add r31,r11,r3
	ctx.r31.u64 = ctx.r11.u64 + ctx.r3.u64;
	// addi r11,r31,5088
	ctx.r11.s64 = ctx.r31.s64 + 5088;
	// lwz r3,5092(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 5092);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,36(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8327DEA8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,5100(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 5100);
	// li r10,100
	ctx.r10.s64 = 100;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mulli r11,r11,80
	ctx.r11.s64 = ctx.r11.s64 * 80;
	// divw r11,r11,r10
	ctx.r11.s32 = ctx.r11.s32 / ctx.r10.s32;
	// cmpw cr6,r3,r11
	ctx.cr6.compare<int32_t>(ctx.r3.s32, ctx.r11.s32, ctx.xer);
	// bge cr6,0x8327dedc
	if (!ctx.cr6.lt) goto loc_8327DEDC;
	// li r4,70
	ctx.r4.s64 = 70;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x83274d00
	ctx.lr = 0x8327DED0;
	sub_83274D00(ctx, base);
	// cmpw cr6,r31,r3
	ctx.cr6.compare<int32_t>(ctx.r31.s32, ctx.r3.s32, ctx.xer);
	// li r3,0
	ctx.r3.s64 = 0;
	// blt cr6,0x8327dee0
	if (ctx.cr6.lt) goto loc_8327DEE0;
loc_8327DEDC:
	// li r3,1
	ctx.r3.s64 = 1;
loc_8327DEE0:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8327DEF8"))) PPC_WEAK_FUNC(sub_8327DEF8);
PPC_FUNC_IMPL(__imp__sub_8327DEF8) {
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
	// lwz r11,8524(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8524);
	// li r4,1
	ctx.r4.s64 = 1;
	// mulli r11,r11,116
	ctx.r11.s64 = ctx.r11.s64 * 116;
	// add r31,r11,r3
	ctx.r31.u64 = ctx.r11.u64 + ctx.r3.u64;
	// addi r11,r31,5088
	ctx.r11.s64 = ctx.r31.s64 + 5088;
	// lwz r3,5092(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 5092);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,36(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8327DF30;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,5100(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 5100);
	// li r10,100
	ctx.r10.s64 = 100;
	// mulli r11,r11,80
	ctx.r11.s64 = ctx.r11.s64 * 80;
	// divw r11,r11,r10
	ctx.r11.s32 = ctx.r11.s32 / ctx.r10.s32;
	// srawi r10,r3,31
	ctx.xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0x7FFFFFFF) != 0);
	ctx.r10.s64 = ctx.r3.s32 >> 31;
	// rlwinm r9,r11,1,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0x1;
	// subfc r11,r11,r3
	ctx.xer.ca = ctx.r3.u32 >= ctx.r11.u32;
	ctx.r11.s64 = ctx.r3.s64 - ctx.r11.s64;
	// adde r3,r9,r10
	temp.u8 = (ctx.r9.u32 + ctx.r10.u32 < ctx.r9.u32) | (ctx.r9.u32 + ctx.r10.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r3.u64 = ctx.r9.u64 + ctx.r10.u64 + ctx.xer.ca;
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

__attribute__((alias("__imp__sub_8327DF64"))) PPC_WEAK_FUNC(sub_8327DF64);
PPC_FUNC_IMPL(__imp__sub_8327DF64) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8327DF68"))) PPC_WEAK_FUNC(sub_8327DF68);
PPC_FUNC_IMPL(__imp__sub_8327DF68) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r31,2684(r3)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 2684);
	// lwz r30,2688(r3)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r3.u32 + 2688);
	// cmpwi cr6,r31,-4
	ctx.cr6.compare<int32_t>(ctx.r31.s32, -4, ctx.xer);
	// bne cr6,0x8327df94
	if (!ctx.cr6.eq) goto loc_8327DF94;
loc_8327DF8C:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x8327dfc4
	goto loc_8327DFC4;
loc_8327DF94:
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x83276d60
	ctx.lr = 0x8327DFA0;
	sub_83276D60(ctx, base);
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x8327df8c
	if (ctx.cr6.lt) goto loc_8327DF8C;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// lwz r4,84(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// bl 0x83289368
	ctx.lr = 0x8327DFBC;
	sub_83289368(ctx, base);
	// cntlzw r11,r3
	ctx.r11.u64 = ctx.r3.u32 == 0 ? 32 : __builtin_clz(ctx.r3.u32);
	// rlwinm r3,r11,27,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
loc_8327DFC4:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8327DFDC"))) PPC_WEAK_FUNC(sub_8327DFDC);
PPC_FUNC_IMPL(__imp__sub_8327DFDC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8327DFE0"))) PPC_WEAK_FUNC(sub_8327DFE0);
PPC_FUNC_IMPL(__imp__sub_8327DFE0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x833a01a4
	ctx.lr = 0x8327DFE8;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,2628(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 2628);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8327e010
	if (!ctx.cr6.eq) goto loc_8327E010;
	// lwz r11,2624(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 2624);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8327e010
	if (!ctx.cr6.eq) goto loc_8327E010;
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x8327e0a4
	goto loc_8327E0A4;
loc_8327E010:
	// li r4,6
	ctx.r4.s64 = 6;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// li r31,0
	ctx.r31.s64 = 0;
	// bl 0x83285b60
	ctx.lr = 0x8327E020;
	sub_83285B60(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// li r4,7
	ctx.r4.s64 = 7;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x83285b60
	ctx.lr = 0x8327E030;
	sub_83285B60(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x83285b60
	ctx.lr = 0x8327E040;
	sub_83285B60(ctx, base);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// li r4,25
	ctx.r4.s64 = 25;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x83274d00
	ctx.lr = 0x8327E050;
	sub_83274D00(ctx, base);
	// cmplwi cr6,r3,1
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 1, ctx.xer);
	// blt cr6,0x8327e080
	if (ctx.cr6.lt) goto loc_8327E080;
	// beq cr6,0x8327e078
	if (ctx.cr6.eq) goto loc_8327E078;
	// cmplwi cr6,r3,3
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 3, ctx.xer);
	// blt cr6,0x8327e070
	if (ctx.cr6.lt) goto loc_8327E070;
	// bne cr6,0x8327e084
	if (!ctx.cr6.eq) goto loc_8327E084;
	// or r31,r28,r29
	ctx.r31.u64 = ctx.r28.u64 | ctx.r29.u64;
	// b 0x8327e084
	goto loc_8327E084;
loc_8327E070:
	// mr r31,r29
	ctx.r31.u64 = ctx.r29.u64;
	// b 0x8327e084
	goto loc_8327E084;
loc_8327E078:
	// mr r31,r28
	ctx.r31.u64 = ctx.r28.u64;
	// b 0x8327e084
	goto loc_8327E084;
loc_8327E080:
	// and r31,r28,r29
	ctx.r31.u64 = ctx.r28.u64 & ctx.r29.u64;
loc_8327E084:
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x83285b70
	ctx.lr = 0x8327E090;
	sub_83285B70(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x8327e09c
	if (ctx.cr0.eq) goto loc_8327E09C;
	// and r31,r27,r31
	ctx.r31.u64 = ctx.r27.u64 & ctx.r31.u64;
loc_8327E09C:
	// addic r11,r31,-1
	ctx.xer.ca = ctx.r31.u32 > 0;
	ctx.r11.s64 = ctx.r31.s64 + -1;
	// subfe r3,r11,r31
	temp.u8 = (~ctx.r11.u32 + ctx.r31.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r31.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r3.u64 = ~ctx.r11.u64 + ctx.r31.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
loc_8327E0A4:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x833a01f4
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8327E0AC"))) PPC_WEAK_FUNC(sub_8327E0AC);
PPC_FUNC_IMPL(__imp__sub_8327E0AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8327E0B0"))) PPC_WEAK_FUNC(sub_8327E0B0);
PPC_FUNC_IMPL(__imp__sub_8327E0B0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r30,0
	ctx.r30.s64 = 0;
	// bl 0x83285b70
	ctx.lr = 0x8327E0D4;
	sub_83285B70(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x8327e0fc
	if (ctx.cr0.eq) goto loc_8327E0FC;
	// lwz r11,104(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 104);
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// blt cr6,0x8327e0f8
	if (ctx.cr6.lt) goto loc_8327E0F8;
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// ble cr6,0x8327e118
	if (!ctx.cr6.gt) goto loc_8327E118;
	// cmpwi cr6,r11,6
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 6, ctx.xer);
	// beq cr6,0x8327e12c
	if (ctx.cr6.eq) goto loc_8327E12C;
loc_8327E0F8:
	// li r30,0
	ctx.r30.s64 = 0;
loc_8327E0FC:
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
loc_8327E118:
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83285b60
	ctx.lr = 0x8327E124;
	sub_83285B60(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x8327e0fc
	if (ctx.cr0.eq) goto loc_8327E0FC;
loc_8327E12C:
	// li r30,1
	ctx.r30.s64 = 1;
	// b 0x8327e0fc
	goto loc_8327E0FC;
}

__attribute__((alias("__imp__sub_8327E134"))) PPC_WEAK_FUNC(sub_8327E134);
PPC_FUNC_IMPL(__imp__sub_8327E134) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8327E138"))) PPC_WEAK_FUNC(sub_8327E138);
PPC_FUNC_IMPL(__imp__sub_8327E138) {
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
	// lwz r11,104(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 104);
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// bne cr6,0x8327e178
	if (!ctx.cr6.eq) goto loc_8327E178;
	// lwz r11,112(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 112);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x8327e178
	if (ctx.cr6.eq) goto loc_8327E178;
	// lwz r11,2448(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 2448);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x8327e178
	if (ctx.cr6.eq) goto loc_8327E178;
	// bl 0x83277a60
	ctx.lr = 0x8327E16C;
	sub_83277A60(ctx, base);
	// addic r11,r3,-1
	ctx.xer.ca = ctx.r3.u32 > 0;
	ctx.r11.s64 = ctx.r3.s64 + -1;
	// subfe r3,r11,r3
	temp.u8 = (~ctx.r11.u32 + ctx.r3.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r3.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r3.u64 = ~ctx.r11.u64 + ctx.r3.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// b 0x8327e17c
	goto loc_8327E17C;
loc_8327E178:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8327E17C:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8327E18C"))) PPC_WEAK_FUNC(sub_8327E18C);
PPC_FUNC_IMPL(__imp__sub_8327E18C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8327E190"))) PPC_WEAK_FUNC(sub_8327E190);
PPC_FUNC_IMPL(__imp__sub_8327E190) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x833a01a8
	ctx.lr = 0x8327E198;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// li r4,54
	ctx.r4.s64 = 54;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// bl 0x83274d00
	ctx.lr = 0x8327E1AC;
	sub_83274D00(ctx, base);
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// bne cr6,0x8327e280
	if (!ctx.cr6.eq) goto loc_8327E280;
	// cmpwi cr6,r31,1
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 1, ctx.xer);
	// beq cr6,0x8327e280
	if (ctx.cr6.eq) goto loc_8327E280;
	// lis r11,32767
	ctx.r11.s64 = 2147418112;
	// lis r10,32767
	ctx.r10.s64 = 2147418112;
	// ori r29,r11,64535
	ctx.r29.u64 = ctx.r11.u64 | 64535;
	// ori r30,r10,65535
	ctx.r30.u64 = ctx.r10.u64 | 65535;
	// cmpwi cr6,r31,1000
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 1000, ctx.xer);
	// blt cr6,0x8327e1e4
	if (ctx.cr6.lt) goto loc_8327E1E4;
	// divw r11,r30,r31
	ctx.r11.s32 = ctx.r30.s32 / ctx.r31.s32;
	// mulli r11,r11,1000
	ctx.r11.s64 = ctx.r11.s64 * 1000;
	// addi r31,r11,-1000
	ctx.r31.s64 = ctx.r11.s64 + -1000;
	// b 0x8327e1e8
	goto loc_8327E1E8;
loc_8327E1E4:
	// mr r31,r29
	ctx.r31.u64 = ctx.r29.u64;
loc_8327E1E8:
	// lwz r11,3556(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 3556);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8327e228
	if (ctx.cr6.eq) goto loc_8327E228;
	// lwz r11,3596(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 3596);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x8327e228
	if (ctx.cr6.eq) goto loc_8327E228;
	// cmpwi cr6,r11,1000
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1000, ctx.xer);
	// blt cr6,0x8327e218
	if (ctx.cr6.lt) goto loc_8327E218;
	// divw r11,r30,r11
	ctx.r11.s32 = ctx.r30.s32 / ctx.r11.s32;
	// mulli r11,r11,1000
	ctx.r11.s64 = ctx.r11.s64 * 1000;
	// addi r11,r11,-1000
	ctx.r11.s64 = ctx.r11.s64 + -1000;
	// b 0x8327e21c
	goto loc_8327E21C;
loc_8327E218:
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
loc_8327E21C:
	// cmpw cr6,r31,r11
	ctx.cr6.compare<int32_t>(ctx.r31.s32, ctx.r11.s32, ctx.xer);
	// ble cr6,0x8327e228
	if (!ctx.cr6.gt) goto loc_8327E228;
	// mr r31,r11
	ctx.r31.u64 = ctx.r11.u64;
loc_8327E228:
	// li r4,15
	ctx.r4.s64 = 15;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x83274d00
	ctx.lr = 0x8327E234;
	sub_83274D00(ctx, base);
	// cmpwi cr6,r3,2
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 2, ctx.xer);
	// bne cr6,0x8327e270
	if (!ctx.cr6.eq) goto loc_8327E270;
	// lis r11,-31822
	ctx.r11.s64 = -2085486592;
	// addi r11,r11,1568
	ctx.r11.s64 = ctx.r11.s64 + 1568;
	// lwz r11,420(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 420);
	// cmpwi cr6,r11,1000
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1000, ctx.xer);
	// blt cr6,0x8327e260
	if (ctx.cr6.lt) goto loc_8327E260;
	// divw r11,r30,r11
	ctx.r11.s32 = ctx.r30.s32 / ctx.r11.s32;
	// mulli r11,r11,1000
	ctx.r11.s64 = ctx.r11.s64 * 1000;
	// addi r11,r11,-1000
	ctx.r11.s64 = ctx.r11.s64 + -1000;
	// b 0x8327e264
	goto loc_8327E264;
loc_8327E260:
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
loc_8327E264:
	// cmpw cr6,r31,r11
	ctx.cr6.compare<int32_t>(ctx.r31.s32, ctx.r11.s32, ctx.xer);
	// ble cr6,0x8327e270
	if (!ctx.cr6.gt) goto loc_8327E270;
	// mr r31,r11
	ctx.r31.u64 = ctx.r11.u64;
loc_8327E270:
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// li r4,54
	ctx.r4.s64 = 54;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x83274d40
	ctx.lr = 0x8327E280;
	sub_83274D40(ctx, base);
loc_8327E280:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x833a01f8
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8327E288"))) PPC_WEAK_FUNC(sub_8327E288);
PPC_FUNC_IMPL(__imp__sub_8327E288) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8327e2a4
	if (!ctx.cr6.eq) goto loc_8327E2A4;
	// lis r4,-256
	ctx.r4.s64 = -16777216;
	// li r3,0
	ctx.r3.s64 = 0;
	// ori r4,r4,516
	ctx.r4.u64 = ctx.r4.u64 | 516;
	// b 0x83282390
	sub_83282390(ctx, base);
	return;
loc_8327E2A4:
	// lwz r11,72(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 72);
	// li r3,0
	ctx.r3.s64 = 0;
	// cmplwi cr6,r11,15136
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 15136, ctx.xer);
	// bgelr cr6
	if (!ctx.cr6.lt) return;
	// lis r4,-256
	ctx.r4.s64 = -16777216;
	// ori r4,r4,517
	ctx.r4.u64 = ctx.r4.u64 | 517;
	// b 0x83282390
	sub_83282390(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8327E2C0"))) PPC_WEAK_FUNC(sub_8327E2C0);
PPC_FUNC_IMPL(__imp__sub_8327E2C0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8327E2C4"))) PPC_WEAK_FUNC(sub_8327E2C4);
PPC_FUNC_IMPL(__imp__sub_8327E2C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8327E2C8"))) PPC_WEAK_FUNC(sub_8327E2C8);
PPC_FUNC_IMPL(__imp__sub_8327E2C8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31822
	ctx.r11.s64 = -2085486592;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r10,r11,1568
	ctx.r10.s64 = ctx.r11.s64 + 1568;
	// addi r11,r10,508
	ctx.r11.s64 = ctx.r10.s64 + 508;
loc_8327E2D8:
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// addi r9,r10,540
	ctx.r9.s64 = ctx.r10.s64 + 540;
	// addi r3,r3,1
	ctx.r3.s64 = ctx.r3.s64 + 1;
	// cmpw cr6,r11,r9
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r9.s32, ctx.xer);
	// blt cr6,0x8327e2d8
	if (ctx.cr6.lt) goto loc_8327E2D8;
	// li r3,-1
	ctx.r3.s64 = -1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8327E300"))) PPC_WEAK_FUNC(sub_8327E300);
PPC_FUNC_IMPL(__imp__sub_8327E300) {
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
	// li r5,16
	ctx.r5.s64 = 16;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x8328be48
	ctx.lr = 0x8327E320;
	sub_8328BE48(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,-1
	ctx.r10.s64 = -1;
	// li r9,1
	ctx.r9.s64 = 1;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// stw r11,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r11.u32);
	// stw r11,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r11.u32);
	// stw r11,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r11.u32);
	// stw r11,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r11.u32);
	// stw r9,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r9.u32);
	// stw r11,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r11.u32);
	// stw r10,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r10.u32);
	// stw r10,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r10.u32);
	// stw r10,44(r31)
	PPC_STORE_U32(ctx.r31.u32 + 44, ctx.r10.u32);
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

__attribute__((alias("__imp__sub_8327E370"))) PPC_WEAK_FUNC(sub_8327E370);
PPC_FUNC_IMPL(__imp__sub_8327E370) {
	PPC_FUNC_PROLOGUE();
	// li r11,0
	ctx.r11.s64 = 0;
	// std r11,0(r3)
	PPC_STORE_U64(ctx.r3.u32 + 0, ctx.r11.u64);
	// std r11,8(r3)
	PPC_STORE_U64(ctx.r3.u32 + 8, ctx.r11.u64);
	// std r11,16(r3)
	PPC_STORE_U64(ctx.r3.u32 + 16, ctx.r11.u64);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8327E384"))) PPC_WEAK_FUNC(sub_8327E384);
PPC_FUNC_IMPL(__imp__sub_8327E384) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8327E388"))) PPC_WEAK_FUNC(sub_8327E388);
PPC_FUNC_IMPL(__imp__sub_8327E388) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x833a01ac
	ctx.lr = 0x8327E390;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r5,56
	ctx.r5.s64 = 56;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x8328be48
	ctx.lr = 0x8327E3A4;
	sub_8328BE48(ctx, base);
	// mr r29,r31
	ctx.r29.u64 = ctx.r31.u64;
	// li r30,5
	ctx.r30.s64 = 5;
loc_8327E3AC:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8328c3a8
	ctx.lr = 0x8327E3B4;
	sub_8328C3A8(ctx, base);
	// addic. r30,r30,-1
	ctx.xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// addi r29,r29,32
	ctx.r29.s64 = ctx.r29.s64 + 32;
	// bne 0x8327e3ac
	if (!ctx.cr0.eq) goto loc_8327E3AC;
	// addi r3,r31,160
	ctx.r3.s64 = ctx.r31.s64 + 160;
	// bl 0x8328c3a8
	ctx.lr = 0x8327E3C8;
	sub_8328C3A8(ctx, base);
	// lis r10,-32230
	ctx.r10.s64 = -2112225280;
	// li r11,0
	ctx.r11.s64 = 0;
	// std r11,192(r31)
	PPC_STORE_U64(ctx.r31.u32 + 192, ctx.r11.u64);
	// std r11,200(r31)
	PPC_STORE_U64(ctx.r31.u32 + 200, ctx.r11.u64);
	// lfs f0,24284(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 24284);
	ctx.f0.f64 = double(temp.f32);
	// std r11,208(r31)
	PPC_STORE_U64(ctx.r31.u32 + 208, ctx.r11.u64);
	// stfs f0,220(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 220, temp.u32);
	// stw r11,216(r31)
	PPC_STORE_U32(ctx.r31.u32 + 216, ctx.r11.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x833a01fc
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8327E3F0"))) PPC_WEAK_FUNC(sub_8327E3F0);
PPC_FUNC_IMPL(__imp__sub_8327E3F0) {
	PPC_FUNC_PROLOGUE();
	// lwz r9,2416(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 2416);
	// mr r10,r4
	ctx.r10.u64 = ctx.r4.u64;
	// lwz r11,3452(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 3452);
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// addi r5,r3,2416
	ctx.r5.s64 = ctx.r3.s64 + 2416;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// stw r10,2416(r3)
	PPC_STORE_U32(ctx.r3.u32 + 2416, ctx.r10.u32);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lwz r3,3456(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 3456);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_8327E420"))) PPC_WEAK_FUNC(sub_8327E420);
PPC_FUNC_IMPL(__imp__sub_8327E420) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8327E424"))) PPC_WEAK_FUNC(sub_8327E424);
PPC_FUNC_IMPL(__imp__sub_8327E424) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8327E428"))) PPC_WEAK_FUNC(sub_8327E428);
PPC_FUNC_IMPL(__imp__sub_8327E428) {
	PPC_FUNC_PROLOGUE();
	// lwz r9,2420(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 2420);
	// mr r10,r4
	ctx.r10.u64 = ctx.r4.u64;
	// lwz r11,3460(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 3460);
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// stw r10,2420(r3)
	PPC_STORE_U32(ctx.r3.u32 + 2420, ctx.r10.u32);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// addi r5,r3,2416
	ctx.r5.s64 = ctx.r3.s64 + 2416;
	// lwz r3,3464(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 3464);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_8327E458"))) PPC_WEAK_FUNC(sub_8327E458);
PPC_FUNC_IMPL(__imp__sub_8327E458) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8327E45C"))) PPC_WEAK_FUNC(sub_8327E45C);
PPC_FUNC_IMPL(__imp__sub_8327E45C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8327E460"))) PPC_WEAK_FUNC(sub_8327E460);
PPC_FUNC_IMPL(__imp__sub_8327E460) {
	PPC_FUNC_PROLOGUE();
	// li r4,3
	ctx.r4.s64 = 3;
	// b 0x83285a80
	sub_83285A80(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8327E468"))) PPC_WEAK_FUNC(sub_8327E468);
PPC_FUNC_IMPL(__imp__sub_8327E468) {
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
	// bl 0x832821e0
	ctx.lr = 0x8327E484;
	sub_832821E0(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r11,104(r31)
	PPC_STORE_U32(ctx.r31.u32 + 104, ctx.r11.u32);
	// stw r11,108(r31)
	PPC_STORE_U32(ctx.r31.u32 + 108, ctx.r11.u32);
	// bl 0x832821f0
	ctx.lr = 0x8327E498;
	sub_832821F0(ctx, base);
	// li r4,4
	ctx.r4.s64 = 4;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83285a80
	ctx.lr = 0x8327E4A4;
	sub_83285A80(ctx, base);
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

__attribute__((alias("__imp__sub_8327E4B8"))) PPC_WEAK_FUNC(sub_8327E4B8);
PPC_FUNC_IMPL(__imp__sub_8327E4B8) {
	PPC_FUNC_PROLOGUE();
	// lwz r10,104(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 104);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// cmpwi cr6,r10,1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 1, ctx.xer);
	// bne cr6,0x8327e4d0
	if (!ctx.cr6.eq) goto loc_8327E4D0;
	// li r10,2
	ctx.r10.s64 = 2;
	// stw r10,104(r3)
	PPC_STORE_U32(ctx.r3.u32 + 104, ctx.r10.u32);
loc_8327E4D0:
	// li r10,4
	ctx.r10.s64 = 4;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r10,108(r11)
	PPC_STORE_U32(ctx.r11.u32 + 108, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8327E4E0"))) PPC_WEAK_FUNC(sub_8327E4E0);
PPC_FUNC_IMPL(__imp__sub_8327E4E0) {
	PPC_FUNC_PROLOGUE();
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,6
	ctx.r5.s64 = 6;
	// li r4,2
	ctx.r4.s64 = 2;
	// b 0x83285af0
	sub_83285AF0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8327E4F4"))) PPC_WEAK_FUNC(sub_8327E4F4);
PPC_FUNC_IMPL(__imp__sub_8327E4F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8327E4F8"))) PPC_WEAK_FUNC(sub_8327E4F8);
PPC_FUNC_IMPL(__imp__sub_8327E4F8) {
	PPC_FUNC_PROLOGUE();
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,6
	ctx.r5.s64 = 6;
	// li r4,7
	ctx.r4.s64 = 7;
	// b 0x83285af0
	sub_83285AF0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8327E50C"))) PPC_WEAK_FUNC(sub_8327E50C);
PPC_FUNC_IMPL(__imp__sub_8327E50C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8327E510"))) PPC_WEAK_FUNC(sub_8327E510);
PPC_FUNC_IMPL(__imp__sub_8327E510) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31822
	ctx.r11.s64 = -2085486592;
	// addi r11,r11,1568
	ctx.r11.s64 = ctx.r11.s64 + 1568;
	// stw r3,496(r11)
	PPC_STORE_U32(ctx.r11.u32 + 496, ctx.r3.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8327E520"))) PPC_WEAK_FUNC(sub_8327E520);
PPC_FUNC_IMPL(__imp__sub_8327E520) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31822
	ctx.r11.s64 = -2085486592;
	// addi r11,r11,1568
	ctx.r11.s64 = ctx.r11.s64 + 1568;
	// lwz r3,496(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 496);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8327E530"))) PPC_WEAK_FUNC(sub_8327E530);
PPC_FUNC_IMPL(__imp__sub_8327E530) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,104(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 104);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r30,0
	ctx.r30.s64 = 0;
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// bne cr6,0x8327e570
	if (!ctx.cr6.eq) goto loc_8327E570;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,7
	ctx.r5.s64 = 7;
	// li r4,7
	ctx.r4.s64 = 7;
	// bl 0x83285af0
	ctx.lr = 0x8327E56C;
	sub_83285AF0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
loc_8327E570:
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,7
	ctx.r5.s64 = 7;
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83285af0
	ctx.lr = 0x8327E588;
	sub_83285AF0(ctx, base);
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// beq cr6,0x8327e598
	if (ctx.cr6.eq) goto loc_8327E598;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// b 0x8327e5ac
	goto loc_8327E5AC;
loc_8327E598:
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8327e5ac
	if (!ctx.cr6.eq) goto loc_8327E5AC;
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,104(r31)
	PPC_STORE_U32(ctx.r31.u32 + 104, ctx.r11.u32);
	// stw r11,108(r31)
	PPC_STORE_U32(ctx.r31.u32 + 108, ctx.r11.u32);
loc_8327E5AC:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8327E5C4"))) PPC_WEAK_FUNC(sub_8327E5C4);
PPC_FUNC_IMPL(__imp__sub_8327E5C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8327E5C8"))) PPC_WEAK_FUNC(sub_8327E5C8);
PPC_FUNC_IMPL(__imp__sub_8327E5C8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x833a01ac
	ctx.lr = 0x8327E5D0;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x83282090
	ctx.lr = 0x8327E5DC;
	sub_83282090(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x8327e5f8
	if (ctx.cr0.eq) goto loc_8327E5F8;
	// lis r4,-256
	ctx.r4.s64 = -16777216;
	// li r3,0
	ctx.r3.s64 = 0;
	// ori r4,r4,316
	ctx.r4.u64 = ctx.r4.u64 | 316;
	// bl 0x83282390
	ctx.lr = 0x8327E5F4;
	sub_83282390(ctx, base);
	// b 0x8327e6a4
	goto loc_8327E6A4;
loc_8327E5F8:
	// lwz r11,104(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 104);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x8327e6a4
	if (ctx.cr6.eq) goto loc_8327E6A4;
	// lis r29,-31822
	ctx.r29.s64 = -2085486592;
	// lis r11,-31845
	ctx.r11.s64 = -2086993920;
	// addi r30,r11,1256
	ctx.r30.s64 = ctx.r11.s64 + 1256;
	// lwz r3,2364(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 2364);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8327e634
	if (ctx.cr6.eq) goto loc_8327E634;
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
	ctx.lr = 0x8327E634;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8327E634:
	// li r11,1
	ctx.r11.s64 = 1;
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r11,132(r31)
	PPC_STORE_U32(ctx.r31.u32 + 132, ctx.r11.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,5
	ctx.r5.s64 = 5;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83285af0
	ctx.lr = 0x8327E654;
	sub_83285AF0(ctx, base);
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,5
	ctx.r5.s64 = 5;
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83285af0
	ctx.lr = 0x8327E66C;
	sub_83285AF0(ctx, base);
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,5
	ctx.r5.s64 = 5;
	// li r4,3
	ctx.r4.s64 = 3;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83285af0
	ctx.lr = 0x8327E684;
	sub_83285AF0(ctx, base);
	// lwz r3,2364(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 2364);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8327e6a4
	if (ctx.cr6.eq) goto loc_8327E6A4;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r4,r30,108
	ctx.r4.s64 = ctx.r30.s64 + 108;
	// lwz r11,36(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8327E6A4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8327E6A4:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x833a01fc
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8327E6AC"))) PPC_WEAK_FUNC(sub_8327E6AC);
PPC_FUNC_IMPL(__imp__sub_8327E6AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8327E6B0"))) PPC_WEAK_FUNC(sub_8327E6B0);
PPC_FUNC_IMPL(__imp__sub_8327E6B0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	ctx.lr = 0x8327E6D0;
	sub_83282090(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x8327e6ec
	if (ctx.cr0.eq) goto loc_8327E6EC;
	// lis r4,-256
	ctx.r4.s64 = -16777216;
	// li r3,0
	ctx.r3.s64 = 0;
	// ori r4,r4,308
	ctx.r4.u64 = ctx.r4.u64 | 308;
	// bl 0x83282390
	ctx.lr = 0x8327E6E8;
	sub_83282390(ctx, base);
	// b 0x8327e704
	goto loc_8327E704;
loc_8327E6EC:
	// li r7,0
	ctx.r7.s64 = 0;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// li r5,9
	ctx.r5.s64 = 9;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83285af0
	ctx.lr = 0x8327E704;
	sub_83285AF0(ctx, base);
loc_8327E704:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8327E71C"))) PPC_WEAK_FUNC(sub_8327E71C);
PPC_FUNC_IMPL(__imp__sub_8327E71C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8327E720"))) PPC_WEAK_FUNC(sub_8327E720);
PPC_FUNC_IMPL(__imp__sub_8327E720) {
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
	// stw r4,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r4.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r5,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r5.u32);
	// bl 0x83282090
	ctx.lr = 0x8327E740;
	sub_83282090(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x8327e75c
	if (ctx.cr0.eq) goto loc_8327E75C;
	// lis r4,-256
	ctx.r4.s64 = -16777216;
	// li r3,0
	ctx.r3.s64 = 0;
	// ori r4,r4,309
	ctx.r4.u64 = ctx.r4.u64 | 309;
	// bl 0x83282390
	ctx.lr = 0x8327E758;
	sub_83282390(ctx, base);
	// b 0x8327e774
	goto loc_8327E774;
loc_8327E75C:
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// addi r6,r1,84
	ctx.r6.s64 = ctx.r1.s64 + 84;
	// li r5,10
	ctx.r5.s64 = 10;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83285af0
	ctx.lr = 0x8327E774;
	sub_83285AF0(ctx, base);
loc_8327E774:
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

__attribute__((alias("__imp__sub_8327E788"))) PPC_WEAK_FUNC(sub_8327E788);
PPC_FUNC_IMPL(__imp__sub_8327E788) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// bl 0x83282090
	ctx.lr = 0x8327E7A4;
	sub_83282090(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x8327e7c0
	if (ctx.cr0.eq) goto loc_8327E7C0;
	// lis r4,-256
	ctx.r4.s64 = -16777216;
	// li r3,0
	ctx.r3.s64 = 0;
	// ori r4,r4,317
	ctx.r4.u64 = ctx.r4.u64 | 317;
	// bl 0x83282390
	ctx.lr = 0x8327E7BC;
	sub_83282390(ctx, base);
	// b 0x8327e7f4
	goto loc_8327E7F4;
loc_8327E7C0:
	// lwz r30,8324(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8324);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x83287b20
	ctx.lr = 0x8327E7D0;
	sub_83287B20(ctx, base);
	// cmpwi cr6,r3,1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 1, ctx.xer);
	// beq cr6,0x8327e7f0
	if (ctx.cr6.eq) goto loc_8327E7F0;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83287b08
	ctx.lr = 0x8327E7E8;
	sub_83287B08(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,100(r31)
	PPC_STORE_U32(ctx.r31.u32 + 100, ctx.r11.u32);
loc_8327E7F0:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8327E7F4:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8327E80C"))) PPC_WEAK_FUNC(sub_8327E80C);
PPC_FUNC_IMPL(__imp__sub_8327E80C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8327E810"))) PPC_WEAK_FUNC(sub_8327E810);
PPC_FUNC_IMPL(__imp__sub_8327E810) {
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
	// lwz r4,8324(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8324);
	// bl 0x83287b20
	ctx.lr = 0x8327E824;
	sub_83287B20(ctx, base);
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

__attribute__((alias("__imp__sub_8327E83C"))) PPC_WEAK_FUNC(sub_8327E83C);
PPC_FUNC_IMPL(__imp__sub_8327E83C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8327E840"))) PPC_WEAK_FUNC(sub_8327E840);
PPC_FUNC_IMPL(__imp__sub_8327E840) {
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
	// bl 0x8328c2b0
	ctx.lr = 0x8327E858;
	sub_8328C2B0(ctx, base);
	// std r3,10296(r31)
	PPC_STORE_U64(ctx.r31.u32 + 10296, ctx.r3.u64);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8328c368
	ctx.lr = 0x8327E864;
	sub_8328C368(ctx, base);
	// ld r10,10296(r31)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r31.u32 + 10296);
	// ld r9,10288(r31)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r31.u32 + 10288);
	// lwz r11,2440(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2440);
	// subf r10,r9,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r9.s64;
	// std r3,10304(r31)
	PPC_STORE_U64(ctx.r31.u32 + 10304, ctx.r3.u64);
	// std r10,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r10.u64);
	// cmpdi cr6,r10,0
	ctx.cr6.compare<int64_t>(ctx.r10.s64, 0, ctx.xer);
	// stw r11,10312(r31)
	PPC_STORE_U32(ctx.r31.u32 + 10312, ctx.r11.u32);
	// beq cr6,0x8327e8b4
	if (ctx.cr6.eq) goto loc_8327E8B4;
	// extsw r11,r11
	ctx.r11.s64 = ctx.r11.s32;
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// mulld r11,r11,r3
	ctx.r11.s64 = ctx.r11.s64 * ctx.r3.s64;
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lfd f13,80(r1)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f13,f13
	ctx.f13.f64 = double(ctx.f13.s64);
	// frsp f13,f13
	ctx.f13.f64 = double(float(ctx.f13.f64));
	// frsp f0,f0
	ctx.f0.f64 = double(float(ctx.f0.f64));
	// fdivs f0,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 / ctx.f0.f64));
	// stfs f0,10316(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 10316, temp.u32);
loc_8327E8B4:
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

__attribute__((alias("__imp__sub_8327E8C8"))) PPC_WEAK_FUNC(sub_8327E8C8);
PPC_FUNC_IMPL(__imp__sub_8327E8C8) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,124(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 124);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8327e8e0
	if (!ctx.cr6.eq) goto loc_8327E8E0;
	// stw r4,124(r3)
	PPC_STORE_U32(ctx.r3.u32 + 124, ctx.r4.u32);
loc_8327E8D8:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_8327E8E0:
	// cmpw cr6,r11,r4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r4.s32, ctx.xer);
	// beq cr6,0x8327e8d8
	if (ctx.cr6.eq) goto loc_8327E8D8;
	// lis r4,-256
	ctx.r4.s64 = -16777216;
	// ori r4,r4,519
	ctx.r4.u64 = ctx.r4.u64 | 519;
	// b 0x83282390
	sub_83282390(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8327E8F4"))) PPC_WEAK_FUNC(sub_8327E8F4);
PPC_FUNC_IMPL(__imp__sub_8327E8F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8327E8F8"))) PPC_WEAK_FUNC(sub_8327E8F8);
PPC_FUNC_IMPL(__imp__sub_8327E8F8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	ctx.lr = 0x8327E918;
	sub_83282090(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x8327e934
	if (ctx.cr0.eq) goto loc_8327E934;
	// lis r4,-256
	ctx.r4.s64 = -16777216;
	// li r3,0
	ctx.r3.s64 = 0;
	// ori r4,r4,313
	ctx.r4.u64 = ctx.r4.u64 | 313;
	// bl 0x83282390
	ctx.lr = 0x8327E930;
	sub_83282390(ctx, base);
	// b 0x8327e940
	goto loc_8327E940;
loc_8327E934:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x832883e8
	ctx.lr = 0x8327E940;
	sub_832883E8(ctx, base);
loc_8327E940:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8327E958"))) PPC_WEAK_FUNC(sub_8327E958);
PPC_FUNC_IMPL(__imp__sub_8327E958) {
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
	ctx.lr = 0x8327E968;
	sub_82C10E98(ctx, base);
	// lis r10,-31822
	ctx.r10.s64 = -2085486592;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,2444(r10)
	PPC_STORE_U32(ctx.r10.u32 + 2444, ctx.r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8327E984"))) PPC_WEAK_FUNC(sub_8327E984);
PPC_FUNC_IMPL(__imp__sub_8327E984) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8327E988"))) PPC_WEAK_FUNC(sub_8327E988);
PPC_FUNC_IMPL(__imp__sub_8327E988) {
	PPC_FUNC_PROLOGUE();
	// b 0x8327db78
	sub_8327DB78(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8327E98C"))) PPC_WEAK_FUNC(sub_8327E98C);
PPC_FUNC_IMPL(__imp__sub_8327E98C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8327E990"))) PPC_WEAK_FUNC(sub_8327E990);
PPC_FUNC_IMPL(__imp__sub_8327E990) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x833a01ac
	ctx.lr = 0x8327E998;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r4,5
	ctx.r4.s64 = 5;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x83274d00
	ctx.lr = 0x8327E9A8;
	sub_83274D00(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x8327e9b8
	if (!ctx.cr0.eq) goto loc_8327E9B8;
	// li r30,1
	ctx.r30.s64 = 1;
	// b 0x8327e9d8
	goto loc_8327E9D8;
loc_8327E9B8:
	// li r4,6
	ctx.r4.s64 = 6;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83285b40
	ctx.lr = 0x8327E9C4;
	sub_83285B40(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r4,6
	ctx.r4.s64 = 6;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83285b60
	ctx.lr = 0x8327E9D4;
	sub_83285B60(ctx, base);
	// or r30,r3,r30
	ctx.r30.u64 = ctx.r3.u64 | ctx.r30.u64;
loc_8327E9D8:
	// li r4,6
	ctx.r4.s64 = 6;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83274d00
	ctx.lr = 0x8327E9E4;
	sub_83274D00(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x8327e9f4
	if (!ctx.cr0.eq) goto loc_8327E9F4;
	// li r11,1
	ctx.r11.s64 = 1;
	// b 0x8327ea14
	goto loc_8327EA14;
loc_8327E9F4:
	// li r4,7
	ctx.r4.s64 = 7;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83285b40
	ctx.lr = 0x8327EA00;
	sub_83285B40(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// li r4,7
	ctx.r4.s64 = 7;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83285b60
	ctx.lr = 0x8327EA10;
	sub_83285B60(ctx, base);
	// or r11,r3,r29
	ctx.r11.u64 = ctx.r3.u64 | ctx.r29.u64;
loc_8327EA14:
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// beq cr6,0x8327ea28
	if (ctx.cr6.eq) goto loc_8327EA28;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// li r3,1
	ctx.r3.s64 = 1;
	// bne cr6,0x8327ea2c
	if (!ctx.cr6.eq) goto loc_8327EA2C;
loc_8327EA28:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8327EA2C:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x833a01fc
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8327EA34"))) PPC_WEAK_FUNC(sub_8327EA34);
PPC_FUNC_IMPL(__imp__sub_8327EA34) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8327EA38"))) PPC_WEAK_FUNC(sub_8327EA38);
PPC_FUNC_IMPL(__imp__sub_8327EA38) {
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
	// bl 0x8327dba8
	ctx.lr = 0x8327EA50;
	sub_8327DBA8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8327dc48
	ctx.lr = 0x8327EA58;
	sub_8327DC48(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8327dce8
	ctx.lr = 0x8327EA60;
	sub_8327DCE8(ctx, base);
	// lis r11,-31822
	ctx.r11.s64 = -2085486592;
	// lwz r3,2364(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 2364);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8327eab0
	if (ctx.cr6.eq) goto loc_8327EAB0;
	// lis r11,-31845
	ctx.r11.s64 = -2086993920;
	// addi r10,r31,2624
	ctx.r10.s64 = ctx.r31.s64 + 2624;
	// addi r11,r11,4176
	ctx.r11.s64 = ctx.r11.s64 + 4176;
	// addi r9,r31,2628
	ctx.r9.s64 = ctx.r31.s64 + 2628;
	// addi r8,r31,2664
	ctx.r8.s64 = ctx.r31.s64 + 2664;
	// addi r7,r31,2704
	ctx.r7.s64 = ctx.r31.s64 + 2704;
	// addi r4,r11,4
	ctx.r4.s64 = ctx.r11.s64 + 4;
	// stw r31,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r31.u32);
	// stw r10,24(r11)
	PPC_STORE_U32(ctx.r11.u32 + 24, ctx.r10.u32);
	// stw r9,36(r11)
	PPC_STORE_U32(ctx.r11.u32 + 36, ctx.r9.u32);
	// stw r8,48(r11)
	PPC_STORE_U32(ctx.r11.u32 + 48, ctx.r8.u32);
	// stw r7,60(r11)
	PPC_STORE_U32(ctx.r11.u32 + 60, ctx.r7.u32);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,36(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8327EAB0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8327EAB0:
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

__attribute__((alias("__imp__sub_8327EAC4"))) PPC_WEAK_FUNC(sub_8327EAC4);
PPC_FUNC_IMPL(__imp__sub_8327EAC4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8327EAC8"))) PPC_WEAK_FUNC(sub_8327EAC8);
PPC_FUNC_IMPL(__imp__sub_8327EAC8) {
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
	// lwz r11,2660(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 2660);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8327eae8
	if (!ctx.cr6.eq) goto loc_8327EAE8;
loc_8327EAE0:
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x8327eb1c
	goto loc_8327EB1C;
loc_8327EAE8:
	// lwz r11,2624(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 2624);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8327eae0
	if (ctx.cr6.eq) goto loc_8327EAE0;
	// lwz r11,4184(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4184);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8327eae0
	if (!ctx.cr6.eq) goto loc_8327EAE0;
	// lwz r11,4212(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4212);
	// lwz r10,2784(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 2784);
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// bge cr6,0x8327eae0
	if (!ctx.cr6.lt) goto loc_8327EAE0;
	// bl 0x8327dfe0
	ctx.lr = 0x8327EB14;
	sub_8327DFE0(ctx, base);
	// addic r11,r3,-1
	ctx.xer.ca = ctx.r3.u32 > 0;
	ctx.r11.s64 = ctx.r3.s64 + -1;
	// subfe r3,r11,r3
	temp.u8 = (~ctx.r11.u32 + ctx.r3.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r3.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r3.u64 = ~ctx.r11.u64 + ctx.r3.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
loc_8327EB1C:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8327EB2C"))) PPC_WEAK_FUNC(sub_8327EB2C);
PPC_FUNC_IMPL(__imp__sub_8327EB2C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8327EB30"))) PPC_WEAK_FUNC(sub_8327EB30);
PPC_FUNC_IMPL(__imp__sub_8327EB30) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r4,67
	ctx.r4.s64 = 67;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x83274d00
	ctx.lr = 0x8327EB50;
	sub_83274D00(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x8327ec90
	if (ctx.cr0.eq) goto loc_8327EC90;
	// li r4,15
	ctx.r4.s64 = 15;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83274d00
	ctx.lr = 0x8327EB64;
	sub_83274D00(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x8327ec90
	if (ctx.cr0.eq) goto loc_8327EC90;
	// lwz r11,112(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 112);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8327ec90
	if (!ctx.cr6.eq) goto loc_8327EC90;
	// lwz r11,104(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 104);
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// bne cr6,0x8327ec90
	if (!ctx.cr6.eq) goto loc_8327EC90;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8327ddc0
	ctx.lr = 0x8327EB8C;
	sub_8327DDC0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x8327ec90
	if (!ctx.cr0.eq) goto loc_8327EC90;
	// li r4,5
	ctx.r4.s64 = 5;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83274d00
	ctx.lr = 0x8327EBA0;
	sub_83274D00(ctx, base);
	// cmpwi cr6,r3,1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 1, ctx.xer);
	// bne cr6,0x8327ebb4
	if (!ctx.cr6.eq) goto loc_8327EBB4;
	// lwz r11,2456(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2456);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8327ec90
	if (ctx.cr6.eq) goto loc_8327EC90;
loc_8327EBB4:
	// li r4,6
	ctx.r4.s64 = 6;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83274d00
	ctx.lr = 0x8327EBC0;
	sub_83274D00(ctx, base);
	// cmpwi cr6,r3,1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 1, ctx.xer);
	// bne cr6,0x8327ebdc
	if (!ctx.cr6.eq) goto loc_8327EBDC;
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x832882a0
	ctx.lr = 0x8327EBD4;
	sub_832882A0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bgt 0x8327ec90
	if (ctx.cr0.gt) goto loc_8327EC90;
loc_8327EBDC:
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83285b70
	ctx.lr = 0x8327EBE8;
	sub_83285B70(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x8327ec04
	if (ctx.cr0.eq) goto loc_8327EC04;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x832882a0
	ctx.lr = 0x8327EBFC;
	sub_832882A0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bgt 0x8327ec90
	if (ctx.cr0.gt) goto loc_8327EC90;
loc_8327EC04:
	// li r4,5
	ctx.r4.s64 = 5;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83274d00
	ctx.lr = 0x8327EC10;
	sub_83274D00(ctx, base);
	// cmpwi cr6,r3,1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 1, ctx.xer);
	// bne cr6,0x8327ec28
	if (!ctx.cr6.eq) goto loc_8327EC28;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8327de68
	ctx.lr = 0x8327EC20;
	sub_8327DE68(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x8327ec90
	if (!ctx.cr0.eq) goto loc_8327EC90;
loc_8327EC28:
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83276d60
	ctx.lr = 0x8327EC38;
	sub_83276D60(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r4,68
	ctx.r4.s64 = 68;
	// lwz r30,4136(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4136);
	// lwz r31,4140(r31)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4140);
	// bl 0x83274d00
	ctx.lr = 0x8327EC4C;
	sub_83274D00(ctx, base);
	// lis r5,15
	ctx.r5.s64 = 983040;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// ori r5,r5,16960
	ctx.r5.u64 = ctx.r5.u64 | 16960;
	// bl 0x83289328
	ctx.lr = 0x8327EC5C;
	sub_83289328(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// subf r5,r3,r30
	ctx.r5.s64 = ctx.r30.s64 - ctx.r3.s64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x8327ec90
	if (!ctx.cr6.gt) goto loc_8327EC90;
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// ble cr6,0x8327ec90
	if (!ctx.cr6.gt) goto loc_8327EC90;
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// lwz r4,84(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// bl 0x83289368
	ctx.lr = 0x8327EC84;
	sub_83289368(ctx, base);
	// cntlzw r11,r3
	ctx.r11.u64 = ctx.r3.u32 == 0 ? 32 : __builtin_clz(ctx.r3.u32);
	// rlwinm r3,r11,27,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// b 0x8327ec94
	goto loc_8327EC94;
loc_8327EC90:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8327EC94:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8327ECAC"))) PPC_WEAK_FUNC(sub_8327ECAC);
PPC_FUNC_IMPL(__imp__sub_8327ECAC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8327ECB0"))) PPC_WEAK_FUNC(sub_8327ECB0);
PPC_FUNC_IMPL(__imp__sub_8327ECB0) {
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
	// bl 0x8327ddc0
	ctx.lr = 0x8327ECCC;
	sub_8327DDC0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x8327ecdc
	if (ctx.cr0.eq) goto loc_8327ECDC;
loc_8327ECD4:
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x8327ed74
	goto loc_8327ED74;
loc_8327ECDC:
	// li r4,5
	ctx.r4.s64 = 5;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83274d00
	ctx.lr = 0x8327ECE8;
	sub_83274D00(ctx, base);
	// cmpwi cr6,r3,1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 1, ctx.xer);
	// bne cr6,0x8327ed00
	if (!ctx.cr6.eq) goto loc_8327ED00;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8327de68
	ctx.lr = 0x8327ECF8;
	sub_8327DE68(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x8327ecd4
	if (!ctx.cr0.eq) goto loc_8327ECD4;
loc_8327ED00:
	// li r4,6
	ctx.r4.s64 = 6;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83274d00
	ctx.lr = 0x8327ED0C;
	sub_83274D00(ctx, base);
	// cmpwi cr6,r3,1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 1, ctx.xer);
	// bne cr6,0x8327ed24
	if (!ctx.cr6.eq) goto loc_8327ED24;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8327def8
	ctx.lr = 0x8327ED1C;
	sub_8327DEF8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x8327ecd4
	if (!ctx.cr0.eq) goto loc_8327ECD4;
loc_8327ED24:
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83276d60
	ctx.lr = 0x8327ED34;
	sub_83276D60(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r4,69
	ctx.r4.s64 = 69;
	// lwz r30,4136(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4136);
	// lwz r31,4140(r31)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4140);
	// bl 0x83274d00
	ctx.lr = 0x8327ED48;
	sub_83274D00(ctx, base);
	// lis r5,15
	ctx.r5.s64 = 983040;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// ori r5,r5,16960
	ctx.r5.u64 = ctx.r5.u64 | 16960;
	// bl 0x83289328
	ctx.lr = 0x8327ED58;
	sub_83289328(ctx, base);
	// subf r5,r3,r30
	ctx.r5.s64 = ctx.r30.s64 - ctx.r3.s64;
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// lwz r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r3,84(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// bl 0x83289368
	ctx.lr = 0x8327ED6C;
	sub_83289368(ctx, base);
	// addic r11,r3,-1
	ctx.xer.ca = ctx.r3.u32 > 0;
	ctx.r11.s64 = ctx.r3.s64 + -1;
	// subfe r3,r11,r3
	temp.u8 = (~ctx.r11.u32 + ctx.r3.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r3.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r3.u64 = ~ctx.r11.u64 + ctx.r3.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
loc_8327ED74:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8327ED8C"))) PPC_WEAK_FUNC(sub_8327ED8C);
PPC_FUNC_IMPL(__imp__sub_8327ED8C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8327ED90"))) PPC_WEAK_FUNC(sub_8327ED90);
PPC_FUNC_IMPL(__imp__sub_8327ED90) {
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
	// lwz r11,104(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 104);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// bne cr6,0x8327ee28
	if (!ctx.cr6.eq) goto loc_8327EE28;
	// lwz r11,112(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 112);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x8327ee28
	if (ctx.cr6.eq) goto loc_8327EE28;
	// lwz r11,2448(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 2448);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x8327ee28
	if (ctx.cr6.eq) goto loc_8327EE28;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// bl 0x83277fa0
	ctx.lr = 0x8327EDD4;
	sub_83277FA0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x8327ee28
	if (!ctx.cr0.eq) goto loc_8327EE28;
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt cr6,0x8327ee28
	if (ctx.cr6.lt) goto loc_8327EE28;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x8327e190
	ctx.lr = 0x8327EDF4;
	sub_8327E190(ctx, base);
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83277940
	ctx.lr = 0x8327EE00;
	sub_83277940(ctx, base);
	// lwz r3,88(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// beq cr6,0x8327ee28
	if (ctx.cr6.eq) goto loc_8327EE28;
	// li r4,1000
	ctx.r4.s64 = 1000;
	// lwz r6,80(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r5,84(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// bl 0x83289368
	ctx.lr = 0x8327EE1C;
	sub_83289368(ctx, base);
	// addic r11,r3,-1
	ctx.xer.ca = ctx.r3.u32 > 0;
	ctx.r11.s64 = ctx.r3.s64 + -1;
	// subfe r3,r11,r3
	temp.u8 = (~ctx.r11.u32 + ctx.r3.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r3.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r3.u64 = ~ctx.r11.u64 + ctx.r3.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// b 0x8327ee2c
	goto loc_8327EE2C;
loc_8327EE28:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8327EE2C:
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

__attribute__((alias("__imp__sub_8327EE40"))) PPC_WEAK_FUNC(sub_8327EE40);
PPC_FUNC_IMPL(__imp__sub_8327EE40) {
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
	// bl 0x8327e530
	ctx.lr = 0x8327EE58;
	sub_8327E530(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x8327ee74
	if (!ctx.cr0.eq) goto loc_8327EE74;
	// li r11,6
	ctx.r11.s64 = 6;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,108(r31)
	PPC_STORE_U32(ctx.r31.u32 + 108, ctx.r11.u32);
	// bl 0x8327e840
	ctx.lr = 0x8327EE70;
	sub_8327E840(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
loc_8327EE74:
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

__attribute__((alias("__imp__sub_8327EE88"))) PPC_WEAK_FUNC(sub_8327EE88);
PPC_FUNC_IMPL(__imp__sub_8327EE88) {
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
	// li r5,42
	ctx.r5.s64 = 42;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x8328be48
	ctx.lr = 0x8327EEA8;
	sub_8328BE48(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r3,r31,56
	ctx.r3.s64 = ctx.r31.s64 + 56;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// stw r11,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r11.u32);
	// stw r11,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r11.u32);
	// stw r11,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r11.u32);
	// stw r11,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r11.u32);
	// stw r11,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r11.u32);
	// stw r11,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r11.u32);
	// stw r11,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r11.u32);
	// stw r11,44(r31)
	PPC_STORE_U32(ctx.r31.u32 + 44, ctx.r11.u32);
	// stw r11,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r11.u32);
	// bl 0x8327e370
	ctx.lr = 0x8327EEE4;
	sub_8327E370(ctx, base);
	// addi r3,r31,80
	ctx.r3.s64 = ctx.r31.s64 + 80;
	// bl 0x8327e370
	ctx.lr = 0x8327EEEC;
	sub_8327E370(ctx, base);
	// addi r3,r31,104
	ctx.r3.s64 = ctx.r31.s64 + 104;
	// bl 0x8327e370
	ctx.lr = 0x8327EEF4;
	sub_8327E370(ctx, base);
	// addi r3,r31,128
	ctx.r3.s64 = ctx.r31.s64 + 128;
	// bl 0x8327e370
	ctx.lr = 0x8327EEFC;
	sub_8327E370(ctx, base);
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

__attribute__((alias("__imp__sub_8327EF10"))) PPC_WEAK_FUNC(sub_8327EF10);
PPC_FUNC_IMPL(__imp__sub_8327EF10) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x833a01a8
	ctx.lr = 0x8327EF18;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x83282090
	ctx.lr = 0x8327EF24;
	sub_83282090(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x8327ef40
	if (ctx.cr0.eq) goto loc_8327EF40;
	// lis r4,-256
	ctx.r4.s64 = -16777216;
	// li r3,0
	ctx.r3.s64 = 0;
	// ori r4,r4,306
	ctx.r4.u64 = ctx.r4.u64 | 306;
	// bl 0x83282390
	ctx.lr = 0x8327EF3C;
	sub_83282390(ctx, base);
	// b 0x8327efc4
	goto loc_8327EFC4;
loc_8327EF40:
	// lis r29,-31822
	ctx.r29.s64 = -2085486592;
	// lis r11,-31845
	ctx.r11.s64 = -2086993920;
	// addi r30,r11,824
	ctx.r30.s64 = ctx.r11.s64 + 824;
	// lwz r3,2364(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 2364);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8327ef70
	if (ctx.cr6.eq) goto loc_8327EF70;
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
	ctx.lr = 0x8327EF70;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8327EF70:
	// li r4,47
	ctx.r4.s64 = 47;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83274d00
	ctx.lr = 0x8327EF7C;
	sub_83274D00(ctx, base);
	// cmpwi cr6,r3,1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 1, ctx.xer);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bne cr6,0x8327ef90
	if (!ctx.cr6.eq) goto loc_8327EF90;
	// bl 0x832803b0
	ctx.lr = 0x8327EF8C;
	sub_832803B0(ctx, base);
	// b 0x8327ef94
	goto loc_8327EF94;
loc_8327EF90:
	// bl 0x8327e4b8
	ctx.lr = 0x8327EF94;
	sub_8327E4B8(ctx, base);
loc_8327EF94:
	// li r11,1
	ctx.r11.s64 = 1;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// stw r11,100(r31)
	PPC_STORE_U32(ctx.r31.u32 + 100, ctx.r11.u32);
	// lwz r3,2364(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 2364);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8327efc0
	if (ctx.cr6.eq) goto loc_8327EFC0;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r4,r30,108
	ctx.r4.s64 = ctx.r30.s64 + 108;
	// lwz r11,36(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8327EFC0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8327EFC0:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
loc_8327EFC4:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x833a01f8
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8327EFCC"))) PPC_WEAK_FUNC(sub_8327EFCC);
PPC_FUNC_IMPL(__imp__sub_8327EFCC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8327EFD0"))) PPC_WEAK_FUNC(sub_8327EFD0);
PPC_FUNC_IMPL(__imp__sub_8327EFD0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x833a01ac
	ctx.lr = 0x8327EFD8;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r30,-31822
	ctx.r30.s64 = -2085486592;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lis r11,-31845
	ctx.r11.s64 = -2086993920;
	// addi r29,r11,1472
	ctx.r29.s64 = ctx.r11.s64 + 1472;
	// lwz r3,2364(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 2364);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8327f010
	if (ctx.cr6.eq) goto loc_8327F010;
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
	ctx.lr = 0x8327F010;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8327F010:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8327e788
	ctx.lr = 0x8327F018;
	sub_8327E788(ctx, base);
	// lwz r11,2364(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 2364);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8327f040
	if (ctx.cr6.eq) goto loc_8327F040;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// addi r4,r29,108
	ctx.r4.s64 = ctx.r29.s64 + 108;
	// lwz r11,36(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 36);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8327F040;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8327F040:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x833a01fc
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8327F04C"))) PPC_WEAK_FUNC(sub_8327F04C);
PPC_FUNC_IMPL(__imp__sub_8327F04C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8327F050"))) PPC_WEAK_FUNC(sub_8327F050);
PPC_FUNC_IMPL(__imp__sub_8327F050) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x833a01a0
	ctx.lr = 0x8327F058;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r11,-1
	ctx.r11.s64 = -1;
	// li r26,0
	ctx.r26.s64 = 0;
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// stw r26,0(r5)
	PPC_STORE_U32(ctx.r5.u32 + 0, ctx.r26.u32);
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// bl 0x83282090
	ctx.lr = 0x8327F07C;
	sub_83282090(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x8327f09c
	if (ctx.cr0.eq) goto loc_8327F09C;
	// lis r4,-256
	ctx.r4.s64 = -16777216;
	// li r3,0
	ctx.r3.s64 = 0;
	// ori r4,r4,314
	ctx.r4.u64 = ctx.r4.u64 | 314;
	// bl 0x83282390
	ctx.lr = 0x8327F094;
	sub_83282390(ctx, base);
loc_8327F094:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x8327f1e8
	goto loc_8327F1E8;
loc_8327F09C:
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8327e8c8
	ctx.lr = 0x8327F0A8;
	sub_8327E8C8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x8327f094
	if (!ctx.cr0.eq) goto loc_8327F094;
	// lis r27,-31822
	ctx.r27.s64 = -2085486592;
	// lis r11,-31845
	ctx.r11.s64 = -2086993920;
	// addi r31,r11,2120
	ctx.r31.s64 = ctx.r11.s64 + 2120;
	// lwz r3,2364(r27)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r27.u32 + 2364);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8327f0e0
	if (ctx.cr6.eq) goto loc_8327F0E0;
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
	ctx.lr = 0x8327F0E0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8327F0E0:
	// li r4,15
	ctx.r4.s64 = 15;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x83274d00
	ctx.lr = 0x8327F0EC;
	sub_83274D00(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x8327f108
	if (!ctx.cr0.eq) goto loc_8327F108;
	// lwz r11,112(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 112);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x8327f108
	if (!ctx.cr6.eq) goto loc_8327F108;
	// stw r26,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r26.u32);
	// b 0x8327f120
	goto loc_8327F120;
loc_8327F108:
	// mr r7,r28
	ctx.r7.u64 = ctx.r28.u64;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// li r5,11
	ctx.r5.s64 = 11;
	// li r4,6
	ctx.r4.s64 = 6;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x83285af0
	ctx.lr = 0x8327F120;
	sub_83285AF0(ctx, base);
loc_8327F120:
	// lis r11,-31822
	ctx.r11.s64 = -2085486592;
	// lwz r10,2444(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 2444);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8327f144
	if (ctx.cr6.eq) goto loc_8327F144;
	// rotlwi r11,r10,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// lwz r4,0(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8327F144;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8327F144:
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8327f184
	if (!ctx.cr6.eq) goto loc_8327F184;
	// lwz r3,2364(r27)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r27.u32 + 2364);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8327f094
	if (ctx.cr6.eq) goto loc_8327F094;
	// stw r28,116(r31)
	PPC_STORE_U32(ctx.r31.u32 + 116, ctx.r28.u32);
	// mr r11,r26
	ctx.r11.u64 = ctx.r26.u64;
	// stw r26,140(r31)
	PPC_STORE_U32(ctx.r31.u32 + 140, ctx.r26.u32);
	// addi r4,r31,108
	ctx.r4.s64 = ctx.r31.s64 + 108;
	// stw r26,128(r31)
	PPC_STORE_U32(ctx.r31.u32 + 128, ctx.r26.u32);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,36(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8327F180;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// b 0x8327f094
	goto loc_8327F094;
loc_8327F184:
	// lwz r11,2440(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 2440);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8327f19c
	if (!ctx.cr6.eq) goto loc_8327F19C;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8328c2b0
	ctx.lr = 0x8327F198;
	sub_8328C2B0(ctx, base);
	// std r3,10288(r30)
	PPC_STORE_U64(ctx.r30.u32 + 10288, ctx.r3.u64);
loc_8327F19C:
	// lwz r11,2440(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 2440);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,2440(r30)
	PPC_STORE_U32(ctx.r30.u32 + 2440, ctx.r11.u32);
	// lwz r3,2364(r27)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r27.u32 + 2364);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8327f1e4
	if (ctx.cr6.eq) goto loc_8327F1E4;
	// stw r28,116(r31)
	PPC_STORE_U32(ctx.r31.u32 + 116, ctx.r28.u32);
	// addi r4,r31,108
	ctx.r4.s64 = ctx.r31.s64 + 108;
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// addi r11,r11,20
	ctx.r11.s64 = ctx.r11.s64 + 20;
	// stw r11,128(r31)
	PPC_STORE_U32(ctx.r31.u32 + 128, ctx.r11.u32);
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// addi r11,r11,16
	ctx.r11.s64 = ctx.r11.s64 + 16;
	// stw r11,140(r31)
	PPC_STORE_U32(ctx.r31.u32 + 140, ctx.r11.u32);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,36(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8327F1E4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8327F1E4:
	// li r3,1
	ctx.r3.s64 = 1;
loc_8327F1E8:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x833a01f0
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8327F1F0"))) PPC_WEAK_FUNC(sub_8327F1F0);
PPC_FUNC_IMPL(__imp__sub_8327F1F0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x833a01ac
	ctx.lr = 0x8327F1F8;
	__savegprlr_29(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// stw r4,156(r1)
	PPC_STORE_U32(ctx.r1.u32 + 156, ctx.r4.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r4,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r4.u32);
	// bl 0x83282090
	ctx.lr = 0x8327F20C;
	sub_83282090(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x8327f228
	if (ctx.cr0.eq) goto loc_8327F228;
	// lis r4,-256
	ctx.r4.s64 = -16777216;
	// li r3,0
	ctx.r3.s64 = 0;
	// ori r4,r4,315
	ctx.r4.u64 = ctx.r4.u64 | 315;
	// bl 0x83282390
	ctx.lr = 0x8327F224;
	sub_83282390(ctx, base);
	// b 0x8327f2b8
	goto loc_8327F2B8;
loc_8327F228:
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8327e8c8
	ctx.lr = 0x8327F234;
	sub_8327E8C8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x8327f2b8
	if (!ctx.cr0.eq) goto loc_8327F2B8;
	// lis r29,-31822
	ctx.r29.s64 = -2085486592;
	// lis r11,-31845
	ctx.r11.s64 = -2086993920;
	// addi r30,r11,2336
	ctx.r30.s64 = ctx.r11.s64 + 2336;
	// lwz r3,2364(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 2364);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8327f274
	if (ctx.cr6.eq) goto loc_8327F274;
	// addi r11,r1,156
	ctx.r11.s64 = ctx.r1.s64 + 156;
	// stw r31,12(r30)
	PPC_STORE_U32(ctx.r30.u32 + 12, ctx.r31.u32);
	// addi r4,r30,4
	ctx.r4.s64 = ctx.r30.s64 + 4;
	// stw r11,24(r30)
	PPC_STORE_U32(ctx.r30.u32 + 24, ctx.r11.u32);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,36(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8327F274;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8327F274:
	// lwz r11,2444(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2444);
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// li r5,12
	ctx.r5.s64 = 12;
	// stw r11,2444(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2444, ctx.r11.u32);
	// li r4,6
	ctx.r4.s64 = 6;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83285af0
	ctx.lr = 0x8327F298;
	sub_83285AF0(ctx, base);
	// lwz r3,2364(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 2364);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8327f2b8
	if (ctx.cr6.eq) goto loc_8327F2B8;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r4,r30,108
	ctx.r4.s64 = ctx.r30.s64 + 108;
	// lwz r11,36(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8327F2B8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8327F2B8:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x833a01fc
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8327F2C0"))) PPC_WEAK_FUNC(sub_8327F2C0);
PPC_FUNC_IMPL(__imp__sub_8327F2C0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x833a01a0
	ctx.lr = 0x8327F2C8;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r27,0
	ctx.r27.s64 = 0;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// stw r27,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r27.u32);
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// bl 0x83282090
	ctx.lr = 0x8327F2E0;
	sub_83282090(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x8327f2fc
	if (ctx.cr0.eq) goto loc_8327F2FC;
	// lis r4,-256
	ctx.r4.s64 = -16777216;
	// li r3,0
	ctx.r3.s64 = 0;
	// ori r4,r4,310
	ctx.r4.u64 = ctx.r4.u64 | 310;
	// bl 0x83282390
	ctx.lr = 0x8327F2F8;
	sub_83282390(ctx, base);
	// b 0x8327f3c4
	goto loc_8327F3C4;
loc_8327F2FC:
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8327e8c8
	ctx.lr = 0x8327F308;
	sub_8327E8C8(ctx, base);
	// mr. r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r26.s32, 0, ctx.xer);
	// bne 0x8327f3c0
	if (!ctx.cr0.eq) goto loc_8327F3C0;
	// lis r28,-31822
	ctx.r28.s64 = -2085486592;
	// lis r11,-31845
	ctx.r11.s64 = -2086993920;
	// addi r31,r11,1688
	ctx.r31.s64 = ctx.r11.s64 + 1688;
	// lwz r3,2364(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 2364);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8327f340
	if (ctx.cr6.eq) goto loc_8327F340;
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
	ctx.lr = 0x8327F340;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8327F340:
	// li r4,15
	ctx.r4.s64 = 15;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x83274d00
	ctx.lr = 0x8327F34C;
	sub_83274D00(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x8327f3cc
	if (!ctx.cr0.eq) goto loc_8327F3CC;
	// lwz r11,112(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 112);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x8327f3cc
	if (!ctx.cr6.eq) goto loc_8327F3CC;
	// stw r27,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r27.u32);
loc_8327F364:
	// lwz r3,2364(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 2364);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8327f39c
	if (ctx.cr6.eq) goto loc_8327F39C;
	// mr r11,r27
	ctx.r11.u64 = ctx.r27.u64;
	// stw r27,116(r31)
	PPC_STORE_U32(ctx.r31.u32 + 116, ctx.r27.u32);
	// mr r10,r27
	ctx.r10.u64 = ctx.r27.u64;
	// stw r27,128(r31)
	PPC_STORE_U32(ctx.r31.u32 + 128, ctx.r27.u32);
	// mr r9,r27
	ctx.r9.u64 = ctx.r27.u64;
	// stw r27,140(r31)
	PPC_STORE_U32(ctx.r31.u32 + 140, ctx.r27.u32);
loc_8327F388:
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r4,r31,108
	ctx.r4.s64 = ctx.r31.s64 + 108;
	// lwz r11,36(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8327F39C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8327F39C:
	// lis r11,-31822
	ctx.r11.s64 = -2085486592;
	// lwz r10,2444(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 2444);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8327f3c0
	if (ctx.cr6.eq) goto loc_8327F3C0;
	// rotlwi r11,r10,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// lwz r4,0(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8327F3C0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8327F3C0:
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
loc_8327F3C4:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x833a01f0
	__restgprlr_26(ctx, base);
	return;
loc_8327F3CC:
	// li r7,0
	ctx.r7.s64 = 0;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// li r5,11
	ctx.r5.s64 = 11;
	// li r4,6
	ctx.r4.s64 = 6;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x83285af0
	ctx.lr = 0x8327F3E4;
	sub_83285AF0(ctx, base);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8327f364
	if (ctx.cr6.eq) goto loc_8327F364;
	// lwz r10,2444(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 2444);
	// lwz r11,2440(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 2440);
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// bne cr6,0x8327f424
	if (!ctx.cr6.eq) goto loc_8327F424;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8327f418
	if (!ctx.cr6.eq) goto loc_8327F418;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8328c2b0
	ctx.lr = 0x8327F414;
	sub_8328C2B0(ctx, base);
	// std r3,10288(r29)
	PPC_STORE_U64(ctx.r29.u32 + 10288, ctx.r3.u64);
loc_8327F418:
	// lwz r11,2440(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 2440);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,2440(r29)
	PPC_STORE_U32(ctx.r29.u32 + 2440, ctx.r11.u32);
loc_8327F424:
	// lwz r3,2364(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 2364);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8327f39c
	if (ctx.cr6.eq) goto loc_8327F39C;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// stw r11,116(r31)
	PPC_STORE_U32(ctx.r31.u32 + 116, ctx.r11.u32);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// addi r11,r11,20
	ctx.r11.s64 = ctx.r11.s64 + 20;
	// stw r11,128(r31)
	PPC_STORE_U32(ctx.r31.u32 + 128, ctx.r11.u32);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// addi r11,r11,16
	ctx.r11.s64 = ctx.r11.s64 + 16;
	// stw r11,140(r31)
	PPC_STORE_U32(ctx.r31.u32 + 140, ctx.r11.u32);
	// b 0x8327f388
	goto loc_8327F388;
}

__attribute__((alias("__imp__sub_8327F454"))) PPC_WEAK_FUNC(sub_8327F454);
PPC_FUNC_IMPL(__imp__sub_8327F454) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8327F458"))) PPC_WEAK_FUNC(sub_8327F458);
PPC_FUNC_IMPL(__imp__sub_8327F458) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x833a01a8
	ctx.lr = 0x8327F460;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// bl 0x83282090
	ctx.lr = 0x8327F470;
	sub_83282090(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x8327f48c
	if (ctx.cr0.eq) goto loc_8327F48C;
	// lis r4,-256
	ctx.r4.s64 = -16777216;
	// li r3,0
	ctx.r3.s64 = 0;
	// ori r4,r4,311
	ctx.r4.u64 = ctx.r4.u64 | 311;
	// bl 0x83282390
	ctx.lr = 0x8327F488;
	sub_83282390(ctx, base);
	// b 0x8327f530
	goto loc_8327F530;
loc_8327F48C:
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8327e8c8
	ctx.lr = 0x8327F498;
	sub_8327E8C8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x8327f530
	if (!ctx.cr0.eq) goto loc_8327F530;
	// lis r29,-31822
	ctx.r29.s64 = -2085486592;
	// lis r11,-31845
	ctx.r11.s64 = -2086993920;
	// addi r30,r11,1904
	ctx.r30.s64 = ctx.r11.s64 + 1904;
	// lwz r3,2364(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 2364);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8327f4d4
	if (ctx.cr6.eq) goto loc_8327F4D4;
	// stw r31,12(r30)
	PPC_STORE_U32(ctx.r30.u32 + 12, ctx.r31.u32);
	// addi r4,r30,4
	ctx.r4.s64 = ctx.r30.s64 + 4;
	// stw r28,24(r30)
	PPC_STORE_U32(ctx.r30.u32 + 24, ctx.r28.u32);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,36(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8327F4D4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8327F4D4:
	// lwz r10,2440(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2440);
	// lwz r11,2444(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2444);
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// bge cr6,0x8327f4ec
	if (!ctx.cr6.lt) goto loc_8327F4EC;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,2444(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2444, ctx.r11.u32);
loc_8327F4EC:
	// li r7,0
	ctx.r7.s64 = 0;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// li r5,12
	ctx.r5.s64 = 12;
	// li r4,6
	ctx.r4.s64 = 6;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83285af0
	ctx.lr = 0x8327F504;
	sub_83285AF0(ctx, base);
	// lwz r11,2364(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 2364);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8327f52c
	if (ctx.cr6.eq) goto loc_8327F52C;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// addi r4,r30,108
	ctx.r4.s64 = ctx.r30.s64 + 108;
	// lwz r11,36(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 36);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8327F52C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8327F52C:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_8327F530:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x833a01f8
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8327F538"))) PPC_WEAK_FUNC(sub_8327F538);
PPC_FUNC_IMPL(__imp__sub_8327F538) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x833a01ac
	ctx.lr = 0x8327F540;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r29,104(r3)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r3.u32 + 104);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r30,108(r3)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r3.u32 + 108);
	// bl 0x8327e990
	ctx.lr = 0x8327F554;
	sub_8327E990(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x8327f5b0
	if (ctx.cr0.eq) goto loc_8327F5B0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8327ea38
	ctx.lr = 0x8327F564;
	sub_8327EA38(ctx, base);
	// cmpwi cr6,r30,2
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 2, ctx.xer);
	// beq cr6,0x8327f5ac
	if (ctx.cr6.eq) goto loc_8327F5AC;
	// cmpwi cr6,r30,3
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 3, ctx.xer);
	// beq cr6,0x8327f5a4
	if (ctx.cr6.eq) goto loc_8327F5A4;
	// cmpwi cr6,r30,4
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 4, ctx.xer);
	// beq cr6,0x8327f584
	if (ctx.cr6.eq) goto loc_8327F584;
	// cmpwi cr6,r30,6
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 6, ctx.xer);
	// bne cr6,0x8327f5b0
	if (!ctx.cr6.eq) goto loc_8327F5B0;
loc_8327F584:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8327eac8
	ctx.lr = 0x8327F58C;
	sub_8327EAC8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x8327f5a4
	if (ctx.cr0.eq) goto loc_8327F5A4;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8327e4f8
	ctx.lr = 0x8327F59C;
	sub_8327E4F8(ctx, base);
	// li r29,4
	ctx.r29.s64 = 4;
	// b 0x8327f5b0
	goto loc_8327F5B0;
loc_8327F5A4:
	// li r29,3
	ctx.r29.s64 = 3;
	// b 0x8327f5b0
	goto loc_8327F5B0;
loc_8327F5AC:
	// li r29,2
	ctx.r29.s64 = 2;
loc_8327F5B0:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x833a01fc
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8327F5BC"))) PPC_WEAK_FUNC(sub_8327F5BC);
PPC_FUNC_IMPL(__imp__sub_8327F5BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8327F5C0"))) PPC_WEAK_FUNC(sub_8327F5C0);
PPC_FUNC_IMPL(__imp__sub_8327F5C0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,108(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 108);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r30,104(r3)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r3.u32 + 104);
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x8327f628
	if (ctx.cr6.eq) goto loc_8327F628;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// beq cr6,0x8327f620
	if (ctx.cr6.eq) goto loc_8327F620;
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// beq cr6,0x8327f600
	if (ctx.cr6.eq) goto loc_8327F600;
	// cmpwi cr6,r11,6
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 6, ctx.xer);
	// bne cr6,0x8327f62c
	if (!ctx.cr6.eq) goto loc_8327F62C;
loc_8327F600:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8327eac8
	ctx.lr = 0x8327F608;
	sub_8327EAC8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x8327f62c
	if (ctx.cr0.eq) goto loc_8327F62C;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8327e4f8
	ctx.lr = 0x8327F618;
	sub_8327E4F8(ctx, base);
	// li r30,4
	ctx.r30.s64 = 4;
	// b 0x8327f62c
	goto loc_8327F62C;
loc_8327F620:
	// li r30,3
	ctx.r30.s64 = 3;
	// b 0x8327f62c
	goto loc_8327F62C;
loc_8327F628:
	// li r30,2
	ctx.r30.s64 = 2;
loc_8327F62C:
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

__attribute__((alias("__imp__sub_8327F648"))) PPC_WEAK_FUNC(sub_8327F648);
PPC_FUNC_IMPL(__imp__sub_8327F648) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x833a01ac
	ctx.lr = 0x8327F650;
	__savegprlr_29(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x832821e0
	ctx.lr = 0x8327F660;
	sub_832821E0(ctx, base);
	// lwz r11,2448(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 2448);
	// li r29,0
	ctx.r29.s64 = 0;
	// addi r31,r30,2416
	ctx.r31.s64 = ctx.r30.s64 + 2416;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bne cr6,0x8327f6a0
	if (!ctx.cr6.eq) goto loc_8327F6A0;
	// bl 0x8327eb30
	ctx.lr = 0x8327F67C;
	sub_8327EB30(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x8327f6c0
	if (ctx.cr0.eq) goto loc_8327F6C0;
	// lwz r11,36(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// li r10,1
	ctx.r10.s64 = 1;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r10,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r10.u32);
	// stw r11,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r11.u32);
	// b 0x8327f6b4
	goto loc_8327F6B4;
loc_8327F6A0:
	// bl 0x8327ecb0
	ctx.lr = 0x8327F6A4;
	sub_8327ECB0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x8327f6c0
	if (ctx.cr0.eq) goto loc_8327F6C0;
	// stw r29,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r29.u32);
	// li r4,0
	ctx.r4.s64 = 0;
loc_8327F6B4:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x832805e8
	ctx.lr = 0x8327F6BC;
	sub_832805E8(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
loc_8327F6C0:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x832821f0
	ctx.lr = 0x8327F6C8;
	sub_832821F0(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x833a01fc
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8327F6D4"))) PPC_WEAK_FUNC(sub_8327F6D4);
PPC_FUNC_IMPL(__imp__sub_8327F6D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8327F6D8"))) PPC_WEAK_FUNC(sub_8327F6D8);
PPC_FUNC_IMPL(__imp__sub_8327F6D8) {
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
	// bl 0x8327df68
	ctx.lr = 0x8327F6F0;
	sub_8327DF68(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x8327f734
	if (!ctx.cr0.eq) goto loc_8327F734;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8327dfe0
	ctx.lr = 0x8327F700;
	sub_8327DFE0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x8327f734
	if (!ctx.cr0.eq) goto loc_8327F734;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8327e138
	ctx.lr = 0x8327F710;
	sub_8327E138(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x8327f734
	if (!ctx.cr0.eq) goto loc_8327F734;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8327ed90
	ctx.lr = 0x8327F720;
	sub_8327ED90(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x8327f734
	if (!ctx.cr0.eq) goto loc_8327F734;
	// lwz r11,132(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 132);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8327f73c
	if (ctx.cr6.eq) goto loc_8327F73C;
loc_8327F734:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8327ee40
	ctx.lr = 0x8327F73C;
	sub_8327EE40(ctx, base);
loc_8327F73C:
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

__attribute__((alias("__imp__sub_8327F750"))) PPC_WEAK_FUNC(sub_8327F750);
PPC_FUNC_IMPL(__imp__sub_8327F750) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x833a01a4
	ctx.lr = 0x8327F758;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r31,68(r3)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 68);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// lwz r11,72(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 72);
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// rlwinm r5,r11,30,2,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 30) & 0x3FFFFFFF;
	// beq cr6,0x8327f8d0
	if (ctx.cr6.eq) goto loc_8327F8D0;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x8327f8d0
	if (!ctx.cr6.gt) goto loc_8327F8D0;
	// cmplwi cr6,r11,30272
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 30272, ctx.xer);
	// bgt cr6,0x8327f8d0
	if (ctx.cr6.gt) goto loc_8327F8D0;
	// lis r10,-31822
	ctx.r10.s64 = -2085486592;
	// lwz r9,2440(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 2440);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x8327f7a0
	if (ctx.cr6.eq) goto loc_8327F7A0;
	// cmpw cr6,r9,r11
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r11.s32, ctx.xer);
	// bne cr6,0x8327f8d0
	if (!ctx.cr6.eq) goto loc_8327F8D0;
loc_8327F7A0:
	// stw r11,2440(r10)
	PPC_STORE_U32(ctx.r10.u32 + 2440, ctx.r11.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8328be48
	ctx.lr = 0x8327F7B0;
	sub_8328BE48(ctx, base);
	// addi r11,r31,31
	ctx.r11.s64 = ctx.r31.s64 + 31;
	// li r30,0
	ctx.r30.s64 = 0;
	// rlwinm r31,r11,0,0,26
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFE0;
	// li r5,100
	ctx.r5.s64 = 100;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// stw r30,108(r31)
	PPC_STORE_U32(ctx.r31.u32 + 108, ctx.r30.u32);
	// stw r30,104(r31)
	PPC_STORE_U32(ctx.r31.u32 + 104, ctx.r30.u32);
	// lwz r11,4(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// addi r11,r11,127
	ctx.r11.s64 = ctx.r11.s64 + 127;
	// rlwinm r11,r11,0,0,24
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFF80;
	// stw r11,4(r29)
	PPC_STORE_U32(ctx.r29.u32 + 4, ctx.r11.u32);
	// bl 0x833a1390
	ctx.lr = 0x8327F7E4;
	sub_833A1390(ctx, base);
	// li r28,1
	ctx.r28.s64 = 1;
	// stw r30,112(r31)
	PPC_STORE_U32(ctx.r31.u32 + 112, ctx.r30.u32);
	// addi r3,r31,156
	ctx.r3.s64 = ctx.r31.s64 + 156;
	// stw r28,100(r31)
	PPC_STORE_U32(ctx.r31.u32 + 100, ctx.r28.u32);
	// stw r30,116(r31)
	PPC_STORE_U32(ctx.r31.u32 + 116, ctx.r30.u32);
	// stw r30,120(r31)
	PPC_STORE_U32(ctx.r31.u32 + 120, ctx.r30.u32);
	// stw r30,124(r31)
	PPC_STORE_U32(ctx.r31.u32 + 124, ctx.r30.u32);
	// stw r30,128(r31)
	PPC_STORE_U32(ctx.r31.u32 + 128, ctx.r30.u32);
	// stw r30,132(r31)
	PPC_STORE_U32(ctx.r31.u32 + 132, ctx.r30.u32);
	// bl 0x83288ad8
	ctx.lr = 0x8327F80C;
	sub_83288AD8(ctx, base);
	// addi r3,r31,2352
	ctx.r3.s64 = ctx.r31.s64 + 2352;
	// bl 0x8327e300
	ctx.lr = 0x8327F814;
	sub_8327E300(ctx, base);
	// addi r3,r31,2416
	ctx.r3.s64 = ctx.r31.s64 + 2416;
	// bl 0x8327ee88
	ctx.lr = 0x8327F81C;
	sub_8327EE88(ctx, base);
	// addi r3,r31,10096
	ctx.r3.s64 = ctx.r31.s64 + 10096;
	// bl 0x8327e388
	ctx.lr = 0x8327F824;
	sub_8327E388(ctx, base);
	// addi r3,r31,2584
	ctx.r3.s64 = ctx.r31.s64 + 2584;
	// bl 0x832884b8
	ctx.lr = 0x8327F82C;
	sub_832884B8(ctx, base);
	// lis r11,-31822
	ctx.r11.s64 = -2085486592;
	// addi r3,r31,2604
	ctx.r3.s64 = ctx.r31.s64 + 2604;
	// addi r30,r11,1568
	ctx.r30.s64 = ctx.r11.s64 + 1568;
	// li r5,400
	ctx.r5.s64 = 400;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x832884b0
	ctx.lr = 0x8327F844;
	sub_832884B0(ctx, base);
	// addi r3,r31,3004
	ctx.r3.s64 = ctx.r31.s64 + 3004;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// li r5,400
	ctx.r5.s64 = 400;
	// bl 0x832884b0
	ctx.lr = 0x8327F854;
	sub_832884B0(ctx, base);
	// addi r3,r31,3404
	ctx.r3.s64 = ctx.r31.s64 + 3404;
	// li r5,92
	ctx.r5.s64 = 92;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x833a2b30
	ctx.lr = 0x8327F864;
	sub_833A2B30(ctx, base);
	// lis r11,32767
	ctx.r11.s64 = 2147418112;
	// addi r4,r31,3496
	ctx.r4.s64 = ctx.r31.s64 + 3496;
	// ori r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 65535;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,3484(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3484, ctx.r11.u32);
	// bl 0x83277db8
	ctx.lr = 0x8327F87C;
	sub_83277DB8(ctx, base);
	// addi r4,r31,5072
	ctx.r4.s64 = ctx.r31.s64 + 5072;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x832882d0
	ctx.lr = 0x8327F88C;
	sub_832882D0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x8327f8d0
	if (!ctx.cr0.eq) goto loc_8327F8D0;
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// addi r4,r31,8304
	ctx.r4.s64 = ctx.r31.s64 + 8304;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83285eb8
	ctx.lr = 0x8327F8A8;
	sub_83285EB8(ctx, base);
	// addi r3,r31,10064
	ctx.r3.s64 = ctx.r31.s64 + 10064;
	// bl 0x83280298
	ctx.lr = 0x8327F8B0;
	sub_83280298(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8327e460
	ctx.lr = 0x8327F8B8;
	sub_8327E460(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x8327f8d0
	if (!ctx.cr0.eq) goto loc_8327F8D0;
	// stw r28,108(r31)
	PPC_STORE_U32(ctx.r31.u32 + 108, ctx.r28.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r28,104(r31)
	PPC_STORE_U32(ctx.r31.u32 + 104, ctx.r28.u32);
	// b 0x8327f8d4
	goto loc_8327F8D4;
loc_8327F8D0:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8327F8D4:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x833a01f4
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8327F8DC"))) PPC_WEAK_FUNC(sub_8327F8DC);
PPC_FUNC_IMPL(__imp__sub_8327F8DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8327F8E0"))) PPC_WEAK_FUNC(sub_8327F8E0);
PPC_FUNC_IMPL(__imp__sub_8327F8E0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x833a0170
	ctx.lr = 0x8327F8E8;
	__savegprlr_14(ctx, base);
	// stwu r1,-1040(r1)
	ea = -1040 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r3,r1,368
	ctx.r3.s64 = ctx.r1.s64 + 368;
	// li r5,100
	ctx.r5.s64 = 100;
	// stw r11,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r11.u32);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x833a1390
	ctx.lr = 0x8327F908;
	sub_833A1390(ctx, base);
	// lwz r18,2636(r31)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2636);
	// cmpwi cr6,r18,0
	ctx.cr6.compare<int32_t>(ctx.r18.s32, 0, ctx.xer);
	// beq cr6,0x8327f928
	if (ctx.cr6.eq) goto loc_8327F928;
	// addi r4,r1,176
	ctx.r4.s64 = ctx.r1.s64 + 176;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8327e6b0
	ctx.lr = 0x8327F920;
	sub_8327E6B0(ctx, base);
	// lwz r11,196(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 196);
	// stw r11,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r11.u32);
loc_8327F928:
	// addi r3,r31,156
	ctx.r3.s64 = ctx.r31.s64 + 156;
	// bl 0x83288af8
	ctx.lr = 0x8327F930;
	sub_83288AF8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83287ca8
	ctx.lr = 0x8327F938;
	sub_83287CA8(ctx, base);
	// addi r4,r31,3404
	ctx.r4.s64 = ctx.r31.s64 + 3404;
	// addi r3,r1,272
	ctx.r3.s64 = ctx.r1.s64 + 272;
	// li r5,92
	ctx.r5.s64 = 92;
	// lwz r29,120(r31)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r31.u32 + 120);
	// bl 0x833a1390
	ctx.lr = 0x8327F94C;
	sub_833A1390(ctx, base);
	// lwz r28,5012(r31)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r31.u32 + 5012);
	// addi r10,r1,144
	ctx.r10.s64 = ctx.r1.s64 + 144;
	// lwz r27,5032(r31)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r31.u32 + 5032);
	// addi r8,r1,160
	ctx.r8.s64 = ctx.r1.s64 + 160;
	// lwz r11,4992(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4992);
	// li r5,64
	ctx.r5.s64 = 64;
	// lwz r9,4996(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4996);
	// addi r4,r1,208
	ctx.r4.s64 = ctx.r1.s64 + 208;
	// lwz r7,5000(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 5000);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r28,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r28.u32);
	// lwz r28,5248(r31)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r31.u32 + 5248);
	// stw r27,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r27.u32);
	// rlwinm r28,r28,4,0,27
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 4) & 0xFFFFFFF0;
	// lwz r6,5004(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 5004);
	// lwz r30,5008(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 5008);
	// stw r28,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r28.u32);
	// stw r11,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r11.u32);
	// stw r9,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r9.u32);
	// stw r7,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r7.u32);
	// stw r6,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r6.u32);
	// stw r30,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r30.u32);
	// std r29,128(r1)
	PPC_STORE_U64(ctx.r1.u32 + 128, ctx.r29.u64);
	// lwz r11,5016(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 5016);
	// lwz r9,5020(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 5020);
	// lwz r7,5024(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 5024);
	// lwz r6,5028(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 5028);
	// lwz r30,15088(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 15088);
	// lwz r16,15092(r31)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r31.u32 + 15092);
	// lwz r15,15096(r31)
	ctx.r15.u64 = PPC_LOAD_U32(ctx.r31.u32 + 15096);
	// lwz r14,15100(r31)
	ctx.r14.u64 = PPC_LOAD_U32(ctx.r31.u32 + 15100);
	// lwz r28,2584(r31)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2584);
	// lwz r27,2588(r31)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2588);
	// lwz r26,4220(r31)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4220);
	// lwz r25,4224(r31)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4224);
	// lwz r24,4228(r31)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4228);
	// lwz r29,84(r1)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r23,4244(r31)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4244);
	// lwz r22,4248(r31)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4248);
	// lwz r21,3520(r31)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r31.u32 + 3520);
	// lwz r20,4176(r31)
	ctx.r20.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4176);
	// stw r29,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r29.u32);
	// lwz r29,80(r1)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r19,4180(r31)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4180);
	// lwz r17,5244(r31)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r31.u32 + 5244);
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r11.u32);
	// stw r9,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r9.u32);
	// stw r29,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r29.u32);
	// stw r7,8(r10)
	PPC_STORE_U32(ctx.r10.u32 + 8, ctx.r7.u32);
	// stw r6,12(r10)
	PPC_STORE_U32(ctx.r10.u32 + 12, ctx.r6.u32);
	// stw r30,0(r8)
	PPC_STORE_U32(ctx.r8.u32 + 0, ctx.r30.u32);
	// stw r16,4(r8)
	PPC_STORE_U32(ctx.r8.u32 + 4, ctx.r16.u32);
	// stw r15,8(r8)
	PPC_STORE_U32(ctx.r8.u32 + 8, ctx.r15.u32);
	// stw r14,12(r8)
	PPC_STORE_U32(ctx.r8.u32 + 12, ctx.r14.u32);
	// bl 0x832799f8
	ctx.lr = 0x8327FA28;
	sub_832799F8(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8327e468
	ctx.lr = 0x8327FA34;
	sub_8327E468(ctx, base);
	// ld r29,128(r1)
	ctx.r29.u64 = PPC_LOAD_U64(ctx.r1.u32 + 128);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x8327fc68
	if (!ctx.cr0.eq) goto loc_8327FC68;
	// li r5,400
	ctx.r5.s64 = 400;
	// addi r4,r31,3004
	ctx.r4.s64 = ctx.r31.s64 + 3004;
	// addi r3,r1,480
	ctx.r3.s64 = ctx.r1.s64 + 480;
	// bl 0x832884b0
	ctx.lr = 0x8327FA50;
	sub_832884B0(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,368
	ctx.r3.s64 = ctx.r1.s64 + 368;
	// bl 0x8327f750
	ctx.lr = 0x8327FA5C;
	sub_8327F750(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// bne 0x8327fa78
	if (!ctx.cr0.eq) goto loc_8327FA78;
	// lis r4,-256
	ctx.r4.s64 = -16777216;
	// li r3,0
	ctx.r3.s64 = 0;
	// ori r4,r4,514
	ctx.r4.u64 = ctx.r4.u64 | 514;
	// bl 0x83282390
	ctx.lr = 0x8327FA74;
	sub_83282390(ctx, base);
	// b 0x8327fc68
	goto loc_8327FC68;
loc_8327FA78:
	// li r5,400
	ctx.r5.s64 = 400;
	// addi r4,r1,480
	ctx.r4.s64 = ctx.r1.s64 + 480;
	// addi r3,r31,2604
	ctx.r3.s64 = ctx.r31.s64 + 2604;
	// bl 0x832884b0
	ctx.lr = 0x8327FA88;
	sub_832884B0(ctx, base);
	// li r5,400
	ctx.r5.s64 = 400;
	// addi r4,r1,480
	ctx.r4.s64 = ctx.r1.s64 + 480;
	// addi r3,r31,3004
	ctx.r3.s64 = ctx.r31.s64 + 3004;
	// bl 0x832884b0
	ctx.lr = 0x8327FA98;
	sub_832884B0(ctx, base);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// addi r4,r1,208
	ctx.r4.s64 = ctx.r1.s64 + 208;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83279a68
	ctx.lr = 0x8327FAA8;
	sub_83279A68(ctx, base);
	// cmpwi cr6,r18,0
	ctx.cr6.compare<int32_t>(ctx.r18.s32, 0, ctx.xer);
	// beq cr6,0x8327fae4
	if (ctx.cr6.eq) goto loc_8327FAE4;
	// addi r4,r1,176
	ctx.r4.s64 = ctx.r1.s64 + 176;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8327e6b0
	ctx.lr = 0x8327FABC;
	sub_8327E6B0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x8327fc68
	if (!ctx.cr0.eq) goto loc_8327FC68;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,88(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// lwz r5,196(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 196);
	// bl 0x8327e720
	ctx.lr = 0x8327FAD4;
	sub_8327E720(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x8327fc68
	if (!ctx.cr0.eq) goto loc_8327FC68;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8327efd0
	ctx.lr = 0x8327FAE4;
	sub_8327EFD0(ctx, base);
loc_8327FAE4:
	// addi r3,r31,3404
	ctx.r3.s64 = ctx.r31.s64 + 3404;
	// stw r29,120(r31)
	PPC_STORE_U32(ctx.r31.u32 + 120, ctx.r29.u32);
	// addi r4,r1,272
	ctx.r4.s64 = ctx.r1.s64 + 272;
	// li r5,92
	ctx.r5.s64 = 92;
	// bl 0x833a1390
	ctx.lr = 0x8327FAF8;
	sub_833A1390(ctx, base);
	// lwz r5,3476(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 3476);
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x8327fb14
	if (ctx.cr6.eq) goto loc_8327FB14;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r6,3480(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 3480);
	// lwz r4,3484(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 3484);
	// bl 0x83279ac0
	ctx.lr = 0x8327FB14;
	sub_83279AC0(ctx, base);
loc_8327FB14:
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// beq cr6,0x8327fb2c
	if (ctx.cr6.eq) goto loc_8327FB2C;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83282450
	ctx.lr = 0x8327FB2C;
	sub_83282450(ctx, base);
loc_8327FB2C:
	// cmplwi cr6,r26,0
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, 0, ctx.xer);
	// beq cr6,0x8327fb44
	if (ctx.cr6.eq) goto loc_8327FB44;
	// mr r5,r25
	ctx.r5.u64 = ctx.r25.u64;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83276e20
	ctx.lr = 0x8327FB44;
	sub_83276E20(ctx, base);
loc_8327FB44:
	// cmplwi cr6,r24,0
	ctx.cr6.compare<uint32_t>(ctx.r24.u32, 0, ctx.xer);
	// beq cr6,0x8327fb60
	if (ctx.cr6.eq) goto loc_8327FB60;
	// mr r6,r22
	ctx.r6.u64 = ctx.r22.u64;
	// mr r5,r23
	ctx.r5.u64 = ctx.r23.u64;
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83276e68
	ctx.lr = 0x8327FB60;
	sub_83276E68(ctx, base);
loc_8327FB60:
	// cmplwi cr6,r21,0
	ctx.cr6.compare<uint32_t>(ctx.r21.u32, 0, ctx.xer);
	// beq cr6,0x8327fb74
	if (ctx.cr6.eq) goto loc_8327FB74;
	// mr r4,r21
	ctx.r4.u64 = ctx.r21.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83276dc8
	ctx.lr = 0x8327FB74;
	sub_83276DC8(ctx, base);
loc_8327FB74:
	// cmpw cr6,r20,r19
	ctx.cr6.compare<int32_t>(ctx.r20.s32, ctx.r19.s32, ctx.xer);
	// beq cr6,0x8327fb8c
	if (ctx.cr6.eq) goto loc_8327FB8C;
	// mr r5,r19
	ctx.r5.u64 = ctx.r19.u64;
	// mr r4,r20
	ctx.r4.u64 = ctx.r20.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x832803f8
	ctx.lr = 0x8327FB8C;
	sub_832803F8(ctx, base);
loc_8327FB8C:
	// lwz r11,112(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// lis r30,-31822
	ctx.r30.s64 = -2085486592;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8327fbcc
	if (ctx.cr6.eq) goto loc_8327FBCC;
	// lwz r10,116(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// lwz r9,120(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	// stw r11,4992(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4992, ctx.r11.u32);
	// stw r10,4996(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4996, ctx.r10.u32);
	// stw r9,5000(r31)
	PPC_STORE_U32(ctx.r31.u32 + 5000, ctx.r9.u32);
	// lwz r11,2448(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 2448);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8327fbcc
	if (ctx.cr6.eq) goto loc_8327FBCC;
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8327FBCC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8327FBCC:
	// lwz r11,96(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8327fc08
	if (ctx.cr6.eq) goto loc_8327FC08;
	// lwz r10,100(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// lwz r9,104(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// stw r11,5004(r31)
	PPC_STORE_U32(ctx.r31.u32 + 5004, ctx.r11.u32);
	// stw r10,5008(r31)
	PPC_STORE_U32(ctx.r31.u32 + 5008, ctx.r10.u32);
	// stw r9,5012(r31)
	PPC_STORE_U32(ctx.r31.u32 + 5012, ctx.r9.u32);
	// lwz r11,2448(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 2448);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8327fc08
	if (ctx.cr6.eq) goto loc_8327FC08;
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8327FC08;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8327FC08:
	// lwz r5,148(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 148);
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// beq cr6,0x8327fc20
	if (ctx.cr6.eq) goto loc_8327FC20;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,144(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 144);
	// bl 0x83277658
	ctx.lr = 0x8327FC20;
	sub_83277658(ctx, base);
loc_8327FC20:
	// lwz r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmpwi cr6,r4,-1
	ctx.cr6.compare<int32_t>(ctx.r4.s32, -1, ctx.xer);
	// beq cr6,0x8327fc34
	if (ctx.cr6.eq) goto loc_8327FC34;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83277938
	ctx.lr = 0x8327FC34;
	sub_83277938(ctx, base);
loc_8327FC34:
	// cmplwi cr6,r17,0
	ctx.cr6.compare<uint32_t>(ctx.r17.u32, 0, ctx.xer);
	// beq cr6,0x8327fc4c
	if (ctx.cr6.eq) goto loc_8327FC4C;
	// mr r4,r17
	ctx.r4.u64 = ctx.r17.u64;
	// lwz r5,84(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83288728
	ctx.lr = 0x8327FC4C;
	sub_83288728(ctx, base);
loc_8327FC4C:
	// lwz r4,160(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 160);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x8327fc64
	if (ctx.cr6.eq) goto loc_8327FC64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r5,164(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 164);
	// bl 0x83275130
	ctx.lr = 0x8327FC64;
	sub_83275130(ctx, base);
loc_8327FC64:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8327FC68:
	// addi r1,r1,1040
	ctx.r1.s64 = ctx.r1.s64 + 1040;
	// b 0x833a01c0
	__restgprlr_14(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8327FC70"))) PPC_WEAK_FUNC(sub_8327FC70);
PPC_FUNC_IMPL(__imp__sub_8327FC70) {
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
	// bl 0x8327f6d8
	ctx.lr = 0x8327FC88;
	sub_8327F6D8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x8327fc98
	if (ctx.cr0.eq) goto loc_8327FC98;
	// lwz r3,104(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 104);
	// b 0x8327fcbc
	goto loc_8327FCBC;
loc_8327FC98:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8327f648
	ctx.lr = 0x8327FCA0;
	sub_8327F648(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// lwz r3,104(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 104);
	// bne 0x8327fcbc
	if (!ctx.cr0.eq) goto loc_8327FCBC;
	// lwz r11,108(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 108);
	// cmpwi cr6,r11,6
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 6, ctx.xer);
	// bne cr6,0x8327fcbc
	if (!ctx.cr6.eq) goto loc_8327FCBC;
	// li r3,6
	ctx.r3.s64 = 6;
loc_8327FCBC:
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

__attribute__((alias("__imp__sub_8327FCD0"))) PPC_WEAK_FUNC(sub_8327FCD0);
PPC_FUNC_IMPL(__imp__sub_8327FCD0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x833a01ac
	ctx.lr = 0x8327FCD8;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// bl 0x8327e288
	ctx.lr = 0x8327FCE8;
	sub_8327E288(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x8327fcf8
	if (ctx.cr0.eq) goto loc_8327FCF8;
loc_8327FCF0:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x8327fd3c
	goto loc_8327FD3C;
loc_8327FCF8:
	// bl 0x8327e2c8
	ctx.lr = 0x8327FCFC;
	sub_8327E2C8(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// bne cr6,0x8327fd1c
	if (!ctx.cr6.eq) goto loc_8327FD1C;
	// lis r4,-256
	ctx.r4.s64 = -16777216;
	// li r3,0
	ctx.r3.s64 = 0;
	// ori r4,r4,518
	ctx.r4.u64 = ctx.r4.u64 | 518;
	// bl 0x83282390
	ctx.lr = 0x8327FD18;
	sub_83282390(ctx, base);
	// b 0x8327fcf0
	goto loc_8327FCF0;
loc_8327FD1C:
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8327f750
	ctx.lr = 0x8327FD28;
	sub_8327F750(ctx, base);
	// lis r11,-31822
	ctx.r11.s64 = -2085486592;
	// rlwinm r10,r30,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r11,r11,1568
	ctx.r11.s64 = ctx.r11.s64 + 1568;
	// addi r11,r11,508
	ctx.r11.s64 = ctx.r11.s64 + 508;
	// stwx r3,r10,r11
	PPC_STORE_U32(ctx.r10.u32 + ctx.r11.u32, ctx.r3.u32);
loc_8327FD3C:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x833a01fc
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8327FD44"))) PPC_WEAK_FUNC(sub_8327FD44);
PPC_FUNC_IMPL(__imp__sub_8327FD44) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8327FD48"))) PPC_WEAK_FUNC(sub_8327FD48);
PPC_FUNC_IMPL(__imp__sub_8327FD48) {
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
	// lwz r11,104(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 104);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x8327fd7c
	if (!ctx.cr6.eq) goto loc_8327FD7C;
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r4,8324(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8324);
	// bl 0x83287b08
	ctx.lr = 0x8327FD74;
	sub_83287B08(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x8327fdb8
	goto loc_8327FDB8;
loc_8327FD7C:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8327e530
	ctx.lr = 0x8327FD84;
	sub_8327E530(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x8327fdb8
	if (!ctx.cr0.eq) goto loc_8327FDB8;
	// li r11,0
	ctx.r11.s64 = 0;
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r11,108(r31)
	PPC_STORE_U32(ctx.r31.u32 + 108, ctx.r11.u32);
	// stw r11,104(r31)
	PPC_STORE_U32(ctx.r31.u32 + 104, ctx.r11.u32);
	// bl 0x8327e510
	ctx.lr = 0x8327FDA0;
	sub_8327E510(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8327f8e0
	ctx.lr = 0x8327FDA8;
	sub_8327F8E0(ctx, base);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8327e510
	ctx.lr = 0x8327FDB4;
	sub_8327E510(ctx, base);
	// mr r3,r10
	ctx.r3.u64 = ctx.r10.u64;
loc_8327FDB8:
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

__attribute__((alias("__imp__sub_8327FDCC"))) PPC_WEAK_FUNC(sub_8327FDCC);
PPC_FUNC_IMPL(__imp__sub_8327FDCC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8327FDD0"))) PPC_WEAK_FUNC(sub_8327FDD0);
PPC_FUNC_IMPL(__imp__sub_8327FDD0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x833a01a8
	ctx.lr = 0x8327FDD8;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r30,104(r3)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r3.u32 + 104);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r30,1
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 1, ctx.xer);
	// beq cr6,0x8327fe04
	if (ctx.cr6.eq) goto loc_8327FE04;
	// cmpwi cr6,r30,2
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 2, ctx.xer);
	// beq cr6,0x8327fe04
	if (ctx.cr6.eq) goto loc_8327FE04;
	// cmpwi cr6,r30,3
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 3, ctx.xer);
	// beq cr6,0x8327fe04
	if (ctx.cr6.eq) goto loc_8327FE04;
	// cmpwi cr6,r30,4
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 4, ctx.xer);
	// bne cr6,0x8327fefc
	if (!ctx.cr6.eq) goto loc_8327FEFC;
loc_8327FE04:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8327ddb0
	ctx.lr = 0x8327FE0C;
	sub_8327DDB0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x8327fe28
	if (!ctx.cr0.eq) goto loc_8327FE28;
	// lwz r11,100(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 100);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8327fefc
	if (ctx.cr6.eq) goto loc_8327FEFC;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,100(r31)
	PPC_STORE_U32(ctx.r31.u32 + 100, ctx.r11.u32);
loc_8327FE28:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83287618
	ctx.lr = 0x8327FE30;
	sub_83287618(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x8327fefc
	if (ctx.cr0.eq) goto loc_8327FEFC;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8327e810
	ctx.lr = 0x8327FE40;
	sub_8327E810(ctx, base);
	// lwz r11,120(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 120);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x8327fefc
	if (ctx.cr6.eq) goto loc_8327FEFC;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8328c2b0
	ctx.lr = 0x8327FE58;
	sub_8328C2B0(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// cmpwi cr6,r30,2
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 2, ctx.xer);
	// beq cr6,0x8327fe74
	if (ctx.cr6.eq) goto loc_8327FE74;
	// cmpwi cr6,r30,3
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 3, ctx.xer);
	// beq cr6,0x8327fe74
	if (ctx.cr6.eq) goto loc_8327FE74;
	// cmpwi cr6,r30,4
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 4, ctx.xer);
	// bne cr6,0x8327fe7c
	if (!ctx.cr6.eq) goto loc_8327FE7C;
loc_8327FE74:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8327e988
	ctx.lr = 0x8327FE7C;
	sub_8327E988(ctx, base);
loc_8327FE7C:
	// lwz r3,104(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 104);
	// cmpwi cr6,r3,1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 1, ctx.xer);
	// beq cr6,0x8327fedc
	if (ctx.cr6.eq) goto loc_8327FEDC;
	// cmpwi cr6,r3,2
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 2, ctx.xer);
	// beq cr6,0x8327fecc
	if (ctx.cr6.eq) goto loc_8327FECC;
	// cmpwi cr6,r3,3
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 3, ctx.xer);
	// beq cr6,0x8327fec0
	if (ctx.cr6.eq) goto loc_8327FEC0;
	// cmpwi cr6,r3,4
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 4, ctx.xer);
	// beq cr6,0x8327feb4
	if (ctx.cr6.eq) goto loc_8327FEB4;
	// cmpwi cr6,r3,6
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 6, ctx.xer);
	// bne cr6,0x8327fee4
	if (!ctx.cr6.eq) goto loc_8327FEE4;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8282e388
	ctx.lr = 0x8327FEB0;
	sub_8282E388(ctx, base);
	// b 0x8327fee4
	goto loc_8327FEE4;
loc_8327FEB4:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8327fc70
	ctx.lr = 0x8327FEBC;
	sub_8327FC70(ctx, base);
	// b 0x8327fee4
	goto loc_8327FEE4;
loc_8327FEC0:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8327f5c0
	ctx.lr = 0x8327FEC8;
	sub_8327F5C0(ctx, base);
	// b 0x8327fee4
	goto loc_8327FEE4;
loc_8327FECC:
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8327f538
	ctx.lr = 0x8327FED8;
	sub_8327F538(ctx, base);
	// b 0x8327fee4
	goto loc_8327FEE4;
loc_8327FEDC:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8327db80
	ctx.lr = 0x8327FEE4;
	sub_8327DB80(ctx, base);
loc_8327FEE4:
	// stw r3,104(r31)
	PPC_STORE_U32(ctx.r31.u32 + 104, ctx.r3.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8328c2b0
	ctx.lr = 0x8327FEF0;
	sub_8328C2B0(ctx, base);
	// subf r4,r28,r3
	ctx.r4.s64 = ctx.r3.s64 - ctx.r28.s64;
	// addi r3,r31,10256
	ctx.r3.s64 = ctx.r31.s64 + 10256;
	// bl 0x8328c3c8
	ctx.lr = 0x8327FEFC;
	sub_8328C3C8(ctx, base);
loc_8327FEFC:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x833a01f8
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8327FF04"))) PPC_WEAK_FUNC(sub_8327FF04);
PPC_FUNC_IMPL(__imp__sub_8327FF04) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8327FF08"))) PPC_WEAK_FUNC(sub_8327FF08);
PPC_FUNC_IMPL(__imp__sub_8327FF08) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x833a0178
	ctx.lr = 0x8327FF10;
	__savegprlr_16(ctx, base);
	// stwu r1,-880(r1)
	ea = -880 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r30,-31822
	ctx.r30.s64 = -2085486592;
	// lis r11,-31845
	ctx.r11.s64 = -2086993920;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r29,r11,392
	ctx.r29.s64 = ctx.r11.s64 + 392;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// lwz r11,2364(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 2364);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8328000c
	if (ctx.cr6.eq) goto loc_8328000C;
	// lis r10,-32219
	ctx.r10.s64 = -2111504384;
	// lwz r11,96(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 96);
	// lwz r9,92(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 92);
	// addi r3,r1,224
	ctx.r3.s64 = ctx.r1.s64 + 224;
	// addi r4,r10,17856
	ctx.r4.s64 = ctx.r10.s64 + 17856;
	// lwz r8,84(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 84);
	// lwz r10,80(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	// lwz r27,76(r31)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r31.u32 + 76);
	// stw r11,212(r1)
	PPC_STORE_U32(ctx.r1.u32 + 212, ctx.r11.u32);
	// stw r9,204(r1)
	PPC_STORE_U32(ctx.r1.u32 + 204, ctx.r9.u32);
	// stw r8,196(r1)
	PPC_STORE_U32(ctx.r1.u32 + 196, ctx.r8.u32);
	// stw r10,188(r1)
	PPC_STORE_U32(ctx.r1.u32 + 188, ctx.r10.u32);
	// lwz r11,72(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 72);
	// lwz r26,68(r31)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r31.u32 + 68);
	// lwz r25,64(r31)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r31.u32 + 64);
	// lwz r24,60(r31)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r31.u32 + 60);
	// lwz r23,56(r31)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// lwz r22,52(r31)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	// lwz r21,48(r31)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// lwz r20,44(r31)
	ctx.r20.u64 = PPC_LOAD_U32(ctx.r31.u32 + 44);
	// lwz r19,40(r31)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// lwz r18,36(r31)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// lwz r17,32(r31)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// lwz r16,28(r31)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// lwz r10,24(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// lwz r9,20(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// lwz r8,16(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// lwz r7,12(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// lwz r6,8(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r5,4(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// stw r27,180(r1)
	PPC_STORE_U32(ctx.r1.u32 + 180, ctx.r27.u32);
	// stw r11,172(r1)
	PPC_STORE_U32(ctx.r1.u32 + 172, ctx.r11.u32);
	// stw r26,164(r1)
	PPC_STORE_U32(ctx.r1.u32 + 164, ctx.r26.u32);
	// stw r25,156(r1)
	PPC_STORE_U32(ctx.r1.u32 + 156, ctx.r25.u32);
	// stw r24,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, ctx.r24.u32);
	// stw r23,140(r1)
	PPC_STORE_U32(ctx.r1.u32 + 140, ctx.r23.u32);
	// stw r22,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r22.u32);
	// stw r21,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r21.u32);
	// stw r20,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r20.u32);
	// stw r19,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r19.u32);
	// stw r18,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r18.u32);
	// stw r17,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r17.u32);
	// stw r16,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r16.u32);
	// bl 0x833a2630
	ctx.lr = 0x8327FFE4;
	sub_833A2630(ctx, base);
	// lwz r3,2364(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 2364);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8328000c
	if (ctx.cr6.eq) goto loc_8328000C;
	// addi r11,r1,224
	ctx.r11.s64 = ctx.r1.s64 + 224;
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
	ctx.lr = 0x8328000C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8328000C:
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8327fcd0
	ctx.lr = 0x83280018;
	sub_8327FCD0(ctx, base);
	// lwz r11,2364(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 2364);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x83280044
	if (ctx.cr6.eq) goto loc_83280044;
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
	ctx.lr = 0x83280044;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_83280044:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,880
	ctx.r1.s64 = ctx.r1.s64 + 880;
	// b 0x833a01c8
	__restgprlr_16(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83280050"))) PPC_WEAK_FUNC(sub_83280050);
PPC_FUNC_IMPL(__imp__sub_83280050) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x833a01a8
	ctx.lr = 0x83280058;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x83282090
	ctx.lr = 0x83280064;
	sub_83282090(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x83280080
	if (ctx.cr0.eq) goto loc_83280080;
	// lis r4,-256
	ctx.r4.s64 = -16777216;
	// li r3,0
	ctx.r3.s64 = 0;
	// ori r4,r4,305
	ctx.r4.u64 = ctx.r4.u64 | 305;
	// bl 0x83282390
	ctx.lr = 0x8328007C;
	sub_83282390(ctx, base);
	// b 0x8328014c
	goto loc_8328014C;
loc_83280080:
	// lis r28,-31822
	ctx.r28.s64 = -2085486592;
	// lis r11,-31845
	ctx.r11.s64 = -2086993920;
	// addi r29,r11,608
	ctx.r29.s64 = ctx.r11.s64 + 608;
	// lwz r3,2364(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 2364);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x832800b0
	if (ctx.cr6.eq) goto loc_832800B0;
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
	ctx.lr = 0x832800B0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_832800B0:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8327fd48
	ctx.lr = 0x832800B8;
	sub_8327FD48(ctx, base);
	// addi r3,r31,156
	ctx.r3.s64 = ctx.r31.s64 + 156;
	// bl 0x83288af8
	ctx.lr = 0x832800C0;
	sub_83288AF8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83287ca8
	ctx.lr = 0x832800C8;
	sub_83287CA8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8327e468
	ctx.lr = 0x832800D0;
	sub_8327E468(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x832821e0
	ctx.lr = 0x832800DC;
	sub_832821E0(ctx, base);
	// lis r11,-31822
	ctx.r11.s64 = -2085486592;
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r10,r11,1568
	ctx.r10.s64 = ctx.r11.s64 + 1568;
	// addi r11,r10,508
	ctx.r11.s64 = ctx.r10.s64 + 508;
loc_832800EC:
	// lwz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r8,r31
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r31.u32, ctx.xer);
	// beq cr6,0x83280110
	if (ctx.cr6.eq) goto loc_83280110;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// addi r8,r10,540
	ctx.r8.s64 = ctx.r10.s64 + 540;
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// cmpw cr6,r11,r8
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r8.s32, ctx.xer);
	// blt cr6,0x832800ec
	if (ctx.cr6.lt) goto loc_832800EC;
	// b 0x83280120
	goto loc_83280120;
loc_83280110:
	// rlwinm r11,r9,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r10,r10,508
	ctx.r10.s64 = ctx.r10.s64 + 508;
	// li r9,0
	ctx.r9.s64 = 0;
	// stwx r9,r11,r10
	PPC_STORE_U32(ctx.r11.u32 + ctx.r10.u32, ctx.r9.u32);
loc_83280120:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x832821f0
	ctx.lr = 0x83280128;
	sub_832821F0(ctx, base);
	// lwz r3,2364(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 2364);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x83280148
	if (ctx.cr6.eq) goto loc_83280148;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r4,r29,108
	ctx.r4.s64 = ctx.r29.s64 + 108;
	// lwz r11,36(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x83280148;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_83280148:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
loc_8328014C:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x833a01f8
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83280154"))) PPC_WEAK_FUNC(sub_83280154);
PPC_FUNC_IMPL(__imp__sub_83280154) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83280158"))) PPC_WEAK_FUNC(sub_83280158);
PPC_FUNC_IMPL(__imp__sub_83280158) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x833a01a8
	ctx.lr = 0x83280160;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x83282090
	ctx.lr = 0x8328016C;
	sub_83282090(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x83280188
	if (ctx.cr0.eq) goto loc_83280188;
	// lis r4,-256
	ctx.r4.s64 = -16777216;
	// li r3,0
	ctx.r3.s64 = 0;
	// ori r4,r4,307
	ctx.r4.u64 = ctx.r4.u64 | 307;
	// bl 0x83282390
	ctx.lr = 0x83280184;
	sub_83282390(ctx, base);
	// b 0x832801f0
	goto loc_832801F0;
loc_83280188:
	// lis r30,-31822
	ctx.r30.s64 = -2085486592;
	// lis r11,-31845
	ctx.r11.s64 = -2086993920;
	// addi r29,r11,1040
	ctx.r29.s64 = ctx.r11.s64 + 1040;
	// lwz r3,2364(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 2364);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x832801b8
	if (ctx.cr6.eq) goto loc_832801B8;
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
	ctx.lr = 0x832801B8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_832801B8:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8327fd48
	ctx.lr = 0x832801C0;
	sub_8327FD48(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// stw r11,100(r31)
	PPC_STORE_U32(ctx.r31.u32 + 100, ctx.r11.u32);
	// lwz r3,2364(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 2364);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x832801ec
	if (ctx.cr6.eq) goto loc_832801EC;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r4,r29,108
	ctx.r4.s64 = ctx.r29.s64 + 108;
	// lwz r11,36(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x832801EC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_832801EC:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
loc_832801F0:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x833a01f8
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832801F8"))) PPC_WEAK_FUNC(sub_832801F8);
PPC_FUNC_IMPL(__imp__sub_832801F8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x833a01ac
	ctx.lr = 0x83280200;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// bl 0x83282090
	ctx.lr = 0x8328020C;
	sub_83282090(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x83280228
	if (ctx.cr0.eq) goto loc_83280228;
	// lis r4,-256
	ctx.r4.s64 = -16777216;
	// li r3,0
	ctx.r3.s64 = 0;
	// ori r4,r4,312
	ctx.r4.u64 = ctx.r4.u64 | 312;
	// bl 0x83282390
	ctx.lr = 0x83280224;
	sub_83282390(ctx, base);
	// b 0x83280284
	goto loc_83280284;
loc_83280228:
	// lis r30,-31822
	ctx.r30.s64 = -2085486592;
	// lis r11,-31845
	ctx.r11.s64 = -2086993920;
	// addi r31,r11,2552
	ctx.r31.s64 = ctx.r11.s64 + 2552;
	// lwz r3,2364(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 2364);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x83280258
	if (ctx.cr6.eq) goto loc_83280258;
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
	ctx.lr = 0x83280258;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_83280258:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8327fdd0
	ctx.lr = 0x83280260;
	sub_8327FDD0(ctx, base);
	// lwz r3,2364(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 2364);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x83280280
	if (ctx.cr6.eq) goto loc_83280280;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r4,r31,108
	ctx.r4.s64 = ctx.r31.s64 + 108;
	// lwz r11,36(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x83280280;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_83280280:
	// li r3,0
	ctx.r3.s64 = 0;
loc_83280284:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x833a01fc
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8328028C"))) PPC_WEAK_FUNC(sub_8328028C);
PPC_FUNC_IMPL(__imp__sub_8328028C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83280290"))) PPC_WEAK_FUNC(sub_83280290);
PPC_FUNC_IMPL(__imp__sub_83280290) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,96(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 96);
	// b 0x83280988
	sub_83280988(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83280298"))) PPC_WEAK_FUNC(sub_83280298);
PPC_FUNC_IMPL(__imp__sub_83280298) {
	PPC_FUNC_PROLOGUE();
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// stw r11,24(r3)
	PPC_STORE_U32(ctx.r3.u32 + 24, ctx.r11.u32);
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
	// blr 
	return;
}

__attribute__((alias("__imp__sub_832802BC"))) PPC_WEAK_FUNC(sub_832802BC);
PPC_FUNC_IMPL(__imp__sub_832802BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832802C0"))) PPC_WEAK_FUNC(sub_832802C0);
PPC_FUNC_IMPL(__imp__sub_832802C0) {
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
	// lwz r11,10064(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 10064);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
	// lwz r11,10064(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 10064);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x83280364
	if (ctx.cr6.eq) goto loc_83280364;
	// lwz r11,2420(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 2420);
	// lwz r9,10088(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 10088);
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// bge cr6,0x83280338
	if (!ctx.cr6.lt) goto loc_83280338;
	// lis r11,-31822
	ctx.r11.s64 = -2085486592;
	// lwz r3,2364(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 2364);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x83280330
	if (ctx.cr6.eq) goto loc_83280330;
	// lis r9,-32219
	ctx.r9.s64 = -2111504384;
	// addi r9,r9,18048
	ctx.r9.s64 = ctx.r9.s64 + 18048;
loc_8328030C:
	// lis r11,-31845
	ctx.r11.s64 = -2086993920;
	// addi r11,r11,4288
	ctx.r11.s64 = ctx.r11.s64 + 4288;
	// addi r4,r11,4
	ctx.r4.s64 = ctx.r11.s64 + 4;
	// stw r10,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r10.u32);
	// stw r9,24(r11)
	PPC_STORE_U32(ctx.r11.u32 + 24, ctx.r9.u32);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,36(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x83280330;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_83280330:
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x83280368
	goto loc_83280368;
loc_83280338:
	// lwz r11,2416(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 2416);
	// lwz r9,10072(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 10072);
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// blt cr6,0x83280364
	if (ctx.cr6.lt) goto loc_83280364;
	// lis r11,-31822
	ctx.r11.s64 = -2085486592;
	// lwz r3,2364(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 2364);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x83280330
	if (ctx.cr6.eq) goto loc_83280330;
	// lis r9,-32219
	ctx.r9.s64 = -2111504384;
	// addi r9,r9,18036
	ctx.r9.s64 = ctx.r9.s64 + 18036;
	// b 0x8328030c
	goto loc_8328030C;
loc_83280364:
	// li r3,0
	ctx.r3.s64 = 0;
loc_83280368:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83280378"))) PPC_WEAK_FUNC(sub_83280378);
PPC_FUNC_IMPL(__imp__sub_83280378) {
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
	// stw r4,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r4.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// li r5,8
	ctx.r5.s64 = 8;
	// li r4,7
	ctx.r4.s64 = 7;
	// bl 0x83285af0
	ctx.lr = 0x8328039C;
	sub_83285AF0(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_832803AC"))) PPC_WEAK_FUNC(sub_832803AC);
PPC_FUNC_IMPL(__imp__sub_832803AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832803B0"))) PPC_WEAK_FUNC(sub_832803B0);
PPC_FUNC_IMPL(__imp__sub_832803B0) {
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
	// bl 0x8327e4e0
	ctx.lr = 0x832803C8;
	sub_8327E4E0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x832803e0
	if (!ctx.cr0.eq) goto loc_832803E0;
	// li r11,2
	ctx.r11.s64 = 2;
	// li r10,3
	ctx.r10.s64 = 3;
	// stw r11,104(r31)
	PPC_STORE_U32(ctx.r31.u32 + 104, ctx.r11.u32);
	// stw r10,108(r31)
	PPC_STORE_U32(ctx.r31.u32 + 108, ctx.r10.u32);
loc_832803E0:
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

__attribute__((alias("__imp__sub_832803F4"))) PPC_WEAK_FUNC(sub_832803F4);
PPC_FUNC_IMPL(__imp__sub_832803F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832803F8"))) PPC_WEAK_FUNC(sub_832803F8);
PPC_FUNC_IMPL(__imp__sub_832803F8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x833a01ac
	ctx.lr = 0x83280400;
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
	ctx.lr = 0x83280414;
	sub_83282090(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x83280430
	if (ctx.cr0.eq) goto loc_83280430;
	// lis r4,-256
	ctx.r4.s64 = -16777216;
	// li r3,0
	ctx.r3.s64 = 0;
	// ori r4,r4,324
	ctx.r4.u64 = ctx.r4.u64 | 324;
	// bl 0x83282390
	ctx.lr = 0x8328042C;
	sub_83282390(ctx, base);
	// b 0x83280454
	goto loc_83280454;
loc_83280430:
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83277630
	ctx.lr = 0x83280440;
	sub_83277630(ctx, base);
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83280a08
	ctx.lr = 0x83280450;
	sub_83280A08(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
loc_83280454:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x833a01fc
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8328045C"))) PPC_WEAK_FUNC(sub_8328045C);
PPC_FUNC_IMPL(__imp__sub_8328045C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83280460"))) PPC_WEAK_FUNC(sub_83280460);
PPC_FUNC_IMPL(__imp__sub_83280460) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	ctx.lr = 0x83280480;
	sub_83282090(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x8328049c
	if (ctx.cr0.eq) goto loc_8328049C;
	// lis r4,-256
	ctx.r4.s64 = -16777216;
	// li r3,0
	ctx.r3.s64 = 0;
	// ori r4,r4,325
	ctx.r4.u64 = ctx.r4.u64 | 325;
	// bl 0x83282390
	ctx.lr = 0x83280498;
	sub_83282390(ctx, base);
	// b 0x832804b0
	goto loc_832804B0;
loc_8328049C:
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// li r4,30
	ctx.r4.s64 = 30;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83274ee0
	ctx.lr = 0x832804AC;
	sub_83274EE0(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
loc_832804B0:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_832804C8"))) PPC_WEAK_FUNC(sub_832804C8);
PPC_FUNC_IMPL(__imp__sub_832804C8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	ctx.lr = 0x832804E8;
	sub_83282090(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x83280504
	if (ctx.cr0.eq) goto loc_83280504;
	// lis r4,-256
	ctx.r4.s64 = -16777216;
	// li r3,0
	ctx.r3.s64 = 0;
	// ori r4,r4,326
	ctx.r4.u64 = ctx.r4.u64 | 326;
	// bl 0x83282390
	ctx.lr = 0x83280500;
	sub_83282390(ctx, base);
	// b 0x83280518
	goto loc_83280518;
loc_83280504:
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// li r4,29
	ctx.r4.s64 = 29;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83274ee0
	ctx.lr = 0x83280514;
	sub_83274EE0(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
loc_83280518:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83280530"))) PPC_WEAK_FUNC(sub_83280530);
PPC_FUNC_IMPL(__imp__sub_83280530) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,108(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 108);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// beq cr6,0x83280568
	if (ctx.cr6.eq) goto loc_83280568;
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// beq cr6,0x83280568
	if (ctx.cr6.eq) goto loc_83280568;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x83280580
	goto loc_83280580;
loc_83280568:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83277c98
	ctx.lr = 0x83280574;
	sub_83277C98(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83280378
	ctx.lr = 0x83280580;
	sub_83280378(ctx, base);
loc_83280580:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83280598"))) PPC_WEAK_FUNC(sub_83280598);
PPC_FUNC_IMPL(__imp__sub_83280598) {
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
	ctx.lr = 0x832805B0;
	sub_83282090(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x832805cc
	if (ctx.cr0.eq) goto loc_832805CC;
	// lis r4,-256
	ctx.r4.s64 = -16777216;
	// li r3,0
	ctx.r3.s64 = 0;
	// ori r4,r4,323
	ctx.r4.u64 = ctx.r4.u64 | 323;
	// bl 0x83282390
	ctx.lr = 0x832805C8;
	sub_83282390(ctx, base);
	// b 0x832805d4
	goto loc_832805D4;
loc_832805CC:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x832803b0
	ctx.lr = 0x832805D4;
	sub_832803B0(ctx, base);
loc_832805D4:
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

__attribute__((alias("__imp__sub_832805E8"))) PPC_WEAK_FUNC(sub_832805E8);
PPC_FUNC_IMPL(__imp__sub_832805E8) {
	PPC_FUNC_PROLOGUE();
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// cmplwi cr6,r4,1
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 1, ctx.xer);
	// blt cr6,0x8328063c
	if (ctx.cr6.lt) goto loc_8328063C;
	// beq cr6,0x8328061c
	if (ctx.cr6.eq) goto loc_8328061C;
	// cmplwi cr6,r4,3
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 3, ctx.xer);
	// bgelr cr6
	if (!ctx.cr6.lt) return;
	// lwz r10,104(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 104);
	// cmpwi cr6,r10,4
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 4, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// b 0x83280530
	sub_83280530(ctx, base);
	return;
loc_8328061C:
	// lwz r10,116(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 116);
	// addi r9,r10,1
	ctx.r9.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// stw r9,116(r11)
	PPC_STORE_U32(ctx.r11.u32 + 116, ctx.r9.u32);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// b 0x83280530
	sub_83280530(ctx, base);
	return;
loc_8328063C:
	// lwz r10,116(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 116);
	// addic. r10,r10,-1
	ctx.xer.ca = ctx.r10.u32 > 0;
	ctx.r10.s64 = ctx.r10.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// stw r10,116(r11)
	PPC_STORE_U32(ctx.r11.u32 + 116, ctx.r10.u32);
	// bnelr 
	if (!ctx.cr0.eq) return;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// b 0x83280530
	sub_83280530(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83280658"))) PPC_WEAK_FUNC(sub_83280658);
PPC_FUNC_IMPL(__imp__sub_83280658) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8328065C"))) PPC_WEAK_FUNC(sub_8328065C);
PPC_FUNC_IMPL(__imp__sub_8328065C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83280660"))) PPC_WEAK_FUNC(sub_83280660);
PPC_FUNC_IMPL(__imp__sub_83280660) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	ctx.lr = 0x83280680;
	sub_83282090(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x8328069c
	if (ctx.cr0.eq) goto loc_8328069C;
	// lis r4,-256
	ctx.r4.s64 = -16777216;
	// li r3,0
	ctx.r3.s64 = 0;
	// ori r4,r4,322
	ctx.r4.u64 = ctx.r4.u64 | 322;
	// bl 0x83282390
	ctx.lr = 0x83280698;
	sub_83282390(ctx, base);
	// b 0x832806e4
	goto loc_832806E4;
loc_8328069C:
	// lwz r11,112(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 112);
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// bne cr6,0x832806c0
	if (!ctx.cr6.eq) goto loc_832806C0;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x832806b8
	if (!ctx.cr6.eq) goto loc_832806B8;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x832806e4
	goto loc_832806E4;
loc_832806B8:
	// li r4,0
	ctx.r4.s64 = 0;
	// b 0x832806d0
	goto loc_832806D0;
loc_832806C0:
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// xori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 ^ 1;
	// addi r4,r11,1
	ctx.r4.s64 = ctx.r11.s64 + 1;
loc_832806D0:
	// stw r30,112(r31)
	PPC_STORE_U32(ctx.r31.u32 + 112, ctx.r30.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x832805e8
	ctx.lr = 0x832806DC;
	sub_832805E8(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,100(r31)
	PPC_STORE_U32(ctx.r31.u32 + 100, ctx.r11.u32);
loc_832806E4:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_832806FC"))) PPC_WEAK_FUNC(sub_832806FC);
PPC_FUNC_IMPL(__imp__sub_832806FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83280700"))) PPC_WEAK_FUNC(sub_83280700);
PPC_FUNC_IMPL(__imp__sub_83280700) {
	PPC_FUNC_PROLOGUE();
	// stw r4,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r4.u32);
	// stw r5,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r5.u32);
	// stw r6,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r6.u32);
	// stw r7,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r7.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83280714"))) PPC_WEAK_FUNC(sub_83280714);
PPC_FUNC_IMPL(__imp__sub_83280714) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83280718"))) PPC_WEAK_FUNC(sub_83280718);
PPC_FUNC_IMPL(__imp__sub_83280718) {
	PPC_FUNC_PROLOGUE();
	// lis r4,-256
	ctx.r4.s64 = -16777216;
	// ori r4,r4,1537
	ctx.r4.u64 = ctx.r4.u64 | 1537;
	// b 0x83282390
	sub_83282390(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83280724"))) PPC_WEAK_FUNC(sub_83280724);
PPC_FUNC_IMPL(__imp__sub_83280724) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83280728"))) PPC_WEAK_FUNC(sub_83280728);
PPC_FUNC_IMPL(__imp__sub_83280728) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x833a01a8
	ctx.lr = 0x83280730;
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
	// bl 0x83282090
	ctx.lr = 0x83280748;
	sub_83282090(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x83280764
	if (ctx.cr0.eq) goto loc_83280764;
	// lis r4,-256
	ctx.r4.s64 = -16777216;
	// li r3,0
	ctx.r3.s64 = 0;
	// ori r4,r4,401
	ctx.r4.u64 = ctx.r4.u64 | 401;
loc_8328075C:
	// bl 0x83282390
	ctx.lr = 0x83280760;
	sub_83282390(ctx, base);
	// b 0x832807bc
	goto loc_832807BC;
loc_83280764:
	// lwz r10,8864(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8864);
	// lwz r9,8856(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8856);
	// cmpwi cr6,r10,8
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 8, ctx.xer);
	// bne cr6,0x83280784
	if (!ctx.cr6.eq) goto loc_83280784;
	// lis r4,-256
	ctx.r4.s64 = -16777216;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// ori r4,r4,1538
	ctx.r4.u64 = ctx.r4.u64 | 1538;
	// b 0x8328075c
	goto loc_8328075C;
loc_83280784:
	// rlwinm r11,r30,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 4) & 0xFFFFFFF0;
	// li r7,0
	ctx.r7.s64 = 0;
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r3,r11,4
	ctx.r3.s64 = ctx.r11.s64 + 4;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x83280700
	ctx.lr = 0x832807A4;
	sub_83280700(ctx, base);
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r10
	ctx.r4.u64 = ctx.r10.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83287708
	ctx.lr = 0x832807B8;
	sub_83287708(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
loc_832807BC:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x833a01f8
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832807C4"))) PPC_WEAK_FUNC(sub_832807C4);
PPC_FUNC_IMPL(__imp__sub_832807C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832807C8"))) PPC_WEAK_FUNC(sub_832807C8);
PPC_FUNC_IMPL(__imp__sub_832807C8) {
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
	// li r4,8
	ctx.r4.s64 = 8;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x83285b60
	ctx.lr = 0x832807E4;
	sub_83285B60(ctx, base);
	// cmpwi cr6,r3,1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 1, ctx.xer);
	// beq cr6,0x83280820
	if (ctx.cr6.eq) goto loc_83280820;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,8864(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8864);
	// bl 0x83287b20
	ctx.lr = 0x832807F8;
	sub_83287B20(ctx, base);
	// cmpwi cr6,r3,1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 1, ctx.xer);
	// bne cr6,0x83280820
	if (!ctx.cr6.eq) goto loc_83280820;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8313e928
	ctx.lr = 0x83280808;
	sub_8313E928(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x83280820
	if (ctx.cr0.eq) goto loc_83280820;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,8
	ctx.r4.s64 = 8;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83285b50
	ctx.lr = 0x83280820;
	sub_83285B50(ctx, base);
loc_83280820:
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

__attribute__((alias("__imp__sub_83280834"))) PPC_WEAK_FUNC(sub_83280834);
PPC_FUNC_IMPL(__imp__sub_83280834) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83280838"))) PPC_WEAK_FUNC(sub_83280838);
PPC_FUNC_IMPL(__imp__sub_83280838) {
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
	// li r4,8
	ctx.r4.s64 = 8;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x83285b40
	ctx.lr = 0x83280854;
	sub_83285B40(ctx, base);
	// cmpwi cr6,r3,1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 1, ctx.xer);
	// beq cr6,0x83280890
	if (ctx.cr6.eq) goto loc_83280890;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,8864(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8864);
	// bl 0x83287ae8
	ctx.lr = 0x83280868;
	sub_83287AE8(ctx, base);
	// cmpwi cr6,r3,1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 1, ctx.xer);
	// bne cr6,0x83280890
	if (!ctx.cr6.eq) goto loc_83280890;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8313e928
	ctx.lr = 0x83280878;
	sub_8313E928(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x83280890
	if (ctx.cr0.eq) goto loc_83280890;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,8
	ctx.r4.s64 = 8;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83285b30
	ctx.lr = 0x83280890;
	sub_83285B30(ctx, base);
loc_83280890:
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

__attribute__((alias("__imp__sub_832808A4"))) PPC_WEAK_FUNC(sub_832808A4);
PPC_FUNC_IMPL(__imp__sub_832808A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832808A8"))) PPC_WEAK_FUNC(sub_832808A8);
PPC_FUNC_IMPL(__imp__sub_832808A8) {
	PPC_FUNC_PROLOGUE();
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// b 0x83280700
	sub_83280700(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832808BC"))) PPC_WEAK_FUNC(sub_832808BC);
PPC_FUNC_IMPL(__imp__sub_832808BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832808C0"))) PPC_WEAK_FUNC(sub_832808C0);
PPC_FUNC_IMPL(__imp__sub_832808C0) {
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
	// bl 0x832807c8
	ctx.lr = 0x832808D8;
	sub_832807C8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83280838
	ctx.lr = 0x832808E0;
	sub_83280838(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d6da88
	ctx.lr = 0x832808E8;
	sub_82D6DA88(ctx, base);
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

__attribute__((alias("__imp__sub_832808FC"))) PPC_WEAK_FUNC(sub_832808FC);
PPC_FUNC_IMPL(__imp__sub_832808FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83280900"))) PPC_WEAK_FUNC(sub_83280900);
PPC_FUNC_IMPL(__imp__sub_83280900) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x833a01a8
	ctx.lr = 0x83280908;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r31,0
	ctx.r31.s64 = 0;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// stw r31,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r31.u32);
	// addi r30,r4,4
	ctx.r30.s64 = ctx.r4.s64 + 4;
loc_83280920:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x832808a8
	ctx.lr = 0x83280928;
	sub_832808A8(ctx, base);
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x83287708
	ctx.lr = 0x8328093C;
	sub_83287708(ctx, base);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// addi r30,r30,16
	ctx.r30.s64 = ctx.r30.s64 + 16;
	// cmpwi cr6,r31,3
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 3, ctx.xer);
	// blt cr6,0x83280920
	if (ctx.cr6.lt) goto loc_83280920;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x833a01f8
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83280954"))) PPC_WEAK_FUNC(sub_83280954);
PPC_FUNC_IMPL(__imp__sub_83280954) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83280958"))) PPC_WEAK_FUNC(sub_83280958);
PPC_FUNC_IMPL(__imp__sub_83280958) {
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
	// addi r4,r3,10008
	ctx.r4.s64 = ctx.r3.s64 + 10008;
	// lwz r5,8864(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8864);
	// stw r4,8856(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8856, ctx.r4.u32);
	// bl 0x83280900
	ctx.lr = 0x83280974;
	sub_83280900(ctx, base);
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

__attribute__((alias("__imp__sub_83280988"))) PPC_WEAK_FUNC(sub_83280988);
PPC_FUNC_IMPL(__imp__sub_83280988) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	ctx.lr = 0x832809A8;
	sub_83282090(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x832809c4
	if (ctx.cr0.eq) goto loc_832809C4;
	// lis r4,-256
	ctx.r4.s64 = -16777216;
	// li r3,0
	ctx.r3.s64 = 0;
	// ori r4,r4,419
	ctx.r4.u64 = ctx.r4.u64 | 419;
	// bl 0x83282390
	ctx.lr = 0x832809C0;
	sub_83282390(ctx, base);
	// b 0x832809f0
	goto loc_832809F0;
loc_832809C4:
	// li r4,6
	ctx.r4.s64 = 6;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83274d00
	ctx.lr = 0x832809D0;
	sub_83274D00(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x832809f0
	if (ctx.cr0.eq) goto loc_832809F0;
	// lwz r11,8788(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8788);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x832809F0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_832809F0:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83280A08"))) PPC_WEAK_FUNC(sub_83280A08);
PPC_FUNC_IMPL(__imp__sub_83280A08) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x833a01ac
	ctx.lr = 0x83280A10;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// li r4,6
	ctx.r4.s64 = 6;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// bl 0x83274d00
	ctx.lr = 0x83280A28;
	sub_83274D00(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x83280a54
	if (ctx.cr0.eq) goto loc_83280A54;
	// lwz r11,8788(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8788);
	// lwz r11,20(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x83280a54
	if (ctx.cr6.eq) goto loc_83280A54;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bctrl 
	ctx.lr = 0x83280A54;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_83280A54:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x833a01fc
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83280A5C"))) PPC_WEAK_FUNC(sub_83280A5C);
PPC_FUNC_IMPL(__imp__sub_83280A5C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83280A60"))) PPC_WEAK_FUNC(sub_83280A60);
PPC_FUNC_IMPL(__imp__sub_83280A60) {
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
	// li r4,7
	ctx.r4.s64 = 7;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x83285b40
	ctx.lr = 0x83280A7C;
	sub_83285B40(ctx, base);
	// cmpwi cr6,r3,1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 1, ctx.xer);
	// beq cr6,0x83280aa8
	if (ctx.cr6.eq) goto loc_83280AA8;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,8796(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8796);
	// bl 0x83287ae8
	ctx.lr = 0x83280A90;
	sub_83287AE8(ctx, base);
	// cmpwi cr6,r3,1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 1, ctx.xer);
	// bne cr6,0x83280aa8
	if (!ctx.cr6.eq) goto loc_83280AA8;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,7
	ctx.r4.s64 = 7;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83285b30
	ctx.lr = 0x83280AA8;
	sub_83285B30(ctx, base);
loc_83280AA8:
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

__attribute__((alias("__imp__sub_83280ABC"))) PPC_WEAK_FUNC(sub_83280ABC);
PPC_FUNC_IMPL(__imp__sub_83280ABC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83280AC0"))) PPC_WEAK_FUNC(sub_83280AC0);
PPC_FUNC_IMPL(__imp__sub_83280AC0) {
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
	// li r4,7
	ctx.r4.s64 = 7;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x83285b60
	ctx.lr = 0x83280ADC;
	sub_83285B60(ctx, base);
	// cmpwi cr6,r3,1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 1, ctx.xer);
	// beq cr6,0x83280b08
	if (ctx.cr6.eq) goto loc_83280B08;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,8796(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8796);
	// bl 0x83287b20
	ctx.lr = 0x83280AF0;
	sub_83287B20(ctx, base);
	// cmpwi cr6,r3,1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 1, ctx.xer);
	// bne cr6,0x83280b08
	if (!ctx.cr6.eq) goto loc_83280B08;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,7
	ctx.r4.s64 = 7;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83285b50
	ctx.lr = 0x83280B08;
	sub_83285B50(ctx, base);
loc_83280B08:
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

__attribute__((alias("__imp__sub_83280B1C"))) PPC_WEAK_FUNC(sub_83280B1C);
PPC_FUNC_IMPL(__imp__sub_83280B1C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83280B20"))) PPC_WEAK_FUNC(sub_83280B20);
PPC_FUNC_IMPL(__imp__sub_83280B20) {
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
	// li r4,6
	ctx.r4.s64 = 6;
	// bl 0x83274d00
	ctx.lr = 0x83280B34;
	sub_83274D00(ctx, base);
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

__attribute__((alias("__imp__sub_83280B48"))) PPC_WEAK_FUNC(sub_83280B48);
PPC_FUNC_IMPL(__imp__sub_83280B48) {
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
	// li r4,6
	ctx.r4.s64 = 6;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x83274d00
	ctx.lr = 0x83280B64;
	sub_83274D00(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x83280b84
	if (ctx.cr0.eq) goto loc_83280B84;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,6
	ctx.r5.s64 = 6;
	// li r4,3
	ctx.r4.s64 = 3;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83285af0
	ctx.lr = 0x83280B84;
	sub_83285AF0(ctx, base);
loc_83280B84:
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

__attribute__((alias("__imp__sub_83280B98"))) PPC_WEAK_FUNC(sub_83280B98);
PPC_FUNC_IMPL(__imp__sub_83280B98) {
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
	// li r4,6
	ctx.r4.s64 = 6;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x83274d00
	ctx.lr = 0x83280BB4;
	sub_83274D00(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x83280bd4
	if (ctx.cr0.eq) goto loc_83280BD4;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,7
	ctx.r5.s64 = 7;
	// li r4,3
	ctx.r4.s64 = 3;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83285af0
	ctx.lr = 0x83280BD4;
	sub_83285AF0(ctx, base);
loc_83280BD4:
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

__attribute__((alias("__imp__sub_83280BE8"))) PPC_WEAK_FUNC(sub_83280BE8);
PPC_FUNC_IMPL(__imp__sub_83280BE8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// li r4,6
	ctx.r4.s64 = 6;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x83274d00
	ctx.lr = 0x83280C0C;
	sub_83274D00(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x83280c2c
	if (ctx.cr0.eq) goto loc_83280C2C;
	// li r7,0
	ctx.r7.s64 = 0;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// li r5,8
	ctx.r5.s64 = 8;
	// li r4,3
	ctx.r4.s64 = 3;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83285af0
	ctx.lr = 0x83280C2C;
	sub_83285AF0(ctx, base);
loc_83280C2C:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83280C44"))) PPC_WEAK_FUNC(sub_83280C44);
PPC_FUNC_IMPL(__imp__sub_83280C44) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83280C48"))) PPC_WEAK_FUNC(sub_83280C48);
PPC_FUNC_IMPL(__imp__sub_83280C48) {
	PPC_FUNC_PROLOGUE();
	// lis r4,-256
	ctx.r4.s64 = -16777216;
	// ori r4,r4,2561
	ctx.r4.u64 = ctx.r4.u64 | 2561;
	// b 0x83282390
	sub_83282390(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83280C54"))) PPC_WEAK_FUNC(sub_83280C54);
PPC_FUNC_IMPL(__imp__sub_83280C54) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83280C58"))) PPC_WEAK_FUNC(sub_83280C58);
PPC_FUNC_IMPL(__imp__sub_83280C58) {
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
	// bl 0x83280a60
	ctx.lr = 0x83280C70;
	sub_83280A60(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83280ac0
	ctx.lr = 0x83280C78;
	sub_83280AC0(ctx, base);
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

__attribute__((alias("__imp__sub_83280C90"))) PPC_WEAK_FUNC(sub_83280C90);
PPC_FUNC_IMPL(__imp__sub_83280C90) {
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
	// li r4,6
	ctx.r4.s64 = 6;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x83274d00
	ctx.lr = 0x83280CAC;
	sub_83274D00(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// li r3,0
	ctx.r3.s64 = 0;
	// beq 0x83280cc0
	if (ctx.cr0.eq) goto loc_83280CC0;
	// addi r11,r31,9980
	ctx.r11.s64 = ctx.r31.s64 + 9980;
	// stw r11,8788(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8788, ctx.r11.u32);
loc_83280CC0:
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

__attribute__((alias("__imp__sub_83280CD4"))) PPC_WEAK_FUNC(sub_83280CD4);
PPC_FUNC_IMPL(__imp__sub_83280CD4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83280CD8"))) PPC_WEAK_FUNC(sub_83280CD8);
PPC_FUNC_IMPL(__imp__sub_83280CD8) {
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
	// li r4,6
	ctx.r4.s64 = 6;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x83274d00
	ctx.lr = 0x83280CF4;
	sub_83274D00(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x83280d04
	if (ctx.cr0.eq) goto loc_83280D04;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83280c58
	ctx.lr = 0x83280D04;
	sub_83280C58(ctx, base);
loc_83280D04:
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

__attribute__((alias("__imp__sub_83280D18"))) PPC_WEAK_FUNC(sub_83280D18);
PPC_FUNC_IMPL(__imp__sub_83280D18) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,8516(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8516);
	// lwz r3,0(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// b 0x832f6598
	sub_832F6598(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83280D24"))) PPC_WEAK_FUNC(sub_83280D24);
PPC_FUNC_IMPL(__imp__sub_83280D24) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83280D28"))) PPC_WEAK_FUNC(sub_83280D28);
PPC_FUNC_IMPL(__imp__sub_83280D28) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,8516(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8516);
	// lwz r3,0(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// b 0x832f65d0
	sub_832F65D0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83280D34"))) PPC_WEAK_FUNC(sub_83280D34);
PPC_FUNC_IMPL(__imp__sub_83280D34) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83280D38"))) PPC_WEAK_FUNC(sub_83280D38);
PPC_FUNC_IMPL(__imp__sub_83280D38) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,8516(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8516);
	// lwz r3,0(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// b 0x832f6638
	sub_832F6638(ctx, base);
	return;
}

